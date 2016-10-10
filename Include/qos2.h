/*+@@file@@----------------------------------------------------------------*//*!
 \file		qos2.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 12 01:06:56 2016
 \date		Modified on Mon Sep 12 01:06:56 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef QOS2_H__
#define QOS2_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <ws2tcpip.h>
#include <mstcpip.h>
typedef ULONG QOS_FLOWID, *PQOS_FLOWID;
typedef enum _QOS_TRAFFIC_TYPE 
{
    QOSTrafficTypeBestEffort        = 0,
    QOSTrafficTypeBackground        = 1,
    QOSTrafficTypeExcellentEffort   = 2,
    QOSTrafficTypeAudioVideo        = 3,
    QOSTrafficTypeVoice             = 4,
    QOSTrafficTypeControl           = 5
} QOS_TRAFFIC_TYPE, *PQOS_TRAFFIC_TYPE;
typedef enum _QOS_SET_FLOW
{
    QOSSetTrafficType           = 0,
    QOSSetOutgoingRate          = 1,
    QOSSetOutgoingDSCPValue     = 2
} QOS_SET_FLOW, *PQOS_SET_FLOW;
typedef struct _QOS_PACKET_PRIORITY
{
    ULONG   ConformantDSCPValue;
    ULONG   NonConformantDSCPValue;
    ULONG   ConformantL2Value;
    ULONG   NonConformantL2Value;
} QOS_PACKET_PRIORITY, *PQOS_PACKET_PRIORITY;
typedef struct _QOS_FLOW_FUNDAMENTALS
{
    BOOL    BottleneckBandwidthSet;
    UINT64  BottleneckBandwidth;
    BOOL    AvailableBandwidthSet;
    UINT64  AvailableBandwidth;
    BOOL    RTTSet;
    UINT32  RTT;
} QOS_FLOW_FUNDAMENTALS, *PQOS_FLOW_FUNDAMENTALS;
typedef enum _QOS_FLOWRATE_REASON
{
    QOSFlowRateNotApplicable            = 0,
    QOSFlowRateContentChange            = 1,
    QOSFlowRateCongestion               = 2,
    QOSFlowRateHigherContentEncoding    = 3,
    QOSFlowRateUserCaused               = 4
} QOS_FLOWRATE_REASON, *PQOS_FLOWRATE_REASON;
typedef enum _QOS_SHAPING{
    QOSShapeOnly                        = 0,
    QOSShapeAndMark                     = 1,
    QOSUseNonConformantMarkings         = 2
} QOS_SHAPING, *PQOS_SHAPING;
#define QOS_OUTGOING_DEFAULT_MINIMUM_BANDWIDTH  0xFFFFFFFF
typedef struct _QOS_FLOWRATE_OUTGOING
{
    UINT64                  Bandwidth;
    QOS_SHAPING             ShapingBehavior;
    QOS_FLOWRATE_REASON     Reason;
} QOS_FLOWRATE_OUTGOING, *PQOS_FLOWRATE_OUTGOING;
typedef enum _QOS_QUERY_FLOW
{
    QOSQueryFlowFundamentals    = 0,
    QOSQueryPacketPriority      = 1,
    QOSQueryOutgoingRate        = 2
} QOS_QUERY_FLOW, *PQOS_QUERY_FLOW;
typedef enum _QOS_NOTIFY_FLOW
{
    QOSNotifyCongested          = 0,
    QOSNotifyUncongested        = 1,       
    QOSNotifyAvailable          = 2       
} QOS_NOTIFY_FLOW, *PQOS_NOTIFY_FLOW;
typedef struct _QOS_VERSION
{
    USHORT MajorVersion;
    USHORT MinorVersion;
} QOS_VERSION, *PQOS_VERSION;
#define QOS_QUERYFLOW_FRESH         0x00000001
#define QOS_NON_ADAPTIVE_FLOW       0x00000002
__inline INT QOS_HEADER_OVERHEAD(INT af, INT protocol)
{
	UINT32 overhead;
	if (af == AF_INET)
		overhead = 20;
	else
		overhead = 40;
	if (protocol == IPPROTO_TCP)
		overhead += 20;
	else
		overhead += 8;
	return overhead;
}
__inline UINT64 QOS_ADD_OVERHEAD(INT af, INT protocol, UINT32 targetDataPacketSize, UINT64 dataRate)
{
	UINT32 overhead;
	double d;
	UINT64 r;
	overhead = QOS_HEADER_OVERHEAD(af, protocol);
	overhead *= 8;
	targetDataPacketSize *= 8;
	d = (double)overhead;
	d /= (double)targetDataPacketSize;
	d *= (double)dataRate;
	r = dataRate;
	r += (UINT64)d;
	return r;
}
__inline UINT64 QOS_SUBTRACT_OVERHEAD(INT af, INT protocol, UINT32 targetDataPacketSize, UINT64 dataRate)
{
	UINT32 overhead;
	double d;
	UINT64 r;
	overhead = QOS_HEADER_OVERHEAD(af, protocol);
	overhead *= 8;
	targetDataPacketSize *= 8;
	d = (double)overhead;
	d /= (double)targetDataPacketSize + overhead;
	d *= (double)dataRate;
	r = dataRate;
	r -= (UINT64)d;
	return r;
}
BOOL WINAPI QOSCreateHandle(PQOS_VERSION Version, PHANDLE QOSHandle);
BOOL WINAPI QOSCloseHandle(HANDLE QOSHandle);
BOOL WINAPI QOSStartTrackingClient(HANDLE QOSHandle, PSOCKADDR DestAddr, DWORD Flags);
BOOL WINAPI QOSStopTrackingClient(HANDLE QOSHandle, PSOCKADDR DestAddr, DWORD Flags);
BOOL WINAPI QOSEnumerateFlows(HANDLE QOSHandle, PULONG Size, PVOID Buffer);
BOOL WINAPI QOSAddSocketToFlow(HANDLE QOSHandle, SOCKET Socket, PSOCKADDR DestAddr, QOS_TRAFFIC_TYPE TrafficType, DWORD Flags, PQOS_FLOWID FlowId);
BOOL WINAPI QOSRemoveSocketFromFlow(HANDLE QOSHandle, SOCKET Socket, QOS_FLOWID FlowId, DWORD Flags);
BOOL WINAPI QOSSetFlow(HANDLE QOSHandle, QOS_FLOWID FlowId, QOS_SET_FLOW Operation, ULONG Size, PVOID Buffer, DWORD Flags, LPOVERLAPPED Overlapped);
BOOL WINAPI QOSQueryFlow(HANDLE QOSHandle, QOS_FLOWID FlowId, QOS_QUERY_FLOW Operation, PULONG Size, PVOID Buffer, DWORD Flags, LPOVERLAPPED Overlapped);
BOOL WINAPI QOSNotifyFlow(HANDLE QOSHandle, QOS_FLOWID FlowId, QOS_NOTIFY_FLOW Operation, PULONG Size, PVOID Buffer, DWORD Flags, LPOVERLAPPED Overlapped);
BOOL WINAPI QOSCancel(HANDLE QOSHandle, LPOVERLAPPED Overlapped);
#endif
