/*+@@file@@----------------------------------------------------------------*//*!
 \file		regbag.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 19:37:27 2016
 \date		Modified on Sun Jun 19 19:37:27 2016
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
#ifndef __regbag_h__
#define __regbag_h__
#if __POCC__ >= 500
#endif
#ifndef __ICreatePropBagOnRegKey_FWD_DEFINED__
#define __ICreatePropBagOnRegKey_FWD_DEFINED__
typedef interface ICreatePropBagOnRegKey ICreatePropBagOnRegKey;
#endif
#include "objidl.h"
#include "oaidl.h"
#include "ocidl.h"
extern RPC_IF_HANDLE __MIDL_itf_regbag_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_regbag_0000_0000_v0_0_s_ifspec;
#ifndef __ICreatePropBagOnRegKey_INTERFACE_DEFINED__
#define __ICreatePropBagOnRegKey_INTERFACE_DEFINED__
extern const IID IID_ICreatePropBagOnRegKey;
typedef struct ICreatePropBagOnRegKeyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICreatePropBagOnRegKey * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICreatePropBagOnRegKey * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICreatePropBagOnRegKey * This);
	HRESULT(STDMETHODCALLTYPE * Create) (ICreatePropBagOnRegKey * This, HKEY hkey, LPCOLESTR subkey, DWORD ulOptions, DWORD samDesired, REFIID iid, LPVOID * ppBag);
	END_INTERFACE
} ICreatePropBagOnRegKeyVtbl;
interface ICreatePropBagOnRegKey
{
	CONST_VTBL struct ICreatePropBagOnRegKeyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICreatePropBagOnRegKey_QueryInterface(This,riid,ppvObject)	    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICreatePropBagOnRegKey_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICreatePropBagOnRegKey_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICreatePropBagOnRegKey_Create(This,hkey,subkey,ulOptions,samDesired,iid,ppBag)    ( (This)->lpVtbl -> Create(This,hkey,subkey,ulOptions,samDesired,iid,ppBag) )
#endif
#endif
#endif
