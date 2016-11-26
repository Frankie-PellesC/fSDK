/*+@@file@@----------------------------------------------------------------*//*!
 \file		FunctionDiscoveryAPI.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 10 19:23:50 2016
 \date		Modified on Sun Jul 10 19:23:50 2016
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
#ifndef __functiondiscoveryapi_h__
#define __functiondiscoveryapi_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IFunctionDiscoveryNotification_FWD_DEFINED__
#define __IFunctionDiscoveryNotification_FWD_DEFINED__
typedef interface IFunctionDiscoveryNotification IFunctionDiscoveryNotification;
#endif
#ifndef __IFunctionDiscovery_FWD_DEFINED__
#define __IFunctionDiscovery_FWD_DEFINED__
typedef interface IFunctionDiscovery IFunctionDiscovery;
#endif
#ifndef __IFunctionInstance_FWD_DEFINED__
#define __IFunctionInstance_FWD_DEFINED__
typedef interface IFunctionInstance IFunctionInstance;
#endif
#ifndef __IFunctionInstanceCollection_FWD_DEFINED__
#define __IFunctionInstanceCollection_FWD_DEFINED__
typedef interface IFunctionInstanceCollection IFunctionInstanceCollection;
#endif
#ifndef __IPropertyStoreCollection_FWD_DEFINED__
#define __IPropertyStoreCollection_FWD_DEFINED__
typedef interface IPropertyStoreCollection IPropertyStoreCollection;
#endif
#ifndef __IFunctionInstanceQuery_FWD_DEFINED__
#define __IFunctionInstanceQuery_FWD_DEFINED__
typedef interface IFunctionInstanceQuery IFunctionInstanceQuery;
#endif
#ifndef __IFunctionInstanceCollectionQuery_FWD_DEFINED__
#define __IFunctionInstanceCollectionQuery_FWD_DEFINED__
typedef interface IFunctionInstanceCollectionQuery IFunctionInstanceCollectionQuery;
#endif
#ifndef __IFunctionInstanceQuery2_FWD_DEFINED__
#define __IFunctionInstanceQuery2_FWD_DEFINED__
typedef interface IFunctionInstanceQuery2 IFunctionInstanceQuery2;
#endif
#ifndef __IFunctionInstanceCollectionQuery2_FWD_DEFINED__
#define __IFunctionInstanceCollectionQuery2_FWD_DEFINED__
typedef interface IFunctionInstanceCollectionQuery2 IFunctionInstanceCollectionQuery2;
#endif
#ifndef __IFunctionInstanceCollectionQueryCollection_FWD_DEFINED__
#define __IFunctionInstanceCollectionQueryCollection_FWD_DEFINED__
typedef interface IFunctionInstanceCollectionQueryCollection IFunctionInstanceCollectionQueryCollection;
#endif
#ifndef __IFunctionDiscoveryProviderRefresh_FWD_DEFINED__
#define __IFunctionDiscoveryProviderRefresh_FWD_DEFINED__
typedef interface IFunctionDiscoveryProviderRefresh IFunctionDiscoveryProviderRefresh;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <propsys.h>
#pragma once
typedef enum tagPropertyConstraint
{
	QC_EQUALS = 0,
	QC_NOTEQUAL = 1,
	QC_LESSTHAN = 2,
	QC_LESSTHANOREQUAL = 3,
	QC_GREATERTHAN = 4,
	QC_GREATERTHANOREQUAL = 5,
	QC_STARTSWITH = 6,
	QC_EXISTS = 7,
	QC_DOESNOTEXIST = 8,
	QC_CONTAINS = 9
} PropertyConstraint;
#ifndef FD_LONGHORN
#define FD_LONGHORN 1
#endif
#ifndef FDPropertyConstraint
#define FDPropertyConstraint
#endif
#include <FunctionDiscoveryCategories.h>
#include <FunctionDiscoveryError.h>
#include <FunctionDiscoveryKeys.h>
#include <FunctionDiscoveryServiceIDs.h>
#include <FunctionDiscoveryConstraints.h>
typedef DWORDLONG FDQUERYCONTEXT;
typedef enum tagSystemVisibilityFlags
{
	SVF_SYSTEM = 0,
	SVF_USER = 1
} SystemVisibilityFlags;
typedef enum tagQueryUpdateAction
{
	QUA_ADD = 0,
	QUA_REMOVE = 1,
	QUA_CHANGE = 2
} QueryUpdateAction;
typedef enum tagQueryCategoryType
{
	QCT_PROVIDER = 0,
	QCT_LAYERED = 1
} QueryCategoryType;
extern RPC_IF_HANDLE __MIDL_itf_functiondiscoveryapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_functiondiscoveryapi_0000_0000_v0_0_s_ifspec;
#ifndef __IFunctionDiscoveryNotification_INTERFACE_DEFINED__
#define __IFunctionDiscoveryNotification_INTERFACE_DEFINED__
extern const IID IID_IFunctionDiscoveryNotification;
typedef struct IFunctionDiscoveryNotificationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFunctionDiscoveryNotification * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFunctionDiscoveryNotification * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFunctionDiscoveryNotification * This);
	HRESULT(STDMETHODCALLTYPE * OnUpdate) (IFunctionDiscoveryNotification * This, QueryUpdateAction enumQueryUpdateAction, FDQUERYCONTEXT fdqcQueryContext, IFunctionInstance * pIFunctionInstance);
	HRESULT(STDMETHODCALLTYPE * OnError) (IFunctionDiscoveryNotification * This, HRESULT hr, FDQUERYCONTEXT fdqcQueryContext, const WCHAR * pszProvider);
	HRESULT(STDMETHODCALLTYPE * OnEvent) (IFunctionDiscoveryNotification * This, DWORD dwEventID, FDQUERYCONTEXT fdqcQueryContext, const WCHAR * pszProvider);
	END_INTERFACE
}  IFunctionDiscoveryNotificationVtbl;
interface IFunctionDiscoveryNotification
{
	CONST_VTBL struct IFunctionDiscoveryNotificationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFunctionDiscoveryNotification_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFunctionDiscoveryNotification_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFunctionDiscoveryNotification_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFunctionDiscoveryNotification_OnUpdate(This,enumQueryUpdateAction,fdqcQueryContext,pIFunctionInstance)( (This)->lpVtbl -> OnUpdate(This,enumQueryUpdateAction,fdqcQueryContext,pIFunctionInstance) )
#define IFunctionDiscoveryNotification_OnError(This,hr,fdqcQueryContext,pszProvider)( (This)->lpVtbl -> OnError(This,hr,fdqcQueryContext,pszProvider) )
#define IFunctionDiscoveryNotification_OnEvent(This,dwEventID,fdqcQueryContext,pszProvider)( (This)->lpVtbl -> OnEvent(This,dwEventID,fdqcQueryContext,pszProvider) )
#endif
#endif
#ifndef __IFunctionDiscovery_INTERFACE_DEFINED__
#define __IFunctionDiscovery_INTERFACE_DEFINED__
extern const IID IID_IFunctionDiscovery;
typedef struct IFunctionDiscoveryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFunctionDiscovery * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFunctionDiscovery * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFunctionDiscovery * This);
	HRESULT(STDMETHODCALLTYPE * GetInstanceCollection) (IFunctionDiscovery * This, const WCHAR * pszCategory, const WCHAR * pszSubCategory, BOOL fIncludeAllSubCategories, IFunctionInstanceCollection ** ppIFunctionInstanceCollection);
	HRESULT(STDMETHODCALLTYPE * GetInstance) (IFunctionDiscovery * This, const WCHAR * pszFunctionInstanceIdentity, IFunctionInstance ** ppIFunctionInstance);
	HRESULT(STDMETHODCALLTYPE * CreateInstanceCollectionQuery) (IFunctionDiscovery * This, const WCHAR * pszCategory, const WCHAR * pszSubCategory, BOOL fIncludeAllSubCategories, IFunctionDiscoveryNotification * pIFunctionDiscoveryNotification, FDQUERYCONTEXT * pfdqcQueryContext, IFunctionInstanceCollectionQuery ** ppIFunctionInstanceCollectionQuery);
	HRESULT(STDMETHODCALLTYPE * CreateInstanceQuery) (IFunctionDiscovery * This, const WCHAR * pszFunctionInstanceIdentity, IFunctionDiscoveryNotification * pIFunctionDiscoveryNotification, FDQUERYCONTEXT * pfdqcQueryContext, IFunctionInstanceQuery ** ppIFunctionInstanceQuery);
	HRESULT(STDMETHODCALLTYPE * AddInstance) (IFunctionDiscovery * This, SystemVisibilityFlags enumSystemVisibility, const WCHAR * pszCategory, const WCHAR * pszSubCategory, const WCHAR * pszCategoryIdentity, IFunctionInstance ** ppIFunctionInstance);
	HRESULT(STDMETHODCALLTYPE * RemoveInstance) (IFunctionDiscovery * This, SystemVisibilityFlags enumSystemVisibility, const WCHAR * pszCategory, const WCHAR * pszSubCategory, const WCHAR * pszCategoryIdentity);
	END_INTERFACE
}  IFunctionDiscoveryVtbl;
interface IFunctionDiscovery
{
	CONST_VTBL struct IFunctionDiscoveryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFunctionDiscovery_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFunctionDiscovery_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFunctionDiscovery_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFunctionDiscovery_GetInstanceCollection(This,pszCategory,pszSubCategory,fIncludeAllSubCategories,ppIFunctionInstanceCollection)( (This)->lpVtbl -> GetInstanceCollection(This,pszCategory,pszSubCategory,fIncludeAllSubCategories,ppIFunctionInstanceCollection) )
#define IFunctionDiscovery_GetInstance(This,pszFunctionInstanceIdentity,ppIFunctionInstance)( (This)->lpVtbl -> GetInstance(This,pszFunctionInstanceIdentity,ppIFunctionInstance) )
#define IFunctionDiscovery_CreateInstanceCollectionQuery(This,pszCategory,pszSubCategory,fIncludeAllSubCategories,pIFunctionDiscoveryNotification,pfdqcQueryContext,ppIFunctionInstanceCollectionQuery)( (This)->lpVtbl -> CreateInstanceCollectionQuery(This,pszCategory,pszSubCategory,fIncludeAllSubCategories,pIFunctionDiscoveryNotification,pfdqcQueryContext,ppIFunctionInstanceCollectionQuery) )
#define IFunctionDiscovery_CreateInstanceQuery(This,pszFunctionInstanceIdentity,pIFunctionDiscoveryNotification,pfdqcQueryContext,ppIFunctionInstanceQuery)( (This)->lpVtbl -> CreateInstanceQuery(This,pszFunctionInstanceIdentity,pIFunctionDiscoveryNotification,pfdqcQueryContext,ppIFunctionInstanceQuery) )
#define IFunctionDiscovery_AddInstance(This,enumSystemVisibility,pszCategory,pszSubCategory,pszCategoryIdentity,ppIFunctionInstance)( (This)->lpVtbl -> AddInstance(This,enumSystemVisibility,pszCategory,pszSubCategory,pszCategoryIdentity,ppIFunctionInstance) )
#define IFunctionDiscovery_RemoveInstance(This,enumSystemVisibility,pszCategory,pszSubCategory,pszCategoryIdentity)( (This)->lpVtbl -> RemoveInstance(This,enumSystemVisibility,pszCategory,pszSubCategory,pszCategoryIdentity) )
#endif
#endif
#ifndef __IFunctionInstance_INTERFACE_DEFINED__
#define __IFunctionInstance_INTERFACE_DEFINED__
extern const IID IID_IFunctionInstance;
typedef struct IFunctionInstanceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFunctionInstance * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFunctionInstance * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFunctionInstance * This);
	HRESULT(STDMETHODCALLTYPE * QueryService) (IFunctionInstance * This, REFGUID guidService, REFIID riid, void **ppvObject);
	HRESULT(STDMETHODCALLTYPE * GetID) (IFunctionInstance * This, WCHAR ** ppszCoMemIdentity);
	HRESULT(STDMETHODCALLTYPE * GetProviderInstanceID) (IFunctionInstance * This, WCHAR ** ppszCoMemProviderInstanceIdentity);
	HRESULT(STDMETHODCALLTYPE * OpenPropertyStore) (IFunctionInstance * This, DWORD dwStgAccess, IPropertyStore ** ppIPropertyStore);
	HRESULT(STDMETHODCALLTYPE * GetCategory) (IFunctionInstance * This, WCHAR ** ppszCoMemCategory, WCHAR ** ppszCoMemSubCategory);
	END_INTERFACE
}  IFunctionInstanceVtbl;
interface IFunctionInstance
{
	CONST_VTBL struct IFunctionInstanceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFunctionInstance_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFunctionInstance_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFunctionInstance_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFunctionInstance_QueryService(This,guidService,riid,ppvObject)( (This)->lpVtbl -> QueryService(This,guidService,riid,ppvObject) )
#define IFunctionInstance_GetID(This,ppszCoMemIdentity)( (This)->lpVtbl -> GetID(This,ppszCoMemIdentity) )
#define IFunctionInstance_GetProviderInstanceID(This,ppszCoMemProviderInstanceIdentity)( (This)->lpVtbl -> GetProviderInstanceID(This,ppszCoMemProviderInstanceIdentity) )
#define IFunctionInstance_OpenPropertyStore(This,dwStgAccess,ppIPropertyStore)( (This)->lpVtbl -> OpenPropertyStore(This,dwStgAccess,ppIPropertyStore) )
#define IFunctionInstance_GetCategory(This,ppszCoMemCategory,ppszCoMemSubCategory)( (This)->lpVtbl -> GetCategory(This,ppszCoMemCategory,ppszCoMemSubCategory) )
#endif
#endif
#ifndef __IFunctionInstanceCollection_INTERFACE_DEFINED__
#define __IFunctionInstanceCollection_INTERFACE_DEFINED__
extern const IID IID_IFunctionInstanceCollection;
typedef struct IFunctionInstanceCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFunctionInstanceCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFunctionInstanceCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFunctionInstanceCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IFunctionInstanceCollection * This, DWORD * pdwCount);
	HRESULT(STDMETHODCALLTYPE * Get) (IFunctionInstanceCollection * This, const WCHAR * pszInstanceIdentity, DWORD * pdwIndex, IFunctionInstance ** ppIFunctionInstance);
	HRESULT(STDMETHODCALLTYPE * Item) (IFunctionInstanceCollection * This, DWORD dwIndex, IFunctionInstance ** ppIFunctionInstance);
	HRESULT(STDMETHODCALLTYPE * Add) (IFunctionInstanceCollection * This, IFunctionInstance * pIFunctionInstance);
	HRESULT(STDMETHODCALLTYPE * Remove) (IFunctionInstanceCollection * This, DWORD dwIndex, IFunctionInstance ** ppIFunctionInstance);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFunctionInstanceCollection * This, DWORD dwIndex);
	HRESULT(STDMETHODCALLTYPE * DeleteAll) (IFunctionInstanceCollection * This);
	END_INTERFACE
}  IFunctionInstanceCollectionVtbl;
interface IFunctionInstanceCollection
{
	CONST_VTBL struct IFunctionInstanceCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFunctionInstanceCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFunctionInstanceCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFunctionInstanceCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFunctionInstanceCollection_GetCount(This,pdwCount)( (This)->lpVtbl -> GetCount(This,pdwCount) )
#define IFunctionInstanceCollection_Get(This,pszInstanceIdentity,pdwIndex,ppIFunctionInstance)( (This)->lpVtbl -> Get(This,pszInstanceIdentity,pdwIndex,ppIFunctionInstance) )
#define IFunctionInstanceCollection_Item(This,dwIndex,ppIFunctionInstance)( (This)->lpVtbl -> Item(This,dwIndex,ppIFunctionInstance) )
#define IFunctionInstanceCollection_Add(This,pIFunctionInstance)( (This)->lpVtbl -> Add(This,pIFunctionInstance) )
#define IFunctionInstanceCollection_Remove(This,dwIndex,ppIFunctionInstance)( (This)->lpVtbl -> Remove(This,dwIndex,ppIFunctionInstance) )
#define IFunctionInstanceCollection_Delete(This,dwIndex)( (This)->lpVtbl -> Delete(This,dwIndex) )
#define IFunctionInstanceCollection_DeleteAll(This)( (This)->lpVtbl -> DeleteAll(This) )
#endif
#endif
#ifndef __IPropertyStoreCollection_INTERFACE_DEFINED__
#define __IPropertyStoreCollection_INTERFACE_DEFINED__
extern const IID IID_IPropertyStoreCollection;
typedef struct IPropertyStoreCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyStoreCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyStoreCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyStoreCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IPropertyStoreCollection * This, LPDWORD pdwCount);
	HRESULT(STDMETHODCALLTYPE * Get) (IPropertyStoreCollection * This, const WCHAR * pszInstanceIdentity, LPDWORD pdwIndex, IPropertyStore ** ppIPropertyStore);
	HRESULT(STDMETHODCALLTYPE * Item) (IPropertyStoreCollection * This, DWORD dwIndex, IPropertyStore ** ppIPropertyStore);
	HRESULT(STDMETHODCALLTYPE * Add) (IPropertyStoreCollection * This, IPropertyStore * pIPropertyStore);
	HRESULT(STDMETHODCALLTYPE * Remove) (IPropertyStoreCollection * This, DWORD dwIndex, IPropertyStore ** pIPropertyStore);
	HRESULT(STDMETHODCALLTYPE * Delete) (IPropertyStoreCollection * This, DWORD dwIndex);
	HRESULT(STDMETHODCALLTYPE * DeleteAll) (IPropertyStoreCollection * This);
	END_INTERFACE
}  IPropertyStoreCollectionVtbl;
interface IPropertyStoreCollection
{
	CONST_VTBL struct IPropertyStoreCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyStoreCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyStoreCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPropertyStoreCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPropertyStoreCollection_GetCount(This,pdwCount)( (This)->lpVtbl -> GetCount(This,pdwCount) )
#define IPropertyStoreCollection_Get(This,pszInstanceIdentity,pdwIndex,ppIPropertyStore)( (This)->lpVtbl -> Get(This,pszInstanceIdentity,pdwIndex,ppIPropertyStore) )
#define IPropertyStoreCollection_Item(This,dwIndex,ppIPropertyStore)( (This)->lpVtbl -> Item(This,dwIndex,ppIPropertyStore) )
#define IPropertyStoreCollection_Add(This,pIPropertyStore)( (This)->lpVtbl -> Add(This,pIPropertyStore) )
#define IPropertyStoreCollection_Remove(This,dwIndex,pIPropertyStore)( (This)->lpVtbl -> Remove(This,dwIndex,pIPropertyStore) )
#define IPropertyStoreCollection_Delete(This,dwIndex)( (This)->lpVtbl -> Delete(This,dwIndex) )
#define IPropertyStoreCollection_DeleteAll(This)( (This)->lpVtbl -> DeleteAll(This) )
#endif
#endif
#ifndef __IFunctionInstanceQuery_INTERFACE_DEFINED__
#define __IFunctionInstanceQuery_INTERFACE_DEFINED__
extern const IID IID_IFunctionInstanceQuery;
typedef struct IFunctionInstanceQueryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFunctionInstanceQuery * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFunctionInstanceQuery * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFunctionInstanceQuery * This);
	HRESULT(STDMETHODCALLTYPE * Execute) (IFunctionInstanceQuery * This, IFunctionInstance ** ppIFunctionInstance);
	END_INTERFACE
}  IFunctionInstanceQueryVtbl;
interface IFunctionInstanceQuery
{
	CONST_VTBL struct IFunctionInstanceQueryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFunctionInstanceQuery_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFunctionInstanceQuery_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFunctionInstanceQuery_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFunctionInstanceQuery_Execute(This,ppIFunctionInstance)( (This)->lpVtbl -> Execute(This,ppIFunctionInstance) )
#endif
#endif
#ifndef __IFunctionInstanceCollectionQuery_INTERFACE_DEFINED__
#define __IFunctionInstanceCollectionQuery_INTERFACE_DEFINED__
extern const IID IID_IFunctionInstanceCollectionQuery;
typedef struct IFunctionInstanceCollectionQueryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFunctionInstanceCollectionQuery * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFunctionInstanceCollectionQuery * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFunctionInstanceCollectionQuery * This);
	HRESULT(STDMETHODCALLTYPE * AddQueryConstraint) (IFunctionInstanceCollectionQuery * This, const WCHAR * pszConstraintName, const WCHAR * pszConstraintValue);
	HRESULT(STDMETHODCALLTYPE * AddPropertyConstraint) (IFunctionInstanceCollectionQuery * This, REFPROPERTYKEY Key, const PROPVARIANT * pv, PropertyConstraint enumPropertyConstraint);
	HRESULT(STDMETHODCALLTYPE * Execute) (IFunctionInstanceCollectionQuery * This, IFunctionInstanceCollection ** ppIFunctionInstanceCollection);
	END_INTERFACE
}  IFunctionInstanceCollectionQueryVtbl;
interface IFunctionInstanceCollectionQuery
{
	CONST_VTBL struct IFunctionInstanceCollectionQueryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFunctionInstanceCollectionQuery_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFunctionInstanceCollectionQuery_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFunctionInstanceCollectionQuery_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFunctionInstanceCollectionQuery_AddQueryConstraint(This,pszConstraintName,pszConstraintValue)( (This)->lpVtbl -> AddQueryConstraint(This,pszConstraintName,pszConstraintValue) )
#define IFunctionInstanceCollectionQuery_AddPropertyConstraint(This,Key,pv,enumPropertyConstraint)( (This)->lpVtbl -> AddPropertyConstraint(This,Key,pv,enumPropertyConstraint) )
#define IFunctionInstanceCollectionQuery_Execute(This,ppIFunctionInstanceCollection)( (This)->lpVtbl -> Execute(This,ppIFunctionInstanceCollection) )
#endif
#endif
#include <FunctionDiscoveryNotification.h>
extern RPC_IF_HANDLE __MIDL_itf_functiondiscoveryapi_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_functiondiscoveryapi_0000_0011_v0_0_s_ifspec;
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
