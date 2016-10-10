/*+@@file@@----------------------------------------------------------------*//*!
 \file		txfw32.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 13:19:17 2016
 \date		Modified on Sat Sep 17 13:19:17 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef TXFW32_H__
#define TXFW32_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <clfsw32.h>
#ifndef _TXF_W32_H_INCLUDED_
#define _TXF_W32_H_INCLUDED_
#define TXF_LOG_RECORD_TYPE_WRITE           0x01
#define TXF_LOG_RECORD_TYPE_TRUNCATE        0x02
#define TXF_LOG_RECORD_TYPE_AFFECTED_FILE   0x04
#define TXF_LOG_RECORD_GENERIC_TYPE_COMMIT  0x01
#define TXF_LOG_RECORD_GENERIC_TYPE_ABORT   0x02
#define TXF_LOG_RECORD_GENERIC_TYPE_PREPARE 0x04
#define TXF_LOG_RECORD_GENERIC_TYPE_DATA    0x08
#pragma pack(4)
typedef struct _TXF_ID
{
    struct
	{
        LONGLONG LowPart;
        LONGLONG HighPart;
    };
} TXF_ID, *PTXF_ID;
typedef GUID *PGUID;
typedef struct _TXF_LOG_RECORD_BASE
{
    USHORT Version;        
    USHORT RecordType;
    ULONG RecordLength;
} TXF_LOG_RECORD_BASE, *PTXF_LOG_RECORD_BASE;
typedef struct _TXF_LOG_RECORD_WRITE
{
    USHORT Version;        
    USHORT RecordType;
    ULONG RecordLength;
    ULONG Flags;
    TXF_ID TxfFileId;
    GUID KtmGuid;
    LONGLONG ByteOffsetInFile;
    ULONG NumBytesWritten;
    ULONG ByteOffsetInStructure;
    ULONG FileNameLength;
    ULONG FileNameByteOffsetInStructure;
} TXF_LOG_RECORD_WRITE, *PTXF_LOG_RECORD_WRITE;
typedef struct _TXF_LOG_RECORD_TRUNCATE
{
    USHORT Version;        
    USHORT RecordType;
    ULONG RecordLength;
    ULONG Flags;
    TXF_ID TxfFileId;
    GUID KtmGuid;
    LONGLONG NewFileSize;
    ULONG FileNameLength;
    ULONG FileNameByteOffsetInStructure;
} TXF_LOG_RECORD_TRUNCATE, *PTXF_LOG_RECORD_TRUNCATE;
typedef struct _TXF_LOG_RECORD_AFFECTED_FILE
{
    USHORT Version;
    ULONG RecordLength;
    ULONG Flags;
    TXF_ID TxfFileId;
    GUID KtmGuid;
    ULONG FileNameLength;
    ULONG FileNameByteOffsetInStructure;
} TXF_LOG_RECORD_AFFECTED_FILE, *PTXF_LOG_RECORD_AFFECTED_FILE;
#pragma pack()
BOOL WINAPI TxfLogCreateFileReadContext(LPCWSTR LogPath, CLFS_LSN BeginningLsn, CLFS_LSN EndingLsn, PTXF_ID TxfFileId, PVOID *TxfLogContext);
BOOL WINAPI TxfLogCreateRangeReadContext(LPCWSTR LogPath, CLFS_LSN BeginningLsn, CLFS_LSN EndingLsn, PLARGE_INTEGER BeginningVirtualClock, PLARGE_INTEGER EndingVirtualClock, ULONG RecordTypeMask, PVOID *TxfLogContext);
BOOL WINAPI TxfLogDestroyReadContext(PVOID TxfLogContext);
BOOL WINAPI TxfLogReadRecords(PVOID TxfLogContext, ULONG BufferLength, PVOID Buffer, PULONG BytesUsed, PULONG RecordCount);
BOOL WINAPI TxfReadMetadataInfo(HANDLE FileHandle, PTXF_ID TxfFileId, PCLFS_LSN LastLsn, PULONG TransactionState, PGUID LockingTransaction);
BOOL WINAPI TxfLogRecordGetFileName(PVOID RecordBuffer, ULONG RecordBufferLengthInBytes, PWSTR NameBuffer, PULONG NameBufferLengthInBytes, PTXF_ID TxfId);
BOOL WINAPI TxfLogRecordGetGenericType(PVOID RecordBuffer, ULONG RecordBufferLengthInBytes, PULONG GenericType, PLARGE_INTEGER VirtualClock);
VOID WINAPI TxfSetThreadMiniVersionForCreate(USHORT MiniVersion);
VOID WINAPI TxfGetThreadMiniVersionForCreate(PUSHORT MiniVersion);
#define TXFS_MINIVERSION_COMMITTED_VIEW                  (0x0000)
#define TXFS_MINIVERSION_DIRTY_VIEW                      (0xFFFF)
#define TXFS_MINIVERSION_DEFAULT_VIEW                    (0xFFFE)
#endif
#endif
