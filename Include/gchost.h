/*+@@file@@----------------------------------------------------------------*//*!
 \file		gchost.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul 11 18:23:15 2016
 \date		Modified on Mon Jul 11 18:23:15 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif
#ifndef __gchost_h__
#define __gchost_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IGCHost_FWD_DEFINED__
#define __IGCHost_FWD_DEFINED__
typedef interface IGCHost IGCHost;
#endif
#include <unknwn.h>
 
typedef enum __MIDL___MIDL_itf_gchost_0000_0000_0001
{
	COR_GC_COUNTS	= 0x1,
	COR_GC_MEMORYUSAGE	= 0x2
} COR_GC_STAT_TYPES;
typedef enum __MIDL___MIDL_itf_gchost_0000_0000_0002
{
	COR_GC_THREAD_HAS_PROMOTED_BYTES	= 0x1
} COR_GC_THREAD_STATS_TYPES;
typedef struct _COR_GC_STATS
{
    ULONG Flags;
    SIZE_T ExplicitGCCount;
    SIZE_T GenCollectionsTaken[ 3 ];
    SIZE_T CommittedKBytes;
    SIZE_T ReservedKBytes;
    SIZE_T Gen0HeapSizeKBytes;
    SIZE_T Gen1HeapSizeKBytes;
    SIZE_T Gen2HeapSizeKBytes;
    SIZE_T LargeObjectHeapSizeKBytes;
    SIZE_T KBytesPromotedFromGen0;
    SIZE_T KBytesPromotedFromGen1;
} 	COR_GC_STATS;
typedef struct _COR_GC_THREAD_STATS
{
	ULONGLONG PerThreadAllocation;
	ULONG Flags;
} 	COR_GC_THREAD_STATS;
extern RPC_IF_HANDLE __MIDL_itf_gchost_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_gchost_0000_0000_v0_0_s_ifspec;
#ifndef __IGCHost_INTERFACE_DEFINED__
#define __IGCHost_INTERFACE_DEFINED__ 
extern const IID IID_IGCHost;

typedef struct IGCHostVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGCHost * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGCHost * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGCHost * This);
	HRESULT(STDMETHODCALLTYPE * SetGCStartupLimits) (IGCHost * This, DWORD SegmentSize, DWORD MaxGen0Size);
	HRESULT(STDMETHODCALLTYPE * Collect) (IGCHost * This, LONG Generation);
	HRESULT(STDMETHODCALLTYPE * GetStats) (IGCHost * This, COR_GC_STATS * pStats);
	HRESULT(STDMETHODCALLTYPE * GetThreadStats) (IGCHost * This, DWORD * pFiberCookie, COR_GC_THREAD_STATS * pStats);
	HRESULT(STDMETHODCALLTYPE * SetVirtualMemLimit) (IGCHost * This, SIZE_T sztMaxVirtualMemMB);
    END_INTERFACE
} IGCHostVtbl;
interface IGCHost
{
    CONST_VTBL struct IGCHostVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGCHost_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IGCHost_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IGCHost_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IGCHost_SetGCStartupLimits(This,SegmentSize,MaxGen0Size)    ( (This)->lpVtbl -> SetGCStartupLimits(This,SegmentSize,MaxGen0Size) ) 
#define IGCHost_Collect(This,Generation)    ( (This)->lpVtbl -> Collect(This,Generation) ) 
#define IGCHost_GetStats(This,pStats)    ( (This)->lpVtbl -> GetStats(This,pStats) ) 
#define IGCHost_GetThreadStats(This,pFiberCookie,pStats)    ( (This)->lpVtbl -> GetThreadStats(This,pFiberCookie,pStats) ) 
#define IGCHost_SetVirtualMemLimit(This,sztMaxVirtualMemMB)    ( (This)->lpVtbl -> SetVirtualMemLimit(This,sztMaxVirtualMemMB) ) 
#endif
#endif
#endif
