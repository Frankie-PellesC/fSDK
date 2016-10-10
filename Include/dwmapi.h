/*+@@file@@----------------------------------------------------------------*//*!
 \file		dwmapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Wed Jul  6 17:29:50 2016
 \date		Modified on Wed Jul  6 17:29:50 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _DWMAPI_H_
#define _DWMAPI_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef DWMAPI
#if !defined(_DWMAPI_)
#define DWMAPI          extern DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define DWMAPI_(type)   extern DECLSPEC_IMPORT type STDAPICALLTYPE
#else
#define DWMAPI          STDAPI
#define DWMAPI_(type)   STDAPI_(type)
#endif
#endif
#ifndef MILCORE_KERNEL_COMPONENT
#include <wtypes.h>
#include <uxtheme.h>
#endif
#include <pshpack1.h>
#define DWM_BB_ENABLE                 0x00000001
#define DWM_BB_BLURREGION             0x00000002
#define DWM_BB_TRANSITIONONMAXIMIZED  0x00000004
typedef struct _DWM_BLURBEHIND
{
    DWORD dwFlags;
    BOOL fEnable;
    HRGN hRgnBlur;
    BOOL fTransitionOnMaximized;
} DWM_BLURBEHIND, *PDWM_BLURBEHIND;
enum DWMWINDOWATTRIBUTE
{
    DWMWA_NCRENDERING_ENABLED = 1,
    DWMWA_NCRENDERING_POLICY,
    DWMWA_TRANSITIONS_FORCEDISABLED,
    DWMWA_ALLOW_NCPAINT,
    DWMWA_CAPTION_BUTTON_BOUNDS,
    DWMWA_NONCLIENT_RTL_LAYOUT,
    DWMWA_FORCE_ICONIC_REPRESENTATION,
    DWMWA_FLIP3D_POLICY,
    DWMWA_EXTENDED_FRAME_BOUNDS,
    DWMWA_HAS_ICONIC_BITMAP,
    DWMWA_DISALLOW_PEEK,
    DWMWA_EXCLUDED_FROM_PEEK,
    DWMWA_LAST
};
enum DWMNCRENDERINGPOLICY
{
    DWMNCRP_USEWINDOWSTYLE,
    DWMNCRP_DISABLED,
    DWMNCRP_ENABLED,
    DWMNCRP_LAST
};
enum DWMFLIP3DWINDOWPOLICY
{
    DWMFLIP3D_DEFAULT,
    DWMFLIP3D_EXCLUDEBELOW,
    DWMFLIP3D_EXCLUDEABOVE,
    DWMFLIP3D_LAST
};
typedef HANDLE HTHUMBNAIL;
typedef HTHUMBNAIL* PHTHUMBNAIL;
#define DWM_TNP_RECTDESTINATION       0x00000001
#define DWM_TNP_RECTSOURCE            0x00000002
#define DWM_TNP_OPACITY               0x00000004
#define DWM_TNP_VISIBLE               0x00000008
#define DWM_TNP_SOURCECLIENTAREAONLY  0x00000010
typedef struct _DWM_THUMBNAIL_PROPERTIES
{
    DWORD dwFlags;
    RECT rcDestination;
    RECT rcSource;
    BYTE opacity;
    BOOL fVisible;
    BOOL fSourceClientAreaOnly;
} DWM_THUMBNAIL_PROPERTIES, *PDWM_THUMBNAIL_PROPERTIES;
typedef ULONGLONG DWM_FRAME_COUNT;
typedef ULONGLONG QPC_TIME;
typedef  struct _UNSIGNED_RATIO
{
    UINT32 uiNumerator;
    UINT32 uiDenominator;
} UNSIGNED_RATIO;
typedef  struct _DWM_TIMING_INFO
{
    UINT32          cbSize;
    UNSIGNED_RATIO  rateRefresh;
    QPC_TIME        qpcRefreshPeriod;
    UNSIGNED_RATIO  rateCompose;
    QPC_TIME        qpcVBlank;
    DWM_FRAME_COUNT cRefresh;
    UINT cDXRefresh;
    QPC_TIME        qpcCompose;
    DWM_FRAME_COUNT cFrame;
    UINT            cDXPresent;
    DWM_FRAME_COUNT cRefreshFrame;
    DWM_FRAME_COUNT cFrameSubmitted;
    UINT cDXPresentSubmitted;
    DWM_FRAME_COUNT cFrameConfirmed;
    UINT cDXPresentConfirmed;
    DWM_FRAME_COUNT cRefreshConfirmed;
    UINT cDXRefreshConfirmed;
    DWM_FRAME_COUNT          cFramesLate;
    UINT          cFramesOutstanding;
    DWM_FRAME_COUNT cFrameDisplayed;
    QPC_TIME        qpcFrameDisplayed;
    DWM_FRAME_COUNT cRefreshFrameDisplayed;
    DWM_FRAME_COUNT cFrameComplete;
    QPC_TIME        qpcFrameComplete;
    DWM_FRAME_COUNT cFramePending;
    QPC_TIME        qpcFramePending;
    DWM_FRAME_COUNT cFramesDisplayed;
    DWM_FRAME_COUNT cFramesComplete;
    DWM_FRAME_COUNT cFramesPending;
    DWM_FRAME_COUNT cFramesAvailable;
    DWM_FRAME_COUNT cFramesDropped;
    DWM_FRAME_COUNT cFramesMissed;
    DWM_FRAME_COUNT cRefreshNextDisplayed;
    DWM_FRAME_COUNT cRefreshNextPresented;
    DWM_FRAME_COUNT cRefreshesDisplayed;
    DWM_FRAME_COUNT cRefreshesPresented;
    DWM_FRAME_COUNT cRefreshStarted;
    ULONGLONG  cPixelsReceived;
    ULONGLONG  cPixelsDrawn;
    DWM_FRAME_COUNT      cBuffersEmpty;
} DWM_TIMING_INFO;
typedef enum 
{
    DWM_SOURCE_FRAME_SAMPLING_POINT,
    DWM_SOURCE_FRAME_SAMPLING_COVERAGE,
    DWM_SOURCE_FRAME_SAMPLING_LAST
} DWM_SOURCE_FRAME_SAMPLING;
#define c_DwmMaxQueuedBuffers	((UINT)8)
#define c_DwmMaxMonitors		((UINT)16)
#define c_DwmMaxAdapters		((UINT)16)
typedef struct _DWM_PRESENT_PARAMETERS
{
    UINT32          cbSize;
    BOOL            fQueue;
    DWM_FRAME_COUNT cRefreshStart;
    UINT            cBuffer;
    BOOL            fUseSourceRate;
    UNSIGNED_RATIO  rateSource;
    UINT            cRefreshesPerFrame;
    DWM_SOURCE_FRAME_SAMPLING  eSampling;
} DWM_PRESENT_PARAMETERS;
#define DWM_FRAME_DURATION_DEFAULT -1
DWMAPI_(BOOL)DwmDefWindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam, LRESULT * plResult);
DWMAPI DwmEnableBlurBehindWindow(HWND hWnd, const DWM_BLURBEHIND *pBlurBehind);
#define DWM_EC_DISABLECOMPOSITION         0
#define DWM_EC_ENABLECOMPOSITION          1
DWMAPI DwmEnableComposition(UINT uCompositionAction);
DWMAPI DwmEnableMMCSS(BOOL fEnableMMCSS);
DWMAPI DwmExtendFrameIntoClientArea(HWND hWnd, const MARGINS *pMarInset);
DWMAPI DwmGetColorizationColor(DWORD *pcrColorization, BOOL *pfOpaqueBlend);
DWMAPI DwmGetCompositionTimingInfo(HWND hwnd, DWM_TIMING_INFO *pTimingInfo);
DWMAPI DwmGetWindowAttribute(HWND hwnd, DWORD dwAttribute, PVOID pvAttribute, DWORD cbAttribute);
DWMAPI DwmIsCompositionEnabled(BOOL *pfEnabled);
DWMAPI DwmModifyPreviousDxFrameDuration(HWND hwnd, INT cRefreshes, BOOL fRelative);
DWMAPI DwmQueryThumbnailSourceSize(HTHUMBNAIL hThumbnail, PSIZE pSize);
DWMAPI DwmRegisterThumbnail(HWND hwndDestination, HWND hwndSource, PHTHUMBNAIL phThumbnailId);
DWMAPI DwmSetDxFrameDuration(HWND hwnd, INT cRefreshes);
DWMAPI DwmSetPresentParameters(HWND hwnd, DWM_PRESENT_PARAMETERS *pPresentParams);
DWMAPI DwmSetWindowAttribute(HWND hwnd, DWORD dwAttribute, LPCVOID pvAttribute, DWORD cbAttribute);
DWMAPI DwmUnregisterThumbnail(HTHUMBNAIL hThumbnailId);
DWMAPI DwmUpdateThumbnailProperties(HTHUMBNAIL hThumbnailId, const DWM_THUMBNAIL_PROPERTIES *ptnProperties);
#if(_WIN32_WINNT >= 0x0601)
#define DWM_SIT_DISPLAYFRAME    0x00000001
DWMAPI DwmSetIconicThumbnail(HWND hwnd, HBITMAP hbmp, DWORD dwSITFlags);
DWMAPI DwmSetIconicLivePreviewBitmap(HWND hwnd, HBITMAP hbmp, POINT *pptClient, DWORD dwSITFlags);
DWMAPI DwmInvalidateIconicBitmaps(HWND hwnd);
#endif
DWMAPI DwmAttachMilContent(HWND hwnd);
DWMAPI DwmDetachMilContent(HWND hwnd);
DWMAPI DwmFlush();
#ifndef MILCORE_KERNEL_COMPONENT
#ifndef _MIL_MATRIX3X2D_DEFINED
typedef struct _MilMatrix3x2D
{
    DOUBLE S_11;
    DOUBLE S_12;
    DOUBLE S_21;
    DOUBLE S_22;
    DOUBLE DX;
    DOUBLE DY;
} MilMatrix3x2D;
#define _MIL_MATRIX3X2D_DEFINED
#endif
#ifndef MILCORE_MIL_MATRIX3X2D_COMPAT_TYPEDEF
typedef MilMatrix3x2D MIL_MATRIX3X2D;
#define MILCORE_MIL_MATRIX3X2D_COMPAT_TYPEDEF
#endif
DWMAPI DwmGetGraphicsStreamTransformHint(UINT uIndex, MilMatrix3x2D *pTransform);
DWMAPI DwmGetGraphicsStreamClient(UINT uIndex, UUID *pClientUuid);
#endif
DWMAPI DwmGetTransportAttributes(BOOL *pfIsRemoting, BOOL *pfIsConnected, DWORD *pDwGeneration);
#include <poppack.h>
#endif
