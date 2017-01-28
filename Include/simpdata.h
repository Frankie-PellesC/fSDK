/*+@@file@@----------------------------------------------------------------*//*!
 \file		simpdata.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 19:04:54 2016
 \date		Modified on Sun Aug 14 19:04:54 2016
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
#ifndef __simpdata_h__
#define __simpdata_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __OLEDBSimpleProviderListener_FWD_DEFINED__
#define __OLEDBSimpleProviderListener_FWD_DEFINED__
typedef interface OLEDBSimpleProviderListener OLEDBSimpleProviderListener;
#endif
#ifndef __OLEDBSimpleProvider_FWD_DEFINED__
#define __OLEDBSimpleProvider_FWD_DEFINED__
typedef interface OLEDBSimpleProvider OLEDBSimpleProvider;
#endif
#include <oaidl.h>
#pragma comment(lib,"uuid.lib")
#ifndef SIMPDATA_H
#define SIMPDATA_H
#ifdef _WIN64
typedef LONGLONG DBROWCOUNT;
typedef LONGLONG DB_LORDINAL;
#else
typedef LONG DBROWCOUNT;
typedef LONG DB_LORDINAL;
#endif
#define OSP_IndexLabel      (0)
#define OSP_IndexAll        (~0)
#define OSP_IndexUnknown    (~0)
extern RPC_IF_HANDLE __MIDL_itf_simpdata_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_simpdata_0000_0000_v0_0_s_ifspec;
#ifndef __MSDAOSP_LIBRARY_DEFINED__
#define __MSDAOSP_LIBRARY_DEFINED__
typedef enum OSPFORMAT
{
	OSPFORMAT_RAW = 0,
	OSPFORMAT_DEFAULT = 0,
	OSPFORMAT_FORMATTED = 1,
	OSPFORMAT_HTML = 2
} OSPFORMAT;
typedef enum OSPRW
{
	OSPRW_DEFAULT = 1,
	OSPRW_READONLY = 0,
	OSPRW_READWRITE = 1,
	OSPRW_MIXED = 2
} OSPRW;
typedef enum OSPFIND
{
	OSPFIND_DEFAULT = 0,
	OSPFIND_UP = 1,
	OSPFIND_CASESENSITIVE = 2,
	OSPFIND_UPCASESENSITIVE = 3
} OSPFIND;
typedef enum OSPCOMP
{
	OSPCOMP_EQ = 1,
	OSPCOMP_DEFAULT = 1,
	OSPCOMP_LT = 2,
	OSPCOMP_LE = 3,
	OSPCOMP_GE = 4,
	OSPCOMP_GT = 5,
	OSPCOMP_NE = 6
} OSPCOMP;
typedef enum OSPXFER
{
	OSPXFER_COMPLETE = 0,
	OSPXFER_ABORT = 1,
	OSPXFER_ERROR = 2
} OSPXFER;
typedef OLEDBSimpleProvider *LPOLEDBSimpleProvider;
extern const IID LIBID_MSDAOSP;
#ifndef __OLEDBSimpleProviderListener_INTERFACE_DEFINED__
#define __OLEDBSimpleProviderListener_INTERFACE_DEFINED__
extern const IID IID_OLEDBSimpleProviderListener;
typedef struct OLEDBSimpleProviderListenerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (OLEDBSimpleProviderListener * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (OLEDBSimpleProviderListener * This);
	ULONG(STDMETHODCALLTYPE * Release) (OLEDBSimpleProviderListener * This);
	HRESULT(STDMETHODCALLTYPE * aboutToChangeCell) (OLEDBSimpleProviderListener * This, DBROWCOUNT iRow, DB_LORDINAL iColumn);
	HRESULT(STDMETHODCALLTYPE * cellChanged) (OLEDBSimpleProviderListener * This, DBROWCOUNT iRow, DB_LORDINAL iColumn);
	HRESULT(STDMETHODCALLTYPE * aboutToDeleteRows) (OLEDBSimpleProviderListener * This, DBROWCOUNT iRow, DBROWCOUNT cRows);
	HRESULT(STDMETHODCALLTYPE * deletedRows) (OLEDBSimpleProviderListener * This, DBROWCOUNT iRow, DBROWCOUNT cRows);
	HRESULT(STDMETHODCALLTYPE * aboutToInsertRows) (OLEDBSimpleProviderListener * This, DBROWCOUNT iRow, DBROWCOUNT cRows);
	HRESULT(STDMETHODCALLTYPE * insertedRows) (OLEDBSimpleProviderListener * This, DBROWCOUNT iRow, DBROWCOUNT cRows);
	HRESULT(STDMETHODCALLTYPE * rowsAvailable) (OLEDBSimpleProviderListener * This, DBROWCOUNT iRow, DBROWCOUNT cRows);
	HRESULT(STDMETHODCALLTYPE * transferComplete) (OLEDBSimpleProviderListener * This, OSPXFER xfer);
	END_INTERFACE
}  OLEDBSimpleProviderListenerVtbl;
interface OLEDBSimpleProviderListener
{
	CONST_VTBL struct OLEDBSimpleProviderListenerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define OLEDBSimpleProviderListener_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define OLEDBSimpleProviderListener_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define OLEDBSimpleProviderListener_Release(This) ( (This)->lpVtbl -> Release(This) )
#define OLEDBSimpleProviderListener_aboutToChangeCell(This,iRow,iColumn) ( (This)->lpVtbl -> aboutToChangeCell(This,iRow,iColumn) )
#define OLEDBSimpleProviderListener_cellChanged(This,iRow,iColumn) ( (This)->lpVtbl -> cellChanged(This,iRow,iColumn) )
#define OLEDBSimpleProviderListener_aboutToDeleteRows(This,iRow,cRows) ( (This)->lpVtbl -> aboutToDeleteRows(This,iRow,cRows) )
#define OLEDBSimpleProviderListener_deletedRows(This,iRow,cRows) ( (This)->lpVtbl -> deletedRows(This,iRow,cRows) )
#define OLEDBSimpleProviderListener_aboutToInsertRows(This,iRow,cRows) ( (This)->lpVtbl -> aboutToInsertRows(This,iRow,cRows) )
#define OLEDBSimpleProviderListener_insertedRows(This,iRow,cRows) ( (This)->lpVtbl -> insertedRows(This,iRow,cRows) )
#define OLEDBSimpleProviderListener_rowsAvailable(This,iRow,cRows) ( (This)->lpVtbl -> rowsAvailable(This,iRow,cRows) )
#define OLEDBSimpleProviderListener_transferComplete(This,xfer) ( (This)->lpVtbl -> transferComplete(This,xfer) )
#endif
#endif
#ifndef __OLEDBSimpleProvider_INTERFACE_DEFINED__
#define __OLEDBSimpleProvider_INTERFACE_DEFINED__
extern const IID IID_OLEDBSimpleProvider;
typedef struct OLEDBSimpleProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (OLEDBSimpleProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (OLEDBSimpleProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (OLEDBSimpleProvider * This);
	HRESULT(STDMETHODCALLTYPE * getRowCount) (OLEDBSimpleProvider * This, DBROWCOUNT * pcRows);
	HRESULT(STDMETHODCALLTYPE * getColumnCount) (OLEDBSimpleProvider * This, DB_LORDINAL * pcColumns);
	HRESULT(STDMETHODCALLTYPE * getRWStatus) (OLEDBSimpleProvider * This, DBROWCOUNT iRow, DB_LORDINAL iColumn, OSPRW * prwStatus);
	HRESULT(STDMETHODCALLTYPE * getVariant) (OLEDBSimpleProvider * This, DBROWCOUNT iRow, DB_LORDINAL iColumn, OSPFORMAT format, VARIANT * pVar);
	HRESULT(STDMETHODCALLTYPE * setVariant) (OLEDBSimpleProvider * This, DBROWCOUNT iRow, DB_LORDINAL iColumn, OSPFORMAT format, VARIANT Var);
	HRESULT(STDMETHODCALLTYPE * getLocale) (OLEDBSimpleProvider * This, BSTR * pbstrLocale);
	HRESULT(STDMETHODCALLTYPE * deleteRows) (OLEDBSimpleProvider * This, DBROWCOUNT iRow, DBROWCOUNT cRows, DBROWCOUNT * pcRowsDeleted);
	HRESULT(STDMETHODCALLTYPE * insertRows) (OLEDBSimpleProvider * This, DBROWCOUNT iRow, DBROWCOUNT cRows, DBROWCOUNT * pcRowsInserted);
	HRESULT(STDMETHODCALLTYPE * find) (OLEDBSimpleProvider * This, DBROWCOUNT iRowStart, DB_LORDINAL iColumn, VARIANT val, OSPFIND findFlags, OSPCOMP compType, DBROWCOUNT * piRowFound);
	HRESULT(STDMETHODCALLTYPE * addOLEDBSimpleProviderListener) (OLEDBSimpleProvider * This, OLEDBSimpleProviderListener * pospIListener);
	HRESULT(STDMETHODCALLTYPE * removeOLEDBSimpleProviderListener) (OLEDBSimpleProvider * This, OLEDBSimpleProviderListener * pospIListener);
	HRESULT(STDMETHODCALLTYPE * isAsync) (OLEDBSimpleProvider * This, BOOL * pbAsynch);
	HRESULT(STDMETHODCALLTYPE * getEstimatedRows) (OLEDBSimpleProvider * This, DBROWCOUNT * piRows);
	HRESULT(STDMETHODCALLTYPE * stopTransfer) (OLEDBSimpleProvider * This);
	END_INTERFACE
}  OLEDBSimpleProviderVtbl;
interface OLEDBSimpleProvider
{
	CONST_VTBL struct OLEDBSimpleProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define OLEDBSimpleProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define OLEDBSimpleProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define OLEDBSimpleProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define OLEDBSimpleProvider_getRowCount(This,pcRows) ( (This)->lpVtbl -> getRowCount(This,pcRows) )
#define OLEDBSimpleProvider_getColumnCount(This,pcColumns) ( (This)->lpVtbl -> getColumnCount(This,pcColumns) )
#define OLEDBSimpleProvider_getRWStatus(This,iRow,iColumn,prwStatus) ( (This)->lpVtbl -> getRWStatus(This,iRow,iColumn,prwStatus) )
#define OLEDBSimpleProvider_getVariant(This,iRow,iColumn,format,pVar) ( (This)->lpVtbl -> getVariant(This,iRow,iColumn,format,pVar) )
#define OLEDBSimpleProvider_setVariant(This,iRow,iColumn,format,Var) ( (This)->lpVtbl -> setVariant(This,iRow,iColumn,format,Var) )
#define OLEDBSimpleProvider_getLocale(This,pbstrLocale) ( (This)->lpVtbl -> getLocale(This,pbstrLocale) )
#define OLEDBSimpleProvider_deleteRows(This,iRow,cRows,pcRowsDeleted) ( (This)->lpVtbl -> deleteRows(This,iRow,cRows,pcRowsDeleted) )
#define OLEDBSimpleProvider_insertRows(This,iRow,cRows,pcRowsInserted) ( (This)->lpVtbl -> insertRows(This,iRow,cRows,pcRowsInserted) )
#define OLEDBSimpleProvider_find(This,iRowStart,iColumn,val,findFlags,compType,piRowFound) ( (This)->lpVtbl -> find(This,iRowStart,iColumn,val,findFlags,compType,piRowFound) )
#define OLEDBSimpleProvider_addOLEDBSimpleProviderListener(This,pospIListener) ( (This)->lpVtbl -> addOLEDBSimpleProviderListener(This,pospIListener) )
#define OLEDBSimpleProvider_removeOLEDBSimpleProviderListener(This,pospIListener) ( (This)->lpVtbl -> removeOLEDBSimpleProviderListener(This,pospIListener) )
#define OLEDBSimpleProvider_isAsync(This,pbAsynch) ( (This)->lpVtbl -> isAsync(This,pbAsynch) )
#define OLEDBSimpleProvider_getEstimatedRows(This,piRows) ( (This)->lpVtbl -> getEstimatedRows(This,piRows) )
#define OLEDBSimpleProvider_stopTransfer(This) ( (This)->lpVtbl -> stopTransfer(This) )
#endif
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_simpdata_0001_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_simpdata_0001_0023_v0_0_s_ifspec;
#endif
