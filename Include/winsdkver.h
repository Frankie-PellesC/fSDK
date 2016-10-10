/*+@@file@@----------------------------------------------------------------*//*!
 \file		winsdkver.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 22:54:00 2016
 \date		Modified on Sun Sep  4 22:54:00 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_WINSDKVER
#define _INC_WINSDKVER
#if __POCC__ >= 500
#pragma once
#endif
#define _WIN32_MAXVER           0x0601
#define _WIN32_WINDOWS_MAXVER   0x0601
#define NTDDI_MAXVER            0x06010000
#define _WIN32_IE_MAXVER        0x0800
#define _WIN32_WINNT_MAXVER     0x0601
#define WINVER_MAXVER           0x0601
#endif
