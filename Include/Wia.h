/*+@@file@@----------------------------------------------------------------*//*!
 \file		Wia.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 01:58:39 2016
 \date		Modified on Mon Sep 19 01:58:39 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#if __POCC__ >= 500
#pragma once
#endif
#if (_WIN32_WINNT >= 0x0600)
#include <wia_lh.h>
#elif (_WIN32_WINNT >= 0x0501)
#include <wia_xp.h>
#endif
