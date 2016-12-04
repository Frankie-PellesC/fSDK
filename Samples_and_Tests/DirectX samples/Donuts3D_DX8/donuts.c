/*+@@file@@----------------------------------------------------------------*//*!
 \file		donuts.c
 \par Description 
            DirectInput semantic mapper version of Donuts3D game
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Dec  4 18:11:38 2016
 \date		Modified on Sun Dec  4 18:11:38 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#define STRICT
#define DIRECTINPUT_VERSION 0x800
#include <windows.h>
#include <windowsx.h>
#include <basetsd.h>
#include <cguid.h>
#include <tchar.h>
#include <mmsystem.h>
#include <stdio.h>
#include <math.h>
#include <D3DX8.h>
#include "D3DFile.h"
#include "D3DFont.h"
#include "D3DUtil.h"
#include "DIUtil.h"
#include "DMUtil.h"
#include "DXUtil.h"
#include "resource.h"
#include "gamemenu.h"
#include "donuts.h"

static HRESULT CALLBACK StaticInputAddDeviceCB( DeviceInfo* pDeviceInfo, const DIDEVICEINSTANCE* pdidi, LPVOID pParam );   
static BOOL    CALLBACK StaticConfigureInputDevicesCB( IUnknown* pUnknown, VOID* pUserData );

TCHAR*               strAppName;
HWND                 hWndMain;                // Main window
DWORD                dwScreenWidth;           // Dimensions for fullscreen modes
DWORD                dwScreenHeight;
D3DDISPLAYMODE       DesktopMode;
D3DFORMAT            d3dfmtFullscreen;        // Pixel format for fullscreen modes
D3DFORMAT            d3dfmtTexture;           // Pixel format for textures
BOOL                 bFullScreen;             // Whether app is fullscreen (or windowed)
BOOL                 bIsActive;               // Whether app is active
BOOL                 bDisplayReady;           // Whether display class is initialized
BOOL                 bMouseVisible;           // Whether mouse is visible
HBITMAP              hSplashBitmap;           // Bitmap for splash screen

DWORD                dwAppState;              // Current state the app is in
DWORD                dwLevel;                 // Current game level
DWORD                dwScore;                 // Current game score

// Player view mode
#define NUMVIEWMODES 3
CD3DCamera          *Camera;                  // Camera used for 3D scene
DWORD                dwViewMode;              // Which view mode is being used
FLOAT                fViewTransition;         // Amount used to transittion views
BOOL                 bAnimatingViewChange;    // Whether view is transitioning
BOOL                 bFirstPersonView;        // Whether view is first-person

// Bullet mode
FLOAT                fBulletRechargeTime;     // Recharge time for firing bullets
DWORD                dwBulletType;            // Current bullet type

// Display list and player ship
DisplayObject       *pDisplayList;            // Global display list
CShip               *pShip;                   // Player's display object

// DirectDraw/Direct3D objects
LPDIRECT3DDEVICE8       pd3dDevice;           // Class to handle D3D device
D3DPRESENT_PARAMETERS   d3dpp;
LPDIRECT3DSURFACE8      pConfigSurface;       // Surface for config'ing DInput devices
LPDIRECT3DVERTEXBUFFER8 pViewportVB;
LPDIRECT3DVERTEXBUFFER8 pSpriteVB;

// Support for the ship model
CD3DMesh            *pShipFileObject;         // Geometry model of player's ship
DWORD                dwNumShipTypes;
DWORD                dwCurrentShipType;

// DirectMusic objects
CMusicManager       *pMusicManager;           // Class to manage DMusic objects
CMusicSegment       *pBeginLevelSound;        // Sounds for the app
CMusicSegment       *pEngineIdleSound;
CMusicSegment       *pEngineRevSound;
CMusicSegment       *pShieldBuzzSound;
CMusicSegment       *pShipExplodeSound;
CMusicSegment       *pFireBulletSound;
CMusicSegment       *pShipBounceSound;
CMusicSegment       *pDonutExplodeSound;
CMusicSegment       *pPyramidExplodeSound;
CMusicSegment       *pCubeExplodeSound;
CMusicSegment       *pSphereExplodeSound;

// Game objects
LPDIRECT3DTEXTURE8   pGameTexture1;           // Texture with game object animations
LPDIRECT3DTEXTURE8   pGameTexture2;           // Texture with game object animations
CD3DMesh            *pTerrain;                // Geometry model of terrain
CD3DFont            *pGameFont;               // Font for displaying score, etc.
CD3DFont            *pMenuFont;               // Font for displaying in-game menus


// Menu objects
CMenuItem           *pMainMenu;               // Menu class for in-game menus
CMenuItem           *pQuitMenu;
CMenuItem           *pCurrentMenu;

// DirectInput objects
CInputDeviceManager *pInputDeviceManager;     // Class for managing DInput devices
UserInput            stUserInput;               // Struct for storing user input 
DIACTIONFORMAT       diafGame;                // Action format for game play
DIACTIONFORMAT       diafBrowser;             // Action format for menu navigation
BOOL                 bPaused;    

//-----------------------------------------------------------------------------
// Global access to the app (needed for the global WndProc())
//-----------------------------------------------------------------------------
//CMyApplication*    g_pApp  = NULL;
HINSTANCE          g_hInst = NULL;

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		WinMain
 \details	Application entry point
 \date		Created  on Sun Dec  4 18:12:28 2016
 \date		Modified on Sun Dec  4 18:12:28 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInst, LPSTR lpszCmdLine, int nCmdShow )
{
    g_hInst = hInstance;

    if( FAILED( CreateApp( hInstance ) ) )
        return 0;

    return Run();
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		InitApplication
 \date		Created  on Sun Dec  4 18:12:55 2016
 \date		Modified on Sun Dec  4 18:12:55 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void InitApplication(void)
{
    //g_pApp                  = this;
    strAppName            = _T("Donuts3D");
    hWndMain              = NULL;               
    dwScreenWidth         = 800;   
    dwScreenHeight        = 600;
    bFullScreen           = FALSE; 
    bIsActive             = FALSE; 
    bDisplayReady         = FALSE; 
    bMouseVisible         = FALSE;  
    hSplashBitmap         = NULL;  
    dwAppState            = APPSTATE_LOADSPLASH;              
    dwLevel               = 0;     
    dwScore               = 0;     
    dwViewMode            = 2;     
    fViewTransition       = 0.0f;  
    bAnimatingViewChange  = FALSE; 
    bFirstPersonView      = TRUE;  
    fBulletRechargeTime   = 0.0f;  
    dwBulletType          = 2;    
    pDisplayList          = NULL;          
    pShip                 = NULL;          
    pd3dDevice            = NULL; 
    pConfigSurface        = NULL; 
    pViewportVB           = NULL;
    pSpriteVB             = NULL;
    pShipFileObject       = NULL; 
    dwNumShipTypes        = 10L;
    dwCurrentShipType     = 1;
    pMusicManager         = NULL;  
    pBeginLevelSound      = NULL;  
    pEngineIdleSound      = NULL;
    pEngineRevSound       = NULL;
    pShieldBuzzSound      = NULL;
    pShipExplodeSound     = NULL;
    pFireBulletSound      = NULL;
    pShipBounceSound      = NULL;
    pDonutExplodeSound    = NULL;
    pPyramidExplodeSound  = NULL;
    pCubeExplodeSound     = NULL;
    pSphereExplodeSound   = NULL;
    pGameTexture1         = NULL; 
    pGameTexture2         = NULL; 
    pTerrain              = NULL;
    pGameFont             = NULL;
    pMenuFont             = NULL;
    pMainMenu             = NULL;    
    pQuitMenu             = NULL;
    pCurrentMenu          = NULL;
    pInputDeviceManager   = NULL;
    bPaused               = FALSE;
    Camera                = CD3DCameraNew();
    ZeroMemory( &stUserInput, sizeof(stUserInput) );
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CreateApp
 \date		Created  on Sun Dec  4 18:13:06 2016
 \date		Modified on Sun Dec  4 18:13:06 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CreateApp( HINSTANCE hInstance )
{
	InitApplication();
   // Register the window class
    WNDCLASS wndClass = { CS_DBLCLKS, StaticMsgProc, 0, 0, hInstance,
                          LoadIcon( hInstance, MAKEINTRESOURCE(DONUTS_ICON) ),
                          LoadCursor( NULL, IDC_ARROW ),
                          (HBRUSH)GetStockObject( BLACK_BRUSH ),
                          NULL, TEXT("DonutsClass") };
    RegisterClass( &wndClass );

    // Create our main window
    hWndMain = CreateWindowEx( 0, TEXT("DonutsClass"), TEXT("Donuts"),
                                 WS_VISIBLE|WS_POPUP|WS_CAPTION|WS_SYSMENU,
                                 0, 0, 640, 480, NULL, NULL,
                                 hInstance, NULL );
    if( NULL == hWndMain )
        return E_FAIL;
    UpdateWindow( hWndMain );

        // Create the game objects (display objects, sounds, input devices,
        // menus, etc.)
    if( FAILED( OneTimeSceneInit( hWndMain ) ) )
    {
        DestroyWindow( hWndMain );
        return E_FAIL;
    }

    return S_OK;
}

#pragma warn(disable:2115)
/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Run
 \details	Handles the message loop and calls FrameMove() and Render() 
            when idle.
 \date		Created  on Sun Dec  4 18:13:24 2016
 \date		Modified on Sun Dec  4 18:13:24 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
INT Run(void)
{
    // Load keyboard accelerators
    HACCEL hAccel = LoadAccelerators( NULL, MAKEINTRESOURCE(IDR_MAIN_ACCEL) );

    // Now we're ready to recieve and process Windows messages.
    BOOL bGotMsg;
    MSG  msg;
    PeekMessage( &msg, NULL, 0U, 0U, PM_NOREMOVE );

    while( WM_QUIT != msg.message  )
    {
        // Use PeekMessage() if the app is active, so we can use idle time to
        // render the scene. Else, use GetMessage() to avoid eating CPU time.
        if( bIsActive )
            bGotMsg = PeekMessage( &msg, NULL, 0U, 0U, PM_REMOVE );
        else
            bGotMsg = GetMessage( &msg, NULL, 0U, 0U );

        if( bGotMsg )
        {
            // Translate and dispatch the message
            TranslateMessage( &msg );
            DispatchMessage( &msg );
        }
        else
        {
            // Render a frame during idle time (no messages are waiting)
            if( bDisplayReady )
            {
                FrameMove();
                RenderFrame();
            }
        }
    }

    return (int)msg.wParam;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		StaticMsgProc
 \details	Static msg handler which passes messages to the application 
            class.
 \date		Created  on Sun Dec  4 18:15:47 2016
 \date		Modified on Sun Dec  4 18:15:47 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
LRESULT CALLBACK StaticMsgProc( HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam )
{
    return MsgProc( hWnd, uMsg, wParam, lParam );
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MsgProc
 \details	Callback for all Windows messages
 \date		Created  on Sun Dec  4 18:15:28 2016
 \date		Modified on Sun Dec  4 18:15:28 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
LRESULT MsgProc( HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam )
{
    switch( msg )
    {
        case WM_ACTIVATEAPP:
            bIsActive = (BOOL)wParam;
            bMouseVisible   = FALSE;

            if( bIsActive )
            {
                DXUtil_Timer( TIMER_START );
            }
            else
            {
                DXUtil_Timer( TIMER_STOP );
            }
            break;

        case WM_GETMINMAXINFO:
            ((MINMAXINFO*)lParam)->ptMinTrackSize.x = 320;
            ((MINMAXINFO*)lParam)->ptMinTrackSize.y = 200;
            break;

        case WM_SETCURSOR:
            if( !bMouseVisible && dwAppState!=APPSTATE_DISPLAYSPLASH )
                SetCursor( NULL );
            else
                SetCursor( LoadCursor( NULL, IDC_ARROW ) );
            return TRUE;

        case WM_SYSCOMMAND:
            // Prevent moving/sizing and power loss
            switch( wParam )
            {
                case SC_MOVE:
                case SC_SIZE:
                case SC_MAXIMIZE:
                case SC_KEYMENU:
                case SC_MONITORPOWER:
                        return 1;
            }
            break;

                case WM_SYSKEYDOWN:
            // Handle Alt+Enter to do mode-switching
            if( VK_RETURN == wParam )
            {
                SwitchDisplayModes( !bFullScreen, dwScreenWidth,
                                    dwScreenHeight );
            }
            break;

        case WM_KEYDOWN:
            // Move from splash screen when user presses a key
            if( dwAppState == APPSTATE_DISPLAYSPLASH )
            {
                if( wParam==VK_ESCAPE )
                {
                    // Escape keys exits the app
                    PostMessage( hWnd, WM_CLOSE, 0, 0 );
                    bDisplayReady = FALSE;
                }
                else
                {
                    // Get rid of splash bitmap
                    DeleteObject( hSplashBitmap );

                    // Advance to the first level
                    dwAppState = APPSTATE_BEGINLEVELSCREEN;
                    DXUtil_Timer( TIMER_START );
                    AdvanceLevel();
                }
            }
            return 0;

        case WM_PAINT:
            if( dwAppState == APPSTATE_DISPLAYSPLASH )
            {
                BITMAP bmp;
                RECT rc;
                GetClientRect( hWndMain, &rc );

                // Display the splash bitmap in the window
                HDC hDCWindow = GetDC( hWndMain );
                HDC hDCImage  = CreateCompatibleDC( NULL );
                SelectObject( hDCImage, hSplashBitmap );
                GetObject( hSplashBitmap, sizeof(bmp), &bmp );
                StretchBlt( hDCWindow, 0, 0, rc.right, rc.bottom,
                            hDCImage, 0, 0,
                            bmp.bmWidth, bmp.bmHeight, SRCCOPY );
                DeleteDC( hDCImage );
                ReleaseDC( hWndMain, hDCWindow );
            }
            else
            {
                if( bDisplayReady )
                {
                    DrawDisplayList();
                    ShowFrame();
                }
            }
            break;

        case WM_DESTROY:
            FinalCleanup();
            PostQuitMessage( 0 );
            bDisplayReady = FALSE;
            break;
    }

    return DefWindowProc( hWnd, msg, wParam, lParam );
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OneTimeSceneInit
 \date		Created  on Sun Dec  4 18:16:01 2016
 \date		Modified on Sun Dec  4 18:16:01 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT OneTimeSceneInit( HWND hWnd )
{
    HRESULT hr;

    // Initialize the DirectInput stuff
    if( FAILED( hr = CreateInputObjects( hWnd ) ) )
        return hr;

    // Initialize the DirectSound stuff. Note: if this call fails, we can
        // continue with no sound.
    CreateSoundObjects( hWnd );

    // Create the display objects
    if( FAILED( hr = CreateDisplayObjects( hWnd ) ) )
        return hr;

    // Add a ship to the displaylist
    pShip = CShipNew( (D3DXVECTOR3){0.0f,0.0f,0.0f} );
    pDisplayList = (DisplayObject *)pShip;

    // Construct the game menus
    ConstructMenus();

    // Initial program state is to display the splash screen
    dwAppState = APPSTATE_LOADSPLASH;

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		FinalCleanup
 \date		Created  on Sun Dec  4 18:16:14 2016
 \date		Modified on Sun Dec  4 18:16:14 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID FinalCleanup(void)
{
    DestroyDisplayObjects();
    DestroySoundObjects();
    DestroyInputObjects();
    DestroyMenus();
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		AdvanceLevel
 \date		Created  on Sun Dec  4 18:16:22 2016
 \date		Modified on Sun Dec  4 18:16:22 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID AdvanceLevel(void)
{
    // Up the level
    dwLevel++;

    srand( timeGetTime() );

    // Clear any stray objects (anything but the ship) out of the display list
    while( pShip->pNext )
    {
        DeleteFromList( pShip->pNext );
    }

    // Create donuts for the new level
    for( WORD i=0; i<(WORD)(2*dwLevel+3); i++ )
    {
        D3DVECTOR vPosition = {3.0f * rnd(-1.0f, 1.0f), 3.0f * rnd(-1.0f, 1.0f), 0.0f };
        D3DVECTOR vVelocity = { 0.0f, 0.0f, 0.0f };

        AddToList( (DisplayObject *)CDonutNew( vPosition, vVelocity ) );
    }

    // Delay for 2 seconds before displaying ship
    pShip->vPos       = (D3DXVECTOR3){ 0.0f, 0.0f, 0.0f };
    pShip->vVel       = (D3DXVECTOR3){ 0.0f, 0.0f, 0.0f };
    pShip->bVisible   = FALSE;
    pShip->bExploded  = FALSE;
    pShip->fShowDelay = 2.0f;

    // Stop engine sounds
    StopSound( pEngineIdleSound );
    StopSound( pEngineRevSound );
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DisplayObjectInit
 \date		Created  on Sun Dec  4 18:16:30 2016
 \date		Modified on Sun Dec  4 18:16:30 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static __inline void DisplayObjectInit( DisplayObject *this, DWORD type, D3DVECTOR p, D3DVECTOR v )
{
    // Set object attributes
    this->pNext    = NULL;
    this->pPrev    = NULL;
    this->bVisible = TRUE;
    this->dwType   = type;
    this->vPos     = p;
    this->vVel     = v;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DisplayObjectNew
 \date		Created  on Sun Dec  4 18:16:35 2016
 \date		Modified on Sun Dec  4 18:16:35 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
DisplayObject *DisplayObjectNew( DWORD type, D3DVECTOR p, D3DVECTOR v )
{
	DisplayObject *this = malloc(sizeof(DisplayObject));
	if (!this)
		return NULL;

    // Set object attributes
    DisplayObjectInit( this, type, p, v );

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DisplayObjectDelete
 \date		Created  on Sun Dec  4 18:16:40 2016
 \date		Modified on Sun Dec  4 18:16:40 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void DisplayObjectDelete( DisplayObject *this )
{
	C3DSpriteDelete((C3DSprite *)this);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		C3DSpriteInit
 \date		Created  on Sun Dec  4 18:16:45 2016
 \date		Modified on Sun Dec  4 18:16:45 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static __inline void C3DSpriteInit( C3DSprite *this, DWORD type, D3DVECTOR p, D3DVECTOR v )
{
    DisplayObjectInit( (DisplayObject *)this, type, p, v );
    this->dwColor = 0xffffffff;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		C3DSpriteNew
 \date		Created  on Sun Dec  4 18:16:58 2016
 \date		Modified on Sun Dec  4 18:16:58 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
C3DSprite *C3DSpriteNew( DWORD type, D3DVECTOR p, D3DVECTOR v )
{
	C3DSprite *this = malloc(sizeof(C3DSprite));
	if (!this)
		return NULL;

    C3DSpriteInit( this, type, p, v );

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		C3DSpriteDelete
 \date		Created  on Sun Dec  4 18:17:01 2016
 \date		Modified on Sun Dec  4 18:17:01 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void C3DSpriteDelete(C3DSprite *this)
{
	if (this)
		free(this);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CDonutNew
 \date		Created  on Sun Dec  4 18:17:10 2016
 \date		Modified on Sun Dec  4 18:17:10 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CDonut *CDonutNew( D3DVECTOR p, D3DVECTOR v )
{
	CDonut *this = malloc(sizeof(CDonut));
	if (!this)
		return NULL;

    C3DSpriteInit( (C3DSprite *)this, OBJ_DONUT, p, v );
    // Set object attributes
    this->dwTextureWidth   = DONUT_WIDTH;
    this->dwTextureHeight  = DONUT_HEIGHT;
    this->dwTextureOffsetX = 0;
    this->dwTextureOffsetY = 0;

    this->fSize            = this->dwTextureWidth / 256.0f;
    //this->vVel            += (D3DXVECTOR3( 0.5f * rnd(-1.0f, 1.0f), 0.5f * rnd(-1.0f, 1.0f), 0.0f );
    this->vVel.x          += 0.5f * rnd(-1.0f, 1.0f);
    this->vVel.y          += 0.5f * rnd(-1.0f, 1.0f);
    this->vVel.z          += 0.0f;

    this->delay            = rnd( 3.0f, 12.0f );
    this->dwFramesPerLine  = 8;
    this->frame            = rnd( 0.0f, 30.0f );
    this->fMaxFrame        = NUM_DONUT_FRAMES;

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CPyramidNew
 \date		Created  on Sun Dec  4 18:17:18 2016
 \date		Modified on Sun Dec  4 18:17:18 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CPyramid *CPyramidNew( D3DVECTOR p, D3DVECTOR v )
{
	CPyramid *this = malloc(sizeof(CPyramid));
	if (!this)
		return NULL;

    C3DSpriteInit( (C3DSprite *)this, OBJ_PYRAMID, p, v );
    // Set object attributes
    this->dwTextureWidth   = PYRAMID_WIDTH;
    this->dwTextureHeight  = PYRAMID_HEIGHT;
    this->dwTextureOffsetX = 0;
    this->dwTextureOffsetY = 0;

    this->fSize            = this->dwTextureWidth / 256.0f;
    this->vVel.x          += 0.5f * rnd(-1.0f, 1.0f);
    this->vVel.y          += 0.5f * rnd(-1.0f, 1.0f);
    this->vVel.z          += 0.0f;

    this->delay           = rnd( 12.0f, 40.0f );
    this->dwFramesPerLine = 8;
    this->frame           = rnd( 0.0f, 30.0f );
    this->fMaxFrame       = NUM_PYRAMID_FRAMES;

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CSphereNew
 \date		Created  on Sun Dec  4 18:17:28 2016
 \date		Modified on Sun Dec  4 18:17:28 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CSphere *CSphereNew( D3DVECTOR p, D3DVECTOR v )
{
	CSphere *this = malloc(sizeof(CSphere));
	if (!this)
		return NULL;

    C3DSpriteInit( (C3DSprite *)this, OBJ_SPHERE, p, v );
    // Set object attributes
    this->dwTextureWidth   = SPHERE_WIDTH;
    this->dwTextureHeight  = SPHERE_HEIGHT;
    this->dwTextureOffsetX = 0;
    this->dwTextureOffsetY = 128;

    this->fSize            = this->dwTextureWidth / 256.0f;
    this->vVel.x          += 0.5f * rnd(-1.0f, 1.0f);
    this->vVel.y          += 0.5f * rnd(-1.0f, 1.0f);
    this->vVel.z          += 0.0f;

    this->delay            = rnd( 60.0f, 80.0f );
    this->dwFramesPerLine  = 16;
    this->frame            = rnd( 0.0f, 30.0f );
    this->fMaxFrame        = NUM_SPHERE_FRAMES;

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CCubeNew
 \date		Created  on Sun Dec  4 18:17:37 2016
 \date		Modified on Sun Dec  4 18:17:37 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CCube *CCubeNew( D3DVECTOR p, D3DVECTOR v )
{
	CCube *this = malloc(sizeof(CCube));
	if (!this)
		return NULL;

    C3DSpriteInit( (C3DSprite *)this, OBJ_CUBE, p, v );
    // Set object attributes
    this->dwTextureWidth   = CUBE_WIDTH;
    this->dwTextureHeight  = CUBE_HEIGHT;
    this->dwTextureOffsetX = 0;
    this->dwTextureOffsetY = 176;

    this->fSize            = this->dwTextureWidth / 256.0f;
    this->vVel.x          += 0.5f * rnd(-1.0f, 1.0f);
    this->vVel.y          += 0.5f * rnd(-1.0f, 1.0f);
    this->vVel.z          += 0.0f;

    this->delay            = rnd( 32.0f, 80.0f );
    this->dwFramesPerLine  = 16;
    this->frame            = rnd( 0.0f, 30.0f );
    this->fMaxFrame        = NUM_CUBE_FRAMES;

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CCloudNew
 \date		Created  on Sun Dec  4 18:17:44 2016
 \date		Modified on Sun Dec  4 18:17:44 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CCloud *CCloudNew( D3DVECTOR p, D3DVECTOR v )
{
	CCloud *this = malloc(sizeof(CCloud));
	if (!this)
		return NULL;

    C3DSpriteInit( (C3DSprite *)this, OBJ_CLOUD, p, v );
    // Set object attributes
    this->dwTextureWidth   = CLOUD_WIDTH;
    this->dwTextureHeight  = CLOUD_WIDTH;
    this->dwTextureOffsetX = 224;
    this->dwTextureOffsetY = 224;

    this->fSize            = this->dwTextureWidth / 256.0f;
    this->delay            = rnd( 1.0f, 3.0f );
    this->dwFramesPerLine  = 1;
    this->frame            = 0.0f;
    this->fMaxFrame        = 1;

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CBulletNew
 \date		Created  on Sun Dec  4 18:17:52 2016
 \date		Modified on Sun Dec  4 18:17:52 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CBullet *CBulletNew( D3DVECTOR p, D3DVECTOR v, DWORD dwCType )
{
	CBullet *this = malloc(sizeof(CBullet));
	if (!this)
		return NULL;

    C3DSpriteInit( (C3DSprite *)this, OBJ_BULLET, p, v );
    // Set object attributes
    this->dwTextureWidth   = CLOUD_WIDTH;
    this->dwTextureHeight  = CLOUD_HEIGHT;
    this->dwTextureOffsetX = 224;
    this->dwTextureOffsetY = 224;

    if( dwCType == 0 )
        this->dwColor = 0xff2020ff;
    if( dwCType == 1 )
        this->dwColor = 0xff208020;
    if( dwCType == 2 )
        this->dwColor = 0xff208080;
    if( dwCType == 3 )
        this->dwColor = 0xff802020;

    this->fSize           = 4 / 256.0f;
    this->fMaxFrame       = NUM_BULLET_FRAMES;

    this->delay           = 1000.0f;
    this->dwFramesPerLine = 1;
    this->frame           = 0.0f;

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CShipNew
 \date		Created  on Sun Dec  4 18:18:01 2016
 \date		Modified on Sun Dec  4 18:18:01 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CShip *CShipNew( D3DVECTOR p )
{
	CShip *this = malloc(sizeof(CShip));
	if (!this)
		return NULL;

    C3DSpriteInit( (C3DSprite *)this, OBJ_SHIP, p, (D3DXVECTOR3){0,0,0} );
    this->fSize           = 10.0f / 256.0f;
    this->bExploded       = FALSE;
    this->fShowDelay      = 0.0f;

    this->fRoll           = 0.0f;
    this->fAngle          = 0.0f;

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		AddToList
 \date		Created  on Sun Dec  4 18:18:09 2016
 \date		Modified on Sun Dec  4 18:18:09 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID AddToList( DisplayObject* pObject )
{
    pObject->pNext = pDisplayList->pNext;
    pObject->pPrev = pDisplayList;

    if( pDisplayList->pNext )
        pDisplayList->pNext->pPrev = pObject;
    pDisplayList->pNext = pObject;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		IsDisplayListEmpty
 \date		Created  on Sun Dec  4 18:18:17 2016
 \date		Modified on Sun Dec  4 18:18:17 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL IsDisplayListEmpty(void)
{
    DisplayObject* pObject = pDisplayList->pNext;

    while( pObject )
    {
        if( pObject->dwType != OBJ_BULLET )
            return FALSE;

        pObject = pObject->pNext;
    }

    return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		LoadTerrainModel
 \date		Created  on Sun Dec  4 18:18:25 2016
 \date		Modified on Sun Dec  4 18:18:25 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT LoadTerrainModel(void)
{
	LPDIRECT3DVERTEXBUFFER8 pVB;
	DWORD dwNumVertices;
	MODELVERTEX *pVertices;

	// Delete old object
	SAFE_DELETE(pTerrain);

	// Create new object
	pTerrain = CD3DMeshNew(_T("CD3DFile_Mesh"));
	if (FAILED(CD3DMeshCreate(pTerrain, pd3dDevice, _T("SeaFloor.x"))))
		return E_FAIL;

	// Set the FVF to a reasonable type
	CD3DMeshSetFVF(pTerrain, pd3dDevice, D3DFVF_MODELVERTEX);

	// Gain access to the model's vertices
	//pTerrain->GetSysMemMesh()->GetVertexBuffer( &pVB );
	CD3DMeshGetSysMemMesh(pTerrain)->lpVtbl->GetVertexBuffer(CD3DMeshGetSysMemMesh(pTerrain), &pVB);
    dwNumVertices = CD3DMeshGetSysMemMesh(pTerrain)->lpVtbl->GetNumVertices(CD3DMeshGetSysMemMesh(pTerrain));
	pVB->lpVtbl->Lock(pVB, 0, 0, (BYTE **) & pVertices, 0);

	for (DWORD i = 0; i < dwNumVertices; i++)
	{
		pVertices[i].p.x *= 0.1f;
		pVertices[i].p.z *= 0.1f;
		pVertices[i].p.y = HeightField(pVertices[i].p.x, pVertices[i].p.z);
	}

	// Done with the vertex buffer
	pVB->lpVtbl->Unlock(pVB);
	pVB->lpVtbl->Release(pVB);

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		LoadShipModel
 \details	Loads the 3D geometry for the player's ship
 \date		Created  on Sun Dec  4 18:18:37 2016
 \date		Modified on Sun Dec  4 18:18:37 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT LoadShipModel(void)
{
	LPDIRECT3DVERTEXBUFFER8 pVB;
	DWORD dwNumVertices;
	MODELVERTEX *pVertices;
	D3DXVECTOR3 vCenter;
	FLOAT fRadius;

	// Delete old object
	SAFE_DELETE(pShipFileObject);

	// Create new object
	pShipFileObject = CD3DMeshNew(_T("CD3DFile_Mesh"));
	if (FAILED(CD3DMeshCreate(pShipFileObject, pd3dDevice, g_strShipFiles[dwCurrentShipType])))
		return E_FAIL;

	// Set the FVF to a reasonable type
	CD3DMeshSetFVF(pShipFileObject, pd3dDevice, D3DFVF_MODELVERTEX);

	// Gain access to the model's vertices
	CD3DMeshGetSysMemMesh(pShipFileObject)->lpVtbl->GetVertexBuffer(CD3DMeshGetSysMemMesh(pShipFileObject), &pVB);
	dwNumVertices = CD3DMeshGetSysMemMesh(pShipFileObject)->lpVtbl->GetNumVertices(CD3DMeshGetSysMemMesh(pShipFileObject));
	pVB->lpVtbl->Lock(pVB, 0, 0, (BYTE **) & pVertices, 0);

	// Scale the new object to a standard size  
	D3DXComputeBoundingSphere(pVertices, dwNumVertices, D3DFVF_MODELVERTEX, &vCenter, &fRadius);
	for (DWORD i = 0; i < dwNumVertices; i++)
	{
		pVertices[i].p.x /= 12 * fRadius;
		pVertices[i].p.y /= 12 * fRadius;
		pVertices[i].p.z /= 12 * fRadius;
	}

	// Done with the vertex buffer
	pVB->lpVtbl->Unlock(pVB);
	pVB->lpVtbl->Release(pVB);

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SwitchModel
 \date		Created  on Sun Dec  4 18:18:50 2016
 \date		Modified on Sun Dec  4 18:18:50 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT SwitchModel(void)
{
	// Select next model
	dwCurrentShipType++;
	if (dwCurrentShipType >= dwNumShipTypes)
		dwCurrentShipType = 0L;

	// Create new object
	if (SUCCEEDED(LoadShipModel()))
	{
		// Initialize the new object's device dependent objects
		if (SUCCEEDED(CD3DMeshRestoreDeviceObjects(pShipFileObject, pd3dDevice)))
			return S_OK;
	}

	// Return with a fatal error
	PostMessage(hWndMain, WM_CLOSE, 0, 0);
	return E_FAIL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		FrameMove
 \date		Created  on Sun Dec  4 18:18:57 2016
 \date		Modified on Sun Dec  4 18:18:57 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT FrameMove(void)
{
	switch (dwAppState)
	{
		case APPSTATE_LOADSPLASH:
			// Set the app state to displaying splash
			dwAppState = APPSTATE_DISPLAYSPLASH;

		// Draw the splash bitmap
			hSplashBitmap = (HBITMAP)LoadImage(GetModuleHandle(NULL), TEXT("SPLASH"), IMAGE_BITMAP, 0, 0, LR_CREATEDIBSECTION);
			SendMessage(hWndMain, WM_PAINT, 0, 0);
			break;

		case APPSTATE_ACTIVE:
			UpdateDisplayList();
			CheckForHits();

			if (IsDisplayListEmpty())
			{
				AdvanceLevel();
				dwAppState = APPSTATE_BEGINLEVELSCREEN;
			}
			break;

		case APPSTATE_BEGINLEVELSCREEN:
			Play_a_Sound(pBeginLevelSound);
			DXUtil_Timer(TIMER_RESET);
			dwAppState = APPSTATE_DISPLAYLEVELSCREEN;
			break;

		case APPSTATE_DISPLAYLEVELSCREEN:
			// Only show the Level intro screen for 3 seconds

			if (DXUtil_Timer(TIMER_GETAPPTIME) > 3.0f)
			{
				dwAppState = APPSTATE_ACTIVE;
			}
			break;
	}

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		RenderFrame
 \date		Created  on Sun Dec  4 18:19:07 2016
 \date		Modified on Sun Dec  4 18:19:07 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT RenderFrame(void)
{
	// Test cooperative level
	HRESULT hr;

	// Test the cooperative level to see if it's okay to render
	if (FAILED(hr = pd3dDevice->lpVtbl->TestCooperativeLevel(pd3dDevice)))
	{
		// If the device was lost, do not render until we get it back
		if (D3DERR_DEVICELOST == hr)
			return S_OK;

		// Check if the device needs to be resized.
		if (D3DERR_DEVICENOTRESET == hr)
		{
			bDisplayReady = FALSE;

			InvalidateDisplayObjects();

			// Resize the device
			if (SUCCEEDED(pd3dDevice->lpVtbl->Reset(pd3dDevice, &d3dpp)))
			{
				// Initialize the app's device-dependent objects
				if (SUCCEEDED(RestoreDisplayObjects()))
				{
					bDisplayReady = TRUE;
					return S_OK;
				}
			}

			PostMessage(hWndMain, WM_CLOSE, 0, 0);
		}
		return hr;
	}

	// Render the scene based on current state of the app
	switch (dwAppState)
	{
		case APPSTATE_LOADSPLASH:
			// Nothing to render while loading the splash screen
			break;

		case APPSTATE_DISPLAYSPLASH:
			// Rendering of the splash screen is handled by WM_PAINT
			break;

		case APPSTATE_BEGINLEVELSCREEN:
			// Nothing to render while starting sound to advance a level
			break;

		case APPSTATE_DISPLAYLEVELSCREEN:
			DisplayLevelIntroScreen(dwLevel);
			ShowFrame();
			break;

		case APPSTATE_ACTIVE:
			DrawDisplayList();
			ShowFrame();
			break;
	}

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DarkenScene
 \date		Created  on Sun Dec  4 18:19:19 2016
 \date		Modified on Sun Dec  4 18:19:19 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID DarkenScene(FLOAT fAmount)
{
	if (pd3dDevice == NULL)
		return;

	// Setup a dark square to cover the scene
	DWORD dwAlpha = (fAmount < 1.0f) ? ((DWORD) (255 * fAmount)) << 24L : 0xff000000;
	SCREENVERTEX *v;
	pViewportVB->lpVtbl->Lock(pViewportVB, 0, 0, (BYTE **) & v, 0);
	v[0].color = v[1].color = v[2].color = v[3].color = dwAlpha;
	pViewportVB->lpVtbl->Unlock(pViewportVB);

	// Set renderstates
	pd3dDevice->lpVtbl->SetRenderState(pd3dDevice, D3DRS_ALPHABLENDENABLE, TRUE);
	pd3dDevice->lpVtbl->SetRenderState(pd3dDevice, D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
	pd3dDevice->lpVtbl->SetRenderState(pd3dDevice, D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
	pd3dDevice->lpVtbl->SetRenderState(pd3dDevice, D3DRS_ZENABLE, FALSE);
	pd3dDevice->lpVtbl->SetTexture(pd3dDevice, 0, NULL);

	// Draw a big, gray square
	pd3dDevice->lpVtbl->SetVertexShader(pd3dDevice, D3DFVF_SCREENVERTEX);
	pd3dDevice->lpVtbl->SetStreamSource(pd3dDevice, 0, pViewportVB, sizeof(SCREENVERTEX));
	pd3dDevice->lpVtbl->DrawPrimitive(pd3dDevice, D3DPT_TRIANGLESTRIP, 0, 2);

	// Restore states
	pd3dDevice->lpVtbl->SetTextureStageState(pd3dDevice, 0, D3DTSS_COLORARG1, D3DTA_TEXTURE);
	pd3dDevice->lpVtbl->SetTextureStageState(pd3dDevice, 0, D3DTSS_COLORARG2, D3DTA_DIFFUSE);
	pd3dDevice->lpVtbl->SetTextureStageState(pd3dDevice, 0, D3DTSS_COLOROP, D3DTOP_MODULATE);
	pd3dDevice->lpVtbl->SetTextureStageState(pd3dDevice, 0, D3DTSS_ALPHAARG1, D3DTA_TEXTURE);
	pd3dDevice->lpVtbl->SetTextureStageState(pd3dDevice, 0, D3DTSS_ALPHAARG2, D3DTA_DIFFUSE);
	pd3dDevice->lpVtbl->SetTextureStageState(pd3dDevice, 0, D3DTSS_ALPHAOP, D3DTOP_MODULATE);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		RenderFieryText
 \date		Created  on Sun Dec  4 18:19:31 2016
 \date		Modified on Sun Dec  4 18:19:31 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID RenderFieryText(CD3DFont *pFont, TCHAR *strText)
{
	if (NULL == pFont || NULL == strText)
		return;

	// Render the fiery portion of the text
	for (DWORD i = 0; i < 20; i++)
	{
		FLOAT x = -0.5f;
		FLOAT y = 1.8f;

		FLOAT v1 = rnd(0.0f, 1.0f);
		FLOAT red1 = v1 * v1 * v1;
		FLOAT grn1 = v1 * v1;
		FLOAT blu1 = v1;

		FLOAT a1 = rnd(0.0f, 2 * D3DX_PI);
		FLOAT r1 = v1 * 0.05f;

		x += r1 * sinf(a1);
		y += r1 * cosf(a1);

		if (cosf(a1) < 0.0f)
			y -= 2 * r1 * cosf(a1) * cosf(a1);

		DWORD r = (CHAR) ((1.0f - red1) * 256.0f);
		DWORD g = (CHAR) ((1.0f - grn1) * 256.0f);
		DWORD b = (CHAR) ((1.0f - blu1) * 256.0f);
		DWORD a = (CHAR)255;
		DWORD dwColor = (a << 24) + (r << 16) + (g << 8) + b;

		pd3dDevice->lpVtbl->SetRenderState(pd3dDevice, D3DRS_SRCBLEND, D3DBLEND_ONE);
		pd3dDevice->lpVtbl->SetRenderState(pd3dDevice, D3DRS_DESTBLEND, D3DBLEND_ONE);

		CD3DFontDrawTextScaled(pFont, x, y, 0.9f, 0.25f, 0.25f, dwColor, strText, D3DFONT_FILTERED);
	}

	// Render the plain, black portion of the text
	pd3dDevice->lpVtbl->SetRenderState(pd3dDevice, D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
	pd3dDevice->lpVtbl->SetRenderState(pd3dDevice, D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
	FLOAT x = -0.5f;
	FLOAT y = 1.8f;
	CD3DFontDrawTextScaled(pFont, x, y, 0.9f, 0.25f, 0.25f, 0xff000000, strText, D3DFONT_FILTERED);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DisplayLevelIntroScreen
 \date		Created  on Sun Dec  4 18:19:38 2016
 \date		Modified on Sun Dec  4 18:19:38 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID DisplayLevelIntroScreen(DWORD dwLevel)
{
	if (pd3dDevice == NULL)
		return;

	// Begin the scene
	if (SUCCEEDED(pd3dDevice->lpVtbl->BeginScene(pd3dDevice)))
	{
		// Erase the screen
		pd3dDevice->lpVtbl->Clear(pd3dDevice, 0L, NULL, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, 0L, 1.0f, 0L);

		TCHAR strLevel[80];
		_stprintf(strLevel, sizeof(strLevel), _T("Level %ld"), dwLevel);
		RenderFieryText(pGameFont, strLevel);

		DarkenScene(1.0f - sinf(D3DX_PI * DXUtil_Timer(TIMER_GETAPPTIME) / 3.0f));

		// End the scene
		pd3dDevice->lpVtbl->EndScene(pd3dDevice);
	}
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		UpdateDisplayList
 \date		Created  on Sun Dec  4 18:19:49 2016
 \date		Modified on Sun Dec  4 18:19:49 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID UpdateDisplayList(void)
{
	DisplayObject *pObject;

	// Get the time lapsed since the last frame
	FLOAT fTimeLapsed = DXUtil_Timer(TIMER_GETELAPSEDTIME);

	// Read input from the joystick/keyboard/etc
	UpdateInput(&stUserInput);

	// Check for game menu condition
	if (pCurrentMenu)
	{
		UpdateMenus();
		return;
	}

	if (bPaused)
		return;

	if (pShip->fShowDelay > 0.0f)
	{
		pShip->fShowDelay -= fTimeLapsed;

		if (pShip->fShowDelay <= 0.0f)
		{
			pShip->vVel = (D3DXVECTOR3){0.0f, 0.0f, 0.0f};
			pShip->fShowDelay = 0.0f;
			pShip->bVisible = TRUE;
			pShip->bExploded = FALSE;
		}
	}

	// Update the ship
	if (pShip->bVisible)
	{
		pShip->vPos.x += pShip->vVel.x * fTimeLapsed;
		pShip->vPos.y += pShip->vVel.y * fTimeLapsed;
		pShip->vPos.z += pShip->vVel.z * fTimeLapsed;
	}

	// Apply banking motion
	pShip->fRoll += stUserInput.fAxisRotateLR * 1.0f * fTimeLapsed;
	if (pShip->fRoll > 0.5f)
		pShip->fRoll = 0.5f;
	if (pShip->fRoll < -0.5f)
		pShip->fRoll = -0.5f;

	pShip->fAngle += 5 * pShip->fRoll * fTimeLapsed;

	if (stUserInput.fAxisRotateLR < 0.2f && stUserInput.fAxisRotateLR > -0.2f)
	{
		pShip->fRoll *= 0.95f;
	}

	// Slow the ship down
	pShip->vVel.x *= 0.97f;
	pShip->vVel.y *= 0.97f;

	// Apply thrust
	pShip->vVel.x += sinf(pShip->fAngle) * stUserInput.fAxisMoveUD * 5.0f * fTimeLapsed;
	pShip->vVel.y += -cosf(pShip->fAngle) * stUserInput.fAxisMoveUD * 5.0f * fTimeLapsed;

	// Play thrusting sounds
	{
		static BOOL bPlayingEngineRevSound = FALSE;

		if (stUserInput.fAxisMoveUD > 0.5f)
		{
			if (FALSE == bPlayingEngineRevSound)
			{
				bPlayingEngineRevSound = TRUE;
			}
		}
		else
		{
			if (TRUE == bPlayingEngineRevSound)
			{
				StopSound(pEngineRevSound);
				bPlayingEngineRevSound = FALSE;
			}
		}
	}

	fBulletRechargeTime -= fTimeLapsed;

	// Fire a bullet
	if (stUserInput.bButtonFireWeapons && fBulletRechargeTime <= 0.0f)
	{
		// Ship must be visible and have no shields on to fire
		if (pShip->bVisible)
		{
			// Bullets cost one score point
			if (dwScore)
				dwScore--;

			// Play the "fire" effects
			Play_a_Sound(pFireBulletSound);

			// Add a bullet to the display list
			if (dwBulletType == 0)
			{
				D3DXVECTOR3 vDir = (D3DXVECTOR3){sinf(pShip->fAngle), -cosf(pShip->fAngle), 0.0f};

				AddToList((DisplayObject *)CBulletNew(pShip->vPos,
							(D3DXVECTOR3){pShip->vVel.x +2*vDir.x, pShip->vVel.y +2*vDir.y, pShip->vVel.z +2*vDir.z}, 0));
				fBulletRechargeTime = 0.05f;
			}
			else if (dwBulletType == 1)
			{
				D3DXVECTOR3 vOffset = (D3DXVECTOR3){cosf(pShip->fAngle)*0.02f, sinf(pShip->fAngle)*0.02f, 0.0f};
				D3DXVECTOR3 vDir    = (D3DXVECTOR3){sinf(pShip->fAngle), -cosf(pShip->fAngle), 0.0f};

				AddToList((DisplayObject *)CBulletNew((D3DXVECTOR3){pShip->vPos.x + vOffset.x, pShip->vPos.y + vOffset.y, pShip->vPos.z + vOffset.z},
												(D3DXVECTOR3){pShip->vVel.x + 2 * vDir.x, pShip->vVel.y + 2 * vDir.y, pShip->vVel.z + 2 * vDir.z}, 1));
				AddToList((DisplayObject *)CBulletNew((D3DXVECTOR3){pShip->vPos.x - vOffset.x, pShip->vPos.y - vOffset.y, pShip->vPos.z - vOffset.z},
												(D3DXVECTOR3){pShip->vVel.x + 2 * vDir.x, pShip->vVel.y + 2 * vDir.y, pShip->vVel.z + 2 * vDir.z}, 1));
				fBulletRechargeTime = 0.10f;
			}
			else if (dwBulletType == 2)
			{
				FLOAT fBulletAngle = pShip->fAngle + 0.2f * rnd(1.0f, -1.0f);
				D3DXVECTOR3 vDir = (D3DXVECTOR3){sinf(fBulletAngle), -cosf(fBulletAngle), 0.0f};

				AddToList((DisplayObject *)CBulletNew(pShip->vPos, (D3DXVECTOR3){pShip->vVel.x+2*vDir.x, pShip->vVel.y+2*vDir.y, pShip->vVel.z+2*vDir.z}, 2));
				fBulletRechargeTime = 0.01f;
			}
			else
			{
				for (DWORD i = 0; i < 50; i++)
				{
					FLOAT fBulletAngle = pShip->fAngle + D3DX_PI * rnd(1.0f, -1.0f);
					D3DXVECTOR3 vDir = (D3DXVECTOR3){sinf(fBulletAngle), -cosf(fBulletAngle), 0.0f};

					AddToList((DisplayObject *)CBulletNew(pShip->vPos, (D3DXVECTOR3){2*vDir.x, 2*vDir.y, 2*vDir.z}, 3));
				}

				fBulletRechargeTime = 1.0f;
			}
		}
	}

	// Keep ship in bounds
	if (pShip->vPos.x < -5.0f || pShip->vPos.x > +5.0f || pShip->vPos.y < -5.0f || pShip->vPos.y > +5.0f)
	{
		D3DXVec3Normalize(&pShip->vVel, &pShip->vPos);
		pShip->vVel.x *= -1.0f;
		pShip->vVel.y *= -1.0f;
		pShip->vVel.z *= -1.0f;
	}

	// Finally, move all objects on the screen
	for (pObject = pDisplayList; pObject; pObject = pObject->pNext)
	{
		// The ship is moved by the code above
		if (pObject->dwType == OBJ_SHIP)
			continue;

		C3DSprite *pSprite = (C3DSprite *)pObject;

		// Update the position and animation frame
		pSprite->vPos.x += pSprite->vVel.x * fTimeLapsed;
		pSprite->vPos.y += pSprite->vVel.y * fTimeLapsed;
		pSprite->vPos.z += pSprite->vVel.z * fTimeLapsed;
		pSprite->frame  += pSprite->delay * fTimeLapsed;

		// If this is an "expired" cloud, removed it from list
		if (pObject->dwType == OBJ_CLOUD)
		{
			if (pSprite->frame >= pSprite->fMaxFrame)
			{
				DisplayObject *pVictim = pObject;
				pObject = pObject->pPrev;
				DeleteFromList(pVictim);
			}
		}
		else if (pObject->dwType == OBJ_BULLET)
		{
			// Remove bullets when they leave the scene
			if (pObject->vPos.x < -6.0f || pObject->vPos.x > +6.0f || pObject->vPos.y < -6.0f || pObject->vPos.y > +6.0f)
			{
				DisplayObject *pVictim = pObject;
				pObject = pObject->pPrev;
				DeleteFromList(pVictim);
			}
		}
		else if (pObject->dwType != OBJ_CLOUD)
		{
			// Keep object in bounds in X
			if (pObject->vPos.x < -4.0f || pObject->vPos.x > +4.0f)
			{
				if (pObject->vPos.x < -4.0f)
					pObject->vPos.x = -4.0f;
				if (pObject->vPos.x > +4.0f)
					pObject->vPos.x = +4.0f;
				pObject->vVel.x = -pObject->vVel.x;
			}

			// Keep object in bounds in Y
			if (pObject->vPos.y < -4.0f || pObject->vPos.y > +4.0f)
			{
				if (pObject->vPos.y < -4.0f)
					pObject->vPos.y = -4.0f;
				if (pObject->vPos.y > +4.0f)
					pObject->vPos.y = +4.0f;
				pObject->vVel.y = -pObject->vVel.y;
			}

			// Keep animation frame in bounds
			if (pSprite->frame < 0.0f)
				pSprite->frame += pSprite->fMaxFrame;
			if (pSprite->frame >= pSprite->fMaxFrame)
				pSprite->frame -= pSprite->fMaxFrame;
		}
	}

	D3DXVECTOR3 vEyePt[NUMVIEWMODES];
	D3DXVECTOR3 vLookatPt[NUMVIEWMODES];
	D3DXVECTOR3 vUpVec[NUMVIEWMODES];

	// Update the view
	if (stUserInput.bDoChangeView)
	{
		bAnimatingViewChange = TRUE;
		stUserInput.bDoChangeView = FALSE;
	}

	if (bAnimatingViewChange)
	{
		fViewTransition += fTimeLapsed;

		if (fViewTransition >= 1.0f)
		{
			dwViewMode++;
			if (dwViewMode >= NUMVIEWMODES)
				dwViewMode = 0;

			fViewTransition = 0.0f;
			bAnimatingViewChange = FALSE;
		}
	}

	FLOAT fX = pShip->vPos.x;
	FLOAT fZ = -pShip->vPos.y;
	FLOAT fY = 0.1f + HeightField(fX, fZ);

	// View mode 0 (third person)
	vEyePt[0]    = (D3DXVECTOR3){fX - sinf(pShip->fAngle) / 2, fY + 0.2f, fZ - cosf(pShip->fAngle) / 2};
	vLookatPt[0] = (D3DXVECTOR3){fX + sinf(pShip->fAngle) / 2, fY, fZ + cosf(pShip->fAngle) / 2};
	vUpVec[0]    = (D3DXVECTOR3){0.0f, 1.0f, 0.0f};

	// View mode 1 (first person)
	FLOAT fX2 = fX + sinf(pShip->fAngle);
	FLOAT fZ2 = fZ + cosf(pShip->fAngle);
	FLOAT fY2 = 0.1f + HeightField(fX2, fZ2);
	vEyePt[1]    = (D3DXVECTOR3){fX, fY + 0.1f, fZ};
	vLookatPt[1] = (D3DXVECTOR3){fX2, fY2 + 0.1f, fZ2};
	vUpVec[1]    = (D3DXVECTOR3){0.0f, 1.0f, 0.0f};

	// View mode 2 (top down view)
	vEyePt[2]    = (D3DXVECTOR3){fX + 1.5f, fY + 1.5f, fZ + 1.5f};
	vLookatPt[2] = (D3DXVECTOR3){fX, fY, fZ};
	vUpVec[2]    = (D3DXVECTOR3){0.0f, 1.0f, 0.0f};

	DWORD start = dwViewMode;
	DWORD end = (start < (NUMVIEWMODES - 1)) ? dwViewMode + 1 : 0;

	if (start == 1 && fViewTransition < 0.2f)
		bFirstPersonView = TRUE;
	else
		bFirstPersonView = FALSE;

	D3DXVECTOR3 vEyePt0;
	D3DXVECTOR3 vLookatPt0;
	D3DXVECTOR3 vUpVec0;
	vEyePt0.x    = (1.0f - fViewTransition) * vEyePt[start].x    + fViewTransition * vEyePt[end].y;
	vEyePt0.y    = (1.0f - fViewTransition) * vEyePt[start].x    + fViewTransition * vEyePt[end].y;
	vEyePt0.z    = (1.0f - fViewTransition) * vEyePt[start].x    + fViewTransition * vEyePt[end].y;
	vLookatPt0.x = (1.0f - fViewTransition) * vLookatPt[start].x + fViewTransition * vLookatPt[end].x;
	vLookatPt0.y = (1.0f - fViewTransition) * vLookatPt[start].y + fViewTransition * vLookatPt[end].y;
	vLookatPt0.z = (1.0f - fViewTransition) * vLookatPt[start].z + fViewTransition * vLookatPt[end].z;
	vUpVec0.x    = (1.0f - fViewTransition) * vUpVec[start].x    + fViewTransition * vUpVec[end].z;
	vUpVec0.y    = (1.0f - fViewTransition) * vUpVec[start].y    + fViewTransition * vUpVec[end].z;
	vUpVec0.z    = (1.0f - fViewTransition) * vUpVec[start].z    + fViewTransition * vUpVec[end].z;

	// Shake screen if ship exploded
	if (pShip->bExploded == TRUE)
	{
		vEyePt0.x += rnd(1.0f, -1.0f) * pShip->fShowDelay / 50.0f;
		vEyePt0.y += rnd(1.0f, -1.0f) * pShip->fShowDelay / 50.0f;
		vEyePt0.z += rnd(1.0f, -1.0f) * pShip->fShowDelay / 50.0f;
	}

	CD3DCameraSetViewParams(Camera, &vEyePt0, &vLookatPt0, &vUpVec0);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CheckForHits
 \date		Created  on Sun Dec  4 18:20:07 2016
 \date		Modified on Sun Dec  4 18:20:07 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID CheckForHits(void)
{
    DisplayObject* pObject;
    DisplayObject* pBullet;

    for( pBullet = pDisplayList; pBullet; pBullet = pBullet->pNext )
    {
        BOOL bBulletHit = FALSE;

        // Only bullet objects and the ship (if shieleds are on) can hit
        // other objects. Skip all others.
        if( (pBullet->dwType != OBJ_BULLET) && (pBullet->dwType != OBJ_SHIP) )
            continue;

        for( pObject = pDisplayList->pNext; pObject; pObject = pObject->pNext )
        {
            // Only trying to hit explodable targets
            if( ( pObject->dwType != OBJ_DONUT ) &&
                ( pObject->dwType != OBJ_PYRAMID ) &&
                ( pObject->dwType != OBJ_SPHERE ) &&
                ( pObject->dwType != OBJ_CUBE ) )
                continue;

            // Check if bullet is in radius of object
            FLOAT fDistance = D3DXVec3Length( &((D3DXVECTOR3){pBullet->vPos.x-pObject->vPos.x,
										pBullet->vPos.y-pObject->vPos.y, pBullet->vPos.z-pObject->vPos.z}) );

            if( fDistance < (pObject->fSize+pBullet->fSize) )
            {
                // The object was hit
                switch( pObject->dwType )
                {
                    case OBJ_DONUT:
                        Play_a_Sound( pDonutExplodeSound );
                        AddToList( (DisplayObject *)CPyramidNew( pObject->vPos, pObject->vVel ) );
                        AddToList( (DisplayObject *)CPyramidNew( pObject->vPos, pObject->vVel ) );
                        AddToList( (DisplayObject *)CPyramidNew( pObject->vPos, pObject->vVel ) );
                        AddToList( (DisplayObject *)CPyramidNew( pObject->vPos, pObject->vVel ) );
                        dwScore += 10;
                        break;

                    case OBJ_PYRAMID:
                        Play_a_Sound( pPyramidExplodeSound );
                        AddToList( (DisplayObject *)CCubeNew( pObject->vPos, pObject->vVel ) );
                        AddToList( (DisplayObject *)CCubeNew( pObject->vPos, pObject->vVel ) );
                        AddToList( (DisplayObject *)CCubeNew( pObject->vPos, pObject->vVel ) );
                        AddToList( (DisplayObject *)CCubeNew( pObject->vPos, pObject->vVel ) );
                        dwScore += 20;
                        break;

                    case OBJ_CUBE:
                        Play_a_Sound( pCubeExplodeSound );
                        AddToList( (DisplayObject *)CSphereNew( pObject->vPos, pObject->vVel ) );
                        dwScore += 40;
                        break;

                    case OBJ_SPHERE:
                        Play_a_Sound( pSphereExplodeSound );
                        dwScore += 20;
                        break;
                }

                // Add explosion effects to scene
				for (DWORD c = 0; c < 4; c++)
					AddToList((DisplayObject *)CCloudNew(pObject->vPos, (D3DXVECTOR3){0.05f * rnd(1.0f, -1.0), 0.05f * rnd(1.0f, -1.0), 0.0f}));

                // Remove the victim from the scene
                DisplayObject* pVictim = pObject;
                pObject = pObject->pPrev;
                DeleteFromList( pVictim );

                bBulletHit = TRUE;
            }

            if( bBulletHit )
            {
                if( pBullet->dwType == OBJ_SHIP )
                {
                    bBulletHit = FALSE;

                    if( pShip->bVisible )
                    {
                        // Ship has exploded
                        Play_a_Sound( pShipExplodeSound );

                        if( dwScore < 150 )
                            dwScore = 0;
                        else
                            dwScore -= 150;

                        // Add explosion debris to scene
                        for( DWORD sphere=0; sphere<4; sphere++ )
                            AddToList( (DisplayObject *)CSphereNew( pShip->vPos, pObject->vVel ) );

                        for( DWORD bullet=0; bullet<20; bullet++ )
                        {
                            FLOAT     angle     = D3DX_PI * rnd(1.0f, -1.0f);
                            D3DVECTOR vDir      = (D3DXVECTOR3){cosf(angle),sinf(angle),0.0f};
                            AddToList( (DisplayObject *)CBulletNew( pShip->vPos,
														(D3DXVECTOR3){500.0f*vDir.x, 500.0f*vDir.y, 500.0f*vDir.z}, 0 ) );
                        }

                        for( DWORD cloud=0; cloud<100; cloud++ )
                        {
                            FLOAT     magnitude = 1.0f + 0.1f*rnd(1.0f, -1.0f);
                            FLOAT     angle     = D3DX_PI * rnd(1.0f, -1.0f);
                            D3DVECTOR vDir      = (D3DXVECTOR3){cosf(angle),sinf(angle),0.0f};

                            AddToList((DisplayObject *)CCloudNew( pShip->vPos, (D3DXVECTOR3){magnitude*vDir.x, magnitude*vDir.y, magnitude*vDir.z} ) );
                        }

                        // Clear out ship params
                        pShip->vVel.x = 0.0f;
                        pShip->vVel.y = 0.0f;
                        stUserInput.fAxisMoveUD       = 0.0f;
                        stUserInput.fAxisRotateLR         = 0.0f;

                        // Delay for 2 seconds before displaying ship
                        pShip->fShowDelay = 2.0f;
                        pShip->bVisible   = FALSE;
                        pShip->bExploded  = TRUE;
                    }
                }

                break;
            }
        }

        if( bBulletHit )
        {
            DisplayObject* pLastBullet = pBullet;
            pBullet = pBullet->pPrev;
            DeleteFromList( pLastBullet );
        }
    }
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DrawDisplayList
 \date		Created  on Sun Dec  4 18:20:20 2016
 \date		Modified on Sun Dec  4 18:20:20 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID DrawDisplayList(void)
{
    TCHAR strBuffer[80];

    // Set the world matrix
    D3DXMATRIX matWorld;
    D3DXMatrixIdentity( &matWorld );
    pd3dDevice->lpVtbl->SetTransform( pd3dDevice, D3DTS_WORLD, &matWorld );

    // Set the app view matrix for normal viewing
    pd3dDevice->lpVtbl->SetTransform( pd3dDevice, D3DTS_VIEW, CD3DCameraGetViewMatrix(Camera) );

    pd3dDevice->lpVtbl->SetTextureStageState( pd3dDevice, 0, D3DTSS_COLORARG1, D3DTA_TEXTURE );
    pd3dDevice->lpVtbl->SetTextureStageState( pd3dDevice, 0, D3DTSS_COLORARG2, D3DTA_DIFFUSE );
    pd3dDevice->lpVtbl->SetTextureStageState( pd3dDevice, 0, D3DTSS_COLOROP,   D3DTOP_MODULATE );
    pd3dDevice->lpVtbl->SetTextureStageState( pd3dDevice, 0, D3DTSS_ALPHAARG1, D3DTA_TEXTURE );
    pd3dDevice->lpVtbl->SetTextureStageState( pd3dDevice, 0, D3DTSS_ALPHAOP,   D3DTOP_SELECTARG1 );
    pd3dDevice->lpVtbl->SetTextureStageState( pd3dDevice, 1, D3DTSS_COLOROP,   D3DTOP_DISABLE );
    pd3dDevice->lpVtbl->SetTextureStageState( pd3dDevice, 1, D3DTSS_ALPHAOP,   D3DTOP_DISABLE );
    pd3dDevice->lpVtbl->SetTextureStageState( pd3dDevice, 0, D3DTSS_MINFILTER, D3DTEXF_LINEAR );
    pd3dDevice->lpVtbl->SetTextureStageState( pd3dDevice, 0, D3DTSS_MAGFILTER, D3DTEXF_LINEAR );
    pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ALPHABLENDENABLE, FALSE );
    pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_DITHERENABLE, FALSE );
    pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ZENABLE,      TRUE );
    pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_LIGHTING,     TRUE );
    pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_AMBIENT, 0x33333333 );

    // Begin the scene
    if( SUCCEEDED( pd3dDevice->lpVtbl->BeginScene(pd3dDevice) ) )
    {
        // Clear the display
        pd3dDevice->lpVtbl->Clear( pd3dDevice, 0L, NULL, D3DCLEAR_TARGET|D3DCLEAR_ZBUFFER, 0L, 1.0f, 0L );

        // Draw the terrain
        CD3DMeshRender( pTerrain, pd3dDevice, TRUE, TRUE );

        // Render the ship
        if( pShip->bVisible && bFirstPersonView == FALSE )
        {
            // Point of ship, on terrain
            D3DXVECTOR3 vShipPt;
            vShipPt.x =  pShip->vPos.x;
            vShipPt.z = -pShip->vPos.y;
            vShipPt.y = 0.1f + HeightField( vShipPt.x, vShipPt.z );

            // Point ahead of ship, on terrain
            D3DXVECTOR3 vForwardPt;
            vForwardPt.x = vShipPt.x+sinf(pShip->fAngle);
            vForwardPt.z = vShipPt.z+cosf(pShip->fAngle);
            vForwardPt.y = 0.1f + HeightField( vForwardPt.x, vForwardPt.z );

            // Point to side of ship, on terrain
            D3DXVECTOR3 vSidePt;
            vSidePt.x = vShipPt.x+sinf(pShip->fAngle + D3DX_PI/2.0f);
            vSidePt.z = vShipPt.z+cosf(pShip->fAngle + D3DX_PI/2.0f);
            vSidePt.y = 0.1f + HeightField( vSidePt.x, vSidePt.z );

            // Compute vectors of the ship's orientation
            D3DXVECTOR3 vForwardDir = {vForwardPt.x - vShipPt.x, vForwardPt.y - vShipPt.y, vForwardPt.z - vShipPt.z};
            D3DXVECTOR3 vSideDir    = {vSidePt.x - vShipPt.x, vSidePt.y - vShipPt.y, vSidePt.z - vShipPt.z};
            D3DXVECTOR3 vNormalDir;
            D3DXVec3Cross( &vNormalDir, &vForwardDir, &vSideDir );

            // Construct matrix to orient ship
            D3DXMATRIX matWorld, matLookAt, matRotateZ;
            D3DXMatrixRotationZ( &matRotateZ, pShip->fRoll );
            D3DXMatrixLookAtLH( &matLookAt, &vShipPt, &((D3DXVECTOR3){vShipPt.x-vForwardDir.x, vShipPt.y-vForwardDir.y, vShipPt.z-vForwardDir.z}), &vNormalDir );
            D3DXMatrixInverse( &matLookAt, NULL, &matLookAt );
            D3DXMatrixIdentity( &matWorld );
            D3DXMatrixMultiply( &matWorld, &matWorld, &matRotateZ );
            D3DXMatrixMultiply( &matWorld, &matWorld, &matLookAt );

            // Set renderstates for rendering the ship
            pd3dDevice->lpVtbl->SetTransform( pd3dDevice, D3DTS_WORLD, &matWorld );
            pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_LIGHTING,           TRUE );
            pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_NORMALIZENORMALS,   TRUE );
            pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ALPHABLENDENABLE,   FALSE );
            pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ALPHATESTENABLE,    FALSE );

            // Render the ship - opaque parts
            CD3DMeshRender( pShipFileObject, pd3dDevice, TRUE, FALSE );

            // Render the ship - transparent parts
            pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ALPHABLENDENABLE,   TRUE );
            pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ZWRITEENABLE, FALSE );
            pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_SRCBLEND,     D3DBLEND_ONE );
            pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_DESTBLEND,    D3DBLEND_ONE );
            CD3DMeshRender( pShipFileObject, pd3dDevice, FALSE, TRUE );
            pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ZWRITEENABLE, TRUE );
        }

        // Remaining objects don't need lighting
        pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_LIGHTING, FALSE );

        // Enable alpha blending and testing
        pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ALPHABLENDENABLE, TRUE );
        pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ALPHATESTENABLE,  TRUE );
        pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ALPHAREF,         0x08 );
        pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ALPHAFUNC, D3DCMP_GREATEREQUAL );

        // Display all visible objects in the display list
        for( DisplayObject* pObject = pDisplayList; pObject; pObject = pObject->pNext )
        {
            if( !pObject->bVisible )
                continue;
            if( pObject->dwType == OBJ_SHIP )
                continue;
            if( pObject->dwType == OBJ_BULLET )
                continue;

            // This is really a 3D sprite
            C3DSprite* pSprite = (C3DSprite*)pObject;

            FLOAT fX =  pObject->vPos.x;
            FLOAT fZ = -pObject->vPos.y;
            FLOAT fY =  HeightField( fX, fZ );

            FLOAT x1 = -pObject->fSize;
            FLOAT x2 =  pObject->fSize;
            FLOAT y1 = -pObject->fSize;
            FLOAT y2 =  pObject->fSize;

            FLOAT u1 = (FLOAT)(pSprite->dwTextureOffsetX + pSprite->dwTextureWidth *(((int)pSprite->frame)%pSprite->dwFramesPerLine));
            FLOAT v1 = (FLOAT)(pSprite->dwTextureOffsetY + pSprite->dwTextureHeight*(((int)pSprite->frame)/pSprite->dwFramesPerLine));

            FLOAT tu1 = u1 / (256.0f-1.0f);
            FLOAT tv1 = v1 / (256.0f-1.0f);
            FLOAT tu2 = (u1 + pSprite->dwTextureWidth -1) / (256.0f-1.0f);
            FLOAT tv2 = (v1 + pSprite->dwTextureHeight-1) / (256.0f-1.0f);

            // Set the game texture
            switch( pObject->dwType )
            {
                case OBJ_DONUT:
                case OBJ_CUBE:
                case OBJ_SPHERE:
                    pd3dDevice->lpVtbl->SetTexture( pd3dDevice, 0, (IDirect3DBaseTexture8 *)pGameTexture1 );
                    break;
                case OBJ_PYRAMID:
                case OBJ_CLOUD:
                    pd3dDevice->lpVtbl->SetTexture( pd3dDevice, 0, (IDirect3DBaseTexture8 *)pGameTexture2 );
                    break;
            }

            // Translate the billboard into place
            D3DXMATRIX mat = *CD3DCameraGetBillboardMatrix(Camera);
            mat._41 = fX;
            mat._42 = fY;
            mat._43 = fZ;
            pd3dDevice->lpVtbl->SetTransform( pd3dDevice, D3DTS_WORLD, &mat );

            DWORD dwColor = pSprite->dwColor;

            pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_SRCBLEND,  D3DBLEND_SRCALPHA );
            pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA );
            pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ZENABLE,      TRUE );
            pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ZWRITEENABLE, TRUE );

            if( pObject->dwType == OBJ_CLOUD )
            {
                DWORD red = 255-(int)(pSprite->frame*255.0f);
                DWORD grn = 255-(int)(pSprite->frame*511.0f);
                DWORD blu = 255-(int)(pSprite->frame*1023.0f);
                if( grn > 255 ) grn = 0;
                if( blu > 255 ) blu = 0;
                dwColor = 0xff000000 + (red<<16) + (grn<<8) + blu;

                pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_SRCBLEND,  D3DBLEND_ONE );
                pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_DESTBLEND, D3DBLEND_ONE );
                pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ZENABLE,      TRUE );
                pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ZWRITEENABLE, FALSE );
            }

            FLOAT h = 300.0f*pObject->vPos.z + 0.1f;

            SPRITEVERTEX* v;
            pSpriteVB->lpVtbl->Lock( pSpriteVB, 0, 0, (BYTE**)&v, 0 );
            v[0].p = (D3DXVECTOR3){x1,y1+h,0}; v[0].color=dwColor; v[0].tu=tu1; v[0].tv=tv2;
            v[1].p = (D3DXVECTOR3){x1,y2+h,0}; v[1].color=dwColor; v[1].tu=tu1; v[1].tv=tv1;
            v[2].p = (D3DXVECTOR3){x2,y1+h,0}; v[2].color=dwColor; v[2].tu=tu2; v[2].tv=tv2;
            v[3].p = (D3DXVECTOR3){x2,y2+h,0}; v[3].color=dwColor; v[3].tu=tu2; v[3].tv=tv1;
            pSpriteVB->lpVtbl->Unlock(pSpriteVB);

            // Render the billboarded sprite
            pd3dDevice->lpVtbl->SetVertexShader( pd3dDevice, D3DFVF_SPRITEVERTEX );
            pd3dDevice->lpVtbl->SetStreamSource( pd3dDevice, 0, pSpriteVB, sizeof(SPRITEVERTEX) );
            pd3dDevice->lpVtbl->DrawPrimitive( pd3dDevice, D3DPT_TRIANGLESTRIP, 0, 2 );
        }

        // Display all bullets
        for( DisplayObject *pObject = pDisplayList; pObject; pObject = pObject->pNext )
        {
            if( pObject->dwType != OBJ_BULLET )
                continue;

            // This is really a 3D sprite
            C3DSprite* pSprite = (C3DSprite*)pObject;

            FLOAT u1 = (FLOAT)(pSprite->dwTextureOffsetX + pSprite->dwTextureWidth *(((int)pSprite->frame)%pSprite->dwFramesPerLine));
            FLOAT v1 = (FLOAT)(pSprite->dwTextureOffsetY + pSprite->dwTextureHeight*(((int)pSprite->frame)/pSprite->dwFramesPerLine));
            u1 = (FLOAT)(pSprite->dwTextureOffsetX);
            v1 = (FLOAT)(pSprite->dwTextureOffsetY);

            FLOAT tu1 = u1 / (256.0f-1.0f);
            FLOAT tv1 = v1 / (256.0f-1.0f);
            FLOAT tu2 = (u1 + pSprite->dwTextureWidth -1) / (256.0f-1.0f);
            FLOAT tv2 = (v1 + pSprite->dwTextureHeight-1) / (256.0f-1.0f);

            // Set render states
            pd3dDevice->lpVtbl->SetTexture( pd3dDevice, 0, (IDirect3DBaseTexture8 *)pGameTexture2 );
            pd3dDevice->lpVtbl->SetVertexShader( pd3dDevice, D3DFVF_SPRITEVERTEX );
            pd3dDevice->lpVtbl->SetStreamSource( pd3dDevice, 0, pSpriteVB, sizeof(SPRITEVERTEX) );
            pd3dDevice->lpVtbl->SetRenderState ( pd3dDevice, D3DRS_SRCBLEND,     D3DBLEND_ONE );
            pd3dDevice->lpVtbl->SetRenderState ( pd3dDevice, D3DRS_DESTBLEND,    D3DBLEND_ONE );
            pd3dDevice->lpVtbl->SetRenderState ( pd3dDevice, D3DRS_ZENABLE,      TRUE );
            pd3dDevice->lpVtbl->SetRenderState ( pd3dDevice, D3DRS_ZWRITEENABLE, FALSE );

            FLOAT x1 = -0.01f;
            FLOAT x2 =  0.01f;
            FLOAT y1 = -0.01f;
            FLOAT y2 =  0.01f;

            DWORD dwColor = pSprite->dwColor;

            for( DWORD a=0; a<6; a++ )
            {
                FLOAT fX =  pObject->vPos.x - a*a*0.0005f*pObject->vVel.x;
                FLOAT fZ = -pObject->vPos.y + a*a*0.0005f*pObject->vVel.y;
                FLOAT fY =  HeightField( fX, fZ );

                // Translate the billboard into place
                D3DXMATRIX mat = *CD3DCameraGetBillboardMatrix(Camera);
                mat._41 = fX;
                mat._42 = fY;
                mat._43 = fZ;
                pd3dDevice->lpVtbl->SetTransform( pd3dDevice, D3DTS_WORLD, &mat );

                FLOAT h = 300.0f*pObject->vPos.z + 0.1f;

                SPRITEVERTEX* v;
                pSpriteVB->lpVtbl->Lock( pSpriteVB, 0, 0, (BYTE**)&v, 0 );
                v[0].p = (D3DXVECTOR3){x1,y1+h,0}; v[0].color=dwColor; v[0].tu=tu1; v[0].tv=tv2;
                v[1].p = (D3DXVECTOR3){x1,y2+h,0}; v[1].color=dwColor; v[1].tu=tu1; v[1].tv=tv1;
                v[2].p = (D3DXVECTOR3){x2,y1+h,0}; v[2].color=dwColor; v[2].tu=tu2; v[2].tv=tv2;
                v[3].p = (D3DXVECTOR3){x2,y2+h,0}; v[3].color=dwColor; v[3].tu=tu2; v[3].tv=tv1;
                pSpriteVB->lpVtbl->Unlock(pSpriteVB);

                // Render the billboarded sprite
                pd3dDevice->lpVtbl->DrawPrimitive( pd3dDevice, D3DPT_TRIANGLESTRIP, 0, 2 );
            }
        }

        // Restore state
        pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ZENABLE,      TRUE );
        pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ZWRITEENABLE, TRUE );

        // Display help
        _stprintf( strBuffer, sizeof(strBuffer), _T("F1 for menu") );
        CD3DFontDrawTextScaled( pGameFont, -1.0f, 1.1f, 0.9f, 0.05f, 0.05f,
                                     0xffffff00, strBuffer, D3DFONT_FILTERED );

        // Display score
        _stprintf( strBuffer, sizeof(strBuffer), _T("Score: %08ld"), dwScore );
        CD3DFontDrawTextScaled( pGameFont, -1.0f, 1.0f, 0.9f, 0.05f, 0.05f,
                                     0xffffff00, strBuffer, D3DFONT_FILTERED );

        // Display ship type
        _stprintf( strBuffer, sizeof(strBuffer), _T("Ship: %ls"), g_strShipNames[dwCurrentShipType] );
        CD3DFontDrawTextScaled( pGameFont, 0.0f, 1.0f, 0.9f, 0.05f, 0.05f,
                                     0xffffff00, strBuffer, D3DFONT_FILTERED );

        // Display weapon type
        TCHAR* strWeapon;
        if( dwBulletType == 0 )      strWeapon = _T("Weapon: Blaster");
        else if( dwBulletType == 1 ) strWeapon = _T("Weapon: Double blaster");
        else if( dwBulletType == 2 ) strWeapon = _T("Weapon: Spray gun");
        else                           strWeapon = _T("Weapon: Proximity killer");
        CD3DFontDrawTextScaled( pGameFont, 0.0f, 1.1f, 0.9f, 0.05f, 0.05f,
                                     0xffffff00, strWeapon, D3DFONT_FILTERED );

        // Render "Paused" text if game is paused
        if( bPaused && pGameFont )
        {
            DarkenScene( 0.5f );
            RenderFieryText( pMenuFont, _T("Paused") );
        }

        if( pShip->fShowDelay > 0.0f )
            DarkenScene( pShip->fShowDelay/2.0f );

        // Render game menu
        if( pCurrentMenu )
        {
            DarkenScene( 0.5f );
            CMenuItemRender( pCurrentMenu, pd3dDevice, pMenuFont );
        }

        pd3dDevice->lpVtbl->EndScene(pd3dDevice);
    }
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DeleteFromList
 \date		Created  on Sun Dec  4 18:20:35 2016
 \date		Modified on Sun Dec  4 18:20:35 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID DeleteFromList( DisplayObject* pObject )
{
    if( pObject->pNext )
        pObject->pNext->pPrev = pObject->pPrev;
    if( pObject->pPrev )
        pObject->pPrev->pNext = pObject->pNext;
    DisplayObjectDelete( pObject );
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ConstructMenus
 \date		Created  on Sun Dec  4 18:20:42 2016
 \date		Modified on Sun Dec  4 18:20:42 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID ConstructMenus(void)
{
    // Build video sub menu
    CMenuItem* pVideoSubMenu  =  CMenuItemNew( _T("Video Menu"),     MENU_VIDEO );
    CMenuItemAdd( pVideoSubMenu, CMenuItemNew( _T("Windowed"),       MENU_WINDOWED ) );
    CMenuItemAdd( pVideoSubMenu, CMenuItemNew( _T("640x480"),        MENU_640x480 ) );
    CMenuItemAdd( pVideoSubMenu, CMenuItemNew( _T("800x600"),        MENU_800x600 ) );
    CMenuItemAdd( pVideoSubMenu, CMenuItemNew( _T("1024x768"),       MENU_1024x768 ) );
    CMenuItemAdd( pVideoSubMenu, CMenuItemNew( _T("Back"),           MENU_BACK ) );

    // Build sound menu
    CMenuItem* pSoundSubMenu  =  CMenuItemNew( _T("Sound Menu"),     MENU_SOUND );
    CMenuItemAdd( pSoundSubMenu, CMenuItemNew( _T("Sound On"),       MENU_SOUNDON ) );
    CMenuItemAdd( pSoundSubMenu, CMenuItemNew( _T("Sound Off"),      MENU_SOUNDOFF ) );
    CMenuItemAdd( pSoundSubMenu, CMenuItemNew( _T("Back"),           MENU_BACK ) );

    // Build input menu
    CMenuItem* pInputSubMenu  =  CMenuItemNew( _T("Input Menu"),     MENU_INPUT );
    CMenuItemAdd( pInputSubMenu, CMenuItemNew( _T("View Devices"),   MENU_VIEWDEVICES ) );
    CMenuItemAdd( pInputSubMenu, CMenuItemNew( _T("Config Devices"), MENU_CONFIGDEVICES ) );
    CMenuItemAdd( pInputSubMenu, CMenuItemNew( _T("Back"),           MENU_BACK ) );

    // Build main menu
    pMainMenu = CMenuItemNew( _T("Main Menu"),  MENU_MAIN );
    CMenuItemAdd( pMainMenu, pVideoSubMenu );
    CMenuItemAdd( pMainMenu, pSoundSubMenu );
    CMenuItemAdd( pMainMenu, pInputSubMenu );
    CMenuItemAdd( pMainMenu, CMenuItemNew( _T("Back to Game"), MENU_BACK ) );

    // Build "quit game?" menu
    pQuitMenu  = CMenuItemNew( _T("Quit Game?"),  MENU_MAIN );
    CMenuItemAdd( pQuitMenu, CMenuItemNew( _T("Yes"),     MENU_QUIT ) );
    CMenuItemAdd( pQuitMenu, CMenuItemNew( _T("No"),      MENU_BACK ) );

    return;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DestroyMenus
 \date		Created  on Sun Dec  4 18:21:04 2016
 \date		Modified on Sun Dec  4 18:21:04 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID DestroyMenus(void)
{
    SAFE_DELETE( pQuitMenu );
    SAFE_DELETE( pMainMenu );
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		UpdateMenus
 \date		Created  on Sun Dec  4 18:21:12 2016
 \date		Modified on Sun Dec  4 18:21:12 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID UpdateMenus(void)
{
    if( pCurrentMenu == NULL )
        return;

    // Keep track of current selected menu, to check later for changes
    DWORD dwCurrentSelectedMenu = pCurrentMenu->dwSelectedMenu;

    // Check for menu up/down input
    if( stUserInput.bDoMenuUp )
    {
        stUserInput.bDoMenuUp = FALSE;
        if( pCurrentMenu->dwSelectedMenu > 0 )
            pCurrentMenu->dwSelectedMenu--;
    }
    else if( stUserInput.bDoMenuDown )
    {
        stUserInput.bDoMenuDown = FALSE;
        if( (pCurrentMenu->dwSelectedMenu+1) < pCurrentMenu->dwNumChildren )
            pCurrentMenu->dwSelectedMenu++;
    }

    // The the current menu changed, play a sound
    if( dwCurrentSelectedMenu != pCurrentMenu->dwSelectedMenu )
        Play_a_Sound( pSphereExplodeSound );

    if( stUserInput.bDoMenuSelect )
    {
        stUserInput.bDoMenuSelect = FALSE;
        Play_a_Sound( pSphereExplodeSound );

        DWORD dwID = pCurrentMenu->pChild[pCurrentMenu->dwSelectedMenu]->dwID;

        switch( dwID )
        {
            case MENU_BACK:
                pCurrentMenu = pCurrentMenu->pParent;
                break;

            case MENU_VIDEO:
            case MENU_SOUND:
            case MENU_INPUT:
                pCurrentMenu = pCurrentMenu->pChild[pCurrentMenu->dwSelectedMenu];
                break;

            case MENU_WINDOWED:
                SwitchDisplayModes( FALSE, 0L, 0L );
				CMenuItemDelete(pCurrentMenu);
                pCurrentMenu = NULL;
                break;

            case MENU_640x480:
                SwitchDisplayModes( TRUE, 640, 480 );
				CMenuItemDelete(pCurrentMenu);
                pCurrentMenu = NULL;
                break;

            case MENU_800x600:
                SwitchDisplayModes( TRUE, 800, 600 );
				CMenuItemDelete(pCurrentMenu);
                pCurrentMenu = NULL;
                break;

            case MENU_1024x768:
                SwitchDisplayModes( TRUE, 1024, 768 );
				CMenuItemDelete(pCurrentMenu);
                pCurrentMenu = NULL;
                break;

            case MENU_SOUNDON:
                if( pMusicManager == NULL )
                    CreateSoundObjects( hWndMain );
				CMenuItemDelete(pCurrentMenu);
                pCurrentMenu = NULL;
                break;

            case MENU_SOUNDOFF:
                if( pMusicManager )
                    DestroySoundObjects();
				CMenuItemDelete(pCurrentMenu);
                pCurrentMenu = NULL;
                break;

            case MENU_VIEWDEVICES:
            {
                // Put action format to game play actions
                CInputDeviceManagerSetActionFormat( pInputDeviceManager, &diafGame, FALSE );

                bMouseVisible = TRUE;
                DXUtil_Timer( TIMER_STOP );

                // Configure the devices (with view capability only)
                if( bFullScreen )
                    CInputDeviceManagerConfigureDevices( pInputDeviceManager, hWndMain,
                                                             (IUnknown *)pConfigSurface,
                                                             (VOID*)StaticConfigureInputDevicesCB,
                                                             DICD_DEFAULT, NULL );
                else
                    CInputDeviceManagerConfigureDevices( pInputDeviceManager, hWndMain, NULL, NULL,
                                                             DICD_DEFAULT, NULL );

                bMouseVisible = FALSE;
                DXUtil_Timer( TIMER_START );

				CMenuItemDelete(pCurrentMenu);
                pCurrentMenu = NULL;
                break;
            }

            case MENU_CONFIGDEVICES:
            {
                // Put action format to game play actions
                CInputDeviceManagerSetActionFormat( pInputDeviceManager, &diafGame, FALSE );

                bMouseVisible = TRUE;
                DXUtil_Timer( TIMER_STOP );

                // Get access to the list of semantically-mapped input devices
                // to delete all InputDeviceState structs before calling ConfigureDevices()
                DeviceInfo* pDeviceInfos;
                DWORD dwNumDevices;
                CInputDeviceManagerGetDevices( pInputDeviceManager, &pDeviceInfos, &dwNumDevices );

                for( DWORD i=0; i<dwNumDevices; i++ )
                {
                    InputDeviceState* pInputDeviceState = (InputDeviceState*) pDeviceInfos[i].pParam;
                    SAFE_DELETE( pInputDeviceState );
                    pDeviceInfos[i].pParam = NULL;
                }

                // Configure the devices (with edit capability)
				if (bFullScreen)
					CInputDeviceManagerConfigureDevices(pInputDeviceManager, hWndMain,
									(IUnknown *)pConfigSurface, (VOID *)StaticConfigureInputDevicesCB, DICD_EDIT, NULL);
				else
					CInputDeviceManagerConfigureDevices(pInputDeviceManager, hWndMain, NULL, NULL, DICD_EDIT, NULL);

                DXUtil_Timer( TIMER_START );
                bMouseVisible = FALSE;

				CMenuItemDelete(pCurrentMenu);
                pCurrentMenu = NULL;
                break;
            }

            case MENU_QUIT:
                PostMessage( hWndMain, WM_CLOSE, 0, 0 );
				CMenuItemDelete(pCurrentMenu);
                pCurrentMenu = NULL;
                break;
        }
    }

    // Check if the menu system is being exitted
    if( stUserInput.bDoMenuQuit )
    {
        stUserInput.bDoMenuQuit = FALSE;
		CMenuItemDelete(pCurrentMenu);
        pCurrentMenu = NULL;
    }

    // If the menu is going away, go back to game play actions
    if( pCurrentMenu == NULL )
        CInputDeviceManagerSetActionFormat( pInputDeviceManager, &diafGame, FALSE );
}

/*
 *	Display support code (using Direct3D functionality from D3DUtil.h)
 */

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CreateDisplayObjects
 \date		Created  on Sun Dec  4 18:21:52 2016
 \date		Modified on Sun Dec  4 18:21:52 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CreateDisplayObjects( HWND hWnd )
{
    HRESULT hr, hr1, hr2;

    // Construct a new display
    LPDIRECT3D8 pD3D = Direct3DCreate8( D3D_SDK_VERSION );
    if( NULL == pD3D )
    {
        CleanupAndDisplayError( DONUTS3DERR_NODIRECT3D );
        return E_FAIL;
    }

    // Get the current desktop format
    pD3D->lpVtbl->GetAdapterDisplayMode( pD3D, D3DADAPTER_DEFAULT, &DesktopMode );

    const D3DFORMAT fmtFullscreenArray[] = 
    {
        D3DFMT_R5G6B5,
        D3DFMT_X1R5G5B5,
        D3DFMT_A1R5G5B5,
        D3DFMT_X8R8G8B8,
        D3DFMT_A8R8G8B8,
    };
    const INT numFullscreenFmts = sizeof(fmtFullscreenArray) / sizeof(fmtFullscreenArray[0]);
    INT iFmt;

    // Find a pixel format that will be good for fullscreen back buffers
    for( iFmt = 0; iFmt < numFullscreenFmts; iFmt++ )
    {
        if( SUCCEEDED( pD3D->lpVtbl->CheckDeviceType( pD3D, D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, 
            fmtFullscreenArray[iFmt], fmtFullscreenArray[iFmt], FALSE ) ) )
        {
            d3dfmtFullscreen = fmtFullscreenArray[iFmt];
            break;
        }
    }

    const D3DFORMAT fmtTextureArray[] = 
    {
        D3DFMT_A1R5G5B5,
        D3DFMT_A4R4G4B4,
        D3DFMT_A8R8G8B8,
    };
    const INT numTextureFmts = sizeof(fmtTextureArray) / sizeof(fmtTextureArray[0]);

    // Find a format that is supported as a texture map for the current mode
    for( iFmt = 0; iFmt < numTextureFmts; iFmt++ )
    {
        if( SUCCEEDED( pD3D->lpVtbl->CheckDeviceFormat( pD3D, D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, 
            DesktopMode.Format, 0, D3DRTYPE_TEXTURE, fmtTextureArray[iFmt] ) ) )
        {
            d3dfmtTexture = fmtTextureArray[iFmt];
            break;
        }
    }

    // Set up presentation parameters for the display
    ZeroMemory( &d3dpp, sizeof(d3dpp) );
    d3dpp.Windowed         = !bFullScreen;
    d3dpp.BackBufferCount  = 1;
    d3dpp.SwapEffect       = D3DSWAPEFFECT_DISCARD;
    d3dpp.EnableAutoDepthStencil = TRUE;
    d3dpp.AutoDepthStencilFormat = D3DFMT_D16;
    if( bFullScreen )
    {
        d3dpp.hDeviceWindow    = hWnd;
        d3dpp.BackBufferWidth  = dwScreenWidth;
        d3dpp.BackBufferHeight = dwScreenHeight;
        d3dpp.BackBufferFormat = d3dfmtFullscreen;
    }
    else
    {
        d3dpp.BackBufferFormat = DesktopMode.Format;
    }

    // Create the device
    hr = pD3D->lpVtbl->CreateDevice( pD3D, D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd,
                             D3DCREATE_SOFTWARE_VERTEXPROCESSING,
                             &d3dpp, &pd3dDevice );
    pD3D->lpVtbl->Release(pD3D);
    if( FAILED(hr) )
    {
        CleanupAndDisplayError( DONUTS3DERR_NOD3DDEVICE );
        return E_FAIL;
    }

    // Create some game fonts
    pGameFont = CD3DFontNew( _T("Tahoma"), 30, 0L );
    CD3DFontInitDeviceObjects( pGameFont, pd3dDevice );

    pMenuFont = CD3DFontNew( _T("Impact"), 48, 0L );
    CD3DFontInitDeviceObjects( pMenuFont, pd3dDevice );

    // Find the media files (textures and geometry models) for the game
    TCHAR strGameTexture1[512];
    TCHAR strGameTexture2[512];
    hr1 = DXUtil_FindMediaFile( strGameTexture1, _T("Donuts1.bmp") );
    hr2 = DXUtil_FindMediaFile( strGameTexture2, _T("Donuts2.bmp") );

    if( FAILED(hr1) || FAILED(hr2) )
    {
        CleanupAndDisplayError( DONUTS3DERR_NOTEXTURES );
        return E_FAIL;
    }

    // Load the game textures
    if( FAILED( D3DUtil_CreateTexture( pd3dDevice, strGameTexture1,
                                       &pGameTexture1, d3dfmtTexture ) ) ||
        FAILED( D3DUtil_CreateTexture( pd3dDevice, strGameTexture2,
                                       &pGameTexture2, d3dfmtTexture ) ) )
    {
        CleanupAndDisplayError( DONUTS3DERR_NOTEXTURES );
        return E_FAIL;
    }

    D3DUtil_SetColorKey( pGameTexture1, 0x00000000 );
    D3DUtil_SetColorKey( pGameTexture2, 0x00000000 );

    // Load the geometry models
    hr1 = LoadShipModel();
    hr2 = LoadTerrainModel();

    if( FAILED(hr1) || FAILED(hr2) )
    {
        CleanupAndDisplayError( DONUTS3DERR_NOGEOMETRY );
        return E_FAIL;
    }

    // Create a viewport covering sqaure
    if( FAILED( pd3dDevice->lpVtbl->CreateVertexBuffer( pd3dDevice, 4*sizeof(SCREENVERTEX),
                                       D3DUSAGE_WRITEONLY, D3DFVF_SCREENVERTEX,
                                       D3DPOOL_MANAGED, &pViewportVB ) ) )
    {
        CleanupAndDisplayError( DONUTS3DERR_NO3DRESOURCES );
        return E_FAIL;
    }

    // Create a sqaure for rendering the sprites
    if( FAILED( pd3dDevice->lpVtbl->CreateVertexBuffer( pd3dDevice, 4*sizeof(SPRITEVERTEX),
                                       D3DUSAGE_WRITEONLY, D3DFVF_SPRITEVERTEX,
                                       D3DPOOL_MANAGED, &pSpriteVB ) ) )
    {
        CleanupAndDisplayError( DONUTS3DERR_NO3DRESOURCES );
        return E_FAIL;
    }

    // Now that all the display objects are created, "restore" them (create
    // local mem objects and set state)
    if( FAILED( RestoreDisplayObjects() ) )
                return E_FAIL;

        // The display is now ready
        bDisplayReady = TRUE;
        return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		RestoreDisplayObjects
 \date		Created  on Sun Dec  4 18:22:02 2016
 \date		Modified on Sun Dec  4 18:22:02 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT RestoreDisplayObjects(void)
{
    HRESULT hr;
    HWND hWnd = hWndMain;

    if( FALSE == bFullScreen )
    {
        // If we are still a WS_POPUP window we should convert to a normal app
        // window so we look like a windows app.
        DWORD dwStyle  = GetWindowStyle( hWnd );
        dwStyle &= ~WS_POPUP;
        dwStyle |= WS_OVERLAPPED | WS_CAPTION | WS_THICKFRAME | WS_MINIMIZEBOX;
        SetWindowLong( hWnd, GWL_STYLE, dwStyle );

        // Aet window size
        RECT rc;
        SetRect( &rc, 0, 0, 640, 480 );

        AdjustWindowRectEx( &rc, GetWindowStyle(hWnd), GetMenu(hWnd) != NULL,
                            GetWindowExStyle(hWnd) );

        SetWindowPos( hWnd, NULL, 0, 0, rc.right-rc.left, rc.bottom-rc.top,
                      SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE );

        SetWindowPos( hWnd, HWND_NOTOPMOST, 0, 0, 0, 0,
                      SWP_NOSIZE | SWP_NOMOVE | SWP_NOACTIVATE );

        //  Make sure our window does not hang outside of the work area
        RECT rcWork;
        SystemParametersInfo( SPI_GETWORKAREA, 0, &rcWork, 0 );
        GetWindowRect( hWnd, &rc );
        if( rc.left < rcWork.left ) rc.left = rcWork.left;
        if( rc.top  < rcWork.top )  rc.top  = rcWork.top;
        SetWindowPos( hWnd, NULL, rc.left, rc.top, 0, 0,
                      SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE );
    }

    // Create the device-dependent objects for the file-based mesh objects
    CD3DMeshRestoreDeviceObjects( pShipFileObject, pd3dDevice );
    CD3DMeshRestoreDeviceObjects( pTerrain, pd3dDevice );
    CD3DFontRestoreDeviceObjects(pGameFont);
    CD3DFontRestoreDeviceObjects(pMenuFont);

    // Get viewport dimensions
    D3DVIEWPORT8 vp;
    pd3dDevice->lpVtbl->GetViewport(pd3dDevice, &vp);
    FLOAT sx = (FLOAT)vp.Width;
    FLOAT sy = (FLOAT)vp.Height;

    // Setup dimensions for the viewport covering sqaure
    SCREENVERTEX* v;
    pViewportVB->lpVtbl->Lock( pViewportVB, 0, 0, (BYTE**)&v, 0 );
    v[0].p = (D3DXVECTOR4){ 0,sy,0.0f,1.0f};
    v[1].p = (D3DXVECTOR4){ 0, 0,0.0f,1.0f};
    v[2].p = (D3DXVECTOR4){sx,sy,0.0f,1.0f};
    v[3].p = (D3DXVECTOR4){sx, 0,0.0f,1.0f};
    pViewportVB->lpVtbl->Unlock(pViewportVB);

    // Create a surface for confguring DInput devices
    hr = pd3dDevice->lpVtbl->CreateImageSurface( pd3dDevice, 640, 480, d3dfmtFullscreen, &pConfigSurface );
    if( FAILED(hr) )
    {
        CleanupAndDisplayError( DONUTS3DERR_NO3DRESOURCES );
        return E_FAIL;
    }

    // Set up the camera
    CD3DCameraSetViewParams( Camera,	&((D3DXVECTOR3){0.0f,0.0f,0.0f}),
										&((D3DXVECTOR3){0.0f,0.0f,1.0f}),
										&((D3DXVECTOR3){0.0f,1.0f,0.0f})
							);
    CD3DCameraSetProjParams( Camera, D3DX_PI/4, 1.0f, 0.1f, 100.0f );

    // Set up default matrices (using the CD3DCamera class)
    pd3dDevice->lpVtbl->SetTransform( pd3dDevice, D3DTS_VIEW,       CD3DCameraGetViewMatrix(Camera) );
    pd3dDevice->lpVtbl->SetTransform( pd3dDevice, D3DTS_PROJECTION, CD3DCameraGetProjMatrix(Camera) );

    // Setup a material
    D3DMATERIAL8 mtrl;
    D3DUtil_InitMaterial( &mtrl, 1.0f, 1.0f, 1.0f, 1.0f );
    pd3dDevice->lpVtbl->SetMaterial( pd3dDevice, &mtrl );

    // Set up lighting states
    D3DLIGHT8 light;
    D3DUtil_InitLight( &light, D3DLIGHT_DIRECTIONAL, 1.0f, -1.0f, 1.0f );
    pd3dDevice->lpVtbl->SetLight( pd3dDevice, 0, &light );
    pd3dDevice->lpVtbl->LightEnable( pd3dDevice, 0, TRUE );

    pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_LIGHTING, TRUE );
    pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_AMBIENT, 0x33333333 );

    // Set miscellaneous render states
    pd3dDevice->lpVtbl->SetTextureStageState( pd3dDevice, 0, D3DTSS_COLORARG1, D3DTA_TEXTURE );
    pd3dDevice->lpVtbl->SetTextureStageState( pd3dDevice, 0, D3DTSS_COLORARG2, D3DTA_DIFFUSE );
    pd3dDevice->lpVtbl->SetTextureStageState( pd3dDevice, 0, D3DTSS_COLOROP,   D3DTOP_MODULATE );
    pd3dDevice->lpVtbl->SetTextureStageState( pd3dDevice, 0, D3DTSS_MINFILTER, D3DTEXF_POINT );
    pd3dDevice->lpVtbl->SetTextureStageState( pd3dDevice, 0, D3DTSS_MAGFILTER, D3DTEXF_POINT );
    pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ZENABLE, TRUE );

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		InvalidateDisplayObjects
 \date		Created  on Sun Dec  4 18:22:12 2016
 \date		Modified on Sun Dec  4 18:22:12 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT InvalidateDisplayObjects(void)
{
    CD3DMeshInvalidateDeviceObjects(pShipFileObject);
    CD3DMeshInvalidateDeviceObjects(pTerrain);
    CD3DFontInvalidateDeviceObjects(pGameFont);
    CD3DFontInvalidateDeviceObjects(pMenuFont);

    SAFE_RELEASE( pConfigSurface );

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DestroyDisplayObjects
 \date		Created  on Sun Dec  4 18:22:20 2016
 \date		Modified on Sun Dec  4 18:22:20 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT DestroyDisplayObjects(void)
{
    DisplayObject* pDO;
    while( pDisplayList != NULL )
    {
        pDO = pDisplayList;
        pDisplayList = pDisplayList->pNext;
        DisplayObjectDelete(pDO);
        if( pDisplayList != NULL)
            pDisplayList->pPrev = NULL;
    }
    
    SAFE_RELEASE( pGameTexture1 );
    SAFE_RELEASE( pGameTexture2 );

    SAFE_DELETE( pGameFont );
    SAFE_DELETE( pMenuFont );

    SAFE_RELEASE( pConfigSurface );

    if( pShipFileObject != NULL )
        CD3DMeshDestroy(pShipFileObject);
    if( pTerrain != NULL )
        CD3DMeshDestroy(pTerrain);

    SAFE_DELETE( pTerrain );
    SAFE_DELETE( pShipFileObject );

    SAFE_RELEASE( pViewportVB );
    SAFE_RELEASE( pSpriteVB );
    SAFE_RELEASE( pd3dDevice );

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SwitchDisplayModes
 \date		Created  on Sun Dec  4 18:22:27 2016
 \date		Modified on Sun Dec  4 18:22:27 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT SwitchDisplayModes(BOOL bSetFullScreen, DWORD dwWidth, DWORD dwHeight)
{
	HRESULT hr;

	if (FALSE == bIsActive || FALSE == bDisplayReady)
		return S_OK;

	// Check to see if a change was actually requested
	if (bSetFullScreen)
	{
		if (dwScreenWidth == dwWidth && dwScreenHeight == dwHeight && bFullScreen == bSetFullScreen)
			return S_OK;
	}
	else
	{
		if (bFullScreen == FALSE)
			return S_OK;
	}

	// Invalidate the old display objects
	bDisplayReady = FALSE;
	InvalidateDisplayObjects();

	// Set up the new presentation paramters
	if (bSetFullScreen)
	{
		d3dpp.Windowed         = FALSE;
		d3dpp.hDeviceWindow    = hWndMain;
		d3dpp.BackBufferWidth  = dwScreenWidth = dwWidth;
		d3dpp.BackBufferHeight = dwScreenHeight = dwHeight;
		d3dpp.BackBufferFormat = d3dfmtFullscreen;
	}
	else
	{
		d3dpp.Windowed         = TRUE;
		d3dpp.hDeviceWindow    = NULL;
		d3dpp.BackBufferWidth  = 0L;
		d3dpp.BackBufferHeight = 0L;

		d3dpp.BackBufferFormat = DesktopMode.Format;
	}

	// Reset the device
	if (SUCCEEDED(hr = pd3dDevice->lpVtbl->Reset(pd3dDevice, &d3dpp)))
	{
		bFullScreen = bSetFullScreen;
		if (SUCCEEDED(hr = RestoreDisplayObjects()))
		{
			bDisplayReady = TRUE;
			SetCursor(NULL);
			return S_OK;
		}
	}

	// If we get here, a fatal error occurred
	PostMessage(hWndMain, WM_CLOSE, 0, 0);
	return E_FAIL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ShowFrame
 \date		Created  on Sun Dec  4 18:22:37 2016
 \date		Modified on Sun Dec  4 18:22:37 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID ShowFrame(void)
{
    if( NULL == pd3dDevice )
        return;

    // Present the backbuffer contents to the front buffer
    pd3dDevice->lpVtbl->Present( pd3dDevice, 0, 0, 0, 0 );
}

/*
 *	Sound support code (using DMusic functionality from DMUtil.h)
 */

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CreateSoundObjects
 \date		Created  on Sun Dec  4 18:23:18 2016
 \date		Modified on Sun Dec  4 18:23:18 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CreateSoundObjects( HWND hWnd )
{
    // Create the music manager class, used to create the sounds
    pMusicManager = CMusicManagerNew();
    if( FAILED( CMusicManagerInitialize( pMusicManager, hWnd, 128, DMUS_APATH_DYNAMIC_STEREO ) ) )
        return E_FAIL;

    // Instruct the music manager where to find the files
    CMusicManagerSetSearchDirectory( pMusicManager, DXUtil_GetDXSDKMediaPath() );

    // Create the sounds
    CMusicManagerCreateSegmentFromResource( pMusicManager, &pBeginLevelSound,     _T("BEGINLEVEL"),      _T("WAV"), TRUE, FALSE);
    CMusicManagerCreateSegmentFromResource( pMusicManager, &pEngineIdleSound,     _T("ENGINEIDLE") ,     _T("WAV"), TRUE, FALSE);
    CMusicManagerCreateSegmentFromResource( pMusicManager, &pEngineRevSound,      _T("ENGINEREV") ,      _T("WAV"), TRUE, FALSE);
    CMusicManagerCreateSegmentFromResource( pMusicManager, &pShieldBuzzSound,     _T("SHIELDBUZZ") ,     _T("WAV"), TRUE, FALSE);
    CMusicManagerCreateSegmentFromResource( pMusicManager, &pShipExplodeSound,    _T("SHIPEXPLODE") ,    _T("WAV"), TRUE, FALSE);
    CMusicManagerCreateSegmentFromResource( pMusicManager, &pFireBulletSound,     _T("GUNFIRE") ,        _T("WAV"), TRUE, FALSE);
    CMusicManagerCreateSegmentFromResource( pMusicManager, &pShipBounceSound,     _T("SHIPBOUNCE") ,     _T("WAV"), TRUE, FALSE);
    CMusicManagerCreateSegmentFromResource( pMusicManager, &pDonutExplodeSound,   _T("DONUTEXPLODE") ,   _T("WAV"), TRUE, FALSE);
    CMusicManagerCreateSegmentFromResource( pMusicManager, &pPyramidExplodeSound, _T("PYRAMIDEXPLODE") , _T("WAV"), TRUE, FALSE);
    CMusicManagerCreateSegmentFromResource( pMusicManager, &pCubeExplodeSound,    _T("CUBEEXPLODE") ,    _T("WAV"), TRUE, FALSE);
    CMusicManagerCreateSegmentFromResource( pMusicManager, &pSphereExplodeSound,  _T("SPHEREEXPLODE") ,  _T("WAV"), TRUE, FALSE);

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DestroySoundObjects
 \date		Created  on Sun Dec  4 18:23:26 2016
 \date		Modified on Sun Dec  4 18:23:26 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID DestroySoundObjects(void)
{
    SAFE_DELETE( pBeginLevelSound );
    SAFE_DELETE( pEngineIdleSound );
    SAFE_DELETE( pEngineRevSound );
    SAFE_DELETE( pShieldBuzzSound );
    SAFE_DELETE( pShipExplodeSound );
    SAFE_DELETE( pFireBulletSound );
    SAFE_DELETE( pShipBounceSound );
    SAFE_DELETE( pDonutExplodeSound );
    SAFE_DELETE( pPyramidExplodeSound );
    SAFE_DELETE( pCubeExplodeSound );
    SAFE_DELETE( pSphereExplodeSound );

    SAFE_DELETE( pMusicManager );
}

/*
 *	Input support code (using DInput functionality from DIUtil.h)
 */

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CreateInputObjects
 \date		Created  on Sun Dec  4 18:23:51 2016
 \date		Modified on Sun Dec  4 18:23:51 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CreateInputObjects( HWND hWnd )
{
    HRESULT hr;

    // Setup action format for the acutal gameplay
    ZeroMemory( &diafGame, sizeof(DIACTIONFORMAT) );
    diafGame.dwSize          = sizeof(DIACTIONFORMAT);
    diafGame.dwActionSize    = sizeof(DIACTION);
    diafGame.dwDataSize      = NUMBER_OF_GAMEACTIONS * sizeof(DWORD);
    diafGame.guidActionMap   = g_guidApp;
    diafGame.dwGenre         = DIVIRTUAL_SPACESIM;
    diafGame.dwNumActions    = NUMBER_OF_GAMEACTIONS;
    diafGame.rgoAction       = g_rgGameAction;
    diafGame.lAxisMin        = -10;
    diafGame.lAxisMax        = 10;
    diafGame.dwBufferSize    = 16;
    _tcscpy( diafGame.tszActionMap, _T("Donuts3D New") );

    // Setup action format for the in-game menus
    ZeroMemory( &diafBrowser, sizeof(DIACTIONFORMAT) );
    diafBrowser.dwSize          = sizeof(DIACTIONFORMAT);
    diafBrowser.dwActionSize    = sizeof(DIACTION);
    diafBrowser.dwDataSize      = NUMBER_OF_BROWSERACTIONS * sizeof(DWORD);
    diafBrowser.guidActionMap   = g_guidApp;
    diafBrowser.dwGenre         = DIVIRTUAL_BROWSER_CONTROL;
    diafBrowser.dwNumActions    = NUMBER_OF_BROWSERACTIONS;
    diafBrowser.rgoAction       = g_rgBrowserAction;
    diafBrowser.lAxisMin        = -10;
    diafBrowser.lAxisMax        = 10;
    diafBrowser.dwBufferSize    = 16;
    _tcscpy( diafBrowser.tszActionMap, _T("Donuts New") );

    // Create a new input device manager
    pInputDeviceManager = CInputDeviceManagerNew();

    if( FAILED( hr = CInputDeviceManagerCreate( pInputDeviceManager, hWnd, NULL, &diafGame, StaticInputAddDeviceCB, NULL ) ) )
    {
        CleanupAndDisplayError( DONUTS3DERR_NOINPUT );
        return E_FAIL;
    }

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		StaticInputAddDeviceCB
 \details	Static callback helper to call into the Application class
 \date		Created  on Sun Dec  4 18:28:00 2016
 \date		Modified on Sun Dec  4 18:28:00 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static HRESULT CALLBACK StaticInputAddDeviceCB(DeviceInfo *pDeviceInfo, const DIDEVICEINSTANCE *pdidi, LPVOID pParam)
{
	return InputAddDeviceCB(pDeviceInfo, pdidi);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		InputAddDeviceCB
 \details	Called from CInputDeviceManager whenever a device is added.
            Set the dead zone, and creates a new InputDeviceState for each 
            device
 \date		Created  on Sun Dec  4 18:27:37 2016
 \date		Modified on Sun Dec  4 18:27:37 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT InputAddDeviceCB(DeviceInfo *pDeviceInfo, const DIDEVICEINSTANCE *pdidi)
{
	// Setup the deadzone 
	DIPROPDWORD dipdw;
	dipdw.diph.dwSize = sizeof(DIPROPDWORD);
	dipdw.diph.dwHeaderSize = sizeof(DIPROPHEADER);
	dipdw.diph.dwObj = 0;
	dipdw.diph.dwHow = DIPH_DEVICE;
	dipdw.dwData = 500;
	pDeviceInfo->pdidDevice->lpVtbl->SetProperty(pDeviceInfo->pdidDevice, DIPROP_DEADZONE, &dipdw.diph);

	if (GET_DIDEVICE_TYPE(pdidi->dwDevType) == DI8DEVTYPE_MOUSE)
		pDeviceInfo->pdidDevice->lpVtbl->SetCooperativeLevel(pDeviceInfo->pdidDevice, hWndMain, DISCL_EXCLUSIVE | DISCL_FOREGROUND);

	// Create a new InputDeviceState for each device so the 
	// app can record its state 
	InputDeviceState *pNewInputDeviceState = malloc(sizeof(InputDeviceState));
	ZeroMemory(pNewInputDeviceState, sizeof(InputDeviceState));
	pDeviceInfo->pParam = (LPVOID)pNewInputDeviceState;

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DestroyInputObjects
 \date		Created  on Sun Dec  4 18:28:16 2016
 \date		Modified on Sun Dec  4 18:28:16 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID DestroyInputObjects(void)
{
    if( pInputDeviceManager )
    {
        // Get access to the list of semantically-mapped input devices
        // to delete all InputDeviceState structs
        DeviceInfo* pDeviceInfos;
        DWORD dwNumDevices;
        CInputDeviceManagerGetDevices( pInputDeviceManager, &pDeviceInfos, &dwNumDevices );
    
        for( DWORD i=0; i<dwNumDevices; i++ )
        {
            InputDeviceState* pInputDeviceState = (InputDeviceState*) pDeviceInfos[i].pParam;
            SAFE_DELETE( pInputDeviceState );
            pDeviceInfos[i].pParam = NULL;
        }
    
        // Delete input device manager
        SAFE_DELETE( pInputDeviceManager );
    }
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		StaticConfigureInputDevicesCB
 \details	Static callback helper to call into D3DApplication class
 \date		Created  on Sun Dec  4 18:29:12 2016
 \date		Modified on Sun Dec  4 18:29:12 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static BOOL CALLBACK StaticConfigureInputDevicesCB( IUnknown* pUnknown, VOID* pUserData )
{
    return ConfigureInputDevicesCB( pUnknown );
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ConfigureInputDevicesCB
 \details	Callback function for configuring input devices. This function 
            is called in fullscreen modes, so that the input device 
            configuration window can update the screen.
 \date		Created  on Sun Dec  4 18:28:45 2016
 \date		Modified on Sun Dec  4 18:28:45 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL ConfigureInputDevicesCB(IUnknown *pUnknown)
{
	if (dwAppState != APPSTATE_ACTIVE)
		return TRUE;

	// Get access to the surface
	LPDIRECT3DSURFACE8 pConfigSurface;
	if (FAILED(pUnknown->lpVtbl->QueryInterface(pUnknown, &IID_IDirect3DSurface8, (VOID **) & pConfigSurface)))
		return TRUE;

	// Draw the scene, with the config surface blitted on top
	DrawDisplayList();

	RECT rcSrc;
	SetRect(&rcSrc, 0, 0, 640, 480);

	POINT ptDst;
	ptDst.x = (dwScreenWidth - 640) / 2;
	ptDst.y = (dwScreenHeight - 480) / 2;

	LPDIRECT3DSURFACE8 pBackBuffer;
	pd3dDevice->lpVtbl->GetBackBuffer(pd3dDevice, 0, D3DBACKBUFFER_TYPE_MONO, &pBackBuffer);
	pd3dDevice->lpVtbl->CopyRects(pd3dDevice, pConfigSurface, &rcSrc, 1, pBackBuffer, &ptDst);
	pBackBuffer->lpVtbl->Release(pBackBuffer);

	ShowFrame();

	// Release the surface
	pConfigSurface->lpVtbl->Release(pConfigSurface);

	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		UpdateInput
 \details	Processes data from the input device.  Uses GetDeviceState().
 \date		Created  on Sun Dec  4 18:29:35 2016
 \date		Modified on Sun Dec  4 18:29:35 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void UpdateInput(UserInput *pUserInput)
{
	if (NULL == pInputDeviceManager)
		return;

	// Get access to the list of semantically-mapped input devices
	DeviceInfo *pDeviceInfos;
	DWORD dwNumDevices;
	CInputDeviceManagerGetDevices(pInputDeviceManager, &pDeviceInfos, &dwNumDevices);

	// Loop through all devices and check game input
	for (DWORD i = 0; i < dwNumDevices; i++)
	{
		DIDEVICEOBJECTDATA rgdod[10];
		DWORD dwItems = 10;
		HRESULT hr;
		LPDIRECTINPUTDEVICE8 pdidDevice = pDeviceInfos[i].pdidDevice;
		InputDeviceState *pInputDeviceState = (InputDeviceState *)pDeviceInfos[i].pParam;

		hr = pdidDevice->lpVtbl->Acquire(pdidDevice);
		hr = pdidDevice->lpVtbl->Poll(pdidDevice);
		hr = pdidDevice->lpVtbl->GetDeviceData(pdidDevice, sizeof(DIDEVICEOBJECTDATA), rgdod, &dwItems, 0);
		if (FAILED(hr))
			continue;

		// Get the sematics codes for the game menu
		for (DWORD j = 0; j < dwItems; j++)
		{
			BOOL bButtonState = (rgdod[j].dwData == 0x80) ? TRUE : FALSE;
			FLOAT fButtonState = (rgdod[j].dwData == 0x80) ? 1.0f : 0.0f;
			FLOAT fAxisState = (FLOAT) ((int)rgdod[j].dwData) / 10.0f;

			switch (rgdod[j].uAppData)
			{
					// Handle semantics for normal game play

					// Handle relative axis data
				case INPUT_AXIS_LR:
					pInputDeviceState->fAxisRotateLR = fAxisState;
					break;
				case INPUT_AXIS_UD:
					pInputDeviceState->fAxisMoveUD = -fAxisState;
					break;

				// Handle mouse data                
				case INPUT_MOUSE_LR:
					if (fAxisState > -0.4f && fAxisState < 0.4f)
						pInputDeviceState->fAxisRotateLR = 0.0f;
					else
						pInputDeviceState->fAxisRotateLR = fAxisState;
					break;
				case INPUT_MOUSE_UD:
					if (fAxisState > -0.4f && fAxisState < 0.4f)
						pInputDeviceState->fAxisMoveUD = 0.0f;
					else
						pInputDeviceState->fAxisMoveUD = -fAxisState;
					break;

				// Handle buttons separately so the button state data
				// doesn't overwrite the axis state data, and handle
				// each button separately so they don't overwrite each other
				case INPUT_TURNLEFT:
					pInputDeviceState->bButtonRotateLeft = bButtonState;
					break;
				case INPUT_TURNRIGHT:
					pInputDeviceState->bButtonRotateRight = bButtonState;
					break;
				case INPUT_FORWARDTHRUST:
					pInputDeviceState->bButtonForwardThrust = bButtonState;
					break;
				case INPUT_REVERSETHRUST:
					pInputDeviceState->bButtonReverseThrust = bButtonState;
					break;
				case INPUT_FIREWEAPONS:
					pInputDeviceState->bButtonFireWeapons = bButtonState;
					break;

				// Handle one-shot buttons
				case INPUT_MOUSE_SHIPTYPE:
					SwitchModel();
					break;

				case INPUT_CHANGESHIPTYPE:
					if (bButtonState)
						SwitchModel();
					break;

				case INPUT_CHANGEVIEW:
					if (bButtonState)
						pUserInput->bDoChangeView = TRUE;
					break;

				case INPUT_CHANGEWEAPONS:
					if (bButtonState)
					{
						if (++dwBulletType > 3)
							dwBulletType = 0L;
					}
					break;

				case INPUT_START:
					if (bButtonState)
						bPaused = !bPaused;
					break;

				case INPUT_DISPLAYGAMEMENU:
					if (bButtonState)
					{
						Play_a_Sound(pSphereExplodeSound);
						pCurrentMenu = pMainMenu;
						CInputDeviceManagerSetActionFormat(pInputDeviceManager, &diafBrowser, FALSE);
					}
					break;

				case INPUT_QUITGAME:
					if (bButtonState)
					{
						Play_a_Sound(pSphereExplodeSound);
						pCurrentMenu = pQuitMenu;
						CInputDeviceManagerSetActionFormat(pInputDeviceManager, &diafBrowser, FALSE);
					}
					break;

				// Handle semantics for the game menu
				case INPUT_MENU_UD:
					pInputDeviceState->fAxisMenuUD = -fAxisState;
					break;
				case INPUT_MENU_UP:
					if (bButtonState)
						pUserInput->bDoMenuUp = TRUE;
					break;
				case INPUT_MENU_DOWN:
					if (bButtonState)
						pUserInput->bDoMenuDown = TRUE;
					break;
				case INPUT_MENU_SELECT:
					if (bButtonState)
						pUserInput->bDoMenuSelect = TRUE;
					break;
				case INPUT_MENU_QUIT:
					if (bButtonState)
						pUserInput->bDoMenuQuit = TRUE;
					break;
				case INPUT_MENU_WHEEL:
					if (fAxisState > 0.0f)
						pUserInput->bDoMenuUp = TRUE;
					else
						pUserInput->bDoMenuDown = TRUE;
					break;
			}
		}
	}

	pUserInput->bButtonFireWeapons = FALSE;
	pUserInput->fAxisRotateLR = 0.0f;
	pUserInput->fAxisMoveUD = 0.0f;

	if (pShip->bVisible)
	{
		// Accumulate thrust inputs

		// Concatinate the data from all the DirectInput devices
		for (unsigned long i = 0; i < dwNumDevices; i++)
		{
			InputDeviceState *pInputDeviceState = (InputDeviceState *)pDeviceInfos[i].pParam;

			// Use the axis data that is furthest from zero
			if (fabs(pInputDeviceState->fAxisRotateLR) > fabs(pUserInput->fAxisRotateLR))
				pUserInput->fAxisRotateLR = pInputDeviceState->fAxisRotateLR;

			if (fabs(pInputDeviceState->fAxisMoveUD) > fabs(pUserInput->fAxisMoveUD))
				pUserInput->fAxisMoveUD = pInputDeviceState->fAxisMoveUD;

			// Process the button data 
			if (pInputDeviceState->bButtonRotateLeft)
				pUserInput->fAxisRotateLR = -1.0f;
			else if (pInputDeviceState->bButtonRotateRight)
				pUserInput->fAxisRotateLR = 1.0f;

			if (pInputDeviceState->bButtonForwardThrust)
				pUserInput->fAxisMoveUD = 1.0f;
			else if (pInputDeviceState->bButtonReverseThrust)
				pUserInput->fAxisMoveUD = -1.0f;

			if (pInputDeviceState->bButtonFireWeapons)
				pUserInput->bButtonFireWeapons = TRUE;
		}
	}
}

/*
 *	Error handling
 */

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CleanupAndDisplayError
 \date		Created  on Sun Dec  4 18:30:09 2016
 \date		Modified on Sun Dec  4 18:30:09 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID CleanupAndDisplayError( DWORD dwError )
{
    TCHAR* strDbgOut = NULL;
    TCHAR* strMsgBox = NULL;

    // Cleanup the app
    FinalCleanup();

    // Make the cursor visible
    SetCursor( LoadCursor( NULL, IDC_ARROW ) );
    bMouseVisible = TRUE;

    // Get the appropriate error strings
    switch( dwError )
    {
        case DONUTS3DERR_NODIRECT3D:
            strDbgOut = _T("Could not create Direct3D\n");
            strMsgBox = _T("Could not create Direct3D.\n\n")
                        _T("Please make sure you have the latest DirectX\n")
                        _T(".dlls installed on your system.");
            break;
        case DONUTS3DERR_NOD3DDEVICE:
            strDbgOut = _T("Could not create a Direct3D device\n");
            strMsgBox = _T("Could not create a Direct3D device. Your\n")
                        _T("graphics accelerator is not sufficient to\n")
                        _T("run this demo, or your desktop is using\n")
                        _T("a color format that cannot be accelerated by\n")
                        _T("your graphics card (try 16-bit mode).");
            break;
        case DONUTS3DERR_NOTEXTURES:
            strDbgOut = _T("Could not load textures\n");
            strMsgBox = _T("Couldn't load game textures.\n\n")
                        _T("Either your graphics hardware does not have\n")
                        _T("sufficient resources, or the DirectX SDK was\n")
                        _T("not properly installed.");
            break;
        case DONUTS3DERR_NOGEOMETRY:
            strDbgOut = _T("Could not load .x models\n");
            strMsgBox = _T("Couldn't load game geometry.\n\n")
                        _T("Either your graphics hardware does not have\n")
                        _T("sufficient resources, or the DirectX SDK was\n")
                        _T("not properly installed.");
            break;
        case DONUTS3DERR_NO3DRESOURCES:
            strDbgOut = _T("Couldn't load create a d3d object\n");
            strMsgBox = _T("Couldn't create display objects.\n")
                        _T("Yourr graphics hardware does not have\n")
                        _T("sufficient resources to run this app.");
            break;
        case DONUTS3DERR_NOINPUT:
            strDbgOut = _T("Could not create input objects\n");
            strMsgBox = _T("Could not create input objects.");
            break;
    }

    // Output the error strings
    OutputDebugString( strDbgOut );
    MessageBox( hWndMain, strMsgBox, _T("Donuts3D"), MB_OK );
}
