/*+@@file@@----------------------------------------------------------------*//*!
 \file		wpc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 16:48:04 2016
 \date		Modified on Mon Sep 19 16:48:04 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#include <WpcApi.h>
#include <WpcEvent.h>
#ifndef E_FILE_NOT_FOUND
#define E_FILE_NOT_FOUND  MAKE_SCODE(SEVERITY_ERROR, FACILITY_WIN32, ERROR_FILE_NOT_FOUND)
#endif
#define FACILITY_WPC    0x999   
#define WPCERR(n) MAKE_SCODE(SEVERITY_ERROR, FACILITY_WPC, n)
