/*+@@file@@----------------------------------------------------------------*//*!
 \file		WcnApi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 18:37:07 2016
 \date		Modified on Sun Sep  4 18:37:07 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _wcnapi_h_
#define _wcnapi_h_
#if __POCC__ >= 500
#pragma once
#endif
#if !defined(NTDDI_VERSION) || NTDDI_VERSION < NTDDI_WIN7
#  error WcnApi.h is only available when targeting Windows 7 and higher
#endif
#include <WcnTypes.h>
#include <WcnDevice.h>
#ifndef NO_WCN_PKEYS
#  include <WcnFunctionDiscoveryKeys.h>
#endif
#endif



