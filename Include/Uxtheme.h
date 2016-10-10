/*+@@file@@----------------------------------------------------------------*//*!
 \file		Uxtheme1.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jun  3 17:37:23 2016
 \date		Modified on Fri Jun  3 17:37:23 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef _UXTHEME_H_
#define _UXTHEME_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <commctrl.h>
#ifndef THEMEAPI
#if !defined(_UXTHEME_)
#define THEMEAPI          extern DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define THEMEAPI_(type)   extern DECLSPEC_IMPORT type STDAPICALLTYPE
#else
#define THEMEAPI          STDAPI
#define THEMEAPI_(type)   STDAPI_(type)
#endif
#endif
typedef HANDLE HTHEME;
#if (_WIN32_WINNT >= 0x0600)
#define MAX_THEMECOLOR  64
#define MAX_THEMESIZE   64
#endif
#if (NTDDI_VERSION>= NTDDI_WIN7)
BOOL WINAPI BeginPanningFeedback(HWND hwnd);
BOOL WINAPI UpdatePanningFeedback(HWND hwnd, LONG lTotalOverpanOffsetX, LONG lTotalOverpanOffsetY, BOOL fInInertia);
BOOL WINAPI EndPanningFeedback(HWND hwnd, BOOL fAnimateBack);
#endif
THEMEAPI_(HTHEME)OpenThemeData(HWND hwnd, LPCWSTR pszClassList);
#define OTD_FORCE_RECT_SIZING   0x00000001
#define OTD_NONCLIENT           0x00000002
#define OTD_VALIDBITS           (OTD_FORCE_RECT_SIZING | \
                             OTD_NONCLIENT)
THEMEAPI_(HTHEME)OpenThemeDataEx(HWND hwnd, LPCWSTR pszClassList, DWORD dwFlags);
THEMEAPI CloseThemeData(HTHEME hTheme);
THEMEAPI DrawThemeBackground(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, LPCRECT pRect, LPCRECT pClipRect);
#define DTBG_CLIPRECT           0x00000001
#define DTBG_DRAWSOLID          0x00000002
#define DTBG_OMITBORDER         0x00000004
#define DTBG_OMITCONTENT        0x00000008
#define DTBG_COMPUTINGREGION    0x00000010
#define DTBG_MIRRORDC           0x00000020
#define DTBG_NOMIRROR           0x00000040
#define DTBG_VALIDBITS          (DTBG_CLIPRECT | \
                             DTBG_DRAWSOLID | \
                             DTBG_OMITBORDER | \
                             DTBG_OMITCONTENT | \
                             DTBG_COMPUTINGREGION | \
                             DTBG_MIRRORDC | \
                             DTBG_NOMIRROR)
typedef struct _DTBGOPTS {
	DWORD dwSize;
	DWORD dwFlags;
	RECT rcClip;
} DTBGOPTS, *PDTBGOPTS;
THEMEAPI DrawThemeBackgroundEx(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, LPCRECT pRect, const DTBGOPTS *pOptions);
#define DTT_GRAYED              0x00000001
#define DTT_FLAGS2VALIDBITS     (DTT_GRAYED)
THEMEAPI DrawThemeText(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, LPCWSTR pszText, int cchText, DWORD dwTextFlags, DWORD dwTextFlags2, LPCRECT pRect);
THEMEAPI GetThemeBackgroundContentRect(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, LPCRECT pBoundingRect, LPRECT pContentRect);
THEMEAPI GetThemeBackgroundExtent(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, LPCRECT pContentRect, LPRECT pExtentRect);
THEMEAPI GetThemeBackgroundRegion(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, LPCRECT pRect, HRGN *pRegion);
enum THEMESIZE {
	TS_MIN,
	TS_TRUE,
	TS_DRAW
};
THEMEAPI GetThemePartSize(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, LPCRECT prc, enum THEMESIZE eSize, SIZE *psz);
THEMEAPI GetThemeTextExtent(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, LPCWSTR pszText, int cchCharCount, DWORD dwTextFlags, LPCRECT pBoundingRect, LPRECT pExtentRect);
THEMEAPI GetThemeTextMetrics(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, TEXTMETRICW *ptm);
#define HTTB_BACKGROUNDSEG          0x00000000
#define HTTB_FIXEDBORDER            0x00000002
#define HTTB_CAPTION                0x00000004
#define HTTB_RESIZINGBORDER_LEFT    0x00000010
#define HTTB_RESIZINGBORDER_TOP     0x00000020
#define HTTB_RESIZINGBORDER_RIGHT   0x00000040
#define HTTB_RESIZINGBORDER_BOTTOM  0x00000080
#define HTTB_RESIZINGBORDER         (HTTB_RESIZINGBORDER_LEFT | \
                                 HTTB_RESIZINGBORDER_TOP | \
                                 HTTB_RESIZINGBORDER_RIGHT | \
                                 HTTB_RESIZINGBORDER_BOTTOM)
#define HTTB_SIZINGTEMPLATE         0x00000100
#define HTTB_SYSTEMSIZINGMARGINS    0x00000200
THEMEAPI HitTestThemeBackground(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, DWORD dwOptions, LPCRECT pRect, HRGN hrgn, POINT ptTest, WORD *pwHitTestCode);
THEMEAPI DrawThemeEdge(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, LPCRECT pDestRect, UINT uEdge, UINT uFlags, LPRECT pContentRect);
THEMEAPI DrawThemeIcon(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, LPCRECT pRect, HIMAGELIST himl, int iImageIndex);
THEMEAPI_(BOOL)IsThemePartDefined(HTHEME hTheme, int iPartId, int iStateId);
THEMEAPI_(BOOL)IsThemeBackgroundPartiallyTransparent(HTHEME hTheme, int iPartId, int iStateId);
THEMEAPI GetThemeColor(HTHEME hTheme, int iPartId, int iStateId, int iPropId, COLORREF *pColor);
THEMEAPI GetThemeMetric(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, int iPropId, int *piVal);
THEMEAPI GetThemeString(HTHEME hTheme, int iPartId, int iStateId, int iPropId, LPWSTR pszBuff, int cchMaxBuffChars);
THEMEAPI GetThemeBool(HTHEME hTheme, int iPartId, int iStateId, int iPropId, BOOL *pfVal);
THEMEAPI GetThemeInt(HTHEME hTheme, int iPartId, int iStateId, int iPropId, int *piVal);
THEMEAPI GetThemeEnumValue(HTHEME hTheme, int iPartId, int iStateId, int iPropId, int *piVal);
THEMEAPI GetThemePosition(HTHEME hTheme, int iPartId, int iStateId, int iPropId, POINT *pPoint);
THEMEAPI GetThemeFont(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, int iPropId, LOGFONTW *pFont);
THEMEAPI GetThemeRect(HTHEME hTheme, int iPartId, int iStateId, int iPropId, LPRECT pRect);
typedef struct _MARGINS {
	int cxLeftWidth;
	int cxRightWidth;
	int cyTopHeight;
	int cyBottomHeight;
} MARGINS, *PMARGINS;
THEMEAPI GetThemeMargins(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, int iPropId, LPCRECT prc, MARGINS *pMargins);
#if (_WIN32_WINNT >= 0x0600)
#define MAX_INTLIST_COUNT 402
#else
#define MAX_INTLIST_COUNT 10
#endif
typedef struct _INTLIST {
	int iValueCount;
	int iValues[MAX_INTLIST_COUNT];
} INTLIST, *PINTLIST;
THEMEAPI GetThemeIntList(HTHEME hTheme, int iPartId, int iStateId, int iPropId, INTLIST *pIntList);
enum PROPERTYORIGIN {
	PO_STATE,
	PO_PART,
	PO_CLASS,
	PO_GLOBAL,
	PO_NOTFOUND
};
THEMEAPI GetThemePropertyOrigin(HTHEME hTheme, int iPartId, int iStateId, int iPropId, enum PROPERTYORIGIN *pOrigin);
THEMEAPI SetWindowTheme(HWND hwnd, LPCWSTR pszSubAppName, LPCWSTR pszSubIdList);
THEMEAPI GetThemeFilename(HTHEME hTheme, int iPartId, int iStateId, int iPropId, LPWSTR pszThemeFileName, int cchMaxBuffChars);
THEMEAPI_(COLORREF)GetThemeSysColor(HTHEME hTheme, int iColorId);
THEMEAPI_(HBRUSH)GetThemeSysColorBrush(HTHEME hTheme, int iColorId);
THEMEAPI_(BOOL)GetThemeSysBool(HTHEME hTheme, int iBoolId);
THEMEAPI_(int) GetThemeSysSize(HTHEME hTheme, int iSizeId);
THEMEAPI GetThemeSysFont(HTHEME hTheme, int iFontId, LOGFONTW *plf);
THEMEAPI GetThemeSysString(HTHEME hTheme, int iStringId, LPWSTR pszStringBuff, int cchMaxStringChars);
THEMEAPI GetThemeSysInt(HTHEME hTheme, int iIntId, int *piValue);
THEMEAPI_(BOOL)IsThemeActive(VOID);
THEMEAPI_(BOOL)IsAppThemed(VOID);
THEMEAPI_(HTHEME)GetWindowTheme(HWND hwnd);
#define ETDT_DISABLE                    0x00000001
#define ETDT_ENABLE                     0x00000002
#define ETDT_USETABTEXTURE              0x00000004
#define ETDT_ENABLETAB              (ETDT_ENABLE | \
                                 ETDT_USETABTEXTURE)
#if (_WIN32_WINNT >= 0x0600)
#define ETDT_USEAEROWIZARDTABTEXTURE    0x00000008
#define ETDT_ENABLEAEROWIZARDTAB    (ETDT_ENABLE | \
                                 ETDT_USEAEROWIZARDTABTEXTURE)
#define ETDT_VALIDBITS              (ETDT_DISABLE | \
                                 ETDT_ENABLE | \
                                 ETDT_USETABTEXTURE | \
                                 ETDT_USEAEROWIZARDTABTEXTURE)
#endif
THEMEAPI EnableThemeDialogTexture(HWND hwnd, DWORD dwFlags);
THEMEAPI_(BOOL)IsThemeDialogTextureEnabled(HWND hwnd);
#define STAP_ALLOW_NONCLIENT    (1UL << 0)
#define STAP_ALLOW_CONTROLS     (1UL << 1)
#define STAP_ALLOW_WEBCONTENT   (1UL << 2)
#define STAP_VALIDBITS          (STAP_ALLOW_NONCLIENT | \
                             STAP_ALLOW_CONTROLS | \
                             STAP_ALLOW_WEBCONTENT)
THEMEAPI_(DWORD)GetThemeAppProperties(VOID);
THEMEAPI_(void) SetThemeAppProperties(DWORD dwFlags);
THEMEAPI GetCurrentThemeName(LPWSTR pszThemeFileName, int cchMaxNameChars, LPWSTR pszColorBuff, int cchMaxColorChars, LPWSTR pszSizeBuff, int cchMaxSizeChars);
#define SZ_THDOCPROP_DISPLAYNAME    L"DisplayName"
#define SZ_THDOCPROP_CANONICALNAME  L"ThemeName"
#define SZ_THDOCPROP_TOOLTIP        L"ToolTip"
#define SZ_THDOCPROP_AUTHOR         L"author"
THEMEAPI GetThemeDocumentationProperty(LPCWSTR pszThemeName, LPCWSTR pszPropertyName, LPWSTR pszValueBuff, int cchMaxValChars);
THEMEAPI DrawThemeParentBackground(HWND hwnd, HDC hdc, const RECT *prc);
THEMEAPI EnableTheming(BOOL fEnable);
#define GBF_DIRECT      0x00000001
#define GBF_COPY        0x00000002
#define GBF_VALIDBITS   (GBF_DIRECT | \
                     GBF_COPY)
#if (_WIN32_WINNT >= 0x0600)
#define DTPB_WINDOWDC           0x00000001
#define DTPB_USECTLCOLORSTATIC  0x00000002
#define DTPB_USEERASEBKGND      0x00000004
THEMEAPI DrawThemeParentBackgroundEx(HWND hwnd, HDC hdc, DWORD dwFlags, const RECT *prc);
enum WINDOWTHEMEATTRIBUTETYPE {
	WTA_NONCLIENT = 1
};
typedef struct _WTA_OPTIONS {
	DWORD dwFlags;
	DWORD dwMask;
} WTA_OPTIONS, *PWTA_OPTIONS;
#define WTNCA_NODRAWCAPTION       0x00000001
#define WTNCA_NODRAWICON          0x00000002
#define WTNCA_NOSYSMENU           0x00000004
#define WTNCA_NOMIRRORHELP        0x00000008
#define WTNCA_VALIDBITS           (WTNCA_NODRAWCAPTION | \
	                               WTNCA_NODRAWICON | \
	                               WTNCA_NOSYSMENU | \
	                               WTNCA_NOMIRRORHELP)
THEMEAPI SetWindowThemeAttribute(HWND hwnd, enum WINDOWTHEMEATTRIBUTETYPE eAttribute, PVOID pvAttribute, DWORD cbAttribute);
static HRESULT __forceinline SetWindowThemeNonClientAttributes(HWND hwnd, DWORD dwMask, DWORD dwAttributes)
{
	WTA_OPTIONS wta;
	wta.dwFlags = dwAttributes;
	wta.dwMask = dwMask;
	return SetWindowThemeAttribute(hwnd, WTA_NONCLIENT, (void *)&(wta), sizeof(wta));
}
#endif
typedef
int
(WINAPI *DTT_CALLBACK_PROC) (HDC hdc, LPWSTR pszText, int cchText, LPRECT prc, UINT dwFlags, LPARAM lParam);
#define DTT_TEXTCOLOR       (1UL << 0)
#define DTT_BORDERCOLOR     (1UL << 1)
#define DTT_SHADOWCOLOR     (1UL << 2)
#define DTT_SHADOWTYPE      (1UL << 3)
#define DTT_SHADOWOFFSET    (1UL << 4)
#define DTT_BORDERSIZE      (1UL << 5)
#define DTT_FONTPROP        (1UL << 6)
#define DTT_COLORPROP       (1UL << 7)
#define DTT_STATEID         (1UL << 8)
#define DTT_CALCRECT        (1UL << 9)
#define DTT_APPLYOVERLAY    (1UL << 10)
#define DTT_GLOWSIZE        (1UL << 11)
#define DTT_CALLBACK        (1UL << 12)
#define DTT_COMPOSITED      (1UL << 13)
#define DTT_VALIDBITS       (DTT_TEXTCOLOR | \
	                         DTT_BORDERCOLOR | \
	                         DTT_SHADOWCOLOR | \
	                         DTT_SHADOWTYPE | \
	                         DTT_SHADOWOFFSET | \
	                         DTT_BORDERSIZE | \
	                         DTT_FONTPROP | \
	                         DTT_COLORPROP | \
	                         DTT_STATEID | \
	                         DTT_CALCRECT | \
	                         DTT_APPLYOVERLAY | \
	                         DTT_GLOWSIZE | \
	                         DTT_COMPOSITED)
typedef struct _DTTOPTS {
DWORD dwSize;
DWORD dwFlags;
COLORREF crText;
COLORREF crBorder;
COLORREF crShadow;
int iTextShadowType;
POINT ptShadowOffset;
int iBorderSize;
int iFontPropId;
int iColorPropId;
int iStateId;
BOOL fApplyOverlay;
int iGlowSize;
DTT_CALLBACK_PROC pfnDrawTextCallback;
LPARAM lParam;
} DTTOPTS, *PDTTOPTS;
#if (_WIN32_WINNT >= 0x0600)
THEMEAPI DrawThemeTextEx(HTHEME hTheme, HDC hdc, int iPartId, int iStateId, LPCWSTR pszText, int cchText, DWORD dwTextFlags, LPRECT pRect, const DTTOPTS *pOptions);
THEMEAPI GetThemeBitmap(HTHEME hTheme, int iPartId, int iStateId, int iPropId, ULONG dwFlags, HBITMAP *phBitmap);
THEMEAPI GetThemeStream(HTHEME hTheme, int iPartId, int iStateId, int iPropId, VOID **ppvStream, DWORD *pcbStream, HINSTANCE hInst);
THEMEAPI BufferedPaintInit(VOID);
THEMEAPI BufferedPaintUnInit(VOID);
typedef HANDLE HPAINTBUFFER;
typedef enum _BP_BUFFERFORMAT {
BPBF_COMPATIBLEBITMAP,
BPBF_DIB,
BPBF_TOPDOWNDIB,
BPBF_TOPDOWNMONODIB
} BP_BUFFERFORMAT;
#define BPBF_COMPOSITED BPBF_TOPDOWNDIB
typedef enum _BP_ANIMATIONSTYLE {
BPAS_NONE,
BPAS_LINEAR,
BPAS_CUBIC,
BPAS_SINE
} BP_ANIMATIONSTYLE;
typedef struct _BP_ANIMATIONPARAMS {
DWORD cbSize;
DWORD dwFlags;
BP_ANIMATIONSTYLE style;
DWORD dwDuration;
} BP_ANIMATIONPARAMS, *PBP_ANIMATIONPARAMS;
#define BPPF_ERASE               0x0001
#define BPPF_NOCLIP              0x0002
#define BPPF_NONCLIENT           0x0004
typedef struct _BP_PAINTPARAMS {
DWORD cbSize;
DWORD dwFlags;
const RECT *prcExclude;
const BLENDFUNCTION *pBlendFunction;
} BP_PAINTPARAMS, *PBP_PAINTPARAMS;
THEMEAPI_(HPAINTBUFFER)BeginBufferedPaint(HDC hdcTarget, const RECT *prcTarget, BP_BUFFERFORMAT dwFormat, BP_PAINTPARAMS *pPaintParams, HDC *phdc);
THEMEAPI EndBufferedPaint(HPAINTBUFFER hBufferedPaint, BOOL fUpdateTarget);
THEMEAPI GetBufferedPaintTargetRect(HPAINTBUFFER hBufferedPaint, RECT *prc);
THEMEAPI_(HDC)GetBufferedPaintTargetDC(HPAINTBUFFER hBufferedPaint);
THEMEAPI_(HDC)GetBufferedPaintDC(HPAINTBUFFER hBufferedPaint);
THEMEAPI GetBufferedPaintBits(HPAINTBUFFER hBufferedPaint, RGBQUAD **ppbBuffer, int *pcxRow);
THEMEAPI BufferedPaintClear(HPAINTBUFFER hBufferedPaint, const RECT *prc);
THEMEAPI BufferedPaintSetAlpha(HPAINTBUFFER hBufferedPaint, const RECT *prc, BYTE alpha);
#define BufferedPaintMakeOpaque(hBufferedPaint, prc) BufferedPaintSetAlpha(hBufferedPaint, prc, 255)
THEMEAPI BufferedPaintStopAllAnimations(HWND hwnd);
typedef HANDLE HANIMATIONBUFFER;
THEMEAPI_(HANIMATIONBUFFER)BeginBufferedAnimation(HWND hwnd, HDC hdcTarget, const RECT *prcTarget, BP_BUFFERFORMAT dwFormat, BP_PAINTPARAMS *pPaintParams, BP_ANIMATIONPARAMS *pAnimationParams, HDC *phdcFrom, HDC *phdcTo);
THEMEAPI EndBufferedAnimation(HANIMATIONBUFFER hbpAnimation, BOOL fUpdateTarget);
THEMEAPI_(BOOL)BufferedPaintRenderAnimation(HWND hwnd, HDC hdcTarget);
THEMEAPI_(BOOL)IsCompositionActive();
THEMEAPI GetThemeTransitionDuration(HTHEME hTheme, int iPartId, int iStateIdFrom, int iStateIdTo, int iPropId, DWORD *pdwDuration);
#endif
#endif
