/*+@@file@@----------------------------------------------------------------*//*!
 \file		msdadc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 18:46:41 2016
 \date		Modified on Sun Aug 14 18:46:41 2016
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
#ifndef __msdadc_h__
#define __msdadc_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDataConvert_FWD_DEFINED__
#define __IDataConvert_FWD_DEFINED__
typedef interface IDataConvert IDataConvert;
#endif
#ifndef __IDCInfo_FWD_DEFINED__
#define __IDCInfo_FWD_DEFINED__
typedef interface IDCInfo IDCInfo;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <oledb.h>
#include <pshpack8.h>
#undef OLEDBDECLSPEC
#if _MSC_VER >= 1100
//#define OLEDBDECLSPEC __declspec(selectany)  //Not available yet in PellesC
#define OLEDBDECLSPEC
#else
#define OLEDBDECLSPEC
#endif
extern RPC_IF_HANDLE __MIDL_itf_msdadc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdadc_0000_0000_v0_0_s_ifspec;
#ifndef __IDataConvert_INTERFACE_DEFINED__
#define __IDataConvert_INTERFACE_DEFINED__
typedef DWORD DBDATACONVERT;
enum DBDATACONVERTENUM
{
	DBDATACONVERT_DEFAULT = 0,
	DBDATACONVERT_SETDATABEHAVIOR = 0x1,
	DBDATACONVERT_LENGTHFROMNTS = 0x2,
	DBDATACONVERT_DSTISFIXEDLENGTH = 0x4,
	DBDATACONVERT_DECIMALSCALE = 0x8
};
extern const IID IID_IDataConvert;
typedef struct IDataConvertVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDataConvert * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDataConvert * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDataConvert * This);
	HRESULT(STDMETHODCALLTYPE * DataConvert) (IDataConvert * This, DBTYPE wSrcType, DBTYPE wDstType, DBLENGTH cbSrcLength, DBLENGTH * pcbDstLength, void *pSrc, void *pDst, DBLENGTH cbDstMaxLength, DBSTATUS dbsSrcStatus, DBSTATUS * pdbsStatus, BYTE bPrecision, BYTE bScale, DBDATACONVERT dwFlags);
	HRESULT(STDMETHODCALLTYPE * CanConvert) (IDataConvert * This, DBTYPE wSrcType, DBTYPE wDstType);
	HRESULT(STDMETHODCALLTYPE * GetConversionSize) (IDataConvert * This, DBTYPE wSrcType, DBTYPE wDstType, DBLENGTH * pcbSrcLength, DBLENGTH * pcbDstLength, void *pSrc);
	END_INTERFACE
}  IDataConvertVtbl;
interface IDataConvert
{
	CONST_VTBL struct IDataConvertVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDataConvert_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDataConvert_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDataConvert_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDataConvert_DataConvert(This,wSrcType,wDstType,cbSrcLength,pcbDstLength,pSrc,pDst,cbDstMaxLength,dbsSrcStatus,pdbsStatus,bPrecision,bScale,dwFlags) ( (This)->lpVtbl -> DataConvert(This,wSrcType,wDstType,cbSrcLength,pcbDstLength,pSrc,pDst,cbDstMaxLength,dbsSrcStatus,pdbsStatus,bPrecision,bScale,dwFlags) )
#define IDataConvert_CanConvert(This,wSrcType,wDstType) ( (This)->lpVtbl -> CanConvert(This,wSrcType,wDstType) )
#define IDataConvert_GetConversionSize(This,wSrcType,wDstType,pcbSrcLength,pcbDstLength,pSrc) ( (This)->lpVtbl -> GetConversionSize(This,wSrcType,wDstType,pcbSrcLength,pcbDstLength,pSrc) )
#endif
#endif
#ifndef __IDCInfo_INTERFACE_DEFINED__
#define __IDCInfo_INTERFACE_DEFINED__
typedef DWORD DCINFOTYPE;
enum DCINFOTYPEENUM
{
	DCINFOTYPE_VERSION = 1
};
typedef struct tagDCINFO
{
	DCINFOTYPE eInfoType;
	VARIANT vData;
} DCINFO;
extern const IID IID_IDCInfo;
typedef struct IDCInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDCInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDCInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDCInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetInfo) (IDCInfo * This, ULONG cInfo, DCINFOTYPE rgeInfoType[], DCINFO ** prgInfo);
	HRESULT(STDMETHODCALLTYPE * SetInfo) (IDCInfo * This, ULONG cInfo, DCINFO rgInfo[]);
	END_INTERFACE
}  IDCInfoVtbl;
interface IDCInfo
{
	CONST_VTBL struct IDCInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDCInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDCInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDCInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDCInfo_GetInfo(This,cInfo,rgeInfoType,prgInfo) ( (This)->lpVtbl -> GetInfo(This,cInfo,rgeInfoType,prgInfo) )
#define IDCInfo_SetInfo(This,cInfo,rgInfo) ( (This)->lpVtbl -> SetInfo(This,cInfo,rgInfo) )
#endif
#endif
extern const GUID OLEDBDECLSPEC IID_IDataConvert = { 0x0c733a8dL, 0x2a1c, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const GUID OLEDBDECLSPEC IID_IDCInfo = { 0x0c733a9cL, 0x2a1c, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
#include <poppack.h>
extern RPC_IF_HANDLE __MIDL_itf_msdadc_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdadc_0000_0002_v0_0_s_ifspec;
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
