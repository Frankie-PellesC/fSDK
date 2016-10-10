/*+@@file@@----------------------------------------------------------------*//*!
 \file		msdaosp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 18:59:30 2016
 \date		Modified on Sun Aug 14 18:59:30 2016
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
#ifndef __msdaosp_h__
#define __msdaosp_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __DataSourceObject_FWD_DEFINED__
#define __DataSourceObject_FWD_DEFINED__
typedef interface DataSourceObject DataSourceObject;
#endif
#include "oaidl.h"
#include "msdatsrc.h"
#include "simpdata.h"
#ifdef DBINITCONSTANTS
extern const GUID CLSID_MSDAOSP = { 0xdfc8bdc0, 0xe378, 0x11d0, {0x9b, 0x30, 0x0, 0x80, 0xc7, 0xe9, 0xfe, 0x95}};
extern const GUID DBPROPSET_PWROWSET = { 0xe6e478db, 0xf226, 0x11d0, {0x94, 0xee, 0x0, 0xc0, 0x4f, 0xb6, 0x6a, 0x50}};
#else
extern const GUID CLSID_MSDAOSP;
extern const GUID DBPROPSET_PWROWSET;
#endif
#define PWPROP_OSPVALUE	2
extern RPC_IF_HANDLE __MIDL_itf_msdaosp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdaosp_0000_0000_v0_0_s_ifspec;
#ifndef __MSDAOSPT_LIBRARY_DEFINED__
#define __MSDAOSPT_LIBRARY_DEFINED__
extern const IID LIBID_MSDAOSPT;
#ifndef __DataSourceObject_DISPINTERFACE_DEFINED__
#define __DataSourceObject_DISPINTERFACE_DEFINED__
extern const IID DIID_DataSourceObject;
typedef struct DataSourceObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (DataSourceObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (DataSourceObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (DataSourceObject * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (DataSourceObject * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (DataSourceObject * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (DataSourceObject * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (DataSourceObject * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  DataSourceObjectVtbl;
interface DataSourceObject
{
	CONST_VTBL struct DataSourceObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DataSourceObject_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DataSourceObject_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define DataSourceObject_Release(This) ( (This)->lpVtbl -> Release(This) )
#define DataSourceObject_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DataSourceObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DataSourceObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DataSourceObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#endif
#endif
