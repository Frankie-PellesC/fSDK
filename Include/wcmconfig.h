/*+@@file@@----------------------------------------------------------------*//*!
 \file		wcmconfig.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 00:05:22 2016
 \date		Modified on Mon Sep 19 00:05:22 2016
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
#ifndef __wcmconfig_h__
#define __wcmconfig_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IItemEnumerator_FWD_DEFINED__
#define __IItemEnumerator_FWD_DEFINED__
typedef interface IItemEnumerator IItemEnumerator;
#endif
#ifndef __ISettingsIdentity_FWD_DEFINED__
#define __ISettingsIdentity_FWD_DEFINED__
typedef interface ISettingsIdentity ISettingsIdentity;
#endif
#ifndef __ITargetInfo_FWD_DEFINED__
#define __ITargetInfo_FWD_DEFINED__
typedef interface ITargetInfo ITargetInfo;
#endif
#ifndef __ISettingsEngine_FWD_DEFINED__
#define __ISettingsEngine_FWD_DEFINED__
typedef interface ISettingsEngine ISettingsEngine;
#endif
#ifndef __ISettingsItem_FWD_DEFINED__
#define __ISettingsItem_FWD_DEFINED__
typedef interface ISettingsItem ISettingsItem;
#endif
#ifndef __ISettingsNamespace_FWD_DEFINED__
#define __ISettingsNamespace_FWD_DEFINED__
typedef interface ISettingsNamespace ISettingsNamespace;
#endif
#ifndef __ISettingsResult_FWD_DEFINED__
#define __ISettingsResult_FWD_DEFINED__
typedef interface ISettingsResult ISettingsResult;
#endif
#ifndef __ISettingsContext_FWD_DEFINED__
#define __ISettingsContext_FWD_DEFINED__
typedef interface ISettingsContext ISettingsContext;
#endif
#ifndef __SettingsEngine_FWD_DEFINED__
#define __SettingsEngine_FWD_DEFINED__
typedef struct SettingsEngine SettingsEngine;
#endif
#include "oaidl.h"
#include "ocidl.h"
typedef enum __MIDL___MIDL_itf_wcmconfig_0000_0000_0001
{
	OfflineMode = 1,
	OnlineMode = 2
} WcmTargetMode;
typedef enum __MIDL___MIDL_itf_wcmconfig_0000_0000_0002
{
	SharedEnumeration = 1,
	UserEnumeration = 2,
	AllEnumeration = (SharedEnumeration | UserEnumeration)
} WcmNamespaceEnumerationFlags;
typedef enum __MIDL___MIDL_itf_wcmconfig_0000_0000_0003
{
	dataTypeByte = 1,
	dataTypeSByte = 2,
	dataTypeUInt16 = 3,
	dataTypeInt16 = 4,
	dataTypeUInt32 = 5,
	dataTypeInt32 = 6,
	dataTypeUInt64 = 7,
	dataTypeInt64 = 8,
	dataTypeBoolean = 11,
	dataTypeString = 12,
	dataTypeFlagArray = 0x8000
} WcmDataType;
typedef enum __MIDL___MIDL_itf_wcmconfig_0000_0000_0004
{
	settingTypeScalar = 1,
	settingTypeComplex = 2,
	settingTypeList = 3
} WcmSettingType;
typedef enum __MIDL___MIDL_itf_wcmconfig_0000_0000_0005
{
	restrictionFacetMaxLength = 0x1,
	restrictionFacetEnumeration = 0x2,
	restrictionFacetMaxInclusive = 0x4,
	restrictionFacetMinInclusive = 0x8
} WcmRestrictionFacets;
typedef enum __MIDL___MIDL_itf_wcmconfig_0000_0000_0006
{
	UnknownStatus = 0,
	UserRegistered = 1,
	UserUnregistered = 2,
	UserLoaded = 3,
	UserUnloaded = 4
} WcmUserStatus;
typedef enum __MIDL___MIDL_itf_wcmconfig_0000_0000_0007
{
	ReadOnlyAccess = 1,
	ReadWriteAccess = 2
} WcmNamespaceAccess;
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0000_v0_0_s_ifspec;
#ifndef __IItemEnumerator_INTERFACE_DEFINED__
#define __IItemEnumerator_INTERFACE_DEFINED__
extern const IID IID_IItemEnumerator;
typedef struct IItemEnumeratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IItemEnumerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IItemEnumerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IItemEnumerator * This);
	HRESULT(STDMETHODCALLTYPE * Current) (IItemEnumerator * This, VARIANT * Item);
	HRESULT(STDMETHODCALLTYPE * MoveNext) (IItemEnumerator * This, BOOL * ItemValid);
	HRESULT(STDMETHODCALLTYPE * Reset) (IItemEnumerator * This);
	END_INTERFACE
}  IItemEnumeratorVtbl;
interface IItemEnumerator
{
	CONST_VTBL struct IItemEnumeratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IItemEnumerator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IItemEnumerator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IItemEnumerator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IItemEnumerator_Current(This,Item) ( (This)->lpVtbl -> Current(This,Item) )
#define IItemEnumerator_MoveNext(This,ItemValid) ( (This)->lpVtbl -> MoveNext(This,ItemValid) )
#define IItemEnumerator_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#endif
#endif
#define WCM_SETTINGS_ID_NAME                L"name"
#define WCM_SETTINGS_ID_VERSION             L"version"
#define WCM_SETTINGS_ID_LANGUAGE            L"language"
#define WCM_SETTINGS_ID_ARCHITECTURE        L"architecture"
#define WCM_SETTINGS_ID_TOKEN               L"token"
#define WCM_SETTINGS_ID_URI                 L"uri"
#define WCM_SETTINGS_ID_VERSION_SCOPE       L"versionScope"
#define WCM_SETTINGS_ID_FLAG_REFERENCE     0x00000000
#define WCM_SETTINGS_ID_FLAG_DEFINITION    0x00000001
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0001_v0_0_s_ifspec;
#ifndef __ISettingsIdentity_INTERFACE_DEFINED__
#define __ISettingsIdentity_INTERFACE_DEFINED__
extern const IID IID_ISettingsIdentity;
typedef struct ISettingsIdentityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISettingsIdentity * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISettingsIdentity * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISettingsIdentity * This);
	HRESULT(STDMETHODCALLTYPE * GetAttribute) (ISettingsIdentity * This, void *Reserved, const WCHAR * Name, BSTR * Value);
	HRESULT(STDMETHODCALLTYPE * SetAttribute) (ISettingsIdentity * This, void *Reserved, const WCHAR * Name, const WCHAR * Value);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (ISettingsIdentity * This, DWORD * Flags);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (ISettingsIdentity * This, DWORD Flags);
	END_INTERFACE
}  ISettingsIdentityVtbl;
interface ISettingsIdentity
{
	CONST_VTBL struct ISettingsIdentityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISettingsIdentity_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISettingsIdentity_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISettingsIdentity_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISettingsIdentity_GetAttribute(This,Reserved,Name,Value) ( (This)->lpVtbl -> GetAttribute(This,Reserved,Name,Value) )
#define ISettingsIdentity_SetAttribute(This,Reserved,Name,Value) ( (This)->lpVtbl -> SetAttribute(This,Reserved,Name,Value) )
#define ISettingsIdentity_GetFlags(This,Flags) ( (This)->lpVtbl -> GetFlags(This,Flags) )
#define ISettingsIdentity_SetFlags(This,Flags) ( (This)->lpVtbl -> SetFlags(This,Flags) )
#endif
#endif
#ifndef __ITargetInfo_INTERFACE_DEFINED__
#define __ITargetInfo_INTERFACE_DEFINED__
extern const IID IID_ITargetInfo;
typedef struct ITargetInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITargetInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITargetInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITargetInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTargetMode) (ITargetInfo * This, WcmTargetMode * TargetMode);
	HRESULT(STDMETHODCALLTYPE * SetTargetMode) (ITargetInfo * This, WcmTargetMode TargetMode);
	HRESULT(STDMETHODCALLTYPE * GetTemporaryStoreLocation) (ITargetInfo * This, BSTR * TemporaryStoreLocation);
	HRESULT(STDMETHODCALLTYPE * SetTemporaryStoreLocation) (ITargetInfo * This, const WCHAR * TemporaryStoreLocation);
	HRESULT(STDMETHODCALLTYPE * GetTargetID) (ITargetInfo * This, BSTR * TargetID);
	HRESULT(STDMETHODCALLTYPE * SetTargetID) (ITargetInfo * This, GUID TargetID);
	HRESULT(STDMETHODCALLTYPE * GetTargetProcessorArchitecture) (ITargetInfo * This, BSTR * ProcessorArchitecture);
	HRESULT(STDMETHODCALLTYPE * SetTargetProcessorArchitecture) (ITargetInfo * This, const WCHAR * ProcessorArchitecture);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (ITargetInfo * This, BOOL Offline, const WCHAR * Property, BSTR * Value);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (ITargetInfo * This, BOOL Offline, const WCHAR * Property, const WCHAR * Value);
	HRESULT(STDMETHODCALLTYPE * GetEnumerator) (ITargetInfo * This, IItemEnumerator ** Enumerator);
	HRESULT(STDMETHODCALLTYPE * ExpandTarget) (ITargetInfo * This, BOOL Offline, const WCHAR * Location, BSTR * ExpandedLocation);
	HRESULT(STDMETHODCALLTYPE * ExpandTargetPath) (ITargetInfo * This, BOOL Offline, const WCHAR * Location, BSTR * ExpandedLocation);
	HRESULT(STDMETHODCALLTYPE * SetModulePath) (ITargetInfo * This, const WCHAR * Module, const WCHAR * Path);
	HRESULT(STDMETHODCALLTYPE * LoadModule) (ITargetInfo * This, const WCHAR * Module, HMODULE * ModuleHandle);
	HRESULT(STDMETHODCALLTYPE * SetWow64Context) (ITargetInfo * This, const WCHAR * InstallerModule, BYTE * Wow64Context);
	HRESULT(STDMETHODCALLTYPE * TranslateWow64) (ITargetInfo * This, const WCHAR * ClientArchitecture, const WCHAR * Value, BSTR * TranslatedValue);
	HRESULT(STDMETHODCALLTYPE * SetSchemaHiveLocation) (ITargetInfo * This, LPCWSTR pwzHiveDir);
	HRESULT(STDMETHODCALLTYPE * GetSchemaHiveLocation) (ITargetInfo * This, BSTR * pHiveLocation);
	HRESULT(STDMETHODCALLTYPE * SetSchemaHiveMountName) (ITargetInfo * This, LPCWSTR pwzMountName);
	HRESULT(STDMETHODCALLTYPE * GetSchemaHiveMountName) (ITargetInfo * This, BSTR * pMountName);
	END_INTERFACE
}  ITargetInfoVtbl;
interface ITargetInfo
{
	CONST_VTBL struct ITargetInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITargetInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITargetInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITargetInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITargetInfo_GetTargetMode(This,TargetMode) ( (This)->lpVtbl -> GetTargetMode(This,TargetMode) )
#define ITargetInfo_SetTargetMode(This,TargetMode) ( (This)->lpVtbl -> SetTargetMode(This,TargetMode) )
#define ITargetInfo_GetTemporaryStoreLocation(This,TemporaryStoreLocation) ( (This)->lpVtbl -> GetTemporaryStoreLocation(This,TemporaryStoreLocation) )
#define ITargetInfo_SetTemporaryStoreLocation(This,TemporaryStoreLocation) ( (This)->lpVtbl -> SetTemporaryStoreLocation(This,TemporaryStoreLocation) )
#define ITargetInfo_GetTargetID(This,TargetID) ( (This)->lpVtbl -> GetTargetID(This,TargetID) )
#define ITargetInfo_SetTargetID(This,TargetID) ( (This)->lpVtbl -> SetTargetID(This,TargetID) )
#define ITargetInfo_GetTargetProcessorArchitecture(This,ProcessorArchitecture) ( (This)->lpVtbl -> GetTargetProcessorArchitecture(This,ProcessorArchitecture) )
#define ITargetInfo_SetTargetProcessorArchitecture(This,ProcessorArchitecture) ( (This)->lpVtbl -> SetTargetProcessorArchitecture(This,ProcessorArchitecture) )
#define ITargetInfo_GetProperty(This,Offline,Property,Value) ( (This)->lpVtbl -> GetProperty(This,Offline,Property,Value) )
#define ITargetInfo_SetProperty(This,Offline,Property,Value) ( (This)->lpVtbl -> SetProperty(This,Offline,Property,Value) )
#define ITargetInfo_GetEnumerator(This,Enumerator) ( (This)->lpVtbl -> GetEnumerator(This,Enumerator) )
#define ITargetInfo_ExpandTarget(This,Offline,Location,ExpandedLocation) ( (This)->lpVtbl -> ExpandTarget(This,Offline,Location,ExpandedLocation) )
#define ITargetInfo_ExpandTargetPath(This,Offline,Location,ExpandedLocation) ( (This)->lpVtbl -> ExpandTargetPath(This,Offline,Location,ExpandedLocation) )
#define ITargetInfo_SetModulePath(This,Module,Path) ( (This)->lpVtbl -> SetModulePath(This,Module,Path) )
#define ITargetInfo_LoadModule(This,Module,ModuleHandle) ( (This)->lpVtbl -> LoadModule(This,Module,ModuleHandle) )
#define ITargetInfo_SetWow64Context(This,InstallerModule,Wow64Context) ( (This)->lpVtbl -> SetWow64Context(This,InstallerModule,Wow64Context) )
#define ITargetInfo_TranslateWow64(This,ClientArchitecture,Value,TranslatedValue) ( (This)->lpVtbl -> TranslateWow64(This,ClientArchitecture,Value,TranslatedValue) )
#define ITargetInfo_SetSchemaHiveLocation(This,pwzHiveDir) ( (This)->lpVtbl -> SetSchemaHiveLocation(This,pwzHiveDir) )
#define ITargetInfo_GetSchemaHiveLocation(This,pHiveLocation) ( (This)->lpVtbl -> GetSchemaHiveLocation(This,pHiveLocation) )
#define ITargetInfo_SetSchemaHiveMountName(This,pwzMountName) ( (This)->lpVtbl -> SetSchemaHiveMountName(This,pwzMountName) )
#define ITargetInfo_GetSchemaHiveMountName(This,pMountName) ( (This)->lpVtbl -> GetSchemaHiveMountName(This,pMountName) )
#endif
#endif
#define LINK_STORE_TO_ENGINE_INSTANCE    0x00000001
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0003_v0_0_s_ifspec;
#ifndef __ISettingsEngine_INTERFACE_DEFINED__
#define __ISettingsEngine_INTERFACE_DEFINED__
extern const IID IID_ISettingsEngine;
typedef struct ISettingsEngineVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISettingsEngine * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISettingsEngine * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISettingsEngine * This);
	HRESULT(STDMETHODCALLTYPE * GetNamespaces) (ISettingsEngine * This, WcmNamespaceEnumerationFlags Flags, void *Reserved, IItemEnumerator ** Namespaces);
	HRESULT(STDMETHODCALLTYPE * GetNamespace) (ISettingsEngine * This, ISettingsIdentity * SettingsID, WcmNamespaceAccess Access, void *Reserved, ISettingsNamespace ** NamespaceItem);
	HRESULT(STDMETHODCALLTYPE * GetErrorDescription) (ISettingsEngine * This, LONG HResult, BSTR * Message);
	HRESULT(STDMETHODCALLTYPE * CreateSettingsIdentity) (ISettingsEngine * This, ISettingsIdentity ** SettingsID);
	HRESULT(STDMETHODCALLTYPE * GetStoreStatus) (ISettingsEngine * This, void *Reserved, WcmUserStatus * Status);
	HRESULT(STDMETHODCALLTYPE * LoadStore) (ISettingsEngine * This, DWORD Flags);
	HRESULT(STDMETHODCALLTYPE * UnloadStore) (ISettingsEngine * This, void *Reserved);
	HRESULT(STDMETHODCALLTYPE * RegisterNamespace) (ISettingsEngine * This, ISettingsIdentity * SettingsID, IStream * Stream, BOOL PushSettings, VARIANT * Results);
	HRESULT(STDMETHODCALLTYPE * UnregisterNamespace) (ISettingsEngine * This, ISettingsIdentity * SettingsID, BOOL RemoveSettings);
	HRESULT(STDMETHODCALLTYPE * CreateTargetInfo) (ISettingsEngine * This, ITargetInfo ** Target);
	HRESULT(STDMETHODCALLTYPE * GetTargetInfo) (ISettingsEngine * This, ITargetInfo ** Target);
	HRESULT(STDMETHODCALLTYPE * SetTargetInfo) (ISettingsEngine * This, ITargetInfo * Target);
	HRESULT(STDMETHODCALLTYPE * CreateSettingsContext) (ISettingsEngine * This, DWORD Flags, void *Reserved, ISettingsContext ** SettingsContext);
	HRESULT(STDMETHODCALLTYPE * SetSettingsContext) (ISettingsEngine * This, ISettingsContext * SettingsContext);
	HRESULT(STDMETHODCALLTYPE * ApplySettingsContext) (ISettingsEngine * This, ISettingsContext * SettingsContext, LPWSTR ** pppwzIdentities, SIZE_T * pcIdentities);
	HRESULT(STDMETHODCALLTYPE * GetSettingsContext) (ISettingsEngine * This, ISettingsContext ** SettingsContext);
	END_INTERFACE
}  ISettingsEngineVtbl;
interface ISettingsEngine
{
	CONST_VTBL struct ISettingsEngineVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISettingsEngine_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISettingsEngine_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISettingsEngine_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISettingsEngine_GetNamespaces(This,Flags,Reserved,Namespaces) ( (This)->lpVtbl -> GetNamespaces(This,Flags,Reserved,Namespaces) )
#define ISettingsEngine_GetNamespace(This,SettingsID,Access,Reserved,NamespaceItem) ( (This)->lpVtbl -> GetNamespace(This,SettingsID,Access,Reserved,NamespaceItem) )
#define ISettingsEngine_GetErrorDescription(This,HResult,Message) ( (This)->lpVtbl -> GetErrorDescription(This,HResult,Message) )
#define ISettingsEngine_CreateSettingsIdentity(This,SettingsID) ( (This)->lpVtbl -> CreateSettingsIdentity(This,SettingsID) )
#define ISettingsEngine_GetStoreStatus(This,Reserved,Status) ( (This)->lpVtbl -> GetStoreStatus(This,Reserved,Status) )
#define ISettingsEngine_LoadStore(This,Flags) ( (This)->lpVtbl -> LoadStore(This,Flags) )
#define ISettingsEngine_UnloadStore(This,Reserved) ( (This)->lpVtbl -> UnloadStore(This,Reserved) )
#define ISettingsEngine_RegisterNamespace(This,SettingsID,Stream,PushSettings,Results) ( (This)->lpVtbl -> RegisterNamespace(This,SettingsID,Stream,PushSettings,Results) )
#define ISettingsEngine_UnregisterNamespace(This,SettingsID,RemoveSettings) ( (This)->lpVtbl -> UnregisterNamespace(This,SettingsID,RemoveSettings) )
#define ISettingsEngine_CreateTargetInfo(This,Target) ( (This)->lpVtbl -> CreateTargetInfo(This,Target) )
#define ISettingsEngine_GetTargetInfo(This,Target) ( (This)->lpVtbl -> GetTargetInfo(This,Target) )
#define ISettingsEngine_SetTargetInfo(This,Target) ( (This)->lpVtbl -> SetTargetInfo(This,Target) )
#define ISettingsEngine_CreateSettingsContext(This,Flags,Reserved,SettingsContext) ( (This)->lpVtbl -> CreateSettingsContext(This,Flags,Reserved,SettingsContext) )
#define ISettingsEngine_SetSettingsContext(This,SettingsContext) ( (This)->lpVtbl -> SetSettingsContext(This,SettingsContext) )
#define ISettingsEngine_ApplySettingsContext(This,SettingsContext,pppwzIdentities,pcIdentities) ( (This)->lpVtbl -> ApplySettingsContext(This,SettingsContext,pppwzIdentities,pcIdentities) )
#define ISettingsEngine_GetSettingsContext(This,SettingsContext) ( (This)->lpVtbl -> GetSettingsContext(This,SettingsContext) )
#endif
#endif
#ifndef __ISettingsItem_INTERFACE_DEFINED__
#define __ISettingsItem_INTERFACE_DEFINED__
extern const IID IID_ISettingsItem;
typedef struct ISettingsItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISettingsItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISettingsItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISettingsItem * This);
	HRESULT(STDMETHODCALLTYPE * GetName) (ISettingsItem * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * GetValue) (ISettingsItem * This, VARIANT * Value);
	HRESULT(STDMETHODCALLTYPE * SetValue) (ISettingsItem * This, const VARIANT * Value);
	HRESULT(STDMETHODCALLTYPE * GetSettingType) (ISettingsItem * This, WcmSettingType * Type);
	HRESULT(STDMETHODCALLTYPE * GetDataType) (ISettingsItem * This, WcmDataType * Type);
	HRESULT(STDMETHODCALLTYPE * GetValueRaw) (ISettingsItem * This, BYTE ** Data, ULONG * DataSize);
	HRESULT(STDMETHODCALLTYPE * SetValueRaw) (ISettingsItem * This, LONG DataType, const BYTE * Data, ULONG DataSize);
	HRESULT(STDMETHODCALLTYPE * HasChild) (ISettingsItem * This, BOOL * ItemHasChild);
	HRESULT(STDMETHODCALLTYPE * Children) (ISettingsItem * This, IItemEnumerator ** Children);
	HRESULT(STDMETHODCALLTYPE * GetChild) (ISettingsItem * This, const WCHAR * Name, ISettingsItem ** Child);
	HRESULT(STDMETHODCALLTYPE * GetSettingByPath) (ISettingsItem * This, const WCHAR * Path, ISettingsItem ** Setting);
	HRESULT(STDMETHODCALLTYPE * CreateSettingByPath) (ISettingsItem * This, const WCHAR * Path, ISettingsItem ** Setting);
	HRESULT(STDMETHODCALLTYPE * RemoveSettingByPath) (ISettingsItem * This, const WCHAR * Path);
	HRESULT(STDMETHODCALLTYPE * GetListKeyInformation) (ISettingsItem * This, BSTR * KeyName, WcmDataType * DataType);
	HRESULT(STDMETHODCALLTYPE * CreateListElement) (ISettingsItem * This, const VARIANT * KeyData, ISettingsItem ** Child);
	HRESULT(STDMETHODCALLTYPE * RemoveListElement) (ISettingsItem * This, LPCWSTR ElementName);
	HRESULT(STDMETHODCALLTYPE * Attributes) (ISettingsItem * This, IItemEnumerator ** Attributes);
	HRESULT(STDMETHODCALLTYPE * GetAttribute) (ISettingsItem * This, const WCHAR * Name, VARIANT * Value);
	HRESULT(STDMETHODCALLTYPE * GetPath) (ISettingsItem * This, BSTR * Path);
	HRESULT(STDMETHODCALLTYPE * GetRestrictionFacets) (ISettingsItem * This, WcmRestrictionFacets * RestrictionFacets);
	HRESULT(STDMETHODCALLTYPE * GetRestriction) (ISettingsItem * This, WcmRestrictionFacets RestrictionFacet, VARIANT * FacetData);
	HRESULT(STDMETHODCALLTYPE * GetKeyValue) (ISettingsItem * This, VARIANT * Value);
	END_INTERFACE
}  ISettingsItemVtbl;
interface ISettingsItem
{
	CONST_VTBL struct ISettingsItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISettingsItem_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISettingsItem_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISettingsItem_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISettingsItem_GetName(This,Name) ( (This)->lpVtbl -> GetName(This,Name) )
#define ISettingsItem_GetValue(This,Value) ( (This)->lpVtbl -> GetValue(This,Value) )
#define ISettingsItem_SetValue(This,Value) ( (This)->lpVtbl -> SetValue(This,Value) )
#define ISettingsItem_GetSettingType(This,Type) ( (This)->lpVtbl -> GetSettingType(This,Type) )
#define ISettingsItem_GetDataType(This,Type) ( (This)->lpVtbl -> GetDataType(This,Type) )
#define ISettingsItem_GetValueRaw(This,Data,DataSize) ( (This)->lpVtbl -> GetValueRaw(This,Data,DataSize) )
#define ISettingsItem_SetValueRaw(This,DataType,Data,DataSize) ( (This)->lpVtbl -> SetValueRaw(This,DataType,Data,DataSize) )
#define ISettingsItem_HasChild(This,ItemHasChild) ( (This)->lpVtbl -> HasChild(This,ItemHasChild) )
#define ISettingsItem_Children(This,Children) ( (This)->lpVtbl -> Children(This,Children) )
#define ISettingsItem_GetChild(This,Name,Child) ( (This)->lpVtbl -> GetChild(This,Name,Child) )
#define ISettingsItem_GetSettingByPath(This,Path,Setting) ( (This)->lpVtbl -> GetSettingByPath(This,Path,Setting) )
#define ISettingsItem_CreateSettingByPath(This,Path,Setting) ( (This)->lpVtbl -> CreateSettingByPath(This,Path,Setting) )
#define ISettingsItem_RemoveSettingByPath(This,Path) ( (This)->lpVtbl -> RemoveSettingByPath(This,Path) )
#define ISettingsItem_GetListKeyInformation(This,KeyName,DataType) ( (This)->lpVtbl -> GetListKeyInformation(This,KeyName,DataType) )
#define ISettingsItem_CreateListElement(This,KeyData,Child) ( (This)->lpVtbl -> CreateListElement(This,KeyData,Child) )
#define ISettingsItem_RemoveListElement(This,ElementName) ( (This)->lpVtbl -> RemoveListElement(This,ElementName) )
#define ISettingsItem_Attributes(This,Attributes) ( (This)->lpVtbl -> Attributes(This,Attributes) )
#define ISettingsItem_GetAttribute(This,Name,Value) ( (This)->lpVtbl -> GetAttribute(This,Name,Value) )
#define ISettingsItem_GetPath(This,Path) ( (This)->lpVtbl -> GetPath(This,Path) )
#define ISettingsItem_GetRestrictionFacets(This,RestrictionFacets) ( (This)->lpVtbl -> GetRestrictionFacets(This,RestrictionFacets) )
#define ISettingsItem_GetRestriction(This,RestrictionFacet,FacetData) ( (This)->lpVtbl -> GetRestriction(This,RestrictionFacet,FacetData) )
#define ISettingsItem_GetKeyValue(This,Value) ( (This)->lpVtbl -> GetKeyValue(This,Value) )
#endif
#endif
#ifndef __ISettingsNamespace_INTERFACE_DEFINED__
#define __ISettingsNamespace_INTERFACE_DEFINED__
extern const IID IID_ISettingsNamespace;
typedef struct ISettingsNamespaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISettingsNamespace * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISettingsNamespace * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISettingsNamespace * This);
	HRESULT(STDMETHODCALLTYPE * GetIdentity) (ISettingsNamespace * This, ISettingsIdentity ** SettingsID);
	HRESULT(STDMETHODCALLTYPE * Settings) (ISettingsNamespace * This, IItemEnumerator ** Settings);
	HRESULT(STDMETHODCALLTYPE * Save) (ISettingsNamespace * This, BOOL PushSettings, ISettingsResult ** Result);
	HRESULT(STDMETHODCALLTYPE * GetSettingByPath) (ISettingsNamespace * This, const WCHAR * Path, ISettingsItem ** Setting);
	HRESULT(STDMETHODCALLTYPE * CreateSettingByPath) (ISettingsNamespace * This, const WCHAR * Path, ISettingsItem ** Setting);
	HRESULT(STDMETHODCALLTYPE * RemoveSettingByPath) (ISettingsNamespace * This, const WCHAR * Path);
	HRESULT(STDMETHODCALLTYPE * GetAttribute) (ISettingsNamespace * This, const WCHAR * Name, VARIANT * Value);
	END_INTERFACE
}  ISettingsNamespaceVtbl;
interface ISettingsNamespace
{
	CONST_VTBL struct ISettingsNamespaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISettingsNamespace_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISettingsNamespace_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISettingsNamespace_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISettingsNamespace_GetIdentity(This,SettingsID) ( (This)->lpVtbl -> GetIdentity(This,SettingsID) )
#define ISettingsNamespace_Settings(This,Settings) ( (This)->lpVtbl -> Settings(This,Settings) )
#define ISettingsNamespace_Save(This,PushSettings,Result) ( (This)->lpVtbl -> Save(This,PushSettings,Result) )
#define ISettingsNamespace_GetSettingByPath(This,Path,Setting) ( (This)->lpVtbl -> GetSettingByPath(This,Path,Setting) )
#define ISettingsNamespace_CreateSettingByPath(This,Path,Setting) ( (This)->lpVtbl -> CreateSettingByPath(This,Path,Setting) )
#define ISettingsNamespace_RemoveSettingByPath(This,Path) ( (This)->lpVtbl -> RemoveSettingByPath(This,Path) )
#define ISettingsNamespace_GetAttribute(This,Name,Value) ( (This)->lpVtbl -> GetAttribute(This,Name,Value) )
#endif
#endif
#ifndef __ISettingsResult_INTERFACE_DEFINED__
#define __ISettingsResult_INTERFACE_DEFINED__
extern const IID IID_ISettingsResult;
typedef struct ISettingsResultVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISettingsResult * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISettingsResult * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISettingsResult * This);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (ISettingsResult * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * GetErrorCode) (ISettingsResult * This, HRESULT * hrOut);
	HRESULT(STDMETHODCALLTYPE * GetContextDescription) (ISettingsResult * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * GetLine) (ISettingsResult * This, DWORD * dwLine);
	HRESULT(STDMETHODCALLTYPE * GetColumn) (ISettingsResult * This, DWORD * dwColumn);
	HRESULT(STDMETHODCALLTYPE * GetSource) (ISettingsResult * This, BSTR * file);
	END_INTERFACE
}  ISettingsResultVtbl;
interface ISettingsResult
{
	CONST_VTBL struct ISettingsResultVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISettingsResult_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISettingsResult_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISettingsResult_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISettingsResult_GetDescription(This,description) ( (This)->lpVtbl -> GetDescription(This,description) )
#define ISettingsResult_GetErrorCode(This,hrOut) ( (This)->lpVtbl -> GetErrorCode(This,hrOut) )
#define ISettingsResult_GetContextDescription(This,description) ( (This)->lpVtbl -> GetContextDescription(This,description) )
#define ISettingsResult_GetLine(This,dwLine) ( (This)->lpVtbl -> GetLine(This,dwLine) )
#define ISettingsResult_GetColumn(This,dwColumn) ( (This)->lpVtbl -> GetColumn(This,dwColumn) )
#define ISettingsResult_GetSource(This,file) ( (This)->lpVtbl -> GetSource(This,file) )
#endif
#endif
#define LIMITED_VALIDATION_MODE    0x00000001
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0007_v0_0_s_ifspec;
#ifndef __ISettingsContext_INTERFACE_DEFINED__
#define __ISettingsContext_INTERFACE_DEFINED__
extern const IID IID_ISettingsContext;
typedef struct ISettingsContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISettingsContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISettingsContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISettingsContext * This);
	HRESULT(STDMETHODCALLTYPE * Serialize) (ISettingsContext * This, IStream * pStream, ITargetInfo * pTarget);
	HRESULT(STDMETHODCALLTYPE * Deserialize) (ISettingsContext * This, IStream * pStream, ITargetInfo * pTarget, ISettingsResult *** pppResults, SIZE_T * pcResultCount);
	HRESULT(STDMETHODCALLTYPE * SetUserData) (ISettingsContext * This, void *pUserData);
	HRESULT(STDMETHODCALLTYPE * GetUserData) (ISettingsContext * This, void **pUserData);
	HRESULT(STDMETHODCALLTYPE * GetNamespaces) (ISettingsContext * This, IItemEnumerator ** ppNamespaceIds);
	HRESULT(STDMETHODCALLTYPE * GetStoredSettings) (ISettingsContext * This, ISettingsIdentity * pIdentity, IItemEnumerator ** ppAddedSettings, IItemEnumerator ** ppModifiedSettings, IItemEnumerator ** ppDeletedSettings);
	HRESULT(STDMETHODCALLTYPE * RevertSetting) (ISettingsContext * This, ISettingsIdentity * pIdentity, LPCWSTR pwzSetting);
	END_INTERFACE
}  ISettingsContextVtbl;
interface ISettingsContext
{
	CONST_VTBL struct ISettingsContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISettingsContext_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISettingsContext_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISettingsContext_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISettingsContext_Serialize(This,pStream,pTarget) ( (This)->lpVtbl -> Serialize(This,pStream,pTarget) )
#define ISettingsContext_Deserialize(This,pStream,pTarget,pppResults,pcResultCount) ( (This)->lpVtbl -> Deserialize(This,pStream,pTarget,pppResults,pcResultCount) )
#define ISettingsContext_SetUserData(This,pUserData) ( (This)->lpVtbl -> SetUserData(This,pUserData) )
#define ISettingsContext_GetUserData(This,pUserData) ( (This)->lpVtbl -> GetUserData(This,pUserData) )
#define ISettingsContext_GetNamespaces(This,ppNamespaceIds) ( (This)->lpVtbl -> GetNamespaces(This,ppNamespaceIds) )
#define ISettingsContext_GetStoredSettings(This,pIdentity,ppAddedSettings,ppModifiedSettings,ppDeletedSettings) ( (This)->lpVtbl -> GetStoredSettings(This,pIdentity,ppAddedSettings,ppModifiedSettings,ppDeletedSettings) )
#define ISettingsContext_RevertSetting(This,pIdentity,pwzSetting) ( (This)->lpVtbl -> RevertSetting(This,pIdentity,pwzSetting) )
#endif
#endif
#ifndef __Wcm_LIBRARY_DEFINED__
#define __Wcm_LIBRARY_DEFINED__
extern const IID LIBID_Wcm;
extern const CLSID CLSID_SettingsEngine;
#endif
#endif
