/*+@@file@@----------------------------------------------------------------*//*!
 \file		Traffic.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 19:34:43 2016
 \date		Modified on Sun Sep  4 19:34:43 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __TRAFFIC_H
#define __TRAFFIC_H
#if __POCC__ >= 500
#pragma once
#endif
#include <qosobjs.h>
#define CURRENT_TCI_VERSION         0x0002
#define TC_NOTIFY_IFC_UP        1
#define TC_NOTIFY_IFC_CLOSE     2
#define TC_NOTIFY_IFC_CHANGE    3
#define TC_NOTIFY_PARAM_CHANGED 4
#define TC_NOTIFY_FLOW_CLOSE        5
#define TC_INVALID_HANDLE   ((HANDLE)0)
#define MAX_STRING_LENGTH   256
#ifndef CALLBACK
#define CALLBACK __stdcall
#endif
#ifndef APIENTRY
#define APIENTRY FAR __stdcall
#endif
typedef VOID(CALLBACK *TCI_NOTIFY_HANDLER) (HANDLE ClRegCtx, HANDLE ClIfcCtx, ULONG Event, HANDLE SubCode, ULONG BufSize, PVOID Buffer);
typedef VOID(CALLBACK *TCI_ADD_FLOW_COMPLETE_HANDLER) (HANDLE ClFlowCtx, ULONG Status);
typedef VOID(CALLBACK *TCI_MOD_FLOW_COMPLETE_HANDLER) (HANDLE ClFlowCtx, ULONG Status);
typedef VOID(CALLBACK *TCI_DEL_FLOW_COMPLETE_HANDLER) (HANDLE ClFlowCtx, ULONG Status);
typedef struct _TCI_CLIENT_FUNC_LIST
{
	TCI_NOTIFY_HANDLER ClNotifyHandler;
	TCI_ADD_FLOW_COMPLETE_HANDLER ClAddFlowCompleteHandler;
	TCI_MOD_FLOW_COMPLETE_HANDLER ClModifyFlowCompleteHandler;
	TCI_DEL_FLOW_COMPLETE_HANDLER ClDeleteFlowCompleteHandler;
} TCI_CLIENT_FUNC_LIST, *PTCI_CLIENT_FUNC_LIST;
typedef struct _ADDRESS_LIST_DESCRIPTOR
{
	ULONG MediaType;
	NETWORK_ADDRESS_LIST AddressList;
} ADDRESS_LIST_DESCRIPTOR, *PADDRESS_LIST_DESCRIPTOR;
typedef struct _TC_IFC_DESCRIPTOR
{
	ULONG Length;
	LPWSTR pInterfaceName;
	LPWSTR pInterfaceID;
	ADDRESS_LIST_DESCRIPTOR AddressListDesc;
} TC_IFC_DESCRIPTOR, *PTC_IFC_DESCRIPTOR;
typedef struct _TC_SUPPORTED_INFO_BUFFER
{
	USHORT InstanceIDLength;
	WCHAR InstanceID[MAX_STRING_LENGTH];
	ULONG64 InterfaceLuid;
	ADDRESS_LIST_DESCRIPTOR AddrListDesc;
} TC_SUPPORTED_INFO_BUFFER, *PTC_SUPPORTED_INFO_BUFFER;
typedef struct _TC_GEN_FILTER
{
	USHORT AddressType;
	ULONG PatternSize;
	PVOID Pattern;
	PVOID Mask;
} TC_GEN_FILTER, *PTC_GEN_FILTER;
typedef struct _TC_GEN_FLOW
{
	FLOWSPEC SendingFlowspec;
	FLOWSPEC ReceivingFlowspec;
	ULONG TcObjectsLength;
	QOS_OBJECT_HDR TcObjects[1];
} TC_GEN_FLOW, *PTC_GEN_FLOW;
typedef struct _IP_PATTERN
{
	ULONG Reserved1;
	ULONG Reserved2;
	ULONG SrcAddr;
	ULONG DstAddr;
	union
	{
		struct
		{
			USHORT s_srcport, s_dstport;
		} S_un_ports;
		struct
		{
			UCHAR s_type, s_code;
			USHORT filler;
		} S_un_icmp;
		ULONG S_Spi;
	} S_un;
	UCHAR ProtocolId;
	UCHAR Reserved3[3];
#define tcSrcPort S_un.S_un_ports.s_srcport
#define tcDstPort S_un.S_un_ports.s_dstport
#define tcIcmpType        S_un.S_un_icmp.s_type
#define tcIcmpCode        S_un.S_un_icmp.s_code
#define tcSpi             S_un.S_Spi
} IP_PATTERN, *PIP_PATTERN;
typedef struct _IPX_PATTERN
{
	struct
	{
		ULONG NetworkAddress;
		UCHAR NodeAddress[6];
		USHORT Socket;
	} Src, Dest;
} IPX_PATTERN, *PIPX_PATTERN;
typedef struct _ENUMERATION_BUFFER
{
	ULONG Length;
	ULONG OwnerProcessId;
	USHORT FlowNameLength;
	WCHAR FlowName[MAX_STRING_LENGTH];
	PTC_GEN_FLOW pFlow;
	ULONG NumberOfFilters;
	TC_GEN_FILTER GenericFilter[1];
} ENUMERATION_BUFFER, *PENUMERATION_BUFFER;
ULONG APIENTRY TcRegisterClient(ULONG TciVersion, HANDLE ClRegCtx, PTCI_CLIENT_FUNC_LIST ClientHandlerList, PHANDLE pClientHandle);
ULONG APIENTRY TcEnumerateInterfaces(HANDLE ClientHandle, PULONG pBufferSize, PTC_IFC_DESCRIPTOR InterfaceBuffer);
ULONG APIENTRY TcOpenInterfaceA(LPSTR pInterfaceName, HANDLE ClientHandle, HANDLE ClIfcCtx, PHANDLE pIfcHandle);
ULONG APIENTRY TcOpenInterfaceW(LPWSTR pInterfaceName, HANDLE ClientHandle, HANDLE ClIfcCtx, PHANDLE pIfcHandle);
ULONG APIENTRY TcCloseInterface(HANDLE IfcHandle);
ULONG APIENTRY TcQueryInterface(HANDLE IfcHandle, LPGUID pGuidParam, BOOLEAN NotifyChange, PULONG pBufferSize, PVOID Buffer);
ULONG APIENTRY TcSetInterface(HANDLE IfcHandle, LPGUID pGuidParam, ULONG BufferSize, PVOID Buffer);
ULONG APIENTRY TcQueryFlowA(LPSTR pFlowName, LPGUID pGuidParam, PULONG pBufferSize, PVOID Buffer);
ULONG APIENTRY TcQueryFlowW(LPWSTR pFlowName, LPGUID pGuidParam, PULONG pBufferSize, PVOID Buffer);
ULONG APIENTRY TcSetFlowA(LPSTR pFlowName, LPGUID pGuidParam, ULONG BufferSize, PVOID Buffer);
ULONG APIENTRY TcSetFlowW(LPWSTR pFlowName, LPGUID pGuidParam, ULONG BufferSize, PVOID Buffer);
ULONG APIENTRY TcAddFlow(HANDLE IfcHandle, HANDLE ClFlowCtx, ULONG Flags, PTC_GEN_FLOW pGenericFlow, PHANDLE pFlowHandle);
ULONG APIENTRY TcGetFlowNameA(HANDLE FlowHandle, ULONG StrSize, LPSTR pFlowName);
ULONG APIENTRY TcGetFlowNameW(HANDLE FlowHandle, ULONG StrSize, LPWSTR pFlowName);
ULONG APIENTRY TcModifyFlow(HANDLE FlowHandle, PTC_GEN_FLOW pGenericFlow);
ULONG APIENTRY TcAddFilter(HANDLE FlowHandle, PTC_GEN_FILTER pGenericFilter, PHANDLE pFilterHandle);
ULONG APIENTRY TcDeregisterClient(HANDLE ClientHandle);
ULONG APIENTRY TcDeleteFlow(HANDLE FlowHandle);
ULONG APIENTRY TcDeleteFilter(HANDLE FilterHandle);
ULONG APIENTRY TcEnumerateFlows(HANDLE IfcHandle, PHANDLE pEnumHandle, PULONG pFlowCount, PULONG pBufSize, PENUMERATION_BUFFER Buffer);
#ifdef UNICODE
#define TcOpenInterface		TcOpenInterfaceW
#define TcQueryFlow 		TcQueryFlowW
#define TcSetFlow			TcSetFlowW
#define TcGetFlowName		TcGetFlowNameW
#else
#define TcOpenInterface 	TcOpenInterfaceA
#define TcQueryFlow 		TcQueryFlowA
#define TcSetFlow			TcSetFlowA
#define TcGetFlowName		TcGetFlowNameA
#endif
#endif
