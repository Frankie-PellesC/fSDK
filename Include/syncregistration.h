/*+@@file@@----------------------------------------------------------------*//*!
 \file		syncregistration.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 02:13:38 2016
 \date		Modified on Sat Sep 17 02:13:38 2016
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
#ifndef __syncregistration_h__
#define __syncregistration_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ISyncProviderRegistration_FWD_DEFINED__
#define __ISyncProviderRegistration_FWD_DEFINED__
typedef interface ISyncProviderRegistration ISyncProviderRegistration;
#endif
#ifndef __IEnumSyncProviderConfigUIInfos_FWD_DEFINED__
#define __IEnumSyncProviderConfigUIInfos_FWD_DEFINED__
typedef interface IEnumSyncProviderConfigUIInfos IEnumSyncProviderConfigUIInfos;
#endif
#ifndef __IEnumSyncProviderInfos_FWD_DEFINED__
#define __IEnumSyncProviderInfos_FWD_DEFINED__
typedef interface IEnumSyncProviderInfos IEnumSyncProviderInfos;
#endif
#ifndef __ISyncProviderInfo_FWD_DEFINED__
#define __ISyncProviderInfo_FWD_DEFINED__
typedef interface ISyncProviderInfo ISyncProviderInfo;
#endif
#ifndef __ISyncProviderConfigUIInfo_FWD_DEFINED__
#define __ISyncProviderConfigUIInfo_FWD_DEFINED__
typedef interface ISyncProviderConfigUIInfo ISyncProviderConfigUIInfo;
#endif
#ifndef __ISyncProviderConfigUI_FWD_DEFINED__
#define __ISyncProviderConfigUI_FWD_DEFINED__
typedef interface ISyncProviderConfigUI ISyncProviderConfigUI;
#endif
#ifndef __IRegisteredSyncProvider_FWD_DEFINED__
#define __IRegisteredSyncProvider_FWD_DEFINED__
typedef interface IRegisteredSyncProvider IRegisteredSyncProvider;
#endif
#ifndef __ISyncRegistrationChange_FWD_DEFINED__
#define __ISyncRegistrationChange_FWD_DEFINED__
typedef interface ISyncRegistrationChange ISyncRegistrationChange;
#endif
#ifndef __ISyncProviderRegistration_FWD_DEFINED__
#define __ISyncProviderRegistration_FWD_DEFINED__
typedef interface ISyncProviderRegistration ISyncProviderRegistration;
#endif
#ifndef __IEnumSyncProviderConfigUIInfos_FWD_DEFINED__
#define __IEnumSyncProviderConfigUIInfos_FWD_DEFINED__
typedef interface IEnumSyncProviderConfigUIInfos IEnumSyncProviderConfigUIInfos;
#endif
#ifndef __IEnumSyncProviderInfos_FWD_DEFINED__
#define __IEnumSyncProviderInfos_FWD_DEFINED__
typedef interface IEnumSyncProviderInfos IEnumSyncProviderInfos;
#endif
#ifndef __ISyncProviderInfo_FWD_DEFINED__
#define __ISyncProviderInfo_FWD_DEFINED__
typedef interface ISyncProviderInfo ISyncProviderInfo;
#endif
#ifndef __ISyncProviderConfigUIInfo_FWD_DEFINED__
#define __ISyncProviderConfigUIInfo_FWD_DEFINED__
typedef interface ISyncProviderConfigUIInfo ISyncProviderConfigUIInfo;
#endif
#ifndef __ISyncProviderConfigUI_FWD_DEFINED__
#define __ISyncProviderConfigUI_FWD_DEFINED__
typedef interface ISyncProviderConfigUI ISyncProviderConfigUI;
#endif
#ifndef __ISyncRegistrationChange_FWD_DEFINED__
#define __ISyncRegistrationChange_FWD_DEFINED__
typedef interface ISyncRegistrationChange ISyncRegistrationChange;
#endif
#ifndef __SyncProviderRegistration_FWD_DEFINED__
#define __SyncProviderRegistration_FWD_DEFINED__
typedef struct SyncProviderRegistration SyncProviderRegistration;
#endif
#include <oleidl.h>
#include <propsys.h>
#define SCC_DEFAULT ((DWORD)0x00000000)
#define SCC_CAN_CREATE_WITHOUT_UI ((DWORD)0x00000001)
#define SCC_CAN_MODIFY_WITHOUT_UI ((DWORD)0x00000002)
#define SCC_CREATE_NOT_SUPPORTED ((DWORD)0x00000004)
#define SCC_MODIFY_NOT_SUPPORTED ((DWORD)0x00000008)
#define SPC_DEFAULT ((DWORD)0x00000000)
#define SYNC_PROVIDER_STATE_ENABLED  ((DWORD)0x00000001)
#define SYNC_PROVIDER_STATE_DIRTY    ((DWORD)0x00000002)
#define SYNC_PROVIDER_CONFIGURATION_VERSION ((DWORD)0x00000001)
#define SYNC_PROVIDER_CONFIGUI_CONFIGURATION_VERSION ((DWORD)0x00000001)
#define SYNC_32_BIT_SUPPORTED ((DWORD)0x00000001)
#define SYNC_64_BIT_SUPPORTED ((DWORD)0x00000002)
DEFINE_PROPERTYKEY(PKEY_PROVIDER_INSTANCEID, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 2);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_CLSID, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 3);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_CONFIGUI, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 4);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_CONTENTTYPE, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 5);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_CAPABILITIES, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 6);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_SUPPORTED_ARCHITECTURE, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 7);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_NAME, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 8);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_DESCRIPTION, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 9);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_TOOLTIPS, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 10);
DEFINE_PROPERTYKEY(PKEY_PROVIDER_ICON, 0x84179e61, 0x60f6, 0x4c1c, 0x88, 0xed, 0xf1, 0xc5, 0x31, 0xb3, 0x2b, 0xda, 11);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_INSTANCEID, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 2);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_CLSID, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 3);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_CONTENTTYPE, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 4);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_CAPABILITIES, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 5);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_SUPPORTED_ARCHITECTURE, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 6);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_IS_GLOBAL, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 7);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_NAME, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 8);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_DESCRIPTION, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 9);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_TOOLTIPS, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 10);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_ICON, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 11);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_MENUITEM_NOUI, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 12);
DEFINE_PROPERTYKEY(PKEY_CONFIGUI_MENUITEM, 0x554b24ea, 0xe8e3, 0x45ba, 0x93, 0x52, 0xdf, 0xb5, 0x61, 0xe1, 0x71, 0xe4, 13);
typedef struct _SyncProviderConfiguration
{
	DWORD dwVersion;
	GUID guidInstanceId;
	CLSID clsidProvider;
	GUID guidConfigUIInstanceId;
	GUID guidContentType;
	DWORD dwCapabilities;
	DWORD dwSupportedArchitecture;
} SyncProviderConfiguration;
typedef struct _SyncProviderConfigUIConfiguration
{
	DWORD dwVersion;
	GUID guidInstanceId;
	CLSID clsidConfigUI;
	GUID guidContentType;
	DWORD dwCapabilities;
	DWORD dwSupportedArchitecture;
	BOOL fIsGlobal;
} SyncProviderConfigUIConfiguration;
extern RPC_IF_HANDLE __MIDL_itf_syncregistration_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncregistration_0000_0000_v0_0_s_ifspec;
#ifndef __ISyncProviderRegistration_INTERFACE_DEFINED__
#define __ISyncProviderRegistration_INTERFACE_DEFINED__
extern const IID IID_ISyncProviderRegistration;
typedef struct ISyncProviderRegistrationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncProviderRegistration * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncProviderRegistration * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncProviderRegistration * This);
	HRESULT(STDMETHODCALLTYPE * CreateSyncProviderConfigUIRegistrationInstance) (ISyncProviderRegistration * This, const SyncProviderConfigUIConfiguration * pConfigUIConfig, ISyncProviderConfigUIInfo ** ppConfigUIInfo);
	HRESULT(STDMETHODCALLTYPE * UnregisterSyncProviderConfigUI) (ISyncProviderRegistration * This, LPCGUID pguidInstanceId);
	HRESULT(STDMETHODCALLTYPE * EnumerateSyncProviderConfigUIs) (ISyncProviderRegistration * This, LPCGUID pguidContentType, DWORD dwSupportedArchitecture, IEnumSyncProviderConfigUIInfos ** ppEnumSyncProviderConfigUIInfos);
	HRESULT(STDMETHODCALLTYPE * CreateSyncProviderRegistrationInstance) (ISyncProviderRegistration * This, const SyncProviderConfiguration * pProviderConfiguration, ISyncProviderInfo ** ppProviderInfo);
	HRESULT(STDMETHODCALLTYPE * UnregisterSyncProvider) (ISyncProviderRegistration * This, LPCGUID pguidInstanceId);
	HRESULT(STDMETHODCALLTYPE * GetSyncProviderConfigUIInfoforProvider) (ISyncProviderRegistration * This, LPCGUID pguidProviderInstanceId, ISyncProviderConfigUIInfo ** ppProviderConfigUIInfo);
	HRESULT(STDMETHODCALLTYPE * EnumerateSyncProviders) (ISyncProviderRegistration * This, LPCGUID pguidContentType, DWORD dwStateFlagsToFilterMask, DWORD dwStateFlagsToFilter, REFCLSID refProviderClsId, DWORD dwSupportedArchitecture, IEnumSyncProviderInfos ** ppEnumSyncProviderInfos);
	HRESULT(STDMETHODCALLTYPE * GetSyncProviderInfo) (ISyncProviderRegistration * This, LPCGUID pguidInstanceId, ISyncProviderInfo ** ppProviderInfo);
	HRESULT(STDMETHODCALLTYPE * GetSyncProviderFromInstanceId) (ISyncProviderRegistration * This, LPCGUID pguidInstanceId, DWORD dwClsContext, IRegisteredSyncProvider ** ppSyncProvider);
	HRESULT(STDMETHODCALLTYPE * GetSyncProviderConfigUIInfo) (ISyncProviderRegistration * This, LPCGUID pguidInstanceId, ISyncProviderConfigUIInfo ** ppConfigUIInfo);
	HRESULT(STDMETHODCALLTYPE * GetSyncProviderConfigUIFromInstanceId) (ISyncProviderRegistration * This, LPCGUID pguidInstanceId, DWORD dwClsContext, ISyncProviderConfigUI ** ppConfigUI);
	HRESULT(STDMETHODCALLTYPE * GetSyncProviderState) (ISyncProviderRegistration * This, LPCGUID pguidInstanceId, DWORD * pdwStateFlags);
	HRESULT(STDMETHODCALLTYPE * SetSyncProviderState) (ISyncProviderRegistration * This, LPCGUID pguidInstanceId, DWORD dwStateFlagsMask, DWORD dwStateFlags);
	HRESULT(STDMETHODCALLTYPE * RegisterForEvent) (ISyncProviderRegistration * This, HANDLE * phEvent);
	HRESULT(STDMETHODCALLTYPE * RevokeEvent) (ISyncProviderRegistration * This, HANDLE hEvent);
	HRESULT(STDMETHODCALLTYPE * GetChange) (ISyncProviderRegistration * This, HANDLE hEvent, ISyncRegistrationChange ** ppChange);
	END_INTERFACE
}  ISyncProviderRegistrationVtbl;
interface ISyncProviderRegistration
{
	CONST_VTBL struct ISyncProviderRegistrationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncProviderRegistration_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncProviderRegistration_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncProviderRegistration_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncProviderRegistration_CreateSyncProviderConfigUIRegistrationInstance(This,pConfigUIConfig,ppConfigUIInfo) ( (This)->lpVtbl -> CreateSyncProviderConfigUIRegistrationInstance(This,pConfigUIConfig,ppConfigUIInfo) )
#define ISyncProviderRegistration_UnregisterSyncProviderConfigUI(This,pguidInstanceId) ( (This)->lpVtbl -> UnregisterSyncProviderConfigUI(This,pguidInstanceId) )
#define ISyncProviderRegistration_EnumerateSyncProviderConfigUIs(This,pguidContentType,dwSupportedArchitecture,ppEnumSyncProviderConfigUIInfos) ( (This)->lpVtbl -> EnumerateSyncProviderConfigUIs(This,pguidContentType,dwSupportedArchitecture,ppEnumSyncProviderConfigUIInfos) )
#define ISyncProviderRegistration_CreateSyncProviderRegistrationInstance(This,pProviderConfiguration,ppProviderInfo) ( (This)->lpVtbl -> CreateSyncProviderRegistrationInstance(This,pProviderConfiguration,ppProviderInfo) )
#define ISyncProviderRegistration_UnregisterSyncProvider(This,pguidInstanceId) ( (This)->lpVtbl -> UnregisterSyncProvider(This,pguidInstanceId) )
#define ISyncProviderRegistration_GetSyncProviderConfigUIInfoforProvider(This,pguidProviderInstanceId,ppProviderConfigUIInfo) ( (This)->lpVtbl -> GetSyncProviderConfigUIInfoforProvider(This,pguidProviderInstanceId,ppProviderConfigUIInfo) )
#define ISyncProviderRegistration_EnumerateSyncProviders(This,pguidContentType,dwStateFlagsToFilterMask,dwStateFlagsToFilter,refProviderClsId,dwSupportedArchitecture,ppEnumSyncProviderInfos) ( (This)->lpVtbl -> EnumerateSyncProviders(This,pguidContentType,dwStateFlagsToFilterMask,dwStateFlagsToFilter,refProviderClsId,dwSupportedArchitecture,ppEnumSyncProviderInfos) )
#define ISyncProviderRegistration_GetSyncProviderInfo(This,pguidInstanceId,ppProviderInfo) ( (This)->lpVtbl -> GetSyncProviderInfo(This,pguidInstanceId,ppProviderInfo) )
#define ISyncProviderRegistration_GetSyncProviderFromInstanceId(This,pguidInstanceId,dwClsContext,ppSyncProvider) ( (This)->lpVtbl -> GetSyncProviderFromInstanceId(This,pguidInstanceId,dwClsContext,ppSyncProvider) )
#define ISyncProviderRegistration_GetSyncProviderConfigUIInfo(This,pguidInstanceId,ppConfigUIInfo) ( (This)->lpVtbl -> GetSyncProviderConfigUIInfo(This,pguidInstanceId,ppConfigUIInfo) )
#define ISyncProviderRegistration_GetSyncProviderConfigUIFromInstanceId(This,pguidInstanceId,dwClsContext,ppConfigUI) ( (This)->lpVtbl -> GetSyncProviderConfigUIFromInstanceId(This,pguidInstanceId,dwClsContext,ppConfigUI) )
#define ISyncProviderRegistration_GetSyncProviderState(This,pguidInstanceId,pdwStateFlags) ( (This)->lpVtbl -> GetSyncProviderState(This,pguidInstanceId,pdwStateFlags) )
#define ISyncProviderRegistration_SetSyncProviderState(This,pguidInstanceId,dwStateFlagsMask,dwStateFlags) ( (This)->lpVtbl -> SetSyncProviderState(This,pguidInstanceId,dwStateFlagsMask,dwStateFlags) )
#define ISyncProviderRegistration_RegisterForEvent(This,phEvent) ( (This)->lpVtbl -> RegisterForEvent(This,phEvent) )
#define ISyncProviderRegistration_RevokeEvent(This,hEvent) ( (This)->lpVtbl -> RevokeEvent(This,hEvent) )
#define ISyncProviderRegistration_GetChange(This,hEvent,ppChange) ( (This)->lpVtbl -> GetChange(This,hEvent,ppChange) )
#endif
#endif
#ifndef __IEnumSyncProviderConfigUIInfos_INTERFACE_DEFINED__
#define __IEnumSyncProviderConfigUIInfos_INTERFACE_DEFINED__
extern const IID IID_IEnumSyncProviderConfigUIInfos;
typedef struct IEnumSyncProviderConfigUIInfosVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumSyncProviderConfigUIInfos * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumSyncProviderConfigUIInfos * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumSyncProviderConfigUIInfos * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumSyncProviderConfigUIInfos * This, ULONG cFactories, ISyncProviderConfigUIInfo ** ppSyncProviderConfigUIInfo, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumSyncProviderConfigUIInfos * This, ULONG cFactories);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumSyncProviderConfigUIInfos * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumSyncProviderConfigUIInfos * This, IEnumSyncProviderConfigUIInfos ** ppEnum);
	END_INTERFACE
}  IEnumSyncProviderConfigUIInfosVtbl;
interface IEnumSyncProviderConfigUIInfos
{
	CONST_VTBL struct IEnumSyncProviderConfigUIInfosVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSyncProviderConfigUIInfos_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSyncProviderConfigUIInfos_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSyncProviderConfigUIInfos_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumSyncProviderConfigUIInfos_Next(This,cFactories,ppSyncProviderConfigUIInfo,pcFetched) ( (This)->lpVtbl -> Next(This,cFactories,ppSyncProviderConfigUIInfo,pcFetched) )
#define IEnumSyncProviderConfigUIInfos_Skip(This,cFactories) ( (This)->lpVtbl -> Skip(This,cFactories) )
#define IEnumSyncProviderConfigUIInfos_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumSyncProviderConfigUIInfos_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IEnumSyncProviderInfos_INTERFACE_DEFINED__
#define __IEnumSyncProviderInfos_INTERFACE_DEFINED__
extern const IID IID_IEnumSyncProviderInfos;
typedef struct IEnumSyncProviderInfosVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumSyncProviderInfos * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumSyncProviderInfos * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumSyncProviderInfos * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumSyncProviderInfos * This, ULONG cInstances, ISyncProviderInfo ** ppSyncProviderInfo, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumSyncProviderInfos * This, ULONG cInstances);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumSyncProviderInfos * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumSyncProviderInfos * This, IEnumSyncProviderInfos ** ppEnum);
	END_INTERFACE
}  IEnumSyncProviderInfosVtbl;
interface IEnumSyncProviderInfos
{
	CONST_VTBL struct IEnumSyncProviderInfosVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSyncProviderInfos_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSyncProviderInfos_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSyncProviderInfos_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumSyncProviderInfos_Next(This,cInstances,ppSyncProviderInfo,pcFetched) ( (This)->lpVtbl -> Next(This,cInstances,ppSyncProviderInfo,pcFetched) )
#define IEnumSyncProviderInfos_Skip(This,cInstances) ( (This)->lpVtbl -> Skip(This,cInstances) )
#define IEnumSyncProviderInfos_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumSyncProviderInfos_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __ISyncProviderInfo_INTERFACE_DEFINED__
#define __ISyncProviderInfo_INTERFACE_DEFINED__
extern const IID IID_ISyncProviderInfo;
typedef struct ISyncProviderInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncProviderInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncProviderInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncProviderInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ISyncProviderInfo * This, DWORD * cProps);
	HRESULT(STDMETHODCALLTYPE * GetAt) (ISyncProviderInfo * This, DWORD iProp, PROPERTYKEY * pkey);
	HRESULT(STDMETHODCALLTYPE * GetValue) (ISyncProviderInfo * This, REFPROPERTYKEY key, PROPVARIANT * pv);
	HRESULT(STDMETHODCALLTYPE * SetValue) (ISyncProviderInfo * This, REFPROPERTYKEY key, REFPROPVARIANT propvar);
	HRESULT(STDMETHODCALLTYPE * Commit) (ISyncProviderInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetSyncProvider) (ISyncProviderInfo * This, DWORD dwClsContext, IRegisteredSyncProvider ** ppSyncProvider);
	END_INTERFACE
}  ISyncProviderInfoVtbl;
interface ISyncProviderInfo
{
	CONST_VTBL struct ISyncProviderInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncProviderInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncProviderInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncProviderInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncProviderInfo_GetCount(This,cProps) ( (This)->lpVtbl -> GetCount(This,cProps) )
#define ISyncProviderInfo_GetAt(This,iProp,pkey) ( (This)->lpVtbl -> GetAt(This,iProp,pkey) )
#define ISyncProviderInfo_GetValue(This,key,pv) ( (This)->lpVtbl -> GetValue(This,key,pv) )
#define ISyncProviderInfo_SetValue(This,key,propvar) ( (This)->lpVtbl -> SetValue(This,key,propvar) )
#define ISyncProviderInfo_Commit(This) ( (This)->lpVtbl -> Commit(This) )
#define ISyncProviderInfo_GetSyncProvider(This,dwClsContext,ppSyncProvider) ( (This)->lpVtbl -> GetSyncProvider(This,dwClsContext,ppSyncProvider) )
#endif
#endif
#ifndef __ISyncProviderConfigUIInfo_INTERFACE_DEFINED__
#define __ISyncProviderConfigUIInfo_INTERFACE_DEFINED__
extern const IID IID_ISyncProviderConfigUIInfo;
typedef struct ISyncProviderConfigUIInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncProviderConfigUIInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncProviderConfigUIInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncProviderConfigUIInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ISyncProviderConfigUIInfo * This, DWORD * cProps);
	HRESULT(STDMETHODCALLTYPE * GetAt) (ISyncProviderConfigUIInfo * This, DWORD iProp, PROPERTYKEY * pkey);
	HRESULT(STDMETHODCALLTYPE * GetValue) (ISyncProviderConfigUIInfo * This, REFPROPERTYKEY key, PROPVARIANT * pv);
	HRESULT(STDMETHODCALLTYPE * SetValue) (ISyncProviderConfigUIInfo * This, REFPROPERTYKEY key, REFPROPVARIANT propvar);
	HRESULT(STDMETHODCALLTYPE * Commit) (ISyncProviderConfigUIInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetSyncProviderConfigUI) (ISyncProviderConfigUIInfo * This, DWORD dwClsContext, ISyncProviderConfigUI ** ppSyncProviderConfigUI);
	END_INTERFACE
}  ISyncProviderConfigUIInfoVtbl;
interface ISyncProviderConfigUIInfo
{
	CONST_VTBL struct ISyncProviderConfigUIInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncProviderConfigUIInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncProviderConfigUIInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncProviderConfigUIInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncProviderConfigUIInfo_GetCount(This,cProps) ( (This)->lpVtbl -> GetCount(This,cProps) )
#define ISyncProviderConfigUIInfo_GetAt(This,iProp,pkey) ( (This)->lpVtbl -> GetAt(This,iProp,pkey) )
#define ISyncProviderConfigUIInfo_GetValue(This,key,pv) ( (This)->lpVtbl -> GetValue(This,key,pv) )
#define ISyncProviderConfigUIInfo_SetValue(This,key,propvar) ( (This)->lpVtbl -> SetValue(This,key,propvar) )
#define ISyncProviderConfigUIInfo_Commit(This) ( (This)->lpVtbl -> Commit(This) )
#define ISyncProviderConfigUIInfo_GetSyncProviderConfigUI(This,dwClsContext,ppSyncProviderConfigUI) ( (This)->lpVtbl -> GetSyncProviderConfigUI(This,dwClsContext,ppSyncProviderConfigUI) )
#endif
#endif
#ifndef __ISyncProviderConfigUI_INTERFACE_DEFINED__
#define __ISyncProviderConfigUI_INTERFACE_DEFINED__
extern const IID IID_ISyncProviderConfigUI;
typedef struct ISyncProviderConfigUIVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncProviderConfigUI * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncProviderConfigUI * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncProviderConfigUI * This);
	HRESULT(STDMETHODCALLTYPE * Init) (ISyncProviderConfigUI * This, LPCGUID pguidInstanceId, LPCGUID pguidContentType, IPropertyStore * pConfigurationProperties);
	HRESULT(STDMETHODCALLTYPE * GetRegisteredProperties) (ISyncProviderConfigUI * This, IPropertyStore ** ppConfigUIProperties);
	HRESULT(STDMETHODCALLTYPE * CreateAndRegisterNewSyncProvider) (ISyncProviderConfigUI * This, HWND hwndParent, IUnknown * pUnkContext, ISyncProviderInfo ** ppProviderInfo);
	HRESULT(STDMETHODCALLTYPE * ModifySyncProvider) (ISyncProviderConfigUI * This, HWND hwndParent, IUnknown * pUnkContext, ISyncProviderInfo * pProviderInfo);
	END_INTERFACE
}  ISyncProviderConfigUIVtbl;
interface ISyncProviderConfigUI
{
	CONST_VTBL struct ISyncProviderConfigUIVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncProviderConfigUI_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncProviderConfigUI_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncProviderConfigUI_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncProviderConfigUI_Init(This,pguidInstanceId,pguidContentType,pConfigurationProperties) ( (This)->lpVtbl -> Init(This,pguidInstanceId,pguidContentType,pConfigurationProperties) )
#define ISyncProviderConfigUI_GetRegisteredProperties(This,ppConfigUIProperties) ( (This)->lpVtbl -> GetRegisteredProperties(This,ppConfigUIProperties) )
#define ISyncProviderConfigUI_CreateAndRegisterNewSyncProvider(This,hwndParent,pUnkContext,ppProviderInfo) ( (This)->lpVtbl -> CreateAndRegisterNewSyncProvider(This,hwndParent,pUnkContext,ppProviderInfo) )
#define ISyncProviderConfigUI_ModifySyncProvider(This,hwndParent,pUnkContext,pProviderInfo) ( (This)->lpVtbl -> ModifySyncProvider(This,hwndParent,pUnkContext,pProviderInfo) )
#endif
#endif
#ifndef __IRegisteredSyncProvider_INTERFACE_DEFINED__
#define __IRegisteredSyncProvider_INTERFACE_DEFINED__
extern const IID IID_IRegisteredSyncProvider;
typedef struct IRegisteredSyncProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRegisteredSyncProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRegisteredSyncProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRegisteredSyncProvider * This);
	HRESULT(STDMETHODCALLTYPE * Init) (IRegisteredSyncProvider * This, LPCGUID pguidInstanceId, LPCGUID pguidContentType, IPropertyStore * pContextPropertyStore);
	HRESULT(STDMETHODCALLTYPE * GetInstanceId) (IRegisteredSyncProvider * This, GUID * pguidInstanceId);
	HRESULT(STDMETHODCALLTYPE * Reset) (IRegisteredSyncProvider * This);
	END_INTERFACE
}  IRegisteredSyncProviderVtbl;
interface IRegisteredSyncProvider
{
	CONST_VTBL struct IRegisteredSyncProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRegisteredSyncProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRegisteredSyncProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRegisteredSyncProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRegisteredSyncProvider_Init(This,pguidInstanceId,pguidContentType,pContextPropertyStore) ( (This)->lpVtbl -> Init(This,pguidInstanceId,pguidContentType,pContextPropertyStore) )
#define IRegisteredSyncProvider_GetInstanceId(This,pguidInstanceId) ( (This)->lpVtbl -> GetInstanceId(This,pguidInstanceId) )
#define IRegisteredSyncProvider_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_syncregistration_0000_0007_0001
{
	SRE_PROVIDER_ADDED = 0,
	SRE_PROVIDER_REMOVED = (SRE_PROVIDER_ADDED + 1),
	SRE_PROVIDER_UPDATED = (SRE_PROVIDER_REMOVED + 1),
	SRE_PROVIDER_STATE_CHANGED = (SRE_PROVIDER_UPDATED + 1),
	SRE_CONFIGUI_ADDED = (SRE_PROVIDER_STATE_CHANGED + 1),
	SRE_CONFIGUI_REMOVED = (SRE_CONFIGUI_ADDED + 1),
	SRE_CONFIGUI_UPDATED = (SRE_CONFIGUI_REMOVED + 1)
} SYNC_REGISTRATION_EVENT;
extern RPC_IF_HANDLE __MIDL_itf_syncregistration_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncregistration_0000_0007_v0_0_s_ifspec;
#ifndef __ISyncRegistrationChange_INTERFACE_DEFINED__
#define __ISyncRegistrationChange_INTERFACE_DEFINED__
extern const IID IID_ISyncRegistrationChange;
typedef struct ISyncRegistrationChangeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncRegistrationChange * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncRegistrationChange * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncRegistrationChange * This);
	HRESULT(STDMETHODCALLTYPE * GetEvent) (ISyncRegistrationChange * This, SYNC_REGISTRATION_EVENT * psreEvent);
	HRESULT(STDMETHODCALLTYPE * GetInstanceId) (ISyncRegistrationChange * This, LPGUID pguidInstanceId);
	END_INTERFACE
}  ISyncRegistrationChangeVtbl;
interface ISyncRegistrationChange
{
	CONST_VTBL struct ISyncRegistrationChangeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncRegistrationChange_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncRegistrationChange_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncRegistrationChange_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncRegistrationChange_GetEvent(This,psreEvent) ( (This)->lpVtbl -> GetEvent(This,psreEvent) )
#define ISyncRegistrationChange_GetInstanceId(This,pguidInstanceId) ( (This)->lpVtbl -> GetInstanceId(This,pguidInstanceId) )
#endif
#endif
#ifndef __SyncRegistration_LIBRARY_DEFINED__
#define __SyncRegistration_LIBRARY_DEFINED__
extern const IID LIBID_SyncRegistration;
extern const CLSID CLSID_SyncProviderRegistration;
#endif
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
#endif
