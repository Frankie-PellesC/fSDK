/*+@@file@@----------------------------------------------------------------*//*!
 \file		htiframe.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Fri Jul 15 15:03:38 2016
 \date		Modified on Fri Jul 15 15:03:38 2016
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
#ifndef __htiframe_h__
#define __htiframe_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITargetNotify_FWD_DEFINED__
#define __ITargetNotify_FWD_DEFINED__
typedef interface ITargetNotify ITargetNotify;
#endif
#ifndef __ITargetNotify2_FWD_DEFINED__
#define __ITargetNotify2_FWD_DEFINED__
typedef interface ITargetNotify2 ITargetNotify2;
#endif
#ifndef __ITargetFrame2_FWD_DEFINED__
#define __ITargetFrame2_FWD_DEFINED__
typedef interface ITargetFrame2 ITargetFrame2;
#endif
#ifndef __ITargetContainer_FWD_DEFINED__
#define __ITargetContainer_FWD_DEFINED__
typedef interface ITargetContainer ITargetContainer;
#endif
#include <objidl.h>
#include <oleidl.h>
#pragma comment(lib,"uuid.lib")
extern const IID IID_ITargetFrame2;
extern const IID IID_ITargetContainer;
#ifndef _LPTARGETFRAME2_DEFINED
#define _LPTARGETFRAME2_DEFINED
#define TF_NAVIGATE 0x7FAEABAC
#define TARGET_NOTIFY_OBJECT_NAME L"863a99a0-21bc-11d0-82b4-00a0c90c29c5"
extern RPC_IF_HANDLE __MIDL_itf_htiframe_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_htiframe_0000_0000_v0_0_s_ifspec;
#ifndef __ITargetNotify_INTERFACE_DEFINED__
#define __ITargetNotify_INTERFACE_DEFINED__
typedef ITargetNotify *LPTARGETNOTIFY;
extern const IID IID_ITargetNotify;
typedef struct ITargetNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITargetNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITargetNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITargetNotify * This);
	HRESULT(STDMETHODCALLTYPE * OnCreate) (ITargetNotify * This, IUnknown * pUnkDestination, ULONG cbCookie);
	HRESULT(STDMETHODCALLTYPE * OnReuse) (ITargetNotify * This, IUnknown * pUnkDestination);
	END_INTERFACE
}  ITargetNotifyVtbl;
interface ITargetNotify
{
	CONST_VTBL struct ITargetNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITargetNotify_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITargetNotify_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITargetNotify_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITargetNotify_OnCreate(This,pUnkDestination,cbCookie)( (This)->lpVtbl -> OnCreate(This,pUnkDestination,cbCookie) )
#define ITargetNotify_OnReuse(This,pUnkDestination)( (This)->lpVtbl -> OnReuse(This,pUnkDestination) )
#endif
#endif
#ifndef __ITargetNotify2_INTERFACE_DEFINED__
#define __ITargetNotify2_INTERFACE_DEFINED__
typedef ITargetNotify2 *LPTARGETNOTIFY2;
extern const IID IID_ITargetNotify2;
typedef struct ITargetNotify2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITargetNotify2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITargetNotify2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITargetNotify2 * This);
	HRESULT(STDMETHODCALLTYPE * OnCreate) (ITargetNotify2 * This, IUnknown * pUnkDestination, ULONG cbCookie);
	HRESULT(STDMETHODCALLTYPE * OnReuse) (ITargetNotify2 * This, IUnknown * pUnkDestination);
	HRESULT(STDMETHODCALLTYPE * GetOptionString) (ITargetNotify2 * This, BSTR * pbstrOptions);
	END_INTERFACE
}  ITargetNotify2Vtbl;
interface ITargetNotify2
{
	CONST_VTBL struct ITargetNotify2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITargetNotify2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITargetNotify2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITargetNotify2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITargetNotify2_OnCreate(This,pUnkDestination,cbCookie)( (This)->lpVtbl -> OnCreate(This,pUnkDestination,cbCookie) )
#define ITargetNotify2_OnReuse(This,pUnkDestination)( (This)->lpVtbl -> OnReuse(This,pUnkDestination) )
#define ITargetNotify2_GetOptionString(This,pbstrOptions)( (This)->lpVtbl -> GetOptionString(This,pbstrOptions) )
#endif
#endif
#ifndef __ITargetFrame2_INTERFACE_DEFINED__
#define __ITargetFrame2_INTERFACE_DEFINED__
typedef ITargetFrame2 *LPTARGETFRAME2;
typedef enum __MIDL_ITargetFrame2_0001
{
	FINDFRAME_NONE = 0,
	FINDFRAME_JUSTTESTEXISTENCE = 1,
	FINDFRAME_INTERNAL = 0x80000000
} FINDFRAME_FLAGS;
typedef enum __MIDL_ITargetFrame2_0002
{
	FRAMEOPTIONS_SCROLL_YES = 0x1,
	FRAMEOPTIONS_SCROLL_NO = 0x2,
	FRAMEOPTIONS_SCROLL_AUTO = 0x4,
	FRAMEOPTIONS_NORESIZE = 0x8,
	FRAMEOPTIONS_NO3DBORDER = 0x10,
	FRAMEOPTIONS_DESKTOP = 0x20,
	FRAMEOPTIONS_BROWSERBAND = 0x40
} FRAMEOPTIONS_FLAGS;
extern const IID IID_ITargetFrame2;
typedef struct ITargetFrame2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITargetFrame2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITargetFrame2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITargetFrame2 * This);
	HRESULT(STDMETHODCALLTYPE * SetFrameName) (ITargetFrame2 * This, LPCWSTR pszFrameName);
	HRESULT(STDMETHODCALLTYPE * GetFrameName) (ITargetFrame2 * This, LPWSTR * ppszFrameName);
	HRESULT(STDMETHODCALLTYPE * GetParentFrame) (ITargetFrame2 * This, IUnknown ** ppunkParent);
	HRESULT(STDMETHODCALLTYPE * SetFrameSrc) (ITargetFrame2 * This, LPCWSTR pszFrameSrc);
	HRESULT(STDMETHODCALLTYPE * GetFrameSrc) (ITargetFrame2 * This, LPWSTR * ppszFrameSrc);
	HRESULT(STDMETHODCALLTYPE * GetFramesContainer) (ITargetFrame2 * This, IOleContainer ** ppContainer);
	HRESULT(STDMETHODCALLTYPE * SetFrameOptions) (ITargetFrame2 * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetFrameOptions) (ITargetFrame2 * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * SetFrameMargins) (ITargetFrame2 * This, DWORD dwWidth, DWORD dwHeight);
	HRESULT(STDMETHODCALLTYPE * GetFrameMargins) (ITargetFrame2 * This, DWORD * pdwWidth, DWORD * pdwHeight);
	HRESULT(STDMETHODCALLTYPE * FindFrame) (ITargetFrame2 * This, LPCWSTR pszTargetName, DWORD dwFlags, IUnknown ** ppunkTargetFrame);
	HRESULT(STDMETHODCALLTYPE * GetTargetAlias) (ITargetFrame2 * This, LPCWSTR pszTargetName, LPWSTR * ppszTargetAlias);
	END_INTERFACE
}  ITargetFrame2Vtbl;
interface ITargetFrame2
{
	CONST_VTBL struct ITargetFrame2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITargetFrame2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITargetFrame2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITargetFrame2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITargetFrame2_SetFrameName(This,pszFrameName)( (This)->lpVtbl -> SetFrameName(This,pszFrameName) )
#define ITargetFrame2_GetFrameName(This,ppszFrameName)( (This)->lpVtbl -> GetFrameName(This,ppszFrameName) )
#define ITargetFrame2_GetParentFrame(This,ppunkParent)( (This)->lpVtbl -> GetParentFrame(This,ppunkParent) )
#define ITargetFrame2_SetFrameSrc(This,pszFrameSrc)( (This)->lpVtbl -> SetFrameSrc(This,pszFrameSrc) )
#define ITargetFrame2_GetFrameSrc(This,ppszFrameSrc)( (This)->lpVtbl -> GetFrameSrc(This,ppszFrameSrc) )
#define ITargetFrame2_GetFramesContainer(This,ppContainer)( (This)->lpVtbl -> GetFramesContainer(This,ppContainer) )
#define ITargetFrame2_SetFrameOptions(This,dwFlags)( (This)->lpVtbl -> SetFrameOptions(This,dwFlags) )
#define ITargetFrame2_GetFrameOptions(This,pdwFlags)( (This)->lpVtbl -> GetFrameOptions(This,pdwFlags) )
#define ITargetFrame2_SetFrameMargins(This,dwWidth,dwHeight)( (This)->lpVtbl -> SetFrameMargins(This,dwWidth,dwHeight) )
#define ITargetFrame2_GetFrameMargins(This,pdwWidth,pdwHeight)( (This)->lpVtbl -> GetFrameMargins(This,pdwWidth,pdwHeight) )
#define ITargetFrame2_FindFrame(This,pszTargetName,dwFlags,ppunkTargetFrame)( (This)->lpVtbl -> FindFrame(This,pszTargetName,dwFlags,ppunkTargetFrame) )
#define ITargetFrame2_GetTargetAlias(This,pszTargetName,ppszTargetAlias)( (This)->lpVtbl -> GetTargetAlias(This,pszTargetName,ppszTargetAlias) )
#endif
#endif
#ifndef __ITargetContainer_INTERFACE_DEFINED__
#define __ITargetContainer_INTERFACE_DEFINED__
typedef ITargetContainer *LPTARGETCONTAINER;
extern const IID IID_ITargetContainer;
typedef struct ITargetContainerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITargetContainer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITargetContainer * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITargetContainer * This);
	HRESULT(STDMETHODCALLTYPE * GetFrameUrl) (ITargetContainer * This, LPWSTR * ppszFrameSrc);
	HRESULT(STDMETHODCALLTYPE * GetFramesContainer) (ITargetContainer * This, IOleContainer ** ppContainer);
	END_INTERFACE
}  ITargetContainerVtbl;
interface ITargetContainer
{
	CONST_VTBL struct ITargetContainerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITargetContainer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITargetContainer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITargetContainer_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITargetContainer_GetFrameUrl(This,ppszFrameSrc)( (This)->lpVtbl -> GetFrameUrl(This,ppszFrameSrc) )
#define ITargetContainer_GetFramesContainer(This,ppContainer)( (This)->lpVtbl -> GetFramesContainer(This,ppContainer) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_htiframe_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_htiframe_0000_0004_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif
