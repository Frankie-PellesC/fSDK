/*+@@file@@----------------------------------------------------------------*//*!
 \file		TipAutoComplete.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 12:44:21 2016
 \date		Modified on Sat Sep 17 12:44:21 2016
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
#ifndef __tipautocomplete_h__
#define __tipautocomplete_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITipAutoCompleteProvider_FWD_DEFINED__
#define __ITipAutoCompleteProvider_FWD_DEFINED__
typedef interface ITipAutoCompleteProvider ITipAutoCompleteProvider;
#endif
#ifndef __ITipAutoCompleteClient_FWD_DEFINED__
#define __ITipAutoCompleteClient_FWD_DEFINED__
typedef interface ITipAutoCompleteClient ITipAutoCompleteClient;
#endif
#ifndef __TipAutoCompleteClient_FWD_DEFINED__
#define __TipAutoCompleteClient_FWD_DEFINED__
typedef struct TipAutoCompleteClient TipAutoCompleteClient;
#endif
#include "oaidl.h"
#include "ocidl.h"
#ifndef __ITipAutoCompleteProvider_INTERFACE_DEFINED__
#define __ITipAutoCompleteProvider_INTERFACE_DEFINED__
extern const IID IID_ITipAutoCompleteProvider;
typedef struct ITipAutoCompleteProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITipAutoCompleteProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITipAutoCompleteProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITipAutoCompleteProvider * This);
	HRESULT(STDMETHODCALLTYPE * UpdatePendingText) (ITipAutoCompleteProvider * This, BSTR bstrPendingText);
	HRESULT(STDMETHODCALLTYPE * Show) (ITipAutoCompleteProvider * This, BOOL fShow);
	END_INTERFACE
}  ITipAutoCompleteProviderVtbl;
interface ITipAutoCompleteProvider
{
	CONST_VTBL struct ITipAutoCompleteProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITipAutoCompleteProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITipAutoCompleteProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITipAutoCompleteProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITipAutoCompleteProvider_UpdatePendingText(This,bstrPendingText) ( (This)->lpVtbl -> UpdatePendingText(This,bstrPendingText) )
#define ITipAutoCompleteProvider_Show(This,fShow) ( (This)->lpVtbl -> Show(This,fShow) )
#endif
#endif
#ifndef __ITipAutoCompleteClient_INTERFACE_DEFINED__
#define __ITipAutoCompleteClient_INTERFACE_DEFINED__
extern const IID IID_ITipAutoCompleteClient;
typedef struct ITipAutoCompleteClientVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITipAutoCompleteClient * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITipAutoCompleteClient * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITipAutoCompleteClient * This);
	HRESULT(STDMETHODCALLTYPE * AdviseProvider) (ITipAutoCompleteClient * This, HWND hWndField, ITipAutoCompleteProvider * pIProvider);
	HRESULT(STDMETHODCALLTYPE * UnadviseProvider) (ITipAutoCompleteClient * This, HWND hWndField, ITipAutoCompleteProvider * pIProvider);
	HRESULT(STDMETHODCALLTYPE * UserSelection) (ITipAutoCompleteClient * This);
	HRESULT(STDMETHODCALLTYPE * PreferredRects) (ITipAutoCompleteClient * This, RECT * prcACList, RECT * prcField, RECT * prcModifiedACList, BOOL * pfShownAboveTip);
	HRESULT(STDMETHODCALLTYPE * RequestShowUI) (ITipAutoCompleteClient * This, HWND hWndList, BOOL * pfAllowShowing);
	END_INTERFACE
}  ITipAutoCompleteClientVtbl;
interface ITipAutoCompleteClient
{
	CONST_VTBL struct ITipAutoCompleteClientVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITipAutoCompleteClient_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITipAutoCompleteClient_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITipAutoCompleteClient_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITipAutoCompleteClient_AdviseProvider(This,hWndField,pIProvider) ( (This)->lpVtbl -> AdviseProvider(This,hWndField,pIProvider) )
#define ITipAutoCompleteClient_UnadviseProvider(This,hWndField,pIProvider) ( (This)->lpVtbl -> UnadviseProvider(This,hWndField,pIProvider) )
#define ITipAutoCompleteClient_UserSelection(This) ( (This)->lpVtbl -> UserSelection(This) )
#define ITipAutoCompleteClient_PreferredRects(This,prcACList,prcField,prcModifiedACList,pfShownAboveTip) ( (This)->lpVtbl -> PreferredRects(This,prcACList,prcField,prcModifiedACList,pfShownAboveTip) )
#define ITipAutoCompleteClient_RequestShowUI(This,hWndList,pfAllowShowing) ( (This)->lpVtbl -> RequestShowUI(This,hWndList,pfAllowShowing) )
#endif
#endif
#ifndef __TipAutoCompleteClientLib_LIBRARY_DEFINED__
#define __TipAutoCompleteClientLib_LIBRARY_DEFINED__
extern const IID LIBID_TipAutoCompleteClientLib;
extern const CLSID CLSID_TipAutoCompleteClient;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
#endif
