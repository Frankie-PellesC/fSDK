/*+@@file@@----------------------------------------------------------------*//*!
 \file		gb18030.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul 11 18:21:52 2016
 \date		Modified on Mon Jul 11 18:21:52 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __GB18030_H
#define __GB18030_H
#if __POCC__ >= 500
#pragma once
#endif
#define NLS_CP_CPINFO             0x10000000
#define NLS_CP_MBTOWC             0x40000000
#define NLS_CP_WCTOMB             0x80000000
STDAPI_(DWORD)NlsDllCodePageTranslation(DWORD CodePage, DWORD dwFlags, LPSTR lpMultiByteStr, int cchMultiByte, LPWSTR lpWideCharStr, int cchWideChar, LPCPINFO lpCPInfo);
#endif
