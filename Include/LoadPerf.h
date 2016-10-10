/*+@@file@@----------------------------------------------------------------*//*!
 \file		LoadPerf.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 23:51:15 2016
 \date		Modified on Sun Jul 17 23:51:15 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _LOADPERF_H_
#define _LOADPERF_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifdef __LOADPERF__
#define LOADPERF_FUNCTION   DWORD __stdcall
#else
#define LOADPERF_FUNCTION   __declspec(dllimport) DWORD __stdcall
#endif
#define LOADPERF_FLAGS_DELETE_MOF_ON_EXIT   ((ULONG_PTR) 1)
#define LOADPERF_FLAGS_LOAD_REGISTRY_ONLY   ((ULONG_PTR) 2)
#define LOADPERF_FLAGS_CREATE_MOF_ONLY      ((ULONG_PTR) 4)
#define LOADPERF_FLAGS_DISPLAY_USER_MSGS    ((ULONG_PTR) 8)
LOADPERF_FUNCTION InstallPerfDllW(LPCWSTR szComputerName, LPCWSTR lpIniFile, ULONG_PTR dwFlags);
LOADPERF_FUNCTION InstallPerfDllA(LPCSTR szComputerName, LPCSTR lpIniFile, ULONG_PTR dwFlags);
LOADPERF_FUNCTION LoadPerfCounterTextStringsA(LPSTR lpCommandLine, BOOL bQuietModeArg);
LOADPERF_FUNCTION LoadPerfCounterTextStringsW(LPWSTR lpCommandLine, BOOL bQuietModeArg);
LOADPERF_FUNCTION UnloadPerfCounterTextStringsW(LPWSTR lpCommandLine, BOOL bQuietModeArg);
LOADPERF_FUNCTION UnloadPerfCounterTextStringsA(LPSTR lpCommandLine, BOOL bQuietModeArg);
LOADPERF_FUNCTION UpdatePerfNameFilesA(LPCSTR szNewCtrFilePath, LPCSTR szNewHlpFilePath, LPSTR szLanguageID, ULONG_PTR dwFlags);
LOADPERF_FUNCTION UpdatePerfNameFilesW(LPCWSTR szNewCtrFilePath, LPCWSTR szNewHlpFilePath, LPWSTR szLanguageID, ULONG_PTR dwFlags);
LOADPERF_FUNCTION SetServiceAsTrustedA(LPCSTR szReserved, LPCSTR szServiceName);
LOADPERF_FUNCTION SetServiceAsTrustedW(LPCWSTR szReserved, LPCWSTR szServiceName);
DWORD BackupPerfRegistryToFileW(LPCWSTR szFileName, LPCWSTR szCommentString);
DWORD RestorePerfRegistryFromFileW(LPCWSTR szFileName, LPCWSTR szLangId);
#ifdef UNICODE
#define InstallPerfDll                  InstallPerfDllW
#define LoadPerfCounterTextStrings      LoadPerfCounterTextStringsW
#define UnloadPerfCounterTextStrings    UnloadPerfCounterTextStringsW
#define UpdatePerfNameFiles             UpdatePerfNameFilesW 
#define SetServiceAsTrusted             SetServiceAsTrustedW
#else
#define InstallPerfDll                  InstallPerfDllA
#define LoadPerfCounterTextStrings      LoadPerfCounterTextStringsA
#define UnloadPerfCounterTextStrings    UnloadPerfCounterTextStringsA
#define UpdatePerfNameFiles             UpdatePerfNameFilesA
#define SetServiceAsTrusted             SetServiceAsTrustedA
#endif
#endif
