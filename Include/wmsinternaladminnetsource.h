/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmsinternaladminnetsource.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 16:17:26 2016
 \date		Modified on Mon Sep 19 16:17:26 2016
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
#ifndef __wmsinternaladminnetsource_h__
#define __wmsinternaladminnetsource_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSInternalAdminNetSource_FWD_DEFINED__
#define __IWMSInternalAdminNetSource_FWD_DEFINED__
typedef interface IWMSInternalAdminNetSource IWMSInternalAdminNetSource;
#endif
#ifndef __IWMSInternalAdminNetSource2_FWD_DEFINED__
#define __IWMSInternalAdminNetSource2_FWD_DEFINED__
typedef interface IWMSInternalAdminNetSource2 IWMSInternalAdminNetSource2;
#endif
#ifndef __IWMSInternalAdminNetSource3_FWD_DEFINED__
#define __IWMSInternalAdminNetSource3_FWD_DEFINED__
typedef interface IWMSInternalAdminNetSource3 IWMSInternalAdminNetSource3;
#endif
#include "oaidl.h"
#include "wmnetsourcecreator.h"
void *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void *);
EXTERN_GUID(IID_IWMSInternalAdminNetSource, 0x8BB23E5F, 0xD127, 0x4afb, 0x8D, 0x02, 0xAE, 0x5B, 0x66, 0xD5, 0x4C, 0x78);
EXTERN_GUID(IID_IWMSInternalAdminNetSource2, 0xE74D58C3, 0xCF77, 0x4b51, 0xAF, 0x17, 0x74, 0x46, 0x87, 0xC4, 0x3E, 0xAE);
EXTERN_GUID(IID_IWMSInternalAdminNetSource3, 0x6b63d08e, 0x4590, 0x44af, 0x9e, 0xb3, 0x57, 0xff, 0x1e, 0x73, 0xbf, 0x80);
typedef DECLSPEC_UUID("068A6457-4099-4c72-9AA9-9105C1C03177")
enum NETSOURCE_URLCREDPOLICY_SETTINGS
{
	NETSOURCE_URLCREDPOLICY_SETTING_SILENTLOGONOK = 0,
	NETSOURCE_URLCREDPOLICY_SETTING_MUSTPROMPTUSER = 1,
	NETSOURCE_URLCREDPOLICY_SETTING_ANONYMOUSONLY = 2
} NETSOURCE_URLCREDPOLICY_SETTINGS;
extern RPC_IF_HANDLE __MIDL_itf_wmsinternaladminnetsource_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsinternaladminnetsource_0000_v0_0_s_ifspec;
#ifndef __IWMSInternalAdminNetSource_INTERFACE_DEFINED__
#define __IWMSInternalAdminNetSource_INTERFACE_DEFINED__
extern const IID IID_IWMSInternalAdminNetSource;
typedef struct IWMSInternalAdminNetSourceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSInternalAdminNetSource *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSInternalAdminNetSource *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSInternalAdminNetSource *This);
	HRESULT(STDMETHODCALLTYPE *Initialize) (IWMSInternalAdminNetSource *This, IUnknown *pSharedNamespace, IUnknown *pNamespaceNode, INSNetSourceCreator *pNetSourceCreator, BOOL fEmbeddedInServer);
	HRESULT(STDMETHODCALLTYPE *GetNetSourceCreator) (IWMSInternalAdminNetSource *This, INSNetSourceCreator **ppNetSourceCreator);
	HRESULT(STDMETHODCALLTYPE *SetCredentials) (IWMSInternalAdminNetSource *This, BSTR bstrRealm, BSTR bstrName, BSTR bstrPassword, BOOL fPersist, BOOL fConfirmedGood);
	HRESULT(STDMETHODCALLTYPE *GetCredentials) (IWMSInternalAdminNetSource *This, BSTR bstrRealm, BSTR *pbstrName, BSTR *pbstrPassword, BOOL *pfConfirmedGood);
	HRESULT(STDMETHODCALLTYPE *DeleteCredentials) (IWMSInternalAdminNetSource *This, BSTR bstrRealm);
	HRESULT(STDMETHODCALLTYPE *GetCredentialFlags) (IWMSInternalAdminNetSource *This, DWORD *lpdwFlags);
	HRESULT(STDMETHODCALLTYPE *SetCredentialFlags) (IWMSInternalAdminNetSource *This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *FindProxyForURL) (IWMSInternalAdminNetSource *This, BSTR bstrProtocol, BSTR bstrHost, BOOL *pfProxyEnabled, BSTR *pbstrProxyServer, DWORD *pdwProxyPort, DWORD *pdwProxyContext);
	HRESULT(STDMETHODCALLTYPE *RegisterProxyFailure) (IWMSInternalAdminNetSource *This, HRESULT hrParam, DWORD dwProxyContext);
	HRESULT(STDMETHODCALLTYPE *ShutdownProxyContext) (IWMSInternalAdminNetSource *This, DWORD dwProxyContext);
	HRESULT(STDMETHODCALLTYPE *IsUsingIE) (IWMSInternalAdminNetSource *This, DWORD dwProxyContext, BOOL *pfIsUsingIE);
	END_INTERFACE
}  IWMSInternalAdminNetSourceVtbl;
interface IWMSInternalAdminNetSource
{
	CONST_VTBL struct IWMSInternalAdminNetSourceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSInternalAdminNetSource_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSInternalAdminNetSource_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSInternalAdminNetSource_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSInternalAdminNetSource_Initialize(This,pSharedNamespace,pNamespaceNode,pNetSourceCreator,fEmbeddedInServer) ( (This)->lpVtbl -> Initialize(This,pSharedNamespace,pNamespaceNode,pNetSourceCreator,fEmbeddedInServer) )
#define IWMSInternalAdminNetSource_GetNetSourceCreator(This,ppNetSourceCreator) ( (This)->lpVtbl -> GetNetSourceCreator(This,ppNetSourceCreator) )
#define IWMSInternalAdminNetSource_SetCredentials(This,bstrRealm,bstrName,bstrPassword,fPersist,fConfirmedGood) ( (This)->lpVtbl -> SetCredentials(This,bstrRealm,bstrName,bstrPassword,fPersist,fConfirmedGood) )
#define IWMSInternalAdminNetSource_GetCredentials(This,bstrRealm,pbstrName,pbstrPassword,pfConfirmedGood) ( (This)->lpVtbl -> GetCredentials(This,bstrRealm,pbstrName,pbstrPassword,pfConfirmedGood) )
#define IWMSInternalAdminNetSource_DeleteCredentials(This,bstrRealm) ( (This)->lpVtbl -> DeleteCredentials(This,bstrRealm) )
#define IWMSInternalAdminNetSource_GetCredentialFlags(This,lpdwFlags) ( (This)->lpVtbl -> GetCredentialFlags(This,lpdwFlags) )
#define IWMSInternalAdminNetSource_SetCredentialFlags(This,dwFlags) ( (This)->lpVtbl -> SetCredentialFlags(This,dwFlags) )
#define IWMSInternalAdminNetSource_FindProxyForURL(This,bstrProtocol,bstrHost,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pdwProxyContext) ( (This)->lpVtbl -> FindProxyForURL(This,bstrProtocol,bstrHost,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pdwProxyContext) )
#define IWMSInternalAdminNetSource_RegisterProxyFailure(This,hrParam,dwProxyContext) ( (This)->lpVtbl -> RegisterProxyFailure(This,hrParam,dwProxyContext) )
#define IWMSInternalAdminNetSource_ShutdownProxyContext(This,dwProxyContext) ( (This)->lpVtbl -> ShutdownProxyContext(This,dwProxyContext) )
#define IWMSInternalAdminNetSource_IsUsingIE(This,dwProxyContext,pfIsUsingIE) ( (This)->lpVtbl -> IsUsingIE(This,dwProxyContext,pfIsUsingIE) )
#endif
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource_Initialize_Proxy(IWMSInternalAdminNetSource *This, IUnknown *pSharedNamespace, IUnknown *pNamespaceNode, INSNetSourceCreator *pNetSourceCreator, BOOL fEmbeddedInServer);
void __RPC_STUB IWMSInternalAdminNetSource_Initialize_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource_GetNetSourceCreator_Proxy(IWMSInternalAdminNetSource *This, INSNetSourceCreator **ppNetSourceCreator);
void __RPC_STUB IWMSInternalAdminNetSource_GetNetSourceCreator_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource_SetCredentials_Proxy(IWMSInternalAdminNetSource *This, BSTR bstrRealm, BSTR bstrName, BSTR bstrPassword, BOOL fPersist, BOOL fConfirmedGood);
void __RPC_STUB IWMSInternalAdminNetSource_SetCredentials_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource_GetCredentials_Proxy(IWMSInternalAdminNetSource *This, BSTR bstrRealm, BSTR *pbstrName, BSTR *pbstrPassword, BOOL *pfConfirmedGood);
void __RPC_STUB IWMSInternalAdminNetSource_GetCredentials_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource_DeleteCredentials_Proxy(IWMSInternalAdminNetSource *This, BSTR bstrRealm);
void __RPC_STUB IWMSInternalAdminNetSource_DeleteCredentials_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource_GetCredentialFlags_Proxy(IWMSInternalAdminNetSource *This, DWORD *lpdwFlags);
void __RPC_STUB IWMSInternalAdminNetSource_GetCredentialFlags_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource_SetCredentialFlags_Proxy(IWMSInternalAdminNetSource *This, DWORD dwFlags);
void __RPC_STUB IWMSInternalAdminNetSource_SetCredentialFlags_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource_FindProxyForURL_Proxy(IWMSInternalAdminNetSource *This, BSTR bstrProtocol, BSTR bstrHost, BOOL *pfProxyEnabled, BSTR *pbstrProxyServer, DWORD *pdwProxyPort, DWORD *pdwProxyContext);
void __RPC_STUB IWMSInternalAdminNetSource_FindProxyForURL_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource_RegisterProxyFailure_Proxy(IWMSInternalAdminNetSource *This, HRESULT hrParam, DWORD dwProxyContext);
void __RPC_STUB IWMSInternalAdminNetSource_RegisterProxyFailure_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource_ShutdownProxyContext_Proxy(IWMSInternalAdminNetSource *This, DWORD dwProxyContext);
void __RPC_STUB IWMSInternalAdminNetSource_ShutdownProxyContext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource_IsUsingIE_Proxy(IWMSInternalAdminNetSource *This, DWORD dwProxyContext, BOOL *pfIsUsingIE);
void __RPC_STUB IWMSInternalAdminNetSource_IsUsingIE_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IWMSInternalAdminNetSource2_INTERFACE_DEFINED__
#define __IWMSInternalAdminNetSource2_INTERFACE_DEFINED__
extern const IID IID_IWMSInternalAdminNetSource2;
typedef struct IWMSInternalAdminNetSource2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSInternalAdminNetSource2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSInternalAdminNetSource2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSInternalAdminNetSource2 *This);
	HRESULT(STDMETHODCALLTYPE *SetCredentialsEx) (IWMSInternalAdminNetSource2 *This, BSTR bstrRealm, BSTR bstrUrl, BOOL fProxy, BSTR bstrName, BSTR bstrPassword, BOOL fPersist, BOOL fConfirmedGood);
	HRESULT(STDMETHODCALLTYPE *GetCredentialsEx) (IWMSInternalAdminNetSource2 *This, BSTR bstrRealm, BSTR bstrUrl, BOOL fProxy, NETSOURCE_URLCREDPOLICY_SETTINGS *pdwUrlPolicy, BSTR *pbstrName, BSTR *pbstrPassword, BOOL *pfConfirmedGood);
	HRESULT(STDMETHODCALLTYPE *DeleteCredentialsEx) (IWMSInternalAdminNetSource2 *This, BSTR bstrRealm, BSTR bstrUrl, BOOL fProxy);
	HRESULT(STDMETHODCALLTYPE *FindProxyForURLEx) (IWMSInternalAdminNetSource2 *This, BSTR bstrProtocol, BSTR bstrHost, BSTR bstrUrl, BOOL *pfProxyEnabled, BSTR *pbstrProxyServer, DWORD *pdwProxyPort, DWORD *pdwProxyContext);
	END_INTERFACE
}  IWMSInternalAdminNetSource2Vtbl;
interface IWMSInternalAdminNetSource2
{
	CONST_VTBL struct IWMSInternalAdminNetSource2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSInternalAdminNetSource2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSInternalAdminNetSource2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSInternalAdminNetSource2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSInternalAdminNetSource2_SetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,bstrName,bstrPassword,fPersist,fConfirmedGood) ( (This)->lpVtbl -> SetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,bstrName,bstrPassword,fPersist,fConfirmedGood) )
#define IWMSInternalAdminNetSource2_GetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,pdwUrlPolicy,pbstrName,pbstrPassword,pfConfirmedGood) ( (This)->lpVtbl -> GetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,pdwUrlPolicy,pbstrName,pbstrPassword,pfConfirmedGood) )
#define IWMSInternalAdminNetSource2_DeleteCredentialsEx(This,bstrRealm,bstrUrl,fProxy) ( (This)->lpVtbl -> DeleteCredentialsEx(This,bstrRealm,bstrUrl,fProxy) )
#define IWMSInternalAdminNetSource2_FindProxyForURLEx(This,bstrProtocol,bstrHost,bstrUrl,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pdwProxyContext) ( (This)->lpVtbl -> FindProxyForURLEx(This,bstrProtocol,bstrHost,bstrUrl,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pdwProxyContext) )
#endif
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource2_SetCredentialsEx_Proxy(IWMSInternalAdminNetSource2 *This, BSTR bstrRealm, BSTR bstrUrl, BOOL fProxy, BSTR bstrName, BSTR bstrPassword, BOOL fPersist, BOOL fConfirmedGood);
void __RPC_STUB IWMSInternalAdminNetSource2_SetCredentialsEx_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource2_GetCredentialsEx_Proxy(IWMSInternalAdminNetSource2 *This, BSTR bstrRealm, BSTR bstrUrl, BOOL fProxy, NETSOURCE_URLCREDPOLICY_SETTINGS *pdwUrlPolicy, BSTR *pbstrName, BSTR *pbstrPassword, BOOL *pfConfirmedGood);
void __RPC_STUB IWMSInternalAdminNetSource2_GetCredentialsEx_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource2_DeleteCredentialsEx_Proxy(IWMSInternalAdminNetSource2 *This, BSTR bstrRealm, BSTR bstrUrl, BOOL fProxy);
void __RPC_STUB IWMSInternalAdminNetSource2_DeleteCredentialsEx_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource2_FindProxyForURLEx_Proxy(IWMSInternalAdminNetSource2 *This, BSTR bstrProtocol, BSTR bstrHost, BSTR bstrUrl, BOOL *pfProxyEnabled, BSTR *pbstrProxyServer, DWORD *pdwProxyPort, DWORD *pdwProxyContext);
void __RPC_STUB IWMSInternalAdminNetSource2_FindProxyForURLEx_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IWMSInternalAdminNetSource3_INTERFACE_DEFINED__
#define __IWMSInternalAdminNetSource3_INTERFACE_DEFINED__
extern const IID IID_IWMSInternalAdminNetSource3;
typedef struct IWMSInternalAdminNetSource3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSInternalAdminNetSource3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSInternalAdminNetSource3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSInternalAdminNetSource3 *This);
	HRESULT(STDMETHODCALLTYPE *SetCredentialsEx) (IWMSInternalAdminNetSource3 *This, BSTR bstrRealm, BSTR bstrUrl, BOOL fProxy, BSTR bstrName, BSTR bstrPassword, BOOL fPersist, BOOL fConfirmedGood);
	HRESULT(STDMETHODCALLTYPE *GetCredentialsEx) (IWMSInternalAdminNetSource3 *This, BSTR bstrRealm, BSTR bstrUrl, BOOL fProxy, NETSOURCE_URLCREDPOLICY_SETTINGS *pdwUrlPolicy, BSTR *pbstrName, BSTR *pbstrPassword, BOOL *pfConfirmedGood);
	HRESULT(STDMETHODCALLTYPE *DeleteCredentialsEx) (IWMSInternalAdminNetSource3 *This, BSTR bstrRealm, BSTR bstrUrl, BOOL fProxy);
	HRESULT(STDMETHODCALLTYPE *FindProxyForURLEx) (IWMSInternalAdminNetSource3 *This, BSTR bstrProtocol, BSTR bstrHost, BSTR bstrUrl, BOOL *pfProxyEnabled, BSTR *pbstrProxyServer, DWORD *pdwProxyPort, DWORD *pdwProxyContext);
	HRESULT(STDMETHODCALLTYPE *GetNetSourceCreator2) (IWMSInternalAdminNetSource3 *This, IUnknown **ppNetSourceCreator);
	HRESULT(STDMETHODCALLTYPE *FindProxyForURLEx2) (IWMSInternalAdminNetSource3 *This, BSTR bstrProtocol, BSTR bstrHost, BSTR bstrUrl, BOOL *pfProxyEnabled, BSTR *pbstrProxyServer, DWORD *pdwProxyPort, QWORD *pqwProxyContext);
	HRESULT(STDMETHODCALLTYPE *RegisterProxyFailure2) (IWMSInternalAdminNetSource3 *This, HRESULT hrParam, QWORD qwProxyContext);
	HRESULT(STDMETHODCALLTYPE *ShutdownProxyContext2) (IWMSInternalAdminNetSource3 *This, QWORD qwProxyContext);
	HRESULT(STDMETHODCALLTYPE *IsUsingIE2) (IWMSInternalAdminNetSource3 *This, QWORD qwProxyContext, BOOL *pfIsUsingIE);
	HRESULT(STDMETHODCALLTYPE *SetCredentialsEx2) (IWMSInternalAdminNetSource3 *This, BSTR bstrRealm, BSTR bstrUrl, BOOL fProxy, BSTR bstrName, BSTR bstrPassword, BOOL fPersist, BOOL fConfirmedGood, BOOL fClearTextAuthentication);
	HRESULT(STDMETHODCALLTYPE *GetCredentialsEx2) (IWMSInternalAdminNetSource3 *This, BSTR bstrRealm, BSTR bstrUrl, BOOL fProxy, BOOL fClearTextAuthentication, NETSOURCE_URLCREDPOLICY_SETTINGS *pdwUrlPolicy, BSTR *pbstrName, BSTR *pbstrPassword, BOOL *pfConfirmedGood);
	END_INTERFACE
}  IWMSInternalAdminNetSource3Vtbl;
interface IWMSInternalAdminNetSource3
{
	CONST_VTBL struct IWMSInternalAdminNetSource3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSInternalAdminNetSource3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSInternalAdminNetSource3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSInternalAdminNetSource3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSInternalAdminNetSource3_SetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,bstrName,bstrPassword,fPersist,fConfirmedGood) ( (This)->lpVtbl -> SetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,bstrName,bstrPassword,fPersist,fConfirmedGood) )
#define IWMSInternalAdminNetSource3_GetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,pdwUrlPolicy,pbstrName,pbstrPassword,pfConfirmedGood) ( (This)->lpVtbl -> GetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,pdwUrlPolicy,pbstrName,pbstrPassword,pfConfirmedGood) )
#define IWMSInternalAdminNetSource3_DeleteCredentialsEx(This,bstrRealm,bstrUrl,fProxy) ( (This)->lpVtbl -> DeleteCredentialsEx(This,bstrRealm,bstrUrl,fProxy) )
#define IWMSInternalAdminNetSource3_FindProxyForURLEx(This,bstrProtocol,bstrHost,bstrUrl,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pdwProxyContext) ( (This)->lpVtbl -> FindProxyForURLEx(This,bstrProtocol,bstrHost,bstrUrl,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pdwProxyContext) )
#define IWMSInternalAdminNetSource3_GetNetSourceCreator2(This,ppNetSourceCreator) ( (This)->lpVtbl -> GetNetSourceCreator2(This,ppNetSourceCreator) )
#define IWMSInternalAdminNetSource3_FindProxyForURLEx2(This,bstrProtocol,bstrHost,bstrUrl,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pqwProxyContext) ( (This)->lpVtbl -> FindProxyForURLEx2(This,bstrProtocol,bstrHost,bstrUrl,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pqwProxyContext) )
#define IWMSInternalAdminNetSource3_RegisterProxyFailure2(This,hrParam,qwProxyContext) ( (This)->lpVtbl -> RegisterProxyFailure2(This,hrParam,qwProxyContext) )
#define IWMSInternalAdminNetSource3_ShutdownProxyContext2(This,qwProxyContext) ( (This)->lpVtbl -> ShutdownProxyContext2(This,qwProxyContext) )
#define IWMSInternalAdminNetSource3_IsUsingIE2(This,qwProxyContext,pfIsUsingIE) ( (This)->lpVtbl -> IsUsingIE2(This,qwProxyContext,pfIsUsingIE) )
#define IWMSInternalAdminNetSource3_SetCredentialsEx2(This,bstrRealm,bstrUrl,fProxy,bstrName,bstrPassword,fPersist,fConfirmedGood,fClearTextAuthentication) ( (This)->lpVtbl -> SetCredentialsEx2(This,bstrRealm,bstrUrl,fProxy,bstrName,bstrPassword,fPersist,fConfirmedGood,fClearTextAuthentication) )
#define IWMSInternalAdminNetSource3_GetCredentialsEx2(This,bstrRealm,bstrUrl,fProxy,fClearTextAuthentication,pdwUrlPolicy,pbstrName,pbstrPassword,pfConfirmedGood) ( (This)->lpVtbl -> GetCredentialsEx2(This,bstrRealm,bstrUrl,fProxy,fClearTextAuthentication,pdwUrlPolicy,pbstrName,pbstrPassword,pfConfirmedGood) )
#endif
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource3_GetNetSourceCreator2_Proxy(IWMSInternalAdminNetSource3 *This, IUnknown **ppNetSourceCreator);
void __RPC_STUB IWMSInternalAdminNetSource3_GetNetSourceCreator2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource3_FindProxyForURLEx2_Proxy(IWMSInternalAdminNetSource3 *This, BSTR bstrProtocol, BSTR bstrHost, BSTR bstrUrl, BOOL *pfProxyEnabled, BSTR *pbstrProxyServer, DWORD *pdwProxyPort, QWORD *pqwProxyContext);
void __RPC_STUB IWMSInternalAdminNetSource3_FindProxyForURLEx2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource3_RegisterProxyFailure2_Proxy(IWMSInternalAdminNetSource3 *This, HRESULT hrParam, QWORD qwProxyContext);
void __RPC_STUB IWMSInternalAdminNetSource3_RegisterProxyFailure2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource3_ShutdownProxyContext2_Proxy(IWMSInternalAdminNetSource3 *This, QWORD qwProxyContext);
void __RPC_STUB IWMSInternalAdminNetSource3_ShutdownProxyContext2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource3_IsUsingIE2_Proxy(IWMSInternalAdminNetSource3 *This, QWORD qwProxyContext, BOOL *pfIsUsingIE);
void __RPC_STUB IWMSInternalAdminNetSource3_IsUsingIE2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource3_SetCredentialsEx2_Proxy(IWMSInternalAdminNetSource3 *This, BSTR bstrRealm, BSTR bstrUrl, BOOL fProxy, BSTR bstrName, BSTR bstrPassword, BOOL fPersist, BOOL fConfirmedGood, BOOL fClearTextAuthentication);
void __RPC_STUB IWMSInternalAdminNetSource3_SetCredentialsEx2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMSInternalAdminNetSource3_GetCredentialsEx2_Proxy(IWMSInternalAdminNetSource3 *This, BSTR bstrRealm, BSTR bstrUrl, BOOL fProxy, BOOL fClearTextAuthentication, NETSOURCE_URLCREDPOLICY_SETTINGS *pdwUrlPolicy, BSTR *pbstrName, BSTR *pbstrPassword, BOOL *pfConfirmedGood);
void __RPC_STUB IWMSInternalAdminNetSource3_GetCredentialsEx2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif
