/*+@@file@@----------------------------------------------------------------*//*!
 \file		evntcons.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  9 21:20:30 2016
 \date		Modified on Sat Jul  9 21:20:30 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _EVNTCONS_H_
#define _EVNTCONS_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <wmistr.h>
#include <evntrace.h>
#include <evntprov.h>
#define EVENT_HEADER_EXT_TYPE_RELATED_ACTIVITYID   0x0001
#define EVENT_HEADER_EXT_TYPE_SID                  0x0002
#define EVENT_HEADER_EXT_TYPE_TS_ID                0x0003
#define EVENT_HEADER_EXT_TYPE_INSTANCE_INFO        0x0004
#define EVENT_HEADER_EXT_TYPE_STACK_TRACE32        0x0005
#define EVENT_HEADER_EXT_TYPE_STACK_TRACE64        0x0006
#define EVENT_HEADER_EXT_TYPE_MAX                  0x0007
typedef struct _EVENT_HEADER_EXTENDED_DATA_ITEM
{
    USHORT      Reserved1;
    USHORT      ExtType;
    struct
	{
        USHORT  Linkage             :  1;
        USHORT  Reserved2           : 15;
    };
    USHORT      DataSize;
    ULONGLONG   DataPtr;
} EVENT_HEADER_EXTENDED_DATA_ITEM, *PEVENT_HEADER_EXTENDED_DATA_ITEM;
typedef struct _EVENT_EXTENDED_ITEM_INSTANCE
{
    ULONG InstanceId;
    ULONG ParentInstanceId;
    GUID  ParentGuid;
} EVENT_EXTENDED_ITEM_INSTANCE, *PEVENT_EXTENDED_ITEM_INSTANCE;
typedef struct _EVENT_EXTENDED_ITEM_RELATED_ACTIVITYID
{
    GUID  RelatedActivityId;
} EVENT_EXTENDED_ITEM_RELATED_ACTIVITYID, *PEVENT_EXTENDED_ITEM_RELATED_ACTIVITYID;
typedef struct _EVENT_EXTENDED_ITEM_TS_ID
{
	ULONG SessionId;
} EVENT_EXTENDED_ITEM_TS_ID, *PEVENT_EXTENDED_ITEM_TS_ID;
typedef struct _EVENT_EXTENDED_ITEM_STACK_TRACE32
{
	ULONG64 MatchId;
	ULONG   Address[ANYSIZE_ARRAY];
} EVENT_EXTENDED_ITEM_STACK_TRACE32, *PEVENT_EXTENDED_ITEM_STACK_TRACE32;
typedef struct _EVENT_EXTENDED_ITEM_STACK_TRACE64
{
	ULONG64 MatchId;
	ULONG64 Address[ANYSIZE_ARRAY];
} EVENT_EXTENDED_ITEM_STACK_TRACE64, *PEVENT_EXTENDED_ITEM_STACK_TRACE64;
#define EVENT_HEADER_PROPERTY_XML               0x0001
#define EVENT_HEADER_PROPERTY_FORWARDED_XML     0x0002
#define EVENT_HEADER_PROPERTY_LEGACY_EVENTLOG   0x0004
#define EVENT_HEADER_FLAG_EXTENDED_INFO         0x0001
#define EVENT_HEADER_FLAG_PRIVATE_SESSION       0x0002
#define EVENT_HEADER_FLAG_STRING_ONLY           0x0004
#define EVENT_HEADER_FLAG_TRACE_MESSAGE         0x0008
#define EVENT_HEADER_FLAG_NO_CPUTIME            0x0010
#define EVENT_HEADER_FLAG_32_BIT_HEADER         0x0020
#define EVENT_HEADER_FLAG_64_BIT_HEADER         0x0040
#define EVENT_HEADER_FLAG_CLASSIC_HEADER        0x0100
typedef struct _EVENT_HEADER
{
    USHORT              Size;
    USHORT              HeaderType;
    USHORT              Flags;
    USHORT              EventProperty;
    ULONG               ThreadId;
    ULONG               ProcessId;
    LARGE_INTEGER       TimeStamp;
    GUID                ProviderId;
    EVENT_DESCRIPTOR    EventDescriptor;
    union
	{
        struct
		{
            ULONG       KernelTime;
            ULONG       UserTime;
        } DUMMYSTRUCTNAME;
        ULONG64         ProcessorTime;
    } DUMMYUNIONNAME;
    GUID                ActivityId;
} EVENT_HEADER, *PEVENT_HEADER;
typedef struct _EVENT_RECORD
{
    EVENT_HEADER        EventHeader;
    ETW_BUFFER_CONTEXT  BufferContext;
    USHORT              ExtendedDataCount;
    USHORT              UserDataLength;
    PEVENT_HEADER_EXTENDED_DATA_ITEM
                        ExtendedData;
    PVOID               UserData;
    PVOID               UserContext;
} EVENT_RECORD, *PEVENT_RECORD;
#define EVENT_ENABLE_PROPERTY_SID                   0x00000001
#define EVENT_ENABLE_PROPERTY_TS_ID                 0x00000002
#define EVENT_ENABLE_PROPERTY_STACK_TRACE           0x00000004
#define PROCESS_TRACE_MODE_REAL_TIME                0x00000100
#define PROCESS_TRACE_MODE_RAW_TIMESTAMP            0x00001000
#define PROCESS_TRACE_MODE_EVENT_RECORD             0x10000000
typedef enum
{
    EventSecuritySetDACL,
    EventSecuritySetSACL,
    EventSecurityAddDACL,
    EventSecurityAddSACL,
    EventSecurityMax
} EVENTSECURITYOPERATION;
#if (WINVER >= _WIN32_WINNT_LONGHORN)
ULONG EVNTAPI EventAccessControl(LPGUID Guid, ULONG Operation, PSID Sid, ULONG Rights, BOOLEAN AllowOrDeny);
#endif 
#if (WINVER >= _WIN32_WINNT_LONGHORN)
ULONG
EVNTAPI
EventAccessQuery(LPGUID Guid, PSECURITY_DESCRIPTOR Buffer, PULONG BufferSize);
#endif
#if (WINVER >= _WIN32_WINNT_LONGHORN)
ULONG EVNTAPI EventAccessRemove(LPGUID Guid);
#endif 
#endif
