/*+@@file@@----------------------------------------------------------------*//*!
 \file		TSGAuthenticationEngine.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 12:58:41 2016
 \date		Modified on Sat Sep 17 12:58:41 2016
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
#ifndef __tsgauthenticationengine_h__
#define __tsgauthenticationengine_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITSGAuthenticateUserSink_FWD_DEFINED__
#define __ITSGAuthenticateUserSink_FWD_DEFINED__
typedef interface ITSGAuthenticateUserSink ITSGAuthenticateUserSink;
#endif
#ifndef __ITSGAuthenticationEngine_FWD_DEFINED__
#define __ITSGAuthenticationEngine_FWD_DEFINED__
typedef interface ITSGAuthenticationEngine ITSGAuthenticationEngine;
#endif
#include "oaidl.h"
#include "ocidl.h"
#ifndef __ITSGAuthenticateUserSink_INTERFACE_DEFINED__
#define __ITSGAuthenticateUserSink_INTERFACE_DEFINED__
extern const IID IID_ITSGAuthenticateUserSink;
typedef struct ITSGAuthenticateUserSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITSGAuthenticateUserSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITSGAuthenticateUserSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITSGAuthenticateUserSink * This);
	HRESULT(STDMETHODCALLTYPE * OnUserAuthenticated) (ITSGAuthenticateUserSink * This, BSTR userName, BSTR userDomain, ULONG_PTR context, HANDLE_PTR userToken);
	HRESULT(STDMETHODCALLTYPE * OnUserAuthenticationFailed) (ITSGAuthenticateUserSink * This, ULONG_PTR context, HRESULT genericErrorCode, HRESULT specificErrorCode);
	HRESULT(STDMETHODCALLTYPE * ReauthenticateUser) (ITSGAuthenticateUserSink * This, ULONG_PTR context);
	HRESULT(STDMETHODCALLTYPE * DisconnectUser) (ITSGAuthenticateUserSink * This, ULONG_PTR context);
	END_INTERFACE
}  ITSGAuthenticateUserSinkVtbl;
interface ITSGAuthenticateUserSink
{
	CONST_VTBL struct ITSGAuthenticateUserSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITSGAuthenticateUserSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITSGAuthenticateUserSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITSGAuthenticateUserSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITSGAuthenticateUserSink_OnUserAuthenticated(This,userName,userDomain,context,userToken) ( (This)->lpVtbl -> OnUserAuthenticated(This,userName,userDomain,context,userToken) )
#define ITSGAuthenticateUserSink_OnUserAuthenticationFailed(This,context,genericErrorCode,specificErrorCode) ( (This)->lpVtbl -> OnUserAuthenticationFailed(This,context,genericErrorCode,specificErrorCode) )
#define ITSGAuthenticateUserSink_ReauthenticateUser(This,context) ( (This)->lpVtbl -> ReauthenticateUser(This,context) )
#define ITSGAuthenticateUserSink_DisconnectUser(This,context) ( (This)->lpVtbl -> DisconnectUser(This,context) )
#endif
#endif
#ifndef __ITSGAuthenticationEngine_INTERFACE_DEFINED__
#define __ITSGAuthenticationEngine_INTERFACE_DEFINED__
extern const IID IID_ITSGAuthenticationEngine;
typedef struct ITSGAuthenticationEngineVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITSGAuthenticationEngine * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITSGAuthenticationEngine * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITSGAuthenticationEngine * This);
	HRESULT(STDMETHODCALLTYPE * AuthenticateUser) (ITSGAuthenticationEngine * This, GUID mainSessionId, BYTE * cookieData, ULONG numCookieBytes, ULONG_PTR context, ITSGAuthenticateUserSink * pSink);
	HRESULT(STDMETHODCALLTYPE * CancelAuthentication) (ITSGAuthenticationEngine * This, GUID mainSessionId, ULONG_PTR context);
	END_INTERFACE
}  ITSGAuthenticationEngineVtbl;
interface ITSGAuthenticationEngine
{
	CONST_VTBL struct ITSGAuthenticationEngineVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITSGAuthenticationEngine_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITSGAuthenticationEngine_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITSGAuthenticationEngine_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITSGAuthenticationEngine_AuthenticateUser(This,mainSessionId,cookieData,numCookieBytes,context,pSink) ( (This)->lpVtbl -> AuthenticateUser(This,mainSessionId,cookieData,numCookieBytes,context,pSink) )
#define ITSGAuthenticationEngine_CancelAuthentication(This,mainSessionId,context) ( (This)->lpVtbl -> CancelAuthentication(This,mainSessionId,context) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif
