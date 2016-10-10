/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmprealestate.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 15:11:50 2016
 \date		Modified on Mon Sep 19 15:11:50 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __wmprealestatepri_h__
#define __wmprealestatepri_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMPNodeRealEstate_FWD_DEFINED__
#define __IWMPNodeRealEstate_FWD_DEFINED__
typedef interface IWMPNodeRealEstate IWMPNodeRealEstate;
#endif
#ifndef __IWMPNodeRealEstateHost_FWD_DEFINED__
#define __IWMPNodeRealEstateHost_FWD_DEFINED__
typedef interface IWMPNodeRealEstateHost IWMPNodeRealEstateHost;
#endif
#ifndef __IWMPNodeWindowed_FWD_DEFINED__
#define __IWMPNodeWindowed_FWD_DEFINED__
typedef interface IWMPNodeWindowed IWMPNodeWindowed;
#endif
#ifndef __IWMPNodeWindowedHost_FWD_DEFINED__
#define __IWMPNodeWindowedHost_FWD_DEFINED__
typedef interface IWMPNodeWindowedHost IWMPNodeWindowedHost;
#endif
#ifndef __IWMPWindowMessageSink_FWD_DEFINED__
#define __IWMPWindowMessageSink_FWD_DEFINED__
typedef interface IWMPWindowMessageSink IWMPWindowMessageSink;
#endif
#ifndef __IWMPNodeWindowless_FWD_DEFINED__
#define __IWMPNodeWindowless_FWD_DEFINED__
typedef interface IWMPNodeWindowless IWMPNodeWindowless;
#endif
#ifndef __IWMPNodeWindowlessHost_FWD_DEFINED__
#define __IWMPNodeWindowlessHost_FWD_DEFINED__
typedef interface IWMPNodeWindowlessHost IWMPNodeWindowlessHost;
#endif
#ifndef __IWMPVideoRenderConfig_FWD_DEFINED__
#define __IWMPVideoRenderConfig_FWD_DEFINED__
typedef interface IWMPVideoRenderConfig IWMPVideoRenderConfig;
#endif
#ifndef __IWMPAudioRenderConfig_FWD_DEFINED__
#define __IWMPAudioRenderConfig_FWD_DEFINED__
typedef interface IWMPAudioRenderConfig IWMPAudioRenderConfig;
#endif
#ifndef __IWMPRenderConfig_FWD_DEFINED__
#define __IWMPRenderConfig_FWD_DEFINED__
typedef interface IWMPRenderConfig IWMPRenderConfig;
#endif
#include "unknwn.h"
#include "ocidl.h"
#include "mfidl.h"
extern RPC_IF_HANDLE __MIDL_itf_wmprealestatepri_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmprealestatepri_0000_0000_v0_0_s_ifspec;
#ifndef __IWMPNodeRealEstate_INTERFACE_DEFINED__
#define __IWMPNodeRealEstate_INTERFACE_DEFINED__
extern const IID IID_IWMPNodeRealEstate;
typedef struct IWMPNodeRealEstateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPNodeRealEstate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPNodeRealEstate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPNodeRealEstate * This);
	HRESULT(STDMETHODCALLTYPE * GetDesiredSize) (IWMPNodeRealEstate * This, LPSIZE pSize);
	HRESULT(STDMETHODCALLTYPE * SetRects) (IWMPNodeRealEstate * This, const RECT * pSrc, const RECT * pDest, const RECT * pClip);
	HRESULT(STDMETHODCALLTYPE * GetRects) (IWMPNodeRealEstate * This, RECT * pSrc, RECT * pDest, RECT * pClip);
	HRESULT(STDMETHODCALLTYPE * SetWindowless) (IWMPNodeRealEstate * This, BOOL fWindowless);
	HRESULT(STDMETHODCALLTYPE * GetWindowless) (IWMPNodeRealEstate * This, BOOL * pfWindowless);
	HRESULT(STDMETHODCALLTYPE * SetFullScreen) (IWMPNodeRealEstate * This, BOOL fFullScreen);
	HRESULT(STDMETHODCALLTYPE * GetFullScreen) (IWMPNodeRealEstate * This, BOOL * pfFullScreen);
	END_INTERFACE
}  IWMPNodeRealEstateVtbl;
interface IWMPNodeRealEstate
{
	CONST_VTBL struct IWMPNodeRealEstateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPNodeRealEstate_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPNodeRealEstate_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPNodeRealEstate_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPNodeRealEstate_GetDesiredSize(This,pSize) ( (This)->lpVtbl -> GetDesiredSize(This,pSize) )
#define IWMPNodeRealEstate_SetRects(This,pSrc,pDest,pClip) ( (This)->lpVtbl -> SetRects(This,pSrc,pDest,pClip) )
#define IWMPNodeRealEstate_GetRects(This,pSrc,pDest,pClip) ( (This)->lpVtbl -> GetRects(This,pSrc,pDest,pClip) )
#define IWMPNodeRealEstate_SetWindowless(This,fWindowless) ( (This)->lpVtbl -> SetWindowless(This,fWindowless) )
#define IWMPNodeRealEstate_GetWindowless(This,pfWindowless) ( (This)->lpVtbl -> GetWindowless(This,pfWindowless) )
#define IWMPNodeRealEstate_SetFullScreen(This,fFullScreen) ( (This)->lpVtbl -> SetFullScreen(This,fFullScreen) )
#define IWMPNodeRealEstate_GetFullScreen(This,pfFullScreen) ( (This)->lpVtbl -> GetFullScreen(This,pfFullScreen) )
#endif
#endif
#ifndef __IWMPNodeRealEstateHost_INTERFACE_DEFINED__
#define __IWMPNodeRealEstateHost_INTERFACE_DEFINED__
extern const IID IID_IWMPNodeRealEstateHost;
typedef struct IWMPNodeRealEstateHostVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPNodeRealEstateHost * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPNodeRealEstateHost * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPNodeRealEstateHost * This);
	HRESULT(STDMETHODCALLTYPE * OnDesiredSizeChange) (IWMPNodeRealEstateHost * This, LPSIZE pSize);
	HRESULT(STDMETHODCALLTYPE * OnFullScreenTransition) (IWMPNodeRealEstateHost * This, BOOL fFullScreen);
	END_INTERFACE
}  IWMPNodeRealEstateHostVtbl;
interface IWMPNodeRealEstateHost
{
	CONST_VTBL struct IWMPNodeRealEstateHostVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPNodeRealEstateHost_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPNodeRealEstateHost_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPNodeRealEstateHost_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPNodeRealEstateHost_OnDesiredSizeChange(This,pSize) ( (This)->lpVtbl -> OnDesiredSizeChange(This,pSize) )
#define IWMPNodeRealEstateHost_OnFullScreenTransition(This,fFullScreen) ( (This)->lpVtbl -> OnFullScreenTransition(This,fFullScreen) )
#endif
#endif
typedef LONG_PTR OLE_HWND;
extern RPC_IF_HANDLE __MIDL_itf_wmprealestatepri_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmprealestatepri_0000_0002_v0_0_s_ifspec;
#ifndef __IWMPNodeWindowed_INTERFACE_DEFINED__
#define __IWMPNodeWindowed_INTERFACE_DEFINED__
extern const IID IID_IWMPNodeWindowed;
typedef struct IWMPNodeWindowedVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPNodeWindowed * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPNodeWindowed * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPNodeWindowed * This);
	HRESULT(STDMETHODCALLTYPE * SetOwnerWindow) (IWMPNodeWindowed * This, OLE_HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * GetOwnerWindow) (IWMPNodeWindowed * This, OLE_HWND * phwnd);
	END_INTERFACE
}  IWMPNodeWindowedVtbl;
interface IWMPNodeWindowed
{
	CONST_VTBL struct IWMPNodeWindowedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPNodeWindowed_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPNodeWindowed_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPNodeWindowed_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPNodeWindowed_SetOwnerWindow(This,hwnd) ( (This)->lpVtbl -> SetOwnerWindow(This,hwnd) )
#define IWMPNodeWindowed_GetOwnerWindow(This,phwnd) ( (This)->lpVtbl -> GetOwnerWindow(This,phwnd) )
#endif
#endif
#ifndef __IWMPNodeWindowedHost_INTERFACE_DEFINED__
#define __IWMPNodeWindowedHost_INTERFACE_DEFINED__
extern const IID IID_IWMPNodeWindowedHost;
typedef struct IWMPNodeWindowedHostVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPNodeWindowedHost * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPNodeWindowedHost * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPNodeWindowedHost * This);
	HRESULT(STDMETHODCALLTYPE * OnWindowMessageFromRenderer) (IWMPNodeWindowedHost * This, UINT uMsg, WPARAM wparam, LPARAM lparam, LRESULT * plRet, BOOL * pfHandled);
	END_INTERFACE
}  IWMPNodeWindowedHostVtbl;
interface IWMPNodeWindowedHost
{
	CONST_VTBL struct IWMPNodeWindowedHostVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPNodeWindowedHost_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPNodeWindowedHost_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPNodeWindowedHost_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPNodeWindowedHost_OnWindowMessageFromRenderer(This,uMsg,wparam,lparam,plRet,pfHandled) ( (This)->lpVtbl -> OnWindowMessageFromRenderer(This,uMsg,wparam,lparam,plRet,pfHandled) )
#endif
#endif
#ifndef __IWMPWindowMessageSink_INTERFACE_DEFINED__
#define __IWMPWindowMessageSink_INTERFACE_DEFINED__
extern const IID IID_IWMPWindowMessageSink;
typedef struct IWMPWindowMessageSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPWindowMessageSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPWindowMessageSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPWindowMessageSink * This);
	HRESULT(STDMETHODCALLTYPE * OnWindowMessage) (IWMPWindowMessageSink * This, UINT uMsg, WPARAM wparam, LPARAM lparam, LRESULT * plRet, BOOL * pfHandled);
	END_INTERFACE
}  IWMPWindowMessageSinkVtbl;
interface IWMPWindowMessageSink
{
	CONST_VTBL struct IWMPWindowMessageSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPWindowMessageSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPWindowMessageSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPWindowMessageSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPWindowMessageSink_OnWindowMessage(This,uMsg,wparam,lparam,plRet,pfHandled) ( (This)->lpVtbl -> OnWindowMessage(This,uMsg,wparam,lparam,plRet,pfHandled) )
#endif
#endif
typedef LONG_PTR OLE_HDC;
extern RPC_IF_HANDLE __MIDL_itf_wmprealestatepri_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmprealestatepri_0000_0005_v0_0_s_ifspec;
#ifndef __IWMPNodeWindowless_INTERFACE_DEFINED__
#define __IWMPNodeWindowless_INTERFACE_DEFINED__
extern const IID IID_IWMPNodeWindowless;
typedef struct IWMPNodeWindowlessVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPNodeWindowless * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPNodeWindowless * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPNodeWindowless * This);
	HRESULT(STDMETHODCALLTYPE * OnWindowMessage) (IWMPNodeWindowless * This, UINT uMsg, WPARAM wparam, LPARAM lparam, LRESULT * plRet, BOOL * pfHandled);
	HRESULT(STDMETHODCALLTYPE * OnDraw) (IWMPNodeWindowless * This, OLE_HDC hdc, const RECT * prcDraw);
	END_INTERFACE
}  IWMPNodeWindowlessVtbl;
interface IWMPNodeWindowless
{
	CONST_VTBL struct IWMPNodeWindowlessVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPNodeWindowless_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPNodeWindowless_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPNodeWindowless_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPNodeWindowless_OnWindowMessage(This,uMsg,wparam,lparam,plRet,pfHandled) ( (This)->lpVtbl -> OnWindowMessage(This,uMsg,wparam,lparam,plRet,pfHandled) )
#define IWMPNodeWindowless_OnDraw(This,hdc,prcDraw) ( (This)->lpVtbl -> OnDraw(This,hdc,prcDraw) )
#endif
#endif
#ifndef __IWMPNodeWindowlessHost_INTERFACE_DEFINED__
#define __IWMPNodeWindowlessHost_INTERFACE_DEFINED__
extern const IID IID_IWMPNodeWindowlessHost;
typedef struct IWMPNodeWindowlessHostVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPNodeWindowlessHost * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPNodeWindowlessHost * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPNodeWindowlessHost * This);
	HRESULT(STDMETHODCALLTYPE * InvalidateRect) (IWMPNodeWindowlessHost * This, const RECT * prc, BOOL fErase);
	END_INTERFACE
}  IWMPNodeWindowlessHostVtbl;
interface IWMPNodeWindowlessHost
{
	CONST_VTBL struct IWMPNodeWindowlessHostVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPNodeWindowlessHost_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPNodeWindowlessHost_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPNodeWindowlessHost_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPNodeWindowlessHost_InvalidateRect(This,prc,fErase) ( (This)->lpVtbl -> InvalidateRect(This,prc,fErase) )
#endif
#endif
#ifndef __IWMPVideoRenderConfig_INTERFACE_DEFINED__
#define __IWMPVideoRenderConfig_INTERFACE_DEFINED__
extern const IID IID_IWMPVideoRenderConfig;
typedef struct IWMPVideoRenderConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPVideoRenderConfig * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPVideoRenderConfig * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPVideoRenderConfig * This);
	HRESULT(STDMETHODCALLTYPE * put_presenterActivate) (IWMPVideoRenderConfig * This, IMFActivate * pActivate);
	END_INTERFACE
}  IWMPVideoRenderConfigVtbl;
interface IWMPVideoRenderConfig
{
	CONST_VTBL struct IWMPVideoRenderConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPVideoRenderConfig_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPVideoRenderConfig_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPVideoRenderConfig_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPVideoRenderConfig_put_presenterActivate(This,pActivate) ( (This)->lpVtbl -> put_presenterActivate(This,pActivate) )
#endif
#endif
#ifndef __IWMPAudioRenderConfig_INTERFACE_DEFINED__
#define __IWMPAudioRenderConfig_INTERFACE_DEFINED__
extern const IID IID_IWMPAudioRenderConfig;
typedef struct IWMPAudioRenderConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPAudioRenderConfig * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPAudioRenderConfig * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPAudioRenderConfig * This);
	HRESULT(STDMETHODCALLTYPE * get_audioOutputDevice) (IWMPAudioRenderConfig * This, BSTR * pbstrOutputDevice);
	HRESULT(STDMETHODCALLTYPE * put_audioOutputDevice) (IWMPAudioRenderConfig * This, BSTR bstrOutputDevice);
	END_INTERFACE
}  IWMPAudioRenderConfigVtbl;
interface IWMPAudioRenderConfig
{
	CONST_VTBL struct IWMPAudioRenderConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPAudioRenderConfig_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPAudioRenderConfig_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPAudioRenderConfig_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPAudioRenderConfig_get_audioOutputDevice(This,pbstrOutputDevice) ( (This)->lpVtbl -> get_audioOutputDevice(This,pbstrOutputDevice) )
#define IWMPAudioRenderConfig_put_audioOutputDevice(This,bstrOutputDevice) ( (This)->lpVtbl -> put_audioOutputDevice(This,bstrOutputDevice) )
#endif
#endif
#ifndef __IWMPRenderConfig_INTERFACE_DEFINED__
#define __IWMPRenderConfig_INTERFACE_DEFINED__
extern const IID IID_IWMPRenderConfig;
typedef struct IWMPRenderConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPRenderConfig * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPRenderConfig * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPRenderConfig * This);
	HRESULT(STDMETHODCALLTYPE * put_inProcOnly) (IWMPRenderConfig * This, BOOL fInProc);
	HRESULT(STDMETHODCALLTYPE * get_inProcOnly) (IWMPRenderConfig * This, BOOL * pfInProc);
	END_INTERFACE
}  IWMPRenderConfigVtbl;
interface IWMPRenderConfig
{
	CONST_VTBL struct IWMPRenderConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPRenderConfig_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPRenderConfig_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPRenderConfig_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPRenderConfig_put_inProcOnly(This,fInProc) ( (This)->lpVtbl -> put_inProcOnly(This,fInProc) )
#define IWMPRenderConfig_get_inProcOnly(This,pfInProc) ( (This)->lpVtbl -> get_inProcOnly(This,pfInProc) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
#endif
