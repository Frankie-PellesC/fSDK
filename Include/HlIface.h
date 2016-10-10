/*+@@file@@----------------------------------------------------------------*//*!
 \file		HlIface.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul 11 18:47:20 2016
 \date		Modified on Mon Jul 11 18:47:20 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __hliface_h__
#define __hliface_h__
#if __POCC__ >= 500
#pragma once
#endif
#pragma comment(lib,"uuid.lib")
#ifndef __hlink_h__
#include "hlink.h"
#endif
extern RPC_IF_HANDLE __MIDL_itf_hliface_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hliface_0000_0000_v0_0_s_ifspec;
#endif
