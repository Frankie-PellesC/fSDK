/*+@@file@@----------------------------------------------------------------*//*!
 \file		netlistmgr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 23:22:49 2016
 \date		Modified on Sun Sep  4 23:22:49 2016
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
#ifndef __netlistmgr_h__
#define __netlistmgr_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __INetworkListManager_FWD_DEFINED__
#define __INetworkListManager_FWD_DEFINED__
typedef interface INetworkListManager INetworkListManager;
#endif
#ifndef __INetworkListManagerEvents_FWD_DEFINED__
#define __INetworkListManagerEvents_FWD_DEFINED__
typedef interface INetworkListManagerEvents INetworkListManagerEvents;
#endif
#ifndef __INetwork_FWD_DEFINED__
#define __INetwork_FWD_DEFINED__
typedef interface INetwork INetwork;
#endif
#ifndef __IEnumNetworks_FWD_DEFINED__
#define __IEnumNetworks_FWD_DEFINED__
typedef interface IEnumNetworks IEnumNetworks;
#endif
#ifndef __INetworkEvents_FWD_DEFINED__
#define __INetworkEvents_FWD_DEFINED__
typedef interface INetworkEvents INetworkEvents;
#endif
#ifndef __INetworkConnection_FWD_DEFINED__
#define __INetworkConnection_FWD_DEFINED__
typedef interface INetworkConnection INetworkConnection;
#endif
#ifndef __IEnumNetworkConnections_FWD_DEFINED__
#define __IEnumNetworkConnections_FWD_DEFINED__
typedef interface IEnumNetworkConnections IEnumNetworkConnections;
#endif
#ifndef __INetworkConnectionEvents_FWD_DEFINED__
#define __INetworkConnectionEvents_FWD_DEFINED__
typedef interface INetworkConnectionEvents INetworkConnectionEvents;
#endif
#ifndef __NetworkListManager_FWD_DEFINED__
#define __NetworkListManager_FWD_DEFINED__
typedef struct NetworkListManager NetworkListManager;
#endif
#include "unknwn.h"
#include "objidl.h"
#include "oaidl.h"
#include "ocidl.h"
#define NA_DomainAuthenticationFailed  L"NA_DomainAuthenticationFailed"
#define NA_NetworkClass  L"NA_NetworkClass"
#define NA_NameSetByPolicy  L"NA_NameSetByPolicy"
#define NA_IconSetByPolicy  L"NA_IconSetByPolicy"
#define NA_DescriptionSetByPolicy  L"NA_DescriptionSetByPolicy"
#define NA_CategorySetByPolicy  L"NA_CategorySetByPolicy"
#define NA_NameReadOnly  L"NA_NameReadOnly"
#define NA_IconReadOnly  L"NA_IconReadOnly"
#define NA_DescriptionReadOnly  L"NA_DescriptionReadOnly"
#define NA_CategoryReadOnly  L"NA_CategoryReadOnly"
#define NA_AllowMerge  L"NA_AllowMerge"
#define NA_InternetConnectivityV4 L"NA_InternetConnectivityV4"
#define NA_InternetConnectivityV6 L"NA_InternetConnectivityV6"
typedef enum NLM_NETWORK_CLASS
{
	NLM_NETWORK_IDENTIFYING = 0x1,
	NLM_NETWORK_IDENTIFIED = 0x2,
	NLM_NETWORK_UNIDENTIFIED = 0x3
} NLM_NETWORK_CLASS;
typedef enum NLM_INTERNET_CONNECTIVITY
{
	NLM_INTERNET_CONNECTIVITY_WEBHIJACK = 0x1,
	NLM_INTERNET_CONNECTIVITY_PROXIED = 0x2,
	NLM_INTERNET_CONNECTIVITY_CORPORATE = 0x4
} NLM_INTERNET_CONNECTIVITY;
typedef enum NLM_CONNECTIVITY
{
	NLM_CONNECTIVITY_DISCONNECTED = 0,
	NLM_CONNECTIVITY_IPV4_NOTRAFFIC = 0x1,
	NLM_CONNECTIVITY_IPV6_NOTRAFFIC = 0x2,
	NLM_CONNECTIVITY_IPV4_SUBNET = 0x10,
	NLM_CONNECTIVITY_IPV4_LOCALNETWORK = 0x20,
	NLM_CONNECTIVITY_IPV4_INTERNET = 0x40,
	NLM_CONNECTIVITY_IPV6_SUBNET = 0x100,
	NLM_CONNECTIVITY_IPV6_LOCALNETWORK = 0x200,
	NLM_CONNECTIVITY_IPV6_INTERNET = 0x400
} NLM_CONNECTIVITY;
typedef enum NLM_DOMAIN_TYPE
{
	NLM_DOMAIN_TYPE_NON_DOMAIN_NETWORK = 0,
	NLM_DOMAIN_TYPE_DOMAIN_NETWORK = 0x1,
	NLM_DOMAIN_TYPE_DOMAIN_AUTHENTICATED = 0x2
} NLM_DOMAIN_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_netlistmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netlistmgr_0000_0000_v0_0_s_ifspec;
#ifndef __INetworkListManager_INTERFACE_DEFINED__
#define __INetworkListManager_INTERFACE_DEFINED__
typedef enum NLM_ENUM_NETWORK
{
	NLM_ENUM_NETWORK_CONNECTED = 0x1,
	NLM_ENUM_NETWORK_DISCONNECTED = 0x2,
	NLM_ENUM_NETWORK_ALL = 0x3
} NLM_ENUM_NETWORK;
extern const IID IID_INetworkListManager;
typedef struct INetworkListManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetworkListManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetworkListManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetworkListManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetworkListManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetworkListManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetworkListManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetworkListManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetNetworks) (INetworkListManager * This, NLM_ENUM_NETWORK Flags, IEnumNetworks ** ppEnumNetwork);
	HRESULT(STDMETHODCALLTYPE * GetNetwork) (INetworkListManager * This, GUID gdNetworkId, INetwork ** ppNetwork);
	HRESULT(STDMETHODCALLTYPE * GetNetworkConnections) (INetworkListManager * This, IEnumNetworkConnections ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetNetworkConnection) (INetworkListManager * This, GUID gdNetworkConnectionId, INetworkConnection ** ppNetworkConnection);
	HRESULT(STDMETHODCALLTYPE * get_IsConnectedToInternet) (INetworkListManager * This, VARIANT_BOOL * pbIsConnected);
	HRESULT(STDMETHODCALLTYPE * get_IsConnected) (INetworkListManager * This, VARIANT_BOOL * pbIsConnected);
	HRESULT(STDMETHODCALLTYPE * GetConnectivity) (INetworkListManager * This, NLM_CONNECTIVITY * pConnectivity);
	END_INTERFACE
}  INetworkListManagerVtbl;
interface INetworkListManager
{
	CONST_VTBL struct INetworkListManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetworkListManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetworkListManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetworkListManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetworkListManager_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetworkListManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetworkListManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetworkListManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetworkListManager_GetNetworks(This,Flags,ppEnumNetwork) ( (This)->lpVtbl -> GetNetworks(This,Flags,ppEnumNetwork) )
#define INetworkListManager_GetNetwork(This,gdNetworkId,ppNetwork) ( (This)->lpVtbl -> GetNetwork(This,gdNetworkId,ppNetwork) )
#define INetworkListManager_GetNetworkConnections(This,ppEnum) ( (This)->lpVtbl -> GetNetworkConnections(This,ppEnum) )
#define INetworkListManager_GetNetworkConnection(This,gdNetworkConnectionId,ppNetworkConnection) ( (This)->lpVtbl -> GetNetworkConnection(This,gdNetworkConnectionId,ppNetworkConnection) )
#define INetworkListManager_get_IsConnectedToInternet(This,pbIsConnected) ( (This)->lpVtbl -> get_IsConnectedToInternet(This,pbIsConnected) )
#define INetworkListManager_get_IsConnected(This,pbIsConnected) ( (This)->lpVtbl -> get_IsConnected(This,pbIsConnected) )
#define INetworkListManager_GetConnectivity(This,pConnectivity) ( (This)->lpVtbl -> GetConnectivity(This,pConnectivity) )
#endif
#endif
#ifndef __INetworkListManagerEvents_INTERFACE_DEFINED__
#define __INetworkListManagerEvents_INTERFACE_DEFINED__
extern const IID IID_INetworkListManagerEvents;
typedef struct INetworkListManagerEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetworkListManagerEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetworkListManagerEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetworkListManagerEvents * This);
	HRESULT(STDMETHODCALLTYPE * ConnectivityChanged) (INetworkListManagerEvents * This, NLM_CONNECTIVITY newConnectivity);
	END_INTERFACE
}  INetworkListManagerEventsVtbl;
interface INetworkListManagerEvents
{
	CONST_VTBL struct INetworkListManagerEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetworkListManagerEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetworkListManagerEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetworkListManagerEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetworkListManagerEvents_ConnectivityChanged(This,newConnectivity) ( (This)->lpVtbl -> ConnectivityChanged(This,newConnectivity) )
#endif
#endif
#ifndef __INetwork_INTERFACE_DEFINED__
#define __INetwork_INTERFACE_DEFINED__
typedef enum NLM_NETWORK_CATEGORY
{
	NLM_NETWORK_CATEGORY_PUBLIC = 0,
	NLM_NETWORK_CATEGORY_PRIVATE = 0x1,
	NLM_NETWORK_CATEGORY_DOMAIN_AUTHENTICATED = 0x2
} NLM_NETWORK_CATEGORY;
extern const IID IID_INetwork;
typedef struct INetworkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetwork * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetwork * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetwork * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetwork * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetwork * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetwork * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetwork * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetName) (INetwork * This, BSTR * pszNetworkName);
	HRESULT(STDMETHODCALLTYPE * SetName) (INetwork * This, BSTR szNetworkNewName);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (INetwork * This, BSTR * pszDescription);
	HRESULT(STDMETHODCALLTYPE * SetDescription) (INetwork * This, BSTR szDescription);
	HRESULT(STDMETHODCALLTYPE * GetNetworkId) (INetwork * This, GUID * pgdGuidNetworkId);
	HRESULT(STDMETHODCALLTYPE * GetDomainType) (INetwork * This, NLM_DOMAIN_TYPE * pNetworkType);
	HRESULT(STDMETHODCALLTYPE * GetNetworkConnections) (INetwork * This, IEnumNetworkConnections ** ppEnumNetworkConnection);
	HRESULT(STDMETHODCALLTYPE * GetTimeCreatedAndConnected) (INetwork * This, DWORD * pdwLowDateTimeCreated, DWORD * pdwHighDateTimeCreated, DWORD * pdwLowDateTimeConnected, DWORD * pdwHighDateTimeConnected);
	HRESULT(STDMETHODCALLTYPE * get_IsConnectedToInternet) (INetwork * This, VARIANT_BOOL * pbIsConnected);
	HRESULT(STDMETHODCALLTYPE * get_IsConnected) (INetwork * This, VARIANT_BOOL * pbIsConnected);
	HRESULT(STDMETHODCALLTYPE * GetConnectivity) (INetwork * This, NLM_CONNECTIVITY * pConnectivity);
	HRESULT(STDMETHODCALLTYPE * GetCategory) (INetwork * This, NLM_NETWORK_CATEGORY * pCategory);
	HRESULT(STDMETHODCALLTYPE * SetCategory) (INetwork * This, NLM_NETWORK_CATEGORY NewCategory);
	END_INTERFACE
}  INetworkVtbl;
interface INetwork
{
	CONST_VTBL struct INetworkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetwork_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetwork_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetwork_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetwork_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetwork_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetwork_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetwork_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetwork_GetName(This,pszNetworkName) ( (This)->lpVtbl -> GetName(This,pszNetworkName) )
#define INetwork_SetName(This,szNetworkNewName) ( (This)->lpVtbl -> SetName(This,szNetworkNewName) )
#define INetwork_GetDescription(This,pszDescription) ( (This)->lpVtbl -> GetDescription(This,pszDescription) )
#define INetwork_SetDescription(This,szDescription) ( (This)->lpVtbl -> SetDescription(This,szDescription) )
#define INetwork_GetNetworkId(This,pgdGuidNetworkId) ( (This)->lpVtbl -> GetNetworkId(This,pgdGuidNetworkId) )
#define INetwork_GetDomainType(This,pNetworkType) ( (This)->lpVtbl -> GetDomainType(This,pNetworkType) )
#define INetwork_GetNetworkConnections(This,ppEnumNetworkConnection) ( (This)->lpVtbl -> GetNetworkConnections(This,ppEnumNetworkConnection) )
#define INetwork_GetTimeCreatedAndConnected(This,pdwLowDateTimeCreated,pdwHighDateTimeCreated,pdwLowDateTimeConnected,pdwHighDateTimeConnected) ( (This)->lpVtbl -> GetTimeCreatedAndConnected(This,pdwLowDateTimeCreated,pdwHighDateTimeCreated,pdwLowDateTimeConnected,pdwHighDateTimeConnected) )
#define INetwork_get_IsConnectedToInternet(This,pbIsConnected) ( (This)->lpVtbl -> get_IsConnectedToInternet(This,pbIsConnected) )
#define INetwork_get_IsConnected(This,pbIsConnected) ( (This)->lpVtbl -> get_IsConnected(This,pbIsConnected) )
#define INetwork_GetConnectivity(This,pConnectivity) ( (This)->lpVtbl -> GetConnectivity(This,pConnectivity) )
#define INetwork_GetCategory(This,pCategory) ( (This)->lpVtbl -> GetCategory(This,pCategory) )
#define INetwork_SetCategory(This,NewCategory) ( (This)->lpVtbl -> SetCategory(This,NewCategory) )
#endif
#endif
#ifndef __IEnumNetworks_INTERFACE_DEFINED__
#define __IEnumNetworks_INTERFACE_DEFINED__
extern const IID IID_IEnumNetworks;
typedef struct IEnumNetworksVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumNetworks * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumNetworks * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumNetworks * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IEnumNetworks * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IEnumNetworks * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IEnumNetworks * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IEnumNetworks * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IEnumNetworks * This, IEnumVARIANT ** ppEnumVar);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumNetworks * This, ULONG celt, INetwork ** rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumNetworks * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumNetworks * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumNetworks * This, IEnumNetworks ** ppEnumNetwork);
	END_INTERFACE
}  IEnumNetworksVtbl;
interface IEnumNetworks
{
	CONST_VTBL struct IEnumNetworksVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumNetworks_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumNetworks_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumNetworks_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumNetworks_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IEnumNetworks_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IEnumNetworks_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IEnumNetworks_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IEnumNetworks_get__NewEnum(This,ppEnumVar) ( (This)->lpVtbl -> get__NewEnum(This,ppEnumVar) )
#define IEnumNetworks_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumNetworks_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumNetworks_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumNetworks_Clone(This,ppEnumNetwork) ( (This)->lpVtbl -> Clone(This,ppEnumNetwork) )
#endif
#endif
#ifndef __INetworkEvents_INTERFACE_DEFINED__
#define __INetworkEvents_INTERFACE_DEFINED__
typedef enum NLM_NETWORK_PROPERTY_CHANGE
{
	NLM_NETWORK_PROPERTY_CHANGE_CONNECTION = 0x1,
	NLM_NETWORK_PROPERTY_CHANGE_DESCRIPTION = 0x2,
	NLM_NETWORK_PROPERTY_CHANGE_NAME = 0x4,
	NLM_NETWORK_PROPERTY_CHANGE_ICON = 0x8,
	NLM_NETWORK_PROPERTY_CHANGE_CATEGORY_VALUE = 0x10
} NLM_NETWORK_PROPERTY_CHANGE;
extern const IID IID_INetworkEvents;
typedef struct INetworkEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetworkEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetworkEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetworkEvents * This);
	HRESULT(STDMETHODCALLTYPE * NetworkAdded) (INetworkEvents * This, GUID networkId);
	HRESULT(STDMETHODCALLTYPE * NetworkDeleted) (INetworkEvents * This, GUID networkId);
	HRESULT(STDMETHODCALLTYPE * NetworkConnectivityChanged) (INetworkEvents * This, GUID networkId, NLM_CONNECTIVITY newConnectivity);
	HRESULT(STDMETHODCALLTYPE * NetworkPropertyChanged) (INetworkEvents * This, GUID networkId, NLM_NETWORK_PROPERTY_CHANGE flags);
	END_INTERFACE
}  INetworkEventsVtbl;
interface INetworkEvents
{
	CONST_VTBL struct INetworkEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetworkEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetworkEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetworkEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetworkEvents_NetworkAdded(This,networkId) ( (This)->lpVtbl -> NetworkAdded(This,networkId) )
#define INetworkEvents_NetworkDeleted(This,networkId) ( (This)->lpVtbl -> NetworkDeleted(This,networkId) )
#define INetworkEvents_NetworkConnectivityChanged(This,networkId,newConnectivity) ( (This)->lpVtbl -> NetworkConnectivityChanged(This,networkId,newConnectivity) )
#define INetworkEvents_NetworkPropertyChanged(This,networkId,flags) ( (This)->lpVtbl -> NetworkPropertyChanged(This,networkId,flags) )
#endif
#endif
#ifndef __INetworkConnection_INTERFACE_DEFINED__
#define __INetworkConnection_INTERFACE_DEFINED__
extern const IID IID_INetworkConnection;
typedef struct INetworkConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetworkConnection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetworkConnection * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetworkConnection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetworkConnection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetworkConnection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetworkConnection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetworkConnection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetNetwork) (INetworkConnection * This, INetwork ** ppNetwork);
	HRESULT(STDMETHODCALLTYPE * get_IsConnectedToInternet) (INetworkConnection * This, VARIANT_BOOL * pbIsConnected);
	HRESULT(STDMETHODCALLTYPE * get_IsConnected) (INetworkConnection * This, VARIANT_BOOL * pbIsConnected);
	HRESULT(STDMETHODCALLTYPE * GetConnectivity) (INetworkConnection * This, NLM_CONNECTIVITY * pConnectivity);
	HRESULT(STDMETHODCALLTYPE * GetConnectionId) (INetworkConnection * This, GUID * pgdConnectionId);
	HRESULT(STDMETHODCALLTYPE * GetAdapterId) (INetworkConnection * This, GUID * pgdAdapterId);
	HRESULT(STDMETHODCALLTYPE * GetDomainType) (INetworkConnection * This, NLM_DOMAIN_TYPE * pDomainType);
	END_INTERFACE
}  INetworkConnectionVtbl;
interface INetworkConnection
{
	CONST_VTBL struct INetworkConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetworkConnection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetworkConnection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetworkConnection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetworkConnection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetworkConnection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetworkConnection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetworkConnection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetworkConnection_GetNetwork(This,ppNetwork) ( (This)->lpVtbl -> GetNetwork(This,ppNetwork) )
#define INetworkConnection_get_IsConnectedToInternet(This,pbIsConnected) ( (This)->lpVtbl -> get_IsConnectedToInternet(This,pbIsConnected) )
#define INetworkConnection_get_IsConnected(This,pbIsConnected) ( (This)->lpVtbl -> get_IsConnected(This,pbIsConnected) )
#define INetworkConnection_GetConnectivity(This,pConnectivity) ( (This)->lpVtbl -> GetConnectivity(This,pConnectivity) )
#define INetworkConnection_GetConnectionId(This,pgdConnectionId) ( (This)->lpVtbl -> GetConnectionId(This,pgdConnectionId) )
#define INetworkConnection_GetAdapterId(This,pgdAdapterId) ( (This)->lpVtbl -> GetAdapterId(This,pgdAdapterId) )
#define INetworkConnection_GetDomainType(This,pDomainType) ( (This)->lpVtbl -> GetDomainType(This,pDomainType) )
#endif
#endif
#ifndef __IEnumNetworkConnections_INTERFACE_DEFINED__
#define __IEnumNetworkConnections_INTERFACE_DEFINED__
extern const IID IID_IEnumNetworkConnections;
typedef struct IEnumNetworkConnectionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumNetworkConnections * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumNetworkConnections * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumNetworkConnections * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IEnumNetworkConnections * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IEnumNetworkConnections * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IEnumNetworkConnections * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IEnumNetworkConnections * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IEnumNetworkConnections * This, IEnumVARIANT ** ppEnumVar);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumNetworkConnections * This, ULONG celt, INetworkConnection ** rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumNetworkConnections * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumNetworkConnections * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumNetworkConnections * This, IEnumNetworkConnections ** ppEnumNetwork);
	END_INTERFACE
}  IEnumNetworkConnectionsVtbl;
interface IEnumNetworkConnections
{
	CONST_VTBL struct IEnumNetworkConnectionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumNetworkConnections_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumNetworkConnections_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumNetworkConnections_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumNetworkConnections_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IEnumNetworkConnections_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IEnumNetworkConnections_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IEnumNetworkConnections_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IEnumNetworkConnections_get__NewEnum(This,ppEnumVar) ( (This)->lpVtbl -> get__NewEnum(This,ppEnumVar) )
#define IEnumNetworkConnections_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumNetworkConnections_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumNetworkConnections_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumNetworkConnections_Clone(This,ppEnumNetwork) ( (This)->lpVtbl -> Clone(This,ppEnumNetwork) )
#endif
#endif
#ifndef __INetworkConnectionEvents_INTERFACE_DEFINED__
#define __INetworkConnectionEvents_INTERFACE_DEFINED__
typedef enum NLM_CONNECTION_PROPERTY_CHANGE
{
	NLM_CONNECTION_PROPERTY_CHANGE_AUTHENTICATION = 0x1
} NLM_CONNECTION_PROPERTY_CHANGE;
extern const IID IID_INetworkConnectionEvents;
typedef struct INetworkConnectionEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetworkConnectionEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetworkConnectionEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetworkConnectionEvents * This);
	HRESULT(STDMETHODCALLTYPE * NetworkConnectionConnectivityChanged) (INetworkConnectionEvents * This, GUID connectionId, NLM_CONNECTIVITY newConnectivity);
	HRESULT(STDMETHODCALLTYPE * NetworkConnectionPropertyChanged) (INetworkConnectionEvents * This, GUID connectionId, NLM_CONNECTION_PROPERTY_CHANGE flags);
	END_INTERFACE
}  INetworkConnectionEventsVtbl;
interface INetworkConnectionEvents
{
	CONST_VTBL struct INetworkConnectionEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetworkConnectionEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetworkConnectionEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetworkConnectionEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetworkConnectionEvents_NetworkConnectionConnectivityChanged(This,connectionId,newConnectivity) ( (This)->lpVtbl -> NetworkConnectionConnectivityChanged(This,connectionId,newConnectivity) )
#define INetworkConnectionEvents_NetworkConnectionPropertyChanged(This,connectionId,flags) ( (This)->lpVtbl -> NetworkConnectionPropertyChanged(This,connectionId,flags) )
#endif
#endif
#ifndef __NETWORKLIST_LIBRARY_DEFINED__
#define __NETWORKLIST_LIBRARY_DEFINED__
extern const IID LIBID_NETWORKLIST;
extern const CLSID CLSID_NetworkListManager;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif
