/*+@@file@@----------------------------------------------------------------*//*!
 \file		ContextPopup.c
 \par Description 
 \par  Status: 
 \par Project: 
 \date		Created  on Fri Oct 28 17:33:10 2016
 \date		Modified on Fri Oct 28 17:33:10 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/

#include <windows.h>

#include "ContextPopup.h"
#include "Application.h"
#include "ContextUI.h"
#include "RibbonFramework.h"

#define MAX_LOADSTRING 100

// Global Variables:
HINSTANCE hInst;								// current instance.
WCHAR wszTitle[MAX_LOADSTRING]       = { 0 };	// The title bar text.
WCHAR wszWindowClass[MAX_LOADSTRING] = { 0 };	// the main window class name.

// Forward declarations of functions included in this code module:
ATOM MyRegisterClass(HINSTANCE hInstance);
BOOL InitInstance(HINSTANCE, int);
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK About(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	HRESULT hr = CoInitialize(NULL);
	if (FAILED(hr))
	{
		return FALSE;
	}

	// Initialize global strings.
	LoadString(hInstance, IDS_APP_TITLE, wszTitle, MAX_LOADSTRING);
	LoadString(hInstance, IDS_CONTEXTPOPUP, wszWindowClass, MAX_LOADSTRING);
	MyRegisterClass(hInstance);

	// Perform application initialization.
	if (!InitInstance(hInstance, nCmdShow))
	{
		return FALSE;
	}

	// Main message loop.
	MSG msg;
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
            has 'well formed' small icons associated with it.
 \date		Created  on Fri Oct 28 17:35:16 2016
 \date		Modified on Fri Oct 28 17:35:16 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style = 0;	// Don't use CS_HREDRAW or CS_VREDRAW with a Ribbon
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_CONTEXTPOPUP));
	wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH) (COLOR_WINDOW + 1);
	wcex.lpszMenuName = NULL;
	wcex.lpszClassName = wszWindowClass;
	wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

	return RegisterClassEx(&wcex);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		InitInstance
 \details	Saves instance handle and creates main window.
            In this function, an instance handle is saved in a global 
            variable and create and display the main program window.
 \date		Created  on Fri Oct 28 17:35:52 2016
 \date		Modified on Fri Oct 28 17:35:52 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
	HWND hWnd;

	hInst = hInstance;	// Store instance handle in our global variable.

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
            WM_COMMAND - process the application menu.
            WM_PAINT   - Paint the main window.
            WM_DESTROY - post a quit message and return.
 \date		Created  on Fri Oct 28 17:36:49 2016
 \date		Modified on Fri Oct 28 17:36:49 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;

	switch (message)
	{
		case WM_CREATE:
			// Initializes the Ribbon framework.
			if (!InitializeFramework(hWnd))
			{
				return -1;
			}
			break;
		case WM_PAINT:
			hdc = BeginPaint(hWnd, &ps);
			EndPaint(hWnd, &ps);
			break;
		case WM_DESTROY:
			// Tears down the Ribbon framework.
			DestroyFramework();
			PostQuitMessage(0);
			break;
		case WM_CONTEXTMENU:
		{
			POINT pt;
			POINTSTOPOINT(pt, lParam);

			ShowContextualUI(&pt, hWnd);
			break;
		}
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}
