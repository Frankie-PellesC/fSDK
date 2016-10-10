/*+@@file@@----------------------------------------------------------------*//*!
 \file		sbtsv.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 22:04:49 2016
 \date		Modified on Fri Sep 16 22:04:49 2016
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
#ifndef __sbtsv_h__
#define __sbtsv_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITsSbPlugin_FWD_DEFINED__
#define __ITsSbPlugin_FWD_DEFINED__
typedef interface ITsSbPlugin ITsSbPlugin;
#endif
#ifndef __ITsSbResourcePlugin_FWD_DEFINED__
#define __ITsSbResourcePlugin_FWD_DEFINED__
typedef interface ITsSbResourcePlugin ITsSbResourcePlugin;
#endif
#ifndef __ITsSbLoadBalancing_FWD_DEFINED__
#define __ITsSbLoadBalancing_FWD_DEFINED__
typedef interface ITsSbLoadBalancing ITsSbLoadBalancing;
#endif
#ifndef __ITsSbPlacement_FWD_DEFINED__
#define __ITsSbPlacement_FWD_DEFINED__
typedef interface ITsSbPlacement ITsSbPlacement;
#endif
#ifndef __ITsSbOrchestration_FWD_DEFINED__
#define __ITsSbOrchestration_FWD_DEFINED__
typedef interface ITsSbOrchestration ITsSbOrchestration;
#endif
#ifndef __ITsSbEnvironment_FWD_DEFINED__
#define __ITsSbEnvironment_FWD_DEFINED__
typedef interface ITsSbEnvironment ITsSbEnvironment;
#endif
#ifndef __ITsSbLoadBalanceResult_FWD_DEFINED__
#define __ITsSbLoadBalanceResult_FWD_DEFINED__
typedef interface ITsSbLoadBalanceResult ITsSbLoadBalanceResult;
#endif
#ifndef __ITsSbTarget_FWD_DEFINED__
#define __ITsSbTarget_FWD_DEFINED__
typedef interface ITsSbTarget ITsSbTarget;
#endif
#ifndef __ITsSbSession_FWD_DEFINED__
#define __ITsSbSession_FWD_DEFINED__
typedef interface ITsSbSession ITsSbSession;
#endif
#ifndef __ITsSbResourceNotification_FWD_DEFINED__
#define __ITsSbResourceNotification_FWD_DEFINED__
typedef interface ITsSbResourceNotification ITsSbResourceNotification;
#endif
#ifndef __ITsSbPropertySet_FWD_DEFINED__
#define __ITsSbPropertySet_FWD_DEFINED__
typedef interface ITsSbPropertySet ITsSbPropertySet;
#endif
#ifndef __ITsSbPluginPropertySet_FWD_DEFINED__
#define __ITsSbPluginPropertySet_FWD_DEFINED__
typedef interface ITsSbPluginPropertySet ITsSbPluginPropertySet;
#endif
#ifndef __ITsSbClientConnectionPropertySet_FWD_DEFINED__
#define __ITsSbClientConnectionPropertySet_FWD_DEFINED__
typedef interface ITsSbClientConnectionPropertySet ITsSbClientConnectionPropertySet;
#endif
#ifndef __ITsSbTargetPropertySet_FWD_DEFINED__
#define __ITsSbTargetPropertySet_FWD_DEFINED__
typedef interface ITsSbTargetPropertySet ITsSbTargetPropertySet;
#endif
#ifndef __ITsSbEnvironmentPropertySet_FWD_DEFINED__
#define __ITsSbEnvironmentPropertySet_FWD_DEFINED__
typedef interface ITsSbEnvironmentPropertySet ITsSbEnvironmentPropertySet;
#endif
#ifndef __ITsSbBaseNotifySink_FWD_DEFINED__
#define __ITsSbBaseNotifySink_FWD_DEFINED__
typedef interface ITsSbBaseNotifySink ITsSbBaseNotifySink;
#endif
#ifndef __ITsSbPluginNotifySink_FWD_DEFINED__
#define __ITsSbPluginNotifySink_FWD_DEFINED__
typedef interface ITsSbPluginNotifySink ITsSbPluginNotifySink;
#endif
#ifndef __ITsSbTargetNotifySink_FWD_DEFINED__
#define __ITsSbTargetNotifySink_FWD_DEFINED__
typedef interface ITsSbTargetNotifySink ITsSbTargetNotifySink;
#endif
#ifndef __ITsSbSessionNotifySink_FWD_DEFINED__
#define __ITsSbSessionNotifySink_FWD_DEFINED__
typedef interface ITsSbSessionNotifySink ITsSbSessionNotifySink;
#endif
#ifndef __ITsSbLoadBalancingNotifySink_FWD_DEFINED__
#define __ITsSbLoadBalancingNotifySink_FWD_DEFINED__
typedef interface ITsSbLoadBalancingNotifySink ITsSbLoadBalancingNotifySink;
#endif
#ifndef __ITsSbPlacementNotifySink_FWD_DEFINED__
#define __ITsSbPlacementNotifySink_FWD_DEFINED__
typedef interface ITsSbPlacementNotifySink ITsSbPlacementNotifySink;
#endif
#ifndef __ITsSbOrchestrationNotifySink_FWD_DEFINED__
#define __ITsSbOrchestrationNotifySink_FWD_DEFINED__
typedef interface ITsSbOrchestrationNotifySink ITsSbOrchestrationNotifySink;
#endif
#ifndef __ITsSbClientConnection_FWD_DEFINED__
#define __ITsSbClientConnection_FWD_DEFINED__
typedef interface ITsSbClientConnection ITsSbClientConnection;
#endif
#ifndef __ITsSbProvider_FWD_DEFINED__
#define __ITsSbProvider_FWD_DEFINED__
typedef interface ITsSbProvider ITsSbProvider;
#endif
#ifndef __ITsSbResourcePluginStore_FWD_DEFINED__
#define __ITsSbResourcePluginStore_FWD_DEFINED__
typedef interface ITsSbResourcePluginStore ITsSbResourcePluginStore;
#endif
#ifndef __ITsSbGlobalStore_FWD_DEFINED__
#define __ITsSbGlobalStore_FWD_DEFINED__
typedef interface ITsSbGlobalStore ITsSbGlobalStore;
#endif
#include "unknwn.h"
#include "oaidl.h"
#include "SessdirPublicTypes.h"
#pragma once
extern RPC_IF_HANDLE __MIDL_itf_sbtsv_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbtsv_0000_0000_v0_0_s_ifspec;
#ifndef __ITsSbPlugin_INTERFACE_DEFINED__
#define __ITsSbPlugin_INTERFACE_DEFINED__
extern const IID IID_ITsSbPlugin;
typedef struct ITsSbPluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbPlugin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbPlugin * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbPlugin * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ITsSbPlugin * This, ITsSbProvider * pProvider, ITsSbPluginNotifySink * pNotifySink, ITsSbPluginPropertySet * pPropertySet);
	HRESULT(STDMETHODCALLTYPE * Terminate) (ITsSbPlugin * This, HRESULT hr);
	END_INTERFACE
}  ITsSbPluginVtbl;
interface ITsSbPlugin
{
	CONST_VTBL struct ITsSbPluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbPlugin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbPlugin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbPlugin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbPlugin_Initialize(This,pProvider,pNotifySink,pPropertySet) ( (This)->lpVtbl -> Initialize(This,pProvider,pNotifySink,pPropertySet) )
#define ITsSbPlugin_Terminate(This,hr) ( (This)->lpVtbl -> Terminate(This,hr) )
#endif
#endif
#ifndef __ITsSbResourcePlugin_INTERFACE_DEFINED__
#define __ITsSbResourcePlugin_INTERFACE_DEFINED__
extern const IID IID_ITsSbResourcePlugin;
typedef struct ITsSbResourcePluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbResourcePlugin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbResourcePlugin * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbResourcePlugin * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ITsSbResourcePlugin * This, ITsSbProvider * pProvider, ITsSbPluginNotifySink * pNotifySink, ITsSbPluginPropertySet * pPropertySet);
	HRESULT(STDMETHODCALLTYPE * Terminate) (ITsSbResourcePlugin * This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * Refresh) (ITsSbResourcePlugin * This, DWORD dwFlags, BSTR pEnvBindingStr);
	END_INTERFACE
}  ITsSbResourcePluginVtbl;
interface ITsSbResourcePlugin
{
	CONST_VTBL struct ITsSbResourcePluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbResourcePlugin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbResourcePlugin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbResourcePlugin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbResourcePlugin_Initialize(This,pProvider,pNotifySink,pPropertySet) ( (This)->lpVtbl -> Initialize(This,pProvider,pNotifySink,pPropertySet) )
#define ITsSbResourcePlugin_Terminate(This,hr) ( (This)->lpVtbl -> Terminate(This,hr) )
#define ITsSbResourcePlugin_Refresh(This,dwFlags,pEnvBindingStr) ( (This)->lpVtbl -> Refresh(This,dwFlags,pEnvBindingStr) )
#endif
#endif
#ifndef __ITsSbLoadBalancing_INTERFACE_DEFINED__
#define __ITsSbLoadBalancing_INTERFACE_DEFINED__
extern const IID IID_ITsSbLoadBalancing;
typedef struct ITsSbLoadBalancingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbLoadBalancing * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbLoadBalancing * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbLoadBalancing * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ITsSbLoadBalancing * This, ITsSbProvider * pProvider, ITsSbPluginNotifySink * pNotifySink, ITsSbPluginPropertySet * pPropertySet);
	HRESULT(STDMETHODCALLTYPE * Terminate) (ITsSbLoadBalancing * This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * GetMostSuitableTarget) (ITsSbLoadBalancing * This, ITsSbClientConnection * pConnection, ITsSbLoadBalancingNotifySink * pLBSink);
	END_INTERFACE
}  ITsSbLoadBalancingVtbl;
interface ITsSbLoadBalancing
{
	CONST_VTBL struct ITsSbLoadBalancingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbLoadBalancing_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbLoadBalancing_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbLoadBalancing_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbLoadBalancing_Initialize(This,pProvider,pNotifySink,pPropertySet) ( (This)->lpVtbl -> Initialize(This,pProvider,pNotifySink,pPropertySet) )
#define ITsSbLoadBalancing_Terminate(This,hr) ( (This)->lpVtbl -> Terminate(This,hr) )
#define ITsSbLoadBalancing_GetMostSuitableTarget(This,pConnection,pLBSink) ( (This)->lpVtbl -> GetMostSuitableTarget(This,pConnection,pLBSink) )
#endif
#endif
#ifndef __ITsSbPlacement_INTERFACE_DEFINED__
#define __ITsSbPlacement_INTERFACE_DEFINED__
extern const IID IID_ITsSbPlacement;
typedef struct ITsSbPlacementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbPlacement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbPlacement * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbPlacement * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ITsSbPlacement * This, ITsSbProvider * pProvider, ITsSbPluginNotifySink * pNotifySink, ITsSbPluginPropertySet * pPropertySet);
	HRESULT(STDMETHODCALLTYPE * Terminate) (ITsSbPlacement * This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * QueryEnvironmentForTarget) (ITsSbPlacement * This, ITsSbClientConnection * pConnection, ITsSbPlacementNotifySink * pPlacementSink);
	HRESULT(STDMETHODCALLTYPE * CreateEnvironmentForTarget) (ITsSbPlacement * This, ITsSbClientConnection * pConnection, ITsSbPlacementNotifySink * pPlacementSink);
	END_INTERFACE
}  ITsSbPlacementVtbl;
interface ITsSbPlacement
{
	CONST_VTBL struct ITsSbPlacementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbPlacement_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbPlacement_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbPlacement_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbPlacement_Initialize(This,pProvider,pNotifySink,pPropertySet) ( (This)->lpVtbl -> Initialize(This,pProvider,pNotifySink,pPropertySet) )
#define ITsSbPlacement_Terminate(This,hr) ( (This)->lpVtbl -> Terminate(This,hr) )
#define ITsSbPlacement_QueryEnvironmentForTarget(This,pConnection,pPlacementSink) ( (This)->lpVtbl -> QueryEnvironmentForTarget(This,pConnection,pPlacementSink) )
#define ITsSbPlacement_CreateEnvironmentForTarget(This,pConnection,pPlacementSink) ( (This)->lpVtbl -> CreateEnvironmentForTarget(This,pConnection,pPlacementSink) )
#endif
#endif
#ifndef __ITsSbOrchestration_INTERFACE_DEFINED__
#define __ITsSbOrchestration_INTERFACE_DEFINED__
extern const IID IID_ITsSbOrchestration;
typedef struct ITsSbOrchestrationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbOrchestration * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbOrchestration * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbOrchestration * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ITsSbOrchestration * This, ITsSbProvider * pProvider, ITsSbPluginNotifySink * pNotifySink, ITsSbPluginPropertySet * pPropertySet);
	HRESULT(STDMETHODCALLTYPE * Terminate) (ITsSbOrchestration * This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * PrepareTargetForConnect) (ITsSbOrchestration * This, ITsSbClientConnection * pConnection, ITsSbOrchestrationNotifySink * pOrchestrationNotifySink);
	END_INTERFACE
}  ITsSbOrchestrationVtbl;
interface ITsSbOrchestration
{
	CONST_VTBL struct ITsSbOrchestrationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbOrchestration_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbOrchestration_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbOrchestration_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbOrchestration_Initialize(This,pProvider,pNotifySink,pPropertySet) ( (This)->lpVtbl -> Initialize(This,pProvider,pNotifySink,pPropertySet) )
#define ITsSbOrchestration_Terminate(This,hr) ( (This)->lpVtbl -> Terminate(This,hr) )
#define ITsSbOrchestration_PrepareTargetForConnect(This,pConnection,pOrchestrationNotifySink) ( (This)->lpVtbl -> PrepareTargetForConnect(This,pConnection,pOrchestrationNotifySink) )
#endif
#endif
#ifndef __ITsSbEnvironment_INTERFACE_DEFINED__
#define __ITsSbEnvironment_INTERFACE_DEFINED__
extern const IID IID_ITsSbEnvironment;
typedef struct ITsSbEnvironmentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbEnvironment * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbEnvironment * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbEnvironment * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ITsSbEnvironment * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ServerWeight) (ITsSbEnvironment * This, DWORD * pVal);
	HRESULT(STDMETHODCALLTYPE * get_EnvironmentPropertySet) (ITsSbEnvironment * This, ITsSbEnvironmentPropertySet ** ppPropertySet);
	HRESULT(STDMETHODCALLTYPE * put_EnvironmentPropertySet) (ITsSbEnvironment * This, ITsSbEnvironmentPropertySet * pVal);
	END_INTERFACE
}  ITsSbEnvironmentVtbl;
interface ITsSbEnvironment
{
	CONST_VTBL struct ITsSbEnvironmentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbEnvironment_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbEnvironment_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbEnvironment_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbEnvironment_get_Name(This,pVal) ( (This)->lpVtbl -> get_Name(This,pVal) )
#define ITsSbEnvironment_get_ServerWeight(This,pVal) ( (This)->lpVtbl -> get_ServerWeight(This,pVal) )
#define ITsSbEnvironment_get_EnvironmentPropertySet(This,ppPropertySet) ( (This)->lpVtbl -> get_EnvironmentPropertySet(This,ppPropertySet) )
#define ITsSbEnvironment_put_EnvironmentPropertySet(This,pVal) ( (This)->lpVtbl -> put_EnvironmentPropertySet(This,pVal) )
#endif
#endif
#ifndef __ITsSbLoadBalanceResult_INTERFACE_DEFINED__
#define __ITsSbLoadBalanceResult_INTERFACE_DEFINED__
extern const IID IID_ITsSbLoadBalanceResult;
typedef struct ITsSbLoadBalanceResultVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbLoadBalanceResult * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbLoadBalanceResult * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbLoadBalanceResult * This);
	HRESULT(STDMETHODCALLTYPE * get_TargetName) (ITsSbLoadBalanceResult * This, BSTR * pVal);
	END_INTERFACE
}  ITsSbLoadBalanceResultVtbl;
interface ITsSbLoadBalanceResult
{
	CONST_VTBL struct ITsSbLoadBalanceResultVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbLoadBalanceResult_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbLoadBalanceResult_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbLoadBalanceResult_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbLoadBalanceResult_get_TargetName(This,pVal) ( (This)->lpVtbl -> get_TargetName(This,pVal) )
#endif
#endif
#ifndef __ITsSbTarget_INTERFACE_DEFINED__
#define __ITsSbTarget_INTERFACE_DEFINED__
extern const IID IID_ITsSbTarget;
typedef struct ITsSbTargetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbTarget * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbTarget * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbTarget * This);
	HRESULT(STDMETHODCALLTYPE * get_TargetName) (ITsSbTarget * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_FarmName) (ITsSbTarget * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_FarmName) (ITsSbTarget * This, BSTR Val);
	HRESULT(STDMETHODCALLTYPE * get_TargetFQDN) (ITsSbTarget * This, BSTR * TargetFqdnName);
	HRESULT(STDMETHODCALLTYPE * put_TargetFQDN) (ITsSbTarget * This, BSTR Val);
	HRESULT(STDMETHODCALLTYPE * get_TargetNetbios) (ITsSbTarget * This, BSTR * TargetNetbiosName);
	HRESULT(STDMETHODCALLTYPE * put_TargetNetbios) (ITsSbTarget * This, BSTR Val);
	HRESULT(STDMETHODCALLTYPE * get_TargetExternalIpAddresses) (ITsSbTarget * This, TSSD_ConnectionPoint * sockaddr, DWORD * numAddresses);
	HRESULT(STDMETHODCALLTYPE * put_TargetExternalIpAddresses) (ITsSbTarget * This, TSSD_ConnectionPoint * sockaddr, DWORD numAddresses);
	HRESULT(STDMETHODCALLTYPE * get_TargetInternalIpAddresses) (ITsSbTarget * This, TSSD_ConnectionPoint * sockaddr, DWORD * numAddresses);
	HRESULT(STDMETHODCALLTYPE * put_TargetInternalIpAddresses) (ITsSbTarget * This, TSSD_ConnectionPoint * sockaddr, DWORD numAddresses);
	HRESULT(STDMETHODCALLTYPE * get_TargetState) (ITsSbTarget * This, TARGET_STATE * pState);
	HRESULT(STDMETHODCALLTYPE * put_TargetState) (ITsSbTarget * This, TARGET_STATE State);
	HRESULT(STDMETHODCALLTYPE * get_TargetPropertySet) (ITsSbTarget * This, ITsSbTargetPropertySet ** ppPropertySet);
	HRESULT(STDMETHODCALLTYPE * put_TargetPropertySet) (ITsSbTarget * This, ITsSbTargetPropertySet * pVal);
	END_INTERFACE
}  ITsSbTargetVtbl;
interface ITsSbTarget
{
	CONST_VTBL struct ITsSbTargetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbTarget_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbTarget_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbTarget_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbTarget_get_TargetName(This,pVal) ( (This)->lpVtbl -> get_TargetName(This,pVal) )
#define ITsSbTarget_get_FarmName(This,pVal) ( (This)->lpVtbl -> get_FarmName(This,pVal) )
#define ITsSbTarget_put_FarmName(This,Val) ( (This)->lpVtbl -> put_FarmName(This,Val) )
#define ITsSbTarget_get_TargetFQDN(This,TargetFqdnName) ( (This)->lpVtbl -> get_TargetFQDN(This,TargetFqdnName) )
#define ITsSbTarget_put_TargetFQDN(This,Val) ( (This)->lpVtbl -> put_TargetFQDN(This,Val) )
#define ITsSbTarget_get_TargetNetbios(This,TargetNetbiosName) ( (This)->lpVtbl -> get_TargetNetbios(This,TargetNetbiosName) )
#define ITsSbTarget_put_TargetNetbios(This,Val) ( (This)->lpVtbl -> put_TargetNetbios(This,Val) )
#define ITsSbTarget_get_TargetExternalIpAddresses(This,sockaddr,numAddresses) ( (This)->lpVtbl -> get_TargetExternalIpAddresses(This,sockaddr,numAddresses) )
#define ITsSbTarget_put_TargetExternalIpAddresses(This,sockaddr,numAddresses) ( (This)->lpVtbl -> put_TargetExternalIpAddresses(This,sockaddr,numAddresses) )
#define ITsSbTarget_get_TargetInternalIpAddresses(This,sockaddr,numAddresses) ( (This)->lpVtbl -> get_TargetInternalIpAddresses(This,sockaddr,numAddresses) )
#define ITsSbTarget_put_TargetInternalIpAddresses(This,sockaddr,numAddresses) ( (This)->lpVtbl -> put_TargetInternalIpAddresses(This,sockaddr,numAddresses) )
#define ITsSbTarget_get_TargetState(This,pState) ( (This)->lpVtbl -> get_TargetState(This,pState) )
#define ITsSbTarget_put_TargetState(This,State) ( (This)->lpVtbl -> put_TargetState(This,State) )
#define ITsSbTarget_get_TargetPropertySet(This,ppPropertySet) ( (This)->lpVtbl -> get_TargetPropertySet(This,ppPropertySet) )
#define ITsSbTarget_put_TargetPropertySet(This,pVal) ( (This)->lpVtbl -> put_TargetPropertySet(This,pVal) )
#endif
#endif
#ifndef __ITsSbSession_INTERFACE_DEFINED__
#define __ITsSbSession_INTERFACE_DEFINED__
extern const IID IID_ITsSbSession;
typedef struct ITsSbSessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbSession * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbSession * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbSession * This);
	HRESULT(STDMETHODCALLTYPE * get_SessionId) (ITsSbSession * This, DWORD * pVal);
	HRESULT(STDMETHODCALLTYPE * get_TargetName) (ITsSbSession * This, BSTR * targetName);
	HRESULT(STDMETHODCALLTYPE * get_Username) (ITsSbSession * This, BSTR * userName);
	HRESULT(STDMETHODCALLTYPE * get_Domain) (ITsSbSession * This, BSTR * domain);
	HRESULT(STDMETHODCALLTYPE * get_State) (ITsSbSession * This, TSSESSION_STATE * pState);
	HRESULT(STDMETHODCALLTYPE * put_State) (ITsSbSession * This, TSSESSION_STATE State);
	HRESULT(STDMETHODCALLTYPE * get_CreateTime) (ITsSbSession * This, FILETIME * pTime);
	HRESULT(STDMETHODCALLTYPE * put_CreateTime) (ITsSbSession * This, FILETIME Time);
	HRESULT(STDMETHODCALLTYPE * get_DisconnectTime) (ITsSbSession * This, FILETIME * pTime);
	HRESULT(STDMETHODCALLTYPE * put_DisconnectTime) (ITsSbSession * This, FILETIME Time);
	HRESULT(STDMETHODCALLTYPE * get_InitialProgram) (ITsSbSession * This, BSTR * app);
	HRESULT(STDMETHODCALLTYPE * put_InitialProgram) (ITsSbSession * This, BSTR Application);
	HRESULT(STDMETHODCALLTYPE * get_ClientDisplay) (ITsSbSession * This, CLIENT_DISPLAY * pClientDisplay);
	HRESULT(STDMETHODCALLTYPE * put_ClientDisplay) (ITsSbSession * This, CLIENT_DISPLAY pClientDisplay);
	HRESULT(STDMETHODCALLTYPE * get_ProtocolType) (ITsSbSession * This, DWORD * pVal);
	HRESULT(STDMETHODCALLTYPE * put_ProtocolType) (ITsSbSession * This, DWORD Val);
	END_INTERFACE
}  ITsSbSessionVtbl;
interface ITsSbSession
{
	CONST_VTBL struct ITsSbSessionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbSession_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbSession_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbSession_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbSession_get_SessionId(This,pVal) ( (This)->lpVtbl -> get_SessionId(This,pVal) )
#define ITsSbSession_get_TargetName(This,targetName) ( (This)->lpVtbl -> get_TargetName(This,targetName) )
#define ITsSbSession_get_Username(This,userName) ( (This)->lpVtbl -> get_Username(This,userName) )
#define ITsSbSession_get_Domain(This,domain) ( (This)->lpVtbl -> get_Domain(This,domain) )
#define ITsSbSession_get_State(This,pState) ( (This)->lpVtbl -> get_State(This,pState) )
#define ITsSbSession_put_State(This,State) ( (This)->lpVtbl -> put_State(This,State) )
#define ITsSbSession_get_CreateTime(This,pTime) ( (This)->lpVtbl -> get_CreateTime(This,pTime) )
#define ITsSbSession_put_CreateTime(This,Time) ( (This)->lpVtbl -> put_CreateTime(This,Time) )
#define ITsSbSession_get_DisconnectTime(This,pTime) ( (This)->lpVtbl -> get_DisconnectTime(This,pTime) )
#define ITsSbSession_put_DisconnectTime(This,Time) ( (This)->lpVtbl -> put_DisconnectTime(This,Time) )
#define ITsSbSession_get_InitialProgram(This,app) ( (This)->lpVtbl -> get_InitialProgram(This,app) )
#define ITsSbSession_put_InitialProgram(This,Application) ( (This)->lpVtbl -> put_InitialProgram(This,Application) )
#define ITsSbSession_get_ClientDisplay(This,pClientDisplay) ( (This)->lpVtbl -> get_ClientDisplay(This,pClientDisplay) )
#define ITsSbSession_put_ClientDisplay(This,pClientDisplay) ( (This)->lpVtbl -> put_ClientDisplay(This,pClientDisplay) )
#define ITsSbSession_get_ProtocolType(This,pVal) ( (This)->lpVtbl -> get_ProtocolType(This,pVal) )
#define ITsSbSession_put_ProtocolType(This,Val) ( (This)->lpVtbl -> put_ProtocolType(This,Val) )
#endif
#endif
#ifndef __ITsSbResourceNotification_INTERFACE_DEFINED__
#define __ITsSbResourceNotification_INTERFACE_DEFINED__
extern const IID IID_ITsSbResourceNotification;
typedef struct ITsSbResourceNotificationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbResourceNotification * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbResourceNotification * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbResourceNotification * This);
	HRESULT(STDMETHODCALLTYPE * NotifySessionChange) (ITsSbResourceNotification * This, TSSESSION_STATE changeType, ITsSbSession * pSession);
	HRESULT(STDMETHODCALLTYPE * NotifyTargetChange) (ITsSbResourceNotification * This, DWORD TargetChangeType, ITsSbTarget * pTarget);
	HRESULT(STDMETHODCALLTYPE * NotifyClientConnectionStateChange) (ITsSbResourceNotification * This, CONNECTION_CHANGE_NOTIFICATION ChangeType, ITsSbClientConnection * pConnection);
	END_INTERFACE
}  ITsSbResourceNotificationVtbl;
interface ITsSbResourceNotification
{
	CONST_VTBL struct ITsSbResourceNotificationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbResourceNotification_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbResourceNotification_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbResourceNotification_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbResourceNotification_NotifySessionChange(This,changeType,pSession) ( (This)->lpVtbl -> NotifySessionChange(This,changeType,pSession) )
#define ITsSbResourceNotification_NotifyTargetChange(This,TargetChangeType,pTarget) ( (This)->lpVtbl -> NotifyTargetChange(This,TargetChangeType,pTarget) )
#define ITsSbResourceNotification_NotifyClientConnectionStateChange(This,ChangeType,pConnection) ( (This)->lpVtbl -> NotifyClientConnectionStateChange(This,ChangeType,pConnection) )
#endif
#endif
#ifndef __ITsSbPropertySet_INTERFACE_DEFINED__
#define __ITsSbPropertySet_INTERFACE_DEFINED__
extern const IID IID_ITsSbPropertySet;
typedef struct ITsSbPropertySetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbPropertySet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbPropertySet * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbPropertySet * This);
	HRESULT(STDMETHODCALLTYPE * Read) (ITsSbPropertySet * This, LPCOLESTR pszPropName, VARIANT * pVar, IErrorLog * pErrorLog);
	HRESULT(STDMETHODCALLTYPE * Write) (ITsSbPropertySet * This, LPCOLESTR pszPropName, VARIANT * pVar);
	END_INTERFACE
}  ITsSbPropertySetVtbl;
interface ITsSbPropertySet
{
	CONST_VTBL struct ITsSbPropertySetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbPropertySet_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbPropertySet_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbPropertySet_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbPropertySet_Read(This,pszPropName,pVar,pErrorLog) ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) )
#define ITsSbPropertySet_Write(This,pszPropName,pVar) ( (This)->lpVtbl -> Write(This,pszPropName,pVar) )
#endif
#endif
#ifndef __ITsSbPluginPropertySet_INTERFACE_DEFINED__
#define __ITsSbPluginPropertySet_INTERFACE_DEFINED__
extern const IID IID_ITsSbPluginPropertySet;
typedef struct ITsSbPluginPropertySetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbPluginPropertySet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbPluginPropertySet * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbPluginPropertySet * This);
	HRESULT(STDMETHODCALLTYPE * Read) (ITsSbPluginPropertySet * This, LPCOLESTR pszPropName, VARIANT * pVar, IErrorLog * pErrorLog);
	HRESULT(STDMETHODCALLTYPE * Write) (ITsSbPluginPropertySet * This, LPCOLESTR pszPropName, VARIANT * pVar);
	END_INTERFACE
}  ITsSbPluginPropertySetVtbl;
interface ITsSbPluginPropertySet
{
	CONST_VTBL struct ITsSbPluginPropertySetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbPluginPropertySet_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbPluginPropertySet_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbPluginPropertySet_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbPluginPropertySet_Read(This,pszPropName,pVar,pErrorLog) ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) )
#define ITsSbPluginPropertySet_Write(This,pszPropName,pVar) ( (This)->lpVtbl -> Write(This,pszPropName,pVar) )
#endif
#endif
#ifndef __ITsSbClientConnectionPropertySet_INTERFACE_DEFINED__
#define __ITsSbClientConnectionPropertySet_INTERFACE_DEFINED__
extern const IID IID_ITsSbClientConnectionPropertySet;
typedef struct ITsSbClientConnectionPropertySetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbClientConnectionPropertySet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbClientConnectionPropertySet * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbClientConnectionPropertySet * This);
	HRESULT(STDMETHODCALLTYPE * Read) (ITsSbClientConnectionPropertySet * This, LPCOLESTR pszPropName, VARIANT * pVar, IErrorLog * pErrorLog);
	HRESULT(STDMETHODCALLTYPE * Write) (ITsSbClientConnectionPropertySet * This, LPCOLESTR pszPropName, VARIANT * pVar);
	END_INTERFACE
}  ITsSbClientConnectionPropertySetVtbl;
interface ITsSbClientConnectionPropertySet
{
	CONST_VTBL struct ITsSbClientConnectionPropertySetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbClientConnectionPropertySet_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbClientConnectionPropertySet_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbClientConnectionPropertySet_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbClientConnectionPropertySet_Read(This,pszPropName,pVar,pErrorLog) ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) )
#define ITsSbClientConnectionPropertySet_Write(This,pszPropName,pVar) ( (This)->lpVtbl -> Write(This,pszPropName,pVar) )
#endif
#endif
#ifndef __ITsSbTargetPropertySet_INTERFACE_DEFINED__
#define __ITsSbTargetPropertySet_INTERFACE_DEFINED__
extern const IID IID_ITsSbTargetPropertySet;
typedef struct ITsSbTargetPropertySetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbTargetPropertySet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbTargetPropertySet * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbTargetPropertySet * This);
	HRESULT(STDMETHODCALLTYPE * Read) (ITsSbTargetPropertySet * This, LPCOLESTR pszPropName, VARIANT * pVar, IErrorLog * pErrorLog);
	HRESULT(STDMETHODCALLTYPE * Write) (ITsSbTargetPropertySet * This, LPCOLESTR pszPropName, VARIANT * pVar);
	END_INTERFACE
}  ITsSbTargetPropertySetVtbl;
interface ITsSbTargetPropertySet
{
	CONST_VTBL struct ITsSbTargetPropertySetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbTargetPropertySet_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbTargetPropertySet_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbTargetPropertySet_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbTargetPropertySet_Read(This,pszPropName,pVar,pErrorLog) ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) )
#define ITsSbTargetPropertySet_Write(This,pszPropName,pVar) ( (This)->lpVtbl -> Write(This,pszPropName,pVar) )
#endif
#endif
#ifndef __ITsSbEnvironmentPropertySet_INTERFACE_DEFINED__
#define __ITsSbEnvironmentPropertySet_INTERFACE_DEFINED__
extern const IID IID_ITsSbEnvironmentPropertySet;
typedef struct ITsSbEnvironmentPropertySetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbEnvironmentPropertySet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbEnvironmentPropertySet * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbEnvironmentPropertySet * This);
	HRESULT(STDMETHODCALLTYPE * Read) (ITsSbEnvironmentPropertySet * This, LPCOLESTR pszPropName, VARIANT * pVar, IErrorLog * pErrorLog);
	HRESULT(STDMETHODCALLTYPE * Write) (ITsSbEnvironmentPropertySet * This, LPCOLESTR pszPropName, VARIANT * pVar);
	END_INTERFACE
}  ITsSbEnvironmentPropertySetVtbl;
interface ITsSbEnvironmentPropertySet
{
	CONST_VTBL struct ITsSbEnvironmentPropertySetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbEnvironmentPropertySet_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbEnvironmentPropertySet_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbEnvironmentPropertySet_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbEnvironmentPropertySet_Read(This,pszPropName,pVar,pErrorLog) ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) )
#define ITsSbEnvironmentPropertySet_Write(This,pszPropName,pVar) ( (This)->lpVtbl -> Write(This,pszPropName,pVar) )
#endif
#endif
#ifndef __ITsSbBaseNotifySink_INTERFACE_DEFINED__
#define __ITsSbBaseNotifySink_INTERFACE_DEFINED__
extern const IID IID_ITsSbBaseNotifySink;
typedef struct ITsSbBaseNotifySinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbBaseNotifySink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbBaseNotifySink * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbBaseNotifySink * This);
	HRESULT(STDMETHODCALLTYPE * OnError) (ITsSbBaseNotifySink * This, HRESULT hrError);
	HRESULT(STDMETHODCALLTYPE * OnReportStatus) (ITsSbBaseNotifySink * This, CLIENT_MESSAGE_TYPE messageType, DWORD messageID);
	END_INTERFACE
}  ITsSbBaseNotifySinkVtbl;
interface ITsSbBaseNotifySink
{
	CONST_VTBL struct ITsSbBaseNotifySinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbBaseNotifySink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbBaseNotifySink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbBaseNotifySink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbBaseNotifySink_OnError(This,hrError) ( (This)->lpVtbl -> OnError(This,hrError) )
#define ITsSbBaseNotifySink_OnReportStatus(This,messageType,messageID) ( (This)->lpVtbl -> OnReportStatus(This,messageType,messageID) )
#endif
#endif
#ifndef __ITsSbPluginNotifySink_INTERFACE_DEFINED__
#define __ITsSbPluginNotifySink_INTERFACE_DEFINED__
extern const IID IID_ITsSbPluginNotifySink;
typedef struct ITsSbPluginNotifySinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbPluginNotifySink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbPluginNotifySink * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbPluginNotifySink * This);
	HRESULT(STDMETHODCALLTYPE * OnError) (ITsSbPluginNotifySink * This, HRESULT hrError);
	HRESULT(STDMETHODCALLTYPE * OnReportStatus) (ITsSbPluginNotifySink * This, CLIENT_MESSAGE_TYPE messageType, DWORD messageID);
	HRESULT(STDMETHODCALLTYPE * OnInitialized) (ITsSbPluginNotifySink * This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * OnTerminated) (ITsSbPluginNotifySink * This);
	END_INTERFACE
}  ITsSbPluginNotifySinkVtbl;
interface ITsSbPluginNotifySink
{
	CONST_VTBL struct ITsSbPluginNotifySinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbPluginNotifySink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbPluginNotifySink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbPluginNotifySink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbPluginNotifySink_OnError(This,hrError) ( (This)->lpVtbl -> OnError(This,hrError) )
#define ITsSbPluginNotifySink_OnReportStatus(This,messageType,messageID) ( (This)->lpVtbl -> OnReportStatus(This,messageType,messageID) )
#define ITsSbPluginNotifySink_OnInitialized(This,hr) ( (This)->lpVtbl -> OnInitialized(This,hr) )
#define ITsSbPluginNotifySink_OnTerminated(This) ( (This)->lpVtbl -> OnTerminated(This) )
#endif
#endif
#ifndef __ITsSbTargetNotifySink_INTERFACE_DEFINED__
#define __ITsSbTargetNotifySink_INTERFACE_DEFINED__
extern const IID IID_ITsSbTargetNotifySink;
typedef struct ITsSbTargetNotifySinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbTargetNotifySink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbTargetNotifySink * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbTargetNotifySink * This);
	HRESULT(STDMETHODCALLTYPE * OnError) (ITsSbTargetNotifySink * This, HRESULT hrError);
	HRESULT(STDMETHODCALLTYPE * OnReportStatus) (ITsSbTargetNotifySink * This, CLIENT_MESSAGE_TYPE messageType, DWORD messageID);
	HRESULT(STDMETHODCALLTYPE * OnConfigChange) (ITsSbTargetNotifySink * This, DWORD TargetConfigTypes);
	HRESULT(STDMETHODCALLTYPE * OnStateChange) (ITsSbTargetNotifySink * This);
	END_INTERFACE
}  ITsSbTargetNotifySinkVtbl;
interface ITsSbTargetNotifySink
{
	CONST_VTBL struct ITsSbTargetNotifySinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbTargetNotifySink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbTargetNotifySink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbTargetNotifySink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbTargetNotifySink_OnError(This,hrError) ( (This)->lpVtbl -> OnError(This,hrError) )
#define ITsSbTargetNotifySink_OnReportStatus(This,messageType,messageID) ( (This)->lpVtbl -> OnReportStatus(This,messageType,messageID) )
#define ITsSbTargetNotifySink_OnConfigChange(This,TargetConfigTypes) ( (This)->lpVtbl -> OnConfigChange(This,TargetConfigTypes) )
#define ITsSbTargetNotifySink_OnStateChange(This) ( (This)->lpVtbl -> OnStateChange(This) )
#endif
#endif
#ifndef __ITsSbSessionNotifySink_INTERFACE_DEFINED__
#define __ITsSbSessionNotifySink_INTERFACE_DEFINED__
extern const IID IID_ITsSbSessionNotifySink;
typedef struct ITsSbSessionNotifySinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbSessionNotifySink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbSessionNotifySink * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbSessionNotifySink * This);
	HRESULT(STDMETHODCALLTYPE * OnError) (ITsSbSessionNotifySink * This, HRESULT hrError);
	HRESULT(STDMETHODCALLTYPE * OnReportStatus) (ITsSbSessionNotifySink * This, CLIENT_MESSAGE_TYPE messageType, DWORD messageID);
	HRESULT(STDMETHODCALLTYPE * OnStateChange) (ITsSbSessionNotifySink * This);
	END_INTERFACE
}  ITsSbSessionNotifySinkVtbl;
interface ITsSbSessionNotifySink
{
	CONST_VTBL struct ITsSbSessionNotifySinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbSessionNotifySink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbSessionNotifySink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbSessionNotifySink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbSessionNotifySink_OnError(This,hrError) ( (This)->lpVtbl -> OnError(This,hrError) )
#define ITsSbSessionNotifySink_OnReportStatus(This,messageType,messageID) ( (This)->lpVtbl -> OnReportStatus(This,messageType,messageID) )
#define ITsSbSessionNotifySink_OnStateChange(This) ( (This)->lpVtbl -> OnStateChange(This) )
#endif
#endif
#ifndef __ITsSbLoadBalancingNotifySink_INTERFACE_DEFINED__
#define __ITsSbLoadBalancingNotifySink_INTERFACE_DEFINED__
extern const IID IID_ITsSbLoadBalancingNotifySink;
typedef struct ITsSbLoadBalancingNotifySinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbLoadBalancingNotifySink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbLoadBalancingNotifySink * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbLoadBalancingNotifySink * This);
	HRESULT(STDMETHODCALLTYPE * OnError) (ITsSbLoadBalancingNotifySink * This, HRESULT hrError);
	HRESULT(STDMETHODCALLTYPE * OnReportStatus) (ITsSbLoadBalancingNotifySink * This, CLIENT_MESSAGE_TYPE messageType, DWORD messageID);
	HRESULT(STDMETHODCALLTYPE * OnGetMostSuitableTarget) (ITsSbLoadBalancingNotifySink * This, ITsSbLoadBalanceResult * pLBResult);
	END_INTERFACE
}  ITsSbLoadBalancingNotifySinkVtbl;
interface ITsSbLoadBalancingNotifySink
{
	CONST_VTBL struct ITsSbLoadBalancingNotifySinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbLoadBalancingNotifySink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbLoadBalancingNotifySink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbLoadBalancingNotifySink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbLoadBalancingNotifySink_OnError(This,hrError) ( (This)->lpVtbl -> OnError(This,hrError) )
#define ITsSbLoadBalancingNotifySink_OnReportStatus(This,messageType,messageID) ( (This)->lpVtbl -> OnReportStatus(This,messageType,messageID) )
#define ITsSbLoadBalancingNotifySink_OnGetMostSuitableTarget(This,pLBResult) ( (This)->lpVtbl -> OnGetMostSuitableTarget(This,pLBResult) )
#endif
#endif
#ifndef __ITsSbPlacementNotifySink_INTERFACE_DEFINED__
#define __ITsSbPlacementNotifySink_INTERFACE_DEFINED__
extern const IID IID_ITsSbPlacementNotifySink;
typedef struct ITsSbPlacementNotifySinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbPlacementNotifySink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbPlacementNotifySink * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbPlacementNotifySink * This);
	HRESULT(STDMETHODCALLTYPE * OnError) (ITsSbPlacementNotifySink * This, HRESULT hrError);
	HRESULT(STDMETHODCALLTYPE * OnReportStatus) (ITsSbPlacementNotifySink * This, CLIENT_MESSAGE_TYPE messageType, DWORD messageID);
	HRESULT(STDMETHODCALLTYPE * OnQueryEnvironmentCompleted) (ITsSbPlacementNotifySink * This, ITsSbEnvironment * pEnvironment);
	HRESULT(STDMETHODCALLTYPE * OnEnvironmentReady) (ITsSbPlacementNotifySink * This, ITsSbEnvironment * pEnvironment);
	END_INTERFACE
}  ITsSbPlacementNotifySinkVtbl;
interface ITsSbPlacementNotifySink
{
	CONST_VTBL struct ITsSbPlacementNotifySinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbPlacementNotifySink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbPlacementNotifySink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbPlacementNotifySink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbPlacementNotifySink_OnError(This,hrError) ( (This)->lpVtbl -> OnError(This,hrError) )
#define ITsSbPlacementNotifySink_OnReportStatus(This,messageType,messageID) ( (This)->lpVtbl -> OnReportStatus(This,messageType,messageID) )
#define ITsSbPlacementNotifySink_OnQueryEnvironmentCompleted(This,pEnvironment) ( (This)->lpVtbl -> OnQueryEnvironmentCompleted(This,pEnvironment) )
#define ITsSbPlacementNotifySink_OnEnvironmentReady(This,pEnvironment) ( (This)->lpVtbl -> OnEnvironmentReady(This,pEnvironment) )
#endif
#endif
#ifndef __ITsSbOrchestrationNotifySink_INTERFACE_DEFINED__
#define __ITsSbOrchestrationNotifySink_INTERFACE_DEFINED__
extern const IID IID_ITsSbOrchestrationNotifySink;
typedef struct ITsSbOrchestrationNotifySinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbOrchestrationNotifySink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbOrchestrationNotifySink * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbOrchestrationNotifySink * This);
	HRESULT(STDMETHODCALLTYPE * OnError) (ITsSbOrchestrationNotifySink * This, HRESULT hrError);
	HRESULT(STDMETHODCALLTYPE * OnReportStatus) (ITsSbOrchestrationNotifySink * This, CLIENT_MESSAGE_TYPE messageType, DWORD messageID);
	HRESULT(STDMETHODCALLTYPE * OnReadyToConnect) (ITsSbOrchestrationNotifySink * This, ITsSbTarget * pTarget);
	END_INTERFACE
}  ITsSbOrchestrationNotifySinkVtbl;
interface ITsSbOrchestrationNotifySink
{
	CONST_VTBL struct ITsSbOrchestrationNotifySinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbOrchestrationNotifySink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbOrchestrationNotifySink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbOrchestrationNotifySink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbOrchestrationNotifySink_OnError(This,hrError) ( (This)->lpVtbl -> OnError(This,hrError) )
#define ITsSbOrchestrationNotifySink_OnReportStatus(This,messageType,messageID) ( (This)->lpVtbl -> OnReportStatus(This,messageType,messageID) )
#define ITsSbOrchestrationNotifySink_OnReadyToConnect(This,pTarget) ( (This)->lpVtbl -> OnReadyToConnect(This,pTarget) )
#endif
#endif
#ifndef __ITsSbClientConnection_INTERFACE_DEFINED__
#define __ITsSbClientConnection_INTERFACE_DEFINED__
extern const IID IID_ITsSbClientConnection;
typedef struct ITsSbClientConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbClientConnection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbClientConnection * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbClientConnection * This);
	HRESULT(STDMETHODCALLTYPE * get_UserName) (ITsSbClientConnection * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Domain) (ITsSbClientConnection * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_InitialProgram) (ITsSbClientConnection * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_LoadBalanceResult) (ITsSbClientConnection * This, ITsSbLoadBalanceResult ** ppVal);
	HRESULT(STDMETHODCALLTYPE * get_TargetType) (ITsSbClientConnection * This, TARGET_TYPE * targetType);
	HRESULT(STDMETHODCALLTYPE * get_TargetName) (ITsSbClientConnection * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * PutContext) (ITsSbClientConnection * This, BSTR contextId, VARIANT context, VARIANT * existingContext);
	HRESULT(STDMETHODCALLTYPE * GetContext) (ITsSbClientConnection * This, BSTR contextId, VARIANT * context);
	HRESULT(STDMETHODCALLTYPE * get_Environment) (ITsSbClientConnection * This, ITsSbEnvironment ** ppEnvironment);
	HRESULT(STDMETHODCALLTYPE * get_IsDisconnectedSession) (ITsSbClientConnection * This, BOOL * pIsDisconnectionSession);
	HRESULT(STDMETHODCALLTYPE * get_ConnectionError) (ITsSbClientConnection * This);
	HRESULT(STDMETHODCALLTYPE * get_SamUserAccount) (ITsSbClientConnection * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ClientConnectionPropertySet) (ITsSbClientConnection * This, ITsSbClientConnectionPropertySet ** ppPropertySet);
	END_INTERFACE
}  ITsSbClientConnectionVtbl;
interface ITsSbClientConnection
{
	CONST_VTBL struct ITsSbClientConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbClientConnection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbClientConnection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbClientConnection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbClientConnection_get_UserName(This,pVal) ( (This)->lpVtbl -> get_UserName(This,pVal) )
#define ITsSbClientConnection_get_Domain(This,pVal) ( (This)->lpVtbl -> get_Domain(This,pVal) )
#define ITsSbClientConnection_get_InitialProgram(This,pVal) ( (This)->lpVtbl -> get_InitialProgram(This,pVal) )
#define ITsSbClientConnection_get_LoadBalanceResult(This,ppVal) ( (This)->lpVtbl -> get_LoadBalanceResult(This,ppVal) )
#define ITsSbClientConnection_get_TargetType(This,targetType) ( (This)->lpVtbl -> get_TargetType(This,targetType) )
#define ITsSbClientConnection_get_TargetName(This,pVal) ( (This)->lpVtbl -> get_TargetName(This,pVal) )
#define ITsSbClientConnection_PutContext(This,contextId,context,existingContext) ( (This)->lpVtbl -> PutContext(This,contextId,context,existingContext) )
#define ITsSbClientConnection_GetContext(This,contextId,context) ( (This)->lpVtbl -> GetContext(This,contextId,context) )
#define ITsSbClientConnection_get_Environment(This,ppEnvironment) ( (This)->lpVtbl -> get_Environment(This,ppEnvironment) )
#define ITsSbClientConnection_get_IsDisconnectedSession(This,pIsDisconnectionSession) ( (This)->lpVtbl -> get_IsDisconnectedSession(This,pIsDisconnectionSession) )
#define ITsSbClientConnection_get_ConnectionError(This) ( (This)->lpVtbl -> get_ConnectionError(This) )
#define ITsSbClientConnection_get_SamUserAccount(This,pVal) ( (This)->lpVtbl -> get_SamUserAccount(This,pVal) )
#define ITsSbClientConnection_get_ClientConnectionPropertySet(This,ppPropertySet) ( (This)->lpVtbl -> get_ClientConnectionPropertySet(This,ppPropertySet) )
#endif
#endif
#ifndef __ITsSbProvider_INTERFACE_DEFINED__
#define __ITsSbProvider_INTERFACE_DEFINED__
extern const IID IID_ITsSbProvider;
typedef struct ITsSbProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbProvider * This);
	HRESULT(STDMETHODCALLTYPE * CreateTargetObject) (ITsSbProvider * This, BSTR TargetName, ITsSbTarget ** ppTarget);
	HRESULT(STDMETHODCALLTYPE * CreateLoadBalanceResultObject) (ITsSbProvider * This, BSTR TargetName, ITsSbLoadBalanceResult ** ppLBResult);
	HRESULT(STDMETHODCALLTYPE * CreateSessionObject) (ITsSbProvider * This, BSTR TargetName, BSTR UserName, BSTR Domain, DWORD SessionId, ITsSbSession ** ppSession);
	HRESULT(STDMETHODCALLTYPE * CreatePluginPropertySet) (ITsSbProvider * This, ITsSbPluginPropertySet ** ppPropertySet);
	HRESULT(STDMETHODCALLTYPE * CreateTargetPropertySetObject) (ITsSbProvider * This, ITsSbTargetPropertySet ** ppPropertySet);
	HRESULT(STDMETHODCALLTYPE * CreateEnvironmentObject) (ITsSbProvider * This, BSTR Name, DWORD ServerWeight, ITsSbEnvironment ** ppEnvironment);
	HRESULT(STDMETHODCALLTYPE * GetResourcePluginStore) (ITsSbProvider * This, ITsSbResourcePlugin * pResourcePlugin, ITsSbResourcePluginStore ** ppStore);
	HRESULT(STDMETHODCALLTYPE * RegisterForNotification) (ITsSbProvider * This, DWORD notificationType, BSTR ResourceToMonitor, ITsSbResourceNotification * pPluginNotification);
	HRESULT(STDMETHODCALLTYPE * UnRegisterForNotification) (ITsSbProvider * This, DWORD notificationType, BSTR ResourceToMonitor);
	HRESULT(STDMETHODCALLTYPE * GetInstanceOfGlobalStore) (ITsSbProvider * This, ITsSbGlobalStore ** ppGlobalStore);
	HRESULT(STDMETHODCALLTYPE * CreateEnvironmentPropertySetObject) (ITsSbProvider * This, ITsSbEnvironmentPropertySet ** ppPropertySet);
	END_INTERFACE
}  ITsSbProviderVtbl;
interface ITsSbProvider
{
	CONST_VTBL struct ITsSbProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbProvider_CreateTargetObject(This,TargetName,ppTarget) ( (This)->lpVtbl -> CreateTargetObject(This,TargetName,ppTarget) )
#define ITsSbProvider_CreateLoadBalanceResultObject(This,TargetName,ppLBResult) ( (This)->lpVtbl -> CreateLoadBalanceResultObject(This,TargetName,ppLBResult) )
#define ITsSbProvider_CreateSessionObject(This,TargetName,UserName,Domain,SessionId,ppSession) ( (This)->lpVtbl -> CreateSessionObject(This,TargetName,UserName,Domain,SessionId,ppSession) )
#define ITsSbProvider_CreatePluginPropertySet(This,ppPropertySet) ( (This)->lpVtbl -> CreatePluginPropertySet(This,ppPropertySet) )
#define ITsSbProvider_CreateTargetPropertySetObject(This,ppPropertySet) ( (This)->lpVtbl -> CreateTargetPropertySetObject(This,ppPropertySet) )
#define ITsSbProvider_CreateEnvironmentObject(This,Name,ServerWeight,ppEnvironment) ( (This)->lpVtbl -> CreateEnvironmentObject(This,Name,ServerWeight,ppEnvironment) )
#define ITsSbProvider_GetResourcePluginStore(This,pResourcePlugin,ppStore) ( (This)->lpVtbl -> GetResourcePluginStore(This,pResourcePlugin,ppStore) )
#define ITsSbProvider_RegisterForNotification(This,notificationType,ResourceToMonitor,pPluginNotification) ( (This)->lpVtbl -> RegisterForNotification(This,notificationType,ResourceToMonitor,pPluginNotification) )
#define ITsSbProvider_UnRegisterForNotification(This,notificationType,ResourceToMonitor) ( (This)->lpVtbl -> UnRegisterForNotification(This,notificationType,ResourceToMonitor) )
#define ITsSbProvider_GetInstanceOfGlobalStore(This,ppGlobalStore) ( (This)->lpVtbl -> GetInstanceOfGlobalStore(This,ppGlobalStore) )
#define ITsSbProvider_CreateEnvironmentPropertySetObject(This,ppPropertySet) ( (This)->lpVtbl -> CreateEnvironmentPropertySetObject(This,ppPropertySet) )
#endif
#endif
#ifndef __ITsSbResourcePluginStore_INTERFACE_DEFINED__
#define __ITsSbResourcePluginStore_INTERFACE_DEFINED__
extern const IID IID_ITsSbResourcePluginStore;
typedef struct ITsSbResourcePluginStoreVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbResourcePluginStore * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbResourcePluginStore * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbResourcePluginStore * This);
	HRESULT(STDMETHODCALLTYPE * QueryTarget) (ITsSbResourcePluginStore * This, BSTR TargetName, BSTR FarmName, ITsSbTarget ** ppTarget);
	HRESULT(STDMETHODCALLTYPE * GetTargetNotifySink) (ITsSbResourcePluginStore * This, ITsSbTarget * pTarget, ITsSbTargetNotifySink ** ppTargetNotifySink);
	HRESULT(STDMETHODCALLTYPE * QuerySessionByUserName) (ITsSbResourcePluginStore * This, BSTR UserName, TARGET_TYPE TargetType, BSTR TargetName, ITsSbSession ** ppSession);
	HRESULT(STDMETHODCALLTYPE * QuerySessionBySessionId) (ITsSbResourcePluginStore * This, DWORD dwSessionId, BSTR TargetName, ITsSbSession ** ppSession);
	HRESULT(STDMETHODCALLTYPE * GetSessionNotifySink) (ITsSbResourcePluginStore * This, ITsSbSession * pSession, ITsSbSessionNotifySink ** ppSessionNotifySink);
	HRESULT(STDMETHODCALLTYPE * AddTargetToStore) (ITsSbResourcePluginStore * This, ITsSbTarget * pTarget, ITsSbTargetNotifySink ** ppTargetNotifySink);
	HRESULT(STDMETHODCALLTYPE * AddSessionToStore) (ITsSbResourcePluginStore * This, ITsSbSession * pSession, ITsSbSessionNotifySink ** ppSessionNotifySink);
	HRESULT(STDMETHODCALLTYPE * AddEnvironmentToStore) (ITsSbResourcePluginStore * This, ITsSbEnvironment * pEnvironment);
	HRESULT(STDMETHODCALLTYPE * RemoveEnvironmentFromStore) (ITsSbResourcePluginStore * This, BSTR EnvironmentName);
	HRESULT(STDMETHODCALLTYPE * EnumerateFarms) (ITsSbResourcePluginStore * This, DWORD * pdwCount, SAFEARRAY * *pVal);
	HRESULT(STDMETHODCALLTYPE * EnumerateTargetsByFarm) (ITsSbResourcePluginStore * This, BSTR FarmName, DWORD * pdwCount, IUnknown ** pVal[]);
	HRESULT(STDMETHODCALLTYPE * EnumerateNonFarmTargets) (ITsSbResourcePluginStore * This, DWORD * pdwCount, IUnknown ** pVal[]);
	HRESULT(STDMETHODCALLTYPE * QueryEnvironment) (ITsSbResourcePluginStore * This, BSTR EnvironmentName, ITsSbEnvironment ** ppEnvironment);
	HRESULT(STDMETHODCALLTYPE * EnumerateEnvironments) (ITsSbResourcePluginStore * This, DWORD * pdwCount, ITsSbEnvironment ** pVal[]);
	HRESULT(STDMETHODCALLTYPE * EnumerateSessionsByTargetName) (ITsSbResourcePluginStore * This, BSTR TargetName, DWORD * pdwCount, ITsSbSession ** ppVal[]);
	END_INTERFACE
}  ITsSbResourcePluginStoreVtbl;
interface ITsSbResourcePluginStore
{
	CONST_VTBL struct ITsSbResourcePluginStoreVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbResourcePluginStore_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbResourcePluginStore_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbResourcePluginStore_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbResourcePluginStore_QueryTarget(This,TargetName,FarmName,ppTarget) ( (This)->lpVtbl -> QueryTarget(This,TargetName,FarmName,ppTarget) )
#define ITsSbResourcePluginStore_GetTargetNotifySink(This,pTarget,ppTargetNotifySink) ( (This)->lpVtbl -> GetTargetNotifySink(This,pTarget,ppTargetNotifySink) )
#define ITsSbResourcePluginStore_QuerySessionByUserName(This,UserName,TargetType,TargetName,ppSession) ( (This)->lpVtbl -> QuerySessionByUserName(This,UserName,TargetType,TargetName,ppSession) )
#define ITsSbResourcePluginStore_QuerySessionBySessionId(This,dwSessionId,TargetName,ppSession) ( (This)->lpVtbl -> QuerySessionBySessionId(This,dwSessionId,TargetName,ppSession) )
#define ITsSbResourcePluginStore_GetSessionNotifySink(This,pSession,ppSessionNotifySink) ( (This)->lpVtbl -> GetSessionNotifySink(This,pSession,ppSessionNotifySink) )
#define ITsSbResourcePluginStore_AddTargetToStore(This,pTarget,ppTargetNotifySink) ( (This)->lpVtbl -> AddTargetToStore(This,pTarget,ppTargetNotifySink) )
#define ITsSbResourcePluginStore_AddSessionToStore(This,pSession,ppSessionNotifySink) ( (This)->lpVtbl -> AddSessionToStore(This,pSession,ppSessionNotifySink) )
#define ITsSbResourcePluginStore_AddEnvironmentToStore(This,pEnvironment) ( (This)->lpVtbl -> AddEnvironmentToStore(This,pEnvironment) )
#define ITsSbResourcePluginStore_RemoveEnvironmentFromStore(This,EnvironmentName) ( (This)->lpVtbl -> RemoveEnvironmentFromStore(This,EnvironmentName) )
#define ITsSbResourcePluginStore_EnumerateFarms(This,pdwCount,pVal) ( (This)->lpVtbl -> EnumerateFarms(This,pdwCount,pVal) )
#define ITsSbResourcePluginStore_EnumerateTargetsByFarm(This,FarmName,pdwCount,pVal) ( (This)->lpVtbl -> EnumerateTargetsByFarm(This,FarmName,pdwCount,pVal) )
#define ITsSbResourcePluginStore_EnumerateNonFarmTargets(This,pdwCount,pVal) ( (This)->lpVtbl -> EnumerateNonFarmTargets(This,pdwCount,pVal) )
#define ITsSbResourcePluginStore_QueryEnvironment(This,EnvironmentName,ppEnvironment) ( (This)->lpVtbl -> QueryEnvironment(This,EnvironmentName,ppEnvironment) )
#define ITsSbResourcePluginStore_EnumerateEnvironments(This,pdwCount,pVal) ( (This)->lpVtbl -> EnumerateEnvironments(This,pdwCount,pVal) )
#define ITsSbResourcePluginStore_EnumerateSessionsByTargetName(This,TargetName,pdwCount,ppVal) ( (This)->lpVtbl -> EnumerateSessionsByTargetName(This,TargetName,pdwCount,ppVal) )
#endif
#endif
#ifndef __ITsSbGlobalStore_INTERFACE_DEFINED__
#define __ITsSbGlobalStore_INTERFACE_DEFINED__
extern const IID IID_ITsSbGlobalStore;
typedef struct ITsSbGlobalStoreVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITsSbGlobalStore * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITsSbGlobalStore * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITsSbGlobalStore * This);
	HRESULT(STDMETHODCALLTYPE * QueryTarget) (ITsSbGlobalStore * This, BSTR ProviderName, BSTR TargetName, BSTR FarmName, ITsSbTarget ** ppTarget);
	HRESULT(STDMETHODCALLTYPE * QuerySessionByUserName) (ITsSbGlobalStore * This, BSTR ProviderName, BSTR UserName, TARGET_TYPE TargetType, BSTR TargetName, ITsSbSession ** ppSession);
	HRESULT(STDMETHODCALLTYPE * QuerySessionBySessionId) (ITsSbGlobalStore * This, BSTR ProviderName, DWORD dwSessionId, BSTR TargetName, ITsSbSession ** ppSession);
	HRESULT(STDMETHODCALLTYPE * EnumerateFarms) (ITsSbGlobalStore * This, BSTR ProviderName, DWORD * pdwCount, SAFEARRAY * *pVal);
	HRESULT(STDMETHODCALLTYPE * EnumerateTargetsByFarm) (ITsSbGlobalStore * This, BSTR ProviderName, BSTR FarmName, DWORD * pdwCount, IUnknown ** pVal[]);
	HRESULT(STDMETHODCALLTYPE * EnumerateNonFarmTargets) (ITsSbGlobalStore * This, BSTR ProviderName, DWORD * pdwCount, IUnknown ** pVal[]);
	END_INTERFACE
}  ITsSbGlobalStoreVtbl;
interface ITsSbGlobalStore
{
	CONST_VTBL struct ITsSbGlobalStoreVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITsSbGlobalStore_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITsSbGlobalStore_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITsSbGlobalStore_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITsSbGlobalStore_QueryTarget(This,ProviderName,TargetName,FarmName,ppTarget) ( (This)->lpVtbl -> QueryTarget(This,ProviderName,TargetName,FarmName,ppTarget) )
#define ITsSbGlobalStore_QuerySessionByUserName(This,ProviderName,UserName,TargetType,TargetName,ppSession) ( (This)->lpVtbl -> QuerySessionByUserName(This,ProviderName,UserName,TargetType,TargetName,ppSession) )
#define ITsSbGlobalStore_QuerySessionBySessionId(This,ProviderName,dwSessionId,TargetName,ppSession) ( (This)->lpVtbl -> QuerySessionBySessionId(This,ProviderName,dwSessionId,TargetName,ppSession) )
#define ITsSbGlobalStore_EnumerateFarms(This,ProviderName,pdwCount,pVal) ( (This)->lpVtbl -> EnumerateFarms(This,ProviderName,pdwCount,pVal) )
#define ITsSbGlobalStore_EnumerateTargetsByFarm(This,ProviderName,FarmName,pdwCount,pVal) ( (This)->lpVtbl -> EnumerateTargetsByFarm(This,ProviderName,FarmName,pdwCount,pVal) )
#define ITsSbGlobalStore_EnumerateNonFarmTargets(This,ProviderName,pdwCount,pVal) ( (This)->lpVtbl -> EnumerateNonFarmTargets(This,ProviderName,pdwCount,pVal) )
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
