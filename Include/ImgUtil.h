/*+@@file@@----------------------------------------------------------------*//*!
 \file		ImgUtil.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 23:31:23 2016
 \date		Modified on Sat Jul 16 23:31:23 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __imgutil_h__
#define __imgutil_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ISniffStream_FWD_DEFINED__
#define __ISniffStream_FWD_DEFINED__
typedef interface ISniffStream ISniffStream;
#endif
#ifndef __IDithererImpl_FWD_DEFINED__
#define __IDithererImpl_FWD_DEFINED__
typedef interface IDithererImpl IDithererImpl;
#endif
#ifndef __CoDitherToRGB8_FWD_DEFINED__
#define __CoDitherToRGB8_FWD_DEFINED__
typedef struct CoDitherToRGB8 CoDitherToRGB8;
#endif
#ifndef __CoSniffStream_FWD_DEFINED__
#define __CoSniffStream_FWD_DEFINED__
typedef struct CoSniffStream CoSniffStream;
#endif
#ifndef __CoMapMIMEToCLSID_FWD_DEFINED__
#define __CoMapMIMEToCLSID_FWD_DEFINED__
typedef struct CoMapMIMEToCLSID CoMapMIMEToCLSID;
#endif
#include "ocmm.h"
#include <ddraw.h>
STDAPI CreateMIMEMap(IMapMIMEToCLSID **ppMap);
STDAPI DecodeImage(IStream *pStream, IMapMIMEToCLSID *pMap, IUnknown *pEventSink);
STDAPI SniffStream(IStream *pInStream, UINT *pnFormat, IStream **ppOutStream);
STDAPI GetMaxMIMEIDBytes(ULONG *pnMaxBytes);
STDAPI IdentifyMIMEType(const BYTE *pbBytes, ULONG nBytes, UINT *pnFormat);
STDAPI ComputeInvCMAP(const RGBQUAD *pRGBColors, ULONG nColors, BYTE *pInvTable, ULONG cbTable);
STDAPI DitherTo8(BYTE *pDestBits, LONG nDestPitch, BYTE *pSrcBits, LONG nSrcPitch, REFGUID bfidSrc, RGBQUAD *prgbDestColors, RGBQUAD *prgbSrcColors, BYTE *pbDestInvMap, LONG x, LONG y, LONG cx, LONG cy, LONG lDestTrans, LONG lSrcTrans);
STDAPI CreateDDrawSurfaceOnDIB(HBITMAP hbmDib, IDirectDrawSurface **ppSurface);
STDAPI DecodeImageEx(IStream *pStream, IMapMIMEToCLSID *pMap, IUnknown *pEventSink, LPCWSTR pszMIMETypeParam);
extern RPC_IF_HANDLE __MIDL_itf_imgutil_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imgutil_0000_0000_v0_0_s_ifspec;
#ifndef __ISniffStream_INTERFACE_DEFINED__
#define __ISniffStream_INTERFACE_DEFINED__
extern const IID IID_ISniffStream;
typedef struct ISniffStreamVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISniffStream *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISniffStream *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISniffStream *This);
	HRESULT(STDMETHODCALLTYPE *Init) (ISniffStream *This, IStream *pStream);
	HRESULT(STDMETHODCALLTYPE *Peek) (ISniffStream *This, void *pBuffer, ULONG nBytes, ULONG *pnBytesRead);
	END_INTERFACE
}  ISniffStreamVtbl;
interface ISniffStream
{
	CONST_VTBL struct ISniffStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISniffStream_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISniffStream_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISniffStream_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISniffStream_Init(This,pStream)( (This)->lpVtbl -> Init(This,pStream) )
#define ISniffStream_Peek(This,pBuffer,nBytes,pnBytesRead)( (This)->lpVtbl -> Peek(This,pBuffer,nBytes,pnBytesRead) )
#endif
#endif
#ifndef __IDithererImpl_INTERFACE_DEFINED__
#define __IDithererImpl_INTERFACE_DEFINED__
extern const IID IID_IDithererImpl;
typedef struct IDithererImplVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDithererImpl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDithererImpl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDithererImpl *This);
	HRESULT(STDMETHODCALLTYPE *SetDestColorTable) (IDithererImpl *This, ULONG nColors, const RGBQUAD *prgbColors);
	HRESULT(STDMETHODCALLTYPE *SetEventSink) (IDithererImpl *This, IImageDecodeEventSink *pEventSink);
	END_INTERFACE
}  IDithererImplVtbl;
interface IDithererImpl
{
	CONST_VTBL struct IDithererImplVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDithererImpl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDithererImpl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDithererImpl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDithererImpl_SetDestColorTable(This,nColors,prgbColors)( (This)->lpVtbl -> SetDestColorTable(This,nColors,prgbColors) )
#define IDithererImpl_SetEventSink(This,pEventSink)( (This)->lpVtbl -> SetEventSink(This,pEventSink) )
#endif
#endif
#ifndef __ImgUtilLib_LIBRARY_DEFINED__
#define __ImgUtilLib_LIBRARY_DEFINED__
extern const IID LIBID_ImgUtilLib;
extern const CLSID CLSID_CoDitherToRGB8;
extern const CLSID CLSID_CoSniffStream;
extern const CLSID CLSID_CoMapMIMEToCLSID;
#endif
#endif
