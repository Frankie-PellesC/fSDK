/*+@@file@@----------------------------------------------------------------*//*!
 \file		rpcssl.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 19:51:32 2016
 \date		Modified on Fri Sep 16 19:51:32 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#ifdef RPC_UNICODE_SUPPORTED
#ifdef UNICODE
#define RpcCertGeneratePrincipalName RpcCertGeneratePrincipalNameW
#else
#define RpcCertGeneratePrincipalName RpcCertGeneratePrincipalNameA
#endif
RPCRTAPI RPC_STATUS RPC_ENTRY RpcCertGeneratePrincipalNameW(PCCERT_CONTEXT Context, DWORD Flags, RPC_WSTR *pBuffer);
RPCRTAPI RPC_STATUS RPC_ENTRY RpcCertGeneratePrincipalNameA(PCCERT_CONTEXT Context, DWORD Flags, RPC_CSTR *pBuffer);
#else
RPCRTAPI RPC_STATUS RPC_ENTRY RpcCertGeneratePrincipalName(PCCERT_CONTEXT Context, DWORD Flags, RPC_CSTR *pBuffer);
#endif
