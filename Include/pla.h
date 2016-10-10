/*+@@file@@----------------------------------------------------------------*//*!
 \file		pla.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 12 00:26:16 2016
 \date		Modified on Mon Sep 12 00:26:16 2016
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
#ifndef __pla_h__
#define __pla_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDataCollectorSet_FWD_DEFINED__
#define __IDataCollectorSet_FWD_DEFINED__
typedef interface IDataCollectorSet IDataCollectorSet;
#endif
#ifndef __IDataManager_FWD_DEFINED__
#define __IDataManager_FWD_DEFINED__
typedef interface IDataManager IDataManager;
#endif
#ifndef __IFolderAction_FWD_DEFINED__
#define __IFolderAction_FWD_DEFINED__
typedef interface IFolderAction IFolderAction;
#endif
#ifndef __IFolderActionCollection_FWD_DEFINED__
#define __IFolderActionCollection_FWD_DEFINED__
typedef interface IFolderActionCollection IFolderActionCollection;
#endif
#ifndef __IDataCollector_FWD_DEFINED__
#define __IDataCollector_FWD_DEFINED__
typedef interface IDataCollector IDataCollector;
#endif
#ifndef __IPerformanceCounterDataCollector_FWD_DEFINED__
#define __IPerformanceCounterDataCollector_FWD_DEFINED__
typedef interface IPerformanceCounterDataCollector IPerformanceCounterDataCollector;
#endif
#ifndef __ITraceDataCollector_FWD_DEFINED__
#define __ITraceDataCollector_FWD_DEFINED__
typedef interface ITraceDataCollector ITraceDataCollector;
#endif
#ifndef __IConfigurationDataCollector_FWD_DEFINED__
#define __IConfigurationDataCollector_FWD_DEFINED__
typedef interface IConfigurationDataCollector IConfigurationDataCollector;
#endif
#ifndef __IAlertDataCollector_FWD_DEFINED__
#define __IAlertDataCollector_FWD_DEFINED__
typedef interface IAlertDataCollector IAlertDataCollector;
#endif
#ifndef __IApiTracingDataCollector_FWD_DEFINED__
#define __IApiTracingDataCollector_FWD_DEFINED__
typedef interface IApiTracingDataCollector IApiTracingDataCollector;
#endif
#ifndef __IDataCollectorCollection_FWD_DEFINED__
#define __IDataCollectorCollection_FWD_DEFINED__
typedef interface IDataCollectorCollection IDataCollectorCollection;
#endif
#ifndef __IDataCollectorSetCollection_FWD_DEFINED__
#define __IDataCollectorSetCollection_FWD_DEFINED__
typedef interface IDataCollectorSetCollection IDataCollectorSetCollection;
#endif
#ifndef __ITraceDataProvider_FWD_DEFINED__
#define __ITraceDataProvider_FWD_DEFINED__
typedef interface ITraceDataProvider ITraceDataProvider;
#endif
#ifndef __ITraceDataProviderCollection_FWD_DEFINED__
#define __ITraceDataProviderCollection_FWD_DEFINED__
typedef interface ITraceDataProviderCollection ITraceDataProviderCollection;
#endif
#ifndef __ISchedule_FWD_DEFINED__
#define __ISchedule_FWD_DEFINED__
typedef interface ISchedule ISchedule;
#endif
#ifndef __IScheduleCollection_FWD_DEFINED__
#define __IScheduleCollection_FWD_DEFINED__
typedef interface IScheduleCollection IScheduleCollection;
#endif
#ifndef __IValueMapItem_FWD_DEFINED__
#define __IValueMapItem_FWD_DEFINED__
typedef interface IValueMapItem IValueMapItem;
#endif
#ifndef __IValueMap_FWD_DEFINED__
#define __IValueMap_FWD_DEFINED__
typedef interface IValueMap IValueMap;
#endif
#ifndef __DataCollectorSet_FWD_DEFINED__
#define __DataCollectorSet_FWD_DEFINED__
typedef struct DataCollectorSet DataCollectorSet;
#endif
#ifndef __TraceSession_FWD_DEFINED__
#define __TraceSession_FWD_DEFINED__
typedef struct TraceSession TraceSession;
#endif
#ifndef __TraceSessionCollection_FWD_DEFINED__
#define __TraceSessionCollection_FWD_DEFINED__
typedef struct TraceSessionCollection TraceSessionCollection;
#endif
#ifndef __TraceDataProvider_FWD_DEFINED__
#define __TraceDataProvider_FWD_DEFINED__
typedef struct TraceDataProvider TraceDataProvider;
#endif
#ifndef __TraceDataProviderCollection_FWD_DEFINED__
#define __TraceDataProviderCollection_FWD_DEFINED__
typedef struct TraceDataProviderCollection TraceDataProviderCollection;
#endif
#ifndef __DataCollectorSetCollection_FWD_DEFINED__
#define __DataCollectorSetCollection_FWD_DEFINED__
typedef struct DataCollectorSetCollection DataCollectorSetCollection;
#endif
#ifndef __LegacyDataCollectorSet_FWD_DEFINED__
#define __LegacyDataCollectorSet_FWD_DEFINED__
typedef struct LegacyDataCollectorSet LegacyDataCollectorSet;
#endif
#ifndef __LegacyDataCollectorSetCollection_FWD_DEFINED__
#define __LegacyDataCollectorSetCollection_FWD_DEFINED__
typedef struct LegacyDataCollectorSetCollection LegacyDataCollectorSetCollection;
#endif
#ifndef __LegacyTraceSession_FWD_DEFINED__
#define __LegacyTraceSession_FWD_DEFINED__
typedef struct LegacyTraceSession LegacyTraceSession;
#endif
#ifndef __LegacyTraceSessionCollection_FWD_DEFINED__
#define __LegacyTraceSessionCollection_FWD_DEFINED__
typedef struct LegacyTraceSessionCollection LegacyTraceSessionCollection;
#endif
#ifndef __ServerDataCollectorSet_FWD_DEFINED__
#define __ServerDataCollectorSet_FWD_DEFINED__
typedef struct ServerDataCollectorSet ServerDataCollectorSet;
#endif
#ifndef __ServerDataCollectorSetCollection_FWD_DEFINED__
#define __ServerDataCollectorSetCollection_FWD_DEFINED__
typedef struct ServerDataCollectorSetCollection ServerDataCollectorSetCollection;
#endif
#ifndef __SystemDataCollectorSet_FWD_DEFINED__
#define __SystemDataCollectorSet_FWD_DEFINED__
typedef struct SystemDataCollectorSet SystemDataCollectorSet;
#endif
#ifndef __SystemDataCollectorSetCollection_FWD_DEFINED__
#define __SystemDataCollectorSetCollection_FWD_DEFINED__
typedef struct SystemDataCollectorSetCollection SystemDataCollectorSetCollection;
#endif
#ifndef __BootTraceSession_FWD_DEFINED__
#define __BootTraceSession_FWD_DEFINED__
typedef struct BootTraceSession BootTraceSession;
#endif
#ifndef __BootTraceSessionCollection_FWD_DEFINED__
#define __BootTraceSessionCollection_FWD_DEFINED__
typedef struct BootTraceSessionCollection BootTraceSessionCollection;
#endif
#include "unknwn.h"
#include "oaidl.h"
#ifndef __PlaLibrary_LIBRARY_DEFINED__
#define __PlaLibrary_LIBRARY_DEFINED__
typedef DECLSPEC_UUID("03837504-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0000_0000_0001
{
	plaPerformanceCounter = 0,
	plaTrace = 1,
	plaConfiguration = 2,
	plaAlert = 3,
	plaApiTrace = 4
} DataCollectorType;
typedef DECLSPEC_UUID("03837507-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0000_0000_0002
{
	plaCommaSeparated = 0,
	plaTabSeparated = 1,
	plaSql = 2,
	plaBinary = 3
} FileFormat;
typedef DECLSPEC_UUID("03837508-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0000_0000_0003
{
	plaNone = 0,
	plaPattern = 0x1,
	plaComputer = 0x2,
	plaMonthDayHour = 0x100,
	plaSerialNumber = 0x200,
	plaYearDayOfYear = 0x400,
	plaYearMonth = 0x800,
	plaYearMonthDay = 0x1000,
	plaYearMonthDayHour = 0x2000,
	plaMonthDayHourMinute = 0x4000
} AutoPathFormat;
typedef DECLSPEC_UUID("0383750a-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0000_0000_0004
{
	plaStopped = 0,
	plaRunning = 1,
	plaCompiling = 2,
	plaPending = 3,
	plaUndefined = 4
} DataCollectorSetStatus;
typedef DECLSPEC_UUID("0383750d-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0000_0000_0005
{
	plaTimeStamp = 0,
	plaPerformance = 1,
	plaSystem = 2,
	plaCycle = 3
} ClockType;
typedef DECLSPEC_UUID("0383750e-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0000_0000_0006
{
	plaFile = 0x1,
	plaRealTime = 0x2,
	plaBoth = 0x3,
	plaBuffering = 0x4
} StreamMode;
typedef DECLSPEC_UUID("0383751f-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0000_0000_0007
{
	plaCreateNew = 0x1,
	plaModify = 0x2,
	plaCreateOrModify = 0x3,
	plaUpdateRunningInstance = 0x10,
	plaFlushTrace = 0x20,
	plaValidateOnly = 0x1000
} CommitMode;
typedef DECLSPEC_UUID("03837535-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0000_0000_0008
{
	plaIndex = 1,
	plaFlag = 2,
	plaFlagArray = 3,
	plaValidation = 4
} ValueMapType;
typedef DECLSPEC_UUID("0383753b-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0000_0000_0009
{
	plaRunOnce = 0,
	plaSunday = 0x1,
	plaMonday = 0x2,
	plaTuesday = 0x4,
	plaWednesday = 0x8,
	plaThursday = 0x10,
	plaFriday = 0x20,
	plaSaturday = 0x40,
	plaEveryday = 0x7f
} WeekDays;
typedef DECLSPEC_UUID("0383753f-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0000_0000_0010
{
	plaDeleteLargest = 0,
	plaDeleteOldest = 1
} ResourcePolicy;
typedef DECLSPEC_UUID("03837540-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0000_0000_0011
{
	plaCreateReport = 0x1,
	plaRunRules = 0x2,
	plaCreateHtml = 0x4,
	plaFolderActions = 0x8,
	plaResourceFreeing = 0x10
} DataManagerSteps;
typedef DECLSPEC_UUID("03837542-098b-11d8-9414-505054503030")
enum __MIDL___MIDL_itf_pla_0000_0000_0012
{
	plaCreateCab = 0x1,
	plaDeleteData = 0x2,
	plaSendCab = 0x4,
	plaDeleteCab = 0x8,
	plaDeleteReport = 0x10
} FolderActionSteps;
#define PLA_FUNCTION    HRESULT __stdcall
PLA_FUNCTION PlaExpandTaskArguments(VARIANT vDataSet, BSTR *args);
#define PLA_CAPABILITY_LOCAL                0x10000000
#define PLA_CAPABILITY_V1_SVC               0x00000001
#define PLA_CAPABILITY_V1_SESSION           0x00000002
#define PLA_CAPABILITY_V1_SYSTEM            0x00000004
#define PLA_CAPABILITY_LEGACY_SESSION       0x00000008
#define PLA_CAPABILITY_LEGACY_SVC           0x00000010
#define PLA_CAPABILITY_AUTOLOGGER           0x00000020
#define PLAL_ALERT_CMD_LINE_SINGLE    ((DWORD)0x00000100)
#define PLAL_ALERT_CMD_LINE_A_NAME    ((DWORD)0x00000200)
#define PLAL_ALERT_CMD_LINE_C_NAME    ((DWORD)0x00000400)
#define PLAL_ALERT_CMD_LINE_D_TIME    ((DWORD)0x00000800)
#define PLAL_ALERT_CMD_LINE_L_VAL     ((DWORD)0x00001000)
#define PLAL_ALERT_CMD_LINE_M_VAL     ((DWORD)0x00002000)
#define PLAL_ALERT_CMD_LINE_U_TEXT    ((DWORD)0x00004000)
#define PLAL_ALERT_CMD_LINE_MASK      ((DWORD)0x00007F00)
PLA_FUNCTION PlaGetServerCapabilities(BSTR Server, PDWORD Capabilites);
PLA_FUNCTION PlaGetLegacyAlertActionsStringFromFlags(DWORD dwFlags, BSTR *pbstrAlertStr);
PLA_FUNCTION PlaGetLegacyAlertActionsFlagsFromString(PCWSTR pszArguments, LPDWORD pdwFlags);
typedef VOID(*PLA_CABEXTRACT_CALLBACK) (PCWSTR FileName, PVOID Context);
HRESULT PlaExtractCabinet(PCWSTR CabFileName, PCWSTR DestPath, PLA_CABEXTRACT_CALLBACK Callback, PVOID Context);
HRESULT PlaDeleteReport(PCWSTR Folder);
extern const IID LIBID_PlaLibrary;
#ifndef __IDataCollectorSet_INTERFACE_DEFINED__
#define __IDataCollectorSet_INTERFACE_DEFINED__
extern const IID IID_IDataCollectorSet;
typedef struct IDataCollectorSetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDataCollectorSet *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDataCollectorSet *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDataCollectorSet *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IDataCollectorSet *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IDataCollectorSet *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IDataCollectorSet *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IDataCollectorSet *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_DataCollectors) (IDataCollectorSet *This, IDataCollectorCollection **collectors);
	HRESULT(STDMETHODCALLTYPE *get_Duration) (IDataCollectorSet *This, unsigned long *seconds);
	HRESULT(STDMETHODCALLTYPE *put_Duration) (IDataCollectorSet *This, unsigned long seconds);
	HRESULT(STDMETHODCALLTYPE *get_Description) (IDataCollectorSet *This, BSTR *description);
	HRESULT(STDMETHODCALLTYPE *put_Description) (IDataCollectorSet *This, BSTR description);
	HRESULT(STDMETHODCALLTYPE *get_DescriptionUnresolved) (IDataCollectorSet *This, BSTR *Descr);
	HRESULT(STDMETHODCALLTYPE *get_DisplayName) (IDataCollectorSet *This, BSTR *DisplayName);
	HRESULT(STDMETHODCALLTYPE *put_DisplayName) (IDataCollectorSet *This, BSTR DisplayName);
	HRESULT(STDMETHODCALLTYPE *get_DisplayNameUnresolved) (IDataCollectorSet *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *get_Keywords) (IDataCollectorSet *This, SAFEARRAY **keywords);
	HRESULT(STDMETHODCALLTYPE *put_Keywords) (IDataCollectorSet *This, SAFEARRAY *keywords);
	HRESULT(STDMETHODCALLTYPE *get_LatestOutputLocation) (IDataCollectorSet *This, BSTR *path);
	HRESULT(STDMETHODCALLTYPE *put_LatestOutputLocation) (IDataCollectorSet *This, BSTR path);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IDataCollectorSet *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *get_OutputLocation) (IDataCollectorSet *This, BSTR *path);
	HRESULT(STDMETHODCALLTYPE *get_RootPath) (IDataCollectorSet *This, BSTR *folder);
	HRESULT(STDMETHODCALLTYPE *put_RootPath) (IDataCollectorSet *This, BSTR folder);
	HRESULT(STDMETHODCALLTYPE *get_Segment) (IDataCollectorSet *This, VARIANT_BOOL *segment);
	HRESULT(STDMETHODCALLTYPE *put_Segment) (IDataCollectorSet *This, VARIANT_BOOL segment);
	HRESULT(STDMETHODCALLTYPE *get_SegmentMaxDuration) (IDataCollectorSet *This, unsigned long *seconds);
	HRESULT(STDMETHODCALLTYPE *put_SegmentMaxDuration) (IDataCollectorSet *This, unsigned long seconds);
	HRESULT(STDMETHODCALLTYPE *get_SegmentMaxSize) (IDataCollectorSet *This, unsigned long *size);
	HRESULT(STDMETHODCALLTYPE *put_SegmentMaxSize) (IDataCollectorSet *This, unsigned long size);
	HRESULT(STDMETHODCALLTYPE *get_SerialNumber) (IDataCollectorSet *This, unsigned long *index);
	HRESULT(STDMETHODCALLTYPE *put_SerialNumber) (IDataCollectorSet *This, unsigned long index);
	HRESULT(STDMETHODCALLTYPE *get_Server) (IDataCollectorSet *This, BSTR *server);
	HRESULT(STDMETHODCALLTYPE *get_Status) (IDataCollectorSet *This, DataCollectorSetStatus *status);
	HRESULT(STDMETHODCALLTYPE *get_Subdirectory) (IDataCollectorSet *This, BSTR *folder);
	HRESULT(STDMETHODCALLTYPE *put_Subdirectory) (IDataCollectorSet *This, BSTR folder);
	HRESULT(STDMETHODCALLTYPE *get_SubdirectoryFormat) (IDataCollectorSet *This, AutoPathFormat *format);
	HRESULT(STDMETHODCALLTYPE *put_SubdirectoryFormat) (IDataCollectorSet *This, AutoPathFormat format);
	HRESULT(STDMETHODCALLTYPE *get_SubdirectoryFormatPattern) (IDataCollectorSet *This, BSTR *pattern);
	HRESULT(STDMETHODCALLTYPE *put_SubdirectoryFormatPattern) (IDataCollectorSet *This, BSTR pattern);
	HRESULT(STDMETHODCALLTYPE *get_Task) (IDataCollectorSet *This, BSTR *task);
	HRESULT(STDMETHODCALLTYPE *put_Task) (IDataCollectorSet *This, BSTR task);
	HRESULT(STDMETHODCALLTYPE *get_TaskRunAsSelf) (IDataCollectorSet *This, VARIANT_BOOL *RunAsSelf);
	HRESULT(STDMETHODCALLTYPE *put_TaskRunAsSelf) (IDataCollectorSet *This, VARIANT_BOOL RunAsSelf);
	HRESULT(STDMETHODCALLTYPE *get_TaskArguments) (IDataCollectorSet *This, BSTR *task);
	HRESULT(STDMETHODCALLTYPE *put_TaskArguments) (IDataCollectorSet *This, BSTR task);
	HRESULT(STDMETHODCALLTYPE *get_TaskUserTextArguments) (IDataCollectorSet *This, BSTR *UserText);
	HRESULT(STDMETHODCALLTYPE *put_TaskUserTextArguments) (IDataCollectorSet *This, BSTR UserText);
	HRESULT(STDMETHODCALLTYPE *get_Schedules) (IDataCollectorSet *This, IScheduleCollection **ppSchedules);
	HRESULT(STDMETHODCALLTYPE *get_SchedulesEnabled) (IDataCollectorSet *This, VARIANT_BOOL *enabled);
	HRESULT(STDMETHODCALLTYPE *put_SchedulesEnabled) (IDataCollectorSet *This, VARIANT_BOOL enabled);
	HRESULT(STDMETHODCALLTYPE *get_UserAccount) (IDataCollectorSet *This, BSTR *user);
	HRESULT(STDMETHODCALLTYPE *get_Xml) (IDataCollectorSet *This, BSTR *xml);
	HRESULT(STDMETHODCALLTYPE *get_Security) (IDataCollectorSet *This, BSTR *pbstrSecurity);
	HRESULT(STDMETHODCALLTYPE *put_Security) (IDataCollectorSet *This, BSTR bstrSecurity);
	HRESULT(STDMETHODCALLTYPE *get_StopOnCompletion) (IDataCollectorSet *This, VARIANT_BOOL *Stop);
	HRESULT(STDMETHODCALLTYPE *put_StopOnCompletion) (IDataCollectorSet *This, VARIANT_BOOL Stop);
	HRESULT(STDMETHODCALLTYPE *get_DataManager) (IDataCollectorSet *This, IDataManager **DataManager);
	HRESULT(STDMETHODCALLTYPE *SetCredentials) (IDataCollectorSet *This, BSTR user, BSTR password);
	HRESULT(STDMETHODCALLTYPE *Query) (IDataCollectorSet *This, BSTR name, BSTR server);
	HRESULT(STDMETHODCALLTYPE *Commit) (IDataCollectorSet *This, BSTR name, BSTR server, CommitMode mode, IValueMap **validation);
	HRESULT(STDMETHODCALLTYPE *Delete) (IDataCollectorSet *This);
	HRESULT(STDMETHODCALLTYPE *Start) (IDataCollectorSet *This, VARIANT_BOOL Synchronous);
	HRESULT(STDMETHODCALLTYPE *Stop) (IDataCollectorSet *This, VARIANT_BOOL Synchronous);
	HRESULT(STDMETHODCALLTYPE *SetXml) (IDataCollectorSet *This, BSTR xml, IValueMap **validation);
	HRESULT(STDMETHODCALLTYPE *SetValue) (IDataCollectorSet *This, BSTR key, BSTR value);
	HRESULT(STDMETHODCALLTYPE *GetValue) (IDataCollectorSet *This, BSTR key, BSTR *value);
	END_INTERFACE
}  IDataCollectorSetVtbl;
interface IDataCollectorSet
{
	CONST_VTBL struct IDataCollectorSetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDataCollectorSet_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDataCollectorSet_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDataCollectorSet_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDataCollectorSet_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDataCollectorSet_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDataCollectorSet_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDataCollectorSet_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDataCollectorSet_get_DataCollectors(This,collectors) ( (This)->lpVtbl -> get_DataCollectors(This,collectors) )
#define IDataCollectorSet_get_Duration(This,seconds) ( (This)->lpVtbl -> get_Duration(This,seconds) )
#define IDataCollectorSet_put_Duration(This,seconds) ( (This)->lpVtbl -> put_Duration(This,seconds) )
#define IDataCollectorSet_get_Description(This,description) ( (This)->lpVtbl -> get_Description(This,description) )
#define IDataCollectorSet_put_Description(This,description) ( (This)->lpVtbl -> put_Description(This,description) )
#define IDataCollectorSet_get_DescriptionUnresolved(This,Descr) ( (This)->lpVtbl -> get_DescriptionUnresolved(This,Descr) )
#define IDataCollectorSet_get_DisplayName(This,DisplayName) ( (This)->lpVtbl -> get_DisplayName(This,DisplayName) )
#define IDataCollectorSet_put_DisplayName(This,DisplayName) ( (This)->lpVtbl -> put_DisplayName(This,DisplayName) )
#define IDataCollectorSet_get_DisplayNameUnresolved(This,name) ( (This)->lpVtbl -> get_DisplayNameUnresolved(This,name) )
#define IDataCollectorSet_get_Keywords(This,keywords) ( (This)->lpVtbl -> get_Keywords(This,keywords) )
#define IDataCollectorSet_put_Keywords(This,keywords) ( (This)->lpVtbl -> put_Keywords(This,keywords) )
#define IDataCollectorSet_get_LatestOutputLocation(This,path) ( (This)->lpVtbl -> get_LatestOutputLocation(This,path) )
#define IDataCollectorSet_put_LatestOutputLocation(This,path) ( (This)->lpVtbl -> put_LatestOutputLocation(This,path) )
#define IDataCollectorSet_get_Name(This,name) ( (This)->lpVtbl -> get_Name(This,name) )
#define IDataCollectorSet_get_OutputLocation(This,path) ( (This)->lpVtbl -> get_OutputLocation(This,path) )
#define IDataCollectorSet_get_RootPath(This,folder) ( (This)->lpVtbl -> get_RootPath(This,folder) )
#define IDataCollectorSet_put_RootPath(This,folder) ( (This)->lpVtbl -> put_RootPath(This,folder) )
#define IDataCollectorSet_get_Segment(This,segment) ( (This)->lpVtbl -> get_Segment(This,segment) )
#define IDataCollectorSet_put_Segment(This,segment) ( (This)->lpVtbl -> put_Segment(This,segment) )
#define IDataCollectorSet_get_SegmentMaxDuration(This,seconds) ( (This)->lpVtbl -> get_SegmentMaxDuration(This,seconds) )
#define IDataCollectorSet_put_SegmentMaxDuration(This,seconds) ( (This)->lpVtbl -> put_SegmentMaxDuration(This,seconds) )
#define IDataCollectorSet_get_SegmentMaxSize(This,size) ( (This)->lpVtbl -> get_SegmentMaxSize(This,size) )
#define IDataCollectorSet_put_SegmentMaxSize(This,size) ( (This)->lpVtbl -> put_SegmentMaxSize(This,size) )
#define IDataCollectorSet_get_SerialNumber(This,index) ( (This)->lpVtbl -> get_SerialNumber(This,index) )
#define IDataCollectorSet_put_SerialNumber(This,index) ( (This)->lpVtbl -> put_SerialNumber(This,index) )
#define IDataCollectorSet_get_Server(This,server) ( (This)->lpVtbl -> get_Server(This,server) )
#define IDataCollectorSet_get_Status(This,status) ( (This)->lpVtbl -> get_Status(This,status) )
#define IDataCollectorSet_get_Subdirectory(This,folder) ( (This)->lpVtbl -> get_Subdirectory(This,folder) )
#define IDataCollectorSet_put_Subdirectory(This,folder) ( (This)->lpVtbl -> put_Subdirectory(This,folder) )
#define IDataCollectorSet_get_SubdirectoryFormat(This,format) ( (This)->lpVtbl -> get_SubdirectoryFormat(This,format) )
#define IDataCollectorSet_put_SubdirectoryFormat(This,format) ( (This)->lpVtbl -> put_SubdirectoryFormat(This,format) )
#define IDataCollectorSet_get_SubdirectoryFormatPattern(This,pattern) ( (This)->lpVtbl -> get_SubdirectoryFormatPattern(This,pattern) )
#define IDataCollectorSet_put_SubdirectoryFormatPattern(This,pattern) ( (This)->lpVtbl -> put_SubdirectoryFormatPattern(This,pattern) )
#define IDataCollectorSet_get_Task(This,task) ( (This)->lpVtbl -> get_Task(This,task) )
#define IDataCollectorSet_put_Task(This,task) ( (This)->lpVtbl -> put_Task(This,task) )
#define IDataCollectorSet_get_TaskRunAsSelf(This,RunAsSelf) ( (This)->lpVtbl -> get_TaskRunAsSelf(This,RunAsSelf) )
#define IDataCollectorSet_put_TaskRunAsSelf(This,RunAsSelf) ( (This)->lpVtbl -> put_TaskRunAsSelf(This,RunAsSelf) )
#define IDataCollectorSet_get_TaskArguments(This,task) ( (This)->lpVtbl -> get_TaskArguments(This,task) )
#define IDataCollectorSet_put_TaskArguments(This,task) ( (This)->lpVtbl -> put_TaskArguments(This,task) )
#define IDataCollectorSet_get_TaskUserTextArguments(This,UserText) ( (This)->lpVtbl -> get_TaskUserTextArguments(This,UserText) )
#define IDataCollectorSet_put_TaskUserTextArguments(This,UserText) ( (This)->lpVtbl -> put_TaskUserTextArguments(This,UserText) )
#define IDataCollectorSet_get_Schedules(This,ppSchedules) ( (This)->lpVtbl -> get_Schedules(This,ppSchedules) )
#define IDataCollectorSet_get_SchedulesEnabled(This,enabled) ( (This)->lpVtbl -> get_SchedulesEnabled(This,enabled) )
#define IDataCollectorSet_put_SchedulesEnabled(This,enabled) ( (This)->lpVtbl -> put_SchedulesEnabled(This,enabled) )
#define IDataCollectorSet_get_UserAccount(This,user) ( (This)->lpVtbl -> get_UserAccount(This,user) )
#define IDataCollectorSet_get_Xml(This,xml) ( (This)->lpVtbl -> get_Xml(This,xml) )
#define IDataCollectorSet_get_Security(This,pbstrSecurity) ( (This)->lpVtbl -> get_Security(This,pbstrSecurity) )
#define IDataCollectorSet_put_Security(This,bstrSecurity) ( (This)->lpVtbl -> put_Security(This,bstrSecurity) )
#define IDataCollectorSet_get_StopOnCompletion(This,Stop) ( (This)->lpVtbl -> get_StopOnCompletion(This,Stop) )
#define IDataCollectorSet_put_StopOnCompletion(This,Stop) ( (This)->lpVtbl -> put_StopOnCompletion(This,Stop) )
#define IDataCollectorSet_get_DataManager(This,DataManager) ( (This)->lpVtbl -> get_DataManager(This,DataManager) )
#define IDataCollectorSet_SetCredentials(This,user,password) ( (This)->lpVtbl -> SetCredentials(This,user,password) )
#define IDataCollectorSet_Query(This,name,server) ( (This)->lpVtbl -> Query(This,name,server) )
#define IDataCollectorSet_Commit(This,name,server,mode,validation) ( (This)->lpVtbl -> Commit(This,name,server,mode,validation) )
#define IDataCollectorSet_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IDataCollectorSet_Start(This,Synchronous) ( (This)->lpVtbl -> Start(This,Synchronous) )
#define IDataCollectorSet_Stop(This,Synchronous) ( (This)->lpVtbl -> Stop(This,Synchronous) )
#define IDataCollectorSet_SetXml(This,xml,validation) ( (This)->lpVtbl -> SetXml(This,xml,validation) )
#define IDataCollectorSet_SetValue(This,key,value) ( (This)->lpVtbl -> SetValue(This,key,value) )
#define IDataCollectorSet_GetValue(This,key,value) ( (This)->lpVtbl -> GetValue(This,key,value) )
#endif
#endif
#ifndef __IDataManager_INTERFACE_DEFINED__
#define __IDataManager_INTERFACE_DEFINED__
extern const IID IID_IDataManager;
typedef struct IDataManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDataManager *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDataManager *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDataManager *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IDataManager *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IDataManager *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IDataManager *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IDataManager *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Enabled) (IDataManager *This, VARIANT_BOOL *pfEnabled);
	HRESULT(STDMETHODCALLTYPE *put_Enabled) (IDataManager *This, VARIANT_BOOL fEnabled);
	HRESULT(STDMETHODCALLTYPE *get_CheckBeforeRunning) (IDataManager *This, VARIANT_BOOL *pfCheck);
	HRESULT(STDMETHODCALLTYPE *put_CheckBeforeRunning) (IDataManager *This, VARIANT_BOOL fCheck);
	HRESULT(STDMETHODCALLTYPE *get_MinFreeDisk) (IDataManager *This, ULONG *MinFreeDisk);
	HRESULT(STDMETHODCALLTYPE *put_MinFreeDisk) (IDataManager *This, ULONG MinFreeDisk);
	HRESULT(STDMETHODCALLTYPE *get_MaxSize) (IDataManager *This, ULONG *pulMaxSize);
	HRESULT(STDMETHODCALLTYPE *put_MaxSize) (IDataManager *This, ULONG ulMaxSize);
	HRESULT(STDMETHODCALLTYPE *get_MaxFolderCount) (IDataManager *This, ULONG *pulMaxFolderCount);
	HRESULT(STDMETHODCALLTYPE *put_MaxFolderCount) (IDataManager *This, ULONG ulMaxFolderCount);
	HRESULT(STDMETHODCALLTYPE *get_ResourcePolicy) (IDataManager *This, ResourcePolicy *pPolicy);
	HRESULT(STDMETHODCALLTYPE *put_ResourcePolicy) (IDataManager *This, ResourcePolicy Policy);
	HRESULT(STDMETHODCALLTYPE *get_FolderActions) (IDataManager *This, IFolderActionCollection **Actions);
	HRESULT(STDMETHODCALLTYPE *get_ReportSchema) (IDataManager *This, BSTR *ReportSchema);
	HRESULT(STDMETHODCALLTYPE *put_ReportSchema) (IDataManager *This, BSTR ReportSchema);
	HRESULT(STDMETHODCALLTYPE *get_ReportFileName) (IDataManager *This, BSTR *pbstrFilename);
	HRESULT(STDMETHODCALLTYPE *put_ReportFileName) (IDataManager *This, BSTR pbstrFilename);
	HRESULT(STDMETHODCALLTYPE *get_RuleTargetFileName) (IDataManager *This, BSTR *Filename);
	HRESULT(STDMETHODCALLTYPE *put_RuleTargetFileName) (IDataManager *This, BSTR Filename);
	HRESULT(STDMETHODCALLTYPE *get_EventsFileName) (IDataManager *This, BSTR *pbstrFilename);
	HRESULT(STDMETHODCALLTYPE *put_EventsFileName) (IDataManager *This, BSTR pbstrFilename);
	HRESULT(STDMETHODCALLTYPE *get_Rules) (IDataManager *This, BSTR *pbstrXml);
	HRESULT(STDMETHODCALLTYPE *put_Rules) (IDataManager *This, BSTR bstrXml);
	HRESULT(STDMETHODCALLTYPE *Run) (IDataManager *This, DataManagerSteps Steps, BSTR bstrFolder, IValueMap **Errors);
	HRESULT(STDMETHODCALLTYPE *Extract) (IDataManager *This, BSTR CabFilename, BSTR DestinationPath);
	END_INTERFACE
}  IDataManagerVtbl;
interface IDataManager
{
	CONST_VTBL struct IDataManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDataManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDataManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDataManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDataManager_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDataManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDataManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDataManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDataManager_get_Enabled(This,pfEnabled) ( (This)->lpVtbl -> get_Enabled(This,pfEnabled) )
#define IDataManager_put_Enabled(This,fEnabled) ( (This)->lpVtbl -> put_Enabled(This,fEnabled) )
#define IDataManager_get_CheckBeforeRunning(This,pfCheck) ( (This)->lpVtbl -> get_CheckBeforeRunning(This,pfCheck) )
#define IDataManager_put_CheckBeforeRunning(This,fCheck) ( (This)->lpVtbl -> put_CheckBeforeRunning(This,fCheck) )
#define IDataManager_get_MinFreeDisk(This,MinFreeDisk) ( (This)->lpVtbl -> get_MinFreeDisk(This,MinFreeDisk) )
#define IDataManager_put_MinFreeDisk(This,MinFreeDisk) ( (This)->lpVtbl -> put_MinFreeDisk(This,MinFreeDisk) )
#define IDataManager_get_MaxSize(This,pulMaxSize) ( (This)->lpVtbl -> get_MaxSize(This,pulMaxSize) )
#define IDataManager_put_MaxSize(This,ulMaxSize) ( (This)->lpVtbl -> put_MaxSize(This,ulMaxSize) )
#define IDataManager_get_MaxFolderCount(This,pulMaxFolderCount) ( (This)->lpVtbl -> get_MaxFolderCount(This,pulMaxFolderCount) )
#define IDataManager_put_MaxFolderCount(This,ulMaxFolderCount) ( (This)->lpVtbl -> put_MaxFolderCount(This,ulMaxFolderCount) )
#define IDataManager_get_ResourcePolicy(This,pPolicy) ( (This)->lpVtbl -> get_ResourcePolicy(This,pPolicy) )
#define IDataManager_put_ResourcePolicy(This,Policy) ( (This)->lpVtbl -> put_ResourcePolicy(This,Policy) )
#define IDataManager_get_FolderActions(This,Actions) ( (This)->lpVtbl -> get_FolderActions(This,Actions) )
#define IDataManager_get_ReportSchema(This,ReportSchema) ( (This)->lpVtbl -> get_ReportSchema(This,ReportSchema) )
#define IDataManager_put_ReportSchema(This,ReportSchema) ( (This)->lpVtbl -> put_ReportSchema(This,ReportSchema) )
#define IDataManager_get_ReportFileName(This,pbstrFilename) ( (This)->lpVtbl -> get_ReportFileName(This,pbstrFilename) )
#define IDataManager_put_ReportFileName(This,pbstrFilename) ( (This)->lpVtbl -> put_ReportFileName(This,pbstrFilename) )
#define IDataManager_get_RuleTargetFileName(This,Filename) ( (This)->lpVtbl -> get_RuleTargetFileName(This,Filename) )
#define IDataManager_put_RuleTargetFileName(This,Filename) ( (This)->lpVtbl -> put_RuleTargetFileName(This,Filename) )
#define IDataManager_get_EventsFileName(This,pbstrFilename) ( (This)->lpVtbl -> get_EventsFileName(This,pbstrFilename) )
#define IDataManager_put_EventsFileName(This,pbstrFilename) ( (This)->lpVtbl -> put_EventsFileName(This,pbstrFilename) )
#define IDataManager_get_Rules(This,pbstrXml) ( (This)->lpVtbl -> get_Rules(This,pbstrXml) )
#define IDataManager_put_Rules(This,bstrXml) ( (This)->lpVtbl -> put_Rules(This,bstrXml) )
#define IDataManager_Run(This,Steps,bstrFolder,Errors) ( (This)->lpVtbl -> Run(This,Steps,bstrFolder,Errors) )
#define IDataManager_Extract(This,CabFilename,DestinationPath) ( (This)->lpVtbl -> Extract(This,CabFilename,DestinationPath) )
#endif
#endif
#ifndef __IFolderAction_INTERFACE_DEFINED__
#define __IFolderAction_INTERFACE_DEFINED__
extern const IID IID_IFolderAction;
typedef struct IFolderActionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFolderAction *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFolderAction *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFolderAction *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IFolderAction *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IFolderAction *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IFolderAction *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IFolderAction *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Age) (IFolderAction *This, ULONG *pulAge);
	HRESULT(STDMETHODCALLTYPE *put_Age) (IFolderAction *This, ULONG ulAge);
	HRESULT(STDMETHODCALLTYPE *get_Size) (IFolderAction *This, ULONG *pulAge);
	HRESULT(STDMETHODCALLTYPE *put_Size) (IFolderAction *This, ULONG ulAge);
	HRESULT(STDMETHODCALLTYPE *get_Actions) (IFolderAction *This, FolderActionSteps *Steps);
	HRESULT(STDMETHODCALLTYPE *put_Actions) (IFolderAction *This, FolderActionSteps Steps);
	HRESULT(STDMETHODCALLTYPE *get_SendCabTo) (IFolderAction *This, BSTR *pbstrDestination);
	HRESULT(STDMETHODCALLTYPE *put_SendCabTo) (IFolderAction *This, BSTR bstrDestination);
	END_INTERFACE
}  IFolderActionVtbl;
interface IFolderAction
{
	CONST_VTBL struct IFolderActionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFolderAction_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFolderAction_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFolderAction_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFolderAction_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFolderAction_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFolderAction_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFolderAction_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFolderAction_get_Age(This,pulAge) ( (This)->lpVtbl -> get_Age(This,pulAge) )
#define IFolderAction_put_Age(This,ulAge) ( (This)->lpVtbl -> put_Age(This,ulAge) )
#define IFolderAction_get_Size(This,pulAge) ( (This)->lpVtbl -> get_Size(This,pulAge) )
#define IFolderAction_put_Size(This,ulAge) ( (This)->lpVtbl -> put_Size(This,ulAge) )
#define IFolderAction_get_Actions(This,Steps) ( (This)->lpVtbl -> get_Actions(This,Steps) )
#define IFolderAction_put_Actions(This,Steps) ( (This)->lpVtbl -> put_Actions(This,Steps) )
#define IFolderAction_get_SendCabTo(This,pbstrDestination) ( (This)->lpVtbl -> get_SendCabTo(This,pbstrDestination) )
#define IFolderAction_put_SendCabTo(This,bstrDestination) ( (This)->lpVtbl -> put_SendCabTo(This,bstrDestination) )
#endif
#endif
#ifndef __IFolderActionCollection_INTERFACE_DEFINED__
#define __IFolderActionCollection_INTERFACE_DEFINED__
extern const IID IID_IFolderActionCollection;
typedef struct IFolderActionCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFolderActionCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFolderActionCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFolderActionCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IFolderActionCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IFolderActionCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IFolderActionCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IFolderActionCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IFolderActionCollection *This, ULONG *Count);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IFolderActionCollection *This, VARIANT Index, IFolderAction **Action);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IFolderActionCollection *This, IUnknown **Enum);
	HRESULT(STDMETHODCALLTYPE *Add) (IFolderActionCollection *This, IFolderAction *Action);
	HRESULT(STDMETHODCALLTYPE *Remove) (IFolderActionCollection *This, VARIANT Index);
	HRESULT(STDMETHODCALLTYPE *Clear) (IFolderActionCollection *This);
	HRESULT(STDMETHODCALLTYPE *AddRange) (IFolderActionCollection *This, IFolderActionCollection *Actions);
	HRESULT(STDMETHODCALLTYPE *CreateFolderAction) (IFolderActionCollection *This, IFolderAction **FolderAction);
	END_INTERFACE
}  IFolderActionCollectionVtbl;
interface IFolderActionCollection
{
	CONST_VTBL struct IFolderActionCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFolderActionCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFolderActionCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFolderActionCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFolderActionCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFolderActionCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFolderActionCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFolderActionCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFolderActionCollection_get_Count(This,Count) ( (This)->lpVtbl -> get_Count(This,Count) )
#define IFolderActionCollection_get_Item(This,Index,Action) ( (This)->lpVtbl -> get_Item(This,Index,Action) )
#define IFolderActionCollection_get__NewEnum(This,Enum) ( (This)->lpVtbl -> get__NewEnum(This,Enum) )
#define IFolderActionCollection_Add(This,Action) ( (This)->lpVtbl -> Add(This,Action) )
#define IFolderActionCollection_Remove(This,Index) ( (This)->lpVtbl -> Remove(This,Index) )
#define IFolderActionCollection_Clear(This) ( (This)->lpVtbl -> Clear(This) )
#define IFolderActionCollection_AddRange(This,Actions) ( (This)->lpVtbl -> AddRange(This,Actions) )
#define IFolderActionCollection_CreateFolderAction(This,FolderAction) ( (This)->lpVtbl -> CreateFolderAction(This,FolderAction) )
#endif
#endif
#ifndef __IDataCollector_INTERFACE_DEFINED__
#define __IDataCollector_INTERFACE_DEFINED__
extern const IID IID_IDataCollector;
typedef struct IDataCollectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDataCollector *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDataCollector *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDataCollector *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IDataCollector *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IDataCollector *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IDataCollector *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IDataCollector *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_DataCollectorSet) (IDataCollector *This, IDataCollectorSet **group);
	HRESULT(STDMETHODCALLTYPE *put_DataCollectorSet) (IDataCollector *This, IDataCollectorSet *group);
	HRESULT(STDMETHODCALLTYPE *get_DataCollectorType) (IDataCollector *This, DataCollectorType *type);
	HRESULT(STDMETHODCALLTYPE *get_FileName) (IDataCollector *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *put_FileName) (IDataCollector *This, BSTR name);
	HRESULT(STDMETHODCALLTYPE *get_FileNameFormat) (IDataCollector *This, AutoPathFormat *format);
	HRESULT(STDMETHODCALLTYPE *put_FileNameFormat) (IDataCollector *This, AutoPathFormat format);
	HRESULT(STDMETHODCALLTYPE *get_FileNameFormatPattern) (IDataCollector *This, BSTR *pattern);
	HRESULT(STDMETHODCALLTYPE *put_FileNameFormatPattern) (IDataCollector *This, BSTR pattern);
	HRESULT(STDMETHODCALLTYPE *get_LatestOutputLocation) (IDataCollector *This, BSTR *path);
	HRESULT(STDMETHODCALLTYPE *put_LatestOutputLocation) (IDataCollector *This, BSTR path);
	HRESULT(STDMETHODCALLTYPE *get_LogAppend) (IDataCollector *This, VARIANT_BOOL *append);
	HRESULT(STDMETHODCALLTYPE *put_LogAppend) (IDataCollector *This, VARIANT_BOOL append);
	HRESULT(STDMETHODCALLTYPE *get_LogCircular) (IDataCollector *This, VARIANT_BOOL *circular);
	HRESULT(STDMETHODCALLTYPE *put_LogCircular) (IDataCollector *This, VARIANT_BOOL circular);
	HRESULT(STDMETHODCALLTYPE *get_LogOverwrite) (IDataCollector *This, VARIANT_BOOL *overwrite);
	HRESULT(STDMETHODCALLTYPE *put_LogOverwrite) (IDataCollector *This, VARIANT_BOOL overwrite);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IDataCollector *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *put_Name) (IDataCollector *This, BSTR name);
	HRESULT(STDMETHODCALLTYPE *get_OutputLocation) (IDataCollector *This, BSTR *path);
	HRESULT(STDMETHODCALLTYPE *get_Index) (IDataCollector *This, long *index);
	HRESULT(STDMETHODCALLTYPE *put_Index) (IDataCollector *This, long index);
	HRESULT(STDMETHODCALLTYPE *get_Xml) (IDataCollector *This, BSTR *Xml);
	HRESULT(STDMETHODCALLTYPE *SetXml) (IDataCollector *This, BSTR Xml, IValueMap **Validation);
	HRESULT(STDMETHODCALLTYPE *CreateOutputLocation) (IDataCollector *This, VARIANT_BOOL Latest, BSTR *Location);
	END_INTERFACE
}  IDataCollectorVtbl;
interface IDataCollector
{
	CONST_VTBL struct IDataCollectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDataCollector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDataCollector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDataCollector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDataCollector_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDataCollector_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDataCollector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDataCollector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDataCollector_get_DataCollectorSet(This,group) ( (This)->lpVtbl -> get_DataCollectorSet(This,group) )
#define IDataCollector_put_DataCollectorSet(This,group) ( (This)->lpVtbl -> put_DataCollectorSet(This,group) )
#define IDataCollector_get_DataCollectorType(This,type) ( (This)->lpVtbl -> get_DataCollectorType(This,type) )
#define IDataCollector_get_FileName(This,name) ( (This)->lpVtbl -> get_FileName(This,name) )
#define IDataCollector_put_FileName(This,name) ( (This)->lpVtbl -> put_FileName(This,name) )
#define IDataCollector_get_FileNameFormat(This,format) ( (This)->lpVtbl -> get_FileNameFormat(This,format) )
#define IDataCollector_put_FileNameFormat(This,format) ( (This)->lpVtbl -> put_FileNameFormat(This,format) )
#define IDataCollector_get_FileNameFormatPattern(This,pattern) ( (This)->lpVtbl -> get_FileNameFormatPattern(This,pattern) )
#define IDataCollector_put_FileNameFormatPattern(This,pattern) ( (This)->lpVtbl -> put_FileNameFormatPattern(This,pattern) )
#define IDataCollector_get_LatestOutputLocation(This,path) ( (This)->lpVtbl -> get_LatestOutputLocation(This,path) )
#define IDataCollector_put_LatestOutputLocation(This,path) ( (This)->lpVtbl -> put_LatestOutputLocation(This,path) )
#define IDataCollector_get_LogAppend(This,append) ( (This)->lpVtbl -> get_LogAppend(This,append) )
#define IDataCollector_put_LogAppend(This,append) ( (This)->lpVtbl -> put_LogAppend(This,append) )
#define IDataCollector_get_LogCircular(This,circular) ( (This)->lpVtbl -> get_LogCircular(This,circular) )
#define IDataCollector_put_LogCircular(This,circular) ( (This)->lpVtbl -> put_LogCircular(This,circular) )
#define IDataCollector_get_LogOverwrite(This,overwrite) ( (This)->lpVtbl -> get_LogOverwrite(This,overwrite) )
#define IDataCollector_put_LogOverwrite(This,overwrite) ( (This)->lpVtbl -> put_LogOverwrite(This,overwrite) )
#define IDataCollector_get_Name(This,name) ( (This)->lpVtbl -> get_Name(This,name) )
#define IDataCollector_put_Name(This,name) ( (This)->lpVtbl -> put_Name(This,name) )
#define IDataCollector_get_OutputLocation(This,path) ( (This)->lpVtbl -> get_OutputLocation(This,path) )
#define IDataCollector_get_Index(This,index) ( (This)->lpVtbl -> get_Index(This,index) )
#define IDataCollector_put_Index(This,index) ( (This)->lpVtbl -> put_Index(This,index) )
#define IDataCollector_get_Xml(This,Xml) ( (This)->lpVtbl -> get_Xml(This,Xml) )
#define IDataCollector_SetXml(This,Xml,Validation) ( (This)->lpVtbl -> SetXml(This,Xml,Validation) )
#define IDataCollector_CreateOutputLocation(This,Latest,Location) ( (This)->lpVtbl -> CreateOutputLocation(This,Latest,Location) )
#endif
#endif
#ifndef __IPerformanceCounterDataCollector_INTERFACE_DEFINED__
#define __IPerformanceCounterDataCollector_INTERFACE_DEFINED__
extern const IID IID_IPerformanceCounterDataCollector;
typedef struct IPerformanceCounterDataCollectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPerformanceCounterDataCollector *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPerformanceCounterDataCollector *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPerformanceCounterDataCollector *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IPerformanceCounterDataCollector *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IPerformanceCounterDataCollector *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IPerformanceCounterDataCollector *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IPerformanceCounterDataCollector *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_DataCollectorSet) (IPerformanceCounterDataCollector *This, IDataCollectorSet **group);
	HRESULT(STDMETHODCALLTYPE *put_DataCollectorSet) (IPerformanceCounterDataCollector *This, IDataCollectorSet *group);
	HRESULT(STDMETHODCALLTYPE *get_DataCollectorType) (IPerformanceCounterDataCollector *This, DataCollectorType *type);
	HRESULT(STDMETHODCALLTYPE *get_FileName) (IPerformanceCounterDataCollector *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *put_FileName) (IPerformanceCounterDataCollector *This, BSTR name);
	HRESULT(STDMETHODCALLTYPE *get_FileNameFormat) (IPerformanceCounterDataCollector *This, AutoPathFormat *format);
	HRESULT(STDMETHODCALLTYPE *put_FileNameFormat) (IPerformanceCounterDataCollector *This, AutoPathFormat format);
	HRESULT(STDMETHODCALLTYPE *get_FileNameFormatPattern) (IPerformanceCounterDataCollector *This, BSTR *pattern);
	HRESULT(STDMETHODCALLTYPE *put_FileNameFormatPattern) (IPerformanceCounterDataCollector *This, BSTR pattern);
	HRESULT(STDMETHODCALLTYPE *get_LatestOutputLocation) (IPerformanceCounterDataCollector *This, BSTR *path);
	HRESULT(STDMETHODCALLTYPE *put_LatestOutputLocation) (IPerformanceCounterDataCollector *This, BSTR path);
	HRESULT(STDMETHODCALLTYPE *get_LogAppend) (IPerformanceCounterDataCollector *This, VARIANT_BOOL *append);
	HRESULT(STDMETHODCALLTYPE *put_LogAppend) (IPerformanceCounterDataCollector *This, VARIANT_BOOL append);
	HRESULT(STDMETHODCALLTYPE *get_LogCircular) (IPerformanceCounterDataCollector *This, VARIANT_BOOL *circular);
	HRESULT(STDMETHODCALLTYPE *put_LogCircular) (IPerformanceCounterDataCollector *This, VARIANT_BOOL circular);
	HRESULT(STDMETHODCALLTYPE *get_LogOverwrite) (IPerformanceCounterDataCollector *This, VARIANT_BOOL *overwrite);
	HRESULT(STDMETHODCALLTYPE *put_LogOverwrite) (IPerformanceCounterDataCollector *This, VARIANT_BOOL overwrite);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IPerformanceCounterDataCollector *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *put_Name) (IPerformanceCounterDataCollector *This, BSTR name);
	HRESULT(STDMETHODCALLTYPE *get_OutputLocation) (IPerformanceCounterDataCollector *This, BSTR *path);
	HRESULT(STDMETHODCALLTYPE *get_Index) (IPerformanceCounterDataCollector *This, long *index);
	HRESULT(STDMETHODCALLTYPE *put_Index) (IPerformanceCounterDataCollector *This, long index);
	HRESULT(STDMETHODCALLTYPE *get_Xml) (IPerformanceCounterDataCollector *This, BSTR *Xml);
	HRESULT(STDMETHODCALLTYPE *SetXml) (IPerformanceCounterDataCollector *This, BSTR Xml, IValueMap **Validation);
	HRESULT(STDMETHODCALLTYPE *CreateOutputLocation) (IPerformanceCounterDataCollector *This, VARIANT_BOOL Latest, BSTR *Location);
	HRESULT(STDMETHODCALLTYPE *get_DataSourceName) (IPerformanceCounterDataCollector *This, BSTR *dsn);
	HRESULT(STDMETHODCALLTYPE *put_DataSourceName) (IPerformanceCounterDataCollector *This, BSTR dsn);
	HRESULT(STDMETHODCALLTYPE *get_PerformanceCounters) (IPerformanceCounterDataCollector *This, SAFEARRAY **counters);
	HRESULT(STDMETHODCALLTYPE *put_PerformanceCounters) (IPerformanceCounterDataCollector *This, SAFEARRAY *counters);
	HRESULT(STDMETHODCALLTYPE *get_LogFileFormat) (IPerformanceCounterDataCollector *This, FileFormat *format);
	HRESULT(STDMETHODCALLTYPE *put_LogFileFormat) (IPerformanceCounterDataCollector *This, FileFormat format);
	HRESULT(STDMETHODCALLTYPE *get_SampleInterval) (IPerformanceCounterDataCollector *This, unsigned long *interval);
	HRESULT(STDMETHODCALLTYPE *put_SampleInterval) (IPerformanceCounterDataCollector *This, unsigned long interval);
	HRESULT(STDMETHODCALLTYPE *get_SegmentMaxRecords) (IPerformanceCounterDataCollector *This, unsigned long *records);
	HRESULT(STDMETHODCALLTYPE *put_SegmentMaxRecords) (IPerformanceCounterDataCollector *This, unsigned long records);
	END_INTERFACE
}  IPerformanceCounterDataCollectorVtbl;
interface IPerformanceCounterDataCollector
{
	CONST_VTBL struct IPerformanceCounterDataCollectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPerformanceCounterDataCollector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPerformanceCounterDataCollector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPerformanceCounterDataCollector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPerformanceCounterDataCollector_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IPerformanceCounterDataCollector_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IPerformanceCounterDataCollector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IPerformanceCounterDataCollector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IPerformanceCounterDataCollector_get_DataCollectorSet(This,group) ( (This)->lpVtbl -> get_DataCollectorSet(This,group) )
#define IPerformanceCounterDataCollector_put_DataCollectorSet(This,group) ( (This)->lpVtbl -> put_DataCollectorSet(This,group) )
#define IPerformanceCounterDataCollector_get_DataCollectorType(This,type) ( (This)->lpVtbl -> get_DataCollectorType(This,type) )
#define IPerformanceCounterDataCollector_get_FileName(This,name) ( (This)->lpVtbl -> get_FileName(This,name) )
#define IPerformanceCounterDataCollector_put_FileName(This,name) ( (This)->lpVtbl -> put_FileName(This,name) )
#define IPerformanceCounterDataCollector_get_FileNameFormat(This,format) ( (This)->lpVtbl -> get_FileNameFormat(This,format) )
#define IPerformanceCounterDataCollector_put_FileNameFormat(This,format) ( (This)->lpVtbl -> put_FileNameFormat(This,format) )
#define IPerformanceCounterDataCollector_get_FileNameFormatPattern(This,pattern) ( (This)->lpVtbl -> get_FileNameFormatPattern(This,pattern) )
#define IPerformanceCounterDataCollector_put_FileNameFormatPattern(This,pattern) ( (This)->lpVtbl -> put_FileNameFormatPattern(This,pattern) )
#define IPerformanceCounterDataCollector_get_LatestOutputLocation(This,path) ( (This)->lpVtbl -> get_LatestOutputLocation(This,path) )
#define IPerformanceCounterDataCollector_put_LatestOutputLocation(This,path) ( (This)->lpVtbl -> put_LatestOutputLocation(This,path) )
#define IPerformanceCounterDataCollector_get_LogAppend(This,append) ( (This)->lpVtbl -> get_LogAppend(This,append) )
#define IPerformanceCounterDataCollector_put_LogAppend(This,append) ( (This)->lpVtbl -> put_LogAppend(This,append) )
#define IPerformanceCounterDataCollector_get_LogCircular(This,circular) ( (This)->lpVtbl -> get_LogCircular(This,circular) )
#define IPerformanceCounterDataCollector_put_LogCircular(This,circular) ( (This)->lpVtbl -> put_LogCircular(This,circular) )
#define IPerformanceCounterDataCollector_get_LogOverwrite(This,overwrite) ( (This)->lpVtbl -> get_LogOverwrite(This,overwrite) )
#define IPerformanceCounterDataCollector_put_LogOverwrite(This,overwrite) ( (This)->lpVtbl -> put_LogOverwrite(This,overwrite) )
#define IPerformanceCounterDataCollector_get_Name(This,name) ( (This)->lpVtbl -> get_Name(This,name) )
#define IPerformanceCounterDataCollector_put_Name(This,name) ( (This)->lpVtbl -> put_Name(This,name) )
#define IPerformanceCounterDataCollector_get_OutputLocation(This,path) ( (This)->lpVtbl -> get_OutputLocation(This,path) )
#define IPerformanceCounterDataCollector_get_Index(This,index) ( (This)->lpVtbl -> get_Index(This,index) )
#define IPerformanceCounterDataCollector_put_Index(This,index) ( (This)->lpVtbl -> put_Index(This,index) )
#define IPerformanceCounterDataCollector_get_Xml(This,Xml) ( (This)->lpVtbl -> get_Xml(This,Xml) )
#define IPerformanceCounterDataCollector_SetXml(This,Xml,Validation) ( (This)->lpVtbl -> SetXml(This,Xml,Validation) )
#define IPerformanceCounterDataCollector_CreateOutputLocation(This,Latest,Location) ( (This)->lpVtbl -> CreateOutputLocation(This,Latest,Location) )
#define IPerformanceCounterDataCollector_get_DataSourceName(This,dsn) ( (This)->lpVtbl -> get_DataSourceName(This,dsn) )
#define IPerformanceCounterDataCollector_put_DataSourceName(This,dsn) ( (This)->lpVtbl -> put_DataSourceName(This,dsn) )
#define IPerformanceCounterDataCollector_get_PerformanceCounters(This,counters) ( (This)->lpVtbl -> get_PerformanceCounters(This,counters) )
#define IPerformanceCounterDataCollector_put_PerformanceCounters(This,counters) ( (This)->lpVtbl -> put_PerformanceCounters(This,counters) )
#define IPerformanceCounterDataCollector_get_LogFileFormat(This,format) ( (This)->lpVtbl -> get_LogFileFormat(This,format) )
#define IPerformanceCounterDataCollector_put_LogFileFormat(This,format) ( (This)->lpVtbl -> put_LogFileFormat(This,format) )
#define IPerformanceCounterDataCollector_get_SampleInterval(This,interval) ( (This)->lpVtbl -> get_SampleInterval(This,interval) )
#define IPerformanceCounterDataCollector_put_SampleInterval(This,interval) ( (This)->lpVtbl -> put_SampleInterval(This,interval) )
#define IPerformanceCounterDataCollector_get_SegmentMaxRecords(This,records) ( (This)->lpVtbl -> get_SegmentMaxRecords(This,records) )
#define IPerformanceCounterDataCollector_put_SegmentMaxRecords(This,records) ( (This)->lpVtbl -> put_SegmentMaxRecords(This,records) )
#endif
#endif
#ifndef __ITraceDataCollector_INTERFACE_DEFINED__
#define __ITraceDataCollector_INTERFACE_DEFINED__
extern const IID IID_ITraceDataCollector;
typedef struct ITraceDataCollectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITraceDataCollector *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITraceDataCollector *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITraceDataCollector *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (ITraceDataCollector *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (ITraceDataCollector *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (ITraceDataCollector *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (ITraceDataCollector *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_DataCollectorSet) (ITraceDataCollector *This, IDataCollectorSet **group);
	HRESULT(STDMETHODCALLTYPE *put_DataCollectorSet) (ITraceDataCollector *This, IDataCollectorSet *group);
	HRESULT(STDMETHODCALLTYPE *get_DataCollectorType) (ITraceDataCollector *This, DataCollectorType *type);
	HRESULT(STDMETHODCALLTYPE *get_FileName) (ITraceDataCollector *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *put_FileName) (ITraceDataCollector *This, BSTR name);
	HRESULT(STDMETHODCALLTYPE *get_FileNameFormat) (ITraceDataCollector *This, AutoPathFormat *format);
	HRESULT(STDMETHODCALLTYPE *put_FileNameFormat) (ITraceDataCollector *This, AutoPathFormat format);
	HRESULT(STDMETHODCALLTYPE *get_FileNameFormatPattern) (ITraceDataCollector *This, BSTR *pattern);
	HRESULT(STDMETHODCALLTYPE *put_FileNameFormatPattern) (ITraceDataCollector *This, BSTR pattern);
	HRESULT(STDMETHODCALLTYPE *get_LatestOutputLocation) (ITraceDataCollector *This, BSTR *path);
	HRESULT(STDMETHODCALLTYPE *put_LatestOutputLocation) (ITraceDataCollector *This, BSTR path);
	HRESULT(STDMETHODCALLTYPE *get_LogAppend) (ITraceDataCollector *This, VARIANT_BOOL *append);
	HRESULT(STDMETHODCALLTYPE *put_LogAppend) (ITraceDataCollector *This, VARIANT_BOOL append);
	HRESULT(STDMETHODCALLTYPE *get_LogCircular) (ITraceDataCollector *This, VARIANT_BOOL *circular);
	HRESULT(STDMETHODCALLTYPE *put_LogCircular) (ITraceDataCollector *This, VARIANT_BOOL circular);
	HRESULT(STDMETHODCALLTYPE *get_LogOverwrite) (ITraceDataCollector *This, VARIANT_BOOL *overwrite);
	HRESULT(STDMETHODCALLTYPE *put_LogOverwrite) (ITraceDataCollector *This, VARIANT_BOOL overwrite);
	HRESULT(STDMETHODCALLTYPE *get_Name) (ITraceDataCollector *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *put_Name) (ITraceDataCollector *This, BSTR name);
	HRESULT(STDMETHODCALLTYPE *get_OutputLocation) (ITraceDataCollector *This, BSTR *path);
	HRESULT(STDMETHODCALLTYPE *get_Index) (ITraceDataCollector *This, long *index);
	HRESULT(STDMETHODCALLTYPE *put_Index) (ITraceDataCollector *This, long index);
	HRESULT(STDMETHODCALLTYPE *get_Xml) (ITraceDataCollector *This, BSTR *Xml);
	HRESULT(STDMETHODCALLTYPE *SetXml) (ITraceDataCollector *This, BSTR Xml, IValueMap **Validation);
	HRESULT(STDMETHODCALLTYPE *CreateOutputLocation) (ITraceDataCollector *This, VARIANT_BOOL Latest, BSTR *Location);
	HRESULT(STDMETHODCALLTYPE *get_BufferSize) (ITraceDataCollector *This, unsigned long *size);
	HRESULT(STDMETHODCALLTYPE *put_BufferSize) (ITraceDataCollector *This, unsigned long size);
	HRESULT(STDMETHODCALLTYPE *get_BuffersLost) (ITraceDataCollector *This, unsigned long *buffers);
	HRESULT(STDMETHODCALLTYPE *put_BuffersLost) (ITraceDataCollector *This, unsigned long buffers);
	HRESULT(STDMETHODCALLTYPE *get_BuffersWritten) (ITraceDataCollector *This, unsigned long *buffers);
	HRESULT(STDMETHODCALLTYPE *put_BuffersWritten) (ITraceDataCollector *This, unsigned long buffers);
	HRESULT(STDMETHODCALLTYPE *get_ClockType) (ITraceDataCollector *This, ClockType *clock);
	HRESULT(STDMETHODCALLTYPE *put_ClockType) (ITraceDataCollector *This, ClockType clock);
	HRESULT(STDMETHODCALLTYPE *get_EventsLost) (ITraceDataCollector *This, unsigned long *events);
	HRESULT(STDMETHODCALLTYPE *put_EventsLost) (ITraceDataCollector *This, unsigned long events);
	HRESULT(STDMETHODCALLTYPE *get_ExtendedModes) (ITraceDataCollector *This, unsigned long *mode);
	HRESULT(STDMETHODCALLTYPE *put_ExtendedModes) (ITraceDataCollector *This, unsigned long mode);
	HRESULT(STDMETHODCALLTYPE *get_FlushTimer) (ITraceDataCollector *This, unsigned long *seconds);
	HRESULT(STDMETHODCALLTYPE *put_FlushTimer) (ITraceDataCollector *This, unsigned long seconds);
	HRESULT(STDMETHODCALLTYPE *get_FreeBuffers) (ITraceDataCollector *This, unsigned long *buffers);
	HRESULT(STDMETHODCALLTYPE *put_FreeBuffers) (ITraceDataCollector *This, unsigned long buffers);
	HRESULT(STDMETHODCALLTYPE *get_Guid) (ITraceDataCollector *This, GUID *guid);
	HRESULT(STDMETHODCALLTYPE *put_Guid) (ITraceDataCollector *This, GUID guid);
	HRESULT(STDMETHODCALLTYPE *get_IsKernelTrace) (ITraceDataCollector *This, VARIANT_BOOL *kernel);
	HRESULT(STDMETHODCALLTYPE *get_MaximumBuffers) (ITraceDataCollector *This, unsigned long *buffers);
	HRESULT(STDMETHODCALLTYPE *put_MaximumBuffers) (ITraceDataCollector *This, unsigned long buffers);
	HRESULT(STDMETHODCALLTYPE *get_MinimumBuffers) (ITraceDataCollector *This, unsigned long *buffers);
	HRESULT(STDMETHODCALLTYPE *put_MinimumBuffers) (ITraceDataCollector *This, unsigned long buffers);
	HRESULT(STDMETHODCALLTYPE *get_NumberOfBuffers) (ITraceDataCollector *This, unsigned long *buffers);
	HRESULT(STDMETHODCALLTYPE *put_NumberOfBuffers) (ITraceDataCollector *This, unsigned long buffers);
	HRESULT(STDMETHODCALLTYPE *get_PreallocateFile) (ITraceDataCollector *This, VARIANT_BOOL *allocate);
	HRESULT(STDMETHODCALLTYPE *put_PreallocateFile) (ITraceDataCollector *This, VARIANT_BOOL allocate);
	HRESULT(STDMETHODCALLTYPE *get_ProcessMode) (ITraceDataCollector *This, VARIANT_BOOL *process);
	HRESULT(STDMETHODCALLTYPE *put_ProcessMode) (ITraceDataCollector *This, VARIANT_BOOL process);
	HRESULT(STDMETHODCALLTYPE *get_RealTimeBuffersLost) (ITraceDataCollector *This, unsigned long *buffers);
	HRESULT(STDMETHODCALLTYPE *put_RealTimeBuffersLost) (ITraceDataCollector *This, unsigned long buffers);
	HRESULT(STDMETHODCALLTYPE *get_SessionId) (ITraceDataCollector *This, ULONG64 *id);
	HRESULT(STDMETHODCALLTYPE *put_SessionId) (ITraceDataCollector *This, ULONG64 id);
	HRESULT(STDMETHODCALLTYPE *get_SessionName) (ITraceDataCollector *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *put_SessionName) (ITraceDataCollector *This, BSTR name);
	HRESULT(STDMETHODCALLTYPE *get_SessionThreadId) (ITraceDataCollector *This, unsigned long *tid);
	HRESULT(STDMETHODCALLTYPE *put_SessionThreadId) (ITraceDataCollector *This, unsigned long tid);
	HRESULT(STDMETHODCALLTYPE *get_StreamMode) (ITraceDataCollector *This, StreamMode *mode);
	HRESULT(STDMETHODCALLTYPE *put_StreamMode) (ITraceDataCollector *This, StreamMode mode);
	HRESULT(STDMETHODCALLTYPE *get_TraceDataProviders) (ITraceDataCollector *This, ITraceDataProviderCollection **providers);
	END_INTERFACE
}  ITraceDataCollectorVtbl;
interface ITraceDataCollector
{
	CONST_VTBL struct ITraceDataCollectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITraceDataCollector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITraceDataCollector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITraceDataCollector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITraceDataCollector_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITraceDataCollector_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITraceDataCollector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITraceDataCollector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITraceDataCollector_get_DataCollectorSet(This,group) ( (This)->lpVtbl -> get_DataCollectorSet(This,group) )
#define ITraceDataCollector_put_DataCollectorSet(This,group) ( (This)->lpVtbl -> put_DataCollectorSet(This,group) )
#define ITraceDataCollector_get_DataCollectorType(This,type) ( (This)->lpVtbl -> get_DataCollectorType(This,type) )
#define ITraceDataCollector_get_FileName(This,name) ( (This)->lpVtbl -> get_FileName(This,name) )
#define ITraceDataCollector_put_FileName(This,name) ( (This)->lpVtbl -> put_FileName(This,name) )
#define ITraceDataCollector_get_FileNameFormat(This,format) ( (This)->lpVtbl -> get_FileNameFormat(This,format) )
#define ITraceDataCollector_put_FileNameFormat(This,format) ( (This)->lpVtbl -> put_FileNameFormat(This,format) )
#define ITraceDataCollector_get_FileNameFormatPattern(This,pattern) ( (This)->lpVtbl -> get_FileNameFormatPattern(This,pattern) )
#define ITraceDataCollector_put_FileNameFormatPattern(This,pattern) ( (This)->lpVtbl -> put_FileNameFormatPattern(This,pattern) )
#define ITraceDataCollector_get_LatestOutputLocation(This,path) ( (This)->lpVtbl -> get_LatestOutputLocation(This,path) )
#define ITraceDataCollector_put_LatestOutputLocation(This,path) ( (This)->lpVtbl -> put_LatestOutputLocation(This,path) )
#define ITraceDataCollector_get_LogAppend(This,append) ( (This)->lpVtbl -> get_LogAppend(This,append) )
#define ITraceDataCollector_put_LogAppend(This,append) ( (This)->lpVtbl -> put_LogAppend(This,append) )
#define ITraceDataCollector_get_LogCircular(This,circular) ( (This)->lpVtbl -> get_LogCircular(This,circular) )
#define ITraceDataCollector_put_LogCircular(This,circular) ( (This)->lpVtbl -> put_LogCircular(This,circular) )
#define ITraceDataCollector_get_LogOverwrite(This,overwrite) ( (This)->lpVtbl -> get_LogOverwrite(This,overwrite) )
#define ITraceDataCollector_put_LogOverwrite(This,overwrite) ( (This)->lpVtbl -> put_LogOverwrite(This,overwrite) )
#define ITraceDataCollector_get_Name(This,name) ( (This)->lpVtbl -> get_Name(This,name) )
#define ITraceDataCollector_put_Name(This,name) ( (This)->lpVtbl -> put_Name(This,name) )
#define ITraceDataCollector_get_OutputLocation(This,path) ( (This)->lpVtbl -> get_OutputLocation(This,path) )
#define ITraceDataCollector_get_Index(This,index) ( (This)->lpVtbl -> get_Index(This,index) )
#define ITraceDataCollector_put_Index(This,index) ( (This)->lpVtbl -> put_Index(This,index) )
#define ITraceDataCollector_get_Xml(This,Xml) ( (This)->lpVtbl -> get_Xml(This,Xml) )
#define ITraceDataCollector_SetXml(This,Xml,Validation) ( (This)->lpVtbl -> SetXml(This,Xml,Validation) )
#define ITraceDataCollector_CreateOutputLocation(This,Latest,Location) ( (This)->lpVtbl -> CreateOutputLocation(This,Latest,Location) )
#define ITraceDataCollector_get_BufferSize(This,size) ( (This)->lpVtbl -> get_BufferSize(This,size) )
#define ITraceDataCollector_put_BufferSize(This,size) ( (This)->lpVtbl -> put_BufferSize(This,size) )
#define ITraceDataCollector_get_BuffersLost(This,buffers) ( (This)->lpVtbl -> get_BuffersLost(This,buffers) )
#define ITraceDataCollector_put_BuffersLost(This,buffers) ( (This)->lpVtbl -> put_BuffersLost(This,buffers) )
#define ITraceDataCollector_get_BuffersWritten(This,buffers) ( (This)->lpVtbl -> get_BuffersWritten(This,buffers) )
#define ITraceDataCollector_put_BuffersWritten(This,buffers) ( (This)->lpVtbl -> put_BuffersWritten(This,buffers) )
#define ITraceDataCollector_get_ClockType(This,clock) ( (This)->lpVtbl -> get_ClockType(This,clock) )
#define ITraceDataCollector_put_ClockType(This,clock) ( (This)->lpVtbl -> put_ClockType(This,clock) )
#define ITraceDataCollector_get_EventsLost(This,events) ( (This)->lpVtbl -> get_EventsLost(This,events) )
#define ITraceDataCollector_put_EventsLost(This,events) ( (This)->lpVtbl -> put_EventsLost(This,events) )
#define ITraceDataCollector_get_ExtendedModes(This,mode) ( (This)->lpVtbl -> get_ExtendedModes(This,mode) )
#define ITraceDataCollector_put_ExtendedModes(This,mode) ( (This)->lpVtbl -> put_ExtendedModes(This,mode) )
#define ITraceDataCollector_get_FlushTimer(This,seconds) ( (This)->lpVtbl -> get_FlushTimer(This,seconds) )
#define ITraceDataCollector_put_FlushTimer(This,seconds) ( (This)->lpVtbl -> put_FlushTimer(This,seconds) )
#define ITraceDataCollector_get_FreeBuffers(This,buffers) ( (This)->lpVtbl -> get_FreeBuffers(This,buffers) )
#define ITraceDataCollector_put_FreeBuffers(This,buffers) ( (This)->lpVtbl -> put_FreeBuffers(This,buffers) )
#define ITraceDataCollector_get_Guid(This,guid) ( (This)->lpVtbl -> get_Guid(This,guid) )
#define ITraceDataCollector_put_Guid(This,guid) ( (This)->lpVtbl -> put_Guid(This,guid) )
#define ITraceDataCollector_get_IsKernelTrace(This,kernel) ( (This)->lpVtbl -> get_IsKernelTrace(This,kernel) )
#define ITraceDataCollector_get_MaximumBuffers(This,buffers) ( (This)->lpVtbl -> get_MaximumBuffers(This,buffers) )
#define ITraceDataCollector_put_MaximumBuffers(This,buffers) ( (This)->lpVtbl -> put_MaximumBuffers(This,buffers) )
#define ITraceDataCollector_get_MinimumBuffers(This,buffers) ( (This)->lpVtbl -> get_MinimumBuffers(This,buffers) )
#define ITraceDataCollector_put_MinimumBuffers(This,buffers) ( (This)->lpVtbl -> put_MinimumBuffers(This,buffers) )
#define ITraceDataCollector_get_NumberOfBuffers(This,buffers) ( (This)->lpVtbl -> get_NumberOfBuffers(This,buffers) )
#define ITraceDataCollector_put_NumberOfBuffers(This,buffers) ( (This)->lpVtbl -> put_NumberOfBuffers(This,buffers) )
#define ITraceDataCollector_get_PreallocateFile(This,allocate) ( (This)->lpVtbl -> get_PreallocateFile(This,allocate) )
#define ITraceDataCollector_put_PreallocateFile(This,allocate) ( (This)->lpVtbl -> put_PreallocateFile(This,allocate) )
#define ITraceDataCollector_get_ProcessMode(This,process) ( (This)->lpVtbl -> get_ProcessMode(This,process) )
#define ITraceDataCollector_put_ProcessMode(This,process) ( (This)->lpVtbl -> put_ProcessMode(This,process) )
#define ITraceDataCollector_get_RealTimeBuffersLost(This,buffers) ( (This)->lpVtbl -> get_RealTimeBuffersLost(This,buffers) )
#define ITraceDataCollector_put_RealTimeBuffersLost(This,buffers) ( (This)->lpVtbl -> put_RealTimeBuffersLost(This,buffers) )
#define ITraceDataCollector_get_SessionId(This,id) ( (This)->lpVtbl -> get_SessionId(This,id) )
#define ITraceDataCollector_put_SessionId(This,id) ( (This)->lpVtbl -> put_SessionId(This,id) )
#define ITraceDataCollector_get_SessionName(This,name) ( (This)->lpVtbl -> get_SessionName(This,name) )
#define ITraceDataCollector_put_SessionName(This,name) ( (This)->lpVtbl -> put_SessionName(This,name) )
#define ITraceDataCollector_get_SessionThreadId(This,tid) ( (This)->lpVtbl -> get_SessionThreadId(This,tid) )
#define ITraceDataCollector_put_SessionThreadId(This,tid) ( (This)->lpVtbl -> put_SessionThreadId(This,tid) )
#define ITraceDataCollector_get_StreamMode(This,mode) ( (This)->lpVtbl -> get_StreamMode(This,mode) )
#define ITraceDataCollector_put_StreamMode(This,mode) ( (This)->lpVtbl -> put_StreamMode(This,mode) )
#define ITraceDataCollector_get_TraceDataProviders(This,providers) ( (This)->lpVtbl -> get_TraceDataProviders(This,providers) )
#endif
#endif
#ifndef __IConfigurationDataCollector_INTERFACE_DEFINED__
#define __IConfigurationDataCollector_INTERFACE_DEFINED__
extern const IID IID_IConfigurationDataCollector;
typedef struct IConfigurationDataCollectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IConfigurationDataCollector *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IConfigurationDataCollector *This);
	ULONG(STDMETHODCALLTYPE *Release) (IConfigurationDataCollector *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IConfigurationDataCollector *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IConfigurationDataCollector *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IConfigurationDataCollector *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IConfigurationDataCollector *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_DataCollectorSet) (IConfigurationDataCollector *This, IDataCollectorSet **group);
	HRESULT(STDMETHODCALLTYPE *put_DataCollectorSet) (IConfigurationDataCollector *This, IDataCollectorSet *group);
	HRESULT(STDMETHODCALLTYPE *get_DataCollectorType) (IConfigurationDataCollector *This, DataCollectorType *type);
	HRESULT(STDMETHODCALLTYPE *get_FileName) (IConfigurationDataCollector *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *put_FileName) (IConfigurationDataCollector *This, BSTR name);
	HRESULT(STDMETHODCALLTYPE *get_FileNameFormat) (IConfigurationDataCollector *This, AutoPathFormat *format);
	HRESULT(STDMETHODCALLTYPE *put_FileNameFormat) (IConfigurationDataCollector *This, AutoPathFormat format);
	HRESULT(STDMETHODCALLTYPE *get_FileNameFormatPattern) (IConfigurationDataCollector *This, BSTR *pattern);
	HRESULT(STDMETHODCALLTYPE *put_FileNameFormatPattern) (IConfigurationDataCollector *This, BSTR pattern);
	HRESULT(STDMETHODCALLTYPE *get_LatestOutputLocation) (IConfigurationDataCollector *This, BSTR *path);
	HRESULT(STDMETHODCALLTYPE *put_LatestOutputLocation) (IConfigurationDataCollector *This, BSTR path);
	HRESULT(STDMETHODCALLTYPE *get_LogAppend) (IConfigurationDataCollector *This, VARIANT_BOOL *append);
	HRESULT(STDMETHODCALLTYPE *put_LogAppend) (IConfigurationDataCollector *This, VARIANT_BOOL append);
	HRESULT(STDMETHODCALLTYPE *get_LogCircular) (IConfigurationDataCollector *This, VARIANT_BOOL *circular);
	HRESULT(STDMETHODCALLTYPE *put_LogCircular) (IConfigurationDataCollector *This, VARIANT_BOOL circular);
	HRESULT(STDMETHODCALLTYPE *get_LogOverwrite) (IConfigurationDataCollector *This, VARIANT_BOOL *overwrite);
	HRESULT(STDMETHODCALLTYPE *put_LogOverwrite) (IConfigurationDataCollector *This, VARIANT_BOOL overwrite);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IConfigurationDataCollector *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *put_Name) (IConfigurationDataCollector *This, BSTR name);
	HRESULT(STDMETHODCALLTYPE *get_OutputLocation) (IConfigurationDataCollector *This, BSTR *path);
	HRESULT(STDMETHODCALLTYPE *get_Index) (IConfigurationDataCollector *This, long *index);
	HRESULT(STDMETHODCALLTYPE *put_Index) (IConfigurationDataCollector *This, long index);
	HRESULT(STDMETHODCALLTYPE *get_Xml) (IConfigurationDataCollector *This, BSTR *Xml);
	HRESULT(STDMETHODCALLTYPE *SetXml) (IConfigurationDataCollector *This, BSTR Xml, IValueMap **Validation);
	HRESULT(STDMETHODCALLTYPE *CreateOutputLocation) (IConfigurationDataCollector *This, VARIANT_BOOL Latest, BSTR *Location);
	HRESULT(STDMETHODCALLTYPE *get_FileMaxCount) (IConfigurationDataCollector *This, unsigned long *count);
	HRESULT(STDMETHODCALLTYPE *put_FileMaxCount) (IConfigurationDataCollector *This, unsigned long count);
	HRESULT(STDMETHODCALLTYPE *get_FileMaxRecursiveDepth) (IConfigurationDataCollector *This, unsigned long *depth);
	HRESULT(STDMETHODCALLTYPE *put_FileMaxRecursiveDepth) (IConfigurationDataCollector *This, unsigned long depth);
	HRESULT(STDMETHODCALLTYPE *get_FileMaxTotalSize) (IConfigurationDataCollector *This, unsigned long *size);
	HRESULT(STDMETHODCALLTYPE *put_FileMaxTotalSize) (IConfigurationDataCollector *This, unsigned long size);
	HRESULT(STDMETHODCALLTYPE *get_Files) (IConfigurationDataCollector *This, SAFEARRAY **Files);
	HRESULT(STDMETHODCALLTYPE *put_Files) (IConfigurationDataCollector *This, SAFEARRAY *Files);
	HRESULT(STDMETHODCALLTYPE *get_ManagementQueries) (IConfigurationDataCollector *This, SAFEARRAY **Queries);
	HRESULT(STDMETHODCALLTYPE *put_ManagementQueries) (IConfigurationDataCollector *This, SAFEARRAY *Queries);
	HRESULT(STDMETHODCALLTYPE *get_QueryNetworkAdapters) (IConfigurationDataCollector *This, VARIANT_BOOL *network);
	HRESULT(STDMETHODCALLTYPE *put_QueryNetworkAdapters) (IConfigurationDataCollector *This, VARIANT_BOOL network);
	HRESULT(STDMETHODCALLTYPE *get_RegistryKeys) (IConfigurationDataCollector *This, SAFEARRAY **query);
	HRESULT(STDMETHODCALLTYPE *put_RegistryKeys) (IConfigurationDataCollector *This, SAFEARRAY *query);
	HRESULT(STDMETHODCALLTYPE *get_RegistryMaxRecursiveDepth) (IConfigurationDataCollector *This, unsigned long *depth);
	HRESULT(STDMETHODCALLTYPE *put_RegistryMaxRecursiveDepth) (IConfigurationDataCollector *This, unsigned long depth);
	HRESULT(STDMETHODCALLTYPE *get_SystemStateFile) (IConfigurationDataCollector *This, BSTR *FileName);
	HRESULT(STDMETHODCALLTYPE *put_SystemStateFile) (IConfigurationDataCollector *This, BSTR FileName);
	END_INTERFACE
}  IConfigurationDataCollectorVtbl;
interface IConfigurationDataCollector
{
	CONST_VTBL struct IConfigurationDataCollectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConfigurationDataCollector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConfigurationDataCollector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IConfigurationDataCollector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IConfigurationDataCollector_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IConfigurationDataCollector_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IConfigurationDataCollector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IConfigurationDataCollector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IConfigurationDataCollector_get_DataCollectorSet(This,group) ( (This)->lpVtbl -> get_DataCollectorSet(This,group) )
#define IConfigurationDataCollector_put_DataCollectorSet(This,group) ( (This)->lpVtbl -> put_DataCollectorSet(This,group) )
#define IConfigurationDataCollector_get_DataCollectorType(This,type) ( (This)->lpVtbl -> get_DataCollectorType(This,type) )
#define IConfigurationDataCollector_get_FileName(This,name) ( (This)->lpVtbl -> get_FileName(This,name) )
#define IConfigurationDataCollector_put_FileName(This,name) ( (This)->lpVtbl -> put_FileName(This,name) )
#define IConfigurationDataCollector_get_FileNameFormat(This,format) ( (This)->lpVtbl -> get_FileNameFormat(This,format) )
#define IConfigurationDataCollector_put_FileNameFormat(This,format) ( (This)->lpVtbl -> put_FileNameFormat(This,format) )
#define IConfigurationDataCollector_get_FileNameFormatPattern(This,pattern) ( (This)->lpVtbl -> get_FileNameFormatPattern(This,pattern) )
#define IConfigurationDataCollector_put_FileNameFormatPattern(This,pattern) ( (This)->lpVtbl -> put_FileNameFormatPattern(This,pattern) )
#define IConfigurationDataCollector_get_LatestOutputLocation(This,path) ( (This)->lpVtbl -> get_LatestOutputLocation(This,path) )
#define IConfigurationDataCollector_put_LatestOutputLocation(This,path) ( (This)->lpVtbl -> put_LatestOutputLocation(This,path) )
#define IConfigurationDataCollector_get_LogAppend(This,append) ( (This)->lpVtbl -> get_LogAppend(This,append) )
#define IConfigurationDataCollector_put_LogAppend(This,append) ( (This)->lpVtbl -> put_LogAppend(This,append) )
#define IConfigurationDataCollector_get_LogCircular(This,circular) ( (This)->lpVtbl -> get_LogCircular(This,circular) )
#define IConfigurationDataCollector_put_LogCircular(This,circular) ( (This)->lpVtbl -> put_LogCircular(This,circular) )
#define IConfigurationDataCollector_get_LogOverwrite(This,overwrite) ( (This)->lpVtbl -> get_LogOverwrite(This,overwrite) )
#define IConfigurationDataCollector_put_LogOverwrite(This,overwrite) ( (This)->lpVtbl -> put_LogOverwrite(This,overwrite) )
#define IConfigurationDataCollector_get_Name(This,name) ( (This)->lpVtbl -> get_Name(This,name) )
#define IConfigurationDataCollector_put_Name(This,name) ( (This)->lpVtbl -> put_Name(This,name) )
#define IConfigurationDataCollector_get_OutputLocation(This,path) ( (This)->lpVtbl -> get_OutputLocation(This,path) )
#define IConfigurationDataCollector_get_Index(This,index) ( (This)->lpVtbl -> get_Index(This,index) )
#define IConfigurationDataCollector_put_Index(This,index) ( (This)->lpVtbl -> put_Index(This,index) )
#define IConfigurationDataCollector_get_Xml(This,Xml) ( (This)->lpVtbl -> get_Xml(This,Xml) )
#define IConfigurationDataCollector_SetXml(This,Xml,Validation) ( (This)->lpVtbl -> SetXml(This,Xml,Validation) )
#define IConfigurationDataCollector_CreateOutputLocation(This,Latest,Location) ( (This)->lpVtbl -> CreateOutputLocation(This,Latest,Location) )
#define IConfigurationDataCollector_get_FileMaxCount(This,count) ( (This)->lpVtbl -> get_FileMaxCount(This,count) )
#define IConfigurationDataCollector_put_FileMaxCount(This,count) ( (This)->lpVtbl -> put_FileMaxCount(This,count) )
#define IConfigurationDataCollector_get_FileMaxRecursiveDepth(This,depth) ( (This)->lpVtbl -> get_FileMaxRecursiveDepth(This,depth) )
#define IConfigurationDataCollector_put_FileMaxRecursiveDepth(This,depth) ( (This)->lpVtbl -> put_FileMaxRecursiveDepth(This,depth) )
#define IConfigurationDataCollector_get_FileMaxTotalSize(This,size) ( (This)->lpVtbl -> get_FileMaxTotalSize(This,size) )
#define IConfigurationDataCollector_put_FileMaxTotalSize(This,size) ( (This)->lpVtbl -> put_FileMaxTotalSize(This,size) )
#define IConfigurationDataCollector_get_Files(This,Files) ( (This)->lpVtbl -> get_Files(This,Files) )
#define IConfigurationDataCollector_put_Files(This,Files) ( (This)->lpVtbl -> put_Files(This,Files) )
#define IConfigurationDataCollector_get_ManagementQueries(This,Queries) ( (This)->lpVtbl -> get_ManagementQueries(This,Queries) )
#define IConfigurationDataCollector_put_ManagementQueries(This,Queries) ( (This)->lpVtbl -> put_ManagementQueries(This,Queries) )
#define IConfigurationDataCollector_get_QueryNetworkAdapters(This,network) ( (This)->lpVtbl -> get_QueryNetworkAdapters(This,network) )
#define IConfigurationDataCollector_put_QueryNetworkAdapters(This,network) ( (This)->lpVtbl -> put_QueryNetworkAdapters(This,network) )
#define IConfigurationDataCollector_get_RegistryKeys(This,query) ( (This)->lpVtbl -> get_RegistryKeys(This,query) )
#define IConfigurationDataCollector_put_RegistryKeys(This,query) ( (This)->lpVtbl -> put_RegistryKeys(This,query) )
#define IConfigurationDataCollector_get_RegistryMaxRecursiveDepth(This,depth) ( (This)->lpVtbl -> get_RegistryMaxRecursiveDepth(This,depth) )
#define IConfigurationDataCollector_put_RegistryMaxRecursiveDepth(This,depth) ( (This)->lpVtbl -> put_RegistryMaxRecursiveDepth(This,depth) )
#define IConfigurationDataCollector_get_SystemStateFile(This,FileName) ( (This)->lpVtbl -> get_SystemStateFile(This,FileName) )
#define IConfigurationDataCollector_put_SystemStateFile(This,FileName) ( (This)->lpVtbl -> put_SystemStateFile(This,FileName) )
#endif
#endif
#ifndef __IAlertDataCollector_INTERFACE_DEFINED__
#define __IAlertDataCollector_INTERFACE_DEFINED__
extern const IID IID_IAlertDataCollector;
typedef struct IAlertDataCollectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAlertDataCollector *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAlertDataCollector *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAlertDataCollector *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IAlertDataCollector *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IAlertDataCollector *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IAlertDataCollector *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IAlertDataCollector *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_DataCollectorSet) (IAlertDataCollector *This, IDataCollectorSet **group);
	HRESULT(STDMETHODCALLTYPE *put_DataCollectorSet) (IAlertDataCollector *This, IDataCollectorSet *group);
	HRESULT(STDMETHODCALLTYPE *get_DataCollectorType) (IAlertDataCollector *This, DataCollectorType *type);
	HRESULT(STDMETHODCALLTYPE *get_FileName) (IAlertDataCollector *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *put_FileName) (IAlertDataCollector *This, BSTR name);
	HRESULT(STDMETHODCALLTYPE *get_FileNameFormat) (IAlertDataCollector *This, AutoPathFormat *format);
	HRESULT(STDMETHODCALLTYPE *put_FileNameFormat) (IAlertDataCollector *This, AutoPathFormat format);
	HRESULT(STDMETHODCALLTYPE *get_FileNameFormatPattern) (IAlertDataCollector *This, BSTR *pattern);
	HRESULT(STDMETHODCALLTYPE *put_FileNameFormatPattern) (IAlertDataCollector *This, BSTR pattern);
	HRESULT(STDMETHODCALLTYPE *get_LatestOutputLocation) (IAlertDataCollector *This, BSTR *path);
	HRESULT(STDMETHODCALLTYPE *put_LatestOutputLocation) (IAlertDataCollector *This, BSTR path);
	HRESULT(STDMETHODCALLTYPE *get_LogAppend) (IAlertDataCollector *This, VARIANT_BOOL *append);
	HRESULT(STDMETHODCALLTYPE *put_LogAppend) (IAlertDataCollector *This, VARIANT_BOOL append);
	HRESULT(STDMETHODCALLTYPE *get_LogCircular) (IAlertDataCollector *This, VARIANT_BOOL *circular);
	HRESULT(STDMETHODCALLTYPE *put_LogCircular) (IAlertDataCollector *This, VARIANT_BOOL circular);
	HRESULT(STDMETHODCALLTYPE *get_LogOverwrite) (IAlertDataCollector *This, VARIANT_BOOL *overwrite);
	HRESULT(STDMETHODCALLTYPE *put_LogOverwrite) (IAlertDataCollector *This, VARIANT_BOOL overwrite);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IAlertDataCollector *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *put_Name) (IAlertDataCollector *This, BSTR name);
	HRESULT(STDMETHODCALLTYPE *get_OutputLocation) (IAlertDataCollector *This, BSTR *path);
	HRESULT(STDMETHODCALLTYPE *get_Index) (IAlertDataCollector *This, long *index);
	HRESULT(STDMETHODCALLTYPE *put_Index) (IAlertDataCollector *This, long index);
	HRESULT(STDMETHODCALLTYPE *get_Xml) (IAlertDataCollector *This, BSTR *Xml);
	HRESULT(STDMETHODCALLTYPE *SetXml) (IAlertDataCollector *This, BSTR Xml, IValueMap **Validation);
	HRESULT(STDMETHODCALLTYPE *CreateOutputLocation) (IAlertDataCollector *This, VARIANT_BOOL Latest, BSTR *Location);
	HRESULT(STDMETHODCALLTYPE *get_AlertThresholds) (IAlertDataCollector *This, SAFEARRAY **alerts);
	HRESULT(STDMETHODCALLTYPE *put_AlertThresholds) (IAlertDataCollector *This, SAFEARRAY *alerts);
	HRESULT(STDMETHODCALLTYPE *get_EventLog) (IAlertDataCollector *This, VARIANT_BOOL *log);
	HRESULT(STDMETHODCALLTYPE *put_EventLog) (IAlertDataCollector *This, VARIANT_BOOL log);
	HRESULT(STDMETHODCALLTYPE *get_SampleInterval) (IAlertDataCollector *This, unsigned long *interval);
	HRESULT(STDMETHODCALLTYPE *put_SampleInterval) (IAlertDataCollector *This, unsigned long interval);
	HRESULT(STDMETHODCALLTYPE *get_Task) (IAlertDataCollector *This, BSTR *task);
	HRESULT(STDMETHODCALLTYPE *put_Task) (IAlertDataCollector *This, BSTR task);
	HRESULT(STDMETHODCALLTYPE *get_TaskRunAsSelf) (IAlertDataCollector *This, VARIANT_BOOL *RunAsSelf);
	HRESULT(STDMETHODCALLTYPE *put_TaskRunAsSelf) (IAlertDataCollector *This, VARIANT_BOOL RunAsSelf);
	HRESULT(STDMETHODCALLTYPE *get_TaskArguments) (IAlertDataCollector *This, BSTR *task);
	HRESULT(STDMETHODCALLTYPE *put_TaskArguments) (IAlertDataCollector *This, BSTR task);
	HRESULT(STDMETHODCALLTYPE *get_TaskUserTextArguments) (IAlertDataCollector *This, BSTR *task);
	HRESULT(STDMETHODCALLTYPE *put_TaskUserTextArguments) (IAlertDataCollector *This, BSTR task);
	HRESULT(STDMETHODCALLTYPE *get_TriggerDataCollectorSet) (IAlertDataCollector *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *put_TriggerDataCollectorSet) (IAlertDataCollector *This, BSTR name);
	END_INTERFACE
}  IAlertDataCollectorVtbl;
interface IAlertDataCollector
{
	CONST_VTBL struct IAlertDataCollectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAlertDataCollector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAlertDataCollector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAlertDataCollector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAlertDataCollector_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAlertDataCollector_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAlertDataCollector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAlertDataCollector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAlertDataCollector_get_DataCollectorSet(This,group) ( (This)->lpVtbl -> get_DataCollectorSet(This,group) )
#define IAlertDataCollector_put_DataCollectorSet(This,group) ( (This)->lpVtbl -> put_DataCollectorSet(This,group) )
#define IAlertDataCollector_get_DataCollectorType(This,type) ( (This)->lpVtbl -> get_DataCollectorType(This,type) )
#define IAlertDataCollector_get_FileName(This,name) ( (This)->lpVtbl -> get_FileName(This,name) )
#define IAlertDataCollector_put_FileName(This,name) ( (This)->lpVtbl -> put_FileName(This,name) )
#define IAlertDataCollector_get_FileNameFormat(This,format) ( (This)->lpVtbl -> get_FileNameFormat(This,format) )
#define IAlertDataCollector_put_FileNameFormat(This,format) ( (This)->lpVtbl -> put_FileNameFormat(This,format) )
#define IAlertDataCollector_get_FileNameFormatPattern(This,pattern) ( (This)->lpVtbl -> get_FileNameFormatPattern(This,pattern) )
#define IAlertDataCollector_put_FileNameFormatPattern(This,pattern) ( (This)->lpVtbl -> put_FileNameFormatPattern(This,pattern) )
#define IAlertDataCollector_get_LatestOutputLocation(This,path) ( (This)->lpVtbl -> get_LatestOutputLocation(This,path) )
#define IAlertDataCollector_put_LatestOutputLocation(This,path) ( (This)->lpVtbl -> put_LatestOutputLocation(This,path) )
#define IAlertDataCollector_get_LogAppend(This,append) ( (This)->lpVtbl -> get_LogAppend(This,append) )
#define IAlertDataCollector_put_LogAppend(This,append) ( (This)->lpVtbl -> put_LogAppend(This,append) )
#define IAlertDataCollector_get_LogCircular(This,circular) ( (This)->lpVtbl -> get_LogCircular(This,circular) )
#define IAlertDataCollector_put_LogCircular(This,circular) ( (This)->lpVtbl -> put_LogCircular(This,circular) )
#define IAlertDataCollector_get_LogOverwrite(This,overwrite) ( (This)->lpVtbl -> get_LogOverwrite(This,overwrite) )
#define IAlertDataCollector_put_LogOverwrite(This,overwrite) ( (This)->lpVtbl -> put_LogOverwrite(This,overwrite) )
#define IAlertDataCollector_get_Name(This,name) ( (This)->lpVtbl -> get_Name(This,name) )
#define IAlertDataCollector_put_Name(This,name) ( (This)->lpVtbl -> put_Name(This,name) )
#define IAlertDataCollector_get_OutputLocation(This,path) ( (This)->lpVtbl -> get_OutputLocation(This,path) )
#define IAlertDataCollector_get_Index(This,index) ( (This)->lpVtbl -> get_Index(This,index) )
#define IAlertDataCollector_put_Index(This,index) ( (This)->lpVtbl -> put_Index(This,index) )
#define IAlertDataCollector_get_Xml(This,Xml) ( (This)->lpVtbl -> get_Xml(This,Xml) )
#define IAlertDataCollector_SetXml(This,Xml,Validation) ( (This)->lpVtbl -> SetXml(This,Xml,Validation) )
#define IAlertDataCollector_CreateOutputLocation(This,Latest,Location) ( (This)->lpVtbl -> CreateOutputLocation(This,Latest,Location) )
#define IAlertDataCollector_get_AlertThresholds(This,alerts) ( (This)->lpVtbl -> get_AlertThresholds(This,alerts) )
#define IAlertDataCollector_put_AlertThresholds(This,alerts) ( (This)->lpVtbl -> put_AlertThresholds(This,alerts) )
#define IAlertDataCollector_get_EventLog(This,log) ( (This)->lpVtbl -> get_EventLog(This,log) )
#define IAlertDataCollector_put_EventLog(This,log) ( (This)->lpVtbl -> put_EventLog(This,log) )
#define IAlertDataCollector_get_SampleInterval(This,interval) ( (This)->lpVtbl -> get_SampleInterval(This,interval) )
#define IAlertDataCollector_put_SampleInterval(This,interval) ( (This)->lpVtbl -> put_SampleInterval(This,interval) )
#define IAlertDataCollector_get_Task(This,task) ( (This)->lpVtbl -> get_Task(This,task) )
#define IAlertDataCollector_put_Task(This,task) ( (This)->lpVtbl -> put_Task(This,task) )
#define IAlertDataCollector_get_TaskRunAsSelf(This,RunAsSelf) ( (This)->lpVtbl -> get_TaskRunAsSelf(This,RunAsSelf) )
#define IAlertDataCollector_put_TaskRunAsSelf(This,RunAsSelf) ( (This)->lpVtbl -> put_TaskRunAsSelf(This,RunAsSelf) )
#define IAlertDataCollector_get_TaskArguments(This,task) ( (This)->lpVtbl -> get_TaskArguments(This,task) )
#define IAlertDataCollector_put_TaskArguments(This,task) ( (This)->lpVtbl -> put_TaskArguments(This,task) )
#define IAlertDataCollector_get_TaskUserTextArguments(This,task) ( (This)->lpVtbl -> get_TaskUserTextArguments(This,task) )
#define IAlertDataCollector_put_TaskUserTextArguments(This,task) ( (This)->lpVtbl -> put_TaskUserTextArguments(This,task) )
#define IAlertDataCollector_get_TriggerDataCollectorSet(This,name) ( (This)->lpVtbl -> get_TriggerDataCollectorSet(This,name) )
#define IAlertDataCollector_put_TriggerDataCollectorSet(This,name) ( (This)->lpVtbl -> put_TriggerDataCollectorSet(This,name) )
#endif
#endif
#ifndef __IApiTracingDataCollector_INTERFACE_DEFINED__
#define __IApiTracingDataCollector_INTERFACE_DEFINED__
extern const IID IID_IApiTracingDataCollector;
typedef struct IApiTracingDataCollectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IApiTracingDataCollector *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IApiTracingDataCollector *This);
	ULONG(STDMETHODCALLTYPE *Release) (IApiTracingDataCollector *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IApiTracingDataCollector *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IApiTracingDataCollector *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IApiTracingDataCollector *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IApiTracingDataCollector *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_DataCollectorSet) (IApiTracingDataCollector *This, IDataCollectorSet **group);
	HRESULT(STDMETHODCALLTYPE *put_DataCollectorSet) (IApiTracingDataCollector *This, IDataCollectorSet *group);
	HRESULT(STDMETHODCALLTYPE *get_DataCollectorType) (IApiTracingDataCollector *This, DataCollectorType *type);
	HRESULT(STDMETHODCALLTYPE *get_FileName) (IApiTracingDataCollector *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *put_FileName) (IApiTracingDataCollector *This, BSTR name);
	HRESULT(STDMETHODCALLTYPE *get_FileNameFormat) (IApiTracingDataCollector *This, AutoPathFormat *format);
	HRESULT(STDMETHODCALLTYPE *put_FileNameFormat) (IApiTracingDataCollector *This, AutoPathFormat format);
	HRESULT(STDMETHODCALLTYPE *get_FileNameFormatPattern) (IApiTracingDataCollector *This, BSTR *pattern);
	HRESULT(STDMETHODCALLTYPE *put_FileNameFormatPattern) (IApiTracingDataCollector *This, BSTR pattern);
	HRESULT(STDMETHODCALLTYPE *get_LatestOutputLocation) (IApiTracingDataCollector *This, BSTR *path);
	HRESULT(STDMETHODCALLTYPE *put_LatestOutputLocation) (IApiTracingDataCollector *This, BSTR path);
	HRESULT(STDMETHODCALLTYPE *get_LogAppend) (IApiTracingDataCollector *This, VARIANT_BOOL *append);
	HRESULT(STDMETHODCALLTYPE *put_LogAppend) (IApiTracingDataCollector *This, VARIANT_BOOL append);
	HRESULT(STDMETHODCALLTYPE *get_LogCircular) (IApiTracingDataCollector *This, VARIANT_BOOL *circular);
	HRESULT(STDMETHODCALLTYPE *put_LogCircular) (IApiTracingDataCollector *This, VARIANT_BOOL circular);
	HRESULT(STDMETHODCALLTYPE *get_LogOverwrite) (IApiTracingDataCollector *This, VARIANT_BOOL *overwrite);
	HRESULT(STDMETHODCALLTYPE *put_LogOverwrite) (IApiTracingDataCollector *This, VARIANT_BOOL overwrite);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IApiTracingDataCollector *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *put_Name) (IApiTracingDataCollector *This, BSTR name);
	HRESULT(STDMETHODCALLTYPE *get_OutputLocation) (IApiTracingDataCollector *This, BSTR *path);
	HRESULT(STDMETHODCALLTYPE *get_Index) (IApiTracingDataCollector *This, long *index);
	HRESULT(STDMETHODCALLTYPE *put_Index) (IApiTracingDataCollector *This, long index);
	HRESULT(STDMETHODCALLTYPE *get_Xml) (IApiTracingDataCollector *This, BSTR *Xml);
	HRESULT(STDMETHODCALLTYPE *SetXml) (IApiTracingDataCollector *This, BSTR Xml, IValueMap **Validation);
	HRESULT(STDMETHODCALLTYPE *CreateOutputLocation) (IApiTracingDataCollector *This, VARIANT_BOOL Latest, BSTR *Location);
	HRESULT(STDMETHODCALLTYPE *get_LogApiNamesOnly) (IApiTracingDataCollector *This, VARIANT_BOOL *logapinames);
	HRESULT(STDMETHODCALLTYPE *put_LogApiNamesOnly) (IApiTracingDataCollector *This, VARIANT_BOOL logapinames);
	HRESULT(STDMETHODCALLTYPE *get_LogApisRecursively) (IApiTracingDataCollector *This, VARIANT_BOOL *logrecursively);
	HRESULT(STDMETHODCALLTYPE *put_LogApisRecursively) (IApiTracingDataCollector *This, VARIANT_BOOL logrecursively);
	HRESULT(STDMETHODCALLTYPE *get_ExePath) (IApiTracingDataCollector *This, BSTR *exepath);
	HRESULT(STDMETHODCALLTYPE *put_ExePath) (IApiTracingDataCollector *This, BSTR exepath);
	HRESULT(STDMETHODCALLTYPE *get_LogFilePath) (IApiTracingDataCollector *This, BSTR *logfilepath);
	HRESULT(STDMETHODCALLTYPE *put_LogFilePath) (IApiTracingDataCollector *This, BSTR logfilepath);
	HRESULT(STDMETHODCALLTYPE *get_IncludeModules) (IApiTracingDataCollector *This, SAFEARRAY **includemodules);
	HRESULT(STDMETHODCALLTYPE *put_IncludeModules) (IApiTracingDataCollector *This, SAFEARRAY *includemodules);
	HRESULT(STDMETHODCALLTYPE *get_IncludeApis) (IApiTracingDataCollector *This, SAFEARRAY **includeapis);
	HRESULT(STDMETHODCALLTYPE *put_IncludeApis) (IApiTracingDataCollector *This, SAFEARRAY *includeapis);
	HRESULT(STDMETHODCALLTYPE *get_ExcludeApis) (IApiTracingDataCollector *This, SAFEARRAY **excludeapis);
	HRESULT(STDMETHODCALLTYPE *put_ExcludeApis) (IApiTracingDataCollector *This, SAFEARRAY *excludeapis);
	END_INTERFACE
}  IApiTracingDataCollectorVtbl;
interface IApiTracingDataCollector
{
	CONST_VTBL struct IApiTracingDataCollectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IApiTracingDataCollector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IApiTracingDataCollector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IApiTracingDataCollector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IApiTracingDataCollector_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IApiTracingDataCollector_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IApiTracingDataCollector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IApiTracingDataCollector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IApiTracingDataCollector_get_DataCollectorSet(This,group) ( (This)->lpVtbl -> get_DataCollectorSet(This,group) )
#define IApiTracingDataCollector_put_DataCollectorSet(This,group) ( (This)->lpVtbl -> put_DataCollectorSet(This,group) )
#define IApiTracingDataCollector_get_DataCollectorType(This,type) ( (This)->lpVtbl -> get_DataCollectorType(This,type) )
#define IApiTracingDataCollector_get_FileName(This,name) ( (This)->lpVtbl -> get_FileName(This,name) )
#define IApiTracingDataCollector_put_FileName(This,name) ( (This)->lpVtbl -> put_FileName(This,name) )
#define IApiTracingDataCollector_get_FileNameFormat(This,format) ( (This)->lpVtbl -> get_FileNameFormat(This,format) )
#define IApiTracingDataCollector_put_FileNameFormat(This,format) ( (This)->lpVtbl -> put_FileNameFormat(This,format) )
#define IApiTracingDataCollector_get_FileNameFormatPattern(This,pattern) ( (This)->lpVtbl -> get_FileNameFormatPattern(This,pattern) )
#define IApiTracingDataCollector_put_FileNameFormatPattern(This,pattern) ( (This)->lpVtbl -> put_FileNameFormatPattern(This,pattern) )
#define IApiTracingDataCollector_get_LatestOutputLocation(This,path) ( (This)->lpVtbl -> get_LatestOutputLocation(This,path) )
#define IApiTracingDataCollector_put_LatestOutputLocation(This,path) ( (This)->lpVtbl -> put_LatestOutputLocation(This,path) )
#define IApiTracingDataCollector_get_LogAppend(This,append) ( (This)->lpVtbl -> get_LogAppend(This,append) )
#define IApiTracingDataCollector_put_LogAppend(This,append) ( (This)->lpVtbl -> put_LogAppend(This,append) )
#define IApiTracingDataCollector_get_LogCircular(This,circular) ( (This)->lpVtbl -> get_LogCircular(This,circular) )
#define IApiTracingDataCollector_put_LogCircular(This,circular) ( (This)->lpVtbl -> put_LogCircular(This,circular) )
#define IApiTracingDataCollector_get_LogOverwrite(This,overwrite) ( (This)->lpVtbl -> get_LogOverwrite(This,overwrite) )
#define IApiTracingDataCollector_put_LogOverwrite(This,overwrite) ( (This)->lpVtbl -> put_LogOverwrite(This,overwrite) )
#define IApiTracingDataCollector_get_Name(This,name) ( (This)->lpVtbl -> get_Name(This,name) )
#define IApiTracingDataCollector_put_Name(This,name) ( (This)->lpVtbl -> put_Name(This,name) )
#define IApiTracingDataCollector_get_OutputLocation(This,path) ( (This)->lpVtbl -> get_OutputLocation(This,path) )
#define IApiTracingDataCollector_get_Index(This,index) ( (This)->lpVtbl -> get_Index(This,index) )
#define IApiTracingDataCollector_put_Index(This,index) ( (This)->lpVtbl -> put_Index(This,index) )
#define IApiTracingDataCollector_get_Xml(This,Xml) ( (This)->lpVtbl -> get_Xml(This,Xml) )
#define IApiTracingDataCollector_SetXml(This,Xml,Validation) ( (This)->lpVtbl -> SetXml(This,Xml,Validation) )
#define IApiTracingDataCollector_CreateOutputLocation(This,Latest,Location) ( (This)->lpVtbl -> CreateOutputLocation(This,Latest,Location) )
#define IApiTracingDataCollector_get_LogApiNamesOnly(This,logapinames) ( (This)->lpVtbl -> get_LogApiNamesOnly(This,logapinames) )
#define IApiTracingDataCollector_put_LogApiNamesOnly(This,logapinames) ( (This)->lpVtbl -> put_LogApiNamesOnly(This,logapinames) )
#define IApiTracingDataCollector_get_LogApisRecursively(This,logrecursively) ( (This)->lpVtbl -> get_LogApisRecursively(This,logrecursively) )
#define IApiTracingDataCollector_put_LogApisRecursively(This,logrecursively) ( (This)->lpVtbl -> put_LogApisRecursively(This,logrecursively) )
#define IApiTracingDataCollector_get_ExePath(This,exepath) ( (This)->lpVtbl -> get_ExePath(This,exepath) )
#define IApiTracingDataCollector_put_ExePath(This,exepath) ( (This)->lpVtbl -> put_ExePath(This,exepath) )
#define IApiTracingDataCollector_get_LogFilePath(This,logfilepath) ( (This)->lpVtbl -> get_LogFilePath(This,logfilepath) )
#define IApiTracingDataCollector_put_LogFilePath(This,logfilepath) ( (This)->lpVtbl -> put_LogFilePath(This,logfilepath) )
#define IApiTracingDataCollector_get_IncludeModules(This,includemodules) ( (This)->lpVtbl -> get_IncludeModules(This,includemodules) )
#define IApiTracingDataCollector_put_IncludeModules(This,includemodules) ( (This)->lpVtbl -> put_IncludeModules(This,includemodules) )
#define IApiTracingDataCollector_get_IncludeApis(This,includeapis) ( (This)->lpVtbl -> get_IncludeApis(This,includeapis) )
#define IApiTracingDataCollector_put_IncludeApis(This,includeapis) ( (This)->lpVtbl -> put_IncludeApis(This,includeapis) )
#define IApiTracingDataCollector_get_ExcludeApis(This,excludeapis) ( (This)->lpVtbl -> get_ExcludeApis(This,excludeapis) )
#define IApiTracingDataCollector_put_ExcludeApis(This,excludeapis) ( (This)->lpVtbl -> put_ExcludeApis(This,excludeapis) )
#endif
#endif
#ifndef __IDataCollectorCollection_INTERFACE_DEFINED__
#define __IDataCollectorCollection_INTERFACE_DEFINED__
extern const IID IID_IDataCollectorCollection;
typedef struct IDataCollectorCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDataCollectorCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDataCollectorCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDataCollectorCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IDataCollectorCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IDataCollectorCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IDataCollectorCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IDataCollectorCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IDataCollectorCollection *This, long *retVal);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IDataCollectorCollection *This, VARIANT index, IDataCollector **collector);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IDataCollectorCollection *This, IUnknown **retVal);
	HRESULT(STDMETHODCALLTYPE *Add) (IDataCollectorCollection *This, IDataCollector *collector);
	HRESULT(STDMETHODCALLTYPE *Remove) (IDataCollectorCollection *This, VARIANT collector);
	HRESULT(STDMETHODCALLTYPE *Clear) (IDataCollectorCollection *This);
	HRESULT(STDMETHODCALLTYPE *AddRange) (IDataCollectorCollection *This, IDataCollectorCollection *collectors);
	HRESULT(STDMETHODCALLTYPE *CreateDataCollectorFromXml) (IDataCollectorCollection *This, BSTR bstrXml, IValueMap **pValidation, IDataCollector **pCollector);
	HRESULT(STDMETHODCALLTYPE *CreateDataCollector) (IDataCollectorCollection *This, DataCollectorType Type, IDataCollector **Collector);
	END_INTERFACE
}  IDataCollectorCollectionVtbl;
interface IDataCollectorCollection
{
	CONST_VTBL struct IDataCollectorCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDataCollectorCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDataCollectorCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDataCollectorCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDataCollectorCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDataCollectorCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDataCollectorCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDataCollectorCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDataCollectorCollection_get_Count(This,retVal) ( (This)->lpVtbl -> get_Count(This,retVal) )
#define IDataCollectorCollection_get_Item(This,index,collector) ( (This)->lpVtbl -> get_Item(This,index,collector) )
#define IDataCollectorCollection_get__NewEnum(This,retVal) ( (This)->lpVtbl -> get__NewEnum(This,retVal) )
#define IDataCollectorCollection_Add(This,collector) ( (This)->lpVtbl -> Add(This,collector) )
#define IDataCollectorCollection_Remove(This,collector) ( (This)->lpVtbl -> Remove(This,collector) )
#define IDataCollectorCollection_Clear(This) ( (This)->lpVtbl -> Clear(This) )
#define IDataCollectorCollection_AddRange(This,collectors) ( (This)->lpVtbl -> AddRange(This,collectors) )
#define IDataCollectorCollection_CreateDataCollectorFromXml(This,bstrXml,pValidation,pCollector) ( (This)->lpVtbl -> CreateDataCollectorFromXml(This,bstrXml,pValidation,pCollector) )
#define IDataCollectorCollection_CreateDataCollector(This,Type,Collector) ( (This)->lpVtbl -> CreateDataCollector(This,Type,Collector) )
#endif
#endif
#ifndef __IDataCollectorSetCollection_INTERFACE_DEFINED__
#define __IDataCollectorSetCollection_INTERFACE_DEFINED__
extern const IID IID_IDataCollectorSetCollection;
typedef struct IDataCollectorSetCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDataCollectorSetCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDataCollectorSetCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDataCollectorSetCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IDataCollectorSetCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IDataCollectorSetCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IDataCollectorSetCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IDataCollectorSetCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IDataCollectorSetCollection *This, long *retVal);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IDataCollectorSetCollection *This, VARIANT index, IDataCollectorSet **set);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IDataCollectorSetCollection *This, IUnknown **retVal);
	HRESULT(STDMETHODCALLTYPE *Add) (IDataCollectorSetCollection *This, IDataCollectorSet *set);
	HRESULT(STDMETHODCALLTYPE *Remove) (IDataCollectorSetCollection *This, VARIANT set);
	HRESULT(STDMETHODCALLTYPE *Clear) (IDataCollectorSetCollection *This);
	HRESULT(STDMETHODCALLTYPE *AddRange) (IDataCollectorSetCollection *This, IDataCollectorSetCollection *sets);
	HRESULT(STDMETHODCALLTYPE *GetDataCollectorSets) (IDataCollectorSetCollection *This, BSTR server, BSTR filter);
	END_INTERFACE
}  IDataCollectorSetCollectionVtbl;
interface IDataCollectorSetCollection
{
	CONST_VTBL struct IDataCollectorSetCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDataCollectorSetCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDataCollectorSetCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDataCollectorSetCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDataCollectorSetCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDataCollectorSetCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDataCollectorSetCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDataCollectorSetCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDataCollectorSetCollection_get_Count(This,retVal) ( (This)->lpVtbl -> get_Count(This,retVal) )
#define IDataCollectorSetCollection_get_Item(This,index,set) ( (This)->lpVtbl -> get_Item(This,index,set) )
#define IDataCollectorSetCollection_get__NewEnum(This,retVal) ( (This)->lpVtbl -> get__NewEnum(This,retVal) )
#define IDataCollectorSetCollection_Add(This,set) ( (This)->lpVtbl -> Add(This,set) )
#define IDataCollectorSetCollection_Remove(This,set) ( (This)->lpVtbl -> Remove(This,set) )
#define IDataCollectorSetCollection_Clear(This) ( (This)->lpVtbl -> Clear(This) )
#define IDataCollectorSetCollection_AddRange(This,sets) ( (This)->lpVtbl -> AddRange(This,sets) )
#define IDataCollectorSetCollection_GetDataCollectorSets(This,server,filter) ( (This)->lpVtbl -> GetDataCollectorSets(This,server,filter) )
#endif
#endif
#ifndef __ITraceDataProvider_INTERFACE_DEFINED__
#define __ITraceDataProvider_INTERFACE_DEFINED__
extern const IID IID_ITraceDataProvider;
typedef struct ITraceDataProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITraceDataProvider *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITraceDataProvider *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITraceDataProvider *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (ITraceDataProvider *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (ITraceDataProvider *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (ITraceDataProvider *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (ITraceDataProvider *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_DisplayName) (ITraceDataProvider *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *put_DisplayName) (ITraceDataProvider *This, BSTR name);
	HRESULT(STDMETHODCALLTYPE *get_Guid) (ITraceDataProvider *This, GUID *guid);
	HRESULT(STDMETHODCALLTYPE *put_Guid) (ITraceDataProvider *This, GUID guid);
	HRESULT(STDMETHODCALLTYPE *get_Level) (ITraceDataProvider *This, IValueMap **ppLevel);
	HRESULT(STDMETHODCALLTYPE *get_KeywordsAny) (ITraceDataProvider *This, IValueMap **ppKeywords);
	HRESULT(STDMETHODCALLTYPE *get_KeywordsAll) (ITraceDataProvider *This, IValueMap **ppKeywords);
	HRESULT(STDMETHODCALLTYPE *get_Properties) (ITraceDataProvider *This, IValueMap **ppProperties);
	HRESULT(STDMETHODCALLTYPE *get_FilterEnabled) (ITraceDataProvider *This, VARIANT_BOOL *FilterEnabled);
	HRESULT(STDMETHODCALLTYPE *put_FilterEnabled) (ITraceDataProvider *This, VARIANT_BOOL FilterEnabled);
	HRESULT(STDMETHODCALLTYPE *get_FilterType) (ITraceDataProvider *This, ULONG *pulType);
	HRESULT(STDMETHODCALLTYPE *put_FilterType) (ITraceDataProvider *This, ULONG ulType);
	HRESULT(STDMETHODCALLTYPE *get_FilterData) (ITraceDataProvider *This, SAFEARRAY **ppData);
	HRESULT(STDMETHODCALLTYPE *put_FilterData) (ITraceDataProvider *This, SAFEARRAY *pData);
	HRESULT(STDMETHODCALLTYPE *Query) (ITraceDataProvider *This, BSTR bstrName, BSTR bstrServer);
	HRESULT(STDMETHODCALLTYPE *Resolve) (ITraceDataProvider *This, IDispatch *pFrom);
	HRESULT(STDMETHODCALLTYPE *SetSecurity) (ITraceDataProvider *This, BSTR Sddl);
	HRESULT(STDMETHODCALLTYPE *GetSecurity) (ITraceDataProvider *This, ULONG SecurityInfo, BSTR *Sddl);
	HRESULT(STDMETHODCALLTYPE *GetRegisteredProcesses) (ITraceDataProvider *This, IValueMap **Processes);
	END_INTERFACE
}  ITraceDataProviderVtbl;
interface ITraceDataProvider
{
	CONST_VTBL struct ITraceDataProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITraceDataProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITraceDataProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITraceDataProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITraceDataProvider_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITraceDataProvider_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITraceDataProvider_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITraceDataProvider_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITraceDataProvider_get_DisplayName(This,name) ( (This)->lpVtbl -> get_DisplayName(This,name) )
#define ITraceDataProvider_put_DisplayName(This,name) ( (This)->lpVtbl -> put_DisplayName(This,name) )
#define ITraceDataProvider_get_Guid(This,guid) ( (This)->lpVtbl -> get_Guid(This,guid) )
#define ITraceDataProvider_put_Guid(This,guid) ( (This)->lpVtbl -> put_Guid(This,guid) )
#define ITraceDataProvider_get_Level(This,ppLevel) ( (This)->lpVtbl -> get_Level(This,ppLevel) )
#define ITraceDataProvider_get_KeywordsAny(This,ppKeywords) ( (This)->lpVtbl -> get_KeywordsAny(This,ppKeywords) )
#define ITraceDataProvider_get_KeywordsAll(This,ppKeywords) ( (This)->lpVtbl -> get_KeywordsAll(This,ppKeywords) )
#define ITraceDataProvider_get_Properties(This,ppProperties) ( (This)->lpVtbl -> get_Properties(This,ppProperties) )
#define ITraceDataProvider_get_FilterEnabled(This,FilterEnabled) ( (This)->lpVtbl -> get_FilterEnabled(This,FilterEnabled) )
#define ITraceDataProvider_put_FilterEnabled(This,FilterEnabled) ( (This)->lpVtbl -> put_FilterEnabled(This,FilterEnabled) )
#define ITraceDataProvider_get_FilterType(This,pulType) ( (This)->lpVtbl -> get_FilterType(This,pulType) )
#define ITraceDataProvider_put_FilterType(This,ulType) ( (This)->lpVtbl -> put_FilterType(This,ulType) )
#define ITraceDataProvider_get_FilterData(This,ppData) ( (This)->lpVtbl -> get_FilterData(This,ppData) )
#define ITraceDataProvider_put_FilterData(This,pData) ( (This)->lpVtbl -> put_FilterData(This,pData) )
#define ITraceDataProvider_Query(This,bstrName,bstrServer) ( (This)->lpVtbl -> Query(This,bstrName,bstrServer) )
#define ITraceDataProvider_Resolve(This,pFrom) ( (This)->lpVtbl -> Resolve(This,pFrom) )
#define ITraceDataProvider_SetSecurity(This,Sddl) ( (This)->lpVtbl -> SetSecurity(This,Sddl) )
#define ITraceDataProvider_GetSecurity(This,SecurityInfo,Sddl) ( (This)->lpVtbl -> GetSecurity(This,SecurityInfo,Sddl) )
#define ITraceDataProvider_GetRegisteredProcesses(This,Processes) ( (This)->lpVtbl -> GetRegisteredProcesses(This,Processes) )
#endif
#endif
#ifndef __ITraceDataProviderCollection_INTERFACE_DEFINED__
#define __ITraceDataProviderCollection_INTERFACE_DEFINED__
extern const IID IID_ITraceDataProviderCollection;
typedef struct ITraceDataProviderCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITraceDataProviderCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITraceDataProviderCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITraceDataProviderCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (ITraceDataProviderCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (ITraceDataProviderCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (ITraceDataProviderCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (ITraceDataProviderCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (ITraceDataProviderCollection *This, long *retVal);
	HRESULT(STDMETHODCALLTYPE *get_Item) (ITraceDataProviderCollection *This, VARIANT index, ITraceDataProvider **ppProvider);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (ITraceDataProviderCollection *This, IUnknown **retVal);
	HRESULT(STDMETHODCALLTYPE *Add) (ITraceDataProviderCollection *This, ITraceDataProvider *pProvider);
	HRESULT(STDMETHODCALLTYPE *Remove) (ITraceDataProviderCollection *This, VARIANT vProvider);
	HRESULT(STDMETHODCALLTYPE *Clear) (ITraceDataProviderCollection *This);
	HRESULT(STDMETHODCALLTYPE *AddRange) (ITraceDataProviderCollection *This, ITraceDataProviderCollection *providers);
	HRESULT(STDMETHODCALLTYPE *CreateTraceDataProvider) (ITraceDataProviderCollection *This, ITraceDataProvider **Provider);
	HRESULT(STDMETHODCALLTYPE *GetTraceDataProviders) (ITraceDataProviderCollection *This, BSTR server);
	HRESULT(STDMETHODCALLTYPE *GetTraceDataProvidersByProcess) (ITraceDataProviderCollection *This, BSTR Server, ULONG Pid);
	END_INTERFACE
}  ITraceDataProviderCollectionVtbl;
interface ITraceDataProviderCollection
{
	CONST_VTBL struct ITraceDataProviderCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITraceDataProviderCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITraceDataProviderCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITraceDataProviderCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITraceDataProviderCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITraceDataProviderCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITraceDataProviderCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITraceDataProviderCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITraceDataProviderCollection_get_Count(This,retVal) ( (This)->lpVtbl -> get_Count(This,retVal) )
#define ITraceDataProviderCollection_get_Item(This,index,ppProvider) ( (This)->lpVtbl -> get_Item(This,index,ppProvider) )
#define ITraceDataProviderCollection_get__NewEnum(This,retVal) ( (This)->lpVtbl -> get__NewEnum(This,retVal) )
#define ITraceDataProviderCollection_Add(This,pProvider) ( (This)->lpVtbl -> Add(This,pProvider) )
#define ITraceDataProviderCollection_Remove(This,vProvider) ( (This)->lpVtbl -> Remove(This,vProvider) )
#define ITraceDataProviderCollection_Clear(This) ( (This)->lpVtbl -> Clear(This) )
#define ITraceDataProviderCollection_AddRange(This,providers) ( (This)->lpVtbl -> AddRange(This,providers) )
#define ITraceDataProviderCollection_CreateTraceDataProvider(This,Provider) ( (This)->lpVtbl -> CreateTraceDataProvider(This,Provider) )
#define ITraceDataProviderCollection_GetTraceDataProviders(This,server) ( (This)->lpVtbl -> GetTraceDataProviders(This,server) )
#define ITraceDataProviderCollection_GetTraceDataProvidersByProcess(This,Server,Pid) ( (This)->lpVtbl -> GetTraceDataProvidersByProcess(This,Server,Pid) )
#endif
#endif
#ifndef __ISchedule_INTERFACE_DEFINED__
#define __ISchedule_INTERFACE_DEFINED__
extern const IID IID_ISchedule;
typedef struct IScheduleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISchedule *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISchedule *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISchedule *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (ISchedule *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (ISchedule *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (ISchedule *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (ISchedule *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_StartDate) (ISchedule *This, VARIANT *start);
	HRESULT(STDMETHODCALLTYPE *put_StartDate) (ISchedule *This, VARIANT start);
	HRESULT(STDMETHODCALLTYPE *get_EndDate) (ISchedule *This, VARIANT *end);
	HRESULT(STDMETHODCALLTYPE *put_EndDate) (ISchedule *This, VARIANT end);
	HRESULT(STDMETHODCALLTYPE *get_StartTime) (ISchedule *This, VARIANT *start);
	HRESULT(STDMETHODCALLTYPE *put_StartTime) (ISchedule *This, VARIANT start);
	HRESULT(STDMETHODCALLTYPE *get_Days) (ISchedule *This, WeekDays *days);
	HRESULT(STDMETHODCALLTYPE *put_Days) (ISchedule *This, WeekDays days);
	END_INTERFACE
}  IScheduleVtbl;
interface ISchedule
{
	CONST_VTBL struct IScheduleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISchedule_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISchedule_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISchedule_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISchedule_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISchedule_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISchedule_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISchedule_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISchedule_get_StartDate(This,start) ( (This)->lpVtbl -> get_StartDate(This,start) )
#define ISchedule_put_StartDate(This,start) ( (This)->lpVtbl -> put_StartDate(This,start) )
#define ISchedule_get_EndDate(This,end) ( (This)->lpVtbl -> get_EndDate(This,end) )
#define ISchedule_put_EndDate(This,end) ( (This)->lpVtbl -> put_EndDate(This,end) )
#define ISchedule_get_StartTime(This,start) ( (This)->lpVtbl -> get_StartTime(This,start) )
#define ISchedule_put_StartTime(This,start) ( (This)->lpVtbl -> put_StartTime(This,start) )
#define ISchedule_get_Days(This,days) ( (This)->lpVtbl -> get_Days(This,days) )
#define ISchedule_put_Days(This,days) ( (This)->lpVtbl -> put_Days(This,days) )
#endif
#endif
#ifndef __IScheduleCollection_INTERFACE_DEFINED__
#define __IScheduleCollection_INTERFACE_DEFINED__
extern const IID IID_IScheduleCollection;
typedef struct IScheduleCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IScheduleCollection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IScheduleCollection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IScheduleCollection *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IScheduleCollection *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IScheduleCollection *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IScheduleCollection *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IScheduleCollection *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IScheduleCollection *This, long *retVal);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IScheduleCollection *This, VARIANT index, ISchedule **ppSchedule);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IScheduleCollection *This, IUnknown **ienum);
	HRESULT(STDMETHODCALLTYPE *Add) (IScheduleCollection *This, ISchedule *pSchedule);
	HRESULT(STDMETHODCALLTYPE *Remove) (IScheduleCollection *This, VARIANT vSchedule);
	HRESULT(STDMETHODCALLTYPE *Clear) (IScheduleCollection *This);
	HRESULT(STDMETHODCALLTYPE *AddRange) (IScheduleCollection *This, IScheduleCollection *pSchedules);
	HRESULT(STDMETHODCALLTYPE *CreateSchedule) (IScheduleCollection *This, ISchedule **Schedule);
	END_INTERFACE
}  IScheduleCollectionVtbl;
interface IScheduleCollection
{
	CONST_VTBL struct IScheduleCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IScheduleCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IScheduleCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IScheduleCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IScheduleCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IScheduleCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IScheduleCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IScheduleCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IScheduleCollection_get_Count(This,retVal) ( (This)->lpVtbl -> get_Count(This,retVal) )
#define IScheduleCollection_get_Item(This,index,ppSchedule) ( (This)->lpVtbl -> get_Item(This,index,ppSchedule) )
#define IScheduleCollection_get__NewEnum(This,ienum) ( (This)->lpVtbl -> get__NewEnum(This,ienum) )
#define IScheduleCollection_Add(This,pSchedule) ( (This)->lpVtbl -> Add(This,pSchedule) )
#define IScheduleCollection_Remove(This,vSchedule) ( (This)->lpVtbl -> Remove(This,vSchedule) )
#define IScheduleCollection_Clear(This) ( (This)->lpVtbl -> Clear(This) )
#define IScheduleCollection_AddRange(This,pSchedules) ( (This)->lpVtbl -> AddRange(This,pSchedules) )
#define IScheduleCollection_CreateSchedule(This,Schedule) ( (This)->lpVtbl -> CreateSchedule(This,Schedule) )
#endif
#endif
#ifndef __IValueMapItem_INTERFACE_DEFINED__
#define __IValueMapItem_INTERFACE_DEFINED__
extern const IID IID_IValueMapItem;
typedef struct IValueMapItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IValueMapItem *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IValueMapItem *This);
	ULONG(STDMETHODCALLTYPE *Release) (IValueMapItem *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IValueMapItem *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IValueMapItem *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IValueMapItem *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IValueMapItem *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Description) (IValueMapItem *This, BSTR *description);
	HRESULT(STDMETHODCALLTYPE *put_Description) (IValueMapItem *This, BSTR description);
	HRESULT(STDMETHODCALLTYPE *get_Enabled) (IValueMapItem *This, VARIANT_BOOL *enabled);
	HRESULT(STDMETHODCALLTYPE *put_Enabled) (IValueMapItem *This, VARIANT_BOOL enabled);
	HRESULT(STDMETHODCALLTYPE *get_Key) (IValueMapItem *This, BSTR *key);
	HRESULT(STDMETHODCALLTYPE *put_Key) (IValueMapItem *This, BSTR key);
	HRESULT(STDMETHODCALLTYPE *get_Value) (IValueMapItem *This, VARIANT *Value);
	HRESULT(STDMETHODCALLTYPE *put_Value) (IValueMapItem *This, VARIANT Value);
	HRESULT(STDMETHODCALLTYPE *get_ValueMapType) (IValueMapItem *This, ValueMapType *type);
	HRESULT(STDMETHODCALLTYPE *put_ValueMapType) (IValueMapItem *This, ValueMapType type);
	END_INTERFACE
}  IValueMapItemVtbl;
interface IValueMapItem
{
	CONST_VTBL struct IValueMapItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IValueMapItem_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IValueMapItem_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IValueMapItem_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IValueMapItem_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IValueMapItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IValueMapItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IValueMapItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IValueMapItem_get_Description(This,description) ( (This)->lpVtbl -> get_Description(This,description) )
#define IValueMapItem_put_Description(This,description) ( (This)->lpVtbl -> put_Description(This,description) )
#define IValueMapItem_get_Enabled(This,enabled) ( (This)->lpVtbl -> get_Enabled(This,enabled) )
#define IValueMapItem_put_Enabled(This,enabled) ( (This)->lpVtbl -> put_Enabled(This,enabled) )
#define IValueMapItem_get_Key(This,key) ( (This)->lpVtbl -> get_Key(This,key) )
#define IValueMapItem_put_Key(This,key) ( (This)->lpVtbl -> put_Key(This,key) )
#define IValueMapItem_get_Value(This,Value) ( (This)->lpVtbl -> get_Value(This,Value) )
#define IValueMapItem_put_Value(This,Value) ( (This)->lpVtbl -> put_Value(This,Value) )
#define IValueMapItem_get_ValueMapType(This,type) ( (This)->lpVtbl -> get_ValueMapType(This,type) )
#define IValueMapItem_put_ValueMapType(This,type) ( (This)->lpVtbl -> put_ValueMapType(This,type) )
#endif
#endif
#ifndef __IValueMap_INTERFACE_DEFINED__
#define __IValueMap_INTERFACE_DEFINED__
extern const IID IID_IValueMap;
typedef struct IValueMapVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IValueMap *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IValueMap *This);
	ULONG(STDMETHODCALLTYPE *Release) (IValueMap *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IValueMap *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IValueMap *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IValueMap *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IValueMap *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IValueMap *This, long *retVal);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IValueMap *This, VARIANT index, IValueMapItem **value);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IValueMap *This, IUnknown **retVal);
	HRESULT(STDMETHODCALLTYPE *get_Description) (IValueMap *This, BSTR *description);
	HRESULT(STDMETHODCALLTYPE *put_Description) (IValueMap *This, BSTR description);
	HRESULT(STDMETHODCALLTYPE *get_Value) (IValueMap *This, VARIANT *Value);
	HRESULT(STDMETHODCALLTYPE *put_Value) (IValueMap *This, VARIANT Value);
	HRESULT(STDMETHODCALLTYPE *get_ValueMapType) (IValueMap *This, ValueMapType *type);
	HRESULT(STDMETHODCALLTYPE *put_ValueMapType) (IValueMap *This, ValueMapType type);
	HRESULT(STDMETHODCALLTYPE *Add) (IValueMap *This, VARIANT value);
	HRESULT(STDMETHODCALLTYPE *Remove) (IValueMap *This, VARIANT value);
	HRESULT(STDMETHODCALLTYPE *Clear) (IValueMap *This);
	HRESULT(STDMETHODCALLTYPE *AddRange) (IValueMap *This, IValueMap *map);
	HRESULT(STDMETHODCALLTYPE *CreateValueMapItem) (IValueMap *This, IValueMapItem **Item);
	END_INTERFACE
}  IValueMapVtbl;
interface IValueMap
{
	CONST_VTBL struct IValueMapVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IValueMap_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IValueMap_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IValueMap_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IValueMap_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IValueMap_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IValueMap_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IValueMap_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IValueMap_get_Count(This,retVal) ( (This)->lpVtbl -> get_Count(This,retVal) )
#define IValueMap_get_Item(This,index,value) ( (This)->lpVtbl -> get_Item(This,index,value) )
#define IValueMap_get__NewEnum(This,retVal) ( (This)->lpVtbl -> get__NewEnum(This,retVal) )
#define IValueMap_get_Description(This,description) ( (This)->lpVtbl -> get_Description(This,description) )
#define IValueMap_put_Description(This,description) ( (This)->lpVtbl -> put_Description(This,description) )
#define IValueMap_get_Value(This,Value) ( (This)->lpVtbl -> get_Value(This,Value) )
#define IValueMap_put_Value(This,Value) ( (This)->lpVtbl -> put_Value(This,Value) )
#define IValueMap_get_ValueMapType(This,type) ( (This)->lpVtbl -> get_ValueMapType(This,type) )
#define IValueMap_put_ValueMapType(This,type) ( (This)->lpVtbl -> put_ValueMapType(This,type) )
#define IValueMap_Add(This,value) ( (This)->lpVtbl -> Add(This,value) )
#define IValueMap_Remove(This,value) ( (This)->lpVtbl -> Remove(This,value) )
#define IValueMap_Clear(This) ( (This)->lpVtbl -> Clear(This) )
#define IValueMap_AddRange(This,map) ( (This)->lpVtbl -> AddRange(This,map) )
#define IValueMap_CreateValueMapItem(This,Item) ( (This)->lpVtbl -> CreateValueMapItem(This,Item) )
#endif
#endif
extern const CLSID CLSID_DataCollectorSet;
extern const CLSID CLSID_TraceSession;
extern const CLSID CLSID_TraceSessionCollection;
extern const CLSID CLSID_TraceDataProvider;
extern const CLSID CLSID_TraceDataProviderCollection;
extern const CLSID CLSID_DataCollectorSetCollection;
extern const CLSID CLSID_LegacyDataCollectorSet;
extern const CLSID CLSID_LegacyDataCollectorSetCollection;
extern const CLSID CLSID_LegacyTraceSession;
extern const CLSID CLSID_LegacyTraceSessionCollection;
extern const CLSID CLSID_ServerDataCollectorSet;
extern const CLSID CLSID_ServerDataCollectorSetCollection;
extern const CLSID CLSID_SystemDataCollectorSet;
extern const CLSID CLSID_SystemDataCollectorSetCollection;
extern const CLSID CLSID_BootTraceSession;
extern const CLSID CLSID_BootTraceSessionCollection;
#endif
#endif
