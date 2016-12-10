/*+@@file@@----------------------------------------------------------------*//*!
 \file		mmstream.h
 \par Description 
            Multimedia stream Interface
 \par  Status: 
            
 \par Project: 
            PellesC Headers Extension
 \date		Created  on Sun Mar 15 18:20:24 2015
 \date		Modified on Sun Mar 15 18:20:24 2015
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
#ifndef __mmstream_h__
#define __mmstream_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IMultiMediaStream_FWD_DEFINED__
#define __IMultiMediaStream_FWD_DEFINED__
typedef interface IMultiMediaStream IMultiMediaStream;
#endif 	
#ifndef __IMediaStream_FWD_DEFINED__
#define __IMediaStream_FWD_DEFINED__
typedef interface IMediaStream IMediaStream;
#endif 	
#ifndef __IStreamSample_FWD_DEFINED__
#define __IStreamSample_FWD_DEFINED__
typedef interface IStreamSample IStreamSample;
#endif 	
#include <unknwn.h>
#define MS_ERROR_CODE(x) MAKE_HRESULT(1, FACILITY_ITF, (x) + 0x400)
#define MS_SUCCESS_CODE(x) MAKE_HRESULT(0, FACILITY_ITF, x)
#define MS_S_PENDING                  MS_SUCCESS_CODE(1)
#define MS_S_NOUPDATE                 MS_SUCCESS_CODE(2)
#define MS_S_ENDOFSTREAM              MS_SUCCESS_CODE(3)
#define MS_E_SAMPLEALLOC              MS_ERROR_CODE(1)
#define MS_E_PURPOSEID                MS_ERROR_CODE(2)
#define MS_E_NOSTREAM                 MS_ERROR_CODE(3)
#define MS_E_NOSEEKING                MS_ERROR_CODE(4)
#define MS_E_INCOMPATIBLE             MS_ERROR_CODE(5)
#define MS_E_BUSY                     MS_ERROR_CODE(6)
#define MS_E_NOTINIT                  MS_ERROR_CODE(7)
#define MS_E_SOURCEALREADYDEFINED     MS_ERROR_CODE(8)
#define MS_E_INVALIDSTREAMTYPE        MS_ERROR_CODE(9)
#define MS_E_NOTRUNNING               MS_ERROR_CODE(10)
DEFINE_GUID(MSPID_PrimaryVideo, 
0xa35ff56a, 0x9fda, 0x11d0, 0x8f, 0xdf, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0x9d);
DEFINE_GUID(MSPID_PrimaryAudio,
0xa35ff56b, 0x9fda, 0x11d0, 0x8f, 0xdf, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0x9d);
#if(_WIN32_WINNT < 0x0400)
typedef void ( __stdcall *PAPCFUNC )( 
    DWORD_PTR dwParam);
#endif
typedef LONGLONG STREAM_TIME;
typedef GUID MSPID;
typedef REFGUID REFMSPID;
typedef 
enum __MIDL___MIDL_itf_mmstream_0000_0000_0001
    {	STREAMTYPE_READ	= 0,
	STREAMTYPE_WRITE	= 1,
	STREAMTYPE_TRANSFORM	= 2
    } 	STREAM_TYPE;
typedef 
enum __MIDL___MIDL_itf_mmstream_0000_0000_0002
    {	STREAMSTATE_STOP	= 0,
	STREAMSTATE_RUN	= 1
    } 	STREAM_STATE;
typedef 
enum __MIDL___MIDL_itf_mmstream_0000_0000_0003
    {	COMPSTAT_NOUPDATEOK	= 0x1,
	COMPSTAT_WAIT	= 0x2,
	COMPSTAT_ABORT	= 0x4
    } 	COMPLETION_STATUS_FLAGS;
enum __MIDL___MIDL_itf_mmstream_0000_0000_0004
    {	MMSSF_HASCLOCK	= 0x1,
	MMSSF_SUPPORTSEEK	= 0x2,
	MMSSF_ASYNCHRONOUS	= 0x4
    } ;
enum __MIDL___MIDL_itf_mmstream_0000_0000_0005
    {	SSUPDATE_ASYNC	= 0x1,
	SSUPDATE_CONTINUOUS	= 0x2
    } ;
extern RPC_IF_HANDLE __MIDL_itf_mmstream_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmstream_0000_0000_v0_0_s_ifspec;
#ifndef __IMultiMediaStream_INTERFACE_DEFINED__
#define __IMultiMediaStream_INTERFACE_DEFINED__
extern const IID IID_IMultiMediaStream;
typedef struct IMultiMediaStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        IMultiMediaStream * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( 
        IMultiMediaStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )( 
        IMultiMediaStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetInformation )( 
        IMultiMediaStream * This,
        DWORD *pdwFlags,
        STREAM_TYPE *pStreamType);
    HRESULT ( STDMETHODCALLTYPE *GetMediaStream )( 
        IMultiMediaStream * This,
        REFMSPID idPurpose,
        IMediaStream **ppMediaStream);
    HRESULT ( STDMETHODCALLTYPE *EnumMediaStreams )( 
        IMultiMediaStream * This,
        long Index,
        IMediaStream **ppMediaStream);
    HRESULT ( STDMETHODCALLTYPE *GetState )( 
        IMultiMediaStream * This,
        STREAM_STATE *pCurrentState);
    HRESULT ( STDMETHODCALLTYPE *SetState )( 
        IMultiMediaStream * This,
        STREAM_STATE NewState);
    HRESULT ( STDMETHODCALLTYPE *GetTime )( 
        IMultiMediaStream * This,
        STREAM_TIME *pCurrentTime);
    HRESULT ( STDMETHODCALLTYPE *GetDuration )( 
        IMultiMediaStream * This,
        STREAM_TIME *pDuration);
    HRESULT ( STDMETHODCALLTYPE *Seek )( 
        IMultiMediaStream * This,
        STREAM_TIME SeekTime);
    HRESULT ( STDMETHODCALLTYPE *GetEndOfStreamEventHandle )( 
        IMultiMediaStream * This,
        HANDLE *phEOS);
    END_INTERFACE
} IMultiMediaStreamVtbl;
interface IMultiMediaStream
{
    CONST_VTBL struct IMultiMediaStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMultiMediaStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IMultiMediaStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define IMultiMediaStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 
#define IMultiMediaStream_GetInformation(This,pdwFlags,pStreamType)	\
    ( (This)->lpVtbl -> GetInformation(This,pdwFlags,pStreamType) ) 
#define IMultiMediaStream_GetMediaStream(This,idPurpose,ppMediaStream)	\
    ( (This)->lpVtbl -> GetMediaStream(This,idPurpose,ppMediaStream) ) 
#define IMultiMediaStream_EnumMediaStreams(This,Index,ppMediaStream)	\
    ( (This)->lpVtbl -> EnumMediaStreams(This,Index,ppMediaStream) ) 
#define IMultiMediaStream_GetState(This,pCurrentState)	\
    ( (This)->lpVtbl -> GetState(This,pCurrentState) ) 
#define IMultiMediaStream_SetState(This,NewState)	\
    ( (This)->lpVtbl -> SetState(This,NewState) ) 
#define IMultiMediaStream_GetTime(This,pCurrentTime)	\
    ( (This)->lpVtbl -> GetTime(This,pCurrentTime) ) 
#define IMultiMediaStream_GetDuration(This,pDuration)	\
    ( (This)->lpVtbl -> GetDuration(This,pDuration) ) 
#define IMultiMediaStream_Seek(This,SeekTime)	\
    ( (This)->lpVtbl -> Seek(This,SeekTime) ) 
#define IMultiMediaStream_GetEndOfStreamEventHandle(This,phEOS)	\
    ( (This)->lpVtbl -> GetEndOfStreamEventHandle(This,phEOS) ) 
#endif 
#endif 	
#ifndef __IMediaStream_INTERFACE_DEFINED__
#define __IMediaStream_INTERFACE_DEFINED__
extern const IID IID_IMediaStream;
typedef struct IMediaStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        IMediaStream * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( 
        IMediaStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )( 
        IMediaStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetMultiMediaStream )( 
        IMediaStream * This,
        IMultiMediaStream **ppMultiMediaStream);
    HRESULT ( STDMETHODCALLTYPE *GetInformation )( 
        IMediaStream * This,
        MSPID *pPurposeId,
        STREAM_TYPE *pType);
    HRESULT ( STDMETHODCALLTYPE *SetSameFormat )( 
        IMediaStream * This,
        IMediaStream *pStreamThatHasDesiredFormat,
        DWORD dwFlags);
    HRESULT ( STDMETHODCALLTYPE *AllocateSample )( 
        IMediaStream * This,
        DWORD dwFlags,
        IStreamSample **ppSample);
    HRESULT ( STDMETHODCALLTYPE *CreateSharedSample )( 
        IMediaStream * This,
        IStreamSample *pExistingSample,
        DWORD dwFlags,
        IStreamSample **ppNewSample);
    HRESULT ( STDMETHODCALLTYPE *SendEndOfStream )( 
        IMediaStream * This,
        DWORD dwFlags);
    END_INTERFACE
} IMediaStreamVtbl;
interface IMediaStream
{
    CONST_VTBL struct IMediaStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMediaStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IMediaStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define IMediaStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 
#define IMediaStream_GetMultiMediaStream(This,ppMultiMediaStream)	\
    ( (This)->lpVtbl -> GetMultiMediaStream(This,ppMultiMediaStream) ) 
#define IMediaStream_GetInformation(This,pPurposeId,pType)	\
    ( (This)->lpVtbl -> GetInformation(This,pPurposeId,pType) ) 
#define IMediaStream_SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags)	\
    ( (This)->lpVtbl -> SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags) ) 
#define IMediaStream_AllocateSample(This,dwFlags,ppSample)	\
    ( (This)->lpVtbl -> AllocateSample(This,dwFlags,ppSample) ) 
#define IMediaStream_CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample)	\
    ( (This)->lpVtbl -> CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample) ) 
#define IMediaStream_SendEndOfStream(This,dwFlags)	\
    ( (This)->lpVtbl -> SendEndOfStream(This,dwFlags) ) 
#endif 
#endif 	
#ifndef __IStreamSample_INTERFACE_DEFINED__
#define __IStreamSample_INTERFACE_DEFINED__
extern const IID IID_IStreamSample;
typedef struct IStreamSampleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        IStreamSample * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( 
        IStreamSample * This);
    ULONG ( STDMETHODCALLTYPE *Release )( 
        IStreamSample * This);
    HRESULT ( STDMETHODCALLTYPE *GetMediaStream )( 
        IStreamSample * This,
        IMediaStream **ppMediaStream);
    HRESULT ( STDMETHODCALLTYPE *GetSampleTimes )( 
        IStreamSample * This,
        STREAM_TIME *pStartTime,
        STREAM_TIME *pEndTime,
        STREAM_TIME *pCurrentTime);
    HRESULT ( STDMETHODCALLTYPE *SetSampleTimes )( 
        IStreamSample * This,
        const STREAM_TIME *pStartTime,
        const STREAM_TIME *pEndTime);
    HRESULT ( STDMETHODCALLTYPE *Update )( 
        IStreamSample * This,
        DWORD dwFlags,
        HANDLE hEvent,
        PAPCFUNC pfnAPC,
        DWORD_PTR dwAPCData);
    HRESULT ( STDMETHODCALLTYPE *CompletionStatus )( 
        IStreamSample * This,
        DWORD dwFlags,
        DWORD dwMilliseconds);
    END_INTERFACE
} IStreamSampleVtbl;
interface IStreamSample
{
    CONST_VTBL struct IStreamSampleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamSample_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IStreamSample_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define IStreamSample_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 
#define IStreamSample_GetMediaStream(This,ppMediaStream)	\
    ( (This)->lpVtbl -> GetMediaStream(This,ppMediaStream) ) 
#define IStreamSample_GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime)	\
    ( (This)->lpVtbl -> GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime) ) 
#define IStreamSample_SetSampleTimes(This,pStartTime,pEndTime)	\
    ( (This)->lpVtbl -> SetSampleTimes(This,pStartTime,pEndTime) ) 
#define IStreamSample_Update(This,dwFlags,hEvent,pfnAPC,dwAPCData)	\
    ( (This)->lpVtbl -> Update(This,dwFlags,hEvent,pfnAPC,dwAPCData) ) 
#define IStreamSample_CompletionStatus(This,dwFlags,dwMilliseconds)	\
    ( (This)->lpVtbl -> CompletionStatus(This,dwFlags,dwMilliseconds) ) 
#endif 
#endif 	
#endif
