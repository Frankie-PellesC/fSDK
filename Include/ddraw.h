/*+@@file@@----------------------------------------------------------------*//*!
 \file		ddraw.h
 \par Description 
            DirectDraw
 \par  Status: 
            
 \par Project: 
			PellesC Headers extension
 \date		Created  on Sun Mar 15 00:02:11 2015
 \date		Modified on Sun Mar 15 00:02:11 2015
 \author	Frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef __DDRAW_INCLUDED__
#define __DDRAW_INCLUDED__
#if __POCC__ >= 500
#pragma once
#endif
#undef ENABLE_NAMELESS_UNION_PRAGMA
#ifdef DIRECTX_REDIST
#define ENABLE_NAMELESS_UNION_PRAGMA
#endif
#ifdef ENABLE_NAMELESS_UNION_PRAGMA
#pragma warning(disable:4201)
#endif
#ifndef   DIRECTDRAW_VERSION
#define   DIRECTDRAW_VERSION 0x0700
#endif
#if defined( _WIN32 )  && !defined( _NO_COM )
#define COM_NO_WINDOWS_H
#include <objbase.h>
#else
#define IUnknown            void
#if !defined( NT_BUILD_ENVIRONMENT ) && !defined(WINNT)
        #define CO_E_NOTINITIALIZED 0x800401F0L
#endif
#endif
#define _FACDD  0x876
#define MAKE_DDHRESULT( code )  MAKE_HRESULT( 1, _FACDD, code )
#ifndef DUMMYUNIONNAMEN
#if defined(__cplusplus) || !defined(NONAMELESSUNION)
#define DUMMYUNIONNAMEN(n)
#else
#define DUMMYUNIONNAMEN(n)      u##n
#endif
#endif
#ifndef MAKEFOURCC
    #define MAKEFOURCC(ch0, ch1, ch2, ch3)                              \
                ((DWORD)(BYTE)(ch0) | ((DWORD)(BYTE)(ch1) << 8) |   \
                ((DWORD)(BYTE)(ch2) << 16) | ((DWORD)(BYTE)(ch3) << 24 ))
#endif
#define FOURCC_DXT1  (MAKEFOURCC('D','X','T','1'))
#define FOURCC_DXT2  (MAKEFOURCC('D','X','T','2'))
#define FOURCC_DXT3  (MAKEFOURCC('D','X','T','3'))
#define FOURCC_DXT4  (MAKEFOURCC('D','X','T','4'))
#define FOURCC_DXT5  (MAKEFOURCC('D','X','T','5'))
#if defined( _WIN32 ) && !defined( _NO_COM )
DEFINE_GUID( CLSID_DirectDraw,                  0xD7B70EE0,0x4340,0x11CF,0xB0,0x63,0x00,0x20,0xAF,0xC2,0xCD,0x35 );
DEFINE_GUID( CLSID_DirectDraw7,                 0x3c305196,0x50db,0x11d3,0x9c,0xfe,0x00,0xc0,0x4f,0xd9,0x30,0xc5 );
DEFINE_GUID( CLSID_DirectDrawClipper,           0x593817A0,0x7DB3,0x11CF,0xA2,0xDE,0x00,0xAA,0x00,0xb9,0x33,0x56 );
DEFINE_GUID( IID_IDirectDraw,                   0x6C14DB80,0xA733,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60 );
DEFINE_GUID( IID_IDirectDraw2,                  0xB3A6F3E0,0x2B43,0x11CF,0xA2,0xDE,0x00,0xAA,0x00,0xB9,0x33,0x56 );
DEFINE_GUID( IID_IDirectDraw4,                  0x9c59509a,0x39bd,0x11d1,0x8c,0x4a,0x00,0xc0,0x4f,0xd9,0x30,0xc5 );
DEFINE_GUID( IID_IDirectDraw7,                  0x15e65ec0,0x3b9c,0x11d2,0xb9,0x2f,0x00,0x60,0x97,0x97,0xea,0x5b );
DEFINE_GUID( IID_IDirectDrawSurface,            0x6C14DB81,0xA733,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60 );
DEFINE_GUID( IID_IDirectDrawSurface2,           0x57805885,0x6eec,0x11cf,0x94,0x41,0xa8,0x23,0x03,0xc1,0x0e,0x27 );
DEFINE_GUID( IID_IDirectDrawSurface3,           0xDA044E00,0x69B2,0x11D0,0xA1,0xD5,0x00,0xAA,0x00,0xB8,0xDF,0xBB );
DEFINE_GUID( IID_IDirectDrawSurface4,           0x0B2B8630,0xAD35,0x11D0,0x8E,0xA6,0x00,0x60,0x97,0x97,0xEA,0x5B );
DEFINE_GUID( IID_IDirectDrawSurface7,           0x06675a80,0x3b9b,0x11d2,0xb9,0x2f,0x00,0x60,0x97,0x97,0xea,0x5b );
DEFINE_GUID( IID_IDirectDrawPalette,            0x6C14DB84,0xA733,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60 );
DEFINE_GUID( IID_IDirectDrawClipper,            0x6C14DB85,0xA733,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60 );
DEFINE_GUID( IID_IDirectDrawColorControl,       0x4B9F0EE0,0x0D7E,0x11D0,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8 );
DEFINE_GUID( IID_IDirectDrawGammaControl,       0x69C11C3E,0xB46B,0x11D1,0xAD,0x7A,0x00,0xC0,0x4F,0xC2,0x9B,0x4E );
#endif
struct IDirectDraw;
struct IDirectDrawSurface;
struct IDirectDrawPalette;
struct IDirectDrawClipper;
typedef struct IDirectDraw              FAR *LPDIRECTDRAW;
typedef struct IDirectDraw2             FAR *LPDIRECTDRAW2;
typedef struct IDirectDraw4             FAR *LPDIRECTDRAW4;
typedef struct IDirectDraw7             FAR *LPDIRECTDRAW7;
typedef struct IDirectDrawSurface       FAR *LPDIRECTDRAWSURFACE;
typedef struct IDirectDrawSurface2      FAR *LPDIRECTDRAWSURFACE2;
typedef struct IDirectDrawSurface3      FAR *LPDIRECTDRAWSURFACE3;
typedef struct IDirectDrawSurface4      FAR *LPDIRECTDRAWSURFACE4;
typedef struct IDirectDrawSurface7      FAR *LPDIRECTDRAWSURFACE7;
typedef struct IDirectDrawPalette               FAR *LPDIRECTDRAWPALETTE;
typedef struct IDirectDrawClipper               FAR *LPDIRECTDRAWCLIPPER;
typedef struct IDirectDrawColorControl          FAR *LPDIRECTDRAWCOLORCONTROL;
typedef struct IDirectDrawGammaControl          FAR *LPDIRECTDRAWGAMMACONTROL;
typedef struct _DDFXROP                 FAR *LPDDFXROP;
typedef struct _DDSURFACEDESC           FAR *LPDDSURFACEDESC;
typedef struct _DDSURFACEDESC2          FAR *LPDDSURFACEDESC2;
typedef struct _DDCOLORCONTROL          FAR *LPDDCOLORCONTROL;
#if (defined (WIN32) || defined( _WIN32 ) ) && !defined( _NO_COM )
    typedef BOOL (FAR PASCAL * LPDDENUMCALLBACKA)(GUID FAR *, LPSTR, LPSTR, LPVOID);
    typedef BOOL (FAR PASCAL * LPDDENUMCALLBACKW)(GUID FAR *, LPWSTR, LPWSTR, LPVOID);
    extern HRESULT WINAPI DirectDrawEnumerateW( LPDDENUMCALLBACKW lpCallback, LPVOID lpContext );
    extern HRESULT WINAPI DirectDrawEnumerateA( LPDDENUMCALLBACKA lpCallback, LPVOID lpContext );
    #if !defined(HMONITOR_DECLARED) && (WINVER < 0x0500)
        #define HMONITOR_DECLARED
        DECLARE_HANDLE(HMONITOR);
    #endif
    typedef BOOL (FAR PASCAL * LPDDENUMCALLBACKEXA)(GUID FAR *, LPSTR, LPSTR, LPVOID, HMONITOR);
    typedef BOOL (FAR PASCAL * LPDDENUMCALLBACKEXW)(GUID FAR *, LPWSTR, LPWSTR, LPVOID, HMONITOR);
    extern HRESULT WINAPI DirectDrawEnumerateExW( LPDDENUMCALLBACKEXW lpCallback, LPVOID lpContext, DWORD dwFlags);
    extern HRESULT WINAPI DirectDrawEnumerateExA( LPDDENUMCALLBACKEXA lpCallback, LPVOID lpContext, DWORD dwFlags);
    typedef HRESULT (WINAPI * LPDIRECTDRAWENUMERATEEXA)( LPDDENUMCALLBACKEXA lpCallback, LPVOID lpContext, DWORD dwFlags);
    typedef HRESULT (WINAPI * LPDIRECTDRAWENUMERATEEXW)( LPDDENUMCALLBACKEXW lpCallback, LPVOID lpContext, DWORD dwFlags);
    #ifdef UNICODE
        typedef LPDDENUMCALLBACKW           LPDDENUMCALLBACK;
        #define DirectDrawEnumerate         DirectDrawEnumerateW
        typedef LPDDENUMCALLBACKEXW         LPDDENUMCALLBACKEX;
        typedef LPDIRECTDRAWENUMERATEEXW        LPDIRECTDRAWENUMERATEEX;
        #define DirectDrawEnumerateEx       DirectDrawEnumerateExW
    #else
        typedef LPDDENUMCALLBACKA           LPDDENUMCALLBACK;
        #define DirectDrawEnumerate         DirectDrawEnumerateA
        typedef LPDDENUMCALLBACKEXA         LPDDENUMCALLBACKEX;
        typedef LPDIRECTDRAWENUMERATEEXA        LPDIRECTDRAWENUMERATEEX;
        #define DirectDrawEnumerateEx       DirectDrawEnumerateExA
    #endif
    extern HRESULT WINAPI DirectDrawCreate( GUID FAR *lpGUID, LPDIRECTDRAW FAR *lplpDD, IUnknown FAR *pUnkOuter );
    extern HRESULT WINAPI DirectDrawCreateEx( GUID FAR * lpGuid, LPVOID  *lplpDD, REFIID  iid,IUnknown FAR *pUnkOuter );
    extern HRESULT WINAPI DirectDrawCreateClipper( DWORD dwFlags, LPDIRECTDRAWCLIPPER FAR *lplpDDClipper, IUnknown FAR *pUnkOuter );
#endif
#define DDENUM_ATTACHEDSECONDARYDEVICES     0x00000001L
#define DDENUM_DETACHEDSECONDARYDEVICES     0x00000002L
#define DDENUM_NONDISPLAYDEVICES            0x00000004L
#define REGSTR_KEY_DDHW_DESCRIPTION     "Description"
#define REGSTR_KEY_DDHW_DRIVERNAME      "DriverName"
#define REGSTR_PATH_DDHW                "Hardware\\DirectDrawDrivers"
#define DDCREATE_HARDWAREONLY           0x00000001l
#define DDCREATE_EMULATIONONLY          0x00000002l
#if defined(WINNT) || !defined(WIN32)
#ifndef _HRESULT_DEFINED
#define _HRESULT_DEFINED
typedef __success(return >= 0) long HRESULT;
#endif
#endif
typedef HRESULT (FAR PASCAL * LPDDENUMMODESCALLBACK)(LPDDSURFACEDESC, LPVOID);
typedef HRESULT (FAR PASCAL * LPDDENUMMODESCALLBACK2)(LPDDSURFACEDESC2, LPVOID);
typedef HRESULT (FAR PASCAL * LPDDENUMSURFACESCALLBACK)(LPDIRECTDRAWSURFACE, LPDDSURFACEDESC, LPVOID);
typedef HRESULT (FAR PASCAL * LPDDENUMSURFACESCALLBACK2)(LPDIRECTDRAWSURFACE4, LPDDSURFACEDESC2, LPVOID);
typedef HRESULT (FAR PASCAL * LPDDENUMSURFACESCALLBACK7)(LPDIRECTDRAWSURFACE7, LPDDSURFACEDESC2, LPVOID);
typedef struct _DDARGB
{
    BYTE blue;
    BYTE green;
    BYTE red;
    BYTE alpha;
} DDARGB;
typedef DDARGB FAR *LPDDARGB;
typedef struct _DDRGBA
{
    BYTE red;
    BYTE green;
    BYTE blue;
    BYTE alpha;
} DDRGBA;
typedef DDRGBA FAR *LPDDRGBA;
typedef struct _DDCOLORKEY
{
    DWORD       dwColorSpaceLowValue;
    DWORD       dwColorSpaceHighValue;
} DDCOLORKEY;
typedef DDCOLORKEY FAR* LPDDCOLORKEY;
typedef struct _DDBLTFX
{
    DWORD       dwSize;
    DWORD       dwDDFX;
    DWORD       dwROP;
    DWORD       dwDDROP;
    DWORD       dwRotationAngle;
    DWORD       dwZBufferOpCode;
    DWORD       dwZBufferLow;
    DWORD       dwZBufferHigh;
    DWORD       dwZBufferBaseDest;
    DWORD       dwZDestConstBitDepth;
    union
    {
        DWORD   dwZDestConst;
        LPDIRECTDRAWSURFACE lpDDSZBufferDest;
    } DUMMYUNIONNAMEN(1);
    DWORD       dwZSrcConstBitDepth;
    union
    {
        DWORD   dwZSrcConst;
        LPDIRECTDRAWSURFACE lpDDSZBufferSrc;
    } DUMMYUNIONNAMEN(2);
    DWORD       dwAlphaEdgeBlendBitDepth;
    DWORD       dwAlphaEdgeBlend;
    DWORD       dwReserved;
    DWORD       dwAlphaDestConstBitDepth;
    union
    {
        DWORD   dwAlphaDestConst;
        LPDIRECTDRAWSURFACE lpDDSAlphaDest;
    } DUMMYUNIONNAMEN(3);
    DWORD       dwAlphaSrcConstBitDepth;
    union
    {
        DWORD   dwAlphaSrcConst;
        LPDIRECTDRAWSURFACE lpDDSAlphaSrc;
    } DUMMYUNIONNAMEN(4);
    union
    {
        DWORD   dwFillColor;
        DWORD   dwFillDepth;
        DWORD   dwFillPixel;
        LPDIRECTDRAWSURFACE lpDDSPattern;
    } DUMMYUNIONNAMEN(5);
    DDCOLORKEY  ddckDestColorkey;
    DDCOLORKEY  ddckSrcColorkey;
} DDBLTFX;
typedef DDBLTFX FAR* LPDDBLTFX;
typedef struct _DDSCAPS
{
    DWORD       dwCaps;
} DDSCAPS;
typedef DDSCAPS FAR* LPDDSCAPS;
typedef struct _DDOSCAPS
{
    DWORD       dwCaps;
} DDOSCAPS;
typedef DDOSCAPS FAR* LPDDOSCAPS;
typedef struct _DDSCAPSEX
{
    DWORD       dwCaps2;
    DWORD       dwCaps3;
    union
    {
        DWORD       dwCaps4;
        DWORD       dwVolumeDepth;
    } DUMMYUNIONNAMEN(1);
} DDSCAPSEX, FAR * LPDDSCAPSEX;
typedef struct _DDSCAPS2
{
    DWORD       dwCaps;
    DWORD       dwCaps2;
    DWORD       dwCaps3;
    union
    {
        DWORD       dwCaps4;
        DWORD       dwVolumeDepth;
    } DUMMYUNIONNAMEN(1);
} DDSCAPS2;
typedef DDSCAPS2 FAR* LPDDSCAPS2;
#define DD_ROP_SPACE            (256/32)
typedef struct _DDCAPS_DX1
{
    DWORD       dwSize;
    DWORD       dwCaps;
    DWORD       dwCaps2;
    DWORD       dwCKeyCaps;
    DWORD       dwFXCaps;
    DWORD       dwFXAlphaCaps;
    DWORD       dwPalCaps;
    DWORD       dwSVCaps;
    DWORD       dwAlphaBltConstBitDepths;
    DWORD       dwAlphaBltPixelBitDepths;
    DWORD       dwAlphaBltSurfaceBitDepths;
    DWORD       dwAlphaOverlayConstBitDepths;
    DWORD       dwAlphaOverlayPixelBitDepths;
    DWORD       dwAlphaOverlaySurfaceBitDepths;
    DWORD       dwZBufferBitDepths;
    DWORD       dwVidMemTotal;
    DWORD       dwVidMemFree;
    DWORD       dwMaxVisibleOverlays;
    DWORD       dwCurrVisibleOverlays;
    DWORD       dwNumFourCCCodes;
    DWORD       dwAlignBoundarySrc;
    DWORD       dwAlignSizeSrc;
    DWORD       dwAlignBoundaryDest;
    DWORD       dwAlignSizeDest;
    DWORD       dwAlignStrideAlign;
    DWORD       dwRops[DD_ROP_SPACE];
    DDSCAPS     ddsCaps;
    DWORD       dwMinOverlayStretch;
    DWORD       dwMaxOverlayStretch;
    DWORD       dwMinLiveVideoStretch;
    DWORD       dwMaxLiveVideoStretch;
    DWORD       dwMinHwCodecStretch;
    DWORD       dwMaxHwCodecStretch;
    DWORD       dwReserved1;
    DWORD       dwReserved2;
    DWORD       dwReserved3;
} DDCAPS_DX1;
typedef DDCAPS_DX1 FAR* LPDDCAPS_DX1;
typedef struct _DDCAPS_DX3
{
    DWORD       dwSize;
    DWORD       dwCaps;
    DWORD       dwCaps2;
    DWORD       dwCKeyCaps;
    DWORD       dwFXCaps;
    DWORD       dwFXAlphaCaps;
    DWORD       dwPalCaps;
    DWORD       dwSVCaps;
    DWORD       dwAlphaBltConstBitDepths;
    DWORD       dwAlphaBltPixelBitDepths;
    DWORD       dwAlphaBltSurfaceBitDepths;
    DWORD       dwAlphaOverlayConstBitDepths;
    DWORD       dwAlphaOverlayPixelBitDepths;
    DWORD       dwAlphaOverlaySurfaceBitDepths;
    DWORD       dwZBufferBitDepths;
    DWORD       dwVidMemTotal;
    DWORD       dwVidMemFree;
    DWORD       dwMaxVisibleOverlays;
    DWORD       dwCurrVisibleOverlays;
    DWORD       dwNumFourCCCodes;
    DWORD       dwAlignBoundarySrc;
    DWORD       dwAlignSizeSrc;
    DWORD       dwAlignBoundaryDest;
    DWORD       dwAlignSizeDest;
    DWORD       dwAlignStrideAlign;
    DWORD       dwRops[DD_ROP_SPACE];
    DDSCAPS     ddsCaps;
    DWORD       dwMinOverlayStretch;
    DWORD       dwMaxOverlayStretch;
    DWORD       dwMinLiveVideoStretch;
    DWORD       dwMaxLiveVideoStretch;
    DWORD       dwMinHwCodecStretch;
    DWORD       dwMaxHwCodecStretch;
    DWORD       dwReserved1;
    DWORD       dwReserved2;
    DWORD       dwReserved3;
    DWORD       dwSVBCaps;
    DWORD       dwSVBCKeyCaps;
    DWORD       dwSVBFXCaps;
    DWORD       dwSVBRops[DD_ROP_SPACE];
    DWORD       dwVSBCaps;
    DWORD       dwVSBCKeyCaps;
    DWORD       dwVSBFXCaps;
    DWORD       dwVSBRops[DD_ROP_SPACE];
    DWORD       dwSSBCaps;
    DWORD       dwSSBCKeyCaps;
    DWORD       dwSSBFXCaps;
    DWORD       dwSSBRops[DD_ROP_SPACE];
    DWORD       dwReserved4;
    DWORD       dwReserved5;
    DWORD       dwReserved6;
} DDCAPS_DX3;
typedef DDCAPS_DX3 FAR* LPDDCAPS_DX3;
typedef struct _DDCAPS_DX5
{
 DWORD   dwSize;
 DWORD   dwCaps;
 DWORD   dwCaps2;
 DWORD   dwCKeyCaps;
 DWORD   dwFXCaps;
 DWORD   dwFXAlphaCaps;
 DWORD   dwPalCaps;
 DWORD   dwSVCaps;
 DWORD   dwAlphaBltConstBitDepths;
 DWORD   dwAlphaBltPixelBitDepths;
 DWORD   dwAlphaBltSurfaceBitDepths;
 DWORD   dwAlphaOverlayConstBitDepths;
 DWORD   dwAlphaOverlayPixelBitDepths;
 DWORD   dwAlphaOverlaySurfaceBitDepths;
 DWORD   dwZBufferBitDepths;
 DWORD   dwVidMemTotal;
 DWORD   dwVidMemFree;
 DWORD   dwMaxVisibleOverlays;
 DWORD   dwCurrVisibleOverlays;
 DWORD   dwNumFourCCCodes;
 DWORD   dwAlignBoundarySrc;
 DWORD   dwAlignSizeSrc;
 DWORD   dwAlignBoundaryDest;
 DWORD   dwAlignSizeDest;
 DWORD   dwAlignStrideAlign;
 DWORD   dwRops[DD_ROP_SPACE];
 DDSCAPS ddsCaps;
 DWORD   dwMinOverlayStretch;
 DWORD   dwMaxOverlayStretch;
 DWORD   dwMinLiveVideoStretch;
 DWORD   dwMaxLiveVideoStretch;
 DWORD   dwMinHwCodecStretch;
 DWORD   dwMaxHwCodecStretch;
 DWORD   dwReserved1;
 DWORD   dwReserved2;
 DWORD   dwReserved3;
 DWORD   dwSVBCaps;
 DWORD   dwSVBCKeyCaps;
 DWORD   dwSVBFXCaps;
 DWORD   dwSVBRops[DD_ROP_SPACE];
 DWORD   dwVSBCaps;
 DWORD   dwVSBCKeyCaps;
 DWORD   dwVSBFXCaps;
 DWORD   dwVSBRops[DD_ROP_SPACE];
 DWORD   dwSSBCaps;
 DWORD   dwSSBCKeyCaps;
 DWORD   dwSSBFXCaps;
 DWORD   dwSSBRops[DD_ROP_SPACE];
 DWORD   dwMaxVideoPorts;
 DWORD   dwCurrVideoPorts;
 DWORD   dwSVBCaps2;
 DWORD   dwNLVBCaps;
 DWORD   dwNLVBCaps2;
 DWORD   dwNLVBCKeyCaps;
 DWORD   dwNLVBFXCaps;
 DWORD   dwNLVBRops[DD_ROP_SPACE];
} DDCAPS_DX5;
typedef DDCAPS_DX5 FAR* LPDDCAPS_DX5;
typedef struct _DDCAPS_DX6
{
 DWORD   dwSize;
 DWORD   dwCaps;
 DWORD   dwCaps2;
 DWORD   dwCKeyCaps;
 DWORD   dwFXCaps;
 DWORD   dwFXAlphaCaps;
 DWORD   dwPalCaps;
 DWORD   dwSVCaps;
 DWORD   dwAlphaBltConstBitDepths;
 DWORD   dwAlphaBltPixelBitDepths;
 DWORD   dwAlphaBltSurfaceBitDepths;
 DWORD   dwAlphaOverlayConstBitDepths;
 DWORD   dwAlphaOverlayPixelBitDepths;
 DWORD   dwAlphaOverlaySurfaceBitDepths;
 DWORD   dwZBufferBitDepths;
 DWORD   dwVidMemTotal;
 DWORD   dwVidMemFree;
 DWORD   dwMaxVisibleOverlays;
 DWORD   dwCurrVisibleOverlays;
 DWORD   dwNumFourCCCodes;
 DWORD   dwAlignBoundarySrc;
 DWORD   dwAlignSizeSrc;
 DWORD   dwAlignBoundaryDest;
 DWORD   dwAlignSizeDest;
 DWORD   dwAlignStrideAlign;
 DWORD   dwRops[DD_ROP_SPACE];
 DDSCAPS ddsOldCaps;
 DWORD   dwMinOverlayStretch;
 DWORD   dwMaxOverlayStretch;
 DWORD   dwMinLiveVideoStretch;
 DWORD   dwMaxLiveVideoStretch;
 DWORD   dwMinHwCodecStretch;
 DWORD   dwMaxHwCodecStretch;
 DWORD   dwReserved1;
 DWORD   dwReserved2;
 DWORD   dwReserved3;
 DWORD   dwSVBCaps;
 DWORD   dwSVBCKeyCaps;
 DWORD   dwSVBFXCaps;
 DWORD   dwSVBRops[DD_ROP_SPACE];
 DWORD   dwVSBCaps;
 DWORD   dwVSBCKeyCaps;
 DWORD   dwVSBFXCaps;
 DWORD   dwVSBRops[DD_ROP_SPACE];
 DWORD   dwSSBCaps;
 DWORD   dwSSBCKeyCaps;
 DWORD   dwSSBFXCaps;
 DWORD   dwSSBRops[DD_ROP_SPACE];
 DWORD   dwMaxVideoPorts;
 DWORD   dwCurrVideoPorts;
 DWORD   dwSVBCaps2;
 DWORD   dwNLVBCaps;
 DWORD   dwNLVBCaps2;
 DWORD   dwNLVBCKeyCaps;
 DWORD   dwNLVBFXCaps;
 DWORD   dwNLVBRops[DD_ROP_SPACE];
 DDSCAPS2 ddsCaps;
} DDCAPS_DX6;
typedef DDCAPS_DX6 FAR* LPDDCAPS_DX6;
typedef struct _DDCAPS_DX7
{
 DWORD   dwSize;
 DWORD   dwCaps;
 DWORD   dwCaps2;
 DWORD   dwCKeyCaps;
 DWORD   dwFXCaps;
 DWORD   dwFXAlphaCaps;
 DWORD   dwPalCaps;
 DWORD   dwSVCaps;
 DWORD   dwAlphaBltConstBitDepths;
 DWORD   dwAlphaBltPixelBitDepths;
 DWORD   dwAlphaBltSurfaceBitDepths;
 DWORD   dwAlphaOverlayConstBitDepths;
 DWORD   dwAlphaOverlayPixelBitDepths;
 DWORD   dwAlphaOverlaySurfaceBitDepths;
 DWORD   dwZBufferBitDepths;
 DWORD   dwVidMemTotal;
 DWORD   dwVidMemFree;
 DWORD   dwMaxVisibleOverlays;
 DWORD   dwCurrVisibleOverlays;
 DWORD   dwNumFourCCCodes;
 DWORD   dwAlignBoundarySrc;
 DWORD   dwAlignSizeSrc;
 DWORD   dwAlignBoundaryDest;
 DWORD   dwAlignSizeDest;
 DWORD   dwAlignStrideAlign;
 DWORD   dwRops[DD_ROP_SPACE];
 DDSCAPS ddsOldCaps;
 DWORD   dwMinOverlayStretch;
 DWORD   dwMaxOverlayStretch;
 DWORD   dwMinLiveVideoStretch;
 DWORD   dwMaxLiveVideoStretch;
 DWORD   dwMinHwCodecStretch;
 DWORD   dwMaxHwCodecStretch;
 DWORD   dwReserved1;
 DWORD   dwReserved2;
 DWORD   dwReserved3;
 DWORD   dwSVBCaps;
 DWORD   dwSVBCKeyCaps;
 DWORD   dwSVBFXCaps;
 DWORD   dwSVBRops[DD_ROP_SPACE];
 DWORD   dwVSBCaps;
 DWORD   dwVSBCKeyCaps;
 DWORD   dwVSBFXCaps;
 DWORD   dwVSBRops[DD_ROP_SPACE];
 DWORD   dwSSBCaps;
 DWORD   dwSSBCKeyCaps;
 DWORD   dwSSBFXCaps;
 DWORD   dwSSBRops[DD_ROP_SPACE];
 DWORD   dwMaxVideoPorts;
 DWORD   dwCurrVideoPorts;
 DWORD   dwSVBCaps2;
 DWORD   dwNLVBCaps;
 DWORD   dwNLVBCaps2;
 DWORD   dwNLVBCKeyCaps;
 DWORD   dwNLVBFXCaps;
 DWORD   dwNLVBRops[DD_ROP_SPACE];
 DDSCAPS2 ddsCaps;
} DDCAPS_DX7;
typedef DDCAPS_DX7 FAR* LPDDCAPS_DX7;
#if DIRECTDRAW_VERSION <= 0x300
    typedef DDCAPS_DX3 DDCAPS;
#elif DIRECTDRAW_VERSION <= 0x500
    typedef DDCAPS_DX5 DDCAPS;
#elif DIRECTDRAW_VERSION <= 0x600
    typedef DDCAPS_DX6 DDCAPS;
#else
    typedef DDCAPS_DX7 DDCAPS;
#endif
typedef DDCAPS FAR* LPDDCAPS;
typedef struct _DDPIXELFORMAT
{
    DWORD       dwSize;
    DWORD       dwFlags;
    DWORD       dwFourCC;
    union
    {
        DWORD   dwRGBBitCount;
        DWORD   dwYUVBitCount;
        DWORD   dwZBufferBitDepth;
        DWORD   dwAlphaBitDepth;
        DWORD   dwLuminanceBitCount;
        DWORD   dwBumpBitCount;
        DWORD   dwPrivateFormatBitCount;
    } DUMMYUNIONNAMEN(1);
    union
    {
        DWORD   dwRBitMask;
        DWORD   dwYBitMask;
        DWORD   dwStencilBitDepth;
        DWORD   dwLuminanceBitMask;
        DWORD   dwBumpDuBitMask;
        DWORD   dwOperations;
    } DUMMYUNIONNAMEN(2);
    union
    {
        DWORD   dwGBitMask;
        DWORD   dwUBitMask;
        DWORD   dwZBitMask;
        DWORD   dwBumpDvBitMask;
        struct
        {
            WORD    wFlipMSTypes;
            WORD    wBltMSTypes;
        } MultiSampleCaps;
    } DUMMYUNIONNAMEN(3);
    union
    {
        DWORD   dwBBitMask;
        DWORD   dwVBitMask;
        DWORD   dwStencilBitMask;
        DWORD   dwBumpLuminanceBitMask;
    } DUMMYUNIONNAMEN(4);
    union
    {
        DWORD   dwRGBAlphaBitMask;
        DWORD   dwYUVAlphaBitMask;
        DWORD   dwLuminanceAlphaBitMask;
        DWORD   dwRGBZBitMask;
        DWORD   dwYUVZBitMask;
    } DUMMYUNIONNAMEN(5);
} DDPIXELFORMAT;
typedef DDPIXELFORMAT FAR* LPDDPIXELFORMAT;
typedef struct _DDOVERLAYFX
{
    DWORD       dwSize;
    DWORD       dwAlphaEdgeBlendBitDepth;
    DWORD       dwAlphaEdgeBlend;
    DWORD       dwReserved;
    DWORD       dwAlphaDestConstBitDepth;
    union
    {
        DWORD   dwAlphaDestConst;
        LPDIRECTDRAWSURFACE lpDDSAlphaDest;
    } DUMMYUNIONNAMEN(1);
    DWORD       dwAlphaSrcConstBitDepth;
    union
    {
        DWORD   dwAlphaSrcConst;
        LPDIRECTDRAWSURFACE lpDDSAlphaSrc;
    } DUMMYUNIONNAMEN(2);
    DDCOLORKEY  dckDestColorkey;
    DDCOLORKEY  dckSrcColorkey;
    DWORD       dwDDFX;
    DWORD       dwFlags;
} DDOVERLAYFX;
typedef DDOVERLAYFX FAR *LPDDOVERLAYFX;
typedef struct _DDBLTBATCH
{
    LPRECT              lprDest;
    LPDIRECTDRAWSURFACE lpDDSSrc;
    LPRECT              lprSrc;
    DWORD               dwFlags;
    LPDDBLTFX           lpDDBltFx;
} DDBLTBATCH;
typedef DDBLTBATCH FAR * LPDDBLTBATCH;
typedef struct _DDGAMMARAMP
{
    WORD                red[256];
    WORD                green[256];
    WORD                blue[256];
} DDGAMMARAMP;
typedef DDGAMMARAMP FAR * LPDDGAMMARAMP;
#define MAX_DDDEVICEID_STRING           512
typedef struct tagDDDEVICEIDENTIFIER
{
    char    szDriver[MAX_DDDEVICEID_STRING];
    char    szDescription[MAX_DDDEVICEID_STRING];
#ifdef _WIN32
    LARGE_INTEGER liDriverVersion;
#else
    DWORD   dwDriverVersionLowPart;
    DWORD   dwDriverVersionHighPart;
#endif
    DWORD   dwVendorId;
    DWORD   dwDeviceId;
    DWORD   dwSubSysId;
    DWORD   dwRevision;
    GUID    guidDeviceIdentifier;
} DDDEVICEIDENTIFIER, * LPDDDEVICEIDENTIFIER;
typedef struct tagDDDEVICEIDENTIFIER2
{
    char    szDriver[MAX_DDDEVICEID_STRING];
    char    szDescription[MAX_DDDEVICEID_STRING];
#ifdef _WIN32
    LARGE_INTEGER liDriverVersion;
#else
    DWORD   dwDriverVersionLowPart;
    DWORD   dwDriverVersionHighPart;
#endif
    DWORD   dwVendorId;
    DWORD   dwDeviceId;
    DWORD   dwSubSysId;
    DWORD   dwRevision;
    GUID    guidDeviceIdentifier;
    DWORD   dwWHQLLevel;
} DDDEVICEIDENTIFIER2, * LPDDDEVICEIDENTIFIER2;
#define DDGDI_GETHOSTIDENTIFIER         0x00000001L
#define GET_WHQL_YEAR( dwWHQLLevel ) \
    ( (dwWHQLLevel) / 0x10000 )
#define GET_WHQL_MONTH( dwWHQLLevel ) \
    ( ( (dwWHQLLevel) / 0x100 ) & 0x00ff )
#define GET_WHQL_DAY( dwWHQLLevel ) \
    ( (dwWHQLLevel) & 0xff )
typedef DWORD   (FAR PASCAL *LPCLIPPERCALLBACK)(LPDIRECTDRAWCLIPPER lpDDClipper, HWND hWnd, DWORD code, LPVOID lpContext );
#ifdef STREAMING
typedef DWORD   (FAR PASCAL *LPSURFACESTREAMINGCALLBACK)(DWORD);
#endif
#if defined( _WIN32 ) && !defined( _NO_COM )
#undef INTERFACE
#define INTERFACE IDirectDraw
DECLARE_INTERFACE_( IDirectDraw, IUnknown )
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
    STDMETHOD_(ULONG,AddRef) (THIS);
    STDMETHOD_(ULONG,Release) (THIS);
    STDMETHOD(Compact)(THIS);
    STDMETHOD(CreateClipper)(THIS_ DWORD, LPDIRECTDRAWCLIPPER FAR*, IUnknown FAR * );
    STDMETHOD(CreatePalette)(THIS_ DWORD, LPPALETTEENTRY, LPDIRECTDRAWPALETTE FAR*, IUnknown FAR * );
    STDMETHOD(CreateSurface)(THIS_  LPDDSURFACEDESC, LPDIRECTDRAWSURFACE FAR *, IUnknown FAR *);
    STDMETHOD(DuplicateSurface)( THIS_ LPDIRECTDRAWSURFACE, LPDIRECTDRAWSURFACE FAR * );
    STDMETHOD(EnumDisplayModes)( THIS_ DWORD, LPDDSURFACEDESC, LPVOID, LPDDENUMMODESCALLBACK );
    STDMETHOD(EnumSurfaces)(THIS_ DWORD, LPDDSURFACEDESC, LPVOID,LPDDENUMSURFACESCALLBACK );
    STDMETHOD(FlipToGDISurface)(THIS);
    STDMETHOD(GetCaps)( THIS_ LPDDCAPS, LPDDCAPS);
    STDMETHOD(GetDisplayMode)( THIS_ LPDDSURFACEDESC);
    STDMETHOD(GetFourCCCodes)(THIS_  LPDWORD, LPDWORD );
    STDMETHOD(GetGDISurface)(THIS_ LPDIRECTDRAWSURFACE FAR *);
    STDMETHOD(GetMonitorFrequency)(THIS_ LPDWORD);
    STDMETHOD(GetScanLine)(THIS_ LPDWORD);
    STDMETHOD(GetVerticalBlankStatus)(THIS_ LPBOOL );
    STDMETHOD(Initialize)(THIS_ GUID FAR *);
    STDMETHOD(RestoreDisplayMode)(THIS);
    STDMETHOD(SetCooperativeLevel)(THIS_ HWND, DWORD);
    STDMETHOD(SetDisplayMode)(THIS_ DWORD, DWORD,DWORD);
    STDMETHOD(WaitForVerticalBlank)(THIS_ DWORD, HANDLE );
};

#define IDirectDraw_QueryInterface(p, a, b)         (p)->lpVtbl->QueryInterface(p, a, b)
#define IDirectDraw_AddRef(p)                       (p)->lpVtbl->AddRef(p)
#define IDirectDraw_Release(p)                      (p)->lpVtbl->Release(p)
#define IDirectDraw_Compact(p)                      (p)->lpVtbl->Compact(p)
#define IDirectDraw_CreateClipper(p, a, b, c)       (p)->lpVtbl->CreateClipper(p, a, b, c)
#define IDirectDraw_CreatePalette(p, a, b, c, d)    (p)->lpVtbl->CreatePalette(p, a, b, c, d)
#define IDirectDraw_CreateSurface(p, a, b, c)       (p)->lpVtbl->CreateSurface(p, a, b, c)
#define IDirectDraw_DuplicateSurface(p, a, b)       (p)->lpVtbl->DuplicateSurface(p, a, b)
#define IDirectDraw_EnumDisplayModes(p, a, b, c, d) (p)->lpVtbl->EnumDisplayModes(p, a, b, c, d)
#define IDirectDraw_EnumSurfaces(p, a, b, c, d)     (p)->lpVtbl->EnumSurfaces(p, a, b, c, d)
#define IDirectDraw_FlipToGDISurface(p)             (p)->lpVtbl->FlipToGDISurface(p)
#define IDirectDraw_GetCaps(p, a, b)                (p)->lpVtbl->GetCaps(p, a, b)
#define IDirectDraw_GetDisplayMode(p, a)            (p)->lpVtbl->GetDisplayMode(p, a)
#define IDirectDraw_GetFourCCCodes(p, a, b)         (p)->lpVtbl->GetFourCCCodes(p, a, b)
#define IDirectDraw_GetGDISurface(p, a)             (p)->lpVtbl->GetGDISurface(p, a)
#define IDirectDraw_GetMonitorFrequency(p, a)       (p)->lpVtbl->GetMonitorFrequency(p, a)
#define IDirectDraw_GetScanLine(p, a)               (p)->lpVtbl->GetScanLine(p, a)
#define IDirectDraw_GetVerticalBlankStatus(p, a)    (p)->lpVtbl->GetVerticalBlankStatus(p, a)
#define IDirectDraw_Initialize(p, a)                (p)->lpVtbl->Initialize(p, a)
#define IDirectDraw_RestoreDisplayMode(p)           (p)->lpVtbl->RestoreDisplayMode(p)
#define IDirectDraw_SetCooperativeLevel(p, a, b)    (p)->lpVtbl->SetCooperativeLevel(p, a, b)
#define IDirectDraw_SetDisplayMode(p, a, b, c)      (p)->lpVtbl->SetDisplayMode(p, a, b, c)
#define IDirectDraw_WaitForVerticalBlank(p, a, b)   (p)->lpVtbl->WaitForVerticalBlank(p, a, b)
#endif
#if defined( _WIN32 ) && !defined( _NO_COM )
#undef INTERFACE
#define INTERFACE IDirectDraw2
DECLARE_INTERFACE_( IDirectDraw2, IUnknown )
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
    STDMETHOD_(ULONG,AddRef) (THIS);
    STDMETHOD_(ULONG,Release) (THIS);
    STDMETHOD(Compact)(THIS);
    STDMETHOD(CreateClipper)(THIS_ DWORD, LPDIRECTDRAWCLIPPER FAR*, IUnknown FAR * );
    STDMETHOD(CreatePalette)(THIS_ DWORD, LPPALETTEENTRY, LPDIRECTDRAWPALETTE FAR*, IUnknown FAR * );
    STDMETHOD(CreateSurface)(THIS_  LPDDSURFACEDESC, LPDIRECTDRAWSURFACE FAR *, IUnknown FAR *);
    STDMETHOD(DuplicateSurface)( THIS_ LPDIRECTDRAWSURFACE, LPDIRECTDRAWSURFACE FAR * );
    STDMETHOD(EnumDisplayModes)( THIS_ DWORD, LPDDSURFACEDESC, LPVOID, LPDDENUMMODESCALLBACK );
    STDMETHOD(EnumSurfaces)(THIS_ DWORD, LPDDSURFACEDESC, LPVOID,LPDDENUMSURFACESCALLBACK );
    STDMETHOD(FlipToGDISurface)(THIS);
    STDMETHOD(GetCaps)( THIS_ LPDDCAPS, LPDDCAPS);
    STDMETHOD(GetDisplayMode)( THIS_ LPDDSURFACEDESC);
    STDMETHOD(GetFourCCCodes)(THIS_  LPDWORD, LPDWORD );
    STDMETHOD(GetGDISurface)(THIS_ LPDIRECTDRAWSURFACE FAR *);
    STDMETHOD(GetMonitorFrequency)(THIS_ LPDWORD);
    STDMETHOD(GetScanLine)(THIS_ LPDWORD);
    STDMETHOD(GetVerticalBlankStatus)(THIS_ LPBOOL );
    STDMETHOD(Initialize)(THIS_ GUID FAR *);
    STDMETHOD(RestoreDisplayMode)(THIS);
    STDMETHOD(SetCooperativeLevel)(THIS_ HWND, DWORD);
    STDMETHOD(SetDisplayMode)(THIS_ DWORD, DWORD,DWORD, DWORD, DWORD);
    STDMETHOD(WaitForVerticalBlank)(THIS_ DWORD, HANDLE );
    STDMETHOD(GetAvailableVidMem)(THIS_ LPDDSCAPS, LPDWORD, LPDWORD);
};
#define IDirectDraw2_QueryInterface(p, a, b)         (p)->lpVtbl->QueryInterface(p, a, b)
#define IDirectDraw2_AddRef(p)                       (p)->lpVtbl->AddRef(p)
#define IDirectDraw2_Release(p)                      (p)->lpVtbl->Release(p)
#define IDirectDraw2_Compact(p)                      (p)->lpVtbl->Compact(p)
#define IDirectDraw2_CreateClipper(p, a, b, c)       (p)->lpVtbl->CreateClipper(p, a, b, c)
#define IDirectDraw2_CreatePalette(p, a, b, c, d)    (p)->lpVtbl->CreatePalette(p, a, b, c, d)
#define IDirectDraw2_CreateSurface(p, a, b, c)       (p)->lpVtbl->CreateSurface(p, a, b, c)
#define IDirectDraw2_DuplicateSurface(p, a, b)       (p)->lpVtbl->DuplicateSurface(p, a, b)
#define IDirectDraw2_EnumDisplayModes(p, a, b, c, d) (p)->lpVtbl->EnumDisplayModes(p, a, b, c, d)
#define IDirectDraw2_EnumSurfaces(p, a, b, c, d)     (p)->lpVtbl->EnumSurfaces(p, a, b, c, d)
#define IDirectDraw2_FlipToGDISurface(p)             (p)->lpVtbl->FlipToGDISurface(p)
#define IDirectDraw2_GetCaps(p, a, b)                (p)->lpVtbl->GetCaps(p, a, b)
#define IDirectDraw2_GetDisplayMode(p, a)            (p)->lpVtbl->GetDisplayMode(p, a)
#define IDirectDraw2_GetFourCCCodes(p, a, b)         (p)->lpVtbl->GetFourCCCodes(p, a, b)
#define IDirectDraw2_GetGDISurface(p, a)             (p)->lpVtbl->GetGDISurface(p, a)
#define IDirectDraw2_GetMonitorFrequency(p, a)       (p)->lpVtbl->GetMonitorFrequency(p, a)
#define IDirectDraw2_GetScanLine(p, a)               (p)->lpVtbl->GetScanLine(p, a)
#define IDirectDraw2_GetVerticalBlankStatus(p, a)    (p)->lpVtbl->GetVerticalBlankStatus(p, a)
#define IDirectDraw2_Initialize(p, a)                (p)->lpVtbl->Initialize(p, a)
#define IDirectDraw2_RestoreDisplayMode(p)           (p)->lpVtbl->RestoreDisplayMode(p)
#define IDirectDraw2_SetCooperativeLevel(p, a, b)    (p)->lpVtbl->SetCooperativeLevel(p, a, b)
#define IDirectDraw2_SetDisplayMode(p, a, b, c, d, e) (p)->lpVtbl->SetDisplayMode(p, a, b, c, d, e)
#define IDirectDraw2_WaitForVerticalBlank(p, a, b)   (p)->lpVtbl->WaitForVerticalBlank(p, a, b)
#define IDirectDraw2_GetAvailableVidMem(p, a, b, c)  (p)->lpVtbl->GetAvailableVidMem(p, a, b, c)
#endif
#if defined( _WIN32 ) && !defined( _NO_COM )
#undef INTERFACE
#define INTERFACE IDirectDraw4
DECLARE_INTERFACE_( IDirectDraw4, IUnknown )
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
    STDMETHOD_(ULONG,AddRef) (THIS);
    STDMETHOD_(ULONG,Release) (THIS);
    STDMETHOD(Compact)(THIS);
    STDMETHOD(CreateClipper)(THIS_ DWORD, LPDIRECTDRAWCLIPPER FAR*, IUnknown FAR * );
    STDMETHOD(CreatePalette)(THIS_ DWORD, LPPALETTEENTRY, LPDIRECTDRAWPALETTE FAR*, IUnknown FAR * );
    STDMETHOD(CreateSurface)(THIS_  LPDDSURFACEDESC2, LPDIRECTDRAWSURFACE4 FAR *, IUnknown FAR *);
    STDMETHOD(DuplicateSurface)( THIS_ LPDIRECTDRAWSURFACE4, LPDIRECTDRAWSURFACE4 FAR * );
    STDMETHOD(EnumDisplayModes)( THIS_ DWORD, LPDDSURFACEDESC2, LPVOID, LPDDENUMMODESCALLBACK2 );
    STDMETHOD(EnumSurfaces)(THIS_ DWORD, LPDDSURFACEDESC2, LPVOID,LPDDENUMSURFACESCALLBACK2 );
    STDMETHOD(FlipToGDISurface)(THIS);
    STDMETHOD(GetCaps)( THIS_ LPDDCAPS, LPDDCAPS);
    STDMETHOD(GetDisplayMode)( THIS_ LPDDSURFACEDESC2);
    STDMETHOD(GetFourCCCodes)(THIS_  LPDWORD, LPDWORD );
    STDMETHOD(GetGDISurface)(THIS_ LPDIRECTDRAWSURFACE4 FAR *);
    STDMETHOD(GetMonitorFrequency)(THIS_ LPDWORD);
    STDMETHOD(GetScanLine)(THIS_ LPDWORD);
    STDMETHOD(GetVerticalBlankStatus)(THIS_ LPBOOL );
    STDMETHOD(Initialize)(THIS_ GUID FAR *);
    STDMETHOD(RestoreDisplayMode)(THIS);
    STDMETHOD(SetCooperativeLevel)(THIS_ HWND, DWORD);
    STDMETHOD(SetDisplayMode)(THIS_ DWORD, DWORD,DWORD, DWORD, DWORD);
    STDMETHOD(WaitForVerticalBlank)(THIS_ DWORD, HANDLE );
    STDMETHOD(GetAvailableVidMem)(THIS_ LPDDSCAPS2, LPDWORD, LPDWORD);
    STDMETHOD(GetSurfaceFromDC) (THIS_ HDC, LPDIRECTDRAWSURFACE4 *);
    STDMETHOD(RestoreAllSurfaces)(THIS);
    STDMETHOD(TestCooperativeLevel)(THIS);
    STDMETHOD(GetDeviceIdentifier)(THIS_ LPDDDEVICEIDENTIFIER, DWORD );
};
#define IDirectDraw4_QueryInterface(p, a, b)         (p)->lpVtbl->QueryInterface(p, a, b)
#define IDirectDraw4_AddRef(p)                       (p)->lpVtbl->AddRef(p)
#define IDirectDraw4_Release(p)                      (p)->lpVtbl->Release(p)
#define IDirectDraw4_Compact(p)                      (p)->lpVtbl->Compact(p)
#define IDirectDraw4_CreateClipper(p, a, b, c)       (p)->lpVtbl->CreateClipper(p, a, b, c)
#define IDirectDraw4_CreatePalette(p, a, b, c, d)    (p)->lpVtbl->CreatePalette(p, a, b, c, d)
#define IDirectDraw4_CreateSurface(p, a, b, c)       (p)->lpVtbl->CreateSurface(p, a, b, c)
#define IDirectDraw4_DuplicateSurface(p, a, b)       (p)->lpVtbl->DuplicateSurface(p, a, b)
#define IDirectDraw4_EnumDisplayModes(p, a, b, c, d) (p)->lpVtbl->EnumDisplayModes(p, a, b, c, d)
#define IDirectDraw4_EnumSurfaces(p, a, b, c, d)     (p)->lpVtbl->EnumSurfaces(p, a, b, c, d)
#define IDirectDraw4_FlipToGDISurface(p)             (p)->lpVtbl->FlipToGDISurface(p)
#define IDirectDraw4_GetCaps(p, a, b)                (p)->lpVtbl->GetCaps(p, a, b)
#define IDirectDraw4_GetDisplayMode(p, a)            (p)->lpVtbl->GetDisplayMode(p, a)
#define IDirectDraw4_GetFourCCCodes(p, a, b)         (p)->lpVtbl->GetFourCCCodes(p, a, b)
#define IDirectDraw4_GetGDISurface(p, a)             (p)->lpVtbl->GetGDISurface(p, a)
#define IDirectDraw4_GetMonitorFrequency(p, a)       (p)->lpVtbl->GetMonitorFrequency(p, a)
#define IDirectDraw4_GetScanLine(p, a)               (p)->lpVtbl->GetScanLine(p, a)
#define IDirectDraw4_GetVerticalBlankStatus(p, a)    (p)->lpVtbl->GetVerticalBlankStatus(p, a)
#define IDirectDraw4_Initialize(p, a)                (p)->lpVtbl->Initialize(p, a)
#define IDirectDraw4_RestoreDisplayMode(p)           (p)->lpVtbl->RestoreDisplayMode(p)
#define IDirectDraw4_SetCooperativeLevel(p, a, b)    (p)->lpVtbl->SetCooperativeLevel(p, a, b)
#define IDirectDraw4_SetDisplayMode(p, a, b, c, d, e) (p)->lpVtbl->SetDisplayMode(p, a, b, c, d, e)
#define IDirectDraw4_WaitForVerticalBlank(p, a, b)   (p)->lpVtbl->WaitForVerticalBlank(p, a, b)
#define IDirectDraw4_GetAvailableVidMem(p, a, b, c)  (p)->lpVtbl->GetAvailableVidMem(p, a, b, c)
#define IDirectDraw4_GetSurfaceFromDC(p, a, b)       (p)->lpVtbl->GetSurfaceFromDC(p, a, b)
#define IDirectDraw4_RestoreAllSurfaces(p)           (p)->lpVtbl->RestoreAllSurfaces(p)
#define IDirectDraw4_TestCooperativeLevel(p)         (p)->lpVtbl->TestCooperativeLevel(p)
#define IDirectDraw4_GetDeviceIdentifier(p,a,b)      (p)->lpVtbl->GetDeviceIdentifier(p,a,b)
#endif
#if defined( _WIN32 ) && !defined( _NO_COM )
#undef INTERFACE
#define INTERFACE IDirectDraw7
DECLARE_INTERFACE_( IDirectDraw7, IUnknown )
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
    STDMETHOD_(ULONG,AddRef) (THIS);
    STDMETHOD_(ULONG,Release) (THIS);
    STDMETHOD(Compact)(THIS);
    STDMETHOD(CreateClipper)(THIS_ DWORD, LPDIRECTDRAWCLIPPER FAR*, IUnknown FAR * );
    STDMETHOD(CreatePalette)(THIS_ DWORD, LPPALETTEENTRY, LPDIRECTDRAWPALETTE FAR*, IUnknown FAR * );
    STDMETHOD(CreateSurface)(THIS_  LPDDSURFACEDESC2, LPDIRECTDRAWSURFACE7 FAR *, IUnknown FAR *);
    STDMETHOD(DuplicateSurface)( THIS_ LPDIRECTDRAWSURFACE7, LPDIRECTDRAWSURFACE7 FAR * );
    STDMETHOD(EnumDisplayModes)( THIS_ DWORD, LPDDSURFACEDESC2, LPVOID, LPDDENUMMODESCALLBACK2 );
    STDMETHOD(EnumSurfaces)(THIS_ DWORD, LPDDSURFACEDESC2, LPVOID,LPDDENUMSURFACESCALLBACK7 );
    STDMETHOD(FlipToGDISurface)(THIS);
    STDMETHOD(GetCaps)( THIS_ LPDDCAPS, LPDDCAPS);
    STDMETHOD(GetDisplayMode)( THIS_ LPDDSURFACEDESC2);
    STDMETHOD(GetFourCCCodes)(THIS_  LPDWORD, LPDWORD );
    STDMETHOD(GetGDISurface)(THIS_ LPDIRECTDRAWSURFACE7 FAR *);
    STDMETHOD(GetMonitorFrequency)(THIS_ LPDWORD);
    STDMETHOD(GetScanLine)(THIS_ LPDWORD);
    STDMETHOD(GetVerticalBlankStatus)(THIS_ LPBOOL );
    STDMETHOD(Initialize)(THIS_ GUID FAR *);
    STDMETHOD(RestoreDisplayMode)(THIS);
    STDMETHOD(SetCooperativeLevel)(THIS_ HWND, DWORD);
    STDMETHOD(SetDisplayMode)(THIS_ DWORD, DWORD,DWORD, DWORD, DWORD);
    STDMETHOD(WaitForVerticalBlank)(THIS_ DWORD, HANDLE );
    STDMETHOD(GetAvailableVidMem)(THIS_ LPDDSCAPS2, LPDWORD, LPDWORD);
    STDMETHOD(GetSurfaceFromDC) (THIS_ HDC, LPDIRECTDRAWSURFACE7 *);
    STDMETHOD(RestoreAllSurfaces)(THIS);
    STDMETHOD(TestCooperativeLevel)(THIS);
    STDMETHOD(GetDeviceIdentifier)(THIS_ LPDDDEVICEIDENTIFIER2, DWORD );
    STDMETHOD(StartModeTest)(THIS_ LPSIZE, DWORD, DWORD );
    STDMETHOD(EvaluateMode)(THIS_ DWORD, DWORD * );
};
#define IDirectDraw7_QueryInterface(p, a, b)         (p)->lpVtbl->QueryInterface(p, a, b)
#define IDirectDraw7_AddRef(p)                       (p)->lpVtbl->AddRef(p)
#define IDirectDraw7_Release(p)                      (p)->lpVtbl->Release(p)
#define IDirectDraw7_Compact(p)                      (p)->lpVtbl->Compact(p)
#define IDirectDraw7_CreateClipper(p, a, b, c)       (p)->lpVtbl->CreateClipper(p, a, b, c)
#define IDirectDraw7_CreatePalette(p, a, b, c, d)    (p)->lpVtbl->CreatePalette(p, a, b, c, d)
#define IDirectDraw7_CreateSurface(p, a, b, c)       (p)->lpVtbl->CreateSurface(p, a, b, c)
#define IDirectDraw7_DuplicateSurface(p, a, b)       (p)->lpVtbl->DuplicateSurface(p, a, b)
#define IDirectDraw7_EnumDisplayModes(p, a, b, c, d) (p)->lpVtbl->EnumDisplayModes(p, a, b, c, d)
#define IDirectDraw7_EnumSurfaces(p, a, b, c, d)     (p)->lpVtbl->EnumSurfaces(p, a, b, c, d)
#define IDirectDraw7_FlipToGDISurface(p)             (p)->lpVtbl->FlipToGDISurface(p)
#define IDirectDraw7_GetCaps(p, a, b)                (p)->lpVtbl->GetCaps(p, a, b)
#define IDirectDraw7_GetDisplayMode(p, a)            (p)->lpVtbl->GetDisplayMode(p, a)
#define IDirectDraw7_GetFourCCCodes(p, a, b)         (p)->lpVtbl->GetFourCCCodes(p, a, b)
#define IDirectDraw7_GetGDISurface(p, a)             (p)->lpVtbl->GetGDISurface(p, a)
#define IDirectDraw7_GetMonitorFrequency(p, a)       (p)->lpVtbl->GetMonitorFrequency(p, a)
#define IDirectDraw7_GetScanLine(p, a)               (p)->lpVtbl->GetScanLine(p, a)
#define IDirectDraw7_GetVerticalBlankStatus(p, a)    (p)->lpVtbl->GetVerticalBlankStatus(p, a)
#define IDirectDraw7_Initialize(p, a)                (p)->lpVtbl->Initialize(p, a)
#define IDirectDraw7_RestoreDisplayMode(p)           (p)->lpVtbl->RestoreDisplayMode(p)
#define IDirectDraw7_SetCooperativeLevel(p, a, b)    (p)->lpVtbl->SetCooperativeLevel(p, a, b)
#define IDirectDraw7_SetDisplayMode(p, a, b, c, d, e) (p)->lpVtbl->SetDisplayMode(p, a, b, c, d, e)
#define IDirectDraw7_WaitForVerticalBlank(p, a, b)   (p)->lpVtbl->WaitForVerticalBlank(p, a, b)
#define IDirectDraw7_GetAvailableVidMem(p, a, b, c)  (p)->lpVtbl->GetAvailableVidMem(p, a, b, c)
#define IDirectDraw7_GetSurfaceFromDC(p, a, b)       (p)->lpVtbl->GetSurfaceFromDC(p, a, b)
#define IDirectDraw7_RestoreAllSurfaces(p)           (p)->lpVtbl->RestoreAllSurfaces(p)
#define IDirectDraw7_TestCooperativeLevel(p)         (p)->lpVtbl->TestCooperativeLevel(p)
#define IDirectDraw7_GetDeviceIdentifier(p,a,b)      (p)->lpVtbl->GetDeviceIdentifier(p,a,b)
#define IDirectDraw7_StartModeTest(p,a,b,c)        (p)->lpVtbl->StartModeTest(p,a,b,c)
#define IDirectDraw7_EvaluateMode(p,a,b)           (p)->lpVtbl->EvaluateMode(p,a,b)
#endif
#if defined( _WIN32 ) && !defined( _NO_COM )
#undef INTERFACE
#define INTERFACE IDirectDrawPalette
DECLARE_INTERFACE_( IDirectDrawPalette, IUnknown )
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
    STDMETHOD_(ULONG,AddRef) (THIS);
    STDMETHOD_(ULONG,Release) (THIS);
    STDMETHOD(GetCaps)(THIS_ LPDWORD);
    STDMETHOD(GetEntries)(THIS_ DWORD,DWORD,DWORD,LPPALETTEENTRY);
    STDMETHOD(Initialize)(THIS_ LPDIRECTDRAW, DWORD, LPPALETTEENTRY);
    STDMETHOD(SetEntries)(THIS_ DWORD,DWORD,DWORD,LPPALETTEENTRY);
};
#define IDirectDrawPalette_QueryInterface(p, a, b)      (p)->lpVtbl->QueryInterface(p, a, b)
#define IDirectDrawPalette_AddRef(p)                    (p)->lpVtbl->AddRef(p)
#define IDirectDrawPalette_Release(p)                   (p)->lpVtbl->Release(p)
#define IDirectDrawPalette_GetCaps(p, a)                (p)->lpVtbl->GetCaps(p, a)
#define IDirectDrawPalette_GetEntries(p, a, b, c, d)    (p)->lpVtbl->GetEntries(p, a, b, c, d)
#define IDirectDrawPalette_Initialize(p, a, b, c)       (p)->lpVtbl->Initialize(p, a, b, c)
#define IDirectDrawPalette_SetEntries(p, a, b, c, d)    (p)->lpVtbl->SetEntries(p, a, b, c, d)
#endif
#if defined( _WIN32 ) && !defined( _NO_COM )
#undef INTERFACE
#define INTERFACE IDirectDrawClipper
DECLARE_INTERFACE_( IDirectDrawClipper, IUnknown )
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
    STDMETHOD_(ULONG,AddRef) (THIS);
    STDMETHOD_(ULONG,Release) (THIS);
    STDMETHOD(GetClipList)(THIS_ LPRECT, LPRGNDATA, LPDWORD);
    STDMETHOD(GetHWnd)(THIS_ HWND FAR *);
    STDMETHOD(Initialize)(THIS_ LPDIRECTDRAW, DWORD);
    STDMETHOD(IsClipListChanged)(THIS_ BOOL FAR *);
    STDMETHOD(SetClipList)(THIS_ LPRGNDATA,DWORD);
    STDMETHOD(SetHWnd)(THIS_ DWORD, HWND );
};
#define IDirectDrawClipper_QueryInterface(p, a, b)  (p)->lpVtbl->QueryInterface(p, a, b)
#define IDirectDrawClipper_AddRef(p)                (p)->lpVtbl->AddRef(p)
#define IDirectDrawClipper_Release(p)               (p)->lpVtbl->Release(p)
#define IDirectDrawClipper_GetClipList(p, a, b, c)  (p)->lpVtbl->GetClipList(p, a, b, c)
#define IDirectDrawClipper_GetHWnd(p, a)            (p)->lpVtbl->GetHWnd(p, a)
#define IDirectDrawClipper_Initialize(p, a, b)      (p)->lpVtbl->Initialize(p, a, b)
#define IDirectDrawClipper_IsClipListChanged(p, a)  (p)->lpVtbl->IsClipListChanged(p, a)
#define IDirectDrawClipper_SetClipList(p, a, b)     (p)->lpVtbl->SetClipList(p, a, b)
#define IDirectDrawClipper_SetHWnd(p, a, b)         (p)->lpVtbl->SetHWnd(p, a, b)
#endif
#if defined( _WIN32 ) && !defined( _NO_COM )
#undef INTERFACE
#define INTERFACE IDirectDrawSurface
DECLARE_INTERFACE_( IDirectDrawSurface, IUnknown )
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
    STDMETHOD_(ULONG,AddRef) (THIS);
    STDMETHOD_(ULONG,Release) (THIS);
    STDMETHOD(AddAttachedSurface)(THIS_ LPDIRECTDRAWSURFACE);
    STDMETHOD(AddOverlayDirtyRect)(THIS_ LPRECT);
    STDMETHOD(Blt)(THIS_ LPRECT,LPDIRECTDRAWSURFACE, LPRECT,DWORD, LPDDBLTFX);
    STDMETHOD(BltBatch)(THIS_ LPDDBLTBATCH, DWORD, DWORD );
    STDMETHOD(BltFast)(THIS_ DWORD,DWORD,LPDIRECTDRAWSURFACE, LPRECT,DWORD);
    STDMETHOD(DeleteAttachedSurface)(THIS_ DWORD,LPDIRECTDRAWSURFACE);
    STDMETHOD(EnumAttachedSurfaces)(THIS_ LPVOID,LPDDENUMSURFACESCALLBACK);
    STDMETHOD(EnumOverlayZOrders)(THIS_ DWORD,LPVOID,LPDDENUMSURFACESCALLBACK);
    STDMETHOD(Flip)(THIS_ LPDIRECTDRAWSURFACE, DWORD);
    STDMETHOD(GetAttachedSurface)(THIS_ LPDDSCAPS, LPDIRECTDRAWSURFACE FAR *);
    STDMETHOD(GetBltStatus)(THIS_ DWORD);
    STDMETHOD(GetCaps)(THIS_ LPDDSCAPS);
    STDMETHOD(GetClipper)(THIS_ LPDIRECTDRAWCLIPPER FAR*);
    STDMETHOD(GetColorKey)(THIS_ DWORD, LPDDCOLORKEY);
    STDMETHOD(GetDC)(THIS_ HDC FAR *);
    STDMETHOD(GetFlipStatus)(THIS_ DWORD);
    STDMETHOD(GetOverlayPosition)(THIS_ LPLONG, LPLONG );
    STDMETHOD(GetPalette)(THIS_ LPDIRECTDRAWPALETTE FAR*);
    STDMETHOD(GetPixelFormat)(THIS_ LPDDPIXELFORMAT);
    STDMETHOD(GetSurfaceDesc)(THIS_ LPDDSURFACEDESC);
    STDMETHOD(Initialize)(THIS_ LPDIRECTDRAW, LPDDSURFACEDESC);
    STDMETHOD(IsLost)(THIS);
    STDMETHOD(Lock)(THIS_ LPRECT,LPDDSURFACEDESC,DWORD,HANDLE);
    STDMETHOD(ReleaseDC)(THIS_ HDC);
    STDMETHOD(Restore)(THIS);
    STDMETHOD(SetClipper)(THIS_ LPDIRECTDRAWCLIPPER);
    STDMETHOD(SetColorKey)(THIS_ DWORD, LPDDCOLORKEY);
    STDMETHOD(SetOverlayPosition)(THIS_ LONG, LONG );
    STDMETHOD(SetPalette)(THIS_ LPDIRECTDRAWPALETTE);
    STDMETHOD(Unlock)(THIS_ LPVOID);
    STDMETHOD(UpdateOverlay)(THIS_ LPRECT, LPDIRECTDRAWSURFACE,LPRECT,DWORD, LPDDOVERLAYFX);
    STDMETHOD(UpdateOverlayDisplay)(THIS_ DWORD);
    STDMETHOD(UpdateOverlayZOrder)(THIS_ DWORD, LPDIRECTDRAWSURFACE);
};
#define IDirectDrawSurface_QueryInterface(p,a,b)        (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirectDrawSurface_AddRef(p)                    (p)->lpVtbl->AddRef(p)
#define IDirectDrawSurface_Release(p)                   (p)->lpVtbl->Release(p)
#define IDirectDrawSurface_AddAttachedSurface(p,a)      (p)->lpVtbl->AddAttachedSurface(p,a)
#define IDirectDrawSurface_AddOverlayDirtyRect(p,a)     (p)->lpVtbl->AddOverlayDirtyRect(p,a)
#define IDirectDrawSurface_Blt(p,a,b,c,d,e)             (p)->lpVtbl->Blt(p,a,b,c,d,e)
#define IDirectDrawSurface_BltBatch(p,a,b,c)            (p)->lpVtbl->BltBatch(p,a,b,c)
#define IDirectDrawSurface_BltFast(p,a,b,c,d,e)         (p)->lpVtbl->BltFast(p,a,b,c,d,e)
#define IDirectDrawSurface_DeleteAttachedSurface(p,a,b) (p)->lpVtbl->DeleteAttachedSurface(p,a,b)
#define IDirectDrawSurface_EnumAttachedSurfaces(p,a,b)  (p)->lpVtbl->EnumAttachedSurfaces(p,a,b)
#define IDirectDrawSurface_EnumOverlayZOrders(p,a,b,c)  (p)->lpVtbl->EnumOverlayZOrders(p,a,b,c)
#define IDirectDrawSurface_Flip(p,a,b)                  (p)->lpVtbl->Flip(p,a,b)
#define IDirectDrawSurface_GetAttachedSurface(p,a,b)    (p)->lpVtbl->GetAttachedSurface(p,a,b)
#define IDirectDrawSurface_GetBltStatus(p,a)            (p)->lpVtbl->GetBltStatus(p,a)
#define IDirectDrawSurface_GetCaps(p,b)                 (p)->lpVtbl->GetCaps(p,b)
#define IDirectDrawSurface_GetClipper(p,a)              (p)->lpVtbl->GetClipper(p,a)
#define IDirectDrawSurface_GetColorKey(p,a,b)           (p)->lpVtbl->GetColorKey(p,a,b)
#define IDirectDrawSurface_GetDC(p,a)                   (p)->lpVtbl->GetDC(p,a)
#define IDirectDrawSurface_GetFlipStatus(p,a)           (p)->lpVtbl->GetFlipStatus(p,a)
#define IDirectDrawSurface_GetOverlayPosition(p,a,b)    (p)->lpVtbl->GetOverlayPosition(p,a,b)
#define IDirectDrawSurface_GetPalette(p,a)              (p)->lpVtbl->GetPalette(p,a)
#define IDirectDrawSurface_GetPixelFormat(p,a)          (p)->lpVtbl->GetPixelFormat(p,a)
#define IDirectDrawSurface_GetSurfaceDesc(p,a)          (p)->lpVtbl->GetSurfaceDesc(p,a)
#define IDirectDrawSurface_Initialize(p,a,b)            (p)->lpVtbl->Initialize(p,a,b)
#define IDirectDrawSurface_IsLost(p)                    (p)->lpVtbl->IsLost(p)
#define IDirectDrawSurface_Lock(p,a,b,c,d)              (p)->lpVtbl->Lock(p,a,b,c,d)
#define IDirectDrawSurface_ReleaseDC(p,a)               (p)->lpVtbl->ReleaseDC(p,a)
#define IDirectDrawSurface_Restore(p)                   (p)->lpVtbl->Restore(p)
#define IDirectDrawSurface_SetClipper(p,a)              (p)->lpVtbl->SetClipper(p,a)
#define IDirectDrawSurface_SetColorKey(p,a,b)           (p)->lpVtbl->SetColorKey(p,a,b)
#define IDirectDrawSurface_SetOverlayPosition(p,a,b)    (p)->lpVtbl->SetOverlayPosition(p,a,b)
#define IDirectDrawSurface_SetPalette(p,a)              (p)->lpVtbl->SetPalette(p,a)
#define IDirectDrawSurface_Unlock(p,b)                  (p)->lpVtbl->Unlock(p,b)
#define IDirectDrawSurface_UpdateOverlay(p,a,b,c,d,e)   (p)->lpVtbl->UpdateOverlay(p,a,b,c,d,e)
#define IDirectDrawSurface_UpdateOverlayDisplay(p,a)    (p)->lpVtbl->UpdateOverlayDisplay(p,a)
#define IDirectDrawSurface_UpdateOverlayZOrder(p,a,b)   (p)->lpVtbl->UpdateOverlayZOrder(p,a,b)
#undef INTERFACE
#define INTERFACE IDirectDrawSurface2
DECLARE_INTERFACE_( IDirectDrawSurface2, IUnknown )
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
    STDMETHOD_(ULONG,AddRef) (THIS);
    STDMETHOD_(ULONG,Release) (THIS);
    STDMETHOD(AddAttachedSurface)(THIS_ LPDIRECTDRAWSURFACE2);
    STDMETHOD(AddOverlayDirtyRect)(THIS_ LPRECT);
    STDMETHOD(Blt)(THIS_ LPRECT,LPDIRECTDRAWSURFACE2, LPRECT,DWORD, LPDDBLTFX);
    STDMETHOD(BltBatch)(THIS_ LPDDBLTBATCH, DWORD, DWORD );
    STDMETHOD(BltFast)(THIS_ DWORD,DWORD,LPDIRECTDRAWSURFACE2, LPRECT,DWORD);
    STDMETHOD(DeleteAttachedSurface)(THIS_ DWORD,LPDIRECTDRAWSURFACE2);
    STDMETHOD(EnumAttachedSurfaces)(THIS_ LPVOID,LPDDENUMSURFACESCALLBACK);
    STDMETHOD(EnumOverlayZOrders)(THIS_ DWORD,LPVOID,LPDDENUMSURFACESCALLBACK);
    STDMETHOD(Flip)(THIS_ LPDIRECTDRAWSURFACE2, DWORD);
    STDMETHOD(GetAttachedSurface)(THIS_ LPDDSCAPS, LPDIRECTDRAWSURFACE2 FAR *);
    STDMETHOD(GetBltStatus)(THIS_ DWORD);
    STDMETHOD(GetCaps)(THIS_ LPDDSCAPS);
    STDMETHOD(GetClipper)(THIS_ LPDIRECTDRAWCLIPPER FAR*);
    STDMETHOD(GetColorKey)(THIS_ DWORD, LPDDCOLORKEY);
    STDMETHOD(GetDC)(THIS_ HDC FAR *);
    STDMETHOD(GetFlipStatus)(THIS_ DWORD);
    STDMETHOD(GetOverlayPosition)(THIS_ LPLONG, LPLONG );
    STDMETHOD(GetPalette)(THIS_ LPDIRECTDRAWPALETTE FAR*);
    STDMETHOD(GetPixelFormat)(THIS_ LPDDPIXELFORMAT);
    STDMETHOD(GetSurfaceDesc)(THIS_ LPDDSURFACEDESC);
    STDMETHOD(Initialize)(THIS_ LPDIRECTDRAW, LPDDSURFACEDESC);
    STDMETHOD(IsLost)(THIS);
    STDMETHOD(Lock)(THIS_ LPRECT,LPDDSURFACEDESC,DWORD,HANDLE);
    STDMETHOD(ReleaseDC)(THIS_ HDC);
    STDMETHOD(Restore)(THIS);
    STDMETHOD(SetClipper)(THIS_ LPDIRECTDRAWCLIPPER);
    STDMETHOD(SetColorKey)(THIS_ DWORD, LPDDCOLORKEY);
    STDMETHOD(SetOverlayPosition)(THIS_ LONG, LONG );
    STDMETHOD(SetPalette)(THIS_ LPDIRECTDRAWPALETTE);
    STDMETHOD(Unlock)(THIS_ LPVOID);
    STDMETHOD(UpdateOverlay)(THIS_ LPRECT, LPDIRECTDRAWSURFACE2,LPRECT,DWORD, LPDDOVERLAYFX);
    STDMETHOD(UpdateOverlayDisplay)(THIS_ DWORD);
    STDMETHOD(UpdateOverlayZOrder)(THIS_ DWORD, LPDIRECTDRAWSURFACE2);
    STDMETHOD(GetDDInterface)(THIS_ LPVOID FAR *);
    STDMETHOD(PageLock)(THIS_ DWORD);
    STDMETHOD(PageUnlock)(THIS_ DWORD);
};
#define IDirectDrawSurface2_QueryInterface(p,a,b)        (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirectDrawSurface2_AddRef(p)                    (p)->lpVtbl->AddRef(p)
#define IDirectDrawSurface2_Release(p)                   (p)->lpVtbl->Release(p)
#define IDirectDrawSurface2_AddAttachedSurface(p,a)      (p)->lpVtbl->AddAttachedSurface(p,a)
#define IDirectDrawSurface2_AddOverlayDirtyRect(p,a)     (p)->lpVtbl->AddOverlayDirtyRect(p,a)
#define IDirectDrawSurface2_Blt(p,a,b,c,d,e)             (p)->lpVtbl->Blt(p,a,b,c,d,e)
#define IDirectDrawSurface2_BltBatch(p,a,b,c)            (p)->lpVtbl->BltBatch(p,a,b,c)
#define IDirectDrawSurface2_BltFast(p,a,b,c,d,e)         (p)->lpVtbl->BltFast(p,a,b,c,d,e)
#define IDirectDrawSurface2_DeleteAttachedSurface(p,a,b) (p)->lpVtbl->DeleteAttachedSurface(p,a,b)
#define IDirectDrawSurface2_EnumAttachedSurfaces(p,a,b)  (p)->lpVtbl->EnumAttachedSurfaces(p,a,b)
#define IDirectDrawSurface2_EnumOverlayZOrders(p,a,b,c)  (p)->lpVtbl->EnumOverlayZOrders(p,a,b,c)
#define IDirectDrawSurface2_Flip(p,a,b)                  (p)->lpVtbl->Flip(p,a,b)
#define IDirectDrawSurface2_GetAttachedSurface(p,a,b)    (p)->lpVtbl->GetAttachedSurface(p,a,b)
#define IDirectDrawSurface2_GetBltStatus(p,a)            (p)->lpVtbl->GetBltStatus(p,a)
#define IDirectDrawSurface2_GetCaps(p,b)                 (p)->lpVtbl->GetCaps(p,b)
#define IDirectDrawSurface2_GetClipper(p,a)              (p)->lpVtbl->GetClipper(p,a)
#define IDirectDrawSurface2_GetColorKey(p,a,b)           (p)->lpVtbl->GetColorKey(p,a,b)
#define IDirectDrawSurface2_GetDC(p,a)                   (p)->lpVtbl->GetDC(p,a)
#define IDirectDrawSurface2_GetFlipStatus(p,a)           (p)->lpVtbl->GetFlipStatus(p,a)
#define IDirectDrawSurface2_GetOverlayPosition(p,a,b)    (p)->lpVtbl->GetOverlayPosition(p,a,b)
#define IDirectDrawSurface2_GetPalette(p,a)              (p)->lpVtbl->GetPalette(p,a)
#define IDirectDrawSurface2_GetPixelFormat(p,a)          (p)->lpVtbl->GetPixelFormat(p,a)
#define IDirectDrawSurface2_GetSurfaceDesc(p,a)          (p)->lpVtbl->GetSurfaceDesc(p,a)
#define IDirectDrawSurface2_Initialize(p,a,b)            (p)->lpVtbl->Initialize(p,a,b)
#define IDirectDrawSurface2_IsLost(p)                    (p)->lpVtbl->IsLost(p)
#define IDirectDrawSurface2_Lock(p,a,b,c,d)              (p)->lpVtbl->Lock(p,a,b,c,d)
#define IDirectDrawSurface2_ReleaseDC(p,a)               (p)->lpVtbl->ReleaseDC(p,a)
#define IDirectDrawSurface2_Restore(p)                   (p)->lpVtbl->Restore(p)
#define IDirectDrawSurface2_SetClipper(p,a)              (p)->lpVtbl->SetClipper(p,a)
#define IDirectDrawSurface2_SetColorKey(p,a,b)           (p)->lpVtbl->SetColorKey(p,a,b)
#define IDirectDrawSurface2_SetOverlayPosition(p,a,b)    (p)->lpVtbl->SetOverlayPosition(p,a,b)
#define IDirectDrawSurface2_SetPalette(p,a)              (p)->lpVtbl->SetPalette(p,a)
#define IDirectDrawSurface2_Unlock(p,b)                  (p)->lpVtbl->Unlock(p,b)
#define IDirectDrawSurface2_UpdateOverlay(p,a,b,c,d,e)   (p)->lpVtbl->UpdateOverlay(p,a,b,c,d,e)
#define IDirectDrawSurface2_UpdateOverlayDisplay(p,a)    (p)->lpVtbl->UpdateOverlayDisplay(p,a)
#define IDirectDrawSurface2_UpdateOverlayZOrder(p,a,b)   (p)->lpVtbl->UpdateOverlayZOrder(p,a,b)
#define IDirectDrawSurface2_GetDDInterface(p,a)          (p)->lpVtbl->GetDDInterface(p,a)
#define IDirectDrawSurface2_PageLock(p,a)                (p)->lpVtbl->PageLock(p,a)
#define IDirectDrawSurface2_PageUnlock(p,a)              (p)->lpVtbl->PageUnlock(p,a)
#undef INTERFACE
#define INTERFACE IDirectDrawSurface3
DECLARE_INTERFACE_( IDirectDrawSurface3, IUnknown )
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
    STDMETHOD_(ULONG,AddRef) (THIS);
    STDMETHOD_(ULONG,Release) (THIS);
    STDMETHOD(AddAttachedSurface)(THIS_ LPDIRECTDRAWSURFACE3);
    STDMETHOD(AddOverlayDirtyRect)(THIS_ LPRECT);
    STDMETHOD(Blt)(THIS_ LPRECT,LPDIRECTDRAWSURFACE3, LPRECT,DWORD, LPDDBLTFX);
    STDMETHOD(BltBatch)(THIS_ LPDDBLTBATCH, DWORD, DWORD );
    STDMETHOD(BltFast)(THIS_ DWORD,DWORD,LPDIRECTDRAWSURFACE3, LPRECT,DWORD);
    STDMETHOD(DeleteAttachedSurface)(THIS_ DWORD,LPDIRECTDRAWSURFACE3);
    STDMETHOD(EnumAttachedSurfaces)(THIS_ LPVOID,LPDDENUMSURFACESCALLBACK);
    STDMETHOD(EnumOverlayZOrders)(THIS_ DWORD,LPVOID,LPDDENUMSURFACESCALLBACK);
    STDMETHOD(Flip)(THIS_ LPDIRECTDRAWSURFACE3, DWORD);
    STDMETHOD(GetAttachedSurface)(THIS_ LPDDSCAPS, LPDIRECTDRAWSURFACE3 FAR *);
    STDMETHOD(GetBltStatus)(THIS_ DWORD);
    STDMETHOD(GetCaps)(THIS_ LPDDSCAPS);
    STDMETHOD(GetClipper)(THIS_ LPDIRECTDRAWCLIPPER FAR*);
    STDMETHOD(GetColorKey)(THIS_ DWORD, LPDDCOLORKEY);
    STDMETHOD(GetDC)(THIS_ HDC FAR *);
    STDMETHOD(GetFlipStatus)(THIS_ DWORD);
    STDMETHOD(GetOverlayPosition)(THIS_ LPLONG, LPLONG );
    STDMETHOD(GetPalette)(THIS_ LPDIRECTDRAWPALETTE FAR*);
    STDMETHOD(GetPixelFormat)(THIS_ LPDDPIXELFORMAT);
    STDMETHOD(GetSurfaceDesc)(THIS_ LPDDSURFACEDESC);
    STDMETHOD(Initialize)(THIS_ LPDIRECTDRAW, LPDDSURFACEDESC);
    STDMETHOD(IsLost)(THIS);
    STDMETHOD(Lock)(THIS_ LPRECT,LPDDSURFACEDESC,DWORD,HANDLE);
    STDMETHOD(ReleaseDC)(THIS_ HDC);
    STDMETHOD(Restore)(THIS);
    STDMETHOD(SetClipper)(THIS_ LPDIRECTDRAWCLIPPER);
    STDMETHOD(SetColorKey)(THIS_ DWORD, LPDDCOLORKEY);
    STDMETHOD(SetOverlayPosition)(THIS_ LONG, LONG );
    STDMETHOD(SetPalette)(THIS_ LPDIRECTDRAWPALETTE);
    STDMETHOD(Unlock)(THIS_ LPVOID);
    STDMETHOD(UpdateOverlay)(THIS_ LPRECT, LPDIRECTDRAWSURFACE3,LPRECT,DWORD, LPDDOVERLAYFX);
    STDMETHOD(UpdateOverlayDisplay)(THIS_ DWORD);
    STDMETHOD(UpdateOverlayZOrder)(THIS_ DWORD, LPDIRECTDRAWSURFACE3);
    STDMETHOD(GetDDInterface)(THIS_ LPVOID FAR *);
    STDMETHOD(PageLock)(THIS_ DWORD);
    STDMETHOD(PageUnlock)(THIS_ DWORD);
    STDMETHOD(SetSurfaceDesc)(THIS_ LPDDSURFACEDESC, DWORD);
};
#define IDirectDrawSurface3_QueryInterface(p,a,b)        (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirectDrawSurface3_AddRef(p)                    (p)->lpVtbl->AddRef(p)
#define IDirectDrawSurface3_Release(p)                   (p)->lpVtbl->Release(p)
#define IDirectDrawSurface3_AddAttachedSurface(p,a)      (p)->lpVtbl->AddAttachedSurface(p,a)
#define IDirectDrawSurface3_AddOverlayDirtyRect(p,a)     (p)->lpVtbl->AddOverlayDirtyRect(p,a)
#define IDirectDrawSurface3_Blt(p,a,b,c,d,e)             (p)->lpVtbl->Blt(p,a,b,c,d,e)
#define IDirectDrawSurface3_BltBatch(p,a,b,c)            (p)->lpVtbl->BltBatch(p,a,b,c)
#define IDirectDrawSurface3_BltFast(p,a,b,c,d,e)         (p)->lpVtbl->BltFast(p,a,b,c,d,e)
#define IDirectDrawSurface3_DeleteAttachedSurface(p,a,b) (p)->lpVtbl->DeleteAttachedSurface(p,a,b)
#define IDirectDrawSurface3_EnumAttachedSurfaces(p,a,b)  (p)->lpVtbl->EnumAttachedSurfaces(p,a,b)
#define IDirectDrawSurface3_EnumOverlayZOrders(p,a,b,c)  (p)->lpVtbl->EnumOverlayZOrders(p,a,b,c)
#define IDirectDrawSurface3_Flip(p,a,b)                  (p)->lpVtbl->Flip(p,a,b)
#define IDirectDrawSurface3_GetAttachedSurface(p,a,b)    (p)->lpVtbl->GetAttachedSurface(p,a,b)
#define IDirectDrawSurface3_GetBltStatus(p,a)            (p)->lpVtbl->GetBltStatus(p,a)
#define IDirectDrawSurface3_GetCaps(p,b)                 (p)->lpVtbl->GetCaps(p,b)
#define IDirectDrawSurface3_GetClipper(p,a)              (p)->lpVtbl->GetClipper(p,a)
#define IDirectDrawSurface3_GetColorKey(p,a,b)           (p)->lpVtbl->GetColorKey(p,a,b)
#define IDirectDrawSurface3_GetDC(p,a)                   (p)->lpVtbl->GetDC(p,a)
#define IDirectDrawSurface3_GetFlipStatus(p,a)           (p)->lpVtbl->GetFlipStatus(p,a)
#define IDirectDrawSurface3_GetOverlayPosition(p,a,b)    (p)->lpVtbl->GetOverlayPosition(p,a,b)
#define IDirectDrawSurface3_GetPalette(p,a)              (p)->lpVtbl->GetPalette(p,a)
#define IDirectDrawSurface3_GetPixelFormat(p,a)          (p)->lpVtbl->GetPixelFormat(p,a)
#define IDirectDrawSurface3_GetSurfaceDesc(p,a)          (p)->lpVtbl->GetSurfaceDesc(p,a)
#define IDirectDrawSurface3_Initialize(p,a,b)            (p)->lpVtbl->Initialize(p,a,b)
#define IDirectDrawSurface3_IsLost(p)                    (p)->lpVtbl->IsLost(p)
#define IDirectDrawSurface3_Lock(p,a,b,c,d)              (p)->lpVtbl->Lock(p,a,b,c,d)
#define IDirectDrawSurface3_ReleaseDC(p,a)               (p)->lpVtbl->ReleaseDC(p,a)
#define IDirectDrawSurface3_Restore(p)                   (p)->lpVtbl->Restore(p)
#define IDirectDrawSurface3_SetClipper(p,a)              (p)->lpVtbl->SetClipper(p,a)
#define IDirectDrawSurface3_SetColorKey(p,a,b)           (p)->lpVtbl->SetColorKey(p,a,b)
#define IDirectDrawSurface3_SetOverlayPosition(p,a,b)    (p)->lpVtbl->SetOverlayPosition(p,a,b)
#define IDirectDrawSurface3_SetPalette(p,a)              (p)->lpVtbl->SetPalette(p,a)
#define IDirectDrawSurface3_Unlock(p,b)                  (p)->lpVtbl->Unlock(p,b)
#define IDirectDrawSurface3_UpdateOverlay(p,a,b,c,d,e)   (p)->lpVtbl->UpdateOverlay(p,a,b,c,d,e)
#define IDirectDrawSurface3_UpdateOverlayDisplay(p,a)    (p)->lpVtbl->UpdateOverlayDisplay(p,a)
#define IDirectDrawSurface3_UpdateOverlayZOrder(p,a,b)   (p)->lpVtbl->UpdateOverlayZOrder(p,a,b)
#define IDirectDrawSurface3_GetDDInterface(p,a)          (p)->lpVtbl->GetDDInterface(p,a)
#define IDirectDrawSurface3_PageLock(p,a)                (p)->lpVtbl->PageLock(p,a)
#define IDirectDrawSurface3_PageUnlock(p,a)              (p)->lpVtbl->PageUnlock(p,a)
#define IDirectDrawSurface3_SetSurfaceDesc(p,a,b)        (p)->lpVtbl->SetSurfaceDesc(p,a,b)
#undef INTERFACE
#define INTERFACE IDirectDrawSurface4
DECLARE_INTERFACE_( IDirectDrawSurface4, IUnknown )
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
    STDMETHOD_(ULONG,AddRef) (THIS);
    STDMETHOD_(ULONG,Release) (THIS);
    STDMETHOD(AddAttachedSurface)(THIS_ LPDIRECTDRAWSURFACE4);
    STDMETHOD(AddOverlayDirtyRect)(THIS_ LPRECT);
    STDMETHOD(Blt)(THIS_ LPRECT,LPDIRECTDRAWSURFACE4, LPRECT,DWORD, LPDDBLTFX);
    STDMETHOD(BltBatch)(THIS_ LPDDBLTBATCH, DWORD, DWORD );
    STDMETHOD(BltFast)(THIS_ DWORD,DWORD,LPDIRECTDRAWSURFACE4, LPRECT,DWORD);
    STDMETHOD(DeleteAttachedSurface)(THIS_ DWORD,LPDIRECTDRAWSURFACE4);
    STDMETHOD(EnumAttachedSurfaces)(THIS_ LPVOID,LPDDENUMSURFACESCALLBACK2);
    STDMETHOD(EnumOverlayZOrders)(THIS_ DWORD,LPVOID,LPDDENUMSURFACESCALLBACK2);
    STDMETHOD(Flip)(THIS_ LPDIRECTDRAWSURFACE4, DWORD);
    STDMETHOD(GetAttachedSurface)(THIS_ LPDDSCAPS2, LPDIRECTDRAWSURFACE4 FAR *);
    STDMETHOD(GetBltStatus)(THIS_ DWORD);
    STDMETHOD(GetCaps)(THIS_ LPDDSCAPS2);
    STDMETHOD(GetClipper)(THIS_ LPDIRECTDRAWCLIPPER FAR*);
    STDMETHOD(GetColorKey)(THIS_ DWORD, LPDDCOLORKEY);
    STDMETHOD(GetDC)(THIS_ HDC FAR *);
    STDMETHOD(GetFlipStatus)(THIS_ DWORD);
    STDMETHOD(GetOverlayPosition)(THIS_ LPLONG, LPLONG );
    STDMETHOD(GetPalette)(THIS_ LPDIRECTDRAWPALETTE FAR*);
    STDMETHOD(GetPixelFormat)(THIS_ LPDDPIXELFORMAT);
    STDMETHOD(GetSurfaceDesc)(THIS_ LPDDSURFACEDESC2);
    STDMETHOD(Initialize)(THIS_ LPDIRECTDRAW, LPDDSURFACEDESC2);
    STDMETHOD(IsLost)(THIS);
    STDMETHOD(Lock)(THIS_ LPRECT,LPDDSURFACEDESC2,DWORD,HANDLE);
    STDMETHOD(ReleaseDC)(THIS_ HDC);
    STDMETHOD(Restore)(THIS);
    STDMETHOD(SetClipper)(THIS_ LPDIRECTDRAWCLIPPER);
    STDMETHOD(SetColorKey)(THIS_ DWORD, LPDDCOLORKEY);
    STDMETHOD(SetOverlayPosition)(THIS_ LONG, LONG );
    STDMETHOD(SetPalette)(THIS_ LPDIRECTDRAWPALETTE);
    STDMETHOD(Unlock)(THIS_ LPRECT);
    STDMETHOD(UpdateOverlay)(THIS_ LPRECT, LPDIRECTDRAWSURFACE4,LPRECT,DWORD, LPDDOVERLAYFX);
    STDMETHOD(UpdateOverlayDisplay)(THIS_ DWORD);
    STDMETHOD(UpdateOverlayZOrder)(THIS_ DWORD, LPDIRECTDRAWSURFACE4);
    STDMETHOD(GetDDInterface)(THIS_ LPVOID FAR *);
    STDMETHOD(PageLock)(THIS_ DWORD);
    STDMETHOD(PageUnlock)(THIS_ DWORD);
    STDMETHOD(SetSurfaceDesc)(THIS_ LPDDSURFACEDESC2, DWORD);
    STDMETHOD(SetPrivateData)(THIS_ REFGUID, LPVOID, DWORD, DWORD);
    STDMETHOD(GetPrivateData)(THIS_ REFGUID, LPVOID, LPDWORD);
    STDMETHOD(FreePrivateData)(THIS_ REFGUID);
    STDMETHOD(GetUniquenessValue)(THIS_ LPDWORD);
    STDMETHOD(ChangeUniquenessValue)(THIS);
};
#define IDirectDrawSurface4_QueryInterface(p,a,b)        (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirectDrawSurface4_AddRef(p)                    (p)->lpVtbl->AddRef(p)
#define IDirectDrawSurface4_Release(p)                   (p)->lpVtbl->Release(p)
#define IDirectDrawSurface4_AddAttachedSurface(p,a)      (p)->lpVtbl->AddAttachedSurface(p,a)
#define IDirectDrawSurface4_AddOverlayDirtyRect(p,a)     (p)->lpVtbl->AddOverlayDirtyRect(p,a)
#define IDirectDrawSurface4_Blt(p,a,b,c,d,e)             (p)->lpVtbl->Blt(p,a,b,c,d,e)
#define IDirectDrawSurface4_BltBatch(p,a,b,c)            (p)->lpVtbl->BltBatch(p,a,b,c)
#define IDirectDrawSurface4_BltFast(p,a,b,c,d,e)         (p)->lpVtbl->BltFast(p,a,b,c,d,e)
#define IDirectDrawSurface4_DeleteAttachedSurface(p,a,b) (p)->lpVtbl->DeleteAttachedSurface(p,a,b)
#define IDirectDrawSurface4_EnumAttachedSurfaces(p,a,b)  (p)->lpVtbl->EnumAttachedSurfaces(p,a,b)
#define IDirectDrawSurface4_EnumOverlayZOrders(p,a,b,c)  (p)->lpVtbl->EnumOverlayZOrders(p,a,b,c)
#define IDirectDrawSurface4_Flip(p,a,b)                  (p)->lpVtbl->Flip(p,a,b)
#define IDirectDrawSurface4_GetAttachedSurface(p,a,b)    (p)->lpVtbl->GetAttachedSurface(p,a,b)
#define IDirectDrawSurface4_GetBltStatus(p,a)            (p)->lpVtbl->GetBltStatus(p,a)
#define IDirectDrawSurface4_GetCaps(p,b)                 (p)->lpVtbl->GetCaps(p,b)
#define IDirectDrawSurface4_GetClipper(p,a)              (p)->lpVtbl->GetClipper(p,a)
#define IDirectDrawSurface4_GetColorKey(p,a,b)           (p)->lpVtbl->GetColorKey(p,a,b)
#define IDirectDrawSurface4_GetDC(p,a)                   (p)->lpVtbl->GetDC(p,a)
#define IDirectDrawSurface4_GetFlipStatus(p,a)           (p)->lpVtbl->GetFlipStatus(p,a)
#define IDirectDrawSurface4_GetOverlayPosition(p,a,b)    (p)->lpVtbl->GetOverlayPosition(p,a,b)
#define IDirectDrawSurface4_GetPalette(p,a)              (p)->lpVtbl->GetPalette(p,a)
#define IDirectDrawSurface4_GetPixelFormat(p,a)          (p)->lpVtbl->GetPixelFormat(p,a)
#define IDirectDrawSurface4_GetSurfaceDesc(p,a)          (p)->lpVtbl->GetSurfaceDesc(p,a)
#define IDirectDrawSurface4_Initialize(p,a,b)            (p)->lpVtbl->Initialize(p,a,b)
#define IDirectDrawSurface4_IsLost(p)                    (p)->lpVtbl->IsLost(p)
#define IDirectDrawSurface4_Lock(p,a,b,c,d)              (p)->lpVtbl->Lock(p,a,b,c,d)
#define IDirectDrawSurface4_ReleaseDC(p,a)               (p)->lpVtbl->ReleaseDC(p,a)
#define IDirectDrawSurface4_Restore(p)                   (p)->lpVtbl->Restore(p)
#define IDirectDrawSurface4_SetClipper(p,a)              (p)->lpVtbl->SetClipper(p,a)
#define IDirectDrawSurface4_SetColorKey(p,a,b)           (p)->lpVtbl->SetColorKey(p,a,b)
#define IDirectDrawSurface4_SetOverlayPosition(p,a,b)    (p)->lpVtbl->SetOverlayPosition(p,a,b)
#define IDirectDrawSurface4_SetPalette(p,a)              (p)->lpVtbl->SetPalette(p,a)
#define IDirectDrawSurface4_Unlock(p,b)                  (p)->lpVtbl->Unlock(p,b)
#define IDirectDrawSurface4_UpdateOverlay(p,a,b,c,d,e)   (p)->lpVtbl->UpdateOverlay(p,a,b,c,d,e)
#define IDirectDrawSurface4_UpdateOverlayDisplay(p,a)    (p)->lpVtbl->UpdateOverlayDisplay(p,a)
#define IDirectDrawSurface4_UpdateOverlayZOrder(p,a,b)   (p)->lpVtbl->UpdateOverlayZOrder(p,a,b)
#define IDirectDrawSurface4_GetDDInterface(p,a)          (p)->lpVtbl->GetDDInterface(p,a)
#define IDirectDrawSurface4_PageLock(p,a)                (p)->lpVtbl->PageLock(p,a)
#define IDirectDrawSurface4_PageUnlock(p,a)              (p)->lpVtbl->PageUnlock(p,a)
#define IDirectDrawSurface4_SetSurfaceDesc(p,a,b)        (p)->lpVtbl->SetSurfaceDesc(p,a,b)
#define IDirectDrawSurface4_SetPrivateData(p,a,b,c,d)    (p)->lpVtbl->SetPrivateData(p,a,b,c,d)
#define IDirectDrawSurface4_GetPrivateData(p,a,b,c)      (p)->lpVtbl->GetPrivateData(p,a,b,c)
#define IDirectDrawSurface4_FreePrivateData(p,a)         (p)->lpVtbl->FreePrivateData(p,a)
#define IDirectDrawSurface4_GetUniquenessValue(p, a)     (p)->lpVtbl->GetUniquenessValue(p, a)
#define IDirectDrawSurface4_ChangeUniquenessValue(p)     (p)->lpVtbl->ChangeUniquenessValue(p)
#undef INTERFACE
#define INTERFACE IDirectDrawSurface7
DECLARE_INTERFACE_( IDirectDrawSurface7, IUnknown )
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
    STDMETHOD_(ULONG,AddRef) (THIS);
    STDMETHOD_(ULONG,Release) (THIS);
    STDMETHOD(AddAttachedSurface)(THIS_ LPDIRECTDRAWSURFACE7);
    STDMETHOD(AddOverlayDirtyRect)(THIS_ LPRECT);
    STDMETHOD(Blt)(THIS_ LPRECT,LPDIRECTDRAWSURFACE7, LPRECT,DWORD, LPDDBLTFX);
    STDMETHOD(BltBatch)(THIS_ LPDDBLTBATCH, DWORD, DWORD );
    STDMETHOD(BltFast)(THIS_ DWORD,DWORD,LPDIRECTDRAWSURFACE7, LPRECT,DWORD);
    STDMETHOD(DeleteAttachedSurface)(THIS_ DWORD,LPDIRECTDRAWSURFACE7);
    STDMETHOD(EnumAttachedSurfaces)(THIS_ LPVOID,LPDDENUMSURFACESCALLBACK7);
    STDMETHOD(EnumOverlayZOrders)(THIS_ DWORD,LPVOID,LPDDENUMSURFACESCALLBACK7);
    STDMETHOD(Flip)(THIS_ LPDIRECTDRAWSURFACE7, DWORD);
    STDMETHOD(GetAttachedSurface)(THIS_ LPDDSCAPS2, LPDIRECTDRAWSURFACE7 FAR *);
    STDMETHOD(GetBltStatus)(THIS_ DWORD);
    STDMETHOD(GetCaps)(THIS_ LPDDSCAPS2);
    STDMETHOD(GetClipper)(THIS_ LPDIRECTDRAWCLIPPER FAR*);
    STDMETHOD(GetColorKey)(THIS_ DWORD, LPDDCOLORKEY);
    STDMETHOD(GetDC)(THIS_ HDC FAR *);
    STDMETHOD(GetFlipStatus)(THIS_ DWORD);
    STDMETHOD(GetOverlayPosition)(THIS_ LPLONG, LPLONG );
    STDMETHOD(GetPalette)(THIS_ LPDIRECTDRAWPALETTE FAR*);
    STDMETHOD(GetPixelFormat)(THIS_ LPDDPIXELFORMAT);
    STDMETHOD(GetSurfaceDesc)(THIS_ LPDDSURFACEDESC2);
    STDMETHOD(Initialize)(THIS_ LPDIRECTDRAW, LPDDSURFACEDESC2);
    STDMETHOD(IsLost)(THIS);
    STDMETHOD(Lock)(THIS_ LPRECT,LPDDSURFACEDESC2,DWORD,HANDLE);
    STDMETHOD(ReleaseDC)(THIS_ HDC);
    STDMETHOD(Restore)(THIS);
    STDMETHOD(SetClipper)(THIS_ LPDIRECTDRAWCLIPPER);
    STDMETHOD(SetColorKey)(THIS_ DWORD, LPDDCOLORKEY);
    STDMETHOD(SetOverlayPosition)(THIS_ LONG, LONG );
    STDMETHOD(SetPalette)(THIS_ LPDIRECTDRAWPALETTE);
    STDMETHOD(Unlock)(THIS_ LPRECT);
    STDMETHOD(UpdateOverlay)(THIS_ LPRECT, LPDIRECTDRAWSURFACE7,LPRECT,DWORD, LPDDOVERLAYFX);
    STDMETHOD(UpdateOverlayDisplay)(THIS_ DWORD);
    STDMETHOD(UpdateOverlayZOrder)(THIS_ DWORD, LPDIRECTDRAWSURFACE7);
    STDMETHOD(GetDDInterface)(THIS_ LPVOID FAR *);
    STDMETHOD(PageLock)(THIS_ DWORD);
    STDMETHOD(PageUnlock)(THIS_ DWORD);
    STDMETHOD(SetSurfaceDesc)(THIS_ LPDDSURFACEDESC2, DWORD);
    STDMETHOD(SetPrivateData)(THIS_ REFGUID, LPVOID, DWORD, DWORD);
    STDMETHOD(GetPrivateData)(THIS_ REFGUID, LPVOID, LPDWORD);
    STDMETHOD(FreePrivateData)(THIS_ REFGUID);
    STDMETHOD(GetUniquenessValue)(THIS_ LPDWORD);
    STDMETHOD(ChangeUniquenessValue)(THIS);
    STDMETHOD(SetPriority)(THIS_ DWORD);
    STDMETHOD(GetPriority)(THIS_ LPDWORD);
    STDMETHOD(SetLOD)(THIS_ DWORD);
    STDMETHOD(GetLOD)(THIS_ LPDWORD);
};
#define IDirectDrawSurface7_QueryInterface(p,a,b)        (p)->lpVtbl->QueryInterface(p,a,b)
#define IDirectDrawSurface7_AddRef(p)                    (p)->lpVtbl->AddRef(p)
#define IDirectDrawSurface7_Release(p)                   (p)->lpVtbl->Release(p)
#define IDirectDrawSurface7_AddAttachedSurface(p,a)      (p)->lpVtbl->AddAttachedSurface(p,a)
#define IDirectDrawSurface7_AddOverlayDirtyRect(p,a)     (p)->lpVtbl->AddOverlayDirtyRect(p,a)
#define IDirectDrawSurface7_Blt(p,a,b,c,d,e)             (p)->lpVtbl->Blt(p,a,b,c,d,e)
#define IDirectDrawSurface7_BltBatch(p,a,b,c)            (p)->lpVtbl->BltBatch(p,a,b,c)
#define IDirectDrawSurface7_BltFast(p,a,b,c,d,e)         (p)->lpVtbl->BltFast(p,a,b,c,d,e)
#define IDirectDrawSurface7_DeleteAttachedSurface(p,a,b) (p)->lpVtbl->DeleteAttachedSurface(p,a,b)
#define IDirectDrawSurface7_EnumAttachedSurfaces(p,a,b)  (p)->lpVtbl->EnumAttachedSurfaces(p,a,b)
#define IDirectDrawSurface7_EnumOverlayZOrders(p,a,b,c)  (p)->lpVtbl->EnumOverlayZOrders(p,a,b,c)
#define IDirectDrawSurface7_Flip(p,a,b)                  (p)->lpVtbl->Flip(p,a,b)
#define IDirectDrawSurface7_GetAttachedSurface(p,a,b)    (p)->lpVtbl->GetAttachedSurface(p,a,b)
#define IDirectDrawSurface7_GetBltStatus(p,a)            (p)->lpVtbl->GetBltStatus(p,a)
#define IDirectDrawSurface7_GetCaps(p,b)                 (p)->lpVtbl->GetCaps(p,b)
#define IDirectDrawSurface7_GetClipper(p,a)              (p)->lpVtbl->GetClipper(p,a)
#define IDirectDrawSurface7_GetColorKey(p,a,b)           (p)->lpVtbl->GetColorKey(p,a,b)
#define IDirectDrawSurface7_GetDC(p,a)                   (p)->lpVtbl->GetDC(p,a)
#define IDirectDrawSurface7_GetFlipStatus(p,a)           (p)->lpVtbl->GetFlipStatus(p,a)
#define IDirectDrawSurface7_GetOverlayPosition(p,a,b)    (p)->lpVtbl->GetOverlayPosition(p,a,b)
#define IDirectDrawSurface7_GetPalette(p,a)              (p)->lpVtbl->GetPalette(p,a)
#define IDirectDrawSurface7_GetPixelFormat(p,a)          (p)->lpVtbl->GetPixelFormat(p,a)
#define IDirectDrawSurface7_GetSurfaceDesc(p,a)          (p)->lpVtbl->GetSurfaceDesc(p,a)
#define IDirectDrawSurface7_Initialize(p,a,b)            (p)->lpVtbl->Initialize(p,a,b)
#define IDirectDrawSurface7_IsLost(p)                    (p)->lpVtbl->IsLost(p)
#define IDirectDrawSurface7_Lock(p,a,b,c,d)              (p)->lpVtbl->Lock(p,a,b,c,d)
#define IDirectDrawSurface7_ReleaseDC(p,a)               (p)->lpVtbl->ReleaseDC(p,a)
#define IDirectDrawSurface7_Restore(p)                   (p)->lpVtbl->Restore(p)
#define IDirectDrawSurface7_SetClipper(p,a)              (p)->lpVtbl->SetClipper(p,a)
#define IDirectDrawSurface7_SetColorKey(p,a,b)           (p)->lpVtbl->SetColorKey(p,a,b)
#define IDirectDrawSurface7_SetOverlayPosition(p,a,b)    (p)->lpVtbl->SetOverlayPosition(p,a,b)
#define IDirectDrawSurface7_SetPalette(p,a)              (p)->lpVtbl->SetPalette(p,a)
#define IDirectDrawSurface7_Unlock(p,b)                  (p)->lpVtbl->Unlock(p,b)
#define IDirectDrawSurface7_UpdateOverlay(p,a,b,c,d,e)   (p)->lpVtbl->UpdateOverlay(p,a,b,c,d,e)
#define IDirectDrawSurface7_UpdateOverlayDisplay(p,a)    (p)->lpVtbl->UpdateOverlayDisplay(p,a)
#define IDirectDrawSurface7_UpdateOverlayZOrder(p,a,b)   (p)->lpVtbl->UpdateOverlayZOrder(p,a,b)
#define IDirectDrawSurface7_GetDDInterface(p,a)          (p)->lpVtbl->GetDDInterface(p,a)
#define IDirectDrawSurface7_PageLock(p,a)                (p)->lpVtbl->PageLock(p,a)
#define IDirectDrawSurface7_PageUnlock(p,a)              (p)->lpVtbl->PageUnlock(p,a)
#define IDirectDrawSurface7_SetSurfaceDesc(p,a,b)        (p)->lpVtbl->SetSurfaceDesc(p,a,b)
#define IDirectDrawSurface7_SetPrivateData(p,a,b,c,d)    (p)->lpVtbl->SetPrivateData(p,a,b,c,d)
#define IDirectDrawSurface7_GetPrivateData(p,a,b,c)      (p)->lpVtbl->GetPrivateData(p,a,b,c)
#define IDirectDrawSurface7_FreePrivateData(p,a)         (p)->lpVtbl->FreePrivateData(p,a)
#define IDirectDrawSurface7_GetUniquenessValue(p, a)     (p)->lpVtbl->GetUniquenessValue(p, a)
#define IDirectDrawSurface7_ChangeUniquenessValue(p)     (p)->lpVtbl->ChangeUniquenessValue(p)
#define IDirectDrawSurface7_SetPriority(p,a)             (p)->lpVtbl->SetPriority(p,a)
#define IDirectDrawSurface7_GetPriority(p,a)             (p)->lpVtbl->GetPriority(p,a)
#define IDirectDrawSurface7_SetLOD(p,a)                  (p)->lpVtbl->SetLOD(p,a)
#define IDirectDrawSurface7_GetLOD(p,a)                  (p)->lpVtbl->GetLOD(p,a)
#if defined( _WIN32 ) && !defined( _NO_COM )
#undef INTERFACE
#define INTERFACE IDirectDrawColorControl
DECLARE_INTERFACE_( IDirectDrawColorControl, IUnknown )
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
    STDMETHOD_(ULONG,AddRef) (THIS);
    STDMETHOD_(ULONG,Release) (THIS);
    STDMETHOD(GetColorControls)(THIS_ LPDDCOLORCONTROL);
    STDMETHOD(SetColorControls)(THIS_ LPDDCOLORCONTROL);
};
#define IDirectDrawColorControl_QueryInterface(p, a, b)  (p)->lpVtbl->QueryInterface(p, a, b)
#define IDirectDrawColorControl_AddRef(p)                (p)->lpVtbl->AddRef(p)
#define IDirectDrawColorControl_Release(p)               (p)->lpVtbl->Release(p)
#define IDirectDrawColorControl_GetColorControls(p, a)   (p)->lpVtbl->GetColorControls(p, a)
#define IDirectDrawColorControl_SetColorControls(p, a)   (p)->lpVtbl->SetColorControls(p, a)
#endif
#if defined( _WIN32 ) && !defined( _NO_COM )
#undef INTERFACE
#define INTERFACE IDirectDrawGammaControl
DECLARE_INTERFACE_( IDirectDrawGammaControl, IUnknown )
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
    STDMETHOD_(ULONG,AddRef) (THIS);
    STDMETHOD_(ULONG,Release) (THIS);
    STDMETHOD(GetGammaRamp)(THIS_ DWORD, LPDDGAMMARAMP);
    STDMETHOD(SetGammaRamp)(THIS_ DWORD, LPDDGAMMARAMP);
};
#define IDirectDrawGammaControl_QueryInterface(p, a, b)  (p)->lpVtbl->QueryInterface(p, a, b)
#define IDirectDrawGammaControl_AddRef(p)                (p)->lpVtbl->AddRef(p)
#define IDirectDrawGammaControl_Release(p)               (p)->lpVtbl->Release(p)
#define IDirectDrawGammaControl_GetGammaRamp(p, a, b)    (p)->lpVtbl->GetGammaRamp(p, a, b)
#define IDirectDrawGammaControl_SetGammaRamp(p, a, b)    (p)->lpVtbl->SetGammaRamp(p, a, b)
#endif
#endif
typedef struct _DDSURFACEDESC
{
    DWORD               dwSize;
    DWORD               dwFlags;
    DWORD               dwHeight;
    DWORD               dwWidth;
    union
    {
        LONG            lPitch;
        DWORD           dwLinearSize;
    } DUMMYUNIONNAMEN(1);
    DWORD               dwBackBufferCount;
    union
    {
        DWORD           dwMipMapCount;
        DWORD           dwZBufferBitDepth;
        DWORD           dwRefreshRate;
    } DUMMYUNIONNAMEN(2);
    DWORD               dwAlphaBitDepth;
    DWORD               dwReserved;
    LPVOID              lpSurface;
    DDCOLORKEY          ddckCKDestOverlay;
    DDCOLORKEY          ddckCKDestBlt;
    DDCOLORKEY          ddckCKSrcOverlay;
    DDCOLORKEY          ddckCKSrcBlt;
    DDPIXELFORMAT       ddpfPixelFormat;
    DDSCAPS             ddsCaps;
} DDSURFACEDESC;
typedef struct _DDSURFACEDESC2
{
    DWORD               dwSize;
    DWORD               dwFlags;
    DWORD               dwHeight;
    DWORD               dwWidth;
    union
    {
        LONG            lPitch;
        DWORD           dwLinearSize;
    } DUMMYUNIONNAMEN(1);
    union
    {
        DWORD           dwBackBufferCount;
        DWORD           dwDepth;
    } DUMMYUNIONNAMEN(5);
    union
    {
        DWORD           dwMipMapCount;
        DWORD           dwRefreshRate;
        DWORD           dwSrcVBHandle;
    } DUMMYUNIONNAMEN(2);
    DWORD               dwAlphaBitDepth;
    DWORD               dwReserved;
    LPVOID              lpSurface;
    union
    {
        DDCOLORKEY      ddckCKDestOverlay;
        DWORD           dwEmptyFaceColor;
    } DUMMYUNIONNAMEN(3);
    DDCOLORKEY          ddckCKDestBlt;
    DDCOLORKEY          ddckCKSrcOverlay;
    DDCOLORKEY          ddckCKSrcBlt;
    union
    {
        DDPIXELFORMAT   ddpfPixelFormat;
        DWORD           dwFVF;
    } DUMMYUNIONNAMEN(4);
    DDSCAPS2            ddsCaps;
    DWORD               dwTextureStage;
} DDSURFACEDESC2;
#define DDSD_CAPS               0x00000001l
#define DDSD_HEIGHT             0x00000002l
#define DDSD_WIDTH              0x00000004l
#define DDSD_PITCH              0x00000008l
#define DDSD_BACKBUFFERCOUNT    0x00000020l
#define DDSD_ZBUFFERBITDEPTH    0x00000040l
#define DDSD_ALPHABITDEPTH      0x00000080l
#define DDSD_LPSURFACE          0x00000800l
#define DDSD_PIXELFORMAT        0x00001000l
#define DDSD_CKDESTOVERLAY      0x00002000l
#define DDSD_CKDESTBLT          0x00004000l
#define DDSD_CKSRCOVERLAY       0x00008000l
#define DDSD_CKSRCBLT           0x00010000l
#define DDSD_MIPMAPCOUNT        0x00020000l
#define DDSD_REFRESHRATE        0x00040000l
#define DDSD_LINEARSIZE         0x00080000l
#define DDSD_TEXTURESTAGE       0x00100000l
#define DDSD_FVF                0x00200000l
#define DDSD_SRCVBHANDLE        0x00400000l
#define DDSD_DEPTH              0x00800000l
#define DDSD_ALL                0x00fff9eel
typedef struct _DDOPTSURFACEDESC
{
    DWORD       dwSize;
    DWORD       dwFlags;
    DDSCAPS2    ddSCaps;
    DDOSCAPS    ddOSCaps;
    GUID        guid;
    DWORD       dwCompressionRatio;
} DDOPTSURFACEDESC;
#define DDOSD_GUID                  0x00000001l
#define DDOSD_COMPRESSION_RATIO     0x00000002l
#define DDOSD_SCAPS                 0x00000004l
#define DDOSD_OSCAPS                0x00000008l
#define DDOSD_ALL                   0x0000000fl
#define DDOSDCAPS_OPTCOMPRESSED                 0x00000001l
#define DDOSDCAPS_OPTREORDERED                  0x00000002l
#define DDOSDCAPS_MONOLITHICMIPMAP              0x00000004l
#define DDOSDCAPS_VALIDSCAPS            0x30004800l
#define DDOSDCAPS_VALIDOSCAPS           0x00000007l
typedef struct _DDCOLORCONTROL
{
    DWORD               dwSize;
    DWORD               dwFlags;
    LONG                lBrightness;
    LONG                lContrast;
    LONG                lHue;
    LONG                lSaturation;
    LONG                lSharpness;
    LONG                lGamma;
    LONG                lColorEnable;
    DWORD               dwReserved1;
} DDCOLORCONTROL;
#define DDCOLOR_BRIGHTNESS              0x00000001l
#define DDCOLOR_CONTRAST                0x00000002l
#define DDCOLOR_HUE                     0x00000004l
#define DDCOLOR_SATURATION              0x00000008l
#define DDCOLOR_SHARPNESS               0x00000010l
#define DDCOLOR_GAMMA                   0x00000020l
#define DDCOLOR_COLORENABLE             0x00000040l
#define DDSCAPS_RESERVED1                       0x00000001l
#define DDSCAPS_ALPHA                           0x00000002l
#define DDSCAPS_BACKBUFFER                      0x00000004l
#define DDSCAPS_COMPLEX                         0x00000008l
#define DDSCAPS_FLIP                            0x00000010l
#define DDSCAPS_FRONTBUFFER                     0x00000020l
#define DDSCAPS_OFFSCREENPLAIN                  0x00000040l
#define DDSCAPS_OVERLAY                         0x00000080l
#define DDSCAPS_PALETTE                         0x00000100l
#define DDSCAPS_PRIMARYSURFACE                  0x00000200l
#define DDSCAPS_RESERVED3               0x00000400l
#define DDSCAPS_PRIMARYSURFACELEFT              0x00000000l
#define DDSCAPS_SYSTEMMEMORY                    0x00000800l
#define DDSCAPS_TEXTURE                         0x00001000l
#define DDSCAPS_3DDEVICE                        0x00002000l
#define DDSCAPS_VIDEOMEMORY                     0x00004000l
#define DDSCAPS_VISIBLE                         0x00008000l
#define DDSCAPS_WRITEONLY                       0x00010000l
#define DDSCAPS_ZBUFFER                         0x00020000l
#define DDSCAPS_OWNDC                           0x00040000l
#define DDSCAPS_LIVEVIDEO                       0x00080000l
#define DDSCAPS_HWCODEC                         0x00100000l
#define DDSCAPS_MODEX                           0x00200000l
#define DDSCAPS_MIPMAP                          0x00400000l
#define DDSCAPS_RESERVED2                       0x00800000l
#define DDSCAPS_ALLOCONLOAD                     0x04000000l
#define DDSCAPS_VIDEOPORT                       0x08000000l
#define DDSCAPS_LOCALVIDMEM                     0x10000000l
#define DDSCAPS_NONLOCALVIDMEM                  0x20000000l
#define DDSCAPS_STANDARDVGAMODE                 0x40000000l
#define DDSCAPS_OPTIMIZED                       0x80000000l
#define DDSCAPS2_RESERVED4                      0x00000002L
#define DDSCAPS2_HARDWAREDEINTERLACE            0x00000000L
#define DDSCAPS2_HINTDYNAMIC                    0x00000004L
#define DDSCAPS2_HINTSTATIC                     0x00000008L
#define DDSCAPS2_TEXTUREMANAGE                  0x00000010L
#define DDSCAPS2_RESERVED1                      0x00000020L
#define DDSCAPS2_RESERVED2                      0x00000040L
#define DDSCAPS2_OPAQUE                         0x00000080L
#define DDSCAPS2_HINTANTIALIASING               0x00000100L
#define DDSCAPS2_CUBEMAP                        0x00000200L
#define DDSCAPS2_CUBEMAP_POSITIVEX              0x00000400L
#define DDSCAPS2_CUBEMAP_NEGATIVEX              0x00000800L
#define DDSCAPS2_CUBEMAP_POSITIVEY              0x00001000L
#define DDSCAPS2_CUBEMAP_NEGATIVEY              0x00002000L
#define DDSCAPS2_CUBEMAP_POSITIVEZ              0x00004000L
#define DDSCAPS2_CUBEMAP_NEGATIVEZ              0x00008000L
#define DDSCAPS2_CUBEMAP_ALLFACES ( DDSCAPS2_CUBEMAP_POSITIVEX |\
                                    DDSCAPS2_CUBEMAP_NEGATIVEX |\
                                    DDSCAPS2_CUBEMAP_POSITIVEY |\
                                    DDSCAPS2_CUBEMAP_NEGATIVEY |\
                                    DDSCAPS2_CUBEMAP_POSITIVEZ |\
                                    DDSCAPS2_CUBEMAP_NEGATIVEZ )
#define DDSCAPS2_MIPMAPSUBLEVEL                 0x00010000L
#define DDSCAPS2_D3DTEXTUREMANAGE               0x00020000L
#define DDSCAPS2_DONOTPERSIST                   0x00040000L
#define DDSCAPS2_STEREOSURFACELEFT              0x00080000L
#define DDSCAPS2_VOLUME                         0x00200000L
#define DDSCAPS2_NOTUSERLOCKABLE                0x00400000L
#define DDSCAPS2_POINTS                         0x00800000L
#define DDSCAPS2_RTPATCHES                      0x01000000L
#define DDSCAPS2_NPATCHES                       0x02000000L
#define DDSCAPS2_RESERVED3                      0x04000000L
#define DDSCAPS2_DISCARDBACKBUFFER              0x10000000L
#define DDSCAPS2_ENABLEALPHACHANNEL             0x20000000L
#define DDSCAPS2_EXTENDEDFORMATPRIMARY          0x40000000L
#define DDSCAPS2_ADDITIONALPRIMARY              0x80000000L
#define DDSCAPS3_MULTISAMPLE_MASK               0x0000001FL
#define DDSCAPS3_MULTISAMPLE_QUALITY_MASK       0x000000E0L
#define DDSCAPS3_MULTISAMPLE_QUALITY_SHIFT      5
#define DDSCAPS3_RESERVED1                      0x00000100L
#define DDSCAPS3_RESERVED2                      0x00000200L
#define DDSCAPS3_LIGHTWEIGHTMIPMAP              0x00000400L
#define DDSCAPS3_AUTOGENMIPMAP                  0x00000800L
#define DDSCAPS3_DMAP                           0x00001000L
#if !defined(D3D_DISABLE_9EX)
#define DDSCAPS3_CREATESHAREDRESOURCE           0x00002000L
#define DDSCAPS3_READONLYRESOURCE               0x00004000L
#define DDSCAPS3_OPENSHAREDRESOURCE             0x00008000L
#endif
#define DDCAPS_3D                       0x00000001l
#define DDCAPS_ALIGNBOUNDARYDEST        0x00000002l
#define DDCAPS_ALIGNSIZEDEST            0x00000004l
#define DDCAPS_ALIGNBOUNDARYSRC         0x00000008l
#define DDCAPS_ALIGNSIZESRC             0x00000010l
#define DDCAPS_ALIGNSTRIDE              0x00000020l
#define DDCAPS_BLT                      0x00000040l
#define DDCAPS_BLTQUEUE                 0x00000080l
#define DDCAPS_BLTFOURCC                0x00000100l
#define DDCAPS_BLTSTRETCH               0x00000200l
#define DDCAPS_GDI                      0x00000400l
#define DDCAPS_OVERLAY                  0x00000800l
#define DDCAPS_OVERLAYCANTCLIP          0x00001000l
#define DDCAPS_OVERLAYFOURCC            0x00002000l
#define DDCAPS_OVERLAYSTRETCH           0x00004000l
#define DDCAPS_PALETTE                  0x00008000l
#define DDCAPS_PALETTEVSYNC             0x00010000l
#define DDCAPS_READSCANLINE             0x00020000l
#define DDCAPS_RESERVED1                0x00040000l
#define DDCAPS_VBI                      0x00080000l
#define DDCAPS_ZBLTS                    0x00100000l
#define DDCAPS_ZOVERLAYS                0x00200000l
#define DDCAPS_COLORKEY                 0x00400000l
#define DDCAPS_ALPHA                    0x00800000l
#define DDCAPS_COLORKEYHWASSIST         0x01000000l
#define DDCAPS_NOHARDWARE               0x02000000l
#define DDCAPS_BLTCOLORFILL             0x04000000l
#define DDCAPS_BANKSWITCHED             0x08000000l
#define DDCAPS_BLTDEPTHFILL             0x10000000l
#define DDCAPS_CANCLIP                  0x20000000l
#define DDCAPS_CANCLIPSTRETCHED         0x40000000l
#define DDCAPS_CANBLTSYSMEM             0x80000000l
#define DDCAPS2_CERTIFIED              0x00000001l
#define DDCAPS2_NO2DDURING3DSCENE       0x00000002l
#define DDCAPS2_VIDEOPORT               0x00000004l
#define DDCAPS2_AUTOFLIPOVERLAY         0x00000008l
#define DDCAPS2_CANBOBINTERLEAVED       0x00000010l
#define DDCAPS2_CANBOBNONINTERLEAVED    0x00000020l
#define DDCAPS2_COLORCONTROLOVERLAY     0x00000040l
#define DDCAPS2_COLORCONTROLPRIMARY     0x00000080l
#define DDCAPS2_CANDROPZ16BIT           0x00000100l
#define DDCAPS2_NONLOCALVIDMEM          0x00000200l
#define DDCAPS2_NONLOCALVIDMEMCAPS      0x00000400l
#define DDCAPS2_NOPAGELOCKREQUIRED      0x00000800l
#define DDCAPS2_WIDESURFACES            0x00001000l
#define DDCAPS2_CANFLIPODDEVEN          0x00002000l
#define DDCAPS2_CANBOBHARDWARE          0x00004000l
#define DDCAPS2_COPYFOURCC              0x00008000l
#define DDCAPS2_PRIMARYGAMMA            0x00020000l
#define DDCAPS2_CANRENDERWINDOWED       0x00080000l
#define DDCAPS2_CANCALIBRATEGAMMA       0x00100000l
#define DDCAPS2_FLIPINTERVAL            0x00200000l
#define DDCAPS2_FLIPNOVSYNC             0x00400000l
#define DDCAPS2_CANMANAGETEXTURE        0x00800000l
#define DDCAPS2_TEXMANINNONLOCALVIDMEM  0x01000000l
#define DDCAPS2_STEREO                  0x02000000L
#define DDCAPS2_SYSTONONLOCAL_AS_SYSTOLOCAL   0x04000000L
#define DDCAPS2_RESERVED1                     0x08000000L
#define DDCAPS2_CANMANAGERESOURCE             0x10000000L
#define DDCAPS2_DYNAMICTEXTURES               0x20000000L
#define DDCAPS2_CANAUTOGENMIPMAP              0x40000000L
#if !defined(D3D_DISABLE_9EX)
#define DDCAPS2_CANSHARERESOURCE              0x80000000L
#endif
#define DDFXALPHACAPS_BLTALPHAEDGEBLEND         0x00000001l
#define DDFXALPHACAPS_BLTALPHAPIXELS            0x00000002l
#define DDFXALPHACAPS_BLTALPHAPIXELSNEG         0x00000004l
#define DDFXALPHACAPS_BLTALPHASURFACES          0x00000008l
#define DDFXALPHACAPS_BLTALPHASURFACESNEG       0x00000010l
#define DDFXALPHACAPS_OVERLAYALPHAEDGEBLEND     0x00000020l
#define DDFXALPHACAPS_OVERLAYALPHAPIXELS        0x00000040l
#define DDFXALPHACAPS_OVERLAYALPHAPIXELSNEG     0x00000080l
#define DDFXALPHACAPS_OVERLAYALPHASURFACES      0x00000100l
#define DDFXALPHACAPS_OVERLAYALPHASURFACESNEG   0x00000200l
#if DIRECTDRAW_VERSION < 0x0600
#endif
#define DDFXCAPS_BLTARITHSTRETCHY       0x00000020l
#define DDFXCAPS_BLTARITHSTRETCHYN      0x00000010l
#define DDFXCAPS_BLTMIRRORLEFTRIGHT     0x00000040l
#define DDFXCAPS_BLTMIRRORUPDOWN        0x00000080l
#define DDFXCAPS_BLTROTATION            0x00000100l
#define DDFXCAPS_BLTROTATION90          0x00000200l
#define DDFXCAPS_BLTSHRINKX             0x00000400l
#define DDFXCAPS_BLTSHRINKXN            0x00000800l
#define DDFXCAPS_BLTSHRINKY             0x00001000l
#define DDFXCAPS_BLTSHRINKYN            0x00002000l
#define DDFXCAPS_BLTSTRETCHX            0x00004000l
#define DDFXCAPS_BLTSTRETCHXN           0x00008000l
#define DDFXCAPS_BLTSTRETCHY            0x00010000l
#define DDFXCAPS_BLTSTRETCHYN           0x00020000l
#define DDFXCAPS_OVERLAYARITHSTRETCHY   0x00040000l
#define DDFXCAPS_OVERLAYARITHSTRETCHYN  0x00000008l
#define DDFXCAPS_OVERLAYSHRINKX         0x00080000l
#define DDFXCAPS_OVERLAYSHRINKXN        0x00100000l
#define DDFXCAPS_OVERLAYSHRINKY         0x00200000l
#define DDFXCAPS_OVERLAYSHRINKYN        0x00400000l
#define DDFXCAPS_OVERLAYSTRETCHX        0x00800000l
#define DDFXCAPS_OVERLAYSTRETCHXN       0x01000000l
#define DDFXCAPS_OVERLAYSTRETCHY        0x02000000l
#define DDFXCAPS_OVERLAYSTRETCHYN       0x04000000l
#define DDFXCAPS_OVERLAYMIRRORLEFTRIGHT 0x08000000l
#define DDFXCAPS_OVERLAYMIRRORUPDOWN    0x10000000l
#define DDFXCAPS_OVERLAYDEINTERLACE		0x20000000l
#define DDFXCAPS_BLTALPHA               0x00000001l
#define DDFXCAPS_BLTFILTER              DDFXCAPS_BLTARITHSTRETCHY
#define DDFXCAPS_OVERLAYALPHA           0x00000004l
#define DDFXCAPS_OVERLAYFILTER          DDFXCAPS_OVERLAYARITHSTRETCHY
#define DDSVCAPS_RESERVED1              0x00000001l
#define DDSVCAPS_RESERVED2              0x00000002l
#define DDSVCAPS_RESERVED3              0x00000004l
#define DDSVCAPS_RESERVED4              0x00000008l
#define DDSVCAPS_STEREOSEQUENTIAL       0x00000010L
#define DDPCAPS_4BIT                    0x00000001l
#define DDPCAPS_8BITENTRIES             0x00000002l
#define DDPCAPS_8BIT                    0x00000004l
#define DDPCAPS_INITIALIZE              0x00000000l
#define DDPCAPS_PRIMARYSURFACE          0x00000010l
#define DDPCAPS_PRIMARYSURFACELEFT      0x00000020l
#define DDPCAPS_ALLOW256                0x00000040l
#define DDPCAPS_VSYNC                   0x00000080l
#define DDPCAPS_1BIT                    0x00000100l
#define DDPCAPS_2BIT                    0x00000200l
#define DDPCAPS_ALPHA                   0x00000400l
#define DDSPD_IUNKNOWNPOINTER           0x00000001L
#define DDSPD_VOLATILE                  0x00000002L
#define DDBD_1                  0x00004000l
#define DDBD_2                  0x00002000l
#define DDBD_4                  0x00001000l
#define DDBD_8                  0x00000800l
#define DDBD_16                 0x00000400l
#define DDBD_24                 0X00000200l
#define DDBD_32                 0x00000100l
#define DDCKEY_COLORSPACE       0x00000001l
#define DDCKEY_DESTBLT          0x00000002l
#define DDCKEY_DESTOVERLAY      0x00000004l
#define DDCKEY_SRCBLT           0x00000008l
#define DDCKEY_SRCOVERLAY       0x00000010l
#define DDCKEYCAPS_DESTBLT                      0x00000001l
#define DDCKEYCAPS_DESTBLTCLRSPACE              0x00000002l
#define DDCKEYCAPS_DESTBLTCLRSPACEYUV           0x00000004l
#define DDCKEYCAPS_DESTBLTYUV                   0x00000008l
#define DDCKEYCAPS_DESTOVERLAY                  0x00000010l
#define DDCKEYCAPS_DESTOVERLAYCLRSPACE          0x00000020l
#define DDCKEYCAPS_DESTOVERLAYCLRSPACEYUV       0x00000040l
#define DDCKEYCAPS_DESTOVERLAYONEACTIVE         0x00000080l
#define DDCKEYCAPS_DESTOVERLAYYUV               0x00000100l
#define DDCKEYCAPS_SRCBLT                       0x00000200l
#define DDCKEYCAPS_SRCBLTCLRSPACE               0x00000400l
#define DDCKEYCAPS_SRCBLTCLRSPACEYUV            0x00000800l
#define DDCKEYCAPS_SRCBLTYUV                    0x00001000l
#define DDCKEYCAPS_SRCOVERLAY                   0x00002000l
#define DDCKEYCAPS_SRCOVERLAYCLRSPACE           0x00004000l
#define DDCKEYCAPS_SRCOVERLAYCLRSPACEYUV        0x00008000l
#define DDCKEYCAPS_SRCOVERLAYONEACTIVE          0x00010000l
#define DDCKEYCAPS_SRCOVERLAYYUV                0x00020000l
#define DDCKEYCAPS_NOCOSTOVERLAY                0x00040000l
#define DDPF_ALPHAPIXELS                        0x00000001l
#define DDPF_ALPHA                              0x00000002l
#define DDPF_FOURCC                             0x00000004l
#define DDPF_PALETTEINDEXED4                    0x00000008l
#define DDPF_PALETTEINDEXEDTO8                  0x00000010l
#define DDPF_PALETTEINDEXED8                    0x00000020l
#define DDPF_RGB                                0x00000040l
#define DDPF_COMPRESSED                         0x00000080l
#define DDPF_RGBTOYUV                           0x00000100l
#define DDPF_YUV                                0x00000200l
#define DDPF_ZBUFFER                            0x00000400l
#define DDPF_PALETTEINDEXED1                    0x00000800l
#define DDPF_PALETTEINDEXED2                    0x00001000l
#define DDPF_ZPIXELS                            0x00002000l
#define DDPF_STENCILBUFFER                      0x00004000l
#define DDPF_ALPHAPREMULT                       0x00008000l
#define DDPF_LUMINANCE                          0x00020000l
#define DDPF_BUMPLUMINANCE                      0x00040000l
#define DDPF_BUMPDUDV                           0x00080000l
#define DDENUMSURFACES_ALL                      0x00000001l
#define DDENUMSURFACES_MATCH                    0x00000002l
#define DDENUMSURFACES_NOMATCH                  0x00000004l
#define DDENUMSURFACES_CANBECREATED             0x00000008l
#define DDENUMSURFACES_DOESEXIST                0x00000010l
#define DDSDM_STANDARDVGAMODE                   0x00000001l
#define DDEDM_REFRESHRATES                      0x00000001l
#define DDEDM_STANDARDVGAMODES                  0x00000002L
#define DDSCL_FULLSCREEN                        0x00000001l
#define DDSCL_ALLOWREBOOT                       0x00000002l
#define DDSCL_NOWINDOWCHANGES                   0x00000004l
#define DDSCL_NORMAL                            0x00000008l
#define DDSCL_EXCLUSIVE                         0x00000010l
#define DDSCL_ALLOWMODEX                        0x00000040l
#define DDSCL_SETFOCUSWINDOW                    0x00000080l
#define DDSCL_SETDEVICEWINDOW                   0x00000100l
#define DDSCL_CREATEDEVICEWINDOW                0x00000200l
#define DDSCL_MULTITHREADED                     0x00000400l
#define DDSCL_FPUSETUP                          0x00000800l
#define DDSCL_FPUPRESERVE                          0x00001000l
#define DDBLT_ALPHADEST                         0x00000001l
#define DDBLT_ALPHADESTCONSTOVERRIDE            0x00000002l
#define DDBLT_ALPHADESTNEG                      0x00000004l
#define DDBLT_ALPHADESTSURFACEOVERRIDE          0x00000008l
#define DDBLT_ALPHAEDGEBLEND                    0x00000010l
#define DDBLT_ALPHASRC                          0x00000020l
#define DDBLT_ALPHASRCCONSTOVERRIDE             0x00000040l
#define DDBLT_ALPHASRCNEG                       0x00000080l
#define DDBLT_ALPHASRCSURFACEOVERRIDE           0x00000100l
#define DDBLT_ASYNC                             0x00000200l
#define DDBLT_COLORFILL                         0x00000400l
#define DDBLT_DDFX                              0x00000800l
#define DDBLT_DDROPS                            0x00001000l
#define DDBLT_KEYDEST                           0x00002000l
#define DDBLT_KEYDESTOVERRIDE                   0x00004000l
#define DDBLT_KEYSRC                            0x00008000l
#define DDBLT_KEYSRCOVERRIDE                    0x00010000l
#define DDBLT_ROP                               0x00020000l
#define DDBLT_ROTATIONANGLE                     0x00040000l
#define DDBLT_ZBUFFER                           0x00080000l
#define DDBLT_ZBUFFERDESTCONSTOVERRIDE          0x00100000l
#define DDBLT_ZBUFFERDESTOVERRIDE               0x00200000l
#define DDBLT_ZBUFFERSRCCONSTOVERRIDE           0x00400000l
#define DDBLT_ZBUFFERSRCOVERRIDE                0x00800000l
#define DDBLT_WAIT                              0x01000000l
#define DDBLT_DEPTHFILL                         0x02000000l
#define DDBLT_DONOTWAIT                         0x08000000l
#define DDBLT_PRESENTATION                      0x10000000l
#define DDBLT_LAST_PRESENTATION                 0x20000000l
#define DDBLT_EXTENDED_FLAGS                    0x40000000l
/*
 * EXTENDED FLAG. SEE DEFINITION OF DDBLT_EXTENDED_FLAGS.
 * This flag indidcates that the source surface contains content in a
 * linear color space. The driver may perform gamma correction to the
 * desktop color space (i.e. sRGB, gamma 2.2) as part of this blt.
 * If the device can perform such a conversion as part of the copy,
 * the driver should also set D3DCAPS3_LINEAR_TO_SRGB_PRESENTATION
 *
 * NOTE: APPLICATIONS SHOULD NOT SET THIS FLAG. THIS FLAG IS INTENDED
 * FOR USE BY THE DIRECT3D RUNTIME. Use IDirect3DSwapChain9::Present
 * and specify D3DPRESENT_LINEAR_CONTENT in order to use this functionality.
 */
#define DDBLT_EXTENDED_LINEAR_CONTENT           0x00000004l
#define DDBLTFAST_NOCOLORKEY                    0x00000000
#define DDBLTFAST_SRCCOLORKEY                   0x00000001
#define DDBLTFAST_DESTCOLORKEY                  0x00000002
#define DDBLTFAST_WAIT                          0x00000010
#define DDBLTFAST_DONOTWAIT                     0x00000020
#define DDFLIP_WAIT                          0x00000001L
#define DDFLIP_EVEN                          0x00000002L
#define DDFLIP_ODD                           0x00000004L
#define DDFLIP_NOVSYNC                       0x00000008L
#define DDFLIP_INTERVAL2                     0x02000000L
#define DDFLIP_INTERVAL3                     0x03000000L
#define DDFLIP_INTERVAL4                     0x04000000L
#define DDFLIP_STEREO                        0x00000010L
#define DDFLIP_DONOTWAIT                     0x00000020L
#define DDOVER_ALPHADEST                        0x00000001l
#define DDOVER_ALPHADESTCONSTOVERRIDE           0x00000002l
#define DDOVER_ALPHADESTNEG                     0x00000004l
#define DDOVER_ALPHADESTSURFACEOVERRIDE         0x00000008l
#define DDOVER_ALPHAEDGEBLEND                   0x00000010l
#define DDOVER_ALPHASRC                         0x00000020l
#define DDOVER_ALPHASRCCONSTOVERRIDE            0x00000040l
#define DDOVER_ALPHASRCNEG                      0x00000080l
#define DDOVER_ALPHASRCSURFACEOVERRIDE          0x00000100l
#define DDOVER_HIDE                             0x00000200l
#define DDOVER_KEYDEST                          0x00000400l
#define DDOVER_KEYDESTOVERRIDE                  0x00000800l
#define DDOVER_KEYSRC                           0x00001000l
#define DDOVER_KEYSRCOVERRIDE                   0x00002000l
#define DDOVER_SHOW                             0x00004000l
#define DDOVER_ADDDIRTYRECT                     0x00008000l
#define DDOVER_REFRESHDIRTYRECTS                0x00010000l
#define DDOVER_REFRESHALL                      0x00020000l
#define DDOVER_DDFX                             0x00080000l
#define DDOVER_AUTOFLIP                         0x00100000l
#define DDOVER_BOB                              0x00200000l
#define DDOVER_OVERRIDEBOBWEAVE                 0x00400000l
#define DDOVER_INTERLEAVED                      0x00800000l
#define DDOVER_BOBHARDWARE                      0x01000000l
#define DDOVER_ARGBSCALEFACTORS                 0x02000000l
#define DDOVER_DEGRADEARGBSCALING               0x04000000l
#ifdef  COMBOX_SANDBOX
#define DX_LONGHORN_PRESERVEDC
#endif
#ifdef DX_LONGHORN_PRESERVEDC
#define DDSETSURFACEDESC_RECREATEDC             0x00000000L
#define DDSETSURFACEDESC_PRESERVEDC             0x00000001L
#endif
#define DDLOCK_SURFACEMEMORYPTR                 0x00000000L
#define DDLOCK_WAIT                             0x00000001L
#define DDLOCK_EVENT                            0x00000002L
#define DDLOCK_READONLY                         0x00000010L
#define DDLOCK_WRITEONLY                        0x00000020L
#define DDLOCK_NOSYSLOCK                        0x00000800L
#define DDLOCK_NOOVERWRITE                      0x00001000L
#define DDLOCK_DISCARDCONTENTS                  0x00002000L
#define DDLOCK_OKTOSWAP                         0x00002000L
#define DDLOCK_DONOTWAIT                        0x00004000L
#define DDLOCK_HASVOLUMETEXTUREBOXRECT          0x00008000L
#define DDLOCK_NODIRTYUPDATE                    0x00010000L
#define DDBLTFX_ARITHSTRETCHY                   0x00000001l
#define DDBLTFX_MIRRORLEFTRIGHT                 0x00000002l
#define DDBLTFX_MIRRORUPDOWN                    0x00000004l
#define DDBLTFX_NOTEARING                       0x00000008l
#define DDBLTFX_ROTATE180                       0x00000010l
#define DDBLTFX_ROTATE270                       0x00000020l
#define DDBLTFX_ROTATE90                        0x00000040l
#define DDBLTFX_ZBUFFERRANGE                    0x00000080l
#define DDBLTFX_ZBUFFERBASEDEST                 0x00000100l
#define DDOVERFX_ARITHSTRETCHY                  0x00000001l
#define DDOVERFX_MIRRORLEFTRIGHT                0x00000002l
#define DDOVERFX_MIRRORUPDOWN                   0x00000004l
#define DDOVERFX_DEINTERLACE                    0x00000008l
#define DDWAITVB_BLOCKBEGIN                     0x00000001l
#define DDWAITVB_BLOCKBEGINEVENT                0x00000002l
#define DDWAITVB_BLOCKEND                       0x00000004l
#define DDGFS_CANFLIP                   0x00000001l
#define DDGFS_ISFLIPDONE                0x00000002l
#define DDGBS_CANBLT                    0x00000001l
#define DDGBS_ISBLTDONE                 0x00000002l
#define DDENUMOVERLAYZ_BACKTOFRONT      0x00000000l
#define DDENUMOVERLAYZ_FRONTTOBACK      0x00000001l
#define DDOVERZ_SENDTOFRONT             0x00000000l
#define DDOVERZ_SENDTOBACK              0x00000001l
#define DDOVERZ_MOVEFORWARD             0x00000002l
#define DDOVERZ_MOVEBACKWARD            0x00000003l
#define DDOVERZ_INSERTINFRONTOF         0x00000004l
#define DDOVERZ_INSERTINBACKOF          0x00000005l
#define DDSGR_CALIBRATE                        0x00000001L
#define DDSMT_ISTESTREQUIRED                   0x00000001L
#define DDEM_MODEPASSED                        0x00000001L
#define DDEM_MODEFAILED                        0x00000002L
#define DD_OK                                   S_OK
#define DD_FALSE                                S_FALSE
#define DDENUMRET_CANCEL                        0
#define DDENUMRET_OK                            1
#define DDERR_ALREADYINITIALIZED                MAKE_DDHRESULT( 5 )
#define DDERR_CANNOTATTACHSURFACE               MAKE_DDHRESULT( 10 )
#define DDERR_CANNOTDETACHSURFACE               MAKE_DDHRESULT( 20 )
#define DDERR_CURRENTLYNOTAVAIL                 MAKE_DDHRESULT( 40 )
#define DDERR_EXCEPTION                         MAKE_DDHRESULT( 55 )
#define DDERR_GENERIC                           E_FAIL
#define DDERR_HEIGHTALIGN                       MAKE_DDHRESULT( 90 )
#define DDERR_INCOMPATIBLEPRIMARY               MAKE_DDHRESULT( 95 )
#define DDERR_INVALIDCAPS                       MAKE_DDHRESULT( 100 )
#define DDERR_INVALIDCLIPLIST                   MAKE_DDHRESULT( 110 )
#define DDERR_INVALIDMODE                       MAKE_DDHRESULT( 120 )
#define DDERR_INVALIDOBJECT                     MAKE_DDHRESULT( 130 )
#define DDERR_INVALIDPARAMS                     E_INVALIDARG
#define DDERR_INVALIDPIXELFORMAT                MAKE_DDHRESULT( 145 )
#define DDERR_INVALIDRECT                       MAKE_DDHRESULT( 150 )
#define DDERR_LOCKEDSURFACES                    MAKE_DDHRESULT( 160 )
#define DDERR_NO3D                              MAKE_DDHRESULT( 170 )
#define DDERR_NOALPHAHW                         MAKE_DDHRESULT( 180 )
#define DDERR_NOSTEREOHARDWARE          MAKE_DDHRESULT( 181 )
#define DDERR_NOSURFACELEFT                             MAKE_DDHRESULT( 182 )
#define DDERR_NOCLIPLIST                        MAKE_DDHRESULT( 205 )
#define DDERR_NOCOLORCONVHW                     MAKE_DDHRESULT( 210 )
#define DDERR_NOCOOPERATIVELEVELSET             MAKE_DDHRESULT( 212 )
#define DDERR_NOCOLORKEY                        MAKE_DDHRESULT( 215 )
#define DDERR_NOCOLORKEYHW                      MAKE_DDHRESULT( 220 )
#define DDERR_NODIRECTDRAWSUPPORT               MAKE_DDHRESULT( 222 )
#define DDERR_NOEXCLUSIVEMODE                   MAKE_DDHRESULT( 225 )
#define DDERR_NOFLIPHW                          MAKE_DDHRESULT( 230 )
#define DDERR_NOGDI                             MAKE_DDHRESULT( 240 )
#define DDERR_NOMIRRORHW                        MAKE_DDHRESULT( 250 )
#define DDERR_NOTFOUND                          MAKE_DDHRESULT( 255 )
#define DDERR_NOOVERLAYHW                       MAKE_DDHRESULT( 260 )
#define DDERR_OVERLAPPINGRECTS                  MAKE_DDHRESULT( 270 )
#define DDERR_NORASTEROPHW                      MAKE_DDHRESULT( 280 )
#define DDERR_NOROTATIONHW                      MAKE_DDHRESULT( 290 )
#define DDERR_NOSTRETCHHW                       MAKE_DDHRESULT( 310 )
#define DDERR_NOT4BITCOLOR                      MAKE_DDHRESULT( 316 )
#define DDERR_NOT4BITCOLORINDEX                 MAKE_DDHRESULT( 317 )
#define DDERR_NOT8BITCOLOR                      MAKE_DDHRESULT( 320 )
#define DDERR_NOTEXTUREHW                       MAKE_DDHRESULT( 330 )
#define DDERR_NOVSYNCHW                         MAKE_DDHRESULT( 335 )
#define DDERR_NOZBUFFERHW                       MAKE_DDHRESULT( 340 )
#define DDERR_NOZOVERLAYHW                      MAKE_DDHRESULT( 350 )
#define DDERR_OUTOFCAPS                         MAKE_DDHRESULT( 360 )
#define DDERR_OUTOFMEMORY                       E_OUTOFMEMORY
#define DDERR_OUTOFVIDEOMEMORY                  MAKE_DDHRESULT( 380 )
#define DDERR_OVERLAYCANTCLIP                   MAKE_DDHRESULT( 382 )
#define DDERR_OVERLAYCOLORKEYONLYONEACTIVE      MAKE_DDHRESULT( 384 )
#define DDERR_PALETTEBUSY                       MAKE_DDHRESULT( 387 )
#define DDERR_COLORKEYNOTSET                    MAKE_DDHRESULT( 400 )
#define DDERR_SURFACEALREADYATTACHED            MAKE_DDHRESULT( 410 )
#define DDERR_SURFACEALREADYDEPENDENT           MAKE_DDHRESULT( 420 )
#define DDERR_SURFACEBUSY                       MAKE_DDHRESULT( 430 )
#define DDERR_CANTLOCKSURFACE                   MAKE_DDHRESULT( 435 )
#define DDERR_SURFACEISOBSCURED                 MAKE_DDHRESULT( 440 )
#define DDERR_SURFACELOST                       MAKE_DDHRESULT( 450 )
#define DDERR_SURFACENOTATTACHED                MAKE_DDHRESULT( 460 )
#define DDERR_TOOBIGHEIGHT                      MAKE_DDHRESULT( 470 )
#define DDERR_TOOBIGSIZE                        MAKE_DDHRESULT( 480 )
#define DDERR_TOOBIGWIDTH                       MAKE_DDHRESULT( 490 )
#define DDERR_UNSUPPORTED                       E_NOTIMPL
#define DDERR_UNSUPPORTEDFORMAT                 MAKE_DDHRESULT( 510 )
#define DDERR_UNSUPPORTEDMASK                   MAKE_DDHRESULT( 520 )
#define DDERR_INVALIDSTREAM                     MAKE_DDHRESULT( 521 )
#define DDERR_VERTICALBLANKINPROGRESS           MAKE_DDHRESULT( 537 )
#define DDERR_WASSTILLDRAWING                   MAKE_DDHRESULT( 540 )
#define DDERR_DDSCAPSCOMPLEXREQUIRED            MAKE_DDHRESULT( 542 )
#define DDERR_XALIGN                            MAKE_DDHRESULT( 560 )
#define DDERR_INVALIDDIRECTDRAWGUID             MAKE_DDHRESULT( 561 )
#define DDERR_DIRECTDRAWALREADYCREATED          MAKE_DDHRESULT( 562 )
#define DDERR_NODIRECTDRAWHW                    MAKE_DDHRESULT( 563 )
#define DDERR_PRIMARYSURFACEALREADYEXISTS       MAKE_DDHRESULT( 564 )
#define DDERR_NOEMULATION                       MAKE_DDHRESULT( 565 )
#define DDERR_REGIONTOOSMALL                    MAKE_DDHRESULT( 566 )
#define DDERR_CLIPPERISUSINGHWND                MAKE_DDHRESULT( 567 )
#define DDERR_NOCLIPPERATTACHED                 MAKE_DDHRESULT( 568 )
#define DDERR_NOHWND                            MAKE_DDHRESULT( 569 )
#define DDERR_HWNDSUBCLASSED                    MAKE_DDHRESULT( 570 )
#define DDERR_HWNDALREADYSET                    MAKE_DDHRESULT( 571 )
#define DDERR_NOPALETTEATTACHED                 MAKE_DDHRESULT( 572 )
#define DDERR_NOPALETTEHW                       MAKE_DDHRESULT( 573 )
#define DDERR_BLTFASTCANTCLIP                   MAKE_DDHRESULT( 574 )
#define DDERR_NOBLTHW                           MAKE_DDHRESULT( 575 )
#define DDERR_NODDROPSHW                        MAKE_DDHRESULT( 576 )
#define DDERR_OVERLAYNOTVISIBLE                 MAKE_DDHRESULT( 577 )
#define DDERR_NOOVERLAYDEST                     MAKE_DDHRESULT( 578 )
#define DDERR_INVALIDPOSITION                   MAKE_DDHRESULT( 579 )
#define DDERR_NOTAOVERLAYSURFACE                MAKE_DDHRESULT( 580 )
#define DDERR_EXCLUSIVEMODEALREADYSET           MAKE_DDHRESULT( 581 )
#define DDERR_NOTFLIPPABLE                      MAKE_DDHRESULT( 582 )
#define DDERR_CANTDUPLICATE                     MAKE_DDHRESULT( 583 )
#define DDERR_NOTLOCKED                         MAKE_DDHRESULT( 584 )
#define DDERR_CANTCREATEDC                      MAKE_DDHRESULT( 585 )
#define DDERR_NODC                              MAKE_DDHRESULT( 586 )
#define DDERR_WRONGMODE                         MAKE_DDHRESULT( 587 )
#define DDERR_IMPLICITLYCREATED                 MAKE_DDHRESULT( 588 )
#define DDERR_NOTPALETTIZED                     MAKE_DDHRESULT( 589 )
#define DDERR_UNSUPPORTEDMODE                   MAKE_DDHRESULT( 590 )
#define DDERR_NOMIPMAPHW                        MAKE_DDHRESULT( 591 )
#define DDERR_INVALIDSURFACETYPE                MAKE_DDHRESULT( 592 )
#define DDERR_NOOPTIMIZEHW                      MAKE_DDHRESULT( 600 )
#define DDERR_NOTLOADED                         MAKE_DDHRESULT( 601 )
#define DDERR_NOFOCUSWINDOW                     MAKE_DDHRESULT( 602 )
#define DDERR_NOTONMIPMAPSUBLEVEL               MAKE_DDHRESULT( 603 )
#define DDERR_DCALREADYCREATED                  MAKE_DDHRESULT( 620 )
#define DDERR_NONONLOCALVIDMEM                  MAKE_DDHRESULT( 630 )
#define DDERR_CANTPAGELOCK                      MAKE_DDHRESULT( 640 )
#define DDERR_CANTPAGEUNLOCK                    MAKE_DDHRESULT( 660 )
#define DDERR_NOTPAGELOCKED                     MAKE_DDHRESULT( 680 )
#define DDERR_MOREDATA                          MAKE_DDHRESULT( 690 )
#define DDERR_EXPIRED                           MAKE_DDHRESULT( 691 )
#define DDERR_TESTFINISHED                      MAKE_DDHRESULT( 692 )
#define DDERR_NEWMODE                           MAKE_DDHRESULT( 693 )
#define DDERR_D3DNOTINITIALIZED                 MAKE_DDHRESULT( 694 )
#define DDERR_VIDEONOTACTIVE                    MAKE_DDHRESULT( 695 )
#define DDERR_NOMONITORINFORMATION              MAKE_DDHRESULT( 696 )
#define DDERR_NODRIVERSUPPORT                   MAKE_DDHRESULT( 697 )
#define DDERR_DEVICEDOESNTOWNSURFACE            MAKE_DDHRESULT( 699 )
#define DDERR_NOTINITIALIZED                    CO_E_NOTINITIALIZED
#endif
