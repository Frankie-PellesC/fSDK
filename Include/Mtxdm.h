/*+@@file@@----------------------------------------------------------------*//*!
 \file		Mtxdm.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 21:59:57 2016
 \date		Modified on Sun Sep 11 21:59:57 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __MTXDM_H__
#define __MTXDM_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <comsvcs.h>
__declspec(dllimport) HRESULT __cdecl GetDispenserManager(IDispenserManager**);
#endif
