/*+@@file@@----------------------------------------------------------------*//*!
 \file		control.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jun 25 19:59:05 2016
 \date		Modified on Sat Jun 25 19:59:05 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#pragma warning( disable: 4049 )
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
#ifndef __control_h__
#define __control_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IAMCollection_FWD_DEFINED__
#define __IAMCollection_FWD_DEFINED__
typedef interface IAMCollection IAMCollection;
#endif
#ifndef __IMediaControl_FWD_DEFINED__
#define __IMediaControl_FWD_DEFINED__
typedef interface IMediaControl IMediaControl;
#endif
#ifndef __IMediaEvent_FWD_DEFINED__
#define __IMediaEvent_FWD_DEFINED__
typedef interface IMediaEvent IMediaEvent;
#endif
#ifndef __IMediaEventEx_FWD_DEFINED__
#define __IMediaEventEx_FWD_DEFINED__
typedef interface IMediaEventEx IMediaEventEx;
#endif
#ifndef __IMediaPosition_FWD_DEFINED__
#define __IMediaPosition_FWD_DEFINED__
typedef interface IMediaPosition IMediaPosition;
#endif
#ifndef __IBasicAudio_FWD_DEFINED__
#define __IBasicAudio_FWD_DEFINED__
typedef interface IBasicAudio IBasicAudio;
#endif
#ifndef __IVideoWindow_FWD_DEFINED__
#define __IVideoWindow_FWD_DEFINED__
typedef interface IVideoWindow IVideoWindow;
#endif
#ifndef __IBasicVideo_FWD_DEFINED__
#define __IBasicVideo_FWD_DEFINED__
typedef interface IBasicVideo IBasicVideo;
#endif
#ifndef __IBasicVideo2_FWD_DEFINED__
#define __IBasicVideo2_FWD_DEFINED__
typedef interface IBasicVideo2 IBasicVideo2;
#endif
#ifndef __IDeferredCommand_FWD_DEFINED__
#define __IDeferredCommand_FWD_DEFINED__
typedef interface IDeferredCommand IDeferredCommand;
#endif
#ifndef __IQueueCommand_FWD_DEFINED__
#define __IQueueCommand_FWD_DEFINED__
typedef interface IQueueCommand IQueueCommand;
#endif
#ifndef __FilgraphManager_FWD_DEFINED__
#define __FilgraphManager_FWD_DEFINED__
typedef struct FilgraphManager FilgraphManager;
#endif
#ifndef __IFilterInfo_FWD_DEFINED__
#define __IFilterInfo_FWD_DEFINED__
typedef interface IFilterInfo IFilterInfo;
#endif
#ifndef __IRegFilterInfo_FWD_DEFINED__
#define __IRegFilterInfo_FWD_DEFINED__
typedef interface IRegFilterInfo IRegFilterInfo;
#endif
#ifndef __IMediaTypeInfo_FWD_DEFINED__
#define __IMediaTypeInfo_FWD_DEFINED__
typedef interface IMediaTypeInfo IMediaTypeInfo;
#endif
#ifndef __IPinInfo_FWD_DEFINED__
#define __IPinInfo_FWD_DEFINED__
typedef interface IPinInfo IPinInfo;
#endif
#ifndef __IAMStats_FWD_DEFINED__
#define __IAMStats_FWD_DEFINED__
typedef interface IAMStats IAMStats;
#endif
#ifndef __QuartzTypeLib_LIBRARY_DEFINED__
#define __QuartzTypeLib_LIBRARY_DEFINED__ 
typedef double REFTIME;
typedef LONG_PTR OAEVENT;
typedef LONG_PTR OAHWND;
typedef long OAFilterState;
DEFINE_GUID(LIBID_QuartzTypeLib,0x56a868b0,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
#ifndef __IAMCollection_INTERFACE_DEFINED__
#define __IAMCollection_INTERFACE_DEFINED__ 
DEFINE_GUID(IID_IAMCollection,0x56a868b9,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
typedef struct IAMCollectionVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAMCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAMCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAMCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAMCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAMCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAMCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAMCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAMCollection * This, LONG * plCount);
	HRESULT(STDMETHODCALLTYPE * Item) (IAMCollection * This, long lItem, IUnknown ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IAMCollection * This, IUnknown ** ppUnk);
	END_INTERFACE
} IAMCollectionVtbl;
interface IAMCollection
{
    CONST_VTBL struct IAMCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMCollection_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IAMCollection_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IAMCollection_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IAMCollection_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IAMCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IAMCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IAMCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IAMCollection_get_Count(This,plCount)    ( (This)->lpVtbl -> get_Count(This,plCount) ) 
#define IAMCollection_Item(This,lItem,ppUnk)    ( (This)->lpVtbl -> Item(This,lItem,ppUnk) ) 
#define IAMCollection_get__NewEnum(This,ppUnk)    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) ) 
#endif
#endif
#ifndef __IMediaControl_INTERFACE_DEFINED__
#define __IMediaControl_INTERFACE_DEFINED__ 
DEFINE_GUID(IID_IMediaControl,0x56a868b1,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
typedef struct IMediaControlVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMediaControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMediaControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMediaControl * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMediaControl * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMediaControl * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMediaControl * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMediaControl * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Run) (IMediaControl * This);
	HRESULT(STDMETHODCALLTYPE * Pause) (IMediaControl * This);
	HRESULT(STDMETHODCALLTYPE * Stop) (IMediaControl * This);
	HRESULT(STDMETHODCALLTYPE * GetState) (IMediaControl * This, LONG msTimeout, OAFilterState * pfs);
	HRESULT(STDMETHODCALLTYPE * RenderFile) (IMediaControl * This, BSTR strFilename);
	HRESULT(STDMETHODCALLTYPE * AddSourceFilter) (IMediaControl * This, BSTR strFilename, IDispatch ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_FilterCollection) (IMediaControl * This, IDispatch ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_RegFilterCollection) (IMediaControl * This, IDispatch ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * StopWhenReady) (IMediaControl * This);
	END_INTERFACE
} IMediaControlVtbl;
interface IMediaControl
{
    CONST_VTBL struct IMediaControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMediaControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IMediaControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IMediaControl_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IMediaControl_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IMediaControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IMediaControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IMediaControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IMediaControl_Run(This)    ( (This)->lpVtbl -> Run(This) ) 
#define IMediaControl_Pause(This)    ( (This)->lpVtbl -> Pause(This) ) 
#define IMediaControl_Stop(This)    ( (This)->lpVtbl -> Stop(This) ) 
#define IMediaControl_GetState(This,msTimeout,pfs)    ( (This)->lpVtbl -> GetState(This,msTimeout,pfs) ) 
#define IMediaControl_RenderFile(This,strFilename)    ( (This)->lpVtbl -> RenderFile(This,strFilename) ) 
#define IMediaControl_AddSourceFilter(This,strFilename,ppUnk)    ( (This)->lpVtbl -> AddSourceFilter(This,strFilename,ppUnk) ) 
#define IMediaControl_get_FilterCollection(This,ppUnk)    ( (This)->lpVtbl -> get_FilterCollection(This,ppUnk) ) 
#define IMediaControl_get_RegFilterCollection(This,ppUnk)    ( (This)->lpVtbl -> get_RegFilterCollection(This,ppUnk) ) 
#define IMediaControl_StopWhenReady(This)    ( (This)->lpVtbl -> StopWhenReady(This) ) 
#endif
#endif
#ifndef __IMediaEvent_INTERFACE_DEFINED__
#define __IMediaEvent_INTERFACE_DEFINED__ 
DEFINE_GUID(IID_IMediaEvent,0x56a868b6,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
typedef struct IMediaEventVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMediaEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMediaEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMediaEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMediaEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMediaEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMediaEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMediaEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetEventHandle) (IMediaEvent * This, OAEVENT * hEvent);
	HRESULT(STDMETHODCALLTYPE * GetEvent) (IMediaEvent * This, long *lEventCode, LONG_PTR * lParam1, LONG_PTR * lParam2, long msTimeout);
	HRESULT(STDMETHODCALLTYPE * WaitForCompletion) (IMediaEvent * This, long msTimeout, long *pEvCode);
	HRESULT(STDMETHODCALLTYPE * CancelDefaultHandling) (IMediaEvent * This, long lEvCode);
	HRESULT(STDMETHODCALLTYPE * RestoreDefaultHandling) (IMediaEvent * This, long lEvCode);
	HRESULT(STDMETHODCALLTYPE * FreeEventParams) (IMediaEvent * This, long lEvCode, LONG_PTR lParam1, LONG_PTR lParam2);
	END_INTERFACE
} IMediaEventVtbl;
interface IMediaEvent
{
    CONST_VTBL struct IMediaEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMediaEvent_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IMediaEvent_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IMediaEvent_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IMediaEvent_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IMediaEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IMediaEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IMediaEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IMediaEvent_GetEventHandle(This,hEvent)    ( (This)->lpVtbl -> GetEventHandle(This,hEvent) ) 
#define IMediaEvent_GetEvent(This,lEventCode,lParam1,lParam2,msTimeout)    ( (This)->lpVtbl -> GetEvent(This,lEventCode,lParam1,lParam2,msTimeout) ) 
#define IMediaEvent_WaitForCompletion(This,msTimeout,pEvCode)    ( (This)->lpVtbl -> WaitForCompletion(This,msTimeout,pEvCode) ) 
#define IMediaEvent_CancelDefaultHandling(This,lEvCode)    ( (This)->lpVtbl -> CancelDefaultHandling(This,lEvCode) ) 
#define IMediaEvent_RestoreDefaultHandling(This,lEvCode)    ( (This)->lpVtbl -> RestoreDefaultHandling(This,lEvCode) ) 
#define IMediaEvent_FreeEventParams(This,lEvCode,lParam1,lParam2)    ( (This)->lpVtbl -> FreeEventParams(This,lEvCode,lParam1,lParam2) ) 
#endif
#endif
#ifndef __IMediaEventEx_INTERFACE_DEFINED__
#define __IMediaEventEx_INTERFACE_DEFINED__ 
DEFINE_GUID(IID_IMediaEventEx,0x56a868c0,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
typedef struct IMediaEventExVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMediaEventEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMediaEventEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMediaEventEx * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMediaEventEx * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMediaEventEx * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMediaEventEx * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMediaEventEx * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetEventHandle) (IMediaEventEx * This, OAEVENT * hEvent);
	HRESULT(STDMETHODCALLTYPE * GetEvent) (IMediaEventEx * This, long *lEventCode, LONG_PTR * lParam1, LONG_PTR * lParam2, long msTimeout);
	HRESULT(STDMETHODCALLTYPE * WaitForCompletion) (IMediaEventEx * This, long msTimeout, long *pEvCode);
	HRESULT(STDMETHODCALLTYPE * CancelDefaultHandling) (IMediaEventEx * This, long lEvCode);
	HRESULT(STDMETHODCALLTYPE * RestoreDefaultHandling) (IMediaEventEx * This, long lEvCode);
	HRESULT(STDMETHODCALLTYPE * FreeEventParams) (IMediaEventEx * This, long lEvCode, LONG_PTR lParam1, LONG_PTR lParam2);
	HRESULT(STDMETHODCALLTYPE * SetNotifyWindow) (IMediaEventEx * This, OAHWND hwnd, long lMsg, LONG_PTR lInstanceData);
	HRESULT(STDMETHODCALLTYPE * SetNotifyFlags) (IMediaEventEx * This, long lNoNotifyFlags);
	HRESULT(STDMETHODCALLTYPE * GetNotifyFlags) (IMediaEventEx * This, long *lplNoNotifyFlags);
	END_INTERFACE
} IMediaEventExVtbl;
interface IMediaEventEx
{
    CONST_VTBL struct IMediaEventExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMediaEventEx_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IMediaEventEx_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IMediaEventEx_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IMediaEventEx_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IMediaEventEx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IMediaEventEx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IMediaEventEx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IMediaEventEx_GetEventHandle(This,hEvent)    ( (This)->lpVtbl -> GetEventHandle(This,hEvent) ) 
#define IMediaEventEx_GetEvent(This,lEventCode,lParam1,lParam2,msTimeout)    ( (This)->lpVtbl -> GetEvent(This,lEventCode,lParam1,lParam2,msTimeout) ) 
#define IMediaEventEx_WaitForCompletion(This,msTimeout,pEvCode)    ( (This)->lpVtbl -> WaitForCompletion(This,msTimeout,pEvCode) ) 
#define IMediaEventEx_CancelDefaultHandling(This,lEvCode)    ( (This)->lpVtbl -> CancelDefaultHandling(This,lEvCode) ) 
#define IMediaEventEx_RestoreDefaultHandling(This,lEvCode)    ( (This)->lpVtbl -> RestoreDefaultHandling(This,lEvCode) ) 
#define IMediaEventEx_FreeEventParams(This,lEvCode,lParam1,lParam2)    ( (This)->lpVtbl -> FreeEventParams(This,lEvCode,lParam1,lParam2) ) 
#define IMediaEventEx_SetNotifyWindow(This,hwnd,lMsg,lInstanceData)    ( (This)->lpVtbl -> SetNotifyWindow(This,hwnd,lMsg,lInstanceData) ) 
#define IMediaEventEx_SetNotifyFlags(This,lNoNotifyFlags)    ( (This)->lpVtbl -> SetNotifyFlags(This,lNoNotifyFlags) ) 
#define IMediaEventEx_GetNotifyFlags(This,lplNoNotifyFlags)    ( (This)->lpVtbl -> GetNotifyFlags(This,lplNoNotifyFlags) ) 
#endif
#endif
#ifndef __IMediaPosition_INTERFACE_DEFINED__
#define __IMediaPosition_INTERFACE_DEFINED__ 
DEFINE_GUID(IID_IMediaPosition,0x56a868b2,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
typedef struct IMediaPositionVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMediaPosition * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMediaPosition * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMediaPosition * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMediaPosition * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMediaPosition * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMediaPosition * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMediaPosition * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Duration) (IMediaPosition * This, REFTIME * plength);
	HRESULT(STDMETHODCALLTYPE * put_CurrentPosition) (IMediaPosition * This, REFTIME llTime);
	HRESULT(STDMETHODCALLTYPE * get_CurrentPosition) (IMediaPosition * This, REFTIME * pllTime);
	HRESULT(STDMETHODCALLTYPE * get_StopTime) (IMediaPosition * This, REFTIME * pllTime);
	HRESULT(STDMETHODCALLTYPE * put_StopTime) (IMediaPosition * This, REFTIME llTime);
	HRESULT(STDMETHODCALLTYPE * get_PrerollTime) (IMediaPosition * This, REFTIME * pllTime);
	HRESULT(STDMETHODCALLTYPE * put_PrerollTime) (IMediaPosition * This, REFTIME llTime);
	HRESULT(STDMETHODCALLTYPE * put_Rate) (IMediaPosition * This, double dRate);
	HRESULT(STDMETHODCALLTYPE * get_Rate) (IMediaPosition * This, double *pdRate);
	HRESULT(STDMETHODCALLTYPE * CanSeekForward) (IMediaPosition * This, LONG * pCanSeekForward);
	HRESULT(STDMETHODCALLTYPE * CanSeekBackward) (IMediaPosition * This, LONG * pCanSeekBackward);
	END_INTERFACE
} IMediaPositionVtbl;
interface IMediaPosition
{
    CONST_VTBL struct IMediaPositionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMediaPosition_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IMediaPosition_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IMediaPosition_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IMediaPosition_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IMediaPosition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IMediaPosition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IMediaPosition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IMediaPosition_get_Duration(This,plength)    ( (This)->lpVtbl -> get_Duration(This,plength) ) 
#define IMediaPosition_put_CurrentPosition(This,llTime)    ( (This)->lpVtbl -> put_CurrentPosition(This,llTime) ) 
#define IMediaPosition_get_CurrentPosition(This,pllTime)    ( (This)->lpVtbl -> get_CurrentPosition(This,pllTime) ) 
#define IMediaPosition_get_StopTime(This,pllTime)    ( (This)->lpVtbl -> get_StopTime(This,pllTime) ) 
#define IMediaPosition_put_StopTime(This,llTime)    ( (This)->lpVtbl -> put_StopTime(This,llTime) ) 
#define IMediaPosition_get_PrerollTime(This,pllTime)    ( (This)->lpVtbl -> get_PrerollTime(This,pllTime) ) 
#define IMediaPosition_put_PrerollTime(This,llTime)    ( (This)->lpVtbl -> put_PrerollTime(This,llTime) ) 
#define IMediaPosition_put_Rate(This,dRate)    ( (This)->lpVtbl -> put_Rate(This,dRate) ) 
#define IMediaPosition_get_Rate(This,pdRate)    ( (This)->lpVtbl -> get_Rate(This,pdRate) ) 
#define IMediaPosition_CanSeekForward(This,pCanSeekForward)    ( (This)->lpVtbl -> CanSeekForward(This,pCanSeekForward) ) 
#define IMediaPosition_CanSeekBackward(This,pCanSeekBackward)    ( (This)->lpVtbl -> CanSeekBackward(This,pCanSeekBackward) ) 
#endif
#endif
#ifndef __IBasicAudio_INTERFACE_DEFINED__
#define __IBasicAudio_INTERFACE_DEFINED__ 
DEFINE_GUID(IID_IBasicAudio,0x56a868b3,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
typedef struct IBasicAudioVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBasicAudio * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBasicAudio * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBasicAudio * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IBasicAudio * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IBasicAudio * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IBasicAudio * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IBasicAudio * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * put_Volume) (IBasicAudio * This, long lVolume);
	HRESULT(STDMETHODCALLTYPE * get_Volume) (IBasicAudio * This, long *plVolume);
	HRESULT(STDMETHODCALLTYPE * put_Balance) (IBasicAudio * This, long lBalance);
	HRESULT(STDMETHODCALLTYPE * get_Balance) (IBasicAudio * This, long *plBalance);
	END_INTERFACE
} IBasicAudioVtbl;
interface IBasicAudio
{
    CONST_VTBL struct IBasicAudioVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBasicAudio_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IBasicAudio_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IBasicAudio_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IBasicAudio_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IBasicAudio_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IBasicAudio_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IBasicAudio_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IBasicAudio_put_Volume(This,lVolume)    ( (This)->lpVtbl -> put_Volume(This,lVolume) ) 
#define IBasicAudio_get_Volume(This,plVolume)    ( (This)->lpVtbl -> get_Volume(This,plVolume) ) 
#define IBasicAudio_put_Balance(This,lBalance)    ( (This)->lpVtbl -> put_Balance(This,lBalance) ) 
#define IBasicAudio_get_Balance(This,plBalance)    ( (This)->lpVtbl -> get_Balance(This,plBalance) ) 
#endif
#endif
#ifndef __IVideoWindow_INTERFACE_DEFINED__
#define __IVideoWindow_INTERFACE_DEFINED__ 
DEFINE_GUID(IID_IVideoWindow,0x56a868b4,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
typedef struct IVideoWindowVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVideoWindow * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVideoWindow * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVideoWindow * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IVideoWindow * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IVideoWindow * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IVideoWindow * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IVideoWindow * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * put_Caption) (IVideoWindow * This, BSTR strCaption);
	HRESULT(STDMETHODCALLTYPE * get_Caption) (IVideoWindow * This, BSTR * strCaption);
	HRESULT(STDMETHODCALLTYPE * put_WindowStyle) (IVideoWindow * This, long WindowStyle);
	HRESULT(STDMETHODCALLTYPE * get_WindowStyle) (IVideoWindow * This, long *WindowStyle);
	HRESULT(STDMETHODCALLTYPE * put_WindowStyleEx) (IVideoWindow * This, long WindowStyleEx);
	HRESULT(STDMETHODCALLTYPE * get_WindowStyleEx) (IVideoWindow * This, long *WindowStyleEx);
	HRESULT(STDMETHODCALLTYPE * put_AutoShow) (IVideoWindow * This, long AutoShow);
	HRESULT(STDMETHODCALLTYPE * get_AutoShow) (IVideoWindow * This, long *AutoShow);
	HRESULT(STDMETHODCALLTYPE * put_WindowState) (IVideoWindow * This, long WindowState);
	HRESULT(STDMETHODCALLTYPE * get_WindowState) (IVideoWindow * This, long *WindowState);
	HRESULT(STDMETHODCALLTYPE * put_BackgroundPalette) (IVideoWindow * This, long BackgroundPalette);
	HRESULT(STDMETHODCALLTYPE * get_BackgroundPalette) (IVideoWindow * This, long *pBackgroundPalette);
	HRESULT(STDMETHODCALLTYPE * put_Visible) (IVideoWindow * This, long Visible);
	HRESULT(STDMETHODCALLTYPE * get_Visible) (IVideoWindow * This, long *pVisible);
	HRESULT(STDMETHODCALLTYPE * put_Left) (IVideoWindow * This, long Left);
	HRESULT(STDMETHODCALLTYPE * get_Left) (IVideoWindow * This, long *pLeft);
	HRESULT(STDMETHODCALLTYPE * put_Width) (IVideoWindow * This, long Width);
	HRESULT(STDMETHODCALLTYPE * get_Width) (IVideoWindow * This, long *pWidth);
	HRESULT(STDMETHODCALLTYPE * put_Top) (IVideoWindow * This, long Top);
	HRESULT(STDMETHODCALLTYPE * get_Top) (IVideoWindow * This, long *pTop);
	HRESULT(STDMETHODCALLTYPE * put_Height) (IVideoWindow * This, long Height);
	HRESULT(STDMETHODCALLTYPE * get_Height) (IVideoWindow * This, long *pHeight);
	HRESULT(STDMETHODCALLTYPE * put_Owner) (IVideoWindow * This, OAHWND Owner);
	HRESULT(STDMETHODCALLTYPE * get_Owner) (IVideoWindow * This, OAHWND * Owner);
	HRESULT(STDMETHODCALLTYPE * put_MessageDrain) (IVideoWindow * This, OAHWND Drain);
	HRESULT(STDMETHODCALLTYPE * get_MessageDrain) (IVideoWindow * This, OAHWND * Drain);
	HRESULT(STDMETHODCALLTYPE * get_BorderColor) (IVideoWindow * This, long *Color);
	HRESULT(STDMETHODCALLTYPE * put_BorderColor) (IVideoWindow * This, long Color);
	HRESULT(STDMETHODCALLTYPE * get_FullScreenMode) (IVideoWindow * This, long *FullScreenMode);
	HRESULT(STDMETHODCALLTYPE * put_FullScreenMode) (IVideoWindow * This, long FullScreenMode);
	HRESULT(STDMETHODCALLTYPE * SetWindowForeground) (IVideoWindow * This, long Focus);
	HRESULT(STDMETHODCALLTYPE * NotifyOwnerMessage) (IVideoWindow * This, OAHWND hwnd, long uMsg, LONG_PTR wParam, LONG_PTR lParam);
	HRESULT(STDMETHODCALLTYPE * SetWindowPosition) (IVideoWindow * This, long Left, long Top, long Width, long Height);
	HRESULT(STDMETHODCALLTYPE * GetWindowPosition) (IVideoWindow * This, long *pLeft, long *pTop, long *pWidth, long *pHeight);
	HRESULT(STDMETHODCALLTYPE * GetMinIdealImageSize) (IVideoWindow * This, long *pWidth, long *pHeight);
	HRESULT(STDMETHODCALLTYPE * GetMaxIdealImageSize) (IVideoWindow * This, long *pWidth, long *pHeight);
	HRESULT(STDMETHODCALLTYPE * GetRestorePosition) (IVideoWindow * This, long *pLeft, long *pTop, long *pWidth, long *pHeight);
	HRESULT(STDMETHODCALLTYPE * HideCursor) (IVideoWindow * This, long HideCursor);
	HRESULT(STDMETHODCALLTYPE * IsCursorHidden) (IVideoWindow * This, long *CursorHidden);
	END_INTERFACE
} IVideoWindowVtbl;
interface IVideoWindow
{
    CONST_VTBL struct IVideoWindowVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVideoWindow_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IVideoWindow_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IVideoWindow_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IVideoWindow_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IVideoWindow_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IVideoWindow_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IVideoWindow_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IVideoWindow_put_Caption(This,strCaption)    ( (This)->lpVtbl -> put_Caption(This,strCaption) ) 
#define IVideoWindow_get_Caption(This,strCaption)    ( (This)->lpVtbl -> get_Caption(This,strCaption) ) 
#define IVideoWindow_put_WindowStyle(This,WindowStyle)    ( (This)->lpVtbl -> put_WindowStyle(This,WindowStyle) ) 
#define IVideoWindow_get_WindowStyle(This,WindowStyle)    ( (This)->lpVtbl -> get_WindowStyle(This,WindowStyle) ) 
#define IVideoWindow_put_WindowStyleEx(This,WindowStyleEx)    ( (This)->lpVtbl -> put_WindowStyleEx(This,WindowStyleEx) ) 
#define IVideoWindow_get_WindowStyleEx(This,WindowStyleEx)    ( (This)->lpVtbl -> get_WindowStyleEx(This,WindowStyleEx) ) 
#define IVideoWindow_put_AutoShow(This,AutoShow)    ( (This)->lpVtbl -> put_AutoShow(This,AutoShow) ) 
#define IVideoWindow_get_AutoShow(This,AutoShow)    ( (This)->lpVtbl -> get_AutoShow(This,AutoShow) ) 
#define IVideoWindow_put_WindowState(This,WindowState)    ( (This)->lpVtbl -> put_WindowState(This,WindowState) ) 
#define IVideoWindow_get_WindowState(This,WindowState)    ( (This)->lpVtbl -> get_WindowState(This,WindowState) ) 
#define IVideoWindow_put_BackgroundPalette(This,BackgroundPalette)    ( (This)->lpVtbl -> put_BackgroundPalette(This,BackgroundPalette) ) 
#define IVideoWindow_get_BackgroundPalette(This,pBackgroundPalette)    ( (This)->lpVtbl -> get_BackgroundPalette(This,pBackgroundPalette) ) 
#define IVideoWindow_put_Visible(This,Visible)    ( (This)->lpVtbl -> put_Visible(This,Visible) ) 
#define IVideoWindow_get_Visible(This,pVisible)    ( (This)->lpVtbl -> get_Visible(This,pVisible) ) 
#define IVideoWindow_put_Left(This,Left)    ( (This)->lpVtbl -> put_Left(This,Left) ) 
#define IVideoWindow_get_Left(This,pLeft)    ( (This)->lpVtbl -> get_Left(This,pLeft) ) 
#define IVideoWindow_put_Width(This,Width)    ( (This)->lpVtbl -> put_Width(This,Width) ) 
#define IVideoWindow_get_Width(This,pWidth)    ( (This)->lpVtbl -> get_Width(This,pWidth) ) 
#define IVideoWindow_put_Top(This,Top)    ( (This)->lpVtbl -> put_Top(This,Top) ) 
#define IVideoWindow_get_Top(This,pTop)    ( (This)->lpVtbl -> get_Top(This,pTop) ) 
#define IVideoWindow_put_Height(This,Height)    ( (This)->lpVtbl -> put_Height(This,Height) ) 
#define IVideoWindow_get_Height(This,pHeight)    ( (This)->lpVtbl -> get_Height(This,pHeight) ) 
#define IVideoWindow_put_Owner(This,Owner)    ( (This)->lpVtbl -> put_Owner(This,Owner) ) 
#define IVideoWindow_get_Owner(This,Owner)    ( (This)->lpVtbl -> get_Owner(This,Owner) ) 
#define IVideoWindow_put_MessageDrain(This,Drain)    ( (This)->lpVtbl -> put_MessageDrain(This,Drain) ) 
#define IVideoWindow_get_MessageDrain(This,Drain)    ( (This)->lpVtbl -> get_MessageDrain(This,Drain) ) 
#define IVideoWindow_get_BorderColor(This,Color)    ( (This)->lpVtbl -> get_BorderColor(This,Color) ) 
#define IVideoWindow_put_BorderColor(This,Color)    ( (This)->lpVtbl -> put_BorderColor(This,Color) ) 
#define IVideoWindow_get_FullScreenMode(This,FullScreenMode)    ( (This)->lpVtbl -> get_FullScreenMode(This,FullScreenMode) ) 
#define IVideoWindow_put_FullScreenMode(This,FullScreenMode)    ( (This)->lpVtbl -> put_FullScreenMode(This,FullScreenMode) ) 
#define IVideoWindow_SetWindowForeground(This,Focus)    ( (This)->lpVtbl -> SetWindowForeground(This,Focus) ) 
#define IVideoWindow_NotifyOwnerMessage(This,hwnd,uMsg,wParam,lParam)    ( (This)->lpVtbl -> NotifyOwnerMessage(This,hwnd,uMsg,wParam,lParam) ) 
#define IVideoWindow_SetWindowPosition(This,Left,Top,Width,Height)    ( (This)->lpVtbl -> SetWindowPosition(This,Left,Top,Width,Height) ) 
#define IVideoWindow_GetWindowPosition(This,pLeft,pTop,pWidth,pHeight)    ( (This)->lpVtbl -> GetWindowPosition(This,pLeft,pTop,pWidth,pHeight) ) 
#define IVideoWindow_GetMinIdealImageSize(This,pWidth,pHeight)    ( (This)->lpVtbl -> GetMinIdealImageSize(This,pWidth,pHeight) ) 
#define IVideoWindow_GetMaxIdealImageSize(This,pWidth,pHeight)    ( (This)->lpVtbl -> GetMaxIdealImageSize(This,pWidth,pHeight) ) 
#define IVideoWindow_GetRestorePosition(This,pLeft,pTop,pWidth,pHeight)    ( (This)->lpVtbl -> GetRestorePosition(This,pLeft,pTop,pWidth,pHeight) ) 
#define IVideoWindow_HideCursor(This,HideCursor)    ( (This)->lpVtbl -> HideCursor(This,HideCursor) ) 
#define IVideoWindow_IsCursorHidden(This,CursorHidden)    ( (This)->lpVtbl -> IsCursorHidden(This,CursorHidden) ) 
#endif
#endif
#ifndef __IBasicVideo_INTERFACE_DEFINED__
#define __IBasicVideo_INTERFACE_DEFINED__ 
DEFINE_GUID(IID_IBasicVideo,0x56a868b5,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
typedef struct IBasicVideoVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBasicVideo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBasicVideo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBasicVideo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IBasicVideo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IBasicVideo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IBasicVideo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IBasicVideo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_AvgTimePerFrame) (IBasicVideo * This, REFTIME * pAvgTimePerFrame);
	HRESULT(STDMETHODCALLTYPE * get_BitRate) (IBasicVideo * This, long *pBitRate);
	HRESULT(STDMETHODCALLTYPE * get_BitErrorRate) (IBasicVideo * This, long *pBitErrorRate);
	HRESULT(STDMETHODCALLTYPE * get_VideoWidth) (IBasicVideo * This, long *pVideoWidth);
	HRESULT(STDMETHODCALLTYPE * get_VideoHeight) (IBasicVideo * This, long *pVideoHeight);
	HRESULT(STDMETHODCALLTYPE * put_SourceLeft) (IBasicVideo * This, long SourceLeft);
	HRESULT(STDMETHODCALLTYPE * get_SourceLeft) (IBasicVideo * This, long *pSourceLeft);
	HRESULT(STDMETHODCALLTYPE * put_SourceWidth) (IBasicVideo * This, long SourceWidth);
	HRESULT(STDMETHODCALLTYPE * get_SourceWidth) (IBasicVideo * This, long *pSourceWidth);
	HRESULT(STDMETHODCALLTYPE * put_SourceTop) (IBasicVideo * This, long SourceTop);
	HRESULT(STDMETHODCALLTYPE * get_SourceTop) (IBasicVideo * This, long *pSourceTop);
	HRESULT(STDMETHODCALLTYPE * put_SourceHeight) (IBasicVideo * This, long SourceHeight);
	HRESULT(STDMETHODCALLTYPE * get_SourceHeight) (IBasicVideo * This, long *pSourceHeight);
	HRESULT(STDMETHODCALLTYPE * put_DestinationLeft) (IBasicVideo * This, long DestinationLeft);
	HRESULT(STDMETHODCALLTYPE * get_DestinationLeft) (IBasicVideo * This, long *pDestinationLeft);
	HRESULT(STDMETHODCALLTYPE * put_DestinationWidth) (IBasicVideo * This, long DestinationWidth);
	HRESULT(STDMETHODCALLTYPE * get_DestinationWidth) (IBasicVideo * This, long *pDestinationWidth);
	HRESULT(STDMETHODCALLTYPE * put_DestinationTop) (IBasicVideo * This, long DestinationTop);
	HRESULT(STDMETHODCALLTYPE * get_DestinationTop) (IBasicVideo * This, long *pDestinationTop);
	HRESULT(STDMETHODCALLTYPE * put_DestinationHeight) (IBasicVideo * This, long DestinationHeight);
	HRESULT(STDMETHODCALLTYPE * get_DestinationHeight) (IBasicVideo * This, long *pDestinationHeight);
	HRESULT(STDMETHODCALLTYPE * SetSourcePosition) (IBasicVideo * This, long Left, long Top, long Width, long Height);
	HRESULT(STDMETHODCALLTYPE * GetSourcePosition) (IBasicVideo * This, long *pLeft, long *pTop, long *pWidth, long *pHeight);
	HRESULT(STDMETHODCALLTYPE * SetDefaultSourcePosition) (IBasicVideo * This);
	HRESULT(STDMETHODCALLTYPE * SetDestinationPosition) (IBasicVideo * This, long Left, long Top, long Width, long Height);
	HRESULT(STDMETHODCALLTYPE * GetDestinationPosition) (IBasicVideo * This, long *pLeft, long *pTop, long *pWidth, long *pHeight);
	HRESULT(STDMETHODCALLTYPE * SetDefaultDestinationPosition) (IBasicVideo * This);
	HRESULT(STDMETHODCALLTYPE * GetVideoSize) (IBasicVideo * This, long *pWidth, long *pHeight);
	HRESULT(STDMETHODCALLTYPE * GetVideoPaletteEntries) (IBasicVideo * This, long StartIndex, long Entries, long *pRetrieved, long *pPalette);
	HRESULT(STDMETHODCALLTYPE * GetCurrentImage) (IBasicVideo * This, long *pBufferSize, long *pDIBImage);
	HRESULT(STDMETHODCALLTYPE * IsUsingDefaultSource) (IBasicVideo * This);
	HRESULT(STDMETHODCALLTYPE * IsUsingDefaultDestination) (IBasicVideo * This);
	END_INTERFACE
} IBasicVideoVtbl;
interface IBasicVideo
{
    CONST_VTBL struct IBasicVideoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBasicVideo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IBasicVideo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IBasicVideo_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IBasicVideo_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IBasicVideo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IBasicVideo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IBasicVideo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IBasicVideo_get_AvgTimePerFrame(This,pAvgTimePerFrame)    ( (This)->lpVtbl -> get_AvgTimePerFrame(This,pAvgTimePerFrame) ) 
#define IBasicVideo_get_BitRate(This,pBitRate)    ( (This)->lpVtbl -> get_BitRate(This,pBitRate) ) 
#define IBasicVideo_get_BitErrorRate(This,pBitErrorRate)    ( (This)->lpVtbl -> get_BitErrorRate(This,pBitErrorRate) ) 
#define IBasicVideo_get_VideoWidth(This,pVideoWidth)    ( (This)->lpVtbl -> get_VideoWidth(This,pVideoWidth) ) 
#define IBasicVideo_get_VideoHeight(This,pVideoHeight)    ( (This)->lpVtbl -> get_VideoHeight(This,pVideoHeight) ) 
#define IBasicVideo_put_SourceLeft(This,SourceLeft)    ( (This)->lpVtbl -> put_SourceLeft(This,SourceLeft) ) 
#define IBasicVideo_get_SourceLeft(This,pSourceLeft)    ( (This)->lpVtbl -> get_SourceLeft(This,pSourceLeft) ) 
#define IBasicVideo_put_SourceWidth(This,SourceWidth)    ( (This)->lpVtbl -> put_SourceWidth(This,SourceWidth) ) 
#define IBasicVideo_get_SourceWidth(This,pSourceWidth)    ( (This)->lpVtbl -> get_SourceWidth(This,pSourceWidth) ) 
#define IBasicVideo_put_SourceTop(This,SourceTop)    ( (This)->lpVtbl -> put_SourceTop(This,SourceTop) ) 
#define IBasicVideo_get_SourceTop(This,pSourceTop)    ( (This)->lpVtbl -> get_SourceTop(This,pSourceTop) ) 
#define IBasicVideo_put_SourceHeight(This,SourceHeight)    ( (This)->lpVtbl -> put_SourceHeight(This,SourceHeight) ) 
#define IBasicVideo_get_SourceHeight(This,pSourceHeight)    ( (This)->lpVtbl -> get_SourceHeight(This,pSourceHeight) ) 
#define IBasicVideo_put_DestinationLeft(This,DestinationLeft)    ( (This)->lpVtbl -> put_DestinationLeft(This,DestinationLeft) ) 
#define IBasicVideo_get_DestinationLeft(This,pDestinationLeft)    ( (This)->lpVtbl -> get_DestinationLeft(This,pDestinationLeft) ) 
#define IBasicVideo_put_DestinationWidth(This,DestinationWidth)    ( (This)->lpVtbl -> put_DestinationWidth(This,DestinationWidth) ) 
#define IBasicVideo_get_DestinationWidth(This,pDestinationWidth)    ( (This)->lpVtbl -> get_DestinationWidth(This,pDestinationWidth) ) 
#define IBasicVideo_put_DestinationTop(This,DestinationTop)    ( (This)->lpVtbl -> put_DestinationTop(This,DestinationTop) ) 
#define IBasicVideo_get_DestinationTop(This,pDestinationTop)    ( (This)->lpVtbl -> get_DestinationTop(This,pDestinationTop) ) 
#define IBasicVideo_put_DestinationHeight(This,DestinationHeight)    ( (This)->lpVtbl -> put_DestinationHeight(This,DestinationHeight) ) 
#define IBasicVideo_get_DestinationHeight(This,pDestinationHeight)    ( (This)->lpVtbl -> get_DestinationHeight(This,pDestinationHeight) ) 
#define IBasicVideo_SetSourcePosition(This,Left,Top,Width,Height)    ( (This)->lpVtbl -> SetSourcePosition(This,Left,Top,Width,Height) ) 
#define IBasicVideo_GetSourcePosition(This,pLeft,pTop,pWidth,pHeight)    ( (This)->lpVtbl -> GetSourcePosition(This,pLeft,pTop,pWidth,pHeight) ) 
#define IBasicVideo_SetDefaultSourcePosition(This)    ( (This)->lpVtbl -> SetDefaultSourcePosition(This) ) 
#define IBasicVideo_SetDestinationPosition(This,Left,Top,Width,Height)    ( (This)->lpVtbl -> SetDestinationPosition(This,Left,Top,Width,Height) ) 
#define IBasicVideo_GetDestinationPosition(This,pLeft,pTop,pWidth,pHeight)    ( (This)->lpVtbl -> GetDestinationPosition(This,pLeft,pTop,pWidth,pHeight) ) 
#define IBasicVideo_SetDefaultDestinationPosition(This)    ( (This)->lpVtbl -> SetDefaultDestinationPosition(This) ) 
#define IBasicVideo_GetVideoSize(This,pWidth,pHeight)    ( (This)->lpVtbl -> GetVideoSize(This,pWidth,pHeight) ) 
#define IBasicVideo_GetVideoPaletteEntries(This,StartIndex,Entries,pRetrieved,pPalette)    ( (This)->lpVtbl -> GetVideoPaletteEntries(This,StartIndex,Entries,pRetrieved,pPalette) ) 
#define IBasicVideo_GetCurrentImage(This,pBufferSize,pDIBImage)    ( (This)->lpVtbl -> GetCurrentImage(This,pBufferSize,pDIBImage) ) 
#define IBasicVideo_IsUsingDefaultSource(This)    ( (This)->lpVtbl -> IsUsingDefaultSource(This) ) 
#define IBasicVideo_IsUsingDefaultDestination(This)    ( (This)->lpVtbl -> IsUsingDefaultDestination(This) ) 
#endif
#endif
#ifndef __IBasicVideo2_INTERFACE_DEFINED__
#define __IBasicVideo2_INTERFACE_DEFINED__ 
DEFINE_GUID(IID_IBasicVideo2,0x329bb360,0xf6ea,0x11d1,0x90,0x38,0x00,0xa0,0xc9,0x69,0x72,0x98);
typedef struct IBasicVideo2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBasicVideo2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBasicVideo2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBasicVideo2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IBasicVideo2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IBasicVideo2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IBasicVideo2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IBasicVideo2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_AvgTimePerFrame) (IBasicVideo2 * This, REFTIME * pAvgTimePerFrame);
	HRESULT(STDMETHODCALLTYPE * get_BitRate) (IBasicVideo2 * This, long *pBitRate);
	HRESULT(STDMETHODCALLTYPE * get_BitErrorRate) (IBasicVideo2 * This, long *pBitErrorRate);
	HRESULT(STDMETHODCALLTYPE * get_VideoWidth) (IBasicVideo2 * This, long *pVideoWidth);
	HRESULT(STDMETHODCALLTYPE * get_VideoHeight) (IBasicVideo2 * This, long *pVideoHeight);
	HRESULT(STDMETHODCALLTYPE * put_SourceLeft) (IBasicVideo2 * This, long SourceLeft);
	HRESULT(STDMETHODCALLTYPE * get_SourceLeft) (IBasicVideo2 * This, long *pSourceLeft);
	HRESULT(STDMETHODCALLTYPE * put_SourceWidth) (IBasicVideo2 * This, long SourceWidth);
	HRESULT(STDMETHODCALLTYPE * get_SourceWidth) (IBasicVideo2 * This, long *pSourceWidth);
	HRESULT(STDMETHODCALLTYPE * put_SourceTop) (IBasicVideo2 * This, long SourceTop);
	HRESULT(STDMETHODCALLTYPE * get_SourceTop) (IBasicVideo2 * This, long *pSourceTop);
	HRESULT(STDMETHODCALLTYPE * put_SourceHeight) (IBasicVideo2 * This, long SourceHeight);
	HRESULT(STDMETHODCALLTYPE * get_SourceHeight) (IBasicVideo2 * This, long *pSourceHeight);
	HRESULT(STDMETHODCALLTYPE * put_DestinationLeft) (IBasicVideo2 * This, long DestinationLeft);
	HRESULT(STDMETHODCALLTYPE * get_DestinationLeft) (IBasicVideo2 * This, long *pDestinationLeft);
	HRESULT(STDMETHODCALLTYPE * put_DestinationWidth) (IBasicVideo2 * This, long DestinationWidth);
	HRESULT(STDMETHODCALLTYPE * get_DestinationWidth) (IBasicVideo2 * This, long *pDestinationWidth);
	HRESULT(STDMETHODCALLTYPE * put_DestinationTop) (IBasicVideo2 * This, long DestinationTop);
	HRESULT(STDMETHODCALLTYPE * get_DestinationTop) (IBasicVideo2 * This, long *pDestinationTop);
	HRESULT(STDMETHODCALLTYPE * put_DestinationHeight) (IBasicVideo2 * This, long DestinationHeight);
	HRESULT(STDMETHODCALLTYPE * get_DestinationHeight) (IBasicVideo2 * This, long *pDestinationHeight);
	HRESULT(STDMETHODCALLTYPE * SetSourcePosition) (IBasicVideo2 * This, long Left, long Top, long Width, long Height);
	HRESULT(STDMETHODCALLTYPE * GetSourcePosition) (IBasicVideo2 * This, long *pLeft, long *pTop, long *pWidth, long *pHeight);
	HRESULT(STDMETHODCALLTYPE * SetDefaultSourcePosition) (IBasicVideo2 * This);
	HRESULT(STDMETHODCALLTYPE * SetDestinationPosition) (IBasicVideo2 * This, long Left, long Top, long Width, long Height);
	HRESULT(STDMETHODCALLTYPE * GetDestinationPosition) (IBasicVideo2 * This, long *pLeft, long *pTop, long *pWidth, long *pHeight);
	HRESULT(STDMETHODCALLTYPE * SetDefaultDestinationPosition) (IBasicVideo2 * This);
	HRESULT(STDMETHODCALLTYPE * GetVideoSize) (IBasicVideo2 * This, long *pWidth, long *pHeight);
	HRESULT(STDMETHODCALLTYPE * GetVideoPaletteEntries) (IBasicVideo2 * This, long StartIndex, long Entries, long *pRetrieved, long *pPalette);
	HRESULT(STDMETHODCALLTYPE * GetCurrentImage) (IBasicVideo2 * This, long *pBufferSize, long *pDIBImage);
	HRESULT(STDMETHODCALLTYPE * IsUsingDefaultSource) (IBasicVideo2 * This);
	HRESULT(STDMETHODCALLTYPE * IsUsingDefaultDestination) (IBasicVideo2 * This);
	HRESULT(STDMETHODCALLTYPE * GetPreferredAspectRatio) (IBasicVideo2 * This, long *plAspectX, long *plAspectY);
	END_INTERFACE
} IBasicVideo2Vtbl;
interface IBasicVideo2
{
    CONST_VTBL struct IBasicVideo2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBasicVideo2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IBasicVideo2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IBasicVideo2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IBasicVideo2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IBasicVideo2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IBasicVideo2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IBasicVideo2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IBasicVideo2_get_AvgTimePerFrame(This,pAvgTimePerFrame)    ( (This)->lpVtbl -> get_AvgTimePerFrame(This,pAvgTimePerFrame) ) 
#define IBasicVideo2_get_BitRate(This,pBitRate)    ( (This)->lpVtbl -> get_BitRate(This,pBitRate) ) 
#define IBasicVideo2_get_BitErrorRate(This,pBitErrorRate)    ( (This)->lpVtbl -> get_BitErrorRate(This,pBitErrorRate) ) 
#define IBasicVideo2_get_VideoWidth(This,pVideoWidth)    ( (This)->lpVtbl -> get_VideoWidth(This,pVideoWidth) ) 
#define IBasicVideo2_get_VideoHeight(This,pVideoHeight)    ( (This)->lpVtbl -> get_VideoHeight(This,pVideoHeight) ) 
#define IBasicVideo2_put_SourceLeft(This,SourceLeft)    ( (This)->lpVtbl -> put_SourceLeft(This,SourceLeft) ) 
#define IBasicVideo2_get_SourceLeft(This,pSourceLeft)    ( (This)->lpVtbl -> get_SourceLeft(This,pSourceLeft) ) 
#define IBasicVideo2_put_SourceWidth(This,SourceWidth)    ( (This)->lpVtbl -> put_SourceWidth(This,SourceWidth) ) 
#define IBasicVideo2_get_SourceWidth(This,pSourceWidth)    ( (This)->lpVtbl -> get_SourceWidth(This,pSourceWidth) ) 
#define IBasicVideo2_put_SourceTop(This,SourceTop)    ( (This)->lpVtbl -> put_SourceTop(This,SourceTop) ) 
#define IBasicVideo2_get_SourceTop(This,pSourceTop)    ( (This)->lpVtbl -> get_SourceTop(This,pSourceTop) ) 
#define IBasicVideo2_put_SourceHeight(This,SourceHeight)    ( (This)->lpVtbl -> put_SourceHeight(This,SourceHeight) ) 
#define IBasicVideo2_get_SourceHeight(This,pSourceHeight)    ( (This)->lpVtbl -> get_SourceHeight(This,pSourceHeight) ) 
#define IBasicVideo2_put_DestinationLeft(This,DestinationLeft)    ( (This)->lpVtbl -> put_DestinationLeft(This,DestinationLeft) ) 
#define IBasicVideo2_get_DestinationLeft(This,pDestinationLeft)    ( (This)->lpVtbl -> get_DestinationLeft(This,pDestinationLeft) ) 
#define IBasicVideo2_put_DestinationWidth(This,DestinationWidth)    ( (This)->lpVtbl -> put_DestinationWidth(This,DestinationWidth) ) 
#define IBasicVideo2_get_DestinationWidth(This,pDestinationWidth)    ( (This)->lpVtbl -> get_DestinationWidth(This,pDestinationWidth) ) 
#define IBasicVideo2_put_DestinationTop(This,DestinationTop)    ( (This)->lpVtbl -> put_DestinationTop(This,DestinationTop) ) 
#define IBasicVideo2_get_DestinationTop(This,pDestinationTop)    ( (This)->lpVtbl -> get_DestinationTop(This,pDestinationTop) ) 
#define IBasicVideo2_put_DestinationHeight(This,DestinationHeight)    ( (This)->lpVtbl -> put_DestinationHeight(This,DestinationHeight) ) 
#define IBasicVideo2_get_DestinationHeight(This,pDestinationHeight)    ( (This)->lpVtbl -> get_DestinationHeight(This,pDestinationHeight) ) 
#define IBasicVideo2_SetSourcePosition(This,Left,Top,Width,Height)    ( (This)->lpVtbl -> SetSourcePosition(This,Left,Top,Width,Height) ) 
#define IBasicVideo2_GetSourcePosition(This,pLeft,pTop,pWidth,pHeight)    ( (This)->lpVtbl -> GetSourcePosition(This,pLeft,pTop,pWidth,pHeight) ) 
#define IBasicVideo2_SetDefaultSourcePosition(This)    ( (This)->lpVtbl -> SetDefaultSourcePosition(This) ) 
#define IBasicVideo2_SetDestinationPosition(This,Left,Top,Width,Height)    ( (This)->lpVtbl -> SetDestinationPosition(This,Left,Top,Width,Height) ) 
#define IBasicVideo2_GetDestinationPosition(This,pLeft,pTop,pWidth,pHeight)    ( (This)->lpVtbl -> GetDestinationPosition(This,pLeft,pTop,pWidth,pHeight) ) 
#define IBasicVideo2_SetDefaultDestinationPosition(This)    ( (This)->lpVtbl -> SetDefaultDestinationPosition(This) ) 
#define IBasicVideo2_GetVideoSize(This,pWidth,pHeight)    ( (This)->lpVtbl -> GetVideoSize(This,pWidth,pHeight) ) 
#define IBasicVideo2_GetVideoPaletteEntries(This,StartIndex,Entries,pRetrieved,pPalette)    ( (This)->lpVtbl -> GetVideoPaletteEntries(This,StartIndex,Entries,pRetrieved,pPalette) ) 
#define IBasicVideo2_GetCurrentImage(This,pBufferSize,pDIBImage)    ( (This)->lpVtbl -> GetCurrentImage(This,pBufferSize,pDIBImage) ) 
#define IBasicVideo2_IsUsingDefaultSource(This)    ( (This)->lpVtbl -> IsUsingDefaultSource(This) ) 
#define IBasicVideo2_IsUsingDefaultDestination(This)    ( (This)->lpVtbl -> IsUsingDefaultDestination(This) ) 
#define IBasicVideo2_GetPreferredAspectRatio(This,plAspectX,plAspectY)    ( (This)->lpVtbl -> GetPreferredAspectRatio(This,plAspectX,plAspectY) ) 
#endif
#endif
#ifndef __IDeferredCommand_INTERFACE_DEFINED__
#define __IDeferredCommand_INTERFACE_DEFINED__ 
DEFINE_GUID(IID_IDeferredCommand,0x56a868b8,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
typedef struct IDeferredCommandVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDeferredCommand * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDeferredCommand * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDeferredCommand * This);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IDeferredCommand * This);
	HRESULT(STDMETHODCALLTYPE * Confidence) (IDeferredCommand * This, LONG * pConfidence);
	HRESULT(STDMETHODCALLTYPE * Postpone) (IDeferredCommand * This, REFTIME newtime);
	HRESULT(STDMETHODCALLTYPE * GetHResult) (IDeferredCommand * This, HRESULT * phrResult);
	END_INTERFACE
} IDeferredCommandVtbl;
interface IDeferredCommand
{
    CONST_VTBL struct IDeferredCommandVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDeferredCommand_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDeferredCommand_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IDeferredCommand_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IDeferredCommand_Cancel(This)    ( (This)->lpVtbl -> Cancel(This) ) 
#define IDeferredCommand_Confidence(This,pConfidence)    ( (This)->lpVtbl -> Confidence(This,pConfidence) ) 
#define IDeferredCommand_Postpone(This,newtime)    ( (This)->lpVtbl -> Postpone(This,newtime) ) 
#define IDeferredCommand_GetHResult(This,phrResult)    ( (This)->lpVtbl -> GetHResult(This,phrResult) ) 
#endif
#endif
#ifndef __IQueueCommand_INTERFACE_DEFINED__
#define __IQueueCommand_INTERFACE_DEFINED__ 
DEFINE_GUID(IID_IQueueCommand,0x56a868b7,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
typedef struct IQueueCommandVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IQueueCommand * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IQueueCommand * This);
	ULONG(STDMETHODCALLTYPE * Release) (IQueueCommand * This);
	HRESULT(STDMETHODCALLTYPE * InvokeAtStreamTime) (IQueueCommand * This, IDeferredCommand ** pCmd, REFTIME time, GUID * iid, long dispidMethod, short wFlags, long cArgs, VARIANT * pDispParams, VARIANT * pvarResult, short *puArgErr);
	HRESULT(STDMETHODCALLTYPE * InvokeAtPresentationTime) (IQueueCommand * This, IDeferredCommand ** pCmd, REFTIME time, GUID * iid, long dispidMethod, short wFlags, long cArgs, VARIANT * pDispParams, VARIANT * pvarResult, short *puArgErr);
	END_INTERFACE
} IQueueCommandVtbl;
interface IQueueCommand
{
    CONST_VTBL struct IQueueCommandVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IQueueCommand_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IQueueCommand_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IQueueCommand_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IQueueCommand_InvokeAtStreamTime(This,pCmd,time,iid,dispidMethod,wFlags,cArgs,pDispParams,pvarResult,puArgErr)    ( (This)->lpVtbl -> InvokeAtStreamTime(This,pCmd,time,iid,dispidMethod,wFlags,cArgs,pDispParams,pvarResult,puArgErr) ) 
#define IQueueCommand_InvokeAtPresentationTime(This,pCmd,time,iid,dispidMethod,wFlags,cArgs,pDispParams,pvarResult,puArgErr)    ( (This)->lpVtbl -> InvokeAtPresentationTime(This,pCmd,time,iid,dispidMethod,wFlags,cArgs,pDispParams,pvarResult,puArgErr) ) 
#endif
#endif
DEFINE_GUID(CLSID_FilgraphManager,0xe436ebb3,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70);
#ifndef __IFilterInfo_INTERFACE_DEFINED__
#define __IFilterInfo_INTERFACE_DEFINED__ 
DEFINE_GUID(IID_IFilterInfo,0x56a868ba,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
typedef struct IFilterInfoVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFilterInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFilterInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFilterInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFilterInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFilterInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFilterInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFilterInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * FindPin) (IFilterInfo * This, BSTR strPinID, IDispatch ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFilterInfo * This, BSTR * strName);
	HRESULT(STDMETHODCALLTYPE * get_VendorInfo) (IFilterInfo * This, BSTR * strVendorInfo);
	HRESULT(STDMETHODCALLTYPE * get_Filter) (IFilterInfo * This, IUnknown ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_Pins) (IFilterInfo * This, IDispatch ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_IsFileSource) (IFilterInfo * This, LONG * pbIsSource);
	HRESULT(STDMETHODCALLTYPE * get_Filename) (IFilterInfo * This, BSTR * pstrFilename);
	HRESULT(STDMETHODCALLTYPE * put_Filename) (IFilterInfo * This, BSTR strFilename);
	END_INTERFACE
} IFilterInfoVtbl;
interface IFilterInfo
{
    CONST_VTBL struct IFilterInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFilterInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IFilterInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IFilterInfo_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IFilterInfo_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IFilterInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IFilterInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IFilterInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IFilterInfo_FindPin(This,strPinID,ppUnk)    ( (This)->lpVtbl -> FindPin(This,strPinID,ppUnk) ) 
#define IFilterInfo_get_Name(This,strName)    ( (This)->lpVtbl -> get_Name(This,strName) ) 
#define IFilterInfo_get_VendorInfo(This,strVendorInfo)    ( (This)->lpVtbl -> get_VendorInfo(This,strVendorInfo) ) 
#define IFilterInfo_get_Filter(This,ppUnk)    ( (This)->lpVtbl -> get_Filter(This,ppUnk) ) 
#define IFilterInfo_get_Pins(This,ppUnk)    ( (This)->lpVtbl -> get_Pins(This,ppUnk) ) 
#define IFilterInfo_get_IsFileSource(This,pbIsSource)    ( (This)->lpVtbl -> get_IsFileSource(This,pbIsSource) ) 
#define IFilterInfo_get_Filename(This,pstrFilename)    ( (This)->lpVtbl -> get_Filename(This,pstrFilename) ) 
#define IFilterInfo_put_Filename(This,strFilename)    ( (This)->lpVtbl -> put_Filename(This,strFilename) ) 
#endif
#endif
#ifndef __IRegFilterInfo_INTERFACE_DEFINED__
#define __IRegFilterInfo_INTERFACE_DEFINED__ 
DEFINE_GUID(IID_IRegFilterInfo,0x56a868bb,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
typedef struct IRegFilterInfoVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRegFilterInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRegFilterInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRegFilterInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IRegFilterInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IRegFilterInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IRegFilterInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IRegFilterInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IRegFilterInfo * This, BSTR * strName);
	HRESULT(STDMETHODCALLTYPE * Filter) (IRegFilterInfo * This, IDispatch ** ppUnk);
	END_INTERFACE
} IRegFilterInfoVtbl;
interface IRegFilterInfo
{
    CONST_VTBL struct IRegFilterInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRegFilterInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IRegFilterInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IRegFilterInfo_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IRegFilterInfo_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IRegFilterInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IRegFilterInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IRegFilterInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IRegFilterInfo_get_Name(This,strName)    ( (This)->lpVtbl -> get_Name(This,strName) ) 
#define IRegFilterInfo_Filter(This,ppUnk)    ( (This)->lpVtbl -> Filter(This,ppUnk) ) 
#endif
#endif
#ifndef __IMediaTypeInfo_INTERFACE_DEFINED__
#define __IMediaTypeInfo_INTERFACE_DEFINED__ 
DEFINE_GUID(IID_IMediaTypeInfo,0x56a868bc,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
typedef struct IMediaTypeInfoVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMediaTypeInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMediaTypeInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMediaTypeInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMediaTypeInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMediaTypeInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMediaTypeInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMediaTypeInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IMediaTypeInfo * This, BSTR * strType);
	HRESULT(STDMETHODCALLTYPE * get_Subtype) (IMediaTypeInfo * This, BSTR * strType);
	END_INTERFACE
} IMediaTypeInfoVtbl;
interface IMediaTypeInfo
{
    CONST_VTBL struct IMediaTypeInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMediaTypeInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IMediaTypeInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IMediaTypeInfo_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IMediaTypeInfo_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IMediaTypeInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IMediaTypeInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IMediaTypeInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IMediaTypeInfo_get_Type(This,strType)    ( (This)->lpVtbl -> get_Type(This,strType) ) 
#define IMediaTypeInfo_get_Subtype(This,strType)    ( (This)->lpVtbl -> get_Subtype(This,strType) ) 
#endif
#endif
#ifndef __IPinInfo_INTERFACE_DEFINED__
#define __IPinInfo_INTERFACE_DEFINED__ 
DEFINE_GUID(IID_IPinInfo,0x56a868bd,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
typedef struct IPinInfoVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPinInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPinInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPinInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IPinInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IPinInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IPinInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IPinInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Pin) (IPinInfo * This, IUnknown ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_ConnectedTo) (IPinInfo * This, IDispatch ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_ConnectionMediaType) (IPinInfo * This, IDispatch ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_FilterInfo) (IPinInfo * This, IDispatch ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IPinInfo * This, BSTR * ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_Direction) (IPinInfo * This, LONG * ppDirection);
	HRESULT(STDMETHODCALLTYPE * get_PinID) (IPinInfo * This, BSTR * strPinID);
	HRESULT(STDMETHODCALLTYPE * get_MediaTypes) (IPinInfo * This, IDispatch ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * Connect) (IPinInfo * This, IUnknown * pPin);
	HRESULT(STDMETHODCALLTYPE * ConnectDirect) (IPinInfo * This, IUnknown * pPin);
	HRESULT(STDMETHODCALLTYPE * ConnectWithType) (IPinInfo * This, IUnknown * pPin, IDispatch * pMediaType);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (IPinInfo * This);
	HRESULT(STDMETHODCALLTYPE * Render) (IPinInfo * This);
	END_INTERFACE
} IPinInfoVtbl;
interface IPinInfo
{
    CONST_VTBL struct IPinInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPinInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IPinInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IPinInfo_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IPinInfo_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IPinInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IPinInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IPinInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IPinInfo_get_Pin(This,ppUnk)    ( (This)->lpVtbl -> get_Pin(This,ppUnk) ) 
#define IPinInfo_get_ConnectedTo(This,ppUnk)    ( (This)->lpVtbl -> get_ConnectedTo(This,ppUnk) ) 
#define IPinInfo_get_ConnectionMediaType(This,ppUnk)    ( (This)->lpVtbl -> get_ConnectionMediaType(This,ppUnk) ) 
#define IPinInfo_get_FilterInfo(This,ppUnk)    ( (This)->lpVtbl -> get_FilterInfo(This,ppUnk) ) 
#define IPinInfo_get_Name(This,ppUnk)    ( (This)->lpVtbl -> get_Name(This,ppUnk) ) 
#define IPinInfo_get_Direction(This,ppDirection)    ( (This)->lpVtbl -> get_Direction(This,ppDirection) ) 
#define IPinInfo_get_PinID(This,strPinID)    ( (This)->lpVtbl -> get_PinID(This,strPinID) ) 
#define IPinInfo_get_MediaTypes(This,ppUnk)    ( (This)->lpVtbl -> get_MediaTypes(This,ppUnk) ) 
#define IPinInfo_Connect(This,pPin)    ( (This)->lpVtbl -> Connect(This,pPin) ) 
#define IPinInfo_ConnectDirect(This,pPin)    ( (This)->lpVtbl -> ConnectDirect(This,pPin) ) 
#define IPinInfo_ConnectWithType(This,pPin,pMediaType)    ( (This)->lpVtbl -> ConnectWithType(This,pPin,pMediaType) ) 
#define IPinInfo_Disconnect(This)    ( (This)->lpVtbl -> Disconnect(This) ) 
#define IPinInfo_Render(This)    ( (This)->lpVtbl -> Render(This) ) 
#endif
#endif
#ifndef __IAMStats_INTERFACE_DEFINED__
#define __IAMStats_INTERFACE_DEFINED__ 
DEFINE_GUID(IID_IAMStats,0xbc9bcf80,0xdcd2,0x11d2,0xab,0xf6,0x00,0xa0,0xc9,0x05,0xf3,0x75);
typedef struct IAMStatsVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAMStats * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAMStats * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAMStats * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAMStats * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAMStats * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAMStats * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAMStats * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Reset) (IAMStats * This);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAMStats * This, LONG * plCount);
	HRESULT(STDMETHODCALLTYPE * GetValueByIndex) (IAMStats * This, long lIndex, BSTR * szName, long *lCount, double *dLast, double *dAverage, double *dStdDev, double *dMin, double *dMax);
	HRESULT(STDMETHODCALLTYPE * GetValueByName) (IAMStats * This, BSTR szName, long *lIndex, long *lCount, double *dLast, double *dAverage, double *dStdDev, double *dMin, double *dMax);
	HRESULT(STDMETHODCALLTYPE * GetIndex) (IAMStats * This, BSTR szName, long lCreate, long *plIndex);
	HRESULT(STDMETHODCALLTYPE * AddValue) (IAMStats * This, long lIndex, double dValue);
	END_INTERFACE
} IAMStatsVtbl;
interface IAMStats
{
    CONST_VTBL struct IAMStatsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMStats_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IAMStats_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IAMStats_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IAMStats_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IAMStats_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IAMStats_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IAMStats_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IAMStats_Reset(This)    ( (This)->lpVtbl -> Reset(This) ) 
#define IAMStats_get_Count(This,plCount)    ( (This)->lpVtbl -> get_Count(This,plCount) ) 
#define IAMStats_GetValueByIndex(This,lIndex,szName,lCount,dLast,dAverage,dStdDev,dMin,dMax)    ( (This)->lpVtbl -> GetValueByIndex(This,lIndex,szName,lCount,dLast,dAverage,dStdDev,dMin,dMax) ) 
#define IAMStats_GetValueByName(This,szName,lIndex,lCount,dLast,dAverage,dStdDev,dMin,dMax)    ( (This)->lpVtbl -> GetValueByName(This,szName,lIndex,lCount,dLast,dAverage,dStdDev,dMin,dMax) ) 
#define IAMStats_GetIndex(This,szName,lCreate,plIndex)    ( (This)->lpVtbl -> GetIndex(This,szName,lCreate,plIndex) ) 
#define IAMStats_AddValue(This,lIndex,dValue)    ( (This)->lpVtbl -> AddValue(This,lIndex,dValue) ) 
#endif
#endif
#endif
#endif
