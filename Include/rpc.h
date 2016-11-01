/*+@@file@@----------------------------------------------------------------*//*!
 \file		rpc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 01:29:59 2016
 \date		Modified on Mon Jun 27 01:29:59 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if !defined( RPC_NO_WINDOWS_H ) && !defined(_KRPCENV_)
#ifndef _INC_WINDOWS
#include <windows.h>
#endif
#endif
#ifndef __RPC_H__
#define __RPC_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <basetsd.h>
#if defined(_M_IA64) || defined(_M_AMD64)
#define __RPC_WIN64__
#else
#define __RPC_WIN32__
#endif
#if defined(__RPC_WIN64__)
#include <pshpack8.h>
#endif
typedef void *I_RPC_HANDLE;
typedef long RPC_STATUS;
#if defined(__RPC_WIN32__) || defined(__RPC_WIN64__)
#define RPC_UNICODE_SUPPORTED
#endif
#if ( (__POCC__ >= 260) || defined(_STDCALL_SUPPORTED) )
#	define __RPC_API  __stdcall
#	define __RPC_USER __stdcall
#	define __RPC_STUB __stdcall
#	define  RPC_ENTRY __stdcall
#else
#	define __RPC_API
#	define __RPC_USER
#	define __RPC_STUB
#	define RPC_ENTRY
#endif
#define __RPC_FAR
#if !defined(DECLSPEC_IMPORT)
#if (defined(_M_MRX000) || defined(_M_IX86) || defined(_M_IA64) || defined(_M_AMD64))
#define DECLSPEC_IMPORT __declspec(dllimport)
#else
#define DECLSPEC_IMPORT
#endif
#endif
#if !defined(_RPCRT4_) && !defined(_KRPCENV_)
#define RPCRTAPI DECLSPEC_IMPORT
#else
#define RPCRTAPI
#endif
#if !defined(_RPCNS4_)
#define RPCNSAPI DECLSPEC_IMPORT
#else
#define RPCNSAPI
#endif
#ifdef __RPC_MAC__
#include <setjmp.h>
#define RPCXCWORD (sizeof(jmp_buf)/sizeof(int))
#include <rpcdce.h>
#include <rpcnsi.h>
#include <rpcerr.h>
#include <rpcmac.h>
typedef void (RPC_ENTRY * MACYIELDCALLBACK) (short *);
RPC_STATUS RPC_ENTRY RpcMacSetYieldInfo(MACYIELDCALLBACK pfnCallback);
#if !defined(UNALIGNED)
#define UNALIGNED
#endif
#include <poppack.h>
#else
#include <rpcdce.h>
#if !defined(_KRPCENV_)
#include <rpcnsi.h>
#endif
#include <rpcnterr.h>
#include <excpt.h>
#if !defined(_KRPCENV_)
#include <winerror.h>
#endif
#define RpcTryExcept \
    __try \
        {
#define RpcExcept(expr) \
        } \
    __except (expr) \
        {
#define RpcEndExcept \
        }
#define RpcTryFinally \
    __try \
        {
#define RpcFinally \
        } \
    __finally \
        {
#define RpcEndFinally \
        }
#define RpcExceptionCode() GetExceptionCode()
#define RpcAbnormalTermination() AbnormalTermination()
#endif
#if ((!defined( RPC_NO_WINDOWS_H ) || defined(RPC_NEED_RPCASYNC_H)) && !defined(__RPC_MAC__)) || defined(_KRPCENV_)
#include <rpcasync.h>
#endif
#if defined(__RPC_WIN64__)
#include <poppack.h>
#endif

#endif
