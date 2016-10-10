/*+@@file@@----------------------------------------------------------------*//*!
 \file		FwCommon.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 21:15:30 2016
 \date		Modified on Sun Jul 10 21:15:30 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _FW_COMMON_H_
#define _FW_COMMON_H_
#define FRAMEWORK_ALLOW_DEPRECATED 0
#if __POCC__ >= 500
#pragma once
#endif
#include "windows.h"
#undef GetObject
#include <wbemidl.h>
#include <wmiutils.h>
#ifndef USE_POLARITY
#define USE_POLARITY
#endif
#define atoi64 _atoi64
#include <Polarity.h>
#ifndef EXPORT_LOCKIT
#undef _CRTIMP
#define _CRTIMP
//#include <yvals.h>
#include <crtdef.h>
#undef _CRTIMP
#else
#undef _CRTIMP
#define _CRTIMP POLARITY
#include <yvals.h>
#undef _CRTIMP
#endif
#include <stllock.h>
//extern POLARITY CCritSec g_cs;
#include "utillib.h"
#include "ThrdBase.h"
#include "RefPtrCo.h"
#include "MethodCo.h"
#include "FRQuery.h"
#include "wbemglue.h"
#include "instance.h"
#if 0
class CFramework_Exception
{
private
	CHString m_sErrorText;
    HRESULT m_hr;
public
	CFramework_Exception ( LPCWSTR lpwszErrorText, HRESULT hr) : m_hr ( hr ) , m_sErrorText ( lpwszErrorText) {}
	CFramework_Exception ( LPCWSTR lpwszErrorText) : m_hr ( WBEM_S_NO_ERROR ) , m_sErrorText ( lpwszErrorText) {}
	~CFramework_Exception () {}
	HRESULT GetHRESULT() { return m_hr ; }
	CHString &GetErrorText() { return m_sErrorText; }
} ;
#endif
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
