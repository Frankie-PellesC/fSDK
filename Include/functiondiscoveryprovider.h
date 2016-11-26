/*+@@file@@----------------------------------------------------------------*//*!
 \file		functiondiscoveryprovider.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 10 19:41:38 2016
 \date		Modified on Sun Jul 10 19:41:38 2016
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
#ifndef __functiondiscoveryprovider_h__
#define __functiondiscoveryprovider_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IFunctionDiscoveryProvider_FWD_DEFINED__
#define __IFunctionDiscoveryProvider_FWD_DEFINED__
typedef interface IFunctionDiscoveryProvider IFunctionDiscoveryProvider;
#endif
#ifndef __IProviderProperties_FWD_DEFINED__
#define __IProviderProperties_FWD_DEFINED__
typedef interface IProviderProperties IProviderProperties;
#endif
#ifndef __IProviderPublishing_FWD_DEFINED__
#define __IProviderPublishing_FWD_DEFINED__
typedef interface IProviderPublishing IProviderPublishing;
#endif
#ifndef __IFunctionDiscoveryProviderFactory_FWD_DEFINED__
#define __IFunctionDiscoveryProviderFactory_FWD_DEFINED__
typedef interface IFunctionDiscoveryProviderFactory IFunctionDiscoveryProviderFactory;
#endif
#ifndef __IFunctionDiscoveryProviderQuery_FWD_DEFINED__
#define __IFunctionDiscoveryProviderQuery_FWD_DEFINED__
typedef interface IFunctionDiscoveryProviderQuery IFunctionDiscoveryProviderQuery;
#endif
#ifndef __IProviderQueryConstraintCollection_FWD_DEFINED__
#define __IProviderQueryConstraintCollection_FWD_DEFINED__
typedef interface IProviderQueryConstraintCollection IProviderQueryConstraintCollection;
#endif
#ifndef __IProviderPropertyConstraintCollection_FWD_DEFINED__
#define __IProviderPropertyConstraintCollection_FWD_DEFINED__
typedef interface IProviderPropertyConstraintCollection IProviderPropertyConstraintCollection;
#endif
#ifndef __IFunctionDiscoveryServiceProvider_FWD_DEFINED__
#define __IFunctionDiscoveryServiceProvider_FWD_DEFINED__
typedef interface IFunctionDiscoveryServiceProvider IFunctionDiscoveryServiceProvider;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <propsys.h>
#include <FunctionDiscoveryAPI.h>
extern RPC_IF_HANDLE __MIDL_itf_functiondiscoveryprovider_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_functiondiscoveryprovider_0000_0000_v0_0_s_ifspec;
#ifndef __IFunctionDiscoveryProvider_INTERFACE_DEFINED__
#define __IFunctionDiscoveryProvider_INTERFACE_DEFINED__
extern const IID IID_IFunctionDiscoveryProvider;
typedef struct IFunctionDiscoveryProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFunctionDiscoveryProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFunctionDiscoveryProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFunctionDiscoveryProvider * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IFunctionDiscoveryProvider * This, IFunctionDiscoveryProviderFactory * pIFunctionDiscoveryProviderFactory, IFunctionDiscoveryNotification * pIFunctionDiscoveryNotification, LCID lcidUserDefault, DWORD * pdwStgAccessCapabilities);
	HRESULT(STDMETHODCALLTYPE * Query) (IFunctionDiscoveryProvider * This, IFunctionDiscoveryProviderQuery * pIFunctionDiscoveryProviderQuery, IFunctionInstanceCollection ** ppIFunctionInstanceCollection);
	HRESULT(STDMETHODCALLTYPE * EndQuery) (IFunctionDiscoveryProvider * This);
	HRESULT(STDMETHODCALLTYPE * InstancePropertyStoreValidateAccess) (IFunctionDiscoveryProvider * This, IFunctionInstance * pIFunctionInstance, INT_PTR iProviderInstanceContext, const DWORD dwStgAccess);
	HRESULT(STDMETHODCALLTYPE * InstancePropertyStoreOpen) (IFunctionDiscoveryProvider * This, IFunctionInstance * pIFunctionInstance, INT_PTR iProviderInstanceContext, const DWORD dwStgAccess, IPropertyStore ** ppIPropertyStore);
	HRESULT(STDMETHODCALLTYPE * InstancePropertyStoreFlush) (IFunctionDiscoveryProvider * This, IFunctionInstance * pIFunctionInstance, INT_PTR iProviderInstanceContext);
	HRESULT(STDMETHODCALLTYPE * InstanceQueryService) (IFunctionDiscoveryProvider * This, IFunctionInstance * pIFunctionInstance, INT_PTR iProviderInstanceContext, REFGUID guidService, REFIID riid, IUnknown ** ppIUnknown);
	HRESULT(STDMETHODCALLTYPE * InstanceReleased) (IFunctionDiscoveryProvider * This, IFunctionInstance * pIFunctionInstance, INT_PTR iProviderInstanceContext);
	END_INTERFACE
}  IFunctionDiscoveryProviderVtbl;
interface IFunctionDiscoveryProvider
{
	CONST_VTBL struct IFunctionDiscoveryProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFunctionDiscoveryProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFunctionDiscoveryProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFunctionDiscoveryProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFunctionDiscoveryProvider_Initialize(This,pIFunctionDiscoveryProviderFactory,pIFunctionDiscoveryNotification,lcidUserDefault,pdwStgAccessCapabilities)( (This)->lpVtbl -> Initialize(This,pIFunctionDiscoveryProviderFactory,pIFunctionDiscoveryNotification,lcidUserDefault,pdwStgAccessCapabilities) )
#define IFunctionDiscoveryProvider_Query(This,pIFunctionDiscoveryProviderQuery,ppIFunctionInstanceCollection)( (This)->lpVtbl -> Query(This,pIFunctionDiscoveryProviderQuery,ppIFunctionInstanceCollection) )
#define IFunctionDiscoveryProvider_EndQuery(This)( (This)->lpVtbl -> EndQuery(This) )
#define IFunctionDiscoveryProvider_InstancePropertyStoreValidateAccess(This,pIFunctionInstance,iProviderInstanceContext,dwStgAccess)( (This)->lpVtbl -> InstancePropertyStoreValidateAccess(This,pIFunctionInstance,iProviderInstanceContext,dwStgAccess) )
#define IFunctionDiscoveryProvider_InstancePropertyStoreOpen(This,pIFunctionInstance,iProviderInstanceContext,dwStgAccess,ppIPropertyStore)( (This)->lpVtbl -> InstancePropertyStoreOpen(This,pIFunctionInstance,iProviderInstanceContext,dwStgAccess,ppIPropertyStore) )
#define IFunctionDiscoveryProvider_InstancePropertyStoreFlush(This,pIFunctionInstance,iProviderInstanceContext)( (This)->lpVtbl -> InstancePropertyStoreFlush(This,pIFunctionInstance,iProviderInstanceContext) )
#define IFunctionDiscoveryProvider_InstanceQueryService(This,pIFunctionInstance,iProviderInstanceContext,guidService,riid,ppIUnknown)( (This)->lpVtbl -> InstanceQueryService(This,pIFunctionInstance,iProviderInstanceContext,guidService,riid,ppIUnknown) )
#define IFunctionDiscoveryProvider_InstanceReleased(This,pIFunctionInstance,iProviderInstanceContext)( (This)->lpVtbl -> InstanceReleased(This,pIFunctionInstance,iProviderInstanceContext) )
#endif
#endif
#ifndef __IProviderProperties_INTERFACE_DEFINED__
#define __IProviderProperties_INTERFACE_DEFINED__
extern const IID IID_IProviderProperties;
typedef struct IProviderPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProviderProperties * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProviderProperties * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProviderProperties * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IProviderProperties * This, IFunctionInstance * pIFunctionInstance, INT_PTR iProviderInstanceContext, DWORD * pdwCount);
	HRESULT(STDMETHODCALLTYPE * GetAt) (IProviderProperties * This, IFunctionInstance * pIFunctionInstance, INT_PTR iProviderInstanceContext, DWORD dwIndex, PROPERTYKEY * pKey);
	HRESULT(STDMETHODCALLTYPE * GetValue) (IProviderProperties * This, IFunctionInstance * pIFunctionInstance, INT_PTR iProviderInstanceContext, REFPROPERTYKEY Key, PROPVARIANT * ppropVar);
	HRESULT(STDMETHODCALLTYPE * SetValue) (IProviderProperties * This, IFunctionInstance * pIFunctionInstance, INT_PTR iProviderInstanceContext, REFPROPERTYKEY Key, const PROPVARIANT * ppropVar);
	END_INTERFACE
}  IProviderPropertiesVtbl;
interface IProviderProperties
{
	CONST_VTBL struct IProviderPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProviderProperties_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProviderProperties_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IProviderProperties_Release(This)( (This)->lpVtbl -> Release(This) )
#define IProviderProperties_GetCount(This,pIFunctionInstance,iProviderInstanceContext,pdwCount)( (This)->lpVtbl -> GetCount(This,pIFunctionInstance,iProviderInstanceContext,pdwCount) )
#define IProviderProperties_GetAt(This,pIFunctionInstance,iProviderInstanceContext,dwIndex,pKey)( (This)->lpVtbl -> GetAt(This,pIFunctionInstance,iProviderInstanceContext,dwIndex,pKey) )
#define IProviderProperties_GetValue(This,pIFunctionInstance,iProviderInstanceContext,Key,ppropVar)( (This)->lpVtbl -> GetValue(This,pIFunctionInstance,iProviderInstanceContext,Key,ppropVar) )
#define IProviderProperties_SetValue(This,pIFunctionInstance,iProviderInstanceContext,Key,ppropVar)( (This)->lpVtbl -> SetValue(This,pIFunctionInstance,iProviderInstanceContext,Key,ppropVar) )
#endif
#endif
#ifndef __IProviderPublishing_INTERFACE_DEFINED__
#define __IProviderPublishing_INTERFACE_DEFINED__
extern const IID IID_IProviderPublishing;
typedef struct IProviderPublishingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProviderPublishing * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProviderPublishing * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProviderPublishing * This);
	HRESULT(STDMETHODCALLTYPE * CreateInstance) (IProviderPublishing * This, SystemVisibilityFlags enumVisibilityFlags, const WCHAR * pszSubCategory, const WCHAR * pszProviderInstanceIdentity, IFunctionInstance ** ppIFunctionInstance);
	HRESULT(STDMETHODCALLTYPE * RemoveInstance) (IProviderPublishing * This, SystemVisibilityFlags enumVisibilityFlags, const WCHAR * pszSubCategory, const WCHAR * pszProviderInstanceIdentity);
	END_INTERFACE
}  IProviderPublishingVtbl;
interface IProviderPublishing
{
	CONST_VTBL struct IProviderPublishingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProviderPublishing_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProviderPublishing_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IProviderPublishing_Release(This)( (This)->lpVtbl -> Release(This) )
#define IProviderPublishing_CreateInstance(This,enumVisibilityFlags,pszSubCategory,pszProviderInstanceIdentity,ppIFunctionInstance)( (This)->lpVtbl -> CreateInstance(This,enumVisibilityFlags,pszSubCategory,pszProviderInstanceIdentity,ppIFunctionInstance) )
#define IProviderPublishing_RemoveInstance(This,enumVisibilityFlags,pszSubCategory,pszProviderInstanceIdentity)( (This)->lpVtbl -> RemoveInstance(This,enumVisibilityFlags,pszSubCategory,pszProviderInstanceIdentity) )
#endif
#endif
#ifndef __IFunctionDiscoveryProviderFactory_INTERFACE_DEFINED__
#define __IFunctionDiscoveryProviderFactory_INTERFACE_DEFINED__
extern const IID IID_IFunctionDiscoveryProviderFactory;
typedef struct IFunctionDiscoveryProviderFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFunctionDiscoveryProviderFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFunctionDiscoveryProviderFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFunctionDiscoveryProviderFactory * This);
	HRESULT(STDMETHODCALLTYPE * CreatePropertyStore) (IFunctionDiscoveryProviderFactory * This, IPropertyStore ** ppIPropertyStore);
	HRESULT(STDMETHODCALLTYPE * CreateInstance) (IFunctionDiscoveryProviderFactory * This, const WCHAR * pszSubCategory, const WCHAR * pszProviderInstanceIdentity, INT_PTR iProviderInstanceContext, IPropertyStore * pIPropertyStore, IFunctionDiscoveryProvider * pIFunctionDiscoveryProvider, IFunctionInstance ** ppIFunctionInstance);
	HRESULT(STDMETHODCALLTYPE * CreateFunctionInstanceCollection) (IFunctionDiscoveryProviderFactory * This, IFunctionInstanceCollection ** ppIFunctionInstanceCollection);
	END_INTERFACE
}  IFunctionDiscoveryProviderFactoryVtbl;
interface IFunctionDiscoveryProviderFactory
{
	CONST_VTBL struct IFunctionDiscoveryProviderFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFunctionDiscoveryProviderFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFunctionDiscoveryProviderFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFunctionDiscoveryProviderFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFunctionDiscoveryProviderFactory_CreatePropertyStore(This,ppIPropertyStore)( (This)->lpVtbl -> CreatePropertyStore(This,ppIPropertyStore) )
#define IFunctionDiscoveryProviderFactory_CreateInstance(This,pszSubCategory,pszProviderInstanceIdentity,iProviderInstanceContext,pIPropertyStore,pIFunctionDiscoveryProvider,ppIFunctionInstance)( (This)->lpVtbl -> CreateInstance(This,pszSubCategory,pszProviderInstanceIdentity,iProviderInstanceContext,pIPropertyStore,pIFunctionDiscoveryProvider,ppIFunctionInstance) )
#define IFunctionDiscoveryProviderFactory_CreateFunctionInstanceCollection(This,ppIFunctionInstanceCollection)( (This)->lpVtbl -> CreateFunctionInstanceCollection(This,ppIFunctionInstanceCollection) )
#endif
#endif
#ifndef __IFunctionDiscoveryProviderQuery_INTERFACE_DEFINED__
#define __IFunctionDiscoveryProviderQuery_INTERFACE_DEFINED__
extern const IID IID_IFunctionDiscoveryProviderQuery;
typedef struct IFunctionDiscoveryProviderQueryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFunctionDiscoveryProviderQuery * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFunctionDiscoveryProviderQuery * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFunctionDiscoveryProviderQuery * This);
	HRESULT(STDMETHODCALLTYPE * IsInstanceQuery) (IFunctionDiscoveryProviderQuery * This, BOOL * pisInstanceQuery, WCHAR ** ppszConstraintValue);
	HRESULT(STDMETHODCALLTYPE * IsSubcategoryQuery) (IFunctionDiscoveryProviderQuery * This, BOOL * pisSubcategoryQuery, WCHAR ** ppszConstraintValue);
	HRESULT(STDMETHODCALLTYPE * GetQueryConstraints) (IFunctionDiscoveryProviderQuery * This, IProviderQueryConstraintCollection ** ppIProviderQueryConstraints);
	HRESULT(STDMETHODCALLTYPE * GetPropertyConstraints) (IFunctionDiscoveryProviderQuery * This, IProviderPropertyConstraintCollection ** ppIProviderPropertyConstraints);
	END_INTERFACE
}  IFunctionDiscoveryProviderQueryVtbl;
interface IFunctionDiscoveryProviderQuery
{
	CONST_VTBL struct IFunctionDiscoveryProviderQueryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFunctionDiscoveryProviderQuery_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFunctionDiscoveryProviderQuery_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFunctionDiscoveryProviderQuery_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFunctionDiscoveryProviderQuery_IsInstanceQuery(This,pisInstanceQuery,ppszConstraintValue)( (This)->lpVtbl -> IsInstanceQuery(This,pisInstanceQuery,ppszConstraintValue) )
#define IFunctionDiscoveryProviderQuery_IsSubcategoryQuery(This,pisSubcategoryQuery,ppszConstraintValue)( (This)->lpVtbl -> IsSubcategoryQuery(This,pisSubcategoryQuery,ppszConstraintValue) )
#define IFunctionDiscoveryProviderQuery_GetQueryConstraints(This,ppIProviderQueryConstraints)( (This)->lpVtbl -> GetQueryConstraints(This,ppIProviderQueryConstraints) )
#define IFunctionDiscoveryProviderQuery_GetPropertyConstraints(This,ppIProviderPropertyConstraints)( (This)->lpVtbl -> GetPropertyConstraints(This,ppIProviderPropertyConstraints) )
#endif
#endif
#ifndef __IProviderQueryConstraintCollection_INTERFACE_DEFINED__
#define __IProviderQueryConstraintCollection_INTERFACE_DEFINED__
extern const IID IID_IProviderQueryConstraintCollection;
typedef struct IProviderQueryConstraintCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProviderQueryConstraintCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProviderQueryConstraintCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProviderQueryConstraintCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IProviderQueryConstraintCollection * This, DWORD * pdwCount);
	HRESULT(STDMETHODCALLTYPE * Get) (IProviderQueryConstraintCollection * This, const WCHAR * pszConstraintName, WCHAR ** ppszConstraintValue);
	HRESULT(STDMETHODCALLTYPE * Item) (IProviderQueryConstraintCollection * This, DWORD dwIndex, WCHAR ** ppszConstraintName, WCHAR ** ppszConstraintValue);
	HRESULT(STDMETHODCALLTYPE * Next) (IProviderQueryConstraintCollection * This, WCHAR ** ppszConstraintName, WCHAR ** ppszConstraintValue);
	HRESULT(STDMETHODCALLTYPE * Skip) (IProviderQueryConstraintCollection * This);
	HRESULT(STDMETHODCALLTYPE * Reset) (IProviderQueryConstraintCollection * This);
	END_INTERFACE
}  IProviderQueryConstraintCollectionVtbl;
interface IProviderQueryConstraintCollection
{
	CONST_VTBL struct IProviderQueryConstraintCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProviderQueryConstraintCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProviderQueryConstraintCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IProviderQueryConstraintCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IProviderQueryConstraintCollection_GetCount(This,pdwCount)( (This)->lpVtbl -> GetCount(This,pdwCount) )
#define IProviderQueryConstraintCollection_Get(This,pszConstraintName,ppszConstraintValue)( (This)->lpVtbl -> Get(This,pszConstraintName,ppszConstraintValue) )
#define IProviderQueryConstraintCollection_Item(This,dwIndex,ppszConstraintName,ppszConstraintValue)( (This)->lpVtbl -> Item(This,dwIndex,ppszConstraintName,ppszConstraintValue) )
#define IProviderQueryConstraintCollection_Next(This,ppszConstraintName,ppszConstraintValue)( (This)->lpVtbl -> Next(This,ppszConstraintName,ppszConstraintValue) )
#define IProviderQueryConstraintCollection_Skip(This)( (This)->lpVtbl -> Skip(This) )
#define IProviderQueryConstraintCollection_Reset(This)( (This)->lpVtbl -> Reset(This) )
#endif
#endif
#ifndef __IProviderPropertyConstraintCollection_INTERFACE_DEFINED__
#define __IProviderPropertyConstraintCollection_INTERFACE_DEFINED__
extern const IID IID_IProviderPropertyConstraintCollection;
typedef struct IProviderPropertyConstraintCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProviderPropertyConstraintCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProviderPropertyConstraintCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProviderPropertyConstraintCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IProviderPropertyConstraintCollection * This, DWORD * pdwCount);
	HRESULT(STDMETHODCALLTYPE * Get) (IProviderPropertyConstraintCollection * This, REFPROPERTYKEY Key, PROPVARIANT * pPropVar, DWORD * pdwPropertyConstraint);
	HRESULT(STDMETHODCALLTYPE * Item) (IProviderPropertyConstraintCollection * This, DWORD dwIndex, PROPERTYKEY * pKey, PROPVARIANT * pPropVar, DWORD * pdwPropertyConstraint);
	HRESULT(STDMETHODCALLTYPE * Next) (IProviderPropertyConstraintCollection * This, PROPERTYKEY * pKey, PROPVARIANT * pPropVar, DWORD * pdwPropertyConstraint);
	HRESULT(STDMETHODCALLTYPE * Skip) (IProviderPropertyConstraintCollection * This);
	HRESULT(STDMETHODCALLTYPE * Reset) (IProviderPropertyConstraintCollection * This);
	END_INTERFACE
}  IProviderPropertyConstraintCollectionVtbl;
interface IProviderPropertyConstraintCollection
{
	CONST_VTBL struct IProviderPropertyConstraintCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProviderPropertyConstraintCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProviderPropertyConstraintCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IProviderPropertyConstraintCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IProviderPropertyConstraintCollection_GetCount(This,pdwCount)( (This)->lpVtbl -> GetCount(This,pdwCount) )
#define IProviderPropertyConstraintCollection_Get(This,Key,pPropVar,pdwPropertyConstraint)( (This)->lpVtbl -> Get(This,Key,pPropVar,pdwPropertyConstraint) )
#define IProviderPropertyConstraintCollection_Item(This,dwIndex,pKey,pPropVar,pdwPropertyConstraint)( (This)->lpVtbl -> Item(This,dwIndex,pKey,pPropVar,pdwPropertyConstraint) )
#define IProviderPropertyConstraintCollection_Next(This,pKey,pPropVar,pdwPropertyConstraint)( (This)->lpVtbl -> Next(This,pKey,pPropVar,pdwPropertyConstraint) )
#define IProviderPropertyConstraintCollection_Skip(This)( (This)->lpVtbl -> Skip(This) )
#define IProviderPropertyConstraintCollection_Reset(This)( (This)->lpVtbl -> Reset(This) )
#endif
#endif
#ifndef __IFunctionDiscoveryServiceProvider_INTERFACE_DEFINED__
#define __IFunctionDiscoveryServiceProvider_INTERFACE_DEFINED__
extern const IID IID_IFunctionDiscoveryServiceProvider;
typedef struct IFunctionDiscoveryServiceProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFunctionDiscoveryServiceProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFunctionDiscoveryServiceProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFunctionDiscoveryServiceProvider * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IFunctionDiscoveryServiceProvider * This, IFunctionInstance * pIFunctionInstance, REFIID riid, void **ppv);
	END_INTERFACE
}  IFunctionDiscoveryServiceProviderVtbl;
interface IFunctionDiscoveryServiceProvider
{
	CONST_VTBL struct IFunctionDiscoveryServiceProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFunctionDiscoveryServiceProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFunctionDiscoveryServiceProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFunctionDiscoveryServiceProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFunctionDiscoveryServiceProvider_Initialize(This,pIFunctionInstance,riid,ppv)( (This)->lpVtbl -> Initialize(This,pIFunctionInstance,riid,ppv) )
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
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
#endif
