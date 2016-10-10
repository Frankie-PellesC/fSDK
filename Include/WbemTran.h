/*+@@file@@----------------------------------------------------------------*//*!
 \file		WbemTran.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 10 21:29:28 2016
 \date		Modified on Sun Jul 10 21:29:28 2016
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
#ifndef __wbemtran_h__
#define __wbemtran_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWbemTransport_FWD_DEFINED__
#define __IWbemTransport_FWD_DEFINED__
typedef interface IWbemTransport IWbemTransport;
#endif
#ifndef __IWbemLevel1Login_FWD_DEFINED__
#define __IWbemLevel1Login_FWD_DEFINED__
typedef interface IWbemLevel1Login IWbemLevel1Login;
#endif
#ifndef __IWbemConnectorLogin_FWD_DEFINED__
#define __IWbemConnectorLogin_FWD_DEFINED__
typedef interface IWbemConnectorLogin IWbemConnectorLogin;
#endif
#ifndef __IWbemAddressResolution_FWD_DEFINED__
#define __IWbemAddressResolution_FWD_DEFINED__
typedef interface IWbemAddressResolution IWbemAddressResolution;
#endif
#ifndef __WbemLevel1Login_FWD_DEFINED__
#define __WbemLevel1Login_FWD_DEFINED__
typedef struct WbemLevel1Login WbemLevel1Login;
#endif
#ifndef __WbemLocalAddrRes_FWD_DEFINED__
#define __WbemLocalAddrRes_FWD_DEFINED__
typedef struct WbemLocalAddrRes WbemLocalAddrRes;
#endif
#ifndef __WbemUninitializedClassObject_FWD_DEFINED__
#define __WbemUninitializedClassObject_FWD_DEFINED__
typedef struct WbemUninitializedClassObject WbemUninitializedClassObject;
#endif
#ifndef __IWbemClientTransport_FWD_DEFINED__
#define __IWbemClientTransport_FWD_DEFINED__
typedef interface IWbemClientTransport IWbemClientTransport;
#endif
#ifndef __IWbemClientConnectionTransport_FWD_DEFINED__
#define __IWbemClientConnectionTransport_FWD_DEFINED__
typedef interface IWbemClientConnectionTransport IWbemClientConnectionTransport;
#endif
#ifndef __WbemDCOMTransport_FWD_DEFINED__
#define __WbemDCOMTransport_FWD_DEFINED__
typedef struct WbemDCOMTransport WbemDCOMTransport;
#endif
#ifndef __IWbemLevel1Login_FWD_DEFINED__
#define __IWbemLevel1Login_FWD_DEFINED__
typedef interface IWbemLevel1Login IWbemLevel1Login;
#endif
#ifndef __IWbemConnectorLogin_FWD_DEFINED__
#define __IWbemConnectorLogin_FWD_DEFINED__
typedef interface IWbemConnectorLogin IWbemConnectorLogin;
#endif
#ifndef __IWbemAddressResolution_FWD_DEFINED__
#define __IWbemAddressResolution_FWD_DEFINED__
typedef interface IWbemAddressResolution IWbemAddressResolution;
#endif
#ifndef __IWbemTransport_FWD_DEFINED__
#define __IWbemTransport_FWD_DEFINED__
typedef interface IWbemTransport IWbemTransport;
#endif
#ifndef __IWbemConstructClassObject_FWD_DEFINED__
#define __IWbemConstructClassObject_FWD_DEFINED__
typedef interface IWbemConstructClassObject IWbemConstructClassObject;
#endif
#ifndef __IWbemClientTransport_FWD_DEFINED__
#define __IWbemClientTransport_FWD_DEFINED__
typedef interface IWbemClientTransport IWbemClientTransport;
#endif
#ifndef __IWbemClientConnectionTransport_FWD_DEFINED__
#define __IWbemClientConnectionTransport_FWD_DEFINED__
typedef interface IWbemClientConnectionTransport IWbemClientConnectionTransport;
#endif
#include "objidl.h"
#include "oleidl.h"
#include "oaidl.h"
#include "wbemcli.h"
extern RPC_IF_HANDLE __MIDL_itf_wbemtran_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemtran_0000_0000_v0_0_s_ifspec;
#ifndef __WbemTransports_v1_LIBRARY_DEFINED__
#define __WbemTransports_v1_LIBRARY_DEFINED__
typedef enum tag_WBEM_LOGIN_TYPE
{
	WBEM_FLAG_INPROC_LOGIN = 0,
	WBEM_FLAG_LOCAL_LOGIN = 1,
	WBEM_FLAG_REMOTE_LOGIN = 2,
	WBEM_AUTHENTICATION_METHOD_MASK = 0xf,
	WBEM_FLAG_USE_MULTIPLE_CHALLENGES = 0x10
} WBEM_LOGIN_TYPE;
typedef BYTE *WBEM_128BITS;
extern const IID LIBID_WbemTransports_v1;
#ifndef __IWbemTransport_INTERFACE_DEFINED__
#define __IWbemTransport_INTERFACE_DEFINED__
extern const IID IID_IWbemTransport;
typedef struct IWbemTransportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemTransport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemTransport * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemTransport * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IWbemTransport * This);
	END_INTERFACE
}  IWbemTransportVtbl;
interface IWbemTransport
{
	CONST_VTBL struct IWbemTransportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemTransport_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemTransport_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemTransport_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemTransport_Initialize(This)( (This)->lpVtbl -> Initialize(This) )
#endif
#endif
#ifndef __IWbemLevel1Login_INTERFACE_DEFINED__
#define __IWbemLevel1Login_INTERFACE_DEFINED__
extern const IID IID_IWbemLevel1Login;
typedef struct IWbemLevel1LoginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemLevel1Login * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemLevel1Login * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemLevel1Login * This);
	HRESULT(STDMETHODCALLTYPE * EstablishPosition) (IWbemLevel1Login * This, LPWSTR wszLocaleList, DWORD dwNumLocales, DWORD * reserved);
	HRESULT(STDMETHODCALLTYPE * RequestChallenge) (IWbemLevel1Login * This, LPWSTR wszNetworkResource, LPWSTR wszUser, WBEM_128BITS Nonce);
	HRESULT(STDMETHODCALLTYPE * WBEMLogin) (IWbemLevel1Login * This, LPWSTR wszPreferredLocale, WBEM_128BITS AccessToken, long lFlags, IWbemContext * pCtx, IWbemServices ** ppNamespace);
	HRESULT(STDMETHODCALLTYPE * NTLMLogin) (IWbemLevel1Login * This, LPWSTR wszNetworkResource, LPWSTR wszPreferredLocale, long lFlags, IWbemContext * pCtx, IWbemServices ** ppNamespace);
	END_INTERFACE
}  IWbemLevel1LoginVtbl;
interface IWbemLevel1Login
{
	CONST_VTBL struct IWbemLevel1LoginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemLevel1Login_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemLevel1Login_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemLevel1Login_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemLevel1Login_EstablishPosition(This,wszLocaleList,dwNumLocales,reserved)( (This)->lpVtbl -> EstablishPosition(This,wszLocaleList,dwNumLocales,reserved) )
#define IWbemLevel1Login_RequestChallenge(This,wszNetworkResource,wszUser,Nonce)( (This)->lpVtbl -> RequestChallenge(This,wszNetworkResource,wszUser,Nonce) )
#define IWbemLevel1Login_WBEMLogin(This,wszPreferredLocale,AccessToken,lFlags,pCtx,ppNamespace)( (This)->lpVtbl -> WBEMLogin(This,wszPreferredLocale,AccessToken,lFlags,pCtx,ppNamespace) )
#define IWbemLevel1Login_NTLMLogin(This,wszNetworkResource,wszPreferredLocale,lFlags,pCtx,ppNamespace)( (This)->lpVtbl -> NTLMLogin(This,wszNetworkResource,wszPreferredLocale,lFlags,pCtx,ppNamespace) )
#endif
#endif
#ifndef __IWbemConnectorLogin_INTERFACE_DEFINED__
#define __IWbemConnectorLogin_INTERFACE_DEFINED__
extern const IID IID_IWbemConnectorLogin;
typedef struct IWbemConnectorLoginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemConnectorLogin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemConnectorLogin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemConnectorLogin * This);
	HRESULT(STDMETHODCALLTYPE * ConnectorLogin) (IWbemConnectorLogin * This, LPWSTR wszNetworkResource, LPWSTR wszPreferredLocale, long lFlags, IWbemContext * pCtx, REFIID riid, void **pInterface);
	END_INTERFACE
}  IWbemConnectorLoginVtbl;
interface IWbemConnectorLogin
{
	CONST_VTBL struct IWbemConnectorLoginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemConnectorLogin_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemConnectorLogin_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemConnectorLogin_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemConnectorLogin_ConnectorLogin(This,wszNetworkResource,wszPreferredLocale,lFlags,pCtx,riid,pInterface)( (This)->lpVtbl -> ConnectorLogin(This,wszNetworkResource,wszPreferredLocale,lFlags,pCtx,riid,pInterface) )
#endif
#endif
#ifndef __IWbemAddressResolution_INTERFACE_DEFINED__
#define __IWbemAddressResolution_INTERFACE_DEFINED__
extern const IID IID_IWbemAddressResolution;
typedef struct IWbemAddressResolutionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemAddressResolution * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemAddressResolution * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemAddressResolution * This);
	HRESULT(STDMETHODCALLTYPE * Resolve) (IWbemAddressResolution * This, LPWSTR wszNamespacePath, LPWSTR wszAddressType, DWORD * pdwAddressLength, BYTE ** pabBinaryAddress);
	END_INTERFACE
}  IWbemAddressResolutionVtbl;
interface IWbemAddressResolution
{
	CONST_VTBL struct IWbemAddressResolutionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemAddressResolution_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemAddressResolution_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemAddressResolution_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemAddressResolution_Resolve(This,wszNamespacePath,wszAddressType,pdwAddressLength,pabBinaryAddress)( (This)->lpVtbl -> Resolve(This,wszNamespacePath,wszAddressType,pdwAddressLength,pabBinaryAddress) )
#endif
#endif
extern const CLSID CLSID_WbemLevel1Login;
extern const CLSID CLSID_WbemLocalAddrRes;
extern const CLSID CLSID_WbemUninitializedClassObject;
#ifndef __IWbemClientTransport_INTERFACE_DEFINED__
#define __IWbemClientTransport_INTERFACE_DEFINED__
extern const IID IID_IWbemClientTransport;
typedef struct IWbemClientTransportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemClientTransport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemClientTransport * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemClientTransport * This);
	HRESULT(STDMETHODCALLTYPE * ConnectServer) (IWbemClientTransport * This, BSTR strAddressType, DWORD dwBinaryAddressLength, BYTE * abBinaryAddress, BSTR strNetworkResource, BSTR strUser, BSTR strPassword, BSTR strLocale, long lSecurityFlags, BSTR strAuthority, IWbemContext * pCtx, IWbemServices ** ppNamespace);
	END_INTERFACE
}  IWbemClientTransportVtbl;
interface IWbemClientTransport
{
	CONST_VTBL struct IWbemClientTransportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemClientTransport_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemClientTransport_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemClientTransport_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemClientTransport_ConnectServer(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strNetworkResource,strUser,strPassword,strLocale,lSecurityFlags,strAuthority,pCtx,ppNamespace)( (This)->lpVtbl -> ConnectServer(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strNetworkResource,strUser,strPassword,strLocale,lSecurityFlags,strAuthority,pCtx,ppNamespace) )
#endif
#endif
#ifndef __IWbemClientConnectionTransport_INTERFACE_DEFINED__
#define __IWbemClientConnectionTransport_INTERFACE_DEFINED__
extern const IID IID_IWbemClientConnectionTransport;
typedef struct IWbemClientConnectionTransportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemClientConnectionTransport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemClientConnectionTransport * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemClientConnectionTransport * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IWbemClientConnectionTransport * This, BSTR strAddressType, DWORD dwBinaryAddressLength, BYTE * abBinaryAddress, const BSTR strObject, const BSTR strUser, const BSTR strPassword, const BSTR strLocale, long lFlags, IWbemContext * pCtx, REFIID riid, void **pInterface, IWbemCallResult ** pCallRes);
	HRESULT(STDMETHODCALLTYPE * OpenAsync) (IWbemClientConnectionTransport * This, BSTR strAddressType, DWORD dwBinaryAddressLength, BYTE * abBinaryAddress, const BSTR strObject, const BSTR strUser, const BSTR strPassword, const BSTR strLocale, long lFlags, IWbemContext * pCtx, REFIID riid, IWbemObjectSink * pResponseHandler);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IWbemClientConnectionTransport * This, long lFlags, IWbemObjectSink * pHandler);
	END_INTERFACE
}  IWbemClientConnectionTransportVtbl;
interface IWbemClientConnectionTransport
{
	CONST_VTBL struct IWbemClientConnectionTransportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemClientConnectionTransport_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemClientConnectionTransport_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemClientConnectionTransport_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemClientConnectionTransport_Open(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strObject,strUser,strPassword,strLocale,lFlags,pCtx,riid,pInterface,pCallRes)( (This)->lpVtbl -> Open(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strObject,strUser,strPassword,strLocale,lFlags,pCtx,riid,pInterface,pCallRes) )
#define IWbemClientConnectionTransport_OpenAsync(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strObject,strUser,strPassword,strLocale,lFlags,pCtx,riid,pResponseHandler)( (This)->lpVtbl -> OpenAsync(This,strAddressType,dwBinaryAddressLength,abBinaryAddress,strObject,strUser,strPassword,strLocale,lFlags,pCtx,riid,pResponseHandler) )
#define IWbemClientConnectionTransport_Cancel(This,lFlags,pHandler)( (This)->lpVtbl -> Cancel(This,lFlags,pHandler) )
#endif
#endif
extern const CLSID CLSID_WbemDCOMTransport;
#endif
#ifndef __IWbemConstructClassObject_INTERFACE_DEFINED__
#define __IWbemConstructClassObject_INTERFACE_DEFINED__
extern const IID IID_IWbemConstructClassObject;
typedef struct IWbemConstructClassObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemConstructClassObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemConstructClassObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemConstructClassObject * This);
	HRESULT(STDMETHODCALLTYPE * SetInheritanceChain) (IWbemConstructClassObject * This, long lNumAntecedents, LPWSTR * awszAntecedents);
	HRESULT(STDMETHODCALLTYPE * SetPropertyOrigin) (IWbemConstructClassObject * This, LPCWSTR wszPropertyName, long lOriginIndex);
	HRESULT(STDMETHODCALLTYPE * SetMethodOrigin) (IWbemConstructClassObject * This, LPCWSTR wszMethodName, long lOriginIndex);
	HRESULT(STDMETHODCALLTYPE * SetServerNamespace) (IWbemConstructClassObject * This, LPCWSTR wszServer, LPCWSTR wszNamespace);
	END_INTERFACE
}  IWbemConstructClassObjectVtbl;
interface IWbemConstructClassObject
{
	CONST_VTBL struct IWbemConstructClassObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemConstructClassObject_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemConstructClassObject_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemConstructClassObject_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemConstructClassObject_SetInheritanceChain(This,lNumAntecedents,awszAntecedents)( (This)->lpVtbl -> SetInheritanceChain(This,lNumAntecedents,awszAntecedents) )
#define IWbemConstructClassObject_SetPropertyOrigin(This,wszPropertyName,lOriginIndex)( (This)->lpVtbl -> SetPropertyOrigin(This,wszPropertyName,lOriginIndex) )
#define IWbemConstructClassObject_SetMethodOrigin(This,wszMethodName,lOriginIndex)( (This)->lpVtbl -> SetMethodOrigin(This,wszMethodName,lOriginIndex) )
#define IWbemConstructClassObject_SetServerNamespace(This,wszServer,wszNamespace)( (This)->lpVtbl -> SetServerNamespace(This,wszServer,wszNamespace) )
#endif
#endif
#endif
