/*+@@file@@----------------------------------------------------------------*//*!
 \file		InetSDK.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 23:44:41 2016
 \date		Modified on Sat Jul 16 23:44:41 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __inetsdk_h__
#define __inetsdk_h__
#if __POCC__ >= 500
#pragma once
#endif
#include "comcat.h"
#include "ocidl.h"
#include "docobj.h"
#include "hlink.h"
#pragma comment(lib,"uuid.lib")
extern RPC_IF_HANDLE __MIDL_itf_inetsdk_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inetsdk_0000_0000_v0_0_s_ifspec;
#endif
