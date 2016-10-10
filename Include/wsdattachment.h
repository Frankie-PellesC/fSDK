/*+@@file@@----------------------------------------------------------------*//*!
 \file		wsdattachment.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 17:33:22 2016
 \date		Modified on Mon Sep 19 17:33:22 2016
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
#ifndef __wsdattachment_h__
#define __wsdattachment_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWSDAttachment_FWD_DEFINED__
#define __IWSDAttachment_FWD_DEFINED__
typedef interface IWSDAttachment IWSDAttachment;
#endif
#ifndef __IWSDOutboundAttachment_FWD_DEFINED__
#define __IWSDOutboundAttachment_FWD_DEFINED__
typedef interface IWSDOutboundAttachment IWSDOutboundAttachment;
#endif
#ifndef __IWSDInboundAttachment_FWD_DEFINED__
#define __IWSDInboundAttachment_FWD_DEFINED__
typedef interface IWSDInboundAttachment IWSDInboundAttachment;
#endif
#include "objidl.h"
HRESULT WINAPI WSDCreateOutboundAttachment(IWSDOutboundAttachment **ppAttachment);
extern RPC_IF_HANDLE __MIDL_itf_wsdattachment_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdattachment_0000_0000_v0_0_s_ifspec;
#ifndef __IWSDAttachment_INTERFACE_DEFINED__
#define __IWSDAttachment_INTERFACE_DEFINED__
extern const IID IID_IWSDAttachment;
typedef struct IWSDAttachmentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDAttachment * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDAttachment * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDAttachment * This);
	END_INTERFACE
}  IWSDAttachmentVtbl;
interface IWSDAttachment
{
	CONST_VTBL struct IWSDAttachmentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDAttachment_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDAttachment_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDAttachment_Release(This) ( (This)->lpVtbl -> Release(This) )
#endif
#endif
#ifndef __IWSDOutboundAttachment_INTERFACE_DEFINED__
#define __IWSDOutboundAttachment_INTERFACE_DEFINED__
extern const IID IID_IWSDOutboundAttachment;
typedef struct IWSDOutboundAttachmentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDOutboundAttachment * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDOutboundAttachment * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDOutboundAttachment * This);
	HRESULT(STDMETHODCALLTYPE * Write) (IWSDOutboundAttachment * This, const BYTE * pBuffer, DWORD dwBytesToWrite, LPDWORD pdwNumberOfBytesWritten);
	HRESULT(STDMETHODCALLTYPE * Close) (IWSDOutboundAttachment * This);
	HRESULT(STDMETHODCALLTYPE * Abort) (IWSDOutboundAttachment * This);
	END_INTERFACE
}  IWSDOutboundAttachmentVtbl;
interface IWSDOutboundAttachment
{
	CONST_VTBL struct IWSDOutboundAttachmentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDOutboundAttachment_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDOutboundAttachment_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDOutboundAttachment_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDOutboundAttachment_Write(This,pBuffer,dwBytesToWrite,pdwNumberOfBytesWritten) ( (This)->lpVtbl -> Write(This,pBuffer,dwBytesToWrite,pdwNumberOfBytesWritten) )
#define IWSDOutboundAttachment_Close(This) ( (This)->lpVtbl -> Close(This) )
#define IWSDOutboundAttachment_Abort(This) ( (This)->lpVtbl -> Abort(This) )
#endif
#endif
#ifndef __IWSDInboundAttachment_INTERFACE_DEFINED__
#define __IWSDInboundAttachment_INTERFACE_DEFINED__
extern const IID IID_IWSDInboundAttachment;
typedef struct IWSDInboundAttachmentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWSDInboundAttachment * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWSDInboundAttachment * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWSDInboundAttachment * This);
	HRESULT(STDMETHODCALLTYPE * Read) (IWSDInboundAttachment * This, BYTE * pBuffer, DWORD dwBytesToRead, LPDWORD pdwNumberOfBytesRead);
	HRESULT(STDMETHODCALLTYPE * Close) (IWSDInboundAttachment * This);
	END_INTERFACE
}  IWSDInboundAttachmentVtbl;
interface IWSDInboundAttachment
{
	CONST_VTBL struct IWSDInboundAttachmentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWSDInboundAttachment_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWSDInboundAttachment_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWSDInboundAttachment_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWSDInboundAttachment_Read(This,pBuffer,dwBytesToRead,pdwNumberOfBytesRead) ( (This)->lpVtbl -> Read(This,pBuffer,dwBytesToRead,pdwNumberOfBytesRead) )
#define IWSDInboundAttachment_Close(This) ( (This)->lpVtbl -> Close(This) )
#endif
#endif
#endif
