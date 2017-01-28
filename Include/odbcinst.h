/*+@@file@@----------------------------------------------------------------*//*!
 \file		odbcinst.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 18:23:27 2016
 \date		Modified on Sat Sep  3 18:23:27 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __ODBCINST_H
#define __ODBCINST_H
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __SQL
#include <sql.h>
#endif
#ifndef ODBCVER
#define ODBCVER 0x0380
#endif
#ifndef WINVER
#define  WINVER  0x0400
#endif
#define  ODBC_ADD_DSN     1
#define  ODBC_CONFIG_DSN  2
#define  ODBC_REMOVE_DSN  3
#if (ODBCVER >= 0x0250)
#define  ODBC_ADD_SYS_DSN 4
#define  ODBC_CONFIG_SYS_DSN    5
#define  ODBC_REMOVE_SYS_DSN    6
#if (ODBCVER >= 0x0300)
#define  ODBC_REMOVE_DEFAULT_DSN    7
#endif
#define  ODBC_INSTALL_INQUIRY   1
#define  ODBC_INSTALL_COMPLETE  2
#define  ODBC_INSTALL_DRIVER    1
#define  ODBC_REMOVE_DRIVER     2
#define  ODBC_CONFIG_DRIVER     3
#define  ODBC_CONFIG_DRIVER_MAX 100
#endif
#if (ODBCVER >= 0x0300)
#define ODBC_BOTH_DSN       0
#define ODBC_USER_DSN       1
#define ODBC_SYSTEM_DSN     2
#endif
#if (ODBCVER >= 0x0300)
#define ODBC_ERROR_GENERAL_ERR                   1
#define ODBC_ERROR_INVALID_BUFF_LEN              2
#define ODBC_ERROR_INVALID_HWND                  3
#define ODBC_ERROR_INVALID_STR                   4
#define ODBC_ERROR_INVALID_REQUEST_TYPE          5
#define ODBC_ERROR_COMPONENT_NOT_FOUND           6
#define ODBC_ERROR_INVALID_NAME                  7
#define ODBC_ERROR_INVALID_KEYWORD_VALUE         8
#define ODBC_ERROR_INVALID_DSN                   9
#define ODBC_ERROR_INVALID_INF                  10
#define ODBC_ERROR_REQUEST_FAILED               11
#define ODBC_ERROR_INVALID_PATH                 12
#define ODBC_ERROR_LOAD_LIB_FAILED              13
#define ODBC_ERROR_INVALID_PARAM_SEQUENCE       14
#define ODBC_ERROR_INVALID_LOG_FILE             15
#define ODBC_ERROR_USER_CANCELED                16
#define ODBC_ERROR_USAGE_UPDATE_FAILED          17
#define ODBC_ERROR_CREATE_DSN_FAILED            18
#define ODBC_ERROR_WRITING_SYSINFO_FAILED       19
#define ODBC_ERROR_REMOVE_DSN_FAILED            20
#define ODBC_ERROR_OUT_OF_MEM                   21
#define ODBC_ERROR_OUTPUT_STRING_TRUNCATED      22
#define ODBC_ERROR_NOTRANINFO                   23
#define ODBC_ERROR_MAX                          ODBC_ERROR_NOTRANINFO
#endif
#ifndef EXPORT
#define EXPORT
#endif
#ifndef RC_INVOKED
#define INSTAPI __stdcall
BOOL INSTAPI SQLInstallODBC(HWND hwndParent, LPCSTR lpszInfFile, LPCSTR lpszSrcPath, LPCSTR lpszDrivers);
BOOL INSTAPI SQLManageDataSources(HWND hwndParent);
BOOL INSTAPI SQLCreateDataSource(HWND hwndParent, LPCSTR lpszDSN);
BOOL INSTAPI SQLGetTranslator(HWND hwnd, LPSTR lpszName, WORD cchNameMax, WORD *pcchNameOut, LPSTR lpszPath, WORD cchPathMax, WORD *pcchPathOut, DWORD *pvOption);
BOOL INSTAPI SQLInstallDriver(LPCSTR lpszInfFile, LPCSTR lpszDriver, LPSTR lpszPath, WORD cchPathMax, WORD *pcchPathOut);
BOOL INSTAPI SQLInstallDriverManager(LPSTR lpszPath, WORD cchPathMax, WORD *pcchPathOut);
BOOL INSTAPI SQLGetInstalledDrivers(LPSTR lpszBuf, WORD cchBufMax, WORD *pcchBufOut);
BOOL INSTAPI SQLGetAvailableDrivers(LPCSTR lpszInfFile, LPSTR lpszBuf, WORD cchBufMax, WORD *pcchBufOut);
BOOL INSTAPI SQLConfigDataSource(HWND hwndParent, WORD fRequest, LPCSTR lpszDriver, LPCSTR lpszAttributes);
BOOL INSTAPI SQLRemoveDefaultDataSource(void);
BOOL INSTAPI SQLWriteDSNToIni(LPCSTR lpszDSN, LPCSTR lpszDriver);
BOOL INSTAPI SQLRemoveDSNFromIni(LPCSTR lpszDSN);
BOOL INSTAPI SQLValidDSN(LPCSTR lpszDSN);
BOOL INSTAPI SQLWritePrivateProfileString(LPCSTR lpszSection, LPCSTR lpszEntry, LPCSTR lpszString, LPCSTR lpszFilename);
int INSTAPI SQLGetPrivateProfileString(LPCSTR lpszSection, LPCSTR lpszEntry, LPCSTR lpszDefault, LPSTR lpszRetBuffer, int cchRetBuffer, LPCSTR lpszFilename);
#if (ODBCVER >= 0x0250)
BOOL INSTAPI SQLRemoveDriverManager(LPDWORD lpdwUsageCount);
BOOL INSTAPI SQLInstallTranslator(LPCSTR lpszInfFile, LPCSTR lpszTranslator, LPCSTR lpszPathIn, LPSTR lpszPathOut, WORD cchPathOutMax, WORD *pcchPathOut, WORD fRequest, LPDWORD lpdwUsageCount);
BOOL INSTAPI SQLRemoveTranslator(LPCSTR lpszTranslator, LPDWORD lpdwUsageCount);
BOOL INSTAPI SQLRemoveDriver(LPCSTR lpszDriver, BOOL fRemoveDSN, LPDWORD lpdwUsageCount);
BOOL INSTAPI SQLConfigDriver(HWND hwndParent, WORD fRequest, LPCSTR lpszDriver, LPCSTR lpszArgs, LPSTR lpszMsg, WORD cchMsgMax, WORD *pcchMsgOut);
#endif
#if (ODBCVER >=  0x0300)
SQLRETURN INSTAPI SQLInstallerError(WORD iError, DWORD *pfErrorCode, LPSTR lpszErrorMsg, WORD cchErrorMsgMax, WORD *pcchErrorMsg);
SQLRETURN INSTAPI SQLPostInstallerError(DWORD dwErrorCode, LPCSTR lpszErrMsg);
BOOL INSTAPI SQLWriteFileDSN(LPCSTR lpszFileName, LPCSTR lpszAppName, LPCSTR lpszKeyName, LPCSTR lpszString);
BOOL INSTAPI SQLReadFileDSN(LPCSTR lpszFileName, LPCSTR lpszAppName, LPCSTR lpszKeyName, LPSTR lpszString, WORD cchString, WORD *pcchString);
BOOL INSTAPI SQLInstallDriverEx(LPCSTR lpszDriver, LPCSTR lpszPathIn, LPSTR lpszPathOut, WORD cchPathOutMax, WORD *pcchPathOut, WORD fRequest, LPDWORD lpdwUsageCount);
BOOL INSTAPI SQLInstallTranslatorEx(LPCSTR lpszTranslator, LPCSTR lpszPathIn, LPSTR lpszPathOut, WORD cchPathOutMax, WORD *pcchPathOut, WORD fRequest, LPDWORD lpdwUsageCount);
BOOL INSTAPI SQLGetConfigMode(UWORD *pwConfigMode);
BOOL INSTAPI SQLSetConfigMode(UWORD wConfigMode);
#endif
BOOL INSTAPI ConfigDSN(HWND hwndParent, WORD fRequest, LPCSTR lpszDriver, LPCSTR lpszAttributes);
BOOL INSTAPI ConfigTranslator(HWND hwndParent, DWORD *pvOption);
#if (ODBCVER >= 0x0250)
BOOL INSTAPI ConfigDriver(HWND hwndParent, WORD fRequest, LPCSTR lpszDriver, LPCSTR lpszArgs, LPSTR lpszMsg, WORD cchMsgMax, WORD *pcchMsgOut);
#endif
BOOL INSTAPI SQLInstallODBCW(HWND hwndParent, LPCWSTR lpszInfFile, LPCWSTR lpszSrcPath, LPCWSTR lpszDrivers);
BOOL INSTAPI SQLCreateDataSourceW(HWND hwndParent, LPCWSTR lpszDSN);
BOOL INSTAPI SQLGetTranslatorW(HWND hwnd, LPWSTR lpszName, WORD cchNameMax, WORD *pcchNameOut, LPWSTR lpszPath, WORD cchPathMax, WORD *pcchPathOut, DWORD *pvOption);
BOOL INSTAPI SQLInstallDriverW(LPCWSTR lpszInfFile, LPCWSTR lpszDriver, LPWSTR lpszPath, WORD cchPathMax, WORD *pcchPathOut);
BOOL INSTAPI SQLInstallDriverManagerW(LPWSTR lpszPath, WORD cchPathMax, WORD *pcchPathOut);
BOOL INSTAPI SQLGetInstalledDriversW(LPWSTR lpszBuf, WORD cchBufMax, WORD *pcchBufOut);
BOOL INSTAPI SQLGetAvailableDriversW(LPCWSTR lpszInfFile, LPWSTR lpszBuf, WORD cchBufMax, WORD *pcchBufOut);
BOOL INSTAPI SQLConfigDataSourceW(HWND hwndParent, WORD fRequest, LPCWSTR lpszDriver, LPCWSTR lpszAttributes);
BOOL INSTAPI SQLWriteDSNToIniW(LPCWSTR lpszDSN, LPCWSTR lpszDriver);
BOOL INSTAPI SQLRemoveDSNFromIniW(LPCWSTR lpszDSN);
BOOL INSTAPI SQLValidDSNW(LPCWSTR lpszDSN);
BOOL INSTAPI SQLWritePrivateProfileStringW(LPCWSTR lpszSection, LPCWSTR lpszEntry, LPCWSTR lpszString, LPCWSTR lpszFilename);
int INSTAPI SQLGetPrivateProfileStringW(LPCWSTR lpszSection, LPCWSTR lpszEntry, LPCWSTR lpszDefault, LPWSTR lpszRetBuffer, int cchRetBuffer, LPCWSTR lpszFilename);
#if (ODBCVER >= 0x0250)
BOOL INSTAPI SQLInstallTranslatorW(LPCWSTR lpszInfFile, LPCWSTR lpszTranslator, LPCWSTR lpszPathIn, LPWSTR lpszPathOut, WORD cchPathOutMax, WORD *pcchPathOut, WORD fRequest, LPDWORD lpdwUsageCount);
BOOL INSTAPI SQLRemoveTranslatorW(LPCWSTR lpszTranslator, LPDWORD lpdwUsageCount);
BOOL INSTAPI SQLRemoveDriverW(LPCWSTR lpszDriver, BOOL fRemoveDSN, LPDWORD lpdwUsageCount);
BOOL INSTAPI SQLConfigDriverW(HWND hwndParent, WORD fRequest, LPCWSTR lpszDriver, LPCWSTR lpszArgs, LPWSTR lpszMsg, WORD cchMsgMax, WORD *pcchMsgOut);
#endif
#if (ODBCVER >= 0x0300)
SQLRETURN INSTAPI SQLInstallerErrorW(WORD iError, DWORD *pfErrorCode, LPWSTR lpszErrorMsg, WORD cchErrorMsgMax, WORD *pcchErrorMsg);
SQLRETURN INSTAPI SQLPostInstallerErrorW(DWORD dwErrorCode, LPCWSTR lpszErrorMsg);
BOOL INSTAPI SQLWriteFileDSNW(LPCWSTR lpszFileName, LPCWSTR lpszAppName, LPCWSTR lpszKeyName, LPCWSTR lpszString);
BOOL INSTAPI SQLReadFileDSNW(LPCWSTR lpszFileName, LPCWSTR lpszAppName, LPCWSTR lpszKeyName, LPWSTR lpszString, WORD cchString, WORD *pcchString);
BOOL INSTAPI SQLInstallDriverExW(LPCWSTR lpszDriver, LPCWSTR lpszPathIn, LPWSTR lpszPathOut, WORD cchPathOutMax, WORD *pcchPathOut, WORD fRequest, LPDWORD lpdwUsageCount);
BOOL INSTAPI SQLInstallTranslatorExW(LPCWSTR lpszTranslator, LPCWSTR lpszPathIn, LPWSTR lpszPathOut, WORD cchPathOutMax, WORD *pcchPathOut, WORD fRequest, LPDWORD lpdwUsageCount);
#endif
BOOL INSTAPI ConfigDSNW(HWND hwndParent, WORD fRequest, LPCWSTR lpszDriver, LPCWSTR lpszAttributes);
#if (ODBCVER >= 0x0250)
BOOL INSTAPI ConfigDriverW(HWND hwndParent, WORD fRequest, LPCWSTR lpszDriver, LPCWSTR lpszArgs, LPWSTR lpszMsg, WORD cchMsgMax, WORD *pcchMsgOut);
#endif
#ifndef SQL_NOUNICODEMAP
#ifdef  UNICODE
#define  SQLInstallODBC                 SQLInstallODBCW
#define  SQLCreateDataSource            SQLCreateDataSourceW
#define  SQLGetTranslator               SQLGetTranslatorW
#define  SQLInstallDriver               SQLInstallDriverW
#define  SQLInstallDriverManager        SQLInstallDriverManagerW
#define  SQLGetInstalledDrivers         SQLGetInstalledDriversW
#define  SQLGetAvailableDrivers         SQLGetAvailableDriversW
#define  SQLConfigDataSource            SQLConfigDataSourceW
#define  SQLWriteDSNToIni               SQLWriteDSNToIniW
#define  SQLRemoveDSNFromIni            SQLRemoveDSNFromIniW
#define  SQLValidDSN                    SQLValidDSNW
#define  SQLWritePrivateProfileString   SQLWritePrivateProfileStringW
#define  SQLGetPrivateProfileString     SQLGetPrivateProfileStringW
#define  SQLInstallTranslator           SQLInstallTranslatorW
#define  SQLRemoveTranslator            SQLRemoveTranslatorW
#define  SQLRemoveDriver                SQLRemoveDriverW
#define  SQLConfigDriver                SQLConfigDriverW
#define  SQLInstallerError              SQLInstallerErrorW
#define  SQLPostInstallerError          SQLPostInstallerErrorW
#define  SQLReadFileDSN                 SQLReadFileDSNW
#define  SQLWriteFileDSN                SQLWriteFileDSNW
#define  SQLInstallDriverEx             SQLInstallDriverExW
#define  SQLInstallTranslatorEx         SQLInstallTranslatorExW
#endif
#endif
#endif
#endif
