#include <windows.h>
#include <strmif.h>
#include "MMinternals.h"
#include "MM.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		GetPin
 \date		Created  on Mon Dec 29 19:58:47 2014
 \date		Modified on Mon Dec 29 19:58:47 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT FMMAPI GetPin(IBaseFilter *pFilter, PIN_DIRECTION PinDir, IPin **ppPin)
{
	IEnumPins  *pEnum = NULL;
	IPin	   *pPin = NULL;
	HRESULT    hr;

	CHECKMMLIB(E_FAIL);

	if (ppPin == NULL)
	{
		return E_POINTER;
	}

	hr = pFilter->lpVtbl->EnumPins(pFilter, &pEnum);
	if (FAILED(hr))
	{
		return hr;
	}
	while(pEnum->lpVtbl->Next(pEnum, 1, &pPin, 0) == S_OK)
	{
		PIN_DIRECTION PinDirThis;
		hr = pPin->lpVtbl->QueryDirection(pPin, &PinDirThis);
		if (FAILED(hr))
		{
			pPin->lpVtbl->Release(pPin);
			pEnum->lpVtbl->Release(pEnum);
			return hr;
		}
		if (PinDir == PinDirThis)
		{
			/*
			 *	Found a match. Return the IPin pointer to the caller.
			 */
			*ppPin = pPin;
			pEnum->lpVtbl->Release(pEnum);
			return S_OK;
		}
		/*
		 *	Release the pin for the next time through the loop.
		 */
		pPin->lpVtbl->Release(pPin);
	}
	/*
	 *	No more pins. We did not find a match.
	 */
	pEnum->lpVtbl->Release(pEnum);
	return E_FAIL;	
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		GetPinMediaType
 \details	Given a pin, find a preferred media type.
			If you want to check whether a pin supports a desired media 
			type, but do not need the format details, set ppmt to NULL.
 \param		[in] pPin Pointer to the pin.

 \param		[in] majorType Preferred major type (GUID_NULL = don't care).

 \param		[in] subType Preferred subtype (GUID_NULL = don't care).

 \param		[in] formatType Preferred format type (GUID_NULL = don't care).
 \date		Created  on Mon Dec 29 21:02:36 2014
 \date		Modified on Mon Dec 29 21:07:33 2014
 \warning	If ppmt is not NULL and the method succeeds, the caller must 
			delete the media type, including the format block. 
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT FMMAPI GetPinMediaType(IPin *pPin, REFGUID majorType, REFGUID subType, REFGUID formatType, AM_MEDIA_TYPE **ppmt)
{
	*ppmt = NULL;

	IEnumMediaTypes *pEnum = NULL;
	AM_MEDIA_TYPE *pmt     = NULL;
	BOOL bFound            = FALSE;
	
	CHECKMMLIB(E_FAIL);

	HRESULT hr = pPin->lpVtbl->EnumMediaTypes(pPin, &pEnum);
	if (MM_FAILED(hr))
	{
		return hr;
	}

	while (hr = pEnum->lpVtbl->Next(pEnum, 1, &pmt, NULL), hr == S_OK)
	{
		if (IsEqualGUID(majorType, &GUID_NULL) || IsEqualGUID(majorType, &pmt->majortype))
		{
			if (IsEqualGUID(subType, &GUID_NULL) || IsEqualGUID(subType, &pmt->subtype))
			{
				if (IsEqualGUID(formatType, &GUID_NULL) || 
					IsEqualGUID(formatType, &pmt->formattype))
				{
					/*
					 *	Found a match. 
					 */
					if (ppmt)
					{
						*ppmt = pmt;  // Return it to the caller
					}
					else
					{
						MM_DeleteMediaType(pmt);
					}
					bFound = TRUE;
					break;
				}
			}
		}
		MM_DeleteMediaType(pmt);
	}

	pEnum->lpVtbl->Release(pEnum);

	if (MM_SUCCEEDED(hr))
	{
		if (!bFound)
			hr = E_FAIL;
	}
	return hr;
}
