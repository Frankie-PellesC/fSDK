/*+@@file@@----------------------------------------------------------------*//*!
 \file		hxhelppaneproxy.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Fri Jul 15 18:34:24 2016
 \date		Modified on Fri Jul 15 18:34:24 2016
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
#ifndef __hxhelppaneproxy_h__
#define __hxhelppaneproxy_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IHxHelpPane_FWD_DEFINED__
#define __IHxHelpPane_FWD_DEFINED__
typedef interface IHxHelpPane IHxHelpPane;
#endif
#ifndef __IHxInteractiveUser_FWD_DEFINED__
#define __IHxInteractiveUser_FWD_DEFINED__
typedef interface IHxInteractiveUser IHxInteractiveUser;
#endif
#ifndef __HxHelpPane_FWD_DEFINED__
#define __HxHelpPane_FWD_DEFINED__
typedef struct HxHelpPane HxHelpPane;
#endif
#include "oaidl.h"
extern RPC_IF_HANDLE __MIDL_itf_hxhelppaneproxy_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hxhelppaneproxy_0000_0000_v0_0_s_ifspec;
#ifndef __IHxHelpPane_INTERFACE_DEFINED__
#define __IHxHelpPane_INTERFACE_DEFINED__
extern const IID IID_IHxHelpPane;
typedef struct IHxHelpPaneVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IHxHelpPane * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHxHelpPane * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHxHelpPane * This);
	HRESULT(STDMETHODCALLTYPE * DisplayTask) (IHxHelpPane * This, BSTR bstrUrl);
	HRESULT(STDMETHODCALLTYPE * DisplayContents) (IHxHelpPane * This, BSTR bstrUrl);
	HRESULT(STDMETHODCALLTYPE * DisplaySearchResults) (IHxHelpPane * This, BSTR bstrSearchQuery);
	END_INTERFACE
}  IHxHelpPaneVtbl;
interface IHxHelpPane
{
	CONST_VTBL struct IHxHelpPaneVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHxHelpPane_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHxHelpPane_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IHxHelpPane_Release(This)( (This)->lpVtbl -> Release(This) )
#define IHxHelpPane_DisplayTask(This,bstrUrl)( (This)->lpVtbl -> DisplayTask(This,bstrUrl) )
#define IHxHelpPane_DisplayContents(This,bstrUrl)( (This)->lpVtbl -> DisplayContents(This,bstrUrl) )
#define IHxHelpPane_DisplaySearchResults(This,bstrSearchQuery)( (This)->lpVtbl -> DisplaySearchResults(This,bstrSearchQuery) )
#endif
#endif
#ifndef __IHxInteractiveUser_INTERFACE_DEFINED__
#define __IHxInteractiveUser_INTERFACE_DEFINED__
extern const IID IID_IHxInteractiveUser;
typedef struct IHxInteractiveUserVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IHxInteractiveUser * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHxInteractiveUser * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHxInteractiveUser * This);
	HRESULT(STDMETHODCALLTYPE * Execute) (IHxInteractiveUser * This, LPCWSTR pcUrl);
	END_INTERFACE
}  IHxInteractiveUserVtbl;
interface IHxInteractiveUser
{
	CONST_VTBL struct IHxInteractiveUserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHxInteractiveUser_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHxInteractiveUser_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IHxInteractiveUser_Release(This)( (This)->lpVtbl -> Release(This) )
#define IHxInteractiveUser_Execute(This,pcUrl)( (This)->lpVtbl -> Execute(This,pcUrl) )
#endif
#endif
#ifndef __HelpPane_LIBRARY_DEFINED__
#define __HelpPane_LIBRARY_DEFINED__
extern const IID LIBID_HelpPane;
extern const CLSID CLSID_HxHelpPane;
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
