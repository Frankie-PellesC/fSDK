/*+@@file@@----------------------------------------------------------------*//*!
 \file		FaxCom.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 10 16:36:53 2016
 \date		Modified on Sun Jul 10 16:36:53 2016
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
#ifndef __faxcom_h__
#define __faxcom_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IFaxTiff_FWD_DEFINED__
#define __IFaxTiff_FWD_DEFINED__
typedef interface IFaxTiff IFaxTiff;
#endif
#ifndef __IFaxServer_FWD_DEFINED__
#define __IFaxServer_FWD_DEFINED__
typedef interface IFaxServer IFaxServer;
#endif
#ifndef __IFaxPort_FWD_DEFINED__
#define __IFaxPort_FWD_DEFINED__
typedef interface IFaxPort IFaxPort;
#endif
#ifndef __IFaxPorts_FWD_DEFINED__
#define __IFaxPorts_FWD_DEFINED__
typedef interface IFaxPorts IFaxPorts;
#endif
#ifndef __IFaxRoutingMethod_FWD_DEFINED__
#define __IFaxRoutingMethod_FWD_DEFINED__
typedef interface IFaxRoutingMethod IFaxRoutingMethod;
#endif
#ifndef __IFaxRoutingMethods_FWD_DEFINED__
#define __IFaxRoutingMethods_FWD_DEFINED__
typedef interface IFaxRoutingMethods IFaxRoutingMethods;
#endif
#ifndef __IFaxStatus_FWD_DEFINED__
#define __IFaxStatus_FWD_DEFINED__
typedef interface IFaxStatus IFaxStatus;
#endif
#ifndef __IFaxDoc_FWD_DEFINED__
#define __IFaxDoc_FWD_DEFINED__
typedef interface IFaxDoc IFaxDoc;
#endif
#ifndef __IFaxJobs_FWD_DEFINED__
#define __IFaxJobs_FWD_DEFINED__
typedef interface IFaxJobs IFaxJobs;
#endif
#ifndef __IFaxJob_FWD_DEFINED__
#define __IFaxJob_FWD_DEFINED__
typedef interface IFaxJob IFaxJob;
#endif
#ifndef __FaxTiff_FWD_DEFINED__
#define __FaxTiff_FWD_DEFINED__
typedef struct FaxTiff FaxTiff;
#endif
#ifndef __FaxServer_FWD_DEFINED__
#define __FaxServer_FWD_DEFINED__
typedef struct FaxServer FaxServer;
#endif
#ifndef __FaxPort_FWD_DEFINED__
#define __FaxPort_FWD_DEFINED__
typedef struct FaxPort FaxPort;
#endif
#ifndef __FaxPorts_FWD_DEFINED__
#define __FaxPorts_FWD_DEFINED__
typedef struct FaxPorts FaxPorts;
#endif
#ifndef __FaxRoutingMethod_FWD_DEFINED__
#define __FaxRoutingMethod_FWD_DEFINED__
typedef struct FaxRoutingMethod FaxRoutingMethod;
#endif
#ifndef __FaxRoutingMethods_FWD_DEFINED__
#define __FaxRoutingMethods_FWD_DEFINED__
typedef struct FaxRoutingMethods FaxRoutingMethods;
#endif
#ifndef __FaxStatus_FWD_DEFINED__
#define __FaxStatus_FWD_DEFINED__
typedef struct FaxStatus FaxStatus;
#endif
#ifndef __FaxDoc_FWD_DEFINED__
#define __FaxDoc_FWD_DEFINED__
typedef struct FaxDoc FaxDoc;
#endif
#ifndef __FaxJobs_FWD_DEFINED__
#define __FaxJobs_FWD_DEFINED__
typedef struct FaxJobs FaxJobs;
#endif
#ifndef __FaxJob_FWD_DEFINED__
#define __FaxJob_FWD_DEFINED__
typedef struct FaxJob FaxJob;
#endif
#include <oaidl.h>
#include <ocidl.h>
#ifndef __IFaxTiff_INTERFACE_DEFINED__
#define __IFaxTiff_INTERFACE_DEFINED__
extern const IID IID_IFaxTiff;
typedef struct IFaxTiffVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxTiff * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxTiff * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxTiff * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxTiff * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxTiff * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxTiff * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxTiff * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ReceiveTime) (IFaxTiff * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Image) (IFaxTiff * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Image) (IFaxTiff * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_RecipientName) (IFaxTiff * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SenderName) (IFaxTiff * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Routing) (IFaxTiff * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_CallerId) (IFaxTiff * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Csid) (IFaxTiff * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Tsid) (IFaxTiff * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_RecipientNumber) (IFaxTiff * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_RawReceiveTime) (IFaxTiff * This, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get_TiffTagString) (IFaxTiff * This, int tagID, BSTR * pVal);
	END_INTERFACE
}  IFaxTiffVtbl;
interface IFaxTiff
{
	CONST_VTBL struct IFaxTiffVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxTiff_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxTiff_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxTiff_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxTiff_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxTiff_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxTiff_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxTiff_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxTiff_get_ReceiveTime(This,pVal)( (This)->lpVtbl -> get_ReceiveTime(This,pVal) )
#define IFaxTiff_get_Image(This,pVal)( (This)->lpVtbl -> get_Image(This,pVal) )
#define IFaxTiff_put_Image(This,newVal)( (This)->lpVtbl -> put_Image(This,newVal) )
#define IFaxTiff_get_RecipientName(This,pVal)( (This)->lpVtbl -> get_RecipientName(This,pVal) )
#define IFaxTiff_get_SenderName(This,pVal)( (This)->lpVtbl -> get_SenderName(This,pVal) )
#define IFaxTiff_get_Routing(This,pVal)( (This)->lpVtbl -> get_Routing(This,pVal) )
#define IFaxTiff_get_CallerId(This,pVal)( (This)->lpVtbl -> get_CallerId(This,pVal) )
#define IFaxTiff_get_Csid(This,pVal)( (This)->lpVtbl -> get_Csid(This,pVal) )
#define IFaxTiff_get_Tsid(This,pVal)( (This)->lpVtbl -> get_Tsid(This,pVal) )
#define IFaxTiff_get_RecipientNumber(This,pVal)( (This)->lpVtbl -> get_RecipientNumber(This,pVal) )
#define IFaxTiff_get_RawReceiveTime(This,pVal)( (This)->lpVtbl -> get_RawReceiveTime(This,pVal) )
#define IFaxTiff_get_TiffTagString(This,tagID,pVal)( (This)->lpVtbl -> get_TiffTagString(This,tagID,pVal) )
#endif
#endif
#ifndef __IFaxServer_INTERFACE_DEFINED__
#define __IFaxServer_INTERFACE_DEFINED__
extern const IID IID_IFaxServer;
typedef struct IFaxServerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxServer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxServer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxServer * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxServer * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxServer * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxServer * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxServer * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Connect) (IFaxServer * This, BSTR ServerName);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (IFaxServer * This);
	HRESULT(STDMETHODCALLTYPE * GetPorts) (IFaxServer * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * CreateDocument) (IFaxServer * This, BSTR FileName, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * GetJobs) (IFaxServer * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_Retries) (IFaxServer * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * put_Retries) (IFaxServer * This, long newVal);
	HRESULT(STDMETHODCALLTYPE * get_RetryDelay) (IFaxServer * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * put_RetryDelay) (IFaxServer * This, long newVal);
	HRESULT(STDMETHODCALLTYPE * get_DirtyDays) (IFaxServer * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * put_DirtyDays) (IFaxServer * This, long newVal);
	HRESULT(STDMETHODCALLTYPE * get_Branding) (IFaxServer * This, BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Branding) (IFaxServer * This, BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_UseDeviceTsid) (IFaxServer * This, BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_UseDeviceTsid) (IFaxServer * This, BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_ServerCoverpage) (IFaxServer * This, BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_ServerCoverpage) (IFaxServer * This, BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_PauseServerQueue) (IFaxServer * This, BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_PauseServerQueue) (IFaxServer * This, BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_ArchiveOutboundFaxes) (IFaxServer * This, BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_ArchiveOutboundFaxes) (IFaxServer * This, BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_ArchiveDirectory) (IFaxServer * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_ArchiveDirectory) (IFaxServer * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_ServerMapiProfile) (IFaxServer * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_ServerMapiProfile) (IFaxServer * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_DiscountRateStartHour) (IFaxServer * This, short *pVal);
	HRESULT(STDMETHODCALLTYPE * put_DiscountRateStartHour) (IFaxServer * This, short newVal);
	HRESULT(STDMETHODCALLTYPE * get_DiscountRateStartMinute) (IFaxServer * This, short *pVal);
	HRESULT(STDMETHODCALLTYPE * put_DiscountRateStartMinute) (IFaxServer * This, short newVal);
	HRESULT(STDMETHODCALLTYPE * get_DiscountRateEndHour) (IFaxServer * This, short *pVal);
	HRESULT(STDMETHODCALLTYPE * put_DiscountRateEndHour) (IFaxServer * This, short newVal);
	HRESULT(STDMETHODCALLTYPE * get_DiscountRateEndMinute) (IFaxServer * This, short *pVal);
	HRESULT(STDMETHODCALLTYPE * put_DiscountRateEndMinute) (IFaxServer * This, short newVal);
	END_INTERFACE
}  IFaxServerVtbl;
interface IFaxServer
{
	CONST_VTBL struct IFaxServerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxServer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxServer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxServer_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxServer_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxServer_Connect(This,ServerName)( (This)->lpVtbl -> Connect(This,ServerName) )
#define IFaxServer_Disconnect(This)( (This)->lpVtbl -> Disconnect(This) )
#define IFaxServer_GetPorts(This,retval)( (This)->lpVtbl -> GetPorts(This,retval) )
#define IFaxServer_CreateDocument(This,FileName,retval)( (This)->lpVtbl -> CreateDocument(This,FileName,retval) )
#define IFaxServer_GetJobs(This,retval)( (This)->lpVtbl -> GetJobs(This,retval) )
#define IFaxServer_get_Retries(This,pVal)( (This)->lpVtbl -> get_Retries(This,pVal) )
#define IFaxServer_put_Retries(This,newVal)( (This)->lpVtbl -> put_Retries(This,newVal) )
#define IFaxServer_get_RetryDelay(This,pVal)( (This)->lpVtbl -> get_RetryDelay(This,pVal) )
#define IFaxServer_put_RetryDelay(This,newVal)( (This)->lpVtbl -> put_RetryDelay(This,newVal) )
#define IFaxServer_get_DirtyDays(This,pVal)( (This)->lpVtbl -> get_DirtyDays(This,pVal) )
#define IFaxServer_put_DirtyDays(This,newVal)( (This)->lpVtbl -> put_DirtyDays(This,newVal) )
#define IFaxServer_get_Branding(This,pVal)( (This)->lpVtbl -> get_Branding(This,pVal) )
#define IFaxServer_put_Branding(This,newVal)( (This)->lpVtbl -> put_Branding(This,newVal) )
#define IFaxServer_get_UseDeviceTsid(This,pVal)( (This)->lpVtbl -> get_UseDeviceTsid(This,pVal) )
#define IFaxServer_put_UseDeviceTsid(This,newVal)( (This)->lpVtbl -> put_UseDeviceTsid(This,newVal) )
#define IFaxServer_get_ServerCoverpage(This,pVal)( (This)->lpVtbl -> get_ServerCoverpage(This,pVal) )
#define IFaxServer_put_ServerCoverpage(This,newVal)( (This)->lpVtbl -> put_ServerCoverpage(This,newVal) )
#define IFaxServer_get_PauseServerQueue(This,pVal)( (This)->lpVtbl -> get_PauseServerQueue(This,pVal) )
#define IFaxServer_put_PauseServerQueue(This,newVal)( (This)->lpVtbl -> put_PauseServerQueue(This,newVal) )
#define IFaxServer_get_ArchiveOutboundFaxes(This,pVal)( (This)->lpVtbl -> get_ArchiveOutboundFaxes(This,pVal) )
#define IFaxServer_put_ArchiveOutboundFaxes(This,newVal)( (This)->lpVtbl -> put_ArchiveOutboundFaxes(This,newVal) )
#define IFaxServer_get_ArchiveDirectory(This,pVal)( (This)->lpVtbl -> get_ArchiveDirectory(This,pVal) )
#define IFaxServer_put_ArchiveDirectory(This,newVal)( (This)->lpVtbl -> put_ArchiveDirectory(This,newVal) )
#define IFaxServer_get_ServerMapiProfile(This,pVal)( (This)->lpVtbl -> get_ServerMapiProfile(This,pVal) )
#define IFaxServer_put_ServerMapiProfile(This,newVal)( (This)->lpVtbl -> put_ServerMapiProfile(This,newVal) )
#define IFaxServer_get_DiscountRateStartHour(This,pVal)( (This)->lpVtbl -> get_DiscountRateStartHour(This,pVal) )
#define IFaxServer_put_DiscountRateStartHour(This,newVal)( (This)->lpVtbl -> put_DiscountRateStartHour(This,newVal) )
#define IFaxServer_get_DiscountRateStartMinute(This,pVal)( (This)->lpVtbl -> get_DiscountRateStartMinute(This,pVal) )
#define IFaxServer_put_DiscountRateStartMinute(This,newVal)( (This)->lpVtbl -> put_DiscountRateStartMinute(This,newVal) )
#define IFaxServer_get_DiscountRateEndHour(This,pVal)( (This)->lpVtbl -> get_DiscountRateEndHour(This,pVal) )
#define IFaxServer_put_DiscountRateEndHour(This,newVal)( (This)->lpVtbl -> put_DiscountRateEndHour(This,newVal) )
#define IFaxServer_get_DiscountRateEndMinute(This,pVal)( (This)->lpVtbl -> get_DiscountRateEndMinute(This,pVal) )
#define IFaxServer_put_DiscountRateEndMinute(This,newVal)( (This)->lpVtbl -> put_DiscountRateEndMinute(This,newVal) )
#endif
#endif
#ifndef __IFaxPort_INTERFACE_DEFINED__
#define __IFaxPort_INTERFACE_DEFINED__
extern const IID IID_IFaxPort;
typedef struct IFaxPortVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxPort * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxPort * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxPort * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxPort * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxPort * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxPort * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxPort * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFaxPort * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DeviceId) (IFaxPort * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Rings) (IFaxPort * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * put_Rings) (IFaxPort * This, long newVal);
	HRESULT(STDMETHODCALLTYPE * get_Csid) (IFaxPort * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Csid) (IFaxPort * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_Tsid) (IFaxPort * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Tsid) (IFaxPort * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_Send) (IFaxPort * This, BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Send) (IFaxPort * This, BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_Receive) (IFaxPort * This, BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Receive) (IFaxPort * This, BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_Priority) (IFaxPort * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * put_Priority) (IFaxPort * This, long newVal);
	HRESULT(STDMETHODCALLTYPE * GetRoutingMethods) (IFaxPort * This, VARIANT * retval);
	HRESULT(STDMETHODCALLTYPE * get_CanModify) (IFaxPort * This, BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IFaxPort * This, VARIANT * retval);
	END_INTERFACE
}  IFaxPortVtbl;
interface IFaxPort
{
	CONST_VTBL struct IFaxPortVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxPort_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxPort_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxPort_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxPort_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxPort_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxPort_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxPort_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxPort_get_Name(This,pVal)( (This)->lpVtbl -> get_Name(This,pVal) )
#define IFaxPort_get_DeviceId(This,pVal)( (This)->lpVtbl -> get_DeviceId(This,pVal) )
#define IFaxPort_get_Rings(This,pVal)( (This)->lpVtbl -> get_Rings(This,pVal) )
#define IFaxPort_put_Rings(This,newVal)( (This)->lpVtbl -> put_Rings(This,newVal) )
#define IFaxPort_get_Csid(This,pVal)( (This)->lpVtbl -> get_Csid(This,pVal) )
#define IFaxPort_put_Csid(This,newVal)( (This)->lpVtbl -> put_Csid(This,newVal) )
#define IFaxPort_get_Tsid(This,pVal)( (This)->lpVtbl -> get_Tsid(This,pVal) )
#define IFaxPort_put_Tsid(This,newVal)( (This)->lpVtbl -> put_Tsid(This,newVal) )
#define IFaxPort_get_Send(This,pVal)( (This)->lpVtbl -> get_Send(This,pVal) )
#define IFaxPort_put_Send(This,newVal)( (This)->lpVtbl -> put_Send(This,newVal) )
#define IFaxPort_get_Receive(This,pVal)( (This)->lpVtbl -> get_Receive(This,pVal) )
#define IFaxPort_put_Receive(This,newVal)( (This)->lpVtbl -> put_Receive(This,newVal) )
#define IFaxPort_get_Priority(This,pVal)( (This)->lpVtbl -> get_Priority(This,pVal) )
#define IFaxPort_put_Priority(This,newVal)( (This)->lpVtbl -> put_Priority(This,newVal) )
#define IFaxPort_GetRoutingMethods(This,retval)( (This)->lpVtbl -> GetRoutingMethods(This,retval) )
#define IFaxPort_get_CanModify(This,pVal)( (This)->lpVtbl -> get_CanModify(This,pVal) )
#define IFaxPort_GetStatus(This,retval)( (This)->lpVtbl -> GetStatus(This,retval) )
#endif
#endif
#ifndef __IFaxPorts_INTERFACE_DEFINED__
#define __IFaxPorts_INTERFACE_DEFINED__
extern const IID IID_IFaxPorts;
typedef struct IFaxPortsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxPorts * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxPorts * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxPorts * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxPorts * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxPorts * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxPorts * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxPorts * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFaxPorts * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFaxPorts * This, long Index, VARIANT * pVal);
	END_INTERFACE
}  IFaxPortsVtbl;
interface IFaxPorts
{
	CONST_VTBL struct IFaxPortsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxPorts_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxPorts_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxPorts_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxPorts_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxPorts_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxPorts_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxPorts_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxPorts_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IFaxPorts_get_Item(This,Index,pVal)( (This)->lpVtbl -> get_Item(This,Index,pVal) )
#endif
#endif
#ifndef __IFaxRoutingMethod_INTERFACE_DEFINED__
#define __IFaxRoutingMethod_INTERFACE_DEFINED__
extern const IID IID_IFaxRoutingMethod;
typedef struct IFaxRoutingMethodVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxRoutingMethod * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxRoutingMethod * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxRoutingMethod * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxRoutingMethod * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxRoutingMethod * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxRoutingMethod * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxRoutingMethod * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DeviceId) (IFaxRoutingMethod * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Enable) (IFaxRoutingMethod * This, BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Enable) (IFaxRoutingMethod * This, BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_DeviceName) (IFaxRoutingMethod * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Guid) (IFaxRoutingMethod * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_FunctionName) (IFaxRoutingMethod * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ImageName) (IFaxRoutingMethod * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IFaxRoutingMethod * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ExtensionName) (IFaxRoutingMethod * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_RoutingData) (IFaxRoutingMethod * This, BSTR * pVal);
	END_INTERFACE
}  IFaxRoutingMethodVtbl;
interface IFaxRoutingMethod
{
	CONST_VTBL struct IFaxRoutingMethodVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxRoutingMethod_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxRoutingMethod_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxRoutingMethod_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxRoutingMethod_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxRoutingMethod_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxRoutingMethod_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxRoutingMethod_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxRoutingMethod_get_DeviceId(This,pVal)( (This)->lpVtbl -> get_DeviceId(This,pVal) )
#define IFaxRoutingMethod_get_Enable(This,pVal)( (This)->lpVtbl -> get_Enable(This,pVal) )
#define IFaxRoutingMethod_put_Enable(This,newVal)( (This)->lpVtbl -> put_Enable(This,newVal) )
#define IFaxRoutingMethod_get_DeviceName(This,pVal)( (This)->lpVtbl -> get_DeviceName(This,pVal) )
#define IFaxRoutingMethod_get_Guid(This,pVal)( (This)->lpVtbl -> get_Guid(This,pVal) )
#define IFaxRoutingMethod_get_FunctionName(This,pVal)( (This)->lpVtbl -> get_FunctionName(This,pVal) )
#define IFaxRoutingMethod_get_ImageName(This,pVal)( (This)->lpVtbl -> get_ImageName(This,pVal) )
#define IFaxRoutingMethod_get_FriendlyName(This,pVal)( (This)->lpVtbl -> get_FriendlyName(This,pVal) )
#define IFaxRoutingMethod_get_ExtensionName(This,pVal)( (This)->lpVtbl -> get_ExtensionName(This,pVal) )
#define IFaxRoutingMethod_get_RoutingData(This,pVal)( (This)->lpVtbl -> get_RoutingData(This,pVal) )
#endif
#endif
#ifndef __IFaxRoutingMethods_INTERFACE_DEFINED__
#define __IFaxRoutingMethods_INTERFACE_DEFINED__
extern const IID IID_IFaxRoutingMethods;
typedef struct IFaxRoutingMethodsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxRoutingMethods * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxRoutingMethods * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxRoutingMethods * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxRoutingMethods * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxRoutingMethods * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxRoutingMethods * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxRoutingMethods * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFaxRoutingMethods * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFaxRoutingMethods * This, long Index, VARIANT * pVal);
	END_INTERFACE
}  IFaxRoutingMethodsVtbl;
interface IFaxRoutingMethods
{
	CONST_VTBL struct IFaxRoutingMethodsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxRoutingMethods_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxRoutingMethods_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxRoutingMethods_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxRoutingMethods_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxRoutingMethods_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxRoutingMethods_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxRoutingMethods_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxRoutingMethods_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IFaxRoutingMethods_get_Item(This,Index,pVal)( (This)->lpVtbl -> get_Item(This,Index,pVal) )
#endif
#endif
#ifndef __IFaxStatus_INTERFACE_DEFINED__
#define __IFaxStatus_INTERFACE_DEFINED__
extern const IID IID_IFaxStatus;
typedef struct IFaxStatusVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxStatus * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxStatus * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxStatus * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxStatus * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxStatus * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxStatus * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxStatus * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CallerId) (IFaxStatus * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Csid) (IFaxStatus * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentPage) (IFaxStatus * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_DeviceId) (IFaxStatus * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_DeviceName) (IFaxStatus * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DocumentName) (IFaxStatus * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Send) (IFaxStatus * This, BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Receive) (IFaxStatus * This, BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Address) (IFaxStatus * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_RoutingString) (IFaxStatus * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SenderName) (IFaxStatus * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_RecipientName) (IFaxStatus * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DocumentSize) (IFaxStatus * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFaxStatus * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PageCount) (IFaxStatus * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Tsid) (IFaxStatus * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_StartTime) (IFaxStatus * This, DATE * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SubmittedTime) (IFaxStatus * This, DATE * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ElapsedTime) (IFaxStatus * This, DATE * pVal);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxStatus * This);
	END_INTERFACE
}  IFaxStatusVtbl;
interface IFaxStatus
{
	CONST_VTBL struct IFaxStatusVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxStatus_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxStatus_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxStatus_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxStatus_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxStatus_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxStatus_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxStatus_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxStatus_get_CallerId(This,pVal)( (This)->lpVtbl -> get_CallerId(This,pVal) )
#define IFaxStatus_get_Csid(This,pVal)( (This)->lpVtbl -> get_Csid(This,pVal) )
#define IFaxStatus_get_CurrentPage(This,pVal)( (This)->lpVtbl -> get_CurrentPage(This,pVal) )
#define IFaxStatus_get_DeviceId(This,pVal)( (This)->lpVtbl -> get_DeviceId(This,pVal) )
#define IFaxStatus_get_DeviceName(This,pVal)( (This)->lpVtbl -> get_DeviceName(This,pVal) )
#define IFaxStatus_get_DocumentName(This,pVal)( (This)->lpVtbl -> get_DocumentName(This,pVal) )
#define IFaxStatus_get_Send(This,pVal)( (This)->lpVtbl -> get_Send(This,pVal) )
#define IFaxStatus_get_Receive(This,pVal)( (This)->lpVtbl -> get_Receive(This,pVal) )
#define IFaxStatus_get_Address(This,pVal)( (This)->lpVtbl -> get_Address(This,pVal) )
#define IFaxStatus_get_RoutingString(This,pVal)( (This)->lpVtbl -> get_RoutingString(This,pVal) )
#define IFaxStatus_get_SenderName(This,pVal)( (This)->lpVtbl -> get_SenderName(This,pVal) )
#define IFaxStatus_get_RecipientName(This,pVal)( (This)->lpVtbl -> get_RecipientName(This,pVal) )
#define IFaxStatus_get_DocumentSize(This,pVal)( (This)->lpVtbl -> get_DocumentSize(This,pVal) )
#define IFaxStatus_get_Description(This,pVal)( (This)->lpVtbl -> get_Description(This,pVal) )
#define IFaxStatus_get_PageCount(This,pVal)( (This)->lpVtbl -> get_PageCount(This,pVal) )
#define IFaxStatus_get_Tsid(This,pVal)( (This)->lpVtbl -> get_Tsid(This,pVal) )
#define IFaxStatus_get_StartTime(This,pVal)( (This)->lpVtbl -> get_StartTime(This,pVal) )
#define IFaxStatus_get_SubmittedTime(This,pVal)( (This)->lpVtbl -> get_SubmittedTime(This,pVal) )
#define IFaxStatus_get_ElapsedTime(This,pVal)( (This)->lpVtbl -> get_ElapsedTime(This,pVal) )
#define IFaxStatus_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#endif
#endif
#ifndef __IFaxDoc_INTERFACE_DEFINED__
#define __IFaxDoc_INTERFACE_DEFINED__
extern const IID IID_IFaxDoc;
typedef struct IFaxDocVtbl
{
BEGIN_INTERFACE
HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxDoc * This, REFIID riid, void **ppvObject);
ULONG(STDMETHODCALLTYPE * AddRef) (IFaxDoc * This);
ULONG(STDMETHODCALLTYPE * Release) (IFaxDoc * This);
HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxDoc * This, UINT * pctinfo);
HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxDoc * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxDoc * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxDoc * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
HRESULT(STDMETHODCALLTYPE * get_FileName) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_FileName) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_CoverpageName) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_CoverpageName) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_SendCoverpage) (IFaxDoc * This, BOOL * pVal);
HRESULT(STDMETHODCALLTYPE * put_SendCoverpage) (IFaxDoc * This, BOOL newVal);
HRESULT(STDMETHODCALLTYPE * get_ServerCoverpage) (IFaxDoc * This, BOOL * pVal);
HRESULT(STDMETHODCALLTYPE * put_ServerCoverpage) (IFaxDoc * This, BOOL newVal);
HRESULT(STDMETHODCALLTYPE * get_DiscountSend) (IFaxDoc * This, BOOL * pVal);
HRESULT(STDMETHODCALLTYPE * put_DiscountSend) (IFaxDoc * This, BOOL newVal);
HRESULT(STDMETHODCALLTYPE * get_RecipientName) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_RecipientName) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_RecipientCompany) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_RecipientCompany) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_RecipientAddress) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_RecipientAddress) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_RecipientCity) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_RecipientCity) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_RecipientState) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_RecipientState) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_RecipientZip) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_RecipientZip) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_RecipientCountry) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_RecipientCountry) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_RecipientTitle) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_RecipientTitle) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_RecipientDepartment) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_RecipientDepartment) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_RecipientOffice) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_RecipientOffice) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_RecipientHomePhone) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_RecipientHomePhone) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_RecipientOfficePhone) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_RecipientOfficePhone) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_SenderName) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_SenderName) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_SenderCompany) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_SenderCompany) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_SenderAddress) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_SenderAddress) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_SenderTitle) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_SenderTitle) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_SenderDepartment) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_SenderDepartment) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_SenderOffice) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_SenderOffice) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_SenderHomePhone) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_SenderHomePhone) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_SenderOfficePhone) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_SenderOfficePhone) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_CoverpageNote) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_CoverpageNote) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_CoverpageSubject) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_CoverpageSubject) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_Tsid) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_Tsid) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_BillingCode) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_BillingCode) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_EmailAddress) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_EmailAddress) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * get_DisplayName) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_DisplayName) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * Send) (IFaxDoc * This, long *pVal);
HRESULT(STDMETHODCALLTYPE * get_FaxNumber) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_FaxNumber) (IFaxDoc * This, BSTR newVal);
HRESULT(STDMETHODCALLTYPE * putref_ConnectionObject) (IFaxDoc * This, IDispatch * newVal);
HRESULT(STDMETHODCALLTYPE * get_CallHandle) (IFaxDoc * This, long *pVal);
HRESULT(STDMETHODCALLTYPE * put_CallHandle) (IFaxDoc * This, long newVal);
HRESULT(STDMETHODCALLTYPE * get_SenderFax) (IFaxDoc * This, BSTR * pVal);
HRESULT(STDMETHODCALLTYPE * put_SenderFax) (IFaxDoc * This, BSTR newVal);
END_INTERFACE
}  IFaxDocVtbl;
interface IFaxDoc
{
	CONST_VTBL struct IFaxDocVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxDoc_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxDoc_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxDoc_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxDoc_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxDoc_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxDoc_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxDoc_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxDoc_get_FileName(This,pVal)( (This)->lpVtbl -> get_FileName(This,pVal) )
#define IFaxDoc_put_FileName(This,newVal)( (This)->lpVtbl -> put_FileName(This,newVal) )
#define IFaxDoc_get_CoverpageName(This,pVal)( (This)->lpVtbl -> get_CoverpageName(This,pVal) )
#define IFaxDoc_put_CoverpageName(This,newVal)( (This)->lpVtbl -> put_CoverpageName(This,newVal) )
#define IFaxDoc_get_SendCoverpage(This,pVal)( (This)->lpVtbl -> get_SendCoverpage(This,pVal) )
#define IFaxDoc_put_SendCoverpage(This,newVal)( (This)->lpVtbl -> put_SendCoverpage(This,newVal) )
#define IFaxDoc_get_ServerCoverpage(This,pVal)( (This)->lpVtbl -> get_ServerCoverpage(This,pVal) )
#define IFaxDoc_put_ServerCoverpage(This,newVal)( (This)->lpVtbl -> put_ServerCoverpage(This,newVal) )
#define IFaxDoc_get_DiscountSend(This,pVal)( (This)->lpVtbl -> get_DiscountSend(This,pVal) )
#define IFaxDoc_put_DiscountSend(This,newVal)( (This)->lpVtbl -> put_DiscountSend(This,newVal) )
#define IFaxDoc_get_RecipientName(This,pVal)( (This)->lpVtbl -> get_RecipientName(This,pVal) )
#define IFaxDoc_put_RecipientName(This,newVal)( (This)->lpVtbl -> put_RecipientName(This,newVal) )
#define IFaxDoc_get_RecipientCompany(This,pVal)( (This)->lpVtbl -> get_RecipientCompany(This,pVal) )
#define IFaxDoc_put_RecipientCompany(This,newVal)( (This)->lpVtbl -> put_RecipientCompany(This,newVal) )
#define IFaxDoc_get_RecipientAddress(This,pVal)( (This)->lpVtbl -> get_RecipientAddress(This,pVal) )
#define IFaxDoc_put_RecipientAddress(This,newVal)( (This)->lpVtbl -> put_RecipientAddress(This,newVal) )
#define IFaxDoc_get_RecipientCity(This,pVal)( (This)->lpVtbl -> get_RecipientCity(This,pVal) )
#define IFaxDoc_put_RecipientCity(This,newVal)( (This)->lpVtbl -> put_RecipientCity(This,newVal) )
#define IFaxDoc_get_RecipientState(This,pVal)( (This)->lpVtbl -> get_RecipientState(This,pVal) )
#define IFaxDoc_put_RecipientState(This,newVal)( (This)->lpVtbl -> put_RecipientState(This,newVal) )
#define IFaxDoc_get_RecipientZip(This,pVal)( (This)->lpVtbl -> get_RecipientZip(This,pVal) )
#define IFaxDoc_put_RecipientZip(This,newVal)( (This)->lpVtbl -> put_RecipientZip(This,newVal) )
#define IFaxDoc_get_RecipientCountry(This,pVal)( (This)->lpVtbl -> get_RecipientCountry(This,pVal) )
#define IFaxDoc_put_RecipientCountry(This,newVal)( (This)->lpVtbl -> put_RecipientCountry(This,newVal) )
#define IFaxDoc_get_RecipientTitle(This,pVal)( (This)->lpVtbl -> get_RecipientTitle(This,pVal) )
#define IFaxDoc_put_RecipientTitle(This,newVal)( (This)->lpVtbl -> put_RecipientTitle(This,newVal) )
#define IFaxDoc_get_RecipientDepartment(This,pVal)( (This)->lpVtbl -> get_RecipientDepartment(This,pVal) )
#define IFaxDoc_put_RecipientDepartment(This,newVal)( (This)->lpVtbl -> put_RecipientDepartment(This,newVal) )
#define IFaxDoc_get_RecipientOffice(This,pVal)( (This)->lpVtbl -> get_RecipientOffice(This,pVal) )
#define IFaxDoc_put_RecipientOffice(This,newVal)( (This)->lpVtbl -> put_RecipientOffice(This,newVal) )
#define IFaxDoc_get_RecipientHomePhone(This,pVal)( (This)->lpVtbl -> get_RecipientHomePhone(This,pVal) )
#define IFaxDoc_put_RecipientHomePhone(This,newVal)( (This)->lpVtbl -> put_RecipientHomePhone(This,newVal) )
#define IFaxDoc_get_RecipientOfficePhone(This,pVal)( (This)->lpVtbl -> get_RecipientOfficePhone(This,pVal) )
#define IFaxDoc_put_RecipientOfficePhone(This,newVal)( (This)->lpVtbl -> put_RecipientOfficePhone(This,newVal) )
#define IFaxDoc_get_SenderName(This,pVal)( (This)->lpVtbl -> get_SenderName(This,pVal) )
#define IFaxDoc_put_SenderName(This,newVal)( (This)->lpVtbl -> put_SenderName(This,newVal) )
#define IFaxDoc_get_SenderCompany(This,pVal)( (This)->lpVtbl -> get_SenderCompany(This,pVal) )
#define IFaxDoc_put_SenderCompany(This,newVal)( (This)->lpVtbl -> put_SenderCompany(This,newVal) )
#define IFaxDoc_get_SenderAddress(This,pVal)( (This)->lpVtbl -> get_SenderAddress(This,pVal) )
#define IFaxDoc_put_SenderAddress(This,newVal)( (This)->lpVtbl -> put_SenderAddress(This,newVal) )
#define IFaxDoc_get_SenderTitle(This,pVal)( (This)->lpVtbl -> get_SenderTitle(This,pVal) )
#define IFaxDoc_put_SenderTitle(This,newVal)( (This)->lpVtbl -> put_SenderTitle(This,newVal) )
#define IFaxDoc_get_SenderDepartment(This,pVal)( (This)->lpVtbl -> get_SenderDepartment(This,pVal) )
#define IFaxDoc_put_SenderDepartment(This,newVal)( (This)->lpVtbl -> put_SenderDepartment(This,newVal) )
#define IFaxDoc_get_SenderOffice(This,pVal)( (This)->lpVtbl -> get_SenderOffice(This,pVal) )
#define IFaxDoc_put_SenderOffice(This,newVal)( (This)->lpVtbl -> put_SenderOffice(This,newVal) )
#define IFaxDoc_get_SenderHomePhone(This,pVal)( (This)->lpVtbl -> get_SenderHomePhone(This,pVal) )
#define IFaxDoc_put_SenderHomePhone(This,newVal)( (This)->lpVtbl -> put_SenderHomePhone(This,newVal) )
#define IFaxDoc_get_SenderOfficePhone(This,pVal)( (This)->lpVtbl -> get_SenderOfficePhone(This,pVal) )
#define IFaxDoc_put_SenderOfficePhone(This,newVal)( (This)->lpVtbl -> put_SenderOfficePhone(This,newVal) )
#define IFaxDoc_get_CoverpageNote(This,pVal)( (This)->lpVtbl -> get_CoverpageNote(This,pVal) )
#define IFaxDoc_put_CoverpageNote(This,newVal)( (This)->lpVtbl -> put_CoverpageNote(This,newVal) )
#define IFaxDoc_get_CoverpageSubject(This,pVal)( (This)->lpVtbl -> get_CoverpageSubject(This,pVal) )
#define IFaxDoc_put_CoverpageSubject(This,newVal)( (This)->lpVtbl -> put_CoverpageSubject(This,newVal) )
#define IFaxDoc_get_Tsid(This,pVal)( (This)->lpVtbl -> get_Tsid(This,pVal) )
#define IFaxDoc_put_Tsid(This,newVal)( (This)->lpVtbl -> put_Tsid(This,newVal) )
#define IFaxDoc_get_BillingCode(This,pVal)( (This)->lpVtbl -> get_BillingCode(This,pVal) )
#define IFaxDoc_put_BillingCode(This,newVal)( (This)->lpVtbl -> put_BillingCode(This,newVal) )
#define IFaxDoc_get_EmailAddress(This,pVal)( (This)->lpVtbl -> get_EmailAddress(This,pVal) )
#define IFaxDoc_put_EmailAddress(This,newVal)( (This)->lpVtbl -> put_EmailAddress(This,newVal) )
#define IFaxDoc_get_DisplayName(This,pVal)( (This)->lpVtbl -> get_DisplayName(This,pVal) )
#define IFaxDoc_put_DisplayName(This,newVal)( (This)->lpVtbl -> put_DisplayName(This,newVal) )
#define IFaxDoc_Send(This,pVal)( (This)->lpVtbl -> Send(This,pVal) )
#define IFaxDoc_get_FaxNumber(This,pVal)( (This)->lpVtbl -> get_FaxNumber(This,pVal) )
#define IFaxDoc_put_FaxNumber(This,newVal)( (This)->lpVtbl -> put_FaxNumber(This,newVal) )
#define IFaxDoc_putref_ConnectionObject(This,newVal)( (This)->lpVtbl -> putref_ConnectionObject(This,newVal) )
#define IFaxDoc_get_CallHandle(This,pVal)( (This)->lpVtbl -> get_CallHandle(This,pVal) )
#define IFaxDoc_put_CallHandle(This,newVal)( (This)->lpVtbl -> put_CallHandle(This,newVal) )
#define IFaxDoc_get_SenderFax(This,pVal)( (This)->lpVtbl -> get_SenderFax(This,pVal) )
#define IFaxDoc_put_SenderFax(This,newVal)( (This)->lpVtbl -> put_SenderFax(This,newVal) )
#endif
#endif
#ifndef __IFaxJobs_INTERFACE_DEFINED__
#define __IFaxJobs_INTERFACE_DEFINED__
extern const IID IID_IFaxJobs;
typedef struct IFaxJobsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxJobs * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxJobs * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxJobs * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxJobs * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxJobs * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxJobs * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxJobs * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFaxJobs * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFaxJobs * This, long Index, VARIANT * pVal);
	END_INTERFACE
}  IFaxJobsVtbl;
interface IFaxJobs
{
	CONST_VTBL struct IFaxJobsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxJobs_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxJobs_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxJobs_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxJobs_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxJobs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxJobs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxJobs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxJobs_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IFaxJobs_get_Item(This,Index,pVal)( (This)->lpVtbl -> get_Item(This,Index,pVal) )
#endif
#endif
#ifndef __IFaxJob_INTERFACE_DEFINED__
#define __IFaxJob_INTERFACE_DEFINED__
extern const IID IID_IFaxJob;
typedef struct IFaxJobVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxJob * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxJob * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxJob * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxJob * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxJob * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxJob * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxJob * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_JobId) (IFaxJob * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IFaxJob * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_UserName) (IFaxJob * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_QueueStatus) (IFaxJob * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DeviceStatus) (IFaxJob * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PageCount) (IFaxJob * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_FaxNumber) (IFaxJob * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_RecipientName) (IFaxJob * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Tsid) (IFaxJob * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SenderName) (IFaxJob * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SenderCompany) (IFaxJob * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SenderDept) (IFaxJob * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_BillingCode) (IFaxJob * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DisplayName) (IFaxJob * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DiscountSend) (IFaxJob * This, BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * SetStatus) (IFaxJob * This, long Command);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxJob * This);
	END_INTERFACE
}  IFaxJobVtbl;
interface IFaxJob
{
	CONST_VTBL struct IFaxJobVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxJob_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxJob_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxJob_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxJob_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxJob_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxJob_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxJob_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxJob_get_JobId(This,pVal)( (This)->lpVtbl -> get_JobId(This,pVal) )
#define IFaxJob_get_Type(This,pVal)( (This)->lpVtbl -> get_Type(This,pVal) )
#define IFaxJob_get_UserName(This,pVal)( (This)->lpVtbl -> get_UserName(This,pVal) )
#define IFaxJob_get_QueueStatus(This,pVal)( (This)->lpVtbl -> get_QueueStatus(This,pVal) )
#define IFaxJob_get_DeviceStatus(This,pVal)( (This)->lpVtbl -> get_DeviceStatus(This,pVal) )
#define IFaxJob_get_PageCount(This,pVal)( (This)->lpVtbl -> get_PageCount(This,pVal) )
#define IFaxJob_get_FaxNumber(This,pVal)( (This)->lpVtbl -> get_FaxNumber(This,pVal) )
#define IFaxJob_get_RecipientName(This,pVal)( (This)->lpVtbl -> get_RecipientName(This,pVal) )
#define IFaxJob_get_Tsid(This,pVal)( (This)->lpVtbl -> get_Tsid(This,pVal) )
#define IFaxJob_get_SenderName(This,pVal)( (This)->lpVtbl -> get_SenderName(This,pVal) )
#define IFaxJob_get_SenderCompany(This,pVal)( (This)->lpVtbl -> get_SenderCompany(This,pVal) )
#define IFaxJob_get_SenderDept(This,pVal)( (This)->lpVtbl -> get_SenderDept(This,pVal) )
#define IFaxJob_get_BillingCode(This,pVal)( (This)->lpVtbl -> get_BillingCode(This,pVal) )
#define IFaxJob_get_DisplayName(This,pVal)( (This)->lpVtbl -> get_DisplayName(This,pVal) )
#define IFaxJob_get_DiscountSend(This,pVal)( (This)->lpVtbl -> get_DiscountSend(This,pVal) )
#define IFaxJob_SetStatus(This,Command)( (This)->lpVtbl -> SetStatus(This,Command) )
#define IFaxJob_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#endif
#endif
#ifndef __FAXCOMLib_LIBRARY_DEFINED__
#define __FAXCOMLib_LIBRARY_DEFINED__
extern const IID LIBID_FAXCOMLib;
extern const CLSID CLSID_FaxTiff;
extern const CLSID CLSID_FaxServer;
extern const CLSID CLSID_FaxPort;
extern const CLSID CLSID_FaxPorts;
extern const CLSID CLSID_FaxRoutingMethod;
extern const CLSID CLSID_FaxRoutingMethods;
extern const CLSID CLSID_FaxStatus;
extern const CLSID CLSID_FaxDoc;
extern const CLSID CLSID_FaxJobs;
extern const CLSID CLSID_FaxJob;
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
