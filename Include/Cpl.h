/*+@@file@@----------------------------------------------------------------*//*!
 \file		Cpl.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 12:20:16 2016
 \date		Modified on Mon Jul  4 12:20:16 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_CPL
#define _INC_CPL 
#if __POCC__ >= 500
#pragma once
#endif
#include <pshpack1.h>
#define WM_CPL_LAUNCH   (WM_USER+1000)
#define WM_CPL_LAUNCHED (WM_USER+1001)
typedef LONG (APIENTRY *APPLET_PROC)(HWND hwndCpl, UINT msg, LPARAM lParam1, LPARAM lParam2);
typedef struct tagCPLINFO
{
    int         idIcon;
    int         idName;
    int         idInfo;
    LONG_PTR    lData;
} CPLINFO, *LPCPLINFO;
typedef struct tagNEWCPLINFOA
{
    DWORD   dwSize;
    DWORD   dwFlags;
    DWORD   dwHelpContext;
    LONG_PTR lData;
    HICON   hIcon;
    CHAR    szName[32];
    CHAR    szInfo[64];
    CHAR    szHelpFile[128];
} NEWCPLINFOA, *LPNEWCPLINFOA;
typedef struct tagNEWCPLINFOW
{
    DWORD   dwSize;
    DWORD   dwFlags;
    DWORD   dwHelpContext;
    LONG_PTR lData;
    HICON   hIcon;
    WCHAR   szName[32];
    WCHAR   szInfo[64];
    WCHAR   szHelpFile[128];
} NEWCPLINFOW, *LPNEWCPLINFOW;
#ifdef UNICODE
typedef NEWCPLINFOW NEWCPLINFO;
typedef LPNEWCPLINFOW LPNEWCPLINFO;
#else
typedef NEWCPLINFOA NEWCPLINFO;
typedef LPNEWCPLINFOA LPNEWCPLINFO;
#endif
#if(WINVER >= 0x0400)
#define CPL_DYNAMIC_RES 0
#endif
#define CPL_INIT        1
#define CPL_GETCOUNT    2
#define CPL_INQUIRE     3
#define CPL_SELECT      4
#define CPL_DBLCLK      5
#define CPL_STOP        6
#define CPL_EXIT        7
#define CPL_NEWINQUIRE    8
#if(WINVER >= 0x0400)
#define CPL_STARTWPARMSA 9
#define CPL_STARTWPARMSW 10
#ifdef UNICODE
#define CPL_STARTWPARMS CPL_STARTWPARMSW
#else
#define CPL_STARTWPARMS CPL_STARTWPARMSA
#endif
#endif
#define CPL_SETUP               200
#include <poppack.h>
#endif
