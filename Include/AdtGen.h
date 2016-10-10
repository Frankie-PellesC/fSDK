/*+@@file@@----------------------------------------------------------------*//*!
 \file		AdtGen.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  1 13:16:46 2016
 \date		Modified on Fri Jul  1 13:16:46 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#ifndef _ADTGEN_H
#define _ADTGEN_H
#define AUDIT_TYPE_LEGACY 1
#define AUDIT_TYPE_WMI    2
typedef enum _AUDIT_PARAM_TYPE
{
    APT_None = 1,
    APT_String,
    APT_Ulong,
    APT_Pointer,
    APT_Sid,
    APT_LogonId,
    APT_ObjectTypeList,
    APT_Luid,
    APT_Guid,
    APT_Time,
    APT_Int64,
    APT_IpAddress,
    APT_LogonIdWithSid
} AUDIT_PARAM_TYPE;
#define AP_ParamTypeBits  8
#define AP_ParamTypeMask  0x000000ffL
#define AP_FormatHex      (0x0001L << AP_ParamTypeBits)
#define AP_AccessMask     (0x0002L << AP_ParamTypeBits)
#define AP_Filespec       (0x0001L << AP_ParamTypeBits)
#define AP_PrimaryLogonId (0x0001L << AP_ParamTypeBits)
#define AP_ClientLogonId  (0x0002L << AP_ParamTypeBits)
#define ApExtractType(TypeFlags)  ((AUDIT_PARAM_TYPE)(TypeFlags & AP_ParamTypeMask))
#define ApExtractFlags(TypeFlags) ((TypeFlags & ~AP_ParamTypeMask))
typedef struct _AUDIT_OBJECT_TYPE
{
    GUID        ObjectType;
    USHORT      Flags;
    USHORT      Level;
    ACCESS_MASK AccessMask;
} AUDIT_OBJECT_TYPE, *PAUDIT_OBJECT_TYPE;
typedef struct _AUDIT_OBJECT_TYPES
{
    USHORT Count;
    USHORT Flags;
#ifdef MIDL_PASS
    [size_is(Count)]
#endif
    AUDIT_OBJECT_TYPE* pObjectTypes;
} AUDIT_OBJECT_TYPES, *PAUDIT_OBJECT_TYPES;
#define _AUTHZ_SS_MAXSIZE 128
typedef struct _AUDIT_IP_ADDRESS
{
	BYTE pIpAddress[_AUTHZ_SS_MAXSIZE];
} AUDIT_IP_ADDRESS, *PAUDIT_IP_ADDRESS;
typedef struct _AUDIT_PARAM
{
    AUDIT_PARAM_TYPE Type;
    ULONG Length;
    DWORD Flags;
#ifdef MIDL_PASS
    [switch_type(AUDIT_PARAM_TYPE),switch_is(Type)]
#endif
    union 
    {
#ifdef MIDL_PASS
        [default]
#endif
        ULONG_PTR Data0;
#ifdef MIDL_PASS
        [case(APT_String)]
        [string]
#endif
        PWSTR  String;
        
#ifdef MIDL_PASS
        [case(APT_Ulong,
              APT_Pointer)]
#endif
        ULONG_PTR u;
        
#ifdef MIDL_PASS
        [case(APT_Sid)]
#endif
        SID* psid;
        
#ifdef MIDL_PASS
        [case(APT_Guid)]
#endif
        GUID* pguid;
#ifdef MIDL_PASS
        [case(APT_LogonId)]
#endif
        ULONG LogonId_LowPart;
#ifdef MIDL_PASS
        [case(APT_ObjectTypeList)]
#endif
        AUDIT_OBJECT_TYPES* pObjectTypes;
        
#ifdef MIDL_PASS
        [case(APT_IpAddress)]
#endif
        AUDIT_IP_ADDRESS* pIpAddress;
    };
#ifdef MIDL_PASS
    [switch_type(AUDIT_PARAM_TYPE),switch_is(Type)]
#endif
    union 
    {
#ifdef MIDL_PASS
        [default]
#endif
        ULONG_PTR Data1;
#ifdef MIDL_PASS
        [case(APT_LogonId)]
#endif
        LONG LogonId_HighPart;
    };
    
} AUDIT_PARAM, *PAUDIT_PARAM;
#define APF_AuditFailure 0x00000000
#define APF_AuditSuccess 0x00000001
#define APF_ValidFlags   (APF_AuditSuccess)
typedef struct _AUDIT_PARAMS
{
    ULONG  Length;
    DWORD  Flags;
    USHORT Count;
#ifdef MIDL_PASS
    [size_is(Count)]
#endif    
    AUDIT_PARAM* Parameters;
} AUDIT_PARAMS, *PAUDIT_PARAMS;
typedef struct _AUTHZ_AUDIT_EVENT_TYPE_LEGACY
{
    USHORT CategoryId;
    USHORT AuditId;
    USHORT ParameterCount;
    
} AUTHZ_AUDIT_EVENT_TYPE_LEGACY, *PAUTHZ_AUDIT_EVENT_TYPE_LEGACY;
typedef
#ifdef MIDL_PASS
[switch_type(BYTE)]
#endif
union _AUTHZ_AUDIT_EVENT_TYPE_UNION
{
#ifdef MIDL_PASS
        [case(AUDIT_TYPE_LEGACY)]
#endif
        AUTHZ_AUDIT_EVENT_TYPE_LEGACY Legacy;
} AUTHZ_AUDIT_EVENT_TYPE_UNION, *PAUTHZ_AUDIT_EVENT_TYPE_UNION;
typedef
struct _AUTHZ_AUDIT_EVENT_TYPE_OLD
{
    ULONG Version;
    DWORD dwFlags;
    LONG  RefCount;
    ULONG_PTR hAudit;
    LUID  LinkId;
#ifdef MIDL_PASS
    [switch_is(Version)] 
#endif
    AUTHZ_AUDIT_EVENT_TYPE_UNION u;
} AUTHZ_AUDIT_EVENT_TYPE_OLD;
typedef
#ifdef MIDL_PASS
[handle]
#endif
AUTHZ_AUDIT_EVENT_TYPE_OLD* PAUTHZ_AUDIT_EVENT_TYPE_OLD;
typedef
#ifdef MIDL_PASS
[context_handle]
#endif
PVOID AUDIT_HANDLE, *PAUDIT_HANDLE;
#define AUTHZ_ALLOW_MULTIPLE_SOURCE_INSTANCES 0x1
#define AUTHZ_MIGRATED_LEGACY_PUBLISHER       0x2
#define AUTHZ_AUDIT_INSTANCE_INFORMATION 0x2
#endif
