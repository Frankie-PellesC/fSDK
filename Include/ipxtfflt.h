/*+@@file@@----------------------------------------------------------------*//*!
 \file		ipxtfflt.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 15:48:42 2016
 \date		Modified on Sun Jul 17 15:48:42 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __ipxfltdf_h
#define __ipxfltdf_h
#if __POCC__ >= 500
#pragma once
#endif
typedef struct _IPX_TRAFFIC_FILTER_GLOBAL_INFO
{
	ULONG	FilterAction;
} IPX_TRAFFIC_FILTER_GLOBAL_INFO, *PIPX_TRAFFIC_FILTER_GLOBAL_INFO;
#define IPX_TRAFFIC_FILTER_ACTION_PERMIT	1
#define IPX_TRAFFIC_FILTER_ACTION_DENY	    2
typedef struct _IPX_TRAFFIC_FILTER_INFO
{
    ULONG	FilterDefinition;
    UCHAR	DestinationNetwork[4];
    UCHAR	DestinationNetworkMask[4];
    UCHAR	DestinationNode[6];
    UCHAR	DestinationSocket[2];
    UCHAR	SourceNetwork[4];
    UCHAR	SourceNetworkMask[4];
    UCHAR	SourceNode[6];
    UCHAR	SourceSocket[2];
	UCHAR	PacketType;
} IPX_TRAFFIC_FILTER_INFO, *PIPX_TRAFFIC_FILTER_INFO;
#define IPX_TRAFFIC_FILTER_ON_SRCNET	0x00000001
#define IPX_TRAFFIC_FILTER_ON_SRCNODE	0x00000002
#define IPX_TRAFFIC_FILTER_ON_SRCSOCKET	0x00000004
#define IPX_TRAFFIC_FILTER_ON_DSTNET	0x00000010
#define IPX_TRAFFIC_FILTER_ON_DSTNODE	0x00000020
#define IPX_TRAFFIC_FILTER_ON_DSTSOCKET	0x00000040
#define IPX_TRAFFIC_FILTER_ON_PKTTYPE	0x00000100
#define IPX_TRAFFIC_FILTER_LOG_MATCHES	0x80000000
typedef struct _FLT_IF_SET_PARAMS
{
	ULONG			InterfaceIndex;
	ULONG			FilterAction;
	ULONG			FilterSize;
} FLT_IF_SET_PARAMS, *PFLT_IF_SET_PARAMS;
typedef struct _FLT_IF_GET_PARAMS
{
	ULONG			FilterAction;
	ULONG			FilterSize;
	ULONG			TotalSize;
} FLT_IF_GET_PARAMS, *PFLT_IF_GET_PARAMS;
typedef struct _FLT_PACKET_LOG
{
	ULONG			SrcIfIdx;
	ULONG			DstIfIdx;
	USHORT			DataSize;
	USHORT			SeqNum;
	UCHAR			Header[30];
} FLT_PACKET_LOG, *PFLT_PACKET_LOG;
#endif
