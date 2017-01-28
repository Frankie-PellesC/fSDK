/*+@@file@@----------------------------------------------------------------*//*!
 \file		simpdc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 23:45:06 2016
 \date		Modified on Fri Sep 16 23:45:06 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef I_SIMPDC_H_
#define I_SIMPDC_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __ISimpleDataConverter_FWD_DEFINED__
#define __ISimpleDataConverter_FWD_DEFINED__
typedef interface ISimpleDataConverter ISimpleDataConverter;
#endif
#include <oaidl.h>
#include <ocidl.h>
void __RPC_FAR *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void __RPC_FAR *);
#ifndef __ISimpleDataConverter_INTERFACE_DEFINED__
#define __ISimpleDataConverter_INTERFACE_DEFINED__
DEFINE_GUID(IID_ISimpleDataConverter, 0x78667670, 0x3C3D, 0x11d2, 0x91, 0xF9, 0x00, 0x60, 0x97, 0xC9, 0x7F, 0x9B);
typedef struct ISimpleDataConverterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * QueryInterface) (ISimpleDataConverter __RPC_FAR * This, REFIID riid, void __RPC_FAR * __RPC_FAR * ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * AddRef) (ISimpleDataConverter __RPC_FAR * This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * Release) (ISimpleDataConverter __RPC_FAR * This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * ConvertData) (ISimpleDataConverter __RPC_FAR * This, VARIANT varSrc, long vtDest, IUnknown __RPC_FAR * pUnknownElement, VARIANT __RPC_FAR * pvarDest);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * CanConvertData) (ISimpleDataConverter __RPC_FAR * This, long vt1, long vt2);
	END_INTERFACE
}  ISimpleDataConverterVtbl;
interface ISimpleDataConverter
{
	CONST_VTBL struct ISimpleDataConverterVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define ISimpleDataConverter_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISimpleDataConverter_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define ISimpleDataConverter_Release(This) (This)->lpVtbl -> Release(This)
#define ISimpleDataConverter_ConvertData(This,varSrc,vtDest,pUnknownElement,pvarDest) (This)->lpVtbl -> ConvertData(This,varSrc,vtDest,pUnknownElement,pvarDest)
#define ISimpleDataConverter_CanConvertData(This,vt1,vt2) (This)->lpVtbl -> CanConvertData(This,vt1,vt2)
#endif
HRESULT STDMETHODCALLTYPE ISimpleDataConverter_ConvertData_Proxy(ISimpleDataConverter __RPC_FAR *This, VARIANT varSrc, long vtDest, IUnknown __RPC_FAR *pUnknownElement, VARIANT __RPC_FAR *pvarDest);
void __RPC_STUB ISimpleDataConverter_ConvertData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISimpleDataConverter_CanConvertData_Proxy(ISimpleDataConverter __RPC_FAR *This, long vt1, long vt2);
void __RPC_STUB ISimpleDataConverter_CanConvertData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif /* I_SIMPDC_H_ */
