/*+@@file@@----------------------------------------------------------------*//*!
 \file		AqAdmTyp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 18:16:11 2016
 \date		Modified on Sat Jul  2 18:16:11 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __AQADMTYP_H__
#define __AQADMTYP_H__
#if __POCC__ >= 500
#pragma once
#endif
#define QUEUE_ADMIN_MAX_BUFFER_REQUIRED  200
typedef enum tagQUEUE_ADMIN_VERSIONS {
    CURRENT_QUEUE_ADMIN_VERSION = 4,
} QUEUE_ADMIN_VERSIONS;
typedef struct tagMESSAGE_FILTER
{
	DWORD dwVersion; 
	DWORD fFlags;
	LPCWSTR szMessageId;
	LPCWSTR szMessageSender;
	LPCWSTR szMessageRecipient;
	DWORD  dwLargerThanSize;
	SYSTEMTIME stOlderThan;
} MESSAGE_FILTER, *PMESSAGE_FILTER;
typedef enum tagMESSAGE_FILTER_FLAGS
{
	MF_MESSAGEID                = 0x00000001,
	MF_SENDER                   = 0x00000002,
	MF_RECIPIENT                = 0x00000004,
	MF_SIZE                     = 0x00000008,
	MF_TIME                     = 0x00000010,
	MF_FROZEN                   = 0x00000020,
	MF_FAILED                   = 0x00000100,
	MF_ALL                      = 0x40000000,
	MF_INVERTSENSE              = 0x80000000
} MESSAGE_FILTER_FLAGS;
typedef enum tagMESSAGE_ACTION
{
	MA_THAW_GLOBAL              = 0x00000001, 
	MA_COUNT                    = 0x00000002,
	MA_FREEZE_GLOBAL            = 0x00000004,
	MA_DELETE                   = 0x00000008,
	MA_DELETE_SILENT            = 0x00000010
} MESSAGE_ACTION;
typedef enum tagMESSAGE_ENUM_FILTER_TYPE
{
	MEF_FIRST_N_MESSAGES        = 0x00000001,
	MEF_SENDER                  = 0x00000002,
	MEF_RECIPIENT               = 0x00000004,
	MEF_LARGER_THAN             = 0x00000008,
	MEF_OLDER_THAN              = 0x00000010,
	MEF_FROZEN                  = 0x00000020,
	MEF_N_LARGEST_MESSAGES      = 0x00000040,
	MEF_N_OLDEST_MESSAGES       = 0x00000080,
	MEF_FAILED                  = 0x00000100,
	MEF_ALL                     = 0x40000000,
	MEF_INVERTSENSE             = 0x80000000,
} MESSAGE_ENUM_FILTER_TYPE;
typedef struct tagMESSAGE_ENUM_FILTER
{
	DWORD dwVersion;
	DWORD mefType;
	DWORD cMessages;
	DWORD cbSize;
	DWORD cSkipMessages;
	SYSTEMTIME stDate;
	LPCWSTR szMessageSender;
	LPCWSTR szMessageRecipient;
} MESSAGE_ENUM_FILTER, *PMESSAGE_ENUM_FILTER;
typedef enum tagLINK_INFO_FLAGS
{
	LI_ACTIVE                       = 0x00000001,
	LI_READY                        = 0x00000002,
	LI_RETRY                        = 0x00000004,
	LI_SCHEDULED                    = 0x00000008,
	LI_REMOTE                       = 0x00000010,
	LI_FROZEN                       = 0x00000020,
	LI_TYPE_REMOTE_DELIVERY         = 0x00000100,
	LI_TYPE_LOCAL_DELIVERY          = 0x00000200,
	LI_TYPE_PENDING_ROUTING         = 0x00000400,
	LI_TYPE_PENDING_CAT             = 0x00000800,
	LI_TYPE_CURRENTLY_UNREACHABLE   = 0x00001000,
	LI_TYPE_DEFERRED_DELIVERY       = 0x00002000,
	LI_TYPE_INTERNAL                = 0x00004000,
	LI_TYPE_PENDING_SUBMIT          = 0x00008000,
} LINK_INFO_FLAGS;
typedef enum tagLINK_ACTION
{
	LA_INTERNAL                 = 0x00000000,
	LA_KICK                     = 0x00000001,
	LA_FREEZE                   = 0x00000020,
	LA_THAW                     = 0x00000040,
} LINK_ACTION;
typedef struct tagLINK_INFO
{
	DWORD dwVersion; 
	LPWSTR szLinkName;
	DWORD cMessages;
	DWORD fStateFlags;
	SYSTEMTIME stNextScheduledConnection;
	SYSTEMTIME stOldestMessage;
	ULARGE_INTEGER cbLinkVolume;
	LPWSTR szLinkDN;
	LPWSTR szExtendedStateInfo;
	DWORD  dwSupportedLinkActions;
} LINK_INFO, *PLINK_INFO;
typedef struct tagQUEUE_INFO
{
	DWORD dwVersion; 
	LPWSTR szQueueName;
	LPWSTR szLinkName;
	DWORD cMessages;
	ULARGE_INTEGER cbQueueVolume;
	DWORD dwMsgEnumFlagsSupported;
} QUEUE_INFO, *PQUEUE_INFO;
typedef enum tagAQ_MESSAGE_FLAGS
{
	MP_HIGH                     = 0x00000001,
	MP_NORMAL                   = 0x00000002,
	MP_LOW                      = 0x00000004,
	MP_MSG_FROZEN               = 0x00000008,
	MP_MSG_RETRY                = 0x00000010,
	MP_MSG_CONTENT_AVAILABLE    = 0x00000020,
} AQ_MESSAGE_FLAGS;
typedef struct tagMESSAGE_INFO
{
	DWORD dwVersion; 
	LPWSTR szMessageId;
	LPWSTR szSender;
	LPWSTR szSubject;
	DWORD cRecipients;
	LPWSTR szRecipients;
	DWORD cCCRecipients;
	LPWSTR szCCRecipients;
	DWORD cBCCRecipients;
	LPWSTR szBCCRecipients;
	DWORD fMsgFlags;
	DWORD cbMessageSize;
	SYSTEMTIME stSubmission;
	SYSTEMTIME stReceived;
	SYSTEMTIME stExpiry;
	DWORD cFailures;
	DWORD cEnvRecipients;
	DWORD cbEnvRecipients;
	WCHAR *mszEnvRecipients;
} MESSAGE_INFO, *PMESSAGE_INFO;
typedef enum tagQUEUELINK_TYPE
{
	QLT_QUEUE,
	QLT_LINK,
	QLT_NONE
} QUEUELINK_TYPE;
typedef struct tagQUEUELINK_ID
{
	GUID            uuid;
	LPWSTR          szName;
	DWORD           dwId;
	QUEUELINK_TYPE  qltType;
} QUEUELINK_ID;
#endif
