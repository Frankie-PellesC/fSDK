/*+@@file@@----------------------------------------------------------------*//*!
 \file		XMLTrnsF.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 19:54:34 2016
 \date		Modified on Mon Sep 19 19:54:34 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __xmltrnsf_h__
#define __xmltrnsf_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWmiXMLTransformer_FWD_DEFINED__
#define __IWmiXMLTransformer_FWD_DEFINED__
typedef interface IWmiXMLTransformer IWmiXMLTransformer;
#endif
#ifndef __WmiXMLTransformer_FWD_DEFINED__
#define __WmiXMLTransformer_FWD_DEFINED__
typedef struct WmiXMLTransformer WmiXMLTransformer;
#endif
#ifndef __ISWbemXMLDocumentSet_FWD_DEFINED__
#define __ISWbemXMLDocumentSet_FWD_DEFINED__
typedef interface ISWbemXMLDocumentSet ISWbemXMLDocumentSet;
#endif
#ifndef __IWmiXMLTransformer_FWD_DEFINED__
#define __IWmiXMLTransformer_FWD_DEFINED__
typedef interface IWmiXMLTransformer IWmiXMLTransformer;
#endif
#include <msxml.h>
#include <wbemdisp.h>
void *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void *);
#ifndef __WmiXMLTransformer_LIBRARY_DEFINED__
#define __WmiXMLTransformer_LIBRARY_DEFINED__
typedef DECLSPEC_UUID("28D1EEA5-D41E-46c2-B42D-6CE0B9B4D7A7")
enum WmiXMLEncoding
{
	wmiXML_CIM_DTD_2_0 = 0,
	wmiXML_WMI_DTD_2_0 = 0x1,
	wmiXML_WMI_DTD_WHISTLER = 0x2
} WmiXMLEncoding;
typedef DECLSPEC_UUID("598BCA7A-E40E-4265-8517-C9A86E2FC07E")
enum WmiXMLCompilationTypeEnum
{
	WmiXMLCompilationWellFormCheck = 0,
	WmiXMLCompilationValidityCheck = 0x1,
	WmiXMLCompilationFullCompileAndLoad = 0x2
} WmiXMLCompilationTypeEnum;
extern const IID LIBID_WmiXMLTransformer;
#ifndef __IWmiXMLTransformer_INTERFACE_DEFINED__
#define __IWmiXMLTransformer_INTERFACE_DEFINED__
extern const IID IID_IWmiXMLTransformer;
typedef struct IWmiXMLTransformerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWmiXMLTransformer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWmiXMLTransformer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWmiXMLTransformer *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWmiXMLTransformer *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWmiXMLTransformer *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWmiXMLTransformer *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWmiXMLTransformer *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_XMLEncodingType) (IWmiXMLTransformer *This, WmiXMLEncoding *piEncoding);
	HRESULT(STDMETHODCALLTYPE *put_XMLEncodingType) (IWmiXMLTransformer *This, WmiXMLEncoding iEncoding);
	HRESULT(STDMETHODCALLTYPE *get_QualifierFilter) (IWmiXMLTransformer *This, VARIANT_BOOL *bQualifierFilter);
	HRESULT(STDMETHODCALLTYPE *put_QualifierFilter) (IWmiXMLTransformer *This, VARIANT_BOOL bQualifierFilter);
	HRESULT(STDMETHODCALLTYPE *get_ClassOriginFilter) (IWmiXMLTransformer *This, VARIANT_BOOL *bClassOriginFilter);
	HRESULT(STDMETHODCALLTYPE *put_ClassOriginFilter) (IWmiXMLTransformer *This, VARIANT_BOOL bClassOriginFilter);
	HRESULT(STDMETHODCALLTYPE *get_User) (IWmiXMLTransformer *This, BSTR *strUser);
	HRESULT(STDMETHODCALLTYPE *put_User) (IWmiXMLTransformer *This, BSTR strUser);
	HRESULT(STDMETHODCALLTYPE *get_Password) (IWmiXMLTransformer *This, BSTR *strPassword);
	HRESULT(STDMETHODCALLTYPE *put_Password) (IWmiXMLTransformer *This, BSTR strPassword);
	HRESULT(STDMETHODCALLTYPE *get_Authority) (IWmiXMLTransformer *This, BSTR *strAuthority);
	HRESULT(STDMETHODCALLTYPE *put_Authority) (IWmiXMLTransformer *This, BSTR strAuthority);
	HRESULT(STDMETHODCALLTYPE *get_ImpersonationLevel) (IWmiXMLTransformer *This, DWORD *pdwImpersonationLevel);
	HRESULT(STDMETHODCALLTYPE *put_ImpersonationLevel) (IWmiXMLTransformer *This, DWORD dwImpersonationLevel);
	HRESULT(STDMETHODCALLTYPE *get_AuthenticationLevel) (IWmiXMLTransformer *This, DWORD *pdwAuthenticationLevel);
	HRESULT(STDMETHODCALLTYPE *put_AuthenticationLevel) (IWmiXMLTransformer *This, DWORD dwAuthenticationLevel);
	HRESULT(STDMETHODCALLTYPE *get_Locale) (IWmiXMLTransformer *This, BSTR *strLocale);
	HRESULT(STDMETHODCALLTYPE *put_Locale) (IWmiXMLTransformer *This, BSTR strLocale);
	HRESULT(STDMETHODCALLTYPE *get_LocalOnly) (IWmiXMLTransformer *This, VARIANT_BOOL *bLocalOnly);
	HRESULT(STDMETHODCALLTYPE *put_LocalOnly) (IWmiXMLTransformer *This, VARIANT_BOOL bLocalOnly);
	HRESULT(STDMETHODCALLTYPE *GetObject) (IWmiXMLTransformer *This, BSTR strObjectPath, IDispatch *pCtx, IXMLDOMDocument **ppXMLDocument);
	HRESULT(STDMETHODCALLTYPE *ExecQuery) (IWmiXMLTransformer *This, BSTR strNamespacePath, BSTR strQuery, BSTR strQueryLanguage, IDispatch *pCtx, ISWbemXMLDocumentSet **ppXMLDocumentSet);
	HRESULT(STDMETHODCALLTYPE *EnumClasses) (IWmiXMLTransformer *This, BSTR strSuperClassPath, VARIANT_BOOL bDeep, IDispatch *pCtx, ISWbemXMLDocumentSet **ppXMLDocumentSet);
	HRESULT(STDMETHODCALLTYPE *EnumInstances) (IWmiXMLTransformer *This, BSTR strClassPath, VARIANT_BOOL bDeep, IDispatch *pCtx, ISWbemXMLDocumentSet **ppXMLDocumentSet);
	HRESULT(STDMETHODCALLTYPE *EnumClassNames) (IWmiXMLTransformer *This, BSTR strSuperClassPath, VARIANT_BOOL bDeep, IDispatch *pCtx, ISWbemXMLDocumentSet **ppXMLDocumentSet);
	HRESULT(STDMETHODCALLTYPE *EnumInstanceNames) (IWmiXMLTransformer *This, BSTR strClassPath, IDispatch *pCtx, ISWbemXMLDocumentSet **ppXMLDocumentSet);
	HRESULT(STDMETHODCALLTYPE *Compile) (IWmiXMLTransformer *This, VARIANT *pvInputSource, BSTR strNamespacePath, LONG lClassFlags, LONG lInstanceFlags, WmiXMLCompilationTypeEnum iOperation, IDispatch *pCtx, VARIANT_BOOL *pStatus);
	HRESULT(STDMETHODCALLTYPE *get_Privileges) (IWmiXMLTransformer *This, ISWbemPrivilegeSet **objWbemPrivilegeSet);
	HRESULT(STDMETHODCALLTYPE *get_CompilationErrors) (IWmiXMLTransformer *This, BSTR *pstrErrors);
	END_INTERFACE
}  IWmiXMLTransformerVtbl;
interface IWmiXMLTransformer
{
	CONST_VTBL struct IWmiXMLTransformerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWmiXMLTransformer_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IWmiXMLTransformer_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IWmiXMLTransformer_Release(This) (This)->lpVtbl -> Release(This)
#define IWmiXMLTransformer_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IWmiXMLTransformer_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IWmiXMLTransformer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IWmiXMLTransformer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IWmiXMLTransformer_get_XMLEncodingType(This,piEncoding) (This)->lpVtbl -> get_XMLEncodingType(This,piEncoding)
#define IWmiXMLTransformer_put_XMLEncodingType(This,iEncoding) (This)->lpVtbl -> put_XMLEncodingType(This,iEncoding)
#define IWmiXMLTransformer_get_QualifierFilter(This,bQualifierFilter) (This)->lpVtbl -> get_QualifierFilter(This,bQualifierFilter)
#define IWmiXMLTransformer_put_QualifierFilter(This,bQualifierFilter) (This)->lpVtbl -> put_QualifierFilter(This,bQualifierFilter)
#define IWmiXMLTransformer_get_ClassOriginFilter(This,bClassOriginFilter) (This)->lpVtbl -> get_ClassOriginFilter(This,bClassOriginFilter)
#define IWmiXMLTransformer_put_ClassOriginFilter(This,bClassOriginFilter) (This)->lpVtbl -> put_ClassOriginFilter(This,bClassOriginFilter)
#define IWmiXMLTransformer_get_User(This,strUser) (This)->lpVtbl -> get_User(This,strUser)
#define IWmiXMLTransformer_put_User(This,strUser) (This)->lpVtbl -> put_User(This,strUser)
#define IWmiXMLTransformer_get_Password(This,strPassword) (This)->lpVtbl -> get_Password(This,strPassword)
#define IWmiXMLTransformer_put_Password(This,strPassword) (This)->lpVtbl -> put_Password(This,strPassword)
#define IWmiXMLTransformer_get_Authority(This,strAuthority) (This)->lpVtbl -> get_Authority(This,strAuthority)
#define IWmiXMLTransformer_put_Authority(This,strAuthority) (This)->lpVtbl -> put_Authority(This,strAuthority)
#define IWmiXMLTransformer_get_ImpersonationLevel(This,pdwImpersonationLevel) (This)->lpVtbl -> get_ImpersonationLevel(This,pdwImpersonationLevel)
#define IWmiXMLTransformer_put_ImpersonationLevel(This,dwImpersonationLevel) (This)->lpVtbl -> put_ImpersonationLevel(This,dwImpersonationLevel)
#define IWmiXMLTransformer_get_AuthenticationLevel(This,pdwAuthenticationLevel) (This)->lpVtbl -> get_AuthenticationLevel(This,pdwAuthenticationLevel)
#define IWmiXMLTransformer_put_AuthenticationLevel(This,dwAuthenticationLevel) (This)->lpVtbl -> put_AuthenticationLevel(This,dwAuthenticationLevel)
#define IWmiXMLTransformer_get_Locale(This,strLocale) (This)->lpVtbl -> get_Locale(This,strLocale)
#define IWmiXMLTransformer_put_Locale(This,strLocale) (This)->lpVtbl -> put_Locale(This,strLocale)
#define IWmiXMLTransformer_get_LocalOnly(This,bLocalOnly) (This)->lpVtbl -> get_LocalOnly(This,bLocalOnly)
#define IWmiXMLTransformer_put_LocalOnly(This,bLocalOnly) (This)->lpVtbl -> put_LocalOnly(This,bLocalOnly)
#define IWmiXMLTransformer_GetObject(This,strObjectPath,pCtx,ppXMLDocument) (This)->lpVtbl -> GetObject(This,strObjectPath,pCtx,ppXMLDocument)
#define IWmiXMLTransformer_ExecQuery(This,strNamespacePath,strQuery,strQueryLanguage,pCtx,ppXMLDocumentSet) (This)->lpVtbl -> ExecQuery(This,strNamespacePath,strQuery,strQueryLanguage,pCtx,ppXMLDocumentSet)
#define IWmiXMLTransformer_EnumClasses(This,strSuperClassPath,bDeep,pCtx,ppXMLDocumentSet) (This)->lpVtbl -> EnumClasses(This,strSuperClassPath,bDeep,pCtx,ppXMLDocumentSet)
#define IWmiXMLTransformer_EnumInstances(This,strClassPath,bDeep,pCtx,ppXMLDocumentSet) (This)->lpVtbl -> EnumInstances(This,strClassPath,bDeep,pCtx,ppXMLDocumentSet)
#define IWmiXMLTransformer_EnumClassNames(This,strSuperClassPath,bDeep,pCtx,ppXMLDocumentSet) (This)->lpVtbl -> EnumClassNames(This,strSuperClassPath,bDeep,pCtx,ppXMLDocumentSet)
#define IWmiXMLTransformer_EnumInstanceNames(This,strClassPath,pCtx,ppXMLDocumentSet) (This)->lpVtbl -> EnumInstanceNames(This,strClassPath,pCtx,ppXMLDocumentSet)
#define IWmiXMLTransformer_Compile(This,pvInputSource,strNamespacePath,lClassFlags,lInstanceFlags,iOperation,pCtx,pStatus) (This)->lpVtbl -> Compile(This,pvInputSource,strNamespacePath,lClassFlags,lInstanceFlags,iOperation,pCtx,pStatus)
#define IWmiXMLTransformer_get_Privileges(This,objWbemPrivilegeSet) (This)->lpVtbl -> get_Privileges(This,objWbemPrivilegeSet)
#define IWmiXMLTransformer_get_CompilationErrors(This,pstrErrors) (This)->lpVtbl -> get_CompilationErrors(This,pstrErrors)
#endif
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_get_XMLEncodingType_Proxy(IWmiXMLTransformer *This, WmiXMLEncoding *piEncoding);
void __RPC_STUB IWmiXMLTransformer_get_XMLEncodingType_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_put_XMLEncodingType_Proxy(IWmiXMLTransformer *This, WmiXMLEncoding iEncoding);
void __RPC_STUB IWmiXMLTransformer_put_XMLEncodingType_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_get_QualifierFilter_Proxy(IWmiXMLTransformer *This, VARIANT_BOOL *bQualifierFilter);
void __RPC_STUB IWmiXMLTransformer_get_QualifierFilter_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_put_QualifierFilter_Proxy(IWmiXMLTransformer *This, VARIANT_BOOL bQualifierFilter);
void __RPC_STUB IWmiXMLTransformer_put_QualifierFilter_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_get_ClassOriginFilter_Proxy(IWmiXMLTransformer *This, VARIANT_BOOL *bClassOriginFilter);
void __RPC_STUB IWmiXMLTransformer_get_ClassOriginFilter_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_put_ClassOriginFilter_Proxy(IWmiXMLTransformer *This, VARIANT_BOOL bClassOriginFilter);
void __RPC_STUB IWmiXMLTransformer_put_ClassOriginFilter_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_get_User_Proxy(IWmiXMLTransformer *This, BSTR *strUser);
void __RPC_STUB IWmiXMLTransformer_get_User_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_put_User_Proxy(IWmiXMLTransformer *This, BSTR strUser);
void __RPC_STUB IWmiXMLTransformer_put_User_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_get_Password_Proxy(IWmiXMLTransformer *This, BSTR *strPassword);
void __RPC_STUB IWmiXMLTransformer_get_Password_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_put_Password_Proxy(IWmiXMLTransformer *This, BSTR strPassword);
void __RPC_STUB IWmiXMLTransformer_put_Password_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_get_Authority_Proxy(IWmiXMLTransformer *This, BSTR *strAuthority);
void __RPC_STUB IWmiXMLTransformer_get_Authority_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_put_Authority_Proxy(IWmiXMLTransformer *This, BSTR strAuthority);
void __RPC_STUB IWmiXMLTransformer_put_Authority_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_get_ImpersonationLevel_Proxy(IWmiXMLTransformer *This, DWORD *pdwImpersonationLevel);
void __RPC_STUB IWmiXMLTransformer_get_ImpersonationLevel_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_put_ImpersonationLevel_Proxy(IWmiXMLTransformer *This, DWORD dwImpersonationLevel);
void __RPC_STUB IWmiXMLTransformer_put_ImpersonationLevel_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_get_AuthenticationLevel_Proxy(IWmiXMLTransformer *This, DWORD *pdwAuthenticationLevel);
void __RPC_STUB IWmiXMLTransformer_get_AuthenticationLevel_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_put_AuthenticationLevel_Proxy(IWmiXMLTransformer *This, DWORD dwAuthenticationLevel);
void __RPC_STUB IWmiXMLTransformer_put_AuthenticationLevel_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_get_Locale_Proxy(IWmiXMLTransformer *This, BSTR *strLocale);
void __RPC_STUB IWmiXMLTransformer_get_Locale_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_put_Locale_Proxy(IWmiXMLTransformer *This, BSTR strLocale);
void __RPC_STUB IWmiXMLTransformer_put_Locale_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_get_LocalOnly_Proxy(IWmiXMLTransformer *This, VARIANT_BOOL *bLocalOnly);
void __RPC_STUB IWmiXMLTransformer_get_LocalOnly_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_put_LocalOnly_Proxy(IWmiXMLTransformer *This, VARIANT_BOOL bLocalOnly);
void __RPC_STUB IWmiXMLTransformer_put_LocalOnly_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_GetObject_Proxy(IWmiXMLTransformer *This, BSTR strObjectPath, IDispatch *pCtx, IXMLDOMDocument **ppXMLDocument);
void __RPC_STUB IWmiXMLTransformer_GetObject_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_ExecQuery_Proxy(IWmiXMLTransformer *This, BSTR strNamespacePath, BSTR strQuery, BSTR strQueryLanguage, IDispatch *pCtx, ISWbemXMLDocumentSet **ppXMLDocumentSet);
void __RPC_STUB IWmiXMLTransformer_ExecQuery_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_EnumClasses_Proxy(IWmiXMLTransformer *This, BSTR strSuperClassPath, VARIANT_BOOL bDeep, IDispatch *pCtx, ISWbemXMLDocumentSet **ppXMLDocumentSet);
void __RPC_STUB IWmiXMLTransformer_EnumClasses_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_EnumInstances_Proxy(IWmiXMLTransformer *This, BSTR strClassPath, VARIANT_BOOL bDeep, IDispatch *pCtx, ISWbemXMLDocumentSet **ppXMLDocumentSet);
void __RPC_STUB IWmiXMLTransformer_EnumInstances_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_EnumClassNames_Proxy(IWmiXMLTransformer *This, BSTR strSuperClassPath, VARIANT_BOOL bDeep, IDispatch *pCtx, ISWbemXMLDocumentSet **ppXMLDocumentSet);
void __RPC_STUB IWmiXMLTransformer_EnumClassNames_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_EnumInstanceNames_Proxy(IWmiXMLTransformer *This, BSTR strClassPath, IDispatch *pCtx, ISWbemXMLDocumentSet **ppXMLDocumentSet);
void __RPC_STUB IWmiXMLTransformer_EnumInstanceNames_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_Compile_Proxy(IWmiXMLTransformer *This, VARIANT *pvInputSource, BSTR strNamespacePath, LONG lClassFlags, LONG lInstanceFlags, WmiXMLCompilationTypeEnum iOperation, IDispatch *pCtx, VARIANT_BOOL *pStatus);
void __RPC_STUB IWmiXMLTransformer_Compile_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_get_Privileges_Proxy(IWmiXMLTransformer *This, ISWbemPrivilegeSet **objWbemPrivilegeSet);
void __RPC_STUB IWmiXMLTransformer_get_Privileges_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWmiXMLTransformer_get_CompilationErrors_Proxy(IWmiXMLTransformer *This, BSTR *pstrErrors);
void __RPC_STUB IWmiXMLTransformer_get_CompilationErrors_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
extern const CLSID CLSID_WmiXMLTransformer;
#endif
#ifndef __ISWbemXMLDocumentSet_INTERFACE_DEFINED__
#define __ISWbemXMLDocumentSet_INTERFACE_DEFINED__
extern const IID IID_ISWbemXMLDocumentSet;
typedef struct ISWbemXMLDocumentSetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISWbemXMLDocumentSet *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISWbemXMLDocumentSet *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISWbemXMLDocumentSet *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (ISWbemXMLDocumentSet *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (ISWbemXMLDocumentSet *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (ISWbemXMLDocumentSet *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (ISWbemXMLDocumentSet *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (ISWbemXMLDocumentSet *This, IUnknown **pUnk);
	HRESULT(STDMETHODCALLTYPE *Item) (ISWbemXMLDocumentSet *This, BSTR strObjectPath, long iFlags, IXMLDOMDocument **ppXMLDocument);
	HRESULT(STDMETHODCALLTYPE *get_Count) (ISWbemXMLDocumentSet *This, long *iCount);
	HRESULT(STDMETHODCALLTYPE *NextDocument) (ISWbemXMLDocumentSet *This, IXMLDOMDocument **ppDoc);
	HRESULT(STDMETHODCALLTYPE *SkipNextDocument) (ISWbemXMLDocumentSet *This);
	END_INTERFACE
}  ISWbemXMLDocumentSetVtbl;
interface ISWbemXMLDocumentSet
{
	CONST_VTBL struct ISWbemXMLDocumentSetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISWbemXMLDocumentSet_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISWbemXMLDocumentSet_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define ISWbemXMLDocumentSet_Release(This) (This)->lpVtbl -> Release(This)
#define ISWbemXMLDocumentSet_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define ISWbemXMLDocumentSet_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define ISWbemXMLDocumentSet_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define ISWbemXMLDocumentSet_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define ISWbemXMLDocumentSet_get__NewEnum(This,pUnk) (This)->lpVtbl -> get__NewEnum(This,pUnk)
#define ISWbemXMLDocumentSet_Item(This,strObjectPath,iFlags,ppXMLDocument) (This)->lpVtbl -> Item(This,strObjectPath,iFlags,ppXMLDocument)
#define ISWbemXMLDocumentSet_get_Count(This,iCount) (This)->lpVtbl -> get_Count(This,iCount)
#define ISWbemXMLDocumentSet_NextDocument(This,ppDoc) (This)->lpVtbl -> NextDocument(This,ppDoc)
#define ISWbemXMLDocumentSet_SkipNextDocument(This) (This)->lpVtbl -> SkipNextDocument(This)
#endif
HRESULT STDMETHODCALLTYPE ISWbemXMLDocumentSet_get__NewEnum_Proxy(ISWbemXMLDocumentSet *This, IUnknown **pUnk);
void __RPC_STUB ISWbemXMLDocumentSet_get__NewEnum_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISWbemXMLDocumentSet_Item_Proxy(ISWbemXMLDocumentSet *This, BSTR strObjectPath, long iFlags, IXMLDOMDocument **ppXMLDocument);
void __RPC_STUB ISWbemXMLDocumentSet_Item_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISWbemXMLDocumentSet_get_Count_Proxy(ISWbemXMLDocumentSet *This, long *iCount);
void __RPC_STUB ISWbemXMLDocumentSet_get_Count_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISWbemXMLDocumentSet_NextDocument_Proxy(ISWbemXMLDocumentSet *This, IXMLDOMDocument **ppDoc);
void __RPC_STUB ISWbemXMLDocumentSet_NextDocument_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISWbemXMLDocumentSet_SkipNextDocument_Proxy(ISWbemXMLDocumentSet *This);
void __RPC_STUB ISWbemXMLDocumentSet_SkipNextDocument_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif
