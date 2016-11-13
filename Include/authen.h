/*+@@file@@----------------------------------------------------------------*//*!
 \file		authen.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 19:00:34 2016
 \date		Modified on Sat Jul  2 19:00:34 2016
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
#ifndef __authen_h__
#define __authen_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSAuthenticationPlugin_FWD_DEFINED__
#define __IWMSAuthenticationPlugin_FWD_DEFINED__
typedef interface IWMSAuthenticationPlugin IWMSAuthenticationPlugin;
#endif
#ifndef __IWMSAuthenticationContext_FWD_DEFINED__
#define __IWMSAuthenticationContext_FWD_DEFINED__
typedef interface IWMSAuthenticationContext IWMSAuthenticationContext;
#endif
#ifndef __IWMSAuthenticationCallback_FWD_DEFINED__
#define __IWMSAuthenticationCallback_FWD_DEFINED__
typedef interface IWMSAuthenticationCallback IWMSAuthenticationCallback;
#endif
#include <oaidl.h>
#include <WMSContext.h>
#if _MSC_VER > 1000
#pragma once
#endif
EXTERN_GUID(IID_IWMSAuthenticationPlugin, 0xBE185FF9, 0x6932, 0x11d2, 0x8B, 0x3B, 0x00, 0x60, 0x97, 0xB0, 0x12, 0x06);
EXTERN_GUID(IID_IWMSAuthenticationContext, 0xBE185FFA, 0x6932, 0x11d2, 0x8B, 0x3B, 0x00, 0x60, 0x97, 0xB0, 0x12, 0x06);
EXTERN_GUID(IID_IWMSAuthenticationCallback, 0xBE185FFB, 0x6932, 0x11d2, 0x8B, 0x3B, 0x00, 0x60, 0x97, 0xB0, 0x12, 0x06);
extern RPC_IF_HANDLE __MIDL_itf_authen_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_authen_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSAuthenticationPlugin_INTERFACE_DEFINED__
#define __IWMSAuthenticationPlugin_INTERFACE_DEFINED__
typedef enum WMS_AUTHENTICATION_FLAGS
{
	WMS_AUTHENTICATION_TEXT_CHALLENGE = 0x1,
	WMS_AUTHENTICATION_CLIENT_SHOWS_UI = 0x2,
	WMS_AUTHENTICATION_ANONYMOUS = 0x4,
	WMS_AUTHENTICATION_CHALLENGE_FIRST = 0x8
} WMS_AUTHENTICATION_FLAGS;
extern const IID IID_IWMSAuthenticationPlugin;
typedef struct IWMSAuthenticationPluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSAuthenticationPlugin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSAuthenticationPlugin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSAuthenticationPlugin * This);
	HRESULT(STDMETHODCALLTYPE * GetPackageName) (IWMSAuthenticationPlugin * This, BSTR * pbstrPackageName);
	HRESULT(STDMETHODCALLTYPE * GetProtocolName) (IWMSAuthenticationPlugin * This, BSTR * pbstrProtocolName);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (IWMSAuthenticationPlugin * This, long *plFlags);
	HRESULT(STDMETHODCALLTYPE * CreateAuthenticationContext) (IWMSAuthenticationPlugin * This, IWMSAuthenticationContext ** ppAuthenCtx);
	END_INTERFACE
}  IWMSAuthenticationPluginVtbl;
interface IWMSAuthenticationPlugin
{
	CONST_VTBL struct IWMSAuthenticationPluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSAuthenticationPlugin_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSAuthenticationPlugin_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSAuthenticationPlugin_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSAuthenticationPlugin_GetPackageName(This,pbstrPackageName)( (This)->lpVtbl -> GetPackageName(This,pbstrPackageName) )
#define IWMSAuthenticationPlugin_GetProtocolName(This,pbstrProtocolName)( (This)->lpVtbl -> GetProtocolName(This,pbstrProtocolName) )
#define IWMSAuthenticationPlugin_GetFlags(This,plFlags)( (This)->lpVtbl -> GetFlags(This,plFlags) )
#define IWMSAuthenticationPlugin_CreateAuthenticationContext(This,ppAuthenCtx)( (This)->lpVtbl -> CreateAuthenticationContext(This,ppAuthenCtx) )
#endif
#endif
#ifndef __IWMSAuthenticationContext_INTERFACE_DEFINED__
#define __IWMSAuthenticationContext_INTERFACE_DEFINED__
extern const IID IID_IWMSAuthenticationContext;
typedef struct IWMSAuthenticationContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSAuthenticationContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSAuthenticationContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSAuthenticationContext * This);
	HRESULT(STDMETHODCALLTYPE * GetAuthenticationPlugin) (IWMSAuthenticationContext * This, IWMSAuthenticationPlugin ** ppAuthenPlugin);
	HRESULT(STDMETHODCALLTYPE * Authenticate) (IWMSAuthenticationContext * This, VARIANT ResponseBlob, IWMSContext * pUserCtx, IWMSContext * pPresentationCtx, IWMSCommandContext * pCommandContext, IWMSAuthenticationCallback * pCallback, VARIANT Context);
	HRESULT(STDMETHODCALLTYPE * GetLogicalUserID) (IWMSAuthenticationContext * This, BSTR * pbstrUserID);
	HRESULT(STDMETHODCALLTYPE * GetImpersonationAccountName) (IWMSAuthenticationContext * This, BSTR * pbstrAccountName);
	HRESULT(STDMETHODCALLTYPE * GetImpersonationToken) (IWMSAuthenticationContext * This, long *plToken);
	END_INTERFACE
}  IWMSAuthenticationContextVtbl;
interface IWMSAuthenticationContext
{
	CONST_VTBL struct IWMSAuthenticationContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSAuthenticationContext_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSAuthenticationContext_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSAuthenticationContext_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSAuthenticationContext_GetAuthenticationPlugin(This,ppAuthenPlugin)( (This)->lpVtbl -> GetAuthenticationPlugin(This,ppAuthenPlugin) )
#define IWMSAuthenticationContext_Authenticate(This,ResponseBlob,pUserCtx,pPresentationCtx,pCommandContext,pCallback,Context)( (This)->lpVtbl -> Authenticate(This,ResponseBlob,pUserCtx,pPresentationCtx,pCommandContext,pCallback,Context) )
#define IWMSAuthenticationContext_GetLogicalUserID(This,pbstrUserID)( (This)->lpVtbl -> GetLogicalUserID(This,pbstrUserID) )
#define IWMSAuthenticationContext_GetImpersonationAccountName(This,pbstrAccountName)( (This)->lpVtbl -> GetImpersonationAccountName(This,pbstrAccountName) )
#define IWMSAuthenticationContext_GetImpersonationToken(This,plToken)( (This)->lpVtbl -> GetImpersonationToken(This,plToken) )
#endif
#endif
#ifndef __IWMSAuthenticationCallback_INTERFACE_DEFINED__
#define __IWMSAuthenticationCallback_INTERFACE_DEFINED__
typedef enum WMS_AUTHENTICATION_RESULT
{
	WMS_AUTHENTICATION_SUCCESS = 0x1,
	WMS_AUTHENTICATION_DENIED = 0x2,
	WMS_AUTHENTICATION_CONTINUE = 0x3,
	WMS_AUTHENTICATION_ERROR = 0x4
} WMS_AUTHENTICATION_RESULT;
extern const IID IID_IWMSAuthenticationCallback;
typedef struct IWMSAuthenticationCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSAuthenticationCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSAuthenticationCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSAuthenticationCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnAuthenticateComplete) (IWMSAuthenticationCallback * This, WMS_AUTHENTICATION_RESULT AuthResult, VARIANT ChallengeBlob, VARIANT Context);
	END_INTERFACE
}  IWMSAuthenticationCallbackVtbl;
interface IWMSAuthenticationCallback
{
	CONST_VTBL struct IWMSAuthenticationCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSAuthenticationCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSAuthenticationCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSAuthenticationCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSAuthenticationCallback_OnAuthenticateComplete(This,AuthResult,ChallengeBlob,Context)( (This)->lpVtbl -> OnAuthenticateComplete(This,AuthResult,ChallengeBlob,Context) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
