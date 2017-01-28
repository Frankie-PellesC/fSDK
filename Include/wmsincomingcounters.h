/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmsincomingcounters.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 16:15:18 2016
 \date		Modified on Mon Sep 19 16:15:18 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
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
#ifndef __wmsincomingcounters_h__
#define __wmsincomingcounters_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSIncomingCounters_FWD_DEFINED__
#define __IWMSIncomingCounters_FWD_DEFINED__
typedef interface IWMSIncomingCounters IWMSIncomingCounters;
#endif
#include <oaidl.h>
#ifndef _IWMSIncomingCounters
#define _IWMSIncomingCounters
typedef unsigned __int64 QWORD;
EXTERN_GUID(IID_IWMSIncomingCounters, 0xeded53ed, 0x43b7, 0x45ce, 0x9c, 0xbb, 0xa8, 0x72, 0x92, 0x3f, 0x6a, 0xae);
extern RPC_IF_HANDLE __MIDL_itf_wmsincomingcounters_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsincomingcounters_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSIncomingCounters_INTERFACE_DEFINED__
#define __IWMSIncomingCounters_INTERFACE_DEFINED__
extern const IID IID_IWMSIncomingCounters;
typedef struct IWMSIncomingCountersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSIncomingCounters * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSIncomingCounters * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSIncomingCounters * This);
	HRESULT(STDMETHODCALLTYPE * AllocateRequestedBandwidth) (IWMSIncomingCounters * This, DWORD dwAllocatedBandwidth);
	HRESULT(STDMETHODCALLTYPE * AddIncomingData) (IWMSIncomingCounters * This, DWORD dwDataLen);
	HRESULT(STDMETHODCALLTYPE * ClearIncomingStats) (IWMSIncomingCounters * This);
	END_INTERFACE
}  IWMSIncomingCountersVtbl;
interface IWMSIncomingCounters
{
	CONST_VTBL struct IWMSIncomingCountersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSIncomingCounters_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSIncomingCounters_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSIncomingCounters_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSIncomingCounters_AllocateRequestedBandwidth(This,dwAllocatedBandwidth) ( (This)->lpVtbl -> AllocateRequestedBandwidth(This,dwAllocatedBandwidth) )
#define IWMSIncomingCounters_AddIncomingData(This,dwDataLen) ( (This)->lpVtbl -> AddIncomingData(This,dwDataLen) )
#define IWMSIncomingCounters_ClearIncomingStats(This) ( (This)->lpVtbl -> ClearIncomingStats(This) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_wmsincomingcounters_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsincomingcounters_0000_0001_v0_0_s_ifspec;
#endif
