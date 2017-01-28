/*+@@file@@----------------------------------------------------------------*//*!
 \file		WbemAds.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 18:38:32 2016
 \date		Modified on Sun Sep  4 18:38:32 2016
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
#ifndef __wbemads_h__
#define __wbemads_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMIExtension_FWD_DEFINED__
#define __IWMIExtension_FWD_DEFINED__
typedef interface IWMIExtension IWMIExtension;
#endif
#ifndef __WMIExtension_FWD_DEFINED__
#define __WMIExtension_FWD_DEFINED__
typedef struct WMIExtension WMIExtension;
#endif
#ifndef __IWMIExtension_FWD_DEFINED__
#define __IWMIExtension_FWD_DEFINED__
typedef interface IWMIExtension IWMIExtension;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <wbemdisp.h>
extern RPC_IF_HANDLE __MIDL_itf_wbemads_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemads_0000_0000_v0_0_s_ifspec;
#ifndef __WMIEXTENSIONLib_LIBRARY_DEFINED__
#define __WMIEXTENSIONLib_LIBRARY_DEFINED__
extern const IID LIBID_WMIEXTENSIONLib;
#ifndef __IWMIExtension_INTERFACE_DEFINED__
#define __IWMIExtension_INTERFACE_DEFINED__
extern const IID IID_IWMIExtension;
typedef struct IWMIExtensionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMIExtension * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMIExtension * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMIExtension * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMIExtension * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMIExtension * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMIExtension * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMIExtension * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_WMIObjectPath) (IWMIExtension * This, BSTR * strWMIObjectPath);
	HRESULT(STDMETHODCALLTYPE * GetWMIObject) (IWMIExtension * This, ISWbemObject ** objWMIObject);
	HRESULT(STDMETHODCALLTYPE * GetWMIServices) (IWMIExtension * This, ISWbemServices ** objWMIServices);
	END_INTERFACE
}  IWMIExtensionVtbl;
interface IWMIExtension
{
	CONST_VTBL struct IWMIExtensionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMIExtension_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMIExtension_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMIExtension_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMIExtension_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMIExtension_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMIExtension_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMIExtension_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMIExtension_get_WMIObjectPath(This,strWMIObjectPath) ( (This)->lpVtbl -> get_WMIObjectPath(This,strWMIObjectPath) )
#define IWMIExtension_GetWMIObject(This,objWMIObject) ( (This)->lpVtbl -> GetWMIObject(This,objWMIObject) )
#define IWMIExtension_GetWMIServices(This,objWMIServices) ( (This)->lpVtbl -> GetWMIServices(This,objWMIServices) )
#endif
#endif
extern const CLSID CLSID_WMIExtension;
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
