/*+@@file@@----------------------------------------------------------------*//*!
 \file		alg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 16:59:18 2016
 \date		Modified on Sat Jul  2 16:59:18 2016
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
#ifndef __alg_h__
#define __alg_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IAdapterInfo_FWD_DEFINED__
#define __IAdapterInfo_FWD_DEFINED__
typedef interface IAdapterInfo IAdapterInfo;
#endif
#ifndef __IPendingProxyConnection_FWD_DEFINED__
#define __IPendingProxyConnection_FWD_DEFINED__
typedef interface IPendingProxyConnection IPendingProxyConnection;
#endif
#ifndef __IDataChannel_FWD_DEFINED__
#define __IDataChannel_FWD_DEFINED__
typedef interface IDataChannel IDataChannel;
#endif
#ifndef __IPersistentDataChannel_FWD_DEFINED__
#define __IPersistentDataChannel_FWD_DEFINED__
typedef interface IPersistentDataChannel IPersistentDataChannel;
#endif
#ifndef __IPrimaryControlChannel_FWD_DEFINED__
#define __IPrimaryControlChannel_FWD_DEFINED__
typedef interface IPrimaryControlChannel IPrimaryControlChannel;
#endif
#ifndef __ISecondaryControlChannel_FWD_DEFINED__
#define __ISecondaryControlChannel_FWD_DEFINED__
typedef interface ISecondaryControlChannel ISecondaryControlChannel;
#endif
#ifndef __IEnumAdapterInfo_FWD_DEFINED__
#define __IEnumAdapterInfo_FWD_DEFINED__
typedef interface IEnumAdapterInfo IEnumAdapterInfo;
#endif
#ifndef __IAdapterNotificationSink_FWD_DEFINED__
#define __IAdapterNotificationSink_FWD_DEFINED__
typedef interface IAdapterNotificationSink IAdapterNotificationSink;
#endif
#ifndef __IApplicationGatewayServices_FWD_DEFINED__
#define __IApplicationGatewayServices_FWD_DEFINED__
typedef interface IApplicationGatewayServices IApplicationGatewayServices;
#endif
#ifndef __IApplicationGateway_FWD_DEFINED__
#define __IApplicationGateway_FWD_DEFINED__
typedef interface IApplicationGateway IApplicationGateway;
#endif
#ifndef __ApplicationGatewayServices_FWD_DEFINED__
#define __ApplicationGatewayServices_FWD_DEFINED__
typedef struct ApplicationGatewayServices ApplicationGatewayServices;
#endif
#ifndef __PrimaryControlChannel_FWD_DEFINED__
#define __PrimaryControlChannel_FWD_DEFINED__
typedef struct PrimaryControlChannel PrimaryControlChannel;
#endif
#ifndef __SecondaryControlChannel_FWD_DEFINED__
#define __SecondaryControlChannel_FWD_DEFINED__
typedef struct SecondaryControlChannel SecondaryControlChannel;
#endif
#ifndef __AdapterInfo_FWD_DEFINED__
#define __AdapterInfo_FWD_DEFINED__
typedef struct AdapterInfo AdapterInfo;
#endif
#ifndef __EnumAdapterInfo_FWD_DEFINED__
#define __EnumAdapterInfo_FWD_DEFINED__
typedef struct EnumAdapterInfo EnumAdapterInfo;
#endif
#ifndef __PendingProxyConnection_FWD_DEFINED__
#define __PendingProxyConnection_FWD_DEFINED__
typedef struct PendingProxyConnection PendingProxyConnection;
#endif
#ifndef __DataChannel_FWD_DEFINED__
#define __DataChannel_FWD_DEFINED__
typedef struct DataChannel DataChannel;
#endif
#ifndef __PersistentDataChannel_FWD_DEFINED__
#define __PersistentDataChannel_FWD_DEFINED__
typedef struct PersistentDataChannel PersistentDataChannel;
#endif
#include <oaidl.h>
#include <ocidl.h>
#define	ALG_MAXIMUM_PORT_RANGE_SIZE	( 10 )
typedef
	enum _ALG_PROTOCOL { eALG_TCP = 0x1,
	eALG_UDP = 0x2
} ALG_PROTOCOL;
typedef
	enum _ALG_CAPTURE { eALG_SOURCE_CAPTURE = 0x1,
	eALG_DESTINATION_CAPTURE = 0x2
} ALG_CAPTURE;
typedef
	enum _ALG_DIRECTION { eALG_INBOUND = 0x1,
	eALG_OUTBOUND = 0x2,
	eALG_BOTH = 0x3
} ALG_DIRECTION;
typedef
	enum _ALG_ADAPTER_TYPE { eALG_PRIVATE = 0x1,
	eALG_BOUNDARY = 0x2,
	eALG_FIREWALLED = 0x4
} ALG_ADAPTER_TYPE;
typedef
	enum _ALG_NOTIFICATION { eALG_NONE = 0,
	eALG_SESSION_CREATION = 0x1,
	eALG_SESSION_DELETION = 0x2,
	eALG_SESSION_BOTH = 0x3
} ALG_NOTIFICATION;
typedef struct _ALG_PRIMARY_CHANNEL_PROPERTIES
{
	ALG_PROTOCOL eProtocol;
	USHORT usCapturePort;
	ALG_CAPTURE eCaptureType;
	BOOL fCaptureInbound;
	ULONG ulListeningAddress;
	USHORT usListeningPort;
	ULONG ulAdapterIndex;
} ALG_PRIMARY_CHANNEL_PROPERTIES;
typedef struct _ALG_SECONDARY_CHANNEL_PROPERTIES
{
	ALG_PROTOCOL eProtocol;
	ULONG ulPrivateAddress;
	USHORT usPrivatePort;
	ULONG ulPublicAddress;
	USHORT usPublicPort;
	ULONG ulRemoteAddress;
	USHORT usRemotePort;
	ULONG ulListenAddress;
	USHORT usListenPort;
	ALG_DIRECTION eDirection;
	BOOL fPersistent;
} ALG_SECONDARY_CHANNEL_PROPERTIES;
typedef struct _ALG_DATA_CHANNEL_PROPERTIES
{
	ALG_PROTOCOL eProtocol;
	ULONG ulPrivateAddress;
	USHORT usPrivatePort;
	ULONG ulPublicAddress;
	USHORT usPublicPort;
	ULONG ulRemoteAddress;
	USHORT usRemotePort;
	ALG_DIRECTION eDirection;
	ALG_NOTIFICATION eDesiredNotification;
} ALG_DATA_CHANNEL_PROPERTIES;
typedef struct _ALG_PERSISTENT_DATA_CHANNEL_PROPERTIES
{
	ALG_PROTOCOL eProtocol;
	ULONG ulPrivateAddress;
	USHORT usPrivatePort;
	ULONG ulPublicAddress;
	USHORT usPublicPort;
	ULONG ulRemoteAddress;
	USHORT usRemotePort;
	ALG_DIRECTION eDirection;
} ALG_PERSISTENT_DATA_CHANNEL_PROPERTIES;
extern RPC_IF_HANDLE __MIDL_itf_alg_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_alg_0000_0000_v0_0_s_ifspec;
#ifndef __IAdapterInfo_INTERFACE_DEFINED__
#define __IAdapterInfo_INTERFACE_DEFINED__
extern const IID IID_IAdapterInfo;
typedef struct IAdapterInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAdapterInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAdapterInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAdapterInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetAdapterIndex) (IAdapterInfo * This, ULONG * pulIndex);
	HRESULT(STDMETHODCALLTYPE * GetAdapterType) (IAdapterInfo * This, ALG_ADAPTER_TYPE * pAdapterType);
	HRESULT(STDMETHODCALLTYPE * GetAdapterAddresses) (IAdapterInfo * This, ULONG * pulAddressCount, ULONG ** prgAddresses);
	END_INTERFACE
}  IAdapterInfoVtbl;
interface IAdapterInfo
{
	CONST_VTBL struct IAdapterInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAdapterInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAdapterInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAdapterInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAdapterInfo_GetAdapterIndex(This,pulIndex)( (This)->lpVtbl -> GetAdapterIndex(This,pulIndex) )
#define IAdapterInfo_GetAdapterType(This,pAdapterType)( (This)->lpVtbl -> GetAdapterType(This,pAdapterType) )
#define IAdapterInfo_GetAdapterAddresses(This,pulAddressCount,prgAddresses)( (This)->lpVtbl -> GetAdapterAddresses(This,pulAddressCount,prgAddresses) )
#endif
#endif
#ifndef __IPendingProxyConnection_INTERFACE_DEFINED__
#define __IPendingProxyConnection_INTERFACE_DEFINED__
extern const IID IID_IPendingProxyConnection;
typedef struct IPendingProxyConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPendingProxyConnection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPendingProxyConnection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPendingProxyConnection * This);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IPendingProxyConnection * This);
	END_INTERFACE
}  IPendingProxyConnectionVtbl;
interface IPendingProxyConnection
{
	CONST_VTBL struct IPendingProxyConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPendingProxyConnection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPendingProxyConnection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPendingProxyConnection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPendingProxyConnection_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#endif
#endif
#ifndef __IDataChannel_INTERFACE_DEFINED__
#define __IDataChannel_INTERFACE_DEFINED__
extern const IID IID_IDataChannel;
typedef struct IDataChannelVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDataChannel * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDataChannel * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDataChannel * This);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IDataChannel * This);
	HRESULT(STDMETHODCALLTYPE * GetChannelProperties) (IDataChannel * This, ALG_DATA_CHANNEL_PROPERTIES ** ppProperties);
	HRESULT(STDMETHODCALLTYPE * GetSessionCreationEventHandle) (IDataChannel * This, HANDLE * pHandle);
	HRESULT(STDMETHODCALLTYPE * GetSessionDeletionEventHandle) (IDataChannel * This, HANDLE * pHandle);
	END_INTERFACE
}  IDataChannelVtbl;
interface IDataChannel
{
	CONST_VTBL struct IDataChannelVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDataChannel_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDataChannel_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDataChannel_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDataChannel_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#define IDataChannel_GetChannelProperties(This,ppProperties)( (This)->lpVtbl -> GetChannelProperties(This,ppProperties) )
#define IDataChannel_GetSessionCreationEventHandle(This,pHandle)( (This)->lpVtbl -> GetSessionCreationEventHandle(This,pHandle) )
#define IDataChannel_GetSessionDeletionEventHandle(This,pHandle)( (This)->lpVtbl -> GetSessionDeletionEventHandle(This,pHandle) )
#endif
#endif
#ifndef __IPersistentDataChannel_INTERFACE_DEFINED__
#define __IPersistentDataChannel_INTERFACE_DEFINED__
extern const IID IID_IPersistentDataChannel;
typedef struct IPersistentDataChannelVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPersistentDataChannel * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPersistentDataChannel * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPersistentDataChannel * This);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IPersistentDataChannel * This);
	HRESULT(STDMETHODCALLTYPE * GetChannelProperties) (IPersistentDataChannel * This, ALG_PERSISTENT_DATA_CHANNEL_PROPERTIES ** ppProperties);
	END_INTERFACE
}  IPersistentDataChannelVtbl;
interface IPersistentDataChannel
{
	CONST_VTBL struct IPersistentDataChannelVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPersistentDataChannel_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPersistentDataChannel_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPersistentDataChannel_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPersistentDataChannel_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#define IPersistentDataChannel_GetChannelProperties(This,ppProperties)( (This)->lpVtbl -> GetChannelProperties(This,ppProperties) )
#endif
#endif
#ifndef __IPrimaryControlChannel_INTERFACE_DEFINED__
#define __IPrimaryControlChannel_INTERFACE_DEFINED__
extern const IID IID_IPrimaryControlChannel;
typedef struct IPrimaryControlChannelVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPrimaryControlChannel * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPrimaryControlChannel * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPrimaryControlChannel * This);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IPrimaryControlChannel * This);
	HRESULT(STDMETHODCALLTYPE * GetChannelProperties) (IPrimaryControlChannel * This, ALG_PRIMARY_CHANNEL_PROPERTIES ** ppProperties);
	HRESULT(STDMETHODCALLTYPE * GetOriginalDestinationInformation) (IPrimaryControlChannel * This, ULONG ulSourceAddress, USHORT usSourcePort, ULONG * pulOriginalDestinationAddress, USHORT * pusOriginalDestinationPort, ULONG * pulRemapDestinationAddress, USHORT * pulRemapDestinationPort, IAdapterInfo ** ppReceiveAdapter);
	END_INTERFACE
}  IPrimaryControlChannelVtbl;
interface IPrimaryControlChannel
{
	CONST_VTBL struct IPrimaryControlChannelVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPrimaryControlChannel_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPrimaryControlChannel_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPrimaryControlChannel_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPrimaryControlChannel_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#define IPrimaryControlChannel_GetChannelProperties(This,ppProperties)( (This)->lpVtbl -> GetChannelProperties(This,ppProperties) )
#define IPrimaryControlChannel_GetOriginalDestinationInformation(This,ulSourceAddress,usSourcePort,pulOriginalDestinationAddress,pusOriginalDestinationPort,pulRemapDestinationAddress,pulRemapDestinationPort,ppReceiveAdapter)( (This)->lpVtbl -> GetOriginalDestinationInformation(This,ulSourceAddress,usSourcePort,pulOriginalDestinationAddress,pusOriginalDestinationPort,pulRemapDestinationAddress,pulRemapDestinationPort,ppReceiveAdapter) )
#endif
#endif
#ifndef __ISecondaryControlChannel_INTERFACE_DEFINED__
#define __ISecondaryControlChannel_INTERFACE_DEFINED__
extern const IID IID_ISecondaryControlChannel;
typedef struct ISecondaryControlChannelVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISecondaryControlChannel * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISecondaryControlChannel * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISecondaryControlChannel * This);
	HRESULT(STDMETHODCALLTYPE * Cancel) (ISecondaryControlChannel * This);
	HRESULT(STDMETHODCALLTYPE * GetChannelProperties) (ISecondaryControlChannel * This, ALG_SECONDARY_CHANNEL_PROPERTIES ** ppProperties);
	HRESULT(STDMETHODCALLTYPE * GetOriginalDestinationInformation) (ISecondaryControlChannel * This, ULONG ulSourceAddress, USHORT usSourcePort, ULONG * pulOriginalDestinationAddress, USHORT * pusOriginalDestinationPort, IAdapterInfo ** ppReceiveAdapter);
	END_INTERFACE
}  ISecondaryControlChannelVtbl;
interface ISecondaryControlChannel
{
	CONST_VTBL struct ISecondaryControlChannelVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISecondaryControlChannel_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISecondaryControlChannel_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISecondaryControlChannel_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISecondaryControlChannel_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#define ISecondaryControlChannel_GetChannelProperties(This,ppProperties)( (This)->lpVtbl -> GetChannelProperties(This,ppProperties) )
#define ISecondaryControlChannel_GetOriginalDestinationInformation(This,ulSourceAddress,usSourcePort,pulOriginalDestinationAddress,pusOriginalDestinationPort,ppReceiveAdapter)( (This)->lpVtbl -> GetOriginalDestinationInformation(This,ulSourceAddress,usSourcePort,pulOriginalDestinationAddress,pusOriginalDestinationPort,ppReceiveAdapter) )
#endif
#endif
#ifndef __IEnumAdapterInfo_INTERFACE_DEFINED__
#define __IEnumAdapterInfo_INTERFACE_DEFINED__
extern const IID IID_IEnumAdapterInfo;
typedef struct IEnumAdapterInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumAdapterInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumAdapterInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumAdapterInfo * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumAdapterInfo * This, ULONG celt, IAdapterInfo ** rgAI, ULONG * pCeltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumAdapterInfo * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumAdapterInfo * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumAdapterInfo * This, IEnumAdapterInfo ** ppEnum);
	END_INTERFACE
}  IEnumAdapterInfoVtbl;
interface IEnumAdapterInfo
{
	CONST_VTBL struct IEnumAdapterInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumAdapterInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumAdapterInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumAdapterInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumAdapterInfo_Next(This,celt,rgAI,pCeltFetched)( (This)->lpVtbl -> Next(This,celt,rgAI,pCeltFetched) )
#define IEnumAdapterInfo_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumAdapterInfo_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumAdapterInfo_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IAdapterNotificationSink_INTERFACE_DEFINED__
#define __IAdapterNotificationSink_INTERFACE_DEFINED__
extern const IID IID_IAdapterNotificationSink;
typedef struct IAdapterNotificationSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAdapterNotificationSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAdapterNotificationSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAdapterNotificationSink * This);
	HRESULT(STDMETHODCALLTYPE * AdapterAdded) (IAdapterNotificationSink * This, IAdapterInfo * pAdapter);
	HRESULT(STDMETHODCALLTYPE * AdapterRemoved) (IAdapterNotificationSink * This, IAdapterInfo * pAdapter);
	HRESULT(STDMETHODCALLTYPE * AdapterModified) (IAdapterNotificationSink * This, IAdapterInfo * pAdapter);
	HRESULT(STDMETHODCALLTYPE * AdapterUpdatePortMapping) (IAdapterNotificationSink * This, IAdapterInfo * pAdapter);
	END_INTERFACE
}  IAdapterNotificationSinkVtbl;
interface IAdapterNotificationSink
{
	CONST_VTBL struct IAdapterNotificationSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAdapterNotificationSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAdapterNotificationSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAdapterNotificationSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAdapterNotificationSink_AdapterAdded(This,pAdapter)( (This)->lpVtbl -> AdapterAdded(This,pAdapter) )
#define IAdapterNotificationSink_AdapterRemoved(This,pAdapter)( (This)->lpVtbl -> AdapterRemoved(This,pAdapter) )
#define IAdapterNotificationSink_AdapterModified(This,pAdapter)( (This)->lpVtbl -> AdapterModified(This,pAdapter) )
#define IAdapterNotificationSink_AdapterUpdatePortMapping(This,pAdapter)( (This)->lpVtbl -> AdapterUpdatePortMapping(This,pAdapter) )
#endif
#endif
#ifndef __IApplicationGatewayServices_INTERFACE_DEFINED__
#define __IApplicationGatewayServices_INTERFACE_DEFINED__
extern const IID IID_IApplicationGatewayServices;
typedef struct IApplicationGatewayServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IApplicationGatewayServices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IApplicationGatewayServices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IApplicationGatewayServices * This);
	HRESULT(STDMETHODCALLTYPE * CreatePrimaryControlChannel) (IApplicationGatewayServices * This, ULONG uAdapterIndex, ALG_PROTOCOL eProtocol, USHORT usPortToCapture, ALG_CAPTURE eCaptureType, BOOL fCaptureInbound, ULONG ulListenAddress, USHORT usListenPort, IPrimaryControlChannel ** ppIControlChannel);
	HRESULT(STDMETHODCALLTYPE * CreateSecondaryControlChannel) (IApplicationGatewayServices * This, ALG_PROTOCOL eProtocol, ULONG ulPrivateAddress, USHORT usPrivatePort, ULONG ulPublicAddress, USHORT usPublicPort, ULONG ulRemoteAddress, USHORT usRemotePort, ULONG ulListenAddress, USHORT usListenPort, ALG_DIRECTION eDirection, BOOL fPersistent, ISecondaryControlChannel ** ppControlChannel);
	HRESULT(STDMETHODCALLTYPE * GetBestSourceAddressForDestinationAddress) (IApplicationGatewayServices * This, ULONG ulDstAddress, BOOL fDemandDial, ULONG * pulBestSrcAddress);
	HRESULT(STDMETHODCALLTYPE * PrepareProxyConnection) (IApplicationGatewayServices * This, ALG_PROTOCOL eProtocol, ULONG ulSrcAddress, USHORT usSrcPort, ULONG ulDstAddress, USHORT usDstPort, BOOL fNoTimeout, IPendingProxyConnection ** ppPendingConnection);
	HRESULT(STDMETHODCALLTYPE * PrepareSourceModifiedProxyConnection) (IApplicationGatewayServices * This, ALG_PROTOCOL eProtocol, ULONG ulSrcAddress, USHORT usSrcPort, ULONG ulDstAddress, USHORT usDstPort, ULONG ulNewSrcAddress, USHORT usNewSourcePort, IPendingProxyConnection ** ppPendingConnection);
	HRESULT(STDMETHODCALLTYPE * CreateDataChannel) (IApplicationGatewayServices * This, ALG_PROTOCOL eProtocol, ULONG ulPrivateAddress, USHORT usPrivatePort, ULONG ulPublicAddress, USHORT usPublicPort, ULONG ulRemoteAddress, USHORT usRemotePort, ALG_DIRECTION eDirection, ALG_NOTIFICATION eDesiredNotification, BOOL fNoTimeout, IDataChannel ** ppDataChannel);
	HRESULT(STDMETHODCALLTYPE * CreatePersistentDataChannel) (IApplicationGatewayServices * This, ALG_PROTOCOL eProtocol, ULONG ulPrivateAddress, USHORT usPrivatePort, ULONG ulPublicAddress, USHORT usPublicPort, ULONG ulRemoteAddress, USHORT usRemotePort, ALG_DIRECTION eDirection, IPersistentDataChannel ** ppIPersistentDataChannel);
	HRESULT(STDMETHODCALLTYPE * ReservePort) (IApplicationGatewayServices * This, USHORT usPortCount, USHORT * pusReservedPort);
	HRESULT(STDMETHODCALLTYPE * ReleaseReservedPort) (IApplicationGatewayServices * This, USHORT usReservedPortBase, USHORT usPortCount);
	HRESULT(STDMETHODCALLTYPE * EnumerateAdapters) (IApplicationGatewayServices * This, IEnumAdapterInfo ** ppIEnumAdapterInfo);
	HRESULT(STDMETHODCALLTYPE * StartAdapterNotifications) (IApplicationGatewayServices * This, IAdapterNotificationSink * pSink, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * StopAdapterNotifications) (IApplicationGatewayServices * This, DWORD dwCookieOfSink);
	HRESULT(STDMETHODCALLTYPE * LookupAdapterPortMapping) (IApplicationGatewayServices * This, ULONG ulAdapterIndex, UCHAR Protocol, ULONG ulDestinationAddress, USHORT usDestinationPort, ULONG * pulRemapAddress, USHORT * pusRemapPort);
	END_INTERFACE
}  IApplicationGatewayServicesVtbl;
interface IApplicationGatewayServices
{
	CONST_VTBL struct IApplicationGatewayServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IApplicationGatewayServices_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IApplicationGatewayServices_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IApplicationGatewayServices_Release(This)( (This)->lpVtbl -> Release(This) )
#define IApplicationGatewayServices_CreatePrimaryControlChannel(This,uAdapterIndex,eProtocol,usPortToCapture,eCaptureType,fCaptureInbound,ulListenAddress,usListenPort,ppIControlChannel)( (This)->lpVtbl -> CreatePrimaryControlChannel(This,uAdapterIndex,eProtocol,usPortToCapture,eCaptureType,fCaptureInbound,ulListenAddress,usListenPort,ppIControlChannel) )
#define IApplicationGatewayServices_CreateSecondaryControlChannel(This,eProtocol,ulPrivateAddress,usPrivatePort,ulPublicAddress,usPublicPort,ulRemoteAddress,usRemotePort,ulListenAddress,usListenPort,eDirection,fPersistent,ppControlChannel)( (This)->lpVtbl -> CreateSecondaryControlChannel(This,eProtocol,ulPrivateAddress,usPrivatePort,ulPublicAddress,usPublicPort,ulRemoteAddress,usRemotePort,ulListenAddress,usListenPort,eDirection,fPersistent,ppControlChannel) )
#define IApplicationGatewayServices_GetBestSourceAddressForDestinationAddress(This,ulDstAddress,fDemandDial,pulBestSrcAddress)( (This)->lpVtbl -> GetBestSourceAddressForDestinationAddress(This,ulDstAddress,fDemandDial,pulBestSrcAddress) )
#define IApplicationGatewayServices_PrepareProxyConnection(This,eProtocol,ulSrcAddress,usSrcPort,ulDstAddress,usDstPort,fNoTimeout,ppPendingConnection)( (This)->lpVtbl -> PrepareProxyConnection(This,eProtocol,ulSrcAddress,usSrcPort,ulDstAddress,usDstPort,fNoTimeout,ppPendingConnection) )
#define IApplicationGatewayServices_PrepareSourceModifiedProxyConnection(This,eProtocol,ulSrcAddress,usSrcPort,ulDstAddress,usDstPort,ulNewSrcAddress,usNewSourcePort,ppPendingConnection)( (This)->lpVtbl -> PrepareSourceModifiedProxyConnection(This,eProtocol,ulSrcAddress,usSrcPort,ulDstAddress,usDstPort,ulNewSrcAddress,usNewSourcePort,ppPendingConnection) )
#define IApplicationGatewayServices_CreateDataChannel(This,eProtocol,ulPrivateAddress,usPrivatePort,ulPublicAddress,usPublicPort,ulRemoteAddress,usRemotePort,eDirection,eDesiredNotification,fNoTimeout,ppDataChannel)( (This)->lpVtbl -> CreateDataChannel(This,eProtocol,ulPrivateAddress,usPrivatePort,ulPublicAddress,usPublicPort,ulRemoteAddress,usRemotePort,eDirection,eDesiredNotification,fNoTimeout,ppDataChannel) )
#define IApplicationGatewayServices_CreatePersistentDataChannel(This,eProtocol,ulPrivateAddress,usPrivatePort,ulPublicAddress,usPublicPort,ulRemoteAddress,usRemotePort,eDirection,ppIPersistentDataChannel)( (This)->lpVtbl -> CreatePersistentDataChannel(This,eProtocol,ulPrivateAddress,usPrivatePort,ulPublicAddress,usPublicPort,ulRemoteAddress,usRemotePort,eDirection,ppIPersistentDataChannel) )
#define IApplicationGatewayServices_ReservePort(This,usPortCount,pusReservedPort)( (This)->lpVtbl -> ReservePort(This,usPortCount,pusReservedPort) )
#define IApplicationGatewayServices_ReleaseReservedPort(This,usReservedPortBase,usPortCount)( (This)->lpVtbl -> ReleaseReservedPort(This,usReservedPortBase,usPortCount) )
#define IApplicationGatewayServices_EnumerateAdapters(This,ppIEnumAdapterInfo)( (This)->lpVtbl -> EnumerateAdapters(This,ppIEnumAdapterInfo) )
#define IApplicationGatewayServices_StartAdapterNotifications(This,pSink,pdwCookie)( (This)->lpVtbl -> StartAdapterNotifications(This,pSink,pdwCookie) )
#define IApplicationGatewayServices_StopAdapterNotifications(This,dwCookieOfSink)( (This)->lpVtbl -> StopAdapterNotifications(This,dwCookieOfSink) )
#define IApplicationGatewayServices_LookupAdapterPortMapping(This,ulAdapterIndex,Protocol,ulDestinationAddress,usDestinationPort,pulRemapAddress,pusRemapPort)( (This)->lpVtbl -> LookupAdapterPortMapping(This,ulAdapterIndex,Protocol,ulDestinationAddress,usDestinationPort,pulRemapAddress,pusRemapPort) )
#endif
#endif
#ifndef __IApplicationGateway_INTERFACE_DEFINED__
#define __IApplicationGateway_INTERFACE_DEFINED__
extern const IID IID_IApplicationGateway;
typedef struct IApplicationGatewayVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IApplicationGateway * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IApplicationGateway * This);
	ULONG(STDMETHODCALLTYPE * Release) (IApplicationGateway * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IApplicationGateway * This, IApplicationGatewayServices * pAlgServices);
	HRESULT(STDMETHODCALLTYPE * Stop) (IApplicationGateway * This);
	END_INTERFACE
}  IApplicationGatewayVtbl;
interface IApplicationGateway
{
	CONST_VTBL struct IApplicationGatewayVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IApplicationGateway_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IApplicationGateway_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IApplicationGateway_Release(This)( (This)->lpVtbl -> Release(This) )
#define IApplicationGateway_Initialize(This,pAlgServices)( (This)->lpVtbl -> Initialize(This,pAlgServices) )
#define IApplicationGateway_Stop(This)( (This)->lpVtbl -> Stop(This) )
#endif
#endif
#ifndef __ALGLib_LIBRARY_DEFINED__
#define __ALGLib_LIBRARY_DEFINED__
extern const IID LIBID_ALGLib;
extern const CLSID CLSID_ApplicationGatewayServices;
extern const CLSID CLSID_PrimaryControlChannel;
extern const CLSID CLSID_SecondaryControlChannel;
extern const CLSID CLSID_AdapterInfo;
extern const CLSID CLSID_EnumAdapterInfo;
extern const CLSID CLSID_PendingProxyConnection;
extern const CLSID CLSID_DataChannel;
extern const CLSID CLSID_PersistentDataChannel;
#endif
#endif
