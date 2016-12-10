/*+@@file@@----------------------------------------------------------------*//*!
 \file		mstask.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 21:15:40 2016
 \date		Modified on Sat Jul  2 21:15:40 2016
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
#ifndef __mstask_h__
#define __mstask_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITaskTrigger_FWD_DEFINED__
#define __ITaskTrigger_FWD_DEFINED__
typedef interface ITaskTrigger ITaskTrigger;
#endif
#ifndef __IScheduledWorkItem_FWD_DEFINED__
#define __IScheduledWorkItem_FWD_DEFINED__
typedef interface IScheduledWorkItem IScheduledWorkItem;
#endif
#ifndef __ITask_FWD_DEFINED__
#define __ITask_FWD_DEFINED__
typedef interface ITask ITask;
#endif
#ifndef __IEnumWorkItems_FWD_DEFINED__
#define __IEnumWorkItems_FWD_DEFINED__
typedef interface IEnumWorkItems IEnumWorkItems;
#endif
#ifndef __ITaskScheduler_FWD_DEFINED__
#define __ITaskScheduler_FWD_DEFINED__
typedef interface ITaskScheduler ITaskScheduler;
#endif
#ifndef __IProvideTaskPage_FWD_DEFINED__
#define __IProvideTaskPage_FWD_DEFINED__
typedef interface IProvideTaskPage IProvideTaskPage;
#endif
#include <oaidl.h>
#include <oleidl.h>
#define TASK_SUNDAY       (0x1)
#define TASK_MONDAY       (0x2)
#define TASK_TUESDAY      (0x4)
#define TASK_WEDNESDAY    (0x8)
#define TASK_THURSDAY     (0x10)
#define TASK_FRIDAY       (0x20)
#define TASK_SATURDAY     (0x40)
#define TASK_FIRST_WEEK   (1)
#define TASK_SECOND_WEEK  (2)
#define TASK_THIRD_WEEK   (3)
#define TASK_FOURTH_WEEK  (4)
#define TASK_LAST_WEEK    (5)
#define TASK_JANUARY      (0x1)
#define TASK_FEBRUARY     (0x2)
#define TASK_MARCH        (0x4)
#define TASK_APRIL        (0x8)
#define TASK_MAY          (0x10)
#define TASK_JUNE         (0x20)
#define TASK_JULY         (0x40)
#define TASK_AUGUST       (0x80)
#define TASK_SEPTEMBER    (0x100)
#define TASK_OCTOBER      (0x200)
#define TASK_NOVEMBER     (0x400)
#define TASK_DECEMBER     (0x800)
#define TASK_FLAG_INTERACTIVE                  (0x1)
#define TASK_FLAG_DELETE_WHEN_DONE             (0x2)
#define TASK_FLAG_DISABLED                     (0x4)
#define TASK_FLAG_START_ONLY_IF_IDLE           (0x10)
#define TASK_FLAG_KILL_ON_IDLE_END             (0x20)
#define TASK_FLAG_DONT_START_IF_ON_BATTERIES   (0x40)
#define TASK_FLAG_KILL_IF_GOING_ON_BATTERIES   (0x80)
#define TASK_FLAG_RUN_ONLY_IF_DOCKED           (0x100)
#define TASK_FLAG_HIDDEN                       (0x200)
#define TASK_FLAG_RUN_IF_CONNECTED_TO_INTERNET (0x400)
#define TASK_FLAG_RESTART_ON_IDLE_RESUME       (0x800)
#define TASK_FLAG_SYSTEM_REQUIRED              (0x1000)
#define TASK_FLAG_RUN_ONLY_IF_LOGGED_ON        (0x2000)
#define TASK_TRIGGER_FLAG_HAS_END_DATE         (0x1)
#define TASK_TRIGGER_FLAG_KILL_AT_DURATION_END (0x2)
#define TASK_TRIGGER_FLAG_DISABLED             (0x4)
#define	TASK_MAX_RUN_TIMES	( 1440 )
typedef enum _TASK_TRIGGER_TYPE
{
	TASK_TIME_TRIGGER_ONCE = 0,
	TASK_TIME_TRIGGER_DAILY = 1,
	TASK_TIME_TRIGGER_WEEKLY = 2,
	TASK_TIME_TRIGGER_MONTHLYDATE = 3,
	TASK_TIME_TRIGGER_MONTHLYDOW = 4,
	TASK_EVENT_TRIGGER_ON_IDLE = 5,
	TASK_EVENT_TRIGGER_AT_SYSTEMSTART = 6,
	TASK_EVENT_TRIGGER_AT_LOGON = 7
} TASK_TRIGGER_TYPE;
typedef enum _TASK_TRIGGER_TYPE *PTASK_TRIGGER_TYPE;
typedef struct _DAILY
{
	WORD DaysInterval;
} DAILY;
typedef struct _WEEKLY
{
	WORD WeeksInterval;
	WORD rgfDaysOfTheWeek;
} WEEKLY;
typedef struct _MONTHLYDATE
{
	DWORD rgfDays;
	WORD rgfMonths;
} MONTHLYDATE;
typedef struct _MONTHLYDOW
{
	WORD wWhichWeek;
	WORD rgfDaysOfTheWeek;
	WORD rgfMonths;
} MONTHLYDOW;
typedef union _TRIGGER_TYPE_UNION
{
	DAILY Daily;
	WEEKLY Weekly;
	MONTHLYDATE MonthlyDate;
	MONTHLYDOW MonthlyDOW;
} TRIGGER_TYPE_UNION;
typedef struct _TASK_TRIGGER
{
	WORD cbTriggerSize;
	WORD Reserved1;
	WORD wBeginYear;
	WORD wBeginMonth;
	WORD wBeginDay;
	WORD wEndYear;
	WORD wEndMonth;
	WORD wEndDay;
	WORD wStartHour;
	WORD wStartMinute;
	DWORD MinutesDuration;
	DWORD MinutesInterval;
	DWORD rgFlags;
	TASK_TRIGGER_TYPE TriggerType;
	TRIGGER_TYPE_UNION Type;
	WORD Reserved2;
	WORD wRandomMinutesInterval;
} TASK_TRIGGER;
typedef struct _TASK_TRIGGER *PTASK_TRIGGER;
DEFINE_GUID(IID_ITaskTrigger, 0x148BD52BL, 0xA2AB, 0x11CE, 0xB1, 0x1F, 0x00, 0xAA, 0x00, 0x53, 0x05, 0x03);
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0000_v0_0_s_ifspec;
#ifndef __ITaskTrigger_INTERFACE_DEFINED__
#define __ITaskTrigger_INTERFACE_DEFINED__
extern const IID IID_ITaskTrigger;
typedef struct ITaskTriggerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITaskTrigger * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITaskTrigger * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITaskTrigger * This);
	HRESULT(STDMETHODCALLTYPE * SetTrigger) (ITaskTrigger * This, const PTASK_TRIGGER pTrigger);
	HRESULT(STDMETHODCALLTYPE * GetTrigger) (ITaskTrigger * This, PTASK_TRIGGER pTrigger);
	HRESULT(STDMETHODCALLTYPE * GetTriggerString) (ITaskTrigger * This, LPWSTR * ppwszTrigger);
	END_INTERFACE
}  ITaskTriggerVtbl;
interface ITaskTrigger
{
	CONST_VTBL struct ITaskTriggerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITaskTrigger_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITaskTrigger_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITaskTrigger_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITaskTrigger_SetTrigger(This,pTrigger)( (This)->lpVtbl -> SetTrigger(This,pTrigger) )
#define ITaskTrigger_GetTrigger(This,pTrigger)( (This)->lpVtbl -> GetTrigger(This,pTrigger) )
#define ITaskTrigger_GetTriggerString(This,ppwszTrigger)( (This)->lpVtbl -> GetTriggerString(This,ppwszTrigger) )
#endif
#endif
DEFINE_GUID(IID_IScheduledWorkItem, 0xa6b952f0L, 0xa4b1, 0x11d0, 0x99, 0x7d, 0x00, 0xaa, 0x00, 0x68, 0x87, 0xec);
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0001_v0_0_s_ifspec;
#ifndef __IScheduledWorkItem_INTERFACE_DEFINED__
#define __IScheduledWorkItem_INTERFACE_DEFINED__
extern const IID IID_IScheduledWorkItem;
typedef struct IScheduledWorkItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IScheduledWorkItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IScheduledWorkItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IScheduledWorkItem * This);
	HRESULT(STDMETHODCALLTYPE * CreateTrigger) (IScheduledWorkItem * This, WORD * piNewTrigger, ITaskTrigger ** ppTrigger);
	HRESULT(STDMETHODCALLTYPE * DeleteTrigger) (IScheduledWorkItem * This, WORD iTrigger);
	HRESULT(STDMETHODCALLTYPE * GetTriggerCount) (IScheduledWorkItem * This, WORD * pwCount);
	HRESULT(STDMETHODCALLTYPE * GetTrigger) (IScheduledWorkItem * This, WORD iTrigger, ITaskTrigger ** ppTrigger);
	HRESULT(STDMETHODCALLTYPE * GetTriggerString) (IScheduledWorkItem * This, WORD iTrigger, LPWSTR * ppwszTrigger);
	HRESULT(STDMETHODCALLTYPE * GetRunTimes) (IScheduledWorkItem * This, const LPSYSTEMTIME pstBegin, const LPSYSTEMTIME pstEnd, WORD * pCount, LPSYSTEMTIME * rgstTaskTimes);
	HRESULT(STDMETHODCALLTYPE * GetNextRunTime) (IScheduledWorkItem * This, SYSTEMTIME * pstNextRun);
	HRESULT(STDMETHODCALLTYPE * SetIdleWait) (IScheduledWorkItem * This, WORD wIdleMinutes, WORD wDeadlineMinutes);
	HRESULT(STDMETHODCALLTYPE * GetIdleWait) (IScheduledWorkItem * This, WORD * pwIdleMinutes, WORD * pwDeadlineMinutes);
	HRESULT(STDMETHODCALLTYPE * Run) (IScheduledWorkItem * This);
	HRESULT(STDMETHODCALLTYPE * Terminate) (IScheduledWorkItem * This);
	HRESULT(STDMETHODCALLTYPE * EditWorkItem) (IScheduledWorkItem * This, HWND hParent, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE * GetMostRecentRunTime) (IScheduledWorkItem * This, SYSTEMTIME * pstLastRun);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IScheduledWorkItem * This, HRESULT * phrStatus);
	HRESULT(STDMETHODCALLTYPE * GetExitCode) (IScheduledWorkItem * This, DWORD * pdwExitCode);
	HRESULT(STDMETHODCALLTYPE * SetComment) (IScheduledWorkItem * This, LPCWSTR pwszComment);
	HRESULT(STDMETHODCALLTYPE * GetComment) (IScheduledWorkItem * This, LPWSTR * ppwszComment);
	HRESULT(STDMETHODCALLTYPE * SetCreator) (IScheduledWorkItem * This, LPCWSTR pwszCreator);
	HRESULT(STDMETHODCALLTYPE * GetCreator) (IScheduledWorkItem * This, LPWSTR * ppwszCreator);
	HRESULT(STDMETHODCALLTYPE * SetWorkItemData) (IScheduledWorkItem * This, WORD cbData, BYTE rgbData[]);
	HRESULT(STDMETHODCALLTYPE * GetWorkItemData) (IScheduledWorkItem * This, WORD * pcbData, BYTE ** prgbData);
	HRESULT(STDMETHODCALLTYPE * SetErrorRetryCount) (IScheduledWorkItem * This, WORD wRetryCount);
	HRESULT(STDMETHODCALLTYPE * GetErrorRetryCount) (IScheduledWorkItem * This, WORD * pwRetryCount);
	HRESULT(STDMETHODCALLTYPE * SetErrorRetryInterval) (IScheduledWorkItem * This, WORD wRetryInterval);
	HRESULT(STDMETHODCALLTYPE * GetErrorRetryInterval) (IScheduledWorkItem * This, WORD * pwRetryInterval);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (IScheduledWorkItem * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (IScheduledWorkItem * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * SetAccountInformation) (IScheduledWorkItem * This, LPCWSTR pwszAccountName, LPCWSTR pwszPassword);
	HRESULT(STDMETHODCALLTYPE * GetAccountInformation) (IScheduledWorkItem * This, LPWSTR * ppwszAccountName);
	END_INTERFACE
}  IScheduledWorkItemVtbl;
interface IScheduledWorkItem
{
	CONST_VTBL struct IScheduledWorkItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IScheduledWorkItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IScheduledWorkItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IScheduledWorkItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IScheduledWorkItem_CreateTrigger(This,piNewTrigger,ppTrigger)( (This)->lpVtbl -> CreateTrigger(This,piNewTrigger,ppTrigger) )
#define IScheduledWorkItem_DeleteTrigger(This,iTrigger)( (This)->lpVtbl -> DeleteTrigger(This,iTrigger) )
#define IScheduledWorkItem_GetTriggerCount(This,pwCount)( (This)->lpVtbl -> GetTriggerCount(This,pwCount) )
#define IScheduledWorkItem_GetTrigger(This,iTrigger,ppTrigger)( (This)->lpVtbl -> GetTrigger(This,iTrigger,ppTrigger) )
#define IScheduledWorkItem_GetTriggerString(This,iTrigger,ppwszTrigger)( (This)->lpVtbl -> GetTriggerString(This,iTrigger,ppwszTrigger) )
#define IScheduledWorkItem_GetRunTimes(This,pstBegin,pstEnd,pCount,rgstTaskTimes)( (This)->lpVtbl -> GetRunTimes(This,pstBegin,pstEnd,pCount,rgstTaskTimes) )
#define IScheduledWorkItem_GetNextRunTime(This,pstNextRun)( (This)->lpVtbl -> GetNextRunTime(This,pstNextRun) )
#define IScheduledWorkItem_SetIdleWait(This,wIdleMinutes,wDeadlineMinutes)( (This)->lpVtbl -> SetIdleWait(This,wIdleMinutes,wDeadlineMinutes) )
#define IScheduledWorkItem_GetIdleWait(This,pwIdleMinutes,pwDeadlineMinutes)( (This)->lpVtbl -> GetIdleWait(This,pwIdleMinutes,pwDeadlineMinutes) )
#define IScheduledWorkItem_Run(This)( (This)->lpVtbl -> Run(This) )
#define IScheduledWorkItem_Terminate(This)( (This)->lpVtbl -> Terminate(This) )
#define IScheduledWorkItem_EditWorkItem(This,hParent,dwReserved)( (This)->lpVtbl -> EditWorkItem(This,hParent,dwReserved) )
#define IScheduledWorkItem_GetMostRecentRunTime(This,pstLastRun)( (This)->lpVtbl -> GetMostRecentRunTime(This,pstLastRun) )
#define IScheduledWorkItem_GetStatus(This,phrStatus)( (This)->lpVtbl -> GetStatus(This,phrStatus) )
#define IScheduledWorkItem_GetExitCode(This,pdwExitCode)( (This)->lpVtbl -> GetExitCode(This,pdwExitCode) )
#define IScheduledWorkItem_SetComment(This,pwszComment)( (This)->lpVtbl -> SetComment(This,pwszComment) )
#define IScheduledWorkItem_GetComment(This,ppwszComment)( (This)->lpVtbl -> GetComment(This,ppwszComment) )
#define IScheduledWorkItem_SetCreator(This,pwszCreator)( (This)->lpVtbl -> SetCreator(This,pwszCreator) )
#define IScheduledWorkItem_GetCreator(This,ppwszCreator)( (This)->lpVtbl -> GetCreator(This,ppwszCreator) )
#define IScheduledWorkItem_SetWorkItemData(This,cbData,rgbData)( (This)->lpVtbl -> SetWorkItemData(This,cbData,rgbData) )
#define IScheduledWorkItem_GetWorkItemData(This,pcbData,prgbData)( (This)->lpVtbl -> GetWorkItemData(This,pcbData,prgbData) )
#define IScheduledWorkItem_SetErrorRetryCount(This,wRetryCount)( (This)->lpVtbl -> SetErrorRetryCount(This,wRetryCount) )
#define IScheduledWorkItem_GetErrorRetryCount(This,pwRetryCount)( (This)->lpVtbl -> GetErrorRetryCount(This,pwRetryCount) )
#define IScheduledWorkItem_SetErrorRetryInterval(This,wRetryInterval)( (This)->lpVtbl -> SetErrorRetryInterval(This,wRetryInterval) )
#define IScheduledWorkItem_GetErrorRetryInterval(This,pwRetryInterval)( (This)->lpVtbl -> GetErrorRetryInterval(This,pwRetryInterval) )
#define IScheduledWorkItem_SetFlags(This,dwFlags)( (This)->lpVtbl -> SetFlags(This,dwFlags) )
#define IScheduledWorkItem_GetFlags(This,pdwFlags)( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
#define IScheduledWorkItem_SetAccountInformation(This,pwszAccountName,pwszPassword)( (This)->lpVtbl -> SetAccountInformation(This,pwszAccountName,pwszPassword) )
#define IScheduledWorkItem_GetAccountInformation(This,ppwszAccountName)( (This)->lpVtbl -> GetAccountInformation(This,ppwszAccountName) )
#endif
#endif
DEFINE_GUID(IID_ITask, 0x148BD524L, 0xA2AB, 0x11CE, 0xB1, 0x1F, 0x00, 0xAA, 0x00, 0x53, 0x05, 0x03);
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0002_v0_0_s_ifspec;
#ifndef __ITask_INTERFACE_DEFINED__
#define __ITask_INTERFACE_DEFINED__
extern const IID IID_ITask;
typedef struct ITaskVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITask * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITask * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITask * This);
	HRESULT(STDMETHODCALLTYPE * CreateTrigger) (ITask * This, WORD * piNewTrigger, ITaskTrigger ** ppTrigger);
	HRESULT(STDMETHODCALLTYPE * DeleteTrigger) (ITask * This, WORD iTrigger);
	HRESULT(STDMETHODCALLTYPE * GetTriggerCount) (ITask * This, WORD * pwCount);
	HRESULT(STDMETHODCALLTYPE * GetTrigger) (ITask * This, WORD iTrigger, ITaskTrigger ** ppTrigger);
	HRESULT(STDMETHODCALLTYPE * GetTriggerString) (ITask * This, WORD iTrigger, LPWSTR * ppwszTrigger);
	HRESULT(STDMETHODCALLTYPE * GetRunTimes) (ITask * This, const LPSYSTEMTIME pstBegin, const LPSYSTEMTIME pstEnd, WORD * pCount, LPSYSTEMTIME * rgstTaskTimes);
	HRESULT(STDMETHODCALLTYPE * GetNextRunTime) (ITask * This, SYSTEMTIME * pstNextRun);
	HRESULT(STDMETHODCALLTYPE * SetIdleWait) (ITask * This, WORD wIdleMinutes, WORD wDeadlineMinutes);
	HRESULT(STDMETHODCALLTYPE * GetIdleWait) (ITask * This, WORD * pwIdleMinutes, WORD * pwDeadlineMinutes);
	HRESULT(STDMETHODCALLTYPE * Run) (ITask * This);
	HRESULT(STDMETHODCALLTYPE * Terminate) (ITask * This);
	HRESULT(STDMETHODCALLTYPE * EditWorkItem) (ITask * This, HWND hParent, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE * GetMostRecentRunTime) (ITask * This, SYSTEMTIME * pstLastRun);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (ITask * This, HRESULT * phrStatus);
	HRESULT(STDMETHODCALLTYPE * GetExitCode) (ITask * This, DWORD * pdwExitCode);
	HRESULT(STDMETHODCALLTYPE * SetComment) (ITask * This, LPCWSTR pwszComment);
	HRESULT(STDMETHODCALLTYPE * GetComment) (ITask * This, LPWSTR * ppwszComment);
	HRESULT(STDMETHODCALLTYPE * SetCreator) (ITask * This, LPCWSTR pwszCreator);
	HRESULT(STDMETHODCALLTYPE * GetCreator) (ITask * This, LPWSTR * ppwszCreator);
	HRESULT(STDMETHODCALLTYPE * SetWorkItemData) (ITask * This, WORD cbData, BYTE rgbData[]);
	HRESULT(STDMETHODCALLTYPE * GetWorkItemData) (ITask * This, WORD * pcbData, BYTE ** prgbData);
	HRESULT(STDMETHODCALLTYPE * SetErrorRetryCount) (ITask * This, WORD wRetryCount);
	HRESULT(STDMETHODCALLTYPE * GetErrorRetryCount) (ITask * This, WORD * pwRetryCount);
	HRESULT(STDMETHODCALLTYPE * SetErrorRetryInterval) (ITask * This, WORD wRetryInterval);
	HRESULT(STDMETHODCALLTYPE * GetErrorRetryInterval) (ITask * This, WORD * pwRetryInterval);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (ITask * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (ITask * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * SetAccountInformation) (ITask * This, LPCWSTR pwszAccountName, LPCWSTR pwszPassword);
	HRESULT(STDMETHODCALLTYPE * GetAccountInformation) (ITask * This, LPWSTR * ppwszAccountName);
	HRESULT(STDMETHODCALLTYPE * SetApplicationName) (ITask * This, LPCWSTR pwszApplicationName);
	HRESULT(STDMETHODCALLTYPE * GetApplicationName) (ITask * This, LPWSTR * ppwszApplicationName);
	HRESULT(STDMETHODCALLTYPE * SetParameters) (ITask * This, LPCWSTR pwszParameters);
	HRESULT(STDMETHODCALLTYPE * GetParameters) (ITask * This, LPWSTR * ppwszParameters);
	HRESULT(STDMETHODCALLTYPE * SetWorkingDirectory) (ITask * This, LPCWSTR pwszWorkingDirectory);
	HRESULT(STDMETHODCALLTYPE * GetWorkingDirectory) (ITask * This, LPWSTR * ppwszWorkingDirectory);
	HRESULT(STDMETHODCALLTYPE * SetPriority) (ITask * This, DWORD dwPriority);
	HRESULT(STDMETHODCALLTYPE * GetPriority) (ITask * This, DWORD * pdwPriority);
	HRESULT(STDMETHODCALLTYPE * SetTaskFlags) (ITask * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetTaskFlags) (ITask * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * SetMaxRunTime) (ITask * This, DWORD dwMaxRunTimeMS);
	HRESULT(STDMETHODCALLTYPE * GetMaxRunTime) (ITask * This, DWORD * pdwMaxRunTimeMS);
	END_INTERFACE
}  ITaskVtbl;
interface ITask
{
	CONST_VTBL struct ITaskVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITask_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITask_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITask_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITask_CreateTrigger(This,piNewTrigger,ppTrigger)( (This)->lpVtbl -> CreateTrigger(This,piNewTrigger,ppTrigger) )
#define ITask_DeleteTrigger(This,iTrigger)( (This)->lpVtbl -> DeleteTrigger(This,iTrigger) )
#define ITask_GetTriggerCount(This,pwCount)( (This)->lpVtbl -> GetTriggerCount(This,pwCount) )
#define ITask_GetTrigger(This,iTrigger,ppTrigger)( (This)->lpVtbl -> GetTrigger(This,iTrigger,ppTrigger) )
#define ITask_GetTriggerString(This,iTrigger,ppwszTrigger)( (This)->lpVtbl -> GetTriggerString(This,iTrigger,ppwszTrigger) )
#define ITask_GetRunTimes(This,pstBegin,pstEnd,pCount,rgstTaskTimes)( (This)->lpVtbl -> GetRunTimes(This,pstBegin,pstEnd,pCount,rgstTaskTimes) )
#define ITask_GetNextRunTime(This,pstNextRun)( (This)->lpVtbl -> GetNextRunTime(This,pstNextRun) )
#define ITask_SetIdleWait(This,wIdleMinutes,wDeadlineMinutes)( (This)->lpVtbl -> SetIdleWait(This,wIdleMinutes,wDeadlineMinutes) )
#define ITask_GetIdleWait(This,pwIdleMinutes,pwDeadlineMinutes)( (This)->lpVtbl -> GetIdleWait(This,pwIdleMinutes,pwDeadlineMinutes) )
#define ITask_Run(This)( (This)->lpVtbl -> Run(This) )
#define ITask_Terminate(This)( (This)->lpVtbl -> Terminate(This) )
#define ITask_EditWorkItem(This,hParent,dwReserved)( (This)->lpVtbl -> EditWorkItem(This,hParent,dwReserved) )
#define ITask_GetMostRecentRunTime(This,pstLastRun)( (This)->lpVtbl -> GetMostRecentRunTime(This,pstLastRun) )
#define ITask_GetStatus(This,phrStatus)( (This)->lpVtbl -> GetStatus(This,phrStatus) )
#define ITask_GetExitCode(This,pdwExitCode)( (This)->lpVtbl -> GetExitCode(This,pdwExitCode) )
#define ITask_SetComment(This,pwszComment)( (This)->lpVtbl -> SetComment(This,pwszComment) )
#define ITask_GetComment(This,ppwszComment)( (This)->lpVtbl -> GetComment(This,ppwszComment) )
#define ITask_SetCreator(This,pwszCreator)( (This)->lpVtbl -> SetCreator(This,pwszCreator) )
#define ITask_GetCreator(This,ppwszCreator)( (This)->lpVtbl -> GetCreator(This,ppwszCreator) )
#define ITask_SetWorkItemData(This,cbData,rgbData)( (This)->lpVtbl -> SetWorkItemData(This,cbData,rgbData) )
#define ITask_GetWorkItemData(This,pcbData,prgbData)( (This)->lpVtbl -> GetWorkItemData(This,pcbData,prgbData) )
#define ITask_SetErrorRetryCount(This,wRetryCount)( (This)->lpVtbl -> SetErrorRetryCount(This,wRetryCount) )
#define ITask_GetErrorRetryCount(This,pwRetryCount)( (This)->lpVtbl -> GetErrorRetryCount(This,pwRetryCount) )
#define ITask_SetErrorRetryInterval(This,wRetryInterval)( (This)->lpVtbl -> SetErrorRetryInterval(This,wRetryInterval) )
#define ITask_GetErrorRetryInterval(This,pwRetryInterval)( (This)->lpVtbl -> GetErrorRetryInterval(This,pwRetryInterval) )
#define ITask_SetFlags(This,dwFlags)( (This)->lpVtbl -> SetFlags(This,dwFlags) )
#define ITask_GetFlags(This,pdwFlags)( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
#define ITask_SetAccountInformation(This,pwszAccountName,pwszPassword)( (This)->lpVtbl -> SetAccountInformation(This,pwszAccountName,pwszPassword) )
#define ITask_GetAccountInformation(This,ppwszAccountName)( (This)->lpVtbl -> GetAccountInformation(This,ppwszAccountName) )
#define ITask_SetApplicationName(This,pwszApplicationName)( (This)->lpVtbl -> SetApplicationName(This,pwszApplicationName) )
#define ITask_GetApplicationName(This,ppwszApplicationName)( (This)->lpVtbl -> GetApplicationName(This,ppwszApplicationName) )
#define ITask_SetParameters(This,pwszParameters)( (This)->lpVtbl -> SetParameters(This,pwszParameters) )
#define ITask_GetParameters(This,ppwszParameters)( (This)->lpVtbl -> GetParameters(This,ppwszParameters) )
#define ITask_SetWorkingDirectory(This,pwszWorkingDirectory)( (This)->lpVtbl -> SetWorkingDirectory(This,pwszWorkingDirectory) )
#define ITask_GetWorkingDirectory(This,ppwszWorkingDirectory)( (This)->lpVtbl -> GetWorkingDirectory(This,ppwszWorkingDirectory) )
#define ITask_SetPriority(This,dwPriority)( (This)->lpVtbl -> SetPriority(This,dwPriority) )
#define ITask_GetPriority(This,pdwPriority)( (This)->lpVtbl -> GetPriority(This,pdwPriority) )
#define ITask_SetTaskFlags(This,dwFlags)( (This)->lpVtbl -> SetTaskFlags(This,dwFlags) )
#define ITask_GetTaskFlags(This,pdwFlags)( (This)->lpVtbl -> GetTaskFlags(This,pdwFlags) )
#define ITask_SetMaxRunTime(This,dwMaxRunTimeMS)( (This)->lpVtbl -> SetMaxRunTime(This,dwMaxRunTimeMS) )
#define ITask_GetMaxRunTime(This,pdwMaxRunTimeMS)( (This)->lpVtbl -> GetMaxRunTime(This,pdwMaxRunTimeMS) )
#endif
#endif
DEFINE_GUID(IID_IEnumWorkItems, 0x148BD528L, 0xA2AB, 0x11CE, 0xB1, 0x1F, 0x00, 0xAA, 0x00, 0x53, 0x05, 0x03);
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0003_v0_0_s_ifspec;
#ifndef __IEnumWorkItems_INTERFACE_DEFINED__
#define __IEnumWorkItems_INTERFACE_DEFINED__
extern const IID IID_IEnumWorkItems;
typedef struct IEnumWorkItemsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumWorkItems * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumWorkItems * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumWorkItems * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumWorkItems * This, ULONG celt, LPWSTR ** rgpwszNames, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumWorkItems * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumWorkItems * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumWorkItems * This, IEnumWorkItems ** ppEnumWorkItems);
	END_INTERFACE
}  IEnumWorkItemsVtbl;
interface IEnumWorkItems
{
	CONST_VTBL struct IEnumWorkItemsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumWorkItems_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumWorkItems_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumWorkItems_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumWorkItems_Next(This,celt,rgpwszNames,pceltFetched)( (This)->lpVtbl -> Next(This,celt,rgpwszNames,pceltFetched) )
#define IEnumWorkItems_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumWorkItems_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumWorkItems_Clone(This,ppEnumWorkItems)( (This)->lpVtbl -> Clone(This,ppEnumWorkItems) )
#endif
#endif
DEFINE_GUID(IID_ITaskScheduler, 0x148BD527L, 0xA2AB, 0x11CE, 0xB1, 0x1F, 0x00, 0xAA, 0x00, 0x53, 0x05, 0x03);
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0004_v0_0_s_ifspec;
#ifndef __ITaskScheduler_INTERFACE_DEFINED__
#define __ITaskScheduler_INTERFACE_DEFINED__
extern const IID IID_ITaskScheduler;
typedef struct ITaskSchedulerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITaskScheduler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITaskScheduler * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITaskScheduler * This);
	HRESULT(STDMETHODCALLTYPE * SetTargetComputer) (ITaskScheduler * This, LPCWSTR pwszComputer);
	HRESULT(STDMETHODCALLTYPE * GetTargetComputer) (ITaskScheduler * This, LPWSTR * ppwszComputer);
	HRESULT(STDMETHODCALLTYPE * Enum) (ITaskScheduler * This, IEnumWorkItems ** ppEnumWorkItems);
	HRESULT(STDMETHODCALLTYPE * Activate) (ITaskScheduler * This, LPCWSTR pwszName, REFIID riid, IUnknown ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * Delete) (ITaskScheduler * This, LPCWSTR pwszName);
	HRESULT(STDMETHODCALLTYPE * NewWorkItem) (ITaskScheduler * This, LPCWSTR pwszTaskName, REFCLSID rclsid, REFIID riid, IUnknown ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * AddWorkItem) (ITaskScheduler * This, LPCWSTR pwszTaskName, IScheduledWorkItem * pWorkItem);
	HRESULT(STDMETHODCALLTYPE * IsOfType) (ITaskScheduler * This, LPCWSTR pwszName, REFIID riid);
	END_INTERFACE
}  ITaskSchedulerVtbl;
interface ITaskScheduler
{
	CONST_VTBL struct ITaskSchedulerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITaskScheduler_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITaskScheduler_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITaskScheduler_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITaskScheduler_SetTargetComputer(This,pwszComputer)( (This)->lpVtbl -> SetTargetComputer(This,pwszComputer) )
#define ITaskScheduler_GetTargetComputer(This,ppwszComputer)( (This)->lpVtbl -> GetTargetComputer(This,ppwszComputer) )
#define ITaskScheduler_Enum(This,ppEnumWorkItems)( (This)->lpVtbl -> Enum(This,ppEnumWorkItems) )
#define ITaskScheduler_Activate(This,pwszName,riid,ppUnk)( (This)->lpVtbl -> Activate(This,pwszName,riid,ppUnk) )
#define ITaskScheduler_Delete(This,pwszName)( (This)->lpVtbl -> Delete(This,pwszName) )
#define ITaskScheduler_NewWorkItem(This,pwszTaskName,rclsid,riid,ppUnk)( (This)->lpVtbl -> NewWorkItem(This,pwszTaskName,rclsid,riid,ppUnk) )
#define ITaskScheduler_AddWorkItem(This,pwszTaskName,pWorkItem)( (This)->lpVtbl -> AddWorkItem(This,pwszTaskName,pWorkItem) )
#define ITaskScheduler_IsOfType(This,pwszName,riid)( (This)->lpVtbl -> IsOfType(This,pwszName,riid) )
#endif
#endif
extern const CLSID CLSID_CTask;
extern const CLSID CLSID_CTaskScheduler;
DEFINE_GUID(CLSID_CTask, 0x148BD520, 0xA2AB, 0x11CE, 0xB1, 0x1F, 0x00, 0xAA, 0x00, 0x53, 0x05, 0x03);
DEFINE_GUID(CLSID_CTaskScheduler, 0x148BD52A, 0xA2AB, 0x11CE, 0xB1, 0x1F, 0x00, 0xAA, 0x00, 0x53, 0x05, 0x03);
typedef struct _PSP *HPROPSHEETPAGE;
typedef enum _TASKPAGE
{
	TASKPAGE_TASK = 0,
	TASKPAGE_SCHEDULE = 1,
	TASKPAGE_SETTINGS = 2
} TASKPAGE;
DEFINE_GUID(IID_IProvideTaskPage, 0x4086658aL, 0xcbbb, 0x11cf, 0xb6, 0x04, 0x00, 0xc0, 0x4f, 0xd8, 0xd5, 0x65);
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0005_v0_0_s_ifspec;
#ifndef __IProvideTaskPage_INTERFACE_DEFINED__
#define __IProvideTaskPage_INTERFACE_DEFINED__
extern const IID IID_IProvideTaskPage;
typedef struct IProvideTaskPageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProvideTaskPage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProvideTaskPage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProvideTaskPage * This);
	HRESULT(STDMETHODCALLTYPE * GetPage) (IProvideTaskPage * This, TASKPAGE tpType, BOOL fPersistChanges, HPROPSHEETPAGE * phPage);
	END_INTERFACE
}  IProvideTaskPageVtbl;
interface IProvideTaskPage
{
	CONST_VTBL struct IProvideTaskPageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProvideTaskPage_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProvideTaskPage_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IProvideTaskPage_Release(This)( (This)->lpVtbl -> Release(This) )
#define IProvideTaskPage_GetPage(This,tpType,fPersistChanges,phPage)( (This)->lpVtbl -> GetPage(This,tpType,fPersistChanges,phPage) )
#endif
#endif
#define ISchedulingAgent       ITaskScheduler
#define IEnumTasks             IEnumWorkItems
#define IID_ISchedulingAgent   IID_ITaskScheduler
#define CLSID_CSchedulingAgent CLSID_CTaskScheduler
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstask_0000_0006_v0_0_s_ifspec;
#endif
