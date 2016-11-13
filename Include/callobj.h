/*+@@file@@----------------------------------------------------------------*//*!
 \file		callobj.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 22:08:02 2016
 \date		Modified on Sat Jul  2 22:08:02 2016
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
#ifndef __callobj_h__
#define __callobj_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICallFrame_FWD_DEFINED__
#define __ICallFrame_FWD_DEFINED__
typedef interface ICallFrame ICallFrame;
#endif
#ifndef __ICallIndirect_FWD_DEFINED__
#define __ICallIndirect_FWD_DEFINED__
typedef interface ICallIndirect ICallIndirect;
#endif
#ifndef __ICallInterceptor_FWD_DEFINED__
#define __ICallInterceptor_FWD_DEFINED__
typedef interface ICallInterceptor ICallInterceptor;
#endif
#ifndef __ICallFrameEvents_FWD_DEFINED__
#define __ICallFrameEvents_FWD_DEFINED__
typedef interface ICallFrameEvents ICallFrameEvents;
#endif
#ifndef __ICallUnmarshal_FWD_DEFINED__
#define __ICallUnmarshal_FWD_DEFINED__
typedef interface ICallUnmarshal ICallUnmarshal;
#endif
#ifndef __ICallFrameWalker_FWD_DEFINED__
#define __ICallFrameWalker_FWD_DEFINED__
typedef interface ICallFrameWalker ICallFrameWalker;
#endif
#ifndef __IInterfaceRelated_FWD_DEFINED__
#define __IInterfaceRelated_FWD_DEFINED__
typedef interface IInterfaceRelated IInterfaceRelated;
#endif
#include <oaidl.h>
extern RPC_IF_HANDLE __MIDL_itf_callobj_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_callobj_0000_0000_v0_0_s_ifspec;
#ifndef __ICallFrame_INTERFACE_DEFINED__
#define __ICallFrame_INTERFACE_DEFINED__
typedef struct __MIDL_ICallFrame_0001
{
	ULONG iMethod;
	BOOL fHasInValues;
	BOOL fHasInOutValues;
	BOOL fHasOutValues;
	BOOL fDerivesFromIDispatch;
	LONG cInInterfacesMax;
	LONG cInOutInterfacesMax;
	LONG cOutInterfacesMax;
	LONG cTopLevelInInterfaces;
	IID iid;
	ULONG cMethod;
	ULONG cParams;
} CALLFRAMEINFO;
typedef struct __MIDL_ICallFrame_0002
{
	BOOLEAN fIn;
	BOOLEAN fOut;
	ULONG stackOffset;
	ULONG cbParam;
} CALLFRAMEPARAMINFO;
typedef
	enum __MIDL_ICallFrame_0003 { CALLFRAME_COPY_NESTED = 1,
	CALLFRAME_COPY_INDEPENDENT = 2
} CALLFRAME_COPY;
enum CALLFRAME_FREE { CALLFRAME_FREE_NONE = 0,
	CALLFRAME_FREE_IN = 1,
	CALLFRAME_FREE_INOUT = 2,
	CALLFRAME_FREE_OUT = 4,
	CALLFRAME_FREE_TOP_INOUT = 8,
	CALLFRAME_FREE_TOP_OUT = 16,
	CALLFRAME_FREE_ALL = 31
};
enum CALLFRAME_NULL { CALLFRAME_NULL_NONE = 0,
	CALLFRAME_NULL_INOUT = 2,
	CALLFRAME_NULL_OUT = 4,
	CALLFRAME_NULL_ALL = 6
};
enum CALLFRAME_WALK { CALLFRAME_WALK_IN = 1,
	CALLFRAME_WALK_INOUT = 2,
	CALLFRAME_WALK_OUT = 4
};
typedef struct __MIDL_ICallFrame_0004
{
	BOOLEAN fIn;
	DWORD dwDestContext;
	LPVOID pvDestContext;
	IUnknown *punkReserved;
	GUID guidTransferSyntax;
} CALLFRAME_MARSHALCONTEXT;
extern const IID IID_ICallFrame;
typedef struct ICallFrameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICallFrame * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICallFrame * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICallFrame * This);
	HRESULT(STDMETHODCALLTYPE * GetInfo) (ICallFrame * This, CALLFRAMEINFO * pInfo);
	HRESULT(STDMETHODCALLTYPE * GetIIDAndMethod) (ICallFrame * This, IID * pIID, ULONG * piMethod);
	HRESULT(STDMETHODCALLTYPE * GetNames) (ICallFrame * This, LPWSTR * pwszInterface, LPWSTR * pwszMethod);
	PVOID(STDMETHODCALLTYPE * GetStackLocation) (ICallFrame * This);
	void (STDMETHODCALLTYPE * SetStackLocation) (ICallFrame * This, PVOID pvStack);
	void (STDMETHODCALLTYPE * SetReturnValue) (ICallFrame * This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * GetReturnValue) (ICallFrame * This);
	HRESULT(STDMETHODCALLTYPE * GetParamInfo) (ICallFrame * This, ULONG iparam, CALLFRAMEPARAMINFO * pInfo);
	HRESULT(STDMETHODCALLTYPE * SetParam) (ICallFrame * This, ULONG iparam, VARIANT * pvar);
	HRESULT(STDMETHODCALLTYPE * GetParam) (ICallFrame * This, ULONG iparam, VARIANT * pvar);
	HRESULT(STDMETHODCALLTYPE * Copy) (ICallFrame * This, CALLFRAME_COPY copyControl, ICallFrameWalker * pWalker, ICallFrame ** ppFrame);
	HRESULT(STDMETHODCALLTYPE * Free) (ICallFrame * This, ICallFrame * pframeArgsDest, ICallFrameWalker * pWalkerDestFree, ICallFrameWalker * pWalkerCopy, DWORD freeFlags, ICallFrameWalker * pWalkerFree, DWORD nullFlags);
	HRESULT(STDMETHODCALLTYPE * FreeParam) (ICallFrame * This, ULONG iparam, DWORD freeFlags, ICallFrameWalker * pWalkerFree, DWORD nullFlags);
	HRESULT(STDMETHODCALLTYPE * WalkFrame) (ICallFrame * This, DWORD walkWhat, ICallFrameWalker * pWalker);
	HRESULT(STDMETHODCALLTYPE * GetMarshalSizeMax) (ICallFrame * This, CALLFRAME_MARSHALCONTEXT * pmshlContext, MSHLFLAGS mshlflags, ULONG * pcbBufferNeeded);
	HRESULT(STDMETHODCALLTYPE * Marshal) (ICallFrame * This, CALLFRAME_MARSHALCONTEXT * pmshlContext, MSHLFLAGS mshlflags, PVOID pBuffer, ULONG cbBuffer, ULONG * pcbBufferUsed, RPCOLEDATAREP * pdataRep, ULONG * prpcFlags);
	HRESULT(STDMETHODCALLTYPE * Unmarshal) (ICallFrame * This, PVOID pBuffer, ULONG cbBuffer, RPCOLEDATAREP dataRep, CALLFRAME_MARSHALCONTEXT * pcontext, ULONG * pcbUnmarshalled);
	HRESULT(STDMETHODCALLTYPE * ReleaseMarshalData) (ICallFrame * This, PVOID pBuffer, ULONG cbBuffer, ULONG ibFirstRelease, RPCOLEDATAREP dataRep, CALLFRAME_MARSHALCONTEXT * pcontext);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICallFrame * This, void *pvReceiver /*, ... */);
	END_INTERFACE
}  ICallFrameVtbl;
interface ICallFrame
{
	CONST_VTBL struct ICallFrameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICallFrame_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICallFrame_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICallFrame_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICallFrame_GetInfo(This,pInfo)( (This)->lpVtbl -> GetInfo(This,pInfo) )
#define ICallFrame_GetIIDAndMethod(This,pIID,piMethod)( (This)->lpVtbl -> GetIIDAndMethod(This,pIID,piMethod) )
#define ICallFrame_GetNames(This,pwszInterface,pwszMethod)( (This)->lpVtbl -> GetNames(This,pwszInterface,pwszMethod) )
#define ICallFrame_GetStackLocation(This)( (This)->lpVtbl -> GetStackLocation(This) )
#define ICallFrame_SetStackLocation(This,pvStack)( (This)->lpVtbl -> SetStackLocation(This,pvStack) )
#define ICallFrame_SetReturnValue(This,hr)( (This)->lpVtbl -> SetReturnValue(This,hr) )
#define ICallFrame_GetReturnValue(This)( (This)->lpVtbl -> GetReturnValue(This) )
#define ICallFrame_GetParamInfo(This,iparam,pInfo)( (This)->lpVtbl -> GetParamInfo(This,iparam,pInfo) )
#define ICallFrame_SetParam(This,iparam,pvar)( (This)->lpVtbl -> SetParam(This,iparam,pvar) )
#define ICallFrame_GetParam(This,iparam,pvar)( (This)->lpVtbl -> GetParam(This,iparam,pvar) )
#define ICallFrame_Copy(This,copyControl,pWalker,ppFrame)( (This)->lpVtbl -> Copy(This,copyControl,pWalker,ppFrame) )
#define ICallFrame_Free(This,pframeArgsDest,pWalkerDestFree,pWalkerCopy,freeFlags,pWalkerFree,nullFlags)( (This)->lpVtbl -> Free(This,pframeArgsDest,pWalkerDestFree,pWalkerCopy,freeFlags,pWalkerFree,nullFlags) )
#define ICallFrame_FreeParam(This,iparam,freeFlags,pWalkerFree,nullFlags)( (This)->lpVtbl -> FreeParam(This,iparam,freeFlags,pWalkerFree,nullFlags) )
#define ICallFrame_WalkFrame(This,walkWhat,pWalker)( (This)->lpVtbl -> WalkFrame(This,walkWhat,pWalker) )
#define ICallFrame_GetMarshalSizeMax(This,pmshlContext,mshlflags,pcbBufferNeeded)( (This)->lpVtbl -> GetMarshalSizeMax(This,pmshlContext,mshlflags,pcbBufferNeeded) )
#define ICallFrame_Marshal(This,pmshlContext,mshlflags,pBuffer,cbBuffer,pcbBufferUsed,pdataRep,prpcFlags)( (This)->lpVtbl -> Marshal(This,pmshlContext,mshlflags,pBuffer,cbBuffer,pcbBufferUsed,pdataRep,prpcFlags) )
#define ICallFrame_Unmarshal(This,pBuffer,cbBuffer,dataRep,pcontext,pcbUnmarshalled)( (This)->lpVtbl -> Unmarshal(This,pBuffer,cbBuffer,dataRep,pcontext,pcbUnmarshalled) )
#define ICallFrame_ReleaseMarshalData(This,pBuffer,cbBuffer,ibFirstRelease,dataRep,pcontext)( (This)->lpVtbl -> ReleaseMarshalData(This,pBuffer,cbBuffer,ibFirstRelease,dataRep,pcontext) )
#define ICallFrame_Invoke(This,pvReceiver,...)( (This)->lpVtbl -> Invoke(This,pvReceiver,...) )
#endif
#endif
#ifndef __ICallIndirect_INTERFACE_DEFINED__
#define __ICallIndirect_INTERFACE_DEFINED__
extern const IID IID_ICallIndirect;
typedef struct ICallIndirectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICallIndirect * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICallIndirect * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICallIndirect * This);
	HRESULT(STDMETHODCALLTYPE * CallIndirect) (ICallIndirect * This, HRESULT * phrReturn, ULONG iMethod, void *pvArgs, ULONG * cbArgs);
	HRESULT(STDMETHODCALLTYPE * GetMethodInfo) (ICallIndirect * This, ULONG iMethod, CALLFRAMEINFO * pInfo, LPWSTR * pwszMethod);
	HRESULT(STDMETHODCALLTYPE * GetStackSize) (ICallIndirect * This, ULONG iMethod, ULONG * cbArgs);
	HRESULT(STDMETHODCALLTYPE * GetIID) (ICallIndirect * This, IID * piid, BOOL * pfDerivesFromIDispatch, ULONG * pcMethod, LPWSTR * pwszInterface);
	END_INTERFACE
}  ICallIndirectVtbl;
interface ICallIndirect
{
	CONST_VTBL struct ICallIndirectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICallIndirect_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICallIndirect_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICallIndirect_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICallIndirect_CallIndirect(This,phrReturn,iMethod,pvArgs,cbArgs)( (This)->lpVtbl -> CallIndirect(This,phrReturn,iMethod,pvArgs,cbArgs) )
#define ICallIndirect_GetMethodInfo(This,iMethod,pInfo,pwszMethod)( (This)->lpVtbl -> GetMethodInfo(This,iMethod,pInfo,pwszMethod) )
#define ICallIndirect_GetStackSize(This,iMethod,cbArgs)( (This)->lpVtbl -> GetStackSize(This,iMethod,cbArgs) )
#define ICallIndirect_GetIID(This,piid,pfDerivesFromIDispatch,pcMethod,pwszInterface)( (This)->lpVtbl -> GetIID(This,piid,pfDerivesFromIDispatch,pcMethod,pwszInterface) )
#endif
#endif
#ifndef __ICallInterceptor_INTERFACE_DEFINED__
#define __ICallInterceptor_INTERFACE_DEFINED__
extern const IID IID_ICallInterceptor;
typedef struct ICallInterceptorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICallInterceptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICallInterceptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICallInterceptor * This);
	HRESULT(STDMETHODCALLTYPE * CallIndirect) (ICallInterceptor * This, HRESULT * phrReturn, ULONG iMethod, void *pvArgs, ULONG * cbArgs);
	HRESULT(STDMETHODCALLTYPE * GetMethodInfo) (ICallInterceptor * This, ULONG iMethod, CALLFRAMEINFO * pInfo, LPWSTR * pwszMethod);
	HRESULT(STDMETHODCALLTYPE * GetStackSize) (ICallInterceptor * This, ULONG iMethod, ULONG * cbArgs);
	HRESULT(STDMETHODCALLTYPE * GetIID) (ICallInterceptor * This, IID * piid, BOOL * pfDerivesFromIDispatch, ULONG * pcMethod, LPWSTR * pwszInterface);
	HRESULT(STDMETHODCALLTYPE * RegisterSink) (ICallInterceptor * This, ICallFrameEvents * psink);
	HRESULT(STDMETHODCALLTYPE * GetRegisteredSink) (ICallInterceptor * This, ICallFrameEvents ** ppsink);
	END_INTERFACE
}  ICallInterceptorVtbl;
interface ICallInterceptor
{
	CONST_VTBL struct ICallInterceptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICallInterceptor_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICallInterceptor_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICallInterceptor_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICallInterceptor_CallIndirect(This,phrReturn,iMethod,pvArgs,cbArgs)( (This)->lpVtbl -> CallIndirect(This,phrReturn,iMethod,pvArgs,cbArgs) )
#define ICallInterceptor_GetMethodInfo(This,iMethod,pInfo,pwszMethod)( (This)->lpVtbl -> GetMethodInfo(This,iMethod,pInfo,pwszMethod) )
#define ICallInterceptor_GetStackSize(This,iMethod,cbArgs)( (This)->lpVtbl -> GetStackSize(This,iMethod,cbArgs) )
#define ICallInterceptor_GetIID(This,piid,pfDerivesFromIDispatch,pcMethod,pwszInterface)( (This)->lpVtbl -> GetIID(This,piid,pfDerivesFromIDispatch,pcMethod,pwszInterface) )
#define ICallInterceptor_RegisterSink(This,psink)( (This)->lpVtbl -> RegisterSink(This,psink) )
#define ICallInterceptor_GetRegisteredSink(This,ppsink)( (This)->lpVtbl -> GetRegisteredSink(This,ppsink) )
#endif
#endif
#ifndef __ICallFrameEvents_INTERFACE_DEFINED__
#define __ICallFrameEvents_INTERFACE_DEFINED__
extern const IID IID_ICallFrameEvents;
typedef struct ICallFrameEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICallFrameEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICallFrameEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICallFrameEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnCall) (ICallFrameEvents * This, ICallFrame * pFrame);
	END_INTERFACE
}  ICallFrameEventsVtbl;
interface ICallFrameEvents
{
	CONST_VTBL struct ICallFrameEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICallFrameEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICallFrameEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICallFrameEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICallFrameEvents_OnCall(This,pFrame)( (This)->lpVtbl -> OnCall(This,pFrame) )
#endif
#endif
#ifndef __ICallUnmarshal_INTERFACE_DEFINED__
#define __ICallUnmarshal_INTERFACE_DEFINED__
extern const IID IID_ICallUnmarshal;
typedef struct ICallUnmarshalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICallUnmarshal * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICallUnmarshal * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICallUnmarshal * This);
	HRESULT(STDMETHODCALLTYPE * Unmarshal) (ICallUnmarshal * This, ULONG iMethod, PVOID pBuffer, ULONG cbBuffer, BOOL fForceBufferCopy, RPCOLEDATAREP dataRep, CALLFRAME_MARSHALCONTEXT * pcontext, ULONG * pcbUnmarshalled, ICallFrame ** ppFrame);
	HRESULT(STDMETHODCALLTYPE * ReleaseMarshalData) (ICallUnmarshal * This, ULONG iMethod, PVOID pBuffer, ULONG cbBuffer, ULONG ibFirstRelease, RPCOLEDATAREP dataRep, CALLFRAME_MARSHALCONTEXT * pcontext);
	END_INTERFACE
}  ICallUnmarshalVtbl;
interface ICallUnmarshal
{
	CONST_VTBL struct ICallUnmarshalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICallUnmarshal_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICallUnmarshal_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICallUnmarshal_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICallUnmarshal_Unmarshal(This,iMethod,pBuffer,cbBuffer,fForceBufferCopy,dataRep,pcontext,pcbUnmarshalled,ppFrame)( (This)->lpVtbl -> Unmarshal(This,iMethod,pBuffer,cbBuffer,fForceBufferCopy,dataRep,pcontext,pcbUnmarshalled,ppFrame) )
#define ICallUnmarshal_ReleaseMarshalData(This,iMethod,pBuffer,cbBuffer,ibFirstRelease,dataRep,pcontext)( (This)->lpVtbl -> ReleaseMarshalData(This,iMethod,pBuffer,cbBuffer,ibFirstRelease,dataRep,pcontext) )
#endif
#endif
#ifndef __ICallFrameWalker_INTERFACE_DEFINED__
#define __ICallFrameWalker_INTERFACE_DEFINED__
extern const IID IID_ICallFrameWalker;
typedef struct ICallFrameWalkerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICallFrameWalker * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICallFrameWalker * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICallFrameWalker * This);
	HRESULT(STDMETHODCALLTYPE * OnWalkInterface) (ICallFrameWalker * This, REFIID iid, PVOID * ppvInterface, BOOL fIn, BOOL fOut);
	END_INTERFACE
}  ICallFrameWalkerVtbl;
interface ICallFrameWalker
{
	CONST_VTBL struct ICallFrameWalkerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICallFrameWalker_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICallFrameWalker_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICallFrameWalker_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICallFrameWalker_OnWalkInterface(This,iid,ppvInterface,fIn,fOut)( (This)->lpVtbl -> OnWalkInterface(This,iid,ppvInterface,fIn,fOut) )
#endif
#endif
#ifndef __IInterfaceRelated_INTERFACE_DEFINED__
#define __IInterfaceRelated_INTERFACE_DEFINED__
extern const IID IID_IInterfaceRelated;
typedef struct IInterfaceRelatedVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInterfaceRelated * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInterfaceRelated * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInterfaceRelated * This);
	HRESULT(STDMETHODCALLTYPE * SetIID) (IInterfaceRelated * This, REFIID iid);
	HRESULT(STDMETHODCALLTYPE * GetIID) (IInterfaceRelated * This, IID * piid);
	END_INTERFACE
}  IInterfaceRelatedVtbl;
interface IInterfaceRelated
{
	CONST_VTBL struct IInterfaceRelatedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInterfaceRelated_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInterfaceRelated_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInterfaceRelated_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInterfaceRelated_SetIID(This,iid)( (This)->lpVtbl -> SetIID(This,iid) )
#define IInterfaceRelated_GetIID(This,piid)( (This)->lpVtbl -> GetIID(This,piid) )
#endif
#endif
#define CALLFRAME_E_ALREADYINVOKED  _HRESULT_TYPEDEF_(  0x8004d090 )
#define CALLFRAME_E_COULDNTMAKECALL _HRESULT_TYPEDEF_(  0x8004d091 )
extern RPC_IF_HANDLE __MIDL_itf_callobj_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_callobj_0000_0007_v0_0_s_ifspec;
#ifndef __ICallFrameAPIs_INTERFACE_DEFINED__
#define __ICallFrameAPIs_INTERFACE_DEFINED__
HRESULT __stdcall CoGetInterceptor(REFIID iidIntercepted, IUnknown *punkOuter, REFIID iid, void **ppv);
HRESULT __stdcall CoGetInterceptorFromTypeInfo(REFIID iidIntercepted, IUnknown *punkOuter, ITypeInfo *typeInfo, REFIID iid, void **ppv);
extern RPC_IF_HANDLE ICallFrameAPIs_v0_0_c_ifspec;
extern RPC_IF_HANDLE ICallFrameAPIs_v0_0_s_ifspec;
#endif
#endif
