/*+@@file@@----------------------------------------------------------------*//*!
 \file		WMSProxy.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 01:38:47 2016
 \date		Modified on Sat Sep 17 01:38:47 2016
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
#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif
#ifndef __wmsproxy_h__
#define __wmsproxy_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSProxyContext_FWD_DEFINED__
#define __IWMSProxyContext_FWD_DEFINED__
typedef interface IWMSProxyContext IWMSProxyContext;
#endif
#include <objidl.h>
#include <wmscontext.h>
#if _MSC_VER > 1000
#pragma once
#endif
EXTERN_GUID(IID_IWMSProxyContext, 0x2E34AB85, 0x0D3D, 0x11d2, 0x9E, 0xEE, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
extern RPC_IF_HANDLE __MIDL_itf_wmsproxy_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsproxy_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSProxyContext_INTERFACE_DEFINED__
#define __IWMSProxyContext_INTERFACE_DEFINED__
extern const IID IID_IWMSProxyContext;
typedef struct IWMSProxyContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSProxyContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSProxyContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSProxyContext * This);
	HRESULT(STDMETHODCALLTYPE * FindProxyForURL) (IWMSProxyContext * This, IWMSContext * pUserContext, BSTR bstrUrl, BSTR * pbstrProxyServer, DWORD * pdwProxyPort);
	HRESULT(STDMETHODCALLTYPE * GetCredentials) (IWMSProxyContext * This, IWMSContext * pUserContext, BSTR bstrRealm, BSTR bstrUrl, BSTR * pbstrName, BSTR * pbstrPassword);
	END_INTERFACE
}  IWMSProxyContextVtbl;
interface IWMSProxyContext
{
	CONST_VTBL struct IWMSProxyContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSProxyContext_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSProxyContext_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSProxyContext_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSProxyContext_FindProxyForURL(This,pUserContext,bstrUrl,pbstrProxyServer,pdwProxyPort) ( (This)->lpVtbl -> FindProxyForURL(This,pUserContext,bstrUrl,pbstrProxyServer,pdwProxyPort) )
#define IWMSProxyContext_GetCredentials(This,pUserContext,bstrRealm,bstrUrl,pbstrName,pbstrPassword) ( (This)->lpVtbl -> GetCredentials(This,pUserContext,bstrRealm,bstrUrl,pbstrName,pbstrPassword) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif
