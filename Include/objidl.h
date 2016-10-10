/*+@@file@@----------------------------------------------------------------*//*!
 \file		objidl.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 13:04:59 2016
 \date		Modified on Mon Jun 27 13:04:59 2016
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
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __objidl_h__
#define __objidl_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IMarshal_FWD_DEFINED__
#define __IMarshal_FWD_DEFINED__
typedef interface IMarshal IMarshal;
#endif
#ifndef __IMarshal2_FWD_DEFINED__
#define __IMarshal2_FWD_DEFINED__
typedef interface IMarshal2 IMarshal2;
#endif
#ifndef __IMalloc_FWD_DEFINED__
#define __IMalloc_FWD_DEFINED__
typedef interface IMalloc IMalloc;
#endif
#ifndef __IMallocSpy_FWD_DEFINED__
#define __IMallocSpy_FWD_DEFINED__
typedef interface IMallocSpy IMallocSpy;
#endif
#ifndef __IStdMarshalInfo_FWD_DEFINED__
#define __IStdMarshalInfo_FWD_DEFINED__
typedef interface IStdMarshalInfo IStdMarshalInfo;
#endif
#ifndef __IExternalConnection_FWD_DEFINED__
#define __IExternalConnection_FWD_DEFINED__
typedef interface IExternalConnection IExternalConnection;
#endif
#ifndef __IMultiQI_FWD_DEFINED__
#define __IMultiQI_FWD_DEFINED__
typedef interface IMultiQI IMultiQI;
#endif
#ifndef __AsyncIMultiQI_FWD_DEFINED__
#define __AsyncIMultiQI_FWD_DEFINED__
typedef interface AsyncIMultiQI AsyncIMultiQI;
#endif
#ifndef __IInternalUnknown_FWD_DEFINED__
#define __IInternalUnknown_FWD_DEFINED__
typedef interface IInternalUnknown IInternalUnknown;
#endif
#ifndef __IEnumUnknown_FWD_DEFINED__
#define __IEnumUnknown_FWD_DEFINED__
typedef interface IEnumUnknown IEnumUnknown;
#endif
#ifndef __IBindCtx_FWD_DEFINED__
#define __IBindCtx_FWD_DEFINED__
typedef interface IBindCtx IBindCtx;
#endif
#ifndef __IEnumMoniker_FWD_DEFINED__
#define __IEnumMoniker_FWD_DEFINED__
typedef interface IEnumMoniker IEnumMoniker;
#endif
#ifndef __IRunnableObject_FWD_DEFINED__
#define __IRunnableObject_FWD_DEFINED__
typedef interface IRunnableObject IRunnableObject;
#endif
#ifndef __IRunningObjectTable_FWD_DEFINED__
#define __IRunningObjectTable_FWD_DEFINED__
typedef interface IRunningObjectTable IRunningObjectTable;
#endif
#ifndef __IPersist_FWD_DEFINED__
#define __IPersist_FWD_DEFINED__
typedef interface IPersist IPersist;
#endif
#ifndef __IPersistStream_FWD_DEFINED__
#define __IPersistStream_FWD_DEFINED__
typedef interface IPersistStream IPersistStream;
#endif
#ifndef __IMoniker_FWD_DEFINED__
#define __IMoniker_FWD_DEFINED__
typedef interface IMoniker IMoniker;
#endif
#ifndef __IROTData_FWD_DEFINED__
#define __IROTData_FWD_DEFINED__
typedef interface IROTData IROTData;
#endif
#ifndef __IEnumString_FWD_DEFINED__
#define __IEnumString_FWD_DEFINED__
typedef interface IEnumString IEnumString;
#endif
#ifndef __ISequentialStream_FWD_DEFINED__
#define __ISequentialStream_FWD_DEFINED__
typedef interface ISequentialStream ISequentialStream;
#endif
#ifndef __IStream_FWD_DEFINED__
#define __IStream_FWD_DEFINED__
typedef interface IStream IStream;
#endif
#ifndef __IEnumSTATSTG_FWD_DEFINED__
#define __IEnumSTATSTG_FWD_DEFINED__
typedef interface IEnumSTATSTG IEnumSTATSTG;
#endif
#ifndef __IStorage_FWD_DEFINED__
#define __IStorage_FWD_DEFINED__
typedef interface IStorage IStorage;
#endif
#ifndef __IPersistFile_FWD_DEFINED__
#define __IPersistFile_FWD_DEFINED__
typedef interface IPersistFile IPersistFile;
#endif
#ifndef __IPersistStorage_FWD_DEFINED__
#define __IPersistStorage_FWD_DEFINED__
typedef interface IPersistStorage IPersistStorage;
#endif
#ifndef __ILockBytes_FWD_DEFINED__
#define __ILockBytes_FWD_DEFINED__
typedef interface ILockBytes ILockBytes;
#endif
#ifndef __IEnumFORMATETC_FWD_DEFINED__
#define __IEnumFORMATETC_FWD_DEFINED__
typedef interface IEnumFORMATETC IEnumFORMATETC;
#endif
#ifndef __IEnumSTATDATA_FWD_DEFINED__
#define __IEnumSTATDATA_FWD_DEFINED__
typedef interface IEnumSTATDATA IEnumSTATDATA;
#endif
#ifndef __IRootStorage_FWD_DEFINED__
#define __IRootStorage_FWD_DEFINED__
typedef interface IRootStorage IRootStorage;
#endif
#ifndef __IAdviseSink_FWD_DEFINED__
#define __IAdviseSink_FWD_DEFINED__
typedef interface IAdviseSink IAdviseSink;
#endif
#ifndef __AsyncIAdviseSink_FWD_DEFINED__
#define __AsyncIAdviseSink_FWD_DEFINED__
typedef interface AsyncIAdviseSink AsyncIAdviseSink;
#endif
#ifndef __IAdviseSink2_FWD_DEFINED__
#define __IAdviseSink2_FWD_DEFINED__
typedef interface IAdviseSink2 IAdviseSink2;
#endif
#ifndef __AsyncIAdviseSink2_FWD_DEFINED__
#define __AsyncIAdviseSink2_FWD_DEFINED__
typedef interface AsyncIAdviseSink2 AsyncIAdviseSink2;
#endif
#ifndef __IDataObject_FWD_DEFINED__
#define __IDataObject_FWD_DEFINED__
typedef interface IDataObject IDataObject;
#endif
#ifndef __IDataAdviseHolder_FWD_DEFINED__
#define __IDataAdviseHolder_FWD_DEFINED__
typedef interface IDataAdviseHolder IDataAdviseHolder;
#endif
#ifndef __IMessageFilter_FWD_DEFINED__
#define __IMessageFilter_FWD_DEFINED__
typedef interface IMessageFilter IMessageFilter;
#endif
#ifndef __IRpcChannelBuffer_FWD_DEFINED__
#define __IRpcChannelBuffer_FWD_DEFINED__
typedef interface IRpcChannelBuffer IRpcChannelBuffer;
#endif
#ifndef __IRpcChannelBuffer2_FWD_DEFINED__
#define __IRpcChannelBuffer2_FWD_DEFINED__
typedef interface IRpcChannelBuffer2 IRpcChannelBuffer2;
#endif
#ifndef __IAsyncRpcChannelBuffer_FWD_DEFINED__
#define __IAsyncRpcChannelBuffer_FWD_DEFINED__
typedef interface IAsyncRpcChannelBuffer IAsyncRpcChannelBuffer;
#endif
#ifndef __IRpcChannelBuffer3_FWD_DEFINED__
#define __IRpcChannelBuffer3_FWD_DEFINED__
typedef interface IRpcChannelBuffer3 IRpcChannelBuffer3;
#endif
#ifndef __IRpcSyntaxNegotiate_FWD_DEFINED__
#define __IRpcSyntaxNegotiate_FWD_DEFINED__
typedef interface IRpcSyntaxNegotiate IRpcSyntaxNegotiate;
#endif
#ifndef __IRpcProxyBuffer_FWD_DEFINED__
#define __IRpcProxyBuffer_FWD_DEFINED__
typedef interface IRpcProxyBuffer IRpcProxyBuffer;
#endif
#ifndef __IRpcStubBuffer_FWD_DEFINED__
#define __IRpcStubBuffer_FWD_DEFINED__
typedef interface IRpcStubBuffer IRpcStubBuffer;
#endif
#ifndef __IPSFactoryBuffer_FWD_DEFINED__
#define __IPSFactoryBuffer_FWD_DEFINED__
typedef interface IPSFactoryBuffer IPSFactoryBuffer;
#endif
#ifndef __IChannelHook_FWD_DEFINED__
#define __IChannelHook_FWD_DEFINED__
typedef interface IChannelHook IChannelHook;
#endif
#ifndef __IClientSecurity_FWD_DEFINED__
#define __IClientSecurity_FWD_DEFINED__
typedef interface IClientSecurity IClientSecurity;
#endif
#ifndef __IServerSecurity_FWD_DEFINED__
#define __IServerSecurity_FWD_DEFINED__
typedef interface IServerSecurity IServerSecurity;
#endif
#ifndef __IClassActivator_FWD_DEFINED__
#define __IClassActivator_FWD_DEFINED__
typedef interface IClassActivator IClassActivator;
#endif
#ifndef __IRpcOptions_FWD_DEFINED__
#define __IRpcOptions_FWD_DEFINED__
typedef interface IRpcOptions IRpcOptions;
#endif
#ifndef __IGlobalOptions_FWD_DEFINED__
#define __IGlobalOptions_FWD_DEFINED__
typedef interface IGlobalOptions IGlobalOptions;
#endif
#ifndef __IFillLockBytes_FWD_DEFINED__
#define __IFillLockBytes_FWD_DEFINED__
typedef interface IFillLockBytes IFillLockBytes;
#endif
#ifndef __IProgressNotify_FWD_DEFINED__
#define __IProgressNotify_FWD_DEFINED__
typedef interface IProgressNotify IProgressNotify;
#endif
#ifndef __ILayoutStorage_FWD_DEFINED__
#define __ILayoutStorage_FWD_DEFINED__
typedef interface ILayoutStorage ILayoutStorage;
#endif
#ifndef __IBlockingLock_FWD_DEFINED__
#define __IBlockingLock_FWD_DEFINED__
typedef interface IBlockingLock IBlockingLock;
#endif
#ifndef __ITimeAndNoticeControl_FWD_DEFINED__
#define __ITimeAndNoticeControl_FWD_DEFINED__
typedef interface ITimeAndNoticeControl ITimeAndNoticeControl;
#endif
#ifndef __IOplockStorage_FWD_DEFINED__
#define __IOplockStorage_FWD_DEFINED__
typedef interface IOplockStorage IOplockStorage;
#endif
#ifndef __ISurrogate_FWD_DEFINED__
#define __ISurrogate_FWD_DEFINED__
typedef interface ISurrogate ISurrogate;
#endif
#ifndef __IGlobalInterfaceTable_FWD_DEFINED__
#define __IGlobalInterfaceTable_FWD_DEFINED__
typedef interface IGlobalInterfaceTable IGlobalInterfaceTable;
#endif
#ifndef __IDirectWriterLock_FWD_DEFINED__
#define __IDirectWriterLock_FWD_DEFINED__
typedef interface IDirectWriterLock IDirectWriterLock;
#endif
#ifndef __ISynchronize_FWD_DEFINED__
#define __ISynchronize_FWD_DEFINED__
typedef interface ISynchronize ISynchronize;
#endif
#ifndef __ISynchronizeHandle_FWD_DEFINED__
#define __ISynchronizeHandle_FWD_DEFINED__
typedef interface ISynchronizeHandle ISynchronizeHandle;
#endif
#ifndef __ISynchronizeEvent_FWD_DEFINED__
#define __ISynchronizeEvent_FWD_DEFINED__
typedef interface ISynchronizeEvent ISynchronizeEvent;
#endif
#ifndef __ISynchronizeContainer_FWD_DEFINED__
#define __ISynchronizeContainer_FWD_DEFINED__
typedef interface ISynchronizeContainer ISynchronizeContainer;
#endif
#ifndef __ISynchronizeMutex_FWD_DEFINED__
#define __ISynchronizeMutex_FWD_DEFINED__
typedef interface ISynchronizeMutex ISynchronizeMutex;
#endif
#ifndef __ICancelMethodCalls_FWD_DEFINED__
#define __ICancelMethodCalls_FWD_DEFINED__
typedef interface ICancelMethodCalls ICancelMethodCalls;
#endif
#ifndef __IAsyncManager_FWD_DEFINED__
#define __IAsyncManager_FWD_DEFINED__
typedef interface IAsyncManager IAsyncManager;
#endif
#ifndef __ICallFactory_FWD_DEFINED__
#define __ICallFactory_FWD_DEFINED__
typedef interface ICallFactory ICallFactory;
#endif
#ifndef __IRpcHelper_FWD_DEFINED__
#define __IRpcHelper_FWD_DEFINED__
typedef interface IRpcHelper IRpcHelper;
#endif
#ifndef __IReleaseMarshalBuffers_FWD_DEFINED__
#define __IReleaseMarshalBuffers_FWD_DEFINED__
typedef interface IReleaseMarshalBuffers IReleaseMarshalBuffers;
#endif
#ifndef __IWaitMultiple_FWD_DEFINED__
#define __IWaitMultiple_FWD_DEFINED__
typedef interface IWaitMultiple IWaitMultiple;
#endif
#ifndef __IUrlMon_FWD_DEFINED__
#define __IUrlMon_FWD_DEFINED__
typedef interface IUrlMon IUrlMon;
#endif
#ifndef __IForegroundTransfer_FWD_DEFINED__
#define __IForegroundTransfer_FWD_DEFINED__
typedef interface IForegroundTransfer IForegroundTransfer;
#endif
#ifndef __IAddrTrackingControl_FWD_DEFINED__
#define __IAddrTrackingControl_FWD_DEFINED__
typedef interface IAddrTrackingControl IAddrTrackingControl;
#endif
#ifndef __IAddrExclusionControl_FWD_DEFINED__
#define __IAddrExclusionControl_FWD_DEFINED__
typedef interface IAddrExclusionControl IAddrExclusionControl;
#endif
#ifndef __IPipeByte_FWD_DEFINED__
#define __IPipeByte_FWD_DEFINED__
typedef interface IPipeByte IPipeByte;
#endif
#ifndef __AsyncIPipeByte_FWD_DEFINED__
#define __AsyncIPipeByte_FWD_DEFINED__
typedef interface AsyncIPipeByte AsyncIPipeByte;
#endif
#ifndef __IPipeLong_FWD_DEFINED__
#define __IPipeLong_FWD_DEFINED__
typedef interface IPipeLong IPipeLong;
#endif
#ifndef __AsyncIPipeLong_FWD_DEFINED__
#define __AsyncIPipeLong_FWD_DEFINED__
typedef interface AsyncIPipeLong AsyncIPipeLong;
#endif
#ifndef __IPipeDouble_FWD_DEFINED__
#define __IPipeDouble_FWD_DEFINED__
typedef interface IPipeDouble IPipeDouble;
#endif
#ifndef __AsyncIPipeDouble_FWD_DEFINED__
#define __AsyncIPipeDouble_FWD_DEFINED__
typedef interface AsyncIPipeDouble AsyncIPipeDouble;
#endif
#ifndef __IThumbnailExtractor_FWD_DEFINED__
#define __IThumbnailExtractor_FWD_DEFINED__
typedef interface IThumbnailExtractor IThumbnailExtractor;
#endif
#ifndef __IDummyHICONIncluder_FWD_DEFINED__
#define __IDummyHICONIncluder_FWD_DEFINED__
typedef interface IDummyHICONIncluder IDummyHICONIncluder;
#endif
#ifndef __IEnumContextProps_FWD_DEFINED__
#define __IEnumContextProps_FWD_DEFINED__
typedef interface IEnumContextProps IEnumContextProps;
#endif
#ifndef __IContext_FWD_DEFINED__
#define __IContext_FWD_DEFINED__
typedef interface IContext IContext;
#endif
#ifndef __IObjContext_FWD_DEFINED__
#define __IObjContext_FWD_DEFINED__
typedef interface IObjContext IObjContext;
#endif
#ifndef __IProcessLock_FWD_DEFINED__
#define __IProcessLock_FWD_DEFINED__
typedef interface IProcessLock IProcessLock;
#endif
#ifndef __ISurrogateService_FWD_DEFINED__
#define __ISurrogateService_FWD_DEFINED__
typedef interface ISurrogateService ISurrogateService;
#endif
#ifndef __IComThreadingInfo_FWD_DEFINED__
#define __IComThreadingInfo_FWD_DEFINED__
typedef interface IComThreadingInfo IComThreadingInfo;
#endif
#ifndef __IProcessInitControl_FWD_DEFINED__
#define __IProcessInitControl_FWD_DEFINED__
typedef interface IProcessInitControl IProcessInitControl;
#endif
#ifndef __IInitializeSpy_FWD_DEFINED__
#define __IInitializeSpy_FWD_DEFINED__
typedef interface IInitializeSpy IInitializeSpy;
#endif
#include "unknwn.h"
#if(NTDDI_VERSION >= NTDDI_WINLH && !defined(_WIN32_WINNT))
#define _WIN32_WINNT 0x0600
#endif
#if(NTDDI_VERSION >= NTDDI_WS03 && !defined(_WIN32_WINNT))
#define _WIN32_WINNT 0x0502
#endif
#if(NTDDI_VERSION >= NTDDI_WINXP && !defined(_WIN32_WINNT))
#define _WIN32_WINNT 0x0501
#endif
#if(NTDDI_VERSION >= NTDDI_WIN2K && !defined(_WIN32_WINNT))
#define _WIN32_WINNT 0x0500
#endif
typedef struct _COSERVERINFO
{
	DWORD dwReserved1;
	LPWSTR pwszName;
	COAUTHINFO *pAuthInfo;
	DWORD dwReserved2;
} COSERVERINFO;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0000_v0_0_s_ifspec;
#ifndef __IMarshal_INTERFACE_DEFINED__
#define __IMarshal_INTERFACE_DEFINED__
typedef IMarshal *LPMARSHAL;
extern const IID IID_IMarshal;
typedef struct IMarshalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMarshal * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMarshal * This);
    ULONG(STDMETHODCALLTYPE * Release) (IMarshal * This);
    HRESULT(STDMETHODCALLTYPE * GetUnmarshalClass) (IMarshal * This, REFIID riid, void *pv, DWORD dwDestContext, void *pvDestContext, DWORD mshlflags, CLSID * pCid);
    HRESULT(STDMETHODCALLTYPE * GetMarshalSizeMax) (IMarshal * This, REFIID riid, void *pv, DWORD dwDestContext, void *pvDestContext, DWORD mshlflags, DWORD * pSize);
    HRESULT(STDMETHODCALLTYPE * MarshalInterface) (IMarshal * This, IStream * pStm, REFIID riid, void *pv, DWORD dwDestContext, void *pvDestContext, DWORD mshlflags);
    HRESULT(STDMETHODCALLTYPE * UnmarshalInterface) (IMarshal * This, IStream * pStm, REFIID riid, void **ppv);
    HRESULT(STDMETHODCALLTYPE * ReleaseMarshalData) (IMarshal * This, IStream * pStm);
    HRESULT(STDMETHODCALLTYPE * DisconnectObject) (IMarshal * This, DWORD dwReserved);
	END_INTERFACE
} IMarshalVtbl;
interface IMarshal
{
	CONST_VTBL struct IMarshalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMarshal_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMarshal_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMarshal_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMarshal_GetUnmarshalClass(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pCid)    ( (This)->lpVtbl -> GetUnmarshalClass(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pCid) )
#define IMarshal_GetMarshalSizeMax(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pSize)    ( (This)->lpVtbl -> GetMarshalSizeMax(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pSize) )
#define IMarshal_MarshalInterface(This,pStm,riid,pv,dwDestContext,pvDestContext,mshlflags)    ( (This)->lpVtbl -> MarshalInterface(This,pStm,riid,pv,dwDestContext,pvDestContext,mshlflags) )
#define IMarshal_UnmarshalInterface(This,pStm,riid,ppv)    ( (This)->lpVtbl -> UnmarshalInterface(This,pStm,riid,ppv) )
#define IMarshal_ReleaseMarshalData(This,pStm)    ( (This)->lpVtbl -> ReleaseMarshalData(This,pStm) )
#define IMarshal_DisconnectObject(This,dwReserved)    ( (This)->lpVtbl -> DisconnectObject(This,dwReserved) )
#endif
#endif
#ifndef __IMarshal2_INTERFACE_DEFINED__
#define __IMarshal2_INTERFACE_DEFINED__
typedef IMarshal2 *LPMARSHAL2;
extern const IID IID_IMarshal2;
typedef struct IMarshal2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMarshal2 * This, REFIID riid, void **ppvObject);
    ULONG(STDMETHODCALLTYPE * AddRef) (IMarshal2 * This);
    ULONG(STDMETHODCALLTYPE * Release) (IMarshal2 * This);
    HRESULT(STDMETHODCALLTYPE * GetUnmarshalClass) (IMarshal2 * This, REFIID riid, void *pv, DWORD dwDestContext, void *pvDestContext, DWORD mshlflags, CLSID * pCid);
    HRESULT(STDMETHODCALLTYPE * GetMarshalSizeMax) (IMarshal2 * This, REFIID riid, void *pv, DWORD dwDestContext, void *pvDestContext, DWORD mshlflags, DWORD * pSize);
    HRESULT(STDMETHODCALLTYPE * MarshalInterface) (IMarshal2 * This, IStream * pStm, REFIID riid, void *pv, DWORD dwDestContext, void *pvDestContext, DWORD mshlflags);
    HRESULT(STDMETHODCALLTYPE * UnmarshalInterface) (IMarshal2 * This, IStream * pStm, REFIID riid, void **ppv);
    HRESULT(STDMETHODCALLTYPE * ReleaseMarshalData) (IMarshal2 * This, IStream * pStm);
    HRESULT(STDMETHODCALLTYPE * DisconnectObject) (IMarshal2 * This, DWORD dwReserved);
	END_INTERFACE
} IMarshal2Vtbl;
interface IMarshal2
{
	CONST_VTBL struct IMarshal2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMarshal2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMarshal2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMarshal2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMarshal2_GetUnmarshalClass(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pCid)    ( (This)->lpVtbl -> GetUnmarshalClass(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pCid) )
#define IMarshal2_GetMarshalSizeMax(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pSize)    ( (This)->lpVtbl -> GetMarshalSizeMax(This,riid,pv,dwDestContext,pvDestContext,mshlflags,pSize) )
#define IMarshal2_MarshalInterface(This,pStm,riid,pv,dwDestContext,pvDestContext,mshlflags)    ( (This)->lpVtbl -> MarshalInterface(This,pStm,riid,pv,dwDestContext,pvDestContext,mshlflags) )
#define IMarshal2_UnmarshalInterface(This,pStm,riid,ppv)    ( (This)->lpVtbl -> UnmarshalInterface(This,pStm,riid,ppv) )
#define IMarshal2_ReleaseMarshalData(This,pStm)    ( (This)->lpVtbl -> ReleaseMarshalData(This,pStm) )
#define IMarshal2_DisconnectObject(This,dwReserved)    ( (This)->lpVtbl -> DisconnectObject(This,dwReserved) )
#endif
#endif
#ifndef __IMalloc_INTERFACE_DEFINED__
#define __IMalloc_INTERFACE_DEFINED__
typedef IMalloc *LPMALLOC;
extern const IID IID_IMalloc;
typedef struct IMallocVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMalloc * This, REFIID riid, void **ppvObject);
    ULONG(STDMETHODCALLTYPE * AddRef) (IMalloc * This);
    ULONG(STDMETHODCALLTYPE * Release) (IMalloc * This);
	void *(STDMETHODCALLTYPE * Alloc) (IMalloc * This, SIZE_T cb);
	void *(STDMETHODCALLTYPE * Realloc) (IMalloc * This, void *pv, SIZE_T cb);
	void (STDMETHODCALLTYPE * Free) (IMalloc * This, void *pv);
	SIZE_T(STDMETHODCALLTYPE * GetSize) (IMalloc * This, void *pv);
	int (STDMETHODCALLTYPE * DidAlloc) (IMalloc * This, void *pv);
	void (STDMETHODCALLTYPE * HeapMinimize) (IMalloc * This);
	END_INTERFACE
} IMallocVtbl;
interface IMalloc
{
	CONST_VTBL struct IMallocVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMalloc_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMalloc_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMalloc_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMalloc_Alloc(This,cb)    ( (This)->lpVtbl -> Alloc(This,cb) )
#define IMalloc_Realloc(This,pv,cb)    ( (This)->lpVtbl -> Realloc(This,pv,cb) )
#define IMalloc_Free(This,pv)    ( (This)->lpVtbl -> Free(This,pv) )
#define IMalloc_GetSize(This,pv)    ( (This)->lpVtbl -> GetSize(This,pv) )
#define IMalloc_DidAlloc(This,pv)    ( (This)->lpVtbl -> DidAlloc(This,pv) )
#define IMalloc_HeapMinimize(This)    ( (This)->lpVtbl -> HeapMinimize(This) )
#endif
#endif
#ifndef __IMallocSpy_INTERFACE_DEFINED__
#define __IMallocSpy_INTERFACE_DEFINED__
typedef IMallocSpy *LPMALLOCSPY;
extern const IID IID_IMallocSpy;
typedef struct IMallocSpyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMallocSpy * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMallocSpy * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMallocSpy * This);
	SIZE_T(STDMETHODCALLTYPE * PreAlloc) (IMallocSpy * This, SIZE_T cbRequest);
	void *(STDMETHODCALLTYPE * PostAlloc) (IMallocSpy * This, void *pActual);
	void *(STDMETHODCALLTYPE * PreFree) (IMallocSpy * This, void *pRequest, BOOL fSpyed);
	void (STDMETHODCALLTYPE * PostFree) (IMallocSpy * This, BOOL fSpyed);
	SIZE_T(STDMETHODCALLTYPE * PreRealloc) (IMallocSpy * This, void *pRequest, SIZE_T cbRequest, void **ppNewRequest, BOOL fSpyed);
	void *(STDMETHODCALLTYPE * PostRealloc) (IMallocSpy * This, void *pActual, BOOL fSpyed);
	void *(STDMETHODCALLTYPE * PreGetSize) (IMallocSpy * This, void *pRequest, BOOL fSpyed);
	SIZE_T(STDMETHODCALLTYPE * PostGetSize) (IMallocSpy * This, SIZE_T cbActual, BOOL fSpyed);
	void *(STDMETHODCALLTYPE * PreDidAlloc) (IMallocSpy * This, void *pRequest, BOOL fSpyed);
	int (STDMETHODCALLTYPE * PostDidAlloc) (IMallocSpy * This, void *pRequest, BOOL fSpyed, int fActual);
	void (STDMETHODCALLTYPE * PreHeapMinimize) (IMallocSpy * This);
	void (STDMETHODCALLTYPE * PostHeapMinimize) (IMallocSpy * This);
	END_INTERFACE
} IMallocSpyVtbl;
interface IMallocSpy
{
	CONST_VTBL struct IMallocSpyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMallocSpy_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMallocSpy_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMallocSpy_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMallocSpy_PreAlloc(This,cbRequest)    ( (This)->lpVtbl -> PreAlloc(This,cbRequest) )
#define IMallocSpy_PostAlloc(This,pActual)    ( (This)->lpVtbl -> PostAlloc(This,pActual) )
#define IMallocSpy_PreFree(This,pRequest,fSpyed)    ( (This)->lpVtbl -> PreFree(This,pRequest,fSpyed) )
#define IMallocSpy_PostFree(This,fSpyed)    ( (This)->lpVtbl -> PostFree(This,fSpyed) )
#define IMallocSpy_PreRealloc(This,pRequest,cbRequest,ppNewRequest,fSpyed)    ( (This)->lpVtbl -> PreRealloc(This,pRequest,cbRequest,ppNewRequest,fSpyed) )
#define IMallocSpy_PostRealloc(This,pActual,fSpyed)    ( (This)->lpVtbl -> PostRealloc(This,pActual,fSpyed) )
#define IMallocSpy_PreGetSize(This,pRequest,fSpyed)    ( (This)->lpVtbl -> PreGetSize(This,pRequest,fSpyed) )
#define IMallocSpy_PostGetSize(This,cbActual,fSpyed)    ( (This)->lpVtbl -> PostGetSize(This,cbActual,fSpyed) )
#define IMallocSpy_PreDidAlloc(This,pRequest,fSpyed)    ( (This)->lpVtbl -> PreDidAlloc(This,pRequest,fSpyed) )
#define IMallocSpy_PostDidAlloc(This,pRequest,fSpyed,fActual)    ( (This)->lpVtbl -> PostDidAlloc(This,pRequest,fSpyed,fActual) )
#define IMallocSpy_PreHeapMinimize(This)    ( (This)->lpVtbl -> PreHeapMinimize(This) )
#define IMallocSpy_PostHeapMinimize(This)    ( (This)->lpVtbl -> PostHeapMinimize(This) )
#endif
#endif
#ifndef __IStdMarshalInfo_INTERFACE_DEFINED__
#define __IStdMarshalInfo_INTERFACE_DEFINED__
typedef IStdMarshalInfo *LPSTDMARSHALINFO;
extern const IID IID_IStdMarshalInfo;
typedef struct IStdMarshalInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStdMarshalInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStdMarshalInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStdMarshalInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetClassForHandler) (IStdMarshalInfo * This, DWORD dwDestContext, void *pvDestContext, CLSID * pClsid);
	END_INTERFACE
} IStdMarshalInfoVtbl;
interface IStdMarshalInfo
{
	CONST_VTBL struct IStdMarshalInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStdMarshalInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStdMarshalInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IStdMarshalInfo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IStdMarshalInfo_GetClassForHandler(This,dwDestContext,pvDestContext,pClsid)    ( (This)->lpVtbl -> GetClassForHandler(This,dwDestContext,pvDestContext,pClsid) )
#endif
#endif
#ifndef __IExternalConnection_INTERFACE_DEFINED__
#define __IExternalConnection_INTERFACE_DEFINED__
typedef IExternalConnection *LPEXTERNALCONNECTION;
typedef enum tagEXTCONN
{
	EXTCONN_STRONG = 0x1,
	EXTCONN_WEAK = 0x2,
	EXTCONN_CALLABLE = 0x4
} EXTCONN;
extern const IID IID_IExternalConnection;
typedef struct IExternalConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IExternalConnection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IExternalConnection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IExternalConnection * This);
	DWORD(STDMETHODCALLTYPE * AddConnection) (IExternalConnection * This, DWORD extconn, DWORD reserved);
	DWORD(STDMETHODCALLTYPE * ReleaseConnection) (IExternalConnection * This, DWORD extconn, DWORD reserved, BOOL fLastReleaseCloses);
	END_INTERFACE
} IExternalConnectionVtbl;
interface IExternalConnection
{
	CONST_VTBL struct IExternalConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExternalConnection_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExternalConnection_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IExternalConnection_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IExternalConnection_AddConnection(This,extconn,reserved)    ( (This)->lpVtbl -> AddConnection(This,extconn,reserved) )
#define IExternalConnection_ReleaseConnection(This,extconn,reserved,fLastReleaseCloses)    ( (This)->lpVtbl -> ReleaseConnection(This,extconn,reserved,fLastReleaseCloses) )
#endif
#endif
typedef IMultiQI *LPMULTIQI;
typedef struct tagMULTI_QI
{
	const IID *pIID;
	IUnknown *pItf;
	HRESULT hr;
} MULTI_QI;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0006_v0_0_s_ifspec;
#ifndef __IMultiQI_INTERFACE_DEFINED__
#define __IMultiQI_INTERFACE_DEFINED__
extern const IID IID_IMultiQI;
typedef struct IMultiQIVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMultiQI * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMultiQI * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMultiQI * This);
	HRESULT(STDMETHODCALLTYPE * QueryMultipleInterfaces) (IMultiQI * This, ULONG cMQIs, MULTI_QI * pMQIs);
	END_INTERFACE
} IMultiQIVtbl;
interface IMultiQI
{
	CONST_VTBL struct IMultiQIVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMultiQI_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMultiQI_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMultiQI_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMultiQI_QueryMultipleInterfaces(This,cMQIs,pMQIs)    ( (This)->lpVtbl -> QueryMultipleInterfaces(This,cMQIs,pMQIs) )
#endif
#endif
#ifndef __AsyncIMultiQI_INTERFACE_DEFINED__
#define __AsyncIMultiQI_INTERFACE_DEFINED__
extern const IID IID_AsyncIMultiQI;
typedef struct AsyncIMultiQIVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (AsyncIMultiQI * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (AsyncIMultiQI * This);
	ULONG(STDMETHODCALLTYPE * Release) (AsyncIMultiQI * This);
	HRESULT(STDMETHODCALLTYPE * Begin_QueryMultipleInterfaces) (AsyncIMultiQI * This, ULONG cMQIs, MULTI_QI * pMQIs);
	HRESULT(STDMETHODCALLTYPE * Finish_QueryMultipleInterfaces) (AsyncIMultiQI * This, MULTI_QI * pMQIs);
	END_INTERFACE
} AsyncIMultiQIVtbl;
interface AsyncIMultiQI
{
	CONST_VTBL struct AsyncIMultiQIVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncIMultiQI_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncIMultiQI_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define AsyncIMultiQI_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define AsyncIMultiQI_Begin_QueryMultipleInterfaces(This,cMQIs,pMQIs)    ( (This)->lpVtbl -> Begin_QueryMultipleInterfaces(This,cMQIs,pMQIs) )
#define AsyncIMultiQI_Finish_QueryMultipleInterfaces(This,pMQIs)    ( (This)->lpVtbl -> Finish_QueryMultipleInterfaces(This,pMQIs) )
#endif
#endif
#ifndef __IInternalUnknown_INTERFACE_DEFINED__
#define __IInternalUnknown_INTERFACE_DEFINED__
extern const IID IID_IInternalUnknown;
typedef struct IInternalUnknownVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInternalUnknown * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInternalUnknown * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInternalUnknown * This);
	HRESULT(STDMETHODCALLTYPE * QueryInternalInterface) (IInternalUnknown * This, REFIID riid, void **ppv);
	END_INTERFACE
} IInternalUnknownVtbl;
interface IInternalUnknown
{
	CONST_VTBL struct IInternalUnknownVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInternalUnknown_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInternalUnknown_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IInternalUnknown_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IInternalUnknown_QueryInternalInterface(This,riid,ppv)    ( (This)->lpVtbl -> QueryInternalInterface(This,riid,ppv) )
#endif
#endif
#ifndef __IEnumUnknown_INTERFACE_DEFINED__
#define __IEnumUnknown_INTERFACE_DEFINED__
typedef IEnumUnknown *LPENUMUNKNOWN;
extern const IID IID_IEnumUnknown;
typedef struct IEnumUnknownVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumUnknown * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumUnknown * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumUnknown * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumUnknown * This, ULONG celt, IUnknown ** rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumUnknown * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumUnknown * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumUnknown * This, IEnumUnknown ** ppenum);
	END_INTERFACE
} IEnumUnknownVtbl;
interface IEnumUnknown
{
	CONST_VTBL struct IEnumUnknownVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumUnknown_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumUnknown_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumUnknown_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumUnknown_Next(This,celt,rgelt,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumUnknown_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumUnknown_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumUnknown_Clone(This,ppenum)    ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumUnknown_RemoteNext_Proxy(IEnumUnknown *This, ULONG celt, IUnknown **rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumUnknown_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IBindCtx_INTERFACE_DEFINED__
#define __IBindCtx_INTERFACE_DEFINED__
typedef IBindCtx *LPBC;
typedef IBindCtx *LPBINDCTX;
typedef struct tagBIND_OPTS
{
	DWORD cbStruct;
	DWORD grfFlags;
	DWORD grfMode;
	DWORD dwTickCountDeadline;
} BIND_OPTS;
typedef struct tagBIND_OPTS *LPBIND_OPTS;
typedef struct tagBIND_OPTS2
{
	DWORD cbStruct;
	DWORD grfFlags;
	DWORD grfMode;
	DWORD dwTickCountDeadline;
	DWORD dwTrackFlags;
	DWORD dwClassContext;
	LCID locale;
	COSERVERINFO *pServerInfo;
} BIND_OPTS2;
typedef struct tagBIND_OPTS2 *LPBIND_OPTS2;
typedef struct tagBIND_OPTS3
{
	DWORD cbStruct;
	DWORD grfFlags;
	DWORD grfMode;
	DWORD dwTickCountDeadline;
	DWORD dwTrackFlags;
	DWORD dwClassContext;
	LCID locale;
	COSERVERINFO *pServerInfo;
	HWND hwnd;
} BIND_OPTS3;
typedef struct tagBIND_OPTS3 *LPBIND_OPTS3;
typedef enum tagBIND_FLAGS
{
	BIND_MAYBOTHERUSER = 1,
	BIND_JUSTTESTEXISTENCE = 2
} BIND_FLAGS;
extern const IID IID_IBindCtx;
typedef struct IBindCtxVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IBindCtx *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IBindCtx *This);
	ULONG(STDMETHODCALLTYPE *Release) (IBindCtx *This);
	HRESULT(STDMETHODCALLTYPE *RegisterObjectBound) (IBindCtx *This, IUnknown *punk);
	HRESULT(STDMETHODCALLTYPE *RevokeObjectBound) (IBindCtx *This, IUnknown *punk);
	HRESULT(STDMETHODCALLTYPE *ReleaseBoundObjects) (IBindCtx *This);
	HRESULT(STDMETHODCALLTYPE *SetBindOptions) (IBindCtx *This, BIND_OPTS *pbindopts);
	HRESULT(STDMETHODCALLTYPE *GetBindOptions) (IBindCtx *This, BIND_OPTS *pbindopts);
	HRESULT(STDMETHODCALLTYPE *GetRunningObjectTable) (IBindCtx *This, IRunningObjectTable **pprot);
	HRESULT(STDMETHODCALLTYPE *RegisterObjectParam) (IBindCtx *This, LPOLESTR pszKey, IUnknown *punk);
	HRESULT(STDMETHODCALLTYPE *GetObjectParam) (IBindCtx *This, LPOLESTR pszKey, IUnknown **ppunk);
	HRESULT(STDMETHODCALLTYPE *EnumObjectParam) (IBindCtx *This, IEnumString **ppenum);
	HRESULT(STDMETHODCALLTYPE *RevokeObjectParam) (IBindCtx *This, LPOLESTR pszKey);
	END_INTERFACE
} IBindCtxVtbl;
interface IBindCtx
{
	CONST_VTBL struct IBindCtxVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBindCtx_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBindCtx_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IBindCtx_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IBindCtx_RegisterObjectBound(This,punk)    ( (This)->lpVtbl -> RegisterObjectBound(This,punk) )
#define IBindCtx_RevokeObjectBound(This,punk)    ( (This)->lpVtbl -> RevokeObjectBound(This,punk) )
#define IBindCtx_ReleaseBoundObjects(This)    ( (This)->lpVtbl -> ReleaseBoundObjects(This) )
#define IBindCtx_SetBindOptions(This,pbindopts)    ( (This)->lpVtbl -> SetBindOptions(This,pbindopts) )
#define IBindCtx_GetBindOptions(This,pbindopts)    ( (This)->lpVtbl -> GetBindOptions(This,pbindopts) )
#define IBindCtx_GetRunningObjectTable(This,pprot)    ( (This)->lpVtbl -> GetRunningObjectTable(This,pprot) )
#define IBindCtx_RegisterObjectParam(This,pszKey,punk)    ( (This)->lpVtbl -> RegisterObjectParam(This,pszKey,punk) )
#define IBindCtx_GetObjectParam(This,pszKey,ppunk)    ( (This)->lpVtbl -> GetObjectParam(This,pszKey,ppunk) )
#define IBindCtx_EnumObjectParam(This,ppenum)    ( (This)->lpVtbl -> EnumObjectParam(This,ppenum) )
#define IBindCtx_RevokeObjectParam(This,pszKey)    ( (This)->lpVtbl -> RevokeObjectParam(This,pszKey) )
#endif
HRESULT STDMETHODCALLTYPE IBindCtx_RemoteSetBindOptions_Proxy(IBindCtx *This, BIND_OPTS2 *pbindopts);
void __RPC_STUB IBindCtx_RemoteSetBindOptions_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IBindCtx_RemoteGetBindOptions_Proxy(IBindCtx *This, BIND_OPTS2 *pbindopts);
void __RPC_STUB IBindCtx_RemoteGetBindOptions_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumMoniker_INTERFACE_DEFINED__
#define __IEnumMoniker_INTERFACE_DEFINED__
typedef IEnumMoniker *LPENUMMONIKER;
extern const IID IID_IEnumMoniker;
typedef struct IEnumMonikerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumMoniker *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumMoniker *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumMoniker *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumMoniker *This, ULONG celt, IMoniker **rgelt, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumMoniker *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumMoniker *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumMoniker *This, IEnumMoniker **ppenum);
	END_INTERFACE
} IEnumMonikerVtbl;
interface IEnumMoniker
{
	CONST_VTBL struct IEnumMonikerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumMoniker_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumMoniker_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumMoniker_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumMoniker_Next(This,celt,rgelt,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumMoniker_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumMoniker_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumMoniker_Clone(This,ppenum)    ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumMoniker_RemoteNext_Proxy(IEnumMoniker *This, ULONG celt, IMoniker **rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumMoniker_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IRunnableObject_INTERFACE_DEFINED__
#define __IRunnableObject_INTERFACE_DEFINED__
typedef IRunnableObject *LPRUNNABLEOBJECT;
extern const IID IID_IRunnableObject;
typedef struct IRunnableObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRunnableObject *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRunnableObject *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRunnableObject *This);
	HRESULT(STDMETHODCALLTYPE *GetRunningClass) (IRunnableObject *This, LPCLSID lpClsid);
	HRESULT(STDMETHODCALLTYPE *Run) (IRunnableObject *This, LPBINDCTX pbc);
	BOOL(STDMETHODCALLTYPE *IsRunning) (IRunnableObject *This);
	HRESULT(STDMETHODCALLTYPE *LockRunning) (IRunnableObject *This, BOOL fLock, BOOL fLastUnlockCloses);
	HRESULT(STDMETHODCALLTYPE *SetContainedObject) (IRunnableObject *This, BOOL fContained);
	END_INTERFACE
} IRunnableObjectVtbl;
interface IRunnableObject
{
	CONST_VTBL struct IRunnableObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRunnableObject_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRunnableObject_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRunnableObject_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRunnableObject_GetRunningClass(This,lpClsid)    ( (This)->lpVtbl -> GetRunningClass(This,lpClsid) )
#define IRunnableObject_Run(This,pbc)    ( (This)->lpVtbl -> Run(This,pbc) )
#define IRunnableObject_IsRunning(This)    ( (This)->lpVtbl -> IsRunning(This) )
#define IRunnableObject_LockRunning(This,fLock,fLastUnlockCloses)    ( (This)->lpVtbl -> LockRunning(This,fLock,fLastUnlockCloses) )
#define IRunnableObject_SetContainedObject(This,fContained)    ( (This)->lpVtbl -> SetContainedObject(This,fContained) )
#endif
HRESULT STDMETHODCALLTYPE IRunnableObject_RemoteIsRunning_Proxy(IRunnableObject *This);
void __RPC_STUB IRunnableObject_RemoteIsRunning_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IRunningObjectTable_INTERFACE_DEFINED__
#define __IRunningObjectTable_INTERFACE_DEFINED__
typedef IRunningObjectTable *LPRUNNINGOBJECTTABLE;
extern const IID IID_IRunningObjectTable;
typedef struct IRunningObjectTableVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRunningObjectTable *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRunningObjectTable *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRunningObjectTable *This);
	HRESULT(STDMETHODCALLTYPE *Register) (IRunningObjectTable *This, DWORD grfFlags, IUnknown *punkObject, IMoniker *pmkObjectName, DWORD *pdwRegister);
	HRESULT(STDMETHODCALLTYPE *Revoke) (IRunningObjectTable *This, DWORD dwRegister);
	HRESULT(STDMETHODCALLTYPE *IsRunning) (IRunningObjectTable *This, IMoniker *pmkObjectName);
	HRESULT(STDMETHODCALLTYPE *GetObject) (IRunningObjectTable *This, IMoniker *pmkObjectName, IUnknown **ppunkObject);
	HRESULT(STDMETHODCALLTYPE *NoteChangeTime) (IRunningObjectTable *This, DWORD dwRegister, FILETIME *pfiletime);
	HRESULT(STDMETHODCALLTYPE *GetTimeOfLastChange) (IRunningObjectTable *This, IMoniker *pmkObjectName, FILETIME *pfiletime);
	HRESULT(STDMETHODCALLTYPE *EnumRunning) (IRunningObjectTable *This, IEnumMoniker **ppenumMoniker);
	END_INTERFACE
} IRunningObjectTableVtbl;
interface IRunningObjectTable
{
	CONST_VTBL struct IRunningObjectTableVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRunningObjectTable_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRunningObjectTable_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRunningObjectTable_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRunningObjectTable_Register(This,grfFlags,punkObject,pmkObjectName,pdwRegister)    ( (This)->lpVtbl -> Register(This,grfFlags,punkObject,pmkObjectName,pdwRegister) )
#define IRunningObjectTable_Revoke(This,dwRegister)    ( (This)->lpVtbl -> Revoke(This,dwRegister) )
#define IRunningObjectTable_IsRunning(This,pmkObjectName)    ( (This)->lpVtbl -> IsRunning(This,pmkObjectName) )
#define IRunningObjectTable_GetObject(This,pmkObjectName,ppunkObject)    ( (This)->lpVtbl -> GetObject(This,pmkObjectName,ppunkObject) )
#define IRunningObjectTable_NoteChangeTime(This,dwRegister,pfiletime)    ( (This)->lpVtbl -> NoteChangeTime(This,dwRegister,pfiletime) )
#define IRunningObjectTable_GetTimeOfLastChange(This,pmkObjectName,pfiletime)    ( (This)->lpVtbl -> GetTimeOfLastChange(This,pmkObjectName,pfiletime) )
#define IRunningObjectTable_EnumRunning(This,ppenumMoniker)    ( (This)->lpVtbl -> EnumRunning(This,ppenumMoniker) )
#endif
#endif
#ifndef __IPersist_INTERFACE_DEFINED__
#define __IPersist_INTERFACE_DEFINED__
typedef IPersist *LPPERSIST;
extern const IID IID_IPersist;
typedef struct IPersistVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPersist *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPersist *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPersist *This);
	HRESULT(STDMETHODCALLTYPE *GetClassID) (IPersist *This, CLSID *pClassID);
	END_INTERFACE
} IPersistVtbl;
interface IPersist
{
	CONST_VTBL struct IPersistVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPersist_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPersist_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPersist_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPersist_GetClassID(This,pClassID)    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
#endif
#endif
#ifndef __IPersistStream_INTERFACE_DEFINED__
#define __IPersistStream_INTERFACE_DEFINED__
typedef IPersistStream *LPPERSISTSTREAM;
extern const IID IID_IPersistStream;
typedef struct IPersistStreamVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPersistStream *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPersistStream *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPersistStream *This);
	HRESULT(STDMETHODCALLTYPE *GetClassID) (IPersistStream *This, CLSID *pClassID);
	HRESULT(STDMETHODCALLTYPE *IsDirty) (IPersistStream *This);
	HRESULT(STDMETHODCALLTYPE *Load) (IPersistStream *This, IStream *pStm);
	HRESULT(STDMETHODCALLTYPE *Save) (IPersistStream *This, IStream *pStm, BOOL fClearDirty);
	HRESULT(STDMETHODCALLTYPE *GetSizeMax) (IPersistStream *This, ULARGE_INTEGER *pcbSize);
	END_INTERFACE
} IPersistStreamVtbl;
interface IPersistStream
{
	CONST_VTBL struct IPersistStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPersistStream_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPersistStream_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPersistStream_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPersistStream_GetClassID(This,pClassID)    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
#define IPersistStream_IsDirty(This)    ( (This)->lpVtbl -> IsDirty(This) )
#define IPersistStream_Load(This,pStm)    ( (This)->lpVtbl -> Load(This,pStm) )
#define IPersistStream_Save(This,pStm,fClearDirty)    ( (This)->lpVtbl -> Save(This,pStm,fClearDirty) )
#define IPersistStream_GetSizeMax(This,pcbSize)    ( (This)->lpVtbl -> GetSizeMax(This,pcbSize) )
#endif
#endif
#ifndef __IMoniker_INTERFACE_DEFINED__
#define __IMoniker_INTERFACE_DEFINED__
typedef IMoniker *LPMONIKER;
typedef enum tagMKSYS
{
	MKSYS_NONE = 0,
	MKSYS_GENERICCOMPOSITE = 1,
	MKSYS_FILEMONIKER = 2,
	MKSYS_ANTIMONIKER = 3,
	MKSYS_ITEMMONIKER = 4,
	MKSYS_POINTERMONIKER = 5,
	MKSYS_CLASSMONIKER = 7,
	MKSYS_OBJREFMONIKER = 8,
	MKSYS_SESSIONMONIKER = 9,
	MKSYS_LUAMONIKER = 10
} MKSYS;
typedef enum tagMKREDUCE
{
	MKRREDUCE_ONE = (3 << 16),
	MKRREDUCE_TOUSER = (2 << 16),
	MKRREDUCE_THROUGHUSER = (1 << 16),
	MKRREDUCE_ALL = 0
} MKRREDUCE;
extern const IID IID_IMoniker;
typedef struct IMonikerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMoniker *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMoniker *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMoniker *This);
	HRESULT(STDMETHODCALLTYPE *GetClassID) (IMoniker *This, CLSID *pClassID);
	HRESULT(STDMETHODCALLTYPE *IsDirty) (IMoniker *This);
	HRESULT(STDMETHODCALLTYPE *Load) (IMoniker *This, IStream *pStm);
	HRESULT(STDMETHODCALLTYPE *Save) (IMoniker *This, IStream *pStm, BOOL fClearDirty);
	HRESULT(STDMETHODCALLTYPE *GetSizeMax) (IMoniker *This, ULARGE_INTEGER *pcbSize);
	HRESULT(STDMETHODCALLTYPE *BindToObject) (IMoniker *This, IBindCtx *pbc, IMoniker *pmkToLeft, REFIID riidResult, void **ppvResult);
	HRESULT(STDMETHODCALLTYPE *BindToStorage) (IMoniker *This, IBindCtx *pbc, IMoniker *pmkToLeft, REFIID riid, void **ppvObj);
	HRESULT(STDMETHODCALLTYPE *Reduce) (IMoniker *This, IBindCtx *pbc, DWORD dwReduceHowFar, IMoniker **ppmkToLeft, IMoniker **ppmkReduced);
	HRESULT(STDMETHODCALLTYPE *ComposeWith) (IMoniker *This, IMoniker *pmkRight, BOOL fOnlyIfNotGeneric, IMoniker **ppmkComposite);
	HRESULT(STDMETHODCALLTYPE *Enum) (IMoniker *This, BOOL fForward, IEnumMoniker **ppenumMoniker);
	HRESULT(STDMETHODCALLTYPE *IsEqual) (IMoniker *This, IMoniker *pmkOtherMoniker);
	HRESULT(STDMETHODCALLTYPE *Hash) (IMoniker *This, DWORD *pdwHash);
	HRESULT(STDMETHODCALLTYPE *IsRunning) (IMoniker *This, IBindCtx *pbc, IMoniker *pmkToLeft, IMoniker *pmkNewlyRunning);
	HRESULT(STDMETHODCALLTYPE *GetTimeOfLastChange) (IMoniker *This, IBindCtx *pbc, IMoniker *pmkToLeft, FILETIME *pFileTime);
	HRESULT(STDMETHODCALLTYPE *Inverse) (IMoniker *This, IMoniker **ppmk);
	HRESULT(STDMETHODCALLTYPE *CommonPrefixWith) (IMoniker *This, IMoniker *pmkOther, IMoniker **ppmkPrefix);
	HRESULT(STDMETHODCALLTYPE *RelativePathTo) (IMoniker *This, IMoniker *pmkOther, IMoniker **ppmkRelPath);
	HRESULT(STDMETHODCALLTYPE *GetDisplayName) (IMoniker *This, IBindCtx *pbc, IMoniker *pmkToLeft, LPOLESTR *ppszDisplayName);
	HRESULT(STDMETHODCALLTYPE *ParseDisplayName) (IMoniker *This, IBindCtx *pbc, IMoniker *pmkToLeft, LPOLESTR pszDisplayName, ULONG *pchEaten, IMoniker **ppmkOut);
	HRESULT(STDMETHODCALLTYPE *IsSystemMoniker) (IMoniker *This, DWORD *pdwMksys);
	END_INTERFACE
} IMonikerVtbl;
interface IMoniker
{
	CONST_VTBL struct IMonikerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMoniker_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMoniker_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMoniker_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMoniker_GetClassID(This,pClassID)    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
#define IMoniker_IsDirty(This)    ( (This)->lpVtbl -> IsDirty(This) )
#define IMoniker_Load(This,pStm)    ( (This)->lpVtbl -> Load(This,pStm) )
#define IMoniker_Save(This,pStm,fClearDirty)    ( (This)->lpVtbl -> Save(This,pStm,fClearDirty) )
#define IMoniker_GetSizeMax(This,pcbSize)    ( (This)->lpVtbl -> GetSizeMax(This,pcbSize) )
#define IMoniker_BindToObject(This,pbc,pmkToLeft,riidResult,ppvResult)    ( (This)->lpVtbl -> BindToObject(This,pbc,pmkToLeft,riidResult,ppvResult) )
#define IMoniker_BindToStorage(This,pbc,pmkToLeft,riid,ppvObj)    ( (This)->lpVtbl -> BindToStorage(This,pbc,pmkToLeft,riid,ppvObj) )
#define IMoniker_Reduce(This,pbc,dwReduceHowFar,ppmkToLeft,ppmkReduced)    ( (This)->lpVtbl -> Reduce(This,pbc,dwReduceHowFar,ppmkToLeft,ppmkReduced) )
#define IMoniker_ComposeWith(This,pmkRight,fOnlyIfNotGeneric,ppmkComposite)    ( (This)->lpVtbl -> ComposeWith(This,pmkRight,fOnlyIfNotGeneric,ppmkComposite) )
#define IMoniker_Enum(This,fForward,ppenumMoniker)    ( (This)->lpVtbl -> Enum(This,fForward,ppenumMoniker) )
#define IMoniker_IsEqual(This,pmkOtherMoniker)    ( (This)->lpVtbl -> IsEqual(This,pmkOtherMoniker) )
#define IMoniker_Hash(This,pdwHash)    ( (This)->lpVtbl -> Hash(This,pdwHash) )
#define IMoniker_IsRunning(This,pbc,pmkToLeft,pmkNewlyRunning)    ( (This)->lpVtbl -> IsRunning(This,pbc,pmkToLeft,pmkNewlyRunning) )
#define IMoniker_GetTimeOfLastChange(This,pbc,pmkToLeft,pFileTime)    ( (This)->lpVtbl -> GetTimeOfLastChange(This,pbc,pmkToLeft,pFileTime) )
#define IMoniker_Inverse(This,ppmk)    ( (This)->lpVtbl -> Inverse(This,ppmk) )
#define IMoniker_CommonPrefixWith(This,pmkOther,ppmkPrefix)    ( (This)->lpVtbl -> CommonPrefixWith(This,pmkOther,ppmkPrefix) )
#define IMoniker_RelativePathTo(This,pmkOther,ppmkRelPath)    ( (This)->lpVtbl -> RelativePathTo(This,pmkOther,ppmkRelPath) )
#define IMoniker_GetDisplayName(This,pbc,pmkToLeft,ppszDisplayName)    ( (This)->lpVtbl -> GetDisplayName(This,pbc,pmkToLeft,ppszDisplayName) )
#define IMoniker_ParseDisplayName(This,pbc,pmkToLeft,pszDisplayName,pchEaten,ppmkOut)    ( (This)->lpVtbl -> ParseDisplayName(This,pbc,pmkToLeft,pszDisplayName,pchEaten,ppmkOut) )
#define IMoniker_IsSystemMoniker(This,pdwMksys)    ( (This)->lpVtbl -> IsSystemMoniker(This,pdwMksys) )
#endif
HRESULT STDMETHODCALLTYPE IMoniker_RemoteBindToObject_Proxy(IMoniker *This, IBindCtx *pbc, IMoniker *pmkToLeft, REFIID riidResult, IUnknown **ppvResult);
void __RPC_STUB IMoniker_RemoteBindToObject_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMoniker_RemoteBindToStorage_Proxy(IMoniker *This, IBindCtx *pbc, IMoniker *pmkToLeft, REFIID riid, IUnknown **ppvObj);
void __RPC_STUB IMoniker_RemoteBindToStorage_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IROTData_INTERFACE_DEFINED__
#define __IROTData_INTERFACE_DEFINED__
extern const IID IID_IROTData;
typedef struct IROTDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IROTData *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IROTData *This);
	ULONG(STDMETHODCALLTYPE *Release) (IROTData *This);
	HRESULT(STDMETHODCALLTYPE *GetComparisonData) (IROTData *This, byte *pbData, ULONG cbMax, ULONG *pcbData);
	END_INTERFACE
} IROTDataVtbl;
interface IROTData
{
	CONST_VTBL struct IROTDataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IROTData_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IROTData_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IROTData_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IROTData_GetComparisonData(This,pbData,cbMax,pcbData)    ( (This)->lpVtbl -> GetComparisonData(This,pbData,cbMax,pcbData) )
#endif
#endif
#ifndef __IEnumString_INTERFACE_DEFINED__
#define __IEnumString_INTERFACE_DEFINED__
typedef IEnumString *LPENUMSTRING;
extern const IID IID_IEnumString;
typedef struct IEnumStringVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumString *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumString *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumString *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumString *This, ULONG celt, LPOLESTR *rgelt, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumString *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumString *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumString *This, IEnumString **ppenum);
	END_INTERFACE
} IEnumStringVtbl;
interface IEnumString
{
	CONST_VTBL struct IEnumStringVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumString_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumString_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumString_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumString_Next(This,celt,rgelt,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumString_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumString_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumString_Clone(This,ppenum)    ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumString_RemoteNext_Proxy(IEnumString *This, ULONG celt, LPOLESTR *rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumString_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISequentialStream_INTERFACE_DEFINED__
#define __ISequentialStream_INTERFACE_DEFINED__
extern const IID IID_ISequentialStream;
typedef struct ISequentialStreamVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISequentialStream *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISequentialStream *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISequentialStream *This);
	HRESULT(STDMETHODCALLTYPE *Read) (ISequentialStream *This, void *pv, ULONG cb, ULONG *pcbRead);
	HRESULT(STDMETHODCALLTYPE *Write) (ISequentialStream *This, const void *pv, ULONG cb, ULONG *pcbWritten);
	END_INTERFACE
} ISequentialStreamVtbl;
interface ISequentialStream
{
	CONST_VTBL struct ISequentialStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISequentialStream_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISequentialStream_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ISequentialStream_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ISequentialStream_Read(This,pv,cb,pcbRead)    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
#define ISequentialStream_Write(This,pv,cb,pcbWritten)    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
#endif
HRESULT STDMETHODCALLTYPE ISequentialStream_RemoteRead_Proxy(ISequentialStream *This, byte *pv, ULONG cb, ULONG *pcbRead);
void __RPC_STUB ISequentialStream_RemoteRead_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISequentialStream_RemoteWrite_Proxy(ISequentialStream *This, const byte *pv, ULONG cb, ULONG *pcbWritten);
void __RPC_STUB ISequentialStream_RemoteWrite_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IStream_INTERFACE_DEFINED__
#define __IStream_INTERFACE_DEFINED__
typedef IStream *LPSTREAM;
typedef struct tagSTATSTG
{
	LPOLESTR pwcsName;
	DWORD type;
	ULARGE_INTEGER cbSize;
	FILETIME mtime;
	FILETIME ctime;
	FILETIME atime;
	DWORD grfMode;
	DWORD grfLocksSupported;
	CLSID clsid;
	DWORD grfStateBits;
	DWORD reserved;
} STATSTG;
typedef enum tagSTGTY
{
	STGTY_STORAGE = 1,
	STGTY_STREAM = 2,
	STGTY_LOCKBYTES = 3,
	STGTY_PROPERTY = 4
} STGTY;
typedef enum tagSTREAM_SEEK
{ STREAM_SEEK_SET = 0,
	STREAM_SEEK_CUR = 1,
	STREAM_SEEK_END = 2
} STREAM_SEEK;
typedef enum tagLOCKTYPE
{
	LOCK_WRITE = 1,
	LOCK_EXCLUSIVE = 2,
	LOCK_ONLYONCE = 4
} LOCKTYPE;
extern const IID IID_IStream;
typedef struct IStreamVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IStream *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IStream *This);
	ULONG(STDMETHODCALLTYPE *Release) (IStream *This);
	HRESULT(STDMETHODCALLTYPE *Read) (IStream *This, void *pv, ULONG cb, ULONG *pcbRead);
	HRESULT(STDMETHODCALLTYPE *Write) (IStream *This, const void *pv, ULONG cb, ULONG *pcbWritten);
	HRESULT(STDMETHODCALLTYPE *Seek) (IStream *This, LARGE_INTEGER dlibMove, DWORD dwOrigin, ULARGE_INTEGER *plibNewPosition);
	HRESULT(STDMETHODCALLTYPE *SetSize) (IStream *This, ULARGE_INTEGER libNewSize);
	HRESULT(STDMETHODCALLTYPE *CopyTo) (IStream *This, IStream *pstm, ULARGE_INTEGER cb, ULARGE_INTEGER *pcbRead, ULARGE_INTEGER *pcbWritten);
	HRESULT(STDMETHODCALLTYPE *Commit) (IStream *This, DWORD grfCommitFlags);
	HRESULT(STDMETHODCALLTYPE *Revert) (IStream *This);
	HRESULT(STDMETHODCALLTYPE *LockRegion) (IStream *This, ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
	HRESULT(STDMETHODCALLTYPE *UnlockRegion) (IStream *This, ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
	HRESULT(STDMETHODCALLTYPE *Stat) (IStream *This, STATSTG *pstatstg, DWORD grfStatFlag);
	HRESULT(STDMETHODCALLTYPE *Clone) (IStream *This, IStream **ppstm);
	END_INTERFACE
} IStreamVtbl;
interface IStream
{
	CONST_VTBL struct IStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStream_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStream_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IStream_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IStream_Read(This,pv,cb,pcbRead)    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
#define IStream_Write(This,pv,cb,pcbWritten)    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
#define IStream_Seek(This,dlibMove,dwOrigin,plibNewPosition)    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
#define IStream_SetSize(This,libNewSize)    ( (This)->lpVtbl -> SetSize(This,libNewSize) )
#define IStream_CopyTo(This,pstm,cb,pcbRead,pcbWritten)    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) )
#define IStream_Commit(This,grfCommitFlags)    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
#define IStream_Revert(This)    ( (This)->lpVtbl -> Revert(This) )
#define IStream_LockRegion(This,libOffset,cb,dwLockType)    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
#define IStream_UnlockRegion(This,libOffset,cb,dwLockType)    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
#define IStream_Stat(This,pstatstg,grfStatFlag)    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
#define IStream_Clone(This,ppstm)    ( (This)->lpVtbl -> Clone(This,ppstm) )
#endif
HRESULT STDMETHODCALLTYPE IStream_RemoteSeek_Proxy(IStream *This, LARGE_INTEGER dlibMove, DWORD dwOrigin, ULARGE_INTEGER *plibNewPosition);
void __RPC_STUB IStream_RemoteSeek_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IStream_RemoteCopyTo_Proxy(IStream *This, IStream *pstm, ULARGE_INTEGER cb, ULARGE_INTEGER *pcbRead, ULARGE_INTEGER *pcbWritten);
void __RPC_STUB IStream_RemoteCopyTo_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumSTATSTG_INTERFACE_DEFINED__
#define __IEnumSTATSTG_INTERFACE_DEFINED__
typedef IEnumSTATSTG *LPENUMSTATSTG;
extern const IID IID_IEnumSTATSTG;
typedef struct IEnumSTATSTGVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumSTATSTG *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumSTATSTG *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumSTATSTG *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumSTATSTG *This, ULONG celt, STATSTG *rgelt, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumSTATSTG *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumSTATSTG *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumSTATSTG *This, IEnumSTATSTG **ppenum);
	END_INTERFACE
} IEnumSTATSTGVtbl;
interface IEnumSTATSTG
{
	CONST_VTBL struct IEnumSTATSTGVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSTATSTG_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSTATSTG_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSTATSTG_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumSTATSTG_Next(This,celt,rgelt,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumSTATSTG_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumSTATSTG_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumSTATSTG_Clone(This,ppenum)    ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumSTATSTG_RemoteNext_Proxy(IEnumSTATSTG *This, ULONG celt, STATSTG *rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumSTATSTG_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IStorage_INTERFACE_DEFINED__
#define __IStorage_INTERFACE_DEFINED__
typedef IStorage *LPSTORAGE;
typedef struct tagRemSNB
{
	unsigned long ulCntStr;
	unsigned long ulCntChar;
	OLECHAR rgString[1];
} RemSNB;
typedef RemSNB *wireSNB;
typedef LPOLESTR *SNB;
extern const IID IID_IStorage;
typedef struct IStorageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IStorage *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IStorage *This);
	ULONG(STDMETHODCALLTYPE *Release) (IStorage *This);
	HRESULT(STDMETHODCALLTYPE *CreateStream) (IStorage *This, const OLECHAR *pwcsName, DWORD grfMode, DWORD reserved1, DWORD reserved2, IStream **ppstm);
	HRESULT(STDMETHODCALLTYPE *OpenStream) (IStorage *This, const OLECHAR *pwcsName, void *reserved1, DWORD grfMode, DWORD reserved2, IStream **ppstm);
	HRESULT(STDMETHODCALLTYPE *CreateStorage) (IStorage *This, const OLECHAR *pwcsName, DWORD grfMode, DWORD reserved1, DWORD reserved2, IStorage **ppstg);
	HRESULT(STDMETHODCALLTYPE *OpenStorage) (IStorage *This, const OLECHAR *pwcsName, IStorage *pstgPriority, DWORD grfMode, SNB snbExclude, DWORD reserved, IStorage **ppstg);
	HRESULT(STDMETHODCALLTYPE *CopyTo) (IStorage *This, DWORD ciidExclude, const IID *rgiidExclude, SNB snbExclude, IStorage *pstgDest);
	HRESULT(STDMETHODCALLTYPE *MoveElementTo) (IStorage *This, const OLECHAR *pwcsName, IStorage *pstgDest, const OLECHAR *pwcsNewName, DWORD grfFlags);
	HRESULT(STDMETHODCALLTYPE *Commit) (IStorage *This, DWORD grfCommitFlags);
	HRESULT(STDMETHODCALLTYPE *Revert) (IStorage *This);
	HRESULT(STDMETHODCALLTYPE *EnumElements) (IStorage *This, DWORD reserved1, void *reserved2, DWORD reserved3, IEnumSTATSTG **ppenum);
	HRESULT(STDMETHODCALLTYPE *DestroyElement) (IStorage *This, const OLECHAR *pwcsName);
	HRESULT(STDMETHODCALLTYPE *RenameElement) (IStorage *This, const OLECHAR *pwcsOldName, const OLECHAR *pwcsNewName);
	HRESULT(STDMETHODCALLTYPE *SetElementTimes) (IStorage *This, const OLECHAR *pwcsName, const FILETIME *pctime, const FILETIME *patime, const FILETIME *pmtime);
	HRESULT(STDMETHODCALLTYPE *SetClass) (IStorage *This, REFCLSID clsid);
	HRESULT(STDMETHODCALLTYPE *SetStateBits) (IStorage *This, DWORD grfStateBits, DWORD grfMask);
	HRESULT(STDMETHODCALLTYPE *Stat) (IStorage *This, STATSTG *pstatstg, DWORD grfStatFlag);
	END_INTERFACE
} IStorageVtbl;
interface IStorage
{
	CONST_VTBL struct IStorageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStorage_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStorage_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IStorage_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IStorage_CreateStream(This,pwcsName,grfMode,reserved1,reserved2,ppstm)    ( (This)->lpVtbl -> CreateStream(This,pwcsName,grfMode,reserved1,reserved2,ppstm) )
#define IStorage_OpenStream(This,pwcsName,reserved1,grfMode,reserved2,ppstm)    ( (This)->lpVtbl -> OpenStream(This,pwcsName,reserved1,grfMode,reserved2,ppstm) )
#define IStorage_CreateStorage(This,pwcsName,grfMode,reserved1,reserved2,ppstg)    ( (This)->lpVtbl -> CreateStorage(This,pwcsName,grfMode,reserved1,reserved2,ppstg) )
#define IStorage_OpenStorage(This,pwcsName,pstgPriority,grfMode,snbExclude,reserved,ppstg)    ( (This)->lpVtbl -> OpenStorage(This,pwcsName,pstgPriority,grfMode,snbExclude,reserved,ppstg) )
#define IStorage_CopyTo(This,ciidExclude,rgiidExclude,snbExclude,pstgDest)    ( (This)->lpVtbl -> CopyTo(This,ciidExclude,rgiidExclude,snbExclude,pstgDest) )
#define IStorage_MoveElementTo(This,pwcsName,pstgDest,pwcsNewName,grfFlags)    ( (This)->lpVtbl -> MoveElementTo(This,pwcsName,pstgDest,pwcsNewName,grfFlags) )
#define IStorage_Commit(This,grfCommitFlags)    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
#define IStorage_Revert(This)    ( (This)->lpVtbl -> Revert(This) )
#define IStorage_EnumElements(This,reserved1,reserved2,reserved3,ppenum)    ( (This)->lpVtbl -> EnumElements(This,reserved1,reserved2,reserved3,ppenum) )
#define IStorage_DestroyElement(This,pwcsName)    ( (This)->lpVtbl -> DestroyElement(This,pwcsName) )
#define IStorage_RenameElement(This,pwcsOldName,pwcsNewName)    ( (This)->lpVtbl -> RenameElement(This,pwcsOldName,pwcsNewName) )
#define IStorage_SetElementTimes(This,pwcsName,pctime,patime,pmtime)    ( (This)->lpVtbl -> SetElementTimes(This,pwcsName,pctime,patime,pmtime) )
#define IStorage_SetClass(This,clsid)    ( (This)->lpVtbl -> SetClass(This,clsid) )
#define IStorage_SetStateBits(This,grfStateBits,grfMask)    ( (This)->lpVtbl -> SetStateBits(This,grfStateBits,grfMask) )
#define IStorage_Stat(This,pstatstg,grfStatFlag)    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
#endif
HRESULT STDMETHODCALLTYPE IStorage_RemoteOpenStream_Proxy(IStorage *This, const OLECHAR *pwcsName, unsigned long cbReserved1, byte *reserved1, DWORD grfMode, DWORD reserved2, IStream **ppstm);
void __RPC_STUB IStorage_RemoteOpenStream_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IStorage_RemoteCopyTo_Proxy(IStorage *This, DWORD ciidExclude, const IID *rgiidExclude, SNB snbExclude, IStorage *pstgDest);
void __RPC_STUB IStorage_RemoteCopyTo_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IStorage_RemoteEnumElements_Proxy(IStorage *This, DWORD reserved1, unsigned long cbReserved2, byte *reserved2, DWORD reserved3, IEnumSTATSTG **ppenum);
void __RPC_STUB IStorage_RemoteEnumElements_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IPersistFile_INTERFACE_DEFINED__
#define __IPersistFile_INTERFACE_DEFINED__
typedef IPersistFile *LPPERSISTFILE;
extern const IID IID_IPersistFile;
typedef struct IPersistFileVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPersistFile *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPersistFile *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPersistFile *This);
	HRESULT(STDMETHODCALLTYPE *GetClassID) (IPersistFile *This, CLSID *pClassID);
	HRESULT(STDMETHODCALLTYPE *IsDirty) (IPersistFile *This);
	HRESULT(STDMETHODCALLTYPE *Load) (IPersistFile *This, LPCOLESTR pszFileName, DWORD dwMode);
	HRESULT(STDMETHODCALLTYPE *Save) (IPersistFile *This, LPCOLESTR pszFileName, BOOL fRemember);
	HRESULT(STDMETHODCALLTYPE *SaveCompleted) (IPersistFile *This, LPCOLESTR pszFileName);
	HRESULT(STDMETHODCALLTYPE *GetCurFile) (IPersistFile *This, LPOLESTR *ppszFileName);
	END_INTERFACE
} IPersistFileVtbl;
interface IPersistFile
{
	CONST_VTBL struct IPersistFileVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPersistFile_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPersistFile_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPersistFile_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPersistFile_GetClassID(This,pClassID)    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
#define IPersistFile_IsDirty(This)    ( (This)->lpVtbl -> IsDirty(This) )
#define IPersistFile_Load(This,pszFileName,dwMode)    ( (This)->lpVtbl -> Load(This,pszFileName,dwMode) )
#define IPersistFile_Save(This,pszFileName,fRemember)    ( (This)->lpVtbl -> Save(This,pszFileName,fRemember) )
#define IPersistFile_SaveCompleted(This,pszFileName)    ( (This)->lpVtbl -> SaveCompleted(This,pszFileName) )
#define IPersistFile_GetCurFile(This,ppszFileName)    ( (This)->lpVtbl -> GetCurFile(This,ppszFileName) )
#endif
#endif
#ifndef __IPersistStorage_INTERFACE_DEFINED__
#define __IPersistStorage_INTERFACE_DEFINED__
typedef IPersistStorage *LPPERSISTSTORAGE;
extern const IID IID_IPersistStorage;
typedef struct IPersistStorageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPersistStorage *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPersistStorage *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPersistStorage *This);
	HRESULT(STDMETHODCALLTYPE *GetClassID) (IPersistStorage *This, CLSID *pClassID);
	HRESULT(STDMETHODCALLTYPE *IsDirty) (IPersistStorage *This);
	HRESULT(STDMETHODCALLTYPE *InitNew) (IPersistStorage *This, IStorage *pStg);
	HRESULT(STDMETHODCALLTYPE *Load) (IPersistStorage *This, IStorage *pStg);
	HRESULT(STDMETHODCALLTYPE *Save) (IPersistStorage *This, IStorage *pStgSave, BOOL fSameAsLoad);
	HRESULT(STDMETHODCALLTYPE *SaveCompleted) (IPersistStorage *This, IStorage *pStgNew);
	HRESULT(STDMETHODCALLTYPE *HandsOffStorage) (IPersistStorage *This);
	END_INTERFACE
} IPersistStorageVtbl;
interface IPersistStorage
{
	CONST_VTBL struct IPersistStorageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPersistStorage_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPersistStorage_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPersistStorage_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPersistStorage_GetClassID(This,pClassID)    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
#define IPersistStorage_IsDirty(This)    ( (This)->lpVtbl -> IsDirty(This) )
#define IPersistStorage_InitNew(This,pStg)    ( (This)->lpVtbl -> InitNew(This,pStg) )
#define IPersistStorage_Load(This,pStg)    ( (This)->lpVtbl -> Load(This,pStg) )
#define IPersistStorage_Save(This,pStgSave,fSameAsLoad)    ( (This)->lpVtbl -> Save(This,pStgSave,fSameAsLoad) )
#define IPersistStorage_SaveCompleted(This,pStgNew)    ( (This)->lpVtbl -> SaveCompleted(This,pStgNew) )
#define IPersistStorage_HandsOffStorage(This)    ( (This)->lpVtbl -> HandsOffStorage(This) )
#endif
#endif
#ifndef __ILockBytes_INTERFACE_DEFINED__
#define __ILockBytes_INTERFACE_DEFINED__
typedef ILockBytes *LPLOCKBYTES;
extern const IID IID_ILockBytes;
typedef struct ILockBytesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ILockBytes *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ILockBytes *This);
	ULONG(STDMETHODCALLTYPE *Release) (ILockBytes *This);
	HRESULT(STDMETHODCALLTYPE *ReadAt) (ILockBytes *This, ULARGE_INTEGER ulOffset, void *pv, ULONG cb, ULONG *pcbRead);
	HRESULT(STDMETHODCALLTYPE *WriteAt) (ILockBytes *This, ULARGE_INTEGER ulOffset, const void *pv, ULONG cb, ULONG *pcbWritten);
	HRESULT(STDMETHODCALLTYPE *Flush) (ILockBytes *This);
	HRESULT(STDMETHODCALLTYPE *SetSize) (ILockBytes *This, ULARGE_INTEGER cb);
	HRESULT(STDMETHODCALLTYPE *LockRegion) (ILockBytes *This, ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
	HRESULT(STDMETHODCALLTYPE *UnlockRegion) (ILockBytes *This, ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
	HRESULT(STDMETHODCALLTYPE *Stat) (ILockBytes *This, STATSTG *pstatstg, DWORD grfStatFlag);
	END_INTERFACE
} ILockBytesVtbl;
interface ILockBytes
{
	CONST_VTBL struct ILockBytesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILockBytes_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILockBytes_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ILockBytes_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ILockBytes_ReadAt(This,ulOffset,pv,cb,pcbRead)    ( (This)->lpVtbl -> ReadAt(This,ulOffset,pv,cb,pcbRead) )
#define ILockBytes_WriteAt(This,ulOffset,pv,cb,pcbWritten)    ( (This)->lpVtbl -> WriteAt(This,ulOffset,pv,cb,pcbWritten) )
#define ILockBytes_Flush(This)    ( (This)->lpVtbl -> Flush(This) )
#define ILockBytes_SetSize(This,cb)    ( (This)->lpVtbl -> SetSize(This,cb) )
#define ILockBytes_LockRegion(This,libOffset,cb,dwLockType)    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
#define ILockBytes_UnlockRegion(This,libOffset,cb,dwLockType)    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
#define ILockBytes_Stat(This,pstatstg,grfStatFlag)    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
#endif
HRESULT __stdcall ILockBytes_RemoteReadAt_Proxy(ILockBytes *This, ULARGE_INTEGER ulOffset, byte *pv, ULONG cb, ULONG *pcbRead);
void __RPC_STUB ILockBytes_RemoteReadAt_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ILockBytes_RemoteWriteAt_Proxy(ILockBytes *This, ULARGE_INTEGER ulOffset, const byte *pv, ULONG cb, ULONG *pcbWritten);
void __RPC_STUB ILockBytes_RemoteWriteAt_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumFORMATETC_INTERFACE_DEFINED__
#define __IEnumFORMATETC_INTERFACE_DEFINED__
typedef IEnumFORMATETC *LPENUMFORMATETC;
typedef struct tagDVTARGETDEVICE
{
	DWORD tdSize;
	WORD tdDriverNameOffset;
	WORD tdDeviceNameOffset;
	WORD tdPortNameOffset;
	WORD tdExtDevmodeOffset;
	BYTE tdData[1];
} DVTARGETDEVICE;
typedef CLIPFORMAT *LPCLIPFORMAT;
typedef struct tagFORMATETC
{
	CLIPFORMAT cfFormat;
	DVTARGETDEVICE *ptd;
	DWORD dwAspect;
	LONG lindex;
	DWORD tymed;
} FORMATETC;
typedef struct tagFORMATETC *LPFORMATETC;
extern const IID IID_IEnumFORMATETC;
typedef struct IEnumFORMATETCVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumFORMATETC *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumFORMATETC *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumFORMATETC *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumFORMATETC *This, ULONG celt, FORMATETC *rgelt, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumFORMATETC *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumFORMATETC *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumFORMATETC *This, IEnumFORMATETC **ppenum);
	END_INTERFACE
} IEnumFORMATETCVtbl;
interface IEnumFORMATETC
{
	CONST_VTBL struct IEnumFORMATETCVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumFORMATETC_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumFORMATETC_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumFORMATETC_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumFORMATETC_Next(This,celt,rgelt,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumFORMATETC_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumFORMATETC_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumFORMATETC_Clone(This,ppenum)    ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumFORMATETC_RemoteNext_Proxy(IEnumFORMATETC *This, ULONG celt, FORMATETC *rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumFORMATETC_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumSTATDATA_INTERFACE_DEFINED__
#define __IEnumSTATDATA_INTERFACE_DEFINED__
typedef IEnumSTATDATA *LPENUMSTATDATA;
typedef enum tagADVF
{
	ADVF_NODATA = 1,
	ADVF_PRIMEFIRST = 2,
	ADVF_ONLYONCE = 4,
	ADVF_DATAONSTOP = 64,
	ADVFCACHE_NOHANDLER = 8,
	ADVFCACHE_FORCEBUILTIN = 16,
	ADVFCACHE_ONSAVE = 32
} ADVF;
typedef struct tagSTATDATA
{
	FORMATETC formatetc;
	DWORD advf;
	IAdviseSink *pAdvSink;
	DWORD dwConnection;
} STATDATA;
typedef STATDATA *LPSTATDATA;
extern const IID IID_IEnumSTATDATA;
typedef struct IEnumSTATDATAVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumSTATDATA *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumSTATDATA *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumSTATDATA *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumSTATDATA *This, ULONG celt, STATDATA *rgelt, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumSTATDATA *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumSTATDATA *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumSTATDATA *This, IEnumSTATDATA **ppenum);
	END_INTERFACE
} IEnumSTATDATAVtbl;
interface IEnumSTATDATA
{
	CONST_VTBL struct IEnumSTATDATAVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSTATDATA_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSTATDATA_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSTATDATA_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumSTATDATA_Next(This,celt,rgelt,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumSTATDATA_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumSTATDATA_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumSTATDATA_Clone(This,ppenum)    ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumSTATDATA_RemoteNext_Proxy(IEnumSTATDATA *This, ULONG celt, STATDATA *rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumSTATDATA_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IRootStorage_INTERFACE_DEFINED__
#define __IRootStorage_INTERFACE_DEFINED__
typedef IRootStorage *LPROOTSTORAGE;
extern const IID IID_IRootStorage;
typedef struct IRootStorageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRootStorage *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRootStorage *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRootStorage *This);
	HRESULT(STDMETHODCALLTYPE *SwitchToFile) (IRootStorage *This, LPOLESTR pszFile);
	END_INTERFACE
} IRootStorageVtbl;
interface IRootStorage
{
	CONST_VTBL struct IRootStorageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRootStorage_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRootStorage_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRootStorage_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRootStorage_SwitchToFile(This,pszFile)    ( (This)->lpVtbl -> SwitchToFile(This,pszFile) )
#endif
#endif
#ifndef __IAdviseSink_INTERFACE_DEFINED__
#define __IAdviseSink_INTERFACE_DEFINED__
typedef IAdviseSink *LPADVISESINK;
typedef enum tagTYMED
{
	TYMED_HGLOBAL = 1,
	TYMED_FILE = 2,
	TYMED_ISTREAM = 4,
	TYMED_ISTORAGE = 8,
	TYMED_GDI = 16,
	TYMED_MFPICT = 32,
	TYMED_ENHMF = 64,
	TYMED_NULL = 0
} TYMED;
typedef struct tagRemSTGMEDIUM
{
	DWORD tymed;
	DWORD dwHandleType;
	unsigned long pData;
	unsigned long pUnkForRelease;
	unsigned long cbData;
	byte data[1];
} RemSTGMEDIUM;
#ifdef NONAMELESSUNION
typedef struct tagSTGMEDIUM
{
	DWORD tymed;
	union
	{
		HBITMAP hBitmap;
		HMETAFILEPICT hMetaFilePict;
		HENHMETAFILE hEnhMetaFile;
		HGLOBAL hGlobal;
		LPOLESTR lpszFileName;
		IStream *pstm;
		IStorage *pstg;
	} u;
	IUnknown *pUnkForRelease;
} uSTGMEDIUM;
#else
typedef struct tagSTGMEDIUM
{
	DWORD tymed;
	union
	{
		HBITMAP hBitmap;
		HMETAFILEPICT hMetaFilePict;
		HENHMETAFILE hEnhMetaFile;
		HGLOBAL hGlobal;
		LPOLESTR lpszFileName;
		IStream *pstm;
		IStorage *pstg;
	} DUMMYUNIONNAME;
	IUnknown *pUnkForRelease;
} uSTGMEDIUM;
#endif
typedef struct _GDI_OBJECT
{
	DWORD ObjectType;
	union __MIDL_IAdviseSink_0002
	{
		wireHBITMAP hBitmap;
		wireHPALETTE hPalette;
		wireHGLOBAL hGeneric;
	} u;
} GDI_OBJECT;
typedef struct _userSTGMEDIUM
{
	struct _STGMEDIUM_UNION
	{
		DWORD tymed;
		union __MIDL_IAdviseSink_0003
		{
			wireHMETAFILEPICT hMetaFilePict;
			wireHENHMETAFILE hHEnhMetaFile;
			GDI_OBJECT *hGdiHandle;
			wireHGLOBAL hGlobal;
			LPOLESTR lpszFileName;
			BYTE_BLOB *pstm;
			BYTE_BLOB *pstg;
		} u;
	} DUMMYUNIONNAME;
	IUnknown *pUnkForRelease;
} userSTGMEDIUM;
typedef userSTGMEDIUM *wireSTGMEDIUM;
typedef uSTGMEDIUM STGMEDIUM;
typedef userSTGMEDIUM *wireASYNC_STGMEDIUM;
typedef STGMEDIUM ASYNC_STGMEDIUM;
typedef STGMEDIUM *LPSTGMEDIUM;
typedef struct _userFLAG_STGMEDIUM
{
	long ContextFlags;
	long fPassOwnership;
	userSTGMEDIUM Stgmed;
} userFLAG_STGMEDIUM;
typedef userFLAG_STGMEDIUM *wireFLAG_STGMEDIUM;
typedef struct _FLAG_STGMEDIUM
{
	long ContextFlags;
	long fPassOwnership;
	STGMEDIUM Stgmed;
} FLAG_STGMEDIUM;
extern const IID IID_IAdviseSink;
typedef struct IAdviseSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAdviseSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAdviseSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAdviseSink *This);
	void (STDMETHODCALLTYPE *OnDataChange) (IAdviseSink *This, FORMATETC *pFormatetc, STGMEDIUM *pStgmed);
	void (STDMETHODCALLTYPE *OnViewChange) (IAdviseSink *This, DWORD dwAspect, LONG lindex);
	void (STDMETHODCALLTYPE *OnRename) (IAdviseSink *This, IMoniker *pmk);
	void (STDMETHODCALLTYPE *OnSave) (IAdviseSink *This);
	void (STDMETHODCALLTYPE *OnClose) (IAdviseSink *This);
	END_INTERFACE
} IAdviseSinkVtbl;
interface IAdviseSink
{
	CONST_VTBL struct IAdviseSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAdviseSink_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAdviseSink_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAdviseSink_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAdviseSink_OnDataChange(This,pFormatetc,pStgmed)    ( (This)->lpVtbl -> OnDataChange(This,pFormatetc,pStgmed) )
#define IAdviseSink_OnViewChange(This,dwAspect,lindex)    ( (This)->lpVtbl -> OnViewChange(This,dwAspect,lindex) )
#define IAdviseSink_OnRename(This,pmk)    ( (This)->lpVtbl -> OnRename(This,pmk) )
#define IAdviseSink_OnSave(This)    ( (This)->lpVtbl -> OnSave(This) )
#define IAdviseSink_OnClose(This)    ( (This)->lpVtbl -> OnClose(This) )
#endif
HRESULT STDMETHODCALLTYPE IAdviseSink_RemoteOnDataChange_Proxy(IAdviseSink *This, FORMATETC *pFormatetc, ASYNC_STGMEDIUM *pStgmed);
void __RPC_STUB IAdviseSink_RemoteOnDataChange_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAdviseSink_RemoteOnViewChange_Proxy(IAdviseSink *This, DWORD dwAspect, LONG lindex);
void __RPC_STUB IAdviseSink_RemoteOnViewChange_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAdviseSink_RemoteOnRename_Proxy(IAdviseSink *This, IMoniker *pmk);
void __RPC_STUB IAdviseSink_RemoteOnRename_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAdviseSink_RemoteOnSave_Proxy(IAdviseSink *This);
void __RPC_STUB IAdviseSink_RemoteOnSave_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAdviseSink_RemoteOnClose_Proxy(IAdviseSink *This);
void __RPC_STUB IAdviseSink_RemoteOnClose_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __AsyncIAdviseSink_INTERFACE_DEFINED__
#define __AsyncIAdviseSink_INTERFACE_DEFINED__
extern const IID IID_AsyncIAdviseSink;
typedef struct AsyncIAdviseSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (AsyncIAdviseSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (AsyncIAdviseSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (AsyncIAdviseSink *This);
	void (STDMETHODCALLTYPE *Begin_OnDataChange) (AsyncIAdviseSink *This, FORMATETC *pFormatetc, STGMEDIUM *pStgmed);
	void (STDMETHODCALLTYPE *Finish_OnDataChange) (AsyncIAdviseSink *This);
	void (STDMETHODCALLTYPE *Begin_OnViewChange) (AsyncIAdviseSink *This, DWORD dwAspect, LONG lindex);
	void (STDMETHODCALLTYPE *Finish_OnViewChange) (AsyncIAdviseSink *This);
	void (STDMETHODCALLTYPE *Begin_OnRename) (AsyncIAdviseSink *This, IMoniker *pmk);
	void (STDMETHODCALLTYPE *Finish_OnRename) (AsyncIAdviseSink *This);
	void (STDMETHODCALLTYPE *Begin_OnSave) (AsyncIAdviseSink *This);
	void (STDMETHODCALLTYPE *Finish_OnSave) (AsyncIAdviseSink *This);
	void (STDMETHODCALLTYPE *Begin_OnClose) (AsyncIAdviseSink *This);
	void (STDMETHODCALLTYPE *Finish_OnClose) (AsyncIAdviseSink *This);
	END_INTERFACE
} AsyncIAdviseSinkVtbl;
interface AsyncIAdviseSink
{
	CONST_VTBL struct AsyncIAdviseSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncIAdviseSink_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncIAdviseSink_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define AsyncIAdviseSink_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define AsyncIAdviseSink_Begin_OnDataChange(This,pFormatetc,pStgmed)    ( (This)->lpVtbl -> Begin_OnDataChange(This,pFormatetc,pStgmed) )
#define AsyncIAdviseSink_Finish_OnDataChange(This)    ( (This)->lpVtbl -> Finish_OnDataChange(This) )
#define AsyncIAdviseSink_Begin_OnViewChange(This,dwAspect,lindex)    ( (This)->lpVtbl -> Begin_OnViewChange(This,dwAspect,lindex) )
#define AsyncIAdviseSink_Finish_OnViewChange(This)    ( (This)->lpVtbl -> Finish_OnViewChange(This) )
#define AsyncIAdviseSink_Begin_OnRename(This,pmk)    ( (This)->lpVtbl -> Begin_OnRename(This,pmk) )
#define AsyncIAdviseSink_Finish_OnRename(This)    ( (This)->lpVtbl -> Finish_OnRename(This) )
#define AsyncIAdviseSink_Begin_OnSave(This)    ( (This)->lpVtbl -> Begin_OnSave(This) )
#define AsyncIAdviseSink_Finish_OnSave(This)    ( (This)->lpVtbl -> Finish_OnSave(This) )
#define AsyncIAdviseSink_Begin_OnClose(This)    ( (This)->lpVtbl -> Begin_OnClose(This) )
#define AsyncIAdviseSink_Finish_OnClose(This)    ( (This)->lpVtbl -> Finish_OnClose(This) )
#endif
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_RemoteOnDataChange_Proxy(AsyncIAdviseSink *This, FORMATETC *pFormatetc, ASYNC_STGMEDIUM *pStgmed);
void __RPC_STUB AsyncIAdviseSink_Begin_RemoteOnDataChange_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_RemoteOnDataChange_Proxy(AsyncIAdviseSink *This);
void __RPC_STUB AsyncIAdviseSink_Finish_RemoteOnDataChange_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_RemoteOnViewChange_Proxy(AsyncIAdviseSink *This, DWORD dwAspect, LONG lindex);
void __RPC_STUB AsyncIAdviseSink_Begin_RemoteOnViewChange_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_RemoteOnViewChange_Proxy(AsyncIAdviseSink *This);
void __RPC_STUB AsyncIAdviseSink_Finish_RemoteOnViewChange_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_RemoteOnRename_Proxy(AsyncIAdviseSink *This, IMoniker *pmk);
void __RPC_STUB AsyncIAdviseSink_Begin_RemoteOnRename_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_RemoteOnRename_Proxy(AsyncIAdviseSink *This);
void __RPC_STUB AsyncIAdviseSink_Finish_RemoteOnRename_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_RemoteOnSave_Proxy(AsyncIAdviseSink *This);
void __RPC_STUB AsyncIAdviseSink_Begin_RemoteOnSave_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_RemoteOnSave_Proxy(AsyncIAdviseSink *This);
void __RPC_STUB AsyncIAdviseSink_Finish_RemoteOnSave_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_RemoteOnClose_Proxy(AsyncIAdviseSink *This);
void __RPC_STUB AsyncIAdviseSink_Begin_RemoteOnClose_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_RemoteOnClose_Proxy(AsyncIAdviseSink *This);
void __RPC_STUB AsyncIAdviseSink_Finish_RemoteOnClose_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IAdviseSink2_INTERFACE_DEFINED__
#define __IAdviseSink2_INTERFACE_DEFINED__
typedef IAdviseSink2 *LPADVISESINK2;
extern const IID IID_IAdviseSink2;
typedef struct IAdviseSink2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAdviseSink2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAdviseSink2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAdviseSink2 *This);
	void (STDMETHODCALLTYPE *OnDataChange) (IAdviseSink2 *This, FORMATETC *pFormatetc, STGMEDIUM *pStgmed);
	void (STDMETHODCALLTYPE *OnViewChange) (IAdviseSink2 *This, DWORD dwAspect, LONG lindex);
	void (STDMETHODCALLTYPE *OnRename) (IAdviseSink2 *This, IMoniker *pmk);
	void (STDMETHODCALLTYPE *OnSave) (IAdviseSink2 *This);
	void (STDMETHODCALLTYPE *OnClose) (IAdviseSink2 *This);
	void (STDMETHODCALLTYPE *OnLinkSrcChange) (IAdviseSink2 *This, IMoniker *pmk);
	END_INTERFACE
} IAdviseSink2Vtbl;
interface IAdviseSink2
{
	CONST_VTBL struct IAdviseSink2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAdviseSink2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAdviseSink2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAdviseSink2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAdviseSink2_OnDataChange(This,pFormatetc,pStgmed)    ( (This)->lpVtbl -> OnDataChange(This,pFormatetc,pStgmed) )
#define IAdviseSink2_OnViewChange(This,dwAspect,lindex)    ( (This)->lpVtbl -> OnViewChange(This,dwAspect,lindex) )
#define IAdviseSink2_OnRename(This,pmk)    ( (This)->lpVtbl -> OnRename(This,pmk) )
#define IAdviseSink2_OnSave(This)    ( (This)->lpVtbl -> OnSave(This) )
#define IAdviseSink2_OnClose(This)    ( (This)->lpVtbl -> OnClose(This) )
#define IAdviseSink2_OnLinkSrcChange(This,pmk)    ( (This)->lpVtbl -> OnLinkSrcChange(This,pmk) )
#endif
HRESULT STDMETHODCALLTYPE IAdviseSink2_RemoteOnLinkSrcChange_Proxy(IAdviseSink2 *This, IMoniker *pmk);
void __RPC_STUB IAdviseSink2_RemoteOnLinkSrcChange_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __AsyncIAdviseSink2_INTERFACE_DEFINED__
#define __AsyncIAdviseSink2_INTERFACE_DEFINED__
extern const IID IID_AsyncIAdviseSink2;
typedef struct AsyncIAdviseSink2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (AsyncIAdviseSink2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (AsyncIAdviseSink2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (AsyncIAdviseSink2 *This);
	void (STDMETHODCALLTYPE *Begin_OnDataChange) (AsyncIAdviseSink2 *This, FORMATETC *pFormatetc, STGMEDIUM *pStgmed);
	void (STDMETHODCALLTYPE *Finish_OnDataChange) (AsyncIAdviseSink2 *This);
	void (STDMETHODCALLTYPE *Begin_OnViewChange) (AsyncIAdviseSink2 *This, DWORD dwAspect, LONG lindex);
	void (STDMETHODCALLTYPE *Finish_OnViewChange) (AsyncIAdviseSink2 *This);
	void (STDMETHODCALLTYPE *Begin_OnRename) (AsyncIAdviseSink2 *This, IMoniker *pmk);
	void (STDMETHODCALLTYPE *Finish_OnRename) (AsyncIAdviseSink2 *This);
	void (STDMETHODCALLTYPE *Begin_OnSave) (AsyncIAdviseSink2 *This);
	void (STDMETHODCALLTYPE *Finish_OnSave) (AsyncIAdviseSink2 *This);
	void (STDMETHODCALLTYPE *Begin_OnClose) (AsyncIAdviseSink2 *This);
	void (STDMETHODCALLTYPE *Finish_OnClose) (AsyncIAdviseSink2 *This);
	void (STDMETHODCALLTYPE *Begin_OnLinkSrcChange) (AsyncIAdviseSink2 *This, IMoniker *pmk);
	void (STDMETHODCALLTYPE *Finish_OnLinkSrcChange) (AsyncIAdviseSink2 *This);
	END_INTERFACE
} AsyncIAdviseSink2Vtbl;
interface AsyncIAdviseSink2
{
	CONST_VTBL struct AsyncIAdviseSink2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncIAdviseSink2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncIAdviseSink2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define AsyncIAdviseSink2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define AsyncIAdviseSink2_Begin_OnDataChange(This,pFormatetc,pStgmed)    ( (This)->lpVtbl -> Begin_OnDataChange(This,pFormatetc,pStgmed) )
#define AsyncIAdviseSink2_Finish_OnDataChange(This)    ( (This)->lpVtbl -> Finish_OnDataChange(This) )
#define AsyncIAdviseSink2_Begin_OnViewChange(This,dwAspect,lindex)    ( (This)->lpVtbl -> Begin_OnViewChange(This,dwAspect,lindex) )
#define AsyncIAdviseSink2_Finish_OnViewChange(This)    ( (This)->lpVtbl -> Finish_OnViewChange(This) )
#define AsyncIAdviseSink2_Begin_OnRename(This,pmk)    ( (This)->lpVtbl -> Begin_OnRename(This,pmk) )
#define AsyncIAdviseSink2_Finish_OnRename(This)    ( (This)->lpVtbl -> Finish_OnRename(This) )
#define AsyncIAdviseSink2_Begin_OnSave(This)    ( (This)->lpVtbl -> Begin_OnSave(This) )
#define AsyncIAdviseSink2_Finish_OnSave(This)    ( (This)->lpVtbl -> Finish_OnSave(This) )
#define AsyncIAdviseSink2_Begin_OnClose(This)    ( (This)->lpVtbl -> Begin_OnClose(This) )
#define AsyncIAdviseSink2_Finish_OnClose(This)    ( (This)->lpVtbl -> Finish_OnClose(This) )
#define AsyncIAdviseSink2_Begin_OnLinkSrcChange(This,pmk)    ( (This)->lpVtbl -> Begin_OnLinkSrcChange(This,pmk) )
#define AsyncIAdviseSink2_Finish_OnLinkSrcChange(This)    ( (This)->lpVtbl -> Finish_OnLinkSrcChange(This) )
#endif
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink2_Begin_RemoteOnLinkSrcChange_Proxy(AsyncIAdviseSink2 *This, IMoniker *pmk);
void __RPC_STUB AsyncIAdviseSink2_Begin_RemoteOnLinkSrcChange_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink2_Finish_RemoteOnLinkSrcChange_Proxy(AsyncIAdviseSink2 *This);
void __RPC_STUB AsyncIAdviseSink2_Finish_RemoteOnLinkSrcChange_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IDataObject_INTERFACE_DEFINED__
#define __IDataObject_INTERFACE_DEFINED__
typedef IDataObject *LPDATAOBJECT;
typedef enum tagDATADIR
{
	DATADIR_GET = 1,
	DATADIR_SET = 2
} DATADIR;
extern const IID IID_IDataObject;
typedef struct IDataObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDataObject *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDataObject *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDataObject *This);
	HRESULT(STDMETHODCALLTYPE *GetData) (IDataObject *This, FORMATETC *pformatetcIn, STGMEDIUM *pmedium);
	HRESULT(STDMETHODCALLTYPE *GetDataHere) (IDataObject *This, FORMATETC *pformatetc, STGMEDIUM *pmedium);
	HRESULT(STDMETHODCALLTYPE *QueryGetData) (IDataObject *This, FORMATETC *pformatetc);
	HRESULT(STDMETHODCALLTYPE *GetCanonicalFormatEtc) (IDataObject *This, FORMATETC *pformatectIn, FORMATETC *pformatetcOut);
	HRESULT(STDMETHODCALLTYPE *SetData) (IDataObject *This, FORMATETC *pformatetc, STGMEDIUM *pmedium, BOOL fRelease);
	HRESULT(STDMETHODCALLTYPE *EnumFormatEtc) (IDataObject *This, DWORD dwDirection, IEnumFORMATETC **ppenumFormatEtc);
	HRESULT(STDMETHODCALLTYPE *DAdvise) (IDataObject *This, FORMATETC *pformatetc, DWORD advf, IAdviseSink *pAdvSink, DWORD *pdwConnection);
	HRESULT(STDMETHODCALLTYPE *DUnadvise) (IDataObject *This, DWORD dwConnection);
	HRESULT(STDMETHODCALLTYPE *EnumDAdvise) (IDataObject *This, IEnumSTATDATA **ppenumAdvise);
	END_INTERFACE
} IDataObjectVtbl;
interface IDataObject
{
	CONST_VTBL struct IDataObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDataObject_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDataObject_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDataObject_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDataObject_GetData(This,pformatetcIn,pmedium)    ( (This)->lpVtbl -> GetData(This,pformatetcIn,pmedium) )
#define IDataObject_GetDataHere(This,pformatetc,pmedium)    ( (This)->lpVtbl -> GetDataHere(This,pformatetc,pmedium) )
#define IDataObject_QueryGetData(This,pformatetc)    ( (This)->lpVtbl -> QueryGetData(This,pformatetc) )
#define IDataObject_GetCanonicalFormatEtc(This,pformatectIn,pformatetcOut)    ( (This)->lpVtbl -> GetCanonicalFormatEtc(This,pformatectIn,pformatetcOut) )
#define IDataObject_SetData(This,pformatetc,pmedium,fRelease)    ( (This)->lpVtbl -> SetData(This,pformatetc,pmedium,fRelease) )
#define IDataObject_EnumFormatEtc(This,dwDirection,ppenumFormatEtc)    ( (This)->lpVtbl -> EnumFormatEtc(This,dwDirection,ppenumFormatEtc) )
#define IDataObject_DAdvise(This,pformatetc,advf,pAdvSink,pdwConnection)    ( (This)->lpVtbl -> DAdvise(This,pformatetc,advf,pAdvSink,pdwConnection) )
#define IDataObject_DUnadvise(This,dwConnection)    ( (This)->lpVtbl -> DUnadvise(This,dwConnection) )
#define IDataObject_EnumDAdvise(This,ppenumAdvise)    ( (This)->lpVtbl -> EnumDAdvise(This,ppenumAdvise) )
#endif
HRESULT STDMETHODCALLTYPE IDataObject_RemoteGetData_Proxy(IDataObject *This, FORMATETC *pformatetcIn, STGMEDIUM *pRemoteMedium);
void __RPC_STUB IDataObject_RemoteGetData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDataObject_RemoteGetDataHere_Proxy(IDataObject *This, FORMATETC *pformatetc, STGMEDIUM *pRemoteMedium);
void __RPC_STUB IDataObject_RemoteGetDataHere_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDataObject_RemoteSetData_Proxy(IDataObject *This, FORMATETC *pformatetc, FLAG_STGMEDIUM *pmedium, BOOL fRelease);
void __RPC_STUB IDataObject_RemoteSetData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IDataAdviseHolder_INTERFACE_DEFINED__
#define __IDataAdviseHolder_INTERFACE_DEFINED__
typedef IDataAdviseHolder *LPDATAADVISEHOLDER;
extern const IID IID_IDataAdviseHolder;
typedef struct IDataAdviseHolderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDataAdviseHolder *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDataAdviseHolder *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDataAdviseHolder *This);
	HRESULT(STDMETHODCALLTYPE *Advise) (IDataAdviseHolder *This, IDataObject *pDataObject, FORMATETC *pFetc, DWORD advf, IAdviseSink *pAdvise, DWORD *pdwConnection);
	HRESULT(STDMETHODCALLTYPE *Unadvise) (IDataAdviseHolder *This, DWORD dwConnection);
	HRESULT(STDMETHODCALLTYPE *EnumAdvise) (IDataAdviseHolder *This, IEnumSTATDATA **ppenumAdvise);
	HRESULT(STDMETHODCALLTYPE *SendOnDataChange) (IDataAdviseHolder *This, IDataObject *pDataObject, DWORD dwReserved, DWORD advf);
	END_INTERFACE
} IDataAdviseHolderVtbl;
interface IDataAdviseHolder
{
	CONST_VTBL struct IDataAdviseHolderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDataAdviseHolder_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDataAdviseHolder_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDataAdviseHolder_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDataAdviseHolder_Advise(This,pDataObject,pFetc,advf,pAdvise,pdwConnection)    ( (This)->lpVtbl -> Advise(This,pDataObject,pFetc,advf,pAdvise,pdwConnection) )
#define IDataAdviseHolder_Unadvise(This,dwConnection)    ( (This)->lpVtbl -> Unadvise(This,dwConnection) )
#define IDataAdviseHolder_EnumAdvise(This,ppenumAdvise)    ( (This)->lpVtbl -> EnumAdvise(This,ppenumAdvise) )
#define IDataAdviseHolder_SendOnDataChange(This,pDataObject,dwReserved,advf)    ( (This)->lpVtbl -> SendOnDataChange(This,pDataObject,dwReserved,advf) )
#endif
#endif
#ifndef __IMessageFilter_INTERFACE_DEFINED__
#define __IMessageFilter_INTERFACE_DEFINED__
typedef IMessageFilter *LPMESSAGEFILTER;
typedef enum tagCALLTYPE
{
	CALLTYPE_TOPLEVEL = 1,
	CALLTYPE_NESTED = 2,
	CALLTYPE_ASYNC = 3,
	CALLTYPE_TOPLEVEL_CALLPENDING = 4,
	CALLTYPE_ASYNC_CALLPENDING = 5
} CALLTYPE;
typedef enum tagSERVERCALL
{
	SERVERCALL_ISHANDLED = 0,
	SERVERCALL_REJECTED = 1,
	SERVERCALL_RETRYLATER = 2
} SERVERCALL;
typedef enum tagPENDINGTYPE
{
	PENDINGTYPE_TOPLEVEL = 1,
	PENDINGTYPE_NESTED = 2
} PENDINGTYPE;
typedef enum tagPENDINGMSG
{
	PENDINGMSG_CANCELCALL = 0,
	PENDINGMSG_WAITNOPROCESS = 1,
	PENDINGMSG_WAITDEFPROCESS = 2
} PENDINGMSG;
typedef struct tagINTERFACEINFO
{
	IUnknown *pUnk;
	IID iid;
	WORD wMethod;
} INTERFACEINFO;
typedef struct tagINTERFACEINFO *LPINTERFACEINFO;
extern const IID IID_IMessageFilter;
typedef struct IMessageFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMessageFilter *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMessageFilter *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMessageFilter *This);
	DWORD(STDMETHODCALLTYPE *HandleInComingCall) (IMessageFilter *This, DWORD dwCallType, HTASK htaskCaller, DWORD dwTickCount, LPINTERFACEINFO lpInterfaceInfo);
	DWORD(STDMETHODCALLTYPE *RetryRejectedCall) (IMessageFilter *This, HTASK htaskCallee, DWORD dwTickCount, DWORD dwRejectType);
	DWORD(STDMETHODCALLTYPE *MessagePending) (IMessageFilter *This, HTASK htaskCallee, DWORD dwTickCount, DWORD dwPendingType);
	END_INTERFACE
} IMessageFilterVtbl;
interface IMessageFilter
{
	CONST_VTBL struct IMessageFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMessageFilter_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMessageFilter_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMessageFilter_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMessageFilter_HandleInComingCall(This,dwCallType,htaskCaller,dwTickCount,lpInterfaceInfo)    ( (This)->lpVtbl -> HandleInComingCall(This,dwCallType,htaskCaller,dwTickCount,lpInterfaceInfo) )
#define IMessageFilter_RetryRejectedCall(This,htaskCallee,dwTickCount,dwRejectType)    ( (This)->lpVtbl -> RetryRejectedCall(This,htaskCallee,dwTickCount,dwRejectType) )
#define IMessageFilter_MessagePending(This,htaskCallee,dwTickCount,dwPendingType)    ( (This)->lpVtbl -> MessagePending(This,htaskCallee,dwTickCount,dwPendingType) )
#endif
#endif
#ifndef __IRpcChannelBuffer_INTERFACE_DEFINED__
#define __IRpcChannelBuffer_INTERFACE_DEFINED__
typedef unsigned long RPCOLEDATAREP;
typedef struct tagRPCOLEMESSAGE
{
	void *reserved1;
	RPCOLEDATAREP dataRepresentation;
	void *Buffer;
	ULONG cbBuffer;
	ULONG iMethod;
	void *reserved2[5];
	ULONG rpcFlags;
} RPCOLEMESSAGE;
typedef RPCOLEMESSAGE *PRPCOLEMESSAGE;
extern const IID IID_IRpcChannelBuffer;
typedef struct IRpcChannelBufferVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRpcChannelBuffer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRpcChannelBuffer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRpcChannelBuffer *This);
	HRESULT(STDMETHODCALLTYPE *GetBuffer) (IRpcChannelBuffer *This, RPCOLEMESSAGE *pMessage, REFIID riid);
	HRESULT(STDMETHODCALLTYPE *SendReceive) (IRpcChannelBuffer *This, RPCOLEMESSAGE *pMessage, ULONG *pStatus);
	HRESULT(STDMETHODCALLTYPE *FreeBuffer) (IRpcChannelBuffer *This, RPCOLEMESSAGE *pMessage);
	HRESULT(STDMETHODCALLTYPE *GetDestCtx) (IRpcChannelBuffer *This, DWORD *pdwDestContext, void **ppvDestContext);
	HRESULT(STDMETHODCALLTYPE *IsConnected) (IRpcChannelBuffer *This);
	END_INTERFACE
} IRpcChannelBufferVtbl;
interface IRpcChannelBuffer
{
	CONST_VTBL struct IRpcChannelBufferVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRpcChannelBuffer_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRpcChannelBuffer_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRpcChannelBuffer_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRpcChannelBuffer_GetBuffer(This,pMessage,riid)    ( (This)->lpVtbl -> GetBuffer(This,pMessage,riid) )
#define IRpcChannelBuffer_SendReceive(This,pMessage,pStatus)    ( (This)->lpVtbl -> SendReceive(This,pMessage,pStatus) )
#define IRpcChannelBuffer_FreeBuffer(This,pMessage)    ( (This)->lpVtbl -> FreeBuffer(This,pMessage) )
#define IRpcChannelBuffer_GetDestCtx(This,pdwDestContext,ppvDestContext)    ( (This)->lpVtbl -> GetDestCtx(This,pdwDestContext,ppvDestContext) )
#define IRpcChannelBuffer_IsConnected(This)    ( (This)->lpVtbl -> IsConnected(This) )
#endif
#endif
#ifndef __IRpcChannelBuffer2_INTERFACE_DEFINED__
#define __IRpcChannelBuffer2_INTERFACE_DEFINED__
extern const IID IID_IRpcChannelBuffer2;
typedef struct IRpcChannelBuffer2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRpcChannelBuffer2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRpcChannelBuffer2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRpcChannelBuffer2 *This);
	HRESULT(STDMETHODCALLTYPE *GetBuffer) (IRpcChannelBuffer2 *This, RPCOLEMESSAGE *pMessage, REFIID riid);
	HRESULT(STDMETHODCALLTYPE *SendReceive) (IRpcChannelBuffer2 *This, RPCOLEMESSAGE *pMessage, ULONG *pStatus);
	HRESULT(STDMETHODCALLTYPE *FreeBuffer) (IRpcChannelBuffer2 *This, RPCOLEMESSAGE *pMessage);
	HRESULT(STDMETHODCALLTYPE *GetDestCtx) (IRpcChannelBuffer2 *This, DWORD *pdwDestContext, void **ppvDestContext);
	HRESULT(STDMETHODCALLTYPE *IsConnected) (IRpcChannelBuffer2 *This);
	HRESULT(STDMETHODCALLTYPE *GetProtocolVersion) (IRpcChannelBuffer2 *This, DWORD *pdwVersion);
	END_INTERFACE
} IRpcChannelBuffer2Vtbl;
interface IRpcChannelBuffer2
{
	CONST_VTBL struct IRpcChannelBuffer2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRpcChannelBuffer2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRpcChannelBuffer2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRpcChannelBuffer2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRpcChannelBuffer2_GetBuffer(This,pMessage,riid)    ( (This)->lpVtbl -> GetBuffer(This,pMessage,riid) )
#define IRpcChannelBuffer2_SendReceive(This,pMessage,pStatus)    ( (This)->lpVtbl -> SendReceive(This,pMessage,pStatus) )
#define IRpcChannelBuffer2_FreeBuffer(This,pMessage)    ( (This)->lpVtbl -> FreeBuffer(This,pMessage) )
#define IRpcChannelBuffer2_GetDestCtx(This,pdwDestContext,ppvDestContext)    ( (This)->lpVtbl -> GetDestCtx(This,pdwDestContext,ppvDestContext) )
#define IRpcChannelBuffer2_IsConnected(This)    ( (This)->lpVtbl -> IsConnected(This) )
#define IRpcChannelBuffer2_GetProtocolVersion(This,pdwVersion)    ( (This)->lpVtbl -> GetProtocolVersion(This,pdwVersion) )
#endif
#endif
#ifndef __IAsyncRpcChannelBuffer_INTERFACE_DEFINED__
#define __IAsyncRpcChannelBuffer_INTERFACE_DEFINED__
extern const IID IID_IAsyncRpcChannelBuffer;
typedef struct IAsyncRpcChannelBufferVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAsyncRpcChannelBuffer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAsyncRpcChannelBuffer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAsyncRpcChannelBuffer *This);
	HRESULT(STDMETHODCALLTYPE *GetBuffer) (IAsyncRpcChannelBuffer *This, RPCOLEMESSAGE *pMessage, REFIID riid);
	HRESULT(STDMETHODCALLTYPE *SendReceive) (IAsyncRpcChannelBuffer *This, RPCOLEMESSAGE *pMessage, ULONG *pStatus);
	HRESULT(STDMETHODCALLTYPE *FreeBuffer) (IAsyncRpcChannelBuffer *This, RPCOLEMESSAGE *pMessage);
	HRESULT(STDMETHODCALLTYPE *GetDestCtx) (IAsyncRpcChannelBuffer *This, DWORD *pdwDestContext, void **ppvDestContext);
	HRESULT(STDMETHODCALLTYPE *IsConnected) (IAsyncRpcChannelBuffer *This);
	HRESULT(STDMETHODCALLTYPE *GetProtocolVersion) (IAsyncRpcChannelBuffer *This, DWORD *pdwVersion);
	HRESULT(STDMETHODCALLTYPE *Send) (IAsyncRpcChannelBuffer *This, RPCOLEMESSAGE *pMsg, ISynchronize *pSync, ULONG *pulStatus);
	HRESULT(STDMETHODCALLTYPE *Receive) (IAsyncRpcChannelBuffer *This, RPCOLEMESSAGE *pMsg, ULONG *pulStatus);
	HRESULT(STDMETHODCALLTYPE *GetDestCtxEx) (IAsyncRpcChannelBuffer *This, RPCOLEMESSAGE *pMsg, DWORD *pdwDestContext, void **ppvDestContext);
	END_INTERFACE
} IAsyncRpcChannelBufferVtbl;
interface IAsyncRpcChannelBuffer
{
	CONST_VTBL struct IAsyncRpcChannelBufferVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAsyncRpcChannelBuffer_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAsyncRpcChannelBuffer_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAsyncRpcChannelBuffer_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAsyncRpcChannelBuffer_GetBuffer(This,pMessage,riid)    ( (This)->lpVtbl -> GetBuffer(This,pMessage,riid) )
#define IAsyncRpcChannelBuffer_SendReceive(This,pMessage,pStatus)    ( (This)->lpVtbl -> SendReceive(This,pMessage,pStatus) )
#define IAsyncRpcChannelBuffer_FreeBuffer(This,pMessage)    ( (This)->lpVtbl -> FreeBuffer(This,pMessage) )
#define IAsyncRpcChannelBuffer_GetDestCtx(This,pdwDestContext,ppvDestContext)    ( (This)->lpVtbl -> GetDestCtx(This,pdwDestContext,ppvDestContext) )
#define IAsyncRpcChannelBuffer_IsConnected(This)    ( (This)->lpVtbl -> IsConnected(This) )
#define IAsyncRpcChannelBuffer_GetProtocolVersion(This,pdwVersion)    ( (This)->lpVtbl -> GetProtocolVersion(This,pdwVersion) )
#define IAsyncRpcChannelBuffer_Send(This,pMsg,pSync,pulStatus)    ( (This)->lpVtbl -> Send(This,pMsg,pSync,pulStatus) )
#define IAsyncRpcChannelBuffer_Receive(This,pMsg,pulStatus)    ( (This)->lpVtbl -> Receive(This,pMsg,pulStatus) )
#define IAsyncRpcChannelBuffer_GetDestCtxEx(This,pMsg,pdwDestContext,ppvDestContext)    ( (This)->lpVtbl -> GetDestCtxEx(This,pMsg,pdwDestContext,ppvDestContext) )
#endif
#endif
#ifndef __IRpcChannelBuffer3_INTERFACE_DEFINED__
#define __IRpcChannelBuffer3_INTERFACE_DEFINED__
extern const IID IID_IRpcChannelBuffer3;
typedef struct IRpcChannelBuffer3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRpcChannelBuffer3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRpcChannelBuffer3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRpcChannelBuffer3 *This);
	HRESULT(STDMETHODCALLTYPE *GetBuffer) (IRpcChannelBuffer3 *This, RPCOLEMESSAGE *pMessage, REFIID riid);
	HRESULT(STDMETHODCALLTYPE *SendReceive) (IRpcChannelBuffer3 *This, RPCOLEMESSAGE *pMessage, ULONG *pStatus);
	HRESULT(STDMETHODCALLTYPE *FreeBuffer) (IRpcChannelBuffer3 *This, RPCOLEMESSAGE *pMessage);
	HRESULT(STDMETHODCALLTYPE *GetDestCtx) (IRpcChannelBuffer3 *This, DWORD *pdwDestContext, void **ppvDestContext);
	HRESULT(STDMETHODCALLTYPE *IsConnected) (IRpcChannelBuffer3 *This);
	HRESULT(STDMETHODCALLTYPE *GetProtocolVersion) (IRpcChannelBuffer3 *This, DWORD *pdwVersion);
	HRESULT(STDMETHODCALLTYPE *Send) (IRpcChannelBuffer3 *This, RPCOLEMESSAGE *pMsg, ULONG *pulStatus);
	HRESULT(STDMETHODCALLTYPE *Receive) (IRpcChannelBuffer3 *This, RPCOLEMESSAGE *pMsg, ULONG ulSize, ULONG *pulStatus);
	HRESULT(STDMETHODCALLTYPE *Cancel) (IRpcChannelBuffer3 *This, RPCOLEMESSAGE *pMsg);
	HRESULT(STDMETHODCALLTYPE *GetCallContext) (IRpcChannelBuffer3 *This, RPCOLEMESSAGE *pMsg, REFIID riid, void **pInterface);
	HRESULT(STDMETHODCALLTYPE *GetDestCtxEx) (IRpcChannelBuffer3 *This, RPCOLEMESSAGE *pMsg, DWORD *pdwDestContext, void **ppvDestContext);
	HRESULT(STDMETHODCALLTYPE *GetState) (IRpcChannelBuffer3 *This, RPCOLEMESSAGE *pMsg, DWORD *pState);
	HRESULT(STDMETHODCALLTYPE *RegisterAsync) (IRpcChannelBuffer3 *This, RPCOLEMESSAGE *pMsg, IAsyncManager *pAsyncMgr);
	END_INTERFACE
} IRpcChannelBuffer3Vtbl;
interface IRpcChannelBuffer3
{
	CONST_VTBL struct IRpcChannelBuffer3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRpcChannelBuffer3_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRpcChannelBuffer3_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRpcChannelBuffer3_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRpcChannelBuffer3_GetBuffer(This,pMessage,riid)    ( (This)->lpVtbl -> GetBuffer(This,pMessage,riid) )
#define IRpcChannelBuffer3_SendReceive(This,pMessage,pStatus)    ( (This)->lpVtbl -> SendReceive(This,pMessage,pStatus) )
#define IRpcChannelBuffer3_FreeBuffer(This,pMessage)    ( (This)->lpVtbl -> FreeBuffer(This,pMessage) )
#define IRpcChannelBuffer3_GetDestCtx(This,pdwDestContext,ppvDestContext)    ( (This)->lpVtbl -> GetDestCtx(This,pdwDestContext,ppvDestContext) )
#define IRpcChannelBuffer3_IsConnected(This)    ( (This)->lpVtbl -> IsConnected(This) )
#define IRpcChannelBuffer3_GetProtocolVersion(This,pdwVersion)    ( (This)->lpVtbl -> GetProtocolVersion(This,pdwVersion) )
#define IRpcChannelBuffer3_Send(This,pMsg,pulStatus)    ( (This)->lpVtbl -> Send(This,pMsg,pulStatus) )
#define IRpcChannelBuffer3_Receive(This,pMsg,ulSize,pulStatus)    ( (This)->lpVtbl -> Receive(This,pMsg,ulSize,pulStatus) )
#define IRpcChannelBuffer3_Cancel(This,pMsg)    ( (This)->lpVtbl -> Cancel(This,pMsg) )
#define IRpcChannelBuffer3_GetCallContext(This,pMsg,riid,pInterface)    ( (This)->lpVtbl -> GetCallContext(This,pMsg,riid,pInterface) )
#define IRpcChannelBuffer3_GetDestCtxEx(This,pMsg,pdwDestContext,ppvDestContext)    ( (This)->lpVtbl -> GetDestCtxEx(This,pMsg,pdwDestContext,ppvDestContext) )
#define IRpcChannelBuffer3_GetState(This,pMsg,pState)    ( (This)->lpVtbl -> GetState(This,pMsg,pState) )
#define IRpcChannelBuffer3_RegisterAsync(This,pMsg,pAsyncMgr)    ( (This)->lpVtbl -> RegisterAsync(This,pMsg,pAsyncMgr) )
#endif
#endif
#ifndef __IRpcSyntaxNegotiate_INTERFACE_DEFINED__
#define __IRpcSyntaxNegotiate_INTERFACE_DEFINED__
extern const IID IID_IRpcSyntaxNegotiate;
typedef struct IRpcSyntaxNegotiateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRpcSyntaxNegotiate *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRpcSyntaxNegotiate *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRpcSyntaxNegotiate *This);
	HRESULT(STDMETHODCALLTYPE *NegotiateSyntax) (IRpcSyntaxNegotiate *This, RPCOLEMESSAGE *pMsg);
	END_INTERFACE
} IRpcSyntaxNegotiateVtbl;
interface IRpcSyntaxNegotiate
{
	CONST_VTBL struct IRpcSyntaxNegotiateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRpcSyntaxNegotiate_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRpcSyntaxNegotiate_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRpcSyntaxNegotiate_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRpcSyntaxNegotiate_NegotiateSyntax(This,pMsg)    ( (This)->lpVtbl -> NegotiateSyntax(This,pMsg) )
#endif
#endif
#ifndef __IRpcProxyBuffer_INTERFACE_DEFINED__
#define __IRpcProxyBuffer_INTERFACE_DEFINED__
extern const IID IID_IRpcProxyBuffer;
typedef struct IRpcProxyBufferVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRpcProxyBuffer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRpcProxyBuffer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRpcProxyBuffer *This);
	HRESULT(STDMETHODCALLTYPE *Connect) (IRpcProxyBuffer *This, IRpcChannelBuffer *pRpcChannelBuffer);
	void (STDMETHODCALLTYPE *Disconnect) (IRpcProxyBuffer *This);
	END_INTERFACE
} IRpcProxyBufferVtbl;
interface IRpcProxyBuffer
{
	CONST_VTBL struct IRpcProxyBufferVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRpcProxyBuffer_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRpcProxyBuffer_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRpcProxyBuffer_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRpcProxyBuffer_Connect(This,pRpcChannelBuffer)    ( (This)->lpVtbl -> Connect(This,pRpcChannelBuffer) )
#define IRpcProxyBuffer_Disconnect(This)    ( (This)->lpVtbl -> Disconnect(This) )
#endif
#endif
#ifndef __IRpcStubBuffer_INTERFACE_DEFINED__
#define __IRpcStubBuffer_INTERFACE_DEFINED__
extern const IID IID_IRpcStubBuffer;
typedef struct IRpcStubBufferVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRpcStubBuffer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRpcStubBuffer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRpcStubBuffer *This);
	HRESULT(STDMETHODCALLTYPE *Connect) (IRpcStubBuffer *This, IUnknown *pUnkServer);
	void (STDMETHODCALLTYPE *Disconnect) (IRpcStubBuffer *This);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IRpcStubBuffer *This, RPCOLEMESSAGE *_prpcmsg, IRpcChannelBuffer *_pRpcChannelBuffer);
	IRpcStubBuffer *(STDMETHODCALLTYPE *IsIIDSupported) (IRpcStubBuffer *This, REFIID riid);
	ULONG(STDMETHODCALLTYPE *CountRefs) (IRpcStubBuffer *This);
	HRESULT(STDMETHODCALLTYPE *DebugServerQueryInterface) (IRpcStubBuffer *This, void **ppv);
	void (STDMETHODCALLTYPE *DebugServerRelease) (IRpcStubBuffer *This, void *pv);
	END_INTERFACE
} IRpcStubBufferVtbl;
interface IRpcStubBuffer
{
	CONST_VTBL struct IRpcStubBufferVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRpcStubBuffer_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRpcStubBuffer_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRpcStubBuffer_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRpcStubBuffer_Connect(This,pUnkServer)    ( (This)->lpVtbl -> Connect(This,pUnkServer) )
#define IRpcStubBuffer_Disconnect(This)    ( (This)->lpVtbl -> Disconnect(This) )
#define IRpcStubBuffer_Invoke(This,_prpcmsg,_pRpcChannelBuffer)    ( (This)->lpVtbl -> Invoke(This,_prpcmsg,_pRpcChannelBuffer) )
#define IRpcStubBuffer_IsIIDSupported(This,riid)    ( (This)->lpVtbl -> IsIIDSupported(This,riid) )
#define IRpcStubBuffer_CountRefs(This)    ( (This)->lpVtbl -> CountRefs(This) )
#define IRpcStubBuffer_DebugServerQueryInterface(This,ppv)    ( (This)->lpVtbl -> DebugServerQueryInterface(This,ppv) )
#define IRpcStubBuffer_DebugServerRelease(This,pv)    ( (This)->lpVtbl -> DebugServerRelease(This,pv) )
#endif
#endif
#ifndef __IPSFactoryBuffer_INTERFACE_DEFINED__
#define __IPSFactoryBuffer_INTERFACE_DEFINED__
extern const IID IID_IPSFactoryBuffer;
typedef struct IPSFactoryBufferVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPSFactoryBuffer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPSFactoryBuffer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPSFactoryBuffer *This);
	HRESULT(STDMETHODCALLTYPE *CreateProxy) (IPSFactoryBuffer *This, IUnknown *pUnkOuter, REFIID riid, IRpcProxyBuffer **ppProxy, void **ppv);
	HRESULT(STDMETHODCALLTYPE *CreateStub) (IPSFactoryBuffer *This, REFIID riid, IUnknown *pUnkServer, IRpcStubBuffer **ppStub);
	END_INTERFACE
} IPSFactoryBufferVtbl;
interface IPSFactoryBuffer
{
	CONST_VTBL struct IPSFactoryBufferVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPSFactoryBuffer_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPSFactoryBuffer_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPSFactoryBuffer_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPSFactoryBuffer_CreateProxy(This,pUnkOuter,riid,ppProxy,ppv)    ( (This)->lpVtbl -> CreateProxy(This,pUnkOuter,riid,ppProxy,ppv) )
#define IPSFactoryBuffer_CreateStub(This,riid,pUnkServer,ppStub)    ( (This)->lpVtbl -> CreateStub(This,riid,pUnkServer,ppStub) )
#endif
#endif
#if  (_WIN32_WINNT >= 0x0400 ) || defined(_WIN32_DCOM)
typedef struct SChannelHookCallInfo
{
	IID iid;
	DWORD cbSize;
	GUID uCausality;
	DWORD dwServerPid;
	DWORD iMethod;
	void *pObject;
} SChannelHookCallInfo;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0041_v0_0_s_ifspec;
#ifndef __IChannelHook_INTERFACE_DEFINED__
#define __IChannelHook_INTERFACE_DEFINED__
extern const IID IID_IChannelHook;
typedef struct IChannelHookVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IChannelHook *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IChannelHook *This);
	ULONG(STDMETHODCALLTYPE *Release) (IChannelHook *This);
	void (STDMETHODCALLTYPE *ClientGetSize) (IChannelHook *This, REFGUID uExtent, REFIID riid, ULONG *pDataSize);
	void (STDMETHODCALLTYPE *ClientFillBuffer) (IChannelHook *This, REFGUID uExtent, REFIID riid, ULONG *pDataSize, void *pDataBuffer);
	void (STDMETHODCALLTYPE *ClientNotify) (IChannelHook *This, REFGUID uExtent, REFIID riid, ULONG cbDataSize, void *pDataBuffer, DWORD lDataRep, HRESULT hrFault);
	void (STDMETHODCALLTYPE *ServerNotify) (IChannelHook *This, REFGUID uExtent, REFIID riid, ULONG cbDataSize, void *pDataBuffer, DWORD lDataRep);
	void (STDMETHODCALLTYPE *ServerGetSize) (IChannelHook *This, REFGUID uExtent, REFIID riid, HRESULT hrFault, ULONG *pDataSize);
	void (STDMETHODCALLTYPE *ServerFillBuffer) (IChannelHook *This, REFGUID uExtent, REFIID riid, ULONG *pDataSize, void *pDataBuffer, HRESULT hrFault);
	END_INTERFACE
} IChannelHookVtbl;
interface IChannelHook
{
	CONST_VTBL struct IChannelHookVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IChannelHook_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IChannelHook_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IChannelHook_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IChannelHook_ClientGetSize(This,uExtent,riid,pDataSize)    ( (This)->lpVtbl -> ClientGetSize(This,uExtent,riid,pDataSize) )
#define IChannelHook_ClientFillBuffer(This,uExtent,riid,pDataSize,pDataBuffer)    ( (This)->lpVtbl -> ClientFillBuffer(This,uExtent,riid,pDataSize,pDataBuffer) )
#define IChannelHook_ClientNotify(This,uExtent,riid,cbDataSize,pDataBuffer,lDataRep,hrFault)    ( (This)->lpVtbl -> ClientNotify(This,uExtent,riid,cbDataSize,pDataBuffer,lDataRep,hrFault) )
#define IChannelHook_ServerNotify(This,uExtent,riid,cbDataSize,pDataBuffer,lDataRep)    ( (This)->lpVtbl -> ServerNotify(This,uExtent,riid,cbDataSize,pDataBuffer,lDataRep) )
#define IChannelHook_ServerGetSize(This,uExtent,riid,hrFault,pDataSize)    ( (This)->lpVtbl -> ServerGetSize(This,uExtent,riid,hrFault,pDataSize) )
#define IChannelHook_ServerFillBuffer(This,uExtent,riid,pDataSize,pDataBuffer,hrFault)    ( (This)->lpVtbl -> ServerFillBuffer(This,uExtent,riid,pDataSize,pDataBuffer,hrFault) )
#endif
#endif
#endif
extern const FMTID FMTID_SummaryInformation;
extern const FMTID FMTID_DocSummaryInformation;
extern const FMTID FMTID_UserDefinedProperties;
extern const FMTID FMTID_DiscardableInformation;
extern const FMTID FMTID_ImageSummaryInformation;
extern const FMTID FMTID_AudioSummaryInformation;
extern const FMTID FMTID_VideoSummaryInformation;
extern const FMTID FMTID_MediaFileSummaryInformation;
#if  (_WIN32_WINNT >= 0x0400 ) || defined(_WIN32_DCOM)
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0042_v0_0_s_ifspec;
#ifndef __IClientSecurity_INTERFACE_DEFINED__
#define __IClientSecurity_INTERFACE_DEFINED__
typedef struct tagSOLE_AUTHENTICATION_SERVICE
{
	DWORD dwAuthnSvc;
	DWORD dwAuthzSvc;
	OLECHAR *pPrincipalName;
	HRESULT hr;
} SOLE_AUTHENTICATION_SERVICE;
typedef SOLE_AUTHENTICATION_SERVICE *PSOLE_AUTHENTICATION_SERVICE;
typedef enum tagEOLE_AUTHENTICATION_CAPABILITIES
{
	EOAC_NONE = 0,
	EOAC_MUTUAL_AUTH = 0x1,
	EOAC_STATIC_CLOAKING = 0x20,
	EOAC_DYNAMIC_CLOAKING = 0x40,
	EOAC_ANY_AUTHORITY = 0x80,
	EOAC_MAKE_FULLSIC = 0x100,
	EOAC_DEFAULT = 0x800,
	EOAC_SECURE_REFS = 0x2,
	EOAC_ACCESS_CONTROL = 0x4,
	EOAC_APPID = 0x8,
	EOAC_DYNAMIC = 0x10,
	EOAC_REQUIRE_FULLSIC = 0x200,
	EOAC_AUTO_IMPERSONATE = 0x400,
	EOAC_NO_CUSTOM_MARSHAL = 0x2000,
	EOAC_DISABLE_AAA = 0x1000
} EOLE_AUTHENTICATION_CAPABILITIES;
#define	COLE_DEFAULT_PRINCIPAL	( ( OLECHAR * )-1 )
#define	COLE_DEFAULT_AUTHINFO	( ( void * )-1 )
typedef struct tagSOLE_AUTHENTICATION_INFO
{
	DWORD dwAuthnSvc;
	DWORD dwAuthzSvc;
	void *pAuthInfo;
} SOLE_AUTHENTICATION_INFO;
typedef struct tagSOLE_AUTHENTICATION_INFO *PSOLE_AUTHENTICATION_INFO;
typedef struct tagSOLE_AUTHENTICATION_LIST
{
	DWORD cAuthInfo;
	SOLE_AUTHENTICATION_INFO *aAuthInfo;
} SOLE_AUTHENTICATION_LIST;
typedef struct tagSOLE_AUTHENTICATION_LIST *PSOLE_AUTHENTICATION_LIST;
extern const IID IID_IClientSecurity;
typedef struct IClientSecurityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IClientSecurity *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IClientSecurity *This);
	ULONG(STDMETHODCALLTYPE *Release) (IClientSecurity *This);
	HRESULT(STDMETHODCALLTYPE *QueryBlanket) (IClientSecurity *This, IUnknown *pProxy, DWORD *pAuthnSvc, DWORD *pAuthzSvc, OLECHAR **pServerPrincName, DWORD *pAuthnLevel, DWORD *pImpLevel, void **pAuthInfo, DWORD *pCapabilites);
	HRESULT(STDMETHODCALLTYPE *SetBlanket) (IClientSecurity *This, IUnknown *pProxy, DWORD dwAuthnSvc, DWORD dwAuthzSvc, OLECHAR *pServerPrincName, DWORD dwAuthnLevel, DWORD dwImpLevel, void *pAuthInfo, DWORD dwCapabilities);
	HRESULT(STDMETHODCALLTYPE *CopyProxy) (IClientSecurity *This, IUnknown *pProxy, IUnknown **ppCopy);
	END_INTERFACE
} IClientSecurityVtbl;
interface IClientSecurity
{
	CONST_VTBL struct IClientSecurityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IClientSecurity_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IClientSecurity_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IClientSecurity_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IClientSecurity_QueryBlanket(This,pProxy,pAuthnSvc,pAuthzSvc,pServerPrincName,pAuthnLevel,pImpLevel,pAuthInfo,pCapabilites)    ( (This)->lpVtbl -> QueryBlanket(This,pProxy,pAuthnSvc,pAuthzSvc,pServerPrincName,pAuthnLevel,pImpLevel,pAuthInfo,pCapabilites) )
#define IClientSecurity_SetBlanket(This,pProxy,dwAuthnSvc,dwAuthzSvc,pServerPrincName,dwAuthnLevel,dwImpLevel,pAuthInfo,dwCapabilities)    ( (This)->lpVtbl -> SetBlanket(This,pProxy,dwAuthnSvc,dwAuthzSvc,pServerPrincName,dwAuthnLevel,dwImpLevel,pAuthInfo,dwCapabilities) )
#define IClientSecurity_CopyProxy(This,pProxy,ppCopy)    ( (This)->lpVtbl -> CopyProxy(This,pProxy,ppCopy) )
#endif
#endif
#ifndef __IServerSecurity_INTERFACE_DEFINED__
#define __IServerSecurity_INTERFACE_DEFINED__
extern const IID IID_IServerSecurity;
typedef struct IServerSecurityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IServerSecurity *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IServerSecurity *This);
	ULONG(STDMETHODCALLTYPE *Release) (IServerSecurity *This);
	HRESULT(STDMETHODCALLTYPE *QueryBlanket) (IServerSecurity *This, DWORD *pAuthnSvc, DWORD *pAuthzSvc, OLECHAR **pServerPrincName, DWORD *pAuthnLevel, DWORD *pImpLevel, void **pPrivs, DWORD *pCapabilities);
	HRESULT(STDMETHODCALLTYPE *ImpersonateClient) (IServerSecurity *This);
	HRESULT(STDMETHODCALLTYPE *RevertToSelf) (IServerSecurity *This);
	BOOL(STDMETHODCALLTYPE *IsImpersonating) (IServerSecurity *This);
	END_INTERFACE
} IServerSecurityVtbl;
interface IServerSecurity
{
	CONST_VTBL struct IServerSecurityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServerSecurity_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServerSecurity_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IServerSecurity_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IServerSecurity_QueryBlanket(This,pAuthnSvc,pAuthzSvc,pServerPrincName,pAuthnLevel,pImpLevel,pPrivs,pCapabilities)    ( (This)->lpVtbl -> QueryBlanket(This,pAuthnSvc,pAuthzSvc,pServerPrincName,pAuthnLevel,pImpLevel,pPrivs,pCapabilities) )
#define IServerSecurity_ImpersonateClient(This)    ( (This)->lpVtbl -> ImpersonateClient(This) )
#define IServerSecurity_RevertToSelf(This)    ( (This)->lpVtbl -> RevertToSelf(This) )
#define IServerSecurity_IsImpersonating(This)    ( (This)->lpVtbl -> IsImpersonating(This) )
#endif
#endif
#ifndef __IClassActivator_INTERFACE_DEFINED__
#define __IClassActivator_INTERFACE_DEFINED__
extern const IID IID_IClassActivator;
typedef struct IClassActivatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IClassActivator *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IClassActivator *This);
	ULONG(STDMETHODCALLTYPE *Release) (IClassActivator *This);
	HRESULT(STDMETHODCALLTYPE *GetClassObject) (IClassActivator *This, REFCLSID rclsid, DWORD dwClassContext, LCID locale, REFIID riid, void **ppv);
	END_INTERFACE
} IClassActivatorVtbl;
interface IClassActivator
{
	CONST_VTBL struct IClassActivatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IClassActivator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IClassActivator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IClassActivator_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IClassActivator_GetClassObject(This,rclsid,dwClassContext,locale,riid,ppv)    ( (This)->lpVtbl -> GetClassObject(This,rclsid,dwClassContext,locale,riid,ppv) )
#endif
#endif
typedef enum tagRPCOPT_PROPERTIES
{
	COMBND_RPCTIMEOUT = 0x1,
	COMBND_SERVER_LOCALITY = 0x2
} RPCOPT_PROPERTIES;
typedef enum tagRPCOPT_SERVER_LOCALITY_VALUES
{
	SERVER_LOCALITY_PROCESS_LOCAL = 0,
	SERVER_LOCALITY_MACHINE_LOCAL = 1,
	SERVER_LOCALITY_REMOTE = 2
} RPCOPT_SERVER_LOCALITY_VALUES;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0045_v0_0_s_ifspec;
#ifndef __IRpcOptions_INTERFACE_DEFINED__
#define __IRpcOptions_INTERFACE_DEFINED__
extern const IID IID_IRpcOptions;
typedef struct IRpcOptionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRpcOptions *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRpcOptions *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRpcOptions *This);
	HRESULT(STDMETHODCALLTYPE *Set) (IRpcOptions *This, IUnknown *pPrx, RPCOPT_PROPERTIES dwProperty, ULONG_PTR dwValue);
	HRESULT(STDMETHODCALLTYPE *Query) (IRpcOptions *This, IUnknown *pPrx, RPCOPT_PROPERTIES dwProperty, ULONG_PTR *pdwValue);
	END_INTERFACE
} IRpcOptionsVtbl;
interface IRpcOptions
{
	CONST_VTBL struct IRpcOptionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRpcOptions_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRpcOptions_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRpcOptions_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRpcOptions_Set(This,pPrx,dwProperty,dwValue)    ( (This)->lpVtbl -> Set(This,pPrx,dwProperty,dwValue) )
#define IRpcOptions_Query(This,pPrx,dwProperty,pdwValue)    ( (This)->lpVtbl -> Query(This,pPrx,dwProperty,pdwValue) )
#endif
#endif
typedef enum tagGLOBALOPT_PROPERTIES
{
	COMGLB_EXCEPTION_HANDLING = 1,
	COMGLB_APPID = 2,
	COMGLB_RPC_THREADPOOL_SETTING = 3
} GLOBALOPT_PROPERTIES;
typedef enum tagGLOBALOPT_EH_VALUES
{
	COMGLB_EXCEPTION_HANDLE = 0,
	COMGLB_EXCEPTION_DONOT_HANDLE_FATAL = 1,
	COMGLB_EXCEPTION_DONOT_HANDLE = COMGLB_EXCEPTION_DONOT_HANDLE_FATAL,
	COMGLB_EXCEPTION_DONOT_HANDLE_ANY = 2
} GLOBALOPT_EH_VALUES;
typedef enum tagGLOBALOPT_RPCTP_VALUES
{
	COMGLB_RPC_THREADPOOL_SETTING_DEFAULT_POOL = 0,
	COMGLB_RPC_THREADPOOL_SETTING_PRIVATE_POOL = 1
} GLOBALOPT_RPCTP_VALUES;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0046_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0046_v0_0_s_ifspec;
#ifndef __IGlobalOptions_INTERFACE_DEFINED__
#define __IGlobalOptions_INTERFACE_DEFINED__
extern const IID IID_IGlobalOptions;
typedef struct IGlobalOptionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IGlobalOptions *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IGlobalOptions *This);
	ULONG(STDMETHODCALLTYPE *Release) (IGlobalOptions *This);
	HRESULT(STDMETHODCALLTYPE *Set) (IGlobalOptions *This, GLOBALOPT_PROPERTIES dwProperty, ULONG_PTR dwValue);
	HRESULT(STDMETHODCALLTYPE *Query) (IGlobalOptions *This, GLOBALOPT_PROPERTIES dwProperty, ULONG_PTR *pdwValue);
	END_INTERFACE
} IGlobalOptionsVtbl;
interface IGlobalOptions
{
	CONST_VTBL struct IGlobalOptionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGlobalOptions_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGlobalOptions_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IGlobalOptions_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IGlobalOptions_Set(This,dwProperty,dwValue)    ( (This)->lpVtbl -> Set(This,dwProperty,dwValue) )
#define IGlobalOptions_Query(This,dwProperty,pdwValue)    ( (This)->lpVtbl -> Query(This,dwProperty,pdwValue) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0047_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0047_v0_0_s_ifspec;
#ifndef __IFillLockBytes_INTERFACE_DEFINED__
#define __IFillLockBytes_INTERFACE_DEFINED__
extern const IID IID_IFillLockBytes;
typedef struct IFillLockBytesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFillLockBytes *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFillLockBytes *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFillLockBytes *This);
	HRESULT(STDMETHODCALLTYPE *FillAppend) (IFillLockBytes *This, const void *pv, ULONG cb, ULONG *pcbWritten);
	HRESULT(STDMETHODCALLTYPE *FillAt) (IFillLockBytes *This, ULARGE_INTEGER ulOffset, const void *pv, ULONG cb, ULONG *pcbWritten);
	HRESULT(STDMETHODCALLTYPE *SetFillSize) (IFillLockBytes *This, ULARGE_INTEGER ulSize);
	HRESULT(STDMETHODCALLTYPE *Terminate) (IFillLockBytes *This, BOOL bCanceled);
	END_INTERFACE
} IFillLockBytesVtbl;
interface IFillLockBytes
{
	CONST_VTBL struct IFillLockBytesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFillLockBytes_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFillLockBytes_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IFillLockBytes_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IFillLockBytes_FillAppend(This,pv,cb,pcbWritten)    ( (This)->lpVtbl -> FillAppend(This,pv,cb,pcbWritten) )
#define IFillLockBytes_FillAt(This,ulOffset,pv,cb,pcbWritten)    ( (This)->lpVtbl -> FillAt(This,ulOffset,pv,cb,pcbWritten) )
#define IFillLockBytes_SetFillSize(This,ulSize)    ( (This)->lpVtbl -> SetFillSize(This,ulSize) )
#define IFillLockBytes_Terminate(This,bCanceled)    ( (This)->lpVtbl -> Terminate(This,bCanceled) )
#endif
HRESULT __stdcall IFillLockBytes_RemoteFillAppend_Proxy(IFillLockBytes *This, const byte *pv, ULONG cb, ULONG *pcbWritten);
void __RPC_STUB IFillLockBytes_RemoteFillAppend_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT __stdcall IFillLockBytes_RemoteFillAt_Proxy(IFillLockBytes *This, ULARGE_INTEGER ulOffset, const byte *pv, ULONG cb, ULONG *pcbWritten);
void __RPC_STUB IFillLockBytes_RemoteFillAt_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IProgressNotify_INTERFACE_DEFINED__
#define __IProgressNotify_INTERFACE_DEFINED__
extern const IID IID_IProgressNotify;
typedef struct IProgressNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IProgressNotify *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IProgressNotify *This);
	ULONG(STDMETHODCALLTYPE *Release) (IProgressNotify *This);
	HRESULT(STDMETHODCALLTYPE *OnProgress) (IProgressNotify *This, DWORD dwProgressCurrent, DWORD dwProgressMaximum, BOOL fAccurate, BOOL fOwner);
	END_INTERFACE
} IProgressNotifyVtbl;
interface IProgressNotify
{
	CONST_VTBL struct IProgressNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProgressNotify_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProgressNotify_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IProgressNotify_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IProgressNotify_OnProgress(This,dwProgressCurrent,dwProgressMaximum,fAccurate,fOwner)    ( (This)->lpVtbl -> OnProgress(This,dwProgressCurrent,dwProgressMaximum,fAccurate,fOwner) )
#endif
#endif
#ifndef __ILayoutStorage_INTERFACE_DEFINED__
#define __ILayoutStorage_INTERFACE_DEFINED__
typedef struct tagStorageLayout
{
	DWORD LayoutType;
	OLECHAR *pwcsElementName;
	LARGE_INTEGER cOffset;
	LARGE_INTEGER cBytes;
} StorageLayout;
extern const IID IID_ILayoutStorage;
typedef struct ILayoutStorageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ILayoutStorage *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ILayoutStorage *This);
	ULONG(STDMETHODCALLTYPE *Release) (ILayoutStorage *This);
	HRESULT(__stdcall *LayoutScript) (ILayoutStorage *This, StorageLayout *pStorageLayout, DWORD nEntries, DWORD glfInterleavedFlag);
	HRESULT(__stdcall *BeginMonitor) (ILayoutStorage *This);
	HRESULT(__stdcall *EndMonitor) (ILayoutStorage *This);
	HRESULT(__stdcall *ReLayoutDocfile) (ILayoutStorage *This, OLECHAR *pwcsNewDfName);
	HRESULT(__stdcall *ReLayoutDocfileOnILockBytes) (ILayoutStorage *This, ILockBytes *pILockBytes);
	END_INTERFACE
} ILayoutStorageVtbl;
interface ILayoutStorage
{
	CONST_VTBL struct ILayoutStorageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILayoutStorage_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILayoutStorage_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ILayoutStorage_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ILayoutStorage_LayoutScript(This,pStorageLayout,nEntries,glfInterleavedFlag)    ( (This)->lpVtbl -> LayoutScript(This,pStorageLayout,nEntries,glfInterleavedFlag) )
#define ILayoutStorage_BeginMonitor(This)    ( (This)->lpVtbl -> BeginMonitor(This) )
#define ILayoutStorage_EndMonitor(This)    ( (This)->lpVtbl -> EndMonitor(This) )
#define ILayoutStorage_ReLayoutDocfile(This,pwcsNewDfName)    ( (This)->lpVtbl -> ReLayoutDocfile(This,pwcsNewDfName) )
#define ILayoutStorage_ReLayoutDocfileOnILockBytes(This,pILockBytes)    ( (This)->lpVtbl -> ReLayoutDocfileOnILockBytes(This,pILockBytes) )
#endif
#endif
#ifndef __IBlockingLock_INTERFACE_DEFINED__
#define __IBlockingLock_INTERFACE_DEFINED__
extern const IID IID_IBlockingLock;
typedef struct IBlockingLockVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IBlockingLock *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IBlockingLock *This);
	ULONG(STDMETHODCALLTYPE *Release) (IBlockingLock *This);
	HRESULT(STDMETHODCALLTYPE *Lock) (IBlockingLock *This, DWORD dwTimeout);
	HRESULT(STDMETHODCALLTYPE *Unlock) (IBlockingLock *This);
	END_INTERFACE
} IBlockingLockVtbl;
interface IBlockingLock
{
	CONST_VTBL struct IBlockingLockVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBlockingLock_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBlockingLock_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IBlockingLock_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IBlockingLock_Lock(This,dwTimeout)    ( (This)->lpVtbl -> Lock(This,dwTimeout) )
#define IBlockingLock_Unlock(This)    ( (This)->lpVtbl -> Unlock(This) )
#endif
#endif
#ifndef __ITimeAndNoticeControl_INTERFACE_DEFINED__
#define __ITimeAndNoticeControl_INTERFACE_DEFINED__
extern const IID IID_ITimeAndNoticeControl;
typedef struct ITimeAndNoticeControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITimeAndNoticeControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITimeAndNoticeControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITimeAndNoticeControl *This);
	HRESULT(STDMETHODCALLTYPE *SuppressChanges) (ITimeAndNoticeControl *This, DWORD res1, DWORD res2);
	END_INTERFACE
} ITimeAndNoticeControlVtbl;
interface ITimeAndNoticeControl
{
	CONST_VTBL struct ITimeAndNoticeControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITimeAndNoticeControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITimeAndNoticeControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ITimeAndNoticeControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ITimeAndNoticeControl_SuppressChanges(This,res1,res2)    ( (This)->lpVtbl -> SuppressChanges(This,res1,res2) )
#endif
#endif
#ifndef __IOplockStorage_INTERFACE_DEFINED__
#define __IOplockStorage_INTERFACE_DEFINED__
extern const IID IID_IOplockStorage;
typedef struct IOplockStorageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IOplockStorage *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IOplockStorage *This);
	ULONG(STDMETHODCALLTYPE *Release) (IOplockStorage *This);
	HRESULT(STDMETHODCALLTYPE *CreateStorageEx) (IOplockStorage *This, LPCWSTR pwcsName, DWORD grfMode, DWORD stgfmt, DWORD grfAttrs, REFIID riid, void **ppstgOpen);
	HRESULT(STDMETHODCALLTYPE *OpenStorageEx) (IOplockStorage *This, LPCWSTR pwcsName, DWORD grfMode, DWORD stgfmt, DWORD grfAttrs, REFIID riid, void **ppstgOpen);
	END_INTERFACE
} IOplockStorageVtbl;
interface IOplockStorage
{
	CONST_VTBL struct IOplockStorageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOplockStorage_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOplockStorage_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOplockStorage_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOplockStorage_CreateStorageEx(This,pwcsName,grfMode,stgfmt,grfAttrs,riid,ppstgOpen)    ( (This)->lpVtbl -> CreateStorageEx(This,pwcsName,grfMode,stgfmt,grfAttrs,riid,ppstgOpen) )
#define IOplockStorage_OpenStorageEx(This,pwcsName,grfMode,stgfmt,grfAttrs,riid,ppstgOpen)    ( (This)->lpVtbl -> OpenStorageEx(This,pwcsName,grfMode,stgfmt,grfAttrs,riid,ppstgOpen) )
#endif
#endif
#ifndef __ISurrogate_INTERFACE_DEFINED__
#define __ISurrogate_INTERFACE_DEFINED__
typedef ISurrogate *LPSURROGATE;
extern const IID IID_ISurrogate;
typedef struct ISurrogateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISurrogate *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISurrogate *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISurrogate *This);
	HRESULT(STDMETHODCALLTYPE *LoadDllServer) (ISurrogate *This, REFCLSID Clsid);
	HRESULT(STDMETHODCALLTYPE *FreeSurrogate) (ISurrogate *This);
	END_INTERFACE
} ISurrogateVtbl;
interface ISurrogate
{
	CONST_VTBL struct ISurrogateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISurrogate_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISurrogate_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ISurrogate_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ISurrogate_LoadDllServer(This,Clsid)    ( (This)->lpVtbl -> LoadDllServer(This,Clsid) )
#define ISurrogate_FreeSurrogate(This)    ( (This)->lpVtbl -> FreeSurrogate(This) )
#endif
#endif
#ifndef __IGlobalInterfaceTable_INTERFACE_DEFINED__
#define __IGlobalInterfaceTable_INTERFACE_DEFINED__
typedef IGlobalInterfaceTable *LPGLOBALINTERFACETABLE;
extern const IID IID_IGlobalInterfaceTable;
typedef struct IGlobalInterfaceTableVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IGlobalInterfaceTable *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IGlobalInterfaceTable *This);
	ULONG(STDMETHODCALLTYPE *Release) (IGlobalInterfaceTable *This);
	HRESULT(STDMETHODCALLTYPE *RegisterInterfaceInGlobal) (IGlobalInterfaceTable *This, IUnknown *pUnk, REFIID riid, DWORD *pdwCookie);
	HRESULT(STDMETHODCALLTYPE *RevokeInterfaceFromGlobal) (IGlobalInterfaceTable *This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE *GetInterfaceFromGlobal) (IGlobalInterfaceTable *This, DWORD dwCookie, REFIID riid, void **ppv);
	END_INTERFACE
} IGlobalInterfaceTableVtbl;
interface IGlobalInterfaceTable
{
	CONST_VTBL struct IGlobalInterfaceTableVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGlobalInterfaceTable_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGlobalInterfaceTable_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IGlobalInterfaceTable_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IGlobalInterfaceTable_RegisterInterfaceInGlobal(This,pUnk,riid,pdwCookie)    ( (This)->lpVtbl -> RegisterInterfaceInGlobal(This,pUnk,riid,pdwCookie) )
#define IGlobalInterfaceTable_RevokeInterfaceFromGlobal(This,dwCookie)    ( (This)->lpVtbl -> RevokeInterfaceFromGlobal(This,dwCookie) )
#define IGlobalInterfaceTable_GetInterfaceFromGlobal(This,dwCookie,riid,ppv)    ( (This)->lpVtbl -> GetInterfaceFromGlobal(This,dwCookie,riid,ppv) )
#endif
#endif
#ifndef __IDirectWriterLock_INTERFACE_DEFINED__
#define __IDirectWriterLock_INTERFACE_DEFINED__
extern const IID IID_IDirectWriterLock;
typedef struct IDirectWriterLockVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDirectWriterLock *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDirectWriterLock *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDirectWriterLock *This);
	HRESULT(STDMETHODCALLTYPE *WaitForWriteAccess) (IDirectWriterLock *This, DWORD dwTimeout);
	HRESULT(STDMETHODCALLTYPE *ReleaseWriteAccess) (IDirectWriterLock *This);
	HRESULT(STDMETHODCALLTYPE *HaveWriteAccess) (IDirectWriterLock *This);
	END_INTERFACE
} IDirectWriterLockVtbl;
interface IDirectWriterLock
{
	CONST_VTBL struct IDirectWriterLockVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDirectWriterLock_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDirectWriterLock_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDirectWriterLock_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDirectWriterLock_WaitForWriteAccess(This,dwTimeout)    ( (This)->lpVtbl -> WaitForWriteAccess(This,dwTimeout) )
#define IDirectWriterLock_ReleaseWriteAccess(This)    ( (This)->lpVtbl -> ReleaseWriteAccess(This) )
#define IDirectWriterLock_HaveWriteAccess(This)    ( (This)->lpVtbl -> HaveWriteAccess(This) )
#endif
#endif
#ifndef __ISynchronize_INTERFACE_DEFINED__
#define __ISynchronize_INTERFACE_DEFINED__
extern const IID IID_ISynchronize;
typedef struct ISynchronizeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISynchronize *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISynchronize *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISynchronize *This);
	HRESULT(STDMETHODCALLTYPE *Wait) (ISynchronize *This, DWORD dwFlags, DWORD dwMilliseconds);
	HRESULT(STDMETHODCALLTYPE *Signal) (ISynchronize *This);
	HRESULT(STDMETHODCALLTYPE *Reset) (ISynchronize *This);
	END_INTERFACE
} ISynchronizeVtbl;
interface ISynchronize
{
	CONST_VTBL struct ISynchronizeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISynchronize_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISynchronize_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ISynchronize_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ISynchronize_Wait(This,dwFlags,dwMilliseconds)    ( (This)->lpVtbl -> Wait(This,dwFlags,dwMilliseconds) )
#define ISynchronize_Signal(This)    ( (This)->lpVtbl -> Signal(This) )
#define ISynchronize_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#endif
#endif
#ifndef __ISynchronizeHandle_INTERFACE_DEFINED__
#define __ISynchronizeHandle_INTERFACE_DEFINED__
extern const IID IID_ISynchronizeHandle;
typedef struct ISynchronizeHandleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISynchronizeHandle *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISynchronizeHandle *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISynchronizeHandle *This);
	HRESULT(STDMETHODCALLTYPE *GetHandle) (ISynchronizeHandle *This, HANDLE *ph);
	END_INTERFACE
} ISynchronizeHandleVtbl;
interface ISynchronizeHandle
{
	CONST_VTBL struct ISynchronizeHandleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISynchronizeHandle_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISynchronizeHandle_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ISynchronizeHandle_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ISynchronizeHandle_GetHandle(This,ph)    ( (This)->lpVtbl -> GetHandle(This,ph) )
#endif
#endif
#ifndef __ISynchronizeEvent_INTERFACE_DEFINED__
#define __ISynchronizeEvent_INTERFACE_DEFINED__
extern const IID IID_ISynchronizeEvent;
typedef struct ISynchronizeEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISynchronizeEvent *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISynchronizeEvent *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISynchronizeEvent *This);
	HRESULT(STDMETHODCALLTYPE *GetHandle) (ISynchronizeEvent *This, HANDLE *ph);
	HRESULT(STDMETHODCALLTYPE *SetEventHandle) (ISynchronizeEvent *This, HANDLE *ph);
	END_INTERFACE
} ISynchronizeEventVtbl;
interface ISynchronizeEvent
{
	CONST_VTBL struct ISynchronizeEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISynchronizeEvent_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISynchronizeEvent_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ISynchronizeEvent_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ISynchronizeEvent_GetHandle(This,ph)    ( (This)->lpVtbl -> GetHandle(This,ph) )
#define ISynchronizeEvent_SetEventHandle(This,ph)    ( (This)->lpVtbl -> SetEventHandle(This,ph) )
#endif
#endif
#ifndef __ISynchronizeContainer_INTERFACE_DEFINED__
#define __ISynchronizeContainer_INTERFACE_DEFINED__
extern const IID IID_ISynchronizeContainer;
typedef struct ISynchronizeContainerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISynchronizeContainer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISynchronizeContainer *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISynchronizeContainer *This);
	HRESULT(STDMETHODCALLTYPE *AddSynchronize) (ISynchronizeContainer *This, ISynchronize *pSync);
	HRESULT(STDMETHODCALLTYPE *WaitMultiple) (ISynchronizeContainer *This, DWORD dwFlags, DWORD dwTimeOut, ISynchronize **ppSync);
	END_INTERFACE
} ISynchronizeContainerVtbl;
interface ISynchronizeContainer
{
	CONST_VTBL struct ISynchronizeContainerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISynchronizeContainer_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISynchronizeContainer_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ISynchronizeContainer_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ISynchronizeContainer_AddSynchronize(This,pSync)    ( (This)->lpVtbl -> AddSynchronize(This,pSync) )
#define ISynchronizeContainer_WaitMultiple(This,dwFlags,dwTimeOut,ppSync)    ( (This)->lpVtbl -> WaitMultiple(This,dwFlags,dwTimeOut,ppSync) )
#endif
#endif
#ifndef __ISynchronizeMutex_INTERFACE_DEFINED__
#define __ISynchronizeMutex_INTERFACE_DEFINED__
extern const IID IID_ISynchronizeMutex;
typedef struct ISynchronizeMutexVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISynchronizeMutex *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISynchronizeMutex *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISynchronizeMutex *This);
	HRESULT(STDMETHODCALLTYPE *Wait) (ISynchronizeMutex *This, DWORD dwFlags, DWORD dwMilliseconds);
	HRESULT(STDMETHODCALLTYPE *Signal) (ISynchronizeMutex *This);
	HRESULT(STDMETHODCALLTYPE *Reset) (ISynchronizeMutex *This);
	HRESULT(STDMETHODCALLTYPE *ReleaseMutex) (ISynchronizeMutex *This);
	END_INTERFACE
} ISynchronizeMutexVtbl;
interface ISynchronizeMutex
{
	CONST_VTBL struct ISynchronizeMutexVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISynchronizeMutex_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISynchronizeMutex_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ISynchronizeMutex_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ISynchronizeMutex_Wait(This,dwFlags,dwMilliseconds)    ( (This)->lpVtbl -> Wait(This,dwFlags,dwMilliseconds) )
#define ISynchronizeMutex_Signal(This)    ( (This)->lpVtbl -> Signal(This) )
#define ISynchronizeMutex_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define ISynchronizeMutex_ReleaseMutex(This)    ( (This)->lpVtbl -> ReleaseMutex(This) )
#endif
#endif
#ifndef __ICancelMethodCalls_INTERFACE_DEFINED__
#define __ICancelMethodCalls_INTERFACE_DEFINED__
typedef ICancelMethodCalls *LPCANCELMETHODCALLS;
extern const IID IID_ICancelMethodCalls;
typedef struct ICancelMethodCallsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICancelMethodCalls *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICancelMethodCalls *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICancelMethodCalls *This);
	HRESULT(STDMETHODCALLTYPE *Cancel) (ICancelMethodCalls *This, ULONG ulSeconds);
	HRESULT(STDMETHODCALLTYPE *TestCancel) (ICancelMethodCalls *This);
	END_INTERFACE
} ICancelMethodCallsVtbl;
interface ICancelMethodCalls
{
	CONST_VTBL struct ICancelMethodCallsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICancelMethodCalls_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICancelMethodCalls_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICancelMethodCalls_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICancelMethodCalls_Cancel(This,ulSeconds)    ( (This)->lpVtbl -> Cancel(This,ulSeconds) )
#define ICancelMethodCalls_TestCancel(This)    ( (This)->lpVtbl -> TestCancel(This) )
#endif
#endif
#ifndef __IAsyncManager_INTERFACE_DEFINED__
#define __IAsyncManager_INTERFACE_DEFINED__
typedef enum tagDCOM_CALL_STATE
{
	DCOM_NONE = 0,
	DCOM_CALL_COMPLETE = 0x1,
	DCOM_CALL_CANCELED = 0x2
} DCOM_CALL_STATE;
extern const IID IID_IAsyncManager;
typedef struct IAsyncManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAsyncManager *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAsyncManager *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAsyncManager *This);
	HRESULT(STDMETHODCALLTYPE *CompleteCall) (IAsyncManager *This, HRESULT Result);
	HRESULT(STDMETHODCALLTYPE *GetCallContext) (IAsyncManager *This, REFIID riid, void **pInterface);
	HRESULT(STDMETHODCALLTYPE *GetState) (IAsyncManager *This, ULONG *pulStateFlags);
	END_INTERFACE
} IAsyncManagerVtbl;
interface IAsyncManager
{
	CONST_VTBL struct IAsyncManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAsyncManager_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAsyncManager_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAsyncManager_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAsyncManager_CompleteCall(This,Result)    ( (This)->lpVtbl -> CompleteCall(This,Result) )
#define IAsyncManager_GetCallContext(This,riid,pInterface)    ( (This)->lpVtbl -> GetCallContext(This,riid,pInterface) )
#define IAsyncManager_GetState(This,pulStateFlags)    ( (This)->lpVtbl -> GetState(This,pulStateFlags) )
#endif
#endif
#ifndef __ICallFactory_INTERFACE_DEFINED__
#define __ICallFactory_INTERFACE_DEFINED__
extern const IID IID_ICallFactory;
typedef struct ICallFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICallFactory *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICallFactory *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICallFactory *This);
	HRESULT(STDMETHODCALLTYPE *CreateCall) (ICallFactory *This, REFIID riid, IUnknown *pCtrlUnk, REFIID riid2, IUnknown **ppv);
	END_INTERFACE
} ICallFactoryVtbl;
interface ICallFactory
{
	CONST_VTBL struct ICallFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICallFactory_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICallFactory_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICallFactory_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICallFactory_CreateCall(This,riid,pCtrlUnk,riid2,ppv)    ( (This)->lpVtbl -> CreateCall(This,riid,pCtrlUnk,riid2,ppv) )
#endif
#endif
#ifndef __IRpcHelper_INTERFACE_DEFINED__
#define __IRpcHelper_INTERFACE_DEFINED__
extern const IID IID_IRpcHelper;
typedef struct IRpcHelperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRpcHelper *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRpcHelper *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRpcHelper *This);
	HRESULT(STDMETHODCALLTYPE *GetDCOMProtocolVersion) (IRpcHelper *This, DWORD *pComVersion);
	HRESULT(STDMETHODCALLTYPE *GetIIDFromOBJREF) (IRpcHelper *This, void *pObjRef, IID **piid);
	END_INTERFACE
} IRpcHelperVtbl;
interface IRpcHelper
{
	CONST_VTBL struct IRpcHelperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRpcHelper_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRpcHelper_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRpcHelper_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRpcHelper_GetDCOMProtocolVersion(This,pComVersion)    ( (This)->lpVtbl -> GetDCOMProtocolVersion(This,pComVersion) )
#define IRpcHelper_GetIIDFromOBJREF(This,pObjRef,piid)    ( (This)->lpVtbl -> GetIIDFromOBJREF(This,pObjRef,piid) )
#endif
#endif
#ifndef __IReleaseMarshalBuffers_INTERFACE_DEFINED__
#define __IReleaseMarshalBuffers_INTERFACE_DEFINED__
extern const IID IID_IReleaseMarshalBuffers;
typedef struct IReleaseMarshalBuffersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IReleaseMarshalBuffers *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IReleaseMarshalBuffers *This);
	ULONG(STDMETHODCALLTYPE *Release) (IReleaseMarshalBuffers *This);
	HRESULT(STDMETHODCALLTYPE *ReleaseMarshalBuffer) (IReleaseMarshalBuffers *This, RPCOLEMESSAGE *pMsg, DWORD dwFlags, IUnknown *pChnl);
	END_INTERFACE
} IReleaseMarshalBuffersVtbl;
interface IReleaseMarshalBuffers
{
	CONST_VTBL struct IReleaseMarshalBuffersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IReleaseMarshalBuffers_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IReleaseMarshalBuffers_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IReleaseMarshalBuffers_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IReleaseMarshalBuffers_ReleaseMarshalBuffer(This,pMsg,dwFlags,pChnl)    ( (This)->lpVtbl -> ReleaseMarshalBuffer(This,pMsg,dwFlags,pChnl) )
#endif
#endif
#ifndef __IWaitMultiple_INTERFACE_DEFINED__
#define __IWaitMultiple_INTERFACE_DEFINED__
extern const IID IID_IWaitMultiple;
typedef struct IWaitMultipleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWaitMultiple *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWaitMultiple *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWaitMultiple *This);
	HRESULT(STDMETHODCALLTYPE *WaitMultiple) (IWaitMultiple *This, DWORD timeout, ISynchronize **pSync);
	HRESULT(STDMETHODCALLTYPE *AddSynchronize) (IWaitMultiple *This, ISynchronize *pSync);
	END_INTERFACE
} IWaitMultipleVtbl;
interface IWaitMultiple
{
	CONST_VTBL struct IWaitMultipleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWaitMultiple_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWaitMultiple_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IWaitMultiple_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IWaitMultiple_WaitMultiple(This,timeout,pSync)    ( (This)->lpVtbl -> WaitMultiple(This,timeout,pSync) )
#define IWaitMultiple_AddSynchronize(This,pSync)    ( (This)->lpVtbl -> AddSynchronize(This,pSync) )
#endif
#endif
#ifndef __IUrlMon_INTERFACE_DEFINED__
#define __IUrlMon_INTERFACE_DEFINED__
extern const IID IID_IUrlMon;
typedef struct IUrlMonVtbl
{
		BEGIN_INTERFACE
		HRESULT(STDMETHODCALLTYPE *QueryInterface) (IUrlMon *This, REFIID riid, void **ppvObject);
		ULONG(STDMETHODCALLTYPE *AddRef) (IUrlMon *This);
		ULONG(STDMETHODCALLTYPE *Release) (IUrlMon *This);
		HRESULT(STDMETHODCALLTYPE *AsyncGetClassBits) (IUrlMon *This, REFCLSID rclsid, LPCWSTR pszTYPE, LPCWSTR pszExt, DWORD dwFileVersionMS, DWORD dwFileVersionLS, LPCWSTR pszCodeBase, IBindCtx *pbc, DWORD dwClassContext, REFIID riid, DWORD flags);
		END_INTERFACE
} IUrlMonVtbl;
interface IUrlMon
{
	CONST_VTBL struct IUrlMonVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUrlMon_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUrlMon_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IUrlMon_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IUrlMon_AsyncGetClassBits(This,rclsid,pszTYPE,pszExt,dwFileVersionMS,dwFileVersionLS,pszCodeBase,pbc,dwClassContext,riid,flags)    ( (This)->lpVtbl -> AsyncGetClassBits(This,rclsid,pszTYPE,pszExt,dwFileVersionMS,dwFileVersionLS,pszCodeBase,pbc,dwClassContext,riid,flags) )
#endif
#endif
#ifndef __IForegroundTransfer_INTERFACE_DEFINED__
#define __IForegroundTransfer_INTERFACE_DEFINED__
extern const IID IID_IForegroundTransfer;
typedef struct IForegroundTransferVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IForegroundTransfer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IForegroundTransfer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IForegroundTransfer *This);
	HRESULT(STDMETHODCALLTYPE *AllowForegroundTransfer) (IForegroundTransfer *This, void *lpvReserved);
	END_INTERFACE
} IForegroundTransferVtbl;
interface IForegroundTransfer
{
	CONST_VTBL struct IForegroundTransferVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IForegroundTransfer_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IForegroundTransfer_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IForegroundTransfer_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IForegroundTransfer_AllowForegroundTransfer(This,lpvReserved)    ( (This)->lpVtbl -> AllowForegroundTransfer(This,lpvReserved) )
#endif
#endif
#ifndef __IAddrTrackingControl_INTERFACE_DEFINED__
#define __IAddrTrackingControl_INTERFACE_DEFINED__
typedef IAddrTrackingControl *LPADDRTRACKINGCONTROL;
extern const IID IID_IAddrTrackingControl;
typedef struct IAddrTrackingControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAddrTrackingControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAddrTrackingControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAddrTrackingControl *This);
	HRESULT(STDMETHODCALLTYPE *EnableCOMDynamicAddrTracking) (IAddrTrackingControl *This);
	HRESULT(STDMETHODCALLTYPE *DisableCOMDynamicAddrTracking) (IAddrTrackingControl *This);
	END_INTERFACE
} IAddrTrackingControlVtbl;
interface IAddrTrackingControl
{
	CONST_VTBL struct IAddrTrackingControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAddrTrackingControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAddrTrackingControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAddrTrackingControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAddrTrackingControl_EnableCOMDynamicAddrTracking(This)    ( (This)->lpVtbl -> EnableCOMDynamicAddrTracking(This) )
#define IAddrTrackingControl_DisableCOMDynamicAddrTracking(This)    ( (This)->lpVtbl -> DisableCOMDynamicAddrTracking(This) )
#endif
#endif
#ifndef __IAddrExclusionControl_INTERFACE_DEFINED__
#define __IAddrExclusionControl_INTERFACE_DEFINED__
typedef IAddrExclusionControl *LPADDREXCLUSIONCONTROL;
extern const IID IID_IAddrExclusionControl;
typedef struct IAddrExclusionControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAddrExclusionControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAddrExclusionControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAddrExclusionControl *This);
	HRESULT(STDMETHODCALLTYPE *GetCurrentAddrExclusionList) (IAddrExclusionControl *This, REFIID riid, void **ppEnumerator);
	HRESULT(STDMETHODCALLTYPE *UpdateAddrExclusionList) (IAddrExclusionControl *This, IUnknown *pEnumerator);
	END_INTERFACE
} IAddrExclusionControlVtbl;
interface IAddrExclusionControl
{
	CONST_VTBL struct IAddrExclusionControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAddrExclusionControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAddrExclusionControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAddrExclusionControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAddrExclusionControl_GetCurrentAddrExclusionList(This,riid,ppEnumerator)    ( (This)->lpVtbl -> GetCurrentAddrExclusionList(This,riid,ppEnumerator) )
#define IAddrExclusionControl_UpdateAddrExclusionList(This,pEnumerator)    ( (This)->lpVtbl -> UpdateAddrExclusionList(This,pEnumerator) )
#endif
#endif
#ifndef __IPipeByte_INTERFACE_DEFINED__
#define __IPipeByte_INTERFACE_DEFINED__
extern const IID IID_IPipeByte;
typedef struct IPipeByteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPipeByte *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPipeByte *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPipeByte *This);
	HRESULT(STDMETHODCALLTYPE *Pull) (IPipeByte *This, BYTE *buf, ULONG cRequest, ULONG *pcReturned);
	HRESULT(STDMETHODCALLTYPE *Push) (IPipeByte *This, BYTE *buf, ULONG cSent);
	END_INTERFACE
} IPipeByteVtbl;
interface IPipeByte
{
	CONST_VTBL struct IPipeByteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPipeByte_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPipeByte_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPipeByte_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPipeByte_Pull(This,buf,cRequest,pcReturned)    ( (This)->lpVtbl -> Pull(This,buf,cRequest,pcReturned) )
#define IPipeByte_Push(This,buf,cSent)    ( (This)->lpVtbl -> Push(This,buf,cSent) )
#endif
#endif
#ifndef __AsyncIPipeByte_INTERFACE_DEFINED__
#define __AsyncIPipeByte_INTERFACE_DEFINED__
extern const IID IID_AsyncIPipeByte;
typedef struct AsyncIPipeByteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (AsyncIPipeByte *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (AsyncIPipeByte *This);
	ULONG(STDMETHODCALLTYPE *Release) (AsyncIPipeByte *This);
	HRESULT(STDMETHODCALLTYPE *Begin_Pull) (AsyncIPipeByte *This, ULONG cRequest);
	HRESULT(STDMETHODCALLTYPE *Finish_Pull) (AsyncIPipeByte *This, BYTE *buf, ULONG *pcReturned);
	HRESULT(STDMETHODCALLTYPE *Begin_Push) (AsyncIPipeByte *This, BYTE *buf, ULONG cSent);
	HRESULT(STDMETHODCALLTYPE *Finish_Push) (AsyncIPipeByte *This);
	END_INTERFACE
} AsyncIPipeByteVtbl;
interface AsyncIPipeByte
{
	CONST_VTBL struct AsyncIPipeByteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncIPipeByte_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncIPipeByte_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define AsyncIPipeByte_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define AsyncIPipeByte_Begin_Pull(This,cRequest)    ( (This)->lpVtbl -> Begin_Pull(This,cRequest) )
#define AsyncIPipeByte_Finish_Pull(This,buf,pcReturned)    ( (This)->lpVtbl -> Finish_Pull(This,buf,pcReturned) )
#define AsyncIPipeByte_Begin_Push(This,buf,cSent)    ( (This)->lpVtbl -> Begin_Push(This,buf,cSent) )
#define AsyncIPipeByte_Finish_Push(This)    ( (This)->lpVtbl -> Finish_Push(This) )
#endif
#endif
#ifndef __IPipeLong_INTERFACE_DEFINED__
#define __IPipeLong_INTERFACE_DEFINED__
extern const IID IID_IPipeLong;
typedef struct IPipeLongVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPipeLong *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPipeLong *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPipeLong *This);
	HRESULT(STDMETHODCALLTYPE *Pull) (IPipeLong *This, LONG *buf, ULONG cRequest, ULONG *pcReturned);
	HRESULT(STDMETHODCALLTYPE *Push) (IPipeLong *This, LONG *buf, ULONG cSent);
	END_INTERFACE
} IPipeLongVtbl;
interface IPipeLong
{
	CONST_VTBL struct IPipeLongVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPipeLong_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPipeLong_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPipeLong_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPipeLong_Pull(This,buf,cRequest,pcReturned)    ( (This)->lpVtbl -> Pull(This,buf,cRequest,pcReturned) )
#define IPipeLong_Push(This,buf,cSent)    ( (This)->lpVtbl -> Push(This,buf,cSent) )
#endif
#endif
#ifndef __AsyncIPipeLong_INTERFACE_DEFINED__
#define __AsyncIPipeLong_INTERFACE_DEFINED__
extern const IID IID_AsyncIPipeLong;
typedef struct AsyncIPipeLongVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (AsyncIPipeLong *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (AsyncIPipeLong *This);
	ULONG(STDMETHODCALLTYPE *Release) (AsyncIPipeLong *This);
	HRESULT(STDMETHODCALLTYPE *Begin_Pull) (AsyncIPipeLong *This, ULONG cRequest);
	HRESULT(STDMETHODCALLTYPE *Finish_Pull) (AsyncIPipeLong *This, LONG *buf, ULONG *pcReturned);
	HRESULT(STDMETHODCALLTYPE *Begin_Push) (AsyncIPipeLong *This, LONG *buf, ULONG cSent);
	HRESULT(STDMETHODCALLTYPE *Finish_Push) (AsyncIPipeLong *This);
	END_INTERFACE
} AsyncIPipeLongVtbl;
interface AsyncIPipeLong
{
	CONST_VTBL struct AsyncIPipeLongVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncIPipeLong_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncIPipeLong_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define AsyncIPipeLong_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define AsyncIPipeLong_Begin_Pull(This,cRequest)    ( (This)->lpVtbl -> Begin_Pull(This,cRequest) )
#define AsyncIPipeLong_Finish_Pull(This,buf,pcReturned)    ( (This)->lpVtbl -> Finish_Pull(This,buf,pcReturned) )
#define AsyncIPipeLong_Begin_Push(This,buf,cSent)    ( (This)->lpVtbl -> Begin_Push(This,buf,cSent) )
#define AsyncIPipeLong_Finish_Push(This)    ( (This)->lpVtbl -> Finish_Push(This) )
#endif
#endif
#ifndef __IPipeDouble_INTERFACE_DEFINED__
#define __IPipeDouble_INTERFACE_DEFINED__
extern const IID IID_IPipeDouble;
typedef struct IPipeDoubleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPipeDouble *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPipeDouble *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPipeDouble *This);
	HRESULT(STDMETHODCALLTYPE *Pull) (IPipeDouble *This, DOUBLE *buf, ULONG cRequest, ULONG *pcReturned);
	HRESULT(STDMETHODCALLTYPE *Push) (IPipeDouble *This, DOUBLE *buf, ULONG cSent);
	END_INTERFACE
} IPipeDoubleVtbl;
interface IPipeDouble
{
	CONST_VTBL struct IPipeDoubleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPipeDouble_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPipeDouble_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPipeDouble_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPipeDouble_Pull(This,buf,cRequest,pcReturned)    ( (This)->lpVtbl -> Pull(This,buf,cRequest,pcReturned) )
#define IPipeDouble_Push(This,buf,cSent)    ( (This)->lpVtbl -> Push(This,buf,cSent) )
#endif
#endif
#ifndef __AsyncIPipeDouble_INTERFACE_DEFINED__
#define __AsyncIPipeDouble_INTERFACE_DEFINED__
extern const IID IID_AsyncIPipeDouble;
typedef struct AsyncIPipeDoubleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (AsyncIPipeDouble *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (AsyncIPipeDouble *This);
	ULONG(STDMETHODCALLTYPE *Release) (AsyncIPipeDouble *This);
	HRESULT(STDMETHODCALLTYPE *Begin_Pull) (AsyncIPipeDouble *This, ULONG cRequest);
	HRESULT(STDMETHODCALLTYPE *Finish_Pull) (AsyncIPipeDouble *This, DOUBLE *buf, ULONG *pcReturned);
	HRESULT(STDMETHODCALLTYPE *Begin_Push) (AsyncIPipeDouble *This, DOUBLE *buf, ULONG cSent);
	HRESULT(STDMETHODCALLTYPE *Finish_Push) (AsyncIPipeDouble *This);
	END_INTERFACE
} AsyncIPipeDoubleVtbl;
interface AsyncIPipeDouble
{
	CONST_VTBL struct AsyncIPipeDoubleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncIPipeDouble_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncIPipeDouble_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define AsyncIPipeDouble_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define AsyncIPipeDouble_Begin_Pull(This,cRequest)    ( (This)->lpVtbl -> Begin_Pull(This,cRequest) )
#define AsyncIPipeDouble_Finish_Pull(This,buf,pcReturned)    ( (This)->lpVtbl -> Finish_Pull(This,buf,pcReturned) )
#define AsyncIPipeDouble_Begin_Push(This,buf,cSent)    ( (This)->lpVtbl -> Begin_Push(This,buf,cSent) )
#define AsyncIPipeDouble_Finish_Push(This)    ( (This)->lpVtbl -> Finish_Push(This) )
#endif
#endif
#ifndef __IThumbnailExtractor_INTERFACE_DEFINED__
#define __IThumbnailExtractor_INTERFACE_DEFINED__
extern const IID IID_IThumbnailExtractor;
typedef struct IThumbnailExtractorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IThumbnailExtractor *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IThumbnailExtractor *This);
	ULONG(STDMETHODCALLTYPE *Release) (IThumbnailExtractor *This);
	HRESULT(STDMETHODCALLTYPE *ExtractThumbnail) (IThumbnailExtractor *This, IStorage *pStg, ULONG ulLength, ULONG ulHeight, ULONG *pulOutputLength, ULONG *pulOutputHeight, HBITMAP *phOutputBitmap);
	HRESULT(STDMETHODCALLTYPE *OnFileUpdated) (IThumbnailExtractor *This, IStorage *pStg);
	END_INTERFACE
} IThumbnailExtractorVtbl;
interface IThumbnailExtractor
{
	CONST_VTBL struct IThumbnailExtractorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IThumbnailExtractor_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IThumbnailExtractor_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IThumbnailExtractor_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IThumbnailExtractor_ExtractThumbnail(This,pStg,ulLength,ulHeight,pulOutputLength,pulOutputHeight,phOutputBitmap)    ( (This)->lpVtbl -> ExtractThumbnail(This,pStg,ulLength,ulHeight,pulOutputLength,pulOutputHeight,phOutputBitmap) )
#define IThumbnailExtractor_OnFileUpdated(This,pStg)    ( (This)->lpVtbl -> OnFileUpdated(This,pStg) )
#endif
#endif
#ifndef __IDummyHICONIncluder_INTERFACE_DEFINED__
#define __IDummyHICONIncluder_INTERFACE_DEFINED__
extern const IID IID_IDummyHICONIncluder;
typedef struct IDummyHICONIncluderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDummyHICONIncluder *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDummyHICONIncluder *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDummyHICONIncluder *This);
	HRESULT(STDMETHODCALLTYPE *Dummy) (IDummyHICONIncluder *This, HICON h1, HDC h2);
	END_INTERFACE
} IDummyHICONIncluderVtbl;
interface IDummyHICONIncluder
{
	CONST_VTBL struct IDummyHICONIncluderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDummyHICONIncluder_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDummyHICONIncluder_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDummyHICONIncluder_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDummyHICONIncluder_Dummy(This,h1,h2)    ( (This)->lpVtbl -> Dummy(This,h1,h2) )
#endif
#endif
#if defined USE_COM_CONTEXT_DEF || defined BUILDTYPE_COMSVCS || defined _OLE32_
typedef DWORD CPFLAGS;
typedef struct tagContextProperty
{
	GUID policyId;
	CPFLAGS flags;
	IUnknown *pUnk;
} ContextProperty;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0076_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0076_v0_0_s_ifspec;
#ifndef __IEnumContextProps_INTERFACE_DEFINED__
#define __IEnumContextProps_INTERFACE_DEFINED__
typedef IEnumContextProps *LPENUMCONTEXTPROPS;
extern const IID IID_IEnumContextProps;
typedef struct IEnumContextPropsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumContextProps *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumContextProps *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumContextProps *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumContextProps *This, ULONG celt, ContextProperty *pContextProperties, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumContextProps *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumContextProps *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumContextProps *This, IEnumContextProps **ppEnumContextProps);
	HRESULT(STDMETHODCALLTYPE *Count) (IEnumContextProps *This, ULONG *pcelt);
	END_INTERFACE
} IEnumContextPropsVtbl;
interface IEnumContextProps
{
	CONST_VTBL struct IEnumContextPropsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumContextProps_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumContextProps_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumContextProps_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumContextProps_Next(This,celt,pContextProperties,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,pContextProperties,pceltFetched) )
#define IEnumContextProps_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumContextProps_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumContextProps_Clone(This,ppEnumContextProps)    ( (This)->lpVtbl -> Clone(This,ppEnumContextProps) )
#define IEnumContextProps_Count(This,pcelt)    ( (This)->lpVtbl -> Count(This,pcelt) )
#endif
#endif
#ifndef __IContext_INTERFACE_DEFINED__
#define __IContext_INTERFACE_DEFINED__
extern const IID IID_IContext;
typedef struct IContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IContext *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IContext *This);
	ULONG(STDMETHODCALLTYPE *Release) (IContext *This);
	HRESULT(STDMETHODCALLTYPE *SetProperty) (IContext *This, REFGUID rpolicyId, CPFLAGS flags, IUnknown *pUnk);
	HRESULT(STDMETHODCALLTYPE *RemoveProperty) (IContext *This, REFGUID rPolicyId);
	HRESULT(STDMETHODCALLTYPE *GetProperty) (IContext *This, REFGUID rGuid, CPFLAGS *pFlags, IUnknown **ppUnk);
	HRESULT(STDMETHODCALLTYPE *EnumContextProps) (IContext *This, IEnumContextProps **ppEnumContextProps);
	END_INTERFACE
} IContextVtbl;
interface IContext
{
	CONST_VTBL struct IContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContext_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContext_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IContext_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IContext_SetProperty(This,rpolicyId,flags,pUnk)    ( (This)->lpVtbl -> SetProperty(This,rpolicyId,flags,pUnk) )
#define IContext_RemoveProperty(This,rPolicyId)    ( (This)->lpVtbl -> RemoveProperty(This,rPolicyId) )
#define IContext_GetProperty(This,rGuid,pFlags,ppUnk)    ( (This)->lpVtbl -> GetProperty(This,rGuid,pFlags,ppUnk) )
#define IContext_EnumContextProps(This,ppEnumContextProps)    ( (This)->lpVtbl -> EnumContextProps(This,ppEnumContextProps) )
#endif
#endif
#if !defined BUILDTYPE_COMSVCS && !defined _OLE32_
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0078_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0078_v0_0_s_ifspec;
#ifndef __IObjContext_INTERFACE_DEFINED__
#define __IObjContext_INTERFACE_DEFINED__
extern const IID IID_IObjContext;
typedef struct IObjContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IObjContext *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IObjContext *This);
	ULONG(STDMETHODCALLTYPE *Release) (IObjContext *This);
	HRESULT(STDMETHODCALLTYPE *SetProperty) (IObjContext *This, REFGUID rpolicyId, CPFLAGS flags, IUnknown *pUnk);
	HRESULT(STDMETHODCALLTYPE *RemoveProperty) (IObjContext *This, REFGUID rPolicyId);
	HRESULT(STDMETHODCALLTYPE *GetProperty) (IObjContext *This, REFGUID rGuid, CPFLAGS *pFlags, IUnknown **ppUnk);
	HRESULT(STDMETHODCALLTYPE *EnumContextProps) (IObjContext *This, IEnumContextProps **ppEnumContextProps);
	void (STDMETHODCALLTYPE *Reserved1) (IObjContext *This);
	void (STDMETHODCALLTYPE *Reserved2) (IObjContext *This);
	void (STDMETHODCALLTYPE *Reserved3) (IObjContext *This);
	void (STDMETHODCALLTYPE *Reserved4) (IObjContext *This);
	void (STDMETHODCALLTYPE *Reserved5) (IObjContext *This);
	void (STDMETHODCALLTYPE *Reserved6) (IObjContext *This);
	void (STDMETHODCALLTYPE *Reserved7) (IObjContext *This);
	END_INTERFACE
} IObjContextVtbl;
interface IObjContext
{
	CONST_VTBL struct IObjContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjContext_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjContext_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IObjContext_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IObjContext_SetProperty(This,rpolicyId,flags,pUnk)    ( (This)->lpVtbl -> SetProperty(This,rpolicyId,flags,pUnk) )
#define IObjContext_RemoveProperty(This,rPolicyId)    ( (This)->lpVtbl -> RemoveProperty(This,rPolicyId) )
#define IObjContext_GetProperty(This,rGuid,pFlags,ppUnk)    ( (This)->lpVtbl -> GetProperty(This,rGuid,pFlags,ppUnk) )
#define IObjContext_EnumContextProps(This,ppEnumContextProps)    ( (This)->lpVtbl -> EnumContextProps(This,ppEnumContextProps) )
#define IObjContext_Reserved1(This)    ( (This)->lpVtbl -> Reserved1(This) )
#define IObjContext_Reserved2(This)    ( (This)->lpVtbl -> Reserved2(This) )
#define IObjContext_Reserved3(This)    ( (This)->lpVtbl -> Reserved3(This) )
#define IObjContext_Reserved4(This)    ( (This)->lpVtbl -> Reserved4(This) )
#define IObjContext_Reserved5(This)    ( (This)->lpVtbl -> Reserved5(This) )
#define IObjContext_Reserved6(This)    ( (This)->lpVtbl -> Reserved6(This) )
#define IObjContext_Reserved7(This)    ( (This)->lpVtbl -> Reserved7(This) )
#endif
#endif
#endif
#endif
typedef enum tagApplicationType
{
	ServerApplication = 0,
	LibraryApplication = (ServerApplication + 1)
} ApplicationType;
typedef enum tagShutdownType
{
	IdleShutdown = 0,
	ForcedShutdown = (IdleShutdown + 1)
} ShutdownType;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0079_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0079_v0_0_s_ifspec;
#ifndef __IProcessLock_INTERFACE_DEFINED__
#define __IProcessLock_INTERFACE_DEFINED__
extern const IID IID_IProcessLock;
typedef struct IProcessLockVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IProcessLock *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IProcessLock *This);
	ULONG(STDMETHODCALLTYPE *Release) (IProcessLock *This);
	ULONG(STDMETHODCALLTYPE *AddRefOnProcess) (IProcessLock *This);
	ULONG(STDMETHODCALLTYPE *ReleaseRefOnProcess) (IProcessLock *This);
	END_INTERFACE
} IProcessLockVtbl;
interface IProcessLock
{
	CONST_VTBL struct IProcessLockVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProcessLock_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProcessLock_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IProcessLock_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IProcessLock_AddRefOnProcess(This)    ( (This)->lpVtbl -> AddRefOnProcess(This) )
#define IProcessLock_ReleaseRefOnProcess(This)    ( (This)->lpVtbl -> ReleaseRefOnProcess(This) )
#endif
#endif
#ifndef __ISurrogateService_INTERFACE_DEFINED__
#define __ISurrogateService_INTERFACE_DEFINED__
extern const IID IID_ISurrogateService;
typedef struct ISurrogateServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISurrogateService *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISurrogateService *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISurrogateService *This);
	HRESULT(STDMETHODCALLTYPE *Init) (ISurrogateService *This, REFGUID rguidProcessID, IProcessLock *pProcessLock, BOOL *pfApplicationAware);
	HRESULT(STDMETHODCALLTYPE *ApplicationLaunch) (ISurrogateService *This, REFGUID rguidApplID, ApplicationType appType);
	HRESULT(STDMETHODCALLTYPE *ApplicationFree) (ISurrogateService *This, REFGUID rguidApplID);
	HRESULT(STDMETHODCALLTYPE *CatalogRefresh) (ISurrogateService *This, ULONG ulReserved);
	HRESULT(STDMETHODCALLTYPE *ProcessShutdown) (ISurrogateService *This, ShutdownType shutdownType);
	END_INTERFACE
} ISurrogateServiceVtbl;
interface ISurrogateService
{
	CONST_VTBL struct ISurrogateServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISurrogateService_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISurrogateService_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ISurrogateService_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ISurrogateService_Init(This,rguidProcessID,pProcessLock,pfApplicationAware)    ( (This)->lpVtbl -> Init(This,rguidProcessID,pProcessLock,pfApplicationAware) )
#define ISurrogateService_ApplicationLaunch(This,rguidApplID,appType)    ( (This)->lpVtbl -> ApplicationLaunch(This,rguidApplID,appType) )
#define ISurrogateService_ApplicationFree(This,rguidApplID)    ( (This)->lpVtbl -> ApplicationFree(This,rguidApplID) )
#define ISurrogateService_CatalogRefresh(This,ulReserved)    ( (This)->lpVtbl -> CatalogRefresh(This,ulReserved) )
#define ISurrogateService_ProcessShutdown(This,shutdownType)    ( (This)->lpVtbl -> ProcessShutdown(This,shutdownType) )
#endif
#endif
typedef enum _APTTYPEQUALIFIER
{
	APTTYPEQUALIFIER_NONE = 0,
	APTTYPEQUALIFIER_IMPLICIT_MTA = 1,
	APTTYPEQUALIFIER_NA_ON_MTA = 2,
	APTTYPEQUALIFIER_NA_ON_STA = 3,
	APTTYPEQUALIFIER_NA_ON_IMPLICIT_MTA = 4,
	APTTYPEQUALIFIER_NA_ON_MAINSTA = 5
} APTTYPEQUALIFIER;
typedef enum _APTTYPE
{
	APTTYPE_CURRENT = -1,
	APTTYPE_STA = 0,
	APTTYPE_MTA = 1,
	APTTYPE_NA = 2,
	APTTYPE_MAINSTA = 3
} APTTYPE;
typedef enum _THDTYPE
{
	THDTYPE_BLOCKMESSAGES = 0,
	THDTYPE_PROCESSMESSAGES = 1
} THDTYPE;
typedef DWORD APARTMENTID;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0081_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0081_v0_0_s_ifspec;
#ifndef __IComThreadingInfo_INTERFACE_DEFINED__
#define __IComThreadingInfo_INTERFACE_DEFINED__
extern const IID IID_IComThreadingInfo;
typedef struct IComThreadingInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IComThreadingInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IComThreadingInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IComThreadingInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetCurrentApartmentType) (IComThreadingInfo *This, APTTYPE *pAptType);
	HRESULT(STDMETHODCALLTYPE *GetCurrentThreadType) (IComThreadingInfo *This, THDTYPE *pThreadType);
	HRESULT(STDMETHODCALLTYPE *GetCurrentLogicalThreadId) (IComThreadingInfo *This, GUID *pguidLogicalThreadId);
	HRESULT(STDMETHODCALLTYPE *SetCurrentLogicalThreadId) (IComThreadingInfo *This, REFGUID rguid);
	END_INTERFACE
} IComThreadingInfoVtbl;
interface IComThreadingInfo
{
	CONST_VTBL struct IComThreadingInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComThreadingInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComThreadingInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IComThreadingInfo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IComThreadingInfo_GetCurrentApartmentType(This,pAptType)    ( (This)->lpVtbl -> GetCurrentApartmentType(This,pAptType) )
#define IComThreadingInfo_GetCurrentThreadType(This,pThreadType)    ( (This)->lpVtbl -> GetCurrentThreadType(This,pThreadType) )
#define IComThreadingInfo_GetCurrentLogicalThreadId(This,pguidLogicalThreadId)    ( (This)->lpVtbl -> GetCurrentLogicalThreadId(This,pguidLogicalThreadId) )
#define IComThreadingInfo_SetCurrentLogicalThreadId(This,rguid)    ( (This)->lpVtbl -> SetCurrentLogicalThreadId(This,rguid) )
#endif
#endif
#ifndef __IProcessInitControl_INTERFACE_DEFINED__
#define __IProcessInitControl_INTERFACE_DEFINED__
extern const IID IID_IProcessInitControl;
typedef struct IProcessInitControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IProcessInitControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IProcessInitControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IProcessInitControl *This);
	HRESULT(STDMETHODCALLTYPE *ResetInitializerTimeout) (IProcessInitControl *This, DWORD dwSecondsRemaining);
	END_INTERFACE
} IProcessInitControlVtbl;
interface IProcessInitControl
{
	CONST_VTBL struct IProcessInitControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProcessInitControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProcessInitControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IProcessInitControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IProcessInitControl_ResetInitializerTimeout(This,dwSecondsRemaining)    ( (This)->lpVtbl -> ResetInitializerTimeout(This,dwSecondsRemaining) )
#endif
#endif
#if  (_WIN32_WINNT >= 0x0501 )
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0083_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0083_v0_0_s_ifspec;
#ifndef __IInitializeSpy_INTERFACE_DEFINED__
#define __IInitializeSpy_INTERFACE_DEFINED__
typedef IInitializeSpy *LPINITIALIZESPY;
extern const IID IID_IInitializeSpy;
typedef struct IInitializeSpyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IInitializeSpy *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IInitializeSpy *This);
	ULONG(STDMETHODCALLTYPE *Release) (IInitializeSpy *This);
	HRESULT(STDMETHODCALLTYPE *PreInitialize) (IInitializeSpy *This, DWORD dwCoInit, DWORD dwCurThreadAptRefs);
	HRESULT(STDMETHODCALLTYPE *PostInitialize) (IInitializeSpy *This, HRESULT hrCoInit, DWORD dwCoInit, DWORD dwNewThreadAptRefs);
	HRESULT(STDMETHODCALLTYPE *PreUninitialize) (IInitializeSpy *This, DWORD dwCurThreadAptRefs);
	HRESULT(STDMETHODCALLTYPE *PostUninitialize) (IInitializeSpy *This, DWORD dwNewThreadAptRefs);
	END_INTERFACE
} IInitializeSpyVtbl;
interface IInitializeSpy
{
	CONST_VTBL struct IInitializeSpyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInitializeSpy_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInitializeSpy_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IInitializeSpy_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IInitializeSpy_PreInitialize(This,dwCoInit,dwCurThreadAptRefs)    ( (This)->lpVtbl -> PreInitialize(This,dwCoInit,dwCurThreadAptRefs) )
#define IInitializeSpy_PostInitialize(This,hrCoInit,dwCoInit,dwNewThreadAptRefs)    ( (This)->lpVtbl -> PostInitialize(This,hrCoInit,dwCoInit,dwNewThreadAptRefs) )
#define IInitializeSpy_PreUninitialize(This,dwCurThreadAptRefs)    ( (This)->lpVtbl -> PreUninitialize(This,dwCurThreadAptRefs) )
#define IInitializeSpy_PostUninitialize(This,dwNewThreadAptRefs)    ( (This)->lpVtbl -> PostUninitialize(This,dwNewThreadAptRefs) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0084_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objidl_0000_0084_v0_0_s_ifspec;
unsigned long __RPC_USER ASYNC_STGMEDIUM_UserSize(unsigned long *, unsigned long, ASYNC_STGMEDIUM *);
unsigned char *__RPC_USER ASYNC_STGMEDIUM_UserMarshal(unsigned long *, unsigned char *, ASYNC_STGMEDIUM *);
unsigned char *__RPC_USER ASYNC_STGMEDIUM_UserUnmarshal(unsigned long *, unsigned char *, ASYNC_STGMEDIUM *);
void __RPC_USER ASYNC_STGMEDIUM_UserFree(unsigned long *, ASYNC_STGMEDIUM *);
unsigned long __RPC_USER CLIPFORMAT_UserSize(unsigned long *, unsigned long, CLIPFORMAT *);
unsigned char *__RPC_USER CLIPFORMAT_UserMarshal(unsigned long *, unsigned char *, CLIPFORMAT *);
unsigned char *__RPC_USER CLIPFORMAT_UserUnmarshal(unsigned long *, unsigned char *, CLIPFORMAT *);
void __RPC_USER CLIPFORMAT_UserFree(unsigned long *, CLIPFORMAT *);
unsigned long __RPC_USER FLAG_STGMEDIUM_UserSize(unsigned long *, unsigned long, FLAG_STGMEDIUM *);
unsigned char *__RPC_USER FLAG_STGMEDIUM_UserMarshal(unsigned long *, unsigned char *, FLAG_STGMEDIUM *);
unsigned char *__RPC_USER FLAG_STGMEDIUM_UserUnmarshal(unsigned long *, unsigned char *, FLAG_STGMEDIUM *);
void __RPC_USER FLAG_STGMEDIUM_UserFree(unsigned long *, FLAG_STGMEDIUM *);
unsigned long __RPC_USER HBITMAP_UserSize(unsigned long *, unsigned long, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserMarshal(unsigned long *, unsigned char *, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserUnmarshal(unsigned long *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree(unsigned long *, HBITMAP *);
unsigned long __RPC_USER HDC_UserSize(unsigned long *, unsigned long, HDC *);
unsigned char *__RPC_USER HDC_UserMarshal(unsigned long *, unsigned char *, HDC *);
unsigned char *__RPC_USER HDC_UserUnmarshal(unsigned long *, unsigned char *, HDC *);
void __RPC_USER HDC_UserFree(unsigned long *, HDC *);
unsigned long __RPC_USER HICON_UserSize(unsigned long *, unsigned long, HICON *);
unsigned char *__RPC_USER HICON_UserMarshal(unsigned long *, unsigned char *, HICON *);
unsigned char *__RPC_USER HICON_UserUnmarshal(unsigned long *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree(unsigned long *, HICON *);
unsigned long __RPC_USER SNB_UserSize(unsigned long *, unsigned long, SNB *);
unsigned char *__RPC_USER SNB_UserMarshal(unsigned long *, unsigned char *, SNB *);
unsigned char *__RPC_USER SNB_UserUnmarshal(unsigned long *, unsigned char *, SNB *);
void __RPC_USER SNB_UserFree(unsigned long *, SNB *);
unsigned long __RPC_USER STGMEDIUM_UserSize(unsigned long *, unsigned long, STGMEDIUM *);
unsigned char *__RPC_USER STGMEDIUM_UserMarshal(unsigned long *, unsigned char *, STGMEDIUM *);
unsigned char *__RPC_USER STGMEDIUM_UserUnmarshal(unsigned long *, unsigned char *, STGMEDIUM *);
void __RPC_USER STGMEDIUM_UserFree(unsigned long *, STGMEDIUM *);
unsigned long __RPC_USER ASYNC_STGMEDIUM_UserSize64(unsigned long *, unsigned long, ASYNC_STGMEDIUM *);
unsigned char *__RPC_USER ASYNC_STGMEDIUM_UserMarshal64(unsigned long *, unsigned char *, ASYNC_STGMEDIUM *);
unsigned char *__RPC_USER ASYNC_STGMEDIUM_UserUnmarshal64(unsigned long *, unsigned char *, ASYNC_STGMEDIUM *);
void __RPC_USER ASYNC_STGMEDIUM_UserFree64(unsigned long *, ASYNC_STGMEDIUM *);
unsigned long __RPC_USER CLIPFORMAT_UserSize64(unsigned long *, unsigned long, CLIPFORMAT *);
unsigned char *__RPC_USER CLIPFORMAT_UserMarshal64(unsigned long *, unsigned char *, CLIPFORMAT *);
unsigned char *__RPC_USER CLIPFORMAT_UserUnmarshal64(unsigned long *, unsigned char *, CLIPFORMAT *);
void __RPC_USER CLIPFORMAT_UserFree64(unsigned long *, CLIPFORMAT *);
unsigned long __RPC_USER FLAG_STGMEDIUM_UserSize64(unsigned long *, unsigned long, FLAG_STGMEDIUM *);
unsigned char *__RPC_USER FLAG_STGMEDIUM_UserMarshal64(unsigned long *, unsigned char *, FLAG_STGMEDIUM *);
unsigned char *__RPC_USER FLAG_STGMEDIUM_UserUnmarshal64(unsigned long *, unsigned char *, FLAG_STGMEDIUM *);
void __RPC_USER FLAG_STGMEDIUM_UserFree64(unsigned long *, FLAG_STGMEDIUM *);
unsigned long __RPC_USER HBITMAP_UserSize64(unsigned long *, unsigned long, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserMarshal64(unsigned long *, unsigned char *, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserUnmarshal64(unsigned long *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree64(unsigned long *, HBITMAP *);
unsigned long __RPC_USER HDC_UserSize64(unsigned long *, unsigned long, HDC *);
unsigned char *__RPC_USER HDC_UserMarshal64(unsigned long *, unsigned char *, HDC *);
unsigned char *__RPC_USER HDC_UserUnmarshal64(unsigned long *, unsigned char *, HDC *);
void __RPC_USER HDC_UserFree64(unsigned long *, HDC *);
unsigned long __RPC_USER HICON_UserSize64(unsigned long *, unsigned long, HICON *);
unsigned char *__RPC_USER HICON_UserMarshal64(unsigned long *, unsigned char *, HICON *);
unsigned char *__RPC_USER HICON_UserUnmarshal64(unsigned long *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree64(unsigned long *, HICON *);
unsigned long __RPC_USER SNB_UserSize64(unsigned long *, unsigned long, SNB *);
unsigned char *__RPC_USER SNB_UserMarshal64(unsigned long *, unsigned char *, SNB *);
unsigned char *__RPC_USER SNB_UserUnmarshal64(unsigned long *, unsigned char *, SNB *);
void __RPC_USER SNB_UserFree64(unsigned long *, SNB *);
unsigned long __RPC_USER STGMEDIUM_UserSize64(unsigned long *, unsigned long, STGMEDIUM *);
unsigned char *__RPC_USER STGMEDIUM_UserMarshal64(unsigned long *, unsigned char *, STGMEDIUM *);
unsigned char *__RPC_USER STGMEDIUM_UserUnmarshal64(unsigned long *, unsigned char *, STGMEDIUM *);
void __RPC_USER STGMEDIUM_UserFree64(unsigned long *, STGMEDIUM *);
HRESULT STDMETHODCALLTYPE IEnumUnknown_Next_Proxy(IEnumUnknown *This, ULONG celt, IUnknown **rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumUnknown_Next_Stub(IEnumUnknown *This, ULONG celt, IUnknown **rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IBindCtx_SetBindOptions_Proxy(IBindCtx *This, BIND_OPTS *pbindopts);
HRESULT STDMETHODCALLTYPE IBindCtx_SetBindOptions_Stub(IBindCtx *This, BIND_OPTS2 *pbindopts);
HRESULT STDMETHODCALLTYPE IBindCtx_GetBindOptions_Proxy(IBindCtx *This, BIND_OPTS *pbindopts);
HRESULT STDMETHODCALLTYPE IBindCtx_GetBindOptions_Stub(IBindCtx *This, BIND_OPTS2 *pbindopts);
HRESULT STDMETHODCALLTYPE IEnumMoniker_Next_Proxy(IEnumMoniker *This, ULONG celt, IMoniker **rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumMoniker_Next_Stub(IEnumMoniker *This, ULONG celt, IMoniker **rgelt, ULONG *pceltFetched);
BOOL STDMETHODCALLTYPE IRunnableObject_IsRunning_Proxy(IRunnableObject *This);
HRESULT STDMETHODCALLTYPE IRunnableObject_IsRunning_Stub(IRunnableObject *This);
HRESULT STDMETHODCALLTYPE IMoniker_BindToObject_Proxy(IMoniker *This, IBindCtx *pbc, IMoniker *pmkToLeft, REFIID riidResult, void **ppvResult);
HRESULT STDMETHODCALLTYPE IMoniker_BindToObject_Stub(IMoniker *This, IBindCtx *pbc, IMoniker *pmkToLeft, REFIID riidResult, IUnknown **ppvResult);
HRESULT STDMETHODCALLTYPE IMoniker_BindToStorage_Proxy(IMoniker *This, IBindCtx *pbc, IMoniker *pmkToLeft, REFIID riid, void **ppvObj);
HRESULT STDMETHODCALLTYPE IMoniker_BindToStorage_Stub(IMoniker *This, IBindCtx *pbc, IMoniker *pmkToLeft, REFIID riid, IUnknown **ppvObj);
HRESULT STDMETHODCALLTYPE IEnumString_Next_Proxy(IEnumString *This, ULONG celt, LPOLESTR *rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumString_Next_Stub(IEnumString *This, ULONG celt, LPOLESTR *rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE ISequentialStream_Read_Proxy(ISequentialStream *This, void *pv, ULONG cb, ULONG *pcbRead);
HRESULT STDMETHODCALLTYPE ISequentialStream_Read_Stub(ISequentialStream *This, byte *pv, ULONG cb, ULONG *pcbRead);
HRESULT STDMETHODCALLTYPE ISequentialStream_Write_Proxy(ISequentialStream *This, const void *pv, ULONG cb, ULONG *pcbWritten);
HRESULT STDMETHODCALLTYPE ISequentialStream_Write_Stub(ISequentialStream *This, const byte *pv, ULONG cb, ULONG *pcbWritten);
HRESULT STDMETHODCALLTYPE IStream_Seek_Proxy(IStream *This, LARGE_INTEGER dlibMove, DWORD dwOrigin, ULARGE_INTEGER *plibNewPosition);
HRESULT STDMETHODCALLTYPE IStream_Seek_Stub(IStream *This, LARGE_INTEGER dlibMove, DWORD dwOrigin, ULARGE_INTEGER *plibNewPosition);
HRESULT STDMETHODCALLTYPE IStream_CopyTo_Proxy(IStream *This, IStream *pstm, ULARGE_INTEGER cb, ULARGE_INTEGER *pcbRead, ULARGE_INTEGER *pcbWritten);
HRESULT STDMETHODCALLTYPE IStream_CopyTo_Stub(IStream *This, IStream *pstm, ULARGE_INTEGER cb, ULARGE_INTEGER *pcbRead, ULARGE_INTEGER *pcbWritten);
HRESULT STDMETHODCALLTYPE IEnumSTATSTG_Next_Proxy(IEnumSTATSTG *This, ULONG celt, STATSTG *rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumSTATSTG_Next_Stub(IEnumSTATSTG *This, ULONG celt, STATSTG *rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IStorage_OpenStream_Proxy(IStorage *This, const OLECHAR *pwcsName, void *reserved1, DWORD grfMode, DWORD reserved2, IStream **ppstm);
HRESULT STDMETHODCALLTYPE IStorage_OpenStream_Stub(IStorage *This, const OLECHAR *pwcsName, unsigned long cbReserved1, byte *reserved1, DWORD grfMode, DWORD reserved2, IStream **ppstm);
HRESULT STDMETHODCALLTYPE IStorage_CopyTo_Proxy(IStorage *This, DWORD ciidExclude, const IID *rgiidExclude, SNB snbExclude, IStorage *pstgDest);
HRESULT STDMETHODCALLTYPE IStorage_CopyTo_Stub(IStorage *This, DWORD ciidExclude, const IID *rgiidExclude, SNB snbExclude, IStorage *pstgDest);
HRESULT STDMETHODCALLTYPE IStorage_EnumElements_Proxy(IStorage *This, DWORD reserved1, void *reserved2, DWORD reserved3, IEnumSTATSTG **ppenum);
HRESULT STDMETHODCALLTYPE IStorage_EnumElements_Stub(IStorage *This, DWORD reserved1, unsigned long cbReserved2, byte *reserved2, DWORD reserved3, IEnumSTATSTG **ppenum);
HRESULT STDMETHODCALLTYPE ILockBytes_ReadAt_Proxy(ILockBytes *This, ULARGE_INTEGER ulOffset, void *pv, ULONG cb, ULONG *pcbRead);
HRESULT __stdcall ILockBytes_ReadAt_Stub(ILockBytes *This, ULARGE_INTEGER ulOffset, byte *pv, ULONG cb, ULONG *pcbRead);
HRESULT STDMETHODCALLTYPE ILockBytes_WriteAt_Proxy(ILockBytes *This, ULARGE_INTEGER ulOffset, const void *pv, ULONG cb, ULONG *pcbWritten);
HRESULT STDMETHODCALLTYPE ILockBytes_WriteAt_Stub(ILockBytes *This, ULARGE_INTEGER ulOffset, const byte *pv, ULONG cb, ULONG *pcbWritten);
HRESULT STDMETHODCALLTYPE IEnumFORMATETC_Next_Proxy(IEnumFORMATETC *This, ULONG celt, FORMATETC *rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumFORMATETC_Next_Stub(IEnumFORMATETC *This, ULONG celt, FORMATETC *rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumSTATDATA_Next_Proxy(IEnumSTATDATA *This, ULONG celt, STATDATA *rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumSTATDATA_Next_Stub(IEnumSTATDATA *This, ULONG celt, STATDATA *rgelt, ULONG *pceltFetched);
void STDMETHODCALLTYPE IAdviseSink_OnDataChange_Proxy(IAdviseSink *This, FORMATETC *pFormatetc, STGMEDIUM *pStgmed);
HRESULT STDMETHODCALLTYPE IAdviseSink_OnDataChange_Stub(IAdviseSink *This, FORMATETC *pFormatetc, ASYNC_STGMEDIUM *pStgmed);
void STDMETHODCALLTYPE IAdviseSink_OnViewChange_Proxy(IAdviseSink *This, DWORD dwAspect, LONG lindex);
HRESULT STDMETHODCALLTYPE IAdviseSink_OnViewChange_Stub(IAdviseSink *This, DWORD dwAspect, LONG lindex);
void STDMETHODCALLTYPE IAdviseSink_OnRename_Proxy(IAdviseSink *This, IMoniker *pmk);
HRESULT STDMETHODCALLTYPE IAdviseSink_OnRename_Stub(IAdviseSink *This, IMoniker *pmk);
void STDMETHODCALLTYPE IAdviseSink_OnSave_Proxy(IAdviseSink *This);
HRESULT STDMETHODCALLTYPE IAdviseSink_OnSave_Stub(IAdviseSink *This);
void STDMETHODCALLTYPE IAdviseSink_OnClose_Proxy(IAdviseSink *This);
HRESULT STDMETHODCALLTYPE IAdviseSink_OnClose_Stub(IAdviseSink *This);
void STDMETHODCALLTYPE IAdviseSink2_OnLinkSrcChange_Proxy(IAdviseSink2 *This, IMoniker *pmk);
HRESULT STDMETHODCALLTYPE IAdviseSink2_OnLinkSrcChange_Stub(IAdviseSink2 *This, IMoniker *pmk);
HRESULT STDMETHODCALLTYPE IDataObject_GetData_Proxy(IDataObject *This, FORMATETC *pformatetcIn, STGMEDIUM *pmedium);
HRESULT STDMETHODCALLTYPE IDataObject_GetData_Stub(IDataObject *This, FORMATETC *pformatetcIn, STGMEDIUM *pRemoteMedium);
HRESULT STDMETHODCALLTYPE IDataObject_GetDataHere_Proxy(IDataObject *This, FORMATETC *pformatetc, STGMEDIUM *pmedium);
HRESULT STDMETHODCALLTYPE IDataObject_GetDataHere_Stub(IDataObject *This, FORMATETC *pformatetc, STGMEDIUM *pRemoteMedium);
HRESULT STDMETHODCALLTYPE IDataObject_SetData_Proxy(IDataObject *This, FORMATETC *pformatetc, STGMEDIUM *pmedium, BOOL fRelease);
HRESULT STDMETHODCALLTYPE IDataObject_SetData_Stub(IDataObject *This, FORMATETC *pformatetc, FLAG_STGMEDIUM *pmedium, BOOL fRelease);
HRESULT STDMETHODCALLTYPE IFillLockBytes_FillAppend_Proxy(IFillLockBytes *This, const void *pv, ULONG cb, ULONG *pcbWritten);
HRESULT __stdcall IFillLockBytes_FillAppend_Stub(IFillLockBytes *This, const byte *pv, ULONG cb, ULONG *pcbWritten);
HRESULT STDMETHODCALLTYPE IFillLockBytes_FillAt_Proxy(IFillLockBytes *This, ULARGE_INTEGER ulOffset, const void *pv, ULONG cb, ULONG *pcbWritten);
HRESULT __stdcall IFillLockBytes_FillAt_Stub(IFillLockBytes *This, ULARGE_INTEGER ulOffset, const byte *pv, ULONG cb, ULONG *pcbWritten);
void STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnDataChange_Proxy(AsyncIAdviseSink *This, FORMATETC *pFormatetc, STGMEDIUM *pStgmed);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnDataChange_Stub(AsyncIAdviseSink *This, FORMATETC *pFormatetc, ASYNC_STGMEDIUM *pStgmed);
void STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnDataChange_Proxy(AsyncIAdviseSink *This);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnDataChange_Stub(AsyncIAdviseSink *This);
void STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnViewChange_Proxy(AsyncIAdviseSink *This, DWORD dwAspect, LONG lindex);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnViewChange_Stub(AsyncIAdviseSink *This, DWORD dwAspect, LONG lindex);
void STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnViewChange_Proxy(AsyncIAdviseSink *This);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnViewChange_Stub(AsyncIAdviseSink *This);
void STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnRename_Proxy(AsyncIAdviseSink *This, IMoniker *pmk);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnRename_Stub(AsyncIAdviseSink *This, IMoniker *pmk);
void STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnRename_Proxy(AsyncIAdviseSink *This);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnRename_Stub(AsyncIAdviseSink *This);
void STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnSave_Proxy(AsyncIAdviseSink *This);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnSave_Stub(AsyncIAdviseSink *This);
void STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnSave_Proxy(AsyncIAdviseSink *This);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnSave_Stub(AsyncIAdviseSink *This);
void STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnClose_Proxy(AsyncIAdviseSink *This);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Begin_OnClose_Stub(AsyncIAdviseSink *This);
void STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnClose_Proxy(AsyncIAdviseSink *This);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink_Finish_OnClose_Stub(AsyncIAdviseSink *This);
void STDMETHODCALLTYPE AsyncIAdviseSink2_Begin_OnLinkSrcChange_Proxy(AsyncIAdviseSink2 *This, IMoniker *pmk);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink2_Begin_OnLinkSrcChange_Stub(AsyncIAdviseSink2 *This, IMoniker *pmk);
void STDMETHODCALLTYPE AsyncIAdviseSink2_Finish_OnLinkSrcChange_Proxy(AsyncIAdviseSink2 *This);
HRESULT STDMETHODCALLTYPE AsyncIAdviseSink2_Finish_OnLinkSrcChange_Stub(AsyncIAdviseSink2 *This);
#endif
