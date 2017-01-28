/*+@@file@@----------------------------------------------------------------*//*!
 \file		winsatcominterfacei.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 22:39:25 2016
 \date		Modified on Sun Sep  4 22:39:25 2016
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
#ifndef __winsatcominterfacei_h__
#define __winsatcominterfacei_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWinSATTaskMangerTask_FWD_DEFINED__
#define __IWinSATTaskMangerTask_FWD_DEFINED__
typedef interface IWinSATTaskMangerTask IWinSATTaskMangerTask;
#endif
#ifndef __IProvideWinSATAssessmentInfo_FWD_DEFINED__
#define __IProvideWinSATAssessmentInfo_FWD_DEFINED__
typedef interface IProvideWinSATAssessmentInfo IProvideWinSATAssessmentInfo;
#endif
#ifndef __IProvideWinSATResultsInfo_FWD_DEFINED__
#define __IProvideWinSATResultsInfo_FWD_DEFINED__
typedef interface IProvideWinSATResultsInfo IProvideWinSATResultsInfo;
#endif
#ifndef __IQueryRecentWinSATAssessment_FWD_DEFINED__
#define __IQueryRecentWinSATAssessment_FWD_DEFINED__
typedef interface IQueryRecentWinSATAssessment IQueryRecentWinSATAssessment;
#endif
#ifndef __IProvideWinSATVisuals_FWD_DEFINED__
#define __IProvideWinSATVisuals_FWD_DEFINED__
typedef interface IProvideWinSATVisuals IProvideWinSATVisuals;
#endif
#ifndef __IQueryAllWinSATAssessments_FWD_DEFINED__
#define __IQueryAllWinSATAssessments_FWD_DEFINED__
typedef interface IQueryAllWinSATAssessments IQueryAllWinSATAssessments;
#endif
#ifndef __IWinSATInitiateEvents_FWD_DEFINED__
#define __IWinSATInitiateEvents_FWD_DEFINED__
typedef interface IWinSATInitiateEvents IWinSATInitiateEvents;
#endif
#ifndef __IInitiateWinSATAssessment_FWD_DEFINED__
#define __IInitiateWinSATAssessment_FWD_DEFINED__
typedef interface IInitiateWinSATAssessment IInitiateWinSATAssessment;
#endif
#ifndef __IAccessibleWinSAT_FWD_DEFINED__
#define __IAccessibleWinSAT_FWD_DEFINED__
typedef interface IAccessibleWinSAT IAccessibleWinSAT;
#endif
#ifndef __IQueryOEMWinSATCustomization_FWD_DEFINED__
#define __IQueryOEMWinSATCustomization_FWD_DEFINED__
typedef interface IQueryOEMWinSATCustomization IQueryOEMWinSATCustomization;
#endif
#ifndef __CWinSATTaskMangerTask_FWD_DEFINED__
#define __CWinSATTaskMangerTask_FWD_DEFINED__
typedef struct CWinSATTaskMangerTask CWinSATTaskMangerTask;
#endif
#ifndef __CInitiateWinSAT_FWD_DEFINED__
#define __CInitiateWinSAT_FWD_DEFINED__
typedef struct CInitiateWinSAT CInitiateWinSAT;
#endif
#ifndef __CQueryWinSAT_FWD_DEFINED__
#define __CQueryWinSAT_FWD_DEFINED__
typedef struct CQueryWinSAT CQueryWinSAT;
#endif
#ifndef __CQueryAllWinSAT_FWD_DEFINED__
#define __CQueryAllWinSAT_FWD_DEFINED__
typedef struct CQueryAllWinSAT CQueryAllWinSAT;
#endif
#ifndef __CProvideWinSATVisuals_FWD_DEFINED__
#define __CProvideWinSATVisuals_FWD_DEFINED__
typedef struct CProvideWinSATVisuals CProvideWinSATVisuals;
#endif
#ifndef __CAccessiblityWinSAT_FWD_DEFINED__
#define __CAccessiblityWinSAT_FWD_DEFINED__
typedef struct CAccessiblityWinSAT CAccessiblityWinSAT;
#endif
#ifndef __CQueryOEMWinSATCustomization_FWD_DEFINED__
#define __CQueryOEMWinSATCustomization_FWD_DEFINED__
typedef struct CQueryOEMWinSATCustomization CQueryOEMWinSATCustomization;
#endif
#include <oaidl.h>
#include <msxml.h>
#include <oleacc.h>
#include <taskschd.h>
typedef enum __MIDL___MIDL_itf_winsatcominterfacei_0000_0000_0001
{
	WINSAT_OEM_DATA_VALID = 0,
	WINSAT_OEM_DATA_NON_SYS_CONFIG_MATCH = 1,
	WINSAT_OEM_DATA_INVALID = 2,
	WINSAT_OEM_NO_DATA_SUPPLIED = 3
} WINSAT_OEM_CUSTOMIZATION_STATE;
typedef enum __MIDL___MIDL_itf_winsatcominterfacei_0000_0000_0002
{
	WINSAT_ASSESSMENT_STATE_MIN = 0,
	WINSAT_ASSESSMENT_STATE_UNKNOWN = 0,
	WINSAT_ASSESSMENT_STATE_VALID = 1,
	WINSAT_ASSESSMENT_STATE_INCOHERENT_WITH_HARDWARE = 2,
	WINSAT_ASSESSMENT_STATE_NOT_AVAILABLE = 3,
	WINSAT_ASSESSMENT_STATE_INVALID = 4,
	WINSAT_ASSESSMENT_STATE_MAX = 4
} WINSAT_ASSESSMENT_STATE;
typedef enum __MIDL___MIDL_itf_winsatcominterfacei_0000_0000_0003
{
	WINSAT_ASSESSMENT_MEMORY = 0,
	WINSAT_ASSESSMENT_CPU = 1,
	WINSAT_ASSESSMENT_DISK = 2,
	WINSAT_ASSESSMENT_D3D = 3,
	WINSAT_ASSESSMENT_GRAPHICS = 4
} WINSAT_ASSESSMENT_TYPE;
typedef enum __MIDL___MIDL_itf_winsatcominterfacei_0000_0000_0004
{
	WINSAT_BITMAP_SIZE_SMALL = 0,
	WINSAT_BITMAP_SIZE_NORMAL = 1
} WINSAT_BITMAP_SIZE;
extern RPC_IF_HANDLE __MIDL_itf_winsatcominterfacei_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsatcominterfacei_0000_0000_v0_0_s_ifspec;
#ifndef __IWinSATTaskMangerTask_INTERFACE_DEFINED__
#define __IWinSATTaskMangerTask_INTERFACE_DEFINED__
extern const IID IID_IWinSATTaskMangerTask;
typedef struct IWinSATTaskMangerTaskVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWinSATTaskMangerTask * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWinSATTaskMangerTask * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWinSATTaskMangerTask * This);
	HRESULT(STDMETHODCALLTYPE * Start) (IWinSATTaskMangerTask * This, IUnknown * pHandlerServices, BSTR data);
	HRESULT(STDMETHODCALLTYPE * Stop) (IWinSATTaskMangerTask * This, HRESULT * pRetCode);
	HRESULT(STDMETHODCALLTYPE * Pause) (IWinSATTaskMangerTask * This);
	HRESULT(STDMETHODCALLTYPE * Resume) (IWinSATTaskMangerTask * This);
	HRESULT(STDMETHODCALLTYPE * Start2) (IWinSATTaskMangerTask * This, IUnknown * pHandlerServices, BSTR data);
	HRESULT(STDMETHODCALLTYPE * Stop2) (IWinSATTaskMangerTask * This, HRESULT * pRetCode);
	HRESULT(STDMETHODCALLTYPE * Pause2) (IWinSATTaskMangerTask * This);
	HRESULT(STDMETHODCALLTYPE * Resume2) (IWinSATTaskMangerTask * This);
	END_INTERFACE
}  IWinSATTaskMangerTaskVtbl;
interface IWinSATTaskMangerTask
{
	CONST_VTBL struct IWinSATTaskMangerTaskVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWinSATTaskMangerTask_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWinSATTaskMangerTask_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWinSATTaskMangerTask_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWinSATTaskMangerTask_Start(This,pHandlerServices,data) ( (This)->lpVtbl -> Start(This,pHandlerServices,data) )
#define IWinSATTaskMangerTask_Stop(This,pRetCode) ( (This)->lpVtbl -> Stop(This,pRetCode) )
#define IWinSATTaskMangerTask_Pause(This) ( (This)->lpVtbl -> Pause(This) )
#define IWinSATTaskMangerTask_Resume(This) ( (This)->lpVtbl -> Resume(This) )
#define IWinSATTaskMangerTask_Start(This,pHandlerServices,data) ( (This)->lpVtbl -> Start(This,pHandlerServices,data) )
#define IWinSATTaskMangerTask_Stop(This,pRetCode) ( (This)->lpVtbl -> Stop(This,pRetCode) )
#define IWinSATTaskMangerTask_Pause(This) ( (This)->lpVtbl -> Pause(This) )
#define IWinSATTaskMangerTask_Resume(This) ( (This)->lpVtbl -> Resume(This) )
#endif
#endif
#ifndef __IProvideWinSATAssessmentInfo_INTERFACE_DEFINED__
#define __IProvideWinSATAssessmentInfo_INTERFACE_DEFINED__
extern const IID IID_IProvideWinSATAssessmentInfo;
typedef struct IProvideWinSATAssessmentInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProvideWinSATAssessmentInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProvideWinSATAssessmentInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProvideWinSATAssessmentInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IProvideWinSATAssessmentInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IProvideWinSATAssessmentInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IProvideWinSATAssessmentInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IProvideWinSATAssessmentInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Score) (IProvideWinSATAssessmentInfo * This, float *score);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IProvideWinSATAssessmentInfo * This, BSTR * title);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IProvideWinSATAssessmentInfo * This, BSTR * description);
	END_INTERFACE
}  IProvideWinSATAssessmentInfoVtbl;
interface IProvideWinSATAssessmentInfo
{
	CONST_VTBL struct IProvideWinSATAssessmentInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProvideWinSATAssessmentInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProvideWinSATAssessmentInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IProvideWinSATAssessmentInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IProvideWinSATAssessmentInfo_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IProvideWinSATAssessmentInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IProvideWinSATAssessmentInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IProvideWinSATAssessmentInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IProvideWinSATAssessmentInfo_get_Score(This,score) ( (This)->lpVtbl -> get_Score(This,score) )
#define IProvideWinSATAssessmentInfo_get_Title(This,title) ( (This)->lpVtbl -> get_Title(This,title) )
#define IProvideWinSATAssessmentInfo_get_Description(This,description) ( (This)->lpVtbl -> get_Description(This,description) )
#endif
#endif
#ifndef __IProvideWinSATResultsInfo_INTERFACE_DEFINED__
#define __IProvideWinSATResultsInfo_INTERFACE_DEFINED__
extern const IID IID_IProvideWinSATResultsInfo;
typedef struct IProvideWinSATResultsInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProvideWinSATResultsInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProvideWinSATResultsInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProvideWinSATResultsInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IProvideWinSATResultsInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IProvideWinSATResultsInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IProvideWinSATResultsInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IProvideWinSATResultsInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetAssessmentInfo) (IProvideWinSATResultsInfo * This, WINSAT_ASSESSMENT_TYPE assessment, IProvideWinSATAssessmentInfo ** ppinfo);
	HRESULT(STDMETHODCALLTYPE * get_AssessmentState) (IProvideWinSATResultsInfo * This, WINSAT_ASSESSMENT_STATE * state);
	HRESULT(STDMETHODCALLTYPE * get_AssessmentDateTime) (IProvideWinSATResultsInfo * This, VARIANT * fileTime);
	HRESULT(STDMETHODCALLTYPE * get_SystemRating) (IProvideWinSATResultsInfo * This, float *level);
	HRESULT(STDMETHODCALLTYPE * get_RatingStateDesc) (IProvideWinSATResultsInfo * This, BSTR * description);
	END_INTERFACE
}  IProvideWinSATResultsInfoVtbl;
interface IProvideWinSATResultsInfo
{
	CONST_VTBL struct IProvideWinSATResultsInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProvideWinSATResultsInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProvideWinSATResultsInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IProvideWinSATResultsInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IProvideWinSATResultsInfo_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IProvideWinSATResultsInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IProvideWinSATResultsInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IProvideWinSATResultsInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IProvideWinSATResultsInfo_GetAssessmentInfo(This,assessment,ppinfo) ( (This)->lpVtbl -> GetAssessmentInfo(This,assessment,ppinfo) )
#define IProvideWinSATResultsInfo_get_AssessmentState(This,state) ( (This)->lpVtbl -> get_AssessmentState(This,state) )
#define IProvideWinSATResultsInfo_get_AssessmentDateTime(This,fileTime) ( (This)->lpVtbl -> get_AssessmentDateTime(This,fileTime) )
#define IProvideWinSATResultsInfo_get_SystemRating(This,level) ( (This)->lpVtbl -> get_SystemRating(This,level) )
#define IProvideWinSATResultsInfo_get_RatingStateDesc(This,description) ( (This)->lpVtbl -> get_RatingStateDesc(This,description) )
#endif
#endif
#ifndef __IQueryRecentWinSATAssessment_INTERFACE_DEFINED__
#define __IQueryRecentWinSATAssessment_INTERFACE_DEFINED__
extern const IID IID_IQueryRecentWinSATAssessment;
typedef struct IQueryRecentWinSATAssessmentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IQueryRecentWinSATAssessment * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IQueryRecentWinSATAssessment * This);
	ULONG(STDMETHODCALLTYPE * Release) (IQueryRecentWinSATAssessment * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IQueryRecentWinSATAssessment * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IQueryRecentWinSATAssessment * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IQueryRecentWinSATAssessment * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IQueryRecentWinSATAssessment * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_XML) (IQueryRecentWinSATAssessment * This, BSTR xPath, BSTR namespaces, IXMLDOMNodeList ** ppDomNodeList);
	HRESULT(STDMETHODCALLTYPE * get_Info) (IQueryRecentWinSATAssessment * This, IProvideWinSATResultsInfo ** ppWinSATAssessmentInfo);
	END_INTERFACE
}  IQueryRecentWinSATAssessmentVtbl;
interface IQueryRecentWinSATAssessment
{
	CONST_VTBL struct IQueryRecentWinSATAssessmentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IQueryRecentWinSATAssessment_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IQueryRecentWinSATAssessment_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IQueryRecentWinSATAssessment_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IQueryRecentWinSATAssessment_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IQueryRecentWinSATAssessment_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IQueryRecentWinSATAssessment_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IQueryRecentWinSATAssessment_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IQueryRecentWinSATAssessment_get_XML(This,xPath,namespaces,ppDomNodeList) ( (This)->lpVtbl -> get_XML(This,xPath,namespaces,ppDomNodeList) )
#define IQueryRecentWinSATAssessment_get_Info(This,ppWinSATAssessmentInfo) ( (This)->lpVtbl -> get_Info(This,ppWinSATAssessmentInfo) )
#endif
#endif
#ifndef __IProvideWinSATVisuals_INTERFACE_DEFINED__
#define __IProvideWinSATVisuals_INTERFACE_DEFINED__
extern const IID IID_IProvideWinSATVisuals;
typedef struct IProvideWinSATVisualsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProvideWinSATVisuals * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProvideWinSATVisuals * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProvideWinSATVisuals * This);
	HRESULT(STDMETHODCALLTYPE * get_Bitmap) (IProvideWinSATVisuals * This, WINSAT_BITMAP_SIZE bitmapSize, WINSAT_ASSESSMENT_STATE state, float rating, HBITMAP * pBitmap);
	END_INTERFACE
}  IProvideWinSATVisualsVtbl;
interface IProvideWinSATVisuals
{
	CONST_VTBL struct IProvideWinSATVisualsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProvideWinSATVisuals_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProvideWinSATVisuals_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IProvideWinSATVisuals_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IProvideWinSATVisuals_get_Bitmap(This,bitmapSize,state,rating,pBitmap) ( (This)->lpVtbl -> get_Bitmap(This,bitmapSize,state,rating,pBitmap) )
#endif
#endif
#ifndef __IQueryAllWinSATAssessments_INTERFACE_DEFINED__
#define __IQueryAllWinSATAssessments_INTERFACE_DEFINED__
extern const IID IID_IQueryAllWinSATAssessments;
typedef struct IQueryAllWinSATAssessmentsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IQueryAllWinSATAssessments * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IQueryAllWinSATAssessments * This);
	ULONG(STDMETHODCALLTYPE * Release) (IQueryAllWinSATAssessments * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IQueryAllWinSATAssessments * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IQueryAllWinSATAssessments * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IQueryAllWinSATAssessments * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IQueryAllWinSATAssessments * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_AllXML) (IQueryAllWinSATAssessments * This, BSTR xPath, BSTR namespaces, IXMLDOMNodeList ** ppDomNodeList);
	END_INTERFACE
}  IQueryAllWinSATAssessmentsVtbl;
interface IQueryAllWinSATAssessments
{
	CONST_VTBL struct IQueryAllWinSATAssessmentsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IQueryAllWinSATAssessments_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IQueryAllWinSATAssessments_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IQueryAllWinSATAssessments_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IQueryAllWinSATAssessments_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IQueryAllWinSATAssessments_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IQueryAllWinSATAssessments_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IQueryAllWinSATAssessments_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IQueryAllWinSATAssessments_get_AllXML(This,xPath,namespaces,ppDomNodeList) ( (This)->lpVtbl -> get_AllXML(This,xPath,namespaces,ppDomNodeList) )
#endif
#endif
#ifndef __IWinSATInitiateEvents_INTERFACE_DEFINED__
#define __IWinSATInitiateEvents_INTERFACE_DEFINED__
extern const IID IID_IWinSATInitiateEvents;
typedef struct IWinSATInitiateEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWinSATInitiateEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWinSATInitiateEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWinSATInitiateEvents * This);
	HRESULT(STDMETHODCALLTYPE * WinSATComplete) (IWinSATInitiateEvents * This, HRESULT hresult, LPCWSTR strDescription);
	HRESULT(STDMETHODCALLTYPE * WinSATUpdate) (IWinSATInitiateEvents * This, UINT uCurrentTick, UINT uTickTotal, LPCWSTR strCurrentState);
	END_INTERFACE
}  IWinSATInitiateEventsVtbl;
interface IWinSATInitiateEvents
{
	CONST_VTBL struct IWinSATInitiateEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWinSATInitiateEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWinSATInitiateEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWinSATInitiateEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWinSATInitiateEvents_WinSATComplete(This,hresult,strDescription) ( (This)->lpVtbl -> WinSATComplete(This,hresult,strDescription) )
#define IWinSATInitiateEvents_WinSATUpdate(This,uCurrentTick,uTickTotal,strCurrentState) ( (This)->lpVtbl -> WinSATUpdate(This,uCurrentTick,uTickTotal,strCurrentState) )
#endif
#endif
#ifndef __IInitiateWinSATAssessment_INTERFACE_DEFINED__
#define __IInitiateWinSATAssessment_INTERFACE_DEFINED__
extern const IID IID_IInitiateWinSATAssessment;
typedef struct IInitiateWinSATAssessmentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInitiateWinSATAssessment * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInitiateWinSATAssessment * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInitiateWinSATAssessment * This);
	HRESULT(STDMETHODCALLTYPE * InitiateAssessment) (IInitiateWinSATAssessment * This, LPCWSTR cmdLine, IWinSATInitiateEvents * pCallbacks, HWND callerHwnd);
	HRESULT(STDMETHODCALLTYPE * InitiateFormalAssessment) (IInitiateWinSATAssessment * This, IWinSATInitiateEvents * pCallbacks, HWND callerHwnd);
	HRESULT(STDMETHODCALLTYPE * CancelAssessment) (IInitiateWinSATAssessment * This);
	END_INTERFACE
}  IInitiateWinSATAssessmentVtbl;
interface IInitiateWinSATAssessment
{
	CONST_VTBL struct IInitiateWinSATAssessmentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInitiateWinSATAssessment_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInitiateWinSATAssessment_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInitiateWinSATAssessment_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInitiateWinSATAssessment_InitiateAssessment(This,cmdLine,pCallbacks,callerHwnd) ( (This)->lpVtbl -> InitiateAssessment(This,cmdLine,pCallbacks,callerHwnd) )
#define IInitiateWinSATAssessment_InitiateFormalAssessment(This,pCallbacks,callerHwnd) ( (This)->lpVtbl -> InitiateFormalAssessment(This,pCallbacks,callerHwnd) )
#define IInitiateWinSATAssessment_CancelAssessment(This) ( (This)->lpVtbl -> CancelAssessment(This) )
#endif
#endif
#ifndef __IAccessibleWinSAT_INTERFACE_DEFINED__
#define __IAccessibleWinSAT_INTERFACE_DEFINED__
extern const IID IID_IAccessibleWinSAT;
typedef struct IAccessibleWinSATVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAccessibleWinSAT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAccessibleWinSAT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAccessibleWinSAT * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAccessibleWinSAT * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAccessibleWinSAT * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAccessibleWinSAT * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAccessibleWinSAT * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_accParent) (IAccessibleWinSAT * This, IDispatch ** ppdispParent);
	HRESULT(STDMETHODCALLTYPE * get_accChildCount) (IAccessibleWinSAT * This, long *pcountChildren);
	HRESULT(STDMETHODCALLTYPE * get_accChild) (IAccessibleWinSAT * This, VARIANT varChild, IDispatch ** ppdispChild);
	HRESULT(STDMETHODCALLTYPE * get_accName) (IAccessibleWinSAT * This, VARIANT varChild, BSTR * pszName);
	HRESULT(STDMETHODCALLTYPE * get_accValue) (IAccessibleWinSAT * This, VARIANT varChild, BSTR * pszValue);
	HRESULT(STDMETHODCALLTYPE * get_accDescription) (IAccessibleWinSAT * This, VARIANT varChild, BSTR * pszDescription);
	HRESULT(STDMETHODCALLTYPE * get_accRole) (IAccessibleWinSAT * This, VARIANT varChild, VARIANT * pvarRole);
	HRESULT(STDMETHODCALLTYPE * get_accState) (IAccessibleWinSAT * This, VARIANT varChild, VARIANT * pvarState);
	HRESULT(STDMETHODCALLTYPE * get_accHelp) (IAccessibleWinSAT * This, VARIANT varChild, BSTR * pszHelp);
	HRESULT(STDMETHODCALLTYPE * get_accHelpTopic) (IAccessibleWinSAT * This, BSTR * pszHelpFile, VARIANT varChild, long *pidTopic);
	HRESULT(STDMETHODCALLTYPE * get_accKeyboardShortcut) (IAccessibleWinSAT * This, VARIANT varChild, BSTR * pszKeyboardShortcut);
	HRESULT(STDMETHODCALLTYPE * get_accFocus) (IAccessibleWinSAT * This, VARIANT * pvarChild);
	HRESULT(STDMETHODCALLTYPE * get_accSelection) (IAccessibleWinSAT * This, VARIANT * pvarChildren);
	HRESULT(STDMETHODCALLTYPE * get_accDefaultAction) (IAccessibleWinSAT * This, VARIANT varChild, BSTR * pszDefaultAction);
	HRESULT(STDMETHODCALLTYPE * accSelect) (IAccessibleWinSAT * This, long flagsSelect, VARIANT varChild);
	HRESULT(STDMETHODCALLTYPE * accLocation) (IAccessibleWinSAT * This, long *pxLeft, long *pyTop, long *pcxWidth, long *pcyHeight, VARIANT varChild);
	HRESULT(STDMETHODCALLTYPE * accNavigate) (IAccessibleWinSAT * This, long navDir, VARIANT varStart, VARIANT * pvarEndUpAt);
	HRESULT(STDMETHODCALLTYPE * accHitTest) (IAccessibleWinSAT * This, long xLeft, long yTop, VARIANT * pvarChild);
	HRESULT(STDMETHODCALLTYPE * accDoDefaultAction) (IAccessibleWinSAT * This, VARIANT varChild);
	HRESULT(STDMETHODCALLTYPE * put_accName) (IAccessibleWinSAT * This, VARIANT varChild, BSTR szName);
	HRESULT(STDMETHODCALLTYPE * put_accValue) (IAccessibleWinSAT * This, VARIANT varChild, BSTR szValue);
	HRESULT(STDMETHODCALLTYPE * SetAccessiblityData) (IAccessibleWinSAT * This, LPCWSTR wsName, LPCWSTR wsValue, LPCWSTR wsDesc);
	END_INTERFACE
}  IAccessibleWinSATVtbl;
interface IAccessibleWinSAT
{
	CONST_VTBL struct IAccessibleWinSATVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAccessibleWinSAT_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAccessibleWinSAT_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAccessibleWinSAT_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAccessibleWinSAT_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAccessibleWinSAT_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAccessibleWinSAT_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAccessibleWinSAT_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAccessibleWinSAT_get_accParent(This,ppdispParent) ( (This)->lpVtbl -> get_accParent(This,ppdispParent) )
#define IAccessibleWinSAT_get_accChildCount(This,pcountChildren) ( (This)->lpVtbl -> get_accChildCount(This,pcountChildren) )
#define IAccessibleWinSAT_get_accChild(This,varChild,ppdispChild) ( (This)->lpVtbl -> get_accChild(This,varChild,ppdispChild) )
#define IAccessibleWinSAT_get_accName(This,varChild,pszName) ( (This)->lpVtbl -> get_accName(This,varChild,pszName) )
#define IAccessibleWinSAT_get_accValue(This,varChild,pszValue) ( (This)->lpVtbl -> get_accValue(This,varChild,pszValue) )
#define IAccessibleWinSAT_get_accDescription(This,varChild,pszDescription) ( (This)->lpVtbl -> get_accDescription(This,varChild,pszDescription) )
#define IAccessibleWinSAT_get_accRole(This,varChild,pvarRole) ( (This)->lpVtbl -> get_accRole(This,varChild,pvarRole) )
#define IAccessibleWinSAT_get_accState(This,varChild,pvarState) ( (This)->lpVtbl -> get_accState(This,varChild,pvarState) )
#define IAccessibleWinSAT_get_accHelp(This,varChild,pszHelp) ( (This)->lpVtbl -> get_accHelp(This,varChild,pszHelp) )
#define IAccessibleWinSAT_get_accHelpTopic(This,pszHelpFile,varChild,pidTopic) ( (This)->lpVtbl -> get_accHelpTopic(This,pszHelpFile,varChild,pidTopic) )
#define IAccessibleWinSAT_get_accKeyboardShortcut(This,varChild,pszKeyboardShortcut) ( (This)->lpVtbl -> get_accKeyboardShortcut(This,varChild,pszKeyboardShortcut) )
#define IAccessibleWinSAT_get_accFocus(This,pvarChild) ( (This)->lpVtbl -> get_accFocus(This,pvarChild) )
#define IAccessibleWinSAT_get_accSelection(This,pvarChildren) ( (This)->lpVtbl -> get_accSelection(This,pvarChildren) )
#define IAccessibleWinSAT_get_accDefaultAction(This,varChild,pszDefaultAction) ( (This)->lpVtbl -> get_accDefaultAction(This,varChild,pszDefaultAction) )
#define IAccessibleWinSAT_accSelect(This,flagsSelect,varChild) ( (This)->lpVtbl -> accSelect(This,flagsSelect,varChild) )
#define IAccessibleWinSAT_accLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight,varChild) ( (This)->lpVtbl -> accLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight,varChild) )
#define IAccessibleWinSAT_accNavigate(This,navDir,varStart,pvarEndUpAt) ( (This)->lpVtbl -> accNavigate(This,navDir,varStart,pvarEndUpAt) )
#define IAccessibleWinSAT_accHitTest(This,xLeft,yTop,pvarChild) ( (This)->lpVtbl -> accHitTest(This,xLeft,yTop,pvarChild) )
#define IAccessibleWinSAT_accDoDefaultAction(This,varChild) ( (This)->lpVtbl -> accDoDefaultAction(This,varChild) )
#define IAccessibleWinSAT_put_accName(This,varChild,szName) ( (This)->lpVtbl -> put_accName(This,varChild,szName) )
#define IAccessibleWinSAT_put_accValue(This,varChild,szValue) ( (This)->lpVtbl -> put_accValue(This,varChild,szValue) )
#define IAccessibleWinSAT_SetAccessiblityData(This,wsName,wsValue,wsDesc) ( (This)->lpVtbl -> SetAccessiblityData(This,wsName,wsValue,wsDesc) )
#endif
#endif
#ifndef __IQueryOEMWinSATCustomization_INTERFACE_DEFINED__
#define __IQueryOEMWinSATCustomization_INTERFACE_DEFINED__
extern const IID IID_IQueryOEMWinSATCustomization;
typedef struct IQueryOEMWinSATCustomizationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IQueryOEMWinSATCustomization * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IQueryOEMWinSATCustomization * This);
	ULONG(STDMETHODCALLTYPE * Release) (IQueryOEMWinSATCustomization * This);
	HRESULT(STDMETHODCALLTYPE * GetOEMPrePopulationInfo) (IQueryOEMWinSATCustomization * This, WINSAT_OEM_CUSTOMIZATION_STATE * state);
	END_INTERFACE
}  IQueryOEMWinSATCustomizationVtbl;
interface IQueryOEMWinSATCustomization
{
	CONST_VTBL struct IQueryOEMWinSATCustomizationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IQueryOEMWinSATCustomization_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IQueryOEMWinSATCustomization_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IQueryOEMWinSATCustomization_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IQueryOEMWinSATCustomization_GetOEMPrePopulationInfo(This,state) ( (This)->lpVtbl -> GetOEMPrePopulationInfo(This,state) )
#endif
#endif
#ifndef __WINSATLib_LIBRARY_DEFINED__
#define __WINSATLib_LIBRARY_DEFINED__
extern const IID LIBID_WINSATLib;
extern const CLSID CLSID_CWinSATTaskMangerTask;
extern const CLSID CLSID_CInitiateWinSAT;
extern const CLSID CLSID_CQueryWinSAT;
extern const CLSID CLSID_CQueryAllWinSAT;
extern const CLSID CLSID_CProvideWinSATVisuals;
extern const CLSID CLSID_CAccessiblityWinSAT;
extern const CLSID CLSID_CQueryOEMWinSATCustomization;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HBITMAP_UserSize(unsigned long *, unsigned long, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserMarshal(unsigned long *, unsigned char *, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserUnmarshal(unsigned long *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree(unsigned long *, HBITMAP *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER HBITMAP_UserSize64(unsigned long *, unsigned long, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserMarshal64(unsigned long *, unsigned char *, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserUnmarshal64(unsigned long *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree64(unsigned long *, HBITMAP *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
