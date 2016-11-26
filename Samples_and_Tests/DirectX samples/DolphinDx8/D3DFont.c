// d3dfont.c

#include "dolphin.h"
#include "D3DFont.h"

#define SAFE_RELEASE(p)  { if(p) { (p)->lpVtbl->Release(p); (p)=0; 	} }

FONT2DVERTEX InitFont2DVertex(const D3DXVECTOR4 *p, D3DCOLOR color, float tu, float tv)
{
	FONT2DVERTEX v;
	v.p = *p;
	v.color = color;
	v.tu = tu;
	v.tv = tv;
	return v;
}

D3DXVECTOR4 *D3DVec4(float x, float y, float z, float w)
{
	static D3DXVECTOR4 dv;
	dv.x = x;
	dv.y = y;
	dv.z = z;
	dv.w = w;
	return &dv;
}

//-----------------------------------------------------------------------------
// Name: DrawText()
// Desc: Draws 2D text
//-----------------------------------------------------------------------------
HRESULT D3DFont_DrawText(D3DFONT *f, float sx, float sy, DWORD dwColor, char *strText, DWORD dwFlags)
{
	if (f->pD3DDevice == NULL)
		return E_FAIL;

	// Setup renderstate
	IDirect3DDevice8_CaptureStateBlock(f->pD3DDevice, f->dwSavedStateBlock);
	IDirect3DDevice8_ApplyStateBlock(f->pD3DDevice, f->dwDrawTextStateBlock);
	IDirect3DDevice8_SetVertexShader(f->pD3DDevice, D3DFVF_FONT2DVERTEX);
	IDirect3DDevice8_SetStreamSource(f->pD3DDevice, 0, f->pVB, sizeof(FONT2DVERTEX));

	// Set filter states
	if (dwFlags & D3DFONT_FILTERED)
	{
		IDirect3DDevice8_SetTextureStageState(f->pD3DDevice, 0, D3DTSS_MINFILTER, D3DTEXF_LINEAR);
		IDirect3DDevice8_SetTextureStageState(f->pD3DDevice, 0, D3DTSS_MAGFILTER, D3DTEXF_LINEAR);
	}

	float fStartX = sx;

	// Fill vertex buffer
	FONT2DVERTEX *pVertices = NULL;
	DWORD dwNumTriangles = 0;
	f->pVB->lpVtbl->Lock(f->pVB, 0, 0, (BYTE **) & pVertices, D3DLOCK_DISCARD);

	while (*strText)
	{
		char c = *strText++;

		if (c == '\n')
		{
			sx = fStartX;
			sy += (f->fTexCoords[0][3] - f->fTexCoords[0][1]) * f->dwTexHeight;
		}
		if (c < ' ')
			continue;

		float tx1 = f->fTexCoords[c - 32][0];
		float ty1 = f->fTexCoords[c - 32][1];
		float tx2 = f->fTexCoords[c - 32][2];
		float ty2 = f->fTexCoords[c - 32][3];

		float w = (tx2 - tx1) * f->dwTexWidth / f->fTextScale;
		float h = (ty2 - ty1) * f->dwTexHeight / f->fTextScale;

		*pVertices++ = InitFont2DVertex(D3DVec4(sx + 0 - 0.5f, sy + h - 0.5f, 0.9f, 1.0f), dwColor, tx1, ty2);
		*pVertices++ = InitFont2DVertex(D3DVec4(sx + 0 - 0.5f, sy + 0 - 0.5f, 0.9f, 1.0f), dwColor, tx1, ty1);
		*pVertices++ = InitFont2DVertex(D3DVec4(sx + w - 0.5f, sy + h - 0.5f, 0.9f, 1.0f), dwColor, tx2, ty2);
		*pVertices++ = InitFont2DVertex(D3DVec4(sx + w - 0.5f, sy + 0 - 0.5f, 0.9f, 1.0f), dwColor, tx2, ty1);
		*pVertices++ = InitFont2DVertex(D3DVec4(sx + w - 0.5f, sy + h - 0.5f, 0.9f, 1.0f), dwColor, tx2, ty2);
		*pVertices++ = InitFont2DVertex(D3DVec4(sx + 0 - 0.5f, sy + 0 - 0.5f, 0.9f, 1.0f), dwColor, tx1, ty1);

		dwNumTriangles += 2;

		if (dwNumTriangles * 3 > (MAX_NUM_VERTICES - 6))
		{
			// Unlock, render, and relock the vertex buffer
			f->pVB->lpVtbl->Unlock(f->pVB);
			IDirect3DDevice8_DrawPrimitive(f->pD3DDevice, D3DPT_TRIANGLELIST, 0, dwNumTriangles);
			pVertices = NULL;
			f->pVB->lpVtbl->Lock(f->pVB, 0, 0, (BYTE **) & pVertices, D3DLOCK_DISCARD);
			dwNumTriangles = 0L;
		}

		sx += w;
	}

	// Unlock and render the vertex buffer
	f->pVB->lpVtbl->Unlock(f->pVB);
	if (dwNumTriangles > 0)
		IDirect3DDevice8_DrawPrimitive(f->pD3DDevice, D3DPT_TRIANGLELIST, 0, dwNumTriangles);

	// Restore the modified renderstates
	IDirect3DDevice8_ApplyStateBlock(f->pD3DDevice, f->dwSavedStateBlock);

	return S_OK;
}

HRESULT D3DFont_InitDeviceObjects(D3DFONT *f, LPDIRECT3DDEVICE8 pD3DDevice)
{
	//-----------------------------------------------------------------------------
	// Name: D3DFont_InitDeviceObjects()
	// Desc: Initializes device-dependent objects, including the vertex buffer used
	//       for rendering text and the texture map which stores the font image.
	//-----------------------------------------------------------------------------

	HRESULT hr;

	f->pTexture = NULL;
	f->pVB = NULL;

	f->dwSavedStateBlock = 0;
	f->dwDrawTextStateBlock = 0;

	// Keep a local copy of the device
	f->pD3DDevice = pD3DDevice;

	// Establish the font and texture size
	f->fTextScale = 1.0f;	// Draw fonts into texture without scaling

	// Large fonts need larger textures
	if (f->dwFontHeight > 40)
	{
		f->dwTexWidth = 1024;
		f->dwTexHeight = 1024;
	}
	else if (f->dwFontHeight > 20)
	{
		f->dwTexWidth = 512;
		f->dwTexHeight = 512;
	}
	else
	{
		f->dwTexWidth = 256;
		f->dwTexHeight = 256;
	}

	// If requested texture is too big, use a smaller texture and smaller font,
	// and scale up when rendering.

	D3DCAPS8 d3dCaps;
	hr = IDirect3DDevice8_GetDeviceCaps(f->pD3DDevice, &d3dCaps);

	if (f->dwTexWidth > d3dCaps.MaxTextureWidth)
	{
		f->fTextScale = d3dCaps.MaxTextureWidth / f->dwTexWidth;
		f->dwTexWidth = f->dwTexHeight = d3dCaps.MaxTextureWidth;
	}

	// Create a new texture for the font
	hr = IDirect3DDevice8_CreateTexture(f->pD3DDevice, f->dwTexWidth, f->dwTexHeight, 1, 0, D3DFMT_A4R4G4B4, D3DPOOL_MANAGED, &f->pTexture);
	if (hr != S_OK)
	{
		return hr;
	}

	// Prepare to create a bitmap
	DWORD *pBitmapBits;
	BITMAPINFO bmi;
	memset(&bmi.bmiHeader, 0, sizeof(BITMAPINFOHEADER));
	bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
	bmi.bmiHeader.biWidth = (int)f->dwTexWidth;
	bmi.bmiHeader.biHeight = -(int)f->dwTexHeight;	// Top down
	bmi.bmiHeader.biPlanes = 1;
	bmi.bmiHeader.biCompression = BI_RGB;
	bmi.bmiHeader.biBitCount = 32;

	// Create a DC and a bitmap for the font
	HDC hDC = CreateCompatibleDC(NULL);
	HBITMAP hbmBitmap = CreateDIBSection(hDC, &bmi, DIB_RGB_COLORS, (void **)&pBitmapBits, NULL, 0);

	SetMapMode(hDC, MM_TEXT);

	// Create a font.  By specifying ANTIALIASED_QUALITY, we might get an
	// antialiased font, but this is not guaranteed.
	int nHeight = -MulDiv(f->dwFontHeight, GetDeviceCaps(hDC, LOGPIXELSY) * f->fTextScale, 72);
	DWORD dwBold = (f->dwFontFlags & D3DFONT_BOLD) ? FW_BOLD : FW_NORMAL;
	DWORD dwItalic = (f->dwFontFlags & D3DFONT_ITALIC) ? TRUE : FALSE;
	HFONT hFont = CreateFont(nHeight, 0, 0, 0, dwBold, dwItalic, FALSE, FALSE,
		DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, ANTIALIASED_QUALITY,
		VARIABLE_PITCH, f->strFontName);

	if (NULL == hFont)
		return E_FAIL;

	SelectObject(hDC, hbmBitmap);
	SelectObject(hDC, hFont);

	// Set text properties
	SetTextColor(hDC, RGB(255, 255, 255));
	SetBkColor(hDC, 0x00000000);
	SetTextAlign(hDC, TA_TOP);

	// Loop through all printable character and output them to the bitmap.
	// Meanwhile, keep track of the corresponding tex coords for each character.
	unsigned long x = 0, y = 0;
	char nStr[20] = { 0 };
	SIZE size;
	unsigned char c;

	for (c = 32; c < 128; c++)
	{

		nStr[0] = c;

		GetTextExtentPoint32(hDC, nStr, 1, &size);

		if (x + size.cx + 1 > f->dwTexWidth)
		{
			x = 0;
			y += size.cy + 1;
		}

		ExtTextOut(hDC, x + 0, y + 0, ETO_OPAQUE, NULL, nStr, 1, NULL);

		f->fTexCoords[c - 32][0] = ((float)(x + 0)) / f->dwTexWidth;
		f->fTexCoords[c - 32][1] = ((float)(y + 0)) / f->dwTexHeight;
		f->fTexCoords[c - 32][2] = ((float)(x + 0 + size.cx)) / f->dwTexWidth;
		f->fTexCoords[c - 32][3] = ((float)(y + 0 + size.cy)) / f->dwTexHeight;

		x += size.cx + 1;
	}

	// Lock the surface and write the alpha values for the set pixels
	D3DLOCKED_RECT d3dlr;
	IDirect3DTexture8_LockRect(f->pTexture, 0, &d3dlr, 0, 0);

	short *pDst16 = d3dlr.pBits;

	BYTE bAlpha;	// 4-bit measure of pixel intensity

	for (y = 0; y < f->dwTexHeight; y++)
	{

		for (x = 0; x < f->dwTexWidth; x++)
		{
			bAlpha = (BYTE) ((pBitmapBits[f->dwTexWidth * y + x] & 0xff) >> 4);
			if (bAlpha > 0)
			{
				*pDst16++ = (bAlpha << 12) | 0x0fff;
			}
			else
			{
				*pDst16++ = 0x0000;
			}
		}
	}

	// Done updating texture, so clean up used objects
	IDirect3DTexture8_UnlockRect(f->pTexture, 0);
	DeleteObject(hbmBitmap);
	DeleteDC(hDC);
	DeleteObject(hFont);

	return S_OK;

}

int D3DFont_InvalidateDeviceObjects(D3DFONT *f)
{
	//-----------------------------------------------------------------------------
	// Name: D3DFont_InvalidateDeviceObjects()
	// Desc: Destroys all device-dependent objects
	//-----------------------------------------------------------------------------

	SAFE_RELEASE(f->pVB);

	// Delete the state blocks
	if (f->pD3DDevice)
	{

		if (f->dwSavedStateBlock)
		{
			IDirect3DDevice8_DeleteStateBlock(f->pD3DDevice, f->dwSavedStateBlock);
		}

		if (f->dwDrawTextStateBlock)
		{
			IDirect3DDevice8_DeleteStateBlock(f->pD3DDevice, f->dwDrawTextStateBlock);
		}
	}

	f->dwSavedStateBlock = 0;
	f->dwDrawTextStateBlock = 0;

	return S_OK;
}

int D3DFont_DeleteDeviceObjects(D3DFONT *f)
{
	//-----------------------------------------------------------------------------
	// Name: D3DFont_DeleteDeviceObjects()
	// Desc: Destroys all font device-dependent objects
	//-----------------------------------------------------------------------------

	SAFE_RELEASE(f->pTexture);
	f->pD3DDevice = NULL;

	return S_OK;
}

void D3DFont_Create(D3DFONT *f, char *FtName, int fHeight, DWORD dwFlags)
{
	// D3DFont_Create
	strcpy(f->strFontName, FtName);
	f->dwFontFlags = dwFlags;
	f->dwFontHeight = fHeight;
}

void D3DFont_Destroy(D3DFONT *f)
{
	//-----------------------------------------------------------------------------
	// Name: D3DFont_Destroy()
	// Desc: Destroys all device-dependent objects
	//-----------------------------------------------------------------------------

	D3DFont_InvalidateDeviceObjects(f);
	D3DFont_DeleteDeviceObjects(f);
}

HRESULT D3DFont_RestoreDeviceObjects(D3DFONT *f)
{
	//-----------------------------------------------------------------------------
	// Name: D3DFont_RestoreDeviceObjects()
	// Desc:
	//-----------------------------------------------------------------------------
	HRESULT hr;

	// Create vertex buffer for the letters
	hr = IDirect3DDevice8_CreateVertexBuffer(f->pD3DDevice, MAX_NUM_VERTICES * sizeof(FONT2DVERTEX), D3DUSAGE_WRITEONLY | D3DUSAGE_DYNAMIC, 0, D3DPOOL_DEFAULT, &f->pVB);

	if (hr != S_OK)
	{
		return hr;
	}

	// Create the state blocks for rendering text
	int which;
	for (which = 0; which < 2; which++)
	{
		IDirect3DDevice8_BeginStateBlock(f->pD3DDevice);
		IDirect3DDevice8_SetTexture(f->pD3DDevice, 0, (IDirect3DBaseTexture8 *)f->pTexture);
		IDirect3DDevice8_SetRenderState(f->pD3DDevice, D3DRS_ALPHABLENDENABLE, TRUE);
		IDirect3DDevice8_SetRenderState(f->pD3DDevice, D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
		IDirect3DDevice8_SetRenderState(f->pD3DDevice, D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
		IDirect3DDevice8_SetRenderState(f->pD3DDevice, D3DRS_ALPHATESTENABLE, TRUE);
		IDirect3DDevice8_SetRenderState(f->pD3DDevice, D3DRS_ALPHAREF, 0x08);
		IDirect3DDevice8_SetRenderState(f->pD3DDevice, D3DRS_ALPHAFUNC, D3DCMP_GREATEREQUAL);
		IDirect3DDevice8_SetRenderState(f->pD3DDevice, D3DRS_FILLMODE, D3DFILL_SOLID);
		IDirect3DDevice8_SetRenderState(f->pD3DDevice, D3DRS_CULLMODE, D3DCULL_CCW);
		IDirect3DDevice8_SetRenderState(f->pD3DDevice, D3DRS_ZENABLE, FALSE);
		IDirect3DDevice8_SetRenderState(f->pD3DDevice, D3DRS_STENCILENABLE, FALSE);
		IDirect3DDevice8_SetRenderState(f->pD3DDevice, D3DRS_CLIPPING, TRUE);
		IDirect3DDevice8_SetRenderState(f->pD3DDevice, D3DRS_EDGEANTIALIAS, FALSE);
		IDirect3DDevice8_SetRenderState(f->pD3DDevice, D3DRS_CLIPPLANEENABLE, FALSE);
		IDirect3DDevice8_SetRenderState(f->pD3DDevice, D3DRS_VERTEXBLEND, FALSE);
		IDirect3DDevice8_SetRenderState(f->pD3DDevice, D3DRS_INDEXEDVERTEXBLENDENABLE, FALSE);
		IDirect3DDevice8_SetRenderState(f->pD3DDevice, D3DRS_FOGENABLE, FALSE);
		IDirect3DDevice8_SetTextureStageState(f->pD3DDevice, 0, D3DTSS_COLOROP, D3DTOP_MODULATE);
		IDirect3DDevice8_SetTextureStageState(f->pD3DDevice, 0, D3DTSS_COLORARG1, D3DTA_TEXTURE);
		IDirect3DDevice8_SetTextureStageState(f->pD3DDevice, 0, D3DTSS_COLORARG2, D3DTA_DIFFUSE);
		IDirect3DDevice8_SetTextureStageState(f->pD3DDevice, 0, D3DTSS_ALPHAOP, D3DTOP_MODULATE);
		IDirect3DDevice8_SetTextureStageState(f->pD3DDevice, 0, D3DTSS_ALPHAARG1, D3DTA_TEXTURE);
		IDirect3DDevice8_SetTextureStageState(f->pD3DDevice, 0, D3DTSS_ALPHAARG2, D3DTA_DIFFUSE);
		IDirect3DDevice8_SetTextureStageState(f->pD3DDevice, 0, D3DTSS_MINFILTER, D3DTEXF_POINT);
		IDirect3DDevice8_SetTextureStageState(f->pD3DDevice, 0, D3DTSS_MAGFILTER, D3DTEXF_POINT);
		IDirect3DDevice8_SetTextureStageState(f->pD3DDevice, 0, D3DTSS_MIPFILTER, D3DTEXF_NONE);
		IDirect3DDevice8_SetTextureStageState(f->pD3DDevice, 0, D3DTSS_TEXCOORDINDEX, 0);
		IDirect3DDevice8_SetTextureStageState(f->pD3DDevice, 0, D3DTSS_TEXTURETRANSFORMFLAGS, D3DTTFF_DISABLE);
		IDirect3DDevice8_SetTextureStageState(f->pD3DDevice, 1, D3DTSS_COLOROP, D3DTOP_DISABLE);
		IDirect3DDevice8_SetTextureStageState(f->pD3DDevice, 1, D3DTSS_ALPHAOP, D3DTOP_DISABLE);

		if (which == 0)
		{
			IDirect3DDevice8_EndStateBlock(f->pD3DDevice, &f->dwSavedStateBlock);
		}
		else
		{
			IDirect3DDevice8_EndStateBlock(f->pD3DDevice, &f->dwDrawTextStateBlock);
		}

	}

	return S_OK;

}
