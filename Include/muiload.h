/*+@@file@@----------------------------------------------------------------*//*!
 \file		muiload.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:01:16 2016
 \date		Modified on Sun Sep 11 22:01:16 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MUILOAD_H_INCLUDED_
#define _MUILOAD_H_INCLUDED_
#if __POCC__ >= 500
#pragma once
#endif
#include <windows.h>
#define MUI_LANGUAGE_ID          0x4
#define MUI_LANGUAGE_NAME        0x8
#define MUI_LANGUAGE_EXACT      0x10
HINSTANCE __stdcall LoadMUILibraryA(PCSTR pszFullModuleName, DWORD dwLangConvention, LANGID LangID);
HINSTANCE __stdcall LoadMUILibraryW(PCWSTR pszFullModuleName, DWORD dwLangConvention, LANGID LangID);
#ifdef UNICODE
#define LoadMUILibrary LoadMUILibraryW
#else
#define LoadMUILibrary LoadMUILibraryA
#endif
BOOL __stdcall FreeMUILibrary(HMODULE hResModule);
BOOL __stdcall GetUILanguageFallbackList(PWSTR pFallbackList, ULONG cchFallbackList, PULONG pcchFallbackOut);
#endif
