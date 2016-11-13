/*+@@file@@----------------------------------------------------------------*//*!
 \file		corprof.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 11:43:46 2016
 \date		Modified on Mon Jul  4 11:43:46 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __corprof_h__
#define __corprof_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICorProfilerCallback_FWD_DEFINED__
#define __ICorProfilerCallback_FWD_DEFINED__
typedef interface ICorProfilerCallback ICorProfilerCallback;
#endif
#ifndef __ICorProfilerCallback2_FWD_DEFINED__
#define __ICorProfilerCallback2_FWD_DEFINED__
typedef interface ICorProfilerCallback2 ICorProfilerCallback2;
#endif
#ifndef __ICorProfilerCallback3_FWD_DEFINED__
#define __ICorProfilerCallback3_FWD_DEFINED__
typedef interface ICorProfilerCallback3 ICorProfilerCallback3;
#endif
#ifndef __ICorProfilerInfo_FWD_DEFINED__
#define __ICorProfilerInfo_FWD_DEFINED__
typedef interface ICorProfilerInfo ICorProfilerInfo;
#endif
#ifndef __ICorProfilerInfo2_FWD_DEFINED__
#define __ICorProfilerInfo2_FWD_DEFINED__
typedef interface ICorProfilerInfo2 ICorProfilerInfo2;
#endif
#ifndef __ICorProfilerInfo3_FWD_DEFINED__
#define __ICorProfilerInfo3_FWD_DEFINED__
typedef interface ICorProfilerInfo3 ICorProfilerInfo3;
#endif
#ifndef __ICorProfilerObjectEnum_FWD_DEFINED__
#define __ICorProfilerObjectEnum_FWD_DEFINED__
typedef interface ICorProfilerObjectEnum ICorProfilerObjectEnum;
#endif
#ifndef __ICorProfilerFunctionEnum_FWD_DEFINED__
#define __ICorProfilerFunctionEnum_FWD_DEFINED__
typedef interface ICorProfilerFunctionEnum ICorProfilerFunctionEnum;
#endif
#ifndef __ICorProfilerModuleEnum_FWD_DEFINED__
#define __ICorProfilerModuleEnum_FWD_DEFINED__
typedef interface ICorProfilerModuleEnum ICorProfilerModuleEnum;
#endif
#ifndef __IMethodMalloc_FWD_DEFINED__
#define __IMethodMalloc_FWD_DEFINED__
typedef interface IMethodMalloc IMethodMalloc;
#endif
#include <unknwn.h>
#define CorDB_CONTROL_Profiling         "Cor_Enable_Profiling"
#define CorDB_CONTROL_ProfilingL       L"Cor_Enable_Profiling"
#if 0
typedef LONG32 mdToken;
typedef mdToken mdModule;
typedef mdToken mdTypeDef;
typedef mdToken mdMethodDef;
typedef mdToken mdFieldDef;
typedef ULONG CorElementType;
#endif
typedef const BYTE *LPCBYTE;
typedef BYTE *LPBYTE;
#ifndef _COR_IL_MAP
#define _COR_IL_MAP
typedef struct _COR_IL_MAP
{
	ULONG32 oldOffset;
	ULONG32 newOffset;
	BOOL fAccurate;
} COR_IL_MAP;
#endif
#ifndef _COR_DEBUG_IL_TO_NATIVE_MAP_
#define _COR_DEBUG_IL_TO_NATIVE_MAP_
typedef enum CorDebugIlToNativeMappingTypes
{
	NO_MAPPING = -1,
	PROLOG = -2,
	EPILOG = -3
} CorDebugIlToNativeMappingTypes;
typedef struct COR_DEBUG_IL_TO_NATIVE_MAP
{
	ULONG32 ilOffset;
	ULONG32 nativeStartOffset;
	ULONG32 nativeEndOffset;
} COR_DEBUG_IL_TO_NATIVE_MAP;
#endif
#ifndef _COR_FIELD_OFFSET_
#define _COR_FIELD_OFFSET_
typedef struct _COR_FIELD_OFFSET
{
	mdFieldDef ridOfField;
	ULONG ulOffset;
} COR_FIELD_OFFSET;
#endif
typedef UINT_PTR ProcessID;
typedef UINT_PTR AssemblyID;
typedef UINT_PTR AppDomainID;
typedef UINT_PTR ModuleID;
typedef UINT_PTR ClassID;
typedef UINT_PTR ThreadID;
typedef UINT_PTR ContextID;
typedef UINT_PTR FunctionID;
typedef UINT_PTR ObjectID;
typedef UINT_PTR GCHandleID;
typedef UINT_PTR COR_PRF_ELT_INFO;
typedef union __MIDL___MIDL_itf_corprof_0000_0000_0001
{
	FunctionID functionID;
	UINT_PTR clientID;
} FunctionIDOrClientID;
typedef UINT_PTR __stdcall __stdcall FunctionIDMapper(FunctionID funcId, BOOL *pbHookFunction);
typedef UINT_PTR __stdcall __stdcall FunctionIDMapper2(FunctionID funcId, void *clientData, BOOL *pbHookFunction);
typedef enum _COR_PRF_SNAPSHOT_INFO
{
	COR_PRF_SNAPSHOT_DEFAULT = 0,
	COR_PRF_SNAPSHOT_REGISTER_CONTEXT = 0x1,
	COR_PRF_SNAPSHOT_X86_OPTIMIZED = 0x2
} COR_PRF_SNAPSHOT_INFO;
typedef UINT_PTR COR_PRF_FRAME_INFO;
typedef struct _COR_PRF_FUNCTION_ARGUMENT_RANGE
{
	UINT_PTR startAddress;
	ULONG length;
} COR_PRF_FUNCTION_ARGUMENT_RANGE;
typedef struct _COR_PRF_FUNCTION_ARGUMENT_INFO
{
	ULONG numRanges;
	ULONG totalArgumentSize;
	COR_PRF_FUNCTION_ARGUMENT_RANGE ranges[1];
} COR_PRF_FUNCTION_ARGUMENT_INFO;
typedef struct _COR_PRF_CODE_INFO
{
	UINT_PTR startAddress;
	SIZE_T size;
} COR_PRF_CODE_INFO;
typedef enum __MIDL___MIDL_itf_corprof_0000_0000_0002
{
	COR_PRF_FIELD_NOT_A_STATIC = 0,
	COR_PRF_FIELD_APP_DOMAIN_STATIC = 0x1,
	COR_PRF_FIELD_THREAD_STATIC = 0x2,
	COR_PRF_FIELD_CONTEXT_STATIC = 0x4,
	COR_PRF_FIELD_RVA_STATIC = 0x8
} COR_PRF_STATIC_TYPE;
typedef struct _COR_PRF_FUNCTION
{
	FunctionID functionId;
	UINT_PTR reserved;
} COR_PRF_FUNCTION;
typedef void FunctionEnter(FunctionID funcID);
typedef void FunctionLeave(FunctionID funcID);
typedef void FunctionTailcall(FunctionID funcID);
typedef void FunctionEnter2(FunctionID funcId, UINT_PTR clientData, COR_PRF_FRAME_INFO func, COR_PRF_FUNCTION_ARGUMENT_INFO *argumentInfo);
typedef void FunctionLeave2(FunctionID funcId, UINT_PTR clientData, COR_PRF_FRAME_INFO func, COR_PRF_FUNCTION_ARGUMENT_RANGE *retvalRange);
typedef void FunctionTailcall2(FunctionID funcId, UINT_PTR clientData, COR_PRF_FRAME_INFO func);
typedef void FunctionEnter3(FunctionIDOrClientID functionIDOrClientID);
typedef void FunctionLeave3(FunctionIDOrClientID functionIDOrClientID);
typedef void FunctionTailcall3(FunctionIDOrClientID functionIDOrClientID);
typedef void FunctionEnter3WithInfo(FunctionIDOrClientID functionIDOrClientID, COR_PRF_ELT_INFO eltInfo);
typedef void FunctionLeave3WithInfo(FunctionIDOrClientID functionIDOrClientID, COR_PRF_ELT_INFO eltInfo);
typedef void FunctionTailcall3WithInfo(FunctionIDOrClientID functionIDOrClientID, COR_PRF_ELT_INFO eltInfo);
typedef HRESULT __stdcall __stdcall StackSnapshotCallback(FunctionID funcId, UINT_PTR ip, COR_PRF_FRAME_INFO frameInfo, ULONG32 contextSize, BYTE context[], void *clientData);
typedef enum __MIDL___MIDL_itf_corprof_0000_0000_0003
{
	COR_PRF_MONITOR_NONE = 0,
	COR_PRF_MONITOR_FUNCTION_UNLOADS = 0x1,
	COR_PRF_MONITOR_CLASS_LOADS = 0x2,
	COR_PRF_MONITOR_MODULE_LOADS = 0x4,
	COR_PRF_MONITOR_ASSEMBLY_LOADS = 0x8,
	COR_PRF_MONITOR_APPDOMAIN_LOADS = 0x10,
	COR_PRF_MONITOR_JIT_COMPILATION = 0x20,
	COR_PRF_MONITOR_EXCEPTIONS = 0x40,
	COR_PRF_MONITOR_GC = 0x80,
	COR_PRF_MONITOR_OBJECT_ALLOCATED = 0x100,
	COR_PRF_MONITOR_THREADS = 0x200,
	COR_PRF_MONITOR_REMOTING = 0x400,
	COR_PRF_MONITOR_CODE_TRANSITIONS = 0x800,
	COR_PRF_MONITOR_ENTERLEAVE = 0x1000,
	COR_PRF_MONITOR_CCW = 0x2000,
	COR_PRF_MONITOR_REMOTING_COOKIE = (0x4000 | COR_PRF_MONITOR_REMOTING),
	COR_PRF_MONITOR_REMOTING_ASYNC = (0x8000 | COR_PRF_MONITOR_REMOTING),
	COR_PRF_MONITOR_SUSPENDS = 0x10000,
	COR_PRF_MONITOR_CACHE_SEARCHES = 0x20000,
	COR_PRF_MONITOR_CLR_EXCEPTIONS = 0x1000000,
	COR_PRF_MONITOR_ALL = 0x107ffff,
	COR_PRF_ENABLE_REJIT = 0x40000,
	COR_PRF_ENABLE_INPROC_DEBUGGING = 0x80000,
	COR_PRF_ENABLE_JIT_MAPS = 0x100000,
	COR_PRF_DISABLE_INLINING = 0x200000,
	COR_PRF_DISABLE_OPTIMIZATIONS = 0x400000,
	COR_PRF_ENABLE_OBJECT_ALLOCATED = 0x800000,
	COR_PRF_ENABLE_FUNCTION_ARGS = 0x2000000,
	COR_PRF_ENABLE_FUNCTION_RETVAL = 0x4000000,
	COR_PRF_ENABLE_FRAME_INFO = 0x8000000,
	COR_PRF_ENABLE_STACK_SNAPSHOT = 0x10000000,
	COR_PRF_USE_PROFILE_IMAGES = 0x20000000,
	COR_PRF_DISABLE_TRANSPARENCY_CHECKS_UNDER_FULL_TRUST = 0x40000000,
	COR_PRF_ALL = 0x7fffffff,
	COR_PRF_REQUIRE_PROFILE_IMAGE = ((COR_PRF_USE_PROFILE_IMAGES | COR_PRF_MONITOR_CODE_TRANSITIONS) | COR_PRF_MONITOR_ENTERLEAVE),
	COR_PRF_ALLOWABLE_AFTER_ATTACH = ((((((((COR_PRF_MONITOR_THREADS | COR_PRF_MONITOR_MODULE_LOADS) | COR_PRF_MONITOR_ASSEMBLY_LOADS) | COR_PRF_MONITOR_APPDOMAIN_LOADS) | COR_PRF_ENABLE_STACK_SNAPSHOT) | COR_PRF_MONITOR_GC) | COR_PRF_MONITOR_SUSPENDS) | COR_PRF_MONITOR_CLASS_LOADS) | COR_PRF_MONITOR_JIT_COMPILATION),
	COR_PRF_MONITOR_IMMUTABLE = ((((((((((((((COR_PRF_MONITOR_CODE_TRANSITIONS | COR_PRF_MONITOR_REMOTING) | COR_PRF_MONITOR_REMOTING_COOKIE) | COR_PRF_MONITOR_REMOTING_ASYNC) | COR_PRF_ENABLE_REJIT) | COR_PRF_ENABLE_INPROC_DEBUGGING) | COR_PRF_ENABLE_JIT_MAPS) | COR_PRF_DISABLE_OPTIMIZATIONS) | COR_PRF_DISABLE_INLINING) | COR_PRF_ENABLE_OBJECT_ALLOCATED) | COR_PRF_ENABLE_FUNCTION_ARGS) | COR_PRF_ENABLE_FUNCTION_RETVAL) | COR_PRF_ENABLE_FRAME_INFO) | COR_PRF_USE_PROFILE_IMAGES) | COR_PRF_DISABLE_TRANSPARENCY_CHECKS_UNDER_FULL_TRUST)
} COR_PRF_MONITOR;
typedef enum __MIDL___MIDL_itf_corprof_0000_0000_0004
{
	PROFILER_PARENT_UNKNOWN = 0xfffffffd,
	PROFILER_GLOBAL_CLASS = 0xfffffffe,
	PROFILER_GLOBAL_MODULE = 0xffffffff
} COR_PRF_MISC;
typedef enum __MIDL___MIDL_itf_corprof_0000_0000_0005
{
	COR_PRF_CACHED_FUNCTION_FOUND = 0,
	COR_PRF_CACHED_FUNCTION_NOT_FOUND = (COR_PRF_CACHED_FUNCTION_FOUND + 1)
} COR_PRF_JIT_CACHE;
typedef enum __MIDL___MIDL_itf_corprof_0000_0000_0006
{
	COR_PRF_TRANSITION_CALL = 0,
	COR_PRF_TRANSITION_RETURN = (COR_PRF_TRANSITION_CALL + 1)
} COR_PRF_TRANSITION_REASON;
typedef enum __MIDL___MIDL_itf_corprof_0000_0000_0007
{
	COR_PRF_SUSPEND_OTHER = 0,
	COR_PRF_SUSPEND_FOR_GC = 1,
	COR_PRF_SUSPEND_FOR_APPDOMAIN_SHUTDOWN = 2,
	COR_PRF_SUSPEND_FOR_CODE_PITCHING = 3,
	COR_PRF_SUSPEND_FOR_SHUTDOWN = 4,
	COR_PRF_SUSPEND_FOR_INPROC_DEBUGGER = 6,
	COR_PRF_SUSPEND_FOR_GC_PREP = 7
} COR_PRF_SUSPEND_REASON;
typedef enum __MIDL___MIDL_itf_corprof_0000_0000_0008
{
	COR_PRF_DESKTOP_CLR = 0x1,
	COR_PRF_CORE_CLR = 0x2
} COR_PRF_RUNTIME_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_corprof_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corprof_0000_0000_v0_0_s_ifspec;
#ifndef __ICorProfilerCallback_INTERFACE_DEFINED__
#define __ICorProfilerCallback_INTERFACE_DEFINED__
extern const IID IID_ICorProfilerCallback;
typedef struct ICorProfilerCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICorProfilerCallback *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICorProfilerCallback *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICorProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *Initialize) (ICorProfilerCallback *This, IUnknown *pICorProfilerInfoUnk);
	HRESULT(STDMETHODCALLTYPE *Shutdown) (ICorProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *AppDomainCreationStarted) (ICorProfilerCallback *This, AppDomainID appDomainId);
	HRESULT(STDMETHODCALLTYPE *AppDomainCreationFinished) (ICorProfilerCallback *This, AppDomainID appDomainId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *AppDomainShutdownStarted) (ICorProfilerCallback *This, AppDomainID appDomainId);
	HRESULT(STDMETHODCALLTYPE *AppDomainShutdownFinished) (ICorProfilerCallback *This, AppDomainID appDomainId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *AssemblyLoadStarted) (ICorProfilerCallback *This, AssemblyID assemblyId);
	HRESULT(STDMETHODCALLTYPE *AssemblyLoadFinished) (ICorProfilerCallback *This, AssemblyID assemblyId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *AssemblyUnloadStarted) (ICorProfilerCallback *This, AssemblyID assemblyId);
	HRESULT(STDMETHODCALLTYPE *AssemblyUnloadFinished) (ICorProfilerCallback *This, AssemblyID assemblyId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *ModuleLoadStarted) (ICorProfilerCallback *This, ModuleID moduleId);
	HRESULT(STDMETHODCALLTYPE *ModuleLoadFinished) (ICorProfilerCallback *This, ModuleID moduleId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *ModuleUnloadStarted) (ICorProfilerCallback *This, ModuleID moduleId);
	HRESULT(STDMETHODCALLTYPE *ModuleUnloadFinished) (ICorProfilerCallback *This, ModuleID moduleId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *ModuleAttachedToAssembly) (ICorProfilerCallback *This, ModuleID moduleId, AssemblyID AssemblyId);
	HRESULT(STDMETHODCALLTYPE *ClassLoadStarted) (ICorProfilerCallback *This, ClassID classId);
	HRESULT(STDMETHODCALLTYPE *ClassLoadFinished) (ICorProfilerCallback *This, ClassID classId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *ClassUnloadStarted) (ICorProfilerCallback *This, ClassID classId);
	HRESULT(STDMETHODCALLTYPE *ClassUnloadFinished) (ICorProfilerCallback *This, ClassID classId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *FunctionUnloadStarted) (ICorProfilerCallback *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *JITCompilationStarted) (ICorProfilerCallback *This, FunctionID functionId, BOOL fIsSafeToBlock);
	HRESULT(STDMETHODCALLTYPE *JITCompilationFinished) (ICorProfilerCallback *This, FunctionID functionId, HRESULT hrStatus, BOOL fIsSafeToBlock);
	HRESULT(STDMETHODCALLTYPE *JITCachedFunctionSearchStarted) (ICorProfilerCallback *This, FunctionID functionId, BOOL *pbUseCachedFunction);
	HRESULT(STDMETHODCALLTYPE *JITCachedFunctionSearchFinished) (ICorProfilerCallback *This, FunctionID functionId, COR_PRF_JIT_CACHE result);
	HRESULT(STDMETHODCALLTYPE *JITFunctionPitched) (ICorProfilerCallback *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *JITInlining) (ICorProfilerCallback *This, FunctionID callerId, FunctionID calleeId, BOOL *pfShouldInline);
	HRESULT(STDMETHODCALLTYPE *ThreadCreated) (ICorProfilerCallback *This, ThreadID threadId);
	HRESULT(STDMETHODCALLTYPE *ThreadDestroyed) (ICorProfilerCallback *This, ThreadID threadId);
	HRESULT(STDMETHODCALLTYPE *ThreadAssignedToOSThread) (ICorProfilerCallback *This, ThreadID managedThreadId, DWORD osThreadId);
	HRESULT(STDMETHODCALLTYPE *RemotingClientInvocationStarted) (ICorProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *RemotingClientSendingMessage) (ICorProfilerCallback *This, GUID *pCookie, BOOL fIsAsync);
	HRESULT(STDMETHODCALLTYPE *RemotingClientReceivingReply) (ICorProfilerCallback *This, GUID *pCookie, BOOL fIsAsync);
	HRESULT(STDMETHODCALLTYPE *RemotingClientInvocationFinished) (ICorProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *RemotingServerReceivingMessage) (ICorProfilerCallback *This, GUID *pCookie, BOOL fIsAsync);
	HRESULT(STDMETHODCALLTYPE *RemotingServerInvocationStarted) (ICorProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *RemotingServerInvocationReturned) (ICorProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *RemotingServerSendingReply) (ICorProfilerCallback *This, GUID *pCookie, BOOL fIsAsync);
	HRESULT(STDMETHODCALLTYPE *UnmanagedToManagedTransition) (ICorProfilerCallback *This, FunctionID functionId, COR_PRF_TRANSITION_REASON reason);
	HRESULT(STDMETHODCALLTYPE *ManagedToUnmanagedTransition) (ICorProfilerCallback *This, FunctionID functionId, COR_PRF_TRANSITION_REASON reason);
	HRESULT(STDMETHODCALLTYPE *RuntimeSuspendStarted) (ICorProfilerCallback *This, COR_PRF_SUSPEND_REASON suspendReason);
	HRESULT(STDMETHODCALLTYPE *RuntimeSuspendFinished) (ICorProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *RuntimeSuspendAborted) (ICorProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *RuntimeResumeStarted) (ICorProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *RuntimeResumeFinished) (ICorProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *RuntimeThreadSuspended) (ICorProfilerCallback *This, ThreadID threadId);
	HRESULT(STDMETHODCALLTYPE *RuntimeThreadResumed) (ICorProfilerCallback *This, ThreadID threadId);
	HRESULT(STDMETHODCALLTYPE *MovedReferences) (ICorProfilerCallback *This, ULONG cMovedObjectIDRanges, ObjectID oldObjectIDRangeStart[], ObjectID newObjectIDRangeStart[], ULONG cObjectIDRangeLength[]);
	HRESULT(STDMETHODCALLTYPE *ObjectAllocated) (ICorProfilerCallback *This, ObjectID objectId, ClassID classId);
	HRESULT(STDMETHODCALLTYPE *ObjectsAllocatedByClass) (ICorProfilerCallback *This, ULONG cClassCount, ClassID classIds[], ULONG cObjects[]);
	HRESULT(STDMETHODCALLTYPE *ObjectReferences) (ICorProfilerCallback *This, ObjectID objectId, ClassID classId, ULONG cObjectRefs, ObjectID objectRefIds[]);
	HRESULT(STDMETHODCALLTYPE *RootReferences) (ICorProfilerCallback *This, ULONG cRootRefs, ObjectID rootRefIds[]);
	HRESULT(STDMETHODCALLTYPE *ExceptionThrown) (ICorProfilerCallback *This, ObjectID thrownObjectId);
	HRESULT(STDMETHODCALLTYPE *ExceptionSearchFunctionEnter) (ICorProfilerCallback *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ExceptionSearchFunctionLeave) (ICorProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *ExceptionSearchFilterEnter) (ICorProfilerCallback *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ExceptionSearchFilterLeave) (ICorProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *ExceptionSearchCatcherFound) (ICorProfilerCallback *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ExceptionOSHandlerEnter) (ICorProfilerCallback *This, UINT_PTR __unused);
	HRESULT(STDMETHODCALLTYPE *ExceptionOSHandlerLeave) (ICorProfilerCallback *This, UINT_PTR __unused);
	HRESULT(STDMETHODCALLTYPE *ExceptionUnwindFunctionEnter) (ICorProfilerCallback *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ExceptionUnwindFunctionLeave) (ICorProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *ExceptionUnwindFinallyEnter) (ICorProfilerCallback *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ExceptionUnwindFinallyLeave) (ICorProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *ExceptionCatcherEnter) (ICorProfilerCallback *This, FunctionID functionId, ObjectID objectId);
	HRESULT(STDMETHODCALLTYPE *ExceptionCatcherLeave) (ICorProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *COMClassicVTableCreated) (ICorProfilerCallback *This, ClassID wrappedClassId, REFGUID implementedIID, void *pVTable, ULONG cSlots);
	HRESULT(STDMETHODCALLTYPE *COMClassicVTableDestroyed) (ICorProfilerCallback *This, ClassID wrappedClassId, REFGUID implementedIID, void *pVTable);
	HRESULT(STDMETHODCALLTYPE *ExceptionCLRCatcherFound) (ICorProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *ExceptionCLRCatcherExecute) (ICorProfilerCallback *This);
	END_INTERFACE
}  ICorProfilerCallbackVtbl;
interface ICorProfilerCallback
{
	CONST_VTBL struct ICorProfilerCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorProfilerCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorProfilerCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorProfilerCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorProfilerCallback_Initialize(This,pICorProfilerInfoUnk)( (This)->lpVtbl -> Initialize(This,pICorProfilerInfoUnk) )
#define ICorProfilerCallback_Shutdown(This)( (This)->lpVtbl -> Shutdown(This) )
#define ICorProfilerCallback_AppDomainCreationStarted(This,appDomainId)( (This)->lpVtbl -> AppDomainCreationStarted(This,appDomainId) )
#define ICorProfilerCallback_AppDomainCreationFinished(This,appDomainId,hrStatus)( (This)->lpVtbl -> AppDomainCreationFinished(This,appDomainId,hrStatus) )
#define ICorProfilerCallback_AppDomainShutdownStarted(This,appDomainId)( (This)->lpVtbl -> AppDomainShutdownStarted(This,appDomainId) )
#define ICorProfilerCallback_AppDomainShutdownFinished(This,appDomainId,hrStatus)( (This)->lpVtbl -> AppDomainShutdownFinished(This,appDomainId,hrStatus) )
#define ICorProfilerCallback_AssemblyLoadStarted(This,assemblyId)( (This)->lpVtbl -> AssemblyLoadStarted(This,assemblyId) )
#define ICorProfilerCallback_AssemblyLoadFinished(This,assemblyId,hrStatus)( (This)->lpVtbl -> AssemblyLoadFinished(This,assemblyId,hrStatus) )
#define ICorProfilerCallback_AssemblyUnloadStarted(This,assemblyId)( (This)->lpVtbl -> AssemblyUnloadStarted(This,assemblyId) )
#define ICorProfilerCallback_AssemblyUnloadFinished(This,assemblyId,hrStatus)( (This)->lpVtbl -> AssemblyUnloadFinished(This,assemblyId,hrStatus) )
#define ICorProfilerCallback_ModuleLoadStarted(This,moduleId)( (This)->lpVtbl -> ModuleLoadStarted(This,moduleId) )
#define ICorProfilerCallback_ModuleLoadFinished(This,moduleId,hrStatus)( (This)->lpVtbl -> ModuleLoadFinished(This,moduleId,hrStatus) )
#define ICorProfilerCallback_ModuleUnloadStarted(This,moduleId)( (This)->lpVtbl -> ModuleUnloadStarted(This,moduleId) )
#define ICorProfilerCallback_ModuleUnloadFinished(This,moduleId,hrStatus)( (This)->lpVtbl -> ModuleUnloadFinished(This,moduleId,hrStatus) )
#define ICorProfilerCallback_ModuleAttachedToAssembly(This,moduleId,AssemblyId)( (This)->lpVtbl -> ModuleAttachedToAssembly(This,moduleId,AssemblyId) )
#define ICorProfilerCallback_ClassLoadStarted(This,classId)( (This)->lpVtbl -> ClassLoadStarted(This,classId) )
#define ICorProfilerCallback_ClassLoadFinished(This,classId,hrStatus)( (This)->lpVtbl -> ClassLoadFinished(This,classId,hrStatus) )
#define ICorProfilerCallback_ClassUnloadStarted(This,classId)( (This)->lpVtbl -> ClassUnloadStarted(This,classId) )
#define ICorProfilerCallback_ClassUnloadFinished(This,classId,hrStatus)( (This)->lpVtbl -> ClassUnloadFinished(This,classId,hrStatus) )
#define ICorProfilerCallback_FunctionUnloadStarted(This,functionId)( (This)->lpVtbl -> FunctionUnloadStarted(This,functionId) )
#define ICorProfilerCallback_JITCompilationStarted(This,functionId,fIsSafeToBlock)( (This)->lpVtbl -> JITCompilationStarted(This,functionId,fIsSafeToBlock) )
#define ICorProfilerCallback_JITCompilationFinished(This,functionId,hrStatus,fIsSafeToBlock)( (This)->lpVtbl -> JITCompilationFinished(This,functionId,hrStatus,fIsSafeToBlock) )
#define ICorProfilerCallback_JITCachedFunctionSearchStarted(This,functionId,pbUseCachedFunction)( (This)->lpVtbl -> JITCachedFunctionSearchStarted(This,functionId,pbUseCachedFunction) )
#define ICorProfilerCallback_JITCachedFunctionSearchFinished(This,functionId,result)( (This)->lpVtbl -> JITCachedFunctionSearchFinished(This,functionId,result) )
#define ICorProfilerCallback_JITFunctionPitched(This,functionId)( (This)->lpVtbl -> JITFunctionPitched(This,functionId) )
#define ICorProfilerCallback_JITInlining(This,callerId,calleeId,pfShouldInline)( (This)->lpVtbl -> JITInlining(This,callerId,calleeId,pfShouldInline) )
#define ICorProfilerCallback_ThreadCreated(This,threadId)( (This)->lpVtbl -> ThreadCreated(This,threadId) )
#define ICorProfilerCallback_ThreadDestroyed(This,threadId)( (This)->lpVtbl -> ThreadDestroyed(This,threadId) )
#define ICorProfilerCallback_ThreadAssignedToOSThread(This,managedThreadId,osThreadId)( (This)->lpVtbl -> ThreadAssignedToOSThread(This,managedThreadId,osThreadId) )
#define ICorProfilerCallback_RemotingClientInvocationStarted(This)( (This)->lpVtbl -> RemotingClientInvocationStarted(This) )
#define ICorProfilerCallback_RemotingClientSendingMessage(This,pCookie,fIsAsync)( (This)->lpVtbl -> RemotingClientSendingMessage(This,pCookie,fIsAsync) )
#define ICorProfilerCallback_RemotingClientReceivingReply(This,pCookie,fIsAsync)( (This)->lpVtbl -> RemotingClientReceivingReply(This,pCookie,fIsAsync) )
#define ICorProfilerCallback_RemotingClientInvocationFinished(This)( (This)->lpVtbl -> RemotingClientInvocationFinished(This) )
#define ICorProfilerCallback_RemotingServerReceivingMessage(This,pCookie,fIsAsync)( (This)->lpVtbl -> RemotingServerReceivingMessage(This,pCookie,fIsAsync) )
#define ICorProfilerCallback_RemotingServerInvocationStarted(This)( (This)->lpVtbl -> RemotingServerInvocationStarted(This) )
#define ICorProfilerCallback_RemotingServerInvocationReturned(This)( (This)->lpVtbl -> RemotingServerInvocationReturned(This) )
#define ICorProfilerCallback_RemotingServerSendingReply(This,pCookie,fIsAsync)( (This)->lpVtbl -> RemotingServerSendingReply(This,pCookie,fIsAsync) )
#define ICorProfilerCallback_UnmanagedToManagedTransition(This,functionId,reason)( (This)->lpVtbl -> UnmanagedToManagedTransition(This,functionId,reason) )
#define ICorProfilerCallback_ManagedToUnmanagedTransition(This,functionId,reason)( (This)->lpVtbl -> ManagedToUnmanagedTransition(This,functionId,reason) )
#define ICorProfilerCallback_RuntimeSuspendStarted(This,suspendReason)( (This)->lpVtbl -> RuntimeSuspendStarted(This,suspendReason) )
#define ICorProfilerCallback_RuntimeSuspendFinished(This)( (This)->lpVtbl -> RuntimeSuspendFinished(This) )
#define ICorProfilerCallback_RuntimeSuspendAborted(This)( (This)->lpVtbl -> RuntimeSuspendAborted(This) )
#define ICorProfilerCallback_RuntimeResumeStarted(This)( (This)->lpVtbl -> RuntimeResumeStarted(This) )
#define ICorProfilerCallback_RuntimeResumeFinished(This)( (This)->lpVtbl -> RuntimeResumeFinished(This) )
#define ICorProfilerCallback_RuntimeThreadSuspended(This,threadId)( (This)->lpVtbl -> RuntimeThreadSuspended(This,threadId) )
#define ICorProfilerCallback_RuntimeThreadResumed(This,threadId)( (This)->lpVtbl -> RuntimeThreadResumed(This,threadId) )
#define ICorProfilerCallback_MovedReferences(This,cMovedObjectIDRanges,oldObjectIDRangeStart,newObjectIDRangeStart,cObjectIDRangeLength)( (This)->lpVtbl -> MovedReferences(This,cMovedObjectIDRanges,oldObjectIDRangeStart,newObjectIDRangeStart,cObjectIDRangeLength) )
#define ICorProfilerCallback_ObjectAllocated(This,objectId,classId)( (This)->lpVtbl -> ObjectAllocated(This,objectId,classId) )
#define ICorProfilerCallback_ObjectsAllocatedByClass(This,cClassCount,classIds,cObjects)( (This)->lpVtbl -> ObjectsAllocatedByClass(This,cClassCount,classIds,cObjects) )
#define ICorProfilerCallback_ObjectReferences(This,objectId,classId,cObjectRefs,objectRefIds)( (This)->lpVtbl -> ObjectReferences(This,objectId,classId,cObjectRefs,objectRefIds) )
#define ICorProfilerCallback_RootReferences(This,cRootRefs,rootRefIds)( (This)->lpVtbl -> RootReferences(This,cRootRefs,rootRefIds) )
#define ICorProfilerCallback_ExceptionThrown(This,thrownObjectId)( (This)->lpVtbl -> ExceptionThrown(This,thrownObjectId) )
#define ICorProfilerCallback_ExceptionSearchFunctionEnter(This,functionId)( (This)->lpVtbl -> ExceptionSearchFunctionEnter(This,functionId) )
#define ICorProfilerCallback_ExceptionSearchFunctionLeave(This)( (This)->lpVtbl -> ExceptionSearchFunctionLeave(This) )
#define ICorProfilerCallback_ExceptionSearchFilterEnter(This,functionId)( (This)->lpVtbl -> ExceptionSearchFilterEnter(This,functionId) )
#define ICorProfilerCallback_ExceptionSearchFilterLeave(This)( (This)->lpVtbl -> ExceptionSearchFilterLeave(This) )
#define ICorProfilerCallback_ExceptionSearchCatcherFound(This,functionId)( (This)->lpVtbl -> ExceptionSearchCatcherFound(This,functionId) )
#define ICorProfilerCallback_ExceptionOSHandlerEnter(This,__unused)( (This)->lpVtbl -> ExceptionOSHandlerEnter(This,__unused) )
#define ICorProfilerCallback_ExceptionOSHandlerLeave(This,__unused)( (This)->lpVtbl -> ExceptionOSHandlerLeave(This,__unused) )
#define ICorProfilerCallback_ExceptionUnwindFunctionEnter(This,functionId)( (This)->lpVtbl -> ExceptionUnwindFunctionEnter(This,functionId) )
#define ICorProfilerCallback_ExceptionUnwindFunctionLeave(This)( (This)->lpVtbl -> ExceptionUnwindFunctionLeave(This) )
#define ICorProfilerCallback_ExceptionUnwindFinallyEnter(This,functionId)( (This)->lpVtbl -> ExceptionUnwindFinallyEnter(This,functionId) )
#define ICorProfilerCallback_ExceptionUnwindFinallyLeave(This)( (This)->lpVtbl -> ExceptionUnwindFinallyLeave(This) )
#define ICorProfilerCallback_ExceptionCatcherEnter(This,functionId,objectId)( (This)->lpVtbl -> ExceptionCatcherEnter(This,functionId,objectId) )
#define ICorProfilerCallback_ExceptionCatcherLeave(This)( (This)->lpVtbl -> ExceptionCatcherLeave(This) )
#define ICorProfilerCallback_COMClassicVTableCreated(This,wrappedClassId,implementedIID,pVTable,cSlots)( (This)->lpVtbl -> COMClassicVTableCreated(This,wrappedClassId,implementedIID,pVTable,cSlots) )
#define ICorProfilerCallback_COMClassicVTableDestroyed(This,wrappedClassId,implementedIID,pVTable)( (This)->lpVtbl -> COMClassicVTableDestroyed(This,wrappedClassId,implementedIID,pVTable) )
#define ICorProfilerCallback_ExceptionCLRCatcherFound(This)( (This)->lpVtbl -> ExceptionCLRCatcherFound(This) )
#define ICorProfilerCallback_ExceptionCLRCatcherExecute(This)( (This)->lpVtbl -> ExceptionCLRCatcherExecute(This) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_corprof_0000_0001_0001
{
	COR_PRF_GC_ROOT_STACK = 1,
	COR_PRF_GC_ROOT_FINALIZER = 2,
	COR_PRF_GC_ROOT_HANDLE = 3,
	COR_PRF_GC_ROOT_OTHER = 0
} COR_PRF_GC_ROOT_KIND;
typedef enum __MIDL___MIDL_itf_corprof_0000_0001_0002
{
	COR_PRF_GC_ROOT_PINNING = 0x1,
	COR_PRF_GC_ROOT_WEAKREF = 0x2,
	COR_PRF_GC_ROOT_INTERIOR = 0x4,
	COR_PRF_GC_ROOT_REFCOUNTED = 0x8
} COR_PRF_GC_ROOT_FLAGS;
typedef enum __MIDL___MIDL_itf_corprof_0000_0001_0003
{
	COR_PRF_FINALIZER_CRITICAL = 0x1
} COR_PRF_FINALIZER_FLAGS;
typedef enum __MIDL___MIDL_itf_corprof_0000_0001_0004
{
	COR_PRF_GC_GEN_0 = 0,
	COR_PRF_GC_GEN_1 = 1,
	COR_PRF_GC_GEN_2 = 2,
	COR_PRF_GC_LARGE_OBJECT_HEAP = 3
} COR_PRF_GC_GENERATION;
typedef struct COR_PRF_GC_GENERATION_RANGE
{
	COR_PRF_GC_GENERATION generation;
	ObjectID rangeStart;
	UINT_PTR rangeLength;
	UINT_PTR rangeLengthReserved;
} COR_PRF_GC_GENERATION_RANGE;
typedef enum __MIDL___MIDL_itf_corprof_0000_0001_0005
{
	COR_PRF_CLAUSE_NONE = 0,
	COR_PRF_CLAUSE_FILTER = 1,
	COR_PRF_CLAUSE_CATCH = 2,
	COR_PRF_CLAUSE_FINALLY = 3
} COR_PRF_CLAUSE_TYPE;
typedef struct COR_PRF_EX_CLAUSE_INFO
{
	COR_PRF_CLAUSE_TYPE clauseType;
	UINT_PTR programCounter;
	UINT_PTR framePointer;
	UINT_PTR shadowStackPointer;
} COR_PRF_EX_CLAUSE_INFO;
typedef enum __MIDL___MIDL_itf_corprof_0000_0001_0006
{
	COR_PRF_GC_INDUCED = 1,
	COR_PRF_GC_OTHER = 0
} COR_PRF_GC_REASON;
typedef enum __MIDL___MIDL_itf_corprof_0000_0001_0007
{
	COR_PRF_MODULE_DISK = 0x1,
	COR_PRF_MODULE_NGEN = 0x2,
	COR_PRF_MODULE_DYNAMIC = 0x4,
	COR_PRF_MODULE_COLLECTIBLE = 0x8,
	COR_PRF_MODULE_RESOURCE = 0x10,
	COR_PRF_MODULE_FLAT_LAYOUT = 0x20
} COR_PRF_MODULE_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_corprof_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corprof_0000_0001_v0_0_s_ifspec;
#ifndef __ICorProfilerCallback2_INTERFACE_DEFINED__
#define __ICorProfilerCallback2_INTERFACE_DEFINED__
extern const IID IID_ICorProfilerCallback2;
typedef struct ICorProfilerCallback2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICorProfilerCallback2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICorProfilerCallback2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *Initialize) (ICorProfilerCallback2 *This, IUnknown *pICorProfilerInfoUnk);
	HRESULT(STDMETHODCALLTYPE *Shutdown) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *AppDomainCreationStarted) (ICorProfilerCallback2 *This, AppDomainID appDomainId);
	HRESULT(STDMETHODCALLTYPE *AppDomainCreationFinished) (ICorProfilerCallback2 *This, AppDomainID appDomainId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *AppDomainShutdownStarted) (ICorProfilerCallback2 *This, AppDomainID appDomainId);
	HRESULT(STDMETHODCALLTYPE *AppDomainShutdownFinished) (ICorProfilerCallback2 *This, AppDomainID appDomainId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *AssemblyLoadStarted) (ICorProfilerCallback2 *This, AssemblyID assemblyId);
	HRESULT(STDMETHODCALLTYPE *AssemblyLoadFinished) (ICorProfilerCallback2 *This, AssemblyID assemblyId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *AssemblyUnloadStarted) (ICorProfilerCallback2 *This, AssemblyID assemblyId);
	HRESULT(STDMETHODCALLTYPE *AssemblyUnloadFinished) (ICorProfilerCallback2 *This, AssemblyID assemblyId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *ModuleLoadStarted) (ICorProfilerCallback2 *This, ModuleID moduleId);
	HRESULT(STDMETHODCALLTYPE *ModuleLoadFinished) (ICorProfilerCallback2 *This, ModuleID moduleId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *ModuleUnloadStarted) (ICorProfilerCallback2 *This, ModuleID moduleId);
	HRESULT(STDMETHODCALLTYPE *ModuleUnloadFinished) (ICorProfilerCallback2 *This, ModuleID moduleId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *ModuleAttachedToAssembly) (ICorProfilerCallback2 *This, ModuleID moduleId, AssemblyID AssemblyId);
	HRESULT(STDMETHODCALLTYPE *ClassLoadStarted) (ICorProfilerCallback2 *This, ClassID classId);
	HRESULT(STDMETHODCALLTYPE *ClassLoadFinished) (ICorProfilerCallback2 *This, ClassID classId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *ClassUnloadStarted) (ICorProfilerCallback2 *This, ClassID classId);
	HRESULT(STDMETHODCALLTYPE *ClassUnloadFinished) (ICorProfilerCallback2 *This, ClassID classId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *FunctionUnloadStarted) (ICorProfilerCallback2 *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *JITCompilationStarted) (ICorProfilerCallback2 *This, FunctionID functionId, BOOL fIsSafeToBlock);
	HRESULT(STDMETHODCALLTYPE *JITCompilationFinished) (ICorProfilerCallback2 *This, FunctionID functionId, HRESULT hrStatus, BOOL fIsSafeToBlock);
	HRESULT(STDMETHODCALLTYPE *JITCachedFunctionSearchStarted) (ICorProfilerCallback2 *This, FunctionID functionId, BOOL *pbUseCachedFunction);
	HRESULT(STDMETHODCALLTYPE *JITCachedFunctionSearchFinished) (ICorProfilerCallback2 *This, FunctionID functionId, COR_PRF_JIT_CACHE result);
	HRESULT(STDMETHODCALLTYPE *JITFunctionPitched) (ICorProfilerCallback2 *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *JITInlining) (ICorProfilerCallback2 *This, FunctionID callerId, FunctionID calleeId, BOOL *pfShouldInline);
	HRESULT(STDMETHODCALLTYPE *ThreadCreated) (ICorProfilerCallback2 *This, ThreadID threadId);
	HRESULT(STDMETHODCALLTYPE *ThreadDestroyed) (ICorProfilerCallback2 *This, ThreadID threadId);
	HRESULT(STDMETHODCALLTYPE *ThreadAssignedToOSThread) (ICorProfilerCallback2 *This, ThreadID managedThreadId, DWORD osThreadId);
	HRESULT(STDMETHODCALLTYPE *RemotingClientInvocationStarted) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *RemotingClientSendingMessage) (ICorProfilerCallback2 *This, GUID *pCookie, BOOL fIsAsync);
	HRESULT(STDMETHODCALLTYPE *RemotingClientReceivingReply) (ICorProfilerCallback2 *This, GUID *pCookie, BOOL fIsAsync);
	HRESULT(STDMETHODCALLTYPE *RemotingClientInvocationFinished) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *RemotingServerReceivingMessage) (ICorProfilerCallback2 *This, GUID *pCookie, BOOL fIsAsync);
	HRESULT(STDMETHODCALLTYPE *RemotingServerInvocationStarted) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *RemotingServerInvocationReturned) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *RemotingServerSendingReply) (ICorProfilerCallback2 *This, GUID *pCookie, BOOL fIsAsync);
	HRESULT(STDMETHODCALLTYPE *UnmanagedToManagedTransition) (ICorProfilerCallback2 *This, FunctionID functionId, COR_PRF_TRANSITION_REASON reason);
	HRESULT(STDMETHODCALLTYPE *ManagedToUnmanagedTransition) (ICorProfilerCallback2 *This, FunctionID functionId, COR_PRF_TRANSITION_REASON reason);
	HRESULT(STDMETHODCALLTYPE *RuntimeSuspendStarted) (ICorProfilerCallback2 *This, COR_PRF_SUSPEND_REASON suspendReason);
	HRESULT(STDMETHODCALLTYPE *RuntimeSuspendFinished) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *RuntimeSuspendAborted) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *RuntimeResumeStarted) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *RuntimeResumeFinished) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *RuntimeThreadSuspended) (ICorProfilerCallback2 *This, ThreadID threadId);
	HRESULT(STDMETHODCALLTYPE *RuntimeThreadResumed) (ICorProfilerCallback2 *This, ThreadID threadId);
	HRESULT(STDMETHODCALLTYPE *MovedReferences) (ICorProfilerCallback2 *This, ULONG cMovedObjectIDRanges, ObjectID oldObjectIDRangeStart[], ObjectID newObjectIDRangeStart[], ULONG cObjectIDRangeLength[]);
	HRESULT(STDMETHODCALLTYPE *ObjectAllocated) (ICorProfilerCallback2 *This, ObjectID objectId, ClassID classId);
	HRESULT(STDMETHODCALLTYPE *ObjectsAllocatedByClass) (ICorProfilerCallback2 *This, ULONG cClassCount, ClassID classIds[], ULONG cObjects[]);
	HRESULT(STDMETHODCALLTYPE *ObjectReferences) (ICorProfilerCallback2 *This, ObjectID objectId, ClassID classId, ULONG cObjectRefs, ObjectID objectRefIds[]);
	HRESULT(STDMETHODCALLTYPE *RootReferences) (ICorProfilerCallback2 *This, ULONG cRootRefs, ObjectID rootRefIds[]);
	HRESULT(STDMETHODCALLTYPE *ExceptionThrown) (ICorProfilerCallback2 *This, ObjectID thrownObjectId);
	HRESULT(STDMETHODCALLTYPE *ExceptionSearchFunctionEnter) (ICorProfilerCallback2 *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ExceptionSearchFunctionLeave) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *ExceptionSearchFilterEnter) (ICorProfilerCallback2 *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ExceptionSearchFilterLeave) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *ExceptionSearchCatcherFound) (ICorProfilerCallback2 *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ExceptionOSHandlerEnter) (ICorProfilerCallback2 *This, UINT_PTR __unused);
	HRESULT(STDMETHODCALLTYPE *ExceptionOSHandlerLeave) (ICorProfilerCallback2 *This, UINT_PTR __unused);
	HRESULT(STDMETHODCALLTYPE *ExceptionUnwindFunctionEnter) (ICorProfilerCallback2 *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ExceptionUnwindFunctionLeave) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *ExceptionUnwindFinallyEnter) (ICorProfilerCallback2 *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ExceptionUnwindFinallyLeave) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *ExceptionCatcherEnter) (ICorProfilerCallback2 *This, FunctionID functionId, ObjectID objectId);
	HRESULT(STDMETHODCALLTYPE *ExceptionCatcherLeave) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *COMClassicVTableCreated) (ICorProfilerCallback2 *This, ClassID wrappedClassId, REFGUID implementedIID, void *pVTable, ULONG cSlots);
	HRESULT(STDMETHODCALLTYPE *COMClassicVTableDestroyed) (ICorProfilerCallback2 *This, ClassID wrappedClassId, REFGUID implementedIID, void *pVTable);
	HRESULT(STDMETHODCALLTYPE *ExceptionCLRCatcherFound) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *ExceptionCLRCatcherExecute) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *ThreadNameChanged) (ICorProfilerCallback2 *This, ThreadID threadId, ULONG cchName, WCHAR name[]);
	HRESULT(STDMETHODCALLTYPE *GarbageCollectionStarted) (ICorProfilerCallback2 *This, int cGenerations, BOOL generationCollected[], COR_PRF_GC_REASON reason);
	HRESULT(STDMETHODCALLTYPE *SurvivingReferences) (ICorProfilerCallback2 *This, ULONG cSurvivingObjectIDRanges, ObjectID objectIDRangeStart[], ULONG cObjectIDRangeLength[]);
	HRESULT(STDMETHODCALLTYPE *GarbageCollectionFinished) (ICorProfilerCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *FinalizeableObjectQueued) (ICorProfilerCallback2 *This, DWORD finalizerFlags, ObjectID objectID);
	HRESULT(STDMETHODCALLTYPE *RootReferences2) (ICorProfilerCallback2 *This, ULONG cRootRefs, ObjectID rootRefIds[], COR_PRF_GC_ROOT_KIND rootKinds[], COR_PRF_GC_ROOT_FLAGS rootFlags[], UINT_PTR rootIds[]);
	HRESULT(STDMETHODCALLTYPE *HandleCreated) (ICorProfilerCallback2 *This, GCHandleID handleId, ObjectID initialObjectId);
	HRESULT(STDMETHODCALLTYPE *HandleDestroyed) (ICorProfilerCallback2 *This, GCHandleID handleId);
	END_INTERFACE
}  ICorProfilerCallback2Vtbl;
interface ICorProfilerCallback2
{
	CONST_VTBL struct ICorProfilerCallback2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorProfilerCallback2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorProfilerCallback2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorProfilerCallback2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorProfilerCallback2_Initialize(This,pICorProfilerInfoUnk)( (This)->lpVtbl -> Initialize(This,pICorProfilerInfoUnk) )
#define ICorProfilerCallback2_Shutdown(This)( (This)->lpVtbl -> Shutdown(This) )
#define ICorProfilerCallback2_AppDomainCreationStarted(This,appDomainId)( (This)->lpVtbl -> AppDomainCreationStarted(This,appDomainId) )
#define ICorProfilerCallback2_AppDomainCreationFinished(This,appDomainId,hrStatus)( (This)->lpVtbl -> AppDomainCreationFinished(This,appDomainId,hrStatus) )
#define ICorProfilerCallback2_AppDomainShutdownStarted(This,appDomainId)( (This)->lpVtbl -> AppDomainShutdownStarted(This,appDomainId) )
#define ICorProfilerCallback2_AppDomainShutdownFinished(This,appDomainId,hrStatus)( (This)->lpVtbl -> AppDomainShutdownFinished(This,appDomainId,hrStatus) )
#define ICorProfilerCallback2_AssemblyLoadStarted(This,assemblyId)( (This)->lpVtbl -> AssemblyLoadStarted(This,assemblyId) )
#define ICorProfilerCallback2_AssemblyLoadFinished(This,assemblyId,hrStatus)( (This)->lpVtbl -> AssemblyLoadFinished(This,assemblyId,hrStatus) )
#define ICorProfilerCallback2_AssemblyUnloadStarted(This,assemblyId)( (This)->lpVtbl -> AssemblyUnloadStarted(This,assemblyId) )
#define ICorProfilerCallback2_AssemblyUnloadFinished(This,assemblyId,hrStatus)( (This)->lpVtbl -> AssemblyUnloadFinished(This,assemblyId,hrStatus) )
#define ICorProfilerCallback2_ModuleLoadStarted(This,moduleId)( (This)->lpVtbl -> ModuleLoadStarted(This,moduleId) )
#define ICorProfilerCallback2_ModuleLoadFinished(This,moduleId,hrStatus)( (This)->lpVtbl -> ModuleLoadFinished(This,moduleId,hrStatus) )
#define ICorProfilerCallback2_ModuleUnloadStarted(This,moduleId)( (This)->lpVtbl -> ModuleUnloadStarted(This,moduleId) )
#define ICorProfilerCallback2_ModuleUnloadFinished(This,moduleId,hrStatus)( (This)->lpVtbl -> ModuleUnloadFinished(This,moduleId,hrStatus) )
#define ICorProfilerCallback2_ModuleAttachedToAssembly(This,moduleId,AssemblyId)( (This)->lpVtbl -> ModuleAttachedToAssembly(This,moduleId,AssemblyId) )
#define ICorProfilerCallback2_ClassLoadStarted(This,classId)( (This)->lpVtbl -> ClassLoadStarted(This,classId) )
#define ICorProfilerCallback2_ClassLoadFinished(This,classId,hrStatus)( (This)->lpVtbl -> ClassLoadFinished(This,classId,hrStatus) )
#define ICorProfilerCallback2_ClassUnloadStarted(This,classId)( (This)->lpVtbl -> ClassUnloadStarted(This,classId) )
#define ICorProfilerCallback2_ClassUnloadFinished(This,classId,hrStatus)( (This)->lpVtbl -> ClassUnloadFinished(This,classId,hrStatus) )
#define ICorProfilerCallback2_FunctionUnloadStarted(This,functionId)( (This)->lpVtbl -> FunctionUnloadStarted(This,functionId) )
#define ICorProfilerCallback2_JITCompilationStarted(This,functionId,fIsSafeToBlock)( (This)->lpVtbl -> JITCompilationStarted(This,functionId,fIsSafeToBlock) )
#define ICorProfilerCallback2_JITCompilationFinished(This,functionId,hrStatus,fIsSafeToBlock)( (This)->lpVtbl -> JITCompilationFinished(This,functionId,hrStatus,fIsSafeToBlock) )
#define ICorProfilerCallback2_JITCachedFunctionSearchStarted(This,functionId,pbUseCachedFunction)( (This)->lpVtbl -> JITCachedFunctionSearchStarted(This,functionId,pbUseCachedFunction) )
#define ICorProfilerCallback2_JITCachedFunctionSearchFinished(This,functionId,result)( (This)->lpVtbl -> JITCachedFunctionSearchFinished(This,functionId,result) )
#define ICorProfilerCallback2_JITFunctionPitched(This,functionId)( (This)->lpVtbl -> JITFunctionPitched(This,functionId) )
#define ICorProfilerCallback2_JITInlining(This,callerId,calleeId,pfShouldInline)( (This)->lpVtbl -> JITInlining(This,callerId,calleeId,pfShouldInline) )
#define ICorProfilerCallback2_ThreadCreated(This,threadId)( (This)->lpVtbl -> ThreadCreated(This,threadId) )
#define ICorProfilerCallback2_ThreadDestroyed(This,threadId)( (This)->lpVtbl -> ThreadDestroyed(This,threadId) )
#define ICorProfilerCallback2_ThreadAssignedToOSThread(This,managedThreadId,osThreadId)( (This)->lpVtbl -> ThreadAssignedToOSThread(This,managedThreadId,osThreadId) )
#define ICorProfilerCallback2_RemotingClientInvocationStarted(This)( (This)->lpVtbl -> RemotingClientInvocationStarted(This) )
#define ICorProfilerCallback2_RemotingClientSendingMessage(This,pCookie,fIsAsync)( (This)->lpVtbl -> RemotingClientSendingMessage(This,pCookie,fIsAsync) )
#define ICorProfilerCallback2_RemotingClientReceivingReply(This,pCookie,fIsAsync)( (This)->lpVtbl -> RemotingClientReceivingReply(This,pCookie,fIsAsync) )
#define ICorProfilerCallback2_RemotingClientInvocationFinished(This)( (This)->lpVtbl -> RemotingClientInvocationFinished(This) )
#define ICorProfilerCallback2_RemotingServerReceivingMessage(This,pCookie,fIsAsync)( (This)->lpVtbl -> RemotingServerReceivingMessage(This,pCookie,fIsAsync) )
#define ICorProfilerCallback2_RemotingServerInvocationStarted(This)( (This)->lpVtbl -> RemotingServerInvocationStarted(This) )
#define ICorProfilerCallback2_RemotingServerInvocationReturned(This)( (This)->lpVtbl -> RemotingServerInvocationReturned(This) )
#define ICorProfilerCallback2_RemotingServerSendingReply(This,pCookie,fIsAsync)( (This)->lpVtbl -> RemotingServerSendingReply(This,pCookie,fIsAsync) )
#define ICorProfilerCallback2_UnmanagedToManagedTransition(This,functionId,reason)( (This)->lpVtbl -> UnmanagedToManagedTransition(This,functionId,reason) )
#define ICorProfilerCallback2_ManagedToUnmanagedTransition(This,functionId,reason)( (This)->lpVtbl -> ManagedToUnmanagedTransition(This,functionId,reason) )
#define ICorProfilerCallback2_RuntimeSuspendStarted(This,suspendReason)( (This)->lpVtbl -> RuntimeSuspendStarted(This,suspendReason) )
#define ICorProfilerCallback2_RuntimeSuspendFinished(This)( (This)->lpVtbl -> RuntimeSuspendFinished(This) )
#define ICorProfilerCallback2_RuntimeSuspendAborted(This)( (This)->lpVtbl -> RuntimeSuspendAborted(This) )
#define ICorProfilerCallback2_RuntimeResumeStarted(This)( (This)->lpVtbl -> RuntimeResumeStarted(This) )
#define ICorProfilerCallback2_RuntimeResumeFinished(This)( (This)->lpVtbl -> RuntimeResumeFinished(This) )
#define ICorProfilerCallback2_RuntimeThreadSuspended(This,threadId)( (This)->lpVtbl -> RuntimeThreadSuspended(This,threadId) )
#define ICorProfilerCallback2_RuntimeThreadResumed(This,threadId)( (This)->lpVtbl -> RuntimeThreadResumed(This,threadId) )
#define ICorProfilerCallback2_MovedReferences(This,cMovedObjectIDRanges,oldObjectIDRangeStart,newObjectIDRangeStart,cObjectIDRangeLength)( (This)->lpVtbl -> MovedReferences(This,cMovedObjectIDRanges,oldObjectIDRangeStart,newObjectIDRangeStart,cObjectIDRangeLength) )
#define ICorProfilerCallback2_ObjectAllocated(This,objectId,classId)( (This)->lpVtbl -> ObjectAllocated(This,objectId,classId) )
#define ICorProfilerCallback2_ObjectsAllocatedByClass(This,cClassCount,classIds,cObjects)( (This)->lpVtbl -> ObjectsAllocatedByClass(This,cClassCount,classIds,cObjects) )
#define ICorProfilerCallback2_ObjectReferences(This,objectId,classId,cObjectRefs,objectRefIds)( (This)->lpVtbl -> ObjectReferences(This,objectId,classId,cObjectRefs,objectRefIds) )
#define ICorProfilerCallback2_RootReferences(This,cRootRefs,rootRefIds)( (This)->lpVtbl -> RootReferences(This,cRootRefs,rootRefIds) )
#define ICorProfilerCallback2_ExceptionThrown(This,thrownObjectId)( (This)->lpVtbl -> ExceptionThrown(This,thrownObjectId) )
#define ICorProfilerCallback2_ExceptionSearchFunctionEnter(This,functionId)( (This)->lpVtbl -> ExceptionSearchFunctionEnter(This,functionId) )
#define ICorProfilerCallback2_ExceptionSearchFunctionLeave(This)( (This)->lpVtbl -> ExceptionSearchFunctionLeave(This) )
#define ICorProfilerCallback2_ExceptionSearchFilterEnter(This,functionId)( (This)->lpVtbl -> ExceptionSearchFilterEnter(This,functionId) )
#define ICorProfilerCallback2_ExceptionSearchFilterLeave(This)( (This)->lpVtbl -> ExceptionSearchFilterLeave(This) )
#define ICorProfilerCallback2_ExceptionSearchCatcherFound(This,functionId)( (This)->lpVtbl -> ExceptionSearchCatcherFound(This,functionId) )
#define ICorProfilerCallback2_ExceptionOSHandlerEnter(This,__unused)( (This)->lpVtbl -> ExceptionOSHandlerEnter(This,__unused) )
#define ICorProfilerCallback2_ExceptionOSHandlerLeave(This,__unused)( (This)->lpVtbl -> ExceptionOSHandlerLeave(This,__unused) )
#define ICorProfilerCallback2_ExceptionUnwindFunctionEnter(This,functionId)( (This)->lpVtbl -> ExceptionUnwindFunctionEnter(This,functionId) )
#define ICorProfilerCallback2_ExceptionUnwindFunctionLeave(This)( (This)->lpVtbl -> ExceptionUnwindFunctionLeave(This) )
#define ICorProfilerCallback2_ExceptionUnwindFinallyEnter(This,functionId)( (This)->lpVtbl -> ExceptionUnwindFinallyEnter(This,functionId) )
#define ICorProfilerCallback2_ExceptionUnwindFinallyLeave(This)( (This)->lpVtbl -> ExceptionUnwindFinallyLeave(This) )
#define ICorProfilerCallback2_ExceptionCatcherEnter(This,functionId,objectId)( (This)->lpVtbl -> ExceptionCatcherEnter(This,functionId,objectId) )
#define ICorProfilerCallback2_ExceptionCatcherLeave(This)( (This)->lpVtbl -> ExceptionCatcherLeave(This) )
#define ICorProfilerCallback2_COMClassicVTableCreated(This,wrappedClassId,implementedIID,pVTable,cSlots)( (This)->lpVtbl -> COMClassicVTableCreated(This,wrappedClassId,implementedIID,pVTable,cSlots) )
#define ICorProfilerCallback2_COMClassicVTableDestroyed(This,wrappedClassId,implementedIID,pVTable)( (This)->lpVtbl -> COMClassicVTableDestroyed(This,wrappedClassId,implementedIID,pVTable) )
#define ICorProfilerCallback2_ExceptionCLRCatcherFound(This)( (This)->lpVtbl -> ExceptionCLRCatcherFound(This) )
#define ICorProfilerCallback2_ExceptionCLRCatcherExecute(This)( (This)->lpVtbl -> ExceptionCLRCatcherExecute(This) )
#define ICorProfilerCallback2_ThreadNameChanged(This,threadId,cchName,name)( (This)->lpVtbl -> ThreadNameChanged(This,threadId,cchName,name) )
#define ICorProfilerCallback2_GarbageCollectionStarted(This,cGenerations,generationCollected,reason)( (This)->lpVtbl -> GarbageCollectionStarted(This,cGenerations,generationCollected,reason) )
#define ICorProfilerCallback2_SurvivingReferences(This,cSurvivingObjectIDRanges,objectIDRangeStart,cObjectIDRangeLength)( (This)->lpVtbl -> SurvivingReferences(This,cSurvivingObjectIDRanges,objectIDRangeStart,cObjectIDRangeLength) )
#define ICorProfilerCallback2_GarbageCollectionFinished(This)( (This)->lpVtbl -> GarbageCollectionFinished(This) )
#define ICorProfilerCallback2_FinalizeableObjectQueued(This,finalizerFlags,objectID)( (This)->lpVtbl -> FinalizeableObjectQueued(This,finalizerFlags,objectID) )
#define ICorProfilerCallback2_RootReferences2(This,cRootRefs,rootRefIds,rootKinds,rootFlags,rootIds)( (This)->lpVtbl -> RootReferences2(This,cRootRefs,rootRefIds,rootKinds,rootFlags,rootIds) )
#define ICorProfilerCallback2_HandleCreated(This,handleId,initialObjectId)( (This)->lpVtbl -> HandleCreated(This,handleId,initialObjectId) )
#define ICorProfilerCallback2_HandleDestroyed(This,handleId)( (This)->lpVtbl -> HandleDestroyed(This,handleId) )
#endif
#endif
#ifndef __ICorProfilerCallback3_INTERFACE_DEFINED__
#define __ICorProfilerCallback3_INTERFACE_DEFINED__
extern const IID IID_ICorProfilerCallback3;
typedef struct ICorProfilerCallback3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICorProfilerCallback3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICorProfilerCallback3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *Initialize) (ICorProfilerCallback3 *This, IUnknown *pICorProfilerInfoUnk);
	HRESULT(STDMETHODCALLTYPE *Shutdown) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *AppDomainCreationStarted) (ICorProfilerCallback3 *This, AppDomainID appDomainId);
	HRESULT(STDMETHODCALLTYPE *AppDomainCreationFinished) (ICorProfilerCallback3 *This, AppDomainID appDomainId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *AppDomainShutdownStarted) (ICorProfilerCallback3 *This, AppDomainID appDomainId);
	HRESULT(STDMETHODCALLTYPE *AppDomainShutdownFinished) (ICorProfilerCallback3 *This, AppDomainID appDomainId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *AssemblyLoadStarted) (ICorProfilerCallback3 *This, AssemblyID assemblyId);
	HRESULT(STDMETHODCALLTYPE *AssemblyLoadFinished) (ICorProfilerCallback3 *This, AssemblyID assemblyId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *AssemblyUnloadStarted) (ICorProfilerCallback3 *This, AssemblyID assemblyId);
	HRESULT(STDMETHODCALLTYPE *AssemblyUnloadFinished) (ICorProfilerCallback3 *This, AssemblyID assemblyId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *ModuleLoadStarted) (ICorProfilerCallback3 *This, ModuleID moduleId);
	HRESULT(STDMETHODCALLTYPE *ModuleLoadFinished) (ICorProfilerCallback3 *This, ModuleID moduleId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *ModuleUnloadStarted) (ICorProfilerCallback3 *This, ModuleID moduleId);
	HRESULT(STDMETHODCALLTYPE *ModuleUnloadFinished) (ICorProfilerCallback3 *This, ModuleID moduleId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *ModuleAttachedToAssembly) (ICorProfilerCallback3 *This, ModuleID moduleId, AssemblyID AssemblyId);
	HRESULT(STDMETHODCALLTYPE *ClassLoadStarted) (ICorProfilerCallback3 *This, ClassID classId);
	HRESULT(STDMETHODCALLTYPE *ClassLoadFinished) (ICorProfilerCallback3 *This, ClassID classId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *ClassUnloadStarted) (ICorProfilerCallback3 *This, ClassID classId);
	HRESULT(STDMETHODCALLTYPE *ClassUnloadFinished) (ICorProfilerCallback3 *This, ClassID classId, HRESULT hrStatus);
	HRESULT(STDMETHODCALLTYPE *FunctionUnloadStarted) (ICorProfilerCallback3 *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *JITCompilationStarted) (ICorProfilerCallback3 *This, FunctionID functionId, BOOL fIsSafeToBlock);
	HRESULT(STDMETHODCALLTYPE *JITCompilationFinished) (ICorProfilerCallback3 *This, FunctionID functionId, HRESULT hrStatus, BOOL fIsSafeToBlock);
	HRESULT(STDMETHODCALLTYPE *JITCachedFunctionSearchStarted) (ICorProfilerCallback3 *This, FunctionID functionId, BOOL *pbUseCachedFunction);
	HRESULT(STDMETHODCALLTYPE *JITCachedFunctionSearchFinished) (ICorProfilerCallback3 *This, FunctionID functionId, COR_PRF_JIT_CACHE result);
	HRESULT(STDMETHODCALLTYPE *JITFunctionPitched) (ICorProfilerCallback3 *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *JITInlining) (ICorProfilerCallback3 *This, FunctionID callerId, FunctionID calleeId, BOOL *pfShouldInline);
	HRESULT(STDMETHODCALLTYPE *ThreadCreated) (ICorProfilerCallback3 *This, ThreadID threadId);
	HRESULT(STDMETHODCALLTYPE *ThreadDestroyed) (ICorProfilerCallback3 *This, ThreadID threadId);
	HRESULT(STDMETHODCALLTYPE *ThreadAssignedToOSThread) (ICorProfilerCallback3 *This, ThreadID managedThreadId, DWORD osThreadId);
	HRESULT(STDMETHODCALLTYPE *RemotingClientInvocationStarted) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *RemotingClientSendingMessage) (ICorProfilerCallback3 *This, GUID *pCookie, BOOL fIsAsync);
	HRESULT(STDMETHODCALLTYPE *RemotingClientReceivingReply) (ICorProfilerCallback3 *This, GUID *pCookie, BOOL fIsAsync);
	HRESULT(STDMETHODCALLTYPE *RemotingClientInvocationFinished) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *RemotingServerReceivingMessage) (ICorProfilerCallback3 *This, GUID *pCookie, BOOL fIsAsync);
	HRESULT(STDMETHODCALLTYPE *RemotingServerInvocationStarted) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *RemotingServerInvocationReturned) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *RemotingServerSendingReply) (ICorProfilerCallback3 *This, GUID *pCookie, BOOL fIsAsync);
	HRESULT(STDMETHODCALLTYPE *UnmanagedToManagedTransition) (ICorProfilerCallback3 *This, FunctionID functionId, COR_PRF_TRANSITION_REASON reason);
	HRESULT(STDMETHODCALLTYPE *ManagedToUnmanagedTransition) (ICorProfilerCallback3 *This, FunctionID functionId, COR_PRF_TRANSITION_REASON reason);
	HRESULT(STDMETHODCALLTYPE *RuntimeSuspendStarted) (ICorProfilerCallback3 *This, COR_PRF_SUSPEND_REASON suspendReason);
	HRESULT(STDMETHODCALLTYPE *RuntimeSuspendFinished) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *RuntimeSuspendAborted) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *RuntimeResumeStarted) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *RuntimeResumeFinished) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *RuntimeThreadSuspended) (ICorProfilerCallback3 *This, ThreadID threadId);
	HRESULT(STDMETHODCALLTYPE *RuntimeThreadResumed) (ICorProfilerCallback3 *This, ThreadID threadId);
	HRESULT(STDMETHODCALLTYPE *MovedReferences) (ICorProfilerCallback3 *This, ULONG cMovedObjectIDRanges, ObjectID oldObjectIDRangeStart[], ObjectID newObjectIDRangeStart[], ULONG cObjectIDRangeLength[]);
	HRESULT(STDMETHODCALLTYPE *ObjectAllocated) (ICorProfilerCallback3 *This, ObjectID objectId, ClassID classId);
	HRESULT(STDMETHODCALLTYPE *ObjectsAllocatedByClass) (ICorProfilerCallback3 *This, ULONG cClassCount, ClassID classIds[], ULONG cObjects[]);
	HRESULT(STDMETHODCALLTYPE *ObjectReferences) (ICorProfilerCallback3 *This, ObjectID objectId, ClassID classId, ULONG cObjectRefs, ObjectID objectRefIds[]);
	HRESULT(STDMETHODCALLTYPE *RootReferences) (ICorProfilerCallback3 *This, ULONG cRootRefs, ObjectID rootRefIds[]);
	HRESULT(STDMETHODCALLTYPE *ExceptionThrown) (ICorProfilerCallback3 *This, ObjectID thrownObjectId);
	HRESULT(STDMETHODCALLTYPE *ExceptionSearchFunctionEnter) (ICorProfilerCallback3 *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ExceptionSearchFunctionLeave) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *ExceptionSearchFilterEnter) (ICorProfilerCallback3 *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ExceptionSearchFilterLeave) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *ExceptionSearchCatcherFound) (ICorProfilerCallback3 *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ExceptionOSHandlerEnter) (ICorProfilerCallback3 *This, UINT_PTR __unused);
	HRESULT(STDMETHODCALLTYPE *ExceptionOSHandlerLeave) (ICorProfilerCallback3 *This, UINT_PTR __unused);
	HRESULT(STDMETHODCALLTYPE *ExceptionUnwindFunctionEnter) (ICorProfilerCallback3 *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ExceptionUnwindFunctionLeave) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *ExceptionUnwindFinallyEnter) (ICorProfilerCallback3 *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ExceptionUnwindFinallyLeave) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *ExceptionCatcherEnter) (ICorProfilerCallback3 *This, FunctionID functionId, ObjectID objectId);
	HRESULT(STDMETHODCALLTYPE *ExceptionCatcherLeave) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *COMClassicVTableCreated) (ICorProfilerCallback3 *This, ClassID wrappedClassId, REFGUID implementedIID, void *pVTable, ULONG cSlots);
	HRESULT(STDMETHODCALLTYPE *COMClassicVTableDestroyed) (ICorProfilerCallback3 *This, ClassID wrappedClassId, REFGUID implementedIID, void *pVTable);
	HRESULT(STDMETHODCALLTYPE *ExceptionCLRCatcherFound) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *ExceptionCLRCatcherExecute) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *ThreadNameChanged) (ICorProfilerCallback3 *This, ThreadID threadId, ULONG cchName, WCHAR name[]);
	HRESULT(STDMETHODCALLTYPE *GarbageCollectionStarted) (ICorProfilerCallback3 *This, int cGenerations, BOOL generationCollected[], COR_PRF_GC_REASON reason);
	HRESULT(STDMETHODCALLTYPE *SurvivingReferences) (ICorProfilerCallback3 *This, ULONG cSurvivingObjectIDRanges, ObjectID objectIDRangeStart[], ULONG cObjectIDRangeLength[]);
	HRESULT(STDMETHODCALLTYPE *GarbageCollectionFinished) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *FinalizeableObjectQueued) (ICorProfilerCallback3 *This, DWORD finalizerFlags, ObjectID objectID);
	HRESULT(STDMETHODCALLTYPE *RootReferences2) (ICorProfilerCallback3 *This, ULONG cRootRefs, ObjectID rootRefIds[], COR_PRF_GC_ROOT_KIND rootKinds[], COR_PRF_GC_ROOT_FLAGS rootFlags[], UINT_PTR rootIds[]);
	HRESULT(STDMETHODCALLTYPE *HandleCreated) (ICorProfilerCallback3 *This, GCHandleID handleId, ObjectID initialObjectId);
	HRESULT(STDMETHODCALLTYPE *HandleDestroyed) (ICorProfilerCallback3 *This, GCHandleID handleId);
	HRESULT(STDMETHODCALLTYPE *InitializeForAttach) (ICorProfilerCallback3 *This, IUnknown *pCorProfilerInfoUnk, void *pvClientData, UINT cbClientData);
	HRESULT(STDMETHODCALLTYPE *ProfilerAttachComplete) (ICorProfilerCallback3 *This);
	HRESULT(STDMETHODCALLTYPE *ProfilerDetachSucceeded) (ICorProfilerCallback3 *This);
	END_INTERFACE
}  ICorProfilerCallback3Vtbl;
interface ICorProfilerCallback3
{
	CONST_VTBL struct ICorProfilerCallback3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorProfilerCallback3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorProfilerCallback3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorProfilerCallback3_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorProfilerCallback3_Initialize(This,pICorProfilerInfoUnk)( (This)->lpVtbl -> Initialize(This,pICorProfilerInfoUnk) )
#define ICorProfilerCallback3_Shutdown(This)( (This)->lpVtbl -> Shutdown(This) )
#define ICorProfilerCallback3_AppDomainCreationStarted(This,appDomainId)( (This)->lpVtbl -> AppDomainCreationStarted(This,appDomainId) )
#define ICorProfilerCallback3_AppDomainCreationFinished(This,appDomainId,hrStatus)( (This)->lpVtbl -> AppDomainCreationFinished(This,appDomainId,hrStatus) )
#define ICorProfilerCallback3_AppDomainShutdownStarted(This,appDomainId)( (This)->lpVtbl -> AppDomainShutdownStarted(This,appDomainId) )
#define ICorProfilerCallback3_AppDomainShutdownFinished(This,appDomainId,hrStatus)( (This)->lpVtbl -> AppDomainShutdownFinished(This,appDomainId,hrStatus) )
#define ICorProfilerCallback3_AssemblyLoadStarted(This,assemblyId)( (This)->lpVtbl -> AssemblyLoadStarted(This,assemblyId) )
#define ICorProfilerCallback3_AssemblyLoadFinished(This,assemblyId,hrStatus)( (This)->lpVtbl -> AssemblyLoadFinished(This,assemblyId,hrStatus) )
#define ICorProfilerCallback3_AssemblyUnloadStarted(This,assemblyId)( (This)->lpVtbl -> AssemblyUnloadStarted(This,assemblyId) )
#define ICorProfilerCallback3_AssemblyUnloadFinished(This,assemblyId,hrStatus)( (This)->lpVtbl -> AssemblyUnloadFinished(This,assemblyId,hrStatus) )
#define ICorProfilerCallback3_ModuleLoadStarted(This,moduleId)( (This)->lpVtbl -> ModuleLoadStarted(This,moduleId) )
#define ICorProfilerCallback3_ModuleLoadFinished(This,moduleId,hrStatus)( (This)->lpVtbl -> ModuleLoadFinished(This,moduleId,hrStatus) )
#define ICorProfilerCallback3_ModuleUnloadStarted(This,moduleId)( (This)->lpVtbl -> ModuleUnloadStarted(This,moduleId) )
#define ICorProfilerCallback3_ModuleUnloadFinished(This,moduleId,hrStatus)( (This)->lpVtbl -> ModuleUnloadFinished(This,moduleId,hrStatus) )
#define ICorProfilerCallback3_ModuleAttachedToAssembly(This,moduleId,AssemblyId)( (This)->lpVtbl -> ModuleAttachedToAssembly(This,moduleId,AssemblyId) )
#define ICorProfilerCallback3_ClassLoadStarted(This,classId)( (This)->lpVtbl -> ClassLoadStarted(This,classId) )
#define ICorProfilerCallback3_ClassLoadFinished(This,classId,hrStatus)( (This)->lpVtbl -> ClassLoadFinished(This,classId,hrStatus) )
#define ICorProfilerCallback3_ClassUnloadStarted(This,classId)( (This)->lpVtbl -> ClassUnloadStarted(This,classId) )
#define ICorProfilerCallback3_ClassUnloadFinished(This,classId,hrStatus)( (This)->lpVtbl -> ClassUnloadFinished(This,classId,hrStatus) )
#define ICorProfilerCallback3_FunctionUnloadStarted(This,functionId)( (This)->lpVtbl -> FunctionUnloadStarted(This,functionId) )
#define ICorProfilerCallback3_JITCompilationStarted(This,functionId,fIsSafeToBlock)( (This)->lpVtbl -> JITCompilationStarted(This,functionId,fIsSafeToBlock) )
#define ICorProfilerCallback3_JITCompilationFinished(This,functionId,hrStatus,fIsSafeToBlock)( (This)->lpVtbl -> JITCompilationFinished(This,functionId,hrStatus,fIsSafeToBlock) )
#define ICorProfilerCallback3_JITCachedFunctionSearchStarted(This,functionId,pbUseCachedFunction)( (This)->lpVtbl -> JITCachedFunctionSearchStarted(This,functionId,pbUseCachedFunction) )
#define ICorProfilerCallback3_JITCachedFunctionSearchFinished(This,functionId,result)( (This)->lpVtbl -> JITCachedFunctionSearchFinished(This,functionId,result) )
#define ICorProfilerCallback3_JITFunctionPitched(This,functionId)( (This)->lpVtbl -> JITFunctionPitched(This,functionId) )
#define ICorProfilerCallback3_JITInlining(This,callerId,calleeId,pfShouldInline)( (This)->lpVtbl -> JITInlining(This,callerId,calleeId,pfShouldInline) )
#define ICorProfilerCallback3_ThreadCreated(This,threadId)( (This)->lpVtbl -> ThreadCreated(This,threadId) )
#define ICorProfilerCallback3_ThreadDestroyed(This,threadId)( (This)->lpVtbl -> ThreadDestroyed(This,threadId) )
#define ICorProfilerCallback3_ThreadAssignedToOSThread(This,managedThreadId,osThreadId)( (This)->lpVtbl -> ThreadAssignedToOSThread(This,managedThreadId,osThreadId) )
#define ICorProfilerCallback3_RemotingClientInvocationStarted(This)( (This)->lpVtbl -> RemotingClientInvocationStarted(This) )
#define ICorProfilerCallback3_RemotingClientSendingMessage(This,pCookie,fIsAsync)( (This)->lpVtbl -> RemotingClientSendingMessage(This,pCookie,fIsAsync) )
#define ICorProfilerCallback3_RemotingClientReceivingReply(This,pCookie,fIsAsync)( (This)->lpVtbl -> RemotingClientReceivingReply(This,pCookie,fIsAsync) )
#define ICorProfilerCallback3_RemotingClientInvocationFinished(This)( (This)->lpVtbl -> RemotingClientInvocationFinished(This) )
#define ICorProfilerCallback3_RemotingServerReceivingMessage(This,pCookie,fIsAsync)( (This)->lpVtbl -> RemotingServerReceivingMessage(This,pCookie,fIsAsync) )
#define ICorProfilerCallback3_RemotingServerInvocationStarted(This)( (This)->lpVtbl -> RemotingServerInvocationStarted(This) )
#define ICorProfilerCallback3_RemotingServerInvocationReturned(This)( (This)->lpVtbl -> RemotingServerInvocationReturned(This) )
#define ICorProfilerCallback3_RemotingServerSendingReply(This,pCookie,fIsAsync)( (This)->lpVtbl -> RemotingServerSendingReply(This,pCookie,fIsAsync) )
#define ICorProfilerCallback3_UnmanagedToManagedTransition(This,functionId,reason)( (This)->lpVtbl -> UnmanagedToManagedTransition(This,functionId,reason) )
#define ICorProfilerCallback3_ManagedToUnmanagedTransition(This,functionId,reason)( (This)->lpVtbl -> ManagedToUnmanagedTransition(This,functionId,reason) )
#define ICorProfilerCallback3_RuntimeSuspendStarted(This,suspendReason)( (This)->lpVtbl -> RuntimeSuspendStarted(This,suspendReason) )
#define ICorProfilerCallback3_RuntimeSuspendFinished(This)( (This)->lpVtbl -> RuntimeSuspendFinished(This) )
#define ICorProfilerCallback3_RuntimeSuspendAborted(This)( (This)->lpVtbl -> RuntimeSuspendAborted(This) )
#define ICorProfilerCallback3_RuntimeResumeStarted(This)( (This)->lpVtbl -> RuntimeResumeStarted(This) )
#define ICorProfilerCallback3_RuntimeResumeFinished(This)( (This)->lpVtbl -> RuntimeResumeFinished(This) )
#define ICorProfilerCallback3_RuntimeThreadSuspended(This,threadId)( (This)->lpVtbl -> RuntimeThreadSuspended(This,threadId) )
#define ICorProfilerCallback3_RuntimeThreadResumed(This,threadId)( (This)->lpVtbl -> RuntimeThreadResumed(This,threadId) )
#define ICorProfilerCallback3_MovedReferences(This,cMovedObjectIDRanges,oldObjectIDRangeStart,newObjectIDRangeStart,cObjectIDRangeLength)( (This)->lpVtbl -> MovedReferences(This,cMovedObjectIDRanges,oldObjectIDRangeStart,newObjectIDRangeStart,cObjectIDRangeLength) )
#define ICorProfilerCallback3_ObjectAllocated(This,objectId,classId)( (This)->lpVtbl -> ObjectAllocated(This,objectId,classId) )
#define ICorProfilerCallback3_ObjectsAllocatedByClass(This,cClassCount,classIds,cObjects)( (This)->lpVtbl -> ObjectsAllocatedByClass(This,cClassCount,classIds,cObjects) )
#define ICorProfilerCallback3_ObjectReferences(This,objectId,classId,cObjectRefs,objectRefIds)( (This)->lpVtbl -> ObjectReferences(This,objectId,classId,cObjectRefs,objectRefIds) )
#define ICorProfilerCallback3_RootReferences(This,cRootRefs,rootRefIds)( (This)->lpVtbl -> RootReferences(This,cRootRefs,rootRefIds) )
#define ICorProfilerCallback3_ExceptionThrown(This,thrownObjectId)( (This)->lpVtbl -> ExceptionThrown(This,thrownObjectId) )
#define ICorProfilerCallback3_ExceptionSearchFunctionEnter(This,functionId)( (This)->lpVtbl -> ExceptionSearchFunctionEnter(This,functionId) )
#define ICorProfilerCallback3_ExceptionSearchFunctionLeave(This)( (This)->lpVtbl -> ExceptionSearchFunctionLeave(This) )
#define ICorProfilerCallback3_ExceptionSearchFilterEnter(This,functionId)( (This)->lpVtbl -> ExceptionSearchFilterEnter(This,functionId) )
#define ICorProfilerCallback3_ExceptionSearchFilterLeave(This)( (This)->lpVtbl -> ExceptionSearchFilterLeave(This) )
#define ICorProfilerCallback3_ExceptionSearchCatcherFound(This,functionId)( (This)->lpVtbl -> ExceptionSearchCatcherFound(This,functionId) )
#define ICorProfilerCallback3_ExceptionOSHandlerEnter(This,__unused)( (This)->lpVtbl -> ExceptionOSHandlerEnter(This,__unused) )
#define ICorProfilerCallback3_ExceptionOSHandlerLeave(This,__unused)( (This)->lpVtbl -> ExceptionOSHandlerLeave(This,__unused) )
#define ICorProfilerCallback3_ExceptionUnwindFunctionEnter(This,functionId)( (This)->lpVtbl -> ExceptionUnwindFunctionEnter(This,functionId) )
#define ICorProfilerCallback3_ExceptionUnwindFunctionLeave(This)( (This)->lpVtbl -> ExceptionUnwindFunctionLeave(This) )
#define ICorProfilerCallback3_ExceptionUnwindFinallyEnter(This,functionId)( (This)->lpVtbl -> ExceptionUnwindFinallyEnter(This,functionId) )
#define ICorProfilerCallback3_ExceptionUnwindFinallyLeave(This)( (This)->lpVtbl -> ExceptionUnwindFinallyLeave(This) )
#define ICorProfilerCallback3_ExceptionCatcherEnter(This,functionId,objectId)( (This)->lpVtbl -> ExceptionCatcherEnter(This,functionId,objectId) )
#define ICorProfilerCallback3_ExceptionCatcherLeave(This)( (This)->lpVtbl -> ExceptionCatcherLeave(This) )
#define ICorProfilerCallback3_COMClassicVTableCreated(This,wrappedClassId,implementedIID,pVTable,cSlots)( (This)->lpVtbl -> COMClassicVTableCreated(This,wrappedClassId,implementedIID,pVTable,cSlots) )
#define ICorProfilerCallback3_COMClassicVTableDestroyed(This,wrappedClassId,implementedIID,pVTable)( (This)->lpVtbl -> COMClassicVTableDestroyed(This,wrappedClassId,implementedIID,pVTable) )
#define ICorProfilerCallback3_ExceptionCLRCatcherFound(This)( (This)->lpVtbl -> ExceptionCLRCatcherFound(This) )
#define ICorProfilerCallback3_ExceptionCLRCatcherExecute(This)( (This)->lpVtbl -> ExceptionCLRCatcherExecute(This) )
#define ICorProfilerCallback3_ThreadNameChanged(This,threadId,cchName,name)( (This)->lpVtbl -> ThreadNameChanged(This,threadId,cchName,name) )
#define ICorProfilerCallback3_GarbageCollectionStarted(This,cGenerations,generationCollected,reason)( (This)->lpVtbl -> GarbageCollectionStarted(This,cGenerations,generationCollected,reason) )
#define ICorProfilerCallback3_SurvivingReferences(This,cSurvivingObjectIDRanges,objectIDRangeStart,cObjectIDRangeLength)( (This)->lpVtbl -> SurvivingReferences(This,cSurvivingObjectIDRanges,objectIDRangeStart,cObjectIDRangeLength) )
#define ICorProfilerCallback3_GarbageCollectionFinished(This)( (This)->lpVtbl -> GarbageCollectionFinished(This) )
#define ICorProfilerCallback3_FinalizeableObjectQueued(This,finalizerFlags,objectID)( (This)->lpVtbl -> FinalizeableObjectQueued(This,finalizerFlags,objectID) )
#define ICorProfilerCallback3_RootReferences2(This,cRootRefs,rootRefIds,rootKinds,rootFlags,rootIds)( (This)->lpVtbl -> RootReferences2(This,cRootRefs,rootRefIds,rootKinds,rootFlags,rootIds) )
#define ICorProfilerCallback3_HandleCreated(This,handleId,initialObjectId)( (This)->lpVtbl -> HandleCreated(This,handleId,initialObjectId) )
#define ICorProfilerCallback3_HandleDestroyed(This,handleId)( (This)->lpVtbl -> HandleDestroyed(This,handleId) )
#define ICorProfilerCallback3_InitializeForAttach(This,pCorProfilerInfoUnk,pvClientData,cbClientData)( (This)->lpVtbl -> InitializeForAttach(This,pCorProfilerInfoUnk,pvClientData,cbClientData) )
#define ICorProfilerCallback3_ProfilerAttachComplete(This)( (This)->lpVtbl -> ProfilerAttachComplete(This) )
#define ICorProfilerCallback3_ProfilerDetachSucceeded(This)( (This)->lpVtbl -> ProfilerDetachSucceeded(This) )
#endif
#endif
#ifndef __ICorProfilerInfo_INTERFACE_DEFINED__
#define __ICorProfilerInfo_INTERFACE_DEFINED__
extern const IID IID_ICorProfilerInfo;
typedef struct ICorProfilerInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICorProfilerInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICorProfilerInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICorProfilerInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetClassFromObject) (ICorProfilerInfo *This, ObjectID objectId, ClassID *pClassId);
	HRESULT(STDMETHODCALLTYPE *GetClassFromToken) (ICorProfilerInfo *This, ModuleID moduleId, mdTypeDef typeDef, ClassID *pClassId);
	HRESULT(STDMETHODCALLTYPE *GetCodeInfo) (ICorProfilerInfo *This, FunctionID functionId, LPCBYTE *pStart, ULONG *pcSize);
	HRESULT(STDMETHODCALLTYPE *GetEventMask) (ICorProfilerInfo *This, DWORD *pdwEvents);
	HRESULT(STDMETHODCALLTYPE *GetFunctionFromIP) (ICorProfilerInfo *This, LPCBYTE ip, FunctionID *pFunctionId);
	HRESULT(STDMETHODCALLTYPE *GetFunctionFromToken) (ICorProfilerInfo *This, ModuleID moduleId, mdToken token, FunctionID *pFunctionId);
	HRESULT(STDMETHODCALLTYPE *GetHandleFromThread) (ICorProfilerInfo *This, ThreadID threadId, HANDLE *phThread);
	HRESULT(STDMETHODCALLTYPE *GetObjectSize) (ICorProfilerInfo *This, ObjectID objectId, ULONG *pcSize);
	HRESULT(STDMETHODCALLTYPE *IsArrayClass) (ICorProfilerInfo *This, ClassID classId, CorElementType *pBaseElemType, ClassID *pBaseClassId, ULONG *pcRank);
	HRESULT(STDMETHODCALLTYPE *GetThreadInfo) (ICorProfilerInfo *This, ThreadID threadId, DWORD *pdwWin32ThreadId);
	HRESULT(STDMETHODCALLTYPE *GetCurrentThreadID) (ICorProfilerInfo *This, ThreadID *pThreadId);
	HRESULT(STDMETHODCALLTYPE *GetClassIDInfo) (ICorProfilerInfo *This, ClassID classId, ModuleID *pModuleId, mdTypeDef *pTypeDefToken);
	HRESULT(STDMETHODCALLTYPE *GetFunctionInfo) (ICorProfilerInfo *This, FunctionID functionId, ClassID *pClassId, ModuleID *pModuleId, mdToken *pToken);
	HRESULT(STDMETHODCALLTYPE *SetEventMask) (ICorProfilerInfo *This, DWORD dwEvents);
	HRESULT(STDMETHODCALLTYPE *SetEnterLeaveFunctionHooks) (ICorProfilerInfo *This, FunctionEnter *pFuncEnter, FunctionLeave *pFuncLeave, FunctionTailcall *pFuncTailcall);
	HRESULT(STDMETHODCALLTYPE *SetFunctionIDMapper) (ICorProfilerInfo *This, FunctionIDMapper *pFunc);
	HRESULT(STDMETHODCALLTYPE *GetTokenAndMetaDataFromFunction) (ICorProfilerInfo *This, FunctionID functionId, REFIID riid, IUnknown **ppImport, mdToken *pToken);
	HRESULT(STDMETHODCALLTYPE *GetModuleInfo) (ICorProfilerInfo *This, ModuleID moduleId, LPCBYTE *ppBaseLoadAddress, ULONG cchName, ULONG *pcchName, WCHAR szName[], AssemblyID *pAssemblyId);
	HRESULT(STDMETHODCALLTYPE *GetModuleMetaData) (ICorProfilerInfo *This, ModuleID moduleId, DWORD dwOpenFlags, REFIID riid, IUnknown **ppOut);
	HRESULT(STDMETHODCALLTYPE *GetILFunctionBody) (ICorProfilerInfo *This, ModuleID moduleId, mdMethodDef methodId, LPCBYTE *ppMethodHeader, ULONG *pcbMethodSize);
	HRESULT(STDMETHODCALLTYPE *GetILFunctionBodyAllocator) (ICorProfilerInfo *This, ModuleID moduleId, IMethodMalloc **ppMalloc);
	HRESULT(STDMETHODCALLTYPE *SetILFunctionBody) (ICorProfilerInfo *This, ModuleID moduleId, mdMethodDef methodid, LPCBYTE pbNewILMethodHeader);
	HRESULT(STDMETHODCALLTYPE *GetAppDomainInfo) (ICorProfilerInfo *This, AppDomainID appDomainId, ULONG cchName, ULONG *pcchName, WCHAR szName[], ProcessID *pProcessId);
	HRESULT(STDMETHODCALLTYPE *GetAssemblyInfo) (ICorProfilerInfo *This, AssemblyID assemblyId, ULONG cchName, ULONG *pcchName, WCHAR szName[], AppDomainID *pAppDomainId, ModuleID *pModuleId);
	HRESULT(STDMETHODCALLTYPE *SetFunctionReJIT) (ICorProfilerInfo *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ForceGC) (ICorProfilerInfo *This);
	HRESULT(STDMETHODCALLTYPE *SetILInstrumentedCodeMap) (ICorProfilerInfo *This, FunctionID functionId, BOOL fStartJit, ULONG cILMapEntries, COR_IL_MAP rgILMapEntries[]);
	HRESULT(STDMETHODCALLTYPE *GetInprocInspectionInterface) (ICorProfilerInfo *This, IUnknown **ppicd);
	HRESULT(STDMETHODCALLTYPE *GetInprocInspectionIThisThread) (ICorProfilerInfo *This, IUnknown **ppicd);
	HRESULT(STDMETHODCALLTYPE *GetThreadContext) (ICorProfilerInfo *This, ThreadID threadId, ContextID *pContextId);
	HRESULT(STDMETHODCALLTYPE *BeginInprocDebugging) (ICorProfilerInfo *This, BOOL fThisThreadOnly, DWORD *pdwProfilerContext);
	HRESULT(STDMETHODCALLTYPE *EndInprocDebugging) (ICorProfilerInfo *This, DWORD dwProfilerContext);
	HRESULT(STDMETHODCALLTYPE *GetILToNativeMapping) (ICorProfilerInfo *This, FunctionID functionId, ULONG32 cMap, ULONG32 *pcMap, COR_DEBUG_IL_TO_NATIVE_MAP map[]);
	END_INTERFACE
}  ICorProfilerInfoVtbl;
interface ICorProfilerInfo
{
	CONST_VTBL struct ICorProfilerInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorProfilerInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorProfilerInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorProfilerInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorProfilerInfo_GetClassFromObject(This,objectId,pClassId)( (This)->lpVtbl -> GetClassFromObject(This,objectId,pClassId) )
#define ICorProfilerInfo_GetClassFromToken(This,moduleId,typeDef,pClassId)( (This)->lpVtbl -> GetClassFromToken(This,moduleId,typeDef,pClassId) )
#define ICorProfilerInfo_GetCodeInfo(This,functionId,pStart,pcSize)( (This)->lpVtbl -> GetCodeInfo(This,functionId,pStart,pcSize) )
#define ICorProfilerInfo_GetEventMask(This,pdwEvents)( (This)->lpVtbl -> GetEventMask(This,pdwEvents) )
#define ICorProfilerInfo_GetFunctionFromIP(This,ip,pFunctionId)( (This)->lpVtbl -> GetFunctionFromIP(This,ip,pFunctionId) )
#define ICorProfilerInfo_GetFunctionFromToken(This,moduleId,token,pFunctionId)( (This)->lpVtbl -> GetFunctionFromToken(This,moduleId,token,pFunctionId) )
#define ICorProfilerInfo_GetHandleFromThread(This,threadId,phThread)( (This)->lpVtbl -> GetHandleFromThread(This,threadId,phThread) )
#define ICorProfilerInfo_GetObjectSize(This,objectId,pcSize)( (This)->lpVtbl -> GetObjectSize(This,objectId,pcSize) )
#define ICorProfilerInfo_IsArrayClass(This,classId,pBaseElemType,pBaseClassId,pcRank)( (This)->lpVtbl -> IsArrayClass(This,classId,pBaseElemType,pBaseClassId,pcRank) )
#define ICorProfilerInfo_GetThreadInfo(This,threadId,pdwWin32ThreadId)( (This)->lpVtbl -> GetThreadInfo(This,threadId,pdwWin32ThreadId) )
#define ICorProfilerInfo_GetCurrentThreadID(This,pThreadId)( (This)->lpVtbl -> GetCurrentThreadID(This,pThreadId) )
#define ICorProfilerInfo_GetClassIDInfo(This,classId,pModuleId,pTypeDefToken)( (This)->lpVtbl -> GetClassIDInfo(This,classId,pModuleId,pTypeDefToken) )
#define ICorProfilerInfo_GetFunctionInfo(This,functionId,pClassId,pModuleId,pToken)( (This)->lpVtbl -> GetFunctionInfo(This,functionId,pClassId,pModuleId,pToken) )
#define ICorProfilerInfo_SetEventMask(This,dwEvents)( (This)->lpVtbl -> SetEventMask(This,dwEvents) )
#define ICorProfilerInfo_SetEnterLeaveFunctionHooks(This,pFuncEnter,pFuncLeave,pFuncTailcall)( (This)->lpVtbl -> SetEnterLeaveFunctionHooks(This,pFuncEnter,pFuncLeave,pFuncTailcall) )
#define ICorProfilerInfo_SetFunctionIDMapper(This,pFunc)( (This)->lpVtbl -> SetFunctionIDMapper(This,pFunc) )
#define ICorProfilerInfo_GetTokenAndMetaDataFromFunction(This,functionId,riid,ppImport,pToken)( (This)->lpVtbl -> GetTokenAndMetaDataFromFunction(This,functionId,riid,ppImport,pToken) )
#define ICorProfilerInfo_GetModuleInfo(This,moduleId,ppBaseLoadAddress,cchName,pcchName,szName,pAssemblyId)( (This)->lpVtbl -> GetModuleInfo(This,moduleId,ppBaseLoadAddress,cchName,pcchName,szName,pAssemblyId) )
#define ICorProfilerInfo_GetModuleMetaData(This,moduleId,dwOpenFlags,riid,ppOut)( (This)->lpVtbl -> GetModuleMetaData(This,moduleId,dwOpenFlags,riid,ppOut) )
#define ICorProfilerInfo_GetILFunctionBody(This,moduleId,methodId,ppMethodHeader,pcbMethodSize)( (This)->lpVtbl -> GetILFunctionBody(This,moduleId,methodId,ppMethodHeader,pcbMethodSize) )
#define ICorProfilerInfo_GetILFunctionBodyAllocator(This,moduleId,ppMalloc)( (This)->lpVtbl -> GetILFunctionBodyAllocator(This,moduleId,ppMalloc) )
#define ICorProfilerInfo_SetILFunctionBody(This,moduleId,methodid,pbNewILMethodHeader)( (This)->lpVtbl -> SetILFunctionBody(This,moduleId,methodid,pbNewILMethodHeader) )
#define ICorProfilerInfo_GetAppDomainInfo(This,appDomainId,cchName,pcchName,szName,pProcessId)( (This)->lpVtbl -> GetAppDomainInfo(This,appDomainId,cchName,pcchName,szName,pProcessId) )
#define ICorProfilerInfo_GetAssemblyInfo(This,assemblyId,cchName,pcchName,szName,pAppDomainId,pModuleId)( (This)->lpVtbl -> GetAssemblyInfo(This,assemblyId,cchName,pcchName,szName,pAppDomainId,pModuleId) )
#define ICorProfilerInfo_SetFunctionReJIT(This,functionId)( (This)->lpVtbl -> SetFunctionReJIT(This,functionId) )
#define ICorProfilerInfo_ForceGC(This)( (This)->lpVtbl -> ForceGC(This) )
#define ICorProfilerInfo_SetILInstrumentedCodeMap(This,functionId,fStartJit,cILMapEntries,rgILMapEntries)( (This)->lpVtbl -> SetILInstrumentedCodeMap(This,functionId,fStartJit,cILMapEntries,rgILMapEntries) )
#define ICorProfilerInfo_GetInprocInspectionInterface(This,ppicd)( (This)->lpVtbl -> GetInprocInspectionInterface(This,ppicd) )
#define ICorProfilerInfo_GetInprocInspectionIThisThread(This,ppicd)( (This)->lpVtbl -> GetInprocInspectionIThisThread(This,ppicd) )
#define ICorProfilerInfo_GetThreadContext(This,threadId,pContextId)( (This)->lpVtbl -> GetThreadContext(This,threadId,pContextId) )
#define ICorProfilerInfo_BeginInprocDebugging(This,fThisThreadOnly,pdwProfilerContext)( (This)->lpVtbl -> BeginInprocDebugging(This,fThisThreadOnly,pdwProfilerContext) )
#define ICorProfilerInfo_EndInprocDebugging(This,dwProfilerContext)( (This)->lpVtbl -> EndInprocDebugging(This,dwProfilerContext) )
#define ICorProfilerInfo_GetILToNativeMapping(This,functionId,cMap,pcMap,map)( (This)->lpVtbl -> GetILToNativeMapping(This,functionId,cMap,pcMap,map) )
#endif
#endif
#ifndef __ICorProfilerInfo2_INTERFACE_DEFINED__
#define __ICorProfilerInfo2_INTERFACE_DEFINED__
extern const IID IID_ICorProfilerInfo2;
typedef struct ICorProfilerInfo2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICorProfilerInfo2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICorProfilerInfo2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICorProfilerInfo2 *This);
	HRESULT(STDMETHODCALLTYPE *GetClassFromObject) (ICorProfilerInfo2 *This, ObjectID objectId, ClassID *pClassId);
	HRESULT(STDMETHODCALLTYPE *GetClassFromToken) (ICorProfilerInfo2 *This, ModuleID moduleId, mdTypeDef typeDef, ClassID *pClassId);
	HRESULT(STDMETHODCALLTYPE *GetCodeInfo) (ICorProfilerInfo2 *This, FunctionID functionId, LPCBYTE *pStart, ULONG *pcSize);
	HRESULT(STDMETHODCALLTYPE *GetEventMask) (ICorProfilerInfo2 *This, DWORD *pdwEvents);
	HRESULT(STDMETHODCALLTYPE *GetFunctionFromIP) (ICorProfilerInfo2 *This, LPCBYTE ip, FunctionID *pFunctionId);
	HRESULT(STDMETHODCALLTYPE *GetFunctionFromToken) (ICorProfilerInfo2 *This, ModuleID moduleId, mdToken token, FunctionID *pFunctionId);
	HRESULT(STDMETHODCALLTYPE *GetHandleFromThread) (ICorProfilerInfo2 *This, ThreadID threadId, HANDLE *phThread);
	HRESULT(STDMETHODCALLTYPE *GetObjectSize) (ICorProfilerInfo2 *This, ObjectID objectId, ULONG *pcSize);
	HRESULT(STDMETHODCALLTYPE *IsArrayClass) (ICorProfilerInfo2 *This, ClassID classId, CorElementType *pBaseElemType, ClassID *pBaseClassId, ULONG *pcRank);
	HRESULT(STDMETHODCALLTYPE *GetThreadInfo) (ICorProfilerInfo2 *This, ThreadID threadId, DWORD *pdwWin32ThreadId);
	HRESULT(STDMETHODCALLTYPE *GetCurrentThreadID) (ICorProfilerInfo2 *This, ThreadID *pThreadId);
	HRESULT(STDMETHODCALLTYPE *GetClassIDInfo) (ICorProfilerInfo2 *This, ClassID classId, ModuleID *pModuleId, mdTypeDef *pTypeDefToken);
	HRESULT(STDMETHODCALLTYPE *GetFunctionInfo) (ICorProfilerInfo2 *This, FunctionID functionId, ClassID *pClassId, ModuleID *pModuleId, mdToken *pToken);
	HRESULT(STDMETHODCALLTYPE *SetEventMask) (ICorProfilerInfo2 *This, DWORD dwEvents);
	HRESULT(STDMETHODCALLTYPE *SetEnterLeaveFunctionHooks) (ICorProfilerInfo2 *This, FunctionEnter *pFuncEnter, FunctionLeave *pFuncLeave, FunctionTailcall *pFuncTailcall);
	HRESULT(STDMETHODCALLTYPE *SetFunctionIDMapper) (ICorProfilerInfo2 *This, FunctionIDMapper *pFunc);
	HRESULT(STDMETHODCALLTYPE *GetTokenAndMetaDataFromFunction) (ICorProfilerInfo2 *This, FunctionID functionId, REFIID riid, IUnknown **ppImport, mdToken *pToken);
	HRESULT(STDMETHODCALLTYPE *GetModuleInfo) (ICorProfilerInfo2 *This, ModuleID moduleId, LPCBYTE *ppBaseLoadAddress, ULONG cchName, ULONG *pcchName, WCHAR szName[], AssemblyID *pAssemblyId);
	HRESULT(STDMETHODCALLTYPE *GetModuleMetaData) (ICorProfilerInfo2 *This, ModuleID moduleId, DWORD dwOpenFlags, REFIID riid, IUnknown **ppOut);
	HRESULT(STDMETHODCALLTYPE *GetILFunctionBody) (ICorProfilerInfo2 *This, ModuleID moduleId, mdMethodDef methodId, LPCBYTE *ppMethodHeader, ULONG *pcbMethodSize);
	HRESULT(STDMETHODCALLTYPE *GetILFunctionBodyAllocator) (ICorProfilerInfo2 *This, ModuleID moduleId, IMethodMalloc **ppMalloc);
	HRESULT(STDMETHODCALLTYPE *SetILFunctionBody) (ICorProfilerInfo2 *This, ModuleID moduleId, mdMethodDef methodid, LPCBYTE pbNewILMethodHeader);
	HRESULT(STDMETHODCALLTYPE *GetAppDomainInfo) (ICorProfilerInfo2 *This, AppDomainID appDomainId, ULONG cchName, ULONG *pcchName, WCHAR szName[], ProcessID *pProcessId);
	HRESULT(STDMETHODCALLTYPE *GetAssemblyInfo) (ICorProfilerInfo2 *This, AssemblyID assemblyId, ULONG cchName, ULONG *pcchName, WCHAR szName[], AppDomainID *pAppDomainId, ModuleID *pModuleId);
	HRESULT(STDMETHODCALLTYPE *SetFunctionReJIT) (ICorProfilerInfo2 *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ForceGC) (ICorProfilerInfo2 *This);
	HRESULT(STDMETHODCALLTYPE *SetILInstrumentedCodeMap) (ICorProfilerInfo2 *This, FunctionID functionId, BOOL fStartJit, ULONG cILMapEntries, COR_IL_MAP rgILMapEntries[]);
	HRESULT(STDMETHODCALLTYPE *GetInprocInspectionInterface) (ICorProfilerInfo2 *This, IUnknown **ppicd);
	HRESULT(STDMETHODCALLTYPE *GetInprocInspectionIThisThread) (ICorProfilerInfo2 *This, IUnknown **ppicd);
	HRESULT(STDMETHODCALLTYPE *GetThreadContext) (ICorProfilerInfo2 *This, ThreadID threadId, ContextID *pContextId);
	HRESULT(STDMETHODCALLTYPE *BeginInprocDebugging) (ICorProfilerInfo2 *This, BOOL fThisThreadOnly, DWORD *pdwProfilerContext);
	HRESULT(STDMETHODCALLTYPE *EndInprocDebugging) (ICorProfilerInfo2 *This, DWORD dwProfilerContext);
	HRESULT(STDMETHODCALLTYPE *GetILToNativeMapping) (ICorProfilerInfo2 *This, FunctionID functionId, ULONG32 cMap, ULONG32 *pcMap, COR_DEBUG_IL_TO_NATIVE_MAP map[]);
	HRESULT(STDMETHODCALLTYPE *DoStackSnapshot) (ICorProfilerInfo2 *This, ThreadID thread, StackSnapshotCallback *callback, ULONG32 infoFlags, void *clientData, BYTE context[], ULONG32 contextSize);
	HRESULT(STDMETHODCALLTYPE *SetEnterLeaveFunctionHooks2) (ICorProfilerInfo2 *This, FunctionEnter2 *pFuncEnter, FunctionLeave2 *pFuncLeave, FunctionTailcall2 *pFuncTailcall);
	HRESULT(STDMETHODCALLTYPE *GetFunctionInfo2) (ICorProfilerInfo2 *This, FunctionID funcId, COR_PRF_FRAME_INFO frameInfo, ClassID *pClassId, ModuleID *pModuleId, mdToken *pToken, ULONG32 cTypeArgs, ULONG32 *pcTypeArgs, ClassID typeArgs[]);
	HRESULT(STDMETHODCALLTYPE *GetStringLayout) (ICorProfilerInfo2 *This, ULONG *pBufferLengthOffset, ULONG *pStringLengthOffset, ULONG *pBufferOffset);
	HRESULT(STDMETHODCALLTYPE *GetClassLayout) (ICorProfilerInfo2 *This, ClassID classID, COR_FIELD_OFFSET rFieldOffset[], ULONG cFieldOffset, ULONG *pcFieldOffset, ULONG *pulClassSize);
	HRESULT(STDMETHODCALLTYPE *GetClassIDInfo2) (ICorProfilerInfo2 *This, ClassID classId, ModuleID *pModuleId, mdTypeDef *pTypeDefToken, ClassID *pParentClassId, ULONG32 cNumTypeArgs, ULONG32 *pcNumTypeArgs, ClassID typeArgs[]);
	HRESULT(STDMETHODCALLTYPE *GetCodeInfo2) (ICorProfilerInfo2 *This, FunctionID functionID, ULONG32 cCodeInfos, ULONG32 *pcCodeInfos, COR_PRF_CODE_INFO codeInfos[]);
	HRESULT(STDMETHODCALLTYPE *GetClassFromTokenAndTypeArgs) (ICorProfilerInfo2 *This, ModuleID moduleID, mdTypeDef typeDef, ULONG32 cTypeArgs, ClassID typeArgs[], ClassID *pClassID);
	HRESULT(STDMETHODCALLTYPE *GetFunctionFromTokenAndTypeArgs) (ICorProfilerInfo2 *This, ModuleID moduleID, mdMethodDef funcDef, ClassID classId, ULONG32 cTypeArgs, ClassID typeArgs[], FunctionID *pFunctionID);
	HRESULT(STDMETHODCALLTYPE *EnumModuleFrozenObjects) (ICorProfilerInfo2 *This, ModuleID moduleID, ICorProfilerObjectEnum **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetArrayObjectInfo) (ICorProfilerInfo2 *This, ObjectID objectId, ULONG32 cDimensions, ULONG32 pDimensionSizes[], int pDimensionLowerBounds[], BYTE **ppData);
	HRESULT(STDMETHODCALLTYPE *GetBoxClassLayout) (ICorProfilerInfo2 *This, ClassID classId, ULONG32 *pBufferOffset);
	HRESULT(STDMETHODCALLTYPE *GetThreadAppDomain) (ICorProfilerInfo2 *This, ThreadID threadId, AppDomainID *pAppDomainId);
	HRESULT(STDMETHODCALLTYPE *GetRVAStaticAddress) (ICorProfilerInfo2 *This, ClassID classId, mdFieldDef fieldToken, void **ppAddress);
	HRESULT(STDMETHODCALLTYPE *GetAppDomainStaticAddress) (ICorProfilerInfo2 *This, ClassID classId, mdFieldDef fieldToken, AppDomainID appDomainId, void **ppAddress);
	HRESULT(STDMETHODCALLTYPE *GetThreadStaticAddress) (ICorProfilerInfo2 *This, ClassID classId, mdFieldDef fieldToken, ThreadID threadId, void **ppAddress);
	HRESULT(STDMETHODCALLTYPE *GetContextStaticAddress) (ICorProfilerInfo2 *This, ClassID classId, mdFieldDef fieldToken, ContextID contextId, void **ppAddress);
	HRESULT(STDMETHODCALLTYPE *GetStaticFieldInfo) (ICorProfilerInfo2 *This, ClassID classId, mdFieldDef fieldToken, COR_PRF_STATIC_TYPE *pFieldInfo);
	HRESULT(STDMETHODCALLTYPE *GetGenerationBounds) (ICorProfilerInfo2 *This, ULONG cObjectRanges, ULONG *pcObjectRanges, COR_PRF_GC_GENERATION_RANGE ranges[]);
	HRESULT(STDMETHODCALLTYPE *GetObjectGeneration) (ICorProfilerInfo2 *This, ObjectID objectId, COR_PRF_GC_GENERATION_RANGE *range);
	HRESULT(STDMETHODCALLTYPE *GetNotifiedExceptionClauseInfo) (ICorProfilerInfo2 *This, COR_PRF_EX_CLAUSE_INFO *pinfo);
	END_INTERFACE
}  ICorProfilerInfo2Vtbl;
interface ICorProfilerInfo2
{
	CONST_VTBL struct ICorProfilerInfo2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorProfilerInfo2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorProfilerInfo2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorProfilerInfo2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorProfilerInfo2_GetClassFromObject(This,objectId,pClassId)( (This)->lpVtbl -> GetClassFromObject(This,objectId,pClassId) )
#define ICorProfilerInfo2_GetClassFromToken(This,moduleId,typeDef,pClassId)( (This)->lpVtbl -> GetClassFromToken(This,moduleId,typeDef,pClassId) )
#define ICorProfilerInfo2_GetCodeInfo(This,functionId,pStart,pcSize)( (This)->lpVtbl -> GetCodeInfo(This,functionId,pStart,pcSize) )
#define ICorProfilerInfo2_GetEventMask(This,pdwEvents)( (This)->lpVtbl -> GetEventMask(This,pdwEvents) )
#define ICorProfilerInfo2_GetFunctionFromIP(This,ip,pFunctionId)( (This)->lpVtbl -> GetFunctionFromIP(This,ip,pFunctionId) )
#define ICorProfilerInfo2_GetFunctionFromToken(This,moduleId,token,pFunctionId)( (This)->lpVtbl -> GetFunctionFromToken(This,moduleId,token,pFunctionId) )
#define ICorProfilerInfo2_GetHandleFromThread(This,threadId,phThread)( (This)->lpVtbl -> GetHandleFromThread(This,threadId,phThread) )
#define ICorProfilerInfo2_GetObjectSize(This,objectId,pcSize)( (This)->lpVtbl -> GetObjectSize(This,objectId,pcSize) )
#define ICorProfilerInfo2_IsArrayClass(This,classId,pBaseElemType,pBaseClassId,pcRank)( (This)->lpVtbl -> IsArrayClass(This,classId,pBaseElemType,pBaseClassId,pcRank) )
#define ICorProfilerInfo2_GetThreadInfo(This,threadId,pdwWin32ThreadId)( (This)->lpVtbl -> GetThreadInfo(This,threadId,pdwWin32ThreadId) )
#define ICorProfilerInfo2_GetCurrentThreadID(This,pThreadId)( (This)->lpVtbl -> GetCurrentThreadID(This,pThreadId) )
#define ICorProfilerInfo2_GetClassIDInfo(This,classId,pModuleId,pTypeDefToken)( (This)->lpVtbl -> GetClassIDInfo(This,classId,pModuleId,pTypeDefToken) )
#define ICorProfilerInfo2_GetFunctionInfo(This,functionId,pClassId,pModuleId,pToken)( (This)->lpVtbl -> GetFunctionInfo(This,functionId,pClassId,pModuleId,pToken) )
#define ICorProfilerInfo2_SetEventMask(This,dwEvents)( (This)->lpVtbl -> SetEventMask(This,dwEvents) )
#define ICorProfilerInfo2_SetEnterLeaveFunctionHooks(This,pFuncEnter,pFuncLeave,pFuncTailcall)( (This)->lpVtbl -> SetEnterLeaveFunctionHooks(This,pFuncEnter,pFuncLeave,pFuncTailcall) )
#define ICorProfilerInfo2_SetFunctionIDMapper(This,pFunc)( (This)->lpVtbl -> SetFunctionIDMapper(This,pFunc) )
#define ICorProfilerInfo2_GetTokenAndMetaDataFromFunction(This,functionId,riid,ppImport,pToken)( (This)->lpVtbl -> GetTokenAndMetaDataFromFunction(This,functionId,riid,ppImport,pToken) )
#define ICorProfilerInfo2_GetModuleInfo(This,moduleId,ppBaseLoadAddress,cchName,pcchName,szName,pAssemblyId)( (This)->lpVtbl -> GetModuleInfo(This,moduleId,ppBaseLoadAddress,cchName,pcchName,szName,pAssemblyId) )
#define ICorProfilerInfo2_GetModuleMetaData(This,moduleId,dwOpenFlags,riid,ppOut)( (This)->lpVtbl -> GetModuleMetaData(This,moduleId,dwOpenFlags,riid,ppOut) )
#define ICorProfilerInfo2_GetILFunctionBody(This,moduleId,methodId,ppMethodHeader,pcbMethodSize)( (This)->lpVtbl -> GetILFunctionBody(This,moduleId,methodId,ppMethodHeader,pcbMethodSize) )
#define ICorProfilerInfo2_GetILFunctionBodyAllocator(This,moduleId,ppMalloc)( (This)->lpVtbl -> GetILFunctionBodyAllocator(This,moduleId,ppMalloc) )
#define ICorProfilerInfo2_SetILFunctionBody(This,moduleId,methodid,pbNewILMethodHeader)( (This)->lpVtbl -> SetILFunctionBody(This,moduleId,methodid,pbNewILMethodHeader) )
#define ICorProfilerInfo2_GetAppDomainInfo(This,appDomainId,cchName,pcchName,szName,pProcessId)( (This)->lpVtbl -> GetAppDomainInfo(This,appDomainId,cchName,pcchName,szName,pProcessId) )
#define ICorProfilerInfo2_GetAssemblyInfo(This,assemblyId,cchName,pcchName,szName,pAppDomainId,pModuleId)( (This)->lpVtbl -> GetAssemblyInfo(This,assemblyId,cchName,pcchName,szName,pAppDomainId,pModuleId) )
#define ICorProfilerInfo2_SetFunctionReJIT(This,functionId)( (This)->lpVtbl -> SetFunctionReJIT(This,functionId) )
#define ICorProfilerInfo2_ForceGC(This)( (This)->lpVtbl -> ForceGC(This) )
#define ICorProfilerInfo2_SetILInstrumentedCodeMap(This,functionId,fStartJit,cILMapEntries,rgILMapEntries)( (This)->lpVtbl -> SetILInstrumentedCodeMap(This,functionId,fStartJit,cILMapEntries,rgILMapEntries) )
#define ICorProfilerInfo2_GetInprocInspectionInterface(This,ppicd)( (This)->lpVtbl -> GetInprocInspectionInterface(This,ppicd) )
#define ICorProfilerInfo2_GetInprocInspectionIThisThread(This,ppicd)( (This)->lpVtbl -> GetInprocInspectionIThisThread(This,ppicd) )
#define ICorProfilerInfo2_GetThreadContext(This,threadId,pContextId)( (This)->lpVtbl -> GetThreadContext(This,threadId,pContextId) )
#define ICorProfilerInfo2_BeginInprocDebugging(This,fThisThreadOnly,pdwProfilerContext)( (This)->lpVtbl -> BeginInprocDebugging(This,fThisThreadOnly,pdwProfilerContext) )
#define ICorProfilerInfo2_EndInprocDebugging(This,dwProfilerContext)( (This)->lpVtbl -> EndInprocDebugging(This,dwProfilerContext) )
#define ICorProfilerInfo2_GetILToNativeMapping(This,functionId,cMap,pcMap,map)( (This)->lpVtbl -> GetILToNativeMapping(This,functionId,cMap,pcMap,map) )
#define ICorProfilerInfo2_DoStackSnapshot(This,thread,callback,infoFlags,clientData,context,contextSize)( (This)->lpVtbl -> DoStackSnapshot(This,thread,callback,infoFlags,clientData,context,contextSize) )
#define ICorProfilerInfo2_SetEnterLeaveFunctionHooks2(This,pFuncEnter,pFuncLeave,pFuncTailcall)( (This)->lpVtbl -> SetEnterLeaveFunctionHooks2(This,pFuncEnter,pFuncLeave,pFuncTailcall) )
#define ICorProfilerInfo2_GetFunctionInfo2(This,funcId,frameInfo,pClassId,pModuleId,pToken,cTypeArgs,pcTypeArgs,typeArgs)( (This)->lpVtbl -> GetFunctionInfo2(This,funcId,frameInfo,pClassId,pModuleId,pToken,cTypeArgs,pcTypeArgs,typeArgs) )
#define ICorProfilerInfo2_GetStringLayout(This,pBufferLengthOffset,pStringLengthOffset,pBufferOffset)( (This)->lpVtbl -> GetStringLayout(This,pBufferLengthOffset,pStringLengthOffset,pBufferOffset) )
#define ICorProfilerInfo2_GetClassLayout(This,classID,rFieldOffset,cFieldOffset,pcFieldOffset,pulClassSize)( (This)->lpVtbl -> GetClassLayout(This,classID,rFieldOffset,cFieldOffset,pcFieldOffset,pulClassSize) )
#define ICorProfilerInfo2_GetClassIDInfo2(This,classId,pModuleId,pTypeDefToken,pParentClassId,cNumTypeArgs,pcNumTypeArgs,typeArgs)( (This)->lpVtbl -> GetClassIDInfo2(This,classId,pModuleId,pTypeDefToken,pParentClassId,cNumTypeArgs,pcNumTypeArgs,typeArgs) )
#define ICorProfilerInfo2_GetCodeInfo2(This,functionID,cCodeInfos,pcCodeInfos,codeInfos)( (This)->lpVtbl -> GetCodeInfo2(This,functionID,cCodeInfos,pcCodeInfos,codeInfos) )
#define ICorProfilerInfo2_GetClassFromTokenAndTypeArgs(This,moduleID,typeDef,cTypeArgs,typeArgs,pClassID)( (This)->lpVtbl -> GetClassFromTokenAndTypeArgs(This,moduleID,typeDef,cTypeArgs,typeArgs,pClassID) )
#define ICorProfilerInfo2_GetFunctionFromTokenAndTypeArgs(This,moduleID,funcDef,classId,cTypeArgs,typeArgs,pFunctionID)( (This)->lpVtbl -> GetFunctionFromTokenAndTypeArgs(This,moduleID,funcDef,classId,cTypeArgs,typeArgs,pFunctionID) )
#define ICorProfilerInfo2_EnumModuleFrozenObjects(This,moduleID,ppEnum)( (This)->lpVtbl -> EnumModuleFrozenObjects(This,moduleID,ppEnum) )
#define ICorProfilerInfo2_GetArrayObjectInfo(This,objectId,cDimensions,pDimensionSizes,pDimensionLowerBounds,ppData)( (This)->lpVtbl -> GetArrayObjectInfo(This,objectId,cDimensions,pDimensionSizes,pDimensionLowerBounds,ppData) )
#define ICorProfilerInfo2_GetBoxClassLayout(This,classId,pBufferOffset)( (This)->lpVtbl -> GetBoxClassLayout(This,classId,pBufferOffset) )
#define ICorProfilerInfo2_GetThreadAppDomain(This,threadId,pAppDomainId)( (This)->lpVtbl -> GetThreadAppDomain(This,threadId,pAppDomainId) )
#define ICorProfilerInfo2_GetRVAStaticAddress(This,classId,fieldToken,ppAddress)( (This)->lpVtbl -> GetRVAStaticAddress(This,classId,fieldToken,ppAddress) )
#define ICorProfilerInfo2_GetAppDomainStaticAddress(This,classId,fieldToken,appDomainId,ppAddress)( (This)->lpVtbl -> GetAppDomainStaticAddress(This,classId,fieldToken,appDomainId,ppAddress) )
#define ICorProfilerInfo2_GetThreadStaticAddress(This,classId,fieldToken,threadId,ppAddress)( (This)->lpVtbl -> GetThreadStaticAddress(This,classId,fieldToken,threadId,ppAddress) )
#define ICorProfilerInfo2_GetContextStaticAddress(This,classId,fieldToken,contextId,ppAddress)( (This)->lpVtbl -> GetContextStaticAddress(This,classId,fieldToken,contextId,ppAddress) )
#define ICorProfilerInfo2_GetStaticFieldInfo(This,classId,fieldToken,pFieldInfo)( (This)->lpVtbl -> GetStaticFieldInfo(This,classId,fieldToken,pFieldInfo) )
#define ICorProfilerInfo2_GetGenerationBounds(This,cObjectRanges,pcObjectRanges,ranges)( (This)->lpVtbl -> GetGenerationBounds(This,cObjectRanges,pcObjectRanges,ranges) )
#define ICorProfilerInfo2_GetObjectGeneration(This,objectId,range)( (This)->lpVtbl -> GetObjectGeneration(This,objectId,range) )
#define ICorProfilerInfo2_GetNotifiedExceptionClauseInfo(This,pinfo)( (This)->lpVtbl -> GetNotifiedExceptionClauseInfo(This,pinfo) )
#endif
#endif
#ifndef __ICorProfilerInfo3_INTERFACE_DEFINED__
#define __ICorProfilerInfo3_INTERFACE_DEFINED__
extern const IID IID_ICorProfilerInfo3;
typedef struct ICorProfilerInfo3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICorProfilerInfo3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICorProfilerInfo3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICorProfilerInfo3 *This);
	HRESULT(STDMETHODCALLTYPE *GetClassFromObject) (ICorProfilerInfo3 *This, ObjectID objectId, ClassID *pClassId);
	HRESULT(STDMETHODCALLTYPE *GetClassFromToken) (ICorProfilerInfo3 *This, ModuleID moduleId, mdTypeDef typeDef, ClassID *pClassId);
	HRESULT(STDMETHODCALLTYPE *GetCodeInfo) (ICorProfilerInfo3 *This, FunctionID functionId, LPCBYTE *pStart, ULONG *pcSize);
	HRESULT(STDMETHODCALLTYPE *GetEventMask) (ICorProfilerInfo3 *This, DWORD *pdwEvents);
	HRESULT(STDMETHODCALLTYPE *GetFunctionFromIP) (ICorProfilerInfo3 *This, LPCBYTE ip, FunctionID *pFunctionId);
	HRESULT(STDMETHODCALLTYPE *GetFunctionFromToken) (ICorProfilerInfo3 *This, ModuleID moduleId, mdToken token, FunctionID *pFunctionId);
	HRESULT(STDMETHODCALLTYPE *GetHandleFromThread) (ICorProfilerInfo3 *This, ThreadID threadId, HANDLE *phThread);
	HRESULT(STDMETHODCALLTYPE *GetObjectSize) (ICorProfilerInfo3 *This, ObjectID objectId, ULONG *pcSize);
	HRESULT(STDMETHODCALLTYPE *IsArrayClass) (ICorProfilerInfo3 *This, ClassID classId, CorElementType *pBaseElemType, ClassID *pBaseClassId, ULONG *pcRank);
	HRESULT(STDMETHODCALLTYPE *GetThreadInfo) (ICorProfilerInfo3 *This, ThreadID threadId, DWORD *pdwWin32ThreadId);
	HRESULT(STDMETHODCALLTYPE *GetCurrentThreadID) (ICorProfilerInfo3 *This, ThreadID *pThreadId);
	HRESULT(STDMETHODCALLTYPE *GetClassIDInfo) (ICorProfilerInfo3 *This, ClassID classId, ModuleID *pModuleId, mdTypeDef *pTypeDefToken);
	HRESULT(STDMETHODCALLTYPE *GetFunctionInfo) (ICorProfilerInfo3 *This, FunctionID functionId, ClassID *pClassId, ModuleID *pModuleId, mdToken *pToken);
	HRESULT(STDMETHODCALLTYPE *SetEventMask) (ICorProfilerInfo3 *This, DWORD dwEvents);
	HRESULT(STDMETHODCALLTYPE *SetEnterLeaveFunctionHooks) (ICorProfilerInfo3 *This, FunctionEnter *pFuncEnter, FunctionLeave *pFuncLeave, FunctionTailcall *pFuncTailcall);
	HRESULT(STDMETHODCALLTYPE *SetFunctionIDMapper) (ICorProfilerInfo3 *This, FunctionIDMapper *pFunc);
	HRESULT(STDMETHODCALLTYPE *GetTokenAndMetaDataFromFunction) (ICorProfilerInfo3 *This, FunctionID functionId, REFIID riid, IUnknown **ppImport, mdToken *pToken);
	HRESULT(STDMETHODCALLTYPE *GetModuleInfo) (ICorProfilerInfo3 *This, ModuleID moduleId, LPCBYTE *ppBaseLoadAddress, ULONG cchName, ULONG *pcchName, WCHAR szName[], AssemblyID *pAssemblyId);
	HRESULT(STDMETHODCALLTYPE *GetModuleMetaData) (ICorProfilerInfo3 *This, ModuleID moduleId, DWORD dwOpenFlags, REFIID riid, IUnknown **ppOut);
	HRESULT(STDMETHODCALLTYPE *GetILFunctionBody) (ICorProfilerInfo3 *This, ModuleID moduleId, mdMethodDef methodId, LPCBYTE *ppMethodHeader, ULONG *pcbMethodSize);
	HRESULT(STDMETHODCALLTYPE *GetILFunctionBodyAllocator) (ICorProfilerInfo3 *This, ModuleID moduleId, IMethodMalloc **ppMalloc);
	HRESULT(STDMETHODCALLTYPE *SetILFunctionBody) (ICorProfilerInfo3 *This, ModuleID moduleId, mdMethodDef methodid, LPCBYTE pbNewILMethodHeader);
	HRESULT(STDMETHODCALLTYPE *GetAppDomainInfo) (ICorProfilerInfo3 *This, AppDomainID appDomainId, ULONG cchName, ULONG *pcchName, WCHAR szName[], ProcessID *pProcessId);
	HRESULT(STDMETHODCALLTYPE *GetAssemblyInfo) (ICorProfilerInfo3 *This, AssemblyID assemblyId, ULONG cchName, ULONG *pcchName, WCHAR szName[], AppDomainID *pAppDomainId, ModuleID *pModuleId);
	HRESULT(STDMETHODCALLTYPE *SetFunctionReJIT) (ICorProfilerInfo3 *This, FunctionID functionId);
	HRESULT(STDMETHODCALLTYPE *ForceGC) (ICorProfilerInfo3 *This);
	HRESULT(STDMETHODCALLTYPE *SetILInstrumentedCodeMap) (ICorProfilerInfo3 *This, FunctionID functionId, BOOL fStartJit, ULONG cILMapEntries, COR_IL_MAP rgILMapEntries[]);
	HRESULT(STDMETHODCALLTYPE *GetInprocInspectionInterface) (ICorProfilerInfo3 *This, IUnknown **ppicd);
	HRESULT(STDMETHODCALLTYPE *GetInprocInspectionIThisThread) (ICorProfilerInfo3 *This, IUnknown **ppicd);
	HRESULT(STDMETHODCALLTYPE *GetThreadContext) (ICorProfilerInfo3 *This, ThreadID threadId, ContextID *pContextId);
	HRESULT(STDMETHODCALLTYPE *BeginInprocDebugging) (ICorProfilerInfo3 *This, BOOL fThisThreadOnly, DWORD *pdwProfilerContext);
	HRESULT(STDMETHODCALLTYPE *EndInprocDebugging) (ICorProfilerInfo3 *This, DWORD dwProfilerContext);
	HRESULT(STDMETHODCALLTYPE *GetILToNativeMapping) (ICorProfilerInfo3 *This, FunctionID functionId, ULONG32 cMap, ULONG32 *pcMap, COR_DEBUG_IL_TO_NATIVE_MAP map[]);
	HRESULT(STDMETHODCALLTYPE *DoStackSnapshot) (ICorProfilerInfo3 *This, ThreadID thread, StackSnapshotCallback *callback, ULONG32 infoFlags, void *clientData, BYTE context[], ULONG32 contextSize);
	HRESULT(STDMETHODCALLTYPE *SetEnterLeaveFunctionHooks2) (ICorProfilerInfo3 *This, FunctionEnter2 *pFuncEnter, FunctionLeave2 *pFuncLeave, FunctionTailcall2 *pFuncTailcall);
	HRESULT(STDMETHODCALLTYPE *GetFunctionInfo2) (ICorProfilerInfo3 *This, FunctionID funcId, COR_PRF_FRAME_INFO frameInfo, ClassID *pClassId, ModuleID *pModuleId, mdToken *pToken, ULONG32 cTypeArgs, ULONG32 *pcTypeArgs, ClassID typeArgs[]);
	HRESULT(STDMETHODCALLTYPE *GetStringLayout) (ICorProfilerInfo3 *This, ULONG *pBufferLengthOffset, ULONG *pStringLengthOffset, ULONG *pBufferOffset);
	HRESULT(STDMETHODCALLTYPE *GetClassLayout) (ICorProfilerInfo3 *This, ClassID classID, COR_FIELD_OFFSET rFieldOffset[], ULONG cFieldOffset, ULONG *pcFieldOffset, ULONG *pulClassSize);
	HRESULT(STDMETHODCALLTYPE *GetClassIDInfo2) (ICorProfilerInfo3 *This, ClassID classId, ModuleID *pModuleId, mdTypeDef *pTypeDefToken, ClassID *pParentClassId, ULONG32 cNumTypeArgs, ULONG32 *pcNumTypeArgs, ClassID typeArgs[]);
	HRESULT(STDMETHODCALLTYPE *GetCodeInfo2) (ICorProfilerInfo3 *This, FunctionID functionID, ULONG32 cCodeInfos, ULONG32 *pcCodeInfos, COR_PRF_CODE_INFO codeInfos[]);
	HRESULT(STDMETHODCALLTYPE *GetClassFromTokenAndTypeArgs) (ICorProfilerInfo3 *This, ModuleID moduleID, mdTypeDef typeDef, ULONG32 cTypeArgs, ClassID typeArgs[], ClassID *pClassID);
	HRESULT(STDMETHODCALLTYPE *GetFunctionFromTokenAndTypeArgs) (ICorProfilerInfo3 *This, ModuleID moduleID, mdMethodDef funcDef, ClassID classId, ULONG32 cTypeArgs, ClassID typeArgs[], FunctionID *pFunctionID);
	HRESULT(STDMETHODCALLTYPE *EnumModuleFrozenObjects) (ICorProfilerInfo3 *This, ModuleID moduleID, ICorProfilerObjectEnum **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetArrayObjectInfo) (ICorProfilerInfo3 *This, ObjectID objectId, ULONG32 cDimensions, ULONG32 pDimensionSizes[], int pDimensionLowerBounds[], BYTE **ppData);
	HRESULT(STDMETHODCALLTYPE *GetBoxClassLayout) (ICorProfilerInfo3 *This, ClassID classId, ULONG32 *pBufferOffset);
	HRESULT(STDMETHODCALLTYPE *GetThreadAppDomain) (ICorProfilerInfo3 *This, ThreadID threadId, AppDomainID *pAppDomainId);
	HRESULT(STDMETHODCALLTYPE *GetRVAStaticAddress) (ICorProfilerInfo3 *This, ClassID classId, mdFieldDef fieldToken, void **ppAddress);
	HRESULT(STDMETHODCALLTYPE *GetAppDomainStaticAddress) (ICorProfilerInfo3 *This, ClassID classId, mdFieldDef fieldToken, AppDomainID appDomainId, void **ppAddress);
	HRESULT(STDMETHODCALLTYPE *GetThreadStaticAddress) (ICorProfilerInfo3 *This, ClassID classId, mdFieldDef fieldToken, ThreadID threadId, void **ppAddress);
	HRESULT(STDMETHODCALLTYPE *GetContextStaticAddress) (ICorProfilerInfo3 *This, ClassID classId, mdFieldDef fieldToken, ContextID contextId, void **ppAddress);
	HRESULT(STDMETHODCALLTYPE *GetStaticFieldInfo) (ICorProfilerInfo3 *This, ClassID classId, mdFieldDef fieldToken, COR_PRF_STATIC_TYPE *pFieldInfo);
	HRESULT(STDMETHODCALLTYPE *GetGenerationBounds) (ICorProfilerInfo3 *This, ULONG cObjectRanges, ULONG *pcObjectRanges, COR_PRF_GC_GENERATION_RANGE ranges[]);
	HRESULT(STDMETHODCALLTYPE *GetObjectGeneration) (ICorProfilerInfo3 *This, ObjectID objectId, COR_PRF_GC_GENERATION_RANGE *range);
	HRESULT(STDMETHODCALLTYPE *GetNotifiedExceptionClauseInfo) (ICorProfilerInfo3 *This, COR_PRF_EX_CLAUSE_INFO *pinfo);
	HRESULT(STDMETHODCALLTYPE *EnumJITedFunctions) (ICorProfilerInfo3 *This, ICorProfilerFunctionEnum **ppEnum);
	HRESULT(STDMETHODCALLTYPE *RequestProfilerDetach) (ICorProfilerInfo3 *This, DWORD dwExpectedCompletionMilliseconds);
	HRESULT(STDMETHODCALLTYPE *SetFunctionIDMapper2) (ICorProfilerInfo3 *This, FunctionIDMapper2 *pFunc, void *clientData);
	HRESULT(STDMETHODCALLTYPE *GetStringLayout2) (ICorProfilerInfo3 *This, ULONG *pStringLengthOffset, ULONG *pBufferOffset);
	HRESULT(STDMETHODCALLTYPE *SetEnterLeaveFunctionHooks3) (ICorProfilerInfo3 *This, FunctionEnter3 *pFuncEnter3, FunctionLeave3 *pFuncLeave3, FunctionTailcall3 *pFuncTailcall3);
	HRESULT(STDMETHODCALLTYPE *SetEnterLeaveFunctionHooks3WithInfo) (ICorProfilerInfo3 *This, FunctionEnter3WithInfo *pFuncEnter3WithInfo, FunctionLeave3WithInfo *pFuncLeave3WithInfo, FunctionTailcall3WithInfo *pFuncTailcall3WithInfo);
	HRESULT(STDMETHODCALLTYPE *GetFunctionEnter3Info) (ICorProfilerInfo3 *This, FunctionID functionId, COR_PRF_ELT_INFO eltInfo, COR_PRF_FRAME_INFO *pFrameInfo, ULONG *pcbArgumentInfo, COR_PRF_FUNCTION_ARGUMENT_INFO *pArgumentInfo);
	HRESULT(STDMETHODCALLTYPE *GetFunctionLeave3Info) (ICorProfilerInfo3 *This, FunctionID functionId, COR_PRF_ELT_INFO eltInfo, COR_PRF_FRAME_INFO *pFrameInfo, COR_PRF_FUNCTION_ARGUMENT_RANGE *pRetvalRange);
	HRESULT(STDMETHODCALLTYPE *GetFunctionTailcall3Info) (ICorProfilerInfo3 *This, FunctionID functionId, COR_PRF_ELT_INFO eltInfo, COR_PRF_FRAME_INFO *pFrameInfo);
	HRESULT(STDMETHODCALLTYPE *EnumModules) (ICorProfilerInfo3 *This, ICorProfilerModuleEnum **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetRuntimeInformation) (ICorProfilerInfo3 *This, USHORT *pClrInstanceId, COR_PRF_RUNTIME_TYPE *pRuntimeType, USHORT *pMajorVersion, USHORT *pMinorVersion, USHORT *pBuildNumber, USHORT *pQFEVersion, ULONG cchVersionString, ULONG *pcchVersionString, WCHAR szVersionString[]);
	HRESULT(STDMETHODCALLTYPE *GetThreadStaticAddress2) (ICorProfilerInfo3 *This, ClassID classId, mdFieldDef fieldToken, AppDomainID appDomainId, ThreadID threadId, void **ppAddress);
	HRESULT(STDMETHODCALLTYPE *GetAppDomainsContainingModule) (ICorProfilerInfo3 *This, ModuleID moduleId, ULONG32 cAppDomainIds, ULONG32 *pcAppDomainIds, AppDomainID appDomainIds[]);
	HRESULT(STDMETHODCALLTYPE *GetModuleInfo2) (ICorProfilerInfo3 *This, ModuleID moduleId, LPCBYTE *ppBaseLoadAddress, ULONG cchName, ULONG *pcchName, WCHAR szName[], AssemblyID *pAssemblyId, DWORD *pdwModuleFlags);
	END_INTERFACE
}  ICorProfilerInfo3Vtbl;
interface ICorProfilerInfo3
{
	CONST_VTBL struct ICorProfilerInfo3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorProfilerInfo3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorProfilerInfo3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorProfilerInfo3_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorProfilerInfo3_GetClassFromObject(This,objectId,pClassId)( (This)->lpVtbl -> GetClassFromObject(This,objectId,pClassId) )
#define ICorProfilerInfo3_GetClassFromToken(This,moduleId,typeDef,pClassId)( (This)->lpVtbl -> GetClassFromToken(This,moduleId,typeDef,pClassId) )
#define ICorProfilerInfo3_GetCodeInfo(This,functionId,pStart,pcSize)( (This)->lpVtbl -> GetCodeInfo(This,functionId,pStart,pcSize) )
#define ICorProfilerInfo3_GetEventMask(This,pdwEvents)( (This)->lpVtbl -> GetEventMask(This,pdwEvents) )
#define ICorProfilerInfo3_GetFunctionFromIP(This,ip,pFunctionId)( (This)->lpVtbl -> GetFunctionFromIP(This,ip,pFunctionId) )
#define ICorProfilerInfo3_GetFunctionFromToken(This,moduleId,token,pFunctionId)( (This)->lpVtbl -> GetFunctionFromToken(This,moduleId,token,pFunctionId) )
#define ICorProfilerInfo3_GetHandleFromThread(This,threadId,phThread)( (This)->lpVtbl -> GetHandleFromThread(This,threadId,phThread) )
#define ICorProfilerInfo3_GetObjectSize(This,objectId,pcSize)( (This)->lpVtbl -> GetObjectSize(This,objectId,pcSize) )
#define ICorProfilerInfo3_IsArrayClass(This,classId,pBaseElemType,pBaseClassId,pcRank)( (This)->lpVtbl -> IsArrayClass(This,classId,pBaseElemType,pBaseClassId,pcRank) )
#define ICorProfilerInfo3_GetThreadInfo(This,threadId,pdwWin32ThreadId)( (This)->lpVtbl -> GetThreadInfo(This,threadId,pdwWin32ThreadId) )
#define ICorProfilerInfo3_GetCurrentThreadID(This,pThreadId)( (This)->lpVtbl -> GetCurrentThreadID(This,pThreadId) )
#define ICorProfilerInfo3_GetClassIDInfo(This,classId,pModuleId,pTypeDefToken)( (This)->lpVtbl -> GetClassIDInfo(This,classId,pModuleId,pTypeDefToken) )
#define ICorProfilerInfo3_GetFunctionInfo(This,functionId,pClassId,pModuleId,pToken)( (This)->lpVtbl -> GetFunctionInfo(This,functionId,pClassId,pModuleId,pToken) )
#define ICorProfilerInfo3_SetEventMask(This,dwEvents)( (This)->lpVtbl -> SetEventMask(This,dwEvents) )
#define ICorProfilerInfo3_SetEnterLeaveFunctionHooks(This,pFuncEnter,pFuncLeave,pFuncTailcall)( (This)->lpVtbl -> SetEnterLeaveFunctionHooks(This,pFuncEnter,pFuncLeave,pFuncTailcall) )
#define ICorProfilerInfo3_SetFunctionIDMapper(This,pFunc)( (This)->lpVtbl -> SetFunctionIDMapper(This,pFunc) )
#define ICorProfilerInfo3_GetTokenAndMetaDataFromFunction(This,functionId,riid,ppImport,pToken)( (This)->lpVtbl -> GetTokenAndMetaDataFromFunction(This,functionId,riid,ppImport,pToken) )
#define ICorProfilerInfo3_GetModuleInfo(This,moduleId,ppBaseLoadAddress,cchName,pcchName,szName,pAssemblyId)( (This)->lpVtbl -> GetModuleInfo(This,moduleId,ppBaseLoadAddress,cchName,pcchName,szName,pAssemblyId) )
#define ICorProfilerInfo3_GetModuleMetaData(This,moduleId,dwOpenFlags,riid,ppOut)( (This)->lpVtbl -> GetModuleMetaData(This,moduleId,dwOpenFlags,riid,ppOut) )
#define ICorProfilerInfo3_GetILFunctionBody(This,moduleId,methodId,ppMethodHeader,pcbMethodSize)( (This)->lpVtbl -> GetILFunctionBody(This,moduleId,methodId,ppMethodHeader,pcbMethodSize) )
#define ICorProfilerInfo3_GetILFunctionBodyAllocator(This,moduleId,ppMalloc)( (This)->lpVtbl -> GetILFunctionBodyAllocator(This,moduleId,ppMalloc) )
#define ICorProfilerInfo3_SetILFunctionBody(This,moduleId,methodid,pbNewILMethodHeader)( (This)->lpVtbl -> SetILFunctionBody(This,moduleId,methodid,pbNewILMethodHeader) )
#define ICorProfilerInfo3_GetAppDomainInfo(This,appDomainId,cchName,pcchName,szName,pProcessId)( (This)->lpVtbl -> GetAppDomainInfo(This,appDomainId,cchName,pcchName,szName,pProcessId) )
#define ICorProfilerInfo3_GetAssemblyInfo(This,assemblyId,cchName,pcchName,szName,pAppDomainId,pModuleId)( (This)->lpVtbl -> GetAssemblyInfo(This,assemblyId,cchName,pcchName,szName,pAppDomainId,pModuleId) )
#define ICorProfilerInfo3_SetFunctionReJIT(This,functionId)( (This)->lpVtbl -> SetFunctionReJIT(This,functionId) )
#define ICorProfilerInfo3_ForceGC(This)( (This)->lpVtbl -> ForceGC(This) )
#define ICorProfilerInfo3_SetILInstrumentedCodeMap(This,functionId,fStartJit,cILMapEntries,rgILMapEntries)( (This)->lpVtbl -> SetILInstrumentedCodeMap(This,functionId,fStartJit,cILMapEntries,rgILMapEntries) )
#define ICorProfilerInfo3_GetInprocInspectionInterface(This,ppicd)( (This)->lpVtbl -> GetInprocInspectionInterface(This,ppicd) )
#define ICorProfilerInfo3_GetInprocInspectionIThisThread(This,ppicd)( (This)->lpVtbl -> GetInprocInspectionIThisThread(This,ppicd) )
#define ICorProfilerInfo3_GetThreadContext(This,threadId,pContextId)( (This)->lpVtbl -> GetThreadContext(This,threadId,pContextId) )
#define ICorProfilerInfo3_BeginInprocDebugging(This,fThisThreadOnly,pdwProfilerContext)( (This)->lpVtbl -> BeginInprocDebugging(This,fThisThreadOnly,pdwProfilerContext) )
#define ICorProfilerInfo3_EndInprocDebugging(This,dwProfilerContext)( (This)->lpVtbl -> EndInprocDebugging(This,dwProfilerContext) )
#define ICorProfilerInfo3_GetILToNativeMapping(This,functionId,cMap,pcMap,map)( (This)->lpVtbl -> GetILToNativeMapping(This,functionId,cMap,pcMap,map) )
#define ICorProfilerInfo3_DoStackSnapshot(This,thread,callback,infoFlags,clientData,context,contextSize)( (This)->lpVtbl -> DoStackSnapshot(This,thread,callback,infoFlags,clientData,context,contextSize) )
#define ICorProfilerInfo3_SetEnterLeaveFunctionHooks2(This,pFuncEnter,pFuncLeave,pFuncTailcall)( (This)->lpVtbl -> SetEnterLeaveFunctionHooks2(This,pFuncEnter,pFuncLeave,pFuncTailcall) )
#define ICorProfilerInfo3_GetFunctionInfo2(This,funcId,frameInfo,pClassId,pModuleId,pToken,cTypeArgs,pcTypeArgs,typeArgs)( (This)->lpVtbl -> GetFunctionInfo2(This,funcId,frameInfo,pClassId,pModuleId,pToken,cTypeArgs,pcTypeArgs,typeArgs) )
#define ICorProfilerInfo3_GetStringLayout(This,pBufferLengthOffset,pStringLengthOffset,pBufferOffset)( (This)->lpVtbl -> GetStringLayout(This,pBufferLengthOffset,pStringLengthOffset,pBufferOffset) )
#define ICorProfilerInfo3_GetClassLayout(This,classID,rFieldOffset,cFieldOffset,pcFieldOffset,pulClassSize)( (This)->lpVtbl -> GetClassLayout(This,classID,rFieldOffset,cFieldOffset,pcFieldOffset,pulClassSize) )
#define ICorProfilerInfo3_GetClassIDInfo2(This,classId,pModuleId,pTypeDefToken,pParentClassId,cNumTypeArgs,pcNumTypeArgs,typeArgs)( (This)->lpVtbl -> GetClassIDInfo2(This,classId,pModuleId,pTypeDefToken,pParentClassId,cNumTypeArgs,pcNumTypeArgs,typeArgs) )
#define ICorProfilerInfo3_GetCodeInfo2(This,functionID,cCodeInfos,pcCodeInfos,codeInfos)( (This)->lpVtbl -> GetCodeInfo2(This,functionID,cCodeInfos,pcCodeInfos,codeInfos) )
#define ICorProfilerInfo3_GetClassFromTokenAndTypeArgs(This,moduleID,typeDef,cTypeArgs,typeArgs,pClassID)( (This)->lpVtbl -> GetClassFromTokenAndTypeArgs(This,moduleID,typeDef,cTypeArgs,typeArgs,pClassID) )
#define ICorProfilerInfo3_GetFunctionFromTokenAndTypeArgs(This,moduleID,funcDef,classId,cTypeArgs,typeArgs,pFunctionID)( (This)->lpVtbl -> GetFunctionFromTokenAndTypeArgs(This,moduleID,funcDef,classId,cTypeArgs,typeArgs,pFunctionID) )
#define ICorProfilerInfo3_EnumModuleFrozenObjects(This,moduleID,ppEnum)( (This)->lpVtbl -> EnumModuleFrozenObjects(This,moduleID,ppEnum) )
#define ICorProfilerInfo3_GetArrayObjectInfo(This,objectId,cDimensions,pDimensionSizes,pDimensionLowerBounds,ppData)( (This)->lpVtbl -> GetArrayObjectInfo(This,objectId,cDimensions,pDimensionSizes,pDimensionLowerBounds,ppData) )
#define ICorProfilerInfo3_GetBoxClassLayout(This,classId,pBufferOffset)( (This)->lpVtbl -> GetBoxClassLayout(This,classId,pBufferOffset) )
#define ICorProfilerInfo3_GetThreadAppDomain(This,threadId,pAppDomainId)( (This)->lpVtbl -> GetThreadAppDomain(This,threadId,pAppDomainId) )
#define ICorProfilerInfo3_GetRVAStaticAddress(This,classId,fieldToken,ppAddress)( (This)->lpVtbl -> GetRVAStaticAddress(This,classId,fieldToken,ppAddress) )
#define ICorProfilerInfo3_GetAppDomainStaticAddress(This,classId,fieldToken,appDomainId,ppAddress)( (This)->lpVtbl -> GetAppDomainStaticAddress(This,classId,fieldToken,appDomainId,ppAddress) )
#define ICorProfilerInfo3_GetThreadStaticAddress(This,classId,fieldToken,threadId,ppAddress)( (This)->lpVtbl -> GetThreadStaticAddress(This,classId,fieldToken,threadId,ppAddress) )
#define ICorProfilerInfo3_GetContextStaticAddress(This,classId,fieldToken,contextId,ppAddress)( (This)->lpVtbl -> GetContextStaticAddress(This,classId,fieldToken,contextId,ppAddress) )
#define ICorProfilerInfo3_GetStaticFieldInfo(This,classId,fieldToken,pFieldInfo)( (This)->lpVtbl -> GetStaticFieldInfo(This,classId,fieldToken,pFieldInfo) )
#define ICorProfilerInfo3_GetGenerationBounds(This,cObjectRanges,pcObjectRanges,ranges)( (This)->lpVtbl -> GetGenerationBounds(This,cObjectRanges,pcObjectRanges,ranges) )
#define ICorProfilerInfo3_GetObjectGeneration(This,objectId,range)( (This)->lpVtbl -> GetObjectGeneration(This,objectId,range) )
#define ICorProfilerInfo3_GetNotifiedExceptionClauseInfo(This,pinfo)( (This)->lpVtbl -> GetNotifiedExceptionClauseInfo(This,pinfo) )
#define ICorProfilerInfo3_EnumJITedFunctions(This,ppEnum)( (This)->lpVtbl -> EnumJITedFunctions(This,ppEnum) )
#define ICorProfilerInfo3_RequestProfilerDetach(This,dwExpectedCompletionMilliseconds)( (This)->lpVtbl -> RequestProfilerDetach(This,dwExpectedCompletionMilliseconds) )
#define ICorProfilerInfo3_SetFunctionIDMapper2(This,pFunc,clientData)( (This)->lpVtbl -> SetFunctionIDMapper2(This,pFunc,clientData) )
#define ICorProfilerInfo3_GetStringLayout2(This,pStringLengthOffset,pBufferOffset)( (This)->lpVtbl -> GetStringLayout2(This,pStringLengthOffset,pBufferOffset) )
#define ICorProfilerInfo3_SetEnterLeaveFunctionHooks3(This,pFuncEnter3,pFuncLeave3,pFuncTailcall3)( (This)->lpVtbl -> SetEnterLeaveFunctionHooks3(This,pFuncEnter3,pFuncLeave3,pFuncTailcall3) )
#define ICorProfilerInfo3_SetEnterLeaveFunctionHooks3WithInfo(This,pFuncEnter3WithInfo,pFuncLeave3WithInfo,pFuncTailcall3WithInfo)( (This)->lpVtbl -> SetEnterLeaveFunctionHooks3WithInfo(This,pFuncEnter3WithInfo,pFuncLeave3WithInfo,pFuncTailcall3WithInfo) )
#define ICorProfilerInfo3_GetFunctionEnter3Info(This,functionId,eltInfo,pFrameInfo,pcbArgumentInfo,pArgumentInfo)( (This)->lpVtbl -> GetFunctionEnter3Info(This,functionId,eltInfo,pFrameInfo,pcbArgumentInfo,pArgumentInfo) )
#define ICorProfilerInfo3_GetFunctionLeave3Info(This,functionId,eltInfo,pFrameInfo,pRetvalRange)( (This)->lpVtbl -> GetFunctionLeave3Info(This,functionId,eltInfo,pFrameInfo,pRetvalRange) )
#define ICorProfilerInfo3_GetFunctionTailcall3Info(This,functionId,eltInfo,pFrameInfo)( (This)->lpVtbl -> GetFunctionTailcall3Info(This,functionId,eltInfo,pFrameInfo) )
#define ICorProfilerInfo3_EnumModules(This,ppEnum)( (This)->lpVtbl -> EnumModules(This,ppEnum) )
#define ICorProfilerInfo3_GetRuntimeInformation(This,pClrInstanceId,pRuntimeType,pMajorVersion,pMinorVersion,pBuildNumber,pQFEVersion,cchVersionString,pcchVersionString,szVersionString)( (This)->lpVtbl -> GetRuntimeInformation(This,pClrInstanceId,pRuntimeType,pMajorVersion,pMinorVersion,pBuildNumber,pQFEVersion,cchVersionString,pcchVersionString,szVersionString) )
#define ICorProfilerInfo3_GetThreadStaticAddress2(This,classId,fieldToken,appDomainId,threadId,ppAddress)( (This)->lpVtbl -> GetThreadStaticAddress2(This,classId,fieldToken,appDomainId,threadId,ppAddress) )
#define ICorProfilerInfo3_GetAppDomainsContainingModule(This,moduleId,cAppDomainIds,pcAppDomainIds,appDomainIds)( (This)->lpVtbl -> GetAppDomainsContainingModule(This,moduleId,cAppDomainIds,pcAppDomainIds,appDomainIds) )
#define ICorProfilerInfo3_GetModuleInfo2(This,moduleId,ppBaseLoadAddress,cchName,pcchName,szName,pAssemblyId,pdwModuleFlags)( (This)->lpVtbl -> GetModuleInfo2(This,moduleId,ppBaseLoadAddress,cchName,pcchName,szName,pAssemblyId,pdwModuleFlags) )
#endif
#endif
#ifndef __ICorProfilerObjectEnum_INTERFACE_DEFINED__
#define __ICorProfilerObjectEnum_INTERFACE_DEFINED__
extern const IID IID_ICorProfilerObjectEnum;
typedef struct ICorProfilerObjectEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICorProfilerObjectEnum *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICorProfilerObjectEnum *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICorProfilerObjectEnum *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (ICorProfilerObjectEnum *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (ICorProfilerObjectEnum *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (ICorProfilerObjectEnum *This, ICorProfilerObjectEnum **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetCount) (ICorProfilerObjectEnum *This, ULONG *pcelt);
	HRESULT(STDMETHODCALLTYPE *Next) (ICorProfilerObjectEnum *This, ULONG celt, ObjectID objects[], ULONG *pceltFetched);
	END_INTERFACE
}  ICorProfilerObjectEnumVtbl;
interface ICorProfilerObjectEnum
{
	CONST_VTBL struct ICorProfilerObjectEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorProfilerObjectEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorProfilerObjectEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorProfilerObjectEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorProfilerObjectEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorProfilerObjectEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorProfilerObjectEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorProfilerObjectEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorProfilerObjectEnum_Next(This,celt,objects,pceltFetched)( (This)->lpVtbl -> Next(This,celt,objects,pceltFetched) )
#endif
#endif
#ifndef __ICorProfilerFunctionEnum_INTERFACE_DEFINED__
#define __ICorProfilerFunctionEnum_INTERFACE_DEFINED__
extern const IID IID_ICorProfilerFunctionEnum;
typedef struct ICorProfilerFunctionEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICorProfilerFunctionEnum *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICorProfilerFunctionEnum *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICorProfilerFunctionEnum *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (ICorProfilerFunctionEnum *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (ICorProfilerFunctionEnum *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (ICorProfilerFunctionEnum *This, ICorProfilerFunctionEnum **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetCount) (ICorProfilerFunctionEnum *This, ULONG *pcelt);
	HRESULT(STDMETHODCALLTYPE *Next) (ICorProfilerFunctionEnum *This, ULONG celt, COR_PRF_FUNCTION ids[], ULONG *pceltFetched);
	END_INTERFACE
}  ICorProfilerFunctionEnumVtbl;
interface ICorProfilerFunctionEnum
{
	CONST_VTBL struct ICorProfilerFunctionEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorProfilerFunctionEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorProfilerFunctionEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorProfilerFunctionEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorProfilerFunctionEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorProfilerFunctionEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorProfilerFunctionEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorProfilerFunctionEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorProfilerFunctionEnum_Next(This,celt,ids,pceltFetched)( (This)->lpVtbl -> Next(This,celt,ids,pceltFetched) )
#endif
#endif
#ifndef __ICorProfilerModuleEnum_INTERFACE_DEFINED__
#define __ICorProfilerModuleEnum_INTERFACE_DEFINED__
extern const IID IID_ICorProfilerModuleEnum;
typedef struct ICorProfilerModuleEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICorProfilerModuleEnum *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICorProfilerModuleEnum *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICorProfilerModuleEnum *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (ICorProfilerModuleEnum *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (ICorProfilerModuleEnum *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (ICorProfilerModuleEnum *This, ICorProfilerModuleEnum **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetCount) (ICorProfilerModuleEnum *This, ULONG *pcelt);
	HRESULT(STDMETHODCALLTYPE *Next) (ICorProfilerModuleEnum *This, ULONG celt, ModuleID ids[], ULONG *pceltFetched);
	END_INTERFACE
}  ICorProfilerModuleEnumVtbl;
interface ICorProfilerModuleEnum
{
	CONST_VTBL struct ICorProfilerModuleEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorProfilerModuleEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorProfilerModuleEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorProfilerModuleEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorProfilerModuleEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorProfilerModuleEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorProfilerModuleEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorProfilerModuleEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorProfilerModuleEnum_Next(This,celt,ids,pceltFetched)( (This)->lpVtbl -> Next(This,celt,ids,pceltFetched) )
#endif
#endif
#ifndef __IMethodMalloc_INTERFACE_DEFINED__
#define __IMethodMalloc_INTERFACE_DEFINED__
extern const IID IID_IMethodMalloc;
typedef struct IMethodMallocVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMethodMalloc *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMethodMalloc *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMethodMalloc *This);
	PVOID(STDMETHODCALLTYPE *Alloc) (IMethodMalloc *This, ULONG cb);
	END_INTERFACE
}  IMethodMallocVtbl;
interface IMethodMalloc
{
	CONST_VTBL struct IMethodMallocVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMethodMalloc_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMethodMalloc_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMethodMalloc_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMethodMalloc_Alloc(This,cb)( (This)->lpVtbl -> Alloc(This,cb) )
#endif
#endif
#endif
