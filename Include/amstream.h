/*+@@file@@----------------------------------------------------------------*//*!
 \file		amstream.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:10:19 2016
 \date		Modified on Sun Jun 19 16:10:19 2016
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
#ifndef __amstream_h__
#define __amstream_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IAMMultiMediaStream_FWD_DEFINED__
#define __IAMMultiMediaStream_FWD_DEFINED__
typedef interface IAMMultiMediaStream IAMMultiMediaStream;
#endif
#ifndef __IAMMediaStream_FWD_DEFINED__
#define __IAMMediaStream_FWD_DEFINED__
typedef interface IAMMediaStream IAMMediaStream;
#endif
#ifndef __IMediaStreamFilter_FWD_DEFINED__
#define __IMediaStreamFilter_FWD_DEFINED__
typedef interface IMediaStreamFilter IMediaStreamFilter;
#endif
#ifndef __IDirectDrawMediaSampleAllocator_FWD_DEFINED__
#define __IDirectDrawMediaSampleAllocator_FWD_DEFINED__
typedef interface IDirectDrawMediaSampleAllocator IDirectDrawMediaSampleAllocator;
#endif
#ifndef __IDirectDrawMediaSample_FWD_DEFINED__
#define __IDirectDrawMediaSample_FWD_DEFINED__
typedef interface IDirectDrawMediaSample IDirectDrawMediaSample;
#endif
#ifndef __IAMMediaTypeStream_FWD_DEFINED__
#define __IAMMediaTypeStream_FWD_DEFINED__
typedef interface IAMMediaTypeStream IAMMediaTypeStream;
#endif
#ifndef __IAMMediaTypeSample_FWD_DEFINED__
#define __IAMMediaTypeSample_FWD_DEFINED__
typedef interface IAMMediaTypeSample IAMMediaTypeSample;
#endif
#include "unknwn.h"
#include "mmstream.h"
#include "strmif.h"
#include <ddraw.h>
#include <mmsystem.h>
#include <mmstream.h>
#include <ddstream.h>
#include <austream.h>
enum __MIDL___MIDL_itf_amstream_0000_0000_0001
{ AMMSF_NOGRAPHTHREAD = 0x1
};
enum __MIDL___MIDL_itf_amstream_0000_0000_0002
{
	AMMSF_ADDDEFAULTRENDERER = 0x1,
	AMMSF_CREATEPEER = 0x2,
	AMMSF_STOPIFNOSAMPLES = 0x4,
	AMMSF_NOSTALL = 0x8
};
enum __MIDL___MIDL_itf_amstream_0000_0000_0003
{
	AMMSF_RENDERTYPEMASK = 0x3,
	AMMSF_RENDERTOEXISTING = 0,
	AMMSF_RENDERALLSTREAMS = 0x1,
	AMMSF_NORENDER = 0x2,
	AMMSF_NOCLOCK = 0x4,
	AMMSF_RUN = 0x8
};
typedef enum __MIDL___MIDL_itf_amstream_0000_0000_0004
{	Disabled	= 0,
	ReadData	= 1,
	RenderData	= 2
} 	OUTPUT_STATE;
extern RPC_IF_HANDLE __MIDL_itf_amstream_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_amstream_0000_0000_v0_0_s_ifspec;
#ifndef __IAMMultiMediaStream_INTERFACE_DEFINED__
#define __IAMMultiMediaStream_INTERFACE_DEFINED__ 
extern const IID IID_IAMMultiMediaStream;
typedef struct IAMMultiMediaStreamVtbl {
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAMMultiMediaStream * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAMMultiMediaStream * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAMMultiMediaStream * This);
	HRESULT(STDMETHODCALLTYPE * GetInformation) (IAMMultiMediaStream * This, DWORD * pdwFlags, STREAM_TYPE * pStreamType);
	HRESULT(STDMETHODCALLTYPE * GetMediaStream) (IAMMultiMediaStream * This, REFMSPID idPurpose, IMediaStream ** ppMediaStream);
	HRESULT(STDMETHODCALLTYPE * EnumMediaStreams) (IAMMultiMediaStream * This, long Index, IMediaStream ** ppMediaStream);
	HRESULT(STDMETHODCALLTYPE * GetState) (IAMMultiMediaStream * This, STREAM_STATE * pCurrentState);
	HRESULT(STDMETHODCALLTYPE * SetState) (IAMMultiMediaStream * This, STREAM_STATE NewState);
	HRESULT(STDMETHODCALLTYPE * GetTime) (IAMMultiMediaStream * This, STREAM_TIME * pCurrentTime);
	HRESULT(STDMETHODCALLTYPE * GetDuration) (IAMMultiMediaStream * This, STREAM_TIME * pDuration);
	HRESULT(STDMETHODCALLTYPE * Seek) (IAMMultiMediaStream * This, STREAM_TIME SeekTime);
	HRESULT(STDMETHODCALLTYPE * GetEndOfStreamEventHandle) (IAMMultiMediaStream * This, HANDLE * phEOS);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IAMMultiMediaStream * This, STREAM_TYPE StreamType, DWORD dwFlags, IGraphBuilder * pFilterGraph);
	HRESULT(STDMETHODCALLTYPE * GetFilterGraph) (IAMMultiMediaStream * This, IGraphBuilder ** ppGraphBuilder);
	HRESULT(STDMETHODCALLTYPE * GetFilter) (IAMMultiMediaStream * This, IMediaStreamFilter ** ppFilter);
	HRESULT(STDMETHODCALLTYPE * AddMediaStream) (IAMMultiMediaStream * This, IUnknown * pStreamObject, const MSPID * PurposeId, DWORD dwFlags, IMediaStream ** ppNewStream);
	HRESULT(STDMETHODCALLTYPE * OpenFile) (IAMMultiMediaStream * This, LPCWSTR pszFileName, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * OpenMoniker) (IAMMultiMediaStream * This, IBindCtx * pCtx, IMoniker * pMoniker, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * Render) (IAMMultiMediaStream * This, DWORD dwFlags);
END_INTERFACE} IAMMultiMediaStreamVtbl;
interface IAMMultiMediaStream {
	CONST_VTBL struct IAMMultiMediaStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMMultiMediaStream_QueryInterface(This,riid,ppvObject) 	    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IAMMultiMediaStream_AddRef(This) 	    ( (This)->lpVtbl -> AddRef(This) ) 
#define IAMMultiMediaStream_Release(This) 	    ( (This)->lpVtbl -> Release(This) ) 
#define IAMMultiMediaStream_GetInformation(This,pdwFlags,pStreamType) 	    ( (This)->lpVtbl -> GetInformation(This,pdwFlags,pStreamType) ) 
#define IAMMultiMediaStream_GetMediaStream(This,idPurpose,ppMediaStream) 	    ( (This)->lpVtbl -> GetMediaStream(This,idPurpose,ppMediaStream) ) 
#define IAMMultiMediaStream_EnumMediaStreams(This,Index,ppMediaStream) 	    ( (This)->lpVtbl -> EnumMediaStreams(This,Index,ppMediaStream) ) 
#define IAMMultiMediaStream_GetState(This,pCurrentState) 	    ( (This)->lpVtbl -> GetState(This,pCurrentState) ) 
#define IAMMultiMediaStream_SetState(This,NewState) 	    ( (This)->lpVtbl -> SetState(This,NewState) ) 
#define IAMMultiMediaStream_GetTime(This,pCurrentTime) 	    ( (This)->lpVtbl -> GetTime(This,pCurrentTime) ) 
#define IAMMultiMediaStream_GetDuration(This,pDuration) 	    ( (This)->lpVtbl -> GetDuration(This,pDuration) ) 
#define IAMMultiMediaStream_Seek(This,SeekTime) 	    ( (This)->lpVtbl -> Seek(This,SeekTime) ) 
#define IAMMultiMediaStream_GetEndOfStreamEventHandle(This,phEOS) 	    ( (This)->lpVtbl -> GetEndOfStreamEventHandle(This,phEOS) ) 
#define IAMMultiMediaStream_Initialize(This,StreamType,dwFlags,pFilterGraph) 	    ( (This)->lpVtbl -> Initialize(This,StreamType,dwFlags,pFilterGraph) ) 
#define IAMMultiMediaStream_GetFilterGraph(This,ppGraphBuilder) 	    ( (This)->lpVtbl -> GetFilterGraph(This,ppGraphBuilder) ) 
#define IAMMultiMediaStream_GetFilter(This,ppFilter) 	    ( (This)->lpVtbl -> GetFilter(This,ppFilter) ) 
#define IAMMultiMediaStream_AddMediaStream(This,pStreamObject,PurposeId,dwFlags,ppNewStream) 	    ( (This)->lpVtbl -> AddMediaStream(This,pStreamObject,PurposeId,dwFlags,ppNewStream) ) 
#define IAMMultiMediaStream_OpenFile(This,pszFileName,dwFlags) 	    ( (This)->lpVtbl -> OpenFile(This,pszFileName,dwFlags) ) 
#define IAMMultiMediaStream_OpenMoniker(This,pCtx,pMoniker,dwFlags) 	    ( (This)->lpVtbl -> OpenMoniker(This,pCtx,pMoniker,dwFlags) ) 
#define IAMMultiMediaStream_Render(This,dwFlags) 	    ( (This)->lpVtbl -> Render(This,dwFlags) ) 
#endif
#endif
#ifndef __IAMMediaStream_INTERFACE_DEFINED__
#define __IAMMediaStream_INTERFACE_DEFINED__
extern const IID IID_IAMMediaStream;
typedef struct IAMMediaStreamVtbl {
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAMMediaStream * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAMMediaStream * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAMMediaStream * This);
	HRESULT(STDMETHODCALLTYPE * GetMultiMediaStream) (IAMMediaStream * This, IMultiMediaStream ** ppMultiMediaStream);
	HRESULT(STDMETHODCALLTYPE * GetInformation) (IAMMediaStream * This, MSPID * pPurposeId, STREAM_TYPE * pType);
	HRESULT(STDMETHODCALLTYPE * SetSameFormat) (IAMMediaStream * This, IMediaStream * pStreamThatHasDesiredFormat, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * AllocateSample) (IAMMediaStream * This, DWORD dwFlags, IStreamSample ** ppSample);
	HRESULT(STDMETHODCALLTYPE * CreateSharedSample) (IAMMediaStream * This, IStreamSample * pExistingSample, DWORD dwFlags, IStreamSample ** ppNewSample);
	HRESULT(STDMETHODCALLTYPE * SendEndOfStream) (IAMMediaStream * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IAMMediaStream * This, IUnknown * pSourceObject, DWORD dwFlags, REFMSPID PurposeId, const STREAM_TYPE StreamType);
	HRESULT(STDMETHODCALLTYPE * SetState) (IAMMediaStream * This, FILTER_STATE State);
	HRESULT(STDMETHODCALLTYPE * JoinAMMultiMediaStream) (IAMMediaStream * This, IAMMultiMediaStream * pAMMultiMediaStream);
	HRESULT(STDMETHODCALLTYPE * JoinFilter) (IAMMediaStream * This, IMediaStreamFilter * pMediaStreamFilter);
	HRESULT(STDMETHODCALLTYPE * JoinFilterGraph) (IAMMediaStream * This, IFilterGraph * pFilterGraph);
END_INTERFACE} IAMMediaStreamVtbl;
interface IAMMediaStream {
	CONST_VTBL struct IAMMediaStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMMediaStream_QueryInterface(This,riid,ppvObject) 	    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMMediaStream_AddRef(This) 	    ( (This)->lpVtbl -> AddRef(This) )
#define IAMMediaStream_Release(This) 	    ( (This)->lpVtbl -> Release(This) )
#define IAMMediaStream_GetMultiMediaStream(This,ppMultiMediaStream) 	    ( (This)->lpVtbl -> GetMultiMediaStream(This,ppMultiMediaStream) )
#define IAMMediaStream_GetInformation(This,pPurposeId,pType) 	    ( (This)->lpVtbl -> GetInformation(This,pPurposeId,pType) )
#define IAMMediaStream_SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags) 	    ( (This)->lpVtbl -> SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags) )
#define IAMMediaStream_AllocateSample(This,dwFlags,ppSample) 	    ( (This)->lpVtbl -> AllocateSample(This,dwFlags,ppSample) )
#define IAMMediaStream_CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample) 	    ( (This)->lpVtbl -> CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample) )
#define IAMMediaStream_SendEndOfStream(This,dwFlags) 	    ( (This)->lpVtbl -> SendEndOfStream(This,dwFlags) )
#define IAMMediaStream_Initialize(This,pSourceObject,dwFlags,PurposeId,StreamType) 	    ( (This)->lpVtbl -> Initialize(This,pSourceObject,dwFlags,PurposeId,StreamType) )
#define IAMMediaStream_SetState(This,State) 	    ( (This)->lpVtbl -> SetState(This,State) )
#define IAMMediaStream_JoinAMMultiMediaStream(This,pAMMultiMediaStream) 	    ( (This)->lpVtbl -> JoinAMMultiMediaStream(This,pAMMultiMediaStream) )
#define IAMMediaStream_JoinFilter(This,pMediaStreamFilter) 	    ( (This)->lpVtbl -> JoinFilter(This,pMediaStreamFilter) )
#define IAMMediaStream_JoinFilterGraph(This,pFilterGraph) 	    ( (This)->lpVtbl -> JoinFilterGraph(This,pFilterGraph) )
#endif
#endif
#ifndef __IMediaStreamFilter_INTERFACE_DEFINED__
#define __IMediaStreamFilter_INTERFACE_DEFINED__
extern const IID IID_IMediaStreamFilter;
typedef struct IMediaStreamFilterVtbl {
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMediaStreamFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMediaStreamFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMediaStreamFilter * This);
	HRESULT(STDMETHODCALLTYPE * GetClassID) (IMediaStreamFilter * This, CLSID * pClassID);
	HRESULT(STDMETHODCALLTYPE * Stop) (IMediaStreamFilter * This);
	HRESULT(STDMETHODCALLTYPE * Pause) (IMediaStreamFilter * This);
	HRESULT(STDMETHODCALLTYPE * Run) (IMediaStreamFilter * This, REFERENCE_TIME tStart);
	HRESULT(STDMETHODCALLTYPE * GetState) (IMediaStreamFilter * This, DWORD dwMilliSecsTimeout, FILTER_STATE * State);
	HRESULT(STDMETHODCALLTYPE * SetSyncSource) (IMediaStreamFilter * This, IReferenceClock * pClock);
	HRESULT(STDMETHODCALLTYPE * GetSyncSource) (IMediaStreamFilter * This, IReferenceClock ** pClock);
	HRESULT(STDMETHODCALLTYPE * EnumPins) (IMediaStreamFilter * This, IEnumPins ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * FindPin) (IMediaStreamFilter * This, LPCWSTR Id, IPin ** ppPin);
	HRESULT(STDMETHODCALLTYPE * QueryFilterInfo) (IMediaStreamFilter * This, FILTER_INFO * pInfo);
	HRESULT(STDMETHODCALLTYPE * JoinFilterGraph) (IMediaStreamFilter * This, IFilterGraph * pGraph, LPCWSTR pName);
	HRESULT(STDMETHODCALLTYPE * QueryVendorInfo) (IMediaStreamFilter * This, LPWSTR * pVendorInfo);
	HRESULT(STDMETHODCALLTYPE * AddMediaStream) (IMediaStreamFilter * This, IAMMediaStream * pAMMediaStream);
	HRESULT(STDMETHODCALLTYPE * GetMediaStream) (IMediaStreamFilter * This, REFMSPID idPurpose, IMediaStream ** ppMediaStream);
	HRESULT(STDMETHODCALLTYPE * EnumMediaStreams) (IMediaStreamFilter * This, long Index, IMediaStream ** ppMediaStream);
	HRESULT(STDMETHODCALLTYPE * SupportSeeking) (IMediaStreamFilter * This, BOOL bRenderer);
	HRESULT(STDMETHODCALLTYPE * ReferenceTimeToStreamTime) (IMediaStreamFilter * This, REFERENCE_TIME * pTime);
	HRESULT(STDMETHODCALLTYPE * GetCurrentStreamTime) (IMediaStreamFilter * This, REFERENCE_TIME * pCurrentStreamTime);
	HRESULT(STDMETHODCALLTYPE * WaitUntil) (IMediaStreamFilter * This, REFERENCE_TIME WaitStreamTime);
	HRESULT(STDMETHODCALLTYPE * Flush) (IMediaStreamFilter * This, BOOL bCancelEOS);
	HRESULT(STDMETHODCALLTYPE * EndOfStream) (IMediaStreamFilter * This);
	END_INTERFACE
} IMediaStreamFilterVtbl;
interface IMediaStreamFilter {
	CONST_VTBL struct IMediaStreamFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMediaStreamFilter_QueryInterface(This,riid,ppvObject) 	    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMediaStreamFilter_AddRef(This) 	    ( (This)->lpVtbl -> AddRef(This) )
#define IMediaStreamFilter_Release(This) 	    ( (This)->lpVtbl -> Release(This) )
#define IMediaStreamFilter_GetClassID(This,pClassID) 	    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
#define IMediaStreamFilter_Stop(This) 	    ( (This)->lpVtbl -> Stop(This) )
#define IMediaStreamFilter_Pause(This) 	    ( (This)->lpVtbl -> Pause(This) )
#define IMediaStreamFilter_Run(This,tStart) 	    ( (This)->lpVtbl -> Run(This,tStart) )
#define IMediaStreamFilter_GetState(This,dwMilliSecsTimeout,State) 	    ( (This)->lpVtbl -> GetState(This,dwMilliSecsTimeout,State) )
#define IMediaStreamFilter_SetSyncSource(This,pClock) 	    ( (This)->lpVtbl -> SetSyncSource(This,pClock) )
#define IMediaStreamFilter_GetSyncSource(This,pClock) 	    ( (This)->lpVtbl -> GetSyncSource(This,pClock) )
#define IMediaStreamFilter_EnumPins(This,ppEnum) 	    ( (This)->lpVtbl -> EnumPins(This,ppEnum) )
#define IMediaStreamFilter_FindPin(This,Id,ppPin) 	    ( (This)->lpVtbl -> FindPin(This,Id,ppPin) )
#define IMediaStreamFilter_QueryFilterInfo(This,pInfo) 	    ( (This)->lpVtbl -> QueryFilterInfo(This,pInfo) )
#define IMediaStreamFilter_JoinFilterGraph(This,pGraph,pName) 	    ( (This)->lpVtbl -> JoinFilterGraph(This,pGraph,pName) )
#define IMediaStreamFilter_QueryVendorInfo(This,pVendorInfo) 	    ( (This)->lpVtbl -> QueryVendorInfo(This,pVendorInfo) )
#define IMediaStreamFilter_AddMediaStream(This,pAMMediaStream) 	    ( (This)->lpVtbl -> AddMediaStream(This,pAMMediaStream) )
#define IMediaStreamFilter_GetMediaStream(This,idPurpose,ppMediaStream) 	    ( (This)->lpVtbl -> GetMediaStream(This,idPurpose,ppMediaStream) )
#define IMediaStreamFilter_EnumMediaStreams(This,Index,ppMediaStream) 	    ( (This)->lpVtbl -> EnumMediaStreams(This,Index,ppMediaStream) )
#define IMediaStreamFilter_SupportSeeking(This,bRenderer) 	    ( (This)->lpVtbl -> SupportSeeking(This,bRenderer) )
#define IMediaStreamFilter_ReferenceTimeToStreamTime(This,pTime) 	    ( (This)->lpVtbl -> ReferenceTimeToStreamTime(This,pTime) )
#define IMediaStreamFilter_GetCurrentStreamTime(This,pCurrentStreamTime) 	    ( (This)->lpVtbl -> GetCurrentStreamTime(This,pCurrentStreamTime) )
#define IMediaStreamFilter_WaitUntil(This,WaitStreamTime) 	    ( (This)->lpVtbl -> WaitUntil(This,WaitStreamTime) )
#define IMediaStreamFilter_Flush(This,bCancelEOS) 	    ( (This)->lpVtbl -> Flush(This,bCancelEOS) )
#define IMediaStreamFilter_EndOfStream(This) 	    ( (This)->lpVtbl -> EndOfStream(This) )
#endif
#endif
#ifndef __IDirectDrawMediaSampleAllocator_INTERFACE_DEFINED__
#define __IDirectDrawMediaSampleAllocator_INTERFACE_DEFINED__
extern const IID IID_IDirectDrawMediaSampleAllocator;
typedef struct IDirectDrawMediaSampleAllocatorVtbl {
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDirectDrawMediaSampleAllocator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDirectDrawMediaSampleAllocator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDirectDrawMediaSampleAllocator * This);
	HRESULT(STDMETHODCALLTYPE * GetDirectDraw) (IDirectDrawMediaSampleAllocator * This, IDirectDraw ** ppDirectDraw);
	END_INTERFACE
} IDirectDrawMediaSampleAllocatorVtbl;
interface IDirectDrawMediaSampleAllocator {
	CONST_VTBL struct IDirectDrawMediaSampleAllocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDirectDrawMediaSampleAllocator_QueryInterface(This,riid,ppvObject) 	    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDirectDrawMediaSampleAllocator_AddRef(This) 	    ( (This)->lpVtbl -> AddRef(This) )
#define IDirectDrawMediaSampleAllocator_Release(This) 	    ( (This)->lpVtbl -> Release(This) )
#define IDirectDrawMediaSampleAllocator_GetDirectDraw(This,ppDirectDraw) 	    ( (This)->lpVtbl -> GetDirectDraw(This,ppDirectDraw) )
#endif
#endif
#ifndef __IDirectDrawMediaSample_INTERFACE_DEFINED__
#define __IDirectDrawMediaSample_INTERFACE_DEFINED__
extern const IID IID_IDirectDrawMediaSample;
typedef struct IDirectDrawMediaSampleVtbl {
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDirectDrawMediaSample * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDirectDrawMediaSample * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDirectDrawMediaSample * This);
	HRESULT(STDMETHODCALLTYPE * GetSurfaceAndReleaseLock) (IDirectDrawMediaSample * This, IDirectDrawSurface ** ppDirectDrawSurface, RECT * pRect);
	HRESULT(STDMETHODCALLTYPE * LockMediaSamplePointer) (IDirectDrawMediaSample * This);
	END_INTERFACE
} IDirectDrawMediaSampleVtbl;
interface IDirectDrawMediaSample {
	CONST_VTBL struct IDirectDrawMediaSampleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDirectDrawMediaSample_QueryInterface(This,riid,ppvObject) 	    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDirectDrawMediaSample_AddRef(This) 	    ( (This)->lpVtbl -> AddRef(This) )
#define IDirectDrawMediaSample_Release(This) 	    ( (This)->lpVtbl -> Release(This) )
#define IDirectDrawMediaSample_GetSurfaceAndReleaseLock(This,ppDirectDrawSurface,pRect) 	    ( (This)->lpVtbl -> GetSurfaceAndReleaseLock(This,ppDirectDrawSurface,pRect) )
#define IDirectDrawMediaSample_LockMediaSamplePointer(This) 	    ( (This)->lpVtbl -> LockMediaSamplePointer(This) )
#endif
#endif
#ifndef __IAMMediaTypeStream_INTERFACE_DEFINED__
#define __IAMMediaTypeStream_INTERFACE_DEFINED__
extern const IID IID_IAMMediaTypeStream;
typedef struct IAMMediaTypeStreamVtbl {
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAMMediaTypeStream * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAMMediaTypeStream * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAMMediaTypeStream * This);
	HRESULT(STDMETHODCALLTYPE * GetMultiMediaStream) (IAMMediaTypeStream * This, IMultiMediaStream ** ppMultiMediaStream);
	HRESULT(STDMETHODCALLTYPE * GetInformation) (IAMMediaTypeStream * This, MSPID * pPurposeId, STREAM_TYPE * pType);
	HRESULT(STDMETHODCALLTYPE * SetSameFormat) (IAMMediaTypeStream * This, IMediaStream * pStreamThatHasDesiredFormat, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * AllocateSample) (IAMMediaTypeStream * This, DWORD dwFlags, IStreamSample ** ppSample);
	HRESULT(STDMETHODCALLTYPE * CreateSharedSample) (IAMMediaTypeStream * This, IStreamSample * pExistingSample, DWORD dwFlags, IStreamSample ** ppNewSample);
	HRESULT(STDMETHODCALLTYPE * SendEndOfStream) (IAMMediaTypeStream * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetFormat) (IAMMediaTypeStream * This, AM_MEDIA_TYPE * pMediaType, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * SetFormat) (IAMMediaTypeStream * This, AM_MEDIA_TYPE * pMediaType, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * CreateSample) (IAMMediaTypeStream * This, long lSampleSize, BYTE * pbBuffer, DWORD dwFlags, IUnknown * pUnkOuter, IAMMediaTypeSample ** ppAMMediaTypeSample);
	HRESULT(STDMETHODCALLTYPE * GetStreamAllocatorRequirements) (IAMMediaTypeStream * This, ALLOCATOR_PROPERTIES * pProps);
	HRESULT(STDMETHODCALLTYPE * SetStreamAllocatorRequirements) (IAMMediaTypeStream * This, ALLOCATOR_PROPERTIES * pProps);
	END_INTERFACE
} IAMMediaTypeStreamVtbl;
interface IAMMediaTypeStream {
	CONST_VTBL struct IAMMediaTypeStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMMediaTypeStream_QueryInterface(This,riid,ppvObject) 	    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMMediaTypeStream_AddRef(This) 	    ( (This)->lpVtbl -> AddRef(This) )
#define IAMMediaTypeStream_Release(This) 	    ( (This)->lpVtbl -> Release(This) )
#define IAMMediaTypeStream_GetMultiMediaStream(This,ppMultiMediaStream) 	    ( (This)->lpVtbl -> GetMultiMediaStream(This,ppMultiMediaStream) )
#define IAMMediaTypeStream_GetInformation(This,pPurposeId,pType) 	    ( (This)->lpVtbl -> GetInformation(This,pPurposeId,pType) )
#define IAMMediaTypeStream_SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags) 	    ( (This)->lpVtbl -> SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags) )
#define IAMMediaTypeStream_AllocateSample(This,dwFlags,ppSample) 	    ( (This)->lpVtbl -> AllocateSample(This,dwFlags,ppSample) )
#define IAMMediaTypeStream_CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample) 	    ( (This)->lpVtbl -> CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample) )
#define IAMMediaTypeStream_SendEndOfStream(This,dwFlags) 	    ( (This)->lpVtbl -> SendEndOfStream(This,dwFlags) )
#define IAMMediaTypeStream_GetFormat(This,pMediaType,dwFlags) 	    ( (This)->lpVtbl -> GetFormat(This,pMediaType,dwFlags) )
#define IAMMediaTypeStream_SetFormat(This,pMediaType,dwFlags) 	    ( (This)->lpVtbl -> SetFormat(This,pMediaType,dwFlags) )
#define IAMMediaTypeStream_CreateSample(This,lSampleSize,pbBuffer,dwFlags,pUnkOuter,ppAMMediaTypeSample) 	    ( (This)->lpVtbl -> CreateSample(This,lSampleSize,pbBuffer,dwFlags,pUnkOuter,ppAMMediaTypeSample) )
#define IAMMediaTypeStream_GetStreamAllocatorRequirements(This,pProps) 	    ( (This)->lpVtbl -> GetStreamAllocatorRequirements(This,pProps) )
#define IAMMediaTypeStream_SetStreamAllocatorRequirements(This,pProps) 	    ( (This)->lpVtbl -> SetStreamAllocatorRequirements(This,pProps) )
#endif
#endif
#ifndef __IAMMediaTypeSample_INTERFACE_DEFINED__
#define __IAMMediaTypeSample_INTERFACE_DEFINED__
extern const IID IID_IAMMediaTypeSample;
typedef struct IAMMediaTypeSampleVtbl {
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAMMediaTypeSample * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAMMediaTypeSample * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAMMediaTypeSample * This);
	HRESULT(STDMETHODCALLTYPE * GetMediaStream) (IAMMediaTypeSample * This, IMediaStream ** ppMediaStream);
	HRESULT(STDMETHODCALLTYPE * GetSampleTimes) (IAMMediaTypeSample * This, STREAM_TIME * pStartTime, STREAM_TIME * pEndTime, STREAM_TIME * pCurrentTime);
	HRESULT(STDMETHODCALLTYPE * SetSampleTimes) (IAMMediaTypeSample * This, const STREAM_TIME * pStartTime, const STREAM_TIME * pEndTime);
	HRESULT(STDMETHODCALLTYPE * Update) (IAMMediaTypeSample * This, DWORD dwFlags, HANDLE hEvent, PAPCFUNC pfnAPC, DWORD_PTR dwAPCData);
	HRESULT(STDMETHODCALLTYPE * CompletionStatus) (IAMMediaTypeSample * This, DWORD dwFlags, DWORD dwMilliseconds);
	HRESULT(STDMETHODCALLTYPE * SetPointer) (IAMMediaTypeSample * This, BYTE * pBuffer, long lSize);
	HRESULT(STDMETHODCALLTYPE * GetPointer) (IAMMediaTypeSample * This, BYTE ** ppBuffer);
	long (STDMETHODCALLTYPE * GetSize) (IAMMediaTypeSample * This);
	HRESULT(STDMETHODCALLTYPE * GetTime) (IAMMediaTypeSample * This, REFERENCE_TIME * pTimeStart, REFERENCE_TIME * pTimeEnd);
	HRESULT(STDMETHODCALLTYPE * SetTime) (IAMMediaTypeSample * This, REFERENCE_TIME * pTimeStart, REFERENCE_TIME * pTimeEnd);
	HRESULT(STDMETHODCALLTYPE * IsSyncPoint) (IAMMediaTypeSample * This);
	HRESULT(STDMETHODCALLTYPE * SetSyncPoint) (IAMMediaTypeSample * This, BOOL bIsSyncPoint);
	HRESULT(STDMETHODCALLTYPE * IsPreroll) (IAMMediaTypeSample * This);
	HRESULT(STDMETHODCALLTYPE * SetPreroll) (IAMMediaTypeSample * This, BOOL bIsPreroll);
	long (STDMETHODCALLTYPE * GetActualDataLength) (IAMMediaTypeSample * This);
	HRESULT(STDMETHODCALLTYPE * SetActualDataLength) (IAMMediaTypeSample * This, long __MIDL__IAMMediaTypeSample0000);
	HRESULT(STDMETHODCALLTYPE * GetMediaType) (IAMMediaTypeSample * This, AM_MEDIA_TYPE ** ppMediaType);
	HRESULT(STDMETHODCALLTYPE * SetMediaType) (IAMMediaTypeSample * This, AM_MEDIA_TYPE * pMediaType);
	HRESULT(STDMETHODCALLTYPE * IsDiscontinuity) (IAMMediaTypeSample * This);
	HRESULT(STDMETHODCALLTYPE * SetDiscontinuity) (IAMMediaTypeSample * This, BOOL bDiscontinuity);
	HRESULT(STDMETHODCALLTYPE * GetMediaTime) (IAMMediaTypeSample * This, LONGLONG * pTimeStart, LONGLONG * pTimeEnd);
	HRESULT(STDMETHODCALLTYPE * SetMediaTime) (IAMMediaTypeSample * This, LONGLONG * pTimeStart, LONGLONG * pTimeEnd);
	END_INTERFACE
} IAMMediaTypeSampleVtbl;
interface IAMMediaTypeSample {
	CONST_VTBL struct IAMMediaTypeSampleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMMediaTypeSample_QueryInterface(This,riid,ppvObject) 	    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMMediaTypeSample_AddRef(This) 	    ( (This)->lpVtbl -> AddRef(This) )
#define IAMMediaTypeSample_Release(This) 	    ( (This)->lpVtbl -> Release(This) )
#define IAMMediaTypeSample_GetMediaStream(This,ppMediaStream) 	    ( (This)->lpVtbl -> GetMediaStream(This,ppMediaStream) )
#define IAMMediaTypeSample_GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime) 	    ( (This)->lpVtbl -> GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime) )
#define IAMMediaTypeSample_SetSampleTimes(This,pStartTime,pEndTime) 	    ( (This)->lpVtbl -> SetSampleTimes(This,pStartTime,pEndTime) )
#define IAMMediaTypeSample_Update(This,dwFlags,hEvent,pfnAPC,dwAPCData) 	    ( (This)->lpVtbl -> Update(This,dwFlags,hEvent,pfnAPC,dwAPCData) )
#define IAMMediaTypeSample_CompletionStatus(This,dwFlags,dwMilliseconds) 	    ( (This)->lpVtbl -> CompletionStatus(This,dwFlags,dwMilliseconds) )
#define IAMMediaTypeSample_SetPointer(This,pBuffer,lSize) 	    ( (This)->lpVtbl -> SetPointer(This,pBuffer,lSize) )
#define IAMMediaTypeSample_GetPointer(This,ppBuffer) 	    ( (This)->lpVtbl -> GetPointer(This,ppBuffer) )
#define IAMMediaTypeSample_GetSize(This) 	    ( (This)->lpVtbl -> GetSize(This) )
#define IAMMediaTypeSample_GetTime(This,pTimeStart,pTimeEnd) 	    ( (This)->lpVtbl -> GetTime(This,pTimeStart,pTimeEnd) )
#define IAMMediaTypeSample_SetTime(This,pTimeStart,pTimeEnd) 	    ( (This)->lpVtbl -> SetTime(This,pTimeStart,pTimeEnd) )
#define IAMMediaTypeSample_IsSyncPoint(This) 	    ( (This)->lpVtbl -> IsSyncPoint(This) )
#define IAMMediaTypeSample_SetSyncPoint(This,bIsSyncPoint) 	    ( (This)->lpVtbl -> SetSyncPoint(This,bIsSyncPoint) )
#define IAMMediaTypeSample_IsPreroll(This) 	    ( (This)->lpVtbl -> IsPreroll(This) )
#define IAMMediaTypeSample_SetPreroll(This,bIsPreroll) 	    ( (This)->lpVtbl -> SetPreroll(This,bIsPreroll) )
#define IAMMediaTypeSample_GetActualDataLength(This) 	    ( (This)->lpVtbl -> GetActualDataLength(This) )
#define IAMMediaTypeSample_SetActualDataLength(This,__MIDL__IAMMediaTypeSample0000) 	    ( (This)->lpVtbl -> SetActualDataLength(This,__MIDL__IAMMediaTypeSample0000) )
#define IAMMediaTypeSample_GetMediaType(This,ppMediaType) 	    ( (This)->lpVtbl -> GetMediaType(This,ppMediaType) )
#define IAMMediaTypeSample_SetMediaType(This,pMediaType) 	    ( (This)->lpVtbl -> SetMediaType(This,pMediaType) )
#define IAMMediaTypeSample_IsDiscontinuity(This) 	    ( (This)->lpVtbl -> IsDiscontinuity(This) )
#define IAMMediaTypeSample_SetDiscontinuity(This,bDiscontinuity) 	    ( (This)->lpVtbl -> SetDiscontinuity(This,bDiscontinuity) )
#define IAMMediaTypeSample_GetMediaTime(This,pTimeStart,pTimeEnd) 	    ( (This)->lpVtbl -> GetMediaTime(This,pTimeStart,pTimeEnd) )
#define IAMMediaTypeSample_SetMediaTime(This,pTimeStart,pTimeEnd) 	    ( (This)->lpVtbl -> SetMediaTime(This,pTimeStart,pTimeEnd) )
#endif
#endif
DEFINE_GUID(CLSID_AMMultiMediaStream, 0x49c47ce5, 0x9ba4, 0x11d0, 0x82, 0x12, 0x00, 0xc0, 0x4f, 0xc3, 0x2c, 0x45);
DEFINE_GUID(CLSID_AMDirectDrawStream, 0x49c47ce4, 0x9ba4, 0x11d0, 0x82, 0x12, 0x00, 0xc0, 0x4f, 0xc3, 0x2c, 0x45);
DEFINE_GUID(CLSID_AMAudioStream, 0x8496e040, 0xaf4c, 0x11d0, 0x82, 0x12, 0x00, 0xc0, 0x4f, 0xc3, 0x2c, 0x45);
DEFINE_GUID(CLSID_AMAudioData, 0xf2468580, 0xaf8a, 0x11d0, 0x82, 0x12, 0x00, 0xc0, 0x4f, 0xc3, 0x2c, 0x45);
DEFINE_GUID(CLSID_AMMediaTypeStream, 0xcf0f2f7c, 0xf7bf, 0x11d0, 0x90, 0xd, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0x9d);
extern RPC_IF_HANDLE __MIDL_itf_amstream_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_amstream_0000_0007_v0_0_s_ifspec;
#endif


