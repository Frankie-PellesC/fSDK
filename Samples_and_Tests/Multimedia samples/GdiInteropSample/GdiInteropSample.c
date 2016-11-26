/*+@@file@@----------------------------------------------------------------*//*!
 \file		GdiInteropSample.c
 \par Description 
            
 \par  Status: 
            
 \par Project: 
            
 \date		Created  on Thu Nov 17 14:31:39 2016
 \date		Modified on Thu Nov 17 14:31:39 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/

#include "GdiInteropSample.h"

HWND                  hwnd        = NULL;
ID2D1Factory         *pD2DFactory = NULL;
ID2D1DCRenderTarget  *pDCRT       = NULL;
ID2D1SolidColorBrush *pBlackBrush = NULL;


/******************************************************************
 *                                                                 *
 *  WinMain                                                        *
 *                                                                 *
 *  Application entrypoint                                         *
 *                                                                 *
 ******************************************************************/

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// Ignore the return value because we want to continue running even in the
	// unlikely event that HeapSetInformation fails.
	HeapSetInformation(NULL, HeapEnableTerminationOnCorruption, NULL, 0);

	if (SUCCEEDED(CoInitialize(NULL)))
	{
		{
			if (SUCCEEDED(Initialize()))
			{
				RunMessageLoop();
			}
		}
		CoUninitialize();
	}

	return 0;
}

/******************************************************************
 *                                                                 *
 *  ReleaseResources                                               *
 *                                                                 *
 *  Tear down resources                                            *
 *                                                                 *
 ******************************************************************/

void ReleaseResources(void)
{
	SafeRelease(&pD2DFactory);
	SafeRelease(&pDCRT);
	SafeRelease(&pBlackBrush);
}

/******************************************************************
 *                                                                 *
 *  DemoApp::Initialize                                            *
 *                                                                 *
 *  Create the application window and device-independent resources *
 *                                                                 *
 ******************************************************************/
HRESULT Initialize(void)
{
	HRESULT hr;

	hr = CreateDeviceIndependentResources();
	if (SUCCEEDED(hr))
	{
		// Register the window class.
		WNDCLASSEX wcex    = { sizeof(WNDCLASSEX) };
		wcex.style         = CS_HREDRAW | CS_VREDRAW;
		wcex.lpfnWndProc   = WndProc;
		wcex.cbClsExtra    = 0;
		wcex.cbWndExtra    = sizeof(LONG_PTR);
		wcex.hInstance     = HINST_THISCOMPONENT;
		wcex.hbrBackground = NULL;
		wcex.lpszMenuName  = NULL;
		wcex.hCursor        = LoadCursor(NULL, IDC_ARROW);
		wcex.lpszClassName = L"D2DDemoApp";

		RegisterClassEx(&wcex);

		// Create the application window.
		//
		// Because the CreateWindow function takes its size in pixels, we
		// obtain the system DPI and use it to scale the window size.
		FLOAT dpiX, dpiY;
		pD2DFactory->lpVtbl->GetDesktopDpi(pD2DFactory, &dpiX, &dpiY);

		hwnd = CreateWindow(L"D2DDemoApp", L"Direct2D Demo App", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT,
									(UINT)(ceil(640.f * dpiX / 96.f)), (UINT)(ceil(480.f * dpiY / 96.f)), NULL, NULL, HINST_THISCOMPONENT, NULL);

		hr = hwnd ? S_OK : E_FAIL;
		if (SUCCEEDED(hr))
		{
			ShowWindow(hwnd, SW_SHOWNORMAL);

			UpdateWindow(hwnd);
		}
	}

	return hr;
}

/******************************************************************
 *                                                                 *
 *  DemoApp::CreateDeviceIndependentResources                      *
 *                                                                 *
 *  This method is used to create resources which are not bound    *
 *  to any device. Their lifetime effectively extends for the      *
 *  duration of the app.                                           *
 *                                                                 *
 ******************************************************************/

HRESULT CreateDeviceIndependentResources(void)
{
	// Create D2D factory
	return D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, __uuidof(ID2D1Factory), NULL, (void **)&pD2DFactory);
}

/******************************************************************
 *                                                                 *
 *  DemoApp::CreateDeviceResources                                 *
 *                                                                 *
 *  This method creates resources which are bound to a particular  *
 *  D3D device. It's all centralized here, in case the resources   *
 *  need to be recreated in case of D3D device loss (eg. display   *
 *  change, remoting, removal of video card, etc).                 *
 *                                                                 *
 ******************************************************************/

HRESULT CreateDeviceResources(void)
{
	HRESULT hr = S_OK;

	if (!pDCRT)
	{
		// Create a DC render target.
		D2D1_RENDER_TARGET_PROPERTIES props =
		{
			D2D1_RENDER_TARGET_TYPE_DEFAULT,
			{DXGI_FORMAT_B8G8R8A8_UNORM, D2D1_ALPHA_MODE_IGNORE},
			0.0, 0.0,
			D2D1_RENDER_TARGET_USAGE_NONE,
			D2D1_FEATURE_LEVEL_DEFAULT
		};

		hr = pD2DFactory->lpVtbl->CreateDCRenderTarget(pD2DFactory, &props, &pDCRT);
		if (SUCCEEDED(hr))
		{
			// Create a black brush.
			D2D1_COLOR_F brush;
			D2D1_Fcolor(&brush, D2D1ColorF_Black, 1.0);
			hr = pDCRT->lpVtbl->CreateSolidColorBrush(pDCRT, &brush, NULL, &pBlackBrush);
		}
	}

	return hr;
}

/******************************************************************
 *                                                                 *
 *  DemoApp::DiscardDeviceResources                                *
 *                                                                 *
 *  Discard device-specific resources which need to be recreated   *
 *  when a D3D device is lost                                      *
 *                                                                 *
 ******************************************************************/

void DiscardDeviceResources(void)
{
	SafeRelease(&pDCRT);
	SafeRelease(&pBlackBrush);
}

/******************************************************************
 *                                                                 *
 *  DemoApp::RunMessageLoop                                        *
 *                                                                 *
 *  Main window message loop                                       *
 *                                                                 *
 ******************************************************************/

void RunMessageLoop(void)
{
	MSG msg;

	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}

/******************************************************************
 *                                                                 *
 *  DemoApp::OnRender                                              *
 *                                                                 *
 *  This method draws Direct2D content to a GDI HDC.               *
 *                                                                 *
 *  This method will automatically discard device-specific         *
 *  resources if the D3D device disappears during function         *
 *  invocation, and will recreate the resources the next time it's *
 *  invoked.                                                       *
 *                                                                 *
 ******************************************************************/
HRESULT OnRender(const PAINTSTRUCT *ps)
{

	HRESULT hr;
	RECT rc;

	// Get the dimensions of the client drawing area.
	GetClientRect(hwnd, &rc);

	//
	// Draw the pie chart with Direct2D.
	//

	// Create the DC render target.
	hr = CreateDeviceResources();

	if (SUCCEEDED(hr))
	{
		// Bind the DC to the DC render target.
		hr = pDCRT->lpVtbl->BindDC(pDCRT, ps->hdc, &rc);

		pDCRT->lpVtbl->BeginDraw(pDCRT);

		D2D1_MATRIX_3X2_F identityMx;
		D2D1_Identity(&identityMx);
		pDCRT->lpVtbl->SetTransform(pDCRT, &identityMx);

		D2D1_COLOR_F color;
		D2D1_Fcolor(&color, D2D1ColorF_White, 1.0);
		pDCRT->lpVtbl->Clear(pDCRT, &color);

		pDCRT->lpVtbl->DrawEllipse(pDCRT, &((D2D1_ELLIPSE){{150.0f, 150.0f}, 100.0f, 100.0f}), (ID2D1Brush *)pBlackBrush, 3.0, NULL);

		pDCRT->lpVtbl->DrawLine(pDCRT, ((D2D1_POINT_2F){150.0f, 150.0f}),
					((D2D1_POINT_2F){(150.0f + 100.0f * 0.15425f), (150.0f - 100.0f * 0.988f)}), (ID2D1Brush *)pBlackBrush, 3.0, NULL);

		pDCRT->lpVtbl->DrawLine(pDCRT, ((D2D1_POINT_2F){150.0f, 150.0f}),
					((D2D1_POINT_2F){(150.0f + 100.0f * 0.525f), (150.0f + 100.0f * 0.8509f)}), (ID2D1Brush *)pBlackBrush, 3.0, NULL);

		pDCRT->lpVtbl->DrawLine(pDCRT, ((D2D1_POINT_2F){150.0f, 150.0f}),
					((D2D1_POINT_2F){(150.0f - 100.0f * 0.988f), (150.0f - 100.0f * 0.15425f)}), (ID2D1Brush *)pBlackBrush, 3.0, NULL);

		hr = pDCRT->lpVtbl->EndDraw(pDCRT, NULL, NULL);
		if (SUCCEEDED(hr))
		{
			//
			// Draw the pie chart with GDI.
			//

			// Save the original object.
			HGDIOBJ original = NULL;
			original = SelectObject(ps->hdc, GetStockObject(DC_PEN));

			HPEN blackPen = CreatePen(PS_SOLID, 3, 0);
			SelectObject(ps->hdc, blackPen);

			Ellipse(ps->hdc, 300, 50, 500, 250);

			POINT pntArray1[2];
			pntArray1[0].x = 400;
			pntArray1[0].y = 150;
			pntArray1[1].x = (LONG)(400 + 100 * 0.15425);
			pntArray1[1].y = (LONG)(150 - 100 * 0.9885);

			POINT pntArray2[2];
			pntArray2[0].x = 400;
			pntArray2[0].y = 150;
			pntArray2[1].x = (LONG)(400 + 100 * 0.525);
			pntArray2[1].y = (LONG)(150 + 100 * 0.8509);

			POINT pntArray3[2];
			pntArray3[0].x = 400;
			pntArray3[0].y = 150;
			pntArray3[1].x = (LONG)(400 - 100 * 0.988);
			pntArray3[1].y = (LONG)(150 - 100 * 0.15425);

			Polyline(ps->hdc, pntArray1, 2);
			Polyline(ps->hdc, pntArray2, 2);
			Polyline(ps->hdc, pntArray3, 2);

			DeleteObject(blackPen);

			// Restore the original object.
			SelectObject(ps->hdc, original);
		}
	}

	if (hr == D2DERR_RECREATE_TARGET)
	{
		hr = S_OK;
		DiscardDeviceResources();
	}

	return hr;
}

/******************************************************************
 *                                                                 *
 *  DemoApp::WndProc                                               *
 *                                                                 *
 *  Window message handler                                         *
 *                                                                 *
 ******************************************************************/

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	LRESULT result = 0;
	BOOL    wasHandled = FALSE;

	switch (message)
	{
		case WM_PAINT:
		case WM_DISPLAYCHANGE:
		{
			PAINTSTRUCT ps;
			BeginPaint(hwnd, &ps);
			OnRender(&ps);
			EndPaint(hwnd, &ps);
		}
			result = 0;
			wasHandled = TRUE;
			break;

		case WM_DESTROY:
		{
			PostQuitMessage(0);
			ReleaseResources();
		}
			result = 1;
			wasHandled = TRUE;
			break;
	}

	if (!wasHandled)
	{
		result = DefWindowProc(hwnd, message, wParam, lParam);
	}

	return result;
}
