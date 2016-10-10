/*+@@file@@----------------------------------------------------------------*//*!
 \file		wsdclient.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 17:48:36 2016
 \date		Modified on Mon Sep 19 17:48:36 2016
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
#ifndef __wsdclient_h__
#define __wsdclient_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWSDEndpointProxy_FWD_DEFINED__
#define __IWSDEndpointProxy_FWD_DEFINED__
typedef interface IWSDEndpointProxy IWSDEndpointProxy;
#endif
#ifndef __IWSDMetadataExchange_FWD_DEFINED__
#define __IWSDMetadataExchange_FWD_DEFINED__
typedef interface IWSDMetadataExchange IWSDMetadataExchange;
#endif
#ifndef __IWSDServiceProxy_FWD_DEFINED__
#define __IWSDServiceProxy_FWD_DEFINED__
typedef interface IWSDServiceProxy IWSDServiceProxy;
#endif
#ifndef __IWSDServiceProxyEventing_FWD_DEFINED__
#define __IWSDServiceProxyEventing_FWD_DEFINED__
typedef interface IWSDServiceProxyEventing IWSDServiceProxyEventing;
#endif
#ifndef __IWSDDeviceProxy_FWD_DEFINED__
#define __IWSDDeviceProxy_FWD_DEFINED__
typedef interface IWSDDeviceProxy IWSDDeviceProxy;
#endif
#ifndef __IWSDAsyncResult_FWD_DEFINED__
#define __IWSDAsyncResult_FWD_DEFINED__
typedef interface IWSDAsyncResult IWSDAsyncResult;
#endif
#ifndef __IWSDAsyncCallback_FWD_DEFINED__
#define __IWSDAsyncCallback_FWD_DEFINED__
typedef interface IWSDAsyncCallback IWSDAsyncCallback;
#endif
#ifndef __IWSDEventingStatus_FWD_DEFINED__
#define __IWSDEventingStatus_FWD_DEFINED__
typedef interface IWSDEventingStatus IWSDEventingStatus;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "wsdxmldom.h"
#include "wsdtypes.h"
HRESULT WINAPI WSDCreateDeviceProxy(LPCWSTR pszDeviceId, LPCWSTR pszLocalId, IWSDXMLContext *pContext, IWSDDeviceProxy **ppDeviceProxy);
HRESULT WINAPI WSDCreateDeviceProxyAdvanced(LPCWSTR pszDeviceId, IWSDAddress *pDeviceAddress, LPCWSTR pszLocalId, IWSDXMLContext *pContext, IWSDDeviceProxy **ppDeviceProxy);
#if (WINVER >= _WIN32_WINNT_WIN7)
HRESULT WINAPI WSDCreateDeviceProxy2(LPCWSTR pszDeviceId, LPCWSTR pszLocalId, IWSDXMLContext *pContext, WSD_CONFIG_PARAM *pConfigParams, DWORD dwConfigParamCount, IWSDDeviceProxy **ppDeviceProxy);
#endif
extern RPC_IF_HANDLE __MIDL_itf_wsdclient_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdclient_0000_0000_v0_0_s_ifspec;
#ifndef __IWSDEndpointProxy_INTERFACE_DEFINED__
#define __IWSDEndpointProxy_INTERFACE_DEFINED__
extern const IID IID_IWSDEndpointProxy;
typedef struct IWSDEndpointProxyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDEndpointProxy * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDEndpointProxy * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDEndpointProxy * This);
	HRESULT(STDMETHODCALLTYPE * SendOneWayRequest) (IWSDEndpointProxy * This, const void *pBody, const WSD_OPERATION * pOperation);
	HRESULT(STDMETHODCALLTYPE * SendTwoWayRequest) (IWSDEndpointProxy * This, const void *pBody, const WSD_OPERATION * pOperation, const WSD_SYNCHRONOUS_RESPONSE_CONTEXT * pResponseContext);
	HRESULT(STDMETHODCALLTYPE * SendTwoWayRequestAsync) (IWSDEndpointProxy * This, const void *pBody, const WSD_OPERATION * pOperation, IUnknown * pAsyncState, IWSDAsyncCallback * pCallback, IWSDAsyncResult ** pResult);
	HRESULT(STDMETHODCALLTYPE * AbortAsyncOperation) (IWSDEndpointProxy * This, IWSDAsyncResult * pAsyncResult);
	HRESULT(STDMETHODCALLTYPE * ProcessFault) (IWSDEndpointProxy * This, const WSD_SOAP_FAULT * pFault);
	HRESULT(STDMETHODCALLTYPE * GetErrorInfo) (IWSDEndpointProxy * This, LPCWSTR * ppszErrorInfo);
	HRESULT(STDMETHODCALLTYPE * GetFaultInfo) (IWSDEndpointProxy * This, WSD_SOAP_FAULT ** ppFault);
	END_INTERFACE
}  IWSDEndpointProxyVtbl;
interface IWSDEndpointProxy
{
	CONST_VTBL struct IWSDEndpointProxyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDEndpointProxy_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDEndpointProxy_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDEndpointProxy_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDEndpointProxy_SendOneWayRequest(This,pBody,pOperation) ( (This)->lpVtbl -> SendOneWayRequest(This,pBody,pOperation) )
#define IWSDEndpointProxy_SendTwoWayRequest(This,pBody,pOperation,pResponseContext) ( (This)->lpVtbl -> SendTwoWayRequest(This,pBody,pOperation,pResponseContext) )
#define IWSDEndpointProxy_SendTwoWayRequestAsync(This,pBody,pOperation,pAsyncState,pCallback,pResult) ( (This)->lpVtbl -> SendTwoWayRequestAsync(This,pBody,pOperation,pAsyncState,pCallback,pResult) )
#define IWSDEndpointProxy_AbortAsyncOperation(This,pAsyncResult) ( (This)->lpVtbl -> AbortAsyncOperation(This,pAsyncResult) )
#define IWSDEndpointProxy_ProcessFault(This,pFault) ( (This)->lpVtbl -> ProcessFault(This,pFault) )
#define IWSDEndpointProxy_GetErrorInfo(This,ppszErrorInfo) ( (This)->lpVtbl -> GetErrorInfo(This,ppszErrorInfo) )
#define IWSDEndpointProxy_GetFaultInfo(This,ppFault) ( (This)->lpVtbl -> GetFaultInfo(This,ppFault) )
#endif
#endif
#ifndef __IWSDMetadataExchange_INTERFACE_DEFINED__
#define __IWSDMetadataExchange_INTERFACE_DEFINED__
extern const IID IID_IWSDMetadataExchange;
typedef struct IWSDMetadataExchangeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDMetadataExchange * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDMetadataExchange * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDMetadataExchange * This);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IWSDMetadataExchange * This, WSD_METADATA_SECTION_LIST ** MetadataOut);
	END_INTERFACE
}  IWSDMetadataExchangeVtbl;
interface IWSDMetadataExchange
{
	CONST_VTBL struct IWSDMetadataExchangeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDMetadataExchange_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDMetadataExchange_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDMetadataExchange_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDMetadataExchange_GetMetadata(This,MetadataOut) ( (This)->lpVtbl -> GetMetadata(This,MetadataOut) )
#endif
#endif
#ifndef __IWSDServiceProxy_INTERFACE_DEFINED__
#define __IWSDServiceProxy_INTERFACE_DEFINED__
extern const IID IID_IWSDServiceProxy;
typedef struct IWSDServiceProxyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDServiceProxy * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDServiceProxy * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDServiceProxy * This);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IWSDServiceProxy * This, WSD_METADATA_SECTION_LIST ** MetadataOut);
	HRESULT(STDMETHODCALLTYPE * BeginGetMetadata) (IWSDServiceProxy * This, IWSDAsyncResult ** ppResult);
	HRESULT(STDMETHODCALLTYPE * EndGetMetadata) (IWSDServiceProxy * This, IWSDAsyncResult * pResult, WSD_METADATA_SECTION_LIST ** ppMetadata);
	HRESULT(STDMETHODCALLTYPE * GetServiceMetadata) (IWSDServiceProxy * This, WSD_SERVICE_METADATA ** ppServiceMetadata);
	HRESULT(STDMETHODCALLTYPE * SubscribeToOperation) (IWSDServiceProxy * This, const WSD_OPERATION * pOperation, IUnknown * pUnknown, const WSDXML_ELEMENT * pAny, WSDXML_ELEMENT ** ppAny);
	HRESULT(STDMETHODCALLTYPE * UnsubscribeToOperation) (IWSDServiceProxy * This, const WSD_OPERATION * pOperation);
	HRESULT(STDMETHODCALLTYPE * SetEventingStatusCallback) (IWSDServiceProxy * This, IWSDEventingStatus * pStatus);
	HRESULT(STDMETHODCALLTYPE * GetEndpointProxy) (IWSDServiceProxy * This, IWSDEndpointProxy ** ppProxy);
	END_INTERFACE
}  IWSDServiceProxyVtbl;
interface IWSDServiceProxy
{
	CONST_VTBL struct IWSDServiceProxyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDServiceProxy_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDServiceProxy_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDServiceProxy_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDServiceProxy_GetMetadata(This,MetadataOut) ( (This)->lpVtbl -> GetMetadata(This,MetadataOut) )
#define IWSDServiceProxy_BeginGetMetadata(This,ppResult) ( (This)->lpVtbl -> BeginGetMetadata(This,ppResult) )
#define IWSDServiceProxy_EndGetMetadata(This,pResult,ppMetadata) ( (This)->lpVtbl -> EndGetMetadata(This,pResult,ppMetadata) )
#define IWSDServiceProxy_GetServiceMetadata(This,ppServiceMetadata) ( (This)->lpVtbl -> GetServiceMetadata(This,ppServiceMetadata) )
#define IWSDServiceProxy_SubscribeToOperation(This,pOperation,pUnknown,pAny,ppAny) ( (This)->lpVtbl -> SubscribeToOperation(This,pOperation,pUnknown,pAny,ppAny) )
#define IWSDServiceProxy_UnsubscribeToOperation(This,pOperation) ( (This)->lpVtbl -> UnsubscribeToOperation(This,pOperation) )
#define IWSDServiceProxy_SetEventingStatusCallback(This,pStatus) ( (This)->lpVtbl -> SetEventingStatusCallback(This,pStatus) )
#define IWSDServiceProxy_GetEndpointProxy(This,ppProxy) ( (This)->lpVtbl -> GetEndpointProxy(This,ppProxy) )
#endif
#endif
#if (WINVER >= _WIN32_WINNT_WIN7)
extern RPC_IF_HANDLE __MIDL_itf_wsdclient_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdclient_0000_0002_v0_0_s_ifspec;
#ifndef __IWSDServiceProxyEventing_INTERFACE_DEFINED__
#define __IWSDServiceProxyEventing_INTERFACE_DEFINED__
extern const IID IID_IWSDServiceProxyEventing;
typedef struct IWSDServiceProxyEventingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDServiceProxyEventing * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDServiceProxyEventing * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDServiceProxyEventing * This);
	HRESULT(STDMETHODCALLTYPE * GetMetadata) (IWSDServiceProxyEventing * This, WSD_METADATA_SECTION_LIST ** MetadataOut);
	HRESULT(STDMETHODCALLTYPE * BeginGetMetadata) (IWSDServiceProxyEventing * This, IWSDAsyncResult ** ppResult);
	HRESULT(STDMETHODCALLTYPE * EndGetMetadata) (IWSDServiceProxyEventing * This, IWSDAsyncResult * pResult, WSD_METADATA_SECTION_LIST ** ppMetadata);
	HRESULT(STDMETHODCALLTYPE * GetServiceMetadata) (IWSDServiceProxyEventing * This, WSD_SERVICE_METADATA ** ppServiceMetadata);
	HRESULT(STDMETHODCALLTYPE * SubscribeToOperation) (IWSDServiceProxyEventing * This, const WSD_OPERATION * pOperation, IUnknown * pUnknown, const WSDXML_ELEMENT * pAny, WSDXML_ELEMENT ** ppAny);
	HRESULT(STDMETHODCALLTYPE * UnsubscribeToOperation) (IWSDServiceProxyEventing * This, const WSD_OPERATION * pOperation);
	HRESULT(STDMETHODCALLTYPE * SetEventingStatusCallback) (IWSDServiceProxyEventing * This, IWSDEventingStatus * pStatus);
	HRESULT(STDMETHODCALLTYPE * GetEndpointProxy) (IWSDServiceProxyEventing * This, IWSDEndpointProxy ** ppProxy);
	HRESULT(STDMETHODCALLTYPE * SubscribeToMultipleOperations) (IWSDServiceProxyEventing * This, const WSD_OPERATION * pOperations, DWORD dwOperationCount, IUnknown * pUnknown, const WSD_EVENTING_EXPIRES * pExpires, const WSDXML_ELEMENT * pAny, WSD_EVENTING_EXPIRES ** ppExpires, WSDXML_ELEMENT ** ppAny);
	HRESULT(STDMETHODCALLTYPE * BeginSubscribeToMultipleOperations) (IWSDServiceProxyEventing * This, const WSD_OPERATION * pOperations, DWORD dwOperationCount, IUnknown * pUnknown, const WSD_EVENTING_EXPIRES * pExpires, const WSDXML_ELEMENT * pAny, IUnknown * pAsyncState, IWSDAsyncCallback * pAsyncCallback, IWSDAsyncResult ** ppResult);
	HRESULT(STDMETHODCALLTYPE * EndSubscribeToMultipleOperations) (IWSDServiceProxyEventing * This, const WSD_OPERATION * pOperations, DWORD dwOperationCount, IWSDAsyncResult * pResult, WSD_EVENTING_EXPIRES ** ppExpires, WSDXML_ELEMENT ** ppAny);
	HRESULT(STDMETHODCALLTYPE * UnsubscribeToMultipleOperations) (IWSDServiceProxyEventing * This, const WSD_OPERATION * pOperations, DWORD dwOperationCount, const WSDXML_ELEMENT * pAny);
	HRESULT(STDMETHODCALLTYPE * BeginUnsubscribeToMultipleOperations) (IWSDServiceProxyEventing * This, const WSD_OPERATION * pOperations, DWORD dwOperationCount, const WSDXML_ELEMENT * pAny, IUnknown * pAsyncState, IWSDAsyncCallback * pAsyncCallback, IWSDAsyncResult ** ppResult);
	HRESULT(STDMETHODCALLTYPE * EndUnsubscribeToMultipleOperations) (IWSDServiceProxyEventing * This, const WSD_OPERATION * pOperations, DWORD dwOperationCount, IWSDAsyncResult * pResult);
	HRESULT(STDMETHODCALLTYPE * RenewMultipleOperations) (IWSDServiceProxyEventing * This, const WSD_OPERATION * pOperations, DWORD dwOperationCount, const WSD_EVENTING_EXPIRES * pExpires, const WSDXML_ELEMENT * pAny, WSD_EVENTING_EXPIRES ** ppExpires, WSDXML_ELEMENT ** ppAny);
	HRESULT(STDMETHODCALLTYPE * BeginRenewMultipleOperations) (IWSDServiceProxyEventing * This, const WSD_OPERATION * pOperations, DWORD dwOperationCount, const WSD_EVENTING_EXPIRES * pExpires, const WSDXML_ELEMENT * pAny, IUnknown * pAsyncState, IWSDAsyncCallback * pAsyncCallback, IWSDAsyncResult ** ppResult);
	HRESULT(STDMETHODCALLTYPE * EndRenewMultipleOperations) (IWSDServiceProxyEventing * This, const WSD_OPERATION * pOperations, DWORD dwOperationCount, IWSDAsyncResult * pResult, WSD_EVENTING_EXPIRES ** ppExpires, WSDXML_ELEMENT ** ppAny);
	HRESULT(STDMETHODCALLTYPE * GetStatusForMultipleOperations) (IWSDServiceProxyEventing * This, const WSD_OPERATION * pOperations, DWORD dwOperationCount, const WSDXML_ELEMENT * pAny, WSD_EVENTING_EXPIRES ** ppExpires, WSDXML_ELEMENT ** ppAny);
	HRESULT(STDMETHODCALLTYPE * BeginGetStatusForMultipleOperations) (IWSDServiceProxyEventing * This, const WSD_OPERATION * pOperations, DWORD dwOperationCount, const WSDXML_ELEMENT * pAny, IUnknown * pAsyncState, IWSDAsyncCallback * pAsyncCallback, IWSDAsyncResult ** ppResult);
	HRESULT(STDMETHODCALLTYPE * EndGetStatusForMultipleOperations) (IWSDServiceProxyEventing * This, const WSD_OPERATION * pOperations, DWORD dwOperationCount, IWSDAsyncResult * pResult, WSD_EVENTING_EXPIRES ** ppExpires, WSDXML_ELEMENT ** ppAny);
	END_INTERFACE
}  IWSDServiceProxyEventingVtbl;
interface IWSDServiceProxyEventing
{
	CONST_VTBL struct IWSDServiceProxyEventingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDServiceProxyEventing_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDServiceProxyEventing_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDServiceProxyEventing_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDServiceProxyEventing_GetMetadata(This,MetadataOut) ( (This)->lpVtbl -> GetMetadata(This,MetadataOut) )
#define IWSDServiceProxyEventing_BeginGetMetadata(This,ppResult) ( (This)->lpVtbl -> BeginGetMetadata(This,ppResult) )
#define IWSDServiceProxyEventing_EndGetMetadata(This,pResult,ppMetadata) ( (This)->lpVtbl -> EndGetMetadata(This,pResult,ppMetadata) )
#define IWSDServiceProxyEventing_GetServiceMetadata(This,ppServiceMetadata) ( (This)->lpVtbl -> GetServiceMetadata(This,ppServiceMetadata) )
#define IWSDServiceProxyEventing_SubscribeToOperation(This,pOperation,pUnknown,pAny,ppAny) ( (This)->lpVtbl -> SubscribeToOperation(This,pOperation,pUnknown,pAny,ppAny) )
#define IWSDServiceProxyEventing_UnsubscribeToOperation(This,pOperation) ( (This)->lpVtbl -> UnsubscribeToOperation(This,pOperation) )
#define IWSDServiceProxyEventing_SetEventingStatusCallback(This,pStatus) ( (This)->lpVtbl -> SetEventingStatusCallback(This,pStatus) )
#define IWSDServiceProxyEventing_GetEndpointProxy(This,ppProxy) ( (This)->lpVtbl -> GetEndpointProxy(This,ppProxy) )
#define IWSDServiceProxyEventing_SubscribeToMultipleOperations(This,pOperations,dwOperationCount,pUnknown,pExpires,pAny,ppExpires,ppAny) ( (This)->lpVtbl -> SubscribeToMultipleOperations(This,pOperations,dwOperationCount,pUnknown,pExpires,pAny,ppExpires,ppAny) )
#define IWSDServiceProxyEventing_BeginSubscribeToMultipleOperations(This,pOperations,dwOperationCount,pUnknown,pExpires,pAny,pAsyncState,pAsyncCallback,ppResult) ( (This)->lpVtbl -> BeginSubscribeToMultipleOperations(This,pOperations,dwOperationCount,pUnknown,pExpires,pAny,pAsyncState,pAsyncCallback,ppResult) )
#define IWSDServiceProxyEventing_EndSubscribeToMultipleOperations(This,pOperations,dwOperationCount,pResult,ppExpires,ppAny) ( (This)->lpVtbl -> EndSubscribeToMultipleOperations(This,pOperations,dwOperationCount,pResult,ppExpires,ppAny) )
#define IWSDServiceProxyEventing_UnsubscribeToMultipleOperations(This,pOperations,dwOperationCount,pAny) ( (This)->lpVtbl -> UnsubscribeToMultipleOperations(This,pOperations,dwOperationCount,pAny) )
#define IWSDServiceProxyEventing_BeginUnsubscribeToMultipleOperations(This,pOperations,dwOperationCount,pAny,pAsyncState,pAsyncCallback,ppResult) ( (This)->lpVtbl -> BeginUnsubscribeToMultipleOperations(This,pOperations,dwOperationCount,pAny,pAsyncState,pAsyncCallback,ppResult) )
#define IWSDServiceProxyEventing_EndUnsubscribeToMultipleOperations(This,pOperations,dwOperationCount,pResult) ( (This)->lpVtbl -> EndUnsubscribeToMultipleOperations(This,pOperations,dwOperationCount,pResult) )
#define IWSDServiceProxyEventing_RenewMultipleOperations(This,pOperations,dwOperationCount,pExpires,pAny,ppExpires,ppAny) ( (This)->lpVtbl -> RenewMultipleOperations(This,pOperations,dwOperationCount,pExpires,pAny,ppExpires,ppAny) )
#define IWSDServiceProxyEventing_BeginRenewMultipleOperations(This,pOperations,dwOperationCount,pExpires,pAny,pAsyncState,pAsyncCallback,ppResult) ( (This)->lpVtbl -> BeginRenewMultipleOperations(This,pOperations,dwOperationCount,pExpires,pAny,pAsyncState,pAsyncCallback,ppResult) )
#define IWSDServiceProxyEventing_EndRenewMultipleOperations(This,pOperations,dwOperationCount,pResult,ppExpires,ppAny) ( (This)->lpVtbl -> EndRenewMultipleOperations(This,pOperations,dwOperationCount,pResult,ppExpires,ppAny) )
#define IWSDServiceProxyEventing_GetStatusForMultipleOperations(This,pOperations,dwOperationCount,pAny,ppExpires,ppAny) ( (This)->lpVtbl -> GetStatusForMultipleOperations(This,pOperations,dwOperationCount,pAny,ppExpires,ppAny) )
#define IWSDServiceProxyEventing_BeginGetStatusForMultipleOperations(This,pOperations,dwOperationCount,pAny,pAsyncState,pAsyncCallback,ppResult) ( (This)->lpVtbl -> BeginGetStatusForMultipleOperations(This,pOperations,dwOperationCount,pAny,pAsyncState,pAsyncCallback,ppResult) )
#define IWSDServiceProxyEventing_EndGetStatusForMultipleOperations(This,pOperations,dwOperationCount,pResult,ppExpires,ppAny) ( (This)->lpVtbl -> EndGetStatusForMultipleOperations(This,pOperations,dwOperationCount,pResult,ppExpires,ppAny) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_wsdclient_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdclient_0000_0003_v0_0_s_ifspec;
#ifndef __IWSDDeviceProxy_INTERFACE_DEFINED__
#define __IWSDDeviceProxy_INTERFACE_DEFINED__
extern const IID IID_IWSDDeviceProxy;
typedef struct IWSDDeviceProxyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDDeviceProxy * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDDeviceProxy * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDDeviceProxy * This);
	HRESULT(STDMETHODCALLTYPE * Init) (IWSDDeviceProxy * This, LPCWSTR pszDeviceId, IWSDAddress * pDeviceAddress, LPCWSTR pszLocalId, IWSDXMLContext * pContext, IWSDDeviceProxy * pSponsor);
	HRESULT(STDMETHODCALLTYPE * BeginGetMetadata) (IWSDDeviceProxy * This, IWSDAsyncResult ** ppResult);
	HRESULT(STDMETHODCALLTYPE * EndGetMetadata) (IWSDDeviceProxy * This, IWSDAsyncResult * pResult);
	HRESULT(STDMETHODCALLTYPE * GetHostMetadata) (IWSDDeviceProxy * This, WSD_HOST_METADATA ** ppHostMetadata);
	HRESULT(STDMETHODCALLTYPE * GetThisModelMetadata) (IWSDDeviceProxy * This, WSD_THIS_MODEL_METADATA ** ppManufacturerMetadata);
	HRESULT(STDMETHODCALLTYPE * GetThisDeviceMetadata) (IWSDDeviceProxy * This, WSD_THIS_DEVICE_METADATA ** ppThisDeviceMetadata);
	HRESULT(STDMETHODCALLTYPE * GetAllMetadata) (IWSDDeviceProxy * This, WSD_METADATA_SECTION_LIST ** ppMetadata);
	HRESULT(STDMETHODCALLTYPE * GetServiceProxyById) (IWSDDeviceProxy * This, LPCWSTR pszServiceId, IWSDServiceProxy ** ppServiceProxy);
	HRESULT(STDMETHODCALLTYPE * GetServiceProxyByType) (IWSDDeviceProxy * This, const WSDXML_NAME * pType, IWSDServiceProxy ** ppServiceProxy);
	HRESULT(STDMETHODCALLTYPE * GetEndpointProxy) (IWSDDeviceProxy * This, IWSDEndpointProxy ** ppProxy);
	END_INTERFACE
}  IWSDDeviceProxyVtbl;
interface IWSDDeviceProxy
{
	CONST_VTBL struct IWSDDeviceProxyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDDeviceProxy_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDDeviceProxy_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDDeviceProxy_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDDeviceProxy_Init(This,pszDeviceId,pDeviceAddress,pszLocalId,pContext,pSponsor) ( (This)->lpVtbl -> Init(This,pszDeviceId,pDeviceAddress,pszLocalId,pContext,pSponsor) )
#define IWSDDeviceProxy_BeginGetMetadata(This,ppResult) ( (This)->lpVtbl -> BeginGetMetadata(This,ppResult) )
#define IWSDDeviceProxy_EndGetMetadata(This,pResult) ( (This)->lpVtbl -> EndGetMetadata(This,pResult) )
#define IWSDDeviceProxy_GetHostMetadata(This,ppHostMetadata) ( (This)->lpVtbl -> GetHostMetadata(This,ppHostMetadata) )
#define IWSDDeviceProxy_GetThisModelMetadata(This,ppManufacturerMetadata) ( (This)->lpVtbl -> GetThisModelMetadata(This,ppManufacturerMetadata) )
#define IWSDDeviceProxy_GetThisDeviceMetadata(This,ppThisDeviceMetadata) ( (This)->lpVtbl -> GetThisDeviceMetadata(This,ppThisDeviceMetadata) )
#define IWSDDeviceProxy_GetAllMetadata(This,ppMetadata) ( (This)->lpVtbl -> GetAllMetadata(This,ppMetadata) )
#define IWSDDeviceProxy_GetServiceProxyById(This,pszServiceId,ppServiceProxy) ( (This)->lpVtbl -> GetServiceProxyById(This,pszServiceId,ppServiceProxy) )
#define IWSDDeviceProxy_GetServiceProxyByType(This,pType,ppServiceProxy) ( (This)->lpVtbl -> GetServiceProxyByType(This,pType,ppServiceProxy) )
#define IWSDDeviceProxy_GetEndpointProxy(This,ppProxy) ( (This)->lpVtbl -> GetEndpointProxy(This,ppProxy) )
#endif
#endif
#ifndef __IWSDAsyncResult_INTERFACE_DEFINED__
#define __IWSDAsyncResult_INTERFACE_DEFINED__
extern const IID IID_IWSDAsyncResult;
typedef struct IWSDAsyncResultVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDAsyncResult * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDAsyncResult * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDAsyncResult * This);
	HRESULT(STDMETHODCALLTYPE * SetCallback) (IWSDAsyncResult * This, IWSDAsyncCallback * pCallback, IUnknown * pAsyncState);
	HRESULT(STDMETHODCALLTYPE * SetWaitHandle) (IWSDAsyncResult * This, HANDLE hWaitHandle);
	HRESULT(STDMETHODCALLTYPE * HasCompleted) (IWSDAsyncResult * This);
	HRESULT(STDMETHODCALLTYPE * GetAsyncState) (IWSDAsyncResult * This, IUnknown ** ppAsyncState);
	HRESULT(STDMETHODCALLTYPE * Abort) (IWSDAsyncResult * This);
	HRESULT(STDMETHODCALLTYPE * GetEvent) (IWSDAsyncResult * This, WSD_EVENT * pEvent);
	HRESULT(STDMETHODCALLTYPE * GetEndpointProxy) (IWSDAsyncResult * This, IWSDEndpointProxy ** ppEndpoint);
	END_INTERFACE
}  IWSDAsyncResultVtbl;
interface IWSDAsyncResult
{
	CONST_VTBL struct IWSDAsyncResultVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDAsyncResult_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDAsyncResult_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDAsyncResult_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDAsyncResult_SetCallback(This,pCallback,pAsyncState) ( (This)->lpVtbl -> SetCallback(This,pCallback,pAsyncState) )
#define IWSDAsyncResult_SetWaitHandle(This,hWaitHandle) ( (This)->lpVtbl -> SetWaitHandle(This,hWaitHandle) )
#define IWSDAsyncResult_HasCompleted(This) ( (This)->lpVtbl -> HasCompleted(This) )
#define IWSDAsyncResult_GetAsyncState(This,ppAsyncState) ( (This)->lpVtbl -> GetAsyncState(This,ppAsyncState) )
#define IWSDAsyncResult_Abort(This) ( (This)->lpVtbl -> Abort(This) )
#define IWSDAsyncResult_GetEvent(This,pEvent) ( (This)->lpVtbl -> GetEvent(This,pEvent) )
#define IWSDAsyncResult_GetEndpointProxy(This,ppEndpoint) ( (This)->lpVtbl -> GetEndpointProxy(This,ppEndpoint) )
#endif
#endif
#ifndef __IWSDAsyncCallback_INTERFACE_DEFINED__
#define __IWSDAsyncCallback_INTERFACE_DEFINED__
extern const IID IID_IWSDAsyncCallback;
typedef struct IWSDAsyncCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDAsyncCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDAsyncCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDAsyncCallback * This);
	HRESULT(STDMETHODCALLTYPE * AsyncOperationComplete) (IWSDAsyncCallback * This, IWSDAsyncResult * pAsyncResult, IUnknown * pAsyncState);
	END_INTERFACE
}  IWSDAsyncCallbackVtbl;
interface IWSDAsyncCallback
{
	CONST_VTBL struct IWSDAsyncCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDAsyncCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDAsyncCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDAsyncCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDAsyncCallback_AsyncOperationComplete(This,pAsyncResult,pAsyncState) ( (This)->lpVtbl -> AsyncOperationComplete(This,pAsyncResult,pAsyncState) )
#endif
#endif
#ifndef __IWSDEventingStatus_INTERFACE_DEFINED__
#define __IWSDEventingStatus_INTERFACE_DEFINED__
extern const IID IID_IWSDEventingStatus;
typedef struct IWSDEventingStatusVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDEventingStatus * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDEventingStatus * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDEventingStatus * This);
	void (STDMETHODCALLTYPE * SubscriptionRenewed) (IWSDEventingStatus * This, LPCWSTR pszSubscriptionAction);
	void (STDMETHODCALLTYPE * SubscriptionRenewalFailed) (IWSDEventingStatus * This, LPCWSTR pszSubscriptionAction, HRESULT hr);
	void (STDMETHODCALLTYPE * SubscriptionEnded) (IWSDEventingStatus * This, LPCWSTR pszSubscriptionAction);
	END_INTERFACE
}  IWSDEventingStatusVtbl;
interface IWSDEventingStatus
{
	CONST_VTBL struct IWSDEventingStatusVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDEventingStatus_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDEventingStatus_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDEventingStatus_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDEventingStatus_SubscriptionRenewed(This,pszSubscriptionAction) ( (This)->lpVtbl -> SubscriptionRenewed(This,pszSubscriptionAction) )
#define IWSDEventingStatus_SubscriptionRenewalFailed(This,pszSubscriptionAction,hr) ( (This)->lpVtbl -> SubscriptionRenewalFailed(This,pszSubscriptionAction,hr) )
#define IWSDEventingStatus_SubscriptionEnded(This,pszSubscriptionAction) ( (This)->lpVtbl -> SubscriptionEnded(This,pszSubscriptionAction) )
#endif
#endif
#endif
