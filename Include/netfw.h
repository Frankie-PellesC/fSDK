/*+@@file@@----------------------------------------------------------------*//*!
 \file		netfw.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 17:14:39 2016
 \date		Modified on Sat Sep  3 17:14:39 2016
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
#ifndef __netfw_h__
#define __netfw_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __INetFwRemoteAdminSettings_FWD_DEFINED__
#define __INetFwRemoteAdminSettings_FWD_DEFINED__
typedef interface INetFwRemoteAdminSettings INetFwRemoteAdminSettings;
#endif
#ifndef __INetFwIcmpSettings_FWD_DEFINED__
#define __INetFwIcmpSettings_FWD_DEFINED__
typedef interface INetFwIcmpSettings INetFwIcmpSettings;
#endif
#ifndef __INetFwOpenPort_FWD_DEFINED__
#define __INetFwOpenPort_FWD_DEFINED__
typedef interface INetFwOpenPort INetFwOpenPort;
#endif
#ifndef __INetFwOpenPorts_FWD_DEFINED__
#define __INetFwOpenPorts_FWD_DEFINED__
typedef interface INetFwOpenPorts INetFwOpenPorts;
#endif
#ifndef __INetFwService_FWD_DEFINED__
#define __INetFwService_FWD_DEFINED__
typedef interface INetFwService INetFwService;
#endif
#ifndef __INetFwServices_FWD_DEFINED__
#define __INetFwServices_FWD_DEFINED__
typedef interface INetFwServices INetFwServices;
#endif
#ifndef __INetFwAuthorizedApplication_FWD_DEFINED__
#define __INetFwAuthorizedApplication_FWD_DEFINED__
typedef interface INetFwAuthorizedApplication INetFwAuthorizedApplication;
#endif
#ifndef __INetFwAuthorizedApplications_FWD_DEFINED__
#define __INetFwAuthorizedApplications_FWD_DEFINED__
typedef interface INetFwAuthorizedApplications INetFwAuthorizedApplications;
#endif
#ifndef __INetFwRule_FWD_DEFINED__
#define __INetFwRule_FWD_DEFINED__
typedef interface INetFwRule INetFwRule;
#endif
#ifndef __INetFwRule2_FWD_DEFINED__
#define __INetFwRule2_FWD_DEFINED__
typedef interface INetFwRule2 INetFwRule2;
#endif
#ifndef __INetFwRules_FWD_DEFINED__
#define __INetFwRules_FWD_DEFINED__
typedef interface INetFwRules INetFwRules;
#endif
#ifndef __INetFwServiceRestriction_FWD_DEFINED__
#define __INetFwServiceRestriction_FWD_DEFINED__
typedef interface INetFwServiceRestriction INetFwServiceRestriction;
#endif
#ifndef __INetFwProfile_FWD_DEFINED__
#define __INetFwProfile_FWD_DEFINED__
typedef interface INetFwProfile INetFwProfile;
#endif
#ifndef __INetFwPolicy_FWD_DEFINED__
#define __INetFwPolicy_FWD_DEFINED__
typedef interface INetFwPolicy INetFwPolicy;
#endif
#ifndef __INetFwPolicy2_FWD_DEFINED__
#define __INetFwPolicy2_FWD_DEFINED__
typedef interface INetFwPolicy2 INetFwPolicy2;
#endif
#ifndef __INetFwMgr_FWD_DEFINED__
#define __INetFwMgr_FWD_DEFINED__
typedef interface INetFwMgr INetFwMgr;
#endif
#ifndef __INetFwProduct_FWD_DEFINED__
#define __INetFwProduct_FWD_DEFINED__
typedef interface INetFwProduct INetFwProduct;
#endif
#ifndef __INetFwProducts_FWD_DEFINED__
#define __INetFwProducts_FWD_DEFINED__
typedef interface INetFwProducts INetFwProducts;
#endif
#ifndef __INetFwRemoteAdminSettings_FWD_DEFINED__
#define __INetFwRemoteAdminSettings_FWD_DEFINED__
typedef interface INetFwRemoteAdminSettings INetFwRemoteAdminSettings;
#endif
#ifndef __INetFwIcmpSettings_FWD_DEFINED__
#define __INetFwIcmpSettings_FWD_DEFINED__
typedef interface INetFwIcmpSettings INetFwIcmpSettings;
#endif
#ifndef __INetFwOpenPort_FWD_DEFINED__
#define __INetFwOpenPort_FWD_DEFINED__
typedef interface INetFwOpenPort INetFwOpenPort;
#endif
#ifndef __INetFwOpenPorts_FWD_DEFINED__
#define __INetFwOpenPorts_FWD_DEFINED__
typedef interface INetFwOpenPorts INetFwOpenPorts;
#endif
#ifndef __INetFwService_FWD_DEFINED__
#define __INetFwService_FWD_DEFINED__
typedef interface INetFwService INetFwService;
#endif
#ifndef __INetFwServices_FWD_DEFINED__
#define __INetFwServices_FWD_DEFINED__
typedef interface INetFwServices INetFwServices;
#endif
#ifndef __INetFwAuthorizedApplication_FWD_DEFINED__
#define __INetFwAuthorizedApplication_FWD_DEFINED__
typedef interface INetFwAuthorizedApplication INetFwAuthorizedApplication;
#endif
#ifndef __INetFwAuthorizedApplications_FWD_DEFINED__
#define __INetFwAuthorizedApplications_FWD_DEFINED__
typedef interface INetFwAuthorizedApplications INetFwAuthorizedApplications;
#endif
#ifndef __INetFwServiceRestriction_FWD_DEFINED__
#define __INetFwServiceRestriction_FWD_DEFINED__
typedef interface INetFwServiceRestriction INetFwServiceRestriction;
#endif
#ifndef __INetFwRule_FWD_DEFINED__
#define __INetFwRule_FWD_DEFINED__
typedef interface INetFwRule INetFwRule;
#endif
#ifndef __INetFwRules_FWD_DEFINED__
#define __INetFwRules_FWD_DEFINED__
typedef interface INetFwRules INetFwRules;
#endif
#ifndef __INetFwProfile_FWD_DEFINED__
#define __INetFwProfile_FWD_DEFINED__
typedef interface INetFwProfile INetFwProfile;
#endif
#ifndef __INetFwPolicy_FWD_DEFINED__
#define __INetFwPolicy_FWD_DEFINED__
typedef interface INetFwPolicy INetFwPolicy;
#endif
#ifndef __INetFwPolicy2_FWD_DEFINED__
#define __INetFwPolicy2_FWD_DEFINED__
typedef interface INetFwPolicy2 INetFwPolicy2;
#endif
#ifndef __INetFwMgr_FWD_DEFINED__
#define __INetFwMgr_FWD_DEFINED__
typedef interface INetFwMgr INetFwMgr;
#endif
#ifndef __INetFwProduct_FWD_DEFINED__
#define __INetFwProduct_FWD_DEFINED__
typedef interface INetFwProduct INetFwProduct;
#endif
#ifndef __INetFwProducts_FWD_DEFINED__
#define __INetFwProducts_FWD_DEFINED__
typedef interface INetFwProducts INetFwProducts;
#endif
#ifndef __NetFwRule_FWD_DEFINED__
#define __NetFwRule_FWD_DEFINED__
typedef struct NetFwRule NetFwRule;
#endif
#ifndef __NetFwOpenPort_FWD_DEFINED__
#define __NetFwOpenPort_FWD_DEFINED__
typedef struct NetFwOpenPort NetFwOpenPort;
#endif
#ifndef __NetFwAuthorizedApplication_FWD_DEFINED__
#define __NetFwAuthorizedApplication_FWD_DEFINED__
typedef struct NetFwAuthorizedApplication NetFwAuthorizedApplication;
#endif
#ifndef __NetFwPolicy2_FWD_DEFINED__
#define __NetFwPolicy2_FWD_DEFINED__
typedef struct NetFwPolicy2 NetFwPolicy2;
#endif
#ifndef __NetFwProduct_FWD_DEFINED__
#define __NetFwProduct_FWD_DEFINED__
typedef struct NetFwProduct NetFwProduct;
#endif
#ifndef __NetFwProducts_FWD_DEFINED__
#define __NetFwProducts_FWD_DEFINED__
typedef struct NetFwProducts NetFwProducts;
#endif
#ifndef __NetFwMgr_FWD_DEFINED__
#define __NetFwMgr_FWD_DEFINED__
typedef struct NetFwMgr NetFwMgr;
#endif
#include <icftypes.h>
#include <oaidl.h>
#ifndef __INetFwRemoteAdminSettings_INTERFACE_DEFINED__
#define __INetFwRemoteAdminSettings_INTERFACE_DEFINED__
extern const IID IID_INetFwRemoteAdminSettings;
typedef struct INetFwRemoteAdminSettingsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwRemoteAdminSettings * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwRemoteAdminSettings * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwRemoteAdminSettings * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwRemoteAdminSettings * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwRemoteAdminSettings * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwRemoteAdminSettings * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwRemoteAdminSettings * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_IpVersion) (INetFwRemoteAdminSettings * This, NET_FW_IP_VERSION * ipVersion);
	HRESULT(STDMETHODCALLTYPE * put_IpVersion) (INetFwRemoteAdminSettings * This, NET_FW_IP_VERSION ipVersion);
	HRESULT(STDMETHODCALLTYPE * get_Scope) (INetFwRemoteAdminSettings * This, NET_FW_SCOPE * scope);
	HRESULT(STDMETHODCALLTYPE * put_Scope) (INetFwRemoteAdminSettings * This, NET_FW_SCOPE scope);
	HRESULT(STDMETHODCALLTYPE * get_RemoteAddresses) (INetFwRemoteAdminSettings * This, BSTR * remoteAddrs);
	HRESULT(STDMETHODCALLTYPE * put_RemoteAddresses) (INetFwRemoteAdminSettings * This, BSTR remoteAddrs);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (INetFwRemoteAdminSettings * This, VARIANT_BOOL * enabled);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (INetFwRemoteAdminSettings * This, VARIANT_BOOL enabled);
	END_INTERFACE
}  INetFwRemoteAdminSettingsVtbl;
interface INetFwRemoteAdminSettings
{
	CONST_VTBL struct INetFwRemoteAdminSettingsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwRemoteAdminSettings_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwRemoteAdminSettings_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwRemoteAdminSettings_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwRemoteAdminSettings_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwRemoteAdminSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwRemoteAdminSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwRemoteAdminSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwRemoteAdminSettings_get_IpVersion(This,ipVersion) ( (This)->lpVtbl -> get_IpVersion(This,ipVersion) )
#define INetFwRemoteAdminSettings_put_IpVersion(This,ipVersion) ( (This)->lpVtbl -> put_IpVersion(This,ipVersion) )
#define INetFwRemoteAdminSettings_get_Scope(This,scope) ( (This)->lpVtbl -> get_Scope(This,scope) )
#define INetFwRemoteAdminSettings_put_Scope(This,scope) ( (This)->lpVtbl -> put_Scope(This,scope) )
#define INetFwRemoteAdminSettings_get_RemoteAddresses(This,remoteAddrs) ( (This)->lpVtbl -> get_RemoteAddresses(This,remoteAddrs) )
#define INetFwRemoteAdminSettings_put_RemoteAddresses(This,remoteAddrs) ( (This)->lpVtbl -> put_RemoteAddresses(This,remoteAddrs) )
#define INetFwRemoteAdminSettings_get_Enabled(This,enabled) ( (This)->lpVtbl -> get_Enabled(This,enabled) )
#define INetFwRemoteAdminSettings_put_Enabled(This,enabled) ( (This)->lpVtbl -> put_Enabled(This,enabled) )
#endif
#endif
#ifndef __INetFwIcmpSettings_INTERFACE_DEFINED__
#define __INetFwIcmpSettings_INTERFACE_DEFINED__
extern const IID IID_INetFwIcmpSettings;
typedef struct INetFwIcmpSettingsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwIcmpSettings * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwIcmpSettings * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwIcmpSettings * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwIcmpSettings * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwIcmpSettings * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwIcmpSettings * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwIcmpSettings * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_AllowOutboundDestinationUnreachable) (INetFwIcmpSettings * This, VARIANT_BOOL * allow);
	HRESULT(STDMETHODCALLTYPE * put_AllowOutboundDestinationUnreachable) (INetFwIcmpSettings * This, VARIANT_BOOL allow);
	HRESULT(STDMETHODCALLTYPE * get_AllowRedirect) (INetFwIcmpSettings * This, VARIANT_BOOL * allow);
	HRESULT(STDMETHODCALLTYPE * put_AllowRedirect) (INetFwIcmpSettings * This, VARIANT_BOOL allow);
	HRESULT(STDMETHODCALLTYPE * get_AllowInboundEchoRequest) (INetFwIcmpSettings * This, VARIANT_BOOL * allow);
	HRESULT(STDMETHODCALLTYPE * put_AllowInboundEchoRequest) (INetFwIcmpSettings * This, VARIANT_BOOL allow);
	HRESULT(STDMETHODCALLTYPE * get_AllowOutboundTimeExceeded) (INetFwIcmpSettings * This, VARIANT_BOOL * allow);
	HRESULT(STDMETHODCALLTYPE * put_AllowOutboundTimeExceeded) (INetFwIcmpSettings * This, VARIANT_BOOL allow);
	HRESULT(STDMETHODCALLTYPE * get_AllowOutboundParameterProblem) (INetFwIcmpSettings * This, VARIANT_BOOL * allow);
	HRESULT(STDMETHODCALLTYPE * put_AllowOutboundParameterProblem) (INetFwIcmpSettings * This, VARIANT_BOOL allow);
	HRESULT(STDMETHODCALLTYPE * get_AllowOutboundSourceQuench) (INetFwIcmpSettings * This, VARIANT_BOOL * allow);
	HRESULT(STDMETHODCALLTYPE * put_AllowOutboundSourceQuench) (INetFwIcmpSettings * This, VARIANT_BOOL allow);
	HRESULT(STDMETHODCALLTYPE * get_AllowInboundRouterRequest) (INetFwIcmpSettings * This, VARIANT_BOOL * allow);
	HRESULT(STDMETHODCALLTYPE * put_AllowInboundRouterRequest) (INetFwIcmpSettings * This, VARIANT_BOOL allow);
	HRESULT(STDMETHODCALLTYPE * get_AllowInboundTimestampRequest) (INetFwIcmpSettings * This, VARIANT_BOOL * allow);
	HRESULT(STDMETHODCALLTYPE * put_AllowInboundTimestampRequest) (INetFwIcmpSettings * This, VARIANT_BOOL allow);
	HRESULT(STDMETHODCALLTYPE * get_AllowInboundMaskRequest) (INetFwIcmpSettings * This, VARIANT_BOOL * allow);
	HRESULT(STDMETHODCALLTYPE * put_AllowInboundMaskRequest) (INetFwIcmpSettings * This, VARIANT_BOOL allow);
	HRESULT(STDMETHODCALLTYPE * get_AllowOutboundPacketTooBig) (INetFwIcmpSettings * This, VARIANT_BOOL * allow);
	HRESULT(STDMETHODCALLTYPE * put_AllowOutboundPacketTooBig) (INetFwIcmpSettings * This, VARIANT_BOOL allow);
	END_INTERFACE
}  INetFwIcmpSettingsVtbl;
interface INetFwIcmpSettings
{
	CONST_VTBL struct INetFwIcmpSettingsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwIcmpSettings_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwIcmpSettings_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwIcmpSettings_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwIcmpSettings_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwIcmpSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwIcmpSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwIcmpSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwIcmpSettings_get_AllowOutboundDestinationUnreachable(This,allow) ( (This)->lpVtbl -> get_AllowOutboundDestinationUnreachable(This,allow) )
#define INetFwIcmpSettings_put_AllowOutboundDestinationUnreachable(This,allow) ( (This)->lpVtbl -> put_AllowOutboundDestinationUnreachable(This,allow) )
#define INetFwIcmpSettings_get_AllowRedirect(This,allow) ( (This)->lpVtbl -> get_AllowRedirect(This,allow) )
#define INetFwIcmpSettings_put_AllowRedirect(This,allow) ( (This)->lpVtbl -> put_AllowRedirect(This,allow) )
#define INetFwIcmpSettings_get_AllowInboundEchoRequest(This,allow) ( (This)->lpVtbl -> get_AllowInboundEchoRequest(This,allow) )
#define INetFwIcmpSettings_put_AllowInboundEchoRequest(This,allow) ( (This)->lpVtbl -> put_AllowInboundEchoRequest(This,allow) )
#define INetFwIcmpSettings_get_AllowOutboundTimeExceeded(This,allow) ( (This)->lpVtbl -> get_AllowOutboundTimeExceeded(This,allow) )
#define INetFwIcmpSettings_put_AllowOutboundTimeExceeded(This,allow) ( (This)->lpVtbl -> put_AllowOutboundTimeExceeded(This,allow) )
#define INetFwIcmpSettings_get_AllowOutboundParameterProblem(This,allow) ( (This)->lpVtbl -> get_AllowOutboundParameterProblem(This,allow) )
#define INetFwIcmpSettings_put_AllowOutboundParameterProblem(This,allow) ( (This)->lpVtbl -> put_AllowOutboundParameterProblem(This,allow) )
#define INetFwIcmpSettings_get_AllowOutboundSourceQuench(This,allow) ( (This)->lpVtbl -> get_AllowOutboundSourceQuench(This,allow) )
#define INetFwIcmpSettings_put_AllowOutboundSourceQuench(This,allow) ( (This)->lpVtbl -> put_AllowOutboundSourceQuench(This,allow) )
#define INetFwIcmpSettings_get_AllowInboundRouterRequest(This,allow) ( (This)->lpVtbl -> get_AllowInboundRouterRequest(This,allow) )
#define INetFwIcmpSettings_put_AllowInboundRouterRequest(This,allow) ( (This)->lpVtbl -> put_AllowInboundRouterRequest(This,allow) )
#define INetFwIcmpSettings_get_AllowInboundTimestampRequest(This,allow) ( (This)->lpVtbl -> get_AllowInboundTimestampRequest(This,allow) )
#define INetFwIcmpSettings_put_AllowInboundTimestampRequest(This,allow) ( (This)->lpVtbl -> put_AllowInboundTimestampRequest(This,allow) )
#define INetFwIcmpSettings_get_AllowInboundMaskRequest(This,allow) ( (This)->lpVtbl -> get_AllowInboundMaskRequest(This,allow) )
#define INetFwIcmpSettings_put_AllowInboundMaskRequest(This,allow) ( (This)->lpVtbl -> put_AllowInboundMaskRequest(This,allow) )
#define INetFwIcmpSettings_get_AllowOutboundPacketTooBig(This,allow) ( (This)->lpVtbl -> get_AllowOutboundPacketTooBig(This,allow) )
#define INetFwIcmpSettings_put_AllowOutboundPacketTooBig(This,allow) ( (This)->lpVtbl -> put_AllowOutboundPacketTooBig(This,allow) )
#endif
#endif
#ifndef __INetFwOpenPort_INTERFACE_DEFINED__
#define __INetFwOpenPort_INTERFACE_DEFINED__
extern const IID IID_INetFwOpenPort;
typedef struct INetFwOpenPortVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwOpenPort * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwOpenPort * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwOpenPort * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwOpenPort * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwOpenPort * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwOpenPort * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwOpenPort * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (INetFwOpenPort * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (INetFwOpenPort * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_IpVersion) (INetFwOpenPort * This, NET_FW_IP_VERSION * ipVersion);
	HRESULT(STDMETHODCALLTYPE * put_IpVersion) (INetFwOpenPort * This, NET_FW_IP_VERSION ipVersion);
	HRESULT(STDMETHODCALLTYPE * get_Protocol) (INetFwOpenPort * This, NET_FW_IP_PROTOCOL * ipProtocol);
	HRESULT(STDMETHODCALLTYPE * put_Protocol) (INetFwOpenPort * This, NET_FW_IP_PROTOCOL ipProtocol);
	HRESULT(STDMETHODCALLTYPE * get_Port) (INetFwOpenPort * This, LONG * portNumber);
	HRESULT(STDMETHODCALLTYPE * put_Port) (INetFwOpenPort * This, LONG portNumber);
	HRESULT(STDMETHODCALLTYPE * get_Scope) (INetFwOpenPort * This, NET_FW_SCOPE * scope);
	HRESULT(STDMETHODCALLTYPE * put_Scope) (INetFwOpenPort * This, NET_FW_SCOPE scope);
	HRESULT(STDMETHODCALLTYPE * get_RemoteAddresses) (INetFwOpenPort * This, BSTR * remoteAddrs);
	HRESULT(STDMETHODCALLTYPE * put_RemoteAddresses) (INetFwOpenPort * This, BSTR remoteAddrs);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (INetFwOpenPort * This, VARIANT_BOOL * enabled);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (INetFwOpenPort * This, VARIANT_BOOL enabled);
	HRESULT(STDMETHODCALLTYPE * get_BuiltIn) (INetFwOpenPort * This, VARIANT_BOOL * builtIn);
	END_INTERFACE
}  INetFwOpenPortVtbl;
interface INetFwOpenPort
{
	CONST_VTBL struct INetFwOpenPortVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwOpenPort_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwOpenPort_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwOpenPort_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwOpenPort_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwOpenPort_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwOpenPort_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwOpenPort_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwOpenPort_get_Name(This,name) ( (This)->lpVtbl -> get_Name(This,name) )
#define INetFwOpenPort_put_Name(This,name) ( (This)->lpVtbl -> put_Name(This,name) )
#define INetFwOpenPort_get_IpVersion(This,ipVersion) ( (This)->lpVtbl -> get_IpVersion(This,ipVersion) )
#define INetFwOpenPort_put_IpVersion(This,ipVersion) ( (This)->lpVtbl -> put_IpVersion(This,ipVersion) )
#define INetFwOpenPort_get_Protocol(This,ipProtocol) ( (This)->lpVtbl -> get_Protocol(This,ipProtocol) )
#define INetFwOpenPort_put_Protocol(This,ipProtocol) ( (This)->lpVtbl -> put_Protocol(This,ipProtocol) )
#define INetFwOpenPort_get_Port(This,portNumber) ( (This)->lpVtbl -> get_Port(This,portNumber) )
#define INetFwOpenPort_put_Port(This,portNumber) ( (This)->lpVtbl -> put_Port(This,portNumber) )
#define INetFwOpenPort_get_Scope(This,scope) ( (This)->lpVtbl -> get_Scope(This,scope) )
#define INetFwOpenPort_put_Scope(This,scope) ( (This)->lpVtbl -> put_Scope(This,scope) )
#define INetFwOpenPort_get_RemoteAddresses(This,remoteAddrs) ( (This)->lpVtbl -> get_RemoteAddresses(This,remoteAddrs) )
#define INetFwOpenPort_put_RemoteAddresses(This,remoteAddrs) ( (This)->lpVtbl -> put_RemoteAddresses(This,remoteAddrs) )
#define INetFwOpenPort_get_Enabled(This,enabled) ( (This)->lpVtbl -> get_Enabled(This,enabled) )
#define INetFwOpenPort_put_Enabled(This,enabled) ( (This)->lpVtbl -> put_Enabled(This,enabled) )
#define INetFwOpenPort_get_BuiltIn(This,builtIn) ( (This)->lpVtbl -> get_BuiltIn(This,builtIn) )
#endif
#endif
#ifndef __INetFwOpenPorts_INTERFACE_DEFINED__
#define __INetFwOpenPorts_INTERFACE_DEFINED__
extern const IID IID_INetFwOpenPorts;
typedef struct INetFwOpenPortsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwOpenPorts * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwOpenPorts * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwOpenPorts * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwOpenPorts * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwOpenPorts * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwOpenPorts * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwOpenPorts * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (INetFwOpenPorts * This, long *count);
	HRESULT(STDMETHODCALLTYPE * Add) (INetFwOpenPorts * This, INetFwOpenPort * port);
	HRESULT(STDMETHODCALLTYPE * Remove) (INetFwOpenPorts * This, LONG portNumber, NET_FW_IP_PROTOCOL ipProtocol);
	HRESULT(STDMETHODCALLTYPE * Item) (INetFwOpenPorts * This, LONG portNumber, NET_FW_IP_PROTOCOL ipProtocol, INetFwOpenPort ** openPort);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (INetFwOpenPorts * This, IUnknown ** newEnum);
	END_INTERFACE
}  INetFwOpenPortsVtbl;
interface INetFwOpenPorts
{
	CONST_VTBL struct INetFwOpenPortsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwOpenPorts_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwOpenPorts_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwOpenPorts_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwOpenPorts_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwOpenPorts_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwOpenPorts_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwOpenPorts_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwOpenPorts_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define INetFwOpenPorts_Add(This,port) ( (This)->lpVtbl -> Add(This,port) )
#define INetFwOpenPorts_Remove(This,portNumber,ipProtocol) ( (This)->lpVtbl -> Remove(This,portNumber,ipProtocol) )
#define INetFwOpenPorts_Item(This,portNumber,ipProtocol,openPort) ( (This)->lpVtbl -> Item(This,portNumber,ipProtocol,openPort) )
#define INetFwOpenPorts_get__NewEnum(This,newEnum) ( (This)->lpVtbl -> get__NewEnum(This,newEnum) )
#endif
#endif
#ifndef __INetFwService_INTERFACE_DEFINED__
#define __INetFwService_INTERFACE_DEFINED__
extern const IID IID_INetFwService;
typedef struct INetFwServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwService * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwService * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwService * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwService * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwService * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwService * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (INetFwService * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * get_Type) (INetFwService * This, NET_FW_SERVICE_TYPE * type);
	HRESULT(STDMETHODCALLTYPE * get_Customized) (INetFwService * This, VARIANT_BOOL * customized);
	HRESULT(STDMETHODCALLTYPE * get_IpVersion) (INetFwService * This, NET_FW_IP_VERSION * ipVersion);
	HRESULT(STDMETHODCALLTYPE * put_IpVersion) (INetFwService * This, NET_FW_IP_VERSION ipVersion);
	HRESULT(STDMETHODCALLTYPE * get_Scope) (INetFwService * This, NET_FW_SCOPE * scope);
	HRESULT(STDMETHODCALLTYPE * put_Scope) (INetFwService * This, NET_FW_SCOPE scope);
	HRESULT(STDMETHODCALLTYPE * get_RemoteAddresses) (INetFwService * This, BSTR * remoteAddrs);
	HRESULT(STDMETHODCALLTYPE * put_RemoteAddresses) (INetFwService * This, BSTR remoteAddrs);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (INetFwService * This, VARIANT_BOOL * enabled);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (INetFwService * This, VARIANT_BOOL enabled);
	HRESULT(STDMETHODCALLTYPE * get_GloballyOpenPorts) (INetFwService * This, INetFwOpenPorts ** openPorts);
	END_INTERFACE
}  INetFwServiceVtbl;
interface INetFwService
{
	CONST_VTBL struct INetFwServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwService_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwService_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwService_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwService_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwService_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwService_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwService_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwService_get_Name(This,name) ( (This)->lpVtbl -> get_Name(This,name) )
#define INetFwService_get_Type(This,type) ( (This)->lpVtbl -> get_Type(This,type) )
#define INetFwService_get_Customized(This,customized) ( (This)->lpVtbl -> get_Customized(This,customized) )
#define INetFwService_get_IpVersion(This,ipVersion) ( (This)->lpVtbl -> get_IpVersion(This,ipVersion) )
#define INetFwService_put_IpVersion(This,ipVersion) ( (This)->lpVtbl -> put_IpVersion(This,ipVersion) )
#define INetFwService_get_Scope(This,scope) ( (This)->lpVtbl -> get_Scope(This,scope) )
#define INetFwService_put_Scope(This,scope) ( (This)->lpVtbl -> put_Scope(This,scope) )
#define INetFwService_get_RemoteAddresses(This,remoteAddrs) ( (This)->lpVtbl -> get_RemoteAddresses(This,remoteAddrs) )
#define INetFwService_put_RemoteAddresses(This,remoteAddrs) ( (This)->lpVtbl -> put_RemoteAddresses(This,remoteAddrs) )
#define INetFwService_get_Enabled(This,enabled) ( (This)->lpVtbl -> get_Enabled(This,enabled) )
#define INetFwService_put_Enabled(This,enabled) ( (This)->lpVtbl -> put_Enabled(This,enabled) )
#define INetFwService_get_GloballyOpenPorts(This,openPorts) ( (This)->lpVtbl -> get_GloballyOpenPorts(This,openPorts) )
#endif
#endif
#ifndef __INetFwServices_INTERFACE_DEFINED__
#define __INetFwServices_INTERFACE_DEFINED__
extern const IID IID_INetFwServices;
typedef struct INetFwServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwServices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwServices * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwServices * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwServices * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwServices * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwServices * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwServices * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (INetFwServices * This, long *count);
	HRESULT(STDMETHODCALLTYPE * Item) (INetFwServices * This, NET_FW_SERVICE_TYPE svcType, INetFwService ** service);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (INetFwServices * This, IUnknown ** newEnum);
	END_INTERFACE
}  INetFwServicesVtbl;
interface INetFwServices
{
	CONST_VTBL struct INetFwServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwServices_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwServices_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwServices_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwServices_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwServices_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwServices_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwServices_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwServices_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define INetFwServices_Item(This,svcType,service) ( (This)->lpVtbl -> Item(This,svcType,service) )
#define INetFwServices_get__NewEnum(This,newEnum) ( (This)->lpVtbl -> get__NewEnum(This,newEnum) )
#endif
#endif
#ifndef __INetFwAuthorizedApplication_INTERFACE_DEFINED__
#define __INetFwAuthorizedApplication_INTERFACE_DEFINED__
extern const IID IID_INetFwAuthorizedApplication;
typedef struct INetFwAuthorizedApplicationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwAuthorizedApplication * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwAuthorizedApplication * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwAuthorizedApplication * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwAuthorizedApplication * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwAuthorizedApplication * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwAuthorizedApplication * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwAuthorizedApplication * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (INetFwAuthorizedApplication * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (INetFwAuthorizedApplication * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_ProcessImageFileName) (INetFwAuthorizedApplication * This, BSTR * imageFileName);
	HRESULT(STDMETHODCALLTYPE * put_ProcessImageFileName) (INetFwAuthorizedApplication * This, BSTR imageFileName);
	HRESULT(STDMETHODCALLTYPE * get_IpVersion) (INetFwAuthorizedApplication * This, NET_FW_IP_VERSION * ipVersion);
	HRESULT(STDMETHODCALLTYPE * put_IpVersion) (INetFwAuthorizedApplication * This, NET_FW_IP_VERSION ipVersion);
	HRESULT(STDMETHODCALLTYPE * get_Scope) (INetFwAuthorizedApplication * This, NET_FW_SCOPE * scope);
	HRESULT(STDMETHODCALLTYPE * put_Scope) (INetFwAuthorizedApplication * This, NET_FW_SCOPE scope);
	HRESULT(STDMETHODCALLTYPE * get_RemoteAddresses) (INetFwAuthorizedApplication * This, BSTR * remoteAddrs);
	HRESULT(STDMETHODCALLTYPE * put_RemoteAddresses) (INetFwAuthorizedApplication * This, BSTR remoteAddrs);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (INetFwAuthorizedApplication * This, VARIANT_BOOL * enabled);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (INetFwAuthorizedApplication * This, VARIANT_BOOL enabled);
	END_INTERFACE
}  INetFwAuthorizedApplicationVtbl;
interface INetFwAuthorizedApplication
{
	CONST_VTBL struct INetFwAuthorizedApplicationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwAuthorizedApplication_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwAuthorizedApplication_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwAuthorizedApplication_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwAuthorizedApplication_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwAuthorizedApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwAuthorizedApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwAuthorizedApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwAuthorizedApplication_get_Name(This,name) ( (This)->lpVtbl -> get_Name(This,name) )
#define INetFwAuthorizedApplication_put_Name(This,name) ( (This)->lpVtbl -> put_Name(This,name) )
#define INetFwAuthorizedApplication_get_ProcessImageFileName(This,imageFileName) ( (This)->lpVtbl -> get_ProcessImageFileName(This,imageFileName) )
#define INetFwAuthorizedApplication_put_ProcessImageFileName(This,imageFileName) ( (This)->lpVtbl -> put_ProcessImageFileName(This,imageFileName) )
#define INetFwAuthorizedApplication_get_IpVersion(This,ipVersion) ( (This)->lpVtbl -> get_IpVersion(This,ipVersion) )
#define INetFwAuthorizedApplication_put_IpVersion(This,ipVersion) ( (This)->lpVtbl -> put_IpVersion(This,ipVersion) )
#define INetFwAuthorizedApplication_get_Scope(This,scope) ( (This)->lpVtbl -> get_Scope(This,scope) )
#define INetFwAuthorizedApplication_put_Scope(This,scope) ( (This)->lpVtbl -> put_Scope(This,scope) )
#define INetFwAuthorizedApplication_get_RemoteAddresses(This,remoteAddrs) ( (This)->lpVtbl -> get_RemoteAddresses(This,remoteAddrs) )
#define INetFwAuthorizedApplication_put_RemoteAddresses(This,remoteAddrs) ( (This)->lpVtbl -> put_RemoteAddresses(This,remoteAddrs) )
#define INetFwAuthorizedApplication_get_Enabled(This,enabled) ( (This)->lpVtbl -> get_Enabled(This,enabled) )
#define INetFwAuthorizedApplication_put_Enabled(This,enabled) ( (This)->lpVtbl -> put_Enabled(This,enabled) )
#endif
#endif
#ifndef __INetFwAuthorizedApplications_INTERFACE_DEFINED__
#define __INetFwAuthorizedApplications_INTERFACE_DEFINED__
extern const IID IID_INetFwAuthorizedApplications;
typedef struct INetFwAuthorizedApplicationsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwAuthorizedApplications * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwAuthorizedApplications * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwAuthorizedApplications * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwAuthorizedApplications * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwAuthorizedApplications * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwAuthorizedApplications * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwAuthorizedApplications * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (INetFwAuthorizedApplications * This, long *count);
	HRESULT(STDMETHODCALLTYPE * Add) (INetFwAuthorizedApplications * This, INetFwAuthorizedApplication * app);
	HRESULT(STDMETHODCALLTYPE * Remove) (INetFwAuthorizedApplications * This, BSTR imageFileName);
	HRESULT(STDMETHODCALLTYPE * Item) (INetFwAuthorizedApplications * This, BSTR imageFileName, INetFwAuthorizedApplication ** app);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (INetFwAuthorizedApplications * This, IUnknown ** newEnum);
	END_INTERFACE
}  INetFwAuthorizedApplicationsVtbl;
interface INetFwAuthorizedApplications
{
	CONST_VTBL struct INetFwAuthorizedApplicationsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwAuthorizedApplications_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwAuthorizedApplications_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwAuthorizedApplications_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwAuthorizedApplications_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwAuthorizedApplications_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwAuthorizedApplications_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwAuthorizedApplications_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwAuthorizedApplications_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define INetFwAuthorizedApplications_Add(This,app) ( (This)->lpVtbl -> Add(This,app) )
#define INetFwAuthorizedApplications_Remove(This,imageFileName) ( (This)->lpVtbl -> Remove(This,imageFileName) )
#define INetFwAuthorizedApplications_Item(This,imageFileName,app) ( (This)->lpVtbl -> Item(This,imageFileName,app) )
#define INetFwAuthorizedApplications_get__NewEnum(This,newEnum) ( (This)->lpVtbl -> get__NewEnum(This,newEnum) )
#endif
#endif
#ifndef __INetFwRule_INTERFACE_DEFINED__
#define __INetFwRule_INTERFACE_DEFINED__
extern const IID IID_INetFwRule;
typedef struct INetFwRuleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwRule * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwRule * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwRule * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwRule * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwRule * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwRule * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwRule * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (INetFwRule * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (INetFwRule * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_Description) (INetFwRule * This, BSTR * desc);
	HRESULT(STDMETHODCALLTYPE * put_Description) (INetFwRule * This, BSTR desc);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationName) (INetFwRule * This, BSTR * imageFileName);
	HRESULT(STDMETHODCALLTYPE * put_ApplicationName) (INetFwRule * This, BSTR imageFileName);
	HRESULT(STDMETHODCALLTYPE * get_ServiceName) (INetFwRule * This, BSTR * serviceName);
	HRESULT(STDMETHODCALLTYPE * put_ServiceName) (INetFwRule * This, BSTR serviceName);
	HRESULT(STDMETHODCALLTYPE * get_Protocol) (INetFwRule * This, LONG * protocol);
	HRESULT(STDMETHODCALLTYPE * put_Protocol) (INetFwRule * This, LONG protocol);
	HRESULT(STDMETHODCALLTYPE * get_LocalPorts) (INetFwRule * This, BSTR * portNumbers);
	HRESULT(STDMETHODCALLTYPE * put_LocalPorts) (INetFwRule * This, BSTR portNumbers);
	HRESULT(STDMETHODCALLTYPE * get_RemotePorts) (INetFwRule * This, BSTR * portNumbers);
	HRESULT(STDMETHODCALLTYPE * put_RemotePorts) (INetFwRule * This, BSTR portNumbers);
	HRESULT(STDMETHODCALLTYPE * get_LocalAddresses) (INetFwRule * This, BSTR * localAddrs);
	HRESULT(STDMETHODCALLTYPE * put_LocalAddresses) (INetFwRule * This, BSTR localAddrs);
	HRESULT(STDMETHODCALLTYPE * get_RemoteAddresses) (INetFwRule * This, BSTR * remoteAddrs);
	HRESULT(STDMETHODCALLTYPE * put_RemoteAddresses) (INetFwRule * This, BSTR remoteAddrs);
	HRESULT(STDMETHODCALLTYPE * get_IcmpTypesAndCodes) (INetFwRule * This, BSTR * icmpTypesAndCodes);
	HRESULT(STDMETHODCALLTYPE * put_IcmpTypesAndCodes) (INetFwRule * This, BSTR icmpTypesAndCodes);
	HRESULT(STDMETHODCALLTYPE * get_Direction) (INetFwRule * This, NET_FW_RULE_DIRECTION * dir);
	HRESULT(STDMETHODCALLTYPE * put_Direction) (INetFwRule * This, NET_FW_RULE_DIRECTION dir);
	HRESULT(STDMETHODCALLTYPE * get_Interfaces) (INetFwRule * This, VARIANT * interfaces);
	HRESULT(STDMETHODCALLTYPE * put_Interfaces) (INetFwRule * This, VARIANT interfaces);
	HRESULT(STDMETHODCALLTYPE * get_InterfaceTypes) (INetFwRule * This, BSTR * interfaceTypes);
	HRESULT(STDMETHODCALLTYPE * put_InterfaceTypes) (INetFwRule * This, BSTR interfaceTypes);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (INetFwRule * This, VARIANT_BOOL * enabled);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (INetFwRule * This, VARIANT_BOOL enabled);
	HRESULT(STDMETHODCALLTYPE * get_Grouping) (INetFwRule * This, BSTR * context);
	HRESULT(STDMETHODCALLTYPE * put_Grouping) (INetFwRule * This, BSTR context);
	HRESULT(STDMETHODCALLTYPE * get_Profiles) (INetFwRule * This, long *profileTypesBitmask);
	HRESULT(STDMETHODCALLTYPE * put_Profiles) (INetFwRule * This, long profileTypesBitmask);
	HRESULT(STDMETHODCALLTYPE * get_EdgeTraversal) (INetFwRule * This, VARIANT_BOOL * enabled);
	HRESULT(STDMETHODCALLTYPE * put_EdgeTraversal) (INetFwRule * This, VARIANT_BOOL enabled);
	HRESULT(STDMETHODCALLTYPE * get_Action) (INetFwRule * This, NET_FW_ACTION * action);
	HRESULT(STDMETHODCALLTYPE * put_Action) (INetFwRule * This, NET_FW_ACTION action);
	END_INTERFACE
}  INetFwRuleVtbl;
interface INetFwRule
{
	CONST_VTBL struct INetFwRuleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwRule_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwRule_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwRule_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwRule_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwRule_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwRule_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwRule_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwRule_get_Name(This,name) ( (This)->lpVtbl -> get_Name(This,name) )
#define INetFwRule_put_Name(This,name) ( (This)->lpVtbl -> put_Name(This,name) )
#define INetFwRule_get_Description(This,desc) ( (This)->lpVtbl -> get_Description(This,desc) )
#define INetFwRule_put_Description(This,desc) ( (This)->lpVtbl -> put_Description(This,desc) )
#define INetFwRule_get_ApplicationName(This,imageFileName) ( (This)->lpVtbl -> get_ApplicationName(This,imageFileName) )
#define INetFwRule_put_ApplicationName(This,imageFileName) ( (This)->lpVtbl -> put_ApplicationName(This,imageFileName) )
#define INetFwRule_get_ServiceName(This,serviceName) ( (This)->lpVtbl -> get_ServiceName(This,serviceName) )
#define INetFwRule_put_ServiceName(This,serviceName) ( (This)->lpVtbl -> put_ServiceName(This,serviceName) )
#define INetFwRule_get_Protocol(This,protocol) ( (This)->lpVtbl -> get_Protocol(This,protocol) )
#define INetFwRule_put_Protocol(This,protocol) ( (This)->lpVtbl -> put_Protocol(This,protocol) )
#define INetFwRule_get_LocalPorts(This,portNumbers) ( (This)->lpVtbl -> get_LocalPorts(This,portNumbers) )
#define INetFwRule_put_LocalPorts(This,portNumbers) ( (This)->lpVtbl -> put_LocalPorts(This,portNumbers) )
#define INetFwRule_get_RemotePorts(This,portNumbers) ( (This)->lpVtbl -> get_RemotePorts(This,portNumbers) )
#define INetFwRule_put_RemotePorts(This,portNumbers) ( (This)->lpVtbl -> put_RemotePorts(This,portNumbers) )
#define INetFwRule_get_LocalAddresses(This,localAddrs) ( (This)->lpVtbl -> get_LocalAddresses(This,localAddrs) )
#define INetFwRule_put_LocalAddresses(This,localAddrs) ( (This)->lpVtbl -> put_LocalAddresses(This,localAddrs) )
#define INetFwRule_get_RemoteAddresses(This,remoteAddrs) ( (This)->lpVtbl -> get_RemoteAddresses(This,remoteAddrs) )
#define INetFwRule_put_RemoteAddresses(This,remoteAddrs) ( (This)->lpVtbl -> put_RemoteAddresses(This,remoteAddrs) )
#define INetFwRule_get_IcmpTypesAndCodes(This,icmpTypesAndCodes) ( (This)->lpVtbl -> get_IcmpTypesAndCodes(This,icmpTypesAndCodes) )
#define INetFwRule_put_IcmpTypesAndCodes(This,icmpTypesAndCodes) ( (This)->lpVtbl -> put_IcmpTypesAndCodes(This,icmpTypesAndCodes) )
#define INetFwRule_get_Direction(This,dir) ( (This)->lpVtbl -> get_Direction(This,dir) )
#define INetFwRule_put_Direction(This,dir) ( (This)->lpVtbl -> put_Direction(This,dir) )
#define INetFwRule_get_Interfaces(This,interfaces) ( (This)->lpVtbl -> get_Interfaces(This,interfaces) )
#define INetFwRule_put_Interfaces(This,interfaces) ( (This)->lpVtbl -> put_Interfaces(This,interfaces) )
#define INetFwRule_get_InterfaceTypes(This,interfaceTypes) ( (This)->lpVtbl -> get_InterfaceTypes(This,interfaceTypes) )
#define INetFwRule_put_InterfaceTypes(This,interfaceTypes) ( (This)->lpVtbl -> put_InterfaceTypes(This,interfaceTypes) )
#define INetFwRule_get_Enabled(This,enabled) ( (This)->lpVtbl -> get_Enabled(This,enabled) )
#define INetFwRule_put_Enabled(This,enabled) ( (This)->lpVtbl -> put_Enabled(This,enabled) )
#define INetFwRule_get_Grouping(This,context) ( (This)->lpVtbl -> get_Grouping(This,context) )
#define INetFwRule_put_Grouping(This,context) ( (This)->lpVtbl -> put_Grouping(This,context) )
#define INetFwRule_get_Profiles(This,profileTypesBitmask) ( (This)->lpVtbl -> get_Profiles(This,profileTypesBitmask) )
#define INetFwRule_put_Profiles(This,profileTypesBitmask) ( (This)->lpVtbl -> put_Profiles(This,profileTypesBitmask) )
#define INetFwRule_get_EdgeTraversal(This,enabled) ( (This)->lpVtbl -> get_EdgeTraversal(This,enabled) )
#define INetFwRule_put_EdgeTraversal(This,enabled) ( (This)->lpVtbl -> put_EdgeTraversal(This,enabled) )
#define INetFwRule_get_Action(This,action) ( (This)->lpVtbl -> get_Action(This,action) )
#define INetFwRule_put_Action(This,action) ( (This)->lpVtbl -> put_Action(This,action) )
#endif
#endif
#ifndef __INetFwRule2_INTERFACE_DEFINED__
#define __INetFwRule2_INTERFACE_DEFINED__
extern const IID IID_INetFwRule2;
typedef struct INetFwRule2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwRule2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwRule2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwRule2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwRule2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwRule2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwRule2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwRule2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (INetFwRule2 * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (INetFwRule2 * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_Description) (INetFwRule2 * This, BSTR * desc);
	HRESULT(STDMETHODCALLTYPE * put_Description) (INetFwRule2 * This, BSTR desc);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationName) (INetFwRule2 * This, BSTR * imageFileName);
	HRESULT(STDMETHODCALLTYPE * put_ApplicationName) (INetFwRule2 * This, BSTR imageFileName);
	HRESULT(STDMETHODCALLTYPE * get_ServiceName) (INetFwRule2 * This, BSTR * serviceName);
	HRESULT(STDMETHODCALLTYPE * put_ServiceName) (INetFwRule2 * This, BSTR serviceName);
	HRESULT(STDMETHODCALLTYPE * get_Protocol) (INetFwRule2 * This, LONG * protocol);
	HRESULT(STDMETHODCALLTYPE * put_Protocol) (INetFwRule2 * This, LONG protocol);
	HRESULT(STDMETHODCALLTYPE * get_LocalPorts) (INetFwRule2 * This, BSTR * portNumbers);
	HRESULT(STDMETHODCALLTYPE * put_LocalPorts) (INetFwRule2 * This, BSTR portNumbers);
	HRESULT(STDMETHODCALLTYPE * get_RemotePorts) (INetFwRule2 * This, BSTR * portNumbers);
	HRESULT(STDMETHODCALLTYPE * put_RemotePorts) (INetFwRule2 * This, BSTR portNumbers);
	HRESULT(STDMETHODCALLTYPE * get_LocalAddresses) (INetFwRule2 * This, BSTR * localAddrs);
	HRESULT(STDMETHODCALLTYPE * put_LocalAddresses) (INetFwRule2 * This, BSTR localAddrs);
	HRESULT(STDMETHODCALLTYPE * get_RemoteAddresses) (INetFwRule2 * This, BSTR * remoteAddrs);
	HRESULT(STDMETHODCALLTYPE * put_RemoteAddresses) (INetFwRule2 * This, BSTR remoteAddrs);
	HRESULT(STDMETHODCALLTYPE * get_IcmpTypesAndCodes) (INetFwRule2 * This, BSTR * icmpTypesAndCodes);
	HRESULT(STDMETHODCALLTYPE * put_IcmpTypesAndCodes) (INetFwRule2 * This, BSTR icmpTypesAndCodes);
	HRESULT(STDMETHODCALLTYPE * get_Direction) (INetFwRule2 * This, NET_FW_RULE_DIRECTION * dir);
	HRESULT(STDMETHODCALLTYPE * put_Direction) (INetFwRule2 * This, NET_FW_RULE_DIRECTION dir);
	HRESULT(STDMETHODCALLTYPE * get_Interfaces) (INetFwRule2 * This, VARIANT * interfaces);
	HRESULT(STDMETHODCALLTYPE * put_Interfaces) (INetFwRule2 * This, VARIANT interfaces);
	HRESULT(STDMETHODCALLTYPE * get_InterfaceTypes) (INetFwRule2 * This, BSTR * interfaceTypes);
	HRESULT(STDMETHODCALLTYPE * put_InterfaceTypes) (INetFwRule2 * This, BSTR interfaceTypes);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (INetFwRule2 * This, VARIANT_BOOL * enabled);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (INetFwRule2 * This, VARIANT_BOOL enabled);
	HRESULT(STDMETHODCALLTYPE * get_Grouping) (INetFwRule2 * This, BSTR * context);
	HRESULT(STDMETHODCALLTYPE * put_Grouping) (INetFwRule2 * This, BSTR context);
	HRESULT(STDMETHODCALLTYPE * get_Profiles) (INetFwRule2 * This, long *profileTypesBitmask);
	HRESULT(STDMETHODCALLTYPE * put_Profiles) (INetFwRule2 * This, long profileTypesBitmask);
	HRESULT(STDMETHODCALLTYPE * get_EdgeTraversal) (INetFwRule2 * This, VARIANT_BOOL * enabled);
	HRESULT(STDMETHODCALLTYPE * put_EdgeTraversal) (INetFwRule2 * This, VARIANT_BOOL enabled);
	HRESULT(STDMETHODCALLTYPE * get_Action) (INetFwRule2 * This, NET_FW_ACTION * action);
	HRESULT(STDMETHODCALLTYPE * put_Action) (INetFwRule2 * This, NET_FW_ACTION action);
	HRESULT(STDMETHODCALLTYPE * get_EdgeTraversalOptions) (INetFwRule2 * This, long *lOptions);
	HRESULT(STDMETHODCALLTYPE * put_EdgeTraversalOptions) (INetFwRule2 * This, long lOptions);
	END_INTERFACE
}  INetFwRule2Vtbl;
interface INetFwRule2
{
	CONST_VTBL struct INetFwRule2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwRule2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwRule2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwRule2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwRule2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwRule2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwRule2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwRule2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwRule2_get_Name(This,name) ( (This)->lpVtbl -> get_Name(This,name) )
#define INetFwRule2_put_Name(This,name) ( (This)->lpVtbl -> put_Name(This,name) )
#define INetFwRule2_get_Description(This,desc) ( (This)->lpVtbl -> get_Description(This,desc) )
#define INetFwRule2_put_Description(This,desc) ( (This)->lpVtbl -> put_Description(This,desc) )
#define INetFwRule2_get_ApplicationName(This,imageFileName) ( (This)->lpVtbl -> get_ApplicationName(This,imageFileName) )
#define INetFwRule2_put_ApplicationName(This,imageFileName) ( (This)->lpVtbl -> put_ApplicationName(This,imageFileName) )
#define INetFwRule2_get_ServiceName(This,serviceName) ( (This)->lpVtbl -> get_ServiceName(This,serviceName) )
#define INetFwRule2_put_ServiceName(This,serviceName) ( (This)->lpVtbl -> put_ServiceName(This,serviceName) )
#define INetFwRule2_get_Protocol(This,protocol) ( (This)->lpVtbl -> get_Protocol(This,protocol) )
#define INetFwRule2_put_Protocol(This,protocol) ( (This)->lpVtbl -> put_Protocol(This,protocol) )
#define INetFwRule2_get_LocalPorts(This,portNumbers) ( (This)->lpVtbl -> get_LocalPorts(This,portNumbers) )
#define INetFwRule2_put_LocalPorts(This,portNumbers) ( (This)->lpVtbl -> put_LocalPorts(This,portNumbers) )
#define INetFwRule2_get_RemotePorts(This,portNumbers) ( (This)->lpVtbl -> get_RemotePorts(This,portNumbers) )
#define INetFwRule2_put_RemotePorts(This,portNumbers) ( (This)->lpVtbl -> put_RemotePorts(This,portNumbers) )
#define INetFwRule2_get_LocalAddresses(This,localAddrs) ( (This)->lpVtbl -> get_LocalAddresses(This,localAddrs) )
#define INetFwRule2_put_LocalAddresses(This,localAddrs) ( (This)->lpVtbl -> put_LocalAddresses(This,localAddrs) )
#define INetFwRule2_get_RemoteAddresses(This,remoteAddrs) ( (This)->lpVtbl -> get_RemoteAddresses(This,remoteAddrs) )
#define INetFwRule2_put_RemoteAddresses(This,remoteAddrs) ( (This)->lpVtbl -> put_RemoteAddresses(This,remoteAddrs) )
#define INetFwRule2_get_IcmpTypesAndCodes(This,icmpTypesAndCodes) ( (This)->lpVtbl -> get_IcmpTypesAndCodes(This,icmpTypesAndCodes) )
#define INetFwRule2_put_IcmpTypesAndCodes(This,icmpTypesAndCodes) ( (This)->lpVtbl -> put_IcmpTypesAndCodes(This,icmpTypesAndCodes) )
#define INetFwRule2_get_Direction(This,dir) ( (This)->lpVtbl -> get_Direction(This,dir) )
#define INetFwRule2_put_Direction(This,dir) ( (This)->lpVtbl -> put_Direction(This,dir) )
#define INetFwRule2_get_Interfaces(This,interfaces) ( (This)->lpVtbl -> get_Interfaces(This,interfaces) )
#define INetFwRule2_put_Interfaces(This,interfaces) ( (This)->lpVtbl -> put_Interfaces(This,interfaces) )
#define INetFwRule2_get_InterfaceTypes(This,interfaceTypes) ( (This)->lpVtbl -> get_InterfaceTypes(This,interfaceTypes) )
#define INetFwRule2_put_InterfaceTypes(This,interfaceTypes) ( (This)->lpVtbl -> put_InterfaceTypes(This,interfaceTypes) )
#define INetFwRule2_get_Enabled(This,enabled) ( (This)->lpVtbl -> get_Enabled(This,enabled) )
#define INetFwRule2_put_Enabled(This,enabled) ( (This)->lpVtbl -> put_Enabled(This,enabled) )
#define INetFwRule2_get_Grouping(This,context) ( (This)->lpVtbl -> get_Grouping(This,context) )
#define INetFwRule2_put_Grouping(This,context) ( (This)->lpVtbl -> put_Grouping(This,context) )
#define INetFwRule2_get_Profiles(This,profileTypesBitmask) ( (This)->lpVtbl -> get_Profiles(This,profileTypesBitmask) )
#define INetFwRule2_put_Profiles(This,profileTypesBitmask) ( (This)->lpVtbl -> put_Profiles(This,profileTypesBitmask) )
#define INetFwRule2_get_EdgeTraversal(This,enabled) ( (This)->lpVtbl -> get_EdgeTraversal(This,enabled) )
#define INetFwRule2_put_EdgeTraversal(This,enabled) ( (This)->lpVtbl -> put_EdgeTraversal(This,enabled) )
#define INetFwRule2_get_Action(This,action) ( (This)->lpVtbl -> get_Action(This,action) )
#define INetFwRule2_put_Action(This,action) ( (This)->lpVtbl -> put_Action(This,action) )
#define INetFwRule2_get_EdgeTraversalOptions(This,lOptions) ( (This)->lpVtbl -> get_EdgeTraversalOptions(This,lOptions) )
#define INetFwRule2_put_EdgeTraversalOptions(This,lOptions) ( (This)->lpVtbl -> put_EdgeTraversalOptions(This,lOptions) )
#endif
#endif
#ifndef __INetFwRules_INTERFACE_DEFINED__
#define __INetFwRules_INTERFACE_DEFINED__
extern const IID IID_INetFwRules;
typedef struct INetFwRulesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwRules * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwRules * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwRules * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwRules * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwRules * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwRules * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwRules * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (INetFwRules * This, long *count);
	HRESULT(STDMETHODCALLTYPE * Add) (INetFwRules * This, INetFwRule * rule);
	HRESULT(STDMETHODCALLTYPE * Remove) (INetFwRules * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * Item) (INetFwRules * This, BSTR name, INetFwRule ** rule);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (INetFwRules * This, IUnknown ** newEnum);
	END_INTERFACE
}  INetFwRulesVtbl;
interface INetFwRules
{
	CONST_VTBL struct INetFwRulesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwRules_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwRules_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwRules_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwRules_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwRules_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwRules_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwRules_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwRules_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define INetFwRules_Add(This,rule) ( (This)->lpVtbl -> Add(This,rule) )
#define INetFwRules_Remove(This,name) ( (This)->lpVtbl -> Remove(This,name) )
#define INetFwRules_Item(This,name,rule) ( (This)->lpVtbl -> Item(This,name,rule) )
#define INetFwRules_get__NewEnum(This,newEnum) ( (This)->lpVtbl -> get__NewEnum(This,newEnum) )
#endif
#endif
#ifndef __INetFwServiceRestriction_INTERFACE_DEFINED__
#define __INetFwServiceRestriction_INTERFACE_DEFINED__
extern const IID IID_INetFwServiceRestriction;
typedef struct INetFwServiceRestrictionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwServiceRestriction * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwServiceRestriction * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwServiceRestriction * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwServiceRestriction * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwServiceRestriction * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwServiceRestriction * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwServiceRestriction * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * RestrictService) (INetFwServiceRestriction * This, BSTR serviceName, BSTR appName, VARIANT_BOOL restrictService, VARIANT_BOOL serviceSidRestricted);
	HRESULT(STDMETHODCALLTYPE * ServiceRestricted) (INetFwServiceRestriction * This, BSTR serviceName, BSTR appName, VARIANT_BOOL * serviceRestricted);
	HRESULT(STDMETHODCALLTYPE * get_Rules) (INetFwServiceRestriction * This, INetFwRules ** rules);
	END_INTERFACE
}  INetFwServiceRestrictionVtbl;
interface INetFwServiceRestriction
{
	CONST_VTBL struct INetFwServiceRestrictionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwServiceRestriction_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwServiceRestriction_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwServiceRestriction_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwServiceRestriction_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwServiceRestriction_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwServiceRestriction_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwServiceRestriction_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwServiceRestriction_RestrictService(This,serviceName,appName,restrictService,serviceSidRestricted) ( (This)->lpVtbl -> RestrictService(This,serviceName,appName,restrictService,serviceSidRestricted) )
#define INetFwServiceRestriction_ServiceRestricted(This,serviceName,appName,serviceRestricted) ( (This)->lpVtbl -> ServiceRestricted(This,serviceName,appName,serviceRestricted) )
#define INetFwServiceRestriction_get_Rules(This,rules) ( (This)->lpVtbl -> get_Rules(This,rules) )
#endif
#endif
#ifndef __INetFwProfile_INTERFACE_DEFINED__
#define __INetFwProfile_INTERFACE_DEFINED__
extern const IID IID_INetFwProfile;
typedef struct INetFwProfileVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwProfile * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwProfile * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwProfile * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwProfile * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwProfile * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwProfile * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwProfile * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Type) (INetFwProfile * This, NET_FW_PROFILE_TYPE * type);
	HRESULT(STDMETHODCALLTYPE * get_FirewallEnabled) (INetFwProfile * This, VARIANT_BOOL * enabled);
	HRESULT(STDMETHODCALLTYPE * put_FirewallEnabled) (INetFwProfile * This, VARIANT_BOOL enabled);
	HRESULT(STDMETHODCALLTYPE * get_ExceptionsNotAllowed) (INetFwProfile * This, VARIANT_BOOL * notAllowed);
	HRESULT(STDMETHODCALLTYPE * put_ExceptionsNotAllowed) (INetFwProfile * This, VARIANT_BOOL notAllowed);
	HRESULT(STDMETHODCALLTYPE * get_NotificationsDisabled) (INetFwProfile * This, VARIANT_BOOL * disabled);
	HRESULT(STDMETHODCALLTYPE * put_NotificationsDisabled) (INetFwProfile * This, VARIANT_BOOL disabled);
	HRESULT(STDMETHODCALLTYPE * get_UnicastResponsesToMulticastBroadcastDisabled) (INetFwProfile * This, VARIANT_BOOL * disabled);
	HRESULT(STDMETHODCALLTYPE * put_UnicastResponsesToMulticastBroadcastDisabled) (INetFwProfile * This, VARIANT_BOOL disabled);
	HRESULT(STDMETHODCALLTYPE * get_RemoteAdminSettings) (INetFwProfile * This, INetFwRemoteAdminSettings ** remoteAdminSettings);
	HRESULT(STDMETHODCALLTYPE * get_IcmpSettings) (INetFwProfile * This, INetFwIcmpSettings ** icmpSettings);
	HRESULT(STDMETHODCALLTYPE * get_GloballyOpenPorts) (INetFwProfile * This, INetFwOpenPorts ** openPorts);
	HRESULT(STDMETHODCALLTYPE * get_Services) (INetFwProfile * This, INetFwServices ** services);
	HRESULT(STDMETHODCALLTYPE * get_AuthorizedApplications) (INetFwProfile * This, INetFwAuthorizedApplications ** apps);
	END_INTERFACE
}  INetFwProfileVtbl;
interface INetFwProfile
{
	CONST_VTBL struct INetFwProfileVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwProfile_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwProfile_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwProfile_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwProfile_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwProfile_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwProfile_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwProfile_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwProfile_get_Type(This,type) ( (This)->lpVtbl -> get_Type(This,type) )
#define INetFwProfile_get_FirewallEnabled(This,enabled) ( (This)->lpVtbl -> get_FirewallEnabled(This,enabled) )
#define INetFwProfile_put_FirewallEnabled(This,enabled) ( (This)->lpVtbl -> put_FirewallEnabled(This,enabled) )
#define INetFwProfile_get_ExceptionsNotAllowed(This,notAllowed) ( (This)->lpVtbl -> get_ExceptionsNotAllowed(This,notAllowed) )
#define INetFwProfile_put_ExceptionsNotAllowed(This,notAllowed) ( (This)->lpVtbl -> put_ExceptionsNotAllowed(This,notAllowed) )
#define INetFwProfile_get_NotificationsDisabled(This,disabled) ( (This)->lpVtbl -> get_NotificationsDisabled(This,disabled) )
#define INetFwProfile_put_NotificationsDisabled(This,disabled) ( (This)->lpVtbl -> put_NotificationsDisabled(This,disabled) )
#define INetFwProfile_get_UnicastResponsesToMulticastBroadcastDisabled(This,disabled) ( (This)->lpVtbl -> get_UnicastResponsesToMulticastBroadcastDisabled(This,disabled) )
#define INetFwProfile_put_UnicastResponsesToMulticastBroadcastDisabled(This,disabled) ( (This)->lpVtbl -> put_UnicastResponsesToMulticastBroadcastDisabled(This,disabled) )
#define INetFwProfile_get_RemoteAdminSettings(This,remoteAdminSettings) ( (This)->lpVtbl -> get_RemoteAdminSettings(This,remoteAdminSettings) )
#define INetFwProfile_get_IcmpSettings(This,icmpSettings) ( (This)->lpVtbl -> get_IcmpSettings(This,icmpSettings) )
#define INetFwProfile_get_GloballyOpenPorts(This,openPorts) ( (This)->lpVtbl -> get_GloballyOpenPorts(This,openPorts) )
#define INetFwProfile_get_Services(This,services) ( (This)->lpVtbl -> get_Services(This,services) )
#define INetFwProfile_get_AuthorizedApplications(This,apps) ( (This)->lpVtbl -> get_AuthorizedApplications(This,apps) )
#endif
#endif
#ifndef __INetFwPolicy_INTERFACE_DEFINED__
#define __INetFwPolicy_INTERFACE_DEFINED__
extern const IID IID_INetFwPolicy;
typedef struct INetFwPolicyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwPolicy * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwPolicy * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwPolicy * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwPolicy * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwPolicy * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwPolicy * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwPolicy * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CurrentProfile) (INetFwPolicy * This, INetFwProfile ** profile);
	HRESULT(STDMETHODCALLTYPE * GetProfileByType) (INetFwPolicy * This, NET_FW_PROFILE_TYPE profileType, INetFwProfile ** profile);
	END_INTERFACE
}  INetFwPolicyVtbl;
interface INetFwPolicy
{
	CONST_VTBL struct INetFwPolicyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwPolicy_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwPolicy_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwPolicy_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwPolicy_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwPolicy_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwPolicy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwPolicy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwPolicy_get_CurrentProfile(This,profile) ( (This)->lpVtbl -> get_CurrentProfile(This,profile) )
#define INetFwPolicy_GetProfileByType(This,profileType,profile) ( (This)->lpVtbl -> GetProfileByType(This,profileType,profile) )
#endif
#endif
#ifndef __INetFwPolicy2_INTERFACE_DEFINED__
#define __INetFwPolicy2_INTERFACE_DEFINED__
extern const IID IID_INetFwPolicy2;
typedef struct INetFwPolicy2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwPolicy2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwPolicy2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwPolicy2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwPolicy2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwPolicy2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwPolicy2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwPolicy2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CurrentProfileTypes) (INetFwPolicy2 * This, long *profileTypesBitmask);
	HRESULT(STDMETHODCALLTYPE * get_FirewallEnabled) (INetFwPolicy2 * This, NET_FW_PROFILE_TYPE2 profileType, VARIANT_BOOL * enabled);
	HRESULT(STDMETHODCALLTYPE * put_FirewallEnabled) (INetFwPolicy2 * This, NET_FW_PROFILE_TYPE2 profileType, VARIANT_BOOL enabled);
	HRESULT(STDMETHODCALLTYPE * get_ExcludedInterfaces) (INetFwPolicy2 * This, NET_FW_PROFILE_TYPE2 profileType, VARIANT * interfaces);
	HRESULT(STDMETHODCALLTYPE * put_ExcludedInterfaces) (INetFwPolicy2 * This, NET_FW_PROFILE_TYPE2 profileType, VARIANT interfaces);
	HRESULT(STDMETHODCALLTYPE * get_BlockAllInboundTraffic) (INetFwPolicy2 * This, NET_FW_PROFILE_TYPE2 profileType, VARIANT_BOOL * Block);
	HRESULT(STDMETHODCALLTYPE * put_BlockAllInboundTraffic) (INetFwPolicy2 * This, NET_FW_PROFILE_TYPE2 profileType, VARIANT_BOOL Block);
	HRESULT(STDMETHODCALLTYPE * get_NotificationsDisabled) (INetFwPolicy2 * This, NET_FW_PROFILE_TYPE2 profileType, VARIANT_BOOL * disabled);
	HRESULT(STDMETHODCALLTYPE * put_NotificationsDisabled) (INetFwPolicy2 * This, NET_FW_PROFILE_TYPE2 profileType, VARIANT_BOOL disabled);
	HRESULT(STDMETHODCALLTYPE * get_UnicastResponsesToMulticastBroadcastDisabled) (INetFwPolicy2 * This, NET_FW_PROFILE_TYPE2 profileType, VARIANT_BOOL * disabled);
	HRESULT(STDMETHODCALLTYPE * put_UnicastResponsesToMulticastBroadcastDisabled) (INetFwPolicy2 * This, NET_FW_PROFILE_TYPE2 profileType, VARIANT_BOOL disabled);
	HRESULT(STDMETHODCALLTYPE * get_Rules) (INetFwPolicy2 * This, INetFwRules ** rules);
	HRESULT(STDMETHODCALLTYPE * get_ServiceRestriction) (INetFwPolicy2 * This, INetFwServiceRestriction ** ServiceRestriction);
	HRESULT(STDMETHODCALLTYPE * EnableRuleGroup) (INetFwPolicy2 * This, long profileTypesBitmask, BSTR group, VARIANT_BOOL enable);
	HRESULT(STDMETHODCALLTYPE * IsRuleGroupEnabled) (INetFwPolicy2 * This, long profileTypesBitmask, BSTR group, VARIANT_BOOL * enabled);
	HRESULT(STDMETHODCALLTYPE * RestoreLocalFirewallDefaults) (INetFwPolicy2 * This);
	HRESULT(STDMETHODCALLTYPE * get_DefaultInboundAction) (INetFwPolicy2 * This, NET_FW_PROFILE_TYPE2 profileType, NET_FW_ACTION * action);
	HRESULT(STDMETHODCALLTYPE * put_DefaultInboundAction) (INetFwPolicy2 * This, NET_FW_PROFILE_TYPE2 profileType, NET_FW_ACTION action);
	HRESULT(STDMETHODCALLTYPE * get_DefaultOutboundAction) (INetFwPolicy2 * This, NET_FW_PROFILE_TYPE2 profileType, NET_FW_ACTION * action);
	HRESULT(STDMETHODCALLTYPE * put_DefaultOutboundAction) (INetFwPolicy2 * This, NET_FW_PROFILE_TYPE2 profileType, NET_FW_ACTION action);
	HRESULT(STDMETHODCALLTYPE * get_IsRuleGroupCurrentlyEnabled) (INetFwPolicy2 * This, BSTR group, VARIANT_BOOL * enabled);
	HRESULT(STDMETHODCALLTYPE * get_LocalPolicyModifyState) (INetFwPolicy2 * This, NET_FW_MODIFY_STATE * modifyState);
	END_INTERFACE
}  INetFwPolicy2Vtbl;
interface INetFwPolicy2
{
	CONST_VTBL struct INetFwPolicy2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwPolicy2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwPolicy2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwPolicy2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwPolicy2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwPolicy2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwPolicy2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwPolicy2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwPolicy2_get_CurrentProfileTypes(This,profileTypesBitmask) ( (This)->lpVtbl -> get_CurrentProfileTypes(This,profileTypesBitmask) )
#define INetFwPolicy2_get_FirewallEnabled(This,profileType,enabled) ( (This)->lpVtbl -> get_FirewallEnabled(This,profileType,enabled) )
#define INetFwPolicy2_put_FirewallEnabled(This,profileType,enabled) ( (This)->lpVtbl -> put_FirewallEnabled(This,profileType,enabled) )
#define INetFwPolicy2_get_ExcludedInterfaces(This,profileType,interfaces) ( (This)->lpVtbl -> get_ExcludedInterfaces(This,profileType,interfaces) )
#define INetFwPolicy2_put_ExcludedInterfaces(This,profileType,interfaces) ( (This)->lpVtbl -> put_ExcludedInterfaces(This,profileType,interfaces) )
#define INetFwPolicy2_get_BlockAllInboundTraffic(This,profileType,Block) ( (This)->lpVtbl -> get_BlockAllInboundTraffic(This,profileType,Block) )
#define INetFwPolicy2_put_BlockAllInboundTraffic(This,profileType,Block) ( (This)->lpVtbl -> put_BlockAllInboundTraffic(This,profileType,Block) )
#define INetFwPolicy2_get_NotificationsDisabled(This,profileType,disabled) ( (This)->lpVtbl -> get_NotificationsDisabled(This,profileType,disabled) )
#define INetFwPolicy2_put_NotificationsDisabled(This,profileType,disabled) ( (This)->lpVtbl -> put_NotificationsDisabled(This,profileType,disabled) )
#define INetFwPolicy2_get_UnicastResponsesToMulticastBroadcastDisabled(This,profileType,disabled) ( (This)->lpVtbl -> get_UnicastResponsesToMulticastBroadcastDisabled(This,profileType,disabled) )
#define INetFwPolicy2_put_UnicastResponsesToMulticastBroadcastDisabled(This,profileType,disabled) ( (This)->lpVtbl -> put_UnicastResponsesToMulticastBroadcastDisabled(This,profileType,disabled) )
#define INetFwPolicy2_get_Rules(This,rules) ( (This)->lpVtbl -> get_Rules(This,rules) )
#define INetFwPolicy2_get_ServiceRestriction(This,ServiceRestriction) ( (This)->lpVtbl -> get_ServiceRestriction(This,ServiceRestriction) )
#define INetFwPolicy2_EnableRuleGroup(This,profileTypesBitmask,group,enable) ( (This)->lpVtbl -> EnableRuleGroup(This,profileTypesBitmask,group,enable) )
#define INetFwPolicy2_IsRuleGroupEnabled(This,profileTypesBitmask,group,enabled) ( (This)->lpVtbl -> IsRuleGroupEnabled(This,profileTypesBitmask,group,enabled) )
#define INetFwPolicy2_RestoreLocalFirewallDefaults(This) ( (This)->lpVtbl -> RestoreLocalFirewallDefaults(This) )
#define INetFwPolicy2_get_DefaultInboundAction(This,profileType,action) ( (This)->lpVtbl -> get_DefaultInboundAction(This,profileType,action) )
#define INetFwPolicy2_put_DefaultInboundAction(This,profileType,action) ( (This)->lpVtbl -> put_DefaultInboundAction(This,profileType,action) )
#define INetFwPolicy2_get_DefaultOutboundAction(This,profileType,action) ( (This)->lpVtbl -> get_DefaultOutboundAction(This,profileType,action) )
#define INetFwPolicy2_put_DefaultOutboundAction(This,profileType,action) ( (This)->lpVtbl -> put_DefaultOutboundAction(This,profileType,action) )
#define INetFwPolicy2_get_IsRuleGroupCurrentlyEnabled(This,group,enabled) ( (This)->lpVtbl -> get_IsRuleGroupCurrentlyEnabled(This,group,enabled) )
#define INetFwPolicy2_get_LocalPolicyModifyState(This,modifyState) ( (This)->lpVtbl -> get_LocalPolicyModifyState(This,modifyState) )
#endif
#endif
#ifndef __INetFwMgr_INTERFACE_DEFINED__
#define __INetFwMgr_INTERFACE_DEFINED__
extern const IID IID_INetFwMgr;
typedef struct INetFwMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwMgr * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwMgr * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwMgr * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwMgr * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwMgr * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwMgr * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwMgr * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_LocalPolicy) (INetFwMgr * This, INetFwPolicy ** localPolicy);
	HRESULT(STDMETHODCALLTYPE * get_CurrentProfileType) (INetFwMgr * This, NET_FW_PROFILE_TYPE * profileType);
	HRESULT(STDMETHODCALLTYPE * RestoreDefaults) (INetFwMgr * This);
	HRESULT(STDMETHODCALLTYPE * IsPortAllowed) (INetFwMgr * This, BSTR imageFileName, NET_FW_IP_VERSION ipVersion, LONG portNumber, BSTR localAddress, NET_FW_IP_PROTOCOL ipProtocol, VARIANT * allowed, VARIANT * restricted);
	HRESULT(STDMETHODCALLTYPE * IsIcmpTypeAllowed) (INetFwMgr * This, NET_FW_IP_VERSION ipVersion, BSTR localAddress, BYTE type, VARIANT * allowed, VARIANT * restricted);
	END_INTERFACE
}  INetFwMgrVtbl;
interface INetFwMgr
{
	CONST_VTBL struct INetFwMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwMgr_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwMgr_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwMgr_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwMgr_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwMgr_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwMgr_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwMgr_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwMgr_get_LocalPolicy(This,localPolicy) ( (This)->lpVtbl -> get_LocalPolicy(This,localPolicy) )
#define INetFwMgr_get_CurrentProfileType(This,profileType) ( (This)->lpVtbl -> get_CurrentProfileType(This,profileType) )
#define INetFwMgr_RestoreDefaults(This) ( (This)->lpVtbl -> RestoreDefaults(This) )
#define INetFwMgr_IsPortAllowed(This,imageFileName,ipVersion,portNumber,localAddress,ipProtocol,allowed,restricted) ( (This)->lpVtbl -> IsPortAllowed(This,imageFileName,ipVersion,portNumber,localAddress,ipProtocol,allowed,restricted) )
#define INetFwMgr_IsIcmpTypeAllowed(This,ipVersion,localAddress,type,allowed,restricted) ( (This)->lpVtbl -> IsIcmpTypeAllowed(This,ipVersion,localAddress,type,allowed,restricted) )
#endif
#endif
#ifndef __INetFwProduct_INTERFACE_DEFINED__
#define __INetFwProduct_INTERFACE_DEFINED__
extern const IID IID_INetFwProduct;
typedef struct INetFwProductVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwProduct * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwProduct * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwProduct * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwProduct * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwProduct * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwProduct * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwProduct * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_RuleCategories) (INetFwProduct * This, VARIANT * ruleCategories);
	HRESULT(STDMETHODCALLTYPE * put_RuleCategories) (INetFwProduct * This, VARIANT ruleCategories);
	HRESULT(STDMETHODCALLTYPE * get_DisplayName) (INetFwProduct * This, BSTR * displayName);
	HRESULT(STDMETHODCALLTYPE * put_DisplayName) (INetFwProduct * This, BSTR displayName);
	HRESULT(STDMETHODCALLTYPE * get_PathToSignedProductExe) (INetFwProduct * This, BSTR * path);
	END_INTERFACE
}  INetFwProductVtbl;
interface INetFwProduct
{
	CONST_VTBL struct INetFwProductVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwProduct_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwProduct_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwProduct_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwProduct_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwProduct_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwProduct_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwProduct_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwProduct_get_RuleCategories(This,ruleCategories) ( (This)->lpVtbl -> get_RuleCategories(This,ruleCategories) )
#define INetFwProduct_put_RuleCategories(This,ruleCategories) ( (This)->lpVtbl -> put_RuleCategories(This,ruleCategories) )
#define INetFwProduct_get_DisplayName(This,displayName) ( (This)->lpVtbl -> get_DisplayName(This,displayName) )
#define INetFwProduct_put_DisplayName(This,displayName) ( (This)->lpVtbl -> put_DisplayName(This,displayName) )
#define INetFwProduct_get_PathToSignedProductExe(This,path) ( (This)->lpVtbl -> get_PathToSignedProductExe(This,path) )
#endif
#endif
#ifndef __INetFwProducts_INTERFACE_DEFINED__
#define __INetFwProducts_INTERFACE_DEFINED__
extern const IID IID_INetFwProducts;
typedef struct INetFwProductsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetFwProducts * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetFwProducts * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetFwProducts * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INetFwProducts * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INetFwProducts * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INetFwProducts * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INetFwProducts * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (INetFwProducts * This, long *count);
	HRESULT(STDMETHODCALLTYPE * Register) (INetFwProducts * This, INetFwProduct * product, IUnknown ** registration);
	HRESULT(STDMETHODCALLTYPE * Item) (INetFwProducts * This, long index, INetFwProduct ** product);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (INetFwProducts * This, IUnknown ** newEnum);
	END_INTERFACE
}  INetFwProductsVtbl;
interface INetFwProducts
{
	CONST_VTBL struct INetFwProductsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetFwProducts_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetFwProducts_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetFwProducts_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetFwProducts_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INetFwProducts_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INetFwProducts_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INetFwProducts_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INetFwProducts_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define INetFwProducts_Register(This,product,registration) ( (This)->lpVtbl -> Register(This,product,registration) )
#define INetFwProducts_Item(This,index,product) ( (This)->lpVtbl -> Item(This,index,product) )
#define INetFwProducts_get__NewEnum(This,newEnum) ( (This)->lpVtbl -> get__NewEnum(This,newEnum) )
#endif
#endif
#ifndef __NetFwPublicTypeLib_LIBRARY_DEFINED__
#define __NetFwPublicTypeLib_LIBRARY_DEFINED__
extern const IID LIBID_NetFwPublicTypeLib;
extern const CLSID CLSID_NetFwRule;
extern const CLSID CLSID_NetFwOpenPort;
extern const CLSID CLSID_NetFwAuthorizedApplication;
extern const CLSID CLSID_NetFwPolicy2;
extern const CLSID CLSID_NetFwProduct;
extern const CLSID CLSID_NetFwProducts;
extern const CLSID CLSID_NetFwMgr;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
