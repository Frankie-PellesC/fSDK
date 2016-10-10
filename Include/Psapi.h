/*+@@file@@----------------------------------------------------------------*//*!
 \file		Psapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 20:28:24 2016
 \date		Modified on Sat Sep  3 20:28:24 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _PSAPI_H_
#define _PSAPI_H_
#if __POCC__ >= 500
#pragma once
#endif
#define LIST_MODULES_DEFAULT 0x0
#define LIST_MODULES_32BIT   0x01
#define LIST_MODULES_64BIT   0x02
#define LIST_MODULES_ALL   (LIST_MODULES_32BIT | LIST_MODULES_64BIT)
#ifndef PSAPI_VERSION
#if (NTDDI_VERSION >= NTDDI_WIN7)
#define PSAPI_VERSION 2
#else
#define PSAPI_VERSION 1
#endif
#endif
#if (PSAPI_VERSION > 1)
#define EnumProcesses               K32EnumProcesses
#define EnumProcessModules          K32EnumProcessModules
#define EnumProcessModulesEx        K32EnumProcessModulesEx
#define GetModuleBaseNameA          K32GetModuleBaseNameA
#define GetModuleBaseNameW          K32GetModuleBaseNameW
#define GetModuleFileNameExA        K32GetModuleFileNameExA
#define GetModuleFileNameExW        K32GetModuleFileNameExW
#define GetModuleInformation        K32GetModuleInformation
#define EmptyWorkingSet             K32EmptyWorkingSet
#define QueryWorkingSet             K32QueryWorkingSet
#define QueryWorkingSetEx           K32QueryWorkingSetEx
#define InitializeProcessForWsWatch K32InitializeProcessForWsWatch
#define GetWsChanges                K32GetWsChanges
#define GetWsChangesEx              K32GetWsChangesEx
#define GetMappedFileNameW          K32GetMappedFileNameW
#define GetMappedFileNameA          K32GetMappedFileNameA
#define EnumDeviceDrivers           K32EnumDeviceDrivers
#define GetDeviceDriverBaseNameA    K32GetDeviceDriverBaseNameA
#define GetDeviceDriverBaseNameW    K32GetDeviceDriverBaseNameW
#define GetDeviceDriverFileNameA    K32GetDeviceDriverFileNameA
#define GetDeviceDriverFileNameW    K32GetDeviceDriverFileNameW
#define GetProcessMemoryInfo        K32GetProcessMemoryInfo
#define GetPerformanceInfo          K32GetPerformanceInfo
#define EnumPageFilesW              K32EnumPageFilesW
#define EnumPageFilesA              K32EnumPageFilesA
#define GetProcessImageFileNameA    K32GetProcessImageFileNameA
#define GetProcessImageFileNameW    K32GetProcessImageFileNameW
#endif
BOOL WINAPI EnumProcesses(DWORD *lpidProcess, DWORD cb, LPDWORD lpcbNeeded);
BOOL WINAPI EnumProcessModules(HANDLE hProcess, HMODULE *lphModule, DWORD cb, LPDWORD lpcbNeeded);
BOOL WINAPI EnumProcessModulesEx(HANDLE hProcess, HMODULE *lphModule, DWORD cb, LPDWORD lpcbNeeded, DWORD dwFilterFlag);
DWORD WINAPI GetModuleBaseNameA(HANDLE hProcess, HMODULE hModule, LPSTR lpBaseName, DWORD nSize);
DWORD WINAPI GetModuleBaseNameW(HANDLE hProcess, HMODULE hModule, LPWSTR lpBaseName, DWORD nSize);
#ifdef UNICODE
#define GetModuleBaseName  GetModuleBaseNameW
#else
#define GetModuleBaseName  GetModuleBaseNameA
#endif
DWORD WINAPI GetModuleFileNameExA(HANDLE hProcess, HMODULE hModule, LPSTR lpFilename, DWORD nSize);
DWORD WINAPI GetModuleFileNameExW(HANDLE hProcess, HMODULE hModule, LPWSTR lpFilename, DWORD nSize);
#ifdef UNICODE
#define GetModuleFileNameEx  GetModuleFileNameExW
#else
#define GetModuleFileNameEx  GetModuleFileNameExA
#endif
typedef struct _MODULEINFO
{
	LPVOID lpBaseOfDll;
	DWORD SizeOfImage;
	LPVOID EntryPoint;
} MODULEINFO, *LPMODULEINFO;
BOOL WINAPI GetModuleInformation(HANDLE hProcess, HMODULE hModule, LPMODULEINFO lpmodinfo, DWORD cb);
BOOL WINAPI EmptyWorkingSet(HANDLE hProcess);
typedef union _PSAPI_WORKING_SET_BLOCK
{
	ULONG_PTR Flags;
	struct
	{
		ULONG_PTR Protection:5;
		ULONG_PTR ShareCount:3;
		ULONG_PTR Shared:1;
		ULONG_PTR Reserved:3;
#if defined(_WIN64)
		ULONG_PTR VirtualPage:52;
#else
		ULONG_PTR VirtualPage:20;
#endif
	};
} PSAPI_WORKING_SET_BLOCK, *PPSAPI_WORKING_SET_BLOCK;
typedef struct _PSAPI_WORKING_SET_INFORMATION
{
    ULONG_PTR NumberOfEntries;
    PSAPI_WORKING_SET_BLOCK WorkingSetInfo[1];
} PSAPI_WORKING_SET_INFORMATION, *PPSAPI_WORKING_SET_INFORMATION;
typedef union _PSAPI_WORKING_SET_EX_BLOCK
{
    ULONG_PTR Flags;
    struct
	{
        ULONG_PTR Valid : 1;
        ULONG_PTR ShareCount : 3;
        ULONG_PTR Win32Protection : 11;
        ULONG_PTR Shared : 1;
        ULONG_PTR Node : 6;
        ULONG_PTR Locked : 1;
        ULONG_PTR LargePage : 1;
    };
} PSAPI_WORKING_SET_EX_BLOCK, *PPSAPI_WORKING_SET_EX_BLOCK;
typedef struct _PSAPI_WORKING_SET_EX_INFORMATION
{
    PVOID VirtualAddress;
    PSAPI_WORKING_SET_EX_BLOCK VirtualAttributes;
} PSAPI_WORKING_SET_EX_INFORMATION, *PPSAPI_WORKING_SET_EX_INFORMATION;
BOOL WINAPI QueryWorkingSet(HANDLE hProcess, PVOID pv, DWORD cb);
BOOL WINAPI QueryWorkingSetEx(HANDLE hProcess, PVOID pv, DWORD cb);
BOOL WINAPI InitializeProcessForWsWatch(HANDLE hProcess);
typedef struct _PSAPI_WS_WATCH_INFORMATION
{
    LPVOID FaultingPc;
    LPVOID FaultingVa;
} PSAPI_WS_WATCH_INFORMATION, *PPSAPI_WS_WATCH_INFORMATION;
typedef struct _PSAPI_WS_WATCH_INFORMATION_EX
{
    PSAPI_WS_WATCH_INFORMATION BasicInfo;
    ULONG_PTR FaultingThreadId;
    ULONG_PTR Flags;
} PSAPI_WS_WATCH_INFORMATION_EX, *PPSAPI_WS_WATCH_INFORMATION_EX;
BOOL WINAPI GetWsChanges(HANDLE hProcess, PPSAPI_WS_WATCH_INFORMATION lpWatchInfo, DWORD cb);
BOOL WINAPI GetWsChangesEx(HANDLE hProcess, PPSAPI_WS_WATCH_INFORMATION_EX lpWatchInfoEx, PDWORD cb);
DWORD WINAPI GetMappedFileNameW(HANDLE hProcess, LPVOID lpv, LPWSTR lpFilename, DWORD nSize);
DWORD WINAPI GetMappedFileNameA(HANDLE hProcess, LPVOID lpv, LPSTR lpFilename, DWORD nSize);
#ifdef UNICODE
#define GetMappedFileName  GetMappedFileNameW
#else
#define GetMappedFileName  GetMappedFileNameA
#endif
BOOL WINAPI EnumDeviceDrivers(LPVOID *lpImageBase, DWORD cb, LPDWORD lpcbNeeded);
DWORD WINAPI GetDeviceDriverBaseNameA(LPVOID ImageBase, LPSTR lpFilename, DWORD nSize);
DWORD WINAPI GetDeviceDriverBaseNameW(LPVOID ImageBase, LPWSTR lpBaseName, DWORD nSize);
#ifdef UNICODE
#define GetDeviceDriverBaseName  GetDeviceDriverBaseNameW
#else
#define GetDeviceDriverBaseName  GetDeviceDriverBaseNameA
#endif
DWORD WINAPI GetDeviceDriverFileNameA(LPVOID ImageBase, LPSTR lpFilename, DWORD nSize);
DWORD WINAPI GetDeviceDriverFileNameW(LPVOID ImageBase, LPWSTR lpFilename, DWORD nSize);
#ifdef UNICODE
#define GetDeviceDriverFileName  GetDeviceDriverFileNameW
#else
#define GetDeviceDriverFileName  GetDeviceDriverFileNameA
#endif
typedef struct _PROCESS_MEMORY_COUNTERS
{
    DWORD cb;
    DWORD PageFaultCount;
    SIZE_T PeakWorkingSetSize;
    SIZE_T WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
} PROCESS_MEMORY_COUNTERS;
typedef PROCESS_MEMORY_COUNTERS *PPROCESS_MEMORY_COUNTERS;
#if (_WIN32_WINNT >= 0x0501)
typedef struct _PROCESS_MEMORY_COUNTERS_EX
{
    DWORD cb;
    DWORD PageFaultCount;
    SIZE_T PeakWorkingSetSize;
    SIZE_T WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
    SIZE_T PrivateUsage;
} PROCESS_MEMORY_COUNTERS_EX;
typedef PROCESS_MEMORY_COUNTERS_EX *PPROCESS_MEMORY_COUNTERS_EX;
#endif
BOOL WINAPI GetProcessMemoryInfo(HANDLE Process, PPROCESS_MEMORY_COUNTERS ppsmemCounters, DWORD cb);
typedef struct _PERFORMANCE_INFORMATION
{
    DWORD cb;
    SIZE_T CommitTotal;
    SIZE_T CommitLimit;
    SIZE_T CommitPeak;
    SIZE_T PhysicalTotal;
    SIZE_T PhysicalAvailable;
    SIZE_T SystemCache;
    SIZE_T KernelTotal;
    SIZE_T KernelPaged;
    SIZE_T KernelNonpaged;
    SIZE_T PageSize;
    DWORD HandleCount;
    DWORD ProcessCount;
    DWORD ThreadCount;
} PERFORMANCE_INFORMATION, *PPERFORMANCE_INFORMATION, PERFORMACE_INFORMATION, *PPERFORMACE_INFORMATION;
BOOL WINAPI GetPerformanceInfo(PPERFORMANCE_INFORMATION pPerformanceInformation, DWORD cb);
typedef struct _ENUM_PAGE_FILE_INFORMATION
{
    DWORD cb;
    DWORD Reserved;
    SIZE_T TotalSize;
    SIZE_T TotalInUse;
    SIZE_T PeakUsage;
} ENUM_PAGE_FILE_INFORMATION, *PENUM_PAGE_FILE_INFORMATION;
typedef BOOL (*PENUM_PAGE_FILE_CALLBACKW) (LPVOID pContext, PENUM_PAGE_FILE_INFORMATION pPageFileInfo, LPCWSTR lpFilename);
typedef BOOL (*PENUM_PAGE_FILE_CALLBACKA) (LPVOID pContext, PENUM_PAGE_FILE_INFORMATION pPageFileInfo, LPCSTR lpFilename);
BOOL WINAPI EnumPageFilesW(PENUM_PAGE_FILE_CALLBACKW pCallBackRoutine, LPVOID pContext);
BOOL WINAPI EnumPageFilesA(PENUM_PAGE_FILE_CALLBACKA pCallBackRoutine, LPVOID pContext);
#ifdef UNICODE
#define PENUM_PAGE_FILE_CALLBACK PENUM_PAGE_FILE_CALLBACKW
#define EnumPageFiles EnumPageFilesW
#else
#define PENUM_PAGE_FILE_CALLBACK PENUM_PAGE_FILE_CALLBACKA
#define EnumPageFiles EnumPageFilesA
#endif
DWORD WINAPI GetProcessImageFileNameA(HANDLE hProcess, LPSTR lpImageFileName, DWORD nSize);
DWORD WINAPI GetProcessImageFileNameW(HANDLE hProcess, LPWSTR lpImageFileName, DWORD nSize);
#ifdef UNICODE
#define GetProcessImageFileName  GetProcessImageFileNameW
#else
#define GetProcessImageFileName  GetProcessImageFileNameA
#endif
#endif
