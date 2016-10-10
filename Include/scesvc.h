/*+@@file@@----------------------------------------------------------------*//*!
 \file		scesvc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 22:34:52 2016
 \date		Modified on Fri Sep 16 22:34:52 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _scesvc_
#define _scesvc_
#if __POCC__ >= 500
#pragma once
#endif
DEFINE_GUID(cNodetypeSceTemplateServices, 0x24a7f717, 0x1f0c, 0x11d1, 0xaf, 0xfb, 0x0, 0xc0, 0x4f, 0xb9, 0x84, 0xf9);
DEFINE_GUID(cNodetypeSceAnalysisServices, 0x678050c7, 0x1ff8, 0x11d1, 0xaf, 0xfb, 0x0, 0xc0, 0x4f, 0xb9, 0x84, 0xf9);
DEFINE_GUID(cNodetypeSceEventLog, 0x2ce06698, 0x4bf3, 0x11d1, 0x8c, 0x30, 0x0, 0xc0, 0x4f, 0xb9, 0x84, 0xf9);
DEFINE_GUID(IID_ISceSvcAttachmentPersistInfo, 0x6d90e0d0, 0x200d, 0x11d1, 0xaf, 0xfb, 0x0, 0xc0, 0x4f, 0xb9, 0x84, 0xf9);
DEFINE_GUID(IID_ISceSvcAttachmentData, 0x17c35fde, 0x200d, 0x11d1, 0xaf, 0xfb, 0x0, 0xc0, 0x4f, 0xb9, 0x84, 0xf9);
#ifndef _SCE_SHARED_HEADER
#define _SCE_SHARED_HEADER
typedef DWORD                   SCESTATUS;
#define SCESTATUS_SUCCESS              0L
#define SCESTATUS_INVALID_PARAMETER    1L
#define SCESTATUS_RECORD_NOT_FOUND     2L
#define SCESTATUS_INVALID_DATA         3L
#define SCESTATUS_OBJECT_EXIST         4L
#define SCESTATUS_BUFFER_TOO_SMALL     5L
#define SCESTATUS_PROFILE_NOT_FOUND    6L
#define SCESTATUS_BAD_FORMAT           7L
#define SCESTATUS_NOT_ENOUGH_RESOURCE  8L
#define SCESTATUS_ACCESS_DENIED        9L
#define SCESTATUS_CANT_DELETE          10L
#define SCESTATUS_PREFIX_OVERFLOW      11L
#define SCESTATUS_OTHER_ERROR          12L
#define SCESTATUS_ALREADY_RUNNING      13L
#define SCESTATUS_SERVICE_NOT_SUPPORT  14L
#define SCESTATUS_MOD_NOT_FOUND        15L
#define SCESTATUS_EXCEPTION_IN_SERVER  16L
#define SCESTATUS_NO_TEMPLATE_GIVEN    17L
#define SCESTATUS_NO_MAPPING           18L
#define SCESTATUS_TRUST_FAIL           19L
typedef struct _SCESVC_CONFIGURATION_LINE_
{
    LPTSTR  Key;
    LPTSTR  Value;
    DWORD   ValueLen;
} SCESVC_CONFIGURATION_LINE, *PSCESVC_CONFIGURATION_LINE;
typedef struct _SCESVC_CONFIGURATION_INFO_
{
    DWORD   Count;
    PSCESVC_CONFIGURATION_LINE Lines;
} SCESVC_CONFIGURATION_INFO, *PSCESVC_CONFIGURATION_INFO;
typedef PVOID SCE_HANDLE;
typedef ULONG SCE_ENUMERATION_CONTEXT, *PSCE_ENUMERATION_CONTEXT;
typedef enum _SCESVC_INFO_TYPE
{
    SceSvcConfigurationInfo,
    SceSvcMergedPolicyInfo,
    SceSvcAnalysisInfo,
    SceSvcInternalUse
} SCESVC_INFO_TYPE;
#define SCE_ROOT_PATH TEXT("Software\\Microsoft\\Windows NT\\CurrentVersion\\SeCEdit")
#define SCE_ROOT_SERVICE_PATH   SCE_ROOT_PATH TEXT("\\SvcEngs")
#endif
typedef PVOID SCESVC_HANDLE;
typedef struct _SCESVC_ANALYSIS_LINE_
{
    LPTSTR  Key;
    PBYTE   Value;
    DWORD   ValueLen;
} SCESVC_ANALYSIS_LINE, *PSCESVC_ANALYSIS_LINE;
typedef struct _SCESVC_ANALYSIS_INFO_
{
    DWORD   Count;
    PSCESVC_ANALYSIS_LINE Lines;
} SCESVC_ANALYSIS_INFO, *PSCESVC_ANALYSIS_INFO;
#define SCESVC_ENUMERATION_MAX  100L
typedef SCESTATUS(CALLBACK *PFSCE_QUERY_INFO) (SCE_HANDLE sceHandle, SCESVC_INFO_TYPE sceType, LPTSTR lpPrefix, BOOL bExact, PVOID *ppvInfo, PSCE_ENUMERATION_CONTEXT psceEnumHandle);
typedef SCESTATUS(CALLBACK *PFSCE_SET_INFO) (SCE_HANDLE sceHandle, SCESVC_INFO_TYPE sceType, LPTSTR lpPrefix, BOOL bExact, PVOID pvInfo);
typedef SCESTATUS(CALLBACK *PFSCE_FREE_INFO) (PVOID pvServiceInfo);
#define SCE_LOG_LEVEL_ALWAYS      0
#define SCE_LOG_LEVEL_ERROR       1
#define SCE_LOG_LEVEL_DETAIL      2
#define SCE_LOG_LEVEL_DEBUG       3
typedef SCESTATUS(/*CALLBACK*/ __cdecl *PFSCE_LOG_INFO) (INT ErrLevel, DWORD Win32rc, LPTSTR pErrFmt, ...);
typedef struct _SCESVC_CALLBACK_INFO_
{
	SCE_HANDLE sceHandle;
	PFSCE_QUERY_INFO pfQueryInfo;
	PFSCE_SET_INFO pfSetInfo;
	PFSCE_FREE_INFO pfFreeInfo;
	PFSCE_LOG_INFO pfLogInfo;
} SCESVC_CALLBACK_INFO, *PSCESVC_CALLBACK_INFO;
typedef SCESTATUS(*PF_ConfigAnalyzeService) (PSCESVC_CALLBACK_INFO pSceCbInfo);
typedef SCESTATUS(*PF_UpdateService) (PSCESVC_CALLBACK_INFO pSceCbInfo, PSCESVC_CONFIGURATION_INFO ServiceInfo);
#endif
#ifndef _UUIDS_SCE_ATTACHMENT_
#define _UUIDS_SCE_ATTACHMENT_
#include "rpc.h"
#include "rpcndr.h"
#if __RPCNDR_H_VERSION__ < 440
#define __RPCNDR_H_VERSION__ 440
#ifndef MIDL_INTERFACE
#define MIDL_INTERFACE(x) interface
#endif
#endif
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#define struuidNodetypeSceTemplateServices      "{24a7f717-1f0c-11d1-affb-00c04fb984f9}"
#define lstruuidNodetypeSceTemplateServices      L"{24a7f717-1f0c-11d1-affb-00c04fb984f9}"
#define struuidNodetypeSceAnalysisServices      "{678050c7-1ff8-11d1-affb-00c04fb984f9}"
#define lstruuidNodetypeSceAnalysisServices      L"{678050c7-1ff8-11d1-affb-00c04fb984f9}"
#define struuidNodetypeSceEventLog      "{2ce06698-4bf3-11d1-8c30-00c04fb984f9}"
#define lstruuidNodetypeSceEventLog      L"{2ce06698-4bf3-11d1-8c30-00c04fb984f9}"
typedef PSCESVC_CONFIGURATION_INFO __RPC_FAR *LPSCESVC_CONFIGURATION_INFO;
typedef PSCESVC_ANALYSIS_INFO __RPC_FAR *LPSCESVC_ANALYSIS_INFO;
#define CCF_SCESVC_ATTACHMENT        L"CCF_SCESVC_ATTACHMENT"
#define CCF_SCESVC_ATTACHMENT_DATA   L"CCF_SCESVC_ATTACHMENT_DATA"
typedef interface ISceSvcAttachmentPersistInfo ISceSvcAttachmentPersistInfo;
typedef ISceSvcAttachmentPersistInfo __RPC_FAR *LPSCESVCATTACHMENTPERSISTINFO;

typedef struct ISceSvcAttachmentPersistInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * QueryInterface) (ISceSvcAttachmentPersistInfo __RPC_FAR * This, REFIID riid, void __RPC_FAR * __RPC_FAR * ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * AddRef) (ISceSvcAttachmentPersistInfo __RPC_FAR * This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * Release) (ISceSvcAttachmentPersistInfo __RPC_FAR * This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Save) (ISceSvcAttachmentPersistInfo __RPC_FAR * This, LPTSTR lpTemplateName, SCESVC_HANDLE scesvcHandle, PVOID * ppvData, PBOOL pbOverwriteAll);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * FreeBuffer) (ISceSvcAttachmentPersistInfo __RPC_FAR * This, PVOID pvData);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * IsDirty) (ISceSvcAttachmentPersistInfo __RPC_FAR * This, LPTSTR lpTemplateName);
	END_INTERFACE
} ISceSvcAttachmentPersistInfoVtbl;
interface ISceSvcAttachmentPersistInfo
{
	CONST_VTBL struct ISceSvcAttachmentPersistInfoVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IData_QueryInterface(This,riid,ppvObject)   (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISceSvcAttachmentPersistInfo_AddRef(This)   (This)->lpVtbl -> AddRef(This)
#define ISceSvcAttachmentPersistInfo_Release(This)  (This)->lpVtbl -> Release(This)
#define ISceSvcAttachmentPersistInfo_Save(This, lpTemplateName, scesvcHandle, ppvData, pbOverwriteAll) (This)->lpVtbl -> Save(lpTemplateName, scesvcHandle, ppvData, pbOverwriteAll)
#define ISceSvcAttachmentPersistInfo_FreeBuffer(This,pvData)    (This)->lpVtbl -> FreeBuffer(pvData)
#define ISceSvcAttachmentPersistInfo_CloseHandle(This, lpTemplateName)  (This)->lpVtbl -> IsDirty(lpTemplateName)
#endif
typedef interface ISceSvcAttachmentData ISceSvcAttachmentData;
typedef ISceSvcAttachmentData __RPC_FAR *LPSCESVCATTACHMENTDATA;
typedef struct ISceSvcAttachmentDataVtbl
{
	BEGIN_INTERFACE
	HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
	ISceSvcAttachmentData __RPC_FAR * This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
	ISceSvcAttachmentData __RPC_FAR * This);
	ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
	ISceSvcAttachmentData __RPC_FAR * This); HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( ISceSvcAttachmentData __RPC_FAR * This, LPCTSTR lpServiceName, LPCTSTR lpTemplateName, LPSCESVCATTACHMENTPERSISTINFO lpSceSvcPersistInfo, SCESVC_HANDLE *pscesvcHandle); HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetData )( ISceSvcAttachmentData __RPC_FAR * This, SCESVC_HANDLE scesvcHandle, SCESVC_INFO_TYPE sceType, PVOID *ppvData, PSCE_ENUMERATION_CONTEXT psceEnumHandle ); HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FreeBuffer )( ISceSvcAttachmentData __RPC_FAR * This, PVOID pvData); HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CloseHandle )( ISceSvcAttachmentData __RPC_FAR * This, SCESVC_HANDLE scesvcHandle);
	END_INTERFACE
} ISceSvcAttachmentDataVtbl;
interface ISceSvcAttachmentData
{
    CONST_VTBL struct ISceSvcAttachmentDataVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define IData_QueryInterface(This,riid,ppvObject)   (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISceSvcAttachmentData_AddRef(This)  (This)->lpVtbl -> AddRef(This)
#define ISceSvcAttachmentData_Release(This) (This)->lpVtbl -> Release(This)
#define ISceSvcAttachmentData_Initialize(This, lpServiceName, lpTemplateName, lpSceSvcPersistInfo, pscesvcHandle) This)->lpVtbl -> Initialize(lpServiceName, lpTemplateName, lpSceSvcPersistInfo, pscesvcHandle)
#define ISceSvcAttachmentData_GetData(This, scesvcHandle, sceType, ppvData, psceEnumHandle) (This)->lpVtbl -> GetData(scesvcHandle, sceType, ppvData, psceEnumHandle)
#define ISceSvcAttachmentData_FreeBuffer(This,pvData)   (This)->lpVtbl -> FreeBuffer(pvData)
#define ISceSvcAttachmentData_CloseHandle(This, scesvcHandle)  (This)->lpVtbl -> CloseHandle(scesvcHandle)
#endif
#endif
