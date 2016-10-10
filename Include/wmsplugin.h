/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmsplugin.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 16:23:48 2016
 \date		Modified on Mon Sep 19 16:23:48 2016
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
#ifndef __wmsplugin_h__
#define __wmsplugin_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSPlugin_FWD_DEFINED__
#define __IWMSPlugin_FWD_DEFINED__
typedef interface IWMSPlugin IWMSPlugin;
#endif
#include "oaidl.h"
#include "WMSNamedValues.h"
typedef DECLSPEC_UUID("56209C38-39FA-432a-8068-307B7BAE01B8")
enum WMS_PLUGIN_LOAD_TYPE
{
	WMS_PLUGIN_LOAD_TYPE_UNSPECIFIED = 0,
	WMS_PLUGIN_LOAD_TYPE_IN_PROC = 1,
	WMS_PLUGIN_LOAD_TYPE_OUT_OF_PROC = 2,
	WMS_NUM_PLUGIN_LOAD_TYPE = 3
} WMS_PLUGIN_LOAD_TYPE;
typedef DECLSPEC_UUID("56209C39-39FA-432a-8068-307B7BAE01B8")
enum WMS_PLUGIN_UNSUPPORTED_LOAD_TYPE
{
	WMS_PLUGIN_UNSUPPORTED_LOAD_TYPE_NONE = 0,
	WMS_PLUGIN_UNSUPPORTED_LOAD_TYPE_IN_PROC = 1,
	WMS_PLUGIN_UNSUPPORTED_LOAD_TYPE_OUT_OF_PROC = 2
} WMS_PLUGIN_UNSUPPORTED_LOAD_TYPE;
typedef DECLSPEC_UUID("8AC2B32C-A223-4134-8DCF-6673C95CE924")
enum WMS_PLUGIN_SUPPORT_TYPE
{
	WMS_PLUGIN_SUPPORT_IS_SUPPORTED = 0,
	WMS_PLUGIN_SUPPORT_REQUIRES_ADVANCED_SERVER = 1
} WMS_PLUGIN_SUPPORT_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_wmsplugin_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsplugin_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSPlugin_INTERFACE_DEFINED__
#define __IWMSPlugin_INTERFACE_DEFINED__
typedef DECLSPEC_UUID("3E52E0E2-72A7-11D2-BF2F-00805FBE84A6")
enum WMS_PLUGIN_STATUS
{
	WMS_PLUGIN_NONE = 0,
	WMS_PLUGIN_ERROR = 0x1,
	WMS_PLUGIN_LOADED = 0x2,
	WMS_PLUGIN_ENABLED = 0x4,
	WMS_PLUGIN_LOADED_IN_PROC = 0x8,
	WMS_PLUGIN_LOADED_OUT_OF_PROC = 0x10,
	WMS_PLUGIN_REMOVE_ON_SERVICE_RESTART = 0x20
} WMS_PLUGIN_STATUS;
extern const IID IID_IWMSPlugin;
typedef struct IWMSPluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSPlugin *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSPlugin *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSPlugin *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSPlugin *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSPlugin *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSPlugin *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSPlugin *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *put_Name) (IWMSPlugin *This, BSTR pVal);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IWMSPlugin *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Enabled) (IWMSPlugin *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_Enabled) (IWMSPlugin *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_CLSID) (IWMSPlugin *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CustomInterface) (IWMSPlugin *This, IDispatch **ppVal);
	HRESULT(STDMETHODCALLTYPE *get_Status) (IWMSPlugin *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_ErrorCode) (IWMSPlugin *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Properties) (IWMSPlugin *This, IWMSNamedValues **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Version) (IWMSPlugin *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_LoadType) (IWMSPlugin *This, WMS_PLUGIN_LOAD_TYPE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_LoadType) (IWMSPlugin *This, WMS_PLUGIN_LOAD_TYPE val);
	HRESULT(STDMETHODCALLTYPE *get_ErrorText) (IWMSPlugin *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_SelectionOrder) (IWMSPlugin *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_SelectionOrder) (IWMSPlugin *This, long lVal);
	HRESULT(STDMETHODCALLTYPE *get_SupportStatus) (IWMSPlugin *This, WMS_PLUGIN_SUPPORT_TYPE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_MonikerName) (IWMSPlugin *This, BSTR *pbstrVal);
	END_INTERFACE
}  IWMSPluginVtbl;
interface IWMSPlugin
{
	CONST_VTBL struct IWMSPluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPlugin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPlugin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPlugin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPlugin_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSPlugin_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSPlugin_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSPlugin_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSPlugin_put_Name(This,pVal) ( (This)->lpVtbl -> put_Name(This,pVal) )
#define IWMSPlugin_get_Name(This,pVal) ( (This)->lpVtbl -> get_Name(This,pVal) )
#define IWMSPlugin_get_Enabled(This,pVal) ( (This)->lpVtbl -> get_Enabled(This,pVal) )
#define IWMSPlugin_put_Enabled(This,newVal) ( (This)->lpVtbl -> put_Enabled(This,newVal) )
#define IWMSPlugin_get_CLSID(This,pVal) ( (This)->lpVtbl -> get_CLSID(This,pVal) )
#define IWMSPlugin_get_CustomInterface(This,ppVal) ( (This)->lpVtbl -> get_CustomInterface(This,ppVal) )
#define IWMSPlugin_get_Status(This,pVal) ( (This)->lpVtbl -> get_Status(This,pVal) )
#define IWMSPlugin_get_ErrorCode(This,pVal) ( (This)->lpVtbl -> get_ErrorCode(This,pVal) )
#define IWMSPlugin_get_Properties(This,pVal) ( (This)->lpVtbl -> get_Properties(This,pVal) )
#define IWMSPlugin_get_Version(This,pVal) ( (This)->lpVtbl -> get_Version(This,pVal) )
#define IWMSPlugin_get_LoadType(This,pVal) ( (This)->lpVtbl -> get_LoadType(This,pVal) )
#define IWMSPlugin_put_LoadType(This,val) ( (This)->lpVtbl -> put_LoadType(This,val) )
#define IWMSPlugin_get_ErrorText(This,pVal) ( (This)->lpVtbl -> get_ErrorText(This,pVal) )
#define IWMSPlugin_get_SelectionOrder(This,pVal) ( (This)->lpVtbl -> get_SelectionOrder(This,pVal) )
#define IWMSPlugin_put_SelectionOrder(This,lVal) ( (This)->lpVtbl -> put_SelectionOrder(This,lVal) )
#define IWMSPlugin_get_SupportStatus(This,pVal) ( (This)->lpVtbl -> get_SupportStatus(This,pVal) )
#define IWMSPlugin_get_MonikerName(This,pbstrVal) ( (This)->lpVtbl -> get_MonikerName(This,pbstrVal) )
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
