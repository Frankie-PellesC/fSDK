/*+@@file@@----------------------------------------------------------------*//*!
 \file		ctxtcall.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 18:51:01 2016
 \date		Modified on Mon Jul  4 18:51:01 2016
 \author	frankie
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
#ifndef __ctxtcall_h__
#define __ctxtcall_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IContextCallback_FWD_DEFINED__
#define __IContextCallback_FWD_DEFINED__
typedef interface IContextCallback IContextCallback;
#endif
#include <wtypes.h>
#include <objidl.h>
typedef struct tagComCallData
{
	DWORD dwDispid;
	DWORD dwReserved;
	void *pUserDefined;
} 	ComCallData;
extern RPC_IF_HANDLE __MIDL_itf_ctxtcall_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctxtcall_0000_0000_v0_0_s_ifspec;
#ifndef __IContextCallback_INTERFACE_DEFINED__
#define __IContextCallback_INTERFACE_DEFINED__ 
typedef HRESULT(__stdcall *PFNCONTEXTCALL) (ComCallData *pParam);
extern const IID IID_IContextCallback;
typedef struct IContextCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IContextCallback *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IContextCallback *This);
	ULONG(STDMETHODCALLTYPE *Release) (IContextCallback *This);
	HRESULT(STDMETHODCALLTYPE *ContextCallback) (IContextCallback *This, PFNCONTEXTCALL pfnCallback, ComCallData *pParam, REFIID riid, int iMethod, IUnknown *pUnk);
	END_INTERFACE
} IContextCallbackVtbl;
interface IContextCallback
{
	CONST_VTBL struct IContextCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContextCallback_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IContextCallback_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IContextCallback_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IContextCallback_ContextCallback(This,pfnCallback,pParam,riid,iMethod,pUnk)    ( (This)->lpVtbl -> ContextCallback(This,pfnCallback,pParam,riid,iMethod,pUnk) ) 
#endif
#endif
#endif
