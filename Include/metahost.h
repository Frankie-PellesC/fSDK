/*+@@file@@----------------------------------------------------------------*//*!
 \file		metahost.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug  7 19:57:18 2016
 \date		Modified on Sun Aug  7 19:57:18 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __metahost_h__
#define __metahost_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICLRMetaHost_FWD_DEFINED__
#define __ICLRMetaHost_FWD_DEFINED__
typedef interface ICLRMetaHost ICLRMetaHost;
#endif
#ifndef __ICLRMetaHostPolicy_FWD_DEFINED__
#define __ICLRMetaHostPolicy_FWD_DEFINED__
typedef interface ICLRMetaHostPolicy ICLRMetaHostPolicy;
#endif
#ifndef __ICLRProfiling_FWD_DEFINED__
#define __ICLRProfiling_FWD_DEFINED__
typedef interface ICLRProfiling ICLRProfiling;
#endif
#ifndef __ICLRDebuggingLibraryProvider_FWD_DEFINED__
#define __ICLRDebuggingLibraryProvider_FWD_DEFINED__
typedef interface ICLRDebuggingLibraryProvider ICLRDebuggingLibraryProvider;
#endif
#ifndef __ICLRDebugging_FWD_DEFINED__
#define __ICLRDebugging_FWD_DEFINED__
typedef interface ICLRDebugging ICLRDebugging;
#endif
#ifndef __ICLRRuntimeInfo_FWD_DEFINED__
#define __ICLRRuntimeInfo_FWD_DEFINED__
typedef interface ICLRRuntimeInfo ICLRRuntimeInfo;
#endif
#ifndef __ICLRStrongName_FWD_DEFINED__
#define __ICLRStrongName_FWD_DEFINED__
typedef interface ICLRStrongName ICLRStrongName;
#endif
#ifndef __ICLRMetaHost_FWD_DEFINED__
#define __ICLRMetaHost_FWD_DEFINED__
typedef interface ICLRMetaHost ICLRMetaHost;
#endif
#ifndef __ICLRMetaHostPolicy_FWD_DEFINED__
#define __ICLRMetaHostPolicy_FWD_DEFINED__
typedef interface ICLRMetaHostPolicy ICLRMetaHostPolicy;
#endif
#ifndef __ICLRProfiling_FWD_DEFINED__
#define __ICLRProfiling_FWD_DEFINED__
typedef interface ICLRProfiling ICLRProfiling;
#endif
#ifndef __ICLRDebuggingLibraryProvider_FWD_DEFINED__
#define __ICLRDebuggingLibraryProvider_FWD_DEFINED__
typedef interface ICLRDebuggingLibraryProvider ICLRDebuggingLibraryProvider;
#endif
#ifndef __ICLRDebugging_FWD_DEFINED__
#define __ICLRDebugging_FWD_DEFINED__
typedef interface ICLRDebugging ICLRDebugging;
#endif
#ifndef __ICLRRuntimeInfo_FWD_DEFINED__
#define __ICLRRuntimeInfo_FWD_DEFINED__
typedef interface ICLRRuntimeInfo ICLRRuntimeInfo;
#endif
#ifndef __ICLRStrongName_FWD_DEFINED__
#define __ICLRStrongName_FWD_DEFINED__
typedef interface ICLRStrongName ICLRStrongName;
#endif
#include "unknwn.h"
#include "oaidl.h"
#include "ocidl.h"
#include "mscoree.h"
STDAPI CLRCreateInstance(REFCLSID clsid, REFIID riid, LPVOID *ppInterface);
EXTERN_GUID(CLSID_CLRStrongName, 0xB79B0ACD, 0xF5CD, 0x409b, 0xB5, 0xA5, 0xA1, 0x62, 0x44, 0x61, 0x0B, 0x92);
EXTERN_GUID(IID_ICLRMetaHost, 0xD332DB9E, 0xB9B3, 0x4125, 0x82, 0x07, 0xA1, 0x48, 0x84, 0xF5, 0x32, 0x16);
EXTERN_GUID(CLSID_CLRMetaHost, 0x9280188d, 0xe8e, 0x4867, 0xb3, 0xc, 0x7f, 0xa8, 0x38, 0x84, 0xe8, 0xde);
EXTERN_GUID(IID_ICLRMetaHostPolicy, 0xE2190695, 0x77B2, 0x492e, 0x8E, 0x14, 0xC4, 0xB3, 0xA7, 0xFD, 0xD5, 0x93);
EXTERN_GUID(CLSID_CLRMetaHostPolicy, 0x2ebcd49a, 0x1b47, 0x4a61, 0xb1, 0x3a, 0x4a, 0x3, 0x70, 0x1e, 0x59, 0x4b);
EXTERN_GUID(IID_ICLRDebugging, 0xd28f3c5a, 0x9634, 0x4206, 0xa5, 0x9, 0x47, 0x75, 0x52, 0xee, 0xfb, 0x10);
EXTERN_GUID(CLSID_CLRDebugging, 0xbacc578d, 0xfbdd, 0x48a4, 0x96, 0x9f, 0x2, 0xd9, 0x32, 0xb7, 0x46, 0x34);
EXTERN_GUID(IID_ICLRRuntimeInfo, 0xBD39D1D2, 0xBA2F, 0x486a, 0x89, 0xB0, 0xB4, 0xB0, 0xCB, 0x46, 0x68, 0x91);
EXTERN_GUID(IID_ICLRStrongName, 0x9FD93CCF, 0x3280, 0x4391, 0xB3, 0xA9, 0x96, 0xE1, 0xCD, 0xE7, 0x7C, 0x8D);
EXTERN_GUID(CLSID_CLRDebuggingLegacy, 0xDF8395B5, 0xA4BA, 0x450b, 0xA7, 0x7C, 0xA9, 0xA4, 0x77, 0x62, 0xC5, 0x20);
EXTERN_GUID(CLSID_CLRProfiling, 0xbd097ed8, 0x733e, 0x43fe, 0x8e, 0xd7, 0xa9, 0x5f, 0xf9, 0xa8, 0x44, 0x8c);
EXTERN_GUID(IID_ICLRProfiling, 0xb349abe3, 0xb56f, 0x4689, 0xbf, 0xcd, 0x76, 0xbf, 0x39, 0xd8, 0x88, 0xea);
EXTERN_GUID(IID_ICLRDebuggingLibraryProvider, 0x3151c08d, 0x4d09, 0x4f9b, 0x88, 0x38, 0x28, 0x80, 0xbf, 0x18, 0xfe, 0x51);
typedef HRESULT(__stdcall *CLRCreateInstanceFnPtr) (REFCLSID clsid, REFIID riid, LPVOID *ppInterface);
typedef HRESULT(__stdcall *CreateInterfaceFnPtr) (REFCLSID clsid, REFIID riid, LPVOID *ppInterface);
typedef HRESULT(__stdcall *CallbackThreadSetFnPtr) (void);
typedef HRESULT(__stdcall *CallbackThreadUnsetFnPtr) (void);
typedef void (__stdcall *RuntimeLoadedCallbackFnPtr) (ICLRRuntimeInfo *pRuntimeInfo, CallbackThreadSetFnPtr pfnCallbackThreadSet, CallbackThreadUnsetFnPtr pfnCallbackThreadUnset);
extern RPC_IF_HANDLE __MIDL_itf_metahost_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_metahost_0000_0000_v0_0_s_ifspec;
#ifndef __ICLRMetaHost_INTERFACE_DEFINED__
#define __ICLRMetaHost_INTERFACE_DEFINED__
extern const IID IID_ICLRMetaHost;
typedef struct ICLRMetaHostVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICLRMetaHost *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICLRMetaHost *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICLRMetaHost *This);
	HRESULT(STDMETHODCALLTYPE *GetRuntime) (ICLRMetaHost *This, LPCWSTR pwzVersion, REFIID riid, LPVOID *ppRuntime);
	HRESULT(STDMETHODCALLTYPE *GetVersionFromFile) (ICLRMetaHost *This, LPCWSTR pwzFilePath, LPWSTR pwzBuffer, DWORD *pcchBuffer);
	HRESULT(STDMETHODCALLTYPE *EnumerateInstalledRuntimes) (ICLRMetaHost *This, IEnumUnknown **ppEnumerator);
	HRESULT(STDMETHODCALLTYPE *EnumerateLoadedRuntimes) (ICLRMetaHost *This, HANDLE hndProcess, IEnumUnknown **ppEnumerator);
	HRESULT(STDMETHODCALLTYPE *RequestRuntimeLoadedNotification) (ICLRMetaHost *This, RuntimeLoadedCallbackFnPtr pCallbackFunction);
	HRESULT(STDMETHODCALLTYPE *QueryLegacyV2RuntimeBinding) (ICLRMetaHost *This, REFIID riid, LPVOID *ppUnk);
	HRESULT(STDMETHODCALLTYPE *ExitProcess) (ICLRMetaHost *This, INT32 iExitCode);
	END_INTERFACE
}  ICLRMetaHostVtbl;
interface ICLRMetaHost
{
	CONST_VTBL struct ICLRMetaHostVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICLRMetaHost_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICLRMetaHost_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICLRMetaHost_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICLRMetaHost_GetRuntime(This,pwzVersion,riid,ppRuntime) ( (This)->lpVtbl -> GetRuntime(This,pwzVersion,riid,ppRuntime) )
#define ICLRMetaHost_GetVersionFromFile(This,pwzFilePath,pwzBuffer,pcchBuffer) ( (This)->lpVtbl -> GetVersionFromFile(This,pwzFilePath,pwzBuffer,pcchBuffer) )
#define ICLRMetaHost_EnumerateInstalledRuntimes(This,ppEnumerator) ( (This)->lpVtbl -> EnumerateInstalledRuntimes(This,ppEnumerator) )
#define ICLRMetaHost_EnumerateLoadedRuntimes(This,hndProcess,ppEnumerator) ( (This)->lpVtbl -> EnumerateLoadedRuntimes(This,hndProcess,ppEnumerator) )
#define ICLRMetaHost_RequestRuntimeLoadedNotification(This,pCallbackFunction) ( (This)->lpVtbl -> RequestRuntimeLoadedNotification(This,pCallbackFunction) )
#define ICLRMetaHost_QueryLegacyV2RuntimeBinding(This,riid,ppUnk) ( (This)->lpVtbl -> QueryLegacyV2RuntimeBinding(This,riid,ppUnk) )
#define ICLRMetaHost_ExitProcess(This,iExitCode) ( (This)->lpVtbl -> ExitProcess(This,iExitCode) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_metahost_0000_0001_0001
{
	METAHOST_POLICY_HIGHCOMPAT = 0,
	METAHOST_POLICY_APPLY_UPGRADE_POLICY = 0x8,
	METAHOST_POLICY_EMULATE_EXE_LAUNCH = 0x10,
	METAHOST_POLICY_SHOW_ERROR_DIALOG = 0x20,
	METAHOST_POLICY_USE_PROCESS_IMAGE_PATH = 0x40,
	METAHOST_POLICY_ENSURE_SKU_SUPPORTED = 0x80
} METAHOST_POLICY_FLAGS;
typedef enum __MIDL___MIDL_itf_metahost_0000_0001_0002
{
	METAHOST_CONFIG_FLAGS_LEGACY_V2_ACTIVATION_POLICY_UNSET = 0,
	METAHOST_CONFIG_FLAGS_LEGACY_V2_ACTIVATION_POLICY_TRUE = 0x1,
	METAHOST_CONFIG_FLAGS_LEGACY_V2_ACTIVATION_POLICY_FALSE = 0x2,
	METAHOST_CONFIG_FLAGS_LEGACY_V2_ACTIVATION_POLICY_MASK = 0x3
} METAHOST_CONFIG_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_metahost_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_metahost_0000_0001_v0_0_s_ifspec;
#ifndef __ICLRMetaHostPolicy_INTERFACE_DEFINED__
#define __ICLRMetaHostPolicy_INTERFACE_DEFINED__
extern const IID IID_ICLRMetaHostPolicy;
typedef struct ICLRMetaHostPolicyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICLRMetaHostPolicy *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICLRMetaHostPolicy *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICLRMetaHostPolicy *This);
	HRESULT(STDMETHODCALLTYPE *GetRequestedRuntime) (ICLRMetaHostPolicy *This, METAHOST_POLICY_FLAGS dwPolicyFlags, LPCWSTR pwzBinary, IStream *pCfgStream, LPWSTR pwzVersion, DWORD *pcchVersion, LPWSTR pwzImageVersion, DWORD *pcchImageVersion, DWORD *pdwConfigFlags, REFIID riid, LPVOID *ppRuntime);
	END_INTERFACE
}  ICLRMetaHostPolicyVtbl;
interface ICLRMetaHostPolicy
{
	CONST_VTBL struct ICLRMetaHostPolicyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICLRMetaHostPolicy_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICLRMetaHostPolicy_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICLRMetaHostPolicy_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICLRMetaHostPolicy_GetRequestedRuntime(This,dwPolicyFlags,pwzBinary,pCfgStream,pwzVersion,pcchVersion,pwzImageVersion,pcchImageVersion,pdwConfigFlags,riid,ppRuntime) ( (This)->lpVtbl -> GetRequestedRuntime(This,dwPolicyFlags,pwzBinary,pCfgStream,pwzVersion,pcchVersion,pwzImageVersion,pcchImageVersion,pdwConfigFlags,riid,ppRuntime) )
#endif
#endif
#ifndef __ICLRProfiling_INTERFACE_DEFINED__
#define __ICLRProfiling_INTERFACE_DEFINED__
extern const IID IID_ICLRProfiling;
typedef struct ICLRProfilingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICLRProfiling *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICLRProfiling *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICLRProfiling *This);
	HRESULT(STDMETHODCALLTYPE *AttachProfiler) (ICLRProfiling *This, DWORD dwProfileeProcessID, DWORD dwMillisecondsMax, const CLSID *pClsidProfiler, LPCWSTR wszProfilerPath, void *pvClientData, UINT cbClientData);
	END_INTERFACE
}  ICLRProfilingVtbl;
interface ICLRProfiling
{
	CONST_VTBL struct ICLRProfilingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICLRProfiling_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICLRProfiling_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICLRProfiling_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICLRProfiling_AttachProfiler(This,dwProfileeProcessID,dwMillisecondsMax,pClsidProfiler,wszProfilerPath,pvClientData,cbClientData) ( (This)->lpVtbl -> AttachProfiler(This,dwProfileeProcessID,dwMillisecondsMax,pClsidProfiler,wszProfilerPath,pvClientData,cbClientData) )
#endif
#endif
typedef struct _CLR_DEBUGGING_VERSION
{
	WORD wStructVersion;
	WORD wMajor;
	WORD wMinor;
	WORD wBuild;
	WORD wRevision;
} CLR_DEBUGGING_VERSION;
typedef enum __MIDL___MIDL_itf_metahost_0000_0003_0001
{
	CLR_DEBUGGING_MANAGED_EVENT_PENDING = 1
} CLR_DEBUGGING_PROCESS_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_metahost_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_metahost_0000_0003_v0_0_s_ifspec;
#ifndef __ICLRDebuggingLibraryProvider_INTERFACE_DEFINED__
#define __ICLRDebuggingLibraryProvider_INTERFACE_DEFINED__
extern const IID IID_ICLRDebuggingLibraryProvider;
typedef struct ICLRDebuggingLibraryProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICLRDebuggingLibraryProvider *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICLRDebuggingLibraryProvider *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICLRDebuggingLibraryProvider *This);
	HRESULT(STDMETHODCALLTYPE *ProvideLibrary) (ICLRDebuggingLibraryProvider *This, const WCHAR *pwszFileName, DWORD dwTimestamp, DWORD dwSizeOfImage, HMODULE *phModule);
	END_INTERFACE
}  ICLRDebuggingLibraryProviderVtbl;
interface ICLRDebuggingLibraryProvider
{
	CONST_VTBL struct ICLRDebuggingLibraryProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICLRDebuggingLibraryProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICLRDebuggingLibraryProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICLRDebuggingLibraryProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICLRDebuggingLibraryProvider_ProvideLibrary(This,pwszFileName,dwTimestamp,dwSizeOfImage,phModule) ( (This)->lpVtbl -> ProvideLibrary(This,pwszFileName,dwTimestamp,dwSizeOfImage,phModule) )
#endif
#endif
#ifndef __ICLRDebugging_INTERFACE_DEFINED__
#define __ICLRDebugging_INTERFACE_DEFINED__
extern const IID IID_ICLRDebugging;
typedef struct ICLRDebuggingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICLRDebugging *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICLRDebugging *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICLRDebugging *This);
	HRESULT(STDMETHODCALLTYPE *OpenVirtualProcess) (ICLRDebugging *This, ULONG64 moduleBaseAddress, IUnknown *pDataTarget, ICLRDebuggingLibraryProvider *pLibraryProvider, CLR_DEBUGGING_VERSION *pMaxDebuggerSupportedVersion, REFIID riidProcess, IUnknown **ppProcess, CLR_DEBUGGING_VERSION *pVersion, CLR_DEBUGGING_PROCESS_FLAGS *pdwFlags);
	HRESULT(STDMETHODCALLTYPE *CanUnloadNow) (ICLRDebugging *This, HMODULE hModule);
	END_INTERFACE
}  ICLRDebuggingVtbl;
interface ICLRDebugging
{
	CONST_VTBL struct ICLRDebuggingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICLRDebugging_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICLRDebugging_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICLRDebugging_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICLRDebugging_OpenVirtualProcess(This,moduleBaseAddress,pDataTarget,pLibraryProvider,pMaxDebuggerSupportedVersion,riidProcess,ppProcess,pVersion,pdwFlags) ( (This)->lpVtbl -> OpenVirtualProcess(This,moduleBaseAddress,pDataTarget,pLibraryProvider,pMaxDebuggerSupportedVersion,riidProcess,ppProcess,pVersion,pdwFlags) )
#define ICLRDebugging_CanUnloadNow(This,hModule) ( (This)->lpVtbl -> CanUnloadNow(This,hModule) )
#endif
#endif
#ifndef __ICLRRuntimeInfo_INTERFACE_DEFINED__
#define __ICLRRuntimeInfo_INTERFACE_DEFINED__
extern const IID IID_ICLRRuntimeInfo;
typedef struct ICLRRuntimeInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICLRRuntimeInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICLRRuntimeInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICLRRuntimeInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetVersionString) (ICLRRuntimeInfo *This, LPWSTR pwzBuffer, DWORD *pcchBuffer);
	HRESULT(STDMETHODCALLTYPE *GetRuntimeDirectory) (ICLRRuntimeInfo *This, LPWSTR pwzBuffer, DWORD *pcchBuffer);
	HRESULT(STDMETHODCALLTYPE *IsLoaded) (ICLRRuntimeInfo *This, HANDLE hndProcess, BOOL *pbLoaded);
	HRESULT(STDMETHODCALLTYPE *LoadErrorString) (ICLRRuntimeInfo *This, UINT iResourceID, LPWSTR pwzBuffer, DWORD *pcchBuffer, LONG iLocaleID);
	HRESULT(STDMETHODCALLTYPE *LoadLibrary) (ICLRRuntimeInfo *This, LPCWSTR pwzDllName, HMODULE *phndModule);
	HRESULT(STDMETHODCALLTYPE *GetProcAddress) (ICLRRuntimeInfo *This, LPCSTR pszProcName, LPVOID *ppProc);
	HRESULT(STDMETHODCALLTYPE *GetInterface) (ICLRRuntimeInfo *This, REFCLSID rclsid, REFIID riid, LPVOID *ppUnk);
	HRESULT(STDMETHODCALLTYPE *IsLoadable) (ICLRRuntimeInfo *This, BOOL *pbLoadable);
	HRESULT(STDMETHODCALLTYPE *SetDefaultStartupFlags) (ICLRRuntimeInfo *This, DWORD dwStartupFlags, LPCWSTR pwzHostConfigFile);
	HRESULT(STDMETHODCALLTYPE *GetDefaultStartupFlags) (ICLRRuntimeInfo *This, DWORD *pdwStartupFlags, LPWSTR pwzHostConfigFile, DWORD *pcchHostConfigFile);
	HRESULT(STDMETHODCALLTYPE *BindAsLegacyV2Runtime) (ICLRRuntimeInfo *This);
	HRESULT(STDMETHODCALLTYPE *IsStarted) (ICLRRuntimeInfo *This, BOOL *pbStarted, DWORD *pdwStartupFlags);
	END_INTERFACE
}  ICLRRuntimeInfoVtbl;
interface ICLRRuntimeInfo
{
	CONST_VTBL struct ICLRRuntimeInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICLRRuntimeInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICLRRuntimeInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICLRRuntimeInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICLRRuntimeInfo_GetVersionString(This,pwzBuffer,pcchBuffer) ( (This)->lpVtbl -> GetVersionString(This,pwzBuffer,pcchBuffer) )
#define ICLRRuntimeInfo_GetRuntimeDirectory(This,pwzBuffer,pcchBuffer) ( (This)->lpVtbl -> GetRuntimeDirectory(This,pwzBuffer,pcchBuffer) )
#define ICLRRuntimeInfo_IsLoaded(This,hndProcess,pbLoaded) ( (This)->lpVtbl -> IsLoaded(This,hndProcess,pbLoaded) )
#define ICLRRuntimeInfo_LoadErrorString(This,iResourceID,pwzBuffer,pcchBuffer,iLocaleID) ( (This)->lpVtbl -> LoadErrorString(This,iResourceID,pwzBuffer,pcchBuffer,iLocaleID) )
#define ICLRRuntimeInfo_LoadLibrary(This,pwzDllName,phndModule) ( (This)->lpVtbl -> LoadLibrary(This,pwzDllName,phndModule) )
#define ICLRRuntimeInfo_GetProcAddress(This,pszProcName,ppProc) ( (This)->lpVtbl -> GetProcAddress(This,pszProcName,ppProc) )
#define ICLRRuntimeInfo_GetInterface(This,rclsid,riid,ppUnk) ( (This)->lpVtbl -> GetInterface(This,rclsid,riid,ppUnk) )
#define ICLRRuntimeInfo_IsLoadable(This,pbLoadable) ( (This)->lpVtbl -> IsLoadable(This,pbLoadable) )
#define ICLRRuntimeInfo_SetDefaultStartupFlags(This,dwStartupFlags,pwzHostConfigFile) ( (This)->lpVtbl -> SetDefaultStartupFlags(This,dwStartupFlags,pwzHostConfigFile) )
#define ICLRRuntimeInfo_GetDefaultStartupFlags(This,pdwStartupFlags,pwzHostConfigFile,pcchHostConfigFile) ( (This)->lpVtbl -> GetDefaultStartupFlags(This,pdwStartupFlags,pwzHostConfigFile,pcchHostConfigFile) )
#define ICLRRuntimeInfo_BindAsLegacyV2Runtime(This) ( (This)->lpVtbl -> BindAsLegacyV2Runtime(This) )
#define ICLRRuntimeInfo_IsStarted(This,pbStarted,pdwStartupFlags) ( (This)->lpVtbl -> IsStarted(This,pbStarted,pdwStartupFlags) )
#endif
#endif
#ifndef __ICLRStrongName_INTERFACE_DEFINED__
#define __ICLRStrongName_INTERFACE_DEFINED__
extern const IID IID_ICLRStrongName;
typedef struct ICLRStrongNameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICLRStrongName *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICLRStrongName *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICLRStrongName *This);
	HRESULT(STDMETHODCALLTYPE *GetHashFromAssemblyFile) (ICLRStrongName *This, LPCSTR pszFilePath, unsigned int *piHashAlg, BYTE *pbHash, DWORD cchHash, DWORD *pchHash);
	HRESULT(STDMETHODCALLTYPE *GetHashFromAssemblyFileW) (ICLRStrongName *This, LPCWSTR pwzFilePath, unsigned int *piHashAlg, BYTE *pbHash, DWORD cchHash, DWORD *pchHash);
	HRESULT(STDMETHODCALLTYPE *GetHashFromBlob) (ICLRStrongName *This, BYTE *pbBlob, DWORD cchBlob, unsigned int *piHashAlg, BYTE *pbHash, DWORD cchHash, DWORD *pchHash);
	HRESULT(STDMETHODCALLTYPE *GetHashFromFile) (ICLRStrongName *This, LPCSTR pszFilePath, unsigned int *piHashAlg, BYTE *pbHash, DWORD cchHash, DWORD *pchHash);
	HRESULT(STDMETHODCALLTYPE *GetHashFromFileW) (ICLRStrongName *This, LPCWSTR pwzFilePath, unsigned int *piHashAlg, BYTE *pbHash, DWORD cchHash, DWORD *pchHash);
	HRESULT(STDMETHODCALLTYPE *GetHashFromHandle) (ICLRStrongName *This, HANDLE hFile, unsigned int *piHashAlg, BYTE *pbHash, DWORD cchHash, DWORD *pchHash);
	HRESULT(STDMETHODCALLTYPE *StrongNameCompareAssemblies) (ICLRStrongName *This, LPCWSTR pwzAssembly1, LPCWSTR pwzAssembly2, DWORD *pdwResult);
	HRESULT(STDMETHODCALLTYPE *StrongNameFreeBuffer) (ICLRStrongName *This, BYTE *pbMemory);
	HRESULT(STDMETHODCALLTYPE *StrongNameGetBlob) (ICLRStrongName *This, LPCWSTR pwzFilePath, BYTE *pbBlob, DWORD *pcbBlob);
	HRESULT(STDMETHODCALLTYPE *StrongNameGetBlobFromImage) (ICLRStrongName *This, BYTE *pbBase, DWORD dwLength, BYTE *pbBlob, DWORD *pcbBlob);
	HRESULT(STDMETHODCALLTYPE *StrongNameGetPublicKey) (ICLRStrongName *This, LPCWSTR pwzKeyContainer, BYTE *pbKeyBlob, ULONG cbKeyBlob, BYTE **ppbPublicKeyBlob, ULONG *pcbPublicKeyBlob);
	HRESULT(STDMETHODCALLTYPE *StrongNameHashSize) (ICLRStrongName *This, ULONG ulHashAlg, DWORD *pcbSize);
	HRESULT(STDMETHODCALLTYPE *StrongNameKeyDelete) (ICLRStrongName *This, LPCWSTR pwzKeyContainer);
	HRESULT(STDMETHODCALLTYPE *StrongNameKeyGen) (ICLRStrongName *This, LPCWSTR pwzKeyContainer, DWORD dwFlags, BYTE **ppbKeyBlob, ULONG *pcbKeyBlob);
	HRESULT(STDMETHODCALLTYPE *StrongNameKeyGenEx) (ICLRStrongName *This, LPCWSTR pwzKeyContainer, DWORD dwFlags, DWORD dwKeySize, BYTE **ppbKeyBlob, ULONG *pcbKeyBlob);
	HRESULT(STDMETHODCALLTYPE *StrongNameKeyInstall) (ICLRStrongName *This, LPCWSTR pwzKeyContainer, BYTE *pbKeyBlob, ULONG cbKeyBlob);
	HRESULT(STDMETHODCALLTYPE *StrongNameSignatureGeneration) (ICLRStrongName *This, LPCWSTR pwzFilePath, LPCWSTR pwzKeyContainer, BYTE *pbKeyBlob, ULONG cbKeyBlob, BYTE **ppbSignatureBlob, ULONG *pcbSignatureBlob);
	HRESULT(STDMETHODCALLTYPE *StrongNameSignatureGenerationEx) (ICLRStrongName *This, LPCWSTR wszFilePath, LPCWSTR wszKeyContainer, BYTE *pbKeyBlob, ULONG cbKeyBlob, BYTE **ppbSignatureBlob, ULONG *pcbSignatureBlob, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *StrongNameSignatureSize) (ICLRStrongName *This, BYTE *pbPublicKeyBlob, ULONG cbPublicKeyBlob, DWORD *pcbSize);
	HRESULT(STDMETHODCALLTYPE *StrongNameSignatureVerification) (ICLRStrongName *This, LPCWSTR pwzFilePath, DWORD dwInFlags, DWORD *pdwOutFlags);
	HRESULT(STDMETHODCALLTYPE *StrongNameSignatureVerificationEx) (ICLRStrongName *This, LPCWSTR pwzFilePath, BOOLEAN fForceVerification, BOOLEAN *pfWasVerified);
	HRESULT(STDMETHODCALLTYPE *StrongNameSignatureVerificationFromImage) (ICLRStrongName *This, BYTE *pbBase, DWORD dwLength, DWORD dwInFlags, DWORD *pdwOutFlags);
	HRESULT(STDMETHODCALLTYPE *StrongNameTokenFromAssembly) (ICLRStrongName *This, LPCWSTR pwzFilePath, BYTE **ppbStrongNameToken, ULONG *pcbStrongNameToken);
	HRESULT(STDMETHODCALLTYPE *StrongNameTokenFromAssemblyEx) (ICLRStrongName *This, LPCWSTR pwzFilePath, BYTE **ppbStrongNameToken, ULONG *pcbStrongNameToken, BYTE **ppbPublicKeyBlob, ULONG *pcbPublicKeyBlob);
	HRESULT(STDMETHODCALLTYPE *StrongNameTokenFromPublicKey) (ICLRStrongName *This, BYTE *pbPublicKeyBlob, ULONG cbPublicKeyBlob, BYTE **ppbStrongNameToken, ULONG *pcbStrongNameToken);
	END_INTERFACE
}  ICLRStrongNameVtbl;
interface ICLRStrongName
{
	CONST_VTBL struct ICLRStrongNameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICLRStrongName_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICLRStrongName_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICLRStrongName_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICLRStrongName_GetHashFromAssemblyFile(This,pszFilePath,piHashAlg,pbHash,cchHash,pchHash) ( (This)->lpVtbl -> GetHashFromAssemblyFile(This,pszFilePath,piHashAlg,pbHash,cchHash,pchHash) )
#define ICLRStrongName_GetHashFromAssemblyFileW(This,pwzFilePath,piHashAlg,pbHash,cchHash,pchHash) ( (This)->lpVtbl -> GetHashFromAssemblyFileW(This,pwzFilePath,piHashAlg,pbHash,cchHash,pchHash) )
#define ICLRStrongName_GetHashFromBlob(This,pbBlob,cchBlob,piHashAlg,pbHash,cchHash,pchHash) ( (This)->lpVtbl -> GetHashFromBlob(This,pbBlob,cchBlob,piHashAlg,pbHash,cchHash,pchHash) )
#define ICLRStrongName_GetHashFromFile(This,pszFilePath,piHashAlg,pbHash,cchHash,pchHash) ( (This)->lpVtbl -> GetHashFromFile(This,pszFilePath,piHashAlg,pbHash,cchHash,pchHash) )
#define ICLRStrongName_GetHashFromFileW(This,pwzFilePath,piHashAlg,pbHash,cchHash,pchHash) ( (This)->lpVtbl -> GetHashFromFileW(This,pwzFilePath,piHashAlg,pbHash,cchHash,pchHash) )
#define ICLRStrongName_GetHashFromHandle(This,hFile,piHashAlg,pbHash,cchHash,pchHash) ( (This)->lpVtbl -> GetHashFromHandle(This,hFile,piHashAlg,pbHash,cchHash,pchHash) )
#define ICLRStrongName_StrongNameCompareAssemblies(This,pwzAssembly1,pwzAssembly2,pdwResult) ( (This)->lpVtbl -> StrongNameCompareAssemblies(This,pwzAssembly1,pwzAssembly2,pdwResult) )
#define ICLRStrongName_StrongNameFreeBuffer(This,pbMemory) ( (This)->lpVtbl -> StrongNameFreeBuffer(This,pbMemory) )
#define ICLRStrongName_StrongNameGetBlob(This,pwzFilePath,pbBlob,pcbBlob) ( (This)->lpVtbl -> StrongNameGetBlob(This,pwzFilePath,pbBlob,pcbBlob) )
#define ICLRStrongName_StrongNameGetBlobFromImage(This,pbBase,dwLength,pbBlob,pcbBlob) ( (This)->lpVtbl -> StrongNameGetBlobFromImage(This,pbBase,dwLength,pbBlob,pcbBlob) )
#define ICLRStrongName_StrongNameGetPublicKey(This,pwzKeyContainer,pbKeyBlob,cbKeyBlob,ppbPublicKeyBlob,pcbPublicKeyBlob) ( (This)->lpVtbl -> StrongNameGetPublicKey(This,pwzKeyContainer,pbKeyBlob,cbKeyBlob,ppbPublicKeyBlob,pcbPublicKeyBlob) )
#define ICLRStrongName_StrongNameHashSize(This,ulHashAlg,pcbSize) ( (This)->lpVtbl -> StrongNameHashSize(This,ulHashAlg,pcbSize) )
#define ICLRStrongName_StrongNameKeyDelete(This,pwzKeyContainer) ( (This)->lpVtbl -> StrongNameKeyDelete(This,pwzKeyContainer) )
#define ICLRStrongName_StrongNameKeyGen(This,pwzKeyContainer,dwFlags,ppbKeyBlob,pcbKeyBlob) ( (This)->lpVtbl -> StrongNameKeyGen(This,pwzKeyContainer,dwFlags,ppbKeyBlob,pcbKeyBlob) )
#define ICLRStrongName_StrongNameKeyGenEx(This,pwzKeyContainer,dwFlags,dwKeySize,ppbKeyBlob,pcbKeyBlob) ( (This)->lpVtbl -> StrongNameKeyGenEx(This,pwzKeyContainer,dwFlags,dwKeySize,ppbKeyBlob,pcbKeyBlob) )
#define ICLRStrongName_StrongNameKeyInstall(This,pwzKeyContainer,pbKeyBlob,cbKeyBlob) ( (This)->lpVtbl -> StrongNameKeyInstall(This,pwzKeyContainer,pbKeyBlob,cbKeyBlob) )
#define ICLRStrongName_StrongNameSignatureGeneration(This,pwzFilePath,pwzKeyContainer,pbKeyBlob,cbKeyBlob,ppbSignatureBlob,pcbSignatureBlob) ( (This)->lpVtbl -> StrongNameSignatureGeneration(This,pwzFilePath,pwzKeyContainer,pbKeyBlob,cbKeyBlob,ppbSignatureBlob,pcbSignatureBlob) )
#define ICLRStrongName_StrongNameSignatureGenerationEx(This,wszFilePath,wszKeyContainer,pbKeyBlob,cbKeyBlob,ppbSignatureBlob,pcbSignatureBlob,dwFlags) ( (This)->lpVtbl -> StrongNameSignatureGenerationEx(This,wszFilePath,wszKeyContainer,pbKeyBlob,cbKeyBlob,ppbSignatureBlob,pcbSignatureBlob,dwFlags) )
#define ICLRStrongName_StrongNameSignatureSize(This,pbPublicKeyBlob,cbPublicKeyBlob,pcbSize) ( (This)->lpVtbl -> StrongNameSignatureSize(This,pbPublicKeyBlob,cbPublicKeyBlob,pcbSize) )
#define ICLRStrongName_StrongNameSignatureVerification(This,pwzFilePath,dwInFlags,pdwOutFlags) ( (This)->lpVtbl -> StrongNameSignatureVerification(This,pwzFilePath,dwInFlags,pdwOutFlags) )
#define ICLRStrongName_StrongNameSignatureVerificationEx(This,pwzFilePath,fForceVerification,pfWasVerified) ( (This)->lpVtbl -> StrongNameSignatureVerificationEx(This,pwzFilePath,fForceVerification,pfWasVerified) )
#define ICLRStrongName_StrongNameSignatureVerificationFromImage(This,pbBase,dwLength,dwInFlags,pdwOutFlags) ( (This)->lpVtbl -> StrongNameSignatureVerificationFromImage(This,pbBase,dwLength,dwInFlags,pdwOutFlags) )
#define ICLRStrongName_StrongNameTokenFromAssembly(This,pwzFilePath,ppbStrongNameToken,pcbStrongNameToken) ( (This)->lpVtbl -> StrongNameTokenFromAssembly(This,pwzFilePath,ppbStrongNameToken,pcbStrongNameToken) )
#define ICLRStrongName_StrongNameTokenFromAssemblyEx(This,pwzFilePath,ppbStrongNameToken,pcbStrongNameToken,ppbPublicKeyBlob,pcbPublicKeyBlob) ( (This)->lpVtbl -> StrongNameTokenFromAssemblyEx(This,pwzFilePath,ppbStrongNameToken,pcbStrongNameToken,ppbPublicKeyBlob,pcbPublicKeyBlob) )
#define ICLRStrongName_StrongNameTokenFromPublicKey(This,pbPublicKeyBlob,cbPublicKeyBlob,ppbStrongNameToken,pcbStrongNameToken) ( (This)->lpVtbl -> StrongNameTokenFromPublicKey(This,pbPublicKeyBlob,cbPublicKeyBlob,ppbStrongNameToken,pcbStrongNameToken) )
#endif
#endif
#ifndef __CLRMetaHost_LIBRARY_DEFINED__
#define __CLRMetaHost_LIBRARY_DEFINED__
extern const IID LIBID_CLRMetaHost;
#endif
#endif
