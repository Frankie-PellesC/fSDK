/*+@@file@@----------------------------------------------------------------*//*!
 \file		UPnP.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 15:47:20 2016
 \date		Modified on Sat Sep 17 15:47:20 2016
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
#ifndef __upnp_h__
#define __upnp_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IUPnPDeviceFinder_FWD_DEFINED__
#define __IUPnPDeviceFinder_FWD_DEFINED__
typedef interface IUPnPDeviceFinder IUPnPDeviceFinder;
#endif
#ifndef __IUPnPAddressFamilyControl_FWD_DEFINED__
#define __IUPnPAddressFamilyControl_FWD_DEFINED__
typedef interface IUPnPAddressFamilyControl IUPnPAddressFamilyControl;
#endif
#ifndef __IUPnPHttpHeaderControl_FWD_DEFINED__
#define __IUPnPHttpHeaderControl_FWD_DEFINED__
typedef interface IUPnPHttpHeaderControl IUPnPHttpHeaderControl;
#endif
#ifndef __IUPnPDeviceFinderCallback_FWD_DEFINED__
#define __IUPnPDeviceFinderCallback_FWD_DEFINED__
typedef interface IUPnPDeviceFinderCallback IUPnPDeviceFinderCallback;
#endif
#ifndef __IUPnPServices_FWD_DEFINED__
#define __IUPnPServices_FWD_DEFINED__
typedef interface IUPnPServices IUPnPServices;
#endif
#ifndef __IUPnPService_FWD_DEFINED__
#define __IUPnPService_FWD_DEFINED__
typedef interface IUPnPService IUPnPService;
#endif
#ifndef __IUPnPServiceCallback_FWD_DEFINED__
#define __IUPnPServiceCallback_FWD_DEFINED__
typedef interface IUPnPServiceCallback IUPnPServiceCallback;
#endif
#ifndef __IUPnPDevices_FWD_DEFINED__
#define __IUPnPDevices_FWD_DEFINED__
typedef interface IUPnPDevices IUPnPDevices;
#endif
#ifndef __IUPnPDevice_FWD_DEFINED__
#define __IUPnPDevice_FWD_DEFINED__
typedef interface IUPnPDevice IUPnPDevice;
#endif
#ifndef __IUPnPDeviceDocumentAccess_FWD_DEFINED__
#define __IUPnPDeviceDocumentAccess_FWD_DEFINED__
typedef interface IUPnPDeviceDocumentAccess IUPnPDeviceDocumentAccess;
#endif
#ifndef __IUPnPDeviceDocumentAccessEx_FWD_DEFINED__
#define __IUPnPDeviceDocumentAccessEx_FWD_DEFINED__
typedef interface IUPnPDeviceDocumentAccessEx IUPnPDeviceDocumentAccessEx;
#endif
#ifndef __IUPnPDescriptionDocument_FWD_DEFINED__
#define __IUPnPDescriptionDocument_FWD_DEFINED__
typedef interface IUPnPDescriptionDocument IUPnPDescriptionDocument;
#endif
#ifndef __IUPnPDeviceFinderAddCallbackWithInterface_FWD_DEFINED__
#define __IUPnPDeviceFinderAddCallbackWithInterface_FWD_DEFINED__
typedef interface IUPnPDeviceFinderAddCallbackWithInterface IUPnPDeviceFinderAddCallbackWithInterface;
#endif
#ifndef __IUPnPDescriptionDocumentCallback_FWD_DEFINED__
#define __IUPnPDescriptionDocumentCallback_FWD_DEFINED__
typedef interface IUPnPDescriptionDocumentCallback IUPnPDescriptionDocumentCallback;
#endif
#ifndef __UPnPDeviceFinder_FWD_DEFINED__
#define __UPnPDeviceFinder_FWD_DEFINED__
typedef struct UPnPDeviceFinder UPnPDeviceFinder;
#endif
#ifndef __UPnPDevices_FWD_DEFINED__
#define __UPnPDevices_FWD_DEFINED__
typedef struct UPnPDevices UPnPDevices;
#endif
#ifndef __UPnPDevice_FWD_DEFINED__
#define __UPnPDevice_FWD_DEFINED__
typedef struct UPnPDevice UPnPDevice;
#endif
#ifndef __UPnPServices_FWD_DEFINED__
#define __UPnPServices_FWD_DEFINED__
typedef struct UPnPServices UPnPServices;
#endif
#ifndef __UPnPService_FWD_DEFINED__
#define __UPnPService_FWD_DEFINED__
typedef struct UPnPService UPnPService;
#endif
#ifndef __UPnPDescriptionDocument_FWD_DEFINED__
#define __UPnPDescriptionDocument_FWD_DEFINED__
typedef struct UPnPDescriptionDocument UPnPDescriptionDocument;
#endif
#ifndef __IUPnPDeviceDocumentAccess_FWD_DEFINED__
#define __IUPnPDeviceDocumentAccess_FWD_DEFINED__
typedef interface IUPnPDeviceDocumentAccess IUPnPDeviceDocumentAccess;
#endif
#ifndef __IUPnPDeviceDocumentAccessEx_FWD_DEFINED__
#define __IUPnPDeviceDocumentAccessEx_FWD_DEFINED__
typedef interface IUPnPDeviceDocumentAccessEx IUPnPDeviceDocumentAccessEx;
#endif
#ifndef __IUPnPDeviceFinderCallback_FWD_DEFINED__
#define __IUPnPDeviceFinderCallback_FWD_DEFINED__
typedef interface IUPnPDeviceFinderCallback IUPnPDeviceFinderCallback;
#endif
#ifndef __IUPnPDeviceFinderAddCallbackWithInterface_FWD_DEFINED__
#define __IUPnPDeviceFinderAddCallbackWithInterface_FWD_DEFINED__
typedef interface IUPnPDeviceFinderAddCallbackWithInterface IUPnPDeviceFinderAddCallbackWithInterface;
#endif
#ifndef __IUPnPServiceCallback_FWD_DEFINED__
#define __IUPnPServiceCallback_FWD_DEFINED__
typedef interface IUPnPServiceCallback IUPnPServiceCallback;
#endif
#include "oaidl.h"
#include "ocidl.h"
#define UPNP_E_ROOT_ELEMENT_EXPECTED     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0200)
#define UPNP_E_DEVICE_ELEMENT_EXPECTED   MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0201)
#define UPNP_E_SERVICE_ELEMENT_EXPECTED  MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0202)
#define UPNP_E_SERVICE_NODE_INCOMPLETE   MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0203)
#define UPNP_E_DEVICE_NODE_INCOMPLETE    MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0204)
#define UPNP_E_ICON_ELEMENT_EXPECTED     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0205)
#define UPNP_E_ICON_NODE_INCOMPLETE      MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0206)
#define UPNP_E_INVALID_ACTION            MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0207)
#define UPNP_E_INVALID_ARGUMENTS         MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0208)
#define UPNP_E_OUT_OF_SYNC               MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0209)
#define UPNP_E_ACTION_REQUEST_FAILED     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0210)
#define UPNP_E_TRANSPORT_ERROR           MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0211)
#define UPNP_E_VARIABLE_VALUE_UNKNOWN    MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0212)
#define UPNP_E_INVALID_VARIABLE          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0213)
#define UPNP_E_DEVICE_ERROR              MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0214)
#define UPNP_E_PROTOCOL_ERROR            MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0215)
#define UPNP_E_ERROR_PROCESSING_RESPONSE MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0216)
#define UPNP_E_DEVICE_TIMEOUT            MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0217)
#define UPNP_E_INVALID_DOCUMENT          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0500)
#define UPNP_E_EVENT_SUBSCRIPTION_FAILED MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0501)
#define FAULT_INVALID_ACTION             401
#define FAULT_INVALID_ARG                402
#define FAULT_INVALID_SEQUENCE_NUMBER    403
#define FAULT_INVALID_VARIABLE           404
#define FAULT_DEVICE_INTERNAL_ERROR      501
#define FAULT_ACTION_SPECIFIC_BASE       600
#define FAULT_ACTION_SPECIFIC_MAX        899
#define UPNP_E_ACTION_SPECIFIC_BASE      MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0300)
#define UPNP_E_ACTION_SPECIFIC_MAX       (UPNP_E_ACTION_SPECIFIC_BASE + (FAULT_ACTION_SPECIFIC_MAX - FAULT_ACTION_SPECIFIC_BASE))
#ifndef UPNP_ADDRESSFAMILY_IPv4
#define UPNP_ADDRESSFAMILY_IPv4		0x1
#endif
#ifndef UPNP_ADDRESSFAMILY_IPv6
#define UPNP_ADDRESSFAMILY_IPv6		0x2
#endif
#ifndef UPNP_ADDRESSFAMILY_BOTH
#define UPNP_ADDRESSFAMILY_BOTH		0x3
#endif
extern RPC_IF_HANDLE __MIDL_itf_upnp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_upnp_0000_0000_v0_0_s_ifspec;
#ifndef __IUPnPDeviceFinder_INTERFACE_DEFINED__
#define __IUPnPDeviceFinder_INTERFACE_DEFINED__
extern const IID IID_IUPnPDeviceFinder;
typedef struct IUPnPDeviceFinderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPDeviceFinder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPDeviceFinder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPDeviceFinder * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUPnPDeviceFinder * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUPnPDeviceFinder * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUPnPDeviceFinder * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUPnPDeviceFinder * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * FindByType) (IUPnPDeviceFinder * This, BSTR bstrTypeURI, DWORD dwFlags, IUPnPDevices ** pDevices);
	HRESULT(STDMETHODCALLTYPE * CreateAsyncFind) (IUPnPDeviceFinder * This, BSTR bstrTypeURI, DWORD dwFlags, IUnknown * punkDeviceFinderCallback, LONG * plFindData);
	HRESULT(STDMETHODCALLTYPE * StartAsyncFind) (IUPnPDeviceFinder * This, LONG lFindData);
	HRESULT(STDMETHODCALLTYPE * CancelAsyncFind) (IUPnPDeviceFinder * This, LONG lFindData);
	HRESULT(STDMETHODCALLTYPE * FindByUDN) (IUPnPDeviceFinder * This, BSTR bstrUDN, IUPnPDevice ** pDevice);
	END_INTERFACE
}  IUPnPDeviceFinderVtbl;
interface IUPnPDeviceFinder
{
	CONST_VTBL struct IUPnPDeviceFinderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPDeviceFinder_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPDeviceFinder_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPDeviceFinder_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPDeviceFinder_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUPnPDeviceFinder_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUPnPDeviceFinder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUPnPDeviceFinder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUPnPDeviceFinder_FindByType(This,bstrTypeURI,dwFlags,pDevices) ( (This)->lpVtbl -> FindByType(This,bstrTypeURI,dwFlags,pDevices) )
#define IUPnPDeviceFinder_CreateAsyncFind(This,bstrTypeURI,dwFlags,punkDeviceFinderCallback,plFindData) ( (This)->lpVtbl -> CreateAsyncFind(This,bstrTypeURI,dwFlags,punkDeviceFinderCallback,plFindData) )
#define IUPnPDeviceFinder_StartAsyncFind(This,lFindData) ( (This)->lpVtbl -> StartAsyncFind(This,lFindData) )
#define IUPnPDeviceFinder_CancelAsyncFind(This,lFindData) ( (This)->lpVtbl -> CancelAsyncFind(This,lFindData) )
#define IUPnPDeviceFinder_FindByUDN(This,bstrUDN,pDevice) ( (This)->lpVtbl -> FindByUDN(This,bstrUDN,pDevice) )
#endif
#endif
#ifndef __IUPnPAddressFamilyControl_INTERFACE_DEFINED__
#define __IUPnPAddressFamilyControl_INTERFACE_DEFINED__
extern const IID IID_IUPnPAddressFamilyControl;
typedef struct IUPnPAddressFamilyControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPAddressFamilyControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPAddressFamilyControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPAddressFamilyControl * This);
	HRESULT(STDMETHODCALLTYPE * SetAddressFamily) (IUPnPAddressFamilyControl * This, LONG dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetAddressFamily) (IUPnPAddressFamilyControl * This, LONG * pdwFlags);
	END_INTERFACE
}  IUPnPAddressFamilyControlVtbl;
interface IUPnPAddressFamilyControl
{
	CONST_VTBL struct IUPnPAddressFamilyControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPAddressFamilyControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPAddressFamilyControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPAddressFamilyControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPAddressFamilyControl_SetAddressFamily(This,dwFlags) ( (This)->lpVtbl -> SetAddressFamily(This,dwFlags) )
#define IUPnPAddressFamilyControl_GetAddressFamily(This,pdwFlags) ( (This)->lpVtbl -> GetAddressFamily(This,pdwFlags) )
#endif
#endif
#ifndef __IUPnPHttpHeaderControl_INTERFACE_DEFINED__
#define __IUPnPHttpHeaderControl_INTERFACE_DEFINED__
extern const IID IID_IUPnPHttpHeaderControl;
typedef struct IUPnPHttpHeaderControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPHttpHeaderControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPHttpHeaderControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPHttpHeaderControl * This);
	HRESULT(STDMETHODCALLTYPE * AddRequestHeaders) (IUPnPHttpHeaderControl * This, BSTR bstrHttpHeaders);
	END_INTERFACE
}  IUPnPHttpHeaderControlVtbl;
interface IUPnPHttpHeaderControl
{
	CONST_VTBL struct IUPnPHttpHeaderControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPHttpHeaderControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPHttpHeaderControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPHttpHeaderControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPHttpHeaderControl_AddRequestHeaders(This,bstrHttpHeaders) ( (This)->lpVtbl -> AddRequestHeaders(This,bstrHttpHeaders) )
#endif
#endif
#ifndef __IUPnPDeviceFinderCallback_INTERFACE_DEFINED__
#define __IUPnPDeviceFinderCallback_INTERFACE_DEFINED__
extern const IID IID_IUPnPDeviceFinderCallback;
typedef struct IUPnPDeviceFinderCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPDeviceFinderCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPDeviceFinderCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPDeviceFinderCallback * This);
	HRESULT(STDMETHODCALLTYPE * DeviceAdded) (IUPnPDeviceFinderCallback * This, LONG lFindData, IUPnPDevice * pDevice);
	HRESULT(STDMETHODCALLTYPE * DeviceRemoved) (IUPnPDeviceFinderCallback * This, LONG lFindData, BSTR bstrUDN);
	HRESULT(STDMETHODCALLTYPE * SearchComplete) (IUPnPDeviceFinderCallback * This, LONG lFindData);
	END_INTERFACE
}  IUPnPDeviceFinderCallbackVtbl;
interface IUPnPDeviceFinderCallback
{
	CONST_VTBL struct IUPnPDeviceFinderCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPDeviceFinderCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPDeviceFinderCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPDeviceFinderCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPDeviceFinderCallback_DeviceAdded(This,lFindData,pDevice) ( (This)->lpVtbl -> DeviceAdded(This,lFindData,pDevice) )
#define IUPnPDeviceFinderCallback_DeviceRemoved(This,lFindData,bstrUDN) ( (This)->lpVtbl -> DeviceRemoved(This,lFindData,bstrUDN) )
#define IUPnPDeviceFinderCallback_SearchComplete(This,lFindData) ( (This)->lpVtbl -> SearchComplete(This,lFindData) )
#endif
#endif
#ifndef __IUPnPServices_INTERFACE_DEFINED__
#define __IUPnPServices_INTERFACE_DEFINED__
extern const IID IID_IUPnPServices;
typedef struct IUPnPServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPServices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPServices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPServices * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUPnPServices * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUPnPServices * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUPnPServices * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUPnPServices * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IUPnPServices * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IUPnPServices * This, LPUNKNOWN * ppunk);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IUPnPServices * This, BSTR bstrServiceId, IUPnPService ** ppService);
	END_INTERFACE
}  IUPnPServicesVtbl;
interface IUPnPServices
{
	CONST_VTBL struct IUPnPServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPServices_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPServices_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPServices_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPServices_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUPnPServices_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUPnPServices_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUPnPServices_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUPnPServices_get_Count(This,plCount) ( (This)->lpVtbl -> get_Count(This,plCount) )
#define IUPnPServices_get__NewEnum(This,ppunk) ( (This)->lpVtbl -> get__NewEnum(This,ppunk) )
#define IUPnPServices_get_Item(This,bstrServiceId,ppService) ( (This)->lpVtbl -> get_Item(This,bstrServiceId,ppService) )
#endif
#endif
#ifndef __IUPnPService_INTERFACE_DEFINED__
#define __IUPnPService_INTERFACE_DEFINED__
extern const IID IID_IUPnPService;
typedef struct IUPnPServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPService * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUPnPService * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUPnPService * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUPnPService * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUPnPService * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * QueryStateVariable) (IUPnPService * This, BSTR bstrVariableName, VARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * InvokeAction) (IUPnPService * This, BSTR bstrActionName, VARIANT vInActionArgs, VARIANT * pvOutActionArgs, VARIANT * pvRetVal);
	HRESULT(STDMETHODCALLTYPE * get_ServiceTypeIdentifier) (IUPnPService * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * AddCallback) (IUPnPService * This, IUnknown * pUnkCallback);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IUPnPService * This, BSTR * pbstrId);
	HRESULT(STDMETHODCALLTYPE * get_LastTransportStatus) (IUPnPService * This, long *plValue);
	END_INTERFACE
}  IUPnPServiceVtbl;
interface IUPnPService
{
	CONST_VTBL struct IUPnPServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPService_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPService_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPService_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPService_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUPnPService_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUPnPService_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUPnPService_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUPnPService_QueryStateVariable(This,bstrVariableName,pValue) ( (This)->lpVtbl -> QueryStateVariable(This,bstrVariableName,pValue) )
#define IUPnPService_InvokeAction(This,bstrActionName,vInActionArgs,pvOutActionArgs,pvRetVal) ( (This)->lpVtbl -> InvokeAction(This,bstrActionName,vInActionArgs,pvOutActionArgs,pvRetVal) )
#define IUPnPService_get_ServiceTypeIdentifier(This,pVal) ( (This)->lpVtbl -> get_ServiceTypeIdentifier(This,pVal) )
#define IUPnPService_AddCallback(This,pUnkCallback) ( (This)->lpVtbl -> AddCallback(This,pUnkCallback) )
#define IUPnPService_get_Id(This,pbstrId) ( (This)->lpVtbl -> get_Id(This,pbstrId) )
#define IUPnPService_get_LastTransportStatus(This,plValue) ( (This)->lpVtbl -> get_LastTransportStatus(This,plValue) )
#endif
#endif
#ifndef __IUPnPServiceCallback_INTERFACE_DEFINED__
#define __IUPnPServiceCallback_INTERFACE_DEFINED__
extern const IID IID_IUPnPServiceCallback;
typedef struct IUPnPServiceCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPServiceCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPServiceCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPServiceCallback * This);
	HRESULT(STDMETHODCALLTYPE * StateVariableChanged) (IUPnPServiceCallback * This, IUPnPService * pus, LPCWSTR pcwszStateVarName, VARIANT vaValue);
	HRESULT(STDMETHODCALLTYPE * ServiceInstanceDied) (IUPnPServiceCallback * This, IUPnPService * pus);
	END_INTERFACE
}  IUPnPServiceCallbackVtbl;
interface IUPnPServiceCallback
{
	CONST_VTBL struct IUPnPServiceCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPServiceCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPServiceCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPServiceCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPServiceCallback_StateVariableChanged(This,pus,pcwszStateVarName,vaValue) ( (This)->lpVtbl -> StateVariableChanged(This,pus,pcwszStateVarName,vaValue) )
#define IUPnPServiceCallback_ServiceInstanceDied(This,pus) ( (This)->lpVtbl -> ServiceInstanceDied(This,pus) )
#endif
#endif
#ifndef __IUPnPDevices_INTERFACE_DEFINED__
#define __IUPnPDevices_INTERFACE_DEFINED__
extern const IID IID_IUPnPDevices;
typedef struct IUPnPDevicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPDevices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPDevices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPDevices * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUPnPDevices * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUPnPDevices * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUPnPDevices * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUPnPDevices * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IUPnPDevices * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IUPnPDevices * This, LPUNKNOWN * ppunk);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IUPnPDevices * This, BSTR bstrUDN, IUPnPDevice ** ppDevice);
	END_INTERFACE
}  IUPnPDevicesVtbl;
interface IUPnPDevices
{
	CONST_VTBL struct IUPnPDevicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPDevices_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPDevices_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPDevices_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPDevices_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUPnPDevices_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUPnPDevices_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUPnPDevices_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUPnPDevices_get_Count(This,plCount) ( (This)->lpVtbl -> get_Count(This,plCount) )
#define IUPnPDevices_get__NewEnum(This,ppunk) ( (This)->lpVtbl -> get__NewEnum(This,ppunk) )
#define IUPnPDevices_get_Item(This,bstrUDN,ppDevice) ( (This)->lpVtbl -> get_Item(This,bstrUDN,ppDevice) )
#endif
#endif
#ifndef __IUPnPDevice_INTERFACE_DEFINED__
#define __IUPnPDevice_INTERFACE_DEFINED__
extern const IID IID_IUPnPDevice;
typedef struct IUPnPDeviceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPDevice * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPDevice * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPDevice * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUPnPDevice * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUPnPDevice * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUPnPDevice * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUPnPDevice * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_IsRootDevice) (IUPnPDevice * This, VARIANT_BOOL * pvarb);
	HRESULT(STDMETHODCALLTYPE * get_RootDevice) (IUPnPDevice * This, IUPnPDevice ** ppudRootDevice);
	HRESULT(STDMETHODCALLTYPE * get_ParentDevice) (IUPnPDevice * This, IUPnPDevice ** ppudDeviceParent);
	HRESULT(STDMETHODCALLTYPE * get_HasChildren) (IUPnPDevice * This, VARIANT_BOOL * pvarb);
	HRESULT(STDMETHODCALLTYPE * get_Children) (IUPnPDevice * This, IUPnPDevices ** ppudChildren);
	HRESULT(STDMETHODCALLTYPE * get_UniqueDeviceName) (IUPnPDevice * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IUPnPDevice * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IUPnPDevice * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * get_PresentationURL) (IUPnPDevice * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * get_ManufacturerName) (IUPnPDevice * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * get_ManufacturerURL) (IUPnPDevice * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * get_ModelName) (IUPnPDevice * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * get_ModelNumber) (IUPnPDevice * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IUPnPDevice * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * get_ModelURL) (IUPnPDevice * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * get_UPC) (IUPnPDevice * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * get_SerialNumber) (IUPnPDevice * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * IconURL) (IUPnPDevice * This, BSTR bstrEncodingFormat, LONG lSizeX, LONG lSizeY, LONG lBitDepth, BSTR * pbstrIconURL);
	HRESULT(STDMETHODCALLTYPE * get_Services) (IUPnPDevice * This, IUPnPServices ** ppusServices);
	END_INTERFACE
}  IUPnPDeviceVtbl;
interface IUPnPDevice
{
	CONST_VTBL struct IUPnPDeviceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPDevice_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPDevice_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPDevice_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPDevice_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUPnPDevice_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUPnPDevice_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUPnPDevice_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUPnPDevice_get_IsRootDevice(This,pvarb) ( (This)->lpVtbl -> get_IsRootDevice(This,pvarb) )
#define IUPnPDevice_get_RootDevice(This,ppudRootDevice) ( (This)->lpVtbl -> get_RootDevice(This,ppudRootDevice) )
#define IUPnPDevice_get_ParentDevice(This,ppudDeviceParent) ( (This)->lpVtbl -> get_ParentDevice(This,ppudDeviceParent) )
#define IUPnPDevice_get_HasChildren(This,pvarb) ( (This)->lpVtbl -> get_HasChildren(This,pvarb) )
#define IUPnPDevice_get_Children(This,ppudChildren) ( (This)->lpVtbl -> get_Children(This,ppudChildren) )
#define IUPnPDevice_get_UniqueDeviceName(This,pbstr) ( (This)->lpVtbl -> get_UniqueDeviceName(This,pbstr) )
#define IUPnPDevice_get_FriendlyName(This,pbstr) ( (This)->lpVtbl -> get_FriendlyName(This,pbstr) )
#define IUPnPDevice_get_Type(This,pbstr) ( (This)->lpVtbl -> get_Type(This,pbstr) )
#define IUPnPDevice_get_PresentationURL(This,pbstr) ( (This)->lpVtbl -> get_PresentationURL(This,pbstr) )
#define IUPnPDevice_get_ManufacturerName(This,pbstr) ( (This)->lpVtbl -> get_ManufacturerName(This,pbstr) )
#define IUPnPDevice_get_ManufacturerURL(This,pbstr) ( (This)->lpVtbl -> get_ManufacturerURL(This,pbstr) )
#define IUPnPDevice_get_ModelName(This,pbstr) ( (This)->lpVtbl -> get_ModelName(This,pbstr) )
#define IUPnPDevice_get_ModelNumber(This,pbstr) ( (This)->lpVtbl -> get_ModelNumber(This,pbstr) )
#define IUPnPDevice_get_Description(This,pbstr) ( (This)->lpVtbl -> get_Description(This,pbstr) )
#define IUPnPDevice_get_ModelURL(This,pbstr) ( (This)->lpVtbl -> get_ModelURL(This,pbstr) )
#define IUPnPDevice_get_UPC(This,pbstr) ( (This)->lpVtbl -> get_UPC(This,pbstr) )
#define IUPnPDevice_get_SerialNumber(This,pbstr) ( (This)->lpVtbl -> get_SerialNumber(This,pbstr) )
#define IUPnPDevice_IconURL(This,bstrEncodingFormat,lSizeX,lSizeY,lBitDepth,pbstrIconURL) ( (This)->lpVtbl -> IconURL(This,bstrEncodingFormat,lSizeX,lSizeY,lBitDepth,pbstrIconURL) )
#define IUPnPDevice_get_Services(This,ppusServices) ( (This)->lpVtbl -> get_Services(This,ppusServices) )
#endif
#endif
#ifndef __IUPnPDeviceDocumentAccess_INTERFACE_DEFINED__
#define __IUPnPDeviceDocumentAccess_INTERFACE_DEFINED__
extern const IID IID_IUPnPDeviceDocumentAccess;
typedef struct IUPnPDeviceDocumentAccessVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPDeviceDocumentAccess * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPDeviceDocumentAccess * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPDeviceDocumentAccess * This);
	HRESULT(STDMETHODCALLTYPE * GetDocumentURL) (IUPnPDeviceDocumentAccess * This, BSTR * pbstrDocument);
	END_INTERFACE
}  IUPnPDeviceDocumentAccessVtbl;
interface IUPnPDeviceDocumentAccess
{
	CONST_VTBL struct IUPnPDeviceDocumentAccessVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPDeviceDocumentAccess_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPDeviceDocumentAccess_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPDeviceDocumentAccess_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPDeviceDocumentAccess_GetDocumentURL(This,pbstrDocument) ( (This)->lpVtbl -> GetDocumentURL(This,pbstrDocument) )
#endif
#endif
#ifndef __IUPnPDeviceDocumentAccessEx_INTERFACE_DEFINED__
#define __IUPnPDeviceDocumentAccessEx_INTERFACE_DEFINED__
extern const IID IID_IUPnPDeviceDocumentAccessEx;
typedef struct IUPnPDeviceDocumentAccessExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPDeviceDocumentAccessEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPDeviceDocumentAccessEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPDeviceDocumentAccessEx * This);
	HRESULT(STDMETHODCALLTYPE * GetDocument) (IUPnPDeviceDocumentAccessEx * This, BSTR * pbstrDocument);
	END_INTERFACE
}  IUPnPDeviceDocumentAccessExVtbl;
interface IUPnPDeviceDocumentAccessEx
{
	CONST_VTBL struct IUPnPDeviceDocumentAccessExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPDeviceDocumentAccessEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPDeviceDocumentAccessEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPDeviceDocumentAccessEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPDeviceDocumentAccessEx_GetDocument(This,pbstrDocument) ( (This)->lpVtbl -> GetDocument(This,pbstrDocument) )
#endif
#endif
#ifndef __IUPnPDescriptionDocument_INTERFACE_DEFINED__
#define __IUPnPDescriptionDocument_INTERFACE_DEFINED__
extern const IID IID_IUPnPDescriptionDocument;
typedef struct IUPnPDescriptionDocumentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPDescriptionDocument * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPDescriptionDocument * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPDescriptionDocument * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IUPnPDescriptionDocument * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IUPnPDescriptionDocument * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IUPnPDescriptionDocument * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUPnPDescriptionDocument * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ReadyState) (IUPnPDescriptionDocument * This, LONG * plReadyState);
	HRESULT(STDMETHODCALLTYPE * Load) (IUPnPDescriptionDocument * This, BSTR bstrUrl);
	HRESULT(STDMETHODCALLTYPE * LoadAsync) (IUPnPDescriptionDocument * This, BSTR bstrUrl, IUnknown * punkCallback);
	HRESULT(STDMETHODCALLTYPE * get_LoadResult) (IUPnPDescriptionDocument * This, long *phrError);
	HRESULT(STDMETHODCALLTYPE * Abort) (IUPnPDescriptionDocument * This);
	HRESULT(STDMETHODCALLTYPE * RootDevice) (IUPnPDescriptionDocument * This, IUPnPDevice ** ppudRootDevice);
	HRESULT(STDMETHODCALLTYPE * DeviceByUDN) (IUPnPDescriptionDocument * This, BSTR bstrUDN, IUPnPDevice ** ppudDevice);
	END_INTERFACE
}  IUPnPDescriptionDocumentVtbl;
interface IUPnPDescriptionDocument
{
	CONST_VTBL struct IUPnPDescriptionDocumentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPDescriptionDocument_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPDescriptionDocument_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPDescriptionDocument_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPDescriptionDocument_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IUPnPDescriptionDocument_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IUPnPDescriptionDocument_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IUPnPDescriptionDocument_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IUPnPDescriptionDocument_get_ReadyState(This,plReadyState) ( (This)->lpVtbl -> get_ReadyState(This,plReadyState) )
#define IUPnPDescriptionDocument_Load(This,bstrUrl) ( (This)->lpVtbl -> Load(This,bstrUrl) )
#define IUPnPDescriptionDocument_LoadAsync(This,bstrUrl,punkCallback) ( (This)->lpVtbl -> LoadAsync(This,bstrUrl,punkCallback) )
#define IUPnPDescriptionDocument_get_LoadResult(This,phrError) ( (This)->lpVtbl -> get_LoadResult(This,phrError) )
#define IUPnPDescriptionDocument_Abort(This) ( (This)->lpVtbl -> Abort(This) )
#define IUPnPDescriptionDocument_RootDevice(This,ppudRootDevice) ( (This)->lpVtbl -> RootDevice(This,ppudRootDevice) )
#define IUPnPDescriptionDocument_DeviceByUDN(This,bstrUDN,ppudDevice) ( (This)->lpVtbl -> DeviceByUDN(This,bstrUDN,ppudDevice) )
#endif
#endif
#ifndef __IUPnPDeviceFinderAddCallbackWithInterface_INTERFACE_DEFINED__
#define __IUPnPDeviceFinderAddCallbackWithInterface_INTERFACE_DEFINED__
extern const IID IID_IUPnPDeviceFinderAddCallbackWithInterface;
typedef struct IUPnPDeviceFinderAddCallbackWithInterfaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPDeviceFinderAddCallbackWithInterface * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPDeviceFinderAddCallbackWithInterface * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPDeviceFinderAddCallbackWithInterface * This);
	HRESULT(STDMETHODCALLTYPE * DeviceAddedWithInterface) (IUPnPDeviceFinderAddCallbackWithInterface * This, LONG lFindData, IUPnPDevice * pDevice, GUID * pguidInterface);
	END_INTERFACE
}  IUPnPDeviceFinderAddCallbackWithInterfaceVtbl;
interface IUPnPDeviceFinderAddCallbackWithInterface
{
	CONST_VTBL struct IUPnPDeviceFinderAddCallbackWithInterfaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPDeviceFinderAddCallbackWithInterface_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPDeviceFinderAddCallbackWithInterface_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPDeviceFinderAddCallbackWithInterface_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPDeviceFinderAddCallbackWithInterface_DeviceAddedWithInterface(This,lFindData,pDevice,pguidInterface) ( (This)->lpVtbl -> DeviceAddedWithInterface(This,lFindData,pDevice,pguidInterface) )
#endif
#endif
#ifndef __IUPnPDescriptionDocumentCallback_INTERFACE_DEFINED__
#define __IUPnPDescriptionDocumentCallback_INTERFACE_DEFINED__
extern const IID IID_IUPnPDescriptionDocumentCallback;
typedef struct IUPnPDescriptionDocumentCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPDescriptionDocumentCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPDescriptionDocumentCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPDescriptionDocumentCallback * This);
	HRESULT(STDMETHODCALLTYPE * LoadComplete) (IUPnPDescriptionDocumentCallback * This, HRESULT hrLoadResult);
	END_INTERFACE
}  IUPnPDescriptionDocumentCallbackVtbl;
interface IUPnPDescriptionDocumentCallback
{
	CONST_VTBL struct IUPnPDescriptionDocumentCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPDescriptionDocumentCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPDescriptionDocumentCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPDescriptionDocumentCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPDescriptionDocumentCallback_LoadComplete(This,hrLoadResult) ( (This)->lpVtbl -> LoadComplete(This,hrLoadResult) )
#endif
#endif
#ifndef __UPNPLib_LIBRARY_DEFINED__
#define __UPNPLib_LIBRARY_DEFINED__
extern const IID LIBID_UPNPLib;
extern const CLSID CLSID_UPnPDeviceFinder;
extern const CLSID CLSID_UPnPDevices;
extern const CLSID CLSID_UPnPDevice;
extern const CLSID CLSID_UPnPServices;
extern const CLSID CLSID_UPnPService;
extern const CLSID CLSID_UPnPDescriptionDocument;
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
