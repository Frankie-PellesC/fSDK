/*+@@file@@----------------------------------------------------------------*//*!
 \file		WiaVideo.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 02:09:43 2016
 \date		Modified on Mon Sep 19 02:09:43 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __wiavideo_h__
#define __wiavideo_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWiaVideo_FWD_DEFINED__
#define __IWiaVideo_FWD_DEFINED__
typedef interface IWiaVideo IWiaVideo;
#endif
#ifndef __WiaVideo_FWD_DEFINED__
#define __WiaVideo_FWD_DEFINED__
typedef struct WiaVideo WiaVideo;
#endif
#include <oaidl.h>
#include <ocidl.h>
typedef enum __MIDL___MIDL_itf_wiavideo_0000_0000_0001
{
	WIAVIDEO_NO_VIDEO = 1,
	WIAVIDEO_CREATING_VIDEO = 2,
	WIAVIDEO_VIDEO_CREATED = 3,
	WIAVIDEO_VIDEO_PLAYING = 4,
	WIAVIDEO_VIDEO_PAUSED = 5,
	WIAVIDEO_DESTROYING_VIDEO = 6
} WIAVIDEO_STATE;
extern RPC_IF_HANDLE __MIDL_itf_wiavideo_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wiavideo_0000_0000_v0_0_s_ifspec;
#ifndef __IWiaVideo_INTERFACE_DEFINED__
#define __IWiaVideo_INTERFACE_DEFINED__
extern const IID IID_IWiaVideo;
typedef struct IWiaVideoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWiaVideo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWiaVideo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWiaVideo * This);
	HRESULT(STDMETHODCALLTYPE * get_PreviewVisible) (IWiaVideo * This, BOOL * pbPreviewVisible);
	HRESULT(STDMETHODCALLTYPE * put_PreviewVisible) (IWiaVideo * This, BOOL bPreviewVisible);
	HRESULT(STDMETHODCALLTYPE * get_ImagesDirectory) (IWiaVideo * This, BSTR * pbstrImageDirectory);
	HRESULT(STDMETHODCALLTYPE * put_ImagesDirectory) (IWiaVideo * This, BSTR bstrImageDirectory);
	HRESULT(STDMETHODCALLTYPE * CreateVideoByWiaDevID) (IWiaVideo * This, BSTR bstrWiaDeviceID, HWND hwndParent, BOOL bStretchToFitParent, BOOL bAutoBeginPlayback);
	HRESULT(STDMETHODCALLTYPE * CreateVideoByDevNum) (IWiaVideo * This, UINT uiDeviceNumber, HWND hwndParent, BOOL bStretchToFitParent, BOOL bAutoBeginPlayback);
	HRESULT(STDMETHODCALLTYPE * CreateVideoByName) (IWiaVideo * This, BSTR bstrFriendlyName, HWND hwndParent, BOOL bStretchToFitParent, BOOL bAutoBeginPlayback);
	HRESULT(STDMETHODCALLTYPE * DestroyVideo) (IWiaVideo * This);
	HRESULT(STDMETHODCALLTYPE * Play) (IWiaVideo * This);
	HRESULT(STDMETHODCALLTYPE * Pause) (IWiaVideo * This);
	HRESULT(STDMETHODCALLTYPE * TakePicture) (IWiaVideo * This, BSTR * pbstrNewImageFilename);
	HRESULT(STDMETHODCALLTYPE * ResizeVideo) (IWiaVideo * This, BOOL bStretchToFitParent);
	HRESULT(STDMETHODCALLTYPE * GetCurrentState) (IWiaVideo * This, WIAVIDEO_STATE * pState);
	END_INTERFACE
}  IWiaVideoVtbl;
interface IWiaVideo
{
	CONST_VTBL struct IWiaVideoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWiaVideo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWiaVideo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWiaVideo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWiaVideo_get_PreviewVisible(This,pbPreviewVisible) ( (This)->lpVtbl -> get_PreviewVisible(This,pbPreviewVisible) )
#define IWiaVideo_put_PreviewVisible(This,bPreviewVisible) ( (This)->lpVtbl -> put_PreviewVisible(This,bPreviewVisible) )
#define IWiaVideo_get_ImagesDirectory(This,pbstrImageDirectory) ( (This)->lpVtbl -> get_ImagesDirectory(This,pbstrImageDirectory) )
#define IWiaVideo_put_ImagesDirectory(This,bstrImageDirectory) ( (This)->lpVtbl -> put_ImagesDirectory(This,bstrImageDirectory) )
#define IWiaVideo_CreateVideoByWiaDevID(This,bstrWiaDeviceID,hwndParent,bStretchToFitParent,bAutoBeginPlayback) ( (This)->lpVtbl -> CreateVideoByWiaDevID(This,bstrWiaDeviceID,hwndParent,bStretchToFitParent,bAutoBeginPlayback) )
#define IWiaVideo_CreateVideoByDevNum(This,uiDeviceNumber,hwndParent,bStretchToFitParent,bAutoBeginPlayback) ( (This)->lpVtbl -> CreateVideoByDevNum(This,uiDeviceNumber,hwndParent,bStretchToFitParent,bAutoBeginPlayback) )
#define IWiaVideo_CreateVideoByName(This,bstrFriendlyName,hwndParent,bStretchToFitParent,bAutoBeginPlayback) ( (This)->lpVtbl -> CreateVideoByName(This,bstrFriendlyName,hwndParent,bStretchToFitParent,bAutoBeginPlayback) )
#define IWiaVideo_DestroyVideo(This) ( (This)->lpVtbl -> DestroyVideo(This) )
#define IWiaVideo_Play(This) ( (This)->lpVtbl -> Play(This) )
#define IWiaVideo_Pause(This) ( (This)->lpVtbl -> Pause(This) )
#define IWiaVideo_TakePicture(This,pbstrNewImageFilename) ( (This)->lpVtbl -> TakePicture(This,pbstrNewImageFilename) )
#define IWiaVideo_ResizeVideo(This,bStretchToFitParent) ( (This)->lpVtbl -> ResizeVideo(This,bStretchToFitParent) )
#define IWiaVideo_GetCurrentState(This,pState) ( (This)->lpVtbl -> GetCurrentState(This,pState) )
#endif
HRESULT STDMETHODCALLTYPE IWiaVideo_get_PreviewVisible_Proxy(IWiaVideo *This, BOOL *pbPreviewVisible);
void __RPC_STUB IWiaVideo_get_PreviewVisible_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaVideo_put_PreviewVisible_Proxy(IWiaVideo *This, BOOL bPreviewVisible);
void __RPC_STUB IWiaVideo_put_PreviewVisible_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaVideo_get_ImagesDirectory_Proxy(IWiaVideo *This, BSTR *pbstrImageDirectory);
void __RPC_STUB IWiaVideo_get_ImagesDirectory_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaVideo_put_ImagesDirectory_Proxy(IWiaVideo *This, BSTR bstrImageDirectory);
void __RPC_STUB IWiaVideo_put_ImagesDirectory_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaVideo_CreateVideoByWiaDevID_Proxy(IWiaVideo *This, BSTR bstrWiaDeviceID, HWND hwndParent, BOOL bStretchToFitParent, BOOL bAutoBeginPlayback);
void __RPC_STUB IWiaVideo_CreateVideoByWiaDevID_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaVideo_CreateVideoByDevNum_Proxy(IWiaVideo *This, UINT uiDeviceNumber, HWND hwndParent, BOOL bStretchToFitParent, BOOL bAutoBeginPlayback);
void __RPC_STUB IWiaVideo_CreateVideoByDevNum_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaVideo_CreateVideoByName_Proxy(IWiaVideo *This, BSTR bstrFriendlyName, HWND hwndParent, BOOL bStretchToFitParent, BOOL bAutoBeginPlayback);
void __RPC_STUB IWiaVideo_CreateVideoByName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaVideo_DestroyVideo_Proxy(IWiaVideo *This);
void __RPC_STUB IWiaVideo_DestroyVideo_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaVideo_Play_Proxy(IWiaVideo *This);
void __RPC_STUB IWiaVideo_Play_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaVideo_Pause_Proxy(IWiaVideo *This);
void __RPC_STUB IWiaVideo_Pause_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaVideo_TakePicture_Proxy(IWiaVideo *This, BSTR *pbstrNewImageFilename);
void __RPC_STUB IWiaVideo_TakePicture_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaVideo_ResizeVideo_Proxy(IWiaVideo *This, BOOL bStretchToFitParent);
void __RPC_STUB IWiaVideo_ResizeVideo_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWiaVideo_GetCurrentState_Proxy(IWiaVideo *This, WIAVIDEO_STATE *pState);
void __RPC_STUB IWiaVideo_GetCurrentState_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __WIAVIDEOLib_LIBRARY_DEFINED__
#define __WIAVIDEOLib_LIBRARY_DEFINED__
extern const IID LIBID_WIAVIDEOLib;
extern const CLSID CLSID_WiaVideo;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
#endif
