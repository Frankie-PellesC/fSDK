/*+@@file@@----------------------------------------------------------------*//*!
 \file		D3DFont.h
 \par Description 
            Texture-based font class
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Dec  4 19:25:35 2016
 \date		Modified on Sun Dec  4 19:25:35 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef D3DFONT_H
#define D3DFONT_H
#include <tchar.h>
#include <D3D8.h>

// Font creation flags
#define D3DFONT_BOLD        0x0001
#define D3DFONT_ITALIC      0x0002
#define D3DFONT_ZENABLE     0x0004

// Font rendering flags
#define D3DFONT_CENTERED    0x0001
#define D3DFONT_TWOSIDED    0x0002
#define D3DFONT_FILTERED    0x0004

//-----------------------------------------------------------------------------
// Name: class CD3DFont
// Desc: Texture-based font class for doing text in a 3D scene.
//-----------------------------------------------------------------------------
typedef struct CD3DFont
{
    TCHAR   m_strFontName[80];            // Font properties
    DWORD   m_dwFontHeight;
    DWORD   m_dwFontFlags;

    LPDIRECT3DDEVICE8       m_pd3dDevice; // A D3DDevice used for rendering
    LPDIRECT3DTEXTURE8      m_pTexture;   // The d3d texture for this font
    LPDIRECT3DVERTEXBUFFER8 m_pVB;        // VertexBuffer for rendering text
    DWORD   m_dwTexWidth;                 // Texture dimensions
    DWORD   m_dwTexHeight;
    FLOAT   m_fTextScale;
    FLOAT   m_fTexCoords[128-32][4];

    // Stateblocks for setting and restoring render states
    DWORD   m_dwSavedStateBlock;
    DWORD   m_dwDrawTextStateBlock;
} CD3DFont;

// 2D and 3D text drawing functions
HRESULT CD3DFontDrawText(CD3DFont *this, FLOAT x, FLOAT y, DWORD dwColor, TCHAR *strText, DWORD dwFlags /*=0L */ );
HRESULT CD3DFontDrawTextScaled(CD3DFont *this, FLOAT x, FLOAT y, FLOAT z, FLOAT fXScale, FLOAT fYScale, DWORD dwColor, TCHAR *strText, DWORD dwFlags /*=0L */ );
HRESULT CD3DFontRender3DText(CD3DFont *this, TCHAR *strText, DWORD dwFlags /*=0L */ );

// Function to get extent of text
HRESULT CD3DFontGetTextExtent(CD3DFont *this, TCHAR *strText, SIZE *pSize);

// Initializing and destroying device-dependent objects
HRESULT CD3DFontInitDeviceObjects(CD3DFont *this, LPDIRECT3DDEVICE8 pd3dDevice);
HRESULT CD3DFontRestoreDeviceObjects(CD3DFont *this);
HRESULT CD3DFontInvalidateDeviceObjects(CD3DFont *this);
HRESULT CD3DFontDeleteDeviceObjects(CD3DFont *this);

// Constructor / destructor
CD3DFont *CD3DFontNew(TCHAR *strFontName, DWORD dwHeight, DWORD dwFlags /*= 0L*/);
void CD3DFontDelete(CD3DFont *);

#endif
