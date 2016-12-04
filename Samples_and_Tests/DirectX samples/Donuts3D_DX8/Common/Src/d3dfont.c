/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dfont.c
 \par Description 
            Texture-based font class
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Dec  4 18:34:54 2016
 \date		Modified on Sun Dec  4 18:34:54 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#define STRICT
#include <stdio.h>
#include <tchar.h>
#include <D3DX8.h>
#include "D3DFont.h"
#include "D3DUtil.h"
#include "DXUtil.h"

/*
 *	Custom vertex types for rendering text
 */
#define MAX_NUM_VERTICES 50*6

typedef struct FONT2DVERTEX
{
	D3DXVECTOR4 p;
	DWORD color;
	FLOAT tu, tv;
}
FONT2DVERTEX;
typedef struct FONT3DVERTEX
{
	D3DXVECTOR3 p;
	D3DXVECTOR3 n;
	FLOAT tu, tv;
}
FONT3DVERTEX;

#define D3DFVF_FONT2DVERTEX (D3DFVF_XYZRHW|D3DFVF_DIFFUSE|D3DFVF_TEX1)
#define D3DFVF_FONT3DVERTEX (D3DFVF_XYZ|D3DFVF_NORMAL|D3DFVF_TEX1)

inline FONT2DVERTEX InitFont2DVertex(const D3DXVECTOR4 *p, D3DCOLOR color, FLOAT tu, FLOAT tv)
{
	FONT2DVERTEX v;
	v.p     = *p;
	v.color = color;
	v.tu    = tu;
	v.tv    = tv;
	return v;
}

inline FONT3DVERTEX InitFont3DVertex(const D3DXVECTOR3 *p, const D3DXVECTOR3 *n, FLOAT tu, FLOAT tv)
{
	FONT3DVERTEX v;
	v.p  = *p;
	v.n  = *n;
	v.tu = tu;
	v.tv = tv;
	return v;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFontNew
 \details	Font class constructor
 \date		Created  on Sun Dec  4 18:35:50 2016
 \date		Modified on Sun Dec  4 18:35:50 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CD3DFont *CD3DFontNew(TCHAR * strFontName, DWORD dwHeight, DWORD dwFlags)
{
	CD3DFont *this = malloc(sizeof(CD3DFont));
	if (!this)
		return NULL;

	_tcscpy(this->m_strFontName, strFontName);
	this->m_dwFontHeight         = dwHeight;
	this->m_dwFontFlags          = dwFlags;

	this->m_pd3dDevice           = NULL;
	this->m_pTexture             = NULL;
	this->m_pVB                  = NULL;

	this->m_dwSavedStateBlock    = 0L;
	this->m_dwDrawTextStateBlock = 0L;

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFontDelete
 \details	Font class destructor
 \date		Created  on Sun Dec  4 18:36:04 2016
 \date		Modified on Sun Dec  4 18:36:04 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void CD3DFontDelete(CD3DFont *this)
{
	CD3DFontInvalidateDeviceObjects(this);
	CD3DFontDeleteDeviceObjects(this);
	free(this);
}

#include "debugger.h"
/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFontInitDeviceObjects
 \details	Initializes device-dependent objects, including the vertex 
            buffer used for rendering text and the texture map which stores 
            the font image.
 \date		Created  on Sun Dec  4 18:36:24 2016
 \date		Modified on Sun Dec  4 18:36:24 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFontInitDeviceObjects(CD3DFont *this, LPDIRECT3DDEVICE8 pd3dDevice)
{
	HRESULT hr;

	// Keep a local copy of the device
	this->m_pd3dDevice = pd3dDevice;

	// Establish the font and texture size
	this->m_fTextScale = 1.0f;	// Draw fonts into texture without scaling

	// Large fonts need larger textures
	if (this->m_dwFontHeight > 40)
		this->m_dwTexWidth = this->m_dwTexHeight = 1024;
	else if (this->m_dwFontHeight > 20)
		this->m_dwTexWidth = this->m_dwTexHeight = 512;
	else
		this->m_dwTexWidth = this->m_dwTexHeight = 256;

	// If requested texture is too big, use a smaller texture and smaller font,
	// and scale up when rendering.
	D3DCAPS8 d3dCaps;
	this->m_pd3dDevice->lpVtbl->GetDeviceCaps(this->m_pd3dDevice, &d3dCaps);

	if (this->m_dwTexWidth > d3dCaps.MaxTextureWidth)
	{
		this->m_fTextScale = (FLOAT)d3dCaps.MaxTextureWidth / (FLOAT)this->m_dwTexWidth;
		this->m_dwTexWidth = this->m_dwTexHeight = d3dCaps.MaxTextureWidth;
	}

	// Create a new texture for the font
	hr = this->m_pd3dDevice->lpVtbl->CreateTexture(this->m_pd3dDevice, this->m_dwTexWidth, this->m_dwTexHeight,
															1, 0, D3DFMT_A4R4G4B4, D3DPOOL_MANAGED, &this->m_pTexture);
	if (FAILED(hr))
		return hr;

	// Prepare to create a bitmap
	DWORD *pBitmapBits;
	BITMAPINFO bmi;
	ZeroMemory(&bmi.bmiHeader, sizeof(BITMAPINFOHEADER));
	bmi.bmiHeader.biSize        = sizeof(BITMAPINFOHEADER);
	bmi.bmiHeader.biWidth       = (int)this->m_dwTexWidth;
	bmi.bmiHeader.biHeight      = -(int)this->m_dwTexHeight;
	bmi.bmiHeader.biPlanes      = 1;
	bmi.bmiHeader.biCompression = BI_RGB;
	bmi.bmiHeader.biBitCount    = 32;

	// Create a DC and a bitmap for the font
	HDC hDC = CreateCompatibleDC(NULL);
	HBITMAP hbmBitmap = CreateDIBSection(hDC, &bmi, DIB_RGB_COLORS, (VOID **) & pBitmapBits, NULL, 0);
	SetMapMode(hDC, MM_TEXT);

	// Create a font.  By specifying ANTIALIASED_QUALITY, we might get an
	// antialiased font, but this is not guaranteed.
	INT nHeight = -MulDiv(this->m_dwFontHeight, (INT) (GetDeviceCaps(hDC, LOGPIXELSY) * this->m_fTextScale), 72);
	DWORD dwBold = (this->m_dwFontFlags & D3DFONT_BOLD) ? FW_BOLD : FW_NORMAL;
	DWORD dwItalic = (this->m_dwFontFlags & D3DFONT_ITALIC) ? TRUE : FALSE;
	HFONT hFont = CreateFont(nHeight, 0, 0, 0, dwBold, dwItalic, FALSE, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS,
										CLIP_DEFAULT_PRECIS, ANTIALIASED_QUALITY, VARIABLE_PITCH, this->m_strFontName);
	if (NULL == hFont)
		return E_FAIL;

	SelectObject(hDC, hbmBitmap);
	SelectObject(hDC, hFont);

	// Set text properties
	SetTextColor(hDC, RGB(255, 255, 255));
	SetBkColor(hDC, 0x00000000);
	SetTextAlign(hDC, TA_TOP);

	// Loop through all printable character and output them to the bitmap..
	// Meanwhile, keep track of the corresponding tex coords for each character.
	DWORD x = 0;
	DWORD y = 0;
	TCHAR str[2] = _T("x");
	SIZE size;

	for (TCHAR c = 32; c < 127; c++)
	{
		str[0] = c;
		GetTextExtentPoint32(hDC, str, 1, &size);

		if ((DWORD) (x + size.cx + 1) > this->m_dwTexWidth)
		{
			x = 0;
			y += size.cy + 1;
		}

		ExtTextOut(hDC, x + 0, y + 0, ETO_OPAQUE, NULL, str, 1, NULL);

		this->m_fTexCoords[c - 32][0] = ((FLOAT) (x + 0)) / this->m_dwTexWidth;
		this->m_fTexCoords[c - 32][1] = ((FLOAT) (y + 0)) / this->m_dwTexHeight;
		this->m_fTexCoords[c - 32][2] = ((FLOAT) (x + 0 + size.cx)) / this->m_dwTexWidth;
		this->m_fTexCoords[c - 32][3] = ((FLOAT) (y + 0 + size.cy)) / this->m_dwTexHeight;

		x += size.cx + 1;
	}

	// Lock the surface and write the alpha values for the set pixels
	D3DLOCKED_RECT d3dlr;
	this->m_pTexture->lpVtbl->LockRect(this->m_pTexture, 0, &d3dlr, 0, 0);
	BYTE *pDstRow = (BYTE *)d3dlr.pBits;
	WORD *pDst16;
	BYTE bAlpha;	// 4-bit measure of pixel intensity

	for (y = 0; y < this->m_dwTexHeight; y++)
	{
		pDst16 = (WORD *)pDstRow;
		for (x = 0; x < this->m_dwTexWidth; x++)
		{
			bAlpha = (BYTE) ((pBitmapBits[this->m_dwTexWidth * y + x] & 0xff) >> 4);
			if (bAlpha > 0)
			{
				*pDst16++ = (bAlpha << 12) | 0x0fff;
			}
			else
			{
				*pDst16++ = 0x0000;
			}
		}
		pDstRow += d3dlr.Pitch;
	}

	// Done updating texture, so clean up used objects
	this->m_pTexture->lpVtbl->UnlockRect(this->m_pTexture, 0);
	SaveBmp(&bmi, pBitmapBits);
	DeleteObject(hbmBitmap);
	DeleteDC(hDC);
	DeleteObject(hFont);

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFontRestoreDeviceObjects
 \date		Created  on Sun Dec  4 18:36:41 2016
 \date		Modified on Sun Dec  4 18:36:41 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFontRestoreDeviceObjects(CD3DFont *this)
{
	HRESULT hr;

	// Create vertex buffer for the letters
	if (FAILED(hr = this->m_pd3dDevice->lpVtbl->CreateVertexBuffer(this->m_pd3dDevice,
				MAX_NUM_VERTICES * sizeof(FONT2DVERTEX), D3DUSAGE_WRITEONLY | D3DUSAGE_DYNAMIC, 0, D3DPOOL_DEFAULT, &this->m_pVB)))
	{
		return hr;
	}

	// Create the state blocks for rendering text
	for (UINT which = 0; which < 2; which++)
	{
		this->m_pd3dDevice->lpVtbl->BeginStateBlock(this->m_pd3dDevice);
		this->m_pd3dDevice->lpVtbl->SetTexture(this->m_pd3dDevice, 0, (IDirect3DBaseTexture8 *)this->m_pTexture);

		if (D3DFONT_ZENABLE & this->m_dwFontFlags)
			this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_ZENABLE, TRUE);
		else
			this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_ZENABLE, FALSE);

		this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_ALPHABLENDENABLE, TRUE);
		this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
		this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
		this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_ALPHATESTENABLE, TRUE);
		this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_ALPHAREF, 0x08);
		this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_ALPHAFUNC, D3DCMP_GREATEREQUAL);
		this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_FILLMODE, D3DFILL_SOLID);
		this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_CULLMODE, D3DCULL_CCW);
		this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_STENCILENABLE, FALSE);
		this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_CLIPPING, TRUE);
		this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_EDGEANTIALIAS, FALSE);
		this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_CLIPPLANEENABLE, FALSE);
		this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_VERTEXBLEND, FALSE);
		this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_INDEXEDVERTEXBLENDENABLE, FALSE);
		this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_FOGENABLE, FALSE);
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_COLOROP, D3DTOP_MODULATE);
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_COLORARG1, D3DTA_TEXTURE);
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_COLORARG2, D3DTA_DIFFUSE);
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_ALPHAOP, D3DTOP_MODULATE);
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_ALPHAARG1, D3DTA_TEXTURE);
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_ALPHAARG2, D3DTA_DIFFUSE);
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_MINFILTER, D3DTEXF_POINT);
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_MAGFILTER, D3DTEXF_POINT);
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_MIPFILTER, D3DTEXF_NONE);
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_TEXCOORDINDEX, 0);
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_TEXTURETRANSFORMFLAGS, D3DTTFF_DISABLE);
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 1, D3DTSS_COLOROP, D3DTOP_DISABLE);
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 1, D3DTSS_ALPHAOP, D3DTOP_DISABLE);

		if (which == 0)
			this->m_pd3dDevice->lpVtbl->EndStateBlock(this->m_pd3dDevice, &this->m_dwSavedStateBlock);
		else
			this->m_pd3dDevice->lpVtbl->EndStateBlock(this->m_pd3dDevice, &this->m_dwDrawTextStateBlock);
	}

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFontInvalidateDeviceObjects
 \details	Destroys all device-dependent objects
 \date		Created  on Sun Dec  4 18:36:51 2016
 \date		Modified on Sun Dec  4 18:36:51 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFontInvalidateDeviceObjects(CD3DFont *this)
{
	SAFE_RELEASE(this->m_pVB);

	// Delete the state blocks
	if (this->m_pd3dDevice)
	{
		if (this->m_dwSavedStateBlock)
			this->m_pd3dDevice->lpVtbl->DeleteStateBlock(this->m_pd3dDevice, this->m_dwSavedStateBlock);
		if (this->m_dwDrawTextStateBlock)
			this->m_pd3dDevice->lpVtbl->DeleteStateBlock(this->m_pd3dDevice, this->m_dwDrawTextStateBlock);
	}

	this->m_dwSavedStateBlock = 0L;
	this->m_dwDrawTextStateBlock = 0L;

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFontDeleteDeviceObjects
 \details	Destroys all device-dependent objects
 \date		Created  on Sun Dec  4 18:37:16 2016
 \date		Modified on Sun Dec  4 18:37:16 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFontDeleteDeviceObjects(CD3DFont *this)
{
	SAFE_RELEASE(this->m_pTexture);
	this->m_pd3dDevice = NULL;

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFontGetTextExtent
 \details	Get the dimensions of a text string
 \date		Created  on Sun Dec  4 18:37:28 2016
 \date		Modified on Sun Dec  4 18:37:28 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFontGetTextExtent(CD3DFont *this, TCHAR *strText, SIZE *pSize)
{
	if (NULL == strText || NULL == pSize)
		return E_FAIL;

	FLOAT fRowWidth  = 0.0f;
	FLOAT fRowHeight = (this->m_fTexCoords[0][3] - this->m_fTexCoords[0][1]) * this->m_dwTexHeight;
	FLOAT fWidth     = 0.0f;
	FLOAT fHeight    = fRowHeight;

	while (*strText)
	{
		TCHAR c = *strText++;

		if (c == _T('\n'))
		{
			fRowWidth = 0.0f;
			fHeight += fRowHeight;
		}
		if (c < _T(' '))
			continue;

		FLOAT tx1 = this->m_fTexCoords[c - 32][0];
		FLOAT tx2 = this->m_fTexCoords[c - 32][2];

		fRowWidth += (tx2 - tx1) * this->m_dwTexWidth;

		if (fRowWidth > fWidth)
			fWidth = fRowWidth;
	}

	pSize->cx = (int)fWidth;
	pSize->cy = (int)fHeight;

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFontDrawTextScaled
 \details	Draws scaled 2D text.  Note that x and y are in viewport 
            coordinates (ranging from -1 to +1).  fXScale and fYScale are 
            the size fraction relative to the entire viewport.  For 
            example, a fXScale of 0.25 is 1/8th of the screen width.  This 
            allows you to output text at a fixed fraction of the viewport, 
            even if the screen or window size changes.
 \date		Created  on Sun Dec  4 18:38:12 2016
 \date		Modified on Sun Dec  4 18:38:12 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFontDrawTextScaled(CD3DFont *this, FLOAT x, FLOAT y, FLOAT z, FLOAT fXScale, FLOAT fYScale, DWORD dwColor, TCHAR *strText, DWORD dwFlags)
{
	if (this->m_pd3dDevice == NULL)
		return E_FAIL;

	// Set up renderstate
	this->m_pd3dDevice->lpVtbl->CaptureStateBlock(this->m_pd3dDevice, this->m_dwSavedStateBlock);
	this->m_pd3dDevice->lpVtbl->ApplyStateBlock(this->m_pd3dDevice, this->m_dwDrawTextStateBlock);
	this->m_pd3dDevice->lpVtbl->SetVertexShader(this->m_pd3dDevice, D3DFVF_FONT2DVERTEX);
	this->m_pd3dDevice->lpVtbl->SetPixelShader(this->m_pd3dDevice, 0L);
	this->m_pd3dDevice->lpVtbl->SetStreamSource(this->m_pd3dDevice, 0, this->m_pVB, sizeof(FONT2DVERTEX));

	// Set filter states
	if (dwFlags & D3DFONT_FILTERED)
	{
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_MINFILTER, D3DTEXF_LINEAR);
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_MAGFILTER, D3DTEXF_LINEAR);
	}

	D3DVIEWPORT8 vp;
	this->m_pd3dDevice->lpVtbl->GetViewport(this->m_pd3dDevice, &vp);
	FLOAT sx = (x + 1.0f) * vp.Width / 2;
	FLOAT sy = (y + 1.0f) * vp.Height / 2;
	FLOAT sz = z;
	FLOAT rhw = 1.0f;
	FLOAT fStartX = sx;

	FLOAT fLineHeight = (this->m_fTexCoords[0][3] - this->m_fTexCoords[0][1]) * this->m_dwTexHeight;

	// Fill vertex buffer
	FONT2DVERTEX *pVertices;
	DWORD dwNumTriangles = 0L;
	this->m_pVB->lpVtbl->Lock(this->m_pVB, 0, 0, (BYTE **) & pVertices, D3DLOCK_DISCARD);

	while (*strText)
	{
		TCHAR c = *strText++;

		if (c == _T('\n'))
		{
			sx = fStartX;
			sy += fYScale * vp.Height;
		}
		if (c < _T(' '))
			continue;

		FLOAT tx1 = this->m_fTexCoords[c - 32][0];
		FLOAT ty1 = this->m_fTexCoords[c - 32][1];
		FLOAT tx2 = this->m_fTexCoords[c - 32][2];
		FLOAT ty2 = this->m_fTexCoords[c - 32][3];

		FLOAT w = (tx2 - tx1) * this->m_dwTexWidth;
		FLOAT h = (ty2 - ty1) * this->m_dwTexHeight;

		w *= (fXScale * vp.Width ) / fLineHeight;
		h *= (fYScale * vp.Height) / fLineHeight;

		if (c != _T(' '))
		{
			*pVertices++ = InitFont2DVertex(&(D3DXVECTOR4){sx + 0 - 0.5f, sy + h - 0.5f, sz, rhw}, dwColor, tx1, ty2);
			*pVertices++ = InitFont2DVertex(&(D3DXVECTOR4){sx + 0 - 0.5f, sy + 0 - 0.5f, sz, rhw}, dwColor, tx1, ty1);
			*pVertices++ = InitFont2DVertex(&(D3DXVECTOR4){sx + w - 0.5f, sy + h - 0.5f, sz, rhw}, dwColor, tx2, ty2);
			*pVertices++ = InitFont2DVertex(&(D3DXVECTOR4){sx + w - 0.5f, sy + 0 - 0.5f, sz, rhw}, dwColor, tx2, ty1);
			*pVertices++ = InitFont2DVertex(&(D3DXVECTOR4){sx + w - 0.5f, sy + h - 0.5f, sz, rhw}, dwColor, tx2, ty2);
			*pVertices++ = InitFont2DVertex(&(D3DXVECTOR4){sx + 0 - 0.5f, sy + 0 - 0.5f, sz, rhw}, dwColor, tx1, ty1);
			dwNumTriangles += 2;

			if (dwNumTriangles * 3 > (MAX_NUM_VERTICES - 6))
			{
				// Unlock, render, and relock the vertex buffer
				this->m_pVB->lpVtbl->Unlock(this->m_pVB);
				this->m_pd3dDevice->lpVtbl->DrawPrimitive(this->m_pd3dDevice, D3DPT_TRIANGLELIST, 0, dwNumTriangles);
				this->m_pVB->lpVtbl->Lock(this->m_pVB, 0, 0, (BYTE **) & pVertices, D3DLOCK_DISCARD);
				dwNumTriangles = 0L;
			}
		}

		sx += w;
	}

	// Unlock and render the vertex buffer
	this->m_pVB->lpVtbl->Unlock(this->m_pVB);
	if (dwNumTriangles > 0)
		this->m_pd3dDevice->lpVtbl->DrawPrimitive(this->m_pd3dDevice, D3DPT_TRIANGLELIST, 0, dwNumTriangles);

	// Restore the modified renderstates
	this->m_pd3dDevice->lpVtbl->ApplyStateBlock(this->m_pd3dDevice, this->m_dwSavedStateBlock);

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFontDrawText
 \details	Draws 2D text
 \date		Created  on Sun Dec  4 18:39:38 2016
 \date		Modified on Sun Dec  4 18:39:38 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFontDrawText(CD3DFont *this, FLOAT sx, FLOAT sy, DWORD dwColor, TCHAR *strText, DWORD dwFlags)
{
	if (this->m_pd3dDevice == NULL)
		return E_FAIL;

	// Setup renderstate
	this->m_pd3dDevice->lpVtbl->CaptureStateBlock(this->m_pd3dDevice, this->m_dwSavedStateBlock);
	this->m_pd3dDevice->lpVtbl->ApplyStateBlock(this->m_pd3dDevice, this->m_dwDrawTextStateBlock);
	this->m_pd3dDevice->lpVtbl->SetVertexShader(this->m_pd3dDevice, D3DFVF_FONT2DVERTEX);
	this->m_pd3dDevice->lpVtbl->SetPixelShader(this->m_pd3dDevice, 0UL);
	this->m_pd3dDevice->lpVtbl->SetStreamSource(this->m_pd3dDevice, 0, this->m_pVB, sizeof(FONT2DVERTEX));

	// Set filter states
	if (dwFlags & D3DFONT_FILTERED)
	{
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_MINFILTER, D3DTEXF_LINEAR);
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_MAGFILTER, D3DTEXF_LINEAR);
	}

	FLOAT fStartX = sx;

	// Fill vertex buffer
	FONT2DVERTEX *pVertices = NULL;
	DWORD dwNumTriangles = 0;
	this->m_pVB->lpVtbl->Lock(this->m_pVB, 0, 0, (BYTE **) & pVertices, D3DLOCK_DISCARD);

	while (*strText)
	{
		TCHAR c = *strText++;

		if (c == _T('\n'))
		{
			sx = fStartX;
			sy += (this->m_fTexCoords[0][3] - this->m_fTexCoords[0][1]) * this->m_dwTexHeight;
		}
		if (c < _T(' '))
			continue;

		FLOAT tx1 = this->m_fTexCoords[c - 32][0];
		FLOAT ty1 = this->m_fTexCoords[c - 32][1];
		FLOAT tx2 = this->m_fTexCoords[c - 32][2];
		FLOAT ty2 = this->m_fTexCoords[c - 32][3];

		FLOAT w = (tx2 - tx1) * this->m_dwTexWidth / this->m_fTextScale;
		FLOAT h = (ty2 - ty1) * this->m_dwTexHeight / this->m_fTextScale;

		if (c != _T(' '))
		{
			*pVertices++ = InitFont2DVertex(&(D3DXVECTOR4){sx + 0 - 0.5f, sy + h - 0.5f, 0.9f, 1.0f}, dwColor, tx1, ty2);
			*pVertices++ = InitFont2DVertex(&(D3DXVECTOR4){sx + 0 - 0.5f, sy + 0 - 0.5f, 0.9f, 1.0f}, dwColor, tx1, ty1);
			*pVertices++ = InitFont2DVertex(&(D3DXVECTOR4){sx + w - 0.5f, sy + h - 0.5f, 0.9f, 1.0f}, dwColor, tx2, ty2);
			*pVertices++ = InitFont2DVertex(&(D3DXVECTOR4){sx + w - 0.5f, sy + 0 - 0.5f, 0.9f, 1.0f}, dwColor, tx2, ty1);
			*pVertices++ = InitFont2DVertex(&(D3DXVECTOR4){sx + w - 0.5f, sy + h - 0.5f, 0.9f, 1.0f}, dwColor, tx2, ty2);
			*pVertices++ = InitFont2DVertex(&(D3DXVECTOR4){sx + 0 - 0.5f, sy + 0 - 0.5f, 0.9f, 1.0f}, dwColor, tx1, ty1);
			dwNumTriangles += 2;

			if (dwNumTriangles * 3 > (MAX_NUM_VERTICES - 6))
			{
				// Unlock, render, and relock the vertex buffer
				this->m_pVB->lpVtbl->Unlock(this->m_pVB);
				this->m_pd3dDevice->lpVtbl->DrawPrimitive(this->m_pd3dDevice, D3DPT_TRIANGLELIST, 0, dwNumTriangles);
				pVertices = NULL;
				this->m_pVB->lpVtbl->Lock(this->m_pVB, 0, 0, (BYTE **) & pVertices, D3DLOCK_DISCARD);
				dwNumTriangles = 0L;
			}
		}

		sx += w;
	}

	// Unlock and render the vertex buffer
	this->m_pVB->lpVtbl->Unlock(this->m_pVB);
	if (dwNumTriangles > 0)
		this->m_pd3dDevice->lpVtbl->DrawPrimitive(this->m_pd3dDevice, D3DPT_TRIANGLELIST, 0, dwNumTriangles);

	// Restore the modified renderstates
	this->m_pd3dDevice->lpVtbl->ApplyStateBlock(this->m_pd3dDevice, this->m_dwSavedStateBlock);

	return S_OK;
}

#pragma warn(disable:2030)
/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFontRender3DText
 \details	Renders 3D text
 \date		Created  on Sun Dec  4 18:40:07 2016
 \date		Modified on Sun Dec  4 18:40:07 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFontRender3DText(CD3DFont *this, TCHAR *strText, DWORD dwFlags)
{
	if (this->m_pd3dDevice == NULL)
		return E_FAIL;

	// Setup renderstate
	this->m_pd3dDevice->lpVtbl->CaptureStateBlock(this->m_pd3dDevice, this->m_dwSavedStateBlock);
	this->m_pd3dDevice->lpVtbl->ApplyStateBlock(this->m_pd3dDevice, this->m_dwDrawTextStateBlock);
	this->m_pd3dDevice->lpVtbl->SetVertexShader(this->m_pd3dDevice, D3DFVF_FONT3DVERTEX);
	this->m_pd3dDevice->lpVtbl->SetPixelShader(this->m_pd3dDevice, 0UL);
	this->m_pd3dDevice->lpVtbl->SetStreamSource(this->m_pd3dDevice, 0, this->m_pVB, sizeof(FONT3DVERTEX));

	// Set filter states
	if (dwFlags & D3DFONT_FILTERED)
	{
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_MINFILTER, D3DTEXF_LINEAR);
		this->m_pd3dDevice->lpVtbl->SetTextureStageState(this->m_pd3dDevice, 0, D3DTSS_MAGFILTER, D3DTEXF_LINEAR);
	}

	// Position for each text element
	FLOAT x = 0.0f;
	FLOAT y = 0.0f;

	// Center the text block at the origin
	if (dwFlags & D3DFONT_CENTERED)
	{
		SIZE sz;
		CD3DFontGetTextExtent(this, strText, &sz);
		x = -(((FLOAT)sz.cx) / 10.0f) / 2.0f;
		y = -(((FLOAT)sz.cy) / 10.0f) / 2.0f;
	}

	// Turn off culling for two-sided text
	if (dwFlags & D3DFONT_TWOSIDED)
		this->m_pd3dDevice->lpVtbl->SetRenderState(this->m_pd3dDevice, D3DRS_CULLMODE, D3DCULL_NONE);

	FLOAT fStartX = x;
	TCHAR c;

	// Fill vertex buffer
	FONT3DVERTEX *pVertices;
	//DWORD dwVertex = 0L;
	DWORD dwNumTriangles = 0L;
	this->m_pVB->lpVtbl->Lock(this->m_pVB, 0, 0, (BYTE **) & pVertices, D3DLOCK_DISCARD);

	while (c = *strText++)
	{
		if (c == '\n')
		{
			x = fStartX;
			y -= (this->m_fTexCoords[0][3] - this->m_fTexCoords[0][1]) * this->m_dwTexHeight / 10.0f;
		}
		if (c < 32)
			continue;

		FLOAT tx1 = this->m_fTexCoords[c - 32][0];
		FLOAT ty1 = this->m_fTexCoords[c - 32][1];
		FLOAT tx2 = this->m_fTexCoords[c - 32][2];
		FLOAT ty2 = this->m_fTexCoords[c - 32][3];

		FLOAT w = (tx2 - tx1) * this->m_dwTexWidth / (10.0f * this->m_fTextScale);
		FLOAT h = (ty2 - ty1) * this->m_dwTexHeight / (10.0f * this->m_fTextScale);

		if (c != _T(' '))
		{
			*pVertices++ = InitFont3DVertex(&(D3DXVECTOR3){x + 0, y + 0, 0}, &(D3DXVECTOR3){0, 0, -1}, tx1, ty2);
			*pVertices++ = InitFont3DVertex(&(D3DXVECTOR3){x + 0, y + h, 0}, &(D3DXVECTOR3){0, 0, -1}, tx1, ty1);
			*pVertices++ = InitFont3DVertex(&(D3DXVECTOR3){x + w, y + 0, 0}, &(D3DXVECTOR3){0, 0, -1}, tx2, ty2);
			*pVertices++ = InitFont3DVertex(&(D3DXVECTOR3){x + w, y + h, 0}, &(D3DXVECTOR3){0, 0, -1}, tx2, ty1);
			*pVertices++ = InitFont3DVertex(&(D3DXVECTOR3){x + w, y + 0, 0}, &(D3DXVECTOR3){0, 0, -1}, tx2, ty2);
			*pVertices++ = InitFont3DVertex(&(D3DXVECTOR3){x + 0, y + h, 0}, &(D3DXVECTOR3){0, 0, -1}, tx1, ty1);
			dwNumTriangles += 2;

			if (dwNumTriangles * 3 > (MAX_NUM_VERTICES - 6))
			{
				// Unlock, render, and relock the vertex buffer
				this->m_pVB->lpVtbl->Unlock(this->m_pVB);
				this->m_pd3dDevice->lpVtbl->DrawPrimitive(this->m_pd3dDevice, D3DPT_TRIANGLELIST, 0, dwNumTriangles);
				this->m_pVB->lpVtbl->Lock(this->m_pVB, 0, 0, (BYTE **) & pVertices, D3DLOCK_DISCARD);
				dwNumTriangles = 0L;
			}
		}

		x += w;
	}

	// Unlock and render the vertex buffer
	this->m_pVB->lpVtbl->Unlock(this->m_pVB);
	if (dwNumTriangles > 0)
		this->m_pd3dDevice->lpVtbl->DrawPrimitive(this->m_pd3dDevice, D3DPT_TRIANGLELIST, 0, dwNumTriangles);

	// Restore the modified renderstates
	this->m_pd3dDevice->lpVtbl->ApplyStateBlock(this->m_pd3dDevice, this->m_dwSavedStateBlock);

	return S_OK;
}
