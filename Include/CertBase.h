/*+@@file@@----------------------------------------------------------------*//*!
 \file		CertBase.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 00:22:52 2016
 \date		Modified on Sun Jul  3 00:22:52 2016
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
#ifndef __certbase_h__
#define __certbase_h__
#if __POCC__ >= 500
#pragma once
#endif
#include "wtypes.h"

typedef struct _CERTTRANSBLOB
{
	unsigned long cb;
	BYTE *pb;
} 	CERTTRANSBLOB;
typedef struct _CERTVIEWRESTRICTION
{
	DWORD ColumnIndex;
	LONG SeekOperator;
	LONG SortOrder;
	BYTE *pbValue;
	DWORD cbValue;
} 	CERTVIEWRESTRICTION;
extern RPC_IF_HANDLE __MIDL_itf_certbase_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certbase_0000_0000_v0_0_s_ifspec;
#endif
