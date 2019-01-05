/*+@@file@@----------------------------------------------------------------*//*!
 \file		windows.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
            30/12/2018 Updated with support for  POCC V.9.00
            04.01.2019 Moved __FSDK__ definition to specific file.
 \par  Status: 
            Beta release
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 26 15:58:44 2016
 \date		Modified on Fri Jan  4 16:54:15 2019
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WINDOWS_
#define _WINDOWS_
#include <sdkddkver.h>
#ifndef _INC_WINDOWS
#define _INC_WINDOWS
#if __POCC__ >= 500
#pragma once
#include <fsdk.h>
#endif
#if defined(RC_INVOKED) && !defined(NOWINRES)
#include <winresrc.h>
#else
#if defined(RC_INVOKED)
#define NOATOM
#define NOGDI
#define NOGDICAPMASKS
#define NOMETAFILE
#define NOMINMAX
#define NOMSG
#define NOOPENFILE
#define NORASTEROPS
#define NOSCROLL
#define NOSOUND
#define NOSYSMETRICS
#define NOTEXTMETRIC
#define NOWH
#define NOCOMM
#define NOKANJI
#define NOCRYPT
#define NOMCX
#endif
#if !defined(_68K_) && !defined(_MPPC_) && !defined(_X86_) && !defined(_IA64_) && !defined(_AMD64_) && defined(_M_IX86)
#define _X86_
#endif
#if !defined(_68K_) && !defined(_MPPC_) && !defined(_X86_) && !defined(_IA64_) && !defined(_AMD64_) && defined(_M_AMD64)
#define _AMD64_
#endif
#if !defined(_68K_) && !defined(_MPPC_) && !defined(_X86_) && !defined(_IA64_) && !defined(_AMD64_) && defined(_M_M68K)
#pragma error "68K CPU not supported!")
#endif
#if !defined(_68K_) && !defined(_MPPC_) && !defined(_X86_) && !defined(_IA64_) && !defined(_AMD64_) && defined(_M_MPPC)
#pragma error "MPPC CPU not supported!")
#endif
#if !defined(_68K_) && !defined(_MPPC_) && !defined(_X86_) && !defined(_M_IX86) && !defined(_AMD64_) && defined(_M_IA64)
#if !defined(_IA64_)
#pragma error "IA64 CPU not supported!")
#endif
#endif
#ifndef RC_INVOKED
#include <excpt.h>
#include <stdarg.h>
#endif
#include <windef.h>
#include <winbase.h>
#include <wingdi.h>
#include <winuser.h>
#if defined(_WIN32NLS) || defined (__POCC__)	//Frankie: PllesC compatibility, include winnls.h anyway...
#include <winnls.h>
#endif
#include <wincon.h>
#include <winver.h>
#include <winreg.h>
#include <winnetwk.h>
#ifndef WIN32_LEAN_AND_MEAN
#include <cderr.h>
#include <dde.h>
#include <ddeml.h>
#include <dlgs.h>
#include <lzexpand.h>
#include <mmsystem.h>
#include <nb30.h>
#include <rpc.h>
#include <shellapi.h>
#include <winperf.h>
#include <winsock.h>
#ifndef NOCRYPT
#include <wincrypt.h>
#include <winefs.h>
#include <winscard.h>
#endif
#ifndef NOGDI
#include <winspool.h>
#ifdef INC_OLE1
#include <ole.h>
#else
#include <ole2.h>
#endif
#include <commdlg.h>
#endif
#endif
#include <stralign.h>
#ifdef INC_OLE2
#include <ole2.h>
#endif
#ifndef NOSERVICE
#include <winsvc.h>
#endif
#if(WINVER >= 0x0400)
#ifndef NOMCX
#include <mcx.h>
#endif
#ifndef NOIME
#include <imm.h>
#endif
#endif
#ifndef RC_INVOKED
#endif
#endif
#endif
#endif



