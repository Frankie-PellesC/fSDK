/*+@@file@@----------------------------------------------------------------*//*!
 \file		iscsierr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 20:50:24 2016
 \date		Modified on Sun Jul 17 20:50:24 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#if __POCC__ >= 500
#pragma once
#endif

#ifndef _ISCSIERR_
#define _ISCSIERR_
#ifndef MOFCOMP_PASS
typedef ULONG ISDSC_STATUS;
#endif
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3
#define ISDSC_NON_SPECIFIC_ERROR         ((ISDSC_STATUS)0xEFFF0001L)
#define ISDSC_LOGIN_FAILED               ((ISDSC_STATUS)0xEFFF0002L)
#define ISDSC_CONNECTION_FAILED          ((ISDSC_STATUS)0xEFFF0003L)
#define ISDSC_INITIATOR_NODE_ALREADY_EXISTS ((ISDSC_STATUS)0xEFFF0004L)
#define ISDSC_INITIATOR_NODE_NOT_FOUND   ((ISDSC_STATUS)0xEFFF0005L)
#define ISDSC_TARGET_MOVED_TEMPORARILY   ((ISDSC_STATUS)0xEFFF0006L)
#define ISDSC_TARGET_MOVED_PERMANENTLY   ((ISDSC_STATUS)0xEFFF0007L)
#define ISDSC_INITIATOR_ERROR            ((ISDSC_STATUS)0xEFFF0008L)
#define ISDSC_AUTHENTICATION_FAILURE     ((ISDSC_STATUS)0xEFFF0009L)
#define ISDSC_AUTHORIZATION_FAILURE      ((ISDSC_STATUS)0xEFFF000AL)
#define ISDSC_NOT_FOUND                  ((ISDSC_STATUS)0xEFFF000BL)
#define ISDSC_TARGET_REMOVED             ((ISDSC_STATUS)0xEFFF000CL)
#define ISDSC_UNSUPPORTED_VERSION        ((ISDSC_STATUS)0xEFFF000DL)
#define ISDSC_TOO_MANY_CONNECTIONS       ((ISDSC_STATUS)0xEFFF000EL)
#define ISDSC_MISSING_PARAMETER          ((ISDSC_STATUS)0xEFFF000FL)
#define ISDSC_CANT_INCLUDE_IN_SESSION    ((ISDSC_STATUS)0xEFFF0010L)
#define ISDSC_SESSION_TYPE_NOT_SUPPORTED ((ISDSC_STATUS)0xEFFF0011L)
#define ISDSC_TARGET_ERROR               ((ISDSC_STATUS)0xEFFF0012L)
#define ISDSC_SERVICE_UNAVAILABLE        ((ISDSC_STATUS)0xEFFF0013L)
#define ISDSC_OUT_OF_RESOURCES           ((ISDSC_STATUS)0xEFFF0014L)
#define ISDSC_CONNECTION_ALREADY_EXISTS  ((ISDSC_STATUS)0xEFFF0015L)
#define ISDSC_SESSION_ALREADY_EXISTS     ((ISDSC_STATUS)0xEFFF0016L)
#define ISDSC_INITIATOR_INSTANCE_NOT_FOUND ((ISDSC_STATUS)0xEFFF0017L)
#define ISDSC_TARGET_ALREADY_EXISTS      ((ISDSC_STATUS)0xEFFF0018L)
#define ISDSC_DRIVER_BUG                 ((ISDSC_STATUS)0xEFFF0019L)
#define ISDSC_INVALID_TEXT_KEY           ((ISDSC_STATUS)0xEFFF001AL)
#define ISDSC_INVALID_SENDTARGETS_TEXT   ((ISDSC_STATUS)0xEFFF001BL)
#define ISDSC_INVALID_SESSION_ID         ((ISDSC_STATUS)0xEFFF001CL)
#define ISDSC_SCSI_REQUEST_FAILED        ((ISDSC_STATUS)0xEFFF001DL)
#define ISDSC_TOO_MANY_SESSIONS          ((ISDSC_STATUS)0xEFFF001EL)
#define ISDSC_SESSION_BUSY               ((ISDSC_STATUS)0xEFFF001FL)
#define ISDSC_TARGET_MAPPING_UNAVAILABLE ((ISDSC_STATUS)0xEFFF0020L)
#define ISDSC_ADDRESS_TYPE_NOT_SUPPORTED ((ISDSC_STATUS)0xEFFF0021L)
#define ISDSC_LOGON_FAILED               ((ISDSC_STATUS)0xEFFF0022L)
#define ISDSC_SEND_FAILED                ((ISDSC_STATUS)0xEFFF0023L)
#define ISDSC_TRANSPORT_ERROR            ((ISDSC_STATUS)0xEFFF0024L)
#define ISDSC_VERSION_MISMATCH           ((ISDSC_STATUS)0xEFFF0025L)
#define ISDSC_TARGET_MAPPING_OUT_OF_RANGE ((ISDSC_STATUS)0xEFFF0026L)
#define ISDSC_TARGET_PRESHAREDKEY_UNAVAILABLE ((ISDSC_STATUS)0xEFFF0027L)
#define ISDSC_TARGET_AUTHINFO_UNAVAILABLE ((ISDSC_STATUS)0xEFFF0028L)
#define ISDSC_TARGET_NOT_FOUND           ((ISDSC_STATUS)0xEFFF0029L)
#define ISDSC_LOGIN_USER_INFO_BAD        ((ISDSC_STATUS)0xEFFF002AL)
#define ISDSC_TARGET_MAPPING_EXISTS      ((ISDSC_STATUS)0xEFFF002BL)
#define ISDSC_HBA_SECURITY_CACHE_FULL    ((ISDSC_STATUS)0xEFFF002CL)
#define ISDSC_INVALID_PORT_NUMBER        ((ISDSC_STATUS)0xEFFF002DL)
#define ISDSC_OPERATION_NOT_ALL_SUCCESS  ((ISDSC_STATUS)0xAFFF002EL)
#define ISDSC_HBA_SECURITY_CACHE_NOT_SUPPORTED ((ISDSC_STATUS)0xEFFF002FL)
#define ISDSC_IKE_ID_PAYLOAD_TYPE_NOT_SUPPORTED ((ISDSC_STATUS)0xEFFF0030L)
#define ISDSC_IKE_ID_PAYLOAD_INCORRECT_SIZE ((ISDSC_STATUS)0xEFFF0031L)
#define ISDSC_TARGET_PORTAL_ALREADY_EXISTS ((ISDSC_STATUS)0xEFFF0032L)
#define ISDSC_TARGET_ADDRESS_ALREADY_EXISTS ((ISDSC_STATUS)0xEFFF0033L)
#define ISDSC_NO_AUTH_INFO_AVAILABLE     ((ISDSC_STATUS)0xEFFF0034L)
#define ISDSC_NO_TUNNEL_OUTER_MODE_ADDRESS ((ISDSC_STATUS)0xEFFF0035L)
#define ISDSC_CACHE_CORRUPTED            ((ISDSC_STATUS)0xEFFF0036L)
#define ISDSC_REQUEST_NOT_SUPPORTED      ((ISDSC_STATUS)0xEFFF0037L)
#define ISDSC_TARGET_OUT_OF_RESORCES     ((ISDSC_STATUS)0xEFFF0038L)
#define ISDSC_SERVICE_DID_NOT_RESPOND    ((ISDSC_STATUS)0xEFFF0039L)
#define ISDSC_ISNS_SERVER_NOT_FOUND      ((ISDSC_STATUS)0xEFFF003AL)
#define ISDSC_OPERATION_REQUIRES_REBOOT  ((ISDSC_STATUS)0xAFFF003BL)
#define ISDSC_NO_PORTAL_SPECIFIED        ((ISDSC_STATUS)0xEFFF003CL)
#define ISDSC_CANT_REMOVE_LAST_CONNECTION ((ISDSC_STATUS)0xEFFF003DL)
#define ISDSC_SERVICE_NOT_RUNNING        ((ISDSC_STATUS)0xEFFF003EL)
#define ISDSC_TARGET_ALREADY_LOGGED_IN   ((ISDSC_STATUS)0xEFFF003FL)
#define ISDSC_DEVICE_BUSY_ON_SESSION     ((ISDSC_STATUS)0xEFFF0040L)
#define ISDSC_COULD_NOT_SAVE_PERSISTENT_LOGIN_DATA ((ISDSC_STATUS)0xEFFF0041L)
#define ISDSC_COULD_NOT_REMOVE_PERSISTENT_LOGIN_DATA ((ISDSC_STATUS)0xEFFF0042L)
#define ISDSC_PORTAL_NOT_FOUND           ((ISDSC_STATUS)0xEFFF0043L)
#define ISDSC_INITIATOR_NOT_FOUND        ((ISDSC_STATUS)0xEFFF0044L)
#define ISDSC_DISCOVERY_MECHANISM_NOT_FOUND ((ISDSC_STATUS)0xEFFF0045L)
#define ISDSC_IPSEC_NOT_SUPPORTED_ON_OS  ((ISDSC_STATUS)0xEFFF0046L)
#define ISDSC_PERSISTENT_LOGIN_TIMEOUT   ((ISDSC_STATUS)0xEFFF0047L)
#define ISDSC_SHORT_CHAP_SECRET          ((ISDSC_STATUS)0xAFFF0048L)
#define ISDSC_EVALUATION_PEROID_EXPIRED  ((ISDSC_STATUS)0xEFFF0049L)
#define ISDSC_INVALID_CHAP_SECRET        ((ISDSC_STATUS)0xEFFF004AL)
#define ISDSC_INVALID_TARGET_CHAP_SECRET ((ISDSC_STATUS)0xEFFF004BL)
#define ISDSC_INVALID_INITIATOR_CHAP_SECRET ((ISDSC_STATUS)0xEFFF004CL)
#define ISDSC_INVALID_CHAP_USER_NAME     ((ISDSC_STATUS)0xEFFF004DL)
#define ISDSC_INVALID_LOGON_AUTH_TYPE    ((ISDSC_STATUS)0xEFFF004EL)
#define ISDSC_INVALID_TARGET_MAPPING     ((ISDSC_STATUS)0xEFFF004FL)
#define ISDSC_INVALID_TARGET_ID          ((ISDSC_STATUS)0xEFFF0050L)
#define ISDSC_INVALID_ISCSI_NAME         ((ISDSC_STATUS)0xEFFF0051L)
#define ISDSC_INCOMPATIBLE_ISNS_VERSION  ((ISDSC_STATUS)0xEFFF0052L)
#define ISDSC_FAILED_TO_CONFIGURE_IPSEC  ((ISDSC_STATUS)0xEFFF0053L)
#define ISDSC_BUFFER_TOO_SMALL           ((ISDSC_STATUS)0xEFFF0054L)
#define ISDSC_INVALID_LOAD_BALANCE_POLICY ((ISDSC_STATUS)0xEFFF0055L)
#define ISDSC_INVALID_PARAMETER          ((ISDSC_STATUS)0xEFFF0056L)
#define ISDSC_DUPLICATE_PATH_SPECIFIED   ((ISDSC_STATUS)0xEFFF0057L)
#define ISDSC_PATH_COUNT_MISMATCH        ((ISDSC_STATUS)0xEFFF0058L)
#define ISDSC_INVALID_PATH_ID            ((ISDSC_STATUS)0xEFFF0059L)
#define ISDSC_MULTIPLE_PRIMARY_PATHS_SPECIFIED ((ISDSC_STATUS)0xEFFF005AL)
#define ISDSC_NO_PRIMARY_PATH_SPECIFIED  ((ISDSC_STATUS)0xEFFF005BL)
#define ISDSC_DEVICE_ALREADY_PERSISTENTLY_BOUND ((ISDSC_STATUS)0xEFFF005CL)
#define ISDSC_DEVICE_NOT_FOUND           ((ISDSC_STATUS)0xEFFF005DL)
#define ISDSC_DEVICE_NOT_ISCSI_OR_PERSISTENT ((ISDSC_STATUS)0xEFFF005EL)
#define ISDSC_DNS_NAME_UNRESOLVED        ((ISDSC_STATUS)0xEFFF005FL)
#define ISDSC_NO_CONNECTION_AVAILABLE    ((ISDSC_STATUS)0xEFFF0060L)
#define ISDSC_LB_POLICY_NOT_SUPPORTED    ((ISDSC_STATUS)0xEFFF0061L)
#define ISDSC_REMOVE_CONNECTION_IN_PROGRESS ((ISDSC_STATUS)0xEFFF0062L)
#define ISDSC_INVALID_CONNECTION_ID      ((ISDSC_STATUS)0xEFFF0063L)
#define ISDSC_CANNOT_REMOVE_LEADING_CONNECTION ((ISDSC_STATUS)0xEFFF0064L)
#define ISDSC_RESTRICTED_BY_GROUP_POLICY ((ISDSC_STATUS)0xEFFF0065L)
#define ISDSC_ISNS_FIREWALL_BLOCKED      ((ISDSC_STATUS)0xEFFF0066L)
#define ISDSC_FAILURE_TO_PERSIST_LB_POLICY ((ISDSC_STATUS)0xEFFF0067L)
#define ISDSC_INVALID_HOST               ((ISDSC_STATUS)0xEFFF0068L)
#endif

