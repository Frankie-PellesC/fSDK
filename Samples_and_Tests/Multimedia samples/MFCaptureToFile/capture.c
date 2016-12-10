/*+@@file@@----------------------------------------------------------------*//*!
 \file		capture.c
 \par Description 
            Manages video capture.
 \par  Status: 
 \par Project: 
 \date		Created  on Sat Dec 10 16:41:10 2016
 \date		Modified on Sat Dec 10 16:41:10 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/

#include <windows.h>
#include <mfapi.h>
#include <mfidl.h>
#include <mfreadwrite.h>
#include <Wmcodecdsp.h>
#include <assert.h>
#include <Dbt.h>
#include <shlwapi.h>

#include "capture.h"

void SafeRelease(void **pp);
void CaptureInit(Capture *this, HWND hwnd);

HRESULT CopyAttribute(IMFMediaType *pSrc, IMFMediaType *pDest, const GUID *key);

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ClearDeviceList
 \date		Created  on Sat Dec 10 16:41:46 2016
 \date		Modified on Sat Dec 10 16:41:46 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void ClearDeviceList(void)
{
	for (UINT32 i = 0; i < cDevices; i++)
	{
		SafeRelease((void **)&ppDevices[i]);
	}
	CoTaskMemFree(ppDevices);
	ppDevices = NULL;

	cDevices = 0;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		EnumerateDevices
 \date		Created  on Sat Dec 10 16:41:49 2016
 \date		Modified on Sat Dec 10 16:41:49 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT EnumerateDevices(void)
{
	HRESULT hr = S_OK;
	IMFAttributes *pAttributes = NULL;

	ClearDeviceList();

	// Initialize an attribute store. We will use this to 
	// specify the enumeration parameters.

	hr = MFCreateAttributes(&pAttributes, 1);

	// Ask for source type = video capture devices
	if (SUCCEEDED(hr))
	{
		hr = pAttributes->lpVtbl->SetGUID(pAttributes, &MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE, &MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_GUID);
	}

	// Enumerate devices.
	if (SUCCEEDED(hr))
	{
		hr = MFEnumDeviceSources(pAttributes, &ppDevices, &cDevices);
	}

	SafeRelease((void **)&pAttributes);

	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		GetDevice
 \date		Created  on Sat Dec 10 16:41:56 2016
 \date		Modified on Sat Dec 10 16:41:56 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT GetDevice(UINT32 index, IMFActivate **ppActivate)
{
	if (index >= cDevices)
	{
		return E_INVALIDARG;
	}

	*ppActivate = ppDevices[index];
	(*ppActivate)->lpVtbl->AddRef(*ppActivate);

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		GetDeviceName
 \date		Created  on Sat Dec 10 16:42:00 2016
 \date		Modified on Sat Dec 10 16:42:00 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT GetDeviceName(UINT32 index, WCHAR **ppszName)
{
	if (index >= cDevices)
	{
		return E_INVALIDARG;
	}

	HRESULT hr = S_OK;

	hr = ppDevices[index]->lpVtbl->GetAllocatedString(ppDevices[index], &MF_DEVSOURCE_ATTRIBUTE_FRIENDLY_NAME, ppszName, NULL);

	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CaptureCreateInstance
 \details	Static class method to create the Capture object.
 \param		[in] hwnd Handle to the window to receive events.
 \param		[in] ppCapture Receives a pointer to the Capture object.
 \date		Created  on Sat Dec 10 16:43:06 2016
 \date		Modified on Sat Dec 10 16:44:20 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CaptureCreateInstance(HWND hwnd, Capture ** ppCapture)
{
	if (ppCapture == NULL)
	{
		return E_POINTER;
	}

	Capture *pCapture = malloc(sizeof(Capture));
	CaptureInit(pCapture, hwnd);

	if (pCapture == NULL)
	{
		return E_OUTOFMEMORY;
	}

	// The Capture constructor sets the ref count to 1.
	*ppCapture = pCapture;

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CaptureDelete
 \details	destructor
 \date		Created  on Sat Dec 10 16:44:47 2016
 \date		Modified on Sat Dec 10 16:44:47 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void CaptureDelete(Capture *this)
{
	assert(this->pReader == NULL);
	assert(this->pWriter == NULL);
	DeleteCriticalSection(&this->critsec);
}

/////////////// IUnknown methods ///////////////

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		QueryInterface
 \date		Created  on Sat Dec 10 16:45:44 2016
 \date		Modified on Sat Dec 10 16:45:44 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT QueryInterface(Capture *this, REFIID riid, void **ppv)
{
	static const QITAB qit[] = {
									QITABENT(Capture, IMFSourceReaderCallback),
									{0},
								};
	return QISearch(this, qit, riid, ppv);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		AddRef
 \date		Created  on Sat Dec 10 16:45:05 2016
 \date		Modified on Sat Dec 10 16:45:05 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
ULONG AddRef(Capture *this)
{
	return InterlockedIncrement(&this->nRefCount);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Release
 \date		Created  on Sat Dec 10 16:45:20 2016
 \date		Modified on Sat Dec 10 16:45:20 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
ULONG Release(Capture *this)
{
	ULONG uCount = InterlockedDecrement(&this->nRefCount);
	if (uCount == 0)
	{
		CaptureDelete(this);
		free(this);
	}
	return uCount;
}

/////////////// IMFSourceReaderCallback methods ///////////////

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnReadSample
 \details	Called when the IMFMediaSource::ReadSample method completes.
 \date		Created  on Sat Dec 10 16:46:05 2016
 \date		Modified on Sat Dec 10 16:46:05 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT OnReadSample(Capture *this, HRESULT hrStatus, DWORD dwStreamIndex, DWORD dwStreamFlags, LONGLONG llTimeStamp, IMFSample *pSample)
{
	EnterCriticalSection(&this->critsec);

	if (!IsCapturing(this))
	{
		LeaveCriticalSection(&this->critsec);
		return S_OK;
	}

	HRESULT hr = S_OK;

	if (FAILED(hrStatus))
	{
		hr = hrStatus;
		goto done;
	}

	if (pSample)
	{
		if (this->bFirstSample)
		{
			this->llBaseTime = llTimeStamp;
			this->bFirstSample = FALSE;
		}

		// rebase the time stamp
		llTimeStamp -= this->llBaseTime;

		hr = pSample->lpVtbl->SetSampleTime(pSample, llTimeStamp);

		if (FAILED(hr))
		{
			goto done;
		}

		hr = this->pWriter->lpVtbl->WriteSample(this->pWriter, 0, pSample);

		if (FAILED(hr))
		{
			goto done;
		}
	}

	// Read another sample.
	hr = this->pReader->lpVtbl->ReadSample(this->pReader, (DWORD)MF_SOURCE_READER_FIRST_VIDEO_STREAM, 0, NULL,	// actual
		NULL,	// flags
		NULL,	// timestamp
		NULL	// sample
		);

  done:
	if (FAILED(hr))
	{
		PostError(this, hr);
	}

	LeaveCriticalSection(&this->critsec);
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnFlush
 \date		Created  on Sat Dec 10 16:52:59 2016
 \date		Modified on Sat Dec 10 16:52:59 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT __stdcall OnFlush(Capture *this, DWORD dw)
{
	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnEvent
 \date		Created  on Sat Dec 10 16:53:03 2016
 \date		Modified on Sat Dec 10 16:53:03 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT __stdcall OnEvent(Capture *this, DWORD dw, IMFMediaEvent *imfevnt)
{
	return S_OK;
}

static MySourceReaderCallbackVtbl Vtbl = { QueryInterface, AddRef, Release, OnReadSample, OnFlush, OnEvent };

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CaptureInit
 \details	Capture constructor
 \date		Created  on Sat Dec 10 16:46:54 2016
 \date		Modified on Sat Dec 10 16:46:54 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void CaptureInit(Capture *this, HWND hwnd)
{
	this->lpVtbl = &Vtbl;
	this->pReader = NULL;
	this->pWriter = NULL;
	this->hwndEvent = hwnd;
	this->nRefCount = 1;
	this->bFirstSample = FALSE;
	this->llBaseTime = 0;
	this->pwszSymbolicLink = NULL;
	InitializeCriticalSection(&this->critsec);
}

/*+@@fnc@@---------------------------------------------------------------- *//*!
   \brief       PostError
   \date        Created  on Sat Dec 10 15:38:17 2016
   \date        Modified on Sat Dec 10 15:38:17 2016
   \ *//*-@@fnc@@---------------------------------------------------------------- */
void PostError(Capture *this, HRESULT hr)
{
	PostMessage(this->hwndEvent, WM_APP_PREVIEW_ERROR, (WPARAM)hr, 0L);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OpenMediaSource
 \details	Set up preview for a specified media source.
 \date		Created  on Sat Dec 10 16:47:17 2016
 \date		Modified on Sat Dec 10 16:47:17 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT OpenMediaSource(Capture *this, IMFMediaSource *pSource)
{
	HRESULT hr = S_OK;

	IMFAttributes *pAttributes = NULL;

	hr = MFCreateAttributes(&pAttributes, 2);

	if (SUCCEEDED(hr))
	{
		hr = pAttributes->lpVtbl->SetUnknown(pAttributes, &MF_SOURCE_READER_ASYNC_CALLBACK, (IUnknown *)this);
	}

	if (SUCCEEDED(hr))
	{
		hr = MFCreateSourceReaderFromMediaSource(pSource, pAttributes, &this->pReader);
	}

	SafeRelease((void **)&pAttributes);
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		StartCapture
 \details	Start capturing.
 \date		Created  on Sat Dec 10 16:47:35 2016
 \date		Modified on Sat Dec 10 16:47:35 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT StartCapture(Capture *this, IMFActivate *pActivate, const WCHAR *pwszFileName, const EncodingParameters *param)
{
	HRESULT hr = S_OK;

	IMFMediaSource *pSource = NULL;

	EnterCriticalSection(&this->critsec);

	// Create the media source for the device.
	hr = pActivate->lpVtbl->ActivateObject(pActivate, __uuidof(IMFMediaSource), (void **)&pSource);

	// Get the symbolic link. This is needed to handle device-
	// loss notifications. (See CheckDeviceLost.)

	if (SUCCEEDED(hr))
	{
		hr = pActivate->lpVtbl->GetAllocatedString(pActivate, &MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_SYMBOLIC_LINK, &this->pwszSymbolicLink, NULL);
	}

	if (SUCCEEDED(hr))
	{
		hr = OpenMediaSource(this, pSource);
	}

	// Create the sink writer 
	if (SUCCEEDED(hr))
	{
		hr = MFCreateSinkWriterFromURL(pwszFileName, NULL, NULL, &this->pWriter);
	}

	// Set up the encoding parameters.
	if (SUCCEEDED(hr))
	{
		hr = ConfigureCapture(this, param);
	}

	if (SUCCEEDED(hr))
	{
		this->bFirstSample = TRUE;
		this->llBaseTime = 0;

		// Request the first video frame.

		hr = this->pReader->lpVtbl->ReadSample(this->pReader, (DWORD)MF_SOURCE_READER_FIRST_VIDEO_STREAM, 0, NULL, NULL, NULL, NULL);
	}

	SafeRelease((void **)&pSource);
	LeaveCriticalSection(&this->critsec);
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		EndCaptureSession
 \details	Stop the capture session.
            NOTE: This method resets the object's state to State_NotReady.
            To start another capture session, call SetCaptureFile.
 \date		Created  on Sat Dec 10 16:48:31 2016
 \date		Modified on Sat Dec 10 16:48:31 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT EndCaptureSession(Capture *this)
{
	EnterCriticalSection(&this->critsec);

	HRESULT hr = S_OK;

	if (this->pWriter)
	{
		hr = this->pWriter->lpVtbl->Finalize(this->pWriter);
	}

	SafeRelease((void **)&this->pWriter);
	SafeRelease((void **)&this->pReader);

	LeaveCriticalSection(&this->critsec);

	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		IsCapturing
 \date		Created  on Sat Dec 10 16:48:40 2016
 \date		Modified on Sat Dec 10 16:48:40 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL IsCapturing(Capture *this)
{
	EnterCriticalSection(&this->critsec);

	BOOL bIsCapturing = (this->pWriter != NULL);

	LeaveCriticalSection(&this->critsec);

	return bIsCapturing;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CheckDeviceLost
 \details	Checks whether the video capture device was removed.
            The application calls this method when is receives a 
            WM_DEVICECHANGE message.
 \date		Created  on Sat Dec 10 16:49:09 2016
 \date		Modified on Sat Dec 10 16:49:09 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CheckDeviceLost(Capture *this, DEV_BROADCAST_HDR *pHdr, BOOL *pbDeviceLost)
{
	if (pbDeviceLost == NULL)
	{
		return E_POINTER;
	}

	EnterCriticalSection(&this->critsec);

	DEV_BROADCAST_DEVICEINTERFACE *pDi = NULL;

	*pbDeviceLost = FALSE;

	if (!IsCapturing(this))
	{
		goto done;
	}
	if (pHdr == NULL)
	{
		goto done;
	}
	if (pHdr->dbch_devicetype != DBT_DEVTYP_DEVICEINTERFACE)
	{
		goto done;
	}

	// Compare the device name with the symbolic link.

	pDi = (DEV_BROADCAST_DEVICEINTERFACE *)pHdr;

	if (this->pwszSymbolicLink)
	{
		if (_wcsicmp(this->pwszSymbolicLink, pDi->dbcc_name) == 0)
		{
			*pbDeviceLost = TRUE;
		}
	}

  done:
	LeaveCriticalSection(&this->critsec);
	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ConfigureSourceReader
 \details	Sets the media type on the source reader.
 \date		Created  on Sat Dec 10 16:49:38 2016
 \date		Modified on Sat Dec 10 16:49:38 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT ConfigureSourceReader(Capture *this, IMFSourceReader *pReader)
{
	// The list of acceptable types.
	GUID subtypes[] = {
		MFVideoFormat_NV12, MFVideoFormat_YUY2, MFVideoFormat_UYVY,
		MFVideoFormat_RGB32, MFVideoFormat_RGB24, MFVideoFormat_IYUV
	};

	HRESULT hr = S_OK;
	BOOL bUseNativeType = FALSE;

	GUID subtype = { 0 };

	IMFMediaType *pType = NULL;

	// If the source's native format matches any of the formats in 
	// the list, prefer the native format.

	// Note: The camera might support multiple output formats, 
	// including a range of frame dimensions. The application could
	// provide a list to the user and have the user select the
	// camera's output format. That is outside the scope of this
	// sample, however.

	hr = pReader->lpVtbl->GetNativeMediaType(pReader, (DWORD)MF_SOURCE_READER_FIRST_VIDEO_STREAM, 0,	// Type index
		&pType);

	if (FAILED(hr))
	{
		goto done;
	}

	hr = pType->lpVtbl->GetGUID(pType, &MF_MT_SUBTYPE, &subtype);

	if (FAILED(hr))
	{
		goto done;
	}

	for (UINT32 i = 0; i < ARRAYSIZE(subtypes); i++)
	{
		if (IsEqualGUID(&subtype, &subtypes[i]))
		{
			hr = pReader->lpVtbl->SetCurrentMediaType(pReader, (DWORD)MF_SOURCE_READER_FIRST_VIDEO_STREAM, NULL, pType);

			bUseNativeType = TRUE;
			break;
		}
	}

	if (!bUseNativeType)
	{
		// None of the native types worked. The camera might offer 
		// output a compressed type such as MJPEG or DV.

		// Try adding a decoder.

		for (UINT32 i = 0; i < ARRAYSIZE(subtypes); i++)
		{
			hr = pType->lpVtbl->SetGUID(pType, &MF_MT_SUBTYPE, &subtypes[i]);

			if (FAILED(hr))
			{
				goto done;
			}

			hr = pReader->lpVtbl->SetCurrentMediaType(pReader, (DWORD)MF_SOURCE_READER_FIRST_VIDEO_STREAM, NULL, pType);

			if (SUCCEEDED(hr))
			{
				break;
			}
		}
	}

  done:
	SafeRelease((void **)&pType);
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ConfigureEncoder
 \date		Created  on Sat Dec 10 16:50:02 2016
 \date		Modified on Sat Dec 10 16:50:02 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT ConfigureEncoder(const EncodingParameters *params, IMFMediaType *pType, IMFSinkWriter *pWriter, DWORD *pdwStreamIndex)
{
	HRESULT hr = S_OK;

	IMFMediaType *pType2 = NULL;

	hr = MFCreateMediaType(&pType2);

	if (SUCCEEDED(hr))
	{
		hr = pType2->lpVtbl->SetGUID(pType2, &MF_MT_MAJOR_TYPE, &MFMediaType_Video);
	}

	if (SUCCEEDED(hr))
	{
		hr = pType2->lpVtbl->SetGUID(pType2, &MF_MT_SUBTYPE, &params->subtype);
	}

	if (SUCCEEDED(hr))
	{
		hr = pType2->lpVtbl->SetUINT32(pType2, &MF_MT_AVG_BITRATE, params->bitrate);
	}

	if (SUCCEEDED(hr))
	{
		hr = CopyAttribute(pType, pType2, &MF_MT_FRAME_SIZE);
	}

	if (SUCCEEDED(hr))
	{
		hr = CopyAttribute(pType, pType2, &MF_MT_FRAME_RATE);
	}

	if (SUCCEEDED(hr))
	{
		hr = CopyAttribute(pType, pType2, &MF_MT_PIXEL_ASPECT_RATIO);
	}

	if (SUCCEEDED(hr))
	{
		hr = CopyAttribute(pType, pType2, &MF_MT_INTERLACE_MODE);
	}

	if (SUCCEEDED(hr))
	{
		hr = pWriter->lpVtbl->AddStream(pWriter, pType2, pdwStreamIndex);
	}

	SafeRelease((void **)&pType2);
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ConfigureCapture
 \details	Configures the capture session.
 \date		Created  on Sat Dec 10 16:50:19 2016
 \date		Modified on Sat Dec 10 16:50:19 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT ConfigureCapture(Capture *this, const EncodingParameters *param)
{
	HRESULT hr = S_OK;
	DWORD sink_stream = 0;

	IMFMediaType *pType = NULL;

	hr = ConfigureSourceReader(this, this->pReader);

	if (SUCCEEDED(hr))
	{
		hr = this->pReader->lpVtbl->GetCurrentMediaType(this->pReader, (DWORD)MF_SOURCE_READER_FIRST_VIDEO_STREAM, &pType);
	}

	if (SUCCEEDED(hr))
	{
		hr = ConfigureEncoder(param, pType, this->pWriter, &sink_stream);
	}

	if (SUCCEEDED(hr))
	{
		// Register the color converter DSP for this process, in the video 
		// processor category. This will enable the sink writer to enumerate
		// the color converter when the sink writer attempts to match the
		// media types.

		hr = MFTRegisterLocalByCLSID(&CLSID_CColorConvertDMO, &MFT_CATEGORY_VIDEO_PROCESSOR, L"", MFT_ENUM_FLAG_SYNCMFT, 0, NULL, 0, NULL);
	}

	if (SUCCEEDED(hr))
	{
		hr = this->pWriter->lpVtbl->SetInputMediaType(this->pWriter, sink_stream, pType, NULL);
	}

	if (SUCCEEDED(hr))
	{
		hr = this->pWriter->lpVtbl->BeginWriting(this->pWriter);
	}

	SafeRelease((void **)&pType);
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		EndCaptureInternal
 \details	Stops capture.
 \date		Created  on Sat Dec 10 16:50:49 2016
 \date		Modified on Sat Dec 10 16:50:49 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT EndCaptureInternal(Capture *this)
{
	HRESULT hr = S_OK;

	if (this->pWriter)
	{
		hr = this->pWriter->lpVtbl->Finalize(this->pWriter);
	}

	SafeRelease((void **)&this->pWriter);
	SafeRelease((void **)&this->pReader);

	CoTaskMemFree(this->pwszSymbolicLink);
	this->pwszSymbolicLink = NULL;

	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CopyAttribute
 \details	Copy an attribute value from one attribute store to another.
 \date		Created  on Sat Dec 10 16:51:08 2016
 \date		Modified on Sat Dec 10 16:51:08 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CopyAttribute(IMFMediaType *pSrc, IMFMediaType *pDest, const GUID *key)
{
	PROPVARIANT var;
	PropVariantInit(&var);

	HRESULT hr = S_OK;

	hr = pSrc->lpVtbl->GetItem(pSrc, key, &var);
	if (SUCCEEDED(hr))
	{
		hr = pDest->lpVtbl->SetItem(pDest, key, &var);
	}

	PropVariantClear(&var);
	return hr;
}
