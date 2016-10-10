/*+@@file@@----------------------------------------------------------------*//*!
 \file		adhoc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  1 16:26:39 2016
 \date		Modified on Fri Jul  1 16:26:39 2016
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
#ifndef __adhoc_h__
#define __adhoc_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDot11AdHocManager_FWD_DEFINED__
#define __IDot11AdHocManager_FWD_DEFINED__
typedef interface IDot11AdHocManager IDot11AdHocManager;
#endif
#ifndef __IDot11AdHocManagerNotificationSink_FWD_DEFINED__
#define __IDot11AdHocManagerNotificationSink_FWD_DEFINED__
typedef interface IDot11AdHocManagerNotificationSink IDot11AdHocManagerNotificationSink;
#endif
#ifndef __IEnumDot11AdHocNetworks_FWD_DEFINED__
#define __IEnumDot11AdHocNetworks_FWD_DEFINED__
typedef interface IEnumDot11AdHocNetworks IEnumDot11AdHocNetworks;
#endif
#ifndef __IDot11AdHocNetwork_FWD_DEFINED__
#define __IDot11AdHocNetwork_FWD_DEFINED__
typedef interface IDot11AdHocNetwork IDot11AdHocNetwork;
#endif
#ifndef __IDot11AdHocNetworkNotificationSink_FWD_DEFINED__
#define __IDot11AdHocNetworkNotificationSink_FWD_DEFINED__
typedef interface IDot11AdHocNetworkNotificationSink IDot11AdHocNetworkNotificationSink;
#endif
#ifndef __IDot11AdHocInterface_FWD_DEFINED__
#define __IDot11AdHocInterface_FWD_DEFINED__
typedef interface IDot11AdHocInterface IDot11AdHocInterface;
#endif
#ifndef __IEnumDot11AdHocInterfaces_FWD_DEFINED__
#define __IEnumDot11AdHocInterfaces_FWD_DEFINED__
typedef interface IEnumDot11AdHocInterfaces IEnumDot11AdHocInterfaces;
#endif
#ifndef __IEnumDot11AdHocSecuritySettings_FWD_DEFINED__
#define __IEnumDot11AdHocSecuritySettings_FWD_DEFINED__
typedef interface IEnumDot11AdHocSecuritySettings IEnumDot11AdHocSecuritySettings;
#endif
#ifndef __IDot11AdHocSecuritySettings_FWD_DEFINED__
#define __IDot11AdHocSecuritySettings_FWD_DEFINED__
typedef interface IDot11AdHocSecuritySettings IDot11AdHocSecuritySettings;
#endif
#ifndef __IDot11AdHocInterfaceNotificationSink_FWD_DEFINED__
#define __IDot11AdHocInterfaceNotificationSink_FWD_DEFINED__
typedef interface IDot11AdHocInterfaceNotificationSink IDot11AdHocInterfaceNotificationSink;
#endif
#ifndef __Dot11AdHocManager_FWD_DEFINED__
#define __Dot11AdHocManager_FWD_DEFINED__
typedef struct Dot11AdHocManager Dot11AdHocManager;
#endif
#include "oaidl.h"
extern const CLSID CLSID_AdHocManager;
typedef enum tagDOT11_ADHOC_CIPHER_ALGORITHM
{
	DOT11_ADHOC_CIPHER_ALGO_INVALID = -1,
	DOT11_ADHOC_CIPHER_ALGO_NONE = 0,
	DOT11_ADHOC_CIPHER_ALGO_CCMP = 0x4,
	DOT11_ADHOC_CIPHER_ALGO_WEP = 0x101
} DOT11_ADHOC_CIPHER_ALGORITHM;
typedef enum tagDOT11_ADHOC_AUTH_ALGORITHM
{
	DOT11_ADHOC_AUTH_ALGO_INVALID = -1,
	DOT11_ADHOC_AUTH_ALGO_80211_OPEN = 1,
	DOT11_ADHOC_AUTH_ALGO_RSNA_PSK = 7
} DOT11_ADHOC_AUTH_ALGORITHM;
typedef enum tagDOT11_ADHOC_NETWORK_CONNECTION_STATUS
{
	DOT11_ADHOC_NETWORK_CONNECTION_STATUS_INVALID = 0,
	DOT11_ADHOC_NETWORK_CONNECTION_STATUS_DISCONNECTED = 11,
	DOT11_ADHOC_NETWORK_CONNECTION_STATUS_CONNECTING = 12,
	DOT11_ADHOC_NETWORK_CONNECTION_STATUS_CONNECTED = 13,
	DOT11_ADHOC_NETWORK_CONNECTION_STATUS_FORMED = 14
} DOT11_ADHOC_NETWORK_CONNECTION_STATUS;
typedef enum tagDOT11_ADHOC_CONNECT_FAIL_REASON
{
	DOT11_ADHOC_CONNECT_FAIL_DOMAIN_MISMATCH = 0,
	DOT11_ADHOC_CONNECT_FAIL_PASSPHRASE_MISMATCH = 1,
	DOT11_ADHOC_CONNECT_FAIL_OTHER = 2
} DOT11_ADHOC_CONNECT_FAIL_REASON;
extern RPC_IF_HANDLE __MIDL_itf_adhoc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_adhoc_0000_0000_v0_0_s_ifspec;
#ifndef __IDot11AdHocManager_INTERFACE_DEFINED__
#define __IDot11AdHocManager_INTERFACE_DEFINED__
extern const IID IID_IDot11AdHocManager;
typedef struct IDot11AdHocManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDot11AdHocManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDot11AdHocManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDot11AdHocManager * This);
	HRESULT(STDMETHODCALLTYPE * CreateNetwork) (IDot11AdHocManager * This, LPCWSTR Name, LPCWSTR Password, LONG GeographicalId, IDot11AdHocInterface * pInterface, IDot11AdHocSecuritySettings * pSecurity, GUID * pContextGuid, IDot11AdHocNetwork ** pIAdHoc);
	HRESULT(STDMETHODCALLTYPE * CommitCreatedNetwork) (IDot11AdHocManager * This, IDot11AdHocNetwork * pIAdHoc, BOOLEAN fSaveProfile, BOOLEAN fMakeSavedProfileUserSpecific);
	HRESULT(STDMETHODCALLTYPE * GetIEnumDot11AdHocNetworks) (IDot11AdHocManager * This, GUID * pContextGuid, IEnumDot11AdHocNetworks ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetIEnumDot11AdHocInterfaces) (IDot11AdHocManager * This, IEnumDot11AdHocInterfaces ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetNetwork) (IDot11AdHocManager * This, GUID * NetworkSignature, IDot11AdHocNetwork ** pNetwork);
	END_INTERFACE
}  IDot11AdHocManagerVtbl;
interface IDot11AdHocManager
{
	CONST_VTBL struct IDot11AdHocManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDot11AdHocManager_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDot11AdHocManager_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDot11AdHocManager_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDot11AdHocManager_CreateNetwork(This,Name,Password,GeographicalId,pInterface,pSecurity,pContextGuid,pIAdHoc)    ( (This)->lpVtbl -> CreateNetwork(This,Name,Password,GeographicalId,pInterface,pSecurity,pContextGuid,pIAdHoc) )
#define IDot11AdHocManager_CommitCreatedNetwork(This,pIAdHoc,fSaveProfile,fMakeSavedProfileUserSpecific)    ( (This)->lpVtbl -> CommitCreatedNetwork(This,pIAdHoc,fSaveProfile,fMakeSavedProfileUserSpecific) )
#define IDot11AdHocManager_GetIEnumDot11AdHocNetworks(This,pContextGuid,ppEnum)    ( (This)->lpVtbl -> GetIEnumDot11AdHocNetworks(This,pContextGuid,ppEnum) )
#define IDot11AdHocManager_GetIEnumDot11AdHocInterfaces(This,ppEnum)    ( (This)->lpVtbl -> GetIEnumDot11AdHocInterfaces(This,ppEnum) )
#define IDot11AdHocManager_GetNetwork(This,NetworkSignature,pNetwork)    ( (This)->lpVtbl -> GetNetwork(This,NetworkSignature,pNetwork) )
#endif
#endif
#ifndef __IDot11AdHocManagerNotificationSink_INTERFACE_DEFINED__
#define __IDot11AdHocManagerNotificationSink_INTERFACE_DEFINED__
extern const IID IID_IDot11AdHocManagerNotificationSink;
typedef struct IDot11AdHocManagerNotificationSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDot11AdHocManagerNotificationSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDot11AdHocManagerNotificationSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDot11AdHocManagerNotificationSink * This);
	HRESULT(STDMETHODCALLTYPE * OnNetworkAdd) (IDot11AdHocManagerNotificationSink * This, IDot11AdHocNetwork * pIAdHocNetwork);
	HRESULT(STDMETHODCALLTYPE * OnNetworkRemove) (IDot11AdHocManagerNotificationSink * This, GUID * Signature);
	HRESULT(STDMETHODCALLTYPE * OnInterfaceAdd) (IDot11AdHocManagerNotificationSink * This, IDot11AdHocInterface * pIAdHocInterface);
	HRESULT(STDMETHODCALLTYPE * OnInterfaceRemove) (IDot11AdHocManagerNotificationSink * This, GUID * Signature);
	END_INTERFACE
}  IDot11AdHocManagerNotificationSinkVtbl;
interface IDot11AdHocManagerNotificationSink
{
	CONST_VTBL struct IDot11AdHocManagerNotificationSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDot11AdHocManagerNotificationSink_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDot11AdHocManagerNotificationSink_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDot11AdHocManagerNotificationSink_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDot11AdHocManagerNotificationSink_OnNetworkAdd(This,pIAdHocNetwork)    ( (This)->lpVtbl -> OnNetworkAdd(This,pIAdHocNetwork) )
#define IDot11AdHocManagerNotificationSink_OnNetworkRemove(This,Signature)    ( (This)->lpVtbl -> OnNetworkRemove(This,Signature) )
#define IDot11AdHocManagerNotificationSink_OnInterfaceAdd(This,pIAdHocInterface)    ( (This)->lpVtbl -> OnInterfaceAdd(This,pIAdHocInterface) )
#define IDot11AdHocManagerNotificationSink_OnInterfaceRemove(This,Signature)    ( (This)->lpVtbl -> OnInterfaceRemove(This,Signature) )
#endif
#endif
#ifndef __IEnumDot11AdHocNetworks_INTERFACE_DEFINED__
#define __IEnumDot11AdHocNetworks_INTERFACE_DEFINED__
extern const IID IID_IEnumDot11AdHocNetworks;
typedef struct IEnumDot11AdHocNetworksVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumDot11AdHocNetworks * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumDot11AdHocNetworks * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumDot11AdHocNetworks * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumDot11AdHocNetworks * This, ULONG cElt, IDot11AdHocNetwork ** rgElt, ULONG * pcEltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumDot11AdHocNetworks * This, ULONG cElt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumDot11AdHocNetworks * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumDot11AdHocNetworks * This, IEnumDot11AdHocNetworks ** ppEnum);
	END_INTERFACE
}  IEnumDot11AdHocNetworksVtbl;
interface IEnumDot11AdHocNetworks
{
	CONST_VTBL struct IEnumDot11AdHocNetworksVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDot11AdHocNetworks_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDot11AdHocNetworks_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumDot11AdHocNetworks_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumDot11AdHocNetworks_Next(This,cElt,rgElt,pcEltFetched)    ( (This)->lpVtbl -> Next(This,cElt,rgElt,pcEltFetched) )
#define IEnumDot11AdHocNetworks_Skip(This,cElt)    ( (This)->lpVtbl -> Skip(This,cElt) )
#define IEnumDot11AdHocNetworks_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumDot11AdHocNetworks_Clone(This,ppEnum)    ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IDot11AdHocNetwork_INTERFACE_DEFINED__
#define __IDot11AdHocNetwork_INTERFACE_DEFINED__
extern const IID IID_IDot11AdHocNetwork;
typedef struct IDot11AdHocNetworkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDot11AdHocNetwork * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDot11AdHocNetwork * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDot11AdHocNetwork * This);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IDot11AdHocNetwork * This, DOT11_ADHOC_NETWORK_CONNECTION_STATUS * eStatus);
	HRESULT(STDMETHODCALLTYPE * GetSSID) (IDot11AdHocNetwork * This, LPWSTR * ppszwSSID);
	HRESULT(STDMETHODCALLTYPE * HasProfile) (IDot11AdHocNetwork * This, BOOLEAN * pf11d);
	HRESULT(STDMETHODCALLTYPE * GetProfileName) (IDot11AdHocNetwork * This, LPWSTR * ppszwProfileName);
	HRESULT(STDMETHODCALLTYPE * DeleteProfile) (IDot11AdHocNetwork * This);
	HRESULT(STDMETHODCALLTYPE * GetSignalQuality) (IDot11AdHocNetwork * This, ULONG * puStrengthValue, ULONG * puStrengthMax);
	HRESULT(STDMETHODCALLTYPE * GetSecuritySetting) (IDot11AdHocNetwork * This, IDot11AdHocSecuritySettings ** pAdHocSecuritySetting);
	HRESULT(STDMETHODCALLTYPE * GetContextGuid) (IDot11AdHocNetwork * This, GUID * pContextGuid);
	HRESULT(STDMETHODCALLTYPE * GetSignature) (IDot11AdHocNetwork * This, GUID * pSignature);
	HRESULT(STDMETHODCALLTYPE * GetInterface) (IDot11AdHocNetwork * This, IDot11AdHocInterface ** pAdHocInterface);
	HRESULT(STDMETHODCALLTYPE * Connect) (IDot11AdHocNetwork * This, LPCWSTR Passphrase, LONG GeographicalId, BOOLEAN fSaveProfile, BOOLEAN fMakeSavedProfileUserSpecific);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (IDot11AdHocNetwork * This);
	END_INTERFACE
}  IDot11AdHocNetworkVtbl;
interface IDot11AdHocNetwork
{
	CONST_VTBL struct IDot11AdHocNetworkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDot11AdHocNetwork_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDot11AdHocNetwork_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDot11AdHocNetwork_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDot11AdHocNetwork_GetStatus(This,eStatus)    ( (This)->lpVtbl -> GetStatus(This,eStatus) )
#define IDot11AdHocNetwork_GetSSID(This,ppszwSSID)    ( (This)->lpVtbl -> GetSSID(This,ppszwSSID) )
#define IDot11AdHocNetwork_HasProfile(This,pf11d)    ( (This)->lpVtbl -> HasProfile(This,pf11d) )
#define IDot11AdHocNetwork_GetProfileName(This,ppszwProfileName)    ( (This)->lpVtbl -> GetProfileName(This,ppszwProfileName) )
#define IDot11AdHocNetwork_DeleteProfile(This)    ( (This)->lpVtbl -> DeleteProfile(This) )
#define IDot11AdHocNetwork_GetSignalQuality(This,puStrengthValue,puStrengthMax)    ( (This)->lpVtbl -> GetSignalQuality(This,puStrengthValue,puStrengthMax) )
#define IDot11AdHocNetwork_GetSecuritySetting(This,pAdHocSecuritySetting)    ( (This)->lpVtbl -> GetSecuritySetting(This,pAdHocSecuritySetting) )
#define IDot11AdHocNetwork_GetContextGuid(This,pContextGuid)    ( (This)->lpVtbl -> GetContextGuid(This,pContextGuid) )
#define IDot11AdHocNetwork_GetSignature(This,pSignature)    ( (This)->lpVtbl -> GetSignature(This,pSignature) )
#define IDot11AdHocNetwork_GetInterface(This,pAdHocInterface)    ( (This)->lpVtbl -> GetInterface(This,pAdHocInterface) )
#define IDot11AdHocNetwork_Connect(This,Passphrase,GeographicalId,fSaveProfile,fMakeSavedProfileUserSpecific)    ( (This)->lpVtbl -> Connect(This,Passphrase,GeographicalId,fSaveProfile,fMakeSavedProfileUserSpecific) )
#define IDot11AdHocNetwork_Disconnect(This)    ( (This)->lpVtbl -> Disconnect(This) )
#endif
#endif
#ifndef __IDot11AdHocNetworkNotificationSink_INTERFACE_DEFINED__
#define __IDot11AdHocNetworkNotificationSink_INTERFACE_DEFINED__
extern const IID IID_IDot11AdHocNetworkNotificationSink;
typedef struct IDot11AdHocNetworkNotificationSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDot11AdHocNetworkNotificationSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDot11AdHocNetworkNotificationSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDot11AdHocNetworkNotificationSink * This);
	HRESULT(STDMETHODCALLTYPE * OnStatusChange) (IDot11AdHocNetworkNotificationSink * This, DOT11_ADHOC_NETWORK_CONNECTION_STATUS eStatus);
	HRESULT(STDMETHODCALLTYPE * OnConnectFail) (IDot11AdHocNetworkNotificationSink * This, DOT11_ADHOC_CONNECT_FAIL_REASON eFailReason);
	END_INTERFACE
}  IDot11AdHocNetworkNotificationSinkVtbl;
interface IDot11AdHocNetworkNotificationSink
{
	CONST_VTBL struct IDot11AdHocNetworkNotificationSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDot11AdHocNetworkNotificationSink_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDot11AdHocNetworkNotificationSink_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDot11AdHocNetworkNotificationSink_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDot11AdHocNetworkNotificationSink_OnStatusChange(This,eStatus)    ( (This)->lpVtbl -> OnStatusChange(This,eStatus) )
#define IDot11AdHocNetworkNotificationSink_OnConnectFail(This,eFailReason)    ( (This)->lpVtbl -> OnConnectFail(This,eFailReason) )
#endif
#endif
#ifndef __IDot11AdHocInterface_INTERFACE_DEFINED__
#define __IDot11AdHocInterface_INTERFACE_DEFINED__
extern const IID IID_IDot11AdHocInterface;
typedef struct IDot11AdHocInterfaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDot11AdHocInterface * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDot11AdHocInterface * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDot11AdHocInterface * This);
	HRESULT(STDMETHODCALLTYPE * GetDeviceSignature) (IDot11AdHocInterface * This, GUID * pSignature);
	HRESULT(STDMETHODCALLTYPE * GetFriendlyName) (IDot11AdHocInterface * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * IsDot11d) (IDot11AdHocInterface * This, BOOLEAN * pf11d);
	HRESULT(STDMETHODCALLTYPE * IsAdHocCapable) (IDot11AdHocInterface * This, BOOLEAN * pfAdHocCapable);
	HRESULT(STDMETHODCALLTYPE * IsRadioOn) (IDot11AdHocInterface * This, BOOLEAN * pfIsRadioOn);
	HRESULT(STDMETHODCALLTYPE * GetActiveNetwork) (IDot11AdHocInterface * This, IDot11AdHocNetwork ** ppNetwork);
	HRESULT(STDMETHODCALLTYPE * GetIEnumSecuritySettings) (IDot11AdHocInterface * This, IEnumDot11AdHocSecuritySettings ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetIEnumDot11AdHocNetworks) (IDot11AdHocInterface * This, GUID * pFilterGuid, IEnumDot11AdHocNetworks ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IDot11AdHocInterface * This, DOT11_ADHOC_NETWORK_CONNECTION_STATUS * pState);
	END_INTERFACE
}  IDot11AdHocInterfaceVtbl;
interface IDot11AdHocInterface
{
	CONST_VTBL struct IDot11AdHocInterfaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDot11AdHocInterface_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDot11AdHocInterface_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDot11AdHocInterface_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDot11AdHocInterface_GetDeviceSignature(This,pSignature)    ( (This)->lpVtbl -> GetDeviceSignature(This,pSignature) )
#define IDot11AdHocInterface_GetFriendlyName(This,ppszName)    ( (This)->lpVtbl -> GetFriendlyName(This,ppszName) )
#define IDot11AdHocInterface_IsDot11d(This,pf11d)    ( (This)->lpVtbl -> IsDot11d(This,pf11d) )
#define IDot11AdHocInterface_IsAdHocCapable(This,pfAdHocCapable)    ( (This)->lpVtbl -> IsAdHocCapable(This,pfAdHocCapable) )
#define IDot11AdHocInterface_IsRadioOn(This,pfIsRadioOn)    ( (This)->lpVtbl -> IsRadioOn(This,pfIsRadioOn) )
#define IDot11AdHocInterface_GetActiveNetwork(This,ppNetwork)    ( (This)->lpVtbl -> GetActiveNetwork(This,ppNetwork) )
#define IDot11AdHocInterface_GetIEnumSecuritySettings(This,ppEnum)    ( (This)->lpVtbl -> GetIEnumSecuritySettings(This,ppEnum) )
#define IDot11AdHocInterface_GetIEnumDot11AdHocNetworks(This,pFilterGuid,ppEnum)    ( (This)->lpVtbl -> GetIEnumDot11AdHocNetworks(This,pFilterGuid,ppEnum) )
#define IDot11AdHocInterface_GetStatus(This,pState)    ( (This)->lpVtbl -> GetStatus(This,pState) )
#endif
#endif
#ifndef __IEnumDot11AdHocInterfaces_INTERFACE_DEFINED__
#define __IEnumDot11AdHocInterfaces_INTERFACE_DEFINED__
extern const IID IID_IEnumDot11AdHocInterfaces;
typedef struct IEnumDot11AdHocInterfacesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumDot11AdHocInterfaces * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumDot11AdHocInterfaces * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumDot11AdHocInterfaces * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumDot11AdHocInterfaces * This, ULONG cElt, IDot11AdHocInterface ** rgElt, ULONG * pcEltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumDot11AdHocInterfaces * This, ULONG cElt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumDot11AdHocInterfaces * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumDot11AdHocInterfaces * This, IEnumDot11AdHocInterfaces ** ppEnum);
	END_INTERFACE
}  IEnumDot11AdHocInterfacesVtbl;
interface IEnumDot11AdHocInterfaces
{
	CONST_VTBL struct IEnumDot11AdHocInterfacesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDot11AdHocInterfaces_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDot11AdHocInterfaces_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumDot11AdHocInterfaces_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumDot11AdHocInterfaces_Next(This,cElt,rgElt,pcEltFetched)    ( (This)->lpVtbl -> Next(This,cElt,rgElt,pcEltFetched) )
#define IEnumDot11AdHocInterfaces_Skip(This,cElt)    ( (This)->lpVtbl -> Skip(This,cElt) )
#define IEnumDot11AdHocInterfaces_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumDot11AdHocInterfaces_Clone(This,ppEnum)    ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IEnumDot11AdHocSecuritySettings_INTERFACE_DEFINED__
#define __IEnumDot11AdHocSecuritySettings_INTERFACE_DEFINED__
extern const IID IID_IEnumDot11AdHocSecuritySettings;
typedef struct IEnumDot11AdHocSecuritySettingsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumDot11AdHocSecuritySettings * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumDot11AdHocSecuritySettings * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumDot11AdHocSecuritySettings * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumDot11AdHocSecuritySettings * This, ULONG cElt, IDot11AdHocSecuritySettings ** rgElt, ULONG * pcEltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumDot11AdHocSecuritySettings * This, ULONG cElt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumDot11AdHocSecuritySettings * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumDot11AdHocSecuritySettings * This, IEnumDot11AdHocSecuritySettings ** ppEnum);
	END_INTERFACE
}  IEnumDot11AdHocSecuritySettingsVtbl;
interface IEnumDot11AdHocSecuritySettings
{
	CONST_VTBL struct IEnumDot11AdHocSecuritySettingsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDot11AdHocSecuritySettings_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDot11AdHocSecuritySettings_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumDot11AdHocSecuritySettings_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumDot11AdHocSecuritySettings_Next(This,cElt,rgElt,pcEltFetched)    ( (This)->lpVtbl -> Next(This,cElt,rgElt,pcEltFetched) )
#define IEnumDot11AdHocSecuritySettings_Skip(This,cElt)    ( (This)->lpVtbl -> Skip(This,cElt) )
#define IEnumDot11AdHocSecuritySettings_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumDot11AdHocSecuritySettings_Clone(This,ppEnum)    ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IDot11AdHocSecuritySettings_INTERFACE_DEFINED__
#define __IDot11AdHocSecuritySettings_INTERFACE_DEFINED__
extern const IID IID_IDot11AdHocSecuritySettings;
typedef struct IDot11AdHocSecuritySettingsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDot11AdHocSecuritySettings * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDot11AdHocSecuritySettings * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDot11AdHocSecuritySettings * This);
	HRESULT(STDMETHODCALLTYPE * GetDot11AuthAlgorithm) (IDot11AdHocSecuritySettings * This, DOT11_ADHOC_AUTH_ALGORITHM * pAuth);
	HRESULT(STDMETHODCALLTYPE * GetDot11CipherAlgorithm) (IDot11AdHocSecuritySettings * This, DOT11_ADHOC_CIPHER_ALGORITHM * pCipher);
	END_INTERFACE
}  IDot11AdHocSecuritySettingsVtbl;
interface IDot11AdHocSecuritySettings
{
	CONST_VTBL struct IDot11AdHocSecuritySettingsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDot11AdHocSecuritySettings_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDot11AdHocSecuritySettings_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDot11AdHocSecuritySettings_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDot11AdHocSecuritySettings_GetDot11AuthAlgorithm(This,pAuth)    ( (This)->lpVtbl -> GetDot11AuthAlgorithm(This,pAuth) )
#define IDot11AdHocSecuritySettings_GetDot11CipherAlgorithm(This,pCipher)    ( (This)->lpVtbl -> GetDot11CipherAlgorithm(This,pCipher) )
#endif
#endif
#ifndef __IDot11AdHocInterfaceNotificationSink_INTERFACE_DEFINED__
#define __IDot11AdHocInterfaceNotificationSink_INTERFACE_DEFINED__
extern const IID IID_IDot11AdHocInterfaceNotificationSink;
typedef struct IDot11AdHocInterfaceNotificationSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDot11AdHocInterfaceNotificationSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDot11AdHocInterfaceNotificationSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDot11AdHocInterfaceNotificationSink * This);
	HRESULT(STDMETHODCALLTYPE * OnConnectionStatusChange) (IDot11AdHocInterfaceNotificationSink * This, DOT11_ADHOC_NETWORK_CONNECTION_STATUS eStatus);
	END_INTERFACE
}  IDot11AdHocInterfaceNotificationSinkVtbl;
interface IDot11AdHocInterfaceNotificationSink
{
	CONST_VTBL struct IDot11AdHocInterfaceNotificationSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDot11AdHocInterfaceNotificationSink_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDot11AdHocInterfaceNotificationSink_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDot11AdHocInterfaceNotificationSink_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDot11AdHocInterfaceNotificationSink_OnConnectionStatusChange(This,eStatus)    ( (This)->lpVtbl -> OnConnectionStatusChange(This,eStatus) )
#endif
#endif
#ifndef __ADHOCLib_LIBRARY_DEFINED__
#define __ADHOCLib_LIBRARY_DEFINED__
extern const IID LIBID_ADHOCLib;
extern const CLSID CLSID_Dot11AdHocManager;
#endif
#endif
