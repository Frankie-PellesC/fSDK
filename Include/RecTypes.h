/*+@@file@@----------------------------------------------------------------*//*!
 \file		RecTypes.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 19:32:15 2016
 \date		Modified on Fri Sep 16 19:32:15 2016
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
#ifndef __rectypes_h__
#define __rectypes_h__
#if __POCC__ >= 500
#pragma once
#endif
#include "wtypes.h"
#include "RecDefs.h"
#define SAFE_PARTIAL     1
#define BEST_COMPLETE    2
#define MAX_VENDORNAME   32
#define MAX_FRIENDLYNAME 64
#define MAX_LANGUAGES    64
#define CAC_FULL     0
#define CAC_PREFIX   1
#define CAC_RANDOM   2
#define ASYNC_RECO_INTERRUPTED               0x1
#define ASYNC_RECO_PROCESS_FAILED            0x2
#define ASYNC_RECO_ADDSTROKE_FAILED          0x4
#define ASYNC_RECO_SETCACMODE_FAILED         0x8
#define ASYNC_RECO_RESETCONTEXT_FAILED       0x10
#define ASYNC_RECO_SETGUIDE_FAILED           0x20
#define ASYNC_RECO_SETFLAGS_FAILED           0x40
#define ASYNC_RECO_SETFACTOID_FAILED         0x80
#define ASYNC_RECO_SETTEXTCONTEXT_FAILED     0x100
#define ASYNC_RECO_SETWORDLIST_FAILED        0x200
#define RF_DONTCARE              1L
#define RF_OBJECT                2L
#define RF_FREE_INPUT            4L
#define RF_LINED_INPUT           8L
#define RF_BOXED_INPUT           16L
#define RF_CAC_INPUT             32L
#define RF_RIGHT_AND_DOWN        64L
#define RF_LEFT_AND_DOWN         128L
#define RF_DOWN_AND_LEFT         256L
#define RF_DOWN_AND_RIGHT        512L
#define RF_ARBITRARY_ANGLE       1024L
#define RF_LATTICE               2048L
#define RF_ADVISEINKCHANGE       4096L
#define RF_STROKEREORDER         8192L
#define RF_PERSONALIZABLE        16384L
#define RF_PERFORMSLINEBREAKING  65536L
#define RF_REQUIRESSEGMENTATIONBREAKING 131072L
#ifndef __RECOTYPES__
#define __RECOTYPES__
typedef struct tagRECO_GUIDE
{
	int xOrigin;
	int yOrigin;
	int cxBox;
	int cyBox;
	int cxBase;
	int cyBase;
	int cHorzBox;
	int cVertBox;
	int cyMid;
} RECO_GUIDE;
typedef struct tagRECO_ATTRS
{
	DWORD dwRecoCapabilityFlags;
	WCHAR awcVendorName[32];
	WCHAR awcFriendlyName[64];
	WORD awLanguageId[64];
} RECO_ATTRS;
typedef struct tagRECO_RANGE
{
	ULONG iwcBegin;
	ULONG cCount;
} RECO_RANGE;
typedef struct tagLINE_SEGMENT
{
	POINT PtA;
	POINT PtB;
} LINE_SEGMENT;
typedef struct tagLATTICE_METRICS
{
	LINE_SEGMENT lsBaseline;
	short iMidlineOffset;
} LATTICE_METRICS;
typedef enum enumLINE_METRICS
{
	LM_BASELINE = 0,
	LM_MIDLINE = 1,
	LM_ASCENDER = 2,
	LM_DESCENDER = 3
} LINE_METRICS;
typedef enum enumCONFIDENCE_LEVEL
{
	CFL_STRONG = 0,
	CFL_INTERMEDIATE = 1,
	CFL_POOR = 2
} CONFIDENCE_LEVEL;
typedef enum enumALT_BREAKS
{
	ALT_BREAKS_SAME = 0,
	ALT_BREAKS_UNIQUE = 1,
	ALT_BREAKS_FULL = 2
} ALT_BREAKS;
typedef enum enumRECO_TYPE
{
	RECO_TYPE_WSTRING = 0,
	RECO_TYPE_WCHAR = 1
} RECO_TYPE;
typedef struct tagRECO_LATTICE_PROPERTY
{
	GUID guidProperty;
	USHORT cbPropertyValue;
	BYTE *pPropertyValue;
} RECO_LATTICE_PROPERTY;
typedef struct tagRECO_LATTICE_PROPERTIES
{
	ULONG cProperties;
	RECO_LATTICE_PROPERTY **apProps;
} RECO_LATTICE_PROPERTIES;
typedef int RECO_SCORE;
typedef struct tagRECO_LATTICE_ELEMENT
{
	RECO_SCORE score;
	WORD type;
	BYTE *pData;
	ULONG ulNextColumn;
	ULONG ulStrokeNumber;
	RECO_LATTICE_PROPERTIES epProp;
} RECO_LATTICE_ELEMENT;
typedef struct tagRECO_LATTICE_COLUMN
{
	ULONG key;
	RECO_LATTICE_PROPERTIES cpProp;
	ULONG cStrokes;
	ULONG *pStrokes;
	ULONG cLatticeElements;
	RECO_LATTICE_ELEMENT *pLatticeElements;
} RECO_LATTICE_COLUMN;
typedef struct tagRECO_LATTICE
{
	ULONG ulColumnCount;
	RECO_LATTICE_COLUMN *pLatticeColumns;
	ULONG ulPropertyCount;
	GUID *pGuidProperties;
	ULONG ulBestResultColumnCount;
	ULONG *pulBestResultColumns;
	ULONG *pulBestResultIndexes;
} RECO_LATTICE;
typedef struct tagCHARACTER_RANGE
{
	WCHAR wcLow;
	USHORT cChars;
} CHARACTER_RANGE;
typedef struct tagCHARACTER_RANGE *PCHARACTER_RANGE;
#endif
extern RPC_IF_HANDLE __MIDL_itf_rectypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rectypes_0000_0000_v0_0_s_ifspec;
#endif
