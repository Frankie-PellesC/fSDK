/*+@@file@@----------------------------------------------------------------*//*!
 \file		tsvirtualchannels.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 13:08:34 2016
 \date		Modified on Sat Sep 17 13:08:34 2016
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
#ifndef __tsvirtualchannels_h__
#define __tsvirtualchannels_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWTSPlugin_FWD_DEFINED__
#define __IWTSPlugin_FWD_DEFINED__
typedef interface IWTSPlugin IWTSPlugin;
#endif
#ifndef __IWTSListener_FWD_DEFINED__
#define __IWTSListener_FWD_DEFINED__
typedef interface IWTSListener IWTSListener;
#endif
#ifndef __IWTSListenerCallback_FWD_DEFINED__
#define __IWTSListenerCallback_FWD_DEFINED__
typedef interface IWTSListenerCallback IWTSListenerCallback;
#endif
#ifndef __IWTSVirtualChannelCallback_FWD_DEFINED__
#define __IWTSVirtualChannelCallback_FWD_DEFINED__
typedef interface IWTSVirtualChannelCallback IWTSVirtualChannelCallback;
#endif
#ifndef __IWTSVirtualChannelManager_FWD_DEFINED__
#define __IWTSVirtualChannelManager_FWD_DEFINED__
typedef interface IWTSVirtualChannelManager IWTSVirtualChannelManager;
#endif
#ifndef __IWTSVirtualChannel_FWD_DEFINED__
#define __IWTSVirtualChannel_FWD_DEFINED__
typedef interface IWTSVirtualChannel IWTSVirtualChannel;
#endif
#include <unknwn.h>
#include <oaidl.h>
#define  WTS_PROPERTY_DEFAULT_CONFIG  L"DefaultConfig"
extern const IID IID_IWTSPlugin = { 0xA1230201, 0x1439, 0x4e62, {0xa4, 0x14, 0x19, 0x0d, 0x0a, 0xc3, 0xd4, 0x0e}};
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0000_v0_0_s_ifspec;
#ifndef __IWTSPlugin_INTERFACE_DEFINED__
#define __IWTSPlugin_INTERFACE_DEFINED__
extern const IID IID_IWTSPlugin;
typedef struct IWTSPluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWTSPlugin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWTSPlugin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWTSPlugin * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IWTSPlugin * This, IWTSVirtualChannelManager * pChannelMgr);
	HRESULT(STDMETHODCALLTYPE * Connected) (IWTSPlugin * This);
	HRESULT(STDMETHODCALLTYPE * Disconnected) (IWTSPlugin * This, DWORD dwDisconnectCode);
	HRESULT(STDMETHODCALLTYPE * Terminated) (IWTSPlugin * This);
	END_INTERFACE
}  IWTSPluginVtbl;
interface IWTSPlugin
{
	CONST_VTBL struct IWTSPluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWTSPlugin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWTSPlugin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWTSPlugin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWTSPlugin_Initialize(This,pChannelMgr) ( (This)->lpVtbl -> Initialize(This,pChannelMgr) )
#define IWTSPlugin_Connected(This) ( (This)->lpVtbl -> Connected(This) )
#define IWTSPlugin_Disconnected(This,dwDisconnectCode) ( (This)->lpVtbl -> Disconnected(This,dwDisconnectCode) )
#define IWTSPlugin_Terminated(This) ( (This)->lpVtbl -> Terminated(This) )
#endif
#endif
extern
const IID IID_IWTSListener = { 0xA1230206, 0x9a39, 0x4d58, {0x86, 0x74, 0xcd, 0xb4, 0xdf, 0xf4, 0xe7, 0x3b}};
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0001_v0_0_s_ifspec;
#ifndef __IWTSListener_INTERFACE_DEFINED__
#define __IWTSListener_INTERFACE_DEFINED__
extern const IID IID_IWTSListener;
typedef struct IWTSListenerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWTSListener * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWTSListener * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWTSListener * This);
	HRESULT(STDMETHODCALLTYPE * GetConfiguration) (IWTSListener * This, IPropertyBag ** ppPropertyBag);
	END_INTERFACE
}  IWTSListenerVtbl;
interface IWTSListener
{
	CONST_VTBL struct IWTSListenerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWTSListener_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWTSListener_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWTSListener_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWTSListener_GetConfiguration(This,ppPropertyBag) ( (This)->lpVtbl -> GetConfiguration(This,ppPropertyBag) )
#endif
#endif
extern const IID IID_IWTSListenerCallback = { 0xA1230203, 0xd6a7, 0x11d8, {0xb9, 0xfd, 0x00, 0x0b, 0xdb, 0xd1, 0xf1, 0x98}};
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0002_v0_0_s_ifspec;
#ifndef __IWTSListenerCallback_INTERFACE_DEFINED__
#define __IWTSListenerCallback_INTERFACE_DEFINED__
extern const IID IID_IWTSListenerCallback;
typedef struct IWTSListenerCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWTSListenerCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWTSListenerCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWTSListenerCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnNewChannelConnection) (IWTSListenerCallback * This, IWTSVirtualChannel * pChannel, BSTR data, BOOL * pbAccept, IWTSVirtualChannelCallback ** ppCallback);
	END_INTERFACE
}  IWTSListenerCallbackVtbl;
interface IWTSListenerCallback
{
	CONST_VTBL struct IWTSListenerCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWTSListenerCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWTSListenerCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWTSListenerCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWTSListenerCallback_OnNewChannelConnection(This,pChannel,data,pbAccept,ppCallback) ( (This)->lpVtbl -> OnNewChannelConnection(This,pChannel,data,pbAccept,ppCallback) )
#endif
#endif
extern const IID IID_IWTSVirtualChannelCallback = { 0xA1230204, 0xd6a7, 0x11d8, {0xb9, 0xfd, 0x00, 0x0b, 0xdb, 0xd1, 0xf1, 0x98}};
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0003_v0_0_s_ifspec;
#ifndef __IWTSVirtualChannelCallback_INTERFACE_DEFINED__
#define __IWTSVirtualChannelCallback_INTERFACE_DEFINED__
extern const IID IID_IWTSVirtualChannelCallback;
typedef struct IWTSVirtualChannelCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWTSVirtualChannelCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWTSVirtualChannelCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWTSVirtualChannelCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnDataReceived) (IWTSVirtualChannelCallback * This, ULONG cbSize, BYTE * pBuffer);
	HRESULT(STDMETHODCALLTYPE * OnClose) (IWTSVirtualChannelCallback * This);
	END_INTERFACE
}  IWTSVirtualChannelCallbackVtbl;
interface IWTSVirtualChannelCallback
{
	CONST_VTBL struct IWTSVirtualChannelCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWTSVirtualChannelCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWTSVirtualChannelCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWTSVirtualChannelCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWTSVirtualChannelCallback_OnDataReceived(This,cbSize,pBuffer) ( (This)->lpVtbl -> OnDataReceived(This,cbSize,pBuffer) )
#define IWTSVirtualChannelCallback_OnClose(This) ( (This)->lpVtbl -> OnClose(This) )
#endif
#endif
extern const IID IID_IWTSVirtualChannelManager = { 0xA1230205, 0xd6a7, 0x11d8, {0xb9, 0xfd, 0x00, 0x0b, 0xdb, 0xd1, 0xf1, 0x98} };
#define  TS_VC_LISTENER_STATIC_CHANNEL   0x00000001
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0004_v0_0_s_ifspec;
#ifndef __IWTSVirtualChannelManager_INTERFACE_DEFINED__
#define __IWTSVirtualChannelManager_INTERFACE_DEFINED__
extern const IID IID_IWTSVirtualChannelManager;
typedef struct IWTSVirtualChannelManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWTSVirtualChannelManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWTSVirtualChannelManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWTSVirtualChannelManager * This);
	HRESULT(STDMETHODCALLTYPE * CreateListener) (IWTSVirtualChannelManager * This, const char *pszChannelName, ULONG uFlags, IWTSListenerCallback * pListenerCallback, IWTSListener ** ppListener);
	END_INTERFACE
}  IWTSVirtualChannelManagerVtbl;
interface IWTSVirtualChannelManager
{
	CONST_VTBL struct IWTSVirtualChannelManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWTSVirtualChannelManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWTSVirtualChannelManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWTSVirtualChannelManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWTSVirtualChannelManager_CreateListener(This,pszChannelName,uFlags,pListenerCallback,ppListener) ( (This)->lpVtbl -> CreateListener(This,pszChannelName,uFlags,pListenerCallback,ppListener) )
#endif
#endif
extern const IID IID_IWTSVirtualChannel = { 0xA1230207, 0xd6a7, 0x11d8, {0xb9, 0xfd, 0x00, 0x0b, 0xdb, 0xd1, 0xf1, 0x98}};
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsvirtualchannels_0000_0005_v0_0_s_ifspec;
#ifndef __IWTSVirtualChannel_INTERFACE_DEFINED__
#define __IWTSVirtualChannel_INTERFACE_DEFINED__
extern const IID IID_IWTSVirtualChannel;
typedef struct IWTSVirtualChannelVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWTSVirtualChannel * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWTSVirtualChannel * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWTSVirtualChannel * This);
	HRESULT(STDMETHODCALLTYPE * Write) (IWTSVirtualChannel * This, ULONG cbSize, BYTE * pBuffer, IUnknown * pReserved);
	HRESULT(STDMETHODCALLTYPE * Close) (IWTSVirtualChannel * This);
	END_INTERFACE
}  IWTSVirtualChannelVtbl;
interface IWTSVirtualChannel
{
	CONST_VTBL struct IWTSVirtualChannelVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWTSVirtualChannel_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWTSVirtualChannel_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWTSVirtualChannel_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWTSVirtualChannel_Write(This,cbSize,pBuffer,pReserved) ( (This)->lpVtbl -> Write(This,cbSize,pBuffer,pReserved) )
#define IWTSVirtualChannel_Close(This) ( (This)->lpVtbl -> Close(This) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif
