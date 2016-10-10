/*+@@file@@----------------------------------------------------------------*//*!
 \file		shappmgr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 00:08:31 2016
 \date		Modified on Sun Sep  4 00:08:31 2016
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
#ifndef __shappmgr_h__
#define __shappmgr_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IShellApp_FWD_DEFINED__
#define __IShellApp_FWD_DEFINED__
typedef interface IShellApp IShellApp;
#endif
#ifndef __IPublishedApp_FWD_DEFINED__
#define __IPublishedApp_FWD_DEFINED__
typedef interface IPublishedApp IPublishedApp;
#endif
#ifndef __IPublishedApp2_FWD_DEFINED__
#define __IPublishedApp2_FWD_DEFINED__
typedef interface IPublishedApp2 IPublishedApp2;
#endif
#ifndef __IEnumPublishedApps_FWD_DEFINED__
#define __IEnumPublishedApps_FWD_DEFINED__
typedef interface IEnumPublishedApps IEnumPublishedApps;
#endif
#ifndef __IAppPublisher_FWD_DEFINED__
#define __IAppPublisher_FWD_DEFINED__
typedef interface IAppPublisher IAppPublisher;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "appmgmt.h"
#ifndef _SHAPPMGR_H_
#define _SHAPPMGR_H_
extern RPC_IF_HANDLE __MIDL_itf_shappmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shappmgr_0000_0000_v0_0_s_ifspec;
#ifndef __IShellApp_INTERFACE_DEFINED__
#define __IShellApp_INTERFACE_DEFINED__
typedef enum _tagAppInfoFlags
{
	AIM_DISPLAYNAME = 0x1,
	AIM_VERSION = 0x2,
	AIM_PUBLISHER = 0x4,
	AIM_PRODUCTID = 0x8,
	AIM_REGISTEREDOWNER = 0x10,
	AIM_REGISTEREDCOMPANY = 0x20,
	AIM_LANGUAGE = 0x40,
	AIM_SUPPORTURL = 0x80,
	AIM_SUPPORTTELEPHONE = 0x100,
	AIM_HELPLINK = 0x200,
	AIM_INSTALLLOCATION = 0x400,
	AIM_INSTALLSOURCE = 0x800,
	AIM_INSTALLDATE = 0x1000,
	AIM_CONTACT = 0x4000,
	AIM_COMMENTS = 0x8000,
	AIM_IMAGE = 0x20000,
	AIM_READMEURL = 0x40000,
	AIM_UPDATEINFOURL = 0x80000
} APPINFODATAFLAGS;
typedef struct _AppInfoData
{
	DWORD cbSize;
	DWORD dwMask;
	LPWSTR pszDisplayName;
	LPWSTR pszVersion;
	LPWSTR pszPublisher;
	LPWSTR pszProductID;
	LPWSTR pszRegisteredOwner;
	LPWSTR pszRegisteredCompany;
	LPWSTR pszLanguage;
	LPWSTR pszSupportUrl;
	LPWSTR pszSupportTelephone;
	LPWSTR pszHelpLink;
	LPWSTR pszInstallLocation;
	LPWSTR pszInstallSource;
	LPWSTR pszInstallDate;
	LPWSTR pszContact;
	LPWSTR pszComments;
	LPWSTR pszImage;
	LPWSTR pszReadmeUrl;
	LPWSTR pszUpdateInfoUrl;
} APPINFODATA;
typedef struct _AppInfoData *PAPPINFODATA;
typedef enum _tagAppActionFlags
{
	APPACTION_INSTALL = 0x1,
	APPACTION_UNINSTALL = 0x2,
	APPACTION_MODIFY = 0x4,
	APPACTION_REPAIR = 0x8,
	APPACTION_UPGRADE = 0x10,
	APPACTION_CANGETSIZE = 0x20,
	APPACTION_MODIFYREMOVE = 0x80,
	APPACTION_ADDLATER = 0x100,
	APPACTION_UNSCHEDULE = 0x200
} APPACTIONFLAGS;
typedef struct _tagSlowAppInfo
{
	ULONGLONG ullSize;
	FILETIME ftLastUsed;
	int iTimesUsed;
	LPWSTR pszImage;
} SLOWAPPINFO;
typedef struct _tagSlowAppInfo *PSLOWAPPINFO;
extern const IID IID_IShellApp;
typedef struct IShellAppVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellApp * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellApp * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellApp * This);
	HRESULT(STDMETHODCALLTYPE * GetAppInfo) (IShellApp * This, PAPPINFODATA pai);
	HRESULT(STDMETHODCALLTYPE * GetPossibleActions) (IShellApp * This, DWORD * pdwActions);
	HRESULT(STDMETHODCALLTYPE * GetSlowAppInfo) (IShellApp * This, PSLOWAPPINFO psaid);
	HRESULT(STDMETHODCALLTYPE * GetCachedSlowAppInfo) (IShellApp * This, PSLOWAPPINFO psaid);
	HRESULT(STDMETHODCALLTYPE * IsInstalled) (IShellApp * This);
	END_INTERFACE
}  IShellAppVtbl;
interface IShellApp
{
	CONST_VTBL struct IShellAppVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellApp_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellApp_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IShellApp_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IShellApp_GetAppInfo(This,pai) ( (This)->lpVtbl -> GetAppInfo(This,pai) )
#define IShellApp_GetPossibleActions(This,pdwActions) ( (This)->lpVtbl -> GetPossibleActions(This,pdwActions) )
#define IShellApp_GetSlowAppInfo(This,psaid) ( (This)->lpVtbl -> GetSlowAppInfo(This,psaid) )
#define IShellApp_GetCachedSlowAppInfo(This,psaid) ( (This)->lpVtbl -> GetCachedSlowAppInfo(This,psaid) )
#define IShellApp_IsInstalled(This) ( (This)->lpVtbl -> IsInstalled(This) )
#endif
#endif
#ifndef __IPublishedApp_INTERFACE_DEFINED__
#define __IPublishedApp_INTERFACE_DEFINED__
typedef enum _tagPublishedAppInfoFlags
{
	PAI_SOURCE = 0x1,
	PAI_ASSIGNEDTIME = 0x2,
	PAI_PUBLISHEDTIME = 0x4,
	PAI_SCHEDULEDTIME = 0x8,
	PAI_EXPIRETIME = 0x10
} PUBAPPINFOFLAGS;
typedef struct _PubAppInfo
{
	DWORD cbSize;
	DWORD dwMask;
	LPWSTR pszSource;
	SYSTEMTIME stAssigned;
	SYSTEMTIME stPublished;
	SYSTEMTIME stScheduled;
	SYSTEMTIME stExpire;
} PUBAPPINFO;
typedef struct _PubAppInfo *PPUBAPPINFO;
extern const IID IID_IPublishedApp;
typedef struct IPublishedAppVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPublishedApp * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPublishedApp * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPublishedApp * This);
	HRESULT(STDMETHODCALLTYPE * GetAppInfo) (IPublishedApp * This, PAPPINFODATA pai);
	HRESULT(STDMETHODCALLTYPE * GetPossibleActions) (IPublishedApp * This, DWORD * pdwActions);
	HRESULT(STDMETHODCALLTYPE * GetSlowAppInfo) (IPublishedApp * This, PSLOWAPPINFO psaid);
	HRESULT(STDMETHODCALLTYPE * GetCachedSlowAppInfo) (IPublishedApp * This, PSLOWAPPINFO psaid);
	HRESULT(STDMETHODCALLTYPE * IsInstalled) (IPublishedApp * This);
	HRESULT(STDMETHODCALLTYPE * Install) (IPublishedApp * This, LPSYSTEMTIME pstInstall);
	HRESULT(STDMETHODCALLTYPE * GetPublishedAppInfo) (IPublishedApp * This, PPUBAPPINFO ppai);
	HRESULT(STDMETHODCALLTYPE * Unschedule) (IPublishedApp * This);
	END_INTERFACE
}  IPublishedAppVtbl;
interface IPublishedApp
{
	CONST_VTBL struct IPublishedAppVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPublishedApp_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPublishedApp_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPublishedApp_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPublishedApp_GetAppInfo(This,pai) ( (This)->lpVtbl -> GetAppInfo(This,pai) )
#define IPublishedApp_GetPossibleActions(This,pdwActions) ( (This)->lpVtbl -> GetPossibleActions(This,pdwActions) )
#define IPublishedApp_GetSlowAppInfo(This,psaid) ( (This)->lpVtbl -> GetSlowAppInfo(This,psaid) )
#define IPublishedApp_GetCachedSlowAppInfo(This,psaid) ( (This)->lpVtbl -> GetCachedSlowAppInfo(This,psaid) )
#define IPublishedApp_IsInstalled(This) ( (This)->lpVtbl -> IsInstalled(This) )
#define IPublishedApp_Install(This,pstInstall) ( (This)->lpVtbl -> Install(This,pstInstall) )
#define IPublishedApp_GetPublishedAppInfo(This,ppai) ( (This)->lpVtbl -> GetPublishedAppInfo(This,ppai) )
#define IPublishedApp_Unschedule(This) ( (This)->lpVtbl -> Unschedule(This) )
#endif
#endif
#ifndef __IPublishedApp2_INTERFACE_DEFINED__
#define __IPublishedApp2_INTERFACE_DEFINED__
extern const IID IID_IPublishedApp2;
typedef struct IPublishedApp2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPublishedApp2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPublishedApp2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPublishedApp2 * This);
	HRESULT(STDMETHODCALLTYPE * GetAppInfo) (IPublishedApp2 * This, PAPPINFODATA pai);
	HRESULT(STDMETHODCALLTYPE * GetPossibleActions) (IPublishedApp2 * This, DWORD * pdwActions);
	HRESULT(STDMETHODCALLTYPE * GetSlowAppInfo) (IPublishedApp2 * This, PSLOWAPPINFO psaid);
	HRESULT(STDMETHODCALLTYPE * GetCachedSlowAppInfo) (IPublishedApp2 * This, PSLOWAPPINFO psaid);
	HRESULT(STDMETHODCALLTYPE * IsInstalled) (IPublishedApp2 * This);
	HRESULT(STDMETHODCALLTYPE * Install) (IPublishedApp2 * This, LPSYSTEMTIME pstInstall);
	HRESULT(STDMETHODCALLTYPE * GetPublishedAppInfo) (IPublishedApp2 * This, PPUBAPPINFO ppai);
	HRESULT(STDMETHODCALLTYPE * Unschedule) (IPublishedApp2 * This);
	HRESULT(STDMETHODCALLTYPE * Install2) (IPublishedApp2 * This, LPSYSTEMTIME pstInstall, HWND hwndParent);
	END_INTERFACE
}  IPublishedApp2Vtbl;
interface IPublishedApp2
{
	CONST_VTBL struct IPublishedApp2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPublishedApp2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPublishedApp2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPublishedApp2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPublishedApp2_GetAppInfo(This,pai) ( (This)->lpVtbl -> GetAppInfo(This,pai) )
#define IPublishedApp2_GetPossibleActions(This,pdwActions) ( (This)->lpVtbl -> GetPossibleActions(This,pdwActions) )
#define IPublishedApp2_GetSlowAppInfo(This,psaid) ( (This)->lpVtbl -> GetSlowAppInfo(This,psaid) )
#define IPublishedApp2_GetCachedSlowAppInfo(This,psaid) ( (This)->lpVtbl -> GetCachedSlowAppInfo(This,psaid) )
#define IPublishedApp2_IsInstalled(This) ( (This)->lpVtbl -> IsInstalled(This) )
#define IPublishedApp2_Install(This,pstInstall) ( (This)->lpVtbl -> Install(This,pstInstall) )
#define IPublishedApp2_GetPublishedAppInfo(This,ppai) ( (This)->lpVtbl -> GetPublishedAppInfo(This,ppai) )
#define IPublishedApp2_Unschedule(This) ( (This)->lpVtbl -> Unschedule(This) )
#define IPublishedApp2_Install2(This,pstInstall,hwndParent) ( (This)->lpVtbl -> Install2(This,pstInstall,hwndParent) )
#endif
#endif
#ifndef __IEnumPublishedApps_INTERFACE_DEFINED__
#define __IEnumPublishedApps_INTERFACE_DEFINED__
extern const IID IID_IEnumPublishedApps;
typedef struct IEnumPublishedAppsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumPublishedApps * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumPublishedApps * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumPublishedApps * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumPublishedApps * This, IPublishedApp ** pia);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumPublishedApps * This);
	END_INTERFACE
}  IEnumPublishedAppsVtbl;
interface IEnumPublishedApps
{
	CONST_VTBL struct IEnumPublishedAppsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumPublishedApps_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumPublishedApps_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumPublishedApps_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumPublishedApps_Next(This,pia) ( (This)->lpVtbl -> Next(This,pia) )
#define IEnumPublishedApps_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#endif
#endif
#ifndef __IAppPublisher_INTERFACE_DEFINED__
#define __IAppPublisher_INTERFACE_DEFINED__
extern const IID IID_IAppPublisher;
typedef struct IAppPublisherVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppPublisher * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppPublisher * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppPublisher * This);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfCategories) (IAppPublisher * This, DWORD * pdwCat);
	HRESULT(STDMETHODCALLTYPE * GetCategories) (IAppPublisher * This, APPCATEGORYINFOLIST * pAppCategoryList);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfApps) (IAppPublisher * This, DWORD * pdwApps);
	HRESULT(STDMETHODCALLTYPE * EnumApps) (IAppPublisher * This, GUID * pAppCategoryId, IEnumPublishedApps ** ppepa);
	END_INTERFACE
}  IAppPublisherVtbl;
interface IAppPublisher
{
	CONST_VTBL struct IAppPublisherVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppPublisher_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppPublisher_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAppPublisher_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAppPublisher_GetNumberOfCategories(This,pdwCat) ( (This)->lpVtbl -> GetNumberOfCategories(This,pdwCat) )
#define IAppPublisher_GetCategories(This,pAppCategoryList) ( (This)->lpVtbl -> GetCategories(This,pAppCategoryList) )
#define IAppPublisher_GetNumberOfApps(This,pdwApps) ( (This)->lpVtbl -> GetNumberOfApps(This,pdwApps) )
#define IAppPublisher_EnumApps(This,pAppCategoryId,ppepa) ( (This)->lpVtbl -> EnumApps(This,pAppCategoryId,ppepa) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shappmgr_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shappmgr_0000_0005_v0_0_s_ifspec;
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
#endif
