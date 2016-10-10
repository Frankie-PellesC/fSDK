/*+@@file@@----------------------------------------------------------------*//*!
 \file		dpx.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Wed Jul  6 14:12:02 2016
 \date		Modified on Wed Jul  6 14:12:02 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __dpx_h__
#define __dpx_h__
#if __POCC__ >= 500
#pragma once
#endif
#include <dpx1.h>
extern HRESULT WINAPI DpxNewJob( LPCWSTR TargetPath, IDpxJob ** ppJob );
extern HRESULT WINAPI DpxRestoreJob( LPCWSTR TargetPath, IDpxJob ** ppJob );
extern VOID    WINAPI DpxFreeMemory( void* Allocation );
#endif
