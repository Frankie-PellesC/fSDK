/*+@@file@@----------------------------------------------------------------*//*!
 \file		aux_ulib.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 19:32:21 2016
 \date		Modified on Sat Jul  2 19:32:21 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _AUX_SHLD_LIB_H
#define _AUX_SHLD_LIB_H
#if __POCC__ >= 500
#pragma once
#endif
#include <windows.h>
BOOL WINAPI AuxUlibInitialize(VOID);
BOOL WINAPI AuxUlibSetSystemFileCacheSize(SIZE_T MinimumFileCacheSize, SIZE_T MaximumFileCacheSize, DWORD Flags);
BOOL WINAPI AuxUlibIsDLLSynchronizationHeld(PBOOL SynchronizationHeld);
#endif
