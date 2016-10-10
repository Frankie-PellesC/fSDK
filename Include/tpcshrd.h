/*+@@file@@----------------------------------------------------------------*//*!
 \file		tpcshrd.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 01:03:52 2016
 \date		Modified on Sun Jul 17 01:03:52 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __tpcshrd_h__
#define __tpcshrd_h__
#if __POCC__ >= 500
#pragma once
#endif
#include "wtypes.h"
#ifndef __WISPSHRD_H
#define __WISPSHRD_H
#define WM_TABLET_DEFBASE                    0x02C0
#define WM_TABLET_MAXOFFSET                  0x20
#define WM_TABLET_ADDED                      (WM_TABLET_DEFBASE + 8)
#define WM_TABLET_DELETED                    (WM_TABLET_DEFBASE + 9)
#define WM_TABLET_FLICK                      (WM_TABLET_DEFBASE + 11)
#define WM_TABLET_QUERYSYSTEMGESTURESTATUS   (WM_TABLET_DEFBASE + 12)
#define MICROSOFT_TABLETPENSERVICE_PROPERTY _T("MicrosoftTabletPenServiceProperty")
#define TABLET_DISABLE_PRESSANDHOLD        0x00000001
#define TABLET_DISABLE_PENTAPFEEDBACK      0x00000008
#define TABLET_DISABLE_PENBARRELFEEDBACK   0x00000010
#define TABLET_DISABLE_TOUCHUIFORCEON      0x00000100
#define TABLET_DISABLE_TOUCHUIFORCEOFF     0x00000200
#define TABLET_DISABLE_TOUCHSWITCH         0x00008000
#define TABLET_DISABLE_FLICKS              0x00010000
#define TABLET_ENABLE_FLICKSONCONTEXT      0x00020000
#define TABLET_ENABLE_FLICKLEARNINGMODE    0x00040000
#define TABLET_DISABLE_SMOOTHSCROLLING     0x00080000
#define TABLET_DISABLE_FLICKFALLBACKKEYS   0x00100000
#define TABLET_ENABLE_MULTITOUCHDATA       0x01000000
#define MAX_PACKET_PROPERTY_COUNT    32
#define MAX_PACKET_BUTTON_COUNT      32
#define IP_CURSOR_DOWN           0x00000001
#define IP_INVERTED              0x00000002
#define IP_MARGIN                0x00000004
typedef DWORD CURSOR_ID;
typedef USHORT SYSTEM_EVENT;
typedef DWORD TABLET_CONTEXT_ID;
typedef enum _PROPERTY_UNITS
{
	PROPERTY_UNITS_DEFAULT = 0,
	PROPERTY_UNITS_INCHES = 1,
	PROPERTY_UNITS_CENTIMETERS = 2,
	PROPERTY_UNITS_DEGREES = 3,
	PROPERTY_UNITS_RADIANS = 4,
	PROPERTY_UNITS_SECONDS = 5,
	PROPERTY_UNITS_POUNDS = 6,
	PROPERTY_UNITS_GRAMS = 7,
	PROPERTY_UNITS_SILINEAR = 8,
	PROPERTY_UNITS_SIROTATION = 9,
	PROPERTY_UNITS_ENGLINEAR = 10,
	PROPERTY_UNITS_ENGROTATION = 11,
	PROPERTY_UNITS_SLUGS = 12,
	PROPERTY_UNITS_KELVIN = 13,
	PROPERTY_UNITS_FAHRENHEIT = 14,
	PROPERTY_UNITS_AMPERE = 15,
	PROPERTY_UNITS_CANDELA = 16
} PROPERTY_UNITS;
typedef enum _PROPERTY_UNITS *PPROPERTY_UNITS;
#ifndef _XFORM_
#define _XFORM_
typedef struct tagXFORM
{
	float eM11;
	float eM12;
	float eM21;
	float eM22;
	float eDx;
	float eDy;
} XFORM;
#endif
typedef struct tagSYSTEM_EVENT_DATA
{
	BYTE bModifier;
	WCHAR wKey;
	LONG xPos;
	LONG yPos;
	BYTE bCursorMode;
	DWORD dwButtonState;
} SYSTEM_EVENT_DATA;
typedef struct tagSTROKE_RANGE
{
	ULONG iStrokeBegin;
	ULONG iStrokeEnd;
} STROKE_RANGE;
typedef struct _PROPERTY_METRICS
{
	LONG nLogicalMin;
	LONG nLogicalMax;
	PROPERTY_UNITS Units;
	FLOAT fResolution;
} PROPERTY_METRICS;
typedef struct _PROPERTY_METRICS *PPROPERTY_METRICS;
typedef struct _PACKET_PROPERTY
{
	GUID guid;
	PROPERTY_METRICS PropertyMetrics;
} PACKET_PROPERTY;
typedef struct _PACKET_PROPERTY *PPACKET_PROPERTY;
typedef struct _PACKET_DESCRIPTION
{
	ULONG cbPacketSize;
	ULONG cPacketProperties;
	PACKET_PROPERTY *pPacketProperties;
	ULONG cButtons;
	GUID *pguidButtons;
} PACKET_DESCRIPTION;
typedef struct _PACKET_DESCRIPTION *PPACKET_DESCRIPTION;
#endif
extern RPC_IF_HANDLE __MIDL_itf_tpcshrd_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tpcshrd_0000_0000_v0_0_s_ifspec;
#endif
