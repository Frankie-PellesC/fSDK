/*+@@file@@----------------------------------------------------------------*//*!
 \file		iepmapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 20:33:54 2016
 \date		Modified on Sat Jul 16 20:33:54 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _IEPMAPI_
#define _IEPMAPI_
#if __POCC__ >= 500
#pragma once
#endif
#define IEGetWriteableHKCU      IEGetWriteableLowHKCU
typedef enum
{
    IELAUNCHOPTION_SCRIPTDEBUG = 0x00000001,
} IELAUNCHOPTION_FLAGS;
typedef struct _IELAUNCHURLINFO
{
    DWORD cbSize;
    DWORD dwCreationFlags;
    DWORD dwLaunchOptionFlags;
} IELAUNCHURLINFO, *LPIELAUNCHURLINFO;
STDAPI IESaveFile(HANDLE hState, LPCWSTR lpwstrSourceFile);
STDAPI IECancelSaveFile(HANDLE hState);
STDAPI IEShowSaveFileDialog(HWND hwnd, LPCWSTR lpwstrInitialFileName, LPCWSTR lpwstrInitialDir, LPCWSTR lpwstrFilter, LPCWSTR lpwstrDefExt, DWORD dwFilterIndex, DWORD dwFlags, LPWSTR *lppwstrDestinationFilePath, HANDLE *phState);
STDAPI IEGetWriteableLowHKCU(HKEY *pHKey);
STDAPI IEGetWriteableFolderPath(REFGUID clsidFolderID, LPWSTR *lppwstrPath);
STDAPI IEIsProtectedModeProcess(BOOL *pbResult);
STDAPI IEIsProtectedModeURL(LPCWSTR lpwstrUrl);
STDAPI IELaunchURL(LPCWSTR lpwstrUrl, PROCESS_INFORMATION *lpProcInfo, VOID *lpInfo);
STDAPI IERefreshElevationPolicy();
STDAPI IEGetProtectedModeCookie(LPCWSTR lpszURL, LPCWSTR lpszCookieName, LPWSTR lpszCookieData, DWORD *pcchCookieData, DWORD dwFlags);
STDAPI IESetProtectedModeCookie(LPCWSTR lpszURL, LPCWSTR lpszCookieName, LPCWSTR lpszCookieData, DWORD dwFlags);
STDAPI IERegisterWritableRegistryKey(GUID guid, LPCWSTR lpSubkey, BOOL fSubkeyAllowed);
STDAPI IERegisterWritableRegistryValue(GUID guid, LPCWSTR lpPath, LPCWSTR lpValueName, DWORD dwType, const BYTE *lpData, DWORD cbMaxData);
STDAPI IEUnregisterWritableRegistry(GUID guid);
STDAPI IERegCreateKeyEx(LPCWSTR lpSubKey, DWORD Reserved, LPWSTR lpClass, DWORD dwOptions, REGSAM samDesired, LPSECURITY_ATTRIBUTES lpSecurityAttributes, PHKEY phkResult, LPDWORD lpdwDisposition);
STDAPI IERegSetValueEx(LPCWSTR lpSubKey, LPCWSTR lpValueName, DWORD Reserved, DWORD dwType, const BYTE *lpData, DWORD cbData);
HANDLE IECreateFile(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
BOOL   IEDeleteFile(LPCWSTR lpFileName);
BOOL   IERemoveDirectory(LPCWSTR lpPathName);
BOOL   IEMoveFileEx(LPCWSTR lpExistingFileName, LPCWSTR lpNewFileName, DWORD dwFlags);
BOOL   IECreateDirectory(LPCWSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
BOOL   IEGetFileAttributesEx(LPCWSTR lpFileName, GET_FILEEX_INFO_LEVELS fInfoLevelId, LPVOID lpFileInformation);
HANDLE IEFindFirstFile(LPCWSTR lpFileName, LPWIN32_FIND_DATA lpFindFileData);
#endif


