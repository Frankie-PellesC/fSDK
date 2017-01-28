/*+@@file@@----------------------------------------------------------------*//*!
 \file		servprov.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 14:04:09 2016
 \date		Modified on Mon Jun 27 14:04:09 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __servprov_h__
#define __servprov_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IServiceProvider_FWD_DEFINED__
#define __IServiceProvider_FWD_DEFINED__
typedef interface IServiceProvider IServiceProvider;
#endif
#include <objidl.h>
#pragma comment(lib,"uuid.lib")
extern RPC_IF_HANDLE __MIDL_itf_servprov_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_servprov_0000_0000_v0_0_s_ifspec;
#ifndef __IServiceProvider_INTERFACE_DEFINED__
#define __IServiceProvider_INTERFACE_DEFINED__ 
typedef  IServiceProvider *LPSERVICEPROVIDER;
extern const IID IID_IServiceProvider;
typedef struct IServiceProviderVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IServiceProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IServiceProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IServiceProvider * This);
	HRESULT(STDMETHODCALLTYPE * QueryService) (IServiceProvider * This, REFGUID guidService, REFIID riid, void **ppvObject);
	END_INTERFACE
} IServiceProviderVtbl;
interface IServiceProvider
{
    CONST_VTBL struct IServiceProviderVtbl *lpVtbl;
};
    
#ifdef COBJMACROS
#define IServiceProvider_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IServiceProvider_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IServiceProvider_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IServiceProvider_QueryService(This,guidService,riid,ppvObject)    ( (This)->lpVtbl -> QueryService(This,guidService,riid,ppvObject) ) 
#endif
#endif
HRESULT STDMETHODCALLTYPE IServiceProvider_RemoteQueryService_Proxy(IServiceProvider *This, REFGUID guidService, REFIID riid, IUnknown **ppvObject);
void __RPC_STUB IServiceProvider_RemoteQueryService_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);

extern RPC_IF_HANDLE __MIDL_itf_servprov_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_servprov_0000_0001_v0_0_s_ifspec;
HRESULT STDMETHODCALLTYPE IServiceProvider_QueryService_Proxy(IServiceProvider *This, REFGUID guidService, REFIID riid, void **ppvObject);
HRESULT STDMETHODCALLTYPE IServiceProvider_QueryService_Stub(IServiceProvider *This, REFGUID guidService, REFIID riid, IUnknown **ppvObject);
#endif




