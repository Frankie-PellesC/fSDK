/*+@@file@@----------------------------------------------------------------*//*!
 \file		locationapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 23:53:59 2016
 \date		Modified on Sun Jul 17 23:53:59 2016
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
#ifndef __locationapi_h__
#define __locationapi_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ILocationReport_FWD_DEFINED__
#define __ILocationReport_FWD_DEFINED__
typedef interface ILocationReport ILocationReport;
#endif
#ifndef __ILatLongReport_FWD_DEFINED__
#define __ILatLongReport_FWD_DEFINED__
typedef interface ILatLongReport ILatLongReport;
#endif
#ifndef __ICivicAddressReport_FWD_DEFINED__
#define __ICivicAddressReport_FWD_DEFINED__
typedef interface ICivicAddressReport ICivicAddressReport;
#endif
#ifndef __ILocation_FWD_DEFINED__
#define __ILocation_FWD_DEFINED__
typedef interface ILocation ILocation;
#endif
#ifndef __IDefaultLocation_FWD_DEFINED__
#define __IDefaultLocation_FWD_DEFINED__
typedef interface IDefaultLocation IDefaultLocation;
#endif
#ifndef __ILocationEvents_FWD_DEFINED__
#define __ILocationEvents_FWD_DEFINED__
typedef interface ILocationEvents ILocationEvents;
#endif
#ifndef __IDispLatLongReport_FWD_DEFINED__
#define __IDispLatLongReport_FWD_DEFINED__
typedef interface IDispLatLongReport IDispLatLongReport;
#endif
#ifndef __IDispCivicAddressReport_FWD_DEFINED__
#define __IDispCivicAddressReport_FWD_DEFINED__
typedef interface IDispCivicAddressReport IDispCivicAddressReport;
#endif
#ifndef __ILocationReportFactory_FWD_DEFINED__
#define __ILocationReportFactory_FWD_DEFINED__
typedef interface ILocationReportFactory ILocationReportFactory;
#endif
#ifndef __ILatLongReportFactory_FWD_DEFINED__
#define __ILatLongReportFactory_FWD_DEFINED__
typedef interface ILatLongReportFactory ILatLongReportFactory;
#endif
#ifndef __ICivicAddressReportFactory_FWD_DEFINED__
#define __ICivicAddressReportFactory_FWD_DEFINED__
typedef interface ICivicAddressReportFactory ICivicAddressReportFactory;
#endif
#ifndef __Location_FWD_DEFINED__
#define __Location_FWD_DEFINED__
typedef struct Location Location;
#endif
#ifndef __DefaultLocation_FWD_DEFINED__
#define __DefaultLocation_FWD_DEFINED__
typedef struct DefaultLocation DefaultLocation;
#endif
#ifndef __LatLongReport_FWD_DEFINED__
#define __LatLongReport_FWD_DEFINED__
typedef struct LatLongReport LatLongReport;
#endif
#ifndef __CivicAddressReport_FWD_DEFINED__
#define __CivicAddressReport_FWD_DEFINED__
typedef struct CivicAddressReport CivicAddressReport;
#endif
#ifndef ___ILatLongReportFactoryEvents_FWD_DEFINED__
#define ___ILatLongReportFactoryEvents_FWD_DEFINED__
typedef interface _ILatLongReportFactoryEvents _ILatLongReportFactoryEvents;
#endif
#ifndef ___ICivicAddressReportFactoryEvents_FWD_DEFINED__
#define ___ICivicAddressReportFactoryEvents_FWD_DEFINED__
typedef interface _ICivicAddressReportFactoryEvents _ICivicAddressReportFactoryEvents;
#endif
#ifndef __LatLongReportFactory_FWD_DEFINED__
#define __LatLongReportFactory_FWD_DEFINED__
typedef struct LatLongReportFactory LatLongReportFactory;
#endif
#ifndef __CivicAddressReportFactory_FWD_DEFINED__
#define __CivicAddressReportFactory_FWD_DEFINED__
typedef struct CivicAddressReportFactory CivicAddressReportFactory;
#endif
#ifndef __DispLatLongReport_FWD_DEFINED__
#define __DispLatLongReport_FWD_DEFINED__
typedef struct DispLatLongReport DispLatLongReport;
#endif
#ifndef __DispCivicAddressReport_FWD_DEFINED__
#define __DispCivicAddressReport_FWD_DEFINED__
typedef struct DispCivicAddressReport DispCivicAddressReport;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "SensorsApi.h"
#include <SensorsApi.h>
#include <initguid.h>
#include <propkeydef.h>
#define LOCATION_API_VERSION    1
typedef enum LOCATION_REPORT_STATUS
{
	REPORT_NOT_SUPPORTED = 0,
	REPORT_ERROR = 1,
	REPORT_ACCESS_DENIED = 2,
	REPORT_INITIALIZING = 3,
	REPORT_RUNNING = 4
} LOCATION_REPORT_STATUS;
extern RPC_IF_HANDLE __MIDL_itf_locationapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_locationapi_0000_0000_v0_0_s_ifspec;
#ifndef __ILocationReport_INTERFACE_DEFINED__
#define __ILocationReport_INTERFACE_DEFINED__
extern const IID IID_ILocationReport;
typedef struct ILocationReportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILocationReport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILocationReport * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILocationReport * This);
	HRESULT(STDMETHODCALLTYPE * GetSensorID) (ILocationReport * This, SENSOR_ID * pSensorID);
	HRESULT(STDMETHODCALLTYPE * GetTimestamp) (ILocationReport * This, SYSTEMTIME * pCreationTime);
	HRESULT(STDMETHODCALLTYPE * GetValue) (ILocationReport * This, REFPROPERTYKEY pKey, PROPVARIANT * pValue);
	END_INTERFACE
}  ILocationReportVtbl;
interface ILocationReport
{
	CONST_VTBL struct ILocationReportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILocationReport_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILocationReport_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ILocationReport_Release(This)( (This)->lpVtbl -> Release(This) )
#define ILocationReport_GetSensorID(This,pSensorID)( (This)->lpVtbl -> GetSensorID(This,pSensorID) )
#define ILocationReport_GetTimestamp(This,pCreationTime)( (This)->lpVtbl -> GetTimestamp(This,pCreationTime) )
#define ILocationReport_GetValue(This,pKey,pValue)( (This)->lpVtbl -> GetValue(This,pKey,pValue) )
#endif
#endif
#ifndef __ILatLongReport_INTERFACE_DEFINED__
#define __ILatLongReport_INTERFACE_DEFINED__
extern const IID IID_ILatLongReport;
typedef struct ILatLongReportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILatLongReport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILatLongReport * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILatLongReport * This);
	HRESULT(STDMETHODCALLTYPE * GetSensorID) (ILatLongReport * This, SENSOR_ID * pSensorID);
	HRESULT(STDMETHODCALLTYPE * GetTimestamp) (ILatLongReport * This, SYSTEMTIME * pCreationTime);
	HRESULT(STDMETHODCALLTYPE * GetValue) (ILatLongReport * This, REFPROPERTYKEY pKey, PROPVARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * GetLatitude) (ILatLongReport * This, DOUBLE * pLatitude);
	HRESULT(STDMETHODCALLTYPE * GetLongitude) (ILatLongReport * This, DOUBLE * pLongitude);
	HRESULT(STDMETHODCALLTYPE * GetErrorRadius) (ILatLongReport * This, DOUBLE * pErrorRadius);
	HRESULT(STDMETHODCALLTYPE * GetAltitude) (ILatLongReport * This, DOUBLE * pAltitude);
	HRESULT(STDMETHODCALLTYPE * GetAltitudeError) (ILatLongReport * This, DOUBLE * pAltitudeError);
	END_INTERFACE
}  ILatLongReportVtbl;
interface ILatLongReport
{
	CONST_VTBL struct ILatLongReportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILatLongReport_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILatLongReport_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ILatLongReport_Release(This)( (This)->lpVtbl -> Release(This) )
#define ILatLongReport_GetSensorID(This,pSensorID)( (This)->lpVtbl -> GetSensorID(This,pSensorID) )
#define ILatLongReport_GetTimestamp(This,pCreationTime)( (This)->lpVtbl -> GetTimestamp(This,pCreationTime) )
#define ILatLongReport_GetValue(This,pKey,pValue)( (This)->lpVtbl -> GetValue(This,pKey,pValue) )
#define ILatLongReport_GetLatitude(This,pLatitude)( (This)->lpVtbl -> GetLatitude(This,pLatitude) )
#define ILatLongReport_GetLongitude(This,pLongitude)( (This)->lpVtbl -> GetLongitude(This,pLongitude) )
#define ILatLongReport_GetErrorRadius(This,pErrorRadius)( (This)->lpVtbl -> GetErrorRadius(This,pErrorRadius) )
#define ILatLongReport_GetAltitude(This,pAltitude)( (This)->lpVtbl -> GetAltitude(This,pAltitude) )
#define ILatLongReport_GetAltitudeError(This,pAltitudeError)( (This)->lpVtbl -> GetAltitudeError(This,pAltitudeError) )
#endif
#endif
#ifndef __ICivicAddressReport_INTERFACE_DEFINED__
#define __ICivicAddressReport_INTERFACE_DEFINED__
extern const IID IID_ICivicAddressReport;
typedef struct ICivicAddressReportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICivicAddressReport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICivicAddressReport * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICivicAddressReport * This);
	HRESULT(STDMETHODCALLTYPE * GetSensorID) (ICivicAddressReport * This, SENSOR_ID * pSensorID);
	HRESULT(STDMETHODCALLTYPE * GetTimestamp) (ICivicAddressReport * This, SYSTEMTIME * pCreationTime);
	HRESULT(STDMETHODCALLTYPE * GetValue) (ICivicAddressReport * This, REFPROPERTYKEY pKey, PROPVARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * GetAddressLine1) (ICivicAddressReport * This, BSTR * pbstrAddress1);
	HRESULT(STDMETHODCALLTYPE * GetAddressLine2) (ICivicAddressReport * This, BSTR * pbstrAddress2);
	HRESULT(STDMETHODCALLTYPE * GetCity) (ICivicAddressReport * This, BSTR * pbstrCity);
	HRESULT(STDMETHODCALLTYPE * GetStateProvince) (ICivicAddressReport * This, BSTR * pbstrStateProvince);
	HRESULT(STDMETHODCALLTYPE * GetPostalCode) (ICivicAddressReport * This, BSTR * pbstrPostalCode);
	HRESULT(STDMETHODCALLTYPE * GetCountryRegion) (ICivicAddressReport * This, BSTR * pbstrCountryRegion);
	HRESULT(STDMETHODCALLTYPE * GetDetailLevel) (ICivicAddressReport * This, DWORD * pDetailLevel);
	END_INTERFACE
}  ICivicAddressReportVtbl;
interface ICivicAddressReport
{
	CONST_VTBL struct ICivicAddressReportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICivicAddressReport_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICivicAddressReport_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICivicAddressReport_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICivicAddressReport_GetSensorID(This,pSensorID)( (This)->lpVtbl -> GetSensorID(This,pSensorID) )
#define ICivicAddressReport_GetTimestamp(This,pCreationTime)( (This)->lpVtbl -> GetTimestamp(This,pCreationTime) )
#define ICivicAddressReport_GetValue(This,pKey,pValue)( (This)->lpVtbl -> GetValue(This,pKey,pValue) )
#define ICivicAddressReport_GetAddressLine1(This,pbstrAddress1)( (This)->lpVtbl -> GetAddressLine1(This,pbstrAddress1) )
#define ICivicAddressReport_GetAddressLine2(This,pbstrAddress2)( (This)->lpVtbl -> GetAddressLine2(This,pbstrAddress2) )
#define ICivicAddressReport_GetCity(This,pbstrCity)( (This)->lpVtbl -> GetCity(This,pbstrCity) )
#define ICivicAddressReport_GetStateProvince(This,pbstrStateProvince)( (This)->lpVtbl -> GetStateProvince(This,pbstrStateProvince) )
#define ICivicAddressReport_GetPostalCode(This,pbstrPostalCode)( (This)->lpVtbl -> GetPostalCode(This,pbstrPostalCode) )
#define ICivicAddressReport_GetCountryRegion(This,pbstrCountryRegion)( (This)->lpVtbl -> GetCountryRegion(This,pbstrCountryRegion) )
#define ICivicAddressReport_GetDetailLevel(This,pDetailLevel)( (This)->lpVtbl -> GetDetailLevel(This,pDetailLevel) )
#endif
#endif
#ifndef __ILocation_INTERFACE_DEFINED__
#define __ILocation_INTERFACE_DEFINED__
extern const IID IID_ILocation;
typedef struct ILocationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILocation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILocation * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILocation * This);
	HRESULT(STDMETHODCALLTYPE * RegisterForReport) (ILocation * This, ILocationEvents * pEvents, REFIID reportType, DWORD dwRequestedReportInterval);
	HRESULT(STDMETHODCALLTYPE * UnregisterForReport) (ILocation * This, REFIID reportType);
	HRESULT(STDMETHODCALLTYPE * GetReport) (ILocation * This, REFIID reportType, ILocationReport ** ppLocationReport);
	HRESULT(STDMETHODCALLTYPE * GetReportStatus) (ILocation * This, REFIID reportType, enum LOCATION_REPORT_STATUS * pStatus);
	HRESULT(STDMETHODCALLTYPE * GetReportInterval) (ILocation * This, REFIID reportType, DWORD * pMilliseconds);
	HRESULT(STDMETHODCALLTYPE * SetReportInterval) (ILocation * This, REFIID reportType, DWORD millisecondsRequested);
	HRESULT(STDMETHODCALLTYPE * GetDesiredAccuracy) (ILocation * This, REFIID reportType, enum LOCATION_DESIRED_ACCURACY * pDesiredAccuracy);
	HRESULT(STDMETHODCALLTYPE * SetDesiredAccuracy) (ILocation * This, REFIID reportType, enum LOCATION_DESIRED_ACCURACY desiredAccuracy);
	HRESULT(STDMETHODCALLTYPE * RequestPermissions) (ILocation * This, HWND hParent, IID * pReportTypes, ULONG count, BOOL fModal);
	END_INTERFACE
}  ILocationVtbl;
interface ILocation
{
	CONST_VTBL struct ILocationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILocation_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILocation_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ILocation_Release(This)( (This)->lpVtbl -> Release(This) )
#define ILocation_RegisterForReport(This,pEvents,reportType,dwRequestedReportInterval)( (This)->lpVtbl -> RegisterForReport(This,pEvents,reportType,dwRequestedReportInterval) )
#define ILocation_UnregisterForReport(This,reportType)( (This)->lpVtbl -> UnregisterForReport(This,reportType) )
#define ILocation_GetReport(This,reportType,ppLocationReport)( (This)->lpVtbl -> GetReport(This,reportType,ppLocationReport) )
#define ILocation_GetReportStatus(This,reportType,pStatus)( (This)->lpVtbl -> GetReportStatus(This,reportType,pStatus) )
#define ILocation_GetReportInterval(This,reportType,pMilliseconds)( (This)->lpVtbl -> GetReportInterval(This,reportType,pMilliseconds) )
#define ILocation_SetReportInterval(This,reportType,millisecondsRequested)( (This)->lpVtbl -> SetReportInterval(This,reportType,millisecondsRequested) )
#define ILocation_GetDesiredAccuracy(This,reportType,pDesiredAccuracy)( (This)->lpVtbl -> GetDesiredAccuracy(This,reportType,pDesiredAccuracy) )
#define ILocation_SetDesiredAccuracy(This,reportType,desiredAccuracy)( (This)->lpVtbl -> SetDesiredAccuracy(This,reportType,desiredAccuracy) )
#define ILocation_RequestPermissions(This,hParent,pReportTypes,count,fModal)( (This)->lpVtbl -> RequestPermissions(This,hParent,pReportTypes,count,fModal) )
#endif
#endif
#ifndef __IDefaultLocation_INTERFACE_DEFINED__
#define __IDefaultLocation_INTERFACE_DEFINED__
extern const IID IID_IDefaultLocation;
typedef struct IDefaultLocationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDefaultLocation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDefaultLocation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDefaultLocation * This);
	HRESULT(STDMETHODCALLTYPE * SetReport) (IDefaultLocation * This, REFIID reportType, ILocationReport * pLocationReport);
	HRESULT(STDMETHODCALLTYPE * GetReport) (IDefaultLocation * This, REFIID reportType, ILocationReport ** ppLocationReport);
	END_INTERFACE
}  IDefaultLocationVtbl;
interface IDefaultLocation
{
	CONST_VTBL struct IDefaultLocationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDefaultLocation_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDefaultLocation_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDefaultLocation_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDefaultLocation_SetReport(This,reportType,pLocationReport)( (This)->lpVtbl -> SetReport(This,reportType,pLocationReport) )
#define IDefaultLocation_GetReport(This,reportType,ppLocationReport)( (This)->lpVtbl -> GetReport(This,reportType,ppLocationReport) )
#endif
#endif
#ifndef __ILocationEvents_INTERFACE_DEFINED__
#define __ILocationEvents_INTERFACE_DEFINED__
extern const IID IID_ILocationEvents;
typedef struct ILocationEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILocationEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILocationEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILocationEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnLocationChanged) (ILocationEvents * This, REFIID reportType, ILocationReport * pLocationReport);
	HRESULT(STDMETHODCALLTYPE * OnStatusChanged) (ILocationEvents * This, REFIID reportType, LOCATION_REPORT_STATUS newStatus);
	END_INTERFACE
}  ILocationEventsVtbl;
interface ILocationEvents
{
	CONST_VTBL struct ILocationEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILocationEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILocationEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ILocationEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define ILocationEvents_OnLocationChanged(This,reportType,pLocationReport)( (This)->lpVtbl -> OnLocationChanged(This,reportType,pLocationReport) )
#define ILocationEvents_OnStatusChanged(This,reportType,newStatus)( (This)->lpVtbl -> OnStatusChanged(This,reportType,newStatus) )
#endif
#endif
#ifndef __IDispLatLongReport_INTERFACE_DEFINED__
#define __IDispLatLongReport_INTERFACE_DEFINED__
extern const IID IID_IDispLatLongReport;
typedef struct IDispLatLongReportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDispLatLongReport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDispLatLongReport * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDispLatLongReport * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDispLatLongReport * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDispLatLongReport * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDispLatLongReport * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDispLatLongReport * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Latitude) (IDispLatLongReport * This, DOUBLE * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Longitude) (IDispLatLongReport * This, DOUBLE * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ErrorRadius) (IDispLatLongReport * This, DOUBLE * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Altitude) (IDispLatLongReport * This, DOUBLE * pVal);
	HRESULT(STDMETHODCALLTYPE * get_AltitudeError) (IDispLatLongReport * This, DOUBLE * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Timestamp) (IDispLatLongReport * This, DATE * pVal);
	END_INTERFACE
}  IDispLatLongReportVtbl;
interface IDispLatLongReport
{
	CONST_VTBL struct IDispLatLongReportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDispLatLongReport_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDispLatLongReport_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDispLatLongReport_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDispLatLongReport_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDispLatLongReport_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDispLatLongReport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDispLatLongReport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDispLatLongReport_get_Latitude(This,pVal)( (This)->lpVtbl -> get_Latitude(This,pVal) )
#define IDispLatLongReport_get_Longitude(This,pVal)( (This)->lpVtbl -> get_Longitude(This,pVal) )
#define IDispLatLongReport_get_ErrorRadius(This,pVal)( (This)->lpVtbl -> get_ErrorRadius(This,pVal) )
#define IDispLatLongReport_get_Altitude(This,pVal)( (This)->lpVtbl -> get_Altitude(This,pVal) )
#define IDispLatLongReport_get_AltitudeError(This,pVal)( (This)->lpVtbl -> get_AltitudeError(This,pVal) )
#define IDispLatLongReport_get_Timestamp(This,pVal)( (This)->lpVtbl -> get_Timestamp(This,pVal) )
#endif
#endif
#ifndef __IDispCivicAddressReport_INTERFACE_DEFINED__
#define __IDispCivicAddressReport_INTERFACE_DEFINED__
extern const IID IID_IDispCivicAddressReport;
typedef struct IDispCivicAddressReportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDispCivicAddressReport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDispCivicAddressReport * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDispCivicAddressReport * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDispCivicAddressReport * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDispCivicAddressReport * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDispCivicAddressReport * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDispCivicAddressReport * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_AddressLine1) (IDispCivicAddressReport * This, BSTR * pAddress1);
	HRESULT(STDMETHODCALLTYPE * get_AddressLine2) (IDispCivicAddressReport * This, BSTR * pAddress2);
	HRESULT(STDMETHODCALLTYPE * get_City) (IDispCivicAddressReport * This, BSTR * pCity);
	HRESULT(STDMETHODCALLTYPE * get_StateProvince) (IDispCivicAddressReport * This, BSTR * pStateProvince);
	HRESULT(STDMETHODCALLTYPE * get_PostalCode) (IDispCivicAddressReport * This, BSTR * pPostalCode);
	HRESULT(STDMETHODCALLTYPE * get_CountryRegion) (IDispCivicAddressReport * This, BSTR * pCountryRegion);
	HRESULT(STDMETHODCALLTYPE * get_DetailLevel) (IDispCivicAddressReport * This, ULONG * pDetailLevel);
	HRESULT(STDMETHODCALLTYPE * get_Timestamp) (IDispCivicAddressReport * This, DATE * pVal);
	END_INTERFACE
}  IDispCivicAddressReportVtbl;
interface IDispCivicAddressReport
{
	CONST_VTBL struct IDispCivicAddressReportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDispCivicAddressReport_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDispCivicAddressReport_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDispCivicAddressReport_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDispCivicAddressReport_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDispCivicAddressReport_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDispCivicAddressReport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDispCivicAddressReport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDispCivicAddressReport_get_AddressLine1(This,pAddress1)( (This)->lpVtbl -> get_AddressLine1(This,pAddress1) )
#define IDispCivicAddressReport_get_AddressLine2(This,pAddress2)( (This)->lpVtbl -> get_AddressLine2(This,pAddress2) )
#define IDispCivicAddressReport_get_City(This,pCity)( (This)->lpVtbl -> get_City(This,pCity) )
#define IDispCivicAddressReport_get_StateProvince(This,pStateProvince)( (This)->lpVtbl -> get_StateProvince(This,pStateProvince) )
#define IDispCivicAddressReport_get_PostalCode(This,pPostalCode)( (This)->lpVtbl -> get_PostalCode(This,pPostalCode) )
#define IDispCivicAddressReport_get_CountryRegion(This,pCountryRegion)( (This)->lpVtbl -> get_CountryRegion(This,pCountryRegion) )
#define IDispCivicAddressReport_get_DetailLevel(This,pDetailLevel)( (This)->lpVtbl -> get_DetailLevel(This,pDetailLevel) )
#define IDispCivicAddressReport_get_Timestamp(This,pVal)( (This)->lpVtbl -> get_Timestamp(This,pVal) )
#endif
#endif
#ifndef __ILocationReportFactory_INTERFACE_DEFINED__
#define __ILocationReportFactory_INTERFACE_DEFINED__
extern const IID IID_ILocationReportFactory;
typedef struct ILocationReportFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILocationReportFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILocationReportFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILocationReportFactory * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ILocationReportFactory * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ILocationReportFactory * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ILocationReportFactory * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ILocationReportFactory * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * ListenForReports) (ILocationReportFactory * This, ULONG requestedReportInterval);
	HRESULT(STDMETHODCALLTYPE * StopListeningForReports) (ILocationReportFactory * This);
	HRESULT(STDMETHODCALLTYPE * get_Status) (ILocationReportFactory * This, ULONG * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ReportInterval) (ILocationReportFactory * This, ULONG * pMilliseconds);
	HRESULT(STDMETHODCALLTYPE * put_ReportInterval) (ILocationReportFactory * This, ULONG millisecondsRequested);
	HRESULT(STDMETHODCALLTYPE * get_DesiredAccuracy) (ILocationReportFactory * This, ULONG * pDesiredAccuracy);
	HRESULT(STDMETHODCALLTYPE * put_DesiredAccuracy) (ILocationReportFactory * This, ULONG desiredAccuracy);
	HRESULT(STDMETHODCALLTYPE * RequestPermissions) (ILocationReportFactory * This, ULONG * hWnd);
	END_INTERFACE
}  ILocationReportFactoryVtbl;
interface ILocationReportFactory
{
	CONST_VTBL struct ILocationReportFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILocationReportFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILocationReportFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ILocationReportFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define ILocationReportFactory_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ILocationReportFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ILocationReportFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ILocationReportFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ILocationReportFactory_ListenForReports(This,requestedReportInterval)( (This)->lpVtbl -> ListenForReports(This,requestedReportInterval) )
#define ILocationReportFactory_StopListeningForReports(This)( (This)->lpVtbl -> StopListeningForReports(This) )
#define ILocationReportFactory_get_Status(This,pVal)( (This)->lpVtbl -> get_Status(This,pVal) )
#define ILocationReportFactory_get_ReportInterval(This,pMilliseconds)( (This)->lpVtbl -> get_ReportInterval(This,pMilliseconds) )
#define ILocationReportFactory_put_ReportInterval(This,millisecondsRequested)( (This)->lpVtbl -> put_ReportInterval(This,millisecondsRequested) )
#define ILocationReportFactory_get_DesiredAccuracy(This,pDesiredAccuracy)( (This)->lpVtbl -> get_DesiredAccuracy(This,pDesiredAccuracy) )
#define ILocationReportFactory_put_DesiredAccuracy(This,desiredAccuracy)( (This)->lpVtbl -> put_DesiredAccuracy(This,desiredAccuracy) )
#define ILocationReportFactory_RequestPermissions(This,hWnd)( (This)->lpVtbl -> RequestPermissions(This,hWnd) )
#endif
#endif
#ifndef __ILatLongReportFactory_INTERFACE_DEFINED__
#define __ILatLongReportFactory_INTERFACE_DEFINED__
extern const IID IID_ILatLongReportFactory;
typedef struct ILatLongReportFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILatLongReportFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILatLongReportFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILatLongReportFactory * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ILatLongReportFactory * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ILatLongReportFactory * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ILatLongReportFactory * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ILatLongReportFactory * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * ListenForReports) (ILatLongReportFactory * This, ULONG requestedReportInterval);
	HRESULT(STDMETHODCALLTYPE * StopListeningForReports) (ILatLongReportFactory * This);
	HRESULT(STDMETHODCALLTYPE * get_Status) (ILatLongReportFactory * This, ULONG * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ReportInterval) (ILatLongReportFactory * This, ULONG * pMilliseconds);
	HRESULT(STDMETHODCALLTYPE * put_ReportInterval) (ILatLongReportFactory * This, ULONG millisecondsRequested);
	HRESULT(STDMETHODCALLTYPE * get_DesiredAccuracy) (ILatLongReportFactory * This, ULONG * pDesiredAccuracy);
	HRESULT(STDMETHODCALLTYPE * put_DesiredAccuracy) (ILatLongReportFactory * This, ULONG desiredAccuracy);
	HRESULT(STDMETHODCALLTYPE * RequestPermissions) (ILatLongReportFactory * This, ULONG * hWnd);
	HRESULT(STDMETHODCALLTYPE * get_LatLongReport) (ILatLongReportFactory * This, IDispLatLongReport ** pVal);
	END_INTERFACE
}  ILatLongReportFactoryVtbl;
interface ILatLongReportFactory
{
	CONST_VTBL struct ILatLongReportFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILatLongReportFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILatLongReportFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ILatLongReportFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define ILatLongReportFactory_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ILatLongReportFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ILatLongReportFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ILatLongReportFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ILatLongReportFactory_ListenForReports(This,requestedReportInterval)( (This)->lpVtbl -> ListenForReports(This,requestedReportInterval) )
#define ILatLongReportFactory_StopListeningForReports(This)( (This)->lpVtbl -> StopListeningForReports(This) )
#define ILatLongReportFactory_get_Status(This,pVal)( (This)->lpVtbl -> get_Status(This,pVal) )
#define ILatLongReportFactory_get_ReportInterval(This,pMilliseconds)( (This)->lpVtbl -> get_ReportInterval(This,pMilliseconds) )
#define ILatLongReportFactory_put_ReportInterval(This,millisecondsRequested)( (This)->lpVtbl -> put_ReportInterval(This,millisecondsRequested) )
#define ILatLongReportFactory_get_DesiredAccuracy(This,pDesiredAccuracy)( (This)->lpVtbl -> get_DesiredAccuracy(This,pDesiredAccuracy) )
#define ILatLongReportFactory_put_DesiredAccuracy(This,desiredAccuracy)( (This)->lpVtbl -> put_DesiredAccuracy(This,desiredAccuracy) )
#define ILatLongReportFactory_RequestPermissions(This,hWnd)( (This)->lpVtbl -> RequestPermissions(This,hWnd) )
#define ILatLongReportFactory_get_LatLongReport(This,pVal)( (This)->lpVtbl -> get_LatLongReport(This,pVal) )
#endif
#endif
#ifndef __ICivicAddressReportFactory_INTERFACE_DEFINED__
#define __ICivicAddressReportFactory_INTERFACE_DEFINED__
extern const IID IID_ICivicAddressReportFactory;
typedef struct ICivicAddressReportFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICivicAddressReportFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICivicAddressReportFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICivicAddressReportFactory * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICivicAddressReportFactory * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICivicAddressReportFactory * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICivicAddressReportFactory * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICivicAddressReportFactory * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * ListenForReports) (ICivicAddressReportFactory * This, ULONG requestedReportInterval);
	HRESULT(STDMETHODCALLTYPE * StopListeningForReports) (ICivicAddressReportFactory * This);
	HRESULT(STDMETHODCALLTYPE * get_Status) (ICivicAddressReportFactory * This, ULONG * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ReportInterval) (ICivicAddressReportFactory * This, ULONG * pMilliseconds);
	HRESULT(STDMETHODCALLTYPE * put_ReportInterval) (ICivicAddressReportFactory * This, ULONG millisecondsRequested);
	HRESULT(STDMETHODCALLTYPE * get_DesiredAccuracy) (ICivicAddressReportFactory * This, ULONG * pDesiredAccuracy);
	HRESULT(STDMETHODCALLTYPE * put_DesiredAccuracy) (ICivicAddressReportFactory * This, ULONG desiredAccuracy);
	HRESULT(STDMETHODCALLTYPE * RequestPermissions) (ICivicAddressReportFactory * This, ULONG * hWnd);
	HRESULT(STDMETHODCALLTYPE * get_CivicAddressReport) (ICivicAddressReportFactory * This, IDispCivicAddressReport ** pVal);
	END_INTERFACE
}  ICivicAddressReportFactoryVtbl;
interface ICivicAddressReportFactory
{
	CONST_VTBL struct ICivicAddressReportFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICivicAddressReportFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICivicAddressReportFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICivicAddressReportFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICivicAddressReportFactory_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICivicAddressReportFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICivicAddressReportFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICivicAddressReportFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICivicAddressReportFactory_ListenForReports(This,requestedReportInterval)( (This)->lpVtbl -> ListenForReports(This,requestedReportInterval) )
#define ICivicAddressReportFactory_StopListeningForReports(This)( (This)->lpVtbl -> StopListeningForReports(This) )
#define ICivicAddressReportFactory_get_Status(This,pVal)( (This)->lpVtbl -> get_Status(This,pVal) )
#define ICivicAddressReportFactory_get_ReportInterval(This,pMilliseconds)( (This)->lpVtbl -> get_ReportInterval(This,pMilliseconds) )
#define ICivicAddressReportFactory_put_ReportInterval(This,millisecondsRequested)( (This)->lpVtbl -> put_ReportInterval(This,millisecondsRequested) )
#define ICivicAddressReportFactory_get_DesiredAccuracy(This,pDesiredAccuracy)( (This)->lpVtbl -> get_DesiredAccuracy(This,pDesiredAccuracy) )
#define ICivicAddressReportFactory_put_DesiredAccuracy(This,desiredAccuracy)( (This)->lpVtbl -> put_DesiredAccuracy(This,desiredAccuracy) )
#define ICivicAddressReportFactory_RequestPermissions(This,hWnd)( (This)->lpVtbl -> RequestPermissions(This,hWnd) )
#define ICivicAddressReportFactory_get_CivicAddressReport(This,pVal)( (This)->lpVtbl -> get_CivicAddressReport(This,pVal) )
#endif
#endif
#ifndef __LocationApiLib_LIBRARY_DEFINED__
#define __LocationApiLib_LIBRARY_DEFINED__
extern const IID LIBID_LocationApiLib;
extern const CLSID CLSID_Location;
extern const CLSID CLSID_DefaultLocation;
extern const CLSID CLSID_LatLongReport;
extern const CLSID CLSID_CivicAddressReport;
#ifndef ___ILatLongReportFactoryEvents_DISPINTERFACE_DEFINED__
#define ___ILatLongReportFactoryEvents_DISPINTERFACE_DEFINED__
extern const IID DIID__ILatLongReportFactoryEvents;
typedef struct _ILatLongReportFactoryEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_ILatLongReportFactoryEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_ILatLongReportFactoryEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (_ILatLongReportFactoryEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_ILatLongReportFactoryEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_ILatLongReportFactoryEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_ILatLongReportFactoryEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_ILatLongReportFactoryEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  _ILatLongReportFactoryEventsVtbl;
interface _ILatLongReportFactoryEvents
{
	CONST_VTBL struct _ILatLongReportFactoryEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _ILatLongReportFactoryEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _ILatLongReportFactoryEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define _ILatLongReportFactoryEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define _ILatLongReportFactoryEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _ILatLongReportFactoryEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _ILatLongReportFactoryEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _ILatLongReportFactoryEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef ___ICivicAddressReportFactoryEvents_DISPINTERFACE_DEFINED__
#define ___ICivicAddressReportFactoryEvents_DISPINTERFACE_DEFINED__
extern const IID DIID__ICivicAddressReportFactoryEvents;
typedef struct _ICivicAddressReportFactoryEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_ICivicAddressReportFactoryEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_ICivicAddressReportFactoryEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (_ICivicAddressReportFactoryEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_ICivicAddressReportFactoryEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_ICivicAddressReportFactoryEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_ICivicAddressReportFactoryEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_ICivicAddressReportFactoryEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  _ICivicAddressReportFactoryEventsVtbl;
interface _ICivicAddressReportFactoryEvents
{
	CONST_VTBL struct _ICivicAddressReportFactoryEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _ICivicAddressReportFactoryEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _ICivicAddressReportFactoryEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define _ICivicAddressReportFactoryEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define _ICivicAddressReportFactoryEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _ICivicAddressReportFactoryEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _ICivicAddressReportFactoryEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _ICivicAddressReportFactoryEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_LatLongReportFactory;
extern const CLSID CLSID_CivicAddressReportFactory;
extern const CLSID CLSID_DispLatLongReport;
extern const CLSID CLSID_DispCivicAddressReport;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
#endif
