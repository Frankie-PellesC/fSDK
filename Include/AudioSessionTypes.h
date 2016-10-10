/*+@@file@@----------------------------------------------------------------*//*!
 \file		AudioSessionTypes.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 18:44:26 2016
 \date		Modified on Sat Jul  2 18:44:26 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __AUDIOSESSIONTYPES__                                                               
#define __AUDIOSESSIONTYPES__
#if __POCC__ >= 500
#pragma once
#endif
typedef enum _AUDCLNT_SHAREMODE
{ 
    AUDCLNT_SHAREMODE_SHARED, 
    AUDCLNT_SHAREMODE_EXCLUSIVE 
} AUDCLNT_SHAREMODE;
#define AUDCLNT_STREAMFLAGS_CROSSPROCESS             0x00010000
#define AUDCLNT_STREAMFLAGS_LOOPBACK                 0x00020000
#define AUDCLNT_STREAMFLAGS_EVENTCALLBACK            0x00040000
#define AUDCLNT_STREAMFLAGS_NOPERSIST                0x00080000
#define AUDCLNT_STREAMFLAGS_RATEADJUST               0x00100000
#define AUDCLNT_SESSIONFLAGS_EXPIREWHENUNOWNED       0x10000000
#define AUDCLNT_SESSIONFLAGS_DISPLAY_HIDE            0x20000000
#define AUDCLNT_SESSIONFLAGS_DISPLAY_HIDEWHENEXPIRED 0x40000000
typedef enum _AudioSessionState
{
    AudioSessionStateInactive = 0,
    AudioSessionStateActive = 1,
    AudioSessionStateExpired = 2
} AudioSessionState;
#endif
