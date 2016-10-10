/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmlss.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 14:59:50 2016
 \date		Modified on Mon Sep 19 14:59:50 2016
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
#ifndef __wmlss_h__
#define __wmlss_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWindowsMediaLibrarySharingDeviceProperty_FWD_DEFINED__
#define __IWindowsMediaLibrarySharingDeviceProperty_FWD_DEFINED__
typedef interface IWindowsMediaLibrarySharingDeviceProperty IWindowsMediaLibrarySharingDeviceProperty;
#endif
#ifndef __IWindowsMediaLibrarySharingDeviceProperties_FWD_DEFINED__
#define __IWindowsMediaLibrarySharingDeviceProperties_FWD_DEFINED__
typedef interface IWindowsMediaLibrarySharingDeviceProperties IWindowsMediaLibrarySharingDeviceProperties;
#endif
#ifndef __IWindowsMediaLibrarySharingDevice_FWD_DEFINED__
#define __IWindowsMediaLibrarySharingDevice_FWD_DEFINED__
typedef interface IWindowsMediaLibrarySharingDevice IWindowsMediaLibrarySharingDevice;
#endif
#ifndef __IWindowsMediaLibrarySharingDevices_FWD_DEFINED__
#define __IWindowsMediaLibrarySharingDevices_FWD_DEFINED__
typedef interface IWindowsMediaLibrarySharingDevices IWindowsMediaLibrarySharingDevices;
#endif
#ifndef __IWindowsMediaLibrarySharingServices_FWD_DEFINED__
#define __IWindowsMediaLibrarySharingServices_FWD_DEFINED__
typedef interface IWindowsMediaLibrarySharingServices IWindowsMediaLibrarySharingServices;
#endif
#ifndef __WindowsMediaLibrarySharingServices_FWD_DEFINED__
#define __WindowsMediaLibrarySharingServices_FWD_DEFINED__
typedef struct WindowsMediaLibrarySharingServices WindowsMediaLibrarySharingServices;
#endif
#include "oaidl.h"
#include "ocidl.h"
#if (WINVER >= _WIN32_WINNT_WIN7)
extern RPC_IF_HANDLE __MIDL_itf_wmlss_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmlss_0000_0000_v0_0_s_ifspec;
#ifndef __WMLSS_LIBRARY_DEFINED__
#define __WMLSS_LIBRARY_DEFINED__
typedef enum WindowsMediaLibrarySharingDeviceAuthorizationStatus
{
	DEVICE_AUTHORIZATION_UNKNOWN = 0,
	DEVICE_AUTHORIZATION_ALLOWED = 1,
	DEVICE_AUTHORIZATION_DENIED = 2
} WindowsMediaLibrarySharingDeviceAuthorizationStatus;
extern const IID LIBID_WMLSS;
#ifndef __IWindowsMediaLibrarySharingDeviceProperty_INTERFACE_DEFINED__
#define __IWindowsMediaLibrarySharingDeviceProperty_INTERFACE_DEFINED__
extern const IID IID_IWindowsMediaLibrarySharingDeviceProperty;
typedef struct IWindowsMediaLibrarySharingDevicePropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWindowsMediaLibrarySharingDeviceProperty * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWindowsMediaLibrarySharingDeviceProperty * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWindowsMediaLibrarySharingDeviceProperty * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWindowsMediaLibrarySharingDeviceProperty * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWindowsMediaLibrarySharingDeviceProperty * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWindowsMediaLibrarySharingDeviceProperty * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWindowsMediaLibrarySharingDeviceProperty * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IWindowsMediaLibrarySharingDeviceProperty * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IWindowsMediaLibrarySharingDeviceProperty * This, VARIANT * value);
	END_INTERFACE
}  IWindowsMediaLibrarySharingDevicePropertyVtbl;
interface IWindowsMediaLibrarySharingDeviceProperty
{
	CONST_VTBL struct IWindowsMediaLibrarySharingDevicePropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWindowsMediaLibrarySharingDeviceProperty_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWindowsMediaLibrarySharingDeviceProperty_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWindowsMediaLibrarySharingDeviceProperty_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWindowsMediaLibrarySharingDeviceProperty_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWindowsMediaLibrarySharingDeviceProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWindowsMediaLibrarySharingDeviceProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWindowsMediaLibrarySharingDeviceProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWindowsMediaLibrarySharingDeviceProperty_get_Name(This,name) ( (This)->lpVtbl -> get_Name(This,name) )
#define IWindowsMediaLibrarySharingDeviceProperty_get_Value(This,value) ( (This)->lpVtbl -> get_Value(This,value) )
#endif
#endif
#ifndef __IWindowsMediaLibrarySharingDeviceProperties_INTERFACE_DEFINED__
#define __IWindowsMediaLibrarySharingDeviceProperties_INTERFACE_DEFINED__
extern const IID IID_IWindowsMediaLibrarySharingDeviceProperties;
typedef struct IWindowsMediaLibrarySharingDevicePropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWindowsMediaLibrarySharingDeviceProperties * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWindowsMediaLibrarySharingDeviceProperties * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWindowsMediaLibrarySharingDeviceProperties * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWindowsMediaLibrarySharingDeviceProperties * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWindowsMediaLibrarySharingDeviceProperties * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWindowsMediaLibrarySharingDeviceProperties * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWindowsMediaLibrarySharingDeviceProperties * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IWindowsMediaLibrarySharingDeviceProperties * This, LONG index, IWindowsMediaLibrarySharingDeviceProperty ** property);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IWindowsMediaLibrarySharingDeviceProperties * This, LONG * count);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IWindowsMediaLibrarySharingDeviceProperties * This, BSTR name, IWindowsMediaLibrarySharingDeviceProperty ** property);
	END_INTERFACE
}  IWindowsMediaLibrarySharingDevicePropertiesVtbl;
interface IWindowsMediaLibrarySharingDeviceProperties
{
	CONST_VTBL struct IWindowsMediaLibrarySharingDevicePropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWindowsMediaLibrarySharingDeviceProperties_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWindowsMediaLibrarySharingDeviceProperties_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWindowsMediaLibrarySharingDeviceProperties_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWindowsMediaLibrarySharingDeviceProperties_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWindowsMediaLibrarySharingDeviceProperties_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWindowsMediaLibrarySharingDeviceProperties_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWindowsMediaLibrarySharingDeviceProperties_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWindowsMediaLibrarySharingDeviceProperties_get_Item(This,index,property) ( (This)->lpVtbl -> get_Item(This,index,property) )
#define IWindowsMediaLibrarySharingDeviceProperties_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define IWindowsMediaLibrarySharingDeviceProperties_GetProperty(This,name,property) ( (This)->lpVtbl -> GetProperty(This,name,property) )
#endif
#endif
#ifndef __IWindowsMediaLibrarySharingDevice_INTERFACE_DEFINED__
#define __IWindowsMediaLibrarySharingDevice_INTERFACE_DEFINED__
extern const IID IID_IWindowsMediaLibrarySharingDevice;
typedef struct IWindowsMediaLibrarySharingDeviceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWindowsMediaLibrarySharingDevice * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWindowsMediaLibrarySharingDevice * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWindowsMediaLibrarySharingDevice * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWindowsMediaLibrarySharingDevice * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWindowsMediaLibrarySharingDevice * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWindowsMediaLibrarySharingDevice * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWindowsMediaLibrarySharingDevice * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DeviceID) (IWindowsMediaLibrarySharingDevice * This, BSTR * deviceID);
	HRESULT(STDMETHODCALLTYPE * get_Authorization) (IWindowsMediaLibrarySharingDevice * This, WindowsMediaLibrarySharingDeviceAuthorizationStatus * authorization);
	HRESULT(STDMETHODCALLTYPE * put_Authorization) (IWindowsMediaLibrarySharingDevice * This, WindowsMediaLibrarySharingDeviceAuthorizationStatus authorization);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (IWindowsMediaLibrarySharingDevice * This, IWindowsMediaLibrarySharingDeviceProperties ** deviceProperties);
	END_INTERFACE
}  IWindowsMediaLibrarySharingDeviceVtbl;
interface IWindowsMediaLibrarySharingDevice
{
	CONST_VTBL struct IWindowsMediaLibrarySharingDeviceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWindowsMediaLibrarySharingDevice_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWindowsMediaLibrarySharingDevice_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWindowsMediaLibrarySharingDevice_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWindowsMediaLibrarySharingDevice_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWindowsMediaLibrarySharingDevice_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWindowsMediaLibrarySharingDevice_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWindowsMediaLibrarySharingDevice_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWindowsMediaLibrarySharingDevice_get_DeviceID(This,deviceID) ( (This)->lpVtbl -> get_DeviceID(This,deviceID) )
#define IWindowsMediaLibrarySharingDevice_get_Authorization(This,authorization) ( (This)->lpVtbl -> get_Authorization(This,authorization) )
#define IWindowsMediaLibrarySharingDevice_put_Authorization(This,authorization) ( (This)->lpVtbl -> put_Authorization(This,authorization) )
#define IWindowsMediaLibrarySharingDevice_get_Properties(This,deviceProperties) ( (This)->lpVtbl -> get_Properties(This,deviceProperties) )
#endif
#endif
#ifndef __IWindowsMediaLibrarySharingDevices_INTERFACE_DEFINED__
#define __IWindowsMediaLibrarySharingDevices_INTERFACE_DEFINED__
extern const IID IID_IWindowsMediaLibrarySharingDevices;
typedef struct IWindowsMediaLibrarySharingDevicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWindowsMediaLibrarySharingDevices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWindowsMediaLibrarySharingDevices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWindowsMediaLibrarySharingDevices * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWindowsMediaLibrarySharingDevices * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWindowsMediaLibrarySharingDevices * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWindowsMediaLibrarySharingDevices * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWindowsMediaLibrarySharingDevices * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IWindowsMediaLibrarySharingDevices * This, LONG index, IWindowsMediaLibrarySharingDevice ** device);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IWindowsMediaLibrarySharingDevices * This, LONG * count);
	HRESULT(STDMETHODCALLTYPE * GetDevice) (IWindowsMediaLibrarySharingDevices * This, BSTR deviceID, IWindowsMediaLibrarySharingDevice ** device);
	END_INTERFACE
}  IWindowsMediaLibrarySharingDevicesVtbl;
interface IWindowsMediaLibrarySharingDevices
{
	CONST_VTBL struct IWindowsMediaLibrarySharingDevicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWindowsMediaLibrarySharingDevices_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWindowsMediaLibrarySharingDevices_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWindowsMediaLibrarySharingDevices_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWindowsMediaLibrarySharingDevices_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWindowsMediaLibrarySharingDevices_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWindowsMediaLibrarySharingDevices_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWindowsMediaLibrarySharingDevices_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWindowsMediaLibrarySharingDevices_get_Item(This,index,device) ( (This)->lpVtbl -> get_Item(This,index,device) )
#define IWindowsMediaLibrarySharingDevices_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define IWindowsMediaLibrarySharingDevices_GetDevice(This,deviceID,device) ( (This)->lpVtbl -> GetDevice(This,deviceID,device) )
#endif
#endif
#ifndef __IWindowsMediaLibrarySharingServices_INTERFACE_DEFINED__
#define __IWindowsMediaLibrarySharingServices_INTERFACE_DEFINED__
extern const IID IID_IWindowsMediaLibrarySharingServices;
typedef struct IWindowsMediaLibrarySharingServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWindowsMediaLibrarySharingServices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWindowsMediaLibrarySharingServices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWindowsMediaLibrarySharingServices * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWindowsMediaLibrarySharingServices * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWindowsMediaLibrarySharingServices * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWindowsMediaLibrarySharingServices * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWindowsMediaLibrarySharingServices * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * showShareMediaCPL) (IWindowsMediaLibrarySharingServices * This, BSTR device);
	HRESULT(STDMETHODCALLTYPE * get_userHomeMediaSharingState) (IWindowsMediaLibrarySharingServices * This, VARIANT_BOOL * sharingEnabled);
	HRESULT(STDMETHODCALLTYPE * put_userHomeMediaSharingState) (IWindowsMediaLibrarySharingServices * This, VARIANT_BOOL sharingEnabled);
	HRESULT(STDMETHODCALLTYPE * get_userHomeMediaSharingLibraryName) (IWindowsMediaLibrarySharingServices * This, BSTR * libraryName);
	HRESULT(STDMETHODCALLTYPE * put_userHomeMediaSharingLibraryName) (IWindowsMediaLibrarySharingServices * This, BSTR libraryName);
	HRESULT(STDMETHODCALLTYPE * get_computerHomeMediaSharingAllowedState) (IWindowsMediaLibrarySharingServices * This, VARIANT_BOOL * sharingAllowed);
	HRESULT(STDMETHODCALLTYPE * put_computerHomeMediaSharingAllowedState) (IWindowsMediaLibrarySharingServices * This, VARIANT_BOOL sharingAllowed);
	HRESULT(STDMETHODCALLTYPE * get_userInternetMediaSharingState) (IWindowsMediaLibrarySharingServices * This, VARIANT_BOOL * sharingEnabled);
	HRESULT(STDMETHODCALLTYPE * put_userInternetMediaSharingState) (IWindowsMediaLibrarySharingServices * This, VARIANT_BOOL sharingEnabled);
	HRESULT(STDMETHODCALLTYPE * get_computerInternetMediaSharingAllowedState) (IWindowsMediaLibrarySharingServices * This, VARIANT_BOOL * sharingAllowed);
	HRESULT(STDMETHODCALLTYPE * put_computerInternetMediaSharingAllowedState) (IWindowsMediaLibrarySharingServices * This, VARIANT_BOOL sharingAllowed);
	HRESULT(STDMETHODCALLTYPE * get_internetMediaSharingSecurityGroup) (IWindowsMediaLibrarySharingServices * This, BSTR * securityGroup);
	HRESULT(STDMETHODCALLTYPE * put_internetMediaSharingSecurityGroup) (IWindowsMediaLibrarySharingServices * This, BSTR securityGroup);
	HRESULT(STDMETHODCALLTYPE * get_allowSharingToAllDevices) (IWindowsMediaLibrarySharingServices * This, VARIANT_BOOL * sharingEnabled);
	HRESULT(STDMETHODCALLTYPE * put_allowSharingToAllDevices) (IWindowsMediaLibrarySharingServices * This, VARIANT_BOOL sharingEnabled);
	HRESULT(STDMETHODCALLTYPE * setDefaultAuthorization) (IWindowsMediaLibrarySharingServices * This, BSTR MACAddresses, BSTR friendlyName, VARIANT_BOOL authorization);
	HRESULT(STDMETHODCALLTYPE * setAuthorizationState) (IWindowsMediaLibrarySharingServices * This, BSTR MACAddress, VARIANT_BOOL authorizationState);
	HRESULT(STDMETHODCALLTYPE * getAllDevices) (IWindowsMediaLibrarySharingServices * This, IWindowsMediaLibrarySharingDevices ** devices);
	HRESULT(STDMETHODCALLTYPE * get_customSettingsApplied) (IWindowsMediaLibrarySharingServices * This, VARIANT_BOOL * customSettingsApplied);
	END_INTERFACE
}  IWindowsMediaLibrarySharingServicesVtbl;
interface IWindowsMediaLibrarySharingServices
{
	CONST_VTBL struct IWindowsMediaLibrarySharingServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWindowsMediaLibrarySharingServices_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWindowsMediaLibrarySharingServices_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWindowsMediaLibrarySharingServices_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWindowsMediaLibrarySharingServices_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWindowsMediaLibrarySharingServices_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWindowsMediaLibrarySharingServices_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWindowsMediaLibrarySharingServices_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWindowsMediaLibrarySharingServices_showShareMediaCPL(This,device) ( (This)->lpVtbl -> showShareMediaCPL(This,device) )
#define IWindowsMediaLibrarySharingServices_get_userHomeMediaSharingState(This,sharingEnabled) ( (This)->lpVtbl -> get_userHomeMediaSharingState(This,sharingEnabled) )
#define IWindowsMediaLibrarySharingServices_put_userHomeMediaSharingState(This,sharingEnabled) ( (This)->lpVtbl -> put_userHomeMediaSharingState(This,sharingEnabled) )
#define IWindowsMediaLibrarySharingServices_get_userHomeMediaSharingLibraryName(This,libraryName) ( (This)->lpVtbl -> get_userHomeMediaSharingLibraryName(This,libraryName) )
#define IWindowsMediaLibrarySharingServices_put_userHomeMediaSharingLibraryName(This,libraryName) ( (This)->lpVtbl -> put_userHomeMediaSharingLibraryName(This,libraryName) )
#define IWindowsMediaLibrarySharingServices_get_computerHomeMediaSharingAllowedState(This,sharingAllowed) ( (This)->lpVtbl -> get_computerHomeMediaSharingAllowedState(This,sharingAllowed) )
#define IWindowsMediaLibrarySharingServices_put_computerHomeMediaSharingAllowedState(This,sharingAllowed) ( (This)->lpVtbl -> put_computerHomeMediaSharingAllowedState(This,sharingAllowed) )
#define IWindowsMediaLibrarySharingServices_get_userInternetMediaSharingState(This,sharingEnabled) ( (This)->lpVtbl -> get_userInternetMediaSharingState(This,sharingEnabled) )
#define IWindowsMediaLibrarySharingServices_put_userInternetMediaSharingState(This,sharingEnabled) ( (This)->lpVtbl -> put_userInternetMediaSharingState(This,sharingEnabled) )
#define IWindowsMediaLibrarySharingServices_get_computerInternetMediaSharingAllowedState(This,sharingAllowed) ( (This)->lpVtbl -> get_computerInternetMediaSharingAllowedState(This,sharingAllowed) )
#define IWindowsMediaLibrarySharingServices_put_computerInternetMediaSharingAllowedState(This,sharingAllowed) ( (This)->lpVtbl -> put_computerInternetMediaSharingAllowedState(This,sharingAllowed) )
#define IWindowsMediaLibrarySharingServices_get_internetMediaSharingSecurityGroup(This,securityGroup) ( (This)->lpVtbl -> get_internetMediaSharingSecurityGroup(This,securityGroup) )
#define IWindowsMediaLibrarySharingServices_put_internetMediaSharingSecurityGroup(This,securityGroup) ( (This)->lpVtbl -> put_internetMediaSharingSecurityGroup(This,securityGroup) )
#define IWindowsMediaLibrarySharingServices_get_allowSharingToAllDevices(This,sharingEnabled) ( (This)->lpVtbl -> get_allowSharingToAllDevices(This,sharingEnabled) )
#define IWindowsMediaLibrarySharingServices_put_allowSharingToAllDevices(This,sharingEnabled) ( (This)->lpVtbl -> put_allowSharingToAllDevices(This,sharingEnabled) )
#define IWindowsMediaLibrarySharingServices_setDefaultAuthorization(This,MACAddresses,friendlyName,authorization) ( (This)->lpVtbl -> setDefaultAuthorization(This,MACAddresses,friendlyName,authorization) )
#define IWindowsMediaLibrarySharingServices_setAuthorizationState(This,MACAddress,authorizationState) ( (This)->lpVtbl -> setAuthorizationState(This,MACAddress,authorizationState) )
#define IWindowsMediaLibrarySharingServices_getAllDevices(This,devices) ( (This)->lpVtbl -> getAllDevices(This,devices) )
#define IWindowsMediaLibrarySharingServices_get_customSettingsApplied(This,customSettingsApplied) ( (This)->lpVtbl -> get_customSettingsApplied(This,customSettingsApplied) )
#endif
#endif
extern const CLSID CLSID_WindowsMediaLibrarySharingServices;
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_wmlss_0001_0068_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmlss_0001_0068_v0_0_s_ifspec;
#endif
