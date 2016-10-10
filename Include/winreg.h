/*+@@file@@----------------------------------------------------------------*//*!
 \file		winreg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 01:14:39 2016
 \date		Modified on Mon Jun 27 01:14:39 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WINREG_
#define _WINREG_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef WINVER
#define WINVER 0x0500
#endif
#define RRF_RT_REG_NONE        0x00000001
#define RRF_RT_REG_SZ          0x00000002
#define RRF_RT_REG_EXPAND_SZ   0x00000004
#define RRF_RT_REG_BINARY      0x00000008
#define RRF_RT_REG_DWORD       0x00000010
#define RRF_RT_REG_MULTI_SZ    0x00000020
#define RRF_RT_REG_QWORD       0x00000040
#define RRF_RT_DWORD           (RRF_RT_REG_BINARY | RRF_RT_REG_DWORD)
#define RRF_RT_QWORD           (RRF_RT_REG_BINARY | RRF_RT_REG_QWORD)
#define RRF_RT_ANY             0x0000ffff
#define RRF_NOEXPAND           0x10000000
#define RRF_ZEROONFAILURE      0x20000000
#define REG_PROCESS_APPKEY          0x00000001
#define REG_MUI_STRING_TRUNCATE     0x00000001
typedef ACCESS_MASK REGSAM;
#define HKEY_CLASSES_ROOT                   (( HKEY ) (ULONG_PTR)((LONG)0x80000000) )
#define HKEY_CURRENT_USER                   (( HKEY ) (ULONG_PTR)((LONG)0x80000001) )
#define HKEY_LOCAL_MACHINE                  (( HKEY ) (ULONG_PTR)((LONG)0x80000002) )
#define HKEY_USERS                          (( HKEY ) (ULONG_PTR)((LONG)0x80000003) )
#define HKEY_PERFORMANCE_DATA               (( HKEY ) (ULONG_PTR)((LONG)0x80000004) )
#define HKEY_PERFORMANCE_TEXT               (( HKEY ) (ULONG_PTR)((LONG)0x80000050) )
#define HKEY_PERFORMANCE_NLSTEXT            (( HKEY ) (ULONG_PTR)((LONG)0x80000060) )
#if(WINVER >= 0x0400)
#define HKEY_CURRENT_CONFIG                 (( HKEY ) (ULONG_PTR)((LONG)0x80000005) )
#define HKEY_DYN_DATA                       (( HKEY ) (ULONG_PTR)((LONG)0x80000006) )
#define HKEY_CURRENT_USER_LOCAL_SETTINGS    (( HKEY ) (ULONG_PTR)((LONG)0x80000007) )
#define REG_SECURE_CONNECTION   1
#ifndef _PROVIDER_STRUCTS_DEFINED
#define _PROVIDER_STRUCTS_DEFINED
#define PROVIDER_KEEPS_VALUE_LENGTH 0x1
struct val_context {
	int valuelen;
	LPVOID value_context;
	LPVOID val_buff_ptr;
};
typedef struct val_context FAR *PVALCONTEXT;
typedef struct pvalueA {
	LPSTR pv_valuename;
	int pv_valuelen;
	LPVOID pv_value_context;
	DWORD pv_type;
} PVALUEA, FAR * PPVALUEA;
typedef struct pvalueW {
	LPWSTR pv_valuename;
	int pv_valuelen;
	LPVOID pv_value_context;
	DWORD pv_type;
} PVALUEW, FAR * PPVALUEW;
#ifdef UNICODE
typedef PVALUEW PVALUE;
typedef PPVALUEW PPVALUE;
#else
typedef PVALUEA PVALUE;
typedef PPVALUEA PPVALUE;
#endif
typedef
DWORD __cdecl QUERYHANDLER(LPVOID keycontext, PVALCONTEXT val_list, DWORD num_vals, LPVOID outputbuffer, DWORD FAR *total_outlen, DWORD input_blen);
typedef QUERYHANDLER FAR *PQUERYHANDLER;
typedef struct provider_info {
	PQUERYHANDLER pi_R0_1val;
	PQUERYHANDLER pi_R0_allvals;
	PQUERYHANDLER pi_R3_1val;
	PQUERYHANDLER pi_R3_allvals;
	DWORD pi_flags;
	LPVOID pi_key_context;
} REG_PROVIDER;
typedef struct provider_info FAR *PPROVIDER;
typedef struct value_entA {
	LPSTR ve_valuename;
	DWORD ve_valuelen;
	DWORD_PTR ve_valueptr;
	DWORD ve_type;
} VALENTA, FAR * PVALENTA;
typedef struct value_entW {
	LPWSTR ve_valuename;
	DWORD ve_valuelen;
	DWORD_PTR ve_valueptr;
	DWORD ve_type;
} VALENTW, FAR * PVALENTW;
#ifdef UNICODE
typedef VALENTW VALENT;
typedef PVALENTW PVALENT;
#else
typedef VALENTA VALENT;
typedef PVALENTA PVALENT;
#endif
#endif
#endif
#define WIN31_CLASS                 NULL
typedef LONG LSTATUS;
WINADVAPI LSTATUS APIENTRY RegCloseKey(HKEY hKey);
WINADVAPI LSTATUS APIENTRY RegOverridePredefKey(HKEY hKey, HKEY hNewHKey);
WINADVAPI LSTATUS APIENTRY RegOpenUserClassesRoot(HANDLE hToken, DWORD dwOptions, REGSAM samDesired, PHKEY phkResult);
WINADVAPI LSTATUS APIENTRY RegOpenCurrentUser(REGSAM samDesired, PHKEY phkResult);
WINADVAPI LSTATUS APIENTRY RegDisablePredefinedCache(VOID);
WINADVAPI LSTATUS APIENTRY RegDisablePredefinedCacheEx(VOID);
WINADVAPI LSTATUS APIENTRY RegConnectRegistryA(LPCSTR lpMachineName, HKEY hKey, PHKEY phkResult);
WINADVAPI LSTATUS APIENTRY RegConnectRegistryW(LPCWSTR lpMachineName, HKEY hKey, PHKEY phkResult);
#ifdef UNICODE
#define RegConnectRegistry  RegConnectRegistryW
#else
#define RegConnectRegistry  RegConnectRegistryA
#endif
WINADVAPI LSTATUS APIENTRY RegConnectRegistryExA(LPCSTR lpMachineName, HKEY hKey, ULONG Flags, PHKEY phkResult);
WINADVAPI LSTATUS APIENTRY RegConnectRegistryExW(LPCWSTR lpMachineName, HKEY hKey, ULONG Flags, PHKEY phkResult);
#ifdef UNICODE
#define RegConnectRegistryEx  RegConnectRegistryExW
#else
#define RegConnectRegistryEx  RegConnectRegistryExA
#endif
WINADVAPI LSTATUS APIENTRY RegCreateKeyA(HKEY hKey, LPCSTR lpSubKey, PHKEY phkResult);
WINADVAPI LSTATUS APIENTRY RegCreateKeyW(HKEY hKey, LPCWSTR lpSubKey, PHKEY phkResult);
#ifdef UNICODE
#define RegCreateKey  RegCreateKeyW
#else
#define RegCreateKey  RegCreateKeyA
#endif
WINADVAPI LSTATUS APIENTRY RegCreateKeyExA(HKEY hKey, LPCSTR lpSubKey, DWORD Reserved, LPSTR lpClass, DWORD dwOptions, REGSAM samDesired, CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes, PHKEY phkResult, LPDWORD lpdwDisposition);
WINADVAPI LSTATUS APIENTRY RegCreateKeyExW(HKEY hKey, LPCWSTR lpSubKey, DWORD Reserved, LPWSTR lpClass, DWORD dwOptions, REGSAM samDesired, CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes, PHKEY phkResult, LPDWORD lpdwDisposition);
#ifdef UNICODE
#define RegCreateKeyEx  RegCreateKeyExW
#else
#define RegCreateKeyEx  RegCreateKeyExA
#endif
WINADVAPI LSTATUS APIENTRY RegCreateKeyTransactedA(HKEY hKey, LPCSTR lpSubKey, DWORD Reserved, LPSTR lpClass, DWORD dwOptions, REGSAM samDesired, CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes, PHKEY phkResult, LPDWORD lpdwDisposition, HANDLE hTransaction, PVOID pExtendedParemeter);
WINADVAPI LSTATUS APIENTRY RegCreateKeyTransactedW(HKEY hKey, LPCWSTR lpSubKey, DWORD Reserved, LPWSTR lpClass, DWORD dwOptions, REGSAM samDesired, CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes, PHKEY phkResult, LPDWORD lpdwDisposition, HANDLE hTransaction, PVOID pExtendedParemeter);
#ifdef UNICODE
#define RegCreateKeyTransacted  RegCreateKeyTransactedW
#else
#define RegCreateKeyTransacted  RegCreateKeyTransactedA
#endif
WINADVAPI LSTATUS APIENTRY RegDeleteKeyA(HKEY hKey, LPCSTR lpSubKey);
WINADVAPI LSTATUS APIENTRY RegDeleteKeyW(HKEY hKey, LPCWSTR lpSubKey);
#ifdef UNICODE
#define RegDeleteKey  RegDeleteKeyW
#else
#define RegDeleteKey  RegDeleteKeyA
#endif
WINADVAPI LSTATUS APIENTRY RegDeleteKeyExA(HKEY hKey, LPCSTR lpSubKey, REGSAM samDesired, DWORD Reserved);
WINADVAPI LSTATUS APIENTRY RegDeleteKeyExW(HKEY hKey, LPCWSTR lpSubKey, REGSAM samDesired, DWORD Reserved);
#ifdef UNICODE
#define RegDeleteKeyEx  RegDeleteKeyExW
#else
#define RegDeleteKeyEx  RegDeleteKeyExA
#endif
WINADVAPI LSTATUS APIENTRY RegDeleteKeyTransactedA(HKEY hKey, LPCSTR lpSubKey, REGSAM samDesired, DWORD Reserved, HANDLE hTransaction, PVOID pExtendedParameter);
WINADVAPI LSTATUS APIENTRY RegDeleteKeyTransactedW(HKEY hKey, LPCWSTR lpSubKey, REGSAM samDesired, DWORD Reserved, HANDLE hTransaction, PVOID pExtendedParameter);
#ifdef UNICODE
#define RegDeleteKeyTransacted  RegDeleteKeyTransactedW
#else
#define RegDeleteKeyTransacted  RegDeleteKeyTransactedA
#endif
WINADVAPI LONG APIENTRY RegDisableReflectionKey(HKEY hBase);
WINADVAPI LONG APIENTRY RegEnableReflectionKey(HKEY hBase);
WINADVAPI LONG APIENTRY RegQueryReflectionKey(HKEY hBase, BOOL *bIsReflectionDisabled);

WINADVAPI LSTATUS APIENTRY RegDeleteValueA(HKEY hKey, LPCSTR lpValueName);
WINADVAPI LSTATUS APIENTRY RegDeleteValueW(HKEY hKey, LPCWSTR lpValueName);
#ifdef UNICODE
#define RegDeleteValue  RegDeleteValueW
#else
#define RegDeleteValue  RegDeleteValueA
#endif
WINADVAPI LSTATUS APIENTRY RegEnumKeyA(HKEY hKey, DWORD dwIndex, LPSTR lpName, DWORD cchName);
WINADVAPI LSTATUS APIENTRY RegEnumKeyW(HKEY hKey, DWORD dwIndex, LPWSTR lpName, DWORD cchName);
#ifdef UNICODE
#define RegEnumKey  RegEnumKeyW
#else
#define RegEnumKey  RegEnumKeyA
#endif
WINADVAPI LSTATUS APIENTRY RegEnumKeyExA(HKEY hKey, DWORD dwIndex, LPSTR lpName, LPDWORD lpcchName, LPDWORD lpReserved, LPSTR lpClass, LPDWORD lpcchClass, PFILETIME lpftLastWriteTime);
WINADVAPI LSTATUS APIENTRY RegEnumKeyExW(HKEY hKey, DWORD dwIndex, LPWSTR lpName, LPDWORD lpcchName, LPDWORD lpReserved, LPWSTR lpClass, LPDWORD lpcchClass, PFILETIME lpftLastWriteTime);
#ifdef UNICODE
#define RegEnumKeyEx  RegEnumKeyExW
#else
#define RegEnumKeyEx  RegEnumKeyExA
#endif
WINADVAPI LSTATUS APIENTRY RegEnumValueA(HKEY hKey, DWORD dwIndex, LPSTR lpValueName, LPDWORD lpcchValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData);
WINADVAPI LSTATUS APIENTRY RegEnumValueW(HKEY hKey, DWORD dwIndex, LPWSTR lpValueName, LPDWORD lpcchValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData);
#ifdef UNICODE
#define RegEnumValue  RegEnumValueW
#else
#define RegEnumValue  RegEnumValueA
#endif
WINADVAPI LSTATUS APIENTRY RegFlushKey(HKEY hKey);
WINADVAPI LSTATUS APIENTRY RegGetKeySecurity(HKEY hKey, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor, LPDWORD lpcbSecurityDescriptor);
WINADVAPI LSTATUS APIENTRY RegLoadKeyA(HKEY hKey, LPCSTR lpSubKey, LPCSTR lpFile);
WINADVAPI LSTATUS APIENTRY RegLoadKeyW(HKEY hKey, LPCWSTR lpSubKey, LPCWSTR lpFile);
#ifdef UNICODE
#define RegLoadKey  RegLoadKeyW
#else
#define RegLoadKey  RegLoadKeyA
#endif
WINADVAPI LSTATUS APIENTRY RegNotifyChangeKeyValue(HKEY hKey, BOOL bWatchSubtree, DWORD dwNotifyFilter, HANDLE hEvent, BOOL fAsynchronous);
WINADVAPI LSTATUS APIENTRY RegOpenKeyA(HKEY hKey, LPCSTR lpSubKey, PHKEY phkResult);
WINADVAPI LSTATUS APIENTRY RegOpenKeyW(HKEY hKey, LPCWSTR lpSubKey, PHKEY phkResult);
#ifdef UNICODE
#define RegOpenKey  RegOpenKeyW
#else
#define RegOpenKey  RegOpenKeyA
#endif
WINADVAPI LSTATUS APIENTRY RegOpenKeyExA(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult);
WINADVAPI LSTATUS APIENTRY RegOpenKeyExW(HKEY hKey, LPCWSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult);
#ifdef UNICODE
#define RegOpenKeyEx  RegOpenKeyExW
#else
#define RegOpenKeyEx  RegOpenKeyExA
#endif
WINADVAPI LSTATUS APIENTRY RegOpenKeyTransactedA(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult, HANDLE hTransaction, PVOID pExtendedParemeter);
WINADVAPI LSTATUS APIENTRY RegOpenKeyTransactedW(HKEY hKey, LPCWSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult, HANDLE hTransaction, PVOID pExtendedParemeter);
#ifdef UNICODE
#define RegOpenKeyTransacted  RegOpenKeyTransactedW
#else
#define RegOpenKeyTransacted  RegOpenKeyTransactedA
#endif
WINADVAPI LSTATUS APIENTRY RegQueryInfoKeyA(HKEY hKey, LPSTR lpClass, LPDWORD lpcchClass, LPDWORD lpReserved, LPDWORD lpcSubKeys, LPDWORD lpcbMaxSubKeyLen, LPDWORD lpcbMaxClassLen, LPDWORD lpcValues, LPDWORD lpcbMaxValueNameLen, LPDWORD lpcbMaxValueLen, LPDWORD lpcbSecurityDescriptor, PFILETIME lpftLastWriteTime);
WINADVAPI LSTATUS APIENTRY RegQueryInfoKeyW(HKEY hKey, LPWSTR lpClass, LPDWORD lpcchClass, LPDWORD lpReserved, LPDWORD lpcSubKeys, LPDWORD lpcbMaxSubKeyLen, LPDWORD lpcbMaxClassLen, LPDWORD lpcValues, LPDWORD lpcbMaxValueNameLen, LPDWORD lpcbMaxValueLen, LPDWORD lpcbSecurityDescriptor, PFILETIME lpftLastWriteTime);
#ifdef UNICODE
#define RegQueryInfoKey  RegQueryInfoKeyW
#else
#define RegQueryInfoKey  RegQueryInfoKeyA
#endif
WINADVAPI LSTATUS APIENTRY RegQueryValueA(HKEY hKey, LPCSTR lpSubKey, LPSTR lpData, PLONG lpcbData);
WINADVAPI LSTATUS APIENTRY RegQueryValueW(HKEY hKey, LPCWSTR lpSubKey, LPWSTR lpData, PLONG lpcbData);
#ifdef UNICODE
#define RegQueryValue  RegQueryValueW
#else
#define RegQueryValue  RegQueryValueA
#endif
#if(WINVER >= 0x0400)
WINADVAPI LSTATUS APIENTRY RegQueryMultipleValuesA(HKEY hKey, PVALENTA val_list, DWORD num_vals, LPSTR lpValueBuf, LPDWORD ldwTotsize);
WINADVAPI LSTATUS APIENTRY RegQueryMultipleValuesW(HKEY hKey, PVALENTW val_list, DWORD num_vals, LPWSTR lpValueBuf, LPDWORD ldwTotsize);
#ifdef UNICODE
#define RegQueryMultipleValues  RegQueryMultipleValuesW
#else
#define RegQueryMultipleValues  RegQueryMultipleValuesA
#endif
#endif
WINADVAPI LSTATUS APIENTRY RegQueryValueExA(HKEY hKey, LPCSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData);
WINADVAPI LSTATUS APIENTRY RegQueryValueExW(HKEY hKey, LPCWSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData);
#ifdef UNICODE
#define RegQueryValueEx  RegQueryValueExW
#else
#define RegQueryValueEx  RegQueryValueExA
#endif
WINADVAPI LSTATUS APIENTRY RegReplaceKeyA(HKEY hKey, LPCSTR lpSubKey, LPCSTR lpNewFile, LPCSTR lpOldFile);
WINADVAPI LSTATUS APIENTRY RegReplaceKeyW(HKEY hKey, LPCWSTR lpSubKey, LPCWSTR lpNewFile, LPCWSTR lpOldFile);
#ifdef UNICODE
#define RegReplaceKey  RegReplaceKeyW
#else
#define RegReplaceKey  RegReplaceKeyA
#endif
WINADVAPI LSTATUS APIENTRY RegRestoreKeyA(HKEY hKey, LPCSTR lpFile, DWORD dwFlags);
WINADVAPI LSTATUS APIENTRY RegRestoreKeyW(HKEY hKey, LPCWSTR lpFile, DWORD dwFlags);
#ifdef UNICODE
#define RegRestoreKey  RegRestoreKeyW
#else
#define RegRestoreKey  RegRestoreKeyA
#endif
#if(WINVER >= 0x0600)
WINADVAPI LSTATUS APIENTRY RegRenameKey(HKEY hKey, LPCWSTR lpSubKeyName, LPCWSTR lpNewKeyName);
#endif
WINADVAPI LSTATUS APIENTRY RegSaveKeyA(HKEY hKey, LPCSTR lpFile, CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes);
WINADVAPI LSTATUS APIENTRY RegSaveKeyW(HKEY hKey, LPCWSTR lpFile, CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes);
#ifdef UNICODE
#define RegSaveKey  RegSaveKeyW
#else
#define RegSaveKey  RegSaveKeyA
#endif
WINADVAPI LSTATUS APIENTRY RegSetKeySecurity(HKEY hKey, SECURITY_INFORMATION SecurityInformation, PSECURITY_DESCRIPTOR pSecurityDescriptor);
WINADVAPI LSTATUS APIENTRY RegSetValueA(HKEY hKey, LPCSTR lpSubKey, DWORD dwType, LPCSTR lpData, DWORD cbData);
WINADVAPI LSTATUS APIENTRY RegSetValueW(HKEY hKey, LPCWSTR lpSubKey, DWORD dwType, LPCWSTR lpData, DWORD cbData);
#ifdef UNICODE
#define RegSetValue  RegSetValueW
#else
#define RegSetValue  RegSetValueA
#endif
WINADVAPI LSTATUS APIENTRY RegSetValueExA(HKEY hKey, LPCSTR lpValueName, DWORD Reserved, DWORD dwType, CONST BYTE *lpData, DWORD cbData);
WINADVAPI LSTATUS APIENTRY RegSetValueExW(HKEY hKey, LPCWSTR lpValueName, DWORD Reserved, DWORD dwType, CONST BYTE *lpData, DWORD cbData);
#ifdef UNICODE
#define RegSetValueEx  RegSetValueExW
#else
#define RegSetValueEx  RegSetValueExA
#endif
WINADVAPI LSTATUS APIENTRY RegUnLoadKeyA(HKEY hKey, LPCSTR lpSubKey);
WINADVAPI LSTATUS APIENTRY RegUnLoadKeyW(HKEY hKey, LPCWSTR lpSubKey);
#ifdef UNICODE
#define RegUnLoadKey  RegUnLoadKeyW
#else
#define RegUnLoadKey  RegUnLoadKeyA
#endif
#if _WIN32_WINNT >= 0x0600
WINADVAPI LSTATUS APIENTRY RegDeleteKeyValueA(HKEY hKey, LPCSTR lpSubKey, LPCSTR lpValueName);
WINADVAPI LSTATUS APIENTRY RegDeleteKeyValueW(HKEY hKey, LPCWSTR lpSubKey, LPCWSTR lpValueName);
#ifdef UNICODE
#define RegDeleteKeyValue  RegDeleteKeyValueW
#else
#define RegDeleteKeyValue  RegDeleteKeyValueA
#endif
WINADVAPI LSTATUS APIENTRY RegSetKeyValueA(HKEY hKey, LPCSTR lpSubKey, LPCSTR lpValueName, DWORD dwType, LPCVOID lpData, DWORD cbData);
WINADVAPI LSTATUS APIENTRY RegSetKeyValueW(HKEY hKey, LPCWSTR lpSubKey, LPCWSTR lpValueName, DWORD dwType, LPCVOID lpData, DWORD cbData);
#ifdef UNICODE
#define RegSetKeyValue  RegSetKeyValueW
#else
#define RegSetKeyValue  RegSetKeyValueA
#endif
WINADVAPI LSTATUS APIENTRY RegDeleteTreeA(HKEY hKey, LPCSTR lpSubKey);
WINADVAPI LSTATUS APIENTRY RegDeleteTreeW(HKEY hKey, LPCWSTR lpSubKey);
#ifdef UNICODE
#define RegDeleteTree  RegDeleteTreeW
#else
#define RegDeleteTree  RegDeleteTreeA
#endif
WINADVAPI LSTATUS APIENTRY RegCopyTreeA(HKEY hKeySrc, LPCSTR lpSubKey, HKEY hKeyDest);
WINADVAPI LSTATUS APIENTRY RegCopyTreeW(HKEY hKeySrc, LPCWSTR lpSubKey, HKEY hKeyDest);
#ifdef UNICODE
#define RegCopyTree  RegCopyTreeW
#else
#define RegCopyTree  RegCopyTreeA
#endif
WINADVAPI LSTATUS APIENTRY RegGetValueA(HKEY hkey, LPCSTR lpSubKey, LPCSTR lpValue, DWORD dwFlags, LPDWORD pdwType, PVOID pvData, LPDWORD pcbData);
WINADVAPI LSTATUS APIENTRY RegGetValueW(HKEY hkey, LPCWSTR lpSubKey, LPCWSTR lpValue, DWORD dwFlags, LPDWORD pdwType, PVOID pvData, LPDWORD pcbData);
#ifdef UNICODE
#define RegGetValue  RegGetValueW
#else
#define RegGetValue  RegGetValueA
#endif
WINADVAPI LSTATUS APIENTRY RegLoadMUIStringA(HKEY hKey, LPCSTR pszValue, LPSTR pszOutBuf, DWORD cbOutBuf, LPDWORD pcbData, DWORD Flags, LPCSTR pszDirectory);
WINADVAPI LSTATUS APIENTRY RegLoadMUIStringW(HKEY hKey, LPCWSTR pszValue, LPWSTR pszOutBuf, DWORD cbOutBuf, LPDWORD pcbData, DWORD Flags, LPCWSTR pszDirectory);
#ifdef UNICODE
#define RegLoadMUIString  RegLoadMUIStringW
#else
#define RegLoadMUIString  RegLoadMUIStringA
#endif
WINADVAPI LSTATUS APIENTRY RegLoadAppKeyA(LPCSTR lpFile, PHKEY phkResult, REGSAM samDesired, DWORD dwOptions, DWORD Reserved);
WINADVAPI LSTATUS APIENTRY RegLoadAppKeyW(LPCWSTR lpFile, PHKEY phkResult, REGSAM samDesired, DWORD dwOptions, DWORD Reserved);
#ifdef UNICODE
#define RegLoadAppKey  RegLoadAppKeyW
#else
#define RegLoadAppKey  RegLoadAppKeyA
#endif
#endif
WINADVAPI BOOL APIENTRY InitiateSystemShutdownA(LPSTR lpMachineName, LPSTR lpMessage, DWORD dwTimeout, BOOL bForceAppsClosed, BOOL bRebootAfterShutdown);
WINADVAPI BOOL APIENTRY InitiateSystemShutdownW(LPWSTR lpMachineName, LPWSTR lpMessage, DWORD dwTimeout, BOOL bForceAppsClosed, BOOL bRebootAfterShutdown);
#ifdef UNICODE
#define InitiateSystemShutdown  InitiateSystemShutdownW
#else
#define InitiateSystemShutdown  InitiateSystemShutdownA
#endif
WINADVAPI BOOL APIENTRY AbortSystemShutdownA(LPSTR lpMachineName);
WINADVAPI BOOL APIENTRY AbortSystemShutdownW(LPWSTR lpMachineName);
#ifdef UNICODE
#define AbortSystemShutdown  AbortSystemShutdownW
#else
#define AbortSystemShutdown  AbortSystemShutdownA
#endif
#include <reason.h>
#define REASON_SWINSTALL    (SHTDN_REASON_MAJOR_SOFTWARE|SHTDN_REASON_MINOR_INSTALLATION)
#define REASON_HWINSTALL    (SHTDN_REASON_MAJOR_HARDWARE|SHTDN_REASON_MINOR_INSTALLATION)
#define REASON_SERVICEHANG  (SHTDN_REASON_MAJOR_SOFTWARE|SHTDN_REASON_MINOR_HUNG)
#define REASON_UNSTABLE     (SHTDN_REASON_MAJOR_SYSTEM|SHTDN_REASON_MINOR_UNSTABLE)
#define REASON_SWHWRECONF   (SHTDN_REASON_MAJOR_SOFTWARE|SHTDN_REASON_MINOR_RECONFIG)
#define REASON_OTHER        (SHTDN_REASON_MAJOR_OTHER|SHTDN_REASON_MINOR_OTHER)
#define REASON_UNKNOWN      SHTDN_REASON_UNKNOWN
#define REASON_LEGACY_API   SHTDN_REASON_LEGACY_API
#define REASON_PLANNED_FLAG SHTDN_REASON_FLAG_PLANNED
#define MAX_SHUTDOWN_TIMEOUT (10*365*24*60*60)
WINADVAPI BOOL APIENTRY InitiateSystemShutdownExA(LPSTR lpMachineName, LPSTR lpMessage, DWORD dwTimeout, BOOL bForceAppsClosed, BOOL bRebootAfterShutdown, DWORD dwReason);
WINADVAPI BOOL APIENTRY InitiateSystemShutdownExW(LPWSTR lpMachineName, LPWSTR lpMessage, DWORD dwTimeout, BOOL bForceAppsClosed, BOOL bRebootAfterShutdown, DWORD dwReason);
#ifdef UNICODE
#define InitiateSystemShutdownEx  InitiateSystemShutdownExW
#else
#define InitiateSystemShutdownEx  InitiateSystemShutdownExA
#endif
#define SHUTDOWN_FORCE_OTHERS           0x00000001
#define SHUTDOWN_FORCE_SELF             0x00000002
#define SHUTDOWN_RESTART                0x00000004
#define SHUTDOWN_POWEROFF               0x00000008
#define SHUTDOWN_NOREBOOT               0x00000010
#define SHUTDOWN_GRACE_OVERRIDE         0x00000020
#define SHUTDOWN_INSTALL_UPDATES        0x00000040
#define SHUTDOWN_RESTARTAPPS            0x00000080
#define SHUTDOWN_SKIP_SVC_PRESHUTDOWN   0x00000100
WINADVAPI DWORD APIENTRY InitiateShutdownA(LPSTR lpMachineName, LPSTR lpMessage, DWORD dwGracePeriod, DWORD dwShutdownFlags, DWORD dwReason);
WINADVAPI DWORD APIENTRY InitiateShutdownW(LPWSTR lpMachineName, LPWSTR lpMessage, DWORD dwGracePeriod, DWORD dwShutdownFlags, DWORD dwReason);
#ifdef UNICODE
#define InitiateShutdown  InitiateShutdownW
#else
#define InitiateShutdown  InitiateShutdownA
#endif
WINADVAPI LSTATUS APIENTRY RegSaveKeyExA(HKEY hKey, LPCSTR lpFile, CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD Flags);
WINADVAPI LSTATUS APIENTRY RegSaveKeyExW(HKEY hKey, LPCWSTR lpFile, CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD Flags);
#ifdef UNICODE
#define RegSaveKeyEx  RegSaveKeyExW
#else
#define RegSaveKeyEx  RegSaveKeyExA
#endif

#endif
