/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmnetsourcecreator.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 15:02:43 2016
 \date		Modified on Mon Sep 19 15:02:43 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __wmnetsourcecreator_h__
#define __wmnetsourcecreator_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __INSNetSourceCreator_FWD_DEFINED__
#define __INSNetSourceCreator_FWD_DEFINED__
typedef interface INSNetSourceCreator INSNetSourceCreator;
#endif
#include <oaidl.h>
void *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void *);
EXTERN_GUID(CLSID_ClientNetManager, 0xCD12A3CE, 0x9C42, 0x11D2, 0xBE, 0xED, 0x00, 0x60, 0x08, 0x2F, 0x20, 0x54);
EXTERN_GUID(IID_INSNetSourceCreator, 0x0C0E4080, 0x9081, 0x11d2, 0xBE, 0xEC, 0x00, 0x60, 0x08, 0x2F, 0x20, 0x54);
typedef unsigned __int64 QWORD;
extern RPC_IF_HANDLE __MIDL_itf_wmnetsourcecreator_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmnetsourcecreator_0000_v0_0_s_ifspec;
#ifndef __INSNetSourceCreator_INTERFACE_DEFINED__
#define __INSNetSourceCreator_INTERFACE_DEFINED__
extern const IID IID_INSNetSourceCreator;
typedef struct INSNetSourceCreatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INSNetSourceCreator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INSNetSourceCreator * This);
	ULONG(STDMETHODCALLTYPE * Release) (INSNetSourceCreator * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (INSNetSourceCreator * This);
	HRESULT(STDMETHODCALLTYPE * CreateNetSource) (INSNetSourceCreator * This, LPCWSTR pszStreamName, IUnknown * pMonitor, BYTE * pData, IUnknown * pUserContext, IUnknown * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * GetNetSourceProperties) (INSNetSourceCreator * This, LPCWSTR pszStreamName, IUnknown ** ppPropertiesNode);
	HRESULT(STDMETHODCALLTYPE * GetNetSourceSharedNamespace) (INSNetSourceCreator * This, IUnknown ** ppSharedNamespace);
	HRESULT(STDMETHODCALLTYPE * GetNetSourceAdminInterface) (INSNetSourceCreator * This, LPCWSTR pszStreamName, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * GetNumProtocolsSupported) (INSNetSourceCreator * This, DWORD * pcProtocols);
	HRESULT(STDMETHODCALLTYPE * GetProtocolName) (INSNetSourceCreator * This, DWORD dwProtocolNum, WCHAR * pwszProtocolName, WORD * pcchProtocolName);
	HRESULT(STDMETHODCALLTYPE * Shutdown) (INSNetSourceCreator * This);
	END_INTERFACE
}  INSNetSourceCreatorVtbl;
interface INSNetSourceCreator
{
	CONST_VTBL struct INSNetSourceCreatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INSNetSourceCreator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INSNetSourceCreator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INSNetSourceCreator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INSNetSourceCreator_Initialize(This) ( (This)->lpVtbl -> Initialize(This) )
#define INSNetSourceCreator_CreateNetSource(This,pszStreamName,pMonitor,pData,pUserContext,pCallback,qwContext) ( (This)->lpVtbl -> CreateNetSource(This,pszStreamName,pMonitor,pData,pUserContext,pCallback,qwContext) )
#define INSNetSourceCreator_GetNetSourceProperties(This,pszStreamName,ppPropertiesNode) ( (This)->lpVtbl -> GetNetSourceProperties(This,pszStreamName,ppPropertiesNode) )
#define INSNetSourceCreator_GetNetSourceSharedNamespace(This,ppSharedNamespace) ( (This)->lpVtbl -> GetNetSourceSharedNamespace(This,ppSharedNamespace) )
#define INSNetSourceCreator_GetNetSourceAdminInterface(This,pszStreamName,pVal) ( (This)->lpVtbl -> GetNetSourceAdminInterface(This,pszStreamName,pVal) )
#define INSNetSourceCreator_GetNumProtocolsSupported(This,pcProtocols) ( (This)->lpVtbl -> GetNumProtocolsSupported(This,pcProtocols) )
#define INSNetSourceCreator_GetProtocolName(This,dwProtocolNum,pwszProtocolName,pcchProtocolName) ( (This)->lpVtbl -> GetProtocolName(This,dwProtocolNum,pwszProtocolName,pcchProtocolName) )
#define INSNetSourceCreator_Shutdown(This) ( (This)->lpVtbl -> Shutdown(This) )
#endif
HRESULT STDMETHODCALLTYPE INSNetSourceCreator_Initialize_Proxy(INSNetSourceCreator *This);
void __RPC_STUB INSNetSourceCreator_Initialize_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INSNetSourceCreator_CreateNetSource_Proxy(INSNetSourceCreator *This, LPCWSTR pszStreamName, IUnknown *pMonitor, BYTE *pData, IUnknown *pUserContext, IUnknown *pCallback, QWORD qwContext);
void __RPC_STUB INSNetSourceCreator_CreateNetSource_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INSNetSourceCreator_GetNetSourceProperties_Proxy(INSNetSourceCreator *This, LPCWSTR pszStreamName, IUnknown **ppPropertiesNode);
void __RPC_STUB INSNetSourceCreator_GetNetSourceProperties_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INSNetSourceCreator_GetNetSourceSharedNamespace_Proxy(INSNetSourceCreator *This, IUnknown **ppSharedNamespace);
void __RPC_STUB INSNetSourceCreator_GetNetSourceSharedNamespace_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INSNetSourceCreator_GetNetSourceAdminInterface_Proxy(INSNetSourceCreator *This, LPCWSTR pszStreamName, VARIANT *pVal);
void __RPC_STUB INSNetSourceCreator_GetNetSourceAdminInterface_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INSNetSourceCreator_GetNumProtocolsSupported_Proxy(INSNetSourceCreator *This, DWORD *pcProtocols);
void __RPC_STUB INSNetSourceCreator_GetNumProtocolsSupported_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INSNetSourceCreator_GetProtocolName_Proxy(INSNetSourceCreator *This, DWORD dwProtocolNum, WCHAR *pwszProtocolName, WORD *pcchProtocolName);
void __RPC_STUB INSNetSourceCreator_GetProtocolName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INSNetSourceCreator_Shutdown_Proxy(INSNetSourceCreator *This);
void __RPC_STUB INSNetSourceCreator_Shutdown_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
#endif
