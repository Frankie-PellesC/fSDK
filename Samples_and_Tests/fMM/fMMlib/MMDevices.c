#define __STDC_WANT_LIB_EXT2__ 1
typedef struct FILE FILE;	//Due to PellesC bug in 'wchar.h'
#include <windows.h>
#include <stdio.h>
#include <uuids.h>
#include <strmif.h>
#include "MMinternals.h"
#include "MM.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_EnumSysDevices
 \details	Enumerates system devices
 \date		Created  on Tue Dec 30 17:36:36 2014
 \date		Modified on Tue Dec 30 17:36:36 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT FMMAPI MM_EnumSysDevices(HMMEDIA hMm, MM_ENUMCALLBACK fn, LPVOID lpArgs)
{
	HRESULT hr;
	ICreateDevEnum *pSysDevEnum = NULL;

	CHECKMMLIB(E_FAIL);

	hr = CoCreateInstance(&CLSID_SystemDeviceEnum, NULL, CLSCTX_INPROC_SERVER,
											&IID_ICreateDevEnum, (void **)&pSysDevEnum);
	if (MM_FAILED(hr))
		return hr;

	/*
	 *	Obtain a class enumerator for the video compressor category.
	 */
	IEnumMoniker *pEnumCat = NULL;
	hr = pSysDevEnum->lpVtbl->CreateClassEnumerator(pSysDevEnum, &CLSID_VideoCompressorCategory, &pEnumCat, 0);
	if (hr != S_OK)
		goto	MM_EnumFilters_Fil;

	/*
	 *	Enumerate the monikers.
	 */
	IMoniker *pMoniker = NULL;
	ULONG cFetched;
	while(pEnumCat->lpVtbl->Next(pEnumCat, 1, &pMoniker, &cFetched) == S_OK)
	{
		IPropertyBag *pPropBag;
		BOOL bFnRet = TRUE;

		hr = pMoniker->lpVtbl->BindToStorage(pMoniker, 0, 0, &IID_IPropertyBag, (void **)&pPropBag);
		if (MM_SUCCEEDED(hr))
		{
			/*
			 *	Retrieve the filter's friendly name.
			 */
			VARIANT varName;
			VariantInit(&varName);
			hr = pPropBag->lpVtbl->Read(pPropBag, L"FriendlyName", &varName, 0);
			if (MM_SUCCEEDED(hr))
			{
				// Give a copy of name to the user.
				char *szFname;
				asprintf(&szFname, "%ls", varName.bstrVal);
				bFnRet = fn(varName.bstrVal, lpArgs);
				free(szFname);
			}
			VariantClear(&varName);

			/*!
			 *	To create an instance of the filter, do the following:
			 *		IBaseFilter *pFilter;
			 *		hr = pMoniker->lpVtbl->BindToObject(pMoniker, NULL, NULL, &IID_IBaseFilter, (void**)&pFilter);
			 *	Now add the filter to the graph. 
			 *	Remember to release pFilter later.
			 */

			pPropBag->lpVtbl->Release(pPropBag);
		}
		pMoniker->lpVtbl->Release(pMoniker);

		if (!bFnRet)
			break;
	}
	pEnumCat->lpVtbl->Release(pEnumCat);

MM_EnumFilters_Fil:
	pSysDevEnum->lpVtbl->Release(pSysDevEnum);

	return hr;
}
 
/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		EnumerateDevices
 \details	The IEnumMoniker interface enumerates a list of IMoniker 
			interfaces, each of which represents a device moniker. The 
			application can read properties from the moniker, or use the 
			moniker to create a DirectShow capture filter for the device. 
			Moniker properties are returned as VARIANT values. The 
			following properties are supported by device monikers.
			CLSID_AudioInputDeviceCategory	Audio capture devices
			CLSID_VideoInputDeviceCategory	Video capture devices

 \date		Created  on Tue Dec 30 18:24:20 2014
 \date		Modified on Tue Dec 30 18:25:28 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT EnumerateDevices(REFGUID category, IEnumMoniker **ppEnum)
{
	// Create the System Device Enumerator.
	ICreateDevEnum *pDevEnum;

	CHECKMMLIB(E_FAIL);

	HRESULT hr = CoCreateInstance(&CLSID_SystemDeviceEnum, NULL,  
						CLSCTX_INPROC_SERVER, &IID_ICreateDevEnum, (void **)&pDevEnum);

	if (MM_SUCCEEDED(hr))
	{
		// Create an enumerator for the category.
		hr = pDevEnum->lpVtbl->CreateClassEnumerator(pDevEnum, category, ppEnum, 0);
		if (hr == S_FALSE)
		{
			hr = E_NOINTERFACE;  // The category is empty. Treat as an error.
		}
		pDevEnum->lpVtbl->Release(pDevEnum);
	}
	return hr;
}

/*!
 *	The IEnumMoniker interface enumerates a list of IMoniker interfaces, each of which represents a device moniker.
 *	The application can read properties from the moniker, or use the moniker to create a DirectShow capture filter
 *	for the device.
 *	Moniker properties are returned as VARIANT values. The following properties are supported by device monikers.
 *	Property			Description												VARIANT Type
 *	"FriendlyName"		The name of the device.									VT_BSTR
 *	"Description"		A description of the device.							VT_BSTR
 *	"DevicePath"		A unique string that identifies the device.				VT_BSTR
 *						(Video capture devices only.)
 *	"WaveInID"			The identifier for an audio capture device.				VT_I4
 *						(Audio capture devices only.)
 *
 *	The "FriendlyName" and "Description" properties are suitable for displaying in a UI.
 *	The "FriendlyName" property is available for every device. It contains a human-readable name for the device.
 *	The "Description" property is available only for DV and D-VHS/MPEG camcorder devices.
 *	For more information, see MSDV Driver and MSTape Driver. If available, it contains a description of the device
 *	which is more specific than the "FriendlyName" property. Typically it includes the vendor name.
 *	The "DevicePath" property is not a human-readable string, but is guaranteed to be unique for each video capture
 *	device on the system. You can use this property to distinguish between two or more instances of the same model of device.
 *	If the "WaveInID" property is present, it means the DirectShow capture filter uses the Waveform Audio APIs
 *	internally to communicate with the device.
 *	The value of the "WaveInID" property corresponds to the identifier used by the waveIn* functions, such as waveInOpen.
 */

void DisplayDeviceInformation(IEnumMoniker *pEnum, MM_ENUMCALLBACK fn, LPVOID lpArgs)
{
	IMoniker *pMoniker = NULL;

	CHECKMMLIB(MMRVOID);

	while (pEnum->lpVtbl->Next(pEnum, 1, &pMoniker, NULL) == S_OK)
	{
		IPropertyBag *pPropBag = NULL;
		HRESULT hr = pMoniker->lpVtbl->BindToStorage(pMoniker, 0, 0, &IID_IPropertyBag, (void **)&pPropBag);
		if (MM_FAILED(hr))
		{
			pMoniker->lpVtbl->Release(pMoniker);
			continue;  
		} 

		VARIANT varDescription;
		VariantInit(&varDescription);
		VARIANT varFriendlyName;
		VariantInit(&varFriendlyName);
		VARIANT varWaveInID;
		VariantInit(&varWaveInID);
		VARIANT varDevicePath;
		VariantInit(&varDevicePath);

		// Get description or friendly name.
		hr = pPropBag->lpVtbl->Read(pPropBag, L"Description", &varDescription, 0);
		if (MM_FAILED(hr))
		{
			hr = pPropBag->lpVtbl->Read(pPropBag, L"FriendlyName", &varDescription, 0);
		}

		// WaveInID applies only to audio capture devices.
		hr = pPropBag->lpVtbl->Read(pPropBag, L"WaveInID", &varWaveInID, 0);

		hr = pPropBag->lpVtbl->Read(pPropBag, L"DevicePath", &varDevicePath, 0);

		char *szMsg;
		char  szFmt[256];
		char  szWaveInID[64];

		//szMsg = malloc((wcslen(varDescription.bstrVal) + wcslen(varFriendlyName.bstrVal) + wcslen(varDevicePath.bstrVal)*4));

		szWaveInID[0] = '\0';
		if (varWaveInID.vt != VT_EMPTY)
			sprintf (szWaveInID, "%d", varWaveInID.lVal);

		sprintf (szFmt, "%s%s%s%s",
						varDescription.vt  == VT_EMPTY ? "%ls" : "Description:  %ls\r\n",
						varFriendlyName.vt == VT_EMPTY ? "%ls" : "FriendlyName: %ls\r\n",
						varWaveInID.vt     == VT_EMPTY ? "%s"  : "WaveInID    : %s\r\n",
						varDevicePath.vt   == VT_EMPTY ? "%ls" : "DevicePath  : %ls\r\n\r\n"
				);
		asprintf (&szMsg, szFmt,
						 varDescription.vt  != VT_EMPTY ? varDescription.bstrVal  : L"",
						 varFriendlyName.vt != VT_EMPTY ? varFriendlyName.bstrVal : L"",
						 //varWaveInID.vt     != VT_EMPTY ? varWaveInID.lVal        : L"",
						 varWaveInID.vt     != VT_EMPTY ? szWaveInID              :  "",
						 varDevicePath.vt   != VT_EMPTY ? varDevicePath.bstrVal   : L""
				 );
		BOOL bFnRet = fn(szMsg, lpArgs);
		free(szMsg);

		VariantClear(&varDescription); 
		VariantClear(&varFriendlyName); 
		VariantClear(&varWaveInID); 
		VariantClear(&varDevicePath); 

		pPropBag->lpVtbl->Release(pPropBag);
		pMoniker->lpVtbl->Release(pMoniker);

		if (!bFnRet)
			break;
	}
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MM_EnumCapture
 \date		Created  on Tue Dec 30 20:46:45 2014
 \date		Modified on Tue Dec 30 20:46:45 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID FMMAPI MM_EnumCapture(MM_ENUMCALLBACK fn, LPVOID lpArgs)
{
	IEnumMoniker *pEnum;

	CHECKMMLIB(MMRVOID);

	HRESULT hr = EnumerateDevices(&CLSID_VideoInputDeviceCategory, &pEnum);
	if (MM_SUCCEEDED(hr))
	{
		DisplayDeviceInformation(pEnum, fn, lpArgs);
		pEnum->lpVtbl->Release(pEnum);
	}
	hr = EnumerateDevices(&CLSID_AudioInputDeviceCategory, &pEnum);
	if (MM_SUCCEEDED(hr))
	{
		DisplayDeviceInformation(pEnum, fn, lpArgs);
		pEnum->lpVtbl->Release(pEnum);
	}
}

/*
	To create a DirectShow capture filter for the device, call the IMoniker::BindToObject method
	to get an IBaseFilter pointer.
	Then call IFilterGraph::AddFilter to add the filter to the filter graph:

		IBaseFilter *pCap = NULL;
		hr = pMoniker->BindToObject(0, 0, IID_IBaseFilter, (void**)&pCap);
		if (MM_SUCCEEDED(hr))
		{
			  hr = m_pGraph->AddFilter(pCap, L"Capture Filter");
		}
*/
