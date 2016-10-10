/*+@@file@@----------------------------------------------------------------*//*!
 \file		magnification.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul 18 15:03:08 2016
 \date		Modified on Mon Jul 18 15:03:08 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_MAGNIFIER
#define _INC_MAGNIFIER
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __wincodec_h__
#include <wincodec.h>
#endif
#ifdef _WIN32
#define WC_MAGNIFIERA             "Magnifier"
#define WC_MAGNIFIERW             L"Magnifier"
#ifdef UNICODE
#define WC_MAGNIFIER              WC_MAGNIFIERW
#else
#define WC_MAGNIFIER              WC_MAGNIFIERA
#endif
#else
#define WC_MAGNIFIER              "Magnifier"
#endif
#define MS_SHOWMAGNIFIEDCURSOR      0x0001L
#define MS_CLIPAROUNDCURSOR         0x0002L
#define MS_INVERTCOLORS             0x0004L
#define MW_FILTERMODE_EXCLUDE   0
#define MW_FILTERMODE_INCLUDE   1
typedef struct tagMAGTRANSFORM
{
    float v[3][3];
} MAGTRANSFORM, *PMAGTRANSFORM;
typedef struct tagMAGIMAGEHEADER
{
    UINT width;
    UINT height;
    WICPixelFormatGUID format;
    UINT stride;
    UINT offset;
    SIZE_T cbSize;
} MAGIMAGEHEADER, *PMAGIMAGEHEADER;
typedef struct tagMAGCOLOREFFECT
{
    float transform[5][5];
} MAGCOLOREFFECT, *PMAGCOLOREFFECT;
typedef BOOL (CALLBACK* MagImageScalingCallback)(HWND hwnd, void * srcdata, MAGIMAGEHEADER srcheader, void * destdata, MAGIMAGEHEADER destheader, RECT unclipped, RECT clipped, HRGN dirty );
BOOL WINAPI MagInitialize(void);
BOOL WINAPI MagUninitialize(void);
BOOL WINAPI MagSetWindowSource(HWND hwnd, RECT rect);
BOOL WINAPI MagGetWindowSource(HWND hwnd, RECT *pRect);
BOOL WINAPI MagSetWindowTransform(HWND hwnd, PMAGTRANSFORM pTransform);
BOOL WINAPI MagGetWindowTransform(HWND hwnd, PMAGTRANSFORM pTransform);
BOOL WINAPI MagSetWindowFilterList(HWND hwnd, DWORD dwFilterMode, int count, HWND *pHWND );
int  WINAPI MagGetWindowFilterList(HWND hwnd, DWORD *pdwFilterMode, int count, HWND *pHWND );
BOOL WINAPI MagSetImageScalingCallback(HWND hwnd, MagImageScalingCallback callback );
MagImageScalingCallback WINAPI MagGetImageScalingCallback(HWND hwnd );
BOOL WINAPI MagSetColorEffect(HWND hwnd, PMAGCOLOREFFECT pEffect);
BOOL WINAPI MagGetColorEffect(HWND hwnd, PMAGCOLOREFFECT pEffect);
#endif
