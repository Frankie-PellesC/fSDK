/*+@@file@@----------------------------------------------------------------*//*!
 \file		WMSNamedValues.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 16:11:25 2016
 \date		Modified on Mon Sep 19 16:11:25 2016
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
#ifndef __wmsnamedvalues_h__
#define __wmsnamedvalues_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSNamedValue_FWD_DEFINED__
#define __IWMSNamedValue_FWD_DEFINED__
typedef interface IWMSNamedValue IWMSNamedValue;
#endif
#ifndef __IWMSNamedValues_FWD_DEFINED__
#define __IWMSNamedValues_FWD_DEFINED__
typedef interface IWMSNamedValues IWMSNamedValues;
#endif
#ifndef __DWMSNamedValuesEvents_FWD_DEFINED__
#define __DWMSNamedValuesEvents_FWD_DEFINED__
typedef interface DWMSNamedValuesEvents DWMSNamedValuesEvents;
#endif
#include <oaidl.h>
#pragma once
extern RPC_IF_HANDLE __MIDL_itf_wmsnamedvalues_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsnamedvalues_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSNamedValue_INTERFACE_DEFINED__
#define __IWMSNamedValue_INTERFACE_DEFINED__
extern const IID IID_IWMSNamedValue;
typedef struct IWMSNamedValueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSNamedValue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSNamedValue * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSNamedValue * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMSNamedValue * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMSNamedValue * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMSNamedValue * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMSNamedValue * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IWMSNamedValue * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IWMSNamedValue * This, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Value) (IWMSNamedValue * This, VARIANT newVal);
	END_INTERFACE
}  IWMSNamedValueVtbl;
interface IWMSNamedValue
{
	CONST_VTBL struct IWMSNamedValueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSNamedValue_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSNamedValue_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSNamedValue_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSNamedValue_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSNamedValue_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSNamedValue_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSNamedValue_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSNamedValue_get_Name(This,pVal) ( (This)->lpVtbl -> get_Name(This,pVal) )
#define IWMSNamedValue_get_Value(This,pVal) ( (This)->lpVtbl -> get_Value(This,pVal) )
#define IWMSNamedValue_put_Value(This,newVal) ( (This)->lpVtbl -> put_Value(This,newVal) )
#endif
#endif
#ifndef __IWMSNamedValues_INTERFACE_DEFINED__
#define __IWMSNamedValues_INTERFACE_DEFINED__
extern const IID IID_IWMSNamedValues;
typedef struct IWMSNamedValuesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSNamedValues * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSNamedValues * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSNamedValues * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMSNamedValues * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMSNamedValues * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMSNamedValues * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMSNamedValues * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * put_Item) (IWMSNamedValues * This, const VARIANT varIndex, VARIANT varValue);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IWMSNamedValues * This, const VARIANT varIndex, IWMSNamedValue ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IWMSNamedValues * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_length) (IWMSNamedValues * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IWMSNamedValues * This, IUnknown ** pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (IWMSNamedValues * This, BSTR szName, VARIANT varValue, IWMSNamedValue ** pItem);
	HRESULT(STDMETHODCALLTYPE * Remove) (IWMSNamedValues * This, VARIANT varIndex);
	END_INTERFACE
}  IWMSNamedValuesVtbl;
interface IWMSNamedValues
{
	CONST_VTBL struct IWMSNamedValuesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSNamedValues_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSNamedValues_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSNamedValues_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSNamedValues_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSNamedValues_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSNamedValues_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSNamedValues_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSNamedValues_put_Item(This,varIndex,varValue) ( (This)->lpVtbl -> put_Item(This,varIndex,varValue) )
#define IWMSNamedValues_get_Item(This,varIndex,pVal) ( (This)->lpVtbl -> get_Item(This,varIndex,pVal) )
#define IWMSNamedValues_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#define IWMSNamedValues_get_length(This,pVal) ( (This)->lpVtbl -> get_length(This,pVal) )
#define IWMSNamedValues_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IWMSNamedValues_Add(This,szName,varValue,pItem) ( (This)->lpVtbl -> Add(This,szName,varValue,pItem) )
#define IWMSNamedValues_Remove(This,varIndex) ( (This)->lpVtbl -> Remove(This,varIndex) )
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
