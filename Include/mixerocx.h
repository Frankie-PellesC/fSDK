/*+@@file@@----------------------------------------------------------------*//*!
 \file		mixerocx.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug  7 21:55:36 2016
 \date		Modified on Sun Aug  7 21:55:36 2016
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
#ifndef __mixerocx_h__
#define __mixerocx_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IMixerOCXNotify_FWD_DEFINED__
#define __IMixerOCXNotify_FWD_DEFINED__
typedef interface IMixerOCXNotify IMixerOCXNotify;
#endif
#ifndef __IMixerOCX_FWD_DEFINED__
#define __IMixerOCX_FWD_DEFINED__
typedef interface IMixerOCX IMixerOCX;
#endif
#include <unknwn.h>
extern RPC_IF_HANDLE __MIDL_itf_mixerocx_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mixerocx_0000_0000_v0_0_s_ifspec;
#ifndef __IMixerOCXNotify_INTERFACE_DEFINED__
#define __IMixerOCXNotify_INTERFACE_DEFINED__
extern const IID IID_IMixerOCXNotify;
typedef struct IMixerOCXNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMixerOCXNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMixerOCXNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMixerOCXNotify * This);
	HRESULT(STDMETHODCALLTYPE * OnInvalidateRect) (IMixerOCXNotify * This, LPCRECT lpcRect);
	HRESULT(STDMETHODCALLTYPE * OnStatusChange) (IMixerOCXNotify * This, ULONG ulStatusFlags);
	HRESULT(STDMETHODCALLTYPE * OnDataChange) (IMixerOCXNotify * This, ULONG ulDataFlags);
	END_INTERFACE
}  IMixerOCXNotifyVtbl;
interface IMixerOCXNotify
{
	CONST_VTBL struct IMixerOCXNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMixerOCXNotify_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMixerOCXNotify_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMixerOCXNotify_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMixerOCXNotify_OnInvalidateRect(This,lpcRect) ( (This)->lpVtbl -> OnInvalidateRect(This,lpcRect) )
#define IMixerOCXNotify_OnStatusChange(This,ulStatusFlags) ( (This)->lpVtbl -> OnStatusChange(This,ulStatusFlags) )
#define IMixerOCXNotify_OnDataChange(This,ulDataFlags) ( (This)->lpVtbl -> OnDataChange(This,ulDataFlags) )
#endif
#endif
#ifndef __IMixerOCX_INTERFACE_DEFINED__
#define __IMixerOCX_INTERFACE_DEFINED__
extern const IID IID_IMixerOCX;
typedef struct IMixerOCXVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMixerOCX * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMixerOCX * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMixerOCX * This);
	HRESULT(STDMETHODCALLTYPE * OnDisplayChange) (IMixerOCX * This, ULONG ulBitsPerPixel, ULONG ulScreenWidth, ULONG ulScreenHeight);
	HRESULT(STDMETHODCALLTYPE * GetAspectRatio) (IMixerOCX * This, LPDWORD pdwPictAspectRatioX, LPDWORD pdwPictAspectRatioY);
	HRESULT(STDMETHODCALLTYPE * GetVideoSize) (IMixerOCX * This, LPDWORD pdwVideoWidth, LPDWORD pdwVideoHeight);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IMixerOCX * This, LPDWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * OnDraw) (IMixerOCX * This, HDC hdcDraw, LPCRECT prcDraw);
	HRESULT(STDMETHODCALLTYPE * SetDrawRegion) (IMixerOCX * This, LPPOINT lpptTopLeftSC, LPCRECT prcDrawCC, LPCRECT lprcClip);
	HRESULT(STDMETHODCALLTYPE * Advise) (IMixerOCX * This, IMixerOCXNotify * pmdns);
	HRESULT(STDMETHODCALLTYPE * UnAdvise) (IMixerOCX * This);
	END_INTERFACE
}  IMixerOCXVtbl;
interface IMixerOCX
{
	CONST_VTBL struct IMixerOCXVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMixerOCX_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMixerOCX_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMixerOCX_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMixerOCX_OnDisplayChange(This,ulBitsPerPixel,ulScreenWidth,ulScreenHeight) ( (This)->lpVtbl -> OnDisplayChange(This,ulBitsPerPixel,ulScreenWidth,ulScreenHeight) )
#define IMixerOCX_GetAspectRatio(This,pdwPictAspectRatioX,pdwPictAspectRatioY) ( (This)->lpVtbl -> GetAspectRatio(This,pdwPictAspectRatioX,pdwPictAspectRatioY) )
#define IMixerOCX_GetVideoSize(This,pdwVideoWidth,pdwVideoHeight) ( (This)->lpVtbl -> GetVideoSize(This,pdwVideoWidth,pdwVideoHeight) )
#define IMixerOCX_GetStatus(This,pdwStatus) ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
#define IMixerOCX_OnDraw(This,hdcDraw,prcDraw) ( (This)->lpVtbl -> OnDraw(This,hdcDraw,prcDraw) )
#define IMixerOCX_SetDrawRegion(This,lpptTopLeftSC,prcDrawCC,lprcClip) ( (This)->lpVtbl -> SetDrawRegion(This,lpptTopLeftSC,prcDrawCC,lprcClip) )
#define IMixerOCX_Advise(This,pmdns) ( (This)->lpVtbl -> Advise(This,pmdns) )
#define IMixerOCX_UnAdvise(This) ( (This)->lpVtbl -> UnAdvise(This) )
#endif
#endif
unsigned long __RPC_USER HDC_UserSize(unsigned long *, unsigned long, HDC *);
unsigned char *__RPC_USER HDC_UserMarshal(unsigned long *, unsigned char *, HDC *);
unsigned char *__RPC_USER HDC_UserUnmarshal(unsigned long *, unsigned char *, HDC *);
void __RPC_USER HDC_UserFree(unsigned long *, HDC *);
unsigned long __RPC_USER HDC_UserSize64(unsigned long *, unsigned long, HDC *);
unsigned char *__RPC_USER HDC_UserMarshal64(unsigned long *, unsigned char *, HDC *);
unsigned char *__RPC_USER HDC_UserUnmarshal64(unsigned long *, unsigned char *, HDC *);
void __RPC_USER HDC_UserFree64(unsigned long *, HDC *);
#endif
