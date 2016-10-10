/*+@@file@@----------------------------------------------------------------*//*!
 \file		napmanagement.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:16:09 2016
 \date		Modified on Sun Sep 11 22:16:09 2016
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
#ifndef __napmanagement_h__
#define __napmanagement_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __INapClientManagement_FWD_DEFINED__
#define __INapClientManagement_FWD_DEFINED__
typedef interface INapClientManagement INapClientManagement;
#endif
#ifndef __INapClientManagement2_FWD_DEFINED__
#define __INapClientManagement2_FWD_DEFINED__
typedef interface INapClientManagement2 INapClientManagement2;
#endif
#include "NapTypes.h"
#ifndef __INapClientManagement_INTERFACE_DEFINED__
#define __INapClientManagement_INTERFACE_DEFINED__
extern const IID IID_INapClientManagement;
typedef struct INapClientManagementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapClientManagement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapClientManagement * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapClientManagement * This);
	HRESULT(STDMETHODCALLTYPE * GetNapClientInfo) (INapClientManagement * This, BOOL * isNapEnabled, CountedString ** clientName, CountedString ** clientDescription, CountedString ** protocolVersion);
	HRESULT(STDMETHODCALLTYPE * GetSystemIsolationInfo) (INapClientManagement * This, IsolationInfo ** isolationInfo, BOOL * unknownConnections);
	HRESULT(STDMETHODCALLTYPE * RegisterSystemHealthAgent) (INapClientManagement * This, const NapComponentRegistrationInfo * agent);
	HRESULT(STDMETHODCALLTYPE * UnregisterSystemHealthAgent) (INapClientManagement * This, SystemHealthEntityId id);
	HRESULT(STDMETHODCALLTYPE * RegisterEnforcementClient) (INapClientManagement * This, const NapComponentRegistrationInfo * enforcer);
	HRESULT(STDMETHODCALLTYPE * UnregisterEnforcementClient) (INapClientManagement * This, EnforcementEntityId id);
	HRESULT(STDMETHODCALLTYPE * GetRegisteredSystemHealthAgents) (INapClientManagement * This, SystemHealthEntityCount * count, NapComponentRegistrationInfo ** agents);
	HRESULT(STDMETHODCALLTYPE * GetRegisteredEnforcementClients) (INapClientManagement * This, EnforcementEntityCount * count, NapComponentRegistrationInfo ** enforcers);
	END_INTERFACE
}  INapClientManagementVtbl;
interface INapClientManagement
{
	CONST_VTBL struct INapClientManagementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapClientManagement_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapClientManagement_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapClientManagement_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapClientManagement_GetNapClientInfo(This,isNapEnabled,clientName,clientDescription,protocolVersion) ( (This)->lpVtbl -> GetNapClientInfo(This,isNapEnabled,clientName,clientDescription,protocolVersion) )
#define INapClientManagement_GetSystemIsolationInfo(This,isolationInfo,unknownConnections) ( (This)->lpVtbl -> GetSystemIsolationInfo(This,isolationInfo,unknownConnections) )
#define INapClientManagement_RegisterSystemHealthAgent(This,agent) ( (This)->lpVtbl -> RegisterSystemHealthAgent(This,agent) )
#define INapClientManagement_UnregisterSystemHealthAgent(This,id) ( (This)->lpVtbl -> UnregisterSystemHealthAgent(This,id) )
#define INapClientManagement_RegisterEnforcementClient(This,enforcer) ( (This)->lpVtbl -> RegisterEnforcementClient(This,enforcer) )
#define INapClientManagement_UnregisterEnforcementClient(This,id) ( (This)->lpVtbl -> UnregisterEnforcementClient(This,id) )
#define INapClientManagement_GetRegisteredSystemHealthAgents(This,count,agents) ( (This)->lpVtbl -> GetRegisteredSystemHealthAgents(This,count,agents) )
#define INapClientManagement_GetRegisteredEnforcementClients(This,count,enforcers) ( (This)->lpVtbl -> GetRegisteredEnforcementClients(This,count,enforcers) )
#endif
#endif
#ifndef __INapClientManagement2_INTERFACE_DEFINED__
#define __INapClientManagement2_INTERFACE_DEFINED__
extern const IID IID_INapClientManagement2;
typedef struct INapClientManagement2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapClientManagement2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapClientManagement2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapClientManagement2 * This);
	HRESULT(STDMETHODCALLTYPE * GetNapClientInfo) (INapClientManagement2 * This, BOOL * isNapEnabled, CountedString ** clientName, CountedString ** clientDescription, CountedString ** protocolVersion);
	HRESULT(STDMETHODCALLTYPE * GetSystemIsolationInfo) (INapClientManagement2 * This, IsolationInfo ** isolationInfo, BOOL * unknownConnections);
	HRESULT(STDMETHODCALLTYPE * RegisterSystemHealthAgent) (INapClientManagement2 * This, const NapComponentRegistrationInfo * agent);
	HRESULT(STDMETHODCALLTYPE * UnregisterSystemHealthAgent) (INapClientManagement2 * This, SystemHealthEntityId id);
	HRESULT(STDMETHODCALLTYPE * RegisterEnforcementClient) (INapClientManagement2 * This, const NapComponentRegistrationInfo * enforcer);
	HRESULT(STDMETHODCALLTYPE * UnregisterEnforcementClient) (INapClientManagement2 * This, EnforcementEntityId id);
	HRESULT(STDMETHODCALLTYPE * GetRegisteredSystemHealthAgents) (INapClientManagement2 * This, SystemHealthEntityCount * count, NapComponentRegistrationInfo ** agents);
	HRESULT(STDMETHODCALLTYPE * GetRegisteredEnforcementClients) (INapClientManagement2 * This, EnforcementEntityCount * count, NapComponentRegistrationInfo ** enforcers);
	HRESULT(STDMETHODCALLTYPE * GetSystemIsolationInfoEx) (INapClientManagement2 * This, IsolationInfoEx ** isolationInfo, BOOL * unknownConnections);
	END_INTERFACE
}  INapClientManagement2Vtbl;
interface INapClientManagement2
{
	CONST_VTBL struct INapClientManagement2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapClientManagement2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapClientManagement2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapClientManagement2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapClientManagement2_GetNapClientInfo(This,isNapEnabled,clientName,clientDescription,protocolVersion) ( (This)->lpVtbl -> GetNapClientInfo(This,isNapEnabled,clientName,clientDescription,protocolVersion) )
#define INapClientManagement2_GetSystemIsolationInfo(This,isolationInfo,unknownConnections) ( (This)->lpVtbl -> GetSystemIsolationInfo(This,isolationInfo,unknownConnections) )
#define INapClientManagement2_RegisterSystemHealthAgent(This,agent) ( (This)->lpVtbl -> RegisterSystemHealthAgent(This,agent) )
#define INapClientManagement2_UnregisterSystemHealthAgent(This,id) ( (This)->lpVtbl -> UnregisterSystemHealthAgent(This,id) )
#define INapClientManagement2_RegisterEnforcementClient(This,enforcer) ( (This)->lpVtbl -> RegisterEnforcementClient(This,enforcer) )
#define INapClientManagement2_UnregisterEnforcementClient(This,id) ( (This)->lpVtbl -> UnregisterEnforcementClient(This,id) )
#define INapClientManagement2_GetRegisteredSystemHealthAgents(This,count,agents) ( (This)->lpVtbl -> GetRegisteredSystemHealthAgents(This,count,agents) )
#define INapClientManagement2_GetRegisteredEnforcementClients(This,count,enforcers) ( (This)->lpVtbl -> GetRegisteredEnforcementClients(This,count,enforcers) )
#define INapClientManagement2_GetSystemIsolationInfoEx(This,isolationInfo,unknownConnections) ( (This)->lpVtbl -> GetSystemIsolationInfoEx(This,isolationInfo,unknownConnections) )
#endif
#endif
extern const CLSID CLSID_NapClientManagement;
extern RPC_IF_HANDLE __MIDL_itf_napmanagement_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_napmanagement_0000_0002_v0_0_s_ifspec;
#endif
