/*+@@file@@----------------------------------------------------------------*//*!
 \file		activprof.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  1 16:19:35 2016
 \date		Modified on Fri Jul  1 16:19:35 2016
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
#ifndef __activprof_h__
#define __activprof_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IActiveScriptProfilerControl_FWD_DEFINED__
#define __IActiveScriptProfilerControl_FWD_DEFINED__
typedef interface IActiveScriptProfilerControl IActiveScriptProfilerControl;
#endif
#ifndef __IActiveScriptProfilerCallback_FWD_DEFINED__
#define __IActiveScriptProfilerCallback_FWD_DEFINED__
typedef interface IActiveScriptProfilerCallback IActiveScriptProfilerCallback;
#endif
#include "unknwn.h"
#pragma comment(lib,"uuid.lib")
const HRESULT ACTIVPROF_E_PROFILER_PRESENT = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0200);
const HRESULT ACTIVPROF_E_PROFILER_ABSENT = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0201);
const HRESULT ACTIVPROF_E_UNABLE_TO_APPLY_ACTION = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0202);
#ifndef __ActivProf_h
#define __ActivProf_h
typedef enum __MIDL___MIDL_itf_activprof_0000_0000_0001
{
	PROFILER_SCRIPT_TYPE_USER = 0,
	PROFILER_SCRIPT_TYPE_DYNAMIC = (PROFILER_SCRIPT_TYPE_USER + 1),
	PROFILER_SCRIPT_TYPE_NATIVE = (PROFILER_SCRIPT_TYPE_DYNAMIC + 1)
} PROFILER_SCRIPT_TYPE;
typedef enum __MIDL___MIDL_itf_activprof_0000_0000_0002
{
	PROFILER_EVENT_MASK_TRACE_SCRIPT_FUNCTION_CALL = 0x1,
	PROFILER_EVENT_MASK_TRACE_NATIVE_FUNCTION_CALL = 0x2,
	PROFILER_EVENT_MASK_TRACE_ALL = (PROFILER_EVENT_MASK_TRACE_SCRIPT_FUNCTION_CALL | PROFILER_EVENT_MASK_TRACE_NATIVE_FUNCTION_CALL)
} PROFILER_EVENT_MASK;
typedef LONG PROFILER_TOKEN;
extern RPC_IF_HANDLE __MIDL_itf_activprof_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activprof_0000_0000_v0_0_s_ifspec;
#ifndef __IActiveScriptProfilerControl_INTERFACE_DEFINED__
#define __IActiveScriptProfilerControl_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptProfilerControl;
typedef struct IActiveScriptProfilerControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptProfilerControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptProfilerControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptProfilerControl *This);
	HRESULT(STDMETHODCALLTYPE *StartProfiling) (IActiveScriptProfilerControl *This, REFCLSID clsidProfilerObject, DWORD dwEventMask, DWORD dwContext);
	HRESULT(STDMETHODCALLTYPE *SetProfilerEventMask) (IActiveScriptProfilerControl *This, DWORD dwEventMask);
	HRESULT(STDMETHODCALLTYPE *StopProfiling) (IActiveScriptProfilerControl *This, HRESULT hrShutdownReason);
	END_INTERFACE
}  IActiveScriptProfilerControlVtbl;
interface IActiveScriptProfilerControl
{
	CONST_VTBL struct IActiveScriptProfilerControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptProfilerControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptProfilerControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptProfilerControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptProfilerControl_StartProfiling(This,clsidProfilerObject,dwEventMask,dwContext)    ( (This)->lpVtbl -> StartProfiling(This,clsidProfilerObject,dwEventMask,dwContext) )
#define IActiveScriptProfilerControl_SetProfilerEventMask(This,dwEventMask)    ( (This)->lpVtbl -> SetProfilerEventMask(This,dwEventMask) )
#define IActiveScriptProfilerControl_StopProfiling(This,hrShutdownReason)    ( (This)->lpVtbl -> StopProfiling(This,hrShutdownReason) )
#endif
#endif
#ifndef __IActiveScriptProfilerCallback_INTERFACE_DEFINED__
#define __IActiveScriptProfilerCallback_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptProfilerCallback;
typedef struct IActiveScriptProfilerCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptProfilerCallback *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptProfilerCallback *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptProfilerCallback *This);
	HRESULT(STDMETHODCALLTYPE *Initialize) (IActiveScriptProfilerCallback *This, DWORD dwContext);
	HRESULT(STDMETHODCALLTYPE *Shutdown) (IActiveScriptProfilerCallback *This, HRESULT hrReason);
	HRESULT(STDMETHODCALLTYPE *ScriptCompiled) (IActiveScriptProfilerCallback *This, PROFILER_TOKEN scriptId, PROFILER_SCRIPT_TYPE type, IUnknown *pIDebugDocumentContext);
	HRESULT(STDMETHODCALLTYPE *FunctionCompiled) (IActiveScriptProfilerCallback *This, PROFILER_TOKEN functionId, PROFILER_TOKEN scriptId, const WCHAR *pwszFunctionName, const WCHAR *pwszFunctionNameHint, IUnknown *pIDebugDocumentContext);
	HRESULT(STDMETHODCALLTYPE *OnFunctionEnter) (IActiveScriptProfilerCallback *This, PROFILER_TOKEN scriptId, PROFILER_TOKEN functionId);
	HRESULT(STDMETHODCALLTYPE *OnFunctionExit) (IActiveScriptProfilerCallback *This, PROFILER_TOKEN scriptId, PROFILER_TOKEN functionId);
	END_INTERFACE
}  IActiveScriptProfilerCallbackVtbl;
interface IActiveScriptProfilerCallback
{
	CONST_VTBL struct IActiveScriptProfilerCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptProfilerCallback_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptProfilerCallback_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptProfilerCallback_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptProfilerCallback_Initialize(This,dwContext)    ( (This)->lpVtbl -> Initialize(This,dwContext) )
#define IActiveScriptProfilerCallback_Shutdown(This,hrReason)    ( (This)->lpVtbl -> Shutdown(This,hrReason) )
#define IActiveScriptProfilerCallback_ScriptCompiled(This,scriptId,type,pIDebugDocumentContext)    ( (This)->lpVtbl -> ScriptCompiled(This,scriptId,type,pIDebugDocumentContext) )
#define IActiveScriptProfilerCallback_FunctionCompiled(This,functionId,scriptId,pwszFunctionName,pwszFunctionNameHint,pIDebugDocumentContext)    ( (This)->lpVtbl -> FunctionCompiled(This,functionId,scriptId,pwszFunctionName,pwszFunctionNameHint,pIDebugDocumentContext) )
#define IActiveScriptProfilerCallback_OnFunctionEnter(This,scriptId,functionId)    ( (This)->lpVtbl -> OnFunctionEnter(This,scriptId,functionId) )
#define IActiveScriptProfilerCallback_OnFunctionExit(This,scriptId,functionId)    ( (This)->lpVtbl -> OnFunctionExit(This,scriptId,functionId) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_activprof_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activprof_0000_0002_v0_0_s_ifspec;
#endif
