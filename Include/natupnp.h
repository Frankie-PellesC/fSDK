/*+@@file@@----------------------------------------------------------------*//*!
 \file		natupnp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:36:04 2016
 \date		Modified on Sun Sep 11 22:36:04 2016
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
#ifndef __natupnp_h__
#define __natupnp_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IUPnPNAT_FWD_DEFINED__
#define __IUPnPNAT_FWD_DEFINED__
typedef interface IUPnPNAT IUPnPNAT;
#endif
#ifndef __INATEventManager_FWD_DEFINED__
#define __INATEventManager_FWD_DEFINED__
typedef interface INATEventManager INATEventManager;
#endif
#ifndef __INATExternalIPAddressCallback_FWD_DEFINED__
#define __INATExternalIPAddressCallback_FWD_DEFINED__
typedef interface INATExternalIPAddressCallback INATExternalIPAddressCallback;
#endif
#ifndef __INATNumberOfEntriesCallback_FWD_DEFINED__
#define __INATNumberOfEntriesCallback_FWD_DEFINED__
typedef interface INATNumberOfEntriesCallback INATNumberOfEntriesCallback;
#endif
#ifndef __IDynamicPortMappingCollection_FWD_DEFINED__
#define __IDynamicPortMappingCollection_FWD_DEFINED__
typedef interface IDynamicPortMappingCollection IDynamicPortMappingCollection;
#endif
#ifndef __IDynamicPortMapping_FWD_DEFINED__
#define __IDynamicPortMapping_FWD_DEFINED__
typedef interface IDynamicPortMapping IDynamicPortMapping;
#endif
#ifndef __IStaticPortMappingCollection_FWD_DEFINED__
#define __IStaticPortMappingCollection_FWD_DEFINED__
typedef interface IStaticPortMappingCollection IStaticPortMappingCollection;
#endif
#ifndef __IStaticPortMapping_FWD_DEFINED__
#define __IStaticPortMapping_FWD_DEFINED__
typedef interface IStaticPortMapping IStaticPortMapping;
#endif
#ifndef __UPnPNAT_FWD_DEFINED__
#define __UPnPNAT_FWD_DEFINED__
typedef struct UPnPNAT UPnPNAT;
#endif
#include "oaidl.h"
#include "ocidl.h"
extern RPC_IF_HANDLE __MIDL_itf_natupnp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_natupnp_0000_0000_v0_0_s_ifspec;
#ifndef __IUPnPNAT_INTERFACE_DEFINED__
#define __IUPnPNAT_INTERFACE_DEFINED__
extern const IID IID_IUPnPNAT;
typedef struct IUPnPNATVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPNAT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPNAT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPNAT * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUPnPNAT * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUPnPNAT * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUPnPNAT * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUPnPNAT * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_StaticPortMappingCollection) (IUPnPNAT * This, IStaticPortMappingCollection ** ppSPMs);
	HRESULT(STDMETHODCALLTYPE * get_DynamicPortMappingCollection) (IUPnPNAT * This, IDynamicPortMappingCollection ** ppDPMs);
	HRESULT(STDMETHODCALLTYPE * get_NATEventManager) (IUPnPNAT * This, INATEventManager ** ppNEM);
	END_INTERFACE
}  IUPnPNATVtbl;
interface IUPnPNAT
{
	CONST_VTBL struct IUPnPNATVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPNAT_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPNAT_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPNAT_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPNAT_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUPnPNAT_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUPnPNAT_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUPnPNAT_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUPnPNAT_get_StaticPortMappingCollection(This,ppSPMs) ( (This)->lpVtbl -> get_StaticPortMappingCollection(This,ppSPMs) )
#define IUPnPNAT_get_DynamicPortMappingCollection(This,ppDPMs) ( (This)->lpVtbl -> get_DynamicPortMappingCollection(This,ppDPMs) )
#define IUPnPNAT_get_NATEventManager(This,ppNEM) ( (This)->lpVtbl -> get_NATEventManager(This,ppNEM) )
#endif
#endif
#ifndef __INATEventManager_INTERFACE_DEFINED__
#define __INATEventManager_INTERFACE_DEFINED__
extern const IID IID_INATEventManager;
typedef struct INATEventManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INATEventManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INATEventManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (INATEventManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INATEventManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INATEventManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INATEventManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INATEventManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * put_ExternalIPAddressCallback) (INATEventManager * This, IUnknown * pUnk);
	HRESULT(STDMETHODCALLTYPE * put_NumberOfEntriesCallback) (INATEventManager * This, IUnknown * pUnk);
	END_INTERFACE
}  INATEventManagerVtbl;
interface INATEventManager
{
	CONST_VTBL struct INATEventManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INATEventManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INATEventManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INATEventManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INATEventManager_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INATEventManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INATEventManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INATEventManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INATEventManager_put_ExternalIPAddressCallback(This,pUnk) ( (This)->lpVtbl -> put_ExternalIPAddressCallback(This,pUnk) )
#define INATEventManager_put_NumberOfEntriesCallback(This,pUnk) ( (This)->lpVtbl -> put_NumberOfEntriesCallback(This,pUnk) )
#endif
#endif
#ifndef __INATExternalIPAddressCallback_INTERFACE_DEFINED__
#define __INATExternalIPAddressCallback_INTERFACE_DEFINED__
extern const IID IID_INATExternalIPAddressCallback;
typedef struct INATExternalIPAddressCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INATExternalIPAddressCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INATExternalIPAddressCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (INATExternalIPAddressCallback * This);
	HRESULT(STDMETHODCALLTYPE * NewExternalIPAddress) (INATExternalIPAddressCallback * This, BSTR bstrNewExternalIPAddress);
	END_INTERFACE
}  INATExternalIPAddressCallbackVtbl;
interface INATExternalIPAddressCallback
{
	CONST_VTBL struct INATExternalIPAddressCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INATExternalIPAddressCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INATExternalIPAddressCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INATExternalIPAddressCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INATExternalIPAddressCallback_NewExternalIPAddress(This,bstrNewExternalIPAddress) ( (This)->lpVtbl -> NewExternalIPAddress(This,bstrNewExternalIPAddress) )
#endif
#endif
#ifndef __INATNumberOfEntriesCallback_INTERFACE_DEFINED__
#define __INATNumberOfEntriesCallback_INTERFACE_DEFINED__
extern const IID IID_INATNumberOfEntriesCallback;
typedef struct INATNumberOfEntriesCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INATNumberOfEntriesCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INATNumberOfEntriesCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (INATNumberOfEntriesCallback * This);
	HRESULT(STDMETHODCALLTYPE * NewNumberOfEntries) (INATNumberOfEntriesCallback * This, long lNewNumberOfEntries);
	END_INTERFACE
}  INATNumberOfEntriesCallbackVtbl;
interface INATNumberOfEntriesCallback
{
	CONST_VTBL struct INATNumberOfEntriesCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INATNumberOfEntriesCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INATNumberOfEntriesCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INATNumberOfEntriesCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INATNumberOfEntriesCallback_NewNumberOfEntries(This,lNewNumberOfEntries) ( (This)->lpVtbl -> NewNumberOfEntries(This,lNewNumberOfEntries) )
#endif
#endif
#ifndef __IDynamicPortMappingCollection_INTERFACE_DEFINED__
#define __IDynamicPortMappingCollection_INTERFACE_DEFINED__
extern const IID IID_IDynamicPortMappingCollection;
typedef struct IDynamicPortMappingCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDynamicPortMappingCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDynamicPortMappingCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDynamicPortMappingCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDynamicPortMappingCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDynamicPortMappingCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDynamicPortMappingCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDynamicPortMappingCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IDynamicPortMappingCollection * This, IUnknown ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IDynamicPortMappingCollection * This, BSTR bstrRemoteHost, long lExternalPort, BSTR bstrProtocol, IDynamicPortMapping ** ppDPM);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IDynamicPortMappingCollection * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (IDynamicPortMappingCollection * This, BSTR bstrRemoteHost, long lExternalPort, BSTR bstrProtocol);
	HRESULT(STDMETHODCALLTYPE * Add) (IDynamicPortMappingCollection * This, BSTR bstrRemoteHost, long lExternalPort, BSTR bstrProtocol, long lInternalPort, BSTR bstrInternalClient, VARIANT_BOOL bEnabled, BSTR bstrDescription, long lLeaseDuration, IDynamicPortMapping ** ppDPM);
	END_INTERFACE
}  IDynamicPortMappingCollectionVtbl;
interface IDynamicPortMappingCollection
{
	CONST_VTBL struct IDynamicPortMappingCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDynamicPortMappingCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDynamicPortMappingCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDynamicPortMappingCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDynamicPortMappingCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDynamicPortMappingCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDynamicPortMappingCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDynamicPortMappingCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDynamicPortMappingCollection_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IDynamicPortMappingCollection_get_Item(This,bstrRemoteHost,lExternalPort,bstrProtocol,ppDPM) ( (This)->lpVtbl -> get_Item(This,bstrRemoteHost,lExternalPort,bstrProtocol,ppDPM) )
#define IDynamicPortMappingCollection_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#define IDynamicPortMappingCollection_Remove(This,bstrRemoteHost,lExternalPort,bstrProtocol) ( (This)->lpVtbl -> Remove(This,bstrRemoteHost,lExternalPort,bstrProtocol) )
#define IDynamicPortMappingCollection_Add(This,bstrRemoteHost,lExternalPort,bstrProtocol,lInternalPort,bstrInternalClient,bEnabled,bstrDescription,lLeaseDuration,ppDPM) ( (This)->lpVtbl -> Add(This,bstrRemoteHost,lExternalPort,bstrProtocol,lInternalPort,bstrInternalClient,bEnabled,bstrDescription,lLeaseDuration,ppDPM) )
#endif
#endif
#ifndef __IDynamicPortMapping_INTERFACE_DEFINED__
#define __IDynamicPortMapping_INTERFACE_DEFINED__
extern const IID IID_IDynamicPortMapping;
typedef struct IDynamicPortMappingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDynamicPortMapping * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDynamicPortMapping * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDynamicPortMapping * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDynamicPortMapping * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDynamicPortMapping * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDynamicPortMapping * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDynamicPortMapping * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ExternalIPAddress) (IDynamicPortMapping * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_RemoteHost) (IDynamicPortMapping * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ExternalPort) (IDynamicPortMapping * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Protocol) (IDynamicPortMapping * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_InternalPort) (IDynamicPortMapping * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_InternalClient) (IDynamicPortMapping * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IDynamicPortMapping * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IDynamicPortMapping * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_LeaseDuration) (IDynamicPortMapping * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * RenewLease) (IDynamicPortMapping * This, long lLeaseDurationDesired, long *pLeaseDurationReturned);
	HRESULT(STDMETHODCALLTYPE * EditInternalClient) (IDynamicPortMapping * This, BSTR bstrInternalClient);
	HRESULT(STDMETHODCALLTYPE * Enable) (IDynamicPortMapping * This, VARIANT_BOOL vb);
	HRESULT(STDMETHODCALLTYPE * EditDescription) (IDynamicPortMapping * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * EditInternalPort) (IDynamicPortMapping * This, long lInternalPort);
	END_INTERFACE
}  IDynamicPortMappingVtbl;
interface IDynamicPortMapping
{
	CONST_VTBL struct IDynamicPortMappingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDynamicPortMapping_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDynamicPortMapping_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDynamicPortMapping_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDynamicPortMapping_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDynamicPortMapping_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDynamicPortMapping_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDynamicPortMapping_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDynamicPortMapping_get_ExternalIPAddress(This,pVal) ( (This)->lpVtbl -> get_ExternalIPAddress(This,pVal) )
#define IDynamicPortMapping_get_RemoteHost(This,pVal) ( (This)->lpVtbl -> get_RemoteHost(This,pVal) )
#define IDynamicPortMapping_get_ExternalPort(This,pVal) ( (This)->lpVtbl -> get_ExternalPort(This,pVal) )
#define IDynamicPortMapping_get_Protocol(This,pVal) ( (This)->lpVtbl -> get_Protocol(This,pVal) )
#define IDynamicPortMapping_get_InternalPort(This,pVal) ( (This)->lpVtbl -> get_InternalPort(This,pVal) )
#define IDynamicPortMapping_get_InternalClient(This,pVal) ( (This)->lpVtbl -> get_InternalClient(This,pVal) )
#define IDynamicPortMapping_get_Enabled(This,pVal) ( (This)->lpVtbl -> get_Enabled(This,pVal) )
#define IDynamicPortMapping_get_Description(This,pVal) ( (This)->lpVtbl -> get_Description(This,pVal) )
#define IDynamicPortMapping_get_LeaseDuration(This,pVal) ( (This)->lpVtbl -> get_LeaseDuration(This,pVal) )
#define IDynamicPortMapping_RenewLease(This,lLeaseDurationDesired,pLeaseDurationReturned) ( (This)->lpVtbl -> RenewLease(This,lLeaseDurationDesired,pLeaseDurationReturned) )
#define IDynamicPortMapping_EditInternalClient(This,bstrInternalClient) ( (This)->lpVtbl -> EditInternalClient(This,bstrInternalClient) )
#define IDynamicPortMapping_Enable(This,vb) ( (This)->lpVtbl -> Enable(This,vb) )
#define IDynamicPortMapping_EditDescription(This,bstrDescription) ( (This)->lpVtbl -> EditDescription(This,bstrDescription) )
#define IDynamicPortMapping_EditInternalPort(This,lInternalPort) ( (This)->lpVtbl -> EditInternalPort(This,lInternalPort) )
#endif
#endif
#ifndef __IStaticPortMappingCollection_INTERFACE_DEFINED__
#define __IStaticPortMappingCollection_INTERFACE_DEFINED__
extern const IID IID_IStaticPortMappingCollection;
typedef struct IStaticPortMappingCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStaticPortMappingCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStaticPortMappingCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStaticPortMappingCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IStaticPortMappingCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IStaticPortMappingCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IStaticPortMappingCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IStaticPortMappingCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IStaticPortMappingCollection * This, IUnknown ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IStaticPortMappingCollection * This, long lExternalPort, BSTR bstrProtocol, IStaticPortMapping ** ppSPM);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IStaticPortMappingCollection * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (IStaticPortMappingCollection * This, long lExternalPort, BSTR bstrProtocol);
	HRESULT(STDMETHODCALLTYPE * Add) (IStaticPortMappingCollection * This, long lExternalPort, BSTR bstrProtocol, long lInternalPort, BSTR bstrInternalClient, VARIANT_BOOL bEnabled, BSTR bstrDescription, IStaticPortMapping ** ppSPM);
	END_INTERFACE
}  IStaticPortMappingCollectionVtbl;
interface IStaticPortMappingCollection
{
	CONST_VTBL struct IStaticPortMappingCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStaticPortMappingCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStaticPortMappingCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStaticPortMappingCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStaticPortMappingCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IStaticPortMappingCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IStaticPortMappingCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IStaticPortMappingCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IStaticPortMappingCollection_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IStaticPortMappingCollection_get_Item(This,lExternalPort,bstrProtocol,ppSPM) ( (This)->lpVtbl -> get_Item(This,lExternalPort,bstrProtocol,ppSPM) )
#define IStaticPortMappingCollection_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#define IStaticPortMappingCollection_Remove(This,lExternalPort,bstrProtocol) ( (This)->lpVtbl -> Remove(This,lExternalPort,bstrProtocol) )
#define IStaticPortMappingCollection_Add(This,lExternalPort,bstrProtocol,lInternalPort,bstrInternalClient,bEnabled,bstrDescription,ppSPM) ( (This)->lpVtbl -> Add(This,lExternalPort,bstrProtocol,lInternalPort,bstrInternalClient,bEnabled,bstrDescription,ppSPM) )
#endif
#endif
#ifndef __IStaticPortMapping_INTERFACE_DEFINED__
#define __IStaticPortMapping_INTERFACE_DEFINED__
extern const IID IID_IStaticPortMapping;
typedef struct IStaticPortMappingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStaticPortMapping * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStaticPortMapping * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStaticPortMapping * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IStaticPortMapping * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IStaticPortMapping * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IStaticPortMapping * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IStaticPortMapping * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ExternalIPAddress) (IStaticPortMapping * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ExternalPort) (IStaticPortMapping * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_InternalPort) (IStaticPortMapping * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Protocol) (IStaticPortMapping * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_InternalClient) (IStaticPortMapping * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IStaticPortMapping * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IStaticPortMapping * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * EditInternalClient) (IStaticPortMapping * This, BSTR bstrInternalClient);
	HRESULT(STDMETHODCALLTYPE * Enable) (IStaticPortMapping * This, VARIANT_BOOL vb);
	HRESULT(STDMETHODCALLTYPE * EditDescription) (IStaticPortMapping * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * EditInternalPort) (IStaticPortMapping * This, long lInternalPort);
	END_INTERFACE
}  IStaticPortMappingVtbl;
interface IStaticPortMapping
{
	CONST_VTBL struct IStaticPortMappingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStaticPortMapping_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStaticPortMapping_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStaticPortMapping_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStaticPortMapping_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IStaticPortMapping_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IStaticPortMapping_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IStaticPortMapping_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IStaticPortMapping_get_ExternalIPAddress(This,pVal) ( (This)->lpVtbl -> get_ExternalIPAddress(This,pVal) )
#define IStaticPortMapping_get_ExternalPort(This,pVal) ( (This)->lpVtbl -> get_ExternalPort(This,pVal) )
#define IStaticPortMapping_get_InternalPort(This,pVal) ( (This)->lpVtbl -> get_InternalPort(This,pVal) )
#define IStaticPortMapping_get_Protocol(This,pVal) ( (This)->lpVtbl -> get_Protocol(This,pVal) )
#define IStaticPortMapping_get_InternalClient(This,pVal) ( (This)->lpVtbl -> get_InternalClient(This,pVal) )
#define IStaticPortMapping_get_Enabled(This,pVal) ( (This)->lpVtbl -> get_Enabled(This,pVal) )
#define IStaticPortMapping_get_Description(This,pVal) ( (This)->lpVtbl -> get_Description(This,pVal) )
#define IStaticPortMapping_EditInternalClient(This,bstrInternalClient) ( (This)->lpVtbl -> EditInternalClient(This,bstrInternalClient) )
#define IStaticPortMapping_Enable(This,vb) ( (This)->lpVtbl -> Enable(This,vb) )
#define IStaticPortMapping_EditDescription(This,bstrDescription) ( (This)->lpVtbl -> EditDescription(This,bstrDescription) )
#define IStaticPortMapping_EditInternalPort(This,lInternalPort) ( (This)->lpVtbl -> EditInternalPort(This,lInternalPort) )
#endif
#endif
#ifndef __NATUPNPLib_LIBRARY_DEFINED__
#define __NATUPNPLib_LIBRARY_DEFINED__
extern const IID LIBID_NATUPNPLib;
extern const CLSID CLSID_UPnPNAT;
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
