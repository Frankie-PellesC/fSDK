/*+@@file@@----------------------------------------------------------------*//*!
 \file		StructuredQueryCondition.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jun 28 19:34:03 2016
 \date		Modified on Tue Jun 28 19:34:03 2016
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
#ifndef __structuredquerycondition_h__
#define __structuredquerycondition_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IRichChunk_FWD_DEFINED__
#define __IRichChunk_FWD_DEFINED__
typedef interface IRichChunk IRichChunk;
#endif
#ifndef __ICondition_FWD_DEFINED__
#define __ICondition_FWD_DEFINED__
typedef interface ICondition ICondition;
#endif
#ifndef __ICondition2_FWD_DEFINED__
#define __ICondition2_FWD_DEFINED__
typedef interface ICondition2 ICondition2;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <propidl.h>
typedef enum tagCONDITION_TYPE
{
	CT_AND_CONDITION = 0,
	CT_OR_CONDITION = (CT_AND_CONDITION + 1),
	CT_NOT_CONDITION = (CT_OR_CONDITION + 1),
	CT_LEAF_CONDITION = (CT_NOT_CONDITION + 1)
} CONDITION_TYPE;
typedef enum tagCONDITION_OPERATION
{
	COP_IMPLICIT = 0,
	COP_EQUAL = (COP_IMPLICIT + 1),
	COP_NOTEQUAL = (COP_EQUAL + 1),
	COP_LESSTHAN = (COP_NOTEQUAL + 1),
	COP_GREATERTHAN = (COP_LESSTHAN + 1),
	COP_LESSTHANOREQUAL = (COP_GREATERTHAN + 1),
	COP_GREATERTHANOREQUAL = (COP_LESSTHANOREQUAL + 1),
	COP_VALUE_STARTSWITH = (COP_GREATERTHANOREQUAL + 1),
	COP_VALUE_ENDSWITH = (COP_VALUE_STARTSWITH + 1),
	COP_VALUE_CONTAINS = (COP_VALUE_ENDSWITH + 1),
	COP_VALUE_NOTCONTAINS = (COP_VALUE_CONTAINS + 1),
	COP_DOSWILDCARDS = (COP_VALUE_NOTCONTAINS + 1),
	COP_WORD_EQUAL = (COP_DOSWILDCARDS + 1),
	COP_WORD_STARTSWITH = (COP_WORD_EQUAL + 1),
	COP_APPLICATION_SPECIFIC = (COP_WORD_STARTSWITH + 1)
} CONDITION_OPERATION;
extern RPC_IF_HANDLE __MIDL_itf_structuredquerycondition_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquerycondition_0000_0000_v0_0_s_ifspec;
#ifndef __IRichChunk_INTERFACE_DEFINED__
#define __IRichChunk_INTERFACE_DEFINED__
extern const IID IID_IRichChunk;
typedef struct IRichChunkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRichChunk * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRichChunk * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRichChunk * This);
	HRESULT(STDMETHODCALLTYPE * GetData) (IRichChunk * This, ULONG * pFirstPos, ULONG * pLength, LPWSTR * ppsz, PROPVARIANT * pValue);
	END_INTERFACE
} IRichChunkVtbl;
interface IRichChunk
{
	CONST_VTBL struct IRichChunkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRichChunk_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRichChunk_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRichChunk_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRichChunk_GetData(This,pFirstPos,pLength,ppsz,pValue)    ( (This)->lpVtbl -> GetData(This,pFirstPos,pLength,ppsz,pValue) )
#endif
HRESULT STDMETHODCALLTYPE IRichChunk_RemoteGetData_Proxy(IRichChunk *This, ULONG *pFirstPos, ULONG *pLength, LPWSTR *ppsz, PROPVARIANT *pValue);
void __RPC_STUB IRichChunk_RemoteGetData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ICondition_INTERFACE_DEFINED__
#define __ICondition_INTERFACE_DEFINED__
extern const IID IID_ICondition;
typedef struct IConditionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICondition *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICondition *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICondition *This);
	HRESULT(STDMETHODCALLTYPE *GetClassID) (ICondition *This, CLSID *pClassID);
	HRESULT(STDMETHODCALLTYPE *IsDirty) (ICondition *This);
	HRESULT(STDMETHODCALLTYPE *Load) (ICondition *This, IStream *pStm);
	HRESULT(STDMETHODCALLTYPE *Save) (ICondition *This, IStream *pStm, BOOL fClearDirty);
	HRESULT(STDMETHODCALLTYPE *GetSizeMax) (ICondition *This, ULARGE_INTEGER *pcbSize);
	HRESULT(STDMETHODCALLTYPE *GetConditionType) (ICondition *This, CONDITION_TYPE *pNodeType);
	HRESULT(STDMETHODCALLTYPE *GetSubConditions) (ICondition *This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE *GetComparisonInfo) (ICondition *This, LPWSTR *ppszPropertyName, CONDITION_OPERATION *pcop, PROPVARIANT *ppropvar);
	HRESULT(STDMETHODCALLTYPE *GetValueType) (ICondition *This, LPWSTR *ppszValueTypeName);
	HRESULT(STDMETHODCALLTYPE *GetValueNormalization) (ICondition *This, LPWSTR *ppszNormalization);
	HRESULT(STDMETHODCALLTYPE *GetInputTerms) (ICondition *This, IRichChunk **ppPropertyTerm, IRichChunk **ppOperationTerm, IRichChunk **ppValueTerm);
	HRESULT(STDMETHODCALLTYPE *Clone) (ICondition *This, ICondition **ppc);
	END_INTERFACE
} IConditionVtbl;
interface ICondition
{
	CONST_VTBL struct IConditionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICondition_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICondition_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICondition_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICondition_GetClassID(This,pClassID)    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
#define ICondition_IsDirty(This)    ( (This)->lpVtbl -> IsDirty(This) )
#define ICondition_Load(This,pStm)    ( (This)->lpVtbl -> Load(This,pStm) )
#define ICondition_Save(This,pStm,fClearDirty)    ( (This)->lpVtbl -> Save(This,pStm,fClearDirty) )
#define ICondition_GetSizeMax(This,pcbSize)    ( (This)->lpVtbl -> GetSizeMax(This,pcbSize) )
#define ICondition_GetConditionType(This,pNodeType)    ( (This)->lpVtbl -> GetConditionType(This,pNodeType) )
#define ICondition_GetSubConditions(This,riid,ppv)    ( (This)->lpVtbl -> GetSubConditions(This,riid,ppv) )
#define ICondition_GetComparisonInfo(This,ppszPropertyName,pcop,ppropvar)    ( (This)->lpVtbl -> GetComparisonInfo(This,ppszPropertyName,pcop,ppropvar) )
#define ICondition_GetValueType(This,ppszValueTypeName)    ( (This)->lpVtbl -> GetValueType(This,ppszValueTypeName) )
#define ICondition_GetValueNormalization(This,ppszNormalization)    ( (This)->lpVtbl -> GetValueNormalization(This,ppszNormalization) )
#define ICondition_GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm)    ( (This)->lpVtbl -> GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm) )
#define ICondition_Clone(This,ppc)    ( (This)->lpVtbl -> Clone(This,ppc) )
#endif
HRESULT STDMETHODCALLTYPE ICondition_RemoteGetComparisonInfo_Proxy(ICondition *This, LPWSTR *ppszPropertyName, CONDITION_OPERATION *pcop, PROPVARIANT *ppropvar);
void __RPC_STUB ICondition_RemoteGetComparisonInfo_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICondition_RemoteGetInputTerms_Proxy(ICondition *This, IRichChunk **ppPropertyTerm, IRichChunk **ppOperationTerm, IRichChunk **ppValueTerm);
void __RPC_STUB ICondition_RemoteGetInputTerms_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ICondition2_INTERFACE_DEFINED__
#define __ICondition2_INTERFACE_DEFINED__
extern const IID IID_ICondition2;
typedef struct ICondition2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICondition2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICondition2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICondition2 *This);
	HRESULT(STDMETHODCALLTYPE *GetClassID) (ICondition2 *This, CLSID *pClassID);
	HRESULT(STDMETHODCALLTYPE *IsDirty) (ICondition2 *This);
	HRESULT(STDMETHODCALLTYPE *Load) (ICondition2 *This, IStream *pStm);
	HRESULT(STDMETHODCALLTYPE *Save) (ICondition2 *This, IStream *pStm, BOOL fClearDirty);
	HRESULT(STDMETHODCALLTYPE *GetSizeMax) (ICondition2 *This, ULARGE_INTEGER *pcbSize);
	HRESULT(STDMETHODCALLTYPE *GetConditionType) (ICondition2 *This, CONDITION_TYPE *pNodeType);
	HRESULT(STDMETHODCALLTYPE *GetSubConditions) (ICondition2 *This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE *GetComparisonInfo) (ICondition2 *This, LPWSTR *ppszPropertyName, CONDITION_OPERATION *pcop, PROPVARIANT *ppropvar);
	HRESULT(STDMETHODCALLTYPE *GetValueType) (ICondition2 *This, LPWSTR *ppszValueTypeName);
	HRESULT(STDMETHODCALLTYPE *GetValueNormalization) (ICondition2 *This, LPWSTR *ppszNormalization);
	HRESULT(STDMETHODCALLTYPE *GetInputTerms) (ICondition2 *This, IRichChunk **ppPropertyTerm, IRichChunk **ppOperationTerm, IRichChunk **ppValueTerm);
	HRESULT(STDMETHODCALLTYPE *Clone) (ICondition2 *This, ICondition **ppc);
	HRESULT(STDMETHODCALLTYPE *GetLocale) (ICondition2 *This, LPWSTR *ppszLocaleName);
	HRESULT(STDMETHODCALLTYPE *GetLeafConditionInfo) (ICondition2 *This, PROPERTYKEY *ppropkey, CONDITION_OPERATION *pcop, PROPVARIANT *ppropvar);
	END_INTERFACE
} ICondition2Vtbl;
interface ICondition2
{
	CONST_VTBL struct ICondition2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICondition2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICondition2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICondition2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICondition2_GetClassID(This,pClassID)    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
#define ICondition2_IsDirty(This)    ( (This)->lpVtbl -> IsDirty(This) )
#define ICondition2_Load(This,pStm)    ( (This)->lpVtbl -> Load(This,pStm) )
#define ICondition2_Save(This,pStm,fClearDirty)    ( (This)->lpVtbl -> Save(This,pStm,fClearDirty) )
#define ICondition2_GetSizeMax(This,pcbSize)    ( (This)->lpVtbl -> GetSizeMax(This,pcbSize) )
#define ICondition2_GetConditionType(This,pNodeType)    ( (This)->lpVtbl -> GetConditionType(This,pNodeType) )
#define ICondition2_GetSubConditions(This,riid,ppv)    ( (This)->lpVtbl -> GetSubConditions(This,riid,ppv) )
#define ICondition2_GetComparisonInfo(This,ppszPropertyName,pcop,ppropvar)    ( (This)->lpVtbl -> GetComparisonInfo(This,ppszPropertyName,pcop,ppropvar) )
#define ICondition2_GetValueType(This,ppszValueTypeName)    ( (This)->lpVtbl -> GetValueType(This,ppszValueTypeName) )
#define ICondition2_GetValueNormalization(This,ppszNormalization)    ( (This)->lpVtbl -> GetValueNormalization(This,ppszNormalization) )
#define ICondition2_GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm)    ( (This)->lpVtbl -> GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm) )
#define ICondition2_Clone(This,ppc)    ( (This)->lpVtbl -> Clone(This,ppc) )
#define ICondition2_GetLocale(This,ppszLocaleName)    ( (This)->lpVtbl -> GetLocale(This,ppszLocaleName) )
#define ICondition2_GetLeafConditionInfo(This,ppropkey,pcop,ppropvar)    ( (This)->lpVtbl -> GetLeafConditionInfo(This,ppropkey,pcop,ppropvar) )
#endif
HRESULT STDMETHODCALLTYPE ICondition2_RemoteGetLeafConditionInfo_Proxy(ICondition2 *This, PROPERTYKEY *ppropkey, CONDITION_OPERATION *pcop, PROPVARIANT *ppropvar);
void __RPC_STUB ICondition2_RemoteGetLeafConditionInfo_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
HRESULT STDMETHODCALLTYPE IRichChunk_GetData_Proxy(IRichChunk *This, ULONG *pFirstPos, ULONG *pLength, LPWSTR *ppsz, PROPVARIANT *pValue);
HRESULT STDMETHODCALLTYPE IRichChunk_GetData_Stub(IRichChunk *This, ULONG *pFirstPos, ULONG *pLength, LPWSTR *ppsz, PROPVARIANT *pValue);
HRESULT STDMETHODCALLTYPE ICondition_GetComparisonInfo_Proxy(ICondition *This, LPWSTR *ppszPropertyName, CONDITION_OPERATION *pcop, PROPVARIANT *ppropvar);
HRESULT STDMETHODCALLTYPE ICondition_GetComparisonInfo_Stub(ICondition *This, LPWSTR *ppszPropertyName, CONDITION_OPERATION *pcop, PROPVARIANT *ppropvar);
HRESULT STDMETHODCALLTYPE ICondition_GetInputTerms_Proxy(ICondition *This, IRichChunk **ppPropertyTerm, IRichChunk **ppOperationTerm, IRichChunk **ppValueTerm);
HRESULT STDMETHODCALLTYPE ICondition_GetInputTerms_Stub(ICondition *This, IRichChunk **ppPropertyTerm, IRichChunk **ppOperationTerm, IRichChunk **ppValueTerm);
HRESULT STDMETHODCALLTYPE ICondition2_GetLeafConditionInfo_Proxy(ICondition2 *This, PROPERTYKEY *ppropkey, CONDITION_OPERATION *pcop, PROPVARIANT *ppropvar);
HRESULT STDMETHODCALLTYPE ICondition2_GetLeafConditionInfo_Stub(ICondition2 *This, PROPERTYKEY *ppropkey, CONDITION_OPERATION *pcop, PROPVARIANT *ppropvar);
#endif
