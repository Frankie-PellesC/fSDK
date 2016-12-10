/*+@@file@@----------------------------------------------------------------*//*!
 \file		IdentityCommon.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 20:11:13 2016
 \date		Modified on Sat Jul 16 20:11:13 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __identitycommon_h__
#define __identitycommon_h__
#if __POCC__ >= 500
#pragma once
#endif
#include <oaidl.h>
#include <ocidl.h>
typedef enum _IdentityType
{
	IDENTITIES_ALL	= 0,
	IDENTITIES_ME_ONLY	= 0x1
} IDENTITY_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_identitycommon_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_identitycommon_0000_0000_v0_0_s_ifspec;
#endif
