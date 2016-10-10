/*+@@file@@----------------------------------------------------------------*//*!
 \file		corrEngine.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 11:52:55 2016
 \date		Modified on Mon Jul  4 11:52:55 2016
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
#ifndef __correngine_h__
#define __correngine_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICorrelationEngine_FWD_DEFINED__
#define __ICorrelationEngine_FWD_DEFINED__
typedef interface ICorrelationEngine ICorrelationEngine;
#endif
#ifndef __CorrelationEngine_FWD_DEFINED__
#define __CorrelationEngine_FWD_DEFINED__
typedef struct CorrelationEngine CorrelationEngine;
#endif
#include "oaidl.h"
#include "ocidl.h"
extern RPC_IF_HANDLE __MIDL_itf_correngine_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_correngine_0000_0000_v0_0_s_ifspec;
#ifndef __ICorrelationEngine_INTERFACE_DEFINED__
#define __ICorrelationEngine_INTERFACE_DEFINED__
extern const IID IID_ICorrelationEngine;
typedef struct ICorrelationEngineVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorrelationEngine * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorrelationEngine * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorrelationEngine * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICorrelationEngine * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICorrelationEngine * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICorrelationEngine * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICorrelationEngine * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_RetainGlobalEvents) (ICorrelationEngine * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_RetainGlobalEvents) (ICorrelationEngine * This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * Filter) (ICorrelationEngine * This, BSTR InputTraceFile, BSTR OutputTraceFile, BSTR FilterActivityId);
	HRESULT(STDMETHODCALLTYPE * Normalize) (ICorrelationEngine * This, BSTR InputTraceFile, BSTR OutputTraceFile);
	HRESULT(STDMETHODCALLTYPE * get_RetainPII) (ICorrelationEngine * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_RetainPII) (ICorrelationEngine * This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_RetainCorrelationEvents) (ICorrelationEngine * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_RetainCorrelationEvents) (ICorrelationEngine * This, VARIANT_BOOL newVal);
	END_INTERFACE
}  ICorrelationEngineVtbl;
interface ICorrelationEngine
{
	CONST_VTBL struct ICorrelationEngineVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorrelationEngine_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorrelationEngine_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorrelationEngine_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorrelationEngine_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICorrelationEngine_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICorrelationEngine_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICorrelationEngine_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICorrelationEngine_get_RetainGlobalEvents(This,pVal)( (This)->lpVtbl -> get_RetainGlobalEvents(This,pVal) )
#define ICorrelationEngine_put_RetainGlobalEvents(This,newVal)( (This)->lpVtbl -> put_RetainGlobalEvents(This,newVal) )
#define ICorrelationEngine_Filter(This,InputTraceFile,OutputTraceFile,FilterActivityId)( (This)->lpVtbl -> Filter(This,InputTraceFile,OutputTraceFile,FilterActivityId) )
#define ICorrelationEngine_Normalize(This,InputTraceFile,OutputTraceFile)( (This)->lpVtbl -> Normalize(This,InputTraceFile,OutputTraceFile) )
#define ICorrelationEngine_get_RetainPII(This,pVal)( (This)->lpVtbl -> get_RetainPII(This,pVal) )
#define ICorrelationEngine_put_RetainPII(This,newVal)( (This)->lpVtbl -> put_RetainPII(This,newVal) )
#define ICorrelationEngine_get_RetainCorrelationEvents(This,pVal)( (This)->lpVtbl -> get_RetainCorrelationEvents(This,pVal) )
#define ICorrelationEngine_put_RetainCorrelationEvents(This,newVal)( (This)->lpVtbl -> put_RetainCorrelationEvents(This,newVal) )
#endif
#endif
#ifndef __CorrEngineLib_LIBRARY_DEFINED__
#define __CorrEngineLib_LIBRARY_DEFINED__
extern const IID LIBID_CorrEngineLib;
extern const CLSID CLSID_CorrelationEngine;
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
