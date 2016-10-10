/*+@@file@@----------------------------------------------------------------*//*!
 \file		WowNT16.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 16:46:54 2016
 \date		Modified on Mon Sep 19 16:46:54 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WOWNT16_
#define _WOWNT16_
#if defined(_MSC_VER)
#if __POCC__ >= 500
#pragma once
#endif
#endif
DWORD FAR PASCAL GetVDMPointer32W(LPVOID vp, UINT fMode);
DWORD FAR PASCAL LoadLibraryEx32W(LPCSTR lpszLibFile, DWORD hFile, DWORD dwFlags);
DWORD FAR PASCAL GetProcAddress32W(DWORD hModule, LPCSTR lpszProc);
DWORD FAR PASCAL FreeLibrary32W(DWORD hLibModule);
DWORD FAR CDECL CallProcEx32W( DWORD, DWORD, DWORD, ... );
#define CPEX_DEST_STDCALL   0x00000000L
#define CPEX_DEST_CDECL     0x80000000L
#endif
