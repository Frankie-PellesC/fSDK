/*+@@file@@----------------------------------------------------------------*//*!
 \file		ahadmin.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 16:52:45 2016
 \date		Modified on Sat Jul  2 16:52:45 2016
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
#ifndef __ahadmin_h__
#define __ahadmin_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IAppHostMethodExtension_FWD_DEFINED__
#define __IAppHostMethodExtension_FWD_DEFINED__
typedef interface IAppHostMethodExtension IAppHostMethodExtension;
#endif
#ifndef __IAppHostPropertyExtension_FWD_DEFINED__
#define __IAppHostPropertyExtension_FWD_DEFINED__
typedef interface IAppHostPropertyExtension IAppHostPropertyExtension;
#endif
#ifndef __IAppHostElementExtension_FWD_DEFINED__
#define __IAppHostElementExtension_FWD_DEFINED__
typedef interface IAppHostElementExtension IAppHostElementExtension;
#endif
#ifndef __IAppHostMappingExtension_FWD_DEFINED__
#define __IAppHostMappingExtension_FWD_DEFINED__
typedef interface IAppHostMappingExtension IAppHostMappingExtension;
#endif
#ifndef __IAppHostChildElementCollection_FWD_DEFINED__
#define __IAppHostChildElementCollection_FWD_DEFINED__
typedef interface IAppHostChildElementCollection IAppHostChildElementCollection;
#endif
#ifndef __IAppHostPropertyCollection_FWD_DEFINED__
#define __IAppHostPropertyCollection_FWD_DEFINED__
typedef interface IAppHostPropertyCollection IAppHostPropertyCollection;
#endif
#ifndef __IAppHostConfigLocationCollection_FWD_DEFINED__
#define __IAppHostConfigLocationCollection_FWD_DEFINED__
typedef interface IAppHostConfigLocationCollection IAppHostConfigLocationCollection;
#endif
#ifndef __IAppHostMethodCollection_FWD_DEFINED__
#define __IAppHostMethodCollection_FWD_DEFINED__
typedef interface IAppHostMethodCollection IAppHostMethodCollection;
#endif
#ifndef __IAppHostElementSchemaCollection_FWD_DEFINED__
#define __IAppHostElementSchemaCollection_FWD_DEFINED__
typedef interface IAppHostElementSchemaCollection IAppHostElementSchemaCollection;
#endif
#ifndef __IAppHostPropertySchemaCollection_FWD_DEFINED__
#define __IAppHostPropertySchemaCollection_FWD_DEFINED__
typedef interface IAppHostPropertySchemaCollection IAppHostPropertySchemaCollection;
#endif
#ifndef __IAppHostConstantValueCollection_FWD_DEFINED__
#define __IAppHostConstantValueCollection_FWD_DEFINED__
typedef interface IAppHostConstantValueCollection IAppHostConstantValueCollection;
#endif
#ifndef __IAppHostConstantValue_FWD_DEFINED__
#define __IAppHostConstantValue_FWD_DEFINED__
typedef interface IAppHostConstantValue IAppHostConstantValue;
#endif
#ifndef __IAppHostPropertySchema_FWD_DEFINED__
#define __IAppHostPropertySchema_FWD_DEFINED__
typedef interface IAppHostPropertySchema IAppHostPropertySchema;
#endif
#ifndef __IAppHostCollectionSchema_FWD_DEFINED__
#define __IAppHostCollectionSchema_FWD_DEFINED__
typedef interface IAppHostCollectionSchema IAppHostCollectionSchema;
#endif
#ifndef __IAppHostElementSchema_FWD_DEFINED__
#define __IAppHostElementSchema_FWD_DEFINED__
typedef interface IAppHostElementSchema IAppHostElementSchema;
#endif
#ifndef __IAppHostMethodSchema_FWD_DEFINED__
#define __IAppHostMethodSchema_FWD_DEFINED__
typedef interface IAppHostMethodSchema IAppHostMethodSchema;
#endif
#ifndef __IAppHostMethodInstance_FWD_DEFINED__
#define __IAppHostMethodInstance_FWD_DEFINED__
typedef interface IAppHostMethodInstance IAppHostMethodInstance;
#endif
#ifndef __IAppHostMethod_FWD_DEFINED__
#define __IAppHostMethod_FWD_DEFINED__
typedef interface IAppHostMethod IAppHostMethod;
#endif
#ifndef __IAppHostConfigException_FWD_DEFINED__
#define __IAppHostConfigException_FWD_DEFINED__
typedef interface IAppHostConfigException IAppHostConfigException;
#endif
#ifndef __IAppHostPropertyException_FWD_DEFINED__
#define __IAppHostPropertyException_FWD_DEFINED__
typedef interface IAppHostPropertyException IAppHostPropertyException;
#endif
#ifndef __IAppHostElementCollection_FWD_DEFINED__
#define __IAppHostElementCollection_FWD_DEFINED__
typedef interface IAppHostElementCollection IAppHostElementCollection;
#endif
#ifndef __IAppHostElement_FWD_DEFINED__
#define __IAppHostElement_FWD_DEFINED__
typedef interface IAppHostElement IAppHostElement;
#endif
#ifndef __IAppHostProperty_FWD_DEFINED__
#define __IAppHostProperty_FWD_DEFINED__
typedef interface IAppHostProperty IAppHostProperty;
#endif
#ifndef __IAppHostConfigLocation_FWD_DEFINED__
#define __IAppHostConfigLocation_FWD_DEFINED__
typedef interface IAppHostConfigLocation IAppHostConfigLocation;
#endif
#ifndef __IAppHostSectionDefinition_FWD_DEFINED__
#define __IAppHostSectionDefinition_FWD_DEFINED__
typedef interface IAppHostSectionDefinition IAppHostSectionDefinition;
#endif
#ifndef __IAppHostSectionDefinitionCollection_FWD_DEFINED__
#define __IAppHostSectionDefinitionCollection_FWD_DEFINED__
typedef interface IAppHostSectionDefinitionCollection IAppHostSectionDefinitionCollection;
#endif
#ifndef __IAppHostSectionGroup_FWD_DEFINED__
#define __IAppHostSectionGroup_FWD_DEFINED__
typedef interface IAppHostSectionGroup IAppHostSectionGroup;
#endif
#ifndef __IAppHostConfigFile_FWD_DEFINED__
#define __IAppHostConfigFile_FWD_DEFINED__
typedef interface IAppHostConfigFile IAppHostConfigFile;
#endif
#ifndef __IAppHostPathMapper_FWD_DEFINED__
#define __IAppHostPathMapper_FWD_DEFINED__
typedef interface IAppHostPathMapper IAppHostPathMapper;
#endif
#ifndef __IAppHostPathMapper2_FWD_DEFINED__
#define __IAppHostPathMapper2_FWD_DEFINED__
typedef interface IAppHostPathMapper2 IAppHostPathMapper2;
#endif
#ifndef __IAppHostChangeHandler_FWD_DEFINED__
#define __IAppHostChangeHandler_FWD_DEFINED__
typedef interface IAppHostChangeHandler IAppHostChangeHandler;
#endif
#ifndef __IAppHostAdminManager_FWD_DEFINED__
#define __IAppHostAdminManager_FWD_DEFINED__
typedef interface IAppHostAdminManager IAppHostAdminManager;
#endif
#ifndef __IAppHostWritableAdminManager_FWD_DEFINED__
#define __IAppHostWritableAdminManager_FWD_DEFINED__
typedef interface IAppHostWritableAdminManager IAppHostWritableAdminManager;
#endif
#ifndef __IAppHostConfigManager_FWD_DEFINED__
#define __IAppHostConfigManager_FWD_DEFINED__
typedef interface IAppHostConfigManager IAppHostConfigManager;
#endif
#ifndef __AppHostAdminManager_FWD_DEFINED__
#define __AppHostAdminManager_FWD_DEFINED__
typedef struct AppHostAdminManager AppHostAdminManager;
#endif
#ifndef __AppHostWritableAdminManager_FWD_DEFINED__
#define __AppHostWritableAdminManager_FWD_DEFINED__
typedef struct AppHostWritableAdminManager AppHostWritableAdminManager;
#endif
#ifndef __IAppHostConfigException_FWD_DEFINED__
#define __IAppHostConfigException_FWD_DEFINED__
typedef interface IAppHostConfigException IAppHostConfigException;
#endif
#ifndef __IAppHostPropertyException_FWD_DEFINED__
#define __IAppHostPropertyException_FWD_DEFINED__
typedef interface IAppHostPropertyException IAppHostPropertyException;
#endif
#ifndef __IAppHostMappingExtension_FWD_DEFINED__
#define __IAppHostMappingExtension_FWD_DEFINED__
typedef interface IAppHostMappingExtension IAppHostMappingExtension;
#endif
#ifndef __IAppHostPathMapper_FWD_DEFINED__
#define __IAppHostPathMapper_FWD_DEFINED__
typedef interface IAppHostPathMapper IAppHostPathMapper;
#endif
#ifndef __IAppHostChangeHandler_FWD_DEFINED__
#define __IAppHostChangeHandler_FWD_DEFINED__
typedef interface IAppHostChangeHandler IAppHostChangeHandler;
#endif
#ifndef __IAppHostPropertyExtension_FWD_DEFINED__
#define __IAppHostPropertyExtension_FWD_DEFINED__
typedef interface IAppHostPropertyExtension IAppHostPropertyExtension;
#endif
#ifndef __IAppHostElementExtension_FWD_DEFINED__
#define __IAppHostElementExtension_FWD_DEFINED__
typedef interface IAppHostElementExtension IAppHostElementExtension;
#endif
#ifndef __IAppHostMethodExtension_FWD_DEFINED__
#define __IAppHostMethodExtension_FWD_DEFINED__
typedef interface IAppHostMethodExtension IAppHostMethodExtension;
#endif
#ifndef __IAppHostPathMapper2_FWD_DEFINED__
#define __IAppHostPathMapper2_FWD_DEFINED__
typedef interface IAppHostPathMapper2 IAppHostPathMapper2;
#endif
#include <unknwn.h>
#include <oaidl.h>
extern RPC_IF_HANDLE __MIDL_itf_ahadmin_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ahadmin_0000_0000_v0_0_s_ifspec;
#ifndef __IAppHostMethodExtension_INTERFACE_DEFINED__
#define __IAppHostMethodExtension_INTERFACE_DEFINED__
extern const IID IID_IAppHostMethodExtension;
typedef struct IAppHostMethodExtensionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostMethodExtension * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostMethodExtension * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostMethodExtension * This);
	HRESULT(STDMETHODCALLTYPE * ProvideMethod) (IAppHostMethodExtension * This, IAppHostMethod * pMethod, IAppHostMethodInstance * pMethodInstance, IAppHostElement * pElement);
	END_INTERFACE
}  IAppHostMethodExtensionVtbl;
interface IAppHostMethodExtension
{
	CONST_VTBL struct IAppHostMethodExtensionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostMethodExtension_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostMethodExtension_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostMethodExtension_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostMethodExtension_ProvideMethod(This,pMethod,pMethodInstance,pElement)( (This)->lpVtbl -> ProvideMethod(This,pMethod,pMethodInstance,pElement) )
#endif
#endif
#ifndef __IAppHostPropertyExtension_INTERFACE_DEFINED__
#define __IAppHostPropertyExtension_INTERFACE_DEFINED__
extern const IID IID_IAppHostPropertyExtension;
typedef struct IAppHostPropertyExtensionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostPropertyExtension * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostPropertyExtension * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostPropertyExtension * This);
	HRESULT(STDMETHODCALLTYPE * ProvideGetProperty) (IAppHostPropertyExtension * This, IAppHostElement * pElement, IAppHostProperty * pProperty);
	END_INTERFACE
}  IAppHostPropertyExtensionVtbl;
interface IAppHostPropertyExtension
{
	CONST_VTBL struct IAppHostPropertyExtensionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostPropertyExtension_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostPropertyExtension_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostPropertyExtension_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostPropertyExtension_ProvideGetProperty(This,pElement,pProperty)( (This)->lpVtbl -> ProvideGetProperty(This,pElement,pProperty) )
#endif
#endif
#ifndef __IAppHostElementExtension_INTERFACE_DEFINED__
#define __IAppHostElementExtension_INTERFACE_DEFINED__
extern const IID IID_IAppHostElementExtension;
typedef struct IAppHostElementExtensionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostElementExtension * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostElementExtension * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostElementExtension * This);
	HRESULT(STDMETHODCALLTYPE * ProvideElement) (IAppHostElementExtension * This, IAppHostElement * pNewElement);
	END_INTERFACE
}  IAppHostElementExtensionVtbl;
interface IAppHostElementExtension
{
	CONST_VTBL struct IAppHostElementExtensionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostElementExtension_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostElementExtension_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostElementExtension_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostElementExtension_ProvideElement(This,pNewElement)( (This)->lpVtbl -> ProvideElement(This,pNewElement) )
#endif
#endif
#ifndef __IAppHostMappingExtension_INTERFACE_DEFINED__
#define __IAppHostMappingExtension_INTERFACE_DEFINED__
extern const IID IID_IAppHostMappingExtension;
typedef struct IAppHostMappingExtensionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostMappingExtension * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostMappingExtension * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostMappingExtension * This);
	HRESULT(STDMETHODCALLTYPE * GetSiteNameFromSiteId) (IAppHostMappingExtension * This, DWORD dwSiteId, BSTR * pbstrSiteName);
	HRESULT(STDMETHODCALLTYPE * GetSiteIdFromSiteName) (IAppHostMappingExtension * This, BSTR bstrSiteName, DWORD * pdwSiteId);
	HRESULT(STDMETHODCALLTYPE * GetSiteElementFromSiteId) (IAppHostMappingExtension * This, DWORD dwSiteId, IAppHostElement ** ppSiteElement);
	HRESULT(STDMETHODCALLTYPE * MapPath) (IAppHostMappingExtension * This, BSTR bstrSiteName, BSTR bstrVirtualPath, BSTR * pbstrPhysicalPath, IAppHostElement ** ppVirtualDirectoryElement, IAppHostElement ** ppApplicationElement);
	END_INTERFACE
}  IAppHostMappingExtensionVtbl;
interface IAppHostMappingExtension
{
	CONST_VTBL struct IAppHostMappingExtensionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostMappingExtension_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostMappingExtension_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostMappingExtension_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostMappingExtension_GetSiteNameFromSiteId(This,dwSiteId,pbstrSiteName)( (This)->lpVtbl -> GetSiteNameFromSiteId(This,dwSiteId,pbstrSiteName) )
#define IAppHostMappingExtension_GetSiteIdFromSiteName(This,bstrSiteName,pdwSiteId)( (This)->lpVtbl -> GetSiteIdFromSiteName(This,bstrSiteName,pdwSiteId) )
#define IAppHostMappingExtension_GetSiteElementFromSiteId(This,dwSiteId,ppSiteElement)( (This)->lpVtbl -> GetSiteElementFromSiteId(This,dwSiteId,ppSiteElement) )
#define IAppHostMappingExtension_MapPath(This,bstrSiteName,bstrVirtualPath,pbstrPhysicalPath,ppVirtualDirectoryElement,ppApplicationElement)( (This)->lpVtbl -> MapPath(This,bstrSiteName,bstrVirtualPath,pbstrPhysicalPath,ppVirtualDirectoryElement,ppApplicationElement) )
#endif
#endif
#ifndef __IAppHostChildElementCollection_INTERFACE_DEFINED__
#define __IAppHostChildElementCollection_INTERFACE_DEFINED__
extern const IID IID_IAppHostChildElementCollection;
typedef struct IAppHostChildElementCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostChildElementCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostChildElementCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostChildElementCollection * This);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAppHostChildElementCollection * This, DWORD * pcCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAppHostChildElementCollection * This, VARIANT cIndex, IAppHostElement ** ppElement);
	END_INTERFACE
}  IAppHostChildElementCollectionVtbl;
interface IAppHostChildElementCollection
{
	CONST_VTBL struct IAppHostChildElementCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostChildElementCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostChildElementCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostChildElementCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostChildElementCollection_get_Count(This,pcCount)( (This)->lpVtbl -> get_Count(This,pcCount) )
#define IAppHostChildElementCollection_get_Item(This,cIndex,ppElement)( (This)->lpVtbl -> get_Item(This,cIndex,ppElement) )
#endif
#endif
#ifndef __IAppHostPropertyCollection_INTERFACE_DEFINED__
#define __IAppHostPropertyCollection_INTERFACE_DEFINED__
extern const IID IID_IAppHostPropertyCollection;
typedef struct IAppHostPropertyCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostPropertyCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostPropertyCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostPropertyCollection * This);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAppHostPropertyCollection * This, DWORD * pcCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAppHostPropertyCollection * This, VARIANT cIndex, IAppHostProperty ** ppProperty);
	END_INTERFACE
}  IAppHostPropertyCollectionVtbl;
interface IAppHostPropertyCollection
{
	CONST_VTBL struct IAppHostPropertyCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostPropertyCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostPropertyCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostPropertyCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostPropertyCollection_get_Count(This,pcCount)( (This)->lpVtbl -> get_Count(This,pcCount) )
#define IAppHostPropertyCollection_get_Item(This,cIndex,ppProperty)( (This)->lpVtbl -> get_Item(This,cIndex,ppProperty) )
#endif
#endif
#ifndef __IAppHostConfigLocationCollection_INTERFACE_DEFINED__
#define __IAppHostConfigLocationCollection_INTERFACE_DEFINED__
extern const IID IID_IAppHostConfigLocationCollection;
typedef struct IAppHostConfigLocationCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostConfigLocationCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostConfigLocationCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostConfigLocationCollection * This);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAppHostConfigLocationCollection * This, DWORD * pcCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAppHostConfigLocationCollection * This, VARIANT varIndex, IAppHostConfigLocation ** ppLocation);
	HRESULT(STDMETHODCALLTYPE * AddLocation) (IAppHostConfigLocationCollection * This, BSTR bstrLocationPath, IAppHostConfigLocation ** ppNewLocation);
	HRESULT(STDMETHODCALLTYPE * DeleteLocation) (IAppHostConfigLocationCollection * This, VARIANT cIndex);
	HRESULT(STDMETHODCALLTYPE * RenameLocation) (IAppHostConfigLocationCollection * This, VARIANT varIndex, BSTR bstrLocationPath);
	END_INTERFACE
}  IAppHostConfigLocationCollectionVtbl;
interface IAppHostConfigLocationCollection
{
	CONST_VTBL struct IAppHostConfigLocationCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostConfigLocationCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostConfigLocationCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostConfigLocationCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostConfigLocationCollection_get_Count(This,pcCount)( (This)->lpVtbl -> get_Count(This,pcCount) )
#define IAppHostConfigLocationCollection_get_Item(This,varIndex,ppLocation)( (This)->lpVtbl -> get_Item(This,varIndex,ppLocation) )
#define IAppHostConfigLocationCollection_AddLocation(This,bstrLocationPath,ppNewLocation)( (This)->lpVtbl -> AddLocation(This,bstrLocationPath,ppNewLocation) )
#define IAppHostConfigLocationCollection_DeleteLocation(This,cIndex)( (This)->lpVtbl -> DeleteLocation(This,cIndex) )
#define IAppHostConfigLocationCollection_RenameLocation(This,varIndex,bstrLocationPath)( (This)->lpVtbl -> RenameLocation(This,varIndex,bstrLocationPath) )
#endif
#endif
#ifndef __IAppHostMethodCollection_INTERFACE_DEFINED__
#define __IAppHostMethodCollection_INTERFACE_DEFINED__
extern const IID IID_IAppHostMethodCollection;
typedef struct IAppHostMethodCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostMethodCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostMethodCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostMethodCollection * This);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAppHostMethodCollection * This, DWORD * pcCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAppHostMethodCollection * This, VARIANT cIndex, IAppHostMethod ** ppMethod);
	END_INTERFACE
}  IAppHostMethodCollectionVtbl;
interface IAppHostMethodCollection
{
	CONST_VTBL struct IAppHostMethodCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostMethodCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostMethodCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostMethodCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostMethodCollection_get_Count(This,pcCount)( (This)->lpVtbl -> get_Count(This,pcCount) )
#define IAppHostMethodCollection_get_Item(This,cIndex,ppMethod)( (This)->lpVtbl -> get_Item(This,cIndex,ppMethod) )
#endif
#endif
#ifndef __IAppHostElementSchemaCollection_INTERFACE_DEFINED__
#define __IAppHostElementSchemaCollection_INTERFACE_DEFINED__
extern const IID IID_IAppHostElementSchemaCollection;
typedef struct IAppHostElementSchemaCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostElementSchemaCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostElementSchemaCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostElementSchemaCollection * This);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAppHostElementSchemaCollection * This, DWORD * pcCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAppHostElementSchemaCollection * This, VARIANT cIndex, IAppHostElementSchema ** ppElementSchema);
	END_INTERFACE
}  IAppHostElementSchemaCollectionVtbl;
interface IAppHostElementSchemaCollection
{
	CONST_VTBL struct IAppHostElementSchemaCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostElementSchemaCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostElementSchemaCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostElementSchemaCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostElementSchemaCollection_get_Count(This,pcCount)( (This)->lpVtbl -> get_Count(This,pcCount) )
#define IAppHostElementSchemaCollection_get_Item(This,cIndex,ppElementSchema)( (This)->lpVtbl -> get_Item(This,cIndex,ppElementSchema) )
#endif
#endif
#ifndef __IAppHostPropertySchemaCollection_INTERFACE_DEFINED__
#define __IAppHostPropertySchemaCollection_INTERFACE_DEFINED__
extern const IID IID_IAppHostPropertySchemaCollection;
typedef struct IAppHostPropertySchemaCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostPropertySchemaCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostPropertySchemaCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostPropertySchemaCollection * This);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAppHostPropertySchemaCollection * This, DWORD * pcCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAppHostPropertySchemaCollection * This, VARIANT cIndex, IAppHostPropertySchema ** ppPropertySchema);
	END_INTERFACE
}  IAppHostPropertySchemaCollectionVtbl;
interface IAppHostPropertySchemaCollection
{
	CONST_VTBL struct IAppHostPropertySchemaCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostPropertySchemaCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostPropertySchemaCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostPropertySchemaCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostPropertySchemaCollection_get_Count(This,pcCount)( (This)->lpVtbl -> get_Count(This,pcCount) )
#define IAppHostPropertySchemaCollection_get_Item(This,cIndex,ppPropertySchema)( (This)->lpVtbl -> get_Item(This,cIndex,ppPropertySchema) )
#endif
#endif
#ifndef __IAppHostConstantValueCollection_INTERFACE_DEFINED__
#define __IAppHostConstantValueCollection_INTERFACE_DEFINED__
extern const IID IID_IAppHostConstantValueCollection;
typedef struct IAppHostConstantValueCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostConstantValueCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostConstantValueCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostConstantValueCollection * This);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAppHostConstantValueCollection * This, DWORD * pcCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAppHostConstantValueCollection * This, VARIANT cIndex, IAppHostConstantValue ** ppConstantValue);
	END_INTERFACE
}  IAppHostConstantValueCollectionVtbl;
interface IAppHostConstantValueCollection
{
	CONST_VTBL struct IAppHostConstantValueCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostConstantValueCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostConstantValueCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostConstantValueCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostConstantValueCollection_get_Count(This,pcCount)( (This)->lpVtbl -> get_Count(This,pcCount) )
#define IAppHostConstantValueCollection_get_Item(This,cIndex,ppConstantValue)( (This)->lpVtbl -> get_Item(This,cIndex,ppConstantValue) )
#endif
#endif
#ifndef __IAppHostConstantValue_INTERFACE_DEFINED__
#define __IAppHostConstantValue_INTERFACE_DEFINED__
extern const IID IID_IAppHostConstantValue;
typedef struct IAppHostConstantValueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostConstantValue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostConstantValue * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostConstantValue * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAppHostConstantValue * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IAppHostConstantValue * This, DWORD * pdwValue);
	END_INTERFACE
}  IAppHostConstantValueVtbl;
interface IAppHostConstantValue
{
	CONST_VTBL struct IAppHostConstantValueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostConstantValue_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostConstantValue_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostConstantValue_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostConstantValue_get_Name(This,pbstrName)( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAppHostConstantValue_get_Value(This,pdwValue)( (This)->lpVtbl -> get_Value(This,pdwValue) )
#endif
#endif
#ifndef __IAppHostPropertySchema_INTERFACE_DEFINED__
#define __IAppHostPropertySchema_INTERFACE_DEFINED__
extern const IID IID_IAppHostPropertySchema;
typedef struct IAppHostPropertySchemaVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostPropertySchema * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostPropertySchema * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostPropertySchema * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAppHostPropertySchema * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IAppHostPropertySchema * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * get_DefaultValue) (IAppHostPropertySchema * This, VARIANT * pDefaultValue);
	HRESULT(STDMETHODCALLTYPE * get_IsRequired) (IAppHostPropertySchema * This, VARIANT_BOOL * pfIsRequired);
	HRESULT(STDMETHODCALLTYPE * get_IsUniqueKey) (IAppHostPropertySchema * This, VARIANT_BOOL * pfIsUniqueKey);
	HRESULT(STDMETHODCALLTYPE * get_IsCombinedKey) (IAppHostPropertySchema * This, VARIANT_BOOL * pfIsCombinedKey);
	HRESULT(STDMETHODCALLTYPE * get_IsExpanded) (IAppHostPropertySchema * This, VARIANT_BOOL * pfIsExpanded);
	HRESULT(STDMETHODCALLTYPE * get_ValidationType) (IAppHostPropertySchema * This, BSTR * pbstrValidationType);
	HRESULT(STDMETHODCALLTYPE * get_ValidationParameter) (IAppHostPropertySchema * This, BSTR * pbstrValidationParameter);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IAppHostPropertySchema * This, BSTR bstrMetadataType, VARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * get_IsCaseSensitive) (IAppHostPropertySchema * This, VARIANT_BOOL * pfIsCaseSensitive);
	HRESULT(STDMETHODCALLTYPE * get_PossibleValues) (IAppHostPropertySchema * This, IAppHostConstantValueCollection ** ppValues);
	HRESULT(STDMETHODCALLTYPE * get_DoesAllowInfinite) (IAppHostPropertySchema * This, VARIANT_BOOL * pfAllowInfinite);
	HRESULT(STDMETHODCALLTYPE * get_IsEncrypted) (IAppHostPropertySchema * This, VARIANT_BOOL * pfIsEncrypted);
	HRESULT(STDMETHODCALLTYPE * get_TimeSpanFormat) (IAppHostPropertySchema * This, BSTR * pbstrTimeSpanFormat);
	END_INTERFACE
}  IAppHostPropertySchemaVtbl;
interface IAppHostPropertySchema
{
	CONST_VTBL struct IAppHostPropertySchemaVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostPropertySchema_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostPropertySchema_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostPropertySchema_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostPropertySchema_get_Name(This,pbstrName)( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAppHostPropertySchema_get_Type(This,pbstrType)( (This)->lpVtbl -> get_Type(This,pbstrType) )
#define IAppHostPropertySchema_get_DefaultValue(This,pDefaultValue)( (This)->lpVtbl -> get_DefaultValue(This,pDefaultValue) )
#define IAppHostPropertySchema_get_IsRequired(This,pfIsRequired)( (This)->lpVtbl -> get_IsRequired(This,pfIsRequired) )
#define IAppHostPropertySchema_get_IsUniqueKey(This,pfIsUniqueKey)( (This)->lpVtbl -> get_IsUniqueKey(This,pfIsUniqueKey) )
#define IAppHostPropertySchema_get_IsCombinedKey(This,pfIsCombinedKey)( (This)->lpVtbl -> get_IsCombinedKey(This,pfIsCombinedKey) )
#define IAppHostPropertySchema_get_IsExpanded(This,pfIsExpanded)( (This)->lpVtbl -> get_IsExpanded(This,pfIsExpanded) )
#define IAppHostPropertySchema_get_ValidationType(This,pbstrValidationType)( (This)->lpVtbl -> get_ValidationType(This,pbstrValidationType) )
#define IAppHostPropertySchema_get_ValidationParameter(This,pbstrValidationParameter)( (This)->lpVtbl -> get_ValidationParameter(This,pbstrValidationParameter) )
#define IAppHostPropertySchema_GetMetadata(This,bstrMetadataType,pValue)( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
#define IAppHostPropertySchema_get_IsCaseSensitive(This,pfIsCaseSensitive)( (This)->lpVtbl -> get_IsCaseSensitive(This,pfIsCaseSensitive) )
#define IAppHostPropertySchema_get_PossibleValues(This,ppValues)( (This)->lpVtbl -> get_PossibleValues(This,ppValues) )
#define IAppHostPropertySchema_get_DoesAllowInfinite(This,pfAllowInfinite)( (This)->lpVtbl -> get_DoesAllowInfinite(This,pfAllowInfinite) )
#define IAppHostPropertySchema_get_IsEncrypted(This,pfIsEncrypted)( (This)->lpVtbl -> get_IsEncrypted(This,pfIsEncrypted) )
#define IAppHostPropertySchema_get_TimeSpanFormat(This,pbstrTimeSpanFormat)( (This)->lpVtbl -> get_TimeSpanFormat(This,pbstrTimeSpanFormat) )
#endif
#endif
#ifndef __IAppHostCollectionSchema_INTERFACE_DEFINED__
#define __IAppHostCollectionSchema_INTERFACE_DEFINED__
extern const IID IID_IAppHostCollectionSchema;
typedef struct IAppHostCollectionSchemaVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostCollectionSchema * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostCollectionSchema * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostCollectionSchema * This);
	HRESULT(STDMETHODCALLTYPE * get_AddElementNames) (IAppHostCollectionSchema * This, BSTR * pbstrElementName);
	HRESULT(STDMETHODCALLTYPE * GetAddElementSchema) (IAppHostCollectionSchema * This, BSTR bstrElementName, IAppHostElementSchema ** ppSchema);
	HRESULT(STDMETHODCALLTYPE * get_RemoveElementSchema) (IAppHostCollectionSchema * This, IAppHostElementSchema ** ppSchema);
	HRESULT(STDMETHODCALLTYPE * get_ClearElementSchema) (IAppHostCollectionSchema * This, IAppHostElementSchema ** ppSchema);
	HRESULT(STDMETHODCALLTYPE * get_IsMergeAppend) (IAppHostCollectionSchema * This, VARIANT_BOOL * pfIsMergeAppend);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IAppHostCollectionSchema * This, BSTR bstrMetadataType, VARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * get_DoesAllowDuplicates) (IAppHostCollectionSchema * This, VARIANT_BOOL * pfAllowDuplicates);
	END_INTERFACE
}  IAppHostCollectionSchemaVtbl;
interface IAppHostCollectionSchema
{
	CONST_VTBL struct IAppHostCollectionSchemaVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostCollectionSchema_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostCollectionSchema_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostCollectionSchema_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostCollectionSchema_get_AddElementNames(This,pbstrElementName)( (This)->lpVtbl -> get_AddElementNames(This,pbstrElementName) )
#define IAppHostCollectionSchema_GetAddElementSchema(This,bstrElementName,ppSchema)( (This)->lpVtbl -> GetAddElementSchema(This,bstrElementName,ppSchema) )
#define IAppHostCollectionSchema_get_RemoveElementSchema(This,ppSchema)( (This)->lpVtbl -> get_RemoveElementSchema(This,ppSchema) )
#define IAppHostCollectionSchema_get_ClearElementSchema(This,ppSchema)( (This)->lpVtbl -> get_ClearElementSchema(This,ppSchema) )
#define IAppHostCollectionSchema_get_IsMergeAppend(This,pfIsMergeAppend)( (This)->lpVtbl -> get_IsMergeAppend(This,pfIsMergeAppend) )
#define IAppHostCollectionSchema_GetMetadata(This,bstrMetadataType,pValue)( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
#define IAppHostCollectionSchema_get_DoesAllowDuplicates(This,pfAllowDuplicates)( (This)->lpVtbl -> get_DoesAllowDuplicates(This,pfAllowDuplicates) )
#endif
#endif
#ifndef __IAppHostElementSchema_INTERFACE_DEFINED__
#define __IAppHostElementSchema_INTERFACE_DEFINED__
extern const IID IID_IAppHostElementSchema;
typedef struct IAppHostElementSchemaVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostElementSchema * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostElementSchema * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostElementSchema * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAppHostElementSchema * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_DoesAllowUnschematizedProperties) (IAppHostElementSchema * This, VARIANT_BOOL * pfAllowUnschematized);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IAppHostElementSchema * This, BSTR bstrMetadataType, VARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * get_CollectionSchema) (IAppHostElementSchema * This, IAppHostCollectionSchema ** ppCollectionSchema);
	HRESULT(STDMETHODCALLTYPE * get_ChildElementSchemas) (IAppHostElementSchema * This, IAppHostElementSchemaCollection ** ppChildSchemas);
	HRESULT(STDMETHODCALLTYPE * get_PropertySchemas) (IAppHostElementSchema * This, IAppHostPropertySchemaCollection ** ppPropertySchemas);
	HRESULT(STDMETHODCALLTYPE * get_IsCollectionDefault) (IAppHostElementSchema * This, VARIANT_BOOL * pfIsCollectionDefault);
	END_INTERFACE
}  IAppHostElementSchemaVtbl;
interface IAppHostElementSchema
{
	CONST_VTBL struct IAppHostElementSchemaVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostElementSchema_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostElementSchema_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostElementSchema_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostElementSchema_get_Name(This,pbstrName)( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAppHostElementSchema_get_DoesAllowUnschematizedProperties(This,pfAllowUnschematized)( (This)->lpVtbl -> get_DoesAllowUnschematizedProperties(This,pfAllowUnschematized) )
#define IAppHostElementSchema_GetMetadata(This,bstrMetadataType,pValue)( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
#define IAppHostElementSchema_get_CollectionSchema(This,ppCollectionSchema)( (This)->lpVtbl -> get_CollectionSchema(This,ppCollectionSchema) )
#define IAppHostElementSchema_get_ChildElementSchemas(This,ppChildSchemas)( (This)->lpVtbl -> get_ChildElementSchemas(This,ppChildSchemas) )
#define IAppHostElementSchema_get_PropertySchemas(This,ppPropertySchemas)( (This)->lpVtbl -> get_PropertySchemas(This,ppPropertySchemas) )
#define IAppHostElementSchema_get_IsCollectionDefault(This,pfIsCollectionDefault)( (This)->lpVtbl -> get_IsCollectionDefault(This,pfIsCollectionDefault) )
#endif
#endif
#ifndef __IAppHostMethodSchema_INTERFACE_DEFINED__
#define __IAppHostMethodSchema_INTERFACE_DEFINED__
extern const IID IID_IAppHostMethodSchema;
typedef struct IAppHostMethodSchemaVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostMethodSchema * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostMethodSchema * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostMethodSchema * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAppHostMethodSchema * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_InputSchema) (IAppHostMethodSchema * This, IAppHostElementSchema ** ppInputSchema);
	HRESULT(STDMETHODCALLTYPE * get_OutputSchema) (IAppHostMethodSchema * This, IAppHostElementSchema ** ppOutputSchema);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IAppHostMethodSchema * This, BSTR bstrMetadataType, VARIANT * pValue);
	END_INTERFACE
}  IAppHostMethodSchemaVtbl;
interface IAppHostMethodSchema
{
	CONST_VTBL struct IAppHostMethodSchemaVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostMethodSchema_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostMethodSchema_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostMethodSchema_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostMethodSchema_get_Name(This,pbstrName)( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAppHostMethodSchema_get_InputSchema(This,ppInputSchema)( (This)->lpVtbl -> get_InputSchema(This,ppInputSchema) )
#define IAppHostMethodSchema_get_OutputSchema(This,ppOutputSchema)( (This)->lpVtbl -> get_OutputSchema(This,ppOutputSchema) )
#define IAppHostMethodSchema_GetMetadata(This,bstrMetadataType,pValue)( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
#endif
#endif
#ifndef __IAppHostMethodInstance_INTERFACE_DEFINED__
#define __IAppHostMethodInstance_INTERFACE_DEFINED__
extern const IID IID_IAppHostMethodInstance;
typedef struct IAppHostMethodInstanceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostMethodInstance * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostMethodInstance * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostMethodInstance * This);
	HRESULT(STDMETHODCALLTYPE * get_Input) (IAppHostMethodInstance * This, IAppHostElement ** ppInputElement);
	HRESULT(STDMETHODCALLTYPE * get_Output) (IAppHostMethodInstance * This, IAppHostElement ** ppOutputElement);
	HRESULT(STDMETHODCALLTYPE * Execute) (IAppHostMethodInstance * This);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IAppHostMethodInstance * This, BSTR bstrMetadataType, VARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * SetMetadata) (IAppHostMethodInstance * This, BSTR bstrMetadataType, VARIANT value);
	END_INTERFACE
}  IAppHostMethodInstanceVtbl;
interface IAppHostMethodInstance
{
	CONST_VTBL struct IAppHostMethodInstanceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostMethodInstance_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostMethodInstance_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostMethodInstance_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostMethodInstance_get_Input(This,ppInputElement)( (This)->lpVtbl -> get_Input(This,ppInputElement) )
#define IAppHostMethodInstance_get_Output(This,ppOutputElement)( (This)->lpVtbl -> get_Output(This,ppOutputElement) )
#define IAppHostMethodInstance_Execute(This)( (This)->lpVtbl -> Execute(This) )
#define IAppHostMethodInstance_GetMetadata(This,bstrMetadataType,pValue)( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
#define IAppHostMethodInstance_SetMetadata(This,bstrMetadataType,value)( (This)->lpVtbl -> SetMetadata(This,bstrMetadataType,value) )
#endif
#endif
#ifndef __IAppHostMethod_INTERFACE_DEFINED__
#define __IAppHostMethod_INTERFACE_DEFINED__
extern const IID IID_IAppHostMethod;
typedef struct IAppHostMethodVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostMethod * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostMethod * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostMethod * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAppHostMethod * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_Schema) (IAppHostMethod * This, IAppHostMethodSchema ** ppMethodSchema);
	HRESULT(STDMETHODCALLTYPE * CreateInstance) (IAppHostMethod * This, IAppHostMethodInstance ** ppMethodInstance);
	END_INTERFACE
}  IAppHostMethodVtbl;
interface IAppHostMethod
{
	CONST_VTBL struct IAppHostMethodVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostMethod_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostMethod_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostMethod_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostMethod_get_Name(This,pbstrName)( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAppHostMethod_get_Schema(This,ppMethodSchema)( (This)->lpVtbl -> get_Schema(This,ppMethodSchema) )
#define IAppHostMethod_CreateInstance(This,ppMethodInstance)( (This)->lpVtbl -> CreateInstance(This,ppMethodInstance) )
#endif
#endif
#ifndef __IAppHostConfigException_INTERFACE_DEFINED__
#define __IAppHostConfigException_INTERFACE_DEFINED__
extern const IID IID_IAppHostConfigException;
typedef struct IAppHostConfigExceptionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostConfigException * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostConfigException * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostConfigException * This);
	HRESULT(STDMETHODCALLTYPE * get_LineNumber) (IAppHostConfigException * This, ULONG * pcLineNumber);
	HRESULT(STDMETHODCALLTYPE * get_FileName) (IAppHostConfigException * This, BSTR * pbstrFileName);
	HRESULT(STDMETHODCALLTYPE * get_ConfigPath) (IAppHostConfigException * This, BSTR * pbstrConfigPath);
	HRESULT(STDMETHODCALLTYPE * get_ErrorLine) (IAppHostConfigException * This, BSTR * pbstrErrorLine);
	HRESULT(STDMETHODCALLTYPE * get_PreErrorLine) (IAppHostConfigException * This, BSTR * pbstrPreErrorLine);
	HRESULT(STDMETHODCALLTYPE * get_PostErrorLine) (IAppHostConfigException * This, BSTR * pbstrPostErrorLine);
	HRESULT(STDMETHODCALLTYPE * get_ErrorString) (IAppHostConfigException * This, BSTR * pbstrErrorString);
	END_INTERFACE
}  IAppHostConfigExceptionVtbl;
interface IAppHostConfigException
{
	CONST_VTBL struct IAppHostConfigExceptionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostConfigException_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostConfigException_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostConfigException_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostConfigException_get_LineNumber(This,pcLineNumber)( (This)->lpVtbl -> get_LineNumber(This,pcLineNumber) )
#define IAppHostConfigException_get_FileName(This,pbstrFileName)( (This)->lpVtbl -> get_FileName(This,pbstrFileName) )
#define IAppHostConfigException_get_ConfigPath(This,pbstrConfigPath)( (This)->lpVtbl -> get_ConfigPath(This,pbstrConfigPath) )
#define IAppHostConfigException_get_ErrorLine(This,pbstrErrorLine)( (This)->lpVtbl -> get_ErrorLine(This,pbstrErrorLine) )
#define IAppHostConfigException_get_PreErrorLine(This,pbstrPreErrorLine)( (This)->lpVtbl -> get_PreErrorLine(This,pbstrPreErrorLine) )
#define IAppHostConfigException_get_PostErrorLine(This,pbstrPostErrorLine)( (This)->lpVtbl -> get_PostErrorLine(This,pbstrPostErrorLine) )
#define IAppHostConfigException_get_ErrorString(This,pbstrErrorString)( (This)->lpVtbl -> get_ErrorString(This,pbstrErrorString) )
#endif
#endif
#ifndef __IAppHostPropertyException_INTERFACE_DEFINED__
#define __IAppHostPropertyException_INTERFACE_DEFINED__
extern const IID IID_IAppHostPropertyException;
typedef struct IAppHostPropertyExceptionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostPropertyException * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostPropertyException * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostPropertyException * This);
	HRESULT(STDMETHODCALLTYPE * get_LineNumber) (IAppHostPropertyException * This, ULONG * pcLineNumber);
	HRESULT(STDMETHODCALLTYPE * get_FileName) (IAppHostPropertyException * This, BSTR * pbstrFileName);
	HRESULT(STDMETHODCALLTYPE * get_ConfigPath) (IAppHostPropertyException * This, BSTR * pbstrConfigPath);
	HRESULT(STDMETHODCALLTYPE * get_ErrorLine) (IAppHostPropertyException * This, BSTR * pbstrErrorLine);
	HRESULT(STDMETHODCALLTYPE * get_PreErrorLine) (IAppHostPropertyException * This, BSTR * pbstrPreErrorLine);
	HRESULT(STDMETHODCALLTYPE * get_PostErrorLine) (IAppHostPropertyException * This, BSTR * pbstrPostErrorLine);
	HRESULT(STDMETHODCALLTYPE * get_ErrorString) (IAppHostPropertyException * This, BSTR * pbstrErrorString);
	HRESULT(STDMETHODCALLTYPE * get_InvalidValue) (IAppHostPropertyException * This, BSTR * pbstrValue);
	HRESULT(STDMETHODCALLTYPE * get_ValidationFailureReason) (IAppHostPropertyException * This, BSTR * pbstrValidationReason);
	HRESULT(STDMETHODCALLTYPE * get_ValidationFailureParameters) (IAppHostPropertyException * This, SAFEARRAY * *pParameterArray);
	END_INTERFACE
}  IAppHostPropertyExceptionVtbl;
interface IAppHostPropertyException
{
	CONST_VTBL struct IAppHostPropertyExceptionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostPropertyException_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostPropertyException_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostPropertyException_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostPropertyException_get_LineNumber(This,pcLineNumber)( (This)->lpVtbl -> get_LineNumber(This,pcLineNumber) )
#define IAppHostPropertyException_get_FileName(This,pbstrFileName)( (This)->lpVtbl -> get_FileName(This,pbstrFileName) )
#define IAppHostPropertyException_get_ConfigPath(This,pbstrConfigPath)( (This)->lpVtbl -> get_ConfigPath(This,pbstrConfigPath) )
#define IAppHostPropertyException_get_ErrorLine(This,pbstrErrorLine)( (This)->lpVtbl -> get_ErrorLine(This,pbstrErrorLine) )
#define IAppHostPropertyException_get_PreErrorLine(This,pbstrPreErrorLine)( (This)->lpVtbl -> get_PreErrorLine(This,pbstrPreErrorLine) )
#define IAppHostPropertyException_get_PostErrorLine(This,pbstrPostErrorLine)( (This)->lpVtbl -> get_PostErrorLine(This,pbstrPostErrorLine) )
#define IAppHostPropertyException_get_ErrorString(This,pbstrErrorString)( (This)->lpVtbl -> get_ErrorString(This,pbstrErrorString) )
#define IAppHostPropertyException_get_InvalidValue(This,pbstrValue)( (This)->lpVtbl -> get_InvalidValue(This,pbstrValue) )
#define IAppHostPropertyException_get_ValidationFailureReason(This,pbstrValidationReason)( (This)->lpVtbl -> get_ValidationFailureReason(This,pbstrValidationReason) )
#define IAppHostPropertyException_get_ValidationFailureParameters(This,pParameterArray)( (This)->lpVtbl -> get_ValidationFailureParameters(This,pParameterArray) )
#endif
#endif
#ifndef __IAppHostElementCollection_INTERFACE_DEFINED__
#define __IAppHostElementCollection_INTERFACE_DEFINED__
extern const IID IID_IAppHostElementCollection;
typedef struct IAppHostElementCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostElementCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostElementCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostElementCollection * This);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAppHostElementCollection * This, DWORD * pcElementCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAppHostElementCollection * This, VARIANT cIndex, IAppHostElement ** ppElement);
	HRESULT(STDMETHODCALLTYPE * AddElement) (IAppHostElementCollection * This, IAppHostElement * pElement, INT cPosition);
	HRESULT(STDMETHODCALLTYPE * DeleteElement) (IAppHostElementCollection * This, VARIANT cIndex);
	HRESULT(STDMETHODCALLTYPE * Clear) (IAppHostElementCollection * This);
	HRESULT(STDMETHODCALLTYPE * CreateNewElement) (IAppHostElementCollection * This, BSTR bstrElementName, IAppHostElement ** ppElement);
	HRESULT(STDMETHODCALLTYPE * get_Schema) (IAppHostElementCollection * This, IAppHostCollectionSchema ** ppSchema);
	END_INTERFACE
}  IAppHostElementCollectionVtbl;
interface IAppHostElementCollection
{
	CONST_VTBL struct IAppHostElementCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostElementCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostElementCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostElementCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostElementCollection_get_Count(This,pcElementCount)( (This)->lpVtbl -> get_Count(This,pcElementCount) )
#define IAppHostElementCollection_get_Item(This,cIndex,ppElement)( (This)->lpVtbl -> get_Item(This,cIndex,ppElement) )
#define IAppHostElementCollection_AddElement(This,pElement,cPosition)( (This)->lpVtbl -> AddElement(This,pElement,cPosition) )
#define IAppHostElementCollection_DeleteElement(This,cIndex)( (This)->lpVtbl -> DeleteElement(This,cIndex) )
#define IAppHostElementCollection_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define IAppHostElementCollection_CreateNewElement(This,bstrElementName,ppElement)( (This)->lpVtbl -> CreateNewElement(This,bstrElementName,ppElement) )
#define IAppHostElementCollection_get_Schema(This,ppSchema)( (This)->lpVtbl -> get_Schema(This,ppSchema) )
#endif
#endif
#ifndef __IAppHostElement_INTERFACE_DEFINED__
#define __IAppHostElement_INTERFACE_DEFINED__
extern const IID IID_IAppHostElement;
typedef struct IAppHostElementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostElement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostElement * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostElement * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAppHostElement * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_Collection) (IAppHostElement * This, IAppHostElementCollection ** ppCollection);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IAppHostElement * This, IAppHostPropertyCollection ** ppProperties);
	HRESULT(STDMETHODCALLTYPE * get_ChildElements) (IAppHostElement * This, IAppHostChildElementCollection ** ppElements);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IAppHostElement * This, BSTR bstrMetadataType, VARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * SetMetadata) (IAppHostElement * This, BSTR bstrMetadataType, VARIANT value);
	HRESULT(STDMETHODCALLTYPE * get_Schema) (IAppHostElement * This, IAppHostElementSchema ** ppSchema);
	HRESULT(STDMETHODCALLTYPE * GetElementByName) (IAppHostElement * This, BSTR bstrSubName, IAppHostElement ** ppElement);
	HRESULT(STDMETHODCALLTYPE * GetPropertyByName) (IAppHostElement * This, BSTR bstrSubName, IAppHostProperty ** ppProperty);
	HRESULT(STDMETHODCALLTYPE * Clear) (IAppHostElement * This);
	HRESULT(STDMETHODCALLTYPE * get_Methods) (IAppHostElement * This, IAppHostMethodCollection ** ppMethods);
	END_INTERFACE
}  IAppHostElementVtbl;
interface IAppHostElement
{
	CONST_VTBL struct IAppHostElementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostElement_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostElement_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostElement_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostElement_get_Name(This,pbstrName)( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAppHostElement_get_Collection(This,ppCollection)( (This)->lpVtbl -> get_Collection(This,ppCollection) )
#define IAppHostElement_get_Properties(This,ppProperties)( (This)->lpVtbl -> get_Properties(This,ppProperties) )
#define IAppHostElement_get_ChildElements(This,ppElements)( (This)->lpVtbl -> get_ChildElements(This,ppElements) )
#define IAppHostElement_GetMetadata(This,bstrMetadataType,pValue)( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
#define IAppHostElement_SetMetadata(This,bstrMetadataType,value)( (This)->lpVtbl -> SetMetadata(This,bstrMetadataType,value) )
#define IAppHostElement_get_Schema(This,ppSchema)( (This)->lpVtbl -> get_Schema(This,ppSchema) )
#define IAppHostElement_GetElementByName(This,bstrSubName,ppElement)( (This)->lpVtbl -> GetElementByName(This,bstrSubName,ppElement) )
#define IAppHostElement_GetPropertyByName(This,bstrSubName,ppProperty)( (This)->lpVtbl -> GetPropertyByName(This,bstrSubName,ppProperty) )
#define IAppHostElement_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define IAppHostElement_get_Methods(This,ppMethods)( (This)->lpVtbl -> get_Methods(This,ppMethods) )
#endif
#endif
#ifndef __IAppHostProperty_INTERFACE_DEFINED__
#define __IAppHostProperty_INTERFACE_DEFINED__
extern const IID IID_IAppHostProperty;
typedef struct IAppHostPropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostProperty * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostProperty * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostProperty * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAppHostProperty * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IAppHostProperty * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * put_Value) (IAppHostProperty * This, VARIANT value);
	HRESULT(STDMETHODCALLTYPE * Clear) (IAppHostProperty * This);
	HRESULT(STDMETHODCALLTYPE * get_StringValue) (IAppHostProperty * This, BSTR * pbstrValue);
	HRESULT(STDMETHODCALLTYPE * get_Exception) (IAppHostProperty * This, IAppHostPropertyException ** ppException);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IAppHostProperty * This, BSTR bstrMetadataType, VARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * SetMetadata) (IAppHostProperty * This, BSTR bstrMetadataType, VARIANT value);
	HRESULT(STDMETHODCALLTYPE * get_Schema) (IAppHostProperty * This, IAppHostPropertySchema ** ppSchema);
	END_INTERFACE
}  IAppHostPropertyVtbl;
interface IAppHostProperty
{
	CONST_VTBL struct IAppHostPropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostProperty_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostProperty_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostProperty_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostProperty_get_Name(This,pbstrName)( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAppHostProperty_get_Value(This,pVariant)( (This)->lpVtbl -> get_Value(This,pVariant) )
#define IAppHostProperty_put_Value(This,value)( (This)->lpVtbl -> put_Value(This,value) )
#define IAppHostProperty_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define IAppHostProperty_get_StringValue(This,pbstrValue)( (This)->lpVtbl -> get_StringValue(This,pbstrValue) )
#define IAppHostProperty_get_Exception(This,ppException)( (This)->lpVtbl -> get_Exception(This,ppException) )
#define IAppHostProperty_GetMetadata(This,bstrMetadataType,pValue)( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
#define IAppHostProperty_SetMetadata(This,bstrMetadataType,value)( (This)->lpVtbl -> SetMetadata(This,bstrMetadataType,value) )
#define IAppHostProperty_get_Schema(This,ppSchema)( (This)->lpVtbl -> get_Schema(This,ppSchema) )
#endif
#endif
#ifndef __IAppHostConfigLocation_INTERFACE_DEFINED__
#define __IAppHostConfigLocation_INTERFACE_DEFINED__
extern const IID IID_IAppHostConfigLocation;
typedef struct IAppHostConfigLocationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostConfigLocation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostConfigLocation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostConfigLocation * This);
	HRESULT(STDMETHODCALLTYPE * get_Path) (IAppHostConfigLocation * This, BSTR * pbstrLocationPath);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAppHostConfigLocation * This, DWORD * pcCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAppHostConfigLocation * This, VARIANT cIndex, IAppHostElement ** ppSection);
	HRESULT(STDMETHODCALLTYPE * AddConfigSection) (IAppHostConfigLocation * This, BSTR bstrSectionName, IAppHostElement ** ppAdminElement);
	HRESULT(STDMETHODCALLTYPE * DeleteConfigSection) (IAppHostConfigLocation * This, VARIANT cIndex);
	END_INTERFACE
}  IAppHostConfigLocationVtbl;
interface IAppHostConfigLocation
{
	CONST_VTBL struct IAppHostConfigLocationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostConfigLocation_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostConfigLocation_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostConfigLocation_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostConfigLocation_get_Path(This,pbstrLocationPath)( (This)->lpVtbl -> get_Path(This,pbstrLocationPath) )
#define IAppHostConfigLocation_get_Count(This,pcCount)( (This)->lpVtbl -> get_Count(This,pcCount) )
#define IAppHostConfigLocation_get_Item(This,cIndex,ppSection)( (This)->lpVtbl -> get_Item(This,cIndex,ppSection) )
#define IAppHostConfigLocation_AddConfigSection(This,bstrSectionName,ppAdminElement)( (This)->lpVtbl -> AddConfigSection(This,bstrSectionName,ppAdminElement) )
#define IAppHostConfigLocation_DeleteConfigSection(This,cIndex)( (This)->lpVtbl -> DeleteConfigSection(This,cIndex) )
#endif
#endif
#ifndef __IAppHostSectionDefinition_INTERFACE_DEFINED__
#define __IAppHostSectionDefinition_INTERFACE_DEFINED__
extern const IID IID_IAppHostSectionDefinition;
typedef struct IAppHostSectionDefinitionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostSectionDefinition * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostSectionDefinition * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostSectionDefinition * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAppHostSectionDefinition * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IAppHostSectionDefinition * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_Type) (IAppHostSectionDefinition * This, BSTR bstrType);
	HRESULT(STDMETHODCALLTYPE * get_OverrideModeDefault) (IAppHostSectionDefinition * This, BSTR * pbstrOverrideModeDefault);
	HRESULT(STDMETHODCALLTYPE * put_OverrideModeDefault) (IAppHostSectionDefinition * This, BSTR bstrOverrideModeDefault);
	HRESULT(STDMETHODCALLTYPE * get_AllowDefinition) (IAppHostSectionDefinition * This, BSTR * pbstrAllowDefinition);
	HRESULT(STDMETHODCALLTYPE * put_AllowDefinition) (IAppHostSectionDefinition * This, BSTR bstrAllowDefinition);
	HRESULT(STDMETHODCALLTYPE * get_AllowLocation) (IAppHostSectionDefinition * This, BSTR * pbstrAllowLocation);
	HRESULT(STDMETHODCALLTYPE * put_AllowLocation) (IAppHostSectionDefinition * This, BSTR bstrAllowLocation);
	HRESULT(STDMETHODCALLTYPE * get_RequirePermission) (IAppHostSectionDefinition * This, VARIANT_BOOL * pfRequirePermission);
	HRESULT(STDMETHODCALLTYPE * put_RequirePermission) (IAppHostSectionDefinition * This, VARIANT_BOOL pfRequirePermission);
	END_INTERFACE
}  IAppHostSectionDefinitionVtbl;
interface IAppHostSectionDefinition
{
	CONST_VTBL struct IAppHostSectionDefinitionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostSectionDefinition_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostSectionDefinition_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostSectionDefinition_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostSectionDefinition_get_Name(This,pbstrName)( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAppHostSectionDefinition_get_Type(This,pbstrType)( (This)->lpVtbl -> get_Type(This,pbstrType) )
#define IAppHostSectionDefinition_put_Type(This,bstrType)( (This)->lpVtbl -> put_Type(This,bstrType) )
#define IAppHostSectionDefinition_get_OverrideModeDefault(This,pbstrOverrideModeDefault)( (This)->lpVtbl -> get_OverrideModeDefault(This,pbstrOverrideModeDefault) )
#define IAppHostSectionDefinition_put_OverrideModeDefault(This,bstrOverrideModeDefault)( (This)->lpVtbl -> put_OverrideModeDefault(This,bstrOverrideModeDefault) )
#define IAppHostSectionDefinition_get_AllowDefinition(This,pbstrAllowDefinition)( (This)->lpVtbl -> get_AllowDefinition(This,pbstrAllowDefinition) )
#define IAppHostSectionDefinition_put_AllowDefinition(This,bstrAllowDefinition)( (This)->lpVtbl -> put_AllowDefinition(This,bstrAllowDefinition) )
#define IAppHostSectionDefinition_get_AllowLocation(This,pbstrAllowLocation)( (This)->lpVtbl -> get_AllowLocation(This,pbstrAllowLocation) )
#define IAppHostSectionDefinition_put_AllowLocation(This,bstrAllowLocation)( (This)->lpVtbl -> put_AllowLocation(This,bstrAllowLocation) )
#define IAppHostSectionDefinition_get_RequirePermission(This,pfRequirePermission)( (This)->lpVtbl -> get_RequirePermission(This,pfRequirePermission) )
#define IAppHostSectionDefinition_put_RequirePermission(This,pfRequirePermission)( (This)->lpVtbl -> put_RequirePermission(This,pfRequirePermission) )
#endif
#endif
#ifndef __IAppHostSectionDefinitionCollection_INTERFACE_DEFINED__
#define __IAppHostSectionDefinitionCollection_INTERFACE_DEFINED__
extern const IID IID_IAppHostSectionDefinitionCollection;
typedef struct IAppHostSectionDefinitionCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostSectionDefinitionCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostSectionDefinitionCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostSectionDefinitionCollection * This);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAppHostSectionDefinitionCollection * This, ULONG * pcCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAppHostSectionDefinitionCollection * This, VARIANT varIndex, IAppHostSectionDefinition ** ppConfigSection);
	HRESULT(STDMETHODCALLTYPE * AddSection) (IAppHostSectionDefinitionCollection * This, BSTR bstrSectionName, IAppHostSectionDefinition ** ppConfigSection);
	HRESULT(STDMETHODCALLTYPE * DeleteSection) (IAppHostSectionDefinitionCollection * This, VARIANT varIndex);
	END_INTERFACE
}  IAppHostSectionDefinitionCollectionVtbl;
interface IAppHostSectionDefinitionCollection
{
	CONST_VTBL struct IAppHostSectionDefinitionCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostSectionDefinitionCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostSectionDefinitionCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostSectionDefinitionCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostSectionDefinitionCollection_get_Count(This,pcCount)( (This)->lpVtbl -> get_Count(This,pcCount) )
#define IAppHostSectionDefinitionCollection_get_Item(This,varIndex,ppConfigSection)( (This)->lpVtbl -> get_Item(This,varIndex,ppConfigSection) )
#define IAppHostSectionDefinitionCollection_AddSection(This,bstrSectionName,ppConfigSection)( (This)->lpVtbl -> AddSection(This,bstrSectionName,ppConfigSection) )
#define IAppHostSectionDefinitionCollection_DeleteSection(This,varIndex)( (This)->lpVtbl -> DeleteSection(This,varIndex) )
#endif
#endif
#ifndef __IAppHostSectionGroup_INTERFACE_DEFINED__
#define __IAppHostSectionGroup_INTERFACE_DEFINED__
extern const IID IID_IAppHostSectionGroup;
typedef struct IAppHostSectionGroupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostSectionGroup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostSectionGroup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostSectionGroup * This);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAppHostSectionGroup * This, ULONG * pcSectionGroup);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAppHostSectionGroup * This, VARIANT varIndex, IAppHostSectionGroup ** ppSectionGroup);
	HRESULT(STDMETHODCALLTYPE * get_Sections) (IAppHostSectionGroup * This, IAppHostSectionDefinitionCollection ** ppSections);
	HRESULT(STDMETHODCALLTYPE * AddSectionGroup) (IAppHostSectionGroup * This, BSTR bstrSectionGroupName, IAppHostSectionGroup ** ppSectionGroup);
	HRESULT(STDMETHODCALLTYPE * DeleteSectionGroup) (IAppHostSectionGroup * This, VARIANT varIndex);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAppHostSectionGroup * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IAppHostSectionGroup * This, BSTR * pbstrType);
	HRESULT(STDMETHODCALLTYPE * put_Type) (IAppHostSectionGroup * This, BSTR bstrType);
	END_INTERFACE
}  IAppHostSectionGroupVtbl;
interface IAppHostSectionGroup
{
	CONST_VTBL struct IAppHostSectionGroupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostSectionGroup_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostSectionGroup_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostSectionGroup_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostSectionGroup_get_Count(This,pcSectionGroup)( (This)->lpVtbl -> get_Count(This,pcSectionGroup) )
#define IAppHostSectionGroup_get_Item(This,varIndex,ppSectionGroup)( (This)->lpVtbl -> get_Item(This,varIndex,ppSectionGroup) )
#define IAppHostSectionGroup_get_Sections(This,ppSections)( (This)->lpVtbl -> get_Sections(This,ppSections) )
#define IAppHostSectionGroup_AddSectionGroup(This,bstrSectionGroupName,ppSectionGroup)( (This)->lpVtbl -> AddSectionGroup(This,bstrSectionGroupName,ppSectionGroup) )
#define IAppHostSectionGroup_DeleteSectionGroup(This,varIndex)( (This)->lpVtbl -> DeleteSectionGroup(This,varIndex) )
#define IAppHostSectionGroup_get_Name(This,pbstrName)( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAppHostSectionGroup_get_Type(This,pbstrType)( (This)->lpVtbl -> get_Type(This,pbstrType) )
#define IAppHostSectionGroup_put_Type(This,bstrType)( (This)->lpVtbl -> put_Type(This,bstrType) )
#endif
#endif
#ifndef __IAppHostConfigFile_INTERFACE_DEFINED__
#define __IAppHostConfigFile_INTERFACE_DEFINED__
extern const IID IID_IAppHostConfigFile;
typedef struct IAppHostConfigFileVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostConfigFile * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostConfigFile * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostConfigFile * This);
	HRESULT(STDMETHODCALLTYPE * get_ConfigPath) (IAppHostConfigFile * This, BSTR * pbstrConfigPath);
	HRESULT(STDMETHODCALLTYPE * get_FilePath) (IAppHostConfigFile * This, BSTR * pbstrFilePath);
	HRESULT(STDMETHODCALLTYPE * get_Locations) (IAppHostConfigFile * This, IAppHostConfigLocationCollection ** ppLocations);
	HRESULT(STDMETHODCALLTYPE * GetAdminSection) (IAppHostConfigFile * This, BSTR bstrSectionName, BSTR bstrPath, IAppHostElement ** ppAdminSection);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IAppHostConfigFile * This, BSTR bstrMetadataType, VARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * SetMetadata) (IAppHostConfigFile * This, BSTR bstrMetadataType, VARIANT value);
	HRESULT(STDMETHODCALLTYPE * ClearInvalidSections) (IAppHostConfigFile * This);
	HRESULT(STDMETHODCALLTYPE * get_RootSectionGroup) (IAppHostConfigFile * This, IAppHostSectionGroup ** ppSectionGroups);
	END_INTERFACE
}  IAppHostConfigFileVtbl;
interface IAppHostConfigFile
{
	CONST_VTBL struct IAppHostConfigFileVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostConfigFile_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostConfigFile_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostConfigFile_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostConfigFile_get_ConfigPath(This,pbstrConfigPath)( (This)->lpVtbl -> get_ConfigPath(This,pbstrConfigPath) )
#define IAppHostConfigFile_get_FilePath(This,pbstrFilePath)( (This)->lpVtbl -> get_FilePath(This,pbstrFilePath) )
#define IAppHostConfigFile_get_Locations(This,ppLocations)( (This)->lpVtbl -> get_Locations(This,ppLocations) )
#define IAppHostConfigFile_GetAdminSection(This,bstrSectionName,bstrPath,ppAdminSection)( (This)->lpVtbl -> GetAdminSection(This,bstrSectionName,bstrPath,ppAdminSection) )
#define IAppHostConfigFile_GetMetadata(This,bstrMetadataType,pValue)( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
#define IAppHostConfigFile_SetMetadata(This,bstrMetadataType,value)( (This)->lpVtbl -> SetMetadata(This,bstrMetadataType,value) )
#define IAppHostConfigFile_ClearInvalidSections(This)( (This)->lpVtbl -> ClearInvalidSections(This) )
#define IAppHostConfigFile_get_RootSectionGroup(This,ppSectionGroups)( (This)->lpVtbl -> get_RootSectionGroup(This,ppSectionGroups) )
#endif
#endif
#ifndef __IAppHostPathMapper_INTERFACE_DEFINED__
#define __IAppHostPathMapper_INTERFACE_DEFINED__
extern const IID IID_IAppHostPathMapper;
typedef struct IAppHostPathMapperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostPathMapper * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostPathMapper * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostPathMapper * This);
	HRESULT(STDMETHODCALLTYPE * MapPath) (IAppHostPathMapper * This, BSTR bstrConfigPath, BSTR bstrMappedPhysicalPath, BSTR * pbstrNewPhysicalPath);
	END_INTERFACE
}  IAppHostPathMapperVtbl;
interface IAppHostPathMapper
{
	CONST_VTBL struct IAppHostPathMapperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostPathMapper_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostPathMapper_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostPathMapper_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostPathMapper_MapPath(This,bstrConfigPath,bstrMappedPhysicalPath,pbstrNewPhysicalPath)( (This)->lpVtbl -> MapPath(This,bstrConfigPath,bstrMappedPhysicalPath,pbstrNewPhysicalPath) )
#endif
#endif
#ifndef __IAppHostPathMapper2_INTERFACE_DEFINED__
#define __IAppHostPathMapper2_INTERFACE_DEFINED__
extern const IID IID_IAppHostPathMapper2;
typedef struct IAppHostPathMapper2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostPathMapper2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostPathMapper2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostPathMapper2 * This);
	HRESULT(STDMETHODCALLTYPE * MapPath) (IAppHostPathMapper2 * This, BSTR bstrConfigPath, BSTR bstrMappedPhysicalPath, BSTR * pbstrNewPhysicalPath, HANDLE * phImpersonationToken);
	END_INTERFACE
}  IAppHostPathMapper2Vtbl;
interface IAppHostPathMapper2
{
	CONST_VTBL struct IAppHostPathMapper2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostPathMapper2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostPathMapper2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostPathMapper2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostPathMapper2_MapPath(This,bstrConfigPath,bstrMappedPhysicalPath,pbstrNewPhysicalPath,phImpersonationToken)( (This)->lpVtbl -> MapPath(This,bstrConfigPath,bstrMappedPhysicalPath,pbstrNewPhysicalPath,phImpersonationToken) )
#endif
#endif
#ifndef __IAppHostChangeHandler_INTERFACE_DEFINED__
#define __IAppHostChangeHandler_INTERFACE_DEFINED__
extern const IID IID_IAppHostChangeHandler;
typedef struct IAppHostChangeHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostChangeHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostChangeHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostChangeHandler * This);
	HRESULT(STDMETHODCALLTYPE * OnSectionChanges) (IAppHostChangeHandler * This, BSTR bstrSectionName, BSTR bstrConfigPath);
	END_INTERFACE
}  IAppHostChangeHandlerVtbl;
interface IAppHostChangeHandler
{
	CONST_VTBL struct IAppHostChangeHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostChangeHandler_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostChangeHandler_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostChangeHandler_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostChangeHandler_OnSectionChanges(This,bstrSectionName,bstrConfigPath)( (This)->lpVtbl -> OnSectionChanges(This,bstrSectionName,bstrConfigPath) )
#endif
#endif
#ifndef __IAppHostAdminManager_INTERFACE_DEFINED__
#define __IAppHostAdminManager_INTERFACE_DEFINED__
extern const IID IID_IAppHostAdminManager;
typedef struct IAppHostAdminManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostAdminManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostAdminManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostAdminManager * This);
	HRESULT(STDMETHODCALLTYPE * GetAdminSection) (IAppHostAdminManager * This, BSTR bstrSectionName, BSTR bstrPath, IAppHostElement ** ppAdminSection);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IAppHostAdminManager * This, BSTR bstrMetadataType, VARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * SetMetadata) (IAppHostAdminManager * This, BSTR bstrMetadataType, VARIANT value);
	HRESULT(STDMETHODCALLTYPE * get_ConfigManager) (IAppHostAdminManager * This, IAppHostConfigManager ** ppConfigManager);
	END_INTERFACE
}  IAppHostAdminManagerVtbl;
interface IAppHostAdminManager
{
	CONST_VTBL struct IAppHostAdminManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostAdminManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostAdminManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostAdminManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostAdminManager_GetAdminSection(This,bstrSectionName,bstrPath,ppAdminSection)( (This)->lpVtbl -> GetAdminSection(This,bstrSectionName,bstrPath,ppAdminSection) )
#define IAppHostAdminManager_GetMetadata(This,bstrMetadataType,pValue)( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
#define IAppHostAdminManager_SetMetadata(This,bstrMetadataType,value)( (This)->lpVtbl -> SetMetadata(This,bstrMetadataType,value) )
#define IAppHostAdminManager_get_ConfigManager(This,ppConfigManager)( (This)->lpVtbl -> get_ConfigManager(This,ppConfigManager) )
#endif
#endif
#ifndef __IAppHostWritableAdminManager_INTERFACE_DEFINED__
#define __IAppHostWritableAdminManager_INTERFACE_DEFINED__
extern const IID IID_IAppHostWritableAdminManager;
typedef struct IAppHostWritableAdminManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostWritableAdminManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostWritableAdminManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostWritableAdminManager * This);
	HRESULT(STDMETHODCALLTYPE * GetAdminSection) (IAppHostWritableAdminManager * This, BSTR bstrSectionName, BSTR bstrPath, IAppHostElement ** ppAdminSection);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IAppHostWritableAdminManager * This, BSTR bstrMetadataType, VARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * SetMetadata) (IAppHostWritableAdminManager * This, BSTR bstrMetadataType, VARIANT value);
	HRESULT(STDMETHODCALLTYPE * get_ConfigManager) (IAppHostWritableAdminManager * This, IAppHostConfigManager ** ppConfigManager);
	HRESULT(STDMETHODCALLTYPE * CommitChanges) (IAppHostWritableAdminManager * This);
	HRESULT(STDMETHODCALLTYPE * get_CommitPath) (IAppHostWritableAdminManager * This, BSTR * pbstrCommitPath);
	HRESULT(STDMETHODCALLTYPE * put_CommitPath) (IAppHostWritableAdminManager * This, BSTR bstrCommitPath);
	END_INTERFACE
}  IAppHostWritableAdminManagerVtbl;
interface IAppHostWritableAdminManager
{
	CONST_VTBL struct IAppHostWritableAdminManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostWritableAdminManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostWritableAdminManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostWritableAdminManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostWritableAdminManager_GetAdminSection(This,bstrSectionName,bstrPath,ppAdminSection)( (This)->lpVtbl -> GetAdminSection(This,bstrSectionName,bstrPath,ppAdminSection) )
#define IAppHostWritableAdminManager_GetMetadata(This,bstrMetadataType,pValue)( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
#define IAppHostWritableAdminManager_SetMetadata(This,bstrMetadataType,value)( (This)->lpVtbl -> SetMetadata(This,bstrMetadataType,value) )
#define IAppHostWritableAdminManager_get_ConfigManager(This,ppConfigManager)( (This)->lpVtbl -> get_ConfigManager(This,ppConfigManager) )
#define IAppHostWritableAdminManager_CommitChanges(This)( (This)->lpVtbl -> CommitChanges(This) )
#define IAppHostWritableAdminManager_get_CommitPath(This,pbstrCommitPath)( (This)->lpVtbl -> get_CommitPath(This,pbstrCommitPath) )
#define IAppHostWritableAdminManager_put_CommitPath(This,bstrCommitPath)( (This)->lpVtbl -> put_CommitPath(This,bstrCommitPath) )
#endif
#endif
#ifndef __IAppHostConfigManager_INTERFACE_DEFINED__
#define __IAppHostConfigManager_INTERFACE_DEFINED__
extern const IID IID_IAppHostConfigManager;
typedef struct IAppHostConfigManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAppHostConfigManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAppHostConfigManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAppHostConfigManager * This);
	HRESULT(STDMETHODCALLTYPE * GetConfigFile) (IAppHostConfigManager * This, BSTR bstrConfigPath, IAppHostConfigFile ** ppConfigFile);
	HRESULT(STDMETHODCALLTYPE * GetUniqueConfigPath) (IAppHostConfigManager * This, BSTR bstrConfigPath, BSTR * pbstrUniquePath);
	END_INTERFACE
}  IAppHostConfigManagerVtbl;
interface IAppHostConfigManager
{
	CONST_VTBL struct IAppHostConfigManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAppHostConfigManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAppHostConfigManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAppHostConfigManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAppHostConfigManager_GetConfigFile(This,bstrConfigPath,ppConfigFile)( (This)->lpVtbl -> GetConfigFile(This,bstrConfigPath,ppConfigFile) )
#define IAppHostConfigManager_GetUniqueConfigPath(This,bstrConfigPath,pbstrUniquePath)( (This)->lpVtbl -> GetUniqueConfigPath(This,bstrConfigPath,pbstrUniquePath) )
#endif
#endif
#ifndef __AppHostAdminLibrary_LIBRARY_DEFINED__
#define __AppHostAdminLibrary_LIBRARY_DEFINED__
extern const IID LIBID_AppHostAdminLibrary;
extern const CLSID CLSID_AppHostAdminManager;
extern const CLSID CLSID_AppHostWritableAdminManager;
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
