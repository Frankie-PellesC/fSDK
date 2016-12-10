/*+@@file@@----------------------------------------------------------------*//*!
 \file		MqOaI.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug  7 22:55:23 2016
 \date		Modified on Sun Aug  7 22:55:23 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __mqoai_h__
#define __mqoai_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IMSMQQuery_FWD_DEFINED__
#define __IMSMQQuery_FWD_DEFINED__
typedef interface IMSMQQuery IMSMQQuery;
#endif
#ifndef __IMSMQQueueInfo_FWD_DEFINED__
#define __IMSMQQueueInfo_FWD_DEFINED__
typedef interface IMSMQQueueInfo IMSMQQueueInfo;
#endif
#ifndef __IMSMQQueueInfo2_FWD_DEFINED__
#define __IMSMQQueueInfo2_FWD_DEFINED__
typedef interface IMSMQQueueInfo2 IMSMQQueueInfo2;
#endif
#ifndef __IMSMQQueueInfo3_FWD_DEFINED__
#define __IMSMQQueueInfo3_FWD_DEFINED__
typedef interface IMSMQQueueInfo3 IMSMQQueueInfo3;
#endif
#ifndef __IMSMQQueueInfo4_FWD_DEFINED__
#define __IMSMQQueueInfo4_FWD_DEFINED__
typedef interface IMSMQQueueInfo4 IMSMQQueueInfo4;
#endif
#ifndef __IMSMQQueue_FWD_DEFINED__
#define __IMSMQQueue_FWD_DEFINED__
typedef interface IMSMQQueue IMSMQQueue;
#endif
#ifndef __IMSMQQueue2_FWD_DEFINED__
#define __IMSMQQueue2_FWD_DEFINED__
typedef interface IMSMQQueue2 IMSMQQueue2;
#endif
#ifndef __IMSMQQueue3_FWD_DEFINED__
#define __IMSMQQueue3_FWD_DEFINED__
typedef interface IMSMQQueue3 IMSMQQueue3;
#endif
#ifndef __IMSMQQueue4_FWD_DEFINED__
#define __IMSMQQueue4_FWD_DEFINED__
typedef interface IMSMQQueue4 IMSMQQueue4;
#endif
#ifndef __IMSMQMessage_FWD_DEFINED__
#define __IMSMQMessage_FWD_DEFINED__
typedef interface IMSMQMessage IMSMQMessage;
#endif
#ifndef __IMSMQQueueInfos_FWD_DEFINED__
#define __IMSMQQueueInfos_FWD_DEFINED__
typedef interface IMSMQQueueInfos IMSMQQueueInfos;
#endif
#ifndef __IMSMQQueueInfos2_FWD_DEFINED__
#define __IMSMQQueueInfos2_FWD_DEFINED__
typedef interface IMSMQQueueInfos2 IMSMQQueueInfos2;
#endif
#ifndef __IMSMQQueueInfos3_FWD_DEFINED__
#define __IMSMQQueueInfos3_FWD_DEFINED__
typedef interface IMSMQQueueInfos3 IMSMQQueueInfos3;
#endif
#ifndef __IMSMQQueueInfos4_FWD_DEFINED__
#define __IMSMQQueueInfos4_FWD_DEFINED__
typedef interface IMSMQQueueInfos4 IMSMQQueueInfos4;
#endif
#ifndef __IMSMQEvent_FWD_DEFINED__
#define __IMSMQEvent_FWD_DEFINED__
typedef interface IMSMQEvent IMSMQEvent;
#endif
#ifndef __IMSMQEvent2_FWD_DEFINED__
#define __IMSMQEvent2_FWD_DEFINED__
typedef interface IMSMQEvent2 IMSMQEvent2;
#endif
#ifndef __IMSMQEvent3_FWD_DEFINED__
#define __IMSMQEvent3_FWD_DEFINED__
typedef interface IMSMQEvent3 IMSMQEvent3;
#endif
#ifndef __IMSMQTransaction_FWD_DEFINED__
#define __IMSMQTransaction_FWD_DEFINED__
typedef interface IMSMQTransaction IMSMQTransaction;
#endif
#ifndef __IMSMQCoordinatedTransactionDispenser_FWD_DEFINED__
#define __IMSMQCoordinatedTransactionDispenser_FWD_DEFINED__
typedef interface IMSMQCoordinatedTransactionDispenser IMSMQCoordinatedTransactionDispenser;
#endif
#ifndef __IMSMQTransactionDispenser_FWD_DEFINED__
#define __IMSMQTransactionDispenser_FWD_DEFINED__
typedef interface IMSMQTransactionDispenser IMSMQTransactionDispenser;
#endif
#ifndef __IMSMQQuery2_FWD_DEFINED__
#define __IMSMQQuery2_FWD_DEFINED__
typedef interface IMSMQQuery2 IMSMQQuery2;
#endif
#ifndef __IMSMQQuery3_FWD_DEFINED__
#define __IMSMQQuery3_FWD_DEFINED__
typedef interface IMSMQQuery3 IMSMQQuery3;
#endif
#ifndef __IMSMQQuery4_FWD_DEFINED__
#define __IMSMQQuery4_FWD_DEFINED__
typedef interface IMSMQQuery4 IMSMQQuery4;
#endif
#ifndef __MSMQQuery_FWD_DEFINED__
#define __MSMQQuery_FWD_DEFINED__
typedef struct MSMQQuery MSMQQuery;
#endif
#ifndef __IMSMQMessage2_FWD_DEFINED__
#define __IMSMQMessage2_FWD_DEFINED__
typedef interface IMSMQMessage2 IMSMQMessage2;
#endif
#ifndef __IMSMQMessage3_FWD_DEFINED__
#define __IMSMQMessage3_FWD_DEFINED__
typedef interface IMSMQMessage3 IMSMQMessage3;
#endif
#ifndef __IMSMQMessage4_FWD_DEFINED__
#define __IMSMQMessage4_FWD_DEFINED__
typedef interface IMSMQMessage4 IMSMQMessage4;
#endif
#ifndef __MSMQMessage_FWD_DEFINED__
#define __MSMQMessage_FWD_DEFINED__
typedef struct MSMQMessage MSMQMessage;
#endif
#ifndef __MSMQQueue_FWD_DEFINED__
#define __MSMQQueue_FWD_DEFINED__
typedef struct MSMQQueue MSMQQueue;
#endif
#ifndef __IMSMQPrivateEvent_FWD_DEFINED__
#define __IMSMQPrivateEvent_FWD_DEFINED__
typedef interface IMSMQPrivateEvent IMSMQPrivateEvent;
#endif
#ifndef ___DMSMQEventEvents_FWD_DEFINED__
#define ___DMSMQEventEvents_FWD_DEFINED__
typedef interface _DMSMQEventEvents _DMSMQEventEvents;
#endif
#ifndef __MSMQEvent_FWD_DEFINED__
#define __MSMQEvent_FWD_DEFINED__
typedef struct MSMQEvent MSMQEvent;
#endif
#ifndef __MSMQQueueInfo_FWD_DEFINED__
#define __MSMQQueueInfo_FWD_DEFINED__
typedef struct MSMQQueueInfo MSMQQueueInfo;
#endif
#ifndef __MSMQQueueInfos_FWD_DEFINED__
#define __MSMQQueueInfos_FWD_DEFINED__
typedef struct MSMQQueueInfos MSMQQueueInfos;
#endif
#ifndef __IMSMQTransaction2_FWD_DEFINED__
#define __IMSMQTransaction2_FWD_DEFINED__
typedef interface IMSMQTransaction2 IMSMQTransaction2;
#endif
#ifndef __IMSMQTransaction3_FWD_DEFINED__
#define __IMSMQTransaction3_FWD_DEFINED__
typedef interface IMSMQTransaction3 IMSMQTransaction3;
#endif
#ifndef __MSMQTransaction_FWD_DEFINED__
#define __MSMQTransaction_FWD_DEFINED__
typedef struct MSMQTransaction MSMQTransaction;
#endif
#ifndef __IMSMQCoordinatedTransactionDispenser2_FWD_DEFINED__
#define __IMSMQCoordinatedTransactionDispenser2_FWD_DEFINED__
typedef interface IMSMQCoordinatedTransactionDispenser2 IMSMQCoordinatedTransactionDispenser2;
#endif
#ifndef __IMSMQCoordinatedTransactionDispenser3_FWD_DEFINED__
#define __IMSMQCoordinatedTransactionDispenser3_FWD_DEFINED__
typedef interface IMSMQCoordinatedTransactionDispenser3 IMSMQCoordinatedTransactionDispenser3;
#endif
#ifndef __MSMQCoordinatedTransactionDispenser_FWD_DEFINED__
#define __MSMQCoordinatedTransactionDispenser_FWD_DEFINED__
typedef struct MSMQCoordinatedTransactionDispenser MSMQCoordinatedTransactionDispenser;
#endif
#ifndef __IMSMQTransactionDispenser2_FWD_DEFINED__
#define __IMSMQTransactionDispenser2_FWD_DEFINED__
typedef interface IMSMQTransactionDispenser2 IMSMQTransactionDispenser2;
#endif
#ifndef __IMSMQTransactionDispenser3_FWD_DEFINED__
#define __IMSMQTransactionDispenser3_FWD_DEFINED__
typedef interface IMSMQTransactionDispenser3 IMSMQTransactionDispenser3;
#endif
#ifndef __MSMQTransactionDispenser_FWD_DEFINED__
#define __MSMQTransactionDispenser_FWD_DEFINED__
typedef struct MSMQTransactionDispenser MSMQTransactionDispenser;
#endif
#ifndef __IMSMQApplication_FWD_DEFINED__
#define __IMSMQApplication_FWD_DEFINED__
typedef interface IMSMQApplication IMSMQApplication;
#endif
#ifndef __IMSMQApplication2_FWD_DEFINED__
#define __IMSMQApplication2_FWD_DEFINED__
typedef interface IMSMQApplication2 IMSMQApplication2;
#endif
#ifndef __IMSMQApplication3_FWD_DEFINED__
#define __IMSMQApplication3_FWD_DEFINED__
typedef interface IMSMQApplication3 IMSMQApplication3;
#endif
#ifndef __MSMQApplication_FWD_DEFINED__
#define __MSMQApplication_FWD_DEFINED__
typedef struct MSMQApplication MSMQApplication;
#endif
#ifndef __IMSMQDestination_FWD_DEFINED__
#define __IMSMQDestination_FWD_DEFINED__
typedef interface IMSMQDestination IMSMQDestination;
#endif
#ifndef __IMSMQPrivateDestination_FWD_DEFINED__
#define __IMSMQPrivateDestination_FWD_DEFINED__
typedef interface IMSMQPrivateDestination IMSMQPrivateDestination;
#endif
#ifndef __MSMQDestination_FWD_DEFINED__
#define __MSMQDestination_FWD_DEFINED__
typedef struct MSMQDestination MSMQDestination;
#endif
#ifndef __IMSMQCollection_FWD_DEFINED__
#define __IMSMQCollection_FWD_DEFINED__
typedef interface IMSMQCollection IMSMQCollection;
#endif
#ifndef __MSMQCollection_FWD_DEFINED__
#define __MSMQCollection_FWD_DEFINED__
typedef struct MSMQCollection MSMQCollection;
#endif
#ifndef __IMSMQManagement_FWD_DEFINED__
#define __IMSMQManagement_FWD_DEFINED__
typedef interface IMSMQManagement IMSMQManagement;
#endif
#ifndef __MSMQManagement_FWD_DEFINED__
#define __MSMQManagement_FWD_DEFINED__
typedef struct MSMQManagement MSMQManagement;
#endif
#ifndef __IMSMQOutgoingQueueManagement_FWD_DEFINED__
#define __IMSMQOutgoingQueueManagement_FWD_DEFINED__
typedef interface IMSMQOutgoingQueueManagement IMSMQOutgoingQueueManagement;
#endif
#ifndef __MSMQOutgoingQueueManagement_FWD_DEFINED__
#define __MSMQOutgoingQueueManagement_FWD_DEFINED__
typedef struct MSMQOutgoingQueueManagement MSMQOutgoingQueueManagement;
#endif
#ifndef __IMSMQQueueManagement_FWD_DEFINED__
#define __IMSMQQueueManagement_FWD_DEFINED__
typedef interface IMSMQQueueManagement IMSMQQueueManagement;
#endif
#ifndef __MSMQQueueManagement_FWD_DEFINED__
#define __MSMQQueueManagement_FWD_DEFINED__
typedef struct MSMQQueueManagement MSMQQueueManagement;
#endif
#ifndef __MSMQ_LIBRARY_DEFINED__
#define __MSMQ_LIBRARY_DEFINED__
#ifndef MIDL_INTERFACE
#if _MSC_VER >= 1100
#define MIDL_INTERFACE(x)   struct __declspec(uuid(x)) __declspec(novtable)
#else
#define MIDL_INTERFACE(x)   struct
#endif
#endif
typedef short Boolean;
typedef unsigned char BYTE;
typedef unsigned long ULONG;
typedef unsigned long DWORD;
typedef int BOOL;
enum MQCALG
{
	MQMSG_CALG_MD2 = ((0x8000 + 0) + 1),
	MQMSG_CALG_MD4 = ((0x8000 + 0) + 2),
	MQMSG_CALG_MD5 = ((0x8000 + 0) + 3),
	MQMSG_CALG_SHA = ((0x8000 + 0) + 4),
	MQMSG_CALG_SHA1 = ((0x8000 + 0) + 4),
	MQMSG_CALG_MAC = ((0x8000 + 0) + 5),
	MQMSG_CALG_RSA_SIGN = ((0x2000 + 0x400) + 0),
	MQMSG_CALG_DSS_SIGN = ((0x2000 + 0x200) + 0),
	MQMSG_CALG_RSA_KEYX = ((0xa000 + 0x400) + 0),
	MQMSG_CALG_DES = ((0x6000 + 0x600) + 1),
	MQMSG_CALG_RC2 = ((0x6000 + 0x600) + 2),
	MQMSG_CALG_RC4 = ((0x6000 + 0x800) + 1),
	MQMSG_CALG_SEAL = ((0x6000 + 0x800) + 2)
};
enum MQTRANSACTION
{
	MQ_NO_TRANSACTION = 0,
	MQ_MTS_TRANSACTION = 1,
	MQ_XA_TRANSACTION = 2,
	MQ_SINGLE_MESSAGE = 3
};
enum RELOPS
{
	REL_NOP = 0,
	REL_EQ = (REL_NOP + 1),
	REL_NEQ = (REL_EQ + 1),
	REL_LT = (REL_NEQ + 1),
	REL_GT = (REL_LT + 1),
	REL_LE = (REL_GT + 1),
	REL_GE = (REL_LE + 1)
};
enum MQCERT_REGISTER
{
	MQCERT_REGISTER_ALWAYS = 1,
	MQCERT_REGISTER_IF_NOT_EXIST = 2
};
enum MQMSGCURSOR
{
	MQMSG_FIRST = 0,
	MQMSG_CURRENT = 1,
	MQMSG_NEXT = 2
};
enum MQMSGCLASS
{
	MQMSG_CLASS_NORMAL = ((0 + 0) + 0),
	MQMSG_CLASS_REPORT = ((0 + 0) + 0x1),
	MQMSG_CLASS_ACK_REACH_QUEUE = ((0 + 0) + 0x2),
	MQMSG_CLASS_ACK_RECEIVE = ((0 + 0x4000) + 0),
	MQMSG_CLASS_NACK_BAD_DST_Q = ((0x8000 + 0) + 0),
	MQMSG_CLASS_NACK_PURGED = ((0x8000 + 0) + 0x1),
	MQMSG_CLASS_NACK_REACH_QUEUE_TIMEOUT = ((0x8000 + 0) + 0x2),
	MQMSG_CLASS_NACK_Q_EXCEED_QUOTA = ((0x8000 + 0) + 0x3),
	MQMSG_CLASS_NACK_ACCESS_DENIED = ((0x8000 + 0) + 0x4),
	MQMSG_CLASS_NACK_HOP_COUNT_EXCEEDED = ((0x8000 + 0) + 0x5),
	MQMSG_CLASS_NACK_BAD_SIGNATURE = ((0x8000 + 0) + 0x6),
	MQMSG_CLASS_NACK_BAD_ENCRYPTION = ((0x8000 + 0) + 0x7),
	MQMSG_CLASS_NACK_COULD_NOT_ENCRYPT = ((0x8000 + 0) + 0x8),
	MQMSG_CLASS_NACK_NOT_TRANSACTIONAL_Q = ((0x8000 + 0) + 0x9),
	MQMSG_CLASS_NACK_NOT_TRANSACTIONAL_MSG = ((0x8000 + 0) + 0xa),
	MQMSG_CLASS_NACK_UNSUPPORTED_CRYPTO_PROVIDER = ((0x8000 + 0) + 0xb),
	MQMSG_CLASS_NACK_SOURCE_COMPUTER_GUID_CHANGED = ((0x8000 + 0) + 0xc),
	MQMSG_CLASS_NACK_Q_DELETED = ((0x8000 + 0x4000) + 0),
	MQMSG_CLASS_NACK_Q_PURGED = ((0x8000 + 0x4000) + 0x1),
	MQMSG_CLASS_NACK_RECEIVE_TIMEOUT = ((0x8000 + 0x4000) + 0x2),
	MQMSG_CLASS_NACK_RECEIVE_TIMEOUT_AT_SENDER = ((0x8000 + 0x4000) + 0x3)
};
enum MQMSGDELIVERY
{
	MQMSG_DELIVERY_EXPRESS = 0,
	MQMSG_DELIVERY_RECOVERABLE = 1
};
enum MQMSGACKNOWLEDGEMENT
{
	MQMSG_ACKNOWLEDGMENT_NONE = 0,
	MQMSG_ACKNOWLEDGMENT_POS_ARRIVAL = 0x1,
	MQMSG_ACKNOWLEDGMENT_POS_RECEIVE = 0x2,
	MQMSG_ACKNOWLEDGMENT_NEG_ARRIVAL = 0x4,
	MQMSG_ACKNOWLEDGMENT_NEG_RECEIVE = 0x8,
	MQMSG_ACKNOWLEDGMENT_NACK_REACH_QUEUE = 0x4,
	MQMSG_ACKNOWLEDGMENT_FULL_REACH_QUEUE = (0x4 + 0x1),
	MQMSG_ACKNOWLEDGMENT_NACK_RECEIVE = (0x4 + 0x8),
	MQMSG_ACKNOWLEDGMENT_FULL_RECEIVE = ((0x4 + 0x8) + 0x2)
};
enum MQMSGJOURNAL
{
	MQMSG_JOURNAL_NONE = 0,
	MQMSG_DEADLETTER = 1,
	MQMSG_JOURNAL = 2
};
enum MQMSGTRACE
{
	MQMSG_TRACE_NONE = 0,
	MQMSG_SEND_ROUTE_TO_REPORT_QUEUE = 1
};
enum MQMSGSENDERIDTYPE
{
	MQMSG_SENDERID_TYPE_NONE = 0,
	MQMSG_SENDERID_TYPE_SID = 1
};
enum MQMSGPRIVLEVEL
{
	MQMSG_PRIV_LEVEL_NONE = 0,
	MQMSG_PRIV_LEVEL_BODY_BASE = 1,
	MQMSG_PRIV_LEVEL_BODY_ENHANCED = 3
};
enum MQMSGAUTHLEVEL
{
	MQMSG_AUTH_LEVEL_NONE = 0,
	MQMSG_AUTH_LEVEL_ALWAYS = 1,
	MQMSG_AUTH_LEVEL_MSMQ10 = 2,
	MQMSG_AUTH_LEVEL_SIG10 = 2,
	MQMSG_AUTH_LEVEL_MSMQ20 = 4,
	MQMSG_AUTH_LEVEL_SIG20 = 4,
	MQMSG_AUTH_LEVEL_SIG30 = 8
};
enum MQMSGIDSIZE
{
	MQMSG_MSGID_SIZE = 20,
	MQMSG_CORRELATIONID_SIZE = 20,
	MQMSG_XACTID_SIZE = 20
};
enum MQMSGMAX
{
	MQ_MAX_MSG_LABEL_LEN = 249
};
enum MQMSGAUTHENTICATION
{
	MQMSG_AUTHENTICATION_NOT_REQUESTED = 0,
	MQMSG_AUTHENTICATION_REQUESTED = 1,
	MQMSG_AUTHENTICATED_SIG10 = 1,
	MQMSG_AUTHENTICATION_REQUESTED_EX = 3,
	MQMSG_AUTHENTICATED_SIG20 = 3,
	MQMSG_AUTHENTICATED_SIG30 = 5,
	MQMSG_AUTHENTICATED_SIGXML = 9
};
enum MQSHARE
{
	MQ_DENY_NONE = 0,
	MQ_DENY_RECEIVE_SHARE = 1
};
enum MQACCESS
{
	MQ_RECEIVE_ACCESS = 1,
	MQ_SEND_ACCESS = 2,
	MQ_PEEK_ACCESS = 0x20,
	MQ_ADMIN_ACCESS = 0x80
};
enum MQJOURNAL
{
	MQ_JOURNAL_NONE = 0,
	MQ_JOURNAL = 1
};
enum MQTRANSACTIONAL
{
	MQ_TRANSACTIONAL_NONE = 0,
	MQ_TRANSACTIONAL = 1
};
enum MQAUTHENTICATE
{
	MQ_AUTHENTICATE_NONE = 0,
	MQ_AUTHENTICATE = 1
};
enum MQPRIVLEVEL
{
	MQ_PRIV_LEVEL_NONE = 0,
	MQ_PRIV_LEVEL_OPTIONAL = 1,
	MQ_PRIV_LEVEL_BODY = 2
};
enum MQPRIORITY
{
	MQ_MIN_PRIORITY = 0,
	MQ_MAX_PRIORITY = 7
};
enum MQMAX
{
	MQ_MAX_Q_NAME_LEN = 124,
	MQ_MAX_Q_LABEL_LEN = 124
};
enum QUEUE_TYPE
{
	MQ_TYPE_PUBLIC = 0,
	MQ_TYPE_PRIVATE = (MQ_TYPE_PUBLIC + 1),
	MQ_TYPE_MACHINE = (MQ_TYPE_PRIVATE + 1),
	MQ_TYPE_CONNECTOR = (MQ_TYPE_MACHINE + 1),
	MQ_TYPE_MULTICAST = (MQ_TYPE_CONNECTOR + 1)
};
enum FOREIGN_STATUS
{
	MQ_STATUS_FOREIGN = 0,
	MQ_STATUS_NOT_FOREIGN = (MQ_STATUS_FOREIGN + 1),
	MQ_STATUS_UNKNOWN = (MQ_STATUS_NOT_FOREIGN + 1)
};
enum XACT_STATUS
{
	MQ_XACT_STATUS_XACT = 0,
	MQ_XACT_STATUS_NOT_XACT = (MQ_XACT_STATUS_XACT + 1),
	MQ_XACT_STATUS_UNKNOWN = (MQ_XACT_STATUS_NOT_XACT + 1)
};
enum QUEUE_STATE
{
	MQ_QUEUE_STATE_LOCAL_CONNECTION = 0,
	MQ_QUEUE_STATE_DISCONNECTED = (MQ_QUEUE_STATE_LOCAL_CONNECTION + 1),
	MQ_QUEUE_STATE_WAITING = (MQ_QUEUE_STATE_DISCONNECTED + 1),
	MQ_QUEUE_STATE_NEEDVALIDATE = (MQ_QUEUE_STATE_WAITING + 1),
	MQ_QUEUE_STATE_ONHOLD = (MQ_QUEUE_STATE_NEEDVALIDATE + 1),
	MQ_QUEUE_STATE_NONACTIVE = (MQ_QUEUE_STATE_ONHOLD + 1),
	MQ_QUEUE_STATE_CONNECTED = (MQ_QUEUE_STATE_NONACTIVE + 1),
	MQ_QUEUE_STATE_DISCONNECTING = (MQ_QUEUE_STATE_CONNECTED + 1),
	MQ_QUEUE_STATE_LOCKED = (MQ_QUEUE_STATE_DISCONNECTING + 1)
};
enum MQDEFAULT
{
	DEFAULT_M_PRIORITY = 3,
	DEFAULT_M_DELIVERY = 0,
	DEFAULT_M_ACKNOWLEDGE = 0,
	DEFAULT_M_JOURNAL = 0,
	DEFAULT_M_APPSPECIFIC = 0,
	DEFAULT_M_PRIV_LEVEL = 0,
	DEFAULT_M_AUTH_LEVEL = 0,
	DEFAULT_M_SENDERID_TYPE = 1,
	DEFAULT_Q_JOURNAL = 0,
	DEFAULT_Q_BASEPRIORITY = 0,
	DEFAULT_Q_QUOTA = 0xffffffff,
	DEFAULT_Q_JOURNAL_QUOTA = 0xffffffff,
	DEFAULT_Q_TRANSACTION = 0,
	DEFAULT_Q_AUTHENTICATE = 0,
	DEFAULT_Q_PRIV_LEVEL = 1,
	DEFAULT_M_LOOKUPID = 0
};
enum MQERROR
{
	MQ_ERROR = 0xc00e0001,
	MQ_ERROR_PROPERTY = 0xc00e0002,
	MQ_ERROR_QUEUE_NOT_FOUND = 0xc00e0003,
	MQ_ERROR_QUEUE_NOT_ACTIVE = 0xc00e0004,
	MQ_ERROR_QUEUE_EXISTS = 0xc00e0005,
	MQ_ERROR_INVALID_PARAMETER = 0xc00e0006,
	MQ_ERROR_INVALID_HANDLE = 0xc00e0007,
	MQ_ERROR_OPERATION_CANCELLED = 0xc00e0008,
	MQ_ERROR_SHARING_VIOLATION = 0xc00e0009,
	MQ_ERROR_SERVICE_NOT_AVAILABLE = 0xc00e000b,
	MQ_ERROR_MACHINE_NOT_FOUND = 0xc00e000d,
	MQ_ERROR_ILLEGAL_SORT = 0xc00e0010,
	MQ_ERROR_ILLEGAL_USER = 0xc00e0011,
	MQ_ERROR_NO_DS = 0xc00e0013,
	MQ_ERROR_ILLEGAL_QUEUE_PATHNAME = 0xc00e0014,
	MQ_ERROR_ILLEGAL_PROPERTY_VALUE = 0xc00e0018,
	MQ_ERROR_ILLEGAL_PROPERTY_VT = 0xc00e0019,
	MQ_ERROR_BUFFER_OVERFLOW = 0xc00e001a,
	MQ_ERROR_IO_TIMEOUT = 0xc00e001b,
	MQ_ERROR_ILLEGAL_CURSOR_ACTION = 0xc00e001c,
	MQ_ERROR_MESSAGE_ALREADY_RECEIVED = 0xc00e001d,
	MQ_ERROR_ILLEGAL_FORMATNAME = 0xc00e001e,
	MQ_ERROR_FORMATNAME_BUFFER_TOO_SMALL = 0xc00e001f,
	MQ_ERROR_UNSUPPORTED_FORMATNAME_OPERATION = 0xc00e0020,
	MQ_ERROR_ILLEGAL_SECURITY_DESCRIPTOR = 0xc00e0021,
	MQ_ERROR_SENDERID_BUFFER_TOO_SMALL = 0xc00e0022,
	MQ_ERROR_SECURITY_DESCRIPTOR_TOO_SMALL = 0xc00e0023,
	MQ_ERROR_CANNOT_IMPERSONATE_CLIENT = 0xc00e0024,
	MQ_ERROR_ACCESS_DENIED = 0xc00e0025,
	MQ_ERROR_PRIVILEGE_NOT_HELD = 0xc00e0026,
	MQ_ERROR_INSUFFICIENT_RESOURCES = 0xc00e0027,
	MQ_ERROR_USER_BUFFER_TOO_SMALL = 0xc00e0028,
	MQ_ERROR_MESSAGE_STORAGE_FAILED = 0xc00e002a,
	MQ_ERROR_SENDER_CERT_BUFFER_TOO_SMALL = 0xc00e002b,
	MQ_ERROR_INVALID_CERTIFICATE = 0xc00e002c,
	MQ_ERROR_CORRUPTED_INTERNAL_CERTIFICATE = 0xc00e002d,
	MQ_ERROR_INTERNAL_USER_CERT_EXIST = 0xc00e002e,
	MQ_ERROR_NO_INTERNAL_USER_CERT = 0xc00e002f,
	MQ_ERROR_CORRUPTED_SECURITY_DATA = 0xc00e0030,
	MQ_ERROR_CORRUPTED_PERSONAL_CERT_STORE = 0xc00e0031,
	MQ_ERROR_COMPUTER_DOES_NOT_SUPPORT_ENCRYPTION = 0xc00e0033,
	MQ_ERROR_BAD_SECURITY_CONTEXT = 0xc00e0035,
	MQ_ERROR_COULD_NOT_GET_USER_SID = 0xc00e0036,
	MQ_ERROR_COULD_NOT_GET_ACCOUNT_INFO = 0xc00e0037,
	MQ_ERROR_ILLEGAL_MQCOLUMNS = 0xc00e0038,
	MQ_ERROR_ILLEGAL_PROPID = 0xc00e0039,
	MQ_ERROR_ILLEGAL_RELATION = 0xc00e003a,
	MQ_ERROR_ILLEGAL_PROPERTY_SIZE = 0xc00e003b,
	MQ_ERROR_ILLEGAL_RESTRICTION_PROPID = 0xc00e003c,
	MQ_ERROR_ILLEGAL_MQQUEUEPROPS = 0xc00e003d,
	MQ_ERROR_PROPERTY_NOTALLOWED = 0xc00e003e,
	MQ_ERROR_INSUFFICIENT_PROPERTIES = 0xc00e003f,
	MQ_ERROR_MACHINE_EXISTS = 0xc00e0040,
	MQ_ERROR_ILLEGAL_MQQMPROPS = 0xc00e0041,
	MQ_ERROR_DS_IS_FULL = 0xc00e0042L,
	MQ_ERROR_DS_ERROR = 0xc00e0043,
	MQ_ERROR_INVALID_OWNER = 0xc00e0044,
	MQ_ERROR_UNSUPPORTED_ACCESS_MODE = 0xc00e0045,
	MQ_ERROR_RESULT_BUFFER_TOO_SMALL = 0xc00e0046,
	MQ_ERROR_DELETE_CN_IN_USE = 0xc00e0048L,
	MQ_ERROR_NO_RESPONSE_FROM_OBJECT_SERVER = 0xc00e0049,
	MQ_ERROR_OBJECT_SERVER_NOT_AVAILABLE = 0xc00e004a,
	MQ_ERROR_QUEUE_NOT_AVAILABLE = 0xc00e004b,
	MQ_ERROR_DTC_CONNECT = 0xc00e004c,
	MQ_ERROR_TRANSACTION_IMPORT = 0xc00e004e,
	MQ_ERROR_TRANSACTION_USAGE = 0xc00e0050,
	MQ_ERROR_TRANSACTION_SEQUENCE = 0xc00e0051,
	MQ_ERROR_MISSING_CONNECTOR_TYPE = 0xc00e0055,
	MQ_ERROR_STALE_HANDLE = 0xc00e0056,
	MQ_ERROR_TRANSACTION_ENLIST = 0xc00e0058,
	MQ_ERROR_QUEUE_DELETED = 0xc00e005a,
	MQ_ERROR_ILLEGAL_CONTEXT = 0xc00e005b,
	MQ_ERROR_ILLEGAL_SORT_PROPID = 0xc00e005c,
	MQ_ERROR_LABEL_TOO_LONG = 0xc00e005d,
	MQ_ERROR_LABEL_BUFFER_TOO_SMALL = 0xc00e005e,
	MQ_ERROR_MQIS_SERVER_EMPTY = 0xc00e005fL,
	MQ_ERROR_MQIS_READONLY_MODE = 0xc00e0060L,
	MQ_ERROR_SYMM_KEY_BUFFER_TOO_SMALL = 0xc00e0061,
	MQ_ERROR_SIGNATURE_BUFFER_TOO_SMALL = 0xc00e0062,
	MQ_ERROR_PROV_NAME_BUFFER_TOO_SMALL = 0xc00e0063,
	MQ_ERROR_ILLEGAL_OPERATION = 0xc00e0064,
	MQ_ERROR_WRITE_NOT_ALLOWED = 0xc00e0065L,
	MQ_ERROR_WKS_CANT_SERVE_CLIENT = 0xc00e0066L,
	MQ_ERROR_DEPEND_WKS_LICENSE_OVERFLOW = 0xc00e0067L,
	MQ_CORRUPTED_QUEUE_WAS_DELETED = 0xc00e0068L,
	MQ_ERROR_REMOTE_MACHINE_NOT_AVAILABLE = 0xc00e0069L,
	MQ_ERROR_UNSUPPORTED_OPERATION = 0xc00e006aL,
	MQ_ERROR_ENCRYPTION_PROVIDER_NOT_SUPPORTED = 0xc00e006bL,
	MQ_ERROR_CANNOT_SET_CRYPTO_SEC_DESCR = 0xc00e006cL,
	MQ_ERROR_CERTIFICATE_NOT_PROVIDED = 0xc00e006dL,
	MQ_ERROR_Q_DNS_PROPERTY_NOT_SUPPORTED = 0xc00e006eL,
	MQ_ERROR_CANT_CREATE_CERT_STORE = 0xc00e006fL,
	MQ_ERROR_CANNOT_CREATE_CERT_STORE = 0xc00e006fL,
	MQ_ERROR_CANT_OPEN_CERT_STORE = 0xc00e0070L,
	MQ_ERROR_CANNOT_OPEN_CERT_STORE = 0xc00e0070L,
	MQ_ERROR_ILLEGAL_ENTERPRISE_OPERATION = 0xc00e0071L,
	MQ_ERROR_CANNOT_GRANT_ADD_GUID = 0xc00e0072L,
	MQ_ERROR_CANNOT_LOAD_MSMQOCM = 0xc00e0073L,
	MQ_ERROR_NO_ENTRY_POINT_MSMQOCM = 0xc00e0074L,
	MQ_ERROR_NO_MSMQ_SERVERS_ON_DC = 0xc00e0075L,
	MQ_ERROR_CANNOT_JOIN_DOMAIN = 0xc00e0076L,
	MQ_ERROR_CANNOT_CREATE_ON_GC = 0xc00e0077L,
	MQ_ERROR_GUID_NOT_MATCHING = 0xc00e0078L,
	MQ_ERROR_PUBLIC_KEY_NOT_FOUND = 0xc00e0079L,
	MQ_ERROR_PUBLIC_KEY_DOES_NOT_EXIST = 0xc00e007aL,
	MQ_ERROR_ILLEGAL_MQPRIVATEPROPS = 0xc00e007bL,
	MQ_ERROR_NO_GC_IN_DOMAIN = 0xc00e007cL,
	MQ_ERROR_NO_MSMQ_SERVERS_ON_GC = 0xc00e007dL,
	MQ_ERROR_CANNOT_GET_DN = 0xc00e007eL,
	MQ_ERROR_CANNOT_HASH_DATA_EX = 0xc00e007fL,
	MQ_ERROR_CANNOT_SIGN_DATA_EX = 0xc00e0080L,
	MQ_ERROR_CANNOT_CREATE_HASH_EX = 0xc00e0081L,
	MQ_ERROR_FAIL_VERIFY_SIGNATURE_EX = 0xc00e0082L,
	MQ_ERROR_CANNOT_DELETE_PSC_OBJECTS = 0xc00e0083L,
	MQ_ERROR_NO_MQUSER_OU = 0xc00e0084L,
	MQ_ERROR_CANNOT_LOAD_MQAD = 0xc00e0085L,
	MQ_ERROR_CANNOT_LOAD_MQDSSRV = 0xc00e0086L,
	MQ_ERROR_PROPERTIES_CONFLICT = 0xc00e0087L,
	MQ_ERROR_MESSAGE_NOT_FOUND = 0xc00e0088L,
	MQ_ERROR_CANT_RESOLVE_SITES = 0xc00e0089L,
	MQ_ERROR_NOT_SUPPORTED_BY_DEPENDENT_CLIENTS = 0xc00e008aL,
	MQ_ERROR_OPERATION_NOT_SUPPORTED_BY_REMOTE_COMPUTER = 0xc00e008bL,
	MQ_ERROR_NOT_A_CORRECT_OBJECT_CLASS = 0xc00e008cL,
	MQ_ERROR_MULTI_SORT_KEYS = 0xc00e008dL,
	MQ_ERROR_GC_NEEDED = 0xc00e008eL,
	MQ_ERROR_DS_BIND_ROOT_FOREST = 0xc00e008fL,
	MQ_ERROR_DS_LOCAL_USER = 0xc00e0090L,
	MQ_ERROR_Q_ADS_PROPERTY_NOT_SUPPORTED = 0xc00e0091L,
	MQ_ERROR_BAD_XML_FORMAT = 0xc00e0092L,
	MQ_ERROR_UNSUPPORTED_CLASS = 0xc00e0093,
	MQ_ERROR_UNINITIALIZED_OBJECT = 0xc00e0094,
	MQ_ERROR_CANNOT_CREATE_PSC_OBJECTS = 0xc00e0095,
	MQ_ERROR_CANNOT_UPDATE_PSC_OBJECTS = 0xc00e0096
};
enum MQWARNING
{
	MQ_INFORMATION_PROPERTY = 0x400e0001,
	MQ_INFORMATION_ILLEGAL_PROPERTY = 0x400e0002,
	MQ_INFORMATION_PROPERTY_IGNORED = 0x400e0003,
	MQ_INFORMATION_UNSUPPORTED_PROPERTY = 0x400e0004,
	MQ_INFORMATION_DUPLICATE_PROPERTY = 0x400e0005,
	MQ_INFORMATION_OPERATION_PENDING = 0x400e0006,
	MQ_INFORMATION_FORMATNAME_BUFFER_TOO_SMALL = 0x400e0009,
	MQ_INFORMATION_INTERNAL_USER_CERT_EXIST = 0x400e000aL,
	MQ_INFORMATION_OWNER_IGNORED = 0x400e000bL
};
extern const IID LIBID_MSMQ;
#ifndef __IMSMQQuery_INTERFACE_DEFINED__
#define __IMSMQQuery_INTERFACE_DEFINED__
extern const IID IID_IMSMQQuery;
typedef struct IMSMQQueryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQuery * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQuery * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQuery * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQuery * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQuery * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQuery * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQuery * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * LookupQueue) (IMSMQQuery * This, VARIANT * QueueGuid, VARIANT * ServiceTypeGuid, VARIANT * Label, VARIANT * CreateTime, VARIANT * ModifyTime, VARIANT * RelServiceType, VARIANT * RelLabel, VARIANT * RelCreateTime, VARIANT * RelModifyTime, IMSMQQueueInfos ** ppqinfos);
	END_INTERFACE
}  IMSMQQueryVtbl;
interface IMSMQQuery
{
	CONST_VTBL struct IMSMQQueryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQuery_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQuery_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQuery_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQuery_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQuery_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQuery_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQuery_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQuery_LookupQueue(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,ppqinfos) ( (This)->lpVtbl -> LookupQueue(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,ppqinfos) )
#endif
#endif
#ifndef __IMSMQQueueInfo_INTERFACE_DEFINED__
#define __IMSMQQueueInfo_INTERFACE_DEFINED__
extern const IID IID_IMSMQQueueInfo;
typedef struct IMSMQQueueInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQueueInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQueueInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQueueInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQueueInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQueueInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQueueInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQueueInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_QueueGuid) (IMSMQQueueInfo * This, BSTR * pbstrGuidQueue);
	HRESULT(STDMETHODCALLTYPE * get_ServiceTypeGuid) (IMSMQQueueInfo * This, BSTR * pbstrGuidServiceType);
	HRESULT(STDMETHODCALLTYPE * put_ServiceTypeGuid) (IMSMQQueueInfo * This, BSTR bstrGuidServiceType);
	HRESULT(STDMETHODCALLTYPE * get_Label) (IMSMQQueueInfo * This, BSTR * pbstrLabel);
	HRESULT(STDMETHODCALLTYPE * put_Label) (IMSMQQueueInfo * This, BSTR bstrLabel);
	HRESULT(STDMETHODCALLTYPE * get_PathName) (IMSMQQueueInfo * This, BSTR * pbstrPathName);
	HRESULT(STDMETHODCALLTYPE * put_PathName) (IMSMQQueueInfo * This, BSTR bstrPathName);
	HRESULT(STDMETHODCALLTYPE * get_FormatName) (IMSMQQueueInfo * This, BSTR * pbstrFormatName);
	HRESULT(STDMETHODCALLTYPE * put_FormatName) (IMSMQQueueInfo * This, BSTR bstrFormatName);
	HRESULT(STDMETHODCALLTYPE * get_IsTransactional) (IMSMQQueueInfo * This, Boolean * pisTransactional);
	HRESULT(STDMETHODCALLTYPE * get_PrivLevel) (IMSMQQueueInfo * This, long *plPrivLevel);
	HRESULT(STDMETHODCALLTYPE * put_PrivLevel) (IMSMQQueueInfo * This, long lPrivLevel);
	HRESULT(STDMETHODCALLTYPE * get_Journal) (IMSMQQueueInfo * This, long *plJournal);
	HRESULT(STDMETHODCALLTYPE * put_Journal) (IMSMQQueueInfo * This, long lJournal);
	HRESULT(STDMETHODCALLTYPE * get_Quota) (IMSMQQueueInfo * This, long *plQuota);
	HRESULT(STDMETHODCALLTYPE * put_Quota) (IMSMQQueueInfo * This, long lQuota);
	HRESULT(STDMETHODCALLTYPE * get_BasePriority) (IMSMQQueueInfo * This, long *plBasePriority);
	HRESULT(STDMETHODCALLTYPE * put_BasePriority) (IMSMQQueueInfo * This, long lBasePriority);
	HRESULT(STDMETHODCALLTYPE * get_CreateTime) (IMSMQQueueInfo * This, VARIANT * pvarCreateTime);
	HRESULT(STDMETHODCALLTYPE * get_ModifyTime) (IMSMQQueueInfo * This, VARIANT * pvarModifyTime);
	HRESULT(STDMETHODCALLTYPE * get_Authenticate) (IMSMQQueueInfo * This, long *plAuthenticate);
	HRESULT(STDMETHODCALLTYPE * put_Authenticate) (IMSMQQueueInfo * This, long lAuthenticate);
	HRESULT(STDMETHODCALLTYPE * get_JournalQuota) (IMSMQQueueInfo * This, long *plJournalQuota);
	HRESULT(STDMETHODCALLTYPE * put_JournalQuota) (IMSMQQueueInfo * This, long lJournalQuota);
	HRESULT(STDMETHODCALLTYPE * get_IsWorldReadable) (IMSMQQueueInfo * This, Boolean * pisWorldReadable);
	HRESULT(STDMETHODCALLTYPE * Create) (IMSMQQueueInfo * This, VARIANT * IsTransactional, VARIANT * IsWorldReadable);
	HRESULT(STDMETHODCALLTYPE * Delete) (IMSMQQueueInfo * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IMSMQQueueInfo * This, long Access, long ShareMode, IMSMQQueue ** ppq);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IMSMQQueueInfo * This);
	HRESULT(STDMETHODCALLTYPE * Update) (IMSMQQueueInfo * This);
	END_INTERFACE
}  IMSMQQueueInfoVtbl;
interface IMSMQQueueInfo
{
	CONST_VTBL struct IMSMQQueueInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQueueInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQueueInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQueueInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQueueInfo_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQueueInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQueueInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQueueInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQueueInfo_get_QueueGuid(This,pbstrGuidQueue) ( (This)->lpVtbl -> get_QueueGuid(This,pbstrGuidQueue) )
#define IMSMQQueueInfo_get_ServiceTypeGuid(This,pbstrGuidServiceType) ( (This)->lpVtbl -> get_ServiceTypeGuid(This,pbstrGuidServiceType) )
#define IMSMQQueueInfo_put_ServiceTypeGuid(This,bstrGuidServiceType) ( (This)->lpVtbl -> put_ServiceTypeGuid(This,bstrGuidServiceType) )
#define IMSMQQueueInfo_get_Label(This,pbstrLabel) ( (This)->lpVtbl -> get_Label(This,pbstrLabel) )
#define IMSMQQueueInfo_put_Label(This,bstrLabel) ( (This)->lpVtbl -> put_Label(This,bstrLabel) )
#define IMSMQQueueInfo_get_PathName(This,pbstrPathName) ( (This)->lpVtbl -> get_PathName(This,pbstrPathName) )
#define IMSMQQueueInfo_put_PathName(This,bstrPathName) ( (This)->lpVtbl -> put_PathName(This,bstrPathName) )
#define IMSMQQueueInfo_get_FormatName(This,pbstrFormatName) ( (This)->lpVtbl -> get_FormatName(This,pbstrFormatName) )
#define IMSMQQueueInfo_put_FormatName(This,bstrFormatName) ( (This)->lpVtbl -> put_FormatName(This,bstrFormatName) )
#define IMSMQQueueInfo_get_IsTransactional(This,pisTransactional) ( (This)->lpVtbl -> get_IsTransactional(This,pisTransactional) )
#define IMSMQQueueInfo_get_PrivLevel(This,plPrivLevel) ( (This)->lpVtbl -> get_PrivLevel(This,plPrivLevel) )
#define IMSMQQueueInfo_put_PrivLevel(This,lPrivLevel) ( (This)->lpVtbl -> put_PrivLevel(This,lPrivLevel) )
#define IMSMQQueueInfo_get_Journal(This,plJournal) ( (This)->lpVtbl -> get_Journal(This,plJournal) )
#define IMSMQQueueInfo_put_Journal(This,lJournal) ( (This)->lpVtbl -> put_Journal(This,lJournal) )
#define IMSMQQueueInfo_get_Quota(This,plQuota) ( (This)->lpVtbl -> get_Quota(This,plQuota) )
#define IMSMQQueueInfo_put_Quota(This,lQuota) ( (This)->lpVtbl -> put_Quota(This,lQuota) )
#define IMSMQQueueInfo_get_BasePriority(This,plBasePriority) ( (This)->lpVtbl -> get_BasePriority(This,plBasePriority) )
#define IMSMQQueueInfo_put_BasePriority(This,lBasePriority) ( (This)->lpVtbl -> put_BasePriority(This,lBasePriority) )
#define IMSMQQueueInfo_get_CreateTime(This,pvarCreateTime) ( (This)->lpVtbl -> get_CreateTime(This,pvarCreateTime) )
#define IMSMQQueueInfo_get_ModifyTime(This,pvarModifyTime) ( (This)->lpVtbl -> get_ModifyTime(This,pvarModifyTime) )
#define IMSMQQueueInfo_get_Authenticate(This,plAuthenticate) ( (This)->lpVtbl -> get_Authenticate(This,plAuthenticate) )
#define IMSMQQueueInfo_put_Authenticate(This,lAuthenticate) ( (This)->lpVtbl -> put_Authenticate(This,lAuthenticate) )
#define IMSMQQueueInfo_get_JournalQuota(This,plJournalQuota) ( (This)->lpVtbl -> get_JournalQuota(This,plJournalQuota) )
#define IMSMQQueueInfo_put_JournalQuota(This,lJournalQuota) ( (This)->lpVtbl -> put_JournalQuota(This,lJournalQuota) )
#define IMSMQQueueInfo_get_IsWorldReadable(This,pisWorldReadable) ( (This)->lpVtbl -> get_IsWorldReadable(This,pisWorldReadable) )
#define IMSMQQueueInfo_Create(This,IsTransactional,IsWorldReadable) ( (This)->lpVtbl -> Create(This,IsTransactional,IsWorldReadable) )
#define IMSMQQueueInfo_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IMSMQQueueInfo_Open(This,Access,ShareMode,ppq) ( (This)->lpVtbl -> Open(This,Access,ShareMode,ppq) )
#define IMSMQQueueInfo_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IMSMQQueueInfo_Update(This) ( (This)->lpVtbl -> Update(This) )
#endif
#endif
#ifndef __IMSMQQueueInfo2_INTERFACE_DEFINED__
#define __IMSMQQueueInfo2_INTERFACE_DEFINED__
extern const IID IID_IMSMQQueueInfo2;
typedef struct IMSMQQueueInfo2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQueueInfo2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQueueInfo2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQueueInfo2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQueueInfo2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQueueInfo2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQueueInfo2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQueueInfo2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_QueueGuid) (IMSMQQueueInfo2 * This, BSTR * pbstrGuidQueue);
	HRESULT(STDMETHODCALLTYPE * get_ServiceTypeGuid) (IMSMQQueueInfo2 * This, BSTR * pbstrGuidServiceType);
	HRESULT(STDMETHODCALLTYPE * put_ServiceTypeGuid) (IMSMQQueueInfo2 * This, BSTR bstrGuidServiceType);
	HRESULT(STDMETHODCALLTYPE * get_Label) (IMSMQQueueInfo2 * This, BSTR * pbstrLabel);
	HRESULT(STDMETHODCALLTYPE * put_Label) (IMSMQQueueInfo2 * This, BSTR bstrLabel);
	HRESULT(STDMETHODCALLTYPE * get_PathName) (IMSMQQueueInfo2 * This, BSTR * pbstrPathName);
	HRESULT(STDMETHODCALLTYPE * put_PathName) (IMSMQQueueInfo2 * This, BSTR bstrPathName);
	HRESULT(STDMETHODCALLTYPE * get_FormatName) (IMSMQQueueInfo2 * This, BSTR * pbstrFormatName);
	HRESULT(STDMETHODCALLTYPE * put_FormatName) (IMSMQQueueInfo2 * This, BSTR bstrFormatName);
	HRESULT(STDMETHODCALLTYPE * get_IsTransactional) (IMSMQQueueInfo2 * This, Boolean * pisTransactional);
	HRESULT(STDMETHODCALLTYPE * get_PrivLevel) (IMSMQQueueInfo2 * This, long *plPrivLevel);
	HRESULT(STDMETHODCALLTYPE * put_PrivLevel) (IMSMQQueueInfo2 * This, long lPrivLevel);
	HRESULT(STDMETHODCALLTYPE * get_Journal) (IMSMQQueueInfo2 * This, long *plJournal);
	HRESULT(STDMETHODCALLTYPE * put_Journal) (IMSMQQueueInfo2 * This, long lJournal);
	HRESULT(STDMETHODCALLTYPE * get_Quota) (IMSMQQueueInfo2 * This, long *plQuota);
	HRESULT(STDMETHODCALLTYPE * put_Quota) (IMSMQQueueInfo2 * This, long lQuota);
	HRESULT(STDMETHODCALLTYPE * get_BasePriority) (IMSMQQueueInfo2 * This, long *plBasePriority);
	HRESULT(STDMETHODCALLTYPE * put_BasePriority) (IMSMQQueueInfo2 * This, long lBasePriority);
	HRESULT(STDMETHODCALLTYPE * get_CreateTime) (IMSMQQueueInfo2 * This, VARIANT * pvarCreateTime);
	HRESULT(STDMETHODCALLTYPE * get_ModifyTime) (IMSMQQueueInfo2 * This, VARIANT * pvarModifyTime);
	HRESULT(STDMETHODCALLTYPE * get_Authenticate) (IMSMQQueueInfo2 * This, long *plAuthenticate);
	HRESULT(STDMETHODCALLTYPE * put_Authenticate) (IMSMQQueueInfo2 * This, long lAuthenticate);
	HRESULT(STDMETHODCALLTYPE * get_JournalQuota) (IMSMQQueueInfo2 * This, long *plJournalQuota);
	HRESULT(STDMETHODCALLTYPE * put_JournalQuota) (IMSMQQueueInfo2 * This, long lJournalQuota);
	HRESULT(STDMETHODCALLTYPE * get_IsWorldReadable) (IMSMQQueueInfo2 * This, Boolean * pisWorldReadable);
	HRESULT(STDMETHODCALLTYPE * Create) (IMSMQQueueInfo2 * This, VARIANT * IsTransactional, VARIANT * IsWorldReadable);
	HRESULT(STDMETHODCALLTYPE * Delete) (IMSMQQueueInfo2 * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IMSMQQueueInfo2 * This, long Access, long ShareMode, IMSMQQueue2 ** ppq);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IMSMQQueueInfo2 * This);
	HRESULT(STDMETHODCALLTYPE * Update) (IMSMQQueueInfo2 * This);
	HRESULT(STDMETHODCALLTYPE * get_PathNameDNS) (IMSMQQueueInfo2 * This, BSTR * pbstrPathNameDNS);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQQueueInfo2 * This, IDispatch ** ppcolProperties);
	HRESULT(STDMETHODCALLTYPE * get_Security) (IMSMQQueueInfo2 * This, VARIANT * pvarSecurity);
	HRESULT(STDMETHODCALLTYPE * put_Security) (IMSMQQueueInfo2 * This, VARIANT varSecurity);
	END_INTERFACE
}  IMSMQQueueInfo2Vtbl;
interface IMSMQQueueInfo2
{
	CONST_VTBL struct IMSMQQueueInfo2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQueueInfo2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQueueInfo2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQueueInfo2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQueueInfo2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQueueInfo2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQueueInfo2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQueueInfo2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQueueInfo2_get_QueueGuid(This,pbstrGuidQueue) ( (This)->lpVtbl -> get_QueueGuid(This,pbstrGuidQueue) )
#define IMSMQQueueInfo2_get_ServiceTypeGuid(This,pbstrGuidServiceType) ( (This)->lpVtbl -> get_ServiceTypeGuid(This,pbstrGuidServiceType) )
#define IMSMQQueueInfo2_put_ServiceTypeGuid(This,bstrGuidServiceType) ( (This)->lpVtbl -> put_ServiceTypeGuid(This,bstrGuidServiceType) )
#define IMSMQQueueInfo2_get_Label(This,pbstrLabel) ( (This)->lpVtbl -> get_Label(This,pbstrLabel) )
#define IMSMQQueueInfo2_put_Label(This,bstrLabel) ( (This)->lpVtbl -> put_Label(This,bstrLabel) )
#define IMSMQQueueInfo2_get_PathName(This,pbstrPathName) ( (This)->lpVtbl -> get_PathName(This,pbstrPathName) )
#define IMSMQQueueInfo2_put_PathName(This,bstrPathName) ( (This)->lpVtbl -> put_PathName(This,bstrPathName) )
#define IMSMQQueueInfo2_get_FormatName(This,pbstrFormatName) ( (This)->lpVtbl -> get_FormatName(This,pbstrFormatName) )
#define IMSMQQueueInfo2_put_FormatName(This,bstrFormatName) ( (This)->lpVtbl -> put_FormatName(This,bstrFormatName) )
#define IMSMQQueueInfo2_get_IsTransactional(This,pisTransactional) ( (This)->lpVtbl -> get_IsTransactional(This,pisTransactional) )
#define IMSMQQueueInfo2_get_PrivLevel(This,plPrivLevel) ( (This)->lpVtbl -> get_PrivLevel(This,plPrivLevel) )
#define IMSMQQueueInfo2_put_PrivLevel(This,lPrivLevel) ( (This)->lpVtbl -> put_PrivLevel(This,lPrivLevel) )
#define IMSMQQueueInfo2_get_Journal(This,plJournal) ( (This)->lpVtbl -> get_Journal(This,plJournal) )
#define IMSMQQueueInfo2_put_Journal(This,lJournal) ( (This)->lpVtbl -> put_Journal(This,lJournal) )
#define IMSMQQueueInfo2_get_Quota(This,plQuota) ( (This)->lpVtbl -> get_Quota(This,plQuota) )
#define IMSMQQueueInfo2_put_Quota(This,lQuota) ( (This)->lpVtbl -> put_Quota(This,lQuota) )
#define IMSMQQueueInfo2_get_BasePriority(This,plBasePriority) ( (This)->lpVtbl -> get_BasePriority(This,plBasePriority) )
#define IMSMQQueueInfo2_put_BasePriority(This,lBasePriority) ( (This)->lpVtbl -> put_BasePriority(This,lBasePriority) )
#define IMSMQQueueInfo2_get_CreateTime(This,pvarCreateTime) ( (This)->lpVtbl -> get_CreateTime(This,pvarCreateTime) )
#define IMSMQQueueInfo2_get_ModifyTime(This,pvarModifyTime) ( (This)->lpVtbl -> get_ModifyTime(This,pvarModifyTime) )
#define IMSMQQueueInfo2_get_Authenticate(This,plAuthenticate) ( (This)->lpVtbl -> get_Authenticate(This,plAuthenticate) )
#define IMSMQQueueInfo2_put_Authenticate(This,lAuthenticate) ( (This)->lpVtbl -> put_Authenticate(This,lAuthenticate) )
#define IMSMQQueueInfo2_get_JournalQuota(This,plJournalQuota) ( (This)->lpVtbl -> get_JournalQuota(This,plJournalQuota) )
#define IMSMQQueueInfo2_put_JournalQuota(This,lJournalQuota) ( (This)->lpVtbl -> put_JournalQuota(This,lJournalQuota) )
#define IMSMQQueueInfo2_get_IsWorldReadable(This,pisWorldReadable) ( (This)->lpVtbl -> get_IsWorldReadable(This,pisWorldReadable) )
#define IMSMQQueueInfo2_Create(This,IsTransactional,IsWorldReadable) ( (This)->lpVtbl -> Create(This,IsTransactional,IsWorldReadable) )
#define IMSMQQueueInfo2_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IMSMQQueueInfo2_Open(This,Access,ShareMode,ppq) ( (This)->lpVtbl -> Open(This,Access,ShareMode,ppq) )
#define IMSMQQueueInfo2_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IMSMQQueueInfo2_Update(This) ( (This)->lpVtbl -> Update(This) )
#define IMSMQQueueInfo2_get_PathNameDNS(This,pbstrPathNameDNS) ( (This)->lpVtbl -> get_PathNameDNS(This,pbstrPathNameDNS) )
#define IMSMQQueueInfo2_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#define IMSMQQueueInfo2_get_Security(This,pvarSecurity) ( (This)->lpVtbl -> get_Security(This,pvarSecurity) )
#define IMSMQQueueInfo2_put_Security(This,varSecurity) ( (This)->lpVtbl -> put_Security(This,varSecurity) )
#endif
#endif
#ifndef __IMSMQQueueInfo3_INTERFACE_DEFINED__
#define __IMSMQQueueInfo3_INTERFACE_DEFINED__
extern const IID IID_IMSMQQueueInfo3;
typedef struct IMSMQQueueInfo3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQueueInfo3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQueueInfo3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQueueInfo3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQueueInfo3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQueueInfo3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQueueInfo3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQueueInfo3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_QueueGuid) (IMSMQQueueInfo3 * This, BSTR * pbstrGuidQueue);
	HRESULT(STDMETHODCALLTYPE * get_ServiceTypeGuid) (IMSMQQueueInfo3 * This, BSTR * pbstrGuidServiceType);
	HRESULT(STDMETHODCALLTYPE * put_ServiceTypeGuid) (IMSMQQueueInfo3 * This, BSTR bstrGuidServiceType);
	HRESULT(STDMETHODCALLTYPE * get_Label) (IMSMQQueueInfo3 * This, BSTR * pbstrLabel);
	HRESULT(STDMETHODCALLTYPE * put_Label) (IMSMQQueueInfo3 * This, BSTR bstrLabel);
	HRESULT(STDMETHODCALLTYPE * get_PathName) (IMSMQQueueInfo3 * This, BSTR * pbstrPathName);
	HRESULT(STDMETHODCALLTYPE * put_PathName) (IMSMQQueueInfo3 * This, BSTR bstrPathName);
	HRESULT(STDMETHODCALLTYPE * get_FormatName) (IMSMQQueueInfo3 * This, BSTR * pbstrFormatName);
	HRESULT(STDMETHODCALLTYPE * put_FormatName) (IMSMQQueueInfo3 * This, BSTR bstrFormatName);
	HRESULT(STDMETHODCALLTYPE * get_IsTransactional) (IMSMQQueueInfo3 * This, Boolean * pisTransactional);
	HRESULT(STDMETHODCALLTYPE * get_PrivLevel) (IMSMQQueueInfo3 * This, long *plPrivLevel);
	HRESULT(STDMETHODCALLTYPE * put_PrivLevel) (IMSMQQueueInfo3 * This, long lPrivLevel);
	HRESULT(STDMETHODCALLTYPE * get_Journal) (IMSMQQueueInfo3 * This, long *plJournal);
	HRESULT(STDMETHODCALLTYPE * put_Journal) (IMSMQQueueInfo3 * This, long lJournal);
	HRESULT(STDMETHODCALLTYPE * get_Quota) (IMSMQQueueInfo3 * This, long *plQuota);
	HRESULT(STDMETHODCALLTYPE * put_Quota) (IMSMQQueueInfo3 * This, long lQuota);
	HRESULT(STDMETHODCALLTYPE * get_BasePriority) (IMSMQQueueInfo3 * This, long *plBasePriority);
	HRESULT(STDMETHODCALLTYPE * put_BasePriority) (IMSMQQueueInfo3 * This, long lBasePriority);
	HRESULT(STDMETHODCALLTYPE * get_CreateTime) (IMSMQQueueInfo3 * This, VARIANT * pvarCreateTime);
	HRESULT(STDMETHODCALLTYPE * get_ModifyTime) (IMSMQQueueInfo3 * This, VARIANT * pvarModifyTime);
	HRESULT(STDMETHODCALLTYPE * get_Authenticate) (IMSMQQueueInfo3 * This, long *plAuthenticate);
	HRESULT(STDMETHODCALLTYPE * put_Authenticate) (IMSMQQueueInfo3 * This, long lAuthenticate);
	HRESULT(STDMETHODCALLTYPE * get_JournalQuota) (IMSMQQueueInfo3 * This, long *plJournalQuota);
	HRESULT(STDMETHODCALLTYPE * put_JournalQuota) (IMSMQQueueInfo3 * This, long lJournalQuota);
	HRESULT(STDMETHODCALLTYPE * get_IsWorldReadable) (IMSMQQueueInfo3 * This, Boolean * pisWorldReadable);
	HRESULT(STDMETHODCALLTYPE * Create) (IMSMQQueueInfo3 * This, VARIANT * IsTransactional, VARIANT * IsWorldReadable);
	HRESULT(STDMETHODCALLTYPE * Delete) (IMSMQQueueInfo3 * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IMSMQQueueInfo3 * This, long Access, long ShareMode, IMSMQQueue3 ** ppq);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IMSMQQueueInfo3 * This);
	HRESULT(STDMETHODCALLTYPE * Update) (IMSMQQueueInfo3 * This);
	HRESULT(STDMETHODCALLTYPE * get_PathNameDNS) (IMSMQQueueInfo3 * This, BSTR * pbstrPathNameDNS);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQQueueInfo3 * This, IDispatch ** ppcolProperties);
	HRESULT(STDMETHODCALLTYPE * get_Security) (IMSMQQueueInfo3 * This, VARIANT * pvarSecurity);
	HRESULT(STDMETHODCALLTYPE * put_Security) (IMSMQQueueInfo3 * This, VARIANT varSecurity);
	HRESULT(STDMETHODCALLTYPE * get_IsTransactional2) (IMSMQQueueInfo3 * This, VARIANT_BOOL * pisTransactional);
	HRESULT(STDMETHODCALLTYPE * get_IsWorldReadable2) (IMSMQQueueInfo3 * This, VARIANT_BOOL * pisWorldReadable);
	HRESULT(STDMETHODCALLTYPE * get_MulticastAddress) (IMSMQQueueInfo3 * This, BSTR * pbstrMulticastAddress);
	HRESULT(STDMETHODCALLTYPE * put_MulticastAddress) (IMSMQQueueInfo3 * This, BSTR bstrMulticastAddress);
	HRESULT(STDMETHODCALLTYPE * get_ADsPath) (IMSMQQueueInfo3 * This, BSTR * pbstrADsPath);
	END_INTERFACE
}  IMSMQQueueInfo3Vtbl;
interface IMSMQQueueInfo3
{
	CONST_VTBL struct IMSMQQueueInfo3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQueueInfo3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQueueInfo3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQueueInfo3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQueueInfo3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQueueInfo3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQueueInfo3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQueueInfo3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQueueInfo3_get_QueueGuid(This,pbstrGuidQueue) ( (This)->lpVtbl -> get_QueueGuid(This,pbstrGuidQueue) )
#define IMSMQQueueInfo3_get_ServiceTypeGuid(This,pbstrGuidServiceType) ( (This)->lpVtbl -> get_ServiceTypeGuid(This,pbstrGuidServiceType) )
#define IMSMQQueueInfo3_put_ServiceTypeGuid(This,bstrGuidServiceType) ( (This)->lpVtbl -> put_ServiceTypeGuid(This,bstrGuidServiceType) )
#define IMSMQQueueInfo3_get_Label(This,pbstrLabel) ( (This)->lpVtbl -> get_Label(This,pbstrLabel) )
#define IMSMQQueueInfo3_put_Label(This,bstrLabel) ( (This)->lpVtbl -> put_Label(This,bstrLabel) )
#define IMSMQQueueInfo3_get_PathName(This,pbstrPathName) ( (This)->lpVtbl -> get_PathName(This,pbstrPathName) )
#define IMSMQQueueInfo3_put_PathName(This,bstrPathName) ( (This)->lpVtbl -> put_PathName(This,bstrPathName) )
#define IMSMQQueueInfo3_get_FormatName(This,pbstrFormatName) ( (This)->lpVtbl -> get_FormatName(This,pbstrFormatName) )
#define IMSMQQueueInfo3_put_FormatName(This,bstrFormatName) ( (This)->lpVtbl -> put_FormatName(This,bstrFormatName) )
#define IMSMQQueueInfo3_get_IsTransactional(This,pisTransactional) ( (This)->lpVtbl -> get_IsTransactional(This,pisTransactional) )
#define IMSMQQueueInfo3_get_PrivLevel(This,plPrivLevel) ( (This)->lpVtbl -> get_PrivLevel(This,plPrivLevel) )
#define IMSMQQueueInfo3_put_PrivLevel(This,lPrivLevel) ( (This)->lpVtbl -> put_PrivLevel(This,lPrivLevel) )
#define IMSMQQueueInfo3_get_Journal(This,plJournal) ( (This)->lpVtbl -> get_Journal(This,plJournal) )
#define IMSMQQueueInfo3_put_Journal(This,lJournal) ( (This)->lpVtbl -> put_Journal(This,lJournal) )
#define IMSMQQueueInfo3_get_Quota(This,plQuota) ( (This)->lpVtbl -> get_Quota(This,plQuota) )
#define IMSMQQueueInfo3_put_Quota(This,lQuota) ( (This)->lpVtbl -> put_Quota(This,lQuota) )
#define IMSMQQueueInfo3_get_BasePriority(This,plBasePriority) ( (This)->lpVtbl -> get_BasePriority(This,plBasePriority) )
#define IMSMQQueueInfo3_put_BasePriority(This,lBasePriority) ( (This)->lpVtbl -> put_BasePriority(This,lBasePriority) )
#define IMSMQQueueInfo3_get_CreateTime(This,pvarCreateTime) ( (This)->lpVtbl -> get_CreateTime(This,pvarCreateTime) )
#define IMSMQQueueInfo3_get_ModifyTime(This,pvarModifyTime) ( (This)->lpVtbl -> get_ModifyTime(This,pvarModifyTime) )
#define IMSMQQueueInfo3_get_Authenticate(This,plAuthenticate) ( (This)->lpVtbl -> get_Authenticate(This,plAuthenticate) )
#define IMSMQQueueInfo3_put_Authenticate(This,lAuthenticate) ( (This)->lpVtbl -> put_Authenticate(This,lAuthenticate) )
#define IMSMQQueueInfo3_get_JournalQuota(This,plJournalQuota) ( (This)->lpVtbl -> get_JournalQuota(This,plJournalQuota) )
#define IMSMQQueueInfo3_put_JournalQuota(This,lJournalQuota) ( (This)->lpVtbl -> put_JournalQuota(This,lJournalQuota) )
#define IMSMQQueueInfo3_get_IsWorldReadable(This,pisWorldReadable) ( (This)->lpVtbl -> get_IsWorldReadable(This,pisWorldReadable) )
#define IMSMQQueueInfo3_Create(This,IsTransactional,IsWorldReadable) ( (This)->lpVtbl -> Create(This,IsTransactional,IsWorldReadable) )
#define IMSMQQueueInfo3_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IMSMQQueueInfo3_Open(This,Access,ShareMode,ppq) ( (This)->lpVtbl -> Open(This,Access,ShareMode,ppq) )
#define IMSMQQueueInfo3_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IMSMQQueueInfo3_Update(This) ( (This)->lpVtbl -> Update(This) )
#define IMSMQQueueInfo3_get_PathNameDNS(This,pbstrPathNameDNS) ( (This)->lpVtbl -> get_PathNameDNS(This,pbstrPathNameDNS) )
#define IMSMQQueueInfo3_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#define IMSMQQueueInfo3_get_Security(This,pvarSecurity) ( (This)->lpVtbl -> get_Security(This,pvarSecurity) )
#define IMSMQQueueInfo3_put_Security(This,varSecurity) ( (This)->lpVtbl -> put_Security(This,varSecurity) )
#define IMSMQQueueInfo3_get_IsTransactional2(This,pisTransactional) ( (This)->lpVtbl -> get_IsTransactional2(This,pisTransactional) )
#define IMSMQQueueInfo3_get_IsWorldReadable2(This,pisWorldReadable) ( (This)->lpVtbl -> get_IsWorldReadable2(This,pisWorldReadable) )
#define IMSMQQueueInfo3_get_MulticastAddress(This,pbstrMulticastAddress) ( (This)->lpVtbl -> get_MulticastAddress(This,pbstrMulticastAddress) )
#define IMSMQQueueInfo3_put_MulticastAddress(This,bstrMulticastAddress) ( (This)->lpVtbl -> put_MulticastAddress(This,bstrMulticastAddress) )
#define IMSMQQueueInfo3_get_ADsPath(This,pbstrADsPath) ( (This)->lpVtbl -> get_ADsPath(This,pbstrADsPath) )
#endif
#endif
#ifndef __IMSMQQueueInfo4_INTERFACE_DEFINED__
#define __IMSMQQueueInfo4_INTERFACE_DEFINED__
extern const IID IID_IMSMQQueueInfo4;
typedef struct IMSMQQueueInfo4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQueueInfo4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQueueInfo4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQueueInfo4 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQueueInfo4 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQueueInfo4 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQueueInfo4 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQueueInfo4 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_QueueGuid) (IMSMQQueueInfo4 * This, BSTR * pbstrGuidQueue);
	HRESULT(STDMETHODCALLTYPE * get_ServiceTypeGuid) (IMSMQQueueInfo4 * This, BSTR * pbstrGuidServiceType);
	HRESULT(STDMETHODCALLTYPE * put_ServiceTypeGuid) (IMSMQQueueInfo4 * This, BSTR bstrGuidServiceType);
	HRESULT(STDMETHODCALLTYPE * get_Label) (IMSMQQueueInfo4 * This, BSTR * pbstrLabel);
	HRESULT(STDMETHODCALLTYPE * put_Label) (IMSMQQueueInfo4 * This, BSTR bstrLabel);
	HRESULT(STDMETHODCALLTYPE * get_PathName) (IMSMQQueueInfo4 * This, BSTR * pbstrPathName);
	HRESULT(STDMETHODCALLTYPE * put_PathName) (IMSMQQueueInfo4 * This, BSTR bstrPathName);
	HRESULT(STDMETHODCALLTYPE * get_FormatName) (IMSMQQueueInfo4 * This, BSTR * pbstrFormatName);
	HRESULT(STDMETHODCALLTYPE * put_FormatName) (IMSMQQueueInfo4 * This, BSTR bstrFormatName);
	HRESULT(STDMETHODCALLTYPE * get_IsTransactional) (IMSMQQueueInfo4 * This, Boolean * pisTransactional);
	HRESULT(STDMETHODCALLTYPE * get_PrivLevel) (IMSMQQueueInfo4 * This, long *plPrivLevel);
	HRESULT(STDMETHODCALLTYPE * put_PrivLevel) (IMSMQQueueInfo4 * This, long lPrivLevel);
	HRESULT(STDMETHODCALLTYPE * get_Journal) (IMSMQQueueInfo4 * This, long *plJournal);
	HRESULT(STDMETHODCALLTYPE * put_Journal) (IMSMQQueueInfo4 * This, long lJournal);
	HRESULT(STDMETHODCALLTYPE * get_Quota) (IMSMQQueueInfo4 * This, long *plQuota);
	HRESULT(STDMETHODCALLTYPE * put_Quota) (IMSMQQueueInfo4 * This, long lQuota);
	HRESULT(STDMETHODCALLTYPE * get_BasePriority) (IMSMQQueueInfo4 * This, long *plBasePriority);
	HRESULT(STDMETHODCALLTYPE * put_BasePriority) (IMSMQQueueInfo4 * This, long lBasePriority);
	HRESULT(STDMETHODCALLTYPE * get_CreateTime) (IMSMQQueueInfo4 * This, VARIANT * pvarCreateTime);
	HRESULT(STDMETHODCALLTYPE * get_ModifyTime) (IMSMQQueueInfo4 * This, VARIANT * pvarModifyTime);
	HRESULT(STDMETHODCALLTYPE * get_Authenticate) (IMSMQQueueInfo4 * This, long *plAuthenticate);
	HRESULT(STDMETHODCALLTYPE * put_Authenticate) (IMSMQQueueInfo4 * This, long lAuthenticate);
	HRESULT(STDMETHODCALLTYPE * get_JournalQuota) (IMSMQQueueInfo4 * This, long *plJournalQuota);
	HRESULT(STDMETHODCALLTYPE * put_JournalQuota) (IMSMQQueueInfo4 * This, long lJournalQuota);
	HRESULT(STDMETHODCALLTYPE * get_IsWorldReadable) (IMSMQQueueInfo4 * This, Boolean * pisWorldReadable);
	HRESULT(STDMETHODCALLTYPE * Create) (IMSMQQueueInfo4 * This, VARIANT * IsTransactional, VARIANT * IsWorldReadable);
	HRESULT(STDMETHODCALLTYPE * Delete) (IMSMQQueueInfo4 * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IMSMQQueueInfo4 * This, long Access, long ShareMode, IMSMQQueue4 ** ppq);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IMSMQQueueInfo4 * This);
	HRESULT(STDMETHODCALLTYPE * Update) (IMSMQQueueInfo4 * This);
	HRESULT(STDMETHODCALLTYPE * get_PathNameDNS) (IMSMQQueueInfo4 * This, BSTR * pbstrPathNameDNS);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQQueueInfo4 * This, IDispatch ** ppcolProperties);
	HRESULT(STDMETHODCALLTYPE * get_Security) (IMSMQQueueInfo4 * This, VARIANT * pvarSecurity);
	HRESULT(STDMETHODCALLTYPE * put_Security) (IMSMQQueueInfo4 * This, VARIANT varSecurity);
	HRESULT(STDMETHODCALLTYPE * get_IsTransactional2) (IMSMQQueueInfo4 * This, VARIANT_BOOL * pisTransactional);
	HRESULT(STDMETHODCALLTYPE * get_IsWorldReadable2) (IMSMQQueueInfo4 * This, VARIANT_BOOL * pisWorldReadable);
	HRESULT(STDMETHODCALLTYPE * get_MulticastAddress) (IMSMQQueueInfo4 * This, BSTR * pbstrMulticastAddress);
	HRESULT(STDMETHODCALLTYPE * put_MulticastAddress) (IMSMQQueueInfo4 * This, BSTR bstrMulticastAddress);
	HRESULT(STDMETHODCALLTYPE * get_ADsPath) (IMSMQQueueInfo4 * This, BSTR * pbstrADsPath);
	END_INTERFACE
}  IMSMQQueueInfo4Vtbl;
interface IMSMQQueueInfo4
{
	CONST_VTBL struct IMSMQQueueInfo4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQueueInfo4_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQueueInfo4_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQueueInfo4_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQueueInfo4_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQueueInfo4_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQueueInfo4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQueueInfo4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQueueInfo4_get_QueueGuid(This,pbstrGuidQueue) ( (This)->lpVtbl -> get_QueueGuid(This,pbstrGuidQueue) )
#define IMSMQQueueInfo4_get_ServiceTypeGuid(This,pbstrGuidServiceType) ( (This)->lpVtbl -> get_ServiceTypeGuid(This,pbstrGuidServiceType) )
#define IMSMQQueueInfo4_put_ServiceTypeGuid(This,bstrGuidServiceType) ( (This)->lpVtbl -> put_ServiceTypeGuid(This,bstrGuidServiceType) )
#define IMSMQQueueInfo4_get_Label(This,pbstrLabel) ( (This)->lpVtbl -> get_Label(This,pbstrLabel) )
#define IMSMQQueueInfo4_put_Label(This,bstrLabel) ( (This)->lpVtbl -> put_Label(This,bstrLabel) )
#define IMSMQQueueInfo4_get_PathName(This,pbstrPathName) ( (This)->lpVtbl -> get_PathName(This,pbstrPathName) )
#define IMSMQQueueInfo4_put_PathName(This,bstrPathName) ( (This)->lpVtbl -> put_PathName(This,bstrPathName) )
#define IMSMQQueueInfo4_get_FormatName(This,pbstrFormatName) ( (This)->lpVtbl -> get_FormatName(This,pbstrFormatName) )
#define IMSMQQueueInfo4_put_FormatName(This,bstrFormatName) ( (This)->lpVtbl -> put_FormatName(This,bstrFormatName) )
#define IMSMQQueueInfo4_get_IsTransactional(This,pisTransactional) ( (This)->lpVtbl -> get_IsTransactional(This,pisTransactional) )
#define IMSMQQueueInfo4_get_PrivLevel(This,plPrivLevel) ( (This)->lpVtbl -> get_PrivLevel(This,plPrivLevel) )
#define IMSMQQueueInfo4_put_PrivLevel(This,lPrivLevel) ( (This)->lpVtbl -> put_PrivLevel(This,lPrivLevel) )
#define IMSMQQueueInfo4_get_Journal(This,plJournal) ( (This)->lpVtbl -> get_Journal(This,plJournal) )
#define IMSMQQueueInfo4_put_Journal(This,lJournal) ( (This)->lpVtbl -> put_Journal(This,lJournal) )
#define IMSMQQueueInfo4_get_Quota(This,plQuota) ( (This)->lpVtbl -> get_Quota(This,plQuota) )
#define IMSMQQueueInfo4_put_Quota(This,lQuota) ( (This)->lpVtbl -> put_Quota(This,lQuota) )
#define IMSMQQueueInfo4_get_BasePriority(This,plBasePriority) ( (This)->lpVtbl -> get_BasePriority(This,plBasePriority) )
#define IMSMQQueueInfo4_put_BasePriority(This,lBasePriority) ( (This)->lpVtbl -> put_BasePriority(This,lBasePriority) )
#define IMSMQQueueInfo4_get_CreateTime(This,pvarCreateTime) ( (This)->lpVtbl -> get_CreateTime(This,pvarCreateTime) )
#define IMSMQQueueInfo4_get_ModifyTime(This,pvarModifyTime) ( (This)->lpVtbl -> get_ModifyTime(This,pvarModifyTime) )
#define IMSMQQueueInfo4_get_Authenticate(This,plAuthenticate) ( (This)->lpVtbl -> get_Authenticate(This,plAuthenticate) )
#define IMSMQQueueInfo4_put_Authenticate(This,lAuthenticate) ( (This)->lpVtbl -> put_Authenticate(This,lAuthenticate) )
#define IMSMQQueueInfo4_get_JournalQuota(This,plJournalQuota) ( (This)->lpVtbl -> get_JournalQuota(This,plJournalQuota) )
#define IMSMQQueueInfo4_put_JournalQuota(This,lJournalQuota) ( (This)->lpVtbl -> put_JournalQuota(This,lJournalQuota) )
#define IMSMQQueueInfo4_get_IsWorldReadable(This,pisWorldReadable) ( (This)->lpVtbl -> get_IsWorldReadable(This,pisWorldReadable) )
#define IMSMQQueueInfo4_Create(This,IsTransactional,IsWorldReadable) ( (This)->lpVtbl -> Create(This,IsTransactional,IsWorldReadable) )
#define IMSMQQueueInfo4_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IMSMQQueueInfo4_Open(This,Access,ShareMode,ppq) ( (This)->lpVtbl -> Open(This,Access,ShareMode,ppq) )
#define IMSMQQueueInfo4_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IMSMQQueueInfo4_Update(This) ( (This)->lpVtbl -> Update(This) )
#define IMSMQQueueInfo4_get_PathNameDNS(This,pbstrPathNameDNS) ( (This)->lpVtbl -> get_PathNameDNS(This,pbstrPathNameDNS) )
#define IMSMQQueueInfo4_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#define IMSMQQueueInfo4_get_Security(This,pvarSecurity) ( (This)->lpVtbl -> get_Security(This,pvarSecurity) )
#define IMSMQQueueInfo4_put_Security(This,varSecurity) ( (This)->lpVtbl -> put_Security(This,varSecurity) )
#define IMSMQQueueInfo4_get_IsTransactional2(This,pisTransactional) ( (This)->lpVtbl -> get_IsTransactional2(This,pisTransactional) )
#define IMSMQQueueInfo4_get_IsWorldReadable2(This,pisWorldReadable) ( (This)->lpVtbl -> get_IsWorldReadable2(This,pisWorldReadable) )
#define IMSMQQueueInfo4_get_MulticastAddress(This,pbstrMulticastAddress) ( (This)->lpVtbl -> get_MulticastAddress(This,pbstrMulticastAddress) )
#define IMSMQQueueInfo4_put_MulticastAddress(This,bstrMulticastAddress) ( (This)->lpVtbl -> put_MulticastAddress(This,bstrMulticastAddress) )
#define IMSMQQueueInfo4_get_ADsPath(This,pbstrADsPath) ( (This)->lpVtbl -> get_ADsPath(This,pbstrADsPath) )
#endif
#endif
#ifndef __IMSMQQueue_INTERFACE_DEFINED__
#define __IMSMQQueue_INTERFACE_DEFINED__
extern const IID IID_IMSMQQueue;
typedef struct IMSMQQueueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQueue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQueue * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQueue * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQueue * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQueue * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQueue * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQueue * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Access) (IMSMQQueue * This, long *plAccess);
	HRESULT(STDMETHODCALLTYPE * get_ShareMode) (IMSMQQueue * This, long *plShareMode);
	HRESULT(STDMETHODCALLTYPE * get_QueueInfo) (IMSMQQueue * This, IMSMQQueueInfo ** ppqinfo);
	HRESULT(STDMETHODCALLTYPE * get_Handle) (IMSMQQueue * This, long *plHandle);
	HRESULT(STDMETHODCALLTYPE * get_IsOpen) (IMSMQQueue * This, Boolean * pisOpen);
	HRESULT(STDMETHODCALLTYPE * Close) (IMSMQQueue * This);
	HRESULT(STDMETHODCALLTYPE * Receive) (IMSMQQueue * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * Peek) (IMSMQQueue * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * EnableNotification) (IMSMQQueue * This, IMSMQEvent * Event, VARIANT * Cursor, VARIANT * ReceiveTimeout);
	HRESULT(STDMETHODCALLTYPE * Reset) (IMSMQQueue * This);
	HRESULT(STDMETHODCALLTYPE * ReceiveCurrent) (IMSMQQueue * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekNext) (IMSMQQueue * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekCurrent) (IMSMQQueue * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	END_INTERFACE
}  IMSMQQueueVtbl;
interface IMSMQQueue
{
	CONST_VTBL struct IMSMQQueueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQueue_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQueue_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQueue_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQueue_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQueue_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQueue_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQueue_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQueue_get_Access(This,plAccess) ( (This)->lpVtbl -> get_Access(This,plAccess) )
#define IMSMQQueue_get_ShareMode(This,plShareMode) ( (This)->lpVtbl -> get_ShareMode(This,plShareMode) )
#define IMSMQQueue_get_QueueInfo(This,ppqinfo) ( (This)->lpVtbl -> get_QueueInfo(This,ppqinfo) )
#define IMSMQQueue_get_Handle(This,plHandle) ( (This)->lpVtbl -> get_Handle(This,plHandle) )
#define IMSMQQueue_get_IsOpen(This,pisOpen) ( (This)->lpVtbl -> get_IsOpen(This,pisOpen) )
#define IMSMQQueue_Close(This) ( (This)->lpVtbl -> Close(This) )
#define IMSMQQueue_Receive(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> Receive(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue_Peek(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> Peek(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue_EnableNotification(This,Event,Cursor,ReceiveTimeout) ( (This)->lpVtbl -> EnableNotification(This,Event,Cursor,ReceiveTimeout) )
#define IMSMQQueue_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IMSMQQueue_ReceiveCurrent(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> ReceiveCurrent(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue_PeekNext(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> PeekNext(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue_PeekCurrent(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> PeekCurrent(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#endif
#endif
#ifndef __IMSMQQueue2_INTERFACE_DEFINED__
#define __IMSMQQueue2_INTERFACE_DEFINED__
extern const IID IID_IMSMQQueue2;
typedef struct IMSMQQueue2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQueue2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQueue2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQueue2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQueue2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQueue2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQueue2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQueue2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Access) (IMSMQQueue2 * This, long *plAccess);
	HRESULT(STDMETHODCALLTYPE * get_ShareMode) (IMSMQQueue2 * This, long *plShareMode);
	HRESULT(STDMETHODCALLTYPE * get_QueueInfo) (IMSMQQueue2 * This, IMSMQQueueInfo2 ** ppqinfo);
	HRESULT(STDMETHODCALLTYPE * get_Handle) (IMSMQQueue2 * This, long *plHandle);
	HRESULT(STDMETHODCALLTYPE * get_IsOpen) (IMSMQQueue2 * This, Boolean * pisOpen);
	HRESULT(STDMETHODCALLTYPE * Close) (IMSMQQueue2 * This);
	HRESULT(STDMETHODCALLTYPE * Receive_v1) (IMSMQQueue2 * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * Peek_v1) (IMSMQQueue2 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * EnableNotification) (IMSMQQueue2 * This, IMSMQEvent2 * Event, VARIANT * Cursor, VARIANT * ReceiveTimeout);
	HRESULT(STDMETHODCALLTYPE * Reset) (IMSMQQueue2 * This);
	HRESULT(STDMETHODCALLTYPE * ReceiveCurrent_v1) (IMSMQQueue2 * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekNext_v1) (IMSMQQueue2 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekCurrent_v1) (IMSMQQueue2 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * Receive) (IMSMQQueue2 * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, VARIANT * WantConnectorType, IMSMQMessage2 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * Peek) (IMSMQQueue2 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, VARIANT * WantConnectorType, IMSMQMessage2 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * ReceiveCurrent) (IMSMQQueue2 * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, VARIANT * WantConnectorType, IMSMQMessage2 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekNext) (IMSMQQueue2 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, VARIANT * WantConnectorType, IMSMQMessage2 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekCurrent) (IMSMQQueue2 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, VARIANT * WantConnectorType, IMSMQMessage2 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQQueue2 * This, IDispatch ** ppcolProperties);
	END_INTERFACE
}  IMSMQQueue2Vtbl;
interface IMSMQQueue2
{
	CONST_VTBL struct IMSMQQueue2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQueue2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQueue2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQueue2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQueue2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQueue2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQueue2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQueue2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQueue2_get_Access(This,plAccess) ( (This)->lpVtbl -> get_Access(This,plAccess) )
#define IMSMQQueue2_get_ShareMode(This,plShareMode) ( (This)->lpVtbl -> get_ShareMode(This,plShareMode) )
#define IMSMQQueue2_get_QueueInfo(This,ppqinfo) ( (This)->lpVtbl -> get_QueueInfo(This,ppqinfo) )
#define IMSMQQueue2_get_Handle(This,plHandle) ( (This)->lpVtbl -> get_Handle(This,plHandle) )
#define IMSMQQueue2_get_IsOpen(This,pisOpen) ( (This)->lpVtbl -> get_IsOpen(This,pisOpen) )
#define IMSMQQueue2_Close(This) ( (This)->lpVtbl -> Close(This) )
#define IMSMQQueue2_Receive_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> Receive_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue2_Peek_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> Peek_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue2_EnableNotification(This,Event,Cursor,ReceiveTimeout) ( (This)->lpVtbl -> EnableNotification(This,Event,Cursor,ReceiveTimeout) )
#define IMSMQQueue2_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IMSMQQueue2_ReceiveCurrent_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> ReceiveCurrent_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue2_PeekNext_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> PeekNext_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue2_PeekCurrent_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> PeekCurrent_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue2_Receive(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) ( (This)->lpVtbl -> Receive(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
#define IMSMQQueue2_Peek(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) ( (This)->lpVtbl -> Peek(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
#define IMSMQQueue2_ReceiveCurrent(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) ( (This)->lpVtbl -> ReceiveCurrent(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
#define IMSMQQueue2_PeekNext(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) ( (This)->lpVtbl -> PeekNext(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
#define IMSMQQueue2_PeekCurrent(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) ( (This)->lpVtbl -> PeekCurrent(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
#define IMSMQQueue2_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#endif
#endif
#ifndef __IMSMQQueue3_INTERFACE_DEFINED__
#define __IMSMQQueue3_INTERFACE_DEFINED__
extern const IID IID_IMSMQQueue3;
typedef struct IMSMQQueue3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQueue3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQueue3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQueue3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQueue3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQueue3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQueue3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQueue3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Access) (IMSMQQueue3 * This, long *plAccess);
	HRESULT(STDMETHODCALLTYPE * get_ShareMode) (IMSMQQueue3 * This, long *plShareMode);
	HRESULT(STDMETHODCALLTYPE * get_QueueInfo) (IMSMQQueue3 * This, IMSMQQueueInfo3 ** ppqinfo);
	HRESULT(STDMETHODCALLTYPE * get_Handle) (IMSMQQueue3 * This, long *plHandle);
	HRESULT(STDMETHODCALLTYPE * get_IsOpen) (IMSMQQueue3 * This, Boolean * pisOpen);
	HRESULT(STDMETHODCALLTYPE * Close) (IMSMQQueue3 * This);
	HRESULT(STDMETHODCALLTYPE * Receive_v1) (IMSMQQueue3 * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * Peek_v1) (IMSMQQueue3 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * EnableNotification) (IMSMQQueue3 * This, IMSMQEvent3 * Event, VARIANT * Cursor, VARIANT * ReceiveTimeout);
	HRESULT(STDMETHODCALLTYPE * Reset) (IMSMQQueue3 * This);
	HRESULT(STDMETHODCALLTYPE * ReceiveCurrent_v1) (IMSMQQueue3 * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekNext_v1) (IMSMQQueue3 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekCurrent_v1) (IMSMQQueue3 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * Receive) (IMSMQQueue3 * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, VARIANT * WantConnectorType, IMSMQMessage3 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * Peek) (IMSMQQueue3 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, VARIANT * WantConnectorType, IMSMQMessage3 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * ReceiveCurrent) (IMSMQQueue3 * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, VARIANT * WantConnectorType, IMSMQMessage3 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekNext) (IMSMQQueue3 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, VARIANT * WantConnectorType, IMSMQMessage3 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekCurrent) (IMSMQQueue3 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, VARIANT * WantConnectorType, IMSMQMessage3 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQQueue3 * This, IDispatch ** ppcolProperties);
	HRESULT(STDMETHODCALLTYPE * get_Handle2) (IMSMQQueue3 * This, VARIANT * pvarHandle);
	HRESULT(STDMETHODCALLTYPE * ReceiveByLookupId) (IMSMQQueue3 * This, VARIANT LookupId, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage3 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * ReceiveNextByLookupId) (IMSMQQueue3 * This, VARIANT LookupId, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage3 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * ReceivePreviousByLookupId) (IMSMQQueue3 * This, VARIANT LookupId, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage3 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * ReceiveFirstByLookupId) (IMSMQQueue3 * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage3 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * ReceiveLastByLookupId) (IMSMQQueue3 * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage3 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekByLookupId) (IMSMQQueue3 * This, VARIANT LookupId, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage3 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekNextByLookupId) (IMSMQQueue3 * This, VARIANT LookupId, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage3 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekPreviousByLookupId) (IMSMQQueue3 * This, VARIANT LookupId, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage3 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekFirstByLookupId) (IMSMQQueue3 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage3 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekLastByLookupId) (IMSMQQueue3 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage3 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * Purge) (IMSMQQueue3 * This);
	HRESULT(STDMETHODCALLTYPE * get_IsOpen2) (IMSMQQueue3 * This, VARIANT_BOOL * pisOpen);
	END_INTERFACE
}  IMSMQQueue3Vtbl;
interface IMSMQQueue3
{
	CONST_VTBL struct IMSMQQueue3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQueue3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQueue3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQueue3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQueue3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQueue3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQueue3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQueue3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQueue3_get_Access(This,plAccess) ( (This)->lpVtbl -> get_Access(This,plAccess) )
#define IMSMQQueue3_get_ShareMode(This,plShareMode) ( (This)->lpVtbl -> get_ShareMode(This,plShareMode) )
#define IMSMQQueue3_get_QueueInfo(This,ppqinfo) ( (This)->lpVtbl -> get_QueueInfo(This,ppqinfo) )
#define IMSMQQueue3_get_Handle(This,plHandle) ( (This)->lpVtbl -> get_Handle(This,plHandle) )
#define IMSMQQueue3_get_IsOpen(This,pisOpen) ( (This)->lpVtbl -> get_IsOpen(This,pisOpen) )
#define IMSMQQueue3_Close(This) ( (This)->lpVtbl -> Close(This) )
#define IMSMQQueue3_Receive_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> Receive_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue3_Peek_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> Peek_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue3_EnableNotification(This,Event,Cursor,ReceiveTimeout) ( (This)->lpVtbl -> EnableNotification(This,Event,Cursor,ReceiveTimeout) )
#define IMSMQQueue3_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IMSMQQueue3_ReceiveCurrent_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> ReceiveCurrent_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue3_PeekNext_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> PeekNext_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue3_PeekCurrent_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> PeekCurrent_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue3_Receive(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) ( (This)->lpVtbl -> Receive(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
#define IMSMQQueue3_Peek(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) ( (This)->lpVtbl -> Peek(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
#define IMSMQQueue3_ReceiveCurrent(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) ( (This)->lpVtbl -> ReceiveCurrent(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
#define IMSMQQueue3_PeekNext(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) ( (This)->lpVtbl -> PeekNext(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
#define IMSMQQueue3_PeekCurrent(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) ( (This)->lpVtbl -> PeekCurrent(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
#define IMSMQQueue3_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#define IMSMQQueue3_get_Handle2(This,pvarHandle) ( (This)->lpVtbl -> get_Handle2(This,pvarHandle) )
#define IMSMQQueue3_ReceiveByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> ReceiveByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue3_ReceiveNextByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> ReceiveNextByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue3_ReceivePreviousByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> ReceivePreviousByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue3_ReceiveFirstByLookupId(This,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> ReceiveFirstByLookupId(This,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue3_ReceiveLastByLookupId(This,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> ReceiveLastByLookupId(This,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue3_PeekByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> PeekByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue3_PeekNextByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> PeekNextByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue3_PeekPreviousByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> PeekPreviousByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue3_PeekFirstByLookupId(This,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> PeekFirstByLookupId(This,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue3_PeekLastByLookupId(This,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> PeekLastByLookupId(This,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue3_Purge(This) ( (This)->lpVtbl -> Purge(This) )
#define IMSMQQueue3_get_IsOpen2(This,pisOpen) ( (This)->lpVtbl -> get_IsOpen2(This,pisOpen) )
#endif
#endif
#ifndef __IMSMQQueue4_INTERFACE_DEFINED__
#define __IMSMQQueue4_INTERFACE_DEFINED__
extern const IID IID_IMSMQQueue4;
typedef struct IMSMQQueue4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQueue4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQueue4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQueue4 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQueue4 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQueue4 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQueue4 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQueue4 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Access) (IMSMQQueue4 * This, long *plAccess);
	HRESULT(STDMETHODCALLTYPE * get_ShareMode) (IMSMQQueue4 * This, long *plShareMode);
	HRESULT(STDMETHODCALLTYPE * get_QueueInfo) (IMSMQQueue4 * This, IMSMQQueueInfo4 ** ppqinfo);
	HRESULT(STDMETHODCALLTYPE * get_Handle) (IMSMQQueue4 * This, long *plHandle);
	HRESULT(STDMETHODCALLTYPE * get_IsOpen) (IMSMQQueue4 * This, Boolean * pisOpen);
	HRESULT(STDMETHODCALLTYPE * Close) (IMSMQQueue4 * This);
	HRESULT(STDMETHODCALLTYPE * Receive_v1) (IMSMQQueue4 * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * Peek_v1) (IMSMQQueue4 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * EnableNotification) (IMSMQQueue4 * This, IMSMQEvent3 * Event, VARIANT * Cursor, VARIANT * ReceiveTimeout);
	HRESULT(STDMETHODCALLTYPE * Reset) (IMSMQQueue4 * This);
	HRESULT(STDMETHODCALLTYPE * ReceiveCurrent_v1) (IMSMQQueue4 * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekNext_v1) (IMSMQQueue4 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekCurrent_v1) (IMSMQQueue4 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, IMSMQMessage ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * Receive) (IMSMQQueue4 * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, VARIANT * WantConnectorType, IMSMQMessage4 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * Peek) (IMSMQQueue4 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, VARIANT * WantConnectorType, IMSMQMessage4 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * ReceiveCurrent) (IMSMQQueue4 * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, VARIANT * WantConnectorType, IMSMQMessage4 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekNext) (IMSMQQueue4 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, VARIANT * WantConnectorType, IMSMQMessage4 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekCurrent) (IMSMQQueue4 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * ReceiveTimeout, VARIANT * WantConnectorType, IMSMQMessage4 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQQueue4 * This, IDispatch ** ppcolProperties);
	HRESULT(STDMETHODCALLTYPE * get_Handle2) (IMSMQQueue4 * This, VARIANT * pvarHandle);
	HRESULT(STDMETHODCALLTYPE * ReceiveByLookupId) (IMSMQQueue4 * This, VARIANT LookupId, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage4 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * ReceiveNextByLookupId) (IMSMQQueue4 * This, VARIANT LookupId, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage4 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * ReceivePreviousByLookupId) (IMSMQQueue4 * This, VARIANT LookupId, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage4 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * ReceiveFirstByLookupId) (IMSMQQueue4 * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage4 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * ReceiveLastByLookupId) (IMSMQQueue4 * This, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage4 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekByLookupId) (IMSMQQueue4 * This, VARIANT LookupId, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage4 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekNextByLookupId) (IMSMQQueue4 * This, VARIANT LookupId, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage4 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekPreviousByLookupId) (IMSMQQueue4 * This, VARIANT LookupId, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage4 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekFirstByLookupId) (IMSMQQueue4 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage4 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * PeekLastByLookupId) (IMSMQQueue4 * This, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage4 ** ppmsg);
	HRESULT(STDMETHODCALLTYPE * Purge) (IMSMQQueue4 * This);
	HRESULT(STDMETHODCALLTYPE * get_IsOpen2) (IMSMQQueue4 * This, VARIANT_BOOL * pisOpen);
	HRESULT(STDMETHODCALLTYPE * ReceiveByLookupIdAllowPeek) (IMSMQQueue4 * This, VARIANT LookupId, VARIANT * Transaction, VARIANT * WantDestinationQueue, VARIANT * WantBody, VARIANT * WantConnectorType, IMSMQMessage4 ** ppmsg);
	END_INTERFACE
}  IMSMQQueue4Vtbl;
interface IMSMQQueue4
{
	CONST_VTBL struct IMSMQQueue4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQueue4_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQueue4_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQueue4_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQueue4_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQueue4_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQueue4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQueue4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQueue4_get_Access(This,plAccess) ( (This)->lpVtbl -> get_Access(This,plAccess) )
#define IMSMQQueue4_get_ShareMode(This,plShareMode) ( (This)->lpVtbl -> get_ShareMode(This,plShareMode) )
#define IMSMQQueue4_get_QueueInfo(This,ppqinfo) ( (This)->lpVtbl -> get_QueueInfo(This,ppqinfo) )
#define IMSMQQueue4_get_Handle(This,plHandle) ( (This)->lpVtbl -> get_Handle(This,plHandle) )
#define IMSMQQueue4_get_IsOpen(This,pisOpen) ( (This)->lpVtbl -> get_IsOpen(This,pisOpen) )
#define IMSMQQueue4_Close(This) ( (This)->lpVtbl -> Close(This) )
#define IMSMQQueue4_Receive_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> Receive_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue4_Peek_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> Peek_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue4_EnableNotification(This,Event,Cursor,ReceiveTimeout) ( (This)->lpVtbl -> EnableNotification(This,Event,Cursor,ReceiveTimeout) )
#define IMSMQQueue4_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IMSMQQueue4_ReceiveCurrent_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> ReceiveCurrent_v1(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue4_PeekNext_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> PeekNext_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue4_PeekCurrent_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) ( (This)->lpVtbl -> PeekCurrent_v1(This,WantDestinationQueue,WantBody,ReceiveTimeout,ppmsg) )
#define IMSMQQueue4_Receive(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) ( (This)->lpVtbl -> Receive(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
#define IMSMQQueue4_Peek(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) ( (This)->lpVtbl -> Peek(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
#define IMSMQQueue4_ReceiveCurrent(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) ( (This)->lpVtbl -> ReceiveCurrent(This,Transaction,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
#define IMSMQQueue4_PeekNext(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) ( (This)->lpVtbl -> PeekNext(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
#define IMSMQQueue4_PeekCurrent(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) ( (This)->lpVtbl -> PeekCurrent(This,WantDestinationQueue,WantBody,ReceiveTimeout,WantConnectorType,ppmsg) )
#define IMSMQQueue4_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#define IMSMQQueue4_get_Handle2(This,pvarHandle) ( (This)->lpVtbl -> get_Handle2(This,pvarHandle) )
#define IMSMQQueue4_ReceiveByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> ReceiveByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue4_ReceiveNextByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> ReceiveNextByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue4_ReceivePreviousByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> ReceivePreviousByLookupId(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue4_ReceiveFirstByLookupId(This,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> ReceiveFirstByLookupId(This,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue4_ReceiveLastByLookupId(This,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> ReceiveLastByLookupId(This,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue4_PeekByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> PeekByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue4_PeekNextByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> PeekNextByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue4_PeekPreviousByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> PeekPreviousByLookupId(This,LookupId,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue4_PeekFirstByLookupId(This,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> PeekFirstByLookupId(This,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue4_PeekLastByLookupId(This,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> PeekLastByLookupId(This,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#define IMSMQQueue4_Purge(This) ( (This)->lpVtbl -> Purge(This) )
#define IMSMQQueue4_get_IsOpen2(This,pisOpen) ( (This)->lpVtbl -> get_IsOpen2(This,pisOpen) )
#define IMSMQQueue4_ReceiveByLookupIdAllowPeek(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) ( (This)->lpVtbl -> ReceiveByLookupIdAllowPeek(This,LookupId,Transaction,WantDestinationQueue,WantBody,WantConnectorType,ppmsg) )
#endif
#endif
#ifndef __IMSMQMessage_INTERFACE_DEFINED__
#define __IMSMQMessage_INTERFACE_DEFINED__
extern const IID IID_IMSMQMessage;
typedef struct IMSMQMessageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQMessage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQMessage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQMessage * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQMessage * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQMessage * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQMessage * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQMessage * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Class) (IMSMQMessage * This, long *plClass);
	HRESULT(STDMETHODCALLTYPE * get_PrivLevel) (IMSMQMessage * This, long *plPrivLevel);
	HRESULT(STDMETHODCALLTYPE * put_PrivLevel) (IMSMQMessage * This, long lPrivLevel);
	HRESULT(STDMETHODCALLTYPE * get_AuthLevel) (IMSMQMessage * This, long *plAuthLevel);
	HRESULT(STDMETHODCALLTYPE * put_AuthLevel) (IMSMQMessage * This, long lAuthLevel);
	HRESULT(STDMETHODCALLTYPE * get_IsAuthenticated) (IMSMQMessage * This, Boolean * pisAuthenticated);
	HRESULT(STDMETHODCALLTYPE * get_Delivery) (IMSMQMessage * This, long *plDelivery);
	HRESULT(STDMETHODCALLTYPE * put_Delivery) (IMSMQMessage * This, long lDelivery);
	HRESULT(STDMETHODCALLTYPE * get_Trace) (IMSMQMessage * This, long *plTrace);
	HRESULT(STDMETHODCALLTYPE * put_Trace) (IMSMQMessage * This, long lTrace);
	HRESULT(STDMETHODCALLTYPE * get_Priority) (IMSMQMessage * This, long *plPriority);
	HRESULT(STDMETHODCALLTYPE * put_Priority) (IMSMQMessage * This, long lPriority);
	HRESULT(STDMETHODCALLTYPE * get_Journal) (IMSMQMessage * This, long *plJournal);
	HRESULT(STDMETHODCALLTYPE * put_Journal) (IMSMQMessage * This, long lJournal);
	HRESULT(STDMETHODCALLTYPE * get_ResponseQueueInfo) (IMSMQMessage * This, IMSMQQueueInfo ** ppqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * putref_ResponseQueueInfo) (IMSMQMessage * This, IMSMQQueueInfo * pqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * get_AppSpecific) (IMSMQMessage * This, long *plAppSpecific);
	HRESULT(STDMETHODCALLTYPE * put_AppSpecific) (IMSMQMessage * This, long lAppSpecific);
	HRESULT(STDMETHODCALLTYPE * get_SourceMachineGuid) (IMSMQMessage * This, BSTR * pbstrGuidSrcMachine);
	HRESULT(STDMETHODCALLTYPE * get_BodyLength) (IMSMQMessage * This, long *pcbBody);
	HRESULT(STDMETHODCALLTYPE * get_Body) (IMSMQMessage * This, VARIANT * pvarBody);
	HRESULT(STDMETHODCALLTYPE * put_Body) (IMSMQMessage * This, VARIANT varBody);
	HRESULT(STDMETHODCALLTYPE * get_AdminQueueInfo) (IMSMQMessage * This, IMSMQQueueInfo ** ppqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * putref_AdminQueueInfo) (IMSMQMessage * This, IMSMQQueueInfo * pqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IMSMQMessage * This, VARIANT * pvarMsgId);
	HRESULT(STDMETHODCALLTYPE * get_CorrelationId) (IMSMQMessage * This, VARIANT * pvarMsgId);
	HRESULT(STDMETHODCALLTYPE * put_CorrelationId) (IMSMQMessage * This, VARIANT varMsgId);
	HRESULT(STDMETHODCALLTYPE * get_Ack) (IMSMQMessage * This, long *plAck);
	HRESULT(STDMETHODCALLTYPE * put_Ack) (IMSMQMessage * This, long lAck);
	HRESULT(STDMETHODCALLTYPE * get_Label) (IMSMQMessage * This, BSTR * pbstrLabel);
	HRESULT(STDMETHODCALLTYPE * put_Label) (IMSMQMessage * This, BSTR bstrLabel);
	HRESULT(STDMETHODCALLTYPE * get_MaxTimeToReachQueue) (IMSMQMessage * This, long *plMaxTimeToReachQueue);
	HRESULT(STDMETHODCALLTYPE * put_MaxTimeToReachQueue) (IMSMQMessage * This, long lMaxTimeToReachQueue);
	HRESULT(STDMETHODCALLTYPE * get_MaxTimeToReceive) (IMSMQMessage * This, long *plMaxTimeToReceive);
	HRESULT(STDMETHODCALLTYPE * put_MaxTimeToReceive) (IMSMQMessage * This, long lMaxTimeToReceive);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (IMSMQMessage * This, long *plHashAlg);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (IMSMQMessage * This, long lHashAlg);
	HRESULT(STDMETHODCALLTYPE * get_EncryptAlgorithm) (IMSMQMessage * This, long *plEncryptAlg);
	HRESULT(STDMETHODCALLTYPE * put_EncryptAlgorithm) (IMSMQMessage * This, long lEncryptAlg);
	HRESULT(STDMETHODCALLTYPE * get_SentTime) (IMSMQMessage * This, VARIANT * pvarSentTime);
	HRESULT(STDMETHODCALLTYPE * get_ArrivedTime) (IMSMQMessage * This, VARIANT * plArrivedTime);
	HRESULT(STDMETHODCALLTYPE * get_DestinationQueueInfo) (IMSMQMessage * This, IMSMQQueueInfo ** ppqinfoDest);
	HRESULT(STDMETHODCALLTYPE * get_SenderCertificate) (IMSMQMessage * This, VARIANT * pvarSenderCert);
	HRESULT(STDMETHODCALLTYPE * put_SenderCertificate) (IMSMQMessage * This, VARIANT varSenderCert);
	HRESULT(STDMETHODCALLTYPE * get_SenderId) (IMSMQMessage * This, VARIANT * pvarSenderId);
	HRESULT(STDMETHODCALLTYPE * get_SenderIdType) (IMSMQMessage * This, long *plSenderIdType);
	HRESULT(STDMETHODCALLTYPE * put_SenderIdType) (IMSMQMessage * This, long lSenderIdType);
	HRESULT(STDMETHODCALLTYPE * Send) (IMSMQMessage * This, IMSMQQueue * DestinationQueue, VARIANT * Transaction);
	HRESULT(STDMETHODCALLTYPE * AttachCurrentSecurityContext) (IMSMQMessage * This);
	END_INTERFACE
}  IMSMQMessageVtbl;
interface IMSMQMessage
{
	CONST_VTBL struct IMSMQMessageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQMessage_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQMessage_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQMessage_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQMessage_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQMessage_get_Class(This,plClass) ( (This)->lpVtbl -> get_Class(This,plClass) )
#define IMSMQMessage_get_PrivLevel(This,plPrivLevel) ( (This)->lpVtbl -> get_PrivLevel(This,plPrivLevel) )
#define IMSMQMessage_put_PrivLevel(This,lPrivLevel) ( (This)->lpVtbl -> put_PrivLevel(This,lPrivLevel) )
#define IMSMQMessage_get_AuthLevel(This,plAuthLevel) ( (This)->lpVtbl -> get_AuthLevel(This,plAuthLevel) )
#define IMSMQMessage_put_AuthLevel(This,lAuthLevel) ( (This)->lpVtbl -> put_AuthLevel(This,lAuthLevel) )
#define IMSMQMessage_get_IsAuthenticated(This,pisAuthenticated) ( (This)->lpVtbl -> get_IsAuthenticated(This,pisAuthenticated) )
#define IMSMQMessage_get_Delivery(This,plDelivery) ( (This)->lpVtbl -> get_Delivery(This,plDelivery) )
#define IMSMQMessage_put_Delivery(This,lDelivery) ( (This)->lpVtbl -> put_Delivery(This,lDelivery) )
#define IMSMQMessage_get_Trace(This,plTrace) ( (This)->lpVtbl -> get_Trace(This,plTrace) )
#define IMSMQMessage_put_Trace(This,lTrace) ( (This)->lpVtbl -> put_Trace(This,lTrace) )
#define IMSMQMessage_get_Priority(This,plPriority) ( (This)->lpVtbl -> get_Priority(This,plPriority) )
#define IMSMQMessage_put_Priority(This,lPriority) ( (This)->lpVtbl -> put_Priority(This,lPriority) )
#define IMSMQMessage_get_Journal(This,plJournal) ( (This)->lpVtbl -> get_Journal(This,plJournal) )
#define IMSMQMessage_put_Journal(This,lJournal) ( (This)->lpVtbl -> put_Journal(This,lJournal) )
#define IMSMQMessage_get_ResponseQueueInfo(This,ppqinfoResponse) ( (This)->lpVtbl -> get_ResponseQueueInfo(This,ppqinfoResponse) )
#define IMSMQMessage_putref_ResponseQueueInfo(This,pqinfoResponse) ( (This)->lpVtbl -> putref_ResponseQueueInfo(This,pqinfoResponse) )
#define IMSMQMessage_get_AppSpecific(This,plAppSpecific) ( (This)->lpVtbl -> get_AppSpecific(This,plAppSpecific) )
#define IMSMQMessage_put_AppSpecific(This,lAppSpecific) ( (This)->lpVtbl -> put_AppSpecific(This,lAppSpecific) )
#define IMSMQMessage_get_SourceMachineGuid(This,pbstrGuidSrcMachine) ( (This)->lpVtbl -> get_SourceMachineGuid(This,pbstrGuidSrcMachine) )
#define IMSMQMessage_get_BodyLength(This,pcbBody) ( (This)->lpVtbl -> get_BodyLength(This,pcbBody) )
#define IMSMQMessage_get_Body(This,pvarBody) ( (This)->lpVtbl -> get_Body(This,pvarBody) )
#define IMSMQMessage_put_Body(This,varBody) ( (This)->lpVtbl -> put_Body(This,varBody) )
#define IMSMQMessage_get_AdminQueueInfo(This,ppqinfoAdmin) ( (This)->lpVtbl -> get_AdminQueueInfo(This,ppqinfoAdmin) )
#define IMSMQMessage_putref_AdminQueueInfo(This,pqinfoAdmin) ( (This)->lpVtbl -> putref_AdminQueueInfo(This,pqinfoAdmin) )
#define IMSMQMessage_get_Id(This,pvarMsgId) ( (This)->lpVtbl -> get_Id(This,pvarMsgId) )
#define IMSMQMessage_get_CorrelationId(This,pvarMsgId) ( (This)->lpVtbl -> get_CorrelationId(This,pvarMsgId) )
#define IMSMQMessage_put_CorrelationId(This,varMsgId) ( (This)->lpVtbl -> put_CorrelationId(This,varMsgId) )
#define IMSMQMessage_get_Ack(This,plAck) ( (This)->lpVtbl -> get_Ack(This,plAck) )
#define IMSMQMessage_put_Ack(This,lAck) ( (This)->lpVtbl -> put_Ack(This,lAck) )
#define IMSMQMessage_get_Label(This,pbstrLabel) ( (This)->lpVtbl -> get_Label(This,pbstrLabel) )
#define IMSMQMessage_put_Label(This,bstrLabel) ( (This)->lpVtbl -> put_Label(This,bstrLabel) )
#define IMSMQMessage_get_MaxTimeToReachQueue(This,plMaxTimeToReachQueue) ( (This)->lpVtbl -> get_MaxTimeToReachQueue(This,plMaxTimeToReachQueue) )
#define IMSMQMessage_put_MaxTimeToReachQueue(This,lMaxTimeToReachQueue) ( (This)->lpVtbl -> put_MaxTimeToReachQueue(This,lMaxTimeToReachQueue) )
#define IMSMQMessage_get_MaxTimeToReceive(This,plMaxTimeToReceive) ( (This)->lpVtbl -> get_MaxTimeToReceive(This,plMaxTimeToReceive) )
#define IMSMQMessage_put_MaxTimeToReceive(This,lMaxTimeToReceive) ( (This)->lpVtbl -> put_MaxTimeToReceive(This,lMaxTimeToReceive) )
#define IMSMQMessage_get_HashAlgorithm(This,plHashAlg) ( (This)->lpVtbl -> get_HashAlgorithm(This,plHashAlg) )
#define IMSMQMessage_put_HashAlgorithm(This,lHashAlg) ( (This)->lpVtbl -> put_HashAlgorithm(This,lHashAlg) )
#define IMSMQMessage_get_EncryptAlgorithm(This,plEncryptAlg) ( (This)->lpVtbl -> get_EncryptAlgorithm(This,plEncryptAlg) )
#define IMSMQMessage_put_EncryptAlgorithm(This,lEncryptAlg) ( (This)->lpVtbl -> put_EncryptAlgorithm(This,lEncryptAlg) )
#define IMSMQMessage_get_SentTime(This,pvarSentTime) ( (This)->lpVtbl -> get_SentTime(This,pvarSentTime) )
#define IMSMQMessage_get_ArrivedTime(This,plArrivedTime) ( (This)->lpVtbl -> get_ArrivedTime(This,plArrivedTime) )
#define IMSMQMessage_get_DestinationQueueInfo(This,ppqinfoDest) ( (This)->lpVtbl -> get_DestinationQueueInfo(This,ppqinfoDest) )
#define IMSMQMessage_get_SenderCertificate(This,pvarSenderCert) ( (This)->lpVtbl -> get_SenderCertificate(This,pvarSenderCert) )
#define IMSMQMessage_put_SenderCertificate(This,varSenderCert) ( (This)->lpVtbl -> put_SenderCertificate(This,varSenderCert) )
#define IMSMQMessage_get_SenderId(This,pvarSenderId) ( (This)->lpVtbl -> get_SenderId(This,pvarSenderId) )
#define IMSMQMessage_get_SenderIdType(This,plSenderIdType) ( (This)->lpVtbl -> get_SenderIdType(This,plSenderIdType) )
#define IMSMQMessage_put_SenderIdType(This,lSenderIdType) ( (This)->lpVtbl -> put_SenderIdType(This,lSenderIdType) )
#define IMSMQMessage_Send(This,DestinationQueue,Transaction) ( (This)->lpVtbl -> Send(This,DestinationQueue,Transaction) )
#define IMSMQMessage_AttachCurrentSecurityContext(This) ( (This)->lpVtbl -> AttachCurrentSecurityContext(This) )
#endif
#endif
#ifndef __IMSMQQueueInfos_INTERFACE_DEFINED__
#define __IMSMQQueueInfos_INTERFACE_DEFINED__
extern const IID IID_IMSMQQueueInfos;
typedef struct IMSMQQueueInfosVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQueueInfos * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQueueInfos * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQueueInfos * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQueueInfos * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQueueInfos * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQueueInfos * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQueueInfos * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Reset) (IMSMQQueueInfos * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IMSMQQueueInfos * This, IMSMQQueueInfo ** ppqinfoNext);
	END_INTERFACE
}  IMSMQQueueInfosVtbl;
interface IMSMQQueueInfos
{
	CONST_VTBL struct IMSMQQueueInfosVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQueueInfos_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQueueInfos_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQueueInfos_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQueueInfos_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQueueInfos_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQueueInfos_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQueueInfos_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQueueInfos_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IMSMQQueueInfos_Next(This,ppqinfoNext) ( (This)->lpVtbl -> Next(This,ppqinfoNext) )
#endif
#endif
#ifndef __IMSMQQueueInfos2_INTERFACE_DEFINED__
#define __IMSMQQueueInfos2_INTERFACE_DEFINED__
extern const IID IID_IMSMQQueueInfos2;
typedef struct IMSMQQueueInfos2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQueueInfos2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQueueInfos2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQueueInfos2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQueueInfos2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQueueInfos2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQueueInfos2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQueueInfos2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Reset) (IMSMQQueueInfos2 * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IMSMQQueueInfos2 * This, IMSMQQueueInfo2 ** ppqinfoNext);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQQueueInfos2 * This, IDispatch ** ppcolProperties);
	END_INTERFACE
}  IMSMQQueueInfos2Vtbl;
interface IMSMQQueueInfos2
{
	CONST_VTBL struct IMSMQQueueInfos2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQueueInfos2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQueueInfos2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQueueInfos2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQueueInfos2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQueueInfos2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQueueInfos2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQueueInfos2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQueueInfos2_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IMSMQQueueInfos2_Next(This,ppqinfoNext) ( (This)->lpVtbl -> Next(This,ppqinfoNext) )
#define IMSMQQueueInfos2_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#endif
#endif
#ifndef __IMSMQQueueInfos3_INTERFACE_DEFINED__
#define __IMSMQQueueInfos3_INTERFACE_DEFINED__
extern const IID IID_IMSMQQueueInfos3;
typedef struct IMSMQQueueInfos3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQueueInfos3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQueueInfos3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQueueInfos3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQueueInfos3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQueueInfos3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQueueInfos3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQueueInfos3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Reset) (IMSMQQueueInfos3 * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IMSMQQueueInfos3 * This, IMSMQQueueInfo3 ** ppqinfoNext);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQQueueInfos3 * This, IDispatch ** ppcolProperties);
	END_INTERFACE
}  IMSMQQueueInfos3Vtbl;
interface IMSMQQueueInfos3
{
	CONST_VTBL struct IMSMQQueueInfos3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQueueInfos3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQueueInfos3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQueueInfos3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQueueInfos3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQueueInfos3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQueueInfos3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQueueInfos3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQueueInfos3_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IMSMQQueueInfos3_Next(This,ppqinfoNext) ( (This)->lpVtbl -> Next(This,ppqinfoNext) )
#define IMSMQQueueInfos3_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#endif
#endif
#ifndef __IMSMQQueueInfos4_INTERFACE_DEFINED__
#define __IMSMQQueueInfos4_INTERFACE_DEFINED__
extern const IID IID_IMSMQQueueInfos4;
typedef struct IMSMQQueueInfos4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQueueInfos4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQueueInfos4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQueueInfos4 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQueueInfos4 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQueueInfos4 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQueueInfos4 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQueueInfos4 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Reset) (IMSMQQueueInfos4 * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IMSMQQueueInfos4 * This, IMSMQQueueInfo4 ** ppqinfoNext);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQQueueInfos4 * This, IDispatch ** ppcolProperties);
	END_INTERFACE
}  IMSMQQueueInfos4Vtbl;
interface IMSMQQueueInfos4
{
	CONST_VTBL struct IMSMQQueueInfos4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQueueInfos4_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQueueInfos4_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQueueInfos4_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQueueInfos4_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQueueInfos4_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQueueInfos4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQueueInfos4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQueueInfos4_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IMSMQQueueInfos4_Next(This,ppqinfoNext) ( (This)->lpVtbl -> Next(This,ppqinfoNext) )
#define IMSMQQueueInfos4_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#endif
#endif
#ifndef __IMSMQEvent_INTERFACE_DEFINED__
#define __IMSMQEvent_INTERFACE_DEFINED__
extern const IID IID_IMSMQEvent;
typedef struct IMSMQEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  IMSMQEventVtbl;
interface IMSMQEvent
{
	CONST_VTBL struct IMSMQEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IMSMQEvent2_INTERFACE_DEFINED__
#define __IMSMQEvent2_INTERFACE_DEFINED__
extern const IID IID_IMSMQEvent2;
typedef struct IMSMQEvent2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQEvent2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQEvent2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQEvent2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQEvent2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQEvent2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQEvent2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQEvent2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQEvent2 * This, IDispatch ** ppcolProperties);
	END_INTERFACE
}  IMSMQEvent2Vtbl;
interface IMSMQEvent2
{
	CONST_VTBL struct IMSMQEvent2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQEvent2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQEvent2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQEvent2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQEvent2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQEvent2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQEvent2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQEvent2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQEvent2_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#endif
#endif
#ifndef __IMSMQEvent3_INTERFACE_DEFINED__
#define __IMSMQEvent3_INTERFACE_DEFINED__
extern const IID IID_IMSMQEvent3;
typedef struct IMSMQEvent3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQEvent3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQEvent3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQEvent3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQEvent3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQEvent3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQEvent3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQEvent3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQEvent3 * This, IDispatch ** ppcolProperties);
	END_INTERFACE
}  IMSMQEvent3Vtbl;
interface IMSMQEvent3
{
	CONST_VTBL struct IMSMQEvent3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQEvent3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQEvent3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQEvent3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQEvent3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQEvent3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQEvent3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQEvent3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQEvent3_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#endif
#endif
#ifndef __IMSMQTransaction_INTERFACE_DEFINED__
#define __IMSMQTransaction_INTERFACE_DEFINED__
extern const IID IID_IMSMQTransaction;
typedef struct IMSMQTransactionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQTransaction * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQTransaction * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQTransaction * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQTransaction * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQTransaction * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQTransaction * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQTransaction * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Transaction) (IMSMQTransaction * This, long *plTransaction);
	HRESULT(STDMETHODCALLTYPE * Commit) (IMSMQTransaction * This, VARIANT * fRetaining, VARIANT * grfTC, VARIANT * grfRM);
	HRESULT(STDMETHODCALLTYPE * Abort) (IMSMQTransaction * This, VARIANT * fRetaining, VARIANT * fAsync);
	END_INTERFACE
}  IMSMQTransactionVtbl;
interface IMSMQTransaction
{
	CONST_VTBL struct IMSMQTransactionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQTransaction_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQTransaction_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQTransaction_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQTransaction_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQTransaction_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQTransaction_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQTransaction_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQTransaction_get_Transaction(This,plTransaction) ( (This)->lpVtbl -> get_Transaction(This,plTransaction) )
#define IMSMQTransaction_Commit(This,fRetaining,grfTC,grfRM) ( (This)->lpVtbl -> Commit(This,fRetaining,grfTC,grfRM) )
#define IMSMQTransaction_Abort(This,fRetaining,fAsync) ( (This)->lpVtbl -> Abort(This,fRetaining,fAsync) )
#endif
#endif
#ifndef __IMSMQCoordinatedTransactionDispenser_INTERFACE_DEFINED__
#define __IMSMQCoordinatedTransactionDispenser_INTERFACE_DEFINED__
extern const IID IID_IMSMQCoordinatedTransactionDispenser;
typedef struct IMSMQCoordinatedTransactionDispenserVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQCoordinatedTransactionDispenser * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQCoordinatedTransactionDispenser * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQCoordinatedTransactionDispenser * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQCoordinatedTransactionDispenser * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQCoordinatedTransactionDispenser * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQCoordinatedTransactionDispenser * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQCoordinatedTransactionDispenser * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * BeginTransaction) (IMSMQCoordinatedTransactionDispenser * This, IMSMQTransaction ** ptransaction);
	END_INTERFACE
}  IMSMQCoordinatedTransactionDispenserVtbl;
interface IMSMQCoordinatedTransactionDispenser
{
	CONST_VTBL struct IMSMQCoordinatedTransactionDispenserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQCoordinatedTransactionDispenser_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQCoordinatedTransactionDispenser_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQCoordinatedTransactionDispenser_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQCoordinatedTransactionDispenser_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQCoordinatedTransactionDispenser_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQCoordinatedTransactionDispenser_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQCoordinatedTransactionDispenser_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQCoordinatedTransactionDispenser_BeginTransaction(This,ptransaction) ( (This)->lpVtbl -> BeginTransaction(This,ptransaction) )
#endif
#endif
#ifndef __IMSMQTransactionDispenser_INTERFACE_DEFINED__
#define __IMSMQTransactionDispenser_INTERFACE_DEFINED__
extern const IID IID_IMSMQTransactionDispenser;
typedef struct IMSMQTransactionDispenserVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQTransactionDispenser * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQTransactionDispenser * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQTransactionDispenser * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQTransactionDispenser * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQTransactionDispenser * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQTransactionDispenser * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQTransactionDispenser * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * BeginTransaction) (IMSMQTransactionDispenser * This, IMSMQTransaction ** ptransaction);
	END_INTERFACE
}  IMSMQTransactionDispenserVtbl;
interface IMSMQTransactionDispenser
{
	CONST_VTBL struct IMSMQTransactionDispenserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQTransactionDispenser_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQTransactionDispenser_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQTransactionDispenser_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQTransactionDispenser_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQTransactionDispenser_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQTransactionDispenser_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQTransactionDispenser_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQTransactionDispenser_BeginTransaction(This,ptransaction) ( (This)->lpVtbl -> BeginTransaction(This,ptransaction) )
#endif
#endif
#ifndef __IMSMQQuery2_INTERFACE_DEFINED__
#define __IMSMQQuery2_INTERFACE_DEFINED__
extern const IID IID_IMSMQQuery2;
typedef struct IMSMQQuery2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQuery2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQuery2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQuery2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQuery2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQuery2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQuery2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQuery2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * LookupQueue) (IMSMQQuery2 * This, VARIANT * QueueGuid, VARIANT * ServiceTypeGuid, VARIANT * Label, VARIANT * CreateTime, VARIANT * ModifyTime, VARIANT * RelServiceType, VARIANT * RelLabel, VARIANT * RelCreateTime, VARIANT * RelModifyTime, IMSMQQueueInfos2 ** ppqinfos);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQQuery2 * This, IDispatch ** ppcolProperties);
	END_INTERFACE
}  IMSMQQuery2Vtbl;
interface IMSMQQuery2
{
	CONST_VTBL struct IMSMQQuery2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQuery2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQuery2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQuery2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQuery2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQuery2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQuery2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQuery2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQuery2_LookupQueue(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,ppqinfos) ( (This)->lpVtbl -> LookupQueue(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,ppqinfos) )
#define IMSMQQuery2_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#endif
#endif
#ifndef __IMSMQQuery3_INTERFACE_DEFINED__
#define __IMSMQQuery3_INTERFACE_DEFINED__
extern const IID IID_IMSMQQuery3;
typedef struct IMSMQQuery3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQuery3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQuery3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQuery3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQuery3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQuery3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQuery3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQuery3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * LookupQueue_v2) (IMSMQQuery3 * This, VARIANT * QueueGuid, VARIANT * ServiceTypeGuid, VARIANT * Label, VARIANT * CreateTime, VARIANT * ModifyTime, VARIANT * RelServiceType, VARIANT * RelLabel, VARIANT * RelCreateTime, VARIANT * RelModifyTime, IMSMQQueueInfos3 ** ppqinfos);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQQuery3 * This, IDispatch ** ppcolProperties);
	HRESULT(STDMETHODCALLTYPE * LookupQueue) (IMSMQQuery3 * This, VARIANT * QueueGuid, VARIANT * ServiceTypeGuid, VARIANT * Label, VARIANT * CreateTime, VARIANT * ModifyTime, VARIANT * RelServiceType, VARIANT * RelLabel, VARIANT * RelCreateTime, VARIANT * RelModifyTime, VARIANT * MulticastAddress, VARIANT * RelMulticastAddress, IMSMQQueueInfos3 ** ppqinfos);
	END_INTERFACE
}  IMSMQQuery3Vtbl;
interface IMSMQQuery3
{
	CONST_VTBL struct IMSMQQuery3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQuery3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQuery3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQuery3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQuery3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQuery3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQuery3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQuery3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQuery3_LookupQueue_v2(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,ppqinfos) ( (This)->lpVtbl -> LookupQueue_v2(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,ppqinfos) )
#define IMSMQQuery3_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#define IMSMQQuery3_LookupQueue(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,MulticastAddress,RelMulticastAddress,ppqinfos) ( (This)->lpVtbl -> LookupQueue(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,MulticastAddress,RelMulticastAddress,ppqinfos) )
#endif
#endif
#ifndef __IMSMQQuery4_INTERFACE_DEFINED__
#define __IMSMQQuery4_INTERFACE_DEFINED__
extern const IID IID_IMSMQQuery4;
typedef struct IMSMQQuery4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQuery4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQuery4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQuery4 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQuery4 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQuery4 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQuery4 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQuery4 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * LookupQueue_v2) (IMSMQQuery4 * This, VARIANT * QueueGuid, VARIANT * ServiceTypeGuid, VARIANT * Label, VARIANT * CreateTime, VARIANT * ModifyTime, VARIANT * RelServiceType, VARIANT * RelLabel, VARIANT * RelCreateTime, VARIANT * RelModifyTime, IMSMQQueueInfos4 ** ppqinfos);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQQuery4 * This, IDispatch ** ppcolProperties);
	HRESULT(STDMETHODCALLTYPE * LookupQueue) (IMSMQQuery4 * This, VARIANT * QueueGuid, VARIANT * ServiceTypeGuid, VARIANT * Label, VARIANT * CreateTime, VARIANT * ModifyTime, VARIANT * RelServiceType, VARIANT * RelLabel, VARIANT * RelCreateTime, VARIANT * RelModifyTime, VARIANT * MulticastAddress, VARIANT * RelMulticastAddress, IMSMQQueueInfos4 ** ppqinfos);
	END_INTERFACE
}  IMSMQQuery4Vtbl;
interface IMSMQQuery4
{
	CONST_VTBL struct IMSMQQuery4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQuery4_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQuery4_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQuery4_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQuery4_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQuery4_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQuery4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQuery4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQuery4_LookupQueue_v2(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,ppqinfos) ( (This)->lpVtbl -> LookupQueue_v2(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,ppqinfos) )
#define IMSMQQuery4_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#define IMSMQQuery4_LookupQueue(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,MulticastAddress,RelMulticastAddress,ppqinfos) ( (This)->lpVtbl -> LookupQueue(This,QueueGuid,ServiceTypeGuid,Label,CreateTime,ModifyTime,RelServiceType,RelLabel,RelCreateTime,RelModifyTime,MulticastAddress,RelMulticastAddress,ppqinfos) )
#endif
#endif
extern const CLSID CLSID_MSMQQuery;
#ifndef __IMSMQMessage2_INTERFACE_DEFINED__
#define __IMSMQMessage2_INTERFACE_DEFINED__
extern const IID IID_IMSMQMessage2;
typedef struct IMSMQMessage2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQMessage2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQMessage2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQMessage2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQMessage2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQMessage2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQMessage2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQMessage2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Class) (IMSMQMessage2 * This, long *plClass);
	HRESULT(STDMETHODCALLTYPE * get_PrivLevel) (IMSMQMessage2 * This, long *plPrivLevel);
	HRESULT(STDMETHODCALLTYPE * put_PrivLevel) (IMSMQMessage2 * This, long lPrivLevel);
	HRESULT(STDMETHODCALLTYPE * get_AuthLevel) (IMSMQMessage2 * This, long *plAuthLevel);
	HRESULT(STDMETHODCALLTYPE * put_AuthLevel) (IMSMQMessage2 * This, long lAuthLevel);
	HRESULT(STDMETHODCALLTYPE * get_IsAuthenticated) (IMSMQMessage2 * This, Boolean * pisAuthenticated);
	HRESULT(STDMETHODCALLTYPE * get_Delivery) (IMSMQMessage2 * This, long *plDelivery);
	HRESULT(STDMETHODCALLTYPE * put_Delivery) (IMSMQMessage2 * This, long lDelivery);
	HRESULT(STDMETHODCALLTYPE * get_Trace) (IMSMQMessage2 * This, long *plTrace);
	HRESULT(STDMETHODCALLTYPE * put_Trace) (IMSMQMessage2 * This, long lTrace);
	HRESULT(STDMETHODCALLTYPE * get_Priority) (IMSMQMessage2 * This, long *plPriority);
	HRESULT(STDMETHODCALLTYPE * put_Priority) (IMSMQMessage2 * This, long lPriority);
	HRESULT(STDMETHODCALLTYPE * get_Journal) (IMSMQMessage2 * This, long *plJournal);
	HRESULT(STDMETHODCALLTYPE * put_Journal) (IMSMQMessage2 * This, long lJournal);
	HRESULT(STDMETHODCALLTYPE * get_ResponseQueueInfo_v1) (IMSMQMessage2 * This, IMSMQQueueInfo ** ppqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * putref_ResponseQueueInfo_v1) (IMSMQMessage2 * This, IMSMQQueueInfo * pqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * get_AppSpecific) (IMSMQMessage2 * This, long *plAppSpecific);
	HRESULT(STDMETHODCALLTYPE * put_AppSpecific) (IMSMQMessage2 * This, long lAppSpecific);
	HRESULT(STDMETHODCALLTYPE * get_SourceMachineGuid) (IMSMQMessage2 * This, BSTR * pbstrGuidSrcMachine);
	HRESULT(STDMETHODCALLTYPE * get_BodyLength) (IMSMQMessage2 * This, long *pcbBody);
	HRESULT(STDMETHODCALLTYPE * get_Body) (IMSMQMessage2 * This, VARIANT * pvarBody);
	HRESULT(STDMETHODCALLTYPE * put_Body) (IMSMQMessage2 * This, VARIANT varBody);
	HRESULT(STDMETHODCALLTYPE * get_AdminQueueInfo_v1) (IMSMQMessage2 * This, IMSMQQueueInfo ** ppqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * putref_AdminQueueInfo_v1) (IMSMQMessage2 * This, IMSMQQueueInfo * pqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IMSMQMessage2 * This, VARIANT * pvarMsgId);
	HRESULT(STDMETHODCALLTYPE * get_CorrelationId) (IMSMQMessage2 * This, VARIANT * pvarMsgId);
	HRESULT(STDMETHODCALLTYPE * put_CorrelationId) (IMSMQMessage2 * This, VARIANT varMsgId);
	HRESULT(STDMETHODCALLTYPE * get_Ack) (IMSMQMessage2 * This, long *plAck);
	HRESULT(STDMETHODCALLTYPE * put_Ack) (IMSMQMessage2 * This, long lAck);
	HRESULT(STDMETHODCALLTYPE * get_Label) (IMSMQMessage2 * This, BSTR * pbstrLabel);
	HRESULT(STDMETHODCALLTYPE * put_Label) (IMSMQMessage2 * This, BSTR bstrLabel);
	HRESULT(STDMETHODCALLTYPE * get_MaxTimeToReachQueue) (IMSMQMessage2 * This, long *plMaxTimeToReachQueue);
	HRESULT(STDMETHODCALLTYPE * put_MaxTimeToReachQueue) (IMSMQMessage2 * This, long lMaxTimeToReachQueue);
	HRESULT(STDMETHODCALLTYPE * get_MaxTimeToReceive) (IMSMQMessage2 * This, long *plMaxTimeToReceive);
	HRESULT(STDMETHODCALLTYPE * put_MaxTimeToReceive) (IMSMQMessage2 * This, long lMaxTimeToReceive);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (IMSMQMessage2 * This, long *plHashAlg);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (IMSMQMessage2 * This, long lHashAlg);
	HRESULT(STDMETHODCALLTYPE * get_EncryptAlgorithm) (IMSMQMessage2 * This, long *plEncryptAlg);
	HRESULT(STDMETHODCALLTYPE * put_EncryptAlgorithm) (IMSMQMessage2 * This, long lEncryptAlg);
	HRESULT(STDMETHODCALLTYPE * get_SentTime) (IMSMQMessage2 * This, VARIANT * pvarSentTime);
	HRESULT(STDMETHODCALLTYPE * get_ArrivedTime) (IMSMQMessage2 * This, VARIANT * plArrivedTime);
	HRESULT(STDMETHODCALLTYPE * get_DestinationQueueInfo) (IMSMQMessage2 * This, IMSMQQueueInfo2 ** ppqinfoDest);
	HRESULT(STDMETHODCALLTYPE * get_SenderCertificate) (IMSMQMessage2 * This, VARIANT * pvarSenderCert);
	HRESULT(STDMETHODCALLTYPE * put_SenderCertificate) (IMSMQMessage2 * This, VARIANT varSenderCert);
	HRESULT(STDMETHODCALLTYPE * get_SenderId) (IMSMQMessage2 * This, VARIANT * pvarSenderId);
	HRESULT(STDMETHODCALLTYPE * get_SenderIdType) (IMSMQMessage2 * This, long *plSenderIdType);
	HRESULT(STDMETHODCALLTYPE * put_SenderIdType) (IMSMQMessage2 * This, long lSenderIdType);
	HRESULT(STDMETHODCALLTYPE * Send) (IMSMQMessage2 * This, IMSMQQueue2 * DestinationQueue, VARIANT * Transaction);
	HRESULT(STDMETHODCALLTYPE * AttachCurrentSecurityContext) (IMSMQMessage2 * This);
	HRESULT(STDMETHODCALLTYPE * get_SenderVersion) (IMSMQMessage2 * This, long *plSenderVersion);
	HRESULT(STDMETHODCALLTYPE * get_Extension) (IMSMQMessage2 * This, VARIANT * pvarExtension);
	HRESULT(STDMETHODCALLTYPE * put_Extension) (IMSMQMessage2 * This, VARIANT varExtension);
	HRESULT(STDMETHODCALLTYPE * get_ConnectorTypeGuid) (IMSMQMessage2 * This, BSTR * pbstrGuidConnectorType);
	HRESULT(STDMETHODCALLTYPE * put_ConnectorTypeGuid) (IMSMQMessage2 * This, BSTR bstrGuidConnectorType);
	HRESULT(STDMETHODCALLTYPE * get_TransactionStatusQueueInfo) (IMSMQMessage2 * This, IMSMQQueueInfo2 ** ppqinfoXactStatus);
	HRESULT(STDMETHODCALLTYPE * get_DestinationSymmetricKey) (IMSMQMessage2 * This, VARIANT * pvarDestSymmKey);
	HRESULT(STDMETHODCALLTYPE * put_DestinationSymmetricKey) (IMSMQMessage2 * This, VARIANT varDestSymmKey);
	HRESULT(STDMETHODCALLTYPE * get_Signature) (IMSMQMessage2 * This, VARIANT * pvarSignature);
	HRESULT(STDMETHODCALLTYPE * put_Signature) (IMSMQMessage2 * This, VARIANT varSignature);
	HRESULT(STDMETHODCALLTYPE * get_AuthenticationProviderType) (IMSMQMessage2 * This, long *plAuthProvType);
	HRESULT(STDMETHODCALLTYPE * put_AuthenticationProviderType) (IMSMQMessage2 * This, long lAuthProvType);
	HRESULT(STDMETHODCALLTYPE * get_AuthenticationProviderName) (IMSMQMessage2 * This, BSTR * pbstrAuthProvName);
	HRESULT(STDMETHODCALLTYPE * put_AuthenticationProviderName) (IMSMQMessage2 * This, BSTR bstrAuthProvName);
	HRESULT(STDMETHODCALLTYPE * put_SenderId) (IMSMQMessage2 * This, VARIANT varSenderId);
	HRESULT(STDMETHODCALLTYPE * get_MsgClass) (IMSMQMessage2 * This, long *plMsgClass);
	HRESULT(STDMETHODCALLTYPE * put_MsgClass) (IMSMQMessage2 * This, long lMsgClass);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQMessage2 * This, IDispatch ** ppcolProperties);
	HRESULT(STDMETHODCALLTYPE * get_TransactionId) (IMSMQMessage2 * This, VARIANT * pvarXactId);
	HRESULT(STDMETHODCALLTYPE * get_IsFirstInTransaction) (IMSMQMessage2 * This, Boolean * pisFirstInXact);
	HRESULT(STDMETHODCALLTYPE * get_IsLastInTransaction) (IMSMQMessage2 * This, Boolean * pisLastInXact);
	HRESULT(STDMETHODCALLTYPE * get_ResponseQueueInfo) (IMSMQMessage2 * This, IMSMQQueueInfo2 ** ppqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * putref_ResponseQueueInfo) (IMSMQMessage2 * This, IMSMQQueueInfo2 * pqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * get_AdminQueueInfo) (IMSMQMessage2 * This, IMSMQQueueInfo2 ** ppqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * putref_AdminQueueInfo) (IMSMQMessage2 * This, IMSMQQueueInfo2 * pqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * get_ReceivedAuthenticationLevel) (IMSMQMessage2 * This, short *psReceivedAuthenticationLevel);
	END_INTERFACE
}  IMSMQMessage2Vtbl;
interface IMSMQMessage2
{
	CONST_VTBL struct IMSMQMessage2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQMessage2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQMessage2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQMessage2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQMessage2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQMessage2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQMessage2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQMessage2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQMessage2_get_Class(This,plClass) ( (This)->lpVtbl -> get_Class(This,plClass) )
#define IMSMQMessage2_get_PrivLevel(This,plPrivLevel) ( (This)->lpVtbl -> get_PrivLevel(This,plPrivLevel) )
#define IMSMQMessage2_put_PrivLevel(This,lPrivLevel) ( (This)->lpVtbl -> put_PrivLevel(This,lPrivLevel) )
#define IMSMQMessage2_get_AuthLevel(This,plAuthLevel) ( (This)->lpVtbl -> get_AuthLevel(This,plAuthLevel) )
#define IMSMQMessage2_put_AuthLevel(This,lAuthLevel) ( (This)->lpVtbl -> put_AuthLevel(This,lAuthLevel) )
#define IMSMQMessage2_get_IsAuthenticated(This,pisAuthenticated) ( (This)->lpVtbl -> get_IsAuthenticated(This,pisAuthenticated) )
#define IMSMQMessage2_get_Delivery(This,plDelivery) ( (This)->lpVtbl -> get_Delivery(This,plDelivery) )
#define IMSMQMessage2_put_Delivery(This,lDelivery) ( (This)->lpVtbl -> put_Delivery(This,lDelivery) )
#define IMSMQMessage2_get_Trace(This,plTrace) ( (This)->lpVtbl -> get_Trace(This,plTrace) )
#define IMSMQMessage2_put_Trace(This,lTrace) ( (This)->lpVtbl -> put_Trace(This,lTrace) )
#define IMSMQMessage2_get_Priority(This,plPriority) ( (This)->lpVtbl -> get_Priority(This,plPriority) )
#define IMSMQMessage2_put_Priority(This,lPriority) ( (This)->lpVtbl -> put_Priority(This,lPriority) )
#define IMSMQMessage2_get_Journal(This,plJournal) ( (This)->lpVtbl -> get_Journal(This,plJournal) )
#define IMSMQMessage2_put_Journal(This,lJournal) ( (This)->lpVtbl -> put_Journal(This,lJournal) )
#define IMSMQMessage2_get_ResponseQueueInfo_v1(This,ppqinfoResponse) ( (This)->lpVtbl -> get_ResponseQueueInfo_v1(This,ppqinfoResponse) )
#define IMSMQMessage2_putref_ResponseQueueInfo_v1(This,pqinfoResponse) ( (This)->lpVtbl -> putref_ResponseQueueInfo_v1(This,pqinfoResponse) )
#define IMSMQMessage2_get_AppSpecific(This,plAppSpecific) ( (This)->lpVtbl -> get_AppSpecific(This,plAppSpecific) )
#define IMSMQMessage2_put_AppSpecific(This,lAppSpecific) ( (This)->lpVtbl -> put_AppSpecific(This,lAppSpecific) )
#define IMSMQMessage2_get_SourceMachineGuid(This,pbstrGuidSrcMachine) ( (This)->lpVtbl -> get_SourceMachineGuid(This,pbstrGuidSrcMachine) )
#define IMSMQMessage2_get_BodyLength(This,pcbBody) ( (This)->lpVtbl -> get_BodyLength(This,pcbBody) )
#define IMSMQMessage2_get_Body(This,pvarBody) ( (This)->lpVtbl -> get_Body(This,pvarBody) )
#define IMSMQMessage2_put_Body(This,varBody) ( (This)->lpVtbl -> put_Body(This,varBody) )
#define IMSMQMessage2_get_AdminQueueInfo_v1(This,ppqinfoAdmin) ( (This)->lpVtbl -> get_AdminQueueInfo_v1(This,ppqinfoAdmin) )
#define IMSMQMessage2_putref_AdminQueueInfo_v1(This,pqinfoAdmin) ( (This)->lpVtbl -> putref_AdminQueueInfo_v1(This,pqinfoAdmin) )
#define IMSMQMessage2_get_Id(This,pvarMsgId) ( (This)->lpVtbl -> get_Id(This,pvarMsgId) )
#define IMSMQMessage2_get_CorrelationId(This,pvarMsgId) ( (This)->lpVtbl -> get_CorrelationId(This,pvarMsgId) )
#define IMSMQMessage2_put_CorrelationId(This,varMsgId) ( (This)->lpVtbl -> put_CorrelationId(This,varMsgId) )
#define IMSMQMessage2_get_Ack(This,plAck) ( (This)->lpVtbl -> get_Ack(This,plAck) )
#define IMSMQMessage2_put_Ack(This,lAck) ( (This)->lpVtbl -> put_Ack(This,lAck) )
#define IMSMQMessage2_get_Label(This,pbstrLabel) ( (This)->lpVtbl -> get_Label(This,pbstrLabel) )
#define IMSMQMessage2_put_Label(This,bstrLabel) ( (This)->lpVtbl -> put_Label(This,bstrLabel) )
#define IMSMQMessage2_get_MaxTimeToReachQueue(This,plMaxTimeToReachQueue) ( (This)->lpVtbl -> get_MaxTimeToReachQueue(This,plMaxTimeToReachQueue) )
#define IMSMQMessage2_put_MaxTimeToReachQueue(This,lMaxTimeToReachQueue) ( (This)->lpVtbl -> put_MaxTimeToReachQueue(This,lMaxTimeToReachQueue) )
#define IMSMQMessage2_get_MaxTimeToReceive(This,plMaxTimeToReceive) ( (This)->lpVtbl -> get_MaxTimeToReceive(This,plMaxTimeToReceive) )
#define IMSMQMessage2_put_MaxTimeToReceive(This,lMaxTimeToReceive) ( (This)->lpVtbl -> put_MaxTimeToReceive(This,lMaxTimeToReceive) )
#define IMSMQMessage2_get_HashAlgorithm(This,plHashAlg) ( (This)->lpVtbl -> get_HashAlgorithm(This,plHashAlg) )
#define IMSMQMessage2_put_HashAlgorithm(This,lHashAlg) ( (This)->lpVtbl -> put_HashAlgorithm(This,lHashAlg) )
#define IMSMQMessage2_get_EncryptAlgorithm(This,plEncryptAlg) ( (This)->lpVtbl -> get_EncryptAlgorithm(This,plEncryptAlg) )
#define IMSMQMessage2_put_EncryptAlgorithm(This,lEncryptAlg) ( (This)->lpVtbl -> put_EncryptAlgorithm(This,lEncryptAlg) )
#define IMSMQMessage2_get_SentTime(This,pvarSentTime) ( (This)->lpVtbl -> get_SentTime(This,pvarSentTime) )
#define IMSMQMessage2_get_ArrivedTime(This,plArrivedTime) ( (This)->lpVtbl -> get_ArrivedTime(This,plArrivedTime) )
#define IMSMQMessage2_get_DestinationQueueInfo(This,ppqinfoDest) ( (This)->lpVtbl -> get_DestinationQueueInfo(This,ppqinfoDest) )
#define IMSMQMessage2_get_SenderCertificate(This,pvarSenderCert) ( (This)->lpVtbl -> get_SenderCertificate(This,pvarSenderCert) )
#define IMSMQMessage2_put_SenderCertificate(This,varSenderCert) ( (This)->lpVtbl -> put_SenderCertificate(This,varSenderCert) )
#define IMSMQMessage2_get_SenderId(This,pvarSenderId) ( (This)->lpVtbl -> get_SenderId(This,pvarSenderId) )
#define IMSMQMessage2_get_SenderIdType(This,plSenderIdType) ( (This)->lpVtbl -> get_SenderIdType(This,plSenderIdType) )
#define IMSMQMessage2_put_SenderIdType(This,lSenderIdType) ( (This)->lpVtbl -> put_SenderIdType(This,lSenderIdType) )
#define IMSMQMessage2_Send(This,DestinationQueue,Transaction) ( (This)->lpVtbl -> Send(This,DestinationQueue,Transaction) )
#define IMSMQMessage2_AttachCurrentSecurityContext(This) ( (This)->lpVtbl -> AttachCurrentSecurityContext(This) )
#define IMSMQMessage2_get_SenderVersion(This,plSenderVersion) ( (This)->lpVtbl -> get_SenderVersion(This,plSenderVersion) )
#define IMSMQMessage2_get_Extension(This,pvarExtension) ( (This)->lpVtbl -> get_Extension(This,pvarExtension) )
#define IMSMQMessage2_put_Extension(This,varExtension) ( (This)->lpVtbl -> put_Extension(This,varExtension) )
#define IMSMQMessage2_get_ConnectorTypeGuid(This,pbstrGuidConnectorType) ( (This)->lpVtbl -> get_ConnectorTypeGuid(This,pbstrGuidConnectorType) )
#define IMSMQMessage2_put_ConnectorTypeGuid(This,bstrGuidConnectorType) ( (This)->lpVtbl -> put_ConnectorTypeGuid(This,bstrGuidConnectorType) )
#define IMSMQMessage2_get_TransactionStatusQueueInfo(This,ppqinfoXactStatus) ( (This)->lpVtbl -> get_TransactionStatusQueueInfo(This,ppqinfoXactStatus) )
#define IMSMQMessage2_get_DestinationSymmetricKey(This,pvarDestSymmKey) ( (This)->lpVtbl -> get_DestinationSymmetricKey(This,pvarDestSymmKey) )
#define IMSMQMessage2_put_DestinationSymmetricKey(This,varDestSymmKey) ( (This)->lpVtbl -> put_DestinationSymmetricKey(This,varDestSymmKey) )
#define IMSMQMessage2_get_Signature(This,pvarSignature) ( (This)->lpVtbl -> get_Signature(This,pvarSignature) )
#define IMSMQMessage2_put_Signature(This,varSignature) ( (This)->lpVtbl -> put_Signature(This,varSignature) )
#define IMSMQMessage2_get_AuthenticationProviderType(This,plAuthProvType) ( (This)->lpVtbl -> get_AuthenticationProviderType(This,plAuthProvType) )
#define IMSMQMessage2_put_AuthenticationProviderType(This,lAuthProvType) ( (This)->lpVtbl -> put_AuthenticationProviderType(This,lAuthProvType) )
#define IMSMQMessage2_get_AuthenticationProviderName(This,pbstrAuthProvName) ( (This)->lpVtbl -> get_AuthenticationProviderName(This,pbstrAuthProvName) )
#define IMSMQMessage2_put_AuthenticationProviderName(This,bstrAuthProvName) ( (This)->lpVtbl -> put_AuthenticationProviderName(This,bstrAuthProvName) )
#define IMSMQMessage2_put_SenderId(This,varSenderId) ( (This)->lpVtbl -> put_SenderId(This,varSenderId) )
#define IMSMQMessage2_get_MsgClass(This,plMsgClass) ( (This)->lpVtbl -> get_MsgClass(This,plMsgClass) )
#define IMSMQMessage2_put_MsgClass(This,lMsgClass) ( (This)->lpVtbl -> put_MsgClass(This,lMsgClass) )
#define IMSMQMessage2_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#define IMSMQMessage2_get_TransactionId(This,pvarXactId) ( (This)->lpVtbl -> get_TransactionId(This,pvarXactId) )
#define IMSMQMessage2_get_IsFirstInTransaction(This,pisFirstInXact) ( (This)->lpVtbl -> get_IsFirstInTransaction(This,pisFirstInXact) )
#define IMSMQMessage2_get_IsLastInTransaction(This,pisLastInXact) ( (This)->lpVtbl -> get_IsLastInTransaction(This,pisLastInXact) )
#define IMSMQMessage2_get_ResponseQueueInfo(This,ppqinfoResponse) ( (This)->lpVtbl -> get_ResponseQueueInfo(This,ppqinfoResponse) )
#define IMSMQMessage2_putref_ResponseQueueInfo(This,pqinfoResponse) ( (This)->lpVtbl -> putref_ResponseQueueInfo(This,pqinfoResponse) )
#define IMSMQMessage2_get_AdminQueueInfo(This,ppqinfoAdmin) ( (This)->lpVtbl -> get_AdminQueueInfo(This,ppqinfoAdmin) )
#define IMSMQMessage2_putref_AdminQueueInfo(This,pqinfoAdmin) ( (This)->lpVtbl -> putref_AdminQueueInfo(This,pqinfoAdmin) )
#define IMSMQMessage2_get_ReceivedAuthenticationLevel(This,psReceivedAuthenticationLevel) ( (This)->lpVtbl -> get_ReceivedAuthenticationLevel(This,psReceivedAuthenticationLevel) )
#endif
#endif
#ifndef __IMSMQMessage3_INTERFACE_DEFINED__
#define __IMSMQMessage3_INTERFACE_DEFINED__
extern const IID IID_IMSMQMessage3;
typedef struct IMSMQMessage3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQMessage3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQMessage3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQMessage3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQMessage3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQMessage3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQMessage3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQMessage3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Class) (IMSMQMessage3 * This, long *plClass);
	HRESULT(STDMETHODCALLTYPE * get_PrivLevel) (IMSMQMessage3 * This, long *plPrivLevel);
	HRESULT(STDMETHODCALLTYPE * put_PrivLevel) (IMSMQMessage3 * This, long lPrivLevel);
	HRESULT(STDMETHODCALLTYPE * get_AuthLevel) (IMSMQMessage3 * This, long *plAuthLevel);
	HRESULT(STDMETHODCALLTYPE * put_AuthLevel) (IMSMQMessage3 * This, long lAuthLevel);
	HRESULT(STDMETHODCALLTYPE * get_IsAuthenticated) (IMSMQMessage3 * This, Boolean * pisAuthenticated);
	HRESULT(STDMETHODCALLTYPE * get_Delivery) (IMSMQMessage3 * This, long *plDelivery);
	HRESULT(STDMETHODCALLTYPE * put_Delivery) (IMSMQMessage3 * This, long lDelivery);
	HRESULT(STDMETHODCALLTYPE * get_Trace) (IMSMQMessage3 * This, long *plTrace);
	HRESULT(STDMETHODCALLTYPE * put_Trace) (IMSMQMessage3 * This, long lTrace);
	HRESULT(STDMETHODCALLTYPE * get_Priority) (IMSMQMessage3 * This, long *plPriority);
	HRESULT(STDMETHODCALLTYPE * put_Priority) (IMSMQMessage3 * This, long lPriority);
	HRESULT(STDMETHODCALLTYPE * get_Journal) (IMSMQMessage3 * This, long *plJournal);
	HRESULT(STDMETHODCALLTYPE * put_Journal) (IMSMQMessage3 * This, long lJournal);
	HRESULT(STDMETHODCALLTYPE * get_ResponseQueueInfo_v1) (IMSMQMessage3 * This, IMSMQQueueInfo ** ppqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * putref_ResponseQueueInfo_v1) (IMSMQMessage3 * This, IMSMQQueueInfo * pqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * get_AppSpecific) (IMSMQMessage3 * This, long *plAppSpecific);
	HRESULT(STDMETHODCALLTYPE * put_AppSpecific) (IMSMQMessage3 * This, long lAppSpecific);
	HRESULT(STDMETHODCALLTYPE * get_SourceMachineGuid) (IMSMQMessage3 * This, BSTR * pbstrGuidSrcMachine);
	HRESULT(STDMETHODCALLTYPE * get_BodyLength) (IMSMQMessage3 * This, long *pcbBody);
	HRESULT(STDMETHODCALLTYPE * get_Body) (IMSMQMessage3 * This, VARIANT * pvarBody);
	HRESULT(STDMETHODCALLTYPE * put_Body) (IMSMQMessage3 * This, VARIANT varBody);
	HRESULT(STDMETHODCALLTYPE * get_AdminQueueInfo_v1) (IMSMQMessage3 * This, IMSMQQueueInfo ** ppqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * putref_AdminQueueInfo_v1) (IMSMQMessage3 * This, IMSMQQueueInfo * pqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IMSMQMessage3 * This, VARIANT * pvarMsgId);
	HRESULT(STDMETHODCALLTYPE * get_CorrelationId) (IMSMQMessage3 * This, VARIANT * pvarMsgId);
	HRESULT(STDMETHODCALLTYPE * put_CorrelationId) (IMSMQMessage3 * This, VARIANT varMsgId);
	HRESULT(STDMETHODCALLTYPE * get_Ack) (IMSMQMessage3 * This, long *plAck);
	HRESULT(STDMETHODCALLTYPE * put_Ack) (IMSMQMessage3 * This, long lAck);
	HRESULT(STDMETHODCALLTYPE * get_Label) (IMSMQMessage3 * This, BSTR * pbstrLabel);
	HRESULT(STDMETHODCALLTYPE * put_Label) (IMSMQMessage3 * This, BSTR bstrLabel);
	HRESULT(STDMETHODCALLTYPE * get_MaxTimeToReachQueue) (IMSMQMessage3 * This, long *plMaxTimeToReachQueue);
	HRESULT(STDMETHODCALLTYPE * put_MaxTimeToReachQueue) (IMSMQMessage3 * This, long lMaxTimeToReachQueue);
	HRESULT(STDMETHODCALLTYPE * get_MaxTimeToReceive) (IMSMQMessage3 * This, long *plMaxTimeToReceive);
	HRESULT(STDMETHODCALLTYPE * put_MaxTimeToReceive) (IMSMQMessage3 * This, long lMaxTimeToReceive);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (IMSMQMessage3 * This, long *plHashAlg);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (IMSMQMessage3 * This, long lHashAlg);
	HRESULT(STDMETHODCALLTYPE * get_EncryptAlgorithm) (IMSMQMessage3 * This, long *plEncryptAlg);
	HRESULT(STDMETHODCALLTYPE * put_EncryptAlgorithm) (IMSMQMessage3 * This, long lEncryptAlg);
	HRESULT(STDMETHODCALLTYPE * get_SentTime) (IMSMQMessage3 * This, VARIANT * pvarSentTime);
	HRESULT(STDMETHODCALLTYPE * get_ArrivedTime) (IMSMQMessage3 * This, VARIANT * plArrivedTime);
	HRESULT(STDMETHODCALLTYPE * get_DestinationQueueInfo) (IMSMQMessage3 * This, IMSMQQueueInfo3 ** ppqinfoDest);
	HRESULT(STDMETHODCALLTYPE * get_SenderCertificate) (IMSMQMessage3 * This, VARIANT * pvarSenderCert);
	HRESULT(STDMETHODCALLTYPE * put_SenderCertificate) (IMSMQMessage3 * This, VARIANT varSenderCert);
	HRESULT(STDMETHODCALLTYPE * get_SenderId) (IMSMQMessage3 * This, VARIANT * pvarSenderId);
	HRESULT(STDMETHODCALLTYPE * get_SenderIdType) (IMSMQMessage3 * This, long *plSenderIdType);
	HRESULT(STDMETHODCALLTYPE * put_SenderIdType) (IMSMQMessage3 * This, long lSenderIdType);
	HRESULT(STDMETHODCALLTYPE * Send) (IMSMQMessage3 * This, IDispatch * DestinationQueue, VARIANT * Transaction);
	HRESULT(STDMETHODCALLTYPE * AttachCurrentSecurityContext) (IMSMQMessage3 * This);
	HRESULT(STDMETHODCALLTYPE * get_SenderVersion) (IMSMQMessage3 * This, long *plSenderVersion);
	HRESULT(STDMETHODCALLTYPE * get_Extension) (IMSMQMessage3 * This, VARIANT * pvarExtension);
	HRESULT(STDMETHODCALLTYPE * put_Extension) (IMSMQMessage3 * This, VARIANT varExtension);
	HRESULT(STDMETHODCALLTYPE * get_ConnectorTypeGuid) (IMSMQMessage3 * This, BSTR * pbstrGuidConnectorType);
	HRESULT(STDMETHODCALLTYPE * put_ConnectorTypeGuid) (IMSMQMessage3 * This, BSTR bstrGuidConnectorType);
	HRESULT(STDMETHODCALLTYPE * get_TransactionStatusQueueInfo) (IMSMQMessage3 * This, IMSMQQueueInfo3 ** ppqinfoXactStatus);
	HRESULT(STDMETHODCALLTYPE * get_DestinationSymmetricKey) (IMSMQMessage3 * This, VARIANT * pvarDestSymmKey);
	HRESULT(STDMETHODCALLTYPE * put_DestinationSymmetricKey) (IMSMQMessage3 * This, VARIANT varDestSymmKey);
	HRESULT(STDMETHODCALLTYPE * get_Signature) (IMSMQMessage3 * This, VARIANT * pvarSignature);
	HRESULT(STDMETHODCALLTYPE * put_Signature) (IMSMQMessage3 * This, VARIANT varSignature);
	HRESULT(STDMETHODCALLTYPE * get_AuthenticationProviderType) (IMSMQMessage3 * This, long *plAuthProvType);
	HRESULT(STDMETHODCALLTYPE * put_AuthenticationProviderType) (IMSMQMessage3 * This, long lAuthProvType);
	HRESULT(STDMETHODCALLTYPE * get_AuthenticationProviderName) (IMSMQMessage3 * This, BSTR * pbstrAuthProvName);
	HRESULT(STDMETHODCALLTYPE * put_AuthenticationProviderName) (IMSMQMessage3 * This, BSTR bstrAuthProvName);
	HRESULT(STDMETHODCALLTYPE * put_SenderId) (IMSMQMessage3 * This, VARIANT varSenderId);
	HRESULT(STDMETHODCALLTYPE * get_MsgClass) (IMSMQMessage3 * This, long *plMsgClass);
	HRESULT(STDMETHODCALLTYPE * put_MsgClass) (IMSMQMessage3 * This, long lMsgClass);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQMessage3 * This, IDispatch ** ppcolProperties);
	HRESULT(STDMETHODCALLTYPE * get_TransactionId) (IMSMQMessage3 * This, VARIANT * pvarXactId);
	HRESULT(STDMETHODCALLTYPE * get_IsFirstInTransaction) (IMSMQMessage3 * This, Boolean * pisFirstInXact);
	HRESULT(STDMETHODCALLTYPE * get_IsLastInTransaction) (IMSMQMessage3 * This, Boolean * pisLastInXact);
	HRESULT(STDMETHODCALLTYPE * get_ResponseQueueInfo_v2) (IMSMQMessage3 * This, IMSMQQueueInfo2 ** ppqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * putref_ResponseQueueInfo_v2) (IMSMQMessage3 * This, IMSMQQueueInfo2 * pqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * get_AdminQueueInfo_v2) (IMSMQMessage3 * This, IMSMQQueueInfo2 ** ppqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * putref_AdminQueueInfo_v2) (IMSMQMessage3 * This, IMSMQQueueInfo2 * pqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * get_ReceivedAuthenticationLevel) (IMSMQMessage3 * This, short *psReceivedAuthenticationLevel);
	HRESULT(STDMETHODCALLTYPE * get_ResponseQueueInfo) (IMSMQMessage3 * This, IMSMQQueueInfo3 ** ppqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * putref_ResponseQueueInfo) (IMSMQMessage3 * This, IMSMQQueueInfo3 * pqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * get_AdminQueueInfo) (IMSMQMessage3 * This, IMSMQQueueInfo3 ** ppqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * putref_AdminQueueInfo) (IMSMQMessage3 * This, IMSMQQueueInfo3 * pqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * get_ResponseDestination) (IMSMQMessage3 * This, IDispatch ** ppdestResponse);
	HRESULT(STDMETHODCALLTYPE * putref_ResponseDestination) (IMSMQMessage3 * This, IDispatch * pdestResponse);
	HRESULT(STDMETHODCALLTYPE * get_Destination) (IMSMQMessage3 * This, IDispatch ** ppdestDestination);
	HRESULT(STDMETHODCALLTYPE * get_LookupId) (IMSMQMessage3 * This, VARIANT * pvarLookupId);
	HRESULT(STDMETHODCALLTYPE * get_IsAuthenticated2) (IMSMQMessage3 * This, VARIANT_BOOL * pisAuthenticated);
	HRESULT(STDMETHODCALLTYPE * get_IsFirstInTransaction2) (IMSMQMessage3 * This, VARIANT_BOOL * pisFirstInXact);
	HRESULT(STDMETHODCALLTYPE * get_IsLastInTransaction2) (IMSMQMessage3 * This, VARIANT_BOOL * pisLastInXact);
	HRESULT(STDMETHODCALLTYPE * AttachCurrentSecurityContext2) (IMSMQMessage3 * This);
	HRESULT(STDMETHODCALLTYPE * get_SoapEnvelope) (IMSMQMessage3 * This, BSTR * pbstrSoapEnvelope);
	HRESULT(STDMETHODCALLTYPE * get_CompoundMessage) (IMSMQMessage3 * This, VARIANT * pvarCompoundMessage);
	HRESULT(STDMETHODCALLTYPE * put_SoapHeader) (IMSMQMessage3 * This, BSTR bstrSoapHeader);
	HRESULT(STDMETHODCALLTYPE * put_SoapBody) (IMSMQMessage3 * This, BSTR bstrSoapBody);
	END_INTERFACE
}  IMSMQMessage3Vtbl;
interface IMSMQMessage3
{
	CONST_VTBL struct IMSMQMessage3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQMessage3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQMessage3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQMessage3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQMessage3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQMessage3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQMessage3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQMessage3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQMessage3_get_Class(This,plClass) ( (This)->lpVtbl -> get_Class(This,plClass) )
#define IMSMQMessage3_get_PrivLevel(This,plPrivLevel) ( (This)->lpVtbl -> get_PrivLevel(This,plPrivLevel) )
#define IMSMQMessage3_put_PrivLevel(This,lPrivLevel) ( (This)->lpVtbl -> put_PrivLevel(This,lPrivLevel) )
#define IMSMQMessage3_get_AuthLevel(This,plAuthLevel) ( (This)->lpVtbl -> get_AuthLevel(This,plAuthLevel) )
#define IMSMQMessage3_put_AuthLevel(This,lAuthLevel) ( (This)->lpVtbl -> put_AuthLevel(This,lAuthLevel) )
#define IMSMQMessage3_get_IsAuthenticated(This,pisAuthenticated) ( (This)->lpVtbl -> get_IsAuthenticated(This,pisAuthenticated) )
#define IMSMQMessage3_get_Delivery(This,plDelivery) ( (This)->lpVtbl -> get_Delivery(This,plDelivery) )
#define IMSMQMessage3_put_Delivery(This,lDelivery) ( (This)->lpVtbl -> put_Delivery(This,lDelivery) )
#define IMSMQMessage3_get_Trace(This,plTrace) ( (This)->lpVtbl -> get_Trace(This,plTrace) )
#define IMSMQMessage3_put_Trace(This,lTrace) ( (This)->lpVtbl -> put_Trace(This,lTrace) )
#define IMSMQMessage3_get_Priority(This,plPriority) ( (This)->lpVtbl -> get_Priority(This,plPriority) )
#define IMSMQMessage3_put_Priority(This,lPriority) ( (This)->lpVtbl -> put_Priority(This,lPriority) )
#define IMSMQMessage3_get_Journal(This,plJournal) ( (This)->lpVtbl -> get_Journal(This,plJournal) )
#define IMSMQMessage3_put_Journal(This,lJournal) ( (This)->lpVtbl -> put_Journal(This,lJournal) )
#define IMSMQMessage3_get_ResponseQueueInfo_v1(This,ppqinfoResponse) ( (This)->lpVtbl -> get_ResponseQueueInfo_v1(This,ppqinfoResponse) )
#define IMSMQMessage3_putref_ResponseQueueInfo_v1(This,pqinfoResponse) ( (This)->lpVtbl -> putref_ResponseQueueInfo_v1(This,pqinfoResponse) )
#define IMSMQMessage3_get_AppSpecific(This,plAppSpecific) ( (This)->lpVtbl -> get_AppSpecific(This,plAppSpecific) )
#define IMSMQMessage3_put_AppSpecific(This,lAppSpecific) ( (This)->lpVtbl -> put_AppSpecific(This,lAppSpecific) )
#define IMSMQMessage3_get_SourceMachineGuid(This,pbstrGuidSrcMachine) ( (This)->lpVtbl -> get_SourceMachineGuid(This,pbstrGuidSrcMachine) )
#define IMSMQMessage3_get_BodyLength(This,pcbBody) ( (This)->lpVtbl -> get_BodyLength(This,pcbBody) )
#define IMSMQMessage3_get_Body(This,pvarBody) ( (This)->lpVtbl -> get_Body(This,pvarBody) )
#define IMSMQMessage3_put_Body(This,varBody) ( (This)->lpVtbl -> put_Body(This,varBody) )
#define IMSMQMessage3_get_AdminQueueInfo_v1(This,ppqinfoAdmin) ( (This)->lpVtbl -> get_AdminQueueInfo_v1(This,ppqinfoAdmin) )
#define IMSMQMessage3_putref_AdminQueueInfo_v1(This,pqinfoAdmin) ( (This)->lpVtbl -> putref_AdminQueueInfo_v1(This,pqinfoAdmin) )
#define IMSMQMessage3_get_Id(This,pvarMsgId) ( (This)->lpVtbl -> get_Id(This,pvarMsgId) )
#define IMSMQMessage3_get_CorrelationId(This,pvarMsgId) ( (This)->lpVtbl -> get_CorrelationId(This,pvarMsgId) )
#define IMSMQMessage3_put_CorrelationId(This,varMsgId) ( (This)->lpVtbl -> put_CorrelationId(This,varMsgId) )
#define IMSMQMessage3_get_Ack(This,plAck) ( (This)->lpVtbl -> get_Ack(This,plAck) )
#define IMSMQMessage3_put_Ack(This,lAck) ( (This)->lpVtbl -> put_Ack(This,lAck) )
#define IMSMQMessage3_get_Label(This,pbstrLabel) ( (This)->lpVtbl -> get_Label(This,pbstrLabel) )
#define IMSMQMessage3_put_Label(This,bstrLabel) ( (This)->lpVtbl -> put_Label(This,bstrLabel) )
#define IMSMQMessage3_get_MaxTimeToReachQueue(This,plMaxTimeToReachQueue) ( (This)->lpVtbl -> get_MaxTimeToReachQueue(This,plMaxTimeToReachQueue) )
#define IMSMQMessage3_put_MaxTimeToReachQueue(This,lMaxTimeToReachQueue) ( (This)->lpVtbl -> put_MaxTimeToReachQueue(This,lMaxTimeToReachQueue) )
#define IMSMQMessage3_get_MaxTimeToReceive(This,plMaxTimeToReceive) ( (This)->lpVtbl -> get_MaxTimeToReceive(This,plMaxTimeToReceive) )
#define IMSMQMessage3_put_MaxTimeToReceive(This,lMaxTimeToReceive) ( (This)->lpVtbl -> put_MaxTimeToReceive(This,lMaxTimeToReceive) )
#define IMSMQMessage3_get_HashAlgorithm(This,plHashAlg) ( (This)->lpVtbl -> get_HashAlgorithm(This,plHashAlg) )
#define IMSMQMessage3_put_HashAlgorithm(This,lHashAlg) ( (This)->lpVtbl -> put_HashAlgorithm(This,lHashAlg) )
#define IMSMQMessage3_get_EncryptAlgorithm(This,plEncryptAlg) ( (This)->lpVtbl -> get_EncryptAlgorithm(This,plEncryptAlg) )
#define IMSMQMessage3_put_EncryptAlgorithm(This,lEncryptAlg) ( (This)->lpVtbl -> put_EncryptAlgorithm(This,lEncryptAlg) )
#define IMSMQMessage3_get_SentTime(This,pvarSentTime) ( (This)->lpVtbl -> get_SentTime(This,pvarSentTime) )
#define IMSMQMessage3_get_ArrivedTime(This,plArrivedTime) ( (This)->lpVtbl -> get_ArrivedTime(This,plArrivedTime) )
#define IMSMQMessage3_get_DestinationQueueInfo(This,ppqinfoDest) ( (This)->lpVtbl -> get_DestinationQueueInfo(This,ppqinfoDest) )
#define IMSMQMessage3_get_SenderCertificate(This,pvarSenderCert) ( (This)->lpVtbl -> get_SenderCertificate(This,pvarSenderCert) )
#define IMSMQMessage3_put_SenderCertificate(This,varSenderCert) ( (This)->lpVtbl -> put_SenderCertificate(This,varSenderCert) )
#define IMSMQMessage3_get_SenderId(This,pvarSenderId) ( (This)->lpVtbl -> get_SenderId(This,pvarSenderId) )
#define IMSMQMessage3_get_SenderIdType(This,plSenderIdType) ( (This)->lpVtbl -> get_SenderIdType(This,plSenderIdType) )
#define IMSMQMessage3_put_SenderIdType(This,lSenderIdType) ( (This)->lpVtbl -> put_SenderIdType(This,lSenderIdType) )
#define IMSMQMessage3_Send(This,DestinationQueue,Transaction) ( (This)->lpVtbl -> Send(This,DestinationQueue,Transaction) )
#define IMSMQMessage3_AttachCurrentSecurityContext(This) ( (This)->lpVtbl -> AttachCurrentSecurityContext(This) )
#define IMSMQMessage3_get_SenderVersion(This,plSenderVersion) ( (This)->lpVtbl -> get_SenderVersion(This,plSenderVersion) )
#define IMSMQMessage3_get_Extension(This,pvarExtension) ( (This)->lpVtbl -> get_Extension(This,pvarExtension) )
#define IMSMQMessage3_put_Extension(This,varExtension) ( (This)->lpVtbl -> put_Extension(This,varExtension) )
#define IMSMQMessage3_get_ConnectorTypeGuid(This,pbstrGuidConnectorType) ( (This)->lpVtbl -> get_ConnectorTypeGuid(This,pbstrGuidConnectorType) )
#define IMSMQMessage3_put_ConnectorTypeGuid(This,bstrGuidConnectorType) ( (This)->lpVtbl -> put_ConnectorTypeGuid(This,bstrGuidConnectorType) )
#define IMSMQMessage3_get_TransactionStatusQueueInfo(This,ppqinfoXactStatus) ( (This)->lpVtbl -> get_TransactionStatusQueueInfo(This,ppqinfoXactStatus) )
#define IMSMQMessage3_get_DestinationSymmetricKey(This,pvarDestSymmKey) ( (This)->lpVtbl -> get_DestinationSymmetricKey(This,pvarDestSymmKey) )
#define IMSMQMessage3_put_DestinationSymmetricKey(This,varDestSymmKey) ( (This)->lpVtbl -> put_DestinationSymmetricKey(This,varDestSymmKey) )
#define IMSMQMessage3_get_Signature(This,pvarSignature) ( (This)->lpVtbl -> get_Signature(This,pvarSignature) )
#define IMSMQMessage3_put_Signature(This,varSignature) ( (This)->lpVtbl -> put_Signature(This,varSignature) )
#define IMSMQMessage3_get_AuthenticationProviderType(This,plAuthProvType) ( (This)->lpVtbl -> get_AuthenticationProviderType(This,plAuthProvType) )
#define IMSMQMessage3_put_AuthenticationProviderType(This,lAuthProvType) ( (This)->lpVtbl -> put_AuthenticationProviderType(This,lAuthProvType) )
#define IMSMQMessage3_get_AuthenticationProviderName(This,pbstrAuthProvName) ( (This)->lpVtbl -> get_AuthenticationProviderName(This,pbstrAuthProvName) )
#define IMSMQMessage3_put_AuthenticationProviderName(This,bstrAuthProvName) ( (This)->lpVtbl -> put_AuthenticationProviderName(This,bstrAuthProvName) )
#define IMSMQMessage3_put_SenderId(This,varSenderId) ( (This)->lpVtbl -> put_SenderId(This,varSenderId) )
#define IMSMQMessage3_get_MsgClass(This,plMsgClass) ( (This)->lpVtbl -> get_MsgClass(This,plMsgClass) )
#define IMSMQMessage3_put_MsgClass(This,lMsgClass) ( (This)->lpVtbl -> put_MsgClass(This,lMsgClass) )
#define IMSMQMessage3_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#define IMSMQMessage3_get_TransactionId(This,pvarXactId) ( (This)->lpVtbl -> get_TransactionId(This,pvarXactId) )
#define IMSMQMessage3_get_IsFirstInTransaction(This,pisFirstInXact) ( (This)->lpVtbl -> get_IsFirstInTransaction(This,pisFirstInXact) )
#define IMSMQMessage3_get_IsLastInTransaction(This,pisLastInXact) ( (This)->lpVtbl -> get_IsLastInTransaction(This,pisLastInXact) )
#define IMSMQMessage3_get_ResponseQueueInfo_v2(This,ppqinfoResponse) ( (This)->lpVtbl -> get_ResponseQueueInfo_v2(This,ppqinfoResponse) )
#define IMSMQMessage3_putref_ResponseQueueInfo_v2(This,pqinfoResponse) ( (This)->lpVtbl -> putref_ResponseQueueInfo_v2(This,pqinfoResponse) )
#define IMSMQMessage3_get_AdminQueueInfo_v2(This,ppqinfoAdmin) ( (This)->lpVtbl -> get_AdminQueueInfo_v2(This,ppqinfoAdmin) )
#define IMSMQMessage3_putref_AdminQueueInfo_v2(This,pqinfoAdmin) ( (This)->lpVtbl -> putref_AdminQueueInfo_v2(This,pqinfoAdmin) )
#define IMSMQMessage3_get_ReceivedAuthenticationLevel(This,psReceivedAuthenticationLevel) ( (This)->lpVtbl -> get_ReceivedAuthenticationLevel(This,psReceivedAuthenticationLevel) )
#define IMSMQMessage3_get_ResponseQueueInfo(This,ppqinfoResponse) ( (This)->lpVtbl -> get_ResponseQueueInfo(This,ppqinfoResponse) )
#define IMSMQMessage3_putref_ResponseQueueInfo(This,pqinfoResponse) ( (This)->lpVtbl -> putref_ResponseQueueInfo(This,pqinfoResponse) )
#define IMSMQMessage3_get_AdminQueueInfo(This,ppqinfoAdmin) ( (This)->lpVtbl -> get_AdminQueueInfo(This,ppqinfoAdmin) )
#define IMSMQMessage3_putref_AdminQueueInfo(This,pqinfoAdmin) ( (This)->lpVtbl -> putref_AdminQueueInfo(This,pqinfoAdmin) )
#define IMSMQMessage3_get_ResponseDestination(This,ppdestResponse) ( (This)->lpVtbl -> get_ResponseDestination(This,ppdestResponse) )
#define IMSMQMessage3_putref_ResponseDestination(This,pdestResponse) ( (This)->lpVtbl -> putref_ResponseDestination(This,pdestResponse) )
#define IMSMQMessage3_get_Destination(This,ppdestDestination) ( (This)->lpVtbl -> get_Destination(This,ppdestDestination) )
#define IMSMQMessage3_get_LookupId(This,pvarLookupId) ( (This)->lpVtbl -> get_LookupId(This,pvarLookupId) )
#define IMSMQMessage3_get_IsAuthenticated2(This,pisAuthenticated) ( (This)->lpVtbl -> get_IsAuthenticated2(This,pisAuthenticated) )
#define IMSMQMessage3_get_IsFirstInTransaction2(This,pisFirstInXact) ( (This)->lpVtbl -> get_IsFirstInTransaction2(This,pisFirstInXact) )
#define IMSMQMessage3_get_IsLastInTransaction2(This,pisLastInXact) ( (This)->lpVtbl -> get_IsLastInTransaction2(This,pisLastInXact) )
#define IMSMQMessage3_AttachCurrentSecurityContext2(This) ( (This)->lpVtbl -> AttachCurrentSecurityContext2(This) )
#define IMSMQMessage3_get_SoapEnvelope(This,pbstrSoapEnvelope) ( (This)->lpVtbl -> get_SoapEnvelope(This,pbstrSoapEnvelope) )
#define IMSMQMessage3_get_CompoundMessage(This,pvarCompoundMessage) ( (This)->lpVtbl -> get_CompoundMessage(This,pvarCompoundMessage) )
#define IMSMQMessage3_put_SoapHeader(This,bstrSoapHeader) ( (This)->lpVtbl -> put_SoapHeader(This,bstrSoapHeader) )
#define IMSMQMessage3_put_SoapBody(This,bstrSoapBody) ( (This)->lpVtbl -> put_SoapBody(This,bstrSoapBody) )
#endif
#endif
#ifndef __IMSMQMessage4_INTERFACE_DEFINED__
#define __IMSMQMessage4_INTERFACE_DEFINED__
extern const IID IID_IMSMQMessage4;
typedef struct IMSMQMessage4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQMessage4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQMessage4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQMessage4 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQMessage4 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQMessage4 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQMessage4 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQMessage4 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Class) (IMSMQMessage4 * This, long *plClass);
	HRESULT(STDMETHODCALLTYPE * get_PrivLevel) (IMSMQMessage4 * This, long *plPrivLevel);
	HRESULT(STDMETHODCALLTYPE * put_PrivLevel) (IMSMQMessage4 * This, long lPrivLevel);
	HRESULT(STDMETHODCALLTYPE * get_AuthLevel) (IMSMQMessage4 * This, long *plAuthLevel);
	HRESULT(STDMETHODCALLTYPE * put_AuthLevel) (IMSMQMessage4 * This, long lAuthLevel);
	HRESULT(STDMETHODCALLTYPE * get_IsAuthenticated) (IMSMQMessage4 * This, Boolean * pisAuthenticated);
	HRESULT(STDMETHODCALLTYPE * get_Delivery) (IMSMQMessage4 * This, long *plDelivery);
	HRESULT(STDMETHODCALLTYPE * put_Delivery) (IMSMQMessage4 * This, long lDelivery);
	HRESULT(STDMETHODCALLTYPE * get_Trace) (IMSMQMessage4 * This, long *plTrace);
	HRESULT(STDMETHODCALLTYPE * put_Trace) (IMSMQMessage4 * This, long lTrace);
	HRESULT(STDMETHODCALLTYPE * get_Priority) (IMSMQMessage4 * This, long *plPriority);
	HRESULT(STDMETHODCALLTYPE * put_Priority) (IMSMQMessage4 * This, long lPriority);
	HRESULT(STDMETHODCALLTYPE * get_Journal) (IMSMQMessage4 * This, long *plJournal);
	HRESULT(STDMETHODCALLTYPE * put_Journal) (IMSMQMessage4 * This, long lJournal);
	HRESULT(STDMETHODCALLTYPE * get_ResponseQueueInfo_v1) (IMSMQMessage4 * This, IMSMQQueueInfo ** ppqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * putref_ResponseQueueInfo_v1) (IMSMQMessage4 * This, IMSMQQueueInfo * pqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * get_AppSpecific) (IMSMQMessage4 * This, long *plAppSpecific);
	HRESULT(STDMETHODCALLTYPE * put_AppSpecific) (IMSMQMessage4 * This, long lAppSpecific);
	HRESULT(STDMETHODCALLTYPE * get_SourceMachineGuid) (IMSMQMessage4 * This, BSTR * pbstrGuidSrcMachine);
	HRESULT(STDMETHODCALLTYPE * get_BodyLength) (IMSMQMessage4 * This, long *pcbBody);
	HRESULT(STDMETHODCALLTYPE * get_Body) (IMSMQMessage4 * This, VARIANT * pvarBody);
	HRESULT(STDMETHODCALLTYPE * put_Body) (IMSMQMessage4 * This, VARIANT varBody);
	HRESULT(STDMETHODCALLTYPE * get_AdminQueueInfo_v1) (IMSMQMessage4 * This, IMSMQQueueInfo ** ppqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * putref_AdminQueueInfo_v1) (IMSMQMessage4 * This, IMSMQQueueInfo * pqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IMSMQMessage4 * This, VARIANT * pvarMsgId);
	HRESULT(STDMETHODCALLTYPE * get_CorrelationId) (IMSMQMessage4 * This, VARIANT * pvarMsgId);
	HRESULT(STDMETHODCALLTYPE * put_CorrelationId) (IMSMQMessage4 * This, VARIANT varMsgId);
	HRESULT(STDMETHODCALLTYPE * get_Ack) (IMSMQMessage4 * This, long *plAck);
	HRESULT(STDMETHODCALLTYPE * put_Ack) (IMSMQMessage4 * This, long lAck);
	HRESULT(STDMETHODCALLTYPE * get_Label) (IMSMQMessage4 * This, BSTR * pbstrLabel);
	HRESULT(STDMETHODCALLTYPE * put_Label) (IMSMQMessage4 * This, BSTR bstrLabel);
	HRESULT(STDMETHODCALLTYPE * get_MaxTimeToReachQueue) (IMSMQMessage4 * This, long *plMaxTimeToReachQueue);
	HRESULT(STDMETHODCALLTYPE * put_MaxTimeToReachQueue) (IMSMQMessage4 * This, long lMaxTimeToReachQueue);
	HRESULT(STDMETHODCALLTYPE * get_MaxTimeToReceive) (IMSMQMessage4 * This, long *plMaxTimeToReceive);
	HRESULT(STDMETHODCALLTYPE * put_MaxTimeToReceive) (IMSMQMessage4 * This, long lMaxTimeToReceive);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (IMSMQMessage4 * This, long *plHashAlg);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (IMSMQMessage4 * This, long lHashAlg);
	HRESULT(STDMETHODCALLTYPE * get_EncryptAlgorithm) (IMSMQMessage4 * This, long *plEncryptAlg);
	HRESULT(STDMETHODCALLTYPE * put_EncryptAlgorithm) (IMSMQMessage4 * This, long lEncryptAlg);
	HRESULT(STDMETHODCALLTYPE * get_SentTime) (IMSMQMessage4 * This, VARIANT * pvarSentTime);
	HRESULT(STDMETHODCALLTYPE * get_ArrivedTime) (IMSMQMessage4 * This, VARIANT * plArrivedTime);
	HRESULT(STDMETHODCALLTYPE * get_DestinationQueueInfo) (IMSMQMessage4 * This, IMSMQQueueInfo4 ** ppqinfoDest);
	HRESULT(STDMETHODCALLTYPE * get_SenderCertificate) (IMSMQMessage4 * This, VARIANT * pvarSenderCert);
	HRESULT(STDMETHODCALLTYPE * put_SenderCertificate) (IMSMQMessage4 * This, VARIANT varSenderCert);
	HRESULT(STDMETHODCALLTYPE * get_SenderId) (IMSMQMessage4 * This, VARIANT * pvarSenderId);
	HRESULT(STDMETHODCALLTYPE * get_SenderIdType) (IMSMQMessage4 * This, long *plSenderIdType);
	HRESULT(STDMETHODCALLTYPE * put_SenderIdType) (IMSMQMessage4 * This, long lSenderIdType);
	HRESULT(STDMETHODCALLTYPE * Send) (IMSMQMessage4 * This, IDispatch * DestinationQueue, VARIANT * Transaction);
	HRESULT(STDMETHODCALLTYPE * AttachCurrentSecurityContext) (IMSMQMessage4 * This);
	HRESULT(STDMETHODCALLTYPE * get_SenderVersion) (IMSMQMessage4 * This, long *plSenderVersion);
	HRESULT(STDMETHODCALLTYPE * get_Extension) (IMSMQMessage4 * This, VARIANT * pvarExtension);
	HRESULT(STDMETHODCALLTYPE * put_Extension) (IMSMQMessage4 * This, VARIANT varExtension);
	HRESULT(STDMETHODCALLTYPE * get_ConnectorTypeGuid) (IMSMQMessage4 * This, BSTR * pbstrGuidConnectorType);
	HRESULT(STDMETHODCALLTYPE * put_ConnectorTypeGuid) (IMSMQMessage4 * This, BSTR bstrGuidConnectorType);
	HRESULT(STDMETHODCALLTYPE * get_TransactionStatusQueueInfo) (IMSMQMessage4 * This, IMSMQQueueInfo4 ** ppqinfoXactStatus);
	HRESULT(STDMETHODCALLTYPE * get_DestinationSymmetricKey) (IMSMQMessage4 * This, VARIANT * pvarDestSymmKey);
	HRESULT(STDMETHODCALLTYPE * put_DestinationSymmetricKey) (IMSMQMessage4 * This, VARIANT varDestSymmKey);
	HRESULT(STDMETHODCALLTYPE * get_Signature) (IMSMQMessage4 * This, VARIANT * pvarSignature);
	HRESULT(STDMETHODCALLTYPE * put_Signature) (IMSMQMessage4 * This, VARIANT varSignature);
	HRESULT(STDMETHODCALLTYPE * get_AuthenticationProviderType) (IMSMQMessage4 * This, long *plAuthProvType);
	HRESULT(STDMETHODCALLTYPE * put_AuthenticationProviderType) (IMSMQMessage4 * This, long lAuthProvType);
	HRESULT(STDMETHODCALLTYPE * get_AuthenticationProviderName) (IMSMQMessage4 * This, BSTR * pbstrAuthProvName);
	HRESULT(STDMETHODCALLTYPE * put_AuthenticationProviderName) (IMSMQMessage4 * This, BSTR bstrAuthProvName);
	HRESULT(STDMETHODCALLTYPE * put_SenderId) (IMSMQMessage4 * This, VARIANT varSenderId);
	HRESULT(STDMETHODCALLTYPE * get_MsgClass) (IMSMQMessage4 * This, long *plMsgClass);
	HRESULT(STDMETHODCALLTYPE * put_MsgClass) (IMSMQMessage4 * This, long lMsgClass);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQMessage4 * This, IDispatch ** ppcolProperties);
	HRESULT(STDMETHODCALLTYPE * get_TransactionId) (IMSMQMessage4 * This, VARIANT * pvarXactId);
	HRESULT(STDMETHODCALLTYPE * get_IsFirstInTransaction) (IMSMQMessage4 * This, Boolean * pisFirstInXact);
	HRESULT(STDMETHODCALLTYPE * get_IsLastInTransaction) (IMSMQMessage4 * This, Boolean * pisLastInXact);
	HRESULT(STDMETHODCALLTYPE * get_ResponseQueueInfo_v2) (IMSMQMessage4 * This, IMSMQQueueInfo2 ** ppqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * putref_ResponseQueueInfo_v2) (IMSMQMessage4 * This, IMSMQQueueInfo2 * pqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * get_AdminQueueInfo_v2) (IMSMQMessage4 * This, IMSMQQueueInfo2 ** ppqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * putref_AdminQueueInfo_v2) (IMSMQMessage4 * This, IMSMQQueueInfo2 * pqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * get_ReceivedAuthenticationLevel) (IMSMQMessage4 * This, short *psReceivedAuthenticationLevel);
	HRESULT(STDMETHODCALLTYPE * get_ResponseQueueInfo) (IMSMQMessage4 * This, IMSMQQueueInfo4 ** ppqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * putref_ResponseQueueInfo) (IMSMQMessage4 * This, IMSMQQueueInfo4 * pqinfoResponse);
	HRESULT(STDMETHODCALLTYPE * get_AdminQueueInfo) (IMSMQMessage4 * This, IMSMQQueueInfo4 ** ppqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * putref_AdminQueueInfo) (IMSMQMessage4 * This, IMSMQQueueInfo4 * pqinfoAdmin);
	HRESULT(STDMETHODCALLTYPE * get_ResponseDestination) (IMSMQMessage4 * This, IDispatch ** ppdestResponse);
	HRESULT(STDMETHODCALLTYPE * putref_ResponseDestination) (IMSMQMessage4 * This, IDispatch * pdestResponse);
	HRESULT(STDMETHODCALLTYPE * get_Destination) (IMSMQMessage4 * This, IDispatch ** ppdestDestination);
	HRESULT(STDMETHODCALLTYPE * get_LookupId) (IMSMQMessage4 * This, VARIANT * pvarLookupId);
	HRESULT(STDMETHODCALLTYPE * get_IsAuthenticated2) (IMSMQMessage4 * This, VARIANT_BOOL * pisAuthenticated);
	HRESULT(STDMETHODCALLTYPE * get_IsFirstInTransaction2) (IMSMQMessage4 * This, VARIANT_BOOL * pisFirstInXact);
	HRESULT(STDMETHODCALLTYPE * get_IsLastInTransaction2) (IMSMQMessage4 * This, VARIANT_BOOL * pisLastInXact);
	HRESULT(STDMETHODCALLTYPE * AttachCurrentSecurityContext2) (IMSMQMessage4 * This);
	HRESULT(STDMETHODCALLTYPE * get_SoapEnvelope) (IMSMQMessage4 * This, BSTR * pbstrSoapEnvelope);
	HRESULT(STDMETHODCALLTYPE * get_CompoundMessage) (IMSMQMessage4 * This, VARIANT * pvarCompoundMessage);
	HRESULT(STDMETHODCALLTYPE * put_SoapHeader) (IMSMQMessage4 * This, BSTR bstrSoapHeader);
	HRESULT(STDMETHODCALLTYPE * put_SoapBody) (IMSMQMessage4 * This, BSTR bstrSoapBody);
	END_INTERFACE
}  IMSMQMessage4Vtbl;
interface IMSMQMessage4
{
	CONST_VTBL struct IMSMQMessage4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQMessage4_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQMessage4_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQMessage4_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQMessage4_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQMessage4_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQMessage4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQMessage4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQMessage4_get_Class(This,plClass) ( (This)->lpVtbl -> get_Class(This,plClass) )
#define IMSMQMessage4_get_PrivLevel(This,plPrivLevel) ( (This)->lpVtbl -> get_PrivLevel(This,plPrivLevel) )
#define IMSMQMessage4_put_PrivLevel(This,lPrivLevel) ( (This)->lpVtbl -> put_PrivLevel(This,lPrivLevel) )
#define IMSMQMessage4_get_AuthLevel(This,plAuthLevel) ( (This)->lpVtbl -> get_AuthLevel(This,plAuthLevel) )
#define IMSMQMessage4_put_AuthLevel(This,lAuthLevel) ( (This)->lpVtbl -> put_AuthLevel(This,lAuthLevel) )
#define IMSMQMessage4_get_IsAuthenticated(This,pisAuthenticated) ( (This)->lpVtbl -> get_IsAuthenticated(This,pisAuthenticated) )
#define IMSMQMessage4_get_Delivery(This,plDelivery) ( (This)->lpVtbl -> get_Delivery(This,plDelivery) )
#define IMSMQMessage4_put_Delivery(This,lDelivery) ( (This)->lpVtbl -> put_Delivery(This,lDelivery) )
#define IMSMQMessage4_get_Trace(This,plTrace) ( (This)->lpVtbl -> get_Trace(This,plTrace) )
#define IMSMQMessage4_put_Trace(This,lTrace) ( (This)->lpVtbl -> put_Trace(This,lTrace) )
#define IMSMQMessage4_get_Priority(This,plPriority) ( (This)->lpVtbl -> get_Priority(This,plPriority) )
#define IMSMQMessage4_put_Priority(This,lPriority) ( (This)->lpVtbl -> put_Priority(This,lPriority) )
#define IMSMQMessage4_get_Journal(This,plJournal) ( (This)->lpVtbl -> get_Journal(This,plJournal) )
#define IMSMQMessage4_put_Journal(This,lJournal) ( (This)->lpVtbl -> put_Journal(This,lJournal) )
#define IMSMQMessage4_get_ResponseQueueInfo_v1(This,ppqinfoResponse) ( (This)->lpVtbl -> get_ResponseQueueInfo_v1(This,ppqinfoResponse) )
#define IMSMQMessage4_putref_ResponseQueueInfo_v1(This,pqinfoResponse) ( (This)->lpVtbl -> putref_ResponseQueueInfo_v1(This,pqinfoResponse) )
#define IMSMQMessage4_get_AppSpecific(This,plAppSpecific) ( (This)->lpVtbl -> get_AppSpecific(This,plAppSpecific) )
#define IMSMQMessage4_put_AppSpecific(This,lAppSpecific) ( (This)->lpVtbl -> put_AppSpecific(This,lAppSpecific) )
#define IMSMQMessage4_get_SourceMachineGuid(This,pbstrGuidSrcMachine) ( (This)->lpVtbl -> get_SourceMachineGuid(This,pbstrGuidSrcMachine) )
#define IMSMQMessage4_get_BodyLength(This,pcbBody) ( (This)->lpVtbl -> get_BodyLength(This,pcbBody) )
#define IMSMQMessage4_get_Body(This,pvarBody) ( (This)->lpVtbl -> get_Body(This,pvarBody) )
#define IMSMQMessage4_put_Body(This,varBody) ( (This)->lpVtbl -> put_Body(This,varBody) )
#define IMSMQMessage4_get_AdminQueueInfo_v1(This,ppqinfoAdmin) ( (This)->lpVtbl -> get_AdminQueueInfo_v1(This,ppqinfoAdmin) )
#define IMSMQMessage4_putref_AdminQueueInfo_v1(This,pqinfoAdmin) ( (This)->lpVtbl -> putref_AdminQueueInfo_v1(This,pqinfoAdmin) )
#define IMSMQMessage4_get_Id(This,pvarMsgId) ( (This)->lpVtbl -> get_Id(This,pvarMsgId) )
#define IMSMQMessage4_get_CorrelationId(This,pvarMsgId) ( (This)->lpVtbl -> get_CorrelationId(This,pvarMsgId) )
#define IMSMQMessage4_put_CorrelationId(This,varMsgId) ( (This)->lpVtbl -> put_CorrelationId(This,varMsgId) )
#define IMSMQMessage4_get_Ack(This,plAck) ( (This)->lpVtbl -> get_Ack(This,plAck) )
#define IMSMQMessage4_put_Ack(This,lAck) ( (This)->lpVtbl -> put_Ack(This,lAck) )
#define IMSMQMessage4_get_Label(This,pbstrLabel) ( (This)->lpVtbl -> get_Label(This,pbstrLabel) )
#define IMSMQMessage4_put_Label(This,bstrLabel) ( (This)->lpVtbl -> put_Label(This,bstrLabel) )
#define IMSMQMessage4_get_MaxTimeToReachQueue(This,plMaxTimeToReachQueue) ( (This)->lpVtbl -> get_MaxTimeToReachQueue(This,plMaxTimeToReachQueue) )
#define IMSMQMessage4_put_MaxTimeToReachQueue(This,lMaxTimeToReachQueue) ( (This)->lpVtbl -> put_MaxTimeToReachQueue(This,lMaxTimeToReachQueue) )
#define IMSMQMessage4_get_MaxTimeToReceive(This,plMaxTimeToReceive) ( (This)->lpVtbl -> get_MaxTimeToReceive(This,plMaxTimeToReceive) )
#define IMSMQMessage4_put_MaxTimeToReceive(This,lMaxTimeToReceive) ( (This)->lpVtbl -> put_MaxTimeToReceive(This,lMaxTimeToReceive) )
#define IMSMQMessage4_get_HashAlgorithm(This,plHashAlg) ( (This)->lpVtbl -> get_HashAlgorithm(This,plHashAlg) )
#define IMSMQMessage4_put_HashAlgorithm(This,lHashAlg) ( (This)->lpVtbl -> put_HashAlgorithm(This,lHashAlg) )
#define IMSMQMessage4_get_EncryptAlgorithm(This,plEncryptAlg) ( (This)->lpVtbl -> get_EncryptAlgorithm(This,plEncryptAlg) )
#define IMSMQMessage4_put_EncryptAlgorithm(This,lEncryptAlg) ( (This)->lpVtbl -> put_EncryptAlgorithm(This,lEncryptAlg) )
#define IMSMQMessage4_get_SentTime(This,pvarSentTime) ( (This)->lpVtbl -> get_SentTime(This,pvarSentTime) )
#define IMSMQMessage4_get_ArrivedTime(This,plArrivedTime) ( (This)->lpVtbl -> get_ArrivedTime(This,plArrivedTime) )
#define IMSMQMessage4_get_DestinationQueueInfo(This,ppqinfoDest) ( (This)->lpVtbl -> get_DestinationQueueInfo(This,ppqinfoDest) )
#define IMSMQMessage4_get_SenderCertificate(This,pvarSenderCert) ( (This)->lpVtbl -> get_SenderCertificate(This,pvarSenderCert) )
#define IMSMQMessage4_put_SenderCertificate(This,varSenderCert) ( (This)->lpVtbl -> put_SenderCertificate(This,varSenderCert) )
#define IMSMQMessage4_get_SenderId(This,pvarSenderId) ( (This)->lpVtbl -> get_SenderId(This,pvarSenderId) )
#define IMSMQMessage4_get_SenderIdType(This,plSenderIdType) ( (This)->lpVtbl -> get_SenderIdType(This,plSenderIdType) )
#define IMSMQMessage4_put_SenderIdType(This,lSenderIdType) ( (This)->lpVtbl -> put_SenderIdType(This,lSenderIdType) )
#define IMSMQMessage4_Send(This,DestinationQueue,Transaction) ( (This)->lpVtbl -> Send(This,DestinationQueue,Transaction) )
#define IMSMQMessage4_AttachCurrentSecurityContext(This) ( (This)->lpVtbl -> AttachCurrentSecurityContext(This) )
#define IMSMQMessage4_get_SenderVersion(This,plSenderVersion) ( (This)->lpVtbl -> get_SenderVersion(This,plSenderVersion) )
#define IMSMQMessage4_get_Extension(This,pvarExtension) ( (This)->lpVtbl -> get_Extension(This,pvarExtension) )
#define IMSMQMessage4_put_Extension(This,varExtension) ( (This)->lpVtbl -> put_Extension(This,varExtension) )
#define IMSMQMessage4_get_ConnectorTypeGuid(This,pbstrGuidConnectorType) ( (This)->lpVtbl -> get_ConnectorTypeGuid(This,pbstrGuidConnectorType) )
#define IMSMQMessage4_put_ConnectorTypeGuid(This,bstrGuidConnectorType) ( (This)->lpVtbl -> put_ConnectorTypeGuid(This,bstrGuidConnectorType) )
#define IMSMQMessage4_get_TransactionStatusQueueInfo(This,ppqinfoXactStatus) ( (This)->lpVtbl -> get_TransactionStatusQueueInfo(This,ppqinfoXactStatus) )
#define IMSMQMessage4_get_DestinationSymmetricKey(This,pvarDestSymmKey) ( (This)->lpVtbl -> get_DestinationSymmetricKey(This,pvarDestSymmKey) )
#define IMSMQMessage4_put_DestinationSymmetricKey(This,varDestSymmKey) ( (This)->lpVtbl -> put_DestinationSymmetricKey(This,varDestSymmKey) )
#define IMSMQMessage4_get_Signature(This,pvarSignature) ( (This)->lpVtbl -> get_Signature(This,pvarSignature) )
#define IMSMQMessage4_put_Signature(This,varSignature) ( (This)->lpVtbl -> put_Signature(This,varSignature) )
#define IMSMQMessage4_get_AuthenticationProviderType(This,plAuthProvType) ( (This)->lpVtbl -> get_AuthenticationProviderType(This,plAuthProvType) )
#define IMSMQMessage4_put_AuthenticationProviderType(This,lAuthProvType) ( (This)->lpVtbl -> put_AuthenticationProviderType(This,lAuthProvType) )
#define IMSMQMessage4_get_AuthenticationProviderName(This,pbstrAuthProvName) ( (This)->lpVtbl -> get_AuthenticationProviderName(This,pbstrAuthProvName) )
#define IMSMQMessage4_put_AuthenticationProviderName(This,bstrAuthProvName) ( (This)->lpVtbl -> put_AuthenticationProviderName(This,bstrAuthProvName) )
#define IMSMQMessage4_put_SenderId(This,varSenderId) ( (This)->lpVtbl -> put_SenderId(This,varSenderId) )
#define IMSMQMessage4_get_MsgClass(This,plMsgClass) ( (This)->lpVtbl -> get_MsgClass(This,plMsgClass) )
#define IMSMQMessage4_put_MsgClass(This,lMsgClass) ( (This)->lpVtbl -> put_MsgClass(This,lMsgClass) )
#define IMSMQMessage4_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#define IMSMQMessage4_get_TransactionId(This,pvarXactId) ( (This)->lpVtbl -> get_TransactionId(This,pvarXactId) )
#define IMSMQMessage4_get_IsFirstInTransaction(This,pisFirstInXact) ( (This)->lpVtbl -> get_IsFirstInTransaction(This,pisFirstInXact) )
#define IMSMQMessage4_get_IsLastInTransaction(This,pisLastInXact) ( (This)->lpVtbl -> get_IsLastInTransaction(This,pisLastInXact) )
#define IMSMQMessage4_get_ResponseQueueInfo_v2(This,ppqinfoResponse) ( (This)->lpVtbl -> get_ResponseQueueInfo_v2(This,ppqinfoResponse) )
#define IMSMQMessage4_putref_ResponseQueueInfo_v2(This,pqinfoResponse) ( (This)->lpVtbl -> putref_ResponseQueueInfo_v2(This,pqinfoResponse) )
#define IMSMQMessage4_get_AdminQueueInfo_v2(This,ppqinfoAdmin) ( (This)->lpVtbl -> get_AdminQueueInfo_v2(This,ppqinfoAdmin) )
#define IMSMQMessage4_putref_AdminQueueInfo_v2(This,pqinfoAdmin) ( (This)->lpVtbl -> putref_AdminQueueInfo_v2(This,pqinfoAdmin) )
#define IMSMQMessage4_get_ReceivedAuthenticationLevel(This,psReceivedAuthenticationLevel) ( (This)->lpVtbl -> get_ReceivedAuthenticationLevel(This,psReceivedAuthenticationLevel) )
#define IMSMQMessage4_get_ResponseQueueInfo(This,ppqinfoResponse) ( (This)->lpVtbl -> get_ResponseQueueInfo(This,ppqinfoResponse) )
#define IMSMQMessage4_putref_ResponseQueueInfo(This,pqinfoResponse) ( (This)->lpVtbl -> putref_ResponseQueueInfo(This,pqinfoResponse) )
#define IMSMQMessage4_get_AdminQueueInfo(This,ppqinfoAdmin) ( (This)->lpVtbl -> get_AdminQueueInfo(This,ppqinfoAdmin) )
#define IMSMQMessage4_putref_AdminQueueInfo(This,pqinfoAdmin) ( (This)->lpVtbl -> putref_AdminQueueInfo(This,pqinfoAdmin) )
#define IMSMQMessage4_get_ResponseDestination(This,ppdestResponse) ( (This)->lpVtbl -> get_ResponseDestination(This,ppdestResponse) )
#define IMSMQMessage4_putref_ResponseDestination(This,pdestResponse) ( (This)->lpVtbl -> putref_ResponseDestination(This,pdestResponse) )
#define IMSMQMessage4_get_Destination(This,ppdestDestination) ( (This)->lpVtbl -> get_Destination(This,ppdestDestination) )
#define IMSMQMessage4_get_LookupId(This,pvarLookupId) ( (This)->lpVtbl -> get_LookupId(This,pvarLookupId) )
#define IMSMQMessage4_get_IsAuthenticated2(This,pisAuthenticated) ( (This)->lpVtbl -> get_IsAuthenticated2(This,pisAuthenticated) )
#define IMSMQMessage4_get_IsFirstInTransaction2(This,pisFirstInXact) ( (This)->lpVtbl -> get_IsFirstInTransaction2(This,pisFirstInXact) )
#define IMSMQMessage4_get_IsLastInTransaction2(This,pisLastInXact) ( (This)->lpVtbl -> get_IsLastInTransaction2(This,pisLastInXact) )
#define IMSMQMessage4_AttachCurrentSecurityContext2(This) ( (This)->lpVtbl -> AttachCurrentSecurityContext2(This) )
#define IMSMQMessage4_get_SoapEnvelope(This,pbstrSoapEnvelope) ( (This)->lpVtbl -> get_SoapEnvelope(This,pbstrSoapEnvelope) )
#define IMSMQMessage4_get_CompoundMessage(This,pvarCompoundMessage) ( (This)->lpVtbl -> get_CompoundMessage(This,pvarCompoundMessage) )
#define IMSMQMessage4_put_SoapHeader(This,bstrSoapHeader) ( (This)->lpVtbl -> put_SoapHeader(This,bstrSoapHeader) )
#define IMSMQMessage4_put_SoapBody(This,bstrSoapBody) ( (This)->lpVtbl -> put_SoapBody(This,bstrSoapBody) )
#endif
#endif
extern const CLSID CLSID_MSMQMessage;
extern const CLSID CLSID_MSMQQueue;
#ifndef __IMSMQPrivateEvent_INTERFACE_DEFINED__
#define __IMSMQPrivateEvent_INTERFACE_DEFINED__
extern const IID IID_IMSMQPrivateEvent;
typedef struct IMSMQPrivateEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQPrivateEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQPrivateEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQPrivateEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQPrivateEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQPrivateEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQPrivateEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQPrivateEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Hwnd) (IMSMQPrivateEvent * This, long *phwnd);
	HRESULT(STDMETHODCALLTYPE * FireArrivedEvent) (IMSMQPrivateEvent * This, IMSMQQueue * pq, long msgcursor);
	HRESULT(STDMETHODCALLTYPE * FireArrivedErrorEvent) (IMSMQPrivateEvent * This, IMSMQQueue * pq, HRESULT hrStatus, long msgcursor);
	END_INTERFACE
}  IMSMQPrivateEventVtbl;
interface IMSMQPrivateEvent
{
	CONST_VTBL struct IMSMQPrivateEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQPrivateEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQPrivateEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQPrivateEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQPrivateEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQPrivateEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQPrivateEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQPrivateEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQPrivateEvent_get_Hwnd(This,phwnd) ( (This)->lpVtbl -> get_Hwnd(This,phwnd) )
#define IMSMQPrivateEvent_FireArrivedEvent(This,pq,msgcursor) ( (This)->lpVtbl -> FireArrivedEvent(This,pq,msgcursor) )
#define IMSMQPrivateEvent_FireArrivedErrorEvent(This,pq,hrStatus,msgcursor) ( (This)->lpVtbl -> FireArrivedErrorEvent(This,pq,hrStatus,msgcursor) )
#endif
#endif
#ifndef ___DMSMQEventEvents_DISPINTERFACE_DEFINED__
#define ___DMSMQEventEvents_DISPINTERFACE_DEFINED__
extern const IID DIID__DMSMQEventEvents;
typedef struct _DMSMQEventEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_DMSMQEventEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_DMSMQEventEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (_DMSMQEventEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_DMSMQEventEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_DMSMQEventEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_DMSMQEventEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_DMSMQEventEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  _DMSMQEventEventsVtbl;
interface _DMSMQEventEvents
{
	CONST_VTBL struct _DMSMQEventEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _DMSMQEventEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _DMSMQEventEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define _DMSMQEventEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define _DMSMQEventEvents_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _DMSMQEventEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _DMSMQEventEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _DMSMQEventEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_MSMQEvent;
extern const CLSID CLSID_MSMQQueueInfo;
extern const CLSID CLSID_MSMQQueueInfos;
#ifndef __IMSMQTransaction2_INTERFACE_DEFINED__
#define __IMSMQTransaction2_INTERFACE_DEFINED__
extern const IID IID_IMSMQTransaction2;
typedef struct IMSMQTransaction2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQTransaction2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQTransaction2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQTransaction2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQTransaction2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQTransaction2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQTransaction2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQTransaction2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Transaction) (IMSMQTransaction2 * This, long *plTransaction);
	HRESULT(STDMETHODCALLTYPE * Commit) (IMSMQTransaction2 * This, VARIANT * fRetaining, VARIANT * grfTC, VARIANT * grfRM);
	HRESULT(STDMETHODCALLTYPE * Abort) (IMSMQTransaction2 * This, VARIANT * fRetaining, VARIANT * fAsync);
	HRESULT(STDMETHODCALLTYPE * InitNew) (IMSMQTransaction2 * This, VARIANT varTransaction);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQTransaction2 * This, IDispatch ** ppcolProperties);
	END_INTERFACE
}  IMSMQTransaction2Vtbl;
interface IMSMQTransaction2
{
	CONST_VTBL struct IMSMQTransaction2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQTransaction2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQTransaction2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQTransaction2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQTransaction2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQTransaction2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQTransaction2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQTransaction2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQTransaction2_get_Transaction(This,plTransaction) ( (This)->lpVtbl -> get_Transaction(This,plTransaction) )
#define IMSMQTransaction2_Commit(This,fRetaining,grfTC,grfRM) ( (This)->lpVtbl -> Commit(This,fRetaining,grfTC,grfRM) )
#define IMSMQTransaction2_Abort(This,fRetaining,fAsync) ( (This)->lpVtbl -> Abort(This,fRetaining,fAsync) )
#define IMSMQTransaction2_InitNew(This,varTransaction) ( (This)->lpVtbl -> InitNew(This,varTransaction) )
#define IMSMQTransaction2_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#endif
#endif
#ifndef __IMSMQTransaction3_INTERFACE_DEFINED__
#define __IMSMQTransaction3_INTERFACE_DEFINED__
extern const IID IID_IMSMQTransaction3;
typedef struct IMSMQTransaction3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQTransaction3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQTransaction3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQTransaction3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQTransaction3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQTransaction3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQTransaction3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQTransaction3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Transaction) (IMSMQTransaction3 * This, long *plTransaction);
	HRESULT(STDMETHODCALLTYPE * Commit) (IMSMQTransaction3 * This, VARIANT * fRetaining, VARIANT * grfTC, VARIANT * grfRM);
	HRESULT(STDMETHODCALLTYPE * Abort) (IMSMQTransaction3 * This, VARIANT * fRetaining, VARIANT * fAsync);
	HRESULT(STDMETHODCALLTYPE * InitNew) (IMSMQTransaction3 * This, VARIANT varTransaction);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQTransaction3 * This, IDispatch ** ppcolProperties);
	HRESULT(STDMETHODCALLTYPE * get_ITransaction) (IMSMQTransaction3 * This, VARIANT * pvarITransaction);
	END_INTERFACE
}  IMSMQTransaction3Vtbl;
interface IMSMQTransaction3
{
	CONST_VTBL struct IMSMQTransaction3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQTransaction3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQTransaction3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQTransaction3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQTransaction3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQTransaction3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQTransaction3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQTransaction3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQTransaction3_get_Transaction(This,plTransaction) ( (This)->lpVtbl -> get_Transaction(This,plTransaction) )
#define IMSMQTransaction3_Commit(This,fRetaining,grfTC,grfRM) ( (This)->lpVtbl -> Commit(This,fRetaining,grfTC,grfRM) )
#define IMSMQTransaction3_Abort(This,fRetaining,fAsync) ( (This)->lpVtbl -> Abort(This,fRetaining,fAsync) )
#define IMSMQTransaction3_InitNew(This,varTransaction) ( (This)->lpVtbl -> InitNew(This,varTransaction) )
#define IMSMQTransaction3_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#define IMSMQTransaction3_get_ITransaction(This,pvarITransaction) ( (This)->lpVtbl -> get_ITransaction(This,pvarITransaction) )
#endif
#endif
extern const CLSID CLSID_MSMQTransaction;
#ifndef __IMSMQCoordinatedTransactionDispenser2_INTERFACE_DEFINED__
#define __IMSMQCoordinatedTransactionDispenser2_INTERFACE_DEFINED__
extern const IID IID_IMSMQCoordinatedTransactionDispenser2;
typedef struct IMSMQCoordinatedTransactionDispenser2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQCoordinatedTransactionDispenser2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQCoordinatedTransactionDispenser2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQCoordinatedTransactionDispenser2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQCoordinatedTransactionDispenser2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQCoordinatedTransactionDispenser2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQCoordinatedTransactionDispenser2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQCoordinatedTransactionDispenser2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * BeginTransaction) (IMSMQCoordinatedTransactionDispenser2 * This, IMSMQTransaction2 ** ptransaction);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQCoordinatedTransactionDispenser2 * This, IDispatch ** ppcolProperties);
	END_INTERFACE
}  IMSMQCoordinatedTransactionDispenser2Vtbl;
interface IMSMQCoordinatedTransactionDispenser2
{
	CONST_VTBL struct IMSMQCoordinatedTransactionDispenser2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQCoordinatedTransactionDispenser2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQCoordinatedTransactionDispenser2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQCoordinatedTransactionDispenser2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQCoordinatedTransactionDispenser2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQCoordinatedTransactionDispenser2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQCoordinatedTransactionDispenser2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQCoordinatedTransactionDispenser2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQCoordinatedTransactionDispenser2_BeginTransaction(This,ptransaction) ( (This)->lpVtbl -> BeginTransaction(This,ptransaction) )
#define IMSMQCoordinatedTransactionDispenser2_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#endif
#endif
#ifndef __IMSMQCoordinatedTransactionDispenser3_INTERFACE_DEFINED__
#define __IMSMQCoordinatedTransactionDispenser3_INTERFACE_DEFINED__
extern const IID IID_IMSMQCoordinatedTransactionDispenser3;
typedef struct IMSMQCoordinatedTransactionDispenser3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQCoordinatedTransactionDispenser3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQCoordinatedTransactionDispenser3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQCoordinatedTransactionDispenser3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQCoordinatedTransactionDispenser3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQCoordinatedTransactionDispenser3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQCoordinatedTransactionDispenser3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQCoordinatedTransactionDispenser3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * BeginTransaction) (IMSMQCoordinatedTransactionDispenser3 * This, IMSMQTransaction3 ** ptransaction);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQCoordinatedTransactionDispenser3 * This, IDispatch ** ppcolProperties);
	END_INTERFACE
}  IMSMQCoordinatedTransactionDispenser3Vtbl;
interface IMSMQCoordinatedTransactionDispenser3
{
	CONST_VTBL struct IMSMQCoordinatedTransactionDispenser3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQCoordinatedTransactionDispenser3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQCoordinatedTransactionDispenser3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQCoordinatedTransactionDispenser3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQCoordinatedTransactionDispenser3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQCoordinatedTransactionDispenser3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQCoordinatedTransactionDispenser3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQCoordinatedTransactionDispenser3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQCoordinatedTransactionDispenser3_BeginTransaction(This,ptransaction) ( (This)->lpVtbl -> BeginTransaction(This,ptransaction) )
#define IMSMQCoordinatedTransactionDispenser3_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#endif
#endif
extern const CLSID CLSID_MSMQCoordinatedTransactionDispenser;
#ifndef __IMSMQTransactionDispenser2_INTERFACE_DEFINED__
#define __IMSMQTransactionDispenser2_INTERFACE_DEFINED__
extern const IID IID_IMSMQTransactionDispenser2;
typedef struct IMSMQTransactionDispenser2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQTransactionDispenser2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQTransactionDispenser2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQTransactionDispenser2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQTransactionDispenser2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQTransactionDispenser2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQTransactionDispenser2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQTransactionDispenser2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * BeginTransaction) (IMSMQTransactionDispenser2 * This, IMSMQTransaction2 ** ptransaction);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQTransactionDispenser2 * This, IDispatch ** ppcolProperties);
	END_INTERFACE
}  IMSMQTransactionDispenser2Vtbl;
interface IMSMQTransactionDispenser2
{
	CONST_VTBL struct IMSMQTransactionDispenser2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQTransactionDispenser2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQTransactionDispenser2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQTransactionDispenser2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQTransactionDispenser2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQTransactionDispenser2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQTransactionDispenser2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQTransactionDispenser2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQTransactionDispenser2_BeginTransaction(This,ptransaction) ( (This)->lpVtbl -> BeginTransaction(This,ptransaction) )
#define IMSMQTransactionDispenser2_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#endif
#endif
#ifndef __IMSMQTransactionDispenser3_INTERFACE_DEFINED__
#define __IMSMQTransactionDispenser3_INTERFACE_DEFINED__
extern const IID IID_IMSMQTransactionDispenser3;
typedef struct IMSMQTransactionDispenser3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQTransactionDispenser3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQTransactionDispenser3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQTransactionDispenser3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQTransactionDispenser3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQTransactionDispenser3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQTransactionDispenser3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQTransactionDispenser3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * BeginTransaction) (IMSMQTransactionDispenser3 * This, IMSMQTransaction3 ** ptransaction);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQTransactionDispenser3 * This, IDispatch ** ppcolProperties);
	END_INTERFACE
}  IMSMQTransactionDispenser3Vtbl;
interface IMSMQTransactionDispenser3
{
	CONST_VTBL struct IMSMQTransactionDispenser3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQTransactionDispenser3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQTransactionDispenser3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQTransactionDispenser3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQTransactionDispenser3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQTransactionDispenser3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQTransactionDispenser3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQTransactionDispenser3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQTransactionDispenser3_BeginTransaction(This,ptransaction) ( (This)->lpVtbl -> BeginTransaction(This,ptransaction) )
#define IMSMQTransactionDispenser3_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#endif
#endif
extern const CLSID CLSID_MSMQTransactionDispenser;
#ifndef __IMSMQApplication_INTERFACE_DEFINED__
#define __IMSMQApplication_INTERFACE_DEFINED__
extern const IID IID_IMSMQApplication;
typedef struct IMSMQApplicationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQApplication * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQApplication * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQApplication * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQApplication * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQApplication * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQApplication * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQApplication * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * MachineIdOfMachineName) (IMSMQApplication * This, BSTR MachineName, BSTR * pbstrGuid);
	END_INTERFACE
}  IMSMQApplicationVtbl;
interface IMSMQApplication
{
	CONST_VTBL struct IMSMQApplicationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQApplication_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQApplication_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQApplication_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQApplication_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQApplication_MachineIdOfMachineName(This,MachineName,pbstrGuid) ( (This)->lpVtbl -> MachineIdOfMachineName(This,MachineName,pbstrGuid) )
#endif
#endif
#ifndef __IMSMQApplication2_INTERFACE_DEFINED__
#define __IMSMQApplication2_INTERFACE_DEFINED__
extern const IID IID_IMSMQApplication2;
typedef struct IMSMQApplication2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQApplication2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQApplication2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQApplication2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQApplication2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQApplication2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQApplication2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQApplication2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * MachineIdOfMachineName) (IMSMQApplication2 * This, BSTR MachineName, BSTR * pbstrGuid);
	HRESULT(STDMETHODCALLTYPE * RegisterCertificate) (IMSMQApplication2 * This, VARIANT * Flags, VARIANT * ExternalCertificate);
	HRESULT(STDMETHODCALLTYPE * MachineNameOfMachineId) (IMSMQApplication2 * This, BSTR bstrGuid, BSTR * pbstrMachineName);
	HRESULT(STDMETHODCALLTYPE * get_MSMQVersionMajor) (IMSMQApplication2 * This, short *psMSMQVersionMajor);
	HRESULT(STDMETHODCALLTYPE * get_MSMQVersionMinor) (IMSMQApplication2 * This, short *psMSMQVersionMinor);
	HRESULT(STDMETHODCALLTYPE * get_MSMQVersionBuild) (IMSMQApplication2 * This, short *psMSMQVersionBuild);
	HRESULT(STDMETHODCALLTYPE * get_IsDsEnabled) (IMSMQApplication2 * This, VARIANT_BOOL * pfIsDsEnabled);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQApplication2 * This, IDispatch ** ppcolProperties);
	END_INTERFACE
}  IMSMQApplication2Vtbl;
interface IMSMQApplication2
{
	CONST_VTBL struct IMSMQApplication2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQApplication2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQApplication2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQApplication2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQApplication2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQApplication2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQApplication2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQApplication2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQApplication2_MachineIdOfMachineName(This,MachineName,pbstrGuid) ( (This)->lpVtbl -> MachineIdOfMachineName(This,MachineName,pbstrGuid) )
#define IMSMQApplication2_RegisterCertificate(This,Flags,ExternalCertificate) ( (This)->lpVtbl -> RegisterCertificate(This,Flags,ExternalCertificate) )
#define IMSMQApplication2_MachineNameOfMachineId(This,bstrGuid,pbstrMachineName) ( (This)->lpVtbl -> MachineNameOfMachineId(This,bstrGuid,pbstrMachineName) )
#define IMSMQApplication2_get_MSMQVersionMajor(This,psMSMQVersionMajor) ( (This)->lpVtbl -> get_MSMQVersionMajor(This,psMSMQVersionMajor) )
#define IMSMQApplication2_get_MSMQVersionMinor(This,psMSMQVersionMinor) ( (This)->lpVtbl -> get_MSMQVersionMinor(This,psMSMQVersionMinor) )
#define IMSMQApplication2_get_MSMQVersionBuild(This,psMSMQVersionBuild) ( (This)->lpVtbl -> get_MSMQVersionBuild(This,psMSMQVersionBuild) )
#define IMSMQApplication2_get_IsDsEnabled(This,pfIsDsEnabled) ( (This)->lpVtbl -> get_IsDsEnabled(This,pfIsDsEnabled) )
#define IMSMQApplication2_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#endif
#endif
#ifndef __IMSMQApplication3_INTERFACE_DEFINED__
#define __IMSMQApplication3_INTERFACE_DEFINED__
extern const IID IID_IMSMQApplication3;
typedef struct IMSMQApplication3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQApplication3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQApplication3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQApplication3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQApplication3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQApplication3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQApplication3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQApplication3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * MachineIdOfMachineName) (IMSMQApplication3 * This, BSTR MachineName, BSTR * pbstrGuid);
	HRESULT(STDMETHODCALLTYPE * RegisterCertificate) (IMSMQApplication3 * This, VARIANT * Flags, VARIANT * ExternalCertificate);
	HRESULT(STDMETHODCALLTYPE * MachineNameOfMachineId) (IMSMQApplication3 * This, BSTR bstrGuid, BSTR * pbstrMachineName);
	HRESULT(STDMETHODCALLTYPE * get_MSMQVersionMajor) (IMSMQApplication3 * This, short *psMSMQVersionMajor);
	HRESULT(STDMETHODCALLTYPE * get_MSMQVersionMinor) (IMSMQApplication3 * This, short *psMSMQVersionMinor);
	HRESULT(STDMETHODCALLTYPE * get_MSMQVersionBuild) (IMSMQApplication3 * This, short *psMSMQVersionBuild);
	HRESULT(STDMETHODCALLTYPE * get_IsDsEnabled) (IMSMQApplication3 * This, VARIANT_BOOL * pfIsDsEnabled);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQApplication3 * This, IDispatch ** ppcolProperties);
	HRESULT(STDMETHODCALLTYPE * get_ActiveQueues) (IMSMQApplication3 * This, VARIANT * pvActiveQueues);
	HRESULT(STDMETHODCALLTYPE * get_PrivateQueues) (IMSMQApplication3 * This, VARIANT * pvPrivateQueues);
	HRESULT(STDMETHODCALLTYPE * get_DirectoryServiceServer) (IMSMQApplication3 * This, BSTR * pbstrDirectoryServiceServer);
	HRESULT(STDMETHODCALLTYPE * get_IsConnected) (IMSMQApplication3 * This, VARIANT_BOOL * pfIsConnected);
	HRESULT(STDMETHODCALLTYPE * get_BytesInAllQueues) (IMSMQApplication3 * This, VARIANT * pvBytesInAllQueues);
	HRESULT(STDMETHODCALLTYPE * put_Machine) (IMSMQApplication3 * This, BSTR bstrMachine);
	HRESULT(STDMETHODCALLTYPE * get_Machine) (IMSMQApplication3 * This, BSTR * pbstrMachine);
	HRESULT(STDMETHODCALLTYPE * Connect) (IMSMQApplication3 * This);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (IMSMQApplication3 * This);
	HRESULT(STDMETHODCALLTYPE * Tidy) (IMSMQApplication3 * This);
	END_INTERFACE
}  IMSMQApplication3Vtbl;
interface IMSMQApplication3
{
	CONST_VTBL struct IMSMQApplication3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQApplication3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQApplication3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQApplication3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQApplication3_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQApplication3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQApplication3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQApplication3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQApplication3_MachineIdOfMachineName(This,MachineName,pbstrGuid) ( (This)->lpVtbl -> MachineIdOfMachineName(This,MachineName,pbstrGuid) )
#define IMSMQApplication3_RegisterCertificate(This,Flags,ExternalCertificate) ( (This)->lpVtbl -> RegisterCertificate(This,Flags,ExternalCertificate) )
#define IMSMQApplication3_MachineNameOfMachineId(This,bstrGuid,pbstrMachineName) ( (This)->lpVtbl -> MachineNameOfMachineId(This,bstrGuid,pbstrMachineName) )
#define IMSMQApplication3_get_MSMQVersionMajor(This,psMSMQVersionMajor) ( (This)->lpVtbl -> get_MSMQVersionMajor(This,psMSMQVersionMajor) )
#define IMSMQApplication3_get_MSMQVersionMinor(This,psMSMQVersionMinor) ( (This)->lpVtbl -> get_MSMQVersionMinor(This,psMSMQVersionMinor) )
#define IMSMQApplication3_get_MSMQVersionBuild(This,psMSMQVersionBuild) ( (This)->lpVtbl -> get_MSMQVersionBuild(This,psMSMQVersionBuild) )
#define IMSMQApplication3_get_IsDsEnabled(This,pfIsDsEnabled) ( (This)->lpVtbl -> get_IsDsEnabled(This,pfIsDsEnabled) )
#define IMSMQApplication3_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#define IMSMQApplication3_get_ActiveQueues(This,pvActiveQueues) ( (This)->lpVtbl -> get_ActiveQueues(This,pvActiveQueues) )
#define IMSMQApplication3_get_PrivateQueues(This,pvPrivateQueues) ( (This)->lpVtbl -> get_PrivateQueues(This,pvPrivateQueues) )
#define IMSMQApplication3_get_DirectoryServiceServer(This,pbstrDirectoryServiceServer) ( (This)->lpVtbl -> get_DirectoryServiceServer(This,pbstrDirectoryServiceServer) )
#define IMSMQApplication3_get_IsConnected(This,pfIsConnected) ( (This)->lpVtbl -> get_IsConnected(This,pfIsConnected) )
#define IMSMQApplication3_get_BytesInAllQueues(This,pvBytesInAllQueues) ( (This)->lpVtbl -> get_BytesInAllQueues(This,pvBytesInAllQueues) )
#define IMSMQApplication3_put_Machine(This,bstrMachine) ( (This)->lpVtbl -> put_Machine(This,bstrMachine) )
#define IMSMQApplication3_get_Machine(This,pbstrMachine) ( (This)->lpVtbl -> get_Machine(This,pbstrMachine) )
#define IMSMQApplication3_Connect(This) ( (This)->lpVtbl -> Connect(This) )
#define IMSMQApplication3_Disconnect(This) ( (This)->lpVtbl -> Disconnect(This) )
#define IMSMQApplication3_Tidy(This) ( (This)->lpVtbl -> Tidy(This) )
#endif
#endif
extern const CLSID CLSID_MSMQApplication;
#ifndef __IMSMQDestination_INTERFACE_DEFINED__
#define __IMSMQDestination_INTERFACE_DEFINED__
extern const IID IID_IMSMQDestination;
typedef struct IMSMQDestinationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQDestination * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQDestination * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQDestination * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQDestination * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQDestination * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQDestination * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQDestination * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Open) (IMSMQDestination * This);
	HRESULT(STDMETHODCALLTYPE * Close) (IMSMQDestination * This);
	HRESULT(STDMETHODCALLTYPE * get_IsOpen) (IMSMQDestination * This, VARIANT_BOOL * pfIsOpen);
	HRESULT(STDMETHODCALLTYPE * get_IADs) (IMSMQDestination * This, IDispatch ** ppIADs);
	HRESULT(STDMETHODCALLTYPE * putref_IADs) (IMSMQDestination * This, IDispatch * pIADs);
	HRESULT(STDMETHODCALLTYPE * get_ADsPath) (IMSMQDestination * This, BSTR * pbstrADsPath);
	HRESULT(STDMETHODCALLTYPE * put_ADsPath) (IMSMQDestination * This, BSTR bstrADsPath);
	HRESULT(STDMETHODCALLTYPE * get_PathName) (IMSMQDestination * This, BSTR * pbstrPathName);
	HRESULT(STDMETHODCALLTYPE * put_PathName) (IMSMQDestination * This, BSTR bstrPathName);
	HRESULT(STDMETHODCALLTYPE * get_FormatName) (IMSMQDestination * This, BSTR * pbstrFormatName);
	HRESULT(STDMETHODCALLTYPE * put_FormatName) (IMSMQDestination * This, BSTR bstrFormatName);
	HRESULT(STDMETHODCALLTYPE * get_Destinations) (IMSMQDestination * This, IDispatch ** ppDestinations);
	HRESULT(STDMETHODCALLTYPE * putref_Destinations) (IMSMQDestination * This, IDispatch * pDestinations);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IMSMQDestination * This, IDispatch ** ppcolProperties);
	END_INTERFACE
}  IMSMQDestinationVtbl;
interface IMSMQDestination
{
	CONST_VTBL struct IMSMQDestinationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQDestination_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQDestination_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQDestination_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQDestination_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQDestination_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQDestination_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQDestination_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQDestination_Open(This) ( (This)->lpVtbl -> Open(This) )
#define IMSMQDestination_Close(This) ( (This)->lpVtbl -> Close(This) )
#define IMSMQDestination_get_IsOpen(This,pfIsOpen) ( (This)->lpVtbl -> get_IsOpen(This,pfIsOpen) )
#define IMSMQDestination_get_IADs(This,ppIADs) ( (This)->lpVtbl -> get_IADs(This,ppIADs) )
#define IMSMQDestination_putref_IADs(This,pIADs) ( (This)->lpVtbl -> putref_IADs(This,pIADs) )
#define IMSMQDestination_get_ADsPath(This,pbstrADsPath) ( (This)->lpVtbl -> get_ADsPath(This,pbstrADsPath) )
#define IMSMQDestination_put_ADsPath(This,bstrADsPath) ( (This)->lpVtbl -> put_ADsPath(This,bstrADsPath) )
#define IMSMQDestination_get_PathName(This,pbstrPathName) ( (This)->lpVtbl -> get_PathName(This,pbstrPathName) )
#define IMSMQDestination_put_PathName(This,bstrPathName) ( (This)->lpVtbl -> put_PathName(This,bstrPathName) )
#define IMSMQDestination_get_FormatName(This,pbstrFormatName) ( (This)->lpVtbl -> get_FormatName(This,pbstrFormatName) )
#define IMSMQDestination_put_FormatName(This,bstrFormatName) ( (This)->lpVtbl -> put_FormatName(This,bstrFormatName) )
#define IMSMQDestination_get_Destinations(This,ppDestinations) ( (This)->lpVtbl -> get_Destinations(This,ppDestinations) )
#define IMSMQDestination_putref_Destinations(This,pDestinations) ( (This)->lpVtbl -> putref_Destinations(This,pDestinations) )
#define IMSMQDestination_get_Properties(This,ppcolProperties) ( (This)->lpVtbl -> get_Properties(This,ppcolProperties) )
#endif
#endif
#ifndef __IMSMQPrivateDestination_INTERFACE_DEFINED__
#define __IMSMQPrivateDestination_INTERFACE_DEFINED__
extern const IID IID_IMSMQPrivateDestination;
typedef struct IMSMQPrivateDestinationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQPrivateDestination * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQPrivateDestination * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQPrivateDestination * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQPrivateDestination * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQPrivateDestination * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQPrivateDestination * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQPrivateDestination * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Handle) (IMSMQPrivateDestination * This, VARIANT * pvarHandle);
	HRESULT(STDMETHODCALLTYPE * put_Handle) (IMSMQPrivateDestination * This, VARIANT varHandle);
	END_INTERFACE
}  IMSMQPrivateDestinationVtbl;
interface IMSMQPrivateDestination
{
	CONST_VTBL struct IMSMQPrivateDestinationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQPrivateDestination_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQPrivateDestination_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQPrivateDestination_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQPrivateDestination_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQPrivateDestination_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQPrivateDestination_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQPrivateDestination_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQPrivateDestination_get_Handle(This,pvarHandle) ( (This)->lpVtbl -> get_Handle(This,pvarHandle) )
#define IMSMQPrivateDestination_put_Handle(This,varHandle) ( (This)->lpVtbl -> put_Handle(This,varHandle) )
#endif
#endif
extern const CLSID CLSID_MSMQDestination;
#ifndef __IMSMQCollection_INTERFACE_DEFINED__
#define __IMSMQCollection_INTERFACE_DEFINED__
extern const IID IID_IMSMQCollection;
typedef struct IMSMQCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Item) (IMSMQCollection * This, VARIANT * Index, VARIANT * pvarRet);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IMSMQCollection * This, long *pCount);
	HRESULT(STDMETHODCALLTYPE * _NewEnum) (IMSMQCollection * This, IUnknown ** ppunk);
	END_INTERFACE
}  IMSMQCollectionVtbl;
interface IMSMQCollection
{
	CONST_VTBL struct IMSMQCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQCollection_Item(This,Index,pvarRet) ( (This)->lpVtbl -> Item(This,Index,pvarRet) )
#define IMSMQCollection_get_Count(This,pCount) ( (This)->lpVtbl -> get_Count(This,pCount) )
#define IMSMQCollection__NewEnum(This,ppunk) ( (This)->lpVtbl -> _NewEnum(This,ppunk) )
#endif
#endif
extern const CLSID CLSID_MSMQCollection;
#ifndef __IMSMQManagement_INTERFACE_DEFINED__
#define __IMSMQManagement_INTERFACE_DEFINED__
extern const IID IID_IMSMQManagement;
typedef struct IMSMQManagementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQManagement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQManagement * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQManagement * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQManagement * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQManagement * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQManagement * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQManagement * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Init) (IMSMQManagement * This, VARIANT * Machine, VARIANT * Pathname, VARIANT * FormatName);
	HRESULT(STDMETHODCALLTYPE * get_FormatName) (IMSMQManagement * This, BSTR * pbstrFormatName);
	HRESULT(STDMETHODCALLTYPE * get_Machine) (IMSMQManagement * This, BSTR * pbstrMachine);
	HRESULT(STDMETHODCALLTYPE * get_MessageCount) (IMSMQManagement * This, long *plMessageCount);
	HRESULT(STDMETHODCALLTYPE * get_ForeignStatus) (IMSMQManagement * This, long *plForeignStatus);
	HRESULT(STDMETHODCALLTYPE * get_QueueType) (IMSMQManagement * This, long *plQueueType);
	HRESULT(STDMETHODCALLTYPE * get_IsLocal) (IMSMQManagement * This, VARIANT_BOOL * pfIsLocal);
	HRESULT(STDMETHODCALLTYPE * get_TransactionalStatus) (IMSMQManagement * This, long *plTransactionalStatus);
	HRESULT(STDMETHODCALLTYPE * get_BytesInQueue) (IMSMQManagement * This, VARIANT * pvBytesInQueue);
	END_INTERFACE
}  IMSMQManagementVtbl;
interface IMSMQManagement
{
	CONST_VTBL struct IMSMQManagementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQManagement_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQManagement_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQManagement_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQManagement_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQManagement_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQManagement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQManagement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQManagement_Init(This,Machine,Pathname,FormatName) ( (This)->lpVtbl -> Init(This,Machine,Pathname,FormatName) )
#define IMSMQManagement_get_FormatName(This,pbstrFormatName) ( (This)->lpVtbl -> get_FormatName(This,pbstrFormatName) )
#define IMSMQManagement_get_Machine(This,pbstrMachine) ( (This)->lpVtbl -> get_Machine(This,pbstrMachine) )
#define IMSMQManagement_get_MessageCount(This,plMessageCount) ( (This)->lpVtbl -> get_MessageCount(This,plMessageCount) )
#define IMSMQManagement_get_ForeignStatus(This,plForeignStatus) ( (This)->lpVtbl -> get_ForeignStatus(This,plForeignStatus) )
#define IMSMQManagement_get_QueueType(This,plQueueType) ( (This)->lpVtbl -> get_QueueType(This,plQueueType) )
#define IMSMQManagement_get_IsLocal(This,pfIsLocal) ( (This)->lpVtbl -> get_IsLocal(This,pfIsLocal) )
#define IMSMQManagement_get_TransactionalStatus(This,plTransactionalStatus) ( (This)->lpVtbl -> get_TransactionalStatus(This,plTransactionalStatus) )
#define IMSMQManagement_get_BytesInQueue(This,pvBytesInQueue) ( (This)->lpVtbl -> get_BytesInQueue(This,pvBytesInQueue) )
#endif
#endif
extern const CLSID CLSID_MSMQManagement;
#ifndef __IMSMQOutgoingQueueManagement_INTERFACE_DEFINED__
#define __IMSMQOutgoingQueueManagement_INTERFACE_DEFINED__
extern const IID IID_IMSMQOutgoingQueueManagement;
typedef struct IMSMQOutgoingQueueManagementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQOutgoingQueueManagement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQOutgoingQueueManagement * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQOutgoingQueueManagement * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQOutgoingQueueManagement * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQOutgoingQueueManagement * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQOutgoingQueueManagement * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQOutgoingQueueManagement * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Init) (IMSMQOutgoingQueueManagement * This, VARIANT * Machine, VARIANT * Pathname, VARIANT * FormatName);
	HRESULT(STDMETHODCALLTYPE * get_FormatName) (IMSMQOutgoingQueueManagement * This, BSTR * pbstrFormatName);
	HRESULT(STDMETHODCALLTYPE * get_Machine) (IMSMQOutgoingQueueManagement * This, BSTR * pbstrMachine);
	HRESULT(STDMETHODCALLTYPE * get_MessageCount) (IMSMQOutgoingQueueManagement * This, long *plMessageCount);
	HRESULT(STDMETHODCALLTYPE * get_ForeignStatus) (IMSMQOutgoingQueueManagement * This, long *plForeignStatus);
	HRESULT(STDMETHODCALLTYPE * get_QueueType) (IMSMQOutgoingQueueManagement * This, long *plQueueType);
	HRESULT(STDMETHODCALLTYPE * get_IsLocal) (IMSMQOutgoingQueueManagement * This, VARIANT_BOOL * pfIsLocal);
	HRESULT(STDMETHODCALLTYPE * get_TransactionalStatus) (IMSMQOutgoingQueueManagement * This, long *plTransactionalStatus);
	HRESULT(STDMETHODCALLTYPE * get_BytesInQueue) (IMSMQOutgoingQueueManagement * This, VARIANT * pvBytesInQueue);
	HRESULT(STDMETHODCALLTYPE * get_State) (IMSMQOutgoingQueueManagement * This, long *plState);
	HRESULT(STDMETHODCALLTYPE * get_NextHops) (IMSMQOutgoingQueueManagement * This, VARIANT * pvNextHops);
	HRESULT(STDMETHODCALLTYPE * EodGetSendInfo) (IMSMQOutgoingQueueManagement * This, IMSMQCollection ** ppCollection);
	HRESULT(STDMETHODCALLTYPE * Resume) (IMSMQOutgoingQueueManagement * This);
	HRESULT(STDMETHODCALLTYPE * Pause) (IMSMQOutgoingQueueManagement * This);
	HRESULT(STDMETHODCALLTYPE * EodResend) (IMSMQOutgoingQueueManagement * This);
	END_INTERFACE
}  IMSMQOutgoingQueueManagementVtbl;
interface IMSMQOutgoingQueueManagement
{
	CONST_VTBL struct IMSMQOutgoingQueueManagementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQOutgoingQueueManagement_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQOutgoingQueueManagement_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQOutgoingQueueManagement_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQOutgoingQueueManagement_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQOutgoingQueueManagement_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQOutgoingQueueManagement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQOutgoingQueueManagement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQOutgoingQueueManagement_Init(This,Machine,Pathname,FormatName) ( (This)->lpVtbl -> Init(This,Machine,Pathname,FormatName) )
#define IMSMQOutgoingQueueManagement_get_FormatName(This,pbstrFormatName) ( (This)->lpVtbl -> get_FormatName(This,pbstrFormatName) )
#define IMSMQOutgoingQueueManagement_get_Machine(This,pbstrMachine) ( (This)->lpVtbl -> get_Machine(This,pbstrMachine) )
#define IMSMQOutgoingQueueManagement_get_MessageCount(This,plMessageCount) ( (This)->lpVtbl -> get_MessageCount(This,plMessageCount) )
#define IMSMQOutgoingQueueManagement_get_ForeignStatus(This,plForeignStatus) ( (This)->lpVtbl -> get_ForeignStatus(This,plForeignStatus) )
#define IMSMQOutgoingQueueManagement_get_QueueType(This,plQueueType) ( (This)->lpVtbl -> get_QueueType(This,plQueueType) )
#define IMSMQOutgoingQueueManagement_get_IsLocal(This,pfIsLocal) ( (This)->lpVtbl -> get_IsLocal(This,pfIsLocal) )
#define IMSMQOutgoingQueueManagement_get_TransactionalStatus(This,plTransactionalStatus) ( (This)->lpVtbl -> get_TransactionalStatus(This,plTransactionalStatus) )
#define IMSMQOutgoingQueueManagement_get_BytesInQueue(This,pvBytesInQueue) ( (This)->lpVtbl -> get_BytesInQueue(This,pvBytesInQueue) )
#define IMSMQOutgoingQueueManagement_get_State(This,plState) ( (This)->lpVtbl -> get_State(This,plState) )
#define IMSMQOutgoingQueueManagement_get_NextHops(This,pvNextHops) ( (This)->lpVtbl -> get_NextHops(This,pvNextHops) )
#define IMSMQOutgoingQueueManagement_EodGetSendInfo(This,ppCollection) ( (This)->lpVtbl -> EodGetSendInfo(This,ppCollection) )
#define IMSMQOutgoingQueueManagement_Resume(This) ( (This)->lpVtbl -> Resume(This) )
#define IMSMQOutgoingQueueManagement_Pause(This) ( (This)->lpVtbl -> Pause(This) )
#define IMSMQOutgoingQueueManagement_EodResend(This) ( (This)->lpVtbl -> EodResend(This) )
#endif
#endif
extern const CLSID CLSID_MSMQOutgoingQueueManagement;
#ifndef __IMSMQQueueManagement_INTERFACE_DEFINED__
#define __IMSMQQueueManagement_INTERFACE_DEFINED__
extern const IID IID_IMSMQQueueManagement;
typedef struct IMSMQQueueManagementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSMQQueueManagement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSMQQueueManagement * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSMQQueueManagement * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSMQQueueManagement * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSMQQueueManagement * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSMQQueueManagement * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSMQQueueManagement * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Init) (IMSMQQueueManagement * This, VARIANT * Machine, VARIANT * Pathname, VARIANT * FormatName);
	HRESULT(STDMETHODCALLTYPE * get_FormatName) (IMSMQQueueManagement * This, BSTR * pbstrFormatName);
	HRESULT(STDMETHODCALLTYPE * get_Machine) (IMSMQQueueManagement * This, BSTR * pbstrMachine);
	HRESULT(STDMETHODCALLTYPE * get_MessageCount) (IMSMQQueueManagement * This, long *plMessageCount);
	HRESULT(STDMETHODCALLTYPE * get_ForeignStatus) (IMSMQQueueManagement * This, long *plForeignStatus);
	HRESULT(STDMETHODCALLTYPE * get_QueueType) (IMSMQQueueManagement * This, long *plQueueType);
	HRESULT(STDMETHODCALLTYPE * get_IsLocal) (IMSMQQueueManagement * This, VARIANT_BOOL * pfIsLocal);
	HRESULT(STDMETHODCALLTYPE * get_TransactionalStatus) (IMSMQQueueManagement * This, long *plTransactionalStatus);
	HRESULT(STDMETHODCALLTYPE * get_BytesInQueue) (IMSMQQueueManagement * This, VARIANT * pvBytesInQueue);
	HRESULT(STDMETHODCALLTYPE * get_JournalMessageCount) (IMSMQQueueManagement * This, long *plJournalMessageCount);
	HRESULT(STDMETHODCALLTYPE * get_BytesInJournal) (IMSMQQueueManagement * This, VARIANT * pvBytesInJournal);
	HRESULT(STDMETHODCALLTYPE * EodGetReceiveInfo) (IMSMQQueueManagement * This, VARIANT * pvCollection);
	END_INTERFACE
}  IMSMQQueueManagementVtbl;
interface IMSMQQueueManagement
{
	CONST_VTBL struct IMSMQQueueManagementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSMQQueueManagement_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMSMQQueueManagement_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMSMQQueueManagement_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMSMQQueueManagement_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMSMQQueueManagement_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMSMQQueueManagement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMSMQQueueManagement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMSMQQueueManagement_Init(This,Machine,Pathname,FormatName) ( (This)->lpVtbl -> Init(This,Machine,Pathname,FormatName) )
#define IMSMQQueueManagement_get_FormatName(This,pbstrFormatName) ( (This)->lpVtbl -> get_FormatName(This,pbstrFormatName) )
#define IMSMQQueueManagement_get_Machine(This,pbstrMachine) ( (This)->lpVtbl -> get_Machine(This,pbstrMachine) )
#define IMSMQQueueManagement_get_MessageCount(This,plMessageCount) ( (This)->lpVtbl -> get_MessageCount(This,plMessageCount) )
#define IMSMQQueueManagement_get_ForeignStatus(This,plForeignStatus) ( (This)->lpVtbl -> get_ForeignStatus(This,plForeignStatus) )
#define IMSMQQueueManagement_get_QueueType(This,plQueueType) ( (This)->lpVtbl -> get_QueueType(This,plQueueType) )
#define IMSMQQueueManagement_get_IsLocal(This,pfIsLocal) ( (This)->lpVtbl -> get_IsLocal(This,pfIsLocal) )
#define IMSMQQueueManagement_get_TransactionalStatus(This,plTransactionalStatus) ( (This)->lpVtbl -> get_TransactionalStatus(This,plTransactionalStatus) )
#define IMSMQQueueManagement_get_BytesInQueue(This,pvBytesInQueue) ( (This)->lpVtbl -> get_BytesInQueue(This,pvBytesInQueue) )
#define IMSMQQueueManagement_get_JournalMessageCount(This,plJournalMessageCount) ( (This)->lpVtbl -> get_JournalMessageCount(This,plJournalMessageCount) )
#define IMSMQQueueManagement_get_BytesInJournal(This,pvBytesInJournal) ( (This)->lpVtbl -> get_BytesInJournal(This,pvBytesInJournal) )
#define IMSMQQueueManagement_EodGetReceiveInfo(This,pvCollection) ( (This)->lpVtbl -> EodGetReceiveInfo(This,pvCollection) )
#endif
#endif
extern const CLSID CLSID_MSMQQueueManagement;
#endif
#endif
