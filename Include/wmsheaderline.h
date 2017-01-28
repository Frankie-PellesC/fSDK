/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmsheaderline.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 16:13:27 2016
 \date		Modified on Mon Sep 19 16:13:27 2016
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
#ifndef __wmsheaderline_h__
#define __wmsheaderline_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSHeaderLine_FWD_DEFINED__
#define __IWMSHeaderLine_FWD_DEFINED__
typedef interface IWMSHeaderLine IWMSHeaderLine;
#endif
#include <objidl.h>
#if _MSC_VER > 1000
#pragma once
#endif
EXTERN_GUID(IID_IWMSHeaderLine, 0x093c1b22, 0x6bec, 0x4fe7, 0x9c, 0x0e, 0x7c, 0xbe, 0xff, 0x1c, 0x2b, 0x78);
extern RPC_IF_HANDLE __MIDL_itf_wmsheaderline_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsheaderline_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSHeaderLine_INTERFACE_DEFINED__
#define __IWMSHeaderLine_INTERFACE_DEFINED__
extern const IID IID_IWMSHeaderLine;
typedef struct IWMSHeaderLineVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSHeaderLine * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSHeaderLine * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSHeaderLine * This);
	HRESULT(STDMETHODCALLTYPE * GetValue) (IWMSHeaderLine * This, BSTR * pbstrValue);
	END_INTERFACE
}  IWMSHeaderLineVtbl;
interface IWMSHeaderLine
{
	CONST_VTBL struct IWMSHeaderLineVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSHeaderLine_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSHeaderLine_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSHeaderLine_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSHeaderLine_GetValue(This,pbstrValue) ( (This)->lpVtbl -> GetValue(This,pbstrValue) )
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
