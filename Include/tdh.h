/*+@@file@@----------------------------------------------------------------*//*!
 \file		tdh.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 12:23:52 2016
 \date		Modified on Sat Sep 17 12:23:52 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __TDH_H__
#define __TDH_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <wmistr.h>
#include <evntrace.h>
#include <evntcons.h>
typedef ULONG TDHSTATUS;
#define TDHAPI  TDHSTATUS __stdcall
typedef struct _EVENT_MAP_ENTRY
{
    ULONG OutputOffset;
    union
	{
        ULONG Value;
        ULONG InputOffset;
    };
} EVENT_MAP_ENTRY;
typedef EVENT_MAP_ENTRY *PEVENT_MAP_ENTRY;
typedef enum _MAP_FLAGS
{
    EVENTMAP_INFO_FLAG_MANIFEST_VALUEMAP = 0x1,
    EVENTMAP_INFO_FLAG_MANIFEST_BITMAP = 0x2,
    EVENTMAP_INFO_FLAG_MANIFEST_PATTERNMAP = 0x4,
    EVENTMAP_INFO_FLAG_WBEM_VALUEMAP = 0x8,
    EVENTMAP_INFO_FLAG_WBEM_BITMAP = 0x10,
    EVENTMAP_INFO_FLAG_WBEM_FLAG = 0x20,
    EVENTMAP_INFO_FLAG_WBEM_NO_MAP = 0x40
} MAP_FLAGS;
typedef enum _MAP_VALUETYPE
{
    EVENTMAP_ENTRY_VALUETYPE_ULONG,
    EVENTMAP_ENTRY_VALUETYPE_STRING
}  MAP_VALUETYPE;
typedef struct _EVENT_MAP_INFO
{
    ULONG NameOffset;
    MAP_FLAGS Flag;
    ULONG EntryCount;
    union
	{
        MAP_VALUETYPE MapEntryValueType;
        ULONG FormatStringOffset;
    };
    EVENT_MAP_ENTRY MapEntryArray[ANYSIZE_ARRAY];
} EVENT_MAP_INFO;
typedef EVENT_MAP_INFO *PEVENT_MAP_INFO;
enum _TDH_IN_TYPE
{
    TDH_INTYPE_NULL,
    TDH_INTYPE_UNICODESTRING,
    TDH_INTYPE_ANSISTRING,
    TDH_INTYPE_INT8,
    TDH_INTYPE_UINT8,
    TDH_INTYPE_INT16,
    TDH_INTYPE_UINT16,
    TDH_INTYPE_INT32,
    TDH_INTYPE_UINT32,
    TDH_INTYPE_INT64,
    TDH_INTYPE_UINT64,
    TDH_INTYPE_FLOAT,
    TDH_INTYPE_DOUBLE,
    TDH_INTYPE_BOOLEAN,
    TDH_INTYPE_BINARY,
    TDH_INTYPE_GUID,
    TDH_INTYPE_POINTER,
    TDH_INTYPE_FILETIME,
    TDH_INTYPE_SYSTEMTIME,
    TDH_INTYPE_SID,
    TDH_INTYPE_HEXINT32,
    TDH_INTYPE_HEXINT64,
    TDH_INTYPE_COUNTEDSTRING = 300,
    TDH_INTYPE_COUNTEDANSISTRING,
    TDH_INTYPE_REVERSEDCOUNTEDSTRING,
    TDH_INTYPE_REVERSEDCOUNTEDANSISTRING,
    TDH_INTYPE_NONNULLTERMINATEDSTRING,
    TDH_INTYPE_NONNULLTERMINATEDANSISTRING,
    TDH_INTYPE_UNICODECHAR,
    TDH_INTYPE_ANSICHAR,
    TDH_INTYPE_SIZET,
    TDH_INTYPE_HEXDUMP,
    TDH_INTYPE_WBEMSID
};
enum _TDH_OUT_TYPE
{
    TDH_OUTTYPE_NULL,
    TDH_OUTTYPE_STRING,
    TDH_OUTTYPE_DATETIME,
    TDH_OUTTYPE_BYTE,
    TDH_OUTTYPE_UNSIGNEDBYTE,
    TDH_OUTTYPE_SHORT,
    TDH_OUTTYPE_UNSIGNEDSHORT,
    TDH_OUTTYPE_INT,
    TDH_OUTTYPE_UNSIGNEDINT,
    TDH_OUTTYPE_LONG,
    TDH_OUTTYPE_UNSIGNEDLONG,
    TDH_OUTTYPE_FLOAT,
    TDH_OUTTYPE_DOUBLE,
    TDH_OUTTYPE_BOOLEAN,
    TDH_OUTTYPE_GUID,
    TDH_OUTTYPE_HEXBINARY,
    TDH_OUTTYPE_HEXINT8,
    TDH_OUTTYPE_HEXINT16,
    TDH_OUTTYPE_HEXINT32,
    TDH_OUTTYPE_HEXINT64,
    TDH_OUTTYPE_PID,
    TDH_OUTTYPE_TID,
    TDH_OUTTYPE_PORT,
    TDH_OUTTYPE_IPV4,
    TDH_OUTTYPE_IPV6,
    TDH_OUTTYPE_SOCKETADDRESS,
    TDH_OUTTYPE_CIMDATETIME,
    TDH_OUTTYPE_ETWTIME,
    TDH_OUTTYPE_XML,
    TDH_OUTTYPE_ERRORCODE,
    TDH_OUTTYPE_WIN32ERROR,
    TDH_OUTTYPE_NTSTATUS,
    TDH_OUTTYPE_HRESULT,
    TDH_OUTTYPE_CULTURE_INSENSITIVE_DATETIME,
    TDH_OUTTYPE_REDUCEDSTRING = 300,
    TDH_OUTTYPE_NOPRINT
};
#define TDH_OUTYTPE_ERRORCODE TDH_OUTTYPE_ERRORCODE
typedef enum _PROPERTY_FLAGS
{
   PropertyStruct        = 0x1,
   PropertyParamLength   = 0x2,
   PropertyParamCount    = 0x4,
   PropertyWBEMXmlFragment = 0x8,
   PropertyParamFixedLength = 0x10
} PROPERTY_FLAGS;
typedef struct _EVENT_PROPERTY_INFO
{
    PROPERTY_FLAGS Flags;
    ULONG NameOffset;
    union
	{
        struct _nonStructType
		{
            USHORT InType;
            USHORT OutType;
            ULONG MapNameOffset;
        } nonStructType;
        struct _structType
		{
            USHORT StructStartIndex;
            USHORT NumOfStructMembers;
            ULONG padding;
        } structType;
    };
    union
	{
        USHORT count;
        USHORT countPropertyIndex;
    };
    union
	{
        USHORT length;
        USHORT lengthPropertyIndex;
    };
    ULONG Reserved;
} EVENT_PROPERTY_INFO;
typedef EVENT_PROPERTY_INFO *PEVENT_PROPERTY_INFO;
typedef enum _DECODING_SOURCE
{
    DecodingSourceXMLFile,
    DecodingSourceWbem,
    DecodingSourceWPP
} DECODING_SOURCE;
typedef enum _TEMPLATE_FLAGS
{
    TEMPLATE_EVENT_DATA = 1,
    TEMPLATE_USER_DATA = 2
} TEMPLATE_FLAGS;
typedef struct _TRACE_EVENT_INFO
{
    GUID ProviderGuid;
    GUID EventGuid;
    EVENT_DESCRIPTOR EventDescriptor;
    DECODING_SOURCE DecodingSource;
    ULONG ProviderNameOffset;
    ULONG LevelNameOffset;
    ULONG ChannelNameOffset;
    ULONG KeywordsNameOffset;
    ULONG TaskNameOffset;
    ULONG OpcodeNameOffset;
    ULONG EventMessageOffset;
    ULONG ProviderMessageOffset;
    ULONG BinaryXMLOffset;
    ULONG BinaryXMLSize;
    ULONG ActivityIDNameOffset;
    ULONG RelatedActivityIDNameOffset;
    ULONG PropertyCount;
    ULONG TopLevelPropertyCount;
    TEMPLATE_FLAGS Flags;
    EVENT_PROPERTY_INFO EventPropertyInfoArray[ANYSIZE_ARRAY];
} TRACE_EVENT_INFO;
typedef TRACE_EVENT_INFO *PTRACE_EVENT_INFO;
typedef struct _PROPERTY_DATA_DESCRIPTOR
{
    ULONGLONG PropertyName;
    ULONG ArrayIndex;
    ULONG Reserved;
} PROPERTY_DATA_DESCRIPTOR;
typedef PROPERTY_DATA_DESCRIPTOR *PPROPERTY_DATA_DESCRIPTOR;
typedef struct _PROVIDER_FILTER_INFO
{
    UCHAR Id;
    UCHAR Version;
    ULONG MessageOffset;
    ULONG Reserved;
    ULONG PropertyCount;
    EVENT_PROPERTY_INFO EventPropertyInfoArray[ANYSIZE_ARRAY];
} PROVIDER_FILTER_INFO, *PPROVIDER_FILTER_INFO;
typedef enum _EVENT_FIELD_TYPE
{
    EventKeywordInformation = 0,
    EventLevelInformation,
    EventChannelInformation,
    EventTaskInformation,
    EventOpcodeInformation,
    EventInformationMax
} EVENT_FIELD_TYPE;
typedef struct _PROVIDER_FIELD_INFO
{
    ULONG NameOffset;
    ULONG DescriptionOffset;
    ULONGLONG Value;
} PROVIDER_FIELD_INFO;
typedef PROVIDER_FIELD_INFO *PPROVIDER_FIELD_INFO;
typedef struct _PROVIDER_FIELD_INFOARRAY
{
    ULONG NumberOfElements;
    EVENT_FIELD_TYPE FieldType;
    PROVIDER_FIELD_INFO FieldInfoArray[ANYSIZE_ARRAY];
} PROVIDER_FIELD_INFOARRAY;
typedef PROVIDER_FIELD_INFOARRAY *PPROVIDER_FIELD_INFOARRAY;
typedef struct _TRACE_PROVIDER_INFO
{
    GUID ProviderGuid;
    ULONG SchemaSource;
    ULONG ProviderNameOffset;
} TRACE_PROVIDER_INFO;
typedef TRACE_PROVIDER_INFO *PTRACE_PROVIDER_INFO;
typedef struct _PROVIDER_ENUMERATION_INFO
{
    ULONG NumberOfProviders;
    ULONG Reserved;
    TRACE_PROVIDER_INFO TraceProviderInfoArray[ANYSIZE_ARRAY];
} PROVIDER_ENUMERATION_INFO;
typedef PROVIDER_ENUMERATION_INFO *PPROVIDER_ENUMERATION_INFO;
typedef enum _TDH_CONTEXT_TYPE
{
    TDH_CONTEXT_WPP_TMFFILE = 0,
    TDH_CONTEXT_WPP_TMFSEARCHPATH,
    TDH_CONTEXT_WPP_GMT,
    TDH_CONTEXT_POINTERSIZE,
    TDH_CONTEXT_MAXIMUM
} TDH_CONTEXT_TYPE;
typedef struct _TDH_CONTEXT
{
    ULONGLONG ParameterValue;
    TDH_CONTEXT_TYPE ParameterType;
    ULONG ParameterSize;
} TDH_CONTEXT;
typedef TDH_CONTEXT *PTDH_CONTEXT;
TDHAPI TdhGetEventInformation(PEVENT_RECORD Event, ULONG TdhContextCount, PTDH_CONTEXT TdhContext, PTRACE_EVENT_INFO Buffer, PULONG BufferSize);
TDHAPI TdhGetEventMapInformation(PEVENT_RECORD pEvent, PWSTR pMapName, PEVENT_MAP_INFO pBuffer, ULONG *pBufferSize);
TDHAPI TdhGetPropertySize(PEVENT_RECORD pEvent, ULONG TdhContextCount, PTDH_CONTEXT pTdhContext, ULONG PropertyDataCount, PPROPERTY_DATA_DESCRIPTOR pPropertyData, ULONG *pPropertySize);
TDHAPI TdhGetProperty(PEVENT_RECORD pEvent, ULONG TdhContextCount, PTDH_CONTEXT pTdhContext, ULONG PropertyDataCount, PPROPERTY_DATA_DESCRIPTOR pPropertyData, ULONG BufferSize, PBYTE pBuffer);
TDHAPI TdhEnumerateProviders(PPROVIDER_ENUMERATION_INFO pBuffer, ULONG *pBufferSize);
TDHAPI TdhQueryProviderFieldInformation(LPGUID pGuid, ULONGLONG EventFieldValue, EVENT_FIELD_TYPE EventFieldType, PPROVIDER_FIELD_INFOARRAY pBuffer, ULONG *pBufferSize);
TDHAPI TdhEnumerateProviderFieldInformation(LPGUID pGuid, EVENT_FIELD_TYPE EventFieldType, PPROVIDER_FIELD_INFOARRAY pBuffer, ULONG *pBufferSize);
#if (WINVER >= _WIN32_WINNT_WIN7)
TDHAPI TdhEnumerateProviderFilters(LPGUID Guid, ULONG TdhContextCount, PTDH_CONTEXT TdhContext, ULONG *FilterCount, PPROVIDER_FILTER_INFO *Buffer, ULONG *BufferSize);
#endif
#if (WINVER >= _WIN32_WINNT_WIN7)
TDHAPI TdhLoadManifest(PWSTR Manifest);
#endif
#if (WINVER >= _WIN32_WINNT_WIN7)
TDHAPI TdhUnloadManifest(PWSTR Manifest);
#endif
#if (WINVER >= _WIN32_WINNT_WIN7)
TDHAPI TdhFormatProperty(PTRACE_EVENT_INFO EventInfo, PEVENT_MAP_INFO MapInfo, ULONG PointerSize, USHORT PropertyInType, USHORT PropertyOutType, USHORT PropertyLength, USHORT UserDataLength, PBYTE UserData, PULONG BufferSize, PWCHAR Buffer, PUSHORT UserDataConsumed);
#endif
FORCEINLINE PWSTR EMI_MAP_NAME(PEVENT_MAP_INFO MapInfo)
{
	return (MapInfo->NameOffset == 0) ? NULL : (PWSTR)((PBYTE)MapInfo + MapInfo->NameOffset);
}
FORCEINLINE PWSTR EMI_MAP_FORMAT(PEVENT_MAP_INFO MapInfo)
{
	if ((MapInfo->Flag & EVENTMAP_INFO_FLAG_MANIFEST_PATTERNMAP) && (MapInfo->FormatStringOffset))
	{
		return (PWSTR) ((PBYTE)MapInfo + MapInfo->FormatStringOffset);
	}
	else
	{
		return NULL;
	}
}
FORCEINLINE PWSTR EMI_MAP_OUTPUT(PEVENT_MAP_INFO MapInfo, PEVENT_MAP_ENTRY Map)
{
	return (Map->OutputOffset == 0) ? NULL : (PWSTR)((PBYTE)MapInfo + Map->OutputOffset);
}
FORCEINLINE PWSTR EMI_MAP_INPUT(PEVENT_MAP_INFO MapInfo, PEVENT_MAP_ENTRY Map)
{
	if ((MapInfo->Flag & EVENTMAP_INFO_FLAG_MANIFEST_PATTERNMAP) && (Map->InputOffset != 0))
	{
		return (PWSTR) ((PBYTE)MapInfo + Map->InputOffset);
	}
	else
	{
		return NULL;
	}
}
FORCEINLINE PWSTR TEI_MAP_NAME(PTRACE_EVENT_INFO EventInfo, PEVENT_PROPERTY_INFO Property)
{
	return (Property->nonStructType.MapNameOffset == 0) ? NULL : (PWSTR)((PBYTE)EventInfo + Property->nonStructType.MapNameOffset);
}
FORCEINLINE PWSTR TEI_PROPERTY_NAME(PTRACE_EVENT_INFO EventInfo, PEVENT_PROPERTY_INFO Property)
{
	return (Property->NameOffset == 0) ? NULL : (PWSTR)((PBYTE)EventInfo + Property->NameOffset);
}
FORCEINLINE PWSTR TEI_PROVIDER_NAME(PTRACE_EVENT_INFO EventInfo)
{
	return (EventInfo->ProviderNameOffset == 0) ? NULL : (PWSTR)((PBYTE)EventInfo + EventInfo->ProviderNameOffset);
}
FORCEINLINE PWSTR TEI_LEVEL_NAME(PTRACE_EVENT_INFO EventInfo)
{
	return (EventInfo->LevelNameOffset == 0) ? NULL : (PWSTR)((PBYTE)EventInfo + EventInfo->LevelNameOffset);
}
FORCEINLINE PWSTR TEI_CHANNEL_NAME(PTRACE_EVENT_INFO EventInfo)
{
	return (EventInfo->ChannelNameOffset == 0) ? NULL : (PWSTR)((PBYTE)EventInfo + EventInfo->ChannelNameOffset);
}
FORCEINLINE PWSTR TEI_KEYWORDS_NAME(PTRACE_EVENT_INFO EventInfo)
{
	return (EventInfo->KeywordsNameOffset == 0) ? NULL : (PWSTR)((PBYTE)EventInfo + EventInfo->KeywordsNameOffset);
}
FORCEINLINE PWSTR TEI_TASK_NAME(PTRACE_EVENT_INFO EventInfo)
{
	return (EventInfo->TaskNameOffset == 0) ? NULL : (PWSTR)((PBYTE)EventInfo + EventInfo->TaskNameOffset);
}
FORCEINLINE PWSTR TEI_OPCODE_NAME(PTRACE_EVENT_INFO EventInfo)
{
	return (EventInfo->OpcodeNameOffset == 0) ? NULL : (PWSTR)((PBYTE)EventInfo + EventInfo->OpcodeNameOffset);
}
FORCEINLINE PWSTR TEI_EVENT_MESSAGE(PTRACE_EVENT_INFO EventInfo)
{
	return (EventInfo->EventMessageOffset == 0) ? NULL : (PWSTR)((PBYTE)EventInfo + EventInfo->EventMessageOffset);
}
FORCEINLINE PWSTR TEI_PROVIDER_MESSAGE(PTRACE_EVENT_INFO EventInfo)
{
	return (EventInfo->ProviderMessageOffset == 0) ? NULL : (PWSTR)((PBYTE)EventInfo + EventInfo->ProviderMessageOffset);
}
FORCEINLINE PWSTR TEI_ACTIVITYID_NAME(PTRACE_EVENT_INFO EventInfo)
{
	return (EventInfo->ActivityIDNameOffset == 0) ? NULL : (PWSTR)((PBYTE)EventInfo + EventInfo->ActivityIDNameOffset);
}
FORCEINLINE PWSTR TEI_RELATEDACTIVITYID_NAME(PTRACE_EVENT_INFO EventInfo)
{
	return (EventInfo->RelatedActivityIDNameOffset == 0) ? NULL : (PWSTR)((PBYTE)EventInfo + EventInfo->RelatedActivityIDNameOffset);
}
#if (WINVER >= _WIN32_WINNT_WIN7)
FORCEINLINE PWSTR PFI_FILTER_MESSAGE(PPROVIDER_FILTER_INFO FilterInfo)
{
	return (FilterInfo->MessageOffset == 0) ? NULL : (PWSTR)((PBYTE)FilterInfo + FilterInfo->MessageOffset);
}
#endif
#if (WINVER >= _WIN32_WINNT_WIN7)
FORCEINLINE PWSTR PFI_PROPERTY_NAME(PPROVIDER_FILTER_INFO FilterInfo, PEVENT_PROPERTY_INFO Property)
{
	return (Property->NameOffset == 0) ? NULL : (PWSTR)((PBYTE)FilterInfo + Property->NameOffset);
}
#endif
FORCEINLINE PWSTR PFI_FIELD_NAME(PPROVIDER_FIELD_INFOARRAY FieldInfoArray, PPROVIDER_FIELD_INFO FieldInfo)
{
	return (FieldInfo->NameOffset == 0) ? NULL : (PWSTR)((PBYTE)FieldInfoArray + FieldInfo->NameOffset);
}
FORCEINLINE PWSTR PFI_FIELD_MESSAGE(PPROVIDER_FIELD_INFOARRAY FieldInfoArray, PPROVIDER_FIELD_INFO FieldInfo)
{
	return (FieldInfo->DescriptionOffset == 0) ? NULL : (PWSTR)((PBYTE)FieldInfoArray + FieldInfo->DescriptionOffset);
}
FORCEINLINE PWSTR PEI_PROVIDER_NAME(PPROVIDER_ENUMERATION_INFO ProviderEnum, PTRACE_PROVIDER_INFO ProviderInfo)
{
	return (ProviderInfo->ProviderNameOffset == 0) ? NULL : (PWSTR)((PBYTE)ProviderEnum + ProviderInfo->ProviderNameOffset);
}
#endif
