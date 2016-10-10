/*+@@file@@----------------------------------------------------------------*//*!
 \file		qosobjs.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 19:37:25 2016
 \date		Modified on Sun Sep  4 19:37:25 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __QOSOBJS_H__
#define __QOSOBJS_H__
#if __POCC__ >= 500
#pragma once
#endif
#define QOS_MAX_OBJECT_STRING_LENGTH    256
#define QOS_TRAFFIC_GENERAL_ID_BASE 4000
#define QOS_OBJECT_DS_CLASS                    (0x00000001 + QOS_TRAFFIC_GENERAL_ID_BASE)
#define QOS_OBJECT_TRAFFIC_CLASS               (0x00000002 + QOS_TRAFFIC_GENERAL_ID_BASE)
#define   QOS_OBJECT_DIFFSERV                  (0x00000003 + QOS_TRAFFIC_GENERAL_ID_BASE)
#define QOS_OBJECT_TCP_TRAFFIC                 (0x00000004 + QOS_TRAFFIC_GENERAL_ID_BASE)
#define QOS_OBJECT_FRIENDLY_NAME               (0x00000005 + QOS_TRAFFIC_GENERAL_ID_BASE)
#define QOS_OBJECT_STARTING_RATE               (0x00000006 + QOS_TRAFFIC_GENERAL_ID_BASE)
typedef struct _QOS_FRIENDLY_NAME
{
	QOS_OBJECT_HDR ObjectHdr;
	WCHAR FriendlyName[QOS_MAX_OBJECT_STRING_LENGTH];
} QOS_FRIENDLY_NAME, *LPQOS_FRIENDLY_NAME;
typedef struct _QOS_TRAFFIC_CLASS
{
	QOS_OBJECT_HDR ObjectHdr;
	ULONG TrafficClass;
} QOS_TRAFFIC_CLASS, *LPQOS_TRAFFIC_CLASS;
typedef struct _QOS_DS_CLASS
{
	QOS_OBJECT_HDR ObjectHdr;
	ULONG DSField;
} QOS_DS_CLASS, *LPQOS_DS_CLASS;
typedef struct _QOS_DIFFSERV
{
	QOS_OBJECT_HDR ObjectHdr;
	ULONG DSFieldCount;
	UCHAR DiffservRule[1];
} QOS_DIFFSERV, *LPQOS_DIFFSERV;
typedef struct _QOS_DIFFSERV_RULE
{
    UCHAR InboundDSField;
    UCHAR ConformingOutboundDSField;
    UCHAR NonConformingOutboundDSField;
    UCHAR ConformingUserPriority;
    UCHAR NonConformingUserPriority;
} QOS_DIFFSERV_RULE, *LPQOS_DIFFSERV_RULE;
typedef struct _QOS_TCP_TRAFFIC
{
    QOS_OBJECT_HDR ObjectHdr;
} QOS_TCP_TRAFFIC, *LPQOS_TCP_TRAFFIC;
typedef struct _QOS_STARTING_RATE
{
    QOS_OBJECT_HDR ObjectHdr;
    ULONG StartingTokenRate;
    ULONG RampingTime;
} QOS_STARTING_RATE, *LPQOS_STARTING_RATE;
#endif
