/*+@@file@@----------------------------------------------------------------*//*!
 \file		KsGuid.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 17:14:09 2016
 \date		Modified on Sun Jun 19 17:14:09 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#if __POCC__ >= 500
#pragma once
#endif

#define INITGUID
#include <guiddef.h>
#if defined( DEFINE_GUIDEX )
    #undef DEFINE_GUIDEX
#endif
#define DEFINE_GUIDEX(name) extern const CDECL GUID __declspec(selectany) name = { STATICGUIDOF(name) }
#ifndef STATICGUIDOF
    #define STATICGUIDOF(guid) STATIC_##guid
#endif
#if !defined( DEFINE_WAVEFORMATEX_GUID )
#define DEFINE_WAVEFORMATEX_GUID(x) (USHORT)(x), 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71
#endif


