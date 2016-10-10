/*+@@file@@----------------------------------------------------------------*//*!
 \file		WabMem.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 00:00:01 2016
 \date		Modified on Mon Sep 19 00:00:01 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if !defined(WABMEM_H)
#define WABMEM_H
#if __POCC__ >= 500
#pragma once
#endif
#if !defined(MAPIX_H)
typedef SCODE(STDMETHODCALLTYPE MAPIALLOCATEBUFFER) (ULONG cbSize, LPVOID FAR *lppBuffer);
typedef SCODE(STDMETHODCALLTYPE MAPIALLOCATEMORE) (ULONG cbSize, LPVOID lpObject, LPVOID FAR *lppBuffer);
typedef ULONG(STDAPICALLTYPE MAPIFREEBUFFER) (LPVOID lpBuffer);
typedef MAPIALLOCATEBUFFER FAR *LPMAPIALLOCATEBUFFER;
typedef MAPIALLOCATEMORE FAR *LPMAPIALLOCATEMORE;
typedef MAPIFREEBUFFER FAR *LPMAPIFREEBUFFER;
#endif
typedef SCODE(STDMETHODCALLTYPE WABALLOCATEBUFFER) (LPWABOBJECT lpWABObject, ULONG cbSize, LPVOID FAR *lppBuffer);
typedef SCODE(STDMETHODCALLTYPE WABALLOCATEMORE) (LPWABOBJECT lpWABObject, ULONG cbSize, LPVOID lpObject, LPVOID FAR *lppBuffer);
typedef ULONG(STDAPICALLTYPE WABFREEBUFFER) (LPWABOBJECT lpWABObject, LPVOID lpBuffer);
typedef WABALLOCATEBUFFER FAR *LPWABALLOCATEBUFFER;
typedef WABALLOCATEMORE FAR *LPWABALLOCATEMORE;
typedef WABFREEBUFFER FAR *LPWABFREEBUFFER;
#endif
