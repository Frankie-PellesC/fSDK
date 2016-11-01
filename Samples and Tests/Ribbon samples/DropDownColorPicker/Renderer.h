/*+@@file@@----------------------------------------------------------------*//*!
 \file		Renderer.h
 \par Description 
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Oct 30 21:52:46 2016
 \date		Modified on Sun Oct 30 21:52:46 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include <assert.h>
#include <uiribbon.h>

#define DDCP_WIDTH 4
#define DDCP_HEIGHT 4

typedef struct ColorProperty
{
    UI_SWATCHCOLORTYPE type;    // Color type.
    COLORREF color;             // Color value.
} ColorProperty;

typedef struct
{
    HWND m_hWnd;										// handle to window.
    int m_highlightIndex;								// highlight index.
    ColorProperty m_colors[DDCP_WIDTH * DDCP_HEIGHT];	// color array.
    ColorProperty m_storedColor;						// preview color.
} Renderer;

HBRUSH RendererCreateBrushFromColorProp(Renderer *this, ColorProperty* colorProp);
void RendererInitialize(Renderer *this, HWND hwnd);
void RendererExecute(Renderer *this, UI_EXECUTIONVERB verb, ColorProperty color);
void RendererClearColorGrid(Renderer *this);    
COLORREF RendererGetColor(Renderer *this, int index);
void RendererDraw(Renderer *this, HDC hdc, UINT ribbonHeight);
