/*+@@file@@----------------------------------------------------------------*//*!
 \file		CustCntl.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 18:54:30 2016
 \date		Modified on Mon Jul  4 18:54:30 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_CUSTCNTL
#define _INC_CUSTCNTL
#if __POCC__ >= 500
#pragma once
#endif
#define CCHCCCLASS          32
#define CCHCCDESC           32
#define CCHCCTEXT           256
typedef struct tagCCSTYLEA
{
    DWORD   flStyle;
    DWORD   flExtStyle;
    CHAR    szText[CCHCCTEXT];
    LANGID  lgid;
    WORD    wReserved1;
} CCSTYLEA, *LPCCSTYLEA;
typedef struct tagCCSTYLEW
{
    DWORD   flStyle;
    DWORD   flExtStyle;
    WCHAR   szText[CCHCCTEXT];
    LANGID  lgid;
    WORD    wReserved1;
} CCSTYLEW, *LPCCSTYLEW;
#ifdef UNICODE
#define CCSTYLE     CCSTYLEW
#define LPCCSTYLE   LPCCSTYLEW
#else
#define CCSTYLE     CCSTYLEA
#define LPCCSTYLE   LPCCSTYLEA
#endif
typedef BOOL (CALLBACK* LPFNCCSTYLEA)(HWND hwndParent,  LPCCSTYLEA pccs);
typedef BOOL (CALLBACK* LPFNCCSTYLEW)(HWND hwndParent,  LPCCSTYLEW pccs);
#ifdef UNICODE
#define LPFNCCSTYLE LPFNCCSTYLEW
#else
#define LPFNCCSTYLE LPFNCCSTYLEA
#endif
typedef INT (CALLBACK* LPFNCCSIZETOTEXTA)(DWORD flStyle, DWORD flExtStyle, HFONT hfont, LPSTR pszText);
typedef INT (CALLBACK* LPFNCCSIZETOTEXTW)(DWORD flStyle, DWORD flExtStyle, HFONT hfont, LPWSTR pszText);
#ifdef UNICODE
#define LPFNCCSIZETOTEXT    LPFNCCSIZETOTEXTW
#else
#define LPFNCCSIZETOTEXT    LPFNCCSIZETOTEXTA
#endif
typedef struct tagCCSTYLEFLAGA
{
    DWORD flStyle;
    DWORD flStyleMask;
    LPSTR pszStyle;
} CCSTYLEFLAGA, *LPCCSTYLEFLAGA;
typedef struct tagCCSTYLEFLAGW
{
    DWORD flStyle;
    DWORD flStyleMask;
    LPWSTR pszStyle;
} CCSTYLEFLAGW, *LPCCSTYLEFLAGW;
#ifdef UNICODE
#define CCSTYLEFLAG     CCSTYLEFLAGW
#define LPCCSTYLEFLAG   LPCCSTYLEFLAGW
#else
#define CCSTYLEFLAG     CCSTYLEFLAGA
#define LPCCSTYLEFLAG   LPCCSTYLEFLAGA
#endif
#define CCF_NOTEXT          0x00000001
typedef struct tagCCINFOA
{
    CHAR    szClass[CCHCCCLASS];
    DWORD   flOptions;
    CHAR    szDesc[CCHCCDESC];
    UINT    cxDefault;
    UINT    cyDefault;
    DWORD   flStyleDefault;
    DWORD   flExtStyleDefault;
    DWORD   flCtrlTypeMask;
    CHAR    szTextDefault[CCHCCTEXT];
    INT     cStyleFlags;
    LPCCSTYLEFLAGA aStyleFlags;
    LPFNCCSTYLEA lpfnStyle;
    LPFNCCSIZETOTEXTA lpfnSizeToText;
    DWORD   dwReserved1;
    DWORD   dwReserved2;
} CCINFOA, *LPCCINFOA;
typedef struct tagCCINFOW
{
    WCHAR   szClass[CCHCCCLASS];
    DWORD   flOptions;
    WCHAR   szDesc[CCHCCDESC];
    UINT    cxDefault;
    UINT    cyDefault;
    DWORD   flStyleDefault;
    DWORD   flExtStyleDefault;
    DWORD   flCtrlTypeMask;
    INT     cStyleFlags;
    LPCCSTYLEFLAGW aStyleFlags;
    WCHAR   szTextDefault[CCHCCTEXT];
    LPFNCCSTYLEW lpfnStyle;
    LPFNCCSIZETOTEXTW lpfnSizeToText;
    DWORD   dwReserved1;
    DWORD   dwReserved2;
} CCINFOW, *LPCCINFOW;
#ifdef UNICODE
#define CCINFO      CCINFOW
#define LPCCINFO    LPCCINFOW
#else
#define CCINFO      CCINFOA
#define LPCCINFO    LPCCINFOA
#endif
typedef UINT (CALLBACK* LPFNCCINFOA)(LPCCINFOA acci);
typedef UINT (CALLBACK* LPFNCCINFOW)(LPCCINFOW acci);
#ifdef UNICODE
#define LPFNCCINFO  LPFNCCINFOW
#else
#define LPFNCCINFO  LPFNCCINFOA
#endif
#endif
