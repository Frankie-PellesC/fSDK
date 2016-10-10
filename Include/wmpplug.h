/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmpplug.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 15:09:45 2016
 \date		Modified on Mon Sep 19 15:09:45 2016
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
#ifndef __wmpplugpri_h__
#define __wmpplugpri_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMPPluginUI_FWD_DEFINED__
#define __IWMPPluginUI_FWD_DEFINED__
typedef interface IWMPPluginUI IWMPPluginUI;
#endif
#include "oaidl.h"
#include "wmp.h"
#define PLUGIN_INSTALLREGKEY                L"Software\\Microsoft\\MediaPlayer\\UIPlugins"
#define PLUGIN_INSTALLREGKEY_FRIENDLYNAME   L"FriendlyName"
#define PLUGIN_INSTALLREGKEY_DESCRIPTION    L"Description"
#define PLUGIN_INSTALLREGKEY_CAPABILITIES   L"Capabilities"
#define PLUGIN_INSTALLREGKEY_UNINSTALL      L"UninstallPath"
#define	PLUGIN_TYPE_BACKGROUND	( 0x1 )
#define	PLUGIN_TYPE_SEPARATEWINDOW	( 0x2 )
#define	PLUGIN_TYPE_DISPLAYAREA	( 0x3 )
#define	PLUGIN_TYPE_SETTINGSAREA	( 0x4 )
#define	PLUGIN_TYPE_METADATAAREA	( 0x5 )
#define	PLUGIN_FLAGS_HASPROPERTYPAGE	( 0x80000000 )
#define	PLUGIN_FLAGS_INSTALLAUTORUN	( 0x40000000 )
#define	PLUGIN_FLAGS_LAUNCHPROPERTYPAGE	( 0x20000000 )
#define	PLUGIN_FLAGS_ACCEPTSMEDIA	( 0x10000000 )
#define	PLUGIN_FLAGS_ACCEPTSPLAYLISTS	( 0x8000000 )
#define	PLUGIN_FLAGS_HASPRESETS	( 0x4000000 )
#define	PLUGIN_FLAGS_HIDDEN	( 0x2000000 )
#define PLUGIN_MISC_PRESETCOUNT      L"PresetCount"
#define PLUGIN_MISC_PRESETNAMES      L"PresetNames"
#define PLUGIN_MISC_CURRENTPRESET    L"CurrentPreset"
#define PLUGIN_SEPARATEWINDOW_RESIZABLE     L"Resizable"
#define PLUGIN_SEPARATEWINDOW_DEFAULTWIDTH  L"DefaultWidth"
#define PLUGIN_SEPARATEWINDOW_DEFAULTHEIGHT L"DefaultHeight"
#define PLUGIN_SEPARATEWINDOW_MINWIDTH      L"MinWidth"
#define PLUGIN_SEPARATEWINDOW_MINHEIGHT     L"MinHeight"
#define PLUGIN_SEPARATEWINDOW_MAXWIDTH      L"MaxWidth"
#define PLUGIN_SEPARATEWINDOW_MAXHEIGHT     L"MaxHeight"
#define PLUGIN_MISC_QUERYDESTROY            L"QueryDestroy"
#define PLUGIN_ALL_MEDIASENDTO              L"MediaSendTo"
#define PLUGIN_ALL_PLAYLISTSENDTO           L"PlaylistSendTo"
__inline BOOL WMPNotifyPluginAddRemove(void)
{
	return (PostMessage(HWND_BROADCAST, RegisterWindowMessageA("WMPlayer_PluginAddRemove"), 0, 0));
}
extern RPC_IF_HANDLE __MIDL_itf_wmpplugpri_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmpplugpri_0000_0000_v0_0_s_ifspec;
#ifndef __IWMPPluginUI_INTERFACE_DEFINED__
#define __IWMPPluginUI_INTERFACE_DEFINED__
extern const IID IID_IWMPPluginUI;
typedef struct IWMPPluginUIVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPPluginUI * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPPluginUI * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPPluginUI * This);
	HRESULT(STDMETHODCALLTYPE * SetCore) (IWMPPluginUI * This, IWMPCore * pCore);
	HRESULT(STDMETHODCALLTYPE * Create) (IWMPPluginUI * This, HWND hwndParent, HWND * phwndWindow);
	HRESULT(STDMETHODCALLTYPE * Destroy) (IWMPPluginUI * This);
	HRESULT(STDMETHODCALLTYPE * DisplayPropertyPage) (IWMPPluginUI * This, HWND hwndParent);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IWMPPluginUI * This, const WCHAR * pwszName, VARIANT * pvarProperty);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IWMPPluginUI * This, const WCHAR * pwszName, const VARIANT * pvarProperty);
	HRESULT(STDMETHODCALLTYPE * TranslateAccelerator) (IWMPPluginUI * This, LPMSG lpmsg);
	END_INTERFACE
}  IWMPPluginUIVtbl;
interface IWMPPluginUI
{
	CONST_VTBL struct IWMPPluginUIVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPPluginUI_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPPluginUI_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMPPluginUI_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMPPluginUI_SetCore(This,pCore) ( (This)->lpVtbl -> SetCore(This,pCore) )
#define IWMPPluginUI_Create(This,hwndParent,phwndWindow) ( (This)->lpVtbl -> Create(This,hwndParent,phwndWindow) )
#define IWMPPluginUI_Destroy(This) ( (This)->lpVtbl -> Destroy(This) )
#define IWMPPluginUI_DisplayPropertyPage(This,hwndParent) ( (This)->lpVtbl -> DisplayPropertyPage(This,hwndParent) )
#define IWMPPluginUI_GetProperty(This,pwszName,pvarProperty) ( (This)->lpVtbl -> GetProperty(This,pwszName,pvarProperty) )
#define IWMPPluginUI_SetProperty(This,pwszName,pvarProperty) ( (This)->lpVtbl -> SetProperty(This,pwszName,pvarProperty) )
#define IWMPPluginUI_TranslateAccelerator(This,lpmsg) ( (This)->lpVtbl -> TranslateAccelerator(This,lpmsg) )
#endif
#endif
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
#endif
