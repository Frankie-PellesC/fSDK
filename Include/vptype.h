/*+@@file@@----------------------------------------------------------------*//*!
 \file		vptype.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 17:50:06 2016
 \date		Modified on Sun Jun 19 17:50:06 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __IVPType__
#define __IVPType__
#if __POCC__ >= 500
#pragma once
#endif
typedef enum _AMVP_SELECT_FORMAT_BY
{
	AMVP_DO_NOT_CARE,
	AMVP_BEST_BANDWIDTH,
	AMVP_INPUT_SAME_AS_OUTPUT
} AMVP_SELECT_FORMAT_BY;
typedef enum _AMVP_MODE
{
	AMVP_MODE_WEAVE,
	AMVP_MODE_BOBINTERLEAVED,
	AMVP_MODE_BOBNONINTERLEAVED,
	AMVP_MODE_SKIPEVEN,
	AMVP_MODE_SKIPODD
} AMVP_MODE;
typedef struct _AMVPSIZE
{
	DWORD dwWidth;
	DWORD dwHeight;
} AMVPSIZE, *LPAMVPSIZE;
typedef struct _AMVPDIMINFO
{
	DWORD dwFieldWidth;
	DWORD dwFieldHeight;
	DWORD dwVBIWidth;
	DWORD dwVBIHeight;
	RECT rcValidRegion;
} AMVPDIMINFO, *LPAMVPDIMINFO;
typedef struct _AMVPDATAINFO
{
	DWORD dwSize;
	DWORD dwMicrosecondsPerField;
	AMVPDIMINFO amvpDimInfo;
	DWORD dwPictAspectRatioX;
	DWORD dwPictAspectRatioY;
	BOOL bEnableDoubleClock;
	BOOL bEnableVACT;
	BOOL bDataIsInterlaced;
	LONG lHalfLinesOdd;
	BOOL bFieldPolarityInverted;
	DWORD dwNumLinesInVREF;
	LONG lHalfLinesEven;
	DWORD dwReserved1;
} AMVPDATAINFO, *LPAMVPDATAINFO;

#endif


