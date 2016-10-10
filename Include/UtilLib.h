/*+@@file@@----------------------------------------------------------------*//*!
 \file		UtilLib.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 22:06:37 2016
 \date		Modified on Sun Jul 10 22:06:37 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef UTILLIB_HEADERFILE_IS_INCLUDED
#define UTILLIB_HEADERFILE_IS_INCLUDED
#if __POCC__ >= 500
#pragma once
#endif
#include <ProvExce.h>
#include <GenLex.h>
#include <ObjPath.h> 
#include <OPathLex.h> 
#include <CHString.h>
#include <CHStrArr.h>
#include <CHPtrArr.h>
#include <Polarity.h>
#include <WbemTime.h>
#ifndef _DBG_ASSERT
  #ifdef DBG
    #define _DBG_ASSERT(X) { if (!(X)) { DebugBreak(); } }
  #else
    #define _DBG_ASSERT(X)
  #endif
#endif
#ifndef DoTraceHRFailureEmpty
#define DoTraceHRFailureEmpty(hr1, szTraceInfo, hr2)    ;
#endif
#endif
