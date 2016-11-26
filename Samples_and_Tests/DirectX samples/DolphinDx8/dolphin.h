// dolphin.h

#ifndef DOLPHIN_H
#define DOLPHIN_H

#include <windows.h>
#include <d3dx8math.h>
#include <d3dx8.h>
#ifdef MAKEFOURCC
#undef MAKEFOURCC
#endif
#include <mmsystem.h>
#include <stdio.h>

#define WATER_COLOR      0x00004080

#define MSG_NONE 0
#define MSGERR_APPMUSTEXIT 1
#define MSGWARN_SWITCHEDTOREF 2

#define TRUE    1
#define FALSE   0

// Custom Type (our VERTEX)
typedef struct _D3DVERTEX
{
  D3DXVECTOR3 p;
  D3DXVECTOR3 n;
  float tu;
  float tv;
}D3DVERTEX;

//-----------------------------------------------------------------------------
// Error codes
//-----------------------------------------------------------------------------

#define D3DAPPERR_NODIRECT3D          0x82000001
#define D3DAPPERR_NOWINDOW            0x82000002
#define D3DAPPERR_NOCOMPATIBLEDEVICES 0x82000003
#define D3DAPPERR_NOWINDOWABLEDEVICES 0x82000004
#define D3DAPPERR_NOHARDWAREDEVICE    0x82000005
#define D3DAPPERR_HALNOTCOMPATIBLE    0x82000006
#define D3DAPPERR_NOWINDOWEDHAL       0x82000007
#define D3DAPPERR_NODESKTOPHAL        0x82000008
#define D3DAPPERR_NOHALTHISMODE       0x82000009
#define D3DAPPERR_NONZEROREFCOUNT     0x8200000a
#define D3DAPPERR_MEDIANOTFOUND       0x8200000b
#define D3DAPPERR_RESIZEFAILED        0x8200000c

//-----------------------------------------------------------------------------
// Name: struct D3DModeInfo
// Desc: Structure for holding information about a display mode
//-----------------------------------------------------------------------------
typedef struct _D3DModeInfo
{
    DWORD      Width;      // Screen width in this mode
    DWORD      Height;     // Screen height in this mode
    D3DFORMAT  Format;     // Pixel format in this mode
    DWORD      dwBehavior; // Hardware  Software  Mixed vertex processing
    D3DFORMAT  DepthStencilFormat; // Which depth stencil format to use with this mode
}D3DModeInfo;

//-----------------------------------------------------------------------------
// Name: struct D3DDeviceInfo
// Desc: Structure for holding information about a Direct3D device, including
//       a list of modes compatible with this device
//-----------------------------------------------------------------------------
typedef struct _D3DDeviceInfo
{
    // Device data
    D3DDEVTYPE   DeviceType;      // Reference, HAL, etc.
    D3DCAPS8     d3dCaps;         // Capabilities of this device
    const TCHAR* strDesc;         // Name of this device
    BOOL         bCanDoWindowed;  // Whether this device can work in windowed mode

    // Modes for this device
    DWORD        dwNumModes;
    D3DModeInfo  modes[150];

    // Current state
    DWORD        dwCurrentMode;
    BOOL         bWindowed;
    D3DMULTISAMPLE_TYPE MultiSampleType;
}D3DDeviceInfo;

//-----------------------------------------------------------------------------
// Name: struct D3DAdapterInfo
// Desc: Structure for holding information about an adapter, including a list
//       of devices available on this adapter
//-----------------------------------------------------------------------------
typedef struct _D3DAdapterInfo
{
    // Adapter data
    D3DADAPTER_IDENTIFIER8 d3dAdapterIdentifier;
    D3DDISPLAYMODE d3ddmDesktop;      // Desktop display mode for this adapter

    // Devices for this adapter
    DWORD          dwNumDevices;
    D3DDeviceInfo  devices[5];

    // Current state
    DWORD          dwCurrentDevice;
}D3DAdapterInfo;

// Internal variables for the state of the app
typedef struct _D3DAPP
{
	D3DAdapterInfo Adapters[10];
	DWORD dwNumAdapters;
	DWORD dwAdapter;
	BOOL bWindowed;
	BOOL bActive;
	BOOL bReady;

	// Internal variables used for timing
	BOOL bFrameMoving;
	BOOL bSingleStep;

	// Main objects used for creating and rendering the 3D scene
	D3DPRESENT_PARAMETERS d3dpp;        // Parameters for CreateDevice/Reset
	HWND hWnd;							// The main app window
	HWND hWndFocus;				        // The D3D focus window (usually same as hWnd)
	LPDIRECT3D8 pD3D;                   // (LPDIRECT3D8) // The main D3D object
	LPDIRECT3DDEVICE8 pD3DDevice;       // (LPDIRECT3DDEVICE8) The D3D rendering device
	D3DCAPS8 d3dCaps;                   // Caps for the device
	D3DSURFACE_DESC d3dsdBackBuffer;    // Surface desc of the backbuffer
	DWORD dwCreateFlags;                // Indicate sw or hw vertex processing
	DWORD dwWindowStyle;                // Saved window style for mode switches
	DWORD dwExWindowStyle;              // Saved window style for mode switches
	RECT rcWindowBounds;                // Saved window bounds for mode switches
	RECT rcWindowClient;                // Saved client area size for mode switches

	// Variables for timing
	float fTime;                       // Current time in seconds
	float fElapsedTime;                // Time elapsed since last frame
	float fFPS;                        // Instanteous frame rate
	char strDeviceStats[100];          // String to hold D3D device stats
	char strFrameStats[40];            // String to hold frame stats

	// Overridable variables for the app
	char strWindowTitle[100];          // Title for the app's window
	BOOL bUseDepthBuffer;              // Whether to autocreate depthbuffer
	DWORD dwMinDepthBits;              // Minimum number of bits needed in depth buffer
	DWORD dwMinStencilBits;            // Minimum number of bits needed in stencil buffer
	DWORD dwCreationWidth;             // Width used to create window
	DWORD dwCreationHeight;            // Height used to create window
	BOOL bShowCursorWhenFullscreen;    // Whether to show cursor when fullscreen
}D3DAPP;

#endif //DOLPHIN_H
