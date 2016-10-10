/*+@@file@@----------------------------------------------------------------*//*!
 \file		sbe.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 21:45:34 2016
 \date		Modified on Fri Sep 16 21:45:34 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __sbe_h__
#define __sbe_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IStreamBufferInitialize_FWD_DEFINED__
#define __IStreamBufferInitialize_FWD_DEFINED__
typedef interface IStreamBufferInitialize IStreamBufferInitialize;
#endif
#ifndef __IStreamBufferSink_FWD_DEFINED__
#define __IStreamBufferSink_FWD_DEFINED__
typedef interface IStreamBufferSink IStreamBufferSink;
#endif
#ifndef __IStreamBufferSink2_FWD_DEFINED__
#define __IStreamBufferSink2_FWD_DEFINED__
typedef interface IStreamBufferSink2 IStreamBufferSink2;
#endif
#ifndef __IStreamBufferSink3_FWD_DEFINED__
#define __IStreamBufferSink3_FWD_DEFINED__
typedef interface IStreamBufferSink3 IStreamBufferSink3;
#endif
#ifndef __IStreamBufferSource_FWD_DEFINED__
#define __IStreamBufferSource_FWD_DEFINED__
typedef interface IStreamBufferSource IStreamBufferSource;
#endif
#ifndef __IStreamBufferRecordControl_FWD_DEFINED__
#define __IStreamBufferRecordControl_FWD_DEFINED__
typedef interface IStreamBufferRecordControl IStreamBufferRecordControl;
#endif
#ifndef __IStreamBufferRecComp_FWD_DEFINED__
#define __IStreamBufferRecComp_FWD_DEFINED__
typedef interface IStreamBufferRecComp IStreamBufferRecComp;
#endif
#ifndef __IStreamBufferRecordingAttribute_FWD_DEFINED__
#define __IStreamBufferRecordingAttribute_FWD_DEFINED__
typedef interface IStreamBufferRecordingAttribute IStreamBufferRecordingAttribute;
#endif
#ifndef __IEnumStreamBufferRecordingAttrib_FWD_DEFINED__
#define __IEnumStreamBufferRecordingAttrib_FWD_DEFINED__
typedef interface IEnumStreamBufferRecordingAttrib IEnumStreamBufferRecordingAttrib;
#endif
#ifndef __IStreamBufferConfigure_FWD_DEFINED__
#define __IStreamBufferConfigure_FWD_DEFINED__
typedef interface IStreamBufferConfigure IStreamBufferConfigure;
#endif
#ifndef __IStreamBufferConfigure2_FWD_DEFINED__
#define __IStreamBufferConfigure2_FWD_DEFINED__
typedef interface IStreamBufferConfigure2 IStreamBufferConfigure2;
#endif
#ifndef __IStreamBufferConfigure3_FWD_DEFINED__
#define __IStreamBufferConfigure3_FWD_DEFINED__
typedef interface IStreamBufferConfigure3 IStreamBufferConfigure3;
#endif
#ifndef __IStreamBufferMediaSeeking_FWD_DEFINED__
#define __IStreamBufferMediaSeeking_FWD_DEFINED__
typedef interface IStreamBufferMediaSeeking IStreamBufferMediaSeeking;
#endif
#ifndef __IStreamBufferMediaSeeking2_FWD_DEFINED__
#define __IStreamBufferMediaSeeking2_FWD_DEFINED__
typedef interface IStreamBufferMediaSeeking2 IStreamBufferMediaSeeking2;
#endif
#ifndef __IStreamBufferDataCounters_FWD_DEFINED__
#define __IStreamBufferDataCounters_FWD_DEFINED__
typedef interface IStreamBufferDataCounters IStreamBufferDataCounters;
#endif
#ifndef __ISBE2GlobalEvent_FWD_DEFINED__
#define __ISBE2GlobalEvent_FWD_DEFINED__
typedef interface ISBE2GlobalEvent ISBE2GlobalEvent;
#endif
#ifndef __ISBE2GlobalEvent2_FWD_DEFINED__
#define __ISBE2GlobalEvent2_FWD_DEFINED__
typedef interface ISBE2GlobalEvent2 ISBE2GlobalEvent2;
#endif
#ifndef __ISBE2SpanningEvent_FWD_DEFINED__
#define __ISBE2SpanningEvent_FWD_DEFINED__
typedef interface ISBE2SpanningEvent ISBE2SpanningEvent;
#endif
#ifndef __ISBE2Crossbar_FWD_DEFINED__
#define __ISBE2Crossbar_FWD_DEFINED__
typedef interface ISBE2Crossbar ISBE2Crossbar;
#endif
#ifndef __ISBE2StreamMap_FWD_DEFINED__
#define __ISBE2StreamMap_FWD_DEFINED__
typedef interface ISBE2StreamMap ISBE2StreamMap;
#endif
#ifndef __ISBE2EnumStream_FWD_DEFINED__
#define __ISBE2EnumStream_FWD_DEFINED__
typedef interface ISBE2EnumStream ISBE2EnumStream;
#endif
#ifndef __ISBE2MediaTypeProfile_FWD_DEFINED__
#define __ISBE2MediaTypeProfile_FWD_DEFINED__
typedef interface ISBE2MediaTypeProfile ISBE2MediaTypeProfile;
#endif
#ifndef __ISBE2FileScan_FWD_DEFINED__
#define __ISBE2FileScan_FWD_DEFINED__
typedef interface ISBE2FileScan ISBE2FileScan;
#endif
#include "unknwn.h"
#include "objidl.h"
#include "strmif.h"
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0000_v0_0_s_ifspec;
#ifndef __IStreamBufferInitialize_INTERFACE_DEFINED__
#define __IStreamBufferInitialize_INTERFACE_DEFINED__
extern const IID IID_IStreamBufferInitialize;
typedef struct IStreamBufferInitializeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStreamBufferInitialize * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStreamBufferInitialize * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStreamBufferInitialize * This);
	HRESULT(STDMETHODCALLTYPE * SetHKEY) (IStreamBufferInitialize * This, HKEY hkeyRoot);
	HRESULT(STDMETHODCALLTYPE * SetSIDs) (IStreamBufferInitialize * This, DWORD cSIDs, PSID * ppSID);
	END_INTERFACE
}  IStreamBufferInitializeVtbl;
interface IStreamBufferInitialize
{
	CONST_VTBL struct IStreamBufferInitializeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamBufferInitialize_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamBufferInitialize_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStreamBufferInitialize_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStreamBufferInitialize_SetHKEY(This,hkeyRoot) ( (This)->lpVtbl -> SetHKEY(This,hkeyRoot) )
#define IStreamBufferInitialize_SetSIDs(This,cSIDs,ppSID) ( (This)->lpVtbl -> SetSIDs(This,cSIDs,ppSID) )
#endif
#endif
enum __MIDL___MIDL_itf_sbe_0000_0001_0001
{
	RECORDING_TYPE_CONTENT = 0,
	RECORDING_TYPE_REFERENCE = (RECORDING_TYPE_CONTENT + 1)
};
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0001_v0_0_s_ifspec;
#ifndef __IStreamBufferSink_INTERFACE_DEFINED__
#define __IStreamBufferSink_INTERFACE_DEFINED__
extern const IID IID_IStreamBufferSink;
typedef struct IStreamBufferSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStreamBufferSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStreamBufferSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStreamBufferSink * This);
	HRESULT(STDMETHODCALLTYPE * LockProfile) (IStreamBufferSink * This, LPCWSTR pszStreamBufferFilename);
	HRESULT(STDMETHODCALLTYPE * CreateRecorder) (IStreamBufferSink * This, LPCWSTR pszFilename, DWORD dwRecordType, IUnknown ** pRecordingIUnknown);
	HRESULT(STDMETHODCALLTYPE * IsProfileLocked) (IStreamBufferSink * This);
	END_INTERFACE
}  IStreamBufferSinkVtbl;
interface IStreamBufferSink
{
	CONST_VTBL struct IStreamBufferSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamBufferSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamBufferSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStreamBufferSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStreamBufferSink_LockProfile(This,pszStreamBufferFilename) ( (This)->lpVtbl -> LockProfile(This,pszStreamBufferFilename) )
#define IStreamBufferSink_CreateRecorder(This,pszFilename,dwRecordType,pRecordingIUnknown) ( (This)->lpVtbl -> CreateRecorder(This,pszFilename,dwRecordType,pRecordingIUnknown) )
#define IStreamBufferSink_IsProfileLocked(This) ( (This)->lpVtbl -> IsProfileLocked(This) )
#endif
#endif
#ifndef __IStreamBufferSink2_INTERFACE_DEFINED__
#define __IStreamBufferSink2_INTERFACE_DEFINED__
extern const IID IID_IStreamBufferSink2;
typedef struct IStreamBufferSink2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStreamBufferSink2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStreamBufferSink2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStreamBufferSink2 * This);
	HRESULT(STDMETHODCALLTYPE * LockProfile) (IStreamBufferSink2 * This, LPCWSTR pszStreamBufferFilename);
	HRESULT(STDMETHODCALLTYPE * CreateRecorder) (IStreamBufferSink2 * This, LPCWSTR pszFilename, DWORD dwRecordType, IUnknown ** pRecordingIUnknown);
	HRESULT(STDMETHODCALLTYPE * IsProfileLocked) (IStreamBufferSink2 * This);
	HRESULT(STDMETHODCALLTYPE * UnlockProfile) (IStreamBufferSink2 * This);
	END_INTERFACE
}  IStreamBufferSink2Vtbl;
interface IStreamBufferSink2
{
	CONST_VTBL struct IStreamBufferSink2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamBufferSink2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamBufferSink2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStreamBufferSink2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStreamBufferSink2_LockProfile(This,pszStreamBufferFilename) ( (This)->lpVtbl -> LockProfile(This,pszStreamBufferFilename) )
#define IStreamBufferSink2_CreateRecorder(This,pszFilename,dwRecordType,pRecordingIUnknown) ( (This)->lpVtbl -> CreateRecorder(This,pszFilename,dwRecordType,pRecordingIUnknown) )
#define IStreamBufferSink2_IsProfileLocked(This) ( (This)->lpVtbl -> IsProfileLocked(This) )
#define IStreamBufferSink2_UnlockProfile(This) ( (This)->lpVtbl -> UnlockProfile(This) )
#endif
#endif
#ifndef __IStreamBufferSink3_INTERFACE_DEFINED__
#define __IStreamBufferSink3_INTERFACE_DEFINED__
extern const IID IID_IStreamBufferSink3;
typedef struct IStreamBufferSink3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStreamBufferSink3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStreamBufferSink3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStreamBufferSink3 * This);
	HRESULT(STDMETHODCALLTYPE * LockProfile) (IStreamBufferSink3 * This, LPCWSTR pszStreamBufferFilename);
	HRESULT(STDMETHODCALLTYPE * CreateRecorder) (IStreamBufferSink3 * This, LPCWSTR pszFilename, DWORD dwRecordType, IUnknown ** pRecordingIUnknown);
	HRESULT(STDMETHODCALLTYPE * IsProfileLocked) (IStreamBufferSink3 * This);
	HRESULT(STDMETHODCALLTYPE * UnlockProfile) (IStreamBufferSink3 * This);
	HRESULT(STDMETHODCALLTYPE * SetAvailableFilter) (IStreamBufferSink3 * This, REFERENCE_TIME * prtMin);
	END_INTERFACE
}  IStreamBufferSink3Vtbl;
interface IStreamBufferSink3
{
	CONST_VTBL struct IStreamBufferSink3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamBufferSink3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamBufferSink3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStreamBufferSink3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStreamBufferSink3_LockProfile(This,pszStreamBufferFilename) ( (This)->lpVtbl -> LockProfile(This,pszStreamBufferFilename) )
#define IStreamBufferSink3_CreateRecorder(This,pszFilename,dwRecordType,pRecordingIUnknown) ( (This)->lpVtbl -> CreateRecorder(This,pszFilename,dwRecordType,pRecordingIUnknown) )
#define IStreamBufferSink3_IsProfileLocked(This) ( (This)->lpVtbl -> IsProfileLocked(This) )
#define IStreamBufferSink3_UnlockProfile(This) ( (This)->lpVtbl -> UnlockProfile(This) )
#define IStreamBufferSink3_SetAvailableFilter(This,prtMin) ( (This)->lpVtbl -> SetAvailableFilter(This,prtMin) )
#endif
#endif
#ifndef __IStreamBufferSource_INTERFACE_DEFINED__
#define __IStreamBufferSource_INTERFACE_DEFINED__
extern const IID IID_IStreamBufferSource;
typedef struct IStreamBufferSourceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStreamBufferSource * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStreamBufferSource * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStreamBufferSource * This);
	HRESULT(STDMETHODCALLTYPE * SetStreamSink) (IStreamBufferSource * This, IStreamBufferSink * pIStreamBufferSink);
	END_INTERFACE
}  IStreamBufferSourceVtbl;
interface IStreamBufferSource
{
	CONST_VTBL struct IStreamBufferSourceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamBufferSource_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamBufferSource_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStreamBufferSource_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStreamBufferSource_SetStreamSink(This,pIStreamBufferSink) ( (This)->lpVtbl -> SetStreamSink(This,pIStreamBufferSink) )
#endif
#endif
#ifndef __IStreamBufferRecordControl_INTERFACE_DEFINED__
#define __IStreamBufferRecordControl_INTERFACE_DEFINED__
extern const IID IID_IStreamBufferRecordControl;
typedef struct IStreamBufferRecordControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStreamBufferRecordControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStreamBufferRecordControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStreamBufferRecordControl * This);
	HRESULT(STDMETHODCALLTYPE * Start) (IStreamBufferRecordControl * This, REFERENCE_TIME * prtStart);
	HRESULT(STDMETHODCALLTYPE * Stop) (IStreamBufferRecordControl * This, REFERENCE_TIME rtStop);
	HRESULT(STDMETHODCALLTYPE * GetRecordingStatus) (IStreamBufferRecordControl * This, HRESULT * phResult, BOOL * pbStarted, BOOL * pbStopped);
	END_INTERFACE
}  IStreamBufferRecordControlVtbl;
interface IStreamBufferRecordControl
{
	CONST_VTBL struct IStreamBufferRecordControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamBufferRecordControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamBufferRecordControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStreamBufferRecordControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStreamBufferRecordControl_Start(This,prtStart) ( (This)->lpVtbl -> Start(This,prtStart) )
#define IStreamBufferRecordControl_Stop(This,rtStop) ( (This)->lpVtbl -> Stop(This,rtStop) )
#define IStreamBufferRecordControl_GetRecordingStatus(This,phResult,pbStarted,pbStopped) ( (This)->lpVtbl -> GetRecordingStatus(This,phResult,pbStarted,pbStopped) )
#endif
#endif
#ifndef __IStreamBufferRecComp_INTERFACE_DEFINED__
#define __IStreamBufferRecComp_INTERFACE_DEFINED__
extern const IID IID_IStreamBufferRecComp;
typedef struct IStreamBufferRecCompVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStreamBufferRecComp * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStreamBufferRecComp * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStreamBufferRecComp * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IStreamBufferRecComp * This, LPCWSTR pszTargetFilename, LPCWSTR pszSBRecProfileRef);
	HRESULT(STDMETHODCALLTYPE * Append) (IStreamBufferRecComp * This, LPCWSTR pszSBRecording);
	HRESULT(STDMETHODCALLTYPE * AppendEx) (IStreamBufferRecComp * This, LPCWSTR pszSBRecording, REFERENCE_TIME rtStart, REFERENCE_TIME rtStop);
	HRESULT(STDMETHODCALLTYPE * GetCurrentLength) (IStreamBufferRecComp * This, DWORD * pcSeconds);
	HRESULT(STDMETHODCALLTYPE * Close) (IStreamBufferRecComp * This);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IStreamBufferRecComp * This);
	END_INTERFACE
}  IStreamBufferRecCompVtbl;
interface IStreamBufferRecComp
{
	CONST_VTBL struct IStreamBufferRecCompVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamBufferRecComp_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamBufferRecComp_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStreamBufferRecComp_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStreamBufferRecComp_Initialize(This,pszTargetFilename,pszSBRecProfileRef) ( (This)->lpVtbl -> Initialize(This,pszTargetFilename,pszSBRecProfileRef) )
#define IStreamBufferRecComp_Append(This,pszSBRecording) ( (This)->lpVtbl -> Append(This,pszSBRecording) )
#define IStreamBufferRecComp_AppendEx(This,pszSBRecording,rtStart,rtStop) ( (This)->lpVtbl -> AppendEx(This,pszSBRecording,rtStart,rtStop) )
#define IStreamBufferRecComp_GetCurrentLength(This,pcSeconds) ( (This)->lpVtbl -> GetCurrentLength(This,pcSeconds) )
#define IStreamBufferRecComp_Close(This) ( (This)->lpVtbl -> Close(This) )
#define IStreamBufferRecComp_Cancel(This) ( (This)->lpVtbl -> Cancel(This) )
#endif
#endif
#pragma warn(push)
#pragma warn(disable: 2135)
static const WCHAR g_wszStreamBufferRecordingDuration[] = L"Duration";
static const WCHAR g_wszStreamBufferRecordingBitrate[] = L"Bitrate";
static const WCHAR g_wszStreamBufferRecordingSeekable[] = L"Seekable";
static const WCHAR g_wszStreamBufferRecordingStridable[] = L"Stridable";
static const WCHAR g_wszStreamBufferRecordingBroadcast[] = L"Broadcast";
static const WCHAR g_wszStreamBufferRecordingProtected[] = L"Is_Protected";
static const WCHAR g_wszStreamBufferRecordingTrusted[] = L"Is_Trusted";
static const WCHAR g_wszStreamBufferRecordingSignature_Name[] = L"Signature_Name";
static const WCHAR g_wszStreamBufferRecordingHasAudio[] = L"HasAudio";
static const WCHAR g_wszStreamBufferRecordingHasImage[] = L"HasImage";
static const WCHAR g_wszStreamBufferRecordingHasScript[] = L"HasScript";
static const WCHAR g_wszStreamBufferRecordingHasVideo[] = L"HasVideo";
static const WCHAR g_wszStreamBufferRecordingCurrentBitrate[] = L"CurrentBitrate";
static const WCHAR g_wszStreamBufferRecordingOptimalBitrate[] = L"OptimalBitrate";
static const WCHAR g_wszStreamBufferRecordingHasAttachedImages[] = L"HasAttachedImages";
static const WCHAR g_wszStreamBufferRecordingSkipBackward[] = L"Can_Skip_Backward";
static const WCHAR g_wszStreamBufferRecordingSkipForward[] = L"Can_Skip_Forward";
static const WCHAR g_wszStreamBufferRecordingNumberOfFrames[] = L"NumberOfFrames";
static const WCHAR g_wszStreamBufferRecordingFileSize[] = L"FileSize";
static const WCHAR g_wszStreamBufferRecordingHasArbitraryDataStream[] = L"HasArbitraryDataStream";
static const WCHAR g_wszStreamBufferRecordingHasFileTransferStream[] = L"HasFileTransferStream";
static const WCHAR g_wszStreamBufferRecordingTitle[] = L"Title";
static const WCHAR g_wszStreamBufferRecordingAuthor[] = L"Author";
static const WCHAR g_wszStreamBufferRecordingDescription[] = L"Description";
static const WCHAR g_wszStreamBufferRecordingRating[] = L"Rating";
static const WCHAR g_wszStreamBufferRecordingCopyright[] = L"Copyright";
static const WCHAR *g_wszStreamBufferRecordingUse_DRM = L"Use_DRM";
static const WCHAR *g_wszStreamBufferRecordingDRM_Flags = L"DRM_Flags";
static const WCHAR *g_wszStreamBufferRecordingDRM_Level = L"DRM_Level";
static const WCHAR g_wszStreamBufferRecordingAlbumTitle[] = L"WM/AlbumTitle";
static const WCHAR g_wszStreamBufferRecordingTrack[] = L"WM/Track";
static const WCHAR g_wszStreamBufferRecordingPromotionURL[] = L"WM/PromotionURL";
static const WCHAR g_wszStreamBufferRecordingAlbumCoverURL[] = L"WM/AlbumCoverURL";
static const WCHAR g_wszStreamBufferRecordingGenre[] = L"WM/Genre";
static const WCHAR g_wszStreamBufferRecordingYear[] = L"WM/Year";
static const WCHAR g_wszStreamBufferRecordingGenreID[] = L"WM/GenreID";
static const WCHAR g_wszStreamBufferRecordingMCDI[] = L"WM/MCDI";
static const WCHAR g_wszStreamBufferRecordingComposer[] = L"WM/Composer";
static const WCHAR g_wszStreamBufferRecordingLyrics[] = L"WM/Lyrics";
static const WCHAR g_wszStreamBufferRecordingTrackNumber[] = L"WM/TrackNumber";
static const WCHAR g_wszStreamBufferRecordingToolName[] = L"WM/ToolName";
static const WCHAR g_wszStreamBufferRecordingToolVersion[] = L"WM/ToolVersion";
static const WCHAR g_wszStreamBufferRecordingIsVBR[] = L"IsVBR";
static const WCHAR g_wszStreamBufferRecordingAlbumArtist[] = L"WM/AlbumArtist";
static const WCHAR g_wszStreamBufferRecordingBannerImageType[] = L"BannerImageType";
static const WCHAR g_wszStreamBufferRecordingBannerImageData[] = L"BannerImageData";
static const WCHAR g_wszStreamBufferRecordingBannerImageURL[] = L"BannerImageURL";
static const WCHAR g_wszStreamBufferRecordingCopyrightURL[] = L"CopyrightURL";
static const WCHAR g_wszStreamBufferRecordingAspectRatioX[] = L"AspectRatioX";
static const WCHAR g_wszStreamBufferRecordingAspectRatioY[] = L"AspectRatioY";
static const WCHAR g_wszStreamBufferRecordingNSCName[] = L"NSC_Name";
static const WCHAR g_wszStreamBufferRecordingNSCAddress[] = L"NSC_Address";
static const WCHAR g_wszStreamBufferRecordingNSCPhone[] = L"NSC_Phone";
static const WCHAR g_wszStreamBufferRecordingNSCEmail[] = L"NSC_Email";
static const WCHAR g_wszStreamBufferRecordingNSCDescription[] = L"NSC_Description";
#pragma warn(pop)
typedef DECLSPEC_UUID("99038221-f409-4d44-8313-bff73269a85e")
enum STREAMBUFFER_ATTR_DATATYPE
{
	STREAMBUFFER_TYPE_DWORD = 0,
	STREAMBUFFER_TYPE_STRING = 1,
	STREAMBUFFER_TYPE_BINARY = 2,
	STREAMBUFFER_TYPE_BOOL = 3,
	STREAMBUFFER_TYPE_QWORD = 4,
	STREAMBUFFER_TYPE_WORD = 5,
	STREAMBUFFER_TYPE_GUID = 6
} STREAMBUFFER_ATTR_DATATYPE;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0007_v0_0_s_ifspec;
#ifndef __IStreamBufferRecordingAttribute_INTERFACE_DEFINED__
#define __IStreamBufferRecordingAttribute_INTERFACE_DEFINED__
extern const IID IID_IStreamBufferRecordingAttribute;
typedef struct IStreamBufferRecordingAttributeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStreamBufferRecordingAttribute * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStreamBufferRecordingAttribute * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStreamBufferRecordingAttribute * This);
	HRESULT(STDMETHODCALLTYPE * SetAttribute) (IStreamBufferRecordingAttribute * This, ULONG ulReserved, LPCWSTR pszAttributeName, STREAMBUFFER_ATTR_DATATYPE StreamBufferAttributeType, BYTE * pbAttribute, WORD cbAttributeLength);
	HRESULT(STDMETHODCALLTYPE * GetAttributeCount) (IStreamBufferRecordingAttribute * This, ULONG ulReserved, WORD * pcAttributes);
	HRESULT(STDMETHODCALLTYPE * GetAttributeByName) (IStreamBufferRecordingAttribute * This, LPCWSTR pszAttributeName, ULONG * pulReserved, STREAMBUFFER_ATTR_DATATYPE * pStreamBufferAttributeType, BYTE * pbAttribute, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * GetAttributeByIndex) (IStreamBufferRecordingAttribute * This, WORD wIndex, ULONG * pulReserved, WCHAR * pszAttributeName, WORD * pcchNameLength, STREAMBUFFER_ATTR_DATATYPE * pStreamBufferAttributeType, BYTE * pbAttribute, WORD * pcbLength);
	HRESULT(STDMETHODCALLTYPE * EnumAttributes) (IStreamBufferRecordingAttribute * This, IEnumStreamBufferRecordingAttrib ** ppIEnumStreamBufferAttrib);
	END_INTERFACE
}  IStreamBufferRecordingAttributeVtbl;
interface IStreamBufferRecordingAttribute
{
	CONST_VTBL struct IStreamBufferRecordingAttributeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamBufferRecordingAttribute_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamBufferRecordingAttribute_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStreamBufferRecordingAttribute_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStreamBufferRecordingAttribute_SetAttribute(This,ulReserved,pszAttributeName,StreamBufferAttributeType,pbAttribute,cbAttributeLength) ( (This)->lpVtbl -> SetAttribute(This,ulReserved,pszAttributeName,StreamBufferAttributeType,pbAttribute,cbAttributeLength) )
#define IStreamBufferRecordingAttribute_GetAttributeCount(This,ulReserved,pcAttributes) ( (This)->lpVtbl -> GetAttributeCount(This,ulReserved,pcAttributes) )
#define IStreamBufferRecordingAttribute_GetAttributeByName(This,pszAttributeName,pulReserved,pStreamBufferAttributeType,pbAttribute,pcbLength) ( (This)->lpVtbl -> GetAttributeByName(This,pszAttributeName,pulReserved,pStreamBufferAttributeType,pbAttribute,pcbLength) )
#define IStreamBufferRecordingAttribute_GetAttributeByIndex(This,wIndex,pulReserved,pszAttributeName,pcchNameLength,pStreamBufferAttributeType,pbAttribute,pcbLength) ( (This)->lpVtbl -> GetAttributeByIndex(This,wIndex,pulReserved,pszAttributeName,pcchNameLength,pStreamBufferAttributeType,pbAttribute,pcbLength) )
#define IStreamBufferRecordingAttribute_EnumAttributes(This,ppIEnumStreamBufferAttrib) ( (This)->lpVtbl -> EnumAttributes(This,ppIEnumStreamBufferAttrib) )
#endif
#endif
typedef struct STREAMBUFFER_ATTRIBUTE
{
	LPWSTR pszName;
	STREAMBUFFER_ATTR_DATATYPE StreamBufferAttributeType;
	BYTE *pbAttribute;
	WORD cbLength;
} STREAMBUFFER_ATTRIBUTE;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0008_v0_0_s_ifspec;
#ifndef __IEnumStreamBufferRecordingAttrib_INTERFACE_DEFINED__
#define __IEnumStreamBufferRecordingAttrib_INTERFACE_DEFINED__
extern const IID IID_IEnumStreamBufferRecordingAttrib;
typedef struct IEnumStreamBufferRecordingAttribVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumStreamBufferRecordingAttrib *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumStreamBufferRecordingAttrib *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumStreamBufferRecordingAttrib *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumStreamBufferRecordingAttrib *This, ULONG cRequest, STREAMBUFFER_ATTRIBUTE *pStreamBufferAttribute, ULONG *pcReceived);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumStreamBufferRecordingAttrib *This, ULONG cRecords);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumStreamBufferRecordingAttrib *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumStreamBufferRecordingAttrib *This, IEnumStreamBufferRecordingAttrib **ppIEnumStreamBufferAttrib);
	END_INTERFACE
}  IEnumStreamBufferRecordingAttribVtbl;
interface IEnumStreamBufferRecordingAttrib
{
	CONST_VTBL struct IEnumStreamBufferRecordingAttribVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumStreamBufferRecordingAttrib_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumStreamBufferRecordingAttrib_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumStreamBufferRecordingAttrib_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumStreamBufferRecordingAttrib_Next(This,cRequest,pStreamBufferAttribute,pcReceived) ( (This)->lpVtbl -> Next(This,cRequest,pStreamBufferAttribute,pcReceived) )
#define IEnumStreamBufferRecordingAttrib_Skip(This,cRecords) ( (This)->lpVtbl -> Skip(This,cRecords) )
#define IEnumStreamBufferRecordingAttrib_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumStreamBufferRecordingAttrib_Clone(This,ppIEnumStreamBufferAttrib) ( (This)->lpVtbl -> Clone(This,ppIEnumStreamBufferAttrib) )
#endif
#endif
#ifndef __IStreamBufferConfigure_INTERFACE_DEFINED__
#define __IStreamBufferConfigure_INTERFACE_DEFINED__
extern const IID IID_IStreamBufferConfigure;
typedef struct IStreamBufferConfigureVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IStreamBufferConfigure *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IStreamBufferConfigure *This);
	ULONG(STDMETHODCALLTYPE *Release) (IStreamBufferConfigure *This);
	HRESULT(STDMETHODCALLTYPE *SetDirectory) (IStreamBufferConfigure *This, LPCWSTR pszDirectoryName);
	HRESULT(STDMETHODCALLTYPE *GetDirectory) (IStreamBufferConfigure *This, LPWSTR *ppszDirectoryName);
	HRESULT(STDMETHODCALLTYPE *SetBackingFileCount) (IStreamBufferConfigure *This, DWORD dwMin, DWORD dwMax);
	HRESULT(STDMETHODCALLTYPE *GetBackingFileCount) (IStreamBufferConfigure *This, DWORD *pdwMin, DWORD *pdwMax);
	HRESULT(STDMETHODCALLTYPE *SetBackingFileDuration) (IStreamBufferConfigure *This, DWORD dwSeconds);
	HRESULT(STDMETHODCALLTYPE *GetBackingFileDuration) (IStreamBufferConfigure *This, DWORD *pdwSeconds);
	END_INTERFACE
}  IStreamBufferConfigureVtbl;
interface IStreamBufferConfigure
{
	CONST_VTBL struct IStreamBufferConfigureVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamBufferConfigure_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamBufferConfigure_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStreamBufferConfigure_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStreamBufferConfigure_SetDirectory(This,pszDirectoryName) ( (This)->lpVtbl -> SetDirectory(This,pszDirectoryName) )
#define IStreamBufferConfigure_GetDirectory(This,ppszDirectoryName) ( (This)->lpVtbl -> GetDirectory(This,ppszDirectoryName) )
#define IStreamBufferConfigure_SetBackingFileCount(This,dwMin,dwMax) ( (This)->lpVtbl -> SetBackingFileCount(This,dwMin,dwMax) )
#define IStreamBufferConfigure_GetBackingFileCount(This,pdwMin,pdwMax) ( (This)->lpVtbl -> GetBackingFileCount(This,pdwMin,pdwMax) )
#define IStreamBufferConfigure_SetBackingFileDuration(This,dwSeconds) ( (This)->lpVtbl -> SetBackingFileDuration(This,dwSeconds) )
#define IStreamBufferConfigure_GetBackingFileDuration(This,pdwSeconds) ( (This)->lpVtbl -> GetBackingFileDuration(This,pdwSeconds) )
#endif
#endif
#ifndef __IStreamBufferConfigure2_INTERFACE_DEFINED__
#define __IStreamBufferConfigure2_INTERFACE_DEFINED__
extern const IID IID_IStreamBufferConfigure2;
typedef struct IStreamBufferConfigure2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IStreamBufferConfigure2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IStreamBufferConfigure2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IStreamBufferConfigure2 *This);
	HRESULT(STDMETHODCALLTYPE *SetDirectory) (IStreamBufferConfigure2 *This, LPCWSTR pszDirectoryName);
	HRESULT(STDMETHODCALLTYPE *GetDirectory) (IStreamBufferConfigure2 *This, LPWSTR *ppszDirectoryName);
	HRESULT(STDMETHODCALLTYPE *SetBackingFileCount) (IStreamBufferConfigure2 *This, DWORD dwMin, DWORD dwMax);
	HRESULT(STDMETHODCALLTYPE *GetBackingFileCount) (IStreamBufferConfigure2 *This, DWORD *pdwMin, DWORD *pdwMax);
	HRESULT(STDMETHODCALLTYPE *SetBackingFileDuration) (IStreamBufferConfigure2 *This, DWORD dwSeconds);
	HRESULT(STDMETHODCALLTYPE *GetBackingFileDuration) (IStreamBufferConfigure2 *This, DWORD *pdwSeconds);
	HRESULT(STDMETHODCALLTYPE *SetMultiplexedPacketSize) (IStreamBufferConfigure2 *This, DWORD cbBytesPerPacket);
	HRESULT(STDMETHODCALLTYPE *GetMultiplexedPacketSize) (IStreamBufferConfigure2 *This, DWORD *pcbBytesPerPacket);
	HRESULT(STDMETHODCALLTYPE *SetFFTransitionRates) (IStreamBufferConfigure2 *This, DWORD dwMaxFullFrameRate, DWORD dwMaxNonSkippingRate);
	HRESULT(STDMETHODCALLTYPE *GetFFTransitionRates) (IStreamBufferConfigure2 *This, DWORD *pdwMaxFullFrameRate, DWORD *pdwMaxNonSkippingRate);
	END_INTERFACE
}  IStreamBufferConfigure2Vtbl;
interface IStreamBufferConfigure2
{
	CONST_VTBL struct IStreamBufferConfigure2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamBufferConfigure2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamBufferConfigure2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStreamBufferConfigure2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStreamBufferConfigure2_SetDirectory(This,pszDirectoryName) ( (This)->lpVtbl -> SetDirectory(This,pszDirectoryName) )
#define IStreamBufferConfigure2_GetDirectory(This,ppszDirectoryName) ( (This)->lpVtbl -> GetDirectory(This,ppszDirectoryName) )
#define IStreamBufferConfigure2_SetBackingFileCount(This,dwMin,dwMax) ( (This)->lpVtbl -> SetBackingFileCount(This,dwMin,dwMax) )
#define IStreamBufferConfigure2_GetBackingFileCount(This,pdwMin,pdwMax) ( (This)->lpVtbl -> GetBackingFileCount(This,pdwMin,pdwMax) )
#define IStreamBufferConfigure2_SetBackingFileDuration(This,dwSeconds) ( (This)->lpVtbl -> SetBackingFileDuration(This,dwSeconds) )
#define IStreamBufferConfigure2_GetBackingFileDuration(This,pdwSeconds) ( (This)->lpVtbl -> GetBackingFileDuration(This,pdwSeconds) )
#define IStreamBufferConfigure2_SetMultiplexedPacketSize(This,cbBytesPerPacket) ( (This)->lpVtbl -> SetMultiplexedPacketSize(This,cbBytesPerPacket) )
#define IStreamBufferConfigure2_GetMultiplexedPacketSize(This,pcbBytesPerPacket) ( (This)->lpVtbl -> GetMultiplexedPacketSize(This,pcbBytesPerPacket) )
#define IStreamBufferConfigure2_SetFFTransitionRates(This,dwMaxFullFrameRate,dwMaxNonSkippingRate) ( (This)->lpVtbl -> SetFFTransitionRates(This,dwMaxFullFrameRate,dwMaxNonSkippingRate) )
#define IStreamBufferConfigure2_GetFFTransitionRates(This,pdwMaxFullFrameRate,pdwMaxNonSkippingRate) ( (This)->lpVtbl -> GetFFTransitionRates(This,pdwMaxFullFrameRate,pdwMaxNonSkippingRate) )
#endif
#endif
#ifndef __IStreamBufferConfigure3_INTERFACE_DEFINED__
#define __IStreamBufferConfigure3_INTERFACE_DEFINED__
extern const IID IID_IStreamBufferConfigure3;
typedef struct IStreamBufferConfigure3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IStreamBufferConfigure3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IStreamBufferConfigure3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IStreamBufferConfigure3 *This);
	HRESULT(STDMETHODCALLTYPE *SetDirectory) (IStreamBufferConfigure3 *This, LPCWSTR pszDirectoryName);
	HRESULT(STDMETHODCALLTYPE *GetDirectory) (IStreamBufferConfigure3 *This, LPWSTR *ppszDirectoryName);
	HRESULT(STDMETHODCALLTYPE *SetBackingFileCount) (IStreamBufferConfigure3 *This, DWORD dwMin, DWORD dwMax);
	HRESULT(STDMETHODCALLTYPE *GetBackingFileCount) (IStreamBufferConfigure3 *This, DWORD *pdwMin, DWORD *pdwMax);
	HRESULT(STDMETHODCALLTYPE *SetBackingFileDuration) (IStreamBufferConfigure3 *This, DWORD dwSeconds);
	HRESULT(STDMETHODCALLTYPE *GetBackingFileDuration) (IStreamBufferConfigure3 *This, DWORD *pdwSeconds);
	HRESULT(STDMETHODCALLTYPE *SetMultiplexedPacketSize) (IStreamBufferConfigure3 *This, DWORD cbBytesPerPacket);
	HRESULT(STDMETHODCALLTYPE *GetMultiplexedPacketSize) (IStreamBufferConfigure3 *This, DWORD *pcbBytesPerPacket);
	HRESULT(STDMETHODCALLTYPE *SetFFTransitionRates) (IStreamBufferConfigure3 *This, DWORD dwMaxFullFrameRate, DWORD dwMaxNonSkippingRate);
	HRESULT(STDMETHODCALLTYPE *GetFFTransitionRates) (IStreamBufferConfigure3 *This, DWORD *pdwMaxFullFrameRate, DWORD *pdwMaxNonSkippingRate);
	HRESULT(STDMETHODCALLTYPE *SetStartRecConfig) (IStreamBufferConfigure3 *This, BOOL fStartStopsCur);
	HRESULT(STDMETHODCALLTYPE *GetStartRecConfig) (IStreamBufferConfigure3 *This, BOOL *pfStartStopsCur);
	HRESULT(STDMETHODCALLTYPE *SetNamespace) (IStreamBufferConfigure3 *This, LPWSTR pszNamespace);
	HRESULT(STDMETHODCALLTYPE *GetNamespace) (IStreamBufferConfigure3 *This, LPWSTR *ppszNamespace);
	END_INTERFACE
}  IStreamBufferConfigure3Vtbl;
interface IStreamBufferConfigure3
{
	CONST_VTBL struct IStreamBufferConfigure3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamBufferConfigure3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamBufferConfigure3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStreamBufferConfigure3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStreamBufferConfigure3_SetDirectory(This,pszDirectoryName) ( (This)->lpVtbl -> SetDirectory(This,pszDirectoryName) )
#define IStreamBufferConfigure3_GetDirectory(This,ppszDirectoryName) ( (This)->lpVtbl -> GetDirectory(This,ppszDirectoryName) )
#define IStreamBufferConfigure3_SetBackingFileCount(This,dwMin,dwMax) ( (This)->lpVtbl -> SetBackingFileCount(This,dwMin,dwMax) )
#define IStreamBufferConfigure3_GetBackingFileCount(This,pdwMin,pdwMax) ( (This)->lpVtbl -> GetBackingFileCount(This,pdwMin,pdwMax) )
#define IStreamBufferConfigure3_SetBackingFileDuration(This,dwSeconds) ( (This)->lpVtbl -> SetBackingFileDuration(This,dwSeconds) )
#define IStreamBufferConfigure3_GetBackingFileDuration(This,pdwSeconds) ( (This)->lpVtbl -> GetBackingFileDuration(This,pdwSeconds) )
#define IStreamBufferConfigure3_SetMultiplexedPacketSize(This,cbBytesPerPacket) ( (This)->lpVtbl -> SetMultiplexedPacketSize(This,cbBytesPerPacket) )
#define IStreamBufferConfigure3_GetMultiplexedPacketSize(This,pcbBytesPerPacket) ( (This)->lpVtbl -> GetMultiplexedPacketSize(This,pcbBytesPerPacket) )
#define IStreamBufferConfigure3_SetFFTransitionRates(This,dwMaxFullFrameRate,dwMaxNonSkippingRate) ( (This)->lpVtbl -> SetFFTransitionRates(This,dwMaxFullFrameRate,dwMaxNonSkippingRate) )
#define IStreamBufferConfigure3_GetFFTransitionRates(This,pdwMaxFullFrameRate,pdwMaxNonSkippingRate) ( (This)->lpVtbl -> GetFFTransitionRates(This,pdwMaxFullFrameRate,pdwMaxNonSkippingRate) )
#define IStreamBufferConfigure3_SetStartRecConfig(This,fStartStopsCur) ( (This)->lpVtbl -> SetStartRecConfig(This,fStartStopsCur) )
#define IStreamBufferConfigure3_GetStartRecConfig(This,pfStartStopsCur) ( (This)->lpVtbl -> GetStartRecConfig(This,pfStartStopsCur) )
#define IStreamBufferConfigure3_SetNamespace(This,pszNamespace) ( (This)->lpVtbl -> SetNamespace(This,pszNamespace) )
#define IStreamBufferConfigure3_GetNamespace(This,ppszNamespace) ( (This)->lpVtbl -> GetNamespace(This,ppszNamespace) )
#endif
#endif
#ifndef __IStreamBufferMediaSeeking_INTERFACE_DEFINED__
#define __IStreamBufferMediaSeeking_INTERFACE_DEFINED__
extern const IID IID_IStreamBufferMediaSeeking;
typedef struct IStreamBufferMediaSeekingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IStreamBufferMediaSeeking *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IStreamBufferMediaSeeking *This);
	ULONG(STDMETHODCALLTYPE *Release) (IStreamBufferMediaSeeking *This);
	HRESULT(STDMETHODCALLTYPE *GetCapabilities) (IStreamBufferMediaSeeking *This, DWORD *pCapabilities);
	HRESULT(STDMETHODCALLTYPE *CheckCapabilities) (IStreamBufferMediaSeeking *This, DWORD *pCapabilities);
	HRESULT(STDMETHODCALLTYPE *IsFormatSupported) (IStreamBufferMediaSeeking *This, const GUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *QueryPreferredFormat) (IStreamBufferMediaSeeking *This, GUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *GetTimeFormat) (IStreamBufferMediaSeeking *This, GUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *IsUsingTimeFormat) (IStreamBufferMediaSeeking *This, const GUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *SetTimeFormat) (IStreamBufferMediaSeeking *This, const GUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *GetDuration) (IStreamBufferMediaSeeking *This, LONGLONG *pDuration);
	HRESULT(STDMETHODCALLTYPE *GetStopPosition) (IStreamBufferMediaSeeking *This, LONGLONG *pStop);
	HRESULT(STDMETHODCALLTYPE *GetCurrentPosition) (IStreamBufferMediaSeeking *This, LONGLONG *pCurrent);
	HRESULT(STDMETHODCALLTYPE *ConvertTimeFormat) (IStreamBufferMediaSeeking *This, LONGLONG *pTarget, const GUID *pTargetFormat, LONGLONG Source, const GUID *pSourceFormat);
	HRESULT(STDMETHODCALLTYPE *SetPositions) (IStreamBufferMediaSeeking *This, LONGLONG *pCurrent, DWORD dwCurrentFlags, LONGLONG *pStop, DWORD dwStopFlags);
	HRESULT(STDMETHODCALLTYPE *GetPositions) (IStreamBufferMediaSeeking *This, LONGLONG *pCurrent, LONGLONG *pStop);
	HRESULT(STDMETHODCALLTYPE *GetAvailable) (IStreamBufferMediaSeeking *This, LONGLONG *pEarliest, LONGLONG *pLatest);
	HRESULT(STDMETHODCALLTYPE *SetRate) (IStreamBufferMediaSeeking *This, double dRate);
	HRESULT(STDMETHODCALLTYPE *GetRate) (IStreamBufferMediaSeeking *This, double *pdRate);
	HRESULT(STDMETHODCALLTYPE *GetPreroll) (IStreamBufferMediaSeeking *This, LONGLONG *pllPreroll);
	END_INTERFACE
}  IStreamBufferMediaSeekingVtbl;
interface IStreamBufferMediaSeeking
{
	CONST_VTBL struct IStreamBufferMediaSeekingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamBufferMediaSeeking_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamBufferMediaSeeking_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStreamBufferMediaSeeking_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStreamBufferMediaSeeking_GetCapabilities(This,pCapabilities) ( (This)->lpVtbl -> GetCapabilities(This,pCapabilities) )
#define IStreamBufferMediaSeeking_CheckCapabilities(This,pCapabilities) ( (This)->lpVtbl -> CheckCapabilities(This,pCapabilities) )
#define IStreamBufferMediaSeeking_IsFormatSupported(This,pFormat) ( (This)->lpVtbl -> IsFormatSupported(This,pFormat) )
#define IStreamBufferMediaSeeking_QueryPreferredFormat(This,pFormat) ( (This)->lpVtbl -> QueryPreferredFormat(This,pFormat) )
#define IStreamBufferMediaSeeking_GetTimeFormat(This,pFormat) ( (This)->lpVtbl -> GetTimeFormat(This,pFormat) )
#define IStreamBufferMediaSeeking_IsUsingTimeFormat(This,pFormat) ( (This)->lpVtbl -> IsUsingTimeFormat(This,pFormat) )
#define IStreamBufferMediaSeeking_SetTimeFormat(This,pFormat) ( (This)->lpVtbl -> SetTimeFormat(This,pFormat) )
#define IStreamBufferMediaSeeking_GetDuration(This,pDuration) ( (This)->lpVtbl -> GetDuration(This,pDuration) )
#define IStreamBufferMediaSeeking_GetStopPosition(This,pStop) ( (This)->lpVtbl -> GetStopPosition(This,pStop) )
#define IStreamBufferMediaSeeking_GetCurrentPosition(This,pCurrent) ( (This)->lpVtbl -> GetCurrentPosition(This,pCurrent) )
#define IStreamBufferMediaSeeking_ConvertTimeFormat(This,pTarget,pTargetFormat,Source,pSourceFormat) ( (This)->lpVtbl -> ConvertTimeFormat(This,pTarget,pTargetFormat,Source,pSourceFormat) )
#define IStreamBufferMediaSeeking_SetPositions(This,pCurrent,dwCurrentFlags,pStop,dwStopFlags) ( (This)->lpVtbl -> SetPositions(This,pCurrent,dwCurrentFlags,pStop,dwStopFlags) )
#define IStreamBufferMediaSeeking_GetPositions(This,pCurrent,pStop) ( (This)->lpVtbl -> GetPositions(This,pCurrent,pStop) )
#define IStreamBufferMediaSeeking_GetAvailable(This,pEarliest,pLatest) ( (This)->lpVtbl -> GetAvailable(This,pEarliest,pLatest) )
#define IStreamBufferMediaSeeking_SetRate(This,dRate) ( (This)->lpVtbl -> SetRate(This,dRate) )
#define IStreamBufferMediaSeeking_GetRate(This,pdRate) ( (This)->lpVtbl -> GetRate(This,pdRate) )
#define IStreamBufferMediaSeeking_GetPreroll(This,pllPreroll) ( (This)->lpVtbl -> GetPreroll(This,pllPreroll) )
#endif
#endif
#ifndef __IStreamBufferMediaSeeking2_INTERFACE_DEFINED__
#define __IStreamBufferMediaSeeking2_INTERFACE_DEFINED__
extern const IID IID_IStreamBufferMediaSeeking2;
typedef struct IStreamBufferMediaSeeking2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IStreamBufferMediaSeeking2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IStreamBufferMediaSeeking2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IStreamBufferMediaSeeking2 *This);
	HRESULT(STDMETHODCALLTYPE *GetCapabilities) (IStreamBufferMediaSeeking2 *This, DWORD *pCapabilities);
	HRESULT(STDMETHODCALLTYPE *CheckCapabilities) (IStreamBufferMediaSeeking2 *This, DWORD *pCapabilities);
	HRESULT(STDMETHODCALLTYPE *IsFormatSupported) (IStreamBufferMediaSeeking2 *This, const GUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *QueryPreferredFormat) (IStreamBufferMediaSeeking2 *This, GUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *GetTimeFormat) (IStreamBufferMediaSeeking2 *This, GUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *IsUsingTimeFormat) (IStreamBufferMediaSeeking2 *This, const GUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *SetTimeFormat) (IStreamBufferMediaSeeking2 *This, const GUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *GetDuration) (IStreamBufferMediaSeeking2 *This, LONGLONG *pDuration);
	HRESULT(STDMETHODCALLTYPE *GetStopPosition) (IStreamBufferMediaSeeking2 *This, LONGLONG *pStop);
	HRESULT(STDMETHODCALLTYPE *GetCurrentPosition) (IStreamBufferMediaSeeking2 *This, LONGLONG *pCurrent);
	HRESULT(STDMETHODCALLTYPE *ConvertTimeFormat) (IStreamBufferMediaSeeking2 *This, LONGLONG *pTarget, const GUID *pTargetFormat, LONGLONG Source, const GUID *pSourceFormat);
	HRESULT(STDMETHODCALLTYPE *SetPositions) (IStreamBufferMediaSeeking2 *This, LONGLONG *pCurrent, DWORD dwCurrentFlags, LONGLONG *pStop, DWORD dwStopFlags);
	HRESULT(STDMETHODCALLTYPE *GetPositions) (IStreamBufferMediaSeeking2 *This, LONGLONG *pCurrent, LONGLONG *pStop);
	HRESULT(STDMETHODCALLTYPE *GetAvailable) (IStreamBufferMediaSeeking2 *This, LONGLONG *pEarliest, LONGLONG *pLatest);
	HRESULT(STDMETHODCALLTYPE *SetRate) (IStreamBufferMediaSeeking2 *This, double dRate);
	HRESULT(STDMETHODCALLTYPE *GetRate) (IStreamBufferMediaSeeking2 *This, double *pdRate);
	HRESULT(STDMETHODCALLTYPE *GetPreroll) (IStreamBufferMediaSeeking2 *This, LONGLONG *pllPreroll);
	HRESULT(STDMETHODCALLTYPE *SetRateEx) (IStreamBufferMediaSeeking2 *This, double dRate, DWORD dwFramesPerSec);
	END_INTERFACE
}  IStreamBufferMediaSeeking2Vtbl;
interface IStreamBufferMediaSeeking2
{
	CONST_VTBL struct IStreamBufferMediaSeeking2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamBufferMediaSeeking2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamBufferMediaSeeking2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStreamBufferMediaSeeking2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStreamBufferMediaSeeking2_GetCapabilities(This,pCapabilities) ( (This)->lpVtbl -> GetCapabilities(This,pCapabilities) )
#define IStreamBufferMediaSeeking2_CheckCapabilities(This,pCapabilities) ( (This)->lpVtbl -> CheckCapabilities(This,pCapabilities) )
#define IStreamBufferMediaSeeking2_IsFormatSupported(This,pFormat) ( (This)->lpVtbl -> IsFormatSupported(This,pFormat) )
#define IStreamBufferMediaSeeking2_QueryPreferredFormat(This,pFormat) ( (This)->lpVtbl -> QueryPreferredFormat(This,pFormat) )
#define IStreamBufferMediaSeeking2_GetTimeFormat(This,pFormat) ( (This)->lpVtbl -> GetTimeFormat(This,pFormat) )
#define IStreamBufferMediaSeeking2_IsUsingTimeFormat(This,pFormat) ( (This)->lpVtbl -> IsUsingTimeFormat(This,pFormat) )
#define IStreamBufferMediaSeeking2_SetTimeFormat(This,pFormat) ( (This)->lpVtbl -> SetTimeFormat(This,pFormat) )
#define IStreamBufferMediaSeeking2_GetDuration(This,pDuration) ( (This)->lpVtbl -> GetDuration(This,pDuration) )
#define IStreamBufferMediaSeeking2_GetStopPosition(This,pStop) ( (This)->lpVtbl -> GetStopPosition(This,pStop) )
#define IStreamBufferMediaSeeking2_GetCurrentPosition(This,pCurrent) ( (This)->lpVtbl -> GetCurrentPosition(This,pCurrent) )
#define IStreamBufferMediaSeeking2_ConvertTimeFormat(This,pTarget,pTargetFormat,Source,pSourceFormat) ( (This)->lpVtbl -> ConvertTimeFormat(This,pTarget,pTargetFormat,Source,pSourceFormat) )
#define IStreamBufferMediaSeeking2_SetPositions(This,pCurrent,dwCurrentFlags,pStop,dwStopFlags) ( (This)->lpVtbl -> SetPositions(This,pCurrent,dwCurrentFlags,pStop,dwStopFlags) )
#define IStreamBufferMediaSeeking2_GetPositions(This,pCurrent,pStop) ( (This)->lpVtbl -> GetPositions(This,pCurrent,pStop) )
#define IStreamBufferMediaSeeking2_GetAvailable(This,pEarliest,pLatest) ( (This)->lpVtbl -> GetAvailable(This,pEarliest,pLatest) )
#define IStreamBufferMediaSeeking2_SetRate(This,dRate) ( (This)->lpVtbl -> SetRate(This,dRate) )
#define IStreamBufferMediaSeeking2_GetRate(This,pdRate) ( (This)->lpVtbl -> GetRate(This,pdRate) )
#define IStreamBufferMediaSeeking2_GetPreroll(This,pllPreroll) ( (This)->lpVtbl -> GetPreroll(This,pllPreroll) )
#define IStreamBufferMediaSeeking2_SetRateEx(This,dRate,dwFramesPerSec) ( (This)->lpVtbl -> SetRateEx(This,dRate,dwFramesPerSec) )
#endif
#endif
typedef struct SBE_PIN_DATA
{
	ULONGLONG cDataBytes;
	ULONGLONG cSamplesProcessed;
	ULONGLONG cDiscontinuities;
	ULONGLONG cSyncPoints;
	ULONGLONG cTimestamps;
} SBE_PIN_DATA;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0014_v0_0_s_ifspec;
#ifndef __IStreamBufferDataCounters_INTERFACE_DEFINED__
#define __IStreamBufferDataCounters_INTERFACE_DEFINED__
extern const IID IID_IStreamBufferDataCounters;
typedef struct IStreamBufferDataCountersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IStreamBufferDataCounters *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IStreamBufferDataCounters *This);
	ULONG(STDMETHODCALLTYPE *Release) (IStreamBufferDataCounters *This);
	HRESULT(STDMETHODCALLTYPE *GetData) (IStreamBufferDataCounters *This, SBE_PIN_DATA *pPinData);
	HRESULT(STDMETHODCALLTYPE *ResetData) (IStreamBufferDataCounters *This);
	END_INTERFACE
}  IStreamBufferDataCountersVtbl;
interface IStreamBufferDataCounters
{
	CONST_VTBL struct IStreamBufferDataCountersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamBufferDataCounters_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamBufferDataCounters_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStreamBufferDataCounters_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStreamBufferDataCounters_GetData(This,pPinData) ( (This)->lpVtbl -> GetData(This,pPinData) )
#define IStreamBufferDataCounters_ResetData(This) ( (This)->lpVtbl -> ResetData(This) )
#endif
#endif
#define STREAMBUFFER_EC_BASE                     0x0326
enum
{
	STREAMBUFFER_EC_TIMEHOLE = STREAMBUFFER_EC_BASE,
	STREAMBUFFER_EC_STALE_DATA_READ,
	STREAMBUFFER_EC_STALE_FILE_DELETED,
	STREAMBUFFER_EC_CONTENT_BECOMING_STALE,
	STREAMBUFFER_EC_WRITE_FAILURE,
	STREAMBUFFER_EC_WRITE_FAILURE_CLEAR,
	STREAMBUFFER_EC_READ_FAILURE,
	STREAMBUFFER_EC_RATE_CHANGED,
	STREAMBUFFER_EC_PRIMARY_AUDIO,
	STREAMBUFFER_EC_RATE_CHANGING_FOR_SETPOSITIONS,
	STREAMBUFFER_EC_SETPOSITIONS_EVENTS_DONE,
};
DEFINE_GUID(EVENTID_SBE2RecControlStarted, 0x8966a89e, 0xf83e, 0x4c0e, 0xbc, 0x3b, 0xbf, 0xa7, 0x64, 0x9e, 0x4, 0xcb);
DEFINE_GUID(EVENTID_SBE2RecControlStopped, 0x454b1ec8, 0xc9b, 0x4caa, 0xb1, 0xa1, 0x1e, 0x7a, 0x26, 0x66, 0xf6, 0xc3);
DEFINE_GUID(SBE2_STREAM_DESC_EVENT, 0x2313a4ed, 0xbf2d, 0x454f, 0xad, 0x8a, 0xd9, 0x5b, 0xa7, 0xf9, 0x1f, 0xee);
DEFINE_GUID(SBE2_V1_STREAMS_CREATION_EVENT, 0xfcf09, 0x97f5, 0x46ac, 0x97, 0x69, 0x7a, 0x83, 0xb3, 0x53, 0x84, 0xfb);
DEFINE_GUID(SBE2_V2_STREAMS_CREATION_EVENT, 0xa72530a3, 0x344, 0x4cab, 0xa2, 0xd0, 0xfe, 0x93, 0x7d, 0xbd, 0xca, 0xb3);
typedef enum
{
	DEF_MODE_PROFILE = 0x0000001,
	DEF_MODE_STREAMS = 0x0000002,
} CROSSBAR_DEFAULT_FLAGS;
typedef DWORD SBE2_STREAM_ID;
#define	SBE2_STREAM_DESC_VERSION	( 1 )
typedef struct __MIDL___MIDL_itf_sbe_0000_0015_0001
{
	DWORD Version;
	SBE2_STREAM_ID StreamId;
	DWORD Default;
	DWORD Reserved;
} SBE2_STREAM_DESC;
typedef struct __MIDL___MIDL_itf_sbe_0000_0015_0002
{
	DWORD Version;
	DWORD StreamId;
	BOOL Default;
	BOOL Creation;
	DWORD Reserved;
	GUID guidSubMediaType;
	GUID guidFormatType;
	AM_MEDIA_TYPE MediaType;
} DVR_STREAM_DESC;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0015_v0_0_s_ifspec;
#ifndef __ISBE2GlobalEvent_INTERFACE_DEFINED__
#define __ISBE2GlobalEvent_INTERFACE_DEFINED__
extern const IID IID_ISBE2GlobalEvent;
typedef struct ISBE2GlobalEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISBE2GlobalEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISBE2GlobalEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISBE2GlobalEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetEvent) (ISBE2GlobalEvent * This, REFGUID idEvt, ULONG param1, ULONG param2, ULONG param3, ULONG param4, BOOL * pSpanning, DWORD * pcb, BYTE * pb);
	END_INTERFACE
}  ISBE2GlobalEventVtbl;
interface ISBE2GlobalEvent
{
	CONST_VTBL struct ISBE2GlobalEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISBE2GlobalEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISBE2GlobalEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISBE2GlobalEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISBE2GlobalEvent_GetEvent(This,idEvt,param1,param2,param3,param4,pSpanning,pcb,pb) ( (This)->lpVtbl -> GetEvent(This,idEvt,param1,param2,param3,param4,pSpanning,pcb,pb) )
#endif
#endif
#ifndef __ISBE2GlobalEvent2_INTERFACE_DEFINED__
#define __ISBE2GlobalEvent2_INTERFACE_DEFINED__
extern const IID IID_ISBE2GlobalEvent2;
typedef struct ISBE2GlobalEvent2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISBE2GlobalEvent2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISBE2GlobalEvent2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISBE2GlobalEvent2 * This);
	HRESULT(STDMETHODCALLTYPE * GetEvent) (ISBE2GlobalEvent2 * This, REFGUID idEvt, ULONG param1, ULONG param2, ULONG param3, ULONG param4, BOOL * pSpanning, DWORD * pcb, BYTE * pb);
	HRESULT(STDMETHODCALLTYPE * GetEventEx) (ISBE2GlobalEvent2 * This, REFGUID idEvt, ULONG param1, ULONG param2, ULONG param3, ULONG param4, BOOL * pSpanning, DWORD * pcb, BYTE * pb, REFERENCE_TIME * pStreamTime);
	END_INTERFACE
}  ISBE2GlobalEvent2Vtbl;
interface ISBE2GlobalEvent2
{
	CONST_VTBL struct ISBE2GlobalEvent2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISBE2GlobalEvent2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISBE2GlobalEvent2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISBE2GlobalEvent2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISBE2GlobalEvent2_GetEvent(This,idEvt,param1,param2,param3,param4,pSpanning,pcb,pb) ( (This)->lpVtbl -> GetEvent(This,idEvt,param1,param2,param3,param4,pSpanning,pcb,pb) )
#define ISBE2GlobalEvent2_GetEventEx(This,idEvt,param1,param2,param3,param4,pSpanning,pcb,pb,pStreamTime) ( (This)->lpVtbl -> GetEventEx(This,idEvt,param1,param2,param3,param4,pSpanning,pcb,pb,pStreamTime) )
#endif
#endif
#ifndef __ISBE2SpanningEvent_INTERFACE_DEFINED__
#define __ISBE2SpanningEvent_INTERFACE_DEFINED__
extern const IID IID_ISBE2SpanningEvent;
typedef struct ISBE2SpanningEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISBE2SpanningEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISBE2SpanningEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISBE2SpanningEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetEvent) (ISBE2SpanningEvent * This, REFGUID idEvt, SBE2_STREAM_ID streamId, DWORD * pcb, BYTE * pb);
	END_INTERFACE
}  ISBE2SpanningEventVtbl;
interface ISBE2SpanningEvent
{
	CONST_VTBL struct ISBE2SpanningEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISBE2SpanningEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISBE2SpanningEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISBE2SpanningEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISBE2SpanningEvent_GetEvent(This,idEvt,streamId,pcb,pb) ( (This)->lpVtbl -> GetEvent(This,idEvt,streamId,pcb,pb) )
#endif
#endif
#ifndef __ISBE2Crossbar_INTERFACE_DEFINED__
#define __ISBE2Crossbar_INTERFACE_DEFINED__
extern const IID IID_ISBE2Crossbar;
typedef struct ISBE2CrossbarVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISBE2Crossbar * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISBE2Crossbar * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISBE2Crossbar * This);
	HRESULT(STDMETHODCALLTYPE * EnableDefaultMode) (ISBE2Crossbar * This, DWORD DefaultFlags);
	HRESULT(STDMETHODCALLTYPE * GetInitialProfile) (ISBE2Crossbar * This, ISBE2MediaTypeProfile ** ppProfile);
	HRESULT(STDMETHODCALLTYPE * SetOutputProfile) (ISBE2Crossbar * This, ISBE2MediaTypeProfile * pProfile, DWORD * pcOutputPins, IPin ** ppOutputPins);
	HRESULT(STDMETHODCALLTYPE * EnumStreams) (ISBE2Crossbar * This, ISBE2EnumStream ** ppStreams);
	END_INTERFACE
}  ISBE2CrossbarVtbl;
interface ISBE2Crossbar
{
	CONST_VTBL struct ISBE2CrossbarVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISBE2Crossbar_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISBE2Crossbar_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISBE2Crossbar_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISBE2Crossbar_EnableDefaultMode(This,DefaultFlags) ( (This)->lpVtbl -> EnableDefaultMode(This,DefaultFlags) )
#define ISBE2Crossbar_GetInitialProfile(This,ppProfile) ( (This)->lpVtbl -> GetInitialProfile(This,ppProfile) )
#define ISBE2Crossbar_SetOutputProfile(This,pProfile,pcOutputPins,ppOutputPins) ( (This)->lpVtbl -> SetOutputProfile(This,pProfile,pcOutputPins,ppOutputPins) )
#define ISBE2Crossbar_EnumStreams(This,ppStreams) ( (This)->lpVtbl -> EnumStreams(This,ppStreams) )
#endif
#endif
#ifndef __ISBE2StreamMap_INTERFACE_DEFINED__
#define __ISBE2StreamMap_INTERFACE_DEFINED__
extern const IID IID_ISBE2StreamMap;
typedef struct ISBE2StreamMapVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISBE2StreamMap * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISBE2StreamMap * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISBE2StreamMap * This);
	HRESULT(STDMETHODCALLTYPE * MapStream) (ISBE2StreamMap * This, SBE2_STREAM_ID Stream);
	HRESULT(STDMETHODCALLTYPE * UnmapStream) (ISBE2StreamMap * This, SBE2_STREAM_ID Stream);
	HRESULT(STDMETHODCALLTYPE * EnumMappedStreams) (ISBE2StreamMap * This, ISBE2EnumStream ** ppStreams);
	END_INTERFACE
}  ISBE2StreamMapVtbl;
interface ISBE2StreamMap
{
	CONST_VTBL struct ISBE2StreamMapVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISBE2StreamMap_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISBE2StreamMap_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISBE2StreamMap_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISBE2StreamMap_MapStream(This,Stream) ( (This)->lpVtbl -> MapStream(This,Stream) )
#define ISBE2StreamMap_UnmapStream(This,Stream) ( (This)->lpVtbl -> UnmapStream(This,Stream) )
#define ISBE2StreamMap_EnumMappedStreams(This,ppStreams) ( (This)->lpVtbl -> EnumMappedStreams(This,ppStreams) )
#endif
#endif
#ifndef __ISBE2EnumStream_INTERFACE_DEFINED__
#define __ISBE2EnumStream_INTERFACE_DEFINED__
extern const IID IID_ISBE2EnumStream;
typedef struct ISBE2EnumStreamVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISBE2EnumStream * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISBE2EnumStream * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISBE2EnumStream * This);
	HRESULT(STDMETHODCALLTYPE * Next) (ISBE2EnumStream * This, ULONG cRequest, SBE2_STREAM_DESC * pStreamDesc, ULONG * pcReceived);
	HRESULT(STDMETHODCALLTYPE * Skip) (ISBE2EnumStream * This, ULONG cRecords);
	HRESULT(STDMETHODCALLTYPE * Reset) (ISBE2EnumStream * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ISBE2EnumStream * This, ISBE2EnumStream ** ppIEnumStream);
	END_INTERFACE
}  ISBE2EnumStreamVtbl;
interface ISBE2EnumStream
{
	CONST_VTBL struct ISBE2EnumStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISBE2EnumStream_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISBE2EnumStream_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISBE2EnumStream_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISBE2EnumStream_Next(This,cRequest,pStreamDesc,pcReceived) ( (This)->lpVtbl -> Next(This,cRequest,pStreamDesc,pcReceived) )
#define ISBE2EnumStream_Skip(This,cRecords) ( (This)->lpVtbl -> Skip(This,cRecords) )
#define ISBE2EnumStream_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define ISBE2EnumStream_Clone(This,ppIEnumStream) ( (This)->lpVtbl -> Clone(This,ppIEnumStream) )
#endif
#endif
#ifndef __ISBE2MediaTypeProfile_INTERFACE_DEFINED__
#define __ISBE2MediaTypeProfile_INTERFACE_DEFINED__
extern const IID IID_ISBE2MediaTypeProfile;
typedef struct ISBE2MediaTypeProfileVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISBE2MediaTypeProfile * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISBE2MediaTypeProfile * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISBE2MediaTypeProfile * This);
	HRESULT(STDMETHODCALLTYPE * GetStreamCount) (ISBE2MediaTypeProfile * This, DWORD * pCount);
	HRESULT(STDMETHODCALLTYPE * GetStream) (ISBE2MediaTypeProfile * This, DWORD Index, AM_MEDIA_TYPE ** ppMediaType);
	HRESULT(STDMETHODCALLTYPE * AddStream) (ISBE2MediaTypeProfile * This, AM_MEDIA_TYPE * pMediaType);
	HRESULT(STDMETHODCALLTYPE * DeleteStream) (ISBE2MediaTypeProfile * This, DWORD Index);
	END_INTERFACE
}  ISBE2MediaTypeProfileVtbl;
interface ISBE2MediaTypeProfile
{
	CONST_VTBL struct ISBE2MediaTypeProfileVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISBE2MediaTypeProfile_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISBE2MediaTypeProfile_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISBE2MediaTypeProfile_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISBE2MediaTypeProfile_GetStreamCount(This,pCount) ( (This)->lpVtbl -> GetStreamCount(This,pCount) )
#define ISBE2MediaTypeProfile_GetStream(This,Index,ppMediaType) ( (This)->lpVtbl -> GetStream(This,Index,ppMediaType) )
#define ISBE2MediaTypeProfile_AddStream(This,pMediaType) ( (This)->lpVtbl -> AddStream(This,pMediaType) )
#define ISBE2MediaTypeProfile_DeleteStream(This,Index) ( (This)->lpVtbl -> DeleteStream(This,Index) )
#endif
#endif
#ifndef __ISBE2FileScan_INTERFACE_DEFINED__
#define __ISBE2FileScan_INTERFACE_DEFINED__
extern const IID IID_ISBE2FileScan;
typedef struct ISBE2FileScanVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISBE2FileScan * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISBE2FileScan * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISBE2FileScan * This);
	HRESULT(STDMETHODCALLTYPE * RepairFile) (ISBE2FileScan * This, LPCWSTR filename);
	END_INTERFACE
}  ISBE2FileScanVtbl;
interface ISBE2FileScan
{
	CONST_VTBL struct ISBE2FileScanVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISBE2FileScan_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISBE2FileScan_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISBE2FileScan_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISBE2FileScan_RepairFile(This,filename) ( (This)->lpVtbl -> RepairFile(This,filename) )
#endif
#endif
#endif
