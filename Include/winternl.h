/*+@@file@@----------------------------------------------------------------*//*!
 \file		winternl.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 23:05:28 2016
 \date		Modified on Sun Sep  4 23:05:28 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WINTERNL_
#define _WINTERNL_
#if __POCC__ >= 500
#pragma once
#endif
#if (_WIN32_WINNT >= 0x0500)
#include <windef.h>
typedef LONG NTSTATUS;
typedef CONST char *PCSZ;
typedef struct _STRING
{
    USHORT Length;
    USHORT MaximumLength;
    PCHAR Buffer;
} STRING;
typedef STRING *PSTRING;
typedef STRING ANSI_STRING;
typedef PSTRING PANSI_STRING;
typedef PSTRING PCANSI_STRING;
typedef STRING OEM_STRING;
typedef PSTRING POEM_STRING;
typedef CONST STRING* PCOEM_STRING;
typedef struct _UNICODE_STRING
{
    USHORT Length;
    USHORT MaximumLength;
    PWSTR  Buffer;
} UNICODE_STRING;
typedef UNICODE_STRING *PUNICODE_STRING;
typedef const UNICODE_STRING *PCUNICODE_STRING;
typedef struct _PEB_LDR_DATA
{
    BYTE Reserved1[8];
    PVOID Reserved2[3];
    LIST_ENTRY InMemoryOrderModuleList;
} PEB_LDR_DATA, *PPEB_LDR_DATA;
typedef struct _LDR_DATA_TABLE_ENTRY
{
    PVOID Reserved1[2];
    LIST_ENTRY InMemoryOrderLinks;
    PVOID Reserved2[2];
    PVOID DllBase;
    PVOID Reserved3[2];
    UNICODE_STRING FullDllName;
    BYTE Reserved4[8];
    PVOID Reserved5[3];
    union
	{
        ULONG CheckSum;
        PVOID Reserved6;
    } DUMMYUNIONNAME;
    ULONG TimeDateStamp;
} LDR_DATA_TABLE_ENTRY, *PLDR_DATA_TABLE_ENTRY;
typedef struct _RTL_USER_PROCESS_PARAMETERS
{
    BYTE Reserved1[16];
    PVOID Reserved2[10];
    UNICODE_STRING ImagePathName;
    UNICODE_STRING CommandLine;
} RTL_USER_PROCESS_PARAMETERS, *PRTL_USER_PROCESS_PARAMETERS;
typedef VOID(NTAPI *PPS_POST_PROCESS_INIT_ROUTINE) (VOID);
typedef struct _PEB
{
    BYTE Reserved1[2];
    BYTE BeingDebugged;
    BYTE Reserved2[1];
    PVOID Reserved3[2];
    PPEB_LDR_DATA Ldr;
    PRTL_USER_PROCESS_PARAMETERS ProcessParameters;
    BYTE Reserved4[104];
    PVOID Reserved5[52];
    PPS_POST_PROCESS_INIT_ROUTINE PostProcessInitRoutine;
    BYTE Reserved6[128];
    PVOID Reserved7[1];
    ULONG SessionId;
} PEB, *PPEB;
typedef struct _TEB
{
    BYTE Reserved1[1952];
    PVOID Reserved2[412];
    PVOID TlsSlots[64];
    BYTE Reserved3[8];
    PVOID Reserved4[26];
    PVOID ReservedForOle;
    PVOID Reserved5[4];
    PVOID TlsExpansionSlots;
} TEB, *PTEB;
typedef struct _OBJECT_ATTRIBUTES
{
    ULONG Length;
    HANDLE RootDirectory;
    PUNICODE_STRING ObjectName;
    ULONG Attributes;
    PVOID SecurityDescriptor;
    PVOID SecurityQualityOfService;
} OBJECT_ATTRIBUTES;
typedef OBJECT_ATTRIBUTES *POBJECT_ATTRIBUTES;
typedef struct _IO_STATUS_BLOCK
{
    union
	{
        NTSTATUS Status;
        PVOID Pointer;
    } DUMMYUNIONNAME;
    ULONG_PTR Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK;
typedef VOID(NTAPI *PIO_APC_ROUTINE) (PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved);
typedef struct _PROCESS_BASIC_INFORMATION
{
    PVOID Reserved1;
    PPEB PebBaseAddress;
    PVOID Reserved2[2];
    ULONG_PTR UniqueProcessId;
    PVOID Reserved3;
} PROCESS_BASIC_INFORMATION;
typedef PROCESS_BASIC_INFORMATION *PPROCESS_BASIC_INFORMATION;
typedef struct _SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION
{
    LARGE_INTEGER IdleTime;
    LARGE_INTEGER KernelTime;
    LARGE_INTEGER UserTime;
    LARGE_INTEGER Reserved1[2];
    ULONG Reserved2;
} SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION, *PSYSTEM_PROCESSOR_PERFORMANCE_INFORMATION;
typedef struct _SYSTEM_PROCESS_INFORMATION
{
    ULONG NextEntryOffset;
    BYTE Reserved1[52];
    PVOID Reserved2[3];
    HANDLE UniqueProcessId;
    PVOID Reserved3;
    ULONG HandleCount;
    BYTE Reserved4[4];
    PVOID Reserved5[11];
    SIZE_T PeakPagefileUsage;
    SIZE_T PrivatePageCount;
    LARGE_INTEGER Reserved6[6];
} SYSTEM_PROCESS_INFORMATION, *PSYSTEM_PROCESS_INFORMATION;
typedef struct _SYSTEM_REGISTRY_QUOTA_INFORMATION
{
    ULONG RegistryQuotaAllowed;
    ULONG RegistryQuotaUsed;
    PVOID Reserved1;
} SYSTEM_REGISTRY_QUOTA_INFORMATION, *PSYSTEM_REGISTRY_QUOTA_INFORMATION;
typedef struct _SYSTEM_BASIC_INFORMATION
{
    BYTE Reserved1[24];
    PVOID Reserved2[4];
    CCHAR NumberOfProcessors;
} SYSTEM_BASIC_INFORMATION, *PSYSTEM_BASIC_INFORMATION;
typedef struct _SYSTEM_TIMEOFDAY_INFORMATION
{
    BYTE Reserved1[48];
} SYSTEM_TIMEOFDAY_INFORMATION, *PSYSTEM_TIMEOFDAY_INFORMATION;
typedef struct _SYSTEM_PERFORMANCE_INFORMATION
{
    BYTE Reserved1[312];
} SYSTEM_PERFORMANCE_INFORMATION, *PSYSTEM_PERFORMANCE_INFORMATION;
typedef struct _SYSTEM_EXCEPTION_INFORMATION
{
    BYTE Reserved1[16];
} SYSTEM_EXCEPTION_INFORMATION, *PSYSTEM_EXCEPTION_INFORMATION;
typedef struct _SYSTEM_LOOKASIDE_INFORMATION
{
    BYTE Reserved1[32];
} SYSTEM_LOOKASIDE_INFORMATION, *PSYSTEM_LOOKASIDE_INFORMATION;
typedef struct _SYSTEM_INTERRUPT_INFORMATION
{
    BYTE Reserved1[24];
} SYSTEM_INTERRUPT_INFORMATION, *PSYSTEM_INTERRUPT_INFORMATION;
typedef enum _FILE_INFORMATION_CLASS
{
    FileDirectoryInformation = 1
} FILE_INFORMATION_CLASS;
typedef enum _PROCESSINFOCLASS
{
    ProcessBasicInformation = 0,
    ProcessWow64Information = 26
} PROCESSINFOCLASS;
typedef enum _THREADINFOCLASS
{
    ThreadIsIoPending = 16
} THREADINFOCLASS;
typedef enum _SYSTEM_INFORMATION_CLASS
{
    SystemBasicInformation = 0,
    SystemPerformanceInformation = 2,
    SystemTimeOfDayInformation = 3,
    SystemProcessInformation = 5,
    SystemProcessorPerformanceInformation = 8,
    SystemInterruptInformation = 23,
    SystemExceptionInformation = 33,
    SystemRegistryQuotaInformation = 37,
    SystemLookasideInformation = 45
} SYSTEM_INFORMATION_CLASS;
typedef enum _OBJECT_INFORMATION_CLASS
{
    ObjectBasicInformation = 0,
    ObjectTypeInformation = 2
} OBJECT_INFORMATION_CLASS;
typedef struct _PUBLIC_OBJECT_BASIC_INFORMATION
{
    ULONG Attributes;
    ACCESS_MASK GrantedAccess;
    ULONG HandleCount;
    ULONG PointerCount;
    ULONG Reserved[10];
} PUBLIC_OBJECT_BASIC_INFORMATION, *PPUBLIC_OBJECT_BASIC_INFORMATION;
typedef struct __PUBLIC_OBJECT_TYPE_INFORMATION
{
    UNICODE_STRING TypeName;
    ULONG Reserved [22];
} PUBLIC_OBJECT_TYPE_INFORMATION, *PPUBLIC_OBJECT_TYPE_INFORMATION;
#if (_WIN32_WINNT >= 0x0501)
#define INTERNAL_TS_ACTIVE_CONSOLE_ID ( *((volatile ULONG*)(0x7ffe02d8)) )
#endif
#define RtlMoveMemory(Destination,Source,Length) memmove((Destination),(Source),(Length))
#define RtlFillMemory(Destination,Length,Fill) memset((Destination),(Fill),(Length))
#define RtlZeroMemory(Destination,Length) memset((Destination),0,(Length))
NTSTATUS NTAPI NtClose(HANDLE Handle);
NTSTATUS NTAPI NtCreateFile(PHANDLE FileHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes, PIO_STATUS_BLOCK IoStatusBlock, PLARGE_INTEGER AllocationSize, ULONG FileAttributes, ULONG ShareAccess, ULONG CreateDisposition, ULONG CreateOptions, PVOID EaBuffer, ULONG EaLength);
NTSTATUS NTAPI NtOpenFile(PHANDLE FileHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes, PIO_STATUS_BLOCK IoStatusBlock, ULONG ShareAccess, ULONG OpenOptions);
NTSTATUS NTAPI NtDeviceIoControlFile(HANDLE FileHandle, HANDLE Event, PIO_APC_ROUTINE ApcRoutine, PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG IoControlCode, PVOID InputBuffer, ULONG InputBufferLength, PVOID OutputBuffer, ULONG OutputBufferLength);
NTSTATUS NTAPI NtWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout);
BOOLEAN NTAPI RtlIsNameLegalDOS8Dot3(PUNICODE_STRING Name, POEM_STRING OemName, PBOOLEAN NameContainsSpaces);
ULONG NTAPI RtlNtStatusToDosError(NTSTATUS Status);
NTSTATUS NTAPI NtQueryInformationProcess(HANDLE ProcessHandle, PROCESSINFOCLASS ProcessInformationClass, PVOID ProcessInformation, ULONG ProcessInformationLength, PULONG ReturnLength);
NTSTATUS NTAPI NtQueryInformationThread(HANDLE ThreadHandle, THREADINFOCLASS ThreadInformationClass, PVOID ThreadInformation, ULONG ThreadInformationLength, PULONG ReturnLength);
NTSYSCALLAPI NTSTATUS NTAPI NtQueryObject(HANDLE Handle, OBJECT_INFORMATION_CLASS ObjectInformationClass, PVOID ObjectInformation, ULONG ObjectInformationLength, PULONG ReturnLength);
NTSTATUS NTAPI NtQuerySystemInformation(SYSTEM_INFORMATION_CLASS SystemInformationClass, PVOID SystemInformation, ULONG SystemInformationLength, PULONG ReturnLength);
NTSTATUS NTAPI NtQuerySystemTime(PLARGE_INTEGER SystemTime);
NTSTATUS NTAPI RtlLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime);
BOOLEAN NTAPI RtlTimeToSecondsSince1970(PLARGE_INTEGER Time, PULONG ElapsedSeconds);
VOID NTAPI RtlFreeAnsiString(PANSI_STRING AnsiString);
VOID NTAPI RtlFreeUnicodeString(PUNICODE_STRING UnicodeString);
VOID NTAPI RtlFreeOemString(POEM_STRING OemString);
VOID NTAPI RtlInitString(PSTRING DestinationString, PCSZ SourceString);
VOID NTAPI RtlInitAnsiString(PANSI_STRING DestinationString, PCSZ SourceString);
VOID NTAPI RtlInitUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString);
NTSTATUS NTAPI RtlAnsiStringToUnicodeString(PUNICODE_STRING DestinationString, PCANSI_STRING SourceString, BOOLEAN AllocateDestinationString);
NTSTATUS NTAPI RtlUnicodeStringToAnsiString(PANSI_STRING DestinationString, PCUNICODE_STRING SourceString, BOOLEAN AllocateDestinationString);
NTSTATUS NTAPI RtlUnicodeStringToOemString(POEM_STRING DestinationString, PCUNICODE_STRING SourceString, BOOLEAN AllocateDestinationString);
NTSTATUS NTAPI RtlUnicodeToMultiByteSize(PULONG BytesInMultiByteString, PWCH UnicodeString, ULONG BytesInUnicodeString);
NTSTATUS NTAPI RtlCharToInteger(PCSZ String, ULONG Base, PULONG Value);
NTSTATUS NTAPI RtlConvertSidToUnicodeString(PUNICODE_STRING UnicodeString, PSID Sid, BOOLEAN AllocateDestinationString);
ULONG NTAPI RtlUniform(PULONG Seed);
#define LOGONID_CURRENT     ((ULONG)-1)
#define SERVERNAME_CURRENT  ((HANDLE)NULL)
typedef enum _WINSTATIONINFOCLASS
{
    WinStationInformation = 8
} WINSTATIONINFOCLASS;
typedef struct _WINSTATIONINFORMATIONW
{
    BYTE Reserved2[70];
    ULONG LogonId;
    BYTE Reserved3[1140];
} WINSTATIONINFORMATIONW, * PWINSTATIONINFORMATIONW;
typedef BOOLEAN(WINAPI *PWINSTATIONQUERYINFORMATIONW) (HANDLE, ULONG, WINSTATIONINFOCLASS, PVOID, ULONG, PULONG);
#ifndef NT_SUCCESS
#define NT_SUCCESS(Status) (((NTSTATUS)(Status)) >= 0)
#endif
#ifndef NT_INFORMATION
#define NT_INFORMATION(Status) ((((ULONG)(Status)) >> 30) == 1)
#endif
#ifndef NT_WARNING
#define NT_WARNING(Status) ((((ULONG)(Status)) >> 30) == 2)
#endif
#ifndef NT_ERROR
#define NT_ERROR(Status) ((((ULONG)(Status)) >> 30) == 3)
#endif
#ifndef InitializeObjectAttributes
#define InitializeObjectAttributes( p, n, a, r, s )		{ \
														    (p)->Length = sizeof( OBJECT_ATTRIBUTES );          \
														    (p)->RootDirectory = r;                             \
														    (p)->Attributes = a;                                \
														    (p)->ObjectName = n;                                \
														    (p)->SecurityDescriptor = s;                        \
														    (p)->SecurityQualityOfService = NULL;               \
													    }
#endif
#define OBJ_INHERIT             0x00000002L
#define OBJ_PERMANENT           0x00000010L
#define OBJ_EXCLUSIVE           0x00000020L
#define OBJ_CASE_INSENSITIVE    0x00000040L
#define OBJ_OPENIF              0x00000080L
#define OBJ_OPENLINK            0x00000100L
#define OBJ_KERNEL_HANDLE       0x00000200L
#define OBJ_FORCE_ACCESS_CHECK  0x00000400L
#define OBJ_VALID_ATTRIBUTES    0x000007F2L
#define FILE_SUPERSEDE                  0x00000000
#define FILE_OPEN                       0x00000001
#define FILE_CREATE                     0x00000002
#define FILE_OPEN_IF                    0x00000003
#define FILE_OVERWRITE                  0x00000004
#define FILE_OVERWRITE_IF               0x00000005
#define FILE_MAXIMUM_DISPOSITION        0x00000005
#define FILE_DIRECTORY_FILE                     0x00000001
#define FILE_WRITE_THROUGH                      0x00000002
#define FILE_SEQUENTIAL_ONLY                    0x00000004
#define FILE_NO_INTERMEDIATE_BUFFERING          0x00000008
#define FILE_SYNCHRONOUS_IO_ALERT               0x00000010
#define FILE_SYNCHRONOUS_IO_NONALERT            0x00000020
#define FILE_NON_DIRECTORY_FILE                 0x00000040
#define FILE_CREATE_TREE_CONNECTION             0x00000080
#define FILE_COMPLETE_IF_OPLOCKED               0x00000100
#define FILE_NO_EA_KNOWLEDGE                    0x00000200
#define FILE_OPEN_REMOTE_INSTANCE               0x00000400
#define FILE_RANDOM_ACCESS                      0x00000800
#define FILE_DELETE_ON_CLOSE                    0x00001000
#define FILE_OPEN_BY_FILE_ID                    0x00002000
#define FILE_OPEN_FOR_BACKUP_INTENT             0x00004000
#define FILE_NO_COMPRESSION                     0x00008000
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FILE_OPEN_REQUIRING_OPLOCK              0x00010000
#endif
#define FILE_RESERVE_OPFILTER                   0x00100000
#define FILE_OPEN_REPARSE_POINT                 0x00200000
#define FILE_OPEN_NO_RECALL                     0x00400000
#define FILE_OPEN_FOR_FREE_SPACE_QUERY          0x00800000
#define FILE_VALID_OPTION_FLAGS                 0x00ffffff
#define FILE_VALID_PIPE_OPTION_FLAGS            0x00000032
#define FILE_VALID_MAILSLOT_OPTION_FLAGS        0x00000032
#define FILE_VALID_SET_FLAGS                    0x00000036
#define FILE_SUPERSEDED                 0x00000000
#define FILE_OPENED                     0x00000001
#define FILE_CREATED                    0x00000002
#define FILE_OVERWRITTEN                0x00000003
#define FILE_EXISTS                     0x00000004
#define FILE_DOES_NOT_EXIST             0x00000005
#endif
#endif
