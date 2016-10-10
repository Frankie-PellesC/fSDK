/*+@@file@@----------------------------------------------------------------*//*!
 \file		propsys.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jun 28 19:09:03 2016
 \date		Modified on Tue Jun 28 19:09:03 2016
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
#ifndef __propsys_h__
#define __propsys_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IInitializeWithFile_FWD_DEFINED__
#define __IInitializeWithFile_FWD_DEFINED__
typedef interface IInitializeWithFile IInitializeWithFile;
#endif
#ifndef __IInitializeWithStream_FWD_DEFINED__
#define __IInitializeWithStream_FWD_DEFINED__
typedef interface IInitializeWithStream IInitializeWithStream;
#endif
#ifndef __IPropertyStore_FWD_DEFINED__
#define __IPropertyStore_FWD_DEFINED__
typedef interface IPropertyStore IPropertyStore;
#endif
#ifndef __INamedPropertyStore_FWD_DEFINED__
#define __INamedPropertyStore_FWD_DEFINED__
typedef interface INamedPropertyStore INamedPropertyStore;
#endif
#ifndef __IObjectWithPropertyKey_FWD_DEFINED__
#define __IObjectWithPropertyKey_FWD_DEFINED__
typedef interface IObjectWithPropertyKey IObjectWithPropertyKey;
#endif
#ifndef __IPropertyChange_FWD_DEFINED__
#define __IPropertyChange_FWD_DEFINED__
typedef interface IPropertyChange IPropertyChange;
#endif
#ifndef __IPropertyChangeArray_FWD_DEFINED__
#define __IPropertyChangeArray_FWD_DEFINED__
typedef interface IPropertyChangeArray IPropertyChangeArray;
#endif
#ifndef __IPropertyStoreCapabilities_FWD_DEFINED__
#define __IPropertyStoreCapabilities_FWD_DEFINED__
typedef interface IPropertyStoreCapabilities IPropertyStoreCapabilities;
#endif
#ifndef __IPropertyStoreCache_FWD_DEFINED__
#define __IPropertyStoreCache_FWD_DEFINED__
typedef interface IPropertyStoreCache IPropertyStoreCache;
#endif
#ifndef __IPropertyEnumType_FWD_DEFINED__
#define __IPropertyEnumType_FWD_DEFINED__
typedef interface IPropertyEnumType IPropertyEnumType;
#endif
#ifndef __IPropertyEnumType2_FWD_DEFINED__
#define __IPropertyEnumType2_FWD_DEFINED__
typedef interface IPropertyEnumType2 IPropertyEnumType2;
#endif
#ifndef __IPropertyEnumTypeList_FWD_DEFINED__
#define __IPropertyEnumTypeList_FWD_DEFINED__
typedef interface IPropertyEnumTypeList IPropertyEnumTypeList;
#endif
#ifndef __IPropertyDescription_FWD_DEFINED__
#define __IPropertyDescription_FWD_DEFINED__
typedef interface IPropertyDescription IPropertyDescription;
#endif
#ifndef __IPropertyDescription2_FWD_DEFINED__
#define __IPropertyDescription2_FWD_DEFINED__
typedef interface IPropertyDescription2 IPropertyDescription2;
#endif
#ifndef __IPropertyDescriptionAliasInfo_FWD_DEFINED__
#define __IPropertyDescriptionAliasInfo_FWD_DEFINED__
typedef interface IPropertyDescriptionAliasInfo IPropertyDescriptionAliasInfo;
#endif
#ifndef __IPropertyDescriptionSearchInfo_FWD_DEFINED__
#define __IPropertyDescriptionSearchInfo_FWD_DEFINED__
typedef interface IPropertyDescriptionSearchInfo IPropertyDescriptionSearchInfo;
#endif
#ifndef __IPropertyDescriptionRelatedPropertyInfo_FWD_DEFINED__
#define __IPropertyDescriptionRelatedPropertyInfo_FWD_DEFINED__
typedef interface IPropertyDescriptionRelatedPropertyInfo IPropertyDescriptionRelatedPropertyInfo;
#endif
#ifndef __IPropertySystem_FWD_DEFINED__
#define __IPropertySystem_FWD_DEFINED__
typedef interface IPropertySystem IPropertySystem;
#endif
#ifndef __IPropertyDescriptionList_FWD_DEFINED__
#define __IPropertyDescriptionList_FWD_DEFINED__
typedef interface IPropertyDescriptionList IPropertyDescriptionList;
#endif
#ifndef __IPropertyStoreFactory_FWD_DEFINED__
#define __IPropertyStoreFactory_FWD_DEFINED__
typedef interface IPropertyStoreFactory IPropertyStoreFactory;
#endif
#ifndef __IDelayedPropertyStoreFactory_FWD_DEFINED__
#define __IDelayedPropertyStoreFactory_FWD_DEFINED__
typedef interface IDelayedPropertyStoreFactory IDelayedPropertyStoreFactory;
#endif
#ifndef __IPersistSerializedPropStorage_FWD_DEFINED__
#define __IPersistSerializedPropStorage_FWD_DEFINED__
typedef interface IPersistSerializedPropStorage IPersistSerializedPropStorage;
#endif
#ifndef __IPersistSerializedPropStorage2_FWD_DEFINED__
#define __IPersistSerializedPropStorage2_FWD_DEFINED__
typedef interface IPersistSerializedPropStorage2 IPersistSerializedPropStorage2;
#endif
#ifndef __IPropertySystemChangeNotify_FWD_DEFINED__
#define __IPropertySystemChangeNotify_FWD_DEFINED__
typedef interface IPropertySystemChangeNotify IPropertySystemChangeNotify;
#endif
#ifndef __ICreateObject_FWD_DEFINED__
#define __ICreateObject_FWD_DEFINED__
typedef interface ICreateObject ICreateObject;
#endif
#ifndef __InMemoryPropertyStore_FWD_DEFINED__
#define __InMemoryPropertyStore_FWD_DEFINED__
typedef struct InMemoryPropertyStore InMemoryPropertyStore;
#endif
#ifndef __PropertySystem_FWD_DEFINED__
#define __PropertySystem_FWD_DEFINED__
typedef struct PropertySystem PropertySystem;
#endif
#include "objidl.h"
#include "oleidl.h"
#include "ocidl.h"
#include "shtypes.h"
#include "StructuredQueryCondition.h"
#ifndef PSSTDAPI
#if defined(_PROPSYS_)
#define PSSTDAPI          STDAPI
#define PSSTDAPI_(type)   STDAPI_(type)
#else
#define PSSTDAPI          extern DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define PSSTDAPI_(type)   extern DECLSPEC_IMPORT type STDAPICALLTYPE
#endif
#endif
#if 0
typedef PROPERTYKEY *REFPROPERTYKEY;
#endif
#include <propkeydef.h>
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0000_v0_0_s_ifspec;
#ifndef __IInitializeWithFile_INTERFACE_DEFINED__
#define __IInitializeWithFile_INTERFACE_DEFINED__
extern const IID IID_IInitializeWithFile;
typedef struct IInitializeWithFileVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInitializeWithFile * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInitializeWithFile * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInitializeWithFile * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IInitializeWithFile * This, LPCWSTR pszFilePath, DWORD grfMode);
	END_INTERFACE
} IInitializeWithFileVtbl;
interface IInitializeWithFile
{
	CONST_VTBL struct IInitializeWithFileVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInitializeWithFile_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInitializeWithFile_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IInitializeWithFile_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IInitializeWithFile_Initialize(This,pszFilePath,grfMode)    ( (This)->lpVtbl -> Initialize(This,pszFilePath,grfMode) )
#endif
#endif
#ifndef __IInitializeWithStream_INTERFACE_DEFINED__
#define __IInitializeWithStream_INTERFACE_DEFINED__
extern const IID IID_IInitializeWithStream;
typedef struct IInitializeWithStreamVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInitializeWithStream * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInitializeWithStream * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInitializeWithStream * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IInitializeWithStream * This, IStream * pstream, DWORD grfMode);
	END_INTERFACE
} IInitializeWithStreamVtbl;
interface IInitializeWithStream
{
	CONST_VTBL struct IInitializeWithStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInitializeWithStream_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInitializeWithStream_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IInitializeWithStream_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IInitializeWithStream_Initialize(This,pstream,grfMode)    ( (This)->lpVtbl -> Initialize(This,pstream,grfMode) )
#endif
HRESULT STDMETHODCALLTYPE IInitializeWithStream_RemoteInitialize_Proxy(IInitializeWithStream *This, IStream *pstream, DWORD grfMode);
void __RPC_STUB IInitializeWithStream_RemoteInitialize_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IPropertyStore_INTERFACE_DEFINED__
#define __IPropertyStore_INTERFACE_DEFINED__
extern const IID IID_IPropertyStore;
typedef struct IPropertyStoreVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPropertyStore *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPropertyStore *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPropertyStore *This);
	HRESULT(STDMETHODCALLTYPE *GetCount) (IPropertyStore *This, DWORD *cProps);
	HRESULT(STDMETHODCALLTYPE *GetAt) (IPropertyStore *This, DWORD iProp, PROPERTYKEY *pkey);
	HRESULT(STDMETHODCALLTYPE *GetValue) (IPropertyStore *This, REFPROPERTYKEY key, PROPVARIANT *pv);
	HRESULT(STDMETHODCALLTYPE *SetValue) (IPropertyStore *This, REFPROPERTYKEY key, REFPROPVARIANT propvar);
	HRESULT(STDMETHODCALLTYPE *Commit) (IPropertyStore *This);
	END_INTERFACE
}
IPropertyStoreVtbl;
interface IPropertyStore
{
	CONST_VTBL struct IPropertyStoreVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyStore_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyStore_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyStore_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyStore_GetCount(This,cProps)    ( (This)->lpVtbl -> GetCount(This,cProps) )
#define IPropertyStore_GetAt(This,iProp,pkey)    ( (This)->lpVtbl -> GetAt(This,iProp,pkey) )
#define IPropertyStore_GetValue(This,key,pv)    ( (This)->lpVtbl -> GetValue(This,key,pv) )
#define IPropertyStore_SetValue(This,key,propvar)    ( (This)->lpVtbl -> SetValue(This,key,propvar) )
#define IPropertyStore_Commit(This)    ( (This)->lpVtbl -> Commit(This) )
#endif
#endif
typedef IPropertyStore *LPPROPERTYSTORE;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0003_v0_0_s_ifspec;
#ifndef __INamedPropertyStore_INTERFACE_DEFINED__
#define __INamedPropertyStore_INTERFACE_DEFINED__
extern const IID IID_INamedPropertyStore;
typedef struct INamedPropertyStoreVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (INamedPropertyStore *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (INamedPropertyStore *This);
	ULONG(STDMETHODCALLTYPE *Release) (INamedPropertyStore *This);
	HRESULT(STDMETHODCALLTYPE *GetNamedValue) (INamedPropertyStore *This, LPCWSTR pszName, PROPVARIANT *ppropvar);
	HRESULT(STDMETHODCALLTYPE *SetNamedValue) (INamedPropertyStore *This, LPCWSTR pszName, REFPROPVARIANT propvar);
	HRESULT(STDMETHODCALLTYPE *GetNameCount) (INamedPropertyStore *This, DWORD *pdwCount);
	HRESULT(STDMETHODCALLTYPE *GetNameAt) (INamedPropertyStore *This, DWORD iProp, BSTR *pbstrName);
	END_INTERFACE
}
INamedPropertyStoreVtbl;
interface INamedPropertyStore
{
	CONST_VTBL struct INamedPropertyStoreVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INamedPropertyStore_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INamedPropertyStore_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define INamedPropertyStore_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define INamedPropertyStore_GetNamedValue(This,pszName,ppropvar)    ( (This)->lpVtbl -> GetNamedValue(This,pszName,ppropvar) )
#define INamedPropertyStore_SetNamedValue(This,pszName,propvar)    ( (This)->lpVtbl -> SetNamedValue(This,pszName,propvar) )
#define INamedPropertyStore_GetNameCount(This,pdwCount)    ( (This)->lpVtbl -> GetNameCount(This,pdwCount) )
#define INamedPropertyStore_GetNameAt(This,iProp,pbstrName)    ( (This)->lpVtbl -> GetNameAt(This,iProp,pbstrName) )
#endif
#endif
typedef
	enum GETPROPERTYSTOREFLAGS { GPS_DEFAULT = 0,
	GPS_HANDLERPROPERTIESONLY = 0x1,
	GPS_READWRITE = 0x2,
	GPS_TEMPORARY = 0x4,
	GPS_FASTPROPERTIESONLY = 0x8,
	GPS_OPENSLOWITEM = 0x10,
	GPS_DELAYCREATION = 0x20,
	GPS_BESTEFFORT = 0x40,
	GPS_NO_OPLOCK = 0x80,
	GPS_MASK_VALID = 0xff
} GETPROPERTYSTOREFLAGS;
DEFINE_ENUM_FLAG_OPERATORS(GETPROPERTYSTOREFLAGS)
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0004_v0_0_s_ifspec;
#ifndef __IObjectWithPropertyKey_INTERFACE_DEFINED__
#define __IObjectWithPropertyKey_INTERFACE_DEFINED__
extern const IID IID_IObjectWithPropertyKey;
typedef struct IObjectWithPropertyKeyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IObjectWithPropertyKey * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IObjectWithPropertyKey * This);
	ULONG(STDMETHODCALLTYPE * Release) (IObjectWithPropertyKey * This);
	HRESULT(STDMETHODCALLTYPE * SetPropertyKey) (IObjectWithPropertyKey * This, REFPROPERTYKEY key);
	HRESULT(STDMETHODCALLTYPE * GetPropertyKey) (IObjectWithPropertyKey * This, PROPERTYKEY * pkey);
	END_INTERFACE
} IObjectWithPropertyKeyVtbl;
interface IObjectWithPropertyKey
{
	CONST_VTBL struct IObjectWithPropertyKeyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectWithPropertyKey_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectWithPropertyKey_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IObjectWithPropertyKey_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IObjectWithPropertyKey_SetPropertyKey(This,key)    ( (This)->lpVtbl -> SetPropertyKey(This,key) )
#define IObjectWithPropertyKey_GetPropertyKey(This,pkey)    ( (This)->lpVtbl -> GetPropertyKey(This,pkey) )
#endif
#endif
typedef enum PKA_FLAGS
{	PKA_SET = 0,
	PKA_APPEND = (PKA_SET + 1),
	PKA_DELETE = (PKA_APPEND + 1)
} PKA_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0005_v0_0_s_ifspec;
#ifndef __IPropertyChange_INTERFACE_DEFINED__
#define __IPropertyChange_INTERFACE_DEFINED__
extern const IID IID_IPropertyChange;
typedef struct IPropertyChangeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyChange * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyChange * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyChange * This);
	HRESULT(STDMETHODCALLTYPE * SetPropertyKey) (IPropertyChange * This, REFPROPERTYKEY key);
	HRESULT(STDMETHODCALLTYPE * GetPropertyKey) (IPropertyChange * This, PROPERTYKEY * pkey);
	HRESULT(STDMETHODCALLTYPE * ApplyToPropVariant) (IPropertyChange * This, REFPROPVARIANT propvarIn, PROPVARIANT * ppropvarOut);
	END_INTERFACE
} IPropertyChangeVtbl;
interface IPropertyChange
{
	CONST_VTBL struct IPropertyChangeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyChange_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyChange_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyChange_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyChange_SetPropertyKey(This,key)    ( (This)->lpVtbl -> SetPropertyKey(This,key) )
#define IPropertyChange_GetPropertyKey(This,pkey)    ( (This)->lpVtbl -> GetPropertyKey(This,pkey) )
#define IPropertyChange_ApplyToPropVariant(This,propvarIn,ppropvarOut)    ( (This)->lpVtbl -> ApplyToPropVariant(This,propvarIn,ppropvarOut) )
#endif
#endif
#ifndef __IPropertyChangeArray_INTERFACE_DEFINED__
#define __IPropertyChangeArray_INTERFACE_DEFINED__
extern const IID IID_IPropertyChangeArray;
typedef struct IPropertyChangeArrayVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyChangeArray * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyChangeArray * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyChangeArray * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IPropertyChangeArray * This, UINT * pcOperations);
	HRESULT(STDMETHODCALLTYPE * GetAt) (IPropertyChangeArray * This, UINT iIndex, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * InsertAt) (IPropertyChangeArray * This, UINT iIndex, IPropertyChange * ppropChange);
	HRESULT(STDMETHODCALLTYPE * Append) (IPropertyChangeArray * This, IPropertyChange * ppropChange);
	HRESULT(STDMETHODCALLTYPE * AppendOrReplace) (IPropertyChangeArray * This, IPropertyChange * ppropChange);
	HRESULT(STDMETHODCALLTYPE * RemoveAt) (IPropertyChangeArray * This, UINT iIndex);
	HRESULT(STDMETHODCALLTYPE * IsKeyInArray) (IPropertyChangeArray * This, REFPROPERTYKEY key);
	END_INTERFACE
} IPropertyChangeArrayVtbl;
interface IPropertyChangeArray
{
	CONST_VTBL struct IPropertyChangeArrayVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyChangeArray_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyChangeArray_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyChangeArray_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyChangeArray_GetCount(This,pcOperations)    ( (This)->lpVtbl -> GetCount(This,pcOperations) )
#define IPropertyChangeArray_GetAt(This,iIndex,riid,ppv)    ( (This)->lpVtbl -> GetAt(This,iIndex,riid,ppv) )
#define IPropertyChangeArray_InsertAt(This,iIndex,ppropChange)    ( (This)->lpVtbl -> InsertAt(This,iIndex,ppropChange) )
#define IPropertyChangeArray_Append(This,ppropChange)    ( (This)->lpVtbl -> Append(This,ppropChange) )
#define IPropertyChangeArray_AppendOrReplace(This,ppropChange)    ( (This)->lpVtbl -> AppendOrReplace(This,ppropChange) )
#define IPropertyChangeArray_RemoveAt(This,iIndex)    ( (This)->lpVtbl -> RemoveAt(This,iIndex) )
#define IPropertyChangeArray_IsKeyInArray(This,key)    ( (This)->lpVtbl -> IsKeyInArray(This,key) )
#endif
#endif
#ifndef __IPropertyStoreCapabilities_INTERFACE_DEFINED__
#define __IPropertyStoreCapabilities_INTERFACE_DEFINED__
extern const IID IID_IPropertyStoreCapabilities;
typedef struct IPropertyStoreCapabilitiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyStoreCapabilities * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyStoreCapabilities * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyStoreCapabilities * This);
	HRESULT(STDMETHODCALLTYPE * IsPropertyWritable) (IPropertyStoreCapabilities * This, REFPROPERTYKEY key);
	END_INTERFACE
} IPropertyStoreCapabilitiesVtbl;
interface IPropertyStoreCapabilities
{
	CONST_VTBL struct IPropertyStoreCapabilitiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyStoreCapabilities_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyStoreCapabilities_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyStoreCapabilities_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyStoreCapabilities_IsPropertyWritable(This,key)    ( (This)->lpVtbl -> IsPropertyWritable(This,key) )
#endif
#endif
#ifndef __IPropertyStoreCache_INTERFACE_DEFINED__
#define __IPropertyStoreCache_INTERFACE_DEFINED__
typedef enum PSC_STATE
{
	PSC_NORMAL = 0,
	PSC_NOTINSOURCE = 1,
	PSC_DIRTY = 2,
	PSC_READONLY = 3
} PSC_STATE;
extern const IID IID_IPropertyStoreCache;
typedef struct IPropertyStoreCacheVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyStoreCache * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyStoreCache * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyStoreCache * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IPropertyStoreCache * This, DWORD * cProps);
	HRESULT(STDMETHODCALLTYPE * GetAt) (IPropertyStoreCache * This, DWORD iProp, PROPERTYKEY * pkey);
	HRESULT(STDMETHODCALLTYPE * GetValue) (IPropertyStoreCache * This, REFPROPERTYKEY key, PROPVARIANT * pv);
	HRESULT(STDMETHODCALLTYPE * SetValue) (IPropertyStoreCache * This, REFPROPERTYKEY key, REFPROPVARIANT propvar);
	HRESULT(STDMETHODCALLTYPE * Commit) (IPropertyStoreCache * This);
	HRESULT(STDMETHODCALLTYPE * GetState) (IPropertyStoreCache * This, REFPROPERTYKEY key, PSC_STATE * pstate);
	HRESULT(STDMETHODCALLTYPE * GetValueAndState) (IPropertyStoreCache * This, REFPROPERTYKEY key, PROPVARIANT * ppropvar, PSC_STATE * pstate);
	HRESULT(STDMETHODCALLTYPE * SetState) (IPropertyStoreCache * This, REFPROPERTYKEY key, PSC_STATE state);
	HRESULT(STDMETHODCALLTYPE * SetValueAndState) (IPropertyStoreCache * This, REFPROPERTYKEY key, const PROPVARIANT * ppropvar, PSC_STATE state);
	END_INTERFACE
} IPropertyStoreCacheVtbl;
interface IPropertyStoreCache
{
	CONST_VTBL struct IPropertyStoreCacheVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyStoreCache_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyStoreCache_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyStoreCache_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyStoreCache_GetCount(This,cProps)    ( (This)->lpVtbl -> GetCount(This,cProps) )
#define IPropertyStoreCache_GetAt(This,iProp,pkey)    ( (This)->lpVtbl -> GetAt(This,iProp,pkey) )
#define IPropertyStoreCache_GetValue(This,key,pv)    ( (This)->lpVtbl -> GetValue(This,key,pv) )
#define IPropertyStoreCache_SetValue(This,key,propvar)    ( (This)->lpVtbl -> SetValue(This,key,propvar) )
#define IPropertyStoreCache_Commit(This)    ( (This)->lpVtbl -> Commit(This) )
#define IPropertyStoreCache_GetState(This,key,pstate)    ( (This)->lpVtbl -> GetState(This,key,pstate) )
#define IPropertyStoreCache_GetValueAndState(This,key,ppropvar,pstate)    ( (This)->lpVtbl -> GetValueAndState(This,key,ppropvar,pstate) )
#define IPropertyStoreCache_SetState(This,key,state)    ( (This)->lpVtbl -> SetState(This,key,state) )
#define IPropertyStoreCache_SetValueAndState(This,key,ppropvar,state)    ( (This)->lpVtbl -> SetValueAndState(This,key,ppropvar,state) )
#endif
#endif
#ifndef __IPropertyEnumType_INTERFACE_DEFINED__
#define __IPropertyEnumType_INTERFACE_DEFINED__
typedef enum PROPENUMTYPE
{
	PET_DISCRETEVALUE = 0,
	PET_RANGEDVALUE = 1,
	PET_DEFAULTVALUE = 2,
	PET_ENDRANGE = 3
} PROPENUMTYPE;
extern const IID IID_IPropertyEnumType;
typedef struct IPropertyEnumTypeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyEnumType * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyEnumType * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyEnumType * This);
	HRESULT(STDMETHODCALLTYPE * GetEnumType) (IPropertyEnumType * This, PROPENUMTYPE * penumtype);
	HRESULT(STDMETHODCALLTYPE * GetValue) (IPropertyEnumType * This, PROPVARIANT * ppropvar);
	HRESULT(STDMETHODCALLTYPE * GetRangeMinValue) (IPropertyEnumType * This, PROPVARIANT * ppropvarMin);
	HRESULT(STDMETHODCALLTYPE * GetRangeSetValue) (IPropertyEnumType * This, PROPVARIANT * ppropvarSet);
	HRESULT(STDMETHODCALLTYPE * GetDisplayText) (IPropertyEnumType * This, LPWSTR * ppszDisplay);
	END_INTERFACE
} IPropertyEnumTypeVtbl;
interface IPropertyEnumType
{
	CONST_VTBL struct IPropertyEnumTypeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyEnumType_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyEnumType_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyEnumType_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyEnumType_GetEnumType(This,penumtype)    ( (This)->lpVtbl -> GetEnumType(This,penumtype) )
#define IPropertyEnumType_GetValue(This,ppropvar)    ( (This)->lpVtbl -> GetValue(This,ppropvar) )
#define IPropertyEnumType_GetRangeMinValue(This,ppropvarMin)    ( (This)->lpVtbl -> GetRangeMinValue(This,ppropvarMin) )
#define IPropertyEnumType_GetRangeSetValue(This,ppropvarSet)    ( (This)->lpVtbl -> GetRangeSetValue(This,ppropvarSet) )
#define IPropertyEnumType_GetDisplayText(This,ppszDisplay)    ( (This)->lpVtbl -> GetDisplayText(This,ppszDisplay) )
#endif
#endif
#ifndef __IPropertyEnumType2_INTERFACE_DEFINED__
#define __IPropertyEnumType2_INTERFACE_DEFINED__
extern const IID IID_IPropertyEnumType2;
typedef struct IPropertyEnumType2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyEnumType2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyEnumType2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyEnumType2 * This);
	HRESULT(STDMETHODCALLTYPE * GetEnumType) (IPropertyEnumType2 * This, PROPENUMTYPE * penumtype);
	HRESULT(STDMETHODCALLTYPE * GetValue) (IPropertyEnumType2 * This, PROPVARIANT * ppropvar);
	HRESULT(STDMETHODCALLTYPE * GetRangeMinValue) (IPropertyEnumType2 * This, PROPVARIANT * ppropvarMin);
	HRESULT(STDMETHODCALLTYPE * GetRangeSetValue) (IPropertyEnumType2 * This, PROPVARIANT * ppropvarSet);
	HRESULT(STDMETHODCALLTYPE * GetDisplayText) (IPropertyEnumType2 * This, LPWSTR * ppszDisplay);
	HRESULT(STDMETHODCALLTYPE * GetImageReference) (IPropertyEnumType2 * This, LPWSTR * ppszImageRes);
	END_INTERFACE
} IPropertyEnumType2Vtbl;
interface IPropertyEnumType2
{
	CONST_VTBL struct IPropertyEnumType2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyEnumType2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyEnumType2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyEnumType2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyEnumType2_GetEnumType(This,penumtype)    ( (This)->lpVtbl -> GetEnumType(This,penumtype) )
#define IPropertyEnumType2_GetValue(This,ppropvar)    ( (This)->lpVtbl -> GetValue(This,ppropvar) )
#define IPropertyEnumType2_GetRangeMinValue(This,ppropvarMin)    ( (This)->lpVtbl -> GetRangeMinValue(This,ppropvarMin) )
#define IPropertyEnumType2_GetRangeSetValue(This,ppropvarSet)    ( (This)->lpVtbl -> GetRangeSetValue(This,ppropvarSet) )
#define IPropertyEnumType2_GetDisplayText(This,ppszDisplay)    ( (This)->lpVtbl -> GetDisplayText(This,ppszDisplay) )
#define IPropertyEnumType2_GetImageReference(This,ppszImageRes)    ( (This)->lpVtbl -> GetImageReference(This,ppszImageRes) )
#endif
#endif
#ifndef __IPropertyEnumTypeList_INTERFACE_DEFINED__
#define __IPropertyEnumTypeList_INTERFACE_DEFINED__
extern const IID IID_IPropertyEnumTypeList;
typedef struct IPropertyEnumTypeListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyEnumTypeList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyEnumTypeList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyEnumTypeList * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IPropertyEnumTypeList * This, UINT * pctypes);
	HRESULT(STDMETHODCALLTYPE * GetAt) (IPropertyEnumTypeList * This, UINT itype, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetConditionAt) (IPropertyEnumTypeList * This, UINT nIndex, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * FindMatchingIndex) (IPropertyEnumTypeList * This, REFPROPVARIANT propvarCmp, UINT * pnIndex);
	END_INTERFACE
} IPropertyEnumTypeListVtbl;
interface IPropertyEnumTypeList
{
	CONST_VTBL struct IPropertyEnumTypeListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyEnumTypeList_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyEnumTypeList_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyEnumTypeList_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyEnumTypeList_GetCount(This,pctypes)    ( (This)->lpVtbl -> GetCount(This,pctypes) )
#define IPropertyEnumTypeList_GetAt(This,itype,riid,ppv)    ( (This)->lpVtbl -> GetAt(This,itype,riid,ppv) )
#define IPropertyEnumTypeList_GetConditionAt(This,nIndex,riid,ppv)    ( (This)->lpVtbl -> GetConditionAt(This,nIndex,riid,ppv) )
#define IPropertyEnumTypeList_FindMatchingIndex(This,propvarCmp,pnIndex)    ( (This)->lpVtbl -> FindMatchingIndex(This,propvarCmp,pnIndex) )
#endif
#endif
#ifndef __IPropertyDescription_INTERFACE_DEFINED__
#define __IPropertyDescription_INTERFACE_DEFINED__
typedef enum PROPDESC_TYPE_FLAGS
{
	PDTF_DEFAULT = 0,
	PDTF_MULTIPLEVALUES = 0x1,
	PDTF_ISINNATE = 0x2,
	PDTF_ISGROUP = 0x4,
	PDTF_CANGROUPBY = 0x8,
	PDTF_CANSTACKBY = 0x10,
	PDTF_ISTREEPROPERTY = 0x20,
	PDTF_INCLUDEINFULLTEXTQUERY = 0x40,
	PDTF_ISVIEWABLE = 0x80,
	PDTF_ISQUERYABLE = 0x100,
	PDTF_CANBEPURGED = 0x200,
	PDTF_SEARCHRAWVALUE = 0x400,
	PDTF_ISSYSTEMPROPERTY = 0x80000000,
	PDTF_MASK_ALL = 0x800007ff
} PROPDESC_TYPE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(PROPDESC_TYPE_FLAGS)
typedef enum PROPDESC_VIEW_FLAGS
{
	PDVF_DEFAULT = 0,
	PDVF_CENTERALIGN = 0x1,
	PDVF_RIGHTALIGN = 0x2,
	PDVF_BEGINNEWGROUP = 0x4,
	PDVF_FILLAREA = 0x8,
	PDVF_SORTDESCENDING = 0x10,
	PDVF_SHOWONLYIFPRESENT = 0x20,
	PDVF_SHOWBYDEFAULT = 0x40,
	PDVF_SHOWINPRIMARYLIST = 0x80,
	PDVF_SHOWINSECONDARYLIST = 0x100,
	PDVF_HIDELABEL = 0x200,
	PDVF_HIDDEN = 0x800,
	PDVF_CANWRAP = 0x1000,
	PDVF_MASK_ALL = 0x1bff
} PROPDESC_VIEW_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(PROPDESC_VIEW_FLAGS)
typedef enum PROPDESC_DISPLAYTYPE
{
	PDDT_STRING = 0,
	PDDT_NUMBER = 1,
	PDDT_BOOLEAN = 2,
	PDDT_DATETIME = 3,
	PDDT_ENUMERATED = 4
} PROPDESC_DISPLAYTYPE;
typedef enum PROPDESC_GROUPING_RANGE
{
	PDGR_DISCRETE = 0,
	PDGR_ALPHANUMERIC = 1,
	PDGR_SIZE = 2,
	PDGR_DYNAMIC = 3,
	PDGR_DATE = 4,
	PDGR_PERCENT = 5,
	PDGR_ENUMERATED = 6
} PROPDESC_GROUPING_RANGE;
typedef enum PROPDESC_FORMAT_FLAGS
{
	PDFF_DEFAULT = 0,
	PDFF_PREFIXNAME = 0x1,
	PDFF_FILENAME = 0x2,
	PDFF_ALWAYSKB = 0x4,
	PDFF_RESERVED_RIGHTTOLEFT = 0x8,
	PDFF_SHORTTIME = 0x10,
	PDFF_LONGTIME = 0x20,
	PDFF_HIDETIME = 0x40,
	PDFF_SHORTDATE = 0x80,
	PDFF_LONGDATE = 0x100,
	PDFF_HIDEDATE = 0x200,
	PDFF_RELATIVEDATE = 0x400,
	PDFF_USEEDITINVITATION = 0x800,
	PDFF_READONLY = 0x1000,
	PDFF_NOAUTOREADINGORDER = 0x2000
} PROPDESC_FORMAT_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(PROPDESC_FORMAT_FLAGS)
typedef enum PROPDESC_SORTDESCRIPTION
{
	PDSD_GENERAL = 0,
	PDSD_A_Z = 1,
	PDSD_LOWEST_HIGHEST = 2,
	PDSD_SMALLEST_BIGGEST = 3,
	PDSD_OLDEST_NEWEST = 4
} PROPDESC_SORTDESCRIPTION;
typedef enum PROPDESC_RELATIVEDESCRIPTION_TYPE
{
	PDRDT_GENERAL = 0,
	PDRDT_DATE = 1,
	PDRDT_SIZE = 2,
	PDRDT_COUNT = 3,
	PDRDT_REVISION = 4,
	PDRDT_LENGTH = 5,
	PDRDT_DURATION = 6,
	PDRDT_SPEED = 7,
	PDRDT_RATE = 8,
	PDRDT_RATING = 9,
	PDRDT_PRIORITY = 10
} PROPDESC_RELATIVEDESCRIPTION_TYPE;
typedef enum PROPDESC_AGGREGATION_TYPE
{
	PDAT_DEFAULT = 0,
	PDAT_FIRST = 1,
	PDAT_SUM = 2,
	PDAT_AVERAGE = 3,
	PDAT_DATERANGE = 4,
	PDAT_UNION = 5,
	PDAT_MAX = 6,
	PDAT_MIN = 7
} PROPDESC_AGGREGATION_TYPE;
typedef enum PROPDESC_CONDITION_TYPE
{
	PDCOT_NONE = 0,
	PDCOT_STRING = 1,
	PDCOT_SIZE = 2,
	PDCOT_DATETIME = 3,
	PDCOT_BOOLEAN = 4,
	PDCOT_NUMBER = 5
} PROPDESC_CONDITION_TYPE;
extern const IID IID_IPropertyDescription;
typedef struct IPropertyDescriptionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyDescription * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyDescription * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyDescription * This);
	HRESULT(STDMETHODCALLTYPE * GetPropertyKey) (IPropertyDescription * This, PROPERTYKEY * pkey);
	HRESULT(STDMETHODCALLTYPE * GetCanonicalName) (IPropertyDescription * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetPropertyType) (IPropertyDescription * This, VARTYPE * pvartype);
	HRESULT(STDMETHODCALLTYPE * GetDisplayName) (IPropertyDescription * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetEditInvitation) (IPropertyDescription * This, LPWSTR * ppszInvite);
	HRESULT(STDMETHODCALLTYPE * GetTypeFlags) (IPropertyDescription * This, PROPDESC_TYPE_FLAGS mask, PROPDESC_TYPE_FLAGS * ppdtFlags);
	HRESULT(STDMETHODCALLTYPE * GetViewFlags) (IPropertyDescription * This, PROPDESC_VIEW_FLAGS * ppdvFlags);
	HRESULT(STDMETHODCALLTYPE * GetDefaultColumnWidth) (IPropertyDescription * This, UINT * pcxChars);
	HRESULT(STDMETHODCALLTYPE * GetDisplayType) (IPropertyDescription * This, PROPDESC_DISPLAYTYPE * pdisplaytype);
	HRESULT(STDMETHODCALLTYPE * GetColumnState) (IPropertyDescription * This, SHCOLSTATEF * pcsFlags);
	HRESULT(STDMETHODCALLTYPE * GetGroupingRange) (IPropertyDescription * This, PROPDESC_GROUPING_RANGE * pgr);
	HRESULT(STDMETHODCALLTYPE * GetRelativeDescriptionType) (IPropertyDescription * This, PROPDESC_RELATIVEDESCRIPTION_TYPE * prdt);
	HRESULT(STDMETHODCALLTYPE * GetRelativeDescription) (IPropertyDescription * This, REFPROPVARIANT propvar1, REFPROPVARIANT propvar2, LPWSTR * ppszDesc1, LPWSTR * ppszDesc2);
	HRESULT(STDMETHODCALLTYPE * GetSortDescription) (IPropertyDescription * This, PROPDESC_SORTDESCRIPTION * psd);
	HRESULT(STDMETHODCALLTYPE * GetSortDescriptionLabel) (IPropertyDescription * This, BOOL fDescending, LPWSTR * ppszDescription);
	HRESULT(STDMETHODCALLTYPE * GetAggregationType) (IPropertyDescription * This, PROPDESC_AGGREGATION_TYPE * paggtype);
	HRESULT(STDMETHODCALLTYPE * GetConditionType) (IPropertyDescription * This, PROPDESC_CONDITION_TYPE * pcontype, CONDITION_OPERATION * popDefault);
	HRESULT(STDMETHODCALLTYPE * GetEnumTypeList) (IPropertyDescription * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * CoerceToCanonicalValue) (IPropertyDescription * This, PROPVARIANT * ppropvar);
	HRESULT(STDMETHODCALLTYPE * FormatForDisplay) (IPropertyDescription * This, REFPROPVARIANT propvar, PROPDESC_FORMAT_FLAGS pdfFlags, LPWSTR * ppszDisplay);
	HRESULT(STDMETHODCALLTYPE * IsValueCanonical) (IPropertyDescription * This, REFPROPVARIANT propvar);
	END_INTERFACE
} IPropertyDescriptionVtbl;
interface IPropertyDescription
{
	CONST_VTBL struct IPropertyDescriptionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyDescription_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyDescription_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyDescription_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyDescription_GetPropertyKey(This,pkey)    ( (This)->lpVtbl -> GetPropertyKey(This,pkey) )
#define IPropertyDescription_GetCanonicalName(This,ppszName)    ( (This)->lpVtbl -> GetCanonicalName(This,ppszName) )
#define IPropertyDescription_GetPropertyType(This,pvartype)    ( (This)->lpVtbl -> GetPropertyType(This,pvartype) )
#define IPropertyDescription_GetDisplayName(This,ppszName)    ( (This)->lpVtbl -> GetDisplayName(This,ppszName) )
#define IPropertyDescription_GetEditInvitation(This,ppszInvite)    ( (This)->lpVtbl -> GetEditInvitation(This,ppszInvite) )
#define IPropertyDescription_GetTypeFlags(This,mask,ppdtFlags)    ( (This)->lpVtbl -> GetTypeFlags(This,mask,ppdtFlags) )
#define IPropertyDescription_GetViewFlags(This,ppdvFlags)    ( (This)->lpVtbl -> GetViewFlags(This,ppdvFlags) )
#define IPropertyDescription_GetDefaultColumnWidth(This,pcxChars)    ( (This)->lpVtbl -> GetDefaultColumnWidth(This,pcxChars) )
#define IPropertyDescription_GetDisplayType(This,pdisplaytype)    ( (This)->lpVtbl -> GetDisplayType(This,pdisplaytype) )
#define IPropertyDescription_GetColumnState(This,pcsFlags)    ( (This)->lpVtbl -> GetColumnState(This,pcsFlags) )
#define IPropertyDescription_GetGroupingRange(This,pgr)    ( (This)->lpVtbl -> GetGroupingRange(This,pgr) )
#define IPropertyDescription_GetRelativeDescriptionType(This,prdt)    ( (This)->lpVtbl -> GetRelativeDescriptionType(This,prdt) )
#define IPropertyDescription_GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2)    ( (This)->lpVtbl -> GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2) )
#define IPropertyDescription_GetSortDescription(This,psd)    ( (This)->lpVtbl -> GetSortDescription(This,psd) )
#define IPropertyDescription_GetSortDescriptionLabel(This,fDescending,ppszDescription)    ( (This)->lpVtbl -> GetSortDescriptionLabel(This,fDescending,ppszDescription) )
#define IPropertyDescription_GetAggregationType(This,paggtype)    ( (This)->lpVtbl -> GetAggregationType(This,paggtype) )
#define IPropertyDescription_GetConditionType(This,pcontype,popDefault)    ( (This)->lpVtbl -> GetConditionType(This,pcontype,popDefault) )
#define IPropertyDescription_GetEnumTypeList(This,riid,ppv)    ( (This)->lpVtbl -> GetEnumTypeList(This,riid,ppv) )
#define IPropertyDescription_CoerceToCanonicalValue(This,ppropvar)    ( (This)->lpVtbl -> CoerceToCanonicalValue(This,ppropvar) )
#define IPropertyDescription_FormatForDisplay(This,propvar,pdfFlags,ppszDisplay)    ( (This)->lpVtbl -> FormatForDisplay(This,propvar,pdfFlags,ppszDisplay) )
#define IPropertyDescription_IsValueCanonical(This,propvar)    ( (This)->lpVtbl -> IsValueCanonical(This,propvar) )
#endif
HRESULT STDMETHODCALLTYPE IPropertyDescription_RemoteCoerceToCanonicalValue_Proxy(IPropertyDescription * This, REFPROPVARIANT propvar, PROPVARIANT * ppropvar);
void __RPC_STUB IPropertyDescription_RemoteCoerceToCanonicalValue_Stub(IRpcStubBuffer * This, IRpcChannelBuffer * _pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD * _pdwStubPhase);
#endif
#ifndef __IPropertyDescription2_INTERFACE_DEFINED__
#define __IPropertyDescription2_INTERFACE_DEFINED__
extern const IID IID_IPropertyDescription2;
typedef struct IPropertyDescription2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyDescription2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyDescription2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyDescription2 * This);
	HRESULT(STDMETHODCALLTYPE * GetPropertyKey) (IPropertyDescription2 * This, PROPERTYKEY * pkey);
	HRESULT(STDMETHODCALLTYPE * GetCanonicalName) (IPropertyDescription2 * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetPropertyType) (IPropertyDescription2 * This, VARTYPE * pvartype);
	HRESULT(STDMETHODCALLTYPE * GetDisplayName) (IPropertyDescription2 * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetEditInvitation) (IPropertyDescription2 * This, LPWSTR * ppszInvite);
	HRESULT(STDMETHODCALLTYPE * GetTypeFlags) (IPropertyDescription2 * This, PROPDESC_TYPE_FLAGS mask, PROPDESC_TYPE_FLAGS * ppdtFlags);
	HRESULT(STDMETHODCALLTYPE * GetViewFlags) (IPropertyDescription2 * This, PROPDESC_VIEW_FLAGS * ppdvFlags);
	HRESULT(STDMETHODCALLTYPE * GetDefaultColumnWidth) (IPropertyDescription2 * This, UINT * pcxChars);
	HRESULT(STDMETHODCALLTYPE * GetDisplayType) (IPropertyDescription2 * This, PROPDESC_DISPLAYTYPE * pdisplaytype);
	HRESULT(STDMETHODCALLTYPE * GetColumnState) (IPropertyDescription2 * This, SHCOLSTATEF * pcsFlags);
	HRESULT(STDMETHODCALLTYPE * GetGroupingRange) (IPropertyDescription2 * This, PROPDESC_GROUPING_RANGE * pgr);
	HRESULT(STDMETHODCALLTYPE * GetRelativeDescriptionType) (IPropertyDescription2 * This, PROPDESC_RELATIVEDESCRIPTION_TYPE * prdt);
	HRESULT(STDMETHODCALLTYPE * GetRelativeDescription) (IPropertyDescription2 * This, REFPROPVARIANT propvar1, REFPROPVARIANT propvar2, LPWSTR * ppszDesc1, LPWSTR * ppszDesc2);
	HRESULT(STDMETHODCALLTYPE * GetSortDescription) (IPropertyDescription2 * This, PROPDESC_SORTDESCRIPTION * psd);
	HRESULT(STDMETHODCALLTYPE * GetSortDescriptionLabel) (IPropertyDescription2 * This, BOOL fDescending, LPWSTR * ppszDescription);
	HRESULT(STDMETHODCALLTYPE * GetAggregationType) (IPropertyDescription2 * This, PROPDESC_AGGREGATION_TYPE * paggtype);
	HRESULT(STDMETHODCALLTYPE * GetConditionType) (IPropertyDescription2 * This, PROPDESC_CONDITION_TYPE * pcontype, CONDITION_OPERATION * popDefault);
	HRESULT(STDMETHODCALLTYPE * GetEnumTypeList) (IPropertyDescription2 * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * CoerceToCanonicalValue) (IPropertyDescription2 * This, PROPVARIANT * ppropvar);
	HRESULT(STDMETHODCALLTYPE * FormatForDisplay) (IPropertyDescription2 * This, REFPROPVARIANT propvar, PROPDESC_FORMAT_FLAGS pdfFlags, LPWSTR * ppszDisplay);
	HRESULT(STDMETHODCALLTYPE * IsValueCanonical) (IPropertyDescription2 * This, REFPROPVARIANT propvar);
	HRESULT(STDMETHODCALLTYPE * GetImageReferenceForValue) (IPropertyDescription2 * This, REFPROPVARIANT propvar, LPWSTR * ppszImageRes);
	END_INTERFACE
} IPropertyDescription2Vtbl;
interface IPropertyDescription2
{
	CONST_VTBL struct IPropertyDescription2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyDescription2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyDescription2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyDescription2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyDescription2_GetPropertyKey(This,pkey)    ( (This)->lpVtbl -> GetPropertyKey(This,pkey) )
#define IPropertyDescription2_GetCanonicalName(This,ppszName)    ( (This)->lpVtbl -> GetCanonicalName(This,ppszName) )
#define IPropertyDescription2_GetPropertyType(This,pvartype)    ( (This)->lpVtbl -> GetPropertyType(This,pvartype) )
#define IPropertyDescription2_GetDisplayName(This,ppszName)    ( (This)->lpVtbl -> GetDisplayName(This,ppszName) )
#define IPropertyDescription2_GetEditInvitation(This,ppszInvite)    ( (This)->lpVtbl -> GetEditInvitation(This,ppszInvite) )
#define IPropertyDescription2_GetTypeFlags(This,mask,ppdtFlags)    ( (This)->lpVtbl -> GetTypeFlags(This,mask,ppdtFlags) )
#define IPropertyDescription2_GetViewFlags(This,ppdvFlags)    ( (This)->lpVtbl -> GetViewFlags(This,ppdvFlags) )
#define IPropertyDescription2_GetDefaultColumnWidth(This,pcxChars)    ( (This)->lpVtbl -> GetDefaultColumnWidth(This,pcxChars) )
#define IPropertyDescription2_GetDisplayType(This,pdisplaytype)    ( (This)->lpVtbl -> GetDisplayType(This,pdisplaytype) )
#define IPropertyDescription2_GetColumnState(This,pcsFlags)    ( (This)->lpVtbl -> GetColumnState(This,pcsFlags) )
#define IPropertyDescription2_GetGroupingRange(This,pgr)    ( (This)->lpVtbl -> GetGroupingRange(This,pgr) )
#define IPropertyDescription2_GetRelativeDescriptionType(This,prdt)    ( (This)->lpVtbl -> GetRelativeDescriptionType(This,prdt) )
#define IPropertyDescription2_GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2)    ( (This)->lpVtbl -> GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2) )
#define IPropertyDescription2_GetSortDescription(This,psd)    ( (This)->lpVtbl -> GetSortDescription(This,psd) )
#define IPropertyDescription2_GetSortDescriptionLabel(This,fDescending,ppszDescription)    ( (This)->lpVtbl -> GetSortDescriptionLabel(This,fDescending,ppszDescription) )
#define IPropertyDescription2_GetAggregationType(This,paggtype)    ( (This)->lpVtbl -> GetAggregationType(This,paggtype) )
#define IPropertyDescription2_GetConditionType(This,pcontype,popDefault)    ( (This)->lpVtbl -> GetConditionType(This,pcontype,popDefault) )
#define IPropertyDescription2_GetEnumTypeList(This,riid,ppv)    ( (This)->lpVtbl -> GetEnumTypeList(This,riid,ppv) )
#define IPropertyDescription2_CoerceToCanonicalValue(This,ppropvar)    ( (This)->lpVtbl -> CoerceToCanonicalValue(This,ppropvar) )
#define IPropertyDescription2_FormatForDisplay(This,propvar,pdfFlags,ppszDisplay)    ( (This)->lpVtbl -> FormatForDisplay(This,propvar,pdfFlags,ppszDisplay) )
#define IPropertyDescription2_IsValueCanonical(This,propvar)    ( (This)->lpVtbl -> IsValueCanonical(This,propvar) )
#define IPropertyDescription2_GetImageReferenceForValue(This,propvar,ppszImageRes)    ( (This)->lpVtbl -> GetImageReferenceForValue(This,propvar,ppszImageRes) )
#endif
#endif
#ifndef __IPropertyDescriptionAliasInfo_INTERFACE_DEFINED__
#define __IPropertyDescriptionAliasInfo_INTERFACE_DEFINED__
extern const IID IID_IPropertyDescriptionAliasInfo;
typedef struct IPropertyDescriptionAliasInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyDescriptionAliasInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyDescriptionAliasInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyDescriptionAliasInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetPropertyKey) (IPropertyDescriptionAliasInfo * This, PROPERTYKEY * pkey);
	HRESULT(STDMETHODCALLTYPE * GetCanonicalName) (IPropertyDescriptionAliasInfo * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetPropertyType) (IPropertyDescriptionAliasInfo * This, VARTYPE * pvartype);
	HRESULT(STDMETHODCALLTYPE * GetDisplayName) (IPropertyDescriptionAliasInfo * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetEditInvitation) (IPropertyDescriptionAliasInfo * This, LPWSTR * ppszInvite);
	HRESULT(STDMETHODCALLTYPE * GetTypeFlags) (IPropertyDescriptionAliasInfo * This, PROPDESC_TYPE_FLAGS mask, PROPDESC_TYPE_FLAGS * ppdtFlags);
	HRESULT(STDMETHODCALLTYPE * GetViewFlags) (IPropertyDescriptionAliasInfo * This, PROPDESC_VIEW_FLAGS * ppdvFlags);
	HRESULT(STDMETHODCALLTYPE * GetDefaultColumnWidth) (IPropertyDescriptionAliasInfo * This, UINT * pcxChars);
	HRESULT(STDMETHODCALLTYPE * GetDisplayType) (IPropertyDescriptionAliasInfo * This, PROPDESC_DISPLAYTYPE * pdisplaytype);
	HRESULT(STDMETHODCALLTYPE * GetColumnState) (IPropertyDescriptionAliasInfo * This, SHCOLSTATEF * pcsFlags);
	HRESULT(STDMETHODCALLTYPE * GetGroupingRange) (IPropertyDescriptionAliasInfo * This, PROPDESC_GROUPING_RANGE * pgr);
	HRESULT(STDMETHODCALLTYPE * GetRelativeDescriptionType) (IPropertyDescriptionAliasInfo * This, PROPDESC_RELATIVEDESCRIPTION_TYPE * prdt);
	HRESULT(STDMETHODCALLTYPE * GetRelativeDescription) (IPropertyDescriptionAliasInfo * This, REFPROPVARIANT propvar1, REFPROPVARIANT propvar2, LPWSTR * ppszDesc1, LPWSTR * ppszDesc2);
	HRESULT(STDMETHODCALLTYPE * GetSortDescription) (IPropertyDescriptionAliasInfo * This, PROPDESC_SORTDESCRIPTION * psd);
	HRESULT(STDMETHODCALLTYPE * GetSortDescriptionLabel) (IPropertyDescriptionAliasInfo * This, BOOL fDescending, LPWSTR * ppszDescription);
	HRESULT(STDMETHODCALLTYPE * GetAggregationType) (IPropertyDescriptionAliasInfo * This, PROPDESC_AGGREGATION_TYPE * paggtype);
	HRESULT(STDMETHODCALLTYPE * GetConditionType) (IPropertyDescriptionAliasInfo * This, PROPDESC_CONDITION_TYPE * pcontype, CONDITION_OPERATION * popDefault);
	HRESULT(STDMETHODCALLTYPE * GetEnumTypeList) (IPropertyDescriptionAliasInfo * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * CoerceToCanonicalValue) (IPropertyDescriptionAliasInfo * This, PROPVARIANT * ppropvar);
	HRESULT(STDMETHODCALLTYPE * FormatForDisplay) (IPropertyDescriptionAliasInfo * This, REFPROPVARIANT propvar, PROPDESC_FORMAT_FLAGS pdfFlags, LPWSTR * ppszDisplay);
	HRESULT(STDMETHODCALLTYPE * IsValueCanonical) (IPropertyDescriptionAliasInfo * This, REFPROPVARIANT propvar);
	HRESULT(STDMETHODCALLTYPE * GetSortByAlias) (IPropertyDescriptionAliasInfo * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetAdditionalSortByAliases) (IPropertyDescriptionAliasInfo * This, REFIID riid, void **ppv);
	END_INTERFACE
} IPropertyDescriptionAliasInfoVtbl;
interface IPropertyDescriptionAliasInfo
{
	CONST_VTBL struct IPropertyDescriptionAliasInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyDescriptionAliasInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyDescriptionAliasInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyDescriptionAliasInfo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyDescriptionAliasInfo_GetPropertyKey(This,pkey)    ( (This)->lpVtbl -> GetPropertyKey(This,pkey) )
#define IPropertyDescriptionAliasInfo_GetCanonicalName(This,ppszName)    ( (This)->lpVtbl -> GetCanonicalName(This,ppszName) )
#define IPropertyDescriptionAliasInfo_GetPropertyType(This,pvartype)    ( (This)->lpVtbl -> GetPropertyType(This,pvartype) )
#define IPropertyDescriptionAliasInfo_GetDisplayName(This,ppszName)    ( (This)->lpVtbl -> GetDisplayName(This,ppszName) )
#define IPropertyDescriptionAliasInfo_GetEditInvitation(This,ppszInvite)    ( (This)->lpVtbl -> GetEditInvitation(This,ppszInvite) )
#define IPropertyDescriptionAliasInfo_GetTypeFlags(This,mask,ppdtFlags)    ( (This)->lpVtbl -> GetTypeFlags(This,mask,ppdtFlags) )
#define IPropertyDescriptionAliasInfo_GetViewFlags(This,ppdvFlags)    ( (This)->lpVtbl -> GetViewFlags(This,ppdvFlags) )
#define IPropertyDescriptionAliasInfo_GetDefaultColumnWidth(This,pcxChars)    ( (This)->lpVtbl -> GetDefaultColumnWidth(This,pcxChars) )
#define IPropertyDescriptionAliasInfo_GetDisplayType(This,pdisplaytype)    ( (This)->lpVtbl -> GetDisplayType(This,pdisplaytype) )
#define IPropertyDescriptionAliasInfo_GetColumnState(This,pcsFlags)    ( (This)->lpVtbl -> GetColumnState(This,pcsFlags) )
#define IPropertyDescriptionAliasInfo_GetGroupingRange(This,pgr)    ( (This)->lpVtbl -> GetGroupingRange(This,pgr) )
#define IPropertyDescriptionAliasInfo_GetRelativeDescriptionType(This,prdt)    ( (This)->lpVtbl -> GetRelativeDescriptionType(This,prdt) )
#define IPropertyDescriptionAliasInfo_GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2)    ( (This)->lpVtbl -> GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2) )
#define IPropertyDescriptionAliasInfo_GetSortDescription(This,psd)    ( (This)->lpVtbl -> GetSortDescription(This,psd) )
#define IPropertyDescriptionAliasInfo_GetSortDescriptionLabel(This,fDescending,ppszDescription)    ( (This)->lpVtbl -> GetSortDescriptionLabel(This,fDescending,ppszDescription) )
#define IPropertyDescriptionAliasInfo_GetAggregationType(This,paggtype)    ( (This)->lpVtbl -> GetAggregationType(This,paggtype) )
#define IPropertyDescriptionAliasInfo_GetConditionType(This,pcontype,popDefault)    ( (This)->lpVtbl -> GetConditionType(This,pcontype,popDefault) )
#define IPropertyDescriptionAliasInfo_GetEnumTypeList(This,riid,ppv)    ( (This)->lpVtbl -> GetEnumTypeList(This,riid,ppv) )
#define IPropertyDescriptionAliasInfo_CoerceToCanonicalValue(This,ppropvar)    ( (This)->lpVtbl -> CoerceToCanonicalValue(This,ppropvar) )
#define IPropertyDescriptionAliasInfo_FormatForDisplay(This,propvar,pdfFlags,ppszDisplay)    ( (This)->lpVtbl -> FormatForDisplay(This,propvar,pdfFlags,ppszDisplay) )
#define IPropertyDescriptionAliasInfo_IsValueCanonical(This,propvar)    ( (This)->lpVtbl -> IsValueCanonical(This,propvar) )
#define IPropertyDescriptionAliasInfo_GetSortByAlias(This,riid,ppv)    ( (This)->lpVtbl -> GetSortByAlias(This,riid,ppv) )
#define IPropertyDescriptionAliasInfo_GetAdditionalSortByAliases(This,riid,ppv)    ( (This)->lpVtbl -> GetAdditionalSortByAliases(This,riid,ppv) )
#endif
#endif
#ifndef __IPropertyDescriptionSearchInfo_INTERFACE_DEFINED__
#define __IPropertyDescriptionSearchInfo_INTERFACE_DEFINED__
typedef enum PROPDESC_SEARCHINFO_FLAGS
{
	PDSIF_DEFAULT = 0,
	PDSIF_ININVERTEDINDEX = 0x1,
	PDSIF_ISCOLUMN = 0x2,
	PDSIF_ISCOLUMNSPARSE = 0x4,
	PDSIF_ALWAYSINCLUDE = 0x8
} PROPDESC_SEARCHINFO_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(PROPDESC_SEARCHINFO_FLAGS)
typedef enum PROPDESC_COLUMNINDEX_TYPE
{
	PDCIT_NONE = 0,
	PDCIT_ONDISK = 1,
	PDCIT_INMEMORY = 2,
	PDCIT_ONDEMAND = 3,
	PDCIT_ONDISKALL = 4,
	PDCIT_ONDISKVECTOR = 5
} PROPDESC_COLUMNINDEX_TYPE;
extern const IID IID_IPropertyDescriptionSearchInfo;
typedef struct IPropertyDescriptionSearchInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyDescriptionSearchInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyDescriptionSearchInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyDescriptionSearchInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetPropertyKey) (IPropertyDescriptionSearchInfo * This, PROPERTYKEY * pkey);
	HRESULT(STDMETHODCALLTYPE * GetCanonicalName) (IPropertyDescriptionSearchInfo * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetPropertyType) (IPropertyDescriptionSearchInfo * This, VARTYPE * pvartype);
	HRESULT(STDMETHODCALLTYPE * GetDisplayName) (IPropertyDescriptionSearchInfo * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetEditInvitation) (IPropertyDescriptionSearchInfo * This, LPWSTR * ppszInvite);
	HRESULT(STDMETHODCALLTYPE * GetTypeFlags) (IPropertyDescriptionSearchInfo * This, PROPDESC_TYPE_FLAGS mask, PROPDESC_TYPE_FLAGS * ppdtFlags);
	HRESULT(STDMETHODCALLTYPE * GetViewFlags) (IPropertyDescriptionSearchInfo * This, PROPDESC_VIEW_FLAGS * ppdvFlags);
	HRESULT(STDMETHODCALLTYPE * GetDefaultColumnWidth) (IPropertyDescriptionSearchInfo * This, UINT * pcxChars);
	HRESULT(STDMETHODCALLTYPE * GetDisplayType) (IPropertyDescriptionSearchInfo * This, PROPDESC_DISPLAYTYPE * pdisplaytype);
	HRESULT(STDMETHODCALLTYPE * GetColumnState) (IPropertyDescriptionSearchInfo * This, SHCOLSTATEF * pcsFlags);
	HRESULT(STDMETHODCALLTYPE * GetGroupingRange) (IPropertyDescriptionSearchInfo * This, PROPDESC_GROUPING_RANGE * pgr);
	HRESULT(STDMETHODCALLTYPE * GetRelativeDescriptionType) (IPropertyDescriptionSearchInfo * This, PROPDESC_RELATIVEDESCRIPTION_TYPE * prdt);
	HRESULT(STDMETHODCALLTYPE * GetRelativeDescription) (IPropertyDescriptionSearchInfo * This, REFPROPVARIANT propvar1, REFPROPVARIANT propvar2, LPWSTR * ppszDesc1, LPWSTR * ppszDesc2);
	HRESULT(STDMETHODCALLTYPE * GetSortDescription) (IPropertyDescriptionSearchInfo * This, PROPDESC_SORTDESCRIPTION * psd);
	HRESULT(STDMETHODCALLTYPE * GetSortDescriptionLabel) (IPropertyDescriptionSearchInfo * This, BOOL fDescending, LPWSTR * ppszDescription);
	HRESULT(STDMETHODCALLTYPE * GetAggregationType) (IPropertyDescriptionSearchInfo * This, PROPDESC_AGGREGATION_TYPE * paggtype);
	HRESULT(STDMETHODCALLTYPE * GetConditionType) (IPropertyDescriptionSearchInfo * This, PROPDESC_CONDITION_TYPE * pcontype, CONDITION_OPERATION * popDefault);
	HRESULT(STDMETHODCALLTYPE * GetEnumTypeList) (IPropertyDescriptionSearchInfo * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * CoerceToCanonicalValue) (IPropertyDescriptionSearchInfo * This, PROPVARIANT * ppropvar);
	HRESULT(STDMETHODCALLTYPE * FormatForDisplay) (IPropertyDescriptionSearchInfo * This, REFPROPVARIANT propvar, PROPDESC_FORMAT_FLAGS pdfFlags, LPWSTR * ppszDisplay);
	HRESULT(STDMETHODCALLTYPE * IsValueCanonical) (IPropertyDescriptionSearchInfo * This, REFPROPVARIANT propvar);
	HRESULT(STDMETHODCALLTYPE * GetSearchInfoFlags) (IPropertyDescriptionSearchInfo * This, PROPDESC_SEARCHINFO_FLAGS * ppdsiFlags);
	HRESULT(STDMETHODCALLTYPE * GetColumnIndexType) (IPropertyDescriptionSearchInfo * This, PROPDESC_COLUMNINDEX_TYPE * ppdciType);
	HRESULT(STDMETHODCALLTYPE * GetProjectionString) (IPropertyDescriptionSearchInfo * This, LPWSTR * ppszProjection);
	HRESULT(STDMETHODCALLTYPE * GetMaxSize) (IPropertyDescriptionSearchInfo * This, UINT * pcbMaxSize);
	END_INTERFACE
} IPropertyDescriptionSearchInfoVtbl;
interface IPropertyDescriptionSearchInfo
{
	CONST_VTBL struct IPropertyDescriptionSearchInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyDescriptionSearchInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyDescriptionSearchInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyDescriptionSearchInfo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyDescriptionSearchInfo_GetPropertyKey(This,pkey)    ( (This)->lpVtbl -> GetPropertyKey(This,pkey) )
#define IPropertyDescriptionSearchInfo_GetCanonicalName(This,ppszName)    ( (This)->lpVtbl -> GetCanonicalName(This,ppszName) )
#define IPropertyDescriptionSearchInfo_GetPropertyType(This,pvartype)    ( (This)->lpVtbl -> GetPropertyType(This,pvartype) )
#define IPropertyDescriptionSearchInfo_GetDisplayName(This,ppszName)    ( (This)->lpVtbl -> GetDisplayName(This,ppszName) )
#define IPropertyDescriptionSearchInfo_GetEditInvitation(This,ppszInvite)    ( (This)->lpVtbl -> GetEditInvitation(This,ppszInvite) )
#define IPropertyDescriptionSearchInfo_GetTypeFlags(This,mask,ppdtFlags)    ( (This)->lpVtbl -> GetTypeFlags(This,mask,ppdtFlags) )
#define IPropertyDescriptionSearchInfo_GetViewFlags(This,ppdvFlags)    ( (This)->lpVtbl -> GetViewFlags(This,ppdvFlags) )
#define IPropertyDescriptionSearchInfo_GetDefaultColumnWidth(This,pcxChars)    ( (This)->lpVtbl -> GetDefaultColumnWidth(This,pcxChars) )
#define IPropertyDescriptionSearchInfo_GetDisplayType(This,pdisplaytype)    ( (This)->lpVtbl -> GetDisplayType(This,pdisplaytype) )
#define IPropertyDescriptionSearchInfo_GetColumnState(This,pcsFlags)    ( (This)->lpVtbl -> GetColumnState(This,pcsFlags) )
#define IPropertyDescriptionSearchInfo_GetGroupingRange(This,pgr)    ( (This)->lpVtbl -> GetGroupingRange(This,pgr) )
#define IPropertyDescriptionSearchInfo_GetRelativeDescriptionType(This,prdt)    ( (This)->lpVtbl -> GetRelativeDescriptionType(This,prdt) )
#define IPropertyDescriptionSearchInfo_GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2)    ( (This)->lpVtbl -> GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2) )
#define IPropertyDescriptionSearchInfo_GetSortDescription(This,psd)    ( (This)->lpVtbl -> GetSortDescription(This,psd) )
#define IPropertyDescriptionSearchInfo_GetSortDescriptionLabel(This,fDescending,ppszDescription)    ( (This)->lpVtbl -> GetSortDescriptionLabel(This,fDescending,ppszDescription) )
#define IPropertyDescriptionSearchInfo_GetAggregationType(This,paggtype)    ( (This)->lpVtbl -> GetAggregationType(This,paggtype) )
#define IPropertyDescriptionSearchInfo_GetConditionType(This,pcontype,popDefault)    ( (This)->lpVtbl -> GetConditionType(This,pcontype,popDefault) )
#define IPropertyDescriptionSearchInfo_GetEnumTypeList(This,riid,ppv)    ( (This)->lpVtbl -> GetEnumTypeList(This,riid,ppv) )
#define IPropertyDescriptionSearchInfo_CoerceToCanonicalValue(This,ppropvar)    ( (This)->lpVtbl -> CoerceToCanonicalValue(This,ppropvar) )
#define IPropertyDescriptionSearchInfo_FormatForDisplay(This,propvar,pdfFlags,ppszDisplay)    ( (This)->lpVtbl -> FormatForDisplay(This,propvar,pdfFlags,ppszDisplay) )
#define IPropertyDescriptionSearchInfo_IsValueCanonical(This,propvar)    ( (This)->lpVtbl -> IsValueCanonical(This,propvar) )
#define IPropertyDescriptionSearchInfo_GetSearchInfoFlags(This,ppdsiFlags)    ( (This)->lpVtbl -> GetSearchInfoFlags(This,ppdsiFlags) )
#define IPropertyDescriptionSearchInfo_GetColumnIndexType(This,ppdciType)    ( (This)->lpVtbl -> GetColumnIndexType(This,ppdciType) )
#define IPropertyDescriptionSearchInfo_GetProjectionString(This,ppszProjection)    ( (This)->lpVtbl -> GetProjectionString(This,ppszProjection) )
#define IPropertyDescriptionSearchInfo_GetMaxSize(This,pcbMaxSize)    ( (This)->lpVtbl -> GetMaxSize(This,pcbMaxSize) )
#endif
#endif
#ifndef __IPropertyDescriptionRelatedPropertyInfo_INTERFACE_DEFINED__
#define __IPropertyDescriptionRelatedPropertyInfo_INTERFACE_DEFINED__
extern const IID IID_IPropertyDescriptionRelatedPropertyInfo;
typedef struct IPropertyDescriptionRelatedPropertyInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyDescriptionRelatedPropertyInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyDescriptionRelatedPropertyInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyDescriptionRelatedPropertyInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetPropertyKey) (IPropertyDescriptionRelatedPropertyInfo * This, PROPERTYKEY * pkey);
	HRESULT(STDMETHODCALLTYPE * GetCanonicalName) (IPropertyDescriptionRelatedPropertyInfo * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetPropertyType) (IPropertyDescriptionRelatedPropertyInfo * This, VARTYPE * pvartype);
	HRESULT(STDMETHODCALLTYPE * GetDisplayName) (IPropertyDescriptionRelatedPropertyInfo * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetEditInvitation) (IPropertyDescriptionRelatedPropertyInfo * This, LPWSTR * ppszInvite);
	HRESULT(STDMETHODCALLTYPE * GetTypeFlags) (IPropertyDescriptionRelatedPropertyInfo * This, PROPDESC_TYPE_FLAGS mask, PROPDESC_TYPE_FLAGS * ppdtFlags);
	HRESULT(STDMETHODCALLTYPE * GetViewFlags) (IPropertyDescriptionRelatedPropertyInfo * This, PROPDESC_VIEW_FLAGS * ppdvFlags);
	HRESULT(STDMETHODCALLTYPE * GetDefaultColumnWidth) (IPropertyDescriptionRelatedPropertyInfo * This, UINT * pcxChars);
	HRESULT(STDMETHODCALLTYPE * GetDisplayType) (IPropertyDescriptionRelatedPropertyInfo * This, PROPDESC_DISPLAYTYPE * pdisplaytype);
	HRESULT(STDMETHODCALLTYPE * GetColumnState) (IPropertyDescriptionRelatedPropertyInfo * This, SHCOLSTATEF * pcsFlags);
	HRESULT(STDMETHODCALLTYPE * GetGroupingRange) (IPropertyDescriptionRelatedPropertyInfo * This, PROPDESC_GROUPING_RANGE * pgr);
	HRESULT(STDMETHODCALLTYPE * GetRelativeDescriptionType) (IPropertyDescriptionRelatedPropertyInfo * This, PROPDESC_RELATIVEDESCRIPTION_TYPE * prdt);
	HRESULT(STDMETHODCALLTYPE * GetRelativeDescription) (IPropertyDescriptionRelatedPropertyInfo * This, REFPROPVARIANT propvar1, REFPROPVARIANT propvar2, LPWSTR * ppszDesc1, LPWSTR * ppszDesc2);
	HRESULT(STDMETHODCALLTYPE * GetSortDescription) (IPropertyDescriptionRelatedPropertyInfo * This, PROPDESC_SORTDESCRIPTION * psd);
	HRESULT(STDMETHODCALLTYPE * GetSortDescriptionLabel) (IPropertyDescriptionRelatedPropertyInfo * This, BOOL fDescending, LPWSTR * ppszDescription);
	HRESULT(STDMETHODCALLTYPE * GetAggregationType) (IPropertyDescriptionRelatedPropertyInfo * This, PROPDESC_AGGREGATION_TYPE * paggtype);
	HRESULT(STDMETHODCALLTYPE * GetConditionType) (IPropertyDescriptionRelatedPropertyInfo * This, PROPDESC_CONDITION_TYPE * pcontype, CONDITION_OPERATION * popDefault);
	HRESULT(STDMETHODCALLTYPE * GetEnumTypeList) (IPropertyDescriptionRelatedPropertyInfo * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * CoerceToCanonicalValue) (IPropertyDescriptionRelatedPropertyInfo * This, PROPVARIANT * ppropvar);
	HRESULT(STDMETHODCALLTYPE * FormatForDisplay) (IPropertyDescriptionRelatedPropertyInfo * This, REFPROPVARIANT propvar, PROPDESC_FORMAT_FLAGS pdfFlags, LPWSTR * ppszDisplay);
	HRESULT(STDMETHODCALLTYPE * IsValueCanonical) (IPropertyDescriptionRelatedPropertyInfo * This, REFPROPVARIANT propvar);
	HRESULT(STDMETHODCALLTYPE * GetRelatedProperty) (IPropertyDescriptionRelatedPropertyInfo * This, LPCWSTR pszRelationshipName, REFIID riid, void **ppv);
	END_INTERFACE
} IPropertyDescriptionRelatedPropertyInfoVtbl;
interface IPropertyDescriptionRelatedPropertyInfo
{
	CONST_VTBL struct IPropertyDescriptionRelatedPropertyInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyDescriptionRelatedPropertyInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyDescriptionRelatedPropertyInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyDescriptionRelatedPropertyInfo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyDescriptionRelatedPropertyInfo_GetPropertyKey(This,pkey)    ( (This)->lpVtbl -> GetPropertyKey(This,pkey) )
#define IPropertyDescriptionRelatedPropertyInfo_GetCanonicalName(This,ppszName)    ( (This)->lpVtbl -> GetCanonicalName(This,ppszName) )
#define IPropertyDescriptionRelatedPropertyInfo_GetPropertyType(This,pvartype)    ( (This)->lpVtbl -> GetPropertyType(This,pvartype) )
#define IPropertyDescriptionRelatedPropertyInfo_GetDisplayName(This,ppszName)    ( (This)->lpVtbl -> GetDisplayName(This,ppszName) )
#define IPropertyDescriptionRelatedPropertyInfo_GetEditInvitation(This,ppszInvite)    ( (This)->lpVtbl -> GetEditInvitation(This,ppszInvite) )
#define IPropertyDescriptionRelatedPropertyInfo_GetTypeFlags(This,mask,ppdtFlags)    ( (This)->lpVtbl -> GetTypeFlags(This,mask,ppdtFlags) )
#define IPropertyDescriptionRelatedPropertyInfo_GetViewFlags(This,ppdvFlags)    ( (This)->lpVtbl -> GetViewFlags(This,ppdvFlags) )
#define IPropertyDescriptionRelatedPropertyInfo_GetDefaultColumnWidth(This,pcxChars)    ( (This)->lpVtbl -> GetDefaultColumnWidth(This,pcxChars) )
#define IPropertyDescriptionRelatedPropertyInfo_GetDisplayType(This,pdisplaytype)    ( (This)->lpVtbl -> GetDisplayType(This,pdisplaytype) )
#define IPropertyDescriptionRelatedPropertyInfo_GetColumnState(This,pcsFlags)    ( (This)->lpVtbl -> GetColumnState(This,pcsFlags) )
#define IPropertyDescriptionRelatedPropertyInfo_GetGroupingRange(This,pgr)    ( (This)->lpVtbl -> GetGroupingRange(This,pgr) )
#define IPropertyDescriptionRelatedPropertyInfo_GetRelativeDescriptionType(This,prdt)    ( (This)->lpVtbl -> GetRelativeDescriptionType(This,prdt) )
#define IPropertyDescriptionRelatedPropertyInfo_GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2)    ( (This)->lpVtbl -> GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2) )
#define IPropertyDescriptionRelatedPropertyInfo_GetSortDescription(This,psd)    ( (This)->lpVtbl -> GetSortDescription(This,psd) )
#define IPropertyDescriptionRelatedPropertyInfo_GetSortDescriptionLabel(This,fDescending,ppszDescription)    ( (This)->lpVtbl -> GetSortDescriptionLabel(This,fDescending,ppszDescription) )
#define IPropertyDescriptionRelatedPropertyInfo_GetAggregationType(This,paggtype)    ( (This)->lpVtbl -> GetAggregationType(This,paggtype) )
#define IPropertyDescriptionRelatedPropertyInfo_GetConditionType(This,pcontype,popDefault)    ( (This)->lpVtbl -> GetConditionType(This,pcontype,popDefault) )
#define IPropertyDescriptionRelatedPropertyInfo_GetEnumTypeList(This,riid,ppv)    ( (This)->lpVtbl -> GetEnumTypeList(This,riid,ppv) )
#define IPropertyDescriptionRelatedPropertyInfo_CoerceToCanonicalValue(This,ppropvar)    ( (This)->lpVtbl -> CoerceToCanonicalValue(This,ppropvar) )
#define IPropertyDescriptionRelatedPropertyInfo_FormatForDisplay(This,propvar,pdfFlags,ppszDisplay)    ( (This)->lpVtbl -> FormatForDisplay(This,propvar,pdfFlags,ppszDisplay) )
#define IPropertyDescriptionRelatedPropertyInfo_IsValueCanonical(This,propvar)    ( (This)->lpVtbl -> IsValueCanonical(This,propvar) )
#define IPropertyDescriptionRelatedPropertyInfo_GetRelatedProperty(This,pszRelationshipName,riid,ppv)    ( (This)->lpVtbl -> GetRelatedProperty(This,pszRelationshipName,riid,ppv) )
#endif
#endif
typedef	enum PROPDESC_ENUMFILTER
{	PDEF_ALL = 0,
	PDEF_SYSTEM = 1,
	PDEF_NONSYSTEM = 2,
	PDEF_VIEWABLE = 3,
	PDEF_QUERYABLE = 4,
	PDEF_INFULLTEXTQUERY = 5,
	PDEF_COLUMN = 6
} PROPDESC_ENUMFILTER;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0017_v0_0_s_ifspec;
#ifndef __IPropertySystem_INTERFACE_DEFINED__
#define __IPropertySystem_INTERFACE_DEFINED__
extern const IID IID_IPropertySystem;
typedef struct IPropertySystemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertySystem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertySystem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertySystem * This);
	HRESULT(STDMETHODCALLTYPE * GetPropertyDescription) (IPropertySystem * This, REFPROPERTYKEY propkey, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetPropertyDescriptionByName) (IPropertySystem * This, LPCWSTR pszCanonicalName, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetPropertyDescriptionListFromString) (IPropertySystem * This, LPCWSTR pszPropList, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * EnumeratePropertyDescriptions) (IPropertySystem * This, PROPDESC_ENUMFILTER filterOn, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * FormatForDisplay) (IPropertySystem * This, REFPROPERTYKEY key, REFPROPVARIANT propvar, PROPDESC_FORMAT_FLAGS pdff, LPWSTR pszText, DWORD cchText);
	HRESULT(STDMETHODCALLTYPE * FormatForDisplayAlloc) (IPropertySystem * This, REFPROPERTYKEY key, REFPROPVARIANT propvar, PROPDESC_FORMAT_FLAGS pdff, LPWSTR * ppszDisplay);
	HRESULT(STDMETHODCALLTYPE * RegisterPropertySchema) (IPropertySystem * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * UnregisterPropertySchema) (IPropertySystem * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * RefreshPropertySchema) (IPropertySystem * This);
	END_INTERFACE
} IPropertySystemVtbl;
interface IPropertySystem
{
	CONST_VTBL struct IPropertySystemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertySystem_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertySystem_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertySystem_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertySystem_GetPropertyDescription(This,propkey,riid,ppv)    ( (This)->lpVtbl -> GetPropertyDescription(This,propkey,riid,ppv) )
#define IPropertySystem_GetPropertyDescriptionByName(This,pszCanonicalName,riid,ppv)    ( (This)->lpVtbl -> GetPropertyDescriptionByName(This,pszCanonicalName,riid,ppv) )
#define IPropertySystem_GetPropertyDescriptionListFromString(This,pszPropList,riid,ppv)    ( (This)->lpVtbl -> GetPropertyDescriptionListFromString(This,pszPropList,riid,ppv) )
#define IPropertySystem_EnumeratePropertyDescriptions(This,filterOn,riid,ppv)    ( (This)->lpVtbl -> EnumeratePropertyDescriptions(This,filterOn,riid,ppv) )
#define IPropertySystem_FormatForDisplay(This,key,propvar,pdff,pszText,cchText)    ( (This)->lpVtbl -> FormatForDisplay(This,key,propvar,pdff,pszText,cchText) )
#define IPropertySystem_FormatForDisplayAlloc(This,key,propvar,pdff,ppszDisplay)    ( (This)->lpVtbl -> FormatForDisplayAlloc(This,key,propvar,pdff,ppszDisplay) )
#define IPropertySystem_RegisterPropertySchema(This,pszPath)    ( (This)->lpVtbl -> RegisterPropertySchema(This,pszPath) )
#define IPropertySystem_UnregisterPropertySchema(This,pszPath)    ( (This)->lpVtbl -> UnregisterPropertySchema(This,pszPath) )
#define IPropertySystem_RefreshPropertySchema(This)    ( (This)->lpVtbl -> RefreshPropertySchema(This) )
#endif
#endif
#ifndef __IPropertyDescriptionList_INTERFACE_DEFINED__
#define __IPropertyDescriptionList_INTERFACE_DEFINED__
extern const IID IID_IPropertyDescriptionList;
typedef struct IPropertyDescriptionListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyDescriptionList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyDescriptionList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyDescriptionList * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IPropertyDescriptionList * This, UINT * pcElem);
	HRESULT(STDMETHODCALLTYPE * GetAt) (IPropertyDescriptionList * This, UINT iElem, REFIID riid, void **ppv);
	END_INTERFACE
} IPropertyDescriptionListVtbl;
interface IPropertyDescriptionList
{
	CONST_VTBL struct IPropertyDescriptionListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyDescriptionList_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyDescriptionList_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyDescriptionList_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyDescriptionList_GetCount(This,pcElem)    ( (This)->lpVtbl -> GetCount(This,pcElem) )
#define IPropertyDescriptionList_GetAt(This,iElem,riid,ppv)    ( (This)->lpVtbl -> GetAt(This,iElem,riid,ppv) )
#endif
#endif
#ifndef __IPropertyStoreFactory_INTERFACE_DEFINED__
#define __IPropertyStoreFactory_INTERFACE_DEFINED__
extern const IID IID_IPropertyStoreFactory;
typedef struct IPropertyStoreFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyStoreFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyStoreFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyStoreFactory * This);
	HRESULT(STDMETHODCALLTYPE * GetPropertyStore) (IPropertyStoreFactory * This, GETPROPERTYSTOREFLAGS flags, IUnknown * pUnkFactory, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetPropertyStoreForKeys) (IPropertyStoreFactory * This, const PROPERTYKEY * rgKeys, UINT cKeys, GETPROPERTYSTOREFLAGS flags, REFIID riid, void **ppv);
	END_INTERFACE
} IPropertyStoreFactoryVtbl;
interface IPropertyStoreFactory
{
	CONST_VTBL struct IPropertyStoreFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyStoreFactory_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyStoreFactory_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyStoreFactory_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyStoreFactory_GetPropertyStore(This,flags,pUnkFactory,riid,ppv)    ( (This)->lpVtbl -> GetPropertyStore(This,flags,pUnkFactory,riid,ppv) )
#define IPropertyStoreFactory_GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv)    ( (This)->lpVtbl -> GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv) )
#endif
#endif
#ifndef __IDelayedPropertyStoreFactory_INTERFACE_DEFINED__
#define __IDelayedPropertyStoreFactory_INTERFACE_DEFINED__
extern const IID IID_IDelayedPropertyStoreFactory;
typedef struct IDelayedPropertyStoreFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDelayedPropertyStoreFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDelayedPropertyStoreFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDelayedPropertyStoreFactory * This);
	HRESULT(STDMETHODCALLTYPE * GetPropertyStore) (IDelayedPropertyStoreFactory * This, GETPROPERTYSTOREFLAGS flags, IUnknown * pUnkFactory, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetPropertyStoreForKeys) (IDelayedPropertyStoreFactory * This, const PROPERTYKEY * rgKeys, UINT cKeys, GETPROPERTYSTOREFLAGS flags, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetDelayedPropertyStore) (IDelayedPropertyStoreFactory * This, GETPROPERTYSTOREFLAGS flags, DWORD dwStoreId, REFIID riid, void **ppv);
	END_INTERFACE
} IDelayedPropertyStoreFactoryVtbl;
interface IDelayedPropertyStoreFactory
{
	CONST_VTBL struct IDelayedPropertyStoreFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDelayedPropertyStoreFactory_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDelayedPropertyStoreFactory_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDelayedPropertyStoreFactory_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDelayedPropertyStoreFactory_GetPropertyStore(This,flags,pUnkFactory,riid,ppv)    ( (This)->lpVtbl -> GetPropertyStore(This,flags,pUnkFactory,riid,ppv) )
#define IDelayedPropertyStoreFactory_GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv)    ( (This)->lpVtbl -> GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv) )
#define IDelayedPropertyStoreFactory_GetDelayedPropertyStore(This,flags,dwStoreId,riid,ppv)    ( (This)->lpVtbl -> GetDelayedPropertyStore(This,flags,dwStoreId,riid,ppv) )
#endif
#endif
enum _PERSIST_SPROPSTORE_FLAGS
{
	FPSPS_DEFAULT = 0,
	FPSPS_READONLY = 0x1
};
typedef int PERSIST_SPROPSTORE_FLAGS;
typedef struct tagSERIALIZEDPROPSTORAGE SERIALIZEDPROPSTORAGE;
typedef SERIALIZEDPROPSTORAGE __unaligned *PUSERIALIZEDPROPSTORAGE;
typedef const SERIALIZEDPROPSTORAGE __unaligned *PCUSERIALIZEDPROPSTORAGE;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0021_v0_0_s_ifspec;
#ifndef __IPersistSerializedPropStorage_INTERFACE_DEFINED__
#define __IPersistSerializedPropStorage_INTERFACE_DEFINED__
extern const IID IID_IPersistSerializedPropStorage;
typedef struct IPersistSerializedPropStorageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPersistSerializedPropStorage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPersistSerializedPropStorage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPersistSerializedPropStorage * This);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (IPersistSerializedPropStorage * This, PERSIST_SPROPSTORE_FLAGS flags);
	HRESULT(STDMETHODCALLTYPE * SetPropertyStorage) (IPersistSerializedPropStorage * This, PCUSERIALIZEDPROPSTORAGE psps, DWORD cb);
	HRESULT(STDMETHODCALLTYPE * GetPropertyStorage) (IPersistSerializedPropStorage * This, SERIALIZEDPROPSTORAGE ** ppsps, DWORD * pcb);
	END_INTERFACE
} IPersistSerializedPropStorageVtbl;
interface IPersistSerializedPropStorage
{
	CONST_VTBL struct IPersistSerializedPropStorageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPersistSerializedPropStorage_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPersistSerializedPropStorage_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPersistSerializedPropStorage_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPersistSerializedPropStorage_SetFlags(This,flags)    ( (This)->lpVtbl -> SetFlags(This,flags) )
#define IPersistSerializedPropStorage_SetPropertyStorage(This,psps,cb)    ( (This)->lpVtbl -> SetPropertyStorage(This,psps,cb) )
#define IPersistSerializedPropStorage_GetPropertyStorage(This,ppsps,pcb)    ( (This)->lpVtbl -> GetPropertyStorage(This,ppsps,pcb) )
#endif
#endif
#ifndef __IPersistSerializedPropStorage2_INTERFACE_DEFINED__
#define __IPersistSerializedPropStorage2_INTERFACE_DEFINED__
extern const IID IID_IPersistSerializedPropStorage2;
typedef struct IPersistSerializedPropStorage2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPersistSerializedPropStorage2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPersistSerializedPropStorage2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPersistSerializedPropStorage2 * This);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (IPersistSerializedPropStorage2 * This, PERSIST_SPROPSTORE_FLAGS flags);
	HRESULT(STDMETHODCALLTYPE * SetPropertyStorage) (IPersistSerializedPropStorage2 * This, PCUSERIALIZEDPROPSTORAGE psps, DWORD cb);
	HRESULT(STDMETHODCALLTYPE * GetPropertyStorage) (IPersistSerializedPropStorage2 * This, SERIALIZEDPROPSTORAGE ** ppsps, DWORD * pcb);
	HRESULT(STDMETHODCALLTYPE * GetPropertyStorageSize) (IPersistSerializedPropStorage2 * This, DWORD * pcb);
	HRESULT(STDMETHODCALLTYPE * GetPropertyStorageBuffer) (IPersistSerializedPropStorage2 * This, SERIALIZEDPROPSTORAGE * psps, DWORD cb, DWORD * pcbWritten);
	END_INTERFACE
} IPersistSerializedPropStorage2Vtbl;
interface IPersistSerializedPropStorage2
{
	CONST_VTBL struct IPersistSerializedPropStorage2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPersistSerializedPropStorage2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPersistSerializedPropStorage2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPersistSerializedPropStorage2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPersistSerializedPropStorage2_SetFlags(This,flags)    ( (This)->lpVtbl -> SetFlags(This,flags) )
#define IPersistSerializedPropStorage2_SetPropertyStorage(This,psps,cb)    ( (This)->lpVtbl -> SetPropertyStorage(This,psps,cb) )
#define IPersistSerializedPropStorage2_GetPropertyStorage(This,ppsps,pcb)    ( (This)->lpVtbl -> GetPropertyStorage(This,ppsps,pcb) )
#define IPersistSerializedPropStorage2_GetPropertyStorageSize(This,pcb)    ( (This)->lpVtbl -> GetPropertyStorageSize(This,pcb) )
#define IPersistSerializedPropStorage2_GetPropertyStorageBuffer(This,psps,cb,pcbWritten)    ( (This)->lpVtbl -> GetPropertyStorageBuffer(This,psps,cb,pcbWritten) )
#endif
#endif
#ifndef __IPropertySystemChangeNotify_INTERFACE_DEFINED__
#define __IPropertySystemChangeNotify_INTERFACE_DEFINED__
extern const IID IID_IPropertySystemChangeNotify;
typedef struct IPropertySystemChangeNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertySystemChangeNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertySystemChangeNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertySystemChangeNotify * This);
	HRESULT(STDMETHODCALLTYPE * SchemaRefreshed) (IPropertySystemChangeNotify * This);
	END_INTERFACE
} IPropertySystemChangeNotifyVtbl;
interface IPropertySystemChangeNotify
{
	CONST_VTBL struct IPropertySystemChangeNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertySystemChangeNotify_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertySystemChangeNotify_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertySystemChangeNotify_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertySystemChangeNotify_SchemaRefreshed(This)    ( (This)->lpVtbl -> SchemaRefreshed(This) )
#endif
#endif
#ifndef __ICreateObject_INTERFACE_DEFINED__
#define __ICreateObject_INTERFACE_DEFINED__
extern const IID IID_ICreateObject;
typedef struct ICreateObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICreateObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICreateObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICreateObject * This);
	HRESULT(STDMETHODCALLTYPE * CreateObject) (ICreateObject * This, REFCLSID clsid, IUnknown * pUnkOuter, REFIID riid, void **ppv);
	END_INTERFACE
} ICreateObjectVtbl;
interface ICreateObject
{
	CONST_VTBL struct ICreateObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICreateObject_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICreateObject_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICreateObject_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICreateObject_CreateObject(This,clsid,pUnkOuter,riid,ppv)    ( (This)->lpVtbl -> CreateObject(This,clsid,pUnkOuter,riid,ppv) )
#endif
#endif
PSSTDAPI PSFormatForDisplay(REFPROPERTYKEY propkey, REFPROPVARIANT propvar, PROPDESC_FORMAT_FLAGS pdfFlags, LPWSTR pwszText, DWORD cchText);
PSSTDAPI PSFormatForDisplayAlloc(REFPROPERTYKEY key, REFPROPVARIANT propvar, PROPDESC_FORMAT_FLAGS pdff, PWSTR * ppszDisplay);
PSSTDAPI PSFormatPropertyValue(IPropertyStore * pps, IPropertyDescription * ppd, PROPDESC_FORMAT_FLAGS pdff, LPWSTR * ppszDisplay);
PSSTDAPI PSGetImageReferenceForValue(REFPROPERTYKEY propkey, REFPROPVARIANT propvar, PWSTR * ppszImageRes);
#define PKEY_PIDSTR_MAX     10
#define GUIDSTRING_MAX      (1 + 8 + 1 + 4 + 1 + 4 + 1 + 4 + 1 + 12 + 1 + 1)
#define PKEYSTR_MAX         (GUIDSTRING_MAX + 1 + PKEY_PIDSTR_MAX)
PSSTDAPI PSStringFromPropertyKey(REFPROPERTYKEY pkey, LPWSTR psz, UINT cch);
PSSTDAPI PSPropertyKeyFromString(LPCWSTR pszString, PROPERTYKEY * pkey);
PSSTDAPI PSCreateMemoryPropertyStore(REFIID riid, void **ppv);
PSSTDAPI PSCreateDelayedMultiplexPropertyStore(GETPROPERTYSTOREFLAGS flags, IDelayedPropertyStoreFactory * pdpsf, const DWORD * rgStoreIds, DWORD cStores, REFIID riid, void **ppv);
PSSTDAPI PSCreateMultiplexPropertyStore(IUnknown ** prgpunkStores, DWORD cStores, REFIID riid, void **ppv);
PSSTDAPI PSCreatePropertyChangeArray(const PROPERTYKEY * rgpropkey, const PKA_FLAGS * rgflags, const PROPVARIANT * rgpropvar, UINT cChanges, REFIID riid, void **ppv);
PSSTDAPI PSCreateSimplePropertyChange(PKA_FLAGS flags, REFPROPERTYKEY key, REFPROPVARIANT propvar, REFIID riid, void **ppv);
PSSTDAPI PSGetPropertyDescription(REFPROPERTYKEY propkey, REFIID riid, void **ppv);
PSSTDAPI PSGetPropertyDescriptionByName(LPCWSTR pszCanonicalName, REFIID riid, void **ppv);
PSSTDAPI PSLookupPropertyHandlerCLSID(PCWSTR pszFilePath, CLSID * pclsid);
PSSTDAPI PSGetItemPropertyHandler(IUnknown * punkItem, BOOL fReadWrite, REFIID riid, void **ppv);
PSSTDAPI PSGetItemPropertyHandlerWithCreateObject(IUnknown * punkItem, BOOL fReadWrite, IUnknown * punkCreateObject, REFIID riid, void **ppv);
PSSTDAPI PSGetPropertyValue(IPropertyStore * pps, IPropertyDescription * ppd, PROPVARIANT * ppropvar);
PSSTDAPI PSSetPropertyValue(IPropertyStore * pps, IPropertyDescription * ppd, REFPROPVARIANT propvar);
PSSTDAPI PSRegisterPropertySchema(PCWSTR pszPath);
PSSTDAPI PSUnregisterPropertySchema(PCWSTR pszPath);
PSSTDAPI PSRefreshPropertySchema(void);
PSSTDAPI PSEnumeratePropertyDescriptions(PROPDESC_ENUMFILTER filterOn, REFIID riid, void **ppv);
PSSTDAPI PSGetPropertyKeyFromName(PCWSTR pszName, PROPERTYKEY * ppropkey);
PSSTDAPI PSGetNameFromPropertyKey(REFPROPERTYKEY propkey, PWSTR * ppszCanonicalName);
PSSTDAPI PSCoerceToCanonicalValue(REFPROPERTYKEY key, PROPVARIANT * ppropvar);
PSSTDAPI PSGetPropertyDescriptionListFromString(LPCWSTR pszPropList, REFIID riid, void **ppv);
PSSTDAPI PSCreatePropertyStoreFromPropertySetStorage(IPropertySetStorage * ppss, DWORD grfMode, REFIID riid, void **ppv);
PSSTDAPI PSCreatePropertyStoreFromObject(IUnknown * punk, DWORD grfMode, REFIID riid, void **ppv);
PSSTDAPI PSCreateAdapterFromPropertyStore(IPropertyStore * pps, REFIID riid, void **ppv);
PSSTDAPI PSGetPropertySystem(REFIID riid, void **ppv);
PSSTDAPI PSGetPropertyFromPropertyStorage(PCUSERIALIZEDPROPSTORAGE psps, DWORD cb, REFPROPERTYKEY rpkey, PROPVARIANT * ppropvar);
PSSTDAPI PSGetNamedPropertyFromPropertyStorage(PCUSERIALIZEDPROPSTORAGE psps, DWORD cb, LPCWSTR pszName, PROPVARIANT * ppropvar);
PSSTDAPI PSPropertyBag_ReadType(IPropertyBag * propBag, LPCWSTR propName, VARIANT * var, VARTYPE type);
PSSTDAPI PSPropertyBag_ReadStr(IPropertyBag * propBag, LPCWSTR propName, LPWSTR value, int characterCount);
PSSTDAPI PSPropertyBag_ReadStrAlloc(IPropertyBag * propBag, LPCWSTR propName, PWSTR * value);
PSSTDAPI PSPropertyBag_ReadBSTR(IPropertyBag * propBag, LPCWSTR propName, BSTR * value);
PSSTDAPI PSPropertyBag_WriteStr(IPropertyBag * propBag, LPCWSTR propName, LPCWSTR value);
PSSTDAPI PSPropertyBag_WriteBSTR(IPropertyBag * propBag, LPCWSTR propName, BSTR value);
PSSTDAPI PSPropertyBag_ReadInt(IPropertyBag * propBag, LPCWSTR propName, INT * value);
PSSTDAPI PSPropertyBag_WriteInt(IPropertyBag * propBag, LPCWSTR propName, INT value);
PSSTDAPI PSPropertyBag_ReadSHORT(IPropertyBag * propBag, LPCWSTR propName, SHORT * value);
PSSTDAPI PSPropertyBag_WriteSHORT(IPropertyBag * propBag, LPCWSTR propName, SHORT value);
PSSTDAPI PSPropertyBag_ReadLONG(IPropertyBag * propBag, LPCWSTR propName, LONG * value);
PSSTDAPI PSPropertyBag_WriteLONG(IPropertyBag * propBag, LPCWSTR propName, LONG value);
PSSTDAPI PSPropertyBag_ReadDWORD(IPropertyBag * propBag, LPCWSTR propName, DWORD * value);
PSSTDAPI PSPropertyBag_WriteDWORD(IPropertyBag * propBag, LPCWSTR propName, DWORD value);
PSSTDAPI PSPropertyBag_ReadBOOL(IPropertyBag * propBag, LPCWSTR propName, BOOL * value);
PSSTDAPI PSPropertyBag_WriteBOOL(IPropertyBag * propBag, LPCWSTR propName, BOOL value);
PSSTDAPI PSPropertyBag_ReadPOINTL(IPropertyBag * propBag, LPCWSTR propName, POINTL * value);
PSSTDAPI PSPropertyBag_WritePOINTL(IPropertyBag * propBag, LPCWSTR propName, const POINTL * value);
PSSTDAPI PSPropertyBag_ReadPOINTS(IPropertyBag * propBag, LPCWSTR propName, POINTS * value);
PSSTDAPI PSPropertyBag_WritePOINTS(IPropertyBag * propBag, LPCWSTR propName, const POINTS * value);
PSSTDAPI PSPropertyBag_ReadRECTL(IPropertyBag * propBag, LPCWSTR propName, RECTL * value);
PSSTDAPI PSPropertyBag_WriteRECTL(IPropertyBag * propBag, LPCWSTR propName, const RECTL * value);
PSSTDAPI PSPropertyBag_ReadStream(IPropertyBag * propBag, LPCWSTR propName, IStream ** value);
PSSTDAPI PSPropertyBag_WriteStream(IPropertyBag * propBag, LPCWSTR propName, IStream * value);
PSSTDAPI PSPropertyBag_Delete(IPropertyBag * propBag, LPCWSTR propName);
PSSTDAPI PSPropertyBag_ReadULONGLONG(IPropertyBag * propBag, LPCWSTR propName, ULONGLONG * value);
PSSTDAPI PSPropertyBag_WriteULONGLONG(IPropertyBag * propBag, LPCWSTR propName, ULONGLONG value);
PSSTDAPI PSPropertyBag_ReadUnknown(IPropertyBag * propBag, LPCWSTR propName, REFIID riid, void **ppv);
PSSTDAPI PSPropertyBag_WriteUnknown(IPropertyBag * propBag, LPCWSTR propName, IUnknown * punk);
PSSTDAPI PSPropertyBag_ReadGUID(IPropertyBag * propBag, LPCWSTR propName, GUID * value);
PSSTDAPI PSPropertyBag_WriteGUID(IPropertyBag * propBag, LPCWSTR propName, const GUID * value);
PSSTDAPI PSPropertyBag_ReadPropertyKey(IPropertyBag * propBag, LPCWSTR propName, PROPERTYKEY * value);
PSSTDAPI PSPropertyBag_WritePropertyKey(IPropertyBag * propBag, LPCWSTR propName, REFPROPERTYKEY value);
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0025_v0_0_s_ifspec;
#ifndef __PropSysObjects_LIBRARY_DEFINED__
#define __PropSysObjects_LIBRARY_DEFINED__
extern const IID LIBID_PropSysObjects;
extern const CLSID CLSID_InMemoryPropertyStore;
extern const CLSID CLSID_PropertySystem;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
HRESULT STDMETHODCALLTYPE IInitializeWithStream_Initialize_Proxy(IInitializeWithStream * This, IStream * pstream, DWORD grfMode);
HRESULT STDMETHODCALLTYPE IInitializeWithStream_Initialize_Stub(IInitializeWithStream * This, IStream * pstream, DWORD grfMode);
HRESULT STDMETHODCALLTYPE IPropertyDescription_CoerceToCanonicalValue_Proxy(IPropertyDescription * This, PROPVARIANT * ppropvar);
HRESULT STDMETHODCALLTYPE IPropertyDescription_CoerceToCanonicalValue_Stub(IPropertyDescription * This, REFPROPVARIANT propvar, PROPVARIANT * ppropvar);
#endif
