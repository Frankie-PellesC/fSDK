/*+@@file@@----------------------------------------------------------------*//*!
 \file		perflib.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 19:56:28 2016
 \date		Modified on Sat Sep  3 19:56:28 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _PERFLIB_H_
#define _PERFLIB_H_
#if __POCC__ >= 500
#pragma once
#endif
#define PERF_PROVIDER_USER_MODE   0
#define PERF_PROVIDER_KERNEL_MODE 1
#define PERF_PROVIDER_DRIVER      2
#define PERF_COUNTERSET_FLAG_MULTIPLE             2
#define PERF_COUNTERSET_FLAG_AGGREGATE            4
#define PERF_COUNTERSET_FLAG_HISTORY              8
#define PERF_COUNTERSET_FLAG_INSTANCE            16
#define PERF_COUNTERSET_SINGLE_INSTANCE          0
#define PERF_COUNTERSET_MULTI_INSTANCES          (PERF_COUNTERSET_FLAG_MULTIPLE)
#define PERF_COUNTERSET_SINGLE_AGGREGATE         (PERF_COUNTERSET_FLAG_AGGREGATE)
#define PERF_COUNTERSET_MULTI_AGGREGATE          (PERF_COUNTERSET_FLAG_AGGREGATE | PERF_COUNTERSET_FLAG_MULTIPLE)
#define PERF_COUNTERSET_SINGLE_AGGREGATE_HISTORY (PERF_COUNTERSET_FLAG_HISTORY | PERF_COUNTERSET_SINGLE_AGGREGATE)
#define PERF_COUNTERSET_INSTANCE_AGGREGATE       (PERF_COUNTERSET_MULTI_AGGREGATE | PERF_COUNTERSET_FLAG_INSTANCE)
#define PERF_AGGREGATE_UNDEFINED  0
#define PERF_AGGREGATE_TOTAL      1
#define PERF_AGGREGATE_AVG        2
#define PERF_AGGREGATE_MIN        3
#define PERF_AGGREGATE_MAX        4
#define PERF_ATTRIB_BY_REFERENCE       0x0000000000000001
#define PERF_ATTRIB_NO_DISPLAYABLE     0x0000000000000002
#define PERF_ATTRIB_NO_GROUP_SEPARATOR 0x0000000000000004
#define PERF_ATTRIB_DISPLAY_AS_REAL    0x0000000000000008
#define PERF_ATTRIB_DISPLAY_AS_HEX     0x0000000000000010
typedef struct _PERF_COUNTERSET_INFO
{
    GUID   CounterSetGuid;
    GUID   ProviderGuid;
    ULONG  NumCounters;
    ULONG  InstanceType;
} PERF_COUNTERSET_INFO, * PPERF_COUNTERSET_INFO;
typedef struct _PERF_COUNTER_INFO
{
    ULONG      CounterId;
    ULONG      Type;
    ULONGLONG  Attrib;
    ULONG      Size;
    ULONG      DetailLevel;
    LONG       Scale;
    ULONG      Offset;
} PERF_COUNTER_INFO, * PPERF_COUNTER_INFO;
typedef struct _PERF_COUNTERSET_INSTANCE
{
    GUID   CounterSetGuid;
    ULONG  dwSize;
    ULONG  InstanceId;
    ULONG  InstanceNameOffset;
    ULONG  InstanceNameSize;
} PERF_COUNTERSET_INSTANCE, * PPERF_COUNTERSET_INSTANCE;
typedef struct _PERF_COUNTER_IDENTITY
{
    GUID   CounterSetGuid;
    ULONG  BufferSize;
    ULONG  CounterId;
    ULONG  InstanceId;
    ULONG  MachineOffset;
    ULONG  NameOffset;
    ULONG  Reserved;
} PERF_COUNTER_IDENTITY, * PPERF_COUNTER_IDENTITY;
#define PERF_WILDCARD_COUNTER   0xFFFFFFFF
#define PERF_WILDCARD_INSTANCE  L"*"
#define PERF_AGGREGATE_INSTANCE L"_Total"
#define PERF_MAX_INSTANCE_NAME  1024
#define PERF_ADD_COUNTER            1
#define PERF_REMOVE_COUNTER         2
#define PERF_ENUM_INSTANCES         3
#define PERF_COLLECT_START          5
#define PERF_COLLECT_END            6
#define PERF_FILTER                 9
typedef ULONG(WINAPI *PERFLIBREQUEST) (ULONG RequestCode, PVOID Buffer, ULONG BufferSize);
ULONG __stdcall PerfStartProvider(LPGUID ProviderGuid, PERFLIBREQUEST ControlCallback, HANDLE *phProvider);
typedef LPVOID(*PERF_MEM_ALLOC) (SIZE_T AllocSize, LPVOID pContext);
typedef void (*PERF_MEM_FREE) (LPVOID pBuffer, LPVOID pContext);
typedef struct _PROVIDER_CONTEXT
{
	DWORD ContextSize;
	DWORD Reserved;
	PERFLIBREQUEST ControlCallback;
	PERF_MEM_ALLOC MemAllocRoutine;
	PERF_MEM_FREE MemFreeRoutine;
	LPVOID pMemContext;
} PERF_PROVIDER_CONTEXT, *PPERF_PROVIDER_CONTEXT;
ULONG WINAPI PerfStartProviderEx(LPGUID ProviderGuid, PPERF_PROVIDER_CONTEXT ProviderContext, PHANDLE Provider);
ULONG WINAPI PerfStartProvider(LPGUID ProviderGuid, PERFLIBREQUEST ControlCallback, PHANDLE Provider);
ULONG WINAPI PerfStopProvider(HANDLE ProviderHandle);
ULONG WINAPI PerfSetCounterSetInfo(HANDLE ProviderHandle, PPERF_COUNTERSET_INFO Template, ULONG TemplateSize);
PPERF_COUNTERSET_INSTANCE WINAPI PerfCreateInstance(HANDLE ProviderHandle, LPCGUID CounterSetGuid, PCWSTR Name, ULONG Id);
ULONG WINAPI PerfDeleteInstance(HANDLE Provider, PPERF_COUNTERSET_INSTANCE InstanceBlock);
PPERF_COUNTERSET_INSTANCE WINAPI PerfQueryInstance(HANDLE ProviderHandle, LPCGUID CounterSetGuid, PCWSTR Name, ULONG Id);
ULONG WINAPI PerfSetCounterRefValue(HANDLE Provider, PPERF_COUNTERSET_INSTANCE Instance, ULONG CounterId, PVOID Address);
ULONG WINAPI PerfSetULongCounterValue(HANDLE Provider, PPERF_COUNTERSET_INSTANCE Instance, ULONG CounterId, ULONG Value);
ULONG WINAPI PerfSetULongLongCounterValue(HANDLE Provider, PPERF_COUNTERSET_INSTANCE Instance, ULONG CounterId, ULONGLONG Value);
ULONG WINAPI PerfIncrementULongCounterValue(HANDLE Provider, PPERF_COUNTERSET_INSTANCE Instance, ULONG CounterId, ULONG Value);
ULONG WINAPI PerfIncrementULongLongCounterValue(HANDLE Provider, PPERF_COUNTERSET_INSTANCE Instance, ULONG CounterId, ULONGLONG Value);
ULONG WINAPI PerfDecrementULongCounterValue(HANDLE Provider, PPERF_COUNTERSET_INSTANCE Instance, ULONG CounterId, ULONG Value);
ULONG WINAPI PerfDecrementULongLongCounterValue(HANDLE Provider, PPERF_COUNTERSET_INSTANCE Instance, ULONG CounterId, ULONGLONG Value);
#endif
