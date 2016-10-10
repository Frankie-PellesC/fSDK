/*+@@file@@----------------------------------------------------------------*//*!
 \file		ISysmon.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 17 21:22:10 2016
 \date		Modified on Sun Jul 17 21:22:10 2016
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
#ifndef __isysmon_h__
#define __isysmon_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICounterItem_FWD_DEFINED__
#define __ICounterItem_FWD_DEFINED__
typedef interface ICounterItem ICounterItem;
#endif
#ifndef __ICounterItem2_FWD_DEFINED__
#define __ICounterItem2_FWD_DEFINED__
typedef interface ICounterItem2 ICounterItem2;
#endif
#ifndef ___ICounterItemUnion_FWD_DEFINED__
#define ___ICounterItemUnion_FWD_DEFINED__
typedef interface _ICounterItemUnion _ICounterItemUnion;
#endif
#ifndef __DICounterItem_FWD_DEFINED__
#define __DICounterItem_FWD_DEFINED__
typedef interface DICounterItem DICounterItem;
#endif
#ifndef __ICounters_FWD_DEFINED__
#define __ICounters_FWD_DEFINED__
typedef interface ICounters ICounters;
#endif
#ifndef __ILogFileItem_FWD_DEFINED__
#define __ILogFileItem_FWD_DEFINED__
typedef interface ILogFileItem ILogFileItem;
#endif
#ifndef __DILogFileItem_FWD_DEFINED__
#define __DILogFileItem_FWD_DEFINED__
typedef interface DILogFileItem DILogFileItem;
#endif
#ifndef __ILogFiles_FWD_DEFINED__
#define __ILogFiles_FWD_DEFINED__
typedef interface ILogFiles ILogFiles;
#endif
#ifndef __ISystemMonitor_FWD_DEFINED__
#define __ISystemMonitor_FWD_DEFINED__
typedef interface ISystemMonitor ISystemMonitor;
#endif
#ifndef __ISystemMonitor2_FWD_DEFINED__
#define __ISystemMonitor2_FWD_DEFINED__
typedef interface ISystemMonitor2 ISystemMonitor2;
#endif
#ifndef ___ISystemMonitorUnion_FWD_DEFINED__
#define ___ISystemMonitorUnion_FWD_DEFINED__
typedef interface _ISystemMonitorUnion _ISystemMonitorUnion;
#endif
#ifndef __DISystemMonitor_FWD_DEFINED__
#define __DISystemMonitor_FWD_DEFINED__
typedef interface DISystemMonitor DISystemMonitor;
#endif
#ifndef __DISystemMonitorInternal_FWD_DEFINED__
#define __DISystemMonitorInternal_FWD_DEFINED__
typedef interface DISystemMonitorInternal DISystemMonitorInternal;
#endif
#ifndef __ISystemMonitorEvents_FWD_DEFINED__
#define __ISystemMonitorEvents_FWD_DEFINED__
typedef interface ISystemMonitorEvents ISystemMonitorEvents;
#endif
#ifndef __DISystemMonitorEvents_FWD_DEFINED__
#define __DISystemMonitorEvents_FWD_DEFINED__
typedef interface DISystemMonitorEvents DISystemMonitorEvents;
#endif
#ifndef __SystemMonitor_FWD_DEFINED__
#define __SystemMonitor_FWD_DEFINED__
typedef struct SystemMonitor SystemMonitor;
#endif
#ifndef __CounterItem_FWD_DEFINED__
#define __CounterItem_FWD_DEFINED__
typedef struct CounterItem CounterItem;
#endif
#ifndef __Counters_FWD_DEFINED__
#define __Counters_FWD_DEFINED__
typedef struct Counters Counters;
#endif
#ifndef __LogFileItem_FWD_DEFINED__
#define __LogFileItem_FWD_DEFINED__
typedef struct LogFileItem LogFileItem;
#endif
#ifndef __LogFiles_FWD_DEFINED__
#define __LogFiles_FWD_DEFINED__
typedef struct LogFiles LogFiles;
#endif
#ifndef __CounterItem2_FWD_DEFINED__
#define __CounterItem2_FWD_DEFINED__
typedef struct CounterItem2 CounterItem2;
#endif
#ifndef __SystemMonitor2_FWD_DEFINED__
#define __SystemMonitor2_FWD_DEFINED__
typedef struct SystemMonitor2 SystemMonitor2;
#endif
#ifndef __AppearPropPage_FWD_DEFINED__
#define __AppearPropPage_FWD_DEFINED__
typedef struct AppearPropPage AppearPropPage;
#endif
#ifndef __GeneralPropPage_FWD_DEFINED__
#define __GeneralPropPage_FWD_DEFINED__
typedef struct GeneralPropPage GeneralPropPage;
#endif
#ifndef __GraphPropPage_FWD_DEFINED__
#define __GraphPropPage_FWD_DEFINED__
typedef struct GraphPropPage GraphPropPage;
#endif
#ifndef __SourcePropPage_FWD_DEFINED__
#define __SourcePropPage_FWD_DEFINED__
typedef struct SourcePropPage SourcePropPage;
#endif
#ifndef __CounterPropPage_FWD_DEFINED__
#define __CounterPropPage_FWD_DEFINED__
typedef struct CounterPropPage CounterPropPage;
#endif
#include "ocidl.h"
#ifndef __SystemMonitor_LIBRARY_DEFINED__
#define __SystemMonitor_LIBRARY_DEFINED__
typedef enum eDisplayTypeConstant
{
	sysmonLineGraph = 1,
	sysmonHistogram = 2,
	sysmonReport = 3,
	sysmonChartArea = 4,
	sysmonChartStackedArea = 5
} DisplayTypeConstants;
typedef enum eReportValueTypeConstant
{
	sysmonDefaultValue = 0,
	sysmonCurrentValue = 0x1,
	sysmonAverage = 0x2,
	sysmonMinimum = 0x3,
	sysmonMaximum = 0x4
} ReportValueTypeConstants;
typedef enum eDataSourceTypeConstant
{
	sysmonNullDataSource = 0xffffffff,
	sysmonCurrentActivity = 0x1,
	sysmonLogFiles = 0x2,
	sysmonSqlLog = 0x3
} DataSourceTypeConstants;
typedef enum __MIDL___MIDL_itf_sysmon_0000_0000_0001
{
	sysmonFileHtml = 1,
	sysmonFileReport = 2,
	sysmonFileCsv = 3,
	sysmonFileTsv = 4,
	sysmonFileBlg = 5,
	sysmonFileRetiredBlg = 6,
	sysmonFileGif = 7
} SysmonFileType;
typedef enum __MIDL___MIDL_itf_sysmon_0000_0000_0002
{
	sysmonDataAvg = 1,
	sysmonDataMin = 2,
	sysmonDataMax = 3,
	sysmonDataTime = 4,
	sysmonDataCount = 5
} SysmonDataType;
typedef enum __MIDL___MIDL_itf_sysmon_0000_0000_0003
{
	sysmonBatchNone = 0,
	sysmonBatchAddFiles = 1,
	sysmonBatchAddCounters = 2,
	sysmonBatchAddFilesAutoCounters = 3
} SysmonBatchReason;
DEFINE_GUID(LIBID_SystemMonitor, 0x1B773E42, 0x2509, 0x11cf, 0x94, 0x2F, 0x00, 0x80, 0x29, 0x00, 0x43, 0x47);
#ifndef __ICounterItem_INTERFACE_DEFINED__
#define __ICounterItem_INTERFACE_DEFINED__
DEFINE_GUID(IID_ICounterItem, 0x771A9520, 0xEE28, 0x11ce, 0x94, 0x1E, 0x00, 0x80, 0x29, 0x00, 0x43, 0x47);
typedef struct ICounterItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICounterItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICounterItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICounterItem * This);
	HRESULT(STDMETHODCALLTYPE * get_Value) (ICounterItem * This, double *pdblValue);
	HRESULT(STDMETHODCALLTYPE * put_Color) (ICounterItem * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * get_Color) (ICounterItem * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_Width) (ICounterItem * This, INT iWidth);
	HRESULT(STDMETHODCALLTYPE * get_Width) (ICounterItem * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * put_LineStyle) (ICounterItem * This, INT iLineStyle);
	HRESULT(STDMETHODCALLTYPE * get_LineStyle) (ICounterItem * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * put_ScaleFactor) (ICounterItem * This, INT iScale);
	HRESULT(STDMETHODCALLTYPE * get_ScaleFactor) (ICounterItem * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * get_Path) (ICounterItem * This, BSTR * pstrValue);
	HRESULT(STDMETHODCALLTYPE * GetValue) (ICounterItem * This, double *Value, long *Status);
	HRESULT(STDMETHODCALLTYPE * GetStatistics) (ICounterItem * This, double *Max, double *Min, double *Avg, long *Status);
	END_INTERFACE
}  ICounterItemVtbl;
interface ICounterItem
{
	CONST_VTBL struct ICounterItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICounterItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICounterItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICounterItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICounterItem_get_Value(This,pdblValue)( (This)->lpVtbl -> get_Value(This,pdblValue) )
#define ICounterItem_put_Color(This,Color)( (This)->lpVtbl -> put_Color(This,Color) )
#define ICounterItem_get_Color(This,pColor)( (This)->lpVtbl -> get_Color(This,pColor) )
#define ICounterItem_put_Width(This,iWidth)( (This)->lpVtbl -> put_Width(This,iWidth) )
#define ICounterItem_get_Width(This,piValue)( (This)->lpVtbl -> get_Width(This,piValue) )
#define ICounterItem_put_LineStyle(This,iLineStyle)( (This)->lpVtbl -> put_LineStyle(This,iLineStyle) )
#define ICounterItem_get_LineStyle(This,piValue)( (This)->lpVtbl -> get_LineStyle(This,piValue) )
#define ICounterItem_put_ScaleFactor(This,iScale)( (This)->lpVtbl -> put_ScaleFactor(This,iScale) )
#define ICounterItem_get_ScaleFactor(This,piValue)( (This)->lpVtbl -> get_ScaleFactor(This,piValue) )
#define ICounterItem_get_Path(This,pstrValue)( (This)->lpVtbl -> get_Path(This,pstrValue) )
#define ICounterItem_GetValue(This,Value,Status)( (This)->lpVtbl -> GetValue(This,Value,Status) )
#define ICounterItem_GetStatistics(This,Max,Min,Avg,Status)( (This)->lpVtbl -> GetStatistics(This,Max,Min,Avg,Status) )
#endif
#endif
#ifndef __ICounterItem2_INTERFACE_DEFINED__
#define __ICounterItem2_INTERFACE_DEFINED__
DEFINE_GUID(IID_ICounterItem2, 0xeefcd4e1, 0xea1c, 0x4435, 0xb7, 0xf4, 0xe3, 0x41, 0xba, 0x03, 0xb4, 0xf9);
typedef struct ICounterItem2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICounterItem2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICounterItem2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICounterItem2 * This);
	HRESULT(STDMETHODCALLTYPE * get_Value) (ICounterItem2 * This, double *pdblValue);
	HRESULT(STDMETHODCALLTYPE * put_Color) (ICounterItem2 * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * get_Color) (ICounterItem2 * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_Width) (ICounterItem2 * This, INT iWidth);
	HRESULT(STDMETHODCALLTYPE * get_Width) (ICounterItem2 * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * put_LineStyle) (ICounterItem2 * This, INT iLineStyle);
	HRESULT(STDMETHODCALLTYPE * get_LineStyle) (ICounterItem2 * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * put_ScaleFactor) (ICounterItem2 * This, INT iScale);
	HRESULT(STDMETHODCALLTYPE * get_ScaleFactor) (ICounterItem2 * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * get_Path) (ICounterItem2 * This, BSTR * pstrValue);
	HRESULT(STDMETHODCALLTYPE * GetValue) (ICounterItem2 * This, double *Value, long *Status);
	HRESULT(STDMETHODCALLTYPE * GetStatistics) (ICounterItem2 * This, double *Max, double *Min, double *Avg, long *Status);
	HRESULT(STDMETHODCALLTYPE * put_Selected) (ICounterItem2 * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_Selected) (ICounterItem2 * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_Visible) (ICounterItem2 * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_Visible) (ICounterItem2 * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * GetDataAt) (ICounterItem2 * This, INT iIndex, SysmonDataType iWhich, VARIANT * pVariant);
	END_INTERFACE
}  ICounterItem2Vtbl;
interface ICounterItem2
{
	CONST_VTBL struct ICounterItem2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICounterItem2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICounterItem2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICounterItem2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICounterItem2_get_Value(This,pdblValue)( (This)->lpVtbl -> get_Value(This,pdblValue) )
#define ICounterItem2_put_Color(This,Color)( (This)->lpVtbl -> put_Color(This,Color) )
#define ICounterItem2_get_Color(This,pColor)( (This)->lpVtbl -> get_Color(This,pColor) )
#define ICounterItem2_put_Width(This,iWidth)( (This)->lpVtbl -> put_Width(This,iWidth) )
#define ICounterItem2_get_Width(This,piValue)( (This)->lpVtbl -> get_Width(This,piValue) )
#define ICounterItem2_put_LineStyle(This,iLineStyle)( (This)->lpVtbl -> put_LineStyle(This,iLineStyle) )
#define ICounterItem2_get_LineStyle(This,piValue)( (This)->lpVtbl -> get_LineStyle(This,piValue) )
#define ICounterItem2_put_ScaleFactor(This,iScale)( (This)->lpVtbl -> put_ScaleFactor(This,iScale) )
#define ICounterItem2_get_ScaleFactor(This,piValue)( (This)->lpVtbl -> get_ScaleFactor(This,piValue) )
#define ICounterItem2_get_Path(This,pstrValue)( (This)->lpVtbl -> get_Path(This,pstrValue) )
#define ICounterItem2_GetValue(This,Value,Status)( (This)->lpVtbl -> GetValue(This,Value,Status) )
#define ICounterItem2_GetStatistics(This,Max,Min,Avg,Status)( (This)->lpVtbl -> GetStatistics(This,Max,Min,Avg,Status) )
#define ICounterItem2_put_Selected(This,bState)( (This)->lpVtbl -> put_Selected(This,bState) )
#define ICounterItem2_get_Selected(This,pbState)( (This)->lpVtbl -> get_Selected(This,pbState) )
#define ICounterItem2_put_Visible(This,bState)( (This)->lpVtbl -> put_Visible(This,bState) )
#define ICounterItem2_get_Visible(This,pbState)( (This)->lpVtbl -> get_Visible(This,pbState) )
#define ICounterItem2_GetDataAt(This,iIndex,iWhich,pVariant)( (This)->lpVtbl -> GetDataAt(This,iIndex,iWhich,pVariant) )
#endif
#endif
#ifndef ___ICounterItemUnion_INTERFACE_DEFINED__
#define ___ICounterItemUnion_INTERFACE_DEFINED__
DEFINE_GUID(IID__ICounterItemUnion, 0xde1a6b74, 0x9182, 0x4c41, 0x8e, 0x2c, 0x24, 0xc2, 0xcd, 0x30, 0xee, 0x83);
typedef struct _ICounterItemUnionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_ICounterItemUnion * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_ICounterItemUnion * This);
	ULONG(STDMETHODCALLTYPE * Release) (_ICounterItemUnion * This);
	HRESULT(STDMETHODCALLTYPE * get_Value) (_ICounterItemUnion * This, double *pdblValue);
	HRESULT(STDMETHODCALLTYPE * put_Color) (_ICounterItemUnion * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * get_Color) (_ICounterItemUnion * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_Width) (_ICounterItemUnion * This, INT iWidth);
	HRESULT(STDMETHODCALLTYPE * get_Width) (_ICounterItemUnion * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * put_LineStyle) (_ICounterItemUnion * This, INT iLineStyle);
	HRESULT(STDMETHODCALLTYPE * get_LineStyle) (_ICounterItemUnion * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * put_ScaleFactor) (_ICounterItemUnion * This, INT iScale);
	HRESULT(STDMETHODCALLTYPE * get_ScaleFactor) (_ICounterItemUnion * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * get_Path) (_ICounterItemUnion * This, BSTR * pstrValue);
	HRESULT(STDMETHODCALLTYPE * GetValue) (_ICounterItemUnion * This, double *Value, long *Status);
	HRESULT(STDMETHODCALLTYPE * GetStatistics) (_ICounterItemUnion * This, double *Max, double *Min, double *Avg, long *Status);
	HRESULT(STDMETHODCALLTYPE * put_Selected) (_ICounterItemUnion * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_Selected) (_ICounterItemUnion * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_Visible) (_ICounterItemUnion * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_Visible) (_ICounterItemUnion * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * GetDataAt) (_ICounterItemUnion * This, INT iIndex, SysmonDataType iWhich, VARIANT * pVariant);
	END_INTERFACE
}  _ICounterItemUnionVtbl;
interface _ICounterItemUnion
{
	CONST_VTBL struct _ICounterItemUnionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _ICounterItemUnion_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _ICounterItemUnion_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define _ICounterItemUnion_Release(This)( (This)->lpVtbl -> Release(This) )
#define _ICounterItemUnion_get_Value(This,pdblValue)( (This)->lpVtbl -> get_Value(This,pdblValue) )
#define _ICounterItemUnion_put_Color(This,Color)( (This)->lpVtbl -> put_Color(This,Color) )
#define _ICounterItemUnion_get_Color(This,pColor)( (This)->lpVtbl -> get_Color(This,pColor) )
#define _ICounterItemUnion_put_Width(This,iWidth)( (This)->lpVtbl -> put_Width(This,iWidth) )
#define _ICounterItemUnion_get_Width(This,piValue)( (This)->lpVtbl -> get_Width(This,piValue) )
#define _ICounterItemUnion_put_LineStyle(This,iLineStyle)( (This)->lpVtbl -> put_LineStyle(This,iLineStyle) )
#define _ICounterItemUnion_get_LineStyle(This,piValue)( (This)->lpVtbl -> get_LineStyle(This,piValue) )
#define _ICounterItemUnion_put_ScaleFactor(This,iScale)( (This)->lpVtbl -> put_ScaleFactor(This,iScale) )
#define _ICounterItemUnion_get_ScaleFactor(This,piValue)( (This)->lpVtbl -> get_ScaleFactor(This,piValue) )
#define _ICounterItemUnion_get_Path(This,pstrValue)( (This)->lpVtbl -> get_Path(This,pstrValue) )
#define _ICounterItemUnion_GetValue(This,Value,Status)( (This)->lpVtbl -> GetValue(This,Value,Status) )
#define _ICounterItemUnion_GetStatistics(This,Max,Min,Avg,Status)( (This)->lpVtbl -> GetStatistics(This,Max,Min,Avg,Status) )
#define _ICounterItemUnion_put_Selected(This,bState)( (This)->lpVtbl -> put_Selected(This,bState) )
#define _ICounterItemUnion_get_Selected(This,pbState)( (This)->lpVtbl -> get_Selected(This,pbState) )
#define _ICounterItemUnion_put_Visible(This,bState)( (This)->lpVtbl -> put_Visible(This,bState) )
#define _ICounterItemUnion_get_Visible(This,pbState)( (This)->lpVtbl -> get_Visible(This,pbState) )
#define _ICounterItemUnion_GetDataAt(This,iIndex,iWhich,pVariant)( (This)->lpVtbl -> GetDataAt(This,iIndex,iWhich,pVariant) )
#endif
#endif
#ifndef __DICounterItem_DISPINTERFACE_DEFINED__
#define __DICounterItem_DISPINTERFACE_DEFINED__
DEFINE_GUID(DIID_DICounterItem, 0xC08C4FF2, 0x0E2E, 0x11cf, 0x94, 0x2C, 0x00, 0x80, 0x29, 0x00, 0x43, 0x47);
typedef struct DICounterItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (DICounterItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (DICounterItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (DICounterItem * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (DICounterItem * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (DICounterItem * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (DICounterItem * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (DICounterItem * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  DICounterItemVtbl;
interface DICounterItem
{
	CONST_VTBL struct DICounterItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DICounterItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DICounterItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define DICounterItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define DICounterItem_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DICounterItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DICounterItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DICounterItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __ICounters_INTERFACE_DEFINED__
#define __ICounters_INTERFACE_DEFINED__
DEFINE_GUID(IID_ICounters, 0x79167962, 0x28FC, 0x11cf, 0x94, 0x2F, 0x00, 0x80, 0x29, 0x00, 0x43, 0x47);
typedef struct ICountersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICounters * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICounters * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICounters * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICounters * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICounters * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICounters * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICounters * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ICounters * This, long *pLong);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ICounters * This, IUnknown ** ppIunk);
	HRESULT(STDMETHODCALLTYPE * get_Item) (ICounters * This, VARIANT index, DICounterItem ** ppI);
	HRESULT(STDMETHODCALLTYPE * Add) (ICounters * This, BSTR pathname, DICounterItem ** ppI);
	HRESULT(STDMETHODCALLTYPE * Remove) (ICounters * This, VARIANT index);
	END_INTERFACE
}  ICountersVtbl;
interface ICounters
{
	CONST_VTBL struct ICountersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICounters_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICounters_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICounters_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICounters_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICounters_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICounters_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICounters_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICounters_get_Count(This,pLong)( (This)->lpVtbl -> get_Count(This,pLong) )
#define ICounters_get__NewEnum(This,ppIunk)( (This)->lpVtbl -> get__NewEnum(This,ppIunk) )
#define ICounters_get_Item(This,index,ppI)( (This)->lpVtbl -> get_Item(This,index,ppI) )
#define ICounters_Add(This,pathname,ppI)( (This)->lpVtbl -> Add(This,pathname,ppI) )
#define ICounters_Remove(This,index)( (This)->lpVtbl -> Remove(This,index) )
#endif
#endif
#ifndef __ILogFileItem_INTERFACE_DEFINED__
#define __ILogFileItem_INTERFACE_DEFINED__
DEFINE_GUID(IID_ILogFileItem, 0xD6B518DD, 0x05C7, 0x418a, 0x89, 0xE6, 0x4F, 0x9C, 0xE8, 0xC6, 0x84, 0x1E);
typedef struct ILogFileItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILogFileItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILogFileItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILogFileItem * This);
	HRESULT(STDMETHODCALLTYPE * get_Path) (ILogFileItem * This, BSTR * pstrValue);
	END_INTERFACE
}  ILogFileItemVtbl;
interface ILogFileItem
{
	CONST_VTBL struct ILogFileItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILogFileItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILogFileItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ILogFileItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define ILogFileItem_get_Path(This,pstrValue)( (This)->lpVtbl -> get_Path(This,pstrValue) )
#endif
#endif
#ifndef __DILogFileItem_DISPINTERFACE_DEFINED__
#define __DILogFileItem_DISPINTERFACE_DEFINED__
DEFINE_GUID(DIID_DILogFileItem, 0x8D093FFC, 0xF777, 0x4917, 0x82, 0xD1, 0x83, 0x3F, 0xBC, 0x54, 0xC5, 0x8F);
typedef struct DILogFileItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (DILogFileItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (DILogFileItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (DILogFileItem * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (DILogFileItem * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (DILogFileItem * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (DILogFileItem * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (DILogFileItem * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  DILogFileItemVtbl;
interface DILogFileItem
{
	CONST_VTBL struct DILogFileItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DILogFileItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DILogFileItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define DILogFileItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define DILogFileItem_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DILogFileItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DILogFileItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DILogFileItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __ILogFiles_INTERFACE_DEFINED__
#define __ILogFiles_INTERFACE_DEFINED__
DEFINE_GUID(IID_ILogFiles, 0x6A2A97E6, 0x6851, 0x41ea, 0x87, 0xAD, 0x2A, 0x82, 0x25, 0x33, 0x58, 0x65);
typedef struct ILogFilesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILogFiles * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILogFiles * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILogFiles * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ILogFiles * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ILogFiles * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ILogFiles * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ILogFiles * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ILogFiles * This, long *pLong);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ILogFiles * This, IUnknown ** ppIunk);
	HRESULT(STDMETHODCALLTYPE * get_Item) (ILogFiles * This, VARIANT index, DILogFileItem ** ppI);
	HRESULT(STDMETHODCALLTYPE * Add) (ILogFiles * This, BSTR pathname, DILogFileItem ** ppI);
	HRESULT(STDMETHODCALLTYPE * Remove) (ILogFiles * This, VARIANT index);
	END_INTERFACE
}  ILogFilesVtbl;
interface ILogFiles
{
	CONST_VTBL struct ILogFilesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILogFiles_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILogFiles_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ILogFiles_Release(This)( (This)->lpVtbl -> Release(This) )
#define ILogFiles_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ILogFiles_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ILogFiles_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ILogFiles_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ILogFiles_get_Count(This,pLong)( (This)->lpVtbl -> get_Count(This,pLong) )
#define ILogFiles_get__NewEnum(This,ppIunk)( (This)->lpVtbl -> get__NewEnum(This,ppIunk) )
#define ILogFiles_get_Item(This,index,ppI)( (This)->lpVtbl -> get_Item(This,index,ppI) )
#define ILogFiles_Add(This,pathname,ppI)( (This)->lpVtbl -> Add(This,pathname,ppI) )
#define ILogFiles_Remove(This,index)( (This)->lpVtbl -> Remove(This,index) )
#endif
#endif
#ifndef __ISystemMonitor_INTERFACE_DEFINED__
#define __ISystemMonitor_INTERFACE_DEFINED__
DEFINE_GUID(IID_ISystemMonitor, 0x194EB241, 0xC32C, 0x11cf, 0x93, 0x98, 0x00, 0xAA, 0x00, 0xA3, 0xDD, 0xEA);
typedef struct ISystemMonitorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISystemMonitor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISystemMonitor * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISystemMonitor * This);
	HRESULT(STDMETHODCALLTYPE * get_Appearance) (ISystemMonitor * This, INT * iAppearance);
	HRESULT(STDMETHODCALLTYPE * put_Appearance) (ISystemMonitor * This, INT iAppearance);
	HRESULT(STDMETHODCALLTYPE * get_BackColor) (ISystemMonitor * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_BackColor) (ISystemMonitor * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * get_BorderStyle) (ISystemMonitor * This, INT * iBorderStyle);
	HRESULT(STDMETHODCALLTYPE * put_BorderStyle) (ISystemMonitor * This, INT iBorderStyle);
	HRESULT(STDMETHODCALLTYPE * get_ForeColor) (ISystemMonitor * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_ForeColor) (ISystemMonitor * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * get_Font) (ISystemMonitor * This, IFontDisp ** ppFont);
	HRESULT(STDMETHODCALLTYPE * putref_Font) (ISystemMonitor * This, IFontDisp * pFont);
	HRESULT(STDMETHODCALLTYPE * get_Counters) (ISystemMonitor * This, ICounters ** ppICounters);
	HRESULT(STDMETHODCALLTYPE * put_ShowVerticalGrid) (ISystemMonitor * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowVerticalGrid) (ISystemMonitor * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowHorizontalGrid) (ISystemMonitor * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowHorizontalGrid) (ISystemMonitor * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowLegend) (ISystemMonitor * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowLegend) (ISystemMonitor * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowScaleLabels) (ISystemMonitor * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowScaleLabels) (ISystemMonitor * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowValueBar) (ISystemMonitor * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowValueBar) (ISystemMonitor * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_MaximumScale) (ISystemMonitor * This, INT iValue);
	HRESULT(STDMETHODCALLTYPE * get_MaximumScale) (ISystemMonitor * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * put_MinimumScale) (ISystemMonitor * This, INT iValue);
	HRESULT(STDMETHODCALLTYPE * get_MinimumScale) (ISystemMonitor * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * put_UpdateInterval) (ISystemMonitor * This, FLOAT fValue);
	HRESULT(STDMETHODCALLTYPE * get_UpdateInterval) (ISystemMonitor * This, FLOAT * pfValue);
	HRESULT(STDMETHODCALLTYPE * put_DisplayType) (ISystemMonitor * This, DisplayTypeConstants eDisplayType);
	HRESULT(STDMETHODCALLTYPE * get_DisplayType) (ISystemMonitor * This, DisplayTypeConstants * peDisplayType);
	HRESULT(STDMETHODCALLTYPE * put_ManualUpdate) (ISystemMonitor * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ManualUpdate) (ISystemMonitor * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_GraphTitle) (ISystemMonitor * This, BSTR bsTitle);
	HRESULT(STDMETHODCALLTYPE * get_GraphTitle) (ISystemMonitor * This, BSTR * pbsTitle);
	HRESULT(STDMETHODCALLTYPE * put_YAxisLabel) (ISystemMonitor * This, BSTR bsTitle);
	HRESULT(STDMETHODCALLTYPE * get_YAxisLabel) (ISystemMonitor * This, BSTR * pbsTitle);
	HRESULT(STDMETHODCALLTYPE * CollectSample) (ISystemMonitor * This);
	HRESULT(STDMETHODCALLTYPE * UpdateGraph) (ISystemMonitor * This);
	HRESULT(STDMETHODCALLTYPE * BrowseCounters) (ISystemMonitor * This);
	HRESULT(STDMETHODCALLTYPE * DisplayProperties) (ISystemMonitor * This);
	HRESULT(STDMETHODCALLTYPE * Counter) (ISystemMonitor * This, INT iIndex, ICounterItem ** ppICounter);
	HRESULT(STDMETHODCALLTYPE * AddCounter) (ISystemMonitor * This, BSTR bsPath, ICounterItem ** ppICounter);
	HRESULT(STDMETHODCALLTYPE * DeleteCounter) (ISystemMonitor * This, ICounterItem * pCtr);
	HRESULT(STDMETHODCALLTYPE * get_BackColorCtl) (ISystemMonitor * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_BackColorCtl) (ISystemMonitor * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * put_LogFileName) (ISystemMonitor * This, BSTR bsFileName);
	HRESULT(STDMETHODCALLTYPE * get_LogFileName) (ISystemMonitor * This, BSTR * bsFileName);
	HRESULT(STDMETHODCALLTYPE * put_LogViewStart) (ISystemMonitor * This, DATE StartTime);
	HRESULT(STDMETHODCALLTYPE * get_LogViewStart) (ISystemMonitor * This, DATE * StartTime);
	HRESULT(STDMETHODCALLTYPE * put_LogViewStop) (ISystemMonitor * This, DATE StopTime);
	HRESULT(STDMETHODCALLTYPE * get_LogViewStop) (ISystemMonitor * This, DATE * StopTime);
	HRESULT(STDMETHODCALLTYPE * get_GridColor) (ISystemMonitor * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_GridColor) (ISystemMonitor * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * get_TimeBarColor) (ISystemMonitor * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_TimeBarColor) (ISystemMonitor * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * get_Highlight) (ISystemMonitor * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_Highlight) (ISystemMonitor * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowToolbar) (ISystemMonitor * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowToolbar) (ISystemMonitor * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * Paste) (ISystemMonitor * This);
	HRESULT(STDMETHODCALLTYPE * Copy) (ISystemMonitor * This);
	HRESULT(STDMETHODCALLTYPE * Reset) (ISystemMonitor * This);
	HRESULT(STDMETHODCALLTYPE * put_ReadOnly) (ISystemMonitor * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ReadOnly) (ISystemMonitor * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ReportValueType) (ISystemMonitor * This, ReportValueTypeConstants eReportValueType);
	HRESULT(STDMETHODCALLTYPE * get_ReportValueType) (ISystemMonitor * This, ReportValueTypeConstants * peReportValueType);
	HRESULT(STDMETHODCALLTYPE * put_MonitorDuplicateInstances) (ISystemMonitor * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_MonitorDuplicateInstances) (ISystemMonitor * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_DisplayFilter) (ISystemMonitor * This, INT iValue);
	HRESULT(STDMETHODCALLTYPE * get_DisplayFilter) (ISystemMonitor * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * get_LogFiles) (ISystemMonitor * This, ILogFiles ** ppILogFiles);
	HRESULT(STDMETHODCALLTYPE * put_DataSourceType) (ISystemMonitor * This, DataSourceTypeConstants eDataSourceType);
	HRESULT(STDMETHODCALLTYPE * get_DataSourceType) (ISystemMonitor * This, DataSourceTypeConstants * peDataSourceType);
	HRESULT(STDMETHODCALLTYPE * put_SqlDsnName) (ISystemMonitor * This, BSTR bsSqlDsnName);
	HRESULT(STDMETHODCALLTYPE * get_SqlDsnName) (ISystemMonitor * This, BSTR * bsSqlDsnName);
	HRESULT(STDMETHODCALLTYPE * put_SqlLogSetName) (ISystemMonitor * This, BSTR bsSqlLogSetName);
	HRESULT(STDMETHODCALLTYPE * get_SqlLogSetName) (ISystemMonitor * This, BSTR * bsSqlLogSetName);
	END_INTERFACE
}  ISystemMonitorVtbl;
interface ISystemMonitor
{
	CONST_VTBL struct ISystemMonitorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISystemMonitor_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISystemMonitor_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISystemMonitor_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISystemMonitor_get_Appearance(This,iAppearance)( (This)->lpVtbl -> get_Appearance(This,iAppearance) )
#define ISystemMonitor_put_Appearance(This,iAppearance)( (This)->lpVtbl -> put_Appearance(This,iAppearance) )
#define ISystemMonitor_get_BackColor(This,pColor)( (This)->lpVtbl -> get_BackColor(This,pColor) )
#define ISystemMonitor_put_BackColor(This,Color)( (This)->lpVtbl -> put_BackColor(This,Color) )
#define ISystemMonitor_get_BorderStyle(This,iBorderStyle)( (This)->lpVtbl -> get_BorderStyle(This,iBorderStyle) )
#define ISystemMonitor_put_BorderStyle(This,iBorderStyle)( (This)->lpVtbl -> put_BorderStyle(This,iBorderStyle) )
#define ISystemMonitor_get_ForeColor(This,pColor)( (This)->lpVtbl -> get_ForeColor(This,pColor) )
#define ISystemMonitor_put_ForeColor(This,Color)( (This)->lpVtbl -> put_ForeColor(This,Color) )
#define ISystemMonitor_get_Font(This,ppFont)( (This)->lpVtbl -> get_Font(This,ppFont) )
#define ISystemMonitor_putref_Font(This,pFont)( (This)->lpVtbl -> putref_Font(This,pFont) )
#define ISystemMonitor_get_Counters(This,ppICounters)( (This)->lpVtbl -> get_Counters(This,ppICounters) )
#define ISystemMonitor_put_ShowVerticalGrid(This,bState)( (This)->lpVtbl -> put_ShowVerticalGrid(This,bState) )
#define ISystemMonitor_get_ShowVerticalGrid(This,pbState)( (This)->lpVtbl -> get_ShowVerticalGrid(This,pbState) )
#define ISystemMonitor_put_ShowHorizontalGrid(This,bState)( (This)->lpVtbl -> put_ShowHorizontalGrid(This,bState) )
#define ISystemMonitor_get_ShowHorizontalGrid(This,pbState)( (This)->lpVtbl -> get_ShowHorizontalGrid(This,pbState) )
#define ISystemMonitor_put_ShowLegend(This,bState)( (This)->lpVtbl -> put_ShowLegend(This,bState) )
#define ISystemMonitor_get_ShowLegend(This,pbState)( (This)->lpVtbl -> get_ShowLegend(This,pbState) )
#define ISystemMonitor_put_ShowScaleLabels(This,bState)( (This)->lpVtbl -> put_ShowScaleLabels(This,bState) )
#define ISystemMonitor_get_ShowScaleLabels(This,pbState)( (This)->lpVtbl -> get_ShowScaleLabels(This,pbState) )
#define ISystemMonitor_put_ShowValueBar(This,bState)( (This)->lpVtbl -> put_ShowValueBar(This,bState) )
#define ISystemMonitor_get_ShowValueBar(This,pbState)( (This)->lpVtbl -> get_ShowValueBar(This,pbState) )
#define ISystemMonitor_put_MaximumScale(This,iValue)( (This)->lpVtbl -> put_MaximumScale(This,iValue) )
#define ISystemMonitor_get_MaximumScale(This,piValue)( (This)->lpVtbl -> get_MaximumScale(This,piValue) )
#define ISystemMonitor_put_MinimumScale(This,iValue)( (This)->lpVtbl -> put_MinimumScale(This,iValue) )
#define ISystemMonitor_get_MinimumScale(This,piValue)( (This)->lpVtbl -> get_MinimumScale(This,piValue) )
#define ISystemMonitor_put_UpdateInterval(This,fValue)( (This)->lpVtbl -> put_UpdateInterval(This,fValue) )
#define ISystemMonitor_get_UpdateInterval(This,pfValue)( (This)->lpVtbl -> get_UpdateInterval(This,pfValue) )
#define ISystemMonitor_put_DisplayType(This,eDisplayType)( (This)->lpVtbl -> put_DisplayType(This,eDisplayType) )
#define ISystemMonitor_get_DisplayType(This,peDisplayType)( (This)->lpVtbl -> get_DisplayType(This,peDisplayType) )
#define ISystemMonitor_put_ManualUpdate(This,bState)( (This)->lpVtbl -> put_ManualUpdate(This,bState) )
#define ISystemMonitor_get_ManualUpdate(This,pbState)( (This)->lpVtbl -> get_ManualUpdate(This,pbState) )
#define ISystemMonitor_put_GraphTitle(This,bsTitle)( (This)->lpVtbl -> put_GraphTitle(This,bsTitle) )
#define ISystemMonitor_get_GraphTitle(This,pbsTitle)( (This)->lpVtbl -> get_GraphTitle(This,pbsTitle) )
#define ISystemMonitor_put_YAxisLabel(This,bsTitle)( (This)->lpVtbl -> put_YAxisLabel(This,bsTitle) )
#define ISystemMonitor_get_YAxisLabel(This,pbsTitle)( (This)->lpVtbl -> get_YAxisLabel(This,pbsTitle) )
#define ISystemMonitor_CollectSample(This)( (This)->lpVtbl -> CollectSample(This) )
#define ISystemMonitor_UpdateGraph(This)( (This)->lpVtbl -> UpdateGraph(This) )
#define ISystemMonitor_BrowseCounters(This)( (This)->lpVtbl -> BrowseCounters(This) )
#define ISystemMonitor_DisplayProperties(This)( (This)->lpVtbl -> DisplayProperties(This) )
#define ISystemMonitor_Counter(This,iIndex,ppICounter)( (This)->lpVtbl -> Counter(This,iIndex,ppICounter) )
#define ISystemMonitor_AddCounter(This,bsPath,ppICounter)( (This)->lpVtbl -> AddCounter(This,bsPath,ppICounter) )
#define ISystemMonitor_DeleteCounter(This,pCtr)( (This)->lpVtbl -> DeleteCounter(This,pCtr) )
#define ISystemMonitor_get_BackColorCtl(This,pColor)( (This)->lpVtbl -> get_BackColorCtl(This,pColor) )
#define ISystemMonitor_put_BackColorCtl(This,Color)( (This)->lpVtbl -> put_BackColorCtl(This,Color) )
#define ISystemMonitor_put_LogFileName(This,bsFileName)( (This)->lpVtbl -> put_LogFileName(This,bsFileName) )
#define ISystemMonitor_get_LogFileName(This,bsFileName)( (This)->lpVtbl -> get_LogFileName(This,bsFileName) )
#define ISystemMonitor_put_LogViewStart(This,StartTime)( (This)->lpVtbl -> put_LogViewStart(This,StartTime) )
#define ISystemMonitor_get_LogViewStart(This,StartTime)( (This)->lpVtbl -> get_LogViewStart(This,StartTime) )
#define ISystemMonitor_put_LogViewStop(This,StopTime)( (This)->lpVtbl -> put_LogViewStop(This,StopTime) )
#define ISystemMonitor_get_LogViewStop(This,StopTime)( (This)->lpVtbl -> get_LogViewStop(This,StopTime) )
#define ISystemMonitor_get_GridColor(This,pColor)( (This)->lpVtbl -> get_GridColor(This,pColor) )
#define ISystemMonitor_put_GridColor(This,Color)( (This)->lpVtbl -> put_GridColor(This,Color) )
#define ISystemMonitor_get_TimeBarColor(This,pColor)( (This)->lpVtbl -> get_TimeBarColor(This,pColor) )
#define ISystemMonitor_put_TimeBarColor(This,Color)( (This)->lpVtbl -> put_TimeBarColor(This,Color) )
#define ISystemMonitor_get_Highlight(This,pbState)( (This)->lpVtbl -> get_Highlight(This,pbState) )
#define ISystemMonitor_put_Highlight(This,bState)( (This)->lpVtbl -> put_Highlight(This,bState) )
#define ISystemMonitor_get_ShowToolbar(This,pbState)( (This)->lpVtbl -> get_ShowToolbar(This,pbState) )
#define ISystemMonitor_put_ShowToolbar(This,bState)( (This)->lpVtbl -> put_ShowToolbar(This,bState) )
#define ISystemMonitor_Paste(This)( (This)->lpVtbl -> Paste(This) )
#define ISystemMonitor_Copy(This)( (This)->lpVtbl -> Copy(This) )
#define ISystemMonitor_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ISystemMonitor_put_ReadOnly(This,bState)( (This)->lpVtbl -> put_ReadOnly(This,bState) )
#define ISystemMonitor_get_ReadOnly(This,pbState)( (This)->lpVtbl -> get_ReadOnly(This,pbState) )
#define ISystemMonitor_put_ReportValueType(This,eReportValueType)( (This)->lpVtbl -> put_ReportValueType(This,eReportValueType) )
#define ISystemMonitor_get_ReportValueType(This,peReportValueType)( (This)->lpVtbl -> get_ReportValueType(This,peReportValueType) )
#define ISystemMonitor_put_MonitorDuplicateInstances(This,bState)( (This)->lpVtbl -> put_MonitorDuplicateInstances(This,bState) )
#define ISystemMonitor_get_MonitorDuplicateInstances(This,pbState)( (This)->lpVtbl -> get_MonitorDuplicateInstances(This,pbState) )
#define ISystemMonitor_put_DisplayFilter(This,iValue)( (This)->lpVtbl -> put_DisplayFilter(This,iValue) )
#define ISystemMonitor_get_DisplayFilter(This,piValue)( (This)->lpVtbl -> get_DisplayFilter(This,piValue) )
#define ISystemMonitor_get_LogFiles(This,ppILogFiles)( (This)->lpVtbl -> get_LogFiles(This,ppILogFiles) )
#define ISystemMonitor_put_DataSourceType(This,eDataSourceType)( (This)->lpVtbl -> put_DataSourceType(This,eDataSourceType) )
#define ISystemMonitor_get_DataSourceType(This,peDataSourceType)( (This)->lpVtbl -> get_DataSourceType(This,peDataSourceType) )
#define ISystemMonitor_put_SqlDsnName(This,bsSqlDsnName)( (This)->lpVtbl -> put_SqlDsnName(This,bsSqlDsnName) )
#define ISystemMonitor_get_SqlDsnName(This,bsSqlDsnName)( (This)->lpVtbl -> get_SqlDsnName(This,bsSqlDsnName) )
#define ISystemMonitor_put_SqlLogSetName(This,bsSqlLogSetName)( (This)->lpVtbl -> put_SqlLogSetName(This,bsSqlLogSetName) )
#define ISystemMonitor_get_SqlLogSetName(This,bsSqlLogSetName)( (This)->lpVtbl -> get_SqlLogSetName(This,bsSqlLogSetName) )
#endif
#endif
#ifndef __ISystemMonitor2_INTERFACE_DEFINED__
#define __ISystemMonitor2_INTERFACE_DEFINED__
DEFINE_GUID(IID_ISystemMonitor2, 0x08e3206a, 0x5fd2, 0x4fde, 0xa8, 0xa5, 0x8c, 0xb3, 0xb6, 0x3d, 0x26, 0x77);
typedef struct ISystemMonitor2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISystemMonitor2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISystemMonitor2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISystemMonitor2 * This);
	HRESULT(STDMETHODCALLTYPE * get_Appearance) (ISystemMonitor2 * This, INT * iAppearance);
	HRESULT(STDMETHODCALLTYPE * put_Appearance) (ISystemMonitor2 * This, INT iAppearance);
	HRESULT(STDMETHODCALLTYPE * get_BackColor) (ISystemMonitor2 * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_BackColor) (ISystemMonitor2 * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * get_BorderStyle) (ISystemMonitor2 * This, INT * iBorderStyle);
	HRESULT(STDMETHODCALLTYPE * put_BorderStyle) (ISystemMonitor2 * This, INT iBorderStyle);
	HRESULT(STDMETHODCALLTYPE * get_ForeColor) (ISystemMonitor2 * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_ForeColor) (ISystemMonitor2 * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * get_Font) (ISystemMonitor2 * This, IFontDisp ** ppFont);
	HRESULT(STDMETHODCALLTYPE * putref_Font) (ISystemMonitor2 * This, IFontDisp * pFont);
	HRESULT(STDMETHODCALLTYPE * get_Counters) (ISystemMonitor2 * This, ICounters ** ppICounters);
	HRESULT(STDMETHODCALLTYPE * put_ShowVerticalGrid) (ISystemMonitor2 * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowVerticalGrid) (ISystemMonitor2 * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowHorizontalGrid) (ISystemMonitor2 * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowHorizontalGrid) (ISystemMonitor2 * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowLegend) (ISystemMonitor2 * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowLegend) (ISystemMonitor2 * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowScaleLabels) (ISystemMonitor2 * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowScaleLabels) (ISystemMonitor2 * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowValueBar) (ISystemMonitor2 * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowValueBar) (ISystemMonitor2 * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_MaximumScale) (ISystemMonitor2 * This, INT iValue);
	HRESULT(STDMETHODCALLTYPE * get_MaximumScale) (ISystemMonitor2 * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * put_MinimumScale) (ISystemMonitor2 * This, INT iValue);
	HRESULT(STDMETHODCALLTYPE * get_MinimumScale) (ISystemMonitor2 * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * put_UpdateInterval) (ISystemMonitor2 * This, FLOAT fValue);
	HRESULT(STDMETHODCALLTYPE * get_UpdateInterval) (ISystemMonitor2 * This, FLOAT * pfValue);
	HRESULT(STDMETHODCALLTYPE * put_DisplayType) (ISystemMonitor2 * This, DisplayTypeConstants eDisplayType);
	HRESULT(STDMETHODCALLTYPE * get_DisplayType) (ISystemMonitor2 * This, DisplayTypeConstants * peDisplayType);
	HRESULT(STDMETHODCALLTYPE * put_ManualUpdate) (ISystemMonitor2 * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ManualUpdate) (ISystemMonitor2 * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_GraphTitle) (ISystemMonitor2 * This, BSTR bsTitle);
	HRESULT(STDMETHODCALLTYPE * get_GraphTitle) (ISystemMonitor2 * This, BSTR * pbsTitle);
	HRESULT(STDMETHODCALLTYPE * put_YAxisLabel) (ISystemMonitor2 * This, BSTR bsTitle);
	HRESULT(STDMETHODCALLTYPE * get_YAxisLabel) (ISystemMonitor2 * This, BSTR * pbsTitle);
	HRESULT(STDMETHODCALLTYPE * CollectSample) (ISystemMonitor2 * This);
	HRESULT(STDMETHODCALLTYPE * UpdateGraph) (ISystemMonitor2 * This);
	HRESULT(STDMETHODCALLTYPE * BrowseCounters) (ISystemMonitor2 * This);
	HRESULT(STDMETHODCALLTYPE * DisplayProperties) (ISystemMonitor2 * This);
	HRESULT(STDMETHODCALLTYPE * Counter) (ISystemMonitor2 * This, INT iIndex, ICounterItem ** ppICounter);
	HRESULT(STDMETHODCALLTYPE * AddCounter) (ISystemMonitor2 * This, BSTR bsPath, ICounterItem ** ppICounter);
	HRESULT(STDMETHODCALLTYPE * DeleteCounter) (ISystemMonitor2 * This, ICounterItem * pCtr);
	HRESULT(STDMETHODCALLTYPE * get_BackColorCtl) (ISystemMonitor2 * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_BackColorCtl) (ISystemMonitor2 * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * put_LogFileName) (ISystemMonitor2 * This, BSTR bsFileName);
	HRESULT(STDMETHODCALLTYPE * get_LogFileName) (ISystemMonitor2 * This, BSTR * bsFileName);
	HRESULT(STDMETHODCALLTYPE * put_LogViewStart) (ISystemMonitor2 * This, DATE StartTime);
	HRESULT(STDMETHODCALLTYPE * get_LogViewStart) (ISystemMonitor2 * This, DATE * StartTime);
	HRESULT(STDMETHODCALLTYPE * put_LogViewStop) (ISystemMonitor2 * This, DATE StopTime);
	HRESULT(STDMETHODCALLTYPE * get_LogViewStop) (ISystemMonitor2 * This, DATE * StopTime);
	HRESULT(STDMETHODCALLTYPE * get_GridColor) (ISystemMonitor2 * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_GridColor) (ISystemMonitor2 * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * get_TimeBarColor) (ISystemMonitor2 * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_TimeBarColor) (ISystemMonitor2 * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * get_Highlight) (ISystemMonitor2 * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_Highlight) (ISystemMonitor2 * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowToolbar) (ISystemMonitor2 * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowToolbar) (ISystemMonitor2 * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * Paste) (ISystemMonitor2 * This);
	HRESULT(STDMETHODCALLTYPE * Copy) (ISystemMonitor2 * This);
	HRESULT(STDMETHODCALLTYPE * Reset) (ISystemMonitor2 * This);
	HRESULT(STDMETHODCALLTYPE * put_ReadOnly) (ISystemMonitor2 * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ReadOnly) (ISystemMonitor2 * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ReportValueType) (ISystemMonitor2 * This, ReportValueTypeConstants eReportValueType);
	HRESULT(STDMETHODCALLTYPE * get_ReportValueType) (ISystemMonitor2 * This, ReportValueTypeConstants * peReportValueType);
	HRESULT(STDMETHODCALLTYPE * put_MonitorDuplicateInstances) (ISystemMonitor2 * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_MonitorDuplicateInstances) (ISystemMonitor2 * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_DisplayFilter) (ISystemMonitor2 * This, INT iValue);
	HRESULT(STDMETHODCALLTYPE * get_DisplayFilter) (ISystemMonitor2 * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * get_LogFiles) (ISystemMonitor2 * This, ILogFiles ** ppILogFiles);
	HRESULT(STDMETHODCALLTYPE * put_DataSourceType) (ISystemMonitor2 * This, DataSourceTypeConstants eDataSourceType);
	HRESULT(STDMETHODCALLTYPE * get_DataSourceType) (ISystemMonitor2 * This, DataSourceTypeConstants * peDataSourceType);
	HRESULT(STDMETHODCALLTYPE * put_SqlDsnName) (ISystemMonitor2 * This, BSTR bsSqlDsnName);
	HRESULT(STDMETHODCALLTYPE * get_SqlDsnName) (ISystemMonitor2 * This, BSTR * bsSqlDsnName);
	HRESULT(STDMETHODCALLTYPE * put_SqlLogSetName) (ISystemMonitor2 * This, BSTR bsSqlLogSetName);
	HRESULT(STDMETHODCALLTYPE * get_SqlLogSetName) (ISystemMonitor2 * This, BSTR * bsSqlLogSetName);
	HRESULT(STDMETHODCALLTYPE * put_EnableDigitGrouping) (ISystemMonitor2 * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_EnableDigitGrouping) (ISystemMonitor2 * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_EnableToolTips) (ISystemMonitor2 * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_EnableToolTips) (ISystemMonitor2 * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowTimeAxisLabels) (ISystemMonitor2 * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowTimeAxisLabels) (ISystemMonitor2 * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ChartScroll) (ISystemMonitor2 * This, VARIANT_BOOL bScroll);
	HRESULT(STDMETHODCALLTYPE * get_ChartScroll) (ISystemMonitor2 * This, VARIANT_BOOL * pbScroll);
	HRESULT(STDMETHODCALLTYPE * put_DataPointCount) (ISystemMonitor2 * This, INT iNewCount);
	HRESULT(STDMETHODCALLTYPE * get_DataPointCount) (ISystemMonitor2 * This, INT * piDataPointCount);
	HRESULT(STDMETHODCALLTYPE * ScaleToFit) (ISystemMonitor2 * This, VARIANT_BOOL bSelectedCountersOnly);
	HRESULT(STDMETHODCALLTYPE * SaveAs) (ISystemMonitor2 * This, BSTR bstrFileName, SysmonFileType eSysmonFileType);
	HRESULT(STDMETHODCALLTYPE * Relog) (ISystemMonitor2 * This, BSTR bstrFileName, SysmonFileType eSysmonFileType, INT iFilter);
	HRESULT(STDMETHODCALLTYPE * ClearData) (ISystemMonitor2 * This);
	HRESULT(STDMETHODCALLTYPE * get_LogSourceStartTime) (ISystemMonitor2 * This, DATE * pDate);
	HRESULT(STDMETHODCALLTYPE * get_LogSourceStopTime) (ISystemMonitor2 * This, DATE * pDate);
	HRESULT(STDMETHODCALLTYPE * SetLogViewRange) (ISystemMonitor2 * This, DATE StartTime, DATE StopTime);
	HRESULT(STDMETHODCALLTYPE * GetLogViewRange) (ISystemMonitor2 * This, DATE * StartTime, DATE * StopTime);
	HRESULT(STDMETHODCALLTYPE * BatchingLock) (ISystemMonitor2 * This, VARIANT_BOOL fLock, SysmonBatchReason eBatchReason);
	HRESULT(STDMETHODCALLTYPE * LoadSettings) (ISystemMonitor2 * This, BSTR bstrSettingFileName);
	END_INTERFACE
}  ISystemMonitor2Vtbl;
interface ISystemMonitor2
{
	CONST_VTBL struct ISystemMonitor2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISystemMonitor2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISystemMonitor2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISystemMonitor2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISystemMonitor2_get_Appearance(This,iAppearance)( (This)->lpVtbl -> get_Appearance(This,iAppearance) )
#define ISystemMonitor2_put_Appearance(This,iAppearance)( (This)->lpVtbl -> put_Appearance(This,iAppearance) )
#define ISystemMonitor2_get_BackColor(This,pColor)( (This)->lpVtbl -> get_BackColor(This,pColor) )
#define ISystemMonitor2_put_BackColor(This,Color)( (This)->lpVtbl -> put_BackColor(This,Color) )
#define ISystemMonitor2_get_BorderStyle(This,iBorderStyle)( (This)->lpVtbl -> get_BorderStyle(This,iBorderStyle) )
#define ISystemMonitor2_put_BorderStyle(This,iBorderStyle)( (This)->lpVtbl -> put_BorderStyle(This,iBorderStyle) )
#define ISystemMonitor2_get_ForeColor(This,pColor)( (This)->lpVtbl -> get_ForeColor(This,pColor) )
#define ISystemMonitor2_put_ForeColor(This,Color)( (This)->lpVtbl -> put_ForeColor(This,Color) )
#define ISystemMonitor2_get_Font(This,ppFont)( (This)->lpVtbl -> get_Font(This,ppFont) )
#define ISystemMonitor2_putref_Font(This,pFont)( (This)->lpVtbl -> putref_Font(This,pFont) )
#define ISystemMonitor2_get_Counters(This,ppICounters)( (This)->lpVtbl -> get_Counters(This,ppICounters) )
#define ISystemMonitor2_put_ShowVerticalGrid(This,bState)( (This)->lpVtbl -> put_ShowVerticalGrid(This,bState) )
#define ISystemMonitor2_get_ShowVerticalGrid(This,pbState)( (This)->lpVtbl -> get_ShowVerticalGrid(This,pbState) )
#define ISystemMonitor2_put_ShowHorizontalGrid(This,bState)( (This)->lpVtbl -> put_ShowHorizontalGrid(This,bState) )
#define ISystemMonitor2_get_ShowHorizontalGrid(This,pbState)( (This)->lpVtbl -> get_ShowHorizontalGrid(This,pbState) )
#define ISystemMonitor2_put_ShowLegend(This,bState)( (This)->lpVtbl -> put_ShowLegend(This,bState) )
#define ISystemMonitor2_get_ShowLegend(This,pbState)( (This)->lpVtbl -> get_ShowLegend(This,pbState) )
#define ISystemMonitor2_put_ShowScaleLabels(This,bState)( (This)->lpVtbl -> put_ShowScaleLabels(This,bState) )
#define ISystemMonitor2_get_ShowScaleLabels(This,pbState)( (This)->lpVtbl -> get_ShowScaleLabels(This,pbState) )
#define ISystemMonitor2_put_ShowValueBar(This,bState)( (This)->lpVtbl -> put_ShowValueBar(This,bState) )
#define ISystemMonitor2_get_ShowValueBar(This,pbState)( (This)->lpVtbl -> get_ShowValueBar(This,pbState) )
#define ISystemMonitor2_put_MaximumScale(This,iValue)( (This)->lpVtbl -> put_MaximumScale(This,iValue) )
#define ISystemMonitor2_get_MaximumScale(This,piValue)( (This)->lpVtbl -> get_MaximumScale(This,piValue) )
#define ISystemMonitor2_put_MinimumScale(This,iValue)( (This)->lpVtbl -> put_MinimumScale(This,iValue) )
#define ISystemMonitor2_get_MinimumScale(This,piValue)( (This)->lpVtbl -> get_MinimumScale(This,piValue) )
#define ISystemMonitor2_put_UpdateInterval(This,fValue)( (This)->lpVtbl -> put_UpdateInterval(This,fValue) )
#define ISystemMonitor2_get_UpdateInterval(This,pfValue)( (This)->lpVtbl -> get_UpdateInterval(This,pfValue) )
#define ISystemMonitor2_put_DisplayType(This,eDisplayType)( (This)->lpVtbl -> put_DisplayType(This,eDisplayType) )
#define ISystemMonitor2_get_DisplayType(This,peDisplayType)( (This)->lpVtbl -> get_DisplayType(This,peDisplayType) )
#define ISystemMonitor2_put_ManualUpdate(This,bState)( (This)->lpVtbl -> put_ManualUpdate(This,bState) )
#define ISystemMonitor2_get_ManualUpdate(This,pbState)( (This)->lpVtbl -> get_ManualUpdate(This,pbState) )
#define ISystemMonitor2_put_GraphTitle(This,bsTitle)( (This)->lpVtbl -> put_GraphTitle(This,bsTitle) )
#define ISystemMonitor2_get_GraphTitle(This,pbsTitle)( (This)->lpVtbl -> get_GraphTitle(This,pbsTitle) )
#define ISystemMonitor2_put_YAxisLabel(This,bsTitle)( (This)->lpVtbl -> put_YAxisLabel(This,bsTitle) )
#define ISystemMonitor2_get_YAxisLabel(This,pbsTitle)( (This)->lpVtbl -> get_YAxisLabel(This,pbsTitle) )
#define ISystemMonitor2_CollectSample(This)( (This)->lpVtbl -> CollectSample(This) )
#define ISystemMonitor2_UpdateGraph(This)( (This)->lpVtbl -> UpdateGraph(This) )
#define ISystemMonitor2_BrowseCounters(This)( (This)->lpVtbl -> BrowseCounters(This) )
#define ISystemMonitor2_DisplayProperties(This)( (This)->lpVtbl -> DisplayProperties(This) )
#define ISystemMonitor2_Counter(This,iIndex,ppICounter)( (This)->lpVtbl -> Counter(This,iIndex,ppICounter) )
#define ISystemMonitor2_AddCounter(This,bsPath,ppICounter)( (This)->lpVtbl -> AddCounter(This,bsPath,ppICounter) )
#define ISystemMonitor2_DeleteCounter(This,pCtr)( (This)->lpVtbl -> DeleteCounter(This,pCtr) )
#define ISystemMonitor2_get_BackColorCtl(This,pColor)( (This)->lpVtbl -> get_BackColorCtl(This,pColor) )
#define ISystemMonitor2_put_BackColorCtl(This,Color)( (This)->lpVtbl -> put_BackColorCtl(This,Color) )
#define ISystemMonitor2_put_LogFileName(This,bsFileName)( (This)->lpVtbl -> put_LogFileName(This,bsFileName) )
#define ISystemMonitor2_get_LogFileName(This,bsFileName)( (This)->lpVtbl -> get_LogFileName(This,bsFileName) )
#define ISystemMonitor2_put_LogViewStart(This,StartTime)( (This)->lpVtbl -> put_LogViewStart(This,StartTime) )
#define ISystemMonitor2_get_LogViewStart(This,StartTime)( (This)->lpVtbl -> get_LogViewStart(This,StartTime) )
#define ISystemMonitor2_put_LogViewStop(This,StopTime)( (This)->lpVtbl -> put_LogViewStop(This,StopTime) )
#define ISystemMonitor2_get_LogViewStop(This,StopTime)( (This)->lpVtbl -> get_LogViewStop(This,StopTime) )
#define ISystemMonitor2_get_GridColor(This,pColor)( (This)->lpVtbl -> get_GridColor(This,pColor) )
#define ISystemMonitor2_put_GridColor(This,Color)( (This)->lpVtbl -> put_GridColor(This,Color) )
#define ISystemMonitor2_get_TimeBarColor(This,pColor)( (This)->lpVtbl -> get_TimeBarColor(This,pColor) )
#define ISystemMonitor2_put_TimeBarColor(This,Color)( (This)->lpVtbl -> put_TimeBarColor(This,Color) )
#define ISystemMonitor2_get_Highlight(This,pbState)( (This)->lpVtbl -> get_Highlight(This,pbState) )
#define ISystemMonitor2_put_Highlight(This,bState)( (This)->lpVtbl -> put_Highlight(This,bState) )
#define ISystemMonitor2_get_ShowToolbar(This,pbState)( (This)->lpVtbl -> get_ShowToolbar(This,pbState) )
#define ISystemMonitor2_put_ShowToolbar(This,bState)( (This)->lpVtbl -> put_ShowToolbar(This,bState) )
#define ISystemMonitor2_Paste(This)( (This)->lpVtbl -> Paste(This) )
#define ISystemMonitor2_Copy(This)( (This)->lpVtbl -> Copy(This) )
#define ISystemMonitor2_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ISystemMonitor2_put_ReadOnly(This,bState)( (This)->lpVtbl -> put_ReadOnly(This,bState) )
#define ISystemMonitor2_get_ReadOnly(This,pbState)( (This)->lpVtbl -> get_ReadOnly(This,pbState) )
#define ISystemMonitor2_put_ReportValueType(This,eReportValueType)( (This)->lpVtbl -> put_ReportValueType(This,eReportValueType) )
#define ISystemMonitor2_get_ReportValueType(This,peReportValueType)( (This)->lpVtbl -> get_ReportValueType(This,peReportValueType) )
#define ISystemMonitor2_put_MonitorDuplicateInstances(This,bState)( (This)->lpVtbl -> put_MonitorDuplicateInstances(This,bState) )
#define ISystemMonitor2_get_MonitorDuplicateInstances(This,pbState)( (This)->lpVtbl -> get_MonitorDuplicateInstances(This,pbState) )
#define ISystemMonitor2_put_DisplayFilter(This,iValue)( (This)->lpVtbl -> put_DisplayFilter(This,iValue) )
#define ISystemMonitor2_get_DisplayFilter(This,piValue)( (This)->lpVtbl -> get_DisplayFilter(This,piValue) )
#define ISystemMonitor2_get_LogFiles(This,ppILogFiles)( (This)->lpVtbl -> get_LogFiles(This,ppILogFiles) )
#define ISystemMonitor2_put_DataSourceType(This,eDataSourceType)( (This)->lpVtbl -> put_DataSourceType(This,eDataSourceType) )
#define ISystemMonitor2_get_DataSourceType(This,peDataSourceType)( (This)->lpVtbl -> get_DataSourceType(This,peDataSourceType) )
#define ISystemMonitor2_put_SqlDsnName(This,bsSqlDsnName)( (This)->lpVtbl -> put_SqlDsnName(This,bsSqlDsnName) )
#define ISystemMonitor2_get_SqlDsnName(This,bsSqlDsnName)( (This)->lpVtbl -> get_SqlDsnName(This,bsSqlDsnName) )
#define ISystemMonitor2_put_SqlLogSetName(This,bsSqlLogSetName)( (This)->lpVtbl -> put_SqlLogSetName(This,bsSqlLogSetName) )
#define ISystemMonitor2_get_SqlLogSetName(This,bsSqlLogSetName)( (This)->lpVtbl -> get_SqlLogSetName(This,bsSqlLogSetName) )
#define ISystemMonitor2_put_EnableDigitGrouping(This,bState)( (This)->lpVtbl -> put_EnableDigitGrouping(This,bState) )
#define ISystemMonitor2_get_EnableDigitGrouping(This,pbState)( (This)->lpVtbl -> get_EnableDigitGrouping(This,pbState) )
#define ISystemMonitor2_put_EnableToolTips(This,bState)( (This)->lpVtbl -> put_EnableToolTips(This,bState) )
#define ISystemMonitor2_get_EnableToolTips(This,pbState)( (This)->lpVtbl -> get_EnableToolTips(This,pbState) )
#define ISystemMonitor2_put_ShowTimeAxisLabels(This,bState)( (This)->lpVtbl -> put_ShowTimeAxisLabels(This,bState) )
#define ISystemMonitor2_get_ShowTimeAxisLabels(This,pbState)( (This)->lpVtbl -> get_ShowTimeAxisLabels(This,pbState) )
#define ISystemMonitor2_put_ChartScroll(This,bScroll)( (This)->lpVtbl -> put_ChartScroll(This,bScroll) )
#define ISystemMonitor2_get_ChartScroll(This,pbScroll)( (This)->lpVtbl -> get_ChartScroll(This,pbScroll) )
#define ISystemMonitor2_put_DataPointCount(This,iNewCount)( (This)->lpVtbl -> put_DataPointCount(This,iNewCount) )
#define ISystemMonitor2_get_DataPointCount(This,piDataPointCount)( (This)->lpVtbl -> get_DataPointCount(This,piDataPointCount) )
#define ISystemMonitor2_ScaleToFit(This,bSelectedCountersOnly)( (This)->lpVtbl -> ScaleToFit(This,bSelectedCountersOnly) )
#define ISystemMonitor2_SaveAs(This,bstrFileName,eSysmonFileType)( (This)->lpVtbl -> SaveAs(This,bstrFileName,eSysmonFileType) )
#define ISystemMonitor2_Relog(This,bstrFileName,eSysmonFileType,iFilter)( (This)->lpVtbl -> Relog(This,bstrFileName,eSysmonFileType,iFilter) )
#define ISystemMonitor2_ClearData(This)( (This)->lpVtbl -> ClearData(This) )
#define ISystemMonitor2_get_LogSourceStartTime(This,pDate)( (This)->lpVtbl -> get_LogSourceStartTime(This,pDate) )
#define ISystemMonitor2_get_LogSourceStopTime(This,pDate)( (This)->lpVtbl -> get_LogSourceStopTime(This,pDate) )
#define ISystemMonitor2_SetLogViewRange(This,StartTime,StopTime)( (This)->lpVtbl -> SetLogViewRange(This,StartTime,StopTime) )
#define ISystemMonitor2_GetLogViewRange(This,StartTime,StopTime)( (This)->lpVtbl -> GetLogViewRange(This,StartTime,StopTime) )
#define ISystemMonitor2_BatchingLock(This,fLock,eBatchReason)( (This)->lpVtbl -> BatchingLock(This,fLock,eBatchReason) )
#define ISystemMonitor2_LoadSettings(This,bstrSettingFileName)( (This)->lpVtbl -> LoadSettings(This,bstrSettingFileName) )
#endif
#endif
#ifndef ___ISystemMonitorUnion_INTERFACE_DEFINED__
#define ___ISystemMonitorUnion_INTERFACE_DEFINED__
DEFINE_GUID(IID__ISystemMonitorUnion, 0xc8a77338, 0x265f, 0x4de5, 0xaa, 0x25, 0xc7, 0xda, 0x1c, 0xe5, 0xa8, 0xf4);
typedef struct _ISystemMonitorUnionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_ISystemMonitorUnion * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_ISystemMonitorUnion * This);
	ULONG(STDMETHODCALLTYPE * Release) (_ISystemMonitorUnion * This);
	HRESULT(STDMETHODCALLTYPE * get_Appearance) (_ISystemMonitorUnion * This, INT * iAppearance);
	HRESULT(STDMETHODCALLTYPE * put_Appearance) (_ISystemMonitorUnion * This, INT iAppearance);
	HRESULT(STDMETHODCALLTYPE * get_BackColor) (_ISystemMonitorUnion * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_BackColor) (_ISystemMonitorUnion * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * get_BorderStyle) (_ISystemMonitorUnion * This, INT * iBorderStyle);
	HRESULT(STDMETHODCALLTYPE * put_BorderStyle) (_ISystemMonitorUnion * This, INT iBorderStyle);
	HRESULT(STDMETHODCALLTYPE * get_ForeColor) (_ISystemMonitorUnion * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_ForeColor) (_ISystemMonitorUnion * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * get_Font) (_ISystemMonitorUnion * This, IFontDisp ** ppFont);
	HRESULT(STDMETHODCALLTYPE * putref_Font) (_ISystemMonitorUnion * This, IFontDisp * pFont);
	HRESULT(STDMETHODCALLTYPE * get_Counters) (_ISystemMonitorUnion * This, ICounters ** ppICounters);
	HRESULT(STDMETHODCALLTYPE * put_ShowVerticalGrid) (_ISystemMonitorUnion * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowVerticalGrid) (_ISystemMonitorUnion * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowHorizontalGrid) (_ISystemMonitorUnion * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowHorizontalGrid) (_ISystemMonitorUnion * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowLegend) (_ISystemMonitorUnion * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowLegend) (_ISystemMonitorUnion * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowScaleLabels) (_ISystemMonitorUnion * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowScaleLabels) (_ISystemMonitorUnion * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowValueBar) (_ISystemMonitorUnion * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowValueBar) (_ISystemMonitorUnion * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_MaximumScale) (_ISystemMonitorUnion * This, INT iValue);
	HRESULT(STDMETHODCALLTYPE * get_MaximumScale) (_ISystemMonitorUnion * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * put_MinimumScale) (_ISystemMonitorUnion * This, INT iValue);
	HRESULT(STDMETHODCALLTYPE * get_MinimumScale) (_ISystemMonitorUnion * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * put_UpdateInterval) (_ISystemMonitorUnion * This, FLOAT fValue);
	HRESULT(STDMETHODCALLTYPE * get_UpdateInterval) (_ISystemMonitorUnion * This, FLOAT * pfValue);
	HRESULT(STDMETHODCALLTYPE * put_DisplayType) (_ISystemMonitorUnion * This, DisplayTypeConstants eDisplayType);
	HRESULT(STDMETHODCALLTYPE * get_DisplayType) (_ISystemMonitorUnion * This, DisplayTypeConstants * peDisplayType);
	HRESULT(STDMETHODCALLTYPE * put_ManualUpdate) (_ISystemMonitorUnion * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ManualUpdate) (_ISystemMonitorUnion * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_GraphTitle) (_ISystemMonitorUnion * This, BSTR bsTitle);
	HRESULT(STDMETHODCALLTYPE * get_GraphTitle) (_ISystemMonitorUnion * This, BSTR * pbsTitle);
	HRESULT(STDMETHODCALLTYPE * put_YAxisLabel) (_ISystemMonitorUnion * This, BSTR bsTitle);
	HRESULT(STDMETHODCALLTYPE * get_YAxisLabel) (_ISystemMonitorUnion * This, BSTR * pbsTitle);
	HRESULT(STDMETHODCALLTYPE * CollectSample) (_ISystemMonitorUnion * This);
	HRESULT(STDMETHODCALLTYPE * UpdateGraph) (_ISystemMonitorUnion * This);
	HRESULT(STDMETHODCALLTYPE * BrowseCounters) (_ISystemMonitorUnion * This);
	HRESULT(STDMETHODCALLTYPE * DisplayProperties) (_ISystemMonitorUnion * This);
	HRESULT(STDMETHODCALLTYPE * Counter) (_ISystemMonitorUnion * This, INT iIndex, ICounterItem ** ppICounter);
	HRESULT(STDMETHODCALLTYPE * AddCounter) (_ISystemMonitorUnion * This, BSTR bsPath, ICounterItem ** ppICounter);
	HRESULT(STDMETHODCALLTYPE * DeleteCounter) (_ISystemMonitorUnion * This, ICounterItem * pCtr);
	HRESULT(STDMETHODCALLTYPE * get_BackColorCtl) (_ISystemMonitorUnion * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_BackColorCtl) (_ISystemMonitorUnion * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * put_LogFileName) (_ISystemMonitorUnion * This, BSTR bsFileName);
	HRESULT(STDMETHODCALLTYPE * get_LogFileName) (_ISystemMonitorUnion * This, BSTR * bsFileName);
	HRESULT(STDMETHODCALLTYPE * put_LogViewStart) (_ISystemMonitorUnion * This, DATE StartTime);
	HRESULT(STDMETHODCALLTYPE * get_LogViewStart) (_ISystemMonitorUnion * This, DATE * StartTime);
	HRESULT(STDMETHODCALLTYPE * put_LogViewStop) (_ISystemMonitorUnion * This, DATE StopTime);
	HRESULT(STDMETHODCALLTYPE * get_LogViewStop) (_ISystemMonitorUnion * This, DATE * StopTime);
	HRESULT(STDMETHODCALLTYPE * get_GridColor) (_ISystemMonitorUnion * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_GridColor) (_ISystemMonitorUnion * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * get_TimeBarColor) (_ISystemMonitorUnion * This, OLE_COLOR * pColor);
	HRESULT(STDMETHODCALLTYPE * put_TimeBarColor) (_ISystemMonitorUnion * This, OLE_COLOR Color);
	HRESULT(STDMETHODCALLTYPE * get_Highlight) (_ISystemMonitorUnion * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_Highlight) (_ISystemMonitorUnion * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowToolbar) (_ISystemMonitorUnion * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowToolbar) (_ISystemMonitorUnion * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * Paste) (_ISystemMonitorUnion * This);
	HRESULT(STDMETHODCALLTYPE * Copy) (_ISystemMonitorUnion * This);
	HRESULT(STDMETHODCALLTYPE * Reset) (_ISystemMonitorUnion * This);
	HRESULT(STDMETHODCALLTYPE * put_ReadOnly) (_ISystemMonitorUnion * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ReadOnly) (_ISystemMonitorUnion * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ReportValueType) (_ISystemMonitorUnion * This, ReportValueTypeConstants eReportValueType);
	HRESULT(STDMETHODCALLTYPE * get_ReportValueType) (_ISystemMonitorUnion * This, ReportValueTypeConstants * peReportValueType);
	HRESULT(STDMETHODCALLTYPE * put_MonitorDuplicateInstances) (_ISystemMonitorUnion * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_MonitorDuplicateInstances) (_ISystemMonitorUnion * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_DisplayFilter) (_ISystemMonitorUnion * This, INT iValue);
	HRESULT(STDMETHODCALLTYPE * get_DisplayFilter) (_ISystemMonitorUnion * This, INT * piValue);
	HRESULT(STDMETHODCALLTYPE * get_LogFiles) (_ISystemMonitorUnion * This, ILogFiles ** ppILogFiles);
	HRESULT(STDMETHODCALLTYPE * put_DataSourceType) (_ISystemMonitorUnion * This, DataSourceTypeConstants eDataSourceType);
	HRESULT(STDMETHODCALLTYPE * get_DataSourceType) (_ISystemMonitorUnion * This, DataSourceTypeConstants * peDataSourceType);
	HRESULT(STDMETHODCALLTYPE * put_SqlDsnName) (_ISystemMonitorUnion * This, BSTR bsSqlDsnName);
	HRESULT(STDMETHODCALLTYPE * get_SqlDsnName) (_ISystemMonitorUnion * This, BSTR * bsSqlDsnName);
	HRESULT(STDMETHODCALLTYPE * put_SqlLogSetName) (_ISystemMonitorUnion * This, BSTR bsSqlLogSetName);
	HRESULT(STDMETHODCALLTYPE * get_SqlLogSetName) (_ISystemMonitorUnion * This, BSTR * bsSqlLogSetName);
	HRESULT(STDMETHODCALLTYPE * put_EnableDigitGrouping) (_ISystemMonitorUnion * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_EnableDigitGrouping) (_ISystemMonitorUnion * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_EnableToolTips) (_ISystemMonitorUnion * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_EnableToolTips) (_ISystemMonitorUnion * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ShowTimeAxisLabels) (_ISystemMonitorUnion * This, VARIANT_BOOL bState);
	HRESULT(STDMETHODCALLTYPE * get_ShowTimeAxisLabels) (_ISystemMonitorUnion * This, VARIANT_BOOL * pbState);
	HRESULT(STDMETHODCALLTYPE * put_ChartScroll) (_ISystemMonitorUnion * This, VARIANT_BOOL bScroll);
	HRESULT(STDMETHODCALLTYPE * get_ChartScroll) (_ISystemMonitorUnion * This, VARIANT_BOOL * pbScroll);
	HRESULT(STDMETHODCALLTYPE * put_DataPointCount) (_ISystemMonitorUnion * This, INT iNewCount);
	HRESULT(STDMETHODCALLTYPE * get_DataPointCount) (_ISystemMonitorUnion * This, INT * piDataPointCount);
	HRESULT(STDMETHODCALLTYPE * ScaleToFit) (_ISystemMonitorUnion * This, VARIANT_BOOL bSelectedCountersOnly);
	HRESULT(STDMETHODCALLTYPE * SaveAs) (_ISystemMonitorUnion * This, BSTR bstrFileName, SysmonFileType eSysmonFileType);
	HRESULT(STDMETHODCALLTYPE * Relog) (_ISystemMonitorUnion * This, BSTR bstrFileName, SysmonFileType eSysmonFileType, INT iFilter);
	HRESULT(STDMETHODCALLTYPE * ClearData) (_ISystemMonitorUnion * This);
	HRESULT(STDMETHODCALLTYPE * get_LogSourceStartTime) (_ISystemMonitorUnion * This, DATE * pDate);
	HRESULT(STDMETHODCALLTYPE * get_LogSourceStopTime) (_ISystemMonitorUnion * This, DATE * pDate);
	HRESULT(STDMETHODCALLTYPE * SetLogViewRange) (_ISystemMonitorUnion * This, DATE StartTime, DATE StopTime);
	HRESULT(STDMETHODCALLTYPE * GetLogViewRange) (_ISystemMonitorUnion * This, DATE * StartTime, DATE * StopTime);
	HRESULT(STDMETHODCALLTYPE * BatchingLock) (_ISystemMonitorUnion * This, VARIANT_BOOL fLock, SysmonBatchReason eBatchReason);
	HRESULT(STDMETHODCALLTYPE * LoadSettings) (_ISystemMonitorUnion * This, BSTR bstrSettingFileName);
	END_INTERFACE
}  _ISystemMonitorUnionVtbl;
interface _ISystemMonitorUnion
{
	CONST_VTBL struct _ISystemMonitorUnionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _ISystemMonitorUnion_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _ISystemMonitorUnion_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define _ISystemMonitorUnion_Release(This)( (This)->lpVtbl -> Release(This) )
#define _ISystemMonitorUnion_get_Appearance(This,iAppearance)( (This)->lpVtbl -> get_Appearance(This,iAppearance) )
#define _ISystemMonitorUnion_put_Appearance(This,iAppearance)( (This)->lpVtbl -> put_Appearance(This,iAppearance) )
#define _ISystemMonitorUnion_get_BackColor(This,pColor)( (This)->lpVtbl -> get_BackColor(This,pColor) )
#define _ISystemMonitorUnion_put_BackColor(This,Color)( (This)->lpVtbl -> put_BackColor(This,Color) )
#define _ISystemMonitorUnion_get_BorderStyle(This,iBorderStyle)( (This)->lpVtbl -> get_BorderStyle(This,iBorderStyle) )
#define _ISystemMonitorUnion_put_BorderStyle(This,iBorderStyle)( (This)->lpVtbl -> put_BorderStyle(This,iBorderStyle) )
#define _ISystemMonitorUnion_get_ForeColor(This,pColor)( (This)->lpVtbl -> get_ForeColor(This,pColor) )
#define _ISystemMonitorUnion_put_ForeColor(This,Color)( (This)->lpVtbl -> put_ForeColor(This,Color) )
#define _ISystemMonitorUnion_get_Font(This,ppFont)( (This)->lpVtbl -> get_Font(This,ppFont) )
#define _ISystemMonitorUnion_putref_Font(This,pFont)( (This)->lpVtbl -> putref_Font(This,pFont) )
#define _ISystemMonitorUnion_get_Counters(This,ppICounters)( (This)->lpVtbl -> get_Counters(This,ppICounters) )
#define _ISystemMonitorUnion_put_ShowVerticalGrid(This,bState)( (This)->lpVtbl -> put_ShowVerticalGrid(This,bState) )
#define _ISystemMonitorUnion_get_ShowVerticalGrid(This,pbState)( (This)->lpVtbl -> get_ShowVerticalGrid(This,pbState) )
#define _ISystemMonitorUnion_put_ShowHorizontalGrid(This,bState)( (This)->lpVtbl -> put_ShowHorizontalGrid(This,bState) )
#define _ISystemMonitorUnion_get_ShowHorizontalGrid(This,pbState)( (This)->lpVtbl -> get_ShowHorizontalGrid(This,pbState) )
#define _ISystemMonitorUnion_put_ShowLegend(This,bState)( (This)->lpVtbl -> put_ShowLegend(This,bState) )
#define _ISystemMonitorUnion_get_ShowLegend(This,pbState)( (This)->lpVtbl -> get_ShowLegend(This,pbState) )
#define _ISystemMonitorUnion_put_ShowScaleLabels(This,bState)( (This)->lpVtbl -> put_ShowScaleLabels(This,bState) )
#define _ISystemMonitorUnion_get_ShowScaleLabels(This,pbState)( (This)->lpVtbl -> get_ShowScaleLabels(This,pbState) )
#define _ISystemMonitorUnion_put_ShowValueBar(This,bState)( (This)->lpVtbl -> put_ShowValueBar(This,bState) )
#define _ISystemMonitorUnion_get_ShowValueBar(This,pbState)( (This)->lpVtbl -> get_ShowValueBar(This,pbState) )
#define _ISystemMonitorUnion_put_MaximumScale(This,iValue)( (This)->lpVtbl -> put_MaximumScale(This,iValue) )
#define _ISystemMonitorUnion_get_MaximumScale(This,piValue)( (This)->lpVtbl -> get_MaximumScale(This,piValue) )
#define _ISystemMonitorUnion_put_MinimumScale(This,iValue)( (This)->lpVtbl -> put_MinimumScale(This,iValue) )
#define _ISystemMonitorUnion_get_MinimumScale(This,piValue)( (This)->lpVtbl -> get_MinimumScale(This,piValue) )
#define _ISystemMonitorUnion_put_UpdateInterval(This,fValue)( (This)->lpVtbl -> put_UpdateInterval(This,fValue) )
#define _ISystemMonitorUnion_get_UpdateInterval(This,pfValue)( (This)->lpVtbl -> get_UpdateInterval(This,pfValue) )
#define _ISystemMonitorUnion_put_DisplayType(This,eDisplayType)( (This)->lpVtbl -> put_DisplayType(This,eDisplayType) )
#define _ISystemMonitorUnion_get_DisplayType(This,peDisplayType)( (This)->lpVtbl -> get_DisplayType(This,peDisplayType) )
#define _ISystemMonitorUnion_put_ManualUpdate(This,bState)( (This)->lpVtbl -> put_ManualUpdate(This,bState) )
#define _ISystemMonitorUnion_get_ManualUpdate(This,pbState)( (This)->lpVtbl -> get_ManualUpdate(This,pbState) )
#define _ISystemMonitorUnion_put_GraphTitle(This,bsTitle)( (This)->lpVtbl -> put_GraphTitle(This,bsTitle) )
#define _ISystemMonitorUnion_get_GraphTitle(This,pbsTitle)( (This)->lpVtbl -> get_GraphTitle(This,pbsTitle) )
#define _ISystemMonitorUnion_put_YAxisLabel(This,bsTitle)( (This)->lpVtbl -> put_YAxisLabel(This,bsTitle) )
#define _ISystemMonitorUnion_get_YAxisLabel(This,pbsTitle)( (This)->lpVtbl -> get_YAxisLabel(This,pbsTitle) )
#define _ISystemMonitorUnion_CollectSample(This)( (This)->lpVtbl -> CollectSample(This) )
#define _ISystemMonitorUnion_UpdateGraph(This)( (This)->lpVtbl -> UpdateGraph(This) )
#define _ISystemMonitorUnion_BrowseCounters(This)( (This)->lpVtbl -> BrowseCounters(This) )
#define _ISystemMonitorUnion_DisplayProperties(This)( (This)->lpVtbl -> DisplayProperties(This) )
#define _ISystemMonitorUnion_Counter(This,iIndex,ppICounter)( (This)->lpVtbl -> Counter(This,iIndex,ppICounter) )
#define _ISystemMonitorUnion_AddCounter(This,bsPath,ppICounter)( (This)->lpVtbl -> AddCounter(This,bsPath,ppICounter) )
#define _ISystemMonitorUnion_DeleteCounter(This,pCtr)( (This)->lpVtbl -> DeleteCounter(This,pCtr) )
#define _ISystemMonitorUnion_get_BackColorCtl(This,pColor)( (This)->lpVtbl -> get_BackColorCtl(This,pColor) )
#define _ISystemMonitorUnion_put_BackColorCtl(This,Color)( (This)->lpVtbl -> put_BackColorCtl(This,Color) )
#define _ISystemMonitorUnion_put_LogFileName(This,bsFileName)( (This)->lpVtbl -> put_LogFileName(This,bsFileName) )
#define _ISystemMonitorUnion_get_LogFileName(This,bsFileName)( (This)->lpVtbl -> get_LogFileName(This,bsFileName) )
#define _ISystemMonitorUnion_put_LogViewStart(This,StartTime)( (This)->lpVtbl -> put_LogViewStart(This,StartTime) )
#define _ISystemMonitorUnion_get_LogViewStart(This,StartTime)( (This)->lpVtbl -> get_LogViewStart(This,StartTime) )
#define _ISystemMonitorUnion_put_LogViewStop(This,StopTime)( (This)->lpVtbl -> put_LogViewStop(This,StopTime) )
#define _ISystemMonitorUnion_get_LogViewStop(This,StopTime)( (This)->lpVtbl -> get_LogViewStop(This,StopTime) )
#define _ISystemMonitorUnion_get_GridColor(This,pColor)( (This)->lpVtbl -> get_GridColor(This,pColor) )
#define _ISystemMonitorUnion_put_GridColor(This,Color)( (This)->lpVtbl -> put_GridColor(This,Color) )
#define _ISystemMonitorUnion_get_TimeBarColor(This,pColor)( (This)->lpVtbl -> get_TimeBarColor(This,pColor) )
#define _ISystemMonitorUnion_put_TimeBarColor(This,Color)( (This)->lpVtbl -> put_TimeBarColor(This,Color) )
#define _ISystemMonitorUnion_get_Highlight(This,pbState)( (This)->lpVtbl -> get_Highlight(This,pbState) )
#define _ISystemMonitorUnion_put_Highlight(This,bState)( (This)->lpVtbl -> put_Highlight(This,bState) )
#define _ISystemMonitorUnion_get_ShowToolbar(This,pbState)( (This)->lpVtbl -> get_ShowToolbar(This,pbState) )
#define _ISystemMonitorUnion_put_ShowToolbar(This,bState)( (This)->lpVtbl -> put_ShowToolbar(This,bState) )
#define _ISystemMonitorUnion_Paste(This)( (This)->lpVtbl -> Paste(This) )
#define _ISystemMonitorUnion_Copy(This)( (This)->lpVtbl -> Copy(This) )
#define _ISystemMonitorUnion_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define _ISystemMonitorUnion_put_ReadOnly(This,bState)( (This)->lpVtbl -> put_ReadOnly(This,bState) )
#define _ISystemMonitorUnion_get_ReadOnly(This,pbState)( (This)->lpVtbl -> get_ReadOnly(This,pbState) )
#define _ISystemMonitorUnion_put_ReportValueType(This,eReportValueType)( (This)->lpVtbl -> put_ReportValueType(This,eReportValueType) )
#define _ISystemMonitorUnion_get_ReportValueType(This,peReportValueType)( (This)->lpVtbl -> get_ReportValueType(This,peReportValueType) )
#define _ISystemMonitorUnion_put_MonitorDuplicateInstances(This,bState)( (This)->lpVtbl -> put_MonitorDuplicateInstances(This,bState) )
#define _ISystemMonitorUnion_get_MonitorDuplicateInstances(This,pbState)( (This)->lpVtbl -> get_MonitorDuplicateInstances(This,pbState) )
#define _ISystemMonitorUnion_put_DisplayFilter(This,iValue)( (This)->lpVtbl -> put_DisplayFilter(This,iValue) )
#define _ISystemMonitorUnion_get_DisplayFilter(This,piValue)( (This)->lpVtbl -> get_DisplayFilter(This,piValue) )
#define _ISystemMonitorUnion_get_LogFiles(This,ppILogFiles)( (This)->lpVtbl -> get_LogFiles(This,ppILogFiles) )
#define _ISystemMonitorUnion_put_DataSourceType(This,eDataSourceType)( (This)->lpVtbl -> put_DataSourceType(This,eDataSourceType) )
#define _ISystemMonitorUnion_get_DataSourceType(This,peDataSourceType)( (This)->lpVtbl -> get_DataSourceType(This,peDataSourceType) )
#define _ISystemMonitorUnion_put_SqlDsnName(This,bsSqlDsnName)( (This)->lpVtbl -> put_SqlDsnName(This,bsSqlDsnName) )
#define _ISystemMonitorUnion_get_SqlDsnName(This,bsSqlDsnName)( (This)->lpVtbl -> get_SqlDsnName(This,bsSqlDsnName) )
#define _ISystemMonitorUnion_put_SqlLogSetName(This,bsSqlLogSetName)( (This)->lpVtbl -> put_SqlLogSetName(This,bsSqlLogSetName) )
#define _ISystemMonitorUnion_get_SqlLogSetName(This,bsSqlLogSetName)( (This)->lpVtbl -> get_SqlLogSetName(This,bsSqlLogSetName) )
#define _ISystemMonitorUnion_put_EnableDigitGrouping(This,bState)( (This)->lpVtbl -> put_EnableDigitGrouping(This,bState) )
#define _ISystemMonitorUnion_get_EnableDigitGrouping(This,pbState)( (This)->lpVtbl -> get_EnableDigitGrouping(This,pbState) )
#define _ISystemMonitorUnion_put_EnableToolTips(This,bState)( (This)->lpVtbl -> put_EnableToolTips(This,bState) )
#define _ISystemMonitorUnion_get_EnableToolTips(This,pbState)( (This)->lpVtbl -> get_EnableToolTips(This,pbState) )
#define _ISystemMonitorUnion_put_ShowTimeAxisLabels(This,bState)( (This)->lpVtbl -> put_ShowTimeAxisLabels(This,bState) )
#define _ISystemMonitorUnion_get_ShowTimeAxisLabels(This,pbState)( (This)->lpVtbl -> get_ShowTimeAxisLabels(This,pbState) )
#define _ISystemMonitorUnion_put_ChartScroll(This,bScroll)( (This)->lpVtbl -> put_ChartScroll(This,bScroll) )
#define _ISystemMonitorUnion_get_ChartScroll(This,pbScroll)( (This)->lpVtbl -> get_ChartScroll(This,pbScroll) )
#define _ISystemMonitorUnion_put_DataPointCount(This,iNewCount)( (This)->lpVtbl -> put_DataPointCount(This,iNewCount) )
#define _ISystemMonitorUnion_get_DataPointCount(This,piDataPointCount)( (This)->lpVtbl -> get_DataPointCount(This,piDataPointCount) )
#define _ISystemMonitorUnion_ScaleToFit(This,bSelectedCountersOnly)( (This)->lpVtbl -> ScaleToFit(This,bSelectedCountersOnly) )
#define _ISystemMonitorUnion_SaveAs(This,bstrFileName,eSysmonFileType)( (This)->lpVtbl -> SaveAs(This,bstrFileName,eSysmonFileType) )
#define _ISystemMonitorUnion_Relog(This,bstrFileName,eSysmonFileType,iFilter)( (This)->lpVtbl -> Relog(This,bstrFileName,eSysmonFileType,iFilter) )
#define _ISystemMonitorUnion_ClearData(This)( (This)->lpVtbl -> ClearData(This) )
#define _ISystemMonitorUnion_get_LogSourceStartTime(This,pDate)( (This)->lpVtbl -> get_LogSourceStartTime(This,pDate) )
#define _ISystemMonitorUnion_get_LogSourceStopTime(This,pDate)( (This)->lpVtbl -> get_LogSourceStopTime(This,pDate) )
#define _ISystemMonitorUnion_SetLogViewRange(This,StartTime,StopTime)( (This)->lpVtbl -> SetLogViewRange(This,StartTime,StopTime) )
#define _ISystemMonitorUnion_GetLogViewRange(This,StartTime,StopTime)( (This)->lpVtbl -> GetLogViewRange(This,StartTime,StopTime) )
#define _ISystemMonitorUnion_BatchingLock(This,fLock,eBatchReason)( (This)->lpVtbl -> BatchingLock(This,fLock,eBatchReason) )
#define _ISystemMonitorUnion_LoadSettings(This,bstrSettingFileName)( (This)->lpVtbl -> LoadSettings(This,bstrSettingFileName) )
#endif
#endif
#ifndef __DISystemMonitor_DISPINTERFACE_DEFINED__
#define __DISystemMonitor_DISPINTERFACE_DEFINED__
DEFINE_GUID(DIID_DISystemMonitor, 0x13D73D81, 0xC32E, 0x11cf, 0x93, 0x98, 0x00, 0xAA, 0x00, 0xA3, 0xDD, 0xEA);
typedef struct DISystemMonitorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (DISystemMonitor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (DISystemMonitor * This);
	ULONG(STDMETHODCALLTYPE * Release) (DISystemMonitor * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (DISystemMonitor * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (DISystemMonitor * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (DISystemMonitor * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (DISystemMonitor * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  DISystemMonitorVtbl;
interface DISystemMonitor
{
	CONST_VTBL struct DISystemMonitorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DISystemMonitor_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DISystemMonitor_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define DISystemMonitor_Release(This)( (This)->lpVtbl -> Release(This) )
#define DISystemMonitor_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DISystemMonitor_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DISystemMonitor_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DISystemMonitor_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __DISystemMonitorInternal_DISPINTERFACE_DEFINED__
#define __DISystemMonitorInternal_DISPINTERFACE_DEFINED__
DEFINE_GUID(DIID_DISystemMonitorInternal, 0x194EB242, 0xC32C, 0x11cf, 0x93, 0x98, 0x00, 0xAA, 0x00, 0xA3, 0xDD, 0xEA);
typedef struct DISystemMonitorInternalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (DISystemMonitorInternal * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (DISystemMonitorInternal * This);
	ULONG(STDMETHODCALLTYPE * Release) (DISystemMonitorInternal * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (DISystemMonitorInternal * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (DISystemMonitorInternal * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (DISystemMonitorInternal * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (DISystemMonitorInternal * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  DISystemMonitorInternalVtbl;
interface DISystemMonitorInternal
{
	CONST_VTBL struct DISystemMonitorInternalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DISystemMonitorInternal_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DISystemMonitorInternal_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define DISystemMonitorInternal_Release(This)( (This)->lpVtbl -> Release(This) )
#define DISystemMonitorInternal_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DISystemMonitorInternal_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DISystemMonitorInternal_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DISystemMonitorInternal_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __ISystemMonitorEvents_INTERFACE_DEFINED__
#define __ISystemMonitorEvents_INTERFACE_DEFINED__
DEFINE_GUID(IID_ISystemMonitorEvents, 0xEE660EA0, 0x4ABD, 0x11cf, 0x94, 0x3A, 0x00, 0x80, 0x29, 0x00, 0x43, 0x47);
typedef struct ISystemMonitorEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISystemMonitorEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISystemMonitorEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISystemMonitorEvents * This);
	void (STDMETHODCALLTYPE * OnCounterSelected) (ISystemMonitorEvents * This, INT Index);
	void (STDMETHODCALLTYPE * OnCounterAdded) (ISystemMonitorEvents * This, INT Index);
	void (STDMETHODCALLTYPE * OnCounterDeleted) (ISystemMonitorEvents * This, INT Index);
	void (STDMETHODCALLTYPE * OnSampleCollected) (ISystemMonitorEvents * This);
	void (STDMETHODCALLTYPE * OnDblClick) (ISystemMonitorEvents * This, INT Index);
	END_INTERFACE
}  ISystemMonitorEventsVtbl;
interface ISystemMonitorEvents
{
	CONST_VTBL struct ISystemMonitorEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISystemMonitorEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISystemMonitorEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISystemMonitorEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISystemMonitorEvents_OnCounterSelected(This,Index)( (This)->lpVtbl -> OnCounterSelected(This,Index) )
#define ISystemMonitorEvents_OnCounterAdded(This,Index)( (This)->lpVtbl -> OnCounterAdded(This,Index) )
#define ISystemMonitorEvents_OnCounterDeleted(This,Index)( (This)->lpVtbl -> OnCounterDeleted(This,Index) )
#define ISystemMonitorEvents_OnSampleCollected(This)( (This)->lpVtbl -> OnSampleCollected(This) )
#define ISystemMonitorEvents_OnDblClick(This,Index)( (This)->lpVtbl -> OnDblClick(This,Index) )
#endif
#endif
#ifndef __DISystemMonitorEvents_DISPINTERFACE_DEFINED__
#define __DISystemMonitorEvents_DISPINTERFACE_DEFINED__
DEFINE_GUID(DIID_DISystemMonitorEvents, 0x84979930, 0x4AB3, 0x11cf, 0x94, 0x3A, 0x00, 0x80, 0x29, 0x00, 0x43, 0x47);
typedef struct DISystemMonitorEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (DISystemMonitorEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (DISystemMonitorEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (DISystemMonitorEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (DISystemMonitorEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (DISystemMonitorEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (DISystemMonitorEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (DISystemMonitorEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  DISystemMonitorEventsVtbl;
interface DISystemMonitorEvents
{
	CONST_VTBL struct DISystemMonitorEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DISystemMonitorEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DISystemMonitorEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define DISystemMonitorEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define DISystemMonitorEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DISystemMonitorEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DISystemMonitorEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DISystemMonitorEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
DEFINE_GUID(CLSID_SystemMonitor, 0xC4D2D8E0, 0xD1DD, 0x11ce, 0x94, 0x0F, 0x00, 0x80, 0x29, 0x00, 0x43, 0x47);
DEFINE_GUID(CLSID_CounterItem, 0xC4D2D8E0, 0xD1DD, 0x11ce, 0x94, 0x0F, 0x00, 0x80, 0x29, 0x00, 0x43, 0x48);
DEFINE_GUID(CLSID_Counters, 0xB2B066D2, 0x2AAC, 0x11cf, 0x94, 0x2F, 0x00, 0x80, 0x29, 0x00, 0x43, 0x47);
DEFINE_GUID(CLSID_LogFileItem, 0x16EC5BE8, 0xDF93, 0x4237, 0x94, 0xE4, 0x9E, 0xE9, 0x18, 0x11, 0x1D, 0x71);
DEFINE_GUID(CLSID_LogFiles, 0x2735D9FD, 0xF6B9, 0x4f19, 0xA5, 0xD9, 0xE2, 0xD0, 0x68, 0x58, 0x4B, 0xC5);
DEFINE_GUID(CLSID_CounterItem2, 0x43196c62, 0xc31f, 0x4ce3, 0xa0, 0x2e, 0x79, 0xef, 0xe0, 0xf6, 0xa5, 0x25);
DEFINE_GUID(CLSID_SystemMonitor2, 0x7f30578c, 0x5f38, 0x4612, 0xac, 0xfe, 0x6e, 0xd0, 0x4c, 0x7b, 0x7a, 0xf8);
DEFINE_GUID(CLSID_AppearPropPage, 0xe49741e9, 0x93a8, 0x4ab1, 0x8e, 0x96, 0xbf, 0x44, 0x82, 0x28, 0x2e, 0x9c);
DEFINE_GUID(CLSID_GeneralPropPage, 0xC3E5D3D2, 0x1A03, 0x11CF, 0x94, 0x2D, 0x00, 0x80, 0x29, 0x00, 0x43, 0x47);
DEFINE_GUID(CLSID_GraphPropPage, 0xC3E5D3D3, 0x1A03, 0x11CF, 0x94, 0x2D, 0x00, 0x80, 0x29, 0x00, 0x43, 0x47);
DEFINE_GUID(CLSID_SourcePropPage, 0x0CF32AA1, 0x7571, 0x11D0, 0x93, 0xC4, 0x00, 0xAA, 0x00, 0xA3, 0xDD, 0xEA);
DEFINE_GUID(CLSID_CounterPropPage, 0xCF948561, 0xEDE8, 0x11CE, 0x94, 0x1E, 0x00, 0x80, 0x29, 0x00, 0x43, 0x47);
#endif
#endif
