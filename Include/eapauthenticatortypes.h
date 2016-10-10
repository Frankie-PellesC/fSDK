/*+@@file@@----------------------------------------------------------------*//*!
 \file		eapauthenticatortypes.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  8 17:06:18 2016
 \date		Modified on Fri Jul  8 17:06:18 2016
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
#ifndef __eapauthenticatortypes_h__
#define __eapauthenticatortypes_h__
#if __POCC__ >= 500
#pragma once
#endif
typedef enum _EAP_AUTHENTICATOR_SEND_TIMEOUT
{
	EAP_AUTHENTICATOR_SEND_TIMEOUT_NONE	= 0,
	EAP_AUTHENTICATOR_SEND_TIMEOUT_BASIC	= ( EAP_AUTHENTICATOR_SEND_TIMEOUT_NONE + 1 ) ,
	EAP_AUTHENTICATOR_SEND_TIMEOUT_INTERACTIVE	= ( EAP_AUTHENTICATOR_SEND_TIMEOUT_BASIC + 1 ) 
} 	EAP_AUTHENTICATOR_SEND_TIMEOUT;
extern RPC_IF_HANDLE __MIDL_itf_eapauthenticatortypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_eapauthenticatortypes_0000_0000_v0_0_s_ifspec;
#endif
