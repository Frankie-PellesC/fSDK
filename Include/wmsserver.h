/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmsserver.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 16:26:07 2016
 \date		Modified on Mon Sep 19 16:26:07 2016
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
#ifndef __wmsserver_h__
#define __wmsserver_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSRootDirectories_FWD_DEFINED__
#define __IWMSRootDirectories_FWD_DEFINED__
typedef interface IWMSRootDirectories IWMSRootDirectories;
#endif
#ifndef __IWMSDiagnosticEvent_FWD_DEFINED__
#define __IWMSDiagnosticEvent_FWD_DEFINED__
typedef interface IWMSDiagnosticEvent IWMSDiagnosticEvent;
#endif
#ifndef __IWMSDiagnosticEvents_FWD_DEFINED__
#define __IWMSDiagnosticEvents_FWD_DEFINED__
typedef interface IWMSDiagnosticEvents IWMSDiagnosticEvents;
#endif
#ifndef __IWMSFileDescription_FWD_DEFINED__
#define __IWMSFileDescription_FWD_DEFINED__
typedef interface IWMSFileDescription IWMSFileDescription;
#endif
#ifndef __IWMSFileDescriptions_FWD_DEFINED__
#define __IWMSFileDescriptions_FWD_DEFINED__
typedef interface IWMSFileDescriptions IWMSFileDescriptions;
#endif
#ifndef __IWMSAvailableIPAddresses_FWD_DEFINED__
#define __IWMSAvailableIPAddresses_FWD_DEFINED__
typedef interface IWMSAvailableIPAddresses IWMSAvailableIPAddresses;
#endif
#ifndef __IWMSPlugins_FWD_DEFINED__
#define __IWMSPlugins_FWD_DEFINED__
typedef interface IWMSPlugins IWMSPlugins;
#endif
#ifndef __IWMSCacheItem_FWD_DEFINED__
#define __IWMSCacheItem_FWD_DEFINED__
typedef interface IWMSCacheItem IWMSCacheItem;
#endif
#ifndef __IWMSCacheItems_FWD_DEFINED__
#define __IWMSCacheItems_FWD_DEFINED__
typedef interface IWMSCacheItems IWMSCacheItems;
#endif
#ifndef __IWMSCacheProxyPlugin_FWD_DEFINED__
#define __IWMSCacheProxyPlugin_FWD_DEFINED__
typedef interface IWMSCacheProxyPlugin IWMSCacheProxyPlugin;
#endif
#ifndef __IWMSOutgoingDistributionConnection_FWD_DEFINED__
#define __IWMSOutgoingDistributionConnection_FWD_DEFINED__
typedef interface IWMSOutgoingDistributionConnection IWMSOutgoingDistributionConnection;
#endif
#ifndef __IWMSOutgoingDistributionConnections_FWD_DEFINED__
#define __IWMSOutgoingDistributionConnections_FWD_DEFINED__
typedef interface IWMSOutgoingDistributionConnections IWMSOutgoingDistributionConnections;
#endif
#ifndef __IWMSPlayer_FWD_DEFINED__
#define __IWMSPlayer_FWD_DEFINED__
typedef interface IWMSPlayer IWMSPlayer;
#endif
#ifndef __IWMSPlayers_FWD_DEFINED__
#define __IWMSPlayers_FWD_DEFINED__
typedef interface IWMSPlayers IWMSPlayers;
#endif
#ifndef __IWMSPublishingPointCurrentCounters_FWD_DEFINED__
#define __IWMSPublishingPointCurrentCounters_FWD_DEFINED__
typedef interface IWMSPublishingPointCurrentCounters IWMSPublishingPointCurrentCounters;
#endif
#ifndef __IWMSPublishingPointCurrentCounters2_FWD_DEFINED__
#define __IWMSPublishingPointCurrentCounters2_FWD_DEFINED__
typedef interface IWMSPublishingPointCurrentCounters2 IWMSPublishingPointCurrentCounters2;
#endif
#ifndef __IWMSPublishingPointPeakCounters_FWD_DEFINED__
#define __IWMSPublishingPointPeakCounters_FWD_DEFINED__
typedef interface IWMSPublishingPointPeakCounters IWMSPublishingPointPeakCounters;
#endif
#ifndef __IWMSPublishingPointPeakCounters2_FWD_DEFINED__
#define __IWMSPublishingPointPeakCounters2_FWD_DEFINED__
typedef interface IWMSPublishingPointPeakCounters2 IWMSPublishingPointPeakCounters2;
#endif
#ifndef __IWMSPublishingPointLimits_FWD_DEFINED__
#define __IWMSPublishingPointLimits_FWD_DEFINED__
typedef interface IWMSPublishingPointLimits IWMSPublishingPointLimits;
#endif
#ifndef __IWMSPublishingPointTotalCounters_FWD_DEFINED__
#define __IWMSPublishingPointTotalCounters_FWD_DEFINED__
typedef interface IWMSPublishingPointTotalCounters IWMSPublishingPointTotalCounters;
#endif
#ifndef __IWMSPublishingPointTotalCounters2_FWD_DEFINED__
#define __IWMSPublishingPointTotalCounters2_FWD_DEFINED__
typedef interface IWMSPublishingPointTotalCounters2 IWMSPublishingPointTotalCounters2;
#endif
#ifndef __IWMSServerTotalCounters_FWD_DEFINED__
#define __IWMSServerTotalCounters_FWD_DEFINED__
typedef interface IWMSServerTotalCounters IWMSServerTotalCounters;
#endif
#ifndef __IWMSServerTotalCounters2_FWD_DEFINED__
#define __IWMSServerTotalCounters2_FWD_DEFINED__
typedef interface IWMSServerTotalCounters2 IWMSServerTotalCounters2;
#endif
#ifndef __IWMSPublishingPoint_FWD_DEFINED__
#define __IWMSPublishingPoint_FWD_DEFINED__
typedef interface IWMSPublishingPoint IWMSPublishingPoint;
#endif
#ifndef __IWMSPublishingPoint2_FWD_DEFINED__
#define __IWMSPublishingPoint2_FWD_DEFINED__
typedef interface IWMSPublishingPoint2 IWMSPublishingPoint2;
#endif
#ifndef __IWMSOnDemandPublishingPoint_FWD_DEFINED__
#define __IWMSOnDemandPublishingPoint_FWD_DEFINED__
typedef interface IWMSOnDemandPublishingPoint IWMSOnDemandPublishingPoint;
#endif
#ifndef __IWMSOnDemandPublishingPoint2_FWD_DEFINED__
#define __IWMSOnDemandPublishingPoint2_FWD_DEFINED__
typedef interface IWMSOnDemandPublishingPoint2 IWMSOnDemandPublishingPoint2;
#endif
#ifndef __IWMSAnnouncementStreamFormats_FWD_DEFINED__
#define __IWMSAnnouncementStreamFormats_FWD_DEFINED__
typedef interface IWMSAnnouncementStreamFormats IWMSAnnouncementStreamFormats;
#endif
#ifndef __IWMSBroadcastPublishingPoint_FWD_DEFINED__
#define __IWMSBroadcastPublishingPoint_FWD_DEFINED__
typedef interface IWMSBroadcastPublishingPoint IWMSBroadcastPublishingPoint;
#endif
#ifndef __IWMSBroadcastPublishingPoint2_FWD_DEFINED__
#define __IWMSBroadcastPublishingPoint2_FWD_DEFINED__
typedef interface IWMSBroadcastPublishingPoint2 IWMSBroadcastPublishingPoint2;
#endif
#ifndef __IWMSPublishingPoints_FWD_DEFINED__
#define __IWMSPublishingPoints_FWD_DEFINED__
typedef interface IWMSPublishingPoints IWMSPublishingPoints;
#endif
#ifndef __IWMSServerCurrentCounters_FWD_DEFINED__
#define __IWMSServerCurrentCounters_FWD_DEFINED__
typedef interface IWMSServerCurrentCounters IWMSServerCurrentCounters;
#endif
#ifndef __IWMSServerCurrentCounters2_FWD_DEFINED__
#define __IWMSServerCurrentCounters2_FWD_DEFINED__
typedef interface IWMSServerCurrentCounters2 IWMSServerCurrentCounters2;
#endif
#ifndef __IWMSServerPeakCounters_FWD_DEFINED__
#define __IWMSServerPeakCounters_FWD_DEFINED__
typedef interface IWMSServerPeakCounters IWMSServerPeakCounters;
#endif
#ifndef __IWMSServerPeakCounters2_FWD_DEFINED__
#define __IWMSServerPeakCounters2_FWD_DEFINED__
typedef interface IWMSServerPeakCounters2 IWMSServerPeakCounters2;
#endif
#ifndef __IWMSServerLimits_FWD_DEFINED__
#define __IWMSServerLimits_FWD_DEFINED__
typedef interface IWMSServerLimits IWMSServerLimits;
#endif
#ifndef __IWMSServer_FWD_DEFINED__
#define __IWMSServer_FWD_DEFINED__
typedef interface IWMSServer IWMSServer;
#endif
#include "oaidl.h"
#include "xmldom.h"
#include "WMSNamedValues.h"
#include "WMSPlugin.h"
#include "wmsXMLDOMExtensions.h"
#include "streamcache.h"
#pragma once
#ifndef __wmsserver_iid
#define __wmsserver_iid
EXTERN_GUID(CLSID_WMSServerMainImpl, 0x1E62CD49, 0x3961, 0x11D2, 0x9E, 0xFC, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
#include <WMSDefs.h>
extern RPC_IF_HANDLE __MIDL_itf_wmsserver_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsserver_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSRootDirectories_INTERFACE_DEFINED__
#define __IWMSRootDirectories_INTERFACE_DEFINED__
extern const IID IID_IWMSRootDirectories;
typedef struct IWMSRootDirectoriesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSRootDirectories * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSRootDirectories * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSRootDirectories * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IWMSRootDirectories * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IWMSRootDirectories * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IWMSRootDirectories * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IWMSRootDirectories * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IWMSRootDirectories * This, const VARIANT varIndex, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IWMSRootDirectories * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_length) (IWMSRootDirectories * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IWMSRootDirectories * This, IUnknown ** pVal);
	END_INTERFACE
}  IWMSRootDirectoriesVtbl;
interface IWMSRootDirectories
{
	CONST_VTBL struct IWMSRootDirectoriesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSRootDirectories_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSRootDirectories_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSRootDirectories_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSRootDirectories_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSRootDirectories_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSRootDirectories_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSRootDirectories_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSRootDirectories_get_Item(This,varIndex,pVal) ( (This)->lpVtbl -> get_Item(This,varIndex,pVal) )
#define IWMSRootDirectories_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#define IWMSRootDirectories_get_length(This,pVal) ( (This)->lpVtbl -> get_length(This,pVal) )
#define IWMSRootDirectories_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#endif
#endif
#ifndef __IWMSDiagnosticEvent_INTERFACE_DEFINED__
#define __IWMSDiagnosticEvent_INTERFACE_DEFINED__
typedef DECLSPEC_UUID("5AC19D63-6057-4431-BE7E-2153FDF91397")
enum WMS_DIAGNOSTIC_EVENT
{
	WMS_DIAGNOSTIC_EVENT_LIMIT_HIT = 0,
	WMS_DIAGNOSTIC_EVENT_PLUGIN_EVENT_LOG_ERROR = 1,
	WMS_DIAGNOSTIC_EVENT_PLUGIN_EVENT_LOG_WARNING = 2,
	WMS_DIAGNOSTIC_EVENT_SERVER_EVENT_LOG_ERROR = 3,
	WMS_DIAGNOSTIC_EVENT_SERVER_EVENT_LOG_WARNING = 4
} WMS_DIAGNOSTIC_EVENT;
extern const IID IID_IWMSDiagnosticEvent;
typedef struct IWMSDiagnosticEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSDiagnosticEvent *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSDiagnosticEvent *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSDiagnosticEvent *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSDiagnosticEvent *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSDiagnosticEvent *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSDiagnosticEvent *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSDiagnosticEvent *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IWMSDiagnosticEvent *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Type) (IWMSDiagnosticEvent *This, WMS_DIAGNOSTIC_EVENT *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PublishingPointName) (IWMSDiagnosticEvent *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Time) (IWMSDiagnosticEvent *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_NumberOfOccurrences) (IWMSDiagnosticEvent *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_AdditionalInfo) (IWMSDiagnosticEvent *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_ErrorCode) (IWMSDiagnosticEvent *This, long *pVal);
	END_INTERFACE
}  IWMSDiagnosticEventVtbl;
interface IWMSDiagnosticEvent
{
	CONST_VTBL struct IWMSDiagnosticEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSDiagnosticEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSDiagnosticEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSDiagnosticEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSDiagnosticEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSDiagnosticEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSDiagnosticEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSDiagnosticEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSDiagnosticEvent_get_Name(This,pVal) ( (This)->lpVtbl -> get_Name(This,pVal) )
#define IWMSDiagnosticEvent_get_Type(This,pVal) ( (This)->lpVtbl -> get_Type(This,pVal) )
#define IWMSDiagnosticEvent_get_PublishingPointName(This,pVal) ( (This)->lpVtbl -> get_PublishingPointName(This,pVal) )
#define IWMSDiagnosticEvent_get_Time(This,pVal) ( (This)->lpVtbl -> get_Time(This,pVal) )
#define IWMSDiagnosticEvent_get_NumberOfOccurrences(This,pVal) ( (This)->lpVtbl -> get_NumberOfOccurrences(This,pVal) )
#define IWMSDiagnosticEvent_get_AdditionalInfo(This,pVal) ( (This)->lpVtbl -> get_AdditionalInfo(This,pVal) )
#define IWMSDiagnosticEvent_get_ErrorCode(This,pVal) ( (This)->lpVtbl -> get_ErrorCode(This,pVal) )
#endif
#endif
#ifndef __IWMSDiagnosticEvents_INTERFACE_DEFINED__
#define __IWMSDiagnosticEvents_INTERFACE_DEFINED__
extern const IID IID_IWMSDiagnosticEvents;
typedef struct IWMSDiagnosticEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSDiagnosticEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSDiagnosticEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSDiagnosticEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSDiagnosticEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSDiagnosticEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSDiagnosticEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSDiagnosticEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IWMSDiagnosticEvents *This, const VARIANT varIndex, IWMSDiagnosticEvent **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IWMSDiagnosticEvents *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_length) (IWMSDiagnosticEvents *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IWMSDiagnosticEvents *This, IUnknown **pVal);
	HRESULT(STDMETHODCALLTYPE *RemoveAll) (IWMSDiagnosticEvents *This);
	END_INTERFACE
}  IWMSDiagnosticEventsVtbl;
interface IWMSDiagnosticEvents
{
	CONST_VTBL struct IWMSDiagnosticEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSDiagnosticEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSDiagnosticEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSDiagnosticEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSDiagnosticEvents_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSDiagnosticEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSDiagnosticEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSDiagnosticEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSDiagnosticEvents_get_Item(This,varIndex,pVal) ( (This)->lpVtbl -> get_Item(This,varIndex,pVal) )
#define IWMSDiagnosticEvents_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#define IWMSDiagnosticEvents_get_length(This,pVal) ( (This)->lpVtbl -> get_length(This,pVal) )
#define IWMSDiagnosticEvents_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IWMSDiagnosticEvents_RemoveAll(This) ( (This)->lpVtbl -> RemoveAll(This) )
#endif
#endif
#ifndef __IWMSFileDescription_INTERFACE_DEFINED__
#define __IWMSFileDescription_INTERFACE_DEFINED__
typedef DECLSPEC_UUID("4124B8B4-BCE4-41c8-B49A-DA98C1401D3B")
enum WMS_FILE_TYPE
{
	WMS_FILE_UNSPECIFIED = 0,
	WMS_FILE_DIRECTORY = 1,
	WMS_FILE_MEDIA = 2,
	WMS_FILE_PLAYLIST = 3,
	WMS_FILE_STREAM_FORMAT = 4,
	WMS_FILE_REMOTE_FILE = 5
} WMS_FILE_TYPE;
extern const IID IID_IWMSFileDescription;
typedef struct IWMSFileDescriptionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSFileDescription *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSFileDescription *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSFileDescription *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSFileDescription *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSFileDescription *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSFileDescription *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSFileDescription *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IWMSFileDescription *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Type) (IWMSFileDescription *This, WMS_FILE_TYPE *pVal);
	END_INTERFACE
}  IWMSFileDescriptionVtbl;
interface IWMSFileDescription
{
	CONST_VTBL struct IWMSFileDescriptionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSFileDescription_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSFileDescription_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSFileDescription_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSFileDescription_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSFileDescription_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSFileDescription_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSFileDescription_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSFileDescription_get_Name(This,pVal) ( (This)->lpVtbl -> get_Name(This,pVal) )
#define IWMSFileDescription_get_Type(This,pVal) ( (This)->lpVtbl -> get_Type(This,pVal) )
#endif
#endif
#ifndef __IWMSFileDescriptions_INTERFACE_DEFINED__
#define __IWMSFileDescriptions_INTERFACE_DEFINED__
extern const IID IID_IWMSFileDescriptions;
typedef struct IWMSFileDescriptionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSFileDescriptions *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSFileDescriptions *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSFileDescriptions *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSFileDescriptions *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSFileDescriptions *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSFileDescriptions *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSFileDescriptions *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IWMSFileDescriptions *This, const VARIANT varIndex, IWMSFileDescription **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IWMSFileDescriptions *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_length) (IWMSFileDescriptions *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IWMSFileDescriptions *This, IUnknown **pVal);
	HRESULT(STDMETHODCALLTYPE *Delete) (IWMSFileDescriptions *This, const VARIANT varIndex);
	HRESULT(STDMETHODCALLTYPE *CreateDataSourceDirectory) (IWMSFileDescriptions *This, BSTR bstrName);
	END_INTERFACE
}  IWMSFileDescriptionsVtbl;
interface IWMSFileDescriptions
{
	CONST_VTBL struct IWMSFileDescriptionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSFileDescriptions_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSFileDescriptions_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSFileDescriptions_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSFileDescriptions_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSFileDescriptions_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSFileDescriptions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSFileDescriptions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSFileDescriptions_get_Item(This,varIndex,pVal) ( (This)->lpVtbl -> get_Item(This,varIndex,pVal) )
#define IWMSFileDescriptions_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#define IWMSFileDescriptions_get_length(This,pVal) ( (This)->lpVtbl -> get_length(This,pVal) )
#define IWMSFileDescriptions_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IWMSFileDescriptions_Delete(This,varIndex) ( (This)->lpVtbl -> Delete(This,varIndex) )
#define IWMSFileDescriptions_CreateDataSourceDirectory(This,bstrName) ( (This)->lpVtbl -> CreateDataSourceDirectory(This,bstrName) )
#endif
#endif
#ifndef __IWMSAvailableIPAddresses_INTERFACE_DEFINED__
#define __IWMSAvailableIPAddresses_INTERFACE_DEFINED__
extern const IID IID_IWMSAvailableIPAddresses;
typedef struct IWMSAvailableIPAddressesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSAvailableIPAddresses *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSAvailableIPAddresses *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSAvailableIPAddresses *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSAvailableIPAddresses *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSAvailableIPAddresses *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSAvailableIPAddresses *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSAvailableIPAddresses *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IWMSAvailableIPAddresses *This, const VARIANT varIndex, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IWMSAvailableIPAddresses *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_length) (IWMSAvailableIPAddresses *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IWMSAvailableIPAddresses *This, IUnknown **pVal);
	END_INTERFACE
}  IWMSAvailableIPAddressesVtbl;
interface IWMSAvailableIPAddresses
{
	CONST_VTBL struct IWMSAvailableIPAddressesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSAvailableIPAddresses_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSAvailableIPAddresses_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSAvailableIPAddresses_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSAvailableIPAddresses_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSAvailableIPAddresses_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSAvailableIPAddresses_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSAvailableIPAddresses_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSAvailableIPAddresses_get_Item(This,varIndex,pVal) ( (This)->lpVtbl -> get_Item(This,varIndex,pVal) )
#define IWMSAvailableIPAddresses_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#define IWMSAvailableIPAddresses_get_length(This,pVal) ( (This)->lpVtbl -> get_length(This,pVal) )
#define IWMSAvailableIPAddresses_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#endif
#endif
#ifndef __IWMSPlugins_INTERFACE_DEFINED__
#define __IWMSPlugins_INTERFACE_DEFINED__
extern const IID IID_IWMSPlugins;
typedef struct IWMSPluginsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSPlugins *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSPlugins *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSPlugins *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSPlugins *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSPlugins *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSPlugins *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSPlugins *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IWMSPlugins *This, const VARIANT varIndex, IWMSPlugin **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IWMSPlugins *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_length) (IWMSPlugins *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IWMSPlugins *This, IUnknown **pVal);
	HRESULT(STDMETHODCALLTYPE *Remove) (IWMSPlugins *This, VARIANT varIndex);
	HRESULT(STDMETHODCALLTYPE *Refresh) (IWMSPlugins *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IWMSPlugins *This, BSTR bstrDestName, IWMSPlugin *pSrcPlugin, IWMSPlugin **pDestPlugin);
	HRESULT(STDMETHODCALLTYPE *get_Category) (IWMSPlugins *This, BSTR *pVal);
	END_INTERFACE
}  IWMSPluginsVtbl;
interface IWMSPlugins
{
	CONST_VTBL struct IWMSPluginsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPlugins_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPlugins_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPlugins_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPlugins_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSPlugins_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSPlugins_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSPlugins_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSPlugins_get_Item(This,varIndex,pVal) ( (This)->lpVtbl -> get_Item(This,varIndex,pVal) )
#define IWMSPlugins_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#define IWMSPlugins_get_length(This,pVal) ( (This)->lpVtbl -> get_length(This,pVal) )
#define IWMSPlugins_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IWMSPlugins_Remove(This,varIndex) ( (This)->lpVtbl -> Remove(This,varIndex) )
#define IWMSPlugins_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IWMSPlugins_Clone(This,bstrDestName,pSrcPlugin,pDestPlugin) ( (This)->lpVtbl -> Clone(This,bstrDestName,pSrcPlugin,pDestPlugin) )
#define IWMSPlugins_get_Category(This,pVal) ( (This)->lpVtbl -> get_Category(This,pVal) )
#endif
#endif
#ifndef __IWMSCacheItem_INTERFACE_DEFINED__
#define __IWMSCacheItem_INTERFACE_DEFINED__
extern const IID IID_IWMSCacheItem;
typedef struct IWMSCacheItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSCacheItem *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSCacheItem *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSCacheItem *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSCacheItem *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSCacheItem *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSCacheItem *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSCacheItem *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_OriginUrl) (IWMSCacheItem *This, BSTR *pOriginUrl);
	HRESULT(STDMETHODCALLTYPE *get_ContentSize) (IWMSCacheItem *This, VARIANT *pContentSize);
	END_INTERFACE
}  IWMSCacheItemVtbl;
interface IWMSCacheItem
{
	CONST_VTBL struct IWMSCacheItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSCacheItem_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSCacheItem_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSCacheItem_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSCacheItem_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSCacheItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSCacheItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSCacheItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSCacheItem_get_OriginUrl(This,pOriginUrl) ( (This)->lpVtbl -> get_OriginUrl(This,pOriginUrl) )
#define IWMSCacheItem_get_ContentSize(This,pContentSize) ( (This)->lpVtbl -> get_ContentSize(This,pContentSize) )
#endif
#endif
#ifndef __IWMSCacheItems_INTERFACE_DEFINED__
#define __IWMSCacheItems_INTERFACE_DEFINED__
extern const IID IID_IWMSCacheItems;
typedef struct IWMSCacheItemsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSCacheItems *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSCacheItems *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSCacheItems *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSCacheItems *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSCacheItems *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSCacheItems *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSCacheItems *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IWMSCacheItems *This, const VARIANT varIndex, IWMSCacheItem **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IWMSCacheItems *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_length) (IWMSCacheItems *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IWMSCacheItems *This, IUnknown **pVal);
	HRESULT(STDMETHODCALLTYPE *Delete) (IWMSCacheItems *This, VARIANT varIndex);
	HRESULT(STDMETHODCALLTYPE *DeleteAll) (IWMSCacheItems *This);
	END_INTERFACE
}  IWMSCacheItemsVtbl;
interface IWMSCacheItems
{
	CONST_VTBL struct IWMSCacheItemsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSCacheItems_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSCacheItems_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSCacheItems_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSCacheItems_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSCacheItems_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSCacheItems_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSCacheItems_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSCacheItems_get_Item(This,varIndex,pVal) ( (This)->lpVtbl -> get_Item(This,varIndex,pVal) )
#define IWMSCacheItems_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#define IWMSCacheItems_get_length(This,pVal) ( (This)->lpVtbl -> get_length(This,pVal) )
#define IWMSCacheItems_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IWMSCacheItems_Delete(This,varIndex) ( (This)->lpVtbl -> Delete(This,varIndex) )
#define IWMSCacheItems_DeleteAll(This) ( (This)->lpVtbl -> DeleteAll(This) )
#endif
#endif
#ifndef __IWMSCacheProxyPlugin_INTERFACE_DEFINED__
#define __IWMSCacheProxyPlugin_INTERFACE_DEFINED__
extern const IID IID_IWMSCacheProxyPlugin;
typedef struct IWMSCacheProxyPluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSCacheProxyPlugin *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSCacheProxyPlugin *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSCacheProxyPlugin *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSCacheProxyPlugin *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSCacheProxyPlugin *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSCacheProxyPlugin *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSCacheProxyPlugin *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *put_Name) (IWMSCacheProxyPlugin *This, BSTR pVal);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IWMSCacheProxyPlugin *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Enabled) (IWMSCacheProxyPlugin *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_Enabled) (IWMSCacheProxyPlugin *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_CLSID) (IWMSCacheProxyPlugin *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CustomInterface) (IWMSCacheProxyPlugin *This, IDispatch **ppVal);
	HRESULT(STDMETHODCALLTYPE *get_Status) (IWMSCacheProxyPlugin *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_ErrorCode) (IWMSCacheProxyPlugin *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Properties) (IWMSCacheProxyPlugin *This, IWMSNamedValues **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Version) (IWMSCacheProxyPlugin *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_LoadType) (IWMSCacheProxyPlugin *This, WMS_PLUGIN_LOAD_TYPE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_LoadType) (IWMSCacheProxyPlugin *This, WMS_PLUGIN_LOAD_TYPE val);
	HRESULT(STDMETHODCALLTYPE *get_ErrorText) (IWMSCacheProxyPlugin *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_SelectionOrder) (IWMSCacheProxyPlugin *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_SelectionOrder) (IWMSCacheProxyPlugin *This, long lVal);
	HRESULT(STDMETHODCALLTYPE *get_SupportStatus) (IWMSCacheProxyPlugin *This, WMS_PLUGIN_SUPPORT_TYPE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_MonikerName) (IWMSCacheProxyPlugin *This, BSTR *pbstrVal);
	HRESULT(STDMETHODCALLTYPE *PreStuff) (IWMSCacheProxyPlugin *This, BSTR OriginURL, BSTR SourcePath, long lExpiration, long lBandwidth, long lRemoteEventFlags);
	HRESULT(STDMETHODCALLTYPE *get_CacheItems) (IWMSCacheProxyPlugin *This, IWMSCacheItems **ppVal);
	END_INTERFACE
}  IWMSCacheProxyPluginVtbl;
interface IWMSCacheProxyPlugin
{
	CONST_VTBL struct IWMSCacheProxyPluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSCacheProxyPlugin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSCacheProxyPlugin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSCacheProxyPlugin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSCacheProxyPlugin_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSCacheProxyPlugin_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSCacheProxyPlugin_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSCacheProxyPlugin_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSCacheProxyPlugin_put_Name(This,pVal) ( (This)->lpVtbl -> put_Name(This,pVal) )
#define IWMSCacheProxyPlugin_get_Name(This,pVal) ( (This)->lpVtbl -> get_Name(This,pVal) )
#define IWMSCacheProxyPlugin_get_Enabled(This,pVal) ( (This)->lpVtbl -> get_Enabled(This,pVal) )
#define IWMSCacheProxyPlugin_put_Enabled(This,newVal) ( (This)->lpVtbl -> put_Enabled(This,newVal) )
#define IWMSCacheProxyPlugin_get_CLSID(This,pVal) ( (This)->lpVtbl -> get_CLSID(This,pVal) )
#define IWMSCacheProxyPlugin_get_CustomInterface(This,ppVal) ( (This)->lpVtbl -> get_CustomInterface(This,ppVal) )
#define IWMSCacheProxyPlugin_get_Status(This,pVal) ( (This)->lpVtbl -> get_Status(This,pVal) )
#define IWMSCacheProxyPlugin_get_ErrorCode(This,pVal) ( (This)->lpVtbl -> get_ErrorCode(This,pVal) )
#define IWMSCacheProxyPlugin_get_Properties(This,pVal) ( (This)->lpVtbl -> get_Properties(This,pVal) )
#define IWMSCacheProxyPlugin_get_Version(This,pVal) ( (This)->lpVtbl -> get_Version(This,pVal) )
#define IWMSCacheProxyPlugin_get_LoadType(This,pVal) ( (This)->lpVtbl -> get_LoadType(This,pVal) )
#define IWMSCacheProxyPlugin_put_LoadType(This,val) ( (This)->lpVtbl -> put_LoadType(This,val) )
#define IWMSCacheProxyPlugin_get_ErrorText(This,pVal) ( (This)->lpVtbl -> get_ErrorText(This,pVal) )
#define IWMSCacheProxyPlugin_get_SelectionOrder(This,pVal) ( (This)->lpVtbl -> get_SelectionOrder(This,pVal) )
#define IWMSCacheProxyPlugin_put_SelectionOrder(This,lVal) ( (This)->lpVtbl -> put_SelectionOrder(This,lVal) )
#define IWMSCacheProxyPlugin_get_SupportStatus(This,pVal) ( (This)->lpVtbl -> get_SupportStatus(This,pVal) )
#define IWMSCacheProxyPlugin_get_MonikerName(This,pbstrVal) ( (This)->lpVtbl -> get_MonikerName(This,pbstrVal) )
#define IWMSCacheProxyPlugin_PreStuff(This,OriginURL,SourcePath,lExpiration,lBandwidth,lRemoteEventFlags) ( (This)->lpVtbl -> PreStuff(This,OriginURL,SourcePath,lExpiration,lBandwidth,lRemoteEventFlags) )
#define IWMSCacheProxyPlugin_get_CacheItems(This,ppVal) ( (This)->lpVtbl -> get_CacheItems(This,ppVal) )
#endif
#endif
typedef DECLSPEC_UUID("60f2ee55-dcaa-4cb6-a6d2-12bc23ac9df0")
enum WMS_CLIENT_STATUS
{
	WMS_CLIENT_DISCONNECTED = 0,
	WMS_CLIENT_IDLE = 0x1,
	WMS_CLIENT_OPEN = 0x2,
	WMS_CLIENT_STREAMING = 0x3
} WMS_CLIENT_STATUS;
extern RPC_IF_HANDLE __MIDL_itf_wmsserver_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsserver_0000_0010_v0_0_s_ifspec;
#ifndef __IWMSOutgoingDistributionConnection_INTERFACE_DEFINED__
#define __IWMSOutgoingDistributionConnection_INTERFACE_DEFINED__
extern const IID IID_IWMSOutgoingDistributionConnection;
typedef struct IWMSOutgoingDistributionConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSOutgoingDistributionConnection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSOutgoingDistributionConnection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSOutgoingDistributionConnection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSOutgoingDistributionConnection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSOutgoingDistributionConnection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSOutgoingDistributionConnection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSOutgoingDistributionConnection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ID) (IWMSOutgoingDistributionConnection *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_NetworkAddress) (IWMSOutgoingDistributionConnection *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_RequestedPlaylist) (IWMSOutgoingDistributionConnection *This, IWMSPlaylist **pVal);
	HRESULT(STDMETHODCALLTYPE *get_RequestedURL) (IWMSOutgoingDistributionConnection *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_ResolvedURL) (IWMSOutgoingDistributionConnection *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Status) (IWMSOutgoingDistributionConnection *This, WMS_CLIENT_STATUS *pVal);
	HRESULT(STDMETHODCALLTYPE *get_UserName) (IWMSOutgoingDistributionConnection *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_WrapperPlaylist) (IWMSOutgoingDistributionConnection *This, IWMSPlaylist **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Port) (IWMSOutgoingDistributionConnection *This, long *pVal);
	END_INTERFACE
}  IWMSOutgoingDistributionConnectionVtbl;
interface IWMSOutgoingDistributionConnection
{
	CONST_VTBL struct IWMSOutgoingDistributionConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSOutgoingDistributionConnection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSOutgoingDistributionConnection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSOutgoingDistributionConnection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSOutgoingDistributionConnection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSOutgoingDistributionConnection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSOutgoingDistributionConnection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSOutgoingDistributionConnection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSOutgoingDistributionConnection_get_ID(This,pVal) ( (This)->lpVtbl -> get_ID(This,pVal) )
#define IWMSOutgoingDistributionConnection_get_NetworkAddress(This,pVal) ( (This)->lpVtbl -> get_NetworkAddress(This,pVal) )
#define IWMSOutgoingDistributionConnection_get_RequestedPlaylist(This,pVal) ( (This)->lpVtbl -> get_RequestedPlaylist(This,pVal) )
#define IWMSOutgoingDistributionConnection_get_RequestedURL(This,pVal) ( (This)->lpVtbl -> get_RequestedURL(This,pVal) )
#define IWMSOutgoingDistributionConnection_get_ResolvedURL(This,pVal) ( (This)->lpVtbl -> get_ResolvedURL(This,pVal) )
#define IWMSOutgoingDistributionConnection_get_Status(This,pVal) ( (This)->lpVtbl -> get_Status(This,pVal) )
#define IWMSOutgoingDistributionConnection_get_UserName(This,pVal) ( (This)->lpVtbl -> get_UserName(This,pVal) )
#define IWMSOutgoingDistributionConnection_get_WrapperPlaylist(This,pVal) ( (This)->lpVtbl -> get_WrapperPlaylist(This,pVal) )
#define IWMSOutgoingDistributionConnection_get_Port(This,pVal) ( (This)->lpVtbl -> get_Port(This,pVal) )
#endif
#endif
#ifndef __IWMSOutgoingDistributionConnections_INTERFACE_DEFINED__
#define __IWMSOutgoingDistributionConnections_INTERFACE_DEFINED__
extern const IID IID_IWMSOutgoingDistributionConnections;
typedef struct IWMSOutgoingDistributionConnectionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSOutgoingDistributionConnections *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSOutgoingDistributionConnections *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSOutgoingDistributionConnections *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSOutgoingDistributionConnections *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSOutgoingDistributionConnections *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSOutgoingDistributionConnections *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSOutgoingDistributionConnections *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IWMSOutgoingDistributionConnections *This, const VARIANT varIndex, IWMSOutgoingDistributionConnection **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IWMSOutgoingDistributionConnections *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_length) (IWMSOutgoingDistributionConnections *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IWMSOutgoingDistributionConnections *This, IUnknown **pVal);
	HRESULT(STDMETHODCALLTYPE *Refresh) (IWMSOutgoingDistributionConnections *This);
	HRESULT(STDMETHODCALLTYPE *Remove) (IWMSOutgoingDistributionConnections *This, VARIANT varIndex);
	HRESULT(STDMETHODCALLTYPE *RemoveAll) (IWMSOutgoingDistributionConnections *This);
	END_INTERFACE
}  IWMSOutgoingDistributionConnectionsVtbl;
interface IWMSOutgoingDistributionConnections
{
	CONST_VTBL struct IWMSOutgoingDistributionConnectionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSOutgoingDistributionConnections_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSOutgoingDistributionConnections_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSOutgoingDistributionConnections_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSOutgoingDistributionConnections_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSOutgoingDistributionConnections_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSOutgoingDistributionConnections_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSOutgoingDistributionConnections_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSOutgoingDistributionConnections_get_Item(This,varIndex,pVal) ( (This)->lpVtbl -> get_Item(This,varIndex,pVal) )
#define IWMSOutgoingDistributionConnections_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#define IWMSOutgoingDistributionConnections_get_length(This,pVal) ( (This)->lpVtbl -> get_length(This,pVal) )
#define IWMSOutgoingDistributionConnections_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IWMSOutgoingDistributionConnections_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IWMSOutgoingDistributionConnections_Remove(This,varIndex) ( (This)->lpVtbl -> Remove(This,varIndex) )
#define IWMSOutgoingDistributionConnections_RemoveAll(This) ( (This)->lpVtbl -> RemoveAll(This) )
#endif
#endif
#ifndef __IWMSPlayer_INTERFACE_DEFINED__
#define __IWMSPlayer_INTERFACE_DEFINED__
extern const IID IID_IWMSPlayer;
typedef struct IWMSPlayerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSPlayer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSPlayer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSPlayer *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSPlayer *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSPlayer *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSPlayer *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSPlayer *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ID) (IWMSPlayer *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_NetworkAddress) (IWMSPlayer *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_RequestedPlaylist) (IWMSPlayer *This, IWMSPlaylist **pVal);
	HRESULT(STDMETHODCALLTYPE *get_RequestedURL) (IWMSPlayer *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_ResolvedURL) (IWMSPlayer *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Status) (IWMSPlayer *This, WMS_CLIENT_STATUS *pVal);
	HRESULT(STDMETHODCALLTYPE *get_UserName) (IWMSPlayer *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_WrapperPlaylist) (IWMSPlayer *This, IWMSPlaylist **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Port) (IWMSPlayer *This, long *pVal);
	END_INTERFACE
}  IWMSPlayerVtbl;
interface IWMSPlayer
{
	CONST_VTBL struct IWMSPlayerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPlayer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPlayer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPlayer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPlayer_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSPlayer_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSPlayer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSPlayer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSPlayer_get_ID(This,pVal) ( (This)->lpVtbl -> get_ID(This,pVal) )
#define IWMSPlayer_get_NetworkAddress(This,pVal) ( (This)->lpVtbl -> get_NetworkAddress(This,pVal) )
#define IWMSPlayer_get_RequestedPlaylist(This,pVal) ( (This)->lpVtbl -> get_RequestedPlaylist(This,pVal) )
#define IWMSPlayer_get_RequestedURL(This,pVal) ( (This)->lpVtbl -> get_RequestedURL(This,pVal) )
#define IWMSPlayer_get_ResolvedURL(This,pVal) ( (This)->lpVtbl -> get_ResolvedURL(This,pVal) )
#define IWMSPlayer_get_Status(This,pVal) ( (This)->lpVtbl -> get_Status(This,pVal) )
#define IWMSPlayer_get_UserName(This,pVal) ( (This)->lpVtbl -> get_UserName(This,pVal) )
#define IWMSPlayer_get_WrapperPlaylist(This,pVal) ( (This)->lpVtbl -> get_WrapperPlaylist(This,pVal) )
#define IWMSPlayer_get_Port(This,pVal) ( (This)->lpVtbl -> get_Port(This,pVal) )
#endif
#endif
#ifndef __IWMSPlayers_INTERFACE_DEFINED__
#define __IWMSPlayers_INTERFACE_DEFINED__
extern const IID IID_IWMSPlayers;
typedef struct IWMSPlayersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSPlayers *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSPlayers *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSPlayers *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSPlayers *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSPlayers *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSPlayers *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSPlayers *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IWMSPlayers *This, const VARIANT varIndex, IWMSPlayer **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IWMSPlayers *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_length) (IWMSPlayers *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IWMSPlayers *This, IUnknown **pVal);
	HRESULT(STDMETHODCALLTYPE *Refresh) (IWMSPlayers *This);
	HRESULT(STDMETHODCALLTYPE *Remove) (IWMSPlayers *This, VARIANT varIndex);
	HRESULT(STDMETHODCALLTYPE *RemoveAll) (IWMSPlayers *This);
	END_INTERFACE
}  IWMSPlayersVtbl;
interface IWMSPlayers
{
	CONST_VTBL struct IWMSPlayersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPlayers_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPlayers_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPlayers_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPlayers_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSPlayers_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSPlayers_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSPlayers_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSPlayers_get_Item(This,varIndex,pVal) ( (This)->lpVtbl -> get_Item(This,varIndex,pVal) )
#define IWMSPlayers_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#define IWMSPlayers_get_length(This,pVal) ( (This)->lpVtbl -> get_length(This,pVal) )
#define IWMSPlayers_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IWMSPlayers_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IWMSPlayers_Remove(This,varIndex) ( (This)->lpVtbl -> Remove(This,varIndex) )
#define IWMSPlayers_RemoveAll(This) ( (This)->lpVtbl -> RemoveAll(This) )
#endif
#endif
#ifndef __IWMSPublishingPointCurrentCounters_INTERFACE_DEFINED__
#define __IWMSPublishingPointCurrentCounters_INTERFACE_DEFINED__
extern const IID IID_IWMSPublishingPointCurrentCounters;
typedef struct IWMSPublishingPointCurrentCountersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSPublishingPointCurrentCounters *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSPublishingPointCurrentCounters *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSPublishingPointCurrentCounters *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSPublishingPointCurrentCounters *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSPublishingPointCurrentCounters *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSPublishingPointCurrentCounters *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSPublishingPointCurrentCounters *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ConnectedPlayers) (IWMSPublishingPointCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingHTTPPlayers) (IWMSPublishingPointCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingMMSPlayers) (IWMSPublishingPointCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionAllocatedBandwidth) (IWMSPublishingPointCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSPublishingPointCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlayerAllocatedBandwidth) (IWMSPublishingPointCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingRTSPPlayers) (IWMSPublishingPointCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingPlayers) (IWMSPublishingPointCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_AllCounters) (IWMSPublishingPointCurrentCounters *This, SAFEARRAY **ppsaCounters);
	END_INTERFACE
}  IWMSPublishingPointCurrentCountersVtbl;
interface IWMSPublishingPointCurrentCounters
{
	CONST_VTBL struct IWMSPublishingPointCurrentCountersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPublishingPointCurrentCounters_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPublishingPointCurrentCounters_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPublishingPointCurrentCounters_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPublishingPointCurrentCounters_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSPublishingPointCurrentCounters_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSPublishingPointCurrentCounters_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSPublishingPointCurrentCounters_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSPublishingPointCurrentCounters_get_ConnectedPlayers(This,pVal) ( (This)->lpVtbl -> get_ConnectedPlayers(This,pVal) )
#define IWMSPublishingPointCurrentCounters_get_StreamingHTTPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingHTTPPlayers(This,pVal) )
#define IWMSPublishingPointCurrentCounters_get_StreamingMMSPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingMMSPlayers(This,pVal) )
#define IWMSPublishingPointCurrentCounters_get_OutgoingDistributionAllocatedBandwidth(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionAllocatedBandwidth(This,pVal) )
#define IWMSPublishingPointCurrentCounters_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSPublishingPointCurrentCounters_get_PlayerAllocatedBandwidth(This,pVal) ( (This)->lpVtbl -> get_PlayerAllocatedBandwidth(This,pVal) )
#define IWMSPublishingPointCurrentCounters_get_StreamingRTSPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingRTSPPlayers(This,pVal) )
#define IWMSPublishingPointCurrentCounters_get_StreamingPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingPlayers(This,pVal) )
#define IWMSPublishingPointCurrentCounters_get_AllCounters(This,ppsaCounters) ( (This)->lpVtbl -> get_AllCounters(This,ppsaCounters) )
#endif
#endif
#ifndef __IWMSPublishingPointCurrentCounters2_INTERFACE_DEFINED__
#define __IWMSPublishingPointCurrentCounters2_INTERFACE_DEFINED__
extern const IID IID_IWMSPublishingPointCurrentCounters2;
typedef struct IWMSPublishingPointCurrentCounters2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSPublishingPointCurrentCounters2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSPublishingPointCurrentCounters2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSPublishingPointCurrentCounters2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSPublishingPointCurrentCounters2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSPublishingPointCurrentCounters2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSPublishingPointCurrentCounters2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSPublishingPointCurrentCounters2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ConnectedPlayers) (IWMSPublishingPointCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingHTTPPlayers) (IWMSPublishingPointCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingMMSPlayers) (IWMSPublishingPointCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionAllocatedBandwidth) (IWMSPublishingPointCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSPublishingPointCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlayerAllocatedBandwidth) (IWMSPublishingPointCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingRTSPPlayers) (IWMSPublishingPointCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingPlayers) (IWMSPublishingPointCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_AllCounters) (IWMSPublishingPointCurrentCounters2 *This, SAFEARRAY **ppsaCounters);
	HRESULT(STDMETHODCALLTYPE *get_StreamingUDPPlayers) (IWMSPublishingPointCurrentCounters2 *This, long *pVal);
	END_INTERFACE
}  IWMSPublishingPointCurrentCounters2Vtbl;
interface IWMSPublishingPointCurrentCounters2
{
	CONST_VTBL struct IWMSPublishingPointCurrentCounters2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPublishingPointCurrentCounters2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPublishingPointCurrentCounters2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPublishingPointCurrentCounters2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPublishingPointCurrentCounters2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSPublishingPointCurrentCounters2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSPublishingPointCurrentCounters2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSPublishingPointCurrentCounters2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSPublishingPointCurrentCounters2_get_ConnectedPlayers(This,pVal) ( (This)->lpVtbl -> get_ConnectedPlayers(This,pVal) )
#define IWMSPublishingPointCurrentCounters2_get_StreamingHTTPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingHTTPPlayers(This,pVal) )
#define IWMSPublishingPointCurrentCounters2_get_StreamingMMSPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingMMSPlayers(This,pVal) )
#define IWMSPublishingPointCurrentCounters2_get_OutgoingDistributionAllocatedBandwidth(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionAllocatedBandwidth(This,pVal) )
#define IWMSPublishingPointCurrentCounters2_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSPublishingPointCurrentCounters2_get_PlayerAllocatedBandwidth(This,pVal) ( (This)->lpVtbl -> get_PlayerAllocatedBandwidth(This,pVal) )
#define IWMSPublishingPointCurrentCounters2_get_StreamingRTSPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingRTSPPlayers(This,pVal) )
#define IWMSPublishingPointCurrentCounters2_get_StreamingPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingPlayers(This,pVal) )
#define IWMSPublishingPointCurrentCounters2_get_AllCounters(This,ppsaCounters) ( (This)->lpVtbl -> get_AllCounters(This,ppsaCounters) )
#define IWMSPublishingPointCurrentCounters2_get_StreamingUDPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingUDPPlayers(This,pVal) )
#endif
#endif
#ifndef __IWMSPublishingPointPeakCounters_INTERFACE_DEFINED__
#define __IWMSPublishingPointPeakCounters_INTERFACE_DEFINED__
extern const IID IID_IWMSPublishingPointPeakCounters;
typedef struct IWMSPublishingPointPeakCountersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSPublishingPointPeakCounters *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSPublishingPointPeakCounters *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSPublishingPointPeakCounters *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSPublishingPointPeakCounters *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSPublishingPointPeakCounters *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSPublishingPointPeakCounters *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSPublishingPointPeakCounters *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ConnectedPlayers) (IWMSPublishingPointPeakCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSPublishingPointPeakCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionAllocatedBandwidth) (IWMSPublishingPointPeakCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlayerAllocatedBandwidth) (IWMSPublishingPointPeakCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CountersStartTime) (IWMSPublishingPointPeakCounters *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingPlayers) (IWMSPublishingPointPeakCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *Reset) (IWMSPublishingPointPeakCounters *This);
	HRESULT(STDMETHODCALLTYPE *get_AllCounters) (IWMSPublishingPointPeakCounters *This, SAFEARRAY **ppsaCounters);
	END_INTERFACE
}  IWMSPublishingPointPeakCountersVtbl;
interface IWMSPublishingPointPeakCounters
{
	CONST_VTBL struct IWMSPublishingPointPeakCountersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPublishingPointPeakCounters_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPublishingPointPeakCounters_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPublishingPointPeakCounters_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPublishingPointPeakCounters_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSPublishingPointPeakCounters_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSPublishingPointPeakCounters_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSPublishingPointPeakCounters_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSPublishingPointPeakCounters_get_ConnectedPlayers(This,pVal) ( (This)->lpVtbl -> get_ConnectedPlayers(This,pVal) )
#define IWMSPublishingPointPeakCounters_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSPublishingPointPeakCounters_get_OutgoingDistributionAllocatedBandwidth(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionAllocatedBandwidth(This,pVal) )
#define IWMSPublishingPointPeakCounters_get_PlayerAllocatedBandwidth(This,pVal) ( (This)->lpVtbl -> get_PlayerAllocatedBandwidth(This,pVal) )
#define IWMSPublishingPointPeakCounters_get_CountersStartTime(This,pVal) ( (This)->lpVtbl -> get_CountersStartTime(This,pVal) )
#define IWMSPublishingPointPeakCounters_get_StreamingPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingPlayers(This,pVal) )
#define IWMSPublishingPointPeakCounters_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IWMSPublishingPointPeakCounters_get_AllCounters(This,ppsaCounters) ( (This)->lpVtbl -> get_AllCounters(This,ppsaCounters) )
#endif
#endif
#ifndef __IWMSPublishingPointPeakCounters2_INTERFACE_DEFINED__
#define __IWMSPublishingPointPeakCounters2_INTERFACE_DEFINED__
extern const IID IID_IWMSPublishingPointPeakCounters2;
typedef struct IWMSPublishingPointPeakCounters2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSPublishingPointPeakCounters2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSPublishingPointPeakCounters2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSPublishingPointPeakCounters2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSPublishingPointPeakCounters2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSPublishingPointPeakCounters2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSPublishingPointPeakCounters2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSPublishingPointPeakCounters2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ConnectedPlayers) (IWMSPublishingPointPeakCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSPublishingPointPeakCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionAllocatedBandwidth) (IWMSPublishingPointPeakCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlayerAllocatedBandwidth) (IWMSPublishingPointPeakCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CountersStartTime) (IWMSPublishingPointPeakCounters2 *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingPlayers) (IWMSPublishingPointPeakCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *Reset) (IWMSPublishingPointPeakCounters2 *This);
	HRESULT(STDMETHODCALLTYPE *get_AllCounters) (IWMSPublishingPointPeakCounters2 *This, SAFEARRAY **ppsaCounters);
	HRESULT(STDMETHODCALLTYPE *get_StreamingUDPPlayers) (IWMSPublishingPointPeakCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingHTTPPlayers) (IWMSPublishingPointPeakCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingRTSPPlayers) (IWMSPublishingPointPeakCounters2 *This, long *pVal);
	END_INTERFACE
}  IWMSPublishingPointPeakCounters2Vtbl;
interface IWMSPublishingPointPeakCounters2
{
	CONST_VTBL struct IWMSPublishingPointPeakCounters2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPublishingPointPeakCounters2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPublishingPointPeakCounters2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPublishingPointPeakCounters2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPublishingPointPeakCounters2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSPublishingPointPeakCounters2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSPublishingPointPeakCounters2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSPublishingPointPeakCounters2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSPublishingPointPeakCounters2_get_ConnectedPlayers(This,pVal) ( (This)->lpVtbl -> get_ConnectedPlayers(This,pVal) )
#define IWMSPublishingPointPeakCounters2_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSPublishingPointPeakCounters2_get_OutgoingDistributionAllocatedBandwidth(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionAllocatedBandwidth(This,pVal) )
#define IWMSPublishingPointPeakCounters2_get_PlayerAllocatedBandwidth(This,pVal) ( (This)->lpVtbl -> get_PlayerAllocatedBandwidth(This,pVal) )
#define IWMSPublishingPointPeakCounters2_get_CountersStartTime(This,pVal) ( (This)->lpVtbl -> get_CountersStartTime(This,pVal) )
#define IWMSPublishingPointPeakCounters2_get_StreamingPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingPlayers(This,pVal) )
#define IWMSPublishingPointPeakCounters2_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IWMSPublishingPointPeakCounters2_get_AllCounters(This,ppsaCounters) ( (This)->lpVtbl -> get_AllCounters(This,ppsaCounters) )
#define IWMSPublishingPointPeakCounters2_get_StreamingUDPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingUDPPlayers(This,pVal) )
#define IWMSPublishingPointPeakCounters2_get_StreamingHTTPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingHTTPPlayers(This,pVal) )
#define IWMSPublishingPointPeakCounters2_get_StreamingRTSPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingRTSPPlayers(This,pVal) )
#endif
#endif
#ifndef __IWMSPublishingPointLimits_INTERFACE_DEFINED__
#define __IWMSPublishingPointLimits_INTERFACE_DEFINED__
extern const IID IID_IWMSPublishingPointLimits;
typedef struct IWMSPublishingPointLimitsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSPublishingPointLimits *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSPublishingPointLimits *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSPublishingPointLimits *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSPublishingPointLimits *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSPublishingPointLimits *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSPublishingPointLimits *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSPublishingPointLimits *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ConnectedPlayers) (IWMSPublishingPointLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_ConnectedPlayers) (IWMSPublishingPointLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionBandwidth) (IWMSPublishingPointLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_OutgoingDistributionBandwidth) (IWMSPublishingPointLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSPublishingPointLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_OutgoingDistributionConnections) (IWMSPublishingPointLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_PerOutgoingDistributionConnectionBandwidth) (IWMSPublishingPointLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_PerOutgoingDistributionConnectionBandwidth) (IWMSPublishingPointLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_PlayerBandwidth) (IWMSPublishingPointLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_PlayerBandwidth) (IWMSPublishingPointLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_PerPlayerConnectionBandwidth) (IWMSPublishingPointLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_PerPlayerConnectionBandwidth) (IWMSPublishingPointLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_PlayerCacheDeliveryRate) (IWMSPublishingPointLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_PlayerCacheDeliveryRate) (IWMSPublishingPointLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_FECPacketSpan) (IWMSPublishingPointLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_FECPacketSpan) (IWMSPublishingPointLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_PerPlayerRapidStartBandwidth) (IWMSPublishingPointLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_PerPlayerRapidStartBandwidth) (IWMSPublishingPointLimits *This, long Val);
	END_INTERFACE
}  IWMSPublishingPointLimitsVtbl;
interface IWMSPublishingPointLimits
{
	CONST_VTBL struct IWMSPublishingPointLimitsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPublishingPointLimits_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPublishingPointLimits_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPublishingPointLimits_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPublishingPointLimits_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSPublishingPointLimits_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSPublishingPointLimits_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSPublishingPointLimits_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSPublishingPointLimits_get_ConnectedPlayers(This,pVal) ( (This)->lpVtbl -> get_ConnectedPlayers(This,pVal) )
#define IWMSPublishingPointLimits_put_ConnectedPlayers(This,Val) ( (This)->lpVtbl -> put_ConnectedPlayers(This,Val) )
#define IWMSPublishingPointLimits_get_OutgoingDistributionBandwidth(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionBandwidth(This,pVal) )
#define IWMSPublishingPointLimits_put_OutgoingDistributionBandwidth(This,Val) ( (This)->lpVtbl -> put_OutgoingDistributionBandwidth(This,Val) )
#define IWMSPublishingPointLimits_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSPublishingPointLimits_put_OutgoingDistributionConnections(This,Val) ( (This)->lpVtbl -> put_OutgoingDistributionConnections(This,Val) )
#define IWMSPublishingPointLimits_get_PerOutgoingDistributionConnectionBandwidth(This,pVal) ( (This)->lpVtbl -> get_PerOutgoingDistributionConnectionBandwidth(This,pVal) )
#define IWMSPublishingPointLimits_put_PerOutgoingDistributionConnectionBandwidth(This,Val) ( (This)->lpVtbl -> put_PerOutgoingDistributionConnectionBandwidth(This,Val) )
#define IWMSPublishingPointLimits_get_PlayerBandwidth(This,pVal) ( (This)->lpVtbl -> get_PlayerBandwidth(This,pVal) )
#define IWMSPublishingPointLimits_put_PlayerBandwidth(This,Val) ( (This)->lpVtbl -> put_PlayerBandwidth(This,Val) )
#define IWMSPublishingPointLimits_get_PerPlayerConnectionBandwidth(This,pVal) ( (This)->lpVtbl -> get_PerPlayerConnectionBandwidth(This,pVal) )
#define IWMSPublishingPointLimits_put_PerPlayerConnectionBandwidth(This,Val) ( (This)->lpVtbl -> put_PerPlayerConnectionBandwidth(This,Val) )
#define IWMSPublishingPointLimits_get_PlayerCacheDeliveryRate(This,pVal) ( (This)->lpVtbl -> get_PlayerCacheDeliveryRate(This,pVal) )
#define IWMSPublishingPointLimits_put_PlayerCacheDeliveryRate(This,Val) ( (This)->lpVtbl -> put_PlayerCacheDeliveryRate(This,Val) )
#define IWMSPublishingPointLimits_get_FECPacketSpan(This,pVal) ( (This)->lpVtbl -> get_FECPacketSpan(This,pVal) )
#define IWMSPublishingPointLimits_put_FECPacketSpan(This,Val) ( (This)->lpVtbl -> put_FECPacketSpan(This,Val) )
#define IWMSPublishingPointLimits_get_PerPlayerRapidStartBandwidth(This,pVal) ( (This)->lpVtbl -> get_PerPlayerRapidStartBandwidth(This,pVal) )
#define IWMSPublishingPointLimits_put_PerPlayerRapidStartBandwidth(This,Val) ( (This)->lpVtbl -> put_PerPlayerRapidStartBandwidth(This,Val) )
#endif
#endif
#ifndef __IWMSPublishingPointTotalCounters_INTERFACE_DEFINED__
#define __IWMSPublishingPointTotalCounters_INTERFACE_DEFINED__
extern const IID IID_IWMSPublishingPointTotalCounters;
typedef struct IWMSPublishingPointTotalCountersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSPublishingPointTotalCounters *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSPublishingPointTotalCounters *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSPublishingPointTotalCounters *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSPublishingPointTotalCounters *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSPublishingPointTotalCounters *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSPublishingPointTotalCounters *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSPublishingPointTotalCounters *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ConnectedPlayers) (IWMSPublishingPointTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSPublishingPointTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_LateReads) (IWMSPublishingPointTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionBytesSent) (IWMSPublishingPointTotalCounters *This, VARIANT *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlayerBytesSent) (IWMSPublishingPointTotalCounters *This, VARIANT *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CountersStartTime) (IWMSPublishingPointTotalCounters *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamDenials) (IWMSPublishingPointTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamErrors) (IWMSPublishingPointTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingPlayers) (IWMSPublishingPointTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamTerminations) (IWMSPublishingPointTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_FileBytesRead) (IWMSPublishingPointTotalCounters *This, VARIANT *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Advertisements) (IWMSPublishingPointTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *Reset) (IWMSPublishingPointTotalCounters *This);
	HRESULT(STDMETHODCALLTYPE *get_AllCounters) (IWMSPublishingPointTotalCounters *This, SAFEARRAY **ppsaCounters);
	END_INTERFACE
}  IWMSPublishingPointTotalCountersVtbl;
interface IWMSPublishingPointTotalCounters
{
	CONST_VTBL struct IWMSPublishingPointTotalCountersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPublishingPointTotalCounters_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPublishingPointTotalCounters_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPublishingPointTotalCounters_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPublishingPointTotalCounters_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSPublishingPointTotalCounters_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSPublishingPointTotalCounters_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSPublishingPointTotalCounters_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSPublishingPointTotalCounters_get_ConnectedPlayers(This,pVal) ( (This)->lpVtbl -> get_ConnectedPlayers(This,pVal) )
#define IWMSPublishingPointTotalCounters_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSPublishingPointTotalCounters_get_LateReads(This,pVal) ( (This)->lpVtbl -> get_LateReads(This,pVal) )
#define IWMSPublishingPointTotalCounters_get_OutgoingDistributionBytesSent(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionBytesSent(This,pVal) )
#define IWMSPublishingPointTotalCounters_get_PlayerBytesSent(This,pVal) ( (This)->lpVtbl -> get_PlayerBytesSent(This,pVal) )
#define IWMSPublishingPointTotalCounters_get_CountersStartTime(This,pVal) ( (This)->lpVtbl -> get_CountersStartTime(This,pVal) )
#define IWMSPublishingPointTotalCounters_get_StreamDenials(This,pVal) ( (This)->lpVtbl -> get_StreamDenials(This,pVal) )
#define IWMSPublishingPointTotalCounters_get_StreamErrors(This,pVal) ( (This)->lpVtbl -> get_StreamErrors(This,pVal) )
#define IWMSPublishingPointTotalCounters_get_StreamingPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingPlayers(This,pVal) )
#define IWMSPublishingPointTotalCounters_get_StreamTerminations(This,pVal) ( (This)->lpVtbl -> get_StreamTerminations(This,pVal) )
#define IWMSPublishingPointTotalCounters_get_FileBytesRead(This,pVal) ( (This)->lpVtbl -> get_FileBytesRead(This,pVal) )
#define IWMSPublishingPointTotalCounters_get_Advertisements(This,pVal) ( (This)->lpVtbl -> get_Advertisements(This,pVal) )
#define IWMSPublishingPointTotalCounters_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IWMSPublishingPointTotalCounters_get_AllCounters(This,ppsaCounters) ( (This)->lpVtbl -> get_AllCounters(This,ppsaCounters) )
#endif
#endif
#ifndef __IWMSPublishingPointTotalCounters2_INTERFACE_DEFINED__
#define __IWMSPublishingPointTotalCounters2_INTERFACE_DEFINED__
extern const IID IID_IWMSPublishingPointTotalCounters2;
typedef struct IWMSPublishingPointTotalCounters2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSPublishingPointTotalCounters2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSPublishingPointTotalCounters2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSPublishingPointTotalCounters2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSPublishingPointTotalCounters2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSPublishingPointTotalCounters2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSPublishingPointTotalCounters2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSPublishingPointTotalCounters2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ConnectedPlayers) (IWMSPublishingPointTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSPublishingPointTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_LateReads) (IWMSPublishingPointTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionBytesSent) (IWMSPublishingPointTotalCounters2 *This, VARIANT *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlayerBytesSent) (IWMSPublishingPointTotalCounters2 *This, VARIANT *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CountersStartTime) (IWMSPublishingPointTotalCounters2 *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamDenials) (IWMSPublishingPointTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamErrors) (IWMSPublishingPointTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingPlayers) (IWMSPublishingPointTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamTerminations) (IWMSPublishingPointTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_FileBytesRead) (IWMSPublishingPointTotalCounters2 *This, VARIANT *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Advertisements) (IWMSPublishingPointTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *Reset) (IWMSPublishingPointTotalCounters2 *This);
	HRESULT(STDMETHODCALLTYPE *get_AllCounters) (IWMSPublishingPointTotalCounters2 *This, SAFEARRAY **ppsaCounters);
	HRESULT(STDMETHODCALLTYPE *get_StreamingUDPPlayers) (IWMSPublishingPointTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingHTTPPlayers) (IWMSPublishingPointTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingRTSPPlayers) (IWMSPublishingPointTotalCounters2 *This, long *pVal);
	END_INTERFACE
}  IWMSPublishingPointTotalCounters2Vtbl;
interface IWMSPublishingPointTotalCounters2
{
	CONST_VTBL struct IWMSPublishingPointTotalCounters2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPublishingPointTotalCounters2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPublishingPointTotalCounters2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPublishingPointTotalCounters2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPublishingPointTotalCounters2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSPublishingPointTotalCounters2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSPublishingPointTotalCounters2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSPublishingPointTotalCounters2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSPublishingPointTotalCounters2_get_ConnectedPlayers(This,pVal) ( (This)->lpVtbl -> get_ConnectedPlayers(This,pVal) )
#define IWMSPublishingPointTotalCounters2_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSPublishingPointTotalCounters2_get_LateReads(This,pVal) ( (This)->lpVtbl -> get_LateReads(This,pVal) )
#define IWMSPublishingPointTotalCounters2_get_OutgoingDistributionBytesSent(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionBytesSent(This,pVal) )
#define IWMSPublishingPointTotalCounters2_get_PlayerBytesSent(This,pVal) ( (This)->lpVtbl -> get_PlayerBytesSent(This,pVal) )
#define IWMSPublishingPointTotalCounters2_get_CountersStartTime(This,pVal) ( (This)->lpVtbl -> get_CountersStartTime(This,pVal) )
#define IWMSPublishingPointTotalCounters2_get_StreamDenials(This,pVal) ( (This)->lpVtbl -> get_StreamDenials(This,pVal) )
#define IWMSPublishingPointTotalCounters2_get_StreamErrors(This,pVal) ( (This)->lpVtbl -> get_StreamErrors(This,pVal) )
#define IWMSPublishingPointTotalCounters2_get_StreamingPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingPlayers(This,pVal) )
#define IWMSPublishingPointTotalCounters2_get_StreamTerminations(This,pVal) ( (This)->lpVtbl -> get_StreamTerminations(This,pVal) )
#define IWMSPublishingPointTotalCounters2_get_FileBytesRead(This,pVal) ( (This)->lpVtbl -> get_FileBytesRead(This,pVal) )
#define IWMSPublishingPointTotalCounters2_get_Advertisements(This,pVal) ( (This)->lpVtbl -> get_Advertisements(This,pVal) )
#define IWMSPublishingPointTotalCounters2_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IWMSPublishingPointTotalCounters2_get_AllCounters(This,ppsaCounters) ( (This)->lpVtbl -> get_AllCounters(This,ppsaCounters) )
#define IWMSPublishingPointTotalCounters2_get_StreamingUDPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingUDPPlayers(This,pVal) )
#define IWMSPublishingPointTotalCounters2_get_StreamingHTTPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingHTTPPlayers(This,pVal) )
#define IWMSPublishingPointTotalCounters2_get_StreamingRTSPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingRTSPPlayers(This,pVal) )
#endif
#endif
#ifndef __IWMSServerTotalCounters_INTERFACE_DEFINED__
#define __IWMSServerTotalCounters_INTERFACE_DEFINED__
extern const IID IID_IWMSServerTotalCounters;
typedef struct IWMSServerTotalCountersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSServerTotalCounters *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSServerTotalCounters *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSServerTotalCounters *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSServerTotalCounters *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSServerTotalCounters *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSServerTotalCounters *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSServerTotalCounters *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ConnectedPlayers) (IWMSServerTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSServerTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_LateReads) (IWMSServerTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionBytesSent) (IWMSServerTotalCounters *This, VARIANT *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlayerBytesSent) (IWMSServerTotalCounters *This, VARIANT *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CountersStartTime) (IWMSServerTotalCounters *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamDenials) (IWMSServerTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamErrors) (IWMSServerTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingPlayers) (IWMSServerTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamTerminations) (IWMSServerTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_UDPResendRequests) (IWMSServerTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_UDPResendsSent) (IWMSServerTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_LateSends) (IWMSServerTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Advertisements) (IWMSServerTotalCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *Reset) (IWMSServerTotalCounters *This);
	HRESULT(STDMETHODCALLTYPE *get_AllCounters) (IWMSServerTotalCounters *This, SAFEARRAY **ppsaCounters);
	END_INTERFACE
}  IWMSServerTotalCountersVtbl;
interface IWMSServerTotalCounters
{
	CONST_VTBL struct IWMSServerTotalCountersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSServerTotalCounters_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSServerTotalCounters_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSServerTotalCounters_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSServerTotalCounters_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSServerTotalCounters_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSServerTotalCounters_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSServerTotalCounters_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSServerTotalCounters_get_ConnectedPlayers(This,pVal) ( (This)->lpVtbl -> get_ConnectedPlayers(This,pVal) )
#define IWMSServerTotalCounters_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSServerTotalCounters_get_LateReads(This,pVal) ( (This)->lpVtbl -> get_LateReads(This,pVal) )
#define IWMSServerTotalCounters_get_OutgoingDistributionBytesSent(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionBytesSent(This,pVal) )
#define IWMSServerTotalCounters_get_PlayerBytesSent(This,pVal) ( (This)->lpVtbl -> get_PlayerBytesSent(This,pVal) )
#define IWMSServerTotalCounters_get_CountersStartTime(This,pVal) ( (This)->lpVtbl -> get_CountersStartTime(This,pVal) )
#define IWMSServerTotalCounters_get_StreamDenials(This,pVal) ( (This)->lpVtbl -> get_StreamDenials(This,pVal) )
#define IWMSServerTotalCounters_get_StreamErrors(This,pVal) ( (This)->lpVtbl -> get_StreamErrors(This,pVal) )
#define IWMSServerTotalCounters_get_StreamingPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingPlayers(This,pVal) )
#define IWMSServerTotalCounters_get_StreamTerminations(This,pVal) ( (This)->lpVtbl -> get_StreamTerminations(This,pVal) )
#define IWMSServerTotalCounters_get_UDPResendRequests(This,pVal) ( (This)->lpVtbl -> get_UDPResendRequests(This,pVal) )
#define IWMSServerTotalCounters_get_UDPResendsSent(This,pVal) ( (This)->lpVtbl -> get_UDPResendsSent(This,pVal) )
#define IWMSServerTotalCounters_get_LateSends(This,pVal) ( (This)->lpVtbl -> get_LateSends(This,pVal) )
#define IWMSServerTotalCounters_get_Advertisements(This,pVal) ( (This)->lpVtbl -> get_Advertisements(This,pVal) )
#define IWMSServerTotalCounters_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IWMSServerTotalCounters_get_AllCounters(This,ppsaCounters) ( (This)->lpVtbl -> get_AllCounters(This,ppsaCounters) )
#endif
#endif
#ifndef __IWMSServerTotalCounters2_INTERFACE_DEFINED__
#define __IWMSServerTotalCounters2_INTERFACE_DEFINED__
extern const IID IID_IWMSServerTotalCounters2;
typedef struct IWMSServerTotalCounters2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSServerTotalCounters2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSServerTotalCounters2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSServerTotalCounters2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSServerTotalCounters2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSServerTotalCounters2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSServerTotalCounters2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSServerTotalCounters2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ConnectedPlayers) (IWMSServerTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSServerTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_LateReads) (IWMSServerTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionBytesSent) (IWMSServerTotalCounters2 *This, VARIANT *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlayerBytesSent) (IWMSServerTotalCounters2 *This, VARIANT *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CountersStartTime) (IWMSServerTotalCounters2 *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamDenials) (IWMSServerTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamErrors) (IWMSServerTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingPlayers) (IWMSServerTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamTerminations) (IWMSServerTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_UDPResendRequests) (IWMSServerTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_UDPResendsSent) (IWMSServerTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_LateSends) (IWMSServerTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Advertisements) (IWMSServerTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *Reset) (IWMSServerTotalCounters2 *This);
	HRESULT(STDMETHODCALLTYPE *get_AllCounters) (IWMSServerTotalCounters2 *This, SAFEARRAY **ppsaCounters);
	HRESULT(STDMETHODCALLTYPE *get_StreamingUDPPlayers) (IWMSServerTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingHTTPPlayers) (IWMSServerTotalCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingRTSPPlayers) (IWMSServerTotalCounters2 *This, long *pVal);
	END_INTERFACE
}  IWMSServerTotalCounters2Vtbl;
interface IWMSServerTotalCounters2
{
	CONST_VTBL struct IWMSServerTotalCounters2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSServerTotalCounters2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSServerTotalCounters2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSServerTotalCounters2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSServerTotalCounters2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSServerTotalCounters2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSServerTotalCounters2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSServerTotalCounters2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSServerTotalCounters2_get_ConnectedPlayers(This,pVal) ( (This)->lpVtbl -> get_ConnectedPlayers(This,pVal) )
#define IWMSServerTotalCounters2_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSServerTotalCounters2_get_LateReads(This,pVal) ( (This)->lpVtbl -> get_LateReads(This,pVal) )
#define IWMSServerTotalCounters2_get_OutgoingDistributionBytesSent(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionBytesSent(This,pVal) )
#define IWMSServerTotalCounters2_get_PlayerBytesSent(This,pVal) ( (This)->lpVtbl -> get_PlayerBytesSent(This,pVal) )
#define IWMSServerTotalCounters2_get_CountersStartTime(This,pVal) ( (This)->lpVtbl -> get_CountersStartTime(This,pVal) )
#define IWMSServerTotalCounters2_get_StreamDenials(This,pVal) ( (This)->lpVtbl -> get_StreamDenials(This,pVal) )
#define IWMSServerTotalCounters2_get_StreamErrors(This,pVal) ( (This)->lpVtbl -> get_StreamErrors(This,pVal) )
#define IWMSServerTotalCounters2_get_StreamingPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingPlayers(This,pVal) )
#define IWMSServerTotalCounters2_get_StreamTerminations(This,pVal) ( (This)->lpVtbl -> get_StreamTerminations(This,pVal) )
#define IWMSServerTotalCounters2_get_UDPResendRequests(This,pVal) ( (This)->lpVtbl -> get_UDPResendRequests(This,pVal) )
#define IWMSServerTotalCounters2_get_UDPResendsSent(This,pVal) ( (This)->lpVtbl -> get_UDPResendsSent(This,pVal) )
#define IWMSServerTotalCounters2_get_LateSends(This,pVal) ( (This)->lpVtbl -> get_LateSends(This,pVal) )
#define IWMSServerTotalCounters2_get_Advertisements(This,pVal) ( (This)->lpVtbl -> get_Advertisements(This,pVal) )
#define IWMSServerTotalCounters2_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IWMSServerTotalCounters2_get_AllCounters(This,ppsaCounters) ( (This)->lpVtbl -> get_AllCounters(This,ppsaCounters) )
#define IWMSServerTotalCounters2_get_StreamingUDPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingUDPPlayers(This,pVal) )
#define IWMSServerTotalCounters2_get_StreamingHTTPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingHTTPPlayers(This,pVal) )
#define IWMSServerTotalCounters2_get_StreamingRTSPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingRTSPPlayers(This,pVal) )
#endif
#endif
#ifndef __IWMSPublishingPoint_INTERFACE_DEFINED__
#define __IWMSPublishingPoint_INTERFACE_DEFINED__
typedef DECLSPEC_UUID("3E52E0EC-72A7-11D2-BF2F-00805FBE84A6")
enum WMS_PUBLISHING_POINT_TYPE
{
	WMS_PUBLISHING_POINT_TYPE_ON_DEMAND = 1,
	WMS_PUBLISHING_POINT_TYPE_BROADCAST = 2,
	WMS_PUBLISHING_POINT_TYPE_CACHE_PROXY_ON_DEMAND = 3,
	WMS_PUBLISHING_POINT_TYPE_CACHE_PROXY_BROADCAST = 4
} WMS_PUBLISHING_POINT_TYPE;
typedef DECLSPEC_UUID("121E6065-D8D9-498c-BE49-C1864DD315E3")
enum WMS_PUBLISHING_POINT_INTERNAL_TYPE
{
	WMS_PUBLISHING_POINT_INTERNAL_TYPE_ON_DEMAND = 11,
	WMS_PUBLISHING_POINT_INTERNAL_TYPE_BROADCAST = 12,
	WMS_PUBLISHING_POINT_INTERNAL_TYPE_CACHE_PROXY_ON_DEMAND = 13,
	WMS_PUBLISHING_POINT_INTERNAL_TYPE_CACHE_PROXY_BROADCAST = 14
} WMS_PUBLISHING_POINT_INTERNAL_TYPE;
typedef DECLSPEC_UUID("3E52E0EF-72A7-11D2-BF2F-00805FBE84A6")
enum WMS_PUBLISHING_POINT_STATUS
{
	WMS_PUBLISHING_POINT_RUNNING = 0,
	WMS_PUBLISHING_POINT_ERROR = 0x1,
	WMS_PUBLISHING_POINT_ERROR_CRITICAL = 0x2
} WMS_PUBLISHING_POINT_STATUS;
extern const IID IID_IWMSPublishingPoint;
typedef struct IWMSPublishingPointVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSPublishingPoint *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSPublishingPoint *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSPublishingPoint *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSPublishingPoint *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSPublishingPoint *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSPublishingPoint *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSPublishingPoint *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_AllowClientsToConnect) (IWMSPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowClientsToConnect) (IWMSPublishingPoint *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_CurrentCounters) (IWMSPublishingPoint *This, IWMSPublishingPointCurrentCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_EventHandlers) (IWMSPublishingPoint *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_ID) (IWMSPublishingPoint *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Limits) (IWMSPublishingPoint *This, IWMSPublishingPointLimits **pVal);
	HRESULT(STDMETHODCALLTYPE *get_FileDescriptions) (IWMSPublishingPoint *This, BSTR RelativePath, IWMSFileDescriptions **pVal);
	HRESULT(STDMETHODCALLTYPE *get_MonikerName) (IWMSPublishingPoint *This, BSTR *pbstrVal);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IWMSPublishingPoint *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_Name) (IWMSPublishingPoint *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSPublishingPoint *This, IWMSOutgoingDistributionConnections **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Path) (IWMSPublishingPoint *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_Path) (IWMSPublishingPoint *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_PeakCounters) (IWMSPublishingPoint *This, IWMSPublishingPointPeakCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Players) (IWMSPublishingPoint *This, IWMSPlayers **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Properties) (IWMSPublishingPoint *This, IWMSNamedValues **pVal);
	HRESULT(STDMETHODCALLTYPE *get_TotalCounters) (IWMSPublishingPoint *This, IWMSPublishingPointTotalCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Type) (IWMSPublishingPoint *This, WMS_PUBLISHING_POINT_TYPE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_WrapperPath) (IWMSPublishingPoint *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_WrapperPath) (IWMSPublishingPoint *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_Authenticators) (IWMSPublishingPoint *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Status) (IWMSPublishingPoint *This, WMS_PUBLISHING_POINT_STATUS *pVal);
	HRESULT(STDMETHODCALLTYPE *get_EnableWrapperPath) (IWMSPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableWrapperPath) (IWMSPublishingPoint *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamFilters) (IWMSPublishingPoint *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_DistributionUserName) (IWMSPublishingPoint *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *SetDistributionUserNamePassword) (IWMSPublishingPoint *This, wchar_t *newUserName, wchar_t *newUserPassword);
	HRESULT(STDMETHODCALLTYPE *get_CacheProxyExpiration) (IWMSPublishingPoint *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_CacheProxyExpiration) (IWMSPublishingPoint *This, long newVal);
	HRESULT(STDMETHODCALLTYPE *get_IsDistributionPasswordSet) (IWMSPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *get_AllowPlayerSideDiskCaching) (IWMSPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowPlayerSideDiskCaching) (IWMSPublishingPoint *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_EnableFEC) (IWMSPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableFEC) (IWMSPublishingPoint *This, VARIANT_BOOL newVal);
	END_INTERFACE
}  IWMSPublishingPointVtbl;
interface IWMSPublishingPoint
{
	CONST_VTBL struct IWMSPublishingPointVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPublishingPoint_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPublishingPoint_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPublishingPoint_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPublishingPoint_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSPublishingPoint_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSPublishingPoint_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSPublishingPoint_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSPublishingPoint_get_AllowClientsToConnect(This,pVal) ( (This)->lpVtbl -> get_AllowClientsToConnect(This,pVal) )
#define IWMSPublishingPoint_put_AllowClientsToConnect(This,newVal) ( (This)->lpVtbl -> put_AllowClientsToConnect(This,newVal) )
#define IWMSPublishingPoint_get_CurrentCounters(This,pVal) ( (This)->lpVtbl -> get_CurrentCounters(This,pVal) )
#define IWMSPublishingPoint_get_EventHandlers(This,pVal) ( (This)->lpVtbl -> get_EventHandlers(This,pVal) )
#define IWMSPublishingPoint_get_ID(This,pVal) ( (This)->lpVtbl -> get_ID(This,pVal) )
#define IWMSPublishingPoint_get_Limits(This,pVal) ( (This)->lpVtbl -> get_Limits(This,pVal) )
#define IWMSPublishingPoint_get_FileDescriptions(This,RelativePath,pVal) ( (This)->lpVtbl -> get_FileDescriptions(This,RelativePath,pVal) )
#define IWMSPublishingPoint_get_MonikerName(This,pbstrVal) ( (This)->lpVtbl -> get_MonikerName(This,pbstrVal) )
#define IWMSPublishingPoint_get_Name(This,pVal) ( (This)->lpVtbl -> get_Name(This,pVal) )
#define IWMSPublishingPoint_put_Name(This,newVal) ( (This)->lpVtbl -> put_Name(This,newVal) )
#define IWMSPublishingPoint_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSPublishingPoint_get_Path(This,pVal) ( (This)->lpVtbl -> get_Path(This,pVal) )
#define IWMSPublishingPoint_put_Path(This,newVal) ( (This)->lpVtbl -> put_Path(This,newVal) )
#define IWMSPublishingPoint_get_PeakCounters(This,pVal) ( (This)->lpVtbl -> get_PeakCounters(This,pVal) )
#define IWMSPublishingPoint_get_Players(This,pVal) ( (This)->lpVtbl -> get_Players(This,pVal) )
#define IWMSPublishingPoint_get_Properties(This,pVal) ( (This)->lpVtbl -> get_Properties(This,pVal) )
#define IWMSPublishingPoint_get_TotalCounters(This,pVal) ( (This)->lpVtbl -> get_TotalCounters(This,pVal) )
#define IWMSPublishingPoint_get_Type(This,pVal) ( (This)->lpVtbl -> get_Type(This,pVal) )
#define IWMSPublishingPoint_get_WrapperPath(This,pVal) ( (This)->lpVtbl -> get_WrapperPath(This,pVal) )
#define IWMSPublishingPoint_put_WrapperPath(This,newVal) ( (This)->lpVtbl -> put_WrapperPath(This,newVal) )
#define IWMSPublishingPoint_get_Authenticators(This,pVal) ( (This)->lpVtbl -> get_Authenticators(This,pVal) )
#define IWMSPublishingPoint_get_Status(This,pVal) ( (This)->lpVtbl -> get_Status(This,pVal) )
#define IWMSPublishingPoint_get_EnableWrapperPath(This,pVal) ( (This)->lpVtbl -> get_EnableWrapperPath(This,pVal) )
#define IWMSPublishingPoint_put_EnableWrapperPath(This,newVal) ( (This)->lpVtbl -> put_EnableWrapperPath(This,newVal) )
#define IWMSPublishingPoint_get_StreamFilters(This,pVal) ( (This)->lpVtbl -> get_StreamFilters(This,pVal) )
#define IWMSPublishingPoint_get_DistributionUserName(This,pVal) ( (This)->lpVtbl -> get_DistributionUserName(This,pVal) )
#define IWMSPublishingPoint_SetDistributionUserNamePassword(This,newUserName,newUserPassword) ( (This)->lpVtbl -> SetDistributionUserNamePassword(This,newUserName,newUserPassword) )
#define IWMSPublishingPoint_get_CacheProxyExpiration(This,pVal) ( (This)->lpVtbl -> get_CacheProxyExpiration(This,pVal) )
#define IWMSPublishingPoint_put_CacheProxyExpiration(This,newVal) ( (This)->lpVtbl -> put_CacheProxyExpiration(This,newVal) )
#define IWMSPublishingPoint_get_IsDistributionPasswordSet(This,pVal) ( (This)->lpVtbl -> get_IsDistributionPasswordSet(This,pVal) )
#define IWMSPublishingPoint_get_AllowPlayerSideDiskCaching(This,pVal) ( (This)->lpVtbl -> get_AllowPlayerSideDiskCaching(This,pVal) )
#define IWMSPublishingPoint_put_AllowPlayerSideDiskCaching(This,newVal) ( (This)->lpVtbl -> put_AllowPlayerSideDiskCaching(This,newVal) )
#define IWMSPublishingPoint_get_EnableFEC(This,pVal) ( (This)->lpVtbl -> get_EnableFEC(This,pVal) )
#define IWMSPublishingPoint_put_EnableFEC(This,newVal) ( (This)->lpVtbl -> put_EnableFEC(This,newVal) )
#endif
#endif
#ifndef __IWMSPublishingPoint2_INTERFACE_DEFINED__
#define __IWMSPublishingPoint2_INTERFACE_DEFINED__
extern const IID IID_IWMSPublishingPoint2;
typedef struct IWMSPublishingPoint2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSPublishingPoint2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSPublishingPoint2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSPublishingPoint2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSPublishingPoint2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSPublishingPoint2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSPublishingPoint2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSPublishingPoint2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_AllowClientsToConnect) (IWMSPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowClientsToConnect) (IWMSPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_CurrentCounters) (IWMSPublishingPoint2 *This, IWMSPublishingPointCurrentCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_EventHandlers) (IWMSPublishingPoint2 *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_ID) (IWMSPublishingPoint2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Limits) (IWMSPublishingPoint2 *This, IWMSPublishingPointLimits **pVal);
	HRESULT(STDMETHODCALLTYPE *get_FileDescriptions) (IWMSPublishingPoint2 *This, BSTR RelativePath, IWMSFileDescriptions **pVal);
	HRESULT(STDMETHODCALLTYPE *get_MonikerName) (IWMSPublishingPoint2 *This, BSTR *pbstrVal);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IWMSPublishingPoint2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_Name) (IWMSPublishingPoint2 *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSPublishingPoint2 *This, IWMSOutgoingDistributionConnections **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Path) (IWMSPublishingPoint2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_Path) (IWMSPublishingPoint2 *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_PeakCounters) (IWMSPublishingPoint2 *This, IWMSPublishingPointPeakCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Players) (IWMSPublishingPoint2 *This, IWMSPlayers **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Properties) (IWMSPublishingPoint2 *This, IWMSNamedValues **pVal);
	HRESULT(STDMETHODCALLTYPE *get_TotalCounters) (IWMSPublishingPoint2 *This, IWMSPublishingPointTotalCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Type) (IWMSPublishingPoint2 *This, WMS_PUBLISHING_POINT_TYPE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_WrapperPath) (IWMSPublishingPoint2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_WrapperPath) (IWMSPublishingPoint2 *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_Authenticators) (IWMSPublishingPoint2 *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Status) (IWMSPublishingPoint2 *This, WMS_PUBLISHING_POINT_STATUS *pVal);
	HRESULT(STDMETHODCALLTYPE *get_EnableWrapperPath) (IWMSPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableWrapperPath) (IWMSPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamFilters) (IWMSPublishingPoint2 *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_DistributionUserName) (IWMSPublishingPoint2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *SetDistributionUserNamePassword) (IWMSPublishingPoint2 *This, wchar_t *newUserName, wchar_t *newUserPassword);
	HRESULT(STDMETHODCALLTYPE *get_CacheProxyExpiration) (IWMSPublishingPoint2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_CacheProxyExpiration) (IWMSPublishingPoint2 *This, long newVal);
	HRESULT(STDMETHODCALLTYPE *get_IsDistributionPasswordSet) (IWMSPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *get_AllowPlayerSideDiskCaching) (IWMSPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowPlayerSideDiskCaching) (IWMSPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_EnableFEC) (IWMSPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableFEC) (IWMSPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_AllowStartupProfile) (IWMSPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowStartupProfile) (IWMSPublishingPoint2 *This, VARIANT_BOOL newVal);
	END_INTERFACE
}  IWMSPublishingPoint2Vtbl;
interface IWMSPublishingPoint2
{
	CONST_VTBL struct IWMSPublishingPoint2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPublishingPoint2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPublishingPoint2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPublishingPoint2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPublishingPoint2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSPublishingPoint2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSPublishingPoint2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSPublishingPoint2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSPublishingPoint2_get_AllowClientsToConnect(This,pVal) ( (This)->lpVtbl -> get_AllowClientsToConnect(This,pVal) )
#define IWMSPublishingPoint2_put_AllowClientsToConnect(This,newVal) ( (This)->lpVtbl -> put_AllowClientsToConnect(This,newVal) )
#define IWMSPublishingPoint2_get_CurrentCounters(This,pVal) ( (This)->lpVtbl -> get_CurrentCounters(This,pVal) )
#define IWMSPublishingPoint2_get_EventHandlers(This,pVal) ( (This)->lpVtbl -> get_EventHandlers(This,pVal) )
#define IWMSPublishingPoint2_get_ID(This,pVal) ( (This)->lpVtbl -> get_ID(This,pVal) )
#define IWMSPublishingPoint2_get_Limits(This,pVal) ( (This)->lpVtbl -> get_Limits(This,pVal) )
#define IWMSPublishingPoint2_get_FileDescriptions(This,RelativePath,pVal) ( (This)->lpVtbl -> get_FileDescriptions(This,RelativePath,pVal) )
#define IWMSPublishingPoint2_get_MonikerName(This,pbstrVal) ( (This)->lpVtbl -> get_MonikerName(This,pbstrVal) )
#define IWMSPublishingPoint2_get_Name(This,pVal) ( (This)->lpVtbl -> get_Name(This,pVal) )
#define IWMSPublishingPoint2_put_Name(This,newVal) ( (This)->lpVtbl -> put_Name(This,newVal) )
#define IWMSPublishingPoint2_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSPublishingPoint2_get_Path(This,pVal) ( (This)->lpVtbl -> get_Path(This,pVal) )
#define IWMSPublishingPoint2_put_Path(This,newVal) ( (This)->lpVtbl -> put_Path(This,newVal) )
#define IWMSPublishingPoint2_get_PeakCounters(This,pVal) ( (This)->lpVtbl -> get_PeakCounters(This,pVal) )
#define IWMSPublishingPoint2_get_Players(This,pVal) ( (This)->lpVtbl -> get_Players(This,pVal) )
#define IWMSPublishingPoint2_get_Properties(This,pVal) ( (This)->lpVtbl -> get_Properties(This,pVal) )
#define IWMSPublishingPoint2_get_TotalCounters(This,pVal) ( (This)->lpVtbl -> get_TotalCounters(This,pVal) )
#define IWMSPublishingPoint2_get_Type(This,pVal) ( (This)->lpVtbl -> get_Type(This,pVal) )
#define IWMSPublishingPoint2_get_WrapperPath(This,pVal) ( (This)->lpVtbl -> get_WrapperPath(This,pVal) )
#define IWMSPublishingPoint2_put_WrapperPath(This,newVal) ( (This)->lpVtbl -> put_WrapperPath(This,newVal) )
#define IWMSPublishingPoint2_get_Authenticators(This,pVal) ( (This)->lpVtbl -> get_Authenticators(This,pVal) )
#define IWMSPublishingPoint2_get_Status(This,pVal) ( (This)->lpVtbl -> get_Status(This,pVal) )
#define IWMSPublishingPoint2_get_EnableWrapperPath(This,pVal) ( (This)->lpVtbl -> get_EnableWrapperPath(This,pVal) )
#define IWMSPublishingPoint2_put_EnableWrapperPath(This,newVal) ( (This)->lpVtbl -> put_EnableWrapperPath(This,newVal) )
#define IWMSPublishingPoint2_get_StreamFilters(This,pVal) ( (This)->lpVtbl -> get_StreamFilters(This,pVal) )
#define IWMSPublishingPoint2_get_DistributionUserName(This,pVal) ( (This)->lpVtbl -> get_DistributionUserName(This,pVal) )
#define IWMSPublishingPoint2_SetDistributionUserNamePassword(This,newUserName,newUserPassword) ( (This)->lpVtbl -> SetDistributionUserNamePassword(This,newUserName,newUserPassword) )
#define IWMSPublishingPoint2_get_CacheProxyExpiration(This,pVal) ( (This)->lpVtbl -> get_CacheProxyExpiration(This,pVal) )
#define IWMSPublishingPoint2_put_CacheProxyExpiration(This,newVal) ( (This)->lpVtbl -> put_CacheProxyExpiration(This,newVal) )
#define IWMSPublishingPoint2_get_IsDistributionPasswordSet(This,pVal) ( (This)->lpVtbl -> get_IsDistributionPasswordSet(This,pVal) )
#define IWMSPublishingPoint2_get_AllowPlayerSideDiskCaching(This,pVal) ( (This)->lpVtbl -> get_AllowPlayerSideDiskCaching(This,pVal) )
#define IWMSPublishingPoint2_put_AllowPlayerSideDiskCaching(This,newVal) ( (This)->lpVtbl -> put_AllowPlayerSideDiskCaching(This,newVal) )
#define IWMSPublishingPoint2_get_EnableFEC(This,pVal) ( (This)->lpVtbl -> get_EnableFEC(This,pVal) )
#define IWMSPublishingPoint2_put_EnableFEC(This,newVal) ( (This)->lpVtbl -> put_EnableFEC(This,newVal) )
#define IWMSPublishingPoint2_get_AllowStartupProfile(This,pVal) ( (This)->lpVtbl -> get_AllowStartupProfile(This,pVal) )
#define IWMSPublishingPoint2_put_AllowStartupProfile(This,newVal) ( (This)->lpVtbl -> put_AllowStartupProfile(This,newVal) )
#endif
#endif
#ifndef __IWMSOnDemandPublishingPoint_INTERFACE_DEFINED__
#define __IWMSOnDemandPublishingPoint_INTERFACE_DEFINED__
extern const IID IID_IWMSOnDemandPublishingPoint;
typedef struct IWMSOnDemandPublishingPointVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSOnDemandPublishingPoint *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSOnDemandPublishingPoint *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSOnDemandPublishingPoint *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSOnDemandPublishingPoint *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSOnDemandPublishingPoint *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSOnDemandPublishingPoint *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSOnDemandPublishingPoint *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_AllowClientsToConnect) (IWMSOnDemandPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowClientsToConnect) (IWMSOnDemandPublishingPoint *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_CurrentCounters) (IWMSOnDemandPublishingPoint *This, IWMSPublishingPointCurrentCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_EventHandlers) (IWMSOnDemandPublishingPoint *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_ID) (IWMSOnDemandPublishingPoint *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Limits) (IWMSOnDemandPublishingPoint *This, IWMSPublishingPointLimits **pVal);
	HRESULT(STDMETHODCALLTYPE *get_FileDescriptions) (IWMSOnDemandPublishingPoint *This, BSTR RelativePath, IWMSFileDescriptions **pVal);
	HRESULT(STDMETHODCALLTYPE *get_MonikerName) (IWMSOnDemandPublishingPoint *This, BSTR *pbstrVal);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IWMSOnDemandPublishingPoint *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_Name) (IWMSOnDemandPublishingPoint *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSOnDemandPublishingPoint *This, IWMSOutgoingDistributionConnections **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Path) (IWMSOnDemandPublishingPoint *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_Path) (IWMSOnDemandPublishingPoint *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_PeakCounters) (IWMSOnDemandPublishingPoint *This, IWMSPublishingPointPeakCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Players) (IWMSOnDemandPublishingPoint *This, IWMSPlayers **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Properties) (IWMSOnDemandPublishingPoint *This, IWMSNamedValues **pVal);
	HRESULT(STDMETHODCALLTYPE *get_TotalCounters) (IWMSOnDemandPublishingPoint *This, IWMSPublishingPointTotalCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Type) (IWMSOnDemandPublishingPoint *This, WMS_PUBLISHING_POINT_TYPE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_WrapperPath) (IWMSOnDemandPublishingPoint *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_WrapperPath) (IWMSOnDemandPublishingPoint *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_Authenticators) (IWMSOnDemandPublishingPoint *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Status) (IWMSOnDemandPublishingPoint *This, WMS_PUBLISHING_POINT_STATUS *pVal);
	HRESULT(STDMETHODCALLTYPE *get_EnableWrapperPath) (IWMSOnDemandPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableWrapperPath) (IWMSOnDemandPublishingPoint *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamFilters) (IWMSOnDemandPublishingPoint *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_DistributionUserName) (IWMSOnDemandPublishingPoint *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *SetDistributionUserNamePassword) (IWMSOnDemandPublishingPoint *This, wchar_t *newUserName, wchar_t *newUserPassword);
	HRESULT(STDMETHODCALLTYPE *get_CacheProxyExpiration) (IWMSOnDemandPublishingPoint *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_CacheProxyExpiration) (IWMSOnDemandPublishingPoint *This, long newVal);
	HRESULT(STDMETHODCALLTYPE *get_IsDistributionPasswordSet) (IWMSOnDemandPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *get_AllowPlayerSideDiskCaching) (IWMSOnDemandPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowPlayerSideDiskCaching) (IWMSOnDemandPublishingPoint *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_EnableFEC) (IWMSOnDemandPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableFEC) (IWMSOnDemandPublishingPoint *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_AllowContentCaching) (IWMSOnDemandPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowContentCaching) (IWMSOnDemandPublishingPoint *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *ExportXML) (IWMSOnDemandPublishingPoint *This, BSTR bstrXMLFileName);
	HRESULT(STDMETHODCALLTYPE *get_EnableClientWildcardDirectoryAccess) (IWMSOnDemandPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableClientWildcardDirectoryAccess) (IWMSOnDemandPublishingPoint *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_EnableDownload) (IWMSOnDemandPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableDownload) (IWMSOnDemandPublishingPoint *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_DownloadBandwidth) (IWMSOnDemandPublishingPoint *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_DownloadBandwidth) (IWMSOnDemandPublishingPoint *This, long newVal);
	END_INTERFACE
}  IWMSOnDemandPublishingPointVtbl;
interface IWMSOnDemandPublishingPoint
{
	CONST_VTBL struct IWMSOnDemandPublishingPointVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSOnDemandPublishingPoint_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSOnDemandPublishingPoint_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSOnDemandPublishingPoint_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSOnDemandPublishingPoint_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSOnDemandPublishingPoint_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSOnDemandPublishingPoint_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSOnDemandPublishingPoint_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSOnDemandPublishingPoint_get_AllowClientsToConnect(This,pVal) ( (This)->lpVtbl -> get_AllowClientsToConnect(This,pVal) )
#define IWMSOnDemandPublishingPoint_put_AllowClientsToConnect(This,newVal) ( (This)->lpVtbl -> put_AllowClientsToConnect(This,newVal) )
#define IWMSOnDemandPublishingPoint_get_CurrentCounters(This,pVal) ( (This)->lpVtbl -> get_CurrentCounters(This,pVal) )
#define IWMSOnDemandPublishingPoint_get_EventHandlers(This,pVal) ( (This)->lpVtbl -> get_EventHandlers(This,pVal) )
#define IWMSOnDemandPublishingPoint_get_ID(This,pVal) ( (This)->lpVtbl -> get_ID(This,pVal) )
#define IWMSOnDemandPublishingPoint_get_Limits(This,pVal) ( (This)->lpVtbl -> get_Limits(This,pVal) )
#define IWMSOnDemandPublishingPoint_get_FileDescriptions(This,RelativePath,pVal) ( (This)->lpVtbl -> get_FileDescriptions(This,RelativePath,pVal) )
#define IWMSOnDemandPublishingPoint_get_MonikerName(This,pbstrVal) ( (This)->lpVtbl -> get_MonikerName(This,pbstrVal) )
#define IWMSOnDemandPublishingPoint_get_Name(This,pVal) ( (This)->lpVtbl -> get_Name(This,pVal) )
#define IWMSOnDemandPublishingPoint_put_Name(This,newVal) ( (This)->lpVtbl -> put_Name(This,newVal) )
#define IWMSOnDemandPublishingPoint_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSOnDemandPublishingPoint_get_Path(This,pVal) ( (This)->lpVtbl -> get_Path(This,pVal) )
#define IWMSOnDemandPublishingPoint_put_Path(This,newVal) ( (This)->lpVtbl -> put_Path(This,newVal) )
#define IWMSOnDemandPublishingPoint_get_PeakCounters(This,pVal) ( (This)->lpVtbl -> get_PeakCounters(This,pVal) )
#define IWMSOnDemandPublishingPoint_get_Players(This,pVal) ( (This)->lpVtbl -> get_Players(This,pVal) )
#define IWMSOnDemandPublishingPoint_get_Properties(This,pVal) ( (This)->lpVtbl -> get_Properties(This,pVal) )
#define IWMSOnDemandPublishingPoint_get_TotalCounters(This,pVal) ( (This)->lpVtbl -> get_TotalCounters(This,pVal) )
#define IWMSOnDemandPublishingPoint_get_Type(This,pVal) ( (This)->lpVtbl -> get_Type(This,pVal) )
#define IWMSOnDemandPublishingPoint_get_WrapperPath(This,pVal) ( (This)->lpVtbl -> get_WrapperPath(This,pVal) )
#define IWMSOnDemandPublishingPoint_put_WrapperPath(This,newVal) ( (This)->lpVtbl -> put_WrapperPath(This,newVal) )
#define IWMSOnDemandPublishingPoint_get_Authenticators(This,pVal) ( (This)->lpVtbl -> get_Authenticators(This,pVal) )
#define IWMSOnDemandPublishingPoint_get_Status(This,pVal) ( (This)->lpVtbl -> get_Status(This,pVal) )
#define IWMSOnDemandPublishingPoint_get_EnableWrapperPath(This,pVal) ( (This)->lpVtbl -> get_EnableWrapperPath(This,pVal) )
#define IWMSOnDemandPublishingPoint_put_EnableWrapperPath(This,newVal) ( (This)->lpVtbl -> put_EnableWrapperPath(This,newVal) )
#define IWMSOnDemandPublishingPoint_get_StreamFilters(This,pVal) ( (This)->lpVtbl -> get_StreamFilters(This,pVal) )
#define IWMSOnDemandPublishingPoint_get_DistributionUserName(This,pVal) ( (This)->lpVtbl -> get_DistributionUserName(This,pVal) )
#define IWMSOnDemandPublishingPoint_SetDistributionUserNamePassword(This,newUserName,newUserPassword) ( (This)->lpVtbl -> SetDistributionUserNamePassword(This,newUserName,newUserPassword) )
#define IWMSOnDemandPublishingPoint_get_CacheProxyExpiration(This,pVal) ( (This)->lpVtbl -> get_CacheProxyExpiration(This,pVal) )
#define IWMSOnDemandPublishingPoint_put_CacheProxyExpiration(This,newVal) ( (This)->lpVtbl -> put_CacheProxyExpiration(This,newVal) )
#define IWMSOnDemandPublishingPoint_get_IsDistributionPasswordSet(This,pVal) ( (This)->lpVtbl -> get_IsDistributionPasswordSet(This,pVal) )
#define IWMSOnDemandPublishingPoint_get_AllowPlayerSideDiskCaching(This,pVal) ( (This)->lpVtbl -> get_AllowPlayerSideDiskCaching(This,pVal) )
#define IWMSOnDemandPublishingPoint_put_AllowPlayerSideDiskCaching(This,newVal) ( (This)->lpVtbl -> put_AllowPlayerSideDiskCaching(This,newVal) )
#define IWMSOnDemandPublishingPoint_get_EnableFEC(This,pVal) ( (This)->lpVtbl -> get_EnableFEC(This,pVal) )
#define IWMSOnDemandPublishingPoint_put_EnableFEC(This,newVal) ( (This)->lpVtbl -> put_EnableFEC(This,newVal) )
#define IWMSOnDemandPublishingPoint_get_AllowContentCaching(This,pVal) ( (This)->lpVtbl -> get_AllowContentCaching(This,pVal) )
#define IWMSOnDemandPublishingPoint_put_AllowContentCaching(This,newVal) ( (This)->lpVtbl -> put_AllowContentCaching(This,newVal) )
#define IWMSOnDemandPublishingPoint_ExportXML(This,bstrXMLFileName) ( (This)->lpVtbl -> ExportXML(This,bstrXMLFileName) )
#define IWMSOnDemandPublishingPoint_get_EnableClientWildcardDirectoryAccess(This,pVal) ( (This)->lpVtbl -> get_EnableClientWildcardDirectoryAccess(This,pVal) )
#define IWMSOnDemandPublishingPoint_put_EnableClientWildcardDirectoryAccess(This,newVal) ( (This)->lpVtbl -> put_EnableClientWildcardDirectoryAccess(This,newVal) )
#define IWMSOnDemandPublishingPoint_get_EnableDownload(This,pVal) ( (This)->lpVtbl -> get_EnableDownload(This,pVal) )
#define IWMSOnDemandPublishingPoint_put_EnableDownload(This,newVal) ( (This)->lpVtbl -> put_EnableDownload(This,newVal) )
#define IWMSOnDemandPublishingPoint_get_DownloadBandwidth(This,pVal) ( (This)->lpVtbl -> get_DownloadBandwidth(This,pVal) )
#define IWMSOnDemandPublishingPoint_put_DownloadBandwidth(This,newVal) ( (This)->lpVtbl -> put_DownloadBandwidth(This,newVal) )
#endif
#endif
#ifndef __IWMSOnDemandPublishingPoint2_INTERFACE_DEFINED__
#define __IWMSOnDemandPublishingPoint2_INTERFACE_DEFINED__
extern const IID IID_IWMSOnDemandPublishingPoint2;
typedef struct IWMSOnDemandPublishingPoint2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSOnDemandPublishingPoint2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSOnDemandPublishingPoint2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSOnDemandPublishingPoint2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSOnDemandPublishingPoint2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSOnDemandPublishingPoint2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSOnDemandPublishingPoint2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSOnDemandPublishingPoint2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_AllowClientsToConnect) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowClientsToConnect) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_CurrentCounters) (IWMSOnDemandPublishingPoint2 *This, IWMSPublishingPointCurrentCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_EventHandlers) (IWMSOnDemandPublishingPoint2 *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_ID) (IWMSOnDemandPublishingPoint2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Limits) (IWMSOnDemandPublishingPoint2 *This, IWMSPublishingPointLimits **pVal);
	HRESULT(STDMETHODCALLTYPE *get_FileDescriptions) (IWMSOnDemandPublishingPoint2 *This, BSTR RelativePath, IWMSFileDescriptions **pVal);
	HRESULT(STDMETHODCALLTYPE *get_MonikerName) (IWMSOnDemandPublishingPoint2 *This, BSTR *pbstrVal);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IWMSOnDemandPublishingPoint2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_Name) (IWMSOnDemandPublishingPoint2 *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSOnDemandPublishingPoint2 *This, IWMSOutgoingDistributionConnections **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Path) (IWMSOnDemandPublishingPoint2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_Path) (IWMSOnDemandPublishingPoint2 *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_PeakCounters) (IWMSOnDemandPublishingPoint2 *This, IWMSPublishingPointPeakCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Players) (IWMSOnDemandPublishingPoint2 *This, IWMSPlayers **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Properties) (IWMSOnDemandPublishingPoint2 *This, IWMSNamedValues **pVal);
	HRESULT(STDMETHODCALLTYPE *get_TotalCounters) (IWMSOnDemandPublishingPoint2 *This, IWMSPublishingPointTotalCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Type) (IWMSOnDemandPublishingPoint2 *This, WMS_PUBLISHING_POINT_TYPE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_WrapperPath) (IWMSOnDemandPublishingPoint2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_WrapperPath) (IWMSOnDemandPublishingPoint2 *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_Authenticators) (IWMSOnDemandPublishingPoint2 *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Status) (IWMSOnDemandPublishingPoint2 *This, WMS_PUBLISHING_POINT_STATUS *pVal);
	HRESULT(STDMETHODCALLTYPE *get_EnableWrapperPath) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableWrapperPath) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamFilters) (IWMSOnDemandPublishingPoint2 *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_DistributionUserName) (IWMSOnDemandPublishingPoint2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *SetDistributionUserNamePassword) (IWMSOnDemandPublishingPoint2 *This, wchar_t *newUserName, wchar_t *newUserPassword);
	HRESULT(STDMETHODCALLTYPE *get_CacheProxyExpiration) (IWMSOnDemandPublishingPoint2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_CacheProxyExpiration) (IWMSOnDemandPublishingPoint2 *This, long newVal);
	HRESULT(STDMETHODCALLTYPE *get_IsDistributionPasswordSet) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *get_AllowPlayerSideDiskCaching) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowPlayerSideDiskCaching) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_EnableFEC) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableFEC) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_AllowContentCaching) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowContentCaching) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *ExportXML) (IWMSOnDemandPublishingPoint2 *This, BSTR bstrXMLFileName);
	HRESULT(STDMETHODCALLTYPE *get_EnableClientWildcardDirectoryAccess) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableClientWildcardDirectoryAccess) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_EnableDownload) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableDownload) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_DownloadBandwidth) (IWMSOnDemandPublishingPoint2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_DownloadBandwidth) (IWMSOnDemandPublishingPoint2 *This, long newVal);
	HRESULT(STDMETHODCALLTYPE *get_AllowStartupProfile) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowStartupProfile) (IWMSOnDemandPublishingPoint2 *This, VARIANT_BOOL newVal);
	END_INTERFACE
}  IWMSOnDemandPublishingPoint2Vtbl;
interface IWMSOnDemandPublishingPoint2
{
	CONST_VTBL struct IWMSOnDemandPublishingPoint2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSOnDemandPublishingPoint2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSOnDemandPublishingPoint2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSOnDemandPublishingPoint2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSOnDemandPublishingPoint2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSOnDemandPublishingPoint2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSOnDemandPublishingPoint2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSOnDemandPublishingPoint2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSOnDemandPublishingPoint2_get_AllowClientsToConnect(This,pVal) ( (This)->lpVtbl -> get_AllowClientsToConnect(This,pVal) )
#define IWMSOnDemandPublishingPoint2_put_AllowClientsToConnect(This,newVal) ( (This)->lpVtbl -> put_AllowClientsToConnect(This,newVal) )
#define IWMSOnDemandPublishingPoint2_get_CurrentCounters(This,pVal) ( (This)->lpVtbl -> get_CurrentCounters(This,pVal) )
#define IWMSOnDemandPublishingPoint2_get_EventHandlers(This,pVal) ( (This)->lpVtbl -> get_EventHandlers(This,pVal) )
#define IWMSOnDemandPublishingPoint2_get_ID(This,pVal) ( (This)->lpVtbl -> get_ID(This,pVal) )
#define IWMSOnDemandPublishingPoint2_get_Limits(This,pVal) ( (This)->lpVtbl -> get_Limits(This,pVal) )
#define IWMSOnDemandPublishingPoint2_get_FileDescriptions(This,RelativePath,pVal) ( (This)->lpVtbl -> get_FileDescriptions(This,RelativePath,pVal) )
#define IWMSOnDemandPublishingPoint2_get_MonikerName(This,pbstrVal) ( (This)->lpVtbl -> get_MonikerName(This,pbstrVal) )
#define IWMSOnDemandPublishingPoint2_get_Name(This,pVal) ( (This)->lpVtbl -> get_Name(This,pVal) )
#define IWMSOnDemandPublishingPoint2_put_Name(This,newVal) ( (This)->lpVtbl -> put_Name(This,newVal) )
#define IWMSOnDemandPublishingPoint2_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSOnDemandPublishingPoint2_get_Path(This,pVal) ( (This)->lpVtbl -> get_Path(This,pVal) )
#define IWMSOnDemandPublishingPoint2_put_Path(This,newVal) ( (This)->lpVtbl -> put_Path(This,newVal) )
#define IWMSOnDemandPublishingPoint2_get_PeakCounters(This,pVal) ( (This)->lpVtbl -> get_PeakCounters(This,pVal) )
#define IWMSOnDemandPublishingPoint2_get_Players(This,pVal) ( (This)->lpVtbl -> get_Players(This,pVal) )
#define IWMSOnDemandPublishingPoint2_get_Properties(This,pVal) ( (This)->lpVtbl -> get_Properties(This,pVal) )
#define IWMSOnDemandPublishingPoint2_get_TotalCounters(This,pVal) ( (This)->lpVtbl -> get_TotalCounters(This,pVal) )
#define IWMSOnDemandPublishingPoint2_get_Type(This,pVal) ( (This)->lpVtbl -> get_Type(This,pVal) )
#define IWMSOnDemandPublishingPoint2_get_WrapperPath(This,pVal) ( (This)->lpVtbl -> get_WrapperPath(This,pVal) )
#define IWMSOnDemandPublishingPoint2_put_WrapperPath(This,newVal) ( (This)->lpVtbl -> put_WrapperPath(This,newVal) )
#define IWMSOnDemandPublishingPoint2_get_Authenticators(This,pVal) ( (This)->lpVtbl -> get_Authenticators(This,pVal) )
#define IWMSOnDemandPublishingPoint2_get_Status(This,pVal) ( (This)->lpVtbl -> get_Status(This,pVal) )
#define IWMSOnDemandPublishingPoint2_get_EnableWrapperPath(This,pVal) ( (This)->lpVtbl -> get_EnableWrapperPath(This,pVal) )
#define IWMSOnDemandPublishingPoint2_put_EnableWrapperPath(This,newVal) ( (This)->lpVtbl -> put_EnableWrapperPath(This,newVal) )
#define IWMSOnDemandPublishingPoint2_get_StreamFilters(This,pVal) ( (This)->lpVtbl -> get_StreamFilters(This,pVal) )
#define IWMSOnDemandPublishingPoint2_get_DistributionUserName(This,pVal) ( (This)->lpVtbl -> get_DistributionUserName(This,pVal) )
#define IWMSOnDemandPublishingPoint2_SetDistributionUserNamePassword(This,newUserName,newUserPassword) ( (This)->lpVtbl -> SetDistributionUserNamePassword(This,newUserName,newUserPassword) )
#define IWMSOnDemandPublishingPoint2_get_CacheProxyExpiration(This,pVal) ( (This)->lpVtbl -> get_CacheProxyExpiration(This,pVal) )
#define IWMSOnDemandPublishingPoint2_put_CacheProxyExpiration(This,newVal) ( (This)->lpVtbl -> put_CacheProxyExpiration(This,newVal) )
#define IWMSOnDemandPublishingPoint2_get_IsDistributionPasswordSet(This,pVal) ( (This)->lpVtbl -> get_IsDistributionPasswordSet(This,pVal) )
#define IWMSOnDemandPublishingPoint2_get_AllowPlayerSideDiskCaching(This,pVal) ( (This)->lpVtbl -> get_AllowPlayerSideDiskCaching(This,pVal) )
#define IWMSOnDemandPublishingPoint2_put_AllowPlayerSideDiskCaching(This,newVal) ( (This)->lpVtbl -> put_AllowPlayerSideDiskCaching(This,newVal) )
#define IWMSOnDemandPublishingPoint2_get_EnableFEC(This,pVal) ( (This)->lpVtbl -> get_EnableFEC(This,pVal) )
#define IWMSOnDemandPublishingPoint2_put_EnableFEC(This,newVal) ( (This)->lpVtbl -> put_EnableFEC(This,newVal) )
#define IWMSOnDemandPublishingPoint2_get_AllowContentCaching(This,pVal) ( (This)->lpVtbl -> get_AllowContentCaching(This,pVal) )
#define IWMSOnDemandPublishingPoint2_put_AllowContentCaching(This,newVal) ( (This)->lpVtbl -> put_AllowContentCaching(This,newVal) )
#define IWMSOnDemandPublishingPoint2_ExportXML(This,bstrXMLFileName) ( (This)->lpVtbl -> ExportXML(This,bstrXMLFileName) )
#define IWMSOnDemandPublishingPoint2_get_EnableClientWildcardDirectoryAccess(This,pVal) ( (This)->lpVtbl -> get_EnableClientWildcardDirectoryAccess(This,pVal) )
#define IWMSOnDemandPublishingPoint2_put_EnableClientWildcardDirectoryAccess(This,newVal) ( (This)->lpVtbl -> put_EnableClientWildcardDirectoryAccess(This,newVal) )
#define IWMSOnDemandPublishingPoint2_get_EnableDownload(This,pVal) ( (This)->lpVtbl -> get_EnableDownload(This,pVal) )
#define IWMSOnDemandPublishingPoint2_put_EnableDownload(This,newVal) ( (This)->lpVtbl -> put_EnableDownload(This,newVal) )
#define IWMSOnDemandPublishingPoint2_get_DownloadBandwidth(This,pVal) ( (This)->lpVtbl -> get_DownloadBandwidth(This,pVal) )
#define IWMSOnDemandPublishingPoint2_put_DownloadBandwidth(This,newVal) ( (This)->lpVtbl -> put_DownloadBandwidth(This,newVal) )
#define IWMSOnDemandPublishingPoint2_get_AllowStartupProfile(This,pVal) ( (This)->lpVtbl -> get_AllowStartupProfile(This,pVal) )
#define IWMSOnDemandPublishingPoint2_put_AllowStartupProfile(This,newVal) ( (This)->lpVtbl -> put_AllowStartupProfile(This,newVal) )
#endif
#endif
#ifndef __IWMSAnnouncementStreamFormats_INTERFACE_DEFINED__
#define __IWMSAnnouncementStreamFormats_INTERFACE_DEFINED__
extern const IID IID_IWMSAnnouncementStreamFormats;
typedef struct IWMSAnnouncementStreamFormatsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSAnnouncementStreamFormats *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSAnnouncementStreamFormats *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSAnnouncementStreamFormats *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSAnnouncementStreamFormats *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSAnnouncementStreamFormats *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSAnnouncementStreamFormats *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSAnnouncementStreamFormats *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IWMSAnnouncementStreamFormats *This, const VARIANT varIndex, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IWMSAnnouncementStreamFormats *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_length) (IWMSAnnouncementStreamFormats *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IWMSAnnouncementStreamFormats *This, IUnknown **pVal);
	HRESULT(STDMETHODCALLTYPE *Add) (IWMSAnnouncementStreamFormats *This, VARIANT varStreamFormat);
	HRESULT(STDMETHODCALLTYPE *Remove) (IWMSAnnouncementStreamFormats *This, VARIANT varIndex);
	HRESULT(STDMETHODCALLTYPE *RemoveAll) (IWMSAnnouncementStreamFormats *This);
	END_INTERFACE
}  IWMSAnnouncementStreamFormatsVtbl;
interface IWMSAnnouncementStreamFormats
{
	CONST_VTBL struct IWMSAnnouncementStreamFormatsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSAnnouncementStreamFormats_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSAnnouncementStreamFormats_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSAnnouncementStreamFormats_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSAnnouncementStreamFormats_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSAnnouncementStreamFormats_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSAnnouncementStreamFormats_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSAnnouncementStreamFormats_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSAnnouncementStreamFormats_get_Item(This,varIndex,pVal) ( (This)->lpVtbl -> get_Item(This,varIndex,pVal) )
#define IWMSAnnouncementStreamFormats_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#define IWMSAnnouncementStreamFormats_get_length(This,pVal) ( (This)->lpVtbl -> get_length(This,pVal) )
#define IWMSAnnouncementStreamFormats_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IWMSAnnouncementStreamFormats_Add(This,varStreamFormat) ( (This)->lpVtbl -> Add(This,varStreamFormat) )
#define IWMSAnnouncementStreamFormats_Remove(This,varIndex) ( (This)->lpVtbl -> Remove(This,varIndex) )
#define IWMSAnnouncementStreamFormats_RemoveAll(This) ( (This)->lpVtbl -> RemoveAll(This) )
#endif
#endif
#ifndef __IWMSBroadcastPublishingPoint_INTERFACE_DEFINED__
#define __IWMSBroadcastPublishingPoint_INTERFACE_DEFINED__
typedef DECLSPEC_UUID("3E52E0ED-72A7-11D2-BF2F-00805FBE84A6")
enum WMS_BROADCAST_PUBLISHING_POINT_STATUS
{
	WMS_BROADCAST_PUBLISHING_POINT_STOPPED = 0,
	WMS_BROADCAST_PUBLISHING_POINT_STARTED_WITHOUT_DATA = 0x1,
	WMS_BROADCAST_PUBLISHING_POINT_STARTED = 0x2,
	WMS_BROADCAST_PUBLISHING_POINT_ARCHIVING = 0x4,
	WMS_BROADCAST_PUBLISHING_POINT_CHANGE_IN_PROGRESS = 0x8
} WMS_BROADCAST_PUBLISHING_POINT_STATUS;
typedef DECLSPEC_UUID("62D6D99D-EB48-4e9e-97DB-C2C09EAADAD4")
enum WMS_BUFFER_SETTING
{
	WMS_BUFFER_SETTING_UNSPECIFIED = 0,
	WMS_BUFFER_SETTING_MINIMIZE_STARTUP_LATENCY = 0x1,
	WMS_BUFFER_SETTING_MINIMIZE_PROPAGATION_LATENCY = 0x2,
	WMS_NUM_BUFFER_SETTING = 0x3
} WMS_BUFFER_SETTING;
extern const IID IID_IWMSBroadcastPublishingPoint;
typedef struct IWMSBroadcastPublishingPointVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSBroadcastPublishingPoint *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSBroadcastPublishingPoint *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSBroadcastPublishingPoint *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSBroadcastPublishingPoint *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSBroadcastPublishingPoint *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSBroadcastPublishingPoint *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSBroadcastPublishingPoint *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_AllowClientsToConnect) (IWMSBroadcastPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowClientsToConnect) (IWMSBroadcastPublishingPoint *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_CurrentCounters) (IWMSBroadcastPublishingPoint *This, IWMSPublishingPointCurrentCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_EventHandlers) (IWMSBroadcastPublishingPoint *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_ID) (IWMSBroadcastPublishingPoint *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Limits) (IWMSBroadcastPublishingPoint *This, IWMSPublishingPointLimits **pVal);
	HRESULT(STDMETHODCALLTYPE *get_FileDescriptions) (IWMSBroadcastPublishingPoint *This, BSTR RelativePath, IWMSFileDescriptions **pVal);
	HRESULT(STDMETHODCALLTYPE *get_MonikerName) (IWMSBroadcastPublishingPoint *This, BSTR *pbstrVal);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IWMSBroadcastPublishingPoint *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_Name) (IWMSBroadcastPublishingPoint *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSBroadcastPublishingPoint *This, IWMSOutgoingDistributionConnections **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Path) (IWMSBroadcastPublishingPoint *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_Path) (IWMSBroadcastPublishingPoint *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_PeakCounters) (IWMSBroadcastPublishingPoint *This, IWMSPublishingPointPeakCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Players) (IWMSBroadcastPublishingPoint *This, IWMSPlayers **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Properties) (IWMSBroadcastPublishingPoint *This, IWMSNamedValues **pVal);
	HRESULT(STDMETHODCALLTYPE *get_TotalCounters) (IWMSBroadcastPublishingPoint *This, IWMSPublishingPointTotalCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Type) (IWMSBroadcastPublishingPoint *This, WMS_PUBLISHING_POINT_TYPE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_WrapperPath) (IWMSBroadcastPublishingPoint *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_WrapperPath) (IWMSBroadcastPublishingPoint *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_Authenticators) (IWMSBroadcastPublishingPoint *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Status) (IWMSBroadcastPublishingPoint *This, WMS_PUBLISHING_POINT_STATUS *pVal);
	HRESULT(STDMETHODCALLTYPE *get_EnableWrapperPath) (IWMSBroadcastPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableWrapperPath) (IWMSBroadcastPublishingPoint *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamFilters) (IWMSBroadcastPublishingPoint *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_DistributionUserName) (IWMSBroadcastPublishingPoint *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *SetDistributionUserNamePassword) (IWMSBroadcastPublishingPoint *This, wchar_t *newUserName, wchar_t *newUserPassword);
	HRESULT(STDMETHODCALLTYPE *get_CacheProxyExpiration) (IWMSBroadcastPublishingPoint *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_CacheProxyExpiration) (IWMSBroadcastPublishingPoint *This, long newVal);
	HRESULT(STDMETHODCALLTYPE *get_IsDistributionPasswordSet) (IWMSBroadcastPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *get_AllowPlayerSideDiskCaching) (IWMSBroadcastPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowPlayerSideDiskCaching) (IWMSBroadcastPublishingPoint *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_EnableFEC) (IWMSBroadcastPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableFEC) (IWMSBroadcastPublishingPoint *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_AllowStreamSplitting) (IWMSBroadcastPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowStreamSplitting) (IWMSBroadcastPublishingPoint *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_AllowClientToStartAndStop) (IWMSBroadcastPublishingPoint *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowClientToStartAndStop) (IWMSBroadcastPublishingPoint *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_BroadcastDataSinks) (IWMSBroadcastPublishingPoint *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_SharedPlaylist) (IWMSBroadcastPublishingPoint *This, IWMSPlaylist **pVal);
	HRESULT(STDMETHODCALLTYPE *StartWithoutData) (IWMSBroadcastPublishingPoint *This);
	HRESULT(STDMETHODCALLTYPE *Start) (IWMSBroadcastPublishingPoint *This);
	HRESULT(STDMETHODCALLTYPE *StartArchive) (IWMSBroadcastPublishingPoint *This);
	HRESULT(STDMETHODCALLTYPE *get_BroadcastStatus) (IWMSBroadcastPublishingPoint *This, WMS_BROADCAST_PUBLISHING_POINT_STATUS *pVal);
	HRESULT(STDMETHODCALLTYPE *Stop) (IWMSBroadcastPublishingPoint *This);
	HRESULT(STDMETHODCALLTYPE *StopArchive) (IWMSBroadcastPublishingPoint *This);
	HRESULT(STDMETHODCALLTYPE *ExportXML) (IWMSBroadcastPublishingPoint *This, BSTR bstrXMLFileName);
	HRESULT(STDMETHODCALLTYPE *get_UpTime) (IWMSBroadcastPublishingPoint *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_AnnouncementStreamFormats) (IWMSBroadcastPublishingPoint *This, IWMSAnnouncementStreamFormats **ppFileNames);
	HRESULT(STDMETHODCALLTYPE *Announce) (IWMSBroadcastPublishingPoint *This);
	HRESULT(STDMETHODCALLTYPE *AnnounceToNSCFile) (IWMSBroadcastPublishingPoint *This, BSTR bstrDestinationFileName, VARIANT_BOOL fOverwriteFlag);
	HRESULT(STDMETHODCALLTYPE *AnnounceToNSCStream) (IWMSBroadcastPublishingPoint *This, IUnknown **ppNSCAnnounceStream);
	HRESULT(STDMETHODCALLTYPE *get_BufferSetting) (IWMSBroadcastPublishingPoint *This, WMS_BUFFER_SETTING *pVal);
	HRESULT(STDMETHODCALLTYPE *put_BufferSetting) (IWMSBroadcastPublishingPoint *This, WMS_BUFFER_SETTING newVal);
	END_INTERFACE
}  IWMSBroadcastPublishingPointVtbl;
interface IWMSBroadcastPublishingPoint
{
	CONST_VTBL struct IWMSBroadcastPublishingPointVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSBroadcastPublishingPoint_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSBroadcastPublishingPoint_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSBroadcastPublishingPoint_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSBroadcastPublishingPoint_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSBroadcastPublishingPoint_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSBroadcastPublishingPoint_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSBroadcastPublishingPoint_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSBroadcastPublishingPoint_get_AllowClientsToConnect(This,pVal) ( (This)->lpVtbl -> get_AllowClientsToConnect(This,pVal) )
#define IWMSBroadcastPublishingPoint_put_AllowClientsToConnect(This,newVal) ( (This)->lpVtbl -> put_AllowClientsToConnect(This,newVal) )
#define IWMSBroadcastPublishingPoint_get_CurrentCounters(This,pVal) ( (This)->lpVtbl -> get_CurrentCounters(This,pVal) )
#define IWMSBroadcastPublishingPoint_get_EventHandlers(This,pVal) ( (This)->lpVtbl -> get_EventHandlers(This,pVal) )
#define IWMSBroadcastPublishingPoint_get_ID(This,pVal) ( (This)->lpVtbl -> get_ID(This,pVal) )
#define IWMSBroadcastPublishingPoint_get_Limits(This,pVal) ( (This)->lpVtbl -> get_Limits(This,pVal) )
#define IWMSBroadcastPublishingPoint_get_FileDescriptions(This,RelativePath,pVal) ( (This)->lpVtbl -> get_FileDescriptions(This,RelativePath,pVal) )
#define IWMSBroadcastPublishingPoint_get_MonikerName(This,pbstrVal) ( (This)->lpVtbl -> get_MonikerName(This,pbstrVal) )
#define IWMSBroadcastPublishingPoint_get_Name(This,pVal) ( (This)->lpVtbl -> get_Name(This,pVal) )
#define IWMSBroadcastPublishingPoint_put_Name(This,newVal) ( (This)->lpVtbl -> put_Name(This,newVal) )
#define IWMSBroadcastPublishingPoint_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSBroadcastPublishingPoint_get_Path(This,pVal) ( (This)->lpVtbl -> get_Path(This,pVal) )
#define IWMSBroadcastPublishingPoint_put_Path(This,newVal) ( (This)->lpVtbl -> put_Path(This,newVal) )
#define IWMSBroadcastPublishingPoint_get_PeakCounters(This,pVal) ( (This)->lpVtbl -> get_PeakCounters(This,pVal) )
#define IWMSBroadcastPublishingPoint_get_Players(This,pVal) ( (This)->lpVtbl -> get_Players(This,pVal) )
#define IWMSBroadcastPublishingPoint_get_Properties(This,pVal) ( (This)->lpVtbl -> get_Properties(This,pVal) )
#define IWMSBroadcastPublishingPoint_get_TotalCounters(This,pVal) ( (This)->lpVtbl -> get_TotalCounters(This,pVal) )
#define IWMSBroadcastPublishingPoint_get_Type(This,pVal) ( (This)->lpVtbl -> get_Type(This,pVal) )
#define IWMSBroadcastPublishingPoint_get_WrapperPath(This,pVal) ( (This)->lpVtbl -> get_WrapperPath(This,pVal) )
#define IWMSBroadcastPublishingPoint_put_WrapperPath(This,newVal) ( (This)->lpVtbl -> put_WrapperPath(This,newVal) )
#define IWMSBroadcastPublishingPoint_get_Authenticators(This,pVal) ( (This)->lpVtbl -> get_Authenticators(This,pVal) )
#define IWMSBroadcastPublishingPoint_get_Status(This,pVal) ( (This)->lpVtbl -> get_Status(This,pVal) )
#define IWMSBroadcastPublishingPoint_get_EnableWrapperPath(This,pVal) ( (This)->lpVtbl -> get_EnableWrapperPath(This,pVal) )
#define IWMSBroadcastPublishingPoint_put_EnableWrapperPath(This,newVal) ( (This)->lpVtbl -> put_EnableWrapperPath(This,newVal) )
#define IWMSBroadcastPublishingPoint_get_StreamFilters(This,pVal) ( (This)->lpVtbl -> get_StreamFilters(This,pVal) )
#define IWMSBroadcastPublishingPoint_get_DistributionUserName(This,pVal) ( (This)->lpVtbl -> get_DistributionUserName(This,pVal) )
#define IWMSBroadcastPublishingPoint_SetDistributionUserNamePassword(This,newUserName,newUserPassword) ( (This)->lpVtbl -> SetDistributionUserNamePassword(This,newUserName,newUserPassword) )
#define IWMSBroadcastPublishingPoint_get_CacheProxyExpiration(This,pVal) ( (This)->lpVtbl -> get_CacheProxyExpiration(This,pVal) )
#define IWMSBroadcastPublishingPoint_put_CacheProxyExpiration(This,newVal) ( (This)->lpVtbl -> put_CacheProxyExpiration(This,newVal) )
#define IWMSBroadcastPublishingPoint_get_IsDistributionPasswordSet(This,pVal) ( (This)->lpVtbl -> get_IsDistributionPasswordSet(This,pVal) )
#define IWMSBroadcastPublishingPoint_get_AllowPlayerSideDiskCaching(This,pVal) ( (This)->lpVtbl -> get_AllowPlayerSideDiskCaching(This,pVal) )
#define IWMSBroadcastPublishingPoint_put_AllowPlayerSideDiskCaching(This,newVal) ( (This)->lpVtbl -> put_AllowPlayerSideDiskCaching(This,newVal) )
#define IWMSBroadcastPublishingPoint_get_EnableFEC(This,pVal) ( (This)->lpVtbl -> get_EnableFEC(This,pVal) )
#define IWMSBroadcastPublishingPoint_put_EnableFEC(This,newVal) ( (This)->lpVtbl -> put_EnableFEC(This,newVal) )
#define IWMSBroadcastPublishingPoint_get_AllowStreamSplitting(This,pVal) ( (This)->lpVtbl -> get_AllowStreamSplitting(This,pVal) )
#define IWMSBroadcastPublishingPoint_put_AllowStreamSplitting(This,newVal) ( (This)->lpVtbl -> put_AllowStreamSplitting(This,newVal) )
#define IWMSBroadcastPublishingPoint_get_AllowClientToStartAndStop(This,pVal) ( (This)->lpVtbl -> get_AllowClientToStartAndStop(This,pVal) )
#define IWMSBroadcastPublishingPoint_put_AllowClientToStartAndStop(This,newVal) ( (This)->lpVtbl -> put_AllowClientToStartAndStop(This,newVal) )
#define IWMSBroadcastPublishingPoint_get_BroadcastDataSinks(This,pVal) ( (This)->lpVtbl -> get_BroadcastDataSinks(This,pVal) )
#define IWMSBroadcastPublishingPoint_get_SharedPlaylist(This,pVal) ( (This)->lpVtbl -> get_SharedPlaylist(This,pVal) )
#define IWMSBroadcastPublishingPoint_StartWithoutData(This) ( (This)->lpVtbl -> StartWithoutData(This) )
#define IWMSBroadcastPublishingPoint_Start(This) ( (This)->lpVtbl -> Start(This) )
#define IWMSBroadcastPublishingPoint_StartArchive(This) ( (This)->lpVtbl -> StartArchive(This) )
#define IWMSBroadcastPublishingPoint_get_BroadcastStatus(This,pVal) ( (This)->lpVtbl -> get_BroadcastStatus(This,pVal) )
#define IWMSBroadcastPublishingPoint_Stop(This) ( (This)->lpVtbl -> Stop(This) )
#define IWMSBroadcastPublishingPoint_StopArchive(This) ( (This)->lpVtbl -> StopArchive(This) )
#define IWMSBroadcastPublishingPoint_ExportXML(This,bstrXMLFileName) ( (This)->lpVtbl -> ExportXML(This,bstrXMLFileName) )
#define IWMSBroadcastPublishingPoint_get_UpTime(This,pVal) ( (This)->lpVtbl -> get_UpTime(This,pVal) )
#define IWMSBroadcastPublishingPoint_get_AnnouncementStreamFormats(This,ppFileNames) ( (This)->lpVtbl -> get_AnnouncementStreamFormats(This,ppFileNames) )
#define IWMSBroadcastPublishingPoint_Announce(This) ( (This)->lpVtbl -> Announce(This) )
#define IWMSBroadcastPublishingPoint_AnnounceToNSCFile(This,bstrDestinationFileName,fOverwriteFlag) ( (This)->lpVtbl -> AnnounceToNSCFile(This,bstrDestinationFileName,fOverwriteFlag) )
#define IWMSBroadcastPublishingPoint_AnnounceToNSCStream(This,ppNSCAnnounceStream) ( (This)->lpVtbl -> AnnounceToNSCStream(This,ppNSCAnnounceStream) )
#define IWMSBroadcastPublishingPoint_get_BufferSetting(This,pVal) ( (This)->lpVtbl -> get_BufferSetting(This,pVal) )
#define IWMSBroadcastPublishingPoint_put_BufferSetting(This,newVal) ( (This)->lpVtbl -> put_BufferSetting(This,newVal) )
#endif
#endif
#ifndef __IWMSBroadcastPublishingPoint2_INTERFACE_DEFINED__
#define __IWMSBroadcastPublishingPoint2_INTERFACE_DEFINED__
extern const IID IID_IWMSBroadcastPublishingPoint2;
typedef struct IWMSBroadcastPublishingPoint2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSBroadcastPublishingPoint2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSBroadcastPublishingPoint2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSBroadcastPublishingPoint2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSBroadcastPublishingPoint2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSBroadcastPublishingPoint2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSBroadcastPublishingPoint2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSBroadcastPublishingPoint2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_AllowClientsToConnect) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowClientsToConnect) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_CurrentCounters) (IWMSBroadcastPublishingPoint2 *This, IWMSPublishingPointCurrentCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_EventHandlers) (IWMSBroadcastPublishingPoint2 *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_ID) (IWMSBroadcastPublishingPoint2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Limits) (IWMSBroadcastPublishingPoint2 *This, IWMSPublishingPointLimits **pVal);
	HRESULT(STDMETHODCALLTYPE *get_FileDescriptions) (IWMSBroadcastPublishingPoint2 *This, BSTR RelativePath, IWMSFileDescriptions **pVal);
	HRESULT(STDMETHODCALLTYPE *get_MonikerName) (IWMSBroadcastPublishingPoint2 *This, BSTR *pbstrVal);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IWMSBroadcastPublishingPoint2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_Name) (IWMSBroadcastPublishingPoint2 *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSBroadcastPublishingPoint2 *This, IWMSOutgoingDistributionConnections **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Path) (IWMSBroadcastPublishingPoint2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_Path) (IWMSBroadcastPublishingPoint2 *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_PeakCounters) (IWMSBroadcastPublishingPoint2 *This, IWMSPublishingPointPeakCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Players) (IWMSBroadcastPublishingPoint2 *This, IWMSPlayers **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Properties) (IWMSBroadcastPublishingPoint2 *This, IWMSNamedValues **pVal);
	HRESULT(STDMETHODCALLTYPE *get_TotalCounters) (IWMSBroadcastPublishingPoint2 *This, IWMSPublishingPointTotalCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Type) (IWMSBroadcastPublishingPoint2 *This, WMS_PUBLISHING_POINT_TYPE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_WrapperPath) (IWMSBroadcastPublishingPoint2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_WrapperPath) (IWMSBroadcastPublishingPoint2 *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *get_Authenticators) (IWMSBroadcastPublishingPoint2 *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Status) (IWMSBroadcastPublishingPoint2 *This, WMS_PUBLISHING_POINT_STATUS *pVal);
	HRESULT(STDMETHODCALLTYPE *get_EnableWrapperPath) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableWrapperPath) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamFilters) (IWMSBroadcastPublishingPoint2 *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_DistributionUserName) (IWMSBroadcastPublishingPoint2 *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *SetDistributionUserNamePassword) (IWMSBroadcastPublishingPoint2 *This, wchar_t *newUserName, wchar_t *newUserPassword);
	HRESULT(STDMETHODCALLTYPE *get_CacheProxyExpiration) (IWMSBroadcastPublishingPoint2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_CacheProxyExpiration) (IWMSBroadcastPublishingPoint2 *This, long newVal);
	HRESULT(STDMETHODCALLTYPE *get_IsDistributionPasswordSet) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *get_AllowPlayerSideDiskCaching) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowPlayerSideDiskCaching) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_EnableFEC) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableFEC) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_AllowStreamSplitting) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowStreamSplitting) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_AllowClientToStartAndStop) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowClientToStartAndStop) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_BroadcastDataSinks) (IWMSBroadcastPublishingPoint2 *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_SharedPlaylist) (IWMSBroadcastPublishingPoint2 *This, IWMSPlaylist **pVal);
	HRESULT(STDMETHODCALLTYPE *StartWithoutData) (IWMSBroadcastPublishingPoint2 *This);
	HRESULT(STDMETHODCALLTYPE *Start) (IWMSBroadcastPublishingPoint2 *This);
	HRESULT(STDMETHODCALLTYPE *StartArchive) (IWMSBroadcastPublishingPoint2 *This);
	HRESULT(STDMETHODCALLTYPE *get_BroadcastStatus) (IWMSBroadcastPublishingPoint2 *This, WMS_BROADCAST_PUBLISHING_POINT_STATUS *pVal);
	HRESULT(STDMETHODCALLTYPE *Stop) (IWMSBroadcastPublishingPoint2 *This);
	HRESULT(STDMETHODCALLTYPE *StopArchive) (IWMSBroadcastPublishingPoint2 *This);
	HRESULT(STDMETHODCALLTYPE *ExportXML) (IWMSBroadcastPublishingPoint2 *This, BSTR bstrXMLFileName);
	HRESULT(STDMETHODCALLTYPE *get_UpTime) (IWMSBroadcastPublishingPoint2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_AnnouncementStreamFormats) (IWMSBroadcastPublishingPoint2 *This, IWMSAnnouncementStreamFormats **ppFileNames);
	HRESULT(STDMETHODCALLTYPE *Announce) (IWMSBroadcastPublishingPoint2 *This);
	HRESULT(STDMETHODCALLTYPE *AnnounceToNSCFile) (IWMSBroadcastPublishingPoint2 *This, BSTR bstrDestinationFileName, VARIANT_BOOL fOverwriteFlag);
	HRESULT(STDMETHODCALLTYPE *AnnounceToNSCStream) (IWMSBroadcastPublishingPoint2 *This, IUnknown **ppNSCAnnounceStream);
	HRESULT(STDMETHODCALLTYPE *get_BufferSetting) (IWMSBroadcastPublishingPoint2 *This, WMS_BUFFER_SETTING *pVal);
	HRESULT(STDMETHODCALLTYPE *put_BufferSetting) (IWMSBroadcastPublishingPoint2 *This, WMS_BUFFER_SETTING newVal);
	HRESULT(STDMETHODCALLTYPE *get_AllowStartupProfile) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowStartupProfile) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE *get_EnableStartVRootOnServiceStart) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableStartVRootOnServiceStart) (IWMSBroadcastPublishingPoint2 *This, VARIANT_BOOL newVal);
	END_INTERFACE
}  IWMSBroadcastPublishingPoint2Vtbl;
interface IWMSBroadcastPublishingPoint2
{
	CONST_VTBL struct IWMSBroadcastPublishingPoint2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSBroadcastPublishingPoint2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSBroadcastPublishingPoint2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSBroadcastPublishingPoint2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSBroadcastPublishingPoint2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSBroadcastPublishingPoint2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSBroadcastPublishingPoint2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSBroadcastPublishingPoint2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSBroadcastPublishingPoint2_get_AllowClientsToConnect(This,pVal) ( (This)->lpVtbl -> get_AllowClientsToConnect(This,pVal) )
#define IWMSBroadcastPublishingPoint2_put_AllowClientsToConnect(This,newVal) ( (This)->lpVtbl -> put_AllowClientsToConnect(This,newVal) )
#define IWMSBroadcastPublishingPoint2_get_CurrentCounters(This,pVal) ( (This)->lpVtbl -> get_CurrentCounters(This,pVal) )
#define IWMSBroadcastPublishingPoint2_get_EventHandlers(This,pVal) ( (This)->lpVtbl -> get_EventHandlers(This,pVal) )
#define IWMSBroadcastPublishingPoint2_get_ID(This,pVal) ( (This)->lpVtbl -> get_ID(This,pVal) )
#define IWMSBroadcastPublishingPoint2_get_Limits(This,pVal) ( (This)->lpVtbl -> get_Limits(This,pVal) )
#define IWMSBroadcastPublishingPoint2_get_FileDescriptions(This,RelativePath,pVal) ( (This)->lpVtbl -> get_FileDescriptions(This,RelativePath,pVal) )
#define IWMSBroadcastPublishingPoint2_get_MonikerName(This,pbstrVal) ( (This)->lpVtbl -> get_MonikerName(This,pbstrVal) )
#define IWMSBroadcastPublishingPoint2_get_Name(This,pVal) ( (This)->lpVtbl -> get_Name(This,pVal) )
#define IWMSBroadcastPublishingPoint2_put_Name(This,newVal) ( (This)->lpVtbl -> put_Name(This,newVal) )
#define IWMSBroadcastPublishingPoint2_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSBroadcastPublishingPoint2_get_Path(This,pVal) ( (This)->lpVtbl -> get_Path(This,pVal) )
#define IWMSBroadcastPublishingPoint2_put_Path(This,newVal) ( (This)->lpVtbl -> put_Path(This,newVal) )
#define IWMSBroadcastPublishingPoint2_get_PeakCounters(This,pVal) ( (This)->lpVtbl -> get_PeakCounters(This,pVal) )
#define IWMSBroadcastPublishingPoint2_get_Players(This,pVal) ( (This)->lpVtbl -> get_Players(This,pVal) )
#define IWMSBroadcastPublishingPoint2_get_Properties(This,pVal) ( (This)->lpVtbl -> get_Properties(This,pVal) )
#define IWMSBroadcastPublishingPoint2_get_TotalCounters(This,pVal) ( (This)->lpVtbl -> get_TotalCounters(This,pVal) )
#define IWMSBroadcastPublishingPoint2_get_Type(This,pVal) ( (This)->lpVtbl -> get_Type(This,pVal) )
#define IWMSBroadcastPublishingPoint2_get_WrapperPath(This,pVal) ( (This)->lpVtbl -> get_WrapperPath(This,pVal) )
#define IWMSBroadcastPublishingPoint2_put_WrapperPath(This,newVal) ( (This)->lpVtbl -> put_WrapperPath(This,newVal) )
#define IWMSBroadcastPublishingPoint2_get_Authenticators(This,pVal) ( (This)->lpVtbl -> get_Authenticators(This,pVal) )
#define IWMSBroadcastPublishingPoint2_get_Status(This,pVal) ( (This)->lpVtbl -> get_Status(This,pVal) )
#define IWMSBroadcastPublishingPoint2_get_EnableWrapperPath(This,pVal) ( (This)->lpVtbl -> get_EnableWrapperPath(This,pVal) )
#define IWMSBroadcastPublishingPoint2_put_EnableWrapperPath(This,newVal) ( (This)->lpVtbl -> put_EnableWrapperPath(This,newVal) )
#define IWMSBroadcastPublishingPoint2_get_StreamFilters(This,pVal) ( (This)->lpVtbl -> get_StreamFilters(This,pVal) )
#define IWMSBroadcastPublishingPoint2_get_DistributionUserName(This,pVal) ( (This)->lpVtbl -> get_DistributionUserName(This,pVal) )
#define IWMSBroadcastPublishingPoint2_SetDistributionUserNamePassword(This,newUserName,newUserPassword) ( (This)->lpVtbl -> SetDistributionUserNamePassword(This,newUserName,newUserPassword) )
#define IWMSBroadcastPublishingPoint2_get_CacheProxyExpiration(This,pVal) ( (This)->lpVtbl -> get_CacheProxyExpiration(This,pVal) )
#define IWMSBroadcastPublishingPoint2_put_CacheProxyExpiration(This,newVal) ( (This)->lpVtbl -> put_CacheProxyExpiration(This,newVal) )
#define IWMSBroadcastPublishingPoint2_get_IsDistributionPasswordSet(This,pVal) ( (This)->lpVtbl -> get_IsDistributionPasswordSet(This,pVal) )
#define IWMSBroadcastPublishingPoint2_get_AllowPlayerSideDiskCaching(This,pVal) ( (This)->lpVtbl -> get_AllowPlayerSideDiskCaching(This,pVal) )
#define IWMSBroadcastPublishingPoint2_put_AllowPlayerSideDiskCaching(This,newVal) ( (This)->lpVtbl -> put_AllowPlayerSideDiskCaching(This,newVal) )
#define IWMSBroadcastPublishingPoint2_get_EnableFEC(This,pVal) ( (This)->lpVtbl -> get_EnableFEC(This,pVal) )
#define IWMSBroadcastPublishingPoint2_put_EnableFEC(This,newVal) ( (This)->lpVtbl -> put_EnableFEC(This,newVal) )
#define IWMSBroadcastPublishingPoint2_get_AllowStreamSplitting(This,pVal) ( (This)->lpVtbl -> get_AllowStreamSplitting(This,pVal) )
#define IWMSBroadcastPublishingPoint2_put_AllowStreamSplitting(This,newVal) ( (This)->lpVtbl -> put_AllowStreamSplitting(This,newVal) )
#define IWMSBroadcastPublishingPoint2_get_AllowClientToStartAndStop(This,pVal) ( (This)->lpVtbl -> get_AllowClientToStartAndStop(This,pVal) )
#define IWMSBroadcastPublishingPoint2_put_AllowClientToStartAndStop(This,newVal) ( (This)->lpVtbl -> put_AllowClientToStartAndStop(This,newVal) )
#define IWMSBroadcastPublishingPoint2_get_BroadcastDataSinks(This,pVal) ( (This)->lpVtbl -> get_BroadcastDataSinks(This,pVal) )
#define IWMSBroadcastPublishingPoint2_get_SharedPlaylist(This,pVal) ( (This)->lpVtbl -> get_SharedPlaylist(This,pVal) )
#define IWMSBroadcastPublishingPoint2_StartWithoutData(This) ( (This)->lpVtbl -> StartWithoutData(This) )
#define IWMSBroadcastPublishingPoint2_Start(This) ( (This)->lpVtbl -> Start(This) )
#define IWMSBroadcastPublishingPoint2_StartArchive(This) ( (This)->lpVtbl -> StartArchive(This) )
#define IWMSBroadcastPublishingPoint2_get_BroadcastStatus(This,pVal) ( (This)->lpVtbl -> get_BroadcastStatus(This,pVal) )
#define IWMSBroadcastPublishingPoint2_Stop(This) ( (This)->lpVtbl -> Stop(This) )
#define IWMSBroadcastPublishingPoint2_StopArchive(This) ( (This)->lpVtbl -> StopArchive(This) )
#define IWMSBroadcastPublishingPoint2_ExportXML(This,bstrXMLFileName) ( (This)->lpVtbl -> ExportXML(This,bstrXMLFileName) )
#define IWMSBroadcastPublishingPoint2_get_UpTime(This,pVal) ( (This)->lpVtbl -> get_UpTime(This,pVal) )
#define IWMSBroadcastPublishingPoint2_get_AnnouncementStreamFormats(This,ppFileNames) ( (This)->lpVtbl -> get_AnnouncementStreamFormats(This,ppFileNames) )
#define IWMSBroadcastPublishingPoint2_Announce(This) ( (This)->lpVtbl -> Announce(This) )
#define IWMSBroadcastPublishingPoint2_AnnounceToNSCFile(This,bstrDestinationFileName,fOverwriteFlag) ( (This)->lpVtbl -> AnnounceToNSCFile(This,bstrDestinationFileName,fOverwriteFlag) )
#define IWMSBroadcastPublishingPoint2_AnnounceToNSCStream(This,ppNSCAnnounceStream) ( (This)->lpVtbl -> AnnounceToNSCStream(This,ppNSCAnnounceStream) )
#define IWMSBroadcastPublishingPoint2_get_BufferSetting(This,pVal) ( (This)->lpVtbl -> get_BufferSetting(This,pVal) )
#define IWMSBroadcastPublishingPoint2_put_BufferSetting(This,newVal) ( (This)->lpVtbl -> put_BufferSetting(This,newVal) )
#define IWMSBroadcastPublishingPoint2_get_AllowStartupProfile(This,pVal) ( (This)->lpVtbl -> get_AllowStartupProfile(This,pVal) )
#define IWMSBroadcastPublishingPoint2_put_AllowStartupProfile(This,newVal) ( (This)->lpVtbl -> put_AllowStartupProfile(This,newVal) )
#define IWMSBroadcastPublishingPoint2_get_EnableStartVRootOnServiceStart(This,pVal) ( (This)->lpVtbl -> get_EnableStartVRootOnServiceStart(This,pVal) )
#define IWMSBroadcastPublishingPoint2_put_EnableStartVRootOnServiceStart(This,newVal) ( (This)->lpVtbl -> put_EnableStartVRootOnServiceStart(This,newVal) )
#endif
#endif
#ifndef __IWMSPublishingPoints_INTERFACE_DEFINED__
#define __IWMSPublishingPoints_INTERFACE_DEFINED__
typedef DECLSPEC_UUID("6ca388b5-eaee-492f-a8d6-8758efc72d76")
enum WMS_PUBLISHING_POINT_CATEGORY
{
	WMS_PUBLISHING_POINT_ON_DEMAND = 1,
	WMS_PUBLISHING_POINT_BROADCAST = 2
} WMS_PUBLISHING_POINT_CATEGORY;
extern const IID IID_IWMSPublishingPoints;
typedef struct IWMSPublishingPointsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSPublishingPoints *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSPublishingPoints *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSPublishingPoints *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSPublishingPoints *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSPublishingPoints *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSPublishingPoints *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSPublishingPoints *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IWMSPublishingPoints *This, const VARIANT varIndex, IWMSPublishingPoint **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IWMSPublishingPoints *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_length) (IWMSPublishingPoints *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IWMSPublishingPoints *This, IUnknown **pVal);
	HRESULT(STDMETHODCALLTYPE *Add) (IWMSPublishingPoints *This, BSTR Name, WMS_PUBLISHING_POINT_CATEGORY Category, BSTR Path, IWMSPublishingPoint **ppNewPubPt);
	HRESULT(STDMETHODCALLTYPE *Remove) (IWMSPublishingPoints *This, VARIANT varIndex);
	HRESULT(STDMETHODCALLTYPE *Clone) (IWMSPublishingPoints *This, BSTR DestName, IWMSPublishingPoint *pSrcPubPt, IWMSPublishingPoint **ppDestPubPt);
	HRESULT(STDMETHODCALLTYPE *ImportXML) (IWMSPublishingPoints *This, BSTR bstrNewPubPtName, BSTR bstrXMLFileName, IWMSPublishingPoint **ppNewPubPt);
	END_INTERFACE
}  IWMSPublishingPointsVtbl;
interface IWMSPublishingPoints
{
	CONST_VTBL struct IWMSPublishingPointsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPublishingPoints_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPublishingPoints_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPublishingPoints_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPublishingPoints_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSPublishingPoints_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSPublishingPoints_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSPublishingPoints_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSPublishingPoints_get_Item(This,varIndex,pVal) ( (This)->lpVtbl -> get_Item(This,varIndex,pVal) )
#define IWMSPublishingPoints_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#define IWMSPublishingPoints_get_length(This,pVal) ( (This)->lpVtbl -> get_length(This,pVal) )
#define IWMSPublishingPoints_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IWMSPublishingPoints_Add(This,Name,Category,Path,ppNewPubPt) ( (This)->lpVtbl -> Add(This,Name,Category,Path,ppNewPubPt) )
#define IWMSPublishingPoints_Remove(This,varIndex) ( (This)->lpVtbl -> Remove(This,varIndex) )
#define IWMSPublishingPoints_Clone(This,DestName,pSrcPubPt,ppDestPubPt) ( (This)->lpVtbl -> Clone(This,DestName,pSrcPubPt,ppDestPubPt) )
#define IWMSPublishingPoints_ImportXML(This,bstrNewPubPtName,bstrXMLFileName,ppNewPubPt) ( (This)->lpVtbl -> ImportXML(This,bstrNewPubPtName,bstrXMLFileName,ppNewPubPt) )
#endif
#endif
#ifndef __IWMSServerCurrentCounters_INTERFACE_DEFINED__
#define __IWMSServerCurrentCounters_INTERFACE_DEFINED__
extern const IID IID_IWMSServerCurrentCounters;
typedef struct IWMSServerCurrentCountersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSServerCurrentCounters *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSServerCurrentCounters *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSServerCurrentCounters *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSServerCurrentCounters *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSServerCurrentCounters *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSServerCurrentCounters *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSServerCurrentCounters *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ConnectedPlayers) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_ConnectionQueue) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_ConnectionRate) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_FileReadRate) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingHTTPPlayers) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_LateReadRate) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingMMSPlayers) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionAllocatedBandwidth) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionSendRate) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlayerAllocatedBandwidth) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlayerSendRate) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingRTSPPlayers) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamErrorRate) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingPlayers) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CacheDownloads) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_LateSendRate) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_UDPResendRequestsRate) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_UDPResendsSentRate) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_IncomingBandwidth) (IWMSServerCurrentCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_AllCounters) (IWMSServerCurrentCounters *This, SAFEARRAY **ppsaCounters);
	END_INTERFACE
}  IWMSServerCurrentCountersVtbl;
interface IWMSServerCurrentCounters
{
	CONST_VTBL struct IWMSServerCurrentCountersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSServerCurrentCounters_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSServerCurrentCounters_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSServerCurrentCounters_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSServerCurrentCounters_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSServerCurrentCounters_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSServerCurrentCounters_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSServerCurrentCounters_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSServerCurrentCounters_get_ConnectedPlayers(This,pVal) ( (This)->lpVtbl -> get_ConnectedPlayers(This,pVal) )
#define IWMSServerCurrentCounters_get_ConnectionQueue(This,pVal) ( (This)->lpVtbl -> get_ConnectionQueue(This,pVal) )
#define IWMSServerCurrentCounters_get_ConnectionRate(This,pVal) ( (This)->lpVtbl -> get_ConnectionRate(This,pVal) )
#define IWMSServerCurrentCounters_get_FileReadRate(This,pVal) ( (This)->lpVtbl -> get_FileReadRate(This,pVal) )
#define IWMSServerCurrentCounters_get_StreamingHTTPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingHTTPPlayers(This,pVal) )
#define IWMSServerCurrentCounters_get_LateReadRate(This,pVal) ( (This)->lpVtbl -> get_LateReadRate(This,pVal) )
#define IWMSServerCurrentCounters_get_StreamingMMSPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingMMSPlayers(This,pVal) )
#define IWMSServerCurrentCounters_get_OutgoingDistributionAllocatedBandwidth(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionAllocatedBandwidth(This,pVal) )
#define IWMSServerCurrentCounters_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSServerCurrentCounters_get_OutgoingDistributionSendRate(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionSendRate(This,pVal) )
#define IWMSServerCurrentCounters_get_PlayerAllocatedBandwidth(This,pVal) ( (This)->lpVtbl -> get_PlayerAllocatedBandwidth(This,pVal) )
#define IWMSServerCurrentCounters_get_PlayerSendRate(This,pVal) ( (This)->lpVtbl -> get_PlayerSendRate(This,pVal) )
#define IWMSServerCurrentCounters_get_StreamingRTSPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingRTSPPlayers(This,pVal) )
#define IWMSServerCurrentCounters_get_StreamErrorRate(This,pVal) ( (This)->lpVtbl -> get_StreamErrorRate(This,pVal) )
#define IWMSServerCurrentCounters_get_StreamingPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingPlayers(This,pVal) )
#define IWMSServerCurrentCounters_get_CacheDownloads(This,pVal) ( (This)->lpVtbl -> get_CacheDownloads(This,pVal) )
#define IWMSServerCurrentCounters_get_LateSendRate(This,pVal) ( (This)->lpVtbl -> get_LateSendRate(This,pVal) )
#define IWMSServerCurrentCounters_get_UDPResendRequestsRate(This,pVal) ( (This)->lpVtbl -> get_UDPResendRequestsRate(This,pVal) )
#define IWMSServerCurrentCounters_get_UDPResendsSentRate(This,pVal) ( (This)->lpVtbl -> get_UDPResendsSentRate(This,pVal) )
#define IWMSServerCurrentCounters_get_IncomingBandwidth(This,pVal) ( (This)->lpVtbl -> get_IncomingBandwidth(This,pVal) )
#define IWMSServerCurrentCounters_get_AllCounters(This,ppsaCounters) ( (This)->lpVtbl -> get_AllCounters(This,ppsaCounters) )
#endif
#endif
#ifndef __IWMSServerCurrentCounters2_INTERFACE_DEFINED__
#define __IWMSServerCurrentCounters2_INTERFACE_DEFINED__
extern const IID IID_IWMSServerCurrentCounters2;
typedef struct IWMSServerCurrentCounters2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSServerCurrentCounters2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSServerCurrentCounters2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSServerCurrentCounters2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSServerCurrentCounters2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSServerCurrentCounters2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSServerCurrentCounters2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSServerCurrentCounters2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ConnectedPlayers) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_ConnectionQueue) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_ConnectionRate) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_FileReadRate) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingHTTPPlayers) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_LateReadRate) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingMMSPlayers) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionAllocatedBandwidth) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionSendRate) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlayerAllocatedBandwidth) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlayerSendRate) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingRTSPPlayers) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamErrorRate) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingPlayers) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CacheDownloads) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_LateSendRate) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_UDPResendRequestsRate) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_UDPResendsSentRate) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_IncomingBandwidth) (IWMSServerCurrentCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_AllCounters) (IWMSServerCurrentCounters2 *This, SAFEARRAY **ppsaCounters);
	HRESULT(STDMETHODCALLTYPE *get_StreamingUDPPlayers) (IWMSServerCurrentCounters2 *This, long *pVal);
	END_INTERFACE
}  IWMSServerCurrentCounters2Vtbl;
interface IWMSServerCurrentCounters2
{
	CONST_VTBL struct IWMSServerCurrentCounters2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSServerCurrentCounters2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSServerCurrentCounters2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSServerCurrentCounters2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSServerCurrentCounters2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSServerCurrentCounters2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSServerCurrentCounters2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSServerCurrentCounters2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSServerCurrentCounters2_get_ConnectedPlayers(This,pVal) ( (This)->lpVtbl -> get_ConnectedPlayers(This,pVal) )
#define IWMSServerCurrentCounters2_get_ConnectionQueue(This,pVal) ( (This)->lpVtbl -> get_ConnectionQueue(This,pVal) )
#define IWMSServerCurrentCounters2_get_ConnectionRate(This,pVal) ( (This)->lpVtbl -> get_ConnectionRate(This,pVal) )
#define IWMSServerCurrentCounters2_get_FileReadRate(This,pVal) ( (This)->lpVtbl -> get_FileReadRate(This,pVal) )
#define IWMSServerCurrentCounters2_get_StreamingHTTPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingHTTPPlayers(This,pVal) )
#define IWMSServerCurrentCounters2_get_LateReadRate(This,pVal) ( (This)->lpVtbl -> get_LateReadRate(This,pVal) )
#define IWMSServerCurrentCounters2_get_StreamingMMSPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingMMSPlayers(This,pVal) )
#define IWMSServerCurrentCounters2_get_OutgoingDistributionAllocatedBandwidth(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionAllocatedBandwidth(This,pVal) )
#define IWMSServerCurrentCounters2_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSServerCurrentCounters2_get_OutgoingDistributionSendRate(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionSendRate(This,pVal) )
#define IWMSServerCurrentCounters2_get_PlayerAllocatedBandwidth(This,pVal) ( (This)->lpVtbl -> get_PlayerAllocatedBandwidth(This,pVal) )
#define IWMSServerCurrentCounters2_get_PlayerSendRate(This,pVal) ( (This)->lpVtbl -> get_PlayerSendRate(This,pVal) )
#define IWMSServerCurrentCounters2_get_StreamingRTSPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingRTSPPlayers(This,pVal) )
#define IWMSServerCurrentCounters2_get_StreamErrorRate(This,pVal) ( (This)->lpVtbl -> get_StreamErrorRate(This,pVal) )
#define IWMSServerCurrentCounters2_get_StreamingPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingPlayers(This,pVal) )
#define IWMSServerCurrentCounters2_get_CacheDownloads(This,pVal) ( (This)->lpVtbl -> get_CacheDownloads(This,pVal) )
#define IWMSServerCurrentCounters2_get_LateSendRate(This,pVal) ( (This)->lpVtbl -> get_LateSendRate(This,pVal) )
#define IWMSServerCurrentCounters2_get_UDPResendRequestsRate(This,pVal) ( (This)->lpVtbl -> get_UDPResendRequestsRate(This,pVal) )
#define IWMSServerCurrentCounters2_get_UDPResendsSentRate(This,pVal) ( (This)->lpVtbl -> get_UDPResendsSentRate(This,pVal) )
#define IWMSServerCurrentCounters2_get_IncomingBandwidth(This,pVal) ( (This)->lpVtbl -> get_IncomingBandwidth(This,pVal) )
#define IWMSServerCurrentCounters2_get_AllCounters(This,ppsaCounters) ( (This)->lpVtbl -> get_AllCounters(This,ppsaCounters) )
#define IWMSServerCurrentCounters2_get_StreamingUDPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingUDPPlayers(This,pVal) )
#endif
#endif
#ifndef __IWMSServerPeakCounters_INTERFACE_DEFINED__
#define __IWMSServerPeakCounters_INTERFACE_DEFINED__
extern const IID IID_IWMSServerPeakCounters;
typedef struct IWMSServerPeakCountersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSServerPeakCounters *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSServerPeakCounters *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSServerPeakCounters *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSServerPeakCounters *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSServerPeakCounters *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSServerPeakCounters *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSServerPeakCounters *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ConnectedPlayers) (IWMSServerPeakCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSServerPeakCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionAllocatedBandwidth) (IWMSServerPeakCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlayerSendRate) (IWMSServerPeakCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlayerAllocatedBandwidth) (IWMSServerPeakCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionSendRate) (IWMSServerPeakCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CountersStartTime) (IWMSServerPeakCounters *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingPlayers) (IWMSServerPeakCounters *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *Reset) (IWMSServerPeakCounters *This);
	HRESULT(STDMETHODCALLTYPE *get_AllCounters) (IWMSServerPeakCounters *This, SAFEARRAY **ppsaCounters);
	END_INTERFACE
}  IWMSServerPeakCountersVtbl;
interface IWMSServerPeakCounters
{
	CONST_VTBL struct IWMSServerPeakCountersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSServerPeakCounters_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSServerPeakCounters_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSServerPeakCounters_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSServerPeakCounters_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSServerPeakCounters_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSServerPeakCounters_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSServerPeakCounters_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSServerPeakCounters_get_ConnectedPlayers(This,pVal) ( (This)->lpVtbl -> get_ConnectedPlayers(This,pVal) )
#define IWMSServerPeakCounters_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSServerPeakCounters_get_OutgoingDistributionAllocatedBandwidth(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionAllocatedBandwidth(This,pVal) )
#define IWMSServerPeakCounters_get_PlayerSendRate(This,pVal) ( (This)->lpVtbl -> get_PlayerSendRate(This,pVal) )
#define IWMSServerPeakCounters_get_PlayerAllocatedBandwidth(This,pVal) ( (This)->lpVtbl -> get_PlayerAllocatedBandwidth(This,pVal) )
#define IWMSServerPeakCounters_get_OutgoingDistributionSendRate(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionSendRate(This,pVal) )
#define IWMSServerPeakCounters_get_CountersStartTime(This,pVal) ( (This)->lpVtbl -> get_CountersStartTime(This,pVal) )
#define IWMSServerPeakCounters_get_StreamingPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingPlayers(This,pVal) )
#define IWMSServerPeakCounters_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IWMSServerPeakCounters_get_AllCounters(This,ppsaCounters) ( (This)->lpVtbl -> get_AllCounters(This,ppsaCounters) )
#endif
#endif
#ifndef __IWMSServerPeakCounters2_INTERFACE_DEFINED__
#define __IWMSServerPeakCounters2_INTERFACE_DEFINED__
extern const IID IID_IWMSServerPeakCounters2;
typedef struct IWMSServerPeakCounters2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSServerPeakCounters2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSServerPeakCounters2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSServerPeakCounters2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSServerPeakCounters2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSServerPeakCounters2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSServerPeakCounters2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSServerPeakCounters2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ConnectedPlayers) (IWMSServerPeakCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSServerPeakCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionAllocatedBandwidth) (IWMSServerPeakCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlayerSendRate) (IWMSServerPeakCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlayerAllocatedBandwidth) (IWMSServerPeakCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionSendRate) (IWMSServerPeakCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_CountersStartTime) (IWMSServerPeakCounters2 *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingPlayers) (IWMSServerPeakCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *Reset) (IWMSServerPeakCounters2 *This);
	HRESULT(STDMETHODCALLTYPE *get_AllCounters) (IWMSServerPeakCounters2 *This, SAFEARRAY **ppsaCounters);
	HRESULT(STDMETHODCALLTYPE *get_StreamingUDPPlayers) (IWMSServerPeakCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingHTTPPlayers) (IWMSServerPeakCounters2 *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_StreamingRTSPPlayers) (IWMSServerPeakCounters2 *This, long *pVal);
	END_INTERFACE
}  IWMSServerPeakCounters2Vtbl;
interface IWMSServerPeakCounters2
{
	CONST_VTBL struct IWMSServerPeakCounters2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSServerPeakCounters2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSServerPeakCounters2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSServerPeakCounters2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSServerPeakCounters2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSServerPeakCounters2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSServerPeakCounters2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSServerPeakCounters2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSServerPeakCounters2_get_ConnectedPlayers(This,pVal) ( (This)->lpVtbl -> get_ConnectedPlayers(This,pVal) )
#define IWMSServerPeakCounters2_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSServerPeakCounters2_get_OutgoingDistributionAllocatedBandwidth(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionAllocatedBandwidth(This,pVal) )
#define IWMSServerPeakCounters2_get_PlayerSendRate(This,pVal) ( (This)->lpVtbl -> get_PlayerSendRate(This,pVal) )
#define IWMSServerPeakCounters2_get_PlayerAllocatedBandwidth(This,pVal) ( (This)->lpVtbl -> get_PlayerAllocatedBandwidth(This,pVal) )
#define IWMSServerPeakCounters2_get_OutgoingDistributionSendRate(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionSendRate(This,pVal) )
#define IWMSServerPeakCounters2_get_CountersStartTime(This,pVal) ( (This)->lpVtbl -> get_CountersStartTime(This,pVal) )
#define IWMSServerPeakCounters2_get_StreamingPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingPlayers(This,pVal) )
#define IWMSServerPeakCounters2_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IWMSServerPeakCounters2_get_AllCounters(This,ppsaCounters) ( (This)->lpVtbl -> get_AllCounters(This,ppsaCounters) )
#define IWMSServerPeakCounters2_get_StreamingUDPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingUDPPlayers(This,pVal) )
#define IWMSServerPeakCounters2_get_StreamingHTTPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingHTTPPlayers(This,pVal) )
#define IWMSServerPeakCounters2_get_StreamingRTSPPlayers(This,pVal) ( (This)->lpVtbl -> get_StreamingRTSPPlayers(This,pVal) )
#endif
#endif
#ifndef __IWMSServerLimits_INTERFACE_DEFINED__
#define __IWMSServerLimits_INTERFACE_DEFINED__
extern const IID IID_IWMSServerLimits;
typedef struct IWMSServerLimitsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSServerLimits *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSServerLimits *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSServerLimits *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSServerLimits *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSServerLimits *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSServerLimits *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSServerLimits *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_ConnectedPlayers) (IWMSServerLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_ConnectedPlayers) (IWMSServerLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_ConnectionRate) (IWMSServerLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_ConnectionRate) (IWMSServerLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionBandwidth) (IWMSServerLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_OutgoingDistributionBandwidth) (IWMSServerLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSServerLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_OutgoingDistributionConnections) (IWMSServerLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_PerOutgoingDistributionConnectionBandwidth) (IWMSServerLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_PerOutgoingDistributionConnectionBandwidth) (IWMSServerLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_PlayerBandwidth) (IWMSServerLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_PlayerBandwidth) (IWMSServerLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_PlayerInactivityTimeout) (IWMSServerLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_PlayerInactivityTimeout) (IWMSServerLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_PerPlayerConnectionBandwidth) (IWMSServerLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_PerPlayerConnectionBandwidth) (IWMSServerLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_PlayerAcknowledgementTimeout) (IWMSServerLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_PlayerAcknowledgementTimeout) (IWMSServerLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_CPUUtilizationDuringConnection) (IWMSServerLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_CPUUtilizationDuringConnection) (IWMSServerLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_DiagnosticEvents) (IWMSServerLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_DiagnosticEvents) (IWMSServerLimits *This, long Val);
	HRESULT(STDMETHODCALLTYPE *get_IncomingBandwidth) (IWMSServerLimits *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *put_IncomingBandwidth) (IWMSServerLimits *This, long Val);
	END_INTERFACE
}  IWMSServerLimitsVtbl;
interface IWMSServerLimits
{
	CONST_VTBL struct IWMSServerLimitsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSServerLimits_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSServerLimits_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSServerLimits_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSServerLimits_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSServerLimits_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSServerLimits_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSServerLimits_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSServerLimits_get_ConnectedPlayers(This,pVal) ( (This)->lpVtbl -> get_ConnectedPlayers(This,pVal) )
#define IWMSServerLimits_put_ConnectedPlayers(This,Val) ( (This)->lpVtbl -> put_ConnectedPlayers(This,Val) )
#define IWMSServerLimits_get_ConnectionRate(This,pVal) ( (This)->lpVtbl -> get_ConnectionRate(This,pVal) )
#define IWMSServerLimits_put_ConnectionRate(This,Val) ( (This)->lpVtbl -> put_ConnectionRate(This,Val) )
#define IWMSServerLimits_get_OutgoingDistributionBandwidth(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionBandwidth(This,pVal) )
#define IWMSServerLimits_put_OutgoingDistributionBandwidth(This,Val) ( (This)->lpVtbl -> put_OutgoingDistributionBandwidth(This,Val) )
#define IWMSServerLimits_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSServerLimits_put_OutgoingDistributionConnections(This,Val) ( (This)->lpVtbl -> put_OutgoingDistributionConnections(This,Val) )
#define IWMSServerLimits_get_PerOutgoingDistributionConnectionBandwidth(This,pVal) ( (This)->lpVtbl -> get_PerOutgoingDistributionConnectionBandwidth(This,pVal) )
#define IWMSServerLimits_put_PerOutgoingDistributionConnectionBandwidth(This,Val) ( (This)->lpVtbl -> put_PerOutgoingDistributionConnectionBandwidth(This,Val) )
#define IWMSServerLimits_get_PlayerBandwidth(This,pVal) ( (This)->lpVtbl -> get_PlayerBandwidth(This,pVal) )
#define IWMSServerLimits_put_PlayerBandwidth(This,Val) ( (This)->lpVtbl -> put_PlayerBandwidth(This,Val) )
#define IWMSServerLimits_get_PlayerInactivityTimeout(This,pVal) ( (This)->lpVtbl -> get_PlayerInactivityTimeout(This,pVal) )
#define IWMSServerLimits_put_PlayerInactivityTimeout(This,Val) ( (This)->lpVtbl -> put_PlayerInactivityTimeout(This,Val) )
#define IWMSServerLimits_get_PerPlayerConnectionBandwidth(This,pVal) ( (This)->lpVtbl -> get_PerPlayerConnectionBandwidth(This,pVal) )
#define IWMSServerLimits_put_PerPlayerConnectionBandwidth(This,Val) ( (This)->lpVtbl -> put_PerPlayerConnectionBandwidth(This,Val) )
#define IWMSServerLimits_get_PlayerAcknowledgementTimeout(This,pVal) ( (This)->lpVtbl -> get_PlayerAcknowledgementTimeout(This,pVal) )
#define IWMSServerLimits_put_PlayerAcknowledgementTimeout(This,Val) ( (This)->lpVtbl -> put_PlayerAcknowledgementTimeout(This,Val) )
#define IWMSServerLimits_get_CPUUtilizationDuringConnection(This,pVal) ( (This)->lpVtbl -> get_CPUUtilizationDuringConnection(This,pVal) )
#define IWMSServerLimits_put_CPUUtilizationDuringConnection(This,Val) ( (This)->lpVtbl -> put_CPUUtilizationDuringConnection(This,Val) )
#define IWMSServerLimits_get_DiagnosticEvents(This,pVal) ( (This)->lpVtbl -> get_DiagnosticEvents(This,pVal) )
#define IWMSServerLimits_put_DiagnosticEvents(This,Val) ( (This)->lpVtbl -> put_DiagnosticEvents(This,Val) )
#define IWMSServerLimits_get_IncomingBandwidth(This,pVal) ( (This)->lpVtbl -> get_IncomingBandwidth(This,pVal) )
#define IWMSServerLimits_put_IncomingBandwidth(This,Val) ( (This)->lpVtbl -> put_IncomingBandwidth(This,Val) )
#endif
#endif
#ifndef __IWMSServer_INTERFACE_DEFINED__
#define __IWMSServer_INTERFACE_DEFINED__
typedef DECLSPEC_UUID("3E52E0EE-72A7-11D2-BF2F-00805FBE84A6")
enum WMS_SERVER_STATUS
{
	WMS_SERVER_RUNNING = 0,
	WMS_SERVER_ERROR = 0x1,
	WMS_SERVER_ERROR_CRITICAL = 0x2
} WMS_SERVER_STATUS;
typedef DECLSPEC_UUID("49A0F530-F475-45a6-99C5-E52382685BA8")
enum WMS_OS_PRODUCT_TYPE
{
	WMS_OS_PRODUCT_SERVER = 0x1,
	WMS_OS_PRODUCT_ADVANCED = 0x2
} WMS_OS_PRODUCT_TYPE;
extern const IID IID_IWMSServer;
typedef struct IWMSServerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSServer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSServer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSServer *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSServer *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSServer *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSServer *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSServer *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_AllowClientsToConnect) (IWMSServer *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_AllowClientsToConnect) (IWMSServer *This, VARIANT_BOOL val);
	HRESULT(STDMETHODCALLTYPE *get_Authenticators) (IWMSServer *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_CacheProxy) (IWMSServer *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_ControlProtocols) (IWMSServer *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_CurrentCounters) (IWMSServer *This, IWMSServerCurrentCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_DataSources) (IWMSServer *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_EventHandlers) (IWMSServer *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Limits) (IWMSServer *This, IWMSServerLimits **pVal);
	HRESULT(STDMETHODCALLTYPE *get_FileDescriptions) (IWMSServer *This, BSTR Path, WMS_FILE_TYPE Type, IWMSFileDescriptions **pVal);
	HRESULT(STDMETHODCALLTYPE *get_MediaParsers) (IWMSServer *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_MonikerName) (IWMSServer *This, BSTR *pbstrVal);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IWMSServer *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_PeakCounters) (IWMSServer *This, IWMSServerPeakCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_PlaylistParsers) (IWMSServer *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Properties) (IWMSServer *This, IWMSNamedValues **pVal);
	HRESULT(STDMETHODCALLTYPE *get_PublishingPoints) (IWMSServer *This, IWMSPublishingPoints **pVal);
	HRESULT(STDMETHODCALLTYPE *get_TotalCounters) (IWMSServer *This, IWMSServerTotalCounters **pVal);
	HRESULT(STDMETHODCALLTYPE *get_UnicastDataSinks) (IWMSServer *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Players) (IWMSServer *This, IWMSPlayers **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Status) (IWMSServer *This, WMS_SERVER_STATUS *pVal);
	HRESULT(STDMETHODCALLTYPE *CreatePlaylist) (IWMSServer *This, IXMLDOMDocument **ppPlaylist);
	HRESULT(STDMETHODCALLTYPE *get_StartTime) (IWMSServer *This, DATE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_OutgoingDistributionConnections) (IWMSServer *This, IWMSOutgoingDistributionConnections **pVal);
	HRESULT(STDMETHODCALLTYPE *get_CPUUtilization) (IWMSServer *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *ExportXML) (IWMSServer *This, BSTR bstrXMLFileName);
	HRESULT(STDMETHODCALLTYPE *get_StreamFilters) (IWMSServer *This, IWMSPlugins **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Version) (IWMSServer *This, BSTR *pbstrVal);
	HRESULT(STDMETHODCALLTYPE *get_DefaultPluginLoadType) (IWMSServer *This, WMS_PLUGIN_LOAD_TYPE *pVal);
	HRESULT(STDMETHODCALLTYPE *put_DefaultPluginLoadType) (IWMSServer *This, WMS_PLUGIN_LOAD_TYPE val);
	HRESULT(STDMETHODCALLTYPE *get_AvailableIPAddresses) (IWMSServer *This, IWMSAvailableIPAddresses **ppIPAddrList);
	HRESULT(STDMETHODCALLTYPE *get_RootDirectories) (IWMSServer *This, IWMSRootDirectories **ppRootDirectories);
	HRESULT(STDMETHODCALLTYPE *get_DiagnosticEvents) (IWMSServer *This, IWMSDiagnosticEvents **ppDiagEvents);
	HRESULT(STDMETHODCALLTYPE *get_EnableReverseProxyMode) (IWMSServer *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *put_EnableReverseProxyMode) (IWMSServer *This, VARIANT_BOOL val);
	HRESULT(STDMETHODCALLTYPE *get_FileType) (IWMSServer *This, BSTR path, WMS_FILE_TYPE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_DefaultPath) (IWMSServer *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *put_DefaultPath) (IWMSServer *This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE *DownloadContent) (IWMSServer *This, BSTR SourceUrl, BSTR DestinationUrl, long lContentSizeLow, long lContentSizeHigh, long lBitRate);
	HRESULT(STDMETHODCALLTYPE *get_OSProductType) (IWMSServer *This, WMS_OS_PRODUCT_TYPE *pVal);
	END_INTERFACE
}  IWMSServerVtbl;
interface IWMSServer
{
	CONST_VTBL struct IWMSServerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSServer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSServer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSServer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSServer_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSServer_get_AllowClientsToConnect(This,pVal) ( (This)->lpVtbl -> get_AllowClientsToConnect(This,pVal) )
#define IWMSServer_put_AllowClientsToConnect(This,val) ( (This)->lpVtbl -> put_AllowClientsToConnect(This,val) )
#define IWMSServer_get_Authenticators(This,pVal) ( (This)->lpVtbl -> get_Authenticators(This,pVal) )
#define IWMSServer_get_CacheProxy(This,pVal) ( (This)->lpVtbl -> get_CacheProxy(This,pVal) )
#define IWMSServer_get_ControlProtocols(This,pVal) ( (This)->lpVtbl -> get_ControlProtocols(This,pVal) )
#define IWMSServer_get_CurrentCounters(This,pVal) ( (This)->lpVtbl -> get_CurrentCounters(This,pVal) )
#define IWMSServer_get_DataSources(This,pVal) ( (This)->lpVtbl -> get_DataSources(This,pVal) )
#define IWMSServer_get_EventHandlers(This,pVal) ( (This)->lpVtbl -> get_EventHandlers(This,pVal) )
#define IWMSServer_get_Limits(This,pVal) ( (This)->lpVtbl -> get_Limits(This,pVal) )
#define IWMSServer_get_FileDescriptions(This,Path,Type,pVal) ( (This)->lpVtbl -> get_FileDescriptions(This,Path,Type,pVal) )
#define IWMSServer_get_MediaParsers(This,pVal) ( (This)->lpVtbl -> get_MediaParsers(This,pVal) )
#define IWMSServer_get_MonikerName(This,pbstrVal) ( (This)->lpVtbl -> get_MonikerName(This,pbstrVal) )
#define IWMSServer_get_Name(This,pVal) ( (This)->lpVtbl -> get_Name(This,pVal) )
#define IWMSServer_get_PeakCounters(This,pVal) ( (This)->lpVtbl -> get_PeakCounters(This,pVal) )
#define IWMSServer_get_PlaylistParsers(This,pVal) ( (This)->lpVtbl -> get_PlaylistParsers(This,pVal) )
#define IWMSServer_get_Properties(This,pVal) ( (This)->lpVtbl -> get_Properties(This,pVal) )
#define IWMSServer_get_PublishingPoints(This,pVal) ( (This)->lpVtbl -> get_PublishingPoints(This,pVal) )
#define IWMSServer_get_TotalCounters(This,pVal) ( (This)->lpVtbl -> get_TotalCounters(This,pVal) )
#define IWMSServer_get_UnicastDataSinks(This,pVal) ( (This)->lpVtbl -> get_UnicastDataSinks(This,pVal) )
#define IWMSServer_get_Players(This,pVal) ( (This)->lpVtbl -> get_Players(This,pVal) )
#define IWMSServer_get_Status(This,pVal) ( (This)->lpVtbl -> get_Status(This,pVal) )
#define IWMSServer_CreatePlaylist(This,ppPlaylist) ( (This)->lpVtbl -> CreatePlaylist(This,ppPlaylist) )
#define IWMSServer_get_StartTime(This,pVal) ( (This)->lpVtbl -> get_StartTime(This,pVal) )
#define IWMSServer_get_OutgoingDistributionConnections(This,pVal) ( (This)->lpVtbl -> get_OutgoingDistributionConnections(This,pVal) )
#define IWMSServer_get_CPUUtilization(This,pVal) ( (This)->lpVtbl -> get_CPUUtilization(This,pVal) )
#define IWMSServer_ExportXML(This,bstrXMLFileName) ( (This)->lpVtbl -> ExportXML(This,bstrXMLFileName) )
#define IWMSServer_get_StreamFilters(This,pVal) ( (This)->lpVtbl -> get_StreamFilters(This,pVal) )
#define IWMSServer_get_Version(This,pbstrVal) ( (This)->lpVtbl -> get_Version(This,pbstrVal) )
#define IWMSServer_get_DefaultPluginLoadType(This,pVal) ( (This)->lpVtbl -> get_DefaultPluginLoadType(This,pVal) )
#define IWMSServer_put_DefaultPluginLoadType(This,val) ( (This)->lpVtbl -> put_DefaultPluginLoadType(This,val) )
#define IWMSServer_get_AvailableIPAddresses(This,ppIPAddrList) ( (This)->lpVtbl -> get_AvailableIPAddresses(This,ppIPAddrList) )
#define IWMSServer_get_RootDirectories(This,ppRootDirectories) ( (This)->lpVtbl -> get_RootDirectories(This,ppRootDirectories) )
#define IWMSServer_get_DiagnosticEvents(This,ppDiagEvents) ( (This)->lpVtbl -> get_DiagnosticEvents(This,ppDiagEvents) )
#define IWMSServer_get_EnableReverseProxyMode(This,pVal) ( (This)->lpVtbl -> get_EnableReverseProxyMode(This,pVal) )
#define IWMSServer_put_EnableReverseProxyMode(This,val) ( (This)->lpVtbl -> put_EnableReverseProxyMode(This,val) )
#define IWMSServer_get_FileType(This,path,pVal) ( (This)->lpVtbl -> get_FileType(This,path,pVal) )
#define IWMSServer_get_DefaultPath(This,pVal) ( (This)->lpVtbl -> get_DefaultPath(This,pVal) )
#define IWMSServer_put_DefaultPath(This,newVal) ( (This)->lpVtbl -> put_DefaultPath(This,newVal) )
#define IWMSServer_DownloadContent(This,SourceUrl,DestinationUrl,lContentSizeLow,lContentSizeHigh,lBitRate) ( (This)->lpVtbl -> DownloadContent(This,SourceUrl,DestinationUrl,lContentSizeLow,lContentSizeHigh,lBitRate) )
#define IWMSServer_get_OSProductType(This,pVal) ( (This)->lpVtbl -> get_OSProductType(This,pVal) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_wmsserver_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsserver_0000_0037_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
