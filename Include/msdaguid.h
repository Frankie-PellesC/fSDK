/*+@@file@@----------------------------------------------------------------*//*!
 \file		msdaguid.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 18:50:58 2016
 \date		Modified on Sun Aug 14 18:50:58 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef MSDAGUID
#define MSDAGUID
#if __POCC__ >= 500
#pragma once
#endif
#undef OLEDBDECLSPEC
#if __POCC__ >= 1100
#define OLEDBDECLSPEC __declspec(selectany)
#else
#define OLEDBDECLSPEC 
#endif
#ifdef DBINITCONSTANTS
extern const OLEDBDECLSPEC GUID CLSID_OLEDB_ENUMERATOR = {0xc8b522d0L,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID CLSID_EXTENDEDERRORINFO = {0xc8b522cfL,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID CLSID_MSDAVTM = {0x0c733a8eL,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID CLSID_OLEDB_CONVERSIONLIBRARY= {0xc8b522d1L,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID CLSID_OLEDB_ROWPOSITIONLIBRARY= {0x2048eee6l,0x7fa2,0x11d0,{0x9e,0x6a,0x00,0xa0,0xc9,0x13,0x8c,0x29}};
extern const OLEDBDECLSPEC GUID OLEDB_SVC_DSLPropertyPages = {0x51740c02,0x7e8e,0x11d2,{0xa0,0x2d,0x00,0xc0,0x4f,0xa3,0x73,0x48}};
#else
extern const GUID CLSID_OLEDB_ENUMERATOR;
extern const GUID CLSID_EXTENDEDERRORINFO;
extern const GUID CLSID_MSDAVTM;
extern const GUID CLSID_OLEDB_CONVERSIONLIBRARY;
extern const GUID CLSID_OLEDB_ROWPOSITIONLIBRARY;
extern const GUID OLEDB_SVC_DSLPropertyPages;
#endif
#endif
