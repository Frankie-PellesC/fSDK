/*+@@file@@----------------------------------------------------------------*//*!
 \file		napenforcementclient.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:12:52 2016
 \date		Modified on Sun Sep 11 22:12:52 2016
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
#ifndef __napenforcementclient_h__
#define __napenforcementclient_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __INapEnforcementClientBinding_FWD_DEFINED__
#define __INapEnforcementClientBinding_FWD_DEFINED__
typedef interface INapEnforcementClientBinding INapEnforcementClientBinding;
#endif
#ifndef __INapEnforcementClientCallback_FWD_DEFINED__
#define __INapEnforcementClientCallback_FWD_DEFINED__
typedef interface INapEnforcementClientCallback INapEnforcementClientCallback;
#endif
#ifndef __INapEnforcementClientConnection_FWD_DEFINED__
#define __INapEnforcementClientConnection_FWD_DEFINED__
typedef interface INapEnforcementClientConnection INapEnforcementClientConnection;
#endif
#ifndef __INapEnforcementClientConnection2_FWD_DEFINED__
#define __INapEnforcementClientConnection2_FWD_DEFINED__
typedef interface INapEnforcementClientConnection2 INapEnforcementClientConnection2;
#endif
#include "NapTypes.h"
extern RPC_IF_HANDLE __MIDL_itf_napenforcementclient_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_napenforcementclient_0000_0000_v0_0_s_ifspec;
#ifndef __INapEnforcementClientBinding_INTERFACE_DEFINED__
#define __INapEnforcementClientBinding_INTERFACE_DEFINED__
extern const IID IID_INapEnforcementClientBinding;
typedef struct INapEnforcementClientBindingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapEnforcementClientBinding * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapEnforcementClientBinding * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapEnforcementClientBinding * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (INapEnforcementClientBinding * This, EnforcementEntityId id, INapEnforcementClientCallback * callback);
	HRESULT(STDMETHODCALLTYPE * Uninitialize) (INapEnforcementClientBinding * This);
	HRESULT(STDMETHODCALLTYPE * CreateConnection) (INapEnforcementClientBinding * This, INapEnforcementClientConnection ** connection);
	HRESULT(STDMETHODCALLTYPE * GetSoHRequest) (INapEnforcementClientBinding * This, INapEnforcementClientConnection * connection, BOOL * retriggerHint);
	HRESULT(STDMETHODCALLTYPE * ProcessSoHResponse) (INapEnforcementClientBinding * This, INapEnforcementClientConnection * connection);
	HRESULT(STDMETHODCALLTYPE * NotifyConnectionStateDown) (INapEnforcementClientBinding * This, INapEnforcementClientConnection * downCxn);
	HRESULT(STDMETHODCALLTYPE * NotifySoHChangeFailure) (INapEnforcementClientBinding * This);
	END_INTERFACE
}  INapEnforcementClientBindingVtbl;
interface INapEnforcementClientBinding
{
	CONST_VTBL struct INapEnforcementClientBindingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapEnforcementClientBinding_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapEnforcementClientBinding_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapEnforcementClientBinding_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapEnforcementClientBinding_Initialize(This,id,callback) ( (This)->lpVtbl -> Initialize(This,id,callback) )
#define INapEnforcementClientBinding_Uninitialize(This) ( (This)->lpVtbl -> Uninitialize(This) )
#define INapEnforcementClientBinding_CreateConnection(This,connection) ( (This)->lpVtbl -> CreateConnection(This,connection) )
#define INapEnforcementClientBinding_GetSoHRequest(This,connection,retriggerHint) ( (This)->lpVtbl -> GetSoHRequest(This,connection,retriggerHint) )
#define INapEnforcementClientBinding_ProcessSoHResponse(This,connection) ( (This)->lpVtbl -> ProcessSoHResponse(This,connection) )
#define INapEnforcementClientBinding_NotifyConnectionStateDown(This,downCxn) ( (This)->lpVtbl -> NotifyConnectionStateDown(This,downCxn) )
#define INapEnforcementClientBinding_NotifySoHChangeFailure(This) ( (This)->lpVtbl -> NotifySoHChangeFailure(This) )
#endif
#endif
#ifndef __INapEnforcementClientCallback_INTERFACE_DEFINED__
#define __INapEnforcementClientCallback_INTERFACE_DEFINED__
typedef struct tagConnections
{
	UINT16 count;
	INapEnforcementClientConnection **connections;
} Connections;
extern const IID IID_INapEnforcementClientCallback;
typedef struct INapEnforcementClientCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapEnforcementClientCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapEnforcementClientCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapEnforcementClientCallback * This);
	HRESULT(STDMETHODCALLTYPE * NotifySoHChange) (INapEnforcementClientCallback * This);
	HRESULT(STDMETHODCALLTYPE * GetConnections) (INapEnforcementClientCallback * This, Connections ** connections);
	END_INTERFACE
}  INapEnforcementClientCallbackVtbl;
interface INapEnforcementClientCallback
{
	CONST_VTBL struct INapEnforcementClientCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapEnforcementClientCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapEnforcementClientCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapEnforcementClientCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapEnforcementClientCallback_NotifySoHChange(This) ( (This)->lpVtbl -> NotifySoHChange(This) )
#define INapEnforcementClientCallback_GetConnections(This,connections) ( (This)->lpVtbl -> GetConnections(This,connections) )
#endif
#endif
#ifndef __INapEnforcementClientConnection_INTERFACE_DEFINED__
#define __INapEnforcementClientConnection_INTERFACE_DEFINED__
#define	defaultProtocolMaxSize	( 4000 )
#define	minProtocolMaxSize	( 300 )
#define	maxProtocolMaxSize	( 0xffff )
typedef UINT32 ProtocolMaxSize;
extern const IID IID_INapEnforcementClientConnection;
typedef struct INapEnforcementClientConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapEnforcementClientConnection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapEnforcementClientConnection * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapEnforcementClientConnection * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (INapEnforcementClientConnection * This, EnforcementEntityId id);
	HRESULT(STDMETHODCALLTYPE * SetMaxSize) (INapEnforcementClientConnection * This, ProtocolMaxSize maxSize);
	HRESULT(STDMETHODCALLTYPE * GetMaxSize) (INapEnforcementClientConnection * This, ProtocolMaxSize * maxSize);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (INapEnforcementClientConnection * This, UINT8 flags);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (INapEnforcementClientConnection * This, UINT8 * flags);
	HRESULT(STDMETHODCALLTYPE * SetConnectionId) (INapEnforcementClientConnection * This, const ConnectionId * connectionId);
	HRESULT(STDMETHODCALLTYPE * GetConnectionId) (INapEnforcementClientConnection * This, ConnectionId ** connectionId);
	HRESULT(STDMETHODCALLTYPE * GetCorrelationId) (INapEnforcementClientConnection * This, CorrelationId * correlationId);
	HRESULT(STDMETHODCALLTYPE * GetStringCorrelationId) (INapEnforcementClientConnection * This, StringCorrelationId ** correlationId);
	HRESULT(STDMETHODCALLTYPE * SetCorrelationId) (INapEnforcementClientConnection * This, CorrelationId correlationId);
	HRESULT(STDMETHODCALLTYPE * SetSoHRequest) (INapEnforcementClientConnection * This, const NetworkSoHRequest * sohRequest);
	HRESULT(STDMETHODCALLTYPE * GetSoHRequest) (INapEnforcementClientConnection * This, NetworkSoHRequest ** sohRequest);
	HRESULT(STDMETHODCALLTYPE * SetSoHResponse) (INapEnforcementClientConnection * This, const NetworkSoHResponse * sohResponse);
	HRESULT(STDMETHODCALLTYPE * GetSoHResponse) (INapEnforcementClientConnection * This, NetworkSoHResponse ** sohResponse);
	HRESULT(STDMETHODCALLTYPE * SetIsolationInfo) (INapEnforcementClientConnection * This, const IsolationInfo * isolationInfo);
	HRESULT(STDMETHODCALLTYPE * GetIsolationInfo) (INapEnforcementClientConnection * This, IsolationInfo ** isolationInfo);
	HRESULT(STDMETHODCALLTYPE * SetPrivateData) (INapEnforcementClientConnection * This, const PrivateData * privateData);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (INapEnforcementClientConnection * This, PrivateData ** privateData);
	HRESULT(STDMETHODCALLTYPE * SetEnforcerPrivateData) (INapEnforcementClientConnection * This, const PrivateData * privateData);
	HRESULT(STDMETHODCALLTYPE * GetEnforcerPrivateData) (INapEnforcementClientConnection * This, PrivateData ** privateData);
	END_INTERFACE
}  INapEnforcementClientConnectionVtbl;
interface INapEnforcementClientConnection
{
	CONST_VTBL struct INapEnforcementClientConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapEnforcementClientConnection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapEnforcementClientConnection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapEnforcementClientConnection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapEnforcementClientConnection_Initialize(This,id) ( (This)->lpVtbl -> Initialize(This,id) )
#define INapEnforcementClientConnection_SetMaxSize(This,maxSize) ( (This)->lpVtbl -> SetMaxSize(This,maxSize) )
#define INapEnforcementClientConnection_GetMaxSize(This,maxSize) ( (This)->lpVtbl -> GetMaxSize(This,maxSize) )
#define INapEnforcementClientConnection_SetFlags(This,flags) ( (This)->lpVtbl -> SetFlags(This,flags) )
#define INapEnforcementClientConnection_GetFlags(This,flags) ( (This)->lpVtbl -> GetFlags(This,flags) )
#define INapEnforcementClientConnection_SetConnectionId(This,connectionId) ( (This)->lpVtbl -> SetConnectionId(This,connectionId) )
#define INapEnforcementClientConnection_GetConnectionId(This,connectionId) ( (This)->lpVtbl -> GetConnectionId(This,connectionId) )
#define INapEnforcementClientConnection_GetCorrelationId(This,correlationId) ( (This)->lpVtbl -> GetCorrelationId(This,correlationId) )
#define INapEnforcementClientConnection_GetStringCorrelationId(This,correlationId) ( (This)->lpVtbl -> GetStringCorrelationId(This,correlationId) )
#define INapEnforcementClientConnection_SetCorrelationId(This,correlationId) ( (This)->lpVtbl -> SetCorrelationId(This,correlationId) )
#define INapEnforcementClientConnection_SetSoHRequest(This,sohRequest) ( (This)->lpVtbl -> SetSoHRequest(This,sohRequest) )
#define INapEnforcementClientConnection_GetSoHRequest(This,sohRequest) ( (This)->lpVtbl -> GetSoHRequest(This,sohRequest) )
#define INapEnforcementClientConnection_SetSoHResponse(This,sohResponse) ( (This)->lpVtbl -> SetSoHResponse(This,sohResponse) )
#define INapEnforcementClientConnection_GetSoHResponse(This,sohResponse) ( (This)->lpVtbl -> GetSoHResponse(This,sohResponse) )
#define INapEnforcementClientConnection_SetIsolationInfo(This,isolationInfo) ( (This)->lpVtbl -> SetIsolationInfo(This,isolationInfo) )
#define INapEnforcementClientConnection_GetIsolationInfo(This,isolationInfo) ( (This)->lpVtbl -> GetIsolationInfo(This,isolationInfo) )
#define INapEnforcementClientConnection_SetPrivateData(This,privateData) ( (This)->lpVtbl -> SetPrivateData(This,privateData) )
#define INapEnforcementClientConnection_GetPrivateData(This,privateData) ( (This)->lpVtbl -> GetPrivateData(This,privateData) )
#define INapEnforcementClientConnection_SetEnforcerPrivateData(This,privateData) ( (This)->lpVtbl -> SetEnforcerPrivateData(This,privateData) )
#define INapEnforcementClientConnection_GetEnforcerPrivateData(This,privateData) ( (This)->lpVtbl -> GetEnforcerPrivateData(This,privateData) )
#endif
#endif
#ifndef __INapEnforcementClientConnection2_INTERFACE_DEFINED__
#define __INapEnforcementClientConnection2_INTERFACE_DEFINED__
extern const IID IID_INapEnforcementClientConnection2;
typedef struct INapEnforcementClientConnection2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapEnforcementClientConnection2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapEnforcementClientConnection2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapEnforcementClientConnection2 * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (INapEnforcementClientConnection2 * This, EnforcementEntityId id);
	HRESULT(STDMETHODCALLTYPE * SetMaxSize) (INapEnforcementClientConnection2 * This, ProtocolMaxSize maxSize);
	HRESULT(STDMETHODCALLTYPE * GetMaxSize) (INapEnforcementClientConnection2 * This, ProtocolMaxSize * maxSize);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (INapEnforcementClientConnection2 * This, UINT8 flags);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (INapEnforcementClientConnection2 * This, UINT8 * flags);
	HRESULT(STDMETHODCALLTYPE * SetConnectionId) (INapEnforcementClientConnection2 * This, const ConnectionId * connectionId);
	HRESULT(STDMETHODCALLTYPE * GetConnectionId) (INapEnforcementClientConnection2 * This, ConnectionId ** connectionId);
	HRESULT(STDMETHODCALLTYPE * GetCorrelationId) (INapEnforcementClientConnection2 * This, CorrelationId * correlationId);
	HRESULT(STDMETHODCALLTYPE * GetStringCorrelationId) (INapEnforcementClientConnection2 * This, StringCorrelationId ** correlationId);
	HRESULT(STDMETHODCALLTYPE * SetCorrelationId) (INapEnforcementClientConnection2 * This, CorrelationId correlationId);
	HRESULT(STDMETHODCALLTYPE * SetSoHRequest) (INapEnforcementClientConnection2 * This, const NetworkSoHRequest * sohRequest);
	HRESULT(STDMETHODCALLTYPE * GetSoHRequest) (INapEnforcementClientConnection2 * This, NetworkSoHRequest ** sohRequest);
	HRESULT(STDMETHODCALLTYPE * SetSoHResponse) (INapEnforcementClientConnection2 * This, const NetworkSoHResponse * sohResponse);
	HRESULT(STDMETHODCALLTYPE * GetSoHResponse) (INapEnforcementClientConnection2 * This, NetworkSoHResponse ** sohResponse);
	HRESULT(STDMETHODCALLTYPE * SetIsolationInfo) (INapEnforcementClientConnection2 * This, const IsolationInfo * isolationInfo);
	HRESULT(STDMETHODCALLTYPE * GetIsolationInfo) (INapEnforcementClientConnection2 * This, IsolationInfo ** isolationInfo);
	HRESULT(STDMETHODCALLTYPE * SetPrivateData) (INapEnforcementClientConnection2 * This, const PrivateData * privateData);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (INapEnforcementClientConnection2 * This, PrivateData ** privateData);
	HRESULT(STDMETHODCALLTYPE * SetEnforcerPrivateData) (INapEnforcementClientConnection2 * This, const PrivateData * privateData);
	HRESULT(STDMETHODCALLTYPE * GetEnforcerPrivateData) (INapEnforcementClientConnection2 * This, PrivateData ** privateData);
	HRESULT(STDMETHODCALLTYPE * SetIsolationInfoEx) (INapEnforcementClientConnection2 * This, const IsolationInfoEx * isolationInfo);
	HRESULT(STDMETHODCALLTYPE * GetIsolationInfoEx) (INapEnforcementClientConnection2 * This, IsolationInfoEx ** isolationInfo);
	HRESULT(STDMETHODCALLTYPE * GetInstalledShvs) (INapEnforcementClientConnection2 * This, SystemHealthEntityCount * count, SystemHealthEntityId ** ids);
	HRESULT(STDMETHODCALLTYPE * SetInstalledShvs) (INapEnforcementClientConnection2 * This, SystemHealthEntityCount count, SystemHealthEntityId * ids);
	END_INTERFACE
}  INapEnforcementClientConnection2Vtbl;
interface INapEnforcementClientConnection2
{
	CONST_VTBL struct INapEnforcementClientConnection2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapEnforcementClientConnection2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapEnforcementClientConnection2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapEnforcementClientConnection2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapEnforcementClientConnection2_Initialize(This,id) ( (This)->lpVtbl -> Initialize(This,id) )
#define INapEnforcementClientConnection2_SetMaxSize(This,maxSize) ( (This)->lpVtbl -> SetMaxSize(This,maxSize) )
#define INapEnforcementClientConnection2_GetMaxSize(This,maxSize) ( (This)->lpVtbl -> GetMaxSize(This,maxSize) )
#define INapEnforcementClientConnection2_SetFlags(This,flags) ( (This)->lpVtbl -> SetFlags(This,flags) )
#define INapEnforcementClientConnection2_GetFlags(This,flags) ( (This)->lpVtbl -> GetFlags(This,flags) )
#define INapEnforcementClientConnection2_SetConnectionId(This,connectionId) ( (This)->lpVtbl -> SetConnectionId(This,connectionId) )
#define INapEnforcementClientConnection2_GetConnectionId(This,connectionId) ( (This)->lpVtbl -> GetConnectionId(This,connectionId) )
#define INapEnforcementClientConnection2_GetCorrelationId(This,correlationId) ( (This)->lpVtbl -> GetCorrelationId(This,correlationId) )
#define INapEnforcementClientConnection2_GetStringCorrelationId(This,correlationId) ( (This)->lpVtbl -> GetStringCorrelationId(This,correlationId) )
#define INapEnforcementClientConnection2_SetCorrelationId(This,correlationId) ( (This)->lpVtbl -> SetCorrelationId(This,correlationId) )
#define INapEnforcementClientConnection2_SetSoHRequest(This,sohRequest) ( (This)->lpVtbl -> SetSoHRequest(This,sohRequest) )
#define INapEnforcementClientConnection2_GetSoHRequest(This,sohRequest) ( (This)->lpVtbl -> GetSoHRequest(This,sohRequest) )
#define INapEnforcementClientConnection2_SetSoHResponse(This,sohResponse) ( (This)->lpVtbl -> SetSoHResponse(This,sohResponse) )
#define INapEnforcementClientConnection2_GetSoHResponse(This,sohResponse) ( (This)->lpVtbl -> GetSoHResponse(This,sohResponse) )
#define INapEnforcementClientConnection2_SetIsolationInfo(This,isolationInfo) ( (This)->lpVtbl -> SetIsolationInfo(This,isolationInfo) )
#define INapEnforcementClientConnection2_GetIsolationInfo(This,isolationInfo) ( (This)->lpVtbl -> GetIsolationInfo(This,isolationInfo) )
#define INapEnforcementClientConnection2_SetPrivateData(This,privateData) ( (This)->lpVtbl -> SetPrivateData(This,privateData) )
#define INapEnforcementClientConnection2_GetPrivateData(This,privateData) ( (This)->lpVtbl -> GetPrivateData(This,privateData) )
#define INapEnforcementClientConnection2_SetEnforcerPrivateData(This,privateData) ( (This)->lpVtbl -> SetEnforcerPrivateData(This,privateData) )
#define INapEnforcementClientConnection2_GetEnforcerPrivateData(This,privateData) ( (This)->lpVtbl -> GetEnforcerPrivateData(This,privateData) )
#define INapEnforcementClientConnection2_SetIsolationInfoEx(This,isolationInfo) ( (This)->lpVtbl -> SetIsolationInfoEx(This,isolationInfo) )
#define INapEnforcementClientConnection2_GetIsolationInfoEx(This,isolationInfo) ( (This)->lpVtbl -> GetIsolationInfoEx(This,isolationInfo) )
#define INapEnforcementClientConnection2_GetInstalledShvs(This,count,ids) ( (This)->lpVtbl -> GetInstalledShvs(This,count,ids) )
#define INapEnforcementClientConnection2_SetInstalledShvs(This,count,ids) ( (This)->lpVtbl -> SetInstalledShvs(This,count,ids) )
#endif
#endif
extern const CLSID CLSID_NapEnforcementClientBinding;
extern RPC_IF_HANDLE __MIDL_itf_napenforcementclient_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_napenforcementclient_0000_0004_v0_0_s_ifspec;
#endif
