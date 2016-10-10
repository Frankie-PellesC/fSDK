/*+@@file@@----------------------------------------------------------------*//*!
 \file		IIIS.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Fri Jul 15 18:43:26 2016
 \date		Modified on Fri Jul 15 18:43:26 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __iiis_h__
#define __iiis_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IISMimeType_FWD_DEFINED__
#define __IISMimeType_FWD_DEFINED__
typedef interface IISMimeType IISMimeType;
#endif
#ifndef __MimeMap_FWD_DEFINED__
#define __MimeMap_FWD_DEFINED__
typedef struct MimeMap MimeMap;
#endif
#ifndef __IISIPSecurity_FWD_DEFINED__
#define __IISIPSecurity_FWD_DEFINED__
typedef interface IISIPSecurity IISIPSecurity;
#endif
#ifndef __IPSecurity_FWD_DEFINED__
#define __IPSecurity_FWD_DEFINED__
typedef struct IPSecurity IPSecurity;
#endif
#ifndef __IISNamespace_FWD_DEFINED__
#define __IISNamespace_FWD_DEFINED__
typedef struct IISNamespace IISNamespace;
#endif
#ifndef __IISProvider_FWD_DEFINED__
#define __IISProvider_FWD_DEFINED__
typedef struct IISProvider IISProvider;
#endif
#ifndef __IISBaseObject_FWD_DEFINED__
#define __IISBaseObject_FWD_DEFINED__
typedef interface IISBaseObject IISBaseObject;
#endif
#ifndef __IISSchemaObject_FWD_DEFINED__
#define __IISSchemaObject_FWD_DEFINED__
typedef interface IISSchemaObject IISSchemaObject;
#endif
#ifndef __IISPropertyAttribute_FWD_DEFINED__
#define __IISPropertyAttribute_FWD_DEFINED__
typedef interface IISPropertyAttribute IISPropertyAttribute;
#endif
#ifndef __PropertyAttribute_FWD_DEFINED__
#define __PropertyAttribute_FWD_DEFINED__
typedef struct PropertyAttribute PropertyAttribute;
#endif
void __RPC_FAR *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void __RPC_FAR *);
DEFINE_GUID(LIBID_IISOle, 0x49D704A0L, 0x89F7, 0x11D0, 0x85, 0x27, 0x00, 0xC0, 0x4F, 0xD8, 0xD5, 0x03);
DEFINE_GUID(IID_IISBaseObject, 0x4b42e390, 0xe96, 0x11d1, 0x9c, 0x3f, 0x0, 0xa0, 0xc9, 0x22, 0xe7, 0x3);
extern RPC_IF_HANDLE __MIDL_itf_iis_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iis_0000_v0_0_s_ifspec;
#ifndef __IISOle_LIBRARY_DEFINED__
#define __IISOle_LIBRARY_DEFINED__
extern const IID LIBID_IISOle;
#ifndef __IISMimeType_INTERFACE_DEFINED__
#define __IISMimeType_INTERFACE_DEFINED__
extern const IID IID_IISMimeType;
typedef struct IISMimeTypeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * QueryInterface) (IISMimeType __RPC_FAR * This, REFIID riid, void __RPC_FAR * __RPC_FAR * ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * AddRef) (IISMimeType __RPC_FAR * This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * Release) (IISMimeType __RPC_FAR * This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfoCount) (IISMimeType __RPC_FAR * This, UINT __RPC_FAR * pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfo) (IISMimeType __RPC_FAR * This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR * __RPC_FAR * ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetIDsOfNames) (IISMimeType __RPC_FAR * This, REFIID riid, LPOLESTR __RPC_FAR * rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR * rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Invoke) (IISMimeType __RPC_FAR * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR * pDispParams, VARIANT __RPC_FAR * pVarResult, EXCEPINFO __RPC_FAR * pExcepInfo, UINT __RPC_FAR * puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * get_MimeType) (IISMimeType __RPC_FAR * This, BSTR __RPC_FAR * retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * put_MimeType) (IISMimeType __RPC_FAR * This, BSTR bstrMimeType);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * get_Extension) (IISMimeType __RPC_FAR * This, BSTR __RPC_FAR * retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * put_Extension) (IISMimeType __RPC_FAR * This, BSTR bstrExtension);
	END_INTERFACE
}  IISMimeTypeVtbl;
interface IISMimeType
{
	CONST_VTBL struct IISMimeTypeVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IISMimeType_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IISMimeType_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IISMimeType_Release(This)(This)->lpVtbl -> Release(This)
#define IISMimeType_GetTypeInfoCount(This,pctinfo)(This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IISMimeType_GetTypeInfo(This,iTInfo,lcid,ppTInfo)(This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IISMimeType_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)(This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IISMimeType_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)(This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IISMimeType_get_MimeType(This,retval)(This)->lpVtbl -> get_MimeType(This,retval)
#define IISMimeType_put_MimeType(This,bstrMimeType)(This)->lpVtbl -> put_MimeType(This,bstrMimeType)
#define IISMimeType_get_Extension(This,retval)(This)->lpVtbl -> get_Extension(This,retval)
#define IISMimeType_put_Extension(This,bstrExtension)(This)->lpVtbl -> put_Extension(This,bstrExtension)
#endif
HRESULT STDMETHODCALLTYPE IISMimeType_get_MimeType_Proxy(IISMimeType __RPC_FAR *This, BSTR __RPC_FAR *retval);
void __RPC_STUB IISMimeType_get_MimeType_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISMimeType_put_MimeType_Proxy(IISMimeType __RPC_FAR *This, BSTR bstrMimeType);
void __RPC_STUB IISMimeType_put_MimeType_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISMimeType_get_Extension_Proxy(IISMimeType __RPC_FAR *This, BSTR __RPC_FAR *retval);
void __RPC_STUB IISMimeType_get_Extension_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISMimeType_put_Extension_Proxy(IISMimeType __RPC_FAR *This, BSTR bstrExtension);
void __RPC_STUB IISMimeType_put_Extension_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
extern const CLSID CLSID_MimeMap;
#ifndef __IISIPSecurity_INTERFACE_DEFINED__
#define __IISIPSecurity_INTERFACE_DEFINED__
extern const IID IID_IISIPSecurity;
typedef struct IISIPSecurityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IISIPSecurity __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IISIPSecurity __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IISIPSecurity __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IISIPSecurity __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IISIPSecurity __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IISIPSecurity __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IISIPSecurity __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_IPDeny) (IISIPSecurity __RPC_FAR *This, VARIANT __RPC_FAR *retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_IPDeny) (IISIPSecurity __RPC_FAR *This, VARIANT vIPDeny);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_IPGrant) (IISIPSecurity __RPC_FAR *This, VARIANT __RPC_FAR *retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_IPGrant) (IISIPSecurity __RPC_FAR *This, VARIANT vIPGrant);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_DomainDeny) (IISIPSecurity __RPC_FAR *This, VARIANT __RPC_FAR *retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_DomainDeny) (IISIPSecurity __RPC_FAR *This, VARIANT vDomainDeny);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_DomainGrant) (IISIPSecurity __RPC_FAR *This, VARIANT __RPC_FAR *retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_DomainGrant) (IISIPSecurity __RPC_FAR *This, VARIANT vDomainGrant);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_GrantByDefault) (IISIPSecurity __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_GrantByDefault) (IISIPSecurity __RPC_FAR *This, VARIANT_BOOL fGrantByDefault);
	END_INTERFACE
}
IISIPSecurityVtbl;
interface IISIPSecurity
{
	CONST_VTBL struct IISIPSecurityVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IISIPSecurity_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IISIPSecurity_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IISIPSecurity_Release(This)(This)->lpVtbl -> Release(This)
#define IISIPSecurity_GetTypeInfoCount(This,pctinfo)(This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IISIPSecurity_GetTypeInfo(This,iTInfo,lcid,ppTInfo)(This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IISIPSecurity_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)(This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IISIPSecurity_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)(This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IISIPSecurity_get_IPDeny(This,retval)(This)->lpVtbl -> get_IPDeny(This,retval)
#define IISIPSecurity_put_IPDeny(This,vIPDeny)(This)->lpVtbl -> put_IPDeny(This,vIPDeny)
#define IISIPSecurity_get_IPGrant(This,retval)(This)->lpVtbl -> get_IPGrant(This,retval)
#define IISIPSecurity_put_IPGrant(This,vIPGrant)(This)->lpVtbl -> put_IPGrant(This,vIPGrant)
#define IISIPSecurity_get_DomainDeny(This,retval)(This)->lpVtbl -> get_DomainDeny(This,retval)
#define IISIPSecurity_put_DomainDeny(This,vDomainDeny)(This)->lpVtbl -> put_DomainDeny(This,vDomainDeny)
#define IISIPSecurity_get_DomainGrant(This,retval)(This)->lpVtbl -> get_DomainGrant(This,retval)
#define IISIPSecurity_put_DomainGrant(This,vDomainGrant)(This)->lpVtbl -> put_DomainGrant(This,vDomainGrant)
#define IISIPSecurity_get_GrantByDefault(This,retval)(This)->lpVtbl -> get_GrantByDefault(This,retval)
#define IISIPSecurity_put_GrantByDefault(This,fGrantByDefault)(This)->lpVtbl -> put_GrantByDefault(This,fGrantByDefault)
#endif
HRESULT STDMETHODCALLTYPE IISIPSecurity_get_IPDeny_Proxy(IISIPSecurity __RPC_FAR *This, VARIANT __RPC_FAR *retval);
void __RPC_STUB IISIPSecurity_get_IPDeny_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISIPSecurity_put_IPDeny_Proxy(IISIPSecurity __RPC_FAR *This, VARIANT vIPDeny);
void __RPC_STUB IISIPSecurity_put_IPDeny_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISIPSecurity_get_IPGrant_Proxy(IISIPSecurity __RPC_FAR *This, VARIANT __RPC_FAR *retval);
void __RPC_STUB IISIPSecurity_get_IPGrant_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISIPSecurity_put_IPGrant_Proxy(IISIPSecurity __RPC_FAR *This, VARIANT vIPGrant);
void __RPC_STUB IISIPSecurity_put_IPGrant_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISIPSecurity_get_DomainDeny_Proxy(IISIPSecurity __RPC_FAR *This, VARIANT __RPC_FAR *retval);
void __RPC_STUB IISIPSecurity_get_DomainDeny_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISIPSecurity_put_DomainDeny_Proxy(IISIPSecurity __RPC_FAR *This, VARIANT vDomainDeny);
void __RPC_STUB IISIPSecurity_put_DomainDeny_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISIPSecurity_get_DomainGrant_Proxy(IISIPSecurity __RPC_FAR *This, VARIANT __RPC_FAR *retval);
void __RPC_STUB IISIPSecurity_get_DomainGrant_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISIPSecurity_put_DomainGrant_Proxy(IISIPSecurity __RPC_FAR *This, VARIANT vDomainGrant);
void __RPC_STUB IISIPSecurity_put_DomainGrant_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISIPSecurity_get_GrantByDefault_Proxy(IISIPSecurity __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *retval);
void __RPC_STUB IISIPSecurity_get_GrantByDefault_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISIPSecurity_put_GrantByDefault_Proxy(IISIPSecurity __RPC_FAR *This, VARIANT_BOOL fGrantByDefault);
void __RPC_STUB IISIPSecurity_put_GrantByDefault_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
extern const CLSID CLSID_IPSecurity;
extern const CLSID CLSID_IISNamespace;
extern const CLSID CLSID_IISProvider;
#ifndef __IISBaseObject_INTERFACE_DEFINED__
#define __IISBaseObject_INTERFACE_DEFINED__
extern const IID IID_IISBaseObject;
typedef struct IISBaseObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IISBaseObject __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IISBaseObject __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IISBaseObject __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IISBaseObject __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IISBaseObject __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IISBaseObject __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IISBaseObject __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetDataPaths) (IISBaseObject __RPC_FAR *This, BSTR bstrName, LONG lnAttribute, VARIANT __RPC_FAR *pvPaths);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetPropertyAttribObj) (IISBaseObject __RPC_FAR *This, BSTR bstrName, IDispatch __RPC_FAR *__RPC_FAR *ppObject);
	END_INTERFACE
}
IISBaseObjectVtbl;
interface IISBaseObject
{
	CONST_VTBL struct IISBaseObjectVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IISBaseObject_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IISBaseObject_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IISBaseObject_Release(This)(This)->lpVtbl -> Release(This)
#define IISBaseObject_GetTypeInfoCount(This,pctinfo)(This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IISBaseObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)(This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IISBaseObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)(This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IISBaseObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)(This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IISBaseObject_GetDataPaths(This,bstrName,lnAttribute,pvPaths)(This)->lpVtbl -> GetDataPaths(This,bstrName,lnAttribute,pvPaths)
#define IISBaseObject_GetPropertyAttribObj(This,bstrName,ppObject)(This)->lpVtbl -> GetPropertyAttribObj(This,bstrName,ppObject)
#endif
HRESULT STDMETHODCALLTYPE IISBaseObject_GetDataPaths_Proxy(IISBaseObject __RPC_FAR *This, BSTR bstrName, LONG lnAttribute, VARIANT __RPC_FAR *pvPaths);
void __RPC_STUB IISBaseObject_GetDataPaths_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISBaseObject_GetPropertyAttribObj_Proxy(IISBaseObject __RPC_FAR *This, BSTR bstrName, IDispatch __RPC_FAR *__RPC_FAR *ppObject);
void __RPC_STUB IISBaseObject_GetPropertyAttribObj_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IISSchemaObject_INTERFACE_DEFINED__
#define __IISSchemaObject_INTERFACE_DEFINED__
extern const IID IID_IISSchemaObject;
typedef struct IISSchemaObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IISSchemaObject __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IISSchemaObject __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IISSchemaObject __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IISSchemaObject __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IISSchemaObject __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IISSchemaObject __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IISSchemaObject __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetSchemaPropertyAttributes) (IISSchemaObject __RPC_FAR *This, BSTR bstrName, IDispatch __RPC_FAR *__RPC_FAR *ppObject);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *PutSchemaPropertyAttributes) (IISSchemaObject __RPC_FAR *This, IDispatch __RPC_FAR *pObject);
	END_INTERFACE
}
IISSchemaObjectVtbl;
interface IISSchemaObject
{
	CONST_VTBL struct IISSchemaObjectVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IISSchemaObject_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IISSchemaObject_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IISSchemaObject_Release(This)(This)->lpVtbl -> Release(This)
#define IISSchemaObject_GetTypeInfoCount(This,pctinfo)(This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IISSchemaObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)(This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IISSchemaObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)(This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IISSchemaObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)(This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IISSchemaObject_GetSchemaPropertyAttributes(This,bstrName,ppObject)(This)->lpVtbl -> GetSchemaPropertyAttributes(This,bstrName,ppObject)
#define IISSchemaObject_PutSchemaPropertyAttributes(This,pObject)(This)->lpVtbl -> PutSchemaPropertyAttributes(This,pObject)
#endif
HRESULT STDMETHODCALLTYPE IISSchemaObject_GetSchemaPropertyAttributes_Proxy(IISSchemaObject __RPC_FAR *This, BSTR bstrName, IDispatch __RPC_FAR *__RPC_FAR *ppObject);
void __RPC_STUB IISSchemaObject_GetSchemaPropertyAttributes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISSchemaObject_PutSchemaPropertyAttributes_Proxy(IISSchemaObject __RPC_FAR *This, IDispatch __RPC_FAR *pObject);
void __RPC_STUB IISSchemaObject_PutSchemaPropertyAttributes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IISPropertyAttribute_INTERFACE_DEFINED__
#define __IISPropertyAttribute_INTERFACE_DEFINED__
extern const IID IID_IISPropertyAttribute;
typedef struct IISPropertyAttributeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IISPropertyAttribute __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IISPropertyAttribute __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IISPropertyAttribute __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IISPropertyAttribute __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IISPropertyAttribute __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IISPropertyAttribute __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IISPropertyAttribute __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_PropName) (IISPropertyAttribute __RPC_FAR *This, BSTR __RPC_FAR *retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_MetaId) (IISPropertyAttribute __RPC_FAR *This, long __RPC_FAR *retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_MetaId) (IISPropertyAttribute __RPC_FAR *This, long lnMetaId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_UserType) (IISPropertyAttribute __RPC_FAR *This, long __RPC_FAR *retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_UserType) (IISPropertyAttribute __RPC_FAR *This, long lnUserType);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_AllAttributes) (IISPropertyAttribute __RPC_FAR *This, long __RPC_FAR *retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Inherit) (IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Inherit) (IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL fInherit);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Secure) (IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Secure) (IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL fSecure);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Reference) (IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Reference) (IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL fReference);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Volatile) (IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Volatile) (IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL fVolatile);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Isinherit) (IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Default) (IISPropertyAttribute __RPC_FAR *This, VARIANT __RPC_FAR *retval);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Default) (IISPropertyAttribute __RPC_FAR *This, VARIANT vDefault);
	END_INTERFACE
}
IISPropertyAttributeVtbl;
interface IISPropertyAttribute
{
	CONST_VTBL struct IISPropertyAttributeVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IISPropertyAttribute_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IISPropertyAttribute_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IISPropertyAttribute_Release(This)(This)->lpVtbl -> Release(This)
#define IISPropertyAttribute_GetTypeInfoCount(This,pctinfo)(This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IISPropertyAttribute_GetTypeInfo(This,iTInfo,lcid,ppTInfo)(This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IISPropertyAttribute_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)(This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IISPropertyAttribute_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)(This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IISPropertyAttribute_get_PropName(This,retval)(This)->lpVtbl -> get_PropName(This,retval)
#define IISPropertyAttribute_get_MetaId(This,retval)(This)->lpVtbl -> get_MetaId(This,retval)
#define IISPropertyAttribute_put_MetaId(This,lnMetaId)(This)->lpVtbl -> put_MetaId(This,lnMetaId)
#define IISPropertyAttribute_get_UserType(This,retval)(This)->lpVtbl -> get_UserType(This,retval)
#define IISPropertyAttribute_put_UserType(This,lnUserType)(This)->lpVtbl -> put_UserType(This,lnUserType)
#define IISPropertyAttribute_get_AllAttributes(This,retval)(This)->lpVtbl -> get_AllAttributes(This,retval)
#define IISPropertyAttribute_get_Inherit(This,retval)(This)->lpVtbl -> get_Inherit(This,retval)
#define IISPropertyAttribute_put_Inherit(This,fInherit)(This)->lpVtbl -> put_Inherit(This,fInherit)
#define IISPropertyAttribute_get_Secure(This,retval)(This)->lpVtbl -> get_Secure(This,retval)
#define IISPropertyAttribute_put_Secure(This,fSecure)(This)->lpVtbl -> put_Secure(This,fSecure)
#define IISPropertyAttribute_get_Reference(This,retval)(This)->lpVtbl -> get_Reference(This,retval)
#define IISPropertyAttribute_put_Reference(This,fReference)(This)->lpVtbl -> put_Reference(This,fReference)
#define IISPropertyAttribute_get_Volatile(This,retval)(This)->lpVtbl -> get_Volatile(This,retval)
#define IISPropertyAttribute_put_Volatile(This,fVolatile)(This)->lpVtbl -> put_Volatile(This,fVolatile)
#define IISPropertyAttribute_get_Isinherit(This,retval)(This)->lpVtbl -> get_Isinherit(This,retval)
#define IISPropertyAttribute_get_Default(This,retval)(This)->lpVtbl -> get_Default(This,retval)
#define IISPropertyAttribute_put_Default(This,vDefault)(This)->lpVtbl -> put_Default(This,vDefault)
#endif
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_get_PropName_Proxy(IISPropertyAttribute __RPC_FAR *This, BSTR __RPC_FAR *retval);
void __RPC_STUB IISPropertyAttribute_get_PropName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_get_MetaId_Proxy(IISPropertyAttribute __RPC_FAR *This, long __RPC_FAR *retval);
void __RPC_STUB IISPropertyAttribute_get_MetaId_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_put_MetaId_Proxy(IISPropertyAttribute __RPC_FAR *This, long lnMetaId);
void __RPC_STUB IISPropertyAttribute_put_MetaId_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_get_UserType_Proxy(IISPropertyAttribute __RPC_FAR *This, long __RPC_FAR *retval);
void __RPC_STUB IISPropertyAttribute_get_UserType_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_put_UserType_Proxy(IISPropertyAttribute __RPC_FAR *This, long lnUserType);
void __RPC_STUB IISPropertyAttribute_put_UserType_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_get_AllAttributes_Proxy(IISPropertyAttribute __RPC_FAR *This, long __RPC_FAR *retval);
void __RPC_STUB IISPropertyAttribute_get_AllAttributes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_get_Inherit_Proxy(IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *retval);
void __RPC_STUB IISPropertyAttribute_get_Inherit_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_put_Inherit_Proxy(IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL fInherit);
void __RPC_STUB IISPropertyAttribute_put_Inherit_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_get_Secure_Proxy(IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *retval);
void __RPC_STUB IISPropertyAttribute_get_Secure_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_put_Secure_Proxy(IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL fSecure);
void __RPC_STUB IISPropertyAttribute_put_Secure_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_get_Reference_Proxy(IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *retval);
void __RPC_STUB IISPropertyAttribute_get_Reference_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_put_Reference_Proxy(IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL fReference);
void __RPC_STUB IISPropertyAttribute_put_Reference_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_get_Volatile_Proxy(IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *retval);
void __RPC_STUB IISPropertyAttribute_get_Volatile_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_put_Volatile_Proxy(IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL fVolatile);
void __RPC_STUB IISPropertyAttribute_put_Volatile_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_get_Isinherit_Proxy(IISPropertyAttribute __RPC_FAR *This, VARIANT_BOOL __RPC_FAR *retval);
void __RPC_STUB IISPropertyAttribute_get_Isinherit_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_get_Default_Proxy(IISPropertyAttribute __RPC_FAR *This, VARIANT __RPC_FAR *retval);
void __RPC_STUB IISPropertyAttribute_get_Default_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IISPropertyAttribute_put_Default_Proxy(IISPropertyAttribute __RPC_FAR *This, VARIANT vDefault);
void __RPC_STUB IISPropertyAttribute_put_Default_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
extern const CLSID CLSID_PropertyAttribute;
#endif
#endif
