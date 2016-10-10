/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmdxva.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 14:56:55 2016
 \date		Modified on Mon Sep 19 14:56:55 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __wmdxva_h__
#define __wmdxva_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMPlayerTimestampHook_FWD_DEFINED__
#define __IWMPlayerTimestampHook_FWD_DEFINED__
typedef interface IWMPlayerTimestampHook IWMPlayerTimestampHook;
#endif
#ifndef __IWMCodecAMVideoAccelerator_FWD_DEFINED__
#define __IWMCodecAMVideoAccelerator_FWD_DEFINED__
typedef interface IWMCodecAMVideoAccelerator IWMCodecAMVideoAccelerator;
#endif
#ifndef __IWMCodecVideoAccelerator_FWD_DEFINED__
#define __IWMCodecVideoAccelerator_FWD_DEFINED__
typedef interface IWMCodecVideoAccelerator IWMCodecVideoAccelerator;
#endif
#include "mediaobj.h"
#include "videoacc.h"
void *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void *);
EXTERN_GUID(IID_IWMPlayerTimestampHook, 0x28580dda, 0xd98e, 0x48d0, 0xb7, 0xae, 0x69, 0xe4, 0x73, 0xa0, 0x28, 0x25);
EXTERN_GUID(IID_IWMCodecVideoAccelerator, 0x990641b0, 0x739f, 0x4e94, 0xa8, 0x08, 0x98, 0x88, 0xda, 0x8f, 0x75, 0xaf);
EXTERN_GUID(IID_IWMCodecAMVideoAccelerator, 0xd98ee251, 0x34e0, 0x4a2d, 0x93, 0x12, 0x9b, 0x4c, 0x78, 0x8d, 0x9f, 0xa1);
extern RPC_IF_HANDLE __MIDL_itf_wmdxva_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmdxva_0000_v0_0_s_ifspec;
#ifndef __IWMPlayerTimestampHook_INTERFACE_DEFINED__
#define __IWMPlayerTimestampHook_INTERFACE_DEFINED__
extern const IID IID_IWMPlayerTimestampHook;
typedef struct IWMPlayerTimestampHookVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPlayerTimestampHook * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPlayerTimestampHook * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPlayerTimestampHook * This);
	HRESULT(STDMETHODCALLTYPE * MapTimestamp) (IWMPlayerTimestampHook * This, REFERENCE_TIME rtIn, REFERENCE_TIME * prtOut);
	END_INTERFACE
}  IWMPlayerTimestampHookVtbl;
interface IWMPlayerTimestampHook
{
	CONST_VTBL struct IWMPlayerTimestampHookVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPlayerTimestampHook_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPlayerTimestampHook_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPlayerTimestampHook_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPlayerTimestampHook_MapTimestamp(This,rtIn,prtOut) ( (This)->lpVtbl -> MapTimestamp(This,rtIn,prtOut) )
#endif
HRESULT STDMETHODCALLTYPE IWMPlayerTimestampHook_MapTimestamp_Proxy(IWMPlayerTimestampHook *This, REFERENCE_TIME rtIn, REFERENCE_TIME *prtOut);
void __RPC_STUB IWMPlayerTimestampHook_MapTimestamp_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IWMCodecAMVideoAccelerator_INTERFACE_DEFINED__
#define __IWMCodecAMVideoAccelerator_INTERFACE_DEFINED__
extern const IID IID_IWMCodecAMVideoAccelerator;
typedef struct IWMCodecAMVideoAcceleratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMCodecAMVideoAccelerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMCodecAMVideoAccelerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMCodecAMVideoAccelerator * This);
	HRESULT(STDMETHODCALLTYPE * SetAcceleratorInterface) (IWMCodecAMVideoAccelerator * This, IAMVideoAccelerator * pIAMVA);
	HRESULT(STDMETHODCALLTYPE * NegotiateConnection) (IWMCodecAMVideoAccelerator * This, DMO_MEDIA_TYPE * pMediaType);
	HRESULT(STDMETHODCALLTYPE * SetPlayerNotify) (IWMCodecAMVideoAccelerator * This, IWMPlayerTimestampHook * pHook);
	END_INTERFACE
}  IWMCodecAMVideoAcceleratorVtbl;
interface IWMCodecAMVideoAccelerator
{
	CONST_VTBL struct IWMCodecAMVideoAcceleratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMCodecAMVideoAccelerator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMCodecAMVideoAccelerator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMCodecAMVideoAccelerator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMCodecAMVideoAccelerator_SetAcceleratorInterface(This,pIAMVA) ( (This)->lpVtbl -> SetAcceleratorInterface(This,pIAMVA) )
#define IWMCodecAMVideoAccelerator_NegotiateConnection(This,pMediaType) ( (This)->lpVtbl -> NegotiateConnection(This,pMediaType) )
#define IWMCodecAMVideoAccelerator_SetPlayerNotify(This,pHook) ( (This)->lpVtbl -> SetPlayerNotify(This,pHook) )
#endif
HRESULT STDMETHODCALLTYPE IWMCodecAMVideoAccelerator_SetAcceleratorInterface_Proxy(IWMCodecAMVideoAccelerator *This, IAMVideoAccelerator *pIAMVA);
void __RPC_STUB IWMCodecAMVideoAccelerator_SetAcceleratorInterface_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMCodecAMVideoAccelerator_NegotiateConnection_Proxy(IWMCodecAMVideoAccelerator *This, DMO_MEDIA_TYPE *pMediaType);
void __RPC_STUB IWMCodecAMVideoAccelerator_NegotiateConnection_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMCodecAMVideoAccelerator_SetPlayerNotify_Proxy(IWMCodecAMVideoAccelerator *This, IWMPlayerTimestampHook *pHook);
void __RPC_STUB IWMCodecAMVideoAccelerator_SetPlayerNotify_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IWMCodecVideoAccelerator_INTERFACE_DEFINED__
#define __IWMCodecVideoAccelerator_INTERFACE_DEFINED__
extern const IID IID_IWMCodecVideoAccelerator;
typedef struct IWMCodecVideoAcceleratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMCodecVideoAccelerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMCodecVideoAccelerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMCodecVideoAccelerator * This);
	HRESULT(STDMETHODCALLTYPE * NegotiateConnection) (IWMCodecVideoAccelerator * This, IAMVideoAccelerator * pIAMVA, DMO_MEDIA_TYPE * pMediaType);
	HRESULT(STDMETHODCALLTYPE * SetPlayerNotify) (IWMCodecVideoAccelerator * This, IWMPlayerTimestampHook * pHook);
	END_INTERFACE
}  IWMCodecVideoAcceleratorVtbl;
interface IWMCodecVideoAccelerator
{
	CONST_VTBL struct IWMCodecVideoAcceleratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMCodecVideoAccelerator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMCodecVideoAccelerator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMCodecVideoAccelerator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMCodecVideoAccelerator_NegotiateConnection(This,pIAMVA,pMediaType) ( (This)->lpVtbl -> NegotiateConnection(This,pIAMVA,pMediaType) )
#define IWMCodecVideoAccelerator_SetPlayerNotify(This,pHook) ( (This)->lpVtbl -> SetPlayerNotify(This,pHook) )
#endif
HRESULT STDMETHODCALLTYPE IWMCodecVideoAccelerator_NegotiateConnection_Proxy(IWMCodecVideoAccelerator *This, IAMVideoAccelerator *pIAMVA, DMO_MEDIA_TYPE *pMediaType);
void __RPC_STUB IWMCodecVideoAccelerator_NegotiateConnection_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMCodecVideoAccelerator_SetPlayerNotify_Proxy(IWMCodecVideoAccelerator *This, IWMPlayerTimestampHook *pHook);
void __RPC_STUB IWMCodecVideoAccelerator_SetPlayerNotify_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif
