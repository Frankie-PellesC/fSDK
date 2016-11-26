/*+@@file@@----------------------------------------------------------------*//*!
 \file		DispEx.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Wed Jul  6 13:11:47 2016
 \date		Modified on Wed Jul  6 13:11:47 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __dispex_h__
#define __dispex_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDispatchEx_FWD_DEFINED__
#define __IDispatchEx_FWD_DEFINED__
typedef interface IDispatchEx IDispatchEx;
#endif
#ifndef __IDispError_FWD_DEFINED__
#define __IDispError_FWD_DEFINED__
typedef interface IDispError IDispError;
#endif
#ifndef __IVariantChangeType_FWD_DEFINED__
#define __IVariantChangeType_FWD_DEFINED__
typedef interface IVariantChangeType IVariantChangeType;
#endif
#ifndef __IObjectIdentity_FWD_DEFINED__
#define __IObjectIdentity_FWD_DEFINED__
typedef interface IObjectIdentity IObjectIdentity;
#endif
#ifndef __IProvideRuntimeContext_FWD_DEFINED__
#define __IProvideRuntimeContext_FWD_DEFINED__
typedef interface IProvideRuntimeContext IProvideRuntimeContext;
#endif
#include <ocidl.h>
#pragma comment(lib,"uuid.lib")
#ifndef DISPEX_H_
#define DISPEX_H_
#include <servprov.h>
#ifndef _NO_DISPATCHEX_GUIDS
DEFINE_GUID(IID_IDispatchEx, 0xa6ef9860, 0xc720, 0x11d0, 0x93, 0x37, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);
DEFINE_GUID(IID_IDispError, 0xa6ef9861, 0xc720, 0x11d0, 0x93, 0x37, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);
DEFINE_GUID(IID_IVariantChangeType, 0xa6ef9862, 0xc720, 0x11d0, 0x93, 0x37, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);
DEFINE_GUID(SID_VariantConversion, 0x1f101481, 0xbccd, 0x11d0, 0x93, 0x36, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);
DEFINE_GUID(SID_GetCaller, 0x4717cc40, 0xbcb9, 0x11d0, 0x93, 0x36, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);
DEFINE_GUID(SID_ProvideRuntimeContext, 0x74a5040c, 0xdd0c, 0x48f0, 0xac, 0x85, 0x19, 0x4c, 0x32, 0x59, 0x18, 0xa);
DEFINE_GUID(IID_IProvideRuntimeContext, 0x10e2414a, 0xec59, 0x49d2, 0xbc, 0x51, 0x5a, 0xdd, 0x2c, 0x36, 0xfe, 0xbc);
DEFINE_GUID(IID_IObjectIdentity, 0xca04b7e6, 0xd21, 0x11d1, 0x8c, 0xc5, 0x0, 0xc0, 0x4f, 0xc2, 0xb0, 0x85);
#define SID_GetScriptSite IID_IActiveScriptSite
#endif
#ifndef _NO_DISPATCHEX_CONSTS
#define fdexNameCaseSensitive       0x00000001L
#define fdexNameEnsure              0x00000002L
#define fdexNameImplicit            0x00000004L
#define fdexNameCaseInsensitive     0x00000008L
#define fdexNameInternal            0x00000010L
#define fdexNameNoDynamicProperties 0x00000020L
#define fdexPropCanGet              0x00000001L
#define fdexPropCannotGet           0x00000002L
#define fdexPropCanPut              0x00000004L
#define fdexPropCannotPut           0x00000008L
#define fdexPropCanPutRef           0x00000010L
#define fdexPropCannotPutRef        0x00000020L
#define fdexPropNoSideEffects       0x00000040L
#define fdexPropDynamicType         0x00000080L
#define fdexPropCanCall             0x00000100L
#define fdexPropCannotCall          0x00000200L
#define fdexPropCanConstruct        0x00000400L
#define fdexPropCannotConstruct     0x00000800L
#define fdexPropCanSourceEvents     0x00001000L
#define fdexPropCannotSourceEvents  0x00002000L
#define grfdexPropCanAll	(fdexPropCanGet | fdexPropCanPut | fdexPropCanPutRef |fdexPropCanCall | fdexPropCanConstruct | fdexPropCanSourceEvents)
#define grfdexPropCannotAll	(fdexPropCannotGet | fdexPropCannotPut | fdexPropCannotPutRef |fdexPropCannotCall | fdexPropCannotConstruct | fdexPropCannotSourceEvents)
#define grfdexPropExtraAll	(fdexPropNoSideEffects | fdexPropDynamicType)
#define grfdexPropAll		(grfdexPropCanAll | grfdexPropCannotAll | grfdexPropExtraAll)
#define fdexEnumDefault             0x00000001L
#define fdexEnumAll                 0x00000002L
#define DISPATCH_CONSTRUCT 0x4000
#define DISPID_THIS (-613)
#define DISPID_STARTENUM DISPID_UNKNOWN
#endif
extern RPC_IF_HANDLE __MIDL_itf_dispex_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dispex_0000_0000_v0_0_s_ifspec;
#ifndef __IDispatchEx_INTERFACE_DEFINED__
#define __IDispatchEx_INTERFACE_DEFINED__
extern const IID IID_IDispatchEx;
typedef struct IDispatchExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDispatchEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDispatchEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDispatchEx * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDispatchEx * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDispatchEx * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDispatchEx * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDispatchEx * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetDispID) (IDispatchEx * This, BSTR bstrName, DWORD grfdex, DISPID * pid);
	HRESULT(STDMETHODCALLTYPE * InvokeEx) (IDispatchEx * This, DISPID id, LCID lcid, WORD wFlags, DISPPARAMS * pdp, VARIANT * pvarRes, EXCEPINFO * pei, IServiceProvider * pspCaller);
	HRESULT(STDMETHODCALLTYPE * DeleteMemberByName) (IDispatchEx * This, BSTR bstrName, DWORD grfdex);
	HRESULT(STDMETHODCALLTYPE * DeleteMemberByDispID) (IDispatchEx * This, DISPID id);
	HRESULT(STDMETHODCALLTYPE * GetMemberProperties) (IDispatchEx * This, DISPID id, DWORD grfdexFetch, DWORD * pgrfdex);
	HRESULT(STDMETHODCALLTYPE * GetMemberName) (IDispatchEx * This, DISPID id, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetNextDispID) (IDispatchEx * This, DWORD grfdex, DISPID id, DISPID * pid);
	HRESULT(STDMETHODCALLTYPE * GetNameSpaceParent) (IDispatchEx * This, IUnknown ** ppunk);
	END_INTERFACE
}  IDispatchExVtbl;
interface IDispatchEx
{
	CONST_VTBL struct IDispatchExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDispatchEx_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDispatchEx_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDispatchEx_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDispatchEx_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDispatchEx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDispatchEx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDispatchEx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDispatchEx_GetDispID(This,bstrName,grfdex,pid)( (This)->lpVtbl -> GetDispID(This,bstrName,grfdex,pid) )
#define IDispatchEx_InvokeEx(This,id,lcid,wFlags,pdp,pvarRes,pei,pspCaller)( (This)->lpVtbl -> InvokeEx(This,id,lcid,wFlags,pdp,pvarRes,pei,pspCaller) )
#define IDispatchEx_DeleteMemberByName(This,bstrName,grfdex)( (This)->lpVtbl -> DeleteMemberByName(This,bstrName,grfdex) )
#define IDispatchEx_DeleteMemberByDispID(This,id)( (This)->lpVtbl -> DeleteMemberByDispID(This,id) )
#define IDispatchEx_GetMemberProperties(This,id,grfdexFetch,pgrfdex)( (This)->lpVtbl -> GetMemberProperties(This,id,grfdexFetch,pgrfdex) )
#define IDispatchEx_GetMemberName(This,id,pbstrName)( (This)->lpVtbl -> GetMemberName(This,id,pbstrName) )
#define IDispatchEx_GetNextDispID(This,grfdex,id,pid)( (This)->lpVtbl -> GetNextDispID(This,grfdex,id,pid) )
#define IDispatchEx_GetNameSpaceParent(This,ppunk)( (This)->lpVtbl -> GetNameSpaceParent(This,ppunk) )
#endif
HRESULT STDMETHODCALLTYPE IDispatchEx_RemoteInvokeEx_Proxy(IDispatchEx *This, DISPID id, LCID lcid, DWORD dwFlags, DISPPARAMS *pdp, VARIANT *pvarRes, EXCEPINFO *pei, IServiceProvider *pspCaller, UINT cvarRefArg, UINT *rgiRefArg, VARIANT *rgvarRefArg);
void __RPC_STUB IDispatchEx_RemoteInvokeEx_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IDispError_INTERFACE_DEFINED__
#define __IDispError_INTERFACE_DEFINED__
extern const IID IID_IDispError;
typedef struct IDispErrorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDispError *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDispError *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDispError *This);
	HRESULT(STDMETHODCALLTYPE *QueryErrorInfo) (IDispError *This, GUID guidErrorType, IDispError **ppde);
	HRESULT(STDMETHODCALLTYPE *GetNext) (IDispError *This, IDispError **ppde);
	HRESULT(STDMETHODCALLTYPE *GetHresult) (IDispError *This, HRESULT *phr);
	HRESULT(STDMETHODCALLTYPE *GetSource) (IDispError *This, BSTR *pbstrSource);
	HRESULT(STDMETHODCALLTYPE *GetHelpInfo) (IDispError *This, BSTR *pbstrFileName, DWORD *pdwContext);
	HRESULT(STDMETHODCALLTYPE *GetDescription) (IDispError *This, BSTR *pbstrDescription);
	END_INTERFACE
} 
IDispErrorVtbl;
interface IDispError
{
	CONST_VTBL struct IDispErrorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDispError_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDispError_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDispError_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDispError_QueryErrorInfo(This,guidErrorType,ppde)( (This)->lpVtbl -> QueryErrorInfo(This,guidErrorType,ppde) )
#define IDispError_GetNext(This,ppde)( (This)->lpVtbl -> GetNext(This,ppde) )
#define IDispError_GetHresult(This,phr)( (This)->lpVtbl -> GetHresult(This,phr) )
#define IDispError_GetSource(This,pbstrSource)( (This)->lpVtbl -> GetSource(This,pbstrSource) )
#define IDispError_GetHelpInfo(This,pbstrFileName,pdwContext)( (This)->lpVtbl -> GetHelpInfo(This,pbstrFileName,pdwContext) )
#define IDispError_GetDescription(This,pbstrDescription)( (This)->lpVtbl -> GetDescription(This,pbstrDescription) )
#endif
#endif
#ifndef __IVariantChangeType_INTERFACE_DEFINED__
#define __IVariantChangeType_INTERFACE_DEFINED__
extern const IID IID_IVariantChangeType;
typedef struct IVariantChangeTypeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVariantChangeType *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVariantChangeType *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVariantChangeType *This);
	HRESULT(STDMETHODCALLTYPE *ChangeType) (IVariantChangeType *This, VARIANT *pvarDst, VARIANT *pvarSrc, LCID lcid, VARTYPE vtNew);
	END_INTERFACE
} 
IVariantChangeTypeVtbl;
interface IVariantChangeType
{
	CONST_VTBL struct IVariantChangeTypeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVariantChangeType_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVariantChangeType_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IVariantChangeType_Release(This)( (This)->lpVtbl -> Release(This) )
#define IVariantChangeType_ChangeType(This,pvarDst,pvarSrc,lcid,vtNew)( (This)->lpVtbl -> ChangeType(This,pvarDst,pvarSrc,lcid,vtNew) )
#endif
#endif
#ifndef __IObjectIdentity_INTERFACE_DEFINED__
#define __IObjectIdentity_INTERFACE_DEFINED__
extern const IID IID_IObjectIdentity;
typedef struct IObjectIdentityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IObjectIdentity *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IObjectIdentity *This);
	ULONG(STDMETHODCALLTYPE *Release) (IObjectIdentity *This);
	HRESULT(STDMETHODCALLTYPE *IsEqualObject) (IObjectIdentity *This, IUnknown *punk);
	END_INTERFACE
} 
IObjectIdentityVtbl;
interface IObjectIdentity
{
	CONST_VTBL struct IObjectIdentityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectIdentity_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectIdentity_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectIdentity_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectIdentity_IsEqualObject(This,punk)( (This)->lpVtbl -> IsEqualObject(This,punk) )
#endif
#endif
#ifndef __IProvideRuntimeContext_INTERFACE_DEFINED__
#define __IProvideRuntimeContext_INTERFACE_DEFINED__
extern const IID IID_IProvideRuntimeContext;
typedef struct IProvideRuntimeContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IProvideRuntimeContext *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IProvideRuntimeContext *This);
	ULONG(STDMETHODCALLTYPE *Release) (IProvideRuntimeContext *This);
	HRESULT(STDMETHODCALLTYPE *GetCurrentSourceContext) (IProvideRuntimeContext *This, DWORD_PTR *pdwContext, VARIANT_BOOL *pfExecutingGlobalCode);
	END_INTERFACE
} 
IProvideRuntimeContextVtbl;
interface IProvideRuntimeContext
{
	CONST_VTBL struct IProvideRuntimeContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProvideRuntimeContext_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProvideRuntimeContext_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IProvideRuntimeContext_Release(This)( (This)->lpVtbl -> Release(This) )
#define IProvideRuntimeContext_GetCurrentSourceContext(This,pdwContext,pfExecutingGlobalCode)( (This)->lpVtbl -> GetCurrentSourceContext(This,pdwContext,pfExecutingGlobalCode) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_dispex_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dispex_0000_0005_v0_0_s_ifspec;
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
HRESULT STDMETHODCALLTYPE IDispatchEx_InvokeEx_Proxy(IDispatchEx *This, DISPID id, LCID lcid, WORD wFlags, DISPPARAMS *pdp, VARIANT *pvarRes, EXCEPINFO *pei, IServiceProvider *pspCaller);
HRESULT STDMETHODCALLTYPE IDispatchEx_InvokeEx_Stub(IDispatchEx *This, DISPID id, LCID lcid, DWORD dwFlags, DISPPARAMS *pdp, VARIANT *pvarRes, EXCEPINFO *pei, IServiceProvider *pspCaller, UINT cvarRefArg, UINT *rgiRefArg, VARIANT *rgvarRefArg);
#endif
