/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmsdatapath.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 15:34:43 2016
 \date		Modified on Mon Sep 19 15:34:43 2016
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
#ifndef __wmsdatapath_h__
#define __wmsdatapath_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSPacketStreamer_FWD_DEFINED__
#define __IWMSPacketStreamer_FWD_DEFINED__
typedef interface IWMSPacketStreamer IWMSPacketStreamer;
#endif
#ifndef __IWMSPacketStreamerCallback_FWD_DEFINED__
#define __IWMSPacketStreamerCallback_FWD_DEFINED__
typedef interface IWMSPacketStreamerCallback IWMSPacketStreamerCallback;
#endif
#ifndef __IWMSPacketStreamDataContainer_FWD_DEFINED__
#define __IWMSPacketStreamDataContainer_FWD_DEFINED__
typedef interface IWMSPacketStreamDataContainer IWMSPacketStreamDataContainer;
#endif
#ifndef __IWMSPushSource_FWD_DEFINED__
#define __IWMSPushSource_FWD_DEFINED__
typedef interface IWMSPushSource IWMSPushSource;
#endif
#ifndef __IWMSPushSourceCallback_FWD_DEFINED__
#define __IWMSPushSourceCallback_FWD_DEFINED__
typedef interface IWMSPushSourceCallback IWMSPushSourceCallback;
#endif
#ifndef __IWMSPushSink_FWD_DEFINED__
#define __IWMSPushSink_FWD_DEFINED__
typedef interface IWMSPushSink IWMSPushSink;
#endif
#include <objidl.h>
#include <nsscore.h>
#include <DataContainer.h>
#include <StreamDescription.h>
EXTERN_GUID(IID_IWMSPacketStreamer, 0x72527A81, 0x1119, 0x11d2, 0x9E, 0xEE, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
EXTERN_GUID(IID_IWMSPacketStreamerCallback, 0x72527A82, 0x1119, 0x11d2, 0x9E, 0xEE, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
EXTERN_GUID(IID_IWMSPushSource, 0x0B840593, 0x115C, 0x11d2, 0x9E, 0xEE, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
EXTERN_GUID(IID_IWMSPushSourceCallback, 0xead035e4, 0xbe4a, 0x4a7a, 0xbc, 0x19, 0x5b, 0xb, 0x9e, 0x9, 0xd7, 0x4c);
EXTERN_GUID(IID_IWMSPushSink, 0x0B840594, 0x115C, 0x11d2, 0x9E, 0xEE, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
EXTERN_GUID(IID_IWMSPacketStreamDataContainer, 0xb1b6039, 0x572c, 0x11d2, 0x9e, 0xff, 0x0, 0x60, 0x97, 0xd2, 0xd7, 0xcf);
typedef enum WMS_SEEK_AND_PLAY_TYPE
{
	WMSPlayFromCurrentPosition = 0,
	WMSSeekToIFrameAndPlay = (WMSPlayFromCurrentPosition + 1),
	WMSSeekToPositionAndPlay = (WMSSeekToIFrameAndPlay + 1)
} WMS_SEEK_AND_PLAY_TYPE;
#define WMS_SEEK_TO_IFRAME           0x0001
extern RPC_IF_HANDLE __MIDL_itf_wmsdatapath_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsdatapath_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSPacketStreamer_INTERFACE_DEFINED__
#define __IWMSPacketStreamer_INTERFACE_DEFINED__
extern const IID IID_IWMSPacketStreamer;
typedef struct IWMSPacketStreamerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSPacketStreamer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSPacketStreamer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSPacketStreamer * This);
	HRESULT(STDMETHODCALLTYPE * GetStreamInfo) (IWMSPacketStreamer * This, IWMSPacketStreamerCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * SelectStream) (IWMSPacketStreamer * This, IWMSCommandContext * pCommand, IWMSStreamSwitchDescriptionList * pStreamSwitchDescList, IWMSPacketStreamerCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * Seek) (IWMSPacketStreamer * This, IWMSCommandContext * pCommand, DWORD dwOffsetType, QWORD qwOffset, DWORD dwFlags, IWMSPacketStreamerCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * ChangeStreamFormat) (IWMSPacketStreamer * This, IWMSCommandContext * pCommand, IWMSPacketStreamerCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * Interrupt) (IWMSPacketStreamer * This, IWMSCommandContext * pCommand, DWORD dwOptions, IWMSPacketStreamerCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * DoExtendedCommand) (IWMSPacketStreamer * This, LPWSTR szCommandName, IWMSCommandContext * pCommand, IWMSPacketStreamerCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * Shutdown) (IWMSPacketStreamer * This);
	END_INTERFACE
}  IWMSPacketStreamerVtbl;
interface IWMSPacketStreamer
{
	CONST_VTBL struct IWMSPacketStreamerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPacketStreamer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPacketStreamer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPacketStreamer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPacketStreamer_GetStreamInfo(This,pCallback,qwContext) ( (This)->lpVtbl -> GetStreamInfo(This,pCallback,qwContext) )
#define IWMSPacketStreamer_SelectStream(This,pCommand,pStreamSwitchDescList,pCallback,qwContext) ( (This)->lpVtbl -> SelectStream(This,pCommand,pStreamSwitchDescList,pCallback,qwContext) )
#define IWMSPacketStreamer_Seek(This,pCommand,dwOffsetType,qwOffset,dwFlags,pCallback,qwContext) ( (This)->lpVtbl -> Seek(This,pCommand,dwOffsetType,qwOffset,dwFlags,pCallback,qwContext) )
#define IWMSPacketStreamer_ChangeStreamFormat(This,pCommand,pCallback,qwContext) ( (This)->lpVtbl -> ChangeStreamFormat(This,pCommand,pCallback,qwContext) )
#define IWMSPacketStreamer_Interrupt(This,pCommand,dwOptions,pCallback,qwContext) ( (This)->lpVtbl -> Interrupt(This,pCommand,dwOptions,pCallback,qwContext) )
#define IWMSPacketStreamer_DoExtendedCommand(This,szCommandName,pCommand,pCallback,qwContext) ( (This)->lpVtbl -> DoExtendedCommand(This,szCommandName,pCommand,pCallback,qwContext) )
#define IWMSPacketStreamer_Shutdown(This) ( (This)->lpVtbl -> Shutdown(This) )
#endif
#endif
#ifndef __IWMSPacketStreamerCallback_INTERFACE_DEFINED__
#define __IWMSPacketStreamerCallback_INTERFACE_DEFINED__
extern const IID IID_IWMSPacketStreamerCallback;
typedef struct IWMSPacketStreamerCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSPacketStreamerCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSPacketStreamerCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSPacketStreamerCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnGetStreamInfo) (IWMSPacketStreamerCallback * This, HRESULT hr, IWMSStreamHeaderList * pHeaderList, IWMSContentDescriptionList * pContentDescription, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnSeek) (IWMSPacketStreamerCallback * This, HRESULT hr, QWORD qwActualPosition, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnSelectStream) (IWMSPacketStreamerCallback * This, HRESULT hr, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnChangeStreamFormat) (IWMSPacketStreamerCallback * This, HRESULT hr, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnInterrupt) (IWMSPacketStreamerCallback * This, HRESULT hr, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnDoExtendedCommand) (IWMSPacketStreamerCallback * This, HRESULT hr, QWORD qwContext);
	END_INTERFACE
}  IWMSPacketStreamerCallbackVtbl;
interface IWMSPacketStreamerCallback
{
	CONST_VTBL struct IWMSPacketStreamerCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPacketStreamerCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPacketStreamerCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPacketStreamerCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPacketStreamerCallback_OnGetStreamInfo(This,hr,pHeaderList,pContentDescription,qwContext) ( (This)->lpVtbl -> OnGetStreamInfo(This,hr,pHeaderList,pContentDescription,qwContext) )
#define IWMSPacketStreamerCallback_OnSeek(This,hr,qwActualPosition,qwContext) ( (This)->lpVtbl -> OnSeek(This,hr,qwActualPosition,qwContext) )
#define IWMSPacketStreamerCallback_OnSelectStream(This,hr,qwContext) ( (This)->lpVtbl -> OnSelectStream(This,hr,qwContext) )
#define IWMSPacketStreamerCallback_OnChangeStreamFormat(This,hr,qwContext) ( (This)->lpVtbl -> OnChangeStreamFormat(This,hr,qwContext) )
#define IWMSPacketStreamerCallback_OnInterrupt(This,hr,qwContext) ( (This)->lpVtbl -> OnInterrupt(This,hr,qwContext) )
#define IWMSPacketStreamerCallback_OnDoExtendedCommand(This,hr,qwContext) ( (This)->lpVtbl -> OnDoExtendedCommand(This,hr,qwContext) )
#endif
#endif
#ifndef __IWMSPacketStreamDataContainer_INTERFACE_DEFINED__
#define __IWMSPacketStreamDataContainer_INTERFACE_DEFINED__
extern const IID IID_IWMSPacketStreamDataContainer;
typedef struct IWMSPacketStreamDataContainerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSPacketStreamDataContainer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSPacketStreamDataContainer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSPacketStreamDataContainer * This);
	HRESULT(STDMETHODCALLTYPE * SetStreamSignalHandler) (IWMSPacketStreamDataContainer * This, IWMSStreamSignalHandler * pStreamSignalHandler);
	HRESULT(STDMETHODCALLTYPE * GetMaxPacketSize) (IWMSPacketStreamDataContainer * This, DWORD * pdwMaxPacketSize);
	END_INTERFACE
}  IWMSPacketStreamDataContainerVtbl;
interface IWMSPacketStreamDataContainer
{
	CONST_VTBL struct IWMSPacketStreamDataContainerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPacketStreamDataContainer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPacketStreamDataContainer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPacketStreamDataContainer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPacketStreamDataContainer_SetStreamSignalHandler(This,pStreamSignalHandler) ( (This)->lpVtbl -> SetStreamSignalHandler(This,pStreamSignalHandler) )
#define IWMSPacketStreamDataContainer_GetMaxPacketSize(This,pdwMaxPacketSize) ( (This)->lpVtbl -> GetMaxPacketSize(This,pdwMaxPacketSize) )
#endif
#endif
#ifndef __IWMSPushSource_INTERFACE_DEFINED__
#define __IWMSPushSource_INTERFACE_DEFINED__
extern const IID IID_IWMSPushSource;
typedef struct IWMSPushSourceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSPushSource * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSPushSource * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSPushSource * This);
	HRESULT(STDMETHODCALLTYPE * ConnectSink) (IWMSPushSource * This, IWMSPushSink * pDataOutput);
	HRESULT(STDMETHODCALLTYPE * DisconnectSink) (IWMSPushSource * This);
	HRESULT(STDMETHODCALLTYPE * StartPushing) (IWMSPushSource * This, IWMSCommandContext * pCommand, double dblRate, IWMSPushSourceCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * StopPushing) (IWMSPushSource * This, IWMSCommandContext * pCommand, IWMSPushSourceCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * PausePushing) (IWMSPushSource * This, IWMSCommandContext * pCommand, IWMSPushSourceCallback * pCallback, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * ResendPacket) (IWMSPushSource * This, IWMSCommandContext * pCommand, DWORD dwPacketNum, DWORD dwStreamNum);
	END_INTERFACE
}  IWMSPushSourceVtbl;
interface IWMSPushSource
{
	CONST_VTBL struct IWMSPushSourceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPushSource_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPushSource_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPushSource_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPushSource_ConnectSink(This,pDataOutput) ( (This)->lpVtbl -> ConnectSink(This,pDataOutput) )
#define IWMSPushSource_DisconnectSink(This) ( (This)->lpVtbl -> DisconnectSink(This) )
#define IWMSPushSource_StartPushing(This,pCommand,dblRate,pCallback,qwContext) ( (This)->lpVtbl -> StartPushing(This,pCommand,dblRate,pCallback,qwContext) )
#define IWMSPushSource_StopPushing(This,pCommand,pCallback,qwContext) ( (This)->lpVtbl -> StopPushing(This,pCommand,pCallback,qwContext) )
#define IWMSPushSource_PausePushing(This,pCommand,pCallback,qwContext) ( (This)->lpVtbl -> PausePushing(This,pCommand,pCallback,qwContext) )
#define IWMSPushSource_ResendPacket(This,pCommand,dwPacketNum,dwStreamNum) ( (This)->lpVtbl -> ResendPacket(This,pCommand,dwPacketNum,dwStreamNum) )
#endif
#endif
#ifndef __IWMSPushSourceCallback_INTERFACE_DEFINED__
#define __IWMSPushSourceCallback_INTERFACE_DEFINED__
extern const IID IID_IWMSPushSourceCallback;
typedef struct IWMSPushSourceCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSPushSourceCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSPushSourceCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSPushSourceCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnStartPushing) (IWMSPushSourceCallback * This, HRESULT hr, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnStopPushing) (IWMSPushSourceCallback * This, HRESULT hr, QWORD qwContext);
	HRESULT(STDMETHODCALLTYPE * OnPausePushing) (IWMSPushSourceCallback * This, HRESULT hr, QWORD qwContext);
	END_INTERFACE
}  IWMSPushSourceCallbackVtbl;
interface IWMSPushSourceCallback
{
	CONST_VTBL struct IWMSPushSourceCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPushSourceCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPushSourceCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPushSourceCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPushSourceCallback_OnStartPushing(This,hr,qwContext) ( (This)->lpVtbl -> OnStartPushing(This,hr,qwContext) )
#define IWMSPushSourceCallback_OnStopPushing(This,hr,qwContext) ( (This)->lpVtbl -> OnStopPushing(This,hr,qwContext) )
#define IWMSPushSourceCallback_OnPausePushing(This,hr,qwContext) ( (This)->lpVtbl -> OnPausePushing(This,hr,qwContext) )
#endif
#endif
#ifndef __IWMSPushSink_INTERFACE_DEFINED__
#define __IWMSPushSink_INTERFACE_DEFINED__
extern const IID IID_IWMSPushSink;
typedef struct IWMSPushSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSPushSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSPushSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSPushSink * This);
	HRESULT(STDMETHODCALLTYPE * ConnectSource) (IWMSPushSink * This, IWMSPushSource * pDataInput);
	HRESULT(STDMETHODCALLTYPE * DisconnectSource) (IWMSPushSink * This);
	HRESULT(STDMETHODCALLTYPE * ProcessPackets) (IWMSPushSink * This, IWMSPacketList * pPacketList);
	END_INTERFACE
}  IWMSPushSinkVtbl;
interface IWMSPushSink
{
	CONST_VTBL struct IWMSPushSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPushSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPushSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPushSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPushSink_ConnectSource(This,pDataInput) ( (This)->lpVtbl -> ConnectSource(This,pDataInput) )
#define IWMSPushSink_DisconnectSource(This) ( (This)->lpVtbl -> DisconnectSource(This) )
#define IWMSPushSink_ProcessPackets(This,pPacketList) ( (This)->lpVtbl -> ProcessPackets(This,pPacketList) )
#endif
#endif
#endif
