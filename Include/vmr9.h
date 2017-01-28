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
#ifndef __vmr9_h__
#define __vmr9_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IVMRImagePresenter9_FWD_DEFINED__
#define __IVMRImagePresenter9_FWD_DEFINED__
typedef interface IVMRImagePresenter9 IVMRImagePresenter9;
#endif
#ifndef __IVMRSurfaceAllocator9_FWD_DEFINED__
#define __IVMRSurfaceAllocator9_FWD_DEFINED__
typedef interface IVMRSurfaceAllocator9 IVMRSurfaceAllocator9;
#endif
#ifndef __IVMRSurfaceAllocatorEx9_FWD_DEFINED__
#define __IVMRSurfaceAllocatorEx9_FWD_DEFINED__
typedef interface IVMRSurfaceAllocatorEx9 IVMRSurfaceAllocatorEx9;
#endif
#ifndef __IVMRSurfaceAllocatorNotify9_FWD_DEFINED__
#define __IVMRSurfaceAllocatorNotify9_FWD_DEFINED__
typedef interface IVMRSurfaceAllocatorNotify9 IVMRSurfaceAllocatorNotify9;
#endif
#ifndef __IVMRWindowlessControl9_FWD_DEFINED__
#define __IVMRWindowlessControl9_FWD_DEFINED__
typedef interface IVMRWindowlessControl9 IVMRWindowlessControl9;
#endif
#ifndef __IVMRMixerControl9_FWD_DEFINED__
#define __IVMRMixerControl9_FWD_DEFINED__
typedef interface IVMRMixerControl9 IVMRMixerControl9;
#endif
#ifndef __IVMRMixerBitmap9_FWD_DEFINED__
#define __IVMRMixerBitmap9_FWD_DEFINED__
typedef interface IVMRMixerBitmap9 IVMRMixerBitmap9;
#endif
#ifndef __IVMRSurface9_FWD_DEFINED__
#define __IVMRSurface9_FWD_DEFINED__
typedef interface IVMRSurface9 IVMRSurface9;
#endif
#ifndef __IVMRImagePresenterConfig9_FWD_DEFINED__
#define __IVMRImagePresenterConfig9_FWD_DEFINED__
typedef interface IVMRImagePresenterConfig9 IVMRImagePresenterConfig9;
#endif
#ifndef __IVMRVideoStreamControl9_FWD_DEFINED__
#define __IVMRVideoStreamControl9_FWD_DEFINED__
typedef interface IVMRVideoStreamControl9 IVMRVideoStreamControl9;
#endif
#ifndef __IVMRFilterConfig9_FWD_DEFINED__
#define __IVMRFilterConfig9_FWD_DEFINED__
typedef interface IVMRFilterConfig9 IVMRFilterConfig9;
#endif
#ifndef __IVMRAspectRatioControl9_FWD_DEFINED__
#define __IVMRAspectRatioControl9_FWD_DEFINED__
typedef interface IVMRAspectRatioControl9 IVMRAspectRatioControl9;
#endif
#ifndef __IVMRMonitorConfig9_FWD_DEFINED__
#define __IVMRMonitorConfig9_FWD_DEFINED__
typedef interface IVMRMonitorConfig9 IVMRMonitorConfig9;
#endif
#ifndef __IVMRDeinterlaceControl9_FWD_DEFINED__
#define __IVMRDeinterlaceControl9_FWD_DEFINED__
typedef interface IVMRDeinterlaceControl9 IVMRDeinterlaceControl9;
#endif
#ifndef __IVMRImageCompositor9_FWD_DEFINED__
#define __IVMRImageCompositor9_FWD_DEFINED__
typedef interface IVMRImageCompositor9 IVMRImageCompositor9;
#endif
#include <unknwn.h>
typedef enum __MIDL___MIDL_itf_vmr9_0000_0000_0002
    {	VMR9Sample_SyncPoint	= 0x1,
	VMR9Sample_Preroll	= 0x2,
	VMR9Sample_Discontinuity	= 0x4,
	VMR9Sample_TimeValid	= 0x8,
	VMR9Sample_SrcDstRectsValid	= 0x10
    } 	VMR9PresentationFlags;
typedef struct _VMR9PresentationInfo
    {
    DWORD dwFlags;
    IDirect3DSurface9 *lpSurf;
    REFERENCE_TIME rtStart;
    REFERENCE_TIME rtEnd;
    SIZE szAspectRatio;
    RECT rcSrc;
    RECT rcDst;
    DWORD dwReserved1;
    DWORD dwReserved2;
    } 	VMR9PresentationInfo;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0000_v0_0_s_ifspec;
#ifndef __IVMRImagePresenter9_INTERFACE_DEFINED__
#define __IVMRImagePresenter9_INTERFACE_DEFINED__
extern const IID IID_IVMRImagePresenter9;
typedef struct IVMRImagePresenter9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IVMRImagePresenter9 * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IVMRImagePresenter9 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IVMRImagePresenter9 * This);
    HRESULT ( STDMETHODCALLTYPE *StartPresenting )(
        IVMRImagePresenter9 * This,
        DWORD_PTR dwUserID);
    HRESULT ( STDMETHODCALLTYPE *StopPresenting )(
        IVMRImagePresenter9 * This,
        DWORD_PTR dwUserID);
    HRESULT ( STDMETHODCALLTYPE *PresentImage )(
        IVMRImagePresenter9 * This,
        DWORD_PTR dwUserID,
        VMR9PresentationInfo *lpPresInfo);
    END_INTERFACE
} IVMRImagePresenter9Vtbl;
interface IVMRImagePresenter9
{
    CONST_VTBL struct IVMRImagePresenter9Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRImagePresenter9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRImagePresenter9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRImagePresenter9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IVMRImagePresenter9_StartPresenting(This,dwUserID)	\
    ( (This)->lpVtbl -> StartPresenting(This,dwUserID) )
#define IVMRImagePresenter9_StopPresenting(This,dwUserID)	\
    ( (This)->lpVtbl -> StopPresenting(This,dwUserID) )
#define IVMRImagePresenter9_PresentImage(This,dwUserID,lpPresInfo)	\
    ( (This)->lpVtbl -> PresentImage(This,dwUserID,lpPresInfo) )
#endif
#endif
typedef
enum __MIDL___MIDL_itf_vmr9_0000_0001_0001
    {	VMR9AllocFlag_3DRenderTarget	= 0x1,
	VMR9AllocFlag_DXVATarget	= 0x2,
	VMR9AllocFlag_TextureSurface	= 0x4,
	VMR9AllocFlag_OffscreenSurface	= 0x8,
	VMR9AllocFlag_RGBDynamicSwitch	= 0x10,
	VMR9AllocFlag_UsageReserved	= 0xe0,
	VMR9AllocFlag_UsageMask	= 0xff
    } 	VMR9SurfaceAllocationFlags;
typedef struct _VMR9AllocationInfo
    {
    DWORD dwFlags;
    DWORD dwWidth;
    DWORD dwHeight;
    D3DFORMAT Format;
    D3DPOOL Pool;
    DWORD MinBuffers;
    SIZE szAspectRatio;
    SIZE szNativeSize;
    } 	VMR9AllocationInfo;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0001_v0_0_s_ifspec;
#ifndef __IVMRSurfaceAllocator9_INTERFACE_DEFINED__
#define __IVMRSurfaceAllocator9_INTERFACE_DEFINED__
extern const IID IID_IVMRSurfaceAllocator9;
typedef struct IVMRSurfaceAllocator9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IVMRSurfaceAllocator9 * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IVMRSurfaceAllocator9 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IVMRSurfaceAllocator9 * This);
    HRESULT ( STDMETHODCALLTYPE *InitializeDevice )(
        IVMRSurfaceAllocator9 * This,
        DWORD_PTR dwUserID,
        VMR9AllocationInfo *lpAllocInfo,
        DWORD *lpNumBuffers);
    HRESULT ( STDMETHODCALLTYPE *TerminateDevice )(
        IVMRSurfaceAllocator9 * This,
        DWORD_PTR dwID);
    HRESULT ( STDMETHODCALLTYPE *GetSurface )(
        IVMRSurfaceAllocator9 * This,
        DWORD_PTR dwUserID,
        DWORD SurfaceIndex,
        DWORD SurfaceFlags,
        IDirect3DSurface9 **lplpSurface);
    HRESULT ( STDMETHODCALLTYPE *AdviseNotify )(
        IVMRSurfaceAllocator9 * This,
        IVMRSurfaceAllocatorNotify9 *lpIVMRSurfAllocNotify);
    END_INTERFACE
} IVMRSurfaceAllocator9Vtbl;
interface IVMRSurfaceAllocator9
{
    CONST_VTBL struct IVMRSurfaceAllocator9Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRSurfaceAllocator9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRSurfaceAllocator9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRSurfaceAllocator9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IVMRSurfaceAllocator9_InitializeDevice(This,dwUserID,lpAllocInfo,lpNumBuffers)	\
    ( (This)->lpVtbl -> InitializeDevice(This,dwUserID,lpAllocInfo,lpNumBuffers) )
#define IVMRSurfaceAllocator9_TerminateDevice(This,dwID)	\
    ( (This)->lpVtbl -> TerminateDevice(This,dwID) )
#define IVMRSurfaceAllocator9_GetSurface(This,dwUserID,SurfaceIndex,SurfaceFlags,lplpSurface)	\
    ( (This)->lpVtbl -> GetSurface(This,dwUserID,SurfaceIndex,SurfaceFlags,lplpSurface) )
#define IVMRSurfaceAllocator9_AdviseNotify(This,lpIVMRSurfAllocNotify)	\
    ( (This)->lpVtbl -> AdviseNotify(This,lpIVMRSurfAllocNotify) )
#endif
#endif
#ifndef __IVMRSurfaceAllocatorEx9_INTERFACE_DEFINED__
#define __IVMRSurfaceAllocatorEx9_INTERFACE_DEFINED__
extern const IID IID_IVMRSurfaceAllocatorEx9;
typedef struct IVMRSurfaceAllocatorEx9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IVMRSurfaceAllocatorEx9 * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IVMRSurfaceAllocatorEx9 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IVMRSurfaceAllocatorEx9 * This);
    HRESULT ( STDMETHODCALLTYPE *InitializeDevice )(
        IVMRSurfaceAllocatorEx9 * This,
        DWORD_PTR dwUserID,
        VMR9AllocationInfo *lpAllocInfo,
        DWORD *lpNumBuffers);
    HRESULT ( STDMETHODCALLTYPE *TerminateDevice )(
        IVMRSurfaceAllocatorEx9 * This,
        DWORD_PTR dwID);
    HRESULT ( STDMETHODCALLTYPE *GetSurface )(
        IVMRSurfaceAllocatorEx9 * This,
        DWORD_PTR dwUserID,
        DWORD SurfaceIndex,
        DWORD SurfaceFlags,
        IDirect3DSurface9 **lplpSurface);
    HRESULT ( STDMETHODCALLTYPE *AdviseNotify )(
        IVMRSurfaceAllocatorEx9 * This,
        IVMRSurfaceAllocatorNotify9 *lpIVMRSurfAllocNotify);
    HRESULT ( STDMETHODCALLTYPE *GetSurfaceEx )(
        IVMRSurfaceAllocatorEx9 * This,
        DWORD_PTR dwUserID,
        DWORD SurfaceIndex,
        DWORD SurfaceFlags,
        IDirect3DSurface9 **lplpSurface,
        RECT *lprcDst);
    END_INTERFACE
} IVMRSurfaceAllocatorEx9Vtbl;
interface IVMRSurfaceAllocatorEx9
{
    CONST_VTBL struct IVMRSurfaceAllocatorEx9Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRSurfaceAllocatorEx9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRSurfaceAllocatorEx9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRSurfaceAllocatorEx9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IVMRSurfaceAllocatorEx9_InitializeDevice(This,dwUserID,lpAllocInfo,lpNumBuffers)	\
    ( (This)->lpVtbl -> InitializeDevice(This,dwUserID,lpAllocInfo,lpNumBuffers) )
#define IVMRSurfaceAllocatorEx9_TerminateDevice(This,dwID)	\
    ( (This)->lpVtbl -> TerminateDevice(This,dwID) )
#define IVMRSurfaceAllocatorEx9_GetSurface(This,dwUserID,SurfaceIndex,SurfaceFlags,lplpSurface)	\
    ( (This)->lpVtbl -> GetSurface(This,dwUserID,SurfaceIndex,SurfaceFlags,lplpSurface) )
#define IVMRSurfaceAllocatorEx9_AdviseNotify(This,lpIVMRSurfAllocNotify)	\
    ( (This)->lpVtbl -> AdviseNotify(This,lpIVMRSurfAllocNotify) )
#define IVMRSurfaceAllocatorEx9_GetSurfaceEx(This,dwUserID,SurfaceIndex,SurfaceFlags,lplpSurface,lprcDst)	\
    ( (This)->lpVtbl -> GetSurfaceEx(This,dwUserID,SurfaceIndex,SurfaceFlags,lplpSurface,lprcDst) )
#endif
#endif
#ifndef __IVMRSurfaceAllocatorNotify9_INTERFACE_DEFINED__
#define __IVMRSurfaceAllocatorNotify9_INTERFACE_DEFINED__
extern const IID IID_IVMRSurfaceAllocatorNotify9;
typedef struct IVMRSurfaceAllocatorNotify9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IVMRSurfaceAllocatorNotify9 * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IVMRSurfaceAllocatorNotify9 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IVMRSurfaceAllocatorNotify9 * This);
    HRESULT ( STDMETHODCALLTYPE *AdviseSurfaceAllocator )(
        IVMRSurfaceAllocatorNotify9 * This,
        DWORD_PTR dwUserID,
        IVMRSurfaceAllocator9 *lpIVRMSurfaceAllocator);
    HRESULT ( STDMETHODCALLTYPE *SetD3DDevice )(
        IVMRSurfaceAllocatorNotify9 * This,
        IDirect3DDevice9 *lpD3DDevice,
        HMONITOR hMonitor);
    HRESULT ( STDMETHODCALLTYPE *ChangeD3DDevice )(
        IVMRSurfaceAllocatorNotify9 * This,
        IDirect3DDevice9 *lpD3DDevice,
        HMONITOR hMonitor);
    HRESULT ( STDMETHODCALLTYPE *AllocateSurfaceHelper )(
        IVMRSurfaceAllocatorNotify9 * This,
        VMR9AllocationInfo *lpAllocInfo,
        DWORD *lpNumBuffers,
        IDirect3DSurface9 **lplpSurface);
    HRESULT ( STDMETHODCALLTYPE *NotifyEvent )(
        IVMRSurfaceAllocatorNotify9 * This,
        LONG EventCode,
        LONG_PTR Param1,
        LONG_PTR Param2);
    END_INTERFACE
} IVMRSurfaceAllocatorNotify9Vtbl;
interface IVMRSurfaceAllocatorNotify9
{
    CONST_VTBL struct IVMRSurfaceAllocatorNotify9Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRSurfaceAllocatorNotify9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRSurfaceAllocatorNotify9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRSurfaceAllocatorNotify9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IVMRSurfaceAllocatorNotify9_AdviseSurfaceAllocator(This,dwUserID,lpIVRMSurfaceAllocator)	\
    ( (This)->lpVtbl -> AdviseSurfaceAllocator(This,dwUserID,lpIVRMSurfaceAllocator) )
#define IVMRSurfaceAllocatorNotify9_SetD3DDevice(This,lpD3DDevice,hMonitor)	\
    ( (This)->lpVtbl -> SetD3DDevice(This,lpD3DDevice,hMonitor) )
#define IVMRSurfaceAllocatorNotify9_ChangeD3DDevice(This,lpD3DDevice,hMonitor)	\
    ( (This)->lpVtbl -> ChangeD3DDevice(This,lpD3DDevice,hMonitor) )
#define IVMRSurfaceAllocatorNotify9_AllocateSurfaceHelper(This,lpAllocInfo,lpNumBuffers,lplpSurface)	\
    ( (This)->lpVtbl -> AllocateSurfaceHelper(This,lpAllocInfo,lpNumBuffers,lplpSurface) )
#define IVMRSurfaceAllocatorNotify9_NotifyEvent(This,EventCode,Param1,Param2)	\
    ( (This)->lpVtbl -> NotifyEvent(This,EventCode,Param1,Param2) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_vmr9_0000_0004_0001
    {	VMR9ARMode_None	= 0,
	VMR9ARMode_LetterBox	= ( VMR9ARMode_None + 1 )
    } 	VMR9AspectRatioMode;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0004_v0_0_s_ifspec;
#ifndef __IVMRWindowlessControl9_INTERFACE_DEFINED__
#define __IVMRWindowlessControl9_INTERFACE_DEFINED__
extern const IID IID_IVMRWindowlessControl9;
typedef struct IVMRWindowlessControl9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IVMRWindowlessControl9 * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IVMRWindowlessControl9 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IVMRWindowlessControl9 * This);
    HRESULT ( STDMETHODCALLTYPE *GetNativeVideoSize )(
        IVMRWindowlessControl9 * This,
        LONG *lpWidth,
        LONG *lpHeight,
        LONG *lpARWidth,
        LONG *lpARHeight);
    HRESULT ( STDMETHODCALLTYPE *GetMinIdealVideoSize )(
        IVMRWindowlessControl9 * This,
        LONG *lpWidth,
        LONG *lpHeight);
    HRESULT ( STDMETHODCALLTYPE *GetMaxIdealVideoSize )(
        IVMRWindowlessControl9 * This,
        LONG *lpWidth,
        LONG *lpHeight);
    HRESULT ( STDMETHODCALLTYPE *SetVideoPosition )(
        IVMRWindowlessControl9 * This,
        const LPRECT lpSRCRect,
        const LPRECT lpDSTRect);
    HRESULT ( STDMETHODCALLTYPE *GetVideoPosition )(
        IVMRWindowlessControl9 * This,
        LPRECT lpSRCRect,
        LPRECT lpDSTRect);
    HRESULT ( STDMETHODCALLTYPE *GetAspectRatioMode )(
        IVMRWindowlessControl9 * This,
        DWORD *lpAspectRatioMode);
    HRESULT ( STDMETHODCALLTYPE *SetAspectRatioMode )(
        IVMRWindowlessControl9 * This,
        DWORD AspectRatioMode);
    HRESULT ( STDMETHODCALLTYPE *SetVideoClippingWindow )(
        IVMRWindowlessControl9 * This,
        HWND hwnd);
    HRESULT ( STDMETHODCALLTYPE *RepaintVideo )(
        IVMRWindowlessControl9 * This,
        HWND hwnd,
        HDC hdc);
    HRESULT ( STDMETHODCALLTYPE *DisplayModeChanged )(
        IVMRWindowlessControl9 * This);
    HRESULT ( STDMETHODCALLTYPE *GetCurrentImage )(
        IVMRWindowlessControl9 * This,
        BYTE **lpDib);
    HRESULT ( STDMETHODCALLTYPE *SetBorderColor )(
        IVMRWindowlessControl9 * This,
        COLORREF Clr);
    HRESULT ( STDMETHODCALLTYPE *GetBorderColor )(
        IVMRWindowlessControl9 * This,
        COLORREF *lpClr);
    END_INTERFACE
} IVMRWindowlessControl9Vtbl;
interface IVMRWindowlessControl9
{
    CONST_VTBL struct IVMRWindowlessControl9Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRWindowlessControl9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRWindowlessControl9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRWindowlessControl9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IVMRWindowlessControl9_GetNativeVideoSize(This,lpWidth,lpHeight,lpARWidth,lpARHeight)	\
    ( (This)->lpVtbl -> GetNativeVideoSize(This,lpWidth,lpHeight,lpARWidth,lpARHeight) )
#define IVMRWindowlessControl9_GetMinIdealVideoSize(This,lpWidth,lpHeight)	\
    ( (This)->lpVtbl -> GetMinIdealVideoSize(This,lpWidth,lpHeight) )
#define IVMRWindowlessControl9_GetMaxIdealVideoSize(This,lpWidth,lpHeight)	\
    ( (This)->lpVtbl -> GetMaxIdealVideoSize(This,lpWidth,lpHeight) )
#define IVMRWindowlessControl9_SetVideoPosition(This,lpSRCRect,lpDSTRect)	\
    ( (This)->lpVtbl -> SetVideoPosition(This,lpSRCRect,lpDSTRect) )
#define IVMRWindowlessControl9_GetVideoPosition(This,lpSRCRect,lpDSTRect)	\
    ( (This)->lpVtbl -> GetVideoPosition(This,lpSRCRect,lpDSTRect) )
#define IVMRWindowlessControl9_GetAspectRatioMode(This,lpAspectRatioMode)	\
    ( (This)->lpVtbl -> GetAspectRatioMode(This,lpAspectRatioMode) )
#define IVMRWindowlessControl9_SetAspectRatioMode(This,AspectRatioMode)	\
    ( (This)->lpVtbl -> SetAspectRatioMode(This,AspectRatioMode) )
#define IVMRWindowlessControl9_SetVideoClippingWindow(This,hwnd)	\
    ( (This)->lpVtbl -> SetVideoClippingWindow(This,hwnd) )
#define IVMRWindowlessControl9_RepaintVideo(This,hwnd,hdc)	\
    ( (This)->lpVtbl -> RepaintVideo(This,hwnd,hdc) )
#define IVMRWindowlessControl9_DisplayModeChanged(This)	\
    ( (This)->lpVtbl -> DisplayModeChanged(This) )
#define IVMRWindowlessControl9_GetCurrentImage(This,lpDib)	\
    ( (This)->lpVtbl -> GetCurrentImage(This,lpDib) )
#define IVMRWindowlessControl9_SetBorderColor(This,Clr)	\
    ( (This)->lpVtbl -> SetBorderColor(This,Clr) )
#define IVMRWindowlessControl9_GetBorderColor(This,lpClr)	\
    ( (This)->lpVtbl -> GetBorderColor(This,lpClr) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_vmr9_0000_0005_0001
    {	MixerPref9_NoDecimation	= 0x1,
	MixerPref9_DecimateOutput	= 0x2,
	MixerPref9_ARAdjustXorY	= 0x4,
	MixerPref9_NonSquareMixing	= 0x8,
	MixerPref9_DecimateMask	= 0xf,
	MixerPref9_BiLinearFiltering	= 0x10,
	MixerPref9_PointFiltering	= 0x20,
	MixerPref9_AnisotropicFiltering	= 0x40,
	MixerPref9_PyramidalQuadFiltering	= 0x80,
	MixerPref9_GaussianQuadFiltering	= 0x100,
	MixerPref9_FilteringReserved	= 0xe00,
	MixerPref9_FilteringMask	= 0xff0,
	MixerPref9_RenderTargetRGB	= 0x1000,
	MixerPref9_RenderTargetYUV	= 0x2000,
	MixerPref9_RenderTargetReserved	= 0xfc000,
	MixerPref9_RenderTargetMask	= 0xff000,
	MixerPref9_DynamicSwitchToBOB	= 0x100000,
	MixerPref9_DynamicDecimateBy2	= 0x200000,
	MixerPref9_DynamicReserved	= 0xc00000,
	MixerPref9_DynamicMask	= 0xf00000
    } 	VMR9MixerPrefs;
typedef struct _VMR9NormalizedRect
    {
    float left;
    float top;
    float right;
    float bottom;
    } 	VMR9NormalizedRect;
typedef
enum __MIDL___MIDL_itf_vmr9_0000_0005_0002
    {	ProcAmpControl9_Brightness	= 0x1,
	ProcAmpControl9_Contrast	= 0x2,
	ProcAmpControl9_Hue	= 0x4,
	ProcAmpControl9_Saturation	= 0x8,
	ProcAmpControl9_Mask	= 0xf
    } 	VMR9ProcAmpControlFlags;
typedef struct _VMR9ProcAmpControl
    {
    DWORD dwSize;
    DWORD dwFlags;
    float Brightness;
    float Contrast;
    float Hue;
    float Saturation;
    } 	VMR9ProcAmpControl;
typedef struct _VMR9ProcAmpControlRange
    {
    DWORD dwSize;
    VMR9ProcAmpControlFlags dwProperty;
    float MinValue;
    float MaxValue;
    float DefaultValue;
    float StepSize;
    } 	VMR9ProcAmpControlRange;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0005_v0_0_s_ifspec;
#ifndef __IVMRMixerControl9_INTERFACE_DEFINED__
#define __IVMRMixerControl9_INTERFACE_DEFINED__
extern const IID IID_IVMRMixerControl9;
typedef struct IVMRMixerControl9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IVMRMixerControl9 * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IVMRMixerControl9 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IVMRMixerControl9 * This);
    HRESULT ( STDMETHODCALLTYPE *SetAlpha )(
        IVMRMixerControl9 * This,
        DWORD dwStreamID,
        float Alpha);
    HRESULT ( STDMETHODCALLTYPE *GetAlpha )(
        IVMRMixerControl9 * This,
        DWORD dwStreamID,
        float *pAlpha);
    HRESULT ( STDMETHODCALLTYPE *SetZOrder )(
        IVMRMixerControl9 * This,
        DWORD dwStreamID,
        DWORD dwZ);
    HRESULT ( STDMETHODCALLTYPE *GetZOrder )(
        IVMRMixerControl9 * This,
        DWORD dwStreamID,
        DWORD *pZ);
    HRESULT ( STDMETHODCALLTYPE *SetOutputRect )(
        IVMRMixerControl9 * This,
        DWORD dwStreamID,
        const VMR9NormalizedRect *pRect);
    HRESULT ( STDMETHODCALLTYPE *GetOutputRect )(
        IVMRMixerControl9 * This,
        DWORD dwStreamID,
        VMR9NormalizedRect *pRect);
    HRESULT ( STDMETHODCALLTYPE *SetBackgroundClr )(
        IVMRMixerControl9 * This,
        COLORREF ClrBkg);
    HRESULT ( STDMETHODCALLTYPE *GetBackgroundClr )(
        IVMRMixerControl9 * This,
        COLORREF *lpClrBkg);
    HRESULT ( STDMETHODCALLTYPE *SetMixingPrefs )(
        IVMRMixerControl9 * This,
        DWORD dwMixerPrefs);
    HRESULT ( STDMETHODCALLTYPE *GetMixingPrefs )(
        IVMRMixerControl9 * This,
        DWORD *pdwMixerPrefs);
    HRESULT ( STDMETHODCALLTYPE *SetProcAmpControl )(
        IVMRMixerControl9 * This,
        DWORD dwStreamID,
        VMR9ProcAmpControl *lpClrControl);
    HRESULT ( STDMETHODCALLTYPE *GetProcAmpControl )(
        IVMRMixerControl9 * This,
        DWORD dwStreamID,
        VMR9ProcAmpControl *lpClrControl);
    HRESULT ( STDMETHODCALLTYPE *GetProcAmpControlRange )(
        IVMRMixerControl9 * This,
        DWORD dwStreamID,
        VMR9ProcAmpControlRange *lpClrControl);
    END_INTERFACE
} IVMRMixerControl9Vtbl;
interface IVMRMixerControl9
{
    CONST_VTBL struct IVMRMixerControl9Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRMixerControl9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRMixerControl9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRMixerControl9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IVMRMixerControl9_SetAlpha(This,dwStreamID,Alpha)	\
    ( (This)->lpVtbl -> SetAlpha(This,dwStreamID,Alpha) )
#define IVMRMixerControl9_GetAlpha(This,dwStreamID,pAlpha)	\
    ( (This)->lpVtbl -> GetAlpha(This,dwStreamID,pAlpha) )
#define IVMRMixerControl9_SetZOrder(This,dwStreamID,dwZ)	\
    ( (This)->lpVtbl -> SetZOrder(This,dwStreamID,dwZ) )
#define IVMRMixerControl9_GetZOrder(This,dwStreamID,pZ)	\
    ( (This)->lpVtbl -> GetZOrder(This,dwStreamID,pZ) )
#define IVMRMixerControl9_SetOutputRect(This,dwStreamID,pRect)	\
    ( (This)->lpVtbl -> SetOutputRect(This,dwStreamID,pRect) )
#define IVMRMixerControl9_GetOutputRect(This,dwStreamID,pRect)	\
    ( (This)->lpVtbl -> GetOutputRect(This,dwStreamID,pRect) )
#define IVMRMixerControl9_SetBackgroundClr(This,ClrBkg)	\
    ( (This)->lpVtbl -> SetBackgroundClr(This,ClrBkg) )
#define IVMRMixerControl9_GetBackgroundClr(This,lpClrBkg)	\
    ( (This)->lpVtbl -> GetBackgroundClr(This,lpClrBkg) )
#define IVMRMixerControl9_SetMixingPrefs(This,dwMixerPrefs)	\
    ( (This)->lpVtbl -> SetMixingPrefs(This,dwMixerPrefs) )
#define IVMRMixerControl9_GetMixingPrefs(This,pdwMixerPrefs)	\
    ( (This)->lpVtbl -> GetMixingPrefs(This,pdwMixerPrefs) )
#define IVMRMixerControl9_SetProcAmpControl(This,dwStreamID,lpClrControl)	\
    ( (This)->lpVtbl -> SetProcAmpControl(This,dwStreamID,lpClrControl) )
#define IVMRMixerControl9_GetProcAmpControl(This,dwStreamID,lpClrControl)	\
    ( (This)->lpVtbl -> GetProcAmpControl(This,dwStreamID,lpClrControl) )
#define IVMRMixerControl9_GetProcAmpControlRange(This,dwStreamID,lpClrControl)	\
    ( (This)->lpVtbl -> GetProcAmpControlRange(This,dwStreamID,lpClrControl) )
#endif
#endif
typedef struct _VMR9AlphaBitmap
    {
    DWORD dwFlags;
    HDC hdc;
    IDirect3DSurface9 *pDDS;
    RECT rSrc;
    VMR9NormalizedRect rDest;
    FLOAT fAlpha;
    COLORREF clrSrcKey;
    DWORD dwFilterMode;
    } 	VMR9AlphaBitmap;
typedef enum __MIDL___MIDL_itf_vmr9_0000_0006_0001
    {	VMR9AlphaBitmap_Disable	= 0x1,
	VMR9AlphaBitmap_hDC	= 0x2,
	VMR9AlphaBitmap_EntireDDS	= 0x4,
	VMR9AlphaBitmap_SrcColorKey	= 0x8,
	VMR9AlphaBitmap_SrcRect	= 0x10,
	VMR9AlphaBitmap_FilterMode	= 0x20
    } 	VMR9AlphaBitmapFlags;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0006_v0_0_s_ifspec;
#ifndef __IVMRMixerBitmap9_INTERFACE_DEFINED__
#define __IVMRMixerBitmap9_INTERFACE_DEFINED__
extern const IID IID_IVMRMixerBitmap9;
typedef struct IVMRMixerBitmap9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IVMRMixerBitmap9 * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IVMRMixerBitmap9 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IVMRMixerBitmap9 * This);
    HRESULT ( STDMETHODCALLTYPE *SetAlphaBitmap )(
        IVMRMixerBitmap9 * This,
        const VMR9AlphaBitmap *pBmpParms);
    HRESULT ( STDMETHODCALLTYPE *UpdateAlphaBitmapParameters )(
        IVMRMixerBitmap9 * This,
        const VMR9AlphaBitmap *pBmpParms);
    HRESULT ( STDMETHODCALLTYPE *GetAlphaBitmapParameters )(
        IVMRMixerBitmap9 * This,
        VMR9AlphaBitmap *pBmpParms);
    END_INTERFACE
} IVMRMixerBitmap9Vtbl;
interface IVMRMixerBitmap9
{
    CONST_VTBL struct IVMRMixerBitmap9Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRMixerBitmap9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRMixerBitmap9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRMixerBitmap9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IVMRMixerBitmap9_SetAlphaBitmap(This,pBmpParms)	\
    ( (This)->lpVtbl -> SetAlphaBitmap(This,pBmpParms) )
#define IVMRMixerBitmap9_UpdateAlphaBitmapParameters(This,pBmpParms)	\
    ( (This)->lpVtbl -> UpdateAlphaBitmapParameters(This,pBmpParms) )
#define IVMRMixerBitmap9_GetAlphaBitmapParameters(This,pBmpParms)	\
    ( (This)->lpVtbl -> GetAlphaBitmapParameters(This,pBmpParms) )
#endif
#endif
#ifndef __IVMRSurface9_INTERFACE_DEFINED__
#define __IVMRSurface9_INTERFACE_DEFINED__
extern const IID IID_IVMRSurface9;
typedef struct IVMRSurface9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IVMRSurface9 * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IVMRSurface9 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IVMRSurface9 * This);
    HRESULT ( STDMETHODCALLTYPE *IsSurfaceLocked )(
        IVMRSurface9 * This);
    HRESULT ( STDMETHODCALLTYPE *LockSurface )(
        IVMRSurface9 * This,
        BYTE **lpSurface);
    HRESULT ( STDMETHODCALLTYPE *UnlockSurface )(
        IVMRSurface9 * This);
    HRESULT ( STDMETHODCALLTYPE *GetSurface )(
        IVMRSurface9 * This,
        IDirect3DSurface9 **lplpSurface);
    END_INTERFACE
} IVMRSurface9Vtbl;
interface IVMRSurface9
{
    CONST_VTBL struct IVMRSurface9Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRSurface9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRSurface9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRSurface9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IVMRSurface9_IsSurfaceLocked(This)	\
    ( (This)->lpVtbl -> IsSurfaceLocked(This) )
#define IVMRSurface9_LockSurface(This,lpSurface)	\
    ( (This)->lpVtbl -> LockSurface(This,lpSurface) )
#define IVMRSurface9_UnlockSurface(This)	\
    ( (This)->lpVtbl -> UnlockSurface(This) )
#define IVMRSurface9_GetSurface(This,lplpSurface)	\
    ( (This)->lpVtbl -> GetSurface(This,lplpSurface) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_vmr9_0000_0008_0001
    {	RenderPrefs9_DoNotRenderBorder	= 0x1,
	RenderPrefs9_Mask	= 0x1
    } 	VMR9RenderPrefs;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0008_v0_0_s_ifspec;
#ifndef __IVMRImagePresenterConfig9_INTERFACE_DEFINED__
#define __IVMRImagePresenterConfig9_INTERFACE_DEFINED__
extern const IID IID_IVMRImagePresenterConfig9;
typedef struct IVMRImagePresenterConfig9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IVMRImagePresenterConfig9 * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IVMRImagePresenterConfig9 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IVMRImagePresenterConfig9 * This);
    HRESULT ( STDMETHODCALLTYPE *SetRenderingPrefs )(
        IVMRImagePresenterConfig9 * This,
        DWORD dwRenderFlags);
    HRESULT ( STDMETHODCALLTYPE *GetRenderingPrefs )(
        IVMRImagePresenterConfig9 * This,
        DWORD *dwRenderFlags);
    END_INTERFACE
} IVMRImagePresenterConfig9Vtbl;
interface IVMRImagePresenterConfig9
{
    CONST_VTBL struct IVMRImagePresenterConfig9Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRImagePresenterConfig9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRImagePresenterConfig9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRImagePresenterConfig9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IVMRImagePresenterConfig9_SetRenderingPrefs(This,dwRenderFlags)	\
    ( (This)->lpVtbl -> SetRenderingPrefs(This,dwRenderFlags) )
#define IVMRImagePresenterConfig9_GetRenderingPrefs(This,dwRenderFlags)	\
    ( (This)->lpVtbl -> GetRenderingPrefs(This,dwRenderFlags) )
#endif
#endif
#ifndef __IVMRVideoStreamControl9_INTERFACE_DEFINED__
#define __IVMRVideoStreamControl9_INTERFACE_DEFINED__
extern const IID IID_IVMRVideoStreamControl9;
typedef struct IVMRVideoStreamControl9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IVMRVideoStreamControl9 * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IVMRVideoStreamControl9 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IVMRVideoStreamControl9 * This);
    HRESULT ( STDMETHODCALLTYPE *SetStreamActiveState )(
        IVMRVideoStreamControl9 * This,
        BOOL fActive);
    HRESULT ( STDMETHODCALLTYPE *GetStreamActiveState )(
        IVMRVideoStreamControl9 * This,
        BOOL *lpfActive);
    END_INTERFACE
} IVMRVideoStreamControl9Vtbl;
interface IVMRVideoStreamControl9
{
    CONST_VTBL struct IVMRVideoStreamControl9Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRVideoStreamControl9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRVideoStreamControl9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRVideoStreamControl9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IVMRVideoStreamControl9_SetStreamActiveState(This,fActive)	\
    ( (This)->lpVtbl -> SetStreamActiveState(This,fActive) )
#define IVMRVideoStreamControl9_GetStreamActiveState(This,lpfActive)	\
    ( (This)->lpVtbl -> GetStreamActiveState(This,lpfActive) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_vmr9_0000_0010_0001
    {	VMR9Mode_Windowed	= 0x1,
	VMR9Mode_Windowless	= 0x2,
	VMR9Mode_Renderless	= 0x4,
	VMR9Mode_Mask	= 0x7
    } 	VMR9Mode;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0010_v0_0_s_ifspec;
#ifndef __IVMRFilterConfig9_INTERFACE_DEFINED__
#define __IVMRFilterConfig9_INTERFACE_DEFINED__
extern const IID IID_IVMRFilterConfig9;
typedef struct IVMRFilterConfig9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IVMRFilterConfig9 * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IVMRFilterConfig9 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IVMRFilterConfig9 * This);
    HRESULT ( STDMETHODCALLTYPE *SetImageCompositor )(
        IVMRFilterConfig9 * This,
        IVMRImageCompositor9 *lpVMRImgCompositor);
    HRESULT ( STDMETHODCALLTYPE *SetNumberOfStreams )(
        IVMRFilterConfig9 * This,
        DWORD dwMaxStreams);
    HRESULT ( STDMETHODCALLTYPE *GetNumberOfStreams )(
        IVMRFilterConfig9 * This,
        DWORD *pdwMaxStreams);
    HRESULT ( STDMETHODCALLTYPE *SetRenderingPrefs )(
        IVMRFilterConfig9 * This,
        DWORD dwRenderFlags);
    HRESULT ( STDMETHODCALLTYPE *GetRenderingPrefs )(
        IVMRFilterConfig9 * This,
        DWORD *pdwRenderFlags);
    HRESULT ( STDMETHODCALLTYPE *SetRenderingMode )(
        IVMRFilterConfig9 * This,
        DWORD Mode);
    HRESULT ( STDMETHODCALLTYPE *GetRenderingMode )(
        IVMRFilterConfig9 * This,
        DWORD *pMode);
    END_INTERFACE
} IVMRFilterConfig9Vtbl;
interface IVMRFilterConfig9
{
    CONST_VTBL struct IVMRFilterConfig9Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRFilterConfig9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRFilterConfig9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRFilterConfig9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IVMRFilterConfig9_SetImageCompositor(This,lpVMRImgCompositor)	\
    ( (This)->lpVtbl -> SetImageCompositor(This,lpVMRImgCompositor) )
#define IVMRFilterConfig9_SetNumberOfStreams(This,dwMaxStreams)	\
    ( (This)->lpVtbl -> SetNumberOfStreams(This,dwMaxStreams) )
#define IVMRFilterConfig9_GetNumberOfStreams(This,pdwMaxStreams)	\
    ( (This)->lpVtbl -> GetNumberOfStreams(This,pdwMaxStreams) )
#define IVMRFilterConfig9_SetRenderingPrefs(This,dwRenderFlags)	\
    ( (This)->lpVtbl -> SetRenderingPrefs(This,dwRenderFlags) )
#define IVMRFilterConfig9_GetRenderingPrefs(This,pdwRenderFlags)	\
    ( (This)->lpVtbl -> GetRenderingPrefs(This,pdwRenderFlags) )
#define IVMRFilterConfig9_SetRenderingMode(This,Mode)	\
    ( (This)->lpVtbl -> SetRenderingMode(This,Mode) )
#define IVMRFilterConfig9_GetRenderingMode(This,pMode)	\
    ( (This)->lpVtbl -> GetRenderingMode(This,pMode) )
#endif
#endif
#ifndef __IVMRAspectRatioControl9_INTERFACE_DEFINED__
#define __IVMRAspectRatioControl9_INTERFACE_DEFINED__
extern const IID IID_IVMRAspectRatioControl9;
typedef struct IVMRAspectRatioControl9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IVMRAspectRatioControl9 * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IVMRAspectRatioControl9 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IVMRAspectRatioControl9 * This);
    HRESULT ( STDMETHODCALLTYPE *GetAspectRatioMode )(
        IVMRAspectRatioControl9 * This,
        LPDWORD lpdwARMode);
    HRESULT ( STDMETHODCALLTYPE *SetAspectRatioMode )(
        IVMRAspectRatioControl9 * This,
        DWORD dwARMode);
    END_INTERFACE
} IVMRAspectRatioControl9Vtbl;
interface IVMRAspectRatioControl9
{
    CONST_VTBL struct IVMRAspectRatioControl9Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRAspectRatioControl9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRAspectRatioControl9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRAspectRatioControl9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IVMRAspectRatioControl9_GetAspectRatioMode(This,lpdwARMode)	\
    ( (This)->lpVtbl -> GetAspectRatioMode(This,lpdwARMode) )
#define IVMRAspectRatioControl9_SetAspectRatioMode(This,dwARMode)	\
    ( (This)->lpVtbl -> SetAspectRatioMode(This,dwARMode) )
#endif
#endif
typedef struct _VMR9MonitorInfo
    {
    UINT uDevID;
    RECT rcMonitor;
    HMONITOR hMon;
    DWORD dwFlags;
    wchar_t szDevice[ 32 ];
    wchar_t szDescription[ 512 ];
    LARGE_INTEGER liDriverVersion;
    DWORD dwVendorId;
    DWORD dwDeviceId;
    DWORD dwSubSysId;
    DWORD dwRevision;
    } 	VMR9MonitorInfo;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0012_v0_0_s_ifspec;
#ifndef __IVMRMonitorConfig9_INTERFACE_DEFINED__
#define __IVMRMonitorConfig9_INTERFACE_DEFINED__
extern const IID IID_IVMRMonitorConfig9;
typedef struct IVMRMonitorConfig9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IVMRMonitorConfig9 * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IVMRMonitorConfig9 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IVMRMonitorConfig9 * This);
    HRESULT ( STDMETHODCALLTYPE *SetMonitor )(
        IVMRMonitorConfig9 * This,
        UINT uDev);
    HRESULT ( STDMETHODCALLTYPE *GetMonitor )(
        IVMRMonitorConfig9 * This,
        UINT *puDev);
    HRESULT ( STDMETHODCALLTYPE *SetDefaultMonitor )(
        IVMRMonitorConfig9 * This,
        UINT uDev);
    HRESULT ( STDMETHODCALLTYPE *GetDefaultMonitor )(
        IVMRMonitorConfig9 * This,
        UINT *puDev);
    HRESULT ( STDMETHODCALLTYPE *GetAvailableMonitors )(
        IVMRMonitorConfig9 * This,
        VMR9MonitorInfo *pInfo,
        DWORD dwMaxInfoArraySize,
        DWORD *pdwNumDevices);
    END_INTERFACE
} IVMRMonitorConfig9Vtbl;
interface IVMRMonitorConfig9
{
    CONST_VTBL struct IVMRMonitorConfig9Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRMonitorConfig9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRMonitorConfig9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRMonitorConfig9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IVMRMonitorConfig9_SetMonitor(This,uDev)	\
    ( (This)->lpVtbl -> SetMonitor(This,uDev) )
#define IVMRMonitorConfig9_GetMonitor(This,puDev)	\
    ( (This)->lpVtbl -> GetMonitor(This,puDev) )
#define IVMRMonitorConfig9_SetDefaultMonitor(This,uDev)	\
    ( (This)->lpVtbl -> SetDefaultMonitor(This,uDev) )
#define IVMRMonitorConfig9_GetDefaultMonitor(This,puDev)	\
    ( (This)->lpVtbl -> GetDefaultMonitor(This,puDev) )
#define IVMRMonitorConfig9_GetAvailableMonitors(This,pInfo,dwMaxInfoArraySize,pdwNumDevices)	\
    ( (This)->lpVtbl -> GetAvailableMonitors(This,pInfo,dwMaxInfoArraySize,pdwNumDevices) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_vmr9_0000_0013_0001
    {	DeinterlacePref9_NextBest	= 0x1,
	DeinterlacePref9_BOB	= 0x2,
	DeinterlacePref9_Weave	= 0x4,
	DeinterlacePref9_Mask	= 0x7
    } 	VMR9DeinterlacePrefs;
typedef enum __MIDL___MIDL_itf_vmr9_0000_0013_0002
    {	DeinterlaceTech9_Unknown	= 0,
	DeinterlaceTech9_BOBLineReplicate	= 0x1,
	DeinterlaceTech9_BOBVerticalStretch	= 0x2,
	DeinterlaceTech9_MedianFiltering	= 0x4,
	DeinterlaceTech9_EdgeFiltering	= 0x10,
	DeinterlaceTech9_FieldAdaptive	= 0x20,
	DeinterlaceTech9_PixelAdaptive	= 0x40,
	DeinterlaceTech9_MotionVectorSteered	= 0x80
    } 	VMR9DeinterlaceTech;
typedef struct _VMR9Frequency
    {
    DWORD dwNumerator;
    DWORD dwDenominator;
    } 	VMR9Frequency;
typedef enum _VMR9_SampleFormat
    {	VMR9_SampleReserved	= 1,
	VMR9_SampleProgressiveFrame	= 2,
	VMR9_SampleFieldInterleavedEvenFirst	= 3,
	VMR9_SampleFieldInterleavedOddFirst	= 4,
	VMR9_SampleFieldSingleEven	= 5,
	VMR9_SampleFieldSingleOdd	= 6
    } 	VMR9_SampleFormat;
typedef struct _VMR9VideoDesc
    {
    DWORD dwSize;
    DWORD dwSampleWidth;
    DWORD dwSampleHeight;
    VMR9_SampleFormat SampleFormat;
    DWORD dwFourCC;
    VMR9Frequency InputSampleFreq;
    VMR9Frequency OutputFrameFreq;
    } 	VMR9VideoDesc;
typedef struct _VMR9DeinterlaceCaps
    {
    DWORD dwSize;
    DWORD dwNumPreviousOutputFrames;
    DWORD dwNumForwardRefSamples;
    DWORD dwNumBackwardRefSamples;
    VMR9DeinterlaceTech DeinterlaceTechnology;
    } 	VMR9DeinterlaceCaps;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0013_v0_0_s_ifspec;
#ifndef __IVMRDeinterlaceControl9_INTERFACE_DEFINED__
#define __IVMRDeinterlaceControl9_INTERFACE_DEFINED__
extern const IID IID_IVMRDeinterlaceControl9;
typedef struct IVMRDeinterlaceControl9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IVMRDeinterlaceControl9 * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IVMRDeinterlaceControl9 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IVMRDeinterlaceControl9 * This);
    HRESULT ( STDMETHODCALLTYPE *GetNumberOfDeinterlaceModes )(
        IVMRDeinterlaceControl9 * This,
        VMR9VideoDesc *lpVideoDescription,
        LPDWORD lpdwNumDeinterlaceModes,
        LPGUID lpDeinterlaceModes);
    HRESULT ( STDMETHODCALLTYPE *GetDeinterlaceModeCaps )(
        IVMRDeinterlaceControl9 * This,
        LPGUID lpDeinterlaceMode,
        VMR9VideoDesc *lpVideoDescription,
        VMR9DeinterlaceCaps *lpDeinterlaceCaps);
    HRESULT ( STDMETHODCALLTYPE *GetDeinterlaceMode )(
        IVMRDeinterlaceControl9 * This,
        DWORD dwStreamID,
        LPGUID lpDeinterlaceMode);
    HRESULT ( STDMETHODCALLTYPE *SetDeinterlaceMode )(
        IVMRDeinterlaceControl9 * This,
        DWORD dwStreamID,
        LPGUID lpDeinterlaceMode);
    HRESULT ( STDMETHODCALLTYPE *GetDeinterlacePrefs )(
        IVMRDeinterlaceControl9 * This,
        LPDWORD lpdwDeinterlacePrefs);
    HRESULT ( STDMETHODCALLTYPE *SetDeinterlacePrefs )(
        IVMRDeinterlaceControl9 * This,
        DWORD dwDeinterlacePrefs);
    HRESULT ( STDMETHODCALLTYPE *GetActualDeinterlaceMode )(
        IVMRDeinterlaceControl9 * This,
        DWORD dwStreamID,
        LPGUID lpDeinterlaceMode);
    END_INTERFACE
} IVMRDeinterlaceControl9Vtbl;
interface IVMRDeinterlaceControl9
{
    CONST_VTBL struct IVMRDeinterlaceControl9Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRDeinterlaceControl9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRDeinterlaceControl9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRDeinterlaceControl9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IVMRDeinterlaceControl9_GetNumberOfDeinterlaceModes(This,lpVideoDescription,lpdwNumDeinterlaceModes,lpDeinterlaceModes)	\
    ( (This)->lpVtbl -> GetNumberOfDeinterlaceModes(This,lpVideoDescription,lpdwNumDeinterlaceModes,lpDeinterlaceModes) )
#define IVMRDeinterlaceControl9_GetDeinterlaceModeCaps(This,lpDeinterlaceMode,lpVideoDescription,lpDeinterlaceCaps)	\
    ( (This)->lpVtbl -> GetDeinterlaceModeCaps(This,lpDeinterlaceMode,lpVideoDescription,lpDeinterlaceCaps) )
#define IVMRDeinterlaceControl9_GetDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode)	\
    ( (This)->lpVtbl -> GetDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode) )
#define IVMRDeinterlaceControl9_SetDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode)	\
    ( (This)->lpVtbl -> SetDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode) )
#define IVMRDeinterlaceControl9_GetDeinterlacePrefs(This,lpdwDeinterlacePrefs)	\
    ( (This)->lpVtbl -> GetDeinterlacePrefs(This,lpdwDeinterlacePrefs) )
#define IVMRDeinterlaceControl9_SetDeinterlacePrefs(This,dwDeinterlacePrefs)	\
    ( (This)->lpVtbl -> SetDeinterlacePrefs(This,dwDeinterlacePrefs) )
#define IVMRDeinterlaceControl9_GetActualDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode)	\
    ( (This)->lpVtbl -> GetActualDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode) )
#endif
#endif
typedef struct _VMR9VideoStreamInfo
    {
    IDirect3DSurface9 *pddsVideoSurface;
    DWORD dwWidth;
    DWORD dwHeight;
    DWORD dwStrmID;
    FLOAT fAlpha;
    VMR9NormalizedRect rNormal;
    REFERENCE_TIME rtStart;
    REFERENCE_TIME rtEnd;
    VMR9_SampleFormat SampleFormat;
    } 	VMR9VideoStreamInfo;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vmr9_0000_0014_v0_0_s_ifspec;
#ifndef __IVMRImageCompositor9_INTERFACE_DEFINED__
#define __IVMRImageCompositor9_INTERFACE_DEFINED__
extern const IID IID_IVMRImageCompositor9;
typedef struct IVMRImageCompositor9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        IVMRImageCompositor9 * This,
        REFIID riid,
        void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(
        IVMRImageCompositor9 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(
        IVMRImageCompositor9 * This);
    HRESULT ( STDMETHODCALLTYPE *InitCompositionDevice )(
        IVMRImageCompositor9 * This,
        IUnknown *pD3DDevice);
    HRESULT ( STDMETHODCALLTYPE *TermCompositionDevice )(
        IVMRImageCompositor9 * This,
        IUnknown *pD3DDevice);
    HRESULT ( STDMETHODCALLTYPE *SetStreamMediaType )(
        IVMRImageCompositor9 * This,
        DWORD dwStrmID,
        AM_MEDIA_TYPE *pmt,
        BOOL fTexture);
    HRESULT ( STDMETHODCALLTYPE *CompositeImage )(
        IVMRImageCompositor9 * This,
        IUnknown *pD3DDevice,
        IDirect3DSurface9 *pddsRenderTarget,
        AM_MEDIA_TYPE *pmtRenderTarget,
        REFERENCE_TIME rtStart,
        REFERENCE_TIME rtEnd,
        D3DCOLOR dwClrBkGnd,
        VMR9VideoStreamInfo *pVideoStreamInfo,
        UINT cStreams);
    END_INTERFACE
} IVMRImageCompositor9Vtbl;
interface IVMRImageCompositor9
{
    CONST_VTBL struct IVMRImageCompositor9Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRImageCompositor9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRImageCompositor9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRImageCompositor9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define IVMRImageCompositor9_InitCompositionDevice(This,pD3DDevice)	\
    ( (This)->lpVtbl -> InitCompositionDevice(This,pD3DDevice) )
#define IVMRImageCompositor9_TermCompositionDevice(This,pD3DDevice)	\
    ( (This)->lpVtbl -> TermCompositionDevice(This,pD3DDevice) )
#define IVMRImageCompositor9_SetStreamMediaType(This,dwStrmID,pmt,fTexture)	\
    ( (This)->lpVtbl -> SetStreamMediaType(This,dwStrmID,pmt,fTexture) )
#define IVMRImageCompositor9_CompositeImage(This,pD3DDevice,pddsRenderTarget,pmtRenderTarget,rtStart,rtEnd,dwClrBkGnd,pVideoStreamInfo,cStreams)	\
    ( (This)->lpVtbl -> CompositeImage(This,pD3DDevice,pddsRenderTarget,pmtRenderTarget,rtStart,rtEnd,dwClrBkGnd,pVideoStreamInfo,cStreams) )
#endif
#endif
#endif

