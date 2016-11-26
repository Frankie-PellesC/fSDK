// dolphin.c

#include "dolphin.h"
#include "dolphinres.h"
#include "D3DXUtils.h"
#include "D3DApp.h"
#include "D3DFont.h"

//
// Uses DirectX8
//
// Link with these libraries. (put dx8math.lib before d3dx8d.lib)
//
// dx8math.lib d3d8.lib d3dx8d.lib winmm.lib
//
// You will need d3dx8d.dll and d3dx8d.lib
//
//-------------------------------------------------------------------------------
// There are some lcc-win32 files that need replacing that you will find
// in Dolphin.zip.
//
// d3d8types.h - there were some mistakes in this header
//-------------------------------------------------------------------------------
//
//-------------------------------------------------------------------------------
// The function D3DXComputeNormals() in DirectX8.0 was defined as
//
// HRESULT WINAPI D3DXComputeNormals(LPD3DXBASEMESH);
//
// but all versions from version 8.1 and above have this function as
//
// HRESULT WINAPI D3DXComputeNormals(LPD3DXBASEMESH,DWORD*);
//
// the changed d3dx8mesh.h can be found in dolphin.zip
//
// also one needs different d3dx8d.exp & d3dx8d.lib files
// which can also be found in dolphin.zip.
//
//-------------------------------------------------------------------------------
//
// John
//

extern D3DAPP gD3DApp;        // Global APP vars
extern D3DFONT gD3DFont;      // Font

LRESULT CALLBACK MainWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

HINSTANCE hInst;

static BOOL InitApplication(void)
{
	WNDCLASS wc;

	memset(&wc,0,sizeof(WNDCLASS));
	wc.style 			= CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS ;
	wc.lpfnWndProc 		= (WNDPROC)MainWndProc;
	wc.hInstance 		= hInst;
	wc.hbrBackground 	= (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName 	= "d3d8WndClass";
	wc.lpszMenuName 	= MAKEINTRESOURCE(IDR_MENU);
	wc.hCursor 			= LoadCursor(NULL,IDC_ARROW);
	wc.hIcon 			= LoadIcon(hInst,MAKEINTRESOURCE(1));
	if (!RegisterClass(&wc))
		return 0;
	return 1;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, char * lpCmdLine, int nCmdShow)
{
	MSG msg;
//	BOOL bGotMsg;

	hInst = hInstance;

	if (!InitApplication())
		return 0;

	// Initialise Direct3D Object + Direct3DDevice Object + Applications
	// variables and optionally the app's window. Also the App timer is started.
	// The Window size will be adjusted so that the specified width and height
	// will be the width and height of the client area.
	// The D3D objects gD3DApp.pD3D and gD3DApp.pD3DDevice will be created. The initialisation
	// will also build a device list of all graphics adapters with the various
	// screen sizes and colour depths.
	if (S_OK != D3DApp_Create( 0, "DolphinVS: Tweening Vertex Shader", 400, 300, TRUE)){
		MessageBox(0, "Could not Create D3DApp", "Error", MB_OK);
		return 0;
	}

	D3DFont_Create(&gD3DFont, "Arial", 12, D3DFONT_BOLD);

	int hr;

	// Re get the window's sizes
	GetWindowRect(gD3DApp.hWnd, &gD3DApp.rcWindowBounds);
	GetClientRect(gD3DApp.hWnd, &gD3DApp.rcWindowClient);

	// Initialize the 3D environment for the app
	hr = D3DApp_Initialize3DEnvironment();
	if(hr != S_OK){
		MessageBox(0, "Could not Initialize 3D Environment", "Error", MB_OK);
		SendMessage(gD3DApp.hWnd, WM_CLOSE, 0, 0);
		return 0;
	}

	HACCEL hAccel = LoadAccelerators( NULL, MAKEINTRESOURCE(IDR_MAIN_ACCEL) );

	// The app is ready to go
	gD3DApp.bReady = TRUE;

	while( 1 ) {
		if( PeekMessage( &msg, NULL, 0, 0, PM_NOREMOVE ) ){
			if( !GetMessage( &msg, NULL, 0, 0 ) ) {
				break;
			}
			// Translate and dispatch the message
			if( 0 == TranslateAccelerator( gD3DApp.hWnd, hAccel, &msg ) )
			{
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
		}
		else if( gD3DApp.bActive ){
			// Render a frame during idle time (no messages are waiting)
			if( gD3DApp.bReady )
			{
				if( FAILED( D3DApp_Render3DEnvironment() ) )
					SendMessage( gD3DApp.hWnd, WM_CLOSE, 0, 0 );
			}
		}else{
			D3DApp_Pause(TRUE);
			WaitMessage();			 // Wait for message to re-activate app.
			D3DApp_Pause(FALSE);
		}
	}
	return 0;
}

LRESULT CALLBACK MainWndProc(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam)
{
	switch (msg) {
	case WM_PAINT:
		// Handle paint messages when the app is not ready
		if( gD3DApp.pD3DDevice && !gD3DApp.bReady )
		{
			if( gD3DApp.bWindowed )
				IDirect3DDevice8_Present(gD3DApp.pD3DDevice, NULL, NULL, NULL, NULL);
		}
		break;

	case WM_ACTIVATE:
		gD3DApp.bActive = LOWORD(wParam);
		return 0;

	case WM_SYSCOMMAND:
		// Prevent moving/sizing and power loss in fullscreen mode
		switch( wParam ){
		case SC_MOVE:
		case SC_SIZE:
		case SC_MAXIMIZE:
		case SC_KEYMENU:
		case SC_MONITORPOWER:
			if( FALSE == gD3DApp.bWindowed )
				return 1;
			break;
		}
		break;

		case WM_NCHITTEST:
			// Prevent the user from selecting the menu in fullscreen mode
			if( !gD3DApp.bWindowed )
				return HTCLIENT;

		break;

	case WM_SIZE:
		// Check to see if we are losing our window...
		if( SIZE_MAXHIDE == wParam || SIZE_MINIMIZED == wParam )
			gD3DApp.bActive = FALSE;
		else
			gD3DApp.bActive = TRUE;
		return 0;

	case WM_SETCURSOR:
		// Turn off Windows cursor in fullscreen mode
		if( gD3DApp.bActive && gD3DApp.bReady && !gD3DApp.bWindowed ){
			SetCursor( NULL );
			if( gD3DApp.bShowCursorWhenFullscreen )
				IDirect3DDevice8_ShowCursor(gD3DApp.pD3DDevice, TRUE );
			return TRUE; // prevent Windows from setting cursor to window class cursor
		}
		break;

	case WM_MOUSEMOVE:
		if( gD3DApp.bActive && gD3DApp.bReady && gD3DApp.pD3DDevice != NULL ){
			POINT ptCursor;
			GetCursorPos( &ptCursor );
			ScreenToClient( gD3DApp.hWnd, &ptCursor );
			IDirect3DDevice8_SetCursorPosition(gD3DApp.pD3DDevice, ptCursor.x, ptCursor.y, 0L );
		}
		break;

	case WM_ENTERMENULOOP:
		// Pause the app when menus are displayed
		D3DApp_Pause(TRUE);
		return 0;

	case WM_ENTERSIZEMOVE:
		// Halt frame movement while the app is sizing or moving
		if( gD3DApp.bFrameMoving )
			D3DUtil_Timer( TIMER_STOP );
		break;

	case WM_EXITMENULOOP:
		D3DApp_Pause(FALSE);
		break;

	case WM_CONTEXTMENU:
		// No context menus allowed in fullscreen mode
		if( gD3DApp.bWindowed == FALSE )
			break;

		// Handle the app's context menu (via right mouse click)
		TrackPopupMenuEx( GetSubMenu( LoadMenu( 0, MAKEINTRESOURCE(IDR_POPUP) ), 0 ),
						TPM_VERTICAL, LOWORD(lParam), HIWORD(lParam), hwnd, NULL );
		break;


	case WM_EXITSIZEMOVE:
		if( gD3DApp.bFrameMoving )
			D3DUtil_Timer( TIMER_START );

		if( gD3DApp.bActive && gD3DApp.bWindowed )
		{
			RECT rcClientOld;
			rcClientOld = gD3DApp.rcWindowClient;

			// Update window properties
			GetWindowRect( gD3DApp.hWnd, &gD3DApp.rcWindowBounds );
			GetClientRect( gD3DApp.hWnd, &gD3DApp.rcWindowClient );

			if( rcClientOld.right - rcClientOld.left !=
				gD3DApp.rcWindowClient.right - gD3DApp.rcWindowClient.left ||
				rcClientOld.bottom - rcClientOld.top !=
				gD3DApp.rcWindowClient.bottom - gD3DApp.rcWindowClient.top)
			{
				// A new window size will require a new backbuffer
				// size, so the 3D structures must be changed accordingly.
				gD3DApp.bReady = FALSE;

				gD3DApp.d3dpp.BackBufferWidth  = gD3DApp.rcWindowClient.right - gD3DApp.rcWindowClient.left;
				gD3DApp.d3dpp.BackBufferHeight = gD3DApp.rcWindowClient.bottom - gD3DApp.rcWindowClient.top;

				// Resize the 3D environment
				if( FAILED(D3DApp_Resize3DEnvironment()) )
				{
					D3DApp_DisplayErrorMsg( D3DAPPERR_RESIZEFAILED, MSGERR_APPMUSTEXIT, 2);
					return 0;
				}

				gD3DApp.bReady = TRUE;
			}
		}
		break;

	case WM_POWERBROADCAST:
		switch( wParam )
		{
			#ifndef PBT_APMQUERYSUSPEND
				#define PBT_APMQUERYSUSPEND 0x0000
			#endif
			case PBT_APMQUERYSUSPEND:
				// At this point, the app should save any data for open
				// network connections, files, etc., and prepare to go into
				// a suspended mode.
				return TRUE;

			#ifndef PBT_APMRESUMESUSPEND
				#define PBT_APMRESUMESUSPEND 0x0007
			#endif
			case PBT_APMRESUMESUSPEND:
				// At this point, the app should recover any data, network
				// connections, files, etc., and resume running from when
				// the app was suspended.
				return TRUE;
		}
		break;

	case WM_GETMINMAXINFO:
		((MINMAXINFO*)lParam)->ptMinTrackSize.x = 100;
		((MINMAXINFO*)lParam)->ptMinTrackSize.y = 100;
		return 0;

	case WM_COMMAND:
		switch( LOWORD(wParam) )
		{
		case IDM_TOGGLESTART:
			// Toggle frame movement
			gD3DApp.bFrameMoving = !gD3DApp.bFrameMoving;
			D3DUtil_Timer( gD3DApp.bFrameMoving ? TIMER_START : TIMER_STOP );
			break;

		case IDM_SINGLESTEP:
			// Single-step frame movement
			if( FALSE == gD3DApp.bFrameMoving )
				D3DUtil_Timer( TIMER_ADVANCE );
			else
				D3DUtil_Timer( TIMER_STOP );
			gD3DApp.bFrameMoving = FALSE;
			gD3DApp.bSingleStep  = TRUE;
			break;

		case IDM_CHANGEDEVICE:
			// Prompt the user to select a new device or mode
			if( gD3DApp.bActive && gD3DApp.bReady )
			{
				D3DApp_Pause(TRUE);
				if( FAILED( D3DApp_UserSelectNewDevice() ) ){
					SendMessage( hwnd, WM_CLOSE, 0, 0 );
					return 0;
				}

				D3DApp_Pause(FALSE);
			}
			return 0;

		case IDM_TOGGLEFULLSCREEN:
			// Toggle the fullscreen/window mode
			if( gD3DApp.bActive && gD3DApp.bReady )
			{
				if( FAILED( D3DApp_ToggleFullscreen() ) )
				{
					D3DApp_DisplayErrorMsg( D3DAPPERR_RESIZEFAILED, MSGERR_APPMUSTEXIT, 2);
					return 0;
				}
			}
			return 0;

		case IDM_EXIT:
			// Recieved key/menu command to exit app
			SendMessage( hwnd, WM_CLOSE, 0, 0 );
			return 0;
		}
		break;

	case WM_CLOSE:
		D3DApp_Cleanup3DEnvironment();
		DestroyMenu(GetMenu(hwnd));
		DestroyWindow( hwnd );
		PostQuitMessage(0);
		return 0;
	}
	return DefWindowProc(hwnd, msg, wParam, lParam);

}
