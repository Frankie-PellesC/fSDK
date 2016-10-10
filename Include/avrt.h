/*+@@file@@----------------------------------------------------------------*//*!
 \file		avrt.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  1 13:49:55 2016
 \date		Modified on Fri Jul  1 13:49:55 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _AVRT_
#define _AVRT_
#if __POCC__ >= 500
#pragma once
#endif
typedef enum _AVRT_PRIORITY
{
    AVRT_PRIORITY_LOW = -1,
    AVRT_PRIORITY_NORMAL,
    AVRT_PRIORITY_HIGH,
    AVRT_PRIORITY_CRITICAL
} AVRT_PRIORITY, *PAVRT_PRIORITY;
#define THREAD_ORDER_GROUP_INFINITE_TIMEOUT     (-1I64)
#if !defined(_AVRT_)
#define AVRTAPI DECLSPEC_IMPORT
#else
#define AVRTAPI
#endif
AVRTAPI HANDLE WINAPI AvSetMmThreadCharacteristicsA(LPCSTR TaskName, LPDWORD TaskIndex);
AVRTAPI HANDLE WINAPI AvSetMmThreadCharacteristicsW(LPCWSTR TaskName, LPDWORD TaskIndex);
#ifdef UNICODE
#define AvSetMmThreadCharacteristics  AvSetMmThreadCharacteristicsW
#else
#define AvSetMmThreadCharacteristics  AvSetMmThreadCharacteristicsA
#endif
AVRTAPI HANDLE WINAPI AvSetMmMaxThreadCharacteristicsA(LPCSTR FirstTask, LPCSTR SecondTask, LPDWORD TaskIndex);
AVRTAPI HANDLE WINAPI AvSetMmMaxThreadCharacteristicsW(LPCWSTR FirstTask, LPCWSTR SecondTask, LPDWORD TaskIndex);
#ifdef UNICODE
#define AvSetMmMaxThreadCharacteristics  AvSetMmMaxThreadCharacteristicsW
#else
#define AvSetMmMaxThreadCharacteristics  AvSetMmMaxThreadCharacteristicsA
#endif
AVRTAPI BOOL WINAPI AvRevertMmThreadCharacteristics(HANDLE AvrtHandle);
AVRTAPI BOOL WINAPI AvSetMmThreadPriority(HANDLE AvrtHandle, AVRT_PRIORITY Priority);
AVRTAPI BOOL WINAPI AvRtCreateThreadOrderingGroup(PHANDLE Context, PLARGE_INTEGER Period, GUID *ThreadOrderingGuid, PLARGE_INTEGER Timeout);
AVRTAPI BOOL WINAPI AvRtCreateThreadOrderingGroupExA(PHANDLE Context, PLARGE_INTEGER Period, GUID *ThreadOrderingGuid, PLARGE_INTEGER Timeout, LPCSTR TaskName);
AVRTAPI BOOL WINAPI AvRtCreateThreadOrderingGroupExW(PHANDLE Context, PLARGE_INTEGER Period, GUID *ThreadOrderingGuid, PLARGE_INTEGER Timeout, LPCWSTR TaskName);
#ifdef UNICODE
#define AvRtCreateThreadOrderingGroupEx  AvRtCreateThreadOrderingGroupExW
#else
#define AvRtCreateThreadOrderingGroupEx  AvRtCreateThreadOrderingGroupExA
#endif
AVRTAPI BOOL WINAPI AvRtJoinThreadOrderingGroup(PHANDLE Context, GUID *ThreadOrderingGuid, BOOL Before);
AVRTAPI BOOL WINAPI AvRtWaitOnThreadOrderingGroup(HANDLE Context);
AVRTAPI BOOL WINAPI AvRtLeaveThreadOrderingGroup(HANDLE Context);
AVRTAPI BOOL WINAPI AvRtDeleteThreadOrderingGroup(HANDLE Context);
AVRTAPI BOOL WINAPI AvQuerySystemResponsiveness(HANDLE AvrtHandle, PULONG SystemResponsivenessValue);
#endif
