/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmdmlog.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 14:40:25 2016
 \date		Modified on Mon Sep 19 14:40:25 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
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
#ifndef __wmdmlog_h__
#define __wmdmlog_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMDMLogger_FWD_DEFINED__
#define __IWMDMLogger_FWD_DEFINED__
typedef interface IWMDMLogger IWMDMLogger;
#endif
#ifndef __WMDMLogger_FWD_DEFINED__
#define __WMDMLogger_FWD_DEFINED__
typedef struct WMDMLogger WMDMLogger;
#endif
#include <oaidl.h>
#include <ocidl.h>
#define WMDM_LOG_SEV_INFO             0x00000001
#define WMDM_LOG_SEV_WARN             0x00000002
#define WMDM_LOG_SEV_ERROR            0x00000004
#define WMDM_LOG_NOTIMESTAMP          0x00000010
extern RPC_IF_HANDLE __MIDL_itf_wmdmlog_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmdmlog_0000_0000_v0_0_s_ifspec;
#ifndef __IWMDMLogger_INTERFACE_DEFINED__
#define __IWMDMLogger_INTERFACE_DEFINED__
extern const IID IID_IWMDMLogger;
typedef struct IWMDMLoggerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDMLogger * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDMLogger * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDMLogger * This);
	HRESULT(STDMETHODCALLTYPE * IsEnabled) (IWMDMLogger * This, BOOL * pfEnabled);
	HRESULT(STDMETHODCALLTYPE * Enable) (IWMDMLogger * This, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE * GetLogFileName) (IWMDMLogger * This, LPSTR pszFilename, UINT nMaxChars);
	HRESULT(STDMETHODCALLTYPE * SetLogFileName) (IWMDMLogger * This, LPSTR pszFilename);
	HRESULT(STDMETHODCALLTYPE * LogString) (IWMDMLogger * This, DWORD dwFlags, LPSTR pszSrcName, LPSTR pszLog);
	HRESULT(STDMETHODCALLTYPE * LogDword) (IWMDMLogger * This, DWORD dwFlags, LPSTR pszSrcName, LPSTR pszLogFormat, DWORD dwLog);
	HRESULT(STDMETHODCALLTYPE * Reset) (IWMDMLogger * This);
	HRESULT(STDMETHODCALLTYPE * GetSizeParams) (IWMDMLogger * This, LPDWORD pdwMaxSize, LPDWORD pdwShrinkToSize);
	HRESULT(STDMETHODCALLTYPE * SetSizeParams) (IWMDMLogger * This, DWORD dwMaxSize, DWORD dwShrinkToSize);
	END_INTERFACE
}  IWMDMLoggerVtbl;
interface IWMDMLogger
{
	CONST_VTBL struct IWMDMLoggerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDMLogger_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMDMLogger_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMDMLogger_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMDMLogger_IsEnabled(This,pfEnabled) ( (This)->lpVtbl -> IsEnabled(This,pfEnabled) )
#define IWMDMLogger_Enable(This,fEnable) ( (This)->lpVtbl -> Enable(This,fEnable) )
#define IWMDMLogger_GetLogFileName(This,pszFilename,nMaxChars) ( (This)->lpVtbl -> GetLogFileName(This,pszFilename,nMaxChars) )
#define IWMDMLogger_SetLogFileName(This,pszFilename) ( (This)->lpVtbl -> SetLogFileName(This,pszFilename) )
#define IWMDMLogger_LogString(This,dwFlags,pszSrcName,pszLog) ( (This)->lpVtbl -> LogString(This,dwFlags,pszSrcName,pszLog) )
#define IWMDMLogger_LogDword(This,dwFlags,pszSrcName,pszLogFormat,dwLog) ( (This)->lpVtbl -> LogDword(This,dwFlags,pszSrcName,pszLogFormat,dwLog) )
#define IWMDMLogger_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IWMDMLogger_GetSizeParams(This,pdwMaxSize,pdwShrinkToSize) ( (This)->lpVtbl -> GetSizeParams(This,pdwMaxSize,pdwShrinkToSize) )
#define IWMDMLogger_SetSizeParams(This,dwMaxSize,dwShrinkToSize) ( (This)->lpVtbl -> SetSizeParams(This,dwMaxSize,dwShrinkToSize) )
#endif
#endif
#ifndef __WMDMLogLib_LIBRARY_DEFINED__
#define __WMDMLogLib_LIBRARY_DEFINED__
extern const IID LIBID_WMDMLogLib;
extern const CLSID CLSID_WMDMLogger;
#endif
#endif
