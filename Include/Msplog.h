/*+@@file@@----------------------------------------------------------------*//*!
 \file		Msplog.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 22:37:00 2016
 \date		Modified on Sun Aug 14 22:37:00 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MSPLOG_H_
#define _MSPLOG_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifdef MSPLOG
#include <rtutils.h>
#define MSP_ERROR ((DWORD)0x00010000 | TRACE_USE_MASK)
#define MSP_WARN  ((DWORD)0x00020000 | TRACE_USE_MASK)
#define MSP_INFO  ((DWORD)0x00040000 | TRACE_USE_MASK)
#define MSP_TRACE ((DWORD)0x00080000 | TRACE_USE_MASK)
#define MSP_EVENT ((DWORD)0x00100000 | TRACE_USE_MASK)
BOOL NTAPI MSPLogRegister(LPCTSTR szName);
void NTAPI MSPLogDeRegister();
void NTAPI LogPrint(DWORD dwDbgLevel, LPCSTR DbgMessage, ...);
#define MSPLOGREGISTER(arg) MSPLogRegister(arg)
#define MSPLOGDEREGISTER() MSPLogDeRegister()
extern BOOL g_bMSPBaseTracingOn;
#define LOG(arg) g_bMSPBaseTracingOn?LogPrint arg:0
#else
#define MSPLOGREGISTER(arg)
#define MSPLOGDEREGISTER() 
#define LOG(arg)
#endif
#define DECLARE_LOG_ADDREF_RELEASE(x)
#define CMSPComObject CComObject
#endif
