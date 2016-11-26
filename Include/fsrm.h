/*+@@file@@----------------------------------------------------------------*//*!
 \file		fsrm.h
 \par Description            Extension and update of headers for PellesC compiler suite.
 \par Project:            PellesC Headers extension
 \date		Created  on Sun Jul 10 18:22:50 2016
 \date		Modified on Sun Jul 10 18:22:50 2016
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
#ifndef __fsrm_h__
#define __fsrm_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IFsrmObject_FWD_DEFINED__
#define __IFsrmObject_FWD_DEFINED__
typedef interface IFsrmObject IFsrmObject;
#endif
#ifndef __IFsrmCollection_FWD_DEFINED__
#define __IFsrmCollection_FWD_DEFINED__
typedef interface IFsrmCollection IFsrmCollection;
#endif
#ifndef __IFsrmMutableCollection_FWD_DEFINED__
#define __IFsrmMutableCollection_FWD_DEFINED__
typedef interface IFsrmMutableCollection IFsrmMutableCollection;
#endif
#ifndef __IFsrmCommittableCollection_FWD_DEFINED__
#define __IFsrmCommittableCollection_FWD_DEFINED__
typedef interface IFsrmCommittableCollection IFsrmCommittableCollection;
#endif
#ifndef __IFsrmAction_FWD_DEFINED__
#define __IFsrmAction_FWD_DEFINED__
typedef interface IFsrmAction IFsrmAction;
#endif
#ifndef __IFsrmActionEmail_FWD_DEFINED__
#define __IFsrmActionEmail_FWD_DEFINED__
typedef interface IFsrmActionEmail IFsrmActionEmail;
#endif
#ifndef __IFsrmActionEmail2_FWD_DEFINED__
#define __IFsrmActionEmail2_FWD_DEFINED__
typedef interface IFsrmActionEmail2 IFsrmActionEmail2;
#endif
#ifndef __IFsrmActionReport_FWD_DEFINED__
#define __IFsrmActionReport_FWD_DEFINED__
typedef interface IFsrmActionReport IFsrmActionReport;
#endif
#ifndef __IFsrmActionEventLog_FWD_DEFINED__
#define __IFsrmActionEventLog_FWD_DEFINED__
typedef interface IFsrmActionEventLog IFsrmActionEventLog;
#endif
#ifndef __IFsrmActionCommand_FWD_DEFINED__
#define __IFsrmActionCommand_FWD_DEFINED__
typedef interface IFsrmActionCommand IFsrmActionCommand;
#endif
#ifndef __IFsrmSetting_FWD_DEFINED__
#define __IFsrmSetting_FWD_DEFINED__
typedef interface IFsrmSetting IFsrmSetting;
#endif
#ifndef __IFsrmPathMapper_FWD_DEFINED__
#define __IFsrmPathMapper_FWD_DEFINED__
typedef interface IFsrmPathMapper IFsrmPathMapper;
#endif
#ifndef __IFsrmExportImport_FWD_DEFINED__
#define __IFsrmExportImport_FWD_DEFINED__
typedef interface IFsrmExportImport IFsrmExportImport;
#endif
#ifndef __IFsrmDerivedObjectsResult_FWD_DEFINED__
#define __IFsrmDerivedObjectsResult_FWD_DEFINED__
typedef interface IFsrmDerivedObjectsResult IFsrmDerivedObjectsResult;
#endif
#include <oaidl.h>
#include <fsrmenums.h>
#define	FSRM_DISPID_FEATURE_MASK	( 0xf000000 )
#define	FSRM_DISPID_INTERFACE_A_MASK	( 0xf00000 )
#define	FSRM_DISPID_INTERFACE_B_MASK	( 0xf0000 )
#define	FSRM_DISPID_INTERFACE_C_MASK	( 0xf000 )
#define	FSRM_DISPID_INTERFACE_D_MASK	( 0xf00 )
#define	FSRM_DISPID_INTERFACE_MASK	( ( ( ( FSRM_DISPID_INTERFACE_A_MASK | FSRM_DISPID_INTERFACE_B_MASK )  | FSRM_DISPID_INTERFACE_C_MASK )  | FSRM_DISPID_INTERFACE_D_MASK )  )
#define	FSRM_DISPID_IS_PROPERTY	( 0x80 )
#define	FSRM_DISPID_METHOD_NUM_MASK	( 0x7f )
#define	FSRM_DISPID_METHOD_MASK	( ( FSRM_DISPID_IS_PROPERTY | FSRM_DISPID_METHOD_NUM_MASK )  )
#define	FSRM_DISPID_FEATURE_GENERAL	( 0x1000000 )
#define	FSRM_DISPID_FEATURE_QUOTA	( 0x2000000 )
#define	FSRM_DISPID_FEATURE_FILESCREEN	( 0x3000000 )
#define	FSRM_DISPID_FEATURE_REPORTS	( 0x4000000 )
#define	FSRM_DISPID_FEATURE_CLASSIFICATION	( 0x5000000 )
#define	FSRM_DISPID_FEATURE_PIPELINE	( 0x6000000 )
#define	FSRM_DISPID_OBJECT	( ( FSRM_DISPID_FEATURE_GENERAL | 0x100000 )  )
#define	FSRM_DISPID_COLLECTION	( ( FSRM_DISPID_FEATURE_GENERAL | 0x200000 )  )
#define	FSRM_DISPID_COLLECTION_MUTABLE	( ( FSRM_DISPID_COLLECTION | 0x10000 )  )
#define	FSRM_DISPID_COLLECTION_COMMITTABLE	( ( FSRM_DISPID_COLLECTION_MUTABLE | 0x1000 )  )
#define	FSRM_DISPID_ACTION	( ( FSRM_DISPID_FEATURE_GENERAL | 0x300000 )  )
#define	FSRM_DISPID_ACTION_EMAIL	( ( FSRM_DISPID_ACTION | 0x10000 )  )
#define	FSRM_DISPID_ACTION_REPORT	( ( FSRM_DISPID_ACTION | 0x20000 )  )
#define	FSRM_DISPID_ACTION_EVENTLOG	( ( FSRM_DISPID_ACTION | 0x30000 )  )
#define	FSRM_DISPID_ACTION_COMMAND	( ( FSRM_DISPID_ACTION | 0x40000 )  )
#define	FSRM_DISPID_ACTION_EMAIL2	( ( FSRM_DISPID_ACTION | 0x50000 )  )
#define	FSRM_DISPID_SETTING	( ( FSRM_DISPID_FEATURE_GENERAL | 0x400000 )  )
#define	FSRM_DISPID_PATHMAPPER	( ( FSRM_DISPID_FEATURE_GENERAL | 0x500000 )  )
#define	FSRM_DISPID_EXPORTIMPORT	( ( FSRM_DISPID_FEATURE_GENERAL | 0x600000 )  )
#define	FSRM_DISPID_DERIVEDOBJECTSRESULT	( ( FSRM_DISPID_FEATURE_GENERAL | 0x700000 )  )
extern RPC_IF_HANDLE __MIDL_itf_fsrm_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrm_0000_0000_v0_0_s_ifspec;
#ifndef __IFsrmObject_INTERFACE_DEFINED__
#define __IFsrmObject_INTERFACE_DEFINED__
extern const IID IID_IFsrmObject;
typedef struct IFsrmObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmObject * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmObject * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmObject * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmObject * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmObject * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmObject * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmObject * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmObject * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmObject * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmObject * This);
	END_INTERFACE
}  IFsrmObjectVtbl;
interface IFsrmObject
{
	CONST_VTBL struct IFsrmObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmObject_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmObject_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmObject_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmObject_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmObject_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmObject_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmObject_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmObject_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmObject_Commit(This)( (This)->lpVtbl -> Commit(This) )
#endif
#endif
#ifndef __IFsrmCollection_INTERFACE_DEFINED__
#define __IFsrmCollection_INTERFACE_DEFINED__
extern const IID IID_IFsrmCollection;
typedef struct IFsrmCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IFsrmCollection * This, IUnknown ** unknown);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFsrmCollection * This, long index, VARIANT * item);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFsrmCollection * This, long *count);
	HRESULT(STDMETHODCALLTYPE * get_State) (IFsrmCollection * This, FsrmCollectionState * state);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IFsrmCollection * This);
	HRESULT(STDMETHODCALLTYPE * WaitForCompletion) (IFsrmCollection * This, long waitSeconds, VARIANT_BOOL * completed);
	HRESULT(STDMETHODCALLTYPE * GetById) (IFsrmCollection * This, FSRM_OBJECT_ID id, VARIANT * entry);
	END_INTERFACE
}  IFsrmCollectionVtbl;
interface IFsrmCollection
{
	CONST_VTBL struct IFsrmCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmCollection_get__NewEnum(This,unknown)( (This)->lpVtbl -> get__NewEnum(This,unknown) )
#define IFsrmCollection_get_Item(This,index,item)( (This)->lpVtbl -> get_Item(This,index,item) )
#define IFsrmCollection_get_Count(This,count)( (This)->lpVtbl -> get_Count(This,count) )
#define IFsrmCollection_get_State(This,state)( (This)->lpVtbl -> get_State(This,state) )
#define IFsrmCollection_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#define IFsrmCollection_WaitForCompletion(This,waitSeconds,completed)( (This)->lpVtbl -> WaitForCompletion(This,waitSeconds,completed) )
#define IFsrmCollection_GetById(This,id,entry)( (This)->lpVtbl -> GetById(This,id,entry) )
#endif
#endif
#ifndef __IFsrmMutableCollection_INTERFACE_DEFINED__
#define __IFsrmMutableCollection_INTERFACE_DEFINED__
extern const IID IID_IFsrmMutableCollection;
typedef struct IFsrmMutableCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmMutableCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmMutableCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmMutableCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmMutableCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmMutableCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmMutableCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmMutableCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IFsrmMutableCollection * This, IUnknown ** unknown);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFsrmMutableCollection * This, long index, VARIANT * item);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFsrmMutableCollection * This, long *count);
	HRESULT(STDMETHODCALLTYPE * get_State) (IFsrmMutableCollection * This, FsrmCollectionState * state);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IFsrmMutableCollection * This);
	HRESULT(STDMETHODCALLTYPE * WaitForCompletion) (IFsrmMutableCollection * This, long waitSeconds, VARIANT_BOOL * completed);
	HRESULT(STDMETHODCALLTYPE * GetById) (IFsrmMutableCollection * This, FSRM_OBJECT_ID id, VARIANT * entry);
	HRESULT(STDMETHODCALLTYPE * Add) (IFsrmMutableCollection * This, VARIANT item);
	HRESULT(STDMETHODCALLTYPE * Remove) (IFsrmMutableCollection * This, long index);
	HRESULT(STDMETHODCALLTYPE * RemoveById) (IFsrmMutableCollection * This, FSRM_OBJECT_ID id);
	HRESULT(STDMETHODCALLTYPE * Clone) (IFsrmMutableCollection * This, IFsrmMutableCollection ** collection);
	END_INTERFACE
}  IFsrmMutableCollectionVtbl;
interface IFsrmMutableCollection
{
	CONST_VTBL struct IFsrmMutableCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmMutableCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmMutableCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmMutableCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmMutableCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmMutableCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmMutableCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmMutableCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmMutableCollection_get__NewEnum(This,unknown)( (This)->lpVtbl -> get__NewEnum(This,unknown) )
#define IFsrmMutableCollection_get_Item(This,index,item)( (This)->lpVtbl -> get_Item(This,index,item) )
#define IFsrmMutableCollection_get_Count(This,count)( (This)->lpVtbl -> get_Count(This,count) )
#define IFsrmMutableCollection_get_State(This,state)( (This)->lpVtbl -> get_State(This,state) )
#define IFsrmMutableCollection_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#define IFsrmMutableCollection_WaitForCompletion(This,waitSeconds,completed)( (This)->lpVtbl -> WaitForCompletion(This,waitSeconds,completed) )
#define IFsrmMutableCollection_GetById(This,id,entry)( (This)->lpVtbl -> GetById(This,id,entry) )
#define IFsrmMutableCollection_Add(This,item)( (This)->lpVtbl -> Add(This,item) )
#define IFsrmMutableCollection_Remove(This,index)( (This)->lpVtbl -> Remove(This,index) )
#define IFsrmMutableCollection_RemoveById(This,id)( (This)->lpVtbl -> RemoveById(This,id) )
#define IFsrmMutableCollection_Clone(This,collection)( (This)->lpVtbl -> Clone(This,collection) )
#endif
#endif
#ifndef __IFsrmCommittableCollection_INTERFACE_DEFINED__
#define __IFsrmCommittableCollection_INTERFACE_DEFINED__
extern const IID IID_IFsrmCommittableCollection;
typedef struct IFsrmCommittableCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmCommittableCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmCommittableCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmCommittableCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmCommittableCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmCommittableCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmCommittableCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmCommittableCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IFsrmCommittableCollection * This, IUnknown ** unknown);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFsrmCommittableCollection * This, long index, VARIANT * item);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFsrmCommittableCollection * This, long *count);
	HRESULT(STDMETHODCALLTYPE * get_State) (IFsrmCommittableCollection * This, FsrmCollectionState * state);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IFsrmCommittableCollection * This);
	HRESULT(STDMETHODCALLTYPE * WaitForCompletion) (IFsrmCommittableCollection * This, long waitSeconds, VARIANT_BOOL * completed);
	HRESULT(STDMETHODCALLTYPE * GetById) (IFsrmCommittableCollection * This, FSRM_OBJECT_ID id, VARIANT * entry);
	HRESULT(STDMETHODCALLTYPE * Add) (IFsrmCommittableCollection * This, VARIANT item);
	HRESULT(STDMETHODCALLTYPE * Remove) (IFsrmCommittableCollection * This, long index);
	HRESULT(STDMETHODCALLTYPE * RemoveById) (IFsrmCommittableCollection * This, FSRM_OBJECT_ID id);
	HRESULT(STDMETHODCALLTYPE * Clone) (IFsrmCommittableCollection * This, IFsrmMutableCollection ** collection);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmCommittableCollection * This, FsrmCommitOptions options, IFsrmCollection ** results);
	END_INTERFACE
}  IFsrmCommittableCollectionVtbl;
interface IFsrmCommittableCollection
{
	CONST_VTBL struct IFsrmCommittableCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmCommittableCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmCommittableCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmCommittableCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmCommittableCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmCommittableCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmCommittableCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmCommittableCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmCommittableCollection_get__NewEnum(This,unknown)( (This)->lpVtbl -> get__NewEnum(This,unknown) )
#define IFsrmCommittableCollection_get_Item(This,index,item)( (This)->lpVtbl -> get_Item(This,index,item) )
#define IFsrmCommittableCollection_get_Count(This,count)( (This)->lpVtbl -> get_Count(This,count) )
#define IFsrmCommittableCollection_get_State(This,state)( (This)->lpVtbl -> get_State(This,state) )
#define IFsrmCommittableCollection_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#define IFsrmCommittableCollection_WaitForCompletion(This,waitSeconds,completed)( (This)->lpVtbl -> WaitForCompletion(This,waitSeconds,completed) )
#define IFsrmCommittableCollection_GetById(This,id,entry)( (This)->lpVtbl -> GetById(This,id,entry) )
#define IFsrmCommittableCollection_Add(This,item)( (This)->lpVtbl -> Add(This,item) )
#define IFsrmCommittableCollection_Remove(This,index)( (This)->lpVtbl -> Remove(This,index) )
#define IFsrmCommittableCollection_RemoveById(This,id)( (This)->lpVtbl -> RemoveById(This,id) )
#define IFsrmCommittableCollection_Clone(This,collection)( (This)->lpVtbl -> Clone(This,collection) )
#define IFsrmCommittableCollection_Commit(This,options,results)( (This)->lpVtbl -> Commit(This,options,results) )
#endif
#endif
#ifndef __IFsrmAction_INTERFACE_DEFINED__
#define __IFsrmAction_INTERFACE_DEFINED__
extern const IID IID_IFsrmAction;
typedef struct IFsrmActionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmAction * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmAction * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmAction * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmAction * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmAction * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmAction * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmAction * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmAction * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_ActionType) (IFsrmAction * This, FsrmActionType * actionType);
	HRESULT(STDMETHODCALLTYPE * get_RunLimitInterval) (IFsrmAction * This, long *minutes);
	HRESULT(STDMETHODCALLTYPE * put_RunLimitInterval) (IFsrmAction * This, long minutes);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmAction * This);
	END_INTERFACE
}  IFsrmActionVtbl;
interface IFsrmAction
{
	CONST_VTBL struct IFsrmActionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmAction_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmAction_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmAction_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmAction_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmAction_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmAction_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmAction_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmAction_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmAction_get_ActionType(This,actionType)( (This)->lpVtbl -> get_ActionType(This,actionType) )
#define IFsrmAction_get_RunLimitInterval(This,minutes)( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) )
#define IFsrmAction_put_RunLimitInterval(This,minutes)( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) )
#define IFsrmAction_Delete(This)( (This)->lpVtbl -> Delete(This) )
#endif
#endif
#ifndef __IFsrmActionEmail_INTERFACE_DEFINED__
#define __IFsrmActionEmail_INTERFACE_DEFINED__
extern const IID IID_IFsrmActionEmail;
typedef struct IFsrmActionEmailVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmActionEmail * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmActionEmail * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmActionEmail * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmActionEmail * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmActionEmail * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmActionEmail * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmActionEmail * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmActionEmail * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_ActionType) (IFsrmActionEmail * This, FsrmActionType * actionType);
	HRESULT(STDMETHODCALLTYPE * get_RunLimitInterval) (IFsrmActionEmail * This, long *minutes);
	HRESULT(STDMETHODCALLTYPE * put_RunLimitInterval) (IFsrmActionEmail * This, long minutes);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmActionEmail * This);
	HRESULT(STDMETHODCALLTYPE * get_MailFrom) (IFsrmActionEmail * This, BSTR * mailFrom);
	HRESULT(STDMETHODCALLTYPE * put_MailFrom) (IFsrmActionEmail * This, BSTR mailFrom);
	HRESULT(STDMETHODCALLTYPE * get_MailReplyTo) (IFsrmActionEmail * This, BSTR * mailReplyTo);
	HRESULT(STDMETHODCALLTYPE * put_MailReplyTo) (IFsrmActionEmail * This, BSTR mailReplyTo);
	HRESULT(STDMETHODCALLTYPE * get_MailTo) (IFsrmActionEmail * This, BSTR * mailTo);
	HRESULT(STDMETHODCALLTYPE * put_MailTo) (IFsrmActionEmail * This, BSTR mailTo);
	HRESULT(STDMETHODCALLTYPE * get_MailCc) (IFsrmActionEmail * This, BSTR * mailCc);
	HRESULT(STDMETHODCALLTYPE * put_MailCc) (IFsrmActionEmail * This, BSTR mailCc);
	HRESULT(STDMETHODCALLTYPE * get_MailBcc) (IFsrmActionEmail * This, BSTR * mailBcc);
	HRESULT(STDMETHODCALLTYPE * put_MailBcc) (IFsrmActionEmail * This, BSTR mailBcc);
	HRESULT(STDMETHODCALLTYPE * get_MailSubject) (IFsrmActionEmail * This, BSTR * mailSubject);
	HRESULT(STDMETHODCALLTYPE * put_MailSubject) (IFsrmActionEmail * This, BSTR mailSubject);
	HRESULT(STDMETHODCALLTYPE * get_MessageText) (IFsrmActionEmail * This, BSTR * messageText);
	HRESULT(STDMETHODCALLTYPE * put_MessageText) (IFsrmActionEmail * This, BSTR messageText);
	END_INTERFACE
}  IFsrmActionEmailVtbl;
interface IFsrmActionEmail
{
	CONST_VTBL struct IFsrmActionEmailVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmActionEmail_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmActionEmail_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmActionEmail_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmActionEmail_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmActionEmail_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmActionEmail_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmActionEmail_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmActionEmail_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmActionEmail_get_ActionType(This,actionType)( (This)->lpVtbl -> get_ActionType(This,actionType) )
#define IFsrmActionEmail_get_RunLimitInterval(This,minutes)( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) )
#define IFsrmActionEmail_put_RunLimitInterval(This,minutes)( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) )
#define IFsrmActionEmail_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmActionEmail_get_MailFrom(This,mailFrom)( (This)->lpVtbl -> get_MailFrom(This,mailFrom) )
#define IFsrmActionEmail_put_MailFrom(This,mailFrom)( (This)->lpVtbl -> put_MailFrom(This,mailFrom) )
#define IFsrmActionEmail_get_MailReplyTo(This,mailReplyTo)( (This)->lpVtbl -> get_MailReplyTo(This,mailReplyTo) )
#define IFsrmActionEmail_put_MailReplyTo(This,mailReplyTo)( (This)->lpVtbl -> put_MailReplyTo(This,mailReplyTo) )
#define IFsrmActionEmail_get_MailTo(This,mailTo)( (This)->lpVtbl -> get_MailTo(This,mailTo) )
#define IFsrmActionEmail_put_MailTo(This,mailTo)( (This)->lpVtbl -> put_MailTo(This,mailTo) )
#define IFsrmActionEmail_get_MailCc(This,mailCc)( (This)->lpVtbl -> get_MailCc(This,mailCc) )
#define IFsrmActionEmail_put_MailCc(This,mailCc)( (This)->lpVtbl -> put_MailCc(This,mailCc) )
#define IFsrmActionEmail_get_MailBcc(This,mailBcc)( (This)->lpVtbl -> get_MailBcc(This,mailBcc) )
#define IFsrmActionEmail_put_MailBcc(This,mailBcc)( (This)->lpVtbl -> put_MailBcc(This,mailBcc) )
#define IFsrmActionEmail_get_MailSubject(This,mailSubject)( (This)->lpVtbl -> get_MailSubject(This,mailSubject) )
#define IFsrmActionEmail_put_MailSubject(This,mailSubject)( (This)->lpVtbl -> put_MailSubject(This,mailSubject) )
#define IFsrmActionEmail_get_MessageText(This,messageText)( (This)->lpVtbl -> get_MessageText(This,messageText) )
#define IFsrmActionEmail_put_MessageText(This,messageText)( (This)->lpVtbl -> put_MessageText(This,messageText) )
#endif
#endif
#ifndef __IFsrmActionEmail2_INTERFACE_DEFINED__
#define __IFsrmActionEmail2_INTERFACE_DEFINED__
extern const IID IID_IFsrmActionEmail2;
typedef struct IFsrmActionEmail2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmActionEmail2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmActionEmail2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmActionEmail2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmActionEmail2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmActionEmail2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmActionEmail2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmActionEmail2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmActionEmail2 * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_ActionType) (IFsrmActionEmail2 * This, FsrmActionType * actionType);
	HRESULT(STDMETHODCALLTYPE * get_RunLimitInterval) (IFsrmActionEmail2 * This, long *minutes);
	HRESULT(STDMETHODCALLTYPE * put_RunLimitInterval) (IFsrmActionEmail2 * This, long minutes);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmActionEmail2 * This);
	HRESULT(STDMETHODCALLTYPE * get_MailFrom) (IFsrmActionEmail2 * This, BSTR * mailFrom);
	HRESULT(STDMETHODCALLTYPE * put_MailFrom) (IFsrmActionEmail2 * This, BSTR mailFrom);
	HRESULT(STDMETHODCALLTYPE * get_MailReplyTo) (IFsrmActionEmail2 * This, BSTR * mailReplyTo);
	HRESULT(STDMETHODCALLTYPE * put_MailReplyTo) (IFsrmActionEmail2 * This, BSTR mailReplyTo);
	HRESULT(STDMETHODCALLTYPE * get_MailTo) (IFsrmActionEmail2 * This, BSTR * mailTo);
	HRESULT(STDMETHODCALLTYPE * put_MailTo) (IFsrmActionEmail2 * This, BSTR mailTo);
	HRESULT(STDMETHODCALLTYPE * get_MailCc) (IFsrmActionEmail2 * This, BSTR * mailCc);
	HRESULT(STDMETHODCALLTYPE * put_MailCc) (IFsrmActionEmail2 * This, BSTR mailCc);
	HRESULT(STDMETHODCALLTYPE * get_MailBcc) (IFsrmActionEmail2 * This, BSTR * mailBcc);
	HRESULT(STDMETHODCALLTYPE * put_MailBcc) (IFsrmActionEmail2 * This, BSTR mailBcc);
	HRESULT(STDMETHODCALLTYPE * get_MailSubject) (IFsrmActionEmail2 * This, BSTR * mailSubject);
	HRESULT(STDMETHODCALLTYPE * put_MailSubject) (IFsrmActionEmail2 * This, BSTR mailSubject);
	HRESULT(STDMETHODCALLTYPE * get_MessageText) (IFsrmActionEmail2 * This, BSTR * messageText);
	HRESULT(STDMETHODCALLTYPE * put_MessageText) (IFsrmActionEmail2 * This, BSTR messageText);
	HRESULT(STDMETHODCALLTYPE * get_AttachmentFileListSize) (IFsrmActionEmail2 * This, long *attachmentFileListSize);
	HRESULT(STDMETHODCALLTYPE * put_AttachmentFileListSize) (IFsrmActionEmail2 * This, long attachmentFileListSize);
	END_INTERFACE
}  IFsrmActionEmail2Vtbl;
interface IFsrmActionEmail2
{
	CONST_VTBL struct IFsrmActionEmail2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmActionEmail2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmActionEmail2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmActionEmail2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmActionEmail2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmActionEmail2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmActionEmail2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmActionEmail2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmActionEmail2_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmActionEmail2_get_ActionType(This,actionType)( (This)->lpVtbl -> get_ActionType(This,actionType) )
#define IFsrmActionEmail2_get_RunLimitInterval(This,minutes)( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) )
#define IFsrmActionEmail2_put_RunLimitInterval(This,minutes)( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) )
#define IFsrmActionEmail2_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmActionEmail2_get_MailFrom(This,mailFrom)( (This)->lpVtbl -> get_MailFrom(This,mailFrom) )
#define IFsrmActionEmail2_put_MailFrom(This,mailFrom)( (This)->lpVtbl -> put_MailFrom(This,mailFrom) )
#define IFsrmActionEmail2_get_MailReplyTo(This,mailReplyTo)( (This)->lpVtbl -> get_MailReplyTo(This,mailReplyTo) )
#define IFsrmActionEmail2_put_MailReplyTo(This,mailReplyTo)( (This)->lpVtbl -> put_MailReplyTo(This,mailReplyTo) )
#define IFsrmActionEmail2_get_MailTo(This,mailTo)( (This)->lpVtbl -> get_MailTo(This,mailTo) )
#define IFsrmActionEmail2_put_MailTo(This,mailTo)( (This)->lpVtbl -> put_MailTo(This,mailTo) )
#define IFsrmActionEmail2_get_MailCc(This,mailCc)( (This)->lpVtbl -> get_MailCc(This,mailCc) )
#define IFsrmActionEmail2_put_MailCc(This,mailCc)( (This)->lpVtbl -> put_MailCc(This,mailCc) )
#define IFsrmActionEmail2_get_MailBcc(This,mailBcc)( (This)->lpVtbl -> get_MailBcc(This,mailBcc) )
#define IFsrmActionEmail2_put_MailBcc(This,mailBcc)( (This)->lpVtbl -> put_MailBcc(This,mailBcc) )
#define IFsrmActionEmail2_get_MailSubject(This,mailSubject)( (This)->lpVtbl -> get_MailSubject(This,mailSubject) )
#define IFsrmActionEmail2_put_MailSubject(This,mailSubject)( (This)->lpVtbl -> put_MailSubject(This,mailSubject) )
#define IFsrmActionEmail2_get_MessageText(This,messageText)( (This)->lpVtbl -> get_MessageText(This,messageText) )
#define IFsrmActionEmail2_put_MessageText(This,messageText)( (This)->lpVtbl -> put_MessageText(This,messageText) )
#define IFsrmActionEmail2_get_AttachmentFileListSize(This,attachmentFileListSize)( (This)->lpVtbl -> get_AttachmentFileListSize(This,attachmentFileListSize) )
#define IFsrmActionEmail2_put_AttachmentFileListSize(This,attachmentFileListSize)( (This)->lpVtbl -> put_AttachmentFileListSize(This,attachmentFileListSize) )
#endif
#endif
#ifndef __IFsrmActionReport_INTERFACE_DEFINED__
#define __IFsrmActionReport_INTERFACE_DEFINED__
extern const IID IID_IFsrmActionReport;
typedef struct IFsrmActionReportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmActionReport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmActionReport * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmActionReport * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmActionReport * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmActionReport * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmActionReport * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmActionReport * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmActionReport * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_ActionType) (IFsrmActionReport * This, FsrmActionType * actionType);
	HRESULT(STDMETHODCALLTYPE * get_RunLimitInterval) (IFsrmActionReport * This, long *minutes);
	HRESULT(STDMETHODCALLTYPE * put_RunLimitInterval) (IFsrmActionReport * This, long minutes);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmActionReport * This);
	HRESULT(STDMETHODCALLTYPE * get_ReportTypes) (IFsrmActionReport * This, SAFEARRAY * *reportTypes);
	HRESULT(STDMETHODCALLTYPE * put_ReportTypes) (IFsrmActionReport * This, SAFEARRAY * reportTypes);
	HRESULT(STDMETHODCALLTYPE * get_MailTo) (IFsrmActionReport * This, BSTR * mailTo);
	HRESULT(STDMETHODCALLTYPE * put_MailTo) (IFsrmActionReport * This, BSTR mailTo);
	END_INTERFACE
}  IFsrmActionReportVtbl;
interface IFsrmActionReport
{
	CONST_VTBL struct IFsrmActionReportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmActionReport_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmActionReport_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmActionReport_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmActionReport_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmActionReport_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmActionReport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmActionReport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmActionReport_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmActionReport_get_ActionType(This,actionType)( (This)->lpVtbl -> get_ActionType(This,actionType) )
#define IFsrmActionReport_get_RunLimitInterval(This,minutes)( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) )
#define IFsrmActionReport_put_RunLimitInterval(This,minutes)( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) )
#define IFsrmActionReport_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmActionReport_get_ReportTypes(This,reportTypes)( (This)->lpVtbl -> get_ReportTypes(This,reportTypes) )
#define IFsrmActionReport_put_ReportTypes(This,reportTypes)( (This)->lpVtbl -> put_ReportTypes(This,reportTypes) )
#define IFsrmActionReport_get_MailTo(This,mailTo)( (This)->lpVtbl -> get_MailTo(This,mailTo) )
#define IFsrmActionReport_put_MailTo(This,mailTo)( (This)->lpVtbl -> put_MailTo(This,mailTo) )
#endif
#endif
#ifndef __IFsrmActionEventLog_INTERFACE_DEFINED__
#define __IFsrmActionEventLog_INTERFACE_DEFINED__
extern const IID IID_IFsrmActionEventLog;
typedef struct IFsrmActionEventLogVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmActionEventLog * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmActionEventLog * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmActionEventLog * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmActionEventLog * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmActionEventLog * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmActionEventLog * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmActionEventLog * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmActionEventLog * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_ActionType) (IFsrmActionEventLog * This, FsrmActionType * actionType);
	HRESULT(STDMETHODCALLTYPE * get_RunLimitInterval) (IFsrmActionEventLog * This, long *minutes);
	HRESULT(STDMETHODCALLTYPE * put_RunLimitInterval) (IFsrmActionEventLog * This, long minutes);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmActionEventLog * This);
	HRESULT(STDMETHODCALLTYPE * get_EventType) (IFsrmActionEventLog * This, FsrmEventType * eventType);
	HRESULT(STDMETHODCALLTYPE * put_EventType) (IFsrmActionEventLog * This, FsrmEventType eventType);
	HRESULT(STDMETHODCALLTYPE * get_MessageText) (IFsrmActionEventLog * This, BSTR * messageText);
	HRESULT(STDMETHODCALLTYPE * put_MessageText) (IFsrmActionEventLog * This, BSTR messageText);
	END_INTERFACE
}  IFsrmActionEventLogVtbl;
interface IFsrmActionEventLog
{
	CONST_VTBL struct IFsrmActionEventLogVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmActionEventLog_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmActionEventLog_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmActionEventLog_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmActionEventLog_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmActionEventLog_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmActionEventLog_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmActionEventLog_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmActionEventLog_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmActionEventLog_get_ActionType(This,actionType)( (This)->lpVtbl -> get_ActionType(This,actionType) )
#define IFsrmActionEventLog_get_RunLimitInterval(This,minutes)( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) )
#define IFsrmActionEventLog_put_RunLimitInterval(This,minutes)( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) )
#define IFsrmActionEventLog_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmActionEventLog_get_EventType(This,eventType)( (This)->lpVtbl -> get_EventType(This,eventType) )
#define IFsrmActionEventLog_put_EventType(This,eventType)( (This)->lpVtbl -> put_EventType(This,eventType) )
#define IFsrmActionEventLog_get_MessageText(This,messageText)( (This)->lpVtbl -> get_MessageText(This,messageText) )
#define IFsrmActionEventLog_put_MessageText(This,messageText)( (This)->lpVtbl -> put_MessageText(This,messageText) )
#endif
#endif
#ifndef __IFsrmActionCommand_INTERFACE_DEFINED__
#define __IFsrmActionCommand_INTERFACE_DEFINED__
extern const IID IID_IFsrmActionCommand;
typedef struct IFsrmActionCommandVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmActionCommand * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmActionCommand * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmActionCommand * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmActionCommand * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmActionCommand * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmActionCommand * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmActionCommand * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmActionCommand * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_ActionType) (IFsrmActionCommand * This, FsrmActionType * actionType);
	HRESULT(STDMETHODCALLTYPE * get_RunLimitInterval) (IFsrmActionCommand * This, long *minutes);
	HRESULT(STDMETHODCALLTYPE * put_RunLimitInterval) (IFsrmActionCommand * This, long minutes);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmActionCommand * This);
	HRESULT(STDMETHODCALLTYPE * get_ExecutablePath) (IFsrmActionCommand * This, BSTR * executablePath);
	HRESULT(STDMETHODCALLTYPE * put_ExecutablePath) (IFsrmActionCommand * This, BSTR executablePath);
	HRESULT(STDMETHODCALLTYPE * get_Arguments) (IFsrmActionCommand * This, BSTR * arguments);
	HRESULT(STDMETHODCALLTYPE * put_Arguments) (IFsrmActionCommand * This, BSTR arguments);
	HRESULT(STDMETHODCALLTYPE * get_Account) (IFsrmActionCommand * This, FsrmAccountType * account);
	HRESULT(STDMETHODCALLTYPE * put_Account) (IFsrmActionCommand * This, FsrmAccountType account);
	HRESULT(STDMETHODCALLTYPE * get_WorkingDirectory) (IFsrmActionCommand * This, BSTR * workingDirectory);
	HRESULT(STDMETHODCALLTYPE * put_WorkingDirectory) (IFsrmActionCommand * This, BSTR workingDirectory);
	HRESULT(STDMETHODCALLTYPE * get_MonitorCommand) (IFsrmActionCommand * This, VARIANT_BOOL * monitorCommand);
	HRESULT(STDMETHODCALLTYPE * put_MonitorCommand) (IFsrmActionCommand * This, VARIANT_BOOL monitorCommand);
	HRESULT(STDMETHODCALLTYPE * get_KillTimeOut) (IFsrmActionCommand * This, long *minutes);
	HRESULT(STDMETHODCALLTYPE * put_KillTimeOut) (IFsrmActionCommand * This, long minutes);
	HRESULT(STDMETHODCALLTYPE * get_LogResult) (IFsrmActionCommand * This, VARIANT_BOOL * logResults);
	HRESULT(STDMETHODCALLTYPE * put_LogResult) (IFsrmActionCommand * This, VARIANT_BOOL logResults);
	END_INTERFACE
}  IFsrmActionCommandVtbl;
interface IFsrmActionCommand
{
	CONST_VTBL struct IFsrmActionCommandVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmActionCommand_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmActionCommand_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmActionCommand_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmActionCommand_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmActionCommand_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmActionCommand_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmActionCommand_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmActionCommand_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmActionCommand_get_ActionType(This,actionType)( (This)->lpVtbl -> get_ActionType(This,actionType) )
#define IFsrmActionCommand_get_RunLimitInterval(This,minutes)( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) )
#define IFsrmActionCommand_put_RunLimitInterval(This,minutes)( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) )
#define IFsrmActionCommand_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmActionCommand_get_ExecutablePath(This,executablePath)( (This)->lpVtbl -> get_ExecutablePath(This,executablePath) )
#define IFsrmActionCommand_put_ExecutablePath(This,executablePath)( (This)->lpVtbl -> put_ExecutablePath(This,executablePath) )
#define IFsrmActionCommand_get_Arguments(This,arguments)( (This)->lpVtbl -> get_Arguments(This,arguments) )
#define IFsrmActionCommand_put_Arguments(This,arguments)( (This)->lpVtbl -> put_Arguments(This,arguments) )
#define IFsrmActionCommand_get_Account(This,account)( (This)->lpVtbl -> get_Account(This,account) )
#define IFsrmActionCommand_put_Account(This,account)( (This)->lpVtbl -> put_Account(This,account) )
#define IFsrmActionCommand_get_WorkingDirectory(This,workingDirectory)( (This)->lpVtbl -> get_WorkingDirectory(This,workingDirectory) )
#define IFsrmActionCommand_put_WorkingDirectory(This,workingDirectory)( (This)->lpVtbl -> put_WorkingDirectory(This,workingDirectory) )
#define IFsrmActionCommand_get_MonitorCommand(This,monitorCommand)( (This)->lpVtbl -> get_MonitorCommand(This,monitorCommand) )
#define IFsrmActionCommand_put_MonitorCommand(This,monitorCommand)( (This)->lpVtbl -> put_MonitorCommand(This,monitorCommand) )
#define IFsrmActionCommand_get_KillTimeOut(This,minutes)( (This)->lpVtbl -> get_KillTimeOut(This,minutes) )
#define IFsrmActionCommand_put_KillTimeOut(This,minutes)( (This)->lpVtbl -> put_KillTimeOut(This,minutes) )
#define IFsrmActionCommand_get_LogResult(This,logResults)( (This)->lpVtbl -> get_LogResult(This,logResults) )
#define IFsrmActionCommand_put_LogResult(This,logResults)( (This)->lpVtbl -> put_LogResult(This,logResults) )
#endif
#endif
#ifndef __IFsrmSetting_INTERFACE_DEFINED__
#define __IFsrmSetting_INTERFACE_DEFINED__
extern const IID IID_IFsrmSetting;
typedef struct IFsrmSettingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmSetting * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmSetting * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmSetting * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmSetting * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmSetting * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmSetting * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmSetting * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_SmtpServer) (IFsrmSetting * This, BSTR * smtpServer);
	HRESULT(STDMETHODCALLTYPE * put_SmtpServer) (IFsrmSetting * This, BSTR smtpServer);
	HRESULT(STDMETHODCALLTYPE * get_MailFrom) (IFsrmSetting * This, BSTR * mailFrom);
	HRESULT(STDMETHODCALLTYPE * put_MailFrom) (IFsrmSetting * This, BSTR mailFrom);
	HRESULT(STDMETHODCALLTYPE * get_AdminEmail) (IFsrmSetting * This, BSTR * adminEmail);
	HRESULT(STDMETHODCALLTYPE * put_AdminEmail) (IFsrmSetting * This, BSTR adminEmail);
	HRESULT(STDMETHODCALLTYPE * get_DisableCommandLine) (IFsrmSetting * This, VARIANT_BOOL * disableCommandLine);
	HRESULT(STDMETHODCALLTYPE * put_DisableCommandLine) (IFsrmSetting * This, VARIANT_BOOL disableCommandLine);
	HRESULT(STDMETHODCALLTYPE * get_EnableScreeningAudit) (IFsrmSetting * This, VARIANT_BOOL * enableScreeningAudit);
	HRESULT(STDMETHODCALLTYPE * put_EnableScreeningAudit) (IFsrmSetting * This, VARIANT_BOOL enableScreeningAudit);
	HRESULT(STDMETHODCALLTYPE * EmailTest) (IFsrmSetting * This, BSTR mailTo);
	HRESULT(STDMETHODCALLTYPE * SetActionRunLimitInterval) (IFsrmSetting * This, FsrmActionType actionType, long delayTimeMinutes);
	HRESULT(STDMETHODCALLTYPE * GetActionRunLimitInterval) (IFsrmSetting * This, FsrmActionType actionType, long *delayTimeMinutes);
	END_INTERFACE
}  IFsrmSettingVtbl;
interface IFsrmSetting
{
	CONST_VTBL struct IFsrmSettingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmSetting_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmSetting_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmSetting_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmSetting_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmSetting_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmSetting_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmSetting_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmSetting_get_SmtpServer(This,smtpServer)( (This)->lpVtbl -> get_SmtpServer(This,smtpServer) )
#define IFsrmSetting_put_SmtpServer(This,smtpServer)( (This)->lpVtbl -> put_SmtpServer(This,smtpServer) )
#define IFsrmSetting_get_MailFrom(This,mailFrom)( (This)->lpVtbl -> get_MailFrom(This,mailFrom) )
#define IFsrmSetting_put_MailFrom(This,mailFrom)( (This)->lpVtbl -> put_MailFrom(This,mailFrom) )
#define IFsrmSetting_get_AdminEmail(This,adminEmail)( (This)->lpVtbl -> get_AdminEmail(This,adminEmail) )
#define IFsrmSetting_put_AdminEmail(This,adminEmail)( (This)->lpVtbl -> put_AdminEmail(This,adminEmail) )
#define IFsrmSetting_get_DisableCommandLine(This,disableCommandLine)( (This)->lpVtbl -> get_DisableCommandLine(This,disableCommandLine) )
#define IFsrmSetting_put_DisableCommandLine(This,disableCommandLine)( (This)->lpVtbl -> put_DisableCommandLine(This,disableCommandLine) )
#define IFsrmSetting_get_EnableScreeningAudit(This,enableScreeningAudit)( (This)->lpVtbl -> get_EnableScreeningAudit(This,enableScreeningAudit) )
#define IFsrmSetting_put_EnableScreeningAudit(This,enableScreeningAudit)( (This)->lpVtbl -> put_EnableScreeningAudit(This,enableScreeningAudit) )
#define IFsrmSetting_EmailTest(This,mailTo)( (This)->lpVtbl -> EmailTest(This,mailTo) )
#define IFsrmSetting_SetActionRunLimitInterval(This,actionType,delayTimeMinutes)( (This)->lpVtbl -> SetActionRunLimitInterval(This,actionType,delayTimeMinutes) )
#define IFsrmSetting_GetActionRunLimitInterval(This,actionType,delayTimeMinutes)( (This)->lpVtbl -> GetActionRunLimitInterval(This,actionType,delayTimeMinutes) )
#endif
#endif
#ifndef __IFsrmPathMapper_INTERFACE_DEFINED__
#define __IFsrmPathMapper_INTERFACE_DEFINED__
extern const IID IID_IFsrmPathMapper;
typedef struct IFsrmPathMapperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmPathMapper * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmPathMapper * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmPathMapper * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmPathMapper * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmPathMapper * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmPathMapper * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmPathMapper * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetSharePathsForLocalPath) (IFsrmPathMapper * This, BSTR localPath, SAFEARRAY * *sharePaths);
	END_INTERFACE
}  IFsrmPathMapperVtbl;
interface IFsrmPathMapper
{
	CONST_VTBL struct IFsrmPathMapperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmPathMapper_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmPathMapper_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmPathMapper_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmPathMapper_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmPathMapper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmPathMapper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmPathMapper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmPathMapper_GetSharePathsForLocalPath(This,localPath,sharePaths)( (This)->lpVtbl -> GetSharePathsForLocalPath(This,localPath,sharePaths) )
#endif
#endif
#ifndef __IFsrmExportImport_INTERFACE_DEFINED__
#define __IFsrmExportImport_INTERFACE_DEFINED__
extern const IID IID_IFsrmExportImport;
typedef struct IFsrmExportImportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmExportImport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmExportImport * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmExportImport * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmExportImport * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmExportImport * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmExportImport * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmExportImport * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * ExportFileGroups) (IFsrmExportImport * This, BSTR filePath, VARIANT * fileGroupNamesSafeArray, BSTR remoteHost);
	HRESULT(STDMETHODCALLTYPE * ImportFileGroups) (IFsrmExportImport * This, BSTR filePath, VARIANT * fileGroupNamesSafeArray, BSTR remoteHost, IFsrmCommittableCollection ** fileGroups);
	HRESULT(STDMETHODCALLTYPE * ExportFileScreenTemplates) (IFsrmExportImport * This, BSTR filePath, VARIANT * templateNamesSafeArray, BSTR remoteHost);
	HRESULT(STDMETHODCALLTYPE * ImportFileScreenTemplates) (IFsrmExportImport * This, BSTR filePath, VARIANT * templateNamesSafeArray, BSTR remoteHost, IFsrmCommittableCollection ** templates);
	HRESULT(STDMETHODCALLTYPE * ExportQuotaTemplates) (IFsrmExportImport * This, BSTR filePath, VARIANT * templateNamesSafeArray, BSTR remoteHost);
	HRESULT(STDMETHODCALLTYPE * ImportQuotaTemplates) (IFsrmExportImport * This, BSTR filePath, VARIANT * templateNamesSafeArray, BSTR remoteHost, IFsrmCommittableCollection ** templates);
	END_INTERFACE
}  IFsrmExportImportVtbl;
interface IFsrmExportImport
{
	CONST_VTBL struct IFsrmExportImportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmExportImport_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmExportImport_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmExportImport_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmExportImport_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmExportImport_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmExportImport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmExportImport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmExportImport_ExportFileGroups(This,filePath,fileGroupNamesSafeArray,remoteHost)( (This)->lpVtbl -> ExportFileGroups(This,filePath,fileGroupNamesSafeArray,remoteHost) )
#define IFsrmExportImport_ImportFileGroups(This,filePath,fileGroupNamesSafeArray,remoteHost,fileGroups)( (This)->lpVtbl -> ImportFileGroups(This,filePath,fileGroupNamesSafeArray,remoteHost,fileGroups) )
#define IFsrmExportImport_ExportFileScreenTemplates(This,filePath,templateNamesSafeArray,remoteHost)( (This)->lpVtbl -> ExportFileScreenTemplates(This,filePath,templateNamesSafeArray,remoteHost) )
#define IFsrmExportImport_ImportFileScreenTemplates(This,filePath,templateNamesSafeArray,remoteHost,templates)( (This)->lpVtbl -> ImportFileScreenTemplates(This,filePath,templateNamesSafeArray,remoteHost,templates) )
#define IFsrmExportImport_ExportQuotaTemplates(This,filePath,templateNamesSafeArray,remoteHost)( (This)->lpVtbl -> ExportQuotaTemplates(This,filePath,templateNamesSafeArray,remoteHost) )
#define IFsrmExportImport_ImportQuotaTemplates(This,filePath,templateNamesSafeArray,remoteHost,templates)( (This)->lpVtbl -> ImportQuotaTemplates(This,filePath,templateNamesSafeArray,remoteHost,templates) )
#endif
#endif
#ifndef __IFsrmDerivedObjectsResult_INTERFACE_DEFINED__
#define __IFsrmDerivedObjectsResult_INTERFACE_DEFINED__
extern const IID IID_IFsrmDerivedObjectsResult;
typedef struct IFsrmDerivedObjectsResultVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmDerivedObjectsResult * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmDerivedObjectsResult * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmDerivedObjectsResult * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmDerivedObjectsResult * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmDerivedObjectsResult * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmDerivedObjectsResult * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmDerivedObjectsResult * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DerivedObjects) (IFsrmDerivedObjectsResult * This, IFsrmCollection ** derivedObjects);
	HRESULT(STDMETHODCALLTYPE * get_Results) (IFsrmDerivedObjectsResult * This, IFsrmCollection ** results);
	END_INTERFACE
}  IFsrmDerivedObjectsResultVtbl;
interface IFsrmDerivedObjectsResult
{
	CONST_VTBL struct IFsrmDerivedObjectsResultVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmDerivedObjectsResult_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmDerivedObjectsResult_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmDerivedObjectsResult_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmDerivedObjectsResult_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmDerivedObjectsResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmDerivedObjectsResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmDerivedObjectsResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmDerivedObjectsResult_get_DerivedObjects(This,derivedObjects)( (This)->lpVtbl -> get_DerivedObjects(This,derivedObjects) )
#define IFsrmDerivedObjectsResult_get_Results(This,results)( (This)->lpVtbl -> get_Results(This,results) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
