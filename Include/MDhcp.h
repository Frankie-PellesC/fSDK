/*+@@file@@----------------------------------------------------------------*//*!
 \file		MDhcp.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 31 16:07:46 2016
 \date		Modified on Sun Jul 31 16:07:46 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __mdhcp_h__
#define __mdhcp_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IMcastScope_FWD_DEFINED__
#define __IMcastScope_FWD_DEFINED__
typedef interface IMcastScope IMcastScope;
#endif
#ifndef __IMcastLeaseInfo_FWD_DEFINED__
#define __IMcastLeaseInfo_FWD_DEFINED__
typedef interface IMcastLeaseInfo IMcastLeaseInfo;
#endif
#ifndef __IEnumMcastScope_FWD_DEFINED__
#define __IEnumMcastScope_FWD_DEFINED__
typedef interface IEnumMcastScope IEnumMcastScope;
#endif
#ifndef __IMcastAddressAllocation_FWD_DEFINED__
#define __IMcastAddressAllocation_FWD_DEFINED__
typedef interface IMcastAddressAllocation IMcastAddressAllocation;
#endif
#ifndef __IMcastScope_FWD_DEFINED__
#define __IMcastScope_FWD_DEFINED__
typedef interface IMcastScope IMcastScope;
#endif
#ifndef __IMcastLeaseInfo_FWD_DEFINED__
#define __IMcastLeaseInfo_FWD_DEFINED__
typedef interface IMcastLeaseInfo IMcastLeaseInfo;
#endif
#ifndef __IEnumMcastScope_FWD_DEFINED__
#define __IEnumMcastScope_FWD_DEFINED__
typedef interface IEnumMcastScope IEnumMcastScope;
#endif
#ifndef __IMcastAddressAllocation_FWD_DEFINED__
#define __IMcastAddressAllocation_FWD_DEFINED__
typedef interface IMcastAddressAllocation IMcastAddressAllocation;
#endif
#ifndef __McastAddressAllocation_FWD_DEFINED__
#define __McastAddressAllocation_FWD_DEFINED__
typedef struct McastAddressAllocation McastAddressAllocation;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "tapi3if.h"
extern RPC_IF_HANDLE __MIDL_itf_mdhcp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mdhcp_0000_0000_v0_0_s_ifspec;
#ifndef __IMcastScope_INTERFACE_DEFINED__
#define __IMcastScope_INTERFACE_DEFINED__
extern const IID IID_IMcastScope;
typedef struct IMcastScopeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMcastScope * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMcastScope * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMcastScope * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMcastScope * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMcastScope * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMcastScope * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMcastScope * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ScopeID) (IMcastScope * This, long *pID);
	HRESULT(STDMETHODCALLTYPE * get_ServerID) (IMcastScope * This, long *pID);
	HRESULT(STDMETHODCALLTYPE * get_InterfaceID) (IMcastScope * This, long *pID);
	HRESULT(STDMETHODCALLTYPE * get_ScopeDescription) (IMcastScope * This, BSTR * ppDescription);
	HRESULT(STDMETHODCALLTYPE * get_TTL) (IMcastScope * This, long *pTTL);
	END_INTERFACE
}  IMcastScopeVtbl;
interface IMcastScope
{
	CONST_VTBL struct IMcastScopeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMcastScope_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMcastScope_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMcastScope_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMcastScope_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMcastScope_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMcastScope_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMcastScope_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMcastScope_get_ScopeID(This,pID) ( (This)->lpVtbl -> get_ScopeID(This,pID) )
#define IMcastScope_get_ServerID(This,pID) ( (This)->lpVtbl -> get_ServerID(This,pID) )
#define IMcastScope_get_InterfaceID(This,pID) ( (This)->lpVtbl -> get_InterfaceID(This,pID) )
#define IMcastScope_get_ScopeDescription(This,ppDescription) ( (This)->lpVtbl -> get_ScopeDescription(This,ppDescription) )
#define IMcastScope_get_TTL(This,pTTL) ( (This)->lpVtbl -> get_TTL(This,pTTL) )
#endif
HRESULT STDMETHODCALLTYPE IMcastScope_get_ScopeID_Proxy(IMcastScope *This, long *pID);
void __RPC_STUB IMcastScope_get_ScopeID_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastScope_get_ServerID_Proxy(IMcastScope *This, long *pID);
void __RPC_STUB IMcastScope_get_ServerID_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastScope_get_InterfaceID_Proxy(IMcastScope *This, long *pID);
void __RPC_STUB IMcastScope_get_InterfaceID_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastScope_get_ScopeDescription_Proxy(IMcastScope *This, BSTR *ppDescription);
void __RPC_STUB IMcastScope_get_ScopeDescription_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastScope_get_TTL_Proxy(IMcastScope *This, long *pTTL);
void __RPC_STUB IMcastScope_get_TTL_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IMcastLeaseInfo_INTERFACE_DEFINED__
#define __IMcastLeaseInfo_INTERFACE_DEFINED__
extern const IID IID_IMcastLeaseInfo;
typedef struct IMcastLeaseInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMcastLeaseInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMcastLeaseInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMcastLeaseInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IMcastLeaseInfo *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IMcastLeaseInfo *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IMcastLeaseInfo *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IMcastLeaseInfo *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_RequestID) (IMcastLeaseInfo *This, BSTR *ppRequestID);
	HRESULT(STDMETHODCALLTYPE *get_LeaseStartTime) (IMcastLeaseInfo *This, DATE *pTime);
	HRESULT(STDMETHODCALLTYPE *put_LeaseStartTime) (IMcastLeaseInfo *This, DATE time);
	HRESULT(STDMETHODCALLTYPE *get_LeaseStopTime) (IMcastLeaseInfo *This, DATE *pTime);
	HRESULT(STDMETHODCALLTYPE *put_LeaseStopTime) (IMcastLeaseInfo *This, DATE time);
	HRESULT(STDMETHODCALLTYPE *get_AddressCount) (IMcastLeaseInfo *This, long *pCount);
	HRESULT(STDMETHODCALLTYPE *get_ServerAddress) (IMcastLeaseInfo *This, BSTR *ppAddress);
	HRESULT(STDMETHODCALLTYPE *get_TTL) (IMcastLeaseInfo *This, long *pTTL);
	HRESULT(STDMETHODCALLTYPE *get_Addresses) (IMcastLeaseInfo *This, VARIANT *pVariant);
	HRESULT(STDMETHODCALLTYPE *EnumerateAddresses) (IMcastLeaseInfo *This, IEnumBstr **ppEnumAddresses);
	END_INTERFACE
}  IMcastLeaseInfoVtbl;
interface IMcastLeaseInfo
{
	CONST_VTBL struct IMcastLeaseInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMcastLeaseInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMcastLeaseInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMcastLeaseInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMcastLeaseInfo_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMcastLeaseInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMcastLeaseInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMcastLeaseInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMcastLeaseInfo_get_RequestID(This,ppRequestID) ( (This)->lpVtbl -> get_RequestID(This,ppRequestID) )
#define IMcastLeaseInfo_get_LeaseStartTime(This,pTime) ( (This)->lpVtbl -> get_LeaseStartTime(This,pTime) )
#define IMcastLeaseInfo_put_LeaseStartTime(This,time) ( (This)->lpVtbl -> put_LeaseStartTime(This,time) )
#define IMcastLeaseInfo_get_LeaseStopTime(This,pTime) ( (This)->lpVtbl -> get_LeaseStopTime(This,pTime) )
#define IMcastLeaseInfo_put_LeaseStopTime(This,time) ( (This)->lpVtbl -> put_LeaseStopTime(This,time) )
#define IMcastLeaseInfo_get_AddressCount(This,pCount) ( (This)->lpVtbl -> get_AddressCount(This,pCount) )
#define IMcastLeaseInfo_get_ServerAddress(This,ppAddress) ( (This)->lpVtbl -> get_ServerAddress(This,ppAddress) )
#define IMcastLeaseInfo_get_TTL(This,pTTL) ( (This)->lpVtbl -> get_TTL(This,pTTL) )
#define IMcastLeaseInfo_get_Addresses(This,pVariant) ( (This)->lpVtbl -> get_Addresses(This,pVariant) )
#define IMcastLeaseInfo_EnumerateAddresses(This,ppEnumAddresses) ( (This)->lpVtbl -> EnumerateAddresses(This,ppEnumAddresses) )
#endif
HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_get_RequestID_Proxy(IMcastLeaseInfo *This, BSTR *ppRequestID);
void __RPC_STUB IMcastLeaseInfo_get_RequestID_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_get_LeaseStartTime_Proxy(IMcastLeaseInfo *This, DATE *pTime);
void __RPC_STUB IMcastLeaseInfo_get_LeaseStartTime_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_put_LeaseStartTime_Proxy(IMcastLeaseInfo *This, DATE time);
void __RPC_STUB IMcastLeaseInfo_put_LeaseStartTime_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_get_LeaseStopTime_Proxy(IMcastLeaseInfo *This, DATE *pTime);
void __RPC_STUB IMcastLeaseInfo_get_LeaseStopTime_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_put_LeaseStopTime_Proxy(IMcastLeaseInfo *This, DATE time);
void __RPC_STUB IMcastLeaseInfo_put_LeaseStopTime_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_get_AddressCount_Proxy(IMcastLeaseInfo *This, long *pCount);
void __RPC_STUB IMcastLeaseInfo_get_AddressCount_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_get_ServerAddress_Proxy(IMcastLeaseInfo *This, BSTR *ppAddress);
void __RPC_STUB IMcastLeaseInfo_get_ServerAddress_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_get_TTL_Proxy(IMcastLeaseInfo *This, long *pTTL);
void __RPC_STUB IMcastLeaseInfo_get_TTL_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_get_Addresses_Proxy(IMcastLeaseInfo *This, VARIANT *pVariant);
void __RPC_STUB IMcastLeaseInfo_get_Addresses_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_EnumerateAddresses_Proxy(IMcastLeaseInfo *This, IEnumBstr **ppEnumAddresses);
void __RPC_STUB IMcastLeaseInfo_EnumerateAddresses_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumMcastScope_INTERFACE_DEFINED__
#define __IEnumMcastScope_INTERFACE_DEFINED__
extern const IID IID_IEnumMcastScope;
typedef struct IEnumMcastScopeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumMcastScope *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumMcastScope *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumMcastScope *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumMcastScope *This, ULONG celt, IMcastScope **ppScopes, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumMcastScope *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumMcastScope *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumMcastScope *This, IEnumMcastScope **ppEnum);
	END_INTERFACE
}  IEnumMcastScopeVtbl;
interface IEnumMcastScope
{
	CONST_VTBL struct IEnumMcastScopeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumMcastScope_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumMcastScope_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumMcastScope_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumMcastScope_Next(This,celt,ppScopes,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppScopes,pceltFetched) )
#define IEnumMcastScope_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumMcastScope_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumMcastScope_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumMcastScope_Next_Proxy(IEnumMcastScope *This, ULONG celt, IMcastScope **ppScopes, ULONG *pceltFetched);
void __RPC_STUB IEnumMcastScope_Next_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMcastScope_Reset_Proxy(IEnumMcastScope *This);
void __RPC_STUB IEnumMcastScope_Reset_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMcastScope_Skip_Proxy(IEnumMcastScope *This, ULONG celt);
void __RPC_STUB IEnumMcastScope_Skip_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMcastScope_Clone_Proxy(IEnumMcastScope *This, IEnumMcastScope **ppEnum);
void __RPC_STUB IEnumMcastScope_Clone_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IMcastAddressAllocation_INTERFACE_DEFINED__
#define __IMcastAddressAllocation_INTERFACE_DEFINED__
extern const IID IID_IMcastAddressAllocation;
typedef struct IMcastAddressAllocationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMcastAddressAllocation *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMcastAddressAllocation *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMcastAddressAllocation *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IMcastAddressAllocation *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IMcastAddressAllocation *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IMcastAddressAllocation *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IMcastAddressAllocation *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Scopes) (IMcastAddressAllocation *This, VARIANT *pVariant);
	HRESULT(STDMETHODCALLTYPE *EnumerateScopes) (IMcastAddressAllocation *This, IEnumMcastScope **ppEnumMcastScope);
	HRESULT(STDMETHODCALLTYPE *RequestAddress) (IMcastAddressAllocation *This, IMcastScope *pScope, DATE LeaseStartTime, DATE LeaseStopTime, long NumAddresses, IMcastLeaseInfo **ppLeaseResponse);
	HRESULT(STDMETHODCALLTYPE *RenewAddress) (IMcastAddressAllocation *This, long lReserved, IMcastLeaseInfo *pRenewRequest, IMcastLeaseInfo **ppRenewResponse);
	HRESULT(STDMETHODCALLTYPE *ReleaseAddress) (IMcastAddressAllocation *This, IMcastLeaseInfo *pReleaseRequest);
	HRESULT(STDMETHODCALLTYPE *CreateLeaseInfo) (IMcastAddressAllocation *This, DATE LeaseStartTime, DATE LeaseStopTime, DWORD dwNumAddresses, LPWSTR *ppAddresses, LPWSTR pRequestID, LPWSTR pServerAddress, IMcastLeaseInfo **ppReleaseRequest);
	HRESULT(STDMETHODCALLTYPE *CreateLeaseInfoFromVariant) (IMcastAddressAllocation *This, DATE LeaseStartTime, DATE LeaseStopTime, VARIANT vAddresses, BSTR pRequestID, BSTR pServerAddress, IMcastLeaseInfo **ppReleaseRequest);
	END_INTERFACE
}  IMcastAddressAllocationVtbl;
interface IMcastAddressAllocation
{
	CONST_VTBL struct IMcastAddressAllocationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMcastAddressAllocation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMcastAddressAllocation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMcastAddressAllocation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMcastAddressAllocation_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMcastAddressAllocation_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMcastAddressAllocation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMcastAddressAllocation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMcastAddressAllocation_get_Scopes(This,pVariant) ( (This)->lpVtbl -> get_Scopes(This,pVariant) )
#define IMcastAddressAllocation_EnumerateScopes(This,ppEnumMcastScope) ( (This)->lpVtbl -> EnumerateScopes(This,ppEnumMcastScope) )
#define IMcastAddressAllocation_RequestAddress(This,pScope,LeaseStartTime,LeaseStopTime,NumAddresses,ppLeaseResponse) ( (This)->lpVtbl -> RequestAddress(This,pScope,LeaseStartTime,LeaseStopTime,NumAddresses,ppLeaseResponse) )
#define IMcastAddressAllocation_RenewAddress(This,lReserved,pRenewRequest,ppRenewResponse) ( (This)->lpVtbl -> RenewAddress(This,lReserved,pRenewRequest,ppRenewResponse) )
#define IMcastAddressAllocation_ReleaseAddress(This,pReleaseRequest) ( (This)->lpVtbl -> ReleaseAddress(This,pReleaseRequest) )
#define IMcastAddressAllocation_CreateLeaseInfo(This,LeaseStartTime,LeaseStopTime,dwNumAddresses,ppAddresses,pRequestID,pServerAddress,ppReleaseRequest) ( (This)->lpVtbl -> CreateLeaseInfo(This,LeaseStartTime,LeaseStopTime,dwNumAddresses,ppAddresses,pRequestID,pServerAddress,ppReleaseRequest) )
#define IMcastAddressAllocation_CreateLeaseInfoFromVariant(This,LeaseStartTime,LeaseStopTime,vAddresses,pRequestID,pServerAddress,ppReleaseRequest) ( (This)->lpVtbl -> CreateLeaseInfoFromVariant(This,LeaseStartTime,LeaseStopTime,vAddresses,pRequestID,pServerAddress,ppReleaseRequest) )
#endif
HRESULT STDMETHODCALLTYPE IMcastAddressAllocation_get_Scopes_Proxy(IMcastAddressAllocation *This, VARIANT *pVariant);
void __RPC_STUB IMcastAddressAllocation_get_Scopes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastAddressAllocation_EnumerateScopes_Proxy(IMcastAddressAllocation *This, IEnumMcastScope **ppEnumMcastScope);
void __RPC_STUB IMcastAddressAllocation_EnumerateScopes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastAddressAllocation_RequestAddress_Proxy(IMcastAddressAllocation *This, IMcastScope *pScope, DATE LeaseStartTime, DATE LeaseStopTime, long NumAddresses, IMcastLeaseInfo **ppLeaseResponse);
void __RPC_STUB IMcastAddressAllocation_RequestAddress_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastAddressAllocation_RenewAddress_Proxy(IMcastAddressAllocation *This, long lReserved, IMcastLeaseInfo *pRenewRequest, IMcastLeaseInfo **ppRenewResponse);
void __RPC_STUB IMcastAddressAllocation_RenewAddress_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastAddressAllocation_ReleaseAddress_Proxy(IMcastAddressAllocation *This, IMcastLeaseInfo *pReleaseRequest);
void __RPC_STUB IMcastAddressAllocation_ReleaseAddress_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastAddressAllocation_CreateLeaseInfo_Proxy(IMcastAddressAllocation *This, DATE LeaseStartTime, DATE LeaseStopTime, DWORD dwNumAddresses, LPWSTR *ppAddresses, LPWSTR pRequestID, LPWSTR pServerAddress, IMcastLeaseInfo **ppReleaseRequest);
void __RPC_STUB IMcastAddressAllocation_CreateLeaseInfo_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMcastAddressAllocation_CreateLeaseInfoFromVariant_Proxy(IMcastAddressAllocation *This, DATE LeaseStartTime, DATE LeaseStopTime, VARIANT vAddresses, BSTR pRequestID, BSTR pServerAddress, IMcastLeaseInfo **ppReleaseRequest);
void __RPC_STUB IMcastAddressAllocation_CreateLeaseInfoFromVariant_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __McastLib_LIBRARY_DEFINED__
#define __McastLib_LIBRARY_DEFINED__
extern const IID LIBID_McastLib;
extern const CLSID CLSID_McastAddressAllocation;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
#endif
