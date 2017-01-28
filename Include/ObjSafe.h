/*+@@file@@----------------------------------------------------------------*//*!
 \file		ObjSafe.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 23:32:28 2016
 \date		Modified on Sun Sep 11 23:32:28 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __objsafe_h__
#define __objsafe_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IObjectSafety_FWD_DEFINED__
#define __IObjectSafety_FWD_DEFINED__
typedef interface IObjectSafety IObjectSafety;
#endif
#include <unknwn.h>
#pragma comment(lib,"uuid.lib")
#ifndef _LPSAFEOBJECT_DEFINED
#define _LPSAFEOBJECT_DEFINED
#define	INTERFACESAFE_FOR_UNTRUSTED_CALLER	0x00000001
#define	INTERFACESAFE_FOR_UNTRUSTED_DATA	0x00000002
#define	INTERFACE_USES_DISPEX	            0x00000004
#define	INTERFACE_USES_SECURITY_MANAGER	    0x00000008
DEFINE_GUID(IID_IObjectSafety, 0xcb5bdc81, 0x93c1, 0x11cf, 0x8f, 0x20, 0x0, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
extern GUID CATID_SafeForScripting;
extern GUID CATID_SafeForInitializing;
extern RPC_IF_HANDLE __MIDL_itf_objsafe_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objsafe_0000_0000_v0_0_s_ifspec;
#ifndef __IObjectSafety_INTERFACE_DEFINED__
#define __IObjectSafety_INTERFACE_DEFINED__
extern const IID IID_IObjectSafety;
typedef struct IObjectSafetyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IObjectSafety * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IObjectSafety * This);
	ULONG(STDMETHODCALLTYPE * Release) (IObjectSafety * This);
	HRESULT(STDMETHODCALLTYPE * GetInterfaceSafetyOptions) (IObjectSafety * This, REFIID riid, DWORD * pdwSupportedOptions, DWORD * pdwEnabledOptions);
	HRESULT(STDMETHODCALLTYPE * SetInterfaceSafetyOptions) (IObjectSafety * This, REFIID riid, DWORD dwOptionSetMask, DWORD dwEnabledOptions);
	END_INTERFACE
}  IObjectSafetyVtbl;
interface IObjectSafety
{
	CONST_VTBL struct IObjectSafetyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectSafety_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectSafety_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IObjectSafety_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IObjectSafety_GetInterfaceSafetyOptions(This,riid,pdwSupportedOptions,pdwEnabledOptions) ( (This)->lpVtbl -> GetInterfaceSafetyOptions(This,riid,pdwSupportedOptions,pdwEnabledOptions) )
#define IObjectSafety_SetInterfaceSafetyOptions(This,riid,dwOptionSetMask,dwEnabledOptions) ( (This)->lpVtbl -> SetInterfaceSafetyOptions(This,riid,dwOptionSetMask,dwEnabledOptions) )
#endif
#endif
typedef IObjectSafety *LPOBJECTSAFETY;
#endif
extern RPC_IF_HANDLE __MIDL_itf_objsafe_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objsafe_0000_0001_v0_0_s_ifspec;
#endif
