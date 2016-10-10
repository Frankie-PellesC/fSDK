/*+@@file@@----------------------------------------------------------------*//*!
 \file		amvideo.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 18:36:10 2016
 \date		Modified on Sun Jun 19 18:36:10 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __AMVIDEO__
#define __AMVIDEO__
#if __POCC__ >= 500
#pragma once
#endif
#include <ddraw.h>
typedef LONGLONG REFERENCE_TIME;
#define AMDDS_NONE 0x00
#define AMDDS_DCIPS 0x01
#define AMDDS_PS 0x02
#define AMDDS_RGBOVR 0x04
#define AMDDS_YUVOVR 0x08
#define AMDDS_RGBOFF 0x10
#define AMDDS_YUVOFF 0x20
#define AMDDS_RGBFLP 0x40
#define AMDDS_YUVFLP 0x80
#define AMDDS_ALL 0xFF
#define AMDDS_DEFAULT AMDDS_ALL
#define AMDDS_YUV (AMDDS_YUVOFF | AMDDS_YUVOVR | AMDDS_YUVFLP)
#define AMDDS_RGB (AMDDS_RGBOFF | AMDDS_RGBOVR | AMDDS_RGBFLP)
#define AMDDS_PRIMARY (AMDDS_DCIPS | AMDDS_PS)
#undef INTERFACE
#define INTERFACE IDirectDrawVideo
DECLARE_INTERFACE_(IDirectDrawVideo, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID *ppvObj) ;
    STDMETHOD_(ULONG,AddRef)(THIS) ;
    STDMETHOD_(ULONG,Release)(THIS) ;
    STDMETHOD(GetSwitches)(THIS_  DWORD *pSwitches) ;
    STDMETHOD(SetSwitches)(THIS_ DWORD Switches) ;
    STDMETHOD(GetCaps)(THIS_  DDCAPS *pCaps) ;
    STDMETHOD(GetEmulatedCaps)(THIS_  DDCAPS *pCaps) ;
    STDMETHOD(GetSurfaceDesc)(THIS_  DDSURFACEDESC *pSurfaceDesc) ;
    STDMETHOD(GetFourCCCodes)(THIS_  DWORD *pCount, DWORD *pCodes) ;
    STDMETHOD(SetDirectDraw)(THIS_ LPDIRECTDRAW pDirectDraw) ;
    STDMETHOD(GetDirectDraw)(THIS_ LPDIRECTDRAW *ppDirectDraw) ;
    STDMETHOD(GetSurfaceType)(THIS_  DWORD *pSurfaceType) ;
    STDMETHOD(SetDefault)(THIS) ;
    STDMETHOD(UseScanLine)(THIS_ long UseScanLine) ;
    STDMETHOD(CanUseScanLine)(THIS_  long *UseScanLine) ;
    STDMETHOD(UseOverlayStretch)(THIS_ long UseOverlayStretch) ;
    STDMETHOD(CanUseOverlayStretch)(THIS_  long *UseOverlayStretch) ;
    STDMETHOD(UseWhenFullScreen)(THIS_ long UseWhenFullScreen) ;
    STDMETHOD(WillUseFullScreen)(THIS_  long *UseWhenFullScreen) ;
};
#undef INTERFACE
#define INTERFACE IQualProp
DECLARE_INTERFACE_(IQualProp, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID *ppvObj) ;
    STDMETHOD_(ULONG,AddRef)(THIS) ;
    STDMETHOD_(ULONG,Release)(THIS) ;
    STDMETHOD(get_FramesDroppedInRenderer)(THIS_  int *pcFrames) ;
    STDMETHOD(get_FramesDrawn)(THIS_  int *pcFramesDrawn) ;
    STDMETHOD(get_AvgFrameRate)(THIS_  int *piAvgFrameRate) ;
    STDMETHOD(get_Jitter)(THIS_  int *iJitter) ;
    STDMETHOD(get_AvgSyncOffset)(THIS_  int *piAvg) ;
    STDMETHOD(get_DevSyncOffset)(THIS_  int *piDev) ;
};
#define IQualProp_QueryInterface(This, riid, ppvObj)	( (This)->lpVtbl->QueryInterface)(This, riid, ppvObj) )
#define IQualProp_AddRef(This)
#define IQualProp_Release(This)
#define IQualProp_get_FramesDroppedInRenderer(This, pcFrames)	( (This)->lpVtbl->FramesDroppedInRenderer)(This, pcFrames) )
#define IQualProp_get_FramesDrawn(This, pcFramesDrawn)	( (This)->lpVtbl->FramesDrawn)(This, pcFramesDrawn) )
#define IQualProp_get_AvgFrameRate(This, piAvgFrameRate)	( (This)->lpVtbl->AvgFrameRate)(This, piAvgFrameRate) )
#define IQualProp_get_Jitter(This, iJitter)	( (This)->lpVtbl->Jitter)(This, iJitter) )
#define IQualProp_get_AvgSyncOffset(This, piAvg)	( (This)->lpVtbl->AvgSyncOffset)(This, piAvg) )
#define IQualProp_get_DevSyncOffset(This, piDev)	( (This)->lpVtbl->DevSyncOffset)(This, piDev) )

#undef INTERFACE
#define INTERFACE IFullScreenVideo
DECLARE_INTERFACE_(IFullScreenVideo, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID *ppvObj) ;
    STDMETHOD_(ULONG,AddRef)(THIS) ;
    STDMETHOD_(ULONG,Release)(THIS) ;
    STDMETHOD(CountModes)(THIS_  long *pModes) ;
    STDMETHOD(GetModeInfo)(THIS_ long Mode, long *pWidth, long *pHeight, long *pDepth) ;
    STDMETHOD(GetCurrentMode)(THIS_  long *pMode) ;
    STDMETHOD(IsModeAvailable)(THIS_ long Mode) ;
    STDMETHOD(IsModeEnabled)(THIS_ long Mode) ;
    STDMETHOD(SetEnabled)(THIS_ long Mode,long bEnabled) ;
    STDMETHOD(GetClipFactor)(THIS_  long *pClipFactor) ;
    STDMETHOD(SetClipFactor)(THIS_ long ClipFactor) ;
    STDMETHOD(SetMessageDrain)(THIS_ HWND hwnd) ;
    STDMETHOD(GetMessageDrain)(THIS_  HWND *hwnd) ;
    STDMETHOD(SetMonitor)(THIS_ long Monitor) ;
    STDMETHOD(GetMonitor)(THIS_  long *Monitor) ;
    STDMETHOD(HideOnDeactivate)(THIS_ long Hide) ;
    STDMETHOD(IsHideOnDeactivate)(THIS) ;
    STDMETHOD(SetCaption)(THIS_  BSTR strCaption) ;
    STDMETHOD(GetCaption)(THIS_ BSTR *pstrCaption) ;
    STDMETHOD(SetDefault)(THIS) ;
};
   #define IFullScreenVideo_QueryInterface(This, riid, ppvObj)	( (This)->lpVtbl->QueryInterface)(This, riid, ppvObj) )
   #define IFullScreenVideo_AddRef(This)	( (This)->lpVtbl->AddRef)(This) )
   #define IFullScreenVideo_Release(This)	( (This)->lpVtbl->Release)(This) )
   #define IFullScreenVideo_CountModes(This, pModes)	( (This)->lpVtbl->CountModes)(This, pModes) )
   #define IFullScreenVideo_GetModeInfo(This, Mode, pWidth, pHeight, pDepth)	( (This)->lpVtbl->GetModeInfo)(This, Mode, pWidth, pHeight, pDepth) )
   #define IFullScreenVideo_GetCurrentMode(This, pMode)	( (This)->lpVtbl->GetCurrentMode)(This, pMode) )
   #define IFullScreenVideo_IsModeAvailable(This, Mode)	( (This)->lpVtbl->IsModeAvailable)(This, Mode) )
   #define IFullScreenVideo_IsModeEnabled(This, Mode)	( (This)->lpVtbl->IsModeEnabled)(This, Mode) )
   #define IFullScreenVideo_SetEnabled(This, Mode, bEnabled)	( (This)->lpVtbl->SetEnabled)(This, Mode, bEnabled) )
   #define IFullScreenVideo_GetClipFactor(This, pClipFactor)	( (This)->lpVtbl->GetClipFactor)(This, pClipFactor) )
   #define IFullScreenVideo_SetClipFactor(This, ClipFactor)	( (This)->lpVtbl->SetClipFactor)(This, ClipFactor) )
   #define IFullScreenVideo_SetMessageDrain(This, hwnd)	( (This)->lpVtbl->SetMessageDrain)(This, hwnd) )
   #define IFullScreenVideo_GetMessageDrain(This, hwnd)	( (This)->lpVtbl->GetMessageDrain)(This, hwnd) )
   #define IFullScreenVideo_SetMonitor(This, Monitor)	( (This)->lpVtbl->SetMonitor)(This, Monitor) )
   #define IFullScreenVideo_GetMonitor(This, Monitor)	( (This)->lpVtbl->GetMonitor)(This, Monitor) )
   #define IFullScreenVideo_HideOnDeactivate(This, Hide)	( (This)->lpVtbl->HideOnDeactivate)(This, Hide) )
   #define IFullScreenVideo_IsHideOnDeactivate(This)	( (This)->lpVtbl->IsHideOnDeactivate)(This) )
   #define IFullScreenVideo_SetCaption(This, strCaption)	( (This)->lpVtbl->SetCaption)(This, strCaption) )
   #define IFullScreenVideo_GetCaption(This, pstrCaption)	( (This)->lpVtbl->GetCaption)(This, pstrCaption) )
   #define IFullScreenVideo_SetDefault(This)	( (This)->lpVtbl->SetDefault)(This) )
#undef INTERFACE
#define INTERFACE IFullScreenVideoEx
DECLARE_INTERFACE_(IFullScreenVideoEx, IFullScreenVideo)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID *ppvObj) ;
    STDMETHOD_(ULONG,AddRef)(THIS) ;
    STDMETHOD_(ULONG,Release)(THIS) ;
    STDMETHOD(CountModes)(THIS_  long *pModes) ;
    STDMETHOD(GetModeInfo)(THIS_ long Mode, long *pWidth, long *pHeight, long *pDepth) ;
    STDMETHOD(GetCurrentMode)(THIS_  long *pMode) ;
    STDMETHOD(IsModeAvailable)(THIS_ long Mode) ;
    STDMETHOD(IsModeEnabled)(THIS_ long Mode) ;
    STDMETHOD(SetEnabled)(THIS_ long Mode,long bEnabled) ;
    STDMETHOD(GetClipFactor)(THIS_  long *pClipFactor) ;
    STDMETHOD(SetClipFactor)(THIS_ long ClipFactor) ;
    STDMETHOD(SetMessageDrain)(THIS_ HWND hwnd) ;
    STDMETHOD(GetMessageDrain)(THIS_  HWND *hwnd) ;
    STDMETHOD(SetMonitor)(THIS_ long Monitor) ;
    STDMETHOD(GetMonitor)(THIS_  long *Monitor) ;
    STDMETHOD(HideOnDeactivate)(THIS_ long Hide) ;
    STDMETHOD(IsHideOnDeactivate)(THIS) ;
    STDMETHOD(SetCaption)(THIS_  BSTR strCaption) ;
    STDMETHOD(GetCaption)(THIS_ BSTR *pstrCaption) ;
    STDMETHOD(SetDefault)(THIS) ;
    STDMETHOD(SetAcceleratorTable)(THIS_ HWND hwnd,HACCEL hAccel) ;
    STDMETHOD(GetAcceleratorTable)(THIS_  HWND *phwnd,HACCEL *phAccel) ;
    STDMETHOD(KeepPixelAspectRatio)(THIS_ long KeepAspect) ;
    STDMETHOD(IsKeepPixelAspectRatio)(THIS_  long *pKeepAspect) ;
};
 #define IFullScreenVideoEx_QueryInterface(This, riid, ppvObj)	( (This)->lpVtbl->QueryInterface)(This, riid, ppvObj) )
 #define IFullScreenVideoEx_AddRef)(this)	(This)->lpVtbl->AddRef)
 #define IFullScreenVideoEx_Release)(this)	(This)->lpVtbl->Release)
 #define IFullScreenVideoEx_CountModes(This, pModes)	( (This)->lpVtbl->CountModes)(This, pModes) )
 #define IFullScreenVideoEx_GetModeInfo(This, Mode, pWidth, pHeight, pDepth)	( (This)->lpVtbl->GetModeInfo)(This, Mode, pWidth, pHeight, pDepth) )
 #define IFullScreenVideoEx_GetCurrentMode(This, pMode)	( (This)->lpVtbl->GetCurrentMode)(This, pMode) )
 #define IFullScreenVideoEx_IsModeAvailable(This, Mode)	( (This)->lpVtbl->IsModeAvailable)(This, Mode) )
 #define IFullScreenVideoEx_IsModeEnabled(This, Mode)	( (This)->lpVtbl->IsModeEnabled)(This, Mode) )
 #define IFullScreenVideoEx_SetEnabled(This, Mode,bEnabled)	( (This)->lpVtbl->SetEnabled)(This, Mode,bEnabled) )
 #define IFullScreenVideoEx_GetClipFactor(This, pClipFactor)	( (This)->lpVtbl->GetClipFactor)(This, pClipFactor) )
 #define IFullScreenVideoEx_SetClipFactor(This, ClipFactor)	( (This)->lpVtbl->SetClipFactor)(This, ClipFactor) )
 #define IFullScreenVideoEx_SetMessageDrain(This, hwnd)	( (This)->lpVtbl->SetMessageDrain)(This, hwnd) )
 #define IFullScreenVideoEx_GetMessageDrain(This, hwnd)	( (This)->lpVtbl->GetMessageDrain)(This, hwnd) )
 #define IFullScreenVideoEx_SetMonitor(This, Monitor)	( (This)->lpVtbl->SetMonitor)(This, Monitor) )
 #define IFullScreenVideoEx_GetMonitor(This, Monitor)	( (This)->lpVtbl->GetMonitor)(This, Monitor) )
 #define IFullScreenVideoEx_HideOnDeactivate(This, Hide)	( (This)->lpVtbl->HideOnDeactivate)(This, Hide) )
 #define IFullScreenVideoEx_IsHideOnDeactivate)(This)	(This)->lpVtbl->IsHideOnDeactivate)
 #define IFullScreenVideoEx_SetCaption(This, strCaption)	( (This)->lpVtbl->SetCaption)(This, strCaption) )
 #define IFullScreenVideoEx_GetCaption(This, pstrCaption)	( (This)->lpVtbl->GetCaption)(This, pstrCaption) )
 #define IFullScreenVideoEx_SetDefault)(this)	(This)->lpVtbl->SetDefault)
 #define IFullScreenVideoEx_SetAcceleratorTable(This, hwnd, hAccel)	( (This)->lpVtbl->SetAcceleratorTable)(This, hwnd, hAccel) )
 #define IFullScreenVideoEx_GetAcceleratorTable(This, phwnd, phAccel)	( (This)->lpVtbl->GetAcceleratorTable)(This, phwnd, phAccel) )
 #define IFullScreenVideoEx_KeepPixelAspectRatio(This, KeepAspect)	( (This)->lpVtbl->KeepPixelAspectRatio)(This, KeepAspect) )
 #define IFullScreenVideoEx_IsKeepPixelAspectRatio(This, pKeepAspect)	( (This)->lpVtbl->IsKeepPixelAspectRatio)(This, pKeepAspect) )
#undef INTERFACE
#define INTERFACE IBaseVideoMixer
DECLARE_INTERFACE_(IBaseVideoMixer, IUnknown)
{
    STDMETHOD(SetLeadPin)(THIS_ int iPin) ;
    STDMETHOD(GetLeadPin)(THIS_  int *piPin) ;
    STDMETHOD(GetInputPinCount)(THIS_  int *piPinCount) ;
    STDMETHOD(IsUsingClock)(THIS_  int *pbValue) ;
    STDMETHOD(SetUsingClock)(THIS_ int bValue) ;
    STDMETHOD(GetClockPeriod)(THIS_  int *pbValue) ;
    STDMETHOD(SetClockPeriod)(THIS_ int bValue) ;
};
#define IBaseVideoMixer_QueryInterface(This, riid, ppvObj)	( (This)->lpVtbl->QueryInterface)(This, riid, ppvObj) )
#define IBaseVideoMixer_AddRef)(this)	(This)->lpVtbl->AddRef)
#define IBaseVideoMixer_Release)(this)	(This)->lpVtbl->Release)
#define IBaseVideoMixer_SetLeadPin(This, iPin)	( (This)->lpVtbl->SetLeadPin)(This, iPin) )
#define IBaseVideoMixer_GetLeadPin(This, piPin)	( (This)->lpVtbl->GetLeadPin)(This, piPin) )
#define IBaseVideoMixer_GetInputPinCount(This, piPinCount)	( (This)->lpVtbl->GetInputPinCount)(This, piPinCount) )
#define IBaseVideoMixer_IsUsingClock(This, pbValue)	( (This)->lpVtbl->IsUsingClock)(This, pbValue) )
#define IBaseVideoMixer_SetUsingClock(This, bValue)	( (This)->lpVtbl->SetUsingClock)(This, bValue) )
#define IBaseVideoMixer_GetClockPeriod(This, pbValue)	( (This)->lpVtbl->GetClockPeriod)(This, pbValue) )
#define IBaseVideoMixer_SetClockPeriod(This, bValue)	( (This)->lpVtbl->SetClockPeriod)(This, bValue) )

#define iPALETTE_COLORS 256
#define iEGA_COLORS 16
#define iMASK_COLORS 3
#define iTRUECOLOR 16
#define iRED 0
#define iGREEN 1
#define iBLUE 2
#define iPALETTE 8
#define iMAXBITS 8
typedef struct tag_TRUECOLORINFO {
    DWORD   dwBitMasks[iMASK_COLORS];
    RGBQUAD bmiColors[iPALETTE_COLORS];
} TRUECOLORINFO;
typedef struct tagVIDEOINFOHEADER {
    RECT            rcSource;
    RECT            rcTarget;
    DWORD           dwBitRate;
    DWORD           dwBitErrorRate;
    REFERENCE_TIME  AvgTimePerFrame;
    BITMAPINFOHEADER bmiHeader;
} VIDEOINFOHEADER;
#define TRUECOLOR(pbmi)  ((TRUECOLORINFO *)(((LPBYTE)&((pbmi)->bmiHeader)) + (pbmi)->bmiHeader.biSize))
#define COLORS(pbmi)	((RGBQUAD *)(((LPBYTE)&((pbmi)->bmiHeader))	+ (pbmi)->bmiHeader.biSize))
#define BITMASKS(pbmi)	((DWORD *)(((LPBYTE)&((pbmi)->bmiHeader)) + (pbmi)->bmiHeader.biSize))
typedef struct tagVIDEOINFO
{
    RECT            rcSource;
    RECT            rcTarget;
    DWORD           dwBitRate;
    DWORD           dwBitErrorRate;
    REFERENCE_TIME  AvgTimePerFrame;
    BITMAPINFOHEADER bmiHeader;
    union
    {
        RGBQUAD         bmiColors[iPALETTE_COLORS];
        DWORD           dwBitMasks[iMASK_COLORS];
        TRUECOLORINFO   TrueColorInfo;
    };
} VIDEOINFO;
#define SIZE_EGA_PALETTE (iEGA_COLORS * sizeof(RGBQUAD))
#define SIZE_PALETTE (iPALETTE_COLORS * sizeof(RGBQUAD))
#define SIZE_MASKS (iMASK_COLORS * sizeof(DWORD))
#define SIZE_PREHEADER (FIELD_OFFSET(VIDEOINFOHEADER,bmiHeader))
#define SIZE_VIDEOHEADER (sizeof(BITMAPINFOHEADER) + SIZE_PREHEADER)
#define WIDTHBYTES(bits) ((DWORD)(((bits)+31) & (~31)) / 8)
#define DIBWIDTHBYTES(bi) (DWORD)WIDTHBYTES((DWORD)(bi).biWidth * (DWORD)(bi).biBitCount)
#define _DIBSIZE(bi) (DIBWIDTHBYTES(bi) * (DWORD)(bi).biHeight)
#define DIBSIZE(bi) ((bi).biHeight < 0 ? (-1)*(_DIBSIZE(bi)) : _DIBSIZE(bi))
#ifdef _INTSAFE_H_INCLUDED_
static __inline HRESULT SAFE_DIBWIDTHBYTES(const BITMAPINFOHEADER *pbi, DWORD *pcbWidth)
{
	DWORD dw;
	HRESULT hr;
	if (pbi->biWidth < 0 || pbi->biBitCount <= 0)
	{
		return E_INVALIDARG;
	}
	hr = DWordMult((DWORD)pbi->biWidth, (DWORD)pbi->biBitCount, &dw);
	if (FAILED(hr))
	{
		return hr;
	}
	dw = (dw & 7) ? dw / 8 + 1 : dw / 8;
	if (dw & 3)
	{
		dw += 4 - (dw & 3);
	}
	*pcbWidth = dw;
	return S_OK;
}
static __inline HRESULT SAFE_DIBSIZE(const BITMAPINFOHEADER *pbi, DWORD *pcbSize)
{
	DWORD dw;
	DWORD dwWidthBytes;
	HRESULT hr;
	if (pbi->biHeight == 0x80000000)
	{
		return E_INVALIDARG;
	}
	hr = SAFE_DIBWIDTHBYTES(pbi, &dwWidthBytes);
	if (FAILED(hr))
	{
		return hr;
	}
	dw = abs(pbi->biHeight);
	hr = DWordMult(dw, dwWidthBytes, &dw);
	if (FAILED(hr))
	{
		return hr;
	}
	*pcbSize = dw;
	return S_OK;
}
#endif
#define BIT_MASKS_MATCH(pbmi1,pbmi2) 	    (((pbmi1)->dwBitMasks[iRED] == (pbmi2)->dwBitMasks[iRED]) && 	     ((pbmi1)->dwBitMasks[iGREEN] == (pbmi2)->dwBitMasks[iGREEN]) && 	     ((pbmi1)->dwBitMasks[iBLUE] == (pbmi2)->dwBitMasks[iBLUE]))
#define RESET_MASKS(pbmi) (ZeroMemory((PVOID)(pbmi)->dwBitFields,SIZE_MASKS))
#define RESET_HEADER(pbmi) (ZeroMemory((PVOID)(pbmi),SIZE_VIDEOHEADER))
#define RESET_PALETTE(pbmi) (ZeroMemory((PVOID)(pbmi)->bmiColors,SIZE_PALETTE));
#if 0
#define RESET_MASKS(pbmi) (ZeroMemory((PVOID)(((LPBYTE)(pbmi)->bmiHeader) + 				(pbmi)->bmiHeader.biSize,SIZE_MASKS)))
#define RESET_HEADER(pbmi) (ZeroMemory((PVOID)(pbmi), SIZE_PREHEADER + 				sizeof(BITMAPINFOHEADER)))
#define RESET_PALETTE(pbmi) (ZeroMemory((PVOID)(((LPBYTE)(pbmi)->bmiHeader) + 				(pbmi)->bmiHeader.biSize,SIZE_PALETTE))
#endif
#define PALETTISED(pbmi) ((pbmi)->bmiHeader.biBitCount <= iPALETTE)
#define PALETTE_ENTRIES(pbmi) ((DWORD) 1 << (pbmi)->bmiHeader.biBitCount)
#define HEADER(pVideoInfo) (&(((VIDEOINFOHEADER *) (pVideoInfo))->bmiHeader))
typedef struct tagMPEG1VIDEOINFO {
    VIDEOINFOHEADER hdr;
    DWORD           dwStartTimeCode;
    DWORD           cbSequenceHeader;
    BYTE            bSequenceHeader[1];
} MPEG1VIDEOINFO;
#define MAX_SIZE_MPEG1_SEQUENCE_INFO 140
#define SIZE_MPEG1VIDEOINFO(pv) (FIELD_OFFSET(MPEG1VIDEOINFO, bSequenceHeader[0]) + (pv)->cbSequenceHeader)
#define MPEG1_SEQUENCE_INFO(pv) ((const BYTE *)(pv)->bSequenceHeader)
typedef struct tagAnalogVideoInfo {
    RECT            rcSource;
    RECT            rcTarget;
    DWORD           dwActiveWidth;
    DWORD           dwActiveHeight;
    REFERENCE_TIME  AvgTimePerFrame;
} ANALOGVIDEOINFO;
typedef enum {
	AM_PROPERTY_FRAMESTEP_STEP   = 0x01,
	AM_PROPERTY_FRAMESTEP_CANCEL = 0x02,
        AM_PROPERTY_FRAMESTEP_CANSTEP = 0x03,
        AM_PROPERTY_FRAMESTEP_CANSTEPMULTIPLE = 0x04
} AM_PROPERTY_FRAMESTEP;
typedef struct _AM_FRAMESTEP_STEP
{
    DWORD dwFramesToStep;
} AM_FRAMESTEP_STEP;

#endif



