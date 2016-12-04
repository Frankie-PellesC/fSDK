/*+@@file@@----------------------------------------------------------------*//*!
 \file		donuts.h
 \par Description 
            Header for Donuts3D game
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Dec  4 19:29:14 2016
 \date		Modified on Sun Dec  4 19:29:14 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef DONUTS_H
#define DONUTS_H

//-----------------------------------------------------------------------------
// Defines, and constants
//-----------------------------------------------------------------------------
// This GUID must be unique for every game, and the same for 
// every instance of this app.  // {2014BAAC-F1FD-458e-9091-0F85C8CF6AFE}
// The GUID allows DirectInput to remember input settings
GUID g_guidApp = { 0x2014baac, 0xf1fd, 0x458e, { 0x90, 0x91, 0xf, 0x85, 0xc8, 0xcf, 0x6a, 0xfe } };

// Error codes
#define DONUTS3DERR_NODIRECT3D       0x00000001
#define DONUTS3DERR_NOD3DDEVICE      0x00000002
#define DONUTS3DERR_NOTEXTURES       0x00000003
#define DONUTS3DERR_NOGEOMETRY       0x00000004
#define DONUTS3DERR_NO3DRESOURCES    0x00000005
#define DONUTS3DERR_NOINPUT          0x00000006

// States the app can be in
enum{ APPSTATE_LOADSPLASH, APPSTATE_DISPLAYSPLASH, APPSTATE_ACTIVE, APPSTATE_BEGINLEVELSCREEN, APPSTATE_DISPLAYLEVELSCREEN };

// Game object types
enum{ OBJ_DONUT=0, OBJ_PYRAMID, OBJ_CUBE, OBJ_SPHERE, OBJ_CLOUD, OBJ_SHIP, OBJ_BULLET };

// Object dimensions and fixed properties
#define DONUT_WIDTH        32
#define DONUT_HEIGHT       32
#define PYRAMID_WIDTH      32
#define PYRAMID_HEIGHT     32
#define SPHERE_WIDTH       16
#define SPHERE_HEIGHT      16
#define CUBE_WIDTH         16
#define CUBE_HEIGHT        16
#define CLOUD_WIDTH        32
#define CLOUD_HEIGHT       32
#define BULLET_WIDTH        3
#define BULLET_HEIGHT       3

#define NUM_DONUT_FRAMES   30
#define NUM_PYRAMID_FRAMES 40
#define NUM_SPHERE_FRAMES  40
#define NUM_CUBE_FRAMES    40
#define NUM_BULLET_FRAMES 400

#define BULLET_XOFFSET    304
#define BULLET_YOFFSET      0

// Defines for the in-game menu
#define MENU_MAIN           1
#define MENU_SOUND          2
#define MENU_VIDEO          3
#define MENU_INPUT          4
#define MENU_VIEWDEVICES    5
#define MENU_CONFIGDEVICES  6
#define MENU_WINDOWED       7
#define MENU_640x480        8
#define MENU_800x600        9
#define MENU_1024x768      10
#define MENU_BACK          11
#define MENU_SOUNDON       12
#define MENU_SOUNDOFF      13
#define MENU_QUIT          14

TCHAR* g_strShipFiles[] = {  _T("Concept Plane 3.x"), _T("Spaceship 2.x"),  _T("Shusui.x"),
                             _T("Space Station 7.x"), _T("Spaceship 8.x"),  _T("Orbiter.x"),
                             _T("Spaceship 13.x"),    _T("Spaceship 5.x"),  _T("Star Sail.x"), 
                             _T("Heli.x")
						  };
TCHAR* g_strShipNames[] = {  _T("Concept Plane"),     _T("Green Machine"),  _T("Purple Prowler"),
                             _T("Drone Clone"),       _T("Canyon Fighter"), _T("Roundabout"),
                             _T("Tie-X7"),            _T("Gunner"),         _T("Star Sail"), 
                             _T("Helicopter")
						  };

//-----------------------------------------------------------------------------
// Name: struct DisplayObject
// Desc: A game object that goes in the display list
//-----------------------------------------------------------------------------
typedef struct DisplayObject
{
    struct DisplayObject* pNext;          // Link to next object
    struct DisplayObject* pPrev;          // Link to previous object
    
    DWORD          dwType;            // Type of object
    BOOL           bVisible;          // Whether the object is visible
    D3DXVECTOR3    vPos;              // Position
    D3DXVECTOR3    vVel;              // Velocity
    FLOAT          fSize;
    
    // Constructor
} DisplayObject;

DisplayObject *DisplayObjectNew( DWORD type, D3DVECTOR p, D3DVECTOR v );
void DisplayObjectDelete(DisplayObject *);

//-----------------------------------------------------------------------------
// Derived classes for displayable game objects
//-----------------------------------------------------------------------------
typedef struct C3DSprite
{
	DisplayObject;
    DWORD dwFramesPerLine;   // How anim frames are packed in bitmap
    FLOAT frame;             // Current animation frame
    FLOAT fMaxFrame;         // Max animation frame value
    FLOAT delay;             // Frame/second
    
    DWORD dwColor;

    DWORD dwTextureOffsetX; // Pixel offsets into the game texture
    DWORD dwTextureOffsetY;
    DWORD dwTextureWidth;   // Width and height in pixels
    DWORD dwTextureHeight; 
    
} C3DSprite;

C3DSprite *C3DSpriteNew( DWORD type, D3DVECTOR p, D3DVECTOR v );
void C3DSpriteDelete(C3DSprite *this);

#define DECLARESPRITE(NewType)	typedef C3DSprite NewType; \
								NewType *NewType##New(D3DVECTOR p, D3DVECTOR v)
DECLARESPRITE(CDonut);
DECLARESPRITE(CPyramid);
DECLARESPRITE(CSphere);
DECLARESPRITE(CCube);
DECLARESPRITE(CCloud);

typedef C3DSprite CBullet;
CBullet *CBulletNew(D3DVECTOR p, D3DVECTOR v, DWORD dwType);

typedef struct CShip //: public DisplayObject
{
	DisplayObject;
    FLOAT fRoll;
    FLOAT fAngle;
    BOOL  bExploded;
    FLOAT fShowDelay;
} CShip;
CShip *CShipNew( D3DVECTOR p );

//-----------------------------------------------------------------------------
// Custom Direct3D vertex types
//-----------------------------------------------------------------------------
typedef struct SCREENVERTEX
{
    D3DXVECTOR4 p;
    DWORD       color;
} SCREENVERTEX;

typedef struct SPRITEVERTEX
{
    D3DXVECTOR3 p;
    DWORD       color;
    FLOAT       tu, tv;
} SPRITEVERTEX;

typedef struct MODELVERTEX
{
    D3DXVECTOR3 p;
    D3DXVECTOR3 n;
    FLOAT       tu, tv;
} MODELVERTEX;

#define D3DFVF_SCREENVERTEX (D3DFVF_XYZRHW|D3DFVF_DIFFUSE)
#define D3DFVF_SPRITEVERTEX (D3DFVF_XYZ|D3DFVF_DIFFUSE|D3DFVF_TEX1)
#define D3DFVF_MODELVERTEX  (D3DFVF_XYZ|D3DFVF_NORMAL|D3DFVF_TEX1)

//-----------------------------------------------------------------------------
// App defined structures
//-----------------------------------------------------------------------------

// DirectInput action mapper reports events only when buttons/axis change
// so we need to remember the present state of relevant axis/buttons for 
// each DirectInput device.  The CInputDeviceManager will store a 
// pointer for each device that points to this struct
typedef struct InputDeviceState
{
    FLOAT fAxisMoveUD;
    BOOL  bButtonForwardThrust;
    BOOL  bButtonReverseThrust;

    FLOAT fAxisRotateLR;
    BOOL  bButtonRotateLeft;
    BOOL  bButtonRotateRight;

    BOOL  bButtonFireWeapons;

    // Menu input variables
    FLOAT fAxisMenuUD;
} InputDeviceState;

// Struct to store the current input state
typedef struct UserInput
{
    FLOAT fAxisMoveUD;
    FLOAT fAxisRotateLR;
    BOOL  bButtonFireWeapons;
    BOOL  bButtonEnableShield;

    // One-shot variables
    BOOL  bDoChangeView;    

    // Menu input variables
    BOOL  bDoMenuUp;
    BOOL  bDoMenuDown;
    BOOL  bDoMenuSelect;
    BOOL  bDoMenuQuit;

} UserInput;

//-----------------------------------------------------------------------------
// Game actions (using DInput semantic mapper). The definitions here are kind
// of the whole point of this sample. The game uses these actions to map
// physical input like, "the user pressed the 'W' key", to a more useable
// constant for the game, like "if( dwInput == INPUT_CHANGEWEAPONS )...".
//-----------------------------------------------------------------------------

// Input semantics used by this game
enum INPUT_SEMANTICS
{
    // Gameplay semantics
    INPUT_AXIS_LR=1,     INPUT_AXIS_UD,       
    INPUT_MOUSE_LR,      INPUT_MOUSE_UD,      INPUT_MOUSE_SHIPTYPE,
    INPUT_TURNLEFT,      INPUT_TURNRIGHT,     INPUT_FORWARDTHRUST,
    INPUT_REVERSETHRUST, INPUT_FIREWEAPONS,   INPUT_CHANGESHIPTYPE,
    INPUT_CHANGEVIEW,    INPUT_CHANGEWEAPONS, INPUT_DISPLAYGAMEMENU,
    INPUT_QUITGAME,      INPUT_START,

    // Menu semantics
    INPUT_MENU_UD,       INPUT_MENU_WHEEL,
    INPUT_MENU_UP,       INPUT_MENU_DOWN,     
    INPUT_MENU_SELECT,   INPUT_MENU_QUIT,
};

// Game actions used by this game.
DIACTION g_rgGameAction[] =
{
    // (C:\Program Files\DirectX\DirectInput\User Maps\*.ini)
    // after changing this, otherwise settings won't reset and will be read 
    // from the out of date ini files 

    // Device input (joystick, etc.) that is pre-defined by DInput, according
    // to genre type. The genre for this app is space simulators.
    { INPUT_AXIS_LR,         DIAXIS_SPACESIM_LATERAL,   0, TEXT("Turn"), },
    { INPUT_AXIS_UD,         DIAXIS_SPACESIM_MOVE,      0, TEXT("Move"), },
    { INPUT_FIREWEAPONS,     DIBUTTON_SPACESIM_FIRE,    0, TEXT("Fire weapons"), },
    { INPUT_CHANGEVIEW,      DIBUTTON_SPACESIM_VIEW,    0, TEXT("Change view"), },
    { INPUT_CHANGEWEAPONS,   DIBUTTON_SPACESIM_WEAPONS, 0, TEXT("Change weapons"), },
    { INPUT_CHANGESHIPTYPE,  DIBUTTON_SPACESIM_LOWER,    0, TEXT("Change ship type"), },
    { INPUT_DISPLAYGAMEMENU, DIBUTTON_SPACESIM_DEVICE,    0, TEXT("Display game menu"), },
    { INPUT_START,           DIBUTTON_SPACESIM_MENU,  0, TEXT("Start/pause"), },

    // Keyboard input mappings
    { INPUT_TURNLEFT,        DIKEYBOARD_LEFT,    0, TEXT("Turn left"), },
    { INPUT_TURNRIGHT,       DIKEYBOARD_RIGHT,   0, TEXT("Turn right"), },
    { INPUT_FORWARDTHRUST,   DIKEYBOARD_UP,      0, TEXT("Forward thrust"), },
    { INPUT_REVERSETHRUST,   DIKEYBOARD_DOWN,    0, TEXT("Reverse thrust"), },
    { INPUT_FIREWEAPONS,     DIKEYBOARD_SPACE,   0, TEXT("Fire weapons"), },
    { INPUT_CHANGESHIPTYPE,  DIKEYBOARD_A,       0, TEXT("Change ship type"), },
    { INPUT_CHANGEVIEW,      DIKEYBOARD_V,       0, TEXT("Change view"), },
    { INPUT_CHANGEWEAPONS,   DIKEYBOARD_W,       0, TEXT("Change weapons"), },
    { INPUT_DISPLAYGAMEMENU, DIKEYBOARD_F1,      DIA_APPFIXED, TEXT("Display game menu"), },
    { INPUT_START,           DIKEYBOARD_PAUSE,   0, TEXT("Start/pause"), },
    { INPUT_QUITGAME,        DIKEYBOARD_ESCAPE,  DIA_APPFIXED, TEXT("Quit game"), },

    // Mouse input mappings
    { INPUT_MOUSE_LR,        DIMOUSE_XAXIS,      0, TEXT("Turn"), },
    { INPUT_MOUSE_UD,        DIMOUSE_YAXIS,      0, TEXT("Move"), },
    { INPUT_MOUSE_SHIPTYPE,  DIMOUSE_WHEEL,      0, TEXT("Change ship type"), },
    { INPUT_FIREWEAPONS,     DIMOUSE_BUTTON0,    0, TEXT("Fire weapons"), },
    { INPUT_CHANGEWEAPONS,   DIMOUSE_BUTTON1,    0, TEXT("Change weapons"), },
};

// Game actions used by this game.
DIACTION g_rgBrowserAction[] =
{
    // (C:\Program Files\DirectX\DirectInput\User Maps\*.ini)
    // after changing this, otherwise settings won't reset and will be read 
    // from the out of date ini files 

    // Device input (joystick, etc.) that is pre-defined by DInput, according
    // to genre type. The genre for this app is space simulators.
    { INPUT_MENU_UD,         DIAXIS_BROWSER_MOVE,       0, TEXT("Up/down"), },
    { INPUT_MENU_UP,         DIBUTTON_BROWSER_PREVIOUS, 0, TEXT("Up"), },
    { INPUT_MENU_DOWN,       DIBUTTON_BROWSER_NEXT,     0, TEXT("Down"), },
    { INPUT_MENU_SELECT,     DIBUTTON_BROWSER_SELECT,   0, TEXT("Select"), },
    { INPUT_MENU_QUIT,       DIBUTTON_BROWSER_DEVICE,   0, TEXT("Quit menu"), },

    // Keyboard input mappings
    { INPUT_MENU_UP,         DIKEYBOARD_UP,          0, TEXT("Up"), },
    { INPUT_MENU_DOWN,       DIKEYBOARD_DOWN,        0, TEXT("Down"), },
    { INPUT_MENU_SELECT,     DIKEYBOARD_SPACE,       0, TEXT("Select"), },
    { INPUT_MENU_SELECT,     DIKEYBOARD_RETURN,      0, TEXT("Select"), },
    { INPUT_MENU_SELECT,     DIKEYBOARD_NUMPADENTER, 0, TEXT("Select"), },
    { INPUT_MENU_QUIT,       DIKEYBOARD_ESCAPE,      0, TEXT("Quit menu"), },

    // Mouse input mappings
    { INPUT_MENU_WHEEL,      DIMOUSE_WHEEL,      0, TEXT("Up/down"), },
    { INPUT_MENU_SELECT,     DIMOUSE_BUTTON0,    0, TEXT("Select"), },
};

// Number of actions
#define NUMBER_OF_GAMEACTIONS    (sizeof(g_rgGameAction)/sizeof(DIACTION))
#define NUMBER_OF_BROWSERACTIONS (sizeof(g_rgBrowserAction)/sizeof(DIACTION))

//-----------------------------------------------------------------------------
// Inline helper functions
//-----------------------------------------------------------------------------

// Simple function to define "hilliness" for terrain
__forceinline FLOAT HeightField( FLOAT x, FLOAT z )
{
    return (cosf(x/2.0f+0.2f)*cosf(z/1.5f-0.2f)+1.0f) - 2.0f;
}

// Simple function for generating random numbers
__forceinline FLOAT rnd( FLOAT low, FLOAT high )
{
    return low + ( high - low ) * ( (FLOAT)rand() ) / RAND_MAX;
}

// Convenient macros for playing sounds
__forceinline VOID Play_a_Sound( CMusicSegment* pSound )
{
        if( pSound ) CMusicSegmentPlay( pSound, DMUS_SEGF_SECONDARY, NULL );
}

__forceinline VOID StopSound( CMusicSegment* pSound )
{
        if( pSound ) CMusicSegmentStop(pSound, 0);
}


//-----------------------------------------------------------------------------
// Function prototypes
//-----------------------------------------------------------------------------
LRESULT CALLBACK StaticMsgProc( HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam );

HRESULT CreateApp( HINSTANCE hInstance );
INT     Run(void);
LRESULT MsgProc( HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam );

void CMyApplicationNew(void);

HRESULT          InputAddDeviceCB( DeviceInfo* pDeviceInfo, const DIDEVICEINSTANCE* pdidi );
BOOL             ConfigureInputDevicesCB( IUnknown* pUnknown );
HRESULT          OneTimeSceneInit( HWND hWnd );
HRESULT          FrameMove(void);
HRESULT          RenderFrame(void);
VOID             FinalCleanup(void);

// Sound functions
HRESULT          CreateSoundObjects( HWND hWnd );
VOID             DestroySoundObjects(void);

// Input functions
HRESULT          CreateInputObjects( HWND hWnd );
VOID             DestroyInputObjects(void);
void             UpdateInput( UserInput* pUserInput );

// Display functions
HRESULT          CreateDisplayObjects( HWND hWnd );
HRESULT          RestoreDisplayObjects(void);
HRESULT          InvalidateDisplayObjects(void);
HRESULT          DestroyDisplayObjects(void);
HRESULT          SwitchDisplayModes( BOOL bFullScreen, DWORD dwWidth, DWORD dwHeight );

// Menu functions
VOID             ConstructMenus(void);
VOID             DestroyMenus(void);
VOID             UpdateMenus(void);

// Rendering functions
VOID             UpdateDisplayList(void);
VOID             DrawDisplayList(void);
VOID             ShowFrame(void);
VOID             DarkenScene( FLOAT fAmount );
VOID             RenderFieryText( CD3DFont* pFont, TCHAR* strText );

// Misc game functions
VOID             DisplayLevelIntroScreen( DWORD dwLevel );
VOID             AdvanceLevel(void);
BOOL             IsDisplayListEmpty(void);
VOID             AddToList( DisplayObject* pObject );
VOID             DeleteFromList( DisplayObject* pObject );
VOID             CheckForHits(void);

HRESULT          LoadTerrainModel(void);
HRESULT          LoadShipModel(void);
HRESULT          SwitchModel(void);

// Error handling
VOID             CleanupAndDisplayError( DWORD dwError );

#endif
