/*+@@file@@----------------------------------------------------------------*//*!
 \file		capture.h
 \par Description 
            Video capture sample
 \par  Status: 
 \par Project: 
 \date		Created  on Sat Dec 10 15:51:49 2016
 \date		Modified on Sat Dec 10 15:51:49 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/

#pragma once

extern const UINT WM_APP_PREVIEW_ERROR;		// wparam = HRESULT

extern UINT32 cDevices;
extern IMFActivate **ppDevices;

void ClearDeviceList(void);
HRESULT EnumerateDevices(void);
HRESULT GetDevice(UINT32 index, IMFActivate **ppActivate);
HRESULT GetDeviceName(UINT32 index, WCHAR **ppszName);

typedef struct
{
	GUID subtype;
	UINT32 bitrate;
}
EncodingParameters;

typedef struct Capture Capture;
typedef struct MySourceReaderCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (Capture *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (Capture *This);
	ULONG(STDMETHODCALLTYPE *Release) (Capture *This);
	HRESULT(STDMETHODCALLTYPE *OnReadSample) (Capture *This, HRESULT hrStatus, DWORD dwStreamIndex, DWORD dwStreamFlags, LONGLONG llTimestamp, IMFSample *pSample);
	HRESULT(STDMETHODCALLTYPE *OnFlush) (Capture *This, DWORD dwStreamIndex);
	HRESULT(STDMETHODCALLTYPE *OnEvent) (Capture *This, DWORD dwStreamIndex, IMFMediaEvent *pEvent);
	END_INTERFACE
} MySourceReaderCallbackVtbl;

typedef struct Capture {
	CONST_VTBL struct MySourceReaderCallbackVtbl *lpVtbl;
	long				nRefCount;		// Reference count.
	CRITICAL_SECTION	critsec;

	HWND				hwndEvent;		// Application window to receive events. 

	IMFSourceReader 	*pReader;
	IMFSinkWriter 		*pWriter;

	BOOL				bFirstSample;
	LONGLONG			llBaseTime;

	WCHAR				*pwszSymbolicLink;
}
Capture;

HRESULT CaptureCreateInstance(HWND hwnd, Capture **ppPlayer);
HRESULT StartCapture(Capture *, IMFActivate *pActivate, const WCHAR *pwszFileName, const EncodingParameters *param);
HRESULT EndCaptureSession(Capture *);
BOOL IsCapturing(Capture *);
HRESULT CheckDeviceLost(Capture *, DEV_BROADCAST_HDR *pHdr, BOOL *pbDeviceLost);

enum State
{
	State_NotReady = 0,
	State_Ready,
	State_Capturing,
};

Capture *CaptureCreate(HWND hwnd);
void CaptureDelete(Capture *);
void PostError(Capture *this, HRESULT hr);
HRESULT OpenMediaSource(Capture *, IMFMediaSource *pSource);
HRESULT ConfigureCapture(Capture *, const EncodingParameters *param);
HRESULT EndCaptureInternal(Capture *);
