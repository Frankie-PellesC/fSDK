/*+@@file@@----------------------------------------------------------------*//*!
 \file		dmusbuff.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:55:00 2016
 \date		Modified on Sun Jun 19 16:55:00 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _DMusBuff_
#define _DMusBuff_
#if __POCC__ >= 500
#pragma once
#endif
#include <dmdls.h>
#include <pshpack4.h> 
typedef struct _DMUS_EVENTHEADER *LPDMUS_EVENTHEADER;
typedef struct _DMUS_EVENTHEADER
{
    DWORD           cbEvent;
    DWORD           dwChannelGroup;
    REFERENCE_TIME  rtDelta;
    DWORD           dwFlags;
} DMUS_EVENTHEADER;
#include <poppack.h>
#define DMUS_EVENT_STRUCTURED   0x00000001   
#define QWORD_ALIGN(x) (((x) + 7) & ~7)
#define DMUS_EVENT_SIZE(cb) QWORD_ALIGN(sizeof(DMUS_EVENTHEADER) + cb)
#endif


