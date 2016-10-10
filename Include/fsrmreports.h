/*+@@file@@----------------------------------------------------------------*//*!
 \file		fsrmreports.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 10 18:49:35 2016
 \date		Modified on Sun Jul 10 18:49:35 2016
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
#ifndef __fsrmreports_h__
#define __fsrmreports_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IFsrmReportManager_FWD_DEFINED__
#define __IFsrmReportManager_FWD_DEFINED__
typedef interface IFsrmReportManager IFsrmReportManager;
#endif
#ifndef __IFsrmReportJob_FWD_DEFINED__
#define __IFsrmReportJob_FWD_DEFINED__
typedef interface IFsrmReportJob IFsrmReportJob;
#endif
#ifndef __IFsrmReport_FWD_DEFINED__
#define __IFsrmReport_FWD_DEFINED__
typedef interface IFsrmReport IFsrmReport;
#endif
#ifndef __IFsrmReportScheduler_FWD_DEFINED__
#define __IFsrmReportScheduler_FWD_DEFINED__
typedef interface IFsrmReportScheduler IFsrmReportScheduler;
#endif
#ifndef __IFsrmFileManagementJobManager_FWD_DEFINED__
#define __IFsrmFileManagementJobManager_FWD_DEFINED__
typedef interface IFsrmFileManagementJobManager IFsrmFileManagementJobManager;
#endif
#ifndef __IFsrmFileManagementJob_FWD_DEFINED__
#define __IFsrmFileManagementJob_FWD_DEFINED__
typedef interface IFsrmFileManagementJob IFsrmFileManagementJob;
#endif
#ifndef __IFsrmPropertyCondition_FWD_DEFINED__
#define __IFsrmPropertyCondition_FWD_DEFINED__
typedef interface IFsrmPropertyCondition IFsrmPropertyCondition;
#endif
#include "oaidl.h"
#include "fsrmenums.h"
#include "fsrm.h"
#define	FSRM_DISPID_REPORT_MANAGER	( ( FSRM_DISPID_FEATURE_REPORTS | 0x100000 )  )
#define	FSRM_DISPID_REPORT_JOB	( ( FSRM_DISPID_FEATURE_REPORTS | 0x200000 )  )
#define	FSRM_DISPID_REPORT	( ( FSRM_DISPID_FEATURE_REPORTS | 0x300000 )  )
#define	FSRM_DISPID_REPORT_SCHEDULER	( ( FSRM_DISPID_FEATURE_REPORTS | 0x400000 )  )
#define	FSRM_DISPID_FILE_MANAGEMENT_JOB_MANAGER	( ( FSRM_DISPID_FEATURE_REPORTS | 0x500000 )  )
#define	FSRM_DISPID_FILE_MANAGEMENT_JOB	( ( FSRM_DISPID_FEATURE_REPORTS | 0x600000 )  )
#define	FSRM_DISPID_FILE_MANAGEMENT_NOTIFICATION	( ( FSRM_DISPID_FEATURE_REPORTS | 0x700000 )  )
#define	FSRM_DISPID_PROPERTY_CONDITION	( ( FSRM_DISPID_FEATURE_REPORTS | 0x800000 )  )
extern RPC_IF_HANDLE __MIDL_itf_fsrmreports_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmreports_0000_0000_v0_0_s_ifspec;
#ifndef __IFsrmReportManager_INTERFACE_DEFINED__
#define __IFsrmReportManager_INTERFACE_DEFINED__
extern const IID IID_IFsrmReportManager;
typedef struct IFsrmReportManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmReportManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmReportManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmReportManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmReportManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmReportManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmReportManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmReportManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * EnumReportJobs) (IFsrmReportManager * This, FsrmEnumOptions options, IFsrmCollection ** reportJobs);
	HRESULT(STDMETHODCALLTYPE * CreateReportJob) (IFsrmReportManager * This, IFsrmReportJob ** reportJob);
	HRESULT(STDMETHODCALLTYPE * GetReportJob) (IFsrmReportManager * This, BSTR taskName, IFsrmReportJob ** reportJob);
	HRESULT(STDMETHODCALLTYPE * GetOutputDirectory) (IFsrmReportManager * This, FsrmReportGenerationContext context, BSTR * path);
	HRESULT(STDMETHODCALLTYPE * SetOutputDirectory) (IFsrmReportManager * This, FsrmReportGenerationContext context, BSTR path);
	HRESULT(STDMETHODCALLTYPE * IsFilterValidForReportType) (IFsrmReportManager * This, FsrmReportType reportType, FsrmReportFilter filter, VARIANT_BOOL * valid);
	HRESULT(STDMETHODCALLTYPE * GetDefaultFilter) (IFsrmReportManager * This, FsrmReportType reportType, FsrmReportFilter filter, VARIANT * filterValue);
	HRESULT(STDMETHODCALLTYPE * SetDefaultFilter) (IFsrmReportManager * This, FsrmReportType reportType, FsrmReportFilter filter, VARIANT filterValue);
	HRESULT(STDMETHODCALLTYPE * GetReportSizeLimit) (IFsrmReportManager * This, FsrmReportLimit limit, VARIANT * limitValue);
	HRESULT(STDMETHODCALLTYPE * SetReportSizeLimit) (IFsrmReportManager * This, FsrmReportLimit limit, VARIANT limitValue);
	END_INTERFACE
}  IFsrmReportManagerVtbl;
interface IFsrmReportManager
{
	CONST_VTBL struct IFsrmReportManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmReportManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmReportManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmReportManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmReportManager_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmReportManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmReportManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmReportManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmReportManager_EnumReportJobs(This,options,reportJobs)( (This)->lpVtbl -> EnumReportJobs(This,options,reportJobs) )
#define IFsrmReportManager_CreateReportJob(This,reportJob)( (This)->lpVtbl -> CreateReportJob(This,reportJob) )
#define IFsrmReportManager_GetReportJob(This,taskName,reportJob)( (This)->lpVtbl -> GetReportJob(This,taskName,reportJob) )
#define IFsrmReportManager_GetOutputDirectory(This,context,path)( (This)->lpVtbl -> GetOutputDirectory(This,context,path) )
#define IFsrmReportManager_SetOutputDirectory(This,context,path)( (This)->lpVtbl -> SetOutputDirectory(This,context,path) )
#define IFsrmReportManager_IsFilterValidForReportType(This,reportType,filter,valid)( (This)->lpVtbl -> IsFilterValidForReportType(This,reportType,filter,valid) )
#define IFsrmReportManager_GetDefaultFilter(This,reportType,filter,filterValue)( (This)->lpVtbl -> GetDefaultFilter(This,reportType,filter,filterValue) )
#define IFsrmReportManager_SetDefaultFilter(This,reportType,filter,filterValue)( (This)->lpVtbl -> SetDefaultFilter(This,reportType,filter,filterValue) )
#define IFsrmReportManager_GetReportSizeLimit(This,limit,limitValue)( (This)->lpVtbl -> GetReportSizeLimit(This,limit,limitValue) )
#define IFsrmReportManager_SetReportSizeLimit(This,limit,limitValue)( (This)->lpVtbl -> SetReportSizeLimit(This,limit,limitValue) )
#endif
#endif
#ifndef __IFsrmReportJob_INTERFACE_DEFINED__
#define __IFsrmReportJob_INTERFACE_DEFINED__
extern const IID IID_IFsrmReportJob;
typedef struct IFsrmReportJobVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmReportJob * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmReportJob * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmReportJob * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmReportJob * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmReportJob * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmReportJob * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmReportJob * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmReportJob * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmReportJob * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmReportJob * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmReportJob * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmReportJob * This);
	HRESULT(STDMETHODCALLTYPE * get_Task) (IFsrmReportJob * This, BSTR * taskName);
	HRESULT(STDMETHODCALLTYPE * put_Task) (IFsrmReportJob * This, BSTR taskName);
	HRESULT(STDMETHODCALLTYPE * get_NamespaceRoots) (IFsrmReportJob * This, SAFEARRAY * *namespaceRoots);
	HRESULT(STDMETHODCALLTYPE * put_NamespaceRoots) (IFsrmReportJob * This, SAFEARRAY * namespaceRoots);
	HRESULT(STDMETHODCALLTYPE * get_Formats) (IFsrmReportJob * This, SAFEARRAY * *formats);
	HRESULT(STDMETHODCALLTYPE * put_Formats) (IFsrmReportJob * This, SAFEARRAY * formats);
	HRESULT(STDMETHODCALLTYPE * get_MailTo) (IFsrmReportJob * This, BSTR * mailTo);
	HRESULT(STDMETHODCALLTYPE * put_MailTo) (IFsrmReportJob * This, BSTR mailTo);
	HRESULT(STDMETHODCALLTYPE * get_RunningStatus) (IFsrmReportJob * This, FsrmReportRunningStatus * runningStatus);
	HRESULT(STDMETHODCALLTYPE * get_LastRun) (IFsrmReportJob * This, DATE * lastRun);
	HRESULT(STDMETHODCALLTYPE * get_LastError) (IFsrmReportJob * This, BSTR * lastError);
	HRESULT(STDMETHODCALLTYPE * get_LastGeneratedInDirectory) (IFsrmReportJob * This, BSTR * path);
	HRESULT(STDMETHODCALLTYPE * EnumReports) (IFsrmReportJob * This, IFsrmCollection ** reports);
	HRESULT(STDMETHODCALLTYPE * CreateReport) (IFsrmReportJob * This, FsrmReportType reportType, IFsrmReport ** report);
	HRESULT(STDMETHODCALLTYPE * Run) (IFsrmReportJob * This, FsrmReportGenerationContext context);
	HRESULT(STDMETHODCALLTYPE * WaitForCompletion) (IFsrmReportJob * This, long waitSeconds, VARIANT_BOOL * completed);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IFsrmReportJob * This);
	END_INTERFACE
}  IFsrmReportJobVtbl;
interface IFsrmReportJob
{
	CONST_VTBL struct IFsrmReportJobVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmReportJob_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmReportJob_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmReportJob_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmReportJob_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmReportJob_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmReportJob_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmReportJob_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmReportJob_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmReportJob_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmReportJob_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmReportJob_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmReportJob_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmReportJob_get_Task(This,taskName)( (This)->lpVtbl -> get_Task(This,taskName) )
#define IFsrmReportJob_put_Task(This,taskName)( (This)->lpVtbl -> put_Task(This,taskName) )
#define IFsrmReportJob_get_NamespaceRoots(This,namespaceRoots)( (This)->lpVtbl -> get_NamespaceRoots(This,namespaceRoots) )
#define IFsrmReportJob_put_NamespaceRoots(This,namespaceRoots)( (This)->lpVtbl -> put_NamespaceRoots(This,namespaceRoots) )
#define IFsrmReportJob_get_Formats(This,formats)( (This)->lpVtbl -> get_Formats(This,formats) )
#define IFsrmReportJob_put_Formats(This,formats)( (This)->lpVtbl -> put_Formats(This,formats) )
#define IFsrmReportJob_get_MailTo(This,mailTo)( (This)->lpVtbl -> get_MailTo(This,mailTo) )
#define IFsrmReportJob_put_MailTo(This,mailTo)( (This)->lpVtbl -> put_MailTo(This,mailTo) )
#define IFsrmReportJob_get_RunningStatus(This,runningStatus)( (This)->lpVtbl -> get_RunningStatus(This,runningStatus) )
#define IFsrmReportJob_get_LastRun(This,lastRun)( (This)->lpVtbl -> get_LastRun(This,lastRun) )
#define IFsrmReportJob_get_LastError(This,lastError)( (This)->lpVtbl -> get_LastError(This,lastError) )
#define IFsrmReportJob_get_LastGeneratedInDirectory(This,path)( (This)->lpVtbl -> get_LastGeneratedInDirectory(This,path) )
#define IFsrmReportJob_EnumReports(This,reports)( (This)->lpVtbl -> EnumReports(This,reports) )
#define IFsrmReportJob_CreateReport(This,reportType,report)( (This)->lpVtbl -> CreateReport(This,reportType,report) )
#define IFsrmReportJob_Run(This,context)( (This)->lpVtbl -> Run(This,context) )
#define IFsrmReportJob_WaitForCompletion(This,waitSeconds,completed)( (This)->lpVtbl -> WaitForCompletion(This,waitSeconds,completed) )
#define IFsrmReportJob_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#endif
#endif
#ifndef __IFsrmReport_INTERFACE_DEFINED__
#define __IFsrmReport_INTERFACE_DEFINED__
extern const IID IID_IFsrmReport;
typedef struct IFsrmReportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmReport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmReport * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmReport * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmReport * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmReport * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmReport * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmReport * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IFsrmReport * This, FsrmReportType * reportType);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmReport * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFsrmReport * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmReport * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmReport * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * get_LastGeneratedFileNamePrefix) (IFsrmReport * This, BSTR * prefix);
	HRESULT(STDMETHODCALLTYPE * GetFilter) (IFsrmReport * This, FsrmReportFilter filter, VARIANT * filterValue);
	HRESULT(STDMETHODCALLTYPE * SetFilter) (IFsrmReport * This, FsrmReportFilter filter, VARIANT filterValue);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmReport * This);
	END_INTERFACE
}  IFsrmReportVtbl;
interface IFsrmReport
{
	CONST_VTBL struct IFsrmReportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmReport_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmReport_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmReport_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmReport_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmReport_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmReport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmReport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmReport_get_Type(This,reportType)( (This)->lpVtbl -> get_Type(This,reportType) )
#define IFsrmReport_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmReport_put_Name(This,name)( (This)->lpVtbl -> put_Name(This,name) )
#define IFsrmReport_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmReport_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmReport_get_LastGeneratedFileNamePrefix(This,prefix)( (This)->lpVtbl -> get_LastGeneratedFileNamePrefix(This,prefix) )
#define IFsrmReport_GetFilter(This,filter,filterValue)( (This)->lpVtbl -> GetFilter(This,filter,filterValue) )
#define IFsrmReport_SetFilter(This,filter,filterValue)( (This)->lpVtbl -> SetFilter(This,filter,filterValue) )
#define IFsrmReport_Delete(This)( (This)->lpVtbl -> Delete(This) )
#endif
#endif
#ifndef __IFsrmReportScheduler_INTERFACE_DEFINED__
#define __IFsrmReportScheduler_INTERFACE_DEFINED__
extern const IID IID_IFsrmReportScheduler;
typedef struct IFsrmReportSchedulerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmReportScheduler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmReportScheduler * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmReportScheduler * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmReportScheduler * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmReportScheduler * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmReportScheduler * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmReportScheduler * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * VerifyNamespaces) (IFsrmReportScheduler * This, VARIANT * namespacesSafeArray);
	HRESULT(STDMETHODCALLTYPE * CreateScheduleTask) (IFsrmReportScheduler * This, BSTR taskName, VARIANT * namespacesSafeArray, BSTR serializedTask);
	HRESULT(STDMETHODCALLTYPE * ModifyScheduleTask) (IFsrmReportScheduler * This, BSTR taskName, VARIANT * namespacesSafeArray, BSTR serializedTask);
	HRESULT(STDMETHODCALLTYPE * DeleteScheduleTask) (IFsrmReportScheduler * This, BSTR taskName);
	END_INTERFACE
}  IFsrmReportSchedulerVtbl;
interface IFsrmReportScheduler
{
	CONST_VTBL struct IFsrmReportSchedulerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmReportScheduler_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmReportScheduler_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmReportScheduler_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmReportScheduler_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmReportScheduler_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmReportScheduler_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmReportScheduler_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmReportScheduler_VerifyNamespaces(This,namespacesSafeArray)( (This)->lpVtbl -> VerifyNamespaces(This,namespacesSafeArray) )
#define IFsrmReportScheduler_CreateScheduleTask(This,taskName,namespacesSafeArray,serializedTask)( (This)->lpVtbl -> CreateScheduleTask(This,taskName,namespacesSafeArray,serializedTask) )
#define IFsrmReportScheduler_ModifyScheduleTask(This,taskName,namespacesSafeArray,serializedTask)( (This)->lpVtbl -> ModifyScheduleTask(This,taskName,namespacesSafeArray,serializedTask) )
#define IFsrmReportScheduler_DeleteScheduleTask(This,taskName)( (This)->lpVtbl -> DeleteScheduleTask(This,taskName) )
#endif
#endif
#ifndef __IFsrmFileManagementJobManager_INTERFACE_DEFINED__
#define __IFsrmFileManagementJobManager_INTERFACE_DEFINED__
extern const IID IID_IFsrmFileManagementJobManager;
typedef struct IFsrmFileManagementJobManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmFileManagementJobManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmFileManagementJobManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmFileManagementJobManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmFileManagementJobManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmFileManagementJobManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmFileManagementJobManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmFileManagementJobManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ActionVariables) (IFsrmFileManagementJobManager * This, SAFEARRAY * *variables);
	HRESULT(STDMETHODCALLTYPE * get_ActionVariableDescriptions) (IFsrmFileManagementJobManager * This, SAFEARRAY * *descriptions);
	HRESULT(STDMETHODCALLTYPE * EnumFileManagementJobs) (IFsrmFileManagementJobManager * This, FsrmEnumOptions options, IFsrmCollection ** fileManagementJobs);
	HRESULT(STDMETHODCALLTYPE * CreateFileManagementJob) (IFsrmFileManagementJobManager * This, IFsrmFileManagementJob ** fileManagementJob);
	HRESULT(STDMETHODCALLTYPE * GetFileManagementJob) (IFsrmFileManagementJobManager * This, BSTR name, IFsrmFileManagementJob ** fileManagementJob);
	END_INTERFACE
}  IFsrmFileManagementJobManagerVtbl;
interface IFsrmFileManagementJobManager
{
	CONST_VTBL struct IFsrmFileManagementJobManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmFileManagementJobManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmFileManagementJobManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmFileManagementJobManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmFileManagementJobManager_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmFileManagementJobManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmFileManagementJobManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmFileManagementJobManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmFileManagementJobManager_get_ActionVariables(This,variables)( (This)->lpVtbl -> get_ActionVariables(This,variables) )
#define IFsrmFileManagementJobManager_get_ActionVariableDescriptions(This,descriptions)( (This)->lpVtbl -> get_ActionVariableDescriptions(This,descriptions) )
#define IFsrmFileManagementJobManager_EnumFileManagementJobs(This,options,fileManagementJobs)( (This)->lpVtbl -> EnumFileManagementJobs(This,options,fileManagementJobs) )
#define IFsrmFileManagementJobManager_CreateFileManagementJob(This,fileManagementJob)( (This)->lpVtbl -> CreateFileManagementJob(This,fileManagementJob) )
#define IFsrmFileManagementJobManager_GetFileManagementJob(This,name,fileManagementJob)( (This)->lpVtbl -> GetFileManagementJob(This,name,fileManagementJob) )
#endif
#endif
#ifndef __IFsrmFileManagementJob_INTERFACE_DEFINED__
#define __IFsrmFileManagementJob_INTERFACE_DEFINED__
#define	FsrmDaysNotSpecified	( -1 )
#define	FsrmDateNotSpecified	( ( DATE  )-1 )
extern const IID IID_IFsrmFileManagementJob;
typedef struct IFsrmFileManagementJobVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmFileManagementJob * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmFileManagementJob * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmFileManagementJob * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmFileManagementJob * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmFileManagementJob * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmFileManagementJob * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmFileManagementJob * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmFileManagementJob * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmFileManagementJob * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmFileManagementJob * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmFileManagementJob * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmFileManagementJob * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmFileManagementJob * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFsrmFileManagementJob * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_NamespaceRoots) (IFsrmFileManagementJob * This, SAFEARRAY * *namespaceRoots);
	HRESULT(STDMETHODCALLTYPE * put_NamespaceRoots) (IFsrmFileManagementJob * This, SAFEARRAY * namespaceRoots);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IFsrmFileManagementJob * This, VARIANT_BOOL * enabled);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (IFsrmFileManagementJob * This, VARIANT_BOOL enabled);
	HRESULT(STDMETHODCALLTYPE * get_OperationType) (IFsrmFileManagementJob * This, FsrmFileManagementType * operationType);
	HRESULT(STDMETHODCALLTYPE * put_OperationType) (IFsrmFileManagementJob * This, FsrmFileManagementType operationType);
	HRESULT(STDMETHODCALLTYPE * get_ExpirationDirectory) (IFsrmFileManagementJob * This, BSTR * expirationDirectory);
	HRESULT(STDMETHODCALLTYPE * put_ExpirationDirectory) (IFsrmFileManagementJob * This, BSTR expirationDirectory);
	HRESULT(STDMETHODCALLTYPE * get_CustomAction) (IFsrmFileManagementJob * This, IFsrmActionCommand ** action);
	HRESULT(STDMETHODCALLTYPE * get_Notifications) (IFsrmFileManagementJob * This, SAFEARRAY * *notifications);
	HRESULT(STDMETHODCALLTYPE * get_Logging) (IFsrmFileManagementJob * This, long *loggingFlags);
	HRESULT(STDMETHODCALLTYPE * put_Logging) (IFsrmFileManagementJob * This, long loggingFlags);
	HRESULT(STDMETHODCALLTYPE * get_ReportEnabled) (IFsrmFileManagementJob * This, VARIANT_BOOL * reportEnabled);
	HRESULT(STDMETHODCALLTYPE * put_ReportEnabled) (IFsrmFileManagementJob * This, VARIANT_BOOL reportEnabled);
	HRESULT(STDMETHODCALLTYPE * get_Formats) (IFsrmFileManagementJob * This, SAFEARRAY * *formats);
	HRESULT(STDMETHODCALLTYPE * put_Formats) (IFsrmFileManagementJob * This, SAFEARRAY * formats);
	HRESULT(STDMETHODCALLTYPE * get_MailTo) (IFsrmFileManagementJob * This, BSTR * mailTo);
	HRESULT(STDMETHODCALLTYPE * put_MailTo) (IFsrmFileManagementJob * This, BSTR mailTo);
	HRESULT(STDMETHODCALLTYPE * get_DaysSinceFileCreated) (IFsrmFileManagementJob * This, long *daysSinceCreation);
	HRESULT(STDMETHODCALLTYPE * put_DaysSinceFileCreated) (IFsrmFileManagementJob * This, long daysSinceCreation);
	HRESULT(STDMETHODCALLTYPE * get_DaysSinceFileLastAccessed) (IFsrmFileManagementJob * This, long *daysSinceAccess);
	HRESULT(STDMETHODCALLTYPE * put_DaysSinceFileLastAccessed) (IFsrmFileManagementJob * This, long daysSinceAccess);
	HRESULT(STDMETHODCALLTYPE * get_DaysSinceFileLastModified) (IFsrmFileManagementJob * This, long *daysSinceModify);
	HRESULT(STDMETHODCALLTYPE * put_DaysSinceFileLastModified) (IFsrmFileManagementJob * This, long daysSinceModify);
	HRESULT(STDMETHODCALLTYPE * get_PropertyConditions) (IFsrmFileManagementJob * This, IFsrmCollection ** propertyConditions);
	HRESULT(STDMETHODCALLTYPE * get_FromDate) (IFsrmFileManagementJob * This, DATE * fromDate);
	HRESULT(STDMETHODCALLTYPE * put_FromDate) (IFsrmFileManagementJob * This, DATE fromDate);
	HRESULT(STDMETHODCALLTYPE * get_Task) (IFsrmFileManagementJob * This, BSTR * taskName);
	HRESULT(STDMETHODCALLTYPE * put_Task) (IFsrmFileManagementJob * This, BSTR taskName);
	HRESULT(STDMETHODCALLTYPE * get_Parameters) (IFsrmFileManagementJob * This, SAFEARRAY * *parameters);
	HRESULT(STDMETHODCALLTYPE * put_Parameters) (IFsrmFileManagementJob * This, SAFEARRAY * parameters);
	HRESULT(STDMETHODCALLTYPE * get_RunningStatus) (IFsrmFileManagementJob * This, FsrmReportRunningStatus * runningStatus);
	HRESULT(STDMETHODCALLTYPE * get_LastError) (IFsrmFileManagementJob * This, BSTR * lastError);
	HRESULT(STDMETHODCALLTYPE * get_LastReportPathWithoutExtension) (IFsrmFileManagementJob * This, BSTR * path);
	HRESULT(STDMETHODCALLTYPE * get_LastRun) (IFsrmFileManagementJob * This, DATE * lastRun);
	HRESULT(STDMETHODCALLTYPE * get_FileNamePattern) (IFsrmFileManagementJob * This, BSTR * fileNamePattern);
	HRESULT(STDMETHODCALLTYPE * put_FileNamePattern) (IFsrmFileManagementJob * This, BSTR fileNamePattern);
	HRESULT(STDMETHODCALLTYPE * Run) (IFsrmFileManagementJob * This, FsrmReportGenerationContext context);
	HRESULT(STDMETHODCALLTYPE * WaitForCompletion) (IFsrmFileManagementJob * This, long waitSeconds, VARIANT_BOOL * completed);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IFsrmFileManagementJob * This);
	HRESULT(STDMETHODCALLTYPE * AddNotification) (IFsrmFileManagementJob * This, long days);
	HRESULT(STDMETHODCALLTYPE * DeleteNotification) (IFsrmFileManagementJob * This, long days);
	HRESULT(STDMETHODCALLTYPE * ModifyNotification) (IFsrmFileManagementJob * This, long days, long newDays);
	HRESULT(STDMETHODCALLTYPE * CreateNotificationAction) (IFsrmFileManagementJob * This, long days, FsrmActionType actionType, IFsrmAction ** action);
	HRESULT(STDMETHODCALLTYPE * EnumNotificationActions) (IFsrmFileManagementJob * This, long days, IFsrmCollection ** actions);
	HRESULT(STDMETHODCALLTYPE * CreatePropertyCondition) (IFsrmFileManagementJob * This, BSTR name, IFsrmPropertyCondition ** propertyCondition);
	HRESULT(STDMETHODCALLTYPE * CreateCustomAction) (IFsrmFileManagementJob * This, IFsrmActionCommand ** customAction);
	END_INTERFACE
}  IFsrmFileManagementJobVtbl;
interface IFsrmFileManagementJob
{
	CONST_VTBL struct IFsrmFileManagementJobVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmFileManagementJob_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmFileManagementJob_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmFileManagementJob_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmFileManagementJob_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmFileManagementJob_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmFileManagementJob_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmFileManagementJob_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmFileManagementJob_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmFileManagementJob_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmFileManagementJob_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmFileManagementJob_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmFileManagementJob_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmFileManagementJob_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmFileManagementJob_put_Name(This,name)( (This)->lpVtbl -> put_Name(This,name) )
#define IFsrmFileManagementJob_get_NamespaceRoots(This,namespaceRoots)( (This)->lpVtbl -> get_NamespaceRoots(This,namespaceRoots) )
#define IFsrmFileManagementJob_put_NamespaceRoots(This,namespaceRoots)( (This)->lpVtbl -> put_NamespaceRoots(This,namespaceRoots) )
#define IFsrmFileManagementJob_get_Enabled(This,enabled)( (This)->lpVtbl -> get_Enabled(This,enabled) )
#define IFsrmFileManagementJob_put_Enabled(This,enabled)( (This)->lpVtbl -> put_Enabled(This,enabled) )
#define IFsrmFileManagementJob_get_OperationType(This,operationType)( (This)->lpVtbl -> get_OperationType(This,operationType) )
#define IFsrmFileManagementJob_put_OperationType(This,operationType)( (This)->lpVtbl -> put_OperationType(This,operationType) )
#define IFsrmFileManagementJob_get_ExpirationDirectory(This,expirationDirectory)( (This)->lpVtbl -> get_ExpirationDirectory(This,expirationDirectory) )
#define IFsrmFileManagementJob_put_ExpirationDirectory(This,expirationDirectory)( (This)->lpVtbl -> put_ExpirationDirectory(This,expirationDirectory) )
#define IFsrmFileManagementJob_get_CustomAction(This,action)( (This)->lpVtbl -> get_CustomAction(This,action) )
#define IFsrmFileManagementJob_get_Notifications(This,notifications)( (This)->lpVtbl -> get_Notifications(This,notifications) )
#define IFsrmFileManagementJob_get_Logging(This,loggingFlags)( (This)->lpVtbl -> get_Logging(This,loggingFlags) )
#define IFsrmFileManagementJob_put_Logging(This,loggingFlags)( (This)->lpVtbl -> put_Logging(This,loggingFlags) )
#define IFsrmFileManagementJob_get_ReportEnabled(This,reportEnabled)( (This)->lpVtbl -> get_ReportEnabled(This,reportEnabled) )
#define IFsrmFileManagementJob_put_ReportEnabled(This,reportEnabled)( (This)->lpVtbl -> put_ReportEnabled(This,reportEnabled) )
#define IFsrmFileManagementJob_get_Formats(This,formats)( (This)->lpVtbl -> get_Formats(This,formats) )
#define IFsrmFileManagementJob_put_Formats(This,formats)( (This)->lpVtbl -> put_Formats(This,formats) )
#define IFsrmFileManagementJob_get_MailTo(This,mailTo)( (This)->lpVtbl -> get_MailTo(This,mailTo) )
#define IFsrmFileManagementJob_put_MailTo(This,mailTo)( (This)->lpVtbl -> put_MailTo(This,mailTo) )
#define IFsrmFileManagementJob_get_DaysSinceFileCreated(This,daysSinceCreation)( (This)->lpVtbl -> get_DaysSinceFileCreated(This,daysSinceCreation) )
#define IFsrmFileManagementJob_put_DaysSinceFileCreated(This,daysSinceCreation)( (This)->lpVtbl -> put_DaysSinceFileCreated(This,daysSinceCreation) )
#define IFsrmFileManagementJob_get_DaysSinceFileLastAccessed(This,daysSinceAccess)( (This)->lpVtbl -> get_DaysSinceFileLastAccessed(This,daysSinceAccess) )
#define IFsrmFileManagementJob_put_DaysSinceFileLastAccessed(This,daysSinceAccess)( (This)->lpVtbl -> put_DaysSinceFileLastAccessed(This,daysSinceAccess) )
#define IFsrmFileManagementJob_get_DaysSinceFileLastModified(This,daysSinceModify)( (This)->lpVtbl -> get_DaysSinceFileLastModified(This,daysSinceModify) )
#define IFsrmFileManagementJob_put_DaysSinceFileLastModified(This,daysSinceModify)( (This)->lpVtbl -> put_DaysSinceFileLastModified(This,daysSinceModify) )
#define IFsrmFileManagementJob_get_PropertyConditions(This,propertyConditions)( (This)->lpVtbl -> get_PropertyConditions(This,propertyConditions) )
#define IFsrmFileManagementJob_get_FromDate(This,fromDate)( (This)->lpVtbl -> get_FromDate(This,fromDate) )
#define IFsrmFileManagementJob_put_FromDate(This,fromDate)( (This)->lpVtbl -> put_FromDate(This,fromDate) )
#define IFsrmFileManagementJob_get_Task(This,taskName)( (This)->lpVtbl -> get_Task(This,taskName) )
#define IFsrmFileManagementJob_put_Task(This,taskName)( (This)->lpVtbl -> put_Task(This,taskName) )
#define IFsrmFileManagementJob_get_Parameters(This,parameters)( (This)->lpVtbl -> get_Parameters(This,parameters) )
#define IFsrmFileManagementJob_put_Parameters(This,parameters)( (This)->lpVtbl -> put_Parameters(This,parameters) )
#define IFsrmFileManagementJob_get_RunningStatus(This,runningStatus)( (This)->lpVtbl -> get_RunningStatus(This,runningStatus) )
#define IFsrmFileManagementJob_get_LastError(This,lastError)( (This)->lpVtbl -> get_LastError(This,lastError) )
#define IFsrmFileManagementJob_get_LastReportPathWithoutExtension(This,path)( (This)->lpVtbl -> get_LastReportPathWithoutExtension(This,path) )
#define IFsrmFileManagementJob_get_LastRun(This,lastRun)( (This)->lpVtbl -> get_LastRun(This,lastRun) )
#define IFsrmFileManagementJob_get_FileNamePattern(This,fileNamePattern)( (This)->lpVtbl -> get_FileNamePattern(This,fileNamePattern) )
#define IFsrmFileManagementJob_put_FileNamePattern(This,fileNamePattern)( (This)->lpVtbl -> put_FileNamePattern(This,fileNamePattern) )
#define IFsrmFileManagementJob_Run(This,context)( (This)->lpVtbl -> Run(This,context) )
#define IFsrmFileManagementJob_WaitForCompletion(This,waitSeconds,completed)( (This)->lpVtbl -> WaitForCompletion(This,waitSeconds,completed) )
#define IFsrmFileManagementJob_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#define IFsrmFileManagementJob_AddNotification(This,days)( (This)->lpVtbl -> AddNotification(This,days) )
#define IFsrmFileManagementJob_DeleteNotification(This,days)( (This)->lpVtbl -> DeleteNotification(This,days) )
#define IFsrmFileManagementJob_ModifyNotification(This,days,newDays)( (This)->lpVtbl -> ModifyNotification(This,days,newDays) )
#define IFsrmFileManagementJob_CreateNotificationAction(This,days,actionType,action)( (This)->lpVtbl -> CreateNotificationAction(This,days,actionType,action) )
#define IFsrmFileManagementJob_EnumNotificationActions(This,days,actions)( (This)->lpVtbl -> EnumNotificationActions(This,days,actions) )
#define IFsrmFileManagementJob_CreatePropertyCondition(This,name,propertyCondition)( (This)->lpVtbl -> CreatePropertyCondition(This,name,propertyCondition) )
#define IFsrmFileManagementJob_CreateCustomAction(This,customAction)( (This)->lpVtbl -> CreateCustomAction(This,customAction) )
#endif
#endif
#ifndef __IFsrmPropertyCondition_INTERFACE_DEFINED__
#define __IFsrmPropertyCondition_INTERFACE_DEFINED__
extern const IID IID_IFsrmPropertyCondition;
typedef struct IFsrmPropertyConditionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmPropertyCondition * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmPropertyCondition * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmPropertyCondition * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmPropertyCondition * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmPropertyCondition * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmPropertyCondition * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmPropertyCondition * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmPropertyCondition * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFsrmPropertyCondition * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IFsrmPropertyCondition * This, FsrmPropertyConditionType * type);
	HRESULT(STDMETHODCALLTYPE * put_Type) (IFsrmPropertyCondition * This, FsrmPropertyConditionType type);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IFsrmPropertyCondition * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * put_Value) (IFsrmPropertyCondition * This, BSTR value);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmPropertyCondition * This);
	END_INTERFACE
}  IFsrmPropertyConditionVtbl;
interface IFsrmPropertyCondition
{
	CONST_VTBL struct IFsrmPropertyConditionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmPropertyCondition_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmPropertyCondition_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmPropertyCondition_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmPropertyCondition_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmPropertyCondition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmPropertyCondition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmPropertyCondition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmPropertyCondition_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmPropertyCondition_put_Name(This,name)( (This)->lpVtbl -> put_Name(This,name) )
#define IFsrmPropertyCondition_get_Type(This,type)( (This)->lpVtbl -> get_Type(This,type) )
#define IFsrmPropertyCondition_put_Type(This,type)( (This)->lpVtbl -> put_Type(This,type) )
#define IFsrmPropertyCondition_get_Value(This,value)( (This)->lpVtbl -> get_Value(This,value) )
#define IFsrmPropertyCondition_put_Value(This,value)( (This)->lpVtbl -> put_Value(This,value) )
#define IFsrmPropertyCondition_Delete(This)( (This)->lpVtbl -> Delete(This) )
#endif
#endif
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
