/*+@@file@@----------------------------------------------------------------*//*!
 \file		dxerr8.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Nov 28 00:37:31 2016
 \date		Modified on Mon Nov 28 00:37:31 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _DXERR8_H_
#define _DXERR8_H_
#if __POCC__ >= 500
#pragma once
#endif
const char*  WINAPI DXGetErrorString8A(HRESULT hr);
const WCHAR* WINAPI DXGetErrorString8W(HRESULT hr);
#ifdef UNICODE
#define DXGetErrorString8 DXGetErrorString8W
#else
#define DXGetErrorString8 DXGetErrorString8A
#endif
const char*  WINAPI DXGetErrorDescription8A(HRESULT hr);
const WCHAR* WINAPI DXGetErrorDescription8W(HRESULT hr);
#ifdef UNICODE
#define DXGetErrorDescription8 DXGetErrorDescription8W
#else
#define DXGetErrorDescription8 DXGetErrorDescription8A
#endif
HRESULT WINAPI DXTraceA( char* strFile, DWORD dwLine, HRESULT hr, char* strMsg, BOOL bPopMsgBox );
HRESULT WINAPI DXTraceW( char* strFile, DWORD dwLine, HRESULT hr, WCHAR* strMsg, BOOL bPopMsgBox );
#ifdef UNICODE
#define DXTrace DXTraceW
#else
#define DXTrace DXTraceA
#endif
#if defined(DEBUG) | defined(_DEBUG)
#define DXTRACE_MSG(str)              DXTrace( __FILE__, (DWORD)__LINE__, 0, str, FALSE )
#define DXTRACE_ERR(str,hr)           DXTrace( __FILE__, (DWORD)__LINE__, hr, str, TRUE )
#define DXTRACE_ERR_NOMSGBOX(str,hr)  DXTrace( __FILE__, (DWORD)__LINE__, hr, str, FALSE )
#else
#define DXTRACE_MSG(str)              (0L)
#define DXTRACE_ERR(str,hr)           (hr)
#define DXTRACE_ERR_NOMSGBOX(str,hr)  (hr)
#endif
#endif
