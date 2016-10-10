/*+@@file@@----------------------------------------------------------------*//*!
 \file		WinNls32.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 16:05:16 2016
 \date		Modified on Sun Sep  4 16:05:16 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WINNLS32_
#define _WINNLS32_
#if __POCC__ >= 500
#pragma once
#endif
typedef struct _tagDATETIME
{
    WORD    year;
    WORD    month;
    WORD    day;
    WORD    hour;
    WORD    min;
    WORD    sec;
} DATETIME;
typedef struct _tagIMEPROA
{
    HWND        hWnd;
    DATETIME    InstDate;
    UINT        wVersion;
    BYTE        szDescription[50];
    BYTE        szName[80];
    BYTE        szOptions[30];
} IMEPROA,*PIMEPROA,NEAR *NPIMEPROA,FAR *LPIMEPROA;
typedef struct _tagIMEPROW
{
    HWND        hWnd;
    DATETIME    InstDate;
    UINT        wVersion;
    WCHAR       szDescription[50];
    WCHAR       szName[80];
    WCHAR       szOptions[30];
} IMEPROW,*PIMEPROW,NEAR *NPIMEPROW,FAR *LPIMEPROW;
#ifdef UNICODE
typedef IMEPROW IMEPRO;
typedef PIMEPROW PIMEPRO;
typedef NPIMEPROW NPIMEPRO;
typedef LPIMEPROW LPIMEPRO;
#else
typedef IMEPROA IMEPRO;
typedef PIMEPROA PIMEPRO;
typedef NPIMEPROA NPIMEPRO;
typedef LPIMEPROA LPIMEPRO;
#endif
BOOL WINAPI IMPGetIMEA(HWND, LPIMEPROA);
BOOL WINAPI IMPGetIMEW(HWND, LPIMEPROW);
#ifdef UNICODE
#define IMPGetIME  IMPGetIMEW
#else
#define IMPGetIME  IMPGetIMEA
#endif
BOOL WINAPI IMPQueryIMEA(LPIMEPROA);
BOOL WINAPI IMPQueryIMEW(LPIMEPROW);
#ifdef UNICODE
#define IMPQueryIME  IMPQueryIMEW
#else
#define IMPQueryIME  IMPQueryIMEA
#endif
BOOL WINAPI IMPSetIMEA(HWND, LPIMEPROA);
BOOL WINAPI IMPSetIMEW(HWND, LPIMEPROW);
#ifdef UNICODE
#define IMPSetIME  IMPSetIMEW
#else
#define IMPSetIME  IMPSetIMEA
#endif
UINT WINAPI WINNLSGetIMEHotkey(HWND);
BOOL WINAPI WINNLSEnableIME(HWND, BOOL);
BOOL WINAPI WINNLSGetEnableStatus(HWND);
#endif
