/*+@@file@@----------------------------------------------------------------*//*!
 \file		xpsprint.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 15:03:56 2016
 \date		Modified on Sun Sep  4 15:03:56 2016
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
#ifndef __xpsprint_h__
#define __xpsprint_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IXpsPrintJobStream_FWD_DEFINED__
#define __IXpsPrintJobStream_FWD_DEFINED__
typedef interface IXpsPrintJobStream IXpsPrintJobStream;
#endif
#ifndef __IXpsPrintJob_FWD_DEFINED__
#define __IXpsPrintJob_FWD_DEFINED__
typedef interface IXpsPrintJob IXpsPrintJob;
#endif
#include "oaidl.h"
#include "ocidl.h"
#if (NTDDI_VERSION >= NTDDI_WIN7)
extern RPC_IF_HANDLE __MIDL_itf_xpsprint_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsprint_0000_0000_v0_0_s_ifspec;
#ifndef __XpsPrint_LIBRARY_DEFINED__
#define __XpsPrint_LIBRARY_DEFINED__
typedef enum __MIDL___MIDL_itf_xpsprint_0000_0000_0001
{
	XPS_JOB_IN_PROGRESS = 0,
	XPS_JOB_COMPLETED = (XPS_JOB_IN_PROGRESS + 1),
	XPS_JOB_CANCELLED = (XPS_JOB_COMPLETED + 1),
	XPS_JOB_FAILED = (XPS_JOB_CANCELLED + 1)
} XPS_JOB_COMPLETION;
typedef struct __MIDL___MIDL_itf_xpsprint_0000_0000_0002
{
	UINT32 jobId;
	INT32 currentDocument;
	INT32 currentPage;
	INT32 currentPageTotal;
	XPS_JOB_COMPLETION completion;
	HRESULT jobStatus;
} XPS_JOB_STATUS;
extern const IID LIBID_XpsPrint;
#ifndef __IXpsPrintJobStream_INTERFACE_DEFINED__
#define __IXpsPrintJobStream_INTERFACE_DEFINED__
extern const IID IID_IXpsPrintJobStream;
typedef struct IXpsPrintJobStreamVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXpsPrintJobStream * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXpsPrintJobStream * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXpsPrintJobStream * This);
	HRESULT(STDMETHODCALLTYPE * Read) (IXpsPrintJobStream * This, void *pv, ULONG cb, ULONG * pcbRead);
	HRESULT(STDMETHODCALLTYPE * Write) (IXpsPrintJobStream * This, const void *pv, ULONG cb, ULONG * pcbWritten);
	HRESULT(STDMETHODCALLTYPE * Close) (IXpsPrintJobStream * This);
	END_INTERFACE
}  IXpsPrintJobStreamVtbl;
interface IXpsPrintJobStream
{
	CONST_VTBL struct IXpsPrintJobStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXpsPrintJobStream_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXpsPrintJobStream_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXpsPrintJobStream_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXpsPrintJobStream_Read(This,pv,cb,pcbRead) ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
#define IXpsPrintJobStream_Write(This,pv,cb,pcbWritten) ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
#define IXpsPrintJobStream_Close(This) ( (This)->lpVtbl -> Close(This) )
#endif
#endif
#ifndef __IXpsPrintJob_INTERFACE_DEFINED__
#define __IXpsPrintJob_INTERFACE_DEFINED__
extern const IID IID_IXpsPrintJob;
typedef struct IXpsPrintJobVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXpsPrintJob * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXpsPrintJob * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXpsPrintJob * This);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IXpsPrintJob * This);
	HRESULT(STDMETHODCALLTYPE * GetJobStatus) (IXpsPrintJob * This, XPS_JOB_STATUS * jobStatus);
	END_INTERFACE
}  IXpsPrintJobVtbl;
interface IXpsPrintJob
{
	CONST_VTBL struct IXpsPrintJobVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXpsPrintJob_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXpsPrintJob_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXpsPrintJob_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXpsPrintJob_Cancel(This) ( (This)->lpVtbl -> Cancel(This) )
#define IXpsPrintJob_GetJobStatus(This,jobStatus) ( (This)->lpVtbl -> GetJobStatus(This,jobStatus) )
#endif
#endif
#ifndef __XpsPrint_MODULE_DEFINED__
#define __XpsPrint_MODULE_DEFINED__ HRESULT __stdcall StartXpsPrintJob( LPCWSTR printerName, LPCWSTR jobName, LPCWSTR outputFileName, HANDLE progressEvent, HANDLE completionEvent, UINT8 *printablePagesOn, UINT32 printablePagesOnCount, IXpsPrintJob **xpsPrintJob, IXpsPrintJobStream **documentStream, IXpsPrintJobStream **printTicketStream);
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_xpsprint_0001_0066_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsprint_0001_0066_v0_0_s_ifspec;
#endif
