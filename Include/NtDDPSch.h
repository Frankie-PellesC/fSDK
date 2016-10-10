/*+@@file@@----------------------------------------------------------------*//*!
 \file		NtDDPSch.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep  5 00:00:08 2016
 \date		Modified on Mon Sep  5 00:00:08 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _NTDDPSCH_
#define _NTDDPSCH_
#if __POCC__ >= 500
#pragma once
#endif
#pragma pack(1)
typedef struct _PS_COMPONENT_STATS
{
#define PS_COMPONENT_ADAPTER        1
#define PS_COMPONENT_FLOW           2
#define PS_COMPONENT_CONFORMER      3
#define PS_COMPONENT_SHAPER         4
#define PS_COMPONENT_DRRSEQ         5
    ULONG Type;
    ULONG Length;
    UCHAR Stats[1];
} PS_COMPONENT_STATS, *PPS_COMPONENT_STATS;
#pragma pack()
#pragma pack(1)
typedef struct _PS_CONFORMER_STATS
{
    ULONG NonconformingPacketsScheduled;
} PS_CONFORMER_STATS, *PPS_CONFORMER_STATS;
#pragma pack()
#pragma pack(1)
typedef struct _PS_SHAPER_STATS
{
    ULONG MaxPacketsInShaper;
    ULONG AveragePacketsInShaper;
} PS_SHAPER_STATS, *PPS_SHAPER_STATS;
#pragma pack()
#pragma pack(1)
typedef struct _PS_DRRSEQ_STATS
{
    ULONG MaxPacketsInNetcard;
    ULONG AveragePacketsInNetcard;
    ULONG MaxPacketsInSequencer;
    ULONG AveragePacketsInSequencer;
    ULONG NonconformingPacketsTransmitted;
} PS_DRRSEQ_STATS, *PPS_DRRSEQ_STATS;
#pragma pack()
#pragma pack(1)
typedef struct _PS_FLOW_STATS
{
    ULONG DroppedPackets;
    ULONG PacketsScheduled;
	ULONG PacketsTransmitted;
    LARGE_INTEGER BytesScheduled;
    LARGE_INTEGER BytesTransmitted;
} PS_FLOW_STATS, *PPS_FLOW_STATS;
#pragma pack()
#pragma pack(1)
typedef struct _PS_ADAPTER_STATS
{
    ULONG OutOfPackets;
    ULONG FlowsOpened;
    ULONG FlowsClosed;
    ULONG FlowsRejected;
    ULONG FlowsModified;
    ULONG FlowModsRejected;
    ULONG MaxSimultaneousFlows;
} PS_ADAPTER_STATS, *PPS_ADAPTER_STATS;
#pragma pack()
#define ADAPTER_FLOW_MODE_DIFFSERV           1
#define ADAPTER_FLOW_MODE_STANDARD           2
#endif
