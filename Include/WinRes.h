/*+@@file@@----------------------------------------------------------------*//*!
 \file		WinRes.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 22:34:45 2016
 \date		Modified on Sun Sep  4 22:34:45 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef WINRES_H__
#define WINRES_H__
#if __POCC__ >= 500
#pragma once
#endif
#define VS_VERSION_INFO     1
#ifdef APSTUDIO_INVOKED
#define APSTUDIO_HIDDEN_SYMBOLS
#endif
#ifndef WINVER
#define WINVER 0x0400
#endif
#include <winresrc.h>
#define LB_ADDSTRING    (WM_USER+1)
#define CB_ADDSTRING    (WM_USER+3)
#ifdef APSTUDIO_INVOKED
#undef APSTUDIO_HIDDEN_SYMBOLS
#endif
#ifdef IDC_STATIC
#undef IDC_STATIC
#endif
#define IDC_STATIC      (-1)
#endif
