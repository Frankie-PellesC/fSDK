/*+@@file@@----------------------------------------------------------------*//*!
 \file		comlite.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:29:59 2016
 \date		Modified on Sun Jun 19 16:29:59 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_COMLITE_
#define _INC_COMLITE_
#if __POCC__ >= 500
#pragma once
#endif
#define QzInitialize            CoInitialize
#define QzUninitialize          CoUninitialize
#define QzFreeUnusedLibraries   CoFreeUnusedLibraries
#define QzGetMalloc             CoGetMalloc
#define QzTaskMemAlloc          CoTaskMemAlloc
#define QzTaskMemRealloc        CoTaskMemRealloc
#define QzTaskMemFree           CoTaskMemFree
#define QzCreateFilterObject    CoCreateInstance
#define QzCLSIDFromString       CLSIDFromString
#define QzStringFromGUID2       StringFromGUID2
#endif


