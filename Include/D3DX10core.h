/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx10core.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 12 15:47:07 2016
 \date		Modified on Sun Jun 12 15:47:07 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#include <d3dx10.h>
#ifndef __D3DX10CORE_H__
#define __D3DX10CORE_H__
#if __POCC__ >= 500
#pragma once
#endif
#define D3DX10_DLL_W L"d3dx10_43.dll"
#define D3DX10_DLL_A "d3dx10_43.dll"
#ifdef UNICODE
#define D3DX10_DLL D3DX10_DLL_W
#else
#define D3DX10_DLL D3DX10_DLL_A
#endif
typedef enum _D3DX10_SPRITE_FLAG
{
	D3DX10_SPRITE_SORT_TEXTURE = 0x01,
	D3DX10_SPRITE_SORT_DEPTH_BACK_TO_FRONT = 0x02,
	D3DX10_SPRITE_SORT_DEPTH_FRONT_TO_BACK = 0x04,
	D3DX10_SPRITE_SAVE_STATE = 0x08,
	D3DX10_SPRITE_ADDREF_TEXTURES = 0x10,
} D3DX10_SPRITE_FLAG;
typedef struct _D3DX10_SPRITE
{
	D3DXMATRIX matWorld;
	D3DXVECTOR2 TexCoord;
	D3DXVECTOR2 TexSize;
	D3DXCOLOR ColorModulate;
	ID3D10ShaderResourceView *pTexture;
	UINT TextureIndex;
} D3DX10_SPRITE;
typedef interface ID3DX10Sprite ID3DX10Sprite;
typedef interface ID3DX10Sprite *LPD3DX10SPRITE;
DEFINE_GUID(IID_ID3DX10Sprite, 0xba0b762d, 0x8d28, 0x43ec, 0xb9, 0xdc, 0x2f, 0x84, 0x44, 0x3b, 0x6, 0x14);
#undef INTERFACE
#define INTERFACE ID3DX10Sprite
DECLARE_INTERFACE_(ID3DX10Sprite, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Begin) (THIS_ UINT flags);
	STDMETHOD(DrawSpritesBuffered) (THIS_ D3DX10_SPRITE * pSprites, UINT cSprites);
	STDMETHOD(Flush) (THIS);
	STDMETHOD(DrawSpritesImmediate) (THIS_ D3DX10_SPRITE * pSprites, UINT cSprites, UINT cbSprite, UINT flags);
	STDMETHOD(End) (THIS);
	STDMETHOD(GetViewTransform) (THIS_ D3DXMATRIX * pViewTransform);
	STDMETHOD(SetViewTransform) (THIS_ D3DXMATRIX * pViewTransform);
	STDMETHOD(GetProjectionTransform) (THIS_ D3DXMATRIX * pProjectionTransform);
	STDMETHOD(SetProjectionTransform) (THIS_ D3DXMATRIX * pProjectionTransform);
	STDMETHOD(GetDevice) (THIS_ ID3D10Device ** ppDevice);
};
#undef INTERFACE
#define INTERFACE ID3DX10DataLoader
DECLARE_INTERFACE(ID3DX10DataLoader)
{
	STDMETHOD(Load) (THIS);
	STDMETHOD(Decompress) (THIS_ void **ppData, SIZE_T * pcBytes);
	STDMETHOD(Destroy) (THIS);
};
#undef INTERFACE
#define INTERFACE ID3DX10DataProcessor
DECLARE_INTERFACE(ID3DX10DataProcessor)
{
	STDMETHOD(Process) (THIS_ void *pData, SIZE_T cBytes);
	STDMETHOD(CreateDeviceObject) (THIS_ void **ppDataObject);
	STDMETHOD(Destroy) (THIS);
};
DEFINE_GUID(IID_ID3DX10ThreadPump, 0xc93fecfa, 0x6967, 0x478a, 0xab, 0xbc, 0x40, 0x2d, 0x90, 0x62, 0x1f, 0xcb);
#undef INTERFACE
#define INTERFACE ID3DX10ThreadPump
DECLARE_INTERFACE_(ID3DX10ThreadPump, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(AddWorkItem) (THIS_ ID3DX10DataLoader * pDataLoader, ID3DX10DataProcessor * pDataProcessor, HRESULT * pHResult, void **ppDeviceObject);
	STDMETHOD_(UINT, GetWorkItemCount) (THIS);
	STDMETHOD(WaitForAllItems) (THIS);
	STDMETHOD(ProcessDeviceWorkItems) (THIS_ UINT iWorkItemCount);
	STDMETHOD(PurgeAllItems) (THIS);
	STDMETHOD(GetQueueStatus) (THIS_ UINT * pIoQueue, UINT * pProcessQueue, UINT * pDeviceQueue);
};
HRESULT WINAPI D3DX10CreateThreadPump(UINT cIoThreads, UINT cProcThreads, ID3DX10ThreadPump **ppThreadPump);
typedef struct _D3DX10_FONT_DESCA
{
	INT Height;
	UINT Width;
	UINT Weight;
	UINT MipLevels;
	BOOL Italic;
	BYTE CharSet;
	BYTE OutputPrecision;
	BYTE Quality;
	BYTE PitchAndFamily;
	CHAR FaceName[LF_FACESIZE];
} D3DX10_FONT_DESCA, *LPD3DX10_FONT_DESCA;
typedef struct _D3DX10_FONT_DESCW
{
	INT Height;
	UINT Width;
	UINT Weight;
	UINT MipLevels;
	BOOL Italic;
	BYTE CharSet;
	BYTE OutputPrecision;
	BYTE Quality;
	BYTE PitchAndFamily;
	WCHAR FaceName[LF_FACESIZE];
} D3DX10_FONT_DESCW, *LPD3DX10_FONT_DESCW;
#ifdef UNICODE
typedef D3DX10_FONT_DESCW D3DX10_FONT_DESC;
typedef LPD3DX10_FONT_DESCW LPD3DX10_FONT_DESC;
#else
typedef D3DX10_FONT_DESCA D3DX10_FONT_DESC;
typedef LPD3DX10_FONT_DESCA LPD3DX10_FONT_DESC;
#endif
typedef interface ID3DX10Font ID3DX10Font;
typedef interface ID3DX10Font *LPD3DX10FONT;
DEFINE_GUID(IID_ID3DX10Font, 0xd79dbb70, 0x5f21, 0x4d36, 0xbb, 0xc2, 0xff, 0x52, 0x5c, 0x21, 0x3c, 0xdc);
#undef INTERFACE
#define INTERFACE ID3DX10Font
DECLARE_INTERFACE_(ID3DX10Font, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetDevice) (THIS_ ID3D10Device ** ppDevice);
	STDMETHOD(GetDescA) (THIS_ D3DX10_FONT_DESCA * pDesc);
	STDMETHOD(GetDescW) (THIS_ D3DX10_FONT_DESCW * pDesc);
	STDMETHOD_(BOOL, GetTextMetricsA) (THIS_ TEXTMETRICA * pTextMetrics);
	STDMETHOD_(BOOL, GetTextMetricsW) (THIS_ TEXTMETRICW * pTextMetrics);
	STDMETHOD_(HDC, GetDC) (THIS);
	STDMETHOD(GetGlyphData) (THIS_ UINT Glyph, ID3D10ShaderResourceView ** ppTexture, RECT * pBlackBox, POINT * pCellInc);
	STDMETHOD(PreloadCharacters) (THIS_ UINT First, UINT Last);
	STDMETHOD(PreloadGlyphs) (THIS_ UINT First, UINT Last);
	STDMETHOD(PreloadTextA) (THIS_ LPCSTR pString, INT Count);
	STDMETHOD(PreloadTextW) (THIS_ LPCWSTR pString, INT Count);
	STDMETHOD_(INT, DrawTextA) (THIS_ LPD3DX10SPRITE pSprite, LPCSTR pString, INT Count, LPRECT pRect, UINT Format, D3DXCOLOR Color);
	STDMETHOD_(INT, DrawTextW) (THIS_ LPD3DX10SPRITE pSprite, LPCWSTR pString, INT Count, LPRECT pRect, UINT Format, D3DXCOLOR Color);
};
#ifndef GetTextMetrics
#ifdef UNICODE
#define GetTextMetrics GetTextMetricsW
#else
#define GetTextMetrics GetTextMetricsA
#endif
#endif
#ifndef DrawText
#ifdef UNICODE
#define DrawText DrawTextW
#else
#define DrawText DrawTextA
#endif
#endif
HRESULT WINAPI D3DX10CreateFontA(ID3D10Device *pDevice, INT Height, UINT Width, UINT Weight, UINT MipLevels, BOOL Italic, UINT CharSet, UINT OutputPrecision, UINT Quality, UINT PitchAndFamily, LPCSTR pFaceName, LPD3DX10FONT *ppFont);
HRESULT WINAPI D3DX10CreateFontW(ID3D10Device *pDevice, INT Height, UINT Width, UINT Weight, UINT MipLevels, BOOL Italic, UINT CharSet, UINT OutputPrecision, UINT Quality, UINT PitchAndFamily, LPCWSTR pFaceName, LPD3DX10FONT *ppFont);
#ifdef UNICODE
#define D3DX10CreateFont D3DX10CreateFontW
#else
#define D3DX10CreateFont D3DX10CreateFontA
#endif
HRESULT WINAPI D3DX10CreateFontIndirectA(ID3D10Device *pDevice, CONST D3DX10_FONT_DESCA *pDesc, LPD3DX10FONT *ppFont);
HRESULT WINAPI D3DX10CreateFontIndirectW(ID3D10Device *pDevice, CONST D3DX10_FONT_DESCW *pDesc, LPD3DX10FONT *ppFont);
#ifdef UNICODE
#define D3DX10CreateFontIndirect D3DX10CreateFontIndirectW
#else
#define D3DX10CreateFontIndirect D3DX10CreateFontIndirectA
#endif
HRESULT WINAPI D3DX10UnsetAllDeviceObjects(ID3D10Device *pDevice);
#define _FACD3D  0x876
#define MAKE_D3DHRESULT( code )  MAKE_HRESULT( 1, _FACD3D, code )
#define MAKE_D3DSTATUS( code )  MAKE_HRESULT( 0, _FACD3D, code )
#define D3DERR_INVALIDCALL                      MAKE_D3DHRESULT(2156)
#define D3DERR_WASSTILLDRAWING                  MAKE_D3DHRESULT(540)
#endif
