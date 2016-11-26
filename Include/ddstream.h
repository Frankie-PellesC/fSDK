/*+@@file@@----------------------------------------------------------------*//*!
 \file		ddstream.h
 \par Description 
            DirectDraw stream Interfaces
 \par  Status: 
            
 \par Project: 
            PellesC Headers Extension
 \date		Created  on Sun Mar 15 18:34:31 2015
 \date		Modified on Sun Mar 15 18:34:31 2015
 \author	Frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif
#ifndef __ddstream_h__
#define __ddstream_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDirectDrawMediaStream_FWD_DEFINED__
#define __IDirectDrawMediaStream_FWD_DEFINED__
typedef interface IDirectDrawMediaStream IDirectDrawMediaStream;
#endif
#ifndef __IDirectDrawStreamSample_FWD_DEFINED__
#define __IDirectDrawStreamSample_FWD_DEFINED__
typedef interface IDirectDrawStreamSample IDirectDrawStreamSample;
#endif
#include <unknwn.h>
#include <mmstream.h>
#include <ddraw.h>
enum __MIDL___MIDL_itf_ddstream_0000_0000_0001
    {	DDSFF_PROGRESSIVERENDER	= 0x1
    } ;
extern RPC_IF_HANDLE __MIDL_itf_ddstream_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ddstream_0000_0000_v0_0_s_ifspec;
#ifndef __IDirectDrawMediaStream_INTERFACE_DEFINED__
#define __IDirectDrawMediaStream_INTERFACE_DEFINED__
extern const IID IID_IDirectDrawMediaStream;
typedef struct IDirectDrawMediaStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IDirectDrawMediaStream * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IDirectDrawMediaStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IDirectDrawMediaStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetMultiMediaStream )(
        IDirectDrawMediaStream * This,
        IMultiMediaStream **ppMultiMediaStream);
    HRESULT ( STDMETHODCALLTYPE *GetInformation )(
        IDirectDrawMediaStream * This,
        MSPID *pPurposeId,
        STREAM_TYPE *pType);
    HRESULT ( STDMETHODCALLTYPE *SetSameFormat )(
        IDirectDrawMediaStream * This,
        IMediaStream *pStreamThatHasDesiredFormat,
        DWORD dwFlags);
    HRESULT ( STDMETHODCALLTYPE *AllocateSample )(
        IDirectDrawMediaStream * This,
        DWORD dwFlags,
        IStreamSample **ppSample);
    HRESULT ( STDMETHODCALLTYPE *CreateSharedSample )(
        IDirectDrawMediaStream * This,
        IStreamSample *pExistingSample,
        DWORD dwFlags,
        IStreamSample **ppNewSample);
    HRESULT ( STDMETHODCALLTYPE *SendEndOfStream )(
        IDirectDrawMediaStream * This,
        DWORD dwFlags);
    HRESULT ( STDMETHODCALLTYPE *GetFormat )(
        IDirectDrawMediaStream * This,
        DDSURFACEDESC *pDDSDCurrent,
        IDirectDrawPalette **ppDirectDrawPalette,
        DDSURFACEDESC *pDDSDDesired,
        DWORD *pdwFlags);
    HRESULT ( STDMETHODCALLTYPE *SetFormat )(
        IDirectDrawMediaStream * This,
        const DDSURFACEDESC *pDDSurfaceDesc,
        IDirectDrawPalette *pDirectDrawPalette);
    HRESULT ( STDMETHODCALLTYPE *GetDirectDraw )(
        IDirectDrawMediaStream * This,
        IDirectDraw **ppDirectDraw);
    HRESULT ( STDMETHODCALLTYPE *SetDirectDraw )(
        IDirectDrawMediaStream * This,
        IDirectDraw *pDirectDraw);
    HRESULT ( STDMETHODCALLTYPE *CreateSample )(
        IDirectDrawMediaStream * This,
        IDirectDrawSurface *pSurface,
        const RECT *pRect,
        DWORD dwFlags,
        IDirectDrawStreamSample **ppSample);
    HRESULT ( STDMETHODCALLTYPE *GetTimePerFrame )(
        IDirectDrawMediaStream * This,
        STREAM_TIME *pFrameTime);
    END_INTERFACE
} IDirectDrawMediaStreamVtbl;
interface IDirectDrawMediaStream
{
    CONST_VTBL struct IDirectDrawMediaStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDirectDrawMediaStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDirectDrawMediaStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IDirectDrawMediaStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IDirectDrawMediaStream_GetMultiMediaStream(This,ppMultiMediaStream)	\
    ( (This)->lpVtbl -> GetMultiMediaStream(This,ppMultiMediaStream) )
#define IDirectDrawMediaStream_GetInformation(This,pPurposeId,pType)	\
    ( (This)->lpVtbl -> GetInformation(This,pPurposeId,pType) )
#define IDirectDrawMediaStream_SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags)	\
    ( (This)->lpVtbl -> SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags) )
#define IDirectDrawMediaStream_AllocateSample(This,dwFlags,ppSample)	\
    ( (This)->lpVtbl -> AllocateSample(This,dwFlags,ppSample) )
#define IDirectDrawMediaStream_CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample)	\
    ( (This)->lpVtbl -> CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample) )
#define IDirectDrawMediaStream_SendEndOfStream(This,dwFlags)	\
    ( (This)->lpVtbl -> SendEndOfStream(This,dwFlags) )
#define IDirectDrawMediaStream_GetFormat(This,pDDSDCurrent,ppDirectDrawPalette,pDDSDDesired,pdwFlags)	\
    ( (This)->lpVtbl -> GetFormat(This,pDDSDCurrent,ppDirectDrawPalette,pDDSDDesired,pdwFlags) )
#define IDirectDrawMediaStream_SetFormat(This,pDDSurfaceDesc,pDirectDrawPalette)	\
    ( (This)->lpVtbl -> SetFormat(This,pDDSurfaceDesc,pDirectDrawPalette) )
#define IDirectDrawMediaStream_GetDirectDraw(This,ppDirectDraw)	\
    ( (This)->lpVtbl -> GetDirectDraw(This,ppDirectDraw) )
#define IDirectDrawMediaStream_SetDirectDraw(This,pDirectDraw)	\
    ( (This)->lpVtbl -> SetDirectDraw(This,pDirectDraw) )
#define IDirectDrawMediaStream_CreateSample(This,pSurface,pRect,dwFlags,ppSample)	\
    ( (This)->lpVtbl -> CreateSample(This,pSurface,pRect,dwFlags,ppSample) )
#define IDirectDrawMediaStream_GetTimePerFrame(This,pFrameTime)	\
    ( (This)->lpVtbl -> GetTimePerFrame(This,pFrameTime) )
#endif
#endif
#ifndef __IDirectDrawStreamSample_INTERFACE_DEFINED__
#define __IDirectDrawStreamSample_INTERFACE_DEFINED__
extern const IID IID_IDirectDrawStreamSample;
typedef struct IDirectDrawStreamSampleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IDirectDrawStreamSample * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IDirectDrawStreamSample * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IDirectDrawStreamSample * This);
    HRESULT ( STDMETHODCALLTYPE *GetMediaStream )(
        IDirectDrawStreamSample * This,
        IMediaStream **ppMediaStream);
    HRESULT ( STDMETHODCALLTYPE *GetSampleTimes )(
        IDirectDrawStreamSample * This,
        STREAM_TIME *pStartTime,
        STREAM_TIME *pEndTime,
        STREAM_TIME *pCurrentTime);
    HRESULT ( STDMETHODCALLTYPE *SetSampleTimes )(
        IDirectDrawStreamSample * This,
        const STREAM_TIME *pStartTime,
        const STREAM_TIME *pEndTime);
    HRESULT ( STDMETHODCALLTYPE *Update )(
        IDirectDrawStreamSample * This,
        DWORD dwFlags,
        HANDLE hEvent,
        PAPCFUNC pfnAPC,
        DWORD_PTR dwAPCData);
    HRESULT ( STDMETHODCALLTYPE *CompletionStatus )(
        IDirectDrawStreamSample * This,
        DWORD dwFlags,
        DWORD dwMilliseconds);
    HRESULT ( STDMETHODCALLTYPE *GetSurface )(
        IDirectDrawStreamSample * This,
        IDirectDrawSurface **ppDirectDrawSurface,
        RECT *pRect);
    HRESULT ( STDMETHODCALLTYPE *SetRect )(
        IDirectDrawStreamSample * This,
        const RECT *pRect);
    END_INTERFACE
} IDirectDrawStreamSampleVtbl;
interface IDirectDrawStreamSample
{
    CONST_VTBL struct IDirectDrawStreamSampleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDirectDrawStreamSample_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDirectDrawStreamSample_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IDirectDrawStreamSample_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IDirectDrawStreamSample_GetMediaStream(This,ppMediaStream)	\
    ( (This)->lpVtbl -> GetMediaStream(This,ppMediaStream) )
#define IDirectDrawStreamSample_GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime)	\
    ( (This)->lpVtbl -> GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime) )
#define IDirectDrawStreamSample_SetSampleTimes(This,pStartTime,pEndTime)	\
    ( (This)->lpVtbl -> SetSampleTimes(This,pStartTime,pEndTime) )
#define IDirectDrawStreamSample_Update(This,dwFlags,hEvent,pfnAPC,dwAPCData)	\
    ( (This)->lpVtbl -> Update(This,dwFlags,hEvent,pfnAPC,dwAPCData) )
#define IDirectDrawStreamSample_CompletionStatus(This,dwFlags,dwMilliseconds)	\
    ( (This)->lpVtbl -> CompletionStatus(This,dwFlags,dwMilliseconds) )
#define IDirectDrawStreamSample_GetSurface(This,ppDirectDrawSurface,pRect)	\
    ( (This)->lpVtbl -> GetSurface(This,ppDirectDrawSurface,pRect) )
#define IDirectDrawStreamSample_SetRect(This,pRect)	\
    ( (This)->lpVtbl -> SetRect(This,pRect) )
#endif
#endif
#endif
