/*+@@file@@----------------------------------------------------------------*//*!
 \file		winevt.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 22:15:18 2016
 \date		Modified on Sun Sep  4 22:15:18 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __WINEVT_H__
#define __WINEVT_H__
#if __POCC__ >= 500
#pragma once
#endif
#if (WINVER >= _WIN32_WINNT_LONGHORN)
typedef HANDLE EVT_HANDLE, *PEVT_HANDLE;
typedef enum _EVT_VARIANT_TYPE
{
    EvtVarTypeNull        = 0,
    EvtVarTypeString      = 1,
    EvtVarTypeAnsiString  = 2,
    EvtVarTypeSByte       = 3,
    EvtVarTypeByte        = 4,
    EvtVarTypeInt16       = 5,
    EvtVarTypeUInt16      = 6,
    EvtVarTypeInt32       = 7,
    EvtVarTypeUInt32      = 8,
    EvtVarTypeInt64       = 9,
    EvtVarTypeUInt64      = 10,
    EvtVarTypeSingle      = 11,
    EvtVarTypeDouble      = 12,
    EvtVarTypeBoolean     = 13,
    EvtVarTypeBinary      = 14,
    EvtVarTypeGuid        = 15,
    EvtVarTypeSizeT       = 16,
    EvtVarTypeFileTime    = 17,
    EvtVarTypeSysTime     = 18,
    EvtVarTypeSid         = 19,
    EvtVarTypeHexInt32    = 20,
    EvtVarTypeHexInt64    = 21,
    EvtVarTypeEvtHandle   = 32,
    EvtVarTypeEvtXml      = 35
} EVT_VARIANT_TYPE;
#define EVT_VARIANT_TYPE_MASK 0x7f
#define EVT_VARIANT_TYPE_ARRAY 128
typedef struct _EVT_VARIANT
{
    union
    {
        BOOL        BooleanVal;
        INT8        SByteVal;
        INT16       Int16Val;
        INT32       Int32Val;
        INT64       Int64Val;
        UINT8       ByteVal;
        UINT16      UInt16Val;
        UINT32      UInt32Val;
        UINT64      UInt64Val;
        float       SingleVal;
        double      DoubleVal;
        ULONGLONG   FileTimeVal;
        SYSTEMTIME* SysTimeVal;
        GUID*       GuidVal;
        LPCWSTR     StringVal;
        LPCSTR      AnsiStringVal;
        PBYTE       BinaryVal;
        PSID        SidVal;
        size_t      SizeTVal;
        BOOL*       BooleanArr;
        INT8*       SByteArr;
        INT16*      Int16Arr;
        INT32*      Int32Arr;
        INT64*      Int64Arr;
        UINT8*      ByteArr;
        UINT16*     UInt16Arr;
        UINT32*     UInt32Arr;
        UINT64*     UInt64Arr;
        float*      SingleArr;
        double*     DoubleArr;
        FILETIME*   FileTimeArr;
        SYSTEMTIME* SysTimeArr;
        GUID*       GuidArr;
        LPWSTR*     StringArr;
        LPSTR*      AnsiStringArr;
        PSID*       SidArr;
        size_t*     SizeTArr;
        EVT_HANDLE  EvtHandleVal;
        LPCWSTR     XmlVal;
        LPCWSTR*    XmlValArr;
    };
    DWORD Count;
    DWORD Type;
} EVT_VARIANT, *PEVT_VARIANT;
typedef enum _EVT_LOGIN_CLASS
{
    EvtRpcLogin = 1
} EVT_LOGIN_CLASS;
typedef enum _EVT_RPC_LOGIN_FLAGS
{
    EvtRpcLoginAuthDefault = 0,
    EvtRpcLoginAuthNegotiate,
    EvtRpcLoginAuthKerberos,
    EvtRpcLoginAuthNTLM
} EVT_RPC_LOGIN_FLAGS;
typedef struct _EVT_RPC_LOGIN
{
    LPWSTR  Server;
    LPWSTR  User;
    LPWSTR  Domain;
    LPWSTR  Password;
    DWORD   Flags;
} EVT_RPC_LOGIN;
EVT_HANDLE WINAPI EvtOpenSession(EVT_LOGIN_CLASS LoginClass, PVOID Login, DWORD Timeout, DWORD Flags);
BOOL WINAPI EvtClose(EVT_HANDLE Object);
BOOL WINAPI EvtCancel(EVT_HANDLE Object);
DWORD WINAPI EvtGetExtendedStatus(DWORD BufferSize, LPWSTR Buffer, PDWORD BufferUsed);
typedef enum _EVT_QUERY_FLAGS
{
    EvtQueryChannelPath                 = 0x1,
    EvtQueryFilePath                    = 0x2,
    EvtQueryForwardDirection            = 0x100,
    EvtQueryReverseDirection            = 0x200,
    EvtQueryTolerateQueryErrors         = 0x1000
} EVT_QUERY_FLAGS;
typedef enum _EVT_SEEK_FLAGS
{
    EvtSeekRelativeToFirst    = 1,
    EvtSeekRelativeToLast     = 2,
    EvtSeekRelativeToCurrent  = 3,
    EvtSeekRelativeToBookmark = 4,
    EvtSeekOriginMask         = 7,
    EvtSeekStrict             = 0x10000,
} EVT_SEEK_FLAGS;
EVT_HANDLE WINAPI EvtQuery(EVT_HANDLE Session, LPCWSTR Path, LPCWSTR Query, DWORD Flags);
BOOL WINAPI EvtNext(EVT_HANDLE ResultSet, DWORD EventsSize, PEVT_HANDLE Events, DWORD Timeout, DWORD Flags, PDWORD Returned);
BOOL WINAPI EvtSeek(EVT_HANDLE ResultSet, LONGLONG Position, EVT_HANDLE Bookmark, DWORD Timeout, DWORD Flags);
typedef enum _EVT_SUBSCRIBE_FLAGS
{
    EvtSubscribeToFutureEvents      = 1,
    EvtSubscribeStartAtOldestRecord = 2,
    EvtSubscribeStartAfterBookmark  = 3,
    EvtSubscribeOriginMask          = 3,
    EvtSubscribeTolerateQueryErrors = 0x1000,
    EvtSubscribeStrict              = 0x10000,
} EVT_SUBSCRIBE_FLAGS;
typedef enum _EVT_SUBSCRIBE_NOTIFY_ACTION
{
    EvtSubscribeActionError = 0,
    EvtSubscribeActionDeliver
} EVT_SUBSCRIBE_NOTIFY_ACTION;
typedef DWORD(WINAPI *EVT_SUBSCRIBE_CALLBACK) (EVT_SUBSCRIBE_NOTIFY_ACTION Action, PVOID UserContext, EVT_HANDLE Event);
EVT_HANDLE WINAPI EvtSubscribe(EVT_HANDLE Session, HANDLE SignalEvent, LPCWSTR ChannelPath, LPCWSTR Query, EVT_HANDLE Bookmark, PVOID context, EVT_SUBSCRIBE_CALLBACK Callback, DWORD Flags);
typedef enum _EVT_SYSTEM_PROPERTY_ID
{
    EvtSystemProviderName = 0,
    EvtSystemProviderGuid,
    EvtSystemEventID,
    EvtSystemQualifiers,
    EvtSystemLevel,
    EvtSystemTask,
    EvtSystemOpcode,
    EvtSystemKeywords,
    EvtSystemTimeCreated,
    EvtSystemEventRecordId,
    EvtSystemActivityID,
    EvtSystemRelatedActivityID,
    EvtSystemProcessID,
    EvtSystemThreadID,
    EvtSystemChannel,
    EvtSystemComputer,
    EvtSystemUserID,
    EvtSystemVersion,
    EvtSystemPropertyIdEND
} EVT_SYSTEM_PROPERTY_ID;
typedef enum _EVT_RENDER_CONTEXT_FLAGS
{
    EvtRenderContextValues = 0,
    EvtRenderContextSystem,
    EvtRenderContextUser
 } EVT_RENDER_CONTEXT_FLAGS;
typedef enum _EVT_RENDER_FLAGS
{
    EvtRenderEventValues = 0,
    EvtRenderEventXml,
    EvtRenderBookmark
 } EVT_RENDER_FLAGS;
EVT_HANDLE WINAPI EvtCreateRenderContext(DWORD ValuePathsCount, LPCWSTR *ValuePaths, DWORD Flags);
BOOL WINAPI EvtRender(EVT_HANDLE Context, EVT_HANDLE Fragment, DWORD Flags, DWORD BufferSize, PVOID Buffer, PDWORD BufferUsed, PDWORD PropertyCount);
typedef enum _EVT_FORMAT_MESSAGE_FLAGS
{
    EvtFormatMessageEvent = 1,
    EvtFormatMessageLevel,
    EvtFormatMessageTask,
    EvtFormatMessageOpcode,
    EvtFormatMessageKeyword,
    EvtFormatMessageChannel, 
    EvtFormatMessageProvider, 
    EvtFormatMessageId,
    EvtFormatMessageXml,
 } EVT_FORMAT_MESSAGE_FLAGS;
BOOL WINAPI EvtFormatMessage(EVT_HANDLE PublisherMetadata, EVT_HANDLE Event, DWORD MessageId, DWORD ValueCount, PEVT_VARIANT Values, DWORD Flags, DWORD BufferSize, LPWSTR Buffer, PDWORD BufferUsed);
typedef enum _EVT_OPEN_LOG_FLAGS
{
    EvtOpenChannelPath          = 0x1,
    EvtOpenFilePath             = 0x2
} EVT_OPEN_LOG_FLAGS;
typedef enum _EVT_LOG_PROPERTY_ID
{
    EvtLogCreationTime = 0,
    EvtLogLastAccessTime,
    EvtLogLastWriteTime,
    EvtLogFileSize,
    EvtLogAttributes,
    EvtLogNumberOfLogRecords,
    EvtLogOldestRecordNumber,
    EvtLogFull,
} EVT_LOG_PROPERTY_ID;
EVT_HANDLE WINAPI EvtOpenLog(EVT_HANDLE Session, LPCWSTR Path, DWORD Flags);
BOOL WINAPI EvtGetLogInfo(EVT_HANDLE Log, EVT_LOG_PROPERTY_ID PropertyId, DWORD PropertyValueBufferSize, PEVT_VARIANT PropertyValueBuffer, PDWORD PropertyValueBufferUsed);
BOOL WINAPI EvtClearLog(EVT_HANDLE Session, LPCWSTR ChannelPath, LPCWSTR TargetFilePath, DWORD Flags);
typedef enum _EVT_EXPORTLOG_FLAGS
{
    EvtExportLogChannelPath     = 0x1,
    EvtExportLogFilePath        = 0x2,
    EvtExportLogTolerateQueryErrors = 0x1000,
    EvtExportLogOverwrite = 0x2000
} EVT_EXPORTLOG_FLAGS;
BOOL WINAPI EvtExportLog(EVT_HANDLE Session, LPCWSTR Path, LPCWSTR Query, LPCWSTR TargetFilePath, DWORD Flags);
BOOL WINAPI EvtArchiveExportedLog(EVT_HANDLE Session, LPCWSTR LogFilePath, LCID Locale, DWORD Flags);
typedef enum _EVT_CHANNEL_CONFIG_PROPERTY_ID
{
    EvtChannelConfigEnabled = 0,
    EvtChannelConfigIsolation,
    EvtChannelConfigType,
    EvtChannelConfigOwningPublisher,
    EvtChannelConfigClassicEventlog,
    EvtChannelConfigAccess,
    EvtChannelLoggingConfigRetention,
    EvtChannelLoggingConfigAutoBackup,
    EvtChannelLoggingConfigMaxSize,
    EvtChannelLoggingConfigLogFilePath,
    EvtChannelPublishingConfigLevel,
    EvtChannelPublishingConfigKeywords,
    EvtChannelPublishingConfigControlGuid,
    EvtChannelPublishingConfigBufferSize,
    EvtChannelPublishingConfigMinBuffers,
    EvtChannelPublishingConfigMaxBuffers,
    EvtChannelPublishingConfigLatency,
    EvtChannelPublishingConfigClockType,
    EvtChannelPublishingConfigSidType,
    EvtChannelPublisherList,
    EvtChannelPublishingConfigFileMax,
    EvtChannelConfigPropertyIdEND
} EVT_CHANNEL_CONFIG_PROPERTY_ID;
typedef enum _EVT_CHANNEL_TYPE
{
    EvtChannelTypeAdmin = 0,
    EvtChannelTypeOperational,
    EvtChannelTypeAnalytic,
    EvtChannelTypeDebug
} EVT_CHANNEL_TYPE;
typedef enum _EVT_CHANNEL_ISOLATION_TYPE
{
    EvtChannelIsolationTypeApplication = 0,
    EvtChannelIsolationTypeSystem,
    EvtChannelIsolationTypeCustom
} EVT_CHANNEL_ISOLATION_TYPE;
typedef enum _EVT_CHANNEL_CLOCK_TYPE
{
    EvtChannelClockTypeSystemTime = 0,
    EvtChannelClockTypeQPC
} EVT_CHANNEL_CLOCK_TYPE;
typedef enum _EVT_CHANNEL_SID_TYPE
{
    EvtChannelSidTypeNone = 0,
    EvtChannelSidTypePublishing
} EVT_CHANNEL_SID_TYPE;
EVT_HANDLE WINAPI EvtOpenChannelEnum(EVT_HANDLE Session, DWORD Flags);
BOOL WINAPI EvtNextChannelPath(EVT_HANDLE ChannelEnum, DWORD ChannelPathBufferSize, LPWSTR ChannelPathBuffer, PDWORD ChannelPathBufferUsed);
EVT_HANDLE WINAPI EvtOpenChannelConfig(EVT_HANDLE Session, LPCWSTR ChannelPath, DWORD Flags);
BOOL WINAPI EvtSaveChannelConfig(EVT_HANDLE ChannelConfig, DWORD Flags);
BOOL WINAPI EvtSetChannelConfigProperty(EVT_HANDLE ChannelConfig, EVT_CHANNEL_CONFIG_PROPERTY_ID PropertyId, DWORD Flags, PEVT_VARIANT PropertyValue);
BOOL WINAPI EvtGetChannelConfigProperty(EVT_HANDLE ChannelConfig, EVT_CHANNEL_CONFIG_PROPERTY_ID PropertyId, DWORD Flags, DWORD PropertyValueBufferSize, PEVT_VARIANT PropertyValueBuffer, PDWORD PropertyValueBufferUsed);
typedef enum _EVT_CHANNEL_REFERENCE_FLAGS
{
    EvtChannelReferenceImported = 0x1,
} EVT_CHANNEL_REFERENCE_FLAGS;
typedef enum _EVT_PUBLISHER_METADATA_PROPERTY_ID
{
    EvtPublisherMetadataPublisherGuid = 0,
    EvtPublisherMetadataResourceFilePath,
    EvtPublisherMetadataParameterFilePath,
    EvtPublisherMetadataMessageFilePath,
    EvtPublisherMetadataHelpLink,
    EvtPublisherMetadataPublisherMessageID,
    EvtPublisherMetadataChannelReferences,
    EvtPublisherMetadataChannelReferencePath,
    EvtPublisherMetadataChannelReferenceIndex,
    EvtPublisherMetadataChannelReferenceID,
    EvtPublisherMetadataChannelReferenceFlags,
    EvtPublisherMetadataChannelReferenceMessageID,
    EvtPublisherMetadataLevels,
    EvtPublisherMetadataLevelName,
    EvtPublisherMetadataLevelValue,
    EvtPublisherMetadataLevelMessageID,
    EvtPublisherMetadataTasks,
    EvtPublisherMetadataTaskName,
    EvtPublisherMetadataTaskEventGuid,
    EvtPublisherMetadataTaskValue,
    EvtPublisherMetadataTaskMessageID,
    EvtPublisherMetadataOpcodes,
    EvtPublisherMetadataOpcodeName,
    EvtPublisherMetadataOpcodeValue,
    EvtPublisherMetadataOpcodeMessageID,
    EvtPublisherMetadataKeywords,
    EvtPublisherMetadataKeywordName,
    EvtPublisherMetadataKeywordValue,
    EvtPublisherMetadataKeywordMessageID,
    EvtPublisherMetadataPropertyIdEND
} EVT_PUBLISHER_METADATA_PROPERTY_ID;
EVT_HANDLE WINAPI EvtOpenPublisherEnum(EVT_HANDLE Session, DWORD Flags);
BOOL WINAPI EvtNextPublisherId(EVT_HANDLE PublisherEnum, DWORD PublisherIdBufferSize, LPWSTR PublisherIdBuffer, PDWORD PublisherIdBufferUsed);
EVT_HANDLE WINAPI EvtOpenPublisherMetadata(EVT_HANDLE Session, LPCWSTR PublisherId, LPCWSTR LogFilePath, LCID Locale, DWORD Flags);
BOOL WINAPI EvtGetPublisherMetadataProperty(EVT_HANDLE PublisherMetadata, EVT_PUBLISHER_METADATA_PROPERTY_ID PropertyId, DWORD Flags, DWORD PublisherMetadataPropertyBufferSize, PEVT_VARIANT PublisherMetadataPropertyBuffer, PDWORD PublisherMetadataPropertyBufferUsed);
typedef enum _EVT_EVENT_METADATA_PROPERTY_ID
{
    EventMetadataEventID,
    EventMetadataEventVersion,
    EventMetadataEventChannel,
    EventMetadataEventLevel,
    EventMetadataEventOpcode,
    EventMetadataEventTask,
    EventMetadataEventKeyword,
    EventMetadataEventMessageID,
    EventMetadataEventTemplate,
    EvtEventMetadataPropertyIdEND
} EVT_EVENT_METADATA_PROPERTY_ID;
EVT_HANDLE WINAPI EvtOpenEventMetadataEnum(EVT_HANDLE PublisherMetadata, DWORD Flags);
EVT_HANDLE WINAPI EvtNextEventMetadata(EVT_HANDLE EventMetadataEnum, DWORD Flags);
BOOL WINAPI EvtGetEventMetadataProperty(EVT_HANDLE EventMetadata, EVT_EVENT_METADATA_PROPERTY_ID PropertyId, DWORD Flags, DWORD EventMetadataPropertyBufferSize, PEVT_VARIANT EventMetadataPropertyBuffer, PDWORD EventMetadataPropertyBufferUsed);
typedef HANDLE EVT_OBJECT_ARRAY_PROPERTY_HANDLE;
BOOL WINAPI EvtGetObjectArraySize(EVT_OBJECT_ARRAY_PROPERTY_HANDLE ObjectArray, PDWORD ObjectArraySize);
BOOL WINAPI EvtGetObjectArrayProperty(EVT_OBJECT_ARRAY_PROPERTY_HANDLE ObjectArray, DWORD PropertyId, DWORD ArrayIndex, DWORD Flags, DWORD PropertyValueBufferSize, PEVT_VARIANT PropertyValueBuffer, PDWORD PropertyValueBufferUsed);
typedef enum _EVT_QUERY_PROPERTY_ID
{
    EvtQueryNames,
    EvtQueryStatuses,     
    EvtQueryPropertyIdEND
 
} EVT_QUERY_PROPERTY_ID;
typedef enum _EVT_EVENT_PROPERTY_ID
{
    EvtEventQueryIDs = 0,
    EvtEventPath,
    EvtEventPropertyIdEND
} EVT_EVENT_PROPERTY_ID;
BOOL WINAPI EvtGetQueryInfo(EVT_HANDLE QueryOrSubscription, EVT_QUERY_PROPERTY_ID PropertyId, DWORD PropertyValueBufferSize, PEVT_VARIANT PropertyValueBuffer, PDWORD PropertyValueBufferUsed);
EVT_HANDLE WINAPI EvtCreateBookmark(LPCWSTR BookmarkXml);
BOOL WINAPI EvtUpdateBookmark(EVT_HANDLE Bookmark, EVT_HANDLE Event);
BOOL WINAPI EvtGetEventInfo(EVT_HANDLE Event, EVT_EVENT_PROPERTY_ID PropertyId, DWORD PropertyValueBufferSize, PEVT_VARIANT PropertyValueBuffer, PDWORD PropertyValueBufferUsed);
#define EVT_READ_ACCESS    0x1
#define EVT_WRITE_ACCESS   0x2
#define EVT_CLEAR_ACCESS   0x4
#define EVT_ALL_ACCESS     0x7
#endif
#endif
