/*+@@file@@----------------------------------------------------------------*//*!
 \file		wpcapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 16:49:16 2016
 \date		Modified on Mon Sep 19 16:49:16 2016
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
#ifndef __WpcApi_h__
#define __WpcApi_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWPCProviderState_FWD_DEFINED__
#define __IWPCProviderState_FWD_DEFINED__
typedef interface IWPCProviderState IWPCProviderState;
#endif
#ifndef __IWPCProviderConfig_FWD_DEFINED__
#define __IWPCProviderConfig_FWD_DEFINED__
typedef interface IWPCProviderConfig IWPCProviderConfig;
#endif
#ifndef __IWPCSettings_FWD_DEFINED__
#define __IWPCSettings_FWD_DEFINED__
typedef interface IWPCSettings IWPCSettings;
#endif
#ifndef __IWPCGamesSettings_FWD_DEFINED__
#define __IWPCGamesSettings_FWD_DEFINED__
typedef interface IWPCGamesSettings IWPCGamesSettings;
#endif
#ifndef __IWPCWebSettings_FWD_DEFINED__
#define __IWPCWebSettings_FWD_DEFINED__
typedef interface IWPCWebSettings IWPCWebSettings;
#endif
#ifndef __IWindowsParentalControlsCore_FWD_DEFINED__
#define __IWindowsParentalControlsCore_FWD_DEFINED__
typedef interface IWindowsParentalControlsCore IWindowsParentalControlsCore;
#endif
#ifndef __IWindowsParentalControls_FWD_DEFINED__
#define __IWindowsParentalControls_FWD_DEFINED__
typedef interface IWindowsParentalControls IWindowsParentalControls;
#endif
#ifndef __IWPCProviderSupport_FWD_DEFINED__
#define __IWPCProviderSupport_FWD_DEFINED__
typedef interface IWPCProviderSupport IWPCProviderSupport;
#endif
#ifndef __WpcSettingsProvider_FWD_DEFINED__
#define __WpcSettingsProvider_FWD_DEFINED__
typedef struct WpcSettingsProvider WpcSettingsProvider;
#endif
#ifndef __WpcProviderSupport_FWD_DEFINED__
#define __WpcProviderSupport_FWD_DEFINED__
typedef struct WpcProviderSupport WpcProviderSupport;
#endif
#ifndef __WindowsParentalControls_FWD_DEFINED__
#define __WindowsParentalControls_FWD_DEFINED__
typedef struct WindowsParentalControls WindowsParentalControls;
#endif
#include <oaidl.h>
#include <ocidl.h>
extern RPC_IF_HANDLE __MIDL_itf_WpcApi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_WpcApi_0000_0000_v0_0_s_ifspec;
#ifndef __IWPCProviderState_INTERFACE_DEFINED__
#define __IWPCProviderState_INTERFACE_DEFINED__
extern const IID IID_IWPCProviderState;
typedef struct IWPCProviderStateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWPCProviderState * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWPCProviderState * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWPCProviderState * This);
	HRESULT(STDMETHODCALLTYPE * Enable) (IWPCProviderState * This);
	HRESULT(STDMETHODCALLTYPE * Disable) (IWPCProviderState * This);
	END_INTERFACE
}  IWPCProviderStateVtbl;
interface IWPCProviderState
{
	CONST_VTBL struct IWPCProviderStateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWPCProviderState_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWPCProviderState_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWPCProviderState_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWPCProviderState_Enable(This) ( (This)->lpVtbl -> Enable(This) )
#define IWPCProviderState_Disable(This) ( (This)->lpVtbl -> Disable(This) )
#endif
#endif
typedef enum tagWPCFLAG_OVERRIDE
{
	WPCFLAG_APPLICATION = 0x1
} WPCFLAG_OVERRIDE;
extern RPC_IF_HANDLE __MIDL_itf_WpcApi_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_WpcApi_0000_0001_v0_0_s_ifspec;
#ifndef __IWPCProviderConfig_INTERFACE_DEFINED__
#define __IWPCProviderConfig_INTERFACE_DEFINED__
extern const IID IID_IWPCProviderConfig;
typedef struct IWPCProviderConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWPCProviderConfig * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWPCProviderConfig * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWPCProviderConfig * This);
	HRESULT(STDMETHODCALLTYPE * GetUserSummary) (IWPCProviderConfig * This, BSTR bstrSID, BSTR * pbstrUserSummary);
	HRESULT(STDMETHODCALLTYPE * Configure) (IWPCProviderConfig * This, HWND hWnd, BSTR bstrSID);
	HRESULT(STDMETHODCALLTYPE * RequestOverride) (IWPCProviderConfig * This, HWND hWnd, BSTR bstrPath, DWORD dwFlags);
	END_INTERFACE
}  IWPCProviderConfigVtbl;
interface IWPCProviderConfig
{
	CONST_VTBL struct IWPCProviderConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWPCProviderConfig_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWPCProviderConfig_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWPCProviderConfig_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWPCProviderConfig_GetUserSummary(This,bstrSID,pbstrUserSummary) ( (This)->lpVtbl -> GetUserSummary(This,bstrSID,pbstrUserSummary) )
#define IWPCProviderConfig_Configure(This,hWnd,bstrSID) ( (This)->lpVtbl -> Configure(This,hWnd,bstrSID) )
#define IWPCProviderConfig_RequestOverride(This,hWnd,bstrPath,dwFlags) ( (This)->lpVtbl -> RequestOverride(This,hWnd,bstrPath,dwFlags) )
#endif
#endif
typedef enum tagWPCFLAG_RESTRICTION
{
	WPCFLAG_NO_RESTRICTION = 0,
	WPCFLAG_LOGGING_REQUIRED = 0x1,
	WPCFLAG_WEB_FILTERED = 0x2,
	WPCFLAG_HOURS_RESTRICTED = 0x4,
	WPCFLAG_GAMES_BLOCKED = 0x8,
	WPCFLAG_APPS_RESTRICTED = 0x10
} WPCFLAG_RESTRICTION;
extern RPC_IF_HANDLE __MIDL_itf_WpcApi_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_WpcApi_0000_0002_v0_0_s_ifspec;
#ifndef __IWPCSettings_INTERFACE_DEFINED__
#define __IWPCSettings_INTERFACE_DEFINED__
extern const IID IID_IWPCSettings;
typedef struct IWPCSettingsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWPCSettings * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWPCSettings * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWPCSettings * This);
	HRESULT(STDMETHODCALLTYPE * IsLoggingRequired) (IWPCSettings * This, BOOL * pfRequired);
	HRESULT(STDMETHODCALLTYPE * GetLastSettingsChangeTime) (IWPCSettings * This, SYSTEMTIME * pTime);
	HRESULT(STDMETHODCALLTYPE * GetRestrictions) (IWPCSettings * This, DWORD * pdwRestrictions);
	END_INTERFACE
}  IWPCSettingsVtbl;
interface IWPCSettings
{
	CONST_VTBL struct IWPCSettingsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWPCSettings_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWPCSettings_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWPCSettings_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWPCSettings_IsLoggingRequired(This,pfRequired) ( (This)->lpVtbl -> IsLoggingRequired(This,pfRequired) )
#define IWPCSettings_GetLastSettingsChangeTime(This,pTime) ( (This)->lpVtbl -> GetLastSettingsChangeTime(This,pTime) )
#define IWPCSettings_GetRestrictions(This,pdwRestrictions) ( (This)->lpVtbl -> GetRestrictions(This,pdwRestrictions) )
#endif
#endif
#ifndef __IWPCGamesSettings_INTERFACE_DEFINED__
#define __IWPCGamesSettings_INTERFACE_DEFINED__
extern const IID IID_IWPCGamesSettings;
typedef struct IWPCGamesSettingsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWPCGamesSettings * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWPCGamesSettings * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWPCGamesSettings * This);
	HRESULT(STDMETHODCALLTYPE * IsLoggingRequired) (IWPCGamesSettings * This, BOOL * pfRequired);
	HRESULT(STDMETHODCALLTYPE * GetLastSettingsChangeTime) (IWPCGamesSettings * This, SYSTEMTIME * pTime);
	HRESULT(STDMETHODCALLTYPE * GetRestrictions) (IWPCGamesSettings * This, DWORD * pdwRestrictions);
	HRESULT(STDMETHODCALLTYPE * IsBlocked) (IWPCGamesSettings * This, GUID guidAppID, DWORD * pdwReasons);
	END_INTERFACE
}  IWPCGamesSettingsVtbl;
interface IWPCGamesSettings
{
	CONST_VTBL struct IWPCGamesSettingsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWPCGamesSettings_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWPCGamesSettings_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWPCGamesSettings_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWPCGamesSettings_IsLoggingRequired(This,pfRequired) ( (This)->lpVtbl -> IsLoggingRequired(This,pfRequired) )
#define IWPCGamesSettings_GetLastSettingsChangeTime(This,pTime) ( (This)->lpVtbl -> GetLastSettingsChangeTime(This,pTime) )
#define IWPCGamesSettings_GetRestrictions(This,pdwRestrictions) ( (This)->lpVtbl -> GetRestrictions(This,pdwRestrictions) )
#define IWPCGamesSettings_IsBlocked(This,guidAppID,pdwReasons) ( (This)->lpVtbl -> IsBlocked(This,guidAppID,pdwReasons) )
#endif
#endif
typedef enum tagWPCFLAG_WEB_SETTING
{
	WPCFLAG_WEB_SETTING_NOTBLOCKED = 0,
	WPCFLAG_WEB_SETTING_DOWNLOADSBLOCKED = 0x1
} WPCFLAG_WEB_SETTING;
extern RPC_IF_HANDLE __MIDL_itf_WpcApi_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_WpcApi_0000_0004_v0_0_s_ifspec;
#ifndef __IWPCWebSettings_INTERFACE_DEFINED__
#define __IWPCWebSettings_INTERFACE_DEFINED__
extern const IID IID_IWPCWebSettings;
typedef struct IWPCWebSettingsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWPCWebSettings * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWPCWebSettings * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWPCWebSettings * This);
	HRESULT(STDMETHODCALLTYPE * IsLoggingRequired) (IWPCWebSettings * This, BOOL * pfRequired);
	HRESULT(STDMETHODCALLTYPE * GetLastSettingsChangeTime) (IWPCWebSettings * This, SYSTEMTIME * pTime);
	HRESULT(STDMETHODCALLTYPE * GetRestrictions) (IWPCWebSettings * This, DWORD * pdwRestrictions);
	HRESULT(STDMETHODCALLTYPE * GetSettings) (IWPCWebSettings * This, DWORD * pdwSettings);
	HRESULT(STDMETHODCALLTYPE * RequestURLOverride) (IWPCWebSettings * This, HWND hWnd, LPCWSTR pcszURL, DWORD cURLs, LPCWSTR * ppcszSubURLs, BOOL * pfChanged);
	END_INTERFACE
}  IWPCWebSettingsVtbl;
interface IWPCWebSettings
{
	CONST_VTBL struct IWPCWebSettingsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWPCWebSettings_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWPCWebSettings_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWPCWebSettings_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWPCWebSettings_IsLoggingRequired(This,pfRequired) ( (This)->lpVtbl -> IsLoggingRequired(This,pfRequired) )
#define IWPCWebSettings_GetLastSettingsChangeTime(This,pTime) ( (This)->lpVtbl -> GetLastSettingsChangeTime(This,pTime) )
#define IWPCWebSettings_GetRestrictions(This,pdwRestrictions) ( (This)->lpVtbl -> GetRestrictions(This,pdwRestrictions) )
#define IWPCWebSettings_GetSettings(This,pdwSettings) ( (This)->lpVtbl -> GetSettings(This,pdwSettings) )
#define IWPCWebSettings_RequestURLOverride(This,hWnd,pcszURL,cURLs,ppcszSubURLs,pfChanged) ( (This)->lpVtbl -> RequestURLOverride(This,hWnd,pcszURL,cURLs,ppcszSubURLs,pfChanged) )
#endif
#endif
typedef enum tagWPCFLAG_VISIBILITY
{
	WPCFLAG_WPC_VISIBLE = 0,
	WPCFLAG_WPC_HIDDEN = 0x1
} WPCFLAG_VISIBILITY;
extern RPC_IF_HANDLE __MIDL_itf_WpcApi_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_WpcApi_0000_0005_v0_0_s_ifspec;
#ifndef __IWindowsParentalControlsCore_INTERFACE_DEFINED__
#define __IWindowsParentalControlsCore_INTERFACE_DEFINED__
extern const IID IID_IWindowsParentalControlsCore;
typedef struct IWindowsParentalControlsCoreVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWindowsParentalControlsCore * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWindowsParentalControlsCore * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWindowsParentalControlsCore * This);
	HRESULT(STDMETHODCALLTYPE * GetVisibility) (IWindowsParentalControlsCore * This, WPCFLAG_VISIBILITY * peVisibility);
	HRESULT(STDMETHODCALLTYPE * GetUserSettings) (IWindowsParentalControlsCore * This, LPCWSTR pcszSID, IWPCSettings ** ppSettings);
	HRESULT(STDMETHODCALLTYPE * GetWebSettings) (IWindowsParentalControlsCore * This, LPCWSTR pcszSID, IWPCWebSettings ** ppSettings);
	HRESULT(STDMETHODCALLTYPE * GetWebFilterInfo) (IWindowsParentalControlsCore * This, GUID * pguidID, LPWSTR * ppszName);
	END_INTERFACE
}  IWindowsParentalControlsCoreVtbl;
interface IWindowsParentalControlsCore
{
	CONST_VTBL struct IWindowsParentalControlsCoreVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWindowsParentalControlsCore_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWindowsParentalControlsCore_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWindowsParentalControlsCore_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWindowsParentalControlsCore_GetVisibility(This,peVisibility) ( (This)->lpVtbl -> GetVisibility(This,peVisibility) )
#define IWindowsParentalControlsCore_GetUserSettings(This,pcszSID,ppSettings) ( (This)->lpVtbl -> GetUserSettings(This,pcszSID,ppSettings) )
#define IWindowsParentalControlsCore_GetWebSettings(This,pcszSID,ppSettings) ( (This)->lpVtbl -> GetWebSettings(This,pcszSID,ppSettings) )
#define IWindowsParentalControlsCore_GetWebFilterInfo(This,pguidID,ppszName) ( (This)->lpVtbl -> GetWebFilterInfo(This,pguidID,ppszName) )
#endif
#endif
#ifndef __IWindowsParentalControls_INTERFACE_DEFINED__
#define __IWindowsParentalControls_INTERFACE_DEFINED__
extern const IID IID_IWindowsParentalControls;
typedef struct IWindowsParentalControlsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWindowsParentalControls * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWindowsParentalControls * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWindowsParentalControls * This);
	HRESULT(STDMETHODCALLTYPE * GetVisibility) (IWindowsParentalControls * This, WPCFLAG_VISIBILITY * peVisibility);
	HRESULT(STDMETHODCALLTYPE * GetUserSettings) (IWindowsParentalControls * This, LPCWSTR pcszSID, IWPCSettings ** ppSettings);
	HRESULT(STDMETHODCALLTYPE * GetWebSettings) (IWindowsParentalControls * This, LPCWSTR pcszSID, IWPCWebSettings ** ppSettings);
	HRESULT(STDMETHODCALLTYPE * GetWebFilterInfo) (IWindowsParentalControls * This, GUID * pguidID, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetGamesSettings) (IWindowsParentalControls * This, LPCWSTR pcszSID, IWPCGamesSettings ** ppSettings);
	END_INTERFACE
}  IWindowsParentalControlsVtbl;
interface IWindowsParentalControls
{
	CONST_VTBL struct IWindowsParentalControlsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWindowsParentalControls_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWindowsParentalControls_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWindowsParentalControls_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWindowsParentalControls_GetVisibility(This,peVisibility) ( (This)->lpVtbl -> GetVisibility(This,peVisibility) )
#define IWindowsParentalControls_GetUserSettings(This,pcszSID,ppSettings) ( (This)->lpVtbl -> GetUserSettings(This,pcszSID,ppSettings) )
#define IWindowsParentalControls_GetWebSettings(This,pcszSID,ppSettings) ( (This)->lpVtbl -> GetWebSettings(This,pcszSID,ppSettings) )
#define IWindowsParentalControls_GetWebFilterInfo(This,pguidID,ppszName) ( (This)->lpVtbl -> GetWebFilterInfo(This,pguidID,ppszName) )
#define IWindowsParentalControls_GetGamesSettings(This,pcszSID,ppSettings) ( (This)->lpVtbl -> GetGamesSettings(This,pcszSID,ppSettings) )
#endif
#endif
#ifndef __IWPCProviderSupport_INTERFACE_DEFINED__
#define __IWPCProviderSupport_INTERFACE_DEFINED__
extern const IID IID_IWPCProviderSupport;
typedef struct IWPCProviderSupportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWPCProviderSupport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWPCProviderSupport * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWPCProviderSupport * This);
	HRESULT(STDMETHODCALLTYPE * GetCurrent) (IWPCProviderSupport * This, GUID * pguidProvider);
	END_INTERFACE
}  IWPCProviderSupportVtbl;
interface IWPCProviderSupport
{
	CONST_VTBL struct IWPCProviderSupportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWPCProviderSupport_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWPCProviderSupport_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWPCProviderSupport_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWPCProviderSupport_GetCurrent(This,pguidProvider) ( (This)->lpVtbl -> GetCurrent(This,pguidProvider) )
#endif
#endif
#ifndef __WPCAPILib_LIBRARY_DEFINED__
#define __WPCAPILib_LIBRARY_DEFINED__
extern const IID LIBID_WPCAPILib;
extern const CLSID CLSID_WpcSettingsProvider;
extern const CLSID CLSID_WpcProviderSupport;
extern const CLSID CLSID_WindowsParentalControls;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
#endif
