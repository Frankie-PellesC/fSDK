/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmsbasicplugin.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 15:17:28 2016
 \date		Modified on Mon Sep 19 15:17:28 2016
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
#ifndef __wmsbasicplugin_h__
#define __wmsbasicplugin_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSBasicPlugin_FWD_DEFINED__
#define __IWMSBasicPlugin_FWD_DEFINED__
typedef interface IWMSBasicPlugin IWMSBasicPlugin;
#endif
#include <WMSNamedValues.h>
#include <nsscore.h>
#include <WMSEventLog.h>
EXTERN_GUID(IID_IWMSBasicPlugin, 0x66E6CE48, 0xF8BB, 0x4bcc, 0x8F, 0xD6, 0x42, 0xA9, 0xD5, 0xD3, 0x28, 0x71);
extern RPC_IF_HANDLE __MIDL_itf_wmsbasicplugin_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsbasicplugin_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSBasicPlugin_INTERFACE_DEFINED__
#define __IWMSBasicPlugin_INTERFACE_DEFINED__
extern const IID IID_IWMSBasicPlugin;
typedef struct IWMSBasicPluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSBasicPlugin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSBasicPlugin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSBasicPlugin * This);
	HRESULT(STDMETHODCALLTYPE * InitializePlugin) (IWMSBasicPlugin * This, IWMSContext * pServerContext, IWMSNamedValues * pNamedValues, IWMSClassObject * pClassFactory);
	HRESULT(STDMETHODCALLTYPE * OnHeartbeat) (IWMSBasicPlugin * This);
	HRESULT(STDMETHODCALLTYPE * GetCustomAdminInterface) (IWMSBasicPlugin * This, IDispatch ** ppValue);
	HRESULT(STDMETHODCALLTYPE * ShutdownPlugin) (IWMSBasicPlugin * This);
	HRESULT(STDMETHODCALLTYPE * EnablePlugin) (IWMSBasicPlugin * This, long *plFlags, long *plHeartbeatPeriod);
	HRESULT(STDMETHODCALLTYPE * DisablePlugin) (IWMSBasicPlugin * This);
	END_INTERFACE
}  IWMSBasicPluginVtbl;
interface IWMSBasicPlugin
{
	CONST_VTBL struct IWMSBasicPluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSBasicPlugin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSBasicPlugin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSBasicPlugin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSBasicPlugin_InitializePlugin(This,pServerContext,pNamedValues,pClassFactory) ( (This)->lpVtbl -> InitializePlugin(This,pServerContext,pNamedValues,pClassFactory) )
#define IWMSBasicPlugin_OnHeartbeat(This) ( (This)->lpVtbl -> OnHeartbeat(This) )
#define IWMSBasicPlugin_GetCustomAdminInterface(This,ppValue) ( (This)->lpVtbl -> GetCustomAdminInterface(This,ppValue) )
#define IWMSBasicPlugin_ShutdownPlugin(This) ( (This)->lpVtbl -> ShutdownPlugin(This) )
#define IWMSBasicPlugin_EnablePlugin(This,plFlags,plHeartbeatPeriod) ( (This)->lpVtbl -> EnablePlugin(This,plFlags,plHeartbeatPeriod) )
#define IWMSBasicPlugin_DisablePlugin(This) ( (This)->lpVtbl -> DisablePlugin(This) )
#endif
#endif
#endif
