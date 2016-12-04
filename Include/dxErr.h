/*+@@file@@----------------------------------------------------------------*//*!
 \file		dxErr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Nov 28 00:01:52 2016
 \date		Modified on Mon Nov 28 00:01:52 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _DXERR_H_
#define _DXERR_H_
#if __POCC__ >= 500
#pragma once
#endif
const char*  WINAPI DXGetErrorStringA(HRESULT hr);
const WCHAR* WINAPI DXGetErrorStringW(HRESULT hr);
#ifdef UNICODE
#define DXGetErrorString DXGetErrorStringW
#else
#define DXGetErrorString DXGetErrorStringA
#endif
const char*  WINAPI DXGetErrorDescriptionA(HRESULT hr);
const WCHAR* WINAPI DXGetErrorDescriptionW(HRESULT hr);
#ifdef UNICODE
#define DXGetErrorDescription DXGetErrorDescriptionW
#else
#define DXGetErrorDescription DXGetErrorDescriptionA
#endif
HRESULT WINAPI DXTraceA( const char* strFile, DWORD dwLine, HRESULT hr, const char* strMsg, BOOL bPopMsgBox );
HRESULT WINAPI DXTraceW( const char* strFile, DWORD dwLine, HRESULT hr, const WCHAR* strMsg, BOOL bPopMsgBox );
#ifdef UNICODE
#define DXTrace DXTraceW
#else
#define DXTrace DXTraceA
#endif
#if defined(DEBUG) | defined(_DEBUG)
#define DXTRACE_MSG(str)              DXTrace( __FILE__, (DWORD)__LINE__, 0, str, FALSE )
#define DXTRACE_ERR(str,hr)           DXTrace( __FILE__, (DWORD)__LINE__, hr, str, FALSE )
#define DXTRACE_ERR_MSGBOX(str,hr)    DXTrace( __FILE__, (DWORD)__LINE__, hr, str, TRUE )
#else
#define DXTRACE_MSG(str)              (0L)
#define DXTRACE_ERR(str,hr)           (hr)
#define DXTRACE_ERR_MSGBOX(str,hr)    (hr)
#endif
#endif
