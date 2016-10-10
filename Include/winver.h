/*+@@file@@----------------------------------------------------------------*//*!
 \file		winver.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 01:12:17 2016
 \date		Modified on Mon Jun 27 01:12:17 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef VER_H
#define VER_H
#if __POCC__ >= 500
#pragma once
#endif
#include <verrsrc.h>

#ifndef RC_INVOKED
DWORD APIENTRY VerFindFileA(DWORD uFlags, LPCSTR szFileName, LPCSTR szWinDir, LPCSTR szAppDir, LPSTR szCurDir, PUINT lpuCurDirLen, LPSTR szDestDir, PUINT lpuDestDirLen);
DWORD APIENTRY VerFindFileW(DWORD uFlags, LPCWSTR szFileName, LPCWSTR szWinDir, LPCWSTR szAppDir, LPWSTR szCurDir, PUINT lpuCurDirLen, LPWSTR szDestDir, PUINT lpuDestDirLen);
#ifdef UNICODE
#define VerFindFile  VerFindFileW
#else
#define VerFindFile  VerFindFileA
#endif
DWORD APIENTRY VerInstallFileA(DWORD uFlags, LPCSTR szSrcFileName, LPCSTR szDestFileName, LPCSTR szSrcDir, LPCSTR szDestDir, LPCSTR szCurDir, LPSTR szTmpFile, PUINT lpuTmpFileLen);
DWORD APIENTRY VerInstallFileW(DWORD uFlags, LPCWSTR szSrcFileName, LPCWSTR szDestFileName, LPCWSTR szSrcDir, LPCWSTR szDestDir, LPCWSTR szCurDir, LPWSTR szTmpFile, PUINT lpuTmpFileLen);
#ifdef UNICODE
#define VerInstallFile  VerInstallFileW
#else
#define VerInstallFile  VerInstallFileA
#endif
DWORD APIENTRY GetFileVersionInfoSizeA(LPCSTR lptstrFilename, LPDWORD lpdwHandle);
DWORD APIENTRY GetFileVersionInfoSizeW(LPCWSTR lptstrFilename, LPDWORD lpdwHandle);
#ifdef UNICODE
#define GetFileVersionInfoSize  GetFileVersionInfoSizeW
#else
#define GetFileVersionInfoSize  GetFileVersionInfoSizeA
#endif
BOOL APIENTRY GetFileVersionInfoA(LPCSTR lptstrFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData);
BOOL APIENTRY GetFileVersionInfoW(LPCWSTR lptstrFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData);
#ifdef UNICODE
#define GetFileVersionInfo  GetFileVersionInfoW
#else
#define GetFileVersionInfo  GetFileVersionInfoA
#endif
DWORD APIENTRY GetFileVersionInfoSizeExA(DWORD dwFlags, LPCSTR lpwstrFilename, LPDWORD lpdwHandle);
DWORD APIENTRY GetFileVersionInfoSizeExW(DWORD dwFlags, LPCWSTR lpwstrFilename, LPDWORD lpdwHandle);
#ifdef UNICODE
#define GetFileVersionInfoSizeEx  GetFileVersionInfoSizeExW
#else
#define GetFileVersionInfoSizeEx  GetFileVersionInfoSizeExA
#endif
BOOL APIENTRY GetFileVersionInfoExA(DWORD dwFlags, LPCSTR lpwstrFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData);
BOOL APIENTRY GetFileVersionInfoExW(DWORD dwFlags, LPCWSTR lpwstrFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData);
#ifdef UNICODE
#define GetFileVersionInfoEx  GetFileVersionInfoExW
#else
#define GetFileVersionInfoEx  GetFileVersionInfoExA
#endif
DWORD APIENTRY VerLanguageNameA(DWORD wLang, LPSTR szLang, DWORD cchLang);
DWORD APIENTRY VerLanguageNameW(DWORD wLang, LPWSTR szLang, DWORD cchLang);
#ifdef UNICODE
#define VerLanguageName  VerLanguageNameW
#else
#define VerLanguageName  VerLanguageNameA
#endif
BOOL APIENTRY VerQueryValueA(LPCVOID pBlock, LPCSTR lpSubBlock, LPVOID *lplpBuffer, PUINT puLen);
BOOL APIENTRY VerQueryValueW(LPCVOID pBlock, LPCWSTR lpSubBlock, LPVOID *lplpBuffer, PUINT puLen);
#ifdef UNICODE
#define VerQueryValue  VerQueryValueW
#else
#define VerQueryValue  VerQueryValueA
#endif
#endif

#endif



