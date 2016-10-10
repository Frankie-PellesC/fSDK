/*+@@file@@----------------------------------------------------------------*//*!
 \file		evntprov.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  9 21:24:53 2016
 \date		Modified on Sat Jul  9 21:24:53 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _EVNTPROV_H_
#define _EVNTPROV_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef EVNTAPI
#ifndef MIDL_PASS
#ifdef _EVNT_SOURCE_
#define EVNTAPI __stdcall
#else
#define EVNTAPI DECLSPEC_IMPORT __stdcall
#endif
#endif
#endif
#define EVENT_MIN_LEVEL                      (0)
#define EVENT_MAX_LEVEL                      (0xff)
#define EVENT_ACTIVITY_CTRL_GET_ID           (1)
#define EVENT_ACTIVITY_CTRL_SET_ID           (2)
#define EVENT_ACTIVITY_CTRL_CREATE_ID        (3)
#define EVENT_ACTIVITY_CTRL_GET_SET_ID       (4)
#define EVENT_ACTIVITY_CTRL_CREATE_SET_ID    (5)
typedef ULONGLONG REGHANDLE, *PREGHANDLE;
#define MAX_EVENT_DATA_DESCRIPTORS           (128)
#define MAX_EVENT_FILTER_DATA_SIZE           (1024)
#define EVENT_FILTER_TYPE_SCHEMATIZED        (0x80000000)
#ifdef INITGUID
#define DEFINE_EVENT_DESCRIPTOR(name, ush1, uch1, uch2, uch3, uch4, ush2, ull1)	extern const EVENT_DESCRIPTOR name = {ush1, uch1, uch2, uch3, uch4, ush2, ull1}
#else
#define DEFINE_EVENT_DESCRIPTOR(name, ush1, uch1, uch2, uch3, uch4, ush2, ull1)	extern const EVENT_DESCRIPTOR name
#endif
typedef struct _EVENT_DATA_DESCRIPTOR
{
    ULONGLONG   Ptr;
    ULONG       Size;
    ULONG       Reserved;
} EVENT_DATA_DESCRIPTOR, *PEVENT_DATA_DESCRIPTOR;
typedef struct _EVENT_DESCRIPTOR
{
    USHORT      Id;
    UCHAR       Version;
    UCHAR       Channel;
    UCHAR       Level;
    UCHAR       Opcode;
    USHORT      Task;
    ULONGLONG   Keyword;
} EVENT_DESCRIPTOR, *PEVENT_DESCRIPTOR;
typedef const EVENT_DESCRIPTOR *PCEVENT_DESCRIPTOR;
typedef struct _EVENT_FILTER_DESCRIPTOR
{
    ULONGLONG   Ptr;
    ULONG       Size;
    ULONG       Type;
} EVENT_FILTER_DESCRIPTOR, *PEVENT_FILTER_DESCRIPTOR;
typedef struct _EVENT_FILTER_HEADER
{
    USHORT     Id;
    UCHAR      Version;
    UCHAR      Reserved[5];
    ULONGLONG  InstanceId;
    ULONG      Size;
    ULONG      NextOffset;
} EVENT_FILTER_HEADER, *PEVENT_FILTER_HEADER;
#ifndef _ETW_KM_
typedef VOID(NTAPI *PENABLECALLBACK) (LPCGUID SourceId, ULONG IsEnabled, UCHAR Level, ULONGLONG MatchAnyKeyword, ULONGLONG MatchAllKeyword, PEVENT_FILTER_DESCRIPTOR FilterData, PVOID CallbackContext);
#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG EVNTAPI EventRegister(LPCGUID ProviderId, PENABLECALLBACK EnableCallback, PVOID CallbackContext, PREGHANDLE RegHandle);
#endif
#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG EVNTAPI EventUnregister(REGHANDLE RegHandle);
#endif
#if (WINVER >= _WIN32_WINNT_VISTA)
BOOLEAN EVNTAPI EventEnabled(REGHANDLE RegHandle, PCEVENT_DESCRIPTOR EventDescriptor);
#endif
#if (WINVER >= _WIN32_WINNT_VISTA)
BOOLEAN EVNTAPI EventProviderEnabled(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword);
#endif
#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG EVNTAPI EventWrite(REGHANDLE RegHandle, PCEVENT_DESCRIPTOR EventDescriptor, ULONG UserDataCount, PEVENT_DATA_DESCRIPTOR UserData);
#endif
#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG EVNTAPI EventWriteTransfer(REGHANDLE RegHandle, PCEVENT_DESCRIPTOR EventDescriptor, LPCGUID ActivityId, LPCGUID RelatedActivityId, ULONG UserDataCount, PEVENT_DATA_DESCRIPTOR UserData);
#endif
#if (WINVER >= _WIN32_WINNT_WIN7)
ULONG EVNTAPI EventWriteEx(REGHANDLE RegHandle, PCEVENT_DESCRIPTOR EventDescriptor, ULONG64 Filter, ULONG Flags, LPCGUID ActivityId, LPCGUID RelatedActivityId, ULONG UserDataCount, PEVENT_DATA_DESCRIPTOR UserData);
#endif
#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG EVNTAPI EventWriteString(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword, PCWSTR String);
#endif
#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG EVNTAPI EventActivityIdControl(ULONG ControlCode, LPGUID ActivityId);
#endif
#endif
FORCEINLINE VOID EventDataDescCreate(PEVENT_DATA_DESCRIPTOR EventDataDescriptor, const VOID *DataPtr, ULONG DataSize)
{
	EventDataDescriptor->Ptr = (ULONGLONG) (ULONG_PTR)DataPtr;
	EventDataDescriptor->Size = DataSize;
	EventDataDescriptor->Reserved = 0;
	return;
}
FORCEINLINE VOID EventDescCreate(PEVENT_DESCRIPTOR EventDescriptor, USHORT Id, UCHAR Version, UCHAR Channel, UCHAR Level, USHORT Task, UCHAR Opcode, ULONGLONG Keyword)
{
	EventDescriptor->Id = Id;
	EventDescriptor->Version = Version;
	EventDescriptor->Channel = Channel;
	EventDescriptor->Level = Level;
	EventDescriptor->Task = Task;
	EventDescriptor->Opcode = Opcode;
	EventDescriptor->Keyword = Keyword;
	return;
}
FORCEINLINE VOID EventDescZero(PEVENT_DESCRIPTOR EventDescriptor)
{
	memset(EventDescriptor, 0, sizeof(EVENT_DESCRIPTOR));
	return;
}
FORCEINLINE USHORT EventDescGetId(PCEVENT_DESCRIPTOR EventDescriptor)
{
	return (EventDescriptor->Id);
}
FORCEINLINE UCHAR EventDescGetVersion(PCEVENT_DESCRIPTOR EventDescriptor)
{
	return (EventDescriptor->Version);
}
FORCEINLINE USHORT EventDescGetTask(PCEVENT_DESCRIPTOR EventDescriptor)
{
	return (EventDescriptor->Task);
}
FORCEINLINE UCHAR EventDescGetOpcode(PCEVENT_DESCRIPTOR EventDescriptor)
{
	return (EventDescriptor->Opcode);
}
FORCEINLINE UCHAR EventDescGetChannel(PCEVENT_DESCRIPTOR EventDescriptor)
{
	return (EventDescriptor->Channel);
}
FORCEINLINE UCHAR EventDescGetLevel(PCEVENT_DESCRIPTOR EventDescriptor)
{
	return (EventDescriptor->Level);
}
FORCEINLINE ULONGLONG EventDescGetKeyword(PCEVENT_DESCRIPTOR EventDescriptor)
{
	return (EventDescriptor->Keyword);
}
FORCEINLINE PEVENT_DESCRIPTOR EventDescSetId(PEVENT_DESCRIPTOR EventDescriptor, USHORT Id)
{
	EventDescriptor->Id = Id;
	return (EventDescriptor);
}
FORCEINLINE PEVENT_DESCRIPTOR EventDescSetVersion(PEVENT_DESCRIPTOR EventDescriptor, UCHAR Version)
{
	EventDescriptor->Version = Version;
	return (EventDescriptor);
}
FORCEINLINE PEVENT_DESCRIPTOR EventDescSetTask(PEVENT_DESCRIPTOR EventDescriptor, USHORT Task)
{
	EventDescriptor->Task = Task;
	return (EventDescriptor);
}
FORCEINLINE PEVENT_DESCRIPTOR EventDescSetOpcode(PEVENT_DESCRIPTOR EventDescriptor, UCHAR Opcode)
{
	EventDescriptor->Opcode = Opcode;
	return (EventDescriptor);
}
FORCEINLINE PEVENT_DESCRIPTOR EventDescSetLevel(PEVENT_DESCRIPTOR EventDescriptor, UCHAR Level)
{
	EventDescriptor->Level = Level;
	return (EventDescriptor);
}
FORCEINLINE PEVENT_DESCRIPTOR EventDescSetChannel(PEVENT_DESCRIPTOR EventDescriptor, UCHAR Channel)
{
	EventDescriptor->Channel = Channel;
	return (EventDescriptor);
}
FORCEINLINE PEVENT_DESCRIPTOR EventDescSetKeyword(PEVENT_DESCRIPTOR EventDescriptor, ULONGLONG Keyword)
{
	EventDescriptor->Keyword = Keyword;
	return (EventDescriptor);
}
FORCEINLINE PEVENT_DESCRIPTOR EventDescOrKeyword(PEVENT_DESCRIPTOR EventDescriptor, ULONGLONG Keyword)
{
	EventDescriptor->Keyword |= Keyword;
	return (EventDescriptor);
}
#endif
