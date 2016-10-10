/*+@@file@@----------------------------------------------------------------*//*!
 \file		WdsClientApi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 18:16:10 2016
 \date		Modified on Sun Sep  4 18:16:10 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __WDSCLIENTAPI_H__
#define __WDSCLIENTAPI_H__
#if __POCC__ >= 500
#pragma once
#endif
#define WDSCLIAPI WINAPI
typedef struct tagWDS_CLI_CRED
{
	PCWSTR pwszUserName,
	pwszDomain,
	pwszPassword;
} WDS_CLI_CRED, *PWDS_CLI_CRED, *LPWDS_CLI_CRED;
HRESULT WDSCLIAPI WdsCliClose(HANDLE Handle);
typedef VOID(WDSCLIAPI *PFN_WdsCliTraceFunction) (LPCWSTR pwszFormat, va_list Params);
HRESULT WDSCLIAPI WdsCliRegisterTrace(PFN_WdsCliTraceFunction pfn);
HRESULT WDSCLIAPI WdsCliFreeStringArray(PWSTR *ppwszArray, ULONG ulCount);
HRESULT WDSCLIAPI WdsCliFindFirstImage(HANDLE hSession, PHANDLE phFindHandle);
HRESULT WDSCLIAPI WdsCliFindNextImage(HANDLE Handle);
HRESULT WDSCLIAPI WdsCliGetEnumerationFlags(HANDLE Handle, PDWORD pdwFlags);
HRESULT WDSCLIAPI WdsCliGetImageHandleFromFindHandle(HANDLE FindHandle, PHANDLE phImageHandle);
HRESULT WDSCLIAPI WdsCliGetImageHandleFromTransferHandle(HANDLE hTransfer, PHANDLE phImageHandle);
enum
{
    WdsCliFlagEnumFilterVersion = 0x0001,
    WdsCliFlagEnumFilterFirmware = 0x0002, 
};
typedef enum _WDS_CLI_IMAGE_TYPE
{
    WDS_CLI_IMAGE_TYPE_UNKNOWN = 0,
    WDS_CLI_IMAGE_TYPE_WIM,
    WDS_CLI_IMAGE_TYPE_VHD
} WDS_CLI_IMAGE_TYPE, *PWDS_CLI_IMAGE_TYPE;
typedef enum _WDS_CLI_FIRMWARE_TYPE 
{
    WDS_CLI_FIRMWARE_UNKNOWN = 0,
    WDS_CLI_FIRMWARE_BIOS = 0x0001,
    WDS_CLI_FIRMWARE_EFI = 0x0002,
} WDS_CLI_FIRMWARE_TYPE, *PWDS_CLI_FIRMWARE_TYPE;
typedef enum _WDS_CLI_IMAGE_PARAM_TYPE
{
    WDS_CLI_IMAGE_PARAM_UNKNOWN = 0,
    WDS_CLI_IMAGE_PARAM_SPARSE_FILE,
    WDS_CLI_IMAGE_PARAM_SUPPORTED_FIRMWARES,
} WDS_CLI_IMAGE_PARAM_TYPE, *PWDS_CLI_IMAGE_PARAM_TYPE;
HRESULT WDSCLIAPI WdsCliCreateSession(PWSTR pwszServer, PWDS_CLI_CRED pCred, PHANDLE phSession);
HRESULT WDSCLIAPI WdsCliAuthorizeSession(HANDLE hSession, PWDS_CLI_CRED pCred);
HRESULT WDSCLIAPI WdsCliInitializeLog(HANDLE hSession, ULONG ulClientArchitecture, PWSTR pwszClientId, PWSTR pwszClientAddress);
HRESULT /*WDSCLIAPI*/ __cdecl WdsCliLog(HANDLE hSession, ULONG ulLogLevel, ULONG ulMessageCode, ...);
typedef enum
{
    WDS_LOG_TYPE_CLIENT_ERROR = 1,
    WDS_LOG_TYPE_CLIENT_STARTED,
    WDS_LOG_TYPE_CLIENT_FINISHED,
    WDS_LOG_TYPE_CLIENT_IMAGE_SELECTED,    
    WDS_LOG_TYPE_CLIENT_APPLY_STARTED,
    WDS_LOG_TYPE_CLIENT_APPLY_FINISHED,
    WDS_LOG_TYPE_CLIENT_GENERIC_MESSAGE,
    WDS_LOG_TYPE_CLIENT_UNATTEND_MODE,
    WDS_LOG_TYPE_CLIENT_TRANSFER_START,
    WDS_LOG_TYPE_CLIENT_TRANSFER_END,
    WDS_LOG_TYPE_CLIENT_TRANSFER_DOWNGRADE,
    WDS_LOG_TYPE_CLIENT_DOMAINJOINERROR,
    WDS_LOG_TYPE_CLIENT_POST_ACTIONS_START,
    WDS_LOG_TYPE_CLIENT_POST_ACTIONS_END,
    WDS_LOG_TYPE_CLIENT_APPLY_STARTED_2,
    WDS_LOG_TYPE_CLIENT_APPLY_FINISHED_2,
    WDS_LOG_TYPE_CLIENT_DOMAINJOINERROR_2,
    WDS_LOG_TYPE_CLIENT_DRIVER_PACKAGE_NOT_ACCESSIBLE,
    WDS_LOG_TYPE_CLIENT_OFFLINE_DRIVER_INJECTION_START,
    WDS_LOG_TYPE_CLIENT_OFFLINE_DRIVER_INJECTION_END,
    WDS_LOG_TYPE_CLIENT_OFFLINE_DRIVER_INJECTION_FAILURE,
    WDS_LOG_TYPE_CLIENT_IMAGE_SELECTED2,
    WDS_LOG_TYPE_CLIENT_MAX_CODE 
} eWDS_LOG_TYPE_CLIENT;
typedef enum
{
    WDS_LOG_LEVEL_DISABLED = 0,
    WDS_LOG_LEVEL_ERROR = 1,
    WDS_LOG_LEVEL_WARNING = 2,
    WDS_LOG_LEVEL_INFO = 3
} eWDS_LOG_LEVEL;
HRESULT WDSCLIAPI WdsCliGetImageName(HANDLE hIfh, PWSTR *ppwszValue);
HRESULT WDSCLIAPI WdsCliGetImageDescription(HANDLE hIfh, PWSTR *ppwszValue);
HRESULT WDSCLIAPI WdsCliGetImageType(HANDLE hIfh, PWDS_CLI_IMAGE_TYPE pImageType);
HRESULT WDSCLIAPI WdsCliGetImageFiles(HANDLE hIfh, LPWSTR **pppwszFiles, PDWORD pdwCount);
HRESULT WDSCLIAPI WdsCliGetImageLanguage(HANDLE hIfh, PWSTR *ppwszValue);
HRESULT WDSCLIAPI WdsCliGetImageLanguages(HANDLE hIfh, PTSTR **pppszValues, PDWORD pdwNumValues);
HRESULT WDSCLIAPI WdsCliGetImageVersion(HANDLE hIfh, PWSTR *ppwszValue);
HRESULT WDSCLIAPI WdsCliGetImagePath(HANDLE hIfh, PWSTR *ppwszValue);
HRESULT WDSCLIAPI WdsCliGetImageIndex(HANDLE hIfh, PDWORD pdwValue);
HRESULT WDSCLIAPI WdsCliGetImageArchitecture(HANDLE hIfh, PDWORD pdwValue);
HRESULT WDSCLIAPI WdsCliGetImageLastModifiedTime(HANDLE hIfh, PSYSTEMTIME *ppSysTimeValue);
HRESULT WDSCLIAPI WdsCliGetImageSize(HANDLE hIfh, PULONGLONG pullValue);
HRESULT WDSCLIAPI WdsCliGetImageHalName(HANDLE hIfh, PWSTR *ppwszValue);
HRESULT WDSCLIAPI WdsCliGetImageGroup(HANDLE hIfh, PWSTR *ppwszValue);
HRESULT WDSCLIAPI WdsCliGetImageNamespace(HANDLE hIfh, PWSTR *ppwszValue);
HRESULT WDSCLIAPI WdsCliGetImageParameter(HANDLE hIfh, WDS_CLI_IMAGE_PARAM_TYPE ParamType, PVOID pResponse, ULONG uResponseLen);
typedef VOID(WDSCLIAPI *PFN_WdsCliCallback) (DWORD dwMessageId, WPARAM wParam, LPARAM lParam, PVOID pvUserData);
typedef enum
{
    WDS_CLI_MSG_START = 0,
    WDS_CLI_MSG_COMPLETE,
    WDS_CLI_MSG_PROGRESS,
    WDS_CLI_MSG_TEXT,
} eWDS_CLI_MSG;
HRESULT WDSCLIAPI WdsCliGetTransferSize(HANDLE hIfh, PULONGLONG pullValue);
#define WDS_CLI_TRANSFER_ASYNCHRONOUS         0x00000001
#define WDS_CLI_NO_SPARSE_FILE                0x00000002
HRESULT WDSCLIAPI WdsCliTransferImage(HANDLE hImage, PWSTR pwszLocalPath, DWORD dwFlags, DWORD dwReserved, PFN_WdsCliCallback pfnWdsCliCallback, PVOID pvUserData, PHANDLE phTransfer);
HRESULT WDSCLIAPI WdsCliTransferFile(PCWSTR pwszServer, PCWSTR pwszNamespace, PCWSTR pwszRemoteFilePath, PCWSTR pwszLocalFilePath, DWORD dwFlags, DWORD dwReserved, PFN_WdsCliCallback pfnWdsCliCallback, PVOID pvUserData, PHANDLE phTransfer);
HRESULT WDSCLIAPI WdsCliCancelTransfer(HANDLE hTransfer);
HRESULT WDSCLIAPI WdsCliWaitForTransfer(HANDLE hTransfer);
HRESULT WDSCLIAPI WdsCliObtainDriverPackages(HANDLE hImage, PWSTR *ppwszServerName, PWSTR **pppwszDriverPackages, ULONG *pulCount);
#endif
