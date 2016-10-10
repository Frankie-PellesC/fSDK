/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmpservices.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 15:14:38 2016
 \date		Modified on Mon Sep 19 15:14:38 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __wmpservices_h__
#define __wmpservices_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMPServices_FWD_DEFINED__
#define __IWMPServices_FWD_DEFINED__
typedef interface IWMPServices IWMPServices;
#endif
#ifndef __IWMPMediaPluginRegistrar_FWD_DEFINED__
#define __IWMPMediaPluginRegistrar_FWD_DEFINED__
typedef interface IWMPMediaPluginRegistrar IWMPMediaPluginRegistrar;
#endif
#ifndef __IWMPPlugin_FWD_DEFINED__
#define __IWMPPlugin_FWD_DEFINED__
typedef interface IWMPPlugin IWMPPlugin;
#endif
#ifndef __IWMPPluginEnable_FWD_DEFINED__
#define __IWMPPluginEnable_FWD_DEFINED__
typedef interface IWMPPluginEnable IWMPPluginEnable;
#endif
#ifndef __IWMPGraphCreation_FWD_DEFINED__
#define __IWMPGraphCreation_FWD_DEFINED__
typedef interface IWMPGraphCreation IWMPGraphCreation;
#endif
#ifndef __IWMPConvert_FWD_DEFINED__
#define __IWMPConvert_FWD_DEFINED__
typedef interface IWMPConvert IWMPConvert;
#endif
#ifndef __IWMPTranscodePolicy_FWD_DEFINED__
#define __IWMPTranscodePolicy_FWD_DEFINED__
typedef interface IWMPTranscodePolicy IWMPTranscodePolicy;
#endif
#ifndef __IWMPUserEventSink_FWD_DEFINED__
#define __IWMPUserEventSink_FWD_DEFINED__
typedef interface IWMPUserEventSink IWMPUserEventSink;
#endif
#include "oaidl.h"
#include "ocidl.h"
typedef enum WMPServices_StreamState
{
	WMPServices_StreamState_Stop = 0,
	WMPServices_StreamState_Pause = (WMPServices_StreamState_Stop + 1),
	WMPServices_StreamState_Play = (WMPServices_StreamState_Pause + 1)
} WMPServices_StreamState;
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0000_v0_0_s_ifspec;
#ifndef __IWMPServices_INTERFACE_DEFINED__
#define __IWMPServices_INTERFACE_DEFINED__
extern const IID IID_IWMPServices;
typedef struct IWMPServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPServices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPServices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPServices * This);
	HRESULT(STDMETHODCALLTYPE * GetStreamTime) (IWMPServices * This, LONGLONG * prt);
	HRESULT(STDMETHODCALLTYPE * GetStreamState) (IWMPServices * This, WMPServices_StreamState * pState);
	END_INTERFACE
}  IWMPServicesVtbl;
interface IWMPServices
{
	CONST_VTBL struct IWMPServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPServices_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPServices_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPServices_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPServices_GetStreamTime(This,prt) ( (This)->lpVtbl -> GetStreamTime(This,prt) )
#define IWMPServices_GetStreamState(This,pState) ( (This)->lpVtbl -> GetStreamState(This,pState) )
#endif
#endif
EXTERN_GUID(CLSID_WMPMediaPluginRegistrar, 0x5569e7f5, 0x424b, 0x4b93, 0x89, 0xca, 0x79, 0xd1, 0x79, 0x24, 0x68, 0x9a);
EXTERN_GUID(WMP_PLUGINTYPE_DSP, 0x6434baea, 0x4954, 0x498d, 0xab, 0xd5, 0x2b, 0x7, 0x12, 0x3e, 0x1f, 0x4);
EXTERN_GUID(WMP_PLUGINTYPE_DSP_OUTOFPROC, 0xef29b174, 0xc347, 0x44cc, 0x9a, 0x4f, 0x23, 0x99, 0x11, 0x8f, 0xf3, 0x8c);
EXTERN_GUID(WMP_PLUGINTYPE_RENDERING, 0xa8554541, 0x115d, 0x406a, 0xa4, 0xc7, 0x51, 0x11, 0x1c, 0x33, 0x1, 0x83);
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0001_v0_0_s_ifspec;
#ifndef __IWMPMediaPluginRegistrar_INTERFACE_DEFINED__
#define __IWMPMediaPluginRegistrar_INTERFACE_DEFINED__
extern const IID IID_IWMPMediaPluginRegistrar;
typedef struct IWMPMediaPluginRegistrarVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPMediaPluginRegistrar * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPMediaPluginRegistrar * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPMediaPluginRegistrar * This);
	HRESULT(STDMETHODCALLTYPE * WMPRegisterPlayerPlugin) (IWMPMediaPluginRegistrar * This, LPWSTR pwszFriendlyName, LPWSTR pwszDescription, LPWSTR pwszUninstallString, DWORD dwPriority, GUID guidPluginType, CLSID clsid, UINT cMediaTypes, LPVOID pMediaTypes);
	HRESULT(STDMETHODCALLTYPE * WMPUnRegisterPlayerPlugin) (IWMPMediaPluginRegistrar * This, GUID guidPluginType, CLSID clsid);
	END_INTERFACE
}  IWMPMediaPluginRegistrarVtbl;
interface IWMPMediaPluginRegistrar
{
	CONST_VTBL struct IWMPMediaPluginRegistrarVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPMediaPluginRegistrar_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPMediaPluginRegistrar_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPMediaPluginRegistrar_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPMediaPluginRegistrar_WMPRegisterPlayerPlugin(This,pwszFriendlyName,pwszDescription,pwszUninstallString,dwPriority,guidPluginType,clsid,cMediaTypes,pMediaTypes) ( (This)->lpVtbl -> WMPRegisterPlayerPlugin(This,pwszFriendlyName,pwszDescription,pwszUninstallString,dwPriority,guidPluginType,clsid,cMediaTypes,pMediaTypes) )
#define IWMPMediaPluginRegistrar_WMPUnRegisterPlayerPlugin(This,guidPluginType,clsid) ( (This)->lpVtbl -> WMPUnRegisterPlayerPlugin(This,guidPluginType,clsid) )
#endif
#endif
typedef enum WMPPlugin_Caps
{
	WMPPlugin_Caps_CannotConvertFormats = 1
} WMPPlugin_Caps;
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0002_v0_0_s_ifspec;
#ifndef __IWMPPlugin_INTERFACE_DEFINED__
#define __IWMPPlugin_INTERFACE_DEFINED__
extern const IID IID_IWMPPlugin;
typedef struct IWMPPluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPPlugin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPPlugin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPPlugin * This);
	HRESULT(STDMETHODCALLTYPE * Init) (IWMPPlugin * This, DWORD_PTR dwPlaybackContext);
	HRESULT(STDMETHODCALLTYPE * Shutdown) (IWMPPlugin * This);
	HRESULT(STDMETHODCALLTYPE * GetID) (IWMPPlugin * This, GUID * pGUID);
	HRESULT(STDMETHODCALLTYPE * GetCaps) (IWMPPlugin * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * AdviseWMPServices) (IWMPPlugin * This, IWMPServices * pWMPServices);
	HRESULT(STDMETHODCALLTYPE * UnAdviseWMPServices) (IWMPPlugin * This);
	END_INTERFACE
}  IWMPPluginVtbl;
interface IWMPPlugin
{
	CONST_VTBL struct IWMPPluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPPlugin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPPlugin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPPlugin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPPlugin_Init(This,dwPlaybackContext) ( (This)->lpVtbl -> Init(This,dwPlaybackContext) )
#define IWMPPlugin_Shutdown(This) ( (This)->lpVtbl -> Shutdown(This) )
#define IWMPPlugin_GetID(This,pGUID) ( (This)->lpVtbl -> GetID(This,pGUID) )
#define IWMPPlugin_GetCaps(This,pdwFlags) ( (This)->lpVtbl -> GetCaps(This,pdwFlags) )
#define IWMPPlugin_AdviseWMPServices(This,pWMPServices) ( (This)->lpVtbl -> AdviseWMPServices(This,pWMPServices) )
#define IWMPPlugin_UnAdviseWMPServices(This) ( (This)->lpVtbl -> UnAdviseWMPServices(This) )
#endif
#endif
#ifndef __IWMPPluginEnable_INTERFACE_DEFINED__
#define __IWMPPluginEnable_INTERFACE_DEFINED__
extern const IID IID_IWMPPluginEnable;
typedef struct IWMPPluginEnableVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPPluginEnable * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPPluginEnable * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPPluginEnable * This);
	HRESULT(STDMETHODCALLTYPE * SetEnable) (IWMPPluginEnable * This, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE * GetEnable) (IWMPPluginEnable * This, BOOL * pfEnable);
	END_INTERFACE
}  IWMPPluginEnableVtbl;
interface IWMPPluginEnable
{
	CONST_VTBL struct IWMPPluginEnableVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPPluginEnable_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPPluginEnable_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPPluginEnable_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPPluginEnable_SetEnable(This,fEnable) ( (This)->lpVtbl -> SetEnable(This,fEnable) )
#define IWMPPluginEnable_GetEnable(This,pfEnable) ( (This)->lpVtbl -> GetEnable(This,pfEnable) )
#endif
#endif
#ifndef __IWMPGraphCreation_INTERFACE_DEFINED__
#define __IWMPGraphCreation_INTERFACE_DEFINED__
extern const IID IID_IWMPGraphCreation;
typedef struct IWMPGraphCreationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPGraphCreation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPGraphCreation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPGraphCreation * This);
	HRESULT(STDMETHODCALLTYPE * GraphCreationPreRender) (IWMPGraphCreation * This, IUnknown * pFilterGraph, IUnknown * pReserved);
	HRESULT(STDMETHODCALLTYPE * GraphCreationPostRender) (IWMPGraphCreation * This, IUnknown * pFilterGraph);
	HRESULT(STDMETHODCALLTYPE * GetGraphCreationFlags) (IWMPGraphCreation * This, DWORD * pdwFlags);
	END_INTERFACE
}  IWMPGraphCreationVtbl;
interface IWMPGraphCreation
{
	CONST_VTBL struct IWMPGraphCreationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPGraphCreation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPGraphCreation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPGraphCreation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPGraphCreation_GraphCreationPreRender(This,pFilterGraph,pReserved) ( (This)->lpVtbl -> GraphCreationPreRender(This,pFilterGraph,pReserved) )
#define IWMPGraphCreation_GraphCreationPostRender(This,pFilterGraph) ( (This)->lpVtbl -> GraphCreationPostRender(This,pFilterGraph) )
#define IWMPGraphCreation_GetGraphCreationFlags(This,pdwFlags) ( (This)->lpVtbl -> GetGraphCreationFlags(This,pdwFlags) )
#endif
#endif
#define WMPGC_FLAGS_ALLOW_PREROLL    0x00000001
#define WMPGC_FLAGS_SUPPRESS_DIALOGS 0x00000002
#define WMPGC_FLAGS_IGNORE_AV_SYNC   0x00000004
#define WMPGC_FLAGS_DISABLE_PLUGINS  0x00000008
#define WMPGC_FLAGS_USE_CUSTOM_GRAPH 0x00000010
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0005_v0_0_s_ifspec;
#ifndef __IWMPConvert_INTERFACE_DEFINED__
#define __IWMPConvert_INTERFACE_DEFINED__
extern const IID IID_IWMPConvert;
typedef struct IWMPConvertVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPConvert * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPConvert * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPConvert * This);
	HRESULT(STDMETHODCALLTYPE * ConvertFile) (IWMPConvert * This, BSTR bstrInputFile, BSTR bstrDestinationFolder, BSTR * pbstrOutputFile);
	HRESULT(STDMETHODCALLTYPE * GetErrorURL) (IWMPConvert * This, BSTR * pbstrURL);
	END_INTERFACE
}  IWMPConvertVtbl;
interface IWMPConvert
{
	CONST_VTBL struct IWMPConvertVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPConvert_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPConvert_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPConvert_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPConvert_ConvertFile(This,bstrInputFile,bstrDestinationFolder,pbstrOutputFile) ( (This)->lpVtbl -> ConvertFile(This,bstrInputFile,bstrDestinationFolder,pbstrOutputFile) )
#define IWMPConvert_GetErrorURL(This,pbstrURL) ( (This)->lpVtbl -> GetErrorURL(This,pbstrURL) )
#endif
#endif
#ifndef __IWMPTranscodePolicy_INTERFACE_DEFINED__
#define __IWMPTranscodePolicy_INTERFACE_DEFINED__
extern const IID IID_IWMPTranscodePolicy;
typedef struct IWMPTranscodePolicyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPTranscodePolicy * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPTranscodePolicy * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPTranscodePolicy * This);
	HRESULT(STDMETHODCALLTYPE * allowTranscode) (IWMPTranscodePolicy * This, VARIANT_BOOL * pvbAllow);
	END_INTERFACE
}  IWMPTranscodePolicyVtbl;
interface IWMPTranscodePolicy
{
	CONST_VTBL struct IWMPTranscodePolicyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPTranscodePolicy_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPTranscodePolicy_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPTranscodePolicy_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPTranscodePolicy_allowTranscode(This,pvbAllow) ( (This)->lpVtbl -> allowTranscode(This,pvbAllow) )
#endif
#endif
#define WMPUE_EC_USER   EC_USER + 0x100
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0007_v0_0_s_ifspec;
#ifndef __IWMPUserEventSink_INTERFACE_DEFINED__
#define __IWMPUserEventSink_INTERFACE_DEFINED__
extern const IID IID_IWMPUserEventSink;
typedef struct IWMPUserEventSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPUserEventSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPUserEventSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPUserEventSink * This);
	HRESULT(STDMETHODCALLTYPE * NotifyUserEvent) (IWMPUserEventSink * This, long EventCode);
	END_INTERFACE
}  IWMPUserEventSinkVtbl;
interface IWMPUserEventSink
{
	CONST_VTBL struct IWMPUserEventSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPUserEventSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPUserEventSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPUserEventSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPUserEventSink_NotifyUserEvent(This,EventCode) ( (This)->lpVtbl -> NotifyUserEvent(This,EventCode) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
#endif
