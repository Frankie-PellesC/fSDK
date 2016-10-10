/*+@@file@@----------------------------------------------------------------*//*!
 \file		dhcpv6csdk.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jul  5 18:35:46 2016
 \date		Modified on Tue Jul  5 18:35:46 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _DHCPV6CSDK_
#define _DHCPV6CSDK_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef DHCPV6_OPTIONS_DEFINED
#define DHCPV6_OPTIONS_DEFINED
#define    DHCPV6_OPTION_CLIENTID        1
#define    DHCPV6_OPTION_SERVERID       2
#define    DHCPV6_OPTION_IA_NA             3
#define    DHCPV6_OPTION_IA_TA             4
#define    DHCPV6_OPTION_ORO                6
#define    DHCPV6_OPTION_PREFERENCE  7
#define    DHCPV6_OPTION_UNICAST        12
#define    DHCPV6_OPTION_RAPID_COMMIT  14
#define    DHCPV6_OPTION_USER_CLASS  15
#define    DHCPV6_OPTION_VENDOR_CLASS  16
#define    DHCPV6_OPTION_VENDOR_OPTS  17
#define    DHCPV6_OPTION_RECONF_MSG  19
#define    DHCPV6_OPTION_SIP_SERVERS_NAMES 21
#define    DHCPV6_OPTION_SIP_SERVERS_ADDRS 22
#define    DHCPV6_OPTION_DNS_SERVERS 23
#define    DHCPV6_OPTION_DOMAIN_LIST 24
#define    DHCPV6_OPTION_IA_PD             25
#define    DHCPV6_OPTION_NIS_SERVERS 27
#define    DHCPV6_OPTION_NISP_SERVERS 28
#define    DHCPV6_OPTION_NIS_DOMAIN_NAME  29
#define    DHCPV6_OPTION_NISP_DOMAIN_NAME  30
#endif
#ifndef DHCPV6API_PARAMS_DEFINED
#define DHCPV6API_PARAMS_DEFINED
typedef struct _DHCPV6CAPI_PARAMS
{
	ULONG Flags;
	ULONG OptionId;
	BOOL IsVendor;
	LPBYTE Data;
	DWORD nBytesData;
} DHCPV6CAPI_PARAMS, *PDHCPV6CAPI_PARAMS, *LPDHCPV6CAPI_PARAMS;
#endif
typedef struct _DHCPV6CAPI_PARAMS_ARRAY
{
	ULONG nParams;
	LPDHCPV6CAPI_PARAMS Params;
} DHCPV6CAPI_PARAMS_ARRAY, *PDHCPV6CAPI_PARAMS_ARRAY, *LPDHCPV6CAPI_PARAMS_ARRAY;
typedef struct _DHCPV6CAPI_CLASSID
{
	ULONG Flags;
	LPBYTE Data;
	ULONG nBytesData;
} DHCPV6CAPI_CLASSID, *PDHCPV6CAPI_CLASSID, *LPDHCPV6CAPI_CLASSID;
typedef enum
{
	STATUS_NO_ERROR,
	STATUS_UNSPECIFIED_FAILURE,
	STATUS_NO_BINDING = 3,
	STATUS_NOPREFIX_AVAIL = 6
} StatusCode;

typedef struct _DHCPV6Prefix
{
	UCHAR prefix[16];
	DWORD prefixLength;
	DWORD preferredLifeTime;
	DWORD validLifeTime;
	StatusCode status;
} DHCPV6Prefix, *PDHCPV6Prefix, *LPDHCPV6Prefix;
#include <time.h>
typedef struct _DHCPV6PrefixLeaseInformation
{
	DWORD nPrefixes;
	LPDHCPV6Prefix prefixArray;
	DWORD iaid;
	time_t T1;
	time_t T2;
	time_t MaxLeaseExpirationTime;
	time_t LastRenewalTime;
	StatusCode status;
	LPBYTE ServerId;
	DWORD ServerIdLen;
} DHCPV6PrefixLeaseInformation, *PDHCPV6PrefixLeaseInformation, *LPDHCPV6PrefixLeaseInformation;
VOID APIENTRY Dhcpv6CApiInitialize(LPDWORD Version);
VOID APIENTRY Dhcpv6CApiCleanup(VOID);
DWORD APIENTRY Dhcpv6RequestParams(BOOL forceNewInform, LPVOID reserved, LPWSTR adapterName, LPDHCPV6CAPI_CLASSID classId, DHCPV6CAPI_PARAMS_ARRAY recdParams, LPBYTE buffer, LPDWORD pSize);
DWORD APIENTRY Dhcpv6RequestPrefix(LPWSTR adapterName, LPDHCPV6CAPI_CLASSID pclassId, LPDHCPV6PrefixLeaseInformation prefixleaseInfo, DWORD *pdwTimeToWait);
DWORD APIENTRY Dhcpv6RenewPrefix(LPWSTR adapterName, LPDHCPV6CAPI_CLASSID pclassId, LPDHCPV6PrefixLeaseInformation prefixleaseInfo, DWORD *pdwTimeToWait, DWORD bValidatePrefix);
DWORD APIENTRY Dhcpv6ReleasePrefix(LPWSTR adapterName, LPDHCPV6CAPI_CLASSID classId, LPDHCPV6PrefixLeaseInformation leaseInfo);
#endif
