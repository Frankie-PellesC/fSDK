/*+@@file@@----------------------------------------------------------------*//*!
 \file		IEDial.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 20:28:40 2016
 \date		Modified on Sat Jul 16 20:28:40 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __iedial_h__
#define __iedial_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDialEventSink_FWD_DEFINED__
#define __IDialEventSink_FWD_DEFINED__
typedef interface IDialEventSink IDialEventSink;
#endif
#ifndef __IDialEngine_FWD_DEFINED__
#define __IDialEngine_FWD_DEFINED__
typedef interface IDialEngine IDialEngine;
#endif
#ifndef __IDialBranding_FWD_DEFINED__
#define __IDialBranding_FWD_DEFINED__
typedef interface IDialBranding IDialBranding;
#endif
#include "unknwn.h"
#include "ocidl.h"
#pragma comment(lib,"uuid.lib")
extern RPC_IF_HANDLE __MIDL_itf_iedial_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iedial_0000_0000_v0_0_s_ifspec;
#ifndef __IDialEventSink_INTERFACE_DEFINED__
#define __IDialEventSink_INTERFACE_DEFINED__
extern const IID IID_IDialEventSink;
typedef struct IDialEventSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDialEventSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDialEventSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDialEventSink * This);
	HRESULT(STDMETHODCALLTYPE * OnEvent) (IDialEventSink * This, DWORD dwEvent, DWORD dwStatus);
	END_INTERFACE
}  IDialEventSinkVtbl;
interface IDialEventSink
{
	CONST_VTBL struct IDialEventSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDialEventSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDialEventSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDialEventSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDialEventSink_OnEvent(This,dwEvent,dwStatus)( (This)->lpVtbl -> OnEvent(This,dwEvent,dwStatus) )
#endif
#endif
#ifndef __IDialEngine_INTERFACE_DEFINED__
#define __IDialEngine_INTERFACE_DEFINED__
extern const IID IID_IDialEngine;
typedef struct IDialEngineVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDialEngine * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDialEngine * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDialEngine * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IDialEngine * This, LPCWSTR pwzConnectoid, IDialEventSink * pIDES);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IDialEngine * This, LPCWSTR pwzProperty, LPWSTR pwzValue, DWORD dwBufSize);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IDialEngine * This, LPCWSTR pwzProperty, LPCWSTR pwzValue);
	HRESULT(STDMETHODCALLTYPE * Dial) (IDialEngine * This);
	HRESULT(STDMETHODCALLTYPE * HangUp) (IDialEngine * This);
	HRESULT(STDMETHODCALLTYPE * GetConnectedState) (IDialEngine * This, DWORD * pdwState);
	HRESULT(STDMETHODCALLTYPE * GetConnectHandle) (IDialEngine * This, DWORD_PTR * pdwHandle);
	END_INTERFACE
}  IDialEngineVtbl;
interface IDialEngine
{
	CONST_VTBL struct IDialEngineVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDialEngine_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDialEngine_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDialEngine_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDialEngine_Initialize(This,pwzConnectoid,pIDES)( (This)->lpVtbl -> Initialize(This,pwzConnectoid,pIDES) )
#define IDialEngine_GetProperty(This,pwzProperty,pwzValue,dwBufSize)( (This)->lpVtbl -> GetProperty(This,pwzProperty,pwzValue,dwBufSize) )
#define IDialEngine_SetProperty(This,pwzProperty,pwzValue)( (This)->lpVtbl -> SetProperty(This,pwzProperty,pwzValue) )
#define IDialEngine_Dial(This)( (This)->lpVtbl -> Dial(This) )
#define IDialEngine_HangUp(This)( (This)->lpVtbl -> HangUp(This) )
#define IDialEngine_GetConnectedState(This,pdwState)( (This)->lpVtbl -> GetConnectedState(This,pdwState) )
#define IDialEngine_GetConnectHandle(This,pdwHandle)( (This)->lpVtbl -> GetConnectHandle(This,pdwHandle) )
#endif
#endif
#ifndef __IDialBranding_INTERFACE_DEFINED__
#define __IDialBranding_INTERFACE_DEFINED__
extern const IID IID_IDialBranding;
typedef struct IDialBrandingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDialBranding * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDialBranding * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDialBranding * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IDialBranding * This, LPCWSTR pwzConnectoid);
	HRESULT(STDMETHODCALLTYPE * GetBitmap) (IDialBranding * This, DWORD dwIndex, HBITMAP * phBitmap);
	END_INTERFACE
}  IDialBrandingVtbl;
interface IDialBranding
{
	CONST_VTBL struct IDialBrandingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDialBranding_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDialBranding_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDialBranding_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDialBranding_Initialize(This,pwzConnectoid)( (This)->lpVtbl -> Initialize(This,pwzConnectoid) )
#define IDialBranding_GetBitmap(This,dwIndex,phBitmap)( (This)->lpVtbl -> GetBitmap(This,dwIndex,phBitmap) )
#endif
#endif
#define DIALPROP_USERNAME       L"UserName"
#define DIALPROP_PASSWORD       L"Password"
#define DIALPROP_DOMAIN         L"Domain"
#define DIALPROP_SAVEPASSWORD   L"SavePassword"
#define DIALPROP_REDIALCOUNT    L"RedialCount"
#define DIALPROP_REDIALINTERVAL L"RedialInterval"
#define DIALPROP_PHONENUMBER    L"PhoneNumber"
#define DIALPROP_LASTERROR      L"LastError"
#define DIALPROP_RESOLVEDPHONE  L"ResolvedPhone"
#define DIALENG_OperationComplete   0x10000
#define DIALENG_RedialAttempt       0x10001
#define DIALENG_RedialWait          0x10002
extern RPC_IF_HANDLE __MIDL_itf_iedial_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iedial_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER HBITMAP_UserSize(unsigned long *, unsigned long, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserMarshal(unsigned long *, unsigned char *, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserUnmarshal(unsigned long *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree(unsigned long *, HBITMAP *);
unsigned long __RPC_USER HBITMAP_UserSize64(unsigned long *, unsigned long, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserMarshal64(unsigned long *, unsigned char *, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserUnmarshal64(unsigned long *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree64(unsigned long *, HBITMAP *);
#endif
