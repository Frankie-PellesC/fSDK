/*+@@file@@----------------------------------------------------------------*//*!
 \file		advpub.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 15:53:03 2016
 \date		Modified on Sat Jul  2 15:53:03 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _ADVPUB_H_
#define _ADVPUB_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <setupapi.h>
#include <cfgmgr32.h>
#ifndef S_ASYNCHRONOUS
#define S_ASYNCHRONOUS  _HRESULT_TYPEDEF_(0x401e8L)
#endif
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI RunSetupCommandA(HWND hWnd, LPCSTR szCmdName, LPCSTR szInfSection, LPCSTR szDir, LPCSTR lpszTitle, HANDLE* phEXE, DWORD dwFlags, LPVOID pvReserved);
HRESULT WINAPI RunSetupCommandW(HWND hWnd, LPCWSTR szCmdName, LPCWSTR szInfSection, LPCWSTR szDir, LPCWSTR lpszTitle, HANDLE* phEXE, DWORD dwFlags, LPVOID pvReserved);
#ifdef UNICODE
#define RunSetupCommand  RunSetupCommandW
#else
#define RunSetupCommand  RunSetupCommandA
#endif
#else
HRESULT WINAPI RunSetupCommand(HWND hWnd, LPCSTR szCmdName, LPCSTR szInfSection, LPCSTR szDir, LPCSTR lpszTitle, HANDLE* phEXE, DWORD dwFlags, LPVOID pvReserved);
#endif
#define RSC_FLAG_INF                1
#define RSC_FLAG_SKIPDISKSPACECHECK 2
#define RSC_FLAG_QUIET              4
#define RSC_FLAG_NGCONV             8
#define RSC_FLAG_UPDHLPDLLS         16
#define RSC_FLAG_DELAYREGISTEROCX   512
#define RSC_FLAG_SETUPAPI           1024
DWORD WINAPI NeedRebootInit();
BOOL WINAPI NeedReboot(DWORD dwRebootCheck);
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI RebootCheckOnInstallA(HWND hwnd, LPCSTR pszINF, LPCSTR pszSec, DWORD dwReserved);
HRESULT WINAPI RebootCheckOnInstallW(HWND hwnd, LPCWSTR pszINF, LPCWSTR pszSec, DWORD dwReserved);
#ifdef UNICODE
#define RebootCheckOnInstall  RebootCheckOnInstallW
#else
#define RebootCheckOnInstall  RebootCheckOnInstallA
#endif
#else
HRESULT WINAPI RebootCheckOnInstall(HWND hwnd, LPCSTR pszINF, LPCSTR pszSec, DWORD dwReserved);
#endif
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI TranslateInfStringA(LPCSTR pszInfFilename, LPCSTR pszInstallSection, LPCSTR pszTranslateSection, LPCSTR pszTranslateKey, LPSTR pszBuffer, DWORD cchBuffer, PDWORD pdwRequiredSize, PVOID pvReserved);
HRESULT WINAPI TranslateInfStringW(LPCWSTR pszInfFilename, LPCWSTR pszInstallSection, LPCWSTR pszTranslateSection, LPCWSTR pszTranslateKey, LPWSTR pszBuffer, DWORD cchBuffer, PDWORD pdwRequiredSize, PVOID pvReserved);
#ifdef UNICODE
#define TranslateInfString  TranslateInfStringW
#else
#define TranslateInfString  TranslateInfStringA
#endif
#else
HRESULT WINAPI TranslateInfString(LPCSTR pszInfFilename, LPCSTR pszInstallSection, LPCSTR pszTranslateSection, LPCSTR pszTranslateKey, LPSTR pszBuffer, DWORD cchBuffer, PDWORD pdwRequiredSize, PVOID pvReserved);
#endif
#if (_WIN32_IE >= 0x0605)
typedef struct _StrEntryA
{
    LPSTR   pszName;
    LPSTR   pszValue;
} STRENTRYA, *LPSTRENTRYA;
typedef struct _StrEntryW
{
    LPWSTR  pszName;
    LPWSTR  pszValue;
} STRENTRYW, *LPSTRENTRYW;
#ifdef UNICODE
typedef STRENTRYW STRENTRY;
typedef LPSTRENTRYW LPSTRENTRY;
#else
typedef STRENTRYA STRENTRY;
typedef LPSTRENTRYA LPSTRENTRY;
#endif
typedef struct _StrTableA
{
    DWORD       cEntries;
    STRENTRYA*   pse;
} STRTABLEA, *LPSTRTABLEA;
typedef struct _StrTableW
{
    DWORD       cEntries;
    STRENTRYW*   pse;
} STRTABLEW, *LPSTRTABLEW;
#ifdef UNICODE
typedef STRTABLEW STRTABLE;
typedef LPSTRTABLEW LPSTRTABLE;
#else
typedef STRTABLEA STRTABLE;
typedef LPSTRTABLEA LPSTRTABLE;
#endif
typedef const STRTABLEA CSTRTABLEA;
typedef const STRTABLEW CSTRTABLEW;
#ifdef UNICODE
typedef STRTABLEW STRTABLE;
typedef CSTRTABLEW CSTRTABLE;
#else
typedef STRTABLEA STRTABLE;
typedef CSTRTABLEA CSTRTABLE;
#endif
typedef const STRTABLEA *LPCSTRTABLEA;
typedef const STRTABLEW *LPCSTRTABLEW;
#ifdef UNICODE
typedef STRTABLEW STRTABLE;
typedef LPCSTRTABLEW LPCSTRTABLE;
#else
typedef STRTABLEA STRTABLE;
typedef LPCSTRTABLEA LPCSTRTABLE;
#endif
HRESULT WINAPI RegInstallA(HMODULE hmod, LPCSTR pszSection, const STRTABLEA* pstTable);
HRESULT WINAPI RegInstallW(HMODULE hmod, LPCWSTR pszSection, const STRTABLEW* pstTable);
#ifdef UNICODE
#define RegInstall  RegInstallW
#else
#define RegInstall  RegInstallA
#endif
#else
typedef struct _StrEntryA
{
    LPSTR pszName;
    LPSTR pszValue;
} STRENTRYA, *LPSTRENTRYA;
typedef struct _StrTableA
{
    DWORD       cEntries;
    STRENTRYA*  pse;
} STRTABLEA, *LPSTRTABLEA;
typedef STRENTRYA STRENTRY;
typedef LPSTRENTRYA LPSTRENTRY;
typedef STRTABLEA STRTABLE;
typedef const STRTABLEA CSTRTABLE;
typedef const STRTABLEA *LPCSTRTABLEA;
HRESULT WINAPI RegInstall(HMODULE hmod, LPCSTR pszSection, const STRTABLEA* pstTable);
#endif
#define REGINSTALL  REGINSTALLA
typedef HRESULT(WINAPI *REGINSTALLA) (HMODULE hm, LPCSTR pszSection, LPCSTRTABLEA pstTable);
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI LaunchINFSectionExA(HWND hwnd, HINSTANCE hInstance, LPSTR pszParms, INT nShow);
HRESULT WINAPI LaunchINFSectionExW(HWND hwnd, HINSTANCE hInstance, LPWSTR pszParms, INT nShow);
#ifdef UNICODE
#define LaunchINFSectionEx  LaunchINFSectionExW
#else
#define LaunchINFSectionEx  LaunchINFSectionExA
#endif
#else
HRESULT WINAPI LaunchINFSectionEx(HWND hwnd, HINSTANCE hInstance, LPSTR pszParms, INT nShow);
#endif
#define ALINF_QUIET              4
#define ALINF_NGCONV             8
#define ALINF_UPDHLPDLLS         16
#define ALINF_BKINSTALL          32
#define ALINF_ROLLBACK           64
#define ALINF_CHECKBKDATA        128
#define ALINF_ROLLBKDOALL        256
#define ALINF_DELAYREGISTEROCX   512
#if (_WIN32_IE >= 0x0605)
typedef struct _CabInfoA
{
    LPSTR   pszCab;
    LPSTR   pszInf;
    LPSTR   pszSection;
    CHAR    szSrcPath[MAX_PATH];
    DWORD   dwFlags;
} CABINFOA, *PCABINFOA;
typedef struct _CabInfoW
{
    LPWSTR  pszCab;
    LPWSTR  pszInf;
    LPWSTR  pszSection;
    WCHAR   szSrcPath[MAX_PATH];
    DWORD   dwFlags;
} CABINFOW, *PCABINFOW;
#ifdef UNICODE
typedef CABINFOW CABINFO;
typedef PCABINFOW PCABINFO;
#else
typedef CABINFOA CABINFO;
typedef PCABINFOA PCABINFO;
#endif
HRESULT WINAPI ExecuteCabA(HWND hwnd, CABINFOA* pCab, LPVOID pReserved);
HRESULT WINAPI ExecuteCabW(HWND hwnd, CABINFOW* pCab, LPVOID pReserved);
#ifdef UNICODE
#define ExecuteCab  ExecuteCabW
#else
#define ExecuteCab  ExecuteCabA
#endif
#else
typedef struct _CabInfoA {
    LPSTR   pszCab;
    LPSTR   pszInf;
    LPSTR   pszSection;
    CHAR    szSrcPath[MAX_PATH];
    DWORD   dwFlags;
} CABINFOA, *PCABINFOA;
typedef CABINFOA CABINFO;
typedef PCABINFOA PCABINFO;
HRESULT WINAPI ExecuteCab(HWND hwnd, CABINFOA* pCab, LPVOID pReserved);
#endif
#define AIF_WARNIFSKIP          0x00000001
#define AIF_NOSKIP              0x00000002
#define AIF_NOVERSIONCHECK      0x00000004
#define AIF_FORCE_FILE_IN_USE   0x00000008
#define AIF_NOOVERWRITE         0x00000010
#define AIF_NO_VERSION_DIALOG   0x00000020
#define AIF_REPLACEONLY         0x00000400
#define AIF_NOLANGUAGECHECK     0x10000000
#define AIF_QUIET               0x20000000
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI AdvInstallFileA(HWND hwnd, LPCSTR lpszSourceDir, LPCSTR lpszSourceFile, LPCSTR lpszDestDir, LPCSTR lpszDestFile, DWORD dwFlags, DWORD dwReserved);
HRESULT WINAPI AdvInstallFileW(HWND hwnd, LPCWSTR lpszSourceDir, LPCWSTR lpszSourceFile, LPCWSTR lpszDestDir, LPCWSTR lpszDestFile, DWORD dwFlags, DWORD dwReserved);
#ifdef UNICODE
#define AdvInstallFile  AdvInstallFileW
#else
#define AdvInstallFile  AdvInstallFileA
#endif
#else
HRESULT WINAPI AdvInstallFile(HWND hwnd, LPCSTR lpszSourceDir, LPCSTR lpszSourceFile, LPCSTR lpszDestDir, LPCSTR lpszDestFile, DWORD dwFlags, DWORD dwReserved);
#endif
#define  IE4_RESTORE        0x00000001
#define  IE4_BACKNEW        0x00000002
#define  IE4_NODELETENEW    0x00000004
#define  IE4_NOMESSAGES     0x00000008
#define  IE4_NOPROGRESS     0x00000010
#define  IE4_NOENUMKEY      0x00000020
#define  IE4_NO_CRC_MAPPING 0x00000040
#define  IE4_REGSECTION     0x00000080
#define  IE4_FRDOALL        0x00000100
#define  IE4_UPDREFCNT      0x00000200
#define  IE4_USEREFCNT      0x00000400
#define  IE4_EXTRAINCREFCNT 0x00000800
#define  IE4_REMOVREGBKDATA 0x00001000
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI RegSaveRestoreA(HWND hWnd, LPCSTR pszTitleString, HKEY hkBckupKey, LPCSTR pcszRootKey, LPCSTR pcszSubKey, LPCSTR pcszValueName, DWORD dwFlags);
HRESULT WINAPI RegSaveRestoreW(HWND hWnd, LPCWSTR pszTitleString, HKEY hkBckupKey, LPCWSTR pcszRootKey, LPCWSTR pcszSubKey, LPCWSTR pcszValueName, DWORD dwFlags);
#ifdef UNICODE
#define RegSaveRestore  RegSaveRestoreW
#else
#define RegSaveRestore  RegSaveRestoreA
#endif
#else
HRESULT WINAPI RegSaveRestore(HWND hWnd, LPCSTR pszTitleString, HKEY hkBckupKey, LPCSTR pcszRootKey, LPCSTR pcszSubKey, LPCSTR pcszValueName, DWORD dwFlags);
#endif
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI RegSaveRestoreOnINFA(HWND hWnd, LPCSTR pszTitle, LPCSTR pszINF, LPCSTR pszSection, HKEY hHKLMBackKey, HKEY hHKCUBackKey, DWORD dwFlags);
HRESULT WINAPI RegSaveRestoreOnINFW(HWND hWnd, LPCWSTR pszTitle, LPCWSTR pszINF, LPCWSTR pszSection, HKEY hHKLMBackKey, HKEY hHKCUBackKey, DWORD dwFlags);
#ifdef UNICODE
#define RegSaveRestoreOnINF  RegSaveRestoreOnINFW
#else
#define RegSaveRestoreOnINF  RegSaveRestoreOnINFA
#endif
#else
HRESULT WINAPI RegSaveRestoreOnINF(HWND hWnd, LPCSTR pszTitle, LPCSTR pszINF, LPCSTR pszSection, HKEY hHKLMBackKey, HKEY hHKCUBackKey, DWORD dwFlags);
#endif
#define ARSR_RESTORE    IE4_RESTORE
#define ARSR_NOMESSAGES IE4_NOMESSAGES
#define ARSR_REGSECTION IE4_REGSECTION
#define ARSR_REMOVREGBKDATA IE4_REMOVREGBKDATA
#define  REG_SAVE_LOG_KEY       TEXT("RegSaveLogFile")
#define  REG_RESTORE_LOG_KEY    TEXT("RegRestoreLogFile")
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI RegRestoreAllA(HWND hWnd, LPCSTR pszTitleString, HKEY hkBckupKey);
HRESULT WINAPI RegRestoreAllW(HWND hWnd, LPCWSTR pszTitleString, HKEY hkBckupKey);
#ifdef UNICODE
#define RegRestoreAll  RegRestoreAllW
#else
#define RegRestoreAll  RegRestoreAllA
#endif
#else
HRESULT WINAPI RegRestoreAll(HWND hWnd, LPCSTR pszTitleString, HKEY hkBckupKey);
#endif
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI FileSaveRestoreA(HWND hDlg, LPSTR lpFileList, LPCSTR lpDir, LPCSTR lpBaseName, DWORD dwFlags);
HRESULT WINAPI FileSaveRestoreW(HWND hDlg, LPWSTR lpFileList, LPCWSTR lpDir, LPCWSTR lpBaseName, DWORD dwFlags);
#ifdef UNICODE
#define FileSaveRestore  FileSaveRestoreW
#else
#define FileSaveRestore  FileSaveRestoreA
#endif
#else
HRESULT WINAPI FileSaveRestore(HWND hDlg, LPSTR lpFileList, LPCSTR lpDir, LPCSTR lpBaseName, DWORD dwFlags);
#endif
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI FileSaveRestoreOnINFA(HWND hWnd, LPCSTR pszTitle, LPCSTR pszINF, LPCSTR pszSection, LPCSTR pszBackupDir, LPCSTR pszBaseBackupFile, DWORD dwFlags);
HRESULT WINAPI FileSaveRestoreOnINFW(HWND hWnd, LPCWSTR pszTitle, LPCWSTR pszINF, LPCWSTR pszSection, LPCWSTR pszBackupDir, LPCWSTR pszBaseBackupFile, DWORD dwFlags);
#ifdef UNICODE
#define FileSaveRestoreOnINF  FileSaveRestoreOnINFW
#else
#define FileSaveRestoreOnINF  FileSaveRestoreOnINFA
#endif
#else
HRESULT WINAPI FileSaveRestoreOnINF(HWND hWnd, LPCSTR pszTitle, LPCSTR pszINF, LPCSTR pszSection, LPCSTR pszBackupDir, LPCSTR pszBaseBackupFile, DWORD dwFlags);
#endif
#define  AFSR_RESTORE        IE4_RESTORE
#define  AFSR_BACKNEW        IE4_BACKNEW
#define  AFSR_NODELETENEW    IE4_NODELETENEW
#define  AFSR_NOMESSAGES     IE4_NOMESSAGES
#define  AFSR_NOPROGRESS     IE4_NOPROGRESS
#define  AFSR_UPDREFCNT      IE4_UPDREFCNT
#define  AFSR_USEREFCNT      IE4_USEREFCNT
#define  AFSR_EXTRAINCREFCNT IE4_EXTRAINCREFCNT
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI AddDelBackupEntryA(LPCSTR lpcszFileList, LPCSTR lpcszBackupDir, LPCSTR lpcszBaseName, DWORD dwFlags);
HRESULT WINAPI AddDelBackupEntryW(LPCWSTR lpcszFileList, LPCWSTR lpcszBackupDir, LPCWSTR lpcszBaseName, DWORD dwFlags);
#ifdef UNICODE
#define AddDelBackupEntry  AddDelBackupEntryW
#else
#define AddDelBackupEntry  AddDelBackupEntryA
#endif
#else
HRESULT WINAPI AddDelBackupEntry(LPCSTR lpcszFileList, LPCSTR lpcszBackupDir, LPCSTR lpcszBaseName, DWORD dwFlags);
#endif
#define  AADBE_ADD_ENTRY    0x01
#define  AADBE_DEL_ENTRY    0x02
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI FileSaveMarkNotExistA(LPCSTR lpFileList, LPCSTR lpDir, LPCSTR lpBaseName);
HRESULT WINAPI FileSaveMarkNotExistW(LPCWSTR lpFileList, LPCWSTR lpDir, LPCWSTR lpBaseName);
#ifdef UNICODE
#define FileSaveMarkNotExist  FileSaveMarkNotExistW
#else
#define FileSaveMarkNotExist  FileSaveMarkNotExistA
#endif
#else
HRESULT WINAPI FileSaveMarkNotExist(LPCSTR lpFileList, LPCSTR lpDir, LPCSTR lpBaseName);
#endif
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI GetVersionFromFileA(LPCSTR lpszFilename, LPDWORD pdwMSVer, LPDWORD pdwLSVer, BOOL bVersion);
HRESULT WINAPI GetVersionFromFileW(LPCWSTR lpszFilename, LPDWORD pdwMSVer, LPDWORD pdwLSVer, BOOL bVersion);
#ifdef UNICODE
#define GetVersionFromFile  GetVersionFromFileW
#else
#define GetVersionFromFile  GetVersionFromFileA
#endif
#else
HRESULT WINAPI GetVersionFromFile(LPCSTR lpszFilename, LPDWORD pdwMSVer, LPDWORD pdwLSVer, BOOL bVersion);
#endif
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI GetVersionFromFileExA(LPCSTR lpszFilename, LPDWORD pdwMSVer, LPDWORD pdwLSVer, BOOL bVersion);
HRESULT WINAPI GetVersionFromFileExW(LPCWSTR lpszFilename, LPDWORD pdwMSVer, LPDWORD pdwLSVer, BOOL bVersion);
#ifdef UNICODE
#define GetVersionFromFileEx  GetVersionFromFileExW
#else
#define GetVersionFromFileEx  GetVersionFromFileExA
#endif
#else
HRESULT WINAPI GetVersionFromFileEx(LPCSTR lpszFilename, LPDWORD pdwMSVer, LPDWORD pdwLSVer, BOOL bVersion);
#endif
BOOL WINAPI IsNTAdmin(DWORD dwReserved, DWORD *lpdwReserved);
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI DelNodeA(LPCSTR pszFileOrDirName, DWORD dwFlags);
HRESULT WINAPI DelNodeW(LPCWSTR pszFileOrDirName, DWORD dwFlags);
#ifdef UNICODE
#define DelNode  DelNodeW
#else
#define DelNode  DelNodeA
#endif
#else
HRESULT WINAPI DelNode(LPCSTR pszFileOrDirName, DWORD dwFlags);
#endif
#define ADN_DEL_IF_EMPTY        0x00000001
#define ADN_DONT_DEL_SUBDIRS    0x00000002
#define ADN_DONT_DEL_DIR        0x00000004
#define ADN_DEL_UNC_PATHS       0x00000008
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI DelNodeRunDLL32A(HWND hwnd, HINSTANCE hInstance, LPSTR pszParms, INT nShow);
HRESULT WINAPI DelNodeRunDLL32W(HWND hwnd, HINSTANCE hInstance, LPWSTR pszParms, INT nShow);
#ifdef UNICODE
#define DelNodeRunDLL32  DelNodeRunDLL32W
#else
#define DelNodeRunDLL32  DelNodeRunDLL32A
#endif
#else
HRESULT WINAPI DelNodeRunDLL32(HWND hwnd, HINSTANCE hInstance, LPSTR pszParms, INT nShow);
#endif
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI OpenINFEngineA(LPCSTR pszInfFilename, LPCSTR pszInstallSection, DWORD dwFlags, HINF* phInf, PVOID pvReserved);
HRESULT WINAPI OpenINFEngineW(LPCWSTR pszInfFilename, LPCWSTR pszInstallSection, DWORD dwFlags, HINF* phInf, PVOID pvReserved);
#ifdef UNICODE
#define OpenINFEngine  OpenINFEngineW
#else
#define OpenINFEngine  OpenINFEngineA
#endif
#else
HRESULT WINAPI OpenINFEngine(LPCSTR pszInfFilename, LPCSTR pszInstallSection, DWORD dwFlags, HINF* phInf, PVOID pvReserved);
#endif
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI TranslateInfStringExA(HINF hInf, LPCSTR pszInfFilename, LPCSTR pszTranslateSection, LPCSTR pszTranslateKey, LPSTR pszBuffer, DWORD dwBufferSize, PDWORD pdwRequiredSize, PVOID pvReserved);
HRESULT WINAPI TranslateInfStringExW(HINF hInf, LPCWSTR pszInfFilename, LPCWSTR pszTranslateSection, LPCWSTR pszTranslateKey, LPWSTR pszBuffer, DWORD dwBufferSize, PDWORD pdwRequiredSize, PVOID pvReserved);
#ifdef UNICODE
#define TranslateInfStringEx  TranslateInfStringExW
#else
#define TranslateInfStringEx  TranslateInfStringExA
#endif
#else
HRESULT WINAPI TranslateInfStringEx(HINF hInf, LPCSTR pszInfFilename, LPCSTR pszTranslateSection, LPCSTR pszTranslateKey, LPSTR pszBuffer, DWORD dwBufferSize, PDWORD pdwRequiredSize, PVOID pvReserved);
#endif
HRESULT WINAPI CloseINFEngine(HINF hInf);
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI ExtractFilesA(LPCSTR pszCabName, LPCSTR pszExpandDir, DWORD dwFlags, LPCSTR pszFileList, LPVOID lpReserved, DWORD dwReserved);
HRESULT WINAPI ExtractFilesW(LPCWSTR pszCabName, LPCWSTR pszExpandDir, DWORD dwFlags, LPCWSTR pszFileList, LPVOID lpReserved, DWORD dwReserved);
#ifdef UNICODE
#define ExtractFiles  ExtractFilesW
#else
#define ExtractFiles  ExtractFilesA
#endif
#else
HRESULT WINAPI ExtractFiles(LPCSTR pszCabName, LPCSTR pszExpandDir, DWORD dwFlags, LPCSTR pszFileList, LPVOID lpReserved, DWORD dwReserved);
#endif
#if (_WIN32_IE >= 0x0605)
INT     WINAPI LaunchINFSectionA(HWND hwndOwner, HINSTANCE hInstance, LPSTR pszParams, INT nShow);
INT     WINAPI LaunchINFSectionW(HWND hwndOwner, HINSTANCE hInstance, LPWSTR pszParams, INT nShow);
#ifdef UNICODE
#define LaunchINFSection  LaunchINFSectionW
#else
#define LaunchINFSection  LaunchINFSectionA
#endif
#else
INT WINAPI LaunchINFSection(HWND hwndOwner, HINSTANCE hInstance, LPSTR pszParams, INT nShow);
#endif
#define LIS_QUIET               0x0001
#define LIS_NOGRPCONV           0x0002
#define RUNCMDS_QUIET       0x00000001
#define RUNCMDS_NOWAIT      0x00000002
#define RUNCMDS_DELAYPOSTCMD    0x00000004
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI UserInstStubWrapperA(HWND hwnd, HINSTANCE hInstance, LPCSTR pszParms, INT nShow); 
HRESULT WINAPI UserInstStubWrapperW(HWND hwnd, HINSTANCE hInstance, LPCWSTR pszParms, INT nShow); 
#ifdef UNICODE
#define UserInstStubWrapper  UserInstStubWrapperW
#else
#define UserInstStubWrapper  UserInstStubWrapperA
#endif
#else
HRESULT WINAPI UserInstStubWrapper(HWND hwnd, HINSTANCE hInstance, LPCSTR pszParms, INT nShow); 
#endif
#if (_WIN32_IE >= 0x0605)
HRESULT WINAPI UserUnInstStubWrapperA(HWND hwnd, HINSTANCE hInstance, LPCSTR pszParms, INT nShow); 
HRESULT WINAPI UserUnInstStubWrapperW(HWND hwnd, HINSTANCE hInstance, LPCWSTR pszParms, INT nShow); 
#ifdef UNICODE
#define UserUnInstStubWrapper  UserUnInstStubWrapperW
#else
#define UserUnInstStubWrapper  UserUnInstStubWrapperA
#endif
#else
HRESULT WINAPI UserUnInstStubWrapper(HWND hwnd, HINSTANCE hInstance, LPCSTR pszParms, INT nShow); 
#endif
#if (_WIN32_IE >= 0x0605)
typedef struct _PERUSERSECTIONA
{
    CHAR   szGUID[MAX_GUID_STRING_LEN + 20];
    CHAR   szDispName[128];
    CHAR   szLocale[10];
    CHAR   szStub[MAX_PATH*4];
    CHAR   szVersion[32];
    CHAR   szCompID[128]; 
    DWORD dwIsInstalled;
    BOOL  bRollback;
} PERUSERSECTIONA, *PPERUSERSECTIONA;
typedef struct _PERUSERSECTIONW
{
    WCHAR  szGUID[MAX_GUID_STRING_LEN + 20];
    WCHAR  szDispName[128];
    WCHAR  szLocale[10];
    WCHAR  szStub[MAX_PATH*4];
    WCHAR  szVersion[32];
    WCHAR  szCompID[128]; 
    DWORD dwIsInstalled;
    BOOL  bRollback;
} PERUSERSECTIONW, *PPERUSERSECTIONW;
#ifdef UNICODE
typedef PERUSERSECTIONW PERUSERSECTION;
typedef PPERUSERSECTIONW PPERUSERSECTION;
#else
typedef PERUSERSECTIONA PERUSERSECTION;
typedef PPERUSERSECTIONA PPERUSERSECTION;
#endif
HRESULT WINAPI SetPerUserSecValuesA(PERUSERSECTIONA* pPerUser);
HRESULT WINAPI SetPerUserSecValuesW(PERUSERSECTIONW* pPerUser);
#ifdef UNICODE
#define SetPerUserSecValues  SetPerUserSecValuesW
#else
#define SetPerUserSecValues  SetPerUserSecValuesA
#endif
#else
typedef struct _PERUSERSECTIONA
{
    CHAR   szGUID[MAX_GUID_STRING_LEN + 20];
    CHAR   szDispName[128];
    CHAR   szLocale[10];
    CHAR   szStub[MAX_PATH*4];
    CHAR   szVersion[32];
    CHAR   szCompID[128];
    DWORD dwIsInstalled;
    BOOL  bRollback;
} PERUSERSECTIONA, *PPERUSERSECTIONA;
typedef PERUSERSECTIONA PERUSERSECTION;
typedef PPERUSERSECTIONA PPERUSERSECTION;
HRESULT WINAPI SetPerUserSecValues(PERUSERSECTIONA* pPerUser);
#endif
#endif
