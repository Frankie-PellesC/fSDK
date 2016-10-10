/*+@@file@@----------------------------------------------------------------*//*!
 \file		ivehandler.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 21:42:01 2016
 \date		Modified on Sun Jul 17 21:42:01 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __ivehandler_h__
#define __ivehandler_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __VEHandlerClass_FWD_DEFINED__
#define __VEHandlerClass_FWD_DEFINED__
typedef struct VEHandlerClass VEHandlerClass;
#endif
#ifndef __IVEHandler_FWD_DEFINED__
#define __IVEHandler_FWD_DEFINED__
typedef interface IVEHandler IVEHandler;
#endif
#include "unknwn.h"
typedef struct tag_VerError
{
	unsigned long flags;
	unsigned long opcode;
	unsigned long uOffset;
	unsigned long Token;
	unsigned long item1_flags;
	int *item1_data;
	unsigned long item2_flags;
	int *item2_data;
} _VerError;
typedef _VerError VEContext;
extern RPC_IF_HANDLE __MIDL_itf_ivehandler_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ivehandler_0000_0000_v0_0_s_ifspec;
#ifndef __VEHandlerLib_LIBRARY_DEFINED__
#define __VEHandlerLib_LIBRARY_DEFINED__
extern const IID LIBID_VEHandlerLib;
extern const CLSID CLSID_VEHandlerClass;
#endif
#ifndef __IVEHandler_INTERFACE_DEFINED__
#define __IVEHandler_INTERFACE_DEFINED__
extern const IID IID_IVEHandler;
typedef struct IVEHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVEHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVEHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVEHandler * This);
	HRESULT(STDMETHODCALLTYPE * VEHandler) (IVEHandler * This, HRESULT VECode, VEContext Context, SAFEARRAY * psa);
	HRESULT(STDMETHODCALLTYPE * SetReporterFtn) (IVEHandler * This, __int64 lFnPtr);
	END_INTERFACE
}  IVEHandlerVtbl;
interface IVEHandler
{
	CONST_VTBL struct IVEHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVEHandler_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVEHandler_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IVEHandler_Release(This)( (This)->lpVtbl -> Release(This) )
#define IVEHandler_VEHandler(This,VECode,Context,psa)( (This)->lpVtbl -> VEHandler(This,VECode,Context,psa) )
#define IVEHandler_SetReporterFtn(This,lFnPtr)( (This)->lpVtbl -> SetReporterFtn(This,lFnPtr) )
#endif
#endif
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
#endif
