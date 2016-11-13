/*+@@file@@----------------------------------------------------------------*//*!
 \file		cordebug.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 11:17:41 2016
 \date		Modified on Mon Jul  4 11:17:41 2016
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
#ifndef __cordebug_h__
#define __cordebug_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICorDebugDataTarget_FWD_DEFINED__
#define __ICorDebugDataTarget_FWD_DEFINED__
typedef interface ICorDebugDataTarget ICorDebugDataTarget;
#endif
#ifndef __ICorDebugMetaDataLocator_FWD_DEFINED__
#define __ICorDebugMetaDataLocator_FWD_DEFINED__
typedef interface ICorDebugMetaDataLocator ICorDebugMetaDataLocator;
#endif
#ifndef __ICorDebugManagedCallback_FWD_DEFINED__
#define __ICorDebugManagedCallback_FWD_DEFINED__
typedef interface ICorDebugManagedCallback ICorDebugManagedCallback;
#endif
#ifndef __ICorDebugManagedCallback3_FWD_DEFINED__
#define __ICorDebugManagedCallback3_FWD_DEFINED__
typedef interface ICorDebugManagedCallback3 ICorDebugManagedCallback3;
#endif
#ifndef __ICorDebugManagedCallback2_FWD_DEFINED__
#define __ICorDebugManagedCallback2_FWD_DEFINED__
typedef interface ICorDebugManagedCallback2 ICorDebugManagedCallback2;
#endif
#ifndef __ICorDebugUnmanagedCallback_FWD_DEFINED__
#define __ICorDebugUnmanagedCallback_FWD_DEFINED__
typedef interface ICorDebugUnmanagedCallback ICorDebugUnmanagedCallback;
#endif
#ifndef __ICorDebug_FWD_DEFINED__
#define __ICorDebug_FWD_DEFINED__
typedef interface ICorDebug ICorDebug;
#endif
#ifndef __ICorDebugRemoteTarget_FWD_DEFINED__
#define __ICorDebugRemoteTarget_FWD_DEFINED__
typedef interface ICorDebugRemoteTarget ICorDebugRemoteTarget;
#endif
#ifndef __ICorDebugRemote_FWD_DEFINED__
#define __ICorDebugRemote_FWD_DEFINED__
typedef interface ICorDebugRemote ICorDebugRemote;
#endif
#ifndef __ICorDebug2_FWD_DEFINED__
#define __ICorDebug2_FWD_DEFINED__
typedef interface ICorDebug2 ICorDebug2;
#endif
#ifndef __ICorDebugController_FWD_DEFINED__
#define __ICorDebugController_FWD_DEFINED__
typedef interface ICorDebugController ICorDebugController;
#endif
#ifndef __ICorDebugAppDomain_FWD_DEFINED__
#define __ICorDebugAppDomain_FWD_DEFINED__
typedef interface ICorDebugAppDomain ICorDebugAppDomain;
#endif
#ifndef __ICorDebugAppDomain2_FWD_DEFINED__
#define __ICorDebugAppDomain2_FWD_DEFINED__
typedef interface ICorDebugAppDomain2 ICorDebugAppDomain2;
#endif
#ifndef __ICorDebugAssembly_FWD_DEFINED__
#define __ICorDebugAssembly_FWD_DEFINED__
typedef interface ICorDebugAssembly ICorDebugAssembly;
#endif
#ifndef __ICorDebugAssembly2_FWD_DEFINED__
#define __ICorDebugAssembly2_FWD_DEFINED__
typedef interface ICorDebugAssembly2 ICorDebugAssembly2;
#endif
#ifndef __ICorDebugProcess_FWD_DEFINED__
#define __ICorDebugProcess_FWD_DEFINED__
typedef interface ICorDebugProcess ICorDebugProcess;
#endif
#ifndef __ICorDebugProcess2_FWD_DEFINED__
#define __ICorDebugProcess2_FWD_DEFINED__
typedef interface ICorDebugProcess2 ICorDebugProcess2;
#endif
#ifndef __ICorDebugProcess3_FWD_DEFINED__
#define __ICorDebugProcess3_FWD_DEFINED__
typedef interface ICorDebugProcess3 ICorDebugProcess3;
#endif
#ifndef __ICorDebugBreakpoint_FWD_DEFINED__
#define __ICorDebugBreakpoint_FWD_DEFINED__
typedef interface ICorDebugBreakpoint ICorDebugBreakpoint;
#endif
#ifndef __ICorDebugFunctionBreakpoint_FWD_DEFINED__
#define __ICorDebugFunctionBreakpoint_FWD_DEFINED__
typedef interface ICorDebugFunctionBreakpoint ICorDebugFunctionBreakpoint;
#endif
#ifndef __ICorDebugModuleBreakpoint_FWD_DEFINED__
#define __ICorDebugModuleBreakpoint_FWD_DEFINED__
typedef interface ICorDebugModuleBreakpoint ICorDebugModuleBreakpoint;
#endif
#ifndef __ICorDebugValueBreakpoint_FWD_DEFINED__
#define __ICorDebugValueBreakpoint_FWD_DEFINED__
typedef interface ICorDebugValueBreakpoint ICorDebugValueBreakpoint;
#endif
#ifndef __ICorDebugStepper_FWD_DEFINED__
#define __ICorDebugStepper_FWD_DEFINED__
typedef interface ICorDebugStepper ICorDebugStepper;
#endif
#ifndef __ICorDebugStepper2_FWD_DEFINED__
#define __ICorDebugStepper2_FWD_DEFINED__
typedef interface ICorDebugStepper2 ICorDebugStepper2;
#endif
#ifndef __ICorDebugRegisterSet_FWD_DEFINED__
#define __ICorDebugRegisterSet_FWD_DEFINED__
typedef interface ICorDebugRegisterSet ICorDebugRegisterSet;
#endif
#ifndef __ICorDebugRegisterSet2_FWD_DEFINED__
#define __ICorDebugRegisterSet2_FWD_DEFINED__
typedef interface ICorDebugRegisterSet2 ICorDebugRegisterSet2;
#endif
#ifndef __ICorDebugThread_FWD_DEFINED__
#define __ICorDebugThread_FWD_DEFINED__
typedef interface ICorDebugThread ICorDebugThread;
#endif
#ifndef __ICorDebugThread2_FWD_DEFINED__
#define __ICorDebugThread2_FWD_DEFINED__
typedef interface ICorDebugThread2 ICorDebugThread2;
#endif
#ifndef __ICorDebugThread3_FWD_DEFINED__
#define __ICorDebugThread3_FWD_DEFINED__
typedef interface ICorDebugThread3 ICorDebugThread3;
#endif
#ifndef __ICorDebugThread4_FWD_DEFINED__
#define __ICorDebugThread4_FWD_DEFINED__
typedef interface ICorDebugThread4 ICorDebugThread4;
#endif
#ifndef __ICorDebugStackWalk_FWD_DEFINED__
#define __ICorDebugStackWalk_FWD_DEFINED__
typedef interface ICorDebugStackWalk ICorDebugStackWalk;
#endif
#ifndef __ICorDebugChain_FWD_DEFINED__
#define __ICorDebugChain_FWD_DEFINED__
typedef interface ICorDebugChain ICorDebugChain;
#endif
#ifndef __ICorDebugFrame_FWD_DEFINED__
#define __ICorDebugFrame_FWD_DEFINED__
typedef interface ICorDebugFrame ICorDebugFrame;
#endif
#ifndef __ICorDebugInternalFrame_FWD_DEFINED__
#define __ICorDebugInternalFrame_FWD_DEFINED__
typedef interface ICorDebugInternalFrame ICorDebugInternalFrame;
#endif
#ifndef __ICorDebugInternalFrame2_FWD_DEFINED__
#define __ICorDebugInternalFrame2_FWD_DEFINED__
typedef interface ICorDebugInternalFrame2 ICorDebugInternalFrame2;
#endif
#ifndef __ICorDebugILFrame_FWD_DEFINED__
#define __ICorDebugILFrame_FWD_DEFINED__
typedef interface ICorDebugILFrame ICorDebugILFrame;
#endif
#ifndef __ICorDebugILFrame2_FWD_DEFINED__
#define __ICorDebugILFrame2_FWD_DEFINED__
typedef interface ICorDebugILFrame2 ICorDebugILFrame2;
#endif
#ifndef __ICorDebugNativeFrame_FWD_DEFINED__
#define __ICorDebugNativeFrame_FWD_DEFINED__
typedef interface ICorDebugNativeFrame ICorDebugNativeFrame;
#endif
#ifndef __ICorDebugNativeFrame2_FWD_DEFINED__
#define __ICorDebugNativeFrame2_FWD_DEFINED__
typedef interface ICorDebugNativeFrame2 ICorDebugNativeFrame2;
#endif
#ifndef __ICorDebugModule3_FWD_DEFINED__
#define __ICorDebugModule3_FWD_DEFINED__
typedef interface ICorDebugModule3 ICorDebugModule3;
#endif
#ifndef __ICorDebugRuntimeUnwindableFrame_FWD_DEFINED__
#define __ICorDebugRuntimeUnwindableFrame_FWD_DEFINED__
typedef interface ICorDebugRuntimeUnwindableFrame ICorDebugRuntimeUnwindableFrame;
#endif
#ifndef __ICorDebugModule_FWD_DEFINED__
#define __ICorDebugModule_FWD_DEFINED__
typedef interface ICorDebugModule ICorDebugModule;
#endif
#ifndef __ICorDebugModule2_FWD_DEFINED__
#define __ICorDebugModule2_FWD_DEFINED__
typedef interface ICorDebugModule2 ICorDebugModule2;
#endif
#ifndef __ICorDebugFunction_FWD_DEFINED__
#define __ICorDebugFunction_FWD_DEFINED__
typedef interface ICorDebugFunction ICorDebugFunction;
#endif
#ifndef __ICorDebugFunction2_FWD_DEFINED__
#define __ICorDebugFunction2_FWD_DEFINED__
typedef interface ICorDebugFunction2 ICorDebugFunction2;
#endif
#ifndef __ICorDebugCode_FWD_DEFINED__
#define __ICorDebugCode_FWD_DEFINED__
typedef interface ICorDebugCode ICorDebugCode;
#endif
#ifndef __ICorDebugCode2_FWD_DEFINED__
#define __ICorDebugCode2_FWD_DEFINED__
typedef interface ICorDebugCode2 ICorDebugCode2;
#endif
#ifndef __ICorDebugClass_FWD_DEFINED__
#define __ICorDebugClass_FWD_DEFINED__
typedef interface ICorDebugClass ICorDebugClass;
#endif
#ifndef __ICorDebugClass2_FWD_DEFINED__
#define __ICorDebugClass2_FWD_DEFINED__
typedef interface ICorDebugClass2 ICorDebugClass2;
#endif
#ifndef __ICorDebugEval_FWD_DEFINED__
#define __ICorDebugEval_FWD_DEFINED__
typedef interface ICorDebugEval ICorDebugEval;
#endif
#ifndef __ICorDebugEval2_FWD_DEFINED__
#define __ICorDebugEval2_FWD_DEFINED__
typedef interface ICorDebugEval2 ICorDebugEval2;
#endif
#ifndef __ICorDebugValue_FWD_DEFINED__
#define __ICorDebugValue_FWD_DEFINED__
typedef interface ICorDebugValue ICorDebugValue;
#endif
#ifndef __ICorDebugValue2_FWD_DEFINED__
#define __ICorDebugValue2_FWD_DEFINED__
typedef interface ICorDebugValue2 ICorDebugValue2;
#endif
#ifndef __ICorDebugGenericValue_FWD_DEFINED__
#define __ICorDebugGenericValue_FWD_DEFINED__
typedef interface ICorDebugGenericValue ICorDebugGenericValue;
#endif
#ifndef __ICorDebugReferenceValue_FWD_DEFINED__
#define __ICorDebugReferenceValue_FWD_DEFINED__
typedef interface ICorDebugReferenceValue ICorDebugReferenceValue;
#endif
#ifndef __ICorDebugHeapValue_FWD_DEFINED__
#define __ICorDebugHeapValue_FWD_DEFINED__
typedef interface ICorDebugHeapValue ICorDebugHeapValue;
#endif
#ifndef __ICorDebugHeapValue2_FWD_DEFINED__
#define __ICorDebugHeapValue2_FWD_DEFINED__
typedef interface ICorDebugHeapValue2 ICorDebugHeapValue2;
#endif
#ifndef __ICorDebugHeapValue3_FWD_DEFINED__
#define __ICorDebugHeapValue3_FWD_DEFINED__
typedef interface ICorDebugHeapValue3 ICorDebugHeapValue3;
#endif
#ifndef __ICorDebugObjectValue_FWD_DEFINED__
#define __ICorDebugObjectValue_FWD_DEFINED__
typedef interface ICorDebugObjectValue ICorDebugObjectValue;
#endif
#ifndef __ICorDebugObjectValue2_FWD_DEFINED__
#define __ICorDebugObjectValue2_FWD_DEFINED__
typedef interface ICorDebugObjectValue2 ICorDebugObjectValue2;
#endif
#ifndef __ICorDebugBoxValue_FWD_DEFINED__
#define __ICorDebugBoxValue_FWD_DEFINED__
typedef interface ICorDebugBoxValue ICorDebugBoxValue;
#endif
#ifndef __ICorDebugStringValue_FWD_DEFINED__
#define __ICorDebugStringValue_FWD_DEFINED__
typedef interface ICorDebugStringValue ICorDebugStringValue;
#endif
#ifndef __ICorDebugArrayValue_FWD_DEFINED__
#define __ICorDebugArrayValue_FWD_DEFINED__
typedef interface ICorDebugArrayValue ICorDebugArrayValue;
#endif
#ifndef __ICorDebugHandleValue_FWD_DEFINED__
#define __ICorDebugHandleValue_FWD_DEFINED__
typedef interface ICorDebugHandleValue ICorDebugHandleValue;
#endif
#ifndef __ICorDebugContext_FWD_DEFINED__
#define __ICorDebugContext_FWD_DEFINED__
typedef interface ICorDebugContext ICorDebugContext;
#endif
#ifndef __ICorDebugEnum_FWD_DEFINED__
#define __ICorDebugEnum_FWD_DEFINED__
typedef interface ICorDebugEnum ICorDebugEnum;
#endif
#ifndef __ICorDebugObjectEnum_FWD_DEFINED__
#define __ICorDebugObjectEnum_FWD_DEFINED__
typedef interface ICorDebugObjectEnum ICorDebugObjectEnum;
#endif
#ifndef __ICorDebugBreakpointEnum_FWD_DEFINED__
#define __ICorDebugBreakpointEnum_FWD_DEFINED__
typedef interface ICorDebugBreakpointEnum ICorDebugBreakpointEnum;
#endif
#ifndef __ICorDebugStepperEnum_FWD_DEFINED__
#define __ICorDebugStepperEnum_FWD_DEFINED__
typedef interface ICorDebugStepperEnum ICorDebugStepperEnum;
#endif
#ifndef __ICorDebugProcessEnum_FWD_DEFINED__
#define __ICorDebugProcessEnum_FWD_DEFINED__
typedef interface ICorDebugProcessEnum ICorDebugProcessEnum;
#endif
#ifndef __ICorDebugThreadEnum_FWD_DEFINED__
#define __ICorDebugThreadEnum_FWD_DEFINED__
typedef interface ICorDebugThreadEnum ICorDebugThreadEnum;
#endif
#ifndef __ICorDebugFrameEnum_FWD_DEFINED__
#define __ICorDebugFrameEnum_FWD_DEFINED__
typedef interface ICorDebugFrameEnum ICorDebugFrameEnum;
#endif
#ifndef __ICorDebugChainEnum_FWD_DEFINED__
#define __ICorDebugChainEnum_FWD_DEFINED__
typedef interface ICorDebugChainEnum ICorDebugChainEnum;
#endif
#ifndef __ICorDebugModuleEnum_FWD_DEFINED__
#define __ICorDebugModuleEnum_FWD_DEFINED__
typedef interface ICorDebugModuleEnum ICorDebugModuleEnum;
#endif
#ifndef __ICorDebugValueEnum_FWD_DEFINED__
#define __ICorDebugValueEnum_FWD_DEFINED__
typedef interface ICorDebugValueEnum ICorDebugValueEnum;
#endif
#ifndef __ICorDebugCodeEnum_FWD_DEFINED__
#define __ICorDebugCodeEnum_FWD_DEFINED__
typedef interface ICorDebugCodeEnum ICorDebugCodeEnum;
#endif
#ifndef __ICorDebugTypeEnum_FWD_DEFINED__
#define __ICorDebugTypeEnum_FWD_DEFINED__
typedef interface ICorDebugTypeEnum ICorDebugTypeEnum;
#endif
#ifndef __ICorDebugType_FWD_DEFINED__
#define __ICorDebugType_FWD_DEFINED__
typedef interface ICorDebugType ICorDebugType;
#endif
#ifndef __ICorDebugErrorInfoEnum_FWD_DEFINED__
#define __ICorDebugErrorInfoEnum_FWD_DEFINED__
typedef interface ICorDebugErrorInfoEnum ICorDebugErrorInfoEnum;
#endif
#ifndef __ICorDebugAppDomainEnum_FWD_DEFINED__
#define __ICorDebugAppDomainEnum_FWD_DEFINED__
typedef interface ICorDebugAppDomainEnum ICorDebugAppDomainEnum;
#endif
#ifndef __ICorDebugAssemblyEnum_FWD_DEFINED__
#define __ICorDebugAssemblyEnum_FWD_DEFINED__
typedef interface ICorDebugAssemblyEnum ICorDebugAssemblyEnum;
#endif
#ifndef __ICorDebugBlockingObjectEnum_FWD_DEFINED__
#define __ICorDebugBlockingObjectEnum_FWD_DEFINED__
typedef interface ICorDebugBlockingObjectEnum ICorDebugBlockingObjectEnum;
#endif
#ifndef __ICorDebugMDA_FWD_DEFINED__
#define __ICorDebugMDA_FWD_DEFINED__
typedef interface ICorDebugMDA ICorDebugMDA;
#endif
#ifndef __ICorDebugEditAndContinueErrorInfo_FWD_DEFINED__
#define __ICorDebugEditAndContinueErrorInfo_FWD_DEFINED__
typedef interface ICorDebugEditAndContinueErrorInfo ICorDebugEditAndContinueErrorInfo;
#endif
#ifndef __ICorDebugEditAndContinueSnapshot_FWD_DEFINED__
#define __ICorDebugEditAndContinueSnapshot_FWD_DEFINED__
typedef interface ICorDebugEditAndContinueSnapshot ICorDebugEditAndContinueSnapshot;
#endif
#ifndef __CorDebug_FWD_DEFINED__
#define __CorDebug_FWD_DEFINED__
typedef struct CorDebug CorDebug;
#endif
#ifndef __EmbeddedCLRCorDebug_FWD_DEFINED__
#define __EmbeddedCLRCorDebug_FWD_DEFINED__
typedef struct EmbeddedCLRCorDebug EmbeddedCLRCorDebug;
#endif
#ifndef __ICorDebugValue_FWD_DEFINED__
#define __ICorDebugValue_FWD_DEFINED__
typedef interface ICorDebugValue ICorDebugValue;
#endif
#ifndef __ICorDebugReferenceValue_FWD_DEFINED__
#define __ICorDebugReferenceValue_FWD_DEFINED__
typedef interface ICorDebugReferenceValue ICorDebugReferenceValue;
#endif
#ifndef __ICorDebugHeapValue_FWD_DEFINED__
#define __ICorDebugHeapValue_FWD_DEFINED__
typedef interface ICorDebugHeapValue ICorDebugHeapValue;
#endif
#ifndef __ICorDebugStringValue_FWD_DEFINED__
#define __ICorDebugStringValue_FWD_DEFINED__
typedef interface ICorDebugStringValue ICorDebugStringValue;
#endif
#ifndef __ICorDebugGenericValue_FWD_DEFINED__
#define __ICorDebugGenericValue_FWD_DEFINED__
typedef interface ICorDebugGenericValue ICorDebugGenericValue;
#endif
#ifndef __ICorDebugBoxValue_FWD_DEFINED__
#define __ICorDebugBoxValue_FWD_DEFINED__
typedef interface ICorDebugBoxValue ICorDebugBoxValue;
#endif
#ifndef __ICorDebugArrayValue_FWD_DEFINED__
#define __ICorDebugArrayValue_FWD_DEFINED__
typedef interface ICorDebugArrayValue ICorDebugArrayValue;
#endif
#ifndef __ICorDebugFrame_FWD_DEFINED__
#define __ICorDebugFrame_FWD_DEFINED__
typedef interface ICorDebugFrame ICorDebugFrame;
#endif
#ifndef __ICorDebugILFrame_FWD_DEFINED__
#define __ICorDebugILFrame_FWD_DEFINED__
typedef interface ICorDebugILFrame ICorDebugILFrame;
#endif
#ifndef __ICorDebugInternalFrame_FWD_DEFINED__
#define __ICorDebugInternalFrame_FWD_DEFINED__
typedef interface ICorDebugInternalFrame ICorDebugInternalFrame;
#endif
#ifndef __ICorDebugInternalFrame2_FWD_DEFINED__
#define __ICorDebugInternalFrame2_FWD_DEFINED__
typedef interface ICorDebugInternalFrame2 ICorDebugInternalFrame2;
#endif
#ifndef __ICorDebugNativeFrame_FWD_DEFINED__
#define __ICorDebugNativeFrame_FWD_DEFINED__
typedef interface ICorDebugNativeFrame ICorDebugNativeFrame;
#endif
#ifndef __ICorDebugNativeFrame2_FWD_DEFINED__
#define __ICorDebugNativeFrame2_FWD_DEFINED__
typedef interface ICorDebugNativeFrame2 ICorDebugNativeFrame2;
#endif
#ifndef __ICorDebugRuntimeUnwindableFrame_FWD_DEFINED__
#define __ICorDebugRuntimeUnwindableFrame_FWD_DEFINED__
typedef interface ICorDebugRuntimeUnwindableFrame ICorDebugRuntimeUnwindableFrame;
#endif
#ifndef __ICorDebugManagedCallback2_FWD_DEFINED__
#define __ICorDebugManagedCallback2_FWD_DEFINED__
typedef interface ICorDebugManagedCallback2 ICorDebugManagedCallback2;
#endif
#ifndef __ICorDebugAppDomain2_FWD_DEFINED__
#define __ICorDebugAppDomain2_FWD_DEFINED__
typedef interface ICorDebugAppDomain2 ICorDebugAppDomain2;
#endif
#ifndef __ICorDebugAssembly2_FWD_DEFINED__
#define __ICorDebugAssembly2_FWD_DEFINED__
typedef interface ICorDebugAssembly2 ICorDebugAssembly2;
#endif
#ifndef __ICorDebugProcess2_FWD_DEFINED__
#define __ICorDebugProcess2_FWD_DEFINED__
typedef interface ICorDebugProcess2 ICorDebugProcess2;
#endif
#ifndef __ICorDebugStepper2_FWD_DEFINED__
#define __ICorDebugStepper2_FWD_DEFINED__
typedef interface ICorDebugStepper2 ICorDebugStepper2;
#endif
#ifndef __ICorDebugThread2_FWD_DEFINED__
#define __ICorDebugThread2_FWD_DEFINED__
typedef interface ICorDebugThread2 ICorDebugThread2;
#endif
#ifndef __ICorDebugThread3_FWD_DEFINED__
#define __ICorDebugThread3_FWD_DEFINED__
typedef interface ICorDebugThread3 ICorDebugThread3;
#endif
#ifndef __ICorDebugILFrame2_FWD_DEFINED__
#define __ICorDebugILFrame2_FWD_DEFINED__
typedef interface ICorDebugILFrame2 ICorDebugILFrame2;
#endif
#ifndef __ICorDebugModule2_FWD_DEFINED__
#define __ICorDebugModule2_FWD_DEFINED__
typedef interface ICorDebugModule2 ICorDebugModule2;
#endif
#ifndef __ICorDebugFunction2_FWD_DEFINED__
#define __ICorDebugFunction2_FWD_DEFINED__
typedef interface ICorDebugFunction2 ICorDebugFunction2;
#endif
#ifndef __ICorDebugClass2_FWD_DEFINED__
#define __ICorDebugClass2_FWD_DEFINED__
typedef interface ICorDebugClass2 ICorDebugClass2;
#endif
#ifndef __ICorDebugEval2_FWD_DEFINED__
#define __ICorDebugEval2_FWD_DEFINED__
typedef interface ICorDebugEval2 ICorDebugEval2;
#endif
#ifndef __ICorDebugValue2_FWD_DEFINED__
#define __ICorDebugValue2_FWD_DEFINED__
typedef interface ICorDebugValue2 ICorDebugValue2;
#endif
#ifndef __ICorDebugObjectValue2_FWD_DEFINED__
#define __ICorDebugObjectValue2_FWD_DEFINED__
typedef interface ICorDebugObjectValue2 ICorDebugObjectValue2;
#endif
#ifndef __ICorDebugHandleValue_FWD_DEFINED__
#define __ICorDebugHandleValue_FWD_DEFINED__
typedef interface ICorDebugHandleValue ICorDebugHandleValue;
#endif
#ifndef __ICorDebugHeapValue2_FWD_DEFINED__
#define __ICorDebugHeapValue2_FWD_DEFINED__
typedef interface ICorDebugHeapValue2 ICorDebugHeapValue2;
#endif
#ifndef __ICorDebugModule3_FWD_DEFINED__
#define __ICorDebugModule3_FWD_DEFINED__
typedef interface ICorDebugModule3 ICorDebugModule3;
#endif
#include <unknwn.h>
#include <objidl.h>
#if 0
typedef UINT32 mdToken;
typedef mdToken mdModule;
typedef SIZE_T mdScope;
typedef mdToken mdTypeDef;
typedef mdToken mdSourceFile;
typedef mdToken mdMemberRef;
typedef mdToken mdMethodDef;
typedef mdToken mdFieldDef;
typedef mdToken mdSignature;
typedef ULONG CorElementType;
typedef SIZE_T PCCOR_SIGNATURE;
typedef SIZE_T LPDEBUG_EVENT;
typedef SIZE_T LPSTARTUPINFOW;
typedef SIZE_T LPPROCESS_INFORMATION;
#endif
typedef void *HPROCESS;
typedef void *HTHREAD;
typedef UINT64 TASKID;
typedef DWORD CONNID;
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
#define REMOTE_DEBUGGING_DLL_ENTRY L"Software\\Microsoft\\.NETFramework\\Debugger\\ActivateRemoteDebugging"
typedef enum CorDebugJITCompilerFlags
{
	CORDEBUG_JIT_DEFAULT = 0x1,
	CORDEBUG_JIT_DISABLE_OPTIMIZATION = 0x3,
	CORDEBUG_JIT_ENABLE_ENC = 0x7
} CorDebugJITCompilerFlags;
typedef enum CorDebugJITCompilerFlagsDecprecated
{
	CORDEBUG_JIT_TRACK_DEBUG_INFO = 0x1
} CorDebugJITCompilerFlagsDeprecated;
typedef ULONG64 CORDB_ADDRESS;
typedef ULONG64 CORDB_REGISTER;
typedef enum CorDebugBlockingReason
{
	BLOCKING_NONE = 0,
	BLOCKING_MONITOR_CRITICAL_SECTION = 0x1,
	BLOCKING_MONITOR_EVENT = 0x2
} CorDebugBlockingReason;
typedef struct CorDebugBlockingObject
{
	ICorDebugValue *pBlockingObject;
	DWORD dwTimeout;
	CorDebugBlockingReason blockingReason;
} CorDebugBlockingObject;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0000_v0_0_s_ifspec;
#ifndef __ICorDebugDataTarget_INTERFACE_DEFINED__
#define __ICorDebugDataTarget_INTERFACE_DEFINED__
typedef enum CorDebugPlatform
{
	CORDB_PLATFORM_WINDOWS_X86 = 0,
	CORDB_PLATFORM_WINDOWS_AMD64 = (CORDB_PLATFORM_WINDOWS_X86 + 1),
	CORDB_PLATFORM_WINDOWS_IA64 = (CORDB_PLATFORM_WINDOWS_AMD64 + 1),
	CORDB_PLATFORM_MAC_PPC = (CORDB_PLATFORM_WINDOWS_IA64 + 1),
	CORDB_PLATFORM_MAC_X86 = (CORDB_PLATFORM_MAC_PPC + 1)
} CorDebugPlatform;
extern const IID IID_ICorDebugDataTarget;
typedef struct ICorDebugDataTargetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugDataTarget * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugDataTarget * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugDataTarget * This);
	HRESULT(STDMETHODCALLTYPE * GetPlatform) (ICorDebugDataTarget * This, CorDebugPlatform * pTargetPlatform);
	HRESULT(STDMETHODCALLTYPE * ReadVirtual) (ICorDebugDataTarget * This, CORDB_ADDRESS address, BYTE * pBuffer, ULONG32 bytesRequested, ULONG32 * pBytesRead);
	HRESULT(STDMETHODCALLTYPE * GetThreadContext) (ICorDebugDataTarget * This, DWORD dwThreadID, ULONG32 contextFlags, ULONG32 contextSize, BYTE * pContext);
	END_INTERFACE
}  ICorDebugDataTargetVtbl;
interface ICorDebugDataTarget
{
	CONST_VTBL struct ICorDebugDataTargetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugDataTarget_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugDataTarget_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugDataTarget_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugDataTarget_GetPlatform(This,pTargetPlatform)( (This)->lpVtbl -> GetPlatform(This,pTargetPlatform) )
#define ICorDebugDataTarget_ReadVirtual(This,address,pBuffer,bytesRequested,pBytesRead)( (This)->lpVtbl -> ReadVirtual(This,address,pBuffer,bytesRequested,pBytesRead) )
#define ICorDebugDataTarget_GetThreadContext(This,dwThreadID,contextFlags,contextSize,pContext)( (This)->lpVtbl -> GetThreadContext(This,dwThreadID,contextFlags,contextSize,pContext) )
#endif
#endif
#ifndef __ICorDebugMetaDataLocator_INTERFACE_DEFINED__
#define __ICorDebugMetaDataLocator_INTERFACE_DEFINED__
extern const IID IID_ICorDebugMetaDataLocator;
typedef struct ICorDebugMetaDataLocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugMetaDataLocator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugMetaDataLocator * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugMetaDataLocator * This);
	HRESULT(STDMETHODCALLTYPE * GetMetaData) (ICorDebugMetaDataLocator * This, LPCWSTR wszImagePath, DWORD dwImageTimeStamp, DWORD dwImageSize, ULONG32 cchPathBuffer, ULONG32 * pcchPathBuffer, WCHAR wszPathBuffer[]);
	END_INTERFACE
}  ICorDebugMetaDataLocatorVtbl;
interface ICorDebugMetaDataLocator
{
	CONST_VTBL struct ICorDebugMetaDataLocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugMetaDataLocator_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugMetaDataLocator_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugMetaDataLocator_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugMetaDataLocator_GetMetaData(This,wszImagePath,dwImageTimeStamp,dwImageSize,cchPathBuffer,pcchPathBuffer,wszPathBuffer)( (This)->lpVtbl -> GetMetaData(This,wszImagePath,dwImageTimeStamp,dwImageSize,cchPathBuffer,pcchPathBuffer,wszPathBuffer) )
#endif
#endif
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0002_v0_0_s_ifspec;
#ifndef __ICorDebugManagedCallback_INTERFACE_DEFINED__
#define __ICorDebugManagedCallback_INTERFACE_DEFINED__
typedef enum CorDebugStepReason
{
	STEP_NORMAL = 0,
	STEP_RETURN = (STEP_NORMAL + 1),
	STEP_CALL = (STEP_RETURN + 1),
	STEP_EXCEPTION_FILTER = (STEP_CALL + 1),
	STEP_EXCEPTION_HANDLER = (STEP_EXCEPTION_FILTER + 1),
	STEP_INTERCEPT = (STEP_EXCEPTION_HANDLER + 1),
	STEP_EXIT = (STEP_INTERCEPT + 1)
} CorDebugStepReason;
typedef enum LoggingLevelEnum
{
	LTraceLevel0 = 0,
	LTraceLevel1 = (LTraceLevel0 + 1),
	LTraceLevel2 = (LTraceLevel1 + 1),
	LTraceLevel3 = (LTraceLevel2 + 1),
	LTraceLevel4 = (LTraceLevel3 + 1),
	LStatusLevel0 = 20,
	LStatusLevel1 = (LStatusLevel0 + 1),
	LStatusLevel2 = (LStatusLevel1 + 1),
	LStatusLevel3 = (LStatusLevel2 + 1),
	LStatusLevel4 = (LStatusLevel3 + 1),
	LWarningLevel = 40,
	LErrorLevel = 50,
	LPanicLevel = 100
} LoggingLevelEnum;
typedef enum LogSwitchCallReason
{
	SWITCH_CREATE = 0,
	SWITCH_MODIFY = (SWITCH_CREATE + 1),
	SWITCH_DELETE = (SWITCH_MODIFY + 1)
} LogSwitchCallReason;
extern const IID IID_ICorDebugManagedCallback;
typedef struct ICorDebugManagedCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugManagedCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugManagedCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugManagedCallback * This);
	HRESULT(STDMETHODCALLTYPE * Breakpoint) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * pThread, ICorDebugBreakpoint * pBreakpoint);
	HRESULT(STDMETHODCALLTYPE * StepComplete) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * pThread, ICorDebugStepper * pStepper, CorDebugStepReason reason);
	HRESULT(STDMETHODCALLTYPE * Break) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * thread);
	HRESULT(STDMETHODCALLTYPE * Exception) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * pThread, BOOL unhandled);
	HRESULT(STDMETHODCALLTYPE * EvalComplete) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * pThread, ICorDebugEval * pEval);
	HRESULT(STDMETHODCALLTYPE * EvalException) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * pThread, ICorDebugEval * pEval);
	HRESULT(STDMETHODCALLTYPE * CreateProcess) (ICorDebugManagedCallback * This, ICorDebugProcess * pProcess);
	HRESULT(STDMETHODCALLTYPE * ExitProcess) (ICorDebugManagedCallback * This, ICorDebugProcess * pProcess);
	HRESULT(STDMETHODCALLTYPE * CreateThread) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * thread);
	HRESULT(STDMETHODCALLTYPE * ExitThread) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * thread);
	HRESULT(STDMETHODCALLTYPE * LoadModule) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugModule * pModule);
	HRESULT(STDMETHODCALLTYPE * UnloadModule) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugModule * pModule);
	HRESULT(STDMETHODCALLTYPE * LoadClass) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugClass * c);
	HRESULT(STDMETHODCALLTYPE * UnloadClass) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugClass * c);
	HRESULT(STDMETHODCALLTYPE * DebuggerError) (ICorDebugManagedCallback * This, ICorDebugProcess * pProcess, HRESULT errorHR, DWORD errorCode);
	HRESULT(STDMETHODCALLTYPE * LogMessage) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * pThread, LONG lLevel, WCHAR * pLogSwitchName, WCHAR * pMessage);
	HRESULT(STDMETHODCALLTYPE * LogSwitch) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * pThread, LONG lLevel, ULONG ulReason, WCHAR * pLogSwitchName, WCHAR * pParentName);
	HRESULT(STDMETHODCALLTYPE * CreateAppDomain) (ICorDebugManagedCallback * This, ICorDebugProcess * pProcess, ICorDebugAppDomain * pAppDomain);
	HRESULT(STDMETHODCALLTYPE * ExitAppDomain) (ICorDebugManagedCallback * This, ICorDebugProcess * pProcess, ICorDebugAppDomain * pAppDomain);
	HRESULT(STDMETHODCALLTYPE * LoadAssembly) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugAssembly * pAssembly);
	HRESULT(STDMETHODCALLTYPE * UnloadAssembly) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugAssembly * pAssembly);
	HRESULT(STDMETHODCALLTYPE * ControlCTrap) (ICorDebugManagedCallback * This, ICorDebugProcess * pProcess);
	HRESULT(STDMETHODCALLTYPE * NameChange) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * pThread);
	HRESULT(STDMETHODCALLTYPE * UpdateModuleSymbols) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugModule * pModule, IStream * pSymbolStream);
	HRESULT(STDMETHODCALLTYPE * EditAndContinueRemap) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * pThread, ICorDebugFunction * pFunction, BOOL fAccurate);
	HRESULT(STDMETHODCALLTYPE * BreakpointSetError) (ICorDebugManagedCallback * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * pThread, ICorDebugBreakpoint * pBreakpoint, DWORD dwError);
	END_INTERFACE
}  ICorDebugManagedCallbackVtbl;
interface ICorDebugManagedCallback
{
	CONST_VTBL struct ICorDebugManagedCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugManagedCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugManagedCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugManagedCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugManagedCallback_Breakpoint(This,pAppDomain,pThread,pBreakpoint)( (This)->lpVtbl -> Breakpoint(This,pAppDomain,pThread,pBreakpoint) )
#define ICorDebugManagedCallback_StepComplete(This,pAppDomain,pThread,pStepper,reason)( (This)->lpVtbl -> StepComplete(This,pAppDomain,pThread,pStepper,reason) )
#define ICorDebugManagedCallback_Break(This,pAppDomain,thread)( (This)->lpVtbl -> Break(This,pAppDomain,thread) )
#define ICorDebugManagedCallback_Exception(This,pAppDomain,pThread,unhandled)( (This)->lpVtbl -> Exception(This,pAppDomain,pThread,unhandled) )
#define ICorDebugManagedCallback_EvalComplete(This,pAppDomain,pThread,pEval)( (This)->lpVtbl -> EvalComplete(This,pAppDomain,pThread,pEval) )
#define ICorDebugManagedCallback_EvalException(This,pAppDomain,pThread,pEval)( (This)->lpVtbl -> EvalException(This,pAppDomain,pThread,pEval) )
#define ICorDebugManagedCallback_CreateProcess(This,pProcess)( (This)->lpVtbl -> CreateProcess(This,pProcess) )
#define ICorDebugManagedCallback_ExitProcess(This,pProcess)( (This)->lpVtbl -> ExitProcess(This,pProcess) )
#define ICorDebugManagedCallback_CreateThread(This,pAppDomain,thread)( (This)->lpVtbl -> CreateThread(This,pAppDomain,thread) )
#define ICorDebugManagedCallback_ExitThread(This,pAppDomain,thread)( (This)->lpVtbl -> ExitThread(This,pAppDomain,thread) )
#define ICorDebugManagedCallback_LoadModule(This,pAppDomain,pModule)( (This)->lpVtbl -> LoadModule(This,pAppDomain,pModule) )
#define ICorDebugManagedCallback_UnloadModule(This,pAppDomain,pModule)( (This)->lpVtbl -> UnloadModule(This,pAppDomain,pModule) )
#define ICorDebugManagedCallback_LoadClass(This,pAppDomain,c)( (This)->lpVtbl -> LoadClass(This,pAppDomain,c) )
#define ICorDebugManagedCallback_UnloadClass(This,pAppDomain,c)( (This)->lpVtbl -> UnloadClass(This,pAppDomain,c) )
#define ICorDebugManagedCallback_DebuggerError(This,pProcess,errorHR,errorCode)( (This)->lpVtbl -> DebuggerError(This,pProcess,errorHR,errorCode) )
#define ICorDebugManagedCallback_LogMessage(This,pAppDomain,pThread,lLevel,pLogSwitchName,pMessage)( (This)->lpVtbl -> LogMessage(This,pAppDomain,pThread,lLevel,pLogSwitchName,pMessage) )
#define ICorDebugManagedCallback_LogSwitch(This,pAppDomain,pThread,lLevel,ulReason,pLogSwitchName,pParentName)( (This)->lpVtbl -> LogSwitch(This,pAppDomain,pThread,lLevel,ulReason,pLogSwitchName,pParentName) )
#define ICorDebugManagedCallback_CreateAppDomain(This,pProcess,pAppDomain)( (This)->lpVtbl -> CreateAppDomain(This,pProcess,pAppDomain) )
#define ICorDebugManagedCallback_ExitAppDomain(This,pProcess,pAppDomain)( (This)->lpVtbl -> ExitAppDomain(This,pProcess,pAppDomain) )
#define ICorDebugManagedCallback_LoadAssembly(This,pAppDomain,pAssembly)( (This)->lpVtbl -> LoadAssembly(This,pAppDomain,pAssembly) )
#define ICorDebugManagedCallback_UnloadAssembly(This,pAppDomain,pAssembly)( (This)->lpVtbl -> UnloadAssembly(This,pAppDomain,pAssembly) )
#define ICorDebugManagedCallback_ControlCTrap(This,pProcess)( (This)->lpVtbl -> ControlCTrap(This,pProcess) )
#define ICorDebugManagedCallback_NameChange(This,pAppDomain,pThread)( (This)->lpVtbl -> NameChange(This,pAppDomain,pThread) )
#define ICorDebugManagedCallback_UpdateModuleSymbols(This,pAppDomain,pModule,pSymbolStream)( (This)->lpVtbl -> UpdateModuleSymbols(This,pAppDomain,pModule,pSymbolStream) )
#define ICorDebugManagedCallback_EditAndContinueRemap(This,pAppDomain,pThread,pFunction,fAccurate)( (This)->lpVtbl -> EditAndContinueRemap(This,pAppDomain,pThread,pFunction,fAccurate) )
#define ICorDebugManagedCallback_BreakpointSetError(This,pAppDomain,pThread,pBreakpoint,dwError)( (This)->lpVtbl -> BreakpointSetError(This,pAppDomain,pThread,pBreakpoint,dwError) )
#endif
#endif
#pragma warning(pop)
#pragma warning(push)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0003_v0_0_s_ifspec;
#ifndef __ICorDebugManagedCallback3_INTERFACE_DEFINED__
#define __ICorDebugManagedCallback3_INTERFACE_DEFINED__
extern const IID IID_ICorDebugManagedCallback3;
typedef struct ICorDebugManagedCallback3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugManagedCallback3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugManagedCallback3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugManagedCallback3 * This);
	HRESULT(STDMETHODCALLTYPE * CustomNotification) (ICorDebugManagedCallback3 * This, ICorDebugThread * pThread, ICorDebugAppDomain * pAppDomain);
	END_INTERFACE
}  ICorDebugManagedCallback3Vtbl;
interface ICorDebugManagedCallback3
{
	CONST_VTBL struct ICorDebugManagedCallback3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugManagedCallback3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugManagedCallback3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugManagedCallback3_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugManagedCallback3_CustomNotification(This,pThread,pAppDomain)( (This)->lpVtbl -> CustomNotification(This,pThread,pAppDomain) )
#endif
#endif
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0004_v0_0_s_ifspec;
#ifndef __ICorDebugManagedCallback2_INTERFACE_DEFINED__
#define __ICorDebugManagedCallback2_INTERFACE_DEFINED__
typedef enum CorDebugExceptionCallbackType
{
	DEBUG_EXCEPTION_FIRST_CHANCE = 1,
	DEBUG_EXCEPTION_USER_FIRST_CHANCE = 2,
	DEBUG_EXCEPTION_CATCH_HANDLER_FOUND = 3,
	DEBUG_EXCEPTION_UNHANDLED = 4
} CorDebugExceptionCallbackType;
typedef enum CorDebugExceptionFlags
{
	DEBUG_EXCEPTION_CAN_BE_INTERCEPTED = 0x1
} CorDebugExceptionFlags;
typedef enum CorDebugExceptionUnwindCallbackType
{
	DEBUG_EXCEPTION_UNWIND_BEGIN = 1,
	DEBUG_EXCEPTION_INTERCEPTED = 2
} CorDebugExceptionUnwindCallbackType;
extern const IID IID_ICorDebugManagedCallback2;
typedef struct ICorDebugManagedCallback2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugManagedCallback2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugManagedCallback2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugManagedCallback2 * This);
	HRESULT(STDMETHODCALLTYPE * FunctionRemapOpportunity) (ICorDebugManagedCallback2 * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * pThread, ICorDebugFunction * pOldFunction, ICorDebugFunction * pNewFunction, ULONG32 oldILOffset);
	HRESULT(STDMETHODCALLTYPE * CreateConnection) (ICorDebugManagedCallback2 * This, ICorDebugProcess * pProcess, CONNID dwConnectionId, WCHAR * pConnName);
	HRESULT(STDMETHODCALLTYPE * ChangeConnection) (ICorDebugManagedCallback2 * This, ICorDebugProcess * pProcess, CONNID dwConnectionId);
	HRESULT(STDMETHODCALLTYPE * DestroyConnection) (ICorDebugManagedCallback2 * This, ICorDebugProcess * pProcess, CONNID dwConnectionId);
	HRESULT(STDMETHODCALLTYPE * Exception) (ICorDebugManagedCallback2 * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * pThread, ICorDebugFrame * pFrame, ULONG32 nOffset, CorDebugExceptionCallbackType dwEventType, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * ExceptionUnwind) (ICorDebugManagedCallback2 * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * pThread, CorDebugExceptionUnwindCallbackType dwEventType, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * FunctionRemapComplete) (ICorDebugManagedCallback2 * This, ICorDebugAppDomain * pAppDomain, ICorDebugThread * pThread, ICorDebugFunction * pFunction);
	HRESULT(STDMETHODCALLTYPE * MDANotification) (ICorDebugManagedCallback2 * This, ICorDebugController * pController, ICorDebugThread * pThread, ICorDebugMDA * pMDA);
	END_INTERFACE
}  ICorDebugManagedCallback2Vtbl;
interface ICorDebugManagedCallback2
{
	CONST_VTBL struct ICorDebugManagedCallback2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugManagedCallback2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugManagedCallback2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugManagedCallback2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugManagedCallback2_FunctionRemapOpportunity(This,pAppDomain,pThread,pOldFunction,pNewFunction,oldILOffset)( (This)->lpVtbl -> FunctionRemapOpportunity(This,pAppDomain,pThread,pOldFunction,pNewFunction,oldILOffset) )
#define ICorDebugManagedCallback2_CreateConnection(This,pProcess,dwConnectionId,pConnName)( (This)->lpVtbl -> CreateConnection(This,pProcess,dwConnectionId,pConnName) )
#define ICorDebugManagedCallback2_ChangeConnection(This,pProcess,dwConnectionId)( (This)->lpVtbl -> ChangeConnection(This,pProcess,dwConnectionId) )
#define ICorDebugManagedCallback2_DestroyConnection(This,pProcess,dwConnectionId)( (This)->lpVtbl -> DestroyConnection(This,pProcess,dwConnectionId) )
#define ICorDebugManagedCallback2_Exception(This,pAppDomain,pThread,pFrame,nOffset,dwEventType,dwFlags)( (This)->lpVtbl -> Exception(This,pAppDomain,pThread,pFrame,nOffset,dwEventType,dwFlags) )
#define ICorDebugManagedCallback2_ExceptionUnwind(This,pAppDomain,pThread,dwEventType,dwFlags)( (This)->lpVtbl -> ExceptionUnwind(This,pAppDomain,pThread,dwEventType,dwFlags) )
#define ICorDebugManagedCallback2_FunctionRemapComplete(This,pAppDomain,pThread,pFunction)( (This)->lpVtbl -> FunctionRemapComplete(This,pAppDomain,pThread,pFunction) )
#define ICorDebugManagedCallback2_MDANotification(This,pController,pThread,pMDA)( (This)->lpVtbl -> MDANotification(This,pController,pThread,pMDA) )
#endif
#endif
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0005_v0_0_s_ifspec;
#ifndef __ICorDebugUnmanagedCallback_INTERFACE_DEFINED__
#define __ICorDebugUnmanagedCallback_INTERFACE_DEFINED__
extern const IID IID_ICorDebugUnmanagedCallback;
typedef struct ICorDebugUnmanagedCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugUnmanagedCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugUnmanagedCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugUnmanagedCallback * This);
	HRESULT(STDMETHODCALLTYPE * DebugEvent) (ICorDebugUnmanagedCallback * This, LPDEBUG_EVENT pDebugEvent, BOOL fOutOfBand);
	END_INTERFACE
}  ICorDebugUnmanagedCallbackVtbl;
interface ICorDebugUnmanagedCallback
{
	CONST_VTBL struct ICorDebugUnmanagedCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugUnmanagedCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugUnmanagedCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugUnmanagedCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugUnmanagedCallback_DebugEvent(This,pDebugEvent,fOutOfBand)( (This)->lpVtbl -> DebugEvent(This,pDebugEvent,fOutOfBand) )
#endif
#endif
typedef enum CorDebugCreateProcessFlags
{
	DEBUG_NO_SPECIAL_OPTIONS = 0
} CorDebugCreateProcessFlags;
typedef enum CorDebugHandleType
{
	HANDLE_STRONG = 1,
	HANDLE_WEAK_TRACK_RESURRECTION = 2
} CorDebugHandleType;
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0006_v0_0_s_ifspec;
#ifndef __ICorDebug_INTERFACE_DEFINED__
#define __ICorDebug_INTERFACE_DEFINED__
extern const IID IID_ICorDebug;
typedef struct ICorDebugVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebug * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebug * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebug * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICorDebug * This);
	HRESULT(STDMETHODCALLTYPE * Terminate) (ICorDebug * This);
	HRESULT(STDMETHODCALLTYPE * SetManagedHandler) (ICorDebug * This, ICorDebugManagedCallback * pCallback);
	HRESULT(STDMETHODCALLTYPE * SetUnmanagedHandler) (ICorDebug * This, ICorDebugUnmanagedCallback * pCallback);
	HRESULT(STDMETHODCALLTYPE * CreateProcess) (ICorDebug * This, LPCWSTR lpApplicationName, LPWSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, PVOID lpEnvironment, LPCWSTR lpCurrentDirectory, LPSTARTUPINFOW lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation, CorDebugCreateProcessFlags debuggingFlags, ICorDebugProcess ** ppProcess);
	HRESULT(STDMETHODCALLTYPE * DebugActiveProcess) (ICorDebug * This, DWORD id, BOOL win32Attach, ICorDebugProcess ** ppProcess);
	HRESULT(STDMETHODCALLTYPE * EnumerateProcesses) (ICorDebug * This, ICorDebugProcessEnum ** ppProcess);
	HRESULT(STDMETHODCALLTYPE * GetProcess) (ICorDebug * This, DWORD dwProcessId, ICorDebugProcess ** ppProcess);
	HRESULT(STDMETHODCALLTYPE * CanLaunchOrAttach) (ICorDebug * This, DWORD dwProcessId, BOOL win32DebuggingEnabled);
	END_INTERFACE
}  ICorDebugVtbl;
interface ICorDebug
{
	CONST_VTBL struct ICorDebugVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebug_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebug_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebug_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebug_Initialize(This)( (This)->lpVtbl -> Initialize(This) )
#define ICorDebug_Terminate(This)( (This)->lpVtbl -> Terminate(This) )
#define ICorDebug_SetManagedHandler(This,pCallback)( (This)->lpVtbl -> SetManagedHandler(This,pCallback) )
#define ICorDebug_SetUnmanagedHandler(This,pCallback)( (This)->lpVtbl -> SetUnmanagedHandler(This,pCallback) )
#define ICorDebug_CreateProcess(This,lpApplicationName,lpCommandLine,lpProcessAttributes,lpThreadAttributes,bInheritHandles,dwCreationFlags,lpEnvironment,lpCurrentDirectory,lpStartupInfo,lpProcessInformation,debuggingFlags,ppProcess)( (This)->lpVtbl -> CreateProcess(This,lpApplicationName,lpCommandLine,lpProcessAttributes,lpThreadAttributes,bInheritHandles,dwCreationFlags,lpEnvironment,lpCurrentDirectory,lpStartupInfo,lpProcessInformation,debuggingFlags,ppProcess) )
#define ICorDebug_DebugActiveProcess(This,id,win32Attach,ppProcess)( (This)->lpVtbl -> DebugActiveProcess(This,id,win32Attach,ppProcess) )
#define ICorDebug_EnumerateProcesses(This,ppProcess)( (This)->lpVtbl -> EnumerateProcesses(This,ppProcess) )
#define ICorDebug_GetProcess(This,dwProcessId,ppProcess)( (This)->lpVtbl -> GetProcess(This,dwProcessId,ppProcess) )
#define ICorDebug_CanLaunchOrAttach(This,dwProcessId,win32DebuggingEnabled)( (This)->lpVtbl -> CanLaunchOrAttach(This,dwProcessId,win32DebuggingEnabled) )
#endif
#endif
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0007_v0_0_s_ifspec;
#ifndef __ICorDebugRemoteTarget_INTERFACE_DEFINED__
#define __ICorDebugRemoteTarget_INTERFACE_DEFINED__
extern const IID IID_ICorDebugRemoteTarget;
typedef struct ICorDebugRemoteTargetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugRemoteTarget * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugRemoteTarget * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugRemoteTarget * This);
	HRESULT(STDMETHODCALLTYPE * GetHostName) (ICorDebugRemoteTarget * This, ULONG32 cchHostName, ULONG32 * pcchHostName, WCHAR szHostName[]);
	END_INTERFACE
}  ICorDebugRemoteTargetVtbl;
interface ICorDebugRemoteTarget
{
	CONST_VTBL struct ICorDebugRemoteTargetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugRemoteTarget_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugRemoteTarget_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugRemoteTarget_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugRemoteTarget_GetHostName(This,cchHostName,pcchHostName,szHostName)( (This)->lpVtbl -> GetHostName(This,cchHostName,pcchHostName,szHostName) )
#endif
#endif
#ifndef __ICorDebugRemote_INTERFACE_DEFINED__
#define __ICorDebugRemote_INTERFACE_DEFINED__
extern const IID IID_ICorDebugRemote;
typedef struct ICorDebugRemoteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugRemote * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugRemote * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugRemote * This);
	HRESULT(STDMETHODCALLTYPE * CreateProcessEx) (ICorDebugRemote * This, ICorDebugRemoteTarget * pRemoteTarget, LPCWSTR lpApplicationName, LPWSTR lpCommandLine, LPSECURITY_ATTRIBUTES lpProcessAttributes, LPSECURITY_ATTRIBUTES lpThreadAttributes, BOOL bInheritHandles, DWORD dwCreationFlags, PVOID lpEnvironment, LPCWSTR lpCurrentDirectory, LPSTARTUPINFOW lpStartupInfo, LPPROCESS_INFORMATION lpProcessInformation, CorDebugCreateProcessFlags debuggingFlags, ICorDebugProcess ** ppProcess);
	HRESULT(STDMETHODCALLTYPE * DebugActiveProcessEx) (ICorDebugRemote * This, ICorDebugRemoteTarget * pRemoteTarget, DWORD dwProcessId, BOOL fWin32Attach, ICorDebugProcess ** ppProcess);
	END_INTERFACE
}  ICorDebugRemoteVtbl;
interface ICorDebugRemote
{
	CONST_VTBL struct ICorDebugRemoteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugRemote_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugRemote_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugRemote_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugRemote_CreateProcessEx(This,pRemoteTarget,lpApplicationName,lpCommandLine,lpProcessAttributes,lpThreadAttributes,bInheritHandles,dwCreationFlags,lpEnvironment,lpCurrentDirectory,lpStartupInfo,lpProcessInformation,debuggingFlags,ppProcess)( (This)->lpVtbl -> CreateProcessEx(This,pRemoteTarget,lpApplicationName,lpCommandLine,lpProcessAttributes,lpThreadAttributes,bInheritHandles,dwCreationFlags,lpEnvironment,lpCurrentDirectory,lpStartupInfo,lpProcessInformation,debuggingFlags,ppProcess) )
#define ICorDebugRemote_DebugActiveProcessEx(This,pRemoteTarget,dwProcessId,fWin32Attach,ppProcess)( (This)->lpVtbl -> DebugActiveProcessEx(This,pRemoteTarget,dwProcessId,fWin32Attach,ppProcess) )
#endif
#endif
typedef struct _COR_VERSION
{
	DWORD dwMajor;
	DWORD dwMinor;
	DWORD dwBuild;
	DWORD dwSubBuild;
} COR_VERSION;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0009_v0_0_s_ifspec;
#ifndef __ICorDebug2_INTERFACE_DEFINED__
#define __ICorDebug2_INTERFACE_DEFINED__
typedef enum CorDebugInterfaceVersion
{
	CorDebugInvalidVersion = 0,
	CorDebugVersion_1_0 = (CorDebugInvalidVersion + 1),
	ver_ICorDebugManagedCallback = CorDebugVersion_1_0,
	ver_ICorDebugUnmanagedCallback = CorDebugVersion_1_0,
	ver_ICorDebug = CorDebugVersion_1_0,
	ver_ICorDebugController = CorDebugVersion_1_0,
	ver_ICorDebugAppDomain = CorDebugVersion_1_0,
	ver_ICorDebugAssembly = CorDebugVersion_1_0,
	ver_ICorDebugProcess = CorDebugVersion_1_0,
	ver_ICorDebugBreakpoint = CorDebugVersion_1_0,
	ver_ICorDebugFunctionBreakpoint = CorDebugVersion_1_0,
	ver_ICorDebugModuleBreakpoint = CorDebugVersion_1_0,
	ver_ICorDebugValueBreakpoint = CorDebugVersion_1_0,
	ver_ICorDebugStepper = CorDebugVersion_1_0,
	ver_ICorDebugRegisterSet = CorDebugVersion_1_0,
	ver_ICorDebugThread = CorDebugVersion_1_0,
	ver_ICorDebugChain = CorDebugVersion_1_0,
	ver_ICorDebugFrame = CorDebugVersion_1_0,
	ver_ICorDebugILFrame = CorDebugVersion_1_0,
	ver_ICorDebugNativeFrame = CorDebugVersion_1_0,
	ver_ICorDebugModule = CorDebugVersion_1_0,
	ver_ICorDebugFunction = CorDebugVersion_1_0,
	ver_ICorDebugCode = CorDebugVersion_1_0,
	ver_ICorDebugClass = CorDebugVersion_1_0,
	ver_ICorDebugEval = CorDebugVersion_1_0,
	ver_ICorDebugValue = CorDebugVersion_1_0,
	ver_ICorDebugGenericValue = CorDebugVersion_1_0,
	ver_ICorDebugReferenceValue = CorDebugVersion_1_0,
	ver_ICorDebugHeapValue = CorDebugVersion_1_0,
	ver_ICorDebugObjectValue = CorDebugVersion_1_0,
	ver_ICorDebugBoxValue = CorDebugVersion_1_0,
	ver_ICorDebugStringValue = CorDebugVersion_1_0,
	ver_ICorDebugArrayValue = CorDebugVersion_1_0,
	ver_ICorDebugContext = CorDebugVersion_1_0,
	ver_ICorDebugEnum = CorDebugVersion_1_0,
	ver_ICorDebugObjectEnum = CorDebugVersion_1_0,
	ver_ICorDebugBreakpointEnum = CorDebugVersion_1_0,
	ver_ICorDebugStepperEnum = CorDebugVersion_1_0,
	ver_ICorDebugProcessEnum = CorDebugVersion_1_0,
	ver_ICorDebugThreadEnum = CorDebugVersion_1_0,
	ver_ICorDebugFrameEnum = CorDebugVersion_1_0,
	ver_ICorDebugChainEnum = CorDebugVersion_1_0,
	ver_ICorDebugModuleEnum = CorDebugVersion_1_0,
	ver_ICorDebugValueEnum = CorDebugVersion_1_0,
	ver_ICorDebugCodeEnum = CorDebugVersion_1_0,
	ver_ICorDebugTypeEnum = CorDebugVersion_1_0,
	ver_ICorDebugErrorInfoEnum = CorDebugVersion_1_0,
	ver_ICorDebugAppDomainEnum = CorDebugVersion_1_0,
	ver_ICorDebugAssemblyEnum = CorDebugVersion_1_0,
	ver_ICorDebugEditAndContinueErrorInfo = CorDebugVersion_1_0,
	ver_ICorDebugEditAndContinueSnapshot = CorDebugVersion_1_0,
	CorDebugVersion_1_1 = (CorDebugVersion_1_0 + 1),
	CorDebugVersion_2_0 = (CorDebugVersion_1_1 + 1),
	ver_ICorDebugManagedCallback2 = CorDebugVersion_2_0,
	ver_ICorDebugAppDomain2 = CorDebugVersion_2_0,
	ver_ICorDebugAssembly2 = CorDebugVersion_2_0,
	ver_ICorDebugProcess2 = CorDebugVersion_2_0,
	ver_ICorDebugStepper2 = CorDebugVersion_2_0,
	ver_ICorDebugRegisterSet2 = CorDebugVersion_2_0,
	ver_ICorDebugThread2 = CorDebugVersion_2_0,
	ver_ICorDebugILFrame2 = CorDebugVersion_2_0,
	ver_ICorDebugInternalFrame = CorDebugVersion_2_0,
	ver_ICorDebugModule2 = CorDebugVersion_2_0,
	ver_ICorDebugFunction2 = CorDebugVersion_2_0,
	ver_ICorDebugCode2 = CorDebugVersion_2_0,
	ver_ICorDebugClass2 = CorDebugVersion_2_0,
	ver_ICorDebugValue2 = CorDebugVersion_2_0,
	ver_ICorDebugEval2 = CorDebugVersion_2_0,
	ver_ICorDebugObjectValue2 = CorDebugVersion_2_0,
	CorDebugVersion_4_0 = (CorDebugVersion_2_0 + 1),
	ver_ICorDebugThread3 = CorDebugVersion_4_0,
	ver_ICorDebugThread4 = CorDebugVersion_4_0,
	ver_ICorDebugStackWalk = CorDebugVersion_4_0,
	ver_ICorDebugNativeFrame2 = CorDebugVersion_4_0,
	ver_ICorDebugInternalFrame2 = CorDebugVersion_4_0,
	ver_ICorDebugRuntimeUnwindableFrame = CorDebugVersion_4_0,
	ver_ICorDebugHeapValue3 = CorDebugVersion_4_0,
	ver_ICorDebugBlockingObjectEnum = CorDebugVersion_4_0,
	CorDebugLatestVersion = CorDebugVersion_4_0
} CorDebugInterfaceVersion;
extern const IID IID_ICorDebug2;
typedef struct ICorDebug2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebug2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebug2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebug2 * This);
	END_INTERFACE
}  ICorDebug2Vtbl;
interface ICorDebug2
{
	CONST_VTBL struct ICorDebug2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebug2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebug2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebug2_Release(This)( (This)->lpVtbl -> Release(This) )
#endif
#endif
typedef enum CorDebugThreadState
{
	THREAD_RUN = 0,
	THREAD_SUSPEND = (THREAD_RUN + 1)
} CorDebugThreadState;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0010_v0_0_s_ifspec;
#ifndef __ICorDebugController_INTERFACE_DEFINED__
#define __ICorDebugController_INTERFACE_DEFINED__
extern const IID IID_ICorDebugController;
typedef struct ICorDebugControllerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugController * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugController * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugController * This);
	HRESULT(STDMETHODCALLTYPE * Stop) (ICorDebugController * This, DWORD dwTimeoutIgnored);
	HRESULT(STDMETHODCALLTYPE * Continue) (ICorDebugController * This, BOOL fIsOutOfBand);
	HRESULT(STDMETHODCALLTYPE * IsRunning) (ICorDebugController * This, BOOL * pbRunning);
	HRESULT(STDMETHODCALLTYPE * HasQueuedCallbacks) (ICorDebugController * This, ICorDebugThread * pThread, BOOL * pbQueued);
	HRESULT(STDMETHODCALLTYPE * EnumerateThreads) (ICorDebugController * This, ICorDebugThreadEnum ** ppThreads);
	HRESULT(STDMETHODCALLTYPE * SetAllThreadsDebugState) (ICorDebugController * This, CorDebugThreadState state, ICorDebugThread * pExceptThisThread);
	HRESULT(STDMETHODCALLTYPE * Detach) (ICorDebugController * This);
	HRESULT(STDMETHODCALLTYPE * Terminate) (ICorDebugController * This, UINT exitCode);
	HRESULT(STDMETHODCALLTYPE * CanCommitChanges) (ICorDebugController * This, ULONG cSnapshots, ICorDebugEditAndContinueSnapshot * pSnapshots[], ICorDebugErrorInfoEnum ** pError);
	HRESULT(STDMETHODCALLTYPE * CommitChanges) (ICorDebugController * This, ULONG cSnapshots, ICorDebugEditAndContinueSnapshot * pSnapshots[], ICorDebugErrorInfoEnum ** pError);
	END_INTERFACE
}  ICorDebugControllerVtbl;
interface ICorDebugController
{
	CONST_VTBL struct ICorDebugControllerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugController_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugController_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugController_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugController_Stop(This,dwTimeoutIgnored)( (This)->lpVtbl -> Stop(This,dwTimeoutIgnored) )
#define ICorDebugController_Continue(This,fIsOutOfBand)( (This)->lpVtbl -> Continue(This,fIsOutOfBand) )
#define ICorDebugController_IsRunning(This,pbRunning)( (This)->lpVtbl -> IsRunning(This,pbRunning) )
#define ICorDebugController_HasQueuedCallbacks(This,pThread,pbQueued)( (This)->lpVtbl -> HasQueuedCallbacks(This,pThread,pbQueued) )
#define ICorDebugController_EnumerateThreads(This,ppThreads)( (This)->lpVtbl -> EnumerateThreads(This,ppThreads) )
#define ICorDebugController_SetAllThreadsDebugState(This,state,pExceptThisThread)( (This)->lpVtbl -> SetAllThreadsDebugState(This,state,pExceptThisThread) )
#define ICorDebugController_Detach(This)( (This)->lpVtbl -> Detach(This) )
#define ICorDebugController_Terminate(This,exitCode)( (This)->lpVtbl -> Terminate(This,exitCode) )
#define ICorDebugController_CanCommitChanges(This,cSnapshots,pSnapshots,pError)( (This)->lpVtbl -> CanCommitChanges(This,cSnapshots,pSnapshots,pError) )
#define ICorDebugController_CommitChanges(This,cSnapshots,pSnapshots,pError)( (This)->lpVtbl -> CommitChanges(This,cSnapshots,pSnapshots,pError) )
#endif
#endif
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0011_v0_0_s_ifspec;
#ifndef __ICorDebugAppDomain_INTERFACE_DEFINED__
#define __ICorDebugAppDomain_INTERFACE_DEFINED__
extern const IID IID_ICorDebugAppDomain;
typedef struct ICorDebugAppDomainVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugAppDomain * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugAppDomain * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugAppDomain * This);
	HRESULT(STDMETHODCALLTYPE * Stop) (ICorDebugAppDomain * This, DWORD dwTimeoutIgnored);
	HRESULT(STDMETHODCALLTYPE * Continue) (ICorDebugAppDomain * This, BOOL fIsOutOfBand);
	HRESULT(STDMETHODCALLTYPE * IsRunning) (ICorDebugAppDomain * This, BOOL * pbRunning);
	HRESULT(STDMETHODCALLTYPE * HasQueuedCallbacks) (ICorDebugAppDomain * This, ICorDebugThread * pThread, BOOL * pbQueued);
	HRESULT(STDMETHODCALLTYPE * EnumerateThreads) (ICorDebugAppDomain * This, ICorDebugThreadEnum ** ppThreads);
	HRESULT(STDMETHODCALLTYPE * SetAllThreadsDebugState) (ICorDebugAppDomain * This, CorDebugThreadState state, ICorDebugThread * pExceptThisThread);
	HRESULT(STDMETHODCALLTYPE * Detach) (ICorDebugAppDomain * This);
	HRESULT(STDMETHODCALLTYPE * Terminate) (ICorDebugAppDomain * This, UINT exitCode);
	HRESULT(STDMETHODCALLTYPE * CanCommitChanges) (ICorDebugAppDomain * This, ULONG cSnapshots, ICorDebugEditAndContinueSnapshot * pSnapshots[], ICorDebugErrorInfoEnum ** pError);
	HRESULT(STDMETHODCALLTYPE * CommitChanges) (ICorDebugAppDomain * This, ULONG cSnapshots, ICorDebugEditAndContinueSnapshot * pSnapshots[], ICorDebugErrorInfoEnum ** pError);
	HRESULT(STDMETHODCALLTYPE * GetProcess) (ICorDebugAppDomain * This, ICorDebugProcess ** ppProcess);
	HRESULT(STDMETHODCALLTYPE * EnumerateAssemblies) (ICorDebugAppDomain * This, ICorDebugAssemblyEnum ** ppAssemblies);
	HRESULT(STDMETHODCALLTYPE * GetModuleFromMetaDataInterface) (ICorDebugAppDomain * This, IUnknown * pIMetaData, ICorDebugModule ** ppModule);
	HRESULT(STDMETHODCALLTYPE * EnumerateBreakpoints) (ICorDebugAppDomain * This, ICorDebugBreakpointEnum ** ppBreakpoints);
	HRESULT(STDMETHODCALLTYPE * EnumerateSteppers) (ICorDebugAppDomain * This, ICorDebugStepperEnum ** ppSteppers);
	HRESULT(STDMETHODCALLTYPE * IsAttached) (ICorDebugAppDomain * This, BOOL * pbAttached);
	HRESULT(STDMETHODCALLTYPE * GetName) (ICorDebugAppDomain * This, ULONG32 cchName, ULONG32 * pcchName, WCHAR szName[]);
	HRESULT(STDMETHODCALLTYPE * GetObject) (ICorDebugAppDomain * This, ICorDebugValue ** ppObject);
	HRESULT(STDMETHODCALLTYPE * Attach) (ICorDebugAppDomain * This);
	HRESULT(STDMETHODCALLTYPE * GetID) (ICorDebugAppDomain * This, ULONG32 * pId);
	END_INTERFACE
}  ICorDebugAppDomainVtbl;
interface ICorDebugAppDomain
{
	CONST_VTBL struct ICorDebugAppDomainVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugAppDomain_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugAppDomain_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugAppDomain_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugAppDomain_Stop(This,dwTimeoutIgnored)( (This)->lpVtbl -> Stop(This,dwTimeoutIgnored) )
#define ICorDebugAppDomain_Continue(This,fIsOutOfBand)( (This)->lpVtbl -> Continue(This,fIsOutOfBand) )
#define ICorDebugAppDomain_IsRunning(This,pbRunning)( (This)->lpVtbl -> IsRunning(This,pbRunning) )
#define ICorDebugAppDomain_HasQueuedCallbacks(This,pThread,pbQueued)( (This)->lpVtbl -> HasQueuedCallbacks(This,pThread,pbQueued) )
#define ICorDebugAppDomain_EnumerateThreads(This,ppThreads)( (This)->lpVtbl -> EnumerateThreads(This,ppThreads) )
#define ICorDebugAppDomain_SetAllThreadsDebugState(This,state,pExceptThisThread)( (This)->lpVtbl -> SetAllThreadsDebugState(This,state,pExceptThisThread) )
#define ICorDebugAppDomain_Detach(This)( (This)->lpVtbl -> Detach(This) )
#define ICorDebugAppDomain_Terminate(This,exitCode)( (This)->lpVtbl -> Terminate(This,exitCode) )
#define ICorDebugAppDomain_CanCommitChanges(This,cSnapshots,pSnapshots,pError)( (This)->lpVtbl -> CanCommitChanges(This,cSnapshots,pSnapshots,pError) )
#define ICorDebugAppDomain_CommitChanges(This,cSnapshots,pSnapshots,pError)( (This)->lpVtbl -> CommitChanges(This,cSnapshots,pSnapshots,pError) )
#define ICorDebugAppDomain_GetProcess(This,ppProcess)( (This)->lpVtbl -> GetProcess(This,ppProcess) )
#define ICorDebugAppDomain_EnumerateAssemblies(This,ppAssemblies)( (This)->lpVtbl -> EnumerateAssemblies(This,ppAssemblies) )
#define ICorDebugAppDomain_GetModuleFromMetaDataInterface(This,pIMetaData,ppModule)( (This)->lpVtbl -> GetModuleFromMetaDataInterface(This,pIMetaData,ppModule) )
#define ICorDebugAppDomain_EnumerateBreakpoints(This,ppBreakpoints)( (This)->lpVtbl -> EnumerateBreakpoints(This,ppBreakpoints) )
#define ICorDebugAppDomain_EnumerateSteppers(This,ppSteppers)( (This)->lpVtbl -> EnumerateSteppers(This,ppSteppers) )
#define ICorDebugAppDomain_IsAttached(This,pbAttached)( (This)->lpVtbl -> IsAttached(This,pbAttached) )
#define ICorDebugAppDomain_GetName(This,cchName,pcchName,szName)( (This)->lpVtbl -> GetName(This,cchName,pcchName,szName) )
#define ICorDebugAppDomain_GetObject(This,ppObject)( (This)->lpVtbl -> GetObject(This,ppObject) )
#define ICorDebugAppDomain_Attach(This)( (This)->lpVtbl -> Attach(This) )
#define ICorDebugAppDomain_GetID(This,pId)( (This)->lpVtbl -> GetID(This,pId) )
#endif
#endif
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0012_v0_0_s_ifspec;
#ifndef __ICorDebugAppDomain2_INTERFACE_DEFINED__
#define __ICorDebugAppDomain2_INTERFACE_DEFINED__
extern const IID IID_ICorDebugAppDomain2;
typedef struct ICorDebugAppDomain2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugAppDomain2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugAppDomain2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugAppDomain2 * This);
	HRESULT(STDMETHODCALLTYPE * GetArrayOrPointerType) (ICorDebugAppDomain2 * This, CorElementType elementType, ULONG32 nRank, ICorDebugType * pTypeArg, ICorDebugType ** ppType);
	HRESULT(STDMETHODCALLTYPE * GetFunctionPointerType) (ICorDebugAppDomain2 * This, ULONG32 nTypeArgs, ICorDebugType * ppTypeArgs[], ICorDebugType ** ppType);
	END_INTERFACE
}  ICorDebugAppDomain2Vtbl;
interface ICorDebugAppDomain2
{
	CONST_VTBL struct ICorDebugAppDomain2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugAppDomain2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugAppDomain2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugAppDomain2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugAppDomain2_GetArrayOrPointerType(This,elementType,nRank,pTypeArg,ppType)( (This)->lpVtbl -> GetArrayOrPointerType(This,elementType,nRank,pTypeArg,ppType) )
#define ICorDebugAppDomain2_GetFunctionPointerType(This,nTypeArgs,ppTypeArgs,ppType)( (This)->lpVtbl -> GetFunctionPointerType(This,nTypeArgs,ppTypeArgs,ppType) )
#endif
#endif
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0013_v0_0_s_ifspec;
#ifndef __ICorDebugAssembly_INTERFACE_DEFINED__
#define __ICorDebugAssembly_INTERFACE_DEFINED__
extern const IID IID_ICorDebugAssembly;
typedef struct ICorDebugAssemblyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugAssembly * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugAssembly * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugAssembly * This);
	HRESULT(STDMETHODCALLTYPE * GetProcess) (ICorDebugAssembly * This, ICorDebugProcess ** ppProcess);
	HRESULT(STDMETHODCALLTYPE * GetAppDomain) (ICorDebugAssembly * This, ICorDebugAppDomain ** ppAppDomain);
	HRESULT(STDMETHODCALLTYPE * EnumerateModules) (ICorDebugAssembly * This, ICorDebugModuleEnum ** ppModules);
	HRESULT(STDMETHODCALLTYPE * GetCodeBase) (ICorDebugAssembly * This, ULONG32 cchName, ULONG32 * pcchName, WCHAR szName[]);
	HRESULT(STDMETHODCALLTYPE * GetName) (ICorDebugAssembly * This, ULONG32 cchName, ULONG32 * pcchName, WCHAR szName[]);
	END_INTERFACE
}  ICorDebugAssemblyVtbl;
interface ICorDebugAssembly
{
	CONST_VTBL struct ICorDebugAssemblyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugAssembly_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugAssembly_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugAssembly_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugAssembly_GetProcess(This,ppProcess)( (This)->lpVtbl -> GetProcess(This,ppProcess) )
#define ICorDebugAssembly_GetAppDomain(This,ppAppDomain)( (This)->lpVtbl -> GetAppDomain(This,ppAppDomain) )
#define ICorDebugAssembly_EnumerateModules(This,ppModules)( (This)->lpVtbl -> EnumerateModules(This,ppModules) )
#define ICorDebugAssembly_GetCodeBase(This,cchName,pcchName,szName)( (This)->lpVtbl -> GetCodeBase(This,cchName,pcchName,szName) )
#define ICorDebugAssembly_GetName(This,cchName,pcchName,szName)( (This)->lpVtbl -> GetName(This,cchName,pcchName,szName) )
#endif
#endif
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0014_v0_0_s_ifspec;
#ifndef __ICorDebugAssembly2_INTERFACE_DEFINED__
#define __ICorDebugAssembly2_INTERFACE_DEFINED__
extern const IID IID_ICorDebugAssembly2;
typedef struct ICorDebugAssembly2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugAssembly2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugAssembly2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugAssembly2 * This);
	HRESULT(STDMETHODCALLTYPE * IsFullyTrusted) (ICorDebugAssembly2 * This, BOOL * pbFullyTrusted);
	END_INTERFACE
}  ICorDebugAssembly2Vtbl;
interface ICorDebugAssembly2
{
	CONST_VTBL struct ICorDebugAssembly2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugAssembly2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugAssembly2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugAssembly2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugAssembly2_IsFullyTrusted(This,pbFullyTrusted)( (This)->lpVtbl -> IsFullyTrusted(This,pbFullyTrusted) )
#endif
#endif
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0015_v0_0_s_ifspec;
#ifndef __ICorDebugProcess_INTERFACE_DEFINED__
#define __ICorDebugProcess_INTERFACE_DEFINED__
extern const IID IID_ICorDebugProcess;
typedef struct ICorDebugProcessVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugProcess * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugProcess * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugProcess * This);
	HRESULT(STDMETHODCALLTYPE * Stop) (ICorDebugProcess * This, DWORD dwTimeoutIgnored);
	HRESULT(STDMETHODCALLTYPE * Continue) (ICorDebugProcess * This, BOOL fIsOutOfBand);
	HRESULT(STDMETHODCALLTYPE * IsRunning) (ICorDebugProcess * This, BOOL * pbRunning);
	HRESULT(STDMETHODCALLTYPE * HasQueuedCallbacks) (ICorDebugProcess * This, ICorDebugThread * pThread, BOOL * pbQueued);
	HRESULT(STDMETHODCALLTYPE * EnumerateThreads) (ICorDebugProcess * This, ICorDebugThreadEnum ** ppThreads);
	HRESULT(STDMETHODCALLTYPE * SetAllThreadsDebugState) (ICorDebugProcess * This, CorDebugThreadState state, ICorDebugThread * pExceptThisThread);
	HRESULT(STDMETHODCALLTYPE * Detach) (ICorDebugProcess * This);
	HRESULT(STDMETHODCALLTYPE * Terminate) (ICorDebugProcess * This, UINT exitCode);
	HRESULT(STDMETHODCALLTYPE * CanCommitChanges) (ICorDebugProcess * This, ULONG cSnapshots, ICorDebugEditAndContinueSnapshot * pSnapshots[], ICorDebugErrorInfoEnum ** pError);
	HRESULT(STDMETHODCALLTYPE * CommitChanges) (ICorDebugProcess * This, ULONG cSnapshots, ICorDebugEditAndContinueSnapshot * pSnapshots[], ICorDebugErrorInfoEnum ** pError);
	HRESULT(STDMETHODCALLTYPE * GetID) (ICorDebugProcess * This, DWORD * pdwProcessId);
	HRESULT(STDMETHODCALLTYPE * GetHandle) (ICorDebugProcess * This, HPROCESS * phProcessHandle);
	HRESULT(STDMETHODCALLTYPE * GetThread) (ICorDebugProcess * This, DWORD dwThreadId, ICorDebugThread ** ppThread);
	HRESULT(STDMETHODCALLTYPE * EnumerateObjects) (ICorDebugProcess * This, ICorDebugObjectEnum ** ppObjects);
	HRESULT(STDMETHODCALLTYPE * IsTransitionStub) (ICorDebugProcess * This, CORDB_ADDRESS address, BOOL * pbTransitionStub);
	HRESULT(STDMETHODCALLTYPE * IsOSSuspended) (ICorDebugProcess * This, DWORD threadID, BOOL * pbSuspended);
	HRESULT(STDMETHODCALLTYPE * GetThreadContext) (ICorDebugProcess * This, DWORD threadID, ULONG32 contextSize, BYTE context[]);
	HRESULT(STDMETHODCALLTYPE * SetThreadContext) (ICorDebugProcess * This, DWORD threadID, ULONG32 contextSize, BYTE context[]);
	HRESULT(STDMETHODCALLTYPE * ReadMemory) (ICorDebugProcess * This, CORDB_ADDRESS address, DWORD size, BYTE buffer[], SIZE_T * read);
	HRESULT(STDMETHODCALLTYPE * WriteMemory) (ICorDebugProcess * This, CORDB_ADDRESS address, DWORD size, BYTE buffer[], SIZE_T * written);
	HRESULT(STDMETHODCALLTYPE * ClearCurrentException) (ICorDebugProcess * This, DWORD threadID);
	HRESULT(STDMETHODCALLTYPE * EnableLogMessages) (ICorDebugProcess * This, BOOL fOnOff);
	HRESULT(STDMETHODCALLTYPE * ModifyLogSwitch) (ICorDebugProcess * This, WCHAR * pLogSwitchName, LONG lLevel);
	HRESULT(STDMETHODCALLTYPE * EnumerateAppDomains) (ICorDebugProcess * This, ICorDebugAppDomainEnum ** ppAppDomains);
	HRESULT(STDMETHODCALLTYPE * GetObject) (ICorDebugProcess * This, ICorDebugValue ** ppObject);
	HRESULT(STDMETHODCALLTYPE * ThreadForFiberCookie) (ICorDebugProcess * This, DWORD fiberCookie, ICorDebugThread ** ppThread);
	HRESULT(STDMETHODCALLTYPE * GetHelperThreadID) (ICorDebugProcess * This, DWORD * pThreadID);
	END_INTERFACE
}  ICorDebugProcessVtbl;
interface ICorDebugProcess
{
	CONST_VTBL struct ICorDebugProcessVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugProcess_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugProcess_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugProcess_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugProcess_Stop(This,dwTimeoutIgnored)( (This)->lpVtbl -> Stop(This,dwTimeoutIgnored) )
#define ICorDebugProcess_Continue(This,fIsOutOfBand)( (This)->lpVtbl -> Continue(This,fIsOutOfBand) )
#define ICorDebugProcess_IsRunning(This,pbRunning)( (This)->lpVtbl -> IsRunning(This,pbRunning) )
#define ICorDebugProcess_HasQueuedCallbacks(This,pThread,pbQueued)( (This)->lpVtbl -> HasQueuedCallbacks(This,pThread,pbQueued) )
#define ICorDebugProcess_EnumerateThreads(This,ppThreads)( (This)->lpVtbl -> EnumerateThreads(This,ppThreads) )
#define ICorDebugProcess_SetAllThreadsDebugState(This,state,pExceptThisThread)( (This)->lpVtbl -> SetAllThreadsDebugState(This,state,pExceptThisThread) )
#define ICorDebugProcess_Detach(This)( (This)->lpVtbl -> Detach(This) )
#define ICorDebugProcess_Terminate(This,exitCode)( (This)->lpVtbl -> Terminate(This,exitCode) )
#define ICorDebugProcess_CanCommitChanges(This,cSnapshots,pSnapshots,pError)( (This)->lpVtbl -> CanCommitChanges(This,cSnapshots,pSnapshots,pError) )
#define ICorDebugProcess_CommitChanges(This,cSnapshots,pSnapshots,pError)( (This)->lpVtbl -> CommitChanges(This,cSnapshots,pSnapshots,pError) )
#define ICorDebugProcess_GetID(This,pdwProcessId)( (This)->lpVtbl -> GetID(This,pdwProcessId) )
#define ICorDebugProcess_GetHandle(This,phProcessHandle)( (This)->lpVtbl -> GetHandle(This,phProcessHandle) )
#define ICorDebugProcess_GetThread(This,dwThreadId,ppThread)( (This)->lpVtbl -> GetThread(This,dwThreadId,ppThread) )
#define ICorDebugProcess_EnumerateObjects(This,ppObjects)( (This)->lpVtbl -> EnumerateObjects(This,ppObjects) )
#define ICorDebugProcess_IsTransitionStub(This,address,pbTransitionStub)( (This)->lpVtbl -> IsTransitionStub(This,address,pbTransitionStub) )
#define ICorDebugProcess_IsOSSuspended(This,threadID,pbSuspended)( (This)->lpVtbl -> IsOSSuspended(This,threadID,pbSuspended) )
#define ICorDebugProcess_GetThreadContext(This,threadID,contextSize,context)( (This)->lpVtbl -> GetThreadContext(This,threadID,contextSize,context) )
#define ICorDebugProcess_SetThreadContext(This,threadID,contextSize,context)( (This)->lpVtbl -> SetThreadContext(This,threadID,contextSize,context) )
#define ICorDebugProcess_ReadMemory(This,address,size,buffer,read)( (This)->lpVtbl -> ReadMemory(This,address,size,buffer,read) )
#define ICorDebugProcess_WriteMemory(This,address,size,buffer,written)( (This)->lpVtbl -> WriteMemory(This,address,size,buffer,written) )
#define ICorDebugProcess_ClearCurrentException(This,threadID)( (This)->lpVtbl -> ClearCurrentException(This,threadID) )
#define ICorDebugProcess_EnableLogMessages(This,fOnOff)( (This)->lpVtbl -> EnableLogMessages(This,fOnOff) )
#define ICorDebugProcess_ModifyLogSwitch(This,pLogSwitchName,lLevel)( (This)->lpVtbl -> ModifyLogSwitch(This,pLogSwitchName,lLevel) )
#define ICorDebugProcess_EnumerateAppDomains(This,ppAppDomains)( (This)->lpVtbl -> EnumerateAppDomains(This,ppAppDomains) )
#define ICorDebugProcess_GetObject(This,ppObject)( (This)->lpVtbl -> GetObject(This,ppObject) )
#define ICorDebugProcess_ThreadForFiberCookie(This,fiberCookie,ppThread)( (This)->lpVtbl -> ThreadForFiberCookie(This,fiberCookie,ppThread) )
#define ICorDebugProcess_GetHelperThreadID(This,pThreadID)( (This)->lpVtbl -> GetHelperThreadID(This,pThreadID) )
#endif
#endif
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0016_v0_0_s_ifspec;
#ifndef __ICorDebugProcess2_INTERFACE_DEFINED__
#define __ICorDebugProcess2_INTERFACE_DEFINED__
extern const IID IID_ICorDebugProcess2;
typedef struct ICorDebugProcess2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugProcess2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugProcess2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugProcess2 * This);
	HRESULT(STDMETHODCALLTYPE * GetThreadForTaskID) (ICorDebugProcess2 * This, TASKID taskid, ICorDebugThread2 ** ppThread);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (ICorDebugProcess2 * This, COR_VERSION * version);
	HRESULT(STDMETHODCALLTYPE * SetUnmanagedBreakpoint) (ICorDebugProcess2 * This, CORDB_ADDRESS address, ULONG32 bufsize, BYTE buffer[], ULONG32 * bufLen);
	HRESULT(STDMETHODCALLTYPE * ClearUnmanagedBreakpoint) (ICorDebugProcess2 * This, CORDB_ADDRESS address);
	HRESULT(STDMETHODCALLTYPE * SetDesiredNGENCompilerFlags) (ICorDebugProcess2 * This, DWORD pdwFlags);
	HRESULT(STDMETHODCALLTYPE * GetDesiredNGENCompilerFlags) (ICorDebugProcess2 * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * GetReferenceValueFromGCHandle) (ICorDebugProcess2 * This, UINT_PTR handle, ICorDebugReferenceValue ** pOutValue);
	END_INTERFACE
}  ICorDebugProcess2Vtbl;
interface ICorDebugProcess2
{
	CONST_VTBL struct ICorDebugProcess2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugProcess2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugProcess2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugProcess2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugProcess2_GetThreadForTaskID(This,taskid,ppThread)( (This)->lpVtbl -> GetThreadForTaskID(This,taskid,ppThread) )
#define ICorDebugProcess2_GetVersion(This,version)( (This)->lpVtbl -> GetVersion(This,version) )
#define ICorDebugProcess2_SetUnmanagedBreakpoint(This,address,bufsize,buffer,bufLen)( (This)->lpVtbl -> SetUnmanagedBreakpoint(This,address,bufsize,buffer,bufLen) )
#define ICorDebugProcess2_ClearUnmanagedBreakpoint(This,address)( (This)->lpVtbl -> ClearUnmanagedBreakpoint(This,address) )
#define ICorDebugProcess2_SetDesiredNGENCompilerFlags(This,pdwFlags)( (This)->lpVtbl -> SetDesiredNGENCompilerFlags(This,pdwFlags) )
#define ICorDebugProcess2_GetDesiredNGENCompilerFlags(This,pdwFlags)( (This)->lpVtbl -> GetDesiredNGENCompilerFlags(This,pdwFlags) )
#define ICorDebugProcess2_GetReferenceValueFromGCHandle(This,handle,pOutValue)( (This)->lpVtbl -> GetReferenceValueFromGCHandle(This,handle,pOutValue) )
#endif
#endif
#ifndef __ICorDebugProcess3_INTERFACE_DEFINED__
#define __ICorDebugProcess3_INTERFACE_DEFINED__
extern const IID IID_ICorDebugProcess3;
typedef struct ICorDebugProcess3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugProcess3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugProcess3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugProcess3 * This);
	HRESULT(STDMETHODCALLTYPE * SetEnableCustomNotification) (ICorDebugProcess3 * This, ICorDebugClass * pClass, BOOL fEnable);
	END_INTERFACE
}  ICorDebugProcess3Vtbl;
interface ICorDebugProcess3
{
	CONST_VTBL struct ICorDebugProcess3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugProcess3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugProcess3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugProcess3_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugProcess3_SetEnableCustomNotification(This,pClass,fEnable)( (This)->lpVtbl -> SetEnableCustomNotification(This,pClass,fEnable) )
#endif
#endif
#ifndef __ICorDebugBreakpoint_INTERFACE_DEFINED__
#define __ICorDebugBreakpoint_INTERFACE_DEFINED__
extern const IID IID_ICorDebugBreakpoint;
typedef struct ICorDebugBreakpointVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugBreakpoint * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugBreakpoint * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugBreakpoint * This);
	HRESULT(STDMETHODCALLTYPE * Activate) (ICorDebugBreakpoint * This, BOOL bActive);
	HRESULT(STDMETHODCALLTYPE * IsActive) (ICorDebugBreakpoint * This, BOOL * pbActive);
	END_INTERFACE
}  ICorDebugBreakpointVtbl;
interface ICorDebugBreakpoint
{
	CONST_VTBL struct ICorDebugBreakpointVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugBreakpoint_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugBreakpoint_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugBreakpoint_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugBreakpoint_Activate(This,bActive)( (This)->lpVtbl -> Activate(This,bActive) )
#define ICorDebugBreakpoint_IsActive(This,pbActive)( (This)->lpVtbl -> IsActive(This,pbActive) )
#endif
#endif
#ifndef __ICorDebugFunctionBreakpoint_INTERFACE_DEFINED__
#define __ICorDebugFunctionBreakpoint_INTERFACE_DEFINED__
extern const IID IID_ICorDebugFunctionBreakpoint;
typedef struct ICorDebugFunctionBreakpointVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugFunctionBreakpoint * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugFunctionBreakpoint * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugFunctionBreakpoint * This);
	HRESULT(STDMETHODCALLTYPE * Activate) (ICorDebugFunctionBreakpoint * This, BOOL bActive);
	HRESULT(STDMETHODCALLTYPE * IsActive) (ICorDebugFunctionBreakpoint * This, BOOL * pbActive);
	HRESULT(STDMETHODCALLTYPE * GetFunction) (ICorDebugFunctionBreakpoint * This, ICorDebugFunction ** ppFunction);
	HRESULT(STDMETHODCALLTYPE * GetOffset) (ICorDebugFunctionBreakpoint * This, ULONG32 * pnOffset);
	END_INTERFACE
}  ICorDebugFunctionBreakpointVtbl;
interface ICorDebugFunctionBreakpoint
{
	CONST_VTBL struct ICorDebugFunctionBreakpointVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugFunctionBreakpoint_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugFunctionBreakpoint_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugFunctionBreakpoint_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugFunctionBreakpoint_Activate(This,bActive)( (This)->lpVtbl -> Activate(This,bActive) )
#define ICorDebugFunctionBreakpoint_IsActive(This,pbActive)( (This)->lpVtbl -> IsActive(This,pbActive) )
#define ICorDebugFunctionBreakpoint_GetFunction(This,ppFunction)( (This)->lpVtbl -> GetFunction(This,ppFunction) )
#define ICorDebugFunctionBreakpoint_GetOffset(This,pnOffset)( (This)->lpVtbl -> GetOffset(This,pnOffset) )
#endif
#endif
#ifndef __ICorDebugModuleBreakpoint_INTERFACE_DEFINED__
#define __ICorDebugModuleBreakpoint_INTERFACE_DEFINED__
extern const IID IID_ICorDebugModuleBreakpoint;
typedef struct ICorDebugModuleBreakpointVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugModuleBreakpoint * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugModuleBreakpoint * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugModuleBreakpoint * This);
	HRESULT(STDMETHODCALLTYPE * Activate) (ICorDebugModuleBreakpoint * This, BOOL bActive);
	HRESULT(STDMETHODCALLTYPE * IsActive) (ICorDebugModuleBreakpoint * This, BOOL * pbActive);
	HRESULT(STDMETHODCALLTYPE * GetModule) (ICorDebugModuleBreakpoint * This, ICorDebugModule ** ppModule);
	END_INTERFACE
}  ICorDebugModuleBreakpointVtbl;
interface ICorDebugModuleBreakpoint
{
	CONST_VTBL struct ICorDebugModuleBreakpointVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugModuleBreakpoint_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugModuleBreakpoint_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugModuleBreakpoint_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugModuleBreakpoint_Activate(This,bActive)( (This)->lpVtbl -> Activate(This,bActive) )
#define ICorDebugModuleBreakpoint_IsActive(This,pbActive)( (This)->lpVtbl -> IsActive(This,pbActive) )
#define ICorDebugModuleBreakpoint_GetModule(This,ppModule)( (This)->lpVtbl -> GetModule(This,ppModule) )
#endif
#endif
#ifndef __ICorDebugValueBreakpoint_INTERFACE_DEFINED__
#define __ICorDebugValueBreakpoint_INTERFACE_DEFINED__
extern const IID IID_ICorDebugValueBreakpoint;
typedef struct ICorDebugValueBreakpointVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugValueBreakpoint * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugValueBreakpoint * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugValueBreakpoint * This);
	HRESULT(STDMETHODCALLTYPE * Activate) (ICorDebugValueBreakpoint * This, BOOL bActive);
	HRESULT(STDMETHODCALLTYPE * IsActive) (ICorDebugValueBreakpoint * This, BOOL * pbActive);
	HRESULT(STDMETHODCALLTYPE * GetValue) (ICorDebugValueBreakpoint * This, ICorDebugValue ** ppValue);
	END_INTERFACE
}  ICorDebugValueBreakpointVtbl;
interface ICorDebugValueBreakpoint
{
	CONST_VTBL struct ICorDebugValueBreakpointVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugValueBreakpoint_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugValueBreakpoint_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugValueBreakpoint_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugValueBreakpoint_Activate(This,bActive)( (This)->lpVtbl -> Activate(This,bActive) )
#define ICorDebugValueBreakpoint_IsActive(This,pbActive)( (This)->lpVtbl -> IsActive(This,pbActive) )
#define ICorDebugValueBreakpoint_GetValue(This,ppValue)( (This)->lpVtbl -> GetValue(This,ppValue) )
#endif
#endif
#ifndef __ICorDebugStepper_INTERFACE_DEFINED__
#define __ICorDebugStepper_INTERFACE_DEFINED__
typedef enum CorDebugIntercept
{
	INTERCEPT_NONE = 0,
	INTERCEPT_CLASS_INIT = 0x1,
	INTERCEPT_EXCEPTION_FILTER = 0x2,
	INTERCEPT_SECURITY = 0x4,
	INTERCEPT_CONTEXT_POLICY = 0x8,
	INTERCEPT_INTERCEPTION = 0x10,
	INTERCEPT_ALL = 0xffff
} CorDebugIntercept;
typedef enum CorDebugUnmappedStop
{
	STOP_NONE = 0,
	STOP_PROLOG = 0x1,
	STOP_EPILOG = 0x2,
	STOP_NO_MAPPING_INFO = 0x4,
	STOP_OTHER_UNMAPPED = 0x8,
	STOP_UNMANAGED = 0x10,
	STOP_ALL = 0xffff
} CorDebugUnmappedStop;
typedef struct COR_DEBUG_STEP_RANGE
{
	ULONG32 startOffset;
	ULONG32 endOffset;
} COR_DEBUG_STEP_RANGE;
extern const IID IID_ICorDebugStepper;
typedef struct ICorDebugStepperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugStepper * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugStepper * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugStepper * This);
	HRESULT(STDMETHODCALLTYPE * IsActive) (ICorDebugStepper * This, BOOL * pbActive);
	HRESULT(STDMETHODCALLTYPE * Deactivate) (ICorDebugStepper * This);
	HRESULT(STDMETHODCALLTYPE * SetInterceptMask) (ICorDebugStepper * This, CorDebugIntercept mask);
	HRESULT(STDMETHODCALLTYPE * SetUnmappedStopMask) (ICorDebugStepper * This, CorDebugUnmappedStop mask);
	HRESULT(STDMETHODCALLTYPE * Step) (ICorDebugStepper * This, BOOL bStepIn);
	HRESULT(STDMETHODCALLTYPE * StepRange) (ICorDebugStepper * This, BOOL bStepIn, COR_DEBUG_STEP_RANGE ranges[], ULONG32 cRangeCount);
	HRESULT(STDMETHODCALLTYPE * StepOut) (ICorDebugStepper * This);
	HRESULT(STDMETHODCALLTYPE * SetRangeIL) (ICorDebugStepper * This, BOOL bIL);
	END_INTERFACE
}  ICorDebugStepperVtbl;
interface ICorDebugStepper
{
	CONST_VTBL struct ICorDebugStepperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugStepper_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugStepper_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugStepper_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugStepper_IsActive(This,pbActive)( (This)->lpVtbl -> IsActive(This,pbActive) )
#define ICorDebugStepper_Deactivate(This)( (This)->lpVtbl -> Deactivate(This) )
#define ICorDebugStepper_SetInterceptMask(This,mask)( (This)->lpVtbl -> SetInterceptMask(This,mask) )
#define ICorDebugStepper_SetUnmappedStopMask(This,mask)( (This)->lpVtbl -> SetUnmappedStopMask(This,mask) )
#define ICorDebugStepper_Step(This,bStepIn)( (This)->lpVtbl -> Step(This,bStepIn) )
#define ICorDebugStepper_StepRange(This,bStepIn,ranges,cRangeCount)( (This)->lpVtbl -> StepRange(This,bStepIn,ranges,cRangeCount) )
#define ICorDebugStepper_StepOut(This)( (This)->lpVtbl -> StepOut(This) )
#define ICorDebugStepper_SetRangeIL(This,bIL)( (This)->lpVtbl -> SetRangeIL(This,bIL) )
#endif
#endif
#ifndef __ICorDebugStepper2_INTERFACE_DEFINED__
#define __ICorDebugStepper2_INTERFACE_DEFINED__
extern const IID IID_ICorDebugStepper2;
typedef struct ICorDebugStepper2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugStepper2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugStepper2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugStepper2 * This);
	HRESULT(STDMETHODCALLTYPE * SetJMC) (ICorDebugStepper2 * This, BOOL fIsJMCStepper);
	END_INTERFACE
}  ICorDebugStepper2Vtbl;
interface ICorDebugStepper2
{
	CONST_VTBL struct ICorDebugStepper2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugStepper2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugStepper2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugStepper2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugStepper2_SetJMC(This,fIsJMCStepper)( (This)->lpVtbl -> SetJMC(This,fIsJMCStepper) )
#endif
#endif
#ifndef __ICorDebugRegisterSet_INTERFACE_DEFINED__
#define __ICorDebugRegisterSet_INTERFACE_DEFINED__
typedef enum CorDebugRegister
{
	REGISTER_INSTRUCTION_POINTER = 0,
	REGISTER_STACK_POINTER = (REGISTER_INSTRUCTION_POINTER + 1),
	REGISTER_FRAME_POINTER = (REGISTER_STACK_POINTER + 1),
	REGISTER_X86_EIP = 0,
	REGISTER_X86_ESP = (REGISTER_X86_EIP + 1),
	REGISTER_X86_EBP = (REGISTER_X86_ESP + 1),
	REGISTER_X86_EAX = (REGISTER_X86_EBP + 1),
	REGISTER_X86_ECX = (REGISTER_X86_EAX + 1),
	REGISTER_X86_EDX = (REGISTER_X86_ECX + 1),
	REGISTER_X86_EBX = (REGISTER_X86_EDX + 1),
	REGISTER_X86_ESI = (REGISTER_X86_EBX + 1),
	REGISTER_X86_EDI = (REGISTER_X86_ESI + 1),
	REGISTER_X86_FPSTACK_0 = (REGISTER_X86_EDI + 1),
	REGISTER_X86_FPSTACK_1 = (REGISTER_X86_FPSTACK_0 + 1),
	REGISTER_X86_FPSTACK_2 = (REGISTER_X86_FPSTACK_1 + 1),
	REGISTER_X86_FPSTACK_3 = (REGISTER_X86_FPSTACK_2 + 1),
	REGISTER_X86_FPSTACK_4 = (REGISTER_X86_FPSTACK_3 + 1),
	REGISTER_X86_FPSTACK_5 = (REGISTER_X86_FPSTACK_4 + 1),
	REGISTER_X86_FPSTACK_6 = (REGISTER_X86_FPSTACK_5 + 1),
	REGISTER_X86_FPSTACK_7 = (REGISTER_X86_FPSTACK_6 + 1),
	REGISTER_AMD64_RIP = 0,
	REGISTER_AMD64_RSP = (REGISTER_AMD64_RIP + 1),
	REGISTER_AMD64_RBP = (REGISTER_AMD64_RSP + 1),
	REGISTER_AMD64_RAX = (REGISTER_AMD64_RBP + 1),
	REGISTER_AMD64_RCX = (REGISTER_AMD64_RAX + 1),
	REGISTER_AMD64_RDX = (REGISTER_AMD64_RCX + 1),
	REGISTER_AMD64_RBX = (REGISTER_AMD64_RDX + 1),
	REGISTER_AMD64_RSI = (REGISTER_AMD64_RBX + 1),
	REGISTER_AMD64_RDI = (REGISTER_AMD64_RSI + 1),
	REGISTER_AMD64_R8 = (REGISTER_AMD64_RDI + 1),
	REGISTER_AMD64_R9 = (REGISTER_AMD64_R8 + 1),
	REGISTER_AMD64_R10 = (REGISTER_AMD64_R9 + 1),
	REGISTER_AMD64_R11 = (REGISTER_AMD64_R10 + 1),
	REGISTER_AMD64_R12 = (REGISTER_AMD64_R11 + 1),
	REGISTER_AMD64_R13 = (REGISTER_AMD64_R12 + 1),
	REGISTER_AMD64_R14 = (REGISTER_AMD64_R13 + 1),
	REGISTER_AMD64_R15 = (REGISTER_AMD64_R14 + 1),
	REGISTER_AMD64_XMM0 = (REGISTER_AMD64_R15 + 1),
	REGISTER_AMD64_XMM1 = (REGISTER_AMD64_XMM0 + 1),
	REGISTER_AMD64_XMM2 = (REGISTER_AMD64_XMM1 + 1),
	REGISTER_AMD64_XMM3 = (REGISTER_AMD64_XMM2 + 1),
	REGISTER_AMD64_XMM4 = (REGISTER_AMD64_XMM3 + 1),
	REGISTER_AMD64_XMM5 = (REGISTER_AMD64_XMM4 + 1),
	REGISTER_AMD64_XMM6 = (REGISTER_AMD64_XMM5 + 1),
	REGISTER_AMD64_XMM7 = (REGISTER_AMD64_XMM6 + 1),
	REGISTER_AMD64_XMM8 = (REGISTER_AMD64_XMM7 + 1),
	REGISTER_AMD64_XMM9 = (REGISTER_AMD64_XMM8 + 1),
	REGISTER_AMD64_XMM10 = (REGISTER_AMD64_XMM9 + 1),
	REGISTER_AMD64_XMM11 = (REGISTER_AMD64_XMM10 + 1),
	REGISTER_AMD64_XMM12 = (REGISTER_AMD64_XMM11 + 1),
	REGISTER_AMD64_XMM13 = (REGISTER_AMD64_XMM12 + 1),
	REGISTER_AMD64_XMM14 = (REGISTER_AMD64_XMM13 + 1),
	REGISTER_AMD64_XMM15 = (REGISTER_AMD64_XMM14 + 1),
	REGISTER_IA64_BSP = REGISTER_FRAME_POINTER,
	REGISTER_IA64_R0 = (REGISTER_IA64_BSP + 1),
	REGISTER_IA64_F0 = (REGISTER_IA64_R0 + 128)
} CorDebugRegister;
extern const IID IID_ICorDebugRegisterSet;
typedef struct ICorDebugRegisterSetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugRegisterSet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugRegisterSet * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugRegisterSet * This);
	HRESULT(STDMETHODCALLTYPE * GetRegistersAvailable) (ICorDebugRegisterSet * This, ULONG64 * pAvailable);
	HRESULT(STDMETHODCALLTYPE * GetRegisters) (ICorDebugRegisterSet * This, ULONG64 mask, ULONG32 regCount, CORDB_REGISTER regBuffer[]);
	HRESULT(STDMETHODCALLTYPE * SetRegisters) (ICorDebugRegisterSet * This, ULONG64 mask, ULONG32 regCount, CORDB_REGISTER regBuffer[]);
	HRESULT(STDMETHODCALLTYPE * GetThreadContext) (ICorDebugRegisterSet * This, ULONG32 contextSize, BYTE context[]);
	HRESULT(STDMETHODCALLTYPE * SetThreadContext) (ICorDebugRegisterSet * This, ULONG32 contextSize, BYTE context[]);
	END_INTERFACE
}  ICorDebugRegisterSetVtbl;
interface ICorDebugRegisterSet
{
	CONST_VTBL struct ICorDebugRegisterSetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugRegisterSet_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugRegisterSet_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugRegisterSet_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugRegisterSet_GetRegistersAvailable(This,pAvailable)( (This)->lpVtbl -> GetRegistersAvailable(This,pAvailable) )
#define ICorDebugRegisterSet_GetRegisters(This,mask,regCount,regBuffer)( (This)->lpVtbl -> GetRegisters(This,mask,regCount,regBuffer) )
#define ICorDebugRegisterSet_SetRegisters(This,mask,regCount,regBuffer)( (This)->lpVtbl -> SetRegisters(This,mask,regCount,regBuffer) )
#define ICorDebugRegisterSet_GetThreadContext(This,contextSize,context)( (This)->lpVtbl -> GetThreadContext(This,contextSize,context) )
#define ICorDebugRegisterSet_SetThreadContext(This,contextSize,context)( (This)->lpVtbl -> SetThreadContext(This,contextSize,context) )
#endif
#endif
#ifndef __ICorDebugRegisterSet2_INTERFACE_DEFINED__
#define __ICorDebugRegisterSet2_INTERFACE_DEFINED__
extern const IID IID_ICorDebugRegisterSet2;
typedef struct ICorDebugRegisterSet2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugRegisterSet2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugRegisterSet2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugRegisterSet2 * This);
	HRESULT(STDMETHODCALLTYPE * GetRegistersAvailable) (ICorDebugRegisterSet2 * This, ULONG32 numChunks, BYTE availableRegChunks[]);
	HRESULT(STDMETHODCALLTYPE * GetRegisters) (ICorDebugRegisterSet2 * This, ULONG32 maskCount, BYTE mask[], ULONG32 regCount, CORDB_REGISTER regBuffer[]);
	HRESULT(STDMETHODCALLTYPE * SetRegisters) (ICorDebugRegisterSet2 * This, ULONG32 maskCount, BYTE mask[], ULONG32 regCount, CORDB_REGISTER regBuffer[]);
	END_INTERFACE
}  ICorDebugRegisterSet2Vtbl;
interface ICorDebugRegisterSet2
{
	CONST_VTBL struct ICorDebugRegisterSet2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugRegisterSet2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugRegisterSet2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugRegisterSet2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugRegisterSet2_GetRegistersAvailable(This,numChunks,availableRegChunks)( (This)->lpVtbl -> GetRegistersAvailable(This,numChunks,availableRegChunks) )
#define ICorDebugRegisterSet2_GetRegisters(This,maskCount,mask,regCount,regBuffer)( (This)->lpVtbl -> GetRegisters(This,maskCount,mask,regCount,regBuffer) )
#define ICorDebugRegisterSet2_SetRegisters(This,maskCount,mask,regCount,regBuffer)( (This)->lpVtbl -> SetRegisters(This,maskCount,mask,regCount,regBuffer) )
#endif
#endif
#ifndef __ICorDebugThread_INTERFACE_DEFINED__
#define __ICorDebugThread_INTERFACE_DEFINED__
typedef enum CorDebugUserState
{
	USER_STOP_REQUESTED = 0x1,
	USER_SUSPEND_REQUESTED = 0x2,
	USER_BACKGROUND = 0x4,
	USER_UNSTARTED = 0x8,
	USER_STOPPED = 0x10,
	USER_WAIT_SLEEP_JOIN = 0x20,
	USER_SUSPENDED = 0x40,
	USER_UNSAFE_POINT = 0x80
} CorDebugUserState;
extern const IID IID_ICorDebugThread;
typedef struct ICorDebugThreadVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugThread * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugThread * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugThread * This);
	HRESULT(STDMETHODCALLTYPE * GetProcess) (ICorDebugThread * This, ICorDebugProcess ** ppProcess);
	HRESULT(STDMETHODCALLTYPE * GetID) (ICorDebugThread * This, DWORD * pdwThreadId);
	HRESULT(STDMETHODCALLTYPE * GetHandle) (ICorDebugThread * This, HTHREAD * phThreadHandle);
	HRESULT(STDMETHODCALLTYPE * GetAppDomain) (ICorDebugThread * This, ICorDebugAppDomain ** ppAppDomain);
	HRESULT(STDMETHODCALLTYPE * SetDebugState) (ICorDebugThread * This, CorDebugThreadState state);
	HRESULT(STDMETHODCALLTYPE * GetDebugState) (ICorDebugThread * This, CorDebugThreadState * pState);
	HRESULT(STDMETHODCALLTYPE * GetUserState) (ICorDebugThread * This, CorDebugUserState * pState);
	HRESULT(STDMETHODCALLTYPE * GetCurrentException) (ICorDebugThread * This, ICorDebugValue ** ppExceptionObject);
	HRESULT(STDMETHODCALLTYPE * ClearCurrentException) (ICorDebugThread * This);
	HRESULT(STDMETHODCALLTYPE * CreateStepper) (ICorDebugThread * This, ICorDebugStepper ** ppStepper);
	HRESULT(STDMETHODCALLTYPE * EnumerateChains) (ICorDebugThread * This, ICorDebugChainEnum ** ppChains);
	HRESULT(STDMETHODCALLTYPE * GetActiveChain) (ICorDebugThread * This, ICorDebugChain ** ppChain);
	HRESULT(STDMETHODCALLTYPE * GetActiveFrame) (ICorDebugThread * This, ICorDebugFrame ** ppFrame);
	HRESULT(STDMETHODCALLTYPE * GetRegisterSet) (ICorDebugThread * This, ICorDebugRegisterSet ** ppRegisters);
	HRESULT(STDMETHODCALLTYPE * CreateEval) (ICorDebugThread * This, ICorDebugEval ** ppEval);
	HRESULT(STDMETHODCALLTYPE * GetObject) (ICorDebugThread * This, ICorDebugValue ** ppObject);
	END_INTERFACE
}  ICorDebugThreadVtbl;
interface ICorDebugThread
{
	CONST_VTBL struct ICorDebugThreadVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugThread_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugThread_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugThread_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugThread_GetProcess(This,ppProcess)( (This)->lpVtbl -> GetProcess(This,ppProcess) )
#define ICorDebugThread_GetID(This,pdwThreadId)( (This)->lpVtbl -> GetID(This,pdwThreadId) )
#define ICorDebugThread_GetHandle(This,phThreadHandle)( (This)->lpVtbl -> GetHandle(This,phThreadHandle) )
#define ICorDebugThread_GetAppDomain(This,ppAppDomain)( (This)->lpVtbl -> GetAppDomain(This,ppAppDomain) )
#define ICorDebugThread_SetDebugState(This,state)( (This)->lpVtbl -> SetDebugState(This,state) )
#define ICorDebugThread_GetDebugState(This,pState)( (This)->lpVtbl -> GetDebugState(This,pState) )
#define ICorDebugThread_GetUserState(This,pState)( (This)->lpVtbl -> GetUserState(This,pState) )
#define ICorDebugThread_GetCurrentException(This,ppExceptionObject)( (This)->lpVtbl -> GetCurrentException(This,ppExceptionObject) )
#define ICorDebugThread_ClearCurrentException(This)( (This)->lpVtbl -> ClearCurrentException(This) )
#define ICorDebugThread_CreateStepper(This,ppStepper)( (This)->lpVtbl -> CreateStepper(This,ppStepper) )
#define ICorDebugThread_EnumerateChains(This,ppChains)( (This)->lpVtbl -> EnumerateChains(This,ppChains) )
#define ICorDebugThread_GetActiveChain(This,ppChain)( (This)->lpVtbl -> GetActiveChain(This,ppChain) )
#define ICorDebugThread_GetActiveFrame(This,ppFrame)( (This)->lpVtbl -> GetActiveFrame(This,ppFrame) )
#define ICorDebugThread_GetRegisterSet(This,ppRegisters)( (This)->lpVtbl -> GetRegisterSet(This,ppRegisters) )
#define ICorDebugThread_CreateEval(This,ppEval)( (This)->lpVtbl -> CreateEval(This,ppEval) )
#define ICorDebugThread_GetObject(This,ppObject)( (This)->lpVtbl -> GetObject(This,ppObject) )
#endif
#endif
#ifndef __ICorDebugThread2_INTERFACE_DEFINED__
#define __ICorDebugThread2_INTERFACE_DEFINED__
typedef struct _COR_ACTIVE_FUNCTION
{
	ICorDebugAppDomain *pAppDomain;
	ICorDebugModule *pModule;
	ICorDebugFunction2 *pFunction;
	ULONG32 ilOffset;
	ULONG32 flags;
} COR_ACTIVE_FUNCTION;
extern const IID IID_ICorDebugThread2;
typedef struct ICorDebugThread2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugThread2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugThread2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugThread2 * This);
	HRESULT(STDMETHODCALLTYPE * GetActiveFunctions) (ICorDebugThread2 * This, ULONG32 cFunctions, ULONG32 * pcFunctions, COR_ACTIVE_FUNCTION pFunctions[]);
	HRESULT(STDMETHODCALLTYPE * GetConnectionID) (ICorDebugThread2 * This, CONNID * pdwConnectionId);
	HRESULT(STDMETHODCALLTYPE * GetTaskID) (ICorDebugThread2 * This, TASKID * pTaskId);
	HRESULT(STDMETHODCALLTYPE * GetVolatileOSThreadID) (ICorDebugThread2 * This, DWORD * pdwTid);
	HRESULT(STDMETHODCALLTYPE * InterceptCurrentException) (ICorDebugThread2 * This, ICorDebugFrame * pFrame);
	END_INTERFACE
}  ICorDebugThread2Vtbl;
interface ICorDebugThread2
{
	CONST_VTBL struct ICorDebugThread2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugThread2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugThread2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugThread2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugThread2_GetActiveFunctions(This,cFunctions,pcFunctions,pFunctions)( (This)->lpVtbl -> GetActiveFunctions(This,cFunctions,pcFunctions,pFunctions) )
#define ICorDebugThread2_GetConnectionID(This,pdwConnectionId)( (This)->lpVtbl -> GetConnectionID(This,pdwConnectionId) )
#define ICorDebugThread2_GetTaskID(This,pTaskId)( (This)->lpVtbl -> GetTaskID(This,pTaskId) )
#define ICorDebugThread2_GetVolatileOSThreadID(This,pdwTid)( (This)->lpVtbl -> GetVolatileOSThreadID(This,pdwTid) )
#define ICorDebugThread2_InterceptCurrentException(This,pFrame)( (This)->lpVtbl -> InterceptCurrentException(This,pFrame) )
#endif
#endif
#ifndef __ICorDebugThread3_INTERFACE_DEFINED__
#define __ICorDebugThread3_INTERFACE_DEFINED__
extern const IID IID_ICorDebugThread3;
typedef struct ICorDebugThread3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugThread3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugThread3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugThread3 * This);
	HRESULT(STDMETHODCALLTYPE * CreateStackWalk) (ICorDebugThread3 * This, ICorDebugStackWalk ** ppStackWalk);
	HRESULT(STDMETHODCALLTYPE * GetActiveInternalFrames) (ICorDebugThread3 * This, ULONG32 cInternalFrames, ULONG32 * pcInternalFrames, ICorDebugInternalFrame2 * ppInternalFrames[]);
	END_INTERFACE
}  ICorDebugThread3Vtbl;
interface ICorDebugThread3
{
	CONST_VTBL struct ICorDebugThread3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugThread3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugThread3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugThread3_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugThread3_CreateStackWalk(This,ppStackWalk)( (This)->lpVtbl -> CreateStackWalk(This,ppStackWalk) )
#define ICorDebugThread3_GetActiveInternalFrames(This,cInternalFrames,pcInternalFrames,ppInternalFrames)( (This)->lpVtbl -> GetActiveInternalFrames(This,cInternalFrames,pcInternalFrames,ppInternalFrames) )
#endif
#endif
#ifndef __ICorDebugThread4_INTERFACE_DEFINED__
#define __ICorDebugThread4_INTERFACE_DEFINED__
extern const IID IID_ICorDebugThread4;
typedef struct ICorDebugThread4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugThread4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugThread4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugThread4 * This);
	HRESULT(STDMETHODCALLTYPE * HasUnhandledException) (ICorDebugThread4 * This);
	HRESULT(STDMETHODCALLTYPE * GetBlockingObjects) (ICorDebugThread4 * This, ICorDebugBlockingObjectEnum ** ppBlockingObjectEnum);
	HRESULT(STDMETHODCALLTYPE * GetCurrentCustomDebuggerNotification) (ICorDebugThread4 * This, ICorDebugValue ** ppNotificationObject);
	END_INTERFACE
}  ICorDebugThread4Vtbl;
interface ICorDebugThread4
{
	CONST_VTBL struct ICorDebugThread4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugThread4_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugThread4_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugThread4_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugThread4_HasUnhandledException(This)( (This)->lpVtbl -> HasUnhandledException(This) )
#define ICorDebugThread4_GetBlockingObjects(This,ppBlockingObjectEnum)( (This)->lpVtbl -> GetBlockingObjects(This,ppBlockingObjectEnum) )
#define ICorDebugThread4_GetCurrentCustomDebuggerNotification(This,ppNotificationObject)( (This)->lpVtbl -> GetCurrentCustomDebuggerNotification(This,ppNotificationObject) )
#endif
#endif
#ifndef __ICorDebugStackWalk_INTERFACE_DEFINED__
#define __ICorDebugStackWalk_INTERFACE_DEFINED__
typedef enum CorDebugSetContextFlag
{
	SET_CONTEXT_FLAG_ACTIVE_FRAME = 0x1,
	SET_CONTEXT_FLAG_UNWIND_FRAME = 0x2
} CorDebugSetContextFlag;
extern const IID IID_ICorDebugStackWalk;
typedef struct ICorDebugStackWalkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugStackWalk * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugStackWalk * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugStackWalk * This);
	HRESULT(STDMETHODCALLTYPE * GetContext) (ICorDebugStackWalk * This, ULONG32 contextFlags, ULONG32 contextBufSize, ULONG32 * contextSize, BYTE contextBuf[]);
	HRESULT(STDMETHODCALLTYPE * SetContext) (ICorDebugStackWalk * This, CorDebugSetContextFlag flag, ULONG32 contextSize, BYTE context[]);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorDebugStackWalk * This);
	HRESULT(STDMETHODCALLTYPE * GetFrame) (ICorDebugStackWalk * This, ICorDebugFrame ** pFrame);
	END_INTERFACE
}  ICorDebugStackWalkVtbl;
interface ICorDebugStackWalk
{
	CONST_VTBL struct ICorDebugStackWalkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugStackWalk_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugStackWalk_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugStackWalk_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugStackWalk_GetContext(This,contextFlags,contextBufSize,contextSize,contextBuf)( (This)->lpVtbl -> GetContext(This,contextFlags,contextBufSize,contextSize,contextBuf) )
#define ICorDebugStackWalk_SetContext(This,flag,contextSize,context)( (This)->lpVtbl -> SetContext(This,flag,contextSize,context) )
#define ICorDebugStackWalk_Next(This)( (This)->lpVtbl -> Next(This) )
#define ICorDebugStackWalk_GetFrame(This,pFrame)( (This)->lpVtbl -> GetFrame(This,pFrame) )
#endif
#endif
#ifndef __ICorDebugChain_INTERFACE_DEFINED__
#define __ICorDebugChain_INTERFACE_DEFINED__
typedef enum CorDebugChainReason
{
	CHAIN_NONE = 0,
	CHAIN_CLASS_INIT = 0x1,
	CHAIN_EXCEPTION_FILTER = 0x2,
	CHAIN_SECURITY = 0x4,
	CHAIN_CONTEXT_POLICY = 0x8,
	CHAIN_INTERCEPTION = 0x10,
	CHAIN_PROCESS_START = 0x20,
	CHAIN_THREAD_START = 0x40,
	CHAIN_ENTER_MANAGED = 0x80,
	CHAIN_ENTER_UNMANAGED = 0x100,
	CHAIN_DEBUGGER_EVAL = 0x200,
	CHAIN_CONTEXT_SWITCH = 0x400,
	CHAIN_FUNC_EVAL = 0x800
} CorDebugChainReason;
extern const IID IID_ICorDebugChain;
typedef struct ICorDebugChainVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugChain * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugChain * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugChain * This);
	HRESULT(STDMETHODCALLTYPE * GetThread) (ICorDebugChain * This, ICorDebugThread ** ppThread);
	HRESULT(STDMETHODCALLTYPE * GetStackRange) (ICorDebugChain * This, CORDB_ADDRESS * pStart, CORDB_ADDRESS * pEnd);
	HRESULT(STDMETHODCALLTYPE * GetContext) (ICorDebugChain * This, ICorDebugContext ** ppContext);
	HRESULT(STDMETHODCALLTYPE * GetCaller) (ICorDebugChain * This, ICorDebugChain ** ppChain);
	HRESULT(STDMETHODCALLTYPE * GetCallee) (ICorDebugChain * This, ICorDebugChain ** ppChain);
	HRESULT(STDMETHODCALLTYPE * GetPrevious) (ICorDebugChain * This, ICorDebugChain ** ppChain);
	HRESULT(STDMETHODCALLTYPE * GetNext) (ICorDebugChain * This, ICorDebugChain ** ppChain);
	HRESULT(STDMETHODCALLTYPE * IsManaged) (ICorDebugChain * This, BOOL * pManaged);
	HRESULT(STDMETHODCALLTYPE * EnumerateFrames) (ICorDebugChain * This, ICorDebugFrameEnum ** ppFrames);
	HRESULT(STDMETHODCALLTYPE * GetActiveFrame) (ICorDebugChain * This, ICorDebugFrame ** ppFrame);
	HRESULT(STDMETHODCALLTYPE * GetRegisterSet) (ICorDebugChain * This, ICorDebugRegisterSet ** ppRegisters);
	HRESULT(STDMETHODCALLTYPE * GetReason) (ICorDebugChain * This, CorDebugChainReason * pReason);
	END_INTERFACE
}  ICorDebugChainVtbl;
interface ICorDebugChain
{
	CONST_VTBL struct ICorDebugChainVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugChain_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugChain_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugChain_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugChain_GetThread(This,ppThread)( (This)->lpVtbl -> GetThread(This,ppThread) )
#define ICorDebugChain_GetStackRange(This,pStart,pEnd)( (This)->lpVtbl -> GetStackRange(This,pStart,pEnd) )
#define ICorDebugChain_GetContext(This,ppContext)( (This)->lpVtbl -> GetContext(This,ppContext) )
#define ICorDebugChain_GetCaller(This,ppChain)( (This)->lpVtbl -> GetCaller(This,ppChain) )
#define ICorDebugChain_GetCallee(This,ppChain)( (This)->lpVtbl -> GetCallee(This,ppChain) )
#define ICorDebugChain_GetPrevious(This,ppChain)( (This)->lpVtbl -> GetPrevious(This,ppChain) )
#define ICorDebugChain_GetNext(This,ppChain)( (This)->lpVtbl -> GetNext(This,ppChain) )
#define ICorDebugChain_IsManaged(This,pManaged)( (This)->lpVtbl -> IsManaged(This,pManaged) )
#define ICorDebugChain_EnumerateFrames(This,ppFrames)( (This)->lpVtbl -> EnumerateFrames(This,ppFrames) )
#define ICorDebugChain_GetActiveFrame(This,ppFrame)( (This)->lpVtbl -> GetActiveFrame(This,ppFrame) )
#define ICorDebugChain_GetRegisterSet(This,ppRegisters)( (This)->lpVtbl -> GetRegisterSet(This,ppRegisters) )
#define ICorDebugChain_GetReason(This,pReason)( (This)->lpVtbl -> GetReason(This,pReason) )
#endif
#endif
#ifndef __ICorDebugFrame_INTERFACE_DEFINED__
#define __ICorDebugFrame_INTERFACE_DEFINED__
extern const IID IID_ICorDebugFrame;
typedef struct ICorDebugFrameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugFrame * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugFrame * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugFrame * This);
	HRESULT(STDMETHODCALLTYPE * GetChain) (ICorDebugFrame * This, ICorDebugChain ** ppChain);
	HRESULT(STDMETHODCALLTYPE * GetCode) (ICorDebugFrame * This, ICorDebugCode ** ppCode);
	HRESULT(STDMETHODCALLTYPE * GetFunction) (ICorDebugFrame * This, ICorDebugFunction ** ppFunction);
	HRESULT(STDMETHODCALLTYPE * GetFunctionToken) (ICorDebugFrame * This, mdMethodDef * pToken);
	HRESULT(STDMETHODCALLTYPE * GetStackRange) (ICorDebugFrame * This, CORDB_ADDRESS * pStart, CORDB_ADDRESS * pEnd);
	HRESULT(STDMETHODCALLTYPE * GetCaller) (ICorDebugFrame * This, ICorDebugFrame ** ppFrame);
	HRESULT(STDMETHODCALLTYPE * GetCallee) (ICorDebugFrame * This, ICorDebugFrame ** ppFrame);
	HRESULT(STDMETHODCALLTYPE * CreateStepper) (ICorDebugFrame * This, ICorDebugStepper ** ppStepper);
	END_INTERFACE
}  ICorDebugFrameVtbl;
interface ICorDebugFrame
{
	CONST_VTBL struct ICorDebugFrameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugFrame_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugFrame_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugFrame_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugFrame_GetChain(This,ppChain)( (This)->lpVtbl -> GetChain(This,ppChain) )
#define ICorDebugFrame_GetCode(This,ppCode)( (This)->lpVtbl -> GetCode(This,ppCode) )
#define ICorDebugFrame_GetFunction(This,ppFunction)( (This)->lpVtbl -> GetFunction(This,ppFunction) )
#define ICorDebugFrame_GetFunctionToken(This,pToken)( (This)->lpVtbl -> GetFunctionToken(This,pToken) )
#define ICorDebugFrame_GetStackRange(This,pStart,pEnd)( (This)->lpVtbl -> GetStackRange(This,pStart,pEnd) )
#define ICorDebugFrame_GetCaller(This,ppFrame)( (This)->lpVtbl -> GetCaller(This,ppFrame) )
#define ICorDebugFrame_GetCallee(This,ppFrame)( (This)->lpVtbl -> GetCallee(This,ppFrame) )
#define ICorDebugFrame_CreateStepper(This,ppStepper)( (This)->lpVtbl -> CreateStepper(This,ppStepper) )
#endif
#endif
#ifndef __ICorDebugInternalFrame_INTERFACE_DEFINED__
#define __ICorDebugInternalFrame_INTERFACE_DEFINED__
typedef enum CorDebugInternalFrameType
{
	STUBFRAME_NONE = 0,
	STUBFRAME_M2U = 0x1,
	STUBFRAME_U2M = 0x2,
	STUBFRAME_APPDOMAIN_TRANSITION = 0x3,
	STUBFRAME_LIGHTWEIGHT_FUNCTION = 0x4,
	STUBFRAME_FUNC_EVAL = 0x5,
	STUBFRAME_INTERNALCALL = 0x6,
	STUBFRAME_CLASS_INIT = 0x7,
	STUBFRAME_EXCEPTION = 0x8,
	STUBFRAME_SECURITY = 0x9,
	STUBFRAME_JIT_COMPILATION = 0xa
} CorDebugInternalFrameType;
extern const IID IID_ICorDebugInternalFrame;
typedef struct ICorDebugInternalFrameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugInternalFrame * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugInternalFrame * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugInternalFrame * This);
	HRESULT(STDMETHODCALLTYPE * GetChain) (ICorDebugInternalFrame * This, ICorDebugChain ** ppChain);
	HRESULT(STDMETHODCALLTYPE * GetCode) (ICorDebugInternalFrame * This, ICorDebugCode ** ppCode);
	HRESULT(STDMETHODCALLTYPE * GetFunction) (ICorDebugInternalFrame * This, ICorDebugFunction ** ppFunction);
	HRESULT(STDMETHODCALLTYPE * GetFunctionToken) (ICorDebugInternalFrame * This, mdMethodDef * pToken);
	HRESULT(STDMETHODCALLTYPE * GetStackRange) (ICorDebugInternalFrame * This, CORDB_ADDRESS * pStart, CORDB_ADDRESS * pEnd);
	HRESULT(STDMETHODCALLTYPE * GetCaller) (ICorDebugInternalFrame * This, ICorDebugFrame ** ppFrame);
	HRESULT(STDMETHODCALLTYPE * GetCallee) (ICorDebugInternalFrame * This, ICorDebugFrame ** ppFrame);
	HRESULT(STDMETHODCALLTYPE * CreateStepper) (ICorDebugInternalFrame * This, ICorDebugStepper ** ppStepper);
	HRESULT(STDMETHODCALLTYPE * GetFrameType) (ICorDebugInternalFrame * This, CorDebugInternalFrameType * pType);
	END_INTERFACE
}  ICorDebugInternalFrameVtbl;
interface ICorDebugInternalFrame
{
	CONST_VTBL struct ICorDebugInternalFrameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugInternalFrame_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugInternalFrame_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugInternalFrame_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugInternalFrame_GetChain(This,ppChain)( (This)->lpVtbl -> GetChain(This,ppChain) )
#define ICorDebugInternalFrame_GetCode(This,ppCode)( (This)->lpVtbl -> GetCode(This,ppCode) )
#define ICorDebugInternalFrame_GetFunction(This,ppFunction)( (This)->lpVtbl -> GetFunction(This,ppFunction) )
#define ICorDebugInternalFrame_GetFunctionToken(This,pToken)( (This)->lpVtbl -> GetFunctionToken(This,pToken) )
#define ICorDebugInternalFrame_GetStackRange(This,pStart,pEnd)( (This)->lpVtbl -> GetStackRange(This,pStart,pEnd) )
#define ICorDebugInternalFrame_GetCaller(This,ppFrame)( (This)->lpVtbl -> GetCaller(This,ppFrame) )
#define ICorDebugInternalFrame_GetCallee(This,ppFrame)( (This)->lpVtbl -> GetCallee(This,ppFrame) )
#define ICorDebugInternalFrame_CreateStepper(This,ppStepper)( (This)->lpVtbl -> CreateStepper(This,ppStepper) )
#define ICorDebugInternalFrame_GetFrameType(This,pType)( (This)->lpVtbl -> GetFrameType(This,pType) )
#endif
#endif
#ifndef __ICorDebugInternalFrame2_INTERFACE_DEFINED__
#define __ICorDebugInternalFrame2_INTERFACE_DEFINED__
extern const IID IID_ICorDebugInternalFrame2;
typedef struct ICorDebugInternalFrame2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugInternalFrame2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugInternalFrame2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugInternalFrame2 * This);
	HRESULT(STDMETHODCALLTYPE * GetAddress) (ICorDebugInternalFrame2 * This, CORDB_ADDRESS * pAddress);
	HRESULT(STDMETHODCALLTYPE * IsCloserToLeaf) (ICorDebugInternalFrame2 * This, ICorDebugFrame * pFrameToCompare, BOOL * pIsCloser);
	END_INTERFACE
}  ICorDebugInternalFrame2Vtbl;
interface ICorDebugInternalFrame2
{
	CONST_VTBL struct ICorDebugInternalFrame2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugInternalFrame2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugInternalFrame2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugInternalFrame2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugInternalFrame2_GetAddress(This,pAddress)( (This)->lpVtbl -> GetAddress(This,pAddress) )
#define ICorDebugInternalFrame2_IsCloserToLeaf(This,pFrameToCompare,pIsCloser)( (This)->lpVtbl -> IsCloserToLeaf(This,pFrameToCompare,pIsCloser) )
#endif
#endif
#ifndef __ICorDebugILFrame_INTERFACE_DEFINED__
#define __ICorDebugILFrame_INTERFACE_DEFINED__
typedef enum CorDebugMappingResult
{
	MAPPING_PROLOG = 0x1,
	MAPPING_EPILOG = 0x2,
	MAPPING_NO_INFO = 0x4,
	MAPPING_UNMAPPED_ADDRESS = 0x8,
	MAPPING_EXACT = 0x10,
	MAPPING_APPROXIMATE = 0x20
} CorDebugMappingResult;
extern const IID IID_ICorDebugILFrame;
typedef struct ICorDebugILFrameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugILFrame * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugILFrame * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugILFrame * This);
	HRESULT(STDMETHODCALLTYPE * GetChain) (ICorDebugILFrame * This, ICorDebugChain ** ppChain);
	HRESULT(STDMETHODCALLTYPE * GetCode) (ICorDebugILFrame * This, ICorDebugCode ** ppCode);
	HRESULT(STDMETHODCALLTYPE * GetFunction) (ICorDebugILFrame * This, ICorDebugFunction ** ppFunction);
	HRESULT(STDMETHODCALLTYPE * GetFunctionToken) (ICorDebugILFrame * This, mdMethodDef * pToken);
	HRESULT(STDMETHODCALLTYPE * GetStackRange) (ICorDebugILFrame * This, CORDB_ADDRESS * pStart, CORDB_ADDRESS * pEnd);
	HRESULT(STDMETHODCALLTYPE * GetCaller) (ICorDebugILFrame * This, ICorDebugFrame ** ppFrame);
	HRESULT(STDMETHODCALLTYPE * GetCallee) (ICorDebugILFrame * This, ICorDebugFrame ** ppFrame);
	HRESULT(STDMETHODCALLTYPE * CreateStepper) (ICorDebugILFrame * This, ICorDebugStepper ** ppStepper);
	HRESULT(STDMETHODCALLTYPE * GetIP) (ICorDebugILFrame * This, ULONG32 * pnOffset, CorDebugMappingResult * pMappingResult);
	HRESULT(STDMETHODCALLTYPE * SetIP) (ICorDebugILFrame * This, ULONG32 nOffset);
	HRESULT(STDMETHODCALLTYPE * EnumerateLocalVariables) (ICorDebugILFrame * This, ICorDebugValueEnum ** ppValueEnum);
	HRESULT(STDMETHODCALLTYPE * GetLocalVariable) (ICorDebugILFrame * This, DWORD dwIndex, ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * EnumerateArguments) (ICorDebugILFrame * This, ICorDebugValueEnum ** ppValueEnum);
	HRESULT(STDMETHODCALLTYPE * GetArgument) (ICorDebugILFrame * This, DWORD dwIndex, ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * GetStackDepth) (ICorDebugILFrame * This, ULONG32 * pDepth);
	HRESULT(STDMETHODCALLTYPE * GetStackValue) (ICorDebugILFrame * This, DWORD dwIndex, ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * CanSetIP) (ICorDebugILFrame * This, ULONG32 nOffset);
	END_INTERFACE
}  ICorDebugILFrameVtbl;
interface ICorDebugILFrame
{
	CONST_VTBL struct ICorDebugILFrameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugILFrame_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugILFrame_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugILFrame_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugILFrame_GetChain(This,ppChain)( (This)->lpVtbl -> GetChain(This,ppChain) )
#define ICorDebugILFrame_GetCode(This,ppCode)( (This)->lpVtbl -> GetCode(This,ppCode) )
#define ICorDebugILFrame_GetFunction(This,ppFunction)( (This)->lpVtbl -> GetFunction(This,ppFunction) )
#define ICorDebugILFrame_GetFunctionToken(This,pToken)( (This)->lpVtbl -> GetFunctionToken(This,pToken) )
#define ICorDebugILFrame_GetStackRange(This,pStart,pEnd)( (This)->lpVtbl -> GetStackRange(This,pStart,pEnd) )
#define ICorDebugILFrame_GetCaller(This,ppFrame)( (This)->lpVtbl -> GetCaller(This,ppFrame) )
#define ICorDebugILFrame_GetCallee(This,ppFrame)( (This)->lpVtbl -> GetCallee(This,ppFrame) )
#define ICorDebugILFrame_CreateStepper(This,ppStepper)( (This)->lpVtbl -> CreateStepper(This,ppStepper) )
#define ICorDebugILFrame_GetIP(This,pnOffset,pMappingResult)( (This)->lpVtbl -> GetIP(This,pnOffset,pMappingResult) )
#define ICorDebugILFrame_SetIP(This,nOffset)( (This)->lpVtbl -> SetIP(This,nOffset) )
#define ICorDebugILFrame_EnumerateLocalVariables(This,ppValueEnum)( (This)->lpVtbl -> EnumerateLocalVariables(This,ppValueEnum) )
#define ICorDebugILFrame_GetLocalVariable(This,dwIndex,ppValue)( (This)->lpVtbl -> GetLocalVariable(This,dwIndex,ppValue) )
#define ICorDebugILFrame_EnumerateArguments(This,ppValueEnum)( (This)->lpVtbl -> EnumerateArguments(This,ppValueEnum) )
#define ICorDebugILFrame_GetArgument(This,dwIndex,ppValue)( (This)->lpVtbl -> GetArgument(This,dwIndex,ppValue) )
#define ICorDebugILFrame_GetStackDepth(This,pDepth)( (This)->lpVtbl -> GetStackDepth(This,pDepth) )
#define ICorDebugILFrame_GetStackValue(This,dwIndex,ppValue)( (This)->lpVtbl -> GetStackValue(This,dwIndex,ppValue) )
#define ICorDebugILFrame_CanSetIP(This,nOffset)( (This)->lpVtbl -> CanSetIP(This,nOffset) )
#endif
#endif
#ifndef __ICorDebugILFrame2_INTERFACE_DEFINED__
#define __ICorDebugILFrame2_INTERFACE_DEFINED__
extern const IID IID_ICorDebugILFrame2;
typedef struct ICorDebugILFrame2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugILFrame2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugILFrame2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugILFrame2 * This);
	HRESULT(STDMETHODCALLTYPE * RemapFunction) (ICorDebugILFrame2 * This, ULONG32 newILOffset);
	HRESULT(STDMETHODCALLTYPE * EnumerateTypeParameters) (ICorDebugILFrame2 * This, ICorDebugTypeEnum ** ppTyParEnum);
	END_INTERFACE
}  ICorDebugILFrame2Vtbl;
interface ICorDebugILFrame2
{
	CONST_VTBL struct ICorDebugILFrame2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugILFrame2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugILFrame2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugILFrame2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugILFrame2_RemapFunction(This,newILOffset)( (This)->lpVtbl -> RemapFunction(This,newILOffset) )
#define ICorDebugILFrame2_EnumerateTypeParameters(This,ppTyParEnum)( (This)->lpVtbl -> EnumerateTypeParameters(This,ppTyParEnum) )
#endif
#endif
#ifndef __ICorDebugNativeFrame_INTERFACE_DEFINED__
#define __ICorDebugNativeFrame_INTERFACE_DEFINED__
extern const IID IID_ICorDebugNativeFrame;
typedef struct ICorDebugNativeFrameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugNativeFrame * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugNativeFrame * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugNativeFrame * This);
	HRESULT(STDMETHODCALLTYPE * GetChain) (ICorDebugNativeFrame * This, ICorDebugChain ** ppChain);
	HRESULT(STDMETHODCALLTYPE * GetCode) (ICorDebugNativeFrame * This, ICorDebugCode ** ppCode);
	HRESULT(STDMETHODCALLTYPE * GetFunction) (ICorDebugNativeFrame * This, ICorDebugFunction ** ppFunction);
	HRESULT(STDMETHODCALLTYPE * GetFunctionToken) (ICorDebugNativeFrame * This, mdMethodDef * pToken);
	HRESULT(STDMETHODCALLTYPE * GetStackRange) (ICorDebugNativeFrame * This, CORDB_ADDRESS * pStart, CORDB_ADDRESS * pEnd);
	HRESULT(STDMETHODCALLTYPE * GetCaller) (ICorDebugNativeFrame * This, ICorDebugFrame ** ppFrame);
	HRESULT(STDMETHODCALLTYPE * GetCallee) (ICorDebugNativeFrame * This, ICorDebugFrame ** ppFrame);
	HRESULT(STDMETHODCALLTYPE * CreateStepper) (ICorDebugNativeFrame * This, ICorDebugStepper ** ppStepper);
	HRESULT(STDMETHODCALLTYPE * GetIP) (ICorDebugNativeFrame * This, ULONG32 * pnOffset);
	HRESULT(STDMETHODCALLTYPE * SetIP) (ICorDebugNativeFrame * This, ULONG32 nOffset);
	HRESULT(STDMETHODCALLTYPE * GetRegisterSet) (ICorDebugNativeFrame * This, ICorDebugRegisterSet ** ppRegisters);
	HRESULT(STDMETHODCALLTYPE * GetLocalRegisterValue) (ICorDebugNativeFrame * This, CorDebugRegister reg, ULONG cbSigBlob, PCCOR_SIGNATURE pvSigBlob, ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * GetLocalDoubleRegisterValue) (ICorDebugNativeFrame * This, CorDebugRegister highWordReg, CorDebugRegister lowWordReg, ULONG cbSigBlob, PCCOR_SIGNATURE pvSigBlob, ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * GetLocalMemoryValue) (ICorDebugNativeFrame * This, CORDB_ADDRESS address, ULONG cbSigBlob, PCCOR_SIGNATURE pvSigBlob, ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * GetLocalRegisterMemoryValue) (ICorDebugNativeFrame * This, CorDebugRegister highWordReg, CORDB_ADDRESS lowWordAddress, ULONG cbSigBlob, PCCOR_SIGNATURE pvSigBlob, ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * GetLocalMemoryRegisterValue) (ICorDebugNativeFrame * This, CORDB_ADDRESS highWordAddress, CorDebugRegister lowWordRegister, ULONG cbSigBlob, PCCOR_SIGNATURE pvSigBlob, ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * CanSetIP) (ICorDebugNativeFrame * This, ULONG32 nOffset);
	END_INTERFACE
}  ICorDebugNativeFrameVtbl;
interface ICorDebugNativeFrame
{
	CONST_VTBL struct ICorDebugNativeFrameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugNativeFrame_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugNativeFrame_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugNativeFrame_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugNativeFrame_GetChain(This,ppChain)( (This)->lpVtbl -> GetChain(This,ppChain) )
#define ICorDebugNativeFrame_GetCode(This,ppCode)( (This)->lpVtbl -> GetCode(This,ppCode) )
#define ICorDebugNativeFrame_GetFunction(This,ppFunction)( (This)->lpVtbl -> GetFunction(This,ppFunction) )
#define ICorDebugNativeFrame_GetFunctionToken(This,pToken)( (This)->lpVtbl -> GetFunctionToken(This,pToken) )
#define ICorDebugNativeFrame_GetStackRange(This,pStart,pEnd)( (This)->lpVtbl -> GetStackRange(This,pStart,pEnd) )
#define ICorDebugNativeFrame_GetCaller(This,ppFrame)( (This)->lpVtbl -> GetCaller(This,ppFrame) )
#define ICorDebugNativeFrame_GetCallee(This,ppFrame)( (This)->lpVtbl -> GetCallee(This,ppFrame) )
#define ICorDebugNativeFrame_CreateStepper(This,ppStepper)( (This)->lpVtbl -> CreateStepper(This,ppStepper) )
#define ICorDebugNativeFrame_GetIP(This,pnOffset)( (This)->lpVtbl -> GetIP(This,pnOffset) )
#define ICorDebugNativeFrame_SetIP(This,nOffset)( (This)->lpVtbl -> SetIP(This,nOffset) )
#define ICorDebugNativeFrame_GetRegisterSet(This,ppRegisters)( (This)->lpVtbl -> GetRegisterSet(This,ppRegisters) )
#define ICorDebugNativeFrame_GetLocalRegisterValue(This,reg,cbSigBlob,pvSigBlob,ppValue)( (This)->lpVtbl -> GetLocalRegisterValue(This,reg,cbSigBlob,pvSigBlob,ppValue) )
#define ICorDebugNativeFrame_GetLocalDoubleRegisterValue(This,highWordReg,lowWordReg,cbSigBlob,pvSigBlob,ppValue)( (This)->lpVtbl -> GetLocalDoubleRegisterValue(This,highWordReg,lowWordReg,cbSigBlob,pvSigBlob,ppValue) )
#define ICorDebugNativeFrame_GetLocalMemoryValue(This,address,cbSigBlob,pvSigBlob,ppValue)( (This)->lpVtbl -> GetLocalMemoryValue(This,address,cbSigBlob,pvSigBlob,ppValue) )
#define ICorDebugNativeFrame_GetLocalRegisterMemoryValue(This,highWordReg,lowWordAddress,cbSigBlob,pvSigBlob,ppValue)( (This)->lpVtbl -> GetLocalRegisterMemoryValue(This,highWordReg,lowWordAddress,cbSigBlob,pvSigBlob,ppValue) )
#define ICorDebugNativeFrame_GetLocalMemoryRegisterValue(This,highWordAddress,lowWordRegister,cbSigBlob,pvSigBlob,ppValue)( (This)->lpVtbl -> GetLocalMemoryRegisterValue(This,highWordAddress,lowWordRegister,cbSigBlob,pvSigBlob,ppValue) )
#define ICorDebugNativeFrame_CanSetIP(This,nOffset)( (This)->lpVtbl -> CanSetIP(This,nOffset) )
#endif
#endif
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0038_v0_0_s_ifspec;
#ifndef __ICorDebugNativeFrame2_INTERFACE_DEFINED__
#define __ICorDebugNativeFrame2_INTERFACE_DEFINED__
extern const IID IID_ICorDebugNativeFrame2;
typedef struct ICorDebugNativeFrame2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugNativeFrame2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugNativeFrame2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugNativeFrame2 * This);
	HRESULT(STDMETHODCALLTYPE * IsChild) (ICorDebugNativeFrame2 * This, BOOL * pIsChild);
	HRESULT(STDMETHODCALLTYPE * IsMatchingParentFrame) (ICorDebugNativeFrame2 * This, ICorDebugNativeFrame2 * pPotentialParentFrame, BOOL * pIsParent);
	HRESULT(STDMETHODCALLTYPE * GetStackParameterSize) (ICorDebugNativeFrame2 * This, ULONG32 * pSize);
	END_INTERFACE
}  ICorDebugNativeFrame2Vtbl;
interface ICorDebugNativeFrame2
{
	CONST_VTBL struct ICorDebugNativeFrame2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugNativeFrame2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugNativeFrame2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugNativeFrame2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugNativeFrame2_IsChild(This,pIsChild)( (This)->lpVtbl -> IsChild(This,pIsChild) )
#define ICorDebugNativeFrame2_IsMatchingParentFrame(This,pPotentialParentFrame,pIsParent)( (This)->lpVtbl -> IsMatchingParentFrame(This,pPotentialParentFrame,pIsParent) )
#define ICorDebugNativeFrame2_GetStackParameterSize(This,pSize)( (This)->lpVtbl -> GetStackParameterSize(This,pSize) )
#endif
#endif
#ifndef __ICorDebugModule3_INTERFACE_DEFINED__
#define __ICorDebugModule3_INTERFACE_DEFINED__
extern const IID IID_ICorDebugModule3;
typedef struct ICorDebugModule3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugModule3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugModule3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugModule3 * This);
	HRESULT(STDMETHODCALLTYPE * CreateReaderForInMemorySymbols) (ICorDebugModule3 * This, REFIID riid, void **ppObj);
	END_INTERFACE
}  ICorDebugModule3Vtbl;
interface ICorDebugModule3
{
	CONST_VTBL struct ICorDebugModule3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugModule3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugModule3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugModule3_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugModule3_CreateReaderForInMemorySymbols(This,riid,ppObj)( (This)->lpVtbl -> CreateReaderForInMemorySymbols(This,riid,ppObj) )
#endif
#endif
#ifndef __ICorDebugRuntimeUnwindableFrame_INTERFACE_DEFINED__
#define __ICorDebugRuntimeUnwindableFrame_INTERFACE_DEFINED__
extern const IID IID_ICorDebugRuntimeUnwindableFrame;
typedef struct ICorDebugRuntimeUnwindableFrameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugRuntimeUnwindableFrame * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugRuntimeUnwindableFrame * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugRuntimeUnwindableFrame * This);
	HRESULT(STDMETHODCALLTYPE * GetChain) (ICorDebugRuntimeUnwindableFrame * This, ICorDebugChain ** ppChain);
	HRESULT(STDMETHODCALLTYPE * GetCode) (ICorDebugRuntimeUnwindableFrame * This, ICorDebugCode ** ppCode);
	HRESULT(STDMETHODCALLTYPE * GetFunction) (ICorDebugRuntimeUnwindableFrame * This, ICorDebugFunction ** ppFunction);
	HRESULT(STDMETHODCALLTYPE * GetFunctionToken) (ICorDebugRuntimeUnwindableFrame * This, mdMethodDef * pToken);
	HRESULT(STDMETHODCALLTYPE * GetStackRange) (ICorDebugRuntimeUnwindableFrame * This, CORDB_ADDRESS * pStart, CORDB_ADDRESS * pEnd);
	HRESULT(STDMETHODCALLTYPE * GetCaller) (ICorDebugRuntimeUnwindableFrame * This, ICorDebugFrame ** ppFrame);
	HRESULT(STDMETHODCALLTYPE * GetCallee) (ICorDebugRuntimeUnwindableFrame * This, ICorDebugFrame ** ppFrame);
	HRESULT(STDMETHODCALLTYPE * CreateStepper) (ICorDebugRuntimeUnwindableFrame * This, ICorDebugStepper ** ppStepper);
	END_INTERFACE
}  ICorDebugRuntimeUnwindableFrameVtbl;
interface ICorDebugRuntimeUnwindableFrame
{
	CONST_VTBL struct ICorDebugRuntimeUnwindableFrameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugRuntimeUnwindableFrame_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugRuntimeUnwindableFrame_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugRuntimeUnwindableFrame_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugRuntimeUnwindableFrame_GetChain(This,ppChain)( (This)->lpVtbl -> GetChain(This,ppChain) )
#define ICorDebugRuntimeUnwindableFrame_GetCode(This,ppCode)( (This)->lpVtbl -> GetCode(This,ppCode) )
#define ICorDebugRuntimeUnwindableFrame_GetFunction(This,ppFunction)( (This)->lpVtbl -> GetFunction(This,ppFunction) )
#define ICorDebugRuntimeUnwindableFrame_GetFunctionToken(This,pToken)( (This)->lpVtbl -> GetFunctionToken(This,pToken) )
#define ICorDebugRuntimeUnwindableFrame_GetStackRange(This,pStart,pEnd)( (This)->lpVtbl -> GetStackRange(This,pStart,pEnd) )
#define ICorDebugRuntimeUnwindableFrame_GetCaller(This,ppFrame)( (This)->lpVtbl -> GetCaller(This,ppFrame) )
#define ICorDebugRuntimeUnwindableFrame_GetCallee(This,ppFrame)( (This)->lpVtbl -> GetCallee(This,ppFrame) )
#define ICorDebugRuntimeUnwindableFrame_CreateStepper(This,ppStepper)( (This)->lpVtbl -> CreateStepper(This,ppStepper) )
#endif
#endif
#ifndef __ICorDebugModule_INTERFACE_DEFINED__
#define __ICorDebugModule_INTERFACE_DEFINED__
extern const IID IID_ICorDebugModule;
typedef struct ICorDebugModuleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugModule * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugModule * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugModule * This);
	HRESULT(STDMETHODCALLTYPE * GetProcess) (ICorDebugModule * This, ICorDebugProcess ** ppProcess);
	HRESULT(STDMETHODCALLTYPE * GetBaseAddress) (ICorDebugModule * This, CORDB_ADDRESS * pAddress);
	HRESULT(STDMETHODCALLTYPE * GetAssembly) (ICorDebugModule * This, ICorDebugAssembly ** ppAssembly);
	HRESULT(STDMETHODCALLTYPE * GetName) (ICorDebugModule * This, ULONG32 cchName, ULONG32 * pcchName, WCHAR szName[]);
	HRESULT(STDMETHODCALLTYPE * EnableJITDebugging) (ICorDebugModule * This, BOOL bTrackJITInfo, BOOL bAllowJitOpts);
	HRESULT(STDMETHODCALLTYPE * EnableClassLoadCallbacks) (ICorDebugModule * This, BOOL bClassLoadCallbacks);
	HRESULT(STDMETHODCALLTYPE * GetFunctionFromToken) (ICorDebugModule * This, mdMethodDef methodDef, ICorDebugFunction ** ppFunction);
	HRESULT(STDMETHODCALLTYPE * GetFunctionFromRVA) (ICorDebugModule * This, CORDB_ADDRESS rva, ICorDebugFunction ** ppFunction);
	HRESULT(STDMETHODCALLTYPE * GetClassFromToken) (ICorDebugModule * This, mdTypeDef typeDef, ICorDebugClass ** ppClass);
	HRESULT(STDMETHODCALLTYPE * CreateBreakpoint) (ICorDebugModule * This, ICorDebugModuleBreakpoint ** ppBreakpoint);
	HRESULT(STDMETHODCALLTYPE * GetEditAndContinueSnapshot) (ICorDebugModule * This, ICorDebugEditAndContinueSnapshot ** ppEditAndContinueSnapshot);
	HRESULT(STDMETHODCALLTYPE * GetMetaDataInterface) (ICorDebugModule * This, REFIID riid, IUnknown ** ppObj);
	HRESULT(STDMETHODCALLTYPE * GetToken) (ICorDebugModule * This, mdModule * pToken);
	HRESULT(STDMETHODCALLTYPE * IsDynamic) (ICorDebugModule * This, BOOL * pDynamic);
	HRESULT(STDMETHODCALLTYPE * GetGlobalVariableValue) (ICorDebugModule * This, mdFieldDef fieldDef, ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * GetSize) (ICorDebugModule * This, ULONG32 * pcBytes);
	HRESULT(STDMETHODCALLTYPE * IsInMemory) (ICorDebugModule * This, BOOL * pInMemory);
	END_INTERFACE
}  ICorDebugModuleVtbl;
interface ICorDebugModule
{
	CONST_VTBL struct ICorDebugModuleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugModule_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugModule_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugModule_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugModule_GetProcess(This,ppProcess)( (This)->lpVtbl -> GetProcess(This,ppProcess) )
#define ICorDebugModule_GetBaseAddress(This,pAddress)( (This)->lpVtbl -> GetBaseAddress(This,pAddress) )
#define ICorDebugModule_GetAssembly(This,ppAssembly)( (This)->lpVtbl -> GetAssembly(This,ppAssembly) )
#define ICorDebugModule_GetName(This,cchName,pcchName,szName)( (This)->lpVtbl -> GetName(This,cchName,pcchName,szName) )
#define ICorDebugModule_EnableJITDebugging(This,bTrackJITInfo,bAllowJitOpts)( (This)->lpVtbl -> EnableJITDebugging(This,bTrackJITInfo,bAllowJitOpts) )
#define ICorDebugModule_EnableClassLoadCallbacks(This,bClassLoadCallbacks)( (This)->lpVtbl -> EnableClassLoadCallbacks(This,bClassLoadCallbacks) )
#define ICorDebugModule_GetFunctionFromToken(This,methodDef,ppFunction)( (This)->lpVtbl -> GetFunctionFromToken(This,methodDef,ppFunction) )
#define ICorDebugModule_GetFunctionFromRVA(This,rva,ppFunction)( (This)->lpVtbl -> GetFunctionFromRVA(This,rva,ppFunction) )
#define ICorDebugModule_GetClassFromToken(This,typeDef,ppClass)( (This)->lpVtbl -> GetClassFromToken(This,typeDef,ppClass) )
#define ICorDebugModule_CreateBreakpoint(This,ppBreakpoint)( (This)->lpVtbl -> CreateBreakpoint(This,ppBreakpoint) )
#define ICorDebugModule_GetEditAndContinueSnapshot(This,ppEditAndContinueSnapshot)( (This)->lpVtbl -> GetEditAndContinueSnapshot(This,ppEditAndContinueSnapshot) )
#define ICorDebugModule_GetMetaDataInterface(This,riid,ppObj)( (This)->lpVtbl -> GetMetaDataInterface(This,riid,ppObj) )
#define ICorDebugModule_GetToken(This,pToken)( (This)->lpVtbl -> GetToken(This,pToken) )
#define ICorDebugModule_IsDynamic(This,pDynamic)( (This)->lpVtbl -> IsDynamic(This,pDynamic) )
#define ICorDebugModule_GetGlobalVariableValue(This,fieldDef,ppValue)( (This)->lpVtbl -> GetGlobalVariableValue(This,fieldDef,ppValue) )
#define ICorDebugModule_GetSize(This,pcBytes)( (This)->lpVtbl -> GetSize(This,pcBytes) )
#define ICorDebugModule_IsInMemory(This,pInMemory)( (This)->lpVtbl -> IsInMemory(This,pInMemory) )
#endif
#endif
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0042_v0_0_s_ifspec;
#ifndef __ICorDebugModule2_INTERFACE_DEFINED__
#define __ICorDebugModule2_INTERFACE_DEFINED__
extern const IID IID_ICorDebugModule2;
typedef struct ICorDebugModule2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugModule2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugModule2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugModule2 * This);
	HRESULT(STDMETHODCALLTYPE * SetJMCStatus) (ICorDebugModule2 * This, BOOL bIsJustMyCode, ULONG32 cTokens, mdToken pTokens[]);
	HRESULT(STDMETHODCALLTYPE * ApplyChanges) (ICorDebugModule2 * This, ULONG cbMetadata, BYTE pbMetadata[], ULONG cbIL, BYTE pbIL[]);
	HRESULT(STDMETHODCALLTYPE * SetJITCompilerFlags) (ICorDebugModule2 * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetJITCompilerFlags) (ICorDebugModule2 * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * ResolveAssembly) (ICorDebugModule2 * This, mdToken tkAssemblyRef, ICorDebugAssembly ** ppAssembly);
	END_INTERFACE
}  ICorDebugModule2Vtbl;
interface ICorDebugModule2
{
	CONST_VTBL struct ICorDebugModule2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugModule2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugModule2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugModule2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugModule2_SetJMCStatus(This,bIsJustMyCode,cTokens,pTokens)( (This)->lpVtbl -> SetJMCStatus(This,bIsJustMyCode,cTokens,pTokens) )
#define ICorDebugModule2_ApplyChanges(This,cbMetadata,pbMetadata,cbIL,pbIL)( (This)->lpVtbl -> ApplyChanges(This,cbMetadata,pbMetadata,cbIL,pbIL) )
#define ICorDebugModule2_SetJITCompilerFlags(This,dwFlags)( (This)->lpVtbl -> SetJITCompilerFlags(This,dwFlags) )
#define ICorDebugModule2_GetJITCompilerFlags(This,pdwFlags)( (This)->lpVtbl -> GetJITCompilerFlags(This,pdwFlags) )
#define ICorDebugModule2_ResolveAssembly(This,tkAssemblyRef,ppAssembly)( (This)->lpVtbl -> ResolveAssembly(This,tkAssemblyRef,ppAssembly) )
#endif
#endif
#ifndef __ICorDebugFunction_INTERFACE_DEFINED__
#define __ICorDebugFunction_INTERFACE_DEFINED__
extern const IID IID_ICorDebugFunction;
typedef struct ICorDebugFunctionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugFunction * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugFunction * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugFunction * This);
	HRESULT(STDMETHODCALLTYPE * GetModule) (ICorDebugFunction * This, ICorDebugModule ** ppModule);
	HRESULT(STDMETHODCALLTYPE * GetClass) (ICorDebugFunction * This, ICorDebugClass ** ppClass);
	HRESULT(STDMETHODCALLTYPE * GetToken) (ICorDebugFunction * This, mdMethodDef * pMethodDef);
	HRESULT(STDMETHODCALLTYPE * GetILCode) (ICorDebugFunction * This, ICorDebugCode ** ppCode);
	HRESULT(STDMETHODCALLTYPE * GetNativeCode) (ICorDebugFunction * This, ICorDebugCode ** ppCode);
	HRESULT(STDMETHODCALLTYPE * CreateBreakpoint) (ICorDebugFunction * This, ICorDebugFunctionBreakpoint ** ppBreakpoint);
	HRESULT(STDMETHODCALLTYPE * GetLocalVarSigToken) (ICorDebugFunction * This, mdSignature * pmdSig);
	HRESULT(STDMETHODCALLTYPE * GetCurrentVersionNumber) (ICorDebugFunction * This, ULONG32 * pnCurrentVersion);
	END_INTERFACE
}  ICorDebugFunctionVtbl;
interface ICorDebugFunction
{
	CONST_VTBL struct ICorDebugFunctionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugFunction_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugFunction_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugFunction_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugFunction_GetModule(This,ppModule)( (This)->lpVtbl -> GetModule(This,ppModule) )
#define ICorDebugFunction_GetClass(This,ppClass)( (This)->lpVtbl -> GetClass(This,ppClass) )
#define ICorDebugFunction_GetToken(This,pMethodDef)( (This)->lpVtbl -> GetToken(This,pMethodDef) )
#define ICorDebugFunction_GetILCode(This,ppCode)( (This)->lpVtbl -> GetILCode(This,ppCode) )
#define ICorDebugFunction_GetNativeCode(This,ppCode)( (This)->lpVtbl -> GetNativeCode(This,ppCode) )
#define ICorDebugFunction_CreateBreakpoint(This,ppBreakpoint)( (This)->lpVtbl -> CreateBreakpoint(This,ppBreakpoint) )
#define ICorDebugFunction_GetLocalVarSigToken(This,pmdSig)( (This)->lpVtbl -> GetLocalVarSigToken(This,pmdSig) )
#define ICorDebugFunction_GetCurrentVersionNumber(This,pnCurrentVersion)( (This)->lpVtbl -> GetCurrentVersionNumber(This,pnCurrentVersion) )
#endif
#endif
#ifndef __ICorDebugFunction2_INTERFACE_DEFINED__
#define __ICorDebugFunction2_INTERFACE_DEFINED__
extern const IID IID_ICorDebugFunction2;
typedef struct ICorDebugFunction2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugFunction2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugFunction2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugFunction2 * This);
	HRESULT(STDMETHODCALLTYPE * SetJMCStatus) (ICorDebugFunction2 * This, BOOL bIsJustMyCode);
	HRESULT(STDMETHODCALLTYPE * GetJMCStatus) (ICorDebugFunction2 * This, BOOL * pbIsJustMyCode);
	HRESULT(STDMETHODCALLTYPE * EnumerateNativeCode) (ICorDebugFunction2 * This, ICorDebugCodeEnum ** ppCodeEnum);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (ICorDebugFunction2 * This, ULONG32 * pnVersion);
	END_INTERFACE
}  ICorDebugFunction2Vtbl;
interface ICorDebugFunction2
{
	CONST_VTBL struct ICorDebugFunction2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugFunction2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugFunction2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugFunction2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugFunction2_SetJMCStatus(This,bIsJustMyCode)( (This)->lpVtbl -> SetJMCStatus(This,bIsJustMyCode) )
#define ICorDebugFunction2_GetJMCStatus(This,pbIsJustMyCode)( (This)->lpVtbl -> GetJMCStatus(This,pbIsJustMyCode) )
#define ICorDebugFunction2_EnumerateNativeCode(This,ppCodeEnum)( (This)->lpVtbl -> EnumerateNativeCode(This,ppCodeEnum) )
#define ICorDebugFunction2_GetVersionNumber(This,pnVersion)( (This)->lpVtbl -> GetVersionNumber(This,pnVersion) )
#endif
#endif
#ifndef __ICorDebugCode_INTERFACE_DEFINED__
#define __ICorDebugCode_INTERFACE_DEFINED__
extern const IID IID_ICorDebugCode;
typedef struct ICorDebugCodeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugCode * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugCode * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugCode * This);
	HRESULT(STDMETHODCALLTYPE * IsIL) (ICorDebugCode * This, BOOL * pbIL);
	HRESULT(STDMETHODCALLTYPE * GetFunction) (ICorDebugCode * This, ICorDebugFunction ** ppFunction);
	HRESULT(STDMETHODCALLTYPE * GetAddress) (ICorDebugCode * This, CORDB_ADDRESS * pStart);
	HRESULT(STDMETHODCALLTYPE * GetSize) (ICorDebugCode * This, ULONG32 * pcBytes);
	HRESULT(STDMETHODCALLTYPE * CreateBreakpoint) (ICorDebugCode * This, ULONG32 offset, ICorDebugFunctionBreakpoint ** ppBreakpoint);
	HRESULT(STDMETHODCALLTYPE * GetCode) (ICorDebugCode * This, ULONG32 startOffset, ULONG32 endOffset, ULONG32 cBufferAlloc, BYTE buffer[], ULONG32 * pcBufferSize);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (ICorDebugCode * This, ULONG32 * nVersion);
	HRESULT(STDMETHODCALLTYPE * GetILToNativeMapping) (ICorDebugCode * This, ULONG32 cMap, ULONG32 * pcMap, COR_DEBUG_IL_TO_NATIVE_MAP map[]);
	HRESULT(STDMETHODCALLTYPE * GetEnCRemapSequencePoints) (ICorDebugCode * This, ULONG32 cMap, ULONG32 * pcMap, ULONG32 offsets[]);
	END_INTERFACE
}  ICorDebugCodeVtbl;
interface ICorDebugCode
{
	CONST_VTBL struct ICorDebugCodeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugCode_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugCode_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugCode_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugCode_IsIL(This,pbIL)( (This)->lpVtbl -> IsIL(This,pbIL) )
#define ICorDebugCode_GetFunction(This,ppFunction)( (This)->lpVtbl -> GetFunction(This,ppFunction) )
#define ICorDebugCode_GetAddress(This,pStart)( (This)->lpVtbl -> GetAddress(This,pStart) )
#define ICorDebugCode_GetSize(This,pcBytes)( (This)->lpVtbl -> GetSize(This,pcBytes) )
#define ICorDebugCode_CreateBreakpoint(This,offset,ppBreakpoint)( (This)->lpVtbl -> CreateBreakpoint(This,offset,ppBreakpoint) )
#define ICorDebugCode_GetCode(This,startOffset,endOffset,cBufferAlloc,buffer,pcBufferSize)( (This)->lpVtbl -> GetCode(This,startOffset,endOffset,cBufferAlloc,buffer,pcBufferSize) )
#define ICorDebugCode_GetVersionNumber(This,nVersion)( (This)->lpVtbl -> GetVersionNumber(This,nVersion) )
#define ICorDebugCode_GetILToNativeMapping(This,cMap,pcMap,map)( (This)->lpVtbl -> GetILToNativeMapping(This,cMap,pcMap,map) )
#define ICorDebugCode_GetEnCRemapSequencePoints(This,cMap,pcMap,offsets)( (This)->lpVtbl -> GetEnCRemapSequencePoints(This,cMap,pcMap,offsets) )
#endif
#endif
#ifndef __ICorDebugCode2_INTERFACE_DEFINED__
#define __ICorDebugCode2_INTERFACE_DEFINED__
typedef struct _CodeChunkInfo
{
	CORDB_ADDRESS startAddr;
	ULONG32 length;
} CodeChunkInfo;
extern const IID IID_ICorDebugCode2;
typedef struct ICorDebugCode2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugCode2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugCode2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugCode2 * This);
	HRESULT(STDMETHODCALLTYPE * GetCodeChunks) (ICorDebugCode2 * This, ULONG32 cbufSize, ULONG32 * pcnumChunks, CodeChunkInfo chunks[]);
	HRESULT(STDMETHODCALLTYPE * GetCompilerFlags) (ICorDebugCode2 * This, DWORD * pdwFlags);
	END_INTERFACE
}  ICorDebugCode2Vtbl;
interface ICorDebugCode2
{
	CONST_VTBL struct ICorDebugCode2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugCode2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugCode2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugCode2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugCode2_GetCodeChunks(This,cbufSize,pcnumChunks,chunks)( (This)->lpVtbl -> GetCodeChunks(This,cbufSize,pcnumChunks,chunks) )
#define ICorDebugCode2_GetCompilerFlags(This,pdwFlags)( (This)->lpVtbl -> GetCompilerFlags(This,pdwFlags) )
#endif
#endif
#ifndef __ICorDebugClass_INTERFACE_DEFINED__
#define __ICorDebugClass_INTERFACE_DEFINED__
extern const IID IID_ICorDebugClass;
typedef struct ICorDebugClassVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugClass * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugClass * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugClass * This);
	HRESULT(STDMETHODCALLTYPE * GetModule) (ICorDebugClass * This, ICorDebugModule ** pModule);
	HRESULT(STDMETHODCALLTYPE * GetToken) (ICorDebugClass * This, mdTypeDef * pTypeDef);
	HRESULT(STDMETHODCALLTYPE * GetStaticFieldValue) (ICorDebugClass * This, mdFieldDef fieldDef, ICorDebugFrame * pFrame, ICorDebugValue ** ppValue);
	END_INTERFACE
}  ICorDebugClassVtbl;
interface ICorDebugClass
{
	CONST_VTBL struct ICorDebugClassVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugClass_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugClass_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugClass_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugClass_GetModule(This,pModule)( (This)->lpVtbl -> GetModule(This,pModule) )
#define ICorDebugClass_GetToken(This,pTypeDef)( (This)->lpVtbl -> GetToken(This,pTypeDef) )
#define ICorDebugClass_GetStaticFieldValue(This,fieldDef,pFrame,ppValue)( (This)->lpVtbl -> GetStaticFieldValue(This,fieldDef,pFrame,ppValue) )
#endif
#endif
#ifndef __ICorDebugClass2_INTERFACE_DEFINED__
#define __ICorDebugClass2_INTERFACE_DEFINED__
extern const IID IID_ICorDebugClass2;
typedef struct ICorDebugClass2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugClass2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugClass2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugClass2 * This);
	HRESULT(STDMETHODCALLTYPE * GetParameterizedType) (ICorDebugClass2 * This, CorElementType elementType, ULONG32 nTypeArgs, ICorDebugType * ppTypeArgs[], ICorDebugType ** ppType);
	HRESULT(STDMETHODCALLTYPE * SetJMCStatus) (ICorDebugClass2 * This, BOOL bIsJustMyCode);
	END_INTERFACE
}  ICorDebugClass2Vtbl;
interface ICorDebugClass2
{
	CONST_VTBL struct ICorDebugClass2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugClass2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugClass2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugClass2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugClass2_GetParameterizedType(This,elementType,nTypeArgs,ppTypeArgs,ppType)( (This)->lpVtbl -> GetParameterizedType(This,elementType,nTypeArgs,ppTypeArgs,ppType) )
#define ICorDebugClass2_SetJMCStatus(This,bIsJustMyCode)( (This)->lpVtbl -> SetJMCStatus(This,bIsJustMyCode) )
#endif
#endif
#ifndef __ICorDebugEval_INTERFACE_DEFINED__
#define __ICorDebugEval_INTERFACE_DEFINED__
extern const IID IID_ICorDebugEval;
typedef struct ICorDebugEvalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugEval * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugEval * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugEval * This);
	HRESULT(STDMETHODCALLTYPE * CallFunction) (ICorDebugEval * This, ICorDebugFunction * pFunction, ULONG32 nArgs, ICorDebugValue * ppArgs[]);
	HRESULT(STDMETHODCALLTYPE * NewObject) (ICorDebugEval * This, ICorDebugFunction * pConstructor, ULONG32 nArgs, ICorDebugValue * ppArgs[]);
	HRESULT(STDMETHODCALLTYPE * NewObjectNoConstructor) (ICorDebugEval * This, ICorDebugClass * pClass);
	HRESULT(STDMETHODCALLTYPE * NewString) (ICorDebugEval * This, LPCWSTR string);
	HRESULT(STDMETHODCALLTYPE * NewArray) (ICorDebugEval * This, CorElementType elementType, ICorDebugClass * pElementClass, ULONG32 rank, ULONG32 dims[], ULONG32 lowBounds[]);
	HRESULT(STDMETHODCALLTYPE * IsActive) (ICorDebugEval * This, BOOL * pbActive);
	HRESULT(STDMETHODCALLTYPE * Abort) (ICorDebugEval * This);
	HRESULT(STDMETHODCALLTYPE * GetResult) (ICorDebugEval * This, ICorDebugValue ** ppResult);
	HRESULT(STDMETHODCALLTYPE * GetThread) (ICorDebugEval * This, ICorDebugThread ** ppThread);
	HRESULT(STDMETHODCALLTYPE * CreateValue) (ICorDebugEval * This, CorElementType elementType, ICorDebugClass * pElementClass, ICorDebugValue ** ppValue);
	END_INTERFACE
}  ICorDebugEvalVtbl;
interface ICorDebugEval
{
	CONST_VTBL struct ICorDebugEvalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugEval_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugEval_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugEval_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugEval_CallFunction(This,pFunction,nArgs,ppArgs)( (This)->lpVtbl -> CallFunction(This,pFunction,nArgs,ppArgs) )
#define ICorDebugEval_NewObject(This,pConstructor,nArgs,ppArgs)( (This)->lpVtbl -> NewObject(This,pConstructor,nArgs,ppArgs) )
#define ICorDebugEval_NewObjectNoConstructor(This,pClass)( (This)->lpVtbl -> NewObjectNoConstructor(This,pClass) )
#define ICorDebugEval_NewString(This,string)( (This)->lpVtbl -> NewString(This,string) )
#define ICorDebugEval_NewArray(This,elementType,pElementClass,rank,dims,lowBounds)( (This)->lpVtbl -> NewArray(This,elementType,pElementClass,rank,dims,lowBounds) )
#define ICorDebugEval_IsActive(This,pbActive)( (This)->lpVtbl -> IsActive(This,pbActive) )
#define ICorDebugEval_Abort(This)( (This)->lpVtbl -> Abort(This) )
#define ICorDebugEval_GetResult(This,ppResult)( (This)->lpVtbl -> GetResult(This,ppResult) )
#define ICorDebugEval_GetThread(This,ppThread)( (This)->lpVtbl -> GetThread(This,ppThread) )
#define ICorDebugEval_CreateValue(This,elementType,pElementClass,ppValue)( (This)->lpVtbl -> CreateValue(This,elementType,pElementClass,ppValue) )
#endif
#endif
#ifndef __ICorDebugEval2_INTERFACE_DEFINED__
#define __ICorDebugEval2_INTERFACE_DEFINED__
extern const IID IID_ICorDebugEval2;
typedef struct ICorDebugEval2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugEval2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugEval2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugEval2 * This);
	HRESULT(STDMETHODCALLTYPE * CallParameterizedFunction) (ICorDebugEval2 * This, ICorDebugFunction * pFunction, ULONG32 nTypeArgs, ICorDebugType * ppTypeArgs[], ULONG32 nArgs, ICorDebugValue * ppArgs[]);
	HRESULT(STDMETHODCALLTYPE * CreateValueForType) (ICorDebugEval2 * This, ICorDebugType * pType, ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * NewParameterizedObject) (ICorDebugEval2 * This, ICorDebugFunction * pConstructor, ULONG32 nTypeArgs, ICorDebugType * ppTypeArgs[], ULONG32 nArgs, ICorDebugValue * ppArgs[]);
	HRESULT(STDMETHODCALLTYPE * NewParameterizedObjectNoConstructor) (ICorDebugEval2 * This, ICorDebugClass * pClass, ULONG32 nTypeArgs, ICorDebugType * ppTypeArgs[]);
	HRESULT(STDMETHODCALLTYPE * NewParameterizedArray) (ICorDebugEval2 * This, ICorDebugType * pElementType, ULONG32 rank, ULONG32 dims[], ULONG32 lowBounds[]);
	HRESULT(STDMETHODCALLTYPE * NewStringWithLength) (ICorDebugEval2 * This, LPCWSTR string, UINT uiLength);
	HRESULT(STDMETHODCALLTYPE * RudeAbort) (ICorDebugEval2 * This);
	END_INTERFACE
}  ICorDebugEval2Vtbl;
interface ICorDebugEval2
{
	CONST_VTBL struct ICorDebugEval2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugEval2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugEval2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugEval2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugEval2_CallParameterizedFunction(This,pFunction,nTypeArgs,ppTypeArgs,nArgs,ppArgs)( (This)->lpVtbl -> CallParameterizedFunction(This,pFunction,nTypeArgs,ppTypeArgs,nArgs,ppArgs) )
#define ICorDebugEval2_CreateValueForType(This,pType,ppValue)( (This)->lpVtbl -> CreateValueForType(This,pType,ppValue) )
#define ICorDebugEval2_NewParameterizedObject(This,pConstructor,nTypeArgs,ppTypeArgs,nArgs,ppArgs)( (This)->lpVtbl -> NewParameterizedObject(This,pConstructor,nTypeArgs,ppTypeArgs,nArgs,ppArgs) )
#define ICorDebugEval2_NewParameterizedObjectNoConstructor(This,pClass,nTypeArgs,ppTypeArgs)( (This)->lpVtbl -> NewParameterizedObjectNoConstructor(This,pClass,nTypeArgs,ppTypeArgs) )
#define ICorDebugEval2_NewParameterizedArray(This,pElementType,rank,dims,lowBounds)( (This)->lpVtbl -> NewParameterizedArray(This,pElementType,rank,dims,lowBounds) )
#define ICorDebugEval2_NewStringWithLength(This,string,uiLength)( (This)->lpVtbl -> NewStringWithLength(This,string,uiLength) )
#define ICorDebugEval2_RudeAbort(This)( (This)->lpVtbl -> RudeAbort(This) )
#endif
#endif
#ifndef __ICorDebugValue_INTERFACE_DEFINED__
#define __ICorDebugValue_INTERFACE_DEFINED__
extern const IID IID_ICorDebugValue;
typedef struct ICorDebugValueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugValue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugValue * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugValue * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (ICorDebugValue * This, CorElementType * pType);
	HRESULT(STDMETHODCALLTYPE * GetSize) (ICorDebugValue * This, ULONG32 * pSize);
	HRESULT(STDMETHODCALLTYPE * GetAddress) (ICorDebugValue * This, CORDB_ADDRESS * pAddress);
	HRESULT(STDMETHODCALLTYPE * CreateBreakpoint) (ICorDebugValue * This, ICorDebugValueBreakpoint ** ppBreakpoint);
	END_INTERFACE
}  ICorDebugValueVtbl;
interface ICorDebugValue
{
	CONST_VTBL struct ICorDebugValueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugValue_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugValue_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugValue_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugValue_GetType(This,pType)( (This)->lpVtbl -> GetType(This,pType) )
#define ICorDebugValue_GetSize(This,pSize)( (This)->lpVtbl -> GetSize(This,pSize) )
#define ICorDebugValue_GetAddress(This,pAddress)( (This)->lpVtbl -> GetAddress(This,pAddress) )
#define ICorDebugValue_CreateBreakpoint(This,ppBreakpoint)( (This)->lpVtbl -> CreateBreakpoint(This,ppBreakpoint) )
#endif
#endif
#ifndef __ICorDebugValue2_INTERFACE_DEFINED__
#define __ICorDebugValue2_INTERFACE_DEFINED__
extern const IID IID_ICorDebugValue2;
typedef struct ICorDebugValue2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugValue2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugValue2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugValue2 * This);
	HRESULT(STDMETHODCALLTYPE * GetExactType) (ICorDebugValue2 * This, ICorDebugType ** ppType);
	END_INTERFACE
}  ICorDebugValue2Vtbl;
interface ICorDebugValue2
{
	CONST_VTBL struct ICorDebugValue2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugValue2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugValue2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugValue2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugValue2_GetExactType(This,ppType)( (This)->lpVtbl -> GetExactType(This,ppType) )
#endif
#endif
#ifndef __ICorDebugGenericValue_INTERFACE_DEFINED__
#define __ICorDebugGenericValue_INTERFACE_DEFINED__
extern const IID IID_ICorDebugGenericValue;
typedef struct ICorDebugGenericValueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugGenericValue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugGenericValue * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugGenericValue * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (ICorDebugGenericValue * This, CorElementType * pType);
	HRESULT(STDMETHODCALLTYPE * GetSize) (ICorDebugGenericValue * This, ULONG32 * pSize);
	HRESULT(STDMETHODCALLTYPE * GetAddress) (ICorDebugGenericValue * This, CORDB_ADDRESS * pAddress);
	HRESULT(STDMETHODCALLTYPE * CreateBreakpoint) (ICorDebugGenericValue * This, ICorDebugValueBreakpoint ** ppBreakpoint);
	HRESULT(STDMETHODCALLTYPE * GetValue) (ICorDebugGenericValue * This, void *pTo);
	HRESULT(STDMETHODCALLTYPE * SetValue) (ICorDebugGenericValue * This, void *pFrom);
	END_INTERFACE
}  ICorDebugGenericValueVtbl;
interface ICorDebugGenericValue
{
	CONST_VTBL struct ICorDebugGenericValueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugGenericValue_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugGenericValue_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugGenericValue_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugGenericValue_GetType(This,pType)( (This)->lpVtbl -> GetType(This,pType) )
#define ICorDebugGenericValue_GetSize(This,pSize)( (This)->lpVtbl -> GetSize(This,pSize) )
#define ICorDebugGenericValue_GetAddress(This,pAddress)( (This)->lpVtbl -> GetAddress(This,pAddress) )
#define ICorDebugGenericValue_CreateBreakpoint(This,ppBreakpoint)( (This)->lpVtbl -> CreateBreakpoint(This,ppBreakpoint) )
#define ICorDebugGenericValue_GetValue(This,pTo)( (This)->lpVtbl -> GetValue(This,pTo) )
#define ICorDebugGenericValue_SetValue(This,pFrom)( (This)->lpVtbl -> SetValue(This,pFrom) )
#endif
#endif
#ifndef __ICorDebugReferenceValue_INTERFACE_DEFINED__
#define __ICorDebugReferenceValue_INTERFACE_DEFINED__
extern const IID IID_ICorDebugReferenceValue;
typedef struct ICorDebugReferenceValueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugReferenceValue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugReferenceValue * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugReferenceValue * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (ICorDebugReferenceValue * This, CorElementType * pType);
	HRESULT(STDMETHODCALLTYPE * GetSize) (ICorDebugReferenceValue * This, ULONG32 * pSize);
	HRESULT(STDMETHODCALLTYPE * GetAddress) (ICorDebugReferenceValue * This, CORDB_ADDRESS * pAddress);
	HRESULT(STDMETHODCALLTYPE * CreateBreakpoint) (ICorDebugReferenceValue * This, ICorDebugValueBreakpoint ** ppBreakpoint);
	HRESULT(STDMETHODCALLTYPE * IsNull) (ICorDebugReferenceValue * This, BOOL * pbNull);
	HRESULT(STDMETHODCALLTYPE * GetValue) (ICorDebugReferenceValue * This, CORDB_ADDRESS * pValue);
	HRESULT(STDMETHODCALLTYPE * SetValue) (ICorDebugReferenceValue * This, CORDB_ADDRESS value);
	HRESULT(STDMETHODCALLTYPE * Dereference) (ICorDebugReferenceValue * This, ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * DereferenceStrong) (ICorDebugReferenceValue * This, ICorDebugValue ** ppValue);
	END_INTERFACE
}  ICorDebugReferenceValueVtbl;
interface ICorDebugReferenceValue
{
	CONST_VTBL struct ICorDebugReferenceValueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugReferenceValue_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugReferenceValue_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugReferenceValue_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugReferenceValue_GetType(This,pType)( (This)->lpVtbl -> GetType(This,pType) )
#define ICorDebugReferenceValue_GetSize(This,pSize)( (This)->lpVtbl -> GetSize(This,pSize) )
#define ICorDebugReferenceValue_GetAddress(This,pAddress)( (This)->lpVtbl -> GetAddress(This,pAddress) )
#define ICorDebugReferenceValue_CreateBreakpoint(This,ppBreakpoint)( (This)->lpVtbl -> CreateBreakpoint(This,ppBreakpoint) )
#define ICorDebugReferenceValue_IsNull(This,pbNull)( (This)->lpVtbl -> IsNull(This,pbNull) )
#define ICorDebugReferenceValue_GetValue(This,pValue)( (This)->lpVtbl -> GetValue(This,pValue) )
#define ICorDebugReferenceValue_SetValue(This,value)( (This)->lpVtbl -> SetValue(This,value) )
#define ICorDebugReferenceValue_Dereference(This,ppValue)( (This)->lpVtbl -> Dereference(This,ppValue) )
#define ICorDebugReferenceValue_DereferenceStrong(This,ppValue)( (This)->lpVtbl -> DereferenceStrong(This,ppValue) )
#endif
#endif
#ifndef __ICorDebugHeapValue_INTERFACE_DEFINED__
#define __ICorDebugHeapValue_INTERFACE_DEFINED__
extern const IID IID_ICorDebugHeapValue;
typedef struct ICorDebugHeapValueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugHeapValue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugHeapValue * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugHeapValue * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (ICorDebugHeapValue * This, CorElementType * pType);
	HRESULT(STDMETHODCALLTYPE * GetSize) (ICorDebugHeapValue * This, ULONG32 * pSize);
	HRESULT(STDMETHODCALLTYPE * GetAddress) (ICorDebugHeapValue * This, CORDB_ADDRESS * pAddress);
	HRESULT(STDMETHODCALLTYPE * CreateBreakpoint) (ICorDebugHeapValue * This, ICorDebugValueBreakpoint ** ppBreakpoint);
	HRESULT(STDMETHODCALLTYPE * IsValid) (ICorDebugHeapValue * This, BOOL * pbValid);
	HRESULT(STDMETHODCALLTYPE * CreateRelocBreakpoint) (ICorDebugHeapValue * This, ICorDebugValueBreakpoint ** ppBreakpoint);
	END_INTERFACE
}  ICorDebugHeapValueVtbl;
interface ICorDebugHeapValue
{
	CONST_VTBL struct ICorDebugHeapValueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugHeapValue_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugHeapValue_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugHeapValue_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugHeapValue_GetType(This,pType)( (This)->lpVtbl -> GetType(This,pType) )
#define ICorDebugHeapValue_GetSize(This,pSize)( (This)->lpVtbl -> GetSize(This,pSize) )
#define ICorDebugHeapValue_GetAddress(This,pAddress)( (This)->lpVtbl -> GetAddress(This,pAddress) )
#define ICorDebugHeapValue_CreateBreakpoint(This,ppBreakpoint)( (This)->lpVtbl -> CreateBreakpoint(This,ppBreakpoint) )
#define ICorDebugHeapValue_IsValid(This,pbValid)( (This)->lpVtbl -> IsValid(This,pbValid) )
#define ICorDebugHeapValue_CreateRelocBreakpoint(This,ppBreakpoint)( (This)->lpVtbl -> CreateRelocBreakpoint(This,ppBreakpoint) )
#endif
#endif
#ifndef __ICorDebugHeapValue2_INTERFACE_DEFINED__
#define __ICorDebugHeapValue2_INTERFACE_DEFINED__
extern const IID IID_ICorDebugHeapValue2;
typedef struct ICorDebugHeapValue2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugHeapValue2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugHeapValue2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugHeapValue2 * This);
	HRESULT(STDMETHODCALLTYPE * CreateHandle) (ICorDebugHeapValue2 * This, CorDebugHandleType type, ICorDebugHandleValue ** ppHandle);
	END_INTERFACE
}  ICorDebugHeapValue2Vtbl;
interface ICorDebugHeapValue2
{
	CONST_VTBL struct ICorDebugHeapValue2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugHeapValue2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugHeapValue2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugHeapValue2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugHeapValue2_CreateHandle(This,type,ppHandle)( (This)->lpVtbl -> CreateHandle(This,type,ppHandle) )
#endif
#endif
#ifndef __ICorDebugHeapValue3_INTERFACE_DEFINED__
#define __ICorDebugHeapValue3_INTERFACE_DEFINED__
extern const IID IID_ICorDebugHeapValue3;
typedef struct ICorDebugHeapValue3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugHeapValue3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugHeapValue3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugHeapValue3 * This);
	HRESULT(STDMETHODCALLTYPE * GetThreadOwningMonitorLock) (ICorDebugHeapValue3 * This, ICorDebugThread ** ppThread, DWORD * pAcquisitionCount);
	HRESULT(STDMETHODCALLTYPE * GetMonitorEventWaitList) (ICorDebugHeapValue3 * This, ICorDebugThreadEnum ** ppThreadEnum);
	END_INTERFACE
}  ICorDebugHeapValue3Vtbl;
interface ICorDebugHeapValue3
{
	CONST_VTBL struct ICorDebugHeapValue3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugHeapValue3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugHeapValue3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugHeapValue3_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugHeapValue3_GetThreadOwningMonitorLock(This,ppThread,pAcquisitionCount)( (This)->lpVtbl -> GetThreadOwningMonitorLock(This,ppThread,pAcquisitionCount) )
#define ICorDebugHeapValue3_GetMonitorEventWaitList(This,ppThreadEnum)( (This)->lpVtbl -> GetMonitorEventWaitList(This,ppThreadEnum) )
#endif
#endif
#ifndef __ICorDebugObjectValue_INTERFACE_DEFINED__
#define __ICorDebugObjectValue_INTERFACE_DEFINED__
extern const IID IID_ICorDebugObjectValue;
typedef struct ICorDebugObjectValueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugObjectValue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugObjectValue * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugObjectValue * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (ICorDebugObjectValue * This, CorElementType * pType);
	HRESULT(STDMETHODCALLTYPE * GetSize) (ICorDebugObjectValue * This, ULONG32 * pSize);
	HRESULT(STDMETHODCALLTYPE * GetAddress) (ICorDebugObjectValue * This, CORDB_ADDRESS * pAddress);
	HRESULT(STDMETHODCALLTYPE * CreateBreakpoint) (ICorDebugObjectValue * This, ICorDebugValueBreakpoint ** ppBreakpoint);
	HRESULT(STDMETHODCALLTYPE * GetClass) (ICorDebugObjectValue * This, ICorDebugClass ** ppClass);
	HRESULT(STDMETHODCALLTYPE * GetFieldValue) (ICorDebugObjectValue * This, ICorDebugClass * pClass, mdFieldDef fieldDef, ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * GetVirtualMethod) (ICorDebugObjectValue * This, mdMemberRef memberRef, ICorDebugFunction ** ppFunction);
	HRESULT(STDMETHODCALLTYPE * GetContext) (ICorDebugObjectValue * This, ICorDebugContext ** ppContext);
	HRESULT(STDMETHODCALLTYPE * IsValueClass) (ICorDebugObjectValue * This, BOOL * pbIsValueClass);
	HRESULT(STDMETHODCALLTYPE * GetManagedCopy) (ICorDebugObjectValue * This, IUnknown ** ppObject);
	HRESULT(STDMETHODCALLTYPE * SetFromManagedCopy) (ICorDebugObjectValue * This, IUnknown * pObject);
	END_INTERFACE
}  ICorDebugObjectValueVtbl;
interface ICorDebugObjectValue
{
	CONST_VTBL struct ICorDebugObjectValueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugObjectValue_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugObjectValue_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugObjectValue_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugObjectValue_GetType(This,pType)( (This)->lpVtbl -> GetType(This,pType) )
#define ICorDebugObjectValue_GetSize(This,pSize)( (This)->lpVtbl -> GetSize(This,pSize) )
#define ICorDebugObjectValue_GetAddress(This,pAddress)( (This)->lpVtbl -> GetAddress(This,pAddress) )
#define ICorDebugObjectValue_CreateBreakpoint(This,ppBreakpoint)( (This)->lpVtbl -> CreateBreakpoint(This,ppBreakpoint) )
#define ICorDebugObjectValue_GetClass(This,ppClass)( (This)->lpVtbl -> GetClass(This,ppClass) )
#define ICorDebugObjectValue_GetFieldValue(This,pClass,fieldDef,ppValue)( (This)->lpVtbl -> GetFieldValue(This,pClass,fieldDef,ppValue) )
#define ICorDebugObjectValue_GetVirtualMethod(This,memberRef,ppFunction)( (This)->lpVtbl -> GetVirtualMethod(This,memberRef,ppFunction) )
#define ICorDebugObjectValue_GetContext(This,ppContext)( (This)->lpVtbl -> GetContext(This,ppContext) )
#define ICorDebugObjectValue_IsValueClass(This,pbIsValueClass)( (This)->lpVtbl -> IsValueClass(This,pbIsValueClass) )
#define ICorDebugObjectValue_GetManagedCopy(This,ppObject)( (This)->lpVtbl -> GetManagedCopy(This,ppObject) )
#define ICorDebugObjectValue_SetFromManagedCopy(This,pObject)( (This)->lpVtbl -> SetFromManagedCopy(This,pObject) )
#endif
#endif
#ifndef __ICorDebugObjectValue2_INTERFACE_DEFINED__
#define __ICorDebugObjectValue2_INTERFACE_DEFINED__
extern const IID IID_ICorDebugObjectValue2;
typedef struct ICorDebugObjectValue2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugObjectValue2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugObjectValue2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugObjectValue2 * This);
	HRESULT(STDMETHODCALLTYPE * GetVirtualMethodAndType) (ICorDebugObjectValue2 * This, mdMemberRef memberRef, ICorDebugFunction ** ppFunction, ICorDebugType ** ppType);
	END_INTERFACE
}  ICorDebugObjectValue2Vtbl;
interface ICorDebugObjectValue2
{
	CONST_VTBL struct ICorDebugObjectValue2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugObjectValue2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugObjectValue2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugObjectValue2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugObjectValue2_GetVirtualMethodAndType(This,memberRef,ppFunction,ppType)( (This)->lpVtbl -> GetVirtualMethodAndType(This,memberRef,ppFunction,ppType) )
#endif
#endif
#ifndef __ICorDebugBoxValue_INTERFACE_DEFINED__
#define __ICorDebugBoxValue_INTERFACE_DEFINED__
extern const IID IID_ICorDebugBoxValue;
typedef struct ICorDebugBoxValueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugBoxValue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugBoxValue * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugBoxValue * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (ICorDebugBoxValue * This, CorElementType * pType);
	HRESULT(STDMETHODCALLTYPE * GetSize) (ICorDebugBoxValue * This, ULONG32 * pSize);
	HRESULT(STDMETHODCALLTYPE * GetAddress) (ICorDebugBoxValue * This, CORDB_ADDRESS * pAddress);
	HRESULT(STDMETHODCALLTYPE * CreateBreakpoint) (ICorDebugBoxValue * This, ICorDebugValueBreakpoint ** ppBreakpoint);
	HRESULT(STDMETHODCALLTYPE * IsValid) (ICorDebugBoxValue * This, BOOL * pbValid);
	HRESULT(STDMETHODCALLTYPE * CreateRelocBreakpoint) (ICorDebugBoxValue * This, ICorDebugValueBreakpoint ** ppBreakpoint);
	HRESULT(STDMETHODCALLTYPE * GetObject) (ICorDebugBoxValue * This, ICorDebugObjectValue ** ppObject);
	END_INTERFACE
}  ICorDebugBoxValueVtbl;
interface ICorDebugBoxValue
{
	CONST_VTBL struct ICorDebugBoxValueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugBoxValue_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugBoxValue_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugBoxValue_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugBoxValue_GetType(This,pType)( (This)->lpVtbl -> GetType(This,pType) )
#define ICorDebugBoxValue_GetSize(This,pSize)( (This)->lpVtbl -> GetSize(This,pSize) )
#define ICorDebugBoxValue_GetAddress(This,pAddress)( (This)->lpVtbl -> GetAddress(This,pAddress) )
#define ICorDebugBoxValue_CreateBreakpoint(This,ppBreakpoint)( (This)->lpVtbl -> CreateBreakpoint(This,ppBreakpoint) )
#define ICorDebugBoxValue_IsValid(This,pbValid)( (This)->lpVtbl -> IsValid(This,pbValid) )
#define ICorDebugBoxValue_CreateRelocBreakpoint(This,ppBreakpoint)( (This)->lpVtbl -> CreateRelocBreakpoint(This,ppBreakpoint) )
#define ICorDebugBoxValue_GetObject(This,ppObject)( (This)->lpVtbl -> GetObject(This,ppObject) )
#endif
#endif
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0061_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0061_v0_0_s_ifspec;
#ifndef __ICorDebugStringValue_INTERFACE_DEFINED__
#define __ICorDebugStringValue_INTERFACE_DEFINED__
extern const IID IID_ICorDebugStringValue;
typedef struct ICorDebugStringValueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugStringValue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugStringValue * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugStringValue * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (ICorDebugStringValue * This, CorElementType * pType);
	HRESULT(STDMETHODCALLTYPE * GetSize) (ICorDebugStringValue * This, ULONG32 * pSize);
	HRESULT(STDMETHODCALLTYPE * GetAddress) (ICorDebugStringValue * This, CORDB_ADDRESS * pAddress);
	HRESULT(STDMETHODCALLTYPE * CreateBreakpoint) (ICorDebugStringValue * This, ICorDebugValueBreakpoint ** ppBreakpoint);
	HRESULT(STDMETHODCALLTYPE * IsValid) (ICorDebugStringValue * This, BOOL * pbValid);
	HRESULT(STDMETHODCALLTYPE * CreateRelocBreakpoint) (ICorDebugStringValue * This, ICorDebugValueBreakpoint ** ppBreakpoint);
	HRESULT(STDMETHODCALLTYPE * GetLength) (ICorDebugStringValue * This, ULONG32 * pcchString);
	HRESULT(STDMETHODCALLTYPE * GetString) (ICorDebugStringValue * This, ULONG32 cchString, ULONG32 * pcchString, WCHAR szString[]);
	END_INTERFACE
}  ICorDebugStringValueVtbl;
interface ICorDebugStringValue
{
	CONST_VTBL struct ICorDebugStringValueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugStringValue_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugStringValue_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugStringValue_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugStringValue_GetType(This,pType)( (This)->lpVtbl -> GetType(This,pType) )
#define ICorDebugStringValue_GetSize(This,pSize)( (This)->lpVtbl -> GetSize(This,pSize) )
#define ICorDebugStringValue_GetAddress(This,pAddress)( (This)->lpVtbl -> GetAddress(This,pAddress) )
#define ICorDebugStringValue_CreateBreakpoint(This,ppBreakpoint)( (This)->lpVtbl -> CreateBreakpoint(This,ppBreakpoint) )
#define ICorDebugStringValue_IsValid(This,pbValid)( (This)->lpVtbl -> IsValid(This,pbValid) )
#define ICorDebugStringValue_CreateRelocBreakpoint(This,ppBreakpoint)( (This)->lpVtbl -> CreateRelocBreakpoint(This,ppBreakpoint) )
#define ICorDebugStringValue_GetLength(This,pcchString)( (This)->lpVtbl -> GetLength(This,pcchString) )
#define ICorDebugStringValue_GetString(This,cchString,pcchString,szString)( (This)->lpVtbl -> GetString(This,cchString,pcchString,szString) )
#endif
#endif
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0062_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0062_v0_0_s_ifspec;
#ifndef __ICorDebugArrayValue_INTERFACE_DEFINED__
#define __ICorDebugArrayValue_INTERFACE_DEFINED__
extern const IID IID_ICorDebugArrayValue;
typedef struct ICorDebugArrayValueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugArrayValue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugArrayValue * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugArrayValue * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (ICorDebugArrayValue * This, CorElementType * pType);
	HRESULT(STDMETHODCALLTYPE * GetSize) (ICorDebugArrayValue * This, ULONG32 * pSize);
	HRESULT(STDMETHODCALLTYPE * GetAddress) (ICorDebugArrayValue * This, CORDB_ADDRESS * pAddress);
	HRESULT(STDMETHODCALLTYPE * CreateBreakpoint) (ICorDebugArrayValue * This, ICorDebugValueBreakpoint ** ppBreakpoint);
	HRESULT(STDMETHODCALLTYPE * IsValid) (ICorDebugArrayValue * This, BOOL * pbValid);
	HRESULT(STDMETHODCALLTYPE * CreateRelocBreakpoint) (ICorDebugArrayValue * This, ICorDebugValueBreakpoint ** ppBreakpoint);
	HRESULT(STDMETHODCALLTYPE * GetElementType) (ICorDebugArrayValue * This, CorElementType * pType);
	HRESULT(STDMETHODCALLTYPE * GetRank) (ICorDebugArrayValue * This, ULONG32 * pnRank);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugArrayValue * This, ULONG32 * pnCount);
	HRESULT(STDMETHODCALLTYPE * GetDimensions) (ICorDebugArrayValue * This, ULONG32 cdim, ULONG32 dims[]);
	HRESULT(STDMETHODCALLTYPE * HasBaseIndicies) (ICorDebugArrayValue * This, BOOL * pbHasBaseIndicies);
	HRESULT(STDMETHODCALLTYPE * GetBaseIndicies) (ICorDebugArrayValue * This, ULONG32 cdim, ULONG32 indicies[]);
	HRESULT(STDMETHODCALLTYPE * GetElement) (ICorDebugArrayValue * This, ULONG32 cdim, ULONG32 indices[], ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * GetElementAtPosition) (ICorDebugArrayValue * This, ULONG32 nPosition, ICorDebugValue ** ppValue);
	END_INTERFACE
}  ICorDebugArrayValueVtbl;
interface ICorDebugArrayValue
{
	CONST_VTBL struct ICorDebugArrayValueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugArrayValue_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugArrayValue_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugArrayValue_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugArrayValue_GetType(This,pType)( (This)->lpVtbl -> GetType(This,pType) )
#define ICorDebugArrayValue_GetSize(This,pSize)( (This)->lpVtbl -> GetSize(This,pSize) )
#define ICorDebugArrayValue_GetAddress(This,pAddress)( (This)->lpVtbl -> GetAddress(This,pAddress) )
#define ICorDebugArrayValue_CreateBreakpoint(This,ppBreakpoint)( (This)->lpVtbl -> CreateBreakpoint(This,ppBreakpoint) )
#define ICorDebugArrayValue_IsValid(This,pbValid)( (This)->lpVtbl -> IsValid(This,pbValid) )
#define ICorDebugArrayValue_CreateRelocBreakpoint(This,ppBreakpoint)( (This)->lpVtbl -> CreateRelocBreakpoint(This,ppBreakpoint) )
#define ICorDebugArrayValue_GetElementType(This,pType)( (This)->lpVtbl -> GetElementType(This,pType) )
#define ICorDebugArrayValue_GetRank(This,pnRank)( (This)->lpVtbl -> GetRank(This,pnRank) )
#define ICorDebugArrayValue_GetCount(This,pnCount)( (This)->lpVtbl -> GetCount(This,pnCount) )
#define ICorDebugArrayValue_GetDimensions(This,cdim,dims)( (This)->lpVtbl -> GetDimensions(This,cdim,dims) )
#define ICorDebugArrayValue_HasBaseIndicies(This,pbHasBaseIndicies)( (This)->lpVtbl -> HasBaseIndicies(This,pbHasBaseIndicies) )
#define ICorDebugArrayValue_GetBaseIndicies(This,cdim,indicies)( (This)->lpVtbl -> GetBaseIndicies(This,cdim,indicies) )
#define ICorDebugArrayValue_GetElement(This,cdim,indices,ppValue)( (This)->lpVtbl -> GetElement(This,cdim,indices,ppValue) )
#define ICorDebugArrayValue_GetElementAtPosition(This,nPosition,ppValue)( (This)->lpVtbl -> GetElementAtPosition(This,nPosition,ppValue) )
#endif
#endif
#ifndef __ICorDebugHandleValue_INTERFACE_DEFINED__
#define __ICorDebugHandleValue_INTERFACE_DEFINED__
extern const IID IID_ICorDebugHandleValue;
typedef struct ICorDebugHandleValueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugHandleValue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugHandleValue * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugHandleValue * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (ICorDebugHandleValue * This, CorElementType * pType);
	HRESULT(STDMETHODCALLTYPE * GetSize) (ICorDebugHandleValue * This, ULONG32 * pSize);
	HRESULT(STDMETHODCALLTYPE * GetAddress) (ICorDebugHandleValue * This, CORDB_ADDRESS * pAddress);
	HRESULT(STDMETHODCALLTYPE * CreateBreakpoint) (ICorDebugHandleValue * This, ICorDebugValueBreakpoint ** ppBreakpoint);
	HRESULT(STDMETHODCALLTYPE * IsNull) (ICorDebugHandleValue * This, BOOL * pbNull);
	HRESULT(STDMETHODCALLTYPE * GetValue) (ICorDebugHandleValue * This, CORDB_ADDRESS * pValue);
	HRESULT(STDMETHODCALLTYPE * SetValue) (ICorDebugHandleValue * This, CORDB_ADDRESS value);
	HRESULT(STDMETHODCALLTYPE * Dereference) (ICorDebugHandleValue * This, ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * DereferenceStrong) (ICorDebugHandleValue * This, ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * GetHandleType) (ICorDebugHandleValue * This, CorDebugHandleType * pType);
	HRESULT(STDMETHODCALLTYPE * Dispose) (ICorDebugHandleValue * This);
	END_INTERFACE
}  ICorDebugHandleValueVtbl;
interface ICorDebugHandleValue
{
	CONST_VTBL struct ICorDebugHandleValueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugHandleValue_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugHandleValue_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugHandleValue_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugHandleValue_GetType(This,pType)( (This)->lpVtbl -> GetType(This,pType) )
#define ICorDebugHandleValue_GetSize(This,pSize)( (This)->lpVtbl -> GetSize(This,pSize) )
#define ICorDebugHandleValue_GetAddress(This,pAddress)( (This)->lpVtbl -> GetAddress(This,pAddress) )
#define ICorDebugHandleValue_CreateBreakpoint(This,ppBreakpoint)( (This)->lpVtbl -> CreateBreakpoint(This,ppBreakpoint) )
#define ICorDebugHandleValue_IsNull(This,pbNull)( (This)->lpVtbl -> IsNull(This,pbNull) )
#define ICorDebugHandleValue_GetValue(This,pValue)( (This)->lpVtbl -> GetValue(This,pValue) )
#define ICorDebugHandleValue_SetValue(This,value)( (This)->lpVtbl -> SetValue(This,value) )
#define ICorDebugHandleValue_Dereference(This,ppValue)( (This)->lpVtbl -> Dereference(This,ppValue) )
#define ICorDebugHandleValue_DereferenceStrong(This,ppValue)( (This)->lpVtbl -> DereferenceStrong(This,ppValue) )
#define ICorDebugHandleValue_GetHandleType(This,pType)( (This)->lpVtbl -> GetHandleType(This,pType) )
#define ICorDebugHandleValue_Dispose(This)( (This)->lpVtbl -> Dispose(This) )
#endif
#endif
#ifndef __ICorDebugContext_INTERFACE_DEFINED__
#define __ICorDebugContext_INTERFACE_DEFINED__
extern const IID IID_ICorDebugContext;
typedef struct ICorDebugContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugContext * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (ICorDebugContext * This, CorElementType * pType);
	HRESULT(STDMETHODCALLTYPE * GetSize) (ICorDebugContext * This, ULONG32 * pSize);
	HRESULT(STDMETHODCALLTYPE * GetAddress) (ICorDebugContext * This, CORDB_ADDRESS * pAddress);
	HRESULT(STDMETHODCALLTYPE * CreateBreakpoint) (ICorDebugContext * This, ICorDebugValueBreakpoint ** ppBreakpoint);
	HRESULT(STDMETHODCALLTYPE * GetClass) (ICorDebugContext * This, ICorDebugClass ** ppClass);
	HRESULT(STDMETHODCALLTYPE * GetFieldValue) (ICorDebugContext * This, ICorDebugClass * pClass, mdFieldDef fieldDef, ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * GetVirtualMethod) (ICorDebugContext * This, mdMemberRef memberRef, ICorDebugFunction ** ppFunction);
	HRESULT(STDMETHODCALLTYPE * GetContext) (ICorDebugContext * This, ICorDebugContext ** ppContext);
	HRESULT(STDMETHODCALLTYPE * IsValueClass) (ICorDebugContext * This, BOOL * pbIsValueClass);
	HRESULT(STDMETHODCALLTYPE * GetManagedCopy) (ICorDebugContext * This, IUnknown ** ppObject);
	HRESULT(STDMETHODCALLTYPE * SetFromManagedCopy) (ICorDebugContext * This, IUnknown * pObject);
	END_INTERFACE
}  ICorDebugContextVtbl;
interface ICorDebugContext
{
	CONST_VTBL struct ICorDebugContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugContext_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugContext_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugContext_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugContext_GetType(This,pType)( (This)->lpVtbl -> GetType(This,pType) )
#define ICorDebugContext_GetSize(This,pSize)( (This)->lpVtbl -> GetSize(This,pSize) )
#define ICorDebugContext_GetAddress(This,pAddress)( (This)->lpVtbl -> GetAddress(This,pAddress) )
#define ICorDebugContext_CreateBreakpoint(This,ppBreakpoint)( (This)->lpVtbl -> CreateBreakpoint(This,ppBreakpoint) )
#define ICorDebugContext_GetClass(This,ppClass)( (This)->lpVtbl -> GetClass(This,ppClass) )
#define ICorDebugContext_GetFieldValue(This,pClass,fieldDef,ppValue)( (This)->lpVtbl -> GetFieldValue(This,pClass,fieldDef,ppValue) )
#define ICorDebugContext_GetVirtualMethod(This,memberRef,ppFunction)( (This)->lpVtbl -> GetVirtualMethod(This,memberRef,ppFunction) )
#define ICorDebugContext_GetContext(This,ppContext)( (This)->lpVtbl -> GetContext(This,ppContext) )
#define ICorDebugContext_IsValueClass(This,pbIsValueClass)( (This)->lpVtbl -> IsValueClass(This,pbIsValueClass) )
#define ICorDebugContext_GetManagedCopy(This,ppObject)( (This)->lpVtbl -> GetManagedCopy(This,ppObject) )
#define ICorDebugContext_SetFromManagedCopy(This,pObject)( (This)->lpVtbl -> SetFromManagedCopy(This,pObject) )
#endif
#endif
#ifndef __ICorDebugEnum_INTERFACE_DEFINED__
#define __ICorDebugEnum_INTERFACE_DEFINED__
extern const IID IID_ICorDebugEnum;
typedef struct ICorDebugEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorDebugEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorDebugEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorDebugEnum * This, ICorDebugEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugEnum * This, ULONG * pcelt);
	END_INTERFACE
}  ICorDebugEnumVtbl;
interface ICorDebugEnum
{
	CONST_VTBL struct ICorDebugEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorDebugEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorDebugEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorDebugEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#endif
#endif
#ifndef __ICorDebugObjectEnum_INTERFACE_DEFINED__
#define __ICorDebugObjectEnum_INTERFACE_DEFINED__
extern const IID IID_ICorDebugObjectEnum;
typedef struct ICorDebugObjectEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugObjectEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugObjectEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugObjectEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorDebugObjectEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorDebugObjectEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorDebugObjectEnum * This, ICorDebugEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugObjectEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorDebugObjectEnum * This, ULONG celt, CORDB_ADDRESS objects[], ULONG * pceltFetched);
	END_INTERFACE
}  ICorDebugObjectEnumVtbl;
interface ICorDebugObjectEnum
{
	CONST_VTBL struct ICorDebugObjectEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugObjectEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugObjectEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugObjectEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugObjectEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorDebugObjectEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorDebugObjectEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorDebugObjectEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorDebugObjectEnum_Next(This,celt,objects,pceltFetched)( (This)->lpVtbl -> Next(This,celt,objects,pceltFetched) )
#endif
#endif
#ifndef __ICorDebugBreakpointEnum_INTERFACE_DEFINED__
#define __ICorDebugBreakpointEnum_INTERFACE_DEFINED__
extern const IID IID_ICorDebugBreakpointEnum;
typedef struct ICorDebugBreakpointEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugBreakpointEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugBreakpointEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugBreakpointEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorDebugBreakpointEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorDebugBreakpointEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorDebugBreakpointEnum * This, ICorDebugEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugBreakpointEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorDebugBreakpointEnum * This, ULONG celt, ICorDebugBreakpoint * breakpoints[], ULONG * pceltFetched);
	END_INTERFACE
}  ICorDebugBreakpointEnumVtbl;
interface ICorDebugBreakpointEnum
{
	CONST_VTBL struct ICorDebugBreakpointEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugBreakpointEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugBreakpointEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugBreakpointEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugBreakpointEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorDebugBreakpointEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorDebugBreakpointEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorDebugBreakpointEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorDebugBreakpointEnum_Next(This,celt,breakpoints,pceltFetched)( (This)->lpVtbl -> Next(This,celt,breakpoints,pceltFetched) )
#endif
#endif
#ifndef __ICorDebugStepperEnum_INTERFACE_DEFINED__
#define __ICorDebugStepperEnum_INTERFACE_DEFINED__
extern const IID IID_ICorDebugStepperEnum;
typedef struct ICorDebugStepperEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugStepperEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugStepperEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugStepperEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorDebugStepperEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorDebugStepperEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorDebugStepperEnum * This, ICorDebugEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugStepperEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorDebugStepperEnum * This, ULONG celt, ICorDebugStepper * steppers[], ULONG * pceltFetched);
	END_INTERFACE
}  ICorDebugStepperEnumVtbl;
interface ICorDebugStepperEnum
{
	CONST_VTBL struct ICorDebugStepperEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugStepperEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugStepperEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugStepperEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugStepperEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorDebugStepperEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorDebugStepperEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorDebugStepperEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorDebugStepperEnum_Next(This,celt,steppers,pceltFetched)( (This)->lpVtbl -> Next(This,celt,steppers,pceltFetched) )
#endif
#endif
#ifndef __ICorDebugProcessEnum_INTERFACE_DEFINED__
#define __ICorDebugProcessEnum_INTERFACE_DEFINED__
extern const IID IID_ICorDebugProcessEnum;
typedef struct ICorDebugProcessEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugProcessEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugProcessEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugProcessEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorDebugProcessEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorDebugProcessEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorDebugProcessEnum * This, ICorDebugEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugProcessEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorDebugProcessEnum * This, ULONG celt, ICorDebugProcess * processes[], ULONG * pceltFetched);
	END_INTERFACE
}  ICorDebugProcessEnumVtbl;
interface ICorDebugProcessEnum
{
	CONST_VTBL struct ICorDebugProcessEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugProcessEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugProcessEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugProcessEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugProcessEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorDebugProcessEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorDebugProcessEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorDebugProcessEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorDebugProcessEnum_Next(This,celt,processes,pceltFetched)( (This)->lpVtbl -> Next(This,celt,processes,pceltFetched) )
#endif
#endif
#ifndef __ICorDebugThreadEnum_INTERFACE_DEFINED__
#define __ICorDebugThreadEnum_INTERFACE_DEFINED__
extern const IID IID_ICorDebugThreadEnum;
typedef struct ICorDebugThreadEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugThreadEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugThreadEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugThreadEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorDebugThreadEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorDebugThreadEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorDebugThreadEnum * This, ICorDebugEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugThreadEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorDebugThreadEnum * This, ULONG celt, ICorDebugThread * threads[], ULONG * pceltFetched);
	END_INTERFACE
}  ICorDebugThreadEnumVtbl;
interface ICorDebugThreadEnum
{
	CONST_VTBL struct ICorDebugThreadEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugThreadEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugThreadEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugThreadEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugThreadEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorDebugThreadEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorDebugThreadEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorDebugThreadEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorDebugThreadEnum_Next(This,celt,threads,pceltFetched)( (This)->lpVtbl -> Next(This,celt,threads,pceltFetched) )
#endif
#endif
#ifndef __ICorDebugFrameEnum_INTERFACE_DEFINED__
#define __ICorDebugFrameEnum_INTERFACE_DEFINED__
extern const IID IID_ICorDebugFrameEnum;
typedef struct ICorDebugFrameEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugFrameEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugFrameEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugFrameEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorDebugFrameEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorDebugFrameEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorDebugFrameEnum * This, ICorDebugEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugFrameEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorDebugFrameEnum * This, ULONG celt, ICorDebugFrame * frames[], ULONG * pceltFetched);
	END_INTERFACE
}  ICorDebugFrameEnumVtbl;
interface ICorDebugFrameEnum
{
	CONST_VTBL struct ICorDebugFrameEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugFrameEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugFrameEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugFrameEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugFrameEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorDebugFrameEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorDebugFrameEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorDebugFrameEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorDebugFrameEnum_Next(This,celt,frames,pceltFetched)( (This)->lpVtbl -> Next(This,celt,frames,pceltFetched) )
#endif
#endif
#ifndef __ICorDebugChainEnum_INTERFACE_DEFINED__
#define __ICorDebugChainEnum_INTERFACE_DEFINED__
extern const IID IID_ICorDebugChainEnum;
typedef struct ICorDebugChainEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugChainEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugChainEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugChainEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorDebugChainEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorDebugChainEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorDebugChainEnum * This, ICorDebugEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugChainEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorDebugChainEnum * This, ULONG celt, ICorDebugChain * chains[], ULONG * pceltFetched);
	END_INTERFACE
}  ICorDebugChainEnumVtbl;
interface ICorDebugChainEnum
{
	CONST_VTBL struct ICorDebugChainEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugChainEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugChainEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugChainEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugChainEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorDebugChainEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorDebugChainEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorDebugChainEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorDebugChainEnum_Next(This,celt,chains,pceltFetched)( (This)->lpVtbl -> Next(This,celt,chains,pceltFetched) )
#endif
#endif
#ifndef __ICorDebugModuleEnum_INTERFACE_DEFINED__
#define __ICorDebugModuleEnum_INTERFACE_DEFINED__
extern const IID IID_ICorDebugModuleEnum;
typedef struct ICorDebugModuleEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugModuleEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugModuleEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugModuleEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorDebugModuleEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorDebugModuleEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorDebugModuleEnum * This, ICorDebugEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugModuleEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorDebugModuleEnum * This, ULONG celt, ICorDebugModule * modules[], ULONG * pceltFetched);
	END_INTERFACE
}  ICorDebugModuleEnumVtbl;
interface ICorDebugModuleEnum
{
	CONST_VTBL struct ICorDebugModuleEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugModuleEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugModuleEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugModuleEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugModuleEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorDebugModuleEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorDebugModuleEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorDebugModuleEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorDebugModuleEnum_Next(This,celt,modules,pceltFetched)( (This)->lpVtbl -> Next(This,celt,modules,pceltFetched) )
#endif
#endif
#ifndef __ICorDebugValueEnum_INTERFACE_DEFINED__
#define __ICorDebugValueEnum_INTERFACE_DEFINED__
extern const IID IID_ICorDebugValueEnum;
typedef struct ICorDebugValueEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugValueEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugValueEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugValueEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorDebugValueEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorDebugValueEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorDebugValueEnum * This, ICorDebugEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugValueEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorDebugValueEnum * This, ULONG celt, ICorDebugValue * values[], ULONG * pceltFetched);
	END_INTERFACE
}  ICorDebugValueEnumVtbl;
interface ICorDebugValueEnum
{
	CONST_VTBL struct ICorDebugValueEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugValueEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugValueEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugValueEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugValueEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorDebugValueEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorDebugValueEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorDebugValueEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorDebugValueEnum_Next(This,celt,values,pceltFetched)( (This)->lpVtbl -> Next(This,celt,values,pceltFetched) )
#endif
#endif
#ifndef __ICorDebugCodeEnum_INTERFACE_DEFINED__
#define __ICorDebugCodeEnum_INTERFACE_DEFINED__
extern const IID IID_ICorDebugCodeEnum;
typedef struct ICorDebugCodeEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugCodeEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugCodeEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugCodeEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorDebugCodeEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorDebugCodeEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorDebugCodeEnum * This, ICorDebugEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugCodeEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorDebugCodeEnum * This, ULONG celt, ICorDebugCode * values[], ULONG * pceltFetched);
	END_INTERFACE
}  ICorDebugCodeEnumVtbl;
interface ICorDebugCodeEnum
{
	CONST_VTBL struct ICorDebugCodeEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugCodeEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugCodeEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugCodeEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugCodeEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorDebugCodeEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorDebugCodeEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorDebugCodeEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorDebugCodeEnum_Next(This,celt,values,pceltFetched)( (This)->lpVtbl -> Next(This,celt,values,pceltFetched) )
#endif
#endif
#ifndef __ICorDebugTypeEnum_INTERFACE_DEFINED__
#define __ICorDebugTypeEnum_INTERFACE_DEFINED__
extern const IID IID_ICorDebugTypeEnum;
typedef struct ICorDebugTypeEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugTypeEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugTypeEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugTypeEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorDebugTypeEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorDebugTypeEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorDebugTypeEnum * This, ICorDebugEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugTypeEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorDebugTypeEnum * This, ULONG celt, ICorDebugType * values[], ULONG * pceltFetched);
	END_INTERFACE
}  ICorDebugTypeEnumVtbl;
interface ICorDebugTypeEnum
{
	CONST_VTBL struct ICorDebugTypeEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugTypeEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugTypeEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugTypeEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugTypeEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorDebugTypeEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorDebugTypeEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorDebugTypeEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorDebugTypeEnum_Next(This,celt,values,pceltFetched)( (This)->lpVtbl -> Next(This,celt,values,pceltFetched) )
#endif
#endif
#ifndef __ICorDebugType_INTERFACE_DEFINED__
#define __ICorDebugType_INTERFACE_DEFINED__
extern const IID IID_ICorDebugType;
typedef struct ICorDebugTypeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugType * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugType * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugType * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (ICorDebugType * This, CorElementType * ty);
	HRESULT(STDMETHODCALLTYPE * GetClass) (ICorDebugType * This, ICorDebugClass ** ppClass);
	HRESULT(STDMETHODCALLTYPE * EnumerateTypeParameters) (ICorDebugType * This, ICorDebugTypeEnum ** ppTyParEnum);
	HRESULT(STDMETHODCALLTYPE * GetFirstTypeParameter) (ICorDebugType * This, ICorDebugType ** value);
	HRESULT(STDMETHODCALLTYPE * GetBase) (ICorDebugType * This, ICorDebugType ** pBase);
	HRESULT(STDMETHODCALLTYPE * GetStaticFieldValue) (ICorDebugType * This, mdFieldDef fieldDef, ICorDebugFrame * pFrame, ICorDebugValue ** ppValue);
	HRESULT(STDMETHODCALLTYPE * GetRank) (ICorDebugType * This, ULONG32 * pnRank);
	END_INTERFACE
}  ICorDebugTypeVtbl;
interface ICorDebugType
{
	CONST_VTBL struct ICorDebugTypeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugType_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugType_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugType_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugType_GetType(This,ty)( (This)->lpVtbl -> GetType(This,ty) )
#define ICorDebugType_GetClass(This,ppClass)( (This)->lpVtbl -> GetClass(This,ppClass) )
#define ICorDebugType_EnumerateTypeParameters(This,ppTyParEnum)( (This)->lpVtbl -> EnumerateTypeParameters(This,ppTyParEnum) )
#define ICorDebugType_GetFirstTypeParameter(This,value)( (This)->lpVtbl -> GetFirstTypeParameter(This,value) )
#define ICorDebugType_GetBase(This,pBase)( (This)->lpVtbl -> GetBase(This,pBase) )
#define ICorDebugType_GetStaticFieldValue(This,fieldDef,pFrame,ppValue)( (This)->lpVtbl -> GetStaticFieldValue(This,fieldDef,pFrame,ppValue) )
#define ICorDebugType_GetRank(This,pnRank)( (This)->lpVtbl -> GetRank(This,pnRank) )
#endif
#endif
#ifndef __ICorDebugErrorInfoEnum_INTERFACE_DEFINED__
#define __ICorDebugErrorInfoEnum_INTERFACE_DEFINED__
extern const IID IID_ICorDebugErrorInfoEnum;
typedef struct ICorDebugErrorInfoEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugErrorInfoEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugErrorInfoEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugErrorInfoEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorDebugErrorInfoEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorDebugErrorInfoEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorDebugErrorInfoEnum * This, ICorDebugEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugErrorInfoEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorDebugErrorInfoEnum * This, ULONG celt, ICorDebugEditAndContinueErrorInfo * errors[], ULONG * pceltFetched);
	END_INTERFACE
}  ICorDebugErrorInfoEnumVtbl;
interface ICorDebugErrorInfoEnum
{
	CONST_VTBL struct ICorDebugErrorInfoEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugErrorInfoEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugErrorInfoEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugErrorInfoEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugErrorInfoEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorDebugErrorInfoEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorDebugErrorInfoEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorDebugErrorInfoEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorDebugErrorInfoEnum_Next(This,celt,errors,pceltFetched)( (This)->lpVtbl -> Next(This,celt,errors,pceltFetched) )
#endif
#endif
#ifndef __ICorDebugAppDomainEnum_INTERFACE_DEFINED__
#define __ICorDebugAppDomainEnum_INTERFACE_DEFINED__
extern const IID IID_ICorDebugAppDomainEnum;
typedef struct ICorDebugAppDomainEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugAppDomainEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugAppDomainEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugAppDomainEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorDebugAppDomainEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorDebugAppDomainEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorDebugAppDomainEnum * This, ICorDebugEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugAppDomainEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorDebugAppDomainEnum * This, ULONG celt, ICorDebugAppDomain * values[], ULONG * pceltFetched);
	END_INTERFACE
}  ICorDebugAppDomainEnumVtbl;
interface ICorDebugAppDomainEnum
{
	CONST_VTBL struct ICorDebugAppDomainEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugAppDomainEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugAppDomainEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugAppDomainEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugAppDomainEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorDebugAppDomainEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorDebugAppDomainEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorDebugAppDomainEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorDebugAppDomainEnum_Next(This,celt,values,pceltFetched)( (This)->lpVtbl -> Next(This,celt,values,pceltFetched) )
#endif
#endif
#ifndef __ICorDebugAssemblyEnum_INTERFACE_DEFINED__
#define __ICorDebugAssemblyEnum_INTERFACE_DEFINED__
extern const IID IID_ICorDebugAssemblyEnum;
typedef struct ICorDebugAssemblyEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugAssemblyEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugAssemblyEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugAssemblyEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorDebugAssemblyEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorDebugAssemblyEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorDebugAssemblyEnum * This, ICorDebugEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugAssemblyEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorDebugAssemblyEnum * This, ULONG celt, ICorDebugAssembly * values[], ULONG * pceltFetched);
	END_INTERFACE
}  ICorDebugAssemblyEnumVtbl;
interface ICorDebugAssemblyEnum
{
	CONST_VTBL struct ICorDebugAssemblyEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugAssemblyEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugAssemblyEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugAssemblyEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugAssemblyEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorDebugAssemblyEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorDebugAssemblyEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorDebugAssemblyEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorDebugAssemblyEnum_Next(This,celt,values,pceltFetched)( (This)->lpVtbl -> Next(This,celt,values,pceltFetched) )
#endif
#endif
#ifndef __ICorDebugBlockingObjectEnum_INTERFACE_DEFINED__
#define __ICorDebugBlockingObjectEnum_INTERFACE_DEFINED__
extern const IID IID_ICorDebugBlockingObjectEnum;
typedef struct ICorDebugBlockingObjectEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugBlockingObjectEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugBlockingObjectEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugBlockingObjectEnum * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (ICorDebugBlockingObjectEnum * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICorDebugBlockingObjectEnum * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ICorDebugBlockingObjectEnum * This, ICorDebugEnum ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ICorDebugBlockingObjectEnum * This, ULONG * pcelt);
	HRESULT(STDMETHODCALLTYPE * Next) (ICorDebugBlockingObjectEnum * This, ULONG celt, CorDebugBlockingObject values[], ULONG * pceltFetched);
	END_INTERFACE
}  ICorDebugBlockingObjectEnumVtbl;
interface ICorDebugBlockingObjectEnum
{
	CONST_VTBL struct ICorDebugBlockingObjectEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugBlockingObjectEnum_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugBlockingObjectEnum_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugBlockingObjectEnum_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugBlockingObjectEnum_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define ICorDebugBlockingObjectEnum_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define ICorDebugBlockingObjectEnum_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ICorDebugBlockingObjectEnum_GetCount(This,pcelt)( (This)->lpVtbl -> GetCount(This,pcelt) )
#define ICorDebugBlockingObjectEnum_Next(This,celt,values,pceltFetched)( (This)->lpVtbl -> Next(This,celt,values,pceltFetched) )
#endif
#endif
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0082_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0082_v0_0_s_ifspec;
#ifndef __ICorDebugMDA_INTERFACE_DEFINED__
#define __ICorDebugMDA_INTERFACE_DEFINED__
typedef enum CorDebugMDAFlags
{
	MDA_FLAG_SLIP = 0x2
} CorDebugMDAFlags;
extern const IID IID_ICorDebugMDA;
typedef struct ICorDebugMDAVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugMDA * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugMDA * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugMDA * This);
	HRESULT(STDMETHODCALLTYPE * GetName) (ICorDebugMDA * This, ULONG32 cchName, ULONG32 * pcchName, WCHAR szName[]);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (ICorDebugMDA * This, ULONG32 cchName, ULONG32 * pcchName, WCHAR szName[]);
	HRESULT(STDMETHODCALLTYPE * GetXML) (ICorDebugMDA * This, ULONG32 cchName, ULONG32 * pcchName, WCHAR szName[]);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (ICorDebugMDA * This, CorDebugMDAFlags * pFlags);
	HRESULT(STDMETHODCALLTYPE * GetOSThreadId) (ICorDebugMDA * This, DWORD * pOsTid);
	END_INTERFACE
}  ICorDebugMDAVtbl;
interface ICorDebugMDA
{
	CONST_VTBL struct ICorDebugMDAVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugMDA_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugMDA_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugMDA_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugMDA_GetName(This,cchName,pcchName,szName)( (This)->lpVtbl -> GetName(This,cchName,pcchName,szName) )
#define ICorDebugMDA_GetDescription(This,cchName,pcchName,szName)( (This)->lpVtbl -> GetDescription(This,cchName,pcchName,szName) )
#define ICorDebugMDA_GetXML(This,cchName,pcchName,szName)( (This)->lpVtbl -> GetXML(This,cchName,pcchName,szName) )
#define ICorDebugMDA_GetFlags(This,pFlags)( (This)->lpVtbl -> GetFlags(This,pFlags) )
#define ICorDebugMDA_GetOSThreadId(This,pOsTid)( (This)->lpVtbl -> GetOSThreadId(This,pOsTid) )
#endif
#endif
#pragma warning(pop)
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0083_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0083_v0_0_s_ifspec;
#ifndef __ICorDebugEditAndContinueErrorInfo_INTERFACE_DEFINED__
#define __ICorDebugEditAndContinueErrorInfo_INTERFACE_DEFINED__
extern const IID IID_ICorDebugEditAndContinueErrorInfo;
typedef struct ICorDebugEditAndContinueErrorInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugEditAndContinueErrorInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugEditAndContinueErrorInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugEditAndContinueErrorInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetModule) (ICorDebugEditAndContinueErrorInfo * This, ICorDebugModule ** ppModule);
	HRESULT(STDMETHODCALLTYPE * GetToken) (ICorDebugEditAndContinueErrorInfo * This, mdToken * pToken);
	HRESULT(STDMETHODCALLTYPE * GetErrorCode) (ICorDebugEditAndContinueErrorInfo * This, HRESULT * pHr);
	HRESULT(STDMETHODCALLTYPE * GetString) (ICorDebugEditAndContinueErrorInfo * This, ULONG32 cchString, ULONG32 * pcchString, WCHAR szString[]);
	END_INTERFACE
}  ICorDebugEditAndContinueErrorInfoVtbl;
interface ICorDebugEditAndContinueErrorInfo
{
	CONST_VTBL struct ICorDebugEditAndContinueErrorInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugEditAndContinueErrorInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugEditAndContinueErrorInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugEditAndContinueErrorInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugEditAndContinueErrorInfo_GetModule(This,ppModule)( (This)->lpVtbl -> GetModule(This,ppModule) )
#define ICorDebugEditAndContinueErrorInfo_GetToken(This,pToken)( (This)->lpVtbl -> GetToken(This,pToken) )
#define ICorDebugEditAndContinueErrorInfo_GetErrorCode(This,pHr)( (This)->lpVtbl -> GetErrorCode(This,pHr) )
#define ICorDebugEditAndContinueErrorInfo_GetString(This,cchString,pcchString,szString)( (This)->lpVtbl -> GetString(This,cchString,pcchString,szString) )
#endif
#endif
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0084_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cordebug_0000_0084_v0_0_s_ifspec;
#ifndef __ICorDebugEditAndContinueSnapshot_INTERFACE_DEFINED__
#define __ICorDebugEditAndContinueSnapshot_INTERFACE_DEFINED__
extern const IID IID_ICorDebugEditAndContinueSnapshot;
typedef struct ICorDebugEditAndContinueSnapshotVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICorDebugEditAndContinueSnapshot * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICorDebugEditAndContinueSnapshot * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICorDebugEditAndContinueSnapshot * This);
	HRESULT(STDMETHODCALLTYPE * CopyMetaData) (ICorDebugEditAndContinueSnapshot * This, IStream * pIStream, GUID * pMvid);
	HRESULT(STDMETHODCALLTYPE * GetMvid) (ICorDebugEditAndContinueSnapshot * This, GUID * pMvid);
	HRESULT(STDMETHODCALLTYPE * GetRoDataRVA) (ICorDebugEditAndContinueSnapshot * This, ULONG32 * pRoDataRVA);
	HRESULT(STDMETHODCALLTYPE * GetRwDataRVA) (ICorDebugEditAndContinueSnapshot * This, ULONG32 * pRwDataRVA);
	HRESULT(STDMETHODCALLTYPE * SetPEBytes) (ICorDebugEditAndContinueSnapshot * This, IStream * pIStream);
	HRESULT(STDMETHODCALLTYPE * SetILMap) (ICorDebugEditAndContinueSnapshot * This, mdToken mdFunction, ULONG cMapSize, COR_IL_MAP map[]);
	HRESULT(STDMETHODCALLTYPE * SetPESymbolBytes) (ICorDebugEditAndContinueSnapshot * This, IStream * pIStream);
	END_INTERFACE
}  ICorDebugEditAndContinueSnapshotVtbl;
interface ICorDebugEditAndContinueSnapshot
{
	CONST_VTBL struct ICorDebugEditAndContinueSnapshotVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICorDebugEditAndContinueSnapshot_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICorDebugEditAndContinueSnapshot_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICorDebugEditAndContinueSnapshot_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICorDebugEditAndContinueSnapshot_CopyMetaData(This,pIStream,pMvid)( (This)->lpVtbl -> CopyMetaData(This,pIStream,pMvid) )
#define ICorDebugEditAndContinueSnapshot_GetMvid(This,pMvid)( (This)->lpVtbl -> GetMvid(This,pMvid) )
#define ICorDebugEditAndContinueSnapshot_GetRoDataRVA(This,pRoDataRVA)( (This)->lpVtbl -> GetRoDataRVA(This,pRoDataRVA) )
#define ICorDebugEditAndContinueSnapshot_GetRwDataRVA(This,pRwDataRVA)( (This)->lpVtbl -> GetRwDataRVA(This,pRwDataRVA) )
#define ICorDebugEditAndContinueSnapshot_SetPEBytes(This,pIStream)( (This)->lpVtbl -> SetPEBytes(This,pIStream) )
#define ICorDebugEditAndContinueSnapshot_SetILMap(This,mdFunction,cMapSize,map)( (This)->lpVtbl -> SetILMap(This,mdFunction,cMapSize,map) )
#define ICorDebugEditAndContinueSnapshot_SetPESymbolBytes(This,pIStream)( (This)->lpVtbl -> SetPESymbolBytes(This,pIStream) )
#endif
#endif
#ifndef __CORDBLib_LIBRARY_DEFINED__
#define __CORDBLib_LIBRARY_DEFINED__
extern const IID LIBID_CORDBLib;
extern const CLSID CLSID_CorDebug;
extern const CLSID CLSID_EmbeddedCLRCorDebug;
#endif
#endif
