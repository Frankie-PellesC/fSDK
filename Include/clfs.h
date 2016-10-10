/*+@@file@@----------------------------------------------------------------*//*!
 \file		clfs.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 16:46:14 2016
 \date		Modified on Sun Jul  3 16:46:14 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _CLFS_PUBLIC_H_
#define _CLFS_PUBLIC_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifdef CLFS_KERNEL_MODE
#define CLFSUSER_API
#else
#include <stdio.h>
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef FILE *PFILE, **PPFILE;
typedef DWORD CLFSSTATUS;
#   ifdef __CLFSUSER_EXPORTS__
#       define CLFSUSER_API
#   else
#       define CLFSUSER_API __declspec(dllimport)
#   endif
#   define ClfsLsnEqual             LsnEqual
#   define ClfsLsnLess              LsnLess
#   define ClfsLsnGreater           LsnGreater
#   define ClfsLsnNull              LsnNull
#   define ClfsLsnCreate            LsnCreate
#   define ClfsLsnContainer         LsnContainer
#   define ClfsLsnBlockOffset       LsnBlockOffset
#   define ClfsLsnRecordSequence    LsnRecordSequence
#   define ClfsLsnInvalid           LsnInvalid
#   define ClfsLsnIncrement         LsnIncrement
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
#define FILE_ATTRIBUTE_DEDICATED    FILE_ATTRIBUTE_TEMPORARY
#define EA_CONTAINER_NAME           "ContainerName"
#define EA_CONTAINER_SIZE           "ContainerSize"
#define CLFS_BASELOG_EXTENSION      L".blf"
#define CLFS_FLAG_NO_FLAGS              0x00000000
#define CLFS_FLAG_FORCE_APPEND          0x00000001
#define CLFS_FLAG_FORCE_FLUSH           0x00000002
#define CLFS_FLAG_USE_RESERVATION       0x00000004
#define CLFS_FLAG_REENTRANT_FILE_SYSTEM 0x00000008
#define CLFS_FLAG_NON_REENTRANT_FILTER  0x00000010
#define CLFS_FLAG_REENTRANT_FILTER      0x00000020
#define CLFS_FLAG_IGNORE_SHARE_ACCESS   0x00000040
#define CLFS_FLAG_READ_IN_PROGRESS      0x00000080
#define CLFS_FLAG_MINIFILTER_LEVEL      0x00000100
#define CLFS_FLAG_HIDDEN_SYSTEM_LOG     0x00000200
#define CLFS_FLAG_FILTER_INTERMEDIATE_LEVEL CLFS_FLAG_NON_REENTRANT_FILTER
#define CLFS_FLAG_FILTER_TOP_LEVEL          CLFS_FLAG_REENTRANT_FILTER
typedef ULONG CLFS_CONTAINER_ID;
typedef CLFS_CONTAINER_ID *PCLFS_CONTAINER_ID;
typedef CLFS_CONTAINER_ID **PPCLFS_CONTAINER_ID;
#endif
#ifdef __CLFS_PRIVATE_LSN__
#include <clfslsn.h>
#else
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef struct _CLS_LSN
{
	ULONGLONG Internal;
} CLS_LSN, *PCLS_LSN, **PPCLS_LSN;
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef CLS_LSN CLFS_LSN;
typedef CLFS_LSN *PCLFS_LSN, **PPCLFS_LSN;
#endif
#ifdef CLFS_KERNEL_MODE
#if defined __CLFS_SUPPORT_LIBRARY__
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
extern const CLFS_LSN CLFS_LSN_INVALID;
extern const CLFS_LSN CLFS_LSN_NULL;
#endif
#elif defined __CLFSUSER_EXPORTS__
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
extern __declspec(dllexport) const CLFS_LSN CLFS_LSN_INVALID;
extern __declspec(dllexport) const CLFS_LSN CLFS_LSN_NULL;
#endif
#   else
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
extern __declspec(dllimport) const CLFS_LSN CLFS_LSN_INVALID;
extern __declspec(dllimport) const CLFS_LSN CLFS_LSN_NULL;
#endif
#   endif
#else
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
extern CLFSUSER_API const CLFS_LSN CLFS_LSN_INVALID;
extern CLFSUSER_API const CLFS_LSN CLFS_LSN_NULL;
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
#define ClfsNullRecord                  0x00
#define ClfsDataRecord                  0x01
#define ClfsRestartRecord               0x02
#define ClfsClientRecord (ClfsDataRecord|ClfsRestartRecord)
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
#ifdef _cplusplus
const LPCWSTR CLFS_CONTAINER_STREAM_PREFIX = L"%BLF%:"
#else
#define CLFS_CONTAINER_STREAM_PREFIX             L"%BLF%:"
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
#ifdef _cplusplus
const LPCWSTR CLFS_CONTAINER_RELATIVE_PREFIX = L"%BLF%\\"
#else
#define CLFS_CONTAINER_RELATIVE_PREFIX            L"%BLF%\\"
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef UCHAR CLS_RECORD_TYPE, *PCLS_RECORD_TYPE, **PPCLS_RECORD_TYPE;
typedef CLS_RECORD_TYPE CLFS_RECORD_TYPE, *PCLFS_RECORD_TYPE, **PPCLFS_RECORD_TYPE;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef enum _CLS_CONTEXT_MODE
{
	ClsContextNone = 0x00,
	ClsContextUndoNext,
	ClsContextPrevious,
	ClsContextForward
} CLS_CONTEXT_MODE, *PCLS_CONTEXT_MODE, **PPCLS_CONTEXT_MODE;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef enum _CLFS_CONTEXT_MODE
{
	ClfsContextNone = 0x00,
	ClfsContextUndoNext,
	ClfsContextPrevious,
	ClfsContextForward
} CLFS_CONTEXT_MODE, *PCLFS_CONTEXT_MODE, **PPCLFS_CONTEXT_MODE;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef struct _CLFS_NODE_ID
{
	ULONG cType;
	ULONG cbNode;
} CLFS_NODE_ID, *PCLFS_NODE_ID;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef struct _CLS_WRITE_ENTRY
{
	PVOID Buffer;
	ULONG ByteLength;
} CLS_WRITE_ENTRY, *PCLS_WRITE_ENTRY, **PPCLS_WRITE_ENTRY;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef CLS_WRITE_ENTRY CLFS_WRITE_ENTRY;
typedef CLFS_WRITE_ENTRY *PCLFS_WRITE_ENTRY, **PPCLFS_WRITE_ENTRY;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef GUID CLFS_LOG_ID;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef struct _CLS_INFORMATION
{
	LONGLONG TotalAvailable;
	LONGLONG CurrentAvailable;
	LONGLONG TotalReservation;
	ULONGLONG BaseFileSize;
	ULONGLONG ContainerSize;
	ULONG TotalContainers;
	ULONG FreeContainers;
	ULONG TotalClients;
	ULONG Attributes;
	ULONG FlushThreshold;
	ULONG SectorSize;
	CLS_LSN MinArchiveTailLsn;
	CLS_LSN BaseLsn;
	CLS_LSN LastFlushedLsn;
	CLS_LSN LastLsn;
	CLS_LSN RestartLsn;
	GUID Identity;
} CLS_INFORMATION, *PCLS_INFORMATION, *PPCLS_INFORMATION;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef CLS_INFORMATION CLFS_INFORMATION;
typedef CLFS_INFORMATION *PCLFS_INFORMATION, *PPCLFS_INFORMATION;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef struct _CLFS_LOG_NAME_INFORMATION
{
	USHORT NameLengthInBytes;
	WCHAR Name[1];
} CLFS_LOG_NAME_INFORMATION, *PCLFS_LOG_NAME_INFORMATION, **PPCLFS_LOG_NAME_INFORMATION;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef struct _CLFS_STREAM_ID_INFORMATION
{
	UCHAR StreamIdentifier;
} CLFS_STREAM_ID_INFORMATION, *PCLFS_STREAM_ID_INFORMATION, **PPCLFS_STREAM_ID_INFORMATION;
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA) || (_WIN32_WINNT >= _WIN32_WINNT_LONGHORN)
#pragma pack(push,8)
typedef struct _CLFS_PHYSICAL_LSN_INFORMATION
{
	UCHAR StreamIdentifier;
	CLFS_LSN VirtualLsn;
	CLFS_LSN PhysicalLsn;
} CLFS_PHYSICAL_LSN_INFORMATION, *PCLFS_PHYSICAL_LSN_INFORMATION;
#pragma pack(pop)
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef UINT32 CLS_CONTAINER_STATE, *PCLS_CONTAINER_STATE, *PPCLS_CONTAINER_STATE;
typedef CLS_CONTAINER_STATE CLFS_CONTAINER_STATE, *PCLFS_CONTAINER_STATE, *PPCLFS_CONTAINER_STATE;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
#define ClsContainerInitializing                                  0x01
#define ClsContainerInactive                                      0x02
#define ClsContainerActive                                        0x04
#define ClsContainerActivePendingDelete                           0x08
#define ClsContainerPendingArchive                                0x10
#define ClsContainerPendingArchiveAndDelete                       0x20
#define ClfsContainerInitializing                                 0x01
#define ClfsContainerInactive                                     0x02
#define ClfsContainerActive                                       0x04
#define ClfsContainerActivePendingDelete                          0x08
#define ClfsContainerPendingArchive                               0x10
#define ClfsContainerPendingArchiveAndDelete                      0x20
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
#define CLFS_MAX_CONTAINER_INFO       (256)
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef struct _CLS_CONTAINER_INFORMATION
{
	ULONG FileAttributes;
	ULONGLONG CreationTime;
	ULONGLONG LastAccessTime;
	ULONGLONG LastWriteTime;
	LONGLONG ContainerSize;
	ULONG FileNameActualLength;
	ULONG FileNameLength;
	WCHAR FileName[CLFS_MAX_CONTAINER_INFO];
	CLFS_CONTAINER_STATE State;
	CLFS_CONTAINER_ID PhysicalContainerId;
	CLFS_CONTAINER_ID LogicalContainerId;
} CLS_CONTAINER_INFORMATION, *PCLS_CONTAINER_INFORMATION, **PPCLS_CONTAINER_INFORMATION;
typedef CLS_CONTAINER_INFORMATION CLFS_CONTAINER_INFORMATION;
typedef CLFS_CONTAINER_INFORMATION *PCLFS_CONTAINER_INFORMATION, **PPCLFS_CONTAINER_INFORMATION;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef enum _CLS_LOG_INFORMATION_CLASS
{
	ClfsLogBasicInformation = 0x00,
	ClfsLogBasicInformationPhysical,
	ClfsLogPhysicalNameInformation,
	ClfsLogStreamIdentifierInformation,
#if (NTDDI_VERSION >= NTDDI_VISTA) || (_WIN32_WINNT >= _WIN32_WINNT_LONGHORN)
	ClfsLogSystemMarkingInformation,
	ClfsLogPhysicalLsnInformation
#endif
} CLS_LOG_INFORMATION_CLASS, *PCLS_LOG_INFORMATION_CLASS, **PPCLS_LOG_INFORMATION_CLASS;
typedef CLS_LOG_INFORMATION_CLASS CLFS_LOG_INFORMATION_CLASS;
typedef CLFS_LOG_INFORMATION_CLASS *PCLFS_LOG_INFORMATION_CLASS, **PPCLFS_LOG_INFORMATION_CLASS;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef enum _CLS_IOSTATS_CLASS
{
	ClsIoStatsDefault = 0x0000,
	ClsIoStatsMax = 0xFFFF
} CLS_IOSTATS_CLASS, *PCLS_IOSTATS_CLASS, **PPCLS_IOSTATS_CLASS;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef enum _CLFS_IOSTATS_CLASS
{
	ClfsIoStatsDefault = 0x0000,
	ClfsIoStatsMax = 0xFFFF
} CLFS_IOSTATS_CLASS, *PCLFS_IOSTATS_CLASS, **PPCLFS_IOSTATS_CLASS;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef struct _CLS_IO_STATISTICS_HEADER
{
	UCHAR ubMajorVersion;
	UCHAR ubMinorVersion;
	CLFS_IOSTATS_CLASS eStatsClass;
	USHORT cbLength;
	ULONG coffData;
} CLS_IO_STATISTICS_HEADER, *PCLS_IO_STATISTICS_HEADER, **PPCLS_IO_STATISTICS_HEADER;
typedef CLS_IO_STATISTICS_HEADER CLFS_IO_STATISTICS_HEADER;
typedef CLFS_IO_STATISTICS_HEADER *PCLFS_IO_STATISTICS_HEADER, **PPCLFS_IO_STATISTICS_HEADER;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef struct _CLS_IO_STATISTICS
{
	CLS_IO_STATISTICS_HEADER hdrIoStats;
	ULONGLONG cFlush;
	ULONGLONG cbFlush;
	ULONGLONG cMetaFlush;
	ULONGLONG cbMetaFlush;
} CLS_IO_STATISTICS, *PCLS_IO_STATISTICS, **PPCLS_IO_STATISTICS;
typedef CLS_IO_STATISTICS CLFS_IO_STATISTICS;
typedef CLFS_IO_STATISTICS *PCLFS_IO_STATISTICS, **PPCLFS_IO_STATISTICS;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
#define CLFS_SCAN_INIT                  0x01
#define CLFS_SCAN_FORWARD               0x02
#define CLFS_SCAN_BACKWARD              0x04
#define CLFS_SCAN_CLOSE                 0x08
#define CLFS_SCAN_INITIALIZED           0x10
#define CLFS_SCAN_BUFFERED              0x20
typedef UCHAR CLFS_SCAN_MODE, *PCLFS_SCAN_MODE;
#endif
#ifdef CLFS_KERNEL_MODE
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef FILE_OBJECT LOG_FILE_OBJECT, *PLOG_FILE_OBJECT, **PPLOG_FILE_OBJECT;
#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#pragma warning(disable:4324)
#endif
#endif
typedef struct _CLS_SCAN_CONTEXT
{
	CLFS_NODE_ID cidNode;
	PLOG_FILE_OBJECT plfoLog;
	__declspec(align(8))ULONG cIndex;
	__declspec(align(8))ULONG cContainers;
	__declspec(align(8))ULONG cContainersReturned;
	__declspec(align(8))CLFS_SCAN_MODE eScanMode;
	__declspec(align(8))PCLS_CONTAINER_INFORMATION pinfoContainer;
} CLS_SCAN_CONTEXT, *PCLS_SCAN_CONTEXT, **PPCLS_SCAN_CONTEXT;
#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(pop)
#endif
#endif
#endif
#else
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef struct _CLS_SCAN_CONTEXT
{
	CLFS_NODE_ID cidNode;
	HANDLE hLog;
	ULONG cIndex;
	ULONG cContainers;
	ULONG cContainersReturned;
	CLFS_SCAN_MODE eScanMode;
	PCLS_CONTAINER_INFORMATION pinfoContainer;
} CLS_SCAN_CONTEXT, *PCLS_SCAN_CONTEXT, **PPCLS_SCAN_CONTEXT;
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef CLS_SCAN_CONTEXT CLFS_SCAN_CONTEXT;
typedef CLFS_SCAN_CONTEXT *PCLFS_SCAN_CONTEXT, **PPCLFS_SCAN_CONTEXT;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef struct _CLS_ARCHIVE_DESCRIPTOR
{
	ULONGLONG coffLow;
	ULONGLONG coffHigh;
	CLS_CONTAINER_INFORMATION infoContainer;
} CLS_ARCHIVE_DESCRIPTOR, *PCLS_ARCHIVE_DESCRIPTOR, **PPCLS_ARCHIVE_DESCRIPTOR;
typedef CLS_ARCHIVE_DESCRIPTOR CLFS_ARCHIVE_DESCRIPTOR;
typedef CLFS_ARCHIVE_DESCRIPTOR *PCLFS_ARCHIVE_DESCRIPTOR, **PPCLFS_ARCHIVE_DESCRIPTOR;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef PVOID(*CLFS_BLOCK_ALLOCATION) (ULONG cbBufferLength, PVOID pvUserContext);
typedef void (*CLFS_BLOCK_DEALLOCATION) (PVOID pvBuffer, PVOID pvUserContext);
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef enum _CLFS_LOG_ARCHIVE_MODE
{
	ClfsLogArchiveEnabled = 0x01,
	ClfsLogArchiveDisabled = 0x02
} CLFS_LOG_ARCHIVE_MODE, *PCLFS_LOG_ARCHIVE_MODE;
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API BOOLEAN NTAPI ClfsLsnEqual(const CLFS_LSN *plsn1, const CLFS_LSN *plsn2);
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API BOOLEAN NTAPI ClfsLsnLess(const CLFS_LSN *plsn1, const CLFS_LSN *plsn2);
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API BOOLEAN NTAPI ClfsLsnGreater(const CLFS_LSN *plsn1, const CLFS_LSN *plsn2);
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API BOOLEAN NTAPI ClfsLsnNull(const CLFS_LSN *plsn);
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API CLFS_CONTAINER_ID NTAPI ClfsLsnContainer(const CLFS_LSN *plsn);
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API CLFS_LSN NTAPI ClfsLsnCreate(CLFS_CONTAINER_ID cidContainer, ULONG offBlock, ULONG cRecord);
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API ULONG NTAPI ClfsLsnBlockOffset(const CLFS_LSN *plsn);
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API ULONG NTAPI ClfsLsnRecordSequence(const CLFS_LSN *plsn);
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API BOOLEAN NTAPI ClfsLsnInvalid(const CLFS_LSN *plsn);
#endif
#if (NTDDI_VERSION >= NTDDI_WS03SP1) || (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API CLFS_LSN NTAPI ClfsLsnIncrement(PCLFS_LSN plsn);
#endif
#endif
