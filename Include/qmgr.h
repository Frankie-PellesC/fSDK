/*+@@file@@----------------------------------------------------------------*//*!
 \file		qmgr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 12 01:03:05 2016
 \date		Modified on Mon Sep 12 01:03:05 2016
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
#ifndef __qmgr_h__
#define __qmgr_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IBackgroundCopyJob1_FWD_DEFINED__
#define __IBackgroundCopyJob1_FWD_DEFINED__
typedef interface IBackgroundCopyJob1 IBackgroundCopyJob1;
#endif
#ifndef __IEnumBackgroundCopyJobs1_FWD_DEFINED__
#define __IEnumBackgroundCopyJobs1_FWD_DEFINED__
typedef interface IEnumBackgroundCopyJobs1 IEnumBackgroundCopyJobs1;
#endif
#ifndef __IBackgroundCopyGroup_FWD_DEFINED__
#define __IBackgroundCopyGroup_FWD_DEFINED__
typedef interface IBackgroundCopyGroup IBackgroundCopyGroup;
#endif
#ifndef __IEnumBackgroundCopyGroups_FWD_DEFINED__
#define __IEnumBackgroundCopyGroups_FWD_DEFINED__
typedef interface IEnumBackgroundCopyGroups IEnumBackgroundCopyGroups;
#endif
#ifndef __IBackgroundCopyCallback1_FWD_DEFINED__
#define __IBackgroundCopyCallback1_FWD_DEFINED__
typedef interface IBackgroundCopyCallback1 IBackgroundCopyCallback1;
#endif
#ifndef __IBackgroundCopyQMgr_FWD_DEFINED__
#define __IBackgroundCopyQMgr_FWD_DEFINED__
typedef interface IBackgroundCopyQMgr IBackgroundCopyQMgr;
#endif
#ifndef __BackgroundCopyQMgr_FWD_DEFINED__
#define __BackgroundCopyQMgr_FWD_DEFINED__
typedef struct BackgroundCopyQMgr BackgroundCopyQMgr;
#endif
#include <unknwn.h>
#include <ocidl.h>
#include <docobj.h>
#define  QM_NOTIFY_FILE_DONE         0x00000001
#define  QM_NOTIFY_JOB_DONE          0x00000002
#define  QM_NOTIFY_GROUP_DONE        0x00000004
#define  QM_NOTIFY_DISABLE_NOTIFY    0x00000040
#define  QM_NOTIFY_USE_PROGRESSEX    0x00000080
#define  QM_STATUS_FILE_COMPLETE     0x00000001
#define  QM_STATUS_FILE_INCOMPLETE   0x00000002
#define  QM_STATUS_JOB_COMPLETE      0x00000004
#define  QM_STATUS_JOB_INCOMPLETE    0x00000008
#define  QM_STATUS_JOB_ERROR         0x00000010
#define  QM_STATUS_JOB_FOREGROUND    0x00000020
#define  QM_STATUS_GROUP_COMPLETE    0x00000040
#define  QM_STATUS_GROUP_INCOMPLETE  0x00000080
#define  QM_STATUS_GROUP_SUSPENDED   0x00000100
#define  QM_STATUS_GROUP_ERROR       0x00000200
#define  QM_STATUS_GROUP_FOREGROUND  0x00000400
#define  QM_PROTOCOL_HTTP            1
#define  QM_PROTOCOL_FTP             2
#define  QM_PROTOCOL_SMB             3
#define  QM_PROTOCOL_CUSTOM          4
#define  QM_PROGRESS_PERCENT_DONE    1
#define  QM_PROGRESS_TIME_DONE       2
#define  QM_PROGRESS_SIZE_DONE       3
#define  QM_E_INVALID_STATE          0x81001001
#define  QM_E_SERVICE_UNAVAILABLE    0x81001002
#define  QM_E_DOWNLOADER_UNAVAILABLE 0x81001003
#define  QM_E_ITEM_NOT_FOUND         0x81001004
extern RPC_IF_HANDLE __MIDL_itf_qmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_qmgr_0000_0000_v0_0_s_ifspec;
#ifndef __IBackgroundCopyJob1_INTERFACE_DEFINED__
#define __IBackgroundCopyJob1_INTERFACE_DEFINED__
typedef struct _FILESETINFO
{
	BSTR bstrRemoteFile;
	BSTR bstrLocalFile;
	DWORD dwSizeHint;
} FILESETINFO;
extern const IID IID_IBackgroundCopyJob1;
typedef struct IBackgroundCopyJob1Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBackgroundCopyJob1 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBackgroundCopyJob1 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBackgroundCopyJob1 * This);
	HRESULT(STDMETHODCALLTYPE * CancelJob) (IBackgroundCopyJob1 * This);
	HRESULT(STDMETHODCALLTYPE * GetProgress) (IBackgroundCopyJob1 * This, DWORD dwFlags, DWORD * pdwProgress);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IBackgroundCopyJob1 * This, DWORD * pdwStatus, DWORD * pdwWin32Result, DWORD * pdwTransportResult, DWORD * pdwNumOfRetries);
	HRESULT(STDMETHODCALLTYPE * AddFiles) (IBackgroundCopyJob1 * This, ULONG cFileCount, FILESETINFO ** ppFileSet);
	HRESULT(STDMETHODCALLTYPE * GetFile) (IBackgroundCopyJob1 * This, ULONG cFileIndex, FILESETINFO * pFileInfo);
	HRESULT(STDMETHODCALLTYPE * GetFileCount) (IBackgroundCopyJob1 * This, DWORD * pdwFileCount);
	HRESULT(STDMETHODCALLTYPE * SwitchToForeground) (IBackgroundCopyJob1 * This);
	HRESULT(STDMETHODCALLTYPE * get_JobID) (IBackgroundCopyJob1 * This, GUID * pguidJobID);
	END_INTERFACE
}  IBackgroundCopyJob1Vtbl;
interface IBackgroundCopyJob1
{
	CONST_VTBL struct IBackgroundCopyJob1Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBackgroundCopyJob1_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBackgroundCopyJob1_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IBackgroundCopyJob1_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IBackgroundCopyJob1_CancelJob(This) ( (This)->lpVtbl -> CancelJob(This) )
#define IBackgroundCopyJob1_GetProgress(This,dwFlags,pdwProgress) ( (This)->lpVtbl -> GetProgress(This,dwFlags,pdwProgress) )
#define IBackgroundCopyJob1_GetStatus(This,pdwStatus,pdwWin32Result,pdwTransportResult,pdwNumOfRetries) ( (This)->lpVtbl -> GetStatus(This,pdwStatus,pdwWin32Result,pdwTransportResult,pdwNumOfRetries) )
#define IBackgroundCopyJob1_AddFiles(This,cFileCount,ppFileSet) ( (This)->lpVtbl -> AddFiles(This,cFileCount,ppFileSet) )
#define IBackgroundCopyJob1_GetFile(This,cFileIndex,pFileInfo) ( (This)->lpVtbl -> GetFile(This,cFileIndex,pFileInfo) )
#define IBackgroundCopyJob1_GetFileCount(This,pdwFileCount) ( (This)->lpVtbl -> GetFileCount(This,pdwFileCount) )
#define IBackgroundCopyJob1_SwitchToForeground(This) ( (This)->lpVtbl -> SwitchToForeground(This) )
#define IBackgroundCopyJob1_get_JobID(This,pguidJobID) ( (This)->lpVtbl -> get_JobID(This,pguidJobID) )
#endif
#endif
#ifndef __IEnumBackgroundCopyJobs1_INTERFACE_DEFINED__
#define __IEnumBackgroundCopyJobs1_INTERFACE_DEFINED__
extern const IID IID_IEnumBackgroundCopyJobs1;
typedef struct IEnumBackgroundCopyJobs1Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumBackgroundCopyJobs1 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumBackgroundCopyJobs1 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumBackgroundCopyJobs1 * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumBackgroundCopyJobs1 * This, ULONG celt, GUID * rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumBackgroundCopyJobs1 * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumBackgroundCopyJobs1 * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumBackgroundCopyJobs1 * This, IEnumBackgroundCopyJobs1 ** ppenum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IEnumBackgroundCopyJobs1 * This, ULONG * puCount);
	END_INTERFACE
}  IEnumBackgroundCopyJobs1Vtbl;
interface IEnumBackgroundCopyJobs1
{
	CONST_VTBL struct IEnumBackgroundCopyJobs1Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumBackgroundCopyJobs1_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumBackgroundCopyJobs1_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumBackgroundCopyJobs1_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumBackgroundCopyJobs1_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumBackgroundCopyJobs1_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumBackgroundCopyJobs1_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumBackgroundCopyJobs1_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#define IEnumBackgroundCopyJobs1_GetCount(This,puCount) ( (This)->lpVtbl -> GetCount(This,puCount) )
#endif
#endif
#ifndef __IBackgroundCopyGroup_INTERFACE_DEFINED__
#define __IBackgroundCopyGroup_INTERFACE_DEFINED__
typedef enum GROUPPROP
{
	GROUPPROP_PRIORITY = 0,
	GROUPPROP_REMOTEUSERID = 1,
	GROUPPROP_REMOTEUSERPWD = 2,
	GROUPPROP_LOCALUSERID = 3,
	GROUPPROP_LOCALUSERPWD = 4,
	GROUPPROP_PROTOCOLFLAGS = 5,
	GROUPPROP_NOTIFYFLAGS = 6,
	GROUPPROP_NOTIFYCLSID = 7,
	GROUPPROP_PROGRESSSIZE = 8,
	GROUPPROP_PROGRESSPERCENT = 9,
	GROUPPROP_PROGRESSTIME = 10,
	GROUPPROP_DISPLAYNAME = 11,
	GROUPPROP_DESCRIPTION = 12
} GROUPPROP;
extern const IID IID_IBackgroundCopyGroup;
typedef struct IBackgroundCopyGroupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBackgroundCopyGroup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBackgroundCopyGroup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBackgroundCopyGroup * This);
	HRESULT(STDMETHODCALLTYPE * GetProp) (IBackgroundCopyGroup * This, GROUPPROP propID, VARIANT * pvarVal);
	HRESULT(STDMETHODCALLTYPE * SetProp) (IBackgroundCopyGroup * This, GROUPPROP propID, VARIANT * pvarVal);
	HRESULT(STDMETHODCALLTYPE * GetProgress) (IBackgroundCopyGroup * This, DWORD dwFlags, DWORD * pdwProgress);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IBackgroundCopyGroup * This, DWORD * pdwStatus, DWORD * pdwJobIndex);
	HRESULT(STDMETHODCALLTYPE * GetJob) (IBackgroundCopyGroup * This, GUID jobID, IBackgroundCopyJob1 ** ppJob);
	HRESULT(STDMETHODCALLTYPE * SuspendGroup) (IBackgroundCopyGroup * This);
	HRESULT(STDMETHODCALLTYPE * ResumeGroup) (IBackgroundCopyGroup * This);
	HRESULT(STDMETHODCALLTYPE * CancelGroup) (IBackgroundCopyGroup * This);
	HRESULT(STDMETHODCALLTYPE * get_Size) (IBackgroundCopyGroup * This, DWORD * pdwSize);
	HRESULT(STDMETHODCALLTYPE * get_GroupID) (IBackgroundCopyGroup * This, GUID * pguidGroupID);
	HRESULT(STDMETHODCALLTYPE * CreateJob) (IBackgroundCopyGroup * This, GUID guidJobID, IBackgroundCopyJob1 ** ppJob);
	HRESULT(STDMETHODCALLTYPE * EnumJobs) (IBackgroundCopyGroup * This, DWORD dwFlags, IEnumBackgroundCopyJobs1 ** ppEnumJobs);
	HRESULT(STDMETHODCALLTYPE * SwitchToForeground) (IBackgroundCopyGroup * This);
	HRESULT(STDMETHODCALLTYPE * QueryNewJobInterface) (IBackgroundCopyGroup * This, REFIID iid, IUnknown ** pUnk);
	HRESULT(STDMETHODCALLTYPE * SetNotificationPointer) (IBackgroundCopyGroup * This, REFIID iid, IUnknown * pUnk);
	END_INTERFACE
}  IBackgroundCopyGroupVtbl;
interface IBackgroundCopyGroup
{
	CONST_VTBL struct IBackgroundCopyGroupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBackgroundCopyGroup_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBackgroundCopyGroup_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IBackgroundCopyGroup_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IBackgroundCopyGroup_GetProp(This,propID,pvarVal) ( (This)->lpVtbl -> GetProp(This,propID,pvarVal) )
#define IBackgroundCopyGroup_SetProp(This,propID,pvarVal) ( (This)->lpVtbl -> SetProp(This,propID,pvarVal) )
#define IBackgroundCopyGroup_GetProgress(This,dwFlags,pdwProgress) ( (This)->lpVtbl -> GetProgress(This,dwFlags,pdwProgress) )
#define IBackgroundCopyGroup_GetStatus(This,pdwStatus,pdwJobIndex) ( (This)->lpVtbl -> GetStatus(This,pdwStatus,pdwJobIndex) )
#define IBackgroundCopyGroup_GetJob(This,jobID,ppJob) ( (This)->lpVtbl -> GetJob(This,jobID,ppJob) )
#define IBackgroundCopyGroup_SuspendGroup(This) ( (This)->lpVtbl -> SuspendGroup(This) )
#define IBackgroundCopyGroup_ResumeGroup(This) ( (This)->lpVtbl -> ResumeGroup(This) )
#define IBackgroundCopyGroup_CancelGroup(This) ( (This)->lpVtbl -> CancelGroup(This) )
#define IBackgroundCopyGroup_get_Size(This,pdwSize) ( (This)->lpVtbl -> get_Size(This,pdwSize) )
#define IBackgroundCopyGroup_get_GroupID(This,pguidGroupID) ( (This)->lpVtbl -> get_GroupID(This,pguidGroupID) )
#define IBackgroundCopyGroup_CreateJob(This,guidJobID,ppJob) ( (This)->lpVtbl -> CreateJob(This,guidJobID,ppJob) )
#define IBackgroundCopyGroup_EnumJobs(This,dwFlags,ppEnumJobs) ( (This)->lpVtbl -> EnumJobs(This,dwFlags,ppEnumJobs) )
#define IBackgroundCopyGroup_SwitchToForeground(This) ( (This)->lpVtbl -> SwitchToForeground(This) )
#define IBackgroundCopyGroup_QueryNewJobInterface(This,iid,pUnk) ( (This)->lpVtbl -> QueryNewJobInterface(This,iid,pUnk) )
#define IBackgroundCopyGroup_SetNotificationPointer(This,iid,pUnk) ( (This)->lpVtbl -> SetNotificationPointer(This,iid,pUnk) )
#endif
HRESULT STDMETHODCALLTYPE IBackgroundCopyGroup_InternalSetProp_Proxy(IBackgroundCopyGroup *This, GROUPPROP propID, VARIANT *pvarVal);
void __RPC_STUB IBackgroundCopyGroup_InternalSetProp_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumBackgroundCopyGroups_INTERFACE_DEFINED__
#define __IEnumBackgroundCopyGroups_INTERFACE_DEFINED__
extern const IID IID_IEnumBackgroundCopyGroups;
typedef struct IEnumBackgroundCopyGroupsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumBackgroundCopyGroups *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumBackgroundCopyGroups *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumBackgroundCopyGroups *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumBackgroundCopyGroups *This, ULONG celt, GUID *rgelt, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumBackgroundCopyGroups *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumBackgroundCopyGroups *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumBackgroundCopyGroups *This, IEnumBackgroundCopyGroups **ppenum);
	HRESULT(STDMETHODCALLTYPE *GetCount) (IEnumBackgroundCopyGroups *This, ULONG *puCount);
	END_INTERFACE
}  IEnumBackgroundCopyGroupsVtbl;
interface IEnumBackgroundCopyGroups
{
	CONST_VTBL struct IEnumBackgroundCopyGroupsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumBackgroundCopyGroups_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumBackgroundCopyGroups_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumBackgroundCopyGroups_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumBackgroundCopyGroups_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumBackgroundCopyGroups_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumBackgroundCopyGroups_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumBackgroundCopyGroups_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#define IEnumBackgroundCopyGroups_GetCount(This,puCount) ( (This)->lpVtbl -> GetCount(This,puCount) )
#endif
#endif
#ifndef __IBackgroundCopyCallback1_INTERFACE_DEFINED__
#define __IBackgroundCopyCallback1_INTERFACE_DEFINED__
extern const IID IID_IBackgroundCopyCallback1;
typedef struct IBackgroundCopyCallback1Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IBackgroundCopyCallback1 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IBackgroundCopyCallback1 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IBackgroundCopyCallback1 *This);
	HRESULT(STDMETHODCALLTYPE *OnStatus) (IBackgroundCopyCallback1 *This, IBackgroundCopyGroup *pGroup, IBackgroundCopyJob1 *pJob, DWORD dwFileIndex, DWORD dwStatus, DWORD dwNumOfRetries, DWORD dwWin32Result, DWORD dwTransportResult);
	HRESULT(STDMETHODCALLTYPE *OnProgress) (IBackgroundCopyCallback1 *This, DWORD ProgressType, IBackgroundCopyGroup *pGroup, IBackgroundCopyJob1 *pJob, DWORD dwFileIndex, DWORD dwProgressValue);
	HRESULT(STDMETHODCALLTYPE *OnProgressEx) (IBackgroundCopyCallback1 *This, DWORD ProgressType, IBackgroundCopyGroup *pGroup, IBackgroundCopyJob1 *pJob, DWORD dwFileIndex, DWORD dwProgressValue, DWORD dwByteArraySize, BYTE *pByte);
	END_INTERFACE
}  IBackgroundCopyCallback1Vtbl;
interface IBackgroundCopyCallback1
{
	CONST_VTBL struct IBackgroundCopyCallback1Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBackgroundCopyCallback1_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBackgroundCopyCallback1_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IBackgroundCopyCallback1_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IBackgroundCopyCallback1_OnStatus(This,pGroup,pJob,dwFileIndex,dwStatus,dwNumOfRetries,dwWin32Result,dwTransportResult) ( (This)->lpVtbl -> OnStatus(This,pGroup,pJob,dwFileIndex,dwStatus,dwNumOfRetries,dwWin32Result,dwTransportResult) )
#define IBackgroundCopyCallback1_OnProgress(This,ProgressType,pGroup,pJob,dwFileIndex,dwProgressValue) ( (This)->lpVtbl -> OnProgress(This,ProgressType,pGroup,pJob,dwFileIndex,dwProgressValue) )
#define IBackgroundCopyCallback1_OnProgressEx(This,ProgressType,pGroup,pJob,dwFileIndex,dwProgressValue,dwByteArraySize,pByte) ( (This)->lpVtbl -> OnProgressEx(This,ProgressType,pGroup,pJob,dwFileIndex,dwProgressValue,dwByteArraySize,pByte) )
#endif
#endif
#ifndef __IBackgroundCopyQMgr_INTERFACE_DEFINED__
#define __IBackgroundCopyQMgr_INTERFACE_DEFINED__
extern const IID IID_IBackgroundCopyQMgr;
typedef struct IBackgroundCopyQMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IBackgroundCopyQMgr *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IBackgroundCopyQMgr *This);
	ULONG(STDMETHODCALLTYPE *Release) (IBackgroundCopyQMgr *This);
	HRESULT(STDMETHODCALLTYPE *CreateGroup) (IBackgroundCopyQMgr *This, GUID guidGroupID, IBackgroundCopyGroup **ppGroup);
	HRESULT(STDMETHODCALLTYPE *GetGroup) (IBackgroundCopyQMgr *This, GUID groupID, IBackgroundCopyGroup **ppGroup);
	HRESULT(STDMETHODCALLTYPE *EnumGroups) (IBackgroundCopyQMgr *This, DWORD dwFlags, IEnumBackgroundCopyGroups **ppEnumGroups);
	END_INTERFACE
}  IBackgroundCopyQMgrVtbl;
interface IBackgroundCopyQMgr
{
	CONST_VTBL struct IBackgroundCopyQMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBackgroundCopyQMgr_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBackgroundCopyQMgr_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IBackgroundCopyQMgr_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IBackgroundCopyQMgr_CreateGroup(This,guidGroupID,ppGroup) ( (This)->lpVtbl -> CreateGroup(This,guidGroupID,ppGroup) )
#define IBackgroundCopyQMgr_GetGroup(This,groupID,ppGroup) ( (This)->lpVtbl -> GetGroup(This,groupID,ppGroup) )
#define IBackgroundCopyQMgr_EnumGroups(This,dwFlags,ppEnumGroups) ( (This)->lpVtbl -> EnumGroups(This,dwFlags,ppEnumGroups) )
#endif
#endif
#ifndef __BackgroundCopyQMgr_LIBRARY_DEFINED__
#define __BackgroundCopyQMgr_LIBRARY_DEFINED__
extern const IID LIBID_BackgroundCopyQMgr;
extern const CLSID CLSID_BackgroundCopyQMgr;
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
HRESULT STDMETHODCALLTYPE IBackgroundCopyGroup_SetProp_Proxy(IBackgroundCopyGroup *This, GROUPPROP propID, VARIANT *pvarVal);
HRESULT STDMETHODCALLTYPE IBackgroundCopyGroup_SetProp_Stub(IBackgroundCopyGroup *This, GROUPPROP propID, VARIANT *pvarVal);
#endif
