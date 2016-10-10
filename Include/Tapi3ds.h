/*+@@file@@----------------------------------------------------------------*//*!
 \file		Tapi3ds.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 12:09:41 2016
 \date		Modified on Sat Sep 17 12:09:41 2016
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
#ifndef __tapi3ds_h__
#define __tapi3ds_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITAMMediaFormat_FWD_DEFINED__
#define __ITAMMediaFormat_FWD_DEFINED__
typedef interface ITAMMediaFormat ITAMMediaFormat;
#endif
#ifndef __ITAllocatorProperties_FWD_DEFINED__
#define __ITAllocatorProperties_FWD_DEFINED__
typedef interface ITAllocatorProperties ITAllocatorProperties;
#endif
#include "oaidl.h"
#include "strmif.h"
extern RPC_IF_HANDLE __MIDL_itf_tapi3ds_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3ds_0000_0000_v0_0_s_ifspec;
#ifndef __ITAMMediaFormat_INTERFACE_DEFINED__
#define __ITAMMediaFormat_INTERFACE_DEFINED__
extern const IID IID_ITAMMediaFormat;
typedef struct ITAMMediaFormatVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITAMMediaFormat * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITAMMediaFormat * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITAMMediaFormat * This);
	HRESULT(STDMETHODCALLTYPE * get_MediaFormat) (ITAMMediaFormat * This, AM_MEDIA_TYPE ** ppmt);
	HRESULT(STDMETHODCALLTYPE * put_MediaFormat) (ITAMMediaFormat * This, const AM_MEDIA_TYPE * pmt);
	END_INTERFACE
}  ITAMMediaFormatVtbl;
interface ITAMMediaFormat
{
	CONST_VTBL struct ITAMMediaFormatVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITAMMediaFormat_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITAMMediaFormat_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITAMMediaFormat_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITAMMediaFormat_get_MediaFormat(This,ppmt) ( (This)->lpVtbl -> get_MediaFormat(This,ppmt) )
#define ITAMMediaFormat_put_MediaFormat(This,pmt) ( (This)->lpVtbl -> put_MediaFormat(This,pmt) )
#endif
#endif
#ifndef __ITAllocatorProperties_INTERFACE_DEFINED__
#define __ITAllocatorProperties_INTERFACE_DEFINED__
extern const IID IID_ITAllocatorProperties;
typedef struct ITAllocatorPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITAllocatorProperties * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITAllocatorProperties * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITAllocatorProperties * This);
	HRESULT(STDMETHODCALLTYPE * SetAllocatorProperties) (ITAllocatorProperties * This, ALLOCATOR_PROPERTIES * pAllocProperties);
	HRESULT(STDMETHODCALLTYPE * GetAllocatorProperties) (ITAllocatorProperties * This, ALLOCATOR_PROPERTIES * pAllocProperties);
	HRESULT(STDMETHODCALLTYPE * SetAllocateBuffers) (ITAllocatorProperties * This, BOOL bAllocBuffers);
	HRESULT(STDMETHODCALLTYPE * GetAllocateBuffers) (ITAllocatorProperties * This, BOOL * pbAllocBuffers);
	HRESULT(STDMETHODCALLTYPE * SetBufferSize) (ITAllocatorProperties * This, DWORD BufferSize);
	HRESULT(STDMETHODCALLTYPE * GetBufferSize) (ITAllocatorProperties * This, DWORD * pBufferSize);
	END_INTERFACE
}  ITAllocatorPropertiesVtbl;
interface ITAllocatorProperties
{
	CONST_VTBL struct ITAllocatorPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITAllocatorProperties_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITAllocatorProperties_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITAllocatorProperties_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITAllocatorProperties_SetAllocatorProperties(This,pAllocProperties) ( (This)->lpVtbl -> SetAllocatorProperties(This,pAllocProperties) )
#define ITAllocatorProperties_GetAllocatorProperties(This,pAllocProperties) ( (This)->lpVtbl -> GetAllocatorProperties(This,pAllocProperties) )
#define ITAllocatorProperties_SetAllocateBuffers(This,bAllocBuffers) ( (This)->lpVtbl -> SetAllocateBuffers(This,bAllocBuffers) )
#define ITAllocatorProperties_GetAllocateBuffers(This,pbAllocBuffers) ( (This)->lpVtbl -> GetAllocateBuffers(This,pbAllocBuffers) )
#define ITAllocatorProperties_SetBufferSize(This,BufferSize) ( (This)->lpVtbl -> SetBufferSize(This,BufferSize) )
#define ITAllocatorProperties_GetBufferSize(This,pBufferSize) ( (This)->lpVtbl -> GetBufferSize(This,pBufferSize) )
#endif
#endif
#endif
