/*+@@file@@----------------------------------------------------------------*//*!
 \file		netioapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 23:29:33 2016
 \date		Modified on Sun Jul 10 23:29:33 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _NETIOAPI_H_
#define _NETIOAPI_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef ANY_SIZE
#define ANY_SIZE 1
#endif
#ifdef __IPHLPAPI_H__
#define NETIO_STATUS DWORD
#define NETIO_SUCCESS(x) ((x) == NO_ERROR)
#define NETIOAPI_API_ WINAPI
#else
#include <ws2def.h>
#include <ws2ipdef.h>
#include <ifdef.h>
#include <nldef.h>
#define NETIO_STATUS NTSTATUS
#define NETIO_SUCCESS(x) NT_SUCCESS(x)
#define NETIOAPI_API_ NTAPI
#endif
#define NETIOAPI_API NETIO_STATUS NETIOAPI_API_
typedef enum _MIB_NOTIFICATION_TYPE
{
    MibParameterNotification,
    MibAddInstance,
    MibDeleteInstance,
    MibInitialNotification,
} MIB_NOTIFICATION_TYPE, *PMIB_NOTIFICATION_TYPE;
#ifdef _WS2IPDEF_ 
#include <ntddndis.h>
typedef struct _MIB_IF_ROW2
{
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex;
    GUID InterfaceGuid;
    WCHAR Alias[IF_MAX_STRING_SIZE + 1]; 
    WCHAR Description[IF_MAX_STRING_SIZE + 1];
    ULONG PhysicalAddressLength;
    UCHAR PhysicalAddress[IF_MAX_PHYS_ADDRESS_LENGTH];
    UCHAR PermanentPhysicalAddress[IF_MAX_PHYS_ADDRESS_LENGTH];    
    ULONG Mtu;
    IFTYPE Type;
    TUNNEL_TYPE TunnelType;
    NDIS_MEDIUM MediaType; 
    NDIS_PHYSICAL_MEDIUM PhysicalMediumType; 
    NET_IF_ACCESS_TYPE AccessType;
    NET_IF_DIRECTION_TYPE DirectionType;
    struct
	{
        BOOLEAN HardwareInterface : 1;
        BOOLEAN FilterInterface : 1;
        BOOLEAN ConnectorPresent : 1;
        BOOLEAN NotAuthenticated : 1;
        BOOLEAN NotMediaConnected : 1;
        BOOLEAN Paused : 1;
        BOOLEAN LowPower : 1;
        BOOLEAN EndPointInterface : 1;
    } InterfaceAndOperStatusFlags;
    IF_OPER_STATUS OperStatus;  
    NET_IF_ADMIN_STATUS AdminStatus;
    NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
    NET_IF_NETWORK_GUID NetworkGuid;
    NET_IF_CONNECTION_TYPE ConnectionType;
    ULONG64 TransmitLinkSpeed;
    ULONG64 ReceiveLinkSpeed;
    ULONG64 InOctets;
    ULONG64 InUcastPkts;
    ULONG64 InNUcastPkts;
    ULONG64 InDiscards;
    ULONG64 InErrors;
    ULONG64 InUnknownProtos;
    ULONG64 InUcastOctets;      
    ULONG64 InMulticastOctets;  
    ULONG64 InBroadcastOctets; 
    ULONG64 OutOctets;
    ULONG64 OutUcastPkts;
    ULONG64 OutNUcastPkts;
    ULONG64 OutDiscards;
    ULONG64 OutErrors;
    ULONG64 OutUcastOctets;     
    ULONG64 OutMulticastOctets; 
    ULONG64 OutBroadcastOctets;   
    ULONG64 OutQLen; 
} MIB_IF_ROW2, *PMIB_IF_ROW2;
typedef struct _MIB_IF_TABLE2
{
    ULONG NumEntries;
    MIB_IF_ROW2 Table[ANY_SIZE];
} MIB_IF_TABLE2, *PMIB_IF_TABLE2;
NETIOAPI_API GetIfEntry2(PMIB_IF_ROW2 Row);
NETIOAPI_API GetIfTable2(PMIB_IF_TABLE2 *Table);
typedef enum _MIB_IF_TABLE_LEVEL
{
    MibIfTableNormal,
    MibIfTableRaw
} MIB_IF_TABLE_LEVEL, *PMIB_IF_TABLE_LEVEL;
NETIOAPI_API GetIfTable2Ex(MIB_IF_TABLE_LEVEL Level, PMIB_IF_TABLE2 *Table);
typedef struct _MIB_IPINTERFACE_ROW
{
    ADDRESS_FAMILY Family;
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex;
    ULONG MaxReassemblySize;
    ULONG64 InterfaceIdentifier;
    ULONG MinRouterAdvertisementInterval;
    ULONG MaxRouterAdvertisementInterval;
    BOOLEAN AdvertisingEnabled;
    BOOLEAN ForwardingEnabled;
    BOOLEAN WeakHostSend;
    BOOLEAN WeakHostReceive;
    BOOLEAN UseAutomaticMetric;
    BOOLEAN UseNeighborUnreachabilityDetection;   
    BOOLEAN ManagedAddressConfigurationSupported;
    BOOLEAN OtherStatefulConfigurationSupported;
    BOOLEAN AdvertiseDefaultRoute;
    NL_ROUTER_DISCOVERY_BEHAVIOR RouterDiscoveryBehavior;
    ULONG DadTransmits;
    ULONG BaseReachableTime;
    ULONG RetransmitTime;
    ULONG PathMtuDiscoveryTimeout;
    NL_LINK_LOCAL_ADDRESS_BEHAVIOR LinkLocalAddressBehavior;
    ULONG LinkLocalAddressTimeout;
    ULONG ZoneIndices[ScopeLevelCount];
    ULONG SitePrefixLength;
    ULONG Metric;
    ULONG NlMtu;
    BOOLEAN Connected;
    BOOLEAN SupportsWakeUpPatterns;   
    BOOLEAN SupportsNeighborDiscovery;
    BOOLEAN SupportsRouterDiscovery;
    ULONG ReachableTime;
    NL_INTERFACE_OFFLOAD_ROD TransmitOffload;
    NL_INTERFACE_OFFLOAD_ROD ReceiveOffload;
    BOOLEAN DisableDefaultRoutes;
} MIB_IPINTERFACE_ROW, *PMIB_IPINTERFACE_ROW;
typedef struct _MIB_IPINTERFACE_TABLE
{
    ULONG NumEntries;
    MIB_IPINTERFACE_ROW Table[ANY_SIZE];
} MIB_IPINTERFACE_TABLE, *PMIB_IPINTERFACE_TABLE;
typedef struct _MIB_IFSTACK_ROW
{
    NET_IFINDEX HigherLayerInterfaceIndex;
    NET_IFINDEX LowerLayerInterfaceIndex;
} MIB_IFSTACK_ROW, *PMIB_IFSTACK_ROW;
typedef struct _MIB_INVERTEDIFSTACK_ROW
{
    NET_IFINDEX LowerLayerInterfaceIndex;
    NET_IFINDEX HigherLayerInterfaceIndex;
} MIB_INVERTEDIFSTACK_ROW, *PMIB_INVERTEDIFSTACK_ROW;
typedef struct _MIB_IFSTACK_TABLE
{
    ULONG NumEntries;
    MIB_IFSTACK_ROW Table[ANY_SIZE];
} MIB_IFSTACK_TABLE, *PMIB_IFSTACK_TABLE;
typedef struct _MIB_INVERTEDIFSTACK_TABLE
{
    ULONG NumEntries;
    MIB_INVERTEDIFSTACK_ROW Table[ANY_SIZE];
} MIB_INVERTEDIFSTACK_TABLE, *PMIB_INVERTEDIFSTACK_TABLE;
typedef VOID(NETIOAPI_API_ *PIPINTERFACE_CHANGE_CALLBACK) (PVOID CallerContext, PMIB_IPINTERFACE_ROW Row, MIB_NOTIFICATION_TYPE NotificationType);
NETIOAPI_API GetIfStackTable(PMIB_IFSTACK_TABLE *Table);
NETIOAPI_API GetInvertedIfStackTable(PMIB_INVERTEDIFSTACK_TABLE *Table);
NETIOAPI_API GetIpInterfaceEntry(PMIB_IPINTERFACE_ROW Row);
NETIOAPI_API GetIpInterfaceTable(ADDRESS_FAMILY Family, PMIB_IPINTERFACE_TABLE *Table);
VOID NETIOAPI_API_ InitializeIpInterfaceEntry(PMIB_IPINTERFACE_ROW Row);
NETIOAPI_API NotifyIpInterfaceChange(ADDRESS_FAMILY Family, PIPINTERFACE_CHANGE_CALLBACK Callback, PVOID CallerContext, BOOLEAN InitialNotification, HANDLE *NotificationHandle);
NETIOAPI_API SetIpInterfaceEntry(PMIB_IPINTERFACE_ROW Row);
typedef struct _MIB_UNICASTIPADDRESS_ROW
{
    SOCKADDR_INET Address;
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex;
    NL_PREFIX_ORIGIN PrefixOrigin;
    NL_SUFFIX_ORIGIN SuffixOrigin;    
    ULONG ValidLifetime;
    ULONG PreferredLifetime;
    UINT8 OnLinkPrefixLength;
    BOOLEAN SkipAsSource;
    NL_DAD_STATE DadState;
    SCOPE_ID ScopeId;
    LARGE_INTEGER CreationTimeStamp;    
} MIB_UNICASTIPADDRESS_ROW, *PMIB_UNICASTIPADDRESS_ROW;
typedef struct _MIB_UNICASTIPADDRESS_TABLE {
    ULONG NumEntries;
    MIB_UNICASTIPADDRESS_ROW Table[ANY_SIZE];
} MIB_UNICASTIPADDRESS_TABLE, *PMIB_UNICASTIPADDRESS_TABLE;
typedef VOID(NETIOAPI_API_ *PUNICAST_IPADDRESS_CHANGE_CALLBACK) (PVOID CallerContext, PMIB_UNICASTIPADDRESS_ROW Row, MIB_NOTIFICATION_TYPE NotificationType);
NETIOAPI_API CreateUnicastIpAddressEntry(CONST MIB_UNICASTIPADDRESS_ROW *Row);
NETIOAPI_API DeleteUnicastIpAddressEntry(CONST MIB_UNICASTIPADDRESS_ROW *Row);
NETIOAPI_API GetUnicastIpAddressEntry(PMIB_UNICASTIPADDRESS_ROW Row);
NETIOAPI_API GetUnicastIpAddressTable(ADDRESS_FAMILY Family, PMIB_UNICASTIPADDRESS_TABLE *Table);
VOID NETIOAPI_API_ InitializeUnicastIpAddressEntry(PMIB_UNICASTIPADDRESS_ROW Row);
NETIOAPI_API NotifyUnicastIpAddressChange(ADDRESS_FAMILY Family, PUNICAST_IPADDRESS_CHANGE_CALLBACK Callback, PVOID CallerContext, BOOLEAN InitialNotification, HANDLE *NotificationHandle);
typedef VOID(NETIOAPI_API_ *PSTABLE_UNICAST_IPADDRESS_TABLE_CALLBACK) (PVOID CallerContext, PMIB_UNICASTIPADDRESS_TABLE AddressTable);
NETIOAPI_API NotifyStableUnicastIpAddressTable(ADDRESS_FAMILY Family, PMIB_UNICASTIPADDRESS_TABLE *Table, PSTABLE_UNICAST_IPADDRESS_TABLE_CALLBACK CallerCallback, PVOID CallerContext, HANDLE *NotificationHandle);
NETIOAPI_API SetUnicastIpAddressEntry(CONST MIB_UNICASTIPADDRESS_ROW *Row);
typedef struct _MIB_ANYCASTIPADDRESS_ROW
{
	SOCKADDR_INET Address;
	NET_LUID InterfaceLuid;
	NET_IFINDEX InterfaceIndex;
	SCOPE_ID ScopeId;
} MIB_ANYCASTIPADDRESS_ROW, *PMIB_ANYCASTIPADDRESS_ROW;
typedef struct _MIB_ANYCASTIPADDRESS_TABLE {
	ULONG NumEntries;
	MIB_ANYCASTIPADDRESS_ROW Table[ANY_SIZE];
} MIB_ANYCASTIPADDRESS_TABLE, *PMIB_ANYCASTIPADDRESS_TABLE;
NETIOAPI_API CreateAnycastIpAddressEntry(CONST MIB_ANYCASTIPADDRESS_ROW *Row);
NETIOAPI_API DeleteAnycastIpAddressEntry(CONST MIB_ANYCASTIPADDRESS_ROW *Row);
NETIOAPI_API GetAnycastIpAddressEntry(PMIB_ANYCASTIPADDRESS_ROW Row);
NETIOAPI_API GetAnycastIpAddressTable(ADDRESS_FAMILY Family, PMIB_ANYCASTIPADDRESS_TABLE *Table);
typedef struct _MIB_MULTICASTIPADDRESS_ROW
{
	SOCKADDR_INET Address;
	NET_IFINDEX InterfaceIndex;
	NET_LUID InterfaceLuid;
	SCOPE_ID ScopeId;
} MIB_MULTICASTIPADDRESS_ROW, *PMIB_MULTICASTIPADDRESS_ROW;
typedef struct _MIB_MULTICASTIPADDRESS_TABLE
{
	ULONG NumEntries;
	MIB_MULTICASTIPADDRESS_ROW Table[ANY_SIZE];
} MIB_MULTICASTIPADDRESS_TABLE, *PMIB_MULTICASTIPADDRESS_TABLE;
NETIOAPI_API GetMulticastIpAddressEntry(PMIB_MULTICASTIPADDRESS_ROW Row);
NETIOAPI_API GetMulticastIpAddressTable(ADDRESS_FAMILY Family, PMIB_MULTICASTIPADDRESS_TABLE *Table);
typedef struct _IP_ADDRESS_PREFIX
{
    SOCKADDR_INET Prefix;
    UINT8 PrefixLength;
} IP_ADDRESS_PREFIX, *PIP_ADDRESS_PREFIX;    
typedef struct _MIB_IPFORWARD_ROW2
{
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex;
    IP_ADDRESS_PREFIX DestinationPrefix;
    SOCKADDR_INET NextHop;
    UCHAR SitePrefixLength;
    ULONG ValidLifetime;
    ULONG PreferredLifetime;
    ULONG Metric;
    NL_ROUTE_PROTOCOL Protocol;    
    BOOLEAN Loopback;
    BOOLEAN AutoconfigureAddress;
    BOOLEAN Publish;
    BOOLEAN Immortal;
    ULONG Age;
    NL_ROUTE_ORIGIN Origin;
} MIB_IPFORWARD_ROW2, *PMIB_IPFORWARD_ROW2;  
typedef struct _MIB_IPFORWARD_TABLE2
{
    ULONG NumEntries;
    MIB_IPFORWARD_ROW2 Table[ANY_SIZE];
} MIB_IPFORWARD_TABLE2, *PMIB_IPFORWARD_TABLE2;
typedef VOID(NETIOAPI_API_ *PIPFORWARD_CHANGE_CALLBACK) (PVOID CallerContext, PMIB_IPFORWARD_ROW2 Row, MIB_NOTIFICATION_TYPE NotificationType);
NETIOAPI_API CreateIpForwardEntry2(CONST MIB_IPFORWARD_ROW2 *Row);
NETIOAPI_API DeleteIpForwardEntry2(CONST MIB_IPFORWARD_ROW2 *Row);
NETIOAPI_API GetBestRoute2(NET_LUID *InterfaceLuid, NET_IFINDEX InterfaceIndex, CONST SOCKADDR_INET *SourceAddress, CONST SOCKADDR_INET *DestinationAddress, ULONG AddressSortOptions, PMIB_IPFORWARD_ROW2 BestRoute, SOCKADDR_INET *BestSourceAddress);
NETIOAPI_API GetIpForwardEntry2(PMIB_IPFORWARD_ROW2 Row);
NETIOAPI_API GetIpForwardTable2(ADDRESS_FAMILY Family, PMIB_IPFORWARD_TABLE2 *Table);
VOID NETIOAPI_API_ InitializeIpForwardEntry(PMIB_IPFORWARD_ROW2 Row);
NETIOAPI_API NotifyRouteChange2(ADDRESS_FAMILY AddressFamily, PIPFORWARD_CHANGE_CALLBACK Callback, PVOID CallerContext, BOOLEAN InitialNotification, HANDLE *NotificationHandle);
NETIOAPI_API SetIpForwardEntry2(CONST MIB_IPFORWARD_ROW2 *Route);
typedef struct _MIB_IPPATH_ROW
{
    SOCKADDR_INET Source;    
    SOCKADDR_INET Destination;
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex;
    SOCKADDR_INET CurrentNextHop;
    ULONG PathMtu;
    ULONG RttMean;
    ULONG RttDeviation;
    union
	{
        ULONG LastReachable;
        ULONG LastUnreachable;
    };
    BOOLEAN IsReachable;
    ULONG64 LinkTransmitSpeed;
    ULONG64 LinkReceiveSpeed;
} MIB_IPPATH_ROW, *PMIB_IPPATH_ROW;
typedef struct _MIB_IPPATH_TABLE
{
    ULONG NumEntries;
    MIB_IPPATH_ROW Table[ANY_SIZE];
} MIB_IPPATH_TABLE, *PMIB_IPPATH_TABLE;
NETIOAPI_API FlushIpPathTable(ADDRESS_FAMILY Family);
NETIOAPI_API GetIpPathEntry(PMIB_IPPATH_ROW Row);
NETIOAPI_API GetIpPathTable(ADDRESS_FAMILY Family, PMIB_IPPATH_TABLE *Table);
typedef struct _MIB_IPNET_ROW2
{
    SOCKADDR_INET Address;
    NET_IFINDEX InterfaceIndex;
    NET_LUID InterfaceLuid;
    UCHAR PhysicalAddress[IF_MAX_PHYS_ADDRESS_LENGTH];
    ULONG PhysicalAddressLength;
    NL_NEIGHBOR_STATE State;
    union
	{
        struct
		{
            BOOLEAN IsRouter : 1;
            BOOLEAN IsUnreachable : 1;
        };
        UCHAR Flags;
    };
    union
	{
        ULONG LastReachable;
        ULONG LastUnreachable;
    } ReachabilityTime;
} MIB_IPNET_ROW2, *PMIB_IPNET_ROW2;
typedef struct _MIB_IPNET_TABLE2
{
    ULONG NumEntries;
    MIB_IPNET_ROW2 Table[ANY_SIZE];
} MIB_IPNET_TABLE2, *PMIB_IPNET_TABLE2;
NETIOAPI_API CreateIpNetEntry2(CONST MIB_IPNET_ROW2 *Row);
NETIOAPI_API DeleteIpNetEntry2(CONST MIB_IPNET_ROW2 *Row);
NETIOAPI_API FlushIpNetTable2(ADDRESS_FAMILY Family, NET_IFINDEX InterfaceIndex);
NETIOAPI_API GetIpNetEntry2(PMIB_IPNET_ROW2 Row);
NETIOAPI_API GetIpNetTable2(ADDRESS_FAMILY Family, PMIB_IPNET_TABLE2 *Table);
NETIOAPI_API ResolveIpNetEntry2(PMIB_IPNET_ROW2 Row, CONST SOCKADDR_INET *SourceAddress);
NETIOAPI_API SetIpNetEntry2(PMIB_IPNET_ROW2 Row);
#define MIB_INVALID_TEREDO_PORT_NUMBER 0
typedef VOID(NETIOAPI_API_ *PTEREDO_PORT_CHANGE_CALLBACK) (PVOID CallerContext, USHORT Port, MIB_NOTIFICATION_TYPE NotificationType);
NETIOAPI_API NotifyTeredoPortChange(PTEREDO_PORT_CHANGE_CALLBACK Callback, PVOID CallerContext, BOOLEAN InitialNotification, HANDLE *NotificationHandle);
NETIOAPI_API GetTeredoPort(USHORT *Port);
#ifndef TEREDO_API_NO_DEPRECATE
#pragma deprecated(NotifyTeredoPortChange)
#pragma deprecated(GetTeredoPort)
#endif
NETIOAPI_API CancelMibChangeNotify2(HANDLE NotificationHandle);
VOID NETIOAPI_API_ FreeMibTable(PVOID Memory);
NETIOAPI_API CreateSortedAddressPairs(const PSOCKADDR_IN6 SourceAddressList, ULONG SourceAddressCount, const PSOCKADDR_IN6 DestinationAddressList, ULONG DestinationAddressCount, ULONG AddressSortOptions, PSOCKADDR_IN6_PAIR *SortedAddressPairList, ULONG *SortedAddressPairCount);
#endif
NETIOAPI_API ConvertInterfaceNameToLuidA(CONST CHAR *InterfaceName, NET_LUID *InterfaceLuid);
NETIOAPI_API ConvertInterfaceNameToLuidW(CONST WCHAR *InterfaceName, NET_LUID *InterfaceLuid);
NETIOAPI_API ConvertInterfaceLuidToNameA(CONST NET_LUID *InterfaceLuid, PSTR InterfaceName, SIZE_T Length);
NETIOAPI_API ConvertInterfaceLuidToNameW(CONST NET_LUID *InterfaceLuid, PWSTR InterfaceName, SIZE_T Length);
NETIOAPI_API ConvertInterfaceLuidToIndex(CONST NET_LUID *InterfaceLuid, PNET_IFINDEX InterfaceIndex);
NETIOAPI_API ConvertInterfaceIndexToLuid(NET_IFINDEX InterfaceIndex, PNET_LUID InterfaceLuid);
NETIOAPI_API ConvertInterfaceLuidToAlias(CONST NET_LUID *InterfaceLuid, PWSTR InterfaceAlias, SIZE_T Length);
NETIOAPI_API ConvertInterfaceAliasToLuid(CONST WCHAR *InterfaceAlias, PNET_LUID InterfaceLuid);
NETIOAPI_API ConvertInterfaceLuidToGuid(CONST NET_LUID *InterfaceLuid, GUID *InterfaceGuid);
NETIOAPI_API ConvertInterfaceGuidToLuid(CONST GUID *InterfaceGuid, PNET_LUID InterfaceLuid);
#define IF_NAMESIZE NDIS_IF_MAX_STRING_SIZE
NET_IFINDEX NETIOAPI_API_ if_nametoindex(PCSTR InterfaceName);
PCHAR NETIOAPI_API_ if_indextoname(NET_IFINDEX InterfaceIndex, PCHAR InterfaceName);
NET_IF_COMPARTMENT_ID NETIOAPI_API_ GetCurrentThreadCompartmentId(VOID);
NETIOAPI_API SetCurrentThreadCompartmentId(NET_IF_COMPARTMENT_ID CompartmentId);
NET_IF_COMPARTMENT_ID NETIOAPI_API_ GetSessionCompartmentId(ULONG SessionId);
NETIOAPI_API SetSessionCompartmentId(ULONG SessionId, NET_IF_COMPARTMENT_ID CompartmentId);
NETIOAPI_API GetNetworkInformation(CONST NET_IF_NETWORK_GUID *NetworkGuid, PNET_IF_COMPARTMENT_ID CompartmentId, PULONG SiteId, PWCHAR NetworkName, ULONG Length);
NETIOAPI_API SetNetworkInformation(CONST NET_IF_NETWORK_GUID *NetworkGuid, NET_IF_COMPARTMENT_ID CompartmentId, CONST WCHAR *NetworkName);
NETIOAPI_API ConvertLengthToIpv4Mask(ULONG MaskLength, PULONG Mask);
NETIOAPI_API ConvertIpv4MaskToLength(ULONG Mask, PUINT8 MaskLength);
#endif
