/*+@@file@@----------------------------------------------------------------*//*!
 \file		SensorsApi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 23:58:14 2016
 \date		Modified on Sun Jul 17 23:58:14 2016
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
#ifndef __sensorsapi_h__
#define __sensorsapi_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ISensorManager_FWD_DEFINED__
#define __ISensorManager_FWD_DEFINED__
typedef interface ISensorManager ISensorManager;
#endif
#ifndef __ISensorCollection_FWD_DEFINED__
#define __ISensorCollection_FWD_DEFINED__
typedef interface ISensorCollection ISensorCollection;
#endif
#ifndef __ISensor_FWD_DEFINED__
#define __ISensor_FWD_DEFINED__
typedef interface ISensor ISensor;
#endif
#ifndef __ISensorDataReport_FWD_DEFINED__
#define __ISensorDataReport_FWD_DEFINED__
typedef interface ISensorDataReport ISensorDataReport;
#endif
#ifndef __ISensorManagerEvents_FWD_DEFINED__
#define __ISensorManagerEvents_FWD_DEFINED__
typedef interface ISensorManagerEvents ISensorManagerEvents;
#endif
#ifndef __ISensorEvents_FWD_DEFINED__
#define __ISensorEvents_FWD_DEFINED__
typedef interface ISensorEvents ISensorEvents;
#endif
#ifndef __ILogicalSensorManager_FWD_DEFINED__
#define __ILogicalSensorManager_FWD_DEFINED__
typedef interface ILogicalSensorManager ILogicalSensorManager;
#endif
#ifndef __SensorManager_FWD_DEFINED__
#define __SensorManager_FWD_DEFINED__
typedef struct SensorManager SensorManager;
#endif
#ifndef __SensorCollection_FWD_DEFINED__
#define __SensorCollection_FWD_DEFINED__
typedef struct SensorCollection SensorCollection;
#endif
#ifndef __Sensor_FWD_DEFINED__
#define __Sensor_FWD_DEFINED__
typedef struct Sensor Sensor;
#endif
#ifndef __SensorDataReport_FWD_DEFINED__
#define __SensorDataReport_FWD_DEFINED__
typedef struct SensorDataReport SensorDataReport;
#endif
#ifndef __LogicalSensorManager_FWD_DEFINED__
#define __LogicalSensorManager_FWD_DEFINED__
typedef struct LogicalSensorManager LogicalSensorManager;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "propsys.h"
#include "PortableDeviceTypes.h"
typedef enum __MIDL___MIDL_itf_sensorsapi_0000_0000_0001
{
	SENSOR_STATE_MIN = 0,
	SENSOR_STATE_READY = SENSOR_STATE_MIN,
	SENSOR_STATE_NOT_AVAILABLE = (SENSOR_STATE_READY + 1),
	SENSOR_STATE_NO_DATA = (SENSOR_STATE_NOT_AVAILABLE + 1),
	SENSOR_STATE_INITIALIZING = (SENSOR_STATE_NO_DATA + 1),
	SENSOR_STATE_ACCESS_DENIED = (SENSOR_STATE_INITIALIZING + 1),
	SENSOR_STATE_ERROR = (SENSOR_STATE_ACCESS_DENIED + 1),
	SENSOR_STATE_MAX = SENSOR_STATE_ERROR
} SensorState;
typedef enum __MIDL___MIDL_itf_sensorsapi_0000_0000_0002
{
	SENSOR_CONNECTION_TYPE_PC_INTEGRATED = 0,
	SENSOR_CONNECTION_TYPE_PC_ATTACHED = (SENSOR_CONNECTION_TYPE_PC_INTEGRATED + 1),
	SENSOR_CONNECTION_TYPE_PC_EXTERNAL = (SENSOR_CONNECTION_TYPE_PC_ATTACHED + 1)
} SensorConnectionType;
typedef enum LOCATION_DESIRED_ACCURACY
{
	LOCATION_DESIRED_ACCURACY_DEFAULT = 0,
	LOCATION_DESIRED_ACCURACY_HIGH = (LOCATION_DESIRED_ACCURACY_DEFAULT + 1)
} LOCATION_DESIRED_ACCURACY;
typedef GUID SENSOR_CATEGORY_ID;
typedef REFGUID REFSENSOR_CATEGORY_ID;
typedef GUID SENSOR_TYPE_ID;
typedef REFGUID REFSENSOR_TYPE_ID;
typedef GUID SENSOR_ID;
typedef REFGUID REFSENSOR_ID;
extern RPC_IF_HANDLE __MIDL_itf_sensorsapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sensorsapi_0000_0000_v0_0_s_ifspec;
#ifndef __ISensorManager_INTERFACE_DEFINED__
#define __ISensorManager_INTERFACE_DEFINED__
extern const IID IID_ISensorManager;
typedef struct ISensorManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISensorManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISensorManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISensorManager * This);
	HRESULT(STDMETHODCALLTYPE * GetSensorsByCategory) (ISensorManager * This, REFSENSOR_CATEGORY_ID sensorCategory, ISensorCollection ** ppSensorsFound);
	HRESULT(STDMETHODCALLTYPE * GetSensorsByType) (ISensorManager * This, REFSENSOR_TYPE_ID sensorType, ISensorCollection ** ppSensorsFound);
	HRESULT(STDMETHODCALLTYPE * GetSensorByID) (ISensorManager * This, REFSENSOR_ID sensorID, ISensor ** ppSensor);
	HRESULT(STDMETHODCALLTYPE * SetEventSink) (ISensorManager * This, ISensorManagerEvents * pEvents);
	HRESULT(STDMETHODCALLTYPE * RequestPermissions) (ISensorManager * This, HWND hParent, ISensorCollection * pSensors, BOOL fModal);
	END_INTERFACE
}  ISensorManagerVtbl;
interface ISensorManager
{
	CONST_VTBL struct ISensorManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISensorManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISensorManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISensorManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISensorManager_GetSensorsByCategory(This,sensorCategory,ppSensorsFound)( (This)->lpVtbl -> GetSensorsByCategory(This,sensorCategory,ppSensorsFound) )
#define ISensorManager_GetSensorsByType(This,sensorType,ppSensorsFound)( (This)->lpVtbl -> GetSensorsByType(This,sensorType,ppSensorsFound) )
#define ISensorManager_GetSensorByID(This,sensorID,ppSensor)( (This)->lpVtbl -> GetSensorByID(This,sensorID,ppSensor) )
#define ISensorManager_SetEventSink(This,pEvents)( (This)->lpVtbl -> SetEventSink(This,pEvents) )
#define ISensorManager_RequestPermissions(This,hParent,pSensors,fModal)( (This)->lpVtbl -> RequestPermissions(This,hParent,pSensors,fModal) )
#endif
#endif
#ifndef __ISensorCollection_INTERFACE_DEFINED__
#define __ISensorCollection_INTERFACE_DEFINED__
extern const IID IID_ISensorCollection;
typedef struct ISensorCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISensorCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISensorCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISensorCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetAt) (ISensorCollection * This, ULONG ulIndex, ISensor ** ppSensor);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ISensorCollection * This, ULONG * pCount);
	HRESULT(STDMETHODCALLTYPE * Add) (ISensorCollection * This, ISensor * pSensor);
	HRESULT(STDMETHODCALLTYPE * Remove) (ISensorCollection * This, ISensor * pSensor);
	HRESULT(STDMETHODCALLTYPE * RemoveByID) (ISensorCollection * This, REFSENSOR_ID sensorID);
	HRESULT(STDMETHODCALLTYPE * Clear) (ISensorCollection * This);
	END_INTERFACE
}  ISensorCollectionVtbl;
interface ISensorCollection
{
	CONST_VTBL struct ISensorCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISensorCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISensorCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISensorCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISensorCollection_GetAt(This,ulIndex,ppSensor)( (This)->lpVtbl -> GetAt(This,ulIndex,ppSensor) )
#define ISensorCollection_GetCount(This,pCount)( (This)->lpVtbl -> GetCount(This,pCount) )
#define ISensorCollection_Add(This,pSensor)( (This)->lpVtbl -> Add(This,pSensor) )
#define ISensorCollection_Remove(This,pSensor)( (This)->lpVtbl -> Remove(This,pSensor) )
#define ISensorCollection_RemoveByID(This,sensorID)( (This)->lpVtbl -> RemoveByID(This,sensorID) )
#define ISensorCollection_Clear(This)( (This)->lpVtbl -> Clear(This) )
#endif
#endif
#ifndef __ISensor_INTERFACE_DEFINED__
#define __ISensor_INTERFACE_DEFINED__
extern const IID IID_ISensor;
typedef struct ISensorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISensor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISensor * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISensor * This);
	HRESULT(STDMETHODCALLTYPE * GetID) (ISensor * This, SENSOR_ID * pID);
	HRESULT(STDMETHODCALLTYPE * GetCategory) (ISensor * This, SENSOR_CATEGORY_ID * pSensorCategory);
	HRESULT(STDMETHODCALLTYPE * GetType) (ISensor * This, SENSOR_TYPE_ID * pSensorType);
	HRESULT(STDMETHODCALLTYPE * GetFriendlyName) (ISensor * This, BSTR * pFriendlyName);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (ISensor * This, REFPROPERTYKEY key, PROPVARIANT * pProperty);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (ISensor * This, IPortableDeviceKeyCollection * pKeys, IPortableDeviceValues ** ppProperties);
	HRESULT(STDMETHODCALLTYPE * GetSupportedDataFields) (ISensor * This, IPortableDeviceKeyCollection ** ppDataFields);
	HRESULT(STDMETHODCALLTYPE * SetProperties) (ISensor * This, IPortableDeviceValues * pProperties, IPortableDeviceValues ** ppResults);
	HRESULT(STDMETHODCALLTYPE * SupportsDataField) (ISensor * This, REFPROPERTYKEY key, VARIANT_BOOL * pIsSupported);
	HRESULT(STDMETHODCALLTYPE * GetState) (ISensor * This, SensorState * pState);
	HRESULT(STDMETHODCALLTYPE * GetData) (ISensor * This, ISensorDataReport ** ppDataReport);
	HRESULT(STDMETHODCALLTYPE * SupportsEvent) (ISensor * This, REFGUID eventGuid, VARIANT_BOOL * pIsSupported);
	HRESULT(STDMETHODCALLTYPE * GetEventInterest) (ISensor * This, GUID ** ppValues, ULONG * pCount);
	HRESULT(STDMETHODCALLTYPE * SetEventInterest) (ISensor * This, GUID * pValues, ULONG count);
	HRESULT(STDMETHODCALLTYPE * SetEventSink) (ISensor * This, ISensorEvents * pEvents);
	END_INTERFACE
}  ISensorVtbl;
interface ISensor
{
	CONST_VTBL struct ISensorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISensor_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISensor_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISensor_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISensor_GetID(This,pID)( (This)->lpVtbl -> GetID(This,pID) )
#define ISensor_GetCategory(This,pSensorCategory)( (This)->lpVtbl -> GetCategory(This,pSensorCategory) )
#define ISensor_GetType(This,pSensorType)( (This)->lpVtbl -> GetType(This,pSensorType) )
#define ISensor_GetFriendlyName(This,pFriendlyName)( (This)->lpVtbl -> GetFriendlyName(This,pFriendlyName) )
#define ISensor_GetProperty(This,key,pProperty)( (This)->lpVtbl -> GetProperty(This,key,pProperty) )
#define ISensor_GetProperties(This,pKeys,ppProperties)( (This)->lpVtbl -> GetProperties(This,pKeys,ppProperties) )
#define ISensor_GetSupportedDataFields(This,ppDataFields)( (This)->lpVtbl -> GetSupportedDataFields(This,ppDataFields) )
#define ISensor_SetProperties(This,pProperties,ppResults)( (This)->lpVtbl -> SetProperties(This,pProperties,ppResults) )
#define ISensor_SupportsDataField(This,key,pIsSupported)( (This)->lpVtbl -> SupportsDataField(This,key,pIsSupported) )
#define ISensor_GetState(This,pState)( (This)->lpVtbl -> GetState(This,pState) )
#define ISensor_GetData(This,ppDataReport)( (This)->lpVtbl -> GetData(This,ppDataReport) )
#define ISensor_SupportsEvent(This,eventGuid,pIsSupported)( (This)->lpVtbl -> SupportsEvent(This,eventGuid,pIsSupported) )
#define ISensor_GetEventInterest(This,ppValues,pCount)( (This)->lpVtbl -> GetEventInterest(This,ppValues,pCount) )
#define ISensor_SetEventInterest(This,pValues,count)( (This)->lpVtbl -> SetEventInterest(This,pValues,count) )
#define ISensor_SetEventSink(This,pEvents)( (This)->lpVtbl -> SetEventSink(This,pEvents) )
#endif
#endif
#ifndef __ISensorDataReport_INTERFACE_DEFINED__
#define __ISensorDataReport_INTERFACE_DEFINED__
extern const IID IID_ISensorDataReport;
typedef struct ISensorDataReportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISensorDataReport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISensorDataReport * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISensorDataReport * This);
	HRESULT(STDMETHODCALLTYPE * GetTimestamp) (ISensorDataReport * This, SYSTEMTIME * pTimeStamp);
	HRESULT(STDMETHODCALLTYPE * GetSensorValue) (ISensorDataReport * This, REFPROPERTYKEY pKey, PROPVARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * GetSensorValues) (ISensorDataReport * This, IPortableDeviceKeyCollection * pKeys, IPortableDeviceValues ** ppValues);
	END_INTERFACE
}  ISensorDataReportVtbl;
interface ISensorDataReport
{
	CONST_VTBL struct ISensorDataReportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISensorDataReport_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISensorDataReport_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISensorDataReport_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISensorDataReport_GetTimestamp(This,pTimeStamp)( (This)->lpVtbl -> GetTimestamp(This,pTimeStamp) )
#define ISensorDataReport_GetSensorValue(This,pKey,pValue)( (This)->lpVtbl -> GetSensorValue(This,pKey,pValue) )
#define ISensorDataReport_GetSensorValues(This,pKeys,ppValues)( (This)->lpVtbl -> GetSensorValues(This,pKeys,ppValues) )
#endif
#endif
#ifndef __ISensorManagerEvents_INTERFACE_DEFINED__
#define __ISensorManagerEvents_INTERFACE_DEFINED__
extern const IID IID_ISensorManagerEvents;
typedef struct ISensorManagerEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISensorManagerEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISensorManagerEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISensorManagerEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnSensorEnter) (ISensorManagerEvents * This, ISensor * pSensor, SensorState state);
	END_INTERFACE
}  ISensorManagerEventsVtbl;
interface ISensorManagerEvents
{
	CONST_VTBL struct ISensorManagerEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISensorManagerEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISensorManagerEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISensorManagerEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISensorManagerEvents_OnSensorEnter(This,pSensor,state)( (This)->lpVtbl -> OnSensorEnter(This,pSensor,state) )
#endif
#endif
#ifndef __ISensorEvents_INTERFACE_DEFINED__
#define __ISensorEvents_INTERFACE_DEFINED__
extern const IID IID_ISensorEvents;
typedef struct ISensorEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISensorEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISensorEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISensorEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnStateChanged) (ISensorEvents * This, ISensor * pSensor, SensorState state);
	HRESULT(STDMETHODCALLTYPE * OnDataUpdated) (ISensorEvents * This, ISensor * pSensor, ISensorDataReport * pNewData);
	HRESULT(STDMETHODCALLTYPE * OnEvent) (ISensorEvents * This, ISensor * pSensor, REFGUID eventID, IPortableDeviceValues * pEventData);
	HRESULT(STDMETHODCALLTYPE * OnLeave) (ISensorEvents * This, REFSENSOR_ID ID);
	END_INTERFACE
}  ISensorEventsVtbl;
interface ISensorEvents
{
	CONST_VTBL struct ISensorEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISensorEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISensorEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISensorEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISensorEvents_OnStateChanged(This,pSensor,state)( (This)->lpVtbl -> OnStateChanged(This,pSensor,state) )
#define ISensorEvents_OnDataUpdated(This,pSensor,pNewData)( (This)->lpVtbl -> OnDataUpdated(This,pSensor,pNewData) )
#define ISensorEvents_OnEvent(This,pSensor,eventID,pEventData)( (This)->lpVtbl -> OnEvent(This,pSensor,eventID,pEventData) )
#define ISensorEvents_OnLeave(This,ID)( (This)->lpVtbl -> OnLeave(This,ID) )
#endif
#endif
#ifndef __ILogicalSensorManager_INTERFACE_DEFINED__
#define __ILogicalSensorManager_INTERFACE_DEFINED__
extern const IID IID_ILogicalSensorManager;
typedef struct ILogicalSensorManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILogicalSensorManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILogicalSensorManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILogicalSensorManager * This);
	HRESULT(STDMETHODCALLTYPE * Connect) (ILogicalSensorManager * This, REFGUID logicalID, IPropertyStore * pPropertyStore);
	HRESULT(STDMETHODCALLTYPE * Uninstall) (ILogicalSensorManager * This, REFGUID logicalID);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (ILogicalSensorManager * This, REFGUID logicalID);
	END_INTERFACE
}  ILogicalSensorManagerVtbl;
interface ILogicalSensorManager
{
	CONST_VTBL struct ILogicalSensorManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILogicalSensorManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILogicalSensorManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ILogicalSensorManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define ILogicalSensorManager_Connect(This,logicalID,pPropertyStore)( (This)->lpVtbl -> Connect(This,logicalID,pPropertyStore) )
#define ILogicalSensorManager_Uninstall(This,logicalID)( (This)->lpVtbl -> Uninstall(This,logicalID) )
#define ILogicalSensorManager_Disconnect(This,logicalID)( (This)->lpVtbl -> Disconnect(This,logicalID) )
#endif
#endif
#ifndef __SensorsApiLib_LIBRARY_DEFINED__
#define __SensorsApiLib_LIBRARY_DEFINED__
extern const IID LIBID_SensorsApiLib;
extern const CLSID CLSID_SensorManager;
extern const CLSID CLSID_SensorCollection;
extern const CLSID CLSID_Sensor;
extern const CLSID CLSID_SensorDataReport;
extern const CLSID CLSID_LogicalSensorManager;
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
