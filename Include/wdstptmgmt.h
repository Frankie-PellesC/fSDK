/*+@@file@@----------------------------------------------------------------*//*!
 \file		wdstptmgmt.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 00:32:47 2016
 \date		Modified on Mon Sep 19 00:32:47 2016
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
#ifndef __wdstptmgmt_h__
#define __wdstptmgmt_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWdsTransportCacheable_FWD_DEFINED__
#define __IWdsTransportCacheable_FWD_DEFINED__
typedef interface IWdsTransportCacheable IWdsTransportCacheable;
#endif
#ifndef __IWdsTransportCollection_FWD_DEFINED__
#define __IWdsTransportCollection_FWD_DEFINED__
typedef interface IWdsTransportCollection IWdsTransportCollection;
#endif
#ifndef __IWdsTransportManager_FWD_DEFINED__
#define __IWdsTransportManager_FWD_DEFINED__
typedef interface IWdsTransportManager IWdsTransportManager;
#endif
#ifndef __IWdsTransportServer_FWD_DEFINED__
#define __IWdsTransportServer_FWD_DEFINED__
typedef interface IWdsTransportServer IWdsTransportServer;
#endif
#ifndef __IWdsTransportSetupManager_FWD_DEFINED__
#define __IWdsTransportSetupManager_FWD_DEFINED__
typedef interface IWdsTransportSetupManager IWdsTransportSetupManager;
#endif
#ifndef __IWdsTransportConfigurationManager_FWD_DEFINED__
#define __IWdsTransportConfigurationManager_FWD_DEFINED__
typedef interface IWdsTransportConfigurationManager IWdsTransportConfigurationManager;
#endif
#ifndef __IWdsTransportConfigurationManager2_FWD_DEFINED__
#define __IWdsTransportConfigurationManager2_FWD_DEFINED__
typedef interface IWdsTransportConfigurationManager2 IWdsTransportConfigurationManager2;
#endif
#ifndef __IWdsTransportNamespaceManager_FWD_DEFINED__
#define __IWdsTransportNamespaceManager_FWD_DEFINED__
typedef interface IWdsTransportNamespaceManager IWdsTransportNamespaceManager;
#endif
#ifndef __IWdsTransportServicePolicy_FWD_DEFINED__
#define __IWdsTransportServicePolicy_FWD_DEFINED__
typedef interface IWdsTransportServicePolicy IWdsTransportServicePolicy;
#endif
#ifndef __IWdsTransportDiagnosticsPolicy_FWD_DEFINED__
#define __IWdsTransportDiagnosticsPolicy_FWD_DEFINED__
typedef interface IWdsTransportDiagnosticsPolicy IWdsTransportDiagnosticsPolicy;
#endif
#ifndef __IWdsTransportMulticastSessionPolicy_FWD_DEFINED__
#define __IWdsTransportMulticastSessionPolicy_FWD_DEFINED__
typedef interface IWdsTransportMulticastSessionPolicy IWdsTransportMulticastSessionPolicy;
#endif
#ifndef __IWdsTransportNamespace_FWD_DEFINED__
#define __IWdsTransportNamespace_FWD_DEFINED__
typedef interface IWdsTransportNamespace IWdsTransportNamespace;
#endif
#ifndef __IWdsTransportNamespaceAutoCast_FWD_DEFINED__
#define __IWdsTransportNamespaceAutoCast_FWD_DEFINED__
typedef interface IWdsTransportNamespaceAutoCast IWdsTransportNamespaceAutoCast;
#endif
#ifndef __IWdsTransportNamespaceScheduledCast_FWD_DEFINED__
#define __IWdsTransportNamespaceScheduledCast_FWD_DEFINED__
typedef interface IWdsTransportNamespaceScheduledCast IWdsTransportNamespaceScheduledCast;
#endif
#ifndef __IWdsTransportNamespaceScheduledCastManualStart_FWD_DEFINED__
#define __IWdsTransportNamespaceScheduledCastManualStart_FWD_DEFINED__
typedef interface IWdsTransportNamespaceScheduledCastManualStart IWdsTransportNamespaceScheduledCastManualStart;
#endif
#ifndef __IWdsTransportNamespaceScheduledCastAutoStart_FWD_DEFINED__
#define __IWdsTransportNamespaceScheduledCastAutoStart_FWD_DEFINED__
typedef interface IWdsTransportNamespaceScheduledCastAutoStart IWdsTransportNamespaceScheduledCastAutoStart;
#endif
#ifndef __IWdsTransportContent_FWD_DEFINED__
#define __IWdsTransportContent_FWD_DEFINED__
typedef interface IWdsTransportContent IWdsTransportContent;
#endif
#ifndef __IWdsTransportSession_FWD_DEFINED__
#define __IWdsTransportSession_FWD_DEFINED__
typedef interface IWdsTransportSession IWdsTransportSession;
#endif
#ifndef __IWdsTransportClient_FWD_DEFINED__
#define __IWdsTransportClient_FWD_DEFINED__
typedef interface IWdsTransportClient IWdsTransportClient;
#endif
#ifndef __WdsTransportCacheable_FWD_DEFINED__
#define __WdsTransportCacheable_FWD_DEFINED__
typedef struct WdsTransportCacheable WdsTransportCacheable;
#endif
#ifndef __WdsTransportCollection_FWD_DEFINED__
#define __WdsTransportCollection_FWD_DEFINED__
typedef struct WdsTransportCollection WdsTransportCollection;
#endif
#ifndef __WdsTransportManager_FWD_DEFINED__
#define __WdsTransportManager_FWD_DEFINED__
typedef struct WdsTransportManager WdsTransportManager;
#endif
#ifndef __WdsTransportServer_FWD_DEFINED__
#define __WdsTransportServer_FWD_DEFINED__
typedef struct WdsTransportServer WdsTransportServer;
#endif
#ifndef __WdsTransportSetupManager_FWD_DEFINED__
#define __WdsTransportSetupManager_FWD_DEFINED__
typedef struct WdsTransportSetupManager WdsTransportSetupManager;
#endif
#ifndef __WdsTransportConfigurationManager_FWD_DEFINED__
#define __WdsTransportConfigurationManager_FWD_DEFINED__
typedef struct WdsTransportConfigurationManager WdsTransportConfigurationManager;
#endif
#ifndef __WdsTransportNamespaceManager_FWD_DEFINED__
#define __WdsTransportNamespaceManager_FWD_DEFINED__
typedef struct WdsTransportNamespaceManager WdsTransportNamespaceManager;
#endif
#ifndef __WdsTransportServicePolicy_FWD_DEFINED__
#define __WdsTransportServicePolicy_FWD_DEFINED__
typedef struct WdsTransportServicePolicy WdsTransportServicePolicy;
#endif
#ifndef __WdsTransportDiagnosticsPolicy_FWD_DEFINED__
#define __WdsTransportDiagnosticsPolicy_FWD_DEFINED__
typedef struct WdsTransportDiagnosticsPolicy WdsTransportDiagnosticsPolicy;
#endif
#ifndef __WdsTransportMulticastSessionPolicy_FWD_DEFINED__
#define __WdsTransportMulticastSessionPolicy_FWD_DEFINED__
typedef struct WdsTransportMulticastSessionPolicy WdsTransportMulticastSessionPolicy;
#endif
#ifndef __WdsTransportNamespace_FWD_DEFINED__
#define __WdsTransportNamespace_FWD_DEFINED__
typedef struct WdsTransportNamespace WdsTransportNamespace;
#endif
#ifndef __WdsTransportNamespaceAutoCast_FWD_DEFINED__
#define __WdsTransportNamespaceAutoCast_FWD_DEFINED__
typedef struct WdsTransportNamespaceAutoCast WdsTransportNamespaceAutoCast;
#endif
#ifndef __WdsTransportNamespaceScheduledCast_FWD_DEFINED__
#define __WdsTransportNamespaceScheduledCast_FWD_DEFINED__
typedef struct WdsTransportNamespaceScheduledCast WdsTransportNamespaceScheduledCast;
#endif
#ifndef __WdsTransportNamespaceScheduledCastManualStart_FWD_DEFINED__
#define __WdsTransportNamespaceScheduledCastManualStart_FWD_DEFINED__
typedef struct WdsTransportNamespaceScheduledCastManualStart WdsTransportNamespaceScheduledCastManualStart;
#endif
#ifndef __WdsTransportNamespaceScheduledCastAutoStart_FWD_DEFINED__
#define __WdsTransportNamespaceScheduledCastAutoStart_FWD_DEFINED__
typedef struct WdsTransportNamespaceScheduledCastAutoStart WdsTransportNamespaceScheduledCastAutoStart;
#endif
#ifndef __WdsTransportContent_FWD_DEFINED__
#define __WdsTransportContent_FWD_DEFINED__
typedef struct WdsTransportContent WdsTransportContent;
#endif
#ifndef __WdsTransportSession_FWD_DEFINED__
#define __WdsTransportSession_FWD_DEFINED__
typedef struct WdsTransportSession WdsTransportSession;
#endif
#ifndef __WdsTransportClient_FWD_DEFINED__
#define __WdsTransportClient_FWD_DEFINED__
typedef struct WdsTransportClient WdsTransportClient;
#endif
#include "oaidl.h"
#include "ocidl.h"
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0001
{
	WdsTptFeatureAdminPack = 0x1,
	WdsTptFeatureTransportServer = 0x2,
	WdsTptFeatureDeploymentServer = 0x4
} WDSTRANSPORT_FEATURE_FLAGS;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0001 *PWDSTRANSPORT_FEATURE_FLAGS;
#define WDSTRANSPORT_FEATURE_FLAGS_ALL  ( WdsTptFeatureAdminPack | WdsTptFeatureTransportServer | WdsTptFeatureDeploymentServer )
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0002
{
	WdsTptProtocolUnicast = 0x1,
	WdsTptProtocolMulticast = 0x2
} WDSTRANSPORT_PROTOCOL_FLAGS;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0002 *PWDSTRANSPORT_PROTOCOL_FLAGS;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0003
{
	WdsTptNamespaceTypeUnknown = 0,
	WdsTptNamespaceTypeAutoCast = 1,
	WdsTptNamespaceTypeScheduledCastManualStart = 2,
	WdsTptNamespaceTypeScheduledCastAutoStart = 3
} WDSTRANSPORT_NAMESPACE_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0003 *PWDSTRANSPORT_NAMESPACE_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0004
{
	WdsTptDisconnectUnknown = 0,
	WdsTptDisconnectFallback = 1,
	WdsTptDisconnectAbort = 2
} WDSTRANSPORT_DISCONNECT_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0004 *PWDSTRANSPORT_DISCONNECT_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0005
{
	WdsTptServiceNotifyUnknown = 0,
	WdsTptServiceNotifyReadSettings = 1
} WDSTRANSPORT_SERVICE_NOTIFICATION;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0005 *PWDSTRANSPORT_SERVICE_NOTIFICATION;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0006
{
	WdsTptIpAddressUnknown = 0,
	WdsTptIpAddressIpv4 = 1,
	WdsTptIpAddressIpv6 = 2
} WDSTRANSPORT_IP_ADDRESS_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0006 *PWDSTRANSPORT_IP_ADDRESS_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0007
{
	WdsTptIpAddressSourceUnknown = 0,
	WdsTptIpAddressSourceDhcp = 1,
	WdsTptIpAddressSourceRange = 2
} WDSTRANSPORT_IP_ADDRESS_SOURCE_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0007 *PWDSTRANSPORT_IP_ADDRESS_SOURCE_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0008
{
	WdsTptNetworkProfileUnknown = 0,
	WdsTptNetworkProfileCustom = 1,
	WdsTptNetworkProfile10Mbps = 2,
	WdsTptNetworkProfile100Mbps = 3,
	WdsTptNetworkProfile1Gbps = 4
} WDSTRANSPORT_NETWORK_PROFILE_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0008 *PWDSTRANSPORT_NETWORK_PROFILE_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0009
{
	WdsTptDiagnosticsComponentPxe = 0x1,
	WdsTptDiagnosticsComponentTftp = 0x2,
	WdsTptDiagnosticsComponentImageServer = 0x4,
	WdsTptDiagnosticsComponentMulticast = 0x8
} WDSTRANSPORT_DIAGNOSTICS_COMPONENT_FLAGS;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0009 *PWDSTRANSPORT_DIAGNOSTICS_COMPONENT_FLAGS;
#define WDSTRANSPORT_DIAGNOSTICS_COMPONENT_FLAGS_ALL  ( WdsTptDiagnosticsComponentPxe | WdsTptDiagnosticsComponentTftp | WdsTptDiagnosticsComponentImageServer | WdsTptDiagnosticsComponentMulticast )
#define WDSTRANSPORT_RESOURCE_UTILIZATION_UNKNOWN    0xFF
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0010
{
	WdsTptSlowClientHandlingUnknown = 0,
	WdsTptSlowClientHandlingNone = 1,
	WdsTptSlowClientHandlingAutoDisconnect = 2,
	WdsTptSlowClientHandlingMultistream = 3
} WDSTRANSPORT_SLOW_CLIENT_HANDLING_TYPE;
typedef enum __MIDL___MIDL_itf_wdstptmgmt_0000_0000_0010 *PWDSTRANSPORT_SLOW_CLIENT_HANDLING_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_wdstptmgmt_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wdstptmgmt_0000_0000_v0_0_s_ifspec;
#ifndef __IWdsTransportCacheable_INTERFACE_DEFINED__
#define __IWdsTransportCacheable_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportCacheable;
typedef struct IWdsTransportCacheableVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportCacheable * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportCacheable * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportCacheable * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportCacheable * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportCacheable * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportCacheable * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportCacheable * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Dirty) (IWdsTransportCacheable * This, VARIANT_BOOL * pbDirty);
	HRESULT(STDMETHODCALLTYPE * Discard) (IWdsTransportCacheable * This);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IWdsTransportCacheable * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IWdsTransportCacheable * This);
	END_INTERFACE
}  IWdsTransportCacheableVtbl;
interface IWdsTransportCacheable
{
	CONST_VTBL struct IWdsTransportCacheableVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportCacheable_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportCacheable_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportCacheable_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportCacheable_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportCacheable_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportCacheable_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportCacheable_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportCacheable_get_Dirty(This,pbDirty) ( (This)->lpVtbl -> get_Dirty(This,pbDirty) )
#define IWdsTransportCacheable_Discard(This) ( (This)->lpVtbl -> Discard(This) )
#define IWdsTransportCacheable_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IWdsTransportCacheable_Commit(This) ( (This)->lpVtbl -> Commit(This) )
#endif
#endif
#ifndef __IWdsTransportCollection_INTERFACE_DEFINED__
#define __IWdsTransportCollection_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportCollection;
typedef struct IWdsTransportCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IWdsTransportCollection * This, ULONG * pulCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IWdsTransportCollection * This, ULONG ulIndex, IDispatch ** ppVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IWdsTransportCollection * This, IUnknown ** ppVal);
	END_INTERFACE
}  IWdsTransportCollectionVtbl;
interface IWdsTransportCollection
{
	CONST_VTBL struct IWdsTransportCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportCollection_get_Count(This,pulCount) ( (This)->lpVtbl -> get_Count(This,pulCount) )
#define IWdsTransportCollection_get_Item(This,ulIndex,ppVal) ( (This)->lpVtbl -> get_Item(This,ulIndex,ppVal) )
#define IWdsTransportCollection_get__NewEnum(This,ppVal) ( (This)->lpVtbl -> get__NewEnum(This,ppVal) )
#endif
#endif
#ifndef __IWdsTransportManager_INTERFACE_DEFINED__
#define __IWdsTransportManager_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportManager;
typedef struct IWdsTransportManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetWdsTransportServer) (IWdsTransportManager * This, BSTR bszServerName, IWdsTransportServer ** ppWdsTransportServer);
	END_INTERFACE
}  IWdsTransportManagerVtbl;
interface IWdsTransportManager
{
	CONST_VTBL struct IWdsTransportManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportManager_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportManager_GetWdsTransportServer(This,bszServerName,ppWdsTransportServer) ( (This)->lpVtbl -> GetWdsTransportServer(This,bszServerName,ppWdsTransportServer) )
#endif
#endif
#ifndef __IWdsTransportServer_INTERFACE_DEFINED__
#define __IWdsTransportServer_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportServer;
typedef struct IWdsTransportServerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportServer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportServer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportServer * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportServer * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportServer * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportServer * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportServer * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IWdsTransportServer * This, BSTR * pbszName);
	HRESULT(STDMETHODCALLTYPE * get_SetupManager) (IWdsTransportServer * This, IWdsTransportSetupManager ** ppWdsTransportSetupManager);
	HRESULT(STDMETHODCALLTYPE * get_ConfigurationManager) (IWdsTransportServer * This, IWdsTransportConfigurationManager ** ppWdsTransportConfigurationManager);
	HRESULT(STDMETHODCALLTYPE * get_NamespaceManager) (IWdsTransportServer * This, IWdsTransportNamespaceManager ** ppWdsTransportNamespaceManager);
	HRESULT(STDMETHODCALLTYPE * DisconnectClient) (IWdsTransportServer * This, ULONG ulClientId, WDSTRANSPORT_DISCONNECT_TYPE DisconnectionType);
	END_INTERFACE
}  IWdsTransportServerVtbl;
interface IWdsTransportServer
{
	CONST_VTBL struct IWdsTransportServerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportServer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportServer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportServer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportServer_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportServer_get_Name(This,pbszName) ( (This)->lpVtbl -> get_Name(This,pbszName) )
#define IWdsTransportServer_get_SetupManager(This,ppWdsTransportSetupManager) ( (This)->lpVtbl -> get_SetupManager(This,ppWdsTransportSetupManager) )
#define IWdsTransportServer_get_ConfigurationManager(This,ppWdsTransportConfigurationManager) ( (This)->lpVtbl -> get_ConfigurationManager(This,ppWdsTransportConfigurationManager) )
#define IWdsTransportServer_get_NamespaceManager(This,ppWdsTransportNamespaceManager) ( (This)->lpVtbl -> get_NamespaceManager(This,ppWdsTransportNamespaceManager) )
#define IWdsTransportServer_DisconnectClient(This,ulClientId,DisconnectionType) ( (This)->lpVtbl -> DisconnectClient(This,ulClientId,DisconnectionType) )
#endif
#endif
#ifndef __IWdsTransportSetupManager_INTERFACE_DEFINED__
#define __IWdsTransportSetupManager_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportSetupManager;
typedef struct IWdsTransportSetupManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportSetupManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportSetupManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportSetupManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportSetupManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportSetupManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportSetupManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportSetupManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Version) (IWdsTransportSetupManager * This, ULONGLONG * pullVersion);
	HRESULT(STDMETHODCALLTYPE * get_InstalledFeatures) (IWdsTransportSetupManager * This, ULONG * pulInstalledFeatures);
	HRESULT(STDMETHODCALLTYPE * get_Protocols) (IWdsTransportSetupManager * This, ULONG * pulProtocols);
	HRESULT(STDMETHODCALLTYPE * RegisterContentProvider) (IWdsTransportSetupManager * This, BSTR bszName, BSTR bszDescription, BSTR bszFilePath, BSTR bszInitializationRoutine);
	HRESULT(STDMETHODCALLTYPE * DeregisterContentProvider) (IWdsTransportSetupManager * This, BSTR bszName);
	END_INTERFACE
}  IWdsTransportSetupManagerVtbl;
interface IWdsTransportSetupManager
{
	CONST_VTBL struct IWdsTransportSetupManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportSetupManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportSetupManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportSetupManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportSetupManager_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportSetupManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportSetupManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportSetupManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportSetupManager_get_Version(This,pullVersion) ( (This)->lpVtbl -> get_Version(This,pullVersion) )
#define IWdsTransportSetupManager_get_InstalledFeatures(This,pulInstalledFeatures) ( (This)->lpVtbl -> get_InstalledFeatures(This,pulInstalledFeatures) )
#define IWdsTransportSetupManager_get_Protocols(This,pulProtocols) ( (This)->lpVtbl -> get_Protocols(This,pulProtocols) )
#define IWdsTransportSetupManager_RegisterContentProvider(This,bszName,bszDescription,bszFilePath,bszInitializationRoutine) ( (This)->lpVtbl -> RegisterContentProvider(This,bszName,bszDescription,bszFilePath,bszInitializationRoutine) )
#define IWdsTransportSetupManager_DeregisterContentProvider(This,bszName) ( (This)->lpVtbl -> DeregisterContentProvider(This,bszName) )
#endif
#endif
#ifndef __IWdsTransportConfigurationManager_INTERFACE_DEFINED__
#define __IWdsTransportConfigurationManager_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportConfigurationManager;
typedef struct IWdsTransportConfigurationManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportConfigurationManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportConfigurationManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportConfigurationManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportConfigurationManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportConfigurationManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportConfigurationManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportConfigurationManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ServicePolicy) (IWdsTransportConfigurationManager * This, IWdsTransportServicePolicy ** ppWdsTransportServicePolicy);
	HRESULT(STDMETHODCALLTYPE * get_DiagnosticsPolicy) (IWdsTransportConfigurationManager * This, IWdsTransportDiagnosticsPolicy ** ppWdsTransportDiagnosticsPolicy);
	HRESULT(STDMETHODCALLTYPE * get_WdsTransportServicesRunning) (IWdsTransportConfigurationManager * This, VARIANT_BOOL bRealtimeStatus, VARIANT_BOOL * pbServicesRunning);
	HRESULT(STDMETHODCALLTYPE * EnableWdsTransportServices) (IWdsTransportConfigurationManager * This);
	HRESULT(STDMETHODCALLTYPE * DisableWdsTransportServices) (IWdsTransportConfigurationManager * This);
	HRESULT(STDMETHODCALLTYPE * StartWdsTransportServices) (IWdsTransportConfigurationManager * This);
	HRESULT(STDMETHODCALLTYPE * StopWdsTransportServices) (IWdsTransportConfigurationManager * This);
	HRESULT(STDMETHODCALLTYPE * RestartWdsTransportServices) (IWdsTransportConfigurationManager * This);
	HRESULT(STDMETHODCALLTYPE * NotifyWdsTransportServices) (IWdsTransportConfigurationManager * This, WDSTRANSPORT_SERVICE_NOTIFICATION ServiceNotification);
	END_INTERFACE
}  IWdsTransportConfigurationManagerVtbl;
interface IWdsTransportConfigurationManager
{
	CONST_VTBL struct IWdsTransportConfigurationManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportConfigurationManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportConfigurationManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportConfigurationManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportConfigurationManager_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportConfigurationManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportConfigurationManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportConfigurationManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportConfigurationManager_get_ServicePolicy(This,ppWdsTransportServicePolicy) ( (This)->lpVtbl -> get_ServicePolicy(This,ppWdsTransportServicePolicy) )
#define IWdsTransportConfigurationManager_get_DiagnosticsPolicy(This,ppWdsTransportDiagnosticsPolicy) ( (This)->lpVtbl -> get_DiagnosticsPolicy(This,ppWdsTransportDiagnosticsPolicy) )
#define IWdsTransportConfigurationManager_get_WdsTransportServicesRunning(This,bRealtimeStatus,pbServicesRunning) ( (This)->lpVtbl -> get_WdsTransportServicesRunning(This,bRealtimeStatus,pbServicesRunning) )
#define IWdsTransportConfigurationManager_EnableWdsTransportServices(This) ( (This)->lpVtbl -> EnableWdsTransportServices(This) )
#define IWdsTransportConfigurationManager_DisableWdsTransportServices(This) ( (This)->lpVtbl -> DisableWdsTransportServices(This) )
#define IWdsTransportConfigurationManager_StartWdsTransportServices(This) ( (This)->lpVtbl -> StartWdsTransportServices(This) )
#define IWdsTransportConfigurationManager_StopWdsTransportServices(This) ( (This)->lpVtbl -> StopWdsTransportServices(This) )
#define IWdsTransportConfigurationManager_RestartWdsTransportServices(This) ( (This)->lpVtbl -> RestartWdsTransportServices(This) )
#define IWdsTransportConfigurationManager_NotifyWdsTransportServices(This,ServiceNotification) ( (This)->lpVtbl -> NotifyWdsTransportServices(This,ServiceNotification) )
#endif
#endif
#ifndef __IWdsTransportConfigurationManager2_INTERFACE_DEFINED__
#define __IWdsTransportConfigurationManager2_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportConfigurationManager2;
typedef struct IWdsTransportConfigurationManager2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportConfigurationManager2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportConfigurationManager2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportConfigurationManager2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportConfigurationManager2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportConfigurationManager2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportConfigurationManager2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportConfigurationManager2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ServicePolicy) (IWdsTransportConfigurationManager2 * This, IWdsTransportServicePolicy ** ppWdsTransportServicePolicy);
	HRESULT(STDMETHODCALLTYPE * get_DiagnosticsPolicy) (IWdsTransportConfigurationManager2 * This, IWdsTransportDiagnosticsPolicy ** ppWdsTransportDiagnosticsPolicy);
	HRESULT(STDMETHODCALLTYPE * get_WdsTransportServicesRunning) (IWdsTransportConfigurationManager2 * This, VARIANT_BOOL bRealtimeStatus, VARIANT_BOOL * pbServicesRunning);
	HRESULT(STDMETHODCALLTYPE * EnableWdsTransportServices) (IWdsTransportConfigurationManager2 * This);
	HRESULT(STDMETHODCALLTYPE * DisableWdsTransportServices) (IWdsTransportConfigurationManager2 * This);
	HRESULT(STDMETHODCALLTYPE * StartWdsTransportServices) (IWdsTransportConfigurationManager2 * This);
	HRESULT(STDMETHODCALLTYPE * StopWdsTransportServices) (IWdsTransportConfigurationManager2 * This);
	HRESULT(STDMETHODCALLTYPE * RestartWdsTransportServices) (IWdsTransportConfigurationManager2 * This);
	HRESULT(STDMETHODCALLTYPE * NotifyWdsTransportServices) (IWdsTransportConfigurationManager2 * This, WDSTRANSPORT_SERVICE_NOTIFICATION ServiceNotification);
	HRESULT(STDMETHODCALLTYPE * get_MulticastSessionPolicy) (IWdsTransportConfigurationManager2 * This, IWdsTransportMulticastSessionPolicy ** ppWdsTransportMulticastSessionPolicy);
	END_INTERFACE
}  IWdsTransportConfigurationManager2Vtbl;
interface IWdsTransportConfigurationManager2
{
	CONST_VTBL struct IWdsTransportConfigurationManager2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportConfigurationManager2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportConfigurationManager2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportConfigurationManager2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportConfigurationManager2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportConfigurationManager2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportConfigurationManager2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportConfigurationManager2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportConfigurationManager2_get_ServicePolicy(This,ppWdsTransportServicePolicy) ( (This)->lpVtbl -> get_ServicePolicy(This,ppWdsTransportServicePolicy) )
#define IWdsTransportConfigurationManager2_get_DiagnosticsPolicy(This,ppWdsTransportDiagnosticsPolicy) ( (This)->lpVtbl -> get_DiagnosticsPolicy(This,ppWdsTransportDiagnosticsPolicy) )
#define IWdsTransportConfigurationManager2_get_WdsTransportServicesRunning(This,bRealtimeStatus,pbServicesRunning) ( (This)->lpVtbl -> get_WdsTransportServicesRunning(This,bRealtimeStatus,pbServicesRunning) )
#define IWdsTransportConfigurationManager2_EnableWdsTransportServices(This) ( (This)->lpVtbl -> EnableWdsTransportServices(This) )
#define IWdsTransportConfigurationManager2_DisableWdsTransportServices(This) ( (This)->lpVtbl -> DisableWdsTransportServices(This) )
#define IWdsTransportConfigurationManager2_StartWdsTransportServices(This) ( (This)->lpVtbl -> StartWdsTransportServices(This) )
#define IWdsTransportConfigurationManager2_StopWdsTransportServices(This) ( (This)->lpVtbl -> StopWdsTransportServices(This) )
#define IWdsTransportConfigurationManager2_RestartWdsTransportServices(This) ( (This)->lpVtbl -> RestartWdsTransportServices(This) )
#define IWdsTransportConfigurationManager2_NotifyWdsTransportServices(This,ServiceNotification) ( (This)->lpVtbl -> NotifyWdsTransportServices(This,ServiceNotification) )
#define IWdsTransportConfigurationManager2_get_MulticastSessionPolicy(This,ppWdsTransportMulticastSessionPolicy) ( (This)->lpVtbl -> get_MulticastSessionPolicy(This,ppWdsTransportMulticastSessionPolicy) )
#endif
#endif
#ifndef __IWdsTransportNamespaceManager_INTERFACE_DEFINED__
#define __IWdsTransportNamespaceManager_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportNamespaceManager;
typedef struct IWdsTransportNamespaceManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportNamespaceManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportNamespaceManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportNamespaceManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportNamespaceManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportNamespaceManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportNamespaceManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportNamespaceManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * CreateNamespace) (IWdsTransportNamespaceManager * This, WDSTRANSPORT_NAMESPACE_TYPE NamespaceType, BSTR bszNamespaceName, BSTR bszContentProvider, BSTR bszConfiguration, IWdsTransportNamespace ** ppWdsTransportNamespace);
	HRESULT(STDMETHODCALLTYPE * RetrieveNamespace) (IWdsTransportNamespaceManager * This, BSTR bszNamespaceName, IWdsTransportNamespace ** ppWdsTransportNamespace);
	HRESULT(STDMETHODCALLTYPE * RetrieveNamespaces) (IWdsTransportNamespaceManager * This, BSTR bszContentProvider, BSTR bszNamespaceName, VARIANT_BOOL bIncludeTombstones, IWdsTransportCollection ** ppWdsTransportNamespaces);
	END_INTERFACE
}  IWdsTransportNamespaceManagerVtbl;
interface IWdsTransportNamespaceManager
{
	CONST_VTBL struct IWdsTransportNamespaceManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportNamespaceManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportNamespaceManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportNamespaceManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportNamespaceManager_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportNamespaceManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportNamespaceManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportNamespaceManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportNamespaceManager_CreateNamespace(This,NamespaceType,bszNamespaceName,bszContentProvider,bszConfiguration,ppWdsTransportNamespace) ( (This)->lpVtbl -> CreateNamespace(This,NamespaceType,bszNamespaceName,bszContentProvider,bszConfiguration,ppWdsTransportNamespace) )
#define IWdsTransportNamespaceManager_RetrieveNamespace(This,bszNamespaceName,ppWdsTransportNamespace) ( (This)->lpVtbl -> RetrieveNamespace(This,bszNamespaceName,ppWdsTransportNamespace) )
#define IWdsTransportNamespaceManager_RetrieveNamespaces(This,bszContentProvider,bszNamespaceName,bIncludeTombstones,ppWdsTransportNamespaces) ( (This)->lpVtbl -> RetrieveNamespaces(This,bszContentProvider,bszNamespaceName,bIncludeTombstones,ppWdsTransportNamespaces) )
#endif
#endif
#ifndef __IWdsTransportServicePolicy_INTERFACE_DEFINED__
#define __IWdsTransportServicePolicy_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportServicePolicy;
typedef struct IWdsTransportServicePolicyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportServicePolicy * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportServicePolicy * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportServicePolicy * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportServicePolicy * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportServicePolicy * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportServicePolicy * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportServicePolicy * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Dirty) (IWdsTransportServicePolicy * This, VARIANT_BOOL * pbDirty);
	HRESULT(STDMETHODCALLTYPE * Discard) (IWdsTransportServicePolicy * This);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IWdsTransportServicePolicy * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IWdsTransportServicePolicy * This);
	HRESULT(STDMETHODCALLTYPE * get_IpAddressSource) (IWdsTransportServicePolicy * This, WDSTRANSPORT_IP_ADDRESS_TYPE AddressType, WDSTRANSPORT_IP_ADDRESS_SOURCE_TYPE * pSourceType);
	HRESULT(STDMETHODCALLTYPE * put_IpAddressSource) (IWdsTransportServicePolicy * This, WDSTRANSPORT_IP_ADDRESS_TYPE AddressType, WDSTRANSPORT_IP_ADDRESS_SOURCE_TYPE SourceType);
	HRESULT(STDMETHODCALLTYPE * get_StartIpAddress) (IWdsTransportServicePolicy * This, WDSTRANSPORT_IP_ADDRESS_TYPE AddressType, BSTR * pbszStartIpAddress);
	HRESULT(STDMETHODCALLTYPE * put_StartIpAddress) (IWdsTransportServicePolicy * This, WDSTRANSPORT_IP_ADDRESS_TYPE AddressType, BSTR bszStartIpAddress);
	HRESULT(STDMETHODCALLTYPE * get_EndIpAddress) (IWdsTransportServicePolicy * This, WDSTRANSPORT_IP_ADDRESS_TYPE AddressType, BSTR * pbszEndIpAddress);
	HRESULT(STDMETHODCALLTYPE * put_EndIpAddress) (IWdsTransportServicePolicy * This, WDSTRANSPORT_IP_ADDRESS_TYPE AddressType, BSTR bszEndIpAddress);
	HRESULT(STDMETHODCALLTYPE * get_StartPort) (IWdsTransportServicePolicy * This, ULONG * pulStartPort);
	HRESULT(STDMETHODCALLTYPE * put_StartPort) (IWdsTransportServicePolicy * This, ULONG ulStartPort);
	HRESULT(STDMETHODCALLTYPE * get_EndPort) (IWdsTransportServicePolicy * This, ULONG * pulEndPort);
	HRESULT(STDMETHODCALLTYPE * put_EndPort) (IWdsTransportServicePolicy * This, ULONG ulEndPort);
	HRESULT(STDMETHODCALLTYPE * get_NetworkProfile) (IWdsTransportServicePolicy * This, WDSTRANSPORT_NETWORK_PROFILE_TYPE * pProfileType);
	HRESULT(STDMETHODCALLTYPE * put_NetworkProfile) (IWdsTransportServicePolicy * This, WDSTRANSPORT_NETWORK_PROFILE_TYPE ProfileType);
	END_INTERFACE
}  IWdsTransportServicePolicyVtbl;
interface IWdsTransportServicePolicy
{
	CONST_VTBL struct IWdsTransportServicePolicyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportServicePolicy_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportServicePolicy_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportServicePolicy_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportServicePolicy_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportServicePolicy_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportServicePolicy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportServicePolicy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportServicePolicy_get_Dirty(This,pbDirty) ( (This)->lpVtbl -> get_Dirty(This,pbDirty) )
#define IWdsTransportServicePolicy_Discard(This) ( (This)->lpVtbl -> Discard(This) )
#define IWdsTransportServicePolicy_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IWdsTransportServicePolicy_Commit(This) ( (This)->lpVtbl -> Commit(This) )
#define IWdsTransportServicePolicy_get_IpAddressSource(This,AddressType,pSourceType) ( (This)->lpVtbl -> get_IpAddressSource(This,AddressType,pSourceType) )
#define IWdsTransportServicePolicy_put_IpAddressSource(This,AddressType,SourceType) ( (This)->lpVtbl -> put_IpAddressSource(This,AddressType,SourceType) )
#define IWdsTransportServicePolicy_get_StartIpAddress(This,AddressType,pbszStartIpAddress) ( (This)->lpVtbl -> get_StartIpAddress(This,AddressType,pbszStartIpAddress) )
#define IWdsTransportServicePolicy_put_StartIpAddress(This,AddressType,bszStartIpAddress) ( (This)->lpVtbl -> put_StartIpAddress(This,AddressType,bszStartIpAddress) )
#define IWdsTransportServicePolicy_get_EndIpAddress(This,AddressType,pbszEndIpAddress) ( (This)->lpVtbl -> get_EndIpAddress(This,AddressType,pbszEndIpAddress) )
#define IWdsTransportServicePolicy_put_EndIpAddress(This,AddressType,bszEndIpAddress) ( (This)->lpVtbl -> put_EndIpAddress(This,AddressType,bszEndIpAddress) )
#define IWdsTransportServicePolicy_get_StartPort(This,pulStartPort) ( (This)->lpVtbl -> get_StartPort(This,pulStartPort) )
#define IWdsTransportServicePolicy_put_StartPort(This,ulStartPort) ( (This)->lpVtbl -> put_StartPort(This,ulStartPort) )
#define IWdsTransportServicePolicy_get_EndPort(This,pulEndPort) ( (This)->lpVtbl -> get_EndPort(This,pulEndPort) )
#define IWdsTransportServicePolicy_put_EndPort(This,ulEndPort) ( (This)->lpVtbl -> put_EndPort(This,ulEndPort) )
#define IWdsTransportServicePolicy_get_NetworkProfile(This,pProfileType) ( (This)->lpVtbl -> get_NetworkProfile(This,pProfileType) )
#define IWdsTransportServicePolicy_put_NetworkProfile(This,ProfileType) ( (This)->lpVtbl -> put_NetworkProfile(This,ProfileType) )
#endif
#endif
#ifndef __IWdsTransportDiagnosticsPolicy_INTERFACE_DEFINED__
#define __IWdsTransportDiagnosticsPolicy_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportDiagnosticsPolicy;
typedef struct IWdsTransportDiagnosticsPolicyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportDiagnosticsPolicy * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportDiagnosticsPolicy * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportDiagnosticsPolicy * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportDiagnosticsPolicy * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportDiagnosticsPolicy * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportDiagnosticsPolicy * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportDiagnosticsPolicy * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Dirty) (IWdsTransportDiagnosticsPolicy * This, VARIANT_BOOL * pbDirty);
	HRESULT(STDMETHODCALLTYPE * Discard) (IWdsTransportDiagnosticsPolicy * This);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IWdsTransportDiagnosticsPolicy * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IWdsTransportDiagnosticsPolicy * This);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IWdsTransportDiagnosticsPolicy * This, VARIANT_BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (IWdsTransportDiagnosticsPolicy * This, VARIANT_BOOL bEnabled);
	HRESULT(STDMETHODCALLTYPE * get_Components) (IWdsTransportDiagnosticsPolicy * This, ULONG * pulComponents);
	HRESULT(STDMETHODCALLTYPE * put_Components) (IWdsTransportDiagnosticsPolicy * This, ULONG ulComponents);
	END_INTERFACE
}  IWdsTransportDiagnosticsPolicyVtbl;
interface IWdsTransportDiagnosticsPolicy
{
	CONST_VTBL struct IWdsTransportDiagnosticsPolicyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportDiagnosticsPolicy_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportDiagnosticsPolicy_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportDiagnosticsPolicy_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportDiagnosticsPolicy_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportDiagnosticsPolicy_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportDiagnosticsPolicy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportDiagnosticsPolicy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportDiagnosticsPolicy_get_Dirty(This,pbDirty) ( (This)->lpVtbl -> get_Dirty(This,pbDirty) )
#define IWdsTransportDiagnosticsPolicy_Discard(This) ( (This)->lpVtbl -> Discard(This) )
#define IWdsTransportDiagnosticsPolicy_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IWdsTransportDiagnosticsPolicy_Commit(This) ( (This)->lpVtbl -> Commit(This) )
#define IWdsTransportDiagnosticsPolicy_get_Enabled(This,pbEnabled) ( (This)->lpVtbl -> get_Enabled(This,pbEnabled) )
#define IWdsTransportDiagnosticsPolicy_put_Enabled(This,bEnabled) ( (This)->lpVtbl -> put_Enabled(This,bEnabled) )
#define IWdsTransportDiagnosticsPolicy_get_Components(This,pulComponents) ( (This)->lpVtbl -> get_Components(This,pulComponents) )
#define IWdsTransportDiagnosticsPolicy_put_Components(This,ulComponents) ( (This)->lpVtbl -> put_Components(This,ulComponents) )
#endif
#endif
#ifndef __IWdsTransportMulticastSessionPolicy_INTERFACE_DEFINED__
#define __IWdsTransportMulticastSessionPolicy_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportMulticastSessionPolicy;
typedef struct IWdsTransportMulticastSessionPolicyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportMulticastSessionPolicy * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportMulticastSessionPolicy * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportMulticastSessionPolicy * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportMulticastSessionPolicy * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportMulticastSessionPolicy * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportMulticastSessionPolicy * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportMulticastSessionPolicy * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Dirty) (IWdsTransportMulticastSessionPolicy * This, VARIANT_BOOL * pbDirty);
	HRESULT(STDMETHODCALLTYPE * Discard) (IWdsTransportMulticastSessionPolicy * This);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IWdsTransportMulticastSessionPolicy * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IWdsTransportMulticastSessionPolicy * This);
	HRESULT(STDMETHODCALLTYPE * get_SlowClientHandling) (IWdsTransportMulticastSessionPolicy * This, WDSTRANSPORT_SLOW_CLIENT_HANDLING_TYPE * pSlowClientHandling);
	HRESULT(STDMETHODCALLTYPE * put_SlowClientHandling) (IWdsTransportMulticastSessionPolicy * This, WDSTRANSPORT_SLOW_CLIENT_HANDLING_TYPE SlowClientHandling);
	HRESULT(STDMETHODCALLTYPE * get_AutoDisconnectThreshold) (IWdsTransportMulticastSessionPolicy * This, ULONG * pulThreshold);
	HRESULT(STDMETHODCALLTYPE * put_AutoDisconnectThreshold) (IWdsTransportMulticastSessionPolicy * This, ULONG ulThreshold);
	HRESULT(STDMETHODCALLTYPE * get_MultistreamStreamCount) (IWdsTransportMulticastSessionPolicy * This, ULONG * pulStreamCount);
	HRESULT(STDMETHODCALLTYPE * put_MultistreamStreamCount) (IWdsTransportMulticastSessionPolicy * This, ULONG ulStreamCount);
	HRESULT(STDMETHODCALLTYPE * get_SlowClientFallback) (IWdsTransportMulticastSessionPolicy * This, VARIANT_BOOL * pbClientFallback);
	HRESULT(STDMETHODCALLTYPE * put_SlowClientFallback) (IWdsTransportMulticastSessionPolicy * This, VARIANT_BOOL bClientFallback);
	END_INTERFACE
}  IWdsTransportMulticastSessionPolicyVtbl;
interface IWdsTransportMulticastSessionPolicy
{
	CONST_VTBL struct IWdsTransportMulticastSessionPolicyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportMulticastSessionPolicy_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportMulticastSessionPolicy_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportMulticastSessionPolicy_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportMulticastSessionPolicy_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportMulticastSessionPolicy_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportMulticastSessionPolicy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportMulticastSessionPolicy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportMulticastSessionPolicy_get_Dirty(This,pbDirty) ( (This)->lpVtbl -> get_Dirty(This,pbDirty) )
#define IWdsTransportMulticastSessionPolicy_Discard(This) ( (This)->lpVtbl -> Discard(This) )
#define IWdsTransportMulticastSessionPolicy_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IWdsTransportMulticastSessionPolicy_Commit(This) ( (This)->lpVtbl -> Commit(This) )
#define IWdsTransportMulticastSessionPolicy_get_SlowClientHandling(This,pSlowClientHandling) ( (This)->lpVtbl -> get_SlowClientHandling(This,pSlowClientHandling) )
#define IWdsTransportMulticastSessionPolicy_put_SlowClientHandling(This,SlowClientHandling) ( (This)->lpVtbl -> put_SlowClientHandling(This,SlowClientHandling) )
#define IWdsTransportMulticastSessionPolicy_get_AutoDisconnectThreshold(This,pulThreshold) ( (This)->lpVtbl -> get_AutoDisconnectThreshold(This,pulThreshold) )
#define IWdsTransportMulticastSessionPolicy_put_AutoDisconnectThreshold(This,ulThreshold) ( (This)->lpVtbl -> put_AutoDisconnectThreshold(This,ulThreshold) )
#define IWdsTransportMulticastSessionPolicy_get_MultistreamStreamCount(This,pulStreamCount) ( (This)->lpVtbl -> get_MultistreamStreamCount(This,pulStreamCount) )
#define IWdsTransportMulticastSessionPolicy_put_MultistreamStreamCount(This,ulStreamCount) ( (This)->lpVtbl -> put_MultistreamStreamCount(This,ulStreamCount) )
#define IWdsTransportMulticastSessionPolicy_get_SlowClientFallback(This,pbClientFallback) ( (This)->lpVtbl -> get_SlowClientFallback(This,pbClientFallback) )
#define IWdsTransportMulticastSessionPolicy_put_SlowClientFallback(This,bClientFallback) ( (This)->lpVtbl -> put_SlowClientFallback(This,bClientFallback) )
#endif
#endif
#ifndef __IWdsTransportNamespace_INTERFACE_DEFINED__
#define __IWdsTransportNamespace_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportNamespace;
typedef struct IWdsTransportNamespaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportNamespace * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportNamespace * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportNamespace * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportNamespace * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportNamespace * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportNamespace * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportNamespace * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IWdsTransportNamespace * This, WDSTRANSPORT_NAMESPACE_TYPE * pType);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IWdsTransportNamespace * This, ULONG * pulId);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IWdsTransportNamespace * This, BSTR * pbszName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IWdsTransportNamespace * This, BSTR bszName);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IWdsTransportNamespace * This, BSTR * pbszFriendlyName);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IWdsTransportNamespace * This, BSTR bszFriendlyName);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IWdsTransportNamespace * This, BSTR * pbszDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IWdsTransportNamespace * This, BSTR bszDescription);
	HRESULT(STDMETHODCALLTYPE * get_ContentProvider) (IWdsTransportNamespace * This, BSTR * pbszContentProvider);
	HRESULT(STDMETHODCALLTYPE * put_ContentProvider) (IWdsTransportNamespace * This, BSTR bszContentProvider);
	HRESULT(STDMETHODCALLTYPE * get_Configuration) (IWdsTransportNamespace * This, BSTR * pbszConfiguration);
	HRESULT(STDMETHODCALLTYPE * put_Configuration) (IWdsTransportNamespace * This, BSTR bszConfiguration);
	HRESULT(STDMETHODCALLTYPE * get_Registered) (IWdsTransportNamespace * This, VARIANT_BOOL * pbRegistered);
	HRESULT(STDMETHODCALLTYPE * get_Tombstoned) (IWdsTransportNamespace * This, VARIANT_BOOL * pbTombstoned);
	HRESULT(STDMETHODCALLTYPE * get_TombstoneTime) (IWdsTransportNamespace * This, DATE * pTombstoneTime);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionStarted) (IWdsTransportNamespace * This, VARIANT_BOOL * pbTransmissionStarted);
	HRESULT(STDMETHODCALLTYPE * Register) (IWdsTransportNamespace * This);
	HRESULT(STDMETHODCALLTYPE * Deregister) (IWdsTransportNamespace * This, VARIANT_BOOL bTerminateSessions);
	HRESULT(STDMETHODCALLTYPE * Clone) (IWdsTransportNamespace * This, IWdsTransportNamespace ** ppWdsTransportNamespaceClone);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IWdsTransportNamespace * This);
	HRESULT(STDMETHODCALLTYPE * RetrieveContents) (IWdsTransportNamespace * This, IWdsTransportCollection ** ppWdsTransportContents);
	END_INTERFACE
}  IWdsTransportNamespaceVtbl;
interface IWdsTransportNamespace
{
	CONST_VTBL struct IWdsTransportNamespaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportNamespace_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportNamespace_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportNamespace_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportNamespace_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportNamespace_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportNamespace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportNamespace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportNamespace_get_Type(This,pType) ( (This)->lpVtbl -> get_Type(This,pType) )
#define IWdsTransportNamespace_get_Id(This,pulId) ( (This)->lpVtbl -> get_Id(This,pulId) )
#define IWdsTransportNamespace_get_Name(This,pbszName) ( (This)->lpVtbl -> get_Name(This,pbszName) )
#define IWdsTransportNamespace_put_Name(This,bszName) ( (This)->lpVtbl -> put_Name(This,bszName) )
#define IWdsTransportNamespace_get_FriendlyName(This,pbszFriendlyName) ( (This)->lpVtbl -> get_FriendlyName(This,pbszFriendlyName) )
#define IWdsTransportNamespace_put_FriendlyName(This,bszFriendlyName) ( (This)->lpVtbl -> put_FriendlyName(This,bszFriendlyName) )
#define IWdsTransportNamespace_get_Description(This,pbszDescription) ( (This)->lpVtbl -> get_Description(This,pbszDescription) )
#define IWdsTransportNamespace_put_Description(This,bszDescription) ( (This)->lpVtbl -> put_Description(This,bszDescription) )
#define IWdsTransportNamespace_get_ContentProvider(This,pbszContentProvider) ( (This)->lpVtbl -> get_ContentProvider(This,pbszContentProvider) )
#define IWdsTransportNamespace_put_ContentProvider(This,bszContentProvider) ( (This)->lpVtbl -> put_ContentProvider(This,bszContentProvider) )
#define IWdsTransportNamespace_get_Configuration(This,pbszConfiguration) ( (This)->lpVtbl -> get_Configuration(This,pbszConfiguration) )
#define IWdsTransportNamespace_put_Configuration(This,bszConfiguration) ( (This)->lpVtbl -> put_Configuration(This,bszConfiguration) )
#define IWdsTransportNamespace_get_Registered(This,pbRegistered) ( (This)->lpVtbl -> get_Registered(This,pbRegistered) )
#define IWdsTransportNamespace_get_Tombstoned(This,pbTombstoned) ( (This)->lpVtbl -> get_Tombstoned(This,pbTombstoned) )
#define IWdsTransportNamespace_get_TombstoneTime(This,pTombstoneTime) ( (This)->lpVtbl -> get_TombstoneTime(This,pTombstoneTime) )
#define IWdsTransportNamespace_get_TransmissionStarted(This,pbTransmissionStarted) ( (This)->lpVtbl -> get_TransmissionStarted(This,pbTransmissionStarted) )
#define IWdsTransportNamespace_Register(This) ( (This)->lpVtbl -> Register(This) )
#define IWdsTransportNamespace_Deregister(This,bTerminateSessions) ( (This)->lpVtbl -> Deregister(This,bTerminateSessions) )
#define IWdsTransportNamespace_Clone(This,ppWdsTransportNamespaceClone) ( (This)->lpVtbl -> Clone(This,ppWdsTransportNamespaceClone) )
#define IWdsTransportNamespace_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IWdsTransportNamespace_RetrieveContents(This,ppWdsTransportContents) ( (This)->lpVtbl -> RetrieveContents(This,ppWdsTransportContents) )
#endif
#endif
#ifndef __IWdsTransportNamespaceAutoCast_INTERFACE_DEFINED__
#define __IWdsTransportNamespaceAutoCast_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportNamespaceAutoCast;
typedef struct IWdsTransportNamespaceAutoCastVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportNamespaceAutoCast * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportNamespaceAutoCast * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportNamespaceAutoCast * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportNamespaceAutoCast * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportNamespaceAutoCast * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportNamespaceAutoCast * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportNamespaceAutoCast * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IWdsTransportNamespaceAutoCast * This, WDSTRANSPORT_NAMESPACE_TYPE * pType);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IWdsTransportNamespaceAutoCast * This, ULONG * pulId);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IWdsTransportNamespaceAutoCast * This, BSTR * pbszName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IWdsTransportNamespaceAutoCast * This, BSTR bszName);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IWdsTransportNamespaceAutoCast * This, BSTR * pbszFriendlyName);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IWdsTransportNamespaceAutoCast * This, BSTR bszFriendlyName);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IWdsTransportNamespaceAutoCast * This, BSTR * pbszDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IWdsTransportNamespaceAutoCast * This, BSTR bszDescription);
	HRESULT(STDMETHODCALLTYPE * get_ContentProvider) (IWdsTransportNamespaceAutoCast * This, BSTR * pbszContentProvider);
	HRESULT(STDMETHODCALLTYPE * put_ContentProvider) (IWdsTransportNamespaceAutoCast * This, BSTR bszContentProvider);
	HRESULT(STDMETHODCALLTYPE * get_Configuration) (IWdsTransportNamespaceAutoCast * This, BSTR * pbszConfiguration);
	HRESULT(STDMETHODCALLTYPE * put_Configuration) (IWdsTransportNamespaceAutoCast * This, BSTR bszConfiguration);
	HRESULT(STDMETHODCALLTYPE * get_Registered) (IWdsTransportNamespaceAutoCast * This, VARIANT_BOOL * pbRegistered);
	HRESULT(STDMETHODCALLTYPE * get_Tombstoned) (IWdsTransportNamespaceAutoCast * This, VARIANT_BOOL * pbTombstoned);
	HRESULT(STDMETHODCALLTYPE * get_TombstoneTime) (IWdsTransportNamespaceAutoCast * This, DATE * pTombstoneTime);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionStarted) (IWdsTransportNamespaceAutoCast * This, VARIANT_BOOL * pbTransmissionStarted);
	HRESULT(STDMETHODCALLTYPE * Register) (IWdsTransportNamespaceAutoCast * This);
	HRESULT(STDMETHODCALLTYPE * Deregister) (IWdsTransportNamespaceAutoCast * This, VARIANT_BOOL bTerminateSessions);
	HRESULT(STDMETHODCALLTYPE * Clone) (IWdsTransportNamespaceAutoCast * This, IWdsTransportNamespace ** ppWdsTransportNamespaceClone);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IWdsTransportNamespaceAutoCast * This);
	HRESULT(STDMETHODCALLTYPE * RetrieveContents) (IWdsTransportNamespaceAutoCast * This, IWdsTransportCollection ** ppWdsTransportContents);
	END_INTERFACE
}  IWdsTransportNamespaceAutoCastVtbl;
interface IWdsTransportNamespaceAutoCast
{
	CONST_VTBL struct IWdsTransportNamespaceAutoCastVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportNamespaceAutoCast_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportNamespaceAutoCast_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportNamespaceAutoCast_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportNamespaceAutoCast_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportNamespaceAutoCast_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportNamespaceAutoCast_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportNamespaceAutoCast_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportNamespaceAutoCast_get_Type(This,pType) ( (This)->lpVtbl -> get_Type(This,pType) )
#define IWdsTransportNamespaceAutoCast_get_Id(This,pulId) ( (This)->lpVtbl -> get_Id(This,pulId) )
#define IWdsTransportNamespaceAutoCast_get_Name(This,pbszName) ( (This)->lpVtbl -> get_Name(This,pbszName) )
#define IWdsTransportNamespaceAutoCast_put_Name(This,bszName) ( (This)->lpVtbl -> put_Name(This,bszName) )
#define IWdsTransportNamespaceAutoCast_get_FriendlyName(This,pbszFriendlyName) ( (This)->lpVtbl -> get_FriendlyName(This,pbszFriendlyName) )
#define IWdsTransportNamespaceAutoCast_put_FriendlyName(This,bszFriendlyName) ( (This)->lpVtbl -> put_FriendlyName(This,bszFriendlyName) )
#define IWdsTransportNamespaceAutoCast_get_Description(This,pbszDescription) ( (This)->lpVtbl -> get_Description(This,pbszDescription) )
#define IWdsTransportNamespaceAutoCast_put_Description(This,bszDescription) ( (This)->lpVtbl -> put_Description(This,bszDescription) )
#define IWdsTransportNamespaceAutoCast_get_ContentProvider(This,pbszContentProvider) ( (This)->lpVtbl -> get_ContentProvider(This,pbszContentProvider) )
#define IWdsTransportNamespaceAutoCast_put_ContentProvider(This,bszContentProvider) ( (This)->lpVtbl -> put_ContentProvider(This,bszContentProvider) )
#define IWdsTransportNamespaceAutoCast_get_Configuration(This,pbszConfiguration) ( (This)->lpVtbl -> get_Configuration(This,pbszConfiguration) )
#define IWdsTransportNamespaceAutoCast_put_Configuration(This,bszConfiguration) ( (This)->lpVtbl -> put_Configuration(This,bszConfiguration) )
#define IWdsTransportNamespaceAutoCast_get_Registered(This,pbRegistered) ( (This)->lpVtbl -> get_Registered(This,pbRegistered) )
#define IWdsTransportNamespaceAutoCast_get_Tombstoned(This,pbTombstoned) ( (This)->lpVtbl -> get_Tombstoned(This,pbTombstoned) )
#define IWdsTransportNamespaceAutoCast_get_TombstoneTime(This,pTombstoneTime) ( (This)->lpVtbl -> get_TombstoneTime(This,pTombstoneTime) )
#define IWdsTransportNamespaceAutoCast_get_TransmissionStarted(This,pbTransmissionStarted) ( (This)->lpVtbl -> get_TransmissionStarted(This,pbTransmissionStarted) )
#define IWdsTransportNamespaceAutoCast_Register(This) ( (This)->lpVtbl -> Register(This) )
#define IWdsTransportNamespaceAutoCast_Deregister(This,bTerminateSessions) ( (This)->lpVtbl -> Deregister(This,bTerminateSessions) )
#define IWdsTransportNamespaceAutoCast_Clone(This,ppWdsTransportNamespaceClone) ( (This)->lpVtbl -> Clone(This,ppWdsTransportNamespaceClone) )
#define IWdsTransportNamespaceAutoCast_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IWdsTransportNamespaceAutoCast_RetrieveContents(This,ppWdsTransportContents) ( (This)->lpVtbl -> RetrieveContents(This,ppWdsTransportContents) )
#endif
#endif
#ifndef __IWdsTransportNamespaceScheduledCast_INTERFACE_DEFINED__
#define __IWdsTransportNamespaceScheduledCast_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportNamespaceScheduledCast;
typedef struct IWdsTransportNamespaceScheduledCastVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportNamespaceScheduledCast * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportNamespaceScheduledCast * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportNamespaceScheduledCast * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportNamespaceScheduledCast * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportNamespaceScheduledCast * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportNamespaceScheduledCast * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportNamespaceScheduledCast * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IWdsTransportNamespaceScheduledCast * This, WDSTRANSPORT_NAMESPACE_TYPE * pType);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IWdsTransportNamespaceScheduledCast * This, ULONG * pulId);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IWdsTransportNamespaceScheduledCast * This, BSTR * pbszName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IWdsTransportNamespaceScheduledCast * This, BSTR bszName);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IWdsTransportNamespaceScheduledCast * This, BSTR * pbszFriendlyName);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IWdsTransportNamespaceScheduledCast * This, BSTR bszFriendlyName);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IWdsTransportNamespaceScheduledCast * This, BSTR * pbszDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IWdsTransportNamespaceScheduledCast * This, BSTR bszDescription);
	HRESULT(STDMETHODCALLTYPE * get_ContentProvider) (IWdsTransportNamespaceScheduledCast * This, BSTR * pbszContentProvider);
	HRESULT(STDMETHODCALLTYPE * put_ContentProvider) (IWdsTransportNamespaceScheduledCast * This, BSTR bszContentProvider);
	HRESULT(STDMETHODCALLTYPE * get_Configuration) (IWdsTransportNamespaceScheduledCast * This, BSTR * pbszConfiguration);
	HRESULT(STDMETHODCALLTYPE * put_Configuration) (IWdsTransportNamespaceScheduledCast * This, BSTR bszConfiguration);
	HRESULT(STDMETHODCALLTYPE * get_Registered) (IWdsTransportNamespaceScheduledCast * This, VARIANT_BOOL * pbRegistered);
	HRESULT(STDMETHODCALLTYPE * get_Tombstoned) (IWdsTransportNamespaceScheduledCast * This, VARIANT_BOOL * pbTombstoned);
	HRESULT(STDMETHODCALLTYPE * get_TombstoneTime) (IWdsTransportNamespaceScheduledCast * This, DATE * pTombstoneTime);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionStarted) (IWdsTransportNamespaceScheduledCast * This, VARIANT_BOOL * pbTransmissionStarted);
	HRESULT(STDMETHODCALLTYPE * Register) (IWdsTransportNamespaceScheduledCast * This);
	HRESULT(STDMETHODCALLTYPE * Deregister) (IWdsTransportNamespaceScheduledCast * This, VARIANT_BOOL bTerminateSessions);
	HRESULT(STDMETHODCALLTYPE * Clone) (IWdsTransportNamespaceScheduledCast * This, IWdsTransportNamespace ** ppWdsTransportNamespaceClone);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IWdsTransportNamespaceScheduledCast * This);
	HRESULT(STDMETHODCALLTYPE * RetrieveContents) (IWdsTransportNamespaceScheduledCast * This, IWdsTransportCollection ** ppWdsTransportContents);
	HRESULT(STDMETHODCALLTYPE * StartTransmission) (IWdsTransportNamespaceScheduledCast * This);
	END_INTERFACE
}  IWdsTransportNamespaceScheduledCastVtbl;
interface IWdsTransportNamespaceScheduledCast
{
	CONST_VTBL struct IWdsTransportNamespaceScheduledCastVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportNamespaceScheduledCast_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportNamespaceScheduledCast_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportNamespaceScheduledCast_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportNamespaceScheduledCast_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportNamespaceScheduledCast_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportNamespaceScheduledCast_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportNamespaceScheduledCast_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportNamespaceScheduledCast_get_Type(This,pType) ( (This)->lpVtbl -> get_Type(This,pType) )
#define IWdsTransportNamespaceScheduledCast_get_Id(This,pulId) ( (This)->lpVtbl -> get_Id(This,pulId) )
#define IWdsTransportNamespaceScheduledCast_get_Name(This,pbszName) ( (This)->lpVtbl -> get_Name(This,pbszName) )
#define IWdsTransportNamespaceScheduledCast_put_Name(This,bszName) ( (This)->lpVtbl -> put_Name(This,bszName) )
#define IWdsTransportNamespaceScheduledCast_get_FriendlyName(This,pbszFriendlyName) ( (This)->lpVtbl -> get_FriendlyName(This,pbszFriendlyName) )
#define IWdsTransportNamespaceScheduledCast_put_FriendlyName(This,bszFriendlyName) ( (This)->lpVtbl -> put_FriendlyName(This,bszFriendlyName) )
#define IWdsTransportNamespaceScheduledCast_get_Description(This,pbszDescription) ( (This)->lpVtbl -> get_Description(This,pbszDescription) )
#define IWdsTransportNamespaceScheduledCast_put_Description(This,bszDescription) ( (This)->lpVtbl -> put_Description(This,bszDescription) )
#define IWdsTransportNamespaceScheduledCast_get_ContentProvider(This,pbszContentProvider) ( (This)->lpVtbl -> get_ContentProvider(This,pbszContentProvider) )
#define IWdsTransportNamespaceScheduledCast_put_ContentProvider(This,bszContentProvider) ( (This)->lpVtbl -> put_ContentProvider(This,bszContentProvider) )
#define IWdsTransportNamespaceScheduledCast_get_Configuration(This,pbszConfiguration) ( (This)->lpVtbl -> get_Configuration(This,pbszConfiguration) )
#define IWdsTransportNamespaceScheduledCast_put_Configuration(This,bszConfiguration) ( (This)->lpVtbl -> put_Configuration(This,bszConfiguration) )
#define IWdsTransportNamespaceScheduledCast_get_Registered(This,pbRegistered) ( (This)->lpVtbl -> get_Registered(This,pbRegistered) )
#define IWdsTransportNamespaceScheduledCast_get_Tombstoned(This,pbTombstoned) ( (This)->lpVtbl -> get_Tombstoned(This,pbTombstoned) )
#define IWdsTransportNamespaceScheduledCast_get_TombstoneTime(This,pTombstoneTime) ( (This)->lpVtbl -> get_TombstoneTime(This,pTombstoneTime) )
#define IWdsTransportNamespaceScheduledCast_get_TransmissionStarted(This,pbTransmissionStarted) ( (This)->lpVtbl -> get_TransmissionStarted(This,pbTransmissionStarted) )
#define IWdsTransportNamespaceScheduledCast_Register(This) ( (This)->lpVtbl -> Register(This) )
#define IWdsTransportNamespaceScheduledCast_Deregister(This,bTerminateSessions) ( (This)->lpVtbl -> Deregister(This,bTerminateSessions) )
#define IWdsTransportNamespaceScheduledCast_Clone(This,ppWdsTransportNamespaceClone) ( (This)->lpVtbl -> Clone(This,ppWdsTransportNamespaceClone) )
#define IWdsTransportNamespaceScheduledCast_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IWdsTransportNamespaceScheduledCast_RetrieveContents(This,ppWdsTransportContents) ( (This)->lpVtbl -> RetrieveContents(This,ppWdsTransportContents) )
#define IWdsTransportNamespaceScheduledCast_StartTransmission(This) ( (This)->lpVtbl -> StartTransmission(This) )
#endif
#endif
#ifndef __IWdsTransportNamespaceScheduledCastManualStart_INTERFACE_DEFINED__
#define __IWdsTransportNamespaceScheduledCastManualStart_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportNamespaceScheduledCastManualStart;
typedef struct IWdsTransportNamespaceScheduledCastManualStartVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportNamespaceScheduledCastManualStart * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportNamespaceScheduledCastManualStart * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportNamespaceScheduledCastManualStart * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportNamespaceScheduledCastManualStart * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportNamespaceScheduledCastManualStart * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportNamespaceScheduledCastManualStart * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportNamespaceScheduledCastManualStart * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IWdsTransportNamespaceScheduledCastManualStart * This, WDSTRANSPORT_NAMESPACE_TYPE * pType);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IWdsTransportNamespaceScheduledCastManualStart * This, ULONG * pulId);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IWdsTransportNamespaceScheduledCastManualStart * This, BSTR * pbszName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IWdsTransportNamespaceScheduledCastManualStart * This, BSTR bszName);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IWdsTransportNamespaceScheduledCastManualStart * This, BSTR * pbszFriendlyName);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IWdsTransportNamespaceScheduledCastManualStart * This, BSTR bszFriendlyName);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IWdsTransportNamespaceScheduledCastManualStart * This, BSTR * pbszDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IWdsTransportNamespaceScheduledCastManualStart * This, BSTR bszDescription);
	HRESULT(STDMETHODCALLTYPE * get_ContentProvider) (IWdsTransportNamespaceScheduledCastManualStart * This, BSTR * pbszContentProvider);
	HRESULT(STDMETHODCALLTYPE * put_ContentProvider) (IWdsTransportNamespaceScheduledCastManualStart * This, BSTR bszContentProvider);
	HRESULT(STDMETHODCALLTYPE * get_Configuration) (IWdsTransportNamespaceScheduledCastManualStart * This, BSTR * pbszConfiguration);
	HRESULT(STDMETHODCALLTYPE * put_Configuration) (IWdsTransportNamespaceScheduledCastManualStart * This, BSTR bszConfiguration);
	HRESULT(STDMETHODCALLTYPE * get_Registered) (IWdsTransportNamespaceScheduledCastManualStart * This, VARIANT_BOOL * pbRegistered);
	HRESULT(STDMETHODCALLTYPE * get_Tombstoned) (IWdsTransportNamespaceScheduledCastManualStart * This, VARIANT_BOOL * pbTombstoned);
	HRESULT(STDMETHODCALLTYPE * get_TombstoneTime) (IWdsTransportNamespaceScheduledCastManualStart * This, DATE * pTombstoneTime);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionStarted) (IWdsTransportNamespaceScheduledCastManualStart * This, VARIANT_BOOL * pbTransmissionStarted);
	HRESULT(STDMETHODCALLTYPE * Register) (IWdsTransportNamespaceScheduledCastManualStart * This);
	HRESULT(STDMETHODCALLTYPE * Deregister) (IWdsTransportNamespaceScheduledCastManualStart * This, VARIANT_BOOL bTerminateSessions);
	HRESULT(STDMETHODCALLTYPE * Clone) (IWdsTransportNamespaceScheduledCastManualStart * This, IWdsTransportNamespace ** ppWdsTransportNamespaceClone);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IWdsTransportNamespaceScheduledCastManualStart * This);
	HRESULT(STDMETHODCALLTYPE * RetrieveContents) (IWdsTransportNamespaceScheduledCastManualStart * This, IWdsTransportCollection ** ppWdsTransportContents);
	HRESULT(STDMETHODCALLTYPE * StartTransmission) (IWdsTransportNamespaceScheduledCastManualStart * This);
	END_INTERFACE
}  IWdsTransportNamespaceScheduledCastManualStartVtbl;
interface IWdsTransportNamespaceScheduledCastManualStart
{
	CONST_VTBL struct IWdsTransportNamespaceScheduledCastManualStartVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportNamespaceScheduledCastManualStart_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportNamespaceScheduledCastManualStart_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportNamespaceScheduledCastManualStart_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportNamespaceScheduledCastManualStart_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportNamespaceScheduledCastManualStart_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportNamespaceScheduledCastManualStart_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportNamespaceScheduledCastManualStart_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportNamespaceScheduledCastManualStart_get_Type(This,pType) ( (This)->lpVtbl -> get_Type(This,pType) )
#define IWdsTransportNamespaceScheduledCastManualStart_get_Id(This,pulId) ( (This)->lpVtbl -> get_Id(This,pulId) )
#define IWdsTransportNamespaceScheduledCastManualStart_get_Name(This,pbszName) ( (This)->lpVtbl -> get_Name(This,pbszName) )
#define IWdsTransportNamespaceScheduledCastManualStart_put_Name(This,bszName) ( (This)->lpVtbl -> put_Name(This,bszName) )
#define IWdsTransportNamespaceScheduledCastManualStart_get_FriendlyName(This,pbszFriendlyName) ( (This)->lpVtbl -> get_FriendlyName(This,pbszFriendlyName) )
#define IWdsTransportNamespaceScheduledCastManualStart_put_FriendlyName(This,bszFriendlyName) ( (This)->lpVtbl -> put_FriendlyName(This,bszFriendlyName) )
#define IWdsTransportNamespaceScheduledCastManualStart_get_Description(This,pbszDescription) ( (This)->lpVtbl -> get_Description(This,pbszDescription) )
#define IWdsTransportNamespaceScheduledCastManualStart_put_Description(This,bszDescription) ( (This)->lpVtbl -> put_Description(This,bszDescription) )
#define IWdsTransportNamespaceScheduledCastManualStart_get_ContentProvider(This,pbszContentProvider) ( (This)->lpVtbl -> get_ContentProvider(This,pbszContentProvider) )
#define IWdsTransportNamespaceScheduledCastManualStart_put_ContentProvider(This,bszContentProvider) ( (This)->lpVtbl -> put_ContentProvider(This,bszContentProvider) )
#define IWdsTransportNamespaceScheduledCastManualStart_get_Configuration(This,pbszConfiguration) ( (This)->lpVtbl -> get_Configuration(This,pbszConfiguration) )
#define IWdsTransportNamespaceScheduledCastManualStart_put_Configuration(This,bszConfiguration) ( (This)->lpVtbl -> put_Configuration(This,bszConfiguration) )
#define IWdsTransportNamespaceScheduledCastManualStart_get_Registered(This,pbRegistered) ( (This)->lpVtbl -> get_Registered(This,pbRegistered) )
#define IWdsTransportNamespaceScheduledCastManualStart_get_Tombstoned(This,pbTombstoned) ( (This)->lpVtbl -> get_Tombstoned(This,pbTombstoned) )
#define IWdsTransportNamespaceScheduledCastManualStart_get_TombstoneTime(This,pTombstoneTime) ( (This)->lpVtbl -> get_TombstoneTime(This,pTombstoneTime) )
#define IWdsTransportNamespaceScheduledCastManualStart_get_TransmissionStarted(This,pbTransmissionStarted) ( (This)->lpVtbl -> get_TransmissionStarted(This,pbTransmissionStarted) )
#define IWdsTransportNamespaceScheduledCastManualStart_Register(This) ( (This)->lpVtbl -> Register(This) )
#define IWdsTransportNamespaceScheduledCastManualStart_Deregister(This,bTerminateSessions) ( (This)->lpVtbl -> Deregister(This,bTerminateSessions) )
#define IWdsTransportNamespaceScheduledCastManualStart_Clone(This,ppWdsTransportNamespaceClone) ( (This)->lpVtbl -> Clone(This,ppWdsTransportNamespaceClone) )
#define IWdsTransportNamespaceScheduledCastManualStart_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IWdsTransportNamespaceScheduledCastManualStart_RetrieveContents(This,ppWdsTransportContents) ( (This)->lpVtbl -> RetrieveContents(This,ppWdsTransportContents) )
#define IWdsTransportNamespaceScheduledCastManualStart_StartTransmission(This) ( (This)->lpVtbl -> StartTransmission(This) )
#endif
#endif
#ifndef __IWdsTransportNamespaceScheduledCastAutoStart_INTERFACE_DEFINED__
#define __IWdsTransportNamespaceScheduledCastAutoStart_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportNamespaceScheduledCastAutoStart;
typedef struct IWdsTransportNamespaceScheduledCastAutoStartVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportNamespaceScheduledCastAutoStart * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportNamespaceScheduledCastAutoStart * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportNamespaceScheduledCastAutoStart * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportNamespaceScheduledCastAutoStart * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportNamespaceScheduledCastAutoStart * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportNamespaceScheduledCastAutoStart * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportNamespaceScheduledCastAutoStart * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IWdsTransportNamespaceScheduledCastAutoStart * This, WDSTRANSPORT_NAMESPACE_TYPE * pType);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IWdsTransportNamespaceScheduledCastAutoStart * This, ULONG * pulId);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IWdsTransportNamespaceScheduledCastAutoStart * This, BSTR * pbszName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IWdsTransportNamespaceScheduledCastAutoStart * This, BSTR bszName);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IWdsTransportNamespaceScheduledCastAutoStart * This, BSTR * pbszFriendlyName);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IWdsTransportNamespaceScheduledCastAutoStart * This, BSTR bszFriendlyName);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IWdsTransportNamespaceScheduledCastAutoStart * This, BSTR * pbszDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IWdsTransportNamespaceScheduledCastAutoStart * This, BSTR bszDescription);
	HRESULT(STDMETHODCALLTYPE * get_ContentProvider) (IWdsTransportNamespaceScheduledCastAutoStart * This, BSTR * pbszContentProvider);
	HRESULT(STDMETHODCALLTYPE * put_ContentProvider) (IWdsTransportNamespaceScheduledCastAutoStart * This, BSTR bszContentProvider);
	HRESULT(STDMETHODCALLTYPE * get_Configuration) (IWdsTransportNamespaceScheduledCastAutoStart * This, BSTR * pbszConfiguration);
	HRESULT(STDMETHODCALLTYPE * put_Configuration) (IWdsTransportNamespaceScheduledCastAutoStart * This, BSTR bszConfiguration);
	HRESULT(STDMETHODCALLTYPE * get_Registered) (IWdsTransportNamespaceScheduledCastAutoStart * This, VARIANT_BOOL * pbRegistered);
	HRESULT(STDMETHODCALLTYPE * get_Tombstoned) (IWdsTransportNamespaceScheduledCastAutoStart * This, VARIANT_BOOL * pbTombstoned);
	HRESULT(STDMETHODCALLTYPE * get_TombstoneTime) (IWdsTransportNamespaceScheduledCastAutoStart * This, DATE * pTombstoneTime);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionStarted) (IWdsTransportNamespaceScheduledCastAutoStart * This, VARIANT_BOOL * pbTransmissionStarted);
	HRESULT(STDMETHODCALLTYPE * Register) (IWdsTransportNamespaceScheduledCastAutoStart * This);
	HRESULT(STDMETHODCALLTYPE * Deregister) (IWdsTransportNamespaceScheduledCastAutoStart * This, VARIANT_BOOL bTerminateSessions);
	HRESULT(STDMETHODCALLTYPE * Clone) (IWdsTransportNamespaceScheduledCastAutoStart * This, IWdsTransportNamespace ** ppWdsTransportNamespaceClone);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IWdsTransportNamespaceScheduledCastAutoStart * This);
	HRESULT(STDMETHODCALLTYPE * RetrieveContents) (IWdsTransportNamespaceScheduledCastAutoStart * This, IWdsTransportCollection ** ppWdsTransportContents);
	HRESULT(STDMETHODCALLTYPE * StartTransmission) (IWdsTransportNamespaceScheduledCastAutoStart * This);
	HRESULT(STDMETHODCALLTYPE * get_MinimumClients) (IWdsTransportNamespaceScheduledCastAutoStart * This, ULONG * pulMinimumClients);
	HRESULT(STDMETHODCALLTYPE * put_MinimumClients) (IWdsTransportNamespaceScheduledCastAutoStart * This, ULONG ulMinimumClients);
	HRESULT(STDMETHODCALLTYPE * get_StartTime) (IWdsTransportNamespaceScheduledCastAutoStart * This, DATE * pStartTime);
	HRESULT(STDMETHODCALLTYPE * put_StartTime) (IWdsTransportNamespaceScheduledCastAutoStart * This, DATE StartTime);
	END_INTERFACE
}  IWdsTransportNamespaceScheduledCastAutoStartVtbl;
interface IWdsTransportNamespaceScheduledCastAutoStart
{
	CONST_VTBL struct IWdsTransportNamespaceScheduledCastAutoStartVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportNamespaceScheduledCastAutoStart_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportNamespaceScheduledCastAutoStart_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportNamespaceScheduledCastAutoStart_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportNamespaceScheduledCastAutoStart_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportNamespaceScheduledCastAutoStart_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportNamespaceScheduledCastAutoStart_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportNamespaceScheduledCastAutoStart_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportNamespaceScheduledCastAutoStart_get_Type(This,pType) ( (This)->lpVtbl -> get_Type(This,pType) )
#define IWdsTransportNamespaceScheduledCastAutoStart_get_Id(This,pulId) ( (This)->lpVtbl -> get_Id(This,pulId) )
#define IWdsTransportNamespaceScheduledCastAutoStart_get_Name(This,pbszName) ( (This)->lpVtbl -> get_Name(This,pbszName) )
#define IWdsTransportNamespaceScheduledCastAutoStart_put_Name(This,bszName) ( (This)->lpVtbl -> put_Name(This,bszName) )
#define IWdsTransportNamespaceScheduledCastAutoStart_get_FriendlyName(This,pbszFriendlyName) ( (This)->lpVtbl -> get_FriendlyName(This,pbszFriendlyName) )
#define IWdsTransportNamespaceScheduledCastAutoStart_put_FriendlyName(This,bszFriendlyName) ( (This)->lpVtbl -> put_FriendlyName(This,bszFriendlyName) )
#define IWdsTransportNamespaceScheduledCastAutoStart_get_Description(This,pbszDescription) ( (This)->lpVtbl -> get_Description(This,pbszDescription) )
#define IWdsTransportNamespaceScheduledCastAutoStart_put_Description(This,bszDescription) ( (This)->lpVtbl -> put_Description(This,bszDescription) )
#define IWdsTransportNamespaceScheduledCastAutoStart_get_ContentProvider(This,pbszContentProvider) ( (This)->lpVtbl -> get_ContentProvider(This,pbszContentProvider) )
#define IWdsTransportNamespaceScheduledCastAutoStart_put_ContentProvider(This,bszContentProvider) ( (This)->lpVtbl -> put_ContentProvider(This,bszContentProvider) )
#define IWdsTransportNamespaceScheduledCastAutoStart_get_Configuration(This,pbszConfiguration) ( (This)->lpVtbl -> get_Configuration(This,pbszConfiguration) )
#define IWdsTransportNamespaceScheduledCastAutoStart_put_Configuration(This,bszConfiguration) ( (This)->lpVtbl -> put_Configuration(This,bszConfiguration) )
#define IWdsTransportNamespaceScheduledCastAutoStart_get_Registered(This,pbRegistered) ( (This)->lpVtbl -> get_Registered(This,pbRegistered) )
#define IWdsTransportNamespaceScheduledCastAutoStart_get_Tombstoned(This,pbTombstoned) ( (This)->lpVtbl -> get_Tombstoned(This,pbTombstoned) )
#define IWdsTransportNamespaceScheduledCastAutoStart_get_TombstoneTime(This,pTombstoneTime) ( (This)->lpVtbl -> get_TombstoneTime(This,pTombstoneTime) )
#define IWdsTransportNamespaceScheduledCastAutoStart_get_TransmissionStarted(This,pbTransmissionStarted) ( (This)->lpVtbl -> get_TransmissionStarted(This,pbTransmissionStarted) )
#define IWdsTransportNamespaceScheduledCastAutoStart_Register(This) ( (This)->lpVtbl -> Register(This) )
#define IWdsTransportNamespaceScheduledCastAutoStart_Deregister(This,bTerminateSessions) ( (This)->lpVtbl -> Deregister(This,bTerminateSessions) )
#define IWdsTransportNamespaceScheduledCastAutoStart_Clone(This,ppWdsTransportNamespaceClone) ( (This)->lpVtbl -> Clone(This,ppWdsTransportNamespaceClone) )
#define IWdsTransportNamespaceScheduledCastAutoStart_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IWdsTransportNamespaceScheduledCastAutoStart_RetrieveContents(This,ppWdsTransportContents) ( (This)->lpVtbl -> RetrieveContents(This,ppWdsTransportContents) )
#define IWdsTransportNamespaceScheduledCastAutoStart_StartTransmission(This) ( (This)->lpVtbl -> StartTransmission(This) )
#define IWdsTransportNamespaceScheduledCastAutoStart_get_MinimumClients(This,pulMinimumClients) ( (This)->lpVtbl -> get_MinimumClients(This,pulMinimumClients) )
#define IWdsTransportNamespaceScheduledCastAutoStart_put_MinimumClients(This,ulMinimumClients) ( (This)->lpVtbl -> put_MinimumClients(This,ulMinimumClients) )
#define IWdsTransportNamespaceScheduledCastAutoStart_get_StartTime(This,pStartTime) ( (This)->lpVtbl -> get_StartTime(This,pStartTime) )
#define IWdsTransportNamespaceScheduledCastAutoStart_put_StartTime(This,StartTime) ( (This)->lpVtbl -> put_StartTime(This,StartTime) )
#endif
#endif
#ifndef __IWdsTransportContent_INTERFACE_DEFINED__
#define __IWdsTransportContent_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportContent;
typedef struct IWdsTransportContentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportContent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportContent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportContent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportContent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportContent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportContent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportContent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Namespace) (IWdsTransportContent * This, IWdsTransportNamespace ** ppWdsTransportNamespace);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IWdsTransportContent * This, ULONG * pulId);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IWdsTransportContent * This, BSTR * pbszName);
	HRESULT(STDMETHODCALLTYPE * RetrieveSessions) (IWdsTransportContent * This, IWdsTransportCollection ** ppWdsTransportSessions);
	HRESULT(STDMETHODCALLTYPE * Terminate) (IWdsTransportContent * This);
	END_INTERFACE
}  IWdsTransportContentVtbl;
interface IWdsTransportContent
{
	CONST_VTBL struct IWdsTransportContentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportContent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportContent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportContent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportContent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportContent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportContent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportContent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportContent_get_Namespace(This,ppWdsTransportNamespace) ( (This)->lpVtbl -> get_Namespace(This,ppWdsTransportNamespace) )
#define IWdsTransportContent_get_Id(This,pulId) ( (This)->lpVtbl -> get_Id(This,pulId) )
#define IWdsTransportContent_get_Name(This,pbszName) ( (This)->lpVtbl -> get_Name(This,pbszName) )
#define IWdsTransportContent_RetrieveSessions(This,ppWdsTransportSessions) ( (This)->lpVtbl -> RetrieveSessions(This,ppWdsTransportSessions) )
#define IWdsTransportContent_Terminate(This) ( (This)->lpVtbl -> Terminate(This) )
#endif
#endif
#ifndef __IWdsTransportSession_INTERFACE_DEFINED__
#define __IWdsTransportSession_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportSession;
typedef struct IWdsTransportSessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportSession * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportSession * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportSession * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportSession * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportSession * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportSession * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportSession * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Content) (IWdsTransportSession * This, IWdsTransportContent ** ppWdsTransportContent);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IWdsTransportSession * This, ULONG * pulId);
	HRESULT(STDMETHODCALLTYPE * get_NetworkInterfaceName) (IWdsTransportSession * This, BSTR * pbszNetworkInterfaceName);
	HRESULT(STDMETHODCALLTYPE * get_NetworkInterfaceAddress) (IWdsTransportSession * This, BSTR * pbszNetworkInterfaceAddress);
	HRESULT(STDMETHODCALLTYPE * get_TransferRate) (IWdsTransportSession * This, ULONG * pulTransferRate);
	HRESULT(STDMETHODCALLTYPE * get_MasterClientId) (IWdsTransportSession * This, ULONG * pulMasterClientId);
	HRESULT(STDMETHODCALLTYPE * RetrieveClients) (IWdsTransportSession * This, IWdsTransportCollection ** ppWdsTransportClients);
	HRESULT(STDMETHODCALLTYPE * Terminate) (IWdsTransportSession * This);
	END_INTERFACE
}  IWdsTransportSessionVtbl;
interface IWdsTransportSession
{
	CONST_VTBL struct IWdsTransportSessionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportSession_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportSession_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportSession_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportSession_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportSession_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportSession_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportSession_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportSession_get_Content(This,ppWdsTransportContent) ( (This)->lpVtbl -> get_Content(This,ppWdsTransportContent) )
#define IWdsTransportSession_get_Id(This,pulId) ( (This)->lpVtbl -> get_Id(This,pulId) )
#define IWdsTransportSession_get_NetworkInterfaceName(This,pbszNetworkInterfaceName) ( (This)->lpVtbl -> get_NetworkInterfaceName(This,pbszNetworkInterfaceName) )
#define IWdsTransportSession_get_NetworkInterfaceAddress(This,pbszNetworkInterfaceAddress) ( (This)->lpVtbl -> get_NetworkInterfaceAddress(This,pbszNetworkInterfaceAddress) )
#define IWdsTransportSession_get_TransferRate(This,pulTransferRate) ( (This)->lpVtbl -> get_TransferRate(This,pulTransferRate) )
#define IWdsTransportSession_get_MasterClientId(This,pulMasterClientId) ( (This)->lpVtbl -> get_MasterClientId(This,pulMasterClientId) )
#define IWdsTransportSession_RetrieveClients(This,ppWdsTransportClients) ( (This)->lpVtbl -> RetrieveClients(This,ppWdsTransportClients) )
#define IWdsTransportSession_Terminate(This) ( (This)->lpVtbl -> Terminate(This) )
#endif
#endif
#ifndef __IWdsTransportClient_INTERFACE_DEFINED__
#define __IWdsTransportClient_INTERFACE_DEFINED__
extern const IID IID_IWdsTransportClient;
typedef struct IWdsTransportClientVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWdsTransportClient * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWdsTransportClient * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWdsTransportClient * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWdsTransportClient * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWdsTransportClient * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWdsTransportClient * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWdsTransportClient * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Session) (IWdsTransportClient * This, IWdsTransportSession ** ppWdsTransportSession);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IWdsTransportClient * This, ULONG * pulId);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IWdsTransportClient * This, BSTR * pbszName);
	HRESULT(STDMETHODCALLTYPE * get_MacAddress) (IWdsTransportClient * This, BSTR * pbszMacAddress);
	HRESULT(STDMETHODCALLTYPE * get_IpAddress) (IWdsTransportClient * This, BSTR * pbszIpAddress);
	HRESULT(STDMETHODCALLTYPE * get_PercentCompletion) (IWdsTransportClient * This, ULONG * pulPercentCompletion);
	HRESULT(STDMETHODCALLTYPE * get_JoinDuration) (IWdsTransportClient * This, ULONG * pulJoinDuration);
	HRESULT(STDMETHODCALLTYPE * get_CpuUtilization) (IWdsTransportClient * This, ULONG * pulCpuUtilization);
	HRESULT(STDMETHODCALLTYPE * get_MemoryUtilization) (IWdsTransportClient * This, ULONG * pulMemoryUtilization);
	HRESULT(STDMETHODCALLTYPE * get_NetworkUtilization) (IWdsTransportClient * This, ULONG * pulNetworkUtilization);
	HRESULT(STDMETHODCALLTYPE * get_UserIdentity) (IWdsTransportClient * This, BSTR * pbszUserIdentity);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (IWdsTransportClient * This, WDSTRANSPORT_DISCONNECT_TYPE DisconnectionType);
	END_INTERFACE
}  IWdsTransportClientVtbl;
interface IWdsTransportClient
{
	CONST_VTBL struct IWdsTransportClientVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWdsTransportClient_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWdsTransportClient_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWdsTransportClient_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWdsTransportClient_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWdsTransportClient_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWdsTransportClient_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWdsTransportClient_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWdsTransportClient_get_Session(This,ppWdsTransportSession) ( (This)->lpVtbl -> get_Session(This,ppWdsTransportSession) )
#define IWdsTransportClient_get_Id(This,pulId) ( (This)->lpVtbl -> get_Id(This,pulId) )
#define IWdsTransportClient_get_Name(This,pbszName) ( (This)->lpVtbl -> get_Name(This,pbszName) )
#define IWdsTransportClient_get_MacAddress(This,pbszMacAddress) ( (This)->lpVtbl -> get_MacAddress(This,pbszMacAddress) )
#define IWdsTransportClient_get_IpAddress(This,pbszIpAddress) ( (This)->lpVtbl -> get_IpAddress(This,pbszIpAddress) )
#define IWdsTransportClient_get_PercentCompletion(This,pulPercentCompletion) ( (This)->lpVtbl -> get_PercentCompletion(This,pulPercentCompletion) )
#define IWdsTransportClient_get_JoinDuration(This,pulJoinDuration) ( (This)->lpVtbl -> get_JoinDuration(This,pulJoinDuration) )
#define IWdsTransportClient_get_CpuUtilization(This,pulCpuUtilization) ( (This)->lpVtbl -> get_CpuUtilization(This,pulCpuUtilization) )
#define IWdsTransportClient_get_MemoryUtilization(This,pulMemoryUtilization) ( (This)->lpVtbl -> get_MemoryUtilization(This,pulMemoryUtilization) )
#define IWdsTransportClient_get_NetworkUtilization(This,pulNetworkUtilization) ( (This)->lpVtbl -> get_NetworkUtilization(This,pulNetworkUtilization) )
#define IWdsTransportClient_get_UserIdentity(This,pbszUserIdentity) ( (This)->lpVtbl -> get_UserIdentity(This,pbszUserIdentity) )
#define IWdsTransportClient_Disconnect(This,DisconnectionType) ( (This)->lpVtbl -> Disconnect(This,DisconnectionType) )
#endif
#endif
#ifndef __WdsTptMgmtLib_LIBRARY_DEFINED__
#define __WdsTptMgmtLib_LIBRARY_DEFINED__
extern const IID LIBID_WdsTptMgmtLib;
extern const CLSID CLSID_WdsTransportCacheable;
extern const CLSID CLSID_WdsTransportCollection;
extern const CLSID CLSID_WdsTransportManager;
extern const CLSID CLSID_WdsTransportServer;
extern const CLSID CLSID_WdsTransportSetupManager;
extern const CLSID CLSID_WdsTransportConfigurationManager;
extern const CLSID CLSID_WdsTransportNamespaceManager;
extern const CLSID CLSID_WdsTransportServicePolicy;
extern const CLSID CLSID_WdsTransportDiagnosticsPolicy;
extern const CLSID CLSID_WdsTransportMulticastSessionPolicy;
extern const CLSID CLSID_WdsTransportNamespace;
extern const CLSID CLSID_WdsTransportNamespaceAutoCast;
extern const CLSID CLSID_WdsTransportNamespaceScheduledCast;
extern const CLSID CLSID_WdsTransportNamespaceScheduledCastManualStart;
extern const CLSID CLSID_WdsTransportNamespaceScheduledCastAutoStart;
extern const CLSID CLSID_WdsTransportContent;
extern const CLSID CLSID_WdsTransportSession;
extern const CLSID CLSID_WdsTransportClient;
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
