/*+@@file@@----------------------------------------------------------------*//*!
 \file		thumbcache.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 12:36:03 2016
 \date		Modified on Sat Sep 17 12:36:03 2016
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
#ifndef __thumbcache_h__
#define __thumbcache_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ISharedBitmap_FWD_DEFINED__
#define __ISharedBitmap_FWD_DEFINED__
typedef interface ISharedBitmap ISharedBitmap;
#endif
#ifndef __IThumbnailCache_FWD_DEFINED__
#define __IThumbnailCache_FWD_DEFINED__
typedef interface IThumbnailCache IThumbnailCache;
#endif
#ifndef __IThumbnailProvider_FWD_DEFINED__
#define __IThumbnailProvider_FWD_DEFINED__
typedef interface IThumbnailProvider IThumbnailProvider;
#endif
#ifndef __LocalThumbnailCache_FWD_DEFINED__
#define __LocalThumbnailCache_FWD_DEFINED__
typedef struct LocalThumbnailCache LocalThumbnailCache;
#endif
#ifndef __SharedBitmap_FWD_DEFINED__
#define __SharedBitmap_FWD_DEFINED__
typedef struct SharedBitmap SharedBitmap;
#endif
#include <oaidl.h>
#include <shtypes.h>
#include <shobjidl.h>
typedef enum WTS_FLAGS
{
	WTS_EXTRACT = 0,
	WTS_INCACHEONLY = 0x1,
	WTS_FASTEXTRACT = 0x2,
	WTS_FORCEEXTRACTION = 0x4,
	WTS_SLOWRECLAIM = 0x8,
	WTS_EXTRACTDONOTCACHE = 0x20,
	WTS_SCALETOREQUESTEDSIZE = 0x40,
	WTS_SKIPFASTEXTRACT = 0x80,
	WTS_EXTRACTINPROC = 0x100
} WTS_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(WTS_FLAGS)
typedef enum WTS_CACHEFLAGS
{
	WTS_DEFAULT = 0,
	WTS_LOWQUALITY = 0x1,
	WTS_CACHED = 0x2
} WTS_CACHEFLAGS;
DEFINE_ENUM_FLAG_OPERATORS(WTS_CACHEFLAGS)
typedef enum WTS_ALPHATYPE
{
	WTSAT_UNKNOWN = 0,
	WTSAT_RGB = 1,
	WTSAT_ARGB = 2
} WTS_ALPHATYPE;
typedef struct WTS_THUMBNAILID
{
	BYTE rgbKey[16];
} WTS_THUMBNAILID;
#define WTS_E_FAILEDEXTRACTION MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xB200)
extern RPC_IF_HANDLE __MIDL_itf_thumbcache_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_thumbcache_0000_0000_v0_0_s_ifspec;
#ifndef __ISharedBitmap_INTERFACE_DEFINED__
#define __ISharedBitmap_INTERFACE_DEFINED__
extern const IID IID_ISharedBitmap;
typedef struct ISharedBitmapVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISharedBitmap * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISharedBitmap * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISharedBitmap * This);
	HRESULT(STDMETHODCALLTYPE * GetSharedBitmap) (ISharedBitmap * This, HBITMAP * phbm);
	HRESULT(STDMETHODCALLTYPE * GetSize) (ISharedBitmap * This, SIZE * pSize);
	HRESULT(STDMETHODCALLTYPE * GetFormat) (ISharedBitmap * This, WTS_ALPHATYPE * pat);
	HRESULT(STDMETHODCALLTYPE * InitializeBitmap) (ISharedBitmap * This, HBITMAP hbm, WTS_ALPHATYPE wtsAT);
	HRESULT(STDMETHODCALLTYPE * Detach) (ISharedBitmap * This, HBITMAP * phbm);
	END_INTERFACE
}  ISharedBitmapVtbl;
interface ISharedBitmap
{
	CONST_VTBL struct ISharedBitmapVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISharedBitmap_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISharedBitmap_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISharedBitmap_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISharedBitmap_GetSharedBitmap(This,phbm) ( (This)->lpVtbl -> GetSharedBitmap(This,phbm) )
#define ISharedBitmap_GetSize(This,pSize) ( (This)->lpVtbl -> GetSize(This,pSize) )
#define ISharedBitmap_GetFormat(This,pat) ( (This)->lpVtbl -> GetFormat(This,pat) )
#define ISharedBitmap_InitializeBitmap(This,hbm,wtsAT) ( (This)->lpVtbl -> InitializeBitmap(This,hbm,wtsAT) )
#define ISharedBitmap_Detach(This,phbm) ( (This)->lpVtbl -> Detach(This,phbm) )
#endif
#endif
#ifndef __IThumbnailCache_INTERFACE_DEFINED__
#define __IThumbnailCache_INTERFACE_DEFINED__
extern const IID IID_IThumbnailCache;
typedef struct IThumbnailCacheVtbl
{
BEGIN_INTERFACE
HRESULT(STDMETHODCALLTYPE * QueryInterface) (IThumbnailCache * This, REFIID riid, void **ppvObject);
	                ULONG(STDMETHODCALLTYPE * AddRef) (IThumbnailCache * This);
	                ULONG(STDMETHODCALLTYPE * Release) (IThumbnailCache * This);
	                HRESULT(STDMETHODCALLTYPE * GetThumbnail) (IThumbnailCache * This, IShellItem * pShellItem, UINT cxyRequestedThumbSize, WTS_FLAGS flags, ISharedBitmap ** ppvThumb, WTS_CACHEFLAGS * pOutFlags, WTS_THUMBNAILID * pThumbnailID);
	                HRESULT(STDMETHODCALLTYPE * GetThumbnailByID) (IThumbnailCache * This, WTS_THUMBNAILID thumbnailID, UINT cxyRequestedThumbSize, ISharedBitmap ** ppvThumb, WTS_CACHEFLAGS * pOutFlags);
END_INTERFACE
}  IThumbnailCacheVtbl;
interface IThumbnailCache
{
	CONST_VTBL struct IThumbnailCacheVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IThumbnailCache_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IThumbnailCache_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IThumbnailCache_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IThumbnailCache_GetThumbnail(This,pShellItem,cxyRequestedThumbSize,flags,ppvThumb,pOutFlags,pThumbnailID) ( (This)->lpVtbl -> GetThumbnail(This,pShellItem,cxyRequestedThumbSize,flags,ppvThumb,pOutFlags,pThumbnailID) )
#define IThumbnailCache_GetThumbnailByID(This,thumbnailID,cxyRequestedThumbSize,ppvThumb,pOutFlags) ( (This)->lpVtbl -> GetThumbnailByID(This,thumbnailID,cxyRequestedThumbSize,ppvThumb,pOutFlags) )
#endif
HRESULT STDMETHODCALLTYPE IThumbnailCache_RemoteGetThumbnail_Proxy(IThumbnailCache * This, IShellItem * pShellItem, UINT cxyRequestedThumbSize, WTS_FLAGS flags, ISharedBitmap ** ppvThumb, WTS_CACHEFLAGS * pOutFlags, WTS_THUMBNAILID * pThumbnailID);
void __RPC_STUB IThumbnailCache_RemoteGetThumbnail_Stub(IRpcStubBuffer * This, IRpcChannelBuffer * _pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD * _pdwStubPhase);
HRESULT STDMETHODCALLTYPE IThumbnailCache_RemoteGetThumbnailByID_Proxy(IThumbnailCache * This, WTS_THUMBNAILID thumbnailID, UINT cxyRequestedThumbSize, ISharedBitmap ** ppvThumb, WTS_CACHEFLAGS * pOutFlags);
void __RPC_STUB IThumbnailCache_RemoteGetThumbnailByID_Stub(IRpcStubBuffer * This, IRpcChannelBuffer * _pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD * _pdwStubPhase);
#endif
#ifndef __IThumbnailProvider_INTERFACE_DEFINED__
#define __IThumbnailProvider_INTERFACE_DEFINED__
extern const IID IID_IThumbnailProvider;
typedef struct IThumbnailProviderVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (IThumbnailProvider *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IThumbnailProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IThumbnailProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetThumbnail) (IThumbnailProvider * This, UINT cx, HBITMAP * phbmp, WTS_ALPHATYPE * pdwAlpha);
	END_INTERFACE
}  IThumbnailProviderVtbl;
interface IThumbnailProvider
{
	CONST_VTBL struct IThumbnailProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IThumbnailProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IThumbnailProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IThumbnailProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IThumbnailProvider_GetThumbnail(This,cx,phbmp,pdwAlpha) ( (This)->lpVtbl -> GetThumbnail(This,cx,phbmp,pdwAlpha) )
#endif
#endif
#ifndef __ThumbCacheLib_LIBRARY_DEFINED__
#define __ThumbCacheLib_LIBRARY_DEFINED__
extern const IID LIBID_ThumbCacheLib;
extern const CLSID CLSID_LocalThumbnailCache;
extern const CLSID CLSID_SharedBitmap;
#endif
unsigned long __RPC_USER HBITMAP_UserSize(unsigned long *, unsigned long, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserMarshal(unsigned long *, unsigned char *, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserUnmarshal(unsigned long *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree(unsigned long *, HBITMAP *);
unsigned long __RPC_USER HBITMAP_UserSize64(unsigned long *, unsigned long, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserMarshal64(unsigned long *, unsigned char *, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserUnmarshal64(unsigned long *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree64(unsigned long *, HBITMAP *);
HRESULT STDMETHODCALLTYPE IThumbnailCache_GetThumbnail_Proxy(IThumbnailCache * This, IShellItem * pShellItem, UINT cxyRequestedThumbSize, WTS_FLAGS flags, ISharedBitmap ** ppvThumb, WTS_CACHEFLAGS * pOutFlags, WTS_THUMBNAILID * pThumbnailID);
HRESULT STDMETHODCALLTYPE IThumbnailCache_GetThumbnail_Stub(IThumbnailCache * This, IShellItem * pShellItem, UINT cxyRequestedThumbSize, WTS_FLAGS flags, ISharedBitmap ** ppvThumb, WTS_CACHEFLAGS * pOutFlags, WTS_THUMBNAILID * pThumbnailID);
HRESULT STDMETHODCALLTYPE IThumbnailCache_GetThumbnailByID_Proxy(IThumbnailCache * This, WTS_THUMBNAILID thumbnailID, UINT cxyRequestedThumbSize, ISharedBitmap ** ppvThumb, WTS_CACHEFLAGS * pOutFlags);
HRESULT STDMETHODCALLTYPE IThumbnailCache_GetThumbnailByID_Stub(IThumbnailCache * This, WTS_THUMBNAILID thumbnailID, UINT cxyRequestedThumbSize, ISharedBitmap ** ppvThumb, WTS_CACHEFLAGS * pOutFlags);
#endif
