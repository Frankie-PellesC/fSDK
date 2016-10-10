/*+@@file@@----------------------------------------------------------------*//*!
 \file		msdasql_interfaces.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 19:16:59 2016
 \date		Modified on Sun Aug 14 19:16:59 2016
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
#ifndef __msdasql_interfaces_h__
#define __msdasql_interfaces_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IRowsetChangeExtInfo_FWD_DEFINED__
#define __IRowsetChangeExtInfo_FWD_DEFINED__
typedef interface IRowsetChangeExtInfo IRowsetChangeExtInfo;
#endif
#ifndef __ISQLRequestDiagFields_FWD_DEFINED__
#define __ISQLRequestDiagFields_FWD_DEFINED__
typedef interface ISQLRequestDiagFields ISQLRequestDiagFields;
#endif
#ifndef __ISQLGetDiagField_FWD_DEFINED__
#define __ISQLGetDiagField_FWD_DEFINED__
typedef interface ISQLGetDiagField ISQLGetDiagField;
#endif
#include "unknwn.h"
#include "oaidl.h"
#include "oledb.h"
enum KAGREQDIAGFLAGSENUM
{
	KAGREQDIAGFLAGS_HEADER = 0x1,
	KAGREQDIAGFLAGS_RECORD = 0x2
};
extern RPC_IF_HANDLE __MIDL_itf_msdasql_interfaces_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdasql_interfaces_0000_0000_v0_0_s_ifspec;
#ifndef __IRowsetChangeExtInfo_INTERFACE_DEFINED__
#define __IRowsetChangeExtInfo_INTERFACE_DEFINED__
extern const IID IID_IRowsetChangeExtInfo;
typedef struct IRowsetChangeExtInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRowsetChangeExtInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRowsetChangeExtInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRowsetChangeExtInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetOriginalRow) (IRowsetChangeExtInfo * This, HCHAPTER hReserved, HROW hRow, HROW * phRowOriginal);
	HRESULT(STDMETHODCALLTYPE * GetPendingColumns) (IRowsetChangeExtInfo * This, HCHAPTER hReserved, HROW hRow, ULONG cColumnOrdinals, const ULONG rgiOrdinals[], DBPENDINGSTATUS rgColumnStatus[]);
	END_INTERFACE
}  IRowsetChangeExtInfoVtbl;
interface IRowsetChangeExtInfo
{
	CONST_VTBL struct IRowsetChangeExtInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRowsetChangeExtInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRowsetChangeExtInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRowsetChangeExtInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRowsetChangeExtInfo_GetOriginalRow(This,hReserved,hRow,phRowOriginal) ( (This)->lpVtbl -> GetOriginalRow(This,hReserved,hRow,phRowOriginal) )
#define IRowsetChangeExtInfo_GetPendingColumns(This,hReserved,hRow,cColumnOrdinals,rgiOrdinals,rgColumnStatus) ( (This)->lpVtbl -> GetPendingColumns(This,hReserved,hRow,cColumnOrdinals,rgiOrdinals,rgColumnStatus) )
#endif
#endif
typedef struct tagKAGREQDIAG
{
	ULONG ulDiagFlags;
	VARTYPE vt;
	SHORT sDiagField;
} KAGREQDIAG;
typedef struct tagKAGGETDIAG
{
	ULONG ulSize;
	VARIANTARG vDiagInfo;
	SHORT sDiagField;
} KAGGETDIAG;
extern RPC_IF_HANDLE __MIDL_itf_msdasql_interfaces_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdasql_interfaces_0000_0001_v0_0_s_ifspec;
#ifndef __ISQLRequestDiagFields_INTERFACE_DEFINED__
#define __ISQLRequestDiagFields_INTERFACE_DEFINED__
extern const IID IID_ISQLRequestDiagFields;
typedef struct ISQLRequestDiagFieldsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISQLRequestDiagFields * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISQLRequestDiagFields * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISQLRequestDiagFields * This);
	HRESULT(STDMETHODCALLTYPE * RequestDiagFields) (ISQLRequestDiagFields * This, ULONG cDiagFields, KAGREQDIAG rgDiagFields[]);
	END_INTERFACE
}  ISQLRequestDiagFieldsVtbl;
interface ISQLRequestDiagFields
{
	CONST_VTBL struct ISQLRequestDiagFieldsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISQLRequestDiagFields_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISQLRequestDiagFields_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISQLRequestDiagFields_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISQLRequestDiagFields_RequestDiagFields(This,cDiagFields,rgDiagFields) ( (This)->lpVtbl -> RequestDiagFields(This,cDiagFields,rgDiagFields) )
#endif
#endif
#ifndef __ISQLGetDiagField_INTERFACE_DEFINED__
#define __ISQLGetDiagField_INTERFACE_DEFINED__
extern const IID IID_ISQLGetDiagField;
typedef struct ISQLGetDiagFieldVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISQLGetDiagField * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISQLGetDiagField * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISQLGetDiagField * This);
	HRESULT(STDMETHODCALLTYPE * GetDiagField) (ISQLGetDiagField * This, KAGGETDIAG * pDiagInfo);
	END_INTERFACE
}  ISQLGetDiagFieldVtbl;
interface ISQLGetDiagField
{
	CONST_VTBL struct ISQLGetDiagFieldVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISQLGetDiagField_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISQLGetDiagField_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISQLGetDiagField_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISQLGetDiagField_GetDiagField(This,pDiagInfo) ( (This)->lpVtbl -> GetDiagField(This,pDiagInfo) )
#endif
#endif
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
