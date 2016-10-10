/*+@@file@@----------------------------------------------------------------*//*!
 \file		winsafer.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 22:36:41 2016
 \date		Modified on Sun Sep  4 22:36:41 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WINSAFER_H
#define _WINSAFER_H
#if __POCC__ >= 500
#pragma once
#endif
#include <guiddef.h>
#include <wincrypt.h>
DECLARE_HANDLE(SAFER_LEVEL_HANDLE);
#define SAFER_SCOPEID_MACHINE  1
#define SAFER_SCOPEID_USER     2
#define SAFER_LEVELID_FULLYTRUSTED 0x40000
#define SAFER_LEVELID_NORMALUSER   0x20000
#define SAFER_LEVELID_CONSTRAINED  0x10000
#define SAFER_LEVELID_UNTRUSTED    0x01000
#define SAFER_LEVELID_DISALLOWED   0x00000
#define SAFER_LEVEL_OPEN   1
#define SAFER_MAX_FRIENDLYNAME_SIZE 256
#define SAFER_MAX_DESCRIPTION_SIZE  256
#define SAFER_MAX_HASH_SIZE         64
#define SAFER_TOKEN_NULL_IF_EQUAL   0x00000001
#define SAFER_TOKEN_COMPARE_ONLY    0x00000002
#define SAFER_TOKEN_MAKE_INERT      0x00000004
#define SAFER_TOKEN_WANT_FLAGS      0x00000008
#define SAFER_CRITERIA_IMAGEPATH    0x00001
#define SAFER_CRITERIA_NOSIGNEDHASH 0x00002
#define SAFER_CRITERIA_IMAGEHASH    0x00004
#define SAFER_CRITERIA_AUTHENTICODE 0x00008
#define SAFER_CRITERIA_URLZONE      0x00010
#define SAFER_CRITERIA_IMAGEPATH_NT 0x01000
#include <pshpack8.h>
typedef struct _SAFER_CODE_PROPERTIES
{
    DWORD cbSize;
    DWORD dwCheckFlags;
    LPCWSTR ImagePath;
    HANDLE hImageFileHandle;
    DWORD UrlZoneId;
    BYTE ImageHash[SAFER_MAX_HASH_SIZE];
    DWORD dwImageHashSize;
    LARGE_INTEGER ImageSize;
    ALG_ID HashAlgorithm;
    LPBYTE pByteBlock;
    HWND hWndParent;
    DWORD dwWVTUIChoice;
} SAFER_CODE_PROPERTIES, *PSAFER_CODE_PROPERTIES;
#include <poppack.h>
#define SAFER_POLICY_JOBID_MASK                  0xFF000000
#define SAFER_POLICY_JOBID_CONSTRAINED           0x04000000
#define SAFER_POLICY_JOBID_UNTRUSTED             0x03000000
#define SAFER_POLICY_ONLY_EXES                   0x00010000
#define SAFER_POLICY_SANDBOX_INERT               0x00020000
#define SAFER_POLICY_HASH_DUPLICATE              0x00040000
#define SAFER_POLICY_ONLY_AUDIT                  0x00001000
#define SAFER_POLICY_BLOCK_CLIENT_UI             0x00002000
#define SAFER_POLICY_UIFLAGS_MASK                0x000000FF
#define SAFER_POLICY_UIFLAGS_INFORMATION_PROMPT  0x00000001
#define SAFER_POLICY_UIFLAGS_OPTION_PROMPT       0x00000002
#define SAFER_POLICY_UIFLAGS_HIDDEN              0x00000004
typedef enum _SAFER_POLICY_INFO_CLASS
{
    SaferPolicyLevelList = 1,
    SaferPolicyEnableTransparentEnforcement,
    SaferPolicyDefaultLevel,
    SaferPolicyEvaluateUserScope,
    SaferPolicyScopeFlags,
    SaferPolicyDefaultLevelFlags,
    SaferPolicyAuthenticodeEnabled
} SAFER_POLICY_INFO_CLASS;
typedef enum _SAFER_OBJECT_INFO_CLASS
{
    SaferObjectLevelId = 1,
    SaferObjectScopeId,
    SaferObjectFriendlyName,
    SaferObjectDescription,
    SaferObjectBuiltin,
    SaferObjectDisallowed,
    SaferObjectDisableMaxPrivilege,
    SaferObjectInvertDeletedPrivileges,
    SaferObjectDeletedPrivileges,
    SaferObjectDefaultOwner,
    SaferObjectSidsToDisable,
    SaferObjectRestrictedSidsInverted,
    SaferObjectRestrictedSidsAdded,
    SaferObjectAllIdentificationGuids,
    SaferObjectSingleIdentification,
    SaferObjectExtendedError
} SAFER_OBJECT_INFO_CLASS;
#include <pshpack8.h>
typedef enum _SAFER_IDENTIFICATION_TYPES
{
    SaferIdentityDefault,
    SaferIdentityTypeImageName = 1,
    SaferIdentityTypeImageHash,
    SaferIdentityTypeUrlZone,
    SaferIdentityTypeCertificate
} SAFER_IDENTIFICATION_TYPES;
typedef struct _SAFER_IDENTIFICATION_HEADER
{
    SAFER_IDENTIFICATION_TYPES dwIdentificationType;
    DWORD cbStructSize;
    GUID IdentificationGuid;
    FILETIME lastModified;
} SAFER_IDENTIFICATION_HEADER, *PSAFER_IDENTIFICATION_HEADER;
typedef struct _SAFER_PATHNAME_IDENTIFICATION
{
    SAFER_IDENTIFICATION_HEADER header;
    WCHAR Description[SAFER_MAX_DESCRIPTION_SIZE];
    PWCHAR ImageName;
    DWORD dwSaferFlags;
} SAFER_PATHNAME_IDENTIFICATION, *PSAFER_PATHNAME_IDENTIFICATION;
typedef struct _SAFER_HASH_IDENTIFICATION
{
    SAFER_IDENTIFICATION_HEADER header;
    WCHAR Description[SAFER_MAX_DESCRIPTION_SIZE];
    WCHAR FriendlyName[SAFER_MAX_FRIENDLYNAME_SIZE];
    DWORD HashSize;
    BYTE ImageHash[SAFER_MAX_HASH_SIZE];
    ALG_ID HashAlgorithm;
    LARGE_INTEGER ImageSize;
    DWORD dwSaferFlags;
} SAFER_HASH_IDENTIFICATION, *PSAFER_HASH_IDENTIFICATION;
typedef struct _SAFER_HASH_IDENTIFICATION2
{
    SAFER_HASH_IDENTIFICATION hashIdentification;
    DWORD HashSize;
    BYTE ImageHash[SAFER_MAX_HASH_SIZE];
    ALG_ID HashAlgorithm;
} SAFER_HASH_IDENTIFICATION2, *PSAFER_HASH_IDENTIFICATION2;
typedef struct _SAFER_URLZONE_IDENTIFICATION
{
    SAFER_IDENTIFICATION_HEADER header;
    DWORD UrlZoneId;
    DWORD dwSaferFlags;
} SAFER_URLZONE_IDENTIFICATION, *PSAFER_URLZONE_IDENTIFICATION;
#include <poppack.h>
WINADVAPI BOOL WINAPI SaferGetPolicyInformation(DWORD dwScopeId, SAFER_POLICY_INFO_CLASS SaferPolicyInfoClass, DWORD InfoBufferSize, PVOID InfoBuffer, PDWORD InfoBufferRetSize, LPVOID lpReserved);
WINADVAPI BOOL WINAPI SaferSetPolicyInformation(DWORD dwScopeId, SAFER_POLICY_INFO_CLASS SaferPolicyInfoClass, DWORD InfoBufferSize, PVOID InfoBuffer, LPVOID lpReserved);
WINADVAPI BOOL WINAPI SaferCreateLevel(DWORD dwScopeId, DWORD dwLevelId, DWORD OpenFlags, SAFER_LEVEL_HANDLE *pLevelHandle, LPVOID lpReserved);
WINADVAPI BOOL WINAPI SaferCloseLevel(SAFER_LEVEL_HANDLE hLevelHandle);
WINADVAPI BOOL WINAPI SaferIdentifyLevel(DWORD dwNumProperties, PSAFER_CODE_PROPERTIES pCodeProperties, SAFER_LEVEL_HANDLE *pLevelHandle, LPVOID lpReserved);
WINADVAPI BOOL WINAPI SaferComputeTokenFromLevel(SAFER_LEVEL_HANDLE LevelHandle, HANDLE InAccessToken, PHANDLE OutAccessToken, DWORD dwFlags, LPVOID lpReserved);
WINADVAPI BOOL WINAPI SaferGetLevelInformation(SAFER_LEVEL_HANDLE LevelHandle, SAFER_OBJECT_INFO_CLASS dwInfoType, LPVOID lpQueryBuffer, DWORD dwInBufferSize, LPDWORD lpdwOutBufferSize);
WINADVAPI BOOL WINAPI SaferSetLevelInformation(SAFER_LEVEL_HANDLE LevelHandle, SAFER_OBJECT_INFO_CLASS dwInfoType, LPVOID lpQueryBuffer, DWORD dwInBufferSize);
WINADVAPI BOOL WINAPI SaferRecordEventLogEntry(SAFER_LEVEL_HANDLE hLevel, LPCWSTR szTargetPath, LPVOID lpReserved);
WINADVAPI BOOL WINAPI SaferiIsExecutableFileType(LPCWSTR szFullPathname, BOOLEAN bFromShellExecute);
#define SRP_POLICY_EXE      L"EXE"
#define SRP_POLICY_DLL      L"DLL"
#define SRP_POLICY_MSI      L"MSI"
#define SRP_POLICY_SCRIPT   L"SCRIPT"
#define SRP_POLICY_SHELL    L"SHELL"
#define SRP_POLICY_NOV2     L"IGNORESRPV2"
#endif
