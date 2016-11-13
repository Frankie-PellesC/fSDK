/*+@@file@@----------------------------------------------------------------*//*!
 \file		CertPol.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 01:10:54 2016
 \date		Modified on Sun Jul  3 01:10:54 2016
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
#ifndef __certpol_h__
#define __certpol_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICertPolicy_FWD_DEFINED__
#define __ICertPolicy_FWD_DEFINED__
typedef interface ICertPolicy ICertPolicy;
#endif
#ifndef __ICertPolicy2_FWD_DEFINED__
#define __ICertPolicy2_FWD_DEFINED__
typedef interface ICertPolicy2 ICertPolicy2;
#endif
#include <wtypes.h>
#include <certmod.h>
#ifndef __ICertPolicy_INTERFACE_DEFINED__
#define __ICertPolicy_INTERFACE_DEFINED__
extern const IID IID_ICertPolicy;
typedef struct ICertPolicyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertPolicy * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertPolicy * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertPolicy * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertPolicy * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertPolicy * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertPolicy * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertPolicy * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertPolicy * This, const BSTR strConfig);
	HRESULT(STDMETHODCALLTYPE * VerifyRequest) (ICertPolicy * This, const BSTR strConfig, LONG Context, LONG bNewRequest, LONG Flags, LONG * pDisposition);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (ICertPolicy * This, BSTR * pstrDescription);
	HRESULT(STDMETHODCALLTYPE * ShutDown) (ICertPolicy * This);
	END_INTERFACE
}  ICertPolicyVtbl;
interface ICertPolicy
{
	CONST_VTBL struct ICertPolicyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertPolicy_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertPolicy_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertPolicy_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertPolicy_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertPolicy_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertPolicy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertPolicy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertPolicy_Initialize(This,strConfig)( (This)->lpVtbl -> Initialize(This,strConfig) )
#define ICertPolicy_VerifyRequest(This,strConfig,Context,bNewRequest,Flags,pDisposition)( (This)->lpVtbl -> VerifyRequest(This,strConfig,Context,bNewRequest,Flags,pDisposition) )
#define ICertPolicy_GetDescription(This,pstrDescription)( (This)->lpVtbl -> GetDescription(This,pstrDescription) )
#define ICertPolicy_ShutDown(This)( (This)->lpVtbl -> ShutDown(This) )
#endif
#endif
#ifndef __ICertPolicy2_INTERFACE_DEFINED__
#define __ICertPolicy2_INTERFACE_DEFINED__
extern const IID IID_ICertPolicy2;
typedef struct ICertPolicy2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertPolicy2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertPolicy2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertPolicy2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertPolicy2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertPolicy2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertPolicy2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertPolicy2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertPolicy2 * This, const BSTR strConfig);
	HRESULT(STDMETHODCALLTYPE * VerifyRequest) (ICertPolicy2 * This, const BSTR strConfig, LONG Context, LONG bNewRequest, LONG Flags, LONG * pDisposition);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (ICertPolicy2 * This, BSTR * pstrDescription);
	HRESULT(STDMETHODCALLTYPE * ShutDown) (ICertPolicy2 * This);
	HRESULT(STDMETHODCALLTYPE * GetManageModule) (ICertPolicy2 * This, ICertManageModule ** ppManageModule);
	END_INTERFACE
}  ICertPolicy2Vtbl;
interface ICertPolicy2
{
	CONST_VTBL struct ICertPolicy2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertPolicy2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertPolicy2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertPolicy2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertPolicy2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertPolicy2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertPolicy2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertPolicy2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertPolicy2_Initialize(This,strConfig)( (This)->lpVtbl -> Initialize(This,strConfig) )
#define ICertPolicy2_VerifyRequest(This,strConfig,Context,bNewRequest,Flags,pDisposition)( (This)->lpVtbl -> VerifyRequest(This,strConfig,Context,bNewRequest,Flags,pDisposition) )
#define ICertPolicy2_GetDescription(This,pstrDescription)( (This)->lpVtbl -> GetDescription(This,pstrDescription) )
#define ICertPolicy2_ShutDown(This)( (This)->lpVtbl -> ShutDown(This) )
#define ICertPolicy2_GetManageModule(This,ppManageModule)( (This)->lpVtbl -> GetManageModule(This,ppManageModule) )
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
