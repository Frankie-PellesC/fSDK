/*+@@file@@----------------------------------------------------------------*//*!
 \file		CertMod.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 01:08:35 2016
 \date		Modified on Sun Jul  3 01:08:35 2016
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
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __certmod_h__
#define __certmod_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICertManageModule_FWD_DEFINED__
#define __ICertManageModule_FWD_DEFINED__
typedef interface ICertManageModule ICertManageModule;
#endif
#include "wtypes.h"
#include "oaidl.h"
#define	CMM_REFRESHONLY	( 0x1 )
#define	CMM_READONLY	( 0x2 )
const WCHAR wszCMM_PROP_NAME[] = L"Name";
const WCHAR wszCMM_PROP_DESCRIPTION[] = L"Description";
const WCHAR wszCMM_PROP_COPYRIGHT[] = L"Copyright";
const WCHAR wszCMM_PROP_FILEVER[] = L"File Version";
const WCHAR wszCMM_PROP_PRODUCTVER[] = L"Product Version";
const WCHAR wszCMM_PROP_DISPLAY_HWND[] = L"HWND";
const WCHAR wszCMM_PROP_ISMULTITHREADED[] = L"IsMultiThreaded";
extern RPC_IF_HANDLE __MIDL_itf_certmod_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certmod_0000_0000_v0_0_s_ifspec;
#ifndef __ICertManageModule_INTERFACE_DEFINED__
#define __ICertManageModule_INTERFACE_DEFINED__
extern const IID IID_ICertManageModule;
typedef struct ICertManageModuleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertManageModule * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertManageModule * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertManageModule * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertManageModule * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertManageModule * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertManageModule * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertManageModule * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (ICertManageModule * This, const BSTR strConfig, BSTR strStorageLocation, BSTR strPropertyName, LONG Flags, VARIANT * pvarProperty);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (ICertManageModule * This, const BSTR strConfig, BSTR strStorageLocation, BSTR strPropertyName, LONG Flags, const VARIANT * pvarProperty);
	HRESULT(STDMETHODCALLTYPE * Configure) (ICertManageModule * This, const BSTR strConfig, BSTR strStorageLocation, LONG Flags);
	END_INTERFACE
}  ICertManageModuleVtbl;
interface ICertManageModule
{
	CONST_VTBL struct ICertManageModuleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertManageModule_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertManageModule_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertManageModule_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertManageModule_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertManageModule_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertManageModule_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertManageModule_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertManageModule_GetProperty(This,strConfig,strStorageLocation,strPropertyName,Flags,pvarProperty)( (This)->lpVtbl -> GetProperty(This,strConfig,strStorageLocation,strPropertyName,Flags,pvarProperty) )
#define ICertManageModule_SetProperty(This,strConfig,strStorageLocation,strPropertyName,Flags,pvarProperty)( (This)->lpVtbl -> SetProperty(This,strConfig,strStorageLocation,strPropertyName,Flags,pvarProperty) )
#define ICertManageModule_Configure(This,strConfig,strStorageLocation,Flags)( (This)->lpVtbl -> Configure(This,strConfig,strStorageLocation,Flags) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
