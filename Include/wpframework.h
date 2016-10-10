/*+@@file@@----------------------------------------------------------------*//*!
 \file		wpframework.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 17:11:46 2016
 \date		Modified on Mon Sep 19 17:11:46 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#if __POCC__ >= 500
#pragma once
#endif

#ifndef _WP_FRAMEWORK_H_
#define _WP_FRAMEWORK_H_
#include <unknwn.h>
class  IProtocolManager;
class IWpfReferencedObject
{
public
    virtual
    ULONG 
    AddRef(
        VOID
    ) = 0;
    virtual
    ULONG 
    Release
    (
        VOID
    ) = 0;
    
};
enum WPF_INTERFACE_ID_ENUM
{
    WPF_CONFIG_API_ID = 1,
    WPF_APPLICATION_INFO_UTIL_ID,
    WPF_SETTINGS_ID,
    WPF_ACTIONS_ID,
    WPF_EXPOSE_PROTOCOL_MANAGER_CUSTOM_INTERFACE_ID,
    WPF_APPLICATION_PRELOAD_INFO_UTIL_ID,
};
class IWorkerProcessFramework: public IWpfReferencedObject
{
public
    virtual
    HRESULT 
    GetWpfInterface(
          WPF_INTERFACE_ID_ENUM  WpfInterfaceId,
         PVOID*                 ppInterface 
    ) = 0;
    virtual
    HRESULT 
    GetCustomInterface(
          DWORD                           InterfaceId,
         PVOID*                          ppInterface 
    ) = 0;
    virtual
    HRESULT 
    GetInterfaceVersion(
         PDWORD      pdwMajorVersion,
         PDWORD      pdwMinorVersion
    ) = 0;
};
class IWpfApplicationInfoUtil: public IWpfReferencedObject
{
public
    virtual 
    HRESULT 
    GetApplicationPropertiesFromAppId(
                                         PCWSTR      pszAppId, 
        PWSTR       pszVirtualPath,
                                        DWORD *     pcchVirtualPath,
                                        DWORD *     pdwSiteId ) = 0;
};
    
enum WPF_SETTINGS_STRING_ENUM
{
    CLR_VERSION,
    APP_POOL_NAME,
    APP_HOST_FILE_NAME,
    ROOT_WEB_CONFIG_FILE_NAME,
    CLR_CONFIG_FILE_NAME
};
enum WPF_SETTINGS_DWORD_ENUM
{
    PERIODIC_RESTART_REQUESTS = 1,
    PERIODIC_RESTART_TIME,
    IDLE_TIMEOUT,
    MANAGED_PIPELINE_MODE,
};
enum WPF_SETTINGS_ULONGLONG_ENUM
{
    PERIODIC_RESTART_VIRTUAL_MEMORY,
    PERIODIC_RESTART_PRIVATE_MEMORY,
};
enum WPF_SETTINGS_BOOL_ENUM
{
    ENABLED_CENTRAL_BINARY_LOGGING,
    ENABLED_HOSTABLE_WEB_CORE
};
enum WPF_SETTINGS_HANDLE_ENUM
{
    ANONYMOUS_USER_TOKEN
};
class IWpfSettings : public IWpfReferencedObject
{
public
    virtual
    HRESULT
    GetDwordProperty(
          WPF_SETTINGS_DWORD_ENUM  SettingId,
         DWORD*                   pdwSetting
    ) = 0;
    virtual
    HRESULT
    GetUlonglongProperty(
          WPF_SETTINGS_ULONGLONG_ENUM  SettingId,
         ULONGLONG*                   pSetting
    ) = 0;
    virtual
    HRESULT
    GetStringProperty(
                                     WPF_SETTINGS_STRING_ENUM  SettingId,
        PWSTR                     pszSetting,
                                    DWORD*                    pcchSetting
    ) = 0;
    
    virtual
    HRESULT
    GetBoolProperty(
          WPF_SETTINGS_BOOL_ENUM  SettingId,
         BOOL *                  pfSetting
    ) = 0;
    virtual
    HRESULT
    GetHandleProperty(
          WPF_SETTINGS_HANDLE_ENUM  SettingId,
         HANDLE *                  phSetting
    ) = 0;
};
class IWpfActions : public IWpfReferencedObject
{
public
    virtual
    VOID
    RecycleWorkerProcess(
         PCWSTR   pszReason
    ) = 0;
    
    virtual
    VOID
    FailWorkerProcess(
         PCWSTR   pszReason,
         HRESULT  hrFailureToReport,
         BOOL     fFailOnNextPing = FALSE        
    ) = 0;
};
class IWpfExposeProtocolManagerCustomInterface: public IWpfReferencedObject
{
public
    virtual
    HRESULT
    LoadProtocolManagerAndGetCustomInterface(
         PCWSTR                   pProtocolManagerDll,
         PCWSTR                   pProtocolManagerDllInitFunction,
         DWORD                    dwCustomInterfaceId,
         PVOID*                  ppCustomInterface
    ) = 0;
};
class IWpfListenerChannelCallback;
enum PM_INTERFACE_ID_ENUM
{
    PM_LISTENER_CHANNEL_MANAGER_ID = 1,
    PM_HEALTH_AND_IDLE_MONITOR_ID,
    PM_CUSTOM_ACTIONS_ID,
    PM_APPLICATION_PRELOAD_ID,
};
class IProtocolManager   : public IWpfReferencedObject
{
public
    virtual
    HRESULT 
    GetPmInterface(
          PM_INTERFACE_ID_ENUM  PmInterfaceId,
         PVOID*                ppInterface 
    ) = 0;
    
    virtual
    HRESULT 
    GetCustomInterface(
          DWORD                           InterfaceId,
         PVOID*                          ppInterface 
    ) = 0;
    
    virtual 
    HRESULT 
    Shutdown(
         BOOL             fImmediate
    ) = 0;
};
class IHealthStatusCallback: public IWpfReferencedObject
{
public
   virtual 
    HRESULT 
    ReportHealth( 
        BOOL fHealthy
    ) = 0;   
};
class IPmHealthAndIdleMonitor : public IWpfReferencedObject
{
public
    virtual 
    HRESULT 
    CheckIdle(
         BOOL *pfIdle
    ) = 0;
    virtual 
    HRESULT 
    CheckHealth(
        IHealthStatusCallback * pIHealthStatusCallback
    ) = 0;    
};
class ICustomActionResultCallback
        : public IWpfReferencedObject
{
public
    virtual
    HRESULT
    ReportResult( 
         HRESULT              hrStatus,
         PBYTE                pbResponse,
         DWORD                cbResponse
    ) = 0;
};
class IWpfApplicationPreloadUtil : public IWpfReferencedObject
{
public
    virtual 
    HRESULT
    GetApplicationPreloadInfo(
         PCWSTR pszConfigPath,
         BOOL * pfEnabled,
         BSTR * pbstrType,
         SAFEARRAY ** psaPreloadValues
    ) = 0;
    virtual
    HRESULT
    ReportApplicationPreloadFailure(
         PCWSTR pszConfigPath,
         HRESULT hrFailureCode,
         PCWSTR pszErrorString
    ) = 0;
};
class IPmApplicationPreload : public IWpfReferencedObject
{
public
    virtual
    HRESULT
    PreloadApplication(
         DWORD dwSiteId,
         PCWSTR pszAppConfigPath
    ) = 0;
};
class IPmCustomActions : public  IWpfReferencedObject
{
public
    virtual
    HRESULT
    RunCustomAction(
         PCWSTR   pszFunctionName,
         PCWSTR   pszFunctionArgs,
         ICustomActionResultCallback * pCompletionCallbackClass
    ) = 0 ;
};
class IWpfListenerChannelCallback : public IWpfReferencedObject
{
public
    virtual 
    HRESULT 
    ReportStarted(
        VOID
    ) = 0;
    virtual 
    HRESULT 
    ReportStopped(
        HRESULT hr
    ) = 0;
    
    virtual 
    HRESULT 
    ReportMessageReceived(
        VOID
    ) = 0;
    virtual 
    HRESULT 
    GetId(
         DWORD* pdwListenerChannelId
    ) = 0;
    virtual 
    HRESULT 
    GetBlob(
          PBYTE pBlob, 
          DWORD* pcbBlob 
    ) = 0;
};
class IPmListenerChannelManager: public IWpfReferencedObject
{
public
    virtual
    HRESULT
    StartListenerChannel(
         PCWSTR                          protocolId,
         IWpfListenerChannelCallback *   pListenerChannelCallback 
    ) = 0;
    virtual
    HRESULT 
    StopListenerChannel(
         PCWSTR                        protocolId,
         IWpfListenerChannelCallback * pListenerChannelCallback,
         BOOL                          fImmediate
    ) = 0;
    
};
#define DEFAULT_PROTOCOL_MANAGER_INIT_FUNCTION      L"GetProtocolManager"
typedef HRESULT (*PFN_GET_PROTOCOL_MANAGER)
                    (   IWorkerProcessFramework * pWpFramework,
                       IProtocolManager **       ppProtocolManager );
#define MANAGED_RUNTIME_LOADER_FUNCTION             "LoadManagedRuntime"
HRESULT __stdcall LoadManagedRuntime(
    PCWSTR pwszRuntimeVersion,
    IUnknown ** ppManagedRuntimeHost );
typedef HRESULT (__stdcall *PFNLoadManagedRuntime)(
    PCWSTR pwszRuntimeVersion,
    IUnknown ** ppManagedRuntimeHost );
#endif


