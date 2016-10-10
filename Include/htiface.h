/*+@@file@@----------------------------------------------------------------*//*!
 \file		htiface.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Fri Jul 15 12:52:28 2016
 \date		Modified on Fri Jul 15 12:52:28 2016
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
#ifndef __htiface_h__
#define __htiface_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITargetFrame_FWD_DEFINED__
#define __ITargetFrame_FWD_DEFINED__
typedef interface ITargetFrame ITargetFrame;
#endif
#ifndef __ITargetEmbedding_FWD_DEFINED__
#define __ITargetEmbedding_FWD_DEFINED__
typedef interface ITargetEmbedding ITargetEmbedding;
#endif
#ifndef __ITargetFramePriv_FWD_DEFINED__
#define __ITargetFramePriv_FWD_DEFINED__
typedef interface ITargetFramePriv ITargetFramePriv;
#endif
#ifndef __ITargetFramePriv2_FWD_DEFINED__
#define __ITargetFramePriv2_FWD_DEFINED__
typedef interface ITargetFramePriv2 ITargetFramePriv2;
#endif
#include "objidl.h"
#include "oleidl.h"
#include "urlmon.h"
#pragma comment(lib,"uuid.lib")
#ifndef _LPTARGETFRAME2_DEFINED
#include "htiframe.h"
#endif
extern const IID IID_ITargetFrame;
extern const IID IID_ITargetEmbedding;
extern const IID IID_ITargetFramePriv;
extern const IID IID_ITargetFramePriv2;
#ifndef _LPTARGETFRAME_DEFINED
#define _LPTARGETFRAME_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_htiface_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_htiface_0000_0000_v0_0_s_ifspec;
#ifndef __ITargetFrame_INTERFACE_DEFINED__
#define __ITargetFrame_INTERFACE_DEFINED__
typedef ITargetFrame *LPTARGETFRAME;
typedef enum __MIDL_ITargetFrame_0001
{
	NAVIGATEFRAME_FL_RECORD = 0x1,
	NAVIGATEFRAME_FL_POST = 0x2,
	NAVIGATEFRAME_FL_NO_DOC_CACHE = 0x4,
	NAVIGATEFRAME_FL_NO_IMAGE_CACHE = 0x8,
	NAVIGATEFRAME_FL_AUTH_FAIL_CACHE_OK = 0x10,
	NAVIGATEFRAME_FL_SENDING_FROM_FORM = 0x20,
	NAVIGATEFRAME_FL_REALLY_SENDING_FROM_FORM = 0x40
} NAVIGATEFRAME_FLAGS;
typedef struct tagNavigateData
{
	ULONG ulTarget;
	ULONG ulURL;
	ULONG ulRefURL;
	ULONG ulPostData;
	DWORD dwFlags;
} NAVIGATEDATA;
extern const IID IID_ITargetFrame;
typedef struct ITargetFrameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITargetFrame * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITargetFrame * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITargetFrame * This);
	HRESULT(STDMETHODCALLTYPE * SetFrameName) (ITargetFrame * This, LPCWSTR pszFrameName);
	HRESULT(STDMETHODCALLTYPE * GetFrameName) (ITargetFrame * This, LPWSTR * ppszFrameName);
	HRESULT(STDMETHODCALLTYPE * GetParentFrame) (ITargetFrame * This, IUnknown ** ppunkParent);
	HRESULT(STDMETHODCALLTYPE * FindFrame) (ITargetFrame * This, LPCWSTR pszTargetName, IUnknown * ppunkContextFrame, DWORD dwFlags, IUnknown ** ppunkTargetFrame);
	HRESULT(STDMETHODCALLTYPE * SetFrameSrc) (ITargetFrame * This, LPCWSTR pszFrameSrc);
	HRESULT(STDMETHODCALLTYPE * GetFrameSrc) (ITargetFrame * This, LPWSTR * ppszFrameSrc);
	HRESULT(STDMETHODCALLTYPE * GetFramesContainer) (ITargetFrame * This, IOleContainer ** ppContainer);
	HRESULT(STDMETHODCALLTYPE * SetFrameOptions) (ITargetFrame * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetFrameOptions) (ITargetFrame * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * SetFrameMargins) (ITargetFrame * This, DWORD dwWidth, DWORD dwHeight);
	HRESULT(STDMETHODCALLTYPE * GetFrameMargins) (ITargetFrame * This, DWORD * pdwWidth, DWORD * pdwHeight);
	HRESULT(STDMETHODCALLTYPE * RemoteNavigate) (ITargetFrame * This, ULONG cLength, ULONG * pulData);
	HRESULT(STDMETHODCALLTYPE * OnChildFrameActivate) (ITargetFrame * This, IUnknown * pUnkChildFrame);
	HRESULT(STDMETHODCALLTYPE * OnChildFrameDeactivate) (ITargetFrame * This, IUnknown * pUnkChildFrame);
	END_INTERFACE
}  ITargetFrameVtbl;
interface ITargetFrame
{
	CONST_VTBL struct ITargetFrameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITargetFrame_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITargetFrame_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITargetFrame_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITargetFrame_SetFrameName(This,pszFrameName)( (This)->lpVtbl -> SetFrameName(This,pszFrameName) )
#define ITargetFrame_GetFrameName(This,ppszFrameName)( (This)->lpVtbl -> GetFrameName(This,ppszFrameName) )
#define ITargetFrame_GetParentFrame(This,ppunkParent)( (This)->lpVtbl -> GetParentFrame(This,ppunkParent) )
#define ITargetFrame_FindFrame(This,pszTargetName,ppunkContextFrame,dwFlags,ppunkTargetFrame)( (This)->lpVtbl -> FindFrame(This,pszTargetName,ppunkContextFrame,dwFlags,ppunkTargetFrame) )
#define ITargetFrame_SetFrameSrc(This,pszFrameSrc)( (This)->lpVtbl -> SetFrameSrc(This,pszFrameSrc) )
#define ITargetFrame_GetFrameSrc(This,ppszFrameSrc)( (This)->lpVtbl -> GetFrameSrc(This,ppszFrameSrc) )
#define ITargetFrame_GetFramesContainer(This,ppContainer)( (This)->lpVtbl -> GetFramesContainer(This,ppContainer) )
#define ITargetFrame_SetFrameOptions(This,dwFlags)( (This)->lpVtbl -> SetFrameOptions(This,dwFlags) )
#define ITargetFrame_GetFrameOptions(This,pdwFlags)( (This)->lpVtbl -> GetFrameOptions(This,pdwFlags) )
#define ITargetFrame_SetFrameMargins(This,dwWidth,dwHeight)( (This)->lpVtbl -> SetFrameMargins(This,dwWidth,dwHeight) )
#define ITargetFrame_GetFrameMargins(This,pdwWidth,pdwHeight)( (This)->lpVtbl -> GetFrameMargins(This,pdwWidth,pdwHeight) )
#define ITargetFrame_RemoteNavigate(This,cLength,pulData)( (This)->lpVtbl -> RemoteNavigate(This,cLength,pulData) )
#define ITargetFrame_OnChildFrameActivate(This,pUnkChildFrame)( (This)->lpVtbl -> OnChildFrameActivate(This,pUnkChildFrame) )
#define ITargetFrame_OnChildFrameDeactivate(This,pUnkChildFrame)( (This)->lpVtbl -> OnChildFrameDeactivate(This,pUnkChildFrame) )
#endif
#endif
#ifndef __ITargetEmbedding_INTERFACE_DEFINED__
#define __ITargetEmbedding_INTERFACE_DEFINED__
typedef ITargetEmbedding *LPTARGETEMBEDDING;
extern const IID IID_ITargetEmbedding;
typedef struct ITargetEmbeddingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITargetEmbedding * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITargetEmbedding * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITargetEmbedding * This);
	HRESULT(STDMETHODCALLTYPE * GetTargetFrame) (ITargetEmbedding * This, ITargetFrame ** ppTargetFrame);
	END_INTERFACE
}  ITargetEmbeddingVtbl;
interface ITargetEmbedding
{
	CONST_VTBL struct ITargetEmbeddingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITargetEmbedding_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITargetEmbedding_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITargetEmbedding_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITargetEmbedding_GetTargetFrame(This,ppTargetFrame)( (This)->lpVtbl -> GetTargetFrame(This,ppTargetFrame) )
#endif
#endif
#ifndef __ITargetFramePriv_INTERFACE_DEFINED__
#define __ITargetFramePriv_INTERFACE_DEFINED__
typedef ITargetFramePriv *LPTARGETFRAMEPRIV;
extern const IID IID_ITargetFramePriv;
typedef struct ITargetFramePrivVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITargetFramePriv * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITargetFramePriv * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITargetFramePriv * This);
	HRESULT(STDMETHODCALLTYPE * FindFrameDownwards) (ITargetFramePriv * This, LPCWSTR pszTargetName, DWORD dwFlags, IUnknown ** ppunkTargetFrame);
	HRESULT(STDMETHODCALLTYPE * FindFrameInContext) (ITargetFramePriv * This, LPCWSTR pszTargetName, IUnknown * punkContextFrame, DWORD dwFlags, IUnknown ** ppunkTargetFrame);
	HRESULT(STDMETHODCALLTYPE * OnChildFrameActivate) (ITargetFramePriv * This, IUnknown * pUnkChildFrame);
	HRESULT(STDMETHODCALLTYPE * OnChildFrameDeactivate) (ITargetFramePriv * This, IUnknown * pUnkChildFrame);
	HRESULT(STDMETHODCALLTYPE * NavigateHack) (ITargetFramePriv * This, DWORD grfHLNF, LPBC pbc, IBindStatusCallback * pibsc, LPCWSTR pszTargetName, LPCWSTR pszUrl, LPCWSTR pszLocation);
	HRESULT(STDMETHODCALLTYPE * FindBrowserByIndex) (ITargetFramePriv * This, DWORD dwID, IUnknown ** ppunkBrowser);
	END_INTERFACE
}  ITargetFramePrivVtbl;
interface ITargetFramePriv
{
	CONST_VTBL struct ITargetFramePrivVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITargetFramePriv_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITargetFramePriv_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITargetFramePriv_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITargetFramePriv_FindFrameDownwards(This,pszTargetName,dwFlags,ppunkTargetFrame)( (This)->lpVtbl -> FindFrameDownwards(This,pszTargetName,dwFlags,ppunkTargetFrame) )
#define ITargetFramePriv_FindFrameInContext(This,pszTargetName,punkContextFrame,dwFlags,ppunkTargetFrame)( (This)->lpVtbl -> FindFrameInContext(This,pszTargetName,punkContextFrame,dwFlags,ppunkTargetFrame) )
#define ITargetFramePriv_OnChildFrameActivate(This,pUnkChildFrame)( (This)->lpVtbl -> OnChildFrameActivate(This,pUnkChildFrame) )
#define ITargetFramePriv_OnChildFrameDeactivate(This,pUnkChildFrame)( (This)->lpVtbl -> OnChildFrameDeactivate(This,pUnkChildFrame) )
#define ITargetFramePriv_NavigateHack(This,grfHLNF,pbc,pibsc,pszTargetName,pszUrl,pszLocation)( (This)->lpVtbl -> NavigateHack(This,grfHLNF,pbc,pibsc,pszTargetName,pszUrl,pszLocation) )
#define ITargetFramePriv_FindBrowserByIndex(This,dwID,ppunkBrowser)( (This)->lpVtbl -> FindBrowserByIndex(This,dwID,ppunkBrowser) )
#endif
#endif
#ifndef __ITargetFramePriv2_INTERFACE_DEFINED__
#define __ITargetFramePriv2_INTERFACE_DEFINED__
typedef ITargetFramePriv2 *LPTARGETFRAMEPRIV2;
extern const IID IID_ITargetFramePriv2;
typedef struct ITargetFramePriv2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITargetFramePriv2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITargetFramePriv2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITargetFramePriv2 * This);
	HRESULT(STDMETHODCALLTYPE * FindFrameDownwards) (ITargetFramePriv2 * This, LPCWSTR pszTargetName, DWORD dwFlags, IUnknown ** ppunkTargetFrame);
	HRESULT(STDMETHODCALLTYPE * FindFrameInContext) (ITargetFramePriv2 * This, LPCWSTR pszTargetName, IUnknown * punkContextFrame, DWORD dwFlags, IUnknown ** ppunkTargetFrame);
	HRESULT(STDMETHODCALLTYPE * OnChildFrameActivate) (ITargetFramePriv2 * This, IUnknown * pUnkChildFrame);
	HRESULT(STDMETHODCALLTYPE * OnChildFrameDeactivate) (ITargetFramePriv2 * This, IUnknown * pUnkChildFrame);
	HRESULT(STDMETHODCALLTYPE * NavigateHack) (ITargetFramePriv2 * This, DWORD grfHLNF, LPBC pbc, IBindStatusCallback * pibsc, LPCWSTR pszTargetName, LPCWSTR pszUrl, LPCWSTR pszLocation);
	HRESULT(STDMETHODCALLTYPE * FindBrowserByIndex) (ITargetFramePriv2 * This, DWORD dwID, IUnknown ** ppunkBrowser);
	HRESULT(STDMETHODCALLTYPE * AggregatedNavigation2) (ITargetFramePriv2 * This, DWORD grfHLNF, LPBC pbc, IBindStatusCallback * pibsc, LPCWSTR pszTargetName, IUri * pUri, LPCWSTR pszLocation);
	END_INTERFACE
}  ITargetFramePriv2Vtbl;
interface ITargetFramePriv2
{
	CONST_VTBL struct ITargetFramePriv2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITargetFramePriv2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITargetFramePriv2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITargetFramePriv2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITargetFramePriv2_FindFrameDownwards(This,pszTargetName,dwFlags,ppunkTargetFrame)( (This)->lpVtbl -> FindFrameDownwards(This,pszTargetName,dwFlags,ppunkTargetFrame) )
#define ITargetFramePriv2_FindFrameInContext(This,pszTargetName,punkContextFrame,dwFlags,ppunkTargetFrame)( (This)->lpVtbl -> FindFrameInContext(This,pszTargetName,punkContextFrame,dwFlags,ppunkTargetFrame) )
#define ITargetFramePriv2_OnChildFrameActivate(This,pUnkChildFrame)( (This)->lpVtbl -> OnChildFrameActivate(This,pUnkChildFrame) )
#define ITargetFramePriv2_OnChildFrameDeactivate(This,pUnkChildFrame)( (This)->lpVtbl -> OnChildFrameDeactivate(This,pUnkChildFrame) )
#define ITargetFramePriv2_NavigateHack(This,grfHLNF,pbc,pibsc,pszTargetName,pszUrl,pszLocation)( (This)->lpVtbl -> NavigateHack(This,grfHLNF,pbc,pibsc,pszTargetName,pszUrl,pszLocation) )
#define ITargetFramePriv2_FindBrowserByIndex(This,dwID,ppunkBrowser)( (This)->lpVtbl -> FindBrowserByIndex(This,dwID,ppunkBrowser) )
#define ITargetFramePriv2_AggregatedNavigation2(This,grfHLNF,pbc,pibsc,pszTargetName,pUri,pszLocation)( (This)->lpVtbl -> AggregatedNavigation2(This,grfHLNF,pbc,pibsc,pszTargetName,pUri,pszLocation) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_htiface_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_htiface_0000_0004_v0_0_s_ifspec;
#endif
