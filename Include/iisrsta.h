/*+@@file@@----------------------------------------------------------------*//*!
 \file		iisrsta.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 21:09:35 2016
 \date		Modified on Sat Jul 16 21:09:35 2016
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
#ifndef __iisrsta_h__
#define __iisrsta_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IIisServiceControl_FWD_DEFINED__
#define __IIisServiceControl_FWD_DEFINED__
typedef interface IIisServiceControl IIisServiceControl;
#endif
#ifndef __IisServiceControl_FWD_DEFINED__
#define __IisServiceControl_FWD_DEFINED__
typedef struct IisServiceControl IisServiceControl;
#endif
#include "oaidl.h"
#include "ocidl.h"
DEFINE_GUID(IID_IIisServiceControl, 0xE8FB8620, 0x588F, 0x11d2, 0x9d, 0x61, 0x0, 0xc0, 0x4f, 0x79, 0xc5, 0xfe);
DEFINE_GUID(CLSID_IisServiceControl, 0xE8FB8621, 0x588F, 0x11d2, 0x9d, 0x61, 0x0, 0xc0, 0x4f, 0x79, 0xc5, 0xfe);
DEFINE_GUID(LIBID_IISRSTALib, 0xE8FB8614, 0x588F, 0x11d2, 0x9d, 0x61, 0x0, 0xc0, 0x4f, 0x79, 0xc5, 0xfe);
extern RPC_IF_HANDLE __MIDL_itf_iisrsta_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iisrsta_0000_0000_v0_0_s_ifspec;
#ifndef __IIisServiceControl_INTERFACE_DEFINED__
#define __IIisServiceControl_INTERFACE_DEFINED__
extern const IID IID_IIisServiceControl;
typedef struct IIisServiceControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIisServiceControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIisServiceControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIisServiceControl * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IIisServiceControl * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IIisServiceControl * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IIisServiceControl * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IIisServiceControl * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Stop) (IIisServiceControl * This, DWORD dwTimeoutMsecs, DWORD dwForce);
	HRESULT(STDMETHODCALLTYPE * Start) (IIisServiceControl * This, DWORD dwTimeoutMsecs);
	HRESULT(STDMETHODCALLTYPE * Reboot) (IIisServiceControl * This, DWORD dwTimeouMsecs, DWORD dwForceAppsClosed);
	HRESULT(STDMETHODCALLTYPE * Status) (IIisServiceControl * This, DWORD dwBufferSize, unsigned char *pbBuffer, DWORD * pdwMDRequiredBufferSize, DWORD * pdwNumServices);
	HRESULT(STDMETHODCALLTYPE * Kill) (IIisServiceControl * This);
	END_INTERFACE
}  IIisServiceControlVtbl;
interface IIisServiceControl
{
	CONST_VTBL struct IIisServiceControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIisServiceControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IIisServiceControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IIisServiceControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IIisServiceControl_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IIisServiceControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IIisServiceControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IIisServiceControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IIisServiceControl_Stop(This,dwTimeoutMsecs,dwForce)( (This)->lpVtbl -> Stop(This,dwTimeoutMsecs,dwForce) )
#define IIisServiceControl_Start(This,dwTimeoutMsecs)( (This)->lpVtbl -> Start(This,dwTimeoutMsecs) )
#define IIisServiceControl_Reboot(This,dwTimeouMsecs,dwForceAppsClosed)( (This)->lpVtbl -> Reboot(This,dwTimeouMsecs,dwForceAppsClosed) )
#define IIisServiceControl_Status(This,dwBufferSize,pbBuffer,pdwMDRequiredBufferSize,pdwNumServices)( (This)->lpVtbl -> Status(This,dwBufferSize,pbBuffer,pdwMDRequiredBufferSize,pdwNumServices) )
#define IIisServiceControl_Kill(This)( (This)->lpVtbl -> Kill(This) )
#endif
#endif
#ifndef __IISRSTALib_LIBRARY_DEFINED__
#define __IISRSTALib_LIBRARY_DEFINED__
extern const IID LIBID_IISRSTALib;
extern const CLSID CLSID_IisServiceControl;
#endif
typedef struct
{
	DWORD iServiceName;
	DWORD iDisplayName;
	SERVICE_STATUS ServiceStatus;
} SERIALIZED_ENUM_SERVICE_STATUS;
extern RPC_IF_HANDLE __MIDL_itf_iisrsta_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iisrsta_0000_0001_v0_0_s_ifspec;
#endif
