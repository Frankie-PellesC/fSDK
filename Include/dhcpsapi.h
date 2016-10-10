/*+@@file@@----------------------------------------------------------------*//*!
 \file		dhcpsapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jul  5 18:12:26 2016
 \date		Modified on Tue Jul  5 18:12:26 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _DHCPSAPI_
#define _DHCPSAPI_
#if __POCC__ >= 500
#pragma once
#endif
#define DHCP_API_FUNCTION    __stdcall
#define DHCP_CONST
#ifndef _DHCP_
typedef DWORD DHCP_IP_ADDRESS, *PDHCP_IP_ADDRESS, *LPDHCP_IP_ADDRESS;
typedef DWORD DHCP_OPTION_ID;
typedef struct _DATE_TIME
{
	DWORD dwLowDateTime;
	DWORD dwHighDateTime;
} DATE_TIME, *PDATE_TIME, *LPDATE_TIME;
#endif
typedef DWORD DHCP_IP_MASK;
typedef DWORD DHCP_RESUME_HANDLE;
typedef struct _DHCP_IP_RANGE
{
	DHCP_IP_ADDRESS StartAddress;
	DHCP_IP_ADDRESS EndAddress;
} DHCP_IP_RANGE, *LPDHCP_IP_RANGE;
typedef struct _DHCP_BINARY_DATA
{
	DWORD DataLength;
	BYTE *Data;
} DHCP_BINARY_DATA, *LPDHCP_BINARY_DATA;
typedef DHCP_BINARY_DATA DHCP_CLIENT_UID;
typedef struct _DHCP_HOST_INFO
{
	DHCP_IP_ADDRESS IpAddress;
	LPWSTR NetBiosName;
	LPWSTR HostName;
} DHCP_HOST_INFO, *LPDHCP_HOST_INFO;
typedef enum _DHCP_FORCE_FLAG
{
	DhcpFullForce,
	DhcpNoForce
} DHCP_FORCE_FLAG, *LPDHCP_FORCE_FLAG;
typedef struct _DWORD_DWORD
{
	DWORD DWord1;
	DWORD DWord2;
} DWORD_DWORD, *LPDWORD_DWORD;
typedef enum _DHCP_SUBNET_STATE
{
	DhcpSubnetEnabled = 0,
	DhcpSubnetDisabled,
	DhcpSubnetEnabledSwitched,
	DhcpSubnetDisabledSwitched,
	DhcpSubnetInvalidState
} DHCP_SUBNET_STATE, *LPDHCP_SUBNET_STATE;
typedef struct _DHCP_SUBNET_INFO
{
	DHCP_IP_ADDRESS SubnetAddress;
	DHCP_IP_MASK SubnetMask;
	LPWSTR SubnetName;
	LPWSTR SubnetComment;
	DHCP_HOST_INFO PrimaryHost;
	DHCP_SUBNET_STATE SubnetState;
} DHCP_SUBNET_INFO, *LPDHCP_SUBNET_INFO;
#define DHCP_SUBNET_INFO_VQ_FLAG_QUARANTINE    (1 << 0)
typedef struct _DHCP_SUBNET_INFO_VQ
{
	DHCP_IP_ADDRESS SubnetAddress;
	DHCP_IP_MASK SubnetMask;
	LPWSTR SubnetName;
	LPWSTR SubnetComment;
	DHCP_HOST_INFO PrimaryHost;
	DHCP_SUBNET_STATE SubnetState;
	DWORD QuarantineOn;
	DWORD Reserved1;
	DWORD Reserved2;
	INT64 Reserved3;
	INT64 Reserved4;
} DHCP_SUBNET_INFO_VQ, *LPDHCP_SUBNET_INFO_VQ;
typedef struct _DHCP_IP_ARRAY
{
	DWORD NumElements;
	LPDHCP_IP_ADDRESS Elements;
} DHCP_IP_ARRAY, *LPDHCP_IP_ARRAY;
typedef struct _DHCP_IP_CLUSTER
{
	DHCP_IP_ADDRESS ClusterAddress;
	DWORD ClusterMask;
} DHCP_IP_CLUSTER, *LPDHCP_IP_CLUSTER;
typedef struct _DHCP_IP_RESERVATION
{
	DHCP_IP_ADDRESS ReservedIpAddress;
	DHCP_CLIENT_UID *ReservedForClient;
} DHCP_IP_RESERVATION, *LPDHCP_IP_RESERVATION;
typedef enum _DHCP_SUBNET_ELEMENT_TYPE_V5
{
	DhcpIpRanges,
	DhcpSecondaryHosts,
	DhcpReservedIps,
	DhcpExcludedIpRanges,
	DhcpIpUsedClusters,
	DhcpIpRangesDhcpOnly,
	DhcpIpRangesDhcpBootp,
	DhcpIpRangesBootpOnly,
} DHCP_SUBNET_ELEMENT_TYPE, *LPDHCP_SUBNET_ELEMENT_TYPE;
#define ELEMENT_MASK(E) ((((E) <= DhcpIpRangesBootpOnly) && (DhcpIpRangesDhcpOnly <= (E)))?(0):(E))
typedef struct _DHCP_SUBNET_ELEMENT_DATA
{
	DHCP_SUBNET_ELEMENT_TYPE ElementType;
	union _DHCP_SUBNET_ELEMENT_UNION
	{
		DHCP_IP_RANGE *IpRange;
		DHCP_HOST_INFO *SecondaryHost;
		DHCP_IP_RESERVATION *ReservedIp;
		DHCP_IP_RANGE *ExcludeIpRange;
		DHCP_IP_CLUSTER *IpUsedCluster;
	} Element;
} DHCP_SUBNET_ELEMENT_DATA, *LPDHCP_SUBNET_ELEMENT_DATA;
typedef struct _DHCP_SUBNET_ELEMENT_INFO_ARRAY
{
	DWORD NumElements;
	LPDHCP_SUBNET_ELEMENT_DATA Elements;
} DHCP_SUBNET_ELEMENT_INFO_ARRAY, *LPDHCP_SUBNET_ELEMENT_INFO_ARRAY;
typedef struct _DHCP_IPV6_ADDRESS
{
	ULONGLONG HighOrderBits;
	ULONGLONG LowOrderBits;
} DHCP_IPV6_ADDRESS, *LPDHCP_IPV6_ADDRESS, *PDHCP_IPV6_ADDRESS;
typedef DHCP_IPV6_ADDRESS DHCP_RESUME_IPV6_HANDLE;
#define MAX_PATTERN_LENGTH      255
#define MAC_ADDRESS_LENGTH      6
#define HWTYPE_ETHERNET_10MB    1
typedef enum _DHCP_FILTER_LIST_TYPE
{
	Deny,
	Allow
} DHCP_FILTER_LIST_TYPE, *LPDHCP_FILTER_LIST_TYPE;
typedef struct _DHCP_ADDR_PATTERN
{
	BOOL MatchHWType;
	BYTE HWType;
	BOOL IsWildcard;
	BYTE Length;
	BYTE Pattern[MAX_PATTERN_LENGTH];
} DHCP_ADDR_PATTERN, *LPDHCP_ADDR_PATTERN;
typedef struct _DHCP_FILTER_ADD_INFOV4
{
	DHCP_ADDR_PATTERN AddrPatt;
	LPWSTR Comment;
	DHCP_FILTER_LIST_TYPE ListType;
} DHCP_FILTER_ADD_INFO, *LPDHCP_FILTER_ADD_INFO;
typedef struct _DHCP_FILTER_GLOBAL_INFO
{
	BOOL EnforceAllowList;
	BOOL EnforceDenyList;
} DHCP_FILTER_GLOBAL_INFO, *LPDHCP_FILTER_GLOBAL_INFO;
typedef struct _DHCP_FILTER_RECORD
{
	DHCP_ADDR_PATTERN AddrPatt;
	LPWSTR Comment;
} DHCP_FILTER_RECORD, *LPDHCP_FILTER_RECORD;
typedef struct _DHCP_FILTER_ENUM_INFO
{
	DWORD NumElements;
	LPDHCP_FILTER_RECORD pEnumRecords;
} DHCP_FILTER_ENUM_INFO, *LPDHCP_FILTER_ENUM_INFO;
typedef enum _DHCP_OPTION_DATA_TYPE
{
	DhcpByteOption,
	DhcpWordOption,
	DhcpDWordOption,
	DhcpDWordDWordOption,
	DhcpIpAddressOption,
	DhcpStringDataOption,
	DhcpBinaryDataOption,
	DhcpEncapsulatedDataOption,
	DhcpIpv6AddressOption
} DHCP_OPTION_DATA_TYPE, *LPDHCP_OPTION_DATA_TYPE;
typedef struct _DHCP_OPTION_DATA_ELEMENT
{
	DHCP_OPTION_DATA_TYPE OptionType;
	union _DHCP_OPTION_ELEMENT_UNION
	{
		BYTE ByteOption;
		WORD WordOption;
		DWORD DWordOption;
		DWORD_DWORD DWordDWordOption;
		DHCP_IP_ADDRESS IpAddressOption;
		LPWSTR StringDataOption;
		DHCP_BINARY_DATA BinaryDataOption;
		DHCP_BINARY_DATA EncapsulatedDataOption;
		LPWSTR Ipv6AddressDataOption;
	} Element;
} DHCP_OPTION_DATA_ELEMENT, *LPDHCP_OPTION_DATA_ELEMENT;
typedef struct _DHCP_OPTION_DATA
{
	DWORD NumElements;
	LPDHCP_OPTION_DATA_ELEMENT Elements;
} DHCP_OPTION_DATA, *LPDHCP_OPTION_DATA;
typedef enum _DHCP_OPTION_TYPE
{
	DhcpUnaryElementTypeOption,
	DhcpArrayTypeOption
} DHCP_OPTION_TYPE, *LPDHCP_OPTION_TYPE;
typedef struct _DHCP_OPTION
{
	DHCP_OPTION_ID OptionID;
	LPWSTR OptionName;
	LPWSTR OptionComment;
	DHCP_OPTION_DATA DefaultValue;
	DHCP_OPTION_TYPE OptionType;
} DHCP_OPTION, *LPDHCP_OPTION;
typedef struct _DHCP_OPTION_ARRAY
{
	DWORD NumElements;
	LPDHCP_OPTION Options;
} DHCP_OPTION_ARRAY, *LPDHCP_OPTION_ARRAY;
typedef struct _DHCP_OPTION_VALUE
{
	DHCP_OPTION_ID OptionID;
	DHCP_OPTION_DATA Value;
} DHCP_OPTION_VALUE, *LPDHCP_OPTION_VALUE;
typedef struct _DHCP_OPTION_VALUE_ARRAY
{
	DWORD NumElements;
	LPDHCP_OPTION_VALUE Values;
} DHCP_OPTION_VALUE_ARRAY, *LPDHCP_OPTION_VALUE_ARRAY;
typedef enum _DHCP_OPTION_SCOPE_TYPE
{
	DhcpDefaultOptions,
	DhcpGlobalOptions,
	DhcpSubnetOptions,
	DhcpReservedOptions,
	DhcpMScopeOptions
} DHCP_OPTION_SCOPE_TYPE, *LPDHCP_OPTION_SCOPE_TYPE;
typedef struct _DHCP_RESERVED_SCOPE
{
	DHCP_IP_ADDRESS ReservedIpAddress;
	DHCP_IP_ADDRESS ReservedIpSubnetAddress;
} DHCP_RESERVED_SCOPE, *LPDHCP_RESERVED_SCOPE;
typedef struct _DHCP_OPTION_SCOPE_INFO
{
	DHCP_OPTION_SCOPE_TYPE ScopeType;
	union _DHCP_OPTION_SCOPE_UNION
	{
		PVOID DefaultScopeInfo;
		PVOID GlobalScopeInfo;
		DHCP_IP_ADDRESS SubnetScopeInfo;
		DHCP_RESERVED_SCOPE ReservedScopeInfo;
		LPWSTR MScopeInfo;
	} ScopeInfo;
} DHCP_OPTION_SCOPE_INFO, *LPDHCP_OPTION_SCOPE_INFO;
typedef enum _DHCP_OPTION_SCOPE_TYPE6
{
	DhcpDefaultOptions6,
	DhcpScopeOptions6,
	DhcpReservedOptions6,
	DhcpGlobalOptions6
} DHCP_OPTION_SCOPE_TYPE6, *LPDHCP_OPTION_SCOPE_TYPE6;
typedef struct _DHCP_RESERVED_SCOPE6
{
	DHCP_IPV6_ADDRESS ReservedIpAddress;
	DHCP_IPV6_ADDRESS ReservedIpSubnetAddress;
} DHCP_RESERVED_SCOPE6, *LPDHCP_RESERVED_SCOPE6;
typedef struct _DHCP_OPTION_SCOPE_INFO6
{
	DHCP_OPTION_SCOPE_TYPE6 ScopeType;
	union _DHCP_OPTION_SCOPE_UNION6
	{
		PVOID DefaultScopeInfo;
		DHCP_IPV6_ADDRESS SubnetScopeInfo;
		DHCP_RESERVED_SCOPE6 ReservedScopeInfo;
	} ScopeInfo;
} DHCP_OPTION_SCOPE_INFO6, *LPDHCP_OPTION_SCOPE_INFO6;
typedef struct _DHCP_OPTION_LIST
{
	DWORD NumOptions;
	DHCP_OPTION_VALUE *Options;
} DHCP_OPTION_LIST, *LPDHCP_OPTION_LIST;
typedef struct _DHCP_CLIENT_INFO
{
	DHCP_IP_ADDRESS ClientIpAddress;
	DHCP_IP_MASK SubnetMask;
	DHCP_CLIENT_UID ClientHardwareAddress;
	LPWSTR ClientName;
	LPWSTR ClientComment;
	DATE_TIME ClientLeaseExpires;
	DHCP_HOST_INFO OwnerHost;
} DHCP_CLIENT_INFO, *LPDHCP_CLIENT_INFO;
typedef struct _DHCP_CLIENT_INFO_ARRAY
{
	DWORD NumElements;
	LPDHCP_CLIENT_INFO *Clients;
} DHCP_CLIENT_INFO_ARRAY, *LPDHCP_CLIENT_INFO_ARRAY;
typedef enum _QuarantineStatus
{
	NOQUARANTINE = 0,
	RESTRICTEDACCESS,
	DROPPACKET,
	PROBATION,
	EXEMPT,
	DEFAULTQUARSETTING,
	NOQUARINFO
} QuarantineStatus;
typedef struct _DHCP_CLIENT_INFO_VQ
{
	DHCP_IP_ADDRESS ClientIpAddress;
	DHCP_IP_MASK SubnetMask;
	DHCP_CLIENT_UID ClientHardwareAddress;
	LPWSTR ClientName;
	LPWSTR ClientComment;
	DATE_TIME ClientLeaseExpires;
	DHCP_HOST_INFO OwnerHost;
	BYTE bClientType;
	BYTE AddressState;
	QuarantineStatus Status;
	DATE_TIME ProbationEnds;
	BOOL QuarantineCapable;
} DHCP_CLIENT_INFO_VQ, *LPDHCP_CLIENT_INFO_VQ;
typedef struct _DHCP_CLIENT_INFO_ARRAY_VQ
{
	DWORD NumElements;
	LPDHCP_CLIENT_INFO_VQ *Clients;
} DHCP_CLIENT_INFO_ARRAY_VQ, *LPDHCP_CLIENT_INFO_ARRAY_VQ;
#define FILTER_STATUS_NONE                          0x00000001
#define FILTER_STATUS_FULL_MATCH_IN_ALLOW_LIST      0x00000002
#define FILTER_STATUS_FULL_MATCH_IN_DENY_LIST       0x00000004
#define FILTER_STATUS_WILDCARD_MATCH_IN_ALLOW_LIST  0x00000008
#define FILTER_STATUS_WILDCARD_MATCH_IN_DENY_LIST   0x00000010
typedef struct _DHCP_CLIENT_FILTER_STATUS_INFO
{
	DHCP_IP_ADDRESS ClientIpAddress;
	DHCP_IP_MASK SubnetMask;
	DHCP_CLIENT_UID ClientHardwareAddress;
	LPWSTR ClientName;
	LPWSTR ClientComment;
	DATE_TIME ClientLeaseExpires;
	DHCP_HOST_INFO OwnerHost;
	BYTE bClientType;
	BYTE AddressState;
	QuarantineStatus Status;
	DATE_TIME ProbationEnds;
	BOOL QuarantineCapable;
	DWORD FilterStatus;
} DHCP_CLIENT_FILTER_STATUS_INFO, *LPDHCP_CLIENT_FILTER_STATUS_INFO;
typedef struct _DHCP_CLIENT_FILTER_STATUS_INFO_ARRAY
{
	DWORD NumElements;
	LPDHCP_CLIENT_FILTER_STATUS_INFO *Clients;
} DHCP_CLIENT_FILTER_STATUS_INFO_ARRAY, *LPDHCP_CLIENT_FILTER_STATUS_INFO_ARRAY;
typedef enum _DHCP_CLIENT_SEARCH_TYPE
{
	DhcpClientIpAddress,
	DhcpClientHardwareAddress,
	DhcpClientName
} DHCP_SEARCH_INFO_TYPE, *LPDHCP_SEARCH_INFO_TYPE;
typedef struct _DHCP_CLIENT_SEARCH_INFO
{
	DHCP_SEARCH_INFO_TYPE SearchType;
	union _DHCP_CLIENT_SEARCH_UNION
	{
		DHCP_IP_ADDRESS ClientIpAddress;
		DHCP_CLIENT_UID ClientHardwareAddress;
		LPWSTR ClientName;
	} SearchInfo;
} DHCP_SEARCH_INFO,     *LPDHCP_SEARCH_INFO;
typedef struct _SCOPE_MIB_INFO
{
	DHCP_IP_ADDRESS Subnet;
	DWORD NumAddressesInuse;
	DWORD NumAddressesFree;
	DWORD NumPendingOffers;
} SCOPE_MIB_INFO, *LPSCOPE_MIB_INFO;
typedef struct _DHCP_MIB_INFO
{
	DWORD Discovers;
	DWORD Offers;
	DWORD Requests;
	DWORD Acks;
	DWORD Naks;
	DWORD Declines;
	DWORD Releases;
	DATE_TIME ServerStartTime;
	DWORD Scopes;
	LPSCOPE_MIB_INFO ScopeInfo;
} DHCP_MIB_INFO, *LPDHCP_MIB_INFO;
typedef struct _SCOPE_MIB_INFO_VQ
{
	DHCP_IP_ADDRESS Subnet;
	DWORD NumAddressesInuse;
	DWORD NumAddressesFree;
	DWORD NumPendingOffers;
	DWORD QtnNumLeases;
	DWORD QtnPctQtnLeases;
	DWORD QtnProbationLeases;
	DWORD QtnNonQtnLeases;
	DWORD QtnExemptLeases;
	DWORD QtnCapableClients;
} SCOPE_MIB_INFO_VQ, *LPSCOPE_MIB_INFO_VQ;
typedef struct _DHCP_MIB_INFO_VQ
{
	DWORD Discovers;
	DWORD Offers;
	DWORD Requests;
	DWORD Acks;
	DWORD Naks;
	DWORD Declines;
	DWORD Releases;
	DATE_TIME ServerStartTime;
	DWORD QtnNumLeases;
	DWORD QtnPctQtnLeases;
	DWORD QtnProbationLeases;
	DWORD QtnNonQtnLeases;
	DWORD QtnExemptLeases;
	DWORD QtnCapableClients;
	DWORD QtnIASErrors;
	DWORD Scopes;
	LPSCOPE_MIB_INFO_VQ ScopeInfo;
} DHCP_MIB_INFO_VQ, *LPDHCP_MIB_INFO_VQ;
typedef struct _SCOPE_MIB_INFO_V5
{
	DHCP_IP_ADDRESS Subnet;
	DWORD NumAddressesInuse;
	DWORD NumAddressesFree;
	DWORD NumPendingOffers;
} SCOPE_MIB_INFO_V5, *LPSCOPE_MIB_INFO_V5;
typedef struct _DHCP_MIB_INFO_V5
{
	DWORD Discovers;
	DWORD Offers;
	DWORD Requests;
	DWORD Acks;
	DWORD Naks;
	DWORD Declines;
	DWORD Releases;
	DATE_TIME ServerStartTime;
	DWORD QtnNumLeases;
	DWORD QtnPctQtnLeases;
	DWORD QtnProbationLeases;
	DWORD QtnNonQtnLeases;
	DWORD QtnExemptLeases;
	DWORD QtnCapableClients;
	DWORD QtnIASErrors;
	DWORD DelayedOffers;
	DWORD ScopesWithDelayedOffers;
	DWORD Scopes;
	LPSCOPE_MIB_INFO_V5 ScopeInfo;
} DHCP_MIB_INFO_V5, *LPDHCP_MIB_INFO_V5;
#define Set_APIProtocolSupport          0x00000001
#define Set_DatabaseName                0x00000002
#define Set_DatabasePath                0x00000004
#define Set_BackupPath                  0x00000008
#define Set_BackupInterval              0x00000010
#define Set_DatabaseLoggingFlag         0x00000020
#define Set_RestoreFlag                 0x00000040
#define Set_DatabaseCleanupInterval     0x00000080
#define Set_DebugFlag                   0x00000100
#define Set_PingRetries                 0x00000200
#define Set_BootFileTable               0x00000400
#define Set_AuditLogState               0x00000800
#define Set_QuarantineON                0x00001000
#define Set_QuarantineDefFail           0x00002000
typedef struct _DHCP_SERVER_CONFIG_INFO
{
	DWORD APIProtocolSupport;
	LPWSTR DatabaseName;
	LPWSTR DatabasePath;
	LPWSTR BackupPath;
	DWORD BackupInterval;
	DWORD DatabaseLoggingFlag;
	DWORD RestoreFlag;
	DWORD DatabaseCleanupInterval;
	DWORD DebugFlag;
} DHCP_SERVER_CONFIG_INFO, *LPDHCP_SERVER_CONFIG_INFO;
typedef enum _DHCP_SCAN_FLAG
{
	DhcpRegistryFix,
	DhcpDatabaseFix
} DHCP_SCAN_FLAG, *LPDHCP_SCAN_FLAG;
typedef struct _DHCP_SCAN_ITEM
{
	DHCP_IP_ADDRESS IpAddress;
	DHCP_SCAN_FLAG ScanFlag;
} DHCP_SCAN_ITEM, *LPDHCP_SCAN_ITEM;
typedef struct _DHCP_SCAN_LIST
{
	DWORD NumScanItems;
	DHCP_SCAN_ITEM *ScanItems;
} DHCP_SCAN_LIST, *LPDHCP_SCAN_LIST;
typedef struct _DHCP_CLASS_INFO
{
	LPWSTR ClassName;
	LPWSTR ClassComment;
	DWORD ClassDataLength;
	BOOL IsVendor;
	DWORD Flags;
	LPBYTE ClassData;
} DHCP_CLASS_INFO, *LPDHCP_CLASS_INFO;
typedef struct _DHCP_CLASS_INFO_ARRAY
{
	DWORD NumElements;
	LPDHCP_CLASS_INFO Classes;
} DHCP_CLASS_INFO_ARRAY, *LPDHCP_CLASS_INFO_ARRAY;
typedef struct _DHCP_CLASS_INFO_V6
{
	LPWSTR ClassName;
	LPWSTR ClassComment;
	DWORD ClassDataLength;
	BOOL IsVendor;
	DWORD EnterpriseNumber;
	DWORD Flags;
	LPBYTE ClassData;
} DHCP_CLASS_INFO_V6, *LPDHCP_CLASS_INFO_V6;
typedef struct _DHCP_CLASS_INFO_ARRAY_V6
{
	DWORD NumElements;
	LPDHCP_CLASS_INFO_V6 Classes;
} DHCP_CLASS_INFO_ARRAY_V6, *LPDHCP_CLASS_INFO_ARRAY_V6;
typedef struct _DHCP_SERVER_SPECIFIC_STRINGS
{
	LPWSTR DefaultVendorClassName;
	LPWSTR DefaultUserClassName;
} DHCP_SERVER_SPECIFIC_STRINGS, *LPDHCP_SERVER_SPECIFIC_STRINGS;
typedef struct _DHCP_IP_RESERVATION_V4
{
	DHCP_IP_ADDRESS ReservedIpAddress;
	DHCP_CLIENT_UID *ReservedForClient;
	BYTE bAllowedClientTypes;
} DHCP_IP_RESERVATION_V4, *LPDHCP_IP_RESERVATION_V4;
typedef struct _DHCP_SUBNET_ELEMENT_DATA_V4
{
	DHCP_SUBNET_ELEMENT_TYPE ElementType;
	union _DHCP_SUBNET_ELEMENT_UNION_V4
	{
		DHCP_IP_RANGE *IpRange;
		DHCP_HOST_INFO *SecondaryHost;
		DHCP_IP_RESERVATION_V4 *ReservedIp;
		DHCP_IP_RANGE *ExcludeIpRange;
		DHCP_IP_CLUSTER *IpUsedCluster;
	} Element;
} DHCP_SUBNET_ELEMENT_DATA_V4, *LPDHCP_SUBNET_ELEMENT_DATA_V4;
typedef struct _DHCP_SUBNET_ELEMENT_INFO_ARRAY_V4
{
	DWORD NumElements;
	LPDHCP_SUBNET_ELEMENT_DATA_V4 Elements;
} DHCP_SUBNET_ELEMENT_INFO_ARRAY_V4, *LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V4;
#define CLIENT_TYPE_UNSPECIFIED     0x0
#define CLIENT_TYPE_DHCP            0x1
#define CLIENT_TYPE_BOOTP           0x2
#define CLIENT_TYPE_BOTH    ( CLIENT_TYPE_DHCP | CLIENT_TYPE_BOOTP )
#define CLIENT_TYPE_RESERVATION_FLAG 0x4
#define CLIENT_TYPE_NONE            0x64
typedef struct _DHCP_CLIENT_INFO_V4
{
	DHCP_IP_ADDRESS ClientIpAddress;
	DHCP_IP_MASK SubnetMask;
	DHCP_CLIENT_UID ClientHardwareAddress;
	LPWSTR ClientName;
	LPWSTR ClientComment;
	DATE_TIME ClientLeaseExpires;
	DHCP_HOST_INFO OwnerHost;
	BYTE bClientType;
} DHCP_CLIENT_INFO_V4, *LPDHCP_CLIENT_INFO_V4;
typedef struct _DHCP_CLIENT_INFO_ARRAY_V4
{
	DWORD NumElements;
	LPDHCP_CLIENT_INFO_V4 *Clients;
} DHCP_CLIENT_INFO_ARRAY_V4, *LPDHCP_CLIENT_INFO_ARRAY_V4;
typedef struct _DHCP_SERVER_CONFIG_INFO_V4
{
	DWORD APIProtocolSupport;
	LPWSTR DatabaseName;
	LPWSTR DatabasePath;
	LPWSTR BackupPath;
	DWORD BackupInterval;
	DWORD DatabaseLoggingFlag;
	DWORD RestoreFlag;
	DWORD DatabaseCleanupInterval;
	DWORD DebugFlag;
	DWORD dwPingRetries;
	DWORD cbBootTableString;
	WCHAR *wszBootTableString;
	BOOL fAuditLog;
} DHCP_SERVER_CONFIG_INFO_V4, *LPDHCP_SERVER_CONFIG_INFO_V4;
typedef struct _DHCP_SERVER_CONFIG_INFO_VQ
{
	DWORD APIProtocolSupport;
	LPWSTR DatabaseName;
	LPWSTR DatabasePath;
	LPWSTR BackupPath;
	DWORD BackupInterval;
	DWORD DatabaseLoggingFlag;
	DWORD RestoreFlag;
	DWORD DatabaseCleanupInterval;
	DWORD DebugFlag;
	DWORD dwPingRetries;
	DWORD cbBootTableString;
	WCHAR *wszBootTableString;
	BOOL fAuditLog;
	BOOL QuarantineOn;
	DWORD QuarDefFail;
	BOOL QuarRuntimeStatus;
} DHCP_SERVER_CONFIG_INFO_VQ, *LPDHCP_SERVER_CONFIG_INFO_VQ;
typedef struct _DHCP_SERVER_CONFIG_INFO_V6
{
	BOOL UnicastFlag;
	BOOL RapidCommitFlag;
	DWORD PreferredLifetime;
	DWORD ValidLifetime;
	DWORD T1;
	DWORD T2;
	DWORD PreferredLifetimeIATA;
	DWORD ValidLifetimeIATA;
	BOOL fAuditLog;
} DHCP_SERVER_CONFIG_INFO_V6, *LPDHCP_SERVER_CONFIG_INFO_V6;
#define Set_UnicastFlag                 0x00000001
#define Set_RapidCommitFlag             0x00000002
#define Set_PreferredLifetime           0x00000004
#define Set_ValidLifetime               0x00000008
#define Set_T1                          0x00000010
#define Set_T2                          0x00000020
#define Set_PreferredLifetimeIATA       0x00000040
#define Set_ValidLifetimeIATA           0x00000080
typedef struct _DHCP_SUPER_SCOPE_TABLE_ENTRY
{
	DHCP_IP_ADDRESS SubnetAddress;
	DWORD SuperScopeNumber;
	DWORD NextInSuperScope;
	LPWSTR SuperScopeName;
} DHCP_SUPER_SCOPE_TABLE_ENTRY, *LPDHCP_SUPER_SCOPE_TABLE_ENTRY;
typedef struct _DHCP_SUPER_SCOPE_TABLE
{
	DWORD cEntries;
	DHCP_SUPER_SCOPE_TABLE_ENTRY *pEntries;
} DHCP_SUPER_SCOPE_TABLE, *LPDHCP_SUPER_SCOPE_TABLE;
typedef struct _DHCP_CLIENT_INFO_V5
{
	DHCP_IP_ADDRESS ClientIpAddress;
	DHCP_IP_MASK SubnetMask;
	DHCP_CLIENT_UID ClientHardwareAddress;
	LPWSTR ClientName;
	LPWSTR ClientComment;
	DATE_TIME ClientLeaseExpires;
	DHCP_HOST_INFO OwnerHost;
	BYTE bClientType;
	BYTE AddressState;
} DHCP_CLIENT_INFO_V5, *LPDHCP_CLIENT_INFO_V5;
#define V5_ADDRESS_STATE_OFFERED       0x0
#define V5_ADDRESS_STATE_ACTIVE        0x1
#define V5_ADDRESS_STATE_DECLINED      0x2
#define V5_ADDRESS_STATE_DOOM          0x3
#define V5_ADDRESS_BIT_DELETED         0x80
#define V5_ADDRESS_BIT_UNREGISTERED    0x40
#define V5_ADDRESS_BIT_BOTH_REC        0x20
#define DNS_FLAG_ENABLED               0x01
#define DNS_FLAG_UPDATE_DOWNLEVEL      0x02
#define DNS_FLAG_CLEANUP_EXPIRED       0x04
#define DNS_FLAG_UPDATE_BOTH_ALWAYS    0x10
#define DNS_FLAG_UPDATE_DHCID          0x20
typedef struct _DHCP_CLIENT_INFO_ARRAY_V5
{
	DWORD NumElements;
	LPDHCP_CLIENT_INFO_V5 *Clients;
} DHCP_CLIENT_INFO_ARRAY_V5, *LPDHCP_CLIENT_INFO_ARRAY_V5;
#define     DHCP_OPT_ENUM_IGNORE_VENDOR           0x01
#define     DHCP_OPT_ENUM_USE_CLASSNAME           0x02
typedef struct _DHCP_ALL_OPTIONS
{
	DWORD Flags;
	LPDHCP_OPTION_ARRAY NonVendorOptions;
	DWORD NumVendorOptions;
	struct
	{
		DHCP_OPTION Option;
		LPWSTR VendorName;
		LPWSTR ClassName;
	}     *VendorOptions;
} DHCP_ALL_OPTIONS, *LPDHCP_ALL_OPTIONS;
typedef struct _DHCP_ALL_OPTION_VALUES
{
	DWORD Flags;
	DWORD NumElements;
	struct
	{
		LPWSTR ClassName;
		LPWSTR VendorName;
		BOOL IsVendor;
		LPDHCP_OPTION_VALUE_ARRAY OptionsArray;
	}     *Options;
} DHCP_ALL_OPTION_VALUES, *LPDHCP_ALL_OPTION_VALUES;
#ifndef     _ST_SRVR_H_
#define     _ST_SRVR_H_
typedef struct _DHCPDS_SERVER
{
	DWORD Version;
	LPWSTR ServerName;
	DWORD ServerAddress;
	DWORD Flags;
	DWORD State;
	LPWSTR DsLocation;
	DWORD DsLocType;
} DHCPDS_SERVER, *LPDHCPDS_SERVER, *PDHCPDS_SERVER;
typedef struct _DHCPDS_SERVERS
{
	DWORD Flags;
	DWORD NumElements;
	LPDHCPDS_SERVER Servers;
} DHCPDS_SERVERS, *LPDHCPDS_SERVERS, *PDHCPDS_SERVERS;
typedef DHCPDS_SERVER DHCP_SERVER_INFO;
typedef PDHCPDS_SERVER PDHCP_SERVER_INFO;
typedef LPDHCPDS_SERVER LPDHCP_SERVER_INFO;
typedef DHCPDS_SERVERS DHCP_SERVER_INFO_ARRAY;
typedef PDHCPDS_SERVERS PDHCP_SERVER_INFO_ARRAY;
typedef LPDHCPDS_SERVERS LPDHCP_SERVER_INFO_ARRAY;
#endif
#define     DHCP_FLAGS_DONT_ACCESS_DS             0x01
#define     DHCP_FLAGS_DONT_DO_RPC                0x02
#define     DHCP_FLAGS_OPTION_IS_VENDOR           0x03
#define     DHCP_ATTRIB_BOOL_IS_ROGUE             0x01
#define     DHCP_ATTRIB_BOOL_IS_DYNBOOTP          0x02
#define     DHCP_ATTRIB_BOOL_IS_PART_OF_DSDC      0x03
#define     DHCP_ATTRIB_BOOL_IS_BINDING_AWARE     0x04
#define     DHCP_ATTRIB_BOOL_IS_ADMIN             0x05
#define     DHCP_ATTRIB_ULONG_RESTORE_STATUS      0x06
#define     DHCP_ATTRIB_TYPE_BOOL                 0x01
#define     DHCP_ATTRIB_TYPE_ULONG                0x02
typedef ULONG DHCP_ATTRIB_ID, *PDHCP_ATTRIB_ID, *LPDHCP_ATTRIB_ID;
typedef struct _DHCP_ATTRIB
{
	DHCP_ATTRIB_ID DhcpAttribId;
	ULONG DhcpAttribType;
	union
	{
		BOOL DhcpAttribBool;
		ULONG DhcpAttribUlong;
	};
} DHCP_ATTRIB, *PDHCP_ATTRIB, *LPDHCP_ATTRIB;
typedef struct _DHCP_ATTRIB_ARRAY
{
	ULONG NumElements;
	LPDHCP_ATTRIB DhcpAttribs;
} DHCP_ATTRIB_ARRAY, *PDHCP_ATTRIB_ARRAY, *LPDHCP_ATTRIB_ARRAY;
typedef struct _DHCP_BOOTP_IP_RANGE
{
	DHCP_IP_ADDRESS StartAddress;
	DHCP_IP_ADDRESS EndAddress;
	ULONG BootpAllocated;
	ULONG MaxBootpAllowed;
} DHCP_BOOTP_IP_RANGE, *LPDHCP_BOOT_IP_RANGE;
typedef struct _DHCP_SUBNET_ELEMENT_DATA_V5
{
	DHCP_SUBNET_ELEMENT_TYPE ElementType;
	union _DHCP_SUBNET_ELEMENT_UNION_V5
	{
		DHCP_BOOTP_IP_RANGE *IpRange;
		DHCP_HOST_INFO *SecondaryHost;
		DHCP_IP_RESERVATION_V4 *ReservedIp;
		DHCP_IP_RANGE *ExcludeIpRange;
		DHCP_IP_CLUSTER *IpUsedCluster;
	} Element;
} DHCP_SUBNET_ELEMENT_DATA_V5, *LPDHCP_SUBNET_ELEMENT_DATA_V5;
typedef struct _DHCP_SUBNET_ELEMENT_INFO_ARRAY_V5
{
	DWORD NumElements;
	LPDHCP_SUBNET_ELEMENT_DATA_V5 Elements;
} DHCP_SUBNET_ELEMENT_INFO_ARRAY_V5, *LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V5;
#pragma     pack(4)
typedef struct _DHCP_PERF_STATS
{
	ULONG dwNumPacketsReceived;
	ULONG dwNumPacketsDuplicate;
	ULONG dwNumPacketsExpired;
	ULONG dwNumMilliSecondsProcessed;
	ULONG dwNumPacketsInActiveQueue;
	ULONG dwNumPacketsInPingQueue;
	ULONG dwNumDiscoversReceived;
	ULONG dwNumOffersSent;
	ULONG dwNumRequestsReceived;
	ULONG dwNumInformsReceived;
	ULONG dwNumAcksSent;
	ULONG dwNumNacksSent;
	ULONG dwNumDeclinesReceived;
	ULONG dwNumReleasesReceived;
	ULONG dwNumDelayedOfferInQueue;
	ULONG dwNumPacketsProcessed;
	ULONG dwNumPacketsInQuarWaitingQueue;
	ULONG dwNumPacketsInQuarReadyQueue;
	ULONG dwNumPacketsInQuarDecisionQueue;
} DHCP_PERF_STATS, *LPDHCP_PERF_STATS;
#pragma     pack()
#define DHCP_ENDPOINT_FLAG_CANT_MODIFY 0x01
typedef struct _DHCP_BIND_ELEMENT
{
	ULONG Flags;
	BOOL fBoundToDHCPServer;
	DHCP_IP_ADDRESS AdapterPrimaryAddress;
	DHCP_IP_ADDRESS AdapterSubnetAddress;
	LPWSTR IfDescription;
	ULONG IfIdSize;
	LPBYTE IfId;
} DHCP_BIND_ELEMENT, *LPDHCP_BIND_ELEMENT;
typedef struct _DHCP_BIND_ELEMENT_ARRAY
{
	DWORD NumElements;
	LPDHCP_BIND_ELEMENT Elements;
} DHCP_BIND_ELEMENT_ARRAY, *LPDHCP_BIND_ELEMENT_ARRAY;
typedef struct _DHCPV6_BIND_ELEMENT
{
	ULONG Flags;
	BOOL fBoundToDHCPServer;
	DHCP_IPV6_ADDRESS AdapterPrimaryAddress;
	DHCP_IPV6_ADDRESS AdapterSubnetAddress;
	LPWSTR IfDescription;
	DWORD IpV6IfIndex;
	ULONG IfIdSize;
    LPBYTE IfId;
} DHCPV6_BIND_ELEMENT, *LPDHCPV6_BIND_ELEMENT;
typedef struct _DHCPV6_BIND_ELEMENT_ARRAY
{
	DWORD NumElements;
	LPDHCPV6_BIND_ELEMENT Elements;
} DHCPV6_BIND_ELEMENT_ARRAY, *LPDHCPV6_BIND_ELEMENT_ARRAY;
#define QUARANTIN_OPTION_BASE 43220
#define QUARANTINE_SCOPE_QUARPROFILE_OPTION  (QUARANTIN_OPTION_BASE + 1)
#define QUARANTINE_CONFIG_OPTION  (QUARANTIN_OPTION_BASE + 2)
typedef struct _DHCP_IP_RANGE_V6
{
	DHCP_IPV6_ADDRESS StartAddress;
	DHCP_IPV6_ADDRESS EndAddress;
} DHCP_IP_RANGE_V6, *LPDHCP_IP_RANGE_V6;
typedef struct _DHCP_HOST_INFO_V6
{
	DHCP_IPV6_ADDRESS IpAddress;
	LPWSTR NetBiosName;
	LPWSTR HostName;
} DHCP_HOST_INFO_V6, *LPDHCP_HOST_INFO_V6;
typedef struct _DHCP_SUBNET_INFO_V6
{
	DHCP_IPV6_ADDRESS SubnetAddress;
	ULONG Prefix;
	USHORT Preference;
	LPWSTR SubnetName;
	LPWSTR SubnetComment;
	DWORD State;
	DWORD ScopeId;
} DHCP_SUBNET_INFO_V6, *PDHCP_SUBNET_INFO_V6, *LPDHCP_SUBNET_INFO_V6;
typedef struct _SCOPE_MIB_INFO_V6
{
	DHCP_IPV6_ADDRESS Subnet;
	ULONGLONG NumAddressesInuse;
	ULONGLONG NumAddressesFree;
	ULONGLONG NumPendingAdvertises;
} SCOPE_MIB_INFO_V6, *LPSCOPE_MIB_INFO_V6;
typedef struct _DHCP_MIB_INFO_V6
{
	DWORD Solicits;
	DWORD Advertises;
	DWORD Requests;
	DWORD Renews;
	DWORD Rebinds;
	DWORD Replies;
	DWORD Confirms;
	DWORD Declines;
	DWORD Releases;
	DWORD Informs;
	DATE_TIME ServerStartTime;
	DWORD Scopes;
	LPSCOPE_MIB_INFO_V6 ScopeInfo;
} DHCP_MIB_INFO_V6, *LPDHCP_MIB_INFO_V6;
typedef struct _DHCP_IP_RESERVATION_V6
{
	DHCP_IPV6_ADDRESS ReservedIpAddress;
	DHCP_CLIENT_UID *ReservedForClient;
	DWORD InterfaceId;
} DHCP_IP_RESERVATION_V6, *LPDHCP_IP_RESERVATION_V6;
typedef enum _DHCP_SUBNET_ELEMENT_TYPE_V6
{
	Dhcpv6IpRanges,
	Dhcpv6ReservedIps,
	Dhcpv6ExcludedIpRanges
} DHCP_SUBNET_ELEMENT_TYPE_V6, *LPDHCP_SUBNET_ELEMENT_TYPE_V6;
typedef struct _DHCP_SUBNET_ELEMENT_DATA_V6
{
	DHCP_SUBNET_ELEMENT_TYPE_V6 ElementType;
	union _DHCP_SUBNET_ELEMENT_UNION_V6
	{
		DHCP_IP_RANGE_V6 *IpRange;
		DHCP_IP_RESERVATION_V6 *ReservedIp;
		DHCP_IP_RANGE_V6 *ExcludeIpRange;
	} Element;
} DHCP_SUBNET_ELEMENT_DATA_V6, *LPDHCP_SUBNET_ELEMENT_DATA_V6;
typedef struct _DHCP_SUBNET_ELEMENT_INFO_ARRAY_V6
{
	DWORD NumElements;
	LPDHCP_SUBNET_ELEMENT_DATA_V6 Elements;
} DHCP_SUBNET_ELEMENT_INFO_ARRAY_V6, *LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V6;
#define ADDRESS_TYPE_IANA	0
#define ADDRESS_TYPE_IATA	1
typedef struct _DHCP_CLIENT_INFO_V6
{
	DHCP_IPV6_ADDRESS ClientIpAddress;
	DHCP_CLIENT_UID ClientDUID;
	DWORD AddressType;
	DWORD IAID;
	LPWSTR ClientName;
	LPWSTR ClientComment;
	DATE_TIME ClientValidLeaseExpires;
	DATE_TIME ClientPrefLeaseExpires;
	DHCP_HOST_INFO_V6 OwnerHost;
} DHCP_CLIENT_INFO_V6, *LPDHCP_CLIENT_INFO_V6;
typedef struct _DHCPV6_IP_ARRAY
{
	DWORD NumElements;
	LPDHCP_IPV6_ADDRESS Elements;
} DHCPV6_IP_ARRAY, *LPDHCPV6_IP_ARRAY;
typedef struct _DHCP_CLIENT_INFO_ARRAY_V6
{
	DWORD NumElements;
	LPDHCP_CLIENT_INFO_V6 *Clients;
} DHCP_CLIENT_INFO_ARRAY_V6, *LPDHCP_CLIENT_INFO_ARRAY_V6;
typedef enum _DHCP_CLIENT_SEARCH_TYPE_V6
{
	Dhcpv6ClientIpAddress,
	Dhcpv6ClientDUID,
	Dhcpv6ClientName
} DHCP_SEARCH_INFO_TYPE_V6, *LPDHCP_SEARCH_INFO_TYPE_V6;
typedef struct _DHCP_CLIENT_SEARCH_INFO_V6
{
	DHCP_SEARCH_INFO_TYPE_V6 SearchType;
	union _DHCP_CLIENT_SEARCH_UNION_V6
	{
		DHCP_IPV6_ADDRESS ClientIpAddress;
		DHCP_CLIENT_UID ClientDUID;
		LPWSTR ClientName;
	} SearchInfo;
} DHCP_SEARCH_INFO_V6,     *LPDHCP_SEARCH_INFO_V6;
#define SCOPE_STATE_ENABLED     DhcpSubnetEnabled
#define SCOPE_STATE_DISABLED    DhcpSubnetDisabled
#define DHCP_MIN_DELAY 0
#define DHCP_MAX_DELAY 1000
#ifndef  DHCPAPI_NO_PROTOTYPES
DWORD DHCP_API_FUNCTION DhcpAddFilterV4(DHCP_CONST WCHAR *ServerIpAddress, DHCP_FILTER_ADD_INFO *AddFilterInfo, BOOL ForceFlag);
DWORD DHCP_API_FUNCTION DhcpDeleteFilterV4(DHCP_CONST WCHAR *ServerIpAddress, DHCP_ADDR_PATTERN *DeleteFilterInfo);
DWORD DHCP_API_FUNCTION DhcpSetFilterV4(DHCP_CONST WCHAR *ServerIpAddress, DHCP_FILTER_GLOBAL_INFO *GlobalFilterInfo);
DWORD DHCP_API_FUNCTION DhcpGetFilterV4(DHCP_CONST WCHAR *ServerIpAddress, DHCP_FILTER_GLOBAL_INFO *GlobalFilterInfo);
DWORD DHCP_API_FUNCTION DhcpEnumFilterV4(DHCP_CONST WCHAR *ServerIpAddress, LPDHCP_ADDR_PATTERN ResumeHandle, DWORD PreferredMaximum, DHCP_FILTER_LIST_TYPE ListType, LPDHCP_FILTER_ENUM_INFO *EnumFilterInfo, DWORD *ElementsRead, DWORD *ElementsTotal);
DWORD DHCP_API_FUNCTION DhcpCreateSubnet(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_CONST DHCP_SUBNET_INFO *SubnetInfo);
DWORD DHCP_API_FUNCTION DhcpSetSubnetInfo(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_CONST DHCP_SUBNET_INFO *SubnetInfo);
DWORD DHCP_API_FUNCTION DhcpGetSubnetInfo(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, LPDHCP_SUBNET_INFO *SubnetInfo);
DWORD DHCP_API_FUNCTION DhcpEnumSubnets(DHCP_CONST WCHAR *ServerIpAddress, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_IP_ARRAY *EnumInfo, DWORD *ElementsRead, DWORD *ElementsTotal);
DWORD DHCP_API_FUNCTION DhcpAddSubnetElement(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_CONST DHCP_SUBNET_ELEMENT_DATA *AddElementInfo);
DWORD DHCP_API_FUNCTION DhcpEnumSubnetElements(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_SUBNET_ELEMENT_TYPE EnumElementType, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_SUBNET_ELEMENT_INFO_ARRAY *EnumElementInfo, DWORD *ElementsRead, DWORD *ElementsTotal);
DWORD DHCP_API_FUNCTION DhcpRemoveSubnetElement(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_CONST DHCP_SUBNET_ELEMENT_DATA *RemoveElementInfo, DHCP_FORCE_FLAG ForceFlag);
DWORD DHCP_API_FUNCTION DhcpDeleteSubnet(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_FORCE_FLAG ForceFlag);
DWORD DHCP_API_FUNCTION DhcpCreateOption(DHCP_CONST WCHAR *ServerIpAddress, DHCP_OPTION_ID OptionID, DHCP_CONST DHCP_OPTION *OptionInfo);
DWORD DHCP_API_FUNCTION DhcpSetOptionInfo(DHCP_CONST WCHAR *ServerIpAddress, DHCP_OPTION_ID OptionID, DHCP_CONST DHCP_OPTION *OptionInfo);
DWORD DHCP_API_FUNCTION DhcpGetOptionInfo(DHCP_CONST WCHAR *ServerIpAddress, DHCP_OPTION_ID OptionID, LPDHCP_OPTION *OptionInfo);
DWORD DHCP_API_FUNCTION DhcpEnumOptions(DHCP_CONST WCHAR *ServerIpAddress, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_OPTION_ARRAY *Options, DWORD *OptionsRead, DWORD *OptionsTotal);
DWORD DHCP_API_FUNCTION DhcpRemoveOption(DHCP_CONST WCHAR *ServerIpAddress, DHCP_OPTION_ID OptionID);
DWORD DHCP_API_FUNCTION DhcpSetOptionValue(DHCP_CONST WCHAR *ServerIpAddress, DHCP_OPTION_ID OptionID, DHCP_CONST DHCP_OPTION_SCOPE_INFO *ScopeInfo, DHCP_CONST DHCP_OPTION_DATA *OptionValue);
DWORD DHCP_API_FUNCTION DhcpSetOptionValues(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST DHCP_OPTION_SCOPE_INFO *ScopeInfo, DHCP_CONST DHCP_OPTION_VALUE_ARRAY *OptionValues);
DWORD DHCP_API_FUNCTION DhcpGetOptionValue(DHCP_CONST WCHAR *ServerIpAddress, DHCP_OPTION_ID OptionID, DHCP_CONST DHCP_OPTION_SCOPE_INFO *ScopeInfo, LPDHCP_OPTION_VALUE *OptionValue);
DWORD DHCP_API_FUNCTION DhcpEnumOptionValues(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST DHCP_OPTION_SCOPE_INFO *ScopeInfo, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_OPTION_VALUE_ARRAY *OptionValues, DWORD *OptionsRead, DWORD *OptionsTotal);
DWORD DHCP_API_FUNCTION DhcpRemoveOptionValue(DHCP_CONST WCHAR *ServerIpAddress, DHCP_OPTION_ID OptionID, DHCP_CONST DHCP_OPTION_SCOPE_INFO *ScopeInfo);
DWORD DHCP_API_FUNCTION DhcpCreateClientInfoVQ(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST DHCP_CLIENT_INFO_VQ *ClientInfo);
DWORD DHCP_API_FUNCTION DhcpSetClientInfoVQ(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST DHCP_CLIENT_INFO_VQ *ClientInfo);
DWORD DHCP_API_FUNCTION DhcpGetClientInfoVQ(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST DHCP_SEARCH_INFO *SearchInfo, LPDHCP_CLIENT_INFO_VQ *ClientInfo);
DWORD DHCP_API_FUNCTION DhcpEnumSubnetClientsVQ(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_CLIENT_INFO_ARRAY_VQ *ClientInfo, DWORD *ClientsRead, DWORD *ClientsTotal);
DWORD DHCP_API_FUNCTION DhcpEnumSubnetClientsFilterStatusInfo(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_CLIENT_FILTER_STATUS_INFO_ARRAY *ClientInfo, DWORD *ClientsRead, DWORD *ClientsTotal);
DWORD DHCP_API_FUNCTION DhcpCreateClientInfo(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST DHCP_CLIENT_INFO *ClientInfo);
DWORD DHCP_API_FUNCTION DhcpSetClientInfo(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST DHCP_CLIENT_INFO *ClientInfo);
DWORD DHCP_API_FUNCTION DhcpGetClientInfo(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST DHCP_SEARCH_INFO *SearchInfo, LPDHCP_CLIENT_INFO *ClientInfo);
DWORD DHCP_API_FUNCTION DhcpDeleteClientInfo(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST DHCP_SEARCH_INFO *ClientInfo);
DWORD DHCP_API_FUNCTION DhcpEnumSubnetClients(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_CLIENT_INFO_ARRAY *ClientInfo, DWORD *ClientsRead, DWORD *ClientsTotal);
DWORD DHCP_API_FUNCTION DhcpGetClientOptions(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS ClientIpAddress, DHCP_IP_MASK ClientSubnetMask, LPDHCP_OPTION_LIST *ClientOptions);
DWORD DHCP_API_FUNCTION DhcpGetMibInfo(DHCP_CONST WCHAR *ServerIpAddress, LPDHCP_MIB_INFO *MibInfo);
DWORD DHCP_API_FUNCTION DhcpServerSetConfig(DHCP_CONST WCHAR *ServerIpAddress, DWORD FieldsToSet, LPDHCP_SERVER_CONFIG_INFO ConfigInfo);
DWORD DHCP_API_FUNCTION DhcpServerGetConfig(DHCP_CONST WCHAR *ServerIpAddress, LPDHCP_SERVER_CONFIG_INFO *ConfigInfo);
DWORD DHCP_API_FUNCTION DhcpScanDatabase(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DWORD FixFlag, LPDHCP_SCAN_LIST *ScanList);
VOID DHCP_API_FUNCTION DhcpRpcFreeMemory(PVOID BufferPointer);
DWORD DHCP_API_FUNCTION DhcpGetVersion(LPWSTR ServerIpAddress, LPDWORD MajorVersion, LPDWORD MinorVersion);
DWORD DHCP_API_FUNCTION DhcpAddSubnetElementV4(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_CONST DHCP_SUBNET_ELEMENT_DATA_V4 *AddElementInfo);
DWORD DHCP_API_FUNCTION DhcpEnumSubnetElementsV4(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_SUBNET_ELEMENT_TYPE EnumElementType, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V4 *EnumElementInfo, DWORD *ElementsRead, DWORD *ElementsTotal);
DWORD DHCP_API_FUNCTION DhcpRemoveSubnetElementV4(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_CONST DHCP_SUBNET_ELEMENT_DATA_V4 *RemoveElementInfo, DHCP_FORCE_FLAG ForceFlag);
DWORD DHCP_API_FUNCTION DhcpCreateClientInfoV4(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST DHCP_CLIENT_INFO_V4 *ClientInfo);
DWORD DHCP_API_FUNCTION DhcpSetClientInfoV4(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST DHCP_CLIENT_INFO_V4 *ClientInfo);
DWORD DHCP_API_FUNCTION DhcpGetClientInfoV4(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST DHCP_SEARCH_INFO *SearchInfo, LPDHCP_CLIENT_INFO_V4 *ClientInfo);
DWORD DHCP_API_FUNCTION DhcpEnumSubnetClientsV4(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_CLIENT_INFO_ARRAY_V4 *ClientInfo, DWORD *ClientsRead, DWORD *ClientsTotal);
DWORD DHCP_API_FUNCTION DhcpServerSetConfigV4(DHCP_CONST WCHAR *ServerIpAddress, DWORD FieldsToSet, LPDHCP_SERVER_CONFIG_INFO_V4 ConfigInfo);
DWORD DHCP_API_FUNCTION DhcpServerGetConfigV4(DHCP_CONST WCHAR *ServerIpAddress, LPDHCP_SERVER_CONFIG_INFO_V4 *ConfigInfo);
DWORD DhcpSetSuperScopeV4(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST DHCP_IP_ADDRESS SubnetAddress, DHCP_CONST LPWSTR SuperScopeName, DHCP_CONST BOOL ChangeExisting);
DWORD DhcpDeleteSuperScopeV4(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST LPWSTR SuperScopeName);
DWORD DhcpGetSuperScopeInfoV4(DHCP_CONST WCHAR *ServerIpAddress, LPDHCP_SUPER_SCOPE_TABLE *SuperScopeTable);
DWORD DHCP_API_FUNCTION DhcpEnumSubnetClientsV5(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_CLIENT_INFO_ARRAY_V5 *ClientInfo, DWORD *ClientsRead, DWORD *ClientsTotal);
DWORD DhcpCreateOptionV5(LPWSTR ServerIpAddress, DWORD Flags, DHCP_OPTION_ID OptionId, LPWSTR ClassName, LPWSTR VendorName, LPDHCP_OPTION OptionInfo);
DWORD DhcpSetOptionInfoV5(LPWSTR ServerIpAddress, DWORD Flags, DHCP_OPTION_ID OptionID, LPWSTR ClassName, LPWSTR VendorName, LPDHCP_OPTION OptionInfo);
DWORD DhcpGetOptionInfoV5(LPWSTR ServerIpAddress, DWORD Flags, DHCP_OPTION_ID OptionID, LPWSTR ClassName, LPWSTR VendorName, LPDHCP_OPTION *OptionInfo);
DWORD DhcpEnumOptionsV5(LPWSTR ServerIpAddress, DWORD Flags, LPWSTR ClassName, LPWSTR VendorName, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_OPTION_ARRAY *Options, DWORD *OptionsRead, DWORD *OptionsTotal);
DWORD DhcpRemoveOptionV5(LPWSTR ServerIpAddress, DWORD Flags, DHCP_OPTION_ID OptionID, LPWSTR ClassName, LPWSTR VendorName);
DWORD DhcpSetOptionValueV5(LPWSTR ServerIpAddress, DWORD Flags, DHCP_OPTION_ID OptionId, LPWSTR ClassName, LPWSTR VendorName, LPDHCP_OPTION_SCOPE_INFO ScopeInfo, LPDHCP_OPTION_DATA OptionValue);
DWORD DhcpSetOptionValuesV5(LPWSTR ServerIpAddress, DWORD Flags, LPWSTR ClassName, LPWSTR VendorName, LPDHCP_OPTION_SCOPE_INFO ScopeInfo, LPDHCP_OPTION_VALUE_ARRAY OptionValues);
DWORD DhcpGetOptionValueV5(LPWSTR ServerIpAddress, DWORD Flags, DHCP_OPTION_ID OptionID, LPWSTR ClassName, LPWSTR VendorName, LPDHCP_OPTION_SCOPE_INFO ScopeInfo, LPDHCP_OPTION_VALUE *OptionValue);
DWORD DhcpGetOptionValueV6(LPWSTR ServerIpAddress, DWORD Flags, DHCP_OPTION_ID OptionID, LPWSTR ClassName, LPWSTR VendorName, LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo, LPDHCP_OPTION_VALUE *OptionValue);
DWORD DhcpEnumOptionValuesV5(LPWSTR ServerIpAddress, DWORD Flags, LPWSTR ClassName, LPWSTR VendorName, LPDHCP_OPTION_SCOPE_INFO ScopeInfo, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_OPTION_VALUE_ARRAY *OptionValues, DWORD *OptionsRead, DWORD *OptionsTotal);
DWORD DhcpRemoveOptionValueV5(LPWSTR ServerIpAddress, DWORD Flags, DHCP_OPTION_ID OptionID, LPWSTR ClassName, LPWSTR VendorName, LPDHCP_OPTION_SCOPE_INFO ScopeInfo);
DWORD DhcpCreateClass(LPWSTR ServerIpAddress, DWORD ReservedMustBeZero, LPDHCP_CLASS_INFO ClassInfo);
DWORD DhcpModifyClass(LPWSTR ServerIpAddress, DWORD ReservedMustBeZero, LPDHCP_CLASS_INFO ClassInfo);
DWORD DhcpDeleteClass(LPWSTR ServerIpAddress, DWORD ReservedMustBeZero, LPWSTR ClassName);
DWORD DhcpGetClassInfo(LPWSTR ServerIpAddress, DWORD ReservedMustBeZero, LPDHCP_CLASS_INFO PartialClassInfo, LPDHCP_CLASS_INFO *FilledClassInfo);
DWORD DhcpEnumClasses(LPWSTR ServerIpAddress, DWORD ReservedMustBeZero, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_CLASS_INFO_ARRAY *ClassInfoArray, DWORD *nRead, DWORD *nTotal);
DWORD DhcpGetAllOptions(LPWSTR ServerIpAddress, DWORD Flags, LPDHCP_ALL_OPTIONS *OptionStruct);
DWORD DHCP_API_FUNCTION DhcpGetAllOptionsV6(LPWSTR ServerIpAddress, DWORD Flags, LPDHCP_ALL_OPTIONS *OptionStruct);
DWORD DhcpGetAllOptionValues(LPWSTR ServerIpAddress, DWORD Flags, LPDHCP_OPTION_SCOPE_INFO ScopeInfo, LPDHCP_ALL_OPTION_VALUES *Values);
DWORD DHCP_API_FUNCTION DhcpGetAllOptionValuesV6(LPWSTR ServerIpAddress, DWORD Flags, LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo, LPDHCP_ALL_OPTION_VALUES *Values);
DWORD DhcpEnumServers(DWORD Flags, LPVOID IdInfo, LPDHCP_SERVER_INFO_ARRAY *Servers, LPVOID CallbackFn, LPVOID CallbackData);
DWORD DhcpAddServer(DWORD Flags, LPVOID IdInfo, LPDHCP_SERVER_INFO NewServer, LPVOID CallbackFn, LPVOID CallbackData);
DWORD DhcpDeleteServer(DWORD Flags, LPVOID IdInfo, LPDHCP_SERVER_INFO NewServer, LPVOID CallbackFn, LPVOID CallbackData);
DWORD DHCP_API_FUNCTION DhcpGetServerBindingInfo(DHCP_CONST WCHAR *ServerIpAddress, ULONG Flags, LPDHCP_BIND_ELEMENT_ARRAY *BindElementsInfo);
DWORD DHCP_API_FUNCTION DhcpSetServerBindingInfo(DHCP_CONST WCHAR *ServerIpAddress, ULONG Flags, LPDHCP_BIND_ELEMENT_ARRAY BindElementInfo);
DWORD DHCP_API_FUNCTION DhcpAddSubnetElementV5(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_CONST DHCP_SUBNET_ELEMENT_DATA_V5 *AddElementInfo);
DWORD DHCP_API_FUNCTION DhcpEnumSubnetElementsV5(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_SUBNET_ELEMENT_TYPE EnumElementType, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V5 *EnumElementInfo, DWORD *ElementsRead, DWORD *ElementsTotal);
DWORD DHCP_API_FUNCTION DhcpRemoveSubnetElementV5(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_CONST DHCP_SUBNET_ELEMENT_DATA_V5 *RemoveElementInfo, DHCP_FORCE_FLAG ForceFlag);
DWORD DHCP_API_FUNCTION DhcpCreateOptionV6(LPWSTR ServerIpAddress, DWORD Flags, DHCP_OPTION_ID OptionId, LPWSTR ClassName, LPWSTR VendorName, LPDHCP_OPTION OptionInfo);
DWORD DHCP_API_FUNCTION DhcpRemoveOptionV6(LPWSTR ServerIpAddress, DWORD Flags, DHCP_OPTION_ID OptionID, LPWSTR ClassName, LPWSTR VendorName);
DWORD DHCP_API_FUNCTION DhcpEnumOptionsV6(LPWSTR ServerIpAddress, DWORD Flags, LPWSTR ClassName, LPWSTR VendorName, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_OPTION_ARRAY *Options, DWORD *OptionsRead, DWORD *OptionsTotal);
DWORD DHCP_API_FUNCTION DhcpRemoveOptionValueV6(LPWSTR ServerIpAddress, DWORD Flags, DHCP_OPTION_ID OptionID, LPWSTR ClassName, LPWSTR VendorName, LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo);
DWORD DHCP_API_FUNCTION DhcpGetOptionInfoV6(LPWSTR ServerIpAddress, DWORD Flags, DHCP_OPTION_ID OptionID, LPWSTR ClassName, LPWSTR VendorName, LPDHCP_OPTION *OptionInfo);
DWORD DHCP_API_FUNCTION DhcpSetOptionInfoV6(LPWSTR ServerIpAddress, DWORD Flags, DHCP_OPTION_ID OptionID, LPWSTR ClassName, LPWSTR VendorName, LPDHCP_OPTION OptionInfo);
DWORD DHCP_API_FUNCTION DhcpSetOptionValueV6(LPWSTR ServerIpAddress, DWORD Flags, DHCP_OPTION_ID OptionId, LPWSTR ClassName, LPWSTR VendorName, LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo, LPDHCP_OPTION_DATA OptionValue);
DWORD DHCP_API_FUNCTION DhcpGetSubnetInfoVQ(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, LPDHCP_SUBNET_INFO_VQ *SubnetInfo);
DWORD DHCP_API_FUNCTION DhcpCreateSubnetVQ(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_CONST DHCP_SUBNET_INFO_VQ *SubnetInfo);
DWORD DHCP_API_FUNCTION DhcpSetSubnetInfoVQ(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, DHCP_CONST DHCP_SUBNET_INFO_VQ *SubnetInfo);
DWORD DHCP_API_FUNCTION DhcpEnumOptionValuesV6(DHCP_CONST WCHAR *ServerIpAddress, DWORD Flags, LPWSTR ClassName, LPWSTR VendorName, LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_OPTION_VALUE_ARRAY *OptionValues, DWORD *OptionsRead, DWORD *OptionsTotal);
#endif
DWORD DhcpDsInit(VOID);
VOID DhcpDsCleanup(VOID);
DWORD DhcpSetThreadOptions(DWORD Flags, LPVOID Reserved);
DWORD DhcpGetThreadOptions(LPDWORD pFlags, LPVOID Reserved);
DWORD DhcpServerQueryAttribute(LPWSTR ServerIpAddr, ULONG dwReserved, DHCP_ATTRIB_ID DhcpAttribId, LPDHCP_ATTRIB *pDhcpAttrib);
DWORD DhcpServerQueryAttributes(LPWSTR ServerIpAddr, ULONG dwReserved, ULONG dwAttribCount, DHCP_ATTRIB_ID pDhcpAttribs[], LPDHCP_ATTRIB_ARRAY *pDhcpAttribArr);
DWORD DhcpServerRedoAuthorization(LPWSTR ServerIpAddr, ULONG dwReserved);
DWORD DhcpAuditLogSetParams(LPWSTR ServerIpAddress, DWORD Flags, LPWSTR AuditLogDir, DWORD DiskCheckInterval, DWORD MaxLogFilesSize, DWORD MinSpaceOnDisk);
DWORD DhcpAuditLogGetParams(LPWSTR ServerIpAddress, DWORD Flags, LPWSTR *AuditLogDir, DWORD *DiskCheckInterval, DWORD *MaxLogFilesSize, DWORD *MinSpaceOnDisk);
DWORD DhcpServerQueryDnsRegCredentials(LPWSTR ServerIpAddress, ULONG UnameSize, LPWSTR Uname, ULONG DomainSize, LPWSTR Domain);
DWORD DhcpServerSetDnsRegCredentials(LPWSTR ServerIpAddress, LPWSTR Uname, LPWSTR Domain, LPWSTR Passwd);
DWORD DhcpServerSetDnsRegCredentialsV5(LPWSTR ServerIpAddress, LPWSTR Uname, LPWSTR Domain, LPWSTR Passwd);
DWORD DhcpServerBackupDatabase(LPWSTR ServerIpAddress, LPWSTR Path);
DWORD DhcpServerRestoreDatabase(LPWSTR ServerIpAddress, LPWSTR Path);
DWORD DHCP_API_FUNCTION DhcpServerSetConfigVQ(DHCP_CONST WCHAR *ServerIpAddress, DWORD FieldsToSet, LPDHCP_SERVER_CONFIG_INFO_VQ ConfigInfo);
DWORD DHCP_API_FUNCTION DhcpServerGetConfigVQ(DHCP_CONST WCHAR *ServerIpAddress, LPDHCP_SERVER_CONFIG_INFO_VQ *ConfigInfo);
DWORD DHCP_API_FUNCTION DhcpGetServerSpecificStrings(DHCP_CONST WCHAR *ServerIpAddress, LPDHCP_SERVER_SPECIFIC_STRINGS *ServerSpecificStrings);
void DHCP_API_FUNCTION DhcpServerAuditlogParamsFree(DHCP_SERVER_CONFIG_INFO_VQ *ConfigInfo);
DWORD DHCP_API_FUNCTION DhcpCreateSubnetV6(LPWSTR ServerIpAddress, DHCP_IPV6_ADDRESS SubnetAddress, LPDHCP_SUBNET_INFO_V6 SubnetInfo);
DWORD DHCP_API_FUNCTION DhcpDeleteSubnetV6(LPWSTR ServerIpAddress, DHCP_IPV6_ADDRESS SubnetAddress, DHCP_FORCE_FLAG ForceFlag);
DWORD DHCP_API_FUNCTION DhcpEnumSubnetsV6(DHCP_CONST WCHAR *ServerIpAddress, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCPV6_IP_ARRAY *EnumInfo, DWORD *ElementsRead, DWORD *ElementsTotal);
DWORD DHCP_API_FUNCTION DhcpAddSubnetElementV6(LPWSTR ServerIpAddress, DHCP_IPV6_ADDRESS SubnetAddress, LPDHCP_SUBNET_ELEMENT_DATA_V6 AddElementInfo);
DWORD DHCP_API_FUNCTION DhcpRemoveSubnetElementV6(LPWSTR ServerIpAddress, DHCP_IPV6_ADDRESS SubnetAddress, LPDHCP_SUBNET_ELEMENT_DATA_V6 RemoveElementInfo, DHCP_FORCE_FLAG ForceFlag);
DWORD DHCP_API_FUNCTION DhcpEnumSubnetElementsV6(LPWSTR ServerIpAddress, DHCP_IPV6_ADDRESS SubnetAddress, DHCP_SUBNET_ELEMENT_TYPE_V6 EnumElementType, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_SUBNET_ELEMENT_INFO_ARRAY_V6 *EnumElementInfo, DWORD *ElementsRead, DWORD *ElementsTotal);
DWORD DHCP_API_FUNCTION DhcpGetSubnetInfoV6(LPWSTR ServerIpAddress, DHCP_IPV6_ADDRESS SubnetAddress, LPDHCP_SUBNET_INFO_V6 *SubnetInfo);
DWORD DHCP_API_FUNCTION DhcpEnumSubnetClientsV6(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IPV6_ADDRESS SubnetAddress, DHCP_RESUME_IPV6_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_CLIENT_INFO_ARRAY_V6 *ClientInfo, DWORD *ClientsRead, DWORD *ClientsTotal);
DWORD DHCP_API_FUNCTION DhcpServerGetConfigV6(DHCP_CONST WCHAR *ServerIpAddress, LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo, LPDHCP_SERVER_CONFIG_INFO_V6 *ConfigInfo);
DWORD DHCP_API_FUNCTION DhcpServerSetConfigV6(DHCP_CONST WCHAR *ServerIpAddress, LPDHCP_OPTION_SCOPE_INFO6 ScopeInfo, DWORD FieldsToSet, LPDHCP_SERVER_CONFIG_INFO_V6 ConfigInfo);
DWORD DhcpSetSubnetInfoV6(DHCP_CONST WCHAR *ServerIpAddress, DHCP_IPV6_ADDRESS SubnetAddress, LPDHCP_SUBNET_INFO_V6 SubnetInfo);
DWORD DhcpGetMibInfoV6(DHCP_CONST WCHAR *ServerIpAddress, LPDHCP_MIB_INFO_V6 *MibInfo);
DWORD DHCP_API_FUNCTION DhcpGetServerBindingInfoV6(DHCP_CONST WCHAR *ServerIpAddress, ULONG Flags, LPDHCPV6_BIND_ELEMENT_ARRAY *BindElementsInfo);
DWORD DHCP_API_FUNCTION DhcpSetServerBindingInfoV6(DHCP_CONST WCHAR *ServerIpAddress, ULONG Flags, LPDHCPV6_BIND_ELEMENT_ARRAY BindElementInfo);
DWORD DHCP_API_FUNCTION DhcpSetClientInfoV6(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST DHCP_CLIENT_INFO_V6 *ClientInfo);
DWORD DHCP_API_FUNCTION DhcpGetClientInfoV6(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST DHCP_SEARCH_INFO_V6 *SearchInfo, LPDHCP_CLIENT_INFO_V6 *ClientInfo);
DWORD DHCP_API_FUNCTION DhcpDeleteClientInfoV6(DHCP_CONST WCHAR *ServerIpAddress, DHCP_CONST DHCP_SEARCH_INFO_V6 *ClientInfo);
DWORD DHCP_API_FUNCTION DhcpCreateClassV6(LPWSTR ServerIpAddress, DWORD ReservedMustBeZero, LPDHCP_CLASS_INFO_V6 ClassInfo);
DWORD DHCP_API_FUNCTION DhcpModifyClassV6(LPWSTR ServerIpAddress, DWORD ReservedMustBeZero, LPDHCP_CLASS_INFO_V6 ClassInfo);
DWORD DHCP_API_FUNCTION DhcpDeleteClassV6(LPWSTR ServerIpAddress, DWORD ReservedMustBeZero, LPWSTR ClassName);
DWORD DHCP_API_FUNCTION DhcpEnumClassesV6(LPWSTR ServerIpAddress, DWORD ReservedMustBeZero, DHCP_RESUME_HANDLE *ResumeHandle, DWORD PreferredMaximum, LPDHCP_CLASS_INFO_ARRAY_V6 *ClassInfoArray, DWORD *nRead, DWORD *nTotal);
DWORD DHCP_API_FUNCTION DhcpSetSubnetDelayOffer(LPWSTR ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, USHORT TimeDelayInMilliseconds);
DWORD DHCP_API_FUNCTION DhcpGetSubnetDelayOffer(LPWSTR ServerIpAddress, DHCP_IP_ADDRESS SubnetAddress, USHORT *TimeDelayInMilliseconds);
DWORD DHCP_API_FUNCTION DhcpGetMibInfoV5(DHCP_CONST WCHAR *ServerIpAddress, LPDHCP_MIB_INFO_V5 *MibInfo);
DWORD DHCP_API_FUNCTION DhcpAddSecurityGroup(LPWSTR pServer);
#endif
