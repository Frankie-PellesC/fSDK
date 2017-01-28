/*+@@file@@----------------------------------------------------------------*//*!
 \file		tlbref.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 12:45:56 2016
 \date		Modified on Sat Sep 17 12:45:56 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif
#ifndef __tlbref_h__
#define __tlbref_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITypeLibResolver_FWD_DEFINED__
#define __ITypeLibResolver_FWD_DEFINED__
typedef interface ITypeLibResolver ITypeLibResolver;
#endif
#include <oaidl.h>
EXTERN_GUID(IID_ITypeLibResolver, 0x8F026EDB, 0x785E, 0x4470, 0xA8, 0xE1, 0xB4, 0xE8, 0x4E, 0x9D, 0x17, 0x79);
extern RPC_IF_HANDLE __MIDL_itf_tlbref_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tlbref_0000_0000_v0_0_s_ifspec;
#ifndef __ITypeLibResolver_INTERFACE_DEFINED__
#define __ITypeLibResolver_INTERFACE_DEFINED__
extern const IID IID_ITypeLibResolver;
typedef struct ITypeLibResolverVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITypeLibResolver * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITypeLibResolver * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITypeLibResolver * This);
	HRESULT(STDMETHODCALLTYPE * ResolveTypeLib) (ITypeLibResolver * This, BSTR bstrSimpleName, GUID tlbid, LCID lcid, USHORT wMajorVersion, USHORT wMinorVersion, SYSKIND syskind, BSTR * pbstrResolvedTlbName);
	END_INTERFACE
}  ITypeLibResolverVtbl;
interface ITypeLibResolver
{
	CONST_VTBL struct ITypeLibResolverVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITypeLibResolver_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITypeLibResolver_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITypeLibResolver_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITypeLibResolver_ResolveTypeLib(This,bstrSimpleName,tlbid,lcid,wMajorVersion,wMinorVersion,syskind,pbstrResolvedTlbName) ( (This)->lpVtbl -> ResolveTypeLib(This,bstrSimpleName,tlbid,lcid,wMajorVersion,wMinorVersion,syskind,pbstrResolvedTlbName) )
#endif
#endif
STDAPI LoadTypeLibWithResolver(LPCOLESTR szFile, REGKIND regkind, ITypeLibResolver *pTlbResolver, ITypeLib **pptlib);
STDAPI GetTypeLibInfo(LPWSTR szFile, GUID *pTypeLibID, LCID *pTypeLibLCID, SYSKIND *pTypeLibPlatform, USHORT *pTypeLibMajorVer, USHORT *pTypeLibMinorVer);
extern RPC_IF_HANDLE __MIDL_itf_tlbref_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tlbref_0000_0001_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
#endif
