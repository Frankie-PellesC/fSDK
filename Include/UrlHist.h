/*+@@file@@----------------------------------------------------------------*//*!
 \file		UrlHist.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 15:53:51 2016
 \date		Modified on Sat Sep 17 15:53:51 2016
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
#ifndef __urlhist_h__
#define __urlhist_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IEnumSTATURL_FWD_DEFINED__
#define __IEnumSTATURL_FWD_DEFINED__
typedef interface IEnumSTATURL IEnumSTATURL;
#endif
#ifndef __IUrlHistoryStg_FWD_DEFINED__
#define __IUrlHistoryStg_FWD_DEFINED__
typedef interface IUrlHistoryStg IUrlHistoryStg;
#endif
#ifndef __IUrlHistoryStg2_FWD_DEFINED__
#define __IUrlHistoryStg2_FWD_DEFINED__
typedef interface IUrlHistoryStg2 IUrlHistoryStg2;
#endif
#ifndef __IUrlHistoryNotify_FWD_DEFINED__
#define __IUrlHistoryNotify_FWD_DEFINED__
typedef interface IUrlHistoryNotify IUrlHistoryNotify;
#endif
#include <objidl.h>
#include <oleidl.h>
#include <oaidl.h>
#include <docobj.h>
#pragma comment(lib,"uuid.lib")
#define STATURL_QUERYFLAG_ISCACHED	0x00010000
#define STATURL_QUERYFLAG_NOURL		0x00020000
#define STATURL_QUERYFLAG_NOTITLE	0x00040000
#define STATURL_QUERYFLAG_TOPLEVEL	0x00080000
#define STATURLFLAG_ISCACHED		0x00000001
#define STATURLFLAG_ISTOPLEVEL		0x00000002
typedef enum _ADDURL_FLAG
{
	ADDURL_FIRST = 0,
	ADDURL_ADDTOHISTORYANDCACHE = 0,
	ADDURL_ADDTOCACHE = 1,
	ADDURL_Max = 2147483647L
} ADDURL_FLAG;
#ifndef _LPENUMSTATURL_DEFINED
#define _LPENUMSTATURL_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0000_v0_0_s_ifspec;
#ifndef __IEnumSTATURL_INTERFACE_DEFINED__
#define __IEnumSTATURL_INTERFACE_DEFINED__
typedef IEnumSTATURL *LPENUMSTATURL;
typedef struct _STATURL
{
	DWORD cbSize;
	LPWSTR pwcsUrl;
	LPWSTR pwcsTitle;
	FILETIME ftLastVisited;
	FILETIME ftLastUpdated;
	FILETIME ftExpires;
	DWORD dwFlags;
} STATURL;
typedef struct _STATURL *LPSTATURL;
extern const IID IID_IEnumSTATURL;
typedef struct IEnumSTATURLVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumSTATURL * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumSTATURL * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumSTATURL * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumSTATURL * This, ULONG celt, LPSTATURL rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumSTATURL * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumSTATURL * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumSTATURL * This, IEnumSTATURL ** ppenum);
	HRESULT(STDMETHODCALLTYPE * SetFilter) (IEnumSTATURL * This, LPCOLESTR poszFilter, DWORD dwFlags);
	END_INTERFACE
}  IEnumSTATURLVtbl;
interface IEnumSTATURL
{
	CONST_VTBL struct IEnumSTATURLVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSTATURL_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSTATURL_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSTATURL_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumSTATURL_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumSTATURL_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumSTATURL_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumSTATURL_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#define IEnumSTATURL_SetFilter(This,poszFilter,dwFlags) ( (This)->lpVtbl -> SetFilter(This,poszFilter,dwFlags) )
#endif
#endif
#endif
#ifndef _LPURLHISTORYSTG_DEFINED
#define _LPURLHISTORYSTG_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0001_v0_0_s_ifspec;
#ifndef __IUrlHistoryStg_INTERFACE_DEFINED__
#define __IUrlHistoryStg_INTERFACE_DEFINED__
typedef IUrlHistoryStg *LPURLHISTORYSTG;
extern const IID IID_IUrlHistoryStg;
typedef struct IUrlHistoryStgVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUrlHistoryStg * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUrlHistoryStg * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUrlHistoryStg * This);
	HRESULT(STDMETHODCALLTYPE * AddUrl) (IUrlHistoryStg * This, LPCOLESTR pocsUrl, LPCOLESTR pocsTitle, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * DeleteUrl) (IUrlHistoryStg * This, LPCOLESTR pocsUrl, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * QueryUrl) (IUrlHistoryStg * This, LPCOLESTR pocsUrl, DWORD dwFlags, LPSTATURL lpSTATURL);
	HRESULT(STDMETHODCALLTYPE * BindToObject) (IUrlHistoryStg * This, LPCOLESTR pocsUrl, REFIID riid, void **ppvOut);
	HRESULT(STDMETHODCALLTYPE * EnumUrls) (IUrlHistoryStg * This, IEnumSTATURL ** ppEnum);
	END_INTERFACE
}  IUrlHistoryStgVtbl;
interface IUrlHistoryStg
{
	CONST_VTBL struct IUrlHistoryStgVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUrlHistoryStg_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUrlHistoryStg_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUrlHistoryStg_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUrlHistoryStg_AddUrl(This,pocsUrl,pocsTitle,dwFlags) ( (This)->lpVtbl -> AddUrl(This,pocsUrl,pocsTitle,dwFlags) )
#define IUrlHistoryStg_DeleteUrl(This,pocsUrl,dwFlags) ( (This)->lpVtbl -> DeleteUrl(This,pocsUrl,dwFlags) )
#define IUrlHistoryStg_QueryUrl(This,pocsUrl,dwFlags,lpSTATURL) ( (This)->lpVtbl -> QueryUrl(This,pocsUrl,dwFlags,lpSTATURL) )
#define IUrlHistoryStg_BindToObject(This,pocsUrl,riid,ppvOut) ( (This)->lpVtbl -> BindToObject(This,pocsUrl,riid,ppvOut) )
#define IUrlHistoryStg_EnumUrls(This,ppEnum) ( (This)->lpVtbl -> EnumUrls(This,ppEnum) )
#endif
#endif
#endif
#ifndef _LPURLHISTORYSTG2_DEFINED
#define _LPURLHISTORYSTG2_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0002_v0_0_s_ifspec;
#ifndef __IUrlHistoryStg2_INTERFACE_DEFINED__
#define __IUrlHistoryStg2_INTERFACE_DEFINED__
typedef IUrlHistoryStg2 *LPURLHISTORYSTG2;
extern const IID IID_IUrlHistoryStg2;
typedef struct IUrlHistoryStg2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUrlHistoryStg2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUrlHistoryStg2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUrlHistoryStg2 * This);
	HRESULT(STDMETHODCALLTYPE * AddUrl) (IUrlHistoryStg2 * This, LPCOLESTR pocsUrl, LPCOLESTR pocsTitle, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * DeleteUrl) (IUrlHistoryStg2 * This, LPCOLESTR pocsUrl, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * QueryUrl) (IUrlHistoryStg2 * This, LPCOLESTR pocsUrl, DWORD dwFlags, LPSTATURL lpSTATURL);
	HRESULT(STDMETHODCALLTYPE * BindToObject) (IUrlHistoryStg2 * This, LPCOLESTR pocsUrl, REFIID riid, void **ppvOut);
	HRESULT(STDMETHODCALLTYPE * EnumUrls) (IUrlHistoryStg2 * This, IEnumSTATURL ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * AddUrlAndNotify) (IUrlHistoryStg2 * This, LPCOLESTR pocsUrl, LPCOLESTR pocsTitle, DWORD dwFlags, BOOL fWriteHistory, IOleCommandTarget * poctNotify, IUnknown * punkISFolder);
	HRESULT(STDMETHODCALLTYPE * ClearHistory) (IUrlHistoryStg2 * This);
	END_INTERFACE
}  IUrlHistoryStg2Vtbl;
interface IUrlHistoryStg2
{
	CONST_VTBL struct IUrlHistoryStg2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUrlHistoryStg2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUrlHistoryStg2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUrlHistoryStg2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUrlHistoryStg2_AddUrl(This,pocsUrl,pocsTitle,dwFlags) ( (This)->lpVtbl -> AddUrl(This,pocsUrl,pocsTitle,dwFlags) )
#define IUrlHistoryStg2_DeleteUrl(This,pocsUrl,dwFlags) ( (This)->lpVtbl -> DeleteUrl(This,pocsUrl,dwFlags) )
#define IUrlHistoryStg2_QueryUrl(This,pocsUrl,dwFlags,lpSTATURL) ( (This)->lpVtbl -> QueryUrl(This,pocsUrl,dwFlags,lpSTATURL) )
#define IUrlHistoryStg2_BindToObject(This,pocsUrl,riid,ppvOut) ( (This)->lpVtbl -> BindToObject(This,pocsUrl,riid,ppvOut) )
#define IUrlHistoryStg2_EnumUrls(This,ppEnum) ( (This)->lpVtbl -> EnumUrls(This,ppEnum) )
#define IUrlHistoryStg2_AddUrlAndNotify(This,pocsUrl,pocsTitle,dwFlags,fWriteHistory,poctNotify,punkISFolder) ( (This)->lpVtbl -> AddUrlAndNotify(This,pocsUrl,pocsTitle,dwFlags,fWriteHistory,poctNotify,punkISFolder) )
#define IUrlHistoryStg2_ClearHistory(This) ( (This)->lpVtbl -> ClearHistory(This) )
#endif
#endif
#endif
#ifndef _LPURLHISTORYNOTIFY_DEFINED
#define _LPURLHISTORYNOTIFY_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0003_v0_0_s_ifspec;
#ifndef __IUrlHistoryNotify_INTERFACE_DEFINED__
#define __IUrlHistoryNotify_INTERFACE_DEFINED__
typedef IUrlHistoryNotify *LPURLHISTORYNOTIFY;
extern const IID IID_IUrlHistoryNotify;
typedef struct IUrlHistoryNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUrlHistoryNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUrlHistoryNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUrlHistoryNotify * This);
	HRESULT(STDMETHODCALLTYPE * QueryStatus) (IUrlHistoryNotify * This, const GUID * pguidCmdGroup, ULONG cCmds, OLECMD prgCmds[], OLECMDTEXT * pCmdText);
	HRESULT(STDMETHODCALLTYPE * Exec) (IUrlHistoryNotify * This, const GUID * pguidCmdGroup, DWORD nCmdID, DWORD nCmdexecopt, VARIANT * pvaIn, VARIANT * pvaOut);
	END_INTERFACE
}  IUrlHistoryNotifyVtbl;
interface IUrlHistoryNotify
{
	CONST_VTBL struct IUrlHistoryNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUrlHistoryNotify_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUrlHistoryNotify_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUrlHistoryNotify_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUrlHistoryNotify_QueryStatus(This,pguidCmdGroup,cCmds,prgCmds,pCmdText) ( (This)->lpVtbl -> QueryStatus(This,pguidCmdGroup,cCmds,prgCmds,pCmdText) )
#define IUrlHistoryNotify_Exec(This,pguidCmdGroup,nCmdID,nCmdexecopt,pvaIn,pvaOut) ( (This)->lpVtbl -> Exec(This,pguidCmdGroup,nCmdID,nCmdexecopt,pvaIn,pvaOut) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0004_v0_0_s_ifspec;
#endif
