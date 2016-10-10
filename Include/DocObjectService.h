/*+@@file@@----------------------------------------------------------------*//*!
 \file		DocObjectService.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Wed Jul  6 13:42:12 2016
 \date		Modified on Wed Jul  6 13:42:12 2016
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
#ifndef __docobjectservice_h__
#define __docobjectservice_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDocObjectService_FWD_DEFINED__
#define __IDocObjectService_FWD_DEFINED__
typedef interface IDocObjectService IDocObjectService;
#endif
#include "objidl.h"
#include "mshtmlc.h"
extern RPC_IF_HANDLE __MIDL_itf_docobjectservice_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_docobjectservice_0000_0000_v0_0_s_ifspec;
#ifndef __IDocObjectService_INTERFACE_DEFINED__
#define __IDocObjectService_INTERFACE_DEFINED__ 
extern const IID IID_IDocObjectService;
typedef struct IDocObjectServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDocObjectService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDocObjectService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDocObjectService * This);
	HRESULT(STDMETHODCALLTYPE * FireBeforeNavigate2) (IDocObjectService * This, IDispatch * pDispatch, LPCWSTR lpszUrl, DWORD dwFlags, LPCWSTR lpszFrameName, BYTE * pPostData, DWORD cbPostData, LPCWSTR lpszHeaders, BOOL fPlayNavSound, BOOL * pfCancel);
	HRESULT(STDMETHODCALLTYPE * FireNavigateComplete2) (IDocObjectService * This, IHTMLWindow2 * pHTMLWindow2, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * FireDownloadBegin) (IDocObjectService * This);
	HRESULT(STDMETHODCALLTYPE * FireDownloadComplete) (IDocObjectService * This);
	HRESULT(STDMETHODCALLTYPE * FireDocumentComplete) (IDocObjectService * This, IHTMLWindow2 * pHTMLWindow, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * UpdateDesktopComponent) (IDocObjectService * This, IHTMLWindow2 * pHTMLWindow);
	HRESULT(STDMETHODCALLTYPE * GetPendingUrl) (IDocObjectService * This, BSTR * pbstrPendingUrl);
	HRESULT(STDMETHODCALLTYPE * ActiveElementChanged) (IDocObjectService * This, IHTMLElement * pHTMLElement);
	HRESULT(STDMETHODCALLTYPE * GetUrlSearchComponent) (IDocObjectService * This, BSTR * pbstrSearch);
	HRESULT(STDMETHODCALLTYPE * IsErrorUrl) (IDocObjectService * This, LPCWSTR lpszUrl, BOOL * pfIsError);
	END_INTERFACE
} IDocObjectServiceVtbl;
interface IDocObjectService
{
	CONST_VTBL struct IDocObjectServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDocObjectService_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDocObjectService_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IDocObjectService_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IDocObjectService_FireBeforeNavigate2(This,pDispatch,lpszUrl,dwFlags,lpszFrameName,pPostData,cbPostData,lpszHeaders,fPlayNavSound,pfCancel)    ( (This)->lpVtbl -> FireBeforeNavigate2(This,pDispatch,lpszUrl,dwFlags,lpszFrameName,pPostData,cbPostData,lpszHeaders,fPlayNavSound,pfCancel) ) 
#define IDocObjectService_FireNavigateComplete2(This,pHTMLWindow2,dwFlags)    ( (This)->lpVtbl -> FireNavigateComplete2(This,pHTMLWindow2,dwFlags) ) 
#define IDocObjectService_FireDownloadBegin(This)    ( (This)->lpVtbl -> FireDownloadBegin(This) ) 
#define IDocObjectService_FireDownloadComplete(This)    ( (This)->lpVtbl -> FireDownloadComplete(This) ) 
#define IDocObjectService_FireDocumentComplete(This,pHTMLWindow,dwFlags)    ( (This)->lpVtbl -> FireDocumentComplete(This,pHTMLWindow,dwFlags) ) 
#define IDocObjectService_UpdateDesktopComponent(This,pHTMLWindow)    ( (This)->lpVtbl -> UpdateDesktopComponent(This,pHTMLWindow) ) 
#define IDocObjectService_GetPendingUrl(This,pbstrPendingUrl)    ( (This)->lpVtbl -> GetPendingUrl(This,pbstrPendingUrl) ) 
#define IDocObjectService_ActiveElementChanged(This,pHTMLElement)    ( (This)->lpVtbl -> ActiveElementChanged(This,pHTMLElement) ) 
#define IDocObjectService_GetUrlSearchComponent(This,pbstrSearch)    ( (This)->lpVtbl -> GetUrlSearchComponent(This,pbstrSearch) ) 
#define IDocObjectService_IsErrorUrl(This,lpszUrl,pfIsError)    ( (This)->lpVtbl -> IsErrorUrl(This,lpszUrl,pfIsError) ) 
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
