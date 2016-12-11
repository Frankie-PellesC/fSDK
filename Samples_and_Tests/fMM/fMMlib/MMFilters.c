#include <windows.h>
#include <uuids.h>
#include "MMinternals.h"
#include "MM.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_EnumFilters
 \date		Created  on Mon Dec 29 19:58:42 2014
 \date		Modified on Mon Dec 29 19:58:42 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT FMMAPI MM_EnumFilters (HMMEDIA hMm, MM_ENUMCALLBACK fn, LPVOID lpArgs)
{
	IEnumFilters *pEnum = NULL;
	IBaseFilter *pFilter;
	ULONG cFetched;

	CHECKMMCLASS(hMm, E_FAIL);

	HRESULT hr = _hMm->pigb->lpVtbl->EnumFilters(_hMm->pigb, &pEnum);
	if (MM_FAILED(hr))
		return hr;

	pEnum->lpVtbl->Reset(pEnum);

	while(pEnum->lpVtbl->Next(pEnum, 1, &pFilter, &cFetched) == S_OK)
	{
		MM_FILTERENUMDATA FilterEnumData;
		hr = pFilter->lpVtbl->QueryFilterInfo(pFilter, &FilterEnumData.FilterInfo);
		if (MM_FAILED(hr))
		{
			#if 0
				MessageBox(NULL, TEXT("Could not get the filter info record"),
										TEXT("Error"), MB_OK | MB_ICONERROR);
			#endif
			continue;  // Maybe the next one will work.
		}

		/*
		 *	Callback the user enumeration function
		 */
		FilterEnumData.pFilter = pFilter;
		BOOL bFnRet = fn(&FilterEnumData, lpArgs);

		/*
		 *	The FILTER_INFO structure holds a pointer to the Filter Graph
		 *	Manager, with a reference count that must be released.
		 */
		if (FilterEnumData.FilterInfo.pGraph != NULL)
		{
			FilterEnumData.FilterInfo.pGraph->lpVtbl->Release(FilterEnumData.FilterInfo.pGraph);
		}
		pFilter->lpVtbl->Release(pFilter);

		if (!bFnRet)
			break;
	}

	pEnum->lpVtbl->Release(pEnum);
	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetClassID
 \date		Created  on Sun Mar  1 21:58:54 2015
 \date		Modified on Sun Mar  1 21:58:54 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT FMMAPI MM_GetClassID (PFILTER pFilter, CLSID *pClsid)
{
	if (!pFilter)
		return E_FAIL;

	return pFilter->lpVtbl->GetClassID(pFilter, pClsid);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetFilterByClass
 \date		Created  on Sun Mar  1 22:13:30 2015
 \date		Modified on Sun Mar  1 22:13:30 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
PFILTER FMMAPI MM_GetFilterByClass (HMMEDIA hMm, MM_CLASSFILTER eClassFilter)
{
	IEnumFilters *pEnum  = NULL;
	IBaseFilter *pFilter = NULL;
	ULONG cFetched;

	CHECKMMCLASS(hMm, NULL);

	CLSID *pClsidIn;

	switch (eClassFilter)
	{
		case MM_CLASS_AUDIO:
			pClsidIn = (struct _GUID *)&CLSID_AudioCompressorCategory;
			break;
		case MM_CLASS_VIDEO:
			pClsidIn = (struct _GUID *)&CLSID_VideoCompressorCategory;
			break;
		case MM_CLASS_MUX:
			pClsidIn = (struct _GUID *)&CLSID_AviDest;
			break;
		default:
			return NULL;
	}

	HRESULT hr = _hMm->pigb->lpVtbl->EnumFilters(_hMm->pigb, &pEnum);
	if (MM_FAILED(hr))
		return NULL;

	while(pEnum->lpVtbl->Next(pEnum, 1, &pFilter, &cFetched) == S_OK)
	{
		/*
		 *	Get the Class CLSID and compare it with the one the user requires
		 */
		CLSID Clsid;
		if (FAILED(MM_GetClassID(pFilter, &Clsid)))
			continue;  // Maybe the next one will work.

		if (IsEqualCLSID(pClsidIn, &Clsid))
		{
			pEnum->lpVtbl->Release(pEnum);
			return pFilter;
		}

		pFilter->lpVtbl->Release(pFilter);
	}

	pEnum->lpVtbl->Release(pEnum);
	return NULL;
}
