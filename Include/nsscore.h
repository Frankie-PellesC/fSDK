/*+@@file@@----------------------------------------------------------------*//*!
 \file		nsscore.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:52:27 2016
 \date		Modified on Sun Sep 11 22:52:27 2016
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
#ifndef __nsscore_h__
#define __nsscore_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSClassObject_FWD_DEFINED__
#define __IWMSClassObject_FWD_DEFINED__
typedef interface IWMSClassObject IWMSClassObject;
#endif
#include "oaidl.h"
#include "wmscontext.h"
#if _MSC_VER > 1000
#pragma once
#endif
EXTERN_GUID(IID_IWMSClassObject, 0xF54E23A4, 0x1B1A, 0x11d1, 0x9E, 0x90, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
extern RPC_IF_HANDLE __MIDL_itf_nsscore_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_nsscore_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSClassObject_INTERFACE_DEFINED__
#define __IWMSClassObject_INTERFACE_DEFINED__
extern const IID IID_IWMSClassObject;
typedef struct IWMSClassObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSClassObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSClassObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSClassObject * This);
	HRESULT(STDMETHODCALLTYPE * CreateInstance) (IWMSClassObject * This, REFIID riid, void **ppunk);
	HRESULT(STDMETHODCALLTYPE * AllocIWMSPacket) (IWMSClassObject * This, REFIID riid, void **ppunk);
	HRESULT(STDMETHODCALLTYPE * AllocIWMSPacketList) (IWMSClassObject * This, REFIID riid, void **ppunk);
	HRESULT(STDMETHODCALLTYPE * AllocIWMSContext) (IWMSClassObject * This, REFIID riid, WMS_CONTEXT_TYPE ContextType, IUnknown * pRelatedContext, void **ppunk);
	HRESULT(STDMETHODCALLTYPE * AllocIWMSCommandContext) (IWMSClassObject * This, REFIID riid, IUnknown * pRelatedContext, void **ppunk);
	END_INTERFACE
}  IWMSClassObjectVtbl;
interface IWMSClassObject
{
	CONST_VTBL struct IWMSClassObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSClassObject_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSClassObject_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSClassObject_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSClassObject_CreateInstance(This,riid,ppunk) ( (This)->lpVtbl -> CreateInstance(This,riid,ppunk) )
#define IWMSClassObject_AllocIWMSPacket(This,riid,ppunk) ( (This)->lpVtbl -> AllocIWMSPacket(This,riid,ppunk) )
#define IWMSClassObject_AllocIWMSPacketList(This,riid,ppunk) ( (This)->lpVtbl -> AllocIWMSPacketList(This,riid,ppunk) )
#define IWMSClassObject_AllocIWMSContext(This,riid,ContextType,pRelatedContext,ppunk) ( (This)->lpVtbl -> AllocIWMSContext(This,riid,ContextType,pRelatedContext,ppunk) )
#define IWMSClassObject_AllocIWMSCommandContext(This,riid,pRelatedContext,ppunk) ( (This)->lpVtbl -> AllocIWMSCommandContext(This,riid,pRelatedContext,ppunk) )
#endif
#endif
#endif
