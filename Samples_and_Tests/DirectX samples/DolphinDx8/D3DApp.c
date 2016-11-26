// D3DApp.c kernel32.lib user32.lib gdi32.lib comctl32.lib delayimp.lib d3dx8d.lib d3d8.lib dx8math1.h winmm.lib
#ifdef MAKEFOURCC
#undef MAKEFOURCC
#endif

#define WIN32_LEAN_AND_MEAN
#include <windowsx.h>
#include <stdio.h>
#include <d3d8.h>
#include "dolphin.h"
#include "D3DMesh.h"
#include "D3DXUtils.h"
#include "D3DFont.h"
#include "dolphinres.h"

D3DAPP gD3DApp;	// Global APP vars
D3DFONT gD3DFont;	// Font

// Dolphin object
LPDIRECT3DTEXTURE8 g_pDolphinTexture;
LPDIRECT3DVERTEXBUFFER8 g_pDolphinVB1;
LPDIRECT3DVERTEXBUFFER8 g_pDolphinVB2;
LPDIRECT3DVERTEXBUFFER8 g_pDolphinVB3;
LPDIRECT3DINDEXBUFFER8 g_pDolphinIB;

DWORD g_dwNumDolphinVertices;
DWORD g_dwNumDolphinFaces;
DWORD g_dwDolphinVertexShader;
DWORD g_dwDolphinVertexShader2;

// Seafloor object
LPDIRECT3DTEXTURE8 g_pSeaFloorTexture;
LPDIRECT3DVERTEXBUFFER8 g_pSeaFloorVB;
LPDIRECT3DINDEXBUFFER8 g_pSeaFloorIB;

DWORD g_dwNumSeaFloorVertices;	// Number of Vertices for Sea Floor
DWORD g_dwNumSeaFloorFaces;
DWORD g_dwSeaFloorVertexShader;
DWORD g_dwSeaFloorVertexShader2;

// Water caustics
LPDIRECT3DTEXTURE8 g_pCausticTextures[32];
LPDIRECT3DTEXTURE8 g_pCurrentCausticTexture;

// forward declarations
HRESULT D3DApp_BuildDeviceList(void);
HRESULT D3DApp_RestoreDeviceObjects(void);
void D3DApp_Cleanup3DEnvironment(void);

void D3DApp_Pause(BOOL bPause)
{
	//-----------------------------------------------------------------------------
	// Name: Pause()
	// Desc: Called in to toggle the pause state of the app.
	//-----------------------------------------------------------------------------

	static DWORD dwAppPausedCount = 0;

	dwAppPausedCount += bPause ? +1 : -1;
	gD3DApp.bReady = dwAppPausedCount ? FALSE : TRUE;

	// Handle the first pause request (of many, nestable pause requests)
	if (bPause && (1 == dwAppPausedCount))
	{
		// Stop the scene from animating
		if (gD3DApp.bFrameMoving)
		{
			D3DUtil_Timer(TIMER_STOP);
		}
	}

	if (0 == dwAppPausedCount)
	{
		// Restart the timers
		if (gD3DApp.bFrameMoving)
		{
			D3DUtil_Timer(TIMER_START);
		}
	}
}

HRESULT D3DApp_DisplayErrorMsg(long hr, long dwType, long num)
{
	//-----------------------------------------------------------------------------
	// Name: DisplayErrorMsg()
	// Desc: Displays error messages in a message box
	// Internal error handling function
	// HRESULT DisplayErrorMsg( HRESULT hr, DWORD dwType )
	//-----------------------------------------------------------------------------

	char *strMsg;
//  int i;

	switch (hr)
	{
		case D3DAPPERR_NODIRECT3D:
			strMsg = "Could not initialize Direct3D. You may\nwant to check that the latest version of\nDirectX is correctly installed on your\nsystem.  Also make sure that this program\nwas compiled with header files that match\nthe installed DirectX DLLs.";
			break;

		case D3DAPPERR_NOCOMPATIBLEDEVICES:
			strMsg = "Could not find any compatible Direct3D\ndevices.";
			break;

		case D3DAPPERR_NOWINDOWABLEDEVICES:
			strMsg = "This sample cannot run in a desktop\nwindow with the current display settings.\nPlease change your desktop settings to a\n16 or 32 bit display mode and re-run this\nsample.";
			break;

		case D3DAPPERR_NOHARDWAREDEVICE:
			strMsg = "No hardware-accelerated Direct3D devices\nwere found.";
			break;

		case D3DAPPERR_HALNOTCOMPATIBLE:
			strMsg = "This sample requires functionality that is\nnot available on your Direct3D hardware\naccelerator.";
			break;

		case D3DAPPERR_NOWINDOWEDHAL:
			strMsg = "Your Direct3D hardware accelerator cannot\nrender into a window.\nPress F2 while the app is running to see a\nlist of available devices and modes.";
			break;

		case D3DAPPERR_NODESKTOPHAL:
			strMsg = "Your Direct3D hardware accelerator cannot\nrender into a window with the current\ndesktop display settings.\nPress F2 while the app is running to see a\nlist of available devices and modes.";
			break;

		case D3DAPPERR_NOHALTHISMODE:
			strMsg = "This sample requires functionality that is\nnot available on your Direct3D hardware\naccelerator with the current desktop display\nsettings.\nPress F2 while the app is running to see a\nlist of available devices and modes.";
			break;

		case D3DAPPERR_MEDIANOTFOUND:
			strMsg = "Could not load required media.";
			break;

		case D3DAPPERR_RESIZEFAILED:
			strMsg = "Could not reset the Direct3D device.";
			break;

		case D3DAPPERR_NONZEROREFCOUNT:
			strMsg = "A D3D object has a non-zero reference\ncount (meaning things were not properly\ncleaned up).";
			break;

		case E_OUTOFMEMORY:
			strMsg = "Not enough memory.";
			break;

		case D3DERR_OUTOFVIDEOMEMORY:
			strMsg = "Not enough video memory.";
			break;
		default:
			strMsg = "Generic application error. Enable\ndebug output for detailed information.";
			break;
	}

	char str[256];
	char str1[256];

	ShowWindow(gD3DApp.hWnd, SW_HIDE);

	if (MSGERR_APPMUSTEXIT == dwType)
	{
		sprintf(str1, "%s %d", "This sample will now exit.", num);

		MessageBox(0, strMsg, str1, MB_ICONERROR | MB_OK | MB_SYSTEMMODAL);

		// Close the window and exit
		if (gD3DApp.hWnd)
		{
			D3DApp_Cleanup3DEnvironment();
			return -1;
		}

	}
	else if (MSGWARN_SWITCHEDTOREF == dwType)
	{
		sprintf(str, "%s", "Switching to the reference rasterizer,\na software device that implements the entire\nDirect3D feature set, but runs very slowly.");
		sprintf(str1, "%s %d", gD3DApp.strWindowTitle, num);
		MessageBox(0, str, str1, MB_ICONWARNING | MB_OK | MB_SYSTEMMODAL);

	}
	else
	{
		sprintf(str1, "%s %d", "ELSE ", num);
		MessageBox(0, strMsg, str1, MB_ICONWARNING | MB_OK | MB_SYSTEMMODAL);

	}

	ShowWindow(gD3DApp.hWnd, SW_SHOW);	// MessageBox gone, show window

	return -1;

}

HRESULT D3DApp_DeleteDeviceObjects(void)
{
	//-----------------------------------------------------------------------------
	// Name: DeleteDeviceObjects()
	// Desc: Called when the app is exiting, or the device is being changed,
	//       this function deletes any device dependent objects.
	//-----------------------------------------------------------------------------

	D3DFont_DeleteDeviceObjects(&gD3DFont);

	// Clean up dolphin objects
	SAFE_RELEASE(g_pDolphinTexture);
	SAFE_RELEASE(g_pDolphinVB1);
	SAFE_RELEASE(g_pDolphinVB2);
	SAFE_RELEASE(g_pDolphinVB3);
	SAFE_RELEASE(g_pDolphinIB);

	// Clean up seafoor objects
	SAFE_RELEASE(g_pSeaFloorTexture);
	SAFE_RELEASE(g_pSeaFloorVB);
	SAFE_RELEASE(g_pSeaFloorIB);

	// Clean up textures for water caustics
	for (int i = 0; i < 32; i++)
	{
		SAFE_RELEASE(g_pCausticTextures[i]);
	}

	return S_OK;

}

HRESULT D3DApp_InvalidateDeviceObjects(void)
{
	//-----------------------------------------------------------------------------
	// Name: InvalidateDeviceObjects()
	// Desc: Called when the device-dependent objects are about to be lost.
	//-----------------------------------------------------------------------------
//  HRESULT hr;
	D3DFont_InvalidateDeviceObjects(&gD3DFont);

	// Clean up vertex shaders
	if (g_dwDolphinVertexShader)
	{
		IDirect3DDevice8_DeleteVertexShader(gD3DApp.pD3DDevice, g_dwDolphinVertexShader);
		g_dwDolphinVertexShader = 0;
	}

	if (g_dwDolphinVertexShader2)
	{
		IDirect3DDevice8_DeleteVertexShader(gD3DApp.pD3DDevice, g_dwDolphinVertexShader2);
		g_dwDolphinVertexShader2 = 0;
	}

	if (g_dwSeaFloorVertexShader)
	{
		IDirect3DDevice8_DeleteVertexShader(gD3DApp.pD3DDevice, g_dwSeaFloorVertexShader);
		g_dwSeaFloorVertexShader = 0;
	}

	if (g_dwSeaFloorVertexShader2)
	{
		IDirect3DDevice8_DeleteVertexShader(gD3DApp.pD3DDevice, g_dwSeaFloorVertexShader2);
		g_dwSeaFloorVertexShader2 = 0;
	}

	return S_OK;
}

void D3DApp_Cleanup3DEnvironment(void)
{
	//-----------------------------------------------------------------------------
	// Name: Cleanup3DEnvironment()
	// Desc: Cleanup scene objects
	//-----------------------------------------------------------------------------

	gD3DApp.bActive = FALSE;
	gD3DApp.bReady = FALSE;

	if (gD3DApp.pD3DDevice)
	{
		D3DApp_InvalidateDeviceObjects();
		D3DApp_DeleteDeviceObjects();
		SAFE_RELEASE(gD3DApp.pD3DDevice);
		SAFE_RELEASE(gD3DApp.pD3D);
	}
	D3DFont_Destroy(&gD3DFont);
}

DWORD D3DApp_Create(HWND hWnd, char *sTitle, long width, long height, BOOL bMenu)
{
	//-----------------------------------------------------------------------------
	// Name: Create()
	// Desc:
	//-----------------------------------------------------------------------------
	HRESULT hr;

	// Initial settings
	gD3DApp.dwNumAdapters = 0;
	gD3DApp.dwAdapter = 0;
	gD3DApp.pD3D = NULL;
	gD3DApp.pD3DDevice = NULL;
	gD3DApp.hWnd = hWnd;
	gD3DApp.hWndFocus = NULL;
	gD3DApp.bActive = FALSE;
	gD3DApp.bReady = FALSE;
	gD3DApp.bWindowed = TRUE;	// start in window-ed mode
	gD3DApp.dwCreateFlags = 0;

	gD3DApp.bFrameMoving = TRUE;
	gD3DApp.bSingleStep = FALSE;
	gD3DApp.fFPS = 0.0f;

	gD3DApp.strDeviceStats[0] = '\0';
	gD3DApp.strFrameStats[0] = '\0';
	strcpy(gD3DApp.strWindowTitle, sTitle);

	gD3DApp.dwCreationWidth = width;
	gD3DApp.dwCreationHeight = height;
	gD3DApp.bUseDepthBuffer = TRUE;	// No point otherwise
	gD3DApp.dwMinDepthBits = 16;
	gD3DApp.dwMinStencilBits = 0;
	gD3DApp.bShowCursorWhenFullscreen = FALSE;

	// Create the D3D object.
	gD3DApp.pD3D = Direct3DCreate8(D3D_SDK_VERSION);
	if (!gD3DApp.pD3D)
	{
		D3DApp_DisplayErrorMsg(D3DAPPERR_NODIRECT3D, MSGERR_APPMUSTEXIT, 9);
		return E_FAIL;
	}

	// Set the window's initial style
	DWORD dwWindowStyle = WS_POPUP | WS_CAPTION | WS_SYSMENU | WS_THICKFRAME | WS_MINIMIZEBOX;

	// Unless substitute hWnd has been specified, create a window to
	// render into
	if (gD3DApp.hWnd == 0)
	{
		gD3DApp.hWnd = CreateWindow("d3d8WndClass", gD3DApp.strWindowTitle, dwWindowStyle, 0, 0, 0, 0, NULL, NULL, GetModuleHandle(NULL), NULL);

		// Get the window's initial style
		gD3DApp.dwWindowStyle = GetWindowLong(gD3DApp.hWnd, GWL_STYLE);
		gD3DApp.dwExWindowStyle = GetWindowLong(gD3DApp.hWnd, GWL_EXSTYLE);

		// Set the window's initial width
		RECT rc;
		SetRect(&rc, 0, 0, gD3DApp.dwCreationWidth, gD3DApp.dwCreationHeight);
		AdjustWindowRect(&rc, gD3DApp.dwWindowStyle, bMenu);

		// Adjust window's dimensions
		SetWindowPos(gD3DApp.hWnd, HWND_TOP, 20, 20, rc.right - rc.left, rc.bottom - rc.top, 0);
	}
	else
	{
		SAFE_RELEASE(gD3DApp.pD3D);
		MessageBox(0, "Could not Open Window", "Error", MB_OK);
		return E_FAIL;
	}

	gD3DApp.hWndFocus = gD3DApp.hWnd;

	// Save window sizes
	GetWindowRect(gD3DApp.hWnd, &gD3DApp.rcWindowBounds);
	GetClientRect(gD3DApp.hWnd, &gD3DApp.rcWindowClient);

	// Build a list of Direct3D adapters, modes and devices. The
	// ConfirmDevice() callback is used to confirm that only devices that
	// meet the app's requirements are considered.

	hr = D3DApp_BuildDeviceList();
	if (hr != S_OK)
	{
		SAFE_RELEASE(gD3DApp.pD3D);
		D3DApp_DisplayErrorMsg(hr, MSGERR_APPMUSTEXIT, 11);
		return E_FAIL;
	}

	// Ready
	D3DUtil_Timer(TIMER_START);

	return S_OK;

}

HRESULT D3DApp_AdjustWindowForChange(void)
{
	//-----------------------------------------------------------------------------
	// Name: AdjustWindowForChange()
	// Desc: Prepare the window for a possible change between windowed mode and
	//       fullscreen mode.  This function is virtual and thus can be overridden
	//       to provide different behavior, such as switching to an entirely
	//       different window for fullscreen mode (as in the MFC sample apps).
	//-----------------------------------------------------------------------------

	if (gD3DApp.bWindowed && gD3DApp.bReady)
	{
		// Set windowed-mode style
		SetWindowLong(gD3DApp.hWnd, GWL_STYLE, gD3DApp.dwWindowStyle);
		SetWindowLong(gD3DApp.hWnd, GWL_EXSTYLE, gD3DApp.dwExWindowStyle);
		ShowWindow(gD3DApp.hWnd, SW_RESTORE);
	}
	else if (!gD3DApp.bWindowed && gD3DApp.bReady)
	{
		// Set fullscreen-mode style
		SetWindowLong(gD3DApp.hWnd, GWL_STYLE, WS_POPUP | WS_SYSMENU | WS_VISIBLE);
	}

	return S_OK;
}

#define D3DFVF_D3DVERTEX  (D3DFVF_XYZ | D3DFVF_NORMAL | D3DFVF_TEX1)

HRESULT D3DApp_InitDeviceObjects(D3DAPP *g)
{
	//-----------------------------------------------------------------------------
	// Name: InitDeviceObjects()
	// Desc: Initialize device-dependent objects. This is the place to create mesh
	//       and texture objects.
	//-----------------------------------------------------------------------------
	LPDIRECT3DVERTEXBUFFER8 pMeshSourceVB;
	LPDIRECT3DINDEXBUFFER8 pMeshSourceIB;
	CD3DMesh DolphinMesh01;
	CD3DMesh DolphinMesh02;
	CD3DMesh DolphinMesh03;
	CD3DMesh SeaFloorMesh;

	memset(&DolphinMesh01, 0, sizeof(CD3DMesh));
	memset(&DolphinMesh02, 0, sizeof(CD3DMesh));
	memset(&DolphinMesh03, 0, sizeof(CD3DMesh));
	memset(&SeaFloorMesh, 0, sizeof(CD3DMesh));

	D3DVERTEX *pSrc;
	D3DVERTEX *pDst;

	HRESULT hr;

	// Initialize the font's internal textures
	D3DFont_InitDeviceObjects(&gD3DFont, gD3DApp.pD3DDevice);

	// Create texture for the dolphin
	hr = D3DUtil_CreateTexture(gD3DApp.pD3DDevice, "data/Dolphin.bmp", &g_pDolphinTexture, D3DFMT_UNKNOWN);
	if (hr != S_OK)
	{
		return D3DAPPERR_MEDIANOTFOUND;
	}

	// Create textures for the seafloor
	hr = D3DUtil_CreateTexture(gD3DApp.pD3DDevice, "data/seafloor.bmp", &g_pSeaFloorTexture, D3DFMT_UNKNOWN);
	if (hr != S_OK)
	{
		return D3DAPPERR_MEDIANOTFOUND;
	}

	// Create textures for the water caustics
	int t;
	char strName[100];
	for (t = 0; t < 32; t++)
	{
		sprintf(strName, "data/Caust%02ld.tga", t);
		hr = D3DUtil_CreateTexture(gD3DApp.pD3DDevice, strName, &g_pCausticTextures[t], D3DFMT_UNKNOWN);
		if (hr != S_OK)
		{
			return D3DAPPERR_MEDIANOTFOUND;
		}
	}

	// Load the file-based mesh objects
	hr = D3DMesh_CreateFromFile(&DolphinMesh01, g, "data/dolphin1.x");
	if (hr != S_OK)
	{
		return D3DAPPERR_MEDIANOTFOUND;
	}

	hr = D3DMesh_CreateFromFile(&DolphinMesh02, g, "data/dolphin2.x");
	if (hr != S_OK)
	{
		return D3DAPPERR_MEDIANOTFOUND;
	}

	hr = D3DMesh_CreateFromFile(&DolphinMesh03, g, "data/dolphin3.x");
	if (hr != S_OK)
	{
		return D3DAPPERR_MEDIANOTFOUND;
	}

	hr = D3DMesh_CreateFromFile(&SeaFloorMesh, g, "data/seafloor.x");
	if (hr != S_OK)
	{
		return D3DAPPERR_MEDIANOTFOUND;
	}

	// Set the FVF type to match the vertex format we want
	D3DMesh_SetFVF(&DolphinMesh01, D3DFVF_D3DVERTEX);
	D3DMesh_SetFVF(&DolphinMesh02, D3DFVF_D3DVERTEX);
	D3DMesh_SetFVF(&DolphinMesh03, D3DFVF_D3DVERTEX);
	D3DMesh_SetFVF(&SeaFloorMesh, D3DFVF_D3DVERTEX);

	// Get the number of vertices and faces for the meshes
	g_dwNumDolphinVertices = DolphinMesh01.pSysMemMesh->lpVtbl->GetNumVertices(DolphinMesh01.pSysMemMesh);
	g_dwNumDolphinFaces = DolphinMesh01.pSysMemMesh->lpVtbl->GetNumFaces(DolphinMesh01.pSysMemMesh);
	g_dwNumSeaFloorVertices = SeaFloorMesh.pSysMemMesh->lpVtbl->GetNumVertices(SeaFloorMesh.pSysMemMesh);
	g_dwNumSeaFloorFaces = SeaFloorMesh.pSysMemMesh->lpVtbl->GetNumFaces(SeaFloorMesh.pSysMemMesh);

	// Create the dolphin and seafloor vertex and index buffers
	IDirect3DDevice8_CreateVertexBuffer(gD3DApp.pD3DDevice, g_dwNumDolphinVertices * sizeof(D3DVERTEX), D3DUSAGE_WRITEONLY, 0, D3DPOOL_MANAGED, &g_pDolphinVB1);

	IDirect3DDevice8_CreateVertexBuffer(gD3DApp.pD3DDevice, g_dwNumDolphinVertices * sizeof(D3DVERTEX), D3DUSAGE_WRITEONLY, 0, D3DPOOL_MANAGED, &g_pDolphinVB2);

	IDirect3DDevice8_CreateVertexBuffer(gD3DApp.pD3DDevice, g_dwNumDolphinVertices * sizeof(D3DVERTEX), D3DUSAGE_WRITEONLY, 0, D3DPOOL_MANAGED, &g_pDolphinVB3);

	IDirect3DDevice8_CreateVertexBuffer(gD3DApp.pD3DDevice, g_dwNumSeaFloorVertices * sizeof(D3DVERTEX), D3DUSAGE_WRITEONLY, 0, D3DPOOL_MANAGED, &g_pSeaFloorVB);

	IDirect3DDevice8_CreateIndexBuffer(gD3DApp.pD3DDevice, g_dwNumDolphinFaces * 3 * sizeof(short), D3DUSAGE_WRITEONLY, D3DFMT_INDEX16, D3DPOOL_MANAGED, &g_pDolphinIB);

	IDirect3DDevice8_CreateIndexBuffer(gD3DApp.pD3DDevice, g_dwNumSeaFloorFaces * 3 * sizeof(short), D3DUSAGE_WRITEONLY, D3DFMT_INDEX16, D3DPOOL_MANAGED, &g_pSeaFloorIB);

	// Copy vertices for mesh 01
	DolphinMesh01.pSysMemMesh->lpVtbl->GetVertexBuffer(DolphinMesh01.pSysMemMesh, &pMeshSourceVB);
	g_pDolphinVB1->lpVtbl->Lock(g_pDolphinVB1, 0, 0, (BYTE **) & pDst, 0);
	pMeshSourceVB->lpVtbl->Lock(pMeshSourceVB, 0, 0, (BYTE **) & pSrc, 0);
	memcpy(pDst, pSrc, g_dwNumDolphinVertices * sizeof(D3DVERTEX));
	g_pDolphinVB1->lpVtbl->Unlock(g_pDolphinVB1);
	pMeshSourceVB->lpVtbl->Unlock(pMeshSourceVB);
	SAFE_RELEASE(pMeshSourceVB);

	// Copy vertices for mesh 2
	DolphinMesh02.pSysMemMesh->lpVtbl->GetVertexBuffer(DolphinMesh02.pSysMemMesh, &pMeshSourceVB);
	g_pDolphinVB2->lpVtbl->Lock(g_pDolphinVB2, 0, 0, (BYTE **) & pDst, 0);
	pMeshSourceVB->lpVtbl->Lock(pMeshSourceVB, 0, 0, (BYTE **) & pSrc, 0);
	memcpy(pDst, pSrc, g_dwNumDolphinVertices * sizeof(D3DVERTEX));
	g_pDolphinVB2->lpVtbl->Unlock(g_pDolphinVB2);
	pMeshSourceVB->lpVtbl->Unlock(pMeshSourceVB);
	SAFE_RELEASE(pMeshSourceVB);

	// Copy vertices for mesh 3
	DolphinMesh03.pSysMemMesh->lpVtbl->GetVertexBuffer(DolphinMesh03.pSysMemMesh, &pMeshSourceVB);
	g_pDolphinVB3->lpVtbl->Lock(g_pDolphinVB3, 0, 0, (BYTE **) & pDst, 0);
	pMeshSourceVB->lpVtbl->Lock(pMeshSourceVB, 0, 0, (BYTE **) & pSrc, 0);
	memcpy(pDst, pSrc, g_dwNumDolphinVertices * sizeof(D3DVERTEX));
	g_pDolphinVB3->lpVtbl->Unlock(g_pDolphinVB3);
	pMeshSourceVB->lpVtbl->Unlock(pMeshSourceVB);
	SAFE_RELEASE(pMeshSourceVB);

	// Copy vertices for the seafloor mesh, and add some bumpiness
	SeaFloorMesh.pSysMemMesh->lpVtbl->GetVertexBuffer(SeaFloorMesh.pSysMemMesh, &pMeshSourceVB);
	g_pSeaFloorVB->lpVtbl->Lock(g_pSeaFloorVB, 0, 0, (BYTE **) & pDst, 0);
	pMeshSourceVB->lpVtbl->Lock(pMeshSourceVB, 0, 0, (BYTE **) & pSrc, 0);
	memcpy(pDst, pSrc, g_dwNumSeaFloorVertices * sizeof(D3DVERTEX));

	unsigned long int i;
	D3DVERTEX *ppDst[g_dwNumSeaFloorVertices];

	for (i = 0; i < g_dwNumSeaFloorVertices; i++)
	{
		((D3DVERTEX *)pDst)[i].p.y += (rand() / (FLOAT)RAND_MAX);
		((D3DVERTEX *)pDst)[i].p.y += (rand() / (FLOAT)RAND_MAX);
		((D3DVERTEX *)pDst)[i].p.y += (rand() / (FLOAT)RAND_MAX);
		((D3DVERTEX *)pDst)[i].tu *= 10;
		((D3DVERTEX *)pDst)[i].tv *= 10;
	}

	g_pSeaFloorVB->lpVtbl->Unlock(g_pSeaFloorVB);
	pMeshSourceVB->lpVtbl->Unlock(pMeshSourceVB);
	SAFE_RELEASE(pMeshSourceVB);

	// Copy indices for the dolphin mesh
	DolphinMesh01.pSysMemMesh->lpVtbl->GetIndexBuffer(DolphinMesh01.pSysMemMesh, &pMeshSourceIB);
	g_pDolphinIB->lpVtbl->Lock(g_pDolphinIB, 0, 0, (BYTE **) & pDst, 0);
	pMeshSourceIB->lpVtbl->Lock(pMeshSourceIB, 0, 0, (BYTE **) & pSrc, 0);
	memcpy(pDst, pSrc, 3 * g_dwNumDolphinFaces * sizeof(short));
	g_pDolphinIB->lpVtbl->Unlock(g_pDolphinIB);
	pMeshSourceIB->lpVtbl->Unlock(pMeshSourceIB);
	SAFE_RELEASE(pMeshSourceVB);

	// Copy indices for the seafloor mesh
	SeaFloorMesh.pSysMemMesh->lpVtbl->GetIndexBuffer(SeaFloorMesh.pSysMemMesh, &pMeshSourceIB);
	g_pSeaFloorIB->lpVtbl->Lock(g_pSeaFloorIB, 0, 0, (BYTE **) & pDst, 0);
	pMeshSourceIB->lpVtbl->Lock(pMeshSourceIB, 0, 0, (BYTE **) & pSrc, 0);
	memcpy(pDst, pSrc, 3 * g_dwNumSeaFloorFaces * sizeof(short));
	g_pSeaFloorIB->lpVtbl->Unlock(g_pSeaFloorIB);
	pMeshSourceIB->lpVtbl->Unlock(pMeshSourceIB);
	SAFE_RELEASE(pMeshSourceVB);

	// These are no longer required
	D3DMesh_Destroy(&SeaFloorMesh);
	D3DMesh_Destroy(&DolphinMesh03);
	D3DMesh_Destroy(&DolphinMesh02);
	D3DMesh_Destroy(&DolphinMesh01);

	return S_OK;
}

HRESULT D3DApp_Initialize3DEnvironment(void)
{
	//-----------------------------------------------------------------------------
	// Name: D3DApp_Initialize3DEnvironment()
	// Desc:
	//-----------------------------------------------------------------------------
	HRESULT hr;

	D3DAdapterInfo *pAdapterInfo = &gD3DApp.Adapters[gD3DApp.dwAdapter];
	D3DDeviceInfo *pDeviceInfo = &pAdapterInfo->devices[pAdapterInfo->dwCurrentDevice];
	D3DModeInfo *pModeInfo = &pDeviceInfo->modes[pDeviceInfo->dwCurrentMode];

	// Prepare window for possible windowed/fullscreen change
	D3DApp_AdjustWindowForChange();

	// Set up the presentation parameters
	memset(&gD3DApp.d3dpp, 0, sizeof(D3DPRESENT_PARAMETERS));
	gD3DApp.d3dpp.Windowed = pDeviceInfo->bWindowed;
	gD3DApp.d3dpp.BackBufferCount = 1;
	gD3DApp.d3dpp.MultiSampleType = pDeviceInfo->MultiSampleType;
	gD3DApp.d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
	gD3DApp.d3dpp.EnableAutoDepthStencil = gD3DApp.bUseDepthBuffer;
	gD3DApp.d3dpp.AutoDepthStencilFormat = pModeInfo->DepthStencilFormat;
	gD3DApp.d3dpp.hDeviceWindow = gD3DApp.hWnd;
	if (gD3DApp.bWindowed)
	{
		gD3DApp.d3dpp.BackBufferWidth = gD3DApp.rcWindowClient.right - gD3DApp.rcWindowClient.left;
		gD3DApp.d3dpp.BackBufferHeight = gD3DApp.rcWindowClient.bottom - gD3DApp.rcWindowClient.top;
		gD3DApp.d3dpp.BackBufferFormat = pAdapterInfo->d3ddmDesktop.Format;
	}
	else
	{
		gD3DApp.d3dpp.BackBufferWidth = pModeInfo->Width;
		gD3DApp.d3dpp.BackBufferHeight = pModeInfo->Height;
		gD3DApp.d3dpp.BackBufferFormat = pModeInfo->Format;
	}

	// Create the device
	hr = IDirect3D8_CreateDevice(gD3DApp.pD3D, gD3DApp.dwAdapter, pDeviceInfo->DeviceType, gD3DApp.hWndFocus, pModeInfo->dwBehavior | D3DCREATE_FPU_PRESERVE, &gD3DApp.d3dpp, &gD3DApp.pD3DDevice);
	if (SUCCEEDED(hr))
	{
		// When moving from fullscreen to windowed mode, it is important to
		// adjust the window size after recreating the device rather than
		// beforehand to ensure that you get the window size you want.  For
		// example, when switching from 640x480 fullscreen to windowed with
		// a 1000x600 window on a 1024x768 desktop, it is impossible to set
		// the window size to 1000x600 until after the display mode has
		// changed to 1024x768, because windows cannot be larger than the
		// desktop.
		if (gD3DApp.bWindowed)
		{
			SetWindowPos(gD3DApp.hWnd, HWND_NOTOPMOST, gD3DApp.rcWindowBounds.left, gD3DApp.rcWindowBounds.top, (gD3DApp.rcWindowBounds.right - gD3DApp.rcWindowBounds.left), (gD3DApp.rcWindowBounds.bottom - gD3DApp.rcWindowBounds.top), SWP_SHOWWINDOW);
		}

		// Store device Caps
		gD3DApp.pD3DDevice->lpVtbl->GetDeviceCaps(gD3DApp.pD3DDevice, &gD3DApp.d3dCaps);
		gD3DApp.dwCreateFlags = pModeInfo->dwBehavior;

		// Store device description
		if (pDeviceInfo->DeviceType == D3DDEVTYPE_REF)
			strcpy(gD3DApp.strDeviceStats, "REF");
		else if (pDeviceInfo->DeviceType == D3DDEVTYPE_HAL)
			strcpy(gD3DApp.strDeviceStats, "HAL");
		else if (pDeviceInfo->DeviceType == D3DDEVTYPE_SW)
			strcpy(gD3DApp.strDeviceStats, "SW");

		if (pModeInfo->dwBehavior & D3DCREATE_HARDWARE_VERTEXPROCESSING && pModeInfo->dwBehavior & D3DCREATE_PUREDEVICE)
		{
			if (pDeviceInfo->DeviceType == D3DDEVTYPE_HAL)
				strcat(gD3DApp.strDeviceStats, " (pure hw vp)");
			else
				strcat(gD3DApp.strDeviceStats, " (simulated pure hw vp)");
		}
		else if (pModeInfo->dwBehavior & D3DCREATE_HARDWARE_VERTEXPROCESSING)
		{
			if (pDeviceInfo->DeviceType == D3DDEVTYPE_HAL)
				strcat(gD3DApp.strDeviceStats, " (hw vp)");
			else
				strcat(gD3DApp.strDeviceStats, " (simulated hw vp)");
		}
		else if (pModeInfo->dwBehavior & D3DCREATE_MIXED_VERTEXPROCESSING)
		{
			if (pDeviceInfo->DeviceType == D3DDEVTYPE_HAL)
				strcat(gD3DApp.strDeviceStats, " (mixed vp)");
			else
				strcat(gD3DApp.strDeviceStats, " (simulated mixed vp)");
		}
		else if (pModeInfo->dwBehavior & D3DCREATE_SOFTWARE_VERTEXPROCESSING)
		{
			strcat(gD3DApp.strDeviceStats, " (sw vp)");
		}

		if (pDeviceInfo->DeviceType == D3DDEVTYPE_HAL)
		{
			strcat(gD3DApp.strDeviceStats, ": ");
			strcat(gD3DApp.strDeviceStats, pAdapterInfo->d3dAdapterIdentifier.Description);
		}

		// Store render target surface desc
		LPDIRECT3DSURFACE8 pBackBuffer;
		IDirect3DDevice8_GetBackBuffer(gD3DApp.pD3DDevice, 0, D3DBACKBUFFER_TYPE_MONO, &pBackBuffer);
		IDirect3DSurface8_GetDesc(pBackBuffer, &gD3DApp.d3dsdBackBuffer);
		SAFE_RELEASE(pBackBuffer);

		// Set up the fullscreen cursor
		if (gD3DApp.bShowCursorWhenFullscreen && !gD3DApp.bWindowed)
		{
			HCURSOR hCursor;
#ifdef _WIN64
			hCursor = (HCURSOR)GetClassLongPtr(gD3DApp.hWnd, GCLP_HCURSOR);
#else
			hCursor = (HCURSOR)GetClassLong(gD3DApp.hWnd, GCL_HCURSOR);
#endif
			D3DUtil_SetDeviceCursor(gD3DApp.pD3DDevice, hCursor);
			gD3DApp.pD3DDevice->lpVtbl->ShowCursor(gD3DApp.pD3DDevice, TRUE);
		}

		// Initialize the app's device-dependent objects
		hr = D3DApp_InitDeviceObjects(&gD3DApp);
		if (SUCCEEDED(hr))
		{
			hr = D3DApp_RestoreDeviceObjects();
			if (SUCCEEDED(hr))
			{
				gD3DApp.bActive = TRUE;
				return S_OK;
			}
		}
		else
		{
			D3DApp_DisplayErrorMsg(hr, MSGERR_APPMUSTEXIT, 34);
			return E_FAIL;
		}

		// Cleanup before we try again
		D3DApp_InvalidateDeviceObjects();
		D3DApp_DeleteDeviceObjects();
		SAFE_RELEASE(gD3DApp.pD3DDevice);
	}

	// If that failed, fall back to the reference rasterizer
	if (pDeviceInfo->DeviceType == D3DDEVTYPE_HAL)
	{
		// Let the user know we are switching from HAL to the reference rasterizer
		D3DApp_DisplayErrorMsg(hr, MSGWARN_SWITCHEDTOREF, 14);

		// Select the default adapter
		gD3DApp.dwAdapter = 0L;
		pAdapterInfo = &gD3DApp.Adapters[gD3DApp.dwAdapter];

		// Look for a software device
		for (UINT i = 0L; i < pAdapterInfo->dwNumDevices; i++)
		{
			if (pAdapterInfo->devices[i].DeviceType == D3DDEVTYPE_REF)
			{
				pAdapterInfo->dwCurrentDevice = i;
				pDeviceInfo = &pAdapterInfo->devices[i];
				gD3DApp.bWindowed = pDeviceInfo->bWindowed;
				break;
			}
		}

		// Try again, this time with the reference rasterizer
		if (pAdapterInfo->devices[pAdapterInfo->dwCurrentDevice].DeviceType == D3DDEVTYPE_REF)
		{
			hr = D3DApp_Initialize3DEnvironment();
		}
	}

	return hr;
}

// Transform matrices
D3DMATRIX g_matWorld, g_matView, g_matProj;

HRESULT D3DApp_RestoreDeviceObjects(void)
{
	//-----------------------------------------------------------------------------
	// Name: D3DApp_RestoreDeviceObjects()
	// Desc: Restore device-memory objects and state after a device is created or
	//       resized.
	//-----------------------------------------------------------------------------
	HRESULT hr;

	D3DFont_RestoreDeviceObjects(&gD3DFont);

	// Set the transform matrices
	D3DXVECTOR3 vEyePt = D3DVec3(0.0, 0.0, -5.0);
	D3DXVECTOR3 vLookatPt = D3DVec3(0.0, 0.0, 0.0);
	D3DXVECTOR3 vUpVec = D3DVec3(0.0, 1.0, 0.0);
	float fAspect = (float)gD3DApp.d3dsdBackBuffer.Width / (float)gD3DApp.d3dsdBackBuffer.Height;

	D3DXMatrixIdentity(&g_matWorld);
	D3DXMatrixLookAtLH(&g_matView, &vEyePt, &vLookatPt, &vUpVec);
	D3DXMatrixPerspectiveFovLH(&g_matProj, D3DX_PI / 3, fAspect, 1.0, 10000.0f);

	// Set default render states
	IDirect3DDevice8_SetTextureStageState(gD3DApp.pD3DDevice, 0, D3DTSS_MINFILTER, D3DTEXF_LINEAR);
	IDirect3DDevice8_SetTextureStageState(gD3DApp.pD3DDevice, 0, D3DTSS_MAGFILTER, D3DTEXF_LINEAR);
	IDirect3DDevice8_SetRenderState(gD3DApp.pD3DDevice, D3DRS_ZENABLE, D3DZB_TRUE);
	IDirect3DDevice8_SetRenderState(gD3DApp.pD3DDevice, D3DRS_FOGENABLE, TRUE);
	IDirect3DDevice8_SetRenderState(gD3DApp.pD3DDevice, D3DRS_FOGCOLOR, WATER_COLOR);

	// Create vertex shader for the dolphin
	DWORD dwDolphinVertexDecl[13];
	dwDolphinVertexDecl[0] = D3DVSD_STREAM(0);
	dwDolphinVertexDecl[1] = D3DVSD_REG(0, D3DVSDT_FLOAT3);	// Position of first mesh
	dwDolphinVertexDecl[2] = D3DVSD_REG(3, D3DVSDT_FLOAT3);	// Normal
	dwDolphinVertexDecl[3] = D3DVSD_REG(6, D3DVSDT_FLOAT2);	// Tex coords
	dwDolphinVertexDecl[4] = D3DVSD_STREAM(1);
	dwDolphinVertexDecl[5] = D3DVSD_REG(1, D3DVSDT_FLOAT3);	// Position of second mesh
	dwDolphinVertexDecl[6] = D3DVSD_REG(4, D3DVSDT_FLOAT3);	// Normal
	dwDolphinVertexDecl[7] = D3DVSD_REG(7, D3DVSDT_FLOAT2);	// Tex coords
	dwDolphinVertexDecl[8] = D3DVSD_STREAM(2);
	dwDolphinVertexDecl[9] = D3DVSD_REG(2, D3DVSDT_FLOAT3);	// Position of second mesh
	dwDolphinVertexDecl[10] = D3DVSD_REG(5, D3DVSDT_FLOAT3);	// Normal
	dwDolphinVertexDecl[11] = D3DVSD_REG(8, D3DVSDT_FLOAT2);	// Tex coords
	dwDolphinVertexDecl[12] = D3DVSD_END();

	hr = D3DUtil_CreateVertexShader(gD3DApp.pD3DDevice, "data/DolphinTween.vsh", &dwDolphinVertexDecl[0], &g_dwDolphinVertexShader);

	if (hr != S_OK)
	{
		return hr;
	}

	hr = D3DUtil_CreateVertexShader(gD3DApp.pD3DDevice, "data/DolphinTween2.vsh", &dwDolphinVertexDecl[0], &g_dwDolphinVertexShader2);
	if (hr != S_OK)
	{
		return hr;
	}

	// Create vertex shader for the seafloor
	DWORD dwSeaFloorVertexDecl[5];
	// Create vertex shader for the seafloor
	dwSeaFloorVertexDecl[0] = D3DVSD_STREAM(0);
	dwSeaFloorVertexDecl[1] = D3DVSD_REG(0, D3DVSDT_FLOAT3);	// Position of first mesh
	dwSeaFloorVertexDecl[2] = D3DVSD_REG(3, D3DVSDT_FLOAT3);	// Normal
	dwSeaFloorVertexDecl[3] = D3DVSD_REG(6, D3DVSDT_FLOAT2);	// Tex coords
	dwSeaFloorVertexDecl[4] = D3DVSD_END();

	hr = D3DUtil_CreateVertexShader(gD3DApp.pD3DDevice, "data/SeaFloor.vsh", &dwSeaFloorVertexDecl[0], &g_dwSeaFloorVertexShader);
	if (hr != S_OK)
	{
		return hr;
	}

	hr = D3DUtil_CreateVertexShader(gD3DApp.pD3DDevice, "data/SeaFloor.vsh", &dwSeaFloorVertexDecl[0], &g_dwSeaFloorVertexShader2);
	if (hr != S_OK)
	{
		return hr;
	}

	return S_OK;

}

HRESULT D3DApp_Resize3DEnvironment(void)
{
	//-----------------------------------------------------------------------------
	// Name:
	// Desc:
	//-----------------------------------------------------------------------------
	HRESULT hr;

	// Release all vidmem objects
	hr = D3DApp_InvalidateDeviceObjects();
	if (hr != S_OK)
	{
		return hr;
	}

	// Reset the device
	hr = IDirect3DDevice8_Reset(gD3DApp.pD3DDevice, &gD3DApp.d3dpp);
	if (hr != S_OK)
	{
		return hr;
	}

	// Store render target surface desc
	LPDIRECT3DSURFACE8 pBackBuffer;
	IDirect3DDevice8_GetBackBuffer(gD3DApp.pD3DDevice, 0, D3DBACKBUFFER_TYPE_MONO, &pBackBuffer);
	IDirect3DSurface8_GetDesc(pBackBuffer, &gD3DApp.d3dsdBackBuffer);
	SAFE_RELEASE(pBackBuffer);

	// Initialize the app's device-dependent objects
	hr = D3DApp_RestoreDeviceObjects();
	if (hr != S_OK)
	{
		return hr;
	}

	// If the app is paused, trigger the rendering of the current frame
	if (FALSE == gD3DApp.bFrameMoving)
	{
		gD3DApp.bSingleStep = TRUE;
		D3DUtil_Timer(TIMER_START);
		D3DUtil_Timer(TIMER_STOP);
	}

	return S_OK;

}

HRESULT D3DApp_Render(void)
{
	// Clear the viewport
	IDirect3DDevice8_Clear(gD3DApp.pD3DDevice, 0L, NULL, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, WATER_COLOR, 1.0f, 0L);

	// Begin the scene
	if (SUCCEEDED(IDirect3DDevice8_BeginScene(gD3DApp.pD3DDevice)))
	{
		FLOAT fAmbientLight[] = { 0.25f, 0.25f, 0.25f, 0.25f };
		IDirect3DDevice8_SetVertexShaderConstant(gD3DApp.pD3DDevice, 22, &fAmbientLight, 1);

		// Render the seafloor
		IDirect3DDevice8_SetTexture(gD3DApp.pD3DDevice, 0, (PDIRECT3DBASETEXTURE8)g_pSeaFloorTexture);
		IDirect3DDevice8_SetVertexShader(gD3DApp.pD3DDevice, g_dwSeaFloorVertexShader);
		IDirect3DDevice8_SetStreamSource(gD3DApp.pD3DDevice, 0, g_pSeaFloorVB, sizeof(D3DVERTEX));
		IDirect3DDevice8_SetIndices(gD3DApp.pD3DDevice, g_pSeaFloorIB, 0);
		IDirect3DDevice8_DrawIndexedPrimitive(gD3DApp.pD3DDevice, D3DPT_TRIANGLELIST, 0, g_dwNumSeaFloorVertices, 0, g_dwNumSeaFloorFaces);

		// Render the dolphin
		IDirect3DDevice8_SetTexture(gD3DApp.pD3DDevice, 0, (PDIRECT3DBASETEXTURE8)g_pDolphinTexture);
		IDirect3DDevice8_SetVertexShader(gD3DApp.pD3DDevice, g_dwDolphinVertexShader);
		IDirect3DDevice8_SetStreamSource(gD3DApp.pD3DDevice, 0, g_pDolphinVB1, sizeof(D3DVERTEX));
		IDirect3DDevice8_SetStreamSource(gD3DApp.pD3DDevice, 1, g_pDolphinVB2, sizeof(D3DVERTEX));
		IDirect3DDevice8_SetStreamSource(gD3DApp.pD3DDevice, 2, g_pDolphinVB3, sizeof(D3DVERTEX));
		IDirect3DDevice8_SetIndices(gD3DApp.pD3DDevice, g_pDolphinIB, 0);
		IDirect3DDevice8_DrawIndexedPrimitive(gD3DApp.pD3DDevice, D3DPT_TRIANGLELIST, 0, g_dwNumDolphinVertices, 0, g_dwNumDolphinFaces);

		// Now, we are going to do a 2nd pass, to alpha-blend in the caustics.
		// The caustics use a 2nd set of texture coords that are generated
		// by the vertex shaders. Lighting from the light above is used, by
		// ambient is turned off to avoid lighting objects from below (for
		// instance, we don't want caustics appearing on the dolphin's
		// underbelly). Finally, fog color is set to black, so that caustics
		// fade in distance.

		// Turn on alpha blending
		IDirect3DDevice8_SetRenderState(gD3DApp.pD3DDevice, D3DRS_ALPHABLENDENABLE, TRUE);
		IDirect3DDevice8_SetRenderState(gD3DApp.pD3DDevice, D3DRS_SRCBLEND, D3DBLEND_SRCCOLOR);
		IDirect3DDevice8_SetRenderState(gD3DApp.pD3DDevice, D3DRS_DESTBLEND, D3DBLEND_ONE);

		// Setup the caustic texture
		IDirect3DDevice8_SetTexture(gD3DApp.pD3DDevice, 0, (PDIRECT3DBASETEXTURE8)g_pCurrentCausticTexture);

		// Set ambient and fog colors to black
		FLOAT fAmbientDark[] = { 0.0f, 0.0f, 0.0f, 0.0f };
		IDirect3DDevice8_SetVertexShaderConstant(gD3DApp.pD3DDevice, 22, &fAmbientDark, 1);
		IDirect3DDevice8_SetRenderState(gD3DApp.pD3DDevice, D3DRS_FOGCOLOR, 0x00000000);

		// Render the caustic effects for the seafloor
		IDirect3DDevice8_SetVertexShader(gD3DApp.pD3DDevice, g_dwSeaFloorVertexShader2);
		IDirect3DDevice8_SetStreamSource(gD3DApp.pD3DDevice, 0, g_pSeaFloorVB, sizeof(D3DVERTEX));
		IDirect3DDevice8_SetIndices(gD3DApp.pD3DDevice, g_pSeaFloorIB, 0);
		IDirect3DDevice8_DrawIndexedPrimitive(gD3DApp.pD3DDevice, D3DPT_TRIANGLELIST, 0, g_dwNumSeaFloorVertices, 0, g_dwNumSeaFloorFaces);

		// Finally, render the caustic effects for the dolphin
		IDirect3DDevice8_SetVertexShader(gD3DApp.pD3DDevice, g_dwDolphinVertexShader2);
		IDirect3DDevice8_SetStreamSource(gD3DApp.pD3DDevice, 0, g_pDolphinVB1, sizeof(D3DVERTEX));
		IDirect3DDevice8_SetStreamSource(gD3DApp.pD3DDevice, 1, g_pDolphinVB2, sizeof(D3DVERTEX));
		IDirect3DDevice8_SetStreamSource(gD3DApp.pD3DDevice, 2, g_pDolphinVB3, sizeof(D3DVERTEX));
		IDirect3DDevice8_SetIndices(gD3DApp.pD3DDevice, g_pDolphinIB, 0);
		IDirect3DDevice8_DrawIndexedPrimitive(gD3DApp.pD3DDevice, D3DPT_TRIANGLELIST, 0, g_dwNumDolphinVertices, 0, g_dwNumDolphinFaces);

		// Restore modified render states
		IDirect3DDevice8_SetRenderState(gD3DApp.pD3DDevice, D3DRS_ALPHABLENDENABLE, FALSE);
		IDirect3DDevice8_SetRenderState(gD3DApp.pD3DDevice, D3DRS_FOGCOLOR, WATER_COLOR);

		// Output statistics
		D3DFont_DrawText(&gD3DFont, 2.0f, 0.0f, D3DCOLOR_ARGB(255, 255, 255, 0), gD3DApp.strFrameStats, 0);
		D3DFont_DrawText(&gD3DFont, 2.0f, 20.0f, D3DCOLOR_ARGB(255, 255, 255, 0), gD3DApp.strDeviceStats, 0);

		// End the scene.
		IDirect3DDevice8_EndScene(gD3DApp.pD3DDevice);
	}

	return S_OK;
}

HRESULT D3DApp_FrameMove(void)
{
	// Animation attributes for the dolphin
	float fKickFreq = 2 * gD3DApp.fTime;
	float fPhase = gD3DApp.fTime / 3;
	float fBlendWeight = sinf(fKickFreq);

	// Move the dolphin in a circle
	D3DXMATRIX matDolphin, matTrans, matRotate1, matRotate2;
	D3DXMatrixScaling(&matDolphin, 0.01f, 0.01f, 0.01f);
	D3DXMatrixRotationZ(&matRotate1, -cosf(fKickFreq) / 6);
	D3DXMatrixMultiply(&matDolphin, &matDolphin, &matRotate1);
	D3DXMatrixRotationY(&matRotate2, fPhase);
	D3DXMatrixMultiply(&matDolphin, &matDolphin, &matRotate2);
	D3DXMatrixTranslation(&matTrans, -5 * sinf(fPhase), sinf(fKickFreq) / 2, 10 - 10 * cosf(fPhase));
	D3DXMatrixMultiply(&matDolphin, &matDolphin, &matTrans);

	// Animate the caustic textures
	DWORD tex = ((DWORD) (gD3DApp.fTime * 32)) % 32;
	g_pCurrentCausticTexture = g_pCausticTextures[tex];

	// Set the vertex shader constants. Note: outside of the blend matrices,
	// most of these values don't change, so don't need to really be set every
	// frame. It's just done here for clarity
	{
		// Some basic constants
		D3DXVECTOR4 vZero = { 0.0f, 0.0f, 0.0f, 0.0f };
		D3DXVECTOR4 vOne = { 1.0f, 0.5f, 0.2f, 0.05f };

		float fWeight1;
		float fWeight2;
		float fWeight3;

		if (fBlendWeight > 0.0f)
		{
			fWeight1 = fabsf(fBlendWeight);
			fWeight2 = 1.0f - fabsf(fBlendWeight);
			fWeight3 = 0.0f;
		}
		else
		{
			fWeight1 = 0.0f;
			fWeight2 = 1.0f - fabsf(fBlendWeight);
			fWeight3 = fabsf(fBlendWeight);
		}
		D3DXVECTOR4 vWeight;
		vWeight.x = fWeight1;
		vWeight.y = fWeight2;
		vWeight.z = fWeight3;
		vWeight.w = 0.0f;

		// Lighting vector (normalized) and material colors. (Use red light
		// to show difference from non-vertex shader case.)
		float fLight[] = { 0.0f, 1.0f, 0.0f, 0.0f };
		float fDiffuse[] = { 1.00f, 1.00f, 1.00f, 1.00f };
		float fAmbient[] = { 0.25f, 0.25f, 0.25f, 0.25f };
		float fFog[] = { 0.5f, 50.0f, 1.0f / (50.0f - 1.0f), 0.0f };
		float fCaustics[4];
		fCaustics[0] = 0.05f;
		fCaustics[1] = 0.05f;
		fCaustics[2] = sinf(gD3DApp.fTime) / 8;
		fCaustics[3] = cosf(gD3DApp.fTime) / 10;

		// Vertex shader operations use transposed matrices
		D3DXMATRIX mat, matCamera, matTranspose, matCameraTranspose;
		D3DXMATRIX matViewTranspose, matProjTranspose;
		D3DXMatrixMultiply(&matCamera, &matDolphin, &g_matView);
		D3DXMatrixMultiply(&mat, &matCamera, &g_matProj);
		D3DXMatrixTranspose(&matTranspose, &mat);
		D3DXMatrixTranspose(&matCameraTranspose, &matCamera);
		D3DXMatrixTranspose(&matViewTranspose, &g_matView);
		D3DXMatrixTranspose(&matProjTranspose, &g_matProj);

		// Set the vertex shader constants
		IDirect3DDevice8_SetVertexShaderConstant(gD3DApp.pD3DDevice, 0, &vZero, 1);
		IDirect3DDevice8_SetVertexShaderConstant(gD3DApp.pD3DDevice, 1, &vOne, 1);
		IDirect3DDevice8_SetVertexShaderConstant(gD3DApp.pD3DDevice, 2, &vWeight, 1);
		IDirect3DDevice8_SetVertexShaderConstant(gD3DApp.pD3DDevice, 4, &matTranspose, 4);
		IDirect3DDevice8_SetVertexShaderConstant(gD3DApp.pD3DDevice, 8, &matCameraTranspose, 4);
		IDirect3DDevice8_SetVertexShaderConstant(gD3DApp.pD3DDevice, 12, &matViewTranspose, 4);
		IDirect3DDevice8_SetVertexShaderConstant(gD3DApp.pD3DDevice, 20, &fLight, 1);
		IDirect3DDevice8_SetVertexShaderConstant(gD3DApp.pD3DDevice, 21, &fDiffuse, 1);
		IDirect3DDevice8_SetVertexShaderConstant(gD3DApp.pD3DDevice, 22, &fAmbient, 1);
		IDirect3DDevice8_SetVertexShaderConstant(gD3DApp.pD3DDevice, 23, &fFog, 1);
		IDirect3DDevice8_SetVertexShaderConstant(gD3DApp.pD3DDevice, 24, &fCaustics, 1);
		IDirect3DDevice8_SetVertexShaderConstant(gD3DApp.pD3DDevice, 28, &matProjTranspose, 4);
	}

	return S_OK;
}

HRESULT D3DApp_Render3DEnvironment(void)
{
	//-----------------------------------------------------------------------------
	// Name: Render3DEnvironment()
	// Desc: Draws the scene.
	//-----------------------------------------------------------------------------
	HRESULT hr;

	// Test the cooperative level to see if it's okay to render
	hr = IDirect3DDevice8_TestCooperativeLevel(gD3DApp.pD3DDevice);
	if (hr != S_OK)
	{
		// If the device was lost, do not render until we get it back
		if (D3DERR_DEVICELOST == hr)
		{
			return S_OK;
		}

		// Check if the device needs to be resized.
		if (D3DERR_DEVICENOTRESET == hr)
		{
			// If we are windowed, read the desktop mode and use the same format for
			// the back buffer
			if (gD3DApp.bWindowed)
			{
				D3DAdapterInfo *pAdapterInfo = &gD3DApp.Adapters[gD3DApp.dwAdapter];
				IDirect3D8_GetAdapterDisplayMode(gD3DApp.pD3D, gD3DApp.dwAdapter, &pAdapterInfo->d3ddmDesktop);
				gD3DApp.d3dpp.BackBufferFormat = pAdapterInfo->d3ddmDesktop.Format;
			}

			hr = D3DApp_Resize3DEnvironment();
			if (hr != S_OK)
			{
				return hr;
			}
		}
		return hr;
	}

	// Get the app's time, in seconds. Skip rendering if no time elapsed
	float fAppTime = D3DUtil_Timer(TIMER_GETAPPTIME);
	float fElapsedAppTime = D3DUtil_Timer(TIMER_GETELAPSEDTIME);
	if ((0.0f == fElapsedAppTime) && gD3DApp.bFrameMoving)
	{
		return S_OK;
	}

	// FrameMove (animate) the scene
	if (gD3DApp.bFrameMoving || gD3DApp.bSingleStep)
	{

		// Store the time for the app
		gD3DApp.fTime = fAppTime;
		gD3DApp.fElapsedTime = fElapsedAppTime;

		// Frame move the scene
		hr = D3DApp_FrameMove();
		if (hr != S_OK)
		{
			return hr;
		}

//      gD3DApp.bSingleStep = FALSE;

	}

	// Render the scene as normal
	hr = D3DApp_Render();
	if (hr != S_OK)
	{
		return hr;
	}

	// Keep track of the frame count
	static float fLastTime = 0.0f;
	static DWORD dwFrames = 0;
	float fTime = D3DUtil_Timer(TIMER_GETABSOLUTETIME);
	dwFrames++;

	// Update the scene stats once per second
	if (fTime - fLastTime > 1.0f)
	{

		gD3DApp.fFPS = dwFrames / (fTime - fLastTime);
		fLastTime = fTime;
		dwFrames = 0;

		// Get adapter's current mode so we can report
		// bit depth (back buffer depth may be unknown)
		D3DDISPLAYMODE iMode;
		IDirect3D8_GetAdapterDisplayMode(gD3DApp.pD3D, gD3DApp.dwAdapter, &iMode);

		sprintf(gD3DApp.strFrameStats, "%.02f fps (%dx%dx%d)\0", gD3DApp.fFPS, gD3DApp.d3dsdBackBuffer.Width, gD3DApp.d3dsdBackBuffer.Height, iMode.Format == D3DFMT_X8R8G8B8 ? 32 : 16);

		if (gD3DApp.bUseDepthBuffer)
		{
			D3DAdapterInfo *pAdapterInfo = &gD3DApp.Adapters[gD3DApp.dwAdapter];

			D3DDeviceInfo *pDeviceInfo = &pAdapterInfo->devices[pAdapterInfo->dwCurrentDevice];

			D3DModeInfo *pModeInfo = &pDeviceInfo->modes[pDeviceInfo->dwCurrentMode];

			switch (pModeInfo->DepthStencilFormat)
			{

				case D3DFMT_D16:
					strcat(gD3DApp.strFrameStats, " (D16)");
					break;

				case D3DFMT_D15S1:
					strcat(gD3DApp.strFrameStats, " (D15S1)");
					break;

				case D3DFMT_D24X8:
					strcat(gD3DApp.strFrameStats, " (D24X8)");
					break;

				case D3DFMT_D24S8:
					strcat(gD3DApp.strFrameStats, " (D24S8)");
					break;

				case D3DFMT_D24X4S4:
					strcat(gD3DApp.strFrameStats, " (D24X4S4)");
					break;
				case D3DFMT_D32:
					strcat(gD3DApp.strFrameStats, " (D32)");
					break;
			}	// End Switch
		}
	}

	// Show the frame on the primary surface.
	IDirect3DDevice8_Present(gD3DApp.pD3DDevice, NULL, NULL, NULL, NULL);
	return S_OK;

}

int D3DApp_ConfirmDevice(D3DCAPS8 *pCaps, DWORD dwBehavior, int iFormat)
{
	//-----------------------------------------------------------------------------
	// Name: ConfirmDevice()
	// Desc: Called during device initialization, this code checks the device
	//       for some minimum set of capabilities
	//-----------------------------------------------------------------------------

	if (dwBehavior & D3DCREATE_HARDWARE_VERTEXPROCESSING || dwBehavior & D3DCREATE_MIXED_VERTEXPROCESSING)
	{

		if (pCaps->VertexShaderVersion < D3DVS_VERSION(1, 0))
		{
			return E_FAIL;
		}
	}
	return S_OK;
}

//-----------------------------------------------------------------------------
// Name: SortModesCallback()
// Desc: Callback function for sorting display modes (used by BuildDeviceList).
//-----------------------------------------------------------------------------
int __cdecl SortModesCallback(const void *arg1, const void *arg2)
{
	D3DDISPLAYMODE *p1 = (D3DDISPLAYMODE *)arg1;
	D3DDISPLAYMODE *p2 = (D3DDISPLAYMODE *)arg2;

	if (p1->Format > p2->Format)
		return -1;
	if (p1->Format < p2->Format)
		return +1;
	if (p1->Width < p2->Width)
		return -1;
	if (p1->Width > p2->Width)
		return +1;
	if (p1->Height < p2->Height)
		return -1;
	if (p1->Height > p2->Height)
		return +1;

	return 0;
}

//-----------------------------------------------------------------------------
// Name: FindDepthStencilFormat()
// Desc: Finds a depth/stencil format for the given device that is compatible
//       with the render target format and meets the needs of the app.
//-----------------------------------------------------------------------------
BOOL D3DApp_FindDepthStencilFormat(UINT iAdapter, D3DDEVTYPE DeviceType, D3DFORMAT TargetFormat, D3DFORMAT *pDepthStencilFormat)
{
	if (gD3DApp.dwMinDepthBits <= 16 && gD3DApp.dwMinStencilBits == 0)
	{
		if (SUCCEEDED(IDirect3D8_CheckDeviceFormat(gD3DApp.pD3D, iAdapter, DeviceType, TargetFormat, D3DUSAGE_DEPTHSTENCIL, D3DRTYPE_SURFACE, D3DFMT_D16)))
		{
			if (SUCCEEDED(IDirect3D8_CheckDepthStencilMatch(gD3DApp.pD3D, iAdapter, DeviceType, TargetFormat, TargetFormat, D3DFMT_D16)))
			{
				*pDepthStencilFormat = D3DFMT_D16;
				return TRUE;
			}
		}
	}

	if (gD3DApp.dwMinDepthBits <= 15 && gD3DApp.dwMinStencilBits <= 1)
	{
		if (SUCCEEDED(IDirect3D8_CheckDeviceFormat(gD3DApp.pD3D, iAdapter, DeviceType, TargetFormat, D3DUSAGE_DEPTHSTENCIL, D3DRTYPE_SURFACE, D3DFMT_D15S1)))
		{
			if (SUCCEEDED(IDirect3D8_CheckDepthStencilMatch(gD3DApp.pD3D, iAdapter, DeviceType, TargetFormat, TargetFormat, D3DFMT_D15S1)))
			{
				*pDepthStencilFormat = D3DFMT_D15S1;
				return TRUE;
			}
		}
	}

	if (gD3DApp.dwMinDepthBits <= 24 && gD3DApp.dwMinStencilBits == 0)
	{
		if (SUCCEEDED(IDirect3D8_CheckDeviceFormat(gD3DApp.pD3D, iAdapter, DeviceType, TargetFormat, D3DUSAGE_DEPTHSTENCIL, D3DRTYPE_SURFACE, D3DFMT_D24X8)))
		{
			if (SUCCEEDED(IDirect3D8_CheckDepthStencilMatch(gD3DApp.pD3D, iAdapter, DeviceType, TargetFormat, TargetFormat, D3DFMT_D24X8)))
			{
				*pDepthStencilFormat = D3DFMT_D24X8;
				return TRUE;
			}
		}
	}

	if (gD3DApp.dwMinDepthBits <= 24 && gD3DApp.dwMinStencilBits <= 8)
	{
		if (SUCCEEDED(IDirect3D8_CheckDeviceFormat(gD3DApp.pD3D, iAdapter, DeviceType, TargetFormat, D3DUSAGE_DEPTHSTENCIL, D3DRTYPE_SURFACE, D3DFMT_D24S8)))
		{
			if (SUCCEEDED(IDirect3D8_CheckDepthStencilMatch(gD3DApp.pD3D, iAdapter, DeviceType, TargetFormat, TargetFormat, D3DFMT_D24S8)))
			{
				*pDepthStencilFormat = D3DFMT_D24S8;
				return TRUE;
			}
		}
	}

	if (gD3DApp.dwMinDepthBits <= 24 && gD3DApp.dwMinStencilBits <= 4)
	{
		if (SUCCEEDED(IDirect3D8_CheckDeviceFormat(gD3DApp.pD3D, iAdapter, DeviceType, TargetFormat, D3DUSAGE_DEPTHSTENCIL, D3DRTYPE_SURFACE, D3DFMT_D24X4S4)))
		{
			if (SUCCEEDED(IDirect3D8_CheckDepthStencilMatch(gD3DApp.pD3D, iAdapter, DeviceType, TargetFormat, TargetFormat, D3DFMT_D24X4S4)))
			{
				*pDepthStencilFormat = D3DFMT_D24X4S4;
				return TRUE;
			}
		}
	}

	if (gD3DApp.dwMinDepthBits <= 32 && gD3DApp.dwMinStencilBits == 0)
	{
		if (SUCCEEDED(IDirect3D8_CheckDeviceFormat(gD3DApp.pD3D, iAdapter, DeviceType, TargetFormat, D3DUSAGE_DEPTHSTENCIL, D3DRTYPE_SURFACE, D3DFMT_D32)))
		{
			if (SUCCEEDED(IDirect3D8_CheckDepthStencilMatch(gD3DApp.pD3D, iAdapter, DeviceType, TargetFormat, TargetFormat, D3DFMT_D32)))
			{
				*pDepthStencilFormat = D3DFMT_D32;
				return TRUE;
			}
		}
	}

	return FALSE;
}

HRESULT D3DApp_BuildDeviceList(void)
{
	//-----------------------------------------------------------------------------
	// Name: BuildDeviceList()
	// Desc:
	//-----------------------------------------------------------------------------

	const DWORD dwNumDeviceTypes = 2;
	const char *strDeviceDescs[] = { "HAL", "REF" };
	const D3DDEVTYPE DeviceTypes[] = { D3DDEVTYPE_HAL, D3DDEVTYPE_REF };
	DWORD m, f;
	BOOL bHALExists = FALSE;
	BOOL bHALIsWindowedCompatible = FALSE;
	BOOL bHALIsDesktopCompatible = FALSE;
	BOOL bHALIsSampleCompatible = FALSE;

	// Loop through all the adapters on the system (usually, there's just one
	// unless more than one graphics card is present).
	for (UINT iAdapter = 0; iAdapter < IDirect3D8_GetAdapterCount(gD3DApp.pD3D); iAdapter++)
	{
		// Fill in adapter info
		D3DAdapterInfo *pAdapter = &gD3DApp.Adapters[gD3DApp.dwNumAdapters];
		IDirect3D8_GetAdapterIdentifier(gD3DApp.pD3D, iAdapter, 0, &pAdapter->d3dAdapterIdentifier);
		IDirect3D8_GetAdapterDisplayMode(gD3DApp.pD3D, iAdapter, &pAdapter->d3ddmDesktop);
		pAdapter->dwNumDevices = 0;
		pAdapter->dwCurrentDevice = 0;

		// Enumerate all display modes on this adapter
		D3DDISPLAYMODE modes[100];
		D3DFORMAT formats[20];
		DWORD dwNumFormats = 0;
		DWORD dwNumModes = 0;
		DWORD dwNumAdapterModes = IDirect3D8_GetAdapterModeCount(gD3DApp.pD3D, iAdapter);

		// Add the adapter's current desktop format to the list of formats
		formats[dwNumFormats++] = pAdapter->d3ddmDesktop.Format;

		for (UINT iMode = 0; iMode < dwNumAdapterModes; iMode++)
		{
			// Get the display mode attributes
			D3DDISPLAYMODE DisplayMode;
			IDirect3D8_EnumAdapterModes(gD3DApp.pD3D, iAdapter, iMode, &DisplayMode);

			// Filter out low-resolution modes
			if (DisplayMode.Width < 640 || DisplayMode.Height < 400)
				continue;

			// Check if the mode already exists (to filter out refresh rates)
			for (m = 0L; m < dwNumModes; m++)
			{
				if ((modes[m].Width == DisplayMode.Width) && (modes[m].Height == DisplayMode.Height) && (modes[m].Format == DisplayMode.Format))
					break;
			}

			// If we found a new mode, add it to the list of modes
			if (m == dwNumModes)
			{
				modes[dwNumModes].Width = DisplayMode.Width;
				modes[dwNumModes].Height = DisplayMode.Height;
				modes[dwNumModes].Format = DisplayMode.Format;
				modes[dwNumModes].RefreshRate = 0;
				dwNumModes++;

				// Check if the mode's format already exists
				for (f = 0; f < dwNumFormats; f++)
				{
					if (DisplayMode.Format == formats[f])
						break;
				}

				// If the format is new, add it to the list
				if (f == dwNumFormats)
					formats[dwNumFormats++] = DisplayMode.Format;
			}
		}

		// Sort the list of display modes (by format, then width, then height)
		qsort((void *)modes, dwNumModes, sizeof(D3DDISPLAYMODE), SortModesCallback);

		// Add devices to adapter
		for (UINT iDevice = 0; iDevice < dwNumDeviceTypes; iDevice++)
		{
			// Fill in device info
			D3DDeviceInfo *pDevice;
			pDevice = &pAdapter->devices[pAdapter->dwNumDevices];
			pDevice->DeviceType = DeviceTypes[iDevice];
			IDirect3D8_GetDeviceCaps(gD3DApp.pD3D, iAdapter, DeviceTypes[iDevice], &pDevice->d3dCaps);
			pDevice->strDesc = strDeviceDescs[iDevice];
			pDevice->dwNumModes = 0;
			pDevice->dwCurrentMode = 0;
			pDevice->bCanDoWindowed = FALSE;
			pDevice->bWindowed = FALSE;
			pDevice->MultiSampleType = D3DMULTISAMPLE_NONE;

			// Examine each format supported by the adapter to see if it will
			// work with this device and meets the needs of the application.
			BOOL bFormatConfirmed[20];
			DWORD dwBehavior[20];
			D3DFORMAT fmtDepthStencil[20];

			for (DWORD f = 0; f < dwNumFormats; f++)
			{
				bFormatConfirmed[f] = FALSE;
				fmtDepthStencil[f] = D3DFMT_UNKNOWN;

				// Skip formats that cannot be used as render targets on this device
				if (FAILED(IDirect3D8_CheckDeviceType(gD3DApp.pD3D, iAdapter, pDevice->DeviceType, formats[f], formats[f], FALSE)))
					continue;

				if (pDevice->DeviceType == D3DDEVTYPE_HAL)
				{
					// This system has a HAL device
					bHALExists = TRUE;

					if (pDevice->d3dCaps.Caps2 & D3DCAPS2_CANRENDERWINDOWED)
					{
						// HAL can run in a window for some mode
						bHALIsWindowedCompatible = TRUE;

						if (f == 0)
						{
							// HAL can run in a window for the current desktop mode
							bHALIsDesktopCompatible = TRUE;
						}
					}
				}

				// Confirm the device/format for HW vertex processing
				if (pDevice->d3dCaps.DevCaps & D3DDEVCAPS_HWTRANSFORMANDLIGHT)
				{
					if (pDevice->d3dCaps.DevCaps & D3DDEVCAPS_PUREDEVICE)
					{
						dwBehavior[f] = D3DCREATE_HARDWARE_VERTEXPROCESSING | D3DCREATE_PUREDEVICE;

						if (SUCCEEDED(D3DApp_ConfirmDevice(&pDevice->d3dCaps, dwBehavior[f], formats[f])))
							bFormatConfirmed[f] = TRUE;
					}

					if (FALSE == bFormatConfirmed[f])
					{
						dwBehavior[f] = D3DCREATE_MIXED_VERTEXPROCESSING;

						if (SUCCEEDED(D3DApp_ConfirmDevice(&pDevice->d3dCaps, dwBehavior[f], formats[f])))
							bFormatConfirmed[f] = TRUE;
					}
				}

				// Confirm the device/format for SW vertex processing
				if (FALSE == bFormatConfirmed[f])
				{
					dwBehavior[f] = D3DCREATE_SOFTWARE_VERTEXPROCESSING;

					if (SUCCEEDED(D3DApp_ConfirmDevice(&pDevice->d3dCaps, dwBehavior[f], formats[f])))
						bFormatConfirmed[f] = TRUE;
				}

				// Find a suitable depth/stencil buffer format for this device/format
				if (bFormatConfirmed[f] && gD3DApp.bUseDepthBuffer)
				{
					if (!D3DApp_FindDepthStencilFormat(iAdapter, pDevice->DeviceType, formats[f], &fmtDepthStencil[f]))
					{
						bFormatConfirmed[f] = FALSE;
					}
				}
			}

			// Add all enumerated display modes with confirmed formats to the
			// device's list of valid modes
			for (DWORD m = 0L; m < dwNumModes; m++)
			{
				for (DWORD f = 0; f < dwNumFormats; f++)
				{
					if (modes[m].Format == formats[f])
					{
						if (bFormatConfirmed[f] == TRUE)
						{
							// Add this mode to the device's list of valid modes
							pDevice->modes[pDevice->dwNumModes].Width = modes[m].Width;
							pDevice->modes[pDevice->dwNumModes].Height = modes[m].Height;
							pDevice->modes[pDevice->dwNumModes].Format = modes[m].Format;
							pDevice->modes[pDevice->dwNumModes].dwBehavior = dwBehavior[f];
							pDevice->modes[pDevice->dwNumModes].DepthStencilFormat = fmtDepthStencil[f];
							pDevice->dwNumModes++;

							if (pDevice->DeviceType == D3DDEVTYPE_HAL)
								bHALIsSampleCompatible = TRUE;
						}
					}
				}
			}

			// Select any 640x480 mode for default (but prefer a 16-bit mode)
			for (m = 0; m < pDevice->dwNumModes; m++)
			{
				if (pDevice->modes[m].Width == 640 && pDevice->modes[m].Height == 480)
				{
					pDevice->dwCurrentMode = m;
					if (pDevice->modes[m].Format == D3DFMT_R5G6B5 || pDevice->modes[m].Format == D3DFMT_X1R5G5B5 || pDevice->modes[m].Format == D3DFMT_A1R5G5B5)
					{
						break;
					}
				}
			}

			// Check if the device is compatible with the desktop display mode
			// (which was added initially as formats[0])
			if (bFormatConfirmed[0] && (pDevice->d3dCaps.Caps2 & D3DCAPS2_CANRENDERWINDOWED))
			{
				pDevice->bCanDoWindowed = TRUE;
				pDevice->bWindowed = TRUE;
			}

			// If valid modes were found, keep this device
			if (pDevice->dwNumModes > 0)
				pAdapter->dwNumDevices++;
		}

		// If valid devices were found, keep this adapter
		if (pAdapter->dwNumDevices > 0)
			gD3DApp.dwNumAdapters++;
	}

	// Return an error if no compatible devices were found
	if (0L == gD3DApp.dwNumAdapters)
		return D3DAPPERR_NOCOMPATIBLEDEVICES;

	// Pick a default device that can render into a window
	// (This code assumes that the HAL device comes before the REF
	// device in the device array).
	for (DWORD a = 0; a < gD3DApp.dwNumAdapters; a++)
	{
		for (DWORD d = 0; d < gD3DApp.Adapters[a].dwNumDevices; d++)
		{
			if (gD3DApp.Adapters[a].devices[d].bWindowed)
			{
				gD3DApp.Adapters[a].dwCurrentDevice = d;
				gD3DApp.dwAdapter = a;
				gD3DApp.bWindowed = TRUE;

				// Display a warning message
				if (gD3DApp.Adapters[a].devices[d].DeviceType == D3DDEVTYPE_REF)
				{
					if (!bHALExists)
						D3DApp_DisplayErrorMsg(D3DAPPERR_NOHARDWAREDEVICE, MSGWARN_SWITCHEDTOREF, 16);

					else if (!bHALIsSampleCompatible)
						D3DApp_DisplayErrorMsg(D3DAPPERR_HALNOTCOMPATIBLE, MSGWARN_SWITCHEDTOREF, 17);

					else if (!bHALIsWindowedCompatible)
						D3DApp_DisplayErrorMsg(D3DAPPERR_NOWINDOWEDHAL, MSGWARN_SWITCHEDTOREF, 18);

					else if (!bHALIsDesktopCompatible)
						D3DApp_DisplayErrorMsg(D3DAPPERR_NODESKTOPHAL, MSGWARN_SWITCHEDTOREF, 19);

					else	// HAL is desktop compatible, but not sample compatible
						D3DApp_DisplayErrorMsg(D3DAPPERR_NOHALTHISMODE, MSGWARN_SWITCHEDTOREF, 20);
				}

				return S_OK;
			}
		}
	}

	return D3DAPPERR_NOWINDOWABLEDEVICES;

}

INT_PTR CALLBACK D3DApp_SelectDeviceProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
	//-----------------------------------------------------------------------------
	// Name: SelectDeviceProc()
	// Desc: Windows message handling function for the device select dialog
	//-----------------------------------------------------------------------------
	// Get access to the UI controls
	HWND hwndAdapterList = GetDlgItem(hDlg, IDC_ADAPTER_COMBO);
	HWND hwndDeviceList = GetDlgItem(hDlg, IDC_DEVICE_COMBO);
	HWND hwndFullscreenModeList = GetDlgItem(hDlg, IDC_FULLSCREENMODES_COMBO);
	HWND hwndWindowedRadio = GetDlgItem(hDlg, IDC_WINDOW);
	HWND hwndFullscreenRadio = GetDlgItem(hDlg, IDC_FULLSCREEN);
	HWND hwndMultiSampleList = GetDlgItem(hDlg, IDC_MULTISAMPLE_COMBO);
	BOOL bUpdateDlgControls = FALSE;

	// Static state for adapter/device/mode selection
	static DWORD dwOldAdapter, dwNewAdapter;
	static DWORD dwOldDevice, dwNewDevice;
	static DWORD dwOldMode, dwNewMode;
	static BOOL bOldWindowed, bNewWindowed;
	static D3DMULTISAMPLE_TYPE OldMultiSampleType, NewMultiSampleType;

	// Working variables
	D3DAdapterInfo *pAdapter;
	D3DDeviceInfo *pDevice;

	// Handle the initialization message
	if (WM_INITDIALOG == msg)
	{
		// Old state
		dwOldAdapter = gD3DApp.dwAdapter;
		pAdapter = &gD3DApp.Adapters[dwOldAdapter];

		dwOldDevice = pAdapter->dwCurrentDevice;
		pDevice = &pAdapter->devices[dwOldDevice];

		dwOldMode = pDevice->dwCurrentMode;
		bOldWindowed = pDevice->bWindowed;
		OldMultiSampleType = pDevice->MultiSampleType;

		// New state is initially the same as the old state
		dwNewAdapter = dwOldAdapter;
		dwNewDevice = dwOldDevice;
		dwNewMode = dwOldMode;
		bNewWindowed = bOldWindowed;
		NewMultiSampleType = OldMultiSampleType;

		// Set flag to update dialog controls below
		bUpdateDlgControls = TRUE;
	}

	if (WM_COMMAND == msg)
	{
		// Get current UI state
		bNewWindowed = Button_GetCheck(hwndWindowedRadio);

		if (IDOK == LOWORD(wParam))
		{
			// Handle the case when the user hits the OK button. Check if any
			// of the options were changed
			if (dwNewAdapter != dwOldAdapter || dwNewDevice != dwOldDevice || dwNewMode != dwOldMode || bNewWindowed != bOldWindowed || NewMultiSampleType != OldMultiSampleType)
			{
				gD3DApp.dwAdapter = dwNewAdapter;

				pAdapter = &gD3DApp.Adapters[dwNewAdapter];
				pAdapter->dwCurrentDevice = dwNewDevice;

				pAdapter->devices[dwNewDevice].dwCurrentMode = dwNewMode;
				pAdapter->devices[dwNewDevice].bWindowed = bNewWindowed;
				pAdapter->devices[dwNewDevice].MultiSampleType = NewMultiSampleType;

				EndDialog(hDlg, IDOK);
			}
			else
				EndDialog(hDlg, IDCANCEL);

			return TRUE;
		}
		else if (IDCANCEL == LOWORD(wParam))
		{
			// Handle the case when the user hits the Cancel button
			EndDialog(hDlg, IDCANCEL);
			return TRUE;
		}
		else if (CBN_SELENDOK == HIWORD(wParam))
		{
			if (LOWORD(wParam) == IDC_ADAPTER_COMBO)
			{
				dwNewAdapter = ComboBox_GetCurSel(hwndAdapterList);
				pAdapter = &gD3DApp.Adapters[dwNewAdapter];

				dwNewDevice = pAdapter->dwCurrentDevice;
				dwNewMode = pAdapter->devices[dwNewDevice].dwCurrentMode;
				bNewWindowed = pAdapter->devices[dwNewDevice].bWindowed;
			}
			else if (LOWORD(wParam) == IDC_DEVICE_COMBO)
			{
				pAdapter = &gD3DApp.Adapters[dwNewAdapter];

				dwNewDevice = ComboBox_GetCurSel(hwndDeviceList);
				dwNewMode = pAdapter->devices[dwNewDevice].dwCurrentMode;
				bNewWindowed = pAdapter->devices[dwNewDevice].bWindowed;
			}
			else if (LOWORD(wParam) == IDC_FULLSCREENMODES_COMBO)
			{
				dwNewMode = ComboBox_GetCurSel(hwndFullscreenModeList);
			}
			else if (LOWORD(wParam) == IDC_MULTISAMPLE_COMBO)
			{
				DWORD dwItem = ComboBox_GetCurSel(hwndMultiSampleList);
				NewMultiSampleType = (D3DMULTISAMPLE_TYPE)ComboBox_GetItemData(hwndMultiSampleList, dwItem);
			}
		}
		// Keep the UI current
		bUpdateDlgControls = TRUE;
	}

	DWORD m;

	// Update the dialog controls
	if (bUpdateDlgControls)
	{
		// Reset the content in each of the combo boxes
		ComboBox_ResetContent(hwndAdapterList);
		ComboBox_ResetContent(hwndDeviceList);
		ComboBox_ResetContent(hwndFullscreenModeList);
		ComboBox_ResetContent(hwndMultiSampleList);

		pAdapter = &gD3DApp.Adapters[dwNewAdapter];
		pDevice = &pAdapter->devices[dwNewDevice];

		// Add a list of adapters to the adapter combo box
		for (DWORD a = 0; a < gD3DApp.dwNumAdapters; a++)
		{
			// Add device name to the combo box
			DWORD dwItem = ComboBox_AddString(hwndAdapterList,
				gD3DApp.Adapters[a].d3dAdapterIdentifier.Description);

			// Set the item data to identify this adapter
			ComboBox_SetItemData(hwndAdapterList, dwItem, a);

			// Set the combobox selection on the current adapater
			if (a == dwNewAdapter)
				ComboBox_SetCurSel(hwndAdapterList, dwItem);
		}

		// Add a list of devices to the device combo box
		for (DWORD d = 0; d < pAdapter->dwNumDevices; d++)
		{
			// Add device name to the combo box
			DWORD dwItem = ComboBox_AddString(hwndDeviceList,
				pAdapter->devices[d].strDesc);

			// Set the item data to identify this device
			ComboBox_SetItemData(hwndDeviceList, dwItem, d);

			// Set the combobox selection on the current device
			if (d == dwNewDevice)
				ComboBox_SetCurSel(hwndDeviceList, dwItem);
		}

		// Add a list of modes to the mode combo box
		for (m = 0; m < pDevice->dwNumModes; m++)
		{
			DWORD BitDepth = 16;
			if (pDevice->modes[m].Format == D3DFMT_X8R8G8B8 || pDevice->modes[m].Format == D3DFMT_A8R8G8B8 || pDevice->modes[m].Format == D3DFMT_R8G8B8)
			{
				BitDepth = 32;
			}

			// Add mode desc to the combo box
			char strMode[80];
			sprintf(strMode, "%ld x %ld x %ld", pDevice->modes[m].Width, pDevice->modes[m].Height, BitDepth);

			DWORD dwItem = ComboBox_AddString(hwndFullscreenModeList, strMode);

			// Set the item data to identify this mode
			ComboBox_SetItemData(hwndFullscreenModeList, dwItem, m);

			// Set the combobox selection on the current mode
			if (m == dwNewMode)
				ComboBox_SetCurSel(hwndFullscreenModeList, dwItem);
		}

		// Add a list of multisample modes to the multisample combo box
		for (m = 0; m <= 16; m++)
		{
			char strDesc[50];

			D3DFORMAT fmt;
			if (bNewWindowed)
				fmt = gD3DApp.Adapters[dwNewAdapter].d3ddmDesktop.Format;
			else
				fmt = pDevice->modes[dwNewMode].Format;

			if (m == 1)	// 1 is not a valid multisample type
				continue;

			if (SUCCEEDED(gD3DApp.pD3D->lpVtbl->CheckDeviceMultiSampleType(gD3DApp.pD3D, dwNewAdapter, pDevice->DeviceType, fmt, bNewWindowed, (D3DMULTISAMPLE_TYPE)m)))
			{
				if (m == 0)
					strcpy(strDesc, "none");
				else
					sprintf(strDesc, "%d samples", m);

				// Add device name to the combo box
				DWORD dwItem = ComboBox_AddString(hwndMultiSampleList, strDesc);

				// Set the item data to identify this multisample type
				ComboBox_SetItemData(hwndMultiSampleList, dwItem, m);

				// Set the combobox selection on the current multisample type
				if ((D3DMULTISAMPLE_TYPE)m == NewMultiSampleType || m == 0)
					ComboBox_SetCurSel(hwndMultiSampleList, dwItem);
			}
		}
		DWORD dwItem = ComboBox_GetCurSel(hwndMultiSampleList);
		NewMultiSampleType = (D3DMULTISAMPLE_TYPE)ComboBox_GetItemData(hwndMultiSampleList, dwItem);
		EnableWindow(hwndMultiSampleList, ComboBox_GetCount(hwndMultiSampleList) > 1);
		EnableWindow(hwndWindowedRadio, pDevice->bCanDoWindowed);

		if (bNewWindowed)
		{
			Button_SetCheck(hwndWindowedRadio, TRUE);
			Button_SetCheck(hwndFullscreenRadio, FALSE);
			EnableWindow(hwndFullscreenModeList, FALSE);
		}
		else
		{
			Button_SetCheck(hwndWindowedRadio, FALSE);
			Button_SetCheck(hwndFullscreenRadio, TRUE);
			EnableWindow(hwndFullscreenModeList, TRUE);
		}
		return TRUE;
	}

	return FALSE;
}

HRESULT D3DApp_ForceWindowed(void)
{
	//-----------------------------------------------------------------------------
	// Name: ForceWindowed()
	// Desc: Switch to a windowed mode, even if that means picking a new device
	//       and/or adapter
	//-----------------------------------------------------------------------------
	HRESULT hr;
	D3DAdapterInfo *pAdapterInfoCur = &gD3DApp.Adapters[gD3DApp.dwAdapter];
	D3DDeviceInfo *pDeviceInfoCur = &pAdapterInfoCur->devices[pAdapterInfoCur->dwCurrentDevice];
	BOOL bFoundDevice = FALSE;

	if (pDeviceInfoCur->bCanDoWindowed)
	{
		bFoundDevice = TRUE;
	}
	else
	{
		// Look for a windowable device on any adapter
		D3DAdapterInfo *pAdapterInfo;
		DWORD dwAdapter;
		D3DDeviceInfo *pDeviceInfo;
		DWORD dwDevice;
		for (dwAdapter = 0; dwAdapter < gD3DApp.dwNumAdapters; dwAdapter++)
		{
			pAdapterInfo = &gD3DApp.Adapters[dwAdapter];
			for (dwDevice = 0; dwDevice < pAdapterInfo->dwNumDevices; dwDevice++)
			{
				pDeviceInfo = &pAdapterInfo->devices[dwDevice];
				if (pDeviceInfo->bCanDoWindowed)
				{
					gD3DApp.dwAdapter = dwAdapter;
					pDeviceInfoCur = pDeviceInfo;
					pAdapterInfo->dwCurrentDevice = dwDevice;
					bFoundDevice = TRUE;
					break;
				}
			}
			if (bFoundDevice)
				break;
		}
	}

	if (!bFoundDevice)
		return E_FAIL;

	pDeviceInfoCur->bWindowed = TRUE;
	gD3DApp.bWindowed = TRUE;

	// Now destroy the current 3D device objects, then reinitialize

	gD3DApp.bReady = FALSE;

	// Release all scene objects that will be re-created for the new device
	D3DApp_InvalidateDeviceObjects();
	D3DApp_DeleteDeviceObjects();

	// Release display objects, so a new device can be created
	if (gD3DApp.pD3DDevice->lpVtbl->Release(gD3DApp.pD3DDevice) > 0L)
		return D3DApp_DisplayErrorMsg(D3DAPPERR_NONZEROREFCOUNT, MSGERR_APPMUSTEXIT, 22);

	// Create the new device
	if (FAILED(hr = D3DApp_Initialize3DEnvironment()))
		return D3DApp_DisplayErrorMsg(hr, MSGERR_APPMUSTEXIT, 23);
	gD3DApp.bReady = TRUE;

	return S_OK;
}

HRESULT D3DApp_ToggleFullscreen(void)
{
	//-----------------------------------------------------------------------------
	// Name: ToggleFullScreen()
	// Desc: Called when user toggles between fullscreen mode and windowed mode
	//-----------------------------------------------------------------------------
	// Get access to current adapter, device, and mode
	D3DAdapterInfo *pAdapterInfo = &gD3DApp.Adapters[gD3DApp.dwAdapter];
	D3DDeviceInfo *pDeviceInfo = &pAdapterInfo->devices[pAdapterInfo->dwCurrentDevice];
	D3DModeInfo *pModeInfo = &pDeviceInfo->modes[pDeviceInfo->dwCurrentMode];

	// Need device change if going windowed and the current device
	// can only be fullscreen
	if (!gD3DApp.bWindowed && !pDeviceInfo->bCanDoWindowed)
		return D3DApp_ForceWindowed();

	gD3DApp.bReady = FALSE;

	// Toggle the windowed state
	gD3DApp.bWindowed = !gD3DApp.bWindowed;
	pDeviceInfo->bWindowed = gD3DApp.bWindowed;

	// Prepare window for windowed/fullscreen change
	D3DApp_AdjustWindowForChange();

	// Set up the presentation parameters
	gD3DApp.d3dpp.Windowed = pDeviceInfo->bWindowed;
	gD3DApp.d3dpp.MultiSampleType = pDeviceInfo->MultiSampleType;
	gD3DApp.d3dpp.AutoDepthStencilFormat = pModeInfo->DepthStencilFormat;
	gD3DApp.d3dpp.hDeviceWindow = gD3DApp.hWnd;
	if (gD3DApp.bWindowed)
	{
		gD3DApp.d3dpp.BackBufferWidth = gD3DApp.rcWindowClient.right - gD3DApp.rcWindowClient.left;
		gD3DApp.d3dpp.BackBufferHeight = gD3DApp.rcWindowClient.bottom - gD3DApp.rcWindowClient.top;
		gD3DApp.d3dpp.BackBufferFormat = pAdapterInfo->d3ddmDesktop.Format;
	}
	else
	{
		gD3DApp.d3dpp.BackBufferWidth = pModeInfo->Width;
		gD3DApp.d3dpp.BackBufferHeight = pModeInfo->Height;
		gD3DApp.d3dpp.BackBufferFormat = pModeInfo->Format;
	}

	// Resize the 3D device
	if (FAILED(D3DApp_Resize3DEnvironment()))
	{
		if (gD3DApp.bWindowed)
			return D3DApp_ForceWindowed();
		else
			return E_FAIL;
	}

	// When moving from fullscreen to windowed mode, it is important to
	// adjust the window size after resetting the device rather than
	// beforehand to ensure that you get the window size you want.  For
	// example, when switching from 640x480 fullscreen to windowed with
	// a 1000x600 window on a 1024x768 desktop, it is impossible to set
	// the window size to 1000x600 until after the display mode has
	// changed to 1024x768, because windows cannot be larger than the
	// desktop.
	if (gD3DApp.bWindowed)
	{
		SetWindowPos(gD3DApp.hWnd, HWND_NOTOPMOST, gD3DApp.rcWindowBounds.left, gD3DApp.rcWindowBounds.top, (gD3DApp.rcWindowBounds.right - gD3DApp.rcWindowBounds.left), (gD3DApp.rcWindowBounds.bottom - gD3DApp.rcWindowBounds.top), SWP_SHOWWINDOW);
	}

	gD3DApp.bReady = TRUE;

	return S_OK;
}

HRESULT D3DApp_UserSelectNewDevice(void)
{
	//-----------------------------------------------------------------------------
	// Name: UserSelectNewDevice()
	// Desc: Displays a dialog so the user can select a new adapter, device, or
	//       display mode, and then recreates the 3D environment if needed
	//-----------------------------------------------------------------------------
	HRESULT hr;

	// Can't display dialogs in fullscreen mode
	if (gD3DApp.bWindowed == FALSE)
	{
		if (FAILED(D3DApp_ToggleFullscreen()))
		{
			D3DApp_DisplayErrorMsg(D3DAPPERR_RESIZEFAILED, MSGERR_APPMUSTEXIT, 2);
			return E_FAIL;
		}
	}

	// Prompt the user to change the mode
	if (IDOK != DialogBoxParam((HINSTANCE)GetModuleHandle(NULL), MAKEINTRESOURCE(IDD_SELECTDEVICE), gD3DApp.hWnd, D3DApp_SelectDeviceProc, (LPARAM) & gD3DApp))
	{

		return S_OK;
	}

	// Get access to the newly selected adapter, device, and mode
	DWORD dwDevice;
	dwDevice = gD3DApp.Adapters[gD3DApp.dwAdapter].dwCurrentDevice;
	gD3DApp.bWindowed = gD3DApp.Adapters[gD3DApp.dwAdapter].devices[dwDevice].bWindowed;

	// Release all scene objects that will be re-created for the new device
	D3DApp_InvalidateDeviceObjects();
	D3DApp_DeleteDeviceObjects();

	// Release display objects, so a new device can be created
	SAFE_RELEASE(gD3DApp.pD3DDevice);

	// Inform the display class of the change. It will internally
	// re-create valid surfaces, a d3ddevice, etc.
	if (FAILED(hr = D3DApp_Initialize3DEnvironment()))
		return D3DApp_DisplayErrorMsg(hr, MSGERR_APPMUSTEXIT, 21);

	// If the app is paused, trigger the rendering of the current frame
	if (FALSE == gD3DApp.bFrameMoving)
	{
		gD3DApp.bSingleStep = TRUE;
		D3DUtil_Timer(TIMER_START);
		D3DUtil_Timer(TIMER_STOP);
	}

	return S_OK;
}
