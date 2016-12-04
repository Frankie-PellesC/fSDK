/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dutil.c
 \par Description 
            Shortcut macros and functions for using DX objects
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Dec  4 18:48:00 2016
 \date		Modified on Sun Dec  4 18:48:00 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#define STRICT
#include <tchar.h>
#include <stdio.h>
#include "D3DUtil.h"
#include "DXUtil.h"
#include <D3DX8.h>

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		D3DUtil_InitMaterial
 \details	Initializes a D3DMATERIAL8 structure, setting the diffuse and 
            ambient colors. It does not set emissive or specular colors.
 \date		Created  on Sun Dec  4 18:48:32 2016
 \date		Modified on Sun Dec  4 18:48:32 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID D3DUtil_InitMaterial(D3DMATERIAL8 *mtrl, FLOAT r, FLOAT g, FLOAT b, FLOAT a)
{
	ZeroMemory(mtrl, sizeof(D3DMATERIAL8));
	mtrl->Diffuse.r = mtrl->Ambient.r = r;
	mtrl->Diffuse.g = mtrl->Ambient.g = g;
	mtrl->Diffuse.b = mtrl->Ambient.b = b;
	mtrl->Diffuse.a = mtrl->Ambient.a = a;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		D3DUtil_InitLight
 \details	Initializes a D3DLIGHT structure, setting the light position. 
            The diffuse color is set to white; specular and ambient are 
            left as black.
 \date		Created  on Sun Dec  4 18:48:49 2016
 \date		Modified on Sun Dec  4 18:48:49 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID D3DUtil_InitLight(D3DLIGHT8 *light, D3DLIGHTTYPE ltType, FLOAT x, FLOAT y, FLOAT z)
{
	ZeroMemory(light, sizeof(D3DLIGHT8));
	light->Type = ltType;
	light->Diffuse.r = 1.0f;
	light->Diffuse.g = 1.0f;
	light->Diffuse.b = 1.0f;
	D3DXVec3Normalize((D3DXVECTOR3 *)(&light->Direction), &((D3DXVECTOR3){x, y, z}));
	light->Position.x = x;
	light->Position.y = y;
	light->Position.z = z;
	light->Range = 1000.0f;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		D3DUtil_CreateTexture
 \details	Helper function to create a texture. It checks the root path 
            first, then tries the DXSDK media path (as specified in the 
            system registry).
 \date		Created  on Sun Dec  4 18:49:08 2016
 \date		Modified on Sun Dec  4 18:49:08 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT D3DUtil_CreateTexture(LPDIRECT3DDEVICE8 pd3dDevice, TCHAR *strTexture, LPDIRECT3DTEXTURE8 *ppTexture, D3DFORMAT d3dFormat)
{
	// Get the path to the texture
	TCHAR strPath[MAX_PATH];
	DXUtil_FindMediaFile(strPath, strTexture);

	// Create the texture using D3DX
	return D3DXCreateTextureFromFileEx(pd3dDevice, strPath, D3DX_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, 0, d3dFormat, D3DPOOL_MANAGED, D3DX_FILTER_TRIANGLE | D3DX_FILTER_MIRROR, D3DX_FILTER_TRIANGLE | D3DX_FILTER_MIRROR, 0, NULL, NULL, ppTexture);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		D3DUtil_SetColorKey
 \details	Changes all texels matching the colorkey to transparent, black.
 \date		Created  on Sun Dec  4 18:49:26 2016
 \date		Modified on Sun Dec  4 18:49:26 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT D3DUtil_SetColorKey(LPDIRECT3DTEXTURE8 pTexture, DWORD dwColorKey)
{
	// Get colorkey's red, green, and blue components
	DWORD r = ((dwColorKey & 0x00ff0000) >> 16);
	DWORD g = ((dwColorKey & 0x0000ff00) >> 8);
	DWORD b = ((dwColorKey & 0x000000ff) >> 0);

	// Put the colorkey in the texture's native format
	D3DSURFACE_DESC d3dsd;
	pTexture->lpVtbl->GetLevelDesc(pTexture, 0, &d3dsd);
	if (d3dsd.Format == D3DFMT_A4R4G4B4)
		dwColorKey = 0xf000 + ((r >> 4) << 8) + ((g >> 4) << 4) + (b >> 4);
	else if (d3dsd.Format == D3DFMT_A1R5G5B5)
		dwColorKey = 0x8000 + ((r >> 3) << 10) + ((g >> 3) << 5) + (b >> 3);
	else if (d3dsd.Format != D3DFMT_A8R8G8B8)
		return E_FAIL;

	// Lock the texture
	D3DLOCKED_RECT d3dlr;
	if (FAILED(pTexture->lpVtbl->LockRect(pTexture, 0, &d3dlr, 0, 0)))
		return E_FAIL;

	// Scan through each pixel, looking for the colorkey to replace
	for (DWORD y = 0; y < d3dsd.Height; y++)
	{
		for (DWORD x = 0; x < d3dsd.Width; x++)
		{
			if (d3dsd.Format == D3DFMT_A8R8G8B8)
			{
				// Handle 32-bit formats
				if (((DWORD *)d3dlr.pBits)[d3dsd.Width * y + x] == dwColorKey)
					((DWORD *)d3dlr.pBits)[d3dsd.Width * y + x] = 0x00000000;
			}
			else
			{
				// Handle 16-bit formats
				if (((WORD *)d3dlr.pBits)[d3dsd.Width * y + x] == dwColorKey)
					((WORD *)d3dlr.pBits)[d3dsd.Width * y + x] = 0x0000;
			}
		}
	}

	// Unlock the texture and return OK.
	pTexture->lpVtbl->UnlockRect(pTexture, 0);
	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		D3DUtil_CreateVertexShader
 \details	Assembles and creates a file-based vertex shader
 \date		Created  on Sun Dec  4 18:49:40 2016
 \date		Modified on Sun Dec  4 18:49:40 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT D3DUtil_CreateVertexShader(LPDIRECT3DDEVICE8 pd3dDevice, TCHAR *strFilename, DWORD *pdwVertexDecl, DWORD *pdwVertexShader)
{
	LPD3DXBUFFER pCode;
	TCHAR strPath[MAX_PATH];
	HRESULT hr;

	// Get the path to the vertex shader file
	DXUtil_FindMediaFile(strPath, strFilename);

	// Assemble the vertex shader file
	if (FAILED(hr = D3DXAssembleShaderFromFile(strPath, 0, NULL, &pCode, NULL)))
		return hr;

	// Create the vertex shader
	hr = pd3dDevice->lpVtbl->CreateVertexShader(pd3dDevice, pdwVertexDecl, (DWORD *)pCode->lpVtbl->GetBufferPointer(pCode), pdwVertexShader, 0);
	pCode->lpVtbl->Release(pCode);
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		D3DUtil_GetCubeMapViewMatrix
 \details	Returns a view matrix for rendering to a face of a cubemap.
 \date		Created  on Sun Dec  4 18:49:52 2016
 \date		Modified on Sun Dec  4 18:49:52 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
D3DXMATRIX D3DUtil_GetCubeMapViewMatrix(DWORD dwFace)
{
	D3DXVECTOR3 vEyePt = {0.0f, 0.0f, 0.0f};
	D3DXVECTOR3 vLookDir;
	D3DXVECTOR3 vUpDir;

	switch (dwFace)
	{
		case D3DCUBEMAP_FACE_POSITIVE_X:
			vLookDir = (D3DXVECTOR3){1.0f, 0.0f, 0.0f};
			vUpDir = (D3DXVECTOR3){0.0f, 1.0f, 0.0f};
			break;
		case D3DCUBEMAP_FACE_NEGATIVE_X:
			vLookDir = (D3DXVECTOR3){-1.0f, 0.0f, 0.0f};
			vUpDir = (D3DXVECTOR3){0.0f, 1.0f, 0.0f};
			break;
		case D3DCUBEMAP_FACE_POSITIVE_Y:
			vLookDir = (D3DXVECTOR3){0.0f, 1.0f, 0.0f};
			vUpDir = (D3DXVECTOR3){0.0f, 0.0f, -1.0f};
			break;
		case D3DCUBEMAP_FACE_NEGATIVE_Y:
			vLookDir = (D3DXVECTOR3){0.0f, -1.0f, 0.0f};
			vUpDir = (D3DXVECTOR3){0.0f, 0.0f, 1.0f};
			break;
		case D3DCUBEMAP_FACE_POSITIVE_Z:
			vLookDir = (D3DXVECTOR3){0.0f, 0.0f, 1.0f};
			vUpDir = (D3DXVECTOR3){0.0f, 1.0f, 0.0f};
			break;
		case D3DCUBEMAP_FACE_NEGATIVE_Z:
			vLookDir = (D3DXVECTOR3){0.0f, 0.0f, -1.0f};
			vUpDir = (D3DXVECTOR3){0.0f, 1.0f, 0.0f};
			break;
	}

	// Set the view transform for this cubemap surface
	D3DXMATRIX matView;
	D3DXMatrixLookAtLH(&matView, &vEyePt, &vLookDir, &vUpDir);
	return matView;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		D3DUtil_GetRotationFromCursor
 \details	Returns a quaternion for the rotation implied by the window's 
            cursor position.
 \date		Created  on Sun Dec  4 18:50:09 2016
 \date		Modified on Sun Dec  4 18:50:09 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
D3DXQUATERNION D3DUtil_GetRotationFromCursor(HWND hWnd, FLOAT fTrackBallRadius)
{
	POINT pt;
	RECT rc;
	GetCursorPos(&pt);
	GetClientRect(hWnd, &rc);
	ScreenToClient(hWnd, &pt);
	FLOAT sx = (((2.0f * pt.x) / (rc.right - rc.left)) - 1);
	FLOAT sy = (((2.0f * pt.y) / (rc.bottom - rc.top)) - 1);
	FLOAT sz;

	if (sx == 0.0f && sy == 0.0f)
		return (D3DXQUATERNION){0.0f, 0.0f, 0.0f, 1.0f};

	//FLOAT d1 = 0.0f;
	FLOAT d2 = sqrtf(sx * sx + sy * sy);

	if (d2 < fTrackBallRadius * 0.70710678118654752440)	// Inside sphere
		sz = sqrtf(fTrackBallRadius * fTrackBallRadius - d2 * d2);
	else	// On hyperbola
		sz = (fTrackBallRadius * fTrackBallRadius) / (2.0f * d2);

	// Get two points on trackball's sphere
	D3DXVECTOR3 p1 = {sx, sy, sz};
	D3DXVECTOR3 p2 = {0.0f, 0.0f, fTrackBallRadius};

	// Get axis of rotation, which is cross product of p1 and p2
	D3DXVECTOR3 vAxis;
	D3DXVec3Cross(&vAxis, &p1, &p2);

	// Calculate angle for the rotation about that axis
	FLOAT t = D3DXVec3Length(&((D3DXVECTOR3){p2.x - p1.x, p2.y - p1.y, p2.z - p1.z})) / (2.0f * fTrackBallRadius);
	if (t > +1.0f)
		t = +1.0f;
	if (t < -1.0f)
		t = -1.0f;
	FLOAT fAngle = 2.0f * asinf(t);

	// Convert axis to quaternion
	D3DXQUATERNION quat;
	D3DXQuaternionRotationAxis(&quat, &vAxis, fAngle);
	return quat;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		D3DUtil_SetDeviceCursor
 \details	Gives the D3D device a cursor with image and hotspot from 
            hCursor.
 \date		Created  on Sun Dec  4 18:50:26 2016
 \date		Modified on Sun Dec  4 18:50:26 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT D3DUtil_SetDeviceCursor(LPDIRECT3DDEVICE8 pd3dDevice, HCURSOR hCursor, BOOL bAddWatermark)
{
	HRESULT hr = E_FAIL;
	ICONINFO iconinfo;
	BOOL bBWCursor;
	LPDIRECT3DSURFACE8 pCursorBitmap = NULL;
	HDC hdcColor = NULL;
	HDC hdcMask = NULL;
	HDC hdcScreen = NULL;
	BITMAP bm;
	DWORD dwWidth;
	DWORD dwHeightSrc;
	DWORD dwHeightDest;
	COLORREF crColor;
	COLORREF crMask;
	UINT x;
	UINT y;
	BITMAPINFO bmi;
	COLORREF *pcrArrayColor = NULL;
	COLORREF *pcrArrayMask = NULL;
	DWORD *pBitmap;
	HGDIOBJ hgdiobjOld;

	ZeroMemory(&iconinfo, sizeof(iconinfo));
	if (!GetIconInfo(hCursor, &iconinfo))
		goto End;

	if (0 == GetObject((HGDIOBJ)iconinfo.hbmMask, sizeof(BITMAP), (LPVOID) & bm))
		goto End;
	dwWidth = bm.bmWidth;
	dwHeightSrc = bm.bmHeight;

	if (iconinfo.hbmColor == NULL)
	{
		bBWCursor = TRUE;
		dwHeightDest = dwHeightSrc / 2;
	}
	else
	{
		bBWCursor = FALSE;
		dwHeightDest = dwHeightSrc;
	}

	// Create a surface for the fullscreen cursor
	if (FAILED(hr = pd3dDevice->lpVtbl->CreateImageSurface(pd3dDevice, dwWidth, dwHeightDest, D3DFMT_A8R8G8B8, &pCursorBitmap)))
	{
		goto End;
	}

	pcrArrayMask = malloc(sizeof(DWORD) * dwWidth * dwHeightSrc);

	ZeroMemory(&bmi, sizeof(bmi));
	bmi.bmiHeader.biSize = sizeof(bmi.bmiHeader);
	bmi.bmiHeader.biWidth = dwWidth;
	bmi.bmiHeader.biHeight = dwHeightSrc;
	bmi.bmiHeader.biPlanes = 1;
	bmi.bmiHeader.biBitCount = 32;
	bmi.bmiHeader.biCompression = BI_RGB;

	hdcScreen = GetDC(NULL);
	hdcMask = CreateCompatibleDC(hdcScreen);
	if (hdcMask == NULL)
	{
		hr = E_FAIL;
		goto End;
	}
	hgdiobjOld = SelectObject(hdcMask, iconinfo.hbmMask);
	GetDIBits(hdcMask, iconinfo.hbmMask, 0, dwHeightSrc, pcrArrayMask, &bmi, DIB_RGB_COLORS);
	SelectObject(hdcMask, hgdiobjOld);

	if (!bBWCursor)
	{
		pcrArrayColor = malloc(sizeof(DWORD) * dwWidth * dwHeightDest);
		hdcColor = CreateCompatibleDC(GetDC(NULL));
		if (hdcColor == NULL)
		{
			hr = E_FAIL;
			goto End;
		}
		SelectObject(hdcColor, iconinfo.hbmColor);
		GetDIBits(hdcColor, iconinfo.hbmColor, 0, dwHeightDest, pcrArrayColor, &bmi, DIB_RGB_COLORS);
	}

	// Transfer cursor image into the surface
	D3DLOCKED_RECT lr;
	pCursorBitmap->lpVtbl->LockRect(pCursorBitmap, &lr, NULL, 0);
	pBitmap = (DWORD *)lr.pBits;
	for (y = 0; y < dwHeightDest; y++)
	{
		for (x = 0; x < dwWidth; x++)
		{
			if (bBWCursor)
			{
				crColor = pcrArrayMask[dwWidth * (dwHeightDest - 1 - y) + x];
				crMask = pcrArrayMask[dwWidth * (dwHeightSrc - 1 - y) + x];
			}
			else
			{
				crColor = pcrArrayColor[dwWidth * (dwHeightDest - 1 - y) + x];
				crMask = pcrArrayMask[dwWidth * (dwHeightDest - 1 - y) + x];
			}
			if (crMask == 0)
				pBitmap[dwWidth * y + x] = 0xff000000 | crColor;
			else
				pBitmap[dwWidth * y + x] = 0x00000000;

			// It may be helpful to make the D3D cursor look slightly 
			// different from the Windows cursor so you can distinguish 
			// between the two when developing/testing code.  When
			// bAddWatermark is TRUE, the following code adds some
			// small grey "D3D" characters to the upper-left corner of
			// the D3D cursor image.
			if (bAddWatermark && x < 12 && y < 5)
			{
				// 11.. 11.. 11.. .... CCC0
				// 1.1. ..1. 1.1. .... A2A0
				// 1.1. .1.. 1.1. .... A4A0
				// 1.1. ..1. 1.1. .... A2A0
				// 11.. 11.. 11.. .... CCC0

				const WORD wMask[5] = { 0xccc0, 0xa2a0, 0xa4a0, 0xa2a0, 0xccc0 };
				if (wMask[y] & (1 << (15 - x)))
				{
					pBitmap[dwWidth * y + x] |= 0xff808080;
				}
			}
		}
	}
	pCursorBitmap->lpVtbl->UnlockRect(pCursorBitmap);

	// Set the device cursor
	if (FAILED(hr = pd3dDevice->lpVtbl->SetCursorProperties(pd3dDevice, iconinfo.xHotspot, iconinfo.yHotspot, pCursorBitmap)))
	{
		goto End;
	}

	hr = S_OK;

  End:
	if (iconinfo.hbmMask != NULL)
		DeleteObject(iconinfo.hbmMask);
	if (iconinfo.hbmColor != NULL)
		DeleteObject(iconinfo.hbmColor);
	if (hdcScreen != NULL)
		ReleaseDC(NULL, hdcScreen);
	if (hdcColor != NULL)
		DeleteDC(hdcColor);
	if (hdcMask != NULL)
		DeleteDC(hdcMask);
	SAFE_DELETE_ARRAY(pcrArrayColor);
	SAFE_DELETE_ARRAY(pcrArrayMask);
	SAFE_RELEASE(pCursorBitmap);
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		D3DXQuaternionUnitAxisToUnitAxis2
 \details	Axis to axis quaternion double angle (no normalization)
            Takes two points on unit sphere an angle THETA apart, returns 
            quaternion that represents a rotation around cross product by 
            2*THETA.
 \date		Created  on Sun Dec  4 18:51:12 2016
 \date		Modified on Sun Dec  4 18:51:12 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
inline D3DXQUATERNION *WINAPI D3DXQuaternionUnitAxisToUnitAxis2(D3DXQUATERNION *pOut, const D3DXVECTOR3 *pvFrom, const D3DXVECTOR3 *pvTo) {
	D3DXVECTOR3 vAxis;
	D3DXVec3Cross(&vAxis, pvFrom, pvTo);	// proportional to sin(theta)
	pOut->x = vAxis.x;
	pOut->y = vAxis.y;
	pOut->z = vAxis.z;
	pOut->w = D3DXVec3Dot(pvFrom, pvTo);
	return pOut;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		D3DXQuaternionAxisToAxis
 \details	Axis to axis quaternion
            Takes two points on unit sphere an angle THETA apart, returns 
            quaternion that represents a rotation around cross product by 
            theta.
 \date		Created  on Sun Dec  4 18:52:03 2016
 \date		Modified on Sun Dec  4 18:52:03 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
inline D3DXQUATERNION *WINAPI D3DXQuaternionAxisToAxis(D3DXQUATERNION *pOut, const D3DXVECTOR3 *pvFrom, const D3DXVECTOR3 *pvTo) {
	D3DXVECTOR3 vA, vB;
	D3DXVec3Normalize(&vA, pvFrom);
	D3DXVec3Normalize(&vB, pvTo);
	D3DXVECTOR3 vHalf = {vA.x + vB.x, vA.y + vB.y, vA.z + vB.z};
	D3DXVec3Normalize(&vHalf, &vHalf);
	return D3DXQuaternionUnitAxisToUnitAxis2(pOut, &vA, &vHalf);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DArcBallNew
 \date		Created  on Sun Dec  4 18:52:20 2016
 \date		Modified on Sun Dec  4 18:52:20 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CD3DArcBall *CD3DArcBallNew(void)
{
	CD3DArcBall *this = malloc(sizeof(CD3DArcBall));
	if (!this)
		return NULL;

	D3DXQuaternionIdentity(&this->m_qDown);
	D3DXQuaternionIdentity(&this->m_qNow);
	D3DXMatrixIdentity(&this->m_matRotation);
	D3DXMatrixIdentity(&this->m_matRotationDelta);
	D3DXMatrixIdentity(&this->m_matTranslation);
	D3DXMatrixIdentity(&this->m_matTranslationDelta);
	this->m_bDrag              = FALSE;
	this->m_fRadiusTranslation = 1.0f;
	this->m_bRightHanded       = FALSE;

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DArcBalSetWindow
 \date		Created  on Sun Dec  4 18:52:49 2016
 \date		Modified on Sun Dec  4 18:52:49 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID CD3DArcBalSetWindow(CD3DArcBall *this, int iWidth, int iHeight, float fRadius)
{
	// Set ArcBall info
	this->m_iWidth  = iWidth;
	this->m_iHeight = iHeight;
	this->m_fRadius = fRadius;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DArcBallScreenToVector
 \date		Created  on Sun Dec  4 18:52:57 2016
 \date		Modified on Sun Dec  4 18:52:57 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
D3DXVECTOR3 CD3DArcBallScreenToVector(CD3DArcBall *this, int sx, int sy)
{
	// Scale to screen
	FLOAT x = -(sx - this->m_iWidth  / 2) / (this->m_fRadius * this->m_iWidth / 2);
	FLOAT y =  (sy - this->m_iHeight / 2) / (this->m_fRadius * this->m_iHeight / 2);

	if (this->m_bRightHanded)
	{
		x = -x;
		y = -y;
	}

	FLOAT z = 0.0f;
	FLOAT mag = x * x + y * y;

	if (mag > 1.0f)
	{
		FLOAT scale = 1.0f / sqrtf(mag);
		x *= scale;
		y *= scale;
	}
	else
		z = sqrtf(1.0f - mag);

	// Return vector
	return (D3DXVECTOR3){x, y, z};
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DArcBallSetRadius
 \date		Created  on Sun Dec  4 18:53:08 2016
 \date		Modified on Sun Dec  4 18:53:08 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID CD3DArcBallSetRadius(CD3DArcBall *this, FLOAT fRadius)
{
	this->m_fRadiusTranslation = fRadius;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DArcBallHandleMouseMessages
 \date		Created  on Sun Dec  4 18:53:16 2016
 \date		Modified on Sun Dec  4 18:53:16 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
LRESULT CD3DArcBallHandleMouseMessages(CD3DArcBall *this, HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	static int iCurMouseX;	// Saved mouse position
	static int iCurMouseY;
	static D3DXVECTOR3 s_vDown;	// Button down vector

	// Current mouse position
	int iMouseX = LOWORD(lParam);
	int iMouseY = HIWORD(lParam);

	switch (uMsg)
	{
		case WM_RBUTTONDOWN:
		case WM_MBUTTONDOWN:
			// Store off the position of the cursor when the button is pressed
			iCurMouseX = iMouseX;
			iCurMouseY = iMouseY;
			return TRUE;

		case WM_LBUTTONDOWN:
			// Start drag mode
			this->m_bDrag = TRUE;
			s_vDown = CD3DArcBallScreenToVector(this, iMouseX, iMouseY);
			this->m_qDown = this->m_qNow;
			return TRUE;

		case WM_LBUTTONUP:
			// End drag mode
			this->m_bDrag = FALSE;
			return TRUE;

		case WM_MOUSEMOVE:
			// Drag object
			if (MK_LBUTTON & wParam)
			{
				if (this->m_bDrag)
				{
					// recompute this->m_qNow
					D3DXVECTOR3 vCur = CD3DArcBallScreenToVector(this, iMouseX, iMouseY);
					D3DXQUATERNION qAxisToAxis;
					D3DXQuaternionAxisToAxis(&qAxisToAxis, &s_vDown, &vCur);
					this->m_qNow = this->m_qDown;
					this->m_qNow.x *= qAxisToAxis.x;
					this->m_qNow.y *= qAxisToAxis.y;
					this->m_qNow.z *= qAxisToAxis.z;
					this->m_qNow.w *= qAxisToAxis.w;
					D3DXMatrixRotationQuaternion(&this->m_matRotationDelta, &qAxisToAxis);
				}
				else
					D3DXMatrixIdentity(&this->m_matRotationDelta);
				D3DXMatrixRotationQuaternion(&this->m_matRotation, &this->m_qNow);
				this->m_bDrag = TRUE;
			}
			else if ((MK_RBUTTON & wParam) || (MK_MBUTTON & wParam))
			{
				// Normalize based on size of window and bounding sphere radius
				FLOAT fDeltaX = (iCurMouseX - iMouseX) * this->m_fRadiusTranslation / this->m_iWidth;
				FLOAT fDeltaY = (iCurMouseY - iMouseY) * this->m_fRadiusTranslation / this->m_iHeight;

				if (wParam & MK_RBUTTON)
				{
					D3DXMatrixTranslation(&this->m_matTranslationDelta, -2 * fDeltaX, 2 * fDeltaY, 0.0f);
					D3DXMatrixMultiply(&this->m_matTranslation, &this->m_matTranslation, &this->m_matTranslationDelta);
				}
				else	// wParam & MK_MBUTTON
				{
					D3DXMatrixTranslation(&this->m_matTranslationDelta, 0.0f, 0.0f, 5 * fDeltaY);
					D3DXMatrixMultiply(&this->m_matTranslation, &this->m_matTranslation, &this->m_matTranslationDelta);
				}

				// Store mouse coordinate
				iCurMouseX = iMouseX;
				iCurMouseY = iMouseY;
			}
			return TRUE;
	}

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DCameraNew
 \date		Created  on Sun Dec  4 18:53:26 2016
 \date		Modified on Sun Dec  4 18:53:26 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CD3DCamera *CD3DCameraNew(void)
{
	CD3DCamera *this = malloc(sizeof(CD3DCamera));
	if (!this)
		return NULL;

	// Set attributes for the view matrix
	CD3DCameraSetViewParams(this, &((D3DXVECTOR3){0.0f, 0.0f, 0.0f}), &((D3DXVECTOR3){0.0f, 0.0f, 1.0f}), &((D3DXVECTOR3){0.0f, 1.0f, 0.0f}));

	// Set attributes for the projection matrix
	CD3DCameraSetProjParams(this, D3DX_PI / 4, 1.0f, 1.0f, 1000.0f);

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DCameraSetViewParams
 \date		Created  on Sun Dec  4 18:53:34 2016
 \date		Modified on Sun Dec  4 18:53:34 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID CD3DCameraSetViewParams(CD3DCamera *this, D3DXVECTOR3 *vEyePt, D3DXVECTOR3 *vLookatPt, D3DXVECTOR3 *vUpVec)
{
	// Set attributes for the view matrix
	this->m_vEyePt    = *vEyePt;
	this->m_vLookatPt = *vLookatPt;
	this->m_vUpVec    = *vUpVec;
	D3DXVec3Normalize(&this->m_vView, &((D3DXVECTOR3){this->m_vLookatPt.x - this->m_vEyePt.x,
													  this->m_vLookatPt.y - this->m_vEyePt.y,
													  this->m_vLookatPt.z - this->m_vEyePt.z}));
	D3DXVec3Cross(&this->m_vCross, &this->m_vView, &this->m_vUpVec);

	D3DXMatrixLookAtLH(&this->m_matView, &this->m_vEyePt, &this->m_vLookatPt, &this->m_vUpVec);
	D3DXMatrixInverse(&this->m_matBillboard, NULL, &this->m_matView);
	this->m_matBillboard._41 = 0.0f;
	this->m_matBillboard._42 = 0.0f;
	this->m_matBillboard._43 = 0.0f;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DCameraSetProjParams
 \date		Created  on Sun Dec  4 18:53:46 2016
 \date		Modified on Sun Dec  4 18:53:46 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID CD3DCameraSetProjParams(CD3DCamera *this, FLOAT fFOV, FLOAT fAspect, FLOAT fNearPlane, FLOAT fFarPlane)
{
	// Set attributes for the projection matrix
	this->m_fFOV       = fFOV;
	this->m_fAspect    = fAspect;
	this->m_fNearPlane = fNearPlane;
	this->m_fFarPlane  = fFarPlane;

	D3DXMatrixPerspectiveFovLH(&this->m_matProj, fFOV, fAspect, fNearPlane, fFarPlane);
}
