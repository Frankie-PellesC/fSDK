/*+@@file@@----------------------------------------------------------------*//*!
 \file		txlogpub.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 13:22:15 2016
 \date		Modified on Sat Sep 17 13:22:15 2016
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
#ifndef __txlogpub_h__
#define __txlogpub_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ILog_FWD_DEFINED__
#define __ILog_FWD_DEFINED__
typedef interface ILog ILog;
#endif
#ifndef __IFileBasedLogInit_FWD_DEFINED__
#define __IFileBasedLogInit_FWD_DEFINED__
typedef interface IFileBasedLogInit IFileBasedLogInit;
#endif
#include "unknwn.h"
typedef LARGE_INTEGER LSN;
#define MAXLSN (0x7FFFFFFFFFFFFFFF)
typedef enum RECORD_READING_POLICY
{
	RECORD_READING_POLICY_FORWARD = 1,
	RECORD_READING_POLICY_BACKWARD = 2,
	RECORD_READING_POLICY_RANDOM = 3
} RECORD_READING_POLICY;
extern RPC_IF_HANDLE __MIDL_itf_txlogpub_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txlogpub_0000_0000_v0_0_s_ifspec;
#ifndef __ILog_INTERFACE_DEFINED__
#define __ILog_INTERFACE_DEFINED__
extern const IID IID_ILog;
typedef struct ILogVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILog * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILog * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILog * This);
	HRESULT(STDMETHODCALLTYPE * Force) (ILog * This, LSN lsnMinToForce);
	HRESULT(STDMETHODCALLTYPE * AppendRecord) (ILog * This, BLOB * rgBlob, ULONG cBlob, BOOL fForceNow, LSN * plsn);
	HRESULT(STDMETHODCALLTYPE * ReadRecord) (ILog * This, LSN lsnToRead, LSN * plsnPrev, LSN * plsnNext, BYTE ** ppbData, ULONG * pcbData);
	HRESULT(STDMETHODCALLTYPE * ReadRecordPrefix) (ILog * This, LSN lsnToRead, LSN * plsnPrev, LSN * plsnNext, BYTE * pbData, ULONG * pcbData, ULONG * pcbRecord);
	HRESULT(STDMETHODCALLTYPE * GetLogLimits) (ILog * This, LSN * plsnFirst, LSN * plsnLast);
	HRESULT(STDMETHODCALLTYPE * TruncatePrefix) (ILog * This, LSN lsnFirstToKeep);
	HRESULT(STDMETHODCALLTYPE * SetAccessPolicyHint) (ILog * This, RECORD_READING_POLICY policy);
	END_INTERFACE
}  ILogVtbl;
interface ILog
{
	CONST_VTBL struct ILogVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILog_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILog_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ILog_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ILog_Force(This,lsnMinToForce) ( (This)->lpVtbl -> Force(This,lsnMinToForce) )
#define ILog_AppendRecord(This,rgBlob,cBlob,fForceNow,plsn) ( (This)->lpVtbl -> AppendRecord(This,rgBlob,cBlob,fForceNow,plsn) )
#define ILog_ReadRecord(This,lsnToRead,plsnPrev,plsnNext,ppbData,pcbData) ( (This)->lpVtbl -> ReadRecord(This,lsnToRead,plsnPrev,plsnNext,ppbData,pcbData) )
#define ILog_ReadRecordPrefix(This,lsnToRead,plsnPrev,plsnNext,pbData,pcbData,pcbRecord) ( (This)->lpVtbl -> ReadRecordPrefix(This,lsnToRead,plsnPrev,plsnNext,pbData,pcbData,pcbRecord) )
#define ILog_GetLogLimits(This,plsnFirst,plsnLast) ( (This)->lpVtbl -> GetLogLimits(This,plsnFirst,plsnLast) )
#define ILog_TruncatePrefix(This,lsnFirstToKeep) ( (This)->lpVtbl -> TruncatePrefix(This,lsnFirstToKeep) )
#define ILog_SetAccessPolicyHint(This,policy) ( (This)->lpVtbl -> SetAccessPolicyHint(This,policy) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_txlogpub_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txlogpub_0000_0001_v0_0_s_ifspec;
#ifndef __IFileBasedLogInit_INTERFACE_DEFINED__
#define __IFileBasedLogInit_INTERFACE_DEFINED__
extern const IID IID_IFileBasedLogInit;
typedef struct IFileBasedLogInitVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFileBasedLogInit * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFileBasedLogInit * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFileBasedLogInit * This);
	HRESULT(STDMETHODCALLTYPE * InitNew) (IFileBasedLogInit * This, LPCWSTR filename, ULONG cbCapacityHint);
	END_INTERFACE
}  IFileBasedLogInitVtbl;
interface IFileBasedLogInit
{
	CONST_VTBL struct IFileBasedLogInitVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileBasedLogInit_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileBasedLogInit_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFileBasedLogInit_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFileBasedLogInit_InitNew(This,filename,cbCapacityHint) ( (This)->lpVtbl -> InitNew(This,filename,cbCapacityHint) )
#endif
#endif
extern const CLSID CLSID_SimpleFileBasedLog;
extern RPC_IF_HANDLE __MIDL_itf_txlogpub_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txlogpub_0000_0002_v0_0_s_ifspec;
#endif
