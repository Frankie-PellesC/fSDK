/*+@@file@@----------------------------------------------------------------*//*!
 \file		webhost.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 00:43:00 2016
 \date		Modified on Mon Sep 19 00:43:00 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef WEBHOST_H__
#define WEBHOST_H__
#if __POCC__ >= 500
#pragma once
#endif
#pragma pack(push, 8)
#ifndef __IListenerChannelCallback_FWD_DEFINED__
#define __IListenerChannelCallback_FWD_DEFINED__
typedef interface IListenerChannelCallback IListenerChannelCallback;
#endif
#ifndef __IAppDomainInfo_FWD_DEFINED__
#define __IAppDomainInfo_FWD_DEFINED__
typedef interface IAppDomainInfo IAppDomainInfo;
#endif
#ifndef __IAppDomainInfoEnum_FWD_DEFINED__
#define __IAppDomainInfoEnum_FWD_DEFINED__
typedef interface IAppDomainInfoEnum IAppDomainInfoEnum;
#endif
#ifndef __IProcessHostSupportFunctions_FWD_DEFINED__
#define __IProcessHostSupportFunctions_FWD_DEFINED__
typedef interface IProcessHostSupportFunctions IProcessHostSupportFunctions;
#endif
#ifndef __IProcessHost_FWD_DEFINED__
#define __IProcessHost_FWD_DEFINED__
typedef interface IProcessHost IProcessHost;
#endif
#ifndef __IPphManager_FWD_DEFINED__
#define __IPphManager_FWD_DEFINED__
typedef interface IPphManager IPphManager;
#endif
#ifndef __IProcessHostIdleAndHealthMonitor_FWD_DEFINED__
#define __IProcessHostIdleAndHealthMonitor_FWD_DEFINED__
typedef interface IProcessHostIdleAndHealthMonitor IProcessHostIdleAndHealthMonitor;
#endif
#ifndef __IProcessHostFactoryHelper_FWD_DEFINED__
#define __IProcessHostFactoryHelper_FWD_DEFINED__
typedef interface IProcessHostFactoryHelper IProcessHostFactoryHelper;
#endif
#ifndef __IApplicationPreloadUtil_FWD_DEFINED__
#define __IApplicationPreloadUtil_FWD_DEFINED__
typedef interface IApplicationPreloadUtil IApplicationPreloadUtil;
#endif
#ifndef __IApplicationPreloadManager_FWD_DEFINED__
#define __IApplicationPreloadManager_FWD_DEFINED__
typedef interface IApplicationPreloadManager IApplicationPreloadManager;
#endif
//struct __declspec(uuid("dc3b0a85-9da7-47e4-ba1b-e27da9db8a1e")) IListenerChannelCallback;
#ifndef __IWebBrowserEventsService_INTERFACE_DEFINED__
#define __IWebBrowserEventsService_INTERFACE_DEFINED__
extern const IID IID_IListenerChannelCallback;
typedef struct IListenerChannelCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IListenerChannelCallback * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IListenerChannelCallback * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IListenerChannelCallback * This);
    HRESULT(STDMETHODCALLTYPE * ReportStarted(IListenerChannelCallback * This);
    HRESULT(STDMETHODCALLTYPE * ReportStopped(IListenerChannelCallback * This, HRESULT hr);
    HRESULT(STDMETHODCALLTYPE * ReportMessageReceived(IListenerChannelCallback * This);
    HRESULT(STDMETHODCALLTYPE * GetId(IListenerChannelCallback * This, DWORD* pdwListenerChannelId);
    HRESULT(STDMETHODCALLTYPE * GetBlobLength(IListenerChannelCallback * This, DWORD* pcbLength);
    HRESULT(STDMETHODCALLTYPE * GetBlob(IListenerChannelCallback * This, PBYTE pBlob, DWORD* pcbBlob);
} IListenerChannelCallbackVtbl;
interface IListenerChannelCallback
{
	CONST_VTBL struct IListenerChannelCallbackVtbl *lpVtbl;
};
#endif
#ifndef __IAppDomainInfo_INTERFACE_DEFINED__
#define __IAppDomainInfo_INTERFACE_DEFINED__
//struct __declspec(uuid("5BC9C234-6CD7-49bf-A07A-6FDB7F22DFFF")) IAppDomainInfo;
extern const IID IID_IAppDomainInfo;
typedef struct IAppDomainInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppDomainInfo * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IAppDomainInfo * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IAppDomainInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetId) (IAppDomainInfo * This, BSTR * pbstrAppDomainId);
	HRESULT(STDMETHODCALLTYPE * GetVirtualPath) (IAppDomainInfo * This, BSTR * pbstrVirtualPath);
	HRESULT(STDMETHODCALLTYPE * GetPhysicalPath) (IAppDomainInfo * This, BSTR * pbstrPhysicalPath);
	HRESULT(STDMETHODCALLTYPE * GetSiteId) (IAppDomainInfo * This, DWORD * pdwSiteId);
	HRESULT(STDMETHODCALLTYPE * GetIsIdle) (IAppDomainInfo * This, DWORD * pfIsIdle);
} IAppDomainInfoVtbl;
interface IListenerChannelCallback
{
	CONST_VTBL struct IAppDomainInfoVtbl *lpVtbl;
};
#endif
#ifndef __IAppDomainInfoEnum_INTERFACE_DEFINED__
#define __IAppDomainInfoEnum_INTERFACE_DEFINED__
//struct __declspec(uuid("F79648FB-558B-4a09-88F1-1E3BCB30E34F")) IAppDomainInfoEnum;
extern const IID IID_IAppDomainInfoEnum;
typedef struct IAppDomainInfoEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppDomainInfoEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppDomainInfoEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppDomainInfoEnum * This);
	HRESULT(STDMETHODCALLTYPE * GetData) (IAppDomainInfoEnum * This, IAppDomainInfo ** ppAppDomainInfo);
	HRESULT(STDMETHODCALLTYPE * Count) (IAppDomainInfoEnum * This, DWORD * pdwCount);
	HRESULT(STDMETHODCALLTYPE * MoveNext) (IAppDomainInfoEnum * This, DWORD * pfMoreItems);
	HRESULT(STDMETHODCALLTYPE * Reset) (IAppDomainInfoEnum * This);
} IAppDomainInfoEnumVtbl;
interface IAppDomainInfoEnum
{
	CONST_VTBL struct IAppDomainInfoEnumVtbl *lpVtbl;
};
#endif
#ifndef __IAppDomainInfoEnum_INTERFACE_DEFINED__
#define __IAppDomainInfoEnum_INTERFACE_DEFINED__
//struct __declspec(uuid("35f9c4c1-3800-4d17-99bc-018a62243687")) IProcessHostSupportFunctions;
extern const IID IID_IProcessHostSupportFunctions;
typedef struct IProcessHostSupportFunctionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProcessHostSupportFunctions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProcessHostSupportFunctions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProcessHostSupportFunctions * This);
	HRESULT(STDMETHODCALLTYPE * GetApplicationProperties) (IProcessHostSupportFunctions * This, LPCWSTR appId, BSTR * pbstrVirtualPath, BSTR * pbstrPhysicalPath, BSTR * pbstrSiteName, BSTR * pbstrSiteId);
	HRESULT(STDMETHODCALLTYPE * MapPath) (IProcessHostSupportFunctions * This, LPCWSTR appId, LPCWSTR virtualPath, BSTR * pbstrPhysicalPath);
	HRESULT(STDMETHODCALLTYPE * GetConfigToken) (IProcessHostSupportFunctions * This, LPCWSTR appId, HANDLE * pToken);
	HRESULT(STDMETHODCALLTYPE * GetAppHostConfigFilename) (IProcessHostSupportFunctions * This, BSTR * pbstrPhysicalPath);
	HRESULT(STDMETHODCALLTYPE * GetRootWebConfigFilename) (IProcessHostSupportFunctions * This, BSTR * pbstrPhysicalPath);
	HRESULT(STDMETHODCALLTYPE * GetNativeConfigurationSystem) (IProcessHostSupportFunctions * This, PPVOID ppConfigSystem);
} IProcessHostSupportFunctionsVtbl;
interface IProcessHostSupportFunctions
{
	CONST_VTBL struct IProcessHostSupportFunctionsVtbl *lpVtbl;
};
#endif
#ifndef __IAppDomainInfoEnum_INTERFACE_DEFINED__
#define __IAppDomainInfoEnum_INTERFACE_DEFINED__
//struct __declspec(uuid("f11dc4c9-ddd1-4566-ad53-cf6f3a28fefe")) IProcessPingCallback;
extern const IID IID_IProcessPingCallback;
typedef struct IProcessPingCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProcessPingCallback * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IProcessPingCallback * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IProcessPingCallback * This);
    HRESULT(STDMETHODCALLTYPE * Respond(IProcessPingCallback * This);
} IProcessPingCallbackVtbl;
interface IProcessPingCallback
{
	CONST_VTBL struct IProcessPingCallbackVtbl *lpVtbl;
};
#endif
#ifndef __IAppDomainInfoEnum_INTERFACE_DEFINED__
#define __IAppDomainInfoEnum_INTERFACE_DEFINED__
//struct __declspec(uuid("0ccd465e-3114-4ca3-ad50-cea561307e93")) IProcessHost;
extern const IID IID_IProcessHost;
typedef struct IProcessHostVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProcessHost * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IProcessHost * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IProcessHost * This);
	HRESULT(STDMETHODCALLTYPE * StartApplication) (IProcessHost * This, PCWSTR appId, PCWSTR appPath, IUnknown ** ppRuntimeObject);
	HRESULT(STDMETHODCALLTYPE * ShutdownApplication) (IProcessHost * This, LPCWSTR appId);
	HRESULT(STDMETHODCALLTYPE * Shutdown) (IProcessHost * This);
	HRESULT(STDMETHODCALLTYPE * EnumerateAppDomains) (IProcessHost * This, IAppDomainInfoEnum ** pAppDomainsInfo);
} IProcessHostVtbl;
interface IProcessHost
{
	CONST_VTBL struct IProcessHostVtbl *lpVtbl;
};
#endif
#ifndef __IAppDomainInfoEnum_INTERFACE_DEFINED__
#define __IAppDomainInfoEnum_INTERFACE_DEFINED__
//struct __declspec(uuid("1cc9099d-0a8d-41cb-87d6-845e4f8c4e91")) IPphManager;
extern const IID IID_IPphManager;
typedef struct IPphManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPphManager * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IPphManager * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IPphManager * This);
	HRESULT(STDMETHODCALLTYPE * StartProcessProtocolListenerChannel) (IPphManager * This, LPCWSTR protocolId, IListenerChannelCallback * pListenerChannelCallback);
	HRESULT(STDMETHODCALLTYPE * StopProcessProtocolListenerChannel) (IPphManager * This, LPCWSTR protocolId, DWORD listenerChannelId, BOOL immediate);
	HRESULT(STDMETHODCALLTYPE * StopProcessProtocol) (IPphManager * This, LPCWSTR protocolId, BOOL immediate);
} IPphManagerVtbl;
interface IPphManager
{
	CONST_VTBL struct IPphManagerVtbl *lpVtbl;
};
#endif
#ifndef __IAppDomainInfoEnum_INTERFACE_DEFINED__
#define __IAppDomainInfoEnum_INTERFACE_DEFINED__
//struct __declspec(uuid("9d98b251-453e-44f6-9cec-8b5aed970129"))  IProcessHostIdleAndHealthMonitor;
extern const IID IID_IProcessHostIdleAndHealthMonitor;
typedef struct IProcessHostIdleAndHealthMonitorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProcessHostIdleAndHealthMonitor * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IProcessHostIdleAndHealthMonitor * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IProcessHostIdleAndHealthMonitor * This);
	HRESULT(STDMETHODCALLTYPE * IsIdle) (IProcessHostIdleAndHealthMonitor * This, BOOL * pfIdle);
	HRESULT(STDMETHODCALLTYPE * Ping) (IProcessHostIdleAndHealthMonitor * This, IProcessPingCallback * pCallback);
} IProcessHostIdleAndHealthMonitorVtbl;
interface IProcessHostIdleAndHealthMonitor
{
	CONST_VTBL struct IProcessHostIdleAndHealthMonitorVtbl *lpVtbl;
};
#endif
#ifndef __IProcessHostFactoryHelper_INTERFACE_DEFINED__
#define __IProcessHostFactoryHelper_INTERFACE_DEFINED__
//struct __declspec(uuid("02fd465d-5c5d-4b7e-95b6-82faa031b74a")) IProcessHostFactoryHelper;
extern const IID IID_IProcessHostFactoryHelper;
typedef struct IProcessHostFactoryHelperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProcessHostFactoryHelper * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IProcessHostFactoryHelper * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IProcessHostFactoryHelper * This);
	HRESULT(STDMETHODCALLTYPE * GetProcessHost) (IProcessHostFactoryHelper * This, IProcessHostSupportFunctions * pFunctions, IUnknown ** ppProcessHost);
} IProcessHostFactoryHelperVtbl;
interface IProcessHostFactoryHelper
{
	CONST_VTBL struct IProcessHostFactoryHelperVtbl *lpVtbl;
};
#endif
#ifndef __IApplicationPreloadUtil_INTERFACE_DEFINED__
#define __IApplicationPreloadUtil_INTERFACE_DEFINED__
//struct __declspec(uuid("940D8ADD-9E40-4475-9A67-2CDCDF57995C")) IApplicationPreloadUtil;
extern const IID IID_IApplicationPreloadUtil;
typedef struct IApplicationPreloadUtilVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IApplicationPreloadUtil * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IApplicationPreloadUtil * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IApplicationPreloadUtil * This);
	HRESULT(STDMETHODCALLTYPE * GetApplicationPreloadInfo) (IApplicationPreloadUtil * This, PCWSTR pszContext, BOOL * pfEnabled, BSTR * pbstrType, SAFEARRAY ** psaPreloadValues);
	HRESULT(STDMETHODCALLTYPE * ReportApplicationPreloadFailure) (IApplicationPreloadUtil * This, PCWSTR pszContext, HRESULT hrFailureCode, PCWSTR pszErrorString);
} IApplicationPreloadUtilVtbl;
interface IApplicationPreloadUtil
{
	CONST_VTBL struct IApplicationPreloadUtilVtbl *lpVtbl;
};
#endif
#ifndef __IApplicationPreloadManager_INTERFACE_DEFINED__
#define __IApplicationPreloadManager_INTERFACE_DEFINED__
//struct __declspec(uuid("AE54F424-71BC-4da5-AA2F-8C0CD53496FC")) IApplicationPreloadManager;
extern const IID IID_IApplicationPreloadManager;
typedef struct IApplicationPreloadManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IApplicationPreloadManager * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IApplicationPreloadManager * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IApplicationPreloadManager * This);
	HRESULT(STDMETHODCALLTYPE * SetApplicationPreloadUtil) (IApplicationPreloadManager * This, IApplicationPreloadUtil * pPreload);
	HRESULT(STDMETHODCALLTYPE * SetApplicationPreloadState) (IApplicationPreloadManager * This, PCWSTR pszContext, PCWSTR pszAppId, BOOL fEnabled);
} IApplicationPreloadManagerVtbl;
interface IApplicationPreloadManager
{
	CONST_VTBL struct IApplicationPreloadManagerVtbl *lpVtbl;
};
#endif
HRESULT __stdcall GetIsapiProcessHost(IProcessHostSupportFunctions *pFunctions, IProcessHost **ppProcessHost);
typedef HRESULT(__stdcall *PFNGetIsapiProcessHost) (IProcessHostSupportFunctions *pFunctions, IProcessHost **ppProcessHost);
#pragma pack(pop)
#endif
