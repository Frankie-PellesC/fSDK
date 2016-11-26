// D3DXUtils.c
#include <d3dx8math.h>
#include <math.h>
#include "dolphin.h"
#include "D3DXUtils.h"

#define E_INVALIDCALL  0x8876086c

D3DXVECTOR3 D3DVec3(float x, float y, float z)
{
	D3DXVECTOR3 dv;
	dv.x = x;
	dv.y = y;
	dv.z = z;
	return dv;
}

D3DXQUATERNION D3DXQuaternion(float fx, float fy, float fz, float fw)
{
	D3DXQUATERNION q;
	q.x = fx;
	q.y = fy;
	q.z = fz;
	q.w = fw;
	return q;
}

#pragma warn(push)
#pragma warn(disable: 2229)
//-----------------------------------------------------------------------------
// Name: D3DUtil_SetDeviceCursor
// Desc: Gives the D3D device a cursor with image and hotspot from hCursor.
//-----------------------------------------------------------------------------
HRESULT D3DUtil_SetDeviceCursor(LPDIRECT3DDEVICE8 pd3dDevice, HCURSOR hCursor)
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

	COLORREF *pcrArrayMask = malloc(dwWidth * dwHeightSrc);

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

	COLORREF *pcrArrayColor = malloc(dwWidth * dwHeightDest);

	if (!bBWCursor)
	{
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
	if (pcrArrayColor)
		free(pcrArrayColor);
	if (pcrArrayMask)
		free(pcrArrayMask);
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

	SAFE_RELEASE(pCursorBitmap);
	return hr;
}
#pragma warn(pop)

//-----------------------------------------------------------------------------
// Name: D3DUtil_Timer()
// Desc: Performs timer opertations. Use the following commands:
//          TIMER_RESET           - to reset the timer
//          TIMER_START           - to start the timer
//          TIMER_STOP            - to stop (or pause) the timer
//          TIMER_ADVANCE         - to advance the timer by 0.1 seconds
//          TIMER_GETABSOLUTETIME - to get the absolute system time
//          TIMER_GETAPPTIME      - to get the current time
//          TIMER_GETELAPSEDTIME  - to get the time that elapsed between
//                                  TIMER_GETELAPSEDTIME calls
//-----------------------------------------------------------------------------
float _stdcall D3DUtil_Timer(int command)
{
	static BOOL m_bTimerInitialized = FALSE;
	static BOOL m_bUsingQPF = FALSE;
	static LONGLONG m_llQPFTicksPerSec = 0;

	// Initialize the timer
	if (FALSE == m_bTimerInitialized)
	{
		m_bTimerInitialized = TRUE;

		// Use QueryPerformanceFrequency() to get frequency of timer.  If QPF is
		// not supported, we will timeGetTime() which returns milliseconds.
		LARGE_INTEGER qwTicksPerSec;
		m_bUsingQPF = QueryPerformanceFrequency(&qwTicksPerSec);
		if (m_bUsingQPF)
			m_llQPFTicksPerSec = qwTicksPerSec.QuadPart;
	}

	if (m_bUsingQPF)
	{
		static LONGLONG m_llStopTime = 0;
		static LONGLONG m_llLastElapsedTime = 0;
		static LONGLONG m_llBaseTime = 0;
		double fTime;
		double fElapsedTime;
		LARGE_INTEGER qwTime;

		// Get either the current time or the stop time, depending
		// on whether we're stopped and what command was sent
		if (m_llStopTime != 0 && command != TIMER_START && command != TIMER_GETABSOLUTETIME)
			qwTime.QuadPart = m_llStopTime;
		else
			QueryPerformanceCounter(&qwTime);

		// Return the elapsed time
		if (command == TIMER_GETELAPSEDTIME)
		{
			fElapsedTime = (double)(qwTime.QuadPart - m_llLastElapsedTime) / (double)m_llQPFTicksPerSec;
			m_llLastElapsedTime = qwTime.QuadPart;
			return (FLOAT)fElapsedTime;
		}

		// Return the current time
		if (command == TIMER_GETAPPTIME)
		{
			double fAppTime = (double)(qwTime.QuadPart - m_llBaseTime) / (double)m_llQPFTicksPerSec;
			return (FLOAT)fAppTime;
		}

		// Reset the timer
		if (command == TIMER_RESET)
		{
			m_llBaseTime = qwTime.QuadPart;
			m_llLastElapsedTime = qwTime.QuadPart;
			return 0.0f;
		}

		// Start the timer
		if (command == TIMER_START)
		{
			m_llBaseTime += qwTime.QuadPart - m_llStopTime;
			m_llStopTime = 0;
			m_llLastElapsedTime = qwTime.QuadPart;
			return 0.0f;
		}

		// Stop the timer
		if (command == TIMER_STOP)
		{
			m_llStopTime = qwTime.QuadPart;
			m_llLastElapsedTime = qwTime.QuadPart;
			return 0.0f;
		}

		// Advance the timer by 1/10th second
		if (command == TIMER_ADVANCE)
		{
			m_llStopTime += m_llQPFTicksPerSec / 10;
			return 0.0f;
		}

		if (command == TIMER_GETABSOLUTETIME)
		{
			fTime = qwTime.QuadPart / (double)m_llQPFTicksPerSec;
			return (FLOAT)fTime;
		}

		return -1.0f;	// Invalid command specified
	}
	else
	{
		// Get the time using timeGetTime()
		static double m_fLastElapsedTime = 0.0;
		static double m_fBaseTime = 0.0;
		static double m_fStopTime = 0.0;
		double fTime;
		double fElapsedTime;

		// Get either the current time or the stop time, depending
		// on whether we're stopped and what command was sent
		if (m_fStopTime != 0.0 && command != TIMER_START && command != TIMER_GETABSOLUTETIME)
			fTime = m_fStopTime;
		else
			fTime = timeGetTime() * 0.001;

		// Return the elapsed time
		if (command == TIMER_GETELAPSEDTIME)
		{
			fElapsedTime = (double)(fTime - m_fLastElapsedTime);
			m_fLastElapsedTime = fTime;
			return (FLOAT)fElapsedTime;
		}

		// Return the current time
		if (command == TIMER_GETAPPTIME)
		{
			return (FLOAT) (fTime - m_fBaseTime);
		}

		// Reset the timer
		if (command == TIMER_RESET)
		{
			m_fBaseTime = fTime;
			m_fLastElapsedTime = fTime;
			return 0.0f;
		}

		// Start the timer
		if (command == TIMER_START)
		{
			m_fBaseTime += fTime - m_fStopTime;
			m_fStopTime = 0.0f;
			m_fLastElapsedTime = fTime;
			return 0.0f;
		}

		// Stop the timer
		if (command == TIMER_STOP)
		{
			m_fStopTime = fTime;
			return 0.0f;
		}

		// Advance the timer by 1/10th second
		if (command == TIMER_ADVANCE)
		{
			m_fStopTime += 0.1f;
			return 0.0f;
		}

		if (command == TIMER_GETABSOLUTETIME)
		{
			return (FLOAT)fTime;
		}

		return -1.0f;	// Invalid command specified
	}
}

HRESULT D3DUtil_CreateTexture(LPDIRECT3DDEVICE8 pd3dDevice, char *strTexture, LPDIRECT3DTEXTURE8 *ppTexture, D3DFORMAT d3dFormat)
{
	//-----------------------------------------------------------------------------
	// Name: D3DUtil_CreateTexture()
	// Desc: Helper function to create a texture.
	//-----------------------------------------------------------------------------

	// Create the texture using D3DX
	return D3DXCreateTextureFromFileEx(pd3dDevice, strTexture, D3DX_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, 0, d3dFormat, D3DPOOL_MANAGED, D3DX_FILTER_TRIANGLE | D3DX_FILTER_MIRROR, D3DX_FILTER_TRIANGLE | D3DX_FILTER_MIRROR, 0, NULL, NULL, ppTexture);
}

HRESULT D3DUtil_CreateVertexShader(LPDIRECT3DDEVICE8 pd3dDevice, char *strFilename, DWORD *pdwVertexDecl, DWORD *pdwVertexShader)
{
	//-----------------------------------------------------------------------------
	// Name: D3DUtil_CreateVertexShader()
	// Desc: Assembles and creates a file-based vertex shader
	//-----------------------------------------------------------------------------
	LPD3DXBUFFER pCode;
	HRESULT hr;

	// Assemble the vertex shader file
	hr = D3DXAssembleShaderFromFile(strFilename, 0, NULL, &pCode, NULL);
	if (hr != S_OK)
	{
		return hr;
	}

	// Create the vertex shader
	hr = IDirect3DDevice8_CreateVertexShader(pd3dDevice, pdwVertexDecl, (DWORD *)pCode->lpVtbl->GetBufferPointer(pCode), pdwVertexShader, 0);

	SAFE_RELEASE(pCode);
	return hr;
}

char *D3DUtil_GetErrorString(long code)
{
	switch (code)
	{
		case D3D_OK:
			return "D3D_OK - No error occurred.";

		case D3DERR_CONFLICTINGRENDERSTATE:
			return "D3DERR_CONFLICTINGRENDERSTATE - The currently set render states cannot be used together.";

		case D3DERR_CONFLICTINGTEXTUREFILTER:
			return "D3DERR_CONFLICTINGTEXTUREFILTER - The current texture filters cannot be used together.";

		case D3DERR_CONFLICTINGTEXTUREPALETTE:
			return "D3DERR_CONFLICTINGTEXTUREPALETTE - The current textures cannot be used simultaneously. This generally occurs when a multitexture device requires that all palletized textures simultaneously enabled also share the same palette.";

		case D3DERR_DEVICELOST:
			return "D3DERR_DEVICELOST - The device is lost and cannot be restored at the current time, so rendering is not possible.";

		case D3DERR_DEVICENOTRESET:
			return "D3DERR_DEVICENOTRESET - The device cannot be reset.";

		case D3DERR_DRIVERINTERNALERROR:
			return "D3DERR_DRIVERINTERNALERROR - Internal driver error.";

		case D3DERR_INVALIDCALL:
			return "D3DERR_INVALIDCALL - The method call is invalid. For example, a method's parameter may have an invalid value.";

		case D3DERR_INVALIDDEVICE:
			return "D3DERR_INVALIDDEVICE - The requested device type is not valid.";

		case D3DERR_MOREDATA:
			return "D3DERR_MOREDATA - There is more data available than the specified buffer size can hold.";

		case D3DERR_NOTAVAILABLE:
			return "D3DERR_NOTAVAILABLE - This device does not support the queried technique.";

		case D3DERR_NOTFOUND:
			return "D3DERR_NOTFOUND - The requested item was not found.";

		case D3DERR_OUTOFVIDEOMEMORY:
			return "D3DERR_OUTOFVIDEOMEMORY - Direct3D does not have enough display memory to perform the operation.";

		case D3DERR_TOOMANYOPERATIONS:
			return "D3DERR_TOOMANYOPERATIONS - The application is requesting more texture-filtering operations than the device supports.";

		case D3DERR_UNSUPPORTEDALPHAARG:
			return "D3DERR_UNSUPPORTEDALPHAARG - The device does not support a specified texture-blending argument for the alpha channel.";

		case D3DERR_UNSUPPORTEDALPHAOPERATION:
			return "D3DERR_UNSUPPORTEDALPHAOPERATION - The device does not support a specified texture-blending operation for the alpha channel.";

		case D3DERR_UNSUPPORTEDCOLORARG:
			return "D3DERR_UNSUPPORTEDCOLORARG - The device does not support a specified texture-blending argument for color values.";

		case D3DERR_UNSUPPORTEDCOLOROPERATION:
			return "D3DERR_UNSUPPORTEDCOLOROPERATION - The device does not support a specified texture-blending operation for color values.";

		case D3DERR_UNSUPPORTEDFACTORVALUE:
			return "D3DERR_UNSUPPORTEDFACTORVALUE - The device does not support the specified texture factor value.";

		case D3DERR_UNSUPPORTEDTEXTUREFILTER:
			return "D3DERR_UNSUPPORTEDTEXTUREFILTER - The device does not support the specified texture filter.";

		case D3DERR_WRONGTEXTUREFORMAT:
			return "D3DERR_WRONGTEXTUREFORMAT - The pixel format of the texture surface is not valid.";

		case E_FAIL:
			return "E_FAIL - An undetermined error occurred inside the Direct3D subsystem.";

		case E_INVALIDARG:
			return "E_INVALIDARG - An invalid parameter was passed to the returning function.";

		case E_OUTOFMEMORY:
			return "E_OUTOFMEMORY - Direct3D could not allocate sufficient memory to complete the call.";

		default:
			return "Unknown Error.";

	}
}
