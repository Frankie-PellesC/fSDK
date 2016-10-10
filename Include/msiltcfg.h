/*+@@file@@----------------------------------------------------------------*//*!
 \file		msiltcfg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 20:10:35 2016
 \date		Modified on Sun Aug 14 20:10:35 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MSILTCFG_H_
#define _MSILTCFG_H_
#if __POCC__ >= 500
#pragma once
#endif
UINT WINAPI ShutdownMsi(DWORD dwReserved);
UINT WINAPI RestartMsi(DWORD dwReserved);
#endif
