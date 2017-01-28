/*+@@file@@----------------------------------------------------------------*//*!
 \file		wsdhost.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 17:51:47 2016
 \date		Modified on Mon Sep 19 17:51:47 2016
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
#ifndef __wsdhost_h__
#define __wsdhost_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWSDDeviceHost_FWD_DEFINED__
#define __IWSDDeviceHost_FWD_DEFINED__
typedef interface IWSDDeviceHost IWSDDeviceHost;
#endif
#ifndef __IWSDDeviceHostNotify_FWD_DEFINED__
#define __IWSDDeviceHostNotify_FWD_DEFINED__
typedef interface IWSDDeviceHostNotify IWSDDeviceHostNotify;
#endif
#ifndef __IWSDServiceMessaging_FWD_DEFINED__
#define __IWSDServiceMessaging_FWD_DEFINED__
typedef interface IWSDServiceMessaging IWSDServiceMessaging;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <wsdxmldom.h>
#include <wsdtypes.h>
HRESULT WINAPI WSDCreateDeviceHost(LPCWSTR pszLocalId, IWSDXMLContext *pContext, IWSDDeviceHost **ppDeviceHost);
HRESULT WINAPI WSDCreateDeviceHostAdvanced(LPCWSTR pszLocalId, IWSDXMLContext *pContext, IWSDAddress **ppHostAddresses, DWORD dwHostAddressCount, IWSDDeviceHost **ppDeviceHost);
#if (WINVER >= _WIN32_WINNT_WIN7)
HRESULT WINAPI WSDCreateDeviceHost2(LPCWSTR pszLocalId, IWSDXMLContext *pContext, WSD_CONFIG_PARAM *pConfigParams, DWORD dwConfigParamCount, IWSDDeviceHost **ppDeviceHost);
#endif
extern RPC_IF_HANDLE __MIDL_itf_wsdhost_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdhost_0000_0000_v0_0_s_ifspec;
#ifndef __IWSDDeviceHost_INTERFACE_DEFINED__
#define __IWSDDeviceHost_INTERFACE_DEFINED__
extern const IID IID_IWSDDeviceHost;
typedef struct IWSDDeviceHostVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDDeviceHost * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDDeviceHost * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDDeviceHost * This);
	HRESULT(STDMETHODCALLTYPE * Init) (IWSDDeviceHost * This, LPCWSTR pszLocalId, IWSDXMLContext * pContext, IWSDAddress ** ppHostAddresses, DWORD dwHostAddressCount);
	HRESULT(STDMETHODCALLTYPE * Start) (IWSDDeviceHost * This, ULONGLONG ullInstanceId, const WSD_URI_LIST * pScopeList, IWSDDeviceHostNotify * pNotificationSink);
	HRESULT(STDMETHODCALLTYPE * Stop) (IWSDDeviceHost * This);
	HRESULT(STDMETHODCALLTYPE * Terminate) (IWSDDeviceHost * This);
	HRESULT(STDMETHODCALLTYPE * RegisterPortType) (IWSDDeviceHost * This, const WSD_PORT_TYPE * pPortType);
	HRESULT(STDMETHODCALLTYPE * SetMetadata) (IWSDDeviceHost * This, const WSD_THIS_MODEL_METADATA * pThisModelMetadata, const WSD_THIS_DEVICE_METADATA * pThisDeviceMetadata, const WSD_HOST_METADATA * pHostMetadata, const WSD_METADATA_SECTION_LIST * pCustomMetadata);
	HRESULT(STDMETHODCALLTYPE * RegisterService) (IWSDDeviceHost * This, LPCWSTR pszServiceId, IUnknown * pService);
	HRESULT(STDMETHODCALLTYPE * RetireService) (IWSDDeviceHost * This, LPCWSTR pszServiceId);
	HRESULT(STDMETHODCALLTYPE * AddDynamicService) (IWSDDeviceHost * This, LPCWSTR pszServiceId, LPCWSTR pszEndpointAddress, const WSD_PORT_TYPE * pPortType, const WSDXML_NAME * pPortName, const WSDXML_ELEMENT * pAny, IUnknown * pService);
	HRESULT(STDMETHODCALLTYPE * RemoveDynamicService) (IWSDDeviceHost * This, LPCWSTR pszServiceId);
	HRESULT(STDMETHODCALLTYPE * SetServiceDiscoverable) (IWSDDeviceHost * This, LPCWSTR pszServiceId, BOOL fDiscoverable);
	HRESULT(STDMETHODCALLTYPE * SignalEvent) (IWSDDeviceHost * This, LPCWSTR pszServiceId, const void *pBody, const WSD_OPERATION * pOperation);
	END_INTERFACE
}  IWSDDeviceHostVtbl;
interface IWSDDeviceHost
{
	CONST_VTBL struct IWSDDeviceHostVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDDeviceHost_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDDeviceHost_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDDeviceHost_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDDeviceHost_Init(This,pszLocalId,pContext,ppHostAddresses,dwHostAddressCount) ( (This)->lpVtbl -> Init(This,pszLocalId,pContext,ppHostAddresses,dwHostAddressCount) )
#define IWSDDeviceHost_Start(This,ullInstanceId,pScopeList,pNotificationSink) ( (This)->lpVtbl -> Start(This,ullInstanceId,pScopeList,pNotificationSink) )
#define IWSDDeviceHost_Stop(This) ( (This)->lpVtbl -> Stop(This) )
#define IWSDDeviceHost_Terminate(This) ( (This)->lpVtbl -> Terminate(This) )
#define IWSDDeviceHost_RegisterPortType(This,pPortType) ( (This)->lpVtbl -> RegisterPortType(This,pPortType) )
#define IWSDDeviceHost_SetMetadata(This,pThisModelMetadata,pThisDeviceMetadata,pHostMetadata,pCustomMetadata) ( (This)->lpVtbl -> SetMetadata(This,pThisModelMetadata,pThisDeviceMetadata,pHostMetadata,pCustomMetadata) )
#define IWSDDeviceHost_RegisterService(This,pszServiceId,pService) ( (This)->lpVtbl -> RegisterService(This,pszServiceId,pService) )
#define IWSDDeviceHost_RetireService(This,pszServiceId) ( (This)->lpVtbl -> RetireService(This,pszServiceId) )
#define IWSDDeviceHost_AddDynamicService(This,pszServiceId,pszEndpointAddress,pPortType,pPortName,pAny,pService) ( (This)->lpVtbl -> AddDynamicService(This,pszServiceId,pszEndpointAddress,pPortType,pPortName,pAny,pService) )
#define IWSDDeviceHost_RemoveDynamicService(This,pszServiceId) ( (This)->lpVtbl -> RemoveDynamicService(This,pszServiceId) )
#define IWSDDeviceHost_SetServiceDiscoverable(This,pszServiceId,fDiscoverable) ( (This)->lpVtbl -> SetServiceDiscoverable(This,pszServiceId,fDiscoverable) )
#define IWSDDeviceHost_SignalEvent(This,pszServiceId,pBody,pOperation) ( (This)->lpVtbl -> SignalEvent(This,pszServiceId,pBody,pOperation) )
#endif
#endif
#ifndef __IWSDDeviceHostNotify_INTERFACE_DEFINED__
#define __IWSDDeviceHostNotify_INTERFACE_DEFINED__
extern const IID IID_IWSDDeviceHostNotify;
typedef struct IWSDDeviceHostNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDDeviceHostNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDDeviceHostNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDDeviceHostNotify * This);
	HRESULT(STDMETHODCALLTYPE * GetService) (IWSDDeviceHostNotify * This, LPCWSTR pszServiceId, IUnknown ** ppService);
	END_INTERFACE
}  IWSDDeviceHostNotifyVtbl;
interface IWSDDeviceHostNotify
{
	CONST_VTBL struct IWSDDeviceHostNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDDeviceHostNotify_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDDeviceHostNotify_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDDeviceHostNotify_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDDeviceHostNotify_GetService(This,pszServiceId,ppService) ( (This)->lpVtbl -> GetService(This,pszServiceId,ppService) )
#endif
#endif
#ifndef __IWSDServiceMessaging_INTERFACE_DEFINED__
#define __IWSDServiceMessaging_INTERFACE_DEFINED__
extern const IID IID_IWSDServiceMessaging;
typedef struct IWSDServiceMessagingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDServiceMessaging * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDServiceMessaging * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDServiceMessaging * This);
	HRESULT(STDMETHODCALLTYPE * SendResponse) (IWSDServiceMessaging * This, void *pBody, WSD_OPERATION * pOperation, IWSDMessageParameters * pMessageParameters);
	HRESULT(STDMETHODCALLTYPE * FaultRequest) (IWSDServiceMessaging * This, WSD_SOAP_HEADER * pRequestHeader, IWSDMessageParameters * pMessageParameters, WSD_SOAP_FAULT * pFault);
	END_INTERFACE
}  IWSDServiceMessagingVtbl;
interface IWSDServiceMessaging
{
	CONST_VTBL struct IWSDServiceMessagingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDServiceMessaging_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDServiceMessaging_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDServiceMessaging_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDServiceMessaging_SendResponse(This,pBody,pOperation,pMessageParameters) ( (This)->lpVtbl -> SendResponse(This,pBody,pOperation,pMessageParameters) )
#define IWSDServiceMessaging_FaultRequest(This,pRequestHeader,pMessageParameters,pFault) ( (This)->lpVtbl -> FaultRequest(This,pRequestHeader,pMessageParameters,pFault) )
#endif
#endif
#endif
