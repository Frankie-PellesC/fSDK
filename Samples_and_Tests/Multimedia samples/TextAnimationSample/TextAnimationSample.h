/*+@@file@@----------------------------------------------------------------*//*!
 \file		TextAnimationSample.h
 \par Description 
            
 \par  Status: 
            
 \par Project: 
            
 \date		Created  on Wed Nov 16 12:32:03 2016
 \date		Modified on Wed Nov 16 12:32:03 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once

// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#ifndef WINVER              // Allow use of features specific to Windows XP or later.
#define WINVER 0x0501       // Change this to the appropriate value to target other versions of Windows.
#endif

#ifndef _WIN32_WINNT        // Allow use of features specific to Windows XP or later.
#define _WIN32_WINNT 0x0501 // Change this to the appropriate value to target other versions of Windows.
#endif

#ifndef _WIN32_WINDOWS      // Allow use of features specific to Windows 98 or later.
#define _WIN32_WINDOWS 0x0410 // Change this to the appropriate value to target Windows Me or later.
#endif

#ifndef _WIN32_IE           // Allow use of features specific to IE 6.0 or later.
#define _WIN32_IE 0x0600    // Change this to the appropriate value to target other versions of IE.
#endif

#ifndef UNICODE
#define UNICODE
#endif

#define WIN32_LEAN_AND_MEAN     // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

// C RunTime Header Files
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <math.h>

#include <d2d1.h>
#include <d2d1helper.h>
#include <dwrite.h>
#include <wincodec.h>

#define Assert(a)

#include "RingBuffer.h"
#include <strsafe.h>

/******************************************************************
*                                                                 *
*  Macros                                                         *
*                                                                 *
******************************************************************/
__inline void SafeRelease(void *ppInterfaceToRelease)
{
	IUnknown **pIUnk = (IUnknown **)ppInterfaceToRelease;
	if (*pIUnk != NULL)
	{
		(*pIUnk)->lpVtbl->Release(*pIUnk);

		(*pIUnk) = NULL;
	}
}


#ifndef Assert
#if defined( DEBUG ) || defined( _DEBUG )
#define Assert(b) do {if (!(b)) {OutputDebugStringA("Assert: " #b "\n");}} while(0)
#else
#define Assert(b)
#endif //DEBUG || _DEBUG
#endif

#ifndef HINST_THISCOMPONENT
EXTERN_C IMAGE_DOS_HEADER __ImageBase;
#define HINST_THISCOMPONENT ((HINSTANCE)&__ImageBase)
#endif

/******************************************************************
*                                                                 *
*  DemoApp                                                        *
*                                                                 *
******************************************************************/

typedef enum
{
	None        = 0,
	Translation = 1,
	Rotation    = 2,
	Scaling     = 4
} AnimationStyleEnum;

typedef enum
{
	Default,
	Outline,
	UseA8Target,
	NumValues
} TextRenderingMethodEnum;

typedef struct
{
    DWORD                    m_startTime;
    AnimationStyleEnum       m_animationStyle;
    TextRenderingMethodEnum  m_renderingMethod;
    D2D1_POINT_2F            m_overhangOffset;
    HWND                     m_hwnd;
    ID2D1Factory            *m_pD2DFactory;
    IDWriteFactory          *m_pDWriteFactory;
    ID2D1HwndRenderTarget   *m_pRT;
    IDWriteTextFormat       *m_pTextFormat;
    IDWriteTextLayout       *m_pTextLayout;
    ID2D1SolidColorBrush    *m_pBlackBrush;
    ID2D1BitmapRenderTarget *m_pOpacityRT;
    BOOL                     m_fRunning;
	RingBuffer               m_times;
} DemoApp;

DemoApp *DemoAppNew(void);
void DemoAppDelete(DemoApp *);
HRESULT Initialize(DemoApp *);
void RunMessageLoop(DemoApp *);
HRESULT CreateDeviceIndependentResources(DemoApp *);
HRESULT CreateDeviceResources(DemoApp *);
void DiscardDeviceResources(DemoApp *);
HRESULT OnRender(DemoApp *);
void OnResize(DemoApp *, UINT width, UINT height);
HRESULT OnChar(DemoApp *, SHORT key);
void OnDestroy(DemoApp *);
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
void UpdateWindowText(DemoApp *);
HRESULT ResetAnimation(DemoApp *, BOOL resetClock);
void CalculateTransform(DemoApp *, D2D1_MATRIX_3X2_F *pTransform);
