/*+@@file@@----------------------------------------------------------------*//*!
 \file		RrasCfg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 19:53:23 2016
 \date		Modified on Fri Sep 16 19:53:23 2016
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
#ifndef __rrascfg_h__
#define __rrascfg_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IRouterProtocolConfig_FWD_DEFINED__
#define __IRouterProtocolConfig_FWD_DEFINED__
typedef interface IRouterProtocolConfig IRouterProtocolConfig;
#endif
#ifndef __IAuthenticationProviderConfig_FWD_DEFINED__
#define __IAuthenticationProviderConfig_FWD_DEFINED__
typedef interface IAuthenticationProviderConfig IAuthenticationProviderConfig;
#endif
#ifndef __IAccountingProviderConfig_FWD_DEFINED__
#define __IAccountingProviderConfig_FWD_DEFINED__
typedef interface IAccountingProviderConfig IAccountingProviderConfig;
#endif
#ifndef __IEAPProviderConfig_FWD_DEFINED__
#define __IEAPProviderConfig_FWD_DEFINED__
typedef interface IEAPProviderConfig IEAPProviderConfig;
#endif
#include "basetsd.h"
#include "wtypes.h"
#include "unknwn.h"
void __RPC_FAR *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void __RPC_FAR *);
typedef BYTE __RPC_FAR *PBYTE;
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0000_v0_0_s_ifspec;
#ifndef __IRouterProtocolConfig_INTERFACE_DEFINED__
#define __IRouterProtocolConfig_INTERFACE_DEFINED__
extern const IID IID_IRouterProtocolConfig;
typedef struct IRouterProtocolConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IRouterProtocolConfig __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IRouterProtocolConfig __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IRouterProtocolConfig __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *AddProtocol) (IRouterProtocolConfig __RPC_FAR *This, LPCOLESTR pszMachineName, DWORD dwTransportId, DWORD dwProtocolId, HWND hWnd, DWORD dwFlags, IUnknown __RPC_FAR *pRouter, ULONG_PTR uReserved1);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *RemoveProtocol) (IRouterProtocolConfig __RPC_FAR *This, LPCOLESTR pszMachineName, DWORD dwTransportId, DWORD dwProtocolId, HWND hWnd, DWORD dwFlags, IUnknown __RPC_FAR *pRouter, ULONG_PTR uReserved1);
	END_INTERFACE
}  IRouterProtocolConfigVtbl;
interface IRouterProtocolConfig
{
	CONST_VTBL struct IRouterProtocolConfigVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IRouterProtocolConfig_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IRouterProtocolConfig_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IRouterProtocolConfig_Release(This) (This)->lpVtbl -> Release(This)
#define IRouterProtocolConfig_AddProtocol(This,pszMachineName,dwTransportId,dwProtocolId,hWnd,dwFlags,pRouter,uReserved1) (This)->lpVtbl -> AddProtocol(This,pszMachineName,dwTransportId,dwProtocolId,hWnd,dwFlags,pRouter,uReserved1)
#define IRouterProtocolConfig_RemoveProtocol(This,pszMachineName,dwTransportId,dwProtocolId,hWnd,dwFlags,pRouter,uReserved1) (This)->lpVtbl -> RemoveProtocol(This,pszMachineName,dwTransportId,dwProtocolId,hWnd,dwFlags,pRouter,uReserved1)
#endif
HRESULT STDMETHODCALLTYPE IRouterProtocolConfig_AddProtocol_Proxy(IRouterProtocolConfig __RPC_FAR *This, LPCOLESTR pszMachineName, DWORD dwTransportId, DWORD dwProtocolId, HWND hWnd, DWORD dwFlags, IUnknown __RPC_FAR *pRouter, ULONG_PTR uReserved1);
void __RPC_STUB IRouterProtocolConfig_AddProtocol_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IRouterProtocolConfig_RemoveProtocol_Proxy(IRouterProtocolConfig __RPC_FAR *This, LPCOLESTR pszMachineName, DWORD dwTransportId, DWORD dwProtocolId, HWND hWnd, DWORD dwFlags, IUnknown __RPC_FAR *pRouter, ULONG_PTR uReserved1);
void __RPC_STUB IRouterProtocolConfig_RemoveProtocol_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#define DeclareIRouterProtocolConfigMembers(IPURE) \
STDMETHOD(AddProtocol)(THIS_ LPCOLESTR pszMachineName, DWORD dwTransportId, DWORD dwProtocolId, HWND hWnd, DWORD dwFlags, IUnknown *pRouter, ULONG_PTR uReserved1); \
STDMETHOD(RemoveProtocol)(THIS_ LPCOLESTR pszMachineName, DWORD dwTransportId, DWORD dwProtocolId, HWND hWnd, DWORD dwFlags, IUnknown *pRouter, ULONG_PTR uReserved2);
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0011_v0_0_s_ifspec;
#ifndef __IAuthenticationProviderConfig_INTERFACE_DEFINED__
#define __IAuthenticationProviderConfig_INTERFACE_DEFINED__
extern const IID IID_IAuthenticationProviderConfig;
typedef struct IAuthenticationProviderConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IAuthenticationProviderConfig __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IAuthenticationProviderConfig __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IAuthenticationProviderConfig __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Initialize) (IAuthenticationProviderConfig __RPC_FAR *This, LPCOLESTR pszMachineName, ULONG_PTR __RPC_FAR *puConnectionParam);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Uninitialize) (IAuthenticationProviderConfig __RPC_FAR *This, ULONG_PTR uConnectionParam);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Configure) (IAuthenticationProviderConfig __RPC_FAR *This, ULONG_PTR uConnectionParam, HWND hWnd, DWORD dwFlags, ULONG_PTR uReserved1, ULONG_PTR uReserved2);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Activate) (IAuthenticationProviderConfig __RPC_FAR *This, ULONG_PTR uConnectionParam, ULONG_PTR uReserved1, ULONG_PTR uReserved2);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Deactivate) (IAuthenticationProviderConfig __RPC_FAR *This, ULONG_PTR uConnectionParam, ULONG_PTR uReserved1, ULONG_PTR uReserved2);
	END_INTERFACE
}  IAuthenticationProviderConfigVtbl;
interface IAuthenticationProviderConfig
{
	CONST_VTBL struct IAuthenticationProviderConfigVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IAuthenticationProviderConfig_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IAuthenticationProviderConfig_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IAuthenticationProviderConfig_Release(This) (This)->lpVtbl -> Release(This)
#define IAuthenticationProviderConfig_Initialize(This,pszMachineName,puConnectionParam) (This)->lpVtbl -> Initialize(This,pszMachineName,puConnectionParam)
#define IAuthenticationProviderConfig_Uninitialize(This,uConnectionParam) (This)->lpVtbl -> Uninitialize(This,uConnectionParam)
#define IAuthenticationProviderConfig_Configure(This,uConnectionParam,hWnd,dwFlags,uReserved1,uReserved2) (This)->lpVtbl -> Configure(This,uConnectionParam,hWnd,dwFlags,uReserved1,uReserved2)
#define IAuthenticationProviderConfig_Activate(This,uConnectionParam,uReserved1,uReserved2) (This)->lpVtbl -> Activate(This,uConnectionParam,uReserved1,uReserved2)
#define IAuthenticationProviderConfig_Deactivate(This,uConnectionParam,uReserved1,uReserved2) (This)->lpVtbl -> Deactivate(This,uConnectionParam,uReserved1,uReserved2)
#endif
HRESULT STDMETHODCALLTYPE IAuthenticationProviderConfig_Initialize_Proxy(IAuthenticationProviderConfig __RPC_FAR *This, LPCOLESTR pszMachineName, ULONG_PTR __RPC_FAR *puConnectionParam);
void __RPC_STUB IAuthenticationProviderConfig_Initialize_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAuthenticationProviderConfig_Uninitialize_Proxy(IAuthenticationProviderConfig __RPC_FAR *This, ULONG_PTR uConnectionParam);
void __RPC_STUB IAuthenticationProviderConfig_Uninitialize_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAuthenticationProviderConfig_Configure_Proxy(IAuthenticationProviderConfig __RPC_FAR *This, ULONG_PTR uConnectionParam, HWND hWnd, DWORD dwFlags, ULONG_PTR uReserved1, ULONG_PTR uReserved2);
void __RPC_STUB IAuthenticationProviderConfig_Configure_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAuthenticationProviderConfig_Activate_Proxy(IAuthenticationProviderConfig __RPC_FAR *This, ULONG_PTR uConnectionParam, ULONG_PTR uReserved1, ULONG_PTR uReserved2);
void __RPC_STUB IAuthenticationProviderConfig_Activate_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAuthenticationProviderConfig_Deactivate_Proxy(IAuthenticationProviderConfig __RPC_FAR *This, ULONG_PTR uConnectionParam, ULONG_PTR uReserved1, ULONG_PTR uReserved2);
void __RPC_STUB IAuthenticationProviderConfig_Deactivate_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#define DeclareIAuthenticationProviderConfigMembers(IPURE) \
STDMETHOD(Initialize)(THIS_ LPCOLESTR pszMachineName, ULONG_PTR *puConnectionParam); \
STDMETHOD(Uninitialize)(THIS_ ULONG_PTR uConnectionParam); \
STDMETHOD(Configure)(THIS_ ULONG_PTR uConnectionParam, HWND hWnd, DWORD dwFlags, ULONG_PTR uReserved1, ULONG_PTR uReserved2); \
STDMETHOD(Activate)(THIS_ ULONG_PTR uConnectionParam, ULONG_PTR uReserved1, ULONG_PTR uReserved2); \
STDMETHOD(Deactivate)(THIS_ ULONG_PTR uConnectionParam, ULONG_PTR uReserved1, ULONG_PTR uReserved2);
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0013_v0_0_s_ifspec;
#ifndef __IAccountingProviderConfig_INTERFACE_DEFINED__
#define __IAccountingProviderConfig_INTERFACE_DEFINED__
extern const IID IID_IAccountingProviderConfig;
typedef struct IAccountingProviderConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IAccountingProviderConfig __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IAccountingProviderConfig __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IAccountingProviderConfig __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Initialize) (IAccountingProviderConfig __RPC_FAR *This, LPCOLESTR pszMachineName, ULONG_PTR __RPC_FAR *puConnectionParam);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Uninitialize) (IAccountingProviderConfig __RPC_FAR *This, ULONG_PTR uConnectionParam);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Configure) (IAccountingProviderConfig __RPC_FAR *This, ULONG_PTR uConnectionParam, HWND hWnd, DWORD dwFlags, ULONG_PTR uReserved1, ULONG_PTR uReserved2);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Activate) (IAccountingProviderConfig __RPC_FAR *This, ULONG_PTR uConnectionParam, ULONG_PTR uReserved1, ULONG_PTR uReserved2);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Deactivate) (IAccountingProviderConfig __RPC_FAR *This, ULONG_PTR uConnectionParam, ULONG_PTR uReserved1, ULONG_PTR uReserved2);
	END_INTERFACE
}  IAccountingProviderConfigVtbl;
interface IAccountingProviderConfig
{
	CONST_VTBL struct IAccountingProviderConfigVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IAccountingProviderConfig_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IAccountingProviderConfig_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IAccountingProviderConfig_Release(This) (This)->lpVtbl -> Release(This)
#define IAccountingProviderConfig_Initialize(This,pszMachineName,puConnectionParam) (This)->lpVtbl -> Initialize(This,pszMachineName,puConnectionParam)
#define IAccountingProviderConfig_Uninitialize(This,uConnectionParam) (This)->lpVtbl -> Uninitialize(This,uConnectionParam)
#define IAccountingProviderConfig_Configure(This,uConnectionParam,hWnd,dwFlags,uReserved1,uReserved2) (This)->lpVtbl -> Configure(This,uConnectionParam,hWnd,dwFlags,uReserved1,uReserved2)
#define IAccountingProviderConfig_Activate(This,uConnectionParam,uReserved1,uReserved2) (This)->lpVtbl -> Activate(This,uConnectionParam,uReserved1,uReserved2)
#define IAccountingProviderConfig_Deactivate(This,uConnectionParam,uReserved1,uReserved2) (This)->lpVtbl -> Deactivate(This,uConnectionParam,uReserved1,uReserved2)
#endif
HRESULT STDMETHODCALLTYPE IAccountingProviderConfig_Initialize_Proxy(IAccountingProviderConfig __RPC_FAR *This, LPCOLESTR pszMachineName, ULONG_PTR __RPC_FAR *puConnectionParam);
void __RPC_STUB IAccountingProviderConfig_Initialize_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccountingProviderConfig_Uninitialize_Proxy(IAccountingProviderConfig __RPC_FAR *This, ULONG_PTR uConnectionParam);
void __RPC_STUB IAccountingProviderConfig_Uninitialize_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccountingProviderConfig_Configure_Proxy(IAccountingProviderConfig __RPC_FAR *This, ULONG_PTR uConnectionParam, HWND hWnd, DWORD dwFlags, ULONG_PTR uReserved1, ULONG_PTR uReserved2);
void __RPC_STUB IAccountingProviderConfig_Configure_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccountingProviderConfig_Activate_Proxy(IAccountingProviderConfig __RPC_FAR *This, ULONG_PTR uConnectionParam, ULONG_PTR uReserved1, ULONG_PTR uReserved2);
void __RPC_STUB IAccountingProviderConfig_Activate_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAccountingProviderConfig_Deactivate_Proxy(IAccountingProviderConfig __RPC_FAR *This, ULONG_PTR uConnectionParam, ULONG_PTR uReserved1, ULONG_PTR uReserved2);
void __RPC_STUB IAccountingProviderConfig_Deactivate_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#define DeclareIAccountingProviderConfigMembers(IPURE) \
STDMETHOD(Initialize)(THIS_ LPCOLESTR pszMachineName, ULONG_PTR *puConnectionParam); \
STDMETHOD(Uninitialize)(THIS_ ULONG_PTR uConnectionParam); \
STDMETHOD(Configure)(THIS_ ULONG_PTR uConnectionParam, HWND hWnd, DWORD dwFlags, ULONG_PTR uReserved1, ULONG_PTR uReserved2); \
STDMETHOD(Activate)(THIS_ ULONG_PTR uConnectionParam, ULONG_PTR uReserved1, ULONG_PTR uReserved2); \
STDMETHOD(Deactivate)(THIS_ ULONG_PTR uConnectionParam, ULONG_PTR uReserved1, ULONG_PTR uReserved2);
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0015_v0_0_s_ifspec;
#ifndef __IEAPProviderConfig_INTERFACE_DEFINED__
#define __IEAPProviderConfig_INTERFACE_DEFINED__
extern const IID IID_IEAPProviderConfig;
typedef struct IEAPProviderConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IEAPProviderConfig __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IEAPProviderConfig __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IEAPProviderConfig __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Initialize) (IEAPProviderConfig __RPC_FAR *This, LPCOLESTR pszMachineName, DWORD dwEapTypeId, ULONG_PTR __RPC_FAR *puConnectionParam);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Uninitialize) (IEAPProviderConfig __RPC_FAR *This, DWORD dwEapTypeId, ULONG_PTR uConnectionParam);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *ServerInvokeConfigUI) (IEAPProviderConfig __RPC_FAR *This, DWORD dwEapTypeId, ULONG_PTR uConnectionParam, HWND hWnd, ULONG_PTR uReserved1, ULONG_PTR uReserved2);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *RouterInvokeConfigUI) (IEAPProviderConfig __RPC_FAR *This, DWORD dwEapTypeId, ULONG_PTR uConnectionParam, HWND hwndParent, DWORD dwFlags, BYTE __RPC_FAR *pConnectionDataIn, DWORD dwSizeOfConnectionDataIn, BYTE __RPC_FAR *__RPC_FAR *ppConnectionDataOut, DWORD __RPC_FAR *pdwSizeOfConnectionDataOut);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *RouterInvokeCredentialsUI) (IEAPProviderConfig __RPC_FAR *This, DWORD dwEapTypeId, ULONG_PTR uConnectionParam, HWND hwndParent, DWORD dwFlags, BYTE __RPC_FAR *pConnectionDataIn, DWORD dwSizeOfConnectionDataIn, BYTE __RPC_FAR *pUserDataIn, DWORD dwSizeOfUserDataIn, BYTE __RPC_FAR *__RPC_FAR *ppUserDataOut, DWORD __RPC_FAR *pdwSizeOfUserDataOut);
	END_INTERFACE
}  IEAPProviderConfigVtbl;
interface IEAPProviderConfig
{
	CONST_VTBL struct IEAPProviderConfigVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IEAPProviderConfig_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IEAPProviderConfig_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IEAPProviderConfig_Release(This) (This)->lpVtbl -> Release(This)
#define IEAPProviderConfig_Initialize(This,pszMachineName,dwEapTypeId,puConnectionParam) (This)->lpVtbl -> Initialize(This,pszMachineName,dwEapTypeId,puConnectionParam)
#define IEAPProviderConfig_Uninitialize(This,dwEapTypeId,uConnectionParam) (This)->lpVtbl -> Uninitialize(This,dwEapTypeId,uConnectionParam)
#define IEAPProviderConfig_ServerInvokeConfigUI(This,dwEapTypeId,uConnectionParam,hWnd,uReserved1,uReserved2) (This)->lpVtbl -> ServerInvokeConfigUI(This,dwEapTypeId,uConnectionParam,hWnd,uReserved1,uReserved2)
#define IEAPProviderConfig_RouterInvokeConfigUI(This,dwEapTypeId,uConnectionParam,hwndParent,dwFlags,pConnectionDataIn,dwSizeOfConnectionDataIn,ppConnectionDataOut,pdwSizeOfConnectionDataOut) (This)->lpVtbl -> RouterInvokeConfigUI(This,dwEapTypeId,uConnectionParam,hwndParent,dwFlags,pConnectionDataIn,dwSizeOfConnectionDataIn,ppConnectionDataOut,pdwSizeOfConnectionDataOut)
#define IEAPProviderConfig_RouterInvokeCredentialsUI(This,dwEapTypeId,uConnectionParam,hwndParent,dwFlags,pConnectionDataIn,dwSizeOfConnectionDataIn,pUserDataIn,dwSizeOfUserDataIn,ppUserDataOut,pdwSizeOfUserDataOut) (This)->lpVtbl -> RouterInvokeCredentialsUI(This,dwEapTypeId,uConnectionParam,hwndParent,dwFlags,pConnectionDataIn,dwSizeOfConnectionDataIn,pUserDataIn,dwSizeOfUserDataIn,ppUserDataOut,pdwSizeOfUserDataOut)
#endif
HRESULT STDMETHODCALLTYPE IEAPProviderConfig_Initialize_Proxy(IEAPProviderConfig __RPC_FAR *This, LPCOLESTR pszMachineName, DWORD dwEapTypeId, ULONG_PTR __RPC_FAR *puConnectionParam);
void __RPC_STUB IEAPProviderConfig_Initialize_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEAPProviderConfig_Uninitialize_Proxy(IEAPProviderConfig __RPC_FAR *This, DWORD dwEapTypeId, ULONG_PTR uConnectionParam);
void __RPC_STUB IEAPProviderConfig_Uninitialize_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEAPProviderConfig_ServerInvokeConfigUI_Proxy(IEAPProviderConfig __RPC_FAR *This, DWORD dwEapTypeId, ULONG_PTR uConnectionParam, HWND hWnd, ULONG_PTR uReserved1, ULONG_PTR uReserved2);
void __RPC_STUB IEAPProviderConfig_ServerInvokeConfigUI_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEAPProviderConfig_RouterInvokeConfigUI_Proxy(IEAPProviderConfig __RPC_FAR *This, DWORD dwEapTypeId, ULONG_PTR uConnectionParam, HWND hwndParent, DWORD dwFlags, BYTE __RPC_FAR *pConnectionDataIn, DWORD dwSizeOfConnectionDataIn, BYTE __RPC_FAR *__RPC_FAR *ppConnectionDataOut, DWORD __RPC_FAR *pdwSizeOfConnectionDataOut);
void __RPC_STUB IEAPProviderConfig_RouterInvokeConfigUI_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEAPProviderConfig_RouterInvokeCredentialsUI_Proxy(IEAPProviderConfig __RPC_FAR *This, DWORD dwEapTypeId, ULONG_PTR uConnectionParam, HWND hwndParent, DWORD dwFlags, BYTE __RPC_FAR *pConnectionDataIn, DWORD dwSizeOfConnectionDataIn, BYTE __RPC_FAR *pUserDataIn, DWORD dwSizeOfUserDataIn, BYTE __RPC_FAR *__RPC_FAR *ppUserDataOut, DWORD __RPC_FAR *pdwSizeOfUserDataOut);
void __RPC_STUB IEAPProviderConfig_RouterInvokeCredentialsUI_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#define DeclareIEAPProviderConfigMembers(IPURE) \
STDMETHOD(Initialize)(THIS_LPCOLESTR pszMachineName, DWORD dwEapTypeId, ULONG_PTR* puConnectionParam); \
STDMETHOD(Uninitialize)(THIS_ DWORD dwEapTypeId, ULONG_PTR uConnectionParam); \
STDMETHOD(ServerInvokeConfigUI)(THIS_ DWORD dwEapTypeId, ULONG_PTR uConnectionParam, HWND hWnd, ULONG_PTR dwRes1, ULONG_PTR dwRes2); \
STDMETHOD(RouterInvokeConfigUI)(THIS_ DWORD dwEapTypeId, ULONG_PTR uConnectionParam, HWND hwndParent, DWORD dwFlags, BYTE* pConnectionDataIn, DWORD dwSizeOfConnectionDataIn, BYTE** ppConnectionDataOut, DWORD* pdwSizeOfConnectionDataOut); \
STDMETHOD(RouterInvokeCredentialsUI)(THIS_ DWORD dwEapTypeId, ULONG_PTR uConnectionParam, HWND hwndParent, DWORD dwFlags, BYTE* pConnectionDataIn, DWORD dwSizeOfConnectionDataIn, BYTE* pUserDataIn, DWORD dwSizeOfUserDataIn, BYTE** ppUserDataOut, DWORD* pdwSizeOfUserDataOut);
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0017_v0_0_s_ifspec;
#endif
