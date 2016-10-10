/*+@@file@@----------------------------------------------------------------*//*!
 \file		shimgdata.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 23:35:48 2016
 \date		Modified on Fri Sep 16 23:35:48 2016
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
#ifndef __shimgdata_h__
#define __shimgdata_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IShellImageDataFactory_FWD_DEFINED__
#define __IShellImageDataFactory_FWD_DEFINED__
typedef interface IShellImageDataFactory IShellImageDataFactory;
#endif
#ifndef __IShellImageData_FWD_DEFINED__
#define __IShellImageData_FWD_DEFINED__
typedef interface IShellImageData IShellImageData;
#endif
#ifndef __IShellImageDataAbort_FWD_DEFINED__
#define __IShellImageDataAbort_FWD_DEFINED__
typedef interface IShellImageDataAbort IShellImageDataAbort;
#endif
#ifndef __ShellImageDataFactory_FWD_DEFINED__
#define __ShellImageDataFactory_FWD_DEFINED__
typedef struct ShellImageDataFactory ShellImageDataFactory;
#endif
#include "oleidl.h"
#include "propidl.h"
#if !defined(_GDIPLUSPIXELFORMATS_H)
typedef DWORD PixelFormat;
#endif
#if !defined(_GDIPLUSENUMS_H)
typedef DWORD InterpolationMode;
#endif
#if !defined(_GDIPLUSHEADERS_H)
typedef BYTE EncoderParameters;
typedef BYTE Image;
#endif
#define  SHIMGKEY_QUALITY    L"Compression"
#define  SHIMGKEY_RAWFORMAT  L"RawDataFormat"
#define  SHIMGDEC_DEFAULT            0x00000000
#define  SHIMGDEC_THUMBNAIL          0x00000001
#define  SHIMGDEC_LOADFULL           0x00000002
#define  E_NOTVALIDFORANIMATEDIMAGE  MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x01)
extern RPC_IF_HANDLE __MIDL_itf_shimgdata_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shimgdata_0000_0000_v0_0_s_ifspec;
#ifndef __IShellImageDataFactory_INTERFACE_DEFINED__
#define __IShellImageDataFactory_INTERFACE_DEFINED__
extern const IID IID_IShellImageDataFactory;
typedef struct IShellImageDataFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellImageDataFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellImageDataFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellImageDataFactory * This);
	HRESULT(STDMETHODCALLTYPE * CreateIShellImageData) (IShellImageDataFactory * This, IShellImageData ** ppshimg);
	HRESULT(STDMETHODCALLTYPE * CreateImageFromFile) (IShellImageDataFactory * This, LPCWSTR pszPath, IShellImageData ** ppshimg);
	HRESULT(STDMETHODCALLTYPE * CreateImageFromStream) (IShellImageDataFactory * This, IStream * pStream, IShellImageData ** ppshimg);
	HRESULT(STDMETHODCALLTYPE * GetDataFormatFromPath) (IShellImageDataFactory * This, LPCWSTR pszPath, GUID * pDataFormat);
	END_INTERFACE
}  IShellImageDataFactoryVtbl;
interface IShellImageDataFactory
{
	CONST_VTBL struct IShellImageDataFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellImageDataFactory_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellImageDataFactory_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IShellImageDataFactory_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IShellImageDataFactory_CreateIShellImageData(This,ppshimg) ( (This)->lpVtbl -> CreateIShellImageData(This,ppshimg) )
#define IShellImageDataFactory_CreateImageFromFile(This,pszPath,ppshimg) ( (This)->lpVtbl -> CreateImageFromFile(This,pszPath,ppshimg) )
#define IShellImageDataFactory_CreateImageFromStream(This,pStream,ppshimg) ( (This)->lpVtbl -> CreateImageFromStream(This,pStream,ppshimg) )
#define IShellImageDataFactory_GetDataFormatFromPath(This,pszPath,pDataFormat) ( (This)->lpVtbl -> GetDataFormatFromPath(This,pszPath,pDataFormat) )
#endif
#endif
#ifndef __IShellImageData_INTERFACE_DEFINED__
#define __IShellImageData_INTERFACE_DEFINED__
extern const IID IID_IShellImageData;
typedef struct IShellImageDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellImageData * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellImageData * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellImageData * This);
	HRESULT(STDMETHODCALLTYPE * Decode) (IShellImageData * This, DWORD dwFlags, ULONG cxDesired, ULONG cyDesired);
	HRESULT(STDMETHODCALLTYPE * Draw) (IShellImageData * This, HDC hdc, LPRECT prcDest, LPRECT prcSrc);
	HRESULT(STDMETHODCALLTYPE * NextFrame) (IShellImageData * This);
	HRESULT(STDMETHODCALLTYPE * NextPage) (IShellImageData * This);
	HRESULT(STDMETHODCALLTYPE * PrevPage) (IShellImageData * This);
	HRESULT(STDMETHODCALLTYPE * IsTransparent) (IShellImageData * This);
	HRESULT(STDMETHODCALLTYPE * IsAnimated) (IShellImageData * This);
	HRESULT(STDMETHODCALLTYPE * IsVector) (IShellImageData * This);
	HRESULT(STDMETHODCALLTYPE * IsMultipage) (IShellImageData * This);
	HRESULT(STDMETHODCALLTYPE * IsEditable) (IShellImageData * This);
	HRESULT(STDMETHODCALLTYPE * IsPrintable) (IShellImageData * This);
	HRESULT(STDMETHODCALLTYPE * IsDecoded) (IShellImageData * This);
	HRESULT(STDMETHODCALLTYPE * GetCurrentPage) (IShellImageData * This, ULONG * pnPage);
	HRESULT(STDMETHODCALLTYPE * GetPageCount) (IShellImageData * This, ULONG * pcPages);
	HRESULT(STDMETHODCALLTYPE * SelectPage) (IShellImageData * This, ULONG iPage);
	HRESULT(STDMETHODCALLTYPE * GetSize) (IShellImageData * This, SIZE * pSize);
	HRESULT(STDMETHODCALLTYPE * GetRawDataFormat) (IShellImageData * This, GUID * pDataFormat);
	HRESULT(STDMETHODCALLTYPE * GetPixelFormat) (IShellImageData * This, PixelFormat * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetDelay) (IShellImageData * This, DWORD * pdwDelay);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IShellImageData * This, DWORD dwMode, IPropertySetStorage ** ppPropSet);
	HRESULT(STDMETHODCALLTYPE * Rotate) (IShellImageData * This, DWORD dwAngle);
	HRESULT(STDMETHODCALLTYPE * Scale) (IShellImageData * This, ULONG cx, ULONG cy, InterpolationMode hints);
	HRESULT(STDMETHODCALLTYPE * DiscardEdit) (IShellImageData * This);
	HRESULT(STDMETHODCALLTYPE * SetEncoderParams) (IShellImageData * This, IPropertyBag * pbagEnc);
	HRESULT(STDMETHODCALLTYPE * DisplayName) (IShellImageData * This, LPWSTR wszName, UINT cch);
	HRESULT(STDMETHODCALLTYPE * GetResolution) (IShellImageData * This, ULONG * puResolutionX, ULONG * puResolutionY);
	HRESULT(STDMETHODCALLTYPE * GetEncoderParams) (IShellImageData * This, GUID * pguidFmt, EncoderParameters ** ppEncParams);
	HRESULT(STDMETHODCALLTYPE * RegisterAbort) (IShellImageData * This, IShellImageDataAbort * pAbort, IShellImageDataAbort ** ppAbortPrev);
	HRESULT(STDMETHODCALLTYPE * CloneFrame) (IShellImageData * This, Image ** ppImg);
	HRESULT(STDMETHODCALLTYPE * ReplaceFrame) (IShellImageData * This, Image * pImg);
	END_INTERFACE
}  IShellImageDataVtbl;
interface IShellImageData
{
	CONST_VTBL struct IShellImageDataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellImageData_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellImageData_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IShellImageData_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IShellImageData_Decode(This,dwFlags,cxDesired,cyDesired) ( (This)->lpVtbl -> Decode(This,dwFlags,cxDesired,cyDesired) )
#define IShellImageData_Draw(This,hdc,prcDest,prcSrc) ( (This)->lpVtbl -> Draw(This,hdc,prcDest,prcSrc) )
#define IShellImageData_NextFrame(This) ( (This)->lpVtbl -> NextFrame(This) )
#define IShellImageData_NextPage(This) ( (This)->lpVtbl -> NextPage(This) )
#define IShellImageData_PrevPage(This) ( (This)->lpVtbl -> PrevPage(This) )
#define IShellImageData_IsTransparent(This) ( (This)->lpVtbl -> IsTransparent(This) )
#define IShellImageData_IsAnimated(This) ( (This)->lpVtbl -> IsAnimated(This) )
#define IShellImageData_IsVector(This) ( (This)->lpVtbl -> IsVector(This) )
#define IShellImageData_IsMultipage(This) ( (This)->lpVtbl -> IsMultipage(This) )
#define IShellImageData_IsEditable(This) ( (This)->lpVtbl -> IsEditable(This) )
#define IShellImageData_IsPrintable(This) ( (This)->lpVtbl -> IsPrintable(This) )
#define IShellImageData_IsDecoded(This) ( (This)->lpVtbl -> IsDecoded(This) )
#define IShellImageData_GetCurrentPage(This,pnPage) ( (This)->lpVtbl -> GetCurrentPage(This,pnPage) )
#define IShellImageData_GetPageCount(This,pcPages) ( (This)->lpVtbl -> GetPageCount(This,pcPages) )
#define IShellImageData_SelectPage(This,iPage) ( (This)->lpVtbl -> SelectPage(This,iPage) )
#define IShellImageData_GetSize(This,pSize) ( (This)->lpVtbl -> GetSize(This,pSize) )
#define IShellImageData_GetRawDataFormat(This,pDataFormat) ( (This)->lpVtbl -> GetRawDataFormat(This,pDataFormat) )
#define IShellImageData_GetPixelFormat(This,pFormat) ( (This)->lpVtbl -> GetPixelFormat(This,pFormat) )
#define IShellImageData_GetDelay(This,pdwDelay) ( (This)->lpVtbl -> GetDelay(This,pdwDelay) )
#define IShellImageData_GetProperties(This,dwMode,ppPropSet) ( (This)->lpVtbl -> GetProperties(This,dwMode,ppPropSet) )
#define IShellImageData_Rotate(This,dwAngle) ( (This)->lpVtbl -> Rotate(This,dwAngle) )
#define IShellImageData_Scale(This,cx,cy,hints) ( (This)->lpVtbl -> Scale(This,cx,cy,hints) )
#define IShellImageData_DiscardEdit(This) ( (This)->lpVtbl -> DiscardEdit(This) )
#define IShellImageData_SetEncoderParams(This,pbagEnc) ( (This)->lpVtbl -> SetEncoderParams(This,pbagEnc) )
#define IShellImageData_DisplayName(This,wszName,cch) ( (This)->lpVtbl -> DisplayName(This,wszName,cch) )
#define IShellImageData_GetResolution(This,puResolutionX,puResolutionY) ( (This)->lpVtbl -> GetResolution(This,puResolutionX,puResolutionY) )
#define IShellImageData_GetEncoderParams(This,pguidFmt,ppEncParams) ( (This)->lpVtbl -> GetEncoderParams(This,pguidFmt,ppEncParams) )
#define IShellImageData_RegisterAbort(This,pAbort,ppAbortPrev) ( (This)->lpVtbl -> RegisterAbort(This,pAbort,ppAbortPrev) )
#define IShellImageData_CloneFrame(This,ppImg) ( (This)->lpVtbl -> CloneFrame(This,ppImg) )
#define IShellImageData_ReplaceFrame(This,pImg) ( (This)->lpVtbl -> ReplaceFrame(This,pImg) )
#endif
#endif
#ifndef __IShellImageDataAbort_INTERFACE_DEFINED__
#define __IShellImageDataAbort_INTERFACE_DEFINED__
extern const IID IID_IShellImageDataAbort;
typedef struct IShellImageDataAbortVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellImageDataAbort * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellImageDataAbort * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellImageDataAbort * This);
	HRESULT(STDMETHODCALLTYPE * QueryAbort) (IShellImageDataAbort * This);
	END_INTERFACE
}  IShellImageDataAbortVtbl;
interface IShellImageDataAbort
{
	CONST_VTBL struct IShellImageDataAbortVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellImageDataAbort_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellImageDataAbort_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IShellImageDataAbort_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IShellImageDataAbort_QueryAbort(This) ( (This)->lpVtbl -> QueryAbort(This) )
#endif
#endif
#ifndef __ShellImageData_LIBRARY_DEFINED__
#define __ShellImageData_LIBRARY_DEFINED__
extern const IID LIBID_ShellImageData;
extern const CLSID CLSID_ShellImageDataFactory;
#endif
#endif
