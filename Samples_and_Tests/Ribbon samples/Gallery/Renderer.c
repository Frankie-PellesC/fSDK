/*+@@file@@----------------------------------------------------------------*//*!
 \file		Renderer.c
 \par Description 
            Functions to draw the shapes according to the parameters 
            specified through the ribbon.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:20:38 2016
 \date		Modified on Tue Nov  1 22:20:38 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/

#include "Renderer.h"
#include <propvarutil.h>
#include "Common.h"

#define SHAPE_MARGIN    5

COLORREF s_aColors[3] = {
	                        RGB(255, 0, 0), // Red 
	                        RGB(0, 255, 0), // Green
	                        RGB(0, 0, 255), // Blue
                       };

//Private functions prototypes
static void DrawRectangle(HDC hdc, POINT ptCenter, int nBoundingBoxLength, BOOL fIsRounded);
static void DrawEllipse(HDC hdc, POINT ptCenter, int nBoundingBoxLength);
static void DrawDiamond(HDC hdc, POINT ptCenter, int nBoundingBoxLength);

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		RendererInitialize
 \date		Created  on Tue Nov  1 00:27:48 2016
 \date		Modified on Tue Nov  1 00:27:48 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void RendererInitialize(Renderer *this, HWND hWnd)
{
    this->m_hWnd = hWnd;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		RendererGetRenderParam
 \date		Created  on Tue Nov  1 00:27:52 2016
 \date		Modified on Tue Nov  1 00:27:52 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void RendererGetRenderParam(Renderer *this, RenderParam *pParameter)
{
    if (pParameter != NULL)
    {
        *pParameter = this->m_param;
    }
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		RendererUpdateRenderParam
 \date		Created  on Tue Nov  1 00:27:55 2016
 \date		Modified on Tue Nov  1 00:27:55 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void RendererUpdateRenderParam(Renderer *this, RenderParam parameter)
{
    this->m_param = parameter;
    InvalidateRect(this->m_hWnd, NULL, TRUE);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		RendererDrawShapes
 \date		Created  on Tue Nov  1 00:29:02 2016
 \date		Modified on Tue Nov  1 00:29:02 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void RendererDrawShapes(Renderer *this, HDC hdc, RECT *rect)
{
    SHAPE_TYPE  eShapeType = this->m_param.eShapeType;

    int nCount = this->m_param.eViewLayout + 1;

    SIZE size;
    size.cx = rect->right  - rect->left;
    size.cy = rect->bottom - rect->top;

    HBRUSH hBrush = CreateSolidBrush(s_aColors[this->m_param.eShapeColor]);

    HGDIOBJ hOldBrush = SelectObject(hdc, hBrush);
    
    int nPenStyle;
    int nBorderSize = this->m_param.uBorderSize;
    switch (this->m_param.eBorderStyle)
    {
        case DASH:
            nPenStyle = PS_DASH;
            nBorderSize = 1;// Dash pen only works with a width of 1
            break;
        case SOLID:
            nPenStyle = PS_SOLID;
            break;
        default:
            nPenStyle = PS_NULL;
            break;
    }

    HPEN hPen = CreatePen(nPenStyle, nBorderSize, RGB(0, 0, 0));
    HGDIOBJ hOldPen = SelectObject(hdc, hPen);

    // Pick up the shorter length.
    int nLength = ( size.cx < size.cy ? size.cx : size.cy) / nCount;

    // Take margin into count
    nLength -= SHAPE_MARGIN;   

    if (nLength > 0)
    {
        // Now scale the length based on the parameter
        nLength = nLength * (this->m_param.eShapeSize + 1) / 3;
    }
    else
    {
        nLength = 0;
    }

    for (int i = 0; i < nCount ; i++)
    {
        for (int j = 0; j < nCount ; j++)
        {
            POINT ptCenter;
            ptCenter.y = rect->top + (2 * i + 1) * size.cy / (2 * nCount);
            ptCenter.x = rect->left + (2 * j + 1) * size.cx / (2 * nCount);

            switch (eShapeType)
            {
                case RECTANGLE:
                case ROUNDED_RECTANGLE:
                    DrawRectangle(hdc, ptCenter, nLength, eShapeType == ROUNDED_RECTANGLE);
                    break;
                case ELLIPSE:
                    DrawEllipse(hdc, ptCenter, nLength);
                    break;
                case DIAMOND:
                    DrawDiamond(hdc, ptCenter, nLength);
                    break;
            }
        }
    }

    SelectObject(hdc, hOldPen);
    SelectObject(hdc, hOldBrush);

    DeleteObject(hPen);
    DeleteObject(hBrush);
}


static void DrawRectangle(HDC hdc, POINT ptCenter, int nBoundingBoxLength, BOOL fIsRounded)
{
    if (fIsRounded)
    {
        int nRoundLength = nBoundingBoxLength / 10;
        if (nRoundLength < 2)
        {
            nRoundLength = 2;
        }

        RoundRect(hdc, ptCenter.x - nBoundingBoxLength / 2, ptCenter.y - nBoundingBoxLength / 2,
                    ptCenter.x + nBoundingBoxLength / 2, ptCenter.y + nBoundingBoxLength / 2, 
                    nRoundLength, nRoundLength);
    }
    else
    {
        Rectangle(hdc, ptCenter.x - nBoundingBoxLength / 2, ptCenter.y - nBoundingBoxLength / 2,
                    ptCenter.x + nBoundingBoxLength / 2, ptCenter.y + nBoundingBoxLength / 2);
    }
}

static void DrawEllipse(HDC hdc, POINT ptCenter, int nBoundingBoxLength)
{
    Ellipse(hdc, ptCenter.x - nBoundingBoxLength / 2, ptCenter.y - nBoundingBoxLength / 2,
                ptCenter.x + nBoundingBoxLength / 2, ptCenter.y + nBoundingBoxLength / 2);
}

static void DrawDiamond(HDC hdc, POINT ptCenter, int nBoundingBoxLength)
{
    POINT pt[4];
    int nLength = nBoundingBoxLength / 2;

    pt[0].x = ptCenter.x;
    pt[0].y = ptCenter.y - nLength;

    pt[1].x = ptCenter.x - nLength;
    pt[1].y = ptCenter.y;

    pt[2].x = ptCenter.x;
    pt[2].y = ptCenter.y + nLength;

    pt[3].x = ptCenter.x + nLength;
    pt[3].y = ptCenter.y;

    Polygon(hdc, pt, _countof(pt));
}
