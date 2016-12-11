#include <windows.h>
#include <olectl.h>
#include <evcode.h>
#include "MMinternals.h"
#include "MM.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		_MM_ShowDialog
 \date		Created  on Sun Mar  1 21:22:27 2015
 \date		Modified on Sun Mar  1 21:22:27 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL _FMMAPI _MM_ShowDialog(IBaseFilter *pFilter, HWND hwnd)
{
		IAMVfwCompressDialogs *pCompressDialog;
		pFilter->lpVtbl->QueryInterface(pFilter, &IID_IAMVfwCompressDialogs, (void **)&pCompressDialog);

		if (pCompressDialog != NULL)
			return MM_SUCCEEDED(pCompressDialog->lpVtbl->ShowDialog(pCompressDialog, VfwCompressDialog_Config, hwnd));

		return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		_MM_ShowPropPages
 \date		Created  on Sun Mar  1 18:02:13 2015
 \date		Modified on Sun Mar  1 18:04:10 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL _FMMAPI _MM_ShowPropPages(PFILTER pFilter,HWND hWnd)
{
	BOOL bRet = FALSE;

	if (!pFilter)
		return FALSE;

	// Get the filter's name and IUnknown pointer.
	FILTER_INFO FilterInfo;

	if (MM_FAILED(pFilter->lpVtbl->QueryFilterInfo(pFilter, &FilterInfo)))
		return FALSE;

	IUnknown *pFilterUnk;
	if (MM_SUCCEEDED(pFilter->lpVtbl->QueryInterface(pFilter, &IID_IUnknown, (void **)&pFilterUnk)))
	{

		ISpecifyPropertyPages *pProp;
		pProp = MM_GetPropPage(pFilter);
		if (pProp)
		{
			// Show the page.
			CAUUID caGUID;
			pProp->lpVtbl->GetPages(pProp, &caGUID);
			pProp->lpVtbl->Release(pProp);
			OleCreatePropertyFrame(
					hWnd,                   // Parent window
					0, 0,                   // Reserved
					FilterInfo.achName,     // Caption for the dialog box
					1,                      // Number of objects (just the filter)
					&pFilterUnk,            // Array of object pointers.
					caGUID.cElems,          // Number of property pages
					caGUID.pElems,          // Array of property page CLSIDs
					0,                      // Locale identifier
					0, NULL                 // Reserved
					);

			CoTaskMemFree(caGUID.pElems);
			bRet = TRUE;
		}
		// Clean up.
		pFilterUnk->lpVtbl->Release(pFilterUnk);
	}

	FilterInfo.pGraph->lpVtbl->Release(FilterInfo.pGraph);

	return bRet;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_GetPropPage
 \date		Created  on Mon Mar  2 00:50:17 2015
 \date		Modified on Mon Mar  2 00:50:17 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
ISpecifyPropertyPages FMMAPI *MM_GetPropPage(PFILTER pFilter)
{
	if (!pFilter)
		return NULL;

	ISpecifyPropertyPages *pProp;

	if (SUCCEEDED(pFilter->lpVtbl->QueryInterface(pFilter, &IID_ISpecifyPropertyPages, (void **)&pProp)))
		return pProp;
	return NULL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_PropPages
 \date		Created  on Sun Mar  1 21:19:51 2015
 \date		Modified on Sun Mar  1 21:19:51 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_PropPages(PFILTER pFilter, HWND hWnd)
{
	if (!pFilter)
		return FALSE;

	BOOL bRet = _MM_ShowPropPages(pFilter, hWnd);

	if (!bRet)		//If the filter doesn't implement ISpecifyPropertyPages, try displaying IAMVfwCompressDialogs
	{
		bRet = _MM_ShowDialog(pFilter, hWnd);
	}

	return bRet;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_PropPagesMixRenderer
 \date		Created  on Sun Mar  1 18:04:18 2015
 \date		Modified on Sun Mar  1 21:14:49 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FMMAPI MM_PropPagesMixRenderer(HMMEDIA hMm, HWND hWnd)
{
	CHECKMMCLASS(hMm, FALSE);

	if (!CHKBITS(_hMm, (_MMIFACEREADY | _MMFILEREADY)))
		return FALSE;

	return MM_PropPages(_hMm->pivmr, hWnd);
}
