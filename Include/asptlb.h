/*+@@file@@----------------------------------------------------------------*//*!
 \file		asptlb.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 18:22:39 2016
 \date		Modified on Sat Jul  2 18:22:39 2016
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
#ifndef __asptlb_h__
#define __asptlb_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IStringList_FWD_DEFINED__
#define __IStringList_FWD_DEFINED__
typedef interface IStringList IStringList;
#endif
#ifndef __IRequestDictionary_FWD_DEFINED__
#define __IRequestDictionary_FWD_DEFINED__
typedef interface IRequestDictionary IRequestDictionary;
#endif
#ifndef __IRequest_FWD_DEFINED__
#define __IRequest_FWD_DEFINED__
typedef interface IRequest IRequest;
#endif
#ifndef __Request_FWD_DEFINED__
#define __Request_FWD_DEFINED__
typedef struct Request Request;
#endif
#ifndef __IReadCookie_FWD_DEFINED__
#define __IReadCookie_FWD_DEFINED__
typedef interface IReadCookie IReadCookie;
#endif
#ifndef __IWriteCookie_FWD_DEFINED__
#define __IWriteCookie_FWD_DEFINED__
typedef interface IWriteCookie IWriteCookie;
#endif
#ifndef __IResponse_FWD_DEFINED__
#define __IResponse_FWD_DEFINED__
typedef interface IResponse IResponse;
#endif
#ifndef __Response_FWD_DEFINED__
#define __Response_FWD_DEFINED__
typedef struct Response Response;
#endif
#ifndef __IVariantDictionary_FWD_DEFINED__
#define __IVariantDictionary_FWD_DEFINED__
typedef interface IVariantDictionary IVariantDictionary;
#endif
#ifndef __ISessionObject_FWD_DEFINED__
#define __ISessionObject_FWD_DEFINED__
typedef interface ISessionObject ISessionObject;
#endif
#ifndef __Session_FWD_DEFINED__
#define __Session_FWD_DEFINED__
typedef struct Session Session;
#endif
#ifndef __IApplicationObject_FWD_DEFINED__
#define __IApplicationObject_FWD_DEFINED__
typedef interface IApplicationObject IApplicationObject;
#endif
#ifndef __Application_FWD_DEFINED__
#define __Application_FWD_DEFINED__
typedef struct Application Application;
#endif
#ifndef __IASPError_FWD_DEFINED__
#define __IASPError_FWD_DEFINED__
typedef interface IASPError IASPError;
#endif
#ifndef __IServer_FWD_DEFINED__
#define __IServer_FWD_DEFINED__
typedef interface IServer IServer;
#endif
#ifndef __Server_FWD_DEFINED__
#define __Server_FWD_DEFINED__
typedef struct Server Server;
#endif
#ifndef __IScriptingContext_FWD_DEFINED__
#define __IScriptingContext_FWD_DEFINED__
typedef interface IScriptingContext IScriptingContext;
#endif
#ifndef __ScriptingContext_FWD_DEFINED__
#define __ScriptingContext_FWD_DEFINED__
typedef struct ScriptingContext ScriptingContext;
#endif
#ifndef __ASPTypeLibrary_LIBRARY_DEFINED__
#define __ASPTypeLibrary_LIBRARY_DEFINED__
DEFINE_GUID(LIBID_ASPTypeLibrary, 0xD97A6DA0, 0xA85C, 0x11cf, 0x83, 0xAE, 0x00, 0xA0, 0xC9, 0x0C, 0x2B, 0xD8);
#ifndef __IStringList_INTERFACE_DEFINED__
#define __IStringList_INTERFACE_DEFINED__
DEFINE_GUID(IID_IStringList, 0xD97A6DA0, 0xA85D, 0x11cf, 0x83, 0xAE, 0x00, 0xA0, 0xC9, 0x0C, 0x2B, 0xD8);
typedef struct IStringListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStringList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStringList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStringList * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IStringList * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IStringList * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IStringList * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IStringList * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IStringList * This, VARIANT i, VARIANT * pVariantReturn);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IStringList * This, int *cStrRet);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IStringList * This, IUnknown ** ppEnumReturn);
	END_INTERFACE
}  IStringListVtbl;
interface IStringList
{
	CONST_VTBL struct IStringListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStringList_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStringList_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IStringList_Release(This)( (This)->lpVtbl -> Release(This) )
#define IStringList_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IStringList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IStringList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IStringList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IStringList_get_Item(This,i,pVariantReturn)( (This)->lpVtbl -> get_Item(This,i,pVariantReturn) )
#define IStringList_get_Count(This,cStrRet)( (This)->lpVtbl -> get_Count(This,cStrRet) )
#define IStringList_get__NewEnum(This,ppEnumReturn)( (This)->lpVtbl -> get__NewEnum(This,ppEnumReturn) )
#endif
#endif
#ifndef __IRequestDictionary_INTERFACE_DEFINED__
#define __IRequestDictionary_INTERFACE_DEFINED__
DEFINE_GUID(IID_IRequestDictionary, 0xD97A6DA0, 0xA85F, 0x11df, 0x83, 0xAE, 0x00, 0xA0, 0xC9, 0x0C, 0x2B, 0xD8);
typedef struct IRequestDictionaryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRequestDictionary * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRequestDictionary * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRequestDictionary * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRequestDictionary * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRequestDictionary * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRequestDictionary * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRequestDictionary * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IRequestDictionary * This, VARIANT Var, VARIANT * pVariantReturn);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IRequestDictionary * This, IUnknown ** ppEnumReturn);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IRequestDictionary * This, int *cStrRet);
	HRESULT(STDMETHODCALLTYPE * get_Key) (IRequestDictionary * This, VARIANT VarKey, VARIANT * pvar);
	END_INTERFACE
}  IRequestDictionaryVtbl;
interface IRequestDictionary
{
	CONST_VTBL struct IRequestDictionaryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRequestDictionary_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRequestDictionary_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IRequestDictionary_Release(This)( (This)->lpVtbl -> Release(This) )
#define IRequestDictionary_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRequestDictionary_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRequestDictionary_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRequestDictionary_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRequestDictionary_get_Item(This,Var,pVariantReturn)( (This)->lpVtbl -> get_Item(This,Var,pVariantReturn) )
#define IRequestDictionary_get__NewEnum(This,ppEnumReturn)( (This)->lpVtbl -> get__NewEnum(This,ppEnumReturn) )
#define IRequestDictionary_get_Count(This,cStrRet)( (This)->lpVtbl -> get_Count(This,cStrRet) )
#define IRequestDictionary_get_Key(This,VarKey,pvar)( (This)->lpVtbl -> get_Key(This,VarKey,pvar) )
#endif
#endif
#ifndef __IRequest_INTERFACE_DEFINED__
#define __IRequest_INTERFACE_DEFINED__
DEFINE_GUID(IID_IRequest, 0xD97A6DA0, 0xA861, 0x11cf, 0x93, 0xAE, 0x00, 0xA0, 0xC9, 0x0C, 0x2B, 0xD8);
typedef struct IRequestVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRequest * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRequest * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRequest * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRequest * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRequest * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRequest * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRequest * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IRequest * This, BSTR bstrVar, IDispatch ** ppObjReturn);
	HRESULT(STDMETHODCALLTYPE * get_QueryString) (IRequest * This, IRequestDictionary ** ppDictReturn);
	HRESULT(STDMETHODCALLTYPE * get_Form) (IRequest * This, IRequestDictionary ** ppDictReturn);
	HRESULT(STDMETHODCALLTYPE * get_Body) (IRequest * This, IRequestDictionary ** ppDictReturn);
	HRESULT(STDMETHODCALLTYPE * get_ServerVariables) (IRequest * This, IRequestDictionary ** ppDictReturn);
	HRESULT(STDMETHODCALLTYPE * get_ClientCertificate) (IRequest * This, IRequestDictionary ** ppDictReturn);
	HRESULT(STDMETHODCALLTYPE * get_Cookies) (IRequest * This, IRequestDictionary ** ppDictReturn);
	HRESULT(STDMETHODCALLTYPE * get_TotalBytes) (IRequest * This, long *pcbTotal);
	HRESULT(STDMETHODCALLTYPE * BinaryRead) (IRequest * This, VARIANT * pvarCountToRead, VARIANT * pvarReturn);
	END_INTERFACE
}  IRequestVtbl;
interface IRequest
{
	CONST_VTBL struct IRequestVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRequest_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRequest_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IRequest_Release(This)( (This)->lpVtbl -> Release(This) )
#define IRequest_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IRequest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IRequest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IRequest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IRequest_get_Item(This,bstrVar,ppObjReturn)( (This)->lpVtbl -> get_Item(This,bstrVar,ppObjReturn) )
#define IRequest_get_QueryString(This,ppDictReturn)( (This)->lpVtbl -> get_QueryString(This,ppDictReturn) )
#define IRequest_get_Form(This,ppDictReturn)( (This)->lpVtbl -> get_Form(This,ppDictReturn) )
#define IRequest_get_Body(This,ppDictReturn)( (This)->lpVtbl -> get_Body(This,ppDictReturn) )
#define IRequest_get_ServerVariables(This,ppDictReturn)( (This)->lpVtbl -> get_ServerVariables(This,ppDictReturn) )
#define IRequest_get_ClientCertificate(This,ppDictReturn)( (This)->lpVtbl -> get_ClientCertificate(This,ppDictReturn) )
#define IRequest_get_Cookies(This,ppDictReturn)( (This)->lpVtbl -> get_Cookies(This,ppDictReturn) )
#define IRequest_get_TotalBytes(This,pcbTotal)( (This)->lpVtbl -> get_TotalBytes(This,pcbTotal) )
#define IRequest_BinaryRead(This,pvarCountToRead,pvarReturn)( (This)->lpVtbl -> BinaryRead(This,pvarCountToRead,pvarReturn) )
#endif
#endif
DEFINE_GUID(CLSID_Request, 0x920c25d0, 0x25d9, 0x11d0, 0xa5, 0x5f, 0x00, 0xa0, 0xc9, 0x0c, 0x20, 0x91);
#ifndef __IReadCookie_INTERFACE_DEFINED__
#define __IReadCookie_INTERFACE_DEFINED__
DEFINE_GUID(IID_IReadCookie, 0x71EAF260, 0x0CE0, 0x11D0, 0xA5, 0x3E, 0x00, 0xA0, 0xC9, 0x0C, 0x20, 0x91);
typedef struct IReadCookieVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IReadCookie * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IReadCookie * This);
	ULONG(STDMETHODCALLTYPE * Release) (IReadCookie * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IReadCookie * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IReadCookie * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IReadCookie * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IReadCookie * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IReadCookie * This, VARIANT Var, VARIANT * pVariantReturn);
	HRESULT(STDMETHODCALLTYPE * get_HasKeys) (IReadCookie * This, VARIANT_BOOL * pfHasKeys);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IReadCookie * This, IUnknown ** ppEnumReturn);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IReadCookie * This, int *cStrRet);
	HRESULT(STDMETHODCALLTYPE * get_Key) (IReadCookie * This, VARIANT VarKey, VARIANT * pvar);
	END_INTERFACE
}  IReadCookieVtbl;
interface IReadCookie
{
	CONST_VTBL struct IReadCookieVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IReadCookie_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IReadCookie_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IReadCookie_Release(This)( (This)->lpVtbl -> Release(This) )
#define IReadCookie_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IReadCookie_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IReadCookie_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IReadCookie_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IReadCookie_get_Item(This,Var,pVariantReturn)( (This)->lpVtbl -> get_Item(This,Var,pVariantReturn) )
#define IReadCookie_get_HasKeys(This,pfHasKeys)( (This)->lpVtbl -> get_HasKeys(This,pfHasKeys) )
#define IReadCookie_get__NewEnum(This,ppEnumReturn)( (This)->lpVtbl -> get__NewEnum(This,ppEnumReturn) )
#define IReadCookie_get_Count(This,cStrRet)( (This)->lpVtbl -> get_Count(This,cStrRet) )
#define IReadCookie_get_Key(This,VarKey,pvar)( (This)->lpVtbl -> get_Key(This,VarKey,pvar) )
#endif
#endif
#ifndef __IWriteCookie_INTERFACE_DEFINED__
#define __IWriteCookie_INTERFACE_DEFINED__
DEFINE_GUID(IID_IWriteCookie, 0xD97A6DA0, 0xA862, 0x11cf, 0x84, 0xAE, 0x00, 0xA0, 0xC9, 0x0C, 0x2B, 0xD8);
typedef struct IWriteCookieVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWriteCookie * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWriteCookie * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWriteCookie * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWriteCookie * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWriteCookie * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWriteCookie * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWriteCookie * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * put_Item) (IWriteCookie * This, VARIANT key, BSTR bstrValue);
	HRESULT(STDMETHODCALLTYPE * put_Expires) (IWriteCookie * This, DATE dtExpires);
	HRESULT(STDMETHODCALLTYPE * put_Domain) (IWriteCookie * This, BSTR bstrDomain);
	HRESULT(STDMETHODCALLTYPE * put_Path) (IWriteCookie * This, BSTR bstrPath);
	HRESULT(STDMETHODCALLTYPE * put_Secure) (IWriteCookie * This, VARIANT_BOOL fSecure);
	HRESULT(STDMETHODCALLTYPE * get_HasKeys) (IWriteCookie * This, VARIANT_BOOL * pfHasKeys);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IWriteCookie * This, IUnknown ** ppEnumReturn);
	END_INTERFACE
}  IWriteCookieVtbl;
interface IWriteCookie
{
	CONST_VTBL struct IWriteCookieVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWriteCookie_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWriteCookie_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWriteCookie_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWriteCookie_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWriteCookie_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWriteCookie_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWriteCookie_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWriteCookie_put_Item(This,key,bstrValue)( (This)->lpVtbl -> put_Item(This,key,bstrValue) )
#define IWriteCookie_put_Expires(This,dtExpires)( (This)->lpVtbl -> put_Expires(This,dtExpires) )
#define IWriteCookie_put_Domain(This,bstrDomain)( (This)->lpVtbl -> put_Domain(This,bstrDomain) )
#define IWriteCookie_put_Path(This,bstrPath)( (This)->lpVtbl -> put_Path(This,bstrPath) )
#define IWriteCookie_put_Secure(This,fSecure)( (This)->lpVtbl -> put_Secure(This,fSecure) )
#define IWriteCookie_get_HasKeys(This,pfHasKeys)( (This)->lpVtbl -> get_HasKeys(This,pfHasKeys) )
#define IWriteCookie_get__NewEnum(This,ppEnumReturn)( (This)->lpVtbl -> get__NewEnum(This,ppEnumReturn) )
#endif
#endif
#ifndef __IResponse_INTERFACE_DEFINED__
#define __IResponse_INTERFACE_DEFINED__
DEFINE_GUID(IID_IResponse, 0xD97A6DA0, 0xA864, 0x11cf, 0x83, 0xBE, 0x00, 0xA0, 0xC9, 0x0C, 0x2B, 0xD8);
typedef struct IResponseVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IResponse * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IResponse * This);
	ULONG(STDMETHODCALLTYPE * Release) (IResponse * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IResponse * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IResponse * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IResponse * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IResponse * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Buffer) (IResponse * This, VARIANT_BOOL * fIsBuffering);
	HRESULT(STDMETHODCALLTYPE * put_Buffer) (IResponse * This, VARIANT_BOOL fIsBuffering);
	HRESULT(STDMETHODCALLTYPE * get_ContentType) (IResponse * This, BSTR * pbstrContentTypeRet);
	HRESULT(STDMETHODCALLTYPE * put_ContentType) (IResponse * This, BSTR bstrContentType);
	HRESULT(STDMETHODCALLTYPE * get_Expires) (IResponse * This, VARIANT * pvarExpiresMinutesRet);
	HRESULT(STDMETHODCALLTYPE * put_Expires) (IResponse * This, long lExpiresMinutes);
	HRESULT(STDMETHODCALLTYPE * get_ExpiresAbsolute) (IResponse * This, VARIANT * pvarExpiresRet);
	HRESULT(STDMETHODCALLTYPE * put_ExpiresAbsolute) (IResponse * This, DATE dtExpires);
	HRESULT(STDMETHODCALLTYPE * get_Cookies) (IResponse * This, IRequestDictionary ** ppCookies);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IResponse * This, BSTR * pbstrStatusRet);
	HRESULT(STDMETHODCALLTYPE * put_Status) (IResponse * This, BSTR bstrStatus);
	HRESULT(STDMETHODCALLTYPE * Add) (IResponse * This, BSTR bstrHeaderValue, BSTR bstrHeaderName);
	HRESULT(STDMETHODCALLTYPE * AddHeader) (IResponse * This, BSTR bstrHeaderName, BSTR bstrHeaderValue);
	HRESULT(STDMETHODCALLTYPE * AppendToLog) (IResponse * This, BSTR bstrLogEntry);
	HRESULT(STDMETHODCALLTYPE * BinaryWrite) (IResponse * This, VARIANT varInput);
	HRESULT(STDMETHODCALLTYPE * Clear) (IResponse * This);
	HRESULT(STDMETHODCALLTYPE * End) (IResponse * This);
	HRESULT(STDMETHODCALLTYPE * Flush) (IResponse * This);
	HRESULT(STDMETHODCALLTYPE * Redirect) (IResponse * This, BSTR bstrURL);
	HRESULT(STDMETHODCALLTYPE * Write) (IResponse * This, VARIANT varText);
	HRESULT(STDMETHODCALLTYPE * WriteBlock) (IResponse * This, short iBlockNumber);
	HRESULT(STDMETHODCALLTYPE * IsClientConnected) (IResponse * This, VARIANT_BOOL * pfIsClientConnected);
	HRESULT(STDMETHODCALLTYPE * get_CharSet) (IResponse * This, BSTR * pbstrCharSetRet);
	HRESULT(STDMETHODCALLTYPE * put_CharSet) (IResponse * This, BSTR bstrCharSet);
	HRESULT(STDMETHODCALLTYPE * Pics) (IResponse * This, BSTR bstrHeaderValue);
	HRESULT(STDMETHODCALLTYPE * get_CacheControl) (IResponse * This, BSTR * pbstrCacheControl);
	HRESULT(STDMETHODCALLTYPE * put_CacheControl) (IResponse * This, BSTR bstrCacheControl);
	HRESULT(STDMETHODCALLTYPE * get_CodePage) (IResponse * This, long *plvar);
	HRESULT(STDMETHODCALLTYPE * put_CodePage) (IResponse * This, long lvar);
	HRESULT(STDMETHODCALLTYPE * get_LCID) (IResponse * This, long *plvar);
	HRESULT(STDMETHODCALLTYPE * put_LCID) (IResponse * This, long lvar);
	END_INTERFACE
}  IResponseVtbl;
interface IResponse
{
	CONST_VTBL struct IResponseVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IResponse_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IResponse_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IResponse_Release(This)( (This)->lpVtbl -> Release(This) )
#define IResponse_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IResponse_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IResponse_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IResponse_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IResponse_get_Buffer(This,fIsBuffering)( (This)->lpVtbl -> get_Buffer(This,fIsBuffering) )
#define IResponse_put_Buffer(This,fIsBuffering)( (This)->lpVtbl -> put_Buffer(This,fIsBuffering) )
#define IResponse_get_ContentType(This,pbstrContentTypeRet)( (This)->lpVtbl -> get_ContentType(This,pbstrContentTypeRet) )
#define IResponse_put_ContentType(This,bstrContentType)( (This)->lpVtbl -> put_ContentType(This,bstrContentType) )
#define IResponse_get_Expires(This,pvarExpiresMinutesRet)( (This)->lpVtbl -> get_Expires(This,pvarExpiresMinutesRet) )
#define IResponse_put_Expires(This,lExpiresMinutes)( (This)->lpVtbl -> put_Expires(This,lExpiresMinutes) )
#define IResponse_get_ExpiresAbsolute(This,pvarExpiresRet)( (This)->lpVtbl -> get_ExpiresAbsolute(This,pvarExpiresRet) )
#define IResponse_put_ExpiresAbsolute(This,dtExpires)( (This)->lpVtbl -> put_ExpiresAbsolute(This,dtExpires) )
#define IResponse_get_Cookies(This,ppCookies)( (This)->lpVtbl -> get_Cookies(This,ppCookies) )
#define IResponse_get_Status(This,pbstrStatusRet)( (This)->lpVtbl -> get_Status(This,pbstrStatusRet) )
#define IResponse_put_Status(This,bstrStatus)( (This)->lpVtbl -> put_Status(This,bstrStatus) )
#define IResponse_Add(This,bstrHeaderValue,bstrHeaderName)( (This)->lpVtbl -> Add(This,bstrHeaderValue,bstrHeaderName) )
#define IResponse_AddHeader(This,bstrHeaderName,bstrHeaderValue)( (This)->lpVtbl -> AddHeader(This,bstrHeaderName,bstrHeaderValue) )
#define IResponse_AppendToLog(This,bstrLogEntry)( (This)->lpVtbl -> AppendToLog(This,bstrLogEntry) )
#define IResponse_BinaryWrite(This,varInput)( (This)->lpVtbl -> BinaryWrite(This,varInput) )
#define IResponse_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define IResponse_End(This)( (This)->lpVtbl -> End(This) )
#define IResponse_Flush(This)( (This)->lpVtbl -> Flush(This) )
#define IResponse_Redirect(This,bstrURL)( (This)->lpVtbl -> Redirect(This,bstrURL) )
#define IResponse_Write(This,varText)( (This)->lpVtbl -> Write(This,varText) )
#define IResponse_WriteBlock(This,iBlockNumber)( (This)->lpVtbl -> WriteBlock(This,iBlockNumber) )
#define IResponse_IsClientConnected(This,pfIsClientConnected)( (This)->lpVtbl -> IsClientConnected(This,pfIsClientConnected) )
#define IResponse_get_CharSet(This,pbstrCharSetRet)( (This)->lpVtbl -> get_CharSet(This,pbstrCharSetRet) )
#define IResponse_put_CharSet(This,bstrCharSet)( (This)->lpVtbl -> put_CharSet(This,bstrCharSet) )
#define IResponse_Pics(This,bstrHeaderValue)( (This)->lpVtbl -> Pics(This,bstrHeaderValue) )
#define IResponse_get_CacheControl(This,pbstrCacheControl)( (This)->lpVtbl -> get_CacheControl(This,pbstrCacheControl) )
#define IResponse_put_CacheControl(This,bstrCacheControl)( (This)->lpVtbl -> put_CacheControl(This,bstrCacheControl) )
#define IResponse_get_CodePage(This,plvar)( (This)->lpVtbl -> get_CodePage(This,plvar) )
#define IResponse_put_CodePage(This,lvar)( (This)->lpVtbl -> put_CodePage(This,lvar) )
#define IResponse_get_LCID(This,plvar)( (This)->lpVtbl -> get_LCID(This,plvar) )
#define IResponse_put_LCID(This,lvar)( (This)->lpVtbl -> put_LCID(This,lvar) )
#endif
#endif
DEFINE_GUID(CLSID_Response, 0x46E19BA0, 0x25DD, 0x11D0, 0xA5, 0x5F, 0x00, 0xA0, 0xC9, 0x0C, 0x20, 0x91);
#ifndef __IVariantDictionary_INTERFACE_DEFINED__
#define __IVariantDictionary_INTERFACE_DEFINED__
DEFINE_GUID(IID_IVariantDictionary, 0x4a7deb90, 0xb069, 0x11d0, 0xb3, 0x73, 0x00, 0xa0, 0xc9, 0x0c, 0x2b, 0xd8);
typedef struct IVariantDictionaryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVariantDictionary * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVariantDictionary * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVariantDictionary * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IVariantDictionary * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IVariantDictionary * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IVariantDictionary * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IVariantDictionary * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IVariantDictionary * This, VARIANT VarKey, VARIANT * pvar);
	HRESULT(STDMETHODCALLTYPE * put_Item) (IVariantDictionary * This, VARIANT VarKey, VARIANT var);
	HRESULT(STDMETHODCALLTYPE * putref_Item) (IVariantDictionary * This, VARIANT VarKey, VARIANT var);
	HRESULT(STDMETHODCALLTYPE * get_Key) (IVariantDictionary * This, VARIANT VarKey, VARIANT * pvar);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IVariantDictionary * This, int *cStrRet);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IVariantDictionary * This, IUnknown ** ppEnumReturn);
	HRESULT(STDMETHODCALLTYPE * Remove) (IVariantDictionary * This, VARIANT VarKey);
	HRESULT(STDMETHODCALLTYPE * RemoveAll) (IVariantDictionary * This);
	END_INTERFACE
}  IVariantDictionaryVtbl;
interface IVariantDictionary
{
	CONST_VTBL struct IVariantDictionaryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVariantDictionary_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVariantDictionary_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IVariantDictionary_Release(This)( (This)->lpVtbl -> Release(This) )
#define IVariantDictionary_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IVariantDictionary_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IVariantDictionary_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IVariantDictionary_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IVariantDictionary_get_Item(This,VarKey,pvar)( (This)->lpVtbl -> get_Item(This,VarKey,pvar) )
#define IVariantDictionary_put_Item(This,VarKey,var)( (This)->lpVtbl -> put_Item(This,VarKey,var) )
#define IVariantDictionary_putref_Item(This,VarKey,var)( (This)->lpVtbl -> putref_Item(This,VarKey,var) )
#define IVariantDictionary_get_Key(This,VarKey,pvar)( (This)->lpVtbl -> get_Key(This,VarKey,pvar) )
#define IVariantDictionary_get_Count(This,cStrRet)( (This)->lpVtbl -> get_Count(This,cStrRet) )
#define IVariantDictionary_get__NewEnum(This,ppEnumReturn)( (This)->lpVtbl -> get__NewEnum(This,ppEnumReturn) )
#define IVariantDictionary_Remove(This,VarKey)( (This)->lpVtbl -> Remove(This,VarKey) )
#define IVariantDictionary_RemoveAll(This)( (This)->lpVtbl -> RemoveAll(This) )
#endif
#endif
#ifndef __ISessionObject_INTERFACE_DEFINED__
#define __ISessionObject_INTERFACE_DEFINED__
DEFINE_GUID(IID_ISessionObject, 0xD97A6DA0, 0xA865, 0x11cf, 0x83, 0xAF, 0x00, 0xA0, 0xC9, 0x0C, 0x2B, 0xD8);
typedef struct ISessionObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISessionObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISessionObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISessionObject * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ISessionObject * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ISessionObject * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ISessionObject * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ISessionObject * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_SessionID) (ISessionObject * This, BSTR * pbstrRet);
	HRESULT(STDMETHODCALLTYPE * get_Value) (ISessionObject * This, BSTR bstrValue, VARIANT * pvar);
	HRESULT(STDMETHODCALLTYPE * put_Value) (ISessionObject * This, BSTR bstrValue, VARIANT var);
	HRESULT(STDMETHODCALLTYPE * putref_Value) (ISessionObject * This, BSTR bstrValue, VARIANT var);
	HRESULT(STDMETHODCALLTYPE * get_Timeout) (ISessionObject * This, long *plvar);
	HRESULT(STDMETHODCALLTYPE * put_Timeout) (ISessionObject * This, long lvar);
	HRESULT(STDMETHODCALLTYPE * Abandon) (ISessionObject * This);
	HRESULT(STDMETHODCALLTYPE * get_CodePage) (ISessionObject * This, long *plvar);
	HRESULT(STDMETHODCALLTYPE * put_CodePage) (ISessionObject * This, long lvar);
	HRESULT(STDMETHODCALLTYPE * get_LCID) (ISessionObject * This, long *plvar);
	HRESULT(STDMETHODCALLTYPE * put_LCID) (ISessionObject * This, long lvar);
	HRESULT(STDMETHODCALLTYPE * get_StaticObjects) (ISessionObject * This, IVariantDictionary ** ppTaggedObjects);
	HRESULT(STDMETHODCALLTYPE * get_Contents) (ISessionObject * This, IVariantDictionary ** ppProperties);
	END_INTERFACE
}  ISessionObjectVtbl;
interface ISessionObject
{
	CONST_VTBL struct ISessionObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISessionObject_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISessionObject_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISessionObject_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISessionObject_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISessionObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISessionObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISessionObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISessionObject_get_SessionID(This,pbstrRet)( (This)->lpVtbl -> get_SessionID(This,pbstrRet) )
#define ISessionObject_get_Value(This,bstrValue,pvar)( (This)->lpVtbl -> get_Value(This,bstrValue,pvar) )
#define ISessionObject_put_Value(This,bstrValue,var)( (This)->lpVtbl -> put_Value(This,bstrValue,var) )
#define ISessionObject_putref_Value(This,bstrValue,var)( (This)->lpVtbl -> putref_Value(This,bstrValue,var) )
#define ISessionObject_get_Timeout(This,plvar)( (This)->lpVtbl -> get_Timeout(This,plvar) )
#define ISessionObject_put_Timeout(This,lvar)( (This)->lpVtbl -> put_Timeout(This,lvar) )
#define ISessionObject_Abandon(This)( (This)->lpVtbl -> Abandon(This) )
#define ISessionObject_get_CodePage(This,plvar)( (This)->lpVtbl -> get_CodePage(This,plvar) )
#define ISessionObject_put_CodePage(This,lvar)( (This)->lpVtbl -> put_CodePage(This,lvar) )
#define ISessionObject_get_LCID(This,plvar)( (This)->lpVtbl -> get_LCID(This,plvar) )
#define ISessionObject_put_LCID(This,lvar)( (This)->lpVtbl -> put_LCID(This,lvar) )
#define ISessionObject_get_StaticObjects(This,ppTaggedObjects)( (This)->lpVtbl -> get_StaticObjects(This,ppTaggedObjects) )
#define ISessionObject_get_Contents(This,ppProperties)( (This)->lpVtbl -> get_Contents(This,ppProperties) )
#endif
#endif
DEFINE_GUID(CLSID_Session, 0x509F8F20, 0x25DE, 0x11D0, 0xA5, 0x5F, 0x00, 0xA0, 0xC9, 0x0C, 0x20, 0x91);
#ifndef __IApplicationObject_INTERFACE_DEFINED__
#define __IApplicationObject_INTERFACE_DEFINED__
DEFINE_GUID(IID_IApplicationObject, 0xD97A6DA0, 0xA866, 0x11cf, 0x83, 0xAE, 0x10, 0xA0, 0xC9, 0x0C, 0x2B, 0xD8);
typedef struct IApplicationObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IApplicationObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IApplicationObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (IApplicationObject * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IApplicationObject * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IApplicationObject * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IApplicationObject * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IApplicationObject * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IApplicationObject * This, BSTR bstrValue, VARIANT * pvar);
	HRESULT(STDMETHODCALLTYPE * put_Value) (IApplicationObject * This, BSTR bstrValue, VARIANT var);
	HRESULT(STDMETHODCALLTYPE * putref_Value) (IApplicationObject * This, BSTR bstrValue, VARIANT var);
	HRESULT(STDMETHODCALLTYPE * Lock) (IApplicationObject * This);
	HRESULT(STDMETHODCALLTYPE * UnLock) (IApplicationObject * This);
	HRESULT(STDMETHODCALLTYPE * get_StaticObjects) (IApplicationObject * This, IVariantDictionary ** ppProperties);
	HRESULT(STDMETHODCALLTYPE * get_Contents) (IApplicationObject * This, IVariantDictionary ** ppProperties);
	END_INTERFACE
}  IApplicationObjectVtbl;
interface IApplicationObject
{
	CONST_VTBL struct IApplicationObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IApplicationObject_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IApplicationObject_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IApplicationObject_Release(This)( (This)->lpVtbl -> Release(This) )
#define IApplicationObject_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IApplicationObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IApplicationObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IApplicationObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IApplicationObject_get_Value(This,bstrValue,pvar)( (This)->lpVtbl -> get_Value(This,bstrValue,pvar) )
#define IApplicationObject_put_Value(This,bstrValue,var)( (This)->lpVtbl -> put_Value(This,bstrValue,var) )
#define IApplicationObject_putref_Value(This,bstrValue,var)( (This)->lpVtbl -> putref_Value(This,bstrValue,var) )
#define IApplicationObject_Lock(This)( (This)->lpVtbl -> Lock(This) )
#define IApplicationObject_UnLock(This)( (This)->lpVtbl -> UnLock(This) )
#define IApplicationObject_get_StaticObjects(This,ppProperties)( (This)->lpVtbl -> get_StaticObjects(This,ppProperties) )
#define IApplicationObject_get_Contents(This,ppProperties)( (This)->lpVtbl -> get_Contents(This,ppProperties) )
#endif
#endif
DEFINE_GUID(CLSID_Application, 0x7C3BAF00, 0x25DE, 0x11D0, 0xA5, 0x5F, 0x00, 0xA0, 0xC9, 0x0C, 0x20, 0x91);
#ifndef __IASPError_INTERFACE_DEFINED__
#define __IASPError_INTERFACE_DEFINED__
DEFINE_GUID(IID_IASPError, 0xF5A6893E, 0xA0F5, 0x11d1, 0x8C, 0x4B, 0x00, 0xC0, 0x4F, 0xC3, 0x24, 0xA4);
typedef struct IASPErrorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IASPError * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IASPError * This);
	ULONG(STDMETHODCALLTYPE * Release) (IASPError * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IASPError * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IASPError * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IASPError * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IASPError * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ASPCode) (IASPError * This, BSTR * pbstrASPCode);
	HRESULT(STDMETHODCALLTYPE * get_Number) (IASPError * This, long *plNumber);
	HRESULT(STDMETHODCALLTYPE * get_Category) (IASPError * This, BSTR * pbstrSource);
	HRESULT(STDMETHODCALLTYPE * get_File) (IASPError * This, BSTR * pbstrFileName);
	HRESULT(STDMETHODCALLTYPE * get_Line) (IASPError * This, long *plLineNumber);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IASPError * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_ASPDescription) (IASPError * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_Column) (IASPError * This, long *plColumn);
	HRESULT(STDMETHODCALLTYPE * get_Source) (IASPError * This, BSTR * pbstrLineText);
	END_INTERFACE
}  IASPErrorVtbl;
interface IASPError
{
	CONST_VTBL struct IASPErrorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IASPError_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IASPError_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IASPError_Release(This)( (This)->lpVtbl -> Release(This) )
#define IASPError_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IASPError_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IASPError_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IASPError_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IASPError_get_ASPCode(This,pbstrASPCode)( (This)->lpVtbl -> get_ASPCode(This,pbstrASPCode) )
#define IASPError_get_Number(This,plNumber)( (This)->lpVtbl -> get_Number(This,plNumber) )
#define IASPError_get_Category(This,pbstrSource)( (This)->lpVtbl -> get_Category(This,pbstrSource) )
#define IASPError_get_File(This,pbstrFileName)( (This)->lpVtbl -> get_File(This,pbstrFileName) )
#define IASPError_get_Line(This,plLineNumber)( (This)->lpVtbl -> get_Line(This,plLineNumber) )
#define IASPError_get_Description(This,pbstrDescription)( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IASPError_get_ASPDescription(This,pbstrDescription)( (This)->lpVtbl -> get_ASPDescription(This,pbstrDescription) )
#define IASPError_get_Column(This,plColumn)( (This)->lpVtbl -> get_Column(This,plColumn) )
#define IASPError_get_Source(This,pbstrLineText)( (This)->lpVtbl -> get_Source(This,pbstrLineText) )
#endif
#endif
#ifndef __IServer_INTERFACE_DEFINED__
#define __IServer_INTERFACE_DEFINED__
DEFINE_GUID(IID_IServer, 0xD97A6DA0, 0xA867, 0x11cf, 0x83, 0xAE, 0x01, 0xA0, 0xC9, 0x0C, 0x2B, 0xD8);
typedef struct IServerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IServer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IServer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IServer * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IServer * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IServer * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IServer * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IServer * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ScriptTimeout) (IServer * This, long *plTimeoutSeconds);
	HRESULT(STDMETHODCALLTYPE * put_ScriptTimeout) (IServer * This, long lTimeoutSeconds);
	HRESULT(STDMETHODCALLTYPE * CreateObject) (IServer * This, BSTR bstrProgID, IDispatch ** ppDispObject);
	HRESULT(STDMETHODCALLTYPE * HTMLEncode) (IServer * This, BSTR bstrIn, BSTR * pbstrEncoded);
	HRESULT(STDMETHODCALLTYPE * MapPath) (IServer * This, BSTR bstrLogicalPath, BSTR * pbstrPhysicalPath);
	HRESULT(STDMETHODCALLTYPE * URLEncode) (IServer * This, BSTR bstrIn, BSTR * pbstrEncoded);
	HRESULT(STDMETHODCALLTYPE * URLPathEncode) (IServer * This, BSTR bstrIn, BSTR * pbstrEncoded);
	HRESULT(STDMETHODCALLTYPE * Execute) (IServer * This, BSTR bstrLogicalPath);
	HRESULT(STDMETHODCALLTYPE * Transfer) (IServer * This, BSTR bstrLogicalPath);
	HRESULT(STDMETHODCALLTYPE * GetLastError) (IServer * This, IASPError ** ppASPErrorObject);
	END_INTERFACE
}  IServerVtbl;
interface IServer
{
	CONST_VTBL struct IServerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServer_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServer_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IServer_get_ScriptTimeout(This,plTimeoutSeconds)( (This)->lpVtbl -> get_ScriptTimeout(This,plTimeoutSeconds) )
#define IServer_put_ScriptTimeout(This,lTimeoutSeconds)( (This)->lpVtbl -> put_ScriptTimeout(This,lTimeoutSeconds) )
#define IServer_CreateObject(This,bstrProgID,ppDispObject)( (This)->lpVtbl -> CreateObject(This,bstrProgID,ppDispObject) )
#define IServer_HTMLEncode(This,bstrIn,pbstrEncoded)( (This)->lpVtbl -> HTMLEncode(This,bstrIn,pbstrEncoded) )
#define IServer_MapPath(This,bstrLogicalPath,pbstrPhysicalPath)( (This)->lpVtbl -> MapPath(This,bstrLogicalPath,pbstrPhysicalPath) )
#define IServer_URLEncode(This,bstrIn,pbstrEncoded)( (This)->lpVtbl -> URLEncode(This,bstrIn,pbstrEncoded) )
#define IServer_URLPathEncode(This,bstrIn,pbstrEncoded)( (This)->lpVtbl -> URLPathEncode(This,bstrIn,pbstrEncoded) )
#define IServer_Execute(This,bstrLogicalPath)( (This)->lpVtbl -> Execute(This,bstrLogicalPath) )
#define IServer_Transfer(This,bstrLogicalPath)( (This)->lpVtbl -> Transfer(This,bstrLogicalPath) )
#define IServer_GetLastError(This,ppASPErrorObject)( (This)->lpVtbl -> GetLastError(This,ppASPErrorObject) )
#endif
#endif
DEFINE_GUID(CLSID_Server, 0xA506D160, 0x25E0, 0x11D0, 0xA5, 0x5F, 0x00, 0xA0, 0xC9, 0x0C, 0x20, 0x91);
#ifndef __IScriptingContext_INTERFACE_DEFINED__
#define __IScriptingContext_INTERFACE_DEFINED__
DEFINE_GUID(IID_IScriptingContext, 0xD97A6DA0, 0xA868, 0x11cf, 0x83, 0xAE, 0x00, 0xB0, 0xC9, 0x0C, 0x2B, 0xD8);
typedef struct IScriptingContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IScriptingContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IScriptingContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (IScriptingContext * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IScriptingContext * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IScriptingContext * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IScriptingContext * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IScriptingContext * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Request) (IScriptingContext * This, IRequest ** ppRequest);
	HRESULT(STDMETHODCALLTYPE * get_Response) (IScriptingContext * This, IResponse ** ppResponse);
	HRESULT(STDMETHODCALLTYPE * get_Server) (IScriptingContext * This, IServer ** ppServer);
	HRESULT(STDMETHODCALLTYPE * get_Session) (IScriptingContext * This, ISessionObject ** ppSession);
	HRESULT(STDMETHODCALLTYPE * get_Application) (IScriptingContext * This, IApplicationObject ** ppApplication);
	END_INTERFACE
}  IScriptingContextVtbl;
interface IScriptingContext
{
	CONST_VTBL struct IScriptingContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IScriptingContext_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IScriptingContext_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IScriptingContext_Release(This)( (This)->lpVtbl -> Release(This) )
#define IScriptingContext_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IScriptingContext_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IScriptingContext_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IScriptingContext_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IScriptingContext_get_Request(This,ppRequest)( (This)->lpVtbl -> get_Request(This,ppRequest) )
#define IScriptingContext_get_Response(This,ppResponse)( (This)->lpVtbl -> get_Response(This,ppResponse) )
#define IScriptingContext_get_Server(This,ppServer)( (This)->lpVtbl -> get_Server(This,ppServer) )
#define IScriptingContext_get_Session(This,ppSession)( (This)->lpVtbl -> get_Session(This,ppSession) )
#define IScriptingContext_get_Application(This,ppApplication)( (This)->lpVtbl -> get_Application(This,ppApplication) )
#endif
#endif
DEFINE_GUID(CLSID_ScriptingContext, 0xD97A6DA0, 0xA868, 0x11cf, 0x83, 0xAE, 0x11, 0xB0, 0xC9, 0x0C, 0x2B, 0xD8);
#endif
#endif
