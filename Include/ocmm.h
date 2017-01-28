/*+@@file@@----------------------------------------------------------------*//*!
 \file		ocmm.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 23:34:47 2016
 \date		Modified on Sat Jul 16 23:34:47 2016
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
#ifndef __ocmm_h__
#define __ocmm_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITimerService_FWD_DEFINED__
#define __ITimerService_FWD_DEFINED__
typedef interface ITimerService ITimerService;
#endif
#ifndef __ITimer_FWD_DEFINED__
#define __ITimer_FWD_DEFINED__
typedef interface ITimer ITimer;
#endif
#ifndef __ITimerEx_FWD_DEFINED__
#define __ITimerEx_FWD_DEFINED__
typedef interface ITimerEx ITimerEx;
#endif
#ifndef __ITimerSink_FWD_DEFINED__
#define __ITimerSink_FWD_DEFINED__
typedef interface ITimerSink ITimerSink;
#endif
#ifndef __IMapMIMEToCLSID_FWD_DEFINED__
#define __IMapMIMEToCLSID_FWD_DEFINED__
typedef interface IMapMIMEToCLSID IMapMIMEToCLSID;
#endif
#ifndef __IImageDecodeFilter_FWD_DEFINED__
#define __IImageDecodeFilter_FWD_DEFINED__
typedef interface IImageDecodeFilter IImageDecodeFilter;
#endif
#ifndef __IImageDecodeEventSink_FWD_DEFINED__
#define __IImageDecodeEventSink_FWD_DEFINED__
typedef interface IImageDecodeEventSink IImageDecodeEventSink;
#endif
#ifndef __IImageDecodeEventSink2_FWD_DEFINED__
#define __IImageDecodeEventSink2_FWD_DEFINED__
typedef interface IImageDecodeEventSink2 IImageDecodeEventSink2;
#endif
#include <oaidl.h>
#include <oleidl.h>
#define SURFACE_LOCK_EXCLUSIVE        0x01
#define SURFACE_LOCK_ALLOW_DISCARD    0x02
#define SURFACE_LOCK_WAIT             0x04
#define E_SURFACE_NOSURFACE             0x8000C000L
#define E_SURFACE_UNKNOWN_FORMAT        0x8000C001L
#define E_SURFACE_NOTMYPOINTER          0x8000C002L
#define E_SURFACE_DISCARDED             0x8000C003L
#define E_SURFACE_NODC                  0x8000C004L
#define E_SURFACE_NOTMYDC               0x8000C005L
#define S_SURFACE_DISCARDED             0x0000C003L
typedef GUID BFID;
#ifndef RGBQUAD_DEFINED
#define RGBQUAD_DEFINED
typedef struct tagRGBQUAD RGBQUAD;
#endif
extern const GUID BFID_MONOCHROME;
extern const GUID BFID_RGB_4;
extern const GUID BFID_RGB_8;
extern const GUID BFID_RGB_555;
extern const GUID BFID_RGB_565;
extern const GUID BFID_RGB_24;
extern const GUID BFID_RGB_32;
extern const GUID BFID_RGBA_32;
extern const GUID BFID_GRAY_8;
extern const GUID BFID_GRAY_16;
#define SID_SDirectDraw3 IID_IDirectDraw3
#define COLOR_NO_TRANSPARENT 0xFFFFFFFF
#define IMGDECODE_EVENT_PROGRESS 0x01
#define IMGDECODE_EVENT_PALETTE 0x02
#define IMGDECODE_EVENT_BEGINBITS 0x04
#define IMGDECODE_EVENT_BITSCOMPLETE 0x08
#define IMGDECODE_EVENT_USEDDRAW 0x10
#define IMGDECODE_HINT_TOPDOWN 0x01
#define IMGDECODE_HINT_BOTTOMUP 0x02
#define IMGDECODE_HINT_FULLWIDTH 0x04
#define MAPMIME_DEFAULT 0
#define MAPMIME_CLSID 1
#define MAPMIME_DISABLE 2
#define MAPMIME_DEFAULT_ALWAYS 3
#define BFID_INDEXED_RGB_8 BFID_RGB_8
#define BFID_INDEXED_RGB_4 BFID_RGB_4
#define BFID_INDEXED_RGB_1 BFID_MONOCHROME
extern const GUID CLSID_IImageDecodeFilter;
extern const GUID NAMEDTIMER_DRAW;
#define TIMERMODE_NORMAL            0
#define TIMERMODE_VISIBILITYAWARE   1
extern RPC_IF_HANDLE __MIDL_itf_ocmm_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ocmm_0000_0000_v0_0_s_ifspec;
#ifndef __ITimerService_INTERFACE_DEFINED__
#define __ITimerService_INTERFACE_DEFINED__
extern const IID IID_ITimerService;
typedef struct ITimerServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITimerService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITimerService * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITimerService * This);
	HRESULT(STDMETHODCALLTYPE * CreateTimer) (ITimerService * This, ITimer * pReferenceTimer, ITimer ** ppNewTimer);
	HRESULT(STDMETHODCALLTYPE * GetNamedTimer) (ITimerService * This, REFGUID rguidName, ITimer ** ppTimer);
	HRESULT(STDMETHODCALLTYPE * SetNamedTimerReference) (ITimerService * This, REFGUID rguidName, ITimer * pReferenceTimer);
	END_INTERFACE
}  ITimerServiceVtbl;
interface ITimerService
{
	CONST_VTBL struct ITimerServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITimerService_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITimerService_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITimerService_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITimerService_CreateTimer(This,pReferenceTimer,ppNewTimer)( (This)->lpVtbl -> CreateTimer(This,pReferenceTimer,ppNewTimer) )
#define ITimerService_GetNamedTimer(This,rguidName,ppTimer)( (This)->lpVtbl -> GetNamedTimer(This,rguidName,ppTimer) )
#define ITimerService_SetNamedTimerReference(This,rguidName,pReferenceTimer)( (This)->lpVtbl -> SetNamedTimerReference(This,rguidName,pReferenceTimer) )
#endif
#endif
#ifndef __ITimer_INTERFACE_DEFINED__
#define __ITimer_INTERFACE_DEFINED__
extern const IID IID_ITimer;
typedef struct ITimerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITimer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITimer * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITimer * This);
	HRESULT(STDMETHODCALLTYPE * Advise) (ITimer * This, VARIANT vtimeMin, VARIANT vtimeMax, VARIANT vtimeInterval, DWORD dwFlags, ITimerSink * pTimerSink, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * Unadvise) (ITimer * This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE * Freeze) (ITimer * This, BOOL fFreeze);
	HRESULT(STDMETHODCALLTYPE * GetTime) (ITimer * This, VARIANT * pvtime);
	END_INTERFACE
}  ITimerVtbl;
interface ITimer
{
	CONST_VTBL struct ITimerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITimer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITimer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITimer_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITimer_Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie)( (This)->lpVtbl -> Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie) )
#define ITimer_Unadvise(This,dwCookie)( (This)->lpVtbl -> Unadvise(This,dwCookie) )
#define ITimer_Freeze(This,fFreeze)( (This)->lpVtbl -> Freeze(This,fFreeze) )
#define ITimer_GetTime(This,pvtime)( (This)->lpVtbl -> GetTime(This,pvtime) )
#endif
#endif
#ifndef __ITimerEx_INTERFACE_DEFINED__
#define __ITimerEx_INTERFACE_DEFINED__
extern const IID IID_ITimerEx;
typedef struct ITimerExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITimerEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITimerEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITimerEx * This);
	HRESULT(STDMETHODCALLTYPE * Advise) (ITimerEx * This, VARIANT vtimeMin, VARIANT vtimeMax, VARIANT vtimeInterval, DWORD dwFlags, ITimerSink * pTimerSink, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * Unadvise) (ITimerEx * This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE * Freeze) (ITimerEx * This, BOOL fFreeze);
	HRESULT(STDMETHODCALLTYPE * GetTime) (ITimerEx * This, VARIANT * pvtime);
	HRESULT(STDMETHODCALLTYPE * SetMode) (ITimerEx * This, DWORD dwMode);
	END_INTERFACE
}  ITimerExVtbl;
interface ITimerEx
{
	CONST_VTBL struct ITimerExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITimerEx_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITimerEx_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITimerEx_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITimerEx_Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie)( (This)->lpVtbl -> Advise(This,vtimeMin,vtimeMax,vtimeInterval,dwFlags,pTimerSink,pdwCookie) )
#define ITimerEx_Unadvise(This,dwCookie)( (This)->lpVtbl -> Unadvise(This,dwCookie) )
#define ITimerEx_Freeze(This,fFreeze)( (This)->lpVtbl -> Freeze(This,fFreeze) )
#define ITimerEx_GetTime(This,pvtime)( (This)->lpVtbl -> GetTime(This,pvtime) )
#define ITimerEx_SetMode(This,dwMode)( (This)->lpVtbl -> SetMode(This,dwMode) )
#endif
#endif
#ifndef __ITimerSink_INTERFACE_DEFINED__
#define __ITimerSink_INTERFACE_DEFINED__
extern const IID IID_ITimerSink;
typedef struct ITimerSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITimerSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITimerSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITimerSink * This);
	HRESULT(STDMETHODCALLTYPE * OnTimer) (ITimerSink * This, VARIANT vtimeAdvise);
	END_INTERFACE
}  ITimerSinkVtbl;
interface ITimerSink
{
	CONST_VTBL struct ITimerSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITimerSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITimerSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITimerSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITimerSink_OnTimer(This,vtimeAdvise)( (This)->lpVtbl -> OnTimer(This,vtimeAdvise) )
#endif
#endif
#define SID_STimerService IID_ITimerService
extern RPC_IF_HANDLE __MIDL_itf_ocmm_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ocmm_0000_0004_v0_0_s_ifspec;
#ifndef __IMapMIMEToCLSID_INTERFACE_DEFINED__
#define __IMapMIMEToCLSID_INTERFACE_DEFINED__
extern const IID IID_IMapMIMEToCLSID;
typedef struct IMapMIMEToCLSIDVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMapMIMEToCLSID * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMapMIMEToCLSID * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMapMIMEToCLSID * This);
	HRESULT(STDMETHODCALLTYPE * EnableDefaultMappings) (IMapMIMEToCLSID * This, BOOL bEnable);
	HRESULT(STDMETHODCALLTYPE * MapMIMEToCLSID) (IMapMIMEToCLSID * This, LPCOLESTR pszMIMEType, CLSID * pCLSID);
	HRESULT(STDMETHODCALLTYPE * SetMapping) (IMapMIMEToCLSID * This, LPCOLESTR pszMIMEType, DWORD dwMapMode, REFCLSID clsid);
	END_INTERFACE
}  IMapMIMEToCLSIDVtbl;
interface IMapMIMEToCLSID
{
	CONST_VTBL struct IMapMIMEToCLSIDVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMapMIMEToCLSID_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMapMIMEToCLSID_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMapMIMEToCLSID_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMapMIMEToCLSID_EnableDefaultMappings(This,bEnable)( (This)->lpVtbl -> EnableDefaultMappings(This,bEnable) )
#define IMapMIMEToCLSID_MapMIMEToCLSID(This,pszMIMEType,pCLSID)( (This)->lpVtbl -> MapMIMEToCLSID(This,pszMIMEType,pCLSID) )
#define IMapMIMEToCLSID_SetMapping(This,pszMIMEType,dwMapMode,clsid)( (This)->lpVtbl -> SetMapping(This,pszMIMEType,dwMapMode,clsid) )
#endif
#endif
#ifndef __IImageDecodeFilter_INTERFACE_DEFINED__
#define __IImageDecodeFilter_INTERFACE_DEFINED__
extern const IID IID_IImageDecodeFilter;
typedef struct IImageDecodeFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IImageDecodeFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IImageDecodeFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IImageDecodeFilter * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IImageDecodeFilter * This, IImageDecodeEventSink * pEventSink);
	HRESULT(STDMETHODCALLTYPE * Process) (IImageDecodeFilter * This, IStream * pStream);
	HRESULT(STDMETHODCALLTYPE * Terminate) (IImageDecodeFilter * This, HRESULT hrStatus);
	END_INTERFACE
}  IImageDecodeFilterVtbl;
interface IImageDecodeFilter
{
	CONST_VTBL struct IImageDecodeFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IImageDecodeFilter_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IImageDecodeFilter_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IImageDecodeFilter_Release(This)( (This)->lpVtbl -> Release(This) )
#define IImageDecodeFilter_Initialize(This,pEventSink)( (This)->lpVtbl -> Initialize(This,pEventSink) )
#define IImageDecodeFilter_Process(This,pStream)( (This)->lpVtbl -> Process(This,pStream) )
#define IImageDecodeFilter_Terminate(This,hrStatus)( (This)->lpVtbl -> Terminate(This,hrStatus) )
#endif
#endif
#ifndef __IImageDecodeEventSink_INTERFACE_DEFINED__
#define __IImageDecodeEventSink_INTERFACE_DEFINED__
extern const IID IID_IImageDecodeEventSink;
typedef struct IImageDecodeEventSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IImageDecodeEventSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IImageDecodeEventSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IImageDecodeEventSink * This);
	HRESULT(STDMETHODCALLTYPE * GetSurface) (IImageDecodeEventSink * This, LONG nWidth, LONG nHeight, REFGUID bfid, ULONG nPasses, DWORD dwHints, IUnknown ** ppSurface);
	HRESULT(STDMETHODCALLTYPE * OnBeginDecode) (IImageDecodeEventSink * This, DWORD * pdwEvents, ULONG * pnFormats, BFID ** ppFormats);
	HRESULT(STDMETHODCALLTYPE * OnBitsComplete) (IImageDecodeEventSink * This);
	HRESULT(STDMETHODCALLTYPE * OnDecodeComplete) (IImageDecodeEventSink * This, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE * OnPalette) (IImageDecodeEventSink * This);
	HRESULT(STDMETHODCALLTYPE * OnProgress) (IImageDecodeEventSink * This, RECT * pBounds, BOOL bComplete);
	END_INTERFACE
}  IImageDecodeEventSinkVtbl;
interface IImageDecodeEventSink
{
	CONST_VTBL struct IImageDecodeEventSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IImageDecodeEventSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IImageDecodeEventSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IImageDecodeEventSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define IImageDecodeEventSink_GetSurface(This,nWidth,nHeight,bfid,nPasses,dwHints,ppSurface)( (This)->lpVtbl -> GetSurface(This,nWidth,nHeight,bfid,nPasses,dwHints,ppSurface) )
#define IImageDecodeEventSink_OnBeginDecode(This,pdwEvents,pnFormats,ppFormats)( (This)->lpVtbl -> OnBeginDecode(This,pdwEvents,pnFormats,ppFormats) )
#define IImageDecodeEventSink_OnBitsComplete(This)( (This)->lpVtbl -> OnBitsComplete(This) )
#define IImageDecodeEventSink_OnDecodeComplete(This,hrStatus)( (This)->lpVtbl -> OnDecodeComplete(This,hrStatus) )
#define IImageDecodeEventSink_OnPalette(This)( (This)->lpVtbl -> OnPalette(This) )
#define IImageDecodeEventSink_OnProgress(This,pBounds,bComplete)( (This)->lpVtbl -> OnProgress(This,pBounds,bComplete) )
#endif
#endif
#ifndef __IImageDecodeEventSink2_INTERFACE_DEFINED__
#define __IImageDecodeEventSink2_INTERFACE_DEFINED__
extern const IID IID_IImageDecodeEventSink2;
typedef struct IImageDecodeEventSink2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IImageDecodeEventSink2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IImageDecodeEventSink2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IImageDecodeEventSink2 * This);
	HRESULT(STDMETHODCALLTYPE * GetSurface) (IImageDecodeEventSink2 * This, LONG nWidth, LONG nHeight, REFGUID bfid, ULONG nPasses, DWORD dwHints, IUnknown ** ppSurface);
	HRESULT(STDMETHODCALLTYPE * OnBeginDecode) (IImageDecodeEventSink2 * This, DWORD * pdwEvents, ULONG * pnFormats, BFID ** ppFormats);
	HRESULT(STDMETHODCALLTYPE * OnBitsComplete) (IImageDecodeEventSink2 * This);
	HRESULT(STDMETHODCALLTYPE * OnDecodeComplete) (IImageDecodeEventSink2 * This, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE * OnPalette) (IImageDecodeEventSink2 * This);
	HRESULT(STDMETHODCALLTYPE * OnProgress) (IImageDecodeEventSink2 * This, RECT * pBounds, BOOL bComplete);
	HRESULT(STDMETHODCALLTYPE * IsAlphaPremultRequired) (IImageDecodeEventSink2 * This, BOOL * pfPremultAlpha);
	END_INTERFACE
}  IImageDecodeEventSink2Vtbl;
interface IImageDecodeEventSink2
{
	CONST_VTBL struct IImageDecodeEventSink2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IImageDecodeEventSink2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IImageDecodeEventSink2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IImageDecodeEventSink2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IImageDecodeEventSink2_GetSurface(This,nWidth,nHeight,bfid,nPasses,dwHints,ppSurface)( (This)->lpVtbl -> GetSurface(This,nWidth,nHeight,bfid,nPasses,dwHints,ppSurface) )
#define IImageDecodeEventSink2_OnBeginDecode(This,pdwEvents,pnFormats,ppFormats)( (This)->lpVtbl -> OnBeginDecode(This,pdwEvents,pnFormats,ppFormats) )
#define IImageDecodeEventSink2_OnBitsComplete(This)( (This)->lpVtbl -> OnBitsComplete(This) )
#define IImageDecodeEventSink2_OnDecodeComplete(This,hrStatus)( (This)->lpVtbl -> OnDecodeComplete(This,hrStatus) )
#define IImageDecodeEventSink2_OnPalette(This)( (This)->lpVtbl -> OnPalette(This) )
#define IImageDecodeEventSink2_OnProgress(This,pBounds,bComplete)( (This)->lpVtbl -> OnProgress(This,pBounds,bComplete) )
#define IImageDecodeEventSink2_IsAlphaPremultRequired(This,pfPremultAlpha)( (This)->lpVtbl -> IsAlphaPremultRequired(This,pfPremultAlpha) )
#endif
#endif
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
