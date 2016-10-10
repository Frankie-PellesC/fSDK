/*+@@file@@----------------------------------------------------------------*//*!
 \file		certreqd.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 02:12:47 2016
 \date		Modified on Sun Jul  3 02:12:47 2016
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
#ifndef __certreqd_h__
#define __certreqd_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICertRequestD_FWD_DEFINED__
#define __ICertRequestD_FWD_DEFINED__
typedef interface ICertRequestD ICertRequestD;
#endif
#ifndef __ICertRequestD2_FWD_DEFINED__
#define __ICertRequestD2_FWD_DEFINED__
typedef interface ICertRequestD2 ICertRequestD2;
#endif
#include "certbase.h"
#include "oaidl.h"
#ifndef __ICertRequestD_INTERFACE_DEFINED__
#define __ICertRequestD_INTERFACE_DEFINED__
extern const IID IID_ICertRequestD;
typedef struct ICertRequestDVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertRequestD * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertRequestD * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertRequestD * This);
	HRESULT(STDMETHODCALLTYPE * Request) (ICertRequestD * This, DWORD dwFlags, const wchar_t * pwszAuthority, DWORD * pdwRequestId, DWORD * pdwDisposition, const wchar_t * pwszAttributes, const CERTTRANSBLOB * pctbRequest, CERTTRANSBLOB * pctbCertChain, CERTTRANSBLOB * pctbEncodedCert, CERTTRANSBLOB * pctbDispositionMessage);
	HRESULT(STDMETHODCALLTYPE * GetCACert) (ICertRequestD * This, DWORD fchain, const wchar_t * pwszAuthority, CERTTRANSBLOB * pctbOut);
	HRESULT(STDMETHODCALLTYPE * Ping) (ICertRequestD * This, const wchar_t * pwszAuthority);
	END_INTERFACE
}  ICertRequestDVtbl;
interface ICertRequestD
{
	CONST_VTBL struct ICertRequestDVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertRequestD_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertRequestD_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertRequestD_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertRequestD_Request(This,dwFlags,pwszAuthority,pdwRequestId,pdwDisposition,pwszAttributes,pctbRequest,pctbCertChain,pctbEncodedCert,pctbDispositionMessage)( (This)->lpVtbl -> Request(This,dwFlags,pwszAuthority,pdwRequestId,pdwDisposition,pwszAttributes,pctbRequest,pctbCertChain,pctbEncodedCert,pctbDispositionMessage) )
#define ICertRequestD_GetCACert(This,fchain,pwszAuthority,pctbOut)( (This)->lpVtbl -> GetCACert(This,fchain,pwszAuthority,pctbOut) )
#define ICertRequestD_Ping(This,pwszAuthority)( (This)->lpVtbl -> Ping(This,pwszAuthority) )
#endif
#endif
#ifndef __ICertRequestD2_INTERFACE_DEFINED__
#define __ICertRequestD2_INTERFACE_DEFINED__
extern const IID IID_ICertRequestD2;
typedef struct ICertRequestD2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertRequestD2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertRequestD2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertRequestD2 * This);
	HRESULT(STDMETHODCALLTYPE * Request) (ICertRequestD2 * This, DWORD dwFlags, const wchar_t * pwszAuthority, DWORD * pdwRequestId, DWORD * pdwDisposition, const wchar_t * pwszAttributes, const CERTTRANSBLOB * pctbRequest, CERTTRANSBLOB * pctbCertChain, CERTTRANSBLOB * pctbEncodedCert, CERTTRANSBLOB * pctbDispositionMessage);
	HRESULT(STDMETHODCALLTYPE * GetCACert) (ICertRequestD2 * This, DWORD fchain, const wchar_t * pwszAuthority, CERTTRANSBLOB * pctbOut);
	HRESULT(STDMETHODCALLTYPE * Ping) (ICertRequestD2 * This, const wchar_t * pwszAuthority);
	HRESULT(STDMETHODCALLTYPE * Request2) (ICertRequestD2 * This, const wchar_t * pwszAuthority, DWORD dwFlags, const wchar_t * pwszSerialNumber, DWORD * pdwRequestId, DWORD * pdwDisposition, const wchar_t * pwszAttributes, const CERTTRANSBLOB * pctbRequest, CERTTRANSBLOB * pctbFullResponse, CERTTRANSBLOB * pctbEncodedCert, CERTTRANSBLOB * pctbDispositionMessage);
	HRESULT(STDMETHODCALLTYPE * GetCAProperty) (ICertRequestD2 * This, const wchar_t * pwszAuthority, LONG PropId, LONG PropIndex, LONG PropType, CERTTRANSBLOB * pctbPropertyValue);
	HRESULT(STDMETHODCALLTYPE * GetCAPropertyInfo) (ICertRequestD2 * This, const wchar_t * pwszAuthority, LONG * pcProperty, CERTTRANSBLOB * pctbPropInfo);
	HRESULT(STDMETHODCALLTYPE * Ping2) (ICertRequestD2 * This, const wchar_t * pwszAuthority);
	END_INTERFACE
}  ICertRequestD2Vtbl;
interface ICertRequestD2
{
	CONST_VTBL struct ICertRequestD2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertRequestD2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertRequestD2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertRequestD2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertRequestD2_Request(This,dwFlags,pwszAuthority,pdwRequestId,pdwDisposition,pwszAttributes,pctbRequest,pctbCertChain,pctbEncodedCert,pctbDispositionMessage)( (This)->lpVtbl -> Request(This,dwFlags,pwszAuthority,pdwRequestId,pdwDisposition,pwszAttributes,pctbRequest,pctbCertChain,pctbEncodedCert,pctbDispositionMessage) )
#define ICertRequestD2_GetCACert(This,fchain,pwszAuthority,pctbOut)( (This)->lpVtbl -> GetCACert(This,fchain,pwszAuthority,pctbOut) )
#define ICertRequestD2_Ping(This,pwszAuthority)( (This)->lpVtbl -> Ping(This,pwszAuthority) )
#define ICertRequestD2_Request2(This,pwszAuthority,dwFlags,pwszSerialNumber,pdwRequestId,pdwDisposition,pwszAttributes,pctbRequest,pctbFullResponse,pctbEncodedCert,pctbDispositionMessage)( (This)->lpVtbl -> Request2(This,pwszAuthority,dwFlags,pwszSerialNumber,pdwRequestId,pdwDisposition,pwszAttributes,pctbRequest,pctbFullResponse,pctbEncodedCert,pctbDispositionMessage) )
#define ICertRequestD2_GetCAProperty(This,pwszAuthority,PropId,PropIndex,PropType,pctbPropertyValue)( (This)->lpVtbl -> GetCAProperty(This,pwszAuthority,PropId,PropIndex,PropType,pctbPropertyValue) )
#define ICertRequestD2_GetCAPropertyInfo(This,pwszAuthority,pcProperty,pctbPropInfo)( (This)->lpVtbl -> GetCAPropertyInfo(This,pwszAuthority,pcProperty,pctbPropInfo) )
#define ICertRequestD2_Ping2(This,pwszAuthority)( (This)->lpVtbl -> Ping2(This,pwszAuthority) )
#endif
#endif
#endif
