/*+@@file@@----------------------------------------------------------------*//*!
 \file		msdatsrc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 19:01:46 2016
 \date		Modified on Sun Aug 14 19:01:46 2016
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
#ifndef __msdatsrc_h__
#define __msdatsrc_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __DataSourceListener_FWD_DEFINED__
#define __DataSourceListener_FWD_DEFINED__
typedef interface DataSourceListener DataSourceListener;
#endif
#ifndef __DataSource_FWD_DEFINED__
#define __DataSource_FWD_DEFINED__
typedef interface DataSource DataSource;
#endif
#define DECLSPEC_UUID(x)
#define IDataSource		DataSource
#define IDataSourceListener	DataSourceListener
extern RPC_IF_HANDLE __MIDL_itf_msdatsrc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdatsrc_0000_0000_v0_0_s_ifspec;
#ifndef __MSDATASRC_LIBRARY_DEFINED__
#define __MSDATASRC_LIBRARY_DEFINED__
typedef DECLSPEC_UUID("7c0ffab1-cd84-11d0-949a-00a0c91110ed") BSTR DataMember;
extern const IID LIBID_MSDATASRC;
#ifndef __DataSourceListener_INTERFACE_DEFINED__
#define __DataSourceListener_INTERFACE_DEFINED__
extern const IID IID_DataSourceListener;
typedef struct DataSourceListenerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (DataSourceListener *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (DataSourceListener *This);
	ULONG(STDMETHODCALLTYPE *Release) (DataSourceListener *This);
	HRESULT(STDMETHODCALLTYPE *dataMemberChanged) (DataSourceListener *This, DataMember bstrDM);
	HRESULT(STDMETHODCALLTYPE *dataMemberAdded) (DataSourceListener *This, DataMember bstrDM);
	HRESULT(STDMETHODCALLTYPE *dataMemberRemoved) (DataSourceListener *This, DataMember bstrDM);
	END_INTERFACE
}  DataSourceListenerVtbl;
interface DataSourceListener
{
	CONST_VTBL struct DataSourceListenerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DataSourceListener_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DataSourceListener_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define DataSourceListener_Release(This) ( (This)->lpVtbl -> Release(This) )
#define DataSourceListener_dataMemberChanged(This,bstrDM) ( (This)->lpVtbl -> dataMemberChanged(This,bstrDM) )
#define DataSourceListener_dataMemberAdded(This,bstrDM) ( (This)->lpVtbl -> dataMemberAdded(This,bstrDM) )
#define DataSourceListener_dataMemberRemoved(This,bstrDM) ( (This)->lpVtbl -> dataMemberRemoved(This,bstrDM) )
#endif
#endif
#ifndef __DataSource_INTERFACE_DEFINED__
#define __DataSource_INTERFACE_DEFINED__
extern const IID IID_DataSource;
typedef struct DataSourceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (DataSource *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (DataSource *This);
	ULONG(STDMETHODCALLTYPE *Release) (DataSource *This);
	HRESULT(STDMETHODCALLTYPE *getDataMember) (DataSource *This, DataMember bstrDM, REFIID riid, IUnknown **ppunk);
	HRESULT(STDMETHODCALLTYPE *getDataMemberName) (DataSource *This, long lIndex, DataMember *pbstrDM);
	HRESULT(STDMETHODCALLTYPE *getDataMemberCount) (DataSource *This, long *plCount);
	HRESULT(STDMETHODCALLTYPE *addDataSourceListener) (DataSource *This, DataSourceListener *pDSL);
	HRESULT(STDMETHODCALLTYPE *removeDataSourceListener) (DataSource *This, DataSourceListener *pDSL);
	END_INTERFACE
}  DataSourceVtbl;
interface DataSource
{
	CONST_VTBL struct DataSourceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DataSource_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DataSource_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define DataSource_Release(This) ( (This)->lpVtbl -> Release(This) )
#define DataSource_getDataMember(This,bstrDM,riid,ppunk) ( (This)->lpVtbl -> getDataMember(This,bstrDM,riid,ppunk) )
#define DataSource_getDataMemberName(This,lIndex,pbstrDM) ( (This)->lpVtbl -> getDataMemberName(This,lIndex,pbstrDM) )
#define DataSource_getDataMemberCount(This,plCount) ( (This)->lpVtbl -> getDataMemberCount(This,plCount) )
#define DataSource_addDataSourceListener(This,pDSL) ( (This)->lpVtbl -> addDataSourceListener(This,pDSL) )
#define DataSource_removeDataSourceListener(This,pDSL) ( (This)->lpVtbl -> removeDataSourceListener(This,pDSL) )
#endif
#endif
#endif
#endif
