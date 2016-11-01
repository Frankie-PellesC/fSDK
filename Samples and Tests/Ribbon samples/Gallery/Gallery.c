/*+@@file@@----------------------------------------------------------------*//*!
 \file		Gallery.c
 \par Description 
            Defines the entry point for the application.
 \par  Status: 
 \par Project: 
 \date		Created  on Mon Oct 31 22:56:22 2016
 \date		Modified on Mon Oct 31 22:56:22 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "Renderer.h"
#include "resource.h"
#include "RibbonFramework.h"

Renderer g_renderer;

#define MAX_LOADSTRING 100

// Global Variables:
HINSTANCE hInst;						// current instance
WCHAR wszTitle[MAX_LOADSTRING];			// The title bar text
WCHAR wszWindowClass[MAX_LOADSTRING];	// the main window class name

// Forward declarations of functions included in this code module:
ATOM MyRegisterClass(HINSTANCE hInstance);
BOOL InitInstance(HINSTANCE, int);
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK About(HWND, UINT, WPARAM, LPARAM);

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		WinMain
 \date		Created  on Mon Oct 31 22:57:17 2016
 \date		Modified on Mon Oct 31 22:57:17 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	MSG msg;

	HRESULT hr = CoInitialize(NULL);
	if (FAILED(hr))
	{
		return FALSE;
	}
	// Initialize global strings
	LoadString(hInstance, IDS_APP_TITLE, wszTitle, MAX_LOADSTRING);
	LoadString(hInstance, IDC_GALLERY, wszWindowClass, MAX_LOADSTRING);
	MyRegisterClass(hInstance);

	// Perform application initialization:
	if (!InitInstance(hInstance, nCmdShow))
	{
		return FALSE;
	}

	// Main message loop:
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	CoUninitialize();
	return (int)msg.wParam;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MyRegisterClass
 \details	Registers the window class.
            This function and its usage are only necessary if you want this 
            code to be compatible with Win32 systems prior to the 
            'RegisterClassEx' function that was added to Windows 95.
            It is important to call this function so that the application 
            will get 'well formed' small icons associated with it.
 \date		Created  on Mon Oct 31 22:58:06 2016
 \date		Modified on Mon Oct 31 22:58:06 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style = 0;		// Don't use CS_HREDRAW or CS_VREDRAW with a Ribbon
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_GALLERY));
	wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH) (COLOR_WINDOW + 1);
	wcex.lpszMenuName = MAKEINTRESOURCE(IDC_GALLERY);
	wcex.lpszClassName = wszWindowClass;
	wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

	return RegisterClassEx(&wcex);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		InitInstance
 \details	Saves instance handle and creates main window
            In this function, we save the instance handle in a global 
            variable and create and display the main program window.
 \date		Created  on Mon Oct 31 22:58:43 2016
 \date		Modified on Mon Oct 31 22:58:43 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
	HWND hWnd;

	hInst = hInstance;	// Store instance handle in our global variable

	hWnd = CreateWindow(wszWindowClass, wszTitle, WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN, CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, NULL, NULL, hInstance, NULL);

	if (!hWnd)
	{
		return FALSE;
	}

	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		WndProc
 \details	Processes messages for the main window.
              WM_COMMAND  - process the application menu
              WM_PAINT    - Paint the main window
              WM_DESTROY  - post a quit message and return
 \date		Created  on Mon Oct 31 22:59:24 2016
 \date		Modified on Mon Oct 31 22:59:24 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;

	switch (message)
	{
		case WM_SIZE:
		{
			// Invalidate the client area below the ribbon
			RECT rc;
			GetClientRect(hWnd, &rc);
			rc.top = GetRibbonHeight();
			InvalidateRect(hWnd, &rc, TRUE);
			break;
		}
		case WM_CREATE:
			RendererInitialize(&g_renderer, hWnd);
			if (!InitializeFramework(hWnd))
			{
				return -1;
			}
			break;
		case WM_PAINT:
			hdc = BeginPaint(hWnd, &ps);

			RECT rect;
			GetClientRect(hWnd, &rect);
			rect.top += GetRibbonHeight();

			RendererDrawShapes(&g_renderer, hdc, &rect);

			EndPaint(hWnd, &ps);
			break;
		case WM_DESTROY:
			DestroyFramework();
			PostQuitMessage(0);
			break;
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}
