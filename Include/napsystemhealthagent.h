/*+@@file@@----------------------------------------------------------------*//*!
 \file		napsystemhealthagent.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:28:56 2016
 \date		Modified on Sun Sep 11 22:28:56 2016
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
#ifndef __napsystemhealthagent_h__
#define __napsystemhealthagent_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __INapSystemHealthAgentBinding_FWD_DEFINED__
#define __INapSystemHealthAgentBinding_FWD_DEFINED__
typedef interface INapSystemHealthAgentBinding INapSystemHealthAgentBinding;
#endif
#ifndef __INapSystemHealthAgentBinding2_FWD_DEFINED__
#define __INapSystemHealthAgentBinding2_FWD_DEFINED__
typedef interface INapSystemHealthAgentBinding2 INapSystemHealthAgentBinding2;
#endif
#ifndef __INapSystemHealthAgentCallback_FWD_DEFINED__
#define __INapSystemHealthAgentCallback_FWD_DEFINED__
typedef interface INapSystemHealthAgentCallback INapSystemHealthAgentCallback;
#endif
#ifndef __AsyncINapSystemHealthAgentCallback_FWD_DEFINED__
#define __AsyncINapSystemHealthAgentCallback_FWD_DEFINED__
typedef interface AsyncINapSystemHealthAgentCallback AsyncINapSystemHealthAgentCallback;
#endif
#ifndef __INapSystemHealthAgentRequest_FWD_DEFINED__
#define __INapSystemHealthAgentRequest_FWD_DEFINED__
typedef interface INapSystemHealthAgentRequest INapSystemHealthAgentRequest;
#endif
#include "NapTypes.h"
extern RPC_IF_HANDLE __MIDL_itf_napsystemhealthagent_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_napsystemhealthagent_0000_0000_v0_0_s_ifspec;
#ifndef __INapSystemHealthAgentBinding_INTERFACE_DEFINED__
#define __INapSystemHealthAgentBinding_INTERFACE_DEFINED__
extern const IID IID_INapSystemHealthAgentBinding;
typedef struct INapSystemHealthAgentBindingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapSystemHealthAgentBinding * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapSystemHealthAgentBinding * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapSystemHealthAgentBinding * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (INapSystemHealthAgentBinding * This, SystemHealthEntityId id, INapSystemHealthAgentCallback * callback);
	HRESULT(STDMETHODCALLTYPE * Uninitialize) (INapSystemHealthAgentBinding * This);
	HRESULT(STDMETHODCALLTYPE * NotifySoHChange) (INapSystemHealthAgentBinding * This);
	HRESULT(STDMETHODCALLTYPE * GetSystemIsolationInfo) (INapSystemHealthAgentBinding * This, IsolationInfo ** isolationInfo, BOOL * unknownConnections);
	HRESULT(STDMETHODCALLTYPE * FlushCache) (INapSystemHealthAgentBinding * This);
	END_INTERFACE
}  INapSystemHealthAgentBindingVtbl;
interface INapSystemHealthAgentBinding
{
	CONST_VTBL struct INapSystemHealthAgentBindingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapSystemHealthAgentBinding_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapSystemHealthAgentBinding_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapSystemHealthAgentBinding_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapSystemHealthAgentBinding_Initialize(This,id,callback) ( (This)->lpVtbl -> Initialize(This,id,callback) )
#define INapSystemHealthAgentBinding_Uninitialize(This) ( (This)->lpVtbl -> Uninitialize(This) )
#define INapSystemHealthAgentBinding_NotifySoHChange(This) ( (This)->lpVtbl -> NotifySoHChange(This) )
#define INapSystemHealthAgentBinding_GetSystemIsolationInfo(This,isolationInfo,unknownConnections) ( (This)->lpVtbl -> GetSystemIsolationInfo(This,isolationInfo,unknownConnections) )
#define INapSystemHealthAgentBinding_FlushCache(This) ( (This)->lpVtbl -> FlushCache(This) )
#endif
#endif
#ifndef __INapSystemHealthAgentBinding2_INTERFACE_DEFINED__
#define __INapSystemHealthAgentBinding2_INTERFACE_DEFINED__
extern const IID IID_INapSystemHealthAgentBinding2;
typedef struct INapSystemHealthAgentBinding2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapSystemHealthAgentBinding2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapSystemHealthAgentBinding2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapSystemHealthAgentBinding2 * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (INapSystemHealthAgentBinding2 * This, SystemHealthEntityId id, INapSystemHealthAgentCallback * callback);
	HRESULT(STDMETHODCALLTYPE * Uninitialize) (INapSystemHealthAgentBinding2 * This);
	HRESULT(STDMETHODCALLTYPE * NotifySoHChange) (INapSystemHealthAgentBinding2 * This);
	HRESULT(STDMETHODCALLTYPE * GetSystemIsolationInfo) (INapSystemHealthAgentBinding2 * This, IsolationInfo ** isolationInfo, BOOL * unknownConnections);
	HRESULT(STDMETHODCALLTYPE * FlushCache) (INapSystemHealthAgentBinding2 * This);
	HRESULT(STDMETHODCALLTYPE * GetSystemIsolationInfoEx) (INapSystemHealthAgentBinding2 * This, IsolationInfoEx ** isolationInfo, BOOL * unknownConnections);
	END_INTERFACE
}  INapSystemHealthAgentBinding2Vtbl;
interface INapSystemHealthAgentBinding2
{
	CONST_VTBL struct INapSystemHealthAgentBinding2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapSystemHealthAgentBinding2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapSystemHealthAgentBinding2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapSystemHealthAgentBinding2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapSystemHealthAgentBinding2_Initialize(This,id,callback) ( (This)->lpVtbl -> Initialize(This,id,callback) )
#define INapSystemHealthAgentBinding2_Uninitialize(This) ( (This)->lpVtbl -> Uninitialize(This) )
#define INapSystemHealthAgentBinding2_NotifySoHChange(This) ( (This)->lpVtbl -> NotifySoHChange(This) )
#define INapSystemHealthAgentBinding2_GetSystemIsolationInfo(This,isolationInfo,unknownConnections) ( (This)->lpVtbl -> GetSystemIsolationInfo(This,isolationInfo,unknownConnections) )
#define INapSystemHealthAgentBinding2_FlushCache(This) ( (This)->lpVtbl -> FlushCache(This) )
#define INapSystemHealthAgentBinding2_GetSystemIsolationInfoEx(This,isolationInfo,unknownConnections) ( (This)->lpVtbl -> GetSystemIsolationInfoEx(This,isolationInfo,unknownConnections) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_napsystemhealthagent_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_napsystemhealthagent_0000_0002_v0_0_s_ifspec;
#ifndef __INapSystemHealthAgentCallback_INTERFACE_DEFINED__
#define __INapSystemHealthAgentCallback_INTERFACE_DEFINED__
extern const IID IID_INapSystemHealthAgentCallback;
typedef struct INapSystemHealthAgentCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapSystemHealthAgentCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapSystemHealthAgentCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapSystemHealthAgentCallback * This);
	HRESULT(STDMETHODCALLTYPE * GetSoHRequest) (INapSystemHealthAgentCallback * This, INapSystemHealthAgentRequest * request);
	HRESULT(STDMETHODCALLTYPE * ProcessSoHResponse) (INapSystemHealthAgentCallback * This, INapSystemHealthAgentRequest * request);
	HRESULT(STDMETHODCALLTYPE * NotifySystemIsolationStateChange) (INapSystemHealthAgentCallback * This);
	HRESULT(STDMETHODCALLTYPE * GetFixupInfo) (INapSystemHealthAgentCallback * This, FixupInfo ** info);
	HRESULT(STDMETHODCALLTYPE * CompareSoHRequests) (INapSystemHealthAgentCallback * This, const SoHRequest * lhs, const SoHRequest * rhs, BOOL * isEqual);
	HRESULT(STDMETHODCALLTYPE * NotifyOrphanedSoHRequest) (INapSystemHealthAgentCallback * This, const CorrelationId * correlationId);
	END_INTERFACE
}  INapSystemHealthAgentCallbackVtbl;
interface INapSystemHealthAgentCallback
{
	CONST_VTBL struct INapSystemHealthAgentCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapSystemHealthAgentCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapSystemHealthAgentCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapSystemHealthAgentCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapSystemHealthAgentCallback_GetSoHRequest(This,request) ( (This)->lpVtbl -> GetSoHRequest(This,request) )
#define INapSystemHealthAgentCallback_ProcessSoHResponse(This,request) ( (This)->lpVtbl -> ProcessSoHResponse(This,request) )
#define INapSystemHealthAgentCallback_NotifySystemIsolationStateChange(This) ( (This)->lpVtbl -> NotifySystemIsolationStateChange(This) )
#define INapSystemHealthAgentCallback_GetFixupInfo(This,info) ( (This)->lpVtbl -> GetFixupInfo(This,info) )
#define INapSystemHealthAgentCallback_CompareSoHRequests(This,lhs,rhs,isEqual) ( (This)->lpVtbl -> CompareSoHRequests(This,lhs,rhs,isEqual) )
#define INapSystemHealthAgentCallback_NotifyOrphanedSoHRequest(This,correlationId) ( (This)->lpVtbl -> NotifyOrphanedSoHRequest(This,correlationId) )
#endif
#endif
#ifndef __AsyncINapSystemHealthAgentCallback_INTERFACE_DEFINED__
#define __AsyncINapSystemHealthAgentCallback_INTERFACE_DEFINED__
extern const IID IID_AsyncINapSystemHealthAgentCallback;
typedef struct AsyncINapSystemHealthAgentCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (AsyncINapSystemHealthAgentCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (AsyncINapSystemHealthAgentCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (AsyncINapSystemHealthAgentCallback * This);
	HRESULT(STDMETHODCALLTYPE * Begin_GetSoHRequest) (AsyncINapSystemHealthAgentCallback * This, INapSystemHealthAgentRequest * request);
	HRESULT(STDMETHODCALLTYPE * Finish_GetSoHRequest) (AsyncINapSystemHealthAgentCallback * This);
	HRESULT(STDMETHODCALLTYPE * Begin_ProcessSoHResponse) (AsyncINapSystemHealthAgentCallback * This, INapSystemHealthAgentRequest * request);
	HRESULT(STDMETHODCALLTYPE * Finish_ProcessSoHResponse) (AsyncINapSystemHealthAgentCallback * This);
	HRESULT(STDMETHODCALLTYPE * Begin_NotifySystemIsolationStateChange) (AsyncINapSystemHealthAgentCallback * This);
	HRESULT(STDMETHODCALLTYPE * Finish_NotifySystemIsolationStateChange) (AsyncINapSystemHealthAgentCallback * This);
	HRESULT(STDMETHODCALLTYPE * Begin_GetFixupInfo) (AsyncINapSystemHealthAgentCallback * This);
	HRESULT(STDMETHODCALLTYPE * Finish_GetFixupInfo) (AsyncINapSystemHealthAgentCallback * This, FixupInfo ** info);
	HRESULT(STDMETHODCALLTYPE * Begin_CompareSoHRequests) (AsyncINapSystemHealthAgentCallback * This, const SoHRequest * lhs, const SoHRequest * rhs);
	HRESULT(STDMETHODCALLTYPE * Finish_CompareSoHRequests) (AsyncINapSystemHealthAgentCallback * This, BOOL * isEqual);
	HRESULT(STDMETHODCALLTYPE * Begin_NotifyOrphanedSoHRequest) (AsyncINapSystemHealthAgentCallback * This, const CorrelationId * correlationId);
	HRESULT(STDMETHODCALLTYPE * Finish_NotifyOrphanedSoHRequest) (AsyncINapSystemHealthAgentCallback * This);
	END_INTERFACE
}  AsyncINapSystemHealthAgentCallbackVtbl;
interface AsyncINapSystemHealthAgentCallback
{
	CONST_VTBL struct AsyncINapSystemHealthAgentCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncINapSystemHealthAgentCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncINapSystemHealthAgentCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define AsyncINapSystemHealthAgentCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define AsyncINapSystemHealthAgentCallback_Begin_GetSoHRequest(This,request) ( (This)->lpVtbl -> Begin_GetSoHRequest(This,request) )
#define AsyncINapSystemHealthAgentCallback_Finish_GetSoHRequest(This) ( (This)->lpVtbl -> Finish_GetSoHRequest(This) )
#define AsyncINapSystemHealthAgentCallback_Begin_ProcessSoHResponse(This,request) ( (This)->lpVtbl -> Begin_ProcessSoHResponse(This,request) )
#define AsyncINapSystemHealthAgentCallback_Finish_ProcessSoHResponse(This) ( (This)->lpVtbl -> Finish_ProcessSoHResponse(This) )
#define AsyncINapSystemHealthAgentCallback_Begin_NotifySystemIsolationStateChange(This) ( (This)->lpVtbl -> Begin_NotifySystemIsolationStateChange(This) )
#define AsyncINapSystemHealthAgentCallback_Finish_NotifySystemIsolationStateChange(This) ( (This)->lpVtbl -> Finish_NotifySystemIsolationStateChange(This) )
#define AsyncINapSystemHealthAgentCallback_Begin_GetFixupInfo(This) ( (This)->lpVtbl -> Begin_GetFixupInfo(This) )
#define AsyncINapSystemHealthAgentCallback_Finish_GetFixupInfo(This,info) ( (This)->lpVtbl -> Finish_GetFixupInfo(This,info) )
#define AsyncINapSystemHealthAgentCallback_Begin_CompareSoHRequests(This,lhs,rhs) ( (This)->lpVtbl -> Begin_CompareSoHRequests(This,lhs,rhs) )
#define AsyncINapSystemHealthAgentCallback_Finish_CompareSoHRequests(This,isEqual) ( (This)->lpVtbl -> Finish_CompareSoHRequests(This,isEqual) )
#define AsyncINapSystemHealthAgentCallback_Begin_NotifyOrphanedSoHRequest(This,correlationId) ( (This)->lpVtbl -> Begin_NotifyOrphanedSoHRequest(This,correlationId) )
#define AsyncINapSystemHealthAgentCallback_Finish_NotifyOrphanedSoHRequest(This) ( (This)->lpVtbl -> Finish_NotifyOrphanedSoHRequest(This) )
#endif
#endif
#ifndef __INapSystemHealthAgentRequest_INTERFACE_DEFINED__
#define __INapSystemHealthAgentRequest_INTERFACE_DEFINED__
extern const IID IID_INapSystemHealthAgentRequest;
typedef struct INapSystemHealthAgentRequestVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapSystemHealthAgentRequest * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapSystemHealthAgentRequest * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapSystemHealthAgentRequest * This);
	HRESULT(STDMETHODCALLTYPE * GetCorrelationId) (INapSystemHealthAgentRequest * This, CorrelationId * correlationId);
	HRESULT(STDMETHODCALLTYPE * GetStringCorrelationId) (INapSystemHealthAgentRequest * This, StringCorrelationId ** correlationId);
	HRESULT(STDMETHODCALLTYPE * SetSoHRequest) (INapSystemHealthAgentRequest * This, const SoHRequest * sohRequest, BOOL cacheSohForLaterUse);
	HRESULT(STDMETHODCALLTYPE * GetSoHRequest) (INapSystemHealthAgentRequest * This, SoHRequest ** sohRequest);
	HRESULT(STDMETHODCALLTYPE * GetSoHResponse) (INapSystemHealthAgentRequest * This, SoHResponse ** sohResponse, UINT8 * flags);
	HRESULT(STDMETHODCALLTYPE * GetCacheSoHFlag) (INapSystemHealthAgentRequest * This, BOOL * cacheSohForLaterUse);
	END_INTERFACE
}  INapSystemHealthAgentRequestVtbl;
interface INapSystemHealthAgentRequest
{
	CONST_VTBL struct INapSystemHealthAgentRequestVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapSystemHealthAgentRequest_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapSystemHealthAgentRequest_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapSystemHealthAgentRequest_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapSystemHealthAgentRequest_GetCorrelationId(This,correlationId) ( (This)->lpVtbl -> GetCorrelationId(This,correlationId) )
#define INapSystemHealthAgentRequest_GetStringCorrelationId(This,correlationId) ( (This)->lpVtbl -> GetStringCorrelationId(This,correlationId) )
#define INapSystemHealthAgentRequest_SetSoHRequest(This,sohRequest,cacheSohForLaterUse) ( (This)->lpVtbl -> SetSoHRequest(This,sohRequest,cacheSohForLaterUse) )
#define INapSystemHealthAgentRequest_GetSoHRequest(This,sohRequest) ( (This)->lpVtbl -> GetSoHRequest(This,sohRequest) )
#define INapSystemHealthAgentRequest_GetSoHResponse(This,sohResponse,flags) ( (This)->lpVtbl -> GetSoHResponse(This,sohResponse,flags) )
#define INapSystemHealthAgentRequest_GetCacheSoHFlag(This,cacheSohForLaterUse) ( (This)->lpVtbl -> GetCacheSoHFlag(This,cacheSohForLaterUse) )
#endif
#endif
extern const CLSID CLSID_NapSystemHealthAgentBinding;
extern RPC_IF_HANDLE __MIDL_itf_napsystemhealthagent_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_napsystemhealthagent_0000_0004_v0_0_s_ifspec;
#endif
