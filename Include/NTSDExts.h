/*+@@file@@----------------------------------------------------------------*//*!
 \file		NTSDExts.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 23:29:23 2016
 \date		Modified on Sun Sep 11 23:29:23 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _NTSDEXTNS_
#define _NTSDEXTNS_
#if __POCC__ >= 500
#pragma once
#endif
typedef VOID(__cdecl *PNTSD_OUTPUT_ROUTINE) (char *, ...);
typedef ULONG_PTR(*PNTSD_GET_EXPRESSION) (char *);
typedef VOID(*PNTSD_GET_SYMBOL) (ULONG_PTR offset, PUCHAR pchBuffer, ULONG_PTR *pDisplacement);
typedef DWORD(*PNTSD_DISASM) (ULONG_PTR *lpOffset, LPSTR lpBuffer, ULONG fShowEfeectiveAddress);
typedef BOOL(*PNTSD_CHECK_CONTROL_C) (VOID);
typedef struct _NTSD_EXTENSION_APIS
{
    DWORD nSize;
    PNTSD_OUTPUT_ROUTINE lpOutputRoutine;
    PNTSD_GET_EXPRESSION lpGetExpressionRoutine;
    PNTSD_GET_SYMBOL lpGetSymbolRoutine;
    PNTSD_DISASM lpDisasmRoutine;
    PNTSD_CHECK_CONTROL_C lpCheckControlCRoutine;
} NTSD_EXTENSION_APIS, *PNTSD_EXTENSION_APIS;
typedef VOID(*PNTSD_EXTENSION_ROUTINE) (HANDLE hCurrentProcess, HANDLE hCurrentThread, DWORD dwCurrentPc, PNTSD_EXTENSION_APIS lpExtensionApis, LPSTR lpArgumentString);
#endif
