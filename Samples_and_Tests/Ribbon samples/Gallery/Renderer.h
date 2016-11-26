/*+@@file@@----------------------------------------------------------------*//*!
 \file		Renderer.h
 \par Description 
            Functions to draw the shapes according to the parameters 
            specified through the ribbon.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:19:44 2016
 \date		Modified on Tue Nov  1 22:19:44 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once
#include <windows.h>

/*
 *	Enums used to define the parameters for the renderer.
 */
typedef enum SHAPE_TYPE
{
    RECTANGLE           = 0,
    ELLIPSE             = 1,
    ROUNDED_RECTANGLE   = 2,
    DIAMOND             = 3,
} SHAPE_TYPE;

typedef enum SHAPE_COLOR
{
    RED   = 0,
    GREEN = 1,
    BLUE  = 2,
} SHAPE_COLOR;

typedef enum SHAPE_SIZE
{
    SMALL  = 0,
    MEDIUM = 1,
    LARGE  = 2,
} SHAPE_SIZE;

typedef enum BORDER_STYLE
{
    NONE  = 0,
    SOLID = 1,
    DASH  = 2,
} BORDER_STYLE;

typedef enum VIEW_LAYOUT
{
    LAYOUT1 = 0,
    LAYOUT2 = 1,
    LAYOUT3 = 2,
} VIEW_LAYOUT;

/*
 *	Parameters to the renderer- updated by the controls in the ribbon.
 */
typedef struct RenderParam
{
    SHAPE_TYPE      eShapeType;
    SHAPE_COLOR     eShapeColor;
    SHAPE_SIZE      eShapeSize;
    BORDER_STYLE    eBorderStyle;
    UINT            uBorderSize;
    VIEW_LAYOUT     eViewLayout;
} RenderParam;

typedef struct
{
    RenderParam     m_param;
    HWND            m_hWnd;
} Renderer;
void RendererInitialize(Renderer *this, HWND hWnd);
void RendererGetRenderParam(Renderer *this, RenderParam *pParameter);
void RendererUpdateRenderParam(Renderer *this, RenderParam parameter);
void RendererDrawShapes(Renderer *this, HDC hdc, RECT *rect);
