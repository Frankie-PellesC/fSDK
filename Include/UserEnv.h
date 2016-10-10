/*+@@file@@----------------------------------------------------------------*//*!
 \file		UserEnv.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 19:20:27 2016
 \date		Modified on Sun Sep  4 19:20:27 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_USERENV
#define _INC_USERENV
#if __POCC__ >= 500
#pragma once
#endif
#include <wbemcli.h>
#if !defined(_USERENV_)
#define USERENVAPI DECLSPEC_IMPORT
#else
#define USERENVAPI
#endif
#include <profinfo.h>
#define PI_NOUI         0x00000001
#define PI_APPLYPOLICY  0x00000002
USERENVAPI BOOL WINAPI LoadUserProfileA(HANDLE hToken, LPPROFILEINFOA lpProfileInfo);
USERENVAPI BOOL WINAPI LoadUserProfileW(HANDLE hToken, LPPROFILEINFOW lpProfileInfo);
#ifdef UNICODE
#define LoadUserProfile  LoadUserProfileW
#else
#define LoadUserProfile  LoadUserProfileA
#endif
USERENVAPI BOOL WINAPI UnloadUserProfile(HANDLE hToken, HANDLE hProfile);
USERENVAPI BOOL WINAPI GetProfilesDirectoryA(LPSTR lpProfileDir, LPDWORD lpcchSize);
USERENVAPI BOOL WINAPI GetProfilesDirectoryW(LPWSTR lpProfileDir, LPDWORD lpcchSize);
#ifdef UNICODE
#define GetProfilesDirectory  GetProfilesDirectoryW
#else
#define GetProfilesDirectory  GetProfilesDirectoryA
#endif
#if(WINVER >= 0x0500)
#define PT_TEMPORARY         0x00000001
#define PT_ROAMING           0x00000002
#define PT_MANDATORY         0x00000004
USERENVAPI BOOL WINAPI GetProfileType(DWORD *dwFlags);
#endif
#if(WINVER >= 0x0500)
USERENVAPI BOOL WINAPI DeleteProfileA(LPCSTR lpSidString, LPCSTR lpProfilePath, LPCSTR lpComputerName);
USERENVAPI BOOL WINAPI DeleteProfileW(LPCWSTR lpSidString, LPCWSTR lpProfilePath, LPCWSTR lpComputerName);
#ifdef UNICODE
#define DeleteProfile  DeleteProfileW
#else
#define DeleteProfile  DeleteProfileA
#endif
#endif
#if(WINVER >= 0x0600)
USERENVAPI HRESULT WINAPI CreateProfile(LPCWSTR pszUserSid, LPCWSTR pszUserName, LPWSTR pszProfilePath, DWORD cchProfilePath);
#endif
#if(WINVER >= 0x0500)
USERENVAPI BOOL WINAPI GetDefaultUserProfileDirectoryA(LPSTR lpProfileDir, LPDWORD lpcchSize);
USERENVAPI BOOL WINAPI GetDefaultUserProfileDirectoryW(LPWSTR lpProfileDir, LPDWORD lpcchSize);
#ifdef UNICODE
#define GetDefaultUserProfileDirectory  GetDefaultUserProfileDirectoryW
#else
#define GetDefaultUserProfileDirectory  GetDefaultUserProfileDirectoryA
#endif
#endif
#if(WINVER >= 0x0500)
USERENVAPI BOOL WINAPI GetAllUsersProfileDirectoryA(LPSTR lpProfileDir, LPDWORD lpcchSize);
USERENVAPI BOOL WINAPI GetAllUsersProfileDirectoryW(LPWSTR lpProfileDir, LPDWORD lpcchSize);
#ifdef UNICODE
#define GetAllUsersProfileDirectory  GetAllUsersProfileDirectoryW
#else
#define GetAllUsersProfileDirectory  GetAllUsersProfileDirectoryA
#endif
#endif
USERENVAPI BOOL WINAPI GetUserProfileDirectoryA(HANDLE hToken, LPSTR lpProfileDir, LPDWORD lpcchSize);
USERENVAPI BOOL WINAPI GetUserProfileDirectoryW(HANDLE hToken, LPWSTR lpProfileDir, LPDWORD lpcchSize);
#ifdef UNICODE
#define GetUserProfileDirectory  GetUserProfileDirectoryW
#else
#define GetUserProfileDirectory  GetUserProfileDirectoryA
#endif
BOOL WINAPI CreateEnvironmentBlock(LPVOID *lpEnvironment, HANDLE hToken, BOOL bInherit);
BOOL WINAPI DestroyEnvironmentBlock(LPVOID lpEnvironment);
#if(WINVER >= 0x0500)
USERENVAPI BOOL WINAPI ExpandEnvironmentStringsForUserA(HANDLE hToken, LPCSTR lpSrc, LPSTR lpDest, DWORD dwSize);
USERENVAPI BOOL WINAPI ExpandEnvironmentStringsForUserW(HANDLE hToken, LPCWSTR lpSrc, LPWSTR lpDest, DWORD dwSize);
#ifdef UNICODE
#define ExpandEnvironmentStringsForUser  ExpandEnvironmentStringsForUserW
#else
#define ExpandEnvironmentStringsForUser  ExpandEnvironmentStringsForUserA
#endif
#endif
#if(WINVER >= 0x0500)
USERENVAPI BOOL WINAPI RefreshPolicy(BOOL bMachine);
#endif
#if(WINVER >= 0x0500)
#define RP_FORCE            1
#define RP_SYNC             2
USERENVAPI BOOL WINAPI RefreshPolicyEx(BOOL bMachine, DWORD dwOptions);
#endif
#if(WINVER >= 0x0500)
USERENVAPI HANDLE WINAPI EnterCriticalPolicySection(BOOL bMachine);
#endif
#if(WINVER >= 0x0500)
USERENVAPI BOOL WINAPI LeaveCriticalPolicySection(HANDLE hSection);
#endif
#if(WINVER >= 0x0500)
USERENVAPI BOOL WINAPI RegisterGPNotification(HANDLE hEvent, BOOL bMachine);
#endif
#if(WINVER >= 0x0500)
USERENVAPI BOOL WINAPI UnregisterGPNotification(HANDLE hEvent);
#endif
#if(WINVER >= 0x0500)
#define GPC_BLOCK_POLICY        0x00000001
#endif
#if(WINVER >= 0x0500)
#define GPO_FLAG_DISABLE        0x00000001
#define GPO_FLAG_FORCE          0x00000002
#endif
#if(WINVER >= 0x0500)
typedef enum _GPO_LINK
{
	GPLinkUnknown = 0,
	GPLinkMachine,
	GPLinkSite,
	GPLinkDomain,
	GPLinkOrganizationalUnit
} GPO_LINK, *PGPO_LINK;
typedef struct _GROUP_POLICY_OBJECTA
{
	DWORD dwOptions;
	DWORD dwVersion;
	LPSTR lpDSPath;
	LPSTR lpFileSysPath;
	LPSTR lpDisplayName;
	CHAR szGPOName[50];
	GPO_LINK GPOLink;
	LPARAM lParam;
	struct _GROUP_POLICY_OBJECTA *pNext;
	struct _GROUP_POLICY_OBJECTA *pPrev;
	LPSTR lpExtensions;
	LPARAM lParam2;
	LPSTR lpLink;
} GROUP_POLICY_OBJECTA, *PGROUP_POLICY_OBJECTA;
typedef struct _GROUP_POLICY_OBJECTW
{
	DWORD dwOptions;
	DWORD dwVersion;
	LPWSTR lpDSPath;
	LPWSTR lpFileSysPath;
	LPWSTR lpDisplayName;
	WCHAR szGPOName[50];
	GPO_LINK GPOLink;
	LPARAM lParam;
	struct _GROUP_POLICY_OBJECTW *pNext;
	struct _GROUP_POLICY_OBJECTW *pPrev;
	LPWSTR lpExtensions;
	LPARAM lParam2;
	LPWSTR lpLink;
} GROUP_POLICY_OBJECTW, *PGROUP_POLICY_OBJECTW;
#ifdef UNICODE
typedef GROUP_POLICY_OBJECTW GROUP_POLICY_OBJECT;
typedef PGROUP_POLICY_OBJECTW PGROUP_POLICY_OBJECT;
#else
typedef GROUP_POLICY_OBJECTA GROUP_POLICY_OBJECT;
typedef PGROUP_POLICY_OBJECTA PGROUP_POLICY_OBJECT;
#endif
#define GPO_LIST_FLAG_MACHINE        0x00000001
#define GPO_LIST_FLAG_SITEONLY       0x00000002
#define GPO_LIST_FLAG_NO_WMIFILTERS  0x00000004
#define GPO_LIST_FLAG_NO_SECURITYFILTERS 0x00000008
USERENVAPI BOOL WINAPI GetGPOListA(HANDLE hToken, LPCSTR lpName, LPCSTR lpHostName, LPCSTR lpComputerName, DWORD dwFlags, PGROUP_POLICY_OBJECTA *pGPOList);
USERENVAPI BOOL WINAPI GetGPOListW(HANDLE hToken, LPCWSTR lpName, LPCWSTR lpHostName, LPCWSTR lpComputerName, DWORD dwFlags, PGROUP_POLICY_OBJECTW *pGPOList);
#ifdef UNICODE
#define GetGPOList  GetGPOListW
#else
#define GetGPOList  GetGPOListA
#endif
#endif
#if(WINVER >= 0x0500)
USERENVAPI BOOL WINAPI FreeGPOListA(PGROUP_POLICY_OBJECTA pGPOList);
USERENVAPI BOOL WINAPI FreeGPOListW(PGROUP_POLICY_OBJECTW pGPOList);
#ifdef UNICODE
#define FreeGPOList  FreeGPOListW
#else
#define FreeGPOList  FreeGPOListA
#endif
#endif
#if(WINVER >= 0x0500)
USERENVAPI DWORD WINAPI GetAppliedGPOListA(DWORD dwFlags, LPCSTR pMachineName, PSID pSidUser, GUID *pGuidExtension, PGROUP_POLICY_OBJECTA *ppGPOList);
USERENVAPI DWORD WINAPI GetAppliedGPOListW(DWORD dwFlags, LPCWSTR pMachineName, PSID pSidUser, GUID *pGuidExtension, PGROUP_POLICY_OBJECTW *ppGPOList);
#ifdef UNICODE
#define GetAppliedGPOList  GetAppliedGPOListW
#else
#define GetAppliedGPOList  GetAppliedGPOListA
#endif
#endif
#if(WINVER >= 0x0500)
#define GP_DLLNAME                         TEXT("DllName")
#define GP_ENABLEASYNCHRONOUSPROCESSING    TEXT("EnableAsynchronousProcessing")
#define GP_MAXNOGPOLISTCHANGESINTERVAL     TEXT("MaxNoGPOListChangesInterval")
#define GP_NOBACKGROUNDPOLICY              TEXT("NoBackgroundPolicy")
#define GP_NOGPOLISTCHANGES                TEXT("NoGPOListChanges")
#define GP_NOMACHINEPOLICY                 TEXT("NoMachinePolicy")
#define GP_NOSLOWLINK                      TEXT("NoSlowLink")
#define GP_NOTIFYLINKTRANSITION            TEXT("NotifyLinkTransition")
#define GP_NOUSERPOLICY                    TEXT("NoUserPolicy")
#define GP_PERUSERLOCALSETTINGS            TEXT("PerUserLocalSettings")
#define GP_PROCESSGROUPPOLICY              TEXT("ProcessGroupPolicy")
#define GP_REQUIRESSUCCESSFULREGISTRY      TEXT("RequiresSuccessfulRegistry")
#define GPO_INFO_FLAG_MACHINE              0x00000001
#define GPO_INFO_FLAG_BACKGROUND           0x00000010
#define GPO_INFO_FLAG_SLOWLINK             0x00000020
#define GPO_INFO_FLAG_VERBOSE              0x00000040
#define GPO_INFO_FLAG_NOCHANGES            0x00000080
#define GPO_INFO_FLAG_LINKTRANSITION       0x00000100
#define GPO_INFO_FLAG_LOGRSOP_TRANSITION   0x00000200
#define GPO_INFO_FLAG_FORCED_REFRESH       0x00000400
#define GPO_INFO_FLAG_SAFEMODE_BOOT        0x00000800
#define GPO_INFO_FLAG_ASYNC_FOREGROUND     0x00001000
typedef UINT_PTR ASYNCCOMPLETIONHANDLE;
typedef DWORD(*PFNSTATUSMESSAGECALLBACK) (BOOL bVerbose, LPWSTR lpMessage);
typedef DWORD(*PFNPROCESSGROUPPOLICY) (DWORD dwFlags, HANDLE hToken, HKEY hKeyRoot, PGROUP_POLICY_OBJECT pDeletedGPOList, PGROUP_POLICY_OBJECT pChangedGPOList, ASYNCCOMPLETIONHANDLE pHandle, BOOL *pbAbort, PFNSTATUSMESSAGECALLBACK pStatusCallback);
typedef DWORD(*PFNPROCESSGROUPPOLICYEX) (DWORD dwFlags, HANDLE hToken, HKEY hKeyRoot, PGROUP_POLICY_OBJECT pDeletedGPOList, PGROUP_POLICY_OBJECT pChangedGPOList, ASYNCCOMPLETIONHANDLE pHandle, BOOL *pbAbort, PFNSTATUSMESSAGECALLBACK pStatusCallback, IWbemServices *pWbemServices, HRESULT *pRsopStatus);
typedef PVOID PRSOPTOKEN;
typedef struct _RSOP_TARGET
{
	WCHAR *pwszAccountName;
	WCHAR *pwszNewSOM;
	SAFEARRAY *psaSecurityGroups;
	PRSOPTOKEN pRsopToken;
	PGROUP_POLICY_OBJECT pGPOList;
	IWbemServices *pWbemServices;
} RSOP_TARGET, *PRSOP_TARGET;
typedef DWORD(*PFNGENERATEGROUPPOLICY) (DWORD dwFlags, BOOL *pbAbort, WCHAR *pwszSite, PRSOP_TARGET pComputerTarget, PRSOP_TARGET pUserTarget);
#define REGISTRY_EXTENSION_GUID  { 0x35378EAC, 0x683F, 0x11D2, 0xA8, 0x9A, 0x00, 0xC0, 0x4F, 0xBB, 0xCF, 0xA2 }
#define GROUP_POLICY_TRIGGER_EVENT_PROVIDER_GUID  { 0xBD2F4252, 0x5E1E, 0x49FC, 0x9A, 0x30, 0xF3, 0x97, 0x8A, 0xD8, 0x9E, 0xE2 }
#define MACHINE_POLICY_PRESENT_TRIGGER_GUID  { 0x659FCAE6, 0x5BDB, 0x4DA9, 0xB1, 0xFF, 0xCA, 0x2A, 0x17, 0x8D, 0x46, 0xE0 }
#define USER_POLICY_PRESENT_TRIGGER_GUID  { 0x54FB46C8, 0xF089, 0x464C, 0xB1, 0xFD, 0x59, 0xD1, 0xB6, 0x2C, 0x3B, 0x50 }
#endif
#if(WINVER >= 0x0500)
typedef GUID *REFGPEXTENSIONID;
USERENVAPI DWORD WINAPI ProcessGroupPolicyCompleted(REFGPEXTENSIONID extensionId, ASYNCCOMPLETIONHANDLE pAsyncHandle, DWORD dwStatus);
#endif
#if(WINVER >= 0x0500)
USERENVAPI DWORD WINAPI ProcessGroupPolicyCompletedEx(REFGPEXTENSIONID extensionId, ASYNCCOMPLETIONHANDLE pAsyncHandle, DWORD dwStatus, HRESULT RsopStatus);
#endif
#if(WINVER >= 0x0500)
USERENVAPI HRESULT WINAPI RsopAccessCheckByType(PSECURITY_DESCRIPTOR pSecurityDescriptor, PSID pPrincipalSelfSid, PRSOPTOKEN pRsopToken, DWORD dwDesiredAccessMask, POBJECT_TYPE_LIST pObjectTypeList, DWORD ObjectTypeListLength, PGENERIC_MAPPING pGenericMapping, PPRIVILEGE_SET pPrivilegeSet, LPDWORD pdwPrivilegeSetLength, LPDWORD pdwGrantedAccessMask, LPBOOL pbAccessStatus);
#endif
#if(WINVER >= 0x0500)
USERENVAPI HRESULT WINAPI RsopFileAccessCheck(LPWSTR pszFileName, PRSOPTOKEN pRsopToken, DWORD dwDesiredAccessMask, LPDWORD pdwGrantedAccessMask, LPBOOL pbAccessStatus);
#endif
typedef enum _SETTINGSTATUS
{
	RSOPUnspecified = 0,
	RSOPApplied,
	RSOPIgnored,
	RSOPFailed,
	RSOPSubsettingFailed
} SETTINGSTATUS;
typedef struct _POLICYSETTINGSTATUSINFO
{
	LPWSTR szKey;
	LPWSTR szEventSource;
	LPWSTR szEventLogName;
	DWORD dwEventID;
	DWORD dwErrorCode;
	SETTINGSTATUS status;
	SYSTEMTIME timeLogged;
} POLICYSETTINGSTATUSINFO, *LPPOLICYSETTINGSTATUSINFO;
USERENVAPI HRESULT WINAPI RsopSetPolicySettingStatus(DWORD dwFlags, IWbemServices *pServices, IWbemClassObject *pSettingInstance, DWORD nInfo, POLICYSETTINGSTATUSINFO *pStatus);
USERENVAPI HRESULT WINAPI RsopResetPolicySettingStatus(DWORD dwFlags, IWbemServices *pServices, IWbemClassObject *pSettingInstance);
#define FLAG_NO_GPO_FILTER      0x80000000
#define FLAG_NO_CSE_INVOKE      0x40000000
#define FLAG_ASSUME_SLOW_LINK   0x20000000
#define FLAG_LOOPBACK_MERGE     0x10000000
#define FLAG_LOOPBACK_REPLACE   0x08000000
#define FLAG_ASSUME_USER_WQLFILTER_TRUE   0x04000000
#define FLAG_ASSUME_COMP_WQLFILTER_TRUE   0x02000000
#define FLAG_PLANNING_MODE                0x01000000
#define FLAG_NO_USER                      0x00000001
#define FLAG_NO_COMPUTER                  0x00000002
#define FLAG_FORCE_CREATENAMESPACE        0x00000004
#define RSOP_USER_ACCESS_DENIED         0x00000001
#define RSOP_COMPUTER_ACCESS_DENIED     0x00000002
#define RSOP_TEMPNAMESPACE_EXISTS        0x00000004
#endif
