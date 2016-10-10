/*+@@file@@----------------------------------------------------------------*//*!
 \file		ntgdi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:54:19 2016
 \date		Modified on Sun Sep 11 22:54:19 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef NTGDI_H__
#define NTGDI_H__
#ifndef W32KAPI
#define W32KAPI  DECLSPEC_ADDRSAFE
#endif
#if __POCC__ >= 500
#pragma once
#endif
typedef struct _HLSURF_INFORMATION_PROBE
{
    union {
        HLSURF_INFORMATION_SURFACE       Surface;
        HLSURF_INFORMATION_PRESENTFLAGS  PresentFlags;
        HLSURF_INFORMATION_TOKENUPDATEID UpdateId;
        HLSURF_INFORMATION_SET_SIGNALING SetSignaling;
        DWMSURFACEDATA                   SurfaceData;
        HLSURF_INFORMATION_DIRTYREGIONS  DirtyRegions;
        HLSURF_INFORMATION_REDIRSTYLE    RedirStyle;
    } u;
} HLSURF_INFORMATION_PROBE, *PHLSURF_INFORMATION_PROBE;
#define TRACE_SURFACE_ALLOCS    (DBG || 0)
#ifdef  COMBOX_SANDBOX
#define DX_LONGHORN_PRESERVEDC
#endif
W32KAPI BOOL APIENTRY NtGdiInit();
W32KAPI int APIENTRY NtGdiSetDIBitsToDeviceInternal(HDC hdcDest, int xDst, int yDst, DWORD cx, DWORD cy, int xSrc, int ySrc, DWORD iStartScan, DWORD cNumScan, LPBYTE pInitBits, LPBITMAPINFO pbmi, DWORD iUsage, UINT cjMaxBits, UINT cjMaxInfo, BOOL bTransformCoordinates, HANDLE hcmXform);
W32KAPI BOOL APIENTRY NtGdiGetFontResourceInfoInternalW(LPWSTR pwszFiles, ULONG cwc, ULONG cFiles, UINT cjIn, LPDWORD pdwBytes, LPVOID pvBuf, DWORD iType);
W32KAPI DWORD APIENTRY NtGdiGetGlyphIndicesW(HDC hdc, LPWSTR pwc, int cwc, LPWORD pgi, DWORD iMode);
W32KAPI DWORD APIENTRY NtGdiGetGlyphIndicesWInternal(HDC hdc, LPWSTR pwc, int cwc, LPWORD pgi, DWORD iMode, BOOL bSubset);
W32KAPI HPALETTE APIENTRY NtGdiCreatePaletteInternal(LPLOGPALETTE pLogPal, UINT cEntries);
W32KAPI BOOL APIENTRY NtGdiArcInternal(ARCTYPE arctype, HDC hdc, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
W32KAPI int APIENTRY NtGdiStretchDIBitsInternal(HDC hdc, int xDst, int yDst, int cxDst, int cyDst, int xSrc, int ySrc, int cxSrc, int cySrc, LPBYTE pjInit, LPBITMAPINFO pbmi, DWORD dwUsage, DWORD dwRop4, UINT cjMaxInfo, UINT cjMaxBits, HANDLE hcmXform);
W32KAPI ULONG APIENTRY NtGdiGetOutlineTextMetricsInternalW(HDC hdc, ULONG cjotm, OUTLINETEXTMETRICW *potmw, TMDIFF *ptmd);
W32KAPI BOOL APIENTRY NtGdiGetAndSetDCDword(HDC hdc, UINT u, DWORD dwIn, DWORD *pdwResult);
W32KAPI HANDLE APIENTRY NtGdiGetDCObject(HDC hdc, int itype);
W32KAPI HDC APIENTRY NtGdiGetDCforBitmap(HBITMAP hsurf);
W32KAPI BOOL APIENTRY NtGdiGetMonitorID(HDC hdc, DWORD dwSize, LPWSTR pszMonitorID);
#define FL_UFI_PRIVATEFONT      1
#define FL_UFI_DESIGNVECTOR_PFF 2
#define FL_UFI_MEMORYFONT       4
W32KAPI INT APIENTRY NtGdiGetLinkedUFIs(HDC hdc, PUNIVERSAL_FONT_ID pufiLinkedUFIs, INT BufferSize);
W32KAPI BOOL APIENTRY NtGdiSetLinkedUFIs(HDC hdc, PUNIVERSAL_FONT_ID pufiLinks, ULONG uNumUFIs);
W32KAPI BOOL APIENTRY NtGdiGetUFI(HDC hdc, PUNIVERSAL_FONT_ID pufi, DESIGNVECTOR *pdv, ULONG *pcjDV, ULONG *pulBaseCheckSum, FLONG *pfl);
W32KAPI BOOL APIENTRY NtGdiForceUFIMapping(HDC hdc, PUNIVERSAL_FONT_ID pufi);
W32KAPI BOOL APIENTRY NtGdiGetUFIPathname(PUNIVERSAL_FONT_ID pufi, ULONG *pcwc, LPWSTR pwszPathname, ULONG *pcNumFiles, FLONG fl, BOOL *pbMemFont, ULONG *pcjView, PVOID pvView, BOOL *pbTTC, ULONG *piTTC);
W32KAPI BOOL APIENTRY NtGdiAddRemoteFontToDC(HDC hdc, PVOID pvBuffer, ULONG cjBuffer, PUNIVERSAL_FONT_ID pufi);
W32KAPI HANDLE APIENTRY NtGdiAddFontMemResourceEx(PVOID pvBuffer, DWORD cjBuffer, DESIGNVECTOR *pdv, ULONG cjDV, DWORD *pNumFonts);
W32KAPI BOOL APIENTRY NtGdiRemoveFontMemResourceEx(HANDLE hMMFont);
W32KAPI BOOL APIENTRY NtGdiUnmapMemFont(PVOID pvView);
W32KAPI BOOL APIENTRY NtGdiRemoveMergeFont(HDC hdc, UNIVERSAL_FONT_ID *pufi);
W32KAPI BOOL APIENTRY NtGdiAnyLinkedFonts();
W32KAPI BOOL APIENTRY NtGdiGetEmbUFI(HDC hdc, PUNIVERSAL_FONT_ID pufi, DESIGNVECTOR *pdv, ULONG *pcjDV, ULONG *pulBaseCheckSum, FLONG *pfl, KERNEL_PVOID *embFontID);
W32KAPI ULONG APIENTRY NtGdiGetEmbedFonts();
W32KAPI BOOL APIENTRY NtGdiChangeGhostFont(KERNEL_PVOID *pfontID, BOOL bLoad);
W32KAPI BOOL APIENTRY NtGdiAddEmbFontToDC(HDC hdc, VOID **pFontID);
W32KAPI BOOL APIENTRY NtGdiFontIsLinked(HDC hdc);
W32KAPI ULONG_PTR APIENTRY NtGdiPolyPolyDraw(HDC hdc, PPOINT ppt, PULONG pcpt, ULONG ccpt, int iFunc);
W32KAPI LONG APIENTRY NtGdiDoPalette(HPALETTE hpal, WORD iStart, WORD cEntries, PALETTEENTRY *pPalEntries, DWORD iFunc, BOOL bInbound);
W32KAPI BOOL APIENTRY NtGdiComputeXformCoefficients(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiGetWidthTable(HDC hdc, ULONG cSpecial, WCHAR *pwc, ULONG cwc, USHORT *psWidth, WIDTHDATA *pwd, FLONG *pflInfo);
W32KAPI int APIENTRY NtGdiDescribePixelFormat(HDC hdc, int ipfd, UINT cjpfd, PPIXELFORMATDESCRIPTOR ppfd);
W32KAPI BOOL APIENTRY NtGdiSetPixelFormat(HDC hdc, int ipfd);
W32KAPI BOOL APIENTRY NtGdiSwapBuffers(HDC hdc);
W32KAPI DWORD APIENTRY NtGdiDxgGenericThunk(ULONG_PTR ulIndex, ULONG_PTR ulHandle, SIZE_T *pdwSizeOfPtr1, PVOID pvPtr1, SIZE_T *pdwSizeOfPtr2, PVOID pvPtr2);
W32KAPI DWORD APIENTRY NtGdiDdAddAttachedSurface(HANDLE hSurface, HANDLE hSurfaceAttached, PDD_ADDATTACHEDSURFACEDATA puAddAttachedSurfaceData);
W32KAPI BOOL APIENTRY NtGdiDdAttachSurface(HANDLE hSurfaceFrom, HANDLE hSurfaceTo);
W32KAPI DWORD APIENTRY NtGdiDdBlt(HANDLE hSurfaceDest, HANDLE hSurfaceSrc, PDD_BLTDATA puBltData);
W32KAPI DWORD APIENTRY NtGdiDdCanCreateSurface(HANDLE hDirectDraw, PDD_CANCREATESURFACEDATA puCanCreateSurfaceData);
W32KAPI DWORD APIENTRY NtGdiDdColorControl(HANDLE hSurface, PDD_COLORCONTROLDATA puColorControlData);
W32KAPI HANDLE APIENTRY NtGdiDdCreateDirectDrawObject(HDC hdc);
W32KAPI DWORD APIENTRY NtGdiDdCreateSurface(HANDLE hDirectDraw, HANDLE *hSurface, DDSURFACEDESC *puSurfaceDescription, DD_SURFACE_GLOBAL *puSurfaceGlobalData, DD_SURFACE_LOCAL *puSurfaceLocalData, DD_SURFACE_MORE *puSurfaceMoreData, DD_CREATESURFACEDATA *puCreateSurfaceData, HANDLE *puhSurface);
#ifdef DX_LONGHORN_PRESERVEDC
W32KAPI DWORD APIENTRY NtGdiDdChangeSurfacePointer(HANDLE hSurface, PVOID pSurfacePointer);
#endif
W32KAPI HANDLE APIENTRY NtGdiDdCreateSurfaceObject(HANDLE hDirectDrawLocal, HANDLE hSurface, PDD_SURFACE_LOCAL puSurfaceLocal, PDD_SURFACE_MORE puSurfaceMore, PDD_SURFACE_GLOBAL puSurfaceGlobal, BOOL bComplete);
W32KAPI BOOL APIENTRY NtGdiDdDeleteSurfaceObject(HANDLE hSurface);
W32KAPI BOOL APIENTRY NtGdiDdDeleteDirectDrawObject(HANDLE hDirectDrawLocal);
W32KAPI DWORD APIENTRY NtGdiDdDestroySurface(HANDLE hSurface, BOOL bRealDestroy);
W32KAPI DWORD APIENTRY NtGdiDdFlip(HANDLE hSurfaceCurrent, HANDLE hSurfaceTarget, HANDLE hSurfaceCurrentLeft, HANDLE hSurfaceTargetLeft, PDD_FLIPDATA puFlipData);
W32KAPI DWORD APIENTRY NtGdiDdGetAvailDriverMemory(HANDLE hDirectDraw, PDD_GETAVAILDRIVERMEMORYDATA puGetAvailDriverMemoryData);
W32KAPI DWORD APIENTRY NtGdiDdGetBltStatus(HANDLE hSurface, PDD_GETBLTSTATUSDATA puGetBltStatusData);
W32KAPI HDC APIENTRY NtGdiDdGetDC(HANDLE hSurface, PALETTEENTRY *puColorTable);
W32KAPI DWORD APIENTRY NtGdiDdGetDriverInfo(HANDLE hDirectDraw, PDD_GETDRIVERINFODATA puGetDriverInfoData);
W32KAPI DWORD APIENTRY NtGdiDdGetFlipStatus(HANDLE hSurface, PDD_GETFLIPSTATUSDATA puGetFlipStatusData);
W32KAPI DWORD APIENTRY NtGdiDdGetScanLine(HANDLE hDirectDraw, PDD_GETSCANLINEDATA puGetScanLineData);
W32KAPI DWORD APIENTRY NtGdiDdSetExclusiveMode(HANDLE hDirectDraw, PDD_SETEXCLUSIVEMODEDATA puSetExclusiveModeData);
W32KAPI DWORD APIENTRY NtGdiDdFlipToGDISurface(HANDLE hDirectDraw, PDD_FLIPTOGDISURFACEDATA puFlipToGDISurfaceData);
W32KAPI DWORD APIENTRY NtGdiDdLock(HANDLE hSurface, PDD_LOCKDATA puLockData, HDC hdcClip);
W32KAPI BOOL APIENTRY NtGdiDdQueryDirectDrawObject(HANDLE hDirectDrawLocal, PDD_HALINFO pHalInfo, DWORD *pCallBackFlags, LPD3DNTHAL_CALLBACKS puD3dCallbacks, LPD3DNTHAL_GLOBALDRIVERDATA puD3dDriverData, PDD_D3DBUFCALLBACKS puD3dBufferCallbacks, LPDDSURFACEDESC puD3dTextureFormats, DWORD *puNumHeaps, VIDEOMEMORY *puvmList, DWORD *puNumFourCC, DWORD *puFourCC);
W32KAPI BOOL APIENTRY NtGdiDdReenableDirectDrawObject(HANDLE hDirectDrawLocal, BOOL *pubNewMode);
W32KAPI BOOL APIENTRY NtGdiDdReleaseDC(HANDLE hSurface);
W32KAPI BOOL APIENTRY NtGdiDdResetVisrgn(HANDLE hSurface, HWND hwnd);
W32KAPI DWORD APIENTRY NtGdiDdSetColorKey(HANDLE hSurface, PDD_SETCOLORKEYDATA puSetColorKeyData);
W32KAPI DWORD APIENTRY NtGdiDdSetOverlayPosition(HANDLE hSurfaceSource, HANDLE hSurfaceDestination, PDD_SETOVERLAYPOSITIONDATA puSetOverlayPositionData);
W32KAPI VOID APIENTRY NtGdiDdUnattachSurface(HANDLE hSurface, HANDLE hSurfaceAttached);
W32KAPI DWORD APIENTRY NtGdiDdUnlock(HANDLE hSurface, PDD_UNLOCKDATA puUnlockData);
W32KAPI DWORD APIENTRY NtGdiDdUpdateOverlay(HANDLE hSurfaceDestination, HANDLE hSurfaceSource, PDD_UPDATEOVERLAYDATA puUpdateOverlayData);
W32KAPI DWORD APIENTRY NtGdiDdWaitForVerticalBlank(HANDLE hDirectDraw, PDD_WAITFORVERTICALBLANKDATA puWaitForVerticalBlankData);
W32KAPI HANDLE APIENTRY NtGdiDdGetDxHandle(HANDLE hDirectDraw, HANDLE hSurface, BOOL bRelease);
W32KAPI BOOL APIENTRY NtGdiDdSetGammaRamp(HANDLE hDirectDraw, HDC hdc, LPVOID lpGammaRamp);
W32KAPI DWORD APIENTRY NtGdiDdLockD3D(HANDLE hSurface, PDD_LOCKDATA puLockData);
W32KAPI DWORD APIENTRY NtGdiDdUnlockD3D(HANDLE hSurface, PDD_UNLOCKDATA puUnlockData);
W32KAPI DWORD APIENTRY NtGdiDdCreateD3DBuffer(HANDLE hDirectDraw, HANDLE *hSurface, DDSURFACEDESC *puSurfaceDescription, DD_SURFACE_GLOBAL *puSurfaceGlobalData, DD_SURFACE_LOCAL *puSurfaceLocalData, DD_SURFACE_MORE *puSurfaceMoreData, DD_CREATESURFACEDATA *puCreateSurfaceData, HANDLE *puhSurface);
W32KAPI DWORD APIENTRY NtGdiDdCanCreateD3DBuffer(HANDLE hDirectDraw, PDD_CANCREATESURFACEDATA puCanCreateSurfaceData);
W32KAPI DWORD APIENTRY NtGdiDdDestroyD3DBuffer(HANDLE hSurface);
W32KAPI DWORD APIENTRY NtGdiD3dContextCreate(HANDLE hDirectDrawLocal, HANDLE hSurfColor, HANDLE hSurfZ, D3DNTHAL_CONTEXTCREATEI *pdcci);
W32KAPI DWORD APIENTRY NtGdiD3dContextDestroy(LPD3DNTHAL_CONTEXTDESTROYDATA);
W32KAPI DWORD APIENTRY NtGdiD3dContextDestroyAll(LPD3DNTHAL_CONTEXTDESTROYALLDATA pdcdad);
W32KAPI DWORD APIENTRY NtGdiD3dValidateTextureStageState(LPD3DNTHAL_VALIDATETEXTURESTAGESTATEDATA pData);
W32KAPI DWORD APIENTRY NtGdiD3dDrawPrimitives2(HANDLE hCmdBuf, HANDLE hVBuf, LPD3DNTHAL_DRAWPRIMITIVES2DATA pded, FLATPTR *pfpVidMemCmd, DWORD *pdwSizeCmd, FLATPTR *pfpVidMemVtx, DWORD *pdwSizeVtx);
W32KAPI DWORD APIENTRY NtGdiDdGetDriverState(PDD_GETDRIVERSTATEDATA pdata);
W32KAPI DWORD APIENTRY NtGdiDdCreateSurfaceEx(HANDLE hDirectDraw, HANDLE hSurface, DWORD dwSurfaceHandle);
W32KAPI DWORD APIENTRY NtGdiDvpCanCreateVideoPort(HANDLE hDirectDraw, PDD_CANCREATEVPORTDATA puCanCreateVPortData);
W32KAPI DWORD APIENTRY NtGdiDvpColorControl(HANDLE hVideoPort, PDD_VPORTCOLORDATA puVPortColorData);
W32KAPI HANDLE APIENTRY NtGdiDvpCreateVideoPort(HANDLE hDirectDraw, PDD_CREATEVPORTDATA puCreateVPortData);
W32KAPI DWORD APIENTRY NtGdiDvpDestroyVideoPort(HANDLE hVideoPort, PDD_DESTROYVPORTDATA puDestroyVPortData);
W32KAPI DWORD APIENTRY NtGdiDvpFlipVideoPort(HANDLE hVideoPort, HANDLE hDDSurfaceCurrent, HANDLE hDDSurfaceTarget, PDD_FLIPVPORTDATA puFlipVPortData);
W32KAPI DWORD APIENTRY NtGdiDvpGetVideoPortBandwidth(HANDLE hVideoPort, PDD_GETVPORTBANDWIDTHDATA puGetVPortBandwidthData);
W32KAPI DWORD APIENTRY NtGdiDvpGetVideoPortField(HANDLE hVideoPort, PDD_GETVPORTFIELDDATA puGetVPortFieldData);
W32KAPI DWORD APIENTRY NtGdiDvpGetVideoPortFlipStatus(HANDLE hDirectDraw, PDD_GETVPORTFLIPSTATUSDATA puGetVPortFlipStatusData);
W32KAPI DWORD APIENTRY NtGdiDvpGetVideoPortInputFormats(HANDLE hVideoPort, PDD_GETVPORTINPUTFORMATDATA puGetVPortInputFormatData);
W32KAPI DWORD APIENTRY NtGdiDvpGetVideoPortLine(HANDLE hVideoPort, PDD_GETVPORTLINEDATA puGetVPortLineData);
W32KAPI DWORD APIENTRY NtGdiDvpGetVideoPortOutputFormats(HANDLE hVideoPort, PDD_GETVPORTOUTPUTFORMATDATA puGetVPortOutputFormatData);
W32KAPI DWORD APIENTRY NtGdiDvpGetVideoPortConnectInfo(HANDLE hDirectDraw, PDD_GETVPORTCONNECTDATA puGetVPortConnectData);
W32KAPI DWORD APIENTRY NtGdiDvpGetVideoSignalStatus(HANDLE hVideoPort, PDD_GETVPORTSIGNALDATA puGetVPortSignalData);
W32KAPI DWORD APIENTRY NtGdiDvpUpdateVideoPort(HANDLE hVideoPort, HANDLE *phSurfaceVideo, HANDLE *phSurfaceVbi, PDD_UPDATEVPORTDATA puUpdateVPortData);
W32KAPI DWORD APIENTRY NtGdiDvpWaitForVideoPortSync(HANDLE hVideoPort, PDD_WAITFORVPORTSYNCDATA puWaitForVPortSyncData);
W32KAPI DWORD APIENTRY NtGdiDvpAcquireNotification(HANDLE hVideoPort, HANDLE *hEvent, LPDDVIDEOPORTNOTIFY pNotify);
W32KAPI DWORD APIENTRY NtGdiDvpReleaseNotification(HANDLE hVideoPort, HANDLE hEvent);
W32KAPI DWORD APIENTRY NtGdiDdGetMoCompGuids(HANDLE hDirectDraw, PDD_GETMOCOMPGUIDSDATA puGetMoCompGuidsData);
W32KAPI DWORD APIENTRY NtGdiDdGetMoCompFormats(HANDLE hDirectDraw, PDD_GETMOCOMPFORMATSDATA puGetMoCompFormatsData);
W32KAPI DWORD APIENTRY NtGdiDdGetMoCompBuffInfo(HANDLE hDirectDraw, PDD_GETMOCOMPCOMPBUFFDATA puGetBuffData);
W32KAPI DWORD APIENTRY NtGdiDdGetInternalMoCompInfo(HANDLE hDirectDraw, PDD_GETINTERNALMOCOMPDATA puGetInternalData);
W32KAPI HANDLE APIENTRY NtGdiDdCreateMoComp(HANDLE hDirectDraw, PDD_CREATEMOCOMPDATA puCreateMoCompData);
W32KAPI DWORD APIENTRY NtGdiDdDestroyMoComp(HANDLE hMoComp, PDD_DESTROYMOCOMPDATA puDestroyMoCompData);
W32KAPI DWORD APIENTRY NtGdiDdBeginMoCompFrame(HANDLE hMoComp, PDD_BEGINMOCOMPFRAMEDATA puBeginFrameData);
W32KAPI DWORD APIENTRY NtGdiDdEndMoCompFrame(HANDLE hMoComp, PDD_ENDMOCOMPFRAMEDATA puEndFrameData);
W32KAPI DWORD APIENTRY NtGdiDdRenderMoComp(HANDLE hMoComp, PDD_RENDERMOCOMPDATA puRenderMoCompData);
W32KAPI DWORD APIENTRY NtGdiDdQueryMoCompStatus(HANDLE hMoComp, PDD_QUERYMOCOMPSTATUSDATA puQueryMoCompStatusData);
W32KAPI DWORD APIENTRY NtGdiDdAlphaBlt(HANDLE hSurfaceDest, HANDLE hSurfaceSrc, PDD_BLTDATA puBltData);
W32KAPI BOOL APIENTRY NtGdiAlphaBlend(HDC hdcDst, LONG DstX, LONG DstY, LONG DstCx, LONG DstCy, HDC hdcSrc, LONG SrcX, LONG SrcY, LONG SrcCx, LONG SrcCy, BLENDFUNCTION BlendFunction, HANDLE hcmXform);
W32KAPI BOOL APIENTRY NtGdiGradientFill(HDC hdc, PTRIVERTEX pVertex, ULONG nVertex, PVOID pMesh, ULONG nMesh, ULONG ulMode);
W32KAPI BOOL APIENTRY NtGdiSetIcmMode(HDC hdc, ULONG nCommand, ULONG ulMode);
#define ICM_SET_MODE             1
#define ICM_SET_CALIBRATE_MODE   2
#define ICM_SET_COLOR_MODE       3
#define ICM_CHECK_COLOR_MODE     4
typedef struct _LOGCOLORSPACEEXW
{
	LOGCOLORSPACEW lcsColorSpace;
	DWORD dwFlags;
} LOGCOLORSPACEEXW, *PLOGCOLORSPACEEXW;
#define LCSEX_ANSICREATED    0x0001
#define LCSEX_TEMPPROFILE    0x0002
W32KAPI HANDLE APIENTRY NtGdiCreateColorSpace(PLOGCOLORSPACEEXW pLogColorSpace);
W32KAPI BOOL APIENTRY NtGdiDeleteColorSpace(HANDLE hColorSpace);
W32KAPI BOOL APIENTRY NtGdiSetColorSpace(HDC hdc, HCOLORSPACE hColorSpace);
W32KAPI HANDLE APIENTRY NtGdiCreateColorTransform(HDC hdc, LPLOGCOLORSPACEW pLogColorSpaceW, PVOID pvSrcProfile, ULONG cjSrcProfile, PVOID pvDestProfile, ULONG cjDestProfile, PVOID pvTargetProfile, ULONG cjTargetProfile);
W32KAPI BOOL APIENTRY NtGdiDeleteColorTransform(HDC hdc, HANDLE hColorTransform);
W32KAPI BOOL APIENTRY NtGdiCheckBitmapBits(HDC hdc, HANDLE hColorTransform, PVOID pvBits, ULONG bmFormat, DWORD dwWidth, DWORD dwHeight, DWORD dwStride, PBYTE paResults);
W32KAPI ULONG APIENTRY NtGdiColorCorrectPalette(HDC hdc, HPALETTE hpal, ULONG FirstEntry, ULONG NumberOfEntries, PALETTEENTRY *ppalEntry, ULONG Command);
W32KAPI ULONG_PTR APIENTRY NtGdiGetColorSpaceforBitmap(HBITMAP hsurf);
typedef enum _COLORPALETTEINFO
{
	ColorPaletteQuery,
	ColorPaletteSet
} COLORPALETTEINFO, *PCOLORPALETTEINFO;
W32KAPI BOOL APIENTRY NtGdiGetDeviceGammaRamp(HDC hdc, LPVOID lpGammaRamp);
W32KAPI BOOL APIENTRY NtGdiSetDeviceGammaRamp(HDC hdc, LPVOID lpGammaRamp);
W32KAPI BOOL APIENTRY NtGdiIcmBrushInfo(HDC hdc, HBRUSH hbrush, PBITMAPINFO pbmiDIB, PVOID pvBits, ULONG *pulBits, DWORD *piUsage, BOOL *pbAlreadyTran, ULONG Command);
typedef enum _ICM_DIB_INFO_CMD
{
	IcmQueryBrush,
	IcmSetBrush
} ICM_DIB_INFO,  *PICM_DIB_INFO;
W32KAPI VOID APIENTRY NtGdiFlush();
W32KAPI HDC APIENTRY NtGdiCreateMetafileDC(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiMakeInfoDC(HDC hdc, BOOL bSet);
W32KAPI HANDLE APIENTRY NtGdiCreateClientObj(ULONG ulType);
W32KAPI BOOL APIENTRY NtGdiDeleteClientObj(HANDLE h);
W32KAPI LONG APIENTRY NtGdiGetBitmapBits(HBITMAP hbm, ULONG cjMax, PBYTE pjOut);
W32KAPI BOOL APIENTRY NtGdiDeleteObjectApp(HANDLE hobj);
W32KAPI int APIENTRY NtGdiGetPath(HDC hdc, LPPOINT pptlBuf, LPBYTE pjTypes, int cptBuf);
W32KAPI HDC APIENTRY NtGdiCreateCompatibleDC(HDC hdc);
W32KAPI HBITMAP APIENTRY NtGdiCreateDIBitmapInternal(HDC hdc, INT cx, INT cy, DWORD fInit, LPBYTE pjInit, LPBITMAPINFO pbmi, DWORD iUsage, UINT cjMaxInitInfo, UINT cjMaxBits, FLONG f, HANDLE hcmXform);
W32KAPI HBITMAP APIENTRY NtGdiCreateDIBSection(HDC hdc, HANDLE hSectionApp, DWORD dwOffset, LPBITMAPINFO pbmi, DWORD iUsage, UINT cjHeader, FLONG fl, ULONG_PTR dwColorSpace, PVOID *ppvBits);
W32KAPI HBRUSH APIENTRY NtGdiCreateSolidBrush(COLORREF cr, HBRUSH hbr);
W32KAPI HBRUSH APIENTRY NtGdiCreateDIBBrush(PVOID pv, FLONG fl, UINT cj, BOOL b8X8, BOOL bPen, PVOID pClient);
W32KAPI HBRUSH APIENTRY NtGdiCreatePatternBrushInternal(HBITMAP hbm, BOOL bPen, BOOL b8X8);
W32KAPI HBRUSH APIENTRY NtGdiCreateHatchBrushInternal(ULONG ulStyle, COLORREF clrr, BOOL bPen);
W32KAPI HPEN APIENTRY NtGdiExtCreatePen(ULONG flPenStyle, ULONG ulWidth, ULONG iBrushStyle, ULONG ulColor, ULONG_PTR lClientHatch, ULONG_PTR lHatch, ULONG cstyle, PULONG pulStyle, ULONG cjDIB, BOOL bOldStylePen, HBRUSH hbrush);
W32KAPI HRGN APIENTRY NtGdiCreateEllipticRgn(int xLeft, int yTop, int xRight, int yBottom);
W32KAPI HRGN APIENTRY NtGdiCreateRoundRectRgn(int xLeft, int yTop, int xRight, int yBottom, int xWidth, int yHeight);
W32KAPI HANDLE APIENTRY NtGdiCreateServerMetaFile(DWORD iType, ULONG cjData, LPBYTE pjData, DWORD mm, DWORD xExt, DWORD yExt);
W32KAPI HRGN APIENTRY NtGdiExtCreateRegion(LPXFORM px, DWORD cj, LPRGNDATA prgn);
W32KAPI ULONG APIENTRY NtGdiMakeFontDir(FLONG flEmbed, PBYTE pjFontDir, unsigned cjFontDir, LPWSTR pwszPathname, unsigned cjPathname);
W32KAPI BOOL APIENTRY NtGdiPolyDraw(HDC hdc, LPPOINT ppt, LPBYTE pjAttr, ULONG cpt);
W32KAPI BOOL APIENTRY NtGdiPolyTextOutW(HDC hdc, POLYTEXTW *pptw, UINT cStr, DWORD dwCodePage);
W32KAPI ULONG APIENTRY NtGdiGetServerMetaFileBits(HANDLE hmo, ULONG cjData, LPBYTE pjData, PDWORD piType, PDWORD pmm, PDWORD pxExt, PDWORD pyExt);
W32KAPI BOOL APIENTRY NtGdiEqualRgn(HRGN hrgn1, HRGN hrgn2);
W32KAPI BOOL APIENTRY NtGdiGetBitmapDimension(HBITMAP hbm, LPSIZE psize);
W32KAPI UINT APIENTRY NtGdiGetNearestPaletteIndex(HPALETTE hpal, COLORREF crColor);
W32KAPI BOOL APIENTRY NtGdiPtVisible(HDC hdc, int x, int y);
W32KAPI BOOL APIENTRY NtGdiRectVisible(HDC hdc, LPRECT prc);
W32KAPI BOOL APIENTRY NtGdiRemoveFontResourceW(WCHAR *pwszFiles, ULONG cwc, ULONG cFiles, ULONG fl, DWORD dwPidTid, DESIGNVECTOR *pdv);
W32KAPI BOOL APIENTRY NtGdiResizePalette(HPALETTE hpal, UINT cEntry);
W32KAPI BOOL APIENTRY NtGdiSetBitmapDimension(HBITMAP hbm, int cx, int cy, LPSIZE psizeOut);
W32KAPI int APIENTRY NtGdiOffsetClipRgn(HDC hdc, int x, int y);
W32KAPI int APIENTRY NtGdiSetMetaRgn(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiSetTextJustification(HDC hdc, int lBreakExtra, int cBreak);
W32KAPI int APIENTRY NtGdiGetAppClipBox(HDC hdc, LPRECT prc);
W32KAPI BOOL APIENTRY NtGdiGetTextExtentExW(HDC hdc, LPWSTR lpwsz, ULONG cwc, ULONG dxMax, ULONG *pcCh, PULONG pdxOut, LPSIZE psize, FLONG fl);
W32KAPI BOOL APIENTRY NtGdiGetCharABCWidthsW(HDC hdc, UINT wchFirst, ULONG cwch, PWCHAR pwch, FLONG fl, PVOID pvBuf);
W32KAPI DWORD APIENTRY NtGdiGetCharacterPlacementW(HDC hdc, LPWSTR pwsz, int nCount, int nMaxExtent, LPGCP_RESULTSW pgcpw, DWORD dwFlags);
W32KAPI BOOL APIENTRY NtGdiAngleArc(HDC hdc, int x, int y, DWORD dwRadius, DWORD dwStartAngle, DWORD dwSweepAngle);
W32KAPI BOOL APIENTRY NtGdiBeginPath(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiSelectClipPath(HDC hdc, int iMode);
W32KAPI BOOL APIENTRY NtGdiCloseFigure(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiEndPath(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiAbortPath(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiFillPath(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiStrokeAndFillPath(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiStrokePath(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiWidenPath(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiFlattenPath(HDC hdc);
W32KAPI HRGN APIENTRY NtGdiPathToRegion(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiSetMiterLimit(HDC hdc, DWORD dwNew, PDWORD pdwOut);
W32KAPI BOOL APIENTRY NtGdiSetFontXform(HDC hdc, DWORD dwxScale, DWORD dwyScale);
W32KAPI BOOL APIENTRY NtGdiGetMiterLimit(HDC hdc, PDWORD pdwOut);
W32KAPI BOOL APIENTRY NtGdiEllipse(HDC hdc, int xLeft, int yTop, int xRight, int yBottom);
W32KAPI BOOL APIENTRY NtGdiRectangle(HDC hdc, int xLeft, int yTop, int xRight, int yBottom);
W32KAPI BOOL APIENTRY NtGdiRoundRect(HDC hdc, int x1, int y1, int x2, int y2, int x3, int y3);
W32KAPI BOOL APIENTRY NtGdiPlgBlt(HDC hdcTrg, LPPOINT pptlTrg, HDC hdcSrc, int xSrc, int ySrc, int cxSrc, int cySrc, HBITMAP hbmMask, int xMask, int yMask, DWORD crBackColor);
W32KAPI BOOL APIENTRY NtGdiMaskBlt(HDC hdc, int xDst, int yDst, int cx, int cy, HDC hdcSrc, int xSrc, int ySrc, HBITMAP hbmMask, int xMask, int yMask, DWORD dwRop4, DWORD crBackColor);
W32KAPI BOOL APIENTRY NtGdiExtFloodFill(HDC hdc, INT x, INT y, COLORREF crColor, UINT iFillType);
W32KAPI BOOL APIENTRY NtGdiFillRgn(HDC hdc, HRGN hrgn, HBRUSH hbrush);
W32KAPI BOOL APIENTRY NtGdiFrameRgn(HDC hdc, HRGN hrgn, HBRUSH hbrush, int xWidth, int yHeight);
W32KAPI COLORREF APIENTRY NtGdiSetPixel(HDC hdcDst, int x, int y, COLORREF crColor);
W32KAPI DWORD APIENTRY NtGdiGetPixel(HDC hdc, int x, int y);
W32KAPI BOOL APIENTRY NtGdiStartPage(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiEndPage(HDC hdc);
W32KAPI int APIENTRY NtGdiStartDoc(HDC hdc, DOCINFOW *pdi, BOOL *pbBanding, INT iJob);
W32KAPI BOOL APIENTRY NtGdiEndDoc(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiAbortDoc(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiUpdateColors(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiGetCharWidthW(HDC hdc, UINT wcFirst, UINT cwc, PWCHAR pwc, FLONG fl, PVOID pvBuf);
W32KAPI BOOL APIENTRY NtGdiGetCharWidthInfo(HDC hdc, PCHWIDTHINFO pChWidthInfo);
W32KAPI int APIENTRY NtGdiDrawEscape(HDC hdc, int iEsc, int cjIn, LPSTR pjIn);
W32KAPI int APIENTRY NtGdiExtEscape(HDC hdc, PWCHAR pDriver, int nDriver, int iEsc, int cjIn, LPSTR pjIn, int cjOut, LPSTR pjOut);
W32KAPI ULONG APIENTRY NtGdiGetFontData(HDC hdc, DWORD dwTable, DWORD dwOffset, PVOID pvBuf, ULONG cjBuf);
W32KAPI DWORD APIENTRY NtGdiGetFontFileData(UINT uFileCollectionID, UINT uFileIndex, ULONGLONG *pullFileOffset, void *pBuffer, SIZE_T cbSize);
W32KAPI DWORD APIENTRY NtGdiGetFontFileInfo(UINT uFileCollectionID, UINT uFileIndex, FONT_FILE_INFO *pfi, SIZE_T cbSize, SIZE_T *pcbActualSize);
W32KAPI ULONG APIENTRY NtGdiGetGlyphOutline(HDC hdc, WCHAR wch, UINT iFormat, LPGLYPHMETRICS pgm, ULONG cjBuf, PVOID pvBuf, LPMAT2 pmat2, BOOL bIgnoreRotation);
W32KAPI BOOL APIENTRY NtGdiGetETM(HDC hdc, EXTTEXTMETRIC *petm);
W32KAPI BOOL APIENTRY NtGdiGetRasterizerCaps(LPRASTERIZER_STATUS praststat, ULONG cjBytes);
W32KAPI ULONG APIENTRY NtGdiGetKerningPairs(HDC hdc, ULONG cPairs, KERNINGPAIR *pkpDst);
W32KAPI BOOL APIENTRY NtGdiMonoBitmap(HBITMAP hbm);
W32KAPI HBITMAP APIENTRY NtGdiGetObjectBitmapHandle(HBRUSH hbr, UINT *piUsage);
W32KAPI ULONG APIENTRY NtGdiEnumObjects(HDC hdc, int iObjectType, ULONG cjBuf, PVOID pvBuf);
typedef struct _DRIVER_INFO_2W DRIVER_INFO_2W;
W32KAPI BOOL APIENTRY NtGdiResetDC(HDC hdc, LPDEVMODEW pdm, PBOOL pbBanding, DRIVER_INFO_2W *pDriverInfo2, VOID *ppUMdhpdev);
W32KAPI DWORD APIENTRY NtGdiSetBoundsRect(HDC hdc, LPRECT prc, DWORD f);
W32KAPI BOOL APIENTRY NtGdiGetColorAdjustment(HDC hdc, PCOLORADJUSTMENT pcaOut);
W32KAPI BOOL APIENTRY NtGdiSetColorAdjustment(HDC hdc, PCOLORADJUSTMENT);
W32KAPI BOOL APIENTRY NtGdiCancelDC(HDC hdc);
W32KAPI HDC APIENTRY NtGdiOpenDCW(PUNICODE_STRING pustrDevice, DEVMODEW *pdm, PUNICODE_STRING pustrLogAddr, ULONG iType, BOOL bDisplay, HANDLE hspool, DRIVER_INFO_2W *pDriverInfo2, VOID *pUMdhpdev);
W32KAPI BOOL APIENTRY NtGdiGetDCDword(HDC hdc, UINT u, DWORD *Result);
W32KAPI BOOL APIENTRY NtGdiGetDCPoint(HDC hdc, UINT iPoint, PPOINTL pptOut);
W32KAPI BOOL APIENTRY NtGdiScaleViewportExtEx(HDC hdc, int xNum, int xDenom, int yNum, int yDenom, LPSIZE pszOut);
W32KAPI BOOL APIENTRY NtGdiScaleWindowExtEx(HDC hdc, int xNum, int xDenom, int yNum, int yDenom, LPSIZE pszOut);
W32KAPI BOOL APIENTRY NtGdiSetVirtualResolution(HDC hdc, int cxVirtualDevicePixel, int cyVirtualDevicePixel, int cxVirtualDeviceMm, int cyVirtualDeviceMm);
W32KAPI BOOL APIENTRY NtGdiSetSizeDevice(HDC hdc, int cxVirtualDevice, int cyVirtualDevice);
W32KAPI BOOL APIENTRY NtGdiGetTransform(HDC hdc, DWORD iXform, LPXFORM pxf);
W32KAPI BOOL APIENTRY NtGdiModifyWorldTransform(HDC hdc, LPXFORM pxf, DWORD iXform);
W32KAPI BOOL APIENTRY NtGdiCombineTransform(LPXFORM pxfDst, LPXFORM pxfSrc1, LPXFORM pxfSrc2);
W32KAPI BOOL APIENTRY NtGdiTransformPoints(HDC hdc, PPOINT pptIn, PPOINT pptOut, int c, int iMode);
W32KAPI LONG APIENTRY NtGdiConvertMetafileRect(HDC hdc, PRECTL prect);
W32KAPI int APIENTRY NtGdiGetTextCharsetInfo(HDC hdc, LPFONTSIGNATURE lpSig, DWORD dwFlags);
W32KAPI BOOL APIENTRY NtGdiDoBanding(HDC hdc, BOOL bStart, POINTL *pptl, PSIZE pSize);
W32KAPI ULONG APIENTRY NtGdiGetPerBandInfo(HDC hdc, PERBANDINFO *ppbi);
#define GS_NUM_OBJS_ALL    0
#define GS_HANDOBJ_CURRENT 1
#define GS_HANDOBJ_MAX     2
#define GS_HANDOBJ_ALLOC   3
#define GS_LOOKASIDE_INFO  4
W32KAPI NTSTATUS APIENTRY NtGdiGetStats(HANDLE hProcess, int iIndex, int iPidType, PVOID pResults, UINT cjResultSize);
W32KAPI BOOL APIENTRY NtGdiSetMagicColors(HDC hdc, PALETTEENTRY peMagic, ULONG Index);
W32KAPI HBRUSH APIENTRY NtGdiSelectBrush(HDC hdc, HBRUSH hbrush);
W32KAPI HPEN APIENTRY NtGdiSelectPen(HDC hdc, HPEN hpen);
W32KAPI HBITMAP APIENTRY NtGdiSelectBitmap(HDC hdc, HBITMAP hbm);
W32KAPI HFONT APIENTRY NtGdiSelectFont(HDC hdc, HFONT hf);
W32KAPI int APIENTRY NtGdiExtSelectClipRgn(HDC hdc, HRGN hrgn, int iMode);
W32KAPI HPEN APIENTRY NtGdiCreatePen(int iPenStyle, int iPenWidth, COLORREF cr, HBRUSH hbr);
W32KAPI BOOL APIENTRY NtGdiBitBlt(HDC hdcDst, int x, int y, int cx, int cy, HDC hdcSrc, int xSrc, int ySrc, DWORD rop4, DWORD crBackColor, FLONG fl);
W32KAPI BOOL APIENTRY NtGdiTileBitBlt(HDC hdcDst, RECTL *prectDst, HDC hdcSrc, RECTL *prectSrc, POINTL *pptlOrigin, DWORD rop4, DWORD crBackColor);
W32KAPI BOOL APIENTRY NtGdiTransparentBlt(HDC hdcDst, int xDst, int yDst, int cxDst, int cyDst, HDC hdcSrc, int xSrc, int ySrc, int cxSrc, int cySrc, COLORREF TransColor);
W32KAPI BOOL APIENTRY NtGdiGetTextExtent(HDC hdc, LPWSTR lpwsz, int cwc, LPSIZE psize, UINT flOpts);
W32KAPI BOOL APIENTRY NtGdiGetTextMetricsW(HDC hdc, TMW_INTERNAL *ptm, ULONG cj);
W32KAPI int APIENTRY NtGdiGetTextFaceW(HDC hdc, int cChar, LPWSTR pszOut, BOOL bAliasName);
W32KAPI int APIENTRY NtGdiGetRandomRgn(HDC hdc, HRGN hrgn, int iRgn);
W32KAPI BOOL APIENTRY NtGdiExtTextOutW(HDC hdc, int x, int y, UINT flOpts, LPRECT prcl, LPWSTR pwsz, int cwc, LPINT pdx, DWORD dwCodePage);
W32KAPI int APIENTRY NtGdiIntersectClipRect(HDC hdc, int xLeft, int yTop, int xRight, int yBottom);
W32KAPI HRGN APIENTRY NtGdiCreateRectRgn(int xLeft, int yTop, int xRight, int yBottom);
W32KAPI BOOL APIENTRY NtGdiPatBlt(HDC hdcDst, int x, int y, int cx, int cy, DWORD rop4);
typedef struct _POLYPATBLT POLYPATBLT, *PPOLYPATBLT;
W32KAPI BOOL APIENTRY NtGdiPolyPatBlt(HDC hdc, DWORD rop4, PPOLYPATBLT pPoly, DWORD Count, DWORD Mode);
W32KAPI BOOL APIENTRY NtGdiUnrealizeObject(HANDLE h);
W32KAPI HANDLE APIENTRY NtGdiGetStockObject(int iObject);
W32KAPI HBITMAP APIENTRY NtGdiCreateCompatibleBitmap(HDC hdc, int cx, int cy);
W32KAPI HBITMAP APIENTRY NtGdiCreateBitmapFromDxSurface(HDC hdc, UINT uiWidth, UINT uiHeight, DWORD Format, HANDLE hDxSharedSurface);
W32KAPI BOOL APIENTRY NtGdiBeginGdiRendering(HBITMAP hbm, BOOL bDiscard);
W32KAPI BOOL APIENTRY NtGdiEndGdiRendering(HBITMAP hbm, BOOL bDiscard, BOOL *pbDeviceRemoved);
W32KAPI BOOL APIENTRY NtGdiLineTo(HDC hdc, int x, int y);
W32KAPI BOOL APIENTRY NtGdiMoveTo(HDC hdc, int x, int y, LPPOINT pptOut);
W32KAPI int APIENTRY NtGdiExtGetObjectW(HANDLE h, int cj, LPVOID pvOut);
W32KAPI int APIENTRY NtGdiGetDeviceCaps(HDC hdc, int i);
W32KAPI BOOL APIENTRY NtGdiGetDeviceCapsAll(HDC hdc, PDEVCAPS pDevCaps);
W32KAPI BOOL APIENTRY NtGdiStretchBlt(HDC hdcDst, int xDst, int yDst, int cxDst, int cyDst, HDC hdcSrc, int xSrc, int ySrc, int cxSrc, int cySrc, DWORD dwRop, DWORD dwBackColor);
W32KAPI BOOL APIENTRY NtGdiSetBrushOrg(HDC hdc, int x, int y, LPPOINT pptOut);
W32KAPI HBITMAP APIENTRY NtGdiCreateBitmap(int cx, int cy, UINT cPlanes, UINT cBPP, LPBYTE pjInit);
W32KAPI HPALETTE APIENTRY NtGdiCreateHalftonePalette(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiRestoreDC(HDC hdc, int iLevel);
W32KAPI int APIENTRY NtGdiExcludeClipRect(HDC hdc, int xLeft, int yTop, int xRight, int yBottom);
W32KAPI int APIENTRY NtGdiSaveDC(HDC hdc);
W32KAPI int APIENTRY NtGdiCombineRgn(HRGN hrgnDst, HRGN hrgnSrc1, HRGN hrgnSrc2, int iMode);
W32KAPI BOOL APIENTRY NtGdiSetRectRgn(HRGN hrgn, int xLeft, int yTop, int xRight, int yBottom);
W32KAPI LONG APIENTRY NtGdiSetBitmapBits(HBITMAP hbm, ULONG cj, PBYTE pjInit);
W32KAPI int APIENTRY NtGdiGetDIBitsInternal(HDC hdc, HBITMAP hbm, UINT iStartScan, UINT cScans, LPBYTE pBits, LPBITMAPINFO pbmi, UINT iUsage, UINT cjMaxBits, UINT cjMaxInfo);
W32KAPI int APIENTRY NtGdiOffsetRgn(HRGN hrgn, int cx, int cy);
W32KAPI int APIENTRY NtGdiGetRgnBox(HRGN hrgn, LPRECT prcOut);
W32KAPI BOOL APIENTRY NtGdiRectInRegion(HRGN hrgn, LPRECT prcl);
W32KAPI DWORD APIENTRY NtGdiGetBoundsRect(HDC hdc, LPRECT prc, DWORD f);
W32KAPI BOOL APIENTRY NtGdiPtInRegion(HRGN hrgn, int x, int y);
W32KAPI COLORREF APIENTRY NtGdiGetNearestColor(HDC hdc, COLORREF cr);
W32KAPI UINT APIENTRY NtGdiGetSystemPaletteUse(HDC hdc);
W32KAPI UINT APIENTRY NtGdiSetSystemPaletteUse(HDC hdc, UINT ui);
W32KAPI DWORD APIENTRY NtGdiGetRegionData(HRGN hrgn, DWORD nCount, LPRGNDATA lpRgnData);
W32KAPI BOOL APIENTRY NtGdiInvertRgn(HDC hdc, HRGN hrgn);
int W32KAPI APIENTRY NtGdiAddFontResourceW(WCHAR *pwszFiles, ULONG cwc, ULONG cFiles, FLONG f, DWORD dwPidTid, DESIGNVECTOR *pdv);
#if (_WIN32_WINNT >= 0x0500)
W32KAPI HFONT APIENTRY NtGdiHfontCreate(ENUMLOGFONTEXDVW *pelfw, ULONG cjElfw, LFTYPE lft, FLONG fl, PVOID pvCliData);
#else
W32KAPI HFONT APIENTRY NtGdiHfontCreate(LPEXTLOGFONTW pelfw, ULONG cjElfw, LFTYPE lft, FLONG fl, PVOID pvCliData);
#endif
W32KAPI ULONG APIENTRY NtGdiSetFontEnumeration(ULONG ulType);
W32KAPI BOOL APIENTRY NtGdiEnumFonts(HDC hdc, ULONG iEnumType, FLONG flWin31Compat, ULONG cchFaceName, LPCWSTR pwszFaceName, ULONG lfCharSet, ULONG *pulCount, void *pvUserModeBuffer);
#define TYPE_ENUMFONTS          1
#define TYPE_ENUMFONTFAMILIES   2
#define TYPE_ENUMFONTFAMILIESEX 3
W32KAPI INT APIENTRY NtGdiQueryFonts(PUNIVERSAL_FONT_ID pufiFontList, ULONG nBufferSize, PLARGE_INTEGER pTimeStamp);
W32KAPI DWORD NtGdiGetCharSet(HDC hdc);
W32KAPI BOOL APIENTRY NtGdiEnableEudc(BOOL);
W32KAPI BOOL APIENTRY NtGdiEudcLoadUnloadLink(LPCWSTR pBaseFaceName, UINT cwcBaseFaceName, LPCWSTR pEudcFontPath, UINT cwcEudcFontPath, INT iPriority, INT iFontLinkType, BOOL bLoadLin);
W32KAPI UINT APIENTRY NtGdiGetStringBitmapW(HDC hdc, LPWSTR pwsz, UINT cwc, UINT cj, BYTE *lpSB);
W32KAPI ULONG APIENTRY NtGdiGetEudcTimeStampEx(LPWSTR lpBaseFaceName, ULONG cwcBaseFaceName, BOOL bSystemTimeStamp);
W32KAPI ULONG APIENTRY NtGdiQueryFontAssocInfo(HDC hdc);
#if (_WIN32_WINNT >= 0x0500)
W32KAPI DWORD NtGdiGetFontUnicodeRanges(HDC hdc, LPGLYPHSET pgs);
#endif
W32KAPI BOOL NtGdiGetRealizationInfo(HDC hdc, PFONT_REALIZATION_INFO pri);
typedef struct tagDOWNLOADDESIGNVECTOR
{
    UNIVERSAL_FONT_ID ufiBase;
    DESIGNVECTOR      dv;
} DOWNLOADDESIGNVECTOR;
W32KAPI BOOL NtGdiAddRemoteMMInstanceToDC(HDC hdc, DOWNLOADDESIGNVECTOR *pddv, ULONG cjDDV);
W32KAPI BOOL APIENTRY NtGdiUnloadPrinterDriver(LPWSTR pDriverName, ULONG cbDriverName);
W32KAPI BOOL APIENTRY NtGdiEngAssociateSurface(HSURF hsurf, HDEV hdev, FLONG flHooks);
W32KAPI BOOL APIENTRY NtGdiEngEraseSurface(SURFOBJ *pso, RECTL *prcl, ULONG iColor);
W32KAPI HBITMAP APIENTRY NtGdiEngCreateBitmap(SIZEL sizl, LONG lWidth, ULONG iFormat, FLONG fl, PVOID pvBits);
W32KAPI BOOL APIENTRY NtGdiEngDeleteSurface(HSURF hsurf);
W32KAPI SURFOBJ *APIENTRY NtGdiEngLockSurface(HSURF hsurf);
W32KAPI VOID APIENTRY NtGdiEngUnlockSurface(SURFOBJ *);
W32KAPI BOOL APIENTRY NtGdiEngMarkBandingSurface(HSURF hsurf);
W32KAPI HSURF APIENTRY NtGdiEngCreateDeviceSurface(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat);
W32KAPI HBITMAP APIENTRY NtGdiEngCreateDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat);
W32KAPI BOOL APIENTRY NtGdiEngCopyBits(SURFOBJ *psoDst, SURFOBJ *psoSrc, CLIPOBJ *pco, XLATEOBJ *pxlo, RECTL *prclDst, POINTL *pptlSrc);
W32KAPI BOOL APIENTRY NtGdiEngStretchBlt(SURFOBJ *psoDest, SURFOBJ *psoSrc, SURFOBJ *psoMask, CLIPOBJ *pco, XLATEOBJ *pxlo, COLORADJUSTMENT *pca, POINTL *pptlHTOrg, RECTL *prclDest, RECTL *prclSrc, POINTL *pptlMask, ULONG iMode);
W32KAPI BOOL APIENTRY NtGdiEngBitBlt(SURFOBJ *psoDst, SURFOBJ *psoSrc, SURFOBJ *psoMask, CLIPOBJ *pco, XLATEOBJ *pxlo, RECTL *prclDst, POINTL *pptlSrc, POINTL *pptlMask, BRUSHOBJ *pbo, POINTL *pptlBrush, ROP4 rop4);
W32KAPI BOOL APIENTRY NtGdiEngPlgBlt(SURFOBJ *psoTrg, SURFOBJ *psoSrc, SURFOBJ *psoMsk, CLIPOBJ *pco, XLATEOBJ *pxlo, COLORADJUSTMENT *pca, POINTL *pptlBrushOrg, POINTFIX *pptfxDest, RECTL *prclSrc, POINTL *pptlMask, ULONG iMode);
W32KAPI HPALETTE APIENTRY NtGdiEngCreatePalette(ULONG iMode, ULONG cColors, ULONG *pulColors, FLONG flRed, FLONG flGreen, FLONG flBlue);
W32KAPI BOOL APIENTRY NtGdiEngDeletePalette(HPALETTE hPal);
W32KAPI BOOL APIENTRY NtGdiEngStrokePath(SURFOBJ *pso, PATHOBJ *ppo, CLIPOBJ *pco, XFORMOBJ *pxo, BRUSHOBJ *pbo, POINTL *pptlBrushOrg, LINEATTRS *plineattrs, MIX mix);
W32KAPI BOOL APIENTRY NtGdiEngFillPath(SURFOBJ *pso, PATHOBJ *ppo, CLIPOBJ *pco, BRUSHOBJ *pbo, POINTL *pptlBrushOrg, MIX mix, FLONG flOptions);
W32KAPI BOOL APIENTRY NtGdiEngStrokeAndFillPath(SURFOBJ *pso, PATHOBJ *ppo, CLIPOBJ *pco, XFORMOBJ *pxo, BRUSHOBJ *pboStroke, LINEATTRS *plineattrs, BRUSHOBJ *pboFill, POINTL *pptlBrushOrg, MIX mix, FLONG flOptions);
W32KAPI BOOL APIENTRY NtGdiEngPaint(SURFOBJ *pso, CLIPOBJ *pco, BRUSHOBJ *pbo, POINTL *pptlBrushOrg, MIX mix);
W32KAPI BOOL APIENTRY NtGdiEngLineTo(SURFOBJ *pso, CLIPOBJ *pco, BRUSHOBJ *pbo, LONG x1, LONG y1, LONG x2, LONG y2, RECTL *prclBounds, MIX mix);
W32KAPI BOOL APIENTRY NtGdiEngAlphaBlend(SURFOBJ *psoDest, SURFOBJ *psoSrc, CLIPOBJ *pco, XLATEOBJ *pxlo, RECTL *prclDest, RECTL *prclSrc, BLENDOBJ *pBlendObj);
W32KAPI BOOL APIENTRY NtGdiEngGradientFill(SURFOBJ *psoDest, CLIPOBJ *pco, XLATEOBJ *pxlo, TRIVERTEX *pVertex, ULONG nVertex, PVOID pMesh, ULONG nMesh, RECTL *prclExtents, POINTL *pptlDitherOrg, ULONG ulMode);
W32KAPI BOOL APIENTRY NtGdiEngTransparentBlt(SURFOBJ *psoDst, SURFOBJ *psoSrc, CLIPOBJ *pco, XLATEOBJ *pxlo, RECTL *prclDst, RECTL *prclSrc, ULONG iTransColor, ULONG ulReserved);
W32KAPI BOOL APIENTRY NtGdiEngTextOut(SURFOBJ *pso, STROBJ *pstro, FONTOBJ *pfo, CLIPOBJ *pco, RECTL *prclExtra, RECTL *prclOpaque, BRUSHOBJ *pboFore, BRUSHOBJ *pboOpaque, POINTL *pptlOrg, MIX mix);
W32KAPI BOOL APIENTRY NtGdiEngStretchBltROP(SURFOBJ *psoTrg, SURFOBJ *psoSrc, SURFOBJ *psoMask, CLIPOBJ *pco, XLATEOBJ *pxlo, COLORADJUSTMENT *pca, POINTL *pptlBrushOrg, RECTL *prclTrg, RECTL *prclSrc, POINTL *pptlMask, ULONG iMode, BRUSHOBJ *pbo, ROP4 rop4);
W32KAPI ULONG APIENTRY NtGdiXLATEOBJ_cGetPalette(XLATEOBJ *pxlo, ULONG iPal, ULONG cPal, ULONG *pPal);
W32KAPI ULONG APIENTRY NtGdiCLIPOBJ_cEnumStart(CLIPOBJ *pco, BOOL bAll, ULONG iType, ULONG iDirection, ULONG cLimit);
W32KAPI BOOL APIENTRY NtGdiCLIPOBJ_bEnum(CLIPOBJ *pco, ULONG cj, ULONG *pul);
W32KAPI PATHOBJ *APIENTRY NtGdiCLIPOBJ_ppoGetPath(CLIPOBJ *pco);
W32KAPI CLIPOBJ *APIENTRY NtGdiEngCreateClip();
W32KAPI VOID APIENTRY NtGdiEngDeleteClip(CLIPOBJ *pco);
W32KAPI PVOID APIENTRY NtGdiBRUSHOBJ_pvAllocRbrush(BRUSHOBJ *pbo, ULONG cj);
W32KAPI PVOID APIENTRY NtGdiBRUSHOBJ_pvGetRbrush(BRUSHOBJ *pbo);
W32KAPI ULONG APIENTRY NtGdiBRUSHOBJ_ulGetBrushColor(BRUSHOBJ *pbo);
W32KAPI HANDLE APIENTRY NtGdiBRUSHOBJ_hGetColorTransform(BRUSHOBJ *pbo);
W32KAPI BOOL APIENTRY NtGdiXFORMOBJ_bApplyXform(XFORMOBJ *pxo, ULONG iMode, ULONG cPoints, POINTL *pvIn, POINTL *pvOut);
W32KAPI ULONG APIENTRY NtGdiXFORMOBJ_iGetXform(XFORMOBJ *pxo, XFORML *pxform);
W32KAPI VOID APIENTRY NtGdiFONTOBJ_vGetInfo(FONTOBJ *pfo, ULONG cjSize, FONTINFO *pfi);
W32KAPI ULONG APIENTRY NtGdiFONTOBJ_cGetGlyphs(FONTOBJ *pfo, ULONG iMode, ULONG cGlyph, HGLYPH *phg, PVOID *ppvGlyph);
W32KAPI XFORMOBJ *APIENTRY NtGdiFONTOBJ_pxoGetXform(FONTOBJ *pfo);
W32KAPI IFIMETRICS *APIENTRY NtGdiFONTOBJ_pifi(FONTOBJ *pfo);
W32KAPI FD_GLYPHSET *APIENTRY NtGdiFONTOBJ_pfdg(FONTOBJ *pfo);
W32KAPI ULONG APIENTRY
NtGdiFONTOBJ_cGetAllGlyphHandles(FONTOBJ * pfo, HGLYPH * phg);
W32KAPI PVOID APIENTRY NtGdiFONTOBJ_pvTrueTypeFontFile(FONTOBJ *pfo, ULONG *pcjFile);
W32KAPI PFD_GLYPHATTR APIENTRY NtGdiFONTOBJ_pQueryGlyphAttrs(FONTOBJ *pfo, ULONG iMode);
W32KAPI BOOL APIENTRY NtGdiSTROBJ_bEnum(STROBJ *pstro, ULONG *pc, PGLYPHPOS *ppgpos);
W32KAPI BOOL APIENTRY NtGdiSTROBJ_bEnumPositionsOnly(STROBJ *pstro, ULONG *pc, PGLYPHPOS *ppgpos);
W32KAPI VOID APIENTRY NtGdiSTROBJ_vEnumStart(STROBJ *pstro);
W32KAPI DWORD APIENTRY NtGdiSTROBJ_dwGetCodePage(STROBJ *pstro);
W32KAPI BOOL APIENTRY NtGdiSTROBJ_bGetAdvanceWidths(STROBJ *pstro, ULONG iFirst, ULONG c, POINTQF *pptqD);
W32KAPI FD_GLYPHSET *APIENTRY NtGdiEngComputeGlyphSet(INT nCodePage, INT nFirstChar, INT cChars);
W32KAPI ULONG APIENTRY NtGdiXLATEOBJ_iXlate(XLATEOBJ *pxlo, ULONG iColor);
W32KAPI HANDLE APIENTRY NtGdiXLATEOBJ_hGetColorTransform(XLATEOBJ *pxlo);
W32KAPI VOID APIENTRY NtGdiPATHOBJ_vGetBounds(PATHOBJ *ppo, PRECTFX prectfx);
W32KAPI BOOL APIENTRY NtGdiPATHOBJ_bEnum(PATHOBJ *ppo, PATHDATA *ppd);
W32KAPI VOID APIENTRY NtGdiPATHOBJ_vEnumStart(PATHOBJ *ppo);
W32KAPI VOID APIENTRY NtGdiEngDeletePath(PATHOBJ *ppo);
W32KAPI VOID APIENTRY NtGdiPATHOBJ_vEnumStartClipLines(PATHOBJ *ppo, CLIPOBJ *pco, SURFOBJ *pso, LINEATTRS *pla);
W32KAPI BOOL APIENTRY NtGdiPATHOBJ_bEnumClipLines(PATHOBJ *ppo, ULONG cb, CLIPLINE *pcl);
W32KAPI BOOL APIENTRY NtGdiEngCheckAbort(SURFOBJ *pso);
W32KAPI DHPDEV NtGdiGetDhpdev(HDEV hdev);
W32KAPI LONG APIENTRY NtGdiHT_Get8BPPFormatPalette(LPPALETTEENTRY pPaletteEntry, USHORT RedGamma, USHORT GreenGamma, USHORT BlueGamma);
W32KAPI LONG APIENTRY NtGdiHT_Get8BPPMaskPalette(LPPALETTEENTRY pPaletteEntry, BOOL Use8BPPMaskPal, BYTE CMYMask, USHORT RedGamma, USHORT GreenGamma, USHORT BlueGamma);
W32KAPI BOOL NtGdiUpdateTransform(HDC hdc);
W32KAPI DWORD APIENTRY NtGdiSetLayout(HDC hdc, LONG wox, DWORD dwLayout);
W32KAPI BOOL APIENTRY NtGdiMirrorWindowOrg(HDC hdc);
W32KAPI LONG APIENTRY NtGdiGetDeviceWidth(HDC hdc);
W32KAPI BOOL NtGdiSetPUMPDOBJ(HUMPD humpd, BOOL bStoreID, HUMPD *phumpd, BOOL *pbWOW64);
W32KAPI BOOL NtGdiBRUSHOBJ_DeleteRbrush(BRUSHOBJ *pbo, BRUSHOBJ *pboB);
W32KAPI BOOL NtGdiUMPDEngFreeUserMem(KERNEL_PVOID *ppv);
W32KAPI HBITMAP APIENTRY NtGdiSetBitmapAttributes(HBITMAP hbm, DWORD dwFlags);
W32KAPI HBITMAP APIENTRY NtGdiClearBitmapAttributes(HBITMAP hbm, DWORD dwFlags);
W32KAPI HBRUSH APIENTRY NtGdiSetBrushAttributes(HBRUSH hbm, DWORD dwFlags);
W32KAPI HBRUSH APIENTRY NtGdiClearBrushAttributes(HBRUSH hbr, DWORD dwFlags);
W32KAPI BOOL APIENTRY NtGdiDrawStream(HDC hdcDst, ULONG cjIn, VOID *pvIn);
W32KAPI BOOL APIENTRY NtGdiMakeObjectXferable(HANDLE h, DWORD dwProcessId);
W32KAPI BOOL APIENTRY NtGdiMakeObjectUnXferable(HANDLE h);
W32KAPI BOOL NtGdiSfmGetNotificationTokens(UINT cBytes, UINT *pNrOfTokensReturned, PVOID pTokenBuffer);
W32KAPI BOOL NtGdiSfmRegisterLogicalSurfaceForSignaling(HLSURF hlsurf, BOOL fSignalOnDirty);
W32KAPI BOOL NtGdiDwmGetHighColorMode(DXGI_FORMAT *pdxgiFormat);
W32KAPI BOOL NtGdiDwmSetHighColorMode(DXGI_FORMAT dxgiFormat);
W32KAPI HANDLE NtGdiDwmCaptureScreen(const RECT *prcCapture, DXGI_FORMAT dxgiFormat);
W32KAPI NTSTATUS APIENTRY NtGdiDdCreateFullscreenSprite(HDC hdc, COLORREF crKey, HANDLE *phSprite, HDC *phdcSprite);
W32KAPI NTSTATUS APIENTRY NtGdiDdNotifyFullscreenSpriteUpdate(HDC hdc, HANDLE hSprite);
W32KAPI NTSTATUS APIENTRY NtGdiDdDestroyFullscreenSprite(HDC hdc, HANDLE hSprite);
W32KAPI ULONG APIENTRY NtGdiDdQueryVisRgnUniqueness();
W32KAPI BOOL APIENTRY NtGdiHLSurfGetInformation(HLSURF hLsurf, HLSURF_INFORMATION_CLASS InformationClass, PVOID InformationBuffer, PULONG pulInformationLength);
W32KAPI BOOL APIENTRY NtGdiHLSurfSetInformation(HLSURF hLsurf, HLSURF_INFORMATION_CLASS InformationClass, PVOID InformationBuffer, ULONG InformationLength);
#endif
