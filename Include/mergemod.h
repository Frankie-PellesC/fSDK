/*+@@file@@----------------------------------------------------------------*//*!
 \file		mergemod.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 31 16:26:52 2016
 \date		Modified on Sun Jul 31 16:26:52 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#include "rpc.h"
#include "rpcndr.h"
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __mergemod_h__
#define __mergemod_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef _WIN32_MSM
#define _WIN32_MSM   100
#endif
#ifndef __IEnumMsmString_FWD_DEFINED__
#define __IEnumMsmString_FWD_DEFINED__
typedef interface IEnumMsmString IEnumMsmString;
#endif
#ifndef __IMsmStrings_FWD_DEFINED__
#define __IMsmStrings_FWD_DEFINED__
typedef interface IMsmStrings IMsmStrings;
#endif
#ifndef __IMsmError_FWD_DEFINED__
#define __IMsmError_FWD_DEFINED__
typedef interface IMsmError IMsmError;
#endif
#ifndef __IEnumMsmError_FWD_DEFINED__
#define __IEnumMsmError_FWD_DEFINED__
typedef interface IEnumMsmError IEnumMsmError;
#endif
#ifndef __IMsmErrors_FWD_DEFINED__
#define __IMsmErrors_FWD_DEFINED__
typedef interface IMsmErrors IMsmErrors;
#endif
#ifndef __IMsmDependency_FWD_DEFINED__
#define __IMsmDependency_FWD_DEFINED__
typedef interface IMsmDependency IMsmDependency;
#endif
#ifndef __IEnumMsmDependency_FWD_DEFINED__
#define __IEnumMsmDependency_FWD_DEFINED__
typedef interface IEnumMsmDependency IEnumMsmDependency;
#endif
#ifndef __IMsmDependencies_FWD_DEFINED__
#define __IMsmDependencies_FWD_DEFINED__
typedef interface IMsmDependencies IMsmDependencies;
#endif
#ifndef __IMsmMerge_FWD_DEFINED__
#define __IMsmMerge_FWD_DEFINED__
typedef interface IMsmMerge IMsmMerge;
#endif
#ifndef __IMsmGetFiles_FWD_DEFINED__
#define __IMsmGetFiles_FWD_DEFINED__
typedef interface IMsmGetFiles IMsmGetFiles;
#endif
#ifndef __IMsmStrings_FWD_DEFINED__
#define __IMsmStrings_FWD_DEFINED__
typedef interface IMsmStrings IMsmStrings;
#endif
#ifndef __IMsmError_FWD_DEFINED__
#define __IMsmError_FWD_DEFINED__
typedef interface IMsmError IMsmError;
#endif
#ifndef __IMsmErrors_FWD_DEFINED__
#define __IMsmErrors_FWD_DEFINED__
typedef interface IMsmErrors IMsmErrors;
#endif
#ifndef __IMsmDependency_FWD_DEFINED__
#define __IMsmDependency_FWD_DEFINED__
typedef interface IMsmDependency IMsmDependency;
#endif
#ifndef __IMsmDependencies_FWD_DEFINED__
#define __IMsmDependencies_FWD_DEFINED__
typedef interface IMsmDependencies IMsmDependencies;
#endif
#ifndef __IMsmGetFiles_FWD_DEFINED__
#define __IMsmGetFiles_FWD_DEFINED__
typedef interface IMsmGetFiles IMsmGetFiles;
#endif
#if (_WIN32_MSM >= 150)
#ifndef __IMsmConfigurableItem_FWD_DEFINED__
#define __IMsmConfigurableItem_FWD_DEFINED__
typedef interface IMsmConfigurableItem IMsmConfigurableItem;
#endif
#ifndef __IEnumMsmConfigurableItem_FWD_DEFINED__
#define __IEnumMsmConfigurableItem_FWD_DEFINED__
typedef interface IEnumMsmConfigurableItem IEnumMsmConfigurableItem;
#endif
#ifndef __IMsmConfigurableItems_FWD_DEFINED__
#define __IMsmConfigurableItems_FWD_DEFINED__
typedef interface IMsmConfigurableItems IMsmConfigurableItems;
#endif
#ifndef __IMsmMerge2_FWD_DEFINED__
#define __IMsmMerge2_FWD_DEFINED__
typedef interface IMsmMerge2 IMsmMerge2;
#endif
#ifndef __IMsmConfigureModule_FWD_DEFINED__
#define __IMsmConfigureModule_FWD_DEFINED__
typedef interface IMsmConfigureModule IMsmConfigureModule;
#endif
#ifndef __MsmMerge2_FWD_DEFINED__
#define __MsmMerge2_FWD_DEFINED__
typedef struct MsmMerge2 MsmMerge2;
#endif
#endif
#ifndef __MsmMerge_FWD_DEFINED__
#define __MsmMerge_FWD_DEFINED__
typedef struct MsmMerge MsmMerge;
#endif
#include "oaidl.h"
void __RPC_FAR *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void __RPC_FAR *);
#ifndef __FORWARD_IID_IMSMMERGETYPELIB
#define __FORWARD_IID_IMSMMERGETYPELIB
typedef enum msmErrorType
{
	msmErrorLanguageUnsupported = 1,
	msmErrorLanguageFailed = 2,
	msmErrorExclusion = 3,
	msmErrorTableMerge = 4,
	msmErrorResequenceMerge = 5,
	msmErrorFileCreate = 6,
	msmErrorDirCreate = 7,
	msmErrorFeatureRequired = 8,
#if (_WIN32_MSM >= 150)
	msmErrorBadNullSubstitution = 9,
	msmErrorBadSubstitutionType = 10,
	msmErrorMissingConfigItem = 11,
	msmErrorBadNullResponse = 12,
	msmErrorDataRequestFailed = 13,
	msmErrorPlatformMismatch = 14
#endif
} msmErrorType;
#if (_WIN32_MSM >= 150)
typedef enum msmConfigurableItemFormat
{
	msmConfigurableItemText = 0,
	msmConfigurableItemKey = 1,
	msmConfigurableItemInteger = 2,
	msmConfigurableItemBitfield = 3
} msmConfigurableItemFormat;
typedef enum msmConfigurableItemOptions
{
	msmConfigurableOptionKeyNoOrphan = 1,
	msmConfigurableOptionNonNullable = 2
} msmConfigurableItemOptions;
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_mergemod_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mergemod_0000_v0_0_s_ifspec;
#ifndef __IEnumMsmString_INTERFACE_DEFINED__
#define __IEnumMsmString_INTERFACE_DEFINED__
typedef struct IEnumMsmStringVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IEnumMsmString __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IEnumMsmString __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IEnumMsmString __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Next) (IEnumMsmString __RPC_FAR *This, unsigned long cFetch, BSTR __RPC_FAR *rgbstrStrings, unsigned long __RPC_FAR *pcFetched);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Skip) (IEnumMsmString __RPC_FAR *This, unsigned long cSkip);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Reset) (IEnumMsmString __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Clone) (IEnumMsmString __RPC_FAR *This, IEnumMsmString __RPC_FAR *__RPC_FAR *pemsmStrings);
	END_INTERFACE
}  IEnumMsmStringVtbl;
interface IEnumMsmString
{
	CONST_VTBL struct IEnumMsmStringVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumMsmString_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IEnumMsmString_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IEnumMsmString_Release(This) (This)->lpVtbl -> Release(This)
#define IEnumMsmString_Next(This,cFetch,rgbstrStrings,pcFetched) (This)->lpVtbl -> Next(This,cFetch,rgbstrStrings,pcFetched)
#define IEnumMsmString_Skip(This,cSkip) (This)->lpVtbl -> Skip(This,cSkip)
#define IEnumMsmString_Reset(This) (This)->lpVtbl -> Reset(This)
#define IEnumMsmString_Clone(This,pemsmStrings) (This)->lpVtbl -> Clone(This,pemsmStrings)
#endif
HRESULT STDMETHODCALLTYPE IEnumMsmString_Next_Proxy(IEnumMsmString __RPC_FAR *This, unsigned long cFetch, BSTR __RPC_FAR *rgbstrStrings, unsigned long __RPC_FAR *pcFetched);
void __RPC_STUB IEnumMsmString_Next_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmString_Skip_Proxy(IEnumMsmString __RPC_FAR *This, unsigned long cSkip);
void __RPC_STUB IEnumMsmString_Skip_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmString_Reset_Proxy(IEnumMsmString __RPC_FAR *This);
void __RPC_STUB IEnumMsmString_Reset_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmString_Clone_Proxy(IEnumMsmString __RPC_FAR *This, IEnumMsmString __RPC_FAR *__RPC_FAR *pemsmStrings);
void __RPC_STUB IEnumMsmString_Clone_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IMsmStrings_INTERFACE_DEFINED__
#define __IMsmStrings_INTERFACE_DEFINED__
typedef struct IMsmStringsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IMsmStrings __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IMsmStrings __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IMsmStrings __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IMsmStrings __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IMsmStrings __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IMsmStrings __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IMsmStrings __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Item) (IMsmStrings __RPC_FAR *This, long Item, BSTR __RPC_FAR *Return);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Count) (IMsmStrings __RPC_FAR *This, long __RPC_FAR *Count);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get__NewEnum) (IMsmStrings __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *NewEnum);
	END_INTERFACE
}  IMsmStringsVtbl;
interface IMsmStrings
{
	CONST_VTBL struct IMsmStringsVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IMsmStrings_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IMsmStrings_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IMsmStrings_Release(This) (This)->lpVtbl -> Release(This)
#define IMsmStrings_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IMsmStrings_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IMsmStrings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IMsmStrings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IMsmStrings_get_Item(This,Item,Return) (This)->lpVtbl -> get_Item(This,Item,Return)
#define IMsmStrings_get_Count(This,Count) (This)->lpVtbl -> get_Count(This,Count)
#define IMsmStrings_get__NewEnum(This,NewEnum) (This)->lpVtbl -> get__NewEnum(This,NewEnum)
#endif
HRESULT STDMETHODCALLTYPE IMsmStrings_get_Item_Proxy(IMsmStrings __RPC_FAR *This, long Item, BSTR __RPC_FAR *Return);
void __RPC_STUB IMsmStrings_get_Item_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmStrings_get_Count_Proxy(IMsmStrings __RPC_FAR *This, long __RPC_FAR *Count);
void __RPC_STUB IMsmStrings_get_Count_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmStrings_get__NewEnum_Proxy(IMsmStrings __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *NewEnum);
void __RPC_STUB IMsmStrings_get__NewEnum_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IMsmError_INTERFACE_DEFINED__
#define __IMsmError_INTERFACE_DEFINED__
typedef struct IMsmErrorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IMsmError __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IMsmError __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IMsmError __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IMsmError __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IMsmError __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IMsmError __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IMsmError __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Type) (IMsmError __RPC_FAR *This, msmErrorType __RPC_FAR *ErrorType);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Path) (IMsmError __RPC_FAR *This, BSTR __RPC_FAR *ErrorPath);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Language) (IMsmError __RPC_FAR *This, short __RPC_FAR *ErrorLanguage);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_DatabaseTable) (IMsmError __RPC_FAR *This, BSTR __RPC_FAR *ErrorTable);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_DatabaseKeys) (IMsmError __RPC_FAR *This, IMsmStrings __RPC_FAR *__RPC_FAR *ErrorKeys);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ModuleTable) (IMsmError __RPC_FAR *This, BSTR __RPC_FAR *ErrorTable);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ModuleKeys) (IMsmError __RPC_FAR *This, IMsmStrings __RPC_FAR *__RPC_FAR *ErrorKeys);
	END_INTERFACE
}  IMsmErrorVtbl;
interface IMsmError
{
	CONST_VTBL struct IMsmErrorVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IMsmError_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IMsmError_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IMsmError_Release(This) (This)->lpVtbl -> Release(This)
#define IMsmError_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IMsmError_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IMsmError_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IMsmError_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IMsmError_get_Type(This,ErrorType) (This)->lpVtbl -> get_Type(This,ErrorType)
#define IMsmError_get_Path(This,ErrorPath) (This)->lpVtbl -> get_Path(This,ErrorPath)
#define IMsmError_get_Language(This,ErrorLanguage) (This)->lpVtbl -> get_Language(This,ErrorLanguage)
#define IMsmError_get_DatabaseTable(This,ErrorTable) (This)->lpVtbl -> get_DatabaseTable(This,ErrorTable)
#define IMsmError_get_DatabaseKeys(This,ErrorKeys) (This)->lpVtbl -> get_DatabaseKeys(This,ErrorKeys)
#define IMsmError_get_ModuleTable(This,ErrorTable) (This)->lpVtbl -> get_ModuleTable(This,ErrorTable)
#define IMsmError_get_ModuleKeys(This,ErrorKeys) (This)->lpVtbl -> get_ModuleKeys(This,ErrorKeys)
#endif
HRESULT STDMETHODCALLTYPE IMsmError_get_Type_Proxy(IMsmError __RPC_FAR *This, msmErrorType __RPC_FAR *ErrorType);
void __RPC_STUB IMsmError_get_Type_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmError_get_Path_Proxy(IMsmError __RPC_FAR *This, BSTR __RPC_FAR *ErrorPath);
void __RPC_STUB IMsmError_get_Path_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmError_get_Language_Proxy(IMsmError __RPC_FAR *This, short __RPC_FAR *ErrorLanguage);
void __RPC_STUB IMsmError_get_Language_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmError_get_DatabaseTable_Proxy(IMsmError __RPC_FAR *This, BSTR __RPC_FAR *ErrorTable);
void __RPC_STUB IMsmError_get_DatabaseTable_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmError_get_DatabaseKeys_Proxy(IMsmError __RPC_FAR *This, IMsmStrings __RPC_FAR *__RPC_FAR *ErrorKeys);
void __RPC_STUB IMsmError_get_DatabaseKeys_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmError_get_ModuleTable_Proxy(IMsmError __RPC_FAR *This, BSTR __RPC_FAR *ErrorTable);
void __RPC_STUB IMsmError_get_ModuleTable_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmError_get_ModuleKeys_Proxy(IMsmError __RPC_FAR *This, IMsmStrings __RPC_FAR *__RPC_FAR *ErrorKeys);
void __RPC_STUB IMsmError_get_ModuleKeys_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumMsmError_INTERFACE_DEFINED__
#define __IEnumMsmError_INTERFACE_DEFINED__
typedef struct IEnumMsmErrorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IEnumMsmError __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IEnumMsmError __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IEnumMsmError __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Next) (IEnumMsmError __RPC_FAR *This, unsigned long cFetch, IMsmError __RPC_FAR *__RPC_FAR *rgmsmErrors, unsigned long __RPC_FAR *pcFetched);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Skip) (IEnumMsmError __RPC_FAR *This, unsigned long cSkip);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Reset) (IEnumMsmError __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Clone) (IEnumMsmError __RPC_FAR *This, IEnumMsmError __RPC_FAR *__RPC_FAR *pemsmErrors);
	END_INTERFACE
}  IEnumMsmErrorVtbl;
interface IEnumMsmError
{
	CONST_VTBL struct IEnumMsmErrorVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumMsmError_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IEnumMsmError_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IEnumMsmError_Release(This) (This)->lpVtbl -> Release(This)
#define IEnumMsmError_Next(This,cFetch,rgmsmErrors,pcFetched) (This)->lpVtbl -> Next(This,cFetch,rgmsmErrors,pcFetched)
#define IEnumMsmError_Skip(This,cSkip) (This)->lpVtbl -> Skip(This,cSkip)
#define IEnumMsmError_Reset(This) (This)->lpVtbl -> Reset(This)
#define IEnumMsmError_Clone(This,pemsmErrors) (This)->lpVtbl -> Clone(This,pemsmErrors)
#endif
HRESULT STDMETHODCALLTYPE IEnumMsmError_Next_Proxy(IEnumMsmError __RPC_FAR *This, unsigned long cFetch, IMsmError __RPC_FAR *__RPC_FAR *rgmsmErrors, unsigned long __RPC_FAR *pcFetched);
void __RPC_STUB IEnumMsmError_Next_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmError_Skip_Proxy(IEnumMsmError __RPC_FAR *This, unsigned long cSkip);
void __RPC_STUB IEnumMsmError_Skip_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmError_Reset_Proxy(IEnumMsmError __RPC_FAR *This);
void __RPC_STUB IEnumMsmError_Reset_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmError_Clone_Proxy(IEnumMsmError __RPC_FAR *This, IEnumMsmError __RPC_FAR *__RPC_FAR *pemsmErrors);
void __RPC_STUB IEnumMsmError_Clone_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IMsmErrors_INTERFACE_DEFINED__
#define __IMsmErrors_INTERFACE_DEFINED__
typedef struct IMsmErrorsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IMsmErrors __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IMsmErrors __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IMsmErrors __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IMsmErrors __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IMsmErrors __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IMsmErrors __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IMsmErrors __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Item) (IMsmErrors __RPC_FAR *This, long Item, IMsmError __RPC_FAR *__RPC_FAR *Return);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Count) (IMsmErrors __RPC_FAR *This, long __RPC_FAR *Count);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get__NewEnum) (IMsmErrors __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *NewEnum);
	END_INTERFACE
}  IMsmErrorsVtbl;
interface IMsmErrors
{
	CONST_VTBL struct IMsmErrorsVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IMsmErrors_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IMsmErrors_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IMsmErrors_Release(This) (This)->lpVtbl -> Release(This)
#define IMsmErrors_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IMsmErrors_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IMsmErrors_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IMsmErrors_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IMsmErrors_get_Item(This,Item,Return) (This)->lpVtbl -> get_Item(This,Item,Return)
#define IMsmErrors_get_Count(This,Count) (This)->lpVtbl -> get_Count(This,Count)
#define IMsmErrors_get__NewEnum(This,NewEnum) (This)->lpVtbl -> get__NewEnum(This,NewEnum)
#endif
HRESULT STDMETHODCALLTYPE IMsmErrors_get_Item_Proxy(IMsmErrors __RPC_FAR *This, long Item, IMsmError __RPC_FAR *__RPC_FAR *Return);
void __RPC_STUB IMsmErrors_get_Item_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmErrors_get_Count_Proxy(IMsmErrors __RPC_FAR *This, long __RPC_FAR *Count);
void __RPC_STUB IMsmErrors_get_Count_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmErrors_get__NewEnum_Proxy(IMsmErrors __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *NewEnum);
void __RPC_STUB IMsmErrors_get__NewEnum_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IMsmDependency_INTERFACE_DEFINED__
#define __IMsmDependency_INTERFACE_DEFINED__
typedef struct IMsmDependencyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IMsmDependency __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IMsmDependency __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IMsmDependency __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IMsmDependency __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IMsmDependency __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IMsmDependency __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IMsmDependency __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Module) (IMsmDependency __RPC_FAR *This, BSTR __RPC_FAR *Module);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Language) (IMsmDependency __RPC_FAR *This, short __RPC_FAR *Language);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Version) (IMsmDependency __RPC_FAR *This, BSTR __RPC_FAR *Version);
	END_INTERFACE
}  IMsmDependencyVtbl;
interface IMsmDependency
{
	CONST_VTBL struct IMsmDependencyVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IMsmDependency_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IMsmDependency_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IMsmDependency_Release(This) (This)->lpVtbl -> Release(This)
#define IMsmDependency_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IMsmDependency_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IMsmDependency_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IMsmDependency_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IMsmDependency_get_Module(This,Module) (This)->lpVtbl -> get_Module(This,Module)
#define IMsmDependency_get_Language(This,Language) (This)->lpVtbl -> get_Language(This,Language)
#define IMsmDependency_get_Version(This,Version) (This)->lpVtbl -> get_Version(This,Version)
#endif
HRESULT STDMETHODCALLTYPE IMsmDependency_get_Module_Proxy(IMsmDependency __RPC_FAR *This, BSTR __RPC_FAR *Module);
void __RPC_STUB IMsmDependency_get_Module_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmDependency_get_Language_Proxy(IMsmDependency __RPC_FAR *This, short __RPC_FAR *Language);
void __RPC_STUB IMsmDependency_get_Language_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmDependency_get_Version_Proxy(IMsmDependency __RPC_FAR *This, BSTR __RPC_FAR *Version);
void __RPC_STUB IMsmDependency_get_Version_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumMsmDependency_INTERFACE_DEFINED__
#define __IEnumMsmDependency_INTERFACE_DEFINED__
typedef struct IEnumMsmDependencyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IEnumMsmDependency __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IEnumMsmDependency __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IEnumMsmDependency __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Next) (IEnumMsmDependency __RPC_FAR *This, unsigned long cFetch, IMsmDependency __RPC_FAR *__RPC_FAR *rgmsmDependencies, unsigned long __RPC_FAR *pcFetched);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Skip) (IEnumMsmDependency __RPC_FAR *This, unsigned long cSkip);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Reset) (IEnumMsmDependency __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Clone) (IEnumMsmDependency __RPC_FAR *This, IEnumMsmDependency __RPC_FAR *__RPC_FAR *pemsmDependencies);
	END_INTERFACE
}  IEnumMsmDependencyVtbl;
interface IEnumMsmDependency
{
	CONST_VTBL struct IEnumMsmDependencyVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumMsmDependency_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IEnumMsmDependency_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IEnumMsmDependency_Release(This) (This)->lpVtbl -> Release(This)
#define IEnumMsmDependency_Next(This,cFetch,rgmsmDependencies,pcFetched) (This)->lpVtbl -> Next(This,cFetch,rgmsmDependencies,pcFetched)
#define IEnumMsmDependency_Skip(This,cSkip) (This)->lpVtbl -> Skip(This,cSkip)
#define IEnumMsmDependency_Reset(This) (This)->lpVtbl -> Reset(This)
#define IEnumMsmDependency_Clone(This,pemsmDependencies) (This)->lpVtbl -> Clone(This,pemsmDependencies)
#endif
HRESULT STDMETHODCALLTYPE IEnumMsmDependency_Next_Proxy(IEnumMsmDependency __RPC_FAR *This, unsigned long cFetch, IMsmDependency __RPC_FAR *__RPC_FAR *rgmsmDependencies, unsigned long __RPC_FAR *pcFetched);
void __RPC_STUB IEnumMsmDependency_Next_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmDependency_Skip_Proxy(IEnumMsmDependency __RPC_FAR *This, unsigned long cSkip);
void __RPC_STUB IEnumMsmDependency_Skip_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmDependency_Reset_Proxy(IEnumMsmDependency __RPC_FAR *This);
void __RPC_STUB IEnumMsmDependency_Reset_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmDependency_Clone_Proxy(IEnumMsmDependency __RPC_FAR *This, IEnumMsmDependency __RPC_FAR *__RPC_FAR *pemsmDependencies);
void __RPC_STUB IEnumMsmDependency_Clone_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IMsmDependencies_INTERFACE_DEFINED__
#define __IMsmDependencies_INTERFACE_DEFINED__
typedef struct IMsmDependenciesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IMsmDependencies __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IMsmDependencies __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IMsmDependencies __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IMsmDependencies __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IMsmDependencies __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IMsmDependencies __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IMsmDependencies __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Item) (IMsmDependencies __RPC_FAR *This, long Item, IMsmDependency __RPC_FAR *__RPC_FAR *Return);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Count) (IMsmDependencies __RPC_FAR *This, long __RPC_FAR *Count);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get__NewEnum) (IMsmDependencies __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *NewEnum);
	END_INTERFACE
}  IMsmDependenciesVtbl;
interface IMsmDependencies
{
	CONST_VTBL struct IMsmDependenciesVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IMsmDependencies_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IMsmDependencies_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IMsmDependencies_Release(This) (This)->lpVtbl -> Release(This)
#define IMsmDependencies_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IMsmDependencies_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IMsmDependencies_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IMsmDependencies_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IMsmDependencies_get_Item(This,Item,Return) (This)->lpVtbl -> get_Item(This,Item,Return)
#define IMsmDependencies_get_Count(This,Count) (This)->lpVtbl -> get_Count(This,Count)
#define IMsmDependencies_get__NewEnum(This,NewEnum) (This)->lpVtbl -> get__NewEnum(This,NewEnum)
#endif
HRESULT STDMETHODCALLTYPE IMsmDependencies_get_Item_Proxy(IMsmDependencies __RPC_FAR *This, long Item, IMsmDependency __RPC_FAR *__RPC_FAR *Return);
void __RPC_STUB IMsmDependencies_get_Item_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmDependencies_get_Count_Proxy(IMsmDependencies __RPC_FAR *This, long __RPC_FAR *Count);
void __RPC_STUB IMsmDependencies_get_Count_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmDependencies_get__NewEnum_Proxy(IMsmDependencies __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *NewEnum);
void __RPC_STUB IMsmDependencies_get__NewEnum_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#if (_WIN32_MSM >= 150)
#ifndef __IMsmConfigurableItem_INTERFACE_DEFINED__
#define __IMsmConfigurableItem_INTERFACE_DEFINED__
typedef struct IMsmConfigurableItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IMsmConfigurableItem __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IMsmConfigurableItem __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IMsmConfigurableItem __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IMsmConfigurableItem __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IMsmConfigurableItem __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IMsmConfigurableItem __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IMsmConfigurableItem __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Name) (IMsmConfigurableItem __RPC_FAR *This, BSTR __RPC_FAR *Name);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Format) (IMsmConfigurableItem __RPC_FAR *This, msmConfigurableItemFormat __RPC_FAR *Format);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Type) (IMsmConfigurableItem __RPC_FAR *This, BSTR __RPC_FAR *Type);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Context) (IMsmConfigurableItem __RPC_FAR *This, BSTR __RPC_FAR *Context);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_DefaultValue) (IMsmConfigurableItem __RPC_FAR *This, BSTR __RPC_FAR *DefaultValue);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Attributes) (IMsmConfigurableItem __RPC_FAR *This, long __RPC_FAR *Attributes);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_DisplayName) (IMsmConfigurableItem __RPC_FAR *This, BSTR __RPC_FAR *DisplayName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Description) (IMsmConfigurableItem __RPC_FAR *This, BSTR __RPC_FAR *Description);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_HelpLocation) (IMsmConfigurableItem __RPC_FAR *This, BSTR __RPC_FAR *HelpLocation);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_HelpKeyword) (IMsmConfigurableItem __RPC_FAR *This, BSTR __RPC_FAR *HelpKeyword);
	END_INTERFACE
}  IMsmConfigurableItemVtbl;
interface IMsmConfigurableItem
{
	CONST_VTBL struct IMsmConfigurableItemVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IMsmConfigurableItem_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IMsmConfigurableItem_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IMsmConfigurableItem_Release(This) (This)->lpVtbl -> Release(This)
#define IMsmConfigurableItem_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IMsmConfigurableItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IMsmConfigurableItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IMsmConfigurableItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IMsmConfigurableItem_get_Name(This,Name) (This)->lpVtbl -> get_Name(This,Name)
#define IMsmConfigurableItem_get_Format(This,Format) (This)->lpVtbl -> get_Format(This,Format)
#define IMsmConfigurableItem_get_Type(This,Type) (This)->lpVtbl -> get_Type(This,Type)
#define IMsmConfigurableItem_get_Context(This,Context) (This)->lpVtbl -> get_Context(This,Context)
#define IMsmConfigurableItem_get_DefaultValue(This,DefaultValue) (This)->lpVtbl -> get_DefaultValue(This,DefaultValue)
#define IMsmConfigurableItem_get_Attributes(This,Attributes) (This)->lpVtbl -> get_Attributes(This,Attributes)
#define IMsmConfigurableItem_get_DisplayName(This,DisplayName) (This)->lpVtbl -> get_DisplayName(This,DisplayName)
#define IMsmConfigurableItem_get_Description(This,Description) (This)->lpVtbl -> get_Description(This,Description)
#define IMsmConfigurableItem_get_HelpLocation(This,HelpLocation) (This)->lpVtbl -> get_HelpLocation(This,HelpLocation)
#define IMsmConfigurableItem_get_HelpKeyword(This,HelpKeyword) (This)->lpVtbl -> get_HelpKeyword(This,HelpKeyword)
#endif
HRESULT STDMETHODCALLTYPE IMsmConfigurableItem_get_Name_Proxy(IMsmConfigurableItem __RPC_FAR *This, BSTR __RPC_FAR *Name);
void __RPC_STUB IMsmConfigurableItem_get_Name_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmConfigurableItem_get_Format_Proxy(IMsmConfigurableItem __RPC_FAR *This, msmConfigurableItemFormat __RPC_FAR *Format);
void __RPC_STUB IMsmConfigurableItem_get_Format_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmConfigurableItem_get_Type_Proxy(IMsmConfigurableItem __RPC_FAR *This, BSTR __RPC_FAR *Type);
void __RPC_STUB IMsmConfigurableItem_get_Type_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmConfigurableItem_get_Context_Proxy(IMsmConfigurableItem __RPC_FAR *This, BSTR __RPC_FAR *Context);
void __RPC_STUB IMsmConfigurableItem_get_Context_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmConfigurableItem_get_DefaultValue_Proxy(IMsmConfigurableItem __RPC_FAR *This, BSTR __RPC_FAR *DefaultValue);
void __RPC_STUB IMsmConfigurableItem_get_DefaultValue_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmConfigurableItem_get_Attributes_Proxy(IMsmConfigurableItem __RPC_FAR *This, long __RPC_FAR *Attributes);
void __RPC_STUB IMsmConfigurableItem_get_Attributes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmConfigurableItem_get_DisplayName_Proxy(IMsmConfigurableItem __RPC_FAR *This, BSTR __RPC_FAR *DisplayName);
void __RPC_STUB IMsmConfigurableItem_get_DisplayName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmConfigurableItem_get_Description_Proxy(IMsmConfigurableItem __RPC_FAR *This, BSTR __RPC_FAR *Description);
void __RPC_STUB IMsmConfigurableItem_get_Description_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmConfigurableItem_get_HelpLocation_Proxy(IMsmConfigurableItem __RPC_FAR *This, BSTR __RPC_FAR *HelpLocation);
void __RPC_STUB IMsmConfigurableItem_get_HelpLocation_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmConfigurableItem_get_HelpKeyword_Proxy(IMsmConfigurableItem __RPC_FAR *This, BSTR __RPC_FAR *HelpKeyword);
void __RPC_STUB IMsmConfigurableItem_get_HelpKeyword_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumMsmConfigurableItem_INTERFACE_DEFINED__
#define __IEnumMsmConfigurableItem_INTERFACE_DEFINED__
typedef struct IEnumMsmConfigurableItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IEnumMsmConfigurableItem __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IEnumMsmConfigurableItem __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IEnumMsmConfigurableItem __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Next) (IEnumMsmConfigurableItem __RPC_FAR *This, unsigned long cFetch, IMsmConfigurableItem __RPC_FAR *__RPC_FAR *rgmsmItems, unsigned long __RPC_FAR *pcFetched);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Skip) (IEnumMsmConfigurableItem __RPC_FAR *This, unsigned long cSkip);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Reset) (IEnumMsmConfigurableItem __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Clone) (IEnumMsmConfigurableItem __RPC_FAR *This, IEnumMsmConfigurableItem __RPC_FAR *__RPC_FAR *pemsmConfigurableItem);
	END_INTERFACE
}  IEnumMsmConfigurableItemVtbl;
interface IEnumMsmConfigurableItem
{
	CONST_VTBL struct IEnumMsmConfigurableItemVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumMsmConfigurableItem_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IEnumMsmConfigurableItem_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IEnumMsmConfigurableItem_Release(This) (This)->lpVtbl -> Release(This)
#define IEnumMsmConfigurableItem_Next(This,cFetch,rgmsmItems,pcFetched) (This)->lpVtbl -> Next(This,cFetch,rgmsmItems,pcFetched)
#define IEnumMsmConfigurableItem_Skip(This,cSkip) (This)->lpVtbl -> Skip(This,cSkip)
#define IEnumMsmConfigurableItem_Reset(This) (This)->lpVtbl -> Reset(This)
#define IEnumMsmConfigurableItem_Clone(This,pemsmConfigurableItem) (This)->lpVtbl -> Clone(This,pemsmConfigurableItem)
#endif
HRESULT STDMETHODCALLTYPE IEnumMsmConfigurableItem_Next_Proxy(IEnumMsmConfigurableItem __RPC_FAR *This, unsigned long cFetch, IMsmConfigurableItem __RPC_FAR *__RPC_FAR *rgmsmItems, unsigned long __RPC_FAR *pcFetched);
void __RPC_STUB IEnumMsmConfigurableItem_Next_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmConfigurableItem_Skip_Proxy(IEnumMsmConfigurableItem __RPC_FAR *This, unsigned long cSkip);
void __RPC_STUB IEnumMsmConfigurableItem_Skip_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmConfigurableItem_Reset_Proxy(IEnumMsmConfigurableItem __RPC_FAR *This);
void __RPC_STUB IEnumMsmConfigurableItem_Reset_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmConfigurableItem_Clone_Proxy(IEnumMsmConfigurableItem __RPC_FAR *This, IEnumMsmConfigurableItem __RPC_FAR *__RPC_FAR *pemsmConfigurableItem);
void __RPC_STUB IEnumMsmConfigurableItem_Clone_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IMsmConfigurableItems_INTERFACE_DEFINED__
#define __IMsmConfigurableItems_INTERFACE_DEFINED__
typedef struct IMsmConfigurableItemsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IMsmConfigurableItems __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IMsmConfigurableItems __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IMsmConfigurableItems __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IMsmConfigurableItems __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IMsmConfigurableItems __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IMsmConfigurableItems __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IMsmConfigurableItems __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Item) (IMsmConfigurableItems __RPC_FAR *This, long Item, IMsmConfigurableItem __RPC_FAR *__RPC_FAR *Return);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Count) (IMsmConfigurableItems __RPC_FAR *This, long __RPC_FAR *Count);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get__NewEnum) (IMsmConfigurableItems __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *NewEnum);
	END_INTERFACE
}  IMsmConfigurableItemsVtbl;
interface IMsmConfigurableItems
{
	CONST_VTBL struct IMsmConfigurableItemsVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IMsmConfigurableItems_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IMsmConfigurableItems_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IMsmConfigurableItems_Release(This) (This)->lpVtbl -> Release(This)
#define IMsmConfigurableItems_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IMsmConfigurableItems_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IMsmConfigurableItems_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IMsmConfigurableItems_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IMsmConfigurableItems_get_Item(This,Item,Return) (This)->lpVtbl -> get_Item(This,Item,Return)
#define IMsmConfigurableItems_get_Count(This,Count) (This)->lpVtbl -> get_Count(This,Count)
#define IMsmConfigurableItems_get__NewEnum(This,NewEnum) (This)->lpVtbl -> get__NewEnum(This,NewEnum)
#endif
HRESULT STDMETHODCALLTYPE IMsmConfigurableItems_get_Item_Proxy(IMsmConfigurableItems __RPC_FAR *This, long Item, IMsmConfigurableItem __RPC_FAR *__RPC_FAR *Return);
void __RPC_STUB IMsmConfigurableItems_get_Item_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmConfigurableItems_get_Count_Proxy(IMsmConfigurableItems __RPC_FAR *This, long __RPC_FAR *Count);
void __RPC_STUB IMsmConfigurableItems_get_Count_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmConfigurableItems_get__NewEnum_Proxy(IMsmConfigurableItems __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *NewEnum);
void __RPC_STUB IMsmConfigurableItems_get__NewEnum_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IMsmConfigureModule_INTERFACE_DEFINED__
#define __IMsmConfigureModule_INTERFACE_DEFINED__
typedef struct IMsmConfigureModuleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IMsmConfigureModule __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IMsmConfigureModule __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IMsmConfigureModule __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IMsmConfigureModule __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IMsmConfigureModule __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IMsmConfigureModule __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IMsmConfigureModule __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *ProvideTextData) (IMsmConfigureModule __RPC_FAR *This, const BSTR Name, BSTR __RPC_FAR *ConfigData);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *ProvideIntegerData) (IMsmConfigureModule __RPC_FAR *This, const BSTR Name, long __RPC_FAR *ConfigData);
	END_INTERFACE
}  IMsmConfigureModuleVtbl;
interface IMsmConfigureModule
{
	CONST_VTBL struct IMsmConfigureModuleVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IMsmConfigureModule_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IMsmConfigureModule_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IMsmConfigureModule_Release(This) (This)->lpVtbl -> Release(This)
#define IMsmConfigureModule_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IMsmConfigureModule_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IMsmConfigureModule_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IMsmConfigureModule_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IMsmConfigureModule_ProvideTextData(This,Name,ConfigData) (This)->lpVtbl -> ProvideTextData(This,Name,ConfigData)
#define IMsmConfigureModule_ProvideIntegerData(This,Name,ConfigData) (This)->lpVtbl -> ProvideIntegerData(This,Name,ConfigData)
#endif
HRESULT STDMETHODCALLTYPE IMsmConfigureModule_ProvideTextData_Proxy(IMsmConfigureModule __RPC_FAR *This, const BSTR Name, BSTR __RPC_FAR *ConfigData);
void __RPC_STUB IMsmConfigureModule_ProvideTextData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmConfigureModule_ProvideIntegerData_Proxy(IMsmConfigureModule __RPC_FAR *This, const BSTR Name, long __RPC_FAR *ConfigData);
void __RPC_STUB IMsmConfigureModule_ProvideIntegerData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif
#ifndef __IMsmMerge_INTERFACE_DEFINED__
#define __IMsmMerge_INTERFACE_DEFINED__
typedef struct IMsmMergeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IMsmMerge __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IMsmMerge __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IMsmMerge __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IMsmMerge __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IMsmMerge __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IMsmMerge __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IMsmMerge __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *OpenDatabase) (IMsmMerge __RPC_FAR *This, const BSTR Path);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *OpenModule) (IMsmMerge __RPC_FAR *This, const BSTR Path, const short Language);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *CloseDatabase) (IMsmMerge __RPC_FAR *This, const VARIANT_BOOL Commit);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *CloseModule) (IMsmMerge __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *OpenLog) (IMsmMerge __RPC_FAR *This, const BSTR Path);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *CloseLog) (IMsmMerge __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Log) (IMsmMerge __RPC_FAR *This, const BSTR Message);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Errors) (IMsmMerge __RPC_FAR *This, IMsmErrors __RPC_FAR *__RPC_FAR *Errors);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Dependencies) (IMsmMerge __RPC_FAR *This, IMsmDependencies __RPC_FAR *__RPC_FAR *Dependencies);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Merge) (IMsmMerge __RPC_FAR *This, const BSTR Feature, const BSTR RedirectDir);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Connect) (IMsmMerge __RPC_FAR *This, const BSTR Feature);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *ExtractCAB) (IMsmMerge __RPC_FAR *This, const BSTR FileName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *ExtractFiles) (IMsmMerge __RPC_FAR *This, const BSTR Path);
	END_INTERFACE
}  IMsmMergeVtbl;
interface IMsmMerge
{
	CONST_VTBL struct IMsmMergeVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IMsmMerge_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IMsmMerge_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IMsmMerge_Release(This) (This)->lpVtbl -> Release(This)
#define IMsmMerge_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IMsmMerge_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IMsmMerge_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IMsmMerge_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IMsmMerge_OpenDatabase(This,Path) (This)->lpVtbl -> OpenDatabase(This,Path)
#define IMsmMerge_OpenModule(This,Path,Language) (This)->lpVtbl -> OpenModule(This,Path,Language)
#define IMsmMerge_CloseDatabase(This,Commit) (This)->lpVtbl -> CloseDatabase(This,Commit)
#define IMsmMerge_CloseModule(This) (This)->lpVtbl -> CloseModule(This)
#define IMsmMerge_OpenLog(This,Path) (This)->lpVtbl -> OpenLog(This,Path)
#define IMsmMerge_CloseLog(This) (This)->lpVtbl -> CloseLog(This)
#define IMsmMerge_Log(This,Message) (This)->lpVtbl -> Log(This,Message)
#define IMsmMerge_get_Errors(This,Errors) (This)->lpVtbl -> get_Errors(This,Errors)
#define IMsmMerge_get_Dependencies(This,Dependencies) (This)->lpVtbl -> get_Dependencies(This,Dependencies)
#define IMsmMerge_Merge(This,Feature,RedirectDir) (This)->lpVtbl -> Merge(This,Feature,RedirectDir)
#define IMsmMerge_Connect(This,Feature) (This)->lpVtbl -> Connect(This,Feature)
#define IMsmMerge_ExtractCAB(This,FileName) (This)->lpVtbl -> ExtractCAB(This,FileName)
#define IMsmMerge_ExtractFiles(This,Path) (This)->lpVtbl -> ExtractFiles(This,Path)
#endif
HRESULT STDMETHODCALLTYPE IMsmMerge_OpenDatabase_Proxy(IMsmMerge __RPC_FAR *This, const BSTR Path);
void __RPC_STUB IMsmMerge_OpenDatabase_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge_OpenModule_Proxy(IMsmMerge __RPC_FAR *This, const BSTR Path, const short Language);
void __RPC_STUB IMsmMerge_OpenModule_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge_CloseDatabase_Proxy(IMsmMerge __RPC_FAR *This, const VARIANT_BOOL Commit);
void __RPC_STUB IMsmMerge_CloseDatabase_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge_CloseModule_Proxy(IMsmMerge __RPC_FAR *This);
void __RPC_STUB IMsmMerge_CloseModule_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge_OpenLog_Proxy(IMsmMerge __RPC_FAR *This, const BSTR Path);
void __RPC_STUB IMsmMerge_OpenLog_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge_CloseLog_Proxy(IMsmMerge __RPC_FAR *This);
void __RPC_STUB IMsmMerge_CloseLog_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge_Log_Proxy(IMsmMerge __RPC_FAR *This, const BSTR Message);
void __RPC_STUB IMsmMerge_Log_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge_get_Errors_Proxy(IMsmMerge __RPC_FAR *This, IMsmErrors __RPC_FAR *__RPC_FAR *Errors);
void __RPC_STUB IMsmMerge_get_Errors_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge_get_Dependencies_Proxy(IMsmMerge __RPC_FAR *This, IMsmDependencies __RPC_FAR *__RPC_FAR *Dependencies);
void __RPC_STUB IMsmMerge_get_Dependencies_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge_Merge_Proxy(IMsmMerge __RPC_FAR *This, const BSTR Feature, const BSTR RedirectDir);
void __RPC_STUB IMsmMerge_Merge_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge_Connect_Proxy(IMsmMerge __RPC_FAR *This, const BSTR Feature);
void __RPC_STUB IMsmMerge_Connect_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge_ExtractCAB_Proxy(IMsmMerge __RPC_FAR *This, const BSTR FileName);
void __RPC_STUB IMsmMerge_ExtractCAB_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge_ExtractFiles_Proxy(IMsmMerge __RPC_FAR *This, const BSTR Path);
void __RPC_STUB IMsmMerge_ExtractFiles_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IMsmGetFiles_INTERFACE_DEFINED__
#define __IMsmGetFiles_INTERFACE_DEFINED__
typedef struct IMsmGetFilesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IMsmGetFiles __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IMsmGetFiles __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IMsmGetFiles __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IMsmGetFiles __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IMsmGetFiles __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IMsmGetFiles __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IMsmGetFiles __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ModuleFiles) (IMsmGetFiles __RPC_FAR *This, IMsmStrings __RPC_FAR *__RPC_FAR *Files);
	END_INTERFACE
}  IMsmGetFilesVtbl;
interface IMsmGetFiles
{
	CONST_VTBL struct IMsmGetFilesVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IMsmGetFiles_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IMsmGetFiles_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IMsmGetFiles_Release(This) (This)->lpVtbl -> Release(This)
#define IMsmGetFiles_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IMsmGetFiles_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IMsmGetFiles_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IMsmGetFiles_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IMsmGetFiles_get_ModuleFiles(This,Files) (This)->lpVtbl -> get_ModuleFiles(This,Files)
#endif
HRESULT STDMETHODCALLTYPE IMsmGetFiles_get_ModuleFiles_Proxy(IMsmGetFiles __RPC_FAR *This, IMsmStrings __RPC_FAR *__RPC_FAR *Files);
void __RPC_STUB IMsmGetFiles_get_ModuleFiles_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#if (_WIN32_MSM >= 150)
#ifndef __IMsmMerge2_INTERFACE_DEFINED__
#define __IMsmMerge2_INTERFACE_DEFINED__
typedef struct IMsmMerge2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (IMsmMerge2 __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (IMsmMerge2 __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (IMsmMerge2 __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (IMsmMerge2 __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (IMsmMerge2 __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (IMsmMerge2 __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (IMsmMerge2 __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *OpenDatabase) (IMsmMerge2 __RPC_FAR *This, const BSTR Path);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *OpenModule) (IMsmMerge2 __RPC_FAR *This, const BSTR Path, const short Language);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *CloseDatabase) (IMsmMerge2 __RPC_FAR *This, const VARIANT_BOOL Commit);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *CloseModule) (IMsmMerge2 __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *OpenLog) (IMsmMerge2 __RPC_FAR *This, const BSTR Path);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *CloseLog) (IMsmMerge2 __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Log) (IMsmMerge2 __RPC_FAR *This, const BSTR Message);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Errors) (IMsmMerge2 __RPC_FAR *This, IMsmErrors __RPC_FAR *__RPC_FAR *Errors);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Dependencies) (IMsmMerge2 __RPC_FAR *This, IMsmDependencies __RPC_FAR *__RPC_FAR *Dependencies);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Merge) (IMsmMerge2 __RPC_FAR *This, const BSTR Feature, const BSTR RedirectDir);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Connect) (IMsmMerge2 __RPC_FAR *This, const BSTR Feature);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *ExtractCAB) (IMsmMerge2 __RPC_FAR *This, const BSTR FileName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *ExtractFiles) (IMsmMerge2 __RPC_FAR *This, const BSTR Path);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *MergeEx) (IMsmMerge2 __RPC_FAR *This, const BSTR Feature, const BSTR RedirectDir, IMsmConfigureModule __RPC_FAR *pConfiguration);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *ExtractFilesEx) (IMsmMerge2 __RPC_FAR *This, const BSTR Path, VARIANT_BOOL fLongFileNames, IMsmStrings __RPC_FAR *__RPC_FAR *pFilePaths);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ConfigurableItems) (IMsmMerge2 __RPC_FAR *This, IMsmConfigurableItems __RPC_FAR *__RPC_FAR *ConfigurableItems);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *CreateSourceImage) (IMsmMerge2 __RPC_FAR *This, const BSTR Path, VARIANT_BOOL fLongFileNames, IMsmStrings __RPC_FAR *__RPC_FAR *pFilePaths);
	HRESULT(STDMETHODCALLTYPE *get_ModuleFiles) (IMsmMerge2 *This, IMsmStrings **Files);
	END_INTERFACE
}  IMsmMerge2Vtbl;
interface IMsmMerge2
{
	CONST_VTBL struct IMsmMerge2Vtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IMsmMerge2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IMsmMerge2_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IMsmMerge2_Release(This) (This)->lpVtbl -> Release(This)
#define IMsmMerge2_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define IMsmMerge2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IMsmMerge2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IMsmMerge2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define IMsmMerge2_OpenDatabase(This,Path) (This)->lpVtbl -> OpenDatabase(This,Path)
#define IMsmMerge2_OpenModule(This,Path,Language) (This)->lpVtbl -> OpenModule(This,Path,Language)
#define IMsmMerge2_CloseDatabase(This,Commit) (This)->lpVtbl -> CloseDatabase(This,Commit)
#define IMsmMerge2_CloseModule(This) (This)->lpVtbl -> CloseModule(This)
#define IMsmMerge2_OpenLog(This,Path) (This)->lpVtbl -> OpenLog(This,Path)
#define IMsmMerge2_CloseLog(This) (This)->lpVtbl -> CloseLog(This)
#define IMsmMerge2_Log(This,Message) (This)->lpVtbl -> Log(This,Message)
#define IMsmMerge2_get_Errors(This,Errors) (This)->lpVtbl -> get_Errors(This,Errors)
#define IMsmMerge2_get_Dependencies(This,Dependencies) (This)->lpVtbl -> get_Dependencies(This,Dependencies)
#define IMsmMerge2_Merge(This,Feature,RedirectDir) (This)->lpVtbl -> Merge(This,Feature,RedirectDir)
#define IMsmMerge2_Connect(This,Feature) (This)->lpVtbl -> Connect(This,Feature)
#define IMsmMerge2_ExtractCAB(This,FileName) (This)->lpVtbl -> ExtractCAB(This,FileName)
#define IMsmMerge2_ExtractFiles(This,Path) (This)->lpVtbl -> ExtractFiles(This,Path)
#define IMsmMerge2_MergeEx(This,Feature,RedirectDir,pConfiguration) (This)->lpVtbl -> MergeEx(This,Feature,RedirectDir,pConfiguration)
#define IMsmMerge2_ExtractFilesEx(This,Path,fLongFileNames,pFilePaths) (This)->lpVtbl -> ExtractFilesEx(This,Path,fLongFileNames,pFilePaths)
#define IMsmMerge2_get_ConfigurableItems(This,ConfigurableItems) (This)->lpVtbl -> get_ConfigurableItems(This,ConfigurableItems)
#define IMsmMerge2_CreateSourceImage(This,Path,fLongFileNames,pFilePaths) (This)->lpVtbl -> CreateSourceImage(This,Path,fLongFileNames,pFilePaths)
#define IMsmMerge2_get_ModuleFiles(This,Files) (This)->lpVtbl -> get_ModuleFiles(This,Files)
#endif
HRESULT STDMETHODCALLTYPE IMsmMerge2_OpenDatabase_Proxy(IMsmMerge2 __RPC_FAR *This, const BSTR Path);
void __RPC_STUB IMsmMerge2_OpenDatabase_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_OpenModule_Proxy(IMsmMerge2 __RPC_FAR *This, const BSTR Path, const short Language);
void __RPC_STUB IMsmMerge2_OpenModule_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_CloseDatabase_Proxy(IMsmMerge2 __RPC_FAR *This, const VARIANT_BOOL Commit);
void __RPC_STUB IMsmMerge2_CloseDatabase_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_CloseModule_Proxy(IMsmMerge2 __RPC_FAR *This);
void __RPC_STUB IMsmMerge2_CloseModule_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_OpenLog_Proxy(IMsmMerge2 __RPC_FAR *This, const BSTR Path);
void __RPC_STUB IMsmMerge2_OpenLog_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_CloseLog_Proxy(IMsmMerge2 __RPC_FAR *This);
void __RPC_STUB IMsmMerge2_CloseLog_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_Log_Proxy(IMsmMerge2 __RPC_FAR *This, const BSTR Message);
void __RPC_STUB IMsmMerge2_Log_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_get_Errors_Proxy(IMsmMerge2 __RPC_FAR *This, IMsmErrors __RPC_FAR *__RPC_FAR *Errors);
void __RPC_STUB IMsmMerge2_get_Errors_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_get_Dependencies_Proxy(IMsmMerge2 __RPC_FAR *This, IMsmDependencies __RPC_FAR *__RPC_FAR *Dependencies);
void __RPC_STUB IMsmMerge2_get_Dependencies_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_Merge_Proxy(IMsmMerge2 __RPC_FAR *This, const BSTR Feature, const BSTR RedirectDir);
void __RPC_STUB IMsmMerge2_Merge_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_Connect_Proxy(IMsmMerge2 __RPC_FAR *This, const BSTR Feature);
void __RPC_STUB IMsmMerge2_Connect_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_ExtractCAB_Proxy(IMsmMerge2 __RPC_FAR *This, const BSTR FileName);
void __RPC_STUB IMsmMerge2_ExtractCAB_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_ExtractFiles_Proxy(IMsmMerge2 __RPC_FAR *This, const BSTR Path);
void __RPC_STUB IMsmMerge2_ExtractFiles_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_MergeEx_Proxy(IMsmMerge2 __RPC_FAR *This, const BSTR Feature, const BSTR RedirectDir, IMsmConfigureModule __RPC_FAR *pConfiguration);
void __RPC_STUB IMsmMerge2_MergeEx_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_ExtractFilesEx_Proxy(IMsmMerge2 __RPC_FAR *This, const BSTR Path, VARIANT_BOOL fLongFileNames, IMsmStrings __RPC_FAR *__RPC_FAR *pFilePaths);
void __RPC_STUB IMsmMerge2_ExtractFilesEx_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_get_ConfigurableItems_Proxy(IMsmMerge2 __RPC_FAR *This, IMsmConfigurableItems __RPC_FAR *__RPC_FAR *ConfigurableItems);
void __RPC_STUB IMsmMerge2_get_ConfigurableItems_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_CreateSourceImage_Proxy(IMsmMerge2 __RPC_FAR *This, const BSTR Path, VARIANT_BOOL fLongFileNames, IMsmStrings __RPC_FAR *__RPC_FAR *pFilePaths);
void __RPC_STUB IMsmMerge2_CreateSourceImage_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMsmMerge2_get_ModuleFiles_Proxy(IMsmMerge2 *This, IMsmStrings **Files);
void __RPC_STUB IMsmMerge2_get_ModuleFiles_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif
#ifndef __MsmMergeTypeLib_LIBRARY_DEFINED__
#define __MsmMergeTypeLib_LIBRARY_DEFINED__
#if (_WIN32_MSM >= 150)
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long __RPC_FAR *, unsigned long, BSTR __RPC_FAR *);
unsigned char __RPC_FAR *__RPC_USER BSTR_UserMarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR *);
unsigned char __RPC_FAR *__RPC_USER BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR *);
void __RPC_USER BSTR_UserFree(unsigned long __RPC_FAR *, BSTR __RPC_FAR *);
DEFINE_GUID(IID_IEnumMsmString, 0x0ADDA826, 0x2C26, 0x11D2, 0xAD, 0x65, 0x00, 0xA0, 0xC9, 0xAF, 0x11, 0xA6);
DEFINE_GUID(IID_IMsmStrings, 0x0ADDA827, 0x2C26, 0x11D2, 0xAD, 0x65, 0x00, 0xA0, 0xC9, 0xAF, 0x11, 0xA6);
DEFINE_GUID(IID_IMsmError, 0x0ADDA828, 0x2C26, 0x11D2, 0xAD, 0x65, 0x00, 0xA0, 0xC9, 0xAF, 0x11, 0xA6);
DEFINE_GUID(IID_IEnumMsmError, 0x0ADDA829, 0x2C26, 0x11D2, 0xAD, 0x65, 0x00, 0xA0, 0xC9, 0xAF, 0x11, 0xA6);
DEFINE_GUID(IID_IMsmErrors, 0x0ADDA82A, 0x2C26, 0x11D2, 0xAD, 0x65, 0x00, 0xA0, 0xC9, 0xAF, 0x11, 0xA6);
DEFINE_GUID(IID_IMsmDependency, 0x0ADDA82B, 0x2C26, 0x11D2, 0xAD, 0x65, 0x00, 0xA0, 0xC9, 0xAF, 0x11, 0xA6);
DEFINE_GUID(IID_IEnumMsmDependency, 0x0ADDA82C, 0x2C26, 0x11D2, 0xAD, 0x65, 0x00, 0xA0, 0xC9, 0xAF, 0x11, 0xA6);
DEFINE_GUID(IID_IMsmDependencies, 0x0ADDA82D, 0x2C26, 0x11D2, 0xAD, 0x65, 0x00, 0xA0, 0xC9, 0xAF, 0x11, 0xA6);
DEFINE_GUID(IID_IMsmMerge, 0x0ADDA82E, 0x2C26, 0x11D2, 0xAD, 0x65, 0x00, 0xA0, 0xC9, 0xAF, 0x11, 0xA6);
DEFINE_GUID(IID_IMsmGetFiles, 0x7041ae26, 0x2d78, 0x11d2, 0x88, 0x8a, 0x0, 0xa0, 0xc9, 0x81, 0xb0, 0x15);
DEFINE_GUID(LIBID_MsmMergeTypeLib, 0x0ADDA82F, 0x2C26, 0x11D2, 0xAD, 0x65, 0x00, 0xA0, 0xC9, 0xAF, 0x11, 0xA6);
DEFINE_GUID(CLSID_MsmMerge, 0x0ADDA830, 0x2C26, 0x11D2, 0xAD, 0x65, 0x00, 0xA0, 0xC9, 0xAF, 0x11, 0xA6);
#if (_WIN32_MSM >= 150)
DEFINE_GUID(IID_IMsmMerge2, 0x351A72AB, 0x21CB, 0x47AB, 0xB7, 0xAA, 0xC4, 0xD7, 0xB0, 0x2E, 0xA3, 0x05);
DEFINE_GUID(IID_IMsmConfigurableItem, 0x4D6E6284, 0xD21D, 0x401E, 0x84, 0xF6, 0x90, 0x9E, 0x00, 0xB5, 0x0F, 0x71);
DEFINE_GUID(IID_IEnumMsmConfigurableItem, 0x832C6969, 0x4826, 0x4C24, 0xA3, 0x97, 0xB7, 0x00, 0x2D, 0x81, 0x96, 0xE6);
DEFINE_GUID(IID_IMsmConfigurableItems, 0x55BF723C, 0x9A0D, 0x463E, 0xB4, 0x2B, 0xB4, 0xFB, 0xC7, 0xBE, 0x3C, 0x7C);
DEFINE_GUID(IID_IMsmConfigureModule, 0xAC013209, 0x18A7, 0x4851, 0x8A, 0x21, 0x23, 0x53, 0x44, 0x3D, 0x70, 0xA0);
DEFINE_GUID(CLSID_MsmMerge2, 0xF94985D5, 0x29F9, 0x4743, 0x98, 0x05, 0x99, 0xBC, 0x3F, 0x35, 0xB6, 0x78);
#endif
#endif
