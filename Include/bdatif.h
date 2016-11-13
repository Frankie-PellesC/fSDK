/*+@@file@@----------------------------------------------------------------*//*!
 \file		bdatif.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:27:10 2016
 \date		Modified on Sun Jun 19 16:27:10 2016
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
#ifndef __bdatif_h__
#define __bdatif_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IBDA_TIF_REGISTRATION_FWD_DEFINED__
#define __IBDA_TIF_REGISTRATION_FWD_DEFINED__
typedef interface IBDA_TIF_REGISTRATION IBDA_TIF_REGISTRATION;
#endif
#ifndef __IMPEG2_TIF_CONTROL_FWD_DEFINED__
#define __IMPEG2_TIF_CONTROL_FWD_DEFINED__
typedef interface IMPEG2_TIF_CONTROL IMPEG2_TIF_CONTROL;
#endif
#ifndef __ITuneRequestInfo_FWD_DEFINED__
#define __ITuneRequestInfo_FWD_DEFINED__
typedef interface ITuneRequestInfo ITuneRequestInfo;
#endif
#ifndef __ITuneRequestInfoEx_FWD_DEFINED__
#define __ITuneRequestInfoEx_FWD_DEFINED__
typedef interface ITuneRequestInfoEx ITuneRequestInfoEx;
#endif
#ifndef __ISIInbandEPGEvent_FWD_DEFINED__
#define __ISIInbandEPGEvent_FWD_DEFINED__
typedef interface ISIInbandEPGEvent ISIInbandEPGEvent;
#endif
#ifndef __ISIInbandEPG_FWD_DEFINED__
#define __ISIInbandEPG_FWD_DEFINED__
typedef interface ISIInbandEPG ISIInbandEPG;
#endif
#ifndef __IGuideDataEvent_FWD_DEFINED__
#define __IGuideDataEvent_FWD_DEFINED__
typedef interface IGuideDataEvent IGuideDataEvent;
#endif
#ifndef __IGuideDataProperty_FWD_DEFINED__
#define __IGuideDataProperty_FWD_DEFINED__
typedef interface IGuideDataProperty IGuideDataProperty;
#endif
#ifndef __IEnumGuideDataProperties_FWD_DEFINED__
#define __IEnumGuideDataProperties_FWD_DEFINED__
typedef interface IEnumGuideDataProperties IEnumGuideDataProperties;
#endif
#ifndef __IEnumTuneRequests_FWD_DEFINED__
#define __IEnumTuneRequests_FWD_DEFINED__
typedef interface IEnumTuneRequests IEnumTuneRequests;
#endif
#ifndef __IGuideData_FWD_DEFINED__
#define __IGuideData_FWD_DEFINED__
typedef interface IGuideData IGuideData;
#endif
#ifndef __IGuideDataLoader_FWD_DEFINED__
#define __IGuideDataLoader_FWD_DEFINED__
typedef interface IGuideDataLoader IGuideDataLoader;
#endif
#ifndef __TIFLoad_FWD_DEFINED__
#define __TIFLoad_FWD_DEFINED__
typedef struct TIFLoad TIFLoad;
#endif
#include <unknwn.h>
#include <strmif.h>
#include <tuner.h>
#include <dvbsiparser.h>
extern RPC_IF_HANDLE __MIDL_itf_bdatif_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdatif_0000_0000_v0_0_s_ifspec;
#ifndef __IBDA_TIF_REGISTRATION_INTERFACE_DEFINED__
#define __IBDA_TIF_REGISTRATION_INTERFACE_DEFINED__ 
extern const IID IID_IBDA_TIF_REGISTRATION;
typedef struct IBDA_TIF_REGISTRATIONVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_TIF_REGISTRATION * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_TIF_REGISTRATION * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_TIF_REGISTRATION * This);
	HRESULT(STDMETHODCALLTYPE * RegisterTIFEx) (IBDA_TIF_REGISTRATION * This, IPin * pTIFInputPin, ULONG * ppvRegistrationContext, IUnknown ** ppMpeg2DataControl);
	HRESULT(STDMETHODCALLTYPE * UnregisterTIF) (IBDA_TIF_REGISTRATION * This, ULONG pvRegistrationContext);
	END_INTERFACE
} IBDA_TIF_REGISTRATIONVtbl;
interface IBDA_TIF_REGISTRATION
{
    CONST_VTBL struct IBDA_TIF_REGISTRATIONVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_TIF_REGISTRATION_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IBDA_TIF_REGISTRATION_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IBDA_TIF_REGISTRATION_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IBDA_TIF_REGISTRATION_RegisterTIFEx(This,pTIFInputPin,ppvRegistrationContext,ppMpeg2DataControl)     ( (This)->lpVtbl -> RegisterTIFEx(This,pTIFInputPin,ppvRegistrationContext,ppMpeg2DataControl) ) 
#define IBDA_TIF_REGISTRATION_UnregisterTIF(This,pvRegistrationContext)     ( (This)->lpVtbl -> UnregisterTIF(This,pvRegistrationContext) ) 
#endif
#endif
#ifndef __IMPEG2_TIF_CONTROL_INTERFACE_DEFINED__
#define __IMPEG2_TIF_CONTROL_INTERFACE_DEFINED__ 
extern const IID IID_IMPEG2_TIF_CONTROL;
typedef struct IMPEG2_TIF_CONTROLVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMPEG2_TIF_CONTROL * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMPEG2_TIF_CONTROL * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMPEG2_TIF_CONTROL * This);
	HRESULT(STDMETHODCALLTYPE * RegisterTIF) (IMPEG2_TIF_CONTROL * This, IUnknown * pUnkTIF, ULONG * ppvRegistrationContext);
	HRESULT(STDMETHODCALLTYPE * UnregisterTIF) (IMPEG2_TIF_CONTROL * This, ULONG pvRegistrationContext);
	HRESULT(STDMETHODCALLTYPE * AddPIDs) (IMPEG2_TIF_CONTROL * This, ULONG ulcPIDs, ULONG * pulPIDs);
	HRESULT(STDMETHODCALLTYPE * DeletePIDs) (IMPEG2_TIF_CONTROL * This, ULONG ulcPIDs, ULONG * pulPIDs);
	HRESULT(STDMETHODCALLTYPE * GetPIDCount) (IMPEG2_TIF_CONTROL * This, ULONG * pulcPIDs);
	HRESULT(STDMETHODCALLTYPE * GetPIDs) (IMPEG2_TIF_CONTROL * This, ULONG * pulcPIDs, ULONG * pulPIDs);
	END_INTERFACE
} IMPEG2_TIF_CONTROLVtbl;
interface IMPEG2_TIF_CONTROL
{
	CONST_VTBL struct IMPEG2_TIF_CONTROLVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMPEG2_TIF_CONTROL_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IMPEG2_TIF_CONTROL_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IMPEG2_TIF_CONTROL_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IMPEG2_TIF_CONTROL_RegisterTIF(This,pUnkTIF,ppvRegistrationContext)     ( (This)->lpVtbl -> RegisterTIF(This,pUnkTIF,ppvRegistrationContext) ) 
#define IMPEG2_TIF_CONTROL_UnregisterTIF(This,pvRegistrationContext)     ( (This)->lpVtbl -> UnregisterTIF(This,pvRegistrationContext) ) 
#define IMPEG2_TIF_CONTROL_AddPIDs(This,ulcPIDs,pulPIDs)     ( (This)->lpVtbl -> AddPIDs(This,ulcPIDs,pulPIDs) ) 
#define IMPEG2_TIF_CONTROL_DeletePIDs(This,ulcPIDs,pulPIDs)     ( (This)->lpVtbl -> DeletePIDs(This,ulcPIDs,pulPIDs) ) 
#define IMPEG2_TIF_CONTROL_GetPIDCount(This,pulcPIDs)     ( (This)->lpVtbl -> GetPIDCount(This,pulcPIDs) ) 
#define IMPEG2_TIF_CONTROL_GetPIDs(This,pulcPIDs,pulPIDs)     ( (This)->lpVtbl -> GetPIDs(This,pulcPIDs,pulPIDs) ) 
#endif
#endif
#ifndef __ITuneRequestInfo_INTERFACE_DEFINED__
#define __ITuneRequestInfo_INTERFACE_DEFINED__ 
extern const IID IID_ITuneRequestInfo;
typedef struct ITuneRequestInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITuneRequestInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITuneRequestInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITuneRequestInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetLocatorData) (ITuneRequestInfo * This, ITuneRequest * Request);
	HRESULT(STDMETHODCALLTYPE * GetComponentData) (ITuneRequestInfo * This, ITuneRequest * CurrentRequest);
	HRESULT(STDMETHODCALLTYPE * CreateComponentList) (ITuneRequestInfo * This, ITuneRequest * CurrentRequest);
	HRESULT(STDMETHODCALLTYPE * GetNextProgram) (ITuneRequestInfo * This, ITuneRequest * CurrentRequest, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * GetPreviousProgram) (ITuneRequestInfo * This, ITuneRequest * CurrentRequest, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * GetNextLocator) (ITuneRequestInfo * This, ITuneRequest * CurrentRequest, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * GetPreviousLocator) (ITuneRequestInfo * This, ITuneRequest * CurrentRequest, ITuneRequest ** TuneRequest);
	END_INTERFACE
} ITuneRequestInfoVtbl;
interface ITuneRequestInfo
{
	CONST_VTBL struct ITuneRequestInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITuneRequestInfo_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define ITuneRequestInfo_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define ITuneRequestInfo_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define ITuneRequestInfo_GetLocatorData(This,Request)     ( (This)->lpVtbl -> GetLocatorData(This,Request) ) 
#define ITuneRequestInfo_GetComponentData(This,CurrentRequest)     ( (This)->lpVtbl -> GetComponentData(This,CurrentRequest) ) 
#define ITuneRequestInfo_CreateComponentList(This,CurrentRequest)     ( (This)->lpVtbl -> CreateComponentList(This,CurrentRequest) ) 
#define ITuneRequestInfo_GetNextProgram(This,CurrentRequest,TuneRequest)     ( (This)->lpVtbl -> GetNextProgram(This,CurrentRequest,TuneRequest) ) 
#define ITuneRequestInfo_GetPreviousProgram(This,CurrentRequest,TuneRequest)     ( (This)->lpVtbl -> GetPreviousProgram(This,CurrentRequest,TuneRequest) ) 
#define ITuneRequestInfo_GetNextLocator(This,CurrentRequest,TuneRequest)     ( (This)->lpVtbl -> GetNextLocator(This,CurrentRequest,TuneRequest) ) 
#define ITuneRequestInfo_GetPreviousLocator(This,CurrentRequest,TuneRequest)     ( (This)->lpVtbl -> GetPreviousLocator(This,CurrentRequest,TuneRequest) ) 
#endif
#endif
#ifndef __ITuneRequestInfoEx_INTERFACE_DEFINED__
#define __ITuneRequestInfoEx_INTERFACE_DEFINED__ 
extern const IID IID_ITuneRequestInfoEx;
typedef struct ITuneRequestInfoExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITuneRequestInfoEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITuneRequestInfoEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITuneRequestInfoEx * This);
	HRESULT(STDMETHODCALLTYPE * GetLocatorData) (ITuneRequestInfoEx * This, ITuneRequest * Request);
	HRESULT(STDMETHODCALLTYPE * GetComponentData) (ITuneRequestInfoEx * This, ITuneRequest * CurrentRequest);
	HRESULT(STDMETHODCALLTYPE * CreateComponentList) (ITuneRequestInfoEx * This, ITuneRequest * CurrentRequest);
	HRESULT(STDMETHODCALLTYPE * GetNextProgram) (ITuneRequestInfoEx * This, ITuneRequest * CurrentRequest, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * GetPreviousProgram) (ITuneRequestInfoEx * This, ITuneRequest * CurrentRequest, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * GetNextLocator) (ITuneRequestInfoEx * This, ITuneRequest * CurrentRequest, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * GetPreviousLocator) (ITuneRequestInfoEx * This, ITuneRequest * CurrentRequest, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * CreateComponentListEx) (ITuneRequestInfoEx * This, ITuneRequest * CurrentRequest, IUnknown ** ppCurPMT);
	END_INTERFACE
} ITuneRequestInfoExVtbl;
interface ITuneRequestInfoEx
{
	CONST_VTBL struct ITuneRequestInfoExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITuneRequestInfoEx_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define ITuneRequestInfoEx_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define ITuneRequestInfoEx_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define ITuneRequestInfoEx_GetLocatorData(This,Request)     ( (This)->lpVtbl -> GetLocatorData(This,Request) ) 
#define ITuneRequestInfoEx_GetComponentData(This,CurrentRequest)     ( (This)->lpVtbl -> GetComponentData(This,CurrentRequest) ) 
#define ITuneRequestInfoEx_CreateComponentList(This,CurrentRequest)     ( (This)->lpVtbl -> CreateComponentList(This,CurrentRequest) ) 
#define ITuneRequestInfoEx_GetNextProgram(This,CurrentRequest,TuneRequest)     ( (This)->lpVtbl -> GetNextProgram(This,CurrentRequest,TuneRequest) ) 
#define ITuneRequestInfoEx_GetPreviousProgram(This,CurrentRequest,TuneRequest)     ( (This)->lpVtbl -> GetPreviousProgram(This,CurrentRequest,TuneRequest) ) 
#define ITuneRequestInfoEx_GetNextLocator(This,CurrentRequest,TuneRequest)     ( (This)->lpVtbl -> GetNextLocator(This,CurrentRequest,TuneRequest) ) 
#define ITuneRequestInfoEx_GetPreviousLocator(This,CurrentRequest,TuneRequest)     ( (This)->lpVtbl -> GetPreviousLocator(This,CurrentRequest,TuneRequest) ) 
#define ITuneRequestInfoEx_CreateComponentListEx(This,CurrentRequest,ppCurPMT)     ( (This)->lpVtbl -> CreateComponentListEx(This,CurrentRequest,ppCurPMT) ) 
#endif
#endif
#ifndef __ISIInbandEPGEvent_INTERFACE_DEFINED__
#define __ISIInbandEPGEvent_INTERFACE_DEFINED__ 
extern const IID IID_ISIInbandEPGEvent;
typedef struct ISIInbandEPGEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISIInbandEPGEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISIInbandEPGEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISIInbandEPGEvent * This);
	HRESULT(STDMETHODCALLTYPE * SIObjectEvent) (ISIInbandEPGEvent * This, IDVB_EIT2 * pIDVB_EIT, DWORD dwTable_ID, DWORD dwService_ID);
	END_INTERFACE
} ISIInbandEPGEventVtbl;
interface ISIInbandEPGEvent
{
	CONST_VTBL struct ISIInbandEPGEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISIInbandEPGEvent_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define ISIInbandEPGEvent_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define ISIInbandEPGEvent_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define ISIInbandEPGEvent_SIObjectEvent(This,pIDVB_EIT,dwTable_ID,dwService_ID)     ( (This)->lpVtbl -> SIObjectEvent(This,pIDVB_EIT,dwTable_ID,dwService_ID) ) 
#endif
#endif
#ifndef __ISIInbandEPG_INTERFACE_DEFINED__
#define __ISIInbandEPG_INTERFACE_DEFINED__ 
extern const IID IID_ISIInbandEPG;
typedef struct ISIInbandEPGVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISIInbandEPG * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISIInbandEPG * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISIInbandEPG * This);
	HRESULT(STDMETHODCALLTYPE * StartSIEPGScan) (ISIInbandEPG * This);
	HRESULT(STDMETHODCALLTYPE * StopSIEPGScan) (ISIInbandEPG * This);
	HRESULT(STDMETHODCALLTYPE * IsSIEPGScanRunning) (ISIInbandEPG * This, BOOL * bRunning);
	END_INTERFACE
} ISIInbandEPGVtbl;
interface ISIInbandEPG
{
	CONST_VTBL struct ISIInbandEPGVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISIInbandEPG_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define ISIInbandEPG_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define ISIInbandEPG_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define ISIInbandEPG_StartSIEPGScan(This)     ( (This)->lpVtbl -> StartSIEPGScan(This) ) 
#define ISIInbandEPG_StopSIEPGScan(This)     ( (This)->lpVtbl -> StopSIEPGScan(This) ) 
#define ISIInbandEPG_IsSIEPGScanRunning(This,bRunning)     ( (This)->lpVtbl -> IsSIEPGScanRunning(This,bRunning) ) 
#endif
#endif
#ifndef __IGuideDataEvent_INTERFACE_DEFINED__
#define __IGuideDataEvent_INTERFACE_DEFINED__ 
extern const IID IID_IGuideDataEvent;
typedef struct IGuideDataEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGuideDataEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGuideDataEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGuideDataEvent * This);
	HRESULT(STDMETHODCALLTYPE * GuideDataAcquired) (IGuideDataEvent * This);
	HRESULT(STDMETHODCALLTYPE * ProgramChanged) (IGuideDataEvent * This, VARIANT varProgramDescriptionID);
	HRESULT(STDMETHODCALLTYPE * ServiceChanged) (IGuideDataEvent * This, VARIANT varServiceDescriptionID);
	HRESULT(STDMETHODCALLTYPE * ScheduleEntryChanged) (IGuideDataEvent * This, VARIANT varScheduleEntryDescriptionID);
	HRESULT(STDMETHODCALLTYPE * ProgramDeleted) (IGuideDataEvent * This, VARIANT varProgramDescriptionID);
	HRESULT(STDMETHODCALLTYPE * ServiceDeleted) (IGuideDataEvent * This, VARIANT varServiceDescriptionID);
	HRESULT(STDMETHODCALLTYPE * ScheduleDeleted) (IGuideDataEvent * This, VARIANT varScheduleEntryDescriptionID);
	END_INTERFACE
} IGuideDataEventVtbl;
interface IGuideDataEvent
{
	CONST_VTBL struct IGuideDataEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGuideDataEvent_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IGuideDataEvent_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IGuideDataEvent_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IGuideDataEvent_GuideDataAcquired(This)     ( (This)->lpVtbl -> GuideDataAcquired(This) ) 
#define IGuideDataEvent_ProgramChanged(This,varProgramDescriptionID)     ( (This)->lpVtbl -> ProgramChanged(This,varProgramDescriptionID) ) 
#define IGuideDataEvent_ServiceChanged(This,varServiceDescriptionID)     ( (This)->lpVtbl -> ServiceChanged(This,varServiceDescriptionID) ) 
#define IGuideDataEvent_ScheduleEntryChanged(This,varScheduleEntryDescriptionID)     ( (This)->lpVtbl -> ScheduleEntryChanged(This,varScheduleEntryDescriptionID) ) 
#define IGuideDataEvent_ProgramDeleted(This,varProgramDescriptionID)     ( (This)->lpVtbl -> ProgramDeleted(This,varProgramDescriptionID) ) 
#define IGuideDataEvent_ServiceDeleted(This,varServiceDescriptionID)     ( (This)->lpVtbl -> ServiceDeleted(This,varServiceDescriptionID) ) 
#define IGuideDataEvent_ScheduleDeleted(This,varScheduleEntryDescriptionID)     ( (This)->lpVtbl -> ScheduleDeleted(This,varScheduleEntryDescriptionID) ) 
#endif
#endif
#ifndef __IGuideDataProperty_INTERFACE_DEFINED__
#define __IGuideDataProperty_INTERFACE_DEFINED__ 
extern const IID IID_IGuideDataProperty;
typedef struct IGuideDataPropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGuideDataProperty * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGuideDataProperty * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGuideDataProperty * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IGuideDataProperty * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_Language) (IGuideDataProperty * This, long *idLang);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IGuideDataProperty * This, VARIANT * pvar);
	END_INTERFACE
} IGuideDataPropertyVtbl;
interface IGuideDataProperty
{
	CONST_VTBL struct IGuideDataPropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGuideDataProperty_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IGuideDataProperty_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IGuideDataProperty_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IGuideDataProperty_get_Name(This,pbstrName)     ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 
#define IGuideDataProperty_get_Language(This,idLang)     ( (This)->lpVtbl -> get_Language(This,idLang) ) 
#define IGuideDataProperty_get_Value(This,pvar)     ( (This)->lpVtbl -> get_Value(This,pvar) ) 
#endif
#endif
#ifndef __IEnumGuideDataProperties_INTERFACE_DEFINED__
#define __IEnumGuideDataProperties_INTERFACE_DEFINED__ 
extern const IID IID_IEnumGuideDataProperties;
typedef struct IEnumGuideDataPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumGuideDataProperties * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumGuideDataProperties * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumGuideDataProperties * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumGuideDataProperties * This, unsigned long celt, IGuideDataProperty ** ppprop, unsigned long *pcelt);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumGuideDataProperties * This, unsigned long celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumGuideDataProperties * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumGuideDataProperties * This, IEnumGuideDataProperties ** ppenum);
	END_INTERFACE
} IEnumGuideDataPropertiesVtbl;
interface IEnumGuideDataProperties
{
	CONST_VTBL struct IEnumGuideDataPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumGuideDataProperties_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IEnumGuideDataProperties_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IEnumGuideDataProperties_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IEnumGuideDataProperties_Next(This,celt,ppprop,pcelt)     ( (This)->lpVtbl -> Next(This,celt,ppprop,pcelt) ) 
#define IEnumGuideDataProperties_Skip(This,celt)     ( (This)->lpVtbl -> Skip(This,celt) ) 
#define IEnumGuideDataProperties_Reset(This)     ( (This)->lpVtbl -> Reset(This) ) 
#define IEnumGuideDataProperties_Clone(This,ppenum)     ( (This)->lpVtbl -> Clone(This,ppenum) ) 
#endif
#endif
#ifndef __IEnumTuneRequests_INTERFACE_DEFINED__
#define __IEnumTuneRequests_INTERFACE_DEFINED__ 
extern const IID IID_IEnumTuneRequests;
typedef struct IEnumTuneRequestsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumTuneRequests * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumTuneRequests * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumTuneRequests * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumTuneRequests * This, unsigned long celt, ITuneRequest ** ppprop, unsigned long *pcelt);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumTuneRequests * This, unsigned long celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumTuneRequests * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumTuneRequests * This, IEnumTuneRequests ** ppenum);
	END_INTERFACE
} IEnumTuneRequestsVtbl;
interface IEnumTuneRequests
{
	CONST_VTBL struct IEnumTuneRequestsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTuneRequests_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IEnumTuneRequests_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IEnumTuneRequests_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IEnumTuneRequests_Next(This,celt,ppprop,pcelt)     ( (This)->lpVtbl -> Next(This,celt,ppprop,pcelt) ) 
#define IEnumTuneRequests_Skip(This,celt)     ( (This)->lpVtbl -> Skip(This,celt) ) 
#define IEnumTuneRequests_Reset(This)     ( (This)->lpVtbl -> Reset(This) ) 
#define IEnumTuneRequests_Clone(This,ppenum)     ( (This)->lpVtbl -> Clone(This,ppenum) ) 
#endif
#endif
#ifndef __IGuideData_INTERFACE_DEFINED__
#define __IGuideData_INTERFACE_DEFINED__ 
extern const IID IID_IGuideData;
typedef struct IGuideDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGuideData * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGuideData * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGuideData * This);
	HRESULT(STDMETHODCALLTYPE * GetServices) (IGuideData * This, IEnumTuneRequests ** ppEnumTuneRequests);
	HRESULT(STDMETHODCALLTYPE * GetServiceProperties) (IGuideData * This, ITuneRequest * pTuneRequest, IEnumGuideDataProperties ** ppEnumProperties);
	HRESULT(STDMETHODCALLTYPE * GetGuideProgramIDs) (IGuideData * This, IEnumVARIANT ** pEnumPrograms);
	HRESULT(STDMETHODCALLTYPE * GetProgramProperties) (IGuideData * This, VARIANT varProgramDescriptionID, IEnumGuideDataProperties ** ppEnumProperties);
	HRESULT(STDMETHODCALLTYPE * GetScheduleEntryIDs) (IGuideData * This, IEnumVARIANT ** pEnumScheduleEntries);
	HRESULT(STDMETHODCALLTYPE * GetScheduleEntryProperties) (IGuideData * This, VARIANT varScheduleEntryDescriptionID, IEnumGuideDataProperties ** ppEnumProperties);
	END_INTERFACE
} IGuideDataVtbl;
interface IGuideData
{
	CONST_VTBL struct IGuideDataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGuideData_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IGuideData_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IGuideData_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IGuideData_GetServices(This,ppEnumTuneRequests)     ( (This)->lpVtbl -> GetServices(This,ppEnumTuneRequests) ) 
#define IGuideData_GetServiceProperties(This,pTuneRequest,ppEnumProperties)     ( (This)->lpVtbl -> GetServiceProperties(This,pTuneRequest,ppEnumProperties) ) 
#define IGuideData_GetGuideProgramIDs(This,pEnumPrograms)     ( (This)->lpVtbl -> GetGuideProgramIDs(This,pEnumPrograms) ) 
#define IGuideData_GetProgramProperties(This,varProgramDescriptionID,ppEnumProperties)     ( (This)->lpVtbl -> GetProgramProperties(This,varProgramDescriptionID,ppEnumProperties) ) 
#define IGuideData_GetScheduleEntryIDs(This,pEnumScheduleEntries)     ( (This)->lpVtbl -> GetScheduleEntryIDs(This,pEnumScheduleEntries) ) 
#define IGuideData_GetScheduleEntryProperties(This,varScheduleEntryDescriptionID,ppEnumProperties)     ( (This)->lpVtbl -> GetScheduleEntryProperties(This,varScheduleEntryDescriptionID,ppEnumProperties) ) 
#endif
#endif
#ifndef __IGuideDataLoader_INTERFACE_DEFINED__
#define __IGuideDataLoader_INTERFACE_DEFINED__ 
extern const IID IID_IGuideDataLoader;
typedef struct IGuideDataLoaderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGuideDataLoader * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGuideDataLoader * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGuideDataLoader * This);
	HRESULT(STDMETHODCALLTYPE * Init) (IGuideDataLoader * This, IGuideData * pGuideStore);
	HRESULT(STDMETHODCALLTYPE * Terminate) (IGuideDataLoader * This);
	END_INTERFACE
} IGuideDataLoaderVtbl;
interface IGuideDataLoader
{
	CONST_VTBL struct IGuideDataLoaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGuideDataLoader_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IGuideDataLoader_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IGuideDataLoader_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IGuideDataLoader_Init(This,pGuideStore)     ( (This)->lpVtbl -> Init(This,pGuideStore) ) 
#define IGuideDataLoader_Terminate(This)     ( (This)->lpVtbl -> Terminate(This) ) 
#endif
#endif
#ifndef __PSISLOADLib_LIBRARY_DEFINED__
#define __PSISLOADLib_LIBRARY_DEFINED__ 
extern const IID LIBID_PSISLOADLib;
extern const CLSID CLSID_TIFLoad;
#endif 
extern RPC_IF_HANDLE __MIDL_itf_bdatif_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdatif_0000_0012_v0_0_s_ifspec;
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
