/*+@@file@@----------------------------------------------------------------*//*!
 \file		rpcnsip.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 11:11:10 2016
 \date		Modified on Mon Jun 27 11:11:10 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __RPCNSIP_H__
#define __RPCNSIP_H__
#if __POCC__ >= 500
#pragma once
#endif
typedef struct
{
	RPC_NS_HANDLE LookupContext;
	RPC_BINDING_HANDLE ProposedHandle;
	RPC_BINDING_VECTOR *Bindings;
} RPC_IMPORT_CONTEXT_P, *PRPC_IMPORT_CONTEXT_P;
RPCNSAPI RPC_STATUS RPC_ENTRY I_RpcNsGetBuffer(PRPC_MESSAGE Message);
RPCNSAPI RPC_STATUS RPC_ENTRY I_RpcNsSendReceive(PRPC_MESSAGE Message, RPC_BINDING_HANDLE __RPC_FAR *Handle);
RPCNSAPI void RPC_ENTRY I_RpcNsRaiseException(PRPC_MESSAGE Message, RPC_STATUS Status);
RPCNSAPI RPC_STATUS RPC_ENTRY I_RpcReBindBuffer(PRPC_MESSAGE Message);
RPCNSAPI RPC_STATUS RPC_ENTRY I_NsServerBindSearch(void);
RPCNSAPI RPC_STATUS RPC_ENTRY I_NsClientBindSearch(void);
RPCNSAPI void RPC_ENTRY I_NsClientBindDone(void);
#endif
