/*+@@file@@----------------------------------------------------------------*//*!
 \file		Renderer.c
 \par Description 
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Oct 30 21:41:30 2016
 \date		Modified on Sun Oct 30 21:41:30 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "Renderer.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		RendererInitialize
 \date		Created  on Sun Oct 30 21:41:46 2016
 \date		Modified on Sun Oct 30 21:41:46 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void RendererInitialize(Renderer *this, HWND hwnd)
{
	this->m_hWnd = hwnd;
	this->m_highlightIndex = 0;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		RendererExecute
 \date		Created  on Sun Oct 30 21:41:49 2016
 \date		Modified on Sun Oct 30 21:41:49 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void RendererExecute(Renderer *this, UI_EXECUTIONVERB verb, ColorProperty color)
{
	this->m_colors[this->m_highlightIndex] = color;

	if (verb == UI_EXECUTIONVERB_CANCELPREVIEW)
	{
		this->m_colors[this->m_highlightIndex] = this->m_storedColor;
	}

	if (verb == UI_EXECUTIONVERB_EXECUTE)
	{
		if (++this->m_highlightIndex >= DDCP_WIDTH * DDCP_HEIGHT)
		{
			// Rewind index if out of bound.
			this->m_highlightIndex = 0;
		}
		this->m_storedColor = this->m_colors[this->m_highlightIndex];
	}

	InvalidateRect(this->m_hWnd, NULL, FALSE);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		RendererClearColorGrid
 \date		Created  on Sun Oct 30 21:41:54 2016
 \date		Modified on Sun Oct 30 21:41:54 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void RendererClearColorGrid(Renderer *this)
{
	for (int i = 0; i < DDCP_WIDTH * DDCP_HEIGHT; i++)
	{
		this->m_colors[i].type = UI_SWATCHCOLORTYPE_NOCOLOR;
	}

	// Reset index.
	this->m_highlightIndex = 0;

	InvalidateRect(this->m_hWnd, NULL, FALSE);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		RendererGetColor
 \date		Created  on Sun Oct 30 21:41:57 2016
 \date		Modified on Sun Oct 30 21:41:57 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
COLORREF RendererGetColor(Renderer *this, int index)
{
	switch (this->m_colors[index].type)
	{
		case UI_SWATCHCOLORTYPE_NOCOLOR:
			return RGB(255, 255, 255);
		case UI_SWATCHCOLORTYPE_RGB:
			return this->m_colors[index].color;
		case UI_SWATCHCOLORTYPE_AUTOMATIC:
			return GetSysColor(COLOR_WINDOWTEXT);
	}
	return 0;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		RendererDraw
 \date		Created  on Sun Oct 30 21:42:00 2016
 \date		Modified on Sun Oct 30 21:42:00 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void RendererDraw(Renderer *this, HDC hdc, UINT ribbonHeight)
{    
    // Create yellow highlight pen.
    HPEN hPen = CreatePen(PS_INSIDEFRAME, 5, RGB(255,255,0));
    RECT canvas;
    GetClientRect(this->m_hWnd, &canvas);
    canvas.top += ribbonHeight;
    int cellHeight = (canvas.bottom - canvas.top ) / DDCP_HEIGHT;
    int cellWidth  = (canvas.right  - canvas.left) / DDCP_WIDTH;

    for (int i = 0; i < DDCP_WIDTH * DDCP_HEIGHT; i++)
    {
        // Create brush from current color and select it.
        HBRUSH hBrush = RendererCreateBrushFromColorProp(this, &this->m_colors[i]);
        HGDIOBJ hOldBrush = SelectObject(hdc, hBrush); 
        HGDIOBJ hOldPen = NULL;
        int col = i % DDCP_WIDTH;
        int row = i / DDCP_WIDTH;

        if (i == this->m_highlightIndex)
        {
            // Select highlight color pen.
            hOldPen = SelectObject(hdc, hPen); 
        }

        Rectangle(hdc, canvas.left+col*cellWidth, canvas.top+row*cellHeight, canvas.left+(col+1)*cellWidth, canvas.top+(row+1)*cellHeight);

        if (hOldPen)
        {
            SelectObject(hdc, hOldPen);
        }

        SelectObject(hdc, hOldBrush);
        DeleteObject(hBrush);        
    }
    DeleteObject(hPen);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		RendererCreateBrushFromColorProp
 \date		Created  on Sun Oct 30 21:42:04 2016
 \date		Modified on Sun Oct 30 21:42:04 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HBRUSH RendererCreateBrushFromColorProp(Renderer *this, ColorProperty *colorProp)
{
	switch (colorProp->type)
	{
		case UI_SWATCHCOLORTYPE_NOCOLOR:
			// Set brush to white (for no color).
			return CreateSolidBrush(RGB(255, 255, 255));
		case UI_SWATCHCOLORTYPE_RGB:
			// Set brush to stored RGB color.
			return CreateSolidBrush(colorProp->color);
		case UI_SWATCHCOLORTYPE_AUTOMATIC:
			// Set brush to system color.
			return CreateSolidBrush(GetSysColor(COLOR_WINDOWTEXT));
	}

	return NULL;
}
