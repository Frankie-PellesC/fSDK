/*+@@file@@----------------------------------------------------------------*//*!
 \file		EmptyVC.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  9 20:07:22 2016
 \date		Modified on Sat Jul  9 20:07:22 2016
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
#ifndef __emptyvc_h__
#define __emptyvc_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IEmptyVolumeCacheCallBack_FWD_DEFINED__
#define __IEmptyVolumeCacheCallBack_FWD_DEFINED__
typedef interface IEmptyVolumeCacheCallBack IEmptyVolumeCacheCallBack;
#endif
#ifndef __IEmptyVolumeCache_FWD_DEFINED__
#define __IEmptyVolumeCache_FWD_DEFINED__
typedef interface IEmptyVolumeCache IEmptyVolumeCache;
#endif
#ifndef __IEmptyVolumeCache2_FWD_DEFINED__
#define __IEmptyVolumeCache2_FWD_DEFINED__
typedef interface IEmptyVolumeCache2 IEmptyVolumeCache2;
#endif
#include "objidl.h"
#include "oleidl.h"
#include "oaidl.h"
#pragma comment(lib,"uuid.lib")
#define EVCF_HASSETTINGS             0x0001
#define EVCF_ENABLEBYDEFAULT         0x0002
#define EVCF_REMOVEFROMLIST          0x0004
#define EVCF_ENABLEBYDEFAULT_AUTO    0x0008
#define EVCF_DONTSHOWIFZERO          0x0010
#define EVCF_SETTINGSMODE            0x0020
#define EVCF_OUTOFDISKSPACE          0x0040
#define EVCCBF_LASTNOTIFICATION  0x0001
#ifndef _LPEMPTYVOLUMECACHECALLBACK_DEFINED
#define _LPEMPTYVOLUMECACHECALLBACK_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_emptyvc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_emptyvc_0000_0000_v0_0_s_ifspec;
#ifndef __IEmptyVolumeCacheCallBack_INTERFACE_DEFINED__
#define __IEmptyVolumeCacheCallBack_INTERFACE_DEFINED__
typedef IEmptyVolumeCacheCallBack *LPEMPTYVOLUMECACHECALLBACK;
extern const IID IID_IEmptyVolumeCacheCallBack;
typedef struct IEmptyVolumeCacheCallBackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEmptyVolumeCacheCallBack * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEmptyVolumeCacheCallBack * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEmptyVolumeCacheCallBack * This);
	HRESULT(STDMETHODCALLTYPE * ScanProgress) (IEmptyVolumeCacheCallBack * This, DWORDLONG dwlSpaceUsed, DWORD dwFlags, LPCWSTR pcwszStatus);
	HRESULT(STDMETHODCALLTYPE * PurgeProgress) (IEmptyVolumeCacheCallBack * This, DWORDLONG dwlSpaceFreed, DWORDLONG dwlSpaceToFree, DWORD dwFlags, LPCWSTR pcwszStatus);
	END_INTERFACE
}  IEmptyVolumeCacheCallBackVtbl;
interface IEmptyVolumeCacheCallBack
{
	CONST_VTBL struct IEmptyVolumeCacheCallBackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEmptyVolumeCacheCallBack_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEmptyVolumeCacheCallBack_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEmptyVolumeCacheCallBack_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEmptyVolumeCacheCallBack_ScanProgress(This,dwlSpaceUsed,dwFlags,pcwszStatus)( (This)->lpVtbl -> ScanProgress(This,dwlSpaceUsed,dwFlags,pcwszStatus) )
#define IEmptyVolumeCacheCallBack_PurgeProgress(This,dwlSpaceFreed,dwlSpaceToFree,dwFlags,pcwszStatus)( (This)->lpVtbl -> PurgeProgress(This,dwlSpaceFreed,dwlSpaceToFree,dwFlags,pcwszStatus) )
#endif
#endif
#endif
#ifndef _LPEMPTYVOLUMECACHE_DEFINED
#define _LPEMPTYVOLUMECACHE_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_emptyvc_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_emptyvc_0000_0001_v0_0_s_ifspec;
#ifndef __IEmptyVolumeCache_INTERFACE_DEFINED__
#define __IEmptyVolumeCache_INTERFACE_DEFINED__
typedef IEmptyVolumeCache *LPEMPTYVOLUMECACHE;
extern const IID IID_IEmptyVolumeCache;
typedef struct IEmptyVolumeCacheVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEmptyVolumeCache * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEmptyVolumeCache * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEmptyVolumeCache * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IEmptyVolumeCache * This, HKEY hkRegKey, LPCWSTR pcwszVolume, LPWSTR * ppwszDisplayName, LPWSTR * ppwszDescription, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * GetSpaceUsed) (IEmptyVolumeCache * This, DWORDLONG * pdwlSpaceUsed, IEmptyVolumeCacheCallBack * picb);
	HRESULT(STDMETHODCALLTYPE * Purge) (IEmptyVolumeCache * This, DWORDLONG dwlSpaceToFree, IEmptyVolumeCacheCallBack * picb);
	HRESULT(STDMETHODCALLTYPE * ShowProperties) (IEmptyVolumeCache * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * Deactivate) (IEmptyVolumeCache * This, DWORD * pdwFlags);
	END_INTERFACE
}  IEmptyVolumeCacheVtbl;
interface IEmptyVolumeCache
{
	CONST_VTBL struct IEmptyVolumeCacheVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEmptyVolumeCache_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEmptyVolumeCache_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEmptyVolumeCache_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEmptyVolumeCache_Initialize(This,hkRegKey,pcwszVolume,ppwszDisplayName,ppwszDescription,pdwFlags)( (This)->lpVtbl -> Initialize(This,hkRegKey,pcwszVolume,ppwszDisplayName,ppwszDescription,pdwFlags) )
#define IEmptyVolumeCache_GetSpaceUsed(This,pdwlSpaceUsed,picb)( (This)->lpVtbl -> GetSpaceUsed(This,pdwlSpaceUsed,picb) )
#define IEmptyVolumeCache_Purge(This,dwlSpaceToFree,picb)( (This)->lpVtbl -> Purge(This,dwlSpaceToFree,picb) )
#define IEmptyVolumeCache_ShowProperties(This,hwnd)( (This)->lpVtbl -> ShowProperties(This,hwnd) )
#define IEmptyVolumeCache_Deactivate(This,pdwFlags)( (This)->lpVtbl -> Deactivate(This,pdwFlags) )
#endif
#endif
#endif
#ifndef _LPEMPTYVOLUMECACHE2_DEFINED
#define _LPEMPTYVOLUMECACHE2_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_emptyvc_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_emptyvc_0000_0002_v0_0_s_ifspec;
#ifndef __IEmptyVolumeCache2_INTERFACE_DEFINED__
#define __IEmptyVolumeCache2_INTERFACE_DEFINED__
typedef IEmptyVolumeCache2 *LPEMPTYVOLUMECACHE2;
extern const IID IID_IEmptyVolumeCache2;
typedef struct IEmptyVolumeCache2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEmptyVolumeCache2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEmptyVolumeCache2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEmptyVolumeCache2 * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IEmptyVolumeCache2 * This, HKEY hkRegKey, LPCWSTR pcwszVolume, LPWSTR * ppwszDisplayName, LPWSTR * ppwszDescription, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * GetSpaceUsed) (IEmptyVolumeCache2 * This, DWORDLONG * pdwlSpaceUsed, IEmptyVolumeCacheCallBack * picb);
	HRESULT(STDMETHODCALLTYPE * Purge) (IEmptyVolumeCache2 * This, DWORDLONG dwlSpaceToFree, IEmptyVolumeCacheCallBack * picb);
	HRESULT(STDMETHODCALLTYPE * ShowProperties) (IEmptyVolumeCache2 * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * Deactivate) (IEmptyVolumeCache2 * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * InitializeEx) (IEmptyVolumeCache2 * This, HKEY hkRegKey, LPCWSTR pcwszVolume, LPCWSTR pcwszKeyName, LPWSTR * ppwszDisplayName, LPWSTR * ppwszDescription, LPWSTR * ppwszBtnText, DWORD * pdwFlags);
	END_INTERFACE
}  IEmptyVolumeCache2Vtbl;
interface IEmptyVolumeCache2
{
	CONST_VTBL struct IEmptyVolumeCache2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEmptyVolumeCache2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEmptyVolumeCache2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEmptyVolumeCache2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEmptyVolumeCache2_Initialize(This,hkRegKey,pcwszVolume,ppwszDisplayName,ppwszDescription,pdwFlags)( (This)->lpVtbl -> Initialize(This,hkRegKey,pcwszVolume,ppwszDisplayName,ppwszDescription,pdwFlags) )
#define IEmptyVolumeCache2_GetSpaceUsed(This,pdwlSpaceUsed,picb)( (This)->lpVtbl -> GetSpaceUsed(This,pdwlSpaceUsed,picb) )
#define IEmptyVolumeCache2_Purge(This,dwlSpaceToFree,picb)( (This)->lpVtbl -> Purge(This,dwlSpaceToFree,picb) )
#define IEmptyVolumeCache2_ShowProperties(This,hwnd)( (This)->lpVtbl -> ShowProperties(This,hwnd) )
#define IEmptyVolumeCache2_Deactivate(This,pdwFlags)( (This)->lpVtbl -> Deactivate(This,pdwFlags) )
#define IEmptyVolumeCache2_InitializeEx(This,hkRegKey,pcwszVolume,pcwszKeyName,ppwszDisplayName,ppwszDescription,ppwszBtnText,pdwFlags)( (This)->lpVtbl -> InitializeEx(This,hkRegKey,pcwszVolume,pcwszKeyName,ppwszDisplayName,ppwszDescription,ppwszBtnText,pdwFlags) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_emptyvc_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_emptyvc_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
#endif
