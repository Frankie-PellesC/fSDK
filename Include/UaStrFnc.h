/*+@@file@@----------------------------------------------------------------*//*!
 \file		UaStrFnc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 13:24:06 2016
 \date		Modified on Sat Sep 17 13:24:06 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _UASTRFNC_H_
#define _UASTRFNC_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef _X86_
#define ALIGNMENT_MACHINE
#endif
#ifdef ALIGNMENT_MACHINE
#define IS_ALIGNED(p)   (((ULONG_PTR)(p) & (sizeof(*(p))-1) )==0)
UNALIGNED WCHAR *ualstrcpynW(UNALIGNED WCHAR *lpString1, UNALIGNED const WCHAR *lpString2, int iMaxLength);
int ualstrcmpiW(UNALIGNED const WCHAR *dst, UNALIGNED const WCHAR *src);
int ualstrcmpW(UNALIGNED const WCHAR *src, UNALIGNED const WCHAR *dst);
size_t ualstrlenW(UNALIGNED const WCHAR *wcs);
UNALIGNED WCHAR *ualstrcpyW(UNALIGNED WCHAR *dst, UNALIGNED const WCHAR *src);
#else
#define ualstrcpynW StrCpyNW
#define ualstrcmpiW StrCmpIW
#define ualstrcmpW  StrCmpW
#define ualstrlenW  lstrlenW
#define ualstrcpyW  StrCpyW
#endif
#define ualstrcpynA lstrcpynA
#define ualstrcmpiA lstrcmpiA
#define ualstrcmpA  lstrcmpA
#define ualstrlenA  lstrlenA
#define ualstrcpyA  lstrcpyA
#ifdef UNICODE
#define ualstrcpyn ualstrcpynW
#define ualstrcmpi ualstrcmpiW
#define ualstrcmp  ualstrcmpW
#define ualstrlen  ualstrlenW
#define ualstrcpy  ualstrcpyW
#else
#define ualstrcpyn ualstrcpynA
#define ualstrcmpi ualstrcmpiA
#define ualstrcmp  ualstrcmpA
#define ualstrlen  ualstrlenA
#define ualstrcpy  ualstrcpyA
#endif
#endif
