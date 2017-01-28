/*+@@file@@----------------------------------------------------------------*//*!
 \file		webevnts.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 00:40:41 2016
 \date		Modified on Mon Sep 19 00:40:41 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __webevnts_h__
#define __webevnts_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWebBrowserEventsService_FWD_DEFINED__
#define __IWebBrowserEventsService_FWD_DEFINED__
typedef interface IWebBrowserEventsService IWebBrowserEventsService;
#endif
#ifndef __IWebBrowserEventsUrlService_FWD_DEFINED__
#define __IWebBrowserEventsUrlService_FWD_DEFINED__
typedef interface IWebBrowserEventsUrlService IWebBrowserEventsUrlService;
#endif
#include <objidl.h>
#include <oleidl.h>
#pragma comment(lib,"uuid.lib")
#ifndef _LPWEBEVNTS_DEFINED
#define _LPWEBEVNTS_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_webevnts_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_webevnts_0000_0000_v0_0_s_ifspec;
#ifndef __IWebBrowserEventsService_INTERFACE_DEFINED__
#define __IWebBrowserEventsService_INTERFACE_DEFINED__
extern const IID IID_IWebBrowserEventsService;
typedef struct IWebBrowserEventsServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWebBrowserEventsService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWebBrowserEventsService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWebBrowserEventsService * This);
	HRESULT(STDMETHODCALLTYPE * FireBeforeNavigate2Event) (IWebBrowserEventsService * This, VARIANT_BOOL * pfCancel);
	HRESULT(STDMETHODCALLTYPE * FireNavigateComplete2Event) (IWebBrowserEventsService * This);
	HRESULT(STDMETHODCALLTYPE * FireDownloadBeginEvent) (IWebBrowserEventsService * This);
	HRESULT(STDMETHODCALLTYPE * FireDownloadCompleteEvent) (IWebBrowserEventsService * This);
	HRESULT(STDMETHODCALLTYPE * FireDocumentCompleteEvent) (IWebBrowserEventsService * This);
	END_INTERFACE
}  IWebBrowserEventsServiceVtbl;
interface IWebBrowserEventsService
{
	CONST_VTBL struct IWebBrowserEventsServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWebBrowserEventsService_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWebBrowserEventsService_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWebBrowserEventsService_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWebBrowserEventsService_FireBeforeNavigate2Event(This,pfCancel) ( (This)->lpVtbl -> FireBeforeNavigate2Event(This,pfCancel) )
#define IWebBrowserEventsService_FireNavigateComplete2Event(This) ( (This)->lpVtbl -> FireNavigateComplete2Event(This) )
#define IWebBrowserEventsService_FireDownloadBeginEvent(This) ( (This)->lpVtbl -> FireDownloadBeginEvent(This) )
#define IWebBrowserEventsService_FireDownloadCompleteEvent(This) ( (This)->lpVtbl -> FireDownloadCompleteEvent(This) )
#define IWebBrowserEventsService_FireDocumentCompleteEvent(This) ( (This)->lpVtbl -> FireDocumentCompleteEvent(This) )
#endif
#endif
#ifndef __IWebBrowserEventsUrlService_INTERFACE_DEFINED__
#define __IWebBrowserEventsUrlService_INTERFACE_DEFINED__
extern const IID IID_IWebBrowserEventsUrlService;
typedef struct IWebBrowserEventsUrlServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWebBrowserEventsUrlService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWebBrowserEventsUrlService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWebBrowserEventsUrlService * This);
	HRESULT(STDMETHODCALLTYPE * GetUrlForEvents) (IWebBrowserEventsUrlService * This, BSTR * pUrl);
	END_INTERFACE
}  IWebBrowserEventsUrlServiceVtbl;
interface IWebBrowserEventsUrlService
{
	CONST_VTBL struct IWebBrowserEventsUrlServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWebBrowserEventsUrlService_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWebBrowserEventsUrlService_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWebBrowserEventsUrlService_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWebBrowserEventsUrlService_GetUrlForEvents(This,pUrl) ( (This)->lpVtbl -> GetUrlForEvents(This,pUrl) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_webevnts_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_webevnts_0000_0002_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif
