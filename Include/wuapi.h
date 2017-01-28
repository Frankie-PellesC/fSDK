/*+@@file@@----------------------------------------------------------------*//*!
 \file		wuapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 15:06:33 2016
 \date		Modified on Sun Sep  4 15:06:33 2016
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
#ifndef __wuapi_h__
#define __wuapi_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IUpdateLockdown_FWD_DEFINED__
#define __IUpdateLockdown_FWD_DEFINED__
typedef interface IUpdateLockdown IUpdateLockdown;
#endif
#ifndef __IStringCollection_FWD_DEFINED__
#define __IStringCollection_FWD_DEFINED__
typedef interface IStringCollection IStringCollection;
#endif
#ifndef __IWebProxy_FWD_DEFINED__
#define __IWebProxy_FWD_DEFINED__
typedef interface IWebProxy IWebProxy;
#endif
#ifndef __ISystemInformation_FWD_DEFINED__
#define __ISystemInformation_FWD_DEFINED__
typedef interface ISystemInformation ISystemInformation;
#endif
#ifndef __IWindowsUpdateAgentInfo_FWD_DEFINED__
#define __IWindowsUpdateAgentInfo_FWD_DEFINED__
typedef interface IWindowsUpdateAgentInfo IWindowsUpdateAgentInfo;
#endif
#ifndef __IAutomaticUpdatesResults_FWD_DEFINED__
#define __IAutomaticUpdatesResults_FWD_DEFINED__
typedef interface IAutomaticUpdatesResults IAutomaticUpdatesResults;
#endif
#ifndef __IAutomaticUpdatesSettings_FWD_DEFINED__
#define __IAutomaticUpdatesSettings_FWD_DEFINED__
typedef interface IAutomaticUpdatesSettings IAutomaticUpdatesSettings;
#endif
#ifndef __IAutomaticUpdatesSettings2_FWD_DEFINED__
#define __IAutomaticUpdatesSettings2_FWD_DEFINED__
typedef interface IAutomaticUpdatesSettings2 IAutomaticUpdatesSettings2;
#endif
#ifndef __IAutomaticUpdatesSettings3_FWD_DEFINED__
#define __IAutomaticUpdatesSettings3_FWD_DEFINED__
typedef interface IAutomaticUpdatesSettings3 IAutomaticUpdatesSettings3;
#endif
#ifndef __IAutomaticUpdates_FWD_DEFINED__
#define __IAutomaticUpdates_FWD_DEFINED__
typedef interface IAutomaticUpdates IAutomaticUpdates;
#endif
#ifndef __IAutomaticUpdates2_FWD_DEFINED__
#define __IAutomaticUpdates2_FWD_DEFINED__
typedef interface IAutomaticUpdates2 IAutomaticUpdates2;
#endif
#ifndef __IUpdateIdentity_FWD_DEFINED__
#define __IUpdateIdentity_FWD_DEFINED__
typedef interface IUpdateIdentity IUpdateIdentity;
#endif
#ifndef __IImageInformation_FWD_DEFINED__
#define __IImageInformation_FWD_DEFINED__
typedef interface IImageInformation IImageInformation;
#endif
#ifndef __ICategory_FWD_DEFINED__
#define __ICategory_FWD_DEFINED__
typedef interface ICategory ICategory;
#endif
#ifndef __ICategoryCollection_FWD_DEFINED__
#define __ICategoryCollection_FWD_DEFINED__
typedef interface ICategoryCollection ICategoryCollection;
#endif
#ifndef __IInstallationBehavior_FWD_DEFINED__
#define __IInstallationBehavior_FWD_DEFINED__
typedef interface IInstallationBehavior IInstallationBehavior;
#endif
#ifndef __IUpdateDownloadContent_FWD_DEFINED__
#define __IUpdateDownloadContent_FWD_DEFINED__
typedef interface IUpdateDownloadContent IUpdateDownloadContent;
#endif
#ifndef __IUpdateDownloadContent2_FWD_DEFINED__
#define __IUpdateDownloadContent2_FWD_DEFINED__
typedef interface IUpdateDownloadContent2 IUpdateDownloadContent2;
#endif
#ifndef __IUpdateDownloadContentCollection_FWD_DEFINED__
#define __IUpdateDownloadContentCollection_FWD_DEFINED__
typedef interface IUpdateDownloadContentCollection IUpdateDownloadContentCollection;
#endif
#ifndef __IUpdate_FWD_DEFINED__
#define __IUpdate_FWD_DEFINED__
typedef interface IUpdate IUpdate;
#endif
#ifndef __IWindowsDriverUpdate_FWD_DEFINED__
#define __IWindowsDriverUpdate_FWD_DEFINED__
typedef interface IWindowsDriverUpdate IWindowsDriverUpdate;
#endif
#ifndef __IUpdate2_FWD_DEFINED__
#define __IUpdate2_FWD_DEFINED__
typedef interface IUpdate2 IUpdate2;
#endif
#ifndef __IUpdate3_FWD_DEFINED__
#define __IUpdate3_FWD_DEFINED__
typedef interface IUpdate3 IUpdate3;
#endif
#ifndef __IUpdate4_FWD_DEFINED__
#define __IUpdate4_FWD_DEFINED__
typedef interface IUpdate4 IUpdate4;
#endif
#ifndef __IUpdate5_FWD_DEFINED__
#define __IUpdate5_FWD_DEFINED__
typedef interface IUpdate5 IUpdate5;
#endif
#ifndef __IWindowsDriverUpdate2_FWD_DEFINED__
#define __IWindowsDriverUpdate2_FWD_DEFINED__
typedef interface IWindowsDriverUpdate2 IWindowsDriverUpdate2;
#endif
#ifndef __IWindowsDriverUpdate3_FWD_DEFINED__
#define __IWindowsDriverUpdate3_FWD_DEFINED__
typedef interface IWindowsDriverUpdate3 IWindowsDriverUpdate3;
#endif
#ifndef __IWindowsDriverUpdateEntry_FWD_DEFINED__
#define __IWindowsDriverUpdateEntry_FWD_DEFINED__
typedef interface IWindowsDriverUpdateEntry IWindowsDriverUpdateEntry;
#endif
#ifndef __IWindowsDriverUpdateEntryCollection_FWD_DEFINED__
#define __IWindowsDriverUpdateEntryCollection_FWD_DEFINED__
typedef interface IWindowsDriverUpdateEntryCollection IWindowsDriverUpdateEntryCollection;
#endif
#ifndef __IWindowsDriverUpdate4_FWD_DEFINED__
#define __IWindowsDriverUpdate4_FWD_DEFINED__
typedef interface IWindowsDriverUpdate4 IWindowsDriverUpdate4;
#endif
#ifndef __IWindowsDriverUpdate5_FWD_DEFINED__
#define __IWindowsDriverUpdate5_FWD_DEFINED__
typedef interface IWindowsDriverUpdate5 IWindowsDriverUpdate5;
#endif
#ifndef __IUpdateCollection_FWD_DEFINED__
#define __IUpdateCollection_FWD_DEFINED__
typedef interface IUpdateCollection IUpdateCollection;
#endif
#ifndef __IUpdateException_FWD_DEFINED__
#define __IUpdateException_FWD_DEFINED__
typedef interface IUpdateException IUpdateException;
#endif
#ifndef __IInvalidProductLicenseException_FWD_DEFINED__
#define __IInvalidProductLicenseException_FWD_DEFINED__
typedef interface IInvalidProductLicenseException IInvalidProductLicenseException;
#endif
#ifndef __IUpdateExceptionCollection_FWD_DEFINED__
#define __IUpdateExceptionCollection_FWD_DEFINED__
typedef interface IUpdateExceptionCollection IUpdateExceptionCollection;
#endif
#ifndef __ISearchResult_FWD_DEFINED__
#define __ISearchResult_FWD_DEFINED__
typedef interface ISearchResult ISearchResult;
#endif
#ifndef __ISearchJob_FWD_DEFINED__
#define __ISearchJob_FWD_DEFINED__
typedef interface ISearchJob ISearchJob;
#endif
#ifndef __ISearchCompletedCallbackArgs_FWD_DEFINED__
#define __ISearchCompletedCallbackArgs_FWD_DEFINED__
typedef interface ISearchCompletedCallbackArgs ISearchCompletedCallbackArgs;
#endif
#ifndef __ISearchCompletedCallback_FWD_DEFINED__
#define __ISearchCompletedCallback_FWD_DEFINED__
typedef interface ISearchCompletedCallback ISearchCompletedCallback;
#endif
#ifndef __IUpdateHistoryEntry_FWD_DEFINED__
#define __IUpdateHistoryEntry_FWD_DEFINED__
typedef interface IUpdateHistoryEntry IUpdateHistoryEntry;
#endif
#ifndef __IUpdateHistoryEntry2_FWD_DEFINED__
#define __IUpdateHistoryEntry2_FWD_DEFINED__
typedef interface IUpdateHistoryEntry2 IUpdateHistoryEntry2;
#endif
#ifndef __IUpdateHistoryEntryCollection_FWD_DEFINED__
#define __IUpdateHistoryEntryCollection_FWD_DEFINED__
typedef interface IUpdateHistoryEntryCollection IUpdateHistoryEntryCollection;
#endif
#ifndef __IUpdateSearcher_FWD_DEFINED__
#define __IUpdateSearcher_FWD_DEFINED__
typedef interface IUpdateSearcher IUpdateSearcher;
#endif
#ifndef __IUpdateSearcher2_FWD_DEFINED__
#define __IUpdateSearcher2_FWD_DEFINED__
typedef interface IUpdateSearcher2 IUpdateSearcher2;
#endif
#ifndef __IUpdateSearcher3_FWD_DEFINED__
#define __IUpdateSearcher3_FWD_DEFINED__
typedef interface IUpdateSearcher3 IUpdateSearcher3;
#endif
#ifndef __IUpdateDownloadResult_FWD_DEFINED__
#define __IUpdateDownloadResult_FWD_DEFINED__
typedef interface IUpdateDownloadResult IUpdateDownloadResult;
#endif
#ifndef __IDownloadResult_FWD_DEFINED__
#define __IDownloadResult_FWD_DEFINED__
typedef interface IDownloadResult IDownloadResult;
#endif
#ifndef __IDownloadProgress_FWD_DEFINED__
#define __IDownloadProgress_FWD_DEFINED__
typedef interface IDownloadProgress IDownloadProgress;
#endif
#ifndef __IDownloadJob_FWD_DEFINED__
#define __IDownloadJob_FWD_DEFINED__
typedef interface IDownloadJob IDownloadJob;
#endif
#ifndef __IDownloadCompletedCallbackArgs_FWD_DEFINED__
#define __IDownloadCompletedCallbackArgs_FWD_DEFINED__
typedef interface IDownloadCompletedCallbackArgs IDownloadCompletedCallbackArgs;
#endif
#ifndef __IDownloadCompletedCallback_FWD_DEFINED__
#define __IDownloadCompletedCallback_FWD_DEFINED__
typedef interface IDownloadCompletedCallback IDownloadCompletedCallback;
#endif
#ifndef __IDownloadProgressChangedCallbackArgs_FWD_DEFINED__
#define __IDownloadProgressChangedCallbackArgs_FWD_DEFINED__
typedef interface IDownloadProgressChangedCallbackArgs IDownloadProgressChangedCallbackArgs;
#endif
#ifndef __IDownloadProgressChangedCallback_FWD_DEFINED__
#define __IDownloadProgressChangedCallback_FWD_DEFINED__
typedef interface IDownloadProgressChangedCallback IDownloadProgressChangedCallback;
#endif
#ifndef __IUpdateDownloader_FWD_DEFINED__
#define __IUpdateDownloader_FWD_DEFINED__
typedef interface IUpdateDownloader IUpdateDownloader;
#endif
#ifndef __IUpdateInstallationResult_FWD_DEFINED__
#define __IUpdateInstallationResult_FWD_DEFINED__
typedef interface IUpdateInstallationResult IUpdateInstallationResult;
#endif
#ifndef __IInstallationResult_FWD_DEFINED__
#define __IInstallationResult_FWD_DEFINED__
typedef interface IInstallationResult IInstallationResult;
#endif
#ifndef __IInstallationProgress_FWD_DEFINED__
#define __IInstallationProgress_FWD_DEFINED__
typedef interface IInstallationProgress IInstallationProgress;
#endif
#ifndef __IInstallationJob_FWD_DEFINED__
#define __IInstallationJob_FWD_DEFINED__
typedef interface IInstallationJob IInstallationJob;
#endif
#ifndef __IInstallationCompletedCallbackArgs_FWD_DEFINED__
#define __IInstallationCompletedCallbackArgs_FWD_DEFINED__
typedef interface IInstallationCompletedCallbackArgs IInstallationCompletedCallbackArgs;
#endif
#ifndef __IInstallationCompletedCallback_FWD_DEFINED__
#define __IInstallationCompletedCallback_FWD_DEFINED__
typedef interface IInstallationCompletedCallback IInstallationCompletedCallback;
#endif
#ifndef __IInstallationProgressChangedCallbackArgs_FWD_DEFINED__
#define __IInstallationProgressChangedCallbackArgs_FWD_DEFINED__
typedef interface IInstallationProgressChangedCallbackArgs IInstallationProgressChangedCallbackArgs;
#endif
#ifndef __IInstallationProgressChangedCallback_FWD_DEFINED__
#define __IInstallationProgressChangedCallback_FWD_DEFINED__
typedef interface IInstallationProgressChangedCallback IInstallationProgressChangedCallback;
#endif
#ifndef __IUpdateInstaller_FWD_DEFINED__
#define __IUpdateInstaller_FWD_DEFINED__
typedef interface IUpdateInstaller IUpdateInstaller;
#endif
#ifndef __IUpdateInstaller2_FWD_DEFINED__
#define __IUpdateInstaller2_FWD_DEFINED__
typedef interface IUpdateInstaller2 IUpdateInstaller2;
#endif
#ifndef __IUpdateSession_FWD_DEFINED__
#define __IUpdateSession_FWD_DEFINED__
typedef interface IUpdateSession IUpdateSession;
#endif
#ifndef __IUpdateSession2_FWD_DEFINED__
#define __IUpdateSession2_FWD_DEFINED__
typedef interface IUpdateSession2 IUpdateSession2;
#endif
#ifndef __IUpdateSession3_FWD_DEFINED__
#define __IUpdateSession3_FWD_DEFINED__
typedef interface IUpdateSession3 IUpdateSession3;
#endif
#ifndef __IUpdateService_FWD_DEFINED__
#define __IUpdateService_FWD_DEFINED__
typedef interface IUpdateService IUpdateService;
#endif
#ifndef __IUpdateService2_FWD_DEFINED__
#define __IUpdateService2_FWD_DEFINED__
typedef interface IUpdateService2 IUpdateService2;
#endif
#ifndef __IUpdateServiceCollection_FWD_DEFINED__
#define __IUpdateServiceCollection_FWD_DEFINED__
typedef interface IUpdateServiceCollection IUpdateServiceCollection;
#endif
#ifndef __IUpdateServiceRegistration_FWD_DEFINED__
#define __IUpdateServiceRegistration_FWD_DEFINED__
typedef interface IUpdateServiceRegistration IUpdateServiceRegistration;
#endif
#ifndef __IUpdateServiceManager_FWD_DEFINED__
#define __IUpdateServiceManager_FWD_DEFINED__
typedef interface IUpdateServiceManager IUpdateServiceManager;
#endif
#ifndef __IUpdateServiceManager2_FWD_DEFINED__
#define __IUpdateServiceManager2_FWD_DEFINED__
typedef interface IUpdateServiceManager2 IUpdateServiceManager2;
#endif
#ifndef __IInstallationAgent_FWD_DEFINED__
#define __IInstallationAgent_FWD_DEFINED__
typedef interface IInstallationAgent IInstallationAgent;
#endif
#ifndef __IUpdateLockdown_FWD_DEFINED__
#define __IUpdateLockdown_FWD_DEFINED__
typedef interface IUpdateLockdown IUpdateLockdown;
#endif
#ifndef __IUpdateException_FWD_DEFINED__
#define __IUpdateException_FWD_DEFINED__
typedef interface IUpdateException IUpdateException;
#endif
#ifndef __IInvalidProductLicenseException_FWD_DEFINED__
#define __IInvalidProductLicenseException_FWD_DEFINED__
typedef interface IInvalidProductLicenseException IInvalidProductLicenseException;
#endif
#ifndef __IAutomaticUpdatesSettings_FWD_DEFINED__
#define __IAutomaticUpdatesSettings_FWD_DEFINED__
typedef interface IAutomaticUpdatesSettings IAutomaticUpdatesSettings;
#endif
#ifndef __IAutomaticUpdatesSettings2_FWD_DEFINED__
#define __IAutomaticUpdatesSettings2_FWD_DEFINED__
typedef interface IAutomaticUpdatesSettings2 IAutomaticUpdatesSettings2;
#endif
#ifndef __IAutomaticUpdatesSettings3_FWD_DEFINED__
#define __IAutomaticUpdatesSettings3_FWD_DEFINED__
typedef interface IAutomaticUpdatesSettings3 IAutomaticUpdatesSettings3;
#endif
#ifndef __IUpdate_FWD_DEFINED__
#define __IUpdate_FWD_DEFINED__
typedef interface IUpdate IUpdate;
#endif
#ifndef __IUpdate2_FWD_DEFINED__
#define __IUpdate2_FWD_DEFINED__
typedef interface IUpdate2 IUpdate2;
#endif
#ifndef __IUpdate3_FWD_DEFINED__
#define __IUpdate3_FWD_DEFINED__
typedef interface IUpdate3 IUpdate3;
#endif
#ifndef __IWindowsDriverUpdateEntry_FWD_DEFINED__
#define __IWindowsDriverUpdateEntry_FWD_DEFINED__
typedef interface IWindowsDriverUpdateEntry IWindowsDriverUpdateEntry;
#endif
#ifndef __IWindowsDriverUpdateEntryCollection_FWD_DEFINED__
#define __IWindowsDriverUpdateEntryCollection_FWD_DEFINED__
typedef interface IWindowsDriverUpdateEntryCollection IWindowsDriverUpdateEntryCollection;
#endif
#ifndef __IUpdate4_FWD_DEFINED__
#define __IUpdate4_FWD_DEFINED__
typedef interface IUpdate4 IUpdate4;
#endif
#ifndef __IUpdate5_FWD_DEFINED__
#define __IUpdate5_FWD_DEFINED__
typedef interface IUpdate5 IUpdate5;
#endif
#ifndef __IWindowsDriverUpdate_FWD_DEFINED__
#define __IWindowsDriverUpdate_FWD_DEFINED__
typedef interface IWindowsDriverUpdate IWindowsDriverUpdate;
#endif
#ifndef __IWindowsDriverUpdate2_FWD_DEFINED__
#define __IWindowsDriverUpdate2_FWD_DEFINED__
typedef interface IWindowsDriverUpdate2 IWindowsDriverUpdate2;
#endif
#ifndef __IWindowsDriverUpdate3_FWD_DEFINED__
#define __IWindowsDriverUpdate3_FWD_DEFINED__
typedef interface IWindowsDriverUpdate3 IWindowsDriverUpdate3;
#endif
#ifndef __IWindowsDriverUpdate4_FWD_DEFINED__
#define __IWindowsDriverUpdate4_FWD_DEFINED__
typedef interface IWindowsDriverUpdate4 IWindowsDriverUpdate4;
#endif
#ifndef __IWindowsDriverUpdate5_FWD_DEFINED__
#define __IWindowsDriverUpdate5_FWD_DEFINED__
typedef interface IWindowsDriverUpdate5 IWindowsDriverUpdate5;
#endif
#ifndef __ISearchCompletedCallback_FWD_DEFINED__
#define __ISearchCompletedCallback_FWD_DEFINED__
typedef interface ISearchCompletedCallback ISearchCompletedCallback;
#endif
#ifndef __IDownloadCompletedCallback_FWD_DEFINED__
#define __IDownloadCompletedCallback_FWD_DEFINED__
typedef interface IDownloadCompletedCallback IDownloadCompletedCallback;
#endif
#ifndef __IDownloadProgressChangedCallback_FWD_DEFINED__
#define __IDownloadProgressChangedCallback_FWD_DEFINED__
typedef interface IDownloadProgressChangedCallback IDownloadProgressChangedCallback;
#endif
#ifndef __IInstallationCompletedCallback_FWD_DEFINED__
#define __IInstallationCompletedCallback_FWD_DEFINED__
typedef interface IInstallationCompletedCallback IInstallationCompletedCallback;
#endif
#ifndef __IInstallationProgressChangedCallback_FWD_DEFINED__
#define __IInstallationProgressChangedCallback_FWD_DEFINED__
typedef interface IInstallationProgressChangedCallback IInstallationProgressChangedCallback;
#endif
#ifndef __IUpdateHistoryEntry_FWD_DEFINED__
#define __IUpdateHistoryEntry_FWD_DEFINED__
typedef interface IUpdateHistoryEntry IUpdateHistoryEntry;
#endif
#ifndef __IUpdateHistoryEntry2_FWD_DEFINED__
#define __IUpdateHistoryEntry2_FWD_DEFINED__
typedef interface IUpdateHistoryEntry2 IUpdateHistoryEntry2;
#endif
#ifndef __IUpdateDownloadContent_FWD_DEFINED__
#define __IUpdateDownloadContent_FWD_DEFINED__
typedef interface IUpdateDownloadContent IUpdateDownloadContent;
#endif
#ifndef __IUpdateDownloadContent2_FWD_DEFINED__
#define __IUpdateDownloadContent2_FWD_DEFINED__
typedef interface IUpdateDownloadContent2 IUpdateDownloadContent2;
#endif
#ifndef __StringCollection_FWD_DEFINED__
#define __StringCollection_FWD_DEFINED__
typedef struct StringCollection StringCollection;
#endif
#ifndef __UpdateSearcher_FWD_DEFINED__
#define __UpdateSearcher_FWD_DEFINED__
typedef struct UpdateSearcher UpdateSearcher;
#endif
#ifndef __WebProxy_FWD_DEFINED__
#define __WebProxy_FWD_DEFINED__
typedef struct WebProxy WebProxy;
#endif
#ifndef __SystemInformation_FWD_DEFINED__
#define __SystemInformation_FWD_DEFINED__
typedef struct SystemInformation SystemInformation;
#endif
#ifndef __WindowsUpdateAgentInfo_FWD_DEFINED__
#define __WindowsUpdateAgentInfo_FWD_DEFINED__
typedef struct WindowsUpdateAgentInfo WindowsUpdateAgentInfo;
#endif
#ifndef __AutomaticUpdates_FWD_DEFINED__
#define __AutomaticUpdates_FWD_DEFINED__
typedef struct AutomaticUpdates AutomaticUpdates;
#endif
#ifndef __UpdateCollection_FWD_DEFINED__
#define __UpdateCollection_FWD_DEFINED__
typedef struct UpdateCollection UpdateCollection;
#endif
#ifndef __UpdateDownloader_FWD_DEFINED__
#define __UpdateDownloader_FWD_DEFINED__
typedef struct UpdateDownloader UpdateDownloader;
#endif
#ifndef __UpdateInstaller_FWD_DEFINED__
#define __UpdateInstaller_FWD_DEFINED__
typedef struct UpdateInstaller UpdateInstaller;
#endif
#ifndef __UpdateSession_FWD_DEFINED__
#define __UpdateSession_FWD_DEFINED__
typedef struct UpdateSession UpdateSession;
#endif
#ifndef __UpdateServiceManager_FWD_DEFINED__
#define __UpdateServiceManager_FWD_DEFINED__
typedef struct UpdateServiceManager UpdateServiceManager;
#endif
#ifndef __InstallationAgent_FWD_DEFINED__
#define __InstallationAgent_FWD_DEFINED__
typedef struct InstallationAgent InstallationAgent;
#endif
#include <oaidl.h>
#pragma comment(lib, "wuguid.lib")
DEFINE_GUID(LIBID_WUApiLib, 0xB596CC9F, 0x56E5, 0x419E, 0xA6, 0x22, 0xE0, 0x1B, 0xB4, 0x57, 0x43, 0x1E);
DEFINE_GUID(IID_IUpdateLockdown, 0xa976c28d, 0x75a1, 0x42aa, 0x94, 0xae, 0x8a, 0xf8, 0xb8, 0x72, 0x08, 0x9a);
DEFINE_GUID(IID_IStringCollection, 0xeff90582, 0x2ddc, 0x480f, 0xa0, 0x6d, 0x60, 0xf3, 0xfb, 0xc3, 0x62, 0xc3);
DEFINE_GUID(IID_IWebProxy, 0x174c81fe, 0xaecd, 0x4dae, 0xb8, 0xa0, 0x2c, 0x63, 0x18, 0xdd, 0x86, 0xa8);
DEFINE_GUID(IID_ISystemInformation, 0xade87bf7, 0x7b56, 0x4275, 0x8f, 0xab, 0xb9, 0xb0, 0xe5, 0x91, 0x84, 0x4b);
DEFINE_GUID(IID_IWindowsUpdateAgentInfo, 0x85713FA1, 0x7796, 0x4FA2, 0xBE, 0x3B, 0xE2, 0xD6, 0x12, 0x4D, 0xD3, 0x73);
DEFINE_GUID(IID_IAutomaticUpdatesResults, 0xe7a4d634, 0x7942, 0x4DD9, 0xA1, 0x11, 0x82, 0x22, 0x8b, 0xa3, 0x39, 0x1);
DEFINE_GUID(IID_IAutomaticUpdatesSettings, 0x2ee48f22, 0xaf3c, 0x405f, 0x89, 0x70, 0xf7, 0x1b, 0xe1, 0x2e, 0xe9, 0xa2);
DEFINE_GUID(IID_IAutomaticUpdatesSettings2, 0x6abc136a, 0xc3ca, 0x4384, 0x81, 0x71, 0xcb, 0x2b, 0x1e, 0x59, 0xb8, 0xdc);
DEFINE_GUID(IID_IAutomaticUpdatesSettings3, 0xb587f5c3, 0xf57e, 0x485f, 0xbb, 0xf5, 0x0d, 0x18, 0x1c, 0x5c, 0xd0, 0xdc);
DEFINE_GUID(IID_IAutomaticUpdates, 0x673425bf, 0xc082, 0x4c7c, 0xbd, 0xfd, 0x56, 0x94, 0x64, 0xb8, 0xe0, 0xce);
DEFINE_GUID(IID_IAutomaticUpdates2, 0x4A2f5C31, 0xCFD9, 0x410E, 0xB7, 0xFB, 0x29, 0xA6, 0x53, 0x97, 0x3A, 0xF);
DEFINE_GUID(IID_IUpdateIdentity, 0x46297823, 0x9940, 0x4c09, 0xae, 0xd9, 0xcd, 0x3e, 0xa6, 0xd0, 0x59, 0x68);
DEFINE_GUID(IID_IImageInformation, 0x7c907864, 0x346c, 0x4aeb, 0x8f, 0x3f, 0x57, 0xda, 0x28, 0x9f, 0x96, 0x9f);
DEFINE_GUID(IID_ICategory, 0x81ddc1b8, 0x9d35, 0x47a6, 0xb4, 0x71, 0x5b, 0x80, 0xf5, 0x19, 0x22, 0x3b);
DEFINE_GUID(IID_ICategoryCollection, 0x3a56bfb8, 0x576c, 0x43f7, 0x93, 0x35, 0xfe, 0x48, 0x38, 0xfd, 0x7e, 0x37);
DEFINE_GUID(IID_IInstallationBehavior, 0xd9a59339, 0xe245, 0x4dbd, 0x96, 0x86, 0x4d, 0x57, 0x63, 0xe3, 0x96, 0x24);
DEFINE_GUID(IID_IUpdateDownloadContent, 0x54a2cb2d, 0x9a0c, 0x48b6, 0x8a, 0x50, 0x9a, 0xbb, 0x69, 0xee, 0x2d, 0x02);
DEFINE_GUID(IID_IUpdateDownloadContent2, 0xc97ad11b, 0xf257, 0x420b, 0x9d, 0x9f, 0x37, 0x7f, 0x73, 0x3f, 0x6f, 0x68);
DEFINE_GUID(IID_IUpdateDownloadContentCollection, 0xbc5513c8, 0xb3b8, 0x4bf7, 0xa4, 0xd4, 0x36, 0x1c, 0x0d, 0x8c, 0x88, 0xba);
DEFINE_GUID(IID_IUpdate, 0x6a92b07a, 0xd821, 0x4682, 0xb4, 0x23, 0x5c, 0x80, 0x50, 0x22, 0xcc, 0x4d);
DEFINE_GUID(IID_IUpdate2, 0x144fe9b0, 0xd23d, 0x4a8b, 0x86, 0x34, 0xfb, 0x44, 0x57, 0x53, 0x3b, 0x7a);
DEFINE_GUID(IID_IUpdate3, 0x112EDA6B, 0x95B3, 0x476F, 0x9D, 0x90, 0xAE, 0xE8, 0x2C, 0x6B, 0x81, 0x81);
DEFINE_GUID(IID_IUpdate4, 0x27e94b0d, 0x5139, 0x49a2, 0x9a, 0x61, 0x93, 0x52, 0x2d, 0xc5, 0x46, 0x52);
DEFINE_GUID(IID_IUpdate5, 0xc1c2f21a, 0xd2f4, 0x4902, 0xb5, 0xc6, 0x8a, 0x08, 0x1c, 0x19, 0xa8, 0x90);
DEFINE_GUID(IID_IWindowsDriverUpdate, 0xb383cd1a, 0x5ce9, 0x4504, 0x9f, 0x63, 0x76, 0x4b, 0x12, 0x36, 0xf1, 0x91);
DEFINE_GUID(IID_IWindowsDriverUpdate2, 0x615c4269, 0x7a48, 0x43bd, 0x96, 0xb7, 0xbf, 0x6c, 0xa2, 0x7d, 0x6c, 0x3e);
DEFINE_GUID(IID_IWindowsDriverUpdate3, 0x49EBD502, 0x4A96, 0x41BD, 0x9E, 0x3E, 0x4C, 0x50, 0x57, 0xF4, 0x25, 0x0C);
DEFINE_GUID(IID_IWindowsDriverUpdate4, 0x004C6A2B, 0x0C19, 0x4c69, 0x9F, 0x5C, 0xA2, 0x69, 0xB2, 0x56, 0x0D, 0xB9);
DEFINE_GUID(IID_IWindowsDriverUpdate5, 0x70CF5C82, 0x8642, 0x42bb, 0x9d, 0xbc, 0x0c, 0xfd, 0x26, 0x3c, 0x6c, 0x4f);
DEFINE_GUID(IID_IWindowsDriverUpdateEntryCollection, 0x0D521700, 0xA372, 0x4bef, 0x82, 0x8B, 0x3D, 0x00, 0xC1, 0x0A, 0xDE, 0xBD);
DEFINE_GUID(IID_IWindowsDriverUpdateEntry, 0xED8BFE40, 0xA60B, 0x42ea, 0x96, 0x52, 0x81, 0x7D, 0xFC, 0xFA, 0x23, 0xEC);
DEFINE_GUID(IID_IUpdateCollection, 0x07f7438c, 0x7709, 0x4ca5, 0xb5, 0x18, 0x91, 0x27, 0x92, 0x88, 0x13, 0x4e);
DEFINE_GUID(IID_IUpdateException, 0xa376dd5e, 0x09d4, 0x427f, 0xaf, 0x7c, 0xfe, 0xd5, 0xb6, 0xe1, 0xc1, 0xd6);
DEFINE_GUID(IID_IInvalidProductLicenseException, 0xa37d00f5, 0x7bb0, 0x4953, 0xb4, 0x14, 0xf9, 0xe9, 0x83, 0x26, 0xf2, 0xe8);
DEFINE_GUID(IID_IUpdateExceptionCollection, 0x503626a3, 0x8e14, 0x4729, 0x93, 0x55, 0x0f, 0xe6, 0x64, 0xbd, 0x23, 0x21);
DEFINE_GUID(IID_ISearchResult, 0xd40cff62, 0xe08c, 0x4498, 0x94, 0x1a, 0x01, 0xe2, 0x5f, 0x0f, 0xd3, 0x3c);
DEFINE_GUID(IID_ISearchJob, 0x7366ea16, 0x7a1a, 0x4ea2, 0xb0, 0x42, 0x97, 0x3d, 0x3e, 0x9c, 0xd9, 0x9b);
DEFINE_GUID(IID_ISearchCompletedCallbackArgs, 0xa700a634, 0x2850, 0x4c47, 0x93, 0x8a, 0x9e, 0x4b, 0x6e, 0x5a, 0xf9, 0xa6);
DEFINE_GUID(IID_ISearchCompletedCallback, 0x88aee058, 0xd4b0, 0x4725, 0xa2, 0xf1, 0x81, 0x4a, 0x67, 0xae, 0x96, 0x4c);
DEFINE_GUID(IID_IUpdateHistoryEntry, 0xbe56a644, 0xaf0e, 0x4e0e, 0xa3, 0x11, 0xc1, 0xd8, 0xe6, 0x95, 0xcb, 0xff);
DEFINE_GUID(IID_IUpdateHistoryEntry2, 0xc2bfb780, 0x4539, 0x4132, 0xab, 0x8c, 0x0a, 0x87, 0x72, 0x01, 0x3a, 0xb6);
DEFINE_GUID(IID_IUpdateHistoryEntryCollection, 0xa7f04f3c, 0xa290, 0x435b, 0xaa, 0xdf, 0xa1, 0x16, 0xc3, 0x35, 0x7a, 0x5c);
DEFINE_GUID(IID_IUpdateSearcher, 0x8f45abf1, 0xf9ae, 0x4b95, 0xa9, 0x33, 0xf0, 0xf6, 0x6e, 0x50, 0x56, 0xea);
DEFINE_GUID(IID_IUpdateSearcher2, 0x4cbdcb2d, 0x1589, 0x4beb, 0xbd, 0x1c, 0x3e, 0x58, 0x2f, 0xf0, 0xad, 0xd0);
DEFINE_GUID(IID_IUpdateSearcher3, 0x4c6895d, 0xeaf2, 0x4034, 0x97, 0xf3, 0x31, 0x1d, 0xe9, 0xbe, 0x41, 0x3a);
DEFINE_GUID(IID_IUpdateDownloadResult, 0xbf99af76, 0xb575, 0x42ad, 0x8a, 0xa4, 0x33, 0xcb, 0xb5, 0x47, 0x7a, 0xf1);
DEFINE_GUID(IID_IDownloadResult, 0xdaa4fdd0, 0x4727, 0x4dbe, 0xa1, 0xe7, 0x74, 0x5d, 0xca, 0x31, 0x71, 0x44);
DEFINE_GUID(IID_IDownloadProgress, 0xd31a5bac, 0xf719, 0x4178, 0x9d, 0xbb, 0x5e, 0x2c, 0xb4, 0x7f, 0xd1, 0x8a);
DEFINE_GUID(IID_IDownloadJob, 0xc574de85, 0x7358, 0x43f6, 0xaa, 0xe8, 0x86, 0x97, 0xe6, 0x2d, 0x8b, 0xa7);
DEFINE_GUID(IID_IDownloadCompletedCallbackArgs, 0xfa565b23, 0x498c, 0x47a0, 0x97, 0x9d, 0xe7, 0xd5, 0xb1, 0x81, 0x33, 0x60);
DEFINE_GUID(IID_IDownloadCompletedCallback, 0x77254866, 0x9f5b, 0x4c8e, 0xb9, 0xe2, 0xc7, 0x7a, 0x85, 0x30, 0xd6, 0x4b);
DEFINE_GUID(IID_IDownloadProgressChangedCallbackArgs, 0x324ff2c6, 0x4981, 0x4b04, 0x94, 0x12, 0x57, 0x48, 0x17, 0x45, 0xab, 0x24);
DEFINE_GUID(IID_IDownloadProgressChangedCallback, 0x8c3f1cdd, 0x6173, 0x4591, 0xae, 0xbd, 0xa5, 0x6a, 0x53, 0xca, 0x77, 0xc1);
DEFINE_GUID(IID_IUpdateDownloader, 0x68f1c6f9, 0x7ecc, 0x4666, 0xa4, 0x64, 0x24, 0x7f, 0xe1, 0x24, 0x96, 0xc3);
DEFINE_GUID(IID_IUpdateInstallationResult, 0xd940f0f8, 0x3cbb, 0x4fd0, 0x99, 0x3f, 0x47, 0x1e, 0x7f, 0x23, 0x28, 0xad);
DEFINE_GUID(IID_IInstallationResult, 0xa43c56d6, 0x7451, 0x48d4, 0xaf, 0x96, 0xb6, 0xcd, 0x2d, 0x0d, 0x9b, 0x7a);
DEFINE_GUID(IID_IInstallationProgress, 0x345c8244, 0x43a3, 0x4e32, 0xa3, 0x68, 0x65, 0xf0, 0x73, 0xb7, 0x6f, 0x36);
DEFINE_GUID(IID_IInstallationJob, 0x5c209f0b, 0xbad5, 0x432a, 0x95, 0x56, 0x46, 0x99, 0xbe, 0xd2, 0x63, 0x8a);
DEFINE_GUID(IID_IInstallationCompletedCallbackArgs, 0x250e2106, 0x8efb, 0x4705, 0x96, 0x53, 0xef, 0x13, 0xc5, 0x81, 0xb6, 0xa1);
DEFINE_GUID(IID_IInstallationCompletedCallback, 0x45f4f6f3, 0xd602, 0x4f98, 0x9a, 0x8a, 0x3e, 0xfa, 0x15, 0x2a, 0xd2, 0xd3);
DEFINE_GUID(IID_IInstallationProgressChangedCallbackArgs, 0xe4f14e1e, 0x689d, 0x4218, 0xa0, 0xb9, 0xbc, 0x18, 0x9c, 0x48, 0x4a, 0x01);
DEFINE_GUID(IID_IInstallationProgressChangedCallback, 0xe01402d5, 0xf8da, 0x43ba, 0xa0, 0x12, 0x38, 0x89, 0x4b, 0xd0, 0x48, 0xf1);
DEFINE_GUID(IID_IUpdateInstaller, 0x7b929c68, 0xccdc, 0x4226, 0x96, 0xb1, 0x87, 0x24, 0x60, 0x0b, 0x54, 0xc2);
DEFINE_GUID(IID_IUpdateInstaller2, 0x3442d4fe, 0x224d, 0x4cee, 0x98, 0xcf, 0x30, 0xe0, 0xc4, 0xd2, 0x29, 0xe6);
DEFINE_GUID(IID_IUpdateSession, 0x816858a4, 0x260d, 0x4260, 0x93, 0x3a, 0x25, 0x85, 0xf1, 0xab, 0xc7, 0x6b);
DEFINE_GUID(IID_IUpdateSession2, 0x91caf7b0, 0xeb23, 0x49ed, 0x99, 0x37, 0xc5, 0x2d, 0x81, 0x7f, 0x46, 0xf7);
DEFINE_GUID(IID_IUpdateSession3, 0x918efd1e, 0xb5d8, 0x4c90, 0x85, 0x40, 0xae, 0xb9, 0xbd, 0xc5, 0x6f, 0x9d);
DEFINE_GUID(IID_IUpdateService, 0x76b3b17e, 0xaed6, 0x4da5, 0x85, 0xf0, 0x83, 0x58, 0x7f, 0x81, 0xab, 0xe3);
DEFINE_GUID(IID_IUpdateService2, 0x1518b460, 0x6518, 0x4172, 0x94, 0x0f, 0xc7, 0x58, 0x83, 0xb2, 0x4c, 0xeb);
DEFINE_GUID(IID_IUpdateServiceCollection, 0x9b0353aa, 0x0e52, 0x44ff, 0xb8, 0xb0, 0x1f, 0x7f, 0xa0, 0x43, 0x7f, 0x88);
DEFINE_GUID(IID_IUpdateServiceRegistration, 0xdde02280, 0x12b3, 0x4e0b, 0x93, 0x7b, 0x67, 0x47, 0xf6, 0xac, 0xb2, 0x86);
DEFINE_GUID(IID_IUpdateServiceManager, 0x23857E3C, 0x02BA, 0x44A3, 0x94, 0x23, 0xB1, 0xC9, 0x00, 0x80, 0x5F, 0x37);
DEFINE_GUID(IID_IUpdateServiceManager2, 0x0BB8531D, 0x7E8D, 0x424F, 0x98, 0x6C, 0xA0, 0xB8, 0xF6, 0x0A, 0x3E, 0x7B);
DEFINE_GUID(IID_IInstallationAgent, 0x925CBC18, 0xA2EA, 0x4648, 0xBF, 0x1C, 0xEC, 0x8B, 0xAD, 0xCF, 0xE2, 0x0A);
DEFINE_GUID(CLSID_StringCollection, 0x72C97D74, 0x7C3B, 0x40AE, 0xB7, 0x7D, 0xAB, 0xDB, 0x22, 0xEB, 0xA6, 0xFB);
DEFINE_GUID(CLSID_UpdateSearcher, 0xB699E5E8, 0x67FF, 0x4177, 0x88, 0xB0, 0x36, 0x84, 0xA3, 0x38, 0x8B, 0xFB);
DEFINE_GUID(CLSID_WebProxy, 0x650503cf, 0x9108, 0x4ddc, 0xa2, 0xce, 0x6c, 0x23, 0x41, 0xe1, 0xc5, 0x82);
DEFINE_GUID(CLSID_SystemInformation, 0xC01B9BA0, 0xBEA7, 0x41BA, 0xB6, 0x04, 0xD0, 0xA3, 0x6F, 0x46, 0x91, 0x33);
DEFINE_GUID(CLSID_WindowsUpdateAgentInfo, 0xC2E88C2F, 0x6F5B, 0x4AAA, 0x89, 0x4B, 0x55, 0xC8, 0x47, 0xAD, 0x3A, 0x2D);
DEFINE_GUID(CLSID_AutomaticUpdates, 0xBFE18E9C, 0x6D87, 0x4450, 0xB3, 0x7C, 0xE0, 0x2F, 0x0B, 0x37, 0x38, 0x03);
DEFINE_GUID(CLSID_UpdateCollection, 0x13639463, 0x00DB, 0x4646, 0x80, 0x3D, 0x52, 0x80, 0x26, 0x14, 0x0D, 0x88);
DEFINE_GUID(CLSID_UpdateDownloader, 0x5BAF654A, 0x5A07, 0x4264, 0xA2, 0x55, 0x9F, 0xF5, 0x4C, 0x71, 0x51, 0xE7);
DEFINE_GUID(CLSID_UpdateInstaller, 0xD2E0FE7F, 0xD23E, 0x48E1, 0x93, 0xC0, 0x6F, 0xA8, 0xCC, 0x34, 0x64, 0x74);
DEFINE_GUID(CLSID_UpdateSession, 0x4CB43D7F, 0x7EEE, 0x4906, 0x86, 0x98, 0x60, 0xDA, 0x1C, 0x38, 0xF2, 0xFE);
DEFINE_GUID(CLSID_UpdateServiceManager, 0xF8D253D9, 0x89A4, 0x4DAA, 0x87, 0xB6, 0x11, 0x68, 0x36, 0x9F, 0x0B, 0x21);
DEFINE_GUID(CLSID_InstallationAgent, 0x317E92FC, 0x1679, 0x46FD, 0xA0, 0xB5, 0xF0, 0x89, 0x14, 0xDD, 0x86, 0x23);
typedef enum tagAutomaticUpdatesNotificationLevel
{
	aunlNotConfigured = 0,
	aunlDisabled = 1,
	aunlNotifyBeforeDownload = 2,
	aunlNotifyBeforeInstallation = 3,
	aunlScheduledInstallation = 4
} AutomaticUpdatesNotificationLevel;
typedef enum tagAutomaticUpdatesScheduledInstallationDay
{
	ausidEveryDay = 0,
	ausidEverySunday = 1,
	ausidEveryMonday = 2,
	ausidEveryTuesday = 3,
	ausidEveryWednesday = 4,
	ausidEveryThursday = 5,
	ausidEveryFriday = 6,
	ausidEverySaturday = 7
} AutomaticUpdatesScheduledInstallationDay;
typedef enum tagDownloadPhase
{
	dphInitializing = 1,
	dphDownloading = 2,
	dphVerifying = 3
} DownloadPhase;
typedef enum tagDownloadPriority
{
	dpLow = 1,
	dpNormal = 2,
	dpHigh = 3
} DownloadPriority;
typedef enum tagAutoSelectionMode
{
	asLetWindowsUpdateDecide = 0,
	asAutoSelectIfDownloaded = 1,
	asNeverAutoSelect = 2,
	asAlwaysAutoSelect = 3
} AutoSelectionMode;
typedef enum tagAutoDownloadMode
{
	adLetWindowsUpdateDecide = 0,
	adNeverAutoDownload = 1,
	adAlwaysAutoDownload = 2
} AutoDownloadMode;
typedef enum tagInstallationImpact
{
	iiNormal = 0,
	iiMinor = 1,
	iiRequiresExclusiveHandling = 2
} InstallationImpact;
typedef enum tagInstallationRebootBehavior
{
	irbNeverReboots = 0,
	irbAlwaysRequiresReboot = 1,
	irbCanRequestReboot = 2
} InstallationRebootBehavior;
typedef enum tagOperationResultCode
{
	orcNotStarted = 0,
	orcInProgress = 1,
	orcSucceeded = 2,
	orcSucceededWithErrors = 3,
	orcFailed = 4,
	orcAborted = 5
} OperationResultCode;
typedef enum tagServerSelection
{
	ssDefault = 0,
	ssManagedServer = 1,
	ssWindowsUpdate = 2,
	ssOthers = 3
} ServerSelection;
typedef enum tagUpdateType
{
	utSoftware = 1,
	utDriver = 2
} UpdateType;
typedef enum tagUpdateOperation
{
	uoInstallation = 1,
	uoUninstallation = 2
} UpdateOperation;
typedef enum tagDeploymentAction
{
	daNone = 0,
	daInstallation = 1,
	daUninstallation = 2,
	daDetection = 3
} DeploymentAction;
typedef enum tagUpdateExceptionContext
{
	uecGeneral = 1,
	uecWindowsDriver = 2,
	uecWindowsInstaller = 3
} UpdateExceptionContext;
typedef enum tagAutomaticUpdatesUserType
{
	auutCurrentUser = 1,
	auutLocalAdministrator = 2
} AutomaticUpdatesUserType;
typedef enum tagAutomaticUpdatesPermissionType
{
	auptSetNotificationLevel = 1,
	auptDisableAutomaticUpdates = 2,
	auptSetIncludeRecommendedUpdates = 3,
	auptSetFeaturedUpdatesEnabled = 4,
	auptSetNonAdministratorsElevated = 5
} AutomaticUpdatesPermissionType;
typedef enum tagUpdateServiceRegistrationState
{
	usrsNotRegistered = 1,
	usrsRegistrationPending = 2,
	usrsRegistered = 3
} UpdateServiceRegistrationState;
typedef enum tagSearchScope
{
	searchScopeDefault = 0,
	searchScopeMachineOnly = 1,
	searchScopeCurrentUserOnly = 2,
	searchScopeMachineAndCurrentUser = 3,
	searchScopeMachineAndAllUsers = 4,
	searchScopeAllUsers = 5
} SearchScope;
#define	UPDATE_LOCKDOWN_WEBSITE_ACCESS	( 0x1 )
extern RPC_IF_HANDLE __MIDL_itf_wuapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wuapi_0000_0000_v0_0_s_ifspec;
#ifndef __IUpdateLockdown_INTERFACE_DEFINED__
#define __IUpdateLockdown_INTERFACE_DEFINED__
extern const IID IID_IUpdateLockdown;
typedef struct IUpdateLockdownVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateLockdown * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateLockdown * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateLockdown * This);
	HRESULT(STDMETHODCALLTYPE * LockDown) (IUpdateLockdown * This, LONG flags);
	END_INTERFACE
}  IUpdateLockdownVtbl;
interface IUpdateLockdown
{
	CONST_VTBL struct IUpdateLockdownVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateLockdown_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateLockdown_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateLockdown_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateLockdown_LockDown(This,flags) ( (This)->lpVtbl -> LockDown(This,flags) )
#endif
#endif
#ifndef __IStringCollection_INTERFACE_DEFINED__
#define __IStringCollection_INTERFACE_DEFINED__
extern const IID IID_IStringCollection;
typedef struct IStringCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStringCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStringCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStringCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IStringCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IStringCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IStringCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IStringCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IStringCollection * This, LONG index, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * put_Item) (IStringCollection * This, LONG index, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IStringCollection * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IStringCollection * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ReadOnly) (IStringCollection * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * Add) (IStringCollection * This, BSTR value, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * Clear) (IStringCollection * This);
	HRESULT(STDMETHODCALLTYPE * Copy) (IStringCollection * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * Insert) (IStringCollection * This, LONG index, BSTR value);
	HRESULT(STDMETHODCALLTYPE * RemoveAt) (IStringCollection * This, LONG index);
	END_INTERFACE
}  IStringCollectionVtbl;
interface IStringCollection
{
	CONST_VTBL struct IStringCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStringCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStringCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStringCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStringCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IStringCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IStringCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IStringCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IStringCollection_get_Item(This,index,retval) ( (This)->lpVtbl -> get_Item(This,index,retval) )
#define IStringCollection_put_Item(This,index,value) ( (This)->lpVtbl -> put_Item(This,index,value) )
#define IStringCollection_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define IStringCollection_get_Count(This,retval) ( (This)->lpVtbl -> get_Count(This,retval) )
#define IStringCollection_get_ReadOnly(This,retval) ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
#define IStringCollection_Add(This,value,retval) ( (This)->lpVtbl -> Add(This,value,retval) )
#define IStringCollection_Clear(This) ( (This)->lpVtbl -> Clear(This) )
#define IStringCollection_Copy(This,retval) ( (This)->lpVtbl -> Copy(This,retval) )
#define IStringCollection_Insert(This,index,value) ( (This)->lpVtbl -> Insert(This,index,value) )
#define IStringCollection_RemoveAt(This,index) ( (This)->lpVtbl -> RemoveAt(This,index) )
#endif
#endif
#ifndef __IWebProxy_INTERFACE_DEFINED__
#define __IWebProxy_INTERFACE_DEFINED__
extern const IID IID_IWebProxy;
typedef struct IWebProxyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWebProxy * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWebProxy * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWebProxy * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWebProxy * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWebProxy * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWebProxy * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWebProxy * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Address) (IWebProxy * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * put_Address) (IWebProxy * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_BypassList) (IWebProxy * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * put_BypassList) (IWebProxy * This, IStringCollection * value);
	HRESULT(STDMETHODCALLTYPE * get_BypassProxyOnLocal) (IWebProxy * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_BypassProxyOnLocal) (IWebProxy * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_ReadOnly) (IWebProxy * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_UserName) (IWebProxy * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * put_UserName) (IWebProxy * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * SetPassword) (IWebProxy * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * PromptForCredentials) (IWebProxy * This, IUnknown * parentWindow, BSTR title);
	HRESULT(STDMETHODCALLTYPE * PromptForCredentialsFromHwnd) (IWebProxy * This, HWND parentWindow, BSTR title);
	HRESULT(STDMETHODCALLTYPE * get_AutoDetect) (IWebProxy * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_AutoDetect) (IWebProxy * This, VARIANT_BOOL value);
	END_INTERFACE
}  IWebProxyVtbl;
interface IWebProxy
{
	CONST_VTBL struct IWebProxyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWebProxy_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWebProxy_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWebProxy_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWebProxy_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWebProxy_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWebProxy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWebProxy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWebProxy_get_Address(This,retval) ( (This)->lpVtbl -> get_Address(This,retval) )
#define IWebProxy_put_Address(This,value) ( (This)->lpVtbl -> put_Address(This,value) )
#define IWebProxy_get_BypassList(This,retval) ( (This)->lpVtbl -> get_BypassList(This,retval) )
#define IWebProxy_put_BypassList(This,value) ( (This)->lpVtbl -> put_BypassList(This,value) )
#define IWebProxy_get_BypassProxyOnLocal(This,retval) ( (This)->lpVtbl -> get_BypassProxyOnLocal(This,retval) )
#define IWebProxy_put_BypassProxyOnLocal(This,value) ( (This)->lpVtbl -> put_BypassProxyOnLocal(This,value) )
#define IWebProxy_get_ReadOnly(This,retval) ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
#define IWebProxy_get_UserName(This,retval) ( (This)->lpVtbl -> get_UserName(This,retval) )
#define IWebProxy_put_UserName(This,value) ( (This)->lpVtbl -> put_UserName(This,value) )
#define IWebProxy_SetPassword(This,value) ( (This)->lpVtbl -> SetPassword(This,value) )
#define IWebProxy_PromptForCredentials(This,parentWindow,title) ( (This)->lpVtbl -> PromptForCredentials(This,parentWindow,title) )
#define IWebProxy_PromptForCredentialsFromHwnd(This,parentWindow,title) ( (This)->lpVtbl -> PromptForCredentialsFromHwnd(This,parentWindow,title) )
#define IWebProxy_get_AutoDetect(This,retval) ( (This)->lpVtbl -> get_AutoDetect(This,retval) )
#define IWebProxy_put_AutoDetect(This,value) ( (This)->lpVtbl -> put_AutoDetect(This,value) )
#endif
#endif
#ifndef __ISystemInformation_INTERFACE_DEFINED__
#define __ISystemInformation_INTERFACE_DEFINED__
extern const IID IID_ISystemInformation;
typedef struct ISystemInformationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISystemInformation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISystemInformation * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISystemInformation * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ISystemInformation * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ISystemInformation * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ISystemInformation * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ISystemInformation * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_OemHardwareSupportLink) (ISystemInformation * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_RebootRequired) (ISystemInformation * This, VARIANT_BOOL * retval);
	END_INTERFACE
}  ISystemInformationVtbl;
interface ISystemInformation
{
	CONST_VTBL struct ISystemInformationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISystemInformation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISystemInformation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISystemInformation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISystemInformation_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISystemInformation_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISystemInformation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISystemInformation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISystemInformation_get_OemHardwareSupportLink(This,retval) ( (This)->lpVtbl -> get_OemHardwareSupportLink(This,retval) )
#define ISystemInformation_get_RebootRequired(This,retval) ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
#endif
#endif
#ifndef __IWindowsUpdateAgentInfo_INTERFACE_DEFINED__
#define __IWindowsUpdateAgentInfo_INTERFACE_DEFINED__
extern const IID IID_IWindowsUpdateAgentInfo;
typedef struct IWindowsUpdateAgentInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWindowsUpdateAgentInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWindowsUpdateAgentInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWindowsUpdateAgentInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWindowsUpdateAgentInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWindowsUpdateAgentInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWindowsUpdateAgentInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWindowsUpdateAgentInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetInfo) (IWindowsUpdateAgentInfo * This, VARIANT varInfoIdentifier, VARIANT * retval);
	END_INTERFACE
}  IWindowsUpdateAgentInfoVtbl;
interface IWindowsUpdateAgentInfo
{
	CONST_VTBL struct IWindowsUpdateAgentInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWindowsUpdateAgentInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWindowsUpdateAgentInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWindowsUpdateAgentInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWindowsUpdateAgentInfo_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWindowsUpdateAgentInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWindowsUpdateAgentInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWindowsUpdateAgentInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWindowsUpdateAgentInfo_GetInfo(This,varInfoIdentifier,retval) ( (This)->lpVtbl -> GetInfo(This,varInfoIdentifier,retval) )
#endif
#endif
#ifndef __IAutomaticUpdatesResults_INTERFACE_DEFINED__
#define __IAutomaticUpdatesResults_INTERFACE_DEFINED__
extern const IID IID_IAutomaticUpdatesResults;
typedef struct IAutomaticUpdatesResultsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAutomaticUpdatesResults * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAutomaticUpdatesResults * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAutomaticUpdatesResults * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAutomaticUpdatesResults * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAutomaticUpdatesResults * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAutomaticUpdatesResults * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAutomaticUpdatesResults * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_LastSearchSuccessDate) (IAutomaticUpdatesResults * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_LastInstallationSuccessDate) (IAutomaticUpdatesResults * This, VARIANT * retval);
	END_INTERFACE
}  IAutomaticUpdatesResultsVtbl;
interface IAutomaticUpdatesResults
{
	CONST_VTBL struct IAutomaticUpdatesResultsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAutomaticUpdatesResults_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAutomaticUpdatesResults_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAutomaticUpdatesResults_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAutomaticUpdatesResults_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAutomaticUpdatesResults_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAutomaticUpdatesResults_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAutomaticUpdatesResults_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAutomaticUpdatesResults_get_LastSearchSuccessDate(This,retval) ( (This)->lpVtbl -> get_LastSearchSuccessDate(This,retval) )
#define IAutomaticUpdatesResults_get_LastInstallationSuccessDate(This,retval) ( (This)->lpVtbl -> get_LastInstallationSuccessDate(This,retval) )
#endif
#endif
#ifndef __IAutomaticUpdatesSettings_INTERFACE_DEFINED__
#define __IAutomaticUpdatesSettings_INTERFACE_DEFINED__
extern const IID IID_IAutomaticUpdatesSettings;
typedef struct IAutomaticUpdatesSettingsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAutomaticUpdatesSettings * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAutomaticUpdatesSettings * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAutomaticUpdatesSettings * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAutomaticUpdatesSettings * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAutomaticUpdatesSettings * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAutomaticUpdatesSettings * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAutomaticUpdatesSettings * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_NotificationLevel) (IAutomaticUpdatesSettings * This, AutomaticUpdatesNotificationLevel * retval);
	HRESULT(STDMETHODCALLTYPE * put_NotificationLevel) (IAutomaticUpdatesSettings * This, AutomaticUpdatesNotificationLevel value);
	HRESULT(STDMETHODCALLTYPE * get_ReadOnly) (IAutomaticUpdatesSettings * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Required) (IAutomaticUpdatesSettings * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_ScheduledInstallationDay) (IAutomaticUpdatesSettings * This, AutomaticUpdatesScheduledInstallationDay * retval);
	HRESULT(STDMETHODCALLTYPE * put_ScheduledInstallationDay) (IAutomaticUpdatesSettings * This, AutomaticUpdatesScheduledInstallationDay value);
	HRESULT(STDMETHODCALLTYPE * get_ScheduledInstallationTime) (IAutomaticUpdatesSettings * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * put_ScheduledInstallationTime) (IAutomaticUpdatesSettings * This, LONG value);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IAutomaticUpdatesSettings * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IAutomaticUpdatesSettings * This);
	END_INTERFACE
}  IAutomaticUpdatesSettingsVtbl;
interface IAutomaticUpdatesSettings
{
	CONST_VTBL struct IAutomaticUpdatesSettingsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAutomaticUpdatesSettings_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAutomaticUpdatesSettings_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAutomaticUpdatesSettings_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAutomaticUpdatesSettings_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAutomaticUpdatesSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAutomaticUpdatesSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAutomaticUpdatesSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAutomaticUpdatesSettings_get_NotificationLevel(This,retval) ( (This)->lpVtbl -> get_NotificationLevel(This,retval) )
#define IAutomaticUpdatesSettings_put_NotificationLevel(This,value) ( (This)->lpVtbl -> put_NotificationLevel(This,value) )
#define IAutomaticUpdatesSettings_get_ReadOnly(This,retval) ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
#define IAutomaticUpdatesSettings_get_Required(This,retval) ( (This)->lpVtbl -> get_Required(This,retval) )
#define IAutomaticUpdatesSettings_get_ScheduledInstallationDay(This,retval) ( (This)->lpVtbl -> get_ScheduledInstallationDay(This,retval) )
#define IAutomaticUpdatesSettings_put_ScheduledInstallationDay(This,value) ( (This)->lpVtbl -> put_ScheduledInstallationDay(This,value) )
#define IAutomaticUpdatesSettings_get_ScheduledInstallationTime(This,retval) ( (This)->lpVtbl -> get_ScheduledInstallationTime(This,retval) )
#define IAutomaticUpdatesSettings_put_ScheduledInstallationTime(This,value) ( (This)->lpVtbl -> put_ScheduledInstallationTime(This,value) )
#define IAutomaticUpdatesSettings_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IAutomaticUpdatesSettings_Save(This) ( (This)->lpVtbl -> Save(This) )
#endif
#endif
#ifndef __IAutomaticUpdatesSettings2_INTERFACE_DEFINED__
#define __IAutomaticUpdatesSettings2_INTERFACE_DEFINED__
extern const IID IID_IAutomaticUpdatesSettings2;
typedef struct IAutomaticUpdatesSettings2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAutomaticUpdatesSettings2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAutomaticUpdatesSettings2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAutomaticUpdatesSettings2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAutomaticUpdatesSettings2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAutomaticUpdatesSettings2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAutomaticUpdatesSettings2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAutomaticUpdatesSettings2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_NotificationLevel) (IAutomaticUpdatesSettings2 * This, AutomaticUpdatesNotificationLevel * retval);
	HRESULT(STDMETHODCALLTYPE * put_NotificationLevel) (IAutomaticUpdatesSettings2 * This, AutomaticUpdatesNotificationLevel value);
	HRESULT(STDMETHODCALLTYPE * get_ReadOnly) (IAutomaticUpdatesSettings2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Required) (IAutomaticUpdatesSettings2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_ScheduledInstallationDay) (IAutomaticUpdatesSettings2 * This, AutomaticUpdatesScheduledInstallationDay * retval);
	HRESULT(STDMETHODCALLTYPE * put_ScheduledInstallationDay) (IAutomaticUpdatesSettings2 * This, AutomaticUpdatesScheduledInstallationDay value);
	HRESULT(STDMETHODCALLTYPE * get_ScheduledInstallationTime) (IAutomaticUpdatesSettings2 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * put_ScheduledInstallationTime) (IAutomaticUpdatesSettings2 * This, LONG value);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IAutomaticUpdatesSettings2 * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IAutomaticUpdatesSettings2 * This);
	HRESULT(STDMETHODCALLTYPE * get_IncludeRecommendedUpdates) (IAutomaticUpdatesSettings2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IncludeRecommendedUpdates) (IAutomaticUpdatesSettings2 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * CheckPermission) (IAutomaticUpdatesSettings2 * This, AutomaticUpdatesUserType userType, AutomaticUpdatesPermissionType permissionType, VARIANT_BOOL * userHasPermission);
	END_INTERFACE
}  IAutomaticUpdatesSettings2Vtbl;
interface IAutomaticUpdatesSettings2
{
	CONST_VTBL struct IAutomaticUpdatesSettings2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAutomaticUpdatesSettings2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAutomaticUpdatesSettings2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAutomaticUpdatesSettings2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAutomaticUpdatesSettings2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAutomaticUpdatesSettings2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAutomaticUpdatesSettings2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAutomaticUpdatesSettings2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAutomaticUpdatesSettings2_get_NotificationLevel(This,retval) ( (This)->lpVtbl -> get_NotificationLevel(This,retval) )
#define IAutomaticUpdatesSettings2_put_NotificationLevel(This,value) ( (This)->lpVtbl -> put_NotificationLevel(This,value) )
#define IAutomaticUpdatesSettings2_get_ReadOnly(This,retval) ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
#define IAutomaticUpdatesSettings2_get_Required(This,retval) ( (This)->lpVtbl -> get_Required(This,retval) )
#define IAutomaticUpdatesSettings2_get_ScheduledInstallationDay(This,retval) ( (This)->lpVtbl -> get_ScheduledInstallationDay(This,retval) )
#define IAutomaticUpdatesSettings2_put_ScheduledInstallationDay(This,value) ( (This)->lpVtbl -> put_ScheduledInstallationDay(This,value) )
#define IAutomaticUpdatesSettings2_get_ScheduledInstallationTime(This,retval) ( (This)->lpVtbl -> get_ScheduledInstallationTime(This,retval) )
#define IAutomaticUpdatesSettings2_put_ScheduledInstallationTime(This,value) ( (This)->lpVtbl -> put_ScheduledInstallationTime(This,value) )
#define IAutomaticUpdatesSettings2_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IAutomaticUpdatesSettings2_Save(This) ( (This)->lpVtbl -> Save(This) )
#define IAutomaticUpdatesSettings2_get_IncludeRecommendedUpdates(This,retval) ( (This)->lpVtbl -> get_IncludeRecommendedUpdates(This,retval) )
#define IAutomaticUpdatesSettings2_put_IncludeRecommendedUpdates(This,value) ( (This)->lpVtbl -> put_IncludeRecommendedUpdates(This,value) )
#define IAutomaticUpdatesSettings2_CheckPermission(This,userType,permissionType,userHasPermission) ( (This)->lpVtbl -> CheckPermission(This,userType,permissionType,userHasPermission) )
#endif
#endif
#ifndef __IAutomaticUpdatesSettings3_INTERFACE_DEFINED__
#define __IAutomaticUpdatesSettings3_INTERFACE_DEFINED__
extern const IID IID_IAutomaticUpdatesSettings3;
typedef struct IAutomaticUpdatesSettings3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAutomaticUpdatesSettings3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAutomaticUpdatesSettings3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAutomaticUpdatesSettings3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAutomaticUpdatesSettings3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAutomaticUpdatesSettings3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAutomaticUpdatesSettings3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAutomaticUpdatesSettings3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_NotificationLevel) (IAutomaticUpdatesSettings3 * This, AutomaticUpdatesNotificationLevel * retval);
	HRESULT(STDMETHODCALLTYPE * put_NotificationLevel) (IAutomaticUpdatesSettings3 * This, AutomaticUpdatesNotificationLevel value);
	HRESULT(STDMETHODCALLTYPE * get_ReadOnly) (IAutomaticUpdatesSettings3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Required) (IAutomaticUpdatesSettings3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_ScheduledInstallationDay) (IAutomaticUpdatesSettings3 * This, AutomaticUpdatesScheduledInstallationDay * retval);
	HRESULT(STDMETHODCALLTYPE * put_ScheduledInstallationDay) (IAutomaticUpdatesSettings3 * This, AutomaticUpdatesScheduledInstallationDay value);
	HRESULT(STDMETHODCALLTYPE * get_ScheduledInstallationTime) (IAutomaticUpdatesSettings3 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * put_ScheduledInstallationTime) (IAutomaticUpdatesSettings3 * This, LONG value);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IAutomaticUpdatesSettings3 * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IAutomaticUpdatesSettings3 * This);
	HRESULT(STDMETHODCALLTYPE * get_IncludeRecommendedUpdates) (IAutomaticUpdatesSettings3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IncludeRecommendedUpdates) (IAutomaticUpdatesSettings3 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * CheckPermission) (IAutomaticUpdatesSettings3 * This, AutomaticUpdatesUserType userType, AutomaticUpdatesPermissionType permissionType, VARIANT_BOOL * userHasPermission);
	HRESULT(STDMETHODCALLTYPE * get_NonAdministratorsElevated) (IAutomaticUpdatesSettings3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_NonAdministratorsElevated) (IAutomaticUpdatesSettings3 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_FeaturedUpdatesEnabled) (IAutomaticUpdatesSettings3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_FeaturedUpdatesEnabled) (IAutomaticUpdatesSettings3 * This, VARIANT_BOOL value);
	END_INTERFACE
}  IAutomaticUpdatesSettings3Vtbl;
interface IAutomaticUpdatesSettings3
{
	CONST_VTBL struct IAutomaticUpdatesSettings3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAutomaticUpdatesSettings3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAutomaticUpdatesSettings3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAutomaticUpdatesSettings3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAutomaticUpdatesSettings3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAutomaticUpdatesSettings3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAutomaticUpdatesSettings3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAutomaticUpdatesSettings3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAutomaticUpdatesSettings3_get_NotificationLevel(This,retval) ( (This)->lpVtbl -> get_NotificationLevel(This,retval) )
#define IAutomaticUpdatesSettings3_put_NotificationLevel(This,value) ( (This)->lpVtbl -> put_NotificationLevel(This,value) )
#define IAutomaticUpdatesSettings3_get_ReadOnly(This,retval) ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
#define IAutomaticUpdatesSettings3_get_Required(This,retval) ( (This)->lpVtbl -> get_Required(This,retval) )
#define IAutomaticUpdatesSettings3_get_ScheduledInstallationDay(This,retval) ( (This)->lpVtbl -> get_ScheduledInstallationDay(This,retval) )
#define IAutomaticUpdatesSettings3_put_ScheduledInstallationDay(This,value) ( (This)->lpVtbl -> put_ScheduledInstallationDay(This,value) )
#define IAutomaticUpdatesSettings3_get_ScheduledInstallationTime(This,retval) ( (This)->lpVtbl -> get_ScheduledInstallationTime(This,retval) )
#define IAutomaticUpdatesSettings3_put_ScheduledInstallationTime(This,value) ( (This)->lpVtbl -> put_ScheduledInstallationTime(This,value) )
#define IAutomaticUpdatesSettings3_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IAutomaticUpdatesSettings3_Save(This) ( (This)->lpVtbl -> Save(This) )
#define IAutomaticUpdatesSettings3_get_IncludeRecommendedUpdates(This,retval) ( (This)->lpVtbl -> get_IncludeRecommendedUpdates(This,retval) )
#define IAutomaticUpdatesSettings3_put_IncludeRecommendedUpdates(This,value) ( (This)->lpVtbl -> put_IncludeRecommendedUpdates(This,value) )
#define IAutomaticUpdatesSettings3_CheckPermission(This,userType,permissionType,userHasPermission) ( (This)->lpVtbl -> CheckPermission(This,userType,permissionType,userHasPermission) )
#define IAutomaticUpdatesSettings3_get_NonAdministratorsElevated(This,retval) ( (This)->lpVtbl -> get_NonAdministratorsElevated(This,retval) )
#define IAutomaticUpdatesSettings3_put_NonAdministratorsElevated(This,value) ( (This)->lpVtbl -> put_NonAdministratorsElevated(This,value) )
#define IAutomaticUpdatesSettings3_get_FeaturedUpdatesEnabled(This,retval) ( (This)->lpVtbl -> get_FeaturedUpdatesEnabled(This,retval) )
#define IAutomaticUpdatesSettings3_put_FeaturedUpdatesEnabled(This,value) ( (This)->lpVtbl -> put_FeaturedUpdatesEnabled(This,value) )
#endif
#endif
#ifndef __IAutomaticUpdates_INTERFACE_DEFINED__
#define __IAutomaticUpdates_INTERFACE_DEFINED__
extern const IID IID_IAutomaticUpdates;
typedef struct IAutomaticUpdatesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAutomaticUpdates * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAutomaticUpdates * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAutomaticUpdates * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAutomaticUpdates * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAutomaticUpdates * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAutomaticUpdates * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAutomaticUpdates * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * DetectNow) (IAutomaticUpdates * This);
	HRESULT(STDMETHODCALLTYPE * Pause) (IAutomaticUpdates * This);
	HRESULT(STDMETHODCALLTYPE * Resume) (IAutomaticUpdates * This);
	HRESULT(STDMETHODCALLTYPE * ShowSettingsDialog) (IAutomaticUpdates * This);
	HRESULT(STDMETHODCALLTYPE * get_Settings) (IAutomaticUpdates * This, IAutomaticUpdatesSettings ** retval);
	HRESULT(STDMETHODCALLTYPE * get_ServiceEnabled) (IAutomaticUpdates * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * EnableService) (IAutomaticUpdates * This);
	END_INTERFACE
}  IAutomaticUpdatesVtbl;
interface IAutomaticUpdates
{
	CONST_VTBL struct IAutomaticUpdatesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAutomaticUpdates_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAutomaticUpdates_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAutomaticUpdates_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAutomaticUpdates_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAutomaticUpdates_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAutomaticUpdates_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAutomaticUpdates_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAutomaticUpdates_DetectNow(This) ( (This)->lpVtbl -> DetectNow(This) )
#define IAutomaticUpdates_Pause(This) ( (This)->lpVtbl -> Pause(This) )
#define IAutomaticUpdates_Resume(This) ( (This)->lpVtbl -> Resume(This) )
#define IAutomaticUpdates_ShowSettingsDialog(This) ( (This)->lpVtbl -> ShowSettingsDialog(This) )
#define IAutomaticUpdates_get_Settings(This,retval) ( (This)->lpVtbl -> get_Settings(This,retval) )
#define IAutomaticUpdates_get_ServiceEnabled(This,retval) ( (This)->lpVtbl -> get_ServiceEnabled(This,retval) )
#define IAutomaticUpdates_EnableService(This) ( (This)->lpVtbl -> EnableService(This) )
#endif
#endif
#ifndef __IAutomaticUpdates2_INTERFACE_DEFINED__
#define __IAutomaticUpdates2_INTERFACE_DEFINED__
extern const IID IID_IAutomaticUpdates2;
typedef struct IAutomaticUpdates2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAutomaticUpdates2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAutomaticUpdates2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAutomaticUpdates2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAutomaticUpdates2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAutomaticUpdates2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAutomaticUpdates2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAutomaticUpdates2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * DetectNow) (IAutomaticUpdates2 * This);
	HRESULT(STDMETHODCALLTYPE * Pause) (IAutomaticUpdates2 * This);
	HRESULT(STDMETHODCALLTYPE * Resume) (IAutomaticUpdates2 * This);
	HRESULT(STDMETHODCALLTYPE * ShowSettingsDialog) (IAutomaticUpdates2 * This);
	HRESULT(STDMETHODCALLTYPE * get_Settings) (IAutomaticUpdates2 * This, IAutomaticUpdatesSettings ** retval);
	HRESULT(STDMETHODCALLTYPE * get_ServiceEnabled) (IAutomaticUpdates2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * EnableService) (IAutomaticUpdates2 * This);
	HRESULT(STDMETHODCALLTYPE * get_Results) (IAutomaticUpdates2 * This, IAutomaticUpdatesResults ** retval);
	END_INTERFACE
}  IAutomaticUpdates2Vtbl;
interface IAutomaticUpdates2
{
	CONST_VTBL struct IAutomaticUpdates2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAutomaticUpdates2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAutomaticUpdates2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAutomaticUpdates2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAutomaticUpdates2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAutomaticUpdates2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAutomaticUpdates2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAutomaticUpdates2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAutomaticUpdates2_DetectNow(This) ( (This)->lpVtbl -> DetectNow(This) )
#define IAutomaticUpdates2_Pause(This) ( (This)->lpVtbl -> Pause(This) )
#define IAutomaticUpdates2_Resume(This) ( (This)->lpVtbl -> Resume(This) )
#define IAutomaticUpdates2_ShowSettingsDialog(This) ( (This)->lpVtbl -> ShowSettingsDialog(This) )
#define IAutomaticUpdates2_get_Settings(This,retval) ( (This)->lpVtbl -> get_Settings(This,retval) )
#define IAutomaticUpdates2_get_ServiceEnabled(This,retval) ( (This)->lpVtbl -> get_ServiceEnabled(This,retval) )
#define IAutomaticUpdates2_EnableService(This) ( (This)->lpVtbl -> EnableService(This) )
#define IAutomaticUpdates2_get_Results(This,retval) ( (This)->lpVtbl -> get_Results(This,retval) )
#endif
#endif
#ifndef __IUpdateIdentity_INTERFACE_DEFINED__
#define __IUpdateIdentity_INTERFACE_DEFINED__
extern const IID IID_IUpdateIdentity;
typedef struct IUpdateIdentityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateIdentity * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateIdentity * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateIdentity * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateIdentity * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateIdentity * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateIdentity * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateIdentity * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_RevisionNumber) (IUpdateIdentity * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_UpdateID) (IUpdateIdentity * This, BSTR * retval);
	END_INTERFACE
}  IUpdateIdentityVtbl;
interface IUpdateIdentity
{
	CONST_VTBL struct IUpdateIdentityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateIdentity_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateIdentity_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateIdentity_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateIdentity_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateIdentity_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateIdentity_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateIdentity_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateIdentity_get_RevisionNumber(This,retval) ( (This)->lpVtbl -> get_RevisionNumber(This,retval) )
#define IUpdateIdentity_get_UpdateID(This,retval) ( (This)->lpVtbl -> get_UpdateID(This,retval) )
#endif
#endif
#ifndef __IImageInformation_INTERFACE_DEFINED__
#define __IImageInformation_INTERFACE_DEFINED__
extern const IID IID_IImageInformation;
typedef struct IImageInformationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IImageInformation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IImageInformation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IImageInformation * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IImageInformation * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IImageInformation * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IImageInformation * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IImageInformation * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_AltText) (IImageInformation * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Height) (IImageInformation * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_Source) (IImageInformation * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Width) (IImageInformation * This, LONG * retval);
	END_INTERFACE
}  IImageInformationVtbl;
interface IImageInformation
{
	CONST_VTBL struct IImageInformationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IImageInformation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IImageInformation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IImageInformation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IImageInformation_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IImageInformation_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IImageInformation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IImageInformation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IImageInformation_get_AltText(This,retval) ( (This)->lpVtbl -> get_AltText(This,retval) )
#define IImageInformation_get_Height(This,retval) ( (This)->lpVtbl -> get_Height(This,retval) )
#define IImageInformation_get_Source(This,retval) ( (This)->lpVtbl -> get_Source(This,retval) )
#define IImageInformation_get_Width(This,retval) ( (This)->lpVtbl -> get_Width(This,retval) )
#endif
#endif
#ifndef __ICategory_INTERFACE_DEFINED__
#define __ICategory_INTERFACE_DEFINED__
extern const IID IID_ICategory;
typedef struct ICategoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICategory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICategory * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICategory * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICategory * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICategory * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICategory * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICategory * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ICategory * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_CategoryID) (ICategory * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Children) (ICategory * This, ICategoryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Description) (ICategory * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Image) (ICategory * This, IImageInformation ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Order) (ICategory * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_Parent) (ICategory * This, ICategory ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Type) (ICategory * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Updates) (ICategory * This, IUpdateCollection ** retval);
	END_INTERFACE
}  ICategoryVtbl;
interface ICategory
{
	CONST_VTBL struct ICategoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICategory_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICategory_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICategory_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICategory_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICategory_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICategory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICategory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICategory_get_Name(This,retval) ( (This)->lpVtbl -> get_Name(This,retval) )
#define ICategory_get_CategoryID(This,retval) ( (This)->lpVtbl -> get_CategoryID(This,retval) )
#define ICategory_get_Children(This,retval) ( (This)->lpVtbl -> get_Children(This,retval) )
#define ICategory_get_Description(This,retval) ( (This)->lpVtbl -> get_Description(This,retval) )
#define ICategory_get_Image(This,retval) ( (This)->lpVtbl -> get_Image(This,retval) )
#define ICategory_get_Order(This,retval) ( (This)->lpVtbl -> get_Order(This,retval) )
#define ICategory_get_Parent(This,retval) ( (This)->lpVtbl -> get_Parent(This,retval) )
#define ICategory_get_Type(This,retval) ( (This)->lpVtbl -> get_Type(This,retval) )
#define ICategory_get_Updates(This,retval) ( (This)->lpVtbl -> get_Updates(This,retval) )
#endif
#endif
#ifndef __ICategoryCollection_INTERFACE_DEFINED__
#define __ICategoryCollection_INTERFACE_DEFINED__
extern const IID IID_ICategoryCollection;
typedef struct ICategoryCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICategoryCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICategoryCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICategoryCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICategoryCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICategoryCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICategoryCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICategoryCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (ICategoryCollection * This, LONG index, ICategory ** retval);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ICategoryCollection * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ICategoryCollection * This, LONG * retval);
	END_INTERFACE
}  ICategoryCollectionVtbl;
interface ICategoryCollection
{
	CONST_VTBL struct ICategoryCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICategoryCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICategoryCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICategoryCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICategoryCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICategoryCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICategoryCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICategoryCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICategoryCollection_get_Item(This,index,retval) ( (This)->lpVtbl -> get_Item(This,index,retval) )
#define ICategoryCollection_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define ICategoryCollection_get_Count(This,retval) ( (This)->lpVtbl -> get_Count(This,retval) )
#endif
#endif
#ifndef __IInstallationBehavior_INTERFACE_DEFINED__
#define __IInstallationBehavior_INTERFACE_DEFINED__
extern const IID IID_IInstallationBehavior;
typedef struct IInstallationBehaviorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInstallationBehavior * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInstallationBehavior * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInstallationBehavior * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInstallationBehavior * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInstallationBehavior * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInstallationBehavior * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInstallationBehavior * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CanRequestUserInput) (IInstallationBehavior * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Impact) (IInstallationBehavior * This, InstallationImpact * retval);
	HRESULT(STDMETHODCALLTYPE * get_RebootBehavior) (IInstallationBehavior * This, InstallationRebootBehavior * retval);
	HRESULT(STDMETHODCALLTYPE * get_RequiresNetworkConnectivity) (IInstallationBehavior * This, VARIANT_BOOL * retval);
	END_INTERFACE
}  IInstallationBehaviorVtbl;
interface IInstallationBehavior
{
	CONST_VTBL struct IInstallationBehaviorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInstallationBehavior_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInstallationBehavior_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInstallationBehavior_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInstallationBehavior_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInstallationBehavior_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInstallationBehavior_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInstallationBehavior_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInstallationBehavior_get_CanRequestUserInput(This,retval) ( (This)->lpVtbl -> get_CanRequestUserInput(This,retval) )
#define IInstallationBehavior_get_Impact(This,retval) ( (This)->lpVtbl -> get_Impact(This,retval) )
#define IInstallationBehavior_get_RebootBehavior(This,retval) ( (This)->lpVtbl -> get_RebootBehavior(This,retval) )
#define IInstallationBehavior_get_RequiresNetworkConnectivity(This,retval) ( (This)->lpVtbl -> get_RequiresNetworkConnectivity(This,retval) )
#endif
#endif
#ifndef __IUpdateDownloadContent_INTERFACE_DEFINED__
#define __IUpdateDownloadContent_INTERFACE_DEFINED__
extern const IID IID_IUpdateDownloadContent;
typedef struct IUpdateDownloadContentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateDownloadContent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateDownloadContent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateDownloadContent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateDownloadContent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateDownloadContent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateDownloadContent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateDownloadContent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DownloadUrl) (IUpdateDownloadContent * This, BSTR * retval);
	END_INTERFACE
}  IUpdateDownloadContentVtbl;
interface IUpdateDownloadContent
{
	CONST_VTBL struct IUpdateDownloadContentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateDownloadContent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateDownloadContent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateDownloadContent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateDownloadContent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateDownloadContent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateDownloadContent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateDownloadContent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateDownloadContent_get_DownloadUrl(This,retval) ( (This)->lpVtbl -> get_DownloadUrl(This,retval) )
#endif
#endif
#ifndef __IUpdateDownloadContent2_INTERFACE_DEFINED__
#define __IUpdateDownloadContent2_INTERFACE_DEFINED__
extern const IID IID_IUpdateDownloadContent2;
typedef struct IUpdateDownloadContent2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateDownloadContent2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateDownloadContent2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateDownloadContent2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateDownloadContent2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateDownloadContent2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateDownloadContent2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateDownloadContent2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DownloadUrl) (IUpdateDownloadContent2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsDeltaCompressedContent) (IUpdateDownloadContent2 * This, VARIANT_BOOL * retval);
	END_INTERFACE
}  IUpdateDownloadContent2Vtbl;
interface IUpdateDownloadContent2
{
	CONST_VTBL struct IUpdateDownloadContent2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateDownloadContent2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateDownloadContent2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateDownloadContent2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateDownloadContent2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateDownloadContent2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateDownloadContent2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateDownloadContent2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateDownloadContent2_get_DownloadUrl(This,retval) ( (This)->lpVtbl -> get_DownloadUrl(This,retval) )
#define IUpdateDownloadContent2_get_IsDeltaCompressedContent(This,retval) ( (This)->lpVtbl -> get_IsDeltaCompressedContent(This,retval) )
#endif
#endif
#ifndef __IUpdateDownloadContentCollection_INTERFACE_DEFINED__
#define __IUpdateDownloadContentCollection_INTERFACE_DEFINED__
extern const IID IID_IUpdateDownloadContentCollection;
typedef struct IUpdateDownloadContentCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateDownloadContentCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateDownloadContentCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateDownloadContentCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateDownloadContentCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateDownloadContentCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateDownloadContentCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateDownloadContentCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IUpdateDownloadContentCollection * This, LONG index, IUpdateDownloadContent ** retval);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IUpdateDownloadContentCollection * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IUpdateDownloadContentCollection * This, LONG * retval);
	END_INTERFACE
}  IUpdateDownloadContentCollectionVtbl;
interface IUpdateDownloadContentCollection
{
	CONST_VTBL struct IUpdateDownloadContentCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateDownloadContentCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateDownloadContentCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateDownloadContentCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateDownloadContentCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateDownloadContentCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateDownloadContentCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateDownloadContentCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateDownloadContentCollection_get_Item(This,index,retval) ( (This)->lpVtbl -> get_Item(This,index,retval) )
#define IUpdateDownloadContentCollection_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define IUpdateDownloadContentCollection_get_Count(This,retval) ( (This)->lpVtbl -> get_Count(This,retval) )
#endif
#endif
#ifndef __IUpdate_INTERFACE_DEFINED__
#define __IUpdate_INTERFACE_DEFINED__
extern const IID IID_IUpdate;
typedef struct IUpdateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdate * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdate * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdate * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdate * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdate * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_AutoSelectOnWebSites) (IUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_BundledUpdates) (IUpdate * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_CanRequireSource) (IUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Categories) (IUpdate * This, ICategoryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Deadline) (IUpdate * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentAvailable) (IUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentPreferred) (IUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaAccepted) (IUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaText) (IUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_HandlerID) (IUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Identity) (IUpdate * This, IUpdateIdentity ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Image) (IUpdate * This, IImageInformation ** retval);
	HRESULT(STDMETHODCALLTYPE * get_InstallationBehavior) (IUpdate * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_IsBeta) (IUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsDownloaded) (IUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsHidden) (IUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IsHidden) (IUpdate * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_IsInstalled) (IUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsMandatory) (IUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsUninstallable) (IUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Languages) (IUpdate * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_LastDeploymentChangeTime) (IUpdate * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_MaxDownloadSize) (IUpdate * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MinDownloadSize) (IUpdate * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MoreInfoUrls) (IUpdate * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_MsrcSeverity) (IUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedCpuSpeed) (IUpdate * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedHardDiskSpace) (IUpdate * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedMemory) (IUpdate * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ReleaseNotes) (IUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_SecurityBulletinIDs) (IUpdate * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupersededUpdateIDs) (IUpdate * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupportUrl) (IUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IUpdate * This, UpdateType * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationNotes) (IUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationBehavior) (IUpdate * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationSteps) (IUpdate * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_KBArticleIDs) (IUpdate * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * AcceptEula) (IUpdate * This);
	HRESULT(STDMETHODCALLTYPE * get_DeploymentAction) (IUpdate * This, DeploymentAction * retval);
	HRESULT(STDMETHODCALLTYPE * CopyFromCache) (IUpdate * This, BSTR path, VARIANT_BOOL toExtractCabFiles);
	HRESULT(STDMETHODCALLTYPE * get_DownloadPriority) (IUpdate * This, DownloadPriority * retval);
	HRESULT(STDMETHODCALLTYPE * get_DownloadContents) (IUpdate * This, IUpdateDownloadContentCollection ** retval);
	END_INTERFACE
}  IUpdateVtbl;
interface IUpdate
{
	CONST_VTBL struct IUpdateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdate_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdate_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdate_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdate_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdate_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdate_get_Title(This,retval) ( (This)->lpVtbl -> get_Title(This,retval) )
#define IUpdate_get_AutoSelectOnWebSites(This,retval) ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
#define IUpdate_get_BundledUpdates(This,retval) ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
#define IUpdate_get_CanRequireSource(This,retval) ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
#define IUpdate_get_Categories(This,retval) ( (This)->lpVtbl -> get_Categories(This,retval) )
#define IUpdate_get_Deadline(This,retval) ( (This)->lpVtbl -> get_Deadline(This,retval) )
#define IUpdate_get_DeltaCompressedContentAvailable(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
#define IUpdate_get_DeltaCompressedContentPreferred(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
#define IUpdate_get_Description(This,retval) ( (This)->lpVtbl -> get_Description(This,retval) )
#define IUpdate_get_EulaAccepted(This,retval) ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
#define IUpdate_get_EulaText(This,retval) ( (This)->lpVtbl -> get_EulaText(This,retval) )
#define IUpdate_get_HandlerID(This,retval) ( (This)->lpVtbl -> get_HandlerID(This,retval) )
#define IUpdate_get_Identity(This,retval) ( (This)->lpVtbl -> get_Identity(This,retval) )
#define IUpdate_get_Image(This,retval) ( (This)->lpVtbl -> get_Image(This,retval) )
#define IUpdate_get_InstallationBehavior(This,retval) ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
#define IUpdate_get_IsBeta(This,retval) ( (This)->lpVtbl -> get_IsBeta(This,retval) )
#define IUpdate_get_IsDownloaded(This,retval) ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
#define IUpdate_get_IsHidden(This,retval) ( (This)->lpVtbl -> get_IsHidden(This,retval) )
#define IUpdate_put_IsHidden(This,value) ( (This)->lpVtbl -> put_IsHidden(This,value) )
#define IUpdate_get_IsInstalled(This,retval) ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
#define IUpdate_get_IsMandatory(This,retval) ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
#define IUpdate_get_IsUninstallable(This,retval) ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
#define IUpdate_get_Languages(This,retval) ( (This)->lpVtbl -> get_Languages(This,retval) )
#define IUpdate_get_LastDeploymentChangeTime(This,retval) ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
#define IUpdate_get_MaxDownloadSize(This,retval) ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
#define IUpdate_get_MinDownloadSize(This,retval) ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
#define IUpdate_get_MoreInfoUrls(This,retval) ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
#define IUpdate_get_MsrcSeverity(This,retval) ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
#define IUpdate_get_RecommendedCpuSpeed(This,retval) ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
#define IUpdate_get_RecommendedHardDiskSpace(This,retval) ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
#define IUpdate_get_RecommendedMemory(This,retval) ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
#define IUpdate_get_ReleaseNotes(This,retval) ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
#define IUpdate_get_SecurityBulletinIDs(This,retval) ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
#define IUpdate_get_SupersededUpdateIDs(This,retval) ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
#define IUpdate_get_SupportUrl(This,retval) ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
#define IUpdate_get_Type(This,retval) ( (This)->lpVtbl -> get_Type(This,retval) )
#define IUpdate_get_UninstallationNotes(This,retval) ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
#define IUpdate_get_UninstallationBehavior(This,retval) ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
#define IUpdate_get_UninstallationSteps(This,retval) ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
#define IUpdate_get_KBArticleIDs(This,retval) ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
#define IUpdate_AcceptEula(This) ( (This)->lpVtbl -> AcceptEula(This) )
#define IUpdate_get_DeploymentAction(This,retval) ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
#define IUpdate_CopyFromCache(This,path,toExtractCabFiles) ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
#define IUpdate_get_DownloadPriority(This,retval) ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
#define IUpdate_get_DownloadContents(This,retval) ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
#endif
#endif
#ifndef __IWindowsDriverUpdate_INTERFACE_DEFINED__
#define __IWindowsDriverUpdate_INTERFACE_DEFINED__
extern const IID IID_IWindowsDriverUpdate;
typedef struct IWindowsDriverUpdateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWindowsDriverUpdate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWindowsDriverUpdate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWindowsDriverUpdate * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWindowsDriverUpdate * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWindowsDriverUpdate * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWindowsDriverUpdate * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWindowsDriverUpdate * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IWindowsDriverUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_AutoSelectOnWebSites) (IWindowsDriverUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_BundledUpdates) (IWindowsDriverUpdate * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_CanRequireSource) (IWindowsDriverUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Categories) (IWindowsDriverUpdate * This, ICategoryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Deadline) (IWindowsDriverUpdate * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentAvailable) (IWindowsDriverUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentPreferred) (IWindowsDriverUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IWindowsDriverUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaAccepted) (IWindowsDriverUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaText) (IWindowsDriverUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_HandlerID) (IWindowsDriverUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Identity) (IWindowsDriverUpdate * This, IUpdateIdentity ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Image) (IWindowsDriverUpdate * This, IImageInformation ** retval);
	HRESULT(STDMETHODCALLTYPE * get_InstallationBehavior) (IWindowsDriverUpdate * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_IsBeta) (IWindowsDriverUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsDownloaded) (IWindowsDriverUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsHidden) (IWindowsDriverUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IsHidden) (IWindowsDriverUpdate * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_IsInstalled) (IWindowsDriverUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsMandatory) (IWindowsDriverUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsUninstallable) (IWindowsDriverUpdate * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Languages) (IWindowsDriverUpdate * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_LastDeploymentChangeTime) (IWindowsDriverUpdate * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_MaxDownloadSize) (IWindowsDriverUpdate * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MinDownloadSize) (IWindowsDriverUpdate * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MoreInfoUrls) (IWindowsDriverUpdate * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_MsrcSeverity) (IWindowsDriverUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedCpuSpeed) (IWindowsDriverUpdate * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedHardDiskSpace) (IWindowsDriverUpdate * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedMemory) (IWindowsDriverUpdate * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ReleaseNotes) (IWindowsDriverUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_SecurityBulletinIDs) (IWindowsDriverUpdate * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupersededUpdateIDs) (IWindowsDriverUpdate * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupportUrl) (IWindowsDriverUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IWindowsDriverUpdate * This, UpdateType * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationNotes) (IWindowsDriverUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationBehavior) (IWindowsDriverUpdate * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationSteps) (IWindowsDriverUpdate * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_KBArticleIDs) (IWindowsDriverUpdate * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * AcceptEula) (IWindowsDriverUpdate * This);
	HRESULT(STDMETHODCALLTYPE * get_DeploymentAction) (IWindowsDriverUpdate * This, DeploymentAction * retval);
	HRESULT(STDMETHODCALLTYPE * CopyFromCache) (IWindowsDriverUpdate * This, BSTR path, VARIANT_BOOL toExtractCabFiles);
	HRESULT(STDMETHODCALLTYPE * get_DownloadPriority) (IWindowsDriverUpdate * This, DownloadPriority * retval);
	HRESULT(STDMETHODCALLTYPE * get_DownloadContents) (IWindowsDriverUpdate * This, IUpdateDownloadContentCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverClass) (IWindowsDriverUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverHardwareID) (IWindowsDriverUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverManufacturer) (IWindowsDriverUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverModel) (IWindowsDriverUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverProvider) (IWindowsDriverUpdate * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverVerDate) (IWindowsDriverUpdate * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeviceProblemNumber) (IWindowsDriverUpdate * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeviceStatus) (IWindowsDriverUpdate * This, LONG * retval);
	END_INTERFACE
}  IWindowsDriverUpdateVtbl;
interface IWindowsDriverUpdate
{
	CONST_VTBL struct IWindowsDriverUpdateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWindowsDriverUpdate_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWindowsDriverUpdate_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWindowsDriverUpdate_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWindowsDriverUpdate_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWindowsDriverUpdate_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWindowsDriverUpdate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWindowsDriverUpdate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWindowsDriverUpdate_get_Title(This,retval) ( (This)->lpVtbl -> get_Title(This,retval) )
#define IWindowsDriverUpdate_get_AutoSelectOnWebSites(This,retval) ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
#define IWindowsDriverUpdate_get_BundledUpdates(This,retval) ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
#define IWindowsDriverUpdate_get_CanRequireSource(This,retval) ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
#define IWindowsDriverUpdate_get_Categories(This,retval) ( (This)->lpVtbl -> get_Categories(This,retval) )
#define IWindowsDriverUpdate_get_Deadline(This,retval) ( (This)->lpVtbl -> get_Deadline(This,retval) )
#define IWindowsDriverUpdate_get_DeltaCompressedContentAvailable(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
#define IWindowsDriverUpdate_get_DeltaCompressedContentPreferred(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
#define IWindowsDriverUpdate_get_Description(This,retval) ( (This)->lpVtbl -> get_Description(This,retval) )
#define IWindowsDriverUpdate_get_EulaAccepted(This,retval) ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
#define IWindowsDriverUpdate_get_EulaText(This,retval) ( (This)->lpVtbl -> get_EulaText(This,retval) )
#define IWindowsDriverUpdate_get_HandlerID(This,retval) ( (This)->lpVtbl -> get_HandlerID(This,retval) )
#define IWindowsDriverUpdate_get_Identity(This,retval) ( (This)->lpVtbl -> get_Identity(This,retval) )
#define IWindowsDriverUpdate_get_Image(This,retval) ( (This)->lpVtbl -> get_Image(This,retval) )
#define IWindowsDriverUpdate_get_InstallationBehavior(This,retval) ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
#define IWindowsDriverUpdate_get_IsBeta(This,retval) ( (This)->lpVtbl -> get_IsBeta(This,retval) )
#define IWindowsDriverUpdate_get_IsDownloaded(This,retval) ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
#define IWindowsDriverUpdate_get_IsHidden(This,retval) ( (This)->lpVtbl -> get_IsHidden(This,retval) )
#define IWindowsDriverUpdate_put_IsHidden(This,value) ( (This)->lpVtbl -> put_IsHidden(This,value) )
#define IWindowsDriverUpdate_get_IsInstalled(This,retval) ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
#define IWindowsDriverUpdate_get_IsMandatory(This,retval) ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
#define IWindowsDriverUpdate_get_IsUninstallable(This,retval) ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
#define IWindowsDriverUpdate_get_Languages(This,retval) ( (This)->lpVtbl -> get_Languages(This,retval) )
#define IWindowsDriverUpdate_get_LastDeploymentChangeTime(This,retval) ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
#define IWindowsDriverUpdate_get_MaxDownloadSize(This,retval) ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
#define IWindowsDriverUpdate_get_MinDownloadSize(This,retval) ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
#define IWindowsDriverUpdate_get_MoreInfoUrls(This,retval) ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
#define IWindowsDriverUpdate_get_MsrcSeverity(This,retval) ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
#define IWindowsDriverUpdate_get_RecommendedCpuSpeed(This,retval) ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
#define IWindowsDriverUpdate_get_RecommendedHardDiskSpace(This,retval) ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
#define IWindowsDriverUpdate_get_RecommendedMemory(This,retval) ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
#define IWindowsDriverUpdate_get_ReleaseNotes(This,retval) ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
#define IWindowsDriverUpdate_get_SecurityBulletinIDs(This,retval) ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
#define IWindowsDriverUpdate_get_SupersededUpdateIDs(This,retval) ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
#define IWindowsDriverUpdate_get_SupportUrl(This,retval) ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
#define IWindowsDriverUpdate_get_Type(This,retval) ( (This)->lpVtbl -> get_Type(This,retval) )
#define IWindowsDriverUpdate_get_UninstallationNotes(This,retval) ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
#define IWindowsDriverUpdate_get_UninstallationBehavior(This,retval) ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
#define IWindowsDriverUpdate_get_UninstallationSteps(This,retval) ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
#define IWindowsDriverUpdate_get_KBArticleIDs(This,retval) ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
#define IWindowsDriverUpdate_AcceptEula(This) ( (This)->lpVtbl -> AcceptEula(This) )
#define IWindowsDriverUpdate_get_DeploymentAction(This,retval) ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
#define IWindowsDriverUpdate_CopyFromCache(This,path,toExtractCabFiles) ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
#define IWindowsDriverUpdate_get_DownloadPriority(This,retval) ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
#define IWindowsDriverUpdate_get_DownloadContents(This,retval) ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
#define IWindowsDriverUpdate_get_DriverClass(This,retval) ( (This)->lpVtbl -> get_DriverClass(This,retval) )
#define IWindowsDriverUpdate_get_DriverHardwareID(This,retval) ( (This)->lpVtbl -> get_DriverHardwareID(This,retval) )
#define IWindowsDriverUpdate_get_DriverManufacturer(This,retval) ( (This)->lpVtbl -> get_DriverManufacturer(This,retval) )
#define IWindowsDriverUpdate_get_DriverModel(This,retval) ( (This)->lpVtbl -> get_DriverModel(This,retval) )
#define IWindowsDriverUpdate_get_DriverProvider(This,retval) ( (This)->lpVtbl -> get_DriverProvider(This,retval) )
#define IWindowsDriverUpdate_get_DriverVerDate(This,retval) ( (This)->lpVtbl -> get_DriverVerDate(This,retval) )
#define IWindowsDriverUpdate_get_DeviceProblemNumber(This,retval) ( (This)->lpVtbl -> get_DeviceProblemNumber(This,retval) )
#define IWindowsDriverUpdate_get_DeviceStatus(This,retval) ( (This)->lpVtbl -> get_DeviceStatus(This,retval) )
#endif
#endif
#ifndef __IUpdate2_INTERFACE_DEFINED__
#define __IUpdate2_INTERFACE_DEFINED__
extern const IID IID_IUpdate2;
typedef struct IUpdate2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdate2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdate2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdate2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdate2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdate2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdate2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdate2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_AutoSelectOnWebSites) (IUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_BundledUpdates) (IUpdate2 * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_CanRequireSource) (IUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Categories) (IUpdate2 * This, ICategoryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Deadline) (IUpdate2 * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentAvailable) (IUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentPreferred) (IUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaAccepted) (IUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaText) (IUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_HandlerID) (IUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Identity) (IUpdate2 * This, IUpdateIdentity ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Image) (IUpdate2 * This, IImageInformation ** retval);
	HRESULT(STDMETHODCALLTYPE * get_InstallationBehavior) (IUpdate2 * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_IsBeta) (IUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsDownloaded) (IUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsHidden) (IUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IsHidden) (IUpdate2 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_IsInstalled) (IUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsMandatory) (IUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsUninstallable) (IUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Languages) (IUpdate2 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_LastDeploymentChangeTime) (IUpdate2 * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_MaxDownloadSize) (IUpdate2 * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MinDownloadSize) (IUpdate2 * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MoreInfoUrls) (IUpdate2 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_MsrcSeverity) (IUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedCpuSpeed) (IUpdate2 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedHardDiskSpace) (IUpdate2 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedMemory) (IUpdate2 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ReleaseNotes) (IUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_SecurityBulletinIDs) (IUpdate2 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupersededUpdateIDs) (IUpdate2 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupportUrl) (IUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IUpdate2 * This, UpdateType * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationNotes) (IUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationBehavior) (IUpdate2 * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationSteps) (IUpdate2 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_KBArticleIDs) (IUpdate2 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * AcceptEula) (IUpdate2 * This);
	HRESULT(STDMETHODCALLTYPE * get_DeploymentAction) (IUpdate2 * This, DeploymentAction * retval);
	HRESULT(STDMETHODCALLTYPE * CopyFromCache) (IUpdate2 * This, BSTR path, VARIANT_BOOL toExtractCabFiles);
	HRESULT(STDMETHODCALLTYPE * get_DownloadPriority) (IUpdate2 * This, DownloadPriority * retval);
	HRESULT(STDMETHODCALLTYPE * get_DownloadContents) (IUpdate2 * This, IUpdateDownloadContentCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_RebootRequired) (IUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsPresent) (IUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_CveIDs) (IUpdate2 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * CopyToCache) (IUpdate2 * This, IStringCollection * pFiles);
	END_INTERFACE
}  IUpdate2Vtbl;
interface IUpdate2
{
	CONST_VTBL struct IUpdate2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdate2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdate2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdate2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdate2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdate2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdate2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdate2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdate2_get_Title(This,retval) ( (This)->lpVtbl -> get_Title(This,retval) )
#define IUpdate2_get_AutoSelectOnWebSites(This,retval) ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
#define IUpdate2_get_BundledUpdates(This,retval) ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
#define IUpdate2_get_CanRequireSource(This,retval) ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
#define IUpdate2_get_Categories(This,retval) ( (This)->lpVtbl -> get_Categories(This,retval) )
#define IUpdate2_get_Deadline(This,retval) ( (This)->lpVtbl -> get_Deadline(This,retval) )
#define IUpdate2_get_DeltaCompressedContentAvailable(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
#define IUpdate2_get_DeltaCompressedContentPreferred(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
#define IUpdate2_get_Description(This,retval) ( (This)->lpVtbl -> get_Description(This,retval) )
#define IUpdate2_get_EulaAccepted(This,retval) ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
#define IUpdate2_get_EulaText(This,retval) ( (This)->lpVtbl -> get_EulaText(This,retval) )
#define IUpdate2_get_HandlerID(This,retval) ( (This)->lpVtbl -> get_HandlerID(This,retval) )
#define IUpdate2_get_Identity(This,retval) ( (This)->lpVtbl -> get_Identity(This,retval) )
#define IUpdate2_get_Image(This,retval) ( (This)->lpVtbl -> get_Image(This,retval) )
#define IUpdate2_get_InstallationBehavior(This,retval) ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
#define IUpdate2_get_IsBeta(This,retval) ( (This)->lpVtbl -> get_IsBeta(This,retval) )
#define IUpdate2_get_IsDownloaded(This,retval) ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
#define IUpdate2_get_IsHidden(This,retval) ( (This)->lpVtbl -> get_IsHidden(This,retval) )
#define IUpdate2_put_IsHidden(This,value) ( (This)->lpVtbl -> put_IsHidden(This,value) )
#define IUpdate2_get_IsInstalled(This,retval) ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
#define IUpdate2_get_IsMandatory(This,retval) ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
#define IUpdate2_get_IsUninstallable(This,retval) ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
#define IUpdate2_get_Languages(This,retval) ( (This)->lpVtbl -> get_Languages(This,retval) )
#define IUpdate2_get_LastDeploymentChangeTime(This,retval) ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
#define IUpdate2_get_MaxDownloadSize(This,retval) ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
#define IUpdate2_get_MinDownloadSize(This,retval) ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
#define IUpdate2_get_MoreInfoUrls(This,retval) ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
#define IUpdate2_get_MsrcSeverity(This,retval) ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
#define IUpdate2_get_RecommendedCpuSpeed(This,retval) ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
#define IUpdate2_get_RecommendedHardDiskSpace(This,retval) ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
#define IUpdate2_get_RecommendedMemory(This,retval) ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
#define IUpdate2_get_ReleaseNotes(This,retval) ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
#define IUpdate2_get_SecurityBulletinIDs(This,retval) ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
#define IUpdate2_get_SupersededUpdateIDs(This,retval) ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
#define IUpdate2_get_SupportUrl(This,retval) ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
#define IUpdate2_get_Type(This,retval) ( (This)->lpVtbl -> get_Type(This,retval) )
#define IUpdate2_get_UninstallationNotes(This,retval) ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
#define IUpdate2_get_UninstallationBehavior(This,retval) ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
#define IUpdate2_get_UninstallationSteps(This,retval) ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
#define IUpdate2_get_KBArticleIDs(This,retval) ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
#define IUpdate2_AcceptEula(This) ( (This)->lpVtbl -> AcceptEula(This) )
#define IUpdate2_get_DeploymentAction(This,retval) ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
#define IUpdate2_CopyFromCache(This,path,toExtractCabFiles) ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
#define IUpdate2_get_DownloadPriority(This,retval) ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
#define IUpdate2_get_DownloadContents(This,retval) ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
#define IUpdate2_get_RebootRequired(This,retval) ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
#define IUpdate2_get_IsPresent(This,retval) ( (This)->lpVtbl -> get_IsPresent(This,retval) )
#define IUpdate2_get_CveIDs(This,retval) ( (This)->lpVtbl -> get_CveIDs(This,retval) )
#define IUpdate2_CopyToCache(This,pFiles) ( (This)->lpVtbl -> CopyToCache(This,pFiles) )
#endif
#endif
#ifndef __IUpdate3_INTERFACE_DEFINED__
#define __IUpdate3_INTERFACE_DEFINED__
extern const IID IID_IUpdate3;
typedef struct IUpdate3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdate3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdate3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdate3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdate3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdate3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdate3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdate3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_AutoSelectOnWebSites) (IUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_BundledUpdates) (IUpdate3 * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_CanRequireSource) (IUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Categories) (IUpdate3 * This, ICategoryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Deadline) (IUpdate3 * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentAvailable) (IUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentPreferred) (IUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaAccepted) (IUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaText) (IUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_HandlerID) (IUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Identity) (IUpdate3 * This, IUpdateIdentity ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Image) (IUpdate3 * This, IImageInformation ** retval);
	HRESULT(STDMETHODCALLTYPE * get_InstallationBehavior) (IUpdate3 * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_IsBeta) (IUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsDownloaded) (IUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsHidden) (IUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IsHidden) (IUpdate3 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_IsInstalled) (IUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsMandatory) (IUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsUninstallable) (IUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Languages) (IUpdate3 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_LastDeploymentChangeTime) (IUpdate3 * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_MaxDownloadSize) (IUpdate3 * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MinDownloadSize) (IUpdate3 * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MoreInfoUrls) (IUpdate3 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_MsrcSeverity) (IUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedCpuSpeed) (IUpdate3 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedHardDiskSpace) (IUpdate3 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedMemory) (IUpdate3 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ReleaseNotes) (IUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_SecurityBulletinIDs) (IUpdate3 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupersededUpdateIDs) (IUpdate3 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupportUrl) (IUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IUpdate3 * This, UpdateType * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationNotes) (IUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationBehavior) (IUpdate3 * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationSteps) (IUpdate3 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_KBArticleIDs) (IUpdate3 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * AcceptEula) (IUpdate3 * This);
	HRESULT(STDMETHODCALLTYPE * get_DeploymentAction) (IUpdate3 * This, DeploymentAction * retval);
	HRESULT(STDMETHODCALLTYPE * CopyFromCache) (IUpdate3 * This, BSTR path, VARIANT_BOOL toExtractCabFiles);
	HRESULT(STDMETHODCALLTYPE * get_DownloadPriority) (IUpdate3 * This, DownloadPriority * retval);
	HRESULT(STDMETHODCALLTYPE * get_DownloadContents) (IUpdate3 * This, IUpdateDownloadContentCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_RebootRequired) (IUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsPresent) (IUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_CveIDs) (IUpdate3 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * CopyToCache) (IUpdate3 * This, IStringCollection * pFiles);
	HRESULT(STDMETHODCALLTYPE * get_BrowseOnly) (IUpdate3 * This, VARIANT_BOOL * retval);
	END_INTERFACE
}  IUpdate3Vtbl;
interface IUpdate3
{
	CONST_VTBL struct IUpdate3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdate3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdate3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdate3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdate3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdate3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdate3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdate3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdate3_get_Title(This,retval) ( (This)->lpVtbl -> get_Title(This,retval) )
#define IUpdate3_get_AutoSelectOnWebSites(This,retval) ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
#define IUpdate3_get_BundledUpdates(This,retval) ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
#define IUpdate3_get_CanRequireSource(This,retval) ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
#define IUpdate3_get_Categories(This,retval) ( (This)->lpVtbl -> get_Categories(This,retval) )
#define IUpdate3_get_Deadline(This,retval) ( (This)->lpVtbl -> get_Deadline(This,retval) )
#define IUpdate3_get_DeltaCompressedContentAvailable(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
#define IUpdate3_get_DeltaCompressedContentPreferred(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
#define IUpdate3_get_Description(This,retval) ( (This)->lpVtbl -> get_Description(This,retval) )
#define IUpdate3_get_EulaAccepted(This,retval) ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
#define IUpdate3_get_EulaText(This,retval) ( (This)->lpVtbl -> get_EulaText(This,retval) )
#define IUpdate3_get_HandlerID(This,retval) ( (This)->lpVtbl -> get_HandlerID(This,retval) )
#define IUpdate3_get_Identity(This,retval) ( (This)->lpVtbl -> get_Identity(This,retval) )
#define IUpdate3_get_Image(This,retval) ( (This)->lpVtbl -> get_Image(This,retval) )
#define IUpdate3_get_InstallationBehavior(This,retval) ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
#define IUpdate3_get_IsBeta(This,retval) ( (This)->lpVtbl -> get_IsBeta(This,retval) )
#define IUpdate3_get_IsDownloaded(This,retval) ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
#define IUpdate3_get_IsHidden(This,retval) ( (This)->lpVtbl -> get_IsHidden(This,retval) )
#define IUpdate3_put_IsHidden(This,value) ( (This)->lpVtbl -> put_IsHidden(This,value) )
#define IUpdate3_get_IsInstalled(This,retval) ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
#define IUpdate3_get_IsMandatory(This,retval) ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
#define IUpdate3_get_IsUninstallable(This,retval) ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
#define IUpdate3_get_Languages(This,retval) ( (This)->lpVtbl -> get_Languages(This,retval) )
#define IUpdate3_get_LastDeploymentChangeTime(This,retval) ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
#define IUpdate3_get_MaxDownloadSize(This,retval) ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
#define IUpdate3_get_MinDownloadSize(This,retval) ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
#define IUpdate3_get_MoreInfoUrls(This,retval) ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
#define IUpdate3_get_MsrcSeverity(This,retval) ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
#define IUpdate3_get_RecommendedCpuSpeed(This,retval) ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
#define IUpdate3_get_RecommendedHardDiskSpace(This,retval) ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
#define IUpdate3_get_RecommendedMemory(This,retval) ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
#define IUpdate3_get_ReleaseNotes(This,retval) ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
#define IUpdate3_get_SecurityBulletinIDs(This,retval) ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
#define IUpdate3_get_SupersededUpdateIDs(This,retval) ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
#define IUpdate3_get_SupportUrl(This,retval) ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
#define IUpdate3_get_Type(This,retval) ( (This)->lpVtbl -> get_Type(This,retval) )
#define IUpdate3_get_UninstallationNotes(This,retval) ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
#define IUpdate3_get_UninstallationBehavior(This,retval) ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
#define IUpdate3_get_UninstallationSteps(This,retval) ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
#define IUpdate3_get_KBArticleIDs(This,retval) ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
#define IUpdate3_AcceptEula(This) ( (This)->lpVtbl -> AcceptEula(This) )
#define IUpdate3_get_DeploymentAction(This,retval) ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
#define IUpdate3_CopyFromCache(This,path,toExtractCabFiles) ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
#define IUpdate3_get_DownloadPriority(This,retval) ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
#define IUpdate3_get_DownloadContents(This,retval) ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
#define IUpdate3_get_RebootRequired(This,retval) ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
#define IUpdate3_get_IsPresent(This,retval) ( (This)->lpVtbl -> get_IsPresent(This,retval) )
#define IUpdate3_get_CveIDs(This,retval) ( (This)->lpVtbl -> get_CveIDs(This,retval) )
#define IUpdate3_CopyToCache(This,pFiles) ( (This)->lpVtbl -> CopyToCache(This,pFiles) )
#define IUpdate3_get_BrowseOnly(This,retval) ( (This)->lpVtbl -> get_BrowseOnly(This,retval) )
#endif
#endif
#ifndef __IUpdate4_INTERFACE_DEFINED__
#define __IUpdate4_INTERFACE_DEFINED__
extern const IID IID_IUpdate4;
typedef struct IUpdate4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdate4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdate4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdate4 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdate4 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdate4 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdate4 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdate4 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_AutoSelectOnWebSites) (IUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_BundledUpdates) (IUpdate4 * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_CanRequireSource) (IUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Categories) (IUpdate4 * This, ICategoryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Deadline) (IUpdate4 * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentAvailable) (IUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentPreferred) (IUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaAccepted) (IUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaText) (IUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_HandlerID) (IUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Identity) (IUpdate4 * This, IUpdateIdentity ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Image) (IUpdate4 * This, IImageInformation ** retval);
	HRESULT(STDMETHODCALLTYPE * get_InstallationBehavior) (IUpdate4 * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_IsBeta) (IUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsDownloaded) (IUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsHidden) (IUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IsHidden) (IUpdate4 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_IsInstalled) (IUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsMandatory) (IUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsUninstallable) (IUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Languages) (IUpdate4 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_LastDeploymentChangeTime) (IUpdate4 * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_MaxDownloadSize) (IUpdate4 * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MinDownloadSize) (IUpdate4 * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MoreInfoUrls) (IUpdate4 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_MsrcSeverity) (IUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedCpuSpeed) (IUpdate4 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedHardDiskSpace) (IUpdate4 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedMemory) (IUpdate4 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ReleaseNotes) (IUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_SecurityBulletinIDs) (IUpdate4 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupersededUpdateIDs) (IUpdate4 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupportUrl) (IUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IUpdate4 * This, UpdateType * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationNotes) (IUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationBehavior) (IUpdate4 * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationSteps) (IUpdate4 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_KBArticleIDs) (IUpdate4 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * AcceptEula) (IUpdate4 * This);
	HRESULT(STDMETHODCALLTYPE * get_DeploymentAction) (IUpdate4 * This, DeploymentAction * retval);
	HRESULT(STDMETHODCALLTYPE * CopyFromCache) (IUpdate4 * This, BSTR path, VARIANT_BOOL toExtractCabFiles);
	HRESULT(STDMETHODCALLTYPE * get_DownloadPriority) (IUpdate4 * This, DownloadPriority * retval);
	HRESULT(STDMETHODCALLTYPE * get_DownloadContents) (IUpdate4 * This, IUpdateDownloadContentCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_RebootRequired) (IUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsPresent) (IUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_CveIDs) (IUpdate4 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * CopyToCache) (IUpdate4 * This, IStringCollection * pFiles);
	HRESULT(STDMETHODCALLTYPE * get_BrowseOnly) (IUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_PerUser) (IUpdate4 * This, VARIANT_BOOL * retval);
	END_INTERFACE
}  IUpdate4Vtbl;
interface IUpdate4
{
	CONST_VTBL struct IUpdate4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdate4_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdate4_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdate4_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdate4_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdate4_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdate4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdate4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdate4_get_Title(This,retval) ( (This)->lpVtbl -> get_Title(This,retval) )
#define IUpdate4_get_AutoSelectOnWebSites(This,retval) ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
#define IUpdate4_get_BundledUpdates(This,retval) ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
#define IUpdate4_get_CanRequireSource(This,retval) ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
#define IUpdate4_get_Categories(This,retval) ( (This)->lpVtbl -> get_Categories(This,retval) )
#define IUpdate4_get_Deadline(This,retval) ( (This)->lpVtbl -> get_Deadline(This,retval) )
#define IUpdate4_get_DeltaCompressedContentAvailable(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
#define IUpdate4_get_DeltaCompressedContentPreferred(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
#define IUpdate4_get_Description(This,retval) ( (This)->lpVtbl -> get_Description(This,retval) )
#define IUpdate4_get_EulaAccepted(This,retval) ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
#define IUpdate4_get_EulaText(This,retval) ( (This)->lpVtbl -> get_EulaText(This,retval) )
#define IUpdate4_get_HandlerID(This,retval) ( (This)->lpVtbl -> get_HandlerID(This,retval) )
#define IUpdate4_get_Identity(This,retval) ( (This)->lpVtbl -> get_Identity(This,retval) )
#define IUpdate4_get_Image(This,retval) ( (This)->lpVtbl -> get_Image(This,retval) )
#define IUpdate4_get_InstallationBehavior(This,retval) ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
#define IUpdate4_get_IsBeta(This,retval) ( (This)->lpVtbl -> get_IsBeta(This,retval) )
#define IUpdate4_get_IsDownloaded(This,retval) ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
#define IUpdate4_get_IsHidden(This,retval) ( (This)->lpVtbl -> get_IsHidden(This,retval) )
#define IUpdate4_put_IsHidden(This,value) ( (This)->lpVtbl -> put_IsHidden(This,value) )
#define IUpdate4_get_IsInstalled(This,retval) ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
#define IUpdate4_get_IsMandatory(This,retval) ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
#define IUpdate4_get_IsUninstallable(This,retval) ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
#define IUpdate4_get_Languages(This,retval) ( (This)->lpVtbl -> get_Languages(This,retval) )
#define IUpdate4_get_LastDeploymentChangeTime(This,retval) ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
#define IUpdate4_get_MaxDownloadSize(This,retval) ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
#define IUpdate4_get_MinDownloadSize(This,retval) ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
#define IUpdate4_get_MoreInfoUrls(This,retval) ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
#define IUpdate4_get_MsrcSeverity(This,retval) ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
#define IUpdate4_get_RecommendedCpuSpeed(This,retval) ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
#define IUpdate4_get_RecommendedHardDiskSpace(This,retval) ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
#define IUpdate4_get_RecommendedMemory(This,retval) ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
#define IUpdate4_get_ReleaseNotes(This,retval) ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
#define IUpdate4_get_SecurityBulletinIDs(This,retval) ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
#define IUpdate4_get_SupersededUpdateIDs(This,retval) ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
#define IUpdate4_get_SupportUrl(This,retval) ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
#define IUpdate4_get_Type(This,retval) ( (This)->lpVtbl -> get_Type(This,retval) )
#define IUpdate4_get_UninstallationNotes(This,retval) ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
#define IUpdate4_get_UninstallationBehavior(This,retval) ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
#define IUpdate4_get_UninstallationSteps(This,retval) ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
#define IUpdate4_get_KBArticleIDs(This,retval) ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
#define IUpdate4_AcceptEula(This) ( (This)->lpVtbl -> AcceptEula(This) )
#define IUpdate4_get_DeploymentAction(This,retval) ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
#define IUpdate4_CopyFromCache(This,path,toExtractCabFiles) ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
#define IUpdate4_get_DownloadPriority(This,retval) ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
#define IUpdate4_get_DownloadContents(This,retval) ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
#define IUpdate4_get_RebootRequired(This,retval) ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
#define IUpdate4_get_IsPresent(This,retval) ( (This)->lpVtbl -> get_IsPresent(This,retval) )
#define IUpdate4_get_CveIDs(This,retval) ( (This)->lpVtbl -> get_CveIDs(This,retval) )
#define IUpdate4_CopyToCache(This,pFiles) ( (This)->lpVtbl -> CopyToCache(This,pFiles) )
#define IUpdate4_get_BrowseOnly(This,retval) ( (This)->lpVtbl -> get_BrowseOnly(This,retval) )
#define IUpdate4_get_PerUser(This,retval) ( (This)->lpVtbl -> get_PerUser(This,retval) )
#endif
#endif
#ifndef __IUpdate5_INTERFACE_DEFINED__
#define __IUpdate5_INTERFACE_DEFINED__
extern const IID IID_IUpdate5;
typedef struct IUpdate5Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdate5 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdate5 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdate5 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdate5 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdate5 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdate5 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdate5 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_AutoSelectOnWebSites) (IUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_BundledUpdates) (IUpdate5 * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_CanRequireSource) (IUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Categories) (IUpdate5 * This, ICategoryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Deadline) (IUpdate5 * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentAvailable) (IUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentPreferred) (IUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaAccepted) (IUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaText) (IUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_HandlerID) (IUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Identity) (IUpdate5 * This, IUpdateIdentity ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Image) (IUpdate5 * This, IImageInformation ** retval);
	HRESULT(STDMETHODCALLTYPE * get_InstallationBehavior) (IUpdate5 * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_IsBeta) (IUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsDownloaded) (IUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsHidden) (IUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IsHidden) (IUpdate5 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_IsInstalled) (IUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsMandatory) (IUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsUninstallable) (IUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Languages) (IUpdate5 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_LastDeploymentChangeTime) (IUpdate5 * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_MaxDownloadSize) (IUpdate5 * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MinDownloadSize) (IUpdate5 * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MoreInfoUrls) (IUpdate5 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_MsrcSeverity) (IUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedCpuSpeed) (IUpdate5 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedHardDiskSpace) (IUpdate5 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedMemory) (IUpdate5 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ReleaseNotes) (IUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_SecurityBulletinIDs) (IUpdate5 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupersededUpdateIDs) (IUpdate5 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupportUrl) (IUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IUpdate5 * This, UpdateType * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationNotes) (IUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationBehavior) (IUpdate5 * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationSteps) (IUpdate5 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_KBArticleIDs) (IUpdate5 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * AcceptEula) (IUpdate5 * This);
	HRESULT(STDMETHODCALLTYPE * get_DeploymentAction) (IUpdate5 * This, DeploymentAction * retval);
	HRESULT(STDMETHODCALLTYPE * CopyFromCache) (IUpdate5 * This, BSTR path, VARIANT_BOOL toExtractCabFiles);
	HRESULT(STDMETHODCALLTYPE * get_DownloadPriority) (IUpdate5 * This, DownloadPriority * retval);
	HRESULT(STDMETHODCALLTYPE * get_DownloadContents) (IUpdate5 * This, IUpdateDownloadContentCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_RebootRequired) (IUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsPresent) (IUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_CveIDs) (IUpdate5 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * CopyToCache) (IUpdate5 * This, IStringCollection * pFiles);
	HRESULT(STDMETHODCALLTYPE * get_BrowseOnly) (IUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_PerUser) (IUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_AutoSelection) (IUpdate5 * This, AutoSelectionMode * retval);
	HRESULT(STDMETHODCALLTYPE * get_AutoDownload) (IUpdate5 * This, AutoDownloadMode * retval);
	END_INTERFACE
}  IUpdate5Vtbl;
interface IUpdate5
{
	CONST_VTBL struct IUpdate5Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdate5_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdate5_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdate5_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdate5_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdate5_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdate5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdate5_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdate5_get_Title(This,retval) ( (This)->lpVtbl -> get_Title(This,retval) )
#define IUpdate5_get_AutoSelectOnWebSites(This,retval) ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
#define IUpdate5_get_BundledUpdates(This,retval) ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
#define IUpdate5_get_CanRequireSource(This,retval) ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
#define IUpdate5_get_Categories(This,retval) ( (This)->lpVtbl -> get_Categories(This,retval) )
#define IUpdate5_get_Deadline(This,retval) ( (This)->lpVtbl -> get_Deadline(This,retval) )
#define IUpdate5_get_DeltaCompressedContentAvailable(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
#define IUpdate5_get_DeltaCompressedContentPreferred(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
#define IUpdate5_get_Description(This,retval) ( (This)->lpVtbl -> get_Description(This,retval) )
#define IUpdate5_get_EulaAccepted(This,retval) ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
#define IUpdate5_get_EulaText(This,retval) ( (This)->lpVtbl -> get_EulaText(This,retval) )
#define IUpdate5_get_HandlerID(This,retval) ( (This)->lpVtbl -> get_HandlerID(This,retval) )
#define IUpdate5_get_Identity(This,retval) ( (This)->lpVtbl -> get_Identity(This,retval) )
#define IUpdate5_get_Image(This,retval) ( (This)->lpVtbl -> get_Image(This,retval) )
#define IUpdate5_get_InstallationBehavior(This,retval) ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
#define IUpdate5_get_IsBeta(This,retval) ( (This)->lpVtbl -> get_IsBeta(This,retval) )
#define IUpdate5_get_IsDownloaded(This,retval) ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
#define IUpdate5_get_IsHidden(This,retval) ( (This)->lpVtbl -> get_IsHidden(This,retval) )
#define IUpdate5_put_IsHidden(This,value) ( (This)->lpVtbl -> put_IsHidden(This,value) )
#define IUpdate5_get_IsInstalled(This,retval) ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
#define IUpdate5_get_IsMandatory(This,retval) ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
#define IUpdate5_get_IsUninstallable(This,retval) ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
#define IUpdate5_get_Languages(This,retval) ( (This)->lpVtbl -> get_Languages(This,retval) )
#define IUpdate5_get_LastDeploymentChangeTime(This,retval) ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
#define IUpdate5_get_MaxDownloadSize(This,retval) ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
#define IUpdate5_get_MinDownloadSize(This,retval) ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
#define IUpdate5_get_MoreInfoUrls(This,retval) ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
#define IUpdate5_get_MsrcSeverity(This,retval) ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
#define IUpdate5_get_RecommendedCpuSpeed(This,retval) ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
#define IUpdate5_get_RecommendedHardDiskSpace(This,retval) ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
#define IUpdate5_get_RecommendedMemory(This,retval) ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
#define IUpdate5_get_ReleaseNotes(This,retval) ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
#define IUpdate5_get_SecurityBulletinIDs(This,retval) ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
#define IUpdate5_get_SupersededUpdateIDs(This,retval) ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
#define IUpdate5_get_SupportUrl(This,retval) ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
#define IUpdate5_get_Type(This,retval) ( (This)->lpVtbl -> get_Type(This,retval) )
#define IUpdate5_get_UninstallationNotes(This,retval) ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
#define IUpdate5_get_UninstallationBehavior(This,retval) ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
#define IUpdate5_get_UninstallationSteps(This,retval) ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
#define IUpdate5_get_KBArticleIDs(This,retval) ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
#define IUpdate5_AcceptEula(This) ( (This)->lpVtbl -> AcceptEula(This) )
#define IUpdate5_get_DeploymentAction(This,retval) ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
#define IUpdate5_CopyFromCache(This,path,toExtractCabFiles) ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
#define IUpdate5_get_DownloadPriority(This,retval) ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
#define IUpdate5_get_DownloadContents(This,retval) ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
#define IUpdate5_get_RebootRequired(This,retval) ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
#define IUpdate5_get_IsPresent(This,retval) ( (This)->lpVtbl -> get_IsPresent(This,retval) )
#define IUpdate5_get_CveIDs(This,retval) ( (This)->lpVtbl -> get_CveIDs(This,retval) )
#define IUpdate5_CopyToCache(This,pFiles) ( (This)->lpVtbl -> CopyToCache(This,pFiles) )
#define IUpdate5_get_BrowseOnly(This,retval) ( (This)->lpVtbl -> get_BrowseOnly(This,retval) )
#define IUpdate5_get_PerUser(This,retval) ( (This)->lpVtbl -> get_PerUser(This,retval) )
#define IUpdate5_get_AutoSelection(This,retval) ( (This)->lpVtbl -> get_AutoSelection(This,retval) )
#define IUpdate5_get_AutoDownload(This,retval) ( (This)->lpVtbl -> get_AutoDownload(This,retval) )
#endif
#endif
#ifndef __IWindowsDriverUpdate2_INTERFACE_DEFINED__
#define __IWindowsDriverUpdate2_INTERFACE_DEFINED__
extern const IID IID_IWindowsDriverUpdate2;
typedef struct IWindowsDriverUpdate2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWindowsDriverUpdate2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWindowsDriverUpdate2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWindowsDriverUpdate2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWindowsDriverUpdate2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWindowsDriverUpdate2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWindowsDriverUpdate2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWindowsDriverUpdate2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IWindowsDriverUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_AutoSelectOnWebSites) (IWindowsDriverUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_BundledUpdates) (IWindowsDriverUpdate2 * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_CanRequireSource) (IWindowsDriverUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Categories) (IWindowsDriverUpdate2 * This, ICategoryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Deadline) (IWindowsDriverUpdate2 * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentAvailable) (IWindowsDriverUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentPreferred) (IWindowsDriverUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IWindowsDriverUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaAccepted) (IWindowsDriverUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaText) (IWindowsDriverUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_HandlerID) (IWindowsDriverUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Identity) (IWindowsDriverUpdate2 * This, IUpdateIdentity ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Image) (IWindowsDriverUpdate2 * This, IImageInformation ** retval);
	HRESULT(STDMETHODCALLTYPE * get_InstallationBehavior) (IWindowsDriverUpdate2 * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_IsBeta) (IWindowsDriverUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsDownloaded) (IWindowsDriverUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsHidden) (IWindowsDriverUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IsHidden) (IWindowsDriverUpdate2 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_IsInstalled) (IWindowsDriverUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsMandatory) (IWindowsDriverUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsUninstallable) (IWindowsDriverUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Languages) (IWindowsDriverUpdate2 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_LastDeploymentChangeTime) (IWindowsDriverUpdate2 * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_MaxDownloadSize) (IWindowsDriverUpdate2 * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MinDownloadSize) (IWindowsDriverUpdate2 * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MoreInfoUrls) (IWindowsDriverUpdate2 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_MsrcSeverity) (IWindowsDriverUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedCpuSpeed) (IWindowsDriverUpdate2 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedHardDiskSpace) (IWindowsDriverUpdate2 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedMemory) (IWindowsDriverUpdate2 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ReleaseNotes) (IWindowsDriverUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_SecurityBulletinIDs) (IWindowsDriverUpdate2 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupersededUpdateIDs) (IWindowsDriverUpdate2 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupportUrl) (IWindowsDriverUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IWindowsDriverUpdate2 * This, UpdateType * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationNotes) (IWindowsDriverUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationBehavior) (IWindowsDriverUpdate2 * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationSteps) (IWindowsDriverUpdate2 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_KBArticleIDs) (IWindowsDriverUpdate2 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * AcceptEula) (IWindowsDriverUpdate2 * This);
	HRESULT(STDMETHODCALLTYPE * get_DeploymentAction) (IWindowsDriverUpdate2 * This, DeploymentAction * retval);
	HRESULT(STDMETHODCALLTYPE * CopyFromCache) (IWindowsDriverUpdate2 * This, BSTR path, VARIANT_BOOL toExtractCabFiles);
	HRESULT(STDMETHODCALLTYPE * get_DownloadPriority) (IWindowsDriverUpdate2 * This, DownloadPriority * retval);
	HRESULT(STDMETHODCALLTYPE * get_DownloadContents) (IWindowsDriverUpdate2 * This, IUpdateDownloadContentCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverClass) (IWindowsDriverUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverHardwareID) (IWindowsDriverUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverManufacturer) (IWindowsDriverUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverModel) (IWindowsDriverUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverProvider) (IWindowsDriverUpdate2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverVerDate) (IWindowsDriverUpdate2 * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeviceProblemNumber) (IWindowsDriverUpdate2 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeviceStatus) (IWindowsDriverUpdate2 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RebootRequired) (IWindowsDriverUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsPresent) (IWindowsDriverUpdate2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_CveIDs) (IWindowsDriverUpdate2 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * CopyToCache) (IWindowsDriverUpdate2 * This, IStringCollection * pFiles);
	END_INTERFACE
}  IWindowsDriverUpdate2Vtbl;
interface IWindowsDriverUpdate2
{
	CONST_VTBL struct IWindowsDriverUpdate2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWindowsDriverUpdate2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWindowsDriverUpdate2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWindowsDriverUpdate2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWindowsDriverUpdate2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWindowsDriverUpdate2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWindowsDriverUpdate2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWindowsDriverUpdate2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWindowsDriverUpdate2_get_Title(This,retval) ( (This)->lpVtbl -> get_Title(This,retval) )
#define IWindowsDriverUpdate2_get_AutoSelectOnWebSites(This,retval) ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
#define IWindowsDriverUpdate2_get_BundledUpdates(This,retval) ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
#define IWindowsDriverUpdate2_get_CanRequireSource(This,retval) ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
#define IWindowsDriverUpdate2_get_Categories(This,retval) ( (This)->lpVtbl -> get_Categories(This,retval) )
#define IWindowsDriverUpdate2_get_Deadline(This,retval) ( (This)->lpVtbl -> get_Deadline(This,retval) )
#define IWindowsDriverUpdate2_get_DeltaCompressedContentAvailable(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
#define IWindowsDriverUpdate2_get_DeltaCompressedContentPreferred(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
#define IWindowsDriverUpdate2_get_Description(This,retval) ( (This)->lpVtbl -> get_Description(This,retval) )
#define IWindowsDriverUpdate2_get_EulaAccepted(This,retval) ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
#define IWindowsDriverUpdate2_get_EulaText(This,retval) ( (This)->lpVtbl -> get_EulaText(This,retval) )
#define IWindowsDriverUpdate2_get_HandlerID(This,retval) ( (This)->lpVtbl -> get_HandlerID(This,retval) )
#define IWindowsDriverUpdate2_get_Identity(This,retval) ( (This)->lpVtbl -> get_Identity(This,retval) )
#define IWindowsDriverUpdate2_get_Image(This,retval) ( (This)->lpVtbl -> get_Image(This,retval) )
#define IWindowsDriverUpdate2_get_InstallationBehavior(This,retval) ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
#define IWindowsDriverUpdate2_get_IsBeta(This,retval) ( (This)->lpVtbl -> get_IsBeta(This,retval) )
#define IWindowsDriverUpdate2_get_IsDownloaded(This,retval) ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
#define IWindowsDriverUpdate2_get_IsHidden(This,retval) ( (This)->lpVtbl -> get_IsHidden(This,retval) )
#define IWindowsDriverUpdate2_put_IsHidden(This,value) ( (This)->lpVtbl -> put_IsHidden(This,value) )
#define IWindowsDriverUpdate2_get_IsInstalled(This,retval) ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
#define IWindowsDriverUpdate2_get_IsMandatory(This,retval) ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
#define IWindowsDriverUpdate2_get_IsUninstallable(This,retval) ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
#define IWindowsDriverUpdate2_get_Languages(This,retval) ( (This)->lpVtbl -> get_Languages(This,retval) )
#define IWindowsDriverUpdate2_get_LastDeploymentChangeTime(This,retval) ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
#define IWindowsDriverUpdate2_get_MaxDownloadSize(This,retval) ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
#define IWindowsDriverUpdate2_get_MinDownloadSize(This,retval) ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
#define IWindowsDriverUpdate2_get_MoreInfoUrls(This,retval) ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
#define IWindowsDriverUpdate2_get_MsrcSeverity(This,retval) ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
#define IWindowsDriverUpdate2_get_RecommendedCpuSpeed(This,retval) ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
#define IWindowsDriverUpdate2_get_RecommendedHardDiskSpace(This,retval) ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
#define IWindowsDriverUpdate2_get_RecommendedMemory(This,retval) ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
#define IWindowsDriverUpdate2_get_ReleaseNotes(This,retval) ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
#define IWindowsDriverUpdate2_get_SecurityBulletinIDs(This,retval) ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
#define IWindowsDriverUpdate2_get_SupersededUpdateIDs(This,retval) ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
#define IWindowsDriverUpdate2_get_SupportUrl(This,retval) ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
#define IWindowsDriverUpdate2_get_Type(This,retval) ( (This)->lpVtbl -> get_Type(This,retval) )
#define IWindowsDriverUpdate2_get_UninstallationNotes(This,retval) ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
#define IWindowsDriverUpdate2_get_UninstallationBehavior(This,retval) ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
#define IWindowsDriverUpdate2_get_UninstallationSteps(This,retval) ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
#define IWindowsDriverUpdate2_get_KBArticleIDs(This,retval) ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
#define IWindowsDriverUpdate2_AcceptEula(This) ( (This)->lpVtbl -> AcceptEula(This) )
#define IWindowsDriverUpdate2_get_DeploymentAction(This,retval) ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
#define IWindowsDriverUpdate2_CopyFromCache(This,path,toExtractCabFiles) ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
#define IWindowsDriverUpdate2_get_DownloadPriority(This,retval) ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
#define IWindowsDriverUpdate2_get_DownloadContents(This,retval) ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
#define IWindowsDriverUpdate2_get_DriverClass(This,retval) ( (This)->lpVtbl -> get_DriverClass(This,retval) )
#define IWindowsDriverUpdate2_get_DriverHardwareID(This,retval) ( (This)->lpVtbl -> get_DriverHardwareID(This,retval) )
#define IWindowsDriverUpdate2_get_DriverManufacturer(This,retval) ( (This)->lpVtbl -> get_DriverManufacturer(This,retval) )
#define IWindowsDriverUpdate2_get_DriverModel(This,retval) ( (This)->lpVtbl -> get_DriverModel(This,retval) )
#define IWindowsDriverUpdate2_get_DriverProvider(This,retval) ( (This)->lpVtbl -> get_DriverProvider(This,retval) )
#define IWindowsDriverUpdate2_get_DriverVerDate(This,retval) ( (This)->lpVtbl -> get_DriverVerDate(This,retval) )
#define IWindowsDriverUpdate2_get_DeviceProblemNumber(This,retval) ( (This)->lpVtbl -> get_DeviceProblemNumber(This,retval) )
#define IWindowsDriverUpdate2_get_DeviceStatus(This,retval) ( (This)->lpVtbl -> get_DeviceStatus(This,retval) )
#define IWindowsDriverUpdate2_get_RebootRequired(This,retval) ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
#define IWindowsDriverUpdate2_get_IsPresent(This,retval) ( (This)->lpVtbl -> get_IsPresent(This,retval) )
#define IWindowsDriverUpdate2_get_CveIDs(This,retval) ( (This)->lpVtbl -> get_CveIDs(This,retval) )
#define IWindowsDriverUpdate2_CopyToCache(This,pFiles) ( (This)->lpVtbl -> CopyToCache(This,pFiles) )
#endif
#endif
#ifndef __IWindowsDriverUpdate3_INTERFACE_DEFINED__
#define __IWindowsDriverUpdate3_INTERFACE_DEFINED__
extern const IID IID_IWindowsDriverUpdate3;
typedef struct IWindowsDriverUpdate3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWindowsDriverUpdate3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWindowsDriverUpdate3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWindowsDriverUpdate3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWindowsDriverUpdate3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWindowsDriverUpdate3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWindowsDriverUpdate3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWindowsDriverUpdate3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IWindowsDriverUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_AutoSelectOnWebSites) (IWindowsDriverUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_BundledUpdates) (IWindowsDriverUpdate3 * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_CanRequireSource) (IWindowsDriverUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Categories) (IWindowsDriverUpdate3 * This, ICategoryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Deadline) (IWindowsDriverUpdate3 * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentAvailable) (IWindowsDriverUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentPreferred) (IWindowsDriverUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IWindowsDriverUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaAccepted) (IWindowsDriverUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaText) (IWindowsDriverUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_HandlerID) (IWindowsDriverUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Identity) (IWindowsDriverUpdate3 * This, IUpdateIdentity ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Image) (IWindowsDriverUpdate3 * This, IImageInformation ** retval);
	HRESULT(STDMETHODCALLTYPE * get_InstallationBehavior) (IWindowsDriverUpdate3 * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_IsBeta) (IWindowsDriverUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsDownloaded) (IWindowsDriverUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsHidden) (IWindowsDriverUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IsHidden) (IWindowsDriverUpdate3 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_IsInstalled) (IWindowsDriverUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsMandatory) (IWindowsDriverUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsUninstallable) (IWindowsDriverUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Languages) (IWindowsDriverUpdate3 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_LastDeploymentChangeTime) (IWindowsDriverUpdate3 * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_MaxDownloadSize) (IWindowsDriverUpdate3 * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MinDownloadSize) (IWindowsDriverUpdate3 * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MoreInfoUrls) (IWindowsDriverUpdate3 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_MsrcSeverity) (IWindowsDriverUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedCpuSpeed) (IWindowsDriverUpdate3 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedHardDiskSpace) (IWindowsDriverUpdate3 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedMemory) (IWindowsDriverUpdate3 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ReleaseNotes) (IWindowsDriverUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_SecurityBulletinIDs) (IWindowsDriverUpdate3 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupersededUpdateIDs) (IWindowsDriverUpdate3 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupportUrl) (IWindowsDriverUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IWindowsDriverUpdate3 * This, UpdateType * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationNotes) (IWindowsDriverUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationBehavior) (IWindowsDriverUpdate3 * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationSteps) (IWindowsDriverUpdate3 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_KBArticleIDs) (IWindowsDriverUpdate3 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * AcceptEula) (IWindowsDriverUpdate3 * This);
	HRESULT(STDMETHODCALLTYPE * get_DeploymentAction) (IWindowsDriverUpdate3 * This, DeploymentAction * retval);
	HRESULT(STDMETHODCALLTYPE * CopyFromCache) (IWindowsDriverUpdate3 * This, BSTR path, VARIANT_BOOL toExtractCabFiles);
	HRESULT(STDMETHODCALLTYPE * get_DownloadPriority) (IWindowsDriverUpdate3 * This, DownloadPriority * retval);
	HRESULT(STDMETHODCALLTYPE * get_DownloadContents) (IWindowsDriverUpdate3 * This, IUpdateDownloadContentCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverClass) (IWindowsDriverUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverHardwareID) (IWindowsDriverUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverManufacturer) (IWindowsDriverUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverModel) (IWindowsDriverUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverProvider) (IWindowsDriverUpdate3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverVerDate) (IWindowsDriverUpdate3 * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeviceProblemNumber) (IWindowsDriverUpdate3 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeviceStatus) (IWindowsDriverUpdate3 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RebootRequired) (IWindowsDriverUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsPresent) (IWindowsDriverUpdate3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_CveIDs) (IWindowsDriverUpdate3 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * CopyToCache) (IWindowsDriverUpdate3 * This, IStringCollection * pFiles);
	HRESULT(STDMETHODCALLTYPE * get_BrowseOnly) (IWindowsDriverUpdate3 * This, VARIANT_BOOL * retval);
	END_INTERFACE
}  IWindowsDriverUpdate3Vtbl;
interface IWindowsDriverUpdate3
{
	CONST_VTBL struct IWindowsDriverUpdate3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWindowsDriverUpdate3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWindowsDriverUpdate3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWindowsDriverUpdate3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWindowsDriverUpdate3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWindowsDriverUpdate3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWindowsDriverUpdate3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWindowsDriverUpdate3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWindowsDriverUpdate3_get_Title(This,retval) ( (This)->lpVtbl -> get_Title(This,retval) )
#define IWindowsDriverUpdate3_get_AutoSelectOnWebSites(This,retval) ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
#define IWindowsDriverUpdate3_get_BundledUpdates(This,retval) ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
#define IWindowsDriverUpdate3_get_CanRequireSource(This,retval) ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
#define IWindowsDriverUpdate3_get_Categories(This,retval) ( (This)->lpVtbl -> get_Categories(This,retval) )
#define IWindowsDriverUpdate3_get_Deadline(This,retval) ( (This)->lpVtbl -> get_Deadline(This,retval) )
#define IWindowsDriverUpdate3_get_DeltaCompressedContentAvailable(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
#define IWindowsDriverUpdate3_get_DeltaCompressedContentPreferred(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
#define IWindowsDriverUpdate3_get_Description(This,retval) ( (This)->lpVtbl -> get_Description(This,retval) )
#define IWindowsDriverUpdate3_get_EulaAccepted(This,retval) ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
#define IWindowsDriverUpdate3_get_EulaText(This,retval) ( (This)->lpVtbl -> get_EulaText(This,retval) )
#define IWindowsDriverUpdate3_get_HandlerID(This,retval) ( (This)->lpVtbl -> get_HandlerID(This,retval) )
#define IWindowsDriverUpdate3_get_Identity(This,retval) ( (This)->lpVtbl -> get_Identity(This,retval) )
#define IWindowsDriverUpdate3_get_Image(This,retval) ( (This)->lpVtbl -> get_Image(This,retval) )
#define IWindowsDriverUpdate3_get_InstallationBehavior(This,retval) ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
#define IWindowsDriverUpdate3_get_IsBeta(This,retval) ( (This)->lpVtbl -> get_IsBeta(This,retval) )
#define IWindowsDriverUpdate3_get_IsDownloaded(This,retval) ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
#define IWindowsDriverUpdate3_get_IsHidden(This,retval) ( (This)->lpVtbl -> get_IsHidden(This,retval) )
#define IWindowsDriverUpdate3_put_IsHidden(This,value) ( (This)->lpVtbl -> put_IsHidden(This,value) )
#define IWindowsDriverUpdate3_get_IsInstalled(This,retval) ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
#define IWindowsDriverUpdate3_get_IsMandatory(This,retval) ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
#define IWindowsDriverUpdate3_get_IsUninstallable(This,retval) ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
#define IWindowsDriverUpdate3_get_Languages(This,retval) ( (This)->lpVtbl -> get_Languages(This,retval) )
#define IWindowsDriverUpdate3_get_LastDeploymentChangeTime(This,retval) ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
#define IWindowsDriverUpdate3_get_MaxDownloadSize(This,retval) ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
#define IWindowsDriverUpdate3_get_MinDownloadSize(This,retval) ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
#define IWindowsDriverUpdate3_get_MoreInfoUrls(This,retval) ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
#define IWindowsDriverUpdate3_get_MsrcSeverity(This,retval) ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
#define IWindowsDriverUpdate3_get_RecommendedCpuSpeed(This,retval) ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
#define IWindowsDriverUpdate3_get_RecommendedHardDiskSpace(This,retval) ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
#define IWindowsDriverUpdate3_get_RecommendedMemory(This,retval) ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
#define IWindowsDriverUpdate3_get_ReleaseNotes(This,retval) ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
#define IWindowsDriverUpdate3_get_SecurityBulletinIDs(This,retval) ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
#define IWindowsDriverUpdate3_get_SupersededUpdateIDs(This,retval) ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
#define IWindowsDriverUpdate3_get_SupportUrl(This,retval) ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
#define IWindowsDriverUpdate3_get_Type(This,retval) ( (This)->lpVtbl -> get_Type(This,retval) )
#define IWindowsDriverUpdate3_get_UninstallationNotes(This,retval) ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
#define IWindowsDriverUpdate3_get_UninstallationBehavior(This,retval) ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
#define IWindowsDriverUpdate3_get_UninstallationSteps(This,retval) ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
#define IWindowsDriverUpdate3_get_KBArticleIDs(This,retval) ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
#define IWindowsDriverUpdate3_AcceptEula(This) ( (This)->lpVtbl -> AcceptEula(This) )
#define IWindowsDriverUpdate3_get_DeploymentAction(This,retval) ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
#define IWindowsDriverUpdate3_CopyFromCache(This,path,toExtractCabFiles) ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
#define IWindowsDriverUpdate3_get_DownloadPriority(This,retval) ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
#define IWindowsDriverUpdate3_get_DownloadContents(This,retval) ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
#define IWindowsDriverUpdate3_get_DriverClass(This,retval) ( (This)->lpVtbl -> get_DriverClass(This,retval) )
#define IWindowsDriverUpdate3_get_DriverHardwareID(This,retval) ( (This)->lpVtbl -> get_DriverHardwareID(This,retval) )
#define IWindowsDriverUpdate3_get_DriverManufacturer(This,retval) ( (This)->lpVtbl -> get_DriverManufacturer(This,retval) )
#define IWindowsDriverUpdate3_get_DriverModel(This,retval) ( (This)->lpVtbl -> get_DriverModel(This,retval) )
#define IWindowsDriverUpdate3_get_DriverProvider(This,retval) ( (This)->lpVtbl -> get_DriverProvider(This,retval) )
#define IWindowsDriverUpdate3_get_DriverVerDate(This,retval) ( (This)->lpVtbl -> get_DriverVerDate(This,retval) )
#define IWindowsDriverUpdate3_get_DeviceProblemNumber(This,retval) ( (This)->lpVtbl -> get_DeviceProblemNumber(This,retval) )
#define IWindowsDriverUpdate3_get_DeviceStatus(This,retval) ( (This)->lpVtbl -> get_DeviceStatus(This,retval) )
#define IWindowsDriverUpdate3_get_RebootRequired(This,retval) ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
#define IWindowsDriverUpdate3_get_IsPresent(This,retval) ( (This)->lpVtbl -> get_IsPresent(This,retval) )
#define IWindowsDriverUpdate3_get_CveIDs(This,retval) ( (This)->lpVtbl -> get_CveIDs(This,retval) )
#define IWindowsDriverUpdate3_CopyToCache(This,pFiles) ( (This)->lpVtbl -> CopyToCache(This,pFiles) )
#define IWindowsDriverUpdate3_get_BrowseOnly(This,retval) ( (This)->lpVtbl -> get_BrowseOnly(This,retval) )
#endif
#endif
#ifndef __IWindowsDriverUpdateEntry_INTERFACE_DEFINED__
#define __IWindowsDriverUpdateEntry_INTERFACE_DEFINED__
extern const IID IID_IWindowsDriverUpdateEntry;
typedef struct IWindowsDriverUpdateEntryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWindowsDriverUpdateEntry * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWindowsDriverUpdateEntry * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWindowsDriverUpdateEntry * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWindowsDriverUpdateEntry * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWindowsDriverUpdateEntry * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWindowsDriverUpdateEntry * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWindowsDriverUpdateEntry * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DriverClass) (IWindowsDriverUpdateEntry * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverHardwareID) (IWindowsDriverUpdateEntry * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverManufacturer) (IWindowsDriverUpdateEntry * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverModel) (IWindowsDriverUpdateEntry * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverProvider) (IWindowsDriverUpdateEntry * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverVerDate) (IWindowsDriverUpdateEntry * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeviceProblemNumber) (IWindowsDriverUpdateEntry * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeviceStatus) (IWindowsDriverUpdateEntry * This, LONG * retval);
	END_INTERFACE
}  IWindowsDriverUpdateEntryVtbl;
interface IWindowsDriverUpdateEntry
{
	CONST_VTBL struct IWindowsDriverUpdateEntryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWindowsDriverUpdateEntry_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWindowsDriverUpdateEntry_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWindowsDriverUpdateEntry_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWindowsDriverUpdateEntry_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWindowsDriverUpdateEntry_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWindowsDriverUpdateEntry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWindowsDriverUpdateEntry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWindowsDriverUpdateEntry_get_DriverClass(This,retval) ( (This)->lpVtbl -> get_DriverClass(This,retval) )
#define IWindowsDriverUpdateEntry_get_DriverHardwareID(This,retval) ( (This)->lpVtbl -> get_DriverHardwareID(This,retval) )
#define IWindowsDriverUpdateEntry_get_DriverManufacturer(This,retval) ( (This)->lpVtbl -> get_DriverManufacturer(This,retval) )
#define IWindowsDriverUpdateEntry_get_DriverModel(This,retval) ( (This)->lpVtbl -> get_DriverModel(This,retval) )
#define IWindowsDriverUpdateEntry_get_DriverProvider(This,retval) ( (This)->lpVtbl -> get_DriverProvider(This,retval) )
#define IWindowsDriverUpdateEntry_get_DriverVerDate(This,retval) ( (This)->lpVtbl -> get_DriverVerDate(This,retval) )
#define IWindowsDriverUpdateEntry_get_DeviceProblemNumber(This,retval) ( (This)->lpVtbl -> get_DeviceProblemNumber(This,retval) )
#define IWindowsDriverUpdateEntry_get_DeviceStatus(This,retval) ( (This)->lpVtbl -> get_DeviceStatus(This,retval) )
#endif
#endif
#ifndef __IWindowsDriverUpdateEntryCollection_INTERFACE_DEFINED__
#define __IWindowsDriverUpdateEntryCollection_INTERFACE_DEFINED__
extern const IID IID_IWindowsDriverUpdateEntryCollection;
typedef struct IWindowsDriverUpdateEntryCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWindowsDriverUpdateEntryCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWindowsDriverUpdateEntryCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWindowsDriverUpdateEntryCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWindowsDriverUpdateEntryCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWindowsDriverUpdateEntryCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWindowsDriverUpdateEntryCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWindowsDriverUpdateEntryCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IWindowsDriverUpdateEntryCollection * This, LONG index, IWindowsDriverUpdateEntry ** retval);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IWindowsDriverUpdateEntryCollection * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IWindowsDriverUpdateEntryCollection * This, LONG * retval);
	END_INTERFACE
}  IWindowsDriverUpdateEntryCollectionVtbl;
interface IWindowsDriverUpdateEntryCollection
{
	CONST_VTBL struct IWindowsDriverUpdateEntryCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWindowsDriverUpdateEntryCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWindowsDriverUpdateEntryCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWindowsDriverUpdateEntryCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWindowsDriverUpdateEntryCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWindowsDriverUpdateEntryCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWindowsDriverUpdateEntryCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWindowsDriverUpdateEntryCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWindowsDriverUpdateEntryCollection_get_Item(This,index,retval) ( (This)->lpVtbl -> get_Item(This,index,retval) )
#define IWindowsDriverUpdateEntryCollection_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define IWindowsDriverUpdateEntryCollection_get_Count(This,retval) ( (This)->lpVtbl -> get_Count(This,retval) )
#endif
#endif
#ifndef __IWindowsDriverUpdate4_INTERFACE_DEFINED__
#define __IWindowsDriverUpdate4_INTERFACE_DEFINED__
extern const IID IID_IWindowsDriverUpdate4;
typedef struct IWindowsDriverUpdate4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWindowsDriverUpdate4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWindowsDriverUpdate4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWindowsDriverUpdate4 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWindowsDriverUpdate4 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWindowsDriverUpdate4 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWindowsDriverUpdate4 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWindowsDriverUpdate4 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IWindowsDriverUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_AutoSelectOnWebSites) (IWindowsDriverUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_BundledUpdates) (IWindowsDriverUpdate4 * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_CanRequireSource) (IWindowsDriverUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Categories) (IWindowsDriverUpdate4 * This, ICategoryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Deadline) (IWindowsDriverUpdate4 * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentAvailable) (IWindowsDriverUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentPreferred) (IWindowsDriverUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IWindowsDriverUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaAccepted) (IWindowsDriverUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaText) (IWindowsDriverUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_HandlerID) (IWindowsDriverUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Identity) (IWindowsDriverUpdate4 * This, IUpdateIdentity ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Image) (IWindowsDriverUpdate4 * This, IImageInformation ** retval);
	HRESULT(STDMETHODCALLTYPE * get_InstallationBehavior) (IWindowsDriverUpdate4 * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_IsBeta) (IWindowsDriverUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsDownloaded) (IWindowsDriverUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsHidden) (IWindowsDriverUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IsHidden) (IWindowsDriverUpdate4 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_IsInstalled) (IWindowsDriverUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsMandatory) (IWindowsDriverUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsUninstallable) (IWindowsDriverUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Languages) (IWindowsDriverUpdate4 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_LastDeploymentChangeTime) (IWindowsDriverUpdate4 * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_MaxDownloadSize) (IWindowsDriverUpdate4 * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MinDownloadSize) (IWindowsDriverUpdate4 * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MoreInfoUrls) (IWindowsDriverUpdate4 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_MsrcSeverity) (IWindowsDriverUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedCpuSpeed) (IWindowsDriverUpdate4 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedHardDiskSpace) (IWindowsDriverUpdate4 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedMemory) (IWindowsDriverUpdate4 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ReleaseNotes) (IWindowsDriverUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_SecurityBulletinIDs) (IWindowsDriverUpdate4 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupersededUpdateIDs) (IWindowsDriverUpdate4 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupportUrl) (IWindowsDriverUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IWindowsDriverUpdate4 * This, UpdateType * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationNotes) (IWindowsDriverUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationBehavior) (IWindowsDriverUpdate4 * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationSteps) (IWindowsDriverUpdate4 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_KBArticleIDs) (IWindowsDriverUpdate4 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * AcceptEula) (IWindowsDriverUpdate4 * This);
	HRESULT(STDMETHODCALLTYPE * get_DeploymentAction) (IWindowsDriverUpdate4 * This, DeploymentAction * retval);
	HRESULT(STDMETHODCALLTYPE * CopyFromCache) (IWindowsDriverUpdate4 * This, BSTR path, VARIANT_BOOL toExtractCabFiles);
	HRESULT(STDMETHODCALLTYPE * get_DownloadPriority) (IWindowsDriverUpdate4 * This, DownloadPriority * retval);
	HRESULT(STDMETHODCALLTYPE * get_DownloadContents) (IWindowsDriverUpdate4 * This, IUpdateDownloadContentCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverClass) (IWindowsDriverUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverHardwareID) (IWindowsDriverUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverManufacturer) (IWindowsDriverUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverModel) (IWindowsDriverUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverProvider) (IWindowsDriverUpdate4 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverVerDate) (IWindowsDriverUpdate4 * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeviceProblemNumber) (IWindowsDriverUpdate4 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeviceStatus) (IWindowsDriverUpdate4 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RebootRequired) (IWindowsDriverUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsPresent) (IWindowsDriverUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_CveIDs) (IWindowsDriverUpdate4 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * CopyToCache) (IWindowsDriverUpdate4 * This, IStringCollection * pFiles);
	HRESULT(STDMETHODCALLTYPE * get_BrowseOnly) (IWindowsDriverUpdate4 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_WindowsDriverUpdateEntries) (IWindowsDriverUpdate4 * This, IWindowsDriverUpdateEntryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_PerUser) (IWindowsDriverUpdate4 * This, VARIANT_BOOL * retval);
	END_INTERFACE
}  IWindowsDriverUpdate4Vtbl;
interface IWindowsDriverUpdate4
{
	CONST_VTBL struct IWindowsDriverUpdate4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWindowsDriverUpdate4_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWindowsDriverUpdate4_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWindowsDriverUpdate4_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWindowsDriverUpdate4_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWindowsDriverUpdate4_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWindowsDriverUpdate4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWindowsDriverUpdate4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWindowsDriverUpdate4_get_Title(This,retval) ( (This)->lpVtbl -> get_Title(This,retval) )
#define IWindowsDriverUpdate4_get_AutoSelectOnWebSites(This,retval) ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
#define IWindowsDriverUpdate4_get_BundledUpdates(This,retval) ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
#define IWindowsDriverUpdate4_get_CanRequireSource(This,retval) ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
#define IWindowsDriverUpdate4_get_Categories(This,retval) ( (This)->lpVtbl -> get_Categories(This,retval) )
#define IWindowsDriverUpdate4_get_Deadline(This,retval) ( (This)->lpVtbl -> get_Deadline(This,retval) )
#define IWindowsDriverUpdate4_get_DeltaCompressedContentAvailable(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
#define IWindowsDriverUpdate4_get_DeltaCompressedContentPreferred(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
#define IWindowsDriverUpdate4_get_Description(This,retval) ( (This)->lpVtbl -> get_Description(This,retval) )
#define IWindowsDriverUpdate4_get_EulaAccepted(This,retval) ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
#define IWindowsDriverUpdate4_get_EulaText(This,retval) ( (This)->lpVtbl -> get_EulaText(This,retval) )
#define IWindowsDriverUpdate4_get_HandlerID(This,retval) ( (This)->lpVtbl -> get_HandlerID(This,retval) )
#define IWindowsDriverUpdate4_get_Identity(This,retval) ( (This)->lpVtbl -> get_Identity(This,retval) )
#define IWindowsDriverUpdate4_get_Image(This,retval) ( (This)->lpVtbl -> get_Image(This,retval) )
#define IWindowsDriverUpdate4_get_InstallationBehavior(This,retval) ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
#define IWindowsDriverUpdate4_get_IsBeta(This,retval) ( (This)->lpVtbl -> get_IsBeta(This,retval) )
#define IWindowsDriverUpdate4_get_IsDownloaded(This,retval) ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
#define IWindowsDriverUpdate4_get_IsHidden(This,retval) ( (This)->lpVtbl -> get_IsHidden(This,retval) )
#define IWindowsDriverUpdate4_put_IsHidden(This,value) ( (This)->lpVtbl -> put_IsHidden(This,value) )
#define IWindowsDriverUpdate4_get_IsInstalled(This,retval) ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
#define IWindowsDriverUpdate4_get_IsMandatory(This,retval) ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
#define IWindowsDriverUpdate4_get_IsUninstallable(This,retval) ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
#define IWindowsDriverUpdate4_get_Languages(This,retval) ( (This)->lpVtbl -> get_Languages(This,retval) )
#define IWindowsDriverUpdate4_get_LastDeploymentChangeTime(This,retval) ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
#define IWindowsDriverUpdate4_get_MaxDownloadSize(This,retval) ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
#define IWindowsDriverUpdate4_get_MinDownloadSize(This,retval) ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
#define IWindowsDriverUpdate4_get_MoreInfoUrls(This,retval) ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
#define IWindowsDriverUpdate4_get_MsrcSeverity(This,retval) ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
#define IWindowsDriverUpdate4_get_RecommendedCpuSpeed(This,retval) ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
#define IWindowsDriverUpdate4_get_RecommendedHardDiskSpace(This,retval) ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
#define IWindowsDriverUpdate4_get_RecommendedMemory(This,retval) ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
#define IWindowsDriverUpdate4_get_ReleaseNotes(This,retval) ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
#define IWindowsDriverUpdate4_get_SecurityBulletinIDs(This,retval) ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
#define IWindowsDriverUpdate4_get_SupersededUpdateIDs(This,retval) ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
#define IWindowsDriverUpdate4_get_SupportUrl(This,retval) ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
#define IWindowsDriverUpdate4_get_Type(This,retval) ( (This)->lpVtbl -> get_Type(This,retval) )
#define IWindowsDriverUpdate4_get_UninstallationNotes(This,retval) ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
#define IWindowsDriverUpdate4_get_UninstallationBehavior(This,retval) ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
#define IWindowsDriverUpdate4_get_UninstallationSteps(This,retval) ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
#define IWindowsDriverUpdate4_get_KBArticleIDs(This,retval) ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
#define IWindowsDriverUpdate4_AcceptEula(This) ( (This)->lpVtbl -> AcceptEula(This) )
#define IWindowsDriverUpdate4_get_DeploymentAction(This,retval) ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
#define IWindowsDriverUpdate4_CopyFromCache(This,path,toExtractCabFiles) ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
#define IWindowsDriverUpdate4_get_DownloadPriority(This,retval) ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
#define IWindowsDriverUpdate4_get_DownloadContents(This,retval) ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
#define IWindowsDriverUpdate4_get_DriverClass(This,retval) ( (This)->lpVtbl -> get_DriverClass(This,retval) )
#define IWindowsDriverUpdate4_get_DriverHardwareID(This,retval) ( (This)->lpVtbl -> get_DriverHardwareID(This,retval) )
#define IWindowsDriverUpdate4_get_DriverManufacturer(This,retval) ( (This)->lpVtbl -> get_DriverManufacturer(This,retval) )
#define IWindowsDriverUpdate4_get_DriverModel(This,retval) ( (This)->lpVtbl -> get_DriverModel(This,retval) )
#define IWindowsDriverUpdate4_get_DriverProvider(This,retval) ( (This)->lpVtbl -> get_DriverProvider(This,retval) )
#define IWindowsDriverUpdate4_get_DriverVerDate(This,retval) ( (This)->lpVtbl -> get_DriverVerDate(This,retval) )
#define IWindowsDriverUpdate4_get_DeviceProblemNumber(This,retval) ( (This)->lpVtbl -> get_DeviceProblemNumber(This,retval) )
#define IWindowsDriverUpdate4_get_DeviceStatus(This,retval) ( (This)->lpVtbl -> get_DeviceStatus(This,retval) )
#define IWindowsDriverUpdate4_get_RebootRequired(This,retval) ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
#define IWindowsDriverUpdate4_get_IsPresent(This,retval) ( (This)->lpVtbl -> get_IsPresent(This,retval) )
#define IWindowsDriverUpdate4_get_CveIDs(This,retval) ( (This)->lpVtbl -> get_CveIDs(This,retval) )
#define IWindowsDriverUpdate4_CopyToCache(This,pFiles) ( (This)->lpVtbl -> CopyToCache(This,pFiles) )
#define IWindowsDriverUpdate4_get_BrowseOnly(This,retval) ( (This)->lpVtbl -> get_BrowseOnly(This,retval) )
#define IWindowsDriverUpdate4_get_WindowsDriverUpdateEntries(This,retval) ( (This)->lpVtbl -> get_WindowsDriverUpdateEntries(This,retval) )
#define IWindowsDriverUpdate4_get_PerUser(This,retval) ( (This)->lpVtbl -> get_PerUser(This,retval) )
#endif
#endif
#ifndef __IWindowsDriverUpdate5_INTERFACE_DEFINED__
#define __IWindowsDriverUpdate5_INTERFACE_DEFINED__
extern const IID IID_IWindowsDriverUpdate5;
typedef struct IWindowsDriverUpdate5Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWindowsDriverUpdate5 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWindowsDriverUpdate5 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWindowsDriverUpdate5 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWindowsDriverUpdate5 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWindowsDriverUpdate5 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWindowsDriverUpdate5 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWindowsDriverUpdate5 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IWindowsDriverUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_AutoSelectOnWebSites) (IWindowsDriverUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_BundledUpdates) (IWindowsDriverUpdate5 * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_CanRequireSource) (IWindowsDriverUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Categories) (IWindowsDriverUpdate5 * This, ICategoryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Deadline) (IWindowsDriverUpdate5 * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentAvailable) (IWindowsDriverUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeltaCompressedContentPreferred) (IWindowsDriverUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IWindowsDriverUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaAccepted) (IWindowsDriverUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_EulaText) (IWindowsDriverUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_HandlerID) (IWindowsDriverUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Identity) (IWindowsDriverUpdate5 * This, IUpdateIdentity ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Image) (IWindowsDriverUpdate5 * This, IImageInformation ** retval);
	HRESULT(STDMETHODCALLTYPE * get_InstallationBehavior) (IWindowsDriverUpdate5 * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_IsBeta) (IWindowsDriverUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsDownloaded) (IWindowsDriverUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsHidden) (IWindowsDriverUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IsHidden) (IWindowsDriverUpdate5 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_IsInstalled) (IWindowsDriverUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsMandatory) (IWindowsDriverUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsUninstallable) (IWindowsDriverUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Languages) (IWindowsDriverUpdate5 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_LastDeploymentChangeTime) (IWindowsDriverUpdate5 * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_MaxDownloadSize) (IWindowsDriverUpdate5 * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MinDownloadSize) (IWindowsDriverUpdate5 * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_MoreInfoUrls) (IWindowsDriverUpdate5 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_MsrcSeverity) (IWindowsDriverUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedCpuSpeed) (IWindowsDriverUpdate5 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedHardDiskSpace) (IWindowsDriverUpdate5 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RecommendedMemory) (IWindowsDriverUpdate5 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ReleaseNotes) (IWindowsDriverUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_SecurityBulletinIDs) (IWindowsDriverUpdate5 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupersededUpdateIDs) (IWindowsDriverUpdate5 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_SupportUrl) (IWindowsDriverUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IWindowsDriverUpdate5 * This, UpdateType * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationNotes) (IWindowsDriverUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationBehavior) (IWindowsDriverUpdate5 * This, IInstallationBehavior ** retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationSteps) (IWindowsDriverUpdate5 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_KBArticleIDs) (IWindowsDriverUpdate5 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * AcceptEula) (IWindowsDriverUpdate5 * This);
	HRESULT(STDMETHODCALLTYPE * get_DeploymentAction) (IWindowsDriverUpdate5 * This, DeploymentAction * retval);
	HRESULT(STDMETHODCALLTYPE * CopyFromCache) (IWindowsDriverUpdate5 * This, BSTR path, VARIANT_BOOL toExtractCabFiles);
	HRESULT(STDMETHODCALLTYPE * get_DownloadPriority) (IWindowsDriverUpdate5 * This, DownloadPriority * retval);
	HRESULT(STDMETHODCALLTYPE * get_DownloadContents) (IWindowsDriverUpdate5 * This, IUpdateDownloadContentCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverClass) (IWindowsDriverUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverHardwareID) (IWindowsDriverUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverManufacturer) (IWindowsDriverUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverModel) (IWindowsDriverUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverProvider) (IWindowsDriverUpdate5 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_DriverVerDate) (IWindowsDriverUpdate5 * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeviceProblemNumber) (IWindowsDriverUpdate5 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_DeviceStatus) (IWindowsDriverUpdate5 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RebootRequired) (IWindowsDriverUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsPresent) (IWindowsDriverUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_CveIDs) (IWindowsDriverUpdate5 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * CopyToCache) (IWindowsDriverUpdate5 * This, IStringCollection * pFiles);
	HRESULT(STDMETHODCALLTYPE * get_BrowseOnly) (IWindowsDriverUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_WindowsDriverUpdateEntries) (IWindowsDriverUpdate5 * This, IWindowsDriverUpdateEntryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_PerUser) (IWindowsDriverUpdate5 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_AutoSelection) (IWindowsDriverUpdate5 * This, AutoSelectionMode * retval);
	HRESULT(STDMETHODCALLTYPE * get_AutoDownload) (IWindowsDriverUpdate5 * This, AutoDownloadMode * retval);
	END_INTERFACE
}  IWindowsDriverUpdate5Vtbl;
interface IWindowsDriverUpdate5
{
	CONST_VTBL struct IWindowsDriverUpdate5Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWindowsDriverUpdate5_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWindowsDriverUpdate5_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWindowsDriverUpdate5_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWindowsDriverUpdate5_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWindowsDriverUpdate5_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWindowsDriverUpdate5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWindowsDriverUpdate5_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWindowsDriverUpdate5_get_Title(This,retval) ( (This)->lpVtbl -> get_Title(This,retval) )
#define IWindowsDriverUpdate5_get_AutoSelectOnWebSites(This,retval) ( (This)->lpVtbl -> get_AutoSelectOnWebSites(This,retval) )
#define IWindowsDriverUpdate5_get_BundledUpdates(This,retval) ( (This)->lpVtbl -> get_BundledUpdates(This,retval) )
#define IWindowsDriverUpdate5_get_CanRequireSource(This,retval) ( (This)->lpVtbl -> get_CanRequireSource(This,retval) )
#define IWindowsDriverUpdate5_get_Categories(This,retval) ( (This)->lpVtbl -> get_Categories(This,retval) )
#define IWindowsDriverUpdate5_get_Deadline(This,retval) ( (This)->lpVtbl -> get_Deadline(This,retval) )
#define IWindowsDriverUpdate5_get_DeltaCompressedContentAvailable(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentAvailable(This,retval) )
#define IWindowsDriverUpdate5_get_DeltaCompressedContentPreferred(This,retval) ( (This)->lpVtbl -> get_DeltaCompressedContentPreferred(This,retval) )
#define IWindowsDriverUpdate5_get_Description(This,retval) ( (This)->lpVtbl -> get_Description(This,retval) )
#define IWindowsDriverUpdate5_get_EulaAccepted(This,retval) ( (This)->lpVtbl -> get_EulaAccepted(This,retval) )
#define IWindowsDriverUpdate5_get_EulaText(This,retval) ( (This)->lpVtbl -> get_EulaText(This,retval) )
#define IWindowsDriverUpdate5_get_HandlerID(This,retval) ( (This)->lpVtbl -> get_HandlerID(This,retval) )
#define IWindowsDriverUpdate5_get_Identity(This,retval) ( (This)->lpVtbl -> get_Identity(This,retval) )
#define IWindowsDriverUpdate5_get_Image(This,retval) ( (This)->lpVtbl -> get_Image(This,retval) )
#define IWindowsDriverUpdate5_get_InstallationBehavior(This,retval) ( (This)->lpVtbl -> get_InstallationBehavior(This,retval) )
#define IWindowsDriverUpdate5_get_IsBeta(This,retval) ( (This)->lpVtbl -> get_IsBeta(This,retval) )
#define IWindowsDriverUpdate5_get_IsDownloaded(This,retval) ( (This)->lpVtbl -> get_IsDownloaded(This,retval) )
#define IWindowsDriverUpdate5_get_IsHidden(This,retval) ( (This)->lpVtbl -> get_IsHidden(This,retval) )
#define IWindowsDriverUpdate5_put_IsHidden(This,value) ( (This)->lpVtbl -> put_IsHidden(This,value) )
#define IWindowsDriverUpdate5_get_IsInstalled(This,retval) ( (This)->lpVtbl -> get_IsInstalled(This,retval) )
#define IWindowsDriverUpdate5_get_IsMandatory(This,retval) ( (This)->lpVtbl -> get_IsMandatory(This,retval) )
#define IWindowsDriverUpdate5_get_IsUninstallable(This,retval) ( (This)->lpVtbl -> get_IsUninstallable(This,retval) )
#define IWindowsDriverUpdate5_get_Languages(This,retval) ( (This)->lpVtbl -> get_Languages(This,retval) )
#define IWindowsDriverUpdate5_get_LastDeploymentChangeTime(This,retval) ( (This)->lpVtbl -> get_LastDeploymentChangeTime(This,retval) )
#define IWindowsDriverUpdate5_get_MaxDownloadSize(This,retval) ( (This)->lpVtbl -> get_MaxDownloadSize(This,retval) )
#define IWindowsDriverUpdate5_get_MinDownloadSize(This,retval) ( (This)->lpVtbl -> get_MinDownloadSize(This,retval) )
#define IWindowsDriverUpdate5_get_MoreInfoUrls(This,retval) ( (This)->lpVtbl -> get_MoreInfoUrls(This,retval) )
#define IWindowsDriverUpdate5_get_MsrcSeverity(This,retval) ( (This)->lpVtbl -> get_MsrcSeverity(This,retval) )
#define IWindowsDriverUpdate5_get_RecommendedCpuSpeed(This,retval) ( (This)->lpVtbl -> get_RecommendedCpuSpeed(This,retval) )
#define IWindowsDriverUpdate5_get_RecommendedHardDiskSpace(This,retval) ( (This)->lpVtbl -> get_RecommendedHardDiskSpace(This,retval) )
#define IWindowsDriverUpdate5_get_RecommendedMemory(This,retval) ( (This)->lpVtbl -> get_RecommendedMemory(This,retval) )
#define IWindowsDriverUpdate5_get_ReleaseNotes(This,retval) ( (This)->lpVtbl -> get_ReleaseNotes(This,retval) )
#define IWindowsDriverUpdate5_get_SecurityBulletinIDs(This,retval) ( (This)->lpVtbl -> get_SecurityBulletinIDs(This,retval) )
#define IWindowsDriverUpdate5_get_SupersededUpdateIDs(This,retval) ( (This)->lpVtbl -> get_SupersededUpdateIDs(This,retval) )
#define IWindowsDriverUpdate5_get_SupportUrl(This,retval) ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
#define IWindowsDriverUpdate5_get_Type(This,retval) ( (This)->lpVtbl -> get_Type(This,retval) )
#define IWindowsDriverUpdate5_get_UninstallationNotes(This,retval) ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
#define IWindowsDriverUpdate5_get_UninstallationBehavior(This,retval) ( (This)->lpVtbl -> get_UninstallationBehavior(This,retval) )
#define IWindowsDriverUpdate5_get_UninstallationSteps(This,retval) ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
#define IWindowsDriverUpdate5_get_KBArticleIDs(This,retval) ( (This)->lpVtbl -> get_KBArticleIDs(This,retval) )
#define IWindowsDriverUpdate5_AcceptEula(This) ( (This)->lpVtbl -> AcceptEula(This) )
#define IWindowsDriverUpdate5_get_DeploymentAction(This,retval) ( (This)->lpVtbl -> get_DeploymentAction(This,retval) )
#define IWindowsDriverUpdate5_CopyFromCache(This,path,toExtractCabFiles) ( (This)->lpVtbl -> CopyFromCache(This,path,toExtractCabFiles) )
#define IWindowsDriverUpdate5_get_DownloadPriority(This,retval) ( (This)->lpVtbl -> get_DownloadPriority(This,retval) )
#define IWindowsDriverUpdate5_get_DownloadContents(This,retval) ( (This)->lpVtbl -> get_DownloadContents(This,retval) )
#define IWindowsDriverUpdate5_get_DriverClass(This,retval) ( (This)->lpVtbl -> get_DriverClass(This,retval) )
#define IWindowsDriverUpdate5_get_DriverHardwareID(This,retval) ( (This)->lpVtbl -> get_DriverHardwareID(This,retval) )
#define IWindowsDriverUpdate5_get_DriverManufacturer(This,retval) ( (This)->lpVtbl -> get_DriverManufacturer(This,retval) )
#define IWindowsDriverUpdate5_get_DriverModel(This,retval) ( (This)->lpVtbl -> get_DriverModel(This,retval) )
#define IWindowsDriverUpdate5_get_DriverProvider(This,retval) ( (This)->lpVtbl -> get_DriverProvider(This,retval) )
#define IWindowsDriverUpdate5_get_DriverVerDate(This,retval) ( (This)->lpVtbl -> get_DriverVerDate(This,retval) )
#define IWindowsDriverUpdate5_get_DeviceProblemNumber(This,retval) ( (This)->lpVtbl -> get_DeviceProblemNumber(This,retval) )
#define IWindowsDriverUpdate5_get_DeviceStatus(This,retval) ( (This)->lpVtbl -> get_DeviceStatus(This,retval) )
#define IWindowsDriverUpdate5_get_RebootRequired(This,retval) ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
#define IWindowsDriverUpdate5_get_IsPresent(This,retval) ( (This)->lpVtbl -> get_IsPresent(This,retval) )
#define IWindowsDriverUpdate5_get_CveIDs(This,retval) ( (This)->lpVtbl -> get_CveIDs(This,retval) )
#define IWindowsDriverUpdate5_CopyToCache(This,pFiles) ( (This)->lpVtbl -> CopyToCache(This,pFiles) )
#define IWindowsDriverUpdate5_get_BrowseOnly(This,retval) ( (This)->lpVtbl -> get_BrowseOnly(This,retval) )
#define IWindowsDriverUpdate5_get_WindowsDriverUpdateEntries(This,retval) ( (This)->lpVtbl -> get_WindowsDriverUpdateEntries(This,retval) )
#define IWindowsDriverUpdate5_get_PerUser(This,retval) ( (This)->lpVtbl -> get_PerUser(This,retval) )
#define IWindowsDriverUpdate5_get_AutoSelection(This,retval) ( (This)->lpVtbl -> get_AutoSelection(This,retval) )
#define IWindowsDriverUpdate5_get_AutoDownload(This,retval) ( (This)->lpVtbl -> get_AutoDownload(This,retval) )
#endif
#endif
#ifndef __IUpdateCollection_INTERFACE_DEFINED__
#define __IUpdateCollection_INTERFACE_DEFINED__
extern const IID IID_IUpdateCollection;
typedef struct IUpdateCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IUpdateCollection * This, LONG index, IUpdate ** retval);
	HRESULT(STDMETHODCALLTYPE * put_Item) (IUpdateCollection * This, LONG index, IUpdate * value);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IUpdateCollection * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IUpdateCollection * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ReadOnly) (IUpdateCollection * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * Add) (IUpdateCollection * This, IUpdate * value, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * Clear) (IUpdateCollection * This);
	HRESULT(STDMETHODCALLTYPE * Copy) (IUpdateCollection * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * Insert) (IUpdateCollection * This, LONG index, IUpdate * value);
	HRESULT(STDMETHODCALLTYPE * RemoveAt) (IUpdateCollection * This, LONG index);
	END_INTERFACE
}  IUpdateCollectionVtbl;
interface IUpdateCollection
{
	CONST_VTBL struct IUpdateCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateCollection_get_Item(This,index,retval) ( (This)->lpVtbl -> get_Item(This,index,retval) )
#define IUpdateCollection_put_Item(This,index,value) ( (This)->lpVtbl -> put_Item(This,index,value) )
#define IUpdateCollection_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define IUpdateCollection_get_Count(This,retval) ( (This)->lpVtbl -> get_Count(This,retval) )
#define IUpdateCollection_get_ReadOnly(This,retval) ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
#define IUpdateCollection_Add(This,value,retval) ( (This)->lpVtbl -> Add(This,value,retval) )
#define IUpdateCollection_Clear(This) ( (This)->lpVtbl -> Clear(This) )
#define IUpdateCollection_Copy(This,retval) ( (This)->lpVtbl -> Copy(This,retval) )
#define IUpdateCollection_Insert(This,index,value) ( (This)->lpVtbl -> Insert(This,index,value) )
#define IUpdateCollection_RemoveAt(This,index) ( (This)->lpVtbl -> RemoveAt(This,index) )
#endif
#endif
#ifndef __IUpdateException_INTERFACE_DEFINED__
#define __IUpdateException_INTERFACE_DEFINED__
extern const IID IID_IUpdateException;
typedef struct IUpdateExceptionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateException * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateException * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateException * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateException * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateException * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateException * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateException * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Message) (IUpdateException * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_HResult) (IUpdateException * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_Context) (IUpdateException * This, UpdateExceptionContext * retval);
	END_INTERFACE
}  IUpdateExceptionVtbl;
interface IUpdateException
{
	CONST_VTBL struct IUpdateExceptionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateException_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateException_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateException_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateException_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateException_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateException_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateException_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateException_get_Message(This,retval) ( (This)->lpVtbl -> get_Message(This,retval) )
#define IUpdateException_get_HResult(This,retval) ( (This)->lpVtbl -> get_HResult(This,retval) )
#define IUpdateException_get_Context(This,retval) ( (This)->lpVtbl -> get_Context(This,retval) )
#endif
#endif
#ifndef __IInvalidProductLicenseException_INTERFACE_DEFINED__
#define __IInvalidProductLicenseException_INTERFACE_DEFINED__
extern const IID IID_IInvalidProductLicenseException;
typedef struct IInvalidProductLicenseExceptionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInvalidProductLicenseException * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInvalidProductLicenseException * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInvalidProductLicenseException * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInvalidProductLicenseException * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInvalidProductLicenseException * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInvalidProductLicenseException * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInvalidProductLicenseException * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Message) (IInvalidProductLicenseException * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_HResult) (IInvalidProductLicenseException * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_Context) (IInvalidProductLicenseException * This, UpdateExceptionContext * retval);
	HRESULT(STDMETHODCALLTYPE * get_Product) (IInvalidProductLicenseException * This, BSTR * retval);
	END_INTERFACE
}  IInvalidProductLicenseExceptionVtbl;
interface IInvalidProductLicenseException
{
	CONST_VTBL struct IInvalidProductLicenseExceptionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInvalidProductLicenseException_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInvalidProductLicenseException_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInvalidProductLicenseException_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInvalidProductLicenseException_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInvalidProductLicenseException_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInvalidProductLicenseException_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInvalidProductLicenseException_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInvalidProductLicenseException_get_Message(This,retval) ( (This)->lpVtbl -> get_Message(This,retval) )
#define IInvalidProductLicenseException_get_HResult(This,retval) ( (This)->lpVtbl -> get_HResult(This,retval) )
#define IInvalidProductLicenseException_get_Context(This,retval) ( (This)->lpVtbl -> get_Context(This,retval) )
#define IInvalidProductLicenseException_get_Product(This,retval) ( (This)->lpVtbl -> get_Product(This,retval) )
#endif
#endif
#ifndef __IUpdateExceptionCollection_INTERFACE_DEFINED__
#define __IUpdateExceptionCollection_INTERFACE_DEFINED__
extern const IID IID_IUpdateExceptionCollection;
typedef struct IUpdateExceptionCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateExceptionCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateExceptionCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateExceptionCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateExceptionCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateExceptionCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateExceptionCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateExceptionCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IUpdateExceptionCollection * This, LONG index, IUpdateException ** retval);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IUpdateExceptionCollection * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IUpdateExceptionCollection * This, LONG * retval);
	END_INTERFACE
}  IUpdateExceptionCollectionVtbl;
interface IUpdateExceptionCollection
{
	CONST_VTBL struct IUpdateExceptionCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateExceptionCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateExceptionCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateExceptionCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateExceptionCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateExceptionCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateExceptionCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateExceptionCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateExceptionCollection_get_Item(This,index,retval) ( (This)->lpVtbl -> get_Item(This,index,retval) )
#define IUpdateExceptionCollection_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define IUpdateExceptionCollection_get_Count(This,retval) ( (This)->lpVtbl -> get_Count(This,retval) )
#endif
#endif
#ifndef __ISearchResult_INTERFACE_DEFINED__
#define __ISearchResult_INTERFACE_DEFINED__
extern const IID IID_ISearchResult;
typedef struct ISearchResultVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchResult * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchResult * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchResult * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ISearchResult * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ISearchResult * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ISearchResult * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ISearchResult * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ResultCode) (ISearchResult * This, OperationResultCode * retval);
	HRESULT(STDMETHODCALLTYPE * get_RootCategories) (ISearchResult * This, ICategoryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Updates) (ISearchResult * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Warnings) (ISearchResult * This, IUpdateExceptionCollection ** retval);
	END_INTERFACE
}  ISearchResultVtbl;
interface ISearchResult
{
	CONST_VTBL struct ISearchResultVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchResult_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchResult_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchResult_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchResult_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISearchResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISearchResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISearchResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISearchResult_get_ResultCode(This,retval) ( (This)->lpVtbl -> get_ResultCode(This,retval) )
#define ISearchResult_get_RootCategories(This,retval) ( (This)->lpVtbl -> get_RootCategories(This,retval) )
#define ISearchResult_get_Updates(This,retval) ( (This)->lpVtbl -> get_Updates(This,retval) )
#define ISearchResult_get_Warnings(This,retval) ( (This)->lpVtbl -> get_Warnings(This,retval) )
#endif
#endif
#ifndef __ISearchJob_INTERFACE_DEFINED__
#define __ISearchJob_INTERFACE_DEFINED__
extern const IID IID_ISearchJob;
typedef struct ISearchJobVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchJob * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchJob * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchJob * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ISearchJob * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ISearchJob * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ISearchJob * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ISearchJob * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_AsyncState) (ISearchJob * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsCompleted) (ISearchJob * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * CleanUp) (ISearchJob * This);
	HRESULT(STDMETHODCALLTYPE * RequestAbort) (ISearchJob * This);
	END_INTERFACE
}  ISearchJobVtbl;
interface ISearchJob
{
	CONST_VTBL struct ISearchJobVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchJob_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchJob_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchJob_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchJob_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISearchJob_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISearchJob_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISearchJob_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISearchJob_get_AsyncState(This,retval) ( (This)->lpVtbl -> get_AsyncState(This,retval) )
#define ISearchJob_get_IsCompleted(This,retval) ( (This)->lpVtbl -> get_IsCompleted(This,retval) )
#define ISearchJob_CleanUp(This) ( (This)->lpVtbl -> CleanUp(This) )
#define ISearchJob_RequestAbort(This) ( (This)->lpVtbl -> RequestAbort(This) )
#endif
#endif
#ifndef __ISearchCompletedCallbackArgs_INTERFACE_DEFINED__
#define __ISearchCompletedCallbackArgs_INTERFACE_DEFINED__
extern const IID IID_ISearchCompletedCallbackArgs;
typedef struct ISearchCompletedCallbackArgsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchCompletedCallbackArgs * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchCompletedCallbackArgs * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchCompletedCallbackArgs * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ISearchCompletedCallbackArgs * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ISearchCompletedCallbackArgs * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ISearchCompletedCallbackArgs * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ISearchCompletedCallbackArgs * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  ISearchCompletedCallbackArgsVtbl;
interface ISearchCompletedCallbackArgs
{
	CONST_VTBL struct ISearchCompletedCallbackArgsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchCompletedCallbackArgs_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchCompletedCallbackArgs_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchCompletedCallbackArgs_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchCompletedCallbackArgs_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISearchCompletedCallbackArgs_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISearchCompletedCallbackArgs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISearchCompletedCallbackArgs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __ISearchCompletedCallback_INTERFACE_DEFINED__
#define __ISearchCompletedCallback_INTERFACE_DEFINED__
extern const IID IID_ISearchCompletedCallback;
typedef struct ISearchCompletedCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchCompletedCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchCompletedCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchCompletedCallback * This);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ISearchCompletedCallback * This, ISearchJob * searchJob, ISearchCompletedCallbackArgs * callbackArgs);
	END_INTERFACE
}  ISearchCompletedCallbackVtbl;
interface ISearchCompletedCallback
{
	CONST_VTBL struct ISearchCompletedCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchCompletedCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchCompletedCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchCompletedCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchCompletedCallback_Invoke(This,searchJob,callbackArgs) ( (This)->lpVtbl -> Invoke(This,searchJob,callbackArgs) )
#endif
#endif
#ifndef __IUpdateHistoryEntry_INTERFACE_DEFINED__
#define __IUpdateHistoryEntry_INTERFACE_DEFINED__
extern const IID IID_IUpdateHistoryEntry;
typedef struct IUpdateHistoryEntryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateHistoryEntry * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateHistoryEntry * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateHistoryEntry * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateHistoryEntry * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateHistoryEntry * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateHistoryEntry * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateHistoryEntry * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Operation) (IUpdateHistoryEntry * This, UpdateOperation * retval);
	HRESULT(STDMETHODCALLTYPE * get_ResultCode) (IUpdateHistoryEntry * This, OperationResultCode * retval);
	HRESULT(STDMETHODCALLTYPE * get_HResult) (IUpdateHistoryEntry * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_Date) (IUpdateHistoryEntry * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_UpdateIdentity) (IUpdateHistoryEntry * This, IUpdateIdentity ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IUpdateHistoryEntry * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IUpdateHistoryEntry * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_UnmappedResultCode) (IUpdateHistoryEntry * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ClientApplicationID) (IUpdateHistoryEntry * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_ServerSelection) (IUpdateHistoryEntry * This, ServerSelection * retval);
	HRESULT(STDMETHODCALLTYPE * get_ServiceID) (IUpdateHistoryEntry * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationSteps) (IUpdateHistoryEntry * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationNotes) (IUpdateHistoryEntry * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_SupportUrl) (IUpdateHistoryEntry * This, BSTR * retval);
	END_INTERFACE
}  IUpdateHistoryEntryVtbl;
interface IUpdateHistoryEntry
{
	CONST_VTBL struct IUpdateHistoryEntryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateHistoryEntry_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateHistoryEntry_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateHistoryEntry_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateHistoryEntry_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateHistoryEntry_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateHistoryEntry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateHistoryEntry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateHistoryEntry_get_Operation(This,retval) ( (This)->lpVtbl -> get_Operation(This,retval) )
#define IUpdateHistoryEntry_get_ResultCode(This,retval) ( (This)->lpVtbl -> get_ResultCode(This,retval) )
#define IUpdateHistoryEntry_get_HResult(This,retval) ( (This)->lpVtbl -> get_HResult(This,retval) )
#define IUpdateHistoryEntry_get_Date(This,retval) ( (This)->lpVtbl -> get_Date(This,retval) )
#define IUpdateHistoryEntry_get_UpdateIdentity(This,retval) ( (This)->lpVtbl -> get_UpdateIdentity(This,retval) )
#define IUpdateHistoryEntry_get_Title(This,retval) ( (This)->lpVtbl -> get_Title(This,retval) )
#define IUpdateHistoryEntry_get_Description(This,retval) ( (This)->lpVtbl -> get_Description(This,retval) )
#define IUpdateHistoryEntry_get_UnmappedResultCode(This,retval) ( (This)->lpVtbl -> get_UnmappedResultCode(This,retval) )
#define IUpdateHistoryEntry_get_ClientApplicationID(This,retval) ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
#define IUpdateHistoryEntry_get_ServerSelection(This,retval) ( (This)->lpVtbl -> get_ServerSelection(This,retval) )
#define IUpdateHistoryEntry_get_ServiceID(This,retval) ( (This)->lpVtbl -> get_ServiceID(This,retval) )
#define IUpdateHistoryEntry_get_UninstallationSteps(This,retval) ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
#define IUpdateHistoryEntry_get_UninstallationNotes(This,retval) ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
#define IUpdateHistoryEntry_get_SupportUrl(This,retval) ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
#endif
#endif
#ifndef __IUpdateHistoryEntry2_INTERFACE_DEFINED__
#define __IUpdateHistoryEntry2_INTERFACE_DEFINED__
extern const IID IID_IUpdateHistoryEntry2;
typedef struct IUpdateHistoryEntry2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateHistoryEntry2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateHistoryEntry2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateHistoryEntry2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateHistoryEntry2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateHistoryEntry2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateHistoryEntry2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateHistoryEntry2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Operation) (IUpdateHistoryEntry2 * This, UpdateOperation * retval);
	HRESULT(STDMETHODCALLTYPE * get_ResultCode) (IUpdateHistoryEntry2 * This, OperationResultCode * retval);
	HRESULT(STDMETHODCALLTYPE * get_HResult) (IUpdateHistoryEntry2 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_Date) (IUpdateHistoryEntry2 * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_UpdateIdentity) (IUpdateHistoryEntry2 * This, IUpdateIdentity ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IUpdateHistoryEntry2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IUpdateHistoryEntry2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_UnmappedResultCode) (IUpdateHistoryEntry2 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ClientApplicationID) (IUpdateHistoryEntry2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_ServerSelection) (IUpdateHistoryEntry2 * This, ServerSelection * retval);
	HRESULT(STDMETHODCALLTYPE * get_ServiceID) (IUpdateHistoryEntry2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationSteps) (IUpdateHistoryEntry2 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_UninstallationNotes) (IUpdateHistoryEntry2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_SupportUrl) (IUpdateHistoryEntry2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_Categories) (IUpdateHistoryEntry2 * This, ICategoryCollection ** retval);
	END_INTERFACE
}  IUpdateHistoryEntry2Vtbl;
interface IUpdateHistoryEntry2
{
	CONST_VTBL struct IUpdateHistoryEntry2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateHistoryEntry2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateHistoryEntry2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateHistoryEntry2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateHistoryEntry2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateHistoryEntry2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateHistoryEntry2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateHistoryEntry2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateHistoryEntry2_get_Operation(This,retval) ( (This)->lpVtbl -> get_Operation(This,retval) )
#define IUpdateHistoryEntry2_get_ResultCode(This,retval) ( (This)->lpVtbl -> get_ResultCode(This,retval) )
#define IUpdateHistoryEntry2_get_HResult(This,retval) ( (This)->lpVtbl -> get_HResult(This,retval) )
#define IUpdateHistoryEntry2_get_Date(This,retval) ( (This)->lpVtbl -> get_Date(This,retval) )
#define IUpdateHistoryEntry2_get_UpdateIdentity(This,retval) ( (This)->lpVtbl -> get_UpdateIdentity(This,retval) )
#define IUpdateHistoryEntry2_get_Title(This,retval) ( (This)->lpVtbl -> get_Title(This,retval) )
#define IUpdateHistoryEntry2_get_Description(This,retval) ( (This)->lpVtbl -> get_Description(This,retval) )
#define IUpdateHistoryEntry2_get_UnmappedResultCode(This,retval) ( (This)->lpVtbl -> get_UnmappedResultCode(This,retval) )
#define IUpdateHistoryEntry2_get_ClientApplicationID(This,retval) ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
#define IUpdateHistoryEntry2_get_ServerSelection(This,retval) ( (This)->lpVtbl -> get_ServerSelection(This,retval) )
#define IUpdateHistoryEntry2_get_ServiceID(This,retval) ( (This)->lpVtbl -> get_ServiceID(This,retval) )
#define IUpdateHistoryEntry2_get_UninstallationSteps(This,retval) ( (This)->lpVtbl -> get_UninstallationSteps(This,retval) )
#define IUpdateHistoryEntry2_get_UninstallationNotes(This,retval) ( (This)->lpVtbl -> get_UninstallationNotes(This,retval) )
#define IUpdateHistoryEntry2_get_SupportUrl(This,retval) ( (This)->lpVtbl -> get_SupportUrl(This,retval) )
#define IUpdateHistoryEntry2_get_Categories(This,retval) ( (This)->lpVtbl -> get_Categories(This,retval) )
#endif
#endif
#ifndef __IUpdateHistoryEntryCollection_INTERFACE_DEFINED__
#define __IUpdateHistoryEntryCollection_INTERFACE_DEFINED__
extern const IID IID_IUpdateHistoryEntryCollection;
typedef struct IUpdateHistoryEntryCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateHistoryEntryCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateHistoryEntryCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateHistoryEntryCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateHistoryEntryCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateHistoryEntryCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateHistoryEntryCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateHistoryEntryCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IUpdateHistoryEntryCollection * This, LONG index, IUpdateHistoryEntry ** retval);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IUpdateHistoryEntryCollection * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IUpdateHistoryEntryCollection * This, LONG * retval);
	END_INTERFACE
}  IUpdateHistoryEntryCollectionVtbl;
interface IUpdateHistoryEntryCollection
{
	CONST_VTBL struct IUpdateHistoryEntryCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateHistoryEntryCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateHistoryEntryCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateHistoryEntryCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateHistoryEntryCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateHistoryEntryCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateHistoryEntryCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateHistoryEntryCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateHistoryEntryCollection_get_Item(This,index,retval) ( (This)->lpVtbl -> get_Item(This,index,retval) )
#define IUpdateHistoryEntryCollection_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define IUpdateHistoryEntryCollection_get_Count(This,retval) ( (This)->lpVtbl -> get_Count(This,retval) )
#endif
#endif
#ifndef __IUpdateSearcher_INTERFACE_DEFINED__
#define __IUpdateSearcher_INTERFACE_DEFINED__
extern const IID IID_IUpdateSearcher;
typedef struct IUpdateSearcherVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateSearcher * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateSearcher * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateSearcher * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateSearcher * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateSearcher * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateSearcher * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateSearcher * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CanAutomaticallyUpgradeService) (IUpdateSearcher * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_CanAutomaticallyUpgradeService) (IUpdateSearcher * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_ClientApplicationID) (IUpdateSearcher * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * put_ClientApplicationID) (IUpdateSearcher * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_IncludePotentiallySupersededUpdates) (IUpdateSearcher * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IncludePotentiallySupersededUpdates) (IUpdateSearcher * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_ServerSelection) (IUpdateSearcher * This, ServerSelection * retval);
	HRESULT(STDMETHODCALLTYPE * put_ServerSelection) (IUpdateSearcher * This, ServerSelection value);
	HRESULT(STDMETHODCALLTYPE * BeginSearch) (IUpdateSearcher * This, BSTR criteria, IUnknown * onCompleted, VARIANT state, ISearchJob ** retval);
	HRESULT(STDMETHODCALLTYPE * EndSearch) (IUpdateSearcher * This, ISearchJob * searchJob, ISearchResult ** retval);
	HRESULT(STDMETHODCALLTYPE * EscapeString) (IUpdateSearcher * This, BSTR unescaped, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * QueryHistory) (IUpdateSearcher * This, LONG startIndex, LONG count, IUpdateHistoryEntryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * Search) (IUpdateSearcher * This, BSTR criteria, ISearchResult ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Online) (IUpdateSearcher * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_Online) (IUpdateSearcher * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * GetTotalHistoryCount) (IUpdateSearcher * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ServiceID) (IUpdateSearcher * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * put_ServiceID) (IUpdateSearcher * This, BSTR value);
	END_INTERFACE
}  IUpdateSearcherVtbl;
interface IUpdateSearcher
{
	CONST_VTBL struct IUpdateSearcherVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateSearcher_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateSearcher_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateSearcher_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateSearcher_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateSearcher_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateSearcher_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateSearcher_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateSearcher_get_CanAutomaticallyUpgradeService(This,retval) ( (This)->lpVtbl -> get_CanAutomaticallyUpgradeService(This,retval) )
#define IUpdateSearcher_put_CanAutomaticallyUpgradeService(This,value) ( (This)->lpVtbl -> put_CanAutomaticallyUpgradeService(This,value) )
#define IUpdateSearcher_get_ClientApplicationID(This,retval) ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
#define IUpdateSearcher_put_ClientApplicationID(This,value) ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
#define IUpdateSearcher_get_IncludePotentiallySupersededUpdates(This,retval) ( (This)->lpVtbl -> get_IncludePotentiallySupersededUpdates(This,retval) )
#define IUpdateSearcher_put_IncludePotentiallySupersededUpdates(This,value) ( (This)->lpVtbl -> put_IncludePotentiallySupersededUpdates(This,value) )
#define IUpdateSearcher_get_ServerSelection(This,retval) ( (This)->lpVtbl -> get_ServerSelection(This,retval) )
#define IUpdateSearcher_put_ServerSelection(This,value) ( (This)->lpVtbl -> put_ServerSelection(This,value) )
#define IUpdateSearcher_BeginSearch(This,criteria,onCompleted,state,retval) ( (This)->lpVtbl -> BeginSearch(This,criteria,onCompleted,state,retval) )
#define IUpdateSearcher_EndSearch(This,searchJob,retval) ( (This)->lpVtbl -> EndSearch(This,searchJob,retval) )
#define IUpdateSearcher_EscapeString(This,unescaped,retval) ( (This)->lpVtbl -> EscapeString(This,unescaped,retval) )
#define IUpdateSearcher_QueryHistory(This,startIndex,count,retval) ( (This)->lpVtbl -> QueryHistory(This,startIndex,count,retval) )
#define IUpdateSearcher_Search(This,criteria,retval) ( (This)->lpVtbl -> Search(This,criteria,retval) )
#define IUpdateSearcher_get_Online(This,retval) ( (This)->lpVtbl -> get_Online(This,retval) )
#define IUpdateSearcher_put_Online(This,value) ( (This)->lpVtbl -> put_Online(This,value) )
#define IUpdateSearcher_GetTotalHistoryCount(This,retval) ( (This)->lpVtbl -> GetTotalHistoryCount(This,retval) )
#define IUpdateSearcher_get_ServiceID(This,retval) ( (This)->lpVtbl -> get_ServiceID(This,retval) )
#define IUpdateSearcher_put_ServiceID(This,value) ( (This)->lpVtbl -> put_ServiceID(This,value) )
#endif
#endif
#ifndef __IUpdateSearcher2_INTERFACE_DEFINED__
#define __IUpdateSearcher2_INTERFACE_DEFINED__
extern const IID IID_IUpdateSearcher2;
typedef struct IUpdateSearcher2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateSearcher2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateSearcher2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateSearcher2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateSearcher2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateSearcher2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateSearcher2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateSearcher2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CanAutomaticallyUpgradeService) (IUpdateSearcher2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_CanAutomaticallyUpgradeService) (IUpdateSearcher2 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_ClientApplicationID) (IUpdateSearcher2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * put_ClientApplicationID) (IUpdateSearcher2 * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_IncludePotentiallySupersededUpdates) (IUpdateSearcher2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IncludePotentiallySupersededUpdates) (IUpdateSearcher2 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_ServerSelection) (IUpdateSearcher2 * This, ServerSelection * retval);
	HRESULT(STDMETHODCALLTYPE * put_ServerSelection) (IUpdateSearcher2 * This, ServerSelection value);
	HRESULT(STDMETHODCALLTYPE * BeginSearch) (IUpdateSearcher2 * This, BSTR criteria, IUnknown * onCompleted, VARIANT state, ISearchJob ** retval);
	HRESULT(STDMETHODCALLTYPE * EndSearch) (IUpdateSearcher2 * This, ISearchJob * searchJob, ISearchResult ** retval);
	HRESULT(STDMETHODCALLTYPE * EscapeString) (IUpdateSearcher2 * This, BSTR unescaped, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * QueryHistory) (IUpdateSearcher2 * This, LONG startIndex, LONG count, IUpdateHistoryEntryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * Search) (IUpdateSearcher2 * This, BSTR criteria, ISearchResult ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Online) (IUpdateSearcher2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_Online) (IUpdateSearcher2 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * GetTotalHistoryCount) (IUpdateSearcher2 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ServiceID) (IUpdateSearcher2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * put_ServiceID) (IUpdateSearcher2 * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_IgnoreDownloadPriority) (IUpdateSearcher2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IgnoreDownloadPriority) (IUpdateSearcher2 * This, VARIANT_BOOL value);
	END_INTERFACE
}  IUpdateSearcher2Vtbl;
interface IUpdateSearcher2
{
	CONST_VTBL struct IUpdateSearcher2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateSearcher2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateSearcher2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateSearcher2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateSearcher2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateSearcher2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateSearcher2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateSearcher2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateSearcher2_get_CanAutomaticallyUpgradeService(This,retval) ( (This)->lpVtbl -> get_CanAutomaticallyUpgradeService(This,retval) )
#define IUpdateSearcher2_put_CanAutomaticallyUpgradeService(This,value) ( (This)->lpVtbl -> put_CanAutomaticallyUpgradeService(This,value) )
#define IUpdateSearcher2_get_ClientApplicationID(This,retval) ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
#define IUpdateSearcher2_put_ClientApplicationID(This,value) ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
#define IUpdateSearcher2_get_IncludePotentiallySupersededUpdates(This,retval) ( (This)->lpVtbl -> get_IncludePotentiallySupersededUpdates(This,retval) )
#define IUpdateSearcher2_put_IncludePotentiallySupersededUpdates(This,value) ( (This)->lpVtbl -> put_IncludePotentiallySupersededUpdates(This,value) )
#define IUpdateSearcher2_get_ServerSelection(This,retval) ( (This)->lpVtbl -> get_ServerSelection(This,retval) )
#define IUpdateSearcher2_put_ServerSelection(This,value) ( (This)->lpVtbl -> put_ServerSelection(This,value) )
#define IUpdateSearcher2_BeginSearch(This,criteria,onCompleted,state,retval) ( (This)->lpVtbl -> BeginSearch(This,criteria,onCompleted,state,retval) )
#define IUpdateSearcher2_EndSearch(This,searchJob,retval) ( (This)->lpVtbl -> EndSearch(This,searchJob,retval) )
#define IUpdateSearcher2_EscapeString(This,unescaped,retval) ( (This)->lpVtbl -> EscapeString(This,unescaped,retval) )
#define IUpdateSearcher2_QueryHistory(This,startIndex,count,retval) ( (This)->lpVtbl -> QueryHistory(This,startIndex,count,retval) )
#define IUpdateSearcher2_Search(This,criteria,retval) ( (This)->lpVtbl -> Search(This,criteria,retval) )
#define IUpdateSearcher2_get_Online(This,retval) ( (This)->lpVtbl -> get_Online(This,retval) )
#define IUpdateSearcher2_put_Online(This,value) ( (This)->lpVtbl -> put_Online(This,value) )
#define IUpdateSearcher2_GetTotalHistoryCount(This,retval) ( (This)->lpVtbl -> GetTotalHistoryCount(This,retval) )
#define IUpdateSearcher2_get_ServiceID(This,retval) ( (This)->lpVtbl -> get_ServiceID(This,retval) )
#define IUpdateSearcher2_put_ServiceID(This,value) ( (This)->lpVtbl -> put_ServiceID(This,value) )
#define IUpdateSearcher2_get_IgnoreDownloadPriority(This,retval) ( (This)->lpVtbl -> get_IgnoreDownloadPriority(This,retval) )
#define IUpdateSearcher2_put_IgnoreDownloadPriority(This,value) ( (This)->lpVtbl -> put_IgnoreDownloadPriority(This,value) )
#endif
#endif
#ifndef __IUpdateSearcher3_INTERFACE_DEFINED__
#define __IUpdateSearcher3_INTERFACE_DEFINED__
extern const IID IID_IUpdateSearcher3;
typedef struct IUpdateSearcher3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateSearcher3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateSearcher3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateSearcher3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateSearcher3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateSearcher3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateSearcher3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateSearcher3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CanAutomaticallyUpgradeService) (IUpdateSearcher3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_CanAutomaticallyUpgradeService) (IUpdateSearcher3 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_ClientApplicationID) (IUpdateSearcher3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * put_ClientApplicationID) (IUpdateSearcher3 * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_IncludePotentiallySupersededUpdates) (IUpdateSearcher3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IncludePotentiallySupersededUpdates) (IUpdateSearcher3 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_ServerSelection) (IUpdateSearcher3 * This, ServerSelection * retval);
	HRESULT(STDMETHODCALLTYPE * put_ServerSelection) (IUpdateSearcher3 * This, ServerSelection value);
	HRESULT(STDMETHODCALLTYPE * BeginSearch) (IUpdateSearcher3 * This, BSTR criteria, IUnknown * onCompleted, VARIANT state, ISearchJob ** retval);
	HRESULT(STDMETHODCALLTYPE * EndSearch) (IUpdateSearcher3 * This, ISearchJob * searchJob, ISearchResult ** retval);
	HRESULT(STDMETHODCALLTYPE * EscapeString) (IUpdateSearcher3 * This, BSTR unescaped, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * QueryHistory) (IUpdateSearcher3 * This, LONG startIndex, LONG count, IUpdateHistoryEntryCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * Search) (IUpdateSearcher3 * This, BSTR criteria, ISearchResult ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Online) (IUpdateSearcher3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_Online) (IUpdateSearcher3 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * GetTotalHistoryCount) (IUpdateSearcher3 * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ServiceID) (IUpdateSearcher3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * put_ServiceID) (IUpdateSearcher3 * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_IgnoreDownloadPriority) (IUpdateSearcher3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IgnoreDownloadPriority) (IUpdateSearcher3 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_SearchScope) (IUpdateSearcher3 * This, SearchScope * retval);
	HRESULT(STDMETHODCALLTYPE * put_SearchScope) (IUpdateSearcher3 * This, SearchScope value);
	END_INTERFACE
}  IUpdateSearcher3Vtbl;
interface IUpdateSearcher3
{
	CONST_VTBL struct IUpdateSearcher3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateSearcher3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateSearcher3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateSearcher3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateSearcher3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateSearcher3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateSearcher3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateSearcher3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateSearcher3_get_CanAutomaticallyUpgradeService(This,retval) ( (This)->lpVtbl -> get_CanAutomaticallyUpgradeService(This,retval) )
#define IUpdateSearcher3_put_CanAutomaticallyUpgradeService(This,value) ( (This)->lpVtbl -> put_CanAutomaticallyUpgradeService(This,value) )
#define IUpdateSearcher3_get_ClientApplicationID(This,retval) ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
#define IUpdateSearcher3_put_ClientApplicationID(This,value) ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
#define IUpdateSearcher3_get_IncludePotentiallySupersededUpdates(This,retval) ( (This)->lpVtbl -> get_IncludePotentiallySupersededUpdates(This,retval) )
#define IUpdateSearcher3_put_IncludePotentiallySupersededUpdates(This,value) ( (This)->lpVtbl -> put_IncludePotentiallySupersededUpdates(This,value) )
#define IUpdateSearcher3_get_ServerSelection(This,retval) ( (This)->lpVtbl -> get_ServerSelection(This,retval) )
#define IUpdateSearcher3_put_ServerSelection(This,value) ( (This)->lpVtbl -> put_ServerSelection(This,value) )
#define IUpdateSearcher3_BeginSearch(This,criteria,onCompleted,state,retval) ( (This)->lpVtbl -> BeginSearch(This,criteria,onCompleted,state,retval) )
#define IUpdateSearcher3_EndSearch(This,searchJob,retval) ( (This)->lpVtbl -> EndSearch(This,searchJob,retval) )
#define IUpdateSearcher3_EscapeString(This,unescaped,retval) ( (This)->lpVtbl -> EscapeString(This,unescaped,retval) )
#define IUpdateSearcher3_QueryHistory(This,startIndex,count,retval) ( (This)->lpVtbl -> QueryHistory(This,startIndex,count,retval) )
#define IUpdateSearcher3_Search(This,criteria,retval) ( (This)->lpVtbl -> Search(This,criteria,retval) )
#define IUpdateSearcher3_get_Online(This,retval) ( (This)->lpVtbl -> get_Online(This,retval) )
#define IUpdateSearcher3_put_Online(This,value) ( (This)->lpVtbl -> put_Online(This,value) )
#define IUpdateSearcher3_GetTotalHistoryCount(This,retval) ( (This)->lpVtbl -> GetTotalHistoryCount(This,retval) )
#define IUpdateSearcher3_get_ServiceID(This,retval) ( (This)->lpVtbl -> get_ServiceID(This,retval) )
#define IUpdateSearcher3_put_ServiceID(This,value) ( (This)->lpVtbl -> put_ServiceID(This,value) )
#define IUpdateSearcher3_get_IgnoreDownloadPriority(This,retval) ( (This)->lpVtbl -> get_IgnoreDownloadPriority(This,retval) )
#define IUpdateSearcher3_put_IgnoreDownloadPriority(This,value) ( (This)->lpVtbl -> put_IgnoreDownloadPriority(This,value) )
#define IUpdateSearcher3_get_SearchScope(This,retval) ( (This)->lpVtbl -> get_SearchScope(This,retval) )
#define IUpdateSearcher3_put_SearchScope(This,value) ( (This)->lpVtbl -> put_SearchScope(This,value) )
#endif
#endif
#ifndef __IUpdateDownloadResult_INTERFACE_DEFINED__
#define __IUpdateDownloadResult_INTERFACE_DEFINED__
extern const IID IID_IUpdateDownloadResult;
typedef struct IUpdateDownloadResultVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateDownloadResult * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateDownloadResult * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateDownloadResult * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateDownloadResult * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateDownloadResult * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateDownloadResult * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateDownloadResult * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_HResult) (IUpdateDownloadResult * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ResultCode) (IUpdateDownloadResult * This, OperationResultCode * retval);
	END_INTERFACE
}  IUpdateDownloadResultVtbl;
interface IUpdateDownloadResult
{
	CONST_VTBL struct IUpdateDownloadResultVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateDownloadResult_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateDownloadResult_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateDownloadResult_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateDownloadResult_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateDownloadResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateDownloadResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateDownloadResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateDownloadResult_get_HResult(This,retval) ( (This)->lpVtbl -> get_HResult(This,retval) )
#define IUpdateDownloadResult_get_ResultCode(This,retval) ( (This)->lpVtbl -> get_ResultCode(This,retval) )
#endif
#endif
#ifndef __IDownloadResult_INTERFACE_DEFINED__
#define __IDownloadResult_INTERFACE_DEFINED__
extern const IID IID_IDownloadResult;
typedef struct IDownloadResultVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDownloadResult * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDownloadResult * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDownloadResult * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDownloadResult * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDownloadResult * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDownloadResult * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDownloadResult * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_HResult) (IDownloadResult * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_ResultCode) (IDownloadResult * This, OperationResultCode * retval);
	HRESULT(STDMETHODCALLTYPE * GetUpdateResult) (IDownloadResult * This, LONG updateIndex, IUpdateDownloadResult ** retval);
	END_INTERFACE
}  IDownloadResultVtbl;
interface IDownloadResult
{
	CONST_VTBL struct IDownloadResultVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDownloadResult_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDownloadResult_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDownloadResult_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDownloadResult_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDownloadResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDownloadResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDownloadResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDownloadResult_get_HResult(This,retval) ( (This)->lpVtbl -> get_HResult(This,retval) )
#define IDownloadResult_get_ResultCode(This,retval) ( (This)->lpVtbl -> get_ResultCode(This,retval) )
#define IDownloadResult_GetUpdateResult(This,updateIndex,retval) ( (This)->lpVtbl -> GetUpdateResult(This,updateIndex,retval) )
#endif
#endif
#ifndef __IDownloadProgress_INTERFACE_DEFINED__
#define __IDownloadProgress_INTERFACE_DEFINED__
extern const IID IID_IDownloadProgress;
typedef struct IDownloadProgressVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDownloadProgress * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDownloadProgress * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDownloadProgress * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDownloadProgress * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDownloadProgress * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDownloadProgress * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDownloadProgress * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CurrentUpdateBytesDownloaded) (IDownloadProgress * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_CurrentUpdateBytesToDownload) (IDownloadProgress * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_CurrentUpdateIndex) (IDownloadProgress * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_PercentComplete) (IDownloadProgress * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_TotalBytesDownloaded) (IDownloadProgress * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * get_TotalBytesToDownload) (IDownloadProgress * This, DECIMAL * retval);
	HRESULT(STDMETHODCALLTYPE * GetUpdateResult) (IDownloadProgress * This, LONG updateIndex, IUpdateDownloadResult ** retval);
	HRESULT(STDMETHODCALLTYPE * get_CurrentUpdateDownloadPhase) (IDownloadProgress * This, DownloadPhase * retval);
	HRESULT(STDMETHODCALLTYPE * get_CurrentUpdatePercentComplete) (IDownloadProgress * This, LONG * retval);
	END_INTERFACE
}  IDownloadProgressVtbl;
interface IDownloadProgress
{
	CONST_VTBL struct IDownloadProgressVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDownloadProgress_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDownloadProgress_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDownloadProgress_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDownloadProgress_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDownloadProgress_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDownloadProgress_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDownloadProgress_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDownloadProgress_get_CurrentUpdateBytesDownloaded(This,retval) ( (This)->lpVtbl -> get_CurrentUpdateBytesDownloaded(This,retval) )
#define IDownloadProgress_get_CurrentUpdateBytesToDownload(This,retval) ( (This)->lpVtbl -> get_CurrentUpdateBytesToDownload(This,retval) )
#define IDownloadProgress_get_CurrentUpdateIndex(This,retval) ( (This)->lpVtbl -> get_CurrentUpdateIndex(This,retval) )
#define IDownloadProgress_get_PercentComplete(This,retval) ( (This)->lpVtbl -> get_PercentComplete(This,retval) )
#define IDownloadProgress_get_TotalBytesDownloaded(This,retval) ( (This)->lpVtbl -> get_TotalBytesDownloaded(This,retval) )
#define IDownloadProgress_get_TotalBytesToDownload(This,retval) ( (This)->lpVtbl -> get_TotalBytesToDownload(This,retval) )
#define IDownloadProgress_GetUpdateResult(This,updateIndex,retval) ( (This)->lpVtbl -> GetUpdateResult(This,updateIndex,retval) )
#define IDownloadProgress_get_CurrentUpdateDownloadPhase(This,retval) ( (This)->lpVtbl -> get_CurrentUpdateDownloadPhase(This,retval) )
#define IDownloadProgress_get_CurrentUpdatePercentComplete(This,retval) ( (This)->lpVtbl -> get_CurrentUpdatePercentComplete(This,retval) )
#endif
#endif
#ifndef __IDownloadJob_INTERFACE_DEFINED__
#define __IDownloadJob_INTERFACE_DEFINED__
extern const IID IID_IDownloadJob;
typedef struct IDownloadJobVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDownloadJob * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDownloadJob * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDownloadJob * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDownloadJob * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDownloadJob * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDownloadJob * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDownloadJob * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_AsyncState) (IDownloadJob * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsCompleted) (IDownloadJob * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Updates) (IDownloadJob * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * CleanUp) (IDownloadJob * This);
	HRESULT(STDMETHODCALLTYPE * GetProgress) (IDownloadJob * This, IDownloadProgress ** retval);
	HRESULT(STDMETHODCALLTYPE * RequestAbort) (IDownloadJob * This);
	END_INTERFACE
}  IDownloadJobVtbl;
interface IDownloadJob
{
	CONST_VTBL struct IDownloadJobVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDownloadJob_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDownloadJob_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDownloadJob_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDownloadJob_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDownloadJob_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDownloadJob_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDownloadJob_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDownloadJob_get_AsyncState(This,retval) ( (This)->lpVtbl -> get_AsyncState(This,retval) )
#define IDownloadJob_get_IsCompleted(This,retval) ( (This)->lpVtbl -> get_IsCompleted(This,retval) )
#define IDownloadJob_get_Updates(This,retval) ( (This)->lpVtbl -> get_Updates(This,retval) )
#define IDownloadJob_CleanUp(This) ( (This)->lpVtbl -> CleanUp(This) )
#define IDownloadJob_GetProgress(This,retval) ( (This)->lpVtbl -> GetProgress(This,retval) )
#define IDownloadJob_RequestAbort(This) ( (This)->lpVtbl -> RequestAbort(This) )
#endif
#endif
#ifndef __IDownloadCompletedCallbackArgs_INTERFACE_DEFINED__
#define __IDownloadCompletedCallbackArgs_INTERFACE_DEFINED__
extern const IID IID_IDownloadCompletedCallbackArgs;
typedef struct IDownloadCompletedCallbackArgsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDownloadCompletedCallbackArgs * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDownloadCompletedCallbackArgs * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDownloadCompletedCallbackArgs * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDownloadCompletedCallbackArgs * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDownloadCompletedCallbackArgs * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDownloadCompletedCallbackArgs * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDownloadCompletedCallbackArgs * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  IDownloadCompletedCallbackArgsVtbl;
interface IDownloadCompletedCallbackArgs
{
	CONST_VTBL struct IDownloadCompletedCallbackArgsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDownloadCompletedCallbackArgs_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDownloadCompletedCallbackArgs_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDownloadCompletedCallbackArgs_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDownloadCompletedCallbackArgs_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDownloadCompletedCallbackArgs_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDownloadCompletedCallbackArgs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDownloadCompletedCallbackArgs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IDownloadCompletedCallback_INTERFACE_DEFINED__
#define __IDownloadCompletedCallback_INTERFACE_DEFINED__
extern const IID IID_IDownloadCompletedCallback;
typedef struct IDownloadCompletedCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDownloadCompletedCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDownloadCompletedCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDownloadCompletedCallback * This);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDownloadCompletedCallback * This, IDownloadJob * downloadJob, IDownloadCompletedCallbackArgs * callbackArgs);
	END_INTERFACE
}  IDownloadCompletedCallbackVtbl;
interface IDownloadCompletedCallback
{
	CONST_VTBL struct IDownloadCompletedCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDownloadCompletedCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDownloadCompletedCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDownloadCompletedCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDownloadCompletedCallback_Invoke(This,downloadJob,callbackArgs) ( (This)->lpVtbl -> Invoke(This,downloadJob,callbackArgs) )
#endif
#endif
#ifndef __IDownloadProgressChangedCallbackArgs_INTERFACE_DEFINED__
#define __IDownloadProgressChangedCallbackArgs_INTERFACE_DEFINED__
extern const IID IID_IDownloadProgressChangedCallbackArgs;
typedef struct IDownloadProgressChangedCallbackArgsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDownloadProgressChangedCallbackArgs * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDownloadProgressChangedCallbackArgs * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDownloadProgressChangedCallbackArgs * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDownloadProgressChangedCallbackArgs * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDownloadProgressChangedCallbackArgs * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDownloadProgressChangedCallbackArgs * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDownloadProgressChangedCallbackArgs * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Progress) (IDownloadProgressChangedCallbackArgs * This, IDownloadProgress ** retval);
	END_INTERFACE
}  IDownloadProgressChangedCallbackArgsVtbl;
interface IDownloadProgressChangedCallbackArgs
{
	CONST_VTBL struct IDownloadProgressChangedCallbackArgsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDownloadProgressChangedCallbackArgs_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDownloadProgressChangedCallbackArgs_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDownloadProgressChangedCallbackArgs_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDownloadProgressChangedCallbackArgs_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDownloadProgressChangedCallbackArgs_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDownloadProgressChangedCallbackArgs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDownloadProgressChangedCallbackArgs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDownloadProgressChangedCallbackArgs_get_Progress(This,retval) ( (This)->lpVtbl -> get_Progress(This,retval) )
#endif
#endif
#ifndef __IDownloadProgressChangedCallback_INTERFACE_DEFINED__
#define __IDownloadProgressChangedCallback_INTERFACE_DEFINED__
extern const IID IID_IDownloadProgressChangedCallback;
typedef struct IDownloadProgressChangedCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDownloadProgressChangedCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDownloadProgressChangedCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDownloadProgressChangedCallback * This);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDownloadProgressChangedCallback * This, IDownloadJob * downloadJob, IDownloadProgressChangedCallbackArgs * callbackArgs);
	END_INTERFACE
}  IDownloadProgressChangedCallbackVtbl;
interface IDownloadProgressChangedCallback
{
	CONST_VTBL struct IDownloadProgressChangedCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDownloadProgressChangedCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDownloadProgressChangedCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDownloadProgressChangedCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDownloadProgressChangedCallback_Invoke(This,downloadJob,callbackArgs) ( (This)->lpVtbl -> Invoke(This,downloadJob,callbackArgs) )
#endif
#endif
#ifndef __IUpdateDownloader_INTERFACE_DEFINED__
#define __IUpdateDownloader_INTERFACE_DEFINED__
extern const IID IID_IUpdateDownloader;
typedef struct IUpdateDownloaderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateDownloader * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateDownloader * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateDownloader * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateDownloader * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateDownloader * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateDownloader * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateDownloader * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ClientApplicationID) (IUpdateDownloader * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * put_ClientApplicationID) (IUpdateDownloader * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_IsForced) (IUpdateDownloader * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IsForced) (IUpdateDownloader * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_Priority) (IUpdateDownloader * This, DownloadPriority * retval);
	HRESULT(STDMETHODCALLTYPE * put_Priority) (IUpdateDownloader * This, DownloadPriority value);
	HRESULT(STDMETHODCALLTYPE * get_Updates) (IUpdateDownloader * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * put_Updates) (IUpdateDownloader * This, IUpdateCollection * value);
	HRESULT(STDMETHODCALLTYPE * BeginDownload) (IUpdateDownloader * This, IUnknown * onProgressChanged, IUnknown * onCompleted, VARIANT state, IDownloadJob ** retval);
	HRESULT(STDMETHODCALLTYPE * Download) (IUpdateDownloader * This, IDownloadResult ** retval);
	HRESULT(STDMETHODCALLTYPE * EndDownload) (IUpdateDownloader * This, IDownloadJob * value, IDownloadResult ** retval);
	END_INTERFACE
}  IUpdateDownloaderVtbl;
interface IUpdateDownloader
{
	CONST_VTBL struct IUpdateDownloaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateDownloader_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateDownloader_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateDownloader_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateDownloader_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateDownloader_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateDownloader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateDownloader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateDownloader_get_ClientApplicationID(This,retval) ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
#define IUpdateDownloader_put_ClientApplicationID(This,value) ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
#define IUpdateDownloader_get_IsForced(This,retval) ( (This)->lpVtbl -> get_IsForced(This,retval) )
#define IUpdateDownloader_put_IsForced(This,value) ( (This)->lpVtbl -> put_IsForced(This,value) )
#define IUpdateDownloader_get_Priority(This,retval) ( (This)->lpVtbl -> get_Priority(This,retval) )
#define IUpdateDownloader_put_Priority(This,value) ( (This)->lpVtbl -> put_Priority(This,value) )
#define IUpdateDownloader_get_Updates(This,retval) ( (This)->lpVtbl -> get_Updates(This,retval) )
#define IUpdateDownloader_put_Updates(This,value) ( (This)->lpVtbl -> put_Updates(This,value) )
#define IUpdateDownloader_BeginDownload(This,onProgressChanged,onCompleted,state,retval) ( (This)->lpVtbl -> BeginDownload(This,onProgressChanged,onCompleted,state,retval) )
#define IUpdateDownloader_Download(This,retval) ( (This)->lpVtbl -> Download(This,retval) )
#define IUpdateDownloader_EndDownload(This,value,retval) ( (This)->lpVtbl -> EndDownload(This,value,retval) )
#endif
#endif
#ifndef __IUpdateInstallationResult_INTERFACE_DEFINED__
#define __IUpdateInstallationResult_INTERFACE_DEFINED__
extern const IID IID_IUpdateInstallationResult;
typedef struct IUpdateInstallationResultVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateInstallationResult * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateInstallationResult * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateInstallationResult * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateInstallationResult * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateInstallationResult * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateInstallationResult * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateInstallationResult * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_HResult) (IUpdateInstallationResult * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RebootRequired) (IUpdateInstallationResult * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_ResultCode) (IUpdateInstallationResult * This, OperationResultCode * retval);
	END_INTERFACE
}  IUpdateInstallationResultVtbl;
interface IUpdateInstallationResult
{
	CONST_VTBL struct IUpdateInstallationResultVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateInstallationResult_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateInstallationResult_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateInstallationResult_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateInstallationResult_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateInstallationResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateInstallationResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateInstallationResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateInstallationResult_get_HResult(This,retval) ( (This)->lpVtbl -> get_HResult(This,retval) )
#define IUpdateInstallationResult_get_RebootRequired(This,retval) ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
#define IUpdateInstallationResult_get_ResultCode(This,retval) ( (This)->lpVtbl -> get_ResultCode(This,retval) )
#endif
#endif
#ifndef __IInstallationResult_INTERFACE_DEFINED__
#define __IInstallationResult_INTERFACE_DEFINED__
extern const IID IID_IInstallationResult;
typedef struct IInstallationResultVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInstallationResult * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInstallationResult * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInstallationResult * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInstallationResult * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInstallationResult * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInstallationResult * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInstallationResult * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_HResult) (IInstallationResult * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_RebootRequired) (IInstallationResult * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_ResultCode) (IInstallationResult * This, OperationResultCode * retval);
	HRESULT(STDMETHODCALLTYPE * GetUpdateResult) (IInstallationResult * This, LONG updateIndex, IUpdateInstallationResult ** retval);
	END_INTERFACE
}  IInstallationResultVtbl;
interface IInstallationResult
{
	CONST_VTBL struct IInstallationResultVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInstallationResult_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInstallationResult_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInstallationResult_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInstallationResult_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInstallationResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInstallationResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInstallationResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInstallationResult_get_HResult(This,retval) ( (This)->lpVtbl -> get_HResult(This,retval) )
#define IInstallationResult_get_RebootRequired(This,retval) ( (This)->lpVtbl -> get_RebootRequired(This,retval) )
#define IInstallationResult_get_ResultCode(This,retval) ( (This)->lpVtbl -> get_ResultCode(This,retval) )
#define IInstallationResult_GetUpdateResult(This,updateIndex,retval) ( (This)->lpVtbl -> GetUpdateResult(This,updateIndex,retval) )
#endif
#endif
#ifndef __IInstallationProgress_INTERFACE_DEFINED__
#define __IInstallationProgress_INTERFACE_DEFINED__
extern const IID IID_IInstallationProgress;
typedef struct IInstallationProgressVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInstallationProgress * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInstallationProgress * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInstallationProgress * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInstallationProgress * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInstallationProgress * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInstallationProgress * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInstallationProgress * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CurrentUpdateIndex) (IInstallationProgress * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_CurrentUpdatePercentComplete) (IInstallationProgress * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * get_PercentComplete) (IInstallationProgress * This, LONG * retval);
	HRESULT(STDMETHODCALLTYPE * GetUpdateResult) (IInstallationProgress * This, LONG updateIndex, IUpdateInstallationResult ** retval);
	END_INTERFACE
}  IInstallationProgressVtbl;
interface IInstallationProgress
{
	CONST_VTBL struct IInstallationProgressVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInstallationProgress_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInstallationProgress_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInstallationProgress_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInstallationProgress_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInstallationProgress_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInstallationProgress_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInstallationProgress_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInstallationProgress_get_CurrentUpdateIndex(This,retval) ( (This)->lpVtbl -> get_CurrentUpdateIndex(This,retval) )
#define IInstallationProgress_get_CurrentUpdatePercentComplete(This,retval) ( (This)->lpVtbl -> get_CurrentUpdatePercentComplete(This,retval) )
#define IInstallationProgress_get_PercentComplete(This,retval) ( (This)->lpVtbl -> get_PercentComplete(This,retval) )
#define IInstallationProgress_GetUpdateResult(This,updateIndex,retval) ( (This)->lpVtbl -> GetUpdateResult(This,updateIndex,retval) )
#endif
#endif
#ifndef __IInstallationJob_INTERFACE_DEFINED__
#define __IInstallationJob_INTERFACE_DEFINED__
extern const IID IID_IInstallationJob;
typedef struct IInstallationJobVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInstallationJob * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInstallationJob * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInstallationJob * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInstallationJob * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInstallationJob * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInstallationJob * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInstallationJob * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_AsyncState) (IInstallationJob * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsCompleted) (IInstallationJob * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Updates) (IInstallationJob * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * CleanUp) (IInstallationJob * This);
	HRESULT(STDMETHODCALLTYPE * GetProgress) (IInstallationJob * This, IInstallationProgress ** retval);
	HRESULT(STDMETHODCALLTYPE * RequestAbort) (IInstallationJob * This);
	END_INTERFACE
}  IInstallationJobVtbl;
interface IInstallationJob
{
	CONST_VTBL struct IInstallationJobVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInstallationJob_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInstallationJob_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInstallationJob_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInstallationJob_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInstallationJob_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInstallationJob_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInstallationJob_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInstallationJob_get_AsyncState(This,retval) ( (This)->lpVtbl -> get_AsyncState(This,retval) )
#define IInstallationJob_get_IsCompleted(This,retval) ( (This)->lpVtbl -> get_IsCompleted(This,retval) )
#define IInstallationJob_get_Updates(This,retval) ( (This)->lpVtbl -> get_Updates(This,retval) )
#define IInstallationJob_CleanUp(This) ( (This)->lpVtbl -> CleanUp(This) )
#define IInstallationJob_GetProgress(This,retval) ( (This)->lpVtbl -> GetProgress(This,retval) )
#define IInstallationJob_RequestAbort(This) ( (This)->lpVtbl -> RequestAbort(This) )
#endif
#endif
#ifndef __IInstallationCompletedCallbackArgs_INTERFACE_DEFINED__
#define __IInstallationCompletedCallbackArgs_INTERFACE_DEFINED__
extern const IID IID_IInstallationCompletedCallbackArgs;
typedef struct IInstallationCompletedCallbackArgsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInstallationCompletedCallbackArgs * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInstallationCompletedCallbackArgs * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInstallationCompletedCallbackArgs * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInstallationCompletedCallbackArgs * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInstallationCompletedCallbackArgs * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInstallationCompletedCallbackArgs * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInstallationCompletedCallbackArgs * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  IInstallationCompletedCallbackArgsVtbl;
interface IInstallationCompletedCallbackArgs
{
	CONST_VTBL struct IInstallationCompletedCallbackArgsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInstallationCompletedCallbackArgs_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInstallationCompletedCallbackArgs_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInstallationCompletedCallbackArgs_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInstallationCompletedCallbackArgs_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInstallationCompletedCallbackArgs_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInstallationCompletedCallbackArgs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInstallationCompletedCallbackArgs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IInstallationCompletedCallback_INTERFACE_DEFINED__
#define __IInstallationCompletedCallback_INTERFACE_DEFINED__
extern const IID IID_IInstallationCompletedCallback;
typedef struct IInstallationCompletedCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInstallationCompletedCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInstallationCompletedCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInstallationCompletedCallback * This);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInstallationCompletedCallback * This, IInstallationJob * installationJob, IInstallationCompletedCallbackArgs * callbackArgs);
	END_INTERFACE
}  IInstallationCompletedCallbackVtbl;
interface IInstallationCompletedCallback
{
	CONST_VTBL struct IInstallationCompletedCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInstallationCompletedCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInstallationCompletedCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInstallationCompletedCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInstallationCompletedCallback_Invoke(This,installationJob,callbackArgs) ( (This)->lpVtbl -> Invoke(This,installationJob,callbackArgs) )
#endif
#endif
#ifndef __IInstallationProgressChangedCallbackArgs_INTERFACE_DEFINED__
#define __IInstallationProgressChangedCallbackArgs_INTERFACE_DEFINED__
extern const IID IID_IInstallationProgressChangedCallbackArgs;
typedef struct IInstallationProgressChangedCallbackArgsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInstallationProgressChangedCallbackArgs * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInstallationProgressChangedCallbackArgs * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInstallationProgressChangedCallbackArgs * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInstallationProgressChangedCallbackArgs * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInstallationProgressChangedCallbackArgs * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInstallationProgressChangedCallbackArgs * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInstallationProgressChangedCallbackArgs * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Progress) (IInstallationProgressChangedCallbackArgs * This, IInstallationProgress ** retval);
	END_INTERFACE
}  IInstallationProgressChangedCallbackArgsVtbl;
interface IInstallationProgressChangedCallbackArgs
{
	CONST_VTBL struct IInstallationProgressChangedCallbackArgsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInstallationProgressChangedCallbackArgs_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInstallationProgressChangedCallbackArgs_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInstallationProgressChangedCallbackArgs_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInstallationProgressChangedCallbackArgs_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInstallationProgressChangedCallbackArgs_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInstallationProgressChangedCallbackArgs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInstallationProgressChangedCallbackArgs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInstallationProgressChangedCallbackArgs_get_Progress(This,retval) ( (This)->lpVtbl -> get_Progress(This,retval) )
#endif
#endif
#ifndef __IInstallationProgressChangedCallback_INTERFACE_DEFINED__
#define __IInstallationProgressChangedCallback_INTERFACE_DEFINED__
extern const IID IID_IInstallationProgressChangedCallback;
typedef struct IInstallationProgressChangedCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInstallationProgressChangedCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInstallationProgressChangedCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInstallationProgressChangedCallback * This);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInstallationProgressChangedCallback * This, IInstallationJob * installationJob, IInstallationProgressChangedCallbackArgs * callbackArgs);
	END_INTERFACE
}  IInstallationProgressChangedCallbackVtbl;
interface IInstallationProgressChangedCallback
{
	CONST_VTBL struct IInstallationProgressChangedCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInstallationProgressChangedCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInstallationProgressChangedCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInstallationProgressChangedCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInstallationProgressChangedCallback_Invoke(This,installationJob,callbackArgs) ( (This)->lpVtbl -> Invoke(This,installationJob,callbackArgs) )
#endif
#endif
#ifndef __IUpdateInstaller_INTERFACE_DEFINED__
#define __IUpdateInstaller_INTERFACE_DEFINED__
extern const IID IID_IUpdateInstaller;
typedef struct IUpdateInstallerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateInstaller * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateInstaller * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateInstaller * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateInstaller * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateInstaller * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateInstaller * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateInstaller * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ClientApplicationID) (IUpdateInstaller * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * put_ClientApplicationID) (IUpdateInstaller * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_IsForced) (IUpdateInstaller * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IsForced) (IUpdateInstaller * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_ParentHwnd) (IUpdateInstaller * This, HWND * retval);
	HRESULT(STDMETHODCALLTYPE * put_ParentHwnd) (IUpdateInstaller * This, HWND value);
	HRESULT(STDMETHODCALLTYPE * put_ParentWindow) (IUpdateInstaller * This, IUnknown * value);
	HRESULT(STDMETHODCALLTYPE * get_ParentWindow) (IUpdateInstaller * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Updates) (IUpdateInstaller * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * put_Updates) (IUpdateInstaller * This, IUpdateCollection * value);
	HRESULT(STDMETHODCALLTYPE * BeginInstall) (IUpdateInstaller * This, IUnknown * onProgressChanged, IUnknown * onCompleted, VARIANT state, IInstallationJob ** retval);
	HRESULT(STDMETHODCALLTYPE * BeginUninstall) (IUpdateInstaller * This, IUnknown * onProgressChanged, IUnknown * onCompleted, VARIANT state, IInstallationJob ** retval);
	HRESULT(STDMETHODCALLTYPE * EndInstall) (IUpdateInstaller * This, IInstallationJob * value, IInstallationResult ** retval);
	HRESULT(STDMETHODCALLTYPE * EndUninstall) (IUpdateInstaller * This, IInstallationJob * value, IInstallationResult ** retval);
	HRESULT(STDMETHODCALLTYPE * Install) (IUpdateInstaller * This, IInstallationResult ** retval);
	HRESULT(STDMETHODCALLTYPE * RunWizard) (IUpdateInstaller * This, BSTR dialogTitle, IInstallationResult ** retval);
	HRESULT(STDMETHODCALLTYPE * get_IsBusy) (IUpdateInstaller * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * Uninstall) (IUpdateInstaller * This, IInstallationResult ** retval);
	HRESULT(STDMETHODCALLTYPE * get_AllowSourcePrompts) (IUpdateInstaller * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_AllowSourcePrompts) (IUpdateInstaller * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_RebootRequiredBeforeInstallation) (IUpdateInstaller * This, VARIANT_BOOL * retval);
	END_INTERFACE
}  IUpdateInstallerVtbl;
interface IUpdateInstaller
{
	CONST_VTBL struct IUpdateInstallerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateInstaller_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateInstaller_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateInstaller_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateInstaller_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateInstaller_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateInstaller_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateInstaller_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateInstaller_get_ClientApplicationID(This,retval) ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
#define IUpdateInstaller_put_ClientApplicationID(This,value) ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
#define IUpdateInstaller_get_IsForced(This,retval) ( (This)->lpVtbl -> get_IsForced(This,retval) )
#define IUpdateInstaller_put_IsForced(This,value) ( (This)->lpVtbl -> put_IsForced(This,value) )
#define IUpdateInstaller_get_ParentHwnd(This,retval) ( (This)->lpVtbl -> get_ParentHwnd(This,retval) )
#define IUpdateInstaller_put_ParentHwnd(This,value) ( (This)->lpVtbl -> put_ParentHwnd(This,value) )
#define IUpdateInstaller_put_ParentWindow(This,value) ( (This)->lpVtbl -> put_ParentWindow(This,value) )
#define IUpdateInstaller_get_ParentWindow(This,retval) ( (This)->lpVtbl -> get_ParentWindow(This,retval) )
#define IUpdateInstaller_get_Updates(This,retval) ( (This)->lpVtbl -> get_Updates(This,retval) )
#define IUpdateInstaller_put_Updates(This,value) ( (This)->lpVtbl -> put_Updates(This,value) )
#define IUpdateInstaller_BeginInstall(This,onProgressChanged,onCompleted,state,retval) ( (This)->lpVtbl -> BeginInstall(This,onProgressChanged,onCompleted,state,retval) )
#define IUpdateInstaller_BeginUninstall(This,onProgressChanged,onCompleted,state,retval) ( (This)->lpVtbl -> BeginUninstall(This,onProgressChanged,onCompleted,state,retval) )
#define IUpdateInstaller_EndInstall(This,value,retval) ( (This)->lpVtbl -> EndInstall(This,value,retval) )
#define IUpdateInstaller_EndUninstall(This,value,retval) ( (This)->lpVtbl -> EndUninstall(This,value,retval) )
#define IUpdateInstaller_Install(This,retval) ( (This)->lpVtbl -> Install(This,retval) )
#define IUpdateInstaller_RunWizard(This,dialogTitle,retval) ( (This)->lpVtbl -> RunWizard(This,dialogTitle,retval) )
#define IUpdateInstaller_get_IsBusy(This,retval) ( (This)->lpVtbl -> get_IsBusy(This,retval) )
#define IUpdateInstaller_Uninstall(This,retval) ( (This)->lpVtbl -> Uninstall(This,retval) )
#define IUpdateInstaller_get_AllowSourcePrompts(This,retval) ( (This)->lpVtbl -> get_AllowSourcePrompts(This,retval) )
#define IUpdateInstaller_put_AllowSourcePrompts(This,value) ( (This)->lpVtbl -> put_AllowSourcePrompts(This,value) )
#define IUpdateInstaller_get_RebootRequiredBeforeInstallation(This,retval) ( (This)->lpVtbl -> get_RebootRequiredBeforeInstallation(This,retval) )
#endif
#endif
#ifndef __IUpdateInstaller2_INTERFACE_DEFINED__
#define __IUpdateInstaller2_INTERFACE_DEFINED__
extern const IID IID_IUpdateInstaller2;
typedef struct IUpdateInstaller2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateInstaller2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateInstaller2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateInstaller2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateInstaller2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateInstaller2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateInstaller2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateInstaller2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ClientApplicationID) (IUpdateInstaller2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * put_ClientApplicationID) (IUpdateInstaller2 * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_IsForced) (IUpdateInstaller2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_IsForced) (IUpdateInstaller2 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_ParentHwnd) (IUpdateInstaller2 * This, HWND * retval);
	HRESULT(STDMETHODCALLTYPE * put_ParentHwnd) (IUpdateInstaller2 * This, HWND value);
	HRESULT(STDMETHODCALLTYPE * put_ParentWindow) (IUpdateInstaller2 * This, IUnknown * value);
	HRESULT(STDMETHODCALLTYPE * get_ParentWindow) (IUpdateInstaller2 * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Updates) (IUpdateInstaller2 * This, IUpdateCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * put_Updates) (IUpdateInstaller2 * This, IUpdateCollection * value);
	HRESULT(STDMETHODCALLTYPE * BeginInstall) (IUpdateInstaller2 * This, IUnknown * onProgressChanged, IUnknown * onCompleted, VARIANT state, IInstallationJob ** retval);
	HRESULT(STDMETHODCALLTYPE * BeginUninstall) (IUpdateInstaller2 * This, IUnknown * onProgressChanged, IUnknown * onCompleted, VARIANT state, IInstallationJob ** retval);
	HRESULT(STDMETHODCALLTYPE * EndInstall) (IUpdateInstaller2 * This, IInstallationJob * value, IInstallationResult ** retval);
	HRESULT(STDMETHODCALLTYPE * EndUninstall) (IUpdateInstaller2 * This, IInstallationJob * value, IInstallationResult ** retval);
	HRESULT(STDMETHODCALLTYPE * Install) (IUpdateInstaller2 * This, IInstallationResult ** retval);
	HRESULT(STDMETHODCALLTYPE * RunWizard) (IUpdateInstaller2 * This, BSTR dialogTitle, IInstallationResult ** retval);
	HRESULT(STDMETHODCALLTYPE * get_IsBusy) (IUpdateInstaller2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * Uninstall) (IUpdateInstaller2 * This, IInstallationResult ** retval);
	HRESULT(STDMETHODCALLTYPE * get_AllowSourcePrompts) (IUpdateInstaller2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_AllowSourcePrompts) (IUpdateInstaller2 * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_RebootRequiredBeforeInstallation) (IUpdateInstaller2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_ForceQuiet) (IUpdateInstaller2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * put_ForceQuiet) (IUpdateInstaller2 * This, VARIANT_BOOL value);
	END_INTERFACE
}  IUpdateInstaller2Vtbl;
interface IUpdateInstaller2
{
	CONST_VTBL struct IUpdateInstaller2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateInstaller2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateInstaller2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateInstaller2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateInstaller2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateInstaller2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateInstaller2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateInstaller2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateInstaller2_get_ClientApplicationID(This,retval) ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
#define IUpdateInstaller2_put_ClientApplicationID(This,value) ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
#define IUpdateInstaller2_get_IsForced(This,retval) ( (This)->lpVtbl -> get_IsForced(This,retval) )
#define IUpdateInstaller2_put_IsForced(This,value) ( (This)->lpVtbl -> put_IsForced(This,value) )
#define IUpdateInstaller2_get_ParentHwnd(This,retval) ( (This)->lpVtbl -> get_ParentHwnd(This,retval) )
#define IUpdateInstaller2_put_ParentHwnd(This,value) ( (This)->lpVtbl -> put_ParentHwnd(This,value) )
#define IUpdateInstaller2_put_ParentWindow(This,value) ( (This)->lpVtbl -> put_ParentWindow(This,value) )
#define IUpdateInstaller2_get_ParentWindow(This,retval) ( (This)->lpVtbl -> get_ParentWindow(This,retval) )
#define IUpdateInstaller2_get_Updates(This,retval) ( (This)->lpVtbl -> get_Updates(This,retval) )
#define IUpdateInstaller2_put_Updates(This,value) ( (This)->lpVtbl -> put_Updates(This,value) )
#define IUpdateInstaller2_BeginInstall(This,onProgressChanged,onCompleted,state,retval) ( (This)->lpVtbl -> BeginInstall(This,onProgressChanged,onCompleted,state,retval) )
#define IUpdateInstaller2_BeginUninstall(This,onProgressChanged,onCompleted,state,retval) ( (This)->lpVtbl -> BeginUninstall(This,onProgressChanged,onCompleted,state,retval) )
#define IUpdateInstaller2_EndInstall(This,value,retval) ( (This)->lpVtbl -> EndInstall(This,value,retval) )
#define IUpdateInstaller2_EndUninstall(This,value,retval) ( (This)->lpVtbl -> EndUninstall(This,value,retval) )
#define IUpdateInstaller2_Install(This,retval) ( (This)->lpVtbl -> Install(This,retval) )
#define IUpdateInstaller2_RunWizard(This,dialogTitle,retval) ( (This)->lpVtbl -> RunWizard(This,dialogTitle,retval) )
#define IUpdateInstaller2_get_IsBusy(This,retval) ( (This)->lpVtbl -> get_IsBusy(This,retval) )
#define IUpdateInstaller2_Uninstall(This,retval) ( (This)->lpVtbl -> Uninstall(This,retval) )
#define IUpdateInstaller2_get_AllowSourcePrompts(This,retval) ( (This)->lpVtbl -> get_AllowSourcePrompts(This,retval) )
#define IUpdateInstaller2_put_AllowSourcePrompts(This,value) ( (This)->lpVtbl -> put_AllowSourcePrompts(This,value) )
#define IUpdateInstaller2_get_RebootRequiredBeforeInstallation(This,retval) ( (This)->lpVtbl -> get_RebootRequiredBeforeInstallation(This,retval) )
#define IUpdateInstaller2_get_ForceQuiet(This,retval) ( (This)->lpVtbl -> get_ForceQuiet(This,retval) )
#define IUpdateInstaller2_put_ForceQuiet(This,value) ( (This)->lpVtbl -> put_ForceQuiet(This,value) )
#endif
#endif
#ifndef __IUpdateSession_INTERFACE_DEFINED__
#define __IUpdateSession_INTERFACE_DEFINED__
extern const IID IID_IUpdateSession;
typedef struct IUpdateSessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateSession * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateSession * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateSession * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateSession * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateSession * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateSession * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateSession * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ClientApplicationID) (IUpdateSession * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * put_ClientApplicationID) (IUpdateSession * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_ReadOnly) (IUpdateSession * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_WebProxy) (IUpdateSession * This, IWebProxy ** retval);
	HRESULT(STDMETHODCALLTYPE * put_WebProxy) (IUpdateSession * This, IWebProxy * value);
	HRESULT(STDMETHODCALLTYPE * CreateUpdateSearcher) (IUpdateSession * This, IUpdateSearcher ** retval);
	HRESULT(STDMETHODCALLTYPE * CreateUpdateDownloader) (IUpdateSession * This, IUpdateDownloader ** retval);
	HRESULT(STDMETHODCALLTYPE * CreateUpdateInstaller) (IUpdateSession * This, IUpdateInstaller ** retval);
	END_INTERFACE
}  IUpdateSessionVtbl;
interface IUpdateSession
{
	CONST_VTBL struct IUpdateSessionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateSession_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateSession_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateSession_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateSession_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateSession_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateSession_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateSession_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateSession_get_ClientApplicationID(This,retval) ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
#define IUpdateSession_put_ClientApplicationID(This,value) ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
#define IUpdateSession_get_ReadOnly(This,retval) ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
#define IUpdateSession_get_WebProxy(This,retval) ( (This)->lpVtbl -> get_WebProxy(This,retval) )
#define IUpdateSession_put_WebProxy(This,value) ( (This)->lpVtbl -> put_WebProxy(This,value) )
#define IUpdateSession_CreateUpdateSearcher(This,retval) ( (This)->lpVtbl -> CreateUpdateSearcher(This,retval) )
#define IUpdateSession_CreateUpdateDownloader(This,retval) ( (This)->lpVtbl -> CreateUpdateDownloader(This,retval) )
#define IUpdateSession_CreateUpdateInstaller(This,retval) ( (This)->lpVtbl -> CreateUpdateInstaller(This,retval) )
#endif
#endif
#ifndef __IUpdateSession2_INTERFACE_DEFINED__
#define __IUpdateSession2_INTERFACE_DEFINED__
extern const IID IID_IUpdateSession2;
typedef struct IUpdateSession2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateSession2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateSession2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateSession2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateSession2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateSession2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateSession2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateSession2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ClientApplicationID) (IUpdateSession2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * put_ClientApplicationID) (IUpdateSession2 * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_ReadOnly) (IUpdateSession2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_WebProxy) (IUpdateSession2 * This, IWebProxy ** retval);
	HRESULT(STDMETHODCALLTYPE * put_WebProxy) (IUpdateSession2 * This, IWebProxy * value);
	HRESULT(STDMETHODCALLTYPE * CreateUpdateSearcher) (IUpdateSession2 * This, IUpdateSearcher ** retval);
	HRESULT(STDMETHODCALLTYPE * CreateUpdateDownloader) (IUpdateSession2 * This, IUpdateDownloader ** retval);
	HRESULT(STDMETHODCALLTYPE * CreateUpdateInstaller) (IUpdateSession2 * This, IUpdateInstaller ** retval);
	HRESULT(STDMETHODCALLTYPE * get_UserLocale) (IUpdateSession2 * This, LCID * retval);
	HRESULT(STDMETHODCALLTYPE * put_UserLocale) (IUpdateSession2 * This, LCID lcid);
	END_INTERFACE
}  IUpdateSession2Vtbl;
interface IUpdateSession2
{
	CONST_VTBL struct IUpdateSession2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateSession2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateSession2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateSession2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateSession2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateSession2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateSession2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateSession2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateSession2_get_ClientApplicationID(This,retval) ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
#define IUpdateSession2_put_ClientApplicationID(This,value) ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
#define IUpdateSession2_get_ReadOnly(This,retval) ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
#define IUpdateSession2_get_WebProxy(This,retval) ( (This)->lpVtbl -> get_WebProxy(This,retval) )
#define IUpdateSession2_put_WebProxy(This,value) ( (This)->lpVtbl -> put_WebProxy(This,value) )
#define IUpdateSession2_CreateUpdateSearcher(This,retval) ( (This)->lpVtbl -> CreateUpdateSearcher(This,retval) )
#define IUpdateSession2_CreateUpdateDownloader(This,retval) ( (This)->lpVtbl -> CreateUpdateDownloader(This,retval) )
#define IUpdateSession2_CreateUpdateInstaller(This,retval) ( (This)->lpVtbl -> CreateUpdateInstaller(This,retval) )
#define IUpdateSession2_get_UserLocale(This,retval) ( (This)->lpVtbl -> get_UserLocale(This,retval) )
#define IUpdateSession2_put_UserLocale(This,lcid) ( (This)->lpVtbl -> put_UserLocale(This,lcid) )
#endif
#endif
#ifndef __IUpdateSession3_INTERFACE_DEFINED__
#define __IUpdateSession3_INTERFACE_DEFINED__
extern const IID IID_IUpdateSession3;
typedef struct IUpdateSession3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateSession3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateSession3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateSession3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateSession3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateSession3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateSession3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateSession3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ClientApplicationID) (IUpdateSession3 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * put_ClientApplicationID) (IUpdateSession3 * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * get_ReadOnly) (IUpdateSession3 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_WebProxy) (IUpdateSession3 * This, IWebProxy ** retval);
	HRESULT(STDMETHODCALLTYPE * put_WebProxy) (IUpdateSession3 * This, IWebProxy * value);
	HRESULT(STDMETHODCALLTYPE * CreateUpdateSearcher) (IUpdateSession3 * This, IUpdateSearcher ** retval);
	HRESULT(STDMETHODCALLTYPE * CreateUpdateDownloader) (IUpdateSession3 * This, IUpdateDownloader ** retval);
	HRESULT(STDMETHODCALLTYPE * CreateUpdateInstaller) (IUpdateSession3 * This, IUpdateInstaller ** retval);
	HRESULT(STDMETHODCALLTYPE * get_UserLocale) (IUpdateSession3 * This, LCID * retval);
	HRESULT(STDMETHODCALLTYPE * put_UserLocale) (IUpdateSession3 * This, LCID lcid);
	HRESULT(STDMETHODCALLTYPE * CreateUpdateServiceManager) (IUpdateSession3 * This, IUpdateServiceManager2 ** retval);
	HRESULT(STDMETHODCALLTYPE * QueryHistory) (IUpdateSession3 * This, BSTR criteria, LONG startIndex, LONG count, IUpdateHistoryEntryCollection ** retval);
	END_INTERFACE
}  IUpdateSession3Vtbl;
interface IUpdateSession3
{
	CONST_VTBL struct IUpdateSession3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateSession3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateSession3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateSession3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateSession3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateSession3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateSession3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateSession3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateSession3_get_ClientApplicationID(This,retval) ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
#define IUpdateSession3_put_ClientApplicationID(This,value) ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
#define IUpdateSession3_get_ReadOnly(This,retval) ( (This)->lpVtbl -> get_ReadOnly(This,retval) )
#define IUpdateSession3_get_WebProxy(This,retval) ( (This)->lpVtbl -> get_WebProxy(This,retval) )
#define IUpdateSession3_put_WebProxy(This,value) ( (This)->lpVtbl -> put_WebProxy(This,value) )
#define IUpdateSession3_CreateUpdateSearcher(This,retval) ( (This)->lpVtbl -> CreateUpdateSearcher(This,retval) )
#define IUpdateSession3_CreateUpdateDownloader(This,retval) ( (This)->lpVtbl -> CreateUpdateDownloader(This,retval) )
#define IUpdateSession3_CreateUpdateInstaller(This,retval) ( (This)->lpVtbl -> CreateUpdateInstaller(This,retval) )
#define IUpdateSession3_get_UserLocale(This,retval) ( (This)->lpVtbl -> get_UserLocale(This,retval) )
#define IUpdateSession3_put_UserLocale(This,lcid) ( (This)->lpVtbl -> put_UserLocale(This,lcid) )
#define IUpdateSession3_CreateUpdateServiceManager(This,retval) ( (This)->lpVtbl -> CreateUpdateServiceManager(This,retval) )
#define IUpdateSession3_QueryHistory(This,criteria,startIndex,count,retval) ( (This)->lpVtbl -> QueryHistory(This,criteria,startIndex,count,retval) )
#endif
#endif
#ifndef __IUpdateService_INTERFACE_DEFINED__
#define __IUpdateService_INTERFACE_DEFINED__
extern const IID IID_IUpdateService;
typedef struct IUpdateServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateService * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateService * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateService * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateService * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateService * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IUpdateService * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_ContentValidationCert) (IUpdateService * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_ExpirationDate) (IUpdateService * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsManaged) (IUpdateService * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsRegisteredWithAU) (IUpdateService * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IssueDate) (IUpdateService * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_OffersWindowsUpdates) (IUpdateService * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_RedirectUrls) (IUpdateService * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_ServiceID) (IUpdateService * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsScanPackageService) (IUpdateService * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_CanRegisterWithAU) (IUpdateService * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_ServiceUrl) (IUpdateService * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_SetupPrefix) (IUpdateService * This, BSTR * retval);
	END_INTERFACE
}  IUpdateServiceVtbl;
interface IUpdateService
{
	CONST_VTBL struct IUpdateServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateService_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateService_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateService_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateService_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateService_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateService_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateService_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateService_get_Name(This,retval) ( (This)->lpVtbl -> get_Name(This,retval) )
#define IUpdateService_get_ContentValidationCert(This,retval) ( (This)->lpVtbl -> get_ContentValidationCert(This,retval) )
#define IUpdateService_get_ExpirationDate(This,retval) ( (This)->lpVtbl -> get_ExpirationDate(This,retval) )
#define IUpdateService_get_IsManaged(This,retval) ( (This)->lpVtbl -> get_IsManaged(This,retval) )
#define IUpdateService_get_IsRegisteredWithAU(This,retval) ( (This)->lpVtbl -> get_IsRegisteredWithAU(This,retval) )
#define IUpdateService_get_IssueDate(This,retval) ( (This)->lpVtbl -> get_IssueDate(This,retval) )
#define IUpdateService_get_OffersWindowsUpdates(This,retval) ( (This)->lpVtbl -> get_OffersWindowsUpdates(This,retval) )
#define IUpdateService_get_RedirectUrls(This,retval) ( (This)->lpVtbl -> get_RedirectUrls(This,retval) )
#define IUpdateService_get_ServiceID(This,retval) ( (This)->lpVtbl -> get_ServiceID(This,retval) )
#define IUpdateService_get_IsScanPackageService(This,retval) ( (This)->lpVtbl -> get_IsScanPackageService(This,retval) )
#define IUpdateService_get_CanRegisterWithAU(This,retval) ( (This)->lpVtbl -> get_CanRegisterWithAU(This,retval) )
#define IUpdateService_get_ServiceUrl(This,retval) ( (This)->lpVtbl -> get_ServiceUrl(This,retval) )
#define IUpdateService_get_SetupPrefix(This,retval) ( (This)->lpVtbl -> get_SetupPrefix(This,retval) )
#endif
#endif
#ifndef __IUpdateService2_INTERFACE_DEFINED__
#define __IUpdateService2_INTERFACE_DEFINED__
extern const IID IID_IUpdateService2;
typedef struct IUpdateService2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateService2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateService2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateService2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateService2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateService2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateService2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateService2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IUpdateService2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_ContentValidationCert) (IUpdateService2 * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_ExpirationDate) (IUpdateService2 * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsManaged) (IUpdateService2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsRegisteredWithAU) (IUpdateService2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_IssueDate) (IUpdateService2 * This, DATE * retval);
	HRESULT(STDMETHODCALLTYPE * get_OffersWindowsUpdates) (IUpdateService2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_RedirectUrls) (IUpdateService2 * This, IStringCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * get_ServiceID) (IUpdateService2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsScanPackageService) (IUpdateService2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_CanRegisterWithAU) (IUpdateService2 * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_ServiceUrl) (IUpdateService2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_SetupPrefix) (IUpdateService2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsDefaultAUService) (IUpdateService2 * This, VARIANT_BOOL * retval);
	END_INTERFACE
}  IUpdateService2Vtbl;
interface IUpdateService2
{
	CONST_VTBL struct IUpdateService2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateService2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateService2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateService2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateService2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateService2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateService2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateService2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateService2_get_Name(This,retval) ( (This)->lpVtbl -> get_Name(This,retval) )
#define IUpdateService2_get_ContentValidationCert(This,retval) ( (This)->lpVtbl -> get_ContentValidationCert(This,retval) )
#define IUpdateService2_get_ExpirationDate(This,retval) ( (This)->lpVtbl -> get_ExpirationDate(This,retval) )
#define IUpdateService2_get_IsManaged(This,retval) ( (This)->lpVtbl -> get_IsManaged(This,retval) )
#define IUpdateService2_get_IsRegisteredWithAU(This,retval) ( (This)->lpVtbl -> get_IsRegisteredWithAU(This,retval) )
#define IUpdateService2_get_IssueDate(This,retval) ( (This)->lpVtbl -> get_IssueDate(This,retval) )
#define IUpdateService2_get_OffersWindowsUpdates(This,retval) ( (This)->lpVtbl -> get_OffersWindowsUpdates(This,retval) )
#define IUpdateService2_get_RedirectUrls(This,retval) ( (This)->lpVtbl -> get_RedirectUrls(This,retval) )
#define IUpdateService2_get_ServiceID(This,retval) ( (This)->lpVtbl -> get_ServiceID(This,retval) )
#define IUpdateService2_get_IsScanPackageService(This,retval) ( (This)->lpVtbl -> get_IsScanPackageService(This,retval) )
#define IUpdateService2_get_CanRegisterWithAU(This,retval) ( (This)->lpVtbl -> get_CanRegisterWithAU(This,retval) )
#define IUpdateService2_get_ServiceUrl(This,retval) ( (This)->lpVtbl -> get_ServiceUrl(This,retval) )
#define IUpdateService2_get_SetupPrefix(This,retval) ( (This)->lpVtbl -> get_SetupPrefix(This,retval) )
#define IUpdateService2_get_IsDefaultAUService(This,retval) ( (This)->lpVtbl -> get_IsDefaultAUService(This,retval) )
#endif
#endif
#ifndef __IUpdateServiceCollection_INTERFACE_DEFINED__
#define __IUpdateServiceCollection_INTERFACE_DEFINED__
extern const IID IID_IUpdateServiceCollection;
typedef struct IUpdateServiceCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateServiceCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateServiceCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateServiceCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateServiceCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateServiceCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateServiceCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateServiceCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IUpdateServiceCollection * This, LONG index, IUpdateService ** retval);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IUpdateServiceCollection * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IUpdateServiceCollection * This, LONG * retval);
	END_INTERFACE
}  IUpdateServiceCollectionVtbl;
interface IUpdateServiceCollection
{
	CONST_VTBL struct IUpdateServiceCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateServiceCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateServiceCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateServiceCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateServiceCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateServiceCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateServiceCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateServiceCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateServiceCollection_get_Item(This,index,retval) ( (This)->lpVtbl -> get_Item(This,index,retval) )
#define IUpdateServiceCollection_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define IUpdateServiceCollection_get_Count(This,retval) ( (This)->lpVtbl -> get_Count(This,retval) )
#endif
#endif
#ifndef __IUpdateServiceRegistration_INTERFACE_DEFINED__
#define __IUpdateServiceRegistration_INTERFACE_DEFINED__
extern const IID IID_IUpdateServiceRegistration;
typedef struct IUpdateServiceRegistrationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateServiceRegistration * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateServiceRegistration * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateServiceRegistration * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateServiceRegistration * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateServiceRegistration * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateServiceRegistration * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateServiceRegistration * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_RegistrationState) (IUpdateServiceRegistration * This, UpdateServiceRegistrationState * retval);
	HRESULT(STDMETHODCALLTYPE * get_ServiceID) (IUpdateServiceRegistration * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * get_IsPendingRegistrationWithAU) (IUpdateServiceRegistration * This, VARIANT_BOOL * retval);
	HRESULT(STDMETHODCALLTYPE * get_Service) (IUpdateServiceRegistration * This, IUpdateService2 ** retval);
	END_INTERFACE
}  IUpdateServiceRegistrationVtbl;
interface IUpdateServiceRegistration
{
	CONST_VTBL struct IUpdateServiceRegistrationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateServiceRegistration_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateServiceRegistration_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateServiceRegistration_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateServiceRegistration_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateServiceRegistration_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateServiceRegistration_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateServiceRegistration_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateServiceRegistration_get_RegistrationState(This,retval) ( (This)->lpVtbl -> get_RegistrationState(This,retval) )
#define IUpdateServiceRegistration_get_ServiceID(This,retval) ( (This)->lpVtbl -> get_ServiceID(This,retval) )
#define IUpdateServiceRegistration_get_IsPendingRegistrationWithAU(This,retval) ( (This)->lpVtbl -> get_IsPendingRegistrationWithAU(This,retval) )
#define IUpdateServiceRegistration_get_Service(This,retval) ( (This)->lpVtbl -> get_Service(This,retval) )
#endif
#endif
#ifndef __IUpdateServiceManager_INTERFACE_DEFINED__
#define __IUpdateServiceManager_INTERFACE_DEFINED__
extern const IID IID_IUpdateServiceManager;
typedef struct IUpdateServiceManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateServiceManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateServiceManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateServiceManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateServiceManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateServiceManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateServiceManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateServiceManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Services) (IUpdateServiceManager * This, IUpdateServiceCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * AddService) (IUpdateServiceManager * This, BSTR serviceID, BSTR authorizationCabPath, IUpdateService ** retval);
	HRESULT(STDMETHODCALLTYPE * RegisterServiceWithAU) (IUpdateServiceManager * This, BSTR serviceID);
	HRESULT(STDMETHODCALLTYPE * RemoveService) (IUpdateServiceManager * This, BSTR serviceID);
	HRESULT(STDMETHODCALLTYPE * UnregisterServiceWithAU) (IUpdateServiceManager * This, BSTR serviceID);
	HRESULT(STDMETHODCALLTYPE * AddScanPackageService) (IUpdateServiceManager * This, BSTR serviceName, BSTR scanFileLocation, LONG flags, IUpdateService ** ppService);
	HRESULT(STDMETHODCALLTYPE * SetOption) (IUpdateServiceManager * This, BSTR optionName, VARIANT optionValue);
	END_INTERFACE
}  IUpdateServiceManagerVtbl;
interface IUpdateServiceManager
{
	CONST_VTBL struct IUpdateServiceManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateServiceManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateServiceManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateServiceManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateServiceManager_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateServiceManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateServiceManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateServiceManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateServiceManager_get_Services(This,retval) ( (This)->lpVtbl -> get_Services(This,retval) )
#define IUpdateServiceManager_AddService(This,serviceID,authorizationCabPath,retval) ( (This)->lpVtbl -> AddService(This,serviceID,authorizationCabPath,retval) )
#define IUpdateServiceManager_RegisterServiceWithAU(This,serviceID) ( (This)->lpVtbl -> RegisterServiceWithAU(This,serviceID) )
#define IUpdateServiceManager_RemoveService(This,serviceID) ( (This)->lpVtbl -> RemoveService(This,serviceID) )
#define IUpdateServiceManager_UnregisterServiceWithAU(This,serviceID) ( (This)->lpVtbl -> UnregisterServiceWithAU(This,serviceID) )
#define IUpdateServiceManager_AddScanPackageService(This,serviceName,scanFileLocation,flags,ppService) ( (This)->lpVtbl -> AddScanPackageService(This,serviceName,scanFileLocation,flags,ppService) )
#define IUpdateServiceManager_SetOption(This,optionName,optionValue) ( (This)->lpVtbl -> SetOption(This,optionName,optionValue) )
#endif
#endif
#ifndef __IUpdateServiceManager2_INTERFACE_DEFINED__
#define __IUpdateServiceManager2_INTERFACE_DEFINED__
extern const IID IID_IUpdateServiceManager2;
typedef struct IUpdateServiceManager2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateServiceManager2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateServiceManager2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateServiceManager2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUpdateServiceManager2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUpdateServiceManager2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUpdateServiceManager2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUpdateServiceManager2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Services) (IUpdateServiceManager2 * This, IUpdateServiceCollection ** retval);
	HRESULT(STDMETHODCALLTYPE * AddService) (IUpdateServiceManager2 * This, BSTR serviceID, BSTR authorizationCabPath, IUpdateService ** retval);
	HRESULT(STDMETHODCALLTYPE * RegisterServiceWithAU) (IUpdateServiceManager2 * This, BSTR serviceID);
	HRESULT(STDMETHODCALLTYPE * RemoveService) (IUpdateServiceManager2 * This, BSTR serviceID);
	HRESULT(STDMETHODCALLTYPE * UnregisterServiceWithAU) (IUpdateServiceManager2 * This, BSTR serviceID);
	HRESULT(STDMETHODCALLTYPE * AddScanPackageService) (IUpdateServiceManager2 * This, BSTR serviceName, BSTR scanFileLocation, LONG flags, IUpdateService ** ppService);
	HRESULT(STDMETHODCALLTYPE * SetOption) (IUpdateServiceManager2 * This, BSTR optionName, VARIANT optionValue);
	HRESULT(STDMETHODCALLTYPE * get_ClientApplicationID) (IUpdateServiceManager2 * This, BSTR * retval);
	HRESULT(STDMETHODCALLTYPE * put_ClientApplicationID) (IUpdateServiceManager2 * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * QueryServiceRegistration) (IUpdateServiceManager2 * This, BSTR serviceID, IUpdateServiceRegistration ** retval);
	HRESULT(STDMETHODCALLTYPE * AddService2) (IUpdateServiceManager2 * This, BSTR serviceID, LONG flags, BSTR authorizationCabPath, IUpdateServiceRegistration ** retval);
	END_INTERFACE
}  IUpdateServiceManager2Vtbl;
interface IUpdateServiceManager2
{
	CONST_VTBL struct IUpdateServiceManager2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateServiceManager2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateServiceManager2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUpdateServiceManager2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUpdateServiceManager2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUpdateServiceManager2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUpdateServiceManager2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUpdateServiceManager2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUpdateServiceManager2_get_Services(This,retval) ( (This)->lpVtbl -> get_Services(This,retval) )
#define IUpdateServiceManager2_AddService(This,serviceID,authorizationCabPath,retval) ( (This)->lpVtbl -> AddService(This,serviceID,authorizationCabPath,retval) )
#define IUpdateServiceManager2_RegisterServiceWithAU(This,serviceID) ( (This)->lpVtbl -> RegisterServiceWithAU(This,serviceID) )
#define IUpdateServiceManager2_RemoveService(This,serviceID) ( (This)->lpVtbl -> RemoveService(This,serviceID) )
#define IUpdateServiceManager2_UnregisterServiceWithAU(This,serviceID) ( (This)->lpVtbl -> UnregisterServiceWithAU(This,serviceID) )
#define IUpdateServiceManager2_AddScanPackageService(This,serviceName,scanFileLocation,flags,ppService) ( (This)->lpVtbl -> AddScanPackageService(This,serviceName,scanFileLocation,flags,ppService) )
#define IUpdateServiceManager2_SetOption(This,optionName,optionValue) ( (This)->lpVtbl -> SetOption(This,optionName,optionValue) )
#define IUpdateServiceManager2_get_ClientApplicationID(This,retval) ( (This)->lpVtbl -> get_ClientApplicationID(This,retval) )
#define IUpdateServiceManager2_put_ClientApplicationID(This,value) ( (This)->lpVtbl -> put_ClientApplicationID(This,value) )
#define IUpdateServiceManager2_QueryServiceRegistration(This,serviceID,retval) ( (This)->lpVtbl -> QueryServiceRegistration(This,serviceID,retval) )
#define IUpdateServiceManager2_AddService2(This,serviceID,flags,authorizationCabPath,retval) ( (This)->lpVtbl -> AddService2(This,serviceID,flags,authorizationCabPath,retval) )
#endif
#endif
#ifndef __IInstallationAgent_INTERFACE_DEFINED__
#define __IInstallationAgent_INTERFACE_DEFINED__
extern const IID IID_IInstallationAgent;
typedef struct IInstallationAgentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInstallationAgent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInstallationAgent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInstallationAgent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInstallationAgent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInstallationAgent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInstallationAgent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInstallationAgent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * RecordInstallationResult) (IInstallationAgent * This, BSTR installationResultCookie, LONG hresult, IStringCollection * extendedReportingData);
	END_INTERFACE
}  IInstallationAgentVtbl;
interface IInstallationAgent
{
	CONST_VTBL struct IInstallationAgentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInstallationAgent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInstallationAgent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInstallationAgent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInstallationAgent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInstallationAgent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInstallationAgent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInstallationAgent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInstallationAgent_RecordInstallationResult(This,installationResultCookie,hresult,extendedReportingData) ( (This)->lpVtbl -> RecordInstallationResult(This,installationResultCookie,hresult,extendedReportingData) )
#endif
#endif
#ifndef __WUApiLib_LIBRARY_DEFINED__
#define __WUApiLib_LIBRARY_DEFINED__
typedef enum tagUpdateLockdownOption
{
	uloForWebsiteAccess = 0x1
} UpdateLockdownOption;
typedef enum tagAddServiceFlag
{
	asfAllowPendingRegistration = 0x1,
	asfAllowOnlineRegistration = 0x2,
	asfRegisterServiceWithAU = 0x4
} AddServiceFlag;
typedef enum tagUpdateServiceOption
{
	usoNonVolatileService = 0x1
} UpdateServiceOption;
extern const IID LIBID_WUApiLib;
extern const CLSID CLSID_StringCollection;
extern const CLSID CLSID_UpdateSearcher;
extern const CLSID CLSID_WebProxy;
extern const CLSID CLSID_SystemInformation;
extern const CLSID CLSID_WindowsUpdateAgentInfo;
extern const CLSID CLSID_AutomaticUpdates;
extern const CLSID CLSID_UpdateCollection;
extern const CLSID CLSID_UpdateDownloader;
extern const CLSID CLSID_UpdateInstaller;
extern const CLSID CLSID_UpdateSession;
extern const CLSID CLSID_UpdateServiceManager;
extern const CLSID CLSID_InstallationAgent;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
#endif
