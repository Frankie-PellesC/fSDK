/*+@@file@@----------------------------------------------------------------*//*!
 \file		D3D9ExSample.c
 \par Description 
            Sample showing how to use D3D9Ex advanced features.
 \par  Status: 
            
 \par Project: 
            fSDK
 \date		Created  on Sun Nov 13 12:40:36 2016
 \date		Modified on Sun Nov 13 12:40:36 2016
 \author	Frankie
\*//*-@@file@@----------------------------------------------------------------*/
#define INITGUID
#include <windows.h>
#include <d3d9.h>
#include <d3dx9.h>
#include "TxtHelper.h"

#define SAFE_RELEASE(p) { if(p) { (p)->lpVtbl->Release(p); (p) = NULL; } }

//--------------------------------------------------------------------------------------
// structures
//--------------------------------------------------------------------------------------
typedef struct
{
	FLOAT x, y, z, w;	// The transformed position for the vertex
	DWORD dwColor;		// Color
} CURSORVERTEX;
#define D3DFVF_CURSORVERTEX (D3DFVF_XYZRHW|D3DFVF_DIFFUSE)

typedef struct
{
	FLOAT x, y, z, w;	// The transformed position for the vertex
	FLOAT u, v;			// texture coordinate
} SCREENVERTEX;
#define D3DFVF_SCREENVERTEX (D3DFVF_XYZRHW|D3DFVF_TEX1)

#define CURSOR_SIZE 60.0f

//--------------------------------------------------------------------------------------
// Global variables
//--------------------------------------------------------------------------------------
HWND                g_hWnd                    = NULL;	// Window Handle
IDirect3D9Ex       *g_pD3D9                   = NULL;	// Direct3D9Ex object
IDirect3DDevice9Ex *g_pDevRealTime            = NULL;	// Device for rendering the real-time
// objects like cursors

D3DPRESENT_PARAMETERS g_D3DPresentParameters  = { 0 };	// Current present parameters

HANDLE g_hBackgroundThread                    = NULL;	// Background thread

IDirect3DVertexBuffer9 *g_pCursorVB           = NULL;	// cursor vertex buffer
IDirect3DVertexBuffer9 *g_pScreenVB           = NULL;	// screen vertex buffer

IDirect3DTexture9 *g_pSharedBackgroundTexture = NULL;	// Our shared texture

ID3DXFont *g_pFont                            = NULL;		// Font for drawing text
ID3DXSprite *g_pSprite                        = NULL;	// Sprite for batching draw text calls

extern UINT g_RTWidth;
extern UINT g_RTHeight;

BOOL g_bSkipRendering = FALSE;
int g_cubeCount = 3;
D3DPRESENTSTATS g_PresentStats;
float g_fLastFrameTime = 0.0f;
LARGE_INTEGER g_liLastTimerUpdate = { 0 };
LARGE_INTEGER g_liTimerFrequency = { 0 };

//--------------------------------------------------------------------------------------
// Function Prototypes
//--------------------------------------------------------------------------------------
BOOL    InitWindow(HINSTANCE hInstance, int nCmdShow);
HRESULT CreateD3D9VDevice(IDirect3D9Ex *pD3D, IDirect3DDevice9Ex **ppDev9Ex, D3DPRESENT_PARAMETERS *pD3DPresentParameters, HWND hWnd);
HRESULT InitD3D(void);
HRESULT Create_Font(void);
HRESULT CreateSprite(void);
void    Cleanup(void);
HRESULT CreateD3DCursor(void);
HRESULT CreateScreenVB(float screenX, float screenY);
HRESULT UpdateScreenVB(float screenX, float screenY);
HRESULT CreateSharedTexture(void);
void    MoveCursor(UINT posX, UINT posY);
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
void    Render(IDirect3DDevice9Ex *pDev);
void    RenderText(IDirect3DDevice9Ex *pDev);

extern  HANDLE CreateBackgroundThread(IDirect3D9Ex *pD3D9);
extern  void   KillBackgroundThread(void);
extern  HANDLE GetSharedTextureHandle(void);
extern  int    IncreaseCubeCount(void);
extern  int    DecreaseCubeCount(void);
extern  float  GetFPS(void);

HRESULT InitD3D9Ex(HWND hWnd, IDirect3DDevice9Ex ** ppD3DDevice )
{
    HRESULT hr = E_FAIL;
    IDirect3D9Ex * pD3D = NULL;
    IDirect3DDevice9Ex * pDevice = NULL;

    if(ppD3DDevice == NULL)
    {
        return hr;
    }
    
    // Create the D3D object, which is needed to create the D3DDevice.
    if(FAILED(hr = Direct3DCreate9Ex( D3D_SDK_VERSION, &pD3D )))
    {
        *ppD3DDevice = NULL;
        return hr;
    }
        
        
    // Set up the structure used to create the D3DDevice. 
    D3DPRESENT_PARAMETERS d3dpp; 
    ZeroMemory( &d3dpp, sizeof(d3dpp) );
    d3dpp.Windowed = TRUE;
    d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
    d3dpp.BackBufferFormat = D3DFMT_UNKNOWN;

    // Create the Direct3D device. 
    if( FAILED( hr = pD3D->lpVtbl->CreateDeviceEx( pD3D, D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd,
                                      D3DCREATE_SOFTWARE_VERTEXPROCESSING,
                                      &d3dpp, NULL, &pDevice ) ) )

    {
        *ppD3DDevice = NULL;
        return hr;
    }

    // Device state would normally be set here

    *ppD3DDevice = pDevice;

    return hr;
}

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow)
{
	MSG msg    = { 0 };
	msg.wParam = -1;

	if (!InitWindow(hInstance, nCmdShow))
		return 0;

	InitD3D9Ex(g_hWnd, &g_pDevRealTime);

	if (FAILED(InitD3D()))
		return 1;

	g_D3DPresentParameters.hDeviceWindow = g_hWnd;
	g_D3DPresentParameters.Windowed = TRUE;
	g_D3DPresentParameters.SwapEffect = D3DSWAPEFFECT_DISCARD;
	g_D3DPresentParameters.PresentationInterval = D3DPRESENT_INTERVAL_DEFAULT;

	int *p = (void *)&g_pDevRealTime;
	*p = 1;

	if (FAILED(CreateD3D9VDevice(g_pD3D9, &g_pDevRealTime, &g_D3DPresentParameters, g_hWnd)))
		return 2;
	if (FAILED(CreateD3DCursor()))
		return 3;
	if (FAILED(CreateScreenVB(800, 600)))
		return 4;
	if (FAILED(Create_Font()))
		return 5;
	if (FAILED(CreateSprite()))
		return 6;

	// set the realtime GPU thread priority
	g_pDevRealTime->lpVtbl->SetGPUThreadPriority(g_pDevRealTime, 7);
	SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_HIGHEST);

	// Get Timer Frequency
	QueryPerformanceFrequency(&g_liTimerFrequency);
	QueryPerformanceCounter(&g_liLastTimerUpdate);

	// Create the background thread
	g_hBackgroundThread = CreateBackgroundThread(g_pD3D9);
	if (!g_hBackgroundThread)
		goto exit;

	if (FAILED(CreateSharedTexture()))
		return 5;

	// Hide the cursor
	ShowCursor(FALSE);

	// Main loop
	msg.message = WM_NULL;
	PeekMessage(&msg, NULL, 0, 0, PM_NOREMOVE);
	while (WM_QUIT != msg.message)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		else
		{
			Render(g_pDevRealTime);	// Do some rendering
		}
	}

  exit:
	if (g_hBackgroundThread)
	{
		KillBackgroundThread();
		WaitForSingleObject(g_hBackgroundThread, INFINITE);
	}

	Cleanup();
	return (int)msg.wParam;
}

//--------------------------------------------------------------------------------------
// Register class and create window
//--------------------------------------------------------------------------------------
BOOL InitWindow(HINSTANCE hInstance, int nCmdShow)
{
	//
	// Register class
	//
	WNDCLASSEX wcex;
	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style = CS_CLASSDC;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = 0;
	wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH) (COLOR_WINDOW + 1);
	wcex.lpszMenuName = NULL;
	wcex.lpszClassName = L"d3d9vwindowclass";
	wcex.hIconSm = 0;

	if (!RegisterClassEx(&wcex))
		return FALSE;

	//
	// Create window
	//
	RECT rc = { 0, 0, 800, 600 };
	AdjustWindowRectEx(&rc, WS_OVERLAPPEDWINDOW, FALSE, WS_EX_CLIENTEDGE);
	g_hWnd = CreateWindowEx(WS_EX_CLIENTEDGE, L"d3d9vwindowclass", L"Direct3D9Ex Sample", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, rc.right - rc.left, rc.bottom - rc.top, NULL, NULL, hInstance, NULL);

	if (!g_hWnd)
		return FALSE;

	ShowWindow(g_hWnd, nCmdShow);

	return TRUE;
}

HRESULT CreateD3D9VDevice(IDirect3D9Ex *pD3D, IDirect3DDevice9Ex **ppDev9Ex, D3DPRESENT_PARAMETERS *pD3DPresentParameters, HWND hWnd)
{
	HRESULT hr = S_OK;

	// Create a d3d9ex device
	DWORD dwFlags = D3DCREATE_SOFTWARE_VERTEXPROCESSING | D3DCREATE_ENABLE_PRESENTSTATS;

	if (!hWnd)
	{
		hWnd = g_hWnd;
		dwFlags = D3DCREATE_SOFTWARE_VERTEXPROCESSING;
	}

	hr = pD3D->lpVtbl->CreateDeviceEx(pD3D, D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, dwFlags, pD3DPresentParameters, NULL, ppDev9Ex);

	if (SUCCEEDED(hr))
	{
		// Make sure our formats are OK
		D3DCAPS9 Caps;
		ZeroMemory(&Caps, sizeof(D3DCAPS9));
		pD3D->lpVtbl->GetDeviceCaps(pD3D, D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, &Caps);

		// Skip backbuffer formats that don't support alpha blending
		hr = pD3D->lpVtbl->CheckDeviceFormat(pD3D, Caps.AdapterOrdinal, Caps.DeviceType, pD3DPresentParameters->BackBufferFormat, D3DUSAGE_QUERY_POSTPIXELSHADER_BLENDING, D3DRTYPE_TEXTURE, pD3DPresentParameters->BackBufferFormat);
		if (FAILED(hr))
		{
			SAFE_RELEASE(*ppDev9Ex);
			return hr;
		}
	}

	return hr;
}

HRESULT InitD3D(void)
{
	// Create a d3d9 device
	HRESULT hr = Direct3DCreate9Ex(D3D_SDK_VERSION, &g_pD3D9);
	return hr;
}

HRESULT Reset(IDirect3DDevice9Ex *pDev9Ex)
{
	// reset the d3d9ex device
	HRESULT hr = pDev9Ex->lpVtbl->Reset(pDev9Ex, &g_D3DPresentParameters);
	if (FAILED(hr))
		return hr;

	return CreateSprite();
}

HRESULT Create_Font(void)
{
	if (FAILED(D3DXCreateFont((IDirect3DDevice9 *)g_pDevRealTime, 16, 0, FW_BOLD, 1, FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, L"Arial", &g_pFont)))
	{
		return E_FAIL;
	}

	return S_OK;
}

HRESULT CreateSprite(void)
{
	// Create a sprite to help batch calls when drawing many lines of text
	return D3DXCreateSprite((IDirect3DDevice9 *)g_pDevRealTime, &g_pSprite);
}

//--------------------------------------------------------------------------------------
// Clean up the objects we've created
//--------------------------------------------------------------------------------------
void Cleanup(void)
{
	SAFE_RELEASE(g_pD3D9);
	SAFE_RELEASE(g_pDevRealTime);
	SAFE_RELEASE(g_pCursorVB);
	SAFE_RELEASE(g_pScreenVB);
	SAFE_RELEASE(g_pSharedBackgroundTexture);
	SAFE_RELEASE(g_pFont);
	SAFE_RELEASE(g_pSprite);
}

HRESULT CreateD3DCursor(void)
{
	// create the vb
	if (FAILED(g_pDevRealTime->lpVtbl->CreateVertexBuffer(g_pDevRealTime, 4 * sizeof(CURSORVERTEX), D3DUSAGE_DYNAMIC, D3DFVF_CURSORVERTEX, D3DPOOL_DEFAULT, &g_pCursorVB, NULL)))
	{
		return E_FAIL;
	}

	MoveCursor(400, 300);

	return S_OK;
}

HRESULT CreateScreenVB(float screenX, float screenY)
{
	// create the vb
	if (FAILED(g_pDevRealTime->lpVtbl->CreateVertexBuffer(g_pDevRealTime, 4 * sizeof(SCREENVERTEX), D3DUSAGE_DYNAMIC, D3DFVF_SCREENVERTEX, D3DPOOL_DEFAULT, &g_pScreenVB, NULL)))
	{
		return E_FAIL;
	}

	UpdateScreenVB(screenX, screenY);

	return S_OK;
}

HRESULT UpdateScreenVB(float screenX, float screenY)
{
	SCREENVERTEX *vertices = NULL;
	if (FAILED(g_pScreenVB->lpVtbl->Lock(g_pScreenVB, 0, 4 * sizeof(SCREENVERTEX), (void **)&vertices, 0)))
		return E_FAIL;

	vertices[0].x = 0;
	vertices[0].y = screenY;
	vertices[0].z = 0.5f;
	vertices[0].w = 1.0f;
	vertices[0].u = 0.0f;
	vertices[0].v = 1.0f;

	vertices[1].x = 0;
	vertices[1].y = 0;
	vertices[1].z = 0.5f;
	vertices[1].w = 1.0f;
	vertices[1].u = 0.0f;
	vertices[1].v = 0.0f;

	vertices[2].x = screenX;
	vertices[2].y = screenY;
	vertices[2].z = 0.5f;
	vertices[2].w = 1.0f;
	vertices[2].u = 1.0f;
	vertices[2].v = 1.0f;

	vertices[3].x = screenX;
	vertices[3].y = 0;
	vertices[3].z = 0.5f;
	vertices[3].w = 1.0f;
	vertices[3].u = 1.0f;
	vertices[3].v = 0.0f;

	g_pScreenVB->lpVtbl->Unlock(g_pScreenVB);

	return S_OK;
}

HRESULT CreateSharedTexture(void)
{
	// wait for a handle from the other thread
	HANDLE hHandle = NULL;
	while (!hHandle)
		hHandle = GetSharedTextureHandle();

	HRESULT hr = g_pDevRealTime->lpVtbl->CreateTexture(g_pDevRealTime, g_RTWidth, g_RTHeight, 1, D3DUSAGE_RENDERTARGET, D3DFMT_X8R8G8B8, D3DPOOL_DEFAULT, &g_pSharedBackgroundTexture, &hHandle);
	if (FAILED(hr))
		return E_FAIL;

	return hr;
}

void MoveCursor(UINT posX, UINT posY)
{
	float x = (float)(posX);
	float y = (float)(posY);

	// Initialize vertices for rendering a quad
	CURSORVERTEX vertices[4];

	vertices[0].x = x;
	vertices[0].y = y;
	vertices[0].z = 0.5f;
	vertices[0].w = 1.0f;

	vertices[1].x = x + CURSOR_SIZE;
	vertices[1].y = y + CURSOR_SIZE * 0.6f;
	vertices[1].z = 0.5f;
	vertices[1].w = 1.0f;

	vertices[2].x = x + CURSOR_SIZE * 0.6f;
	vertices[2].y = y + CURSOR_SIZE;
	vertices[2].z = 0.5f;
	vertices[2].w = 1.0f;

	vertices[3].x = x + CURSOR_SIZE;
	vertices[3].y = y + CURSOR_SIZE;
	vertices[3].z = 0.5f;
	vertices[3].w = 1.0f;

	for (int i = 0; i < 4; i++)
		vertices[i].dwColor = 0xff0000;

	VOID *pVertices;
	if (FAILED(g_pCursorVB->lpVtbl->Lock(g_pCursorVB, 0, sizeof(vertices), (void **)&pVertices, 0)))
		return;
	memcpy(pVertices, vertices, sizeof(vertices));
	g_pCursorVB->lpVtbl->Unlock(g_pCursorVB);
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;

	switch (message)
	{
		case WM_PAINT:
			hdc = BeginPaint(hWnd, &ps);
			EndPaint(hWnd, &ps);
			break;

		case WM_DESTROY:
			PostQuitMessage(0);
			break;

		case WM_MOUSEMOVE:
		{
			UINT x = LOWORD(lParam);
			UINT y = HIWORD(lParam);
			MoveCursor(x, y);
		}

			break;

		case WM_KEYUP:
			switch (wParam)
			{
				case VK_UP:
					g_cubeCount = IncreaseCubeCount();
					break;
				case VK_DOWN:
					g_cubeCount = DecreaseCubeCount();
					break;
				case VK_ESCAPE:
					PostQuitMessage(0);
					break;
			};
			break;

		case WM_SYSKEYUP:
			if ((wParam == VK_RETURN) && (g_pD3D9 != NULL) && (g_pDevRealTime != NULL))
			{
				g_D3DPresentParameters.Windowed = !g_D3DPresentParameters.Windowed;

				DWORD dwStyle;
				DWORD dwExStyle;

				D3DDISPLAYMODE Mode;

				g_pD3D9->lpVtbl->GetAdapterDisplayMode(g_pD3D9, D3DADAPTER_DEFAULT, &Mode);

				if (g_D3DPresentParameters.Windowed)
				{
					//
					// Default to using the window client area size
					//
					g_D3DPresentParameters.BackBufferWidth = 800;
					g_D3DPresentParameters.BackBufferHeight = 600;

					//
					// Window styles for D3D windowed mode
					//
					dwStyle = WS_OVERLAPPEDWINDOW;
					dwExStyle = WS_EX_CLIENTEDGE;
				}
				else
				{
					g_D3DPresentParameters.BackBufferWidth = Mode.Width;
					g_D3DPresentParameters.BackBufferHeight = Mode.Height;

					dwStyle = WS_POPUP;
					dwExStyle = WS_EX_TOPMOST;
				}

				SetWindowLong(g_hWnd, GWL_STYLE, dwStyle);
				SetWindowLong(g_hWnd, GWL_EXSTYLE, dwExStyle);

				if (g_D3DPresentParameters.Windowed)
				{

					RECT rc = { 0, 0, g_D3DPresentParameters.BackBufferWidth, g_D3DPresentParameters.BackBufferHeight };
					AdjustWindowRectEx(&rc, dwStyle, FALSE, dwExStyle);

					SetWindowPos(g_hWnd, HWND_NOTOPMOST, 0, 0, rc.right - rc.left, rc.bottom - rc.top, SWP_SHOWWINDOW | SWP_NOMOVE);
				}

				HRESULT hr;

				hr = g_pDevRealTime->lpVtbl->Reset(g_pDevRealTime, &g_D3DPresentParameters);

				if (SUCCEEDED(hr))
				{
					hr = UpdateScreenVB((float)(g_D3DPresentParameters.BackBufferWidth), (float)(g_D3DPresentParameters.BackBufferHeight));
				}

				if (FAILED(hr))
				{
					return 0;
				}
			}
			break;

		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
	}

	return 0;
}

void Render(IDirect3DDevice9Ex *pDev)
{
	// Begin the scene
	if (!g_bSkipRendering && SUCCEEDED(pDev->lpVtbl->BeginScene(pDev)))
	{
		// disable lighting
		pDev->lpVtbl->SetRenderState(pDev, D3DRS_LIGHTING, FALSE);

		//
		// Render the background
		//

		// set the texture
		pDev->lpVtbl->SetTexture(pDev, 0, (IDirect3DBaseTexture9 *)g_pSharedBackgroundTexture);

		pDev->lpVtbl->SetTextureStageState(pDev, 0, D3DTSS_COLOROP, D3DTOP_SELECTARG1);
		pDev->lpVtbl->SetTextureStageState(pDev, 0, D3DTSS_COLORARG1, D3DTA_TEXTURE);

		// stream sources
		pDev->lpVtbl->SetStreamSource(pDev, 0, g_pScreenVB, 0, sizeof(SCREENVERTEX));
		pDev->lpVtbl->SetFVF(pDev, D3DFVF_SCREENVERTEX);

		// draw
		pDev->lpVtbl->DrawPrimitive(pDev, D3DPT_TRIANGLESTRIP, 0, 2);

		//
		// Render the cursor
		//

		pDev->lpVtbl->SetTexture(pDev, 0, NULL);

		// set the texture stage states
		pDev->lpVtbl->SetTextureStageState(pDev, 0, D3DTSS_COLOROP, D3DTOP_SELECTARG1);
		pDev->lpVtbl->SetTextureStageState(pDev, 0, D3DTSS_COLORARG1, D3DTA_DIFFUSE);

		// stream sources
		pDev->lpVtbl->SetStreamSource(pDev, 0, g_pCursorVB, 0, sizeof(CURSORVERTEX));
		pDev->lpVtbl->SetFVF(pDev, D3DFVF_CURSORVERTEX);

		// draw
		pDev->lpVtbl->DrawPrimitive(pDev, D3DPT_TRIANGLESTRIP, 0, 2);

		// render text
		RenderText(pDev);

		// End the scene
		pDev->lpVtbl->EndScene(pDev);
	}
	else if (g_bSkipRendering)
		Sleep(20);	//don't hog the entire CPU

	// Present the backbuffer contents to the display
	HRESULT hr = pDev->lpVtbl->Present(pDev, NULL, NULL, NULL, NULL);

	// Handle Occluded, DeviceReset, or Mode Changes
	if (S_PRESENT_OCCLUDED == hr)
	{
		g_bSkipRendering = TRUE;
	}
	else if (D3DERR_DEVICELOST == hr)
	{
		if (FAILED(Reset(pDev)))
			g_bSkipRendering = TRUE;
	}
	else if (S_PRESENT_MODE_CHANGED == hr)
	{
		//
		// Reenumerate modes by calling IDirect3D9::GetAdapterModeCountEx
		//
		D3DDISPLAYMODEFILTER DisplayModeFilter;

		ZeroMemory(&DisplayModeFilter, sizeof(DisplayModeFilter));

		DisplayModeFilter.Size = sizeof(DisplayModeFilter);
		DisplayModeFilter.Format = D3DFMT_UNKNOWN;
		DisplayModeFilter.ScanLineOrdering = D3DSCANLINEORDERING_PROGRESSIVE;

		/*UINT ModeCount =*/ g_pD3D9->lpVtbl->GetAdapterModeCountEx(g_pD3D9, D3DADAPTER_DEFAULT, &DisplayModeFilter);

		if (FAILED(Reset(pDev)))
			g_bSkipRendering = TRUE;
	}
	else if (D3DERR_DEVICEHUNG == hr)
	{
		MessageBox(g_hWnd,  L"This application has caused the graphics adapter to hang, check with the hardware vendor for a new driver.",
							L"Graphics Adapter Hang", MB_OK);

		PostQuitMessage(0);
		g_bSkipRendering = TRUE;
	}
	else
	{
		g_bSkipRendering = FALSE;
	}

	// Get some presents stats
	IDirect3DSwapChain9 *pSwapChain;
	if (SUCCEEDED(pDev->lpVtbl->GetSwapChain(pDev, 0, &pSwapChain)))
	{
		IDirect3DSwapChain9Ex *pSwapChainEx;
		if (SUCCEEDED(pSwapChain->lpVtbl->QueryInterface(pSwapChain, &IID_IDirect3DSwapChain9Ex, (void **)&pSwapChainEx)))
		{
			hr = pSwapChainEx->lpVtbl->GetLastPresentCount(pSwapChainEx, &g_PresentStats.PresentCount);
			if (SUCCEEDED(hr))
				hr = pSwapChainEx->lpVtbl->GetPresentStats(pSwapChainEx, &g_PresentStats);
			pSwapChainEx->lpVtbl->Release(pSwapChainEx);
		}
		pSwapChain->lpVtbl->Release(pSwapChain);
	}

	// Get the time
	LARGE_INTEGER liCurrentTime;
	QueryPerformanceCounter(&liCurrentTime);
	g_fLastFrameTime = (float)(liCurrentTime.QuadPart - g_liLastTimerUpdate.QuadPart) / (float)g_liTimerFrequency.QuadPart;
	g_liLastTimerUpdate.QuadPart = liCurrentTime.QuadPart;
}

void RenderText(IDirect3DDevice9Ex *pDev)
{
	// The helper object simply helps keep track of text position, and color
	// and then it calls pFont->DrawText( m_pSprite, strMsg, -1, &rc, DT_NOCLIP, m_clr );
	// If NULL is passed in as the sprite object, then it will work fine however the 
	// pFont->DrawText() will not be batched together.  Batching calls will improves perf.
	CTextHelper *txtHelper = CTextHelperCreate(g_pFont, g_pSprite, 15);
	if (!txtHelper)
	{
		MessageBox(NULL, L"Cannot create class txtHelper.", L"Error", MB_OK|MB_ICONASTERISK);
		exit(1);
	}

	// Output statistics
	CTextHelperBegin(txtHelper);
	CTextHelperSetInsertionPos(txtHelper, 2, 0);
	CTextHelperSetForegroundColor(txtHelper, 0xffffff00);
	CTextHelperDrawTextLine(txtHelper, L"This sample demonstrates rendering a cursor indepedently of geometry.");
	CTextHelperDrawTextLine(txtHelper, L"The scene (cubes in this case) is drawn by a D3D9Ex device that runs");
	CTextHelperDrawTextLine(txtHelper, L"in a lower priority background thread.  The image is copied to a shared");
	CTextHelperDrawTextLine(txtHelper, L"surface.  The main application thread contains a D3D9Ex device as well.");
	CTextHelperDrawTextLine(txtHelper, L"This thread runs at a higher priority and composites the shared image");
	CTextHelperDrawTextLine(txtHelper, L"with a D3D9Ex drawn cursor and text in real time.  This allows for");
	CTextHelperDrawTextLine(txtHelper, L"fluid cursor and text updates even when the scene is too complex to be");
	CTextHelperDrawTextLine(txtHelper, L"handled in real-time.");

	CTextHelperSetForegroundColor(txtHelper, 0xffff0000);
	CTextHelperDrawTextLine(txtHelper, L"");
	CTextHelperDrawTextLine(txtHelper, L"Press the UP arrow key to increase the scene complexity.");
	CTextHelperDrawTextLine(txtHelper, L"Press the DOWN arrow key to decrease the scene complexity.");
	CTextHelperDrawTextLine(txtHelper, L"");
	CTextHelperDrawTextLine(txtHelper, L"Try increasing the Number of Cubes to a very high number.  The cubes will");
	CTextHelperDrawTextLine(txtHelper, L"update slowly, but the cursor will still be responsive.");
	CTextHelperSetForegroundColor(txtHelper, 0xffffffff);
	CTextHelperDrawTextLine(txtHelper, L"");
	CTextHelperDrawFormattedTextLine(txtHelper, L"Number of Cubes: %d", g_cubeCount * g_cubeCount);

	// get stats from the background thread
	float FPS = GetFPS();
	CTextHelperSetForegroundColor(txtHelper, 0xff00ff00);
	CTextHelperDrawTextLine(txtHelper, L"");
	CTextHelperDrawTextLine(txtHelper, L"Background Thread:");
	CTextHelperDrawFormattedTextLine(txtHelper, L"FPS: %0.2f", FPS);
	CTextHelperDrawTextLine(txtHelper, L"");
	CTextHelperDrawTextLine(txtHelper, L"Foreground Thread:");
	CTextHelperDrawFormattedTextLine(txtHelper, L"FPS: %0.2f", 1.0f / g_fLastFrameTime);
	CTextHelperDrawFormattedTextLine(txtHelper, L"Present Count: %d", g_PresentStats.PresentCount);
	CTextHelperDrawFormattedTextLine(txtHelper, L"Present Refresh Count: %d", g_PresentStats.PresentRefreshCount);
	CTextHelperDrawFormattedTextLine(txtHelper, L"Sync Refresh Count: %d", g_PresentStats.SyncRefreshCount);

	CTextHelperEnd(txtHelper);

	free(txtHelper);
}
