/*+@@file@@----------------------------------------------------------------*//*!
 \file		d2d1.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jun  3 17:37:23 2016
 \date		Modified on Fri Jun  3 17:37:23 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef _D2D1_H_
#define _D2D1_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#endif
#include <unknwn.h>
#include <dcommon.h>
#include <D2DErr.h>
#include <D2DBaseTypes.h>
#include <dxgiformat.h>
#ifndef D2D_NO_INCLUDE_D3D10
#include <d3d10_1.h>
#endif
#ifndef D2D_USE_C_DEFINITIONS
#define D2D_USE_C_DEFINITIONS
#endif
#ifndef D2D1_DECLARE_INTERFACE
#define D2D1_DECLARE_INTERFACE(X) DECLSPEC_UUID(X) DECLSPEC_NOVTABLE
#endif
typedef interface IDWriteTextFormat IDWriteTextFormat;
typedef interface IDWriteTextLayout IDWriteTextLayout;
typedef interface IDWriteRenderingParams IDWriteRenderingParams;
typedef interface IDXGISurface IDXGISurface;
typedef interface IWICBitmap IWICBitmap;
typedef interface IWICBitmapSource IWICBitmapSource;
typedef struct DWRITE_GLYPH_RUN DWRITE_GLYPH_RUN;
typedef interface ID2D1Factory ID2D1Factory;
typedef interface ID2D1RenderTarget ID2D1RenderTarget;
typedef interface ID2D1BitmapRenderTarget ID2D1BitmapRenderTarget;
typedef interface ID2D1SimplifiedGeometrySink ID2D1SimplifiedGeometrySink;;
typedef interface ID2D1TessellationSink ID2D1TessellationSink;
typedef interface ID2D1Geometry ID2D1Geometry;
typedef interface ID2D1Brush ID2D1Brush;
#define D2D1_INVALID_TAG ULONGLONG_MAX
#define D2D1_DEFAULT_FLATTENING_TOLERANCE (0.25f)
typedef enum D2D1_ALPHA_MODE
{
	D2D1_ALPHA_MODE_UNKNOWN = 0,
	D2D1_ALPHA_MODE_PREMULTIPLIED = 1,
	D2D1_ALPHA_MODE_STRAIGHT = 2,
	D2D1_ALPHA_MODE_IGNORE = 3,
	D2D1_ALPHA_MODE_FORCE_DWORD = 0xffffffff
} D2D1_ALPHA_MODE;
typedef enum D2D1_GAMMA
{
	D2D1_GAMMA_2_2 = 0,
	D2D1_GAMMA_1_0 = 1,
	D2D1_GAMMA_FORCE_DWORD = 0xffffffff
} D2D1_GAMMA;
typedef enum D2D1_OPACITY_MASK_CONTENT
{
	D2D1_OPACITY_MASK_CONTENT_GRAPHICS = 0,
	D2D1_OPACITY_MASK_CONTENT_TEXT_NATURAL = 1,
	D2D1_OPACITY_MASK_CONTENT_TEXT_GDI_COMPATIBLE = 2,
	D2D1_OPACITY_MASK_CONTENT_FORCE_DWORD = 0xffffffff
} D2D1_OPACITY_MASK_CONTENT;
typedef enum D2D1_EXTEND_MODE
{
	D2D1_EXTEND_MODE_CLAMP = 0,
	D2D1_EXTEND_MODE_WRAP = 1,
	D2D1_EXTEND_MODE_MIRROR = 2,
	D2D1_EXTEND_MODE_FORCE_DWORD = 0xffffffff
} D2D1_EXTEND_MODE;
typedef enum D2D1_ANTIALIAS_MODE
{
	D2D1_ANTIALIAS_MODE_PER_PRIMITIVE = 0,
	D2D1_ANTIALIAS_MODE_ALIASED = 1,
	D2D1_ANTIALIAS_MODE_FORCE_DWORD = 0xffffffff
} D2D1_ANTIALIAS_MODE;
typedef enum D2D1_TEXT_ANTIALIAS_MODE
{
	D2D1_TEXT_ANTIALIAS_MODE_DEFAULT = 0,
	D2D1_TEXT_ANTIALIAS_MODE_CLEARTYPE = 1,
	D2D1_TEXT_ANTIALIAS_MODE_GRAYSCALE = 2,
	D2D1_TEXT_ANTIALIAS_MODE_ALIASED = 3,
	D2D1_TEXT_ANTIALIAS_MODE_FORCE_DWORD = 0xffffffff
} D2D1_TEXT_ANTIALIAS_MODE;
typedef enum D2D1_BITMAP_INTERPOLATION_MODE
{
	D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR = 0,
	D2D1_BITMAP_INTERPOLATION_MODE_LINEAR = 1,
	D2D1_BITMAP_INTERPOLATION_MODE_FORCE_DWORD = 0xffffffff
} D2D1_BITMAP_INTERPOLATION_MODE;
typedef enum D2D1_DRAW_TEXT_OPTIONS
{
	D2D1_DRAW_TEXT_OPTIONS_NO_SNAP = 0x00000001,
	D2D1_DRAW_TEXT_OPTIONS_CLIP = 0x00000002,
	D2D1_DRAW_TEXT_OPTIONS_NONE = 0x00000000,
	D2D1_DRAW_TEXT_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_DRAW_TEXT_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_DRAW_TEXT_OPTIONS);
typedef struct D2D1_PIXEL_FORMAT
{
	DXGI_FORMAT format;
	D2D1_ALPHA_MODE alphaMode;
} D2D1_PIXEL_FORMAT;
typedef D2D_POINT_2U D2D1_POINT_2U;
typedef D2D_POINT_2F D2D1_POINT_2F;
typedef D2D_RECT_F D2D1_RECT_F;
typedef D2D_RECT_U D2D1_RECT_U;
typedef D2D_SIZE_F D2D1_SIZE_F;
typedef D2D_SIZE_U D2D1_SIZE_U;
typedef D2D_COLOR_F D2D1_COLOR_F;
typedef D2D_MATRIX_3X2_F D2D1_MATRIX_3X2_F;
typedef UINT64 D2D1_TAG;
typedef struct D2D1_BITMAP_PROPERTIES
{
	D2D1_PIXEL_FORMAT pixelFormat;
	FLOAT dpiX;
	FLOAT dpiY;
} D2D1_BITMAP_PROPERTIES;
typedef struct D2D1_GRADIENT_STOP
{
	FLOAT position;
	D2D1_COLOR_F color;
} D2D1_GRADIENT_STOP;
typedef struct D2D1_BRUSH_PROPERTIES
{
	FLOAT opacity;
	D2D1_MATRIX_3X2_F transform;
} D2D1_BRUSH_PROPERTIES;
typedef struct D2D1_BITMAP_BRUSH_PROPERTIES
{
	D2D1_EXTEND_MODE extendModeX;
	D2D1_EXTEND_MODE extendModeY;
	D2D1_BITMAP_INTERPOLATION_MODE interpolationMode;
} D2D1_BITMAP_BRUSH_PROPERTIES;
typedef struct D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES
{
	D2D1_POINT_2F startPoint;
	D2D1_POINT_2F endPoint;
} D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES;
typedef struct D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES
{
	D2D1_POINT_2F center;
	D2D1_POINT_2F gradientOriginOffset;
	FLOAT radiusX;
	FLOAT radiusY;
} D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES;
typedef enum D2D1_ARC_SIZE
{
	D2D1_ARC_SIZE_SMALL = 0,
	D2D1_ARC_SIZE_LARGE = 1,
	D2D1_ARC_SIZE_FORCE_DWORD = 0xffffffff
} D2D1_ARC_SIZE;
typedef enum D2D1_CAP_STYLE
{
	D2D1_CAP_STYLE_FLAT = 0,
	D2D1_CAP_STYLE_SQUARE = 1,
	D2D1_CAP_STYLE_ROUND = 2,
	D2D1_CAP_STYLE_TRIANGLE = 3,
	D2D1_CAP_STYLE_FORCE_DWORD = 0xffffffff
} D2D1_CAP_STYLE;
typedef enum D2D1_DASH_STYLE
{
	D2D1_DASH_STYLE_SOLID = 0,
	D2D1_DASH_STYLE_DASH = 1,
	D2D1_DASH_STYLE_DOT = 2,
	D2D1_DASH_STYLE_DASH_DOT = 3,
	D2D1_DASH_STYLE_DASH_DOT_DOT = 4,
	D2D1_DASH_STYLE_CUSTOM = 5,
	D2D1_DASH_STYLE_FORCE_DWORD = 0xffffffff
} D2D1_DASH_STYLE;
typedef enum D2D1_LINE_JOIN
{
	D2D1_LINE_JOIN_MITER = 0,
	D2D1_LINE_JOIN_BEVEL = 1,
	D2D1_LINE_JOIN_ROUND = 2,
	D2D1_LINE_JOIN_MITER_OR_BEVEL = 3,
	D2D1_LINE_JOIN_FORCE_DWORD = 0xffffffff
} D2D1_LINE_JOIN;
typedef enum D2D1_COMBINE_MODE
{
	D2D1_COMBINE_MODE_UNION = 0,
	D2D1_COMBINE_MODE_INTERSECT = 1,
	D2D1_COMBINE_MODE_XOR = 2,
	D2D1_COMBINE_MODE_EXCLUDE = 3,
	D2D1_COMBINE_MODE_FORCE_DWORD = 0xffffffff
} D2D1_COMBINE_MODE;
typedef enum D2D1_GEOMETRY_RELATION
{
	D2D1_GEOMETRY_RELATION_UNKNOWN = 0,
	D2D1_GEOMETRY_RELATION_DISJOINT = 1,
	D2D1_GEOMETRY_RELATION_IS_CONTAINED = 2,
	D2D1_GEOMETRY_RELATION_CONTAINS = 3,
	D2D1_GEOMETRY_RELATION_OVERLAP = 4,
	D2D1_GEOMETRY_RELATION_FORCE_DWORD = 0xffffffff
} D2D1_GEOMETRY_RELATION;
typedef enum D2D1_GEOMETRY_SIMPLIFICATION_OPTION
{
	D2D1_GEOMETRY_SIMPLIFICATION_OPTION_CUBICS_AND_LINES = 0,
	D2D1_GEOMETRY_SIMPLIFICATION_OPTION_LINES = 1,
	D2D1_GEOMETRY_SIMPLIFICATION_OPTION_FORCE_DWORD = 0xffffffff
} D2D1_GEOMETRY_SIMPLIFICATION_OPTION;
typedef enum D2D1_FIGURE_BEGIN
{
	D2D1_FIGURE_BEGIN_FILLED = 0,
	D2D1_FIGURE_BEGIN_HOLLOW = 1,
	D2D1_FIGURE_BEGIN_FORCE_DWORD = 0xffffffff
} D2D1_FIGURE_BEGIN;
typedef enum D2D1_FIGURE_END
{
	D2D1_FIGURE_END_OPEN = 0,
	D2D1_FIGURE_END_CLOSED = 1,
	D2D1_FIGURE_END_FORCE_DWORD = 0xffffffff
} D2D1_FIGURE_END;
typedef struct D2D1_BEZIER_SEGMENT
{
	D2D1_POINT_2F point1;
	D2D1_POINT_2F point2;
	D2D1_POINT_2F point3;
} D2D1_BEZIER_SEGMENT;
typedef struct D2D1_TRIANGLE
{
	D2D1_POINT_2F point1;
	D2D1_POINT_2F point2;
	D2D1_POINT_2F point3;
} D2D1_TRIANGLE;
typedef enum D2D1_PATH_SEGMENT
{
	D2D1_PATH_SEGMENT_NONE = 0x00000000,
	D2D1_PATH_SEGMENT_FORCE_UNSTROKED = 0x00000001,
	D2D1_PATH_SEGMENT_FORCE_ROUND_LINE_JOIN = 0x00000002,
	D2D1_PATH_SEGMENT_FORCE_DWORD = 0xffffffff
} D2D1_PATH_SEGMENT;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_PATH_SEGMENT);
typedef enum D2D1_SWEEP_DIRECTION
{
	D2D1_SWEEP_DIRECTION_COUNTER_CLOCKWISE = 0,
	D2D1_SWEEP_DIRECTION_CLOCKWISE = 1,
	D2D1_SWEEP_DIRECTION_FORCE_DWORD = 0xffffffff
} D2D1_SWEEP_DIRECTION;
typedef enum D2D1_FILL_MODE
{
	D2D1_FILL_MODE_ALTERNATE = 0,
	D2D1_FILL_MODE_WINDING = 1,
	D2D1_FILL_MODE_FORCE_DWORD = 0xffffffff
} D2D1_FILL_MODE;
typedef struct D2D1_ARC_SEGMENT
{
	D2D1_POINT_2F point;
	D2D1_SIZE_F size;
	FLOAT rotationAngle;
	D2D1_SWEEP_DIRECTION sweepDirection;
	D2D1_ARC_SIZE arcSize;
} D2D1_ARC_SEGMENT;
typedef struct D2D1_QUADRATIC_BEZIER_SEGMENT
{
	D2D1_POINT_2F point1;
	D2D1_POINT_2F point2;
} D2D1_QUADRATIC_BEZIER_SEGMENT;
typedef struct D2D1_ELLIPSE
{
	D2D1_POINT_2F point;
	FLOAT radiusX;
	FLOAT radiusY;
} D2D1_ELLIPSE;
typedef struct D2D1_ROUNDED_RECT
{
	D2D1_RECT_F rect;
	FLOAT radiusX;
	FLOAT radiusY;
} D2D1_ROUNDED_RECT;
typedef struct D2D1_STROKE_STYLE_PROPERTIES
{
	D2D1_CAP_STYLE startCap;
	D2D1_CAP_STYLE endCap;
	D2D1_CAP_STYLE dashCap;
	D2D1_LINE_JOIN lineJoin;
	FLOAT miterLimit;
	D2D1_DASH_STYLE dashStyle;
	FLOAT dashOffset;
} D2D1_STROKE_STYLE_PROPERTIES;
typedef enum D2D1_LAYER_OPTIONS
{
	D2D1_LAYER_OPTIONS_NONE = 0x00000000,
	D2D1_LAYER_OPTIONS_INITIALIZE_FOR_CLEARTYPE = 0x00000001,
	D2D1_LAYER_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_LAYER_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_LAYER_OPTIONS);
typedef struct D2D1_LAYER_PARAMETERS
{
	D2D1_RECT_F contentBounds;
	ID2D1Geometry *geometricMask;
	D2D1_ANTIALIAS_MODE maskAntialiasMode;
	D2D1_MATRIX_3X2_F maskTransform;
	FLOAT opacity;
	ID2D1Brush *opacityBrush;
	D2D1_LAYER_OPTIONS layerOptions;
} D2D1_LAYER_PARAMETERS;
typedef enum D2D1_WINDOW_STATE
{
	D2D1_WINDOW_STATE_NONE = 0x0000000,
	D2D1_WINDOW_STATE_OCCLUDED = 0x0000001,
	D2D1_WINDOW_STATE_FORCE_DWORD = 0xffffffff
} D2D1_WINDOW_STATE;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_WINDOW_STATE);
typedef enum D2D1_RENDER_TARGET_TYPE
{
	D2D1_RENDER_TARGET_TYPE_DEFAULT = 0,
	D2D1_RENDER_TARGET_TYPE_SOFTWARE = 1,
	D2D1_RENDER_TARGET_TYPE_HARDWARE = 2,
	D2D1_RENDER_TARGET_TYPE_FORCE_DWORD = 0xffffffff
} D2D1_RENDER_TARGET_TYPE;
typedef enum D2D1_FEATURE_LEVEL
{
	D2D1_FEATURE_LEVEL_DEFAULT = 0,
	D2D1_FEATURE_LEVEL_9 = D3D10_FEATURE_LEVEL_9_1,
	D2D1_FEATURE_LEVEL_10 = D3D10_FEATURE_LEVEL_10_0,
	D2D1_FEATURE_LEVEL_FORCE_DWORD = 0xffffffff
} D2D1_FEATURE_LEVEL;
typedef enum D2D1_RENDER_TARGET_USAGE
{
	D2D1_RENDER_TARGET_USAGE_NONE = 0x00000000,
	D2D1_RENDER_TARGET_USAGE_FORCE_BITMAP_REMOTING = 0x00000001,
	D2D1_RENDER_TARGET_USAGE_GDI_COMPATIBLE = 0x00000002,
	D2D1_RENDER_TARGET_USAGE_FORCE_DWORD = 0xffffffff
} D2D1_RENDER_TARGET_USAGE;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_RENDER_TARGET_USAGE);
typedef enum D2D1_PRESENT_OPTIONS
{
	D2D1_PRESENT_OPTIONS_NONE = 0x00000000,
	D2D1_PRESENT_OPTIONS_RETAIN_CONTENTS = 0x00000001,
	D2D1_PRESENT_OPTIONS_IMMEDIATELY = 0x00000002,
	D2D1_PRESENT_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_PRESENT_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_PRESENT_OPTIONS);
typedef struct D2D1_RENDER_TARGET_PROPERTIES
{
	D2D1_RENDER_TARGET_TYPE type;
	D2D1_PIXEL_FORMAT pixelFormat;
	FLOAT dpiX;
	FLOAT dpiY;
	D2D1_RENDER_TARGET_USAGE usage;
	D2D1_FEATURE_LEVEL minLevel;
} D2D1_RENDER_TARGET_PROPERTIES;
typedef struct D2D1_HWND_RENDER_TARGET_PROPERTIES
{
	HWND hwnd;
	D2D1_SIZE_U pixelSize;
	D2D1_PRESENT_OPTIONS presentOptions;
} D2D1_HWND_RENDER_TARGET_PROPERTIES;
typedef enum D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS
{
	D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS_NONE = 0x00000000,
	D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS_GDI_COMPATIBLE = 0x00000001,
	D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS_FORCE_DWORD = 0xffffffff
} D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS);
typedef struct D2D1_DRAWING_STATE_DESCRIPTION
{
	D2D1_ANTIALIAS_MODE antialiasMode;
	D2D1_TEXT_ANTIALIAS_MODE textAntialiasMode;
	D2D1_TAG tag1;
	D2D1_TAG tag2;
	D2D1_MATRIX_3X2_F transform;
} D2D1_DRAWING_STATE_DESCRIPTION;
typedef enum D2D1_DC_INITIALIZE_MODE
{
	D2D1_DC_INITIALIZE_MODE_COPY = 0,
	D2D1_DC_INITIALIZE_MODE_CLEAR = 1,
	D2D1_DC_INITIALIZE_MODE_FORCE_DWORD = 0xffffffff
} D2D1_DC_INITIALIZE_MODE;
typedef enum D2D1_DEBUG_LEVEL
{
	D2D1_DEBUG_LEVEL_NONE = 0,
	D2D1_DEBUG_LEVEL_ERROR = 1,
	D2D1_DEBUG_LEVEL_WARNING = 2,
	D2D1_DEBUG_LEVEL_INFORMATION = 3,
	D2D1_DEBUG_LEVEL_FORCE_DWORD = 0xffffffff
} D2D1_DEBUG_LEVEL;
typedef enum D2D1_FACTORY_TYPE
{
	D2D1_FACTORY_TYPE_SINGLE_THREADED = 0,
	D2D1_FACTORY_TYPE_MULTI_THREADED = 1,
	D2D1_FACTORY_TYPE_FORCE_DWORD = 0xffffffff
} D2D1_FACTORY_TYPE;
typedef struct D2D1_FACTORY_OPTIONS
{
	D2D1_DEBUG_LEVEL debugLevel;
} D2D1_FACTORY_OPTIONS;
extern CONST IID IID_ID2D1Resource;
extern CONST IID IID_ID2D1Bitmap;
extern CONST IID IID_ID2D1GradientStopCollection;
extern CONST IID IID_ID2D1Brush;
extern CONST IID IID_ID2D1BitmapBrush;
extern CONST IID IID_ID2D1SolidColorBrush;
extern CONST IID IID_ID2D1LinearGradientBrush;
extern CONST IID IID_ID2D1RadialGradientBrush;
extern CONST IID IID_ID2D1StrokeStyle;
extern CONST IID IID_ID2D1Geometry;
extern CONST IID IID_ID2D1RectangleGeometry;
extern CONST IID IID_ID2D1RoundedRectangleGeometry;
extern CONST IID IID_ID2D1EllipseGeometry;
extern CONST IID IID_ID2D1GeometryGroup;
extern CONST IID IID_ID2D1TransformedGeometry;
extern CONST IID IID_ID2D1SimplifiedGeometrySink;
extern CONST IID IID_ID2D1GeometrySink;
extern CONST IID IID_ID2D1TessellationSink;
extern CONST IID IID_ID2D1PathGeometry;
extern CONST IID IID_ID2D1Mesh;
extern CONST IID IID_ID2D1Layer;
extern CONST IID IID_ID2D1DrawingStateBlock;
extern CONST IID IID_ID2D1RenderTarget;
extern CONST IID IID_ID2D1BitmapRenderTarget;
extern CONST IID IID_ID2D1HwndRenderTarget;
extern CONST IID IID_ID2D1GdiInteropRenderTarget;
extern CONST IID IID_ID2D1DCRenderTarget;
extern CONST IID IID_ID2D1Factory;
typedef interface ID2D1Resource ID2D1Resource;
typedef struct ID2D1ResourceVtbl
{
	IUnknownVtbl Base;
	STDMETHOD_(void, GetFactory) (ID2D1Resource * This, ID2D1Factory ** factory);
} ID2D1ResourceVtbl;
interface ID2D1Resource
{
	CONST struct ID2D1ResourceVtbl *lpVtbl;
};
#define ID2D1Resource_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1Resource_AddRef(This) \
    ((This)->lpVtbl->Base.AddRef((IUnknown *)This))
#define ID2D1Resource_Release(This) \
    ((This)->lpVtbl->Base.Release((IUnknown *)This))
#define ID2D1Resource_GetFactory(This, factory) \
    ((This)->lpVtbl->GetFactory(This, factory))
typedef interface ID2D1Bitmap ID2D1Bitmap;
typedef struct ID2D1BitmapVtbl
{
	ID2D1ResourceVtbl Base;
	STDMETHOD_(D2D1_SIZE_F, GetSize) (ID2D1Bitmap * This);
	STDMETHOD_(D2D1_SIZE_U, GetPixelSize) (ID2D1Bitmap * This);
	STDMETHOD_(D2D1_PIXEL_FORMAT, GetPixelFormat) (ID2D1Bitmap * This);
	STDMETHOD_(void, GetDpi) (ID2D1Bitmap * This, FLOAT * dpiX, FLOAT * dpiY);
	STDMETHOD(CopyFromBitmap) (ID2D1Bitmap * This, CONST D2D1_POINT_2U * destPoint, ID2D1Bitmap * bitmap, CONST D2D1_RECT_U * srcRect);
	STDMETHOD(CopyFromRenderTarget) (ID2D1Bitmap * This, CONST D2D1_POINT_2U * destPoint, ID2D1RenderTarget * renderTarget, CONST D2D1_RECT_U * srcRect);
	STDMETHOD(CopyFromMemory) (ID2D1Bitmap * This, CONST D2D1_RECT_U * dstRect, CONST void *srcData, UINT32 pitch);
} ID2D1BitmapVtbl;
interface ID2D1Bitmap
{
	CONST struct ID2D1BitmapVtbl *lpVtbl;
};
#define ID2D1Bitmap_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1Bitmap_AddRef(This) \
    ((This)->lpVtbl->Base.Base.AddRef((IUnknown *)This))
#define ID2D1Bitmap_Release(This) \
    ((This)->lpVtbl->Base.Base.Release((IUnknown *)This))
#define ID2D1Bitmap_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1Bitmap_GetSize(This) \
    ((This)->lpVtbl->GetSize(This))
#define ID2D1Bitmap_GetPixelSize(This) \
    ((This)->lpVtbl->GetPixelSize(This))
#define ID2D1Bitmap_GetPixelFormat(This) \
    ((This)->lpVtbl->GetPixelFormat(This))
#define ID2D1Bitmap_GetDpi(This, dpiX, dpiY) \
    ((This)->lpVtbl->GetDpi(This, dpiX, dpiY))
#define ID2D1Bitmap_CopyFromBitmap(This, destPoint, bitmap, srcRect) \
    ((This)->lpVtbl->CopyFromBitmap(This, destPoint, bitmap, srcRect))
#define ID2D1Bitmap_CopyFromRenderTarget(This, destPoint, renderTarget, srcRect) \
    ((This)->lpVtbl->CopyFromRenderTarget(This, destPoint, renderTarget, srcRect))
#define ID2D1Bitmap_CopyFromMemory(This, dstRect, srcData, pitch) \
    ((This)->lpVtbl->CopyFromMemory(This, dstRect, srcData, pitch))
typedef interface ID2D1GradientStopCollection ID2D1GradientStopCollection;
typedef struct ID2D1GradientStopCollectionVtbl
{
	ID2D1ResourceVtbl Base;
	STDMETHOD_(UINT32, GetGradientStopCount) (ID2D1GradientStopCollection * This);
	STDMETHOD_(void, GetGradientStops) (ID2D1GradientStopCollection * This, D2D1_GRADIENT_STOP * gradientStops, UINT gradientStopsCount);
	STDMETHOD_(D2D1_GAMMA, GetColorInterpolationGamma) (ID2D1GradientStopCollection * This);
	STDMETHOD_(D2D1_EXTEND_MODE, GetExtendMode) (ID2D1GradientStopCollection * This);
} ID2D1GradientStopCollectionVtbl;
interface ID2D1GradientStopCollection
{
	CONST struct ID2D1GradientStopCollectionVtbl *lpVtbl;
};
#define ID2D1GradientStopCollection_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1GradientStopCollection_AddRef(This) \
    ((This)->lpVtbl->Base.Base.AddRef((IUnknown *)This))
#define ID2D1GradientStopCollection_Release(This) \
    ((This)->lpVtbl->Base.Base.Release((IUnknown *)This))
#define ID2D1GradientStopCollection_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1GradientStopCollection_GetGradientStopCount(This) \
    ((This)->lpVtbl->GetGradientStopCount(This))
#define ID2D1GradientStopCollection_GetGradientStops(This, gradientStops, gradientStopsCount) \
    ((This)->lpVtbl->GetGradientStops(This, gradientStops, gradientStopsCount))
#define ID2D1GradientStopCollection_GetColorInterpolationGamma(This) \
    ((This)->lpVtbl->GetColorInterpolationGamma(This))
#define ID2D1GradientStopCollection_GetExtendMode(This) \
    ((This)->lpVtbl->GetExtendMode(This))
typedef interface ID2D1Brush ID2D1Brush;
typedef struct ID2D1BrushVtbl
{
	ID2D1ResourceVtbl Base;
	STDMETHOD_(void, SetOpacity) (ID2D1Brush * This, FLOAT opacity);
	STDMETHOD_(void, SetTransform) (ID2D1Brush * This, CONST D2D1_MATRIX_3X2_F * transform);
	STDMETHOD_(FLOAT, GetOpacity) (ID2D1Brush * This);
	STDMETHOD_(void, GetTransform) (ID2D1Brush * This, D2D1_MATRIX_3X2_F * transform);
} ID2D1BrushVtbl;
interface ID2D1Brush
{
	CONST struct ID2D1BrushVtbl *lpVtbl;
};
#define ID2D1Brush_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1Brush_AddRef(This) \
    ((This)->lpVtbl->Base.Base.AddRef((IUnknown *)This))
#define ID2D1Brush_Release(This) \
    ((This)->lpVtbl->Base.Base.Release((IUnknown *)This))
#define ID2D1Brush_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1Brush_SetOpacity(This, opacity) \
    ((This)->lpVtbl->SetOpacity(This, opacity))
#define ID2D1Brush_SetTransform(This, transform) \
    ((This)->lpVtbl->SetTransform(This, transform))
#define ID2D1Brush_GetOpacity(This) \
    ((This)->lpVtbl->GetOpacity(This))
#define ID2D1Brush_GetTransform(This, transform) \
    ((This)->lpVtbl->GetTransform(This, transform))
typedef interface ID2D1BitmapBrush ID2D1BitmapBrush;
typedef struct ID2D1BitmapBrushVtbl
{
	ID2D1BrushVtbl Base;
	STDMETHOD_(void, SetExtendModeX) (ID2D1BitmapBrush * This, D2D1_EXTEND_MODE extendModeX);
	STDMETHOD_(void, SetExtendModeY) (ID2D1BitmapBrush * This, D2D1_EXTEND_MODE extendModeY);
	STDMETHOD_(void, SetInterpolationMode) (ID2D1BitmapBrush * This, D2D1_BITMAP_INTERPOLATION_MODE interpolationMode);
	STDMETHOD_(void, SetBitmap) (ID2D1BitmapBrush * This, ID2D1Bitmap * bitmap);
	STDMETHOD_(D2D1_EXTEND_MODE, GetExtendModeX) (ID2D1BitmapBrush * This);
	STDMETHOD_(D2D1_EXTEND_MODE, GetExtendModeY) (ID2D1BitmapBrush * This);
	STDMETHOD_(D2D1_BITMAP_INTERPOLATION_MODE, GetInterpolationMode) (ID2D1BitmapBrush * This);
	STDMETHOD_(void, GetBitmap) (ID2D1BitmapBrush * This, ID2D1Bitmap ** bitmap);
} ID2D1BitmapBrushVtbl;
interface ID2D1BitmapBrush
{
	CONST struct ID2D1BitmapBrushVtbl *lpVtbl;
};
#define ID2D1BitmapBrush_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1BitmapBrush_AddRef(This) \
    ((This)->lpVtbl->Base.Base.Base.AddRef((IUnknown *)This))
#define ID2D1BitmapBrush_Release(This) \
    ((This)->lpVtbl->Base.Base.Base.Release((IUnknown *)This))
#define ID2D1BitmapBrush_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1BitmapBrush_SetOpacity(This, opacity) \
    ((This)->lpVtbl->Base.SetOpacity((ID2D1Brush *)This, opacity))
#define ID2D1BitmapBrush_SetTransform(This, transform) \
    ((This)->lpVtbl->Base.SetTransform((ID2D1Brush *)This, transform))
#define ID2D1BitmapBrush_GetOpacity(This) \
    ((This)->lpVtbl->Base.GetOpacity((ID2D1Brush *)This))
#define ID2D1BitmapBrush_GetTransform(This, transform) \
    ((This)->lpVtbl->Base.GetTransform((ID2D1Brush *)This, transform))
#define ID2D1BitmapBrush_SetExtendModeX(This, extendModeX) \
    ((This)->lpVtbl->SetExtendModeX(This, extendModeX))
#define ID2D1BitmapBrush_SetExtendModeY(This, extendModeY) \
    ((This)->lpVtbl->SetExtendModeY(This, extendModeY))
#define ID2D1BitmapBrush_SetInterpolationMode(This, interpolationMode) \
    ((This)->lpVtbl->SetInterpolationMode(This, interpolationMode))
#define ID2D1BitmapBrush_SetBitmap(This, bitmap) \
    ((This)->lpVtbl->SetBitmap(This, bitmap))
#define ID2D1BitmapBrush_GetExtendModeX(This) \
    ((This)->lpVtbl->GetExtendModeX(This))
#define ID2D1BitmapBrush_GetExtendModeY(This) \
    ((This)->lpVtbl->GetExtendModeY(This))
#define ID2D1BitmapBrush_GetInterpolationMode(This) \
    ((This)->lpVtbl->GetInterpolationMode(This))
#define ID2D1BitmapBrush_GetBitmap(This, bitmap) \
    ((This)->lpVtbl->GetBitmap(This, bitmap))
typedef interface ID2D1SolidColorBrush ID2D1SolidColorBrush;
typedef struct ID2D1SolidColorBrushVtbl
{
	ID2D1BrushVtbl Base;
	STDMETHOD_(void, SetColor) (ID2D1SolidColorBrush * This, CONST D2D1_COLOR_F * color);
	STDMETHOD_(D2D1_COLOR_F, GetColor) (ID2D1SolidColorBrush * This);
} ID2D1SolidColorBrushVtbl;
interface ID2D1SolidColorBrush
{
	CONST struct ID2D1SolidColorBrushVtbl *lpVtbl;
};
#define ID2D1SolidColorBrush_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1SolidColorBrush_AddRef(This) \
    ((This)->lpVtbl->Base.Base.Base.AddRef((IUnknown *)This))
#define ID2D1SolidColorBrush_Release(This) \
    ((This)->lpVtbl->Base.Base.Base.Release((IUnknown *)This))
#define ID2D1SolidColorBrush_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1SolidColorBrush_SetOpacity(This, opacity) \
    ((This)->lpVtbl->Base.SetOpacity((ID2D1Brush *)This, opacity))
#define ID2D1SolidColorBrush_SetTransform(This, transform) \
    ((This)->lpVtbl->Base.SetTransform((ID2D1Brush *)This, transform))
#define ID2D1SolidColorBrush_GetOpacity(This) \
    ((This)->lpVtbl->Base.GetOpacity((ID2D1Brush *)This))
#define ID2D1SolidColorBrush_GetTransform(This, transform) \
    ((This)->lpVtbl->Base.GetTransform((ID2D1Brush *)This, transform))
#define ID2D1SolidColorBrush_SetColor(This, color) \
    ((This)->lpVtbl->SetColor(This, color))
#define ID2D1SolidColorBrush_GetColor(This) \
    ((This)->lpVtbl->GetColor(This))
typedef interface ID2D1LinearGradientBrush ID2D1LinearGradientBrush;
typedef struct ID2D1LinearGradientBrushVtbl
{
	ID2D1BrushVtbl Base;
	STDMETHOD_(void, SetStartPoint) (ID2D1LinearGradientBrush * This, D2D1_POINT_2F startPoint);
	STDMETHOD_(void, SetEndPoint) (ID2D1LinearGradientBrush * This, D2D1_POINT_2F endPoint);
	STDMETHOD_(D2D1_POINT_2F, GetStartPoint) (ID2D1LinearGradientBrush * This);
	STDMETHOD_(D2D1_POINT_2F, GetEndPoint) (ID2D1LinearGradientBrush * This);
	STDMETHOD_(void, GetGradientStopCollection) (ID2D1LinearGradientBrush * This, ID2D1GradientStopCollection ** gradientStopCollection);
} ID2D1LinearGradientBrushVtbl;
interface ID2D1LinearGradientBrush
{
	CONST struct ID2D1LinearGradientBrushVtbl *lpVtbl;
};
#define ID2D1LinearGradientBrush_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1LinearGradientBrush_AddRef(This) \
    ((This)->lpVtbl->Base.Base.Base.AddRef((IUnknown *)This))
#define ID2D1LinearGradientBrush_Release(This) \
    ((This)->lpVtbl->Base.Base.Base.Release((IUnknown *)This))
#define ID2D1LinearGradientBrush_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1LinearGradientBrush_SetOpacity(This, opacity) \
    ((This)->lpVtbl->Base.SetOpacity((ID2D1Brush *)This, opacity))
#define ID2D1LinearGradientBrush_SetTransform(This, transform) \
    ((This)->lpVtbl->Base.SetTransform((ID2D1Brush *)This, transform))
#define ID2D1LinearGradientBrush_GetOpacity(This) \
    ((This)->lpVtbl->Base.GetOpacity((ID2D1Brush *)This))
#define ID2D1LinearGradientBrush_GetTransform(This, transform) \
    ((This)->lpVtbl->Base.GetTransform((ID2D1Brush *)This, transform))
#define ID2D1LinearGradientBrush_SetStartPoint(This, startPoint) \
    ((This)->lpVtbl->SetStartPoint(This, startPoint))
#define ID2D1LinearGradientBrush_SetEndPoint(This, endPoint) \
    ((This)->lpVtbl->SetEndPoint(This, endPoint))
#define ID2D1LinearGradientBrush_GetStartPoint(This) \
    ((This)->lpVtbl->GetStartPoint(This))
#define ID2D1LinearGradientBrush_GetEndPoint(This) \
    ((This)->lpVtbl->GetEndPoint(This))
#define ID2D1LinearGradientBrush_GetGradientStopCollection(This, gradientStopCollection) \
    ((This)->lpVtbl->GetGradientStopCollection(This, gradientStopCollection))
typedef interface ID2D1RadialGradientBrush ID2D1RadialGradientBrush;
typedef struct ID2D1RadialGradientBrushVtbl
{
	ID2D1BrushVtbl Base;
	STDMETHOD_(void, SetCenter) (ID2D1RadialGradientBrush * This, D2D1_POINT_2F center);
	STDMETHOD_(void, SetGradientOriginOffset) (ID2D1RadialGradientBrush * This, D2D1_POINT_2F gradientOriginOffset);
	STDMETHOD_(void, SetRadiusX) (ID2D1RadialGradientBrush * This, FLOAT radiusX);
	STDMETHOD_(void, SetRadiusY) (ID2D1RadialGradientBrush * This, FLOAT radiusY);
	STDMETHOD_(D2D1_POINT_2F, GetCenter) (ID2D1RadialGradientBrush * This);
	STDMETHOD_(D2D1_POINT_2F, GetGradientOriginOffset) (ID2D1RadialGradientBrush * This);
	STDMETHOD_(FLOAT, GetRadiusX) (ID2D1RadialGradientBrush * This);
	STDMETHOD_(FLOAT, GetRadiusY) (ID2D1RadialGradientBrush * This);
	STDMETHOD_(void, GetGradientStopCollection) (ID2D1RadialGradientBrush * This, ID2D1GradientStopCollection ** gradientStopCollection);
} ID2D1RadialGradientBrushVtbl;
interface ID2D1RadialGradientBrush
{
	CONST struct ID2D1RadialGradientBrushVtbl *lpVtbl;
};
#define ID2D1RadialGradientBrush_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1RadialGradientBrush_AddRef(This) \
    ((This)->lpVtbl->Base.Base.Base.AddRef((IUnknown *)This))
#define ID2D1RadialGradientBrush_Release(This) \
    ((This)->lpVtbl->Base.Base.Base.Release((IUnknown *)This))
#define ID2D1RadialGradientBrush_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1RadialGradientBrush_SetOpacity(This, opacity) \
    ((This)->lpVtbl->Base.SetOpacity((ID2D1Brush *)This, opacity))
#define ID2D1RadialGradientBrush_SetTransform(This, transform) \
    ((This)->lpVtbl->Base.SetTransform((ID2D1Brush *)This, transform))
#define ID2D1RadialGradientBrush_GetOpacity(This) \
    ((This)->lpVtbl->Base.GetOpacity((ID2D1Brush *)This))
#define ID2D1RadialGradientBrush_GetTransform(This, transform) \
    ((This)->lpVtbl->Base.GetTransform((ID2D1Brush *)This, transform))
#define ID2D1RadialGradientBrush_SetCenter(This, center) \
    ((This)->lpVtbl->SetCenter(This, center))
#define ID2D1RadialGradientBrush_SetGradientOriginOffset(This, gradientOriginOffset) \
    ((This)->lpVtbl->SetGradientOriginOffset(This, gradientOriginOffset))
#define ID2D1RadialGradientBrush_SetRadiusX(This, radiusX) \
    ((This)->lpVtbl->SetRadiusX(This, radiusX))
#define ID2D1RadialGradientBrush_SetRadiusY(This, radiusY) \
    ((This)->lpVtbl->SetRadiusY(This, radiusY))
#define ID2D1RadialGradientBrush_GetCenter(This) \
    ((This)->lpVtbl->GetCenter(This))
#define ID2D1RadialGradientBrush_GetGradientOriginOffset(This) \
    ((This)->lpVtbl->GetGradientOriginOffset(This))
#define ID2D1RadialGradientBrush_GetRadiusX(This) \
    ((This)->lpVtbl->GetRadiusX(This))
#define ID2D1RadialGradientBrush_GetRadiusY(This) \
    ((This)->lpVtbl->GetRadiusY(This))
#define ID2D1RadialGradientBrush_GetGradientStopCollection(This, gradientStopCollection) \
    ((This)->lpVtbl->GetGradientStopCollection(This, gradientStopCollection))
typedef interface ID2D1StrokeStyle ID2D1StrokeStyle;
typedef struct ID2D1StrokeStyleVtbl
{
	ID2D1ResourceVtbl Base;
	STDMETHOD_(D2D1_CAP_STYLE, GetStartCap) (ID2D1StrokeStyle * This);
	STDMETHOD_(D2D1_CAP_STYLE, GetEndCap) (ID2D1StrokeStyle * This);
	STDMETHOD_(D2D1_CAP_STYLE, GetDashCap) (ID2D1StrokeStyle * This);
	STDMETHOD_(FLOAT, GetMiterLimit) (ID2D1StrokeStyle * This);
	STDMETHOD_(D2D1_LINE_JOIN, GetLineJoin) (ID2D1StrokeStyle * This);
	STDMETHOD_(FLOAT, GetDashOffset) (ID2D1StrokeStyle * This);
	STDMETHOD_(D2D1_DASH_STYLE, GetDashStyle) (ID2D1StrokeStyle * This);
	STDMETHOD_(UINT32, GetDashesCount) (ID2D1StrokeStyle * This);
	STDMETHOD_(void, GetDashes) (ID2D1StrokeStyle * This, FLOAT * dashes, UINT dashesCount);
} ID2D1StrokeStyleVtbl;
interface ID2D1StrokeStyle
{
	CONST struct ID2D1StrokeStyleVtbl *lpVtbl;
};
#define ID2D1StrokeStyle_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1StrokeStyle_AddRef(This) \
    ((This)->lpVtbl->Base.Base.AddRef((IUnknown *)This))
#define ID2D1StrokeStyle_Release(This) \
    ((This)->lpVtbl->Base.Base.Release((IUnknown *)This))
#define ID2D1StrokeStyle_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1StrokeStyle_GetStartCap(This) \
    ((This)->lpVtbl->GetStartCap(This))
#define ID2D1StrokeStyle_GetEndCap(This) \
    ((This)->lpVtbl->GetEndCap(This))
#define ID2D1StrokeStyle_GetDashCap(This) \
    ((This)->lpVtbl->GetDashCap(This))
#define ID2D1StrokeStyle_GetMiterLimit(This) \
    ((This)->lpVtbl->GetMiterLimit(This))
#define ID2D1StrokeStyle_GetLineJoin(This) \
    ((This)->lpVtbl->GetLineJoin(This))
#define ID2D1StrokeStyle_GetDashOffset(This) \
    ((This)->lpVtbl->GetDashOffset(This))
#define ID2D1StrokeStyle_GetDashStyle(This) \
    ((This)->lpVtbl->GetDashStyle(This))
#define ID2D1StrokeStyle_GetDashesCount(This) \
    ((This)->lpVtbl->GetDashesCount(This))
#define ID2D1StrokeStyle_GetDashes(This, dashes, dashesCount) \
    ((This)->lpVtbl->GetDashes(This, dashes, dashesCount))
typedef interface ID2D1Geometry ID2D1Geometry;
typedef struct ID2D1GeometryVtbl
{
	ID2D1ResourceVtbl Base;
	STDMETHOD(GetBounds) (ID2D1Geometry * This, CONST D2D1_MATRIX_3X2_F * worldTransform, D2D1_RECT_F * bounds);
	STDMETHOD(GetWidenedBounds) (ID2D1Geometry * This, FLOAT strokeWidth, ID2D1StrokeStyle * strokeStyle, CONST D2D1_MATRIX_3X2_F * worldTransform, FLOAT flatteningTolerance, D2D1_RECT_F * bounds);
	STDMETHOD(StrokeContainsPoint) (ID2D1Geometry * This, D2D1_POINT_2F point, FLOAT strokeWidth, ID2D1StrokeStyle * strokeStyle, CONST D2D1_MATRIX_3X2_F * worldTransform, FLOAT flatteningTolerance, BOOL * contains);
	STDMETHOD(FillContainsPoint) (ID2D1Geometry * This, D2D1_POINT_2F point, CONST D2D1_MATRIX_3X2_F * worldTransform, FLOAT flatteningTolerance, BOOL * contains);
	STDMETHOD(CompareWithGeometry) (ID2D1Geometry * This, ID2D1Geometry * inputGeometry, CONST D2D1_MATRIX_3X2_F * inputGeometryTransform, FLOAT flatteningTolerance, D2D1_GEOMETRY_RELATION * relation);
	STDMETHOD(Simplify) (ID2D1Geometry * This, D2D1_GEOMETRY_SIMPLIFICATION_OPTION simplificationOption, CONST D2D1_MATRIX_3X2_F * worldTransform, FLOAT flatteningTolerance, ID2D1SimplifiedGeometrySink * geometrySink);
	STDMETHOD(Tessellate) (ID2D1Geometry * This, CONST D2D1_MATRIX_3X2_F * worldTransform, FLOAT flatteningTolerance, ID2D1TessellationSink * tessellationSink);
	STDMETHOD(CombineWithGeometry) (ID2D1Geometry * This, ID2D1Geometry * inputGeometry, D2D1_COMBINE_MODE combineMode, CONST D2D1_MATRIX_3X2_F * inputGeometryTransform, FLOAT flatteningTolerance, ID2D1SimplifiedGeometrySink * geometrySink);
	STDMETHOD(Outline) (ID2D1Geometry * This, CONST D2D1_MATRIX_3X2_F * worldTransform, FLOAT flatteningTolerance, ID2D1SimplifiedGeometrySink * geometrySink);
	STDMETHOD(ComputeArea) (ID2D1Geometry * This, CONST D2D1_MATRIX_3X2_F * worldTransform, FLOAT flatteningTolerance, FLOAT * area);
	STDMETHOD(ComputeLength) (ID2D1Geometry * This, CONST D2D1_MATRIX_3X2_F * worldTransform, FLOAT flatteningTolerance, FLOAT * length);
	STDMETHOD(ComputePointAtLength) (ID2D1Geometry * This, FLOAT length, CONST D2D1_MATRIX_3X2_F * worldTransform, FLOAT flatteningTolerance, D2D1_POINT_2F * point, D2D1_POINT_2F * unitTangentVector);
	STDMETHOD(Widen) (ID2D1Geometry * This, FLOAT strokeWidth, ID2D1StrokeStyle * strokeStyle, CONST D2D1_MATRIX_3X2_F * worldTransform, FLOAT flatteningTolerance, ID2D1SimplifiedGeometrySink * geometrySink);
} ID2D1GeometryVtbl;
interface ID2D1Geometry
{
	CONST struct ID2D1GeometryVtbl *lpVtbl;
};
#define ID2D1Geometry_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1Geometry_AddRef(This) \
    ((This)->lpVtbl->Base.Base.AddRef((IUnknown *)This))
#define ID2D1Geometry_Release(This) \
    ((This)->lpVtbl->Base.Base.Release((IUnknown *)This))
#define ID2D1Geometry_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1Geometry_GetBounds(This, worldTransform, bounds) \
    ((This)->lpVtbl->GetBounds(This, worldTransform, bounds))
#define ID2D1Geometry_GetWidenedBounds(This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, bounds) \
    ((This)->lpVtbl->GetWidenedBounds(This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, bounds))
#define ID2D1Geometry_StrokeContainsPoint(This, point, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, contains) \
    ((This)->lpVtbl->StrokeContainsPoint(This, point, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, contains))
#define ID2D1Geometry_FillContainsPoint(This, point, worldTransform, flatteningTolerance, contains) \
    ((This)->lpVtbl->FillContainsPoint(This, point, worldTransform, flatteningTolerance, contains))
#define ID2D1Geometry_CompareWithGeometry(This, inputGeometry, inputGeometryTransform, flatteningTolerance, relation) \
    ((This)->lpVtbl->CompareWithGeometry(This, inputGeometry, inputGeometryTransform, flatteningTolerance, relation))
#define ID2D1Geometry_Simplify(This, simplificationOption, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Simplify(This, simplificationOption, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1Geometry_Tessellate(This, worldTransform, flatteningTolerance, tessellationSink) \
    ((This)->lpVtbl->Tessellate(This, worldTransform, flatteningTolerance, tessellationSink))
#define ID2D1Geometry_CombineWithGeometry(This, inputGeometry, combineMode, inputGeometryTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->CombineWithGeometry(This, inputGeometry, combineMode, inputGeometryTransform, flatteningTolerance, geometrySink))
#define ID2D1Geometry_Outline(This, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Outline(This, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1Geometry_ComputeArea(This, worldTransform, flatteningTolerance, area) \
    ((This)->lpVtbl->ComputeArea(This, worldTransform, flatteningTolerance, area))
#define ID2D1Geometry_ComputeLength(This, worldTransform, flatteningTolerance, length) \
    ((This)->lpVtbl->ComputeLength(This, worldTransform, flatteningTolerance, length))
#define ID2D1Geometry_ComputePointAtLength(This, length, worldTransform, flatteningTolerance, point, unitTangentVector) \
    ((This)->lpVtbl->ComputePointAtLength(This, length, worldTransform, flatteningTolerance, point, unitTangentVector))
#define ID2D1Geometry_Widen(This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Widen(This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, geometrySink))
typedef interface ID2D1RectangleGeometry ID2D1RectangleGeometry;
typedef struct ID2D1RectangleGeometryVtbl
{
	ID2D1GeometryVtbl Base;
	STDMETHOD_(void, GetRect) (ID2D1RectangleGeometry * This, D2D1_RECT_F * rect);
} ID2D1RectangleGeometryVtbl;
interface ID2D1RectangleGeometry
{
	CONST struct ID2D1RectangleGeometryVtbl *lpVtbl;
};
#define ID2D1RectangleGeometry_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1RectangleGeometry_AddRef(This) \
    ((This)->lpVtbl->Base.Base.Base.AddRef((IUnknown *)This))
#define ID2D1RectangleGeometry_Release(This) \
    ((This)->lpVtbl->Base.Base.Base.Release((IUnknown *)This))
#define ID2D1RectangleGeometry_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1RectangleGeometry_GetBounds(This, worldTransform, bounds) \
    ((This)->lpVtbl->Base.GetBounds((ID2D1Geometry *)This, worldTransform, bounds))
#define ID2D1RectangleGeometry_GetWidenedBounds(This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, bounds) \
    ((This)->lpVtbl->Base.GetWidenedBounds((ID2D1Geometry *)This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, bounds))
#define ID2D1RectangleGeometry_StrokeContainsPoint(This, point, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, contains) \
    ((This)->lpVtbl->Base.StrokeContainsPoint((ID2D1Geometry *)This, point, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, contains))
#define ID2D1RectangleGeometry_FillContainsPoint(This, point, worldTransform, flatteningTolerance, contains) \
    ((This)->lpVtbl->Base.FillContainsPoint((ID2D1Geometry *)This, point, worldTransform, flatteningTolerance, contains))
#define ID2D1RectangleGeometry_CompareWithGeometry(This, inputGeometry, inputGeometryTransform, flatteningTolerance, relation) \
    ((This)->lpVtbl->Base.CompareWithGeometry((ID2D1Geometry *)This, inputGeometry, inputGeometryTransform, flatteningTolerance, relation))
#define ID2D1RectangleGeometry_Simplify(This, simplificationOption, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Simplify((ID2D1Geometry *)This, simplificationOption, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1RectangleGeometry_Tessellate(This, worldTransform, flatteningTolerance, tessellationSink) \
    ((This)->lpVtbl->Base.Tessellate((ID2D1Geometry *)This, worldTransform, flatteningTolerance, tessellationSink))
#define ID2D1RectangleGeometry_CombineWithGeometry(This, inputGeometry, combineMode, inputGeometryTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.CombineWithGeometry((ID2D1Geometry *)This, inputGeometry, combineMode, inputGeometryTransform, flatteningTolerance, geometrySink))
#define ID2D1RectangleGeometry_Outline(This, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Outline((ID2D1Geometry *)This, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1RectangleGeometry_ComputeArea(This, worldTransform, flatteningTolerance, area) \
    ((This)->lpVtbl->Base.ComputeArea((ID2D1Geometry *)This, worldTransform, flatteningTolerance, area))
#define ID2D1RectangleGeometry_ComputeLength(This, worldTransform, flatteningTolerance, length) \
    ((This)->lpVtbl->Base.ComputeLength((ID2D1Geometry *)This, worldTransform, flatteningTolerance, length))
#define ID2D1RectangleGeometry_ComputePointAtLength(This, length, worldTransform, flatteningTolerance, point, unitTangentVector) \
    ((This)->lpVtbl->Base.ComputePointAtLength((ID2D1Geometry *)This, length, worldTransform, flatteningTolerance, point, unitTangentVector))
#define ID2D1RectangleGeometry_Widen(This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Widen((ID2D1Geometry *)This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1RectangleGeometry_GetRect(This, rect) \
    ((This)->lpVtbl->GetRect(This, rect))
typedef interface ID2D1RoundedRectangleGeometry ID2D1RoundedRectangleGeometry;
typedef struct ID2D1RoundedRectangleGeometryVtbl
{
	ID2D1GeometryVtbl Base;
	STDMETHOD_(void, GetRoundedRect) (ID2D1RoundedRectangleGeometry * This, D2D1_ROUNDED_RECT * roundedRect);
} ID2D1RoundedRectangleGeometryVtbl;
interface ID2D1RoundedRectangleGeometry
{
	CONST struct ID2D1RoundedRectangleGeometryVtbl *lpVtbl;
};
#define ID2D1RoundedRectangleGeometry_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1RoundedRectangleGeometry_AddRef(This) \
    ((This)->lpVtbl->Base.Base.Base.AddRef((IUnknown *)This))
#define ID2D1RoundedRectangleGeometry_Release(This) \
    ((This)->lpVtbl->Base.Base.Base.Release((IUnknown *)This))
#define ID2D1RoundedRectangleGeometry_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1RoundedRectangleGeometry_GetBounds(This, worldTransform, bounds) \
    ((This)->lpVtbl->Base.GetBounds((ID2D1Geometry *)This, worldTransform, bounds))
#define ID2D1RoundedRectangleGeometry_GetWidenedBounds(This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, bounds) \
    ((This)->lpVtbl->Base.GetWidenedBounds((ID2D1Geometry *)This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, bounds))
#define ID2D1RoundedRectangleGeometry_StrokeContainsPoint(This, point, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, contains) \
    ((This)->lpVtbl->Base.StrokeContainsPoint((ID2D1Geometry *)This, point, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, contains))
#define ID2D1RoundedRectangleGeometry_FillContainsPoint(This, point, worldTransform, flatteningTolerance, contains) \
    ((This)->lpVtbl->Base.FillContainsPoint((ID2D1Geometry *)This, point, worldTransform, flatteningTolerance, contains))
#define ID2D1RoundedRectangleGeometry_CompareWithGeometry(This, inputGeometry, inputGeometryTransform, flatteningTolerance, relation) \
    ((This)->lpVtbl->Base.CompareWithGeometry((ID2D1Geometry *)This, inputGeometry, inputGeometryTransform, flatteningTolerance, relation))
#define ID2D1RoundedRectangleGeometry_Simplify(This, simplificationOption, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Simplify((ID2D1Geometry *)This, simplificationOption, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1RoundedRectangleGeometry_Tessellate(This, worldTransform, flatteningTolerance, tessellationSink) \
    ((This)->lpVtbl->Base.Tessellate((ID2D1Geometry *)This, worldTransform, flatteningTolerance, tessellationSink))
#define ID2D1RoundedRectangleGeometry_CombineWithGeometry(This, inputGeometry, combineMode, inputGeometryTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.CombineWithGeometry((ID2D1Geometry *)This, inputGeometry, combineMode, inputGeometryTransform, flatteningTolerance, geometrySink))
#define ID2D1RoundedRectangleGeometry_Outline(This, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Outline((ID2D1Geometry *)This, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1RoundedRectangleGeometry_ComputeArea(This, worldTransform, flatteningTolerance, area) \
    ((This)->lpVtbl->Base.ComputeArea((ID2D1Geometry *)This, worldTransform, flatteningTolerance, area))
#define ID2D1RoundedRectangleGeometry_ComputeLength(This, worldTransform, flatteningTolerance, length) \
    ((This)->lpVtbl->Base.ComputeLength((ID2D1Geometry *)This, worldTransform, flatteningTolerance, length))
#define ID2D1RoundedRectangleGeometry_ComputePointAtLength(This, length, worldTransform, flatteningTolerance, point, unitTangentVector) \
    ((This)->lpVtbl->Base.ComputePointAtLength((ID2D1Geometry *)This, length, worldTransform, flatteningTolerance, point, unitTangentVector))
#define ID2D1RoundedRectangleGeometry_Widen(This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Widen((ID2D1Geometry *)This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1RoundedRectangleGeometry_GetRoundedRect(This, roundedRect) \
    ((This)->lpVtbl->GetRoundedRect(This, roundedRect))
typedef interface ID2D1EllipseGeometry ID2D1EllipseGeometry;
typedef struct ID2D1EllipseGeometryVtbl
{
	ID2D1GeometryVtbl Base;
	STDMETHOD_(void, GetEllipse) (ID2D1EllipseGeometry * This, D2D1_ELLIPSE * ellipse);
} ID2D1EllipseGeometryVtbl;
interface ID2D1EllipseGeometry
{
	CONST struct ID2D1EllipseGeometryVtbl *lpVtbl;
};
#define ID2D1EllipseGeometry_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1EllipseGeometry_AddRef(This) \
    ((This)->lpVtbl->Base.Base.Base.AddRef((IUnknown *)This))
#define ID2D1EllipseGeometry_Release(This) \
    ((This)->lpVtbl->Base.Base.Base.Release((IUnknown *)This))
#define ID2D1EllipseGeometry_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1EllipseGeometry_GetBounds(This, worldTransform, bounds) \
    ((This)->lpVtbl->Base.GetBounds((ID2D1Geometry *)This, worldTransform, bounds))
#define ID2D1EllipseGeometry_GetWidenedBounds(This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, bounds) \
    ((This)->lpVtbl->Base.GetWidenedBounds((ID2D1Geometry *)This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, bounds))
#define ID2D1EllipseGeometry_StrokeContainsPoint(This, point, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, contains) \
    ((This)->lpVtbl->Base.StrokeContainsPoint((ID2D1Geometry *)This, point, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, contains))
#define ID2D1EllipseGeometry_FillContainsPoint(This, point, worldTransform, flatteningTolerance, contains) \
    ((This)->lpVtbl->Base.FillContainsPoint((ID2D1Geometry *)This, point, worldTransform, flatteningTolerance, contains))
#define ID2D1EllipseGeometry_CompareWithGeometry(This, inputGeometry, inputGeometryTransform, flatteningTolerance, relation) \
    ((This)->lpVtbl->Base.CompareWithGeometry((ID2D1Geometry *)This, inputGeometry, inputGeometryTransform, flatteningTolerance, relation))
#define ID2D1EllipseGeometry_Simplify(This, simplificationOption, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Simplify((ID2D1Geometry *)This, simplificationOption, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1EllipseGeometry_Tessellate(This, worldTransform, flatteningTolerance, tessellationSink) \
    ((This)->lpVtbl->Base.Tessellate((ID2D1Geometry *)This, worldTransform, flatteningTolerance, tessellationSink))
#define ID2D1EllipseGeometry_CombineWithGeometry(This, inputGeometry, combineMode, inputGeometryTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.CombineWithGeometry((ID2D1Geometry *)This, inputGeometry, combineMode, inputGeometryTransform, flatteningTolerance, geometrySink))
#define ID2D1EllipseGeometry_Outline(This, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Outline((ID2D1Geometry *)This, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1EllipseGeometry_ComputeArea(This, worldTransform, flatteningTolerance, area) \
    ((This)->lpVtbl->Base.ComputeArea((ID2D1Geometry *)This, worldTransform, flatteningTolerance, area))
#define ID2D1EllipseGeometry_ComputeLength(This, worldTransform, flatteningTolerance, length) \
    ((This)->lpVtbl->Base.ComputeLength((ID2D1Geometry *)This, worldTransform, flatteningTolerance, length))
#define ID2D1EllipseGeometry_ComputePointAtLength(This, length, worldTransform, flatteningTolerance, point, unitTangentVector) \
    ((This)->lpVtbl->Base.ComputePointAtLength((ID2D1Geometry *)This, length, worldTransform, flatteningTolerance, point, unitTangentVector))
#define ID2D1EllipseGeometry_Widen(This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Widen((ID2D1Geometry *)This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1EllipseGeometry_GetEllipse(This, ellipse) \
    ((This)->lpVtbl->GetEllipse(This, ellipse))
typedef interface ID2D1GeometryGroup ID2D1GeometryGroup;
typedef struct ID2D1GeometryGroupVtbl
{
	ID2D1GeometryVtbl Base;
	STDMETHOD_(D2D1_FILL_MODE, GetFillMode) (ID2D1GeometryGroup * This);
	STDMETHOD_(UINT32, GetSourceGeometryCount) (ID2D1GeometryGroup * This);
	STDMETHOD_(void, GetSourceGeometries) (ID2D1GeometryGroup * This, ID2D1Geometry ** geometries, UINT geometriesCount);
} ID2D1GeometryGroupVtbl;
interface ID2D1GeometryGroup
{
	CONST struct ID2D1GeometryGroupVtbl *lpVtbl;
};
#define ID2D1GeometryGroup_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1GeometryGroup_AddRef(This) \
    ((This)->lpVtbl->Base.Base.Base.AddRef((IUnknown *)This))
#define ID2D1GeometryGroup_Release(This) \
    ((This)->lpVtbl->Base.Base.Base.Release((IUnknown *)This))
#define ID2D1GeometryGroup_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1GeometryGroup_GetBounds(This, worldTransform, bounds) \
    ((This)->lpVtbl->Base.GetBounds((ID2D1Geometry *)This, worldTransform, bounds))
#define ID2D1GeometryGroup_GetWidenedBounds(This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, bounds) \
    ((This)->lpVtbl->Base.GetWidenedBounds((ID2D1Geometry *)This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, bounds))
#define ID2D1GeometryGroup_StrokeContainsPoint(This, point, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, contains) \
    ((This)->lpVtbl->Base.StrokeContainsPoint((ID2D1Geometry *)This, point, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, contains))
#define ID2D1GeometryGroup_FillContainsPoint(This, point, worldTransform, flatteningTolerance, contains) \
    ((This)->lpVtbl->Base.FillContainsPoint((ID2D1Geometry *)This, point, worldTransform, flatteningTolerance, contains))
#define ID2D1GeometryGroup_CompareWithGeometry(This, inputGeometry, inputGeometryTransform, flatteningTolerance, relation) \
    ((This)->lpVtbl->Base.CompareWithGeometry((ID2D1Geometry *)This, inputGeometry, inputGeometryTransform, flatteningTolerance, relation))
#define ID2D1GeometryGroup_Simplify(This, simplificationOption, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Simplify((ID2D1Geometry *)This, simplificationOption, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1GeometryGroup_Tessellate(This, worldTransform, flatteningTolerance, tessellationSink) \
    ((This)->lpVtbl->Base.Tessellate((ID2D1Geometry *)This, worldTransform, flatteningTolerance, tessellationSink))
#define ID2D1GeometryGroup_CombineWithGeometry(This, inputGeometry, combineMode, inputGeometryTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.CombineWithGeometry((ID2D1Geometry *)This, inputGeometry, combineMode, inputGeometryTransform, flatteningTolerance, geometrySink))
#define ID2D1GeometryGroup_Outline(This, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Outline((ID2D1Geometry *)This, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1GeometryGroup_ComputeArea(This, worldTransform, flatteningTolerance, area) \
    ((This)->lpVtbl->Base.ComputeArea((ID2D1Geometry *)This, worldTransform, flatteningTolerance, area))
#define ID2D1GeometryGroup_ComputeLength(This, worldTransform, flatteningTolerance, length) \
    ((This)->lpVtbl->Base.ComputeLength((ID2D1Geometry *)This, worldTransform, flatteningTolerance, length))
#define ID2D1GeometryGroup_ComputePointAtLength(This, length, worldTransform, flatteningTolerance, point, unitTangentVector) \
    ((This)->lpVtbl->Base.ComputePointAtLength((ID2D1Geometry *)This, length, worldTransform, flatteningTolerance, point, unitTangentVector))
#define ID2D1GeometryGroup_Widen(This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Widen((ID2D1Geometry *)This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1GeometryGroup_GetFillMode(This) \
    ((This)->lpVtbl->GetFillMode(This))
#define ID2D1GeometryGroup_GetSourceGeometryCount(This) \
    ((This)->lpVtbl->GetSourceGeometryCount(This))
#define ID2D1GeometryGroup_GetSourceGeometries(This, geometries, geometriesCount) \
    ((This)->lpVtbl->GetSourceGeometries(This, geometries, geometriesCount))
typedef interface ID2D1TransformedGeometry ID2D1TransformedGeometry;
typedef struct ID2D1TransformedGeometryVtbl
{
	ID2D1GeometryVtbl Base;
	STDMETHOD_(void, GetSourceGeometry) (ID2D1TransformedGeometry * This, ID2D1Geometry ** sourceGeometry);
	STDMETHOD_(void, GetTransform) (ID2D1TransformedGeometry * This, D2D1_MATRIX_3X2_F * transform);
} ID2D1TransformedGeometryVtbl;
interface ID2D1TransformedGeometry
{
	CONST struct ID2D1TransformedGeometryVtbl *lpVtbl;
};
#define ID2D1TransformedGeometry_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1TransformedGeometry_AddRef(This) \
    ((This)->lpVtbl->Base.Base.Base.AddRef((IUnknown *)This))
#define ID2D1TransformedGeometry_Release(This) \
    ((This)->lpVtbl->Base.Base.Base.Release((IUnknown *)This))
#define ID2D1TransformedGeometry_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1TransformedGeometry_GetBounds(This, worldTransform, bounds) \
    ((This)->lpVtbl->Base.GetBounds((ID2D1Geometry *)This, worldTransform, bounds))
#define ID2D1TransformedGeometry_GetWidenedBounds(This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, bounds) \
    ((This)->lpVtbl->Base.GetWidenedBounds((ID2D1Geometry *)This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, bounds))
#define ID2D1TransformedGeometry_StrokeContainsPoint(This, point, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, contains) \
    ((This)->lpVtbl->Base.StrokeContainsPoint((ID2D1Geometry *)This, point, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, contains))
#define ID2D1TransformedGeometry_FillContainsPoint(This, point, worldTransform, flatteningTolerance, contains) \
    ((This)->lpVtbl->Base.FillContainsPoint((ID2D1Geometry *)This, point, worldTransform, flatteningTolerance, contains))
#define ID2D1TransformedGeometry_CompareWithGeometry(This, inputGeometry, inputGeometryTransform, flatteningTolerance, relation) \
    ((This)->lpVtbl->Base.CompareWithGeometry((ID2D1Geometry *)This, inputGeometry, inputGeometryTransform, flatteningTolerance, relation))
#define ID2D1TransformedGeometry_Simplify(This, simplificationOption, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Simplify((ID2D1Geometry *)This, simplificationOption, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1TransformedGeometry_Tessellate(This, worldTransform, flatteningTolerance, tessellationSink) \
    ((This)->lpVtbl->Base.Tessellate((ID2D1Geometry *)This, worldTransform, flatteningTolerance, tessellationSink))
#define ID2D1TransformedGeometry_CombineWithGeometry(This, inputGeometry, combineMode, inputGeometryTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.CombineWithGeometry((ID2D1Geometry *)This, inputGeometry, combineMode, inputGeometryTransform, flatteningTolerance, geometrySink))
#define ID2D1TransformedGeometry_Outline(This, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Outline((ID2D1Geometry *)This, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1TransformedGeometry_ComputeArea(This, worldTransform, flatteningTolerance, area) \
    ((This)->lpVtbl->Base.ComputeArea((ID2D1Geometry *)This, worldTransform, flatteningTolerance, area))
#define ID2D1TransformedGeometry_ComputeLength(This, worldTransform, flatteningTolerance, length) \
    ((This)->lpVtbl->Base.ComputeLength((ID2D1Geometry *)This, worldTransform, flatteningTolerance, length))
#define ID2D1TransformedGeometry_ComputePointAtLength(This, length, worldTransform, flatteningTolerance, point, unitTangentVector) \
    ((This)->lpVtbl->Base.ComputePointAtLength((ID2D1Geometry *)This, length, worldTransform, flatteningTolerance, point, unitTangentVector))
#define ID2D1TransformedGeometry_Widen(This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Widen((ID2D1Geometry *)This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1TransformedGeometry_GetSourceGeometry(This, sourceGeometry) \
    ((This)->lpVtbl->GetSourceGeometry(This, sourceGeometry))
#define ID2D1TransformedGeometry_GetTransform(This, transform) \
    ((This)->lpVtbl->GetTransform(This, transform))
typedef interface ID2D1SimplifiedGeometrySink ID2D1SimplifiedGeometrySink;
typedef struct ID2D1SimplifiedGeometrySinkVtbl
{
	IUnknownVtbl Base;
	STDMETHOD_(void, SetFillMode) (ID2D1SimplifiedGeometrySink * This, D2D1_FILL_MODE fillMode);
	STDMETHOD_(void, SetSegmentFlags) (ID2D1SimplifiedGeometrySink * This, D2D1_PATH_SEGMENT vertexFlags);
	STDMETHOD_(void, BeginFigure) (ID2D1SimplifiedGeometrySink * This, D2D1_POINT_2F startPoint, D2D1_FIGURE_BEGIN figureBegin);
	STDMETHOD_(void, AddLines) (ID2D1SimplifiedGeometrySink * This, CONST D2D1_POINT_2F * points, UINT pointsCount);
	STDMETHOD_(void, AddBeziers) (ID2D1SimplifiedGeometrySink * This, CONST D2D1_BEZIER_SEGMENT * beziers, UINT beziersCount);
	STDMETHOD_(void, EndFigure) (ID2D1SimplifiedGeometrySink * This, D2D1_FIGURE_END figureEnd);
	STDMETHOD(Close) (ID2D1SimplifiedGeometrySink * This);
} ID2D1SimplifiedGeometrySinkVtbl;
interface ID2D1SimplifiedGeometrySink
{
	CONST struct ID2D1SimplifiedGeometrySinkVtbl *lpVtbl;
};
#define ID2D1SimplifiedGeometrySink_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1SimplifiedGeometrySink_AddRef(This) \
    ((This)->lpVtbl->Base.AddRef((IUnknown *)This))
#define ID2D1SimplifiedGeometrySink_Release(This) \
    ((This)->lpVtbl->Base.Release((IUnknown *)This))
#define ID2D1SimplifiedGeometrySink_SetFillMode(This, fillMode) \
    ((This)->lpVtbl->SetFillMode(This, fillMode))
#define ID2D1SimplifiedGeometrySink_SetSegmentFlags(This, vertexFlags) \
    ((This)->lpVtbl->SetSegmentFlags(This, vertexFlags))
#define ID2D1SimplifiedGeometrySink_BeginFigure(This, startPoint, figureBegin) \
    ((This)->lpVtbl->BeginFigure(This, startPoint, figureBegin))
#define ID2D1SimplifiedGeometrySink_AddLines(This, points, pointsCount) \
    ((This)->lpVtbl->AddLines(This, points, pointsCount))
#define ID2D1SimplifiedGeometrySink_AddBeziers(This, beziers, beziersCount) \
    ((This)->lpVtbl->AddBeziers(This, beziers, beziersCount))
#define ID2D1SimplifiedGeometrySink_EndFigure(This, figureEnd) \
    ((This)->lpVtbl->EndFigure(This, figureEnd))
#define ID2D1SimplifiedGeometrySink_Close(This) \
    ((This)->lpVtbl->Close(This))
typedef interface ID2D1GeometrySink ID2D1GeometrySink;
typedef struct ID2D1GeometrySinkVtbl
{
	ID2D1SimplifiedGeometrySinkVtbl Base;
	STDMETHOD_(void, AddLine) (ID2D1GeometrySink * This, D2D1_POINT_2F point);
	STDMETHOD_(void, AddBezier) (ID2D1GeometrySink * This, CONST D2D1_BEZIER_SEGMENT * bezier);
	STDMETHOD_(void, AddQuadraticBezier) (ID2D1GeometrySink * This, CONST D2D1_QUADRATIC_BEZIER_SEGMENT * bezier);
	STDMETHOD_(void, AddQuadraticBeziers) (ID2D1GeometrySink * This, CONST D2D1_QUADRATIC_BEZIER_SEGMENT * beziers, UINT beziersCount);
	STDMETHOD_(void, AddArc) (ID2D1GeometrySink * This, CONST D2D1_ARC_SEGMENT * arc);
} ID2D1GeometrySinkVtbl;
interface ID2D1GeometrySink
{
	CONST struct ID2D1GeometrySinkVtbl *lpVtbl;
};
#define ID2D1GeometrySink_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1GeometrySink_AddRef(This) \
    ((This)->lpVtbl->Base.Base.AddRef((IUnknown *)This))
#define ID2D1GeometrySink_Release(This) \
    ((This)->lpVtbl->Base.Base.Release((IUnknown *)This))
#define ID2D1GeometrySink_SetFillMode(This, fillMode) \
    ((This)->lpVtbl->Base.SetFillMode((ID2D1SimplifiedGeometrySink *)This, fillMode))
#define ID2D1GeometrySink_SetSegmentFlags(This, vertexFlags) \
    ((This)->lpVtbl->Base.SetSegmentFlags((ID2D1SimplifiedGeometrySink *)This, vertexFlags))
#define ID2D1GeometrySink_BeginFigure(This, startPoint, figureBegin) \
    ((This)->lpVtbl->Base.BeginFigure((ID2D1SimplifiedGeometrySink *)This, startPoint, figureBegin))
#define ID2D1GeometrySink_AddLines(This, points, pointsCount) \
    ((This)->lpVtbl->Base.AddLines((ID2D1SimplifiedGeometrySink *)This, points, pointsCount))
#define ID2D1GeometrySink_AddBeziers(This, beziers, beziersCount) \
    ((This)->lpVtbl->Base.AddBeziers((ID2D1SimplifiedGeometrySink *)This, beziers, beziersCount))
#define ID2D1GeometrySink_EndFigure(This, figureEnd) \
    ((This)->lpVtbl->Base.EndFigure((ID2D1SimplifiedGeometrySink *)This, figureEnd))
#define ID2D1GeometrySink_Close(This) \
    ((This)->lpVtbl->Base.Close((ID2D1SimplifiedGeometrySink *)This))
#define ID2D1GeometrySink_AddLine(This, point) \
    ((This)->lpVtbl->AddLine(This, point))
#define ID2D1GeometrySink_AddBezier(This, bezier) \
    ((This)->lpVtbl->AddBezier(This, bezier))
#define ID2D1GeometrySink_AddQuadraticBezier(This, bezier) \
    ((This)->lpVtbl->AddQuadraticBezier(This, bezier))
#define ID2D1GeometrySink_AddQuadraticBeziers(This, beziers, beziersCount) \
    ((This)->lpVtbl->AddQuadraticBeziers(This, beziers, beziersCount))
#define ID2D1GeometrySink_AddArc(This, arc) \
    ((This)->lpVtbl->AddArc(This, arc))
typedef interface ID2D1TessellationSink ID2D1TessellationSink;
typedef struct ID2D1TessellationSinkVtbl
{
	IUnknownVtbl Base;
	STDMETHOD_(void, AddTriangles) (ID2D1TessellationSink * This, CONST D2D1_TRIANGLE * triangles, UINT trianglesCount);
	STDMETHOD(Close) (ID2D1TessellationSink * This);
} ID2D1TessellationSinkVtbl;
interface ID2D1TessellationSink
{
	CONST struct ID2D1TessellationSinkVtbl *lpVtbl;
};
#define ID2D1TessellationSink_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1TessellationSink_AddRef(This) \
    ((This)->lpVtbl->Base.AddRef((IUnknown *)This))
#define ID2D1TessellationSink_Release(This) \
    ((This)->lpVtbl->Base.Release((IUnknown *)This))
#define ID2D1TessellationSink_AddTriangles(This, triangles, trianglesCount) \
    ((This)->lpVtbl->AddTriangles(This, triangles, trianglesCount))
#define ID2D1TessellationSink_Close(This) \
    ((This)->lpVtbl->Close(This))
typedef interface ID2D1PathGeometry ID2D1PathGeometry;
typedef struct ID2D1PathGeometryVtbl
{
	ID2D1GeometryVtbl Base;
	STDMETHOD(Open) (ID2D1PathGeometry * This, ID2D1GeometrySink ** geometrySink);
	STDMETHOD(Stream) (ID2D1PathGeometry * This, ID2D1GeometrySink * geometrySink);
	STDMETHOD(GetSegmentCount) (ID2D1PathGeometry * This, UINT32 * count);
	STDMETHOD(GetFigureCount) (ID2D1PathGeometry * This, UINT32 * count);
} ID2D1PathGeometryVtbl;
interface ID2D1PathGeometry
{
	CONST struct ID2D1PathGeometryVtbl *lpVtbl;
};
#define ID2D1PathGeometry_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1PathGeometry_AddRef(This) \
    ((This)->lpVtbl->Base.Base.Base.AddRef((IUnknown *)This))
#define ID2D1PathGeometry_Release(This) \
    ((This)->lpVtbl->Base.Base.Base.Release((IUnknown *)This))
#define ID2D1PathGeometry_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1PathGeometry_GetBounds(This, worldTransform, bounds) \
    ((This)->lpVtbl->Base.GetBounds((ID2D1Geometry *)This, worldTransform, bounds))
#define ID2D1PathGeometry_GetWidenedBounds(This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, bounds) \
    ((This)->lpVtbl->Base.GetWidenedBounds((ID2D1Geometry *)This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, bounds))
#define ID2D1PathGeometry_StrokeContainsPoint(This, point, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, contains) \
    ((This)->lpVtbl->Base.StrokeContainsPoint((ID2D1Geometry *)This, point, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, contains))
#define ID2D1PathGeometry_FillContainsPoint(This, point, worldTransform, flatteningTolerance, contains) \
    ((This)->lpVtbl->Base.FillContainsPoint((ID2D1Geometry *)This, point, worldTransform, flatteningTolerance, contains))
#define ID2D1PathGeometry_CompareWithGeometry(This, inputGeometry, inputGeometryTransform, flatteningTolerance, relation) \
    ((This)->lpVtbl->Base.CompareWithGeometry((ID2D1Geometry *)This, inputGeometry, inputGeometryTransform, flatteningTolerance, relation))
#define ID2D1PathGeometry_Simplify(This, simplificationOption, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Simplify((ID2D1Geometry *)This, simplificationOption, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1PathGeometry_Tessellate(This, worldTransform, flatteningTolerance, tessellationSink) \
    ((This)->lpVtbl->Base.Tessellate((ID2D1Geometry *)This, worldTransform, flatteningTolerance, tessellationSink))
#define ID2D1PathGeometry_CombineWithGeometry(This, inputGeometry, combineMode, inputGeometryTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.CombineWithGeometry((ID2D1Geometry *)This, inputGeometry, combineMode, inputGeometryTransform, flatteningTolerance, geometrySink))
#define ID2D1PathGeometry_Outline(This, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Outline((ID2D1Geometry *)This, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1PathGeometry_ComputeArea(This, worldTransform, flatteningTolerance, area) \
    ((This)->lpVtbl->Base.ComputeArea((ID2D1Geometry *)This, worldTransform, flatteningTolerance, area))
#define ID2D1PathGeometry_ComputeLength(This, worldTransform, flatteningTolerance, length) \
    ((This)->lpVtbl->Base.ComputeLength((ID2D1Geometry *)This, worldTransform, flatteningTolerance, length))
#define ID2D1PathGeometry_ComputePointAtLength(This, length, worldTransform, flatteningTolerance, point, unitTangentVector) \
    ((This)->lpVtbl->Base.ComputePointAtLength((ID2D1Geometry *)This, length, worldTransform, flatteningTolerance, point, unitTangentVector))
#define ID2D1PathGeometry_Widen(This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, geometrySink) \
    ((This)->lpVtbl->Base.Widen((ID2D1Geometry *)This, strokeWidth, strokeStyle, worldTransform, flatteningTolerance, geometrySink))
#define ID2D1PathGeometry_Open(This, geometrySink) \
    ((This)->lpVtbl->Open(This, geometrySink))
#define ID2D1PathGeometry_Stream(This, geometrySink) \
    ((This)->lpVtbl->Stream(This, geometrySink))
#define ID2D1PathGeometry_GetSegmentCount(This, count) \
    ((This)->lpVtbl->GetSegmentCount(This, count))
#define ID2D1PathGeometry_GetFigureCount(This, count) \
    ((This)->lpVtbl->GetFigureCount(This, count))
typedef interface ID2D1Mesh ID2D1Mesh;
typedef struct ID2D1MeshVtbl
{
	ID2D1ResourceVtbl Base;
	STDMETHOD(Open) (ID2D1Mesh * This, ID2D1TessellationSink ** tessellationSink);
} ID2D1MeshVtbl;
interface ID2D1Mesh
{
	CONST struct ID2D1MeshVtbl *lpVtbl;
};
#define ID2D1Mesh_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1Mesh_AddRef(This) \
    ((This)->lpVtbl->Base.Base.AddRef((IUnknown *)This))
#define ID2D1Mesh_Release(This) \
    ((This)->lpVtbl->Base.Base.Release((IUnknown *)This))
#define ID2D1Mesh_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1Mesh_Open(This, tessellationSink) \
    ((This)->lpVtbl->Open(This, tessellationSink))
typedef interface ID2D1Layer ID2D1Layer;
typedef struct ID2D1LayerVtbl
{
	ID2D1ResourceVtbl Base;
	STDMETHOD_(D2D1_SIZE_F, GetSize) (ID2D1Layer * This);
} ID2D1LayerVtbl;
interface ID2D1Layer
{
	CONST struct ID2D1LayerVtbl *lpVtbl;
};
#define ID2D1Layer_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1Layer_AddRef(This) \
    ((This)->lpVtbl->Base.Base.AddRef((IUnknown *)This))
#define ID2D1Layer_Release(This) \
    ((This)->lpVtbl->Base.Base.Release((IUnknown *)This))
#define ID2D1Layer_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1Layer_GetSize(This) \
    ((This)->lpVtbl->GetSize(This))
typedef interface ID2D1DrawingStateBlock ID2D1DrawingStateBlock;
typedef struct ID2D1DrawingStateBlockVtbl
{
	ID2D1ResourceVtbl Base;
	STDMETHOD_(void, GetDescription) (ID2D1DrawingStateBlock * This, D2D1_DRAWING_STATE_DESCRIPTION * stateDescription);
	STDMETHOD_(void, SetDescription) (ID2D1DrawingStateBlock * This, CONST D2D1_DRAWING_STATE_DESCRIPTION * stateDescription);
	STDMETHOD_(void, SetTextRenderingParams) (ID2D1DrawingStateBlock * This, IDWriteRenderingParams * textRenderingParams);
	STDMETHOD_(void, GetTextRenderingParams) (ID2D1DrawingStateBlock * This, IDWriteRenderingParams ** textRenderingParams);
} ID2D1DrawingStateBlockVtbl;
interface ID2D1DrawingStateBlock
{
	CONST struct ID2D1DrawingStateBlockVtbl *lpVtbl;
};
#define ID2D1DrawingStateBlock_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1DrawingStateBlock_AddRef(This) \
    ((This)->lpVtbl->Base.Base.AddRef((IUnknown *)This))
#define ID2D1DrawingStateBlock_Release(This) \
    ((This)->lpVtbl->Base.Base.Release((IUnknown *)This))
#define ID2D1DrawingStateBlock_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1DrawingStateBlock_GetDescription(This, stateDescription) \
    ((This)->lpVtbl->GetDescription(This, stateDescription))
#define ID2D1DrawingStateBlock_SetDescription(This, stateDescription) \
    ((This)->lpVtbl->SetDescription(This, stateDescription))
#define ID2D1DrawingStateBlock_SetTextRenderingParams(This, textRenderingParams) \
    ((This)->lpVtbl->SetTextRenderingParams(This, textRenderingParams))
#define ID2D1DrawingStateBlock_GetTextRenderingParams(This, textRenderingParams) \
    ((This)->lpVtbl->GetTextRenderingParams(This, textRenderingParams))
typedef interface ID2D1RenderTarget ID2D1RenderTarget;
typedef struct ID2D1RenderTargetVtbl
{
	ID2D1ResourceVtbl Base;
	STDMETHOD(CreateBitmap) (ID2D1RenderTarget * This, D2D1_SIZE_U size, CONST void *srcData, UINT32 pitch, CONST D2D1_BITMAP_PROPERTIES * bitmapProperties, ID2D1Bitmap ** bitmap);
	STDMETHOD(CreateBitmapFromWicBitmap) (ID2D1RenderTarget * This, IWICBitmapSource * wicBitmapSource, CONST D2D1_BITMAP_PROPERTIES * bitmapProperties, ID2D1Bitmap ** bitmap);
	STDMETHOD(CreateSharedBitmap) (ID2D1RenderTarget * This, REFIID riid, void *data, CONST D2D1_BITMAP_PROPERTIES * bitmapProperties, ID2D1Bitmap ** bitmap);
	STDMETHOD(CreateBitmapBrush) (ID2D1RenderTarget * This, ID2D1Bitmap * bitmap, CONST D2D1_BITMAP_BRUSH_PROPERTIES * bitmapBrushProperties, CONST D2D1_BRUSH_PROPERTIES * brushProperties, ID2D1BitmapBrush ** bitmapBrush);
	STDMETHOD(CreateSolidColorBrush) (ID2D1RenderTarget * This, CONST D2D1_COLOR_F * color, CONST D2D1_BRUSH_PROPERTIES * brushProperties, ID2D1SolidColorBrush ** solidColorBrush);
	STDMETHOD(CreateGradientStopCollection) (ID2D1RenderTarget * This, CONST D2D1_GRADIENT_STOP * gradientStops, UINT gradientStopsCount, D2D1_GAMMA colorInterpolationGamma, D2D1_EXTEND_MODE extendMode, ID2D1GradientStopCollection ** gradientStopCollection);
	STDMETHOD(CreateLinearGradientBrush) (ID2D1RenderTarget * This, CONST D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES * linearGradientBrushProperties, CONST D2D1_BRUSH_PROPERTIES * brushProperties, ID2D1GradientStopCollection * gradientStopCollection, ID2D1LinearGradientBrush ** linearGradientBrush);
	STDMETHOD(CreateRadialGradientBrush) (ID2D1RenderTarget * This, CONST D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES * radialGradientBrushProperties, CONST D2D1_BRUSH_PROPERTIES * brushProperties, ID2D1GradientStopCollection * gradientStopCollection, ID2D1RadialGradientBrush ** radialGradientBrush);
	STDMETHOD(CreateCompatibleRenderTarget) (ID2D1RenderTarget * This, CONST D2D1_SIZE_F * desiredSize, CONST D2D1_SIZE_U * desiredPixelSize, CONST D2D1_PIXEL_FORMAT * desiredFormat, D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS options, ID2D1BitmapRenderTarget ** bitmapRenderTarget);
	STDMETHOD(CreateLayer) (ID2D1RenderTarget * This, CONST D2D1_SIZE_F * size, ID2D1Layer ** layer);
	STDMETHOD(CreateMesh) (ID2D1RenderTarget * This, ID2D1Mesh ** mesh);
	STDMETHOD_(void, DrawLine) (ID2D1RenderTarget * This, D2D1_POINT_2F point0, D2D1_POINT_2F point1, ID2D1Brush * brush, FLOAT strokeWidth, ID2D1StrokeStyle * strokeStyle);
	STDMETHOD_(void, DrawRectangle) (ID2D1RenderTarget * This, CONST D2D1_RECT_F * rect, ID2D1Brush * brush, FLOAT strokeWidth, ID2D1StrokeStyle * strokeStyle);
	STDMETHOD_(void, FillRectangle) (ID2D1RenderTarget * This, CONST D2D1_RECT_F * rect, ID2D1Brush * brush);
	STDMETHOD_(void, DrawRoundedRectangle) (ID2D1RenderTarget * This, CONST D2D1_ROUNDED_RECT * roundedRect, ID2D1Brush * brush, FLOAT strokeWidth, ID2D1StrokeStyle * strokeStyle);
	STDMETHOD_(void, FillRoundedRectangle) (ID2D1RenderTarget * This, CONST D2D1_ROUNDED_RECT * roundedRect, ID2D1Brush * brush);
	STDMETHOD_(void, DrawEllipse) (ID2D1RenderTarget * This, CONST D2D1_ELLIPSE * ellipse, ID2D1Brush * brush, FLOAT strokeWidth, ID2D1StrokeStyle * strokeStyle);
	STDMETHOD_(void, FillEllipse) (ID2D1RenderTarget * This, CONST D2D1_ELLIPSE * ellipse, ID2D1Brush * brush);
	STDMETHOD_(void, DrawGeometry) (ID2D1RenderTarget * This, ID2D1Geometry * geometry, ID2D1Brush * brush, FLOAT strokeWidth, ID2D1StrokeStyle * strokeStyle);
	STDMETHOD_(void, FillGeometry) (ID2D1RenderTarget * This, ID2D1Geometry * geometry, ID2D1Brush * brush, ID2D1Brush * opacityBrush);
	STDMETHOD_(void, FillMesh) (ID2D1RenderTarget * This, ID2D1Mesh * mesh, ID2D1Brush * brush);
	STDMETHOD_(void, FillOpacityMask) (ID2D1RenderTarget * This, ID2D1Bitmap * opacityMask, ID2D1Brush * brush, D2D1_OPACITY_MASK_CONTENT content, CONST D2D1_RECT_F * destinationRectangle, CONST D2D1_RECT_F * sourceRectangle);
	STDMETHOD_(void, DrawBitmap) (ID2D1RenderTarget * This, ID2D1Bitmap * bitmap, CONST D2D1_RECT_F * destinationRectangle, FLOAT opacity, D2D1_BITMAP_INTERPOLATION_MODE interpolationMode, CONST D2D1_RECT_F * sourceRectangle);
	STDMETHOD_(void, DrawText) (ID2D1RenderTarget * This, CONST WCHAR * string, UINT stringLength, IDWriteTextFormat * textFormat, CONST D2D1_RECT_F * layoutRect, ID2D1Brush * defaultForegroundBrush, D2D1_DRAW_TEXT_OPTIONS options, DWRITE_MEASURING_MODE measuringMode);
	STDMETHOD_(void, DrawTextLayout) (ID2D1RenderTarget * This, D2D1_POINT_2F origin, IDWriteTextLayout * textLayout, ID2D1Brush * defaultForegroundBrush, D2D1_DRAW_TEXT_OPTIONS options);
	STDMETHOD_(void, DrawGlyphRun) (ID2D1RenderTarget * This, D2D1_POINT_2F baselineOrigin, CONST DWRITE_GLYPH_RUN * glyphRun, ID2D1Brush * foregroundBrush, DWRITE_MEASURING_MODE measuringMode);
	STDMETHOD_(void, SetTransform) (ID2D1RenderTarget * This, CONST D2D1_MATRIX_3X2_F * transform);
	STDMETHOD_(void, GetTransform) (ID2D1RenderTarget * This, D2D1_MATRIX_3X2_F * transform);
	STDMETHOD_(void, SetAntialiasMode) (ID2D1RenderTarget * This, D2D1_ANTIALIAS_MODE antialiasMode);
	STDMETHOD_(D2D1_ANTIALIAS_MODE, GetAntialiasMode) (ID2D1RenderTarget * This);
	STDMETHOD_(void, SetTextAntialiasMode) (ID2D1RenderTarget * This, D2D1_TEXT_ANTIALIAS_MODE textAntialiasMode);
	STDMETHOD_(D2D1_TEXT_ANTIALIAS_MODE, GetTextAntialiasMode) (ID2D1RenderTarget * This);
	STDMETHOD_(void, SetTextRenderingParams) (ID2D1RenderTarget * This, IDWriteRenderingParams * textRenderingParams);
	STDMETHOD_(void, GetTextRenderingParams) (ID2D1RenderTarget * This, IDWriteRenderingParams ** textRenderingParams);
	STDMETHOD_(void, SetTags) (ID2D1RenderTarget * This, D2D1_TAG tag1, D2D1_TAG tag2);
	STDMETHOD_(void, GetTags) (ID2D1RenderTarget * This, D2D1_TAG * tag1, D2D1_TAG * tag2);
	STDMETHOD_(void, PushLayer) (ID2D1RenderTarget * This, CONST D2D1_LAYER_PARAMETERS * layerParameters, ID2D1Layer * layer);
	STDMETHOD_(void, PopLayer) (ID2D1RenderTarget * This);
	STDMETHOD(Flush) (ID2D1RenderTarget * This, D2D1_TAG * tag1, D2D1_TAG * tag2);
	STDMETHOD_(void, SaveDrawingState) (ID2D1RenderTarget * This, ID2D1DrawingStateBlock * drawingStateBlock);
	STDMETHOD_(void, RestoreDrawingState) (ID2D1RenderTarget * This, ID2D1DrawingStateBlock * drawingStateBlock);
	STDMETHOD_(void, PushAxisAlignedClip) (ID2D1RenderTarget * This, CONST D2D1_RECT_F * clipRect, D2D1_ANTIALIAS_MODE antialiasMode);
	STDMETHOD_(void, PopAxisAlignedClip) (ID2D1RenderTarget * This);
	STDMETHOD_(void, Clear) (ID2D1RenderTarget * This, CONST D2D1_COLOR_F * clearColor);
	STDMETHOD_(void, BeginDraw) (ID2D1RenderTarget * This);
	STDMETHOD(EndDraw) (ID2D1RenderTarget * This, D2D1_TAG * tag1, D2D1_TAG * tag2);
	STDMETHOD_(D2D1_PIXEL_FORMAT, GetPixelFormat) (ID2D1RenderTarget * This);
	STDMETHOD_(void, SetDpi) (ID2D1RenderTarget * This, FLOAT dpiX, FLOAT dpiY);
	STDMETHOD_(void, GetDpi) (ID2D1RenderTarget * This, FLOAT * dpiX, FLOAT * dpiY);
	STDMETHOD_(D2D1_SIZE_F, GetSize) (ID2D1RenderTarget * This);
	STDMETHOD_(D2D1_SIZE_U, GetPixelSize) (ID2D1RenderTarget * This);
	STDMETHOD_(UINT32, GetMaximumBitmapSize) (ID2D1RenderTarget * This);
	STDMETHOD_(BOOL, IsSupported) (ID2D1RenderTarget * This, CONST D2D1_RENDER_TARGET_PROPERTIES * renderTargetProperties);
} ID2D1RenderTargetVtbl;
interface ID2D1RenderTarget
{
	CONST struct ID2D1RenderTargetVtbl *lpVtbl;
};
#define ID2D1RenderTarget_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1RenderTarget_AddRef(This) \
    ((This)->lpVtbl->Base.Base.AddRef((IUnknown *)This))
#define ID2D1RenderTarget_Release(This) \
    ((This)->lpVtbl->Base.Base.Release((IUnknown *)This))
#define ID2D1RenderTarget_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1RenderTarget_CreateBitmap(This, size, srcData, pitch, bitmapProperties, bitmap) \
    ((This)->lpVtbl->CreateBitmap(This, size, srcData, pitch, bitmapProperties, bitmap))
#define ID2D1RenderTarget_CreateBitmapFromWicBitmap(This, wicBitmapSource, bitmapProperties, bitmap) \
    ((This)->lpVtbl->CreateBitmapFromWicBitmap(This, wicBitmapSource, bitmapProperties, bitmap))
#define ID2D1RenderTarget_CreateSharedBitmap(This, riid, data, bitmapProperties, bitmap) \
    ((This)->lpVtbl->CreateSharedBitmap(This, riid, data, bitmapProperties, bitmap))
#define ID2D1RenderTarget_CreateBitmapBrush(This, bitmap, bitmapBrushProperties, brushProperties, bitmapBrush) \
    ((This)->lpVtbl->CreateBitmapBrush(This, bitmap, bitmapBrushProperties, brushProperties, bitmapBrush))
#define ID2D1RenderTarget_CreateSolidColorBrush(This, color, brushProperties, solidColorBrush) \
    ((This)->lpVtbl->CreateSolidColorBrush(This, color, brushProperties, solidColorBrush))
#define ID2D1RenderTarget_CreateGradientStopCollection(This, gradientStops, gradientStopsCount, colorInterpolationGamma, extendMode, gradientStopCollection) \
    ((This)->lpVtbl->CreateGradientStopCollection(This, gradientStops, gradientStopsCount, colorInterpolationGamma, extendMode, gradientStopCollection))
#define ID2D1RenderTarget_CreateLinearGradientBrush(This, linearGradientBrushProperties, brushProperties, gradientStopCollection, linearGradientBrush) \
    ((This)->lpVtbl->CreateLinearGradientBrush(This, linearGradientBrushProperties, brushProperties, gradientStopCollection, linearGradientBrush))
#define ID2D1RenderTarget_CreateRadialGradientBrush(This, radialGradientBrushProperties, brushProperties, gradientStopCollection, radialGradientBrush) \
    ((This)->lpVtbl->CreateRadialGradientBrush(This, radialGradientBrushProperties, brushProperties, gradientStopCollection, radialGradientBrush))
#define ID2D1RenderTarget_CreateCompatibleRenderTarget(This, desiredSize, desiredPixelSize, desiredFormat, options, bitmapRenderTarget) \
    ((This)->lpVtbl->CreateCompatibleRenderTarget(This, desiredSize, desiredPixelSize, desiredFormat, options, bitmapRenderTarget))
#define ID2D1RenderTarget_CreateLayer(This, size, layer) \
    ((This)->lpVtbl->CreateLayer(This, size, layer))
#define ID2D1RenderTarget_CreateMesh(This, mesh) \
    ((This)->lpVtbl->CreateMesh(This, mesh))
#define ID2D1RenderTarget_DrawLine(This, point0, point1, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawLine(This, point0, point1, brush, strokeWidth, strokeStyle))
#define ID2D1RenderTarget_DrawRectangle(This, rect, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawRectangle(This, rect, brush, strokeWidth, strokeStyle))
#define ID2D1RenderTarget_FillRectangle(This, rect, brush) \
    ((This)->lpVtbl->FillRectangle(This, rect, brush))
#define ID2D1RenderTarget_DrawRoundedRectangle(This, roundedRect, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawRoundedRectangle(This, roundedRect, brush, strokeWidth, strokeStyle))
#define ID2D1RenderTarget_FillRoundedRectangle(This, roundedRect, brush) \
    ((This)->lpVtbl->FillRoundedRectangle(This, roundedRect, brush))
#define ID2D1RenderTarget_DrawEllipse(This, ellipse, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawEllipse(This, ellipse, brush, strokeWidth, strokeStyle))
#define ID2D1RenderTarget_FillEllipse(This, ellipse, brush) \
    ((This)->lpVtbl->FillEllipse(This, ellipse, brush))
#define ID2D1RenderTarget_DrawGeometry(This, geometry, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->DrawGeometry(This, geometry, brush, strokeWidth, strokeStyle))
#define ID2D1RenderTarget_FillGeometry(This, geometry, brush, opacityBrush) \
    ((This)->lpVtbl->FillGeometry(This, geometry, brush, opacityBrush))
#define ID2D1RenderTarget_FillMesh(This, mesh, brush) \
    ((This)->lpVtbl->FillMesh(This, mesh, brush))
#define ID2D1RenderTarget_FillOpacityMask(This, opacityMask, brush, content, destinationRectangle, sourceRectangle) \
    ((This)->lpVtbl->FillOpacityMask(This, opacityMask, brush, content, destinationRectangle, sourceRectangle))
#define ID2D1RenderTarget_DrawBitmap(This, bitmap, destinationRectangle, opacity, interpolationMode, sourceRectangle) \
    ((This)->lpVtbl->DrawBitmap(This, bitmap, destinationRectangle, opacity, interpolationMode, sourceRectangle))
#define ID2D1RenderTarget_DrawText(This, string, stringLength, textFormat, layoutRect, defaultForegroundBrush, options, measuringMode) \
    ((This)->lpVtbl->DrawText(This, string, stringLength, textFormat, layoutRect, defaultForegroundBrush, options, measuringMode))
#define ID2D1RenderTarget_DrawTextLayout(This, origin, textLayout, defaultForegroundBrush, options) \
    ((This)->lpVtbl->DrawTextLayout(This, origin, textLayout, defaultForegroundBrush, options))
#define ID2D1RenderTarget_DrawGlyphRun(This, baselineOrigin, glyphRun, foregroundBrush, measuringMode) \
    ((This)->lpVtbl->DrawGlyphRun(This, baselineOrigin, glyphRun, foregroundBrush, measuringMode))
#define ID2D1RenderTarget_SetTransform(This, transform) \
    ((This)->lpVtbl->SetTransform(This, transform))
#define ID2D1RenderTarget_GetTransform(This, transform) \
    ((This)->lpVtbl->GetTransform(This, transform))
#define ID2D1RenderTarget_SetAntialiasMode(This, antialiasMode) \
    ((This)->lpVtbl->SetAntialiasMode(This, antialiasMode))
#define ID2D1RenderTarget_GetAntialiasMode(This) \
    ((This)->lpVtbl->GetAntialiasMode(This))
#define ID2D1RenderTarget_SetTextAntialiasMode(This, textAntialiasMode) \
    ((This)->lpVtbl->SetTextAntialiasMode(This, textAntialiasMode))
#define ID2D1RenderTarget_GetTextAntialiasMode(This) \
    ((This)->lpVtbl->GetTextAntialiasMode(This))
#define ID2D1RenderTarget_SetTextRenderingParams(This, textRenderingParams) \
    ((This)->lpVtbl->SetTextRenderingParams(This, textRenderingParams))
#define ID2D1RenderTarget_GetTextRenderingParams(This, textRenderingParams) \
    ((This)->lpVtbl->GetTextRenderingParams(This, textRenderingParams))
#define ID2D1RenderTarget_SetTags(This, tag1, tag2) \
    ((This)->lpVtbl->SetTags(This, tag1, tag2))
#define ID2D1RenderTarget_GetTags(This, tag1, tag2) \
    ((This)->lpVtbl->GetTags(This, tag1, tag2))
#define ID2D1RenderTarget_PushLayer(This, layerParameters, layer) \
    ((This)->lpVtbl->PushLayer(This, layerParameters, layer))
#define ID2D1RenderTarget_PopLayer(This) \
    ((This)->lpVtbl->PopLayer(This))
#define ID2D1RenderTarget_Flush(This, tag1, tag2) \
    ((This)->lpVtbl->Flush(This, tag1, tag2))
#define ID2D1RenderTarget_SaveDrawingState(This, drawingStateBlock) \
    ((This)->lpVtbl->SaveDrawingState(This, drawingStateBlock))
#define ID2D1RenderTarget_RestoreDrawingState(This, drawingStateBlock) \
    ((This)->lpVtbl->RestoreDrawingState(This, drawingStateBlock))
#define ID2D1RenderTarget_PushAxisAlignedClip(This, clipRect, antialiasMode) \
    ((This)->lpVtbl->PushAxisAlignedClip(This, clipRect, antialiasMode))
#define ID2D1RenderTarget_PopAxisAlignedClip(This) \
    ((This)->lpVtbl->PopAxisAlignedClip(This))
#define ID2D1RenderTarget_Clear(This, clearColor) \
    ((This)->lpVtbl->Clear(This, clearColor))
#define ID2D1RenderTarget_BeginDraw(This) \
    ((This)->lpVtbl->BeginDraw(This))
#define ID2D1RenderTarget_EndDraw(This, tag1, tag2) \
    ((This)->lpVtbl->EndDraw(This, tag1, tag2))
#define ID2D1RenderTarget_GetPixelFormat(This) \
    ((This)->lpVtbl->GetPixelFormat(This))
#define ID2D1RenderTarget_SetDpi(This, dpiX, dpiY) \
    ((This)->lpVtbl->SetDpi(This, dpiX, dpiY))
#define ID2D1RenderTarget_GetDpi(This, dpiX, dpiY) \
    ((This)->lpVtbl->GetDpi(This, dpiX, dpiY))
#define ID2D1RenderTarget_GetSize(This) \
    ((This)->lpVtbl->GetSize(This))
#define ID2D1RenderTarget_GetPixelSize(This) \
    ((This)->lpVtbl->GetPixelSize(This))
#define ID2D1RenderTarget_GetMaximumBitmapSize(This) \
    ((This)->lpVtbl->GetMaximumBitmapSize(This))
#define ID2D1RenderTarget_IsSupported(This, renderTargetProperties) \
    ((This)->lpVtbl->IsSupported(This, renderTargetProperties))
typedef interface ID2D1BitmapRenderTarget ID2D1BitmapRenderTarget;
typedef struct ID2D1BitmapRenderTargetVtbl
{
	ID2D1RenderTargetVtbl Base;
	STDMETHOD(GetBitmap) (ID2D1BitmapRenderTarget * This, ID2D1Bitmap ** bitmap);
} ID2D1BitmapRenderTargetVtbl;
interface ID2D1BitmapRenderTarget
{
	CONST struct ID2D1BitmapRenderTargetVtbl *lpVtbl;
};
#define ID2D1BitmapRenderTarget_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1BitmapRenderTarget_AddRef(This) \
    ((This)->lpVtbl->Base.Base.Base.AddRef((IUnknown *)This))
#define ID2D1BitmapRenderTarget_Release(This) \
    ((This)->lpVtbl->Base.Base.Base.Release((IUnknown *)This))
#define ID2D1BitmapRenderTarget_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1BitmapRenderTarget_CreateBitmap(This, size, srcData, pitch, bitmapProperties, bitmap) \
    ((This)->lpVtbl->Base.CreateBitmap((ID2D1RenderTarget *)This, size, srcData, pitch, bitmapProperties, bitmap))
#define ID2D1BitmapRenderTarget_CreateBitmapFromWicBitmap(This, wicBitmapSource, bitmapProperties, bitmap) \
    ((This)->lpVtbl->Base.CreateBitmapFromWicBitmap((ID2D1RenderTarget *)This, wicBitmapSource, bitmapProperties, bitmap))
#define ID2D1BitmapRenderTarget_CreateSharedBitmap(This, riid, data, bitmapProperties, bitmap) \
    ((This)->lpVtbl->Base.CreateSharedBitmap((ID2D1RenderTarget *)This, riid, data, bitmapProperties, bitmap))
#define ID2D1BitmapRenderTarget_CreateBitmapBrush(This, bitmap, bitmapBrushProperties, brushProperties, bitmapBrush) \
    ((This)->lpVtbl->Base.CreateBitmapBrush((ID2D1RenderTarget *)This, bitmap, bitmapBrushProperties, brushProperties, bitmapBrush))
#define ID2D1BitmapRenderTarget_CreateSolidColorBrush(This, color, brushProperties, solidColorBrush) \
    ((This)->lpVtbl->Base.CreateSolidColorBrush((ID2D1RenderTarget *)This, color, brushProperties, solidColorBrush))
#define ID2D1BitmapRenderTarget_CreateGradientStopCollection(This, gradientStops, gradientStopsCount, colorInterpolationGamma, extendMode, gradientStopCollection) \
    ((This)->lpVtbl->Base.CreateGradientStopCollection((ID2D1RenderTarget *)This, gradientStops, gradientStopsCount, colorInterpolationGamma, extendMode, gradientStopCollection))
#define ID2D1BitmapRenderTarget_CreateLinearGradientBrush(This, linearGradientBrushProperties, brushProperties, gradientStopCollection, linearGradientBrush) \
    ((This)->lpVtbl->Base.CreateLinearGradientBrush((ID2D1RenderTarget *)This, linearGradientBrushProperties, brushProperties, gradientStopCollection, linearGradientBrush))
#define ID2D1BitmapRenderTarget_CreateRadialGradientBrush(This, radialGradientBrushProperties, brushProperties, gradientStopCollection, radialGradientBrush) \
    ((This)->lpVtbl->Base.CreateRadialGradientBrush((ID2D1RenderTarget *)This, radialGradientBrushProperties, brushProperties, gradientStopCollection, radialGradientBrush))
#define ID2D1BitmapRenderTarget_CreateCompatibleRenderTarget(This, desiredSize, desiredPixelSize, desiredFormat, options, bitmapRenderTarget) \
    ((This)->lpVtbl->Base.CreateCompatibleRenderTarget((ID2D1RenderTarget *)This, desiredSize, desiredPixelSize, desiredFormat, options, bitmapRenderTarget))
#define ID2D1BitmapRenderTarget_CreateLayer(This, size, layer) \
    ((This)->lpVtbl->Base.CreateLayer((ID2D1RenderTarget *)This, size, layer))
#define ID2D1BitmapRenderTarget_CreateMesh(This, mesh) \
    ((This)->lpVtbl->Base.CreateMesh((ID2D1RenderTarget *)This, mesh))
#define ID2D1BitmapRenderTarget_DrawLine(This, point0, point1, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->Base.DrawLine((ID2D1RenderTarget *)This, point0, point1, brush, strokeWidth, strokeStyle))
#define ID2D1BitmapRenderTarget_DrawRectangle(This, rect, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->Base.DrawRectangle((ID2D1RenderTarget *)This, rect, brush, strokeWidth, strokeStyle))
#define ID2D1BitmapRenderTarget_FillRectangle(This, rect, brush) \
    ((This)->lpVtbl->Base.FillRectangle((ID2D1RenderTarget *)This, rect, brush))
#define ID2D1BitmapRenderTarget_DrawRoundedRectangle(This, roundedRect, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->Base.DrawRoundedRectangle((ID2D1RenderTarget *)This, roundedRect, brush, strokeWidth, strokeStyle))
#define ID2D1BitmapRenderTarget_FillRoundedRectangle(This, roundedRect, brush) \
    ((This)->lpVtbl->Base.FillRoundedRectangle((ID2D1RenderTarget *)This, roundedRect, brush))
#define ID2D1BitmapRenderTarget_DrawEllipse(This, ellipse, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->Base.DrawEllipse((ID2D1RenderTarget *)This, ellipse, brush, strokeWidth, strokeStyle))
#define ID2D1BitmapRenderTarget_FillEllipse(This, ellipse, brush) \
    ((This)->lpVtbl->Base.FillEllipse((ID2D1RenderTarget *)This, ellipse, brush))
#define ID2D1BitmapRenderTarget_DrawGeometry(This, geometry, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->Base.DrawGeometry((ID2D1RenderTarget *)This, geometry, brush, strokeWidth, strokeStyle))
#define ID2D1BitmapRenderTarget_FillGeometry(This, geometry, brush, opacityBrush) \
    ((This)->lpVtbl->Base.FillGeometry((ID2D1RenderTarget *)This, geometry, brush, opacityBrush))
#define ID2D1BitmapRenderTarget_FillMesh(This, mesh, brush) \
    ((This)->lpVtbl->Base.FillMesh((ID2D1RenderTarget *)This, mesh, brush))
#define ID2D1BitmapRenderTarget_FillOpacityMask(This, opacityMask, brush, content, destinationRectangle, sourceRectangle) \
    ((This)->lpVtbl->Base.FillOpacityMask((ID2D1RenderTarget *)This, opacityMask, brush, content, destinationRectangle, sourceRectangle))
#define ID2D1BitmapRenderTarget_DrawBitmap(This, bitmap, destinationRectangle, opacity, interpolationMode, sourceRectangle) \
    ((This)->lpVtbl->Base.DrawBitmap((ID2D1RenderTarget *)This, bitmap, destinationRectangle, opacity, interpolationMode, sourceRectangle))
#define ID2D1BitmapRenderTarget_DrawText(This, string, stringLength, textFormat, layoutRect, defaultForegroundBrush, options, measuringMode) \
    ((This)->lpVtbl->Base.DrawText((ID2D1RenderTarget *)This, string, stringLength, textFormat, layoutRect, defaultForegroundBrush, options, measuringMode))
#define ID2D1BitmapRenderTarget_DrawTextLayout(This, origin, textLayout, defaultForegroundBrush, options) \
    ((This)->lpVtbl->Base.DrawTextLayout((ID2D1RenderTarget *)This, origin, textLayout, defaultForegroundBrush, options))
#define ID2D1BitmapRenderTarget_DrawGlyphRun(This, baselineOrigin, glyphRun, foregroundBrush, measuringMode) \
    ((This)->lpVtbl->Base.DrawGlyphRun((ID2D1RenderTarget *)This, baselineOrigin, glyphRun, foregroundBrush, measuringMode))
#define ID2D1BitmapRenderTarget_SetTransform(This, transform) \
    ((This)->lpVtbl->Base.SetTransform((ID2D1RenderTarget *)This, transform))
#define ID2D1BitmapRenderTarget_GetTransform(This, transform) \
    ((This)->lpVtbl->Base.GetTransform((ID2D1RenderTarget *)This, transform))
#define ID2D1BitmapRenderTarget_SetAntialiasMode(This, antialiasMode) \
    ((This)->lpVtbl->Base.SetAntialiasMode((ID2D1RenderTarget *)This, antialiasMode))
#define ID2D1BitmapRenderTarget_GetAntialiasMode(This) \
    ((This)->lpVtbl->Base.GetAntialiasMode((ID2D1RenderTarget *)This))
#define ID2D1BitmapRenderTarget_SetTextAntialiasMode(This, textAntialiasMode) \
    ((This)->lpVtbl->Base.SetTextAntialiasMode((ID2D1RenderTarget *)This, textAntialiasMode))
#define ID2D1BitmapRenderTarget_GetTextAntialiasMode(This) \
    ((This)->lpVtbl->Base.GetTextAntialiasMode((ID2D1RenderTarget *)This))
#define ID2D1BitmapRenderTarget_SetTextRenderingParams(This, textRenderingParams) \
    ((This)->lpVtbl->Base.SetTextRenderingParams((ID2D1RenderTarget *)This, textRenderingParams))
#define ID2D1BitmapRenderTarget_GetTextRenderingParams(This, textRenderingParams) \
    ((This)->lpVtbl->Base.GetTextRenderingParams((ID2D1RenderTarget *)This, textRenderingParams))
#define ID2D1BitmapRenderTarget_SetTags(This, tag1, tag2) \
    ((This)->lpVtbl->Base.SetTags((ID2D1RenderTarget *)This, tag1, tag2))
#define ID2D1BitmapRenderTarget_GetTags(This, tag1, tag2) \
    ((This)->lpVtbl->Base.GetTags((ID2D1RenderTarget *)This, tag1, tag2))
#define ID2D1BitmapRenderTarget_PushLayer(This, layerParameters, layer) \
    ((This)->lpVtbl->Base.PushLayer((ID2D1RenderTarget *)This, layerParameters, layer))
#define ID2D1BitmapRenderTarget_PopLayer(This) \
    ((This)->lpVtbl->Base.PopLayer((ID2D1RenderTarget *)This))
#define ID2D1BitmapRenderTarget_Flush(This, tag1, tag2) \
    ((This)->lpVtbl->Base.Flush((ID2D1RenderTarget *)This, tag1, tag2))
#define ID2D1BitmapRenderTarget_SaveDrawingState(This, drawingStateBlock) \
    ((This)->lpVtbl->Base.SaveDrawingState((ID2D1RenderTarget *)This, drawingStateBlock))
#define ID2D1BitmapRenderTarget_RestoreDrawingState(This, drawingStateBlock) \
    ((This)->lpVtbl->Base.RestoreDrawingState((ID2D1RenderTarget *)This, drawingStateBlock))
#define ID2D1BitmapRenderTarget_PushAxisAlignedClip(This, clipRect, antialiasMode) \
    ((This)->lpVtbl->Base.PushAxisAlignedClip((ID2D1RenderTarget *)This, clipRect, antialiasMode))
#define ID2D1BitmapRenderTarget_PopAxisAlignedClip(This) \
    ((This)->lpVtbl->Base.PopAxisAlignedClip((ID2D1RenderTarget *)This))
#define ID2D1BitmapRenderTarget_Clear(This, clearColor) \
    ((This)->lpVtbl->Base.Clear((ID2D1RenderTarget *)This, clearColor))
#define ID2D1BitmapRenderTarget_BeginDraw(This) \
    ((This)->lpVtbl->Base.BeginDraw((ID2D1RenderTarget *)This))
#define ID2D1BitmapRenderTarget_EndDraw(This, tag1, tag2) \
    ((This)->lpVtbl->Base.EndDraw((ID2D1RenderTarget *)This, tag1, tag2))
#define ID2D1BitmapRenderTarget_GetPixelFormat(This) \
    ((This)->lpVtbl->Base.GetPixelFormat((ID2D1RenderTarget *)This))
#define ID2D1BitmapRenderTarget_SetDpi(This, dpiX, dpiY) \
    ((This)->lpVtbl->Base.SetDpi((ID2D1RenderTarget *)This, dpiX, dpiY))
#define ID2D1BitmapRenderTarget_GetDpi(This, dpiX, dpiY) \
    ((This)->lpVtbl->Base.GetDpi((ID2D1RenderTarget *)This, dpiX, dpiY))
#define ID2D1BitmapRenderTarget_GetSize(This) \
    ((This)->lpVtbl->Base.GetSize((ID2D1RenderTarget *)This))
#define ID2D1BitmapRenderTarget_GetPixelSize(This) \
    ((This)->lpVtbl->Base.GetPixelSize((ID2D1RenderTarget *)This))
#define ID2D1BitmapRenderTarget_GetMaximumBitmapSize(This) \
    ((This)->lpVtbl->Base.GetMaximumBitmapSize((ID2D1RenderTarget *)This))
#define ID2D1BitmapRenderTarget_IsSupported(This, renderTargetProperties) \
    ((This)->lpVtbl->Base.IsSupported((ID2D1RenderTarget *)This, renderTargetProperties))
#define ID2D1BitmapRenderTarget_GetBitmap(This, bitmap) \
    ((This)->lpVtbl->GetBitmap(This, bitmap))
typedef interface ID2D1HwndRenderTarget ID2D1HwndRenderTarget;
typedef struct ID2D1HwndRenderTargetVtbl
{
	ID2D1RenderTargetVtbl Base;
	STDMETHOD_(D2D1_WINDOW_STATE, CheckWindowState) (ID2D1HwndRenderTarget * This);
	STDMETHOD(Resize) (ID2D1HwndRenderTarget * This, CONST D2D1_SIZE_U * pixelSize);
	STDMETHOD_(HWND, GetHwnd) (ID2D1HwndRenderTarget * This);
} ID2D1HwndRenderTargetVtbl;
interface ID2D1HwndRenderTarget
{
	CONST struct ID2D1HwndRenderTargetVtbl *lpVtbl;
};
#define ID2D1HwndRenderTarget_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1HwndRenderTarget_AddRef(This) \
    ((This)->lpVtbl->Base.Base.Base.AddRef((IUnknown *)This))
#define ID2D1HwndRenderTarget_Release(This) \
    ((This)->lpVtbl->Base.Base.Base.Release((IUnknown *)This))
#define ID2D1HwndRenderTarget_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1HwndRenderTarget_CreateBitmap(This, size, srcData, pitch, bitmapProperties, bitmap) \
    ((This)->lpVtbl->Base.CreateBitmap((ID2D1RenderTarget *)This, size, srcData, pitch, bitmapProperties, bitmap))
#define ID2D1HwndRenderTarget_CreateBitmapFromWicBitmap(This, wicBitmapSource, bitmapProperties, bitmap) \
    ((This)->lpVtbl->Base.CreateBitmapFromWicBitmap((ID2D1RenderTarget *)This, wicBitmapSource, bitmapProperties, bitmap))
#define ID2D1HwndRenderTarget_CreateSharedBitmap(This, riid, data, bitmapProperties, bitmap) \
    ((This)->lpVtbl->Base.CreateSharedBitmap((ID2D1RenderTarget *)This, riid, data, bitmapProperties, bitmap))
#define ID2D1HwndRenderTarget_CreateBitmapBrush(This, bitmap, bitmapBrushProperties, brushProperties, bitmapBrush) \
    ((This)->lpVtbl->Base.CreateBitmapBrush((ID2D1RenderTarget *)This, bitmap, bitmapBrushProperties, brushProperties, bitmapBrush))
#define ID2D1HwndRenderTarget_CreateSolidColorBrush(This, color, brushProperties, solidColorBrush) \
    ((This)->lpVtbl->Base.CreateSolidColorBrush((ID2D1RenderTarget *)This, color, brushProperties, solidColorBrush))
#define ID2D1HwndRenderTarget_CreateGradientStopCollection(This, gradientStops, gradientStopsCount, colorInterpolationGamma, extendMode, gradientStopCollection) \
    ((This)->lpVtbl->Base.CreateGradientStopCollection((ID2D1RenderTarget *)This, gradientStops, gradientStopsCount, colorInterpolationGamma, extendMode, gradientStopCollection))
#define ID2D1HwndRenderTarget_CreateLinearGradientBrush(This, linearGradientBrushProperties, brushProperties, gradientStopCollection, linearGradientBrush) \
    ((This)->lpVtbl->Base.CreateLinearGradientBrush((ID2D1RenderTarget *)This, linearGradientBrushProperties, brushProperties, gradientStopCollection, linearGradientBrush))
#define ID2D1HwndRenderTarget_CreateRadialGradientBrush(This, radialGradientBrushProperties, brushProperties, gradientStopCollection, radialGradientBrush) \
    ((This)->lpVtbl->Base.CreateRadialGradientBrush((ID2D1RenderTarget *)This, radialGradientBrushProperties, brushProperties, gradientStopCollection, radialGradientBrush))
#define ID2D1HwndRenderTarget_CreateCompatibleRenderTarget(This, desiredSize, desiredPixelSize, desiredFormat, options, bitmapRenderTarget) \
    ((This)->lpVtbl->Base.CreateCompatibleRenderTarget((ID2D1RenderTarget *)This, desiredSize, desiredPixelSize, desiredFormat, options, bitmapRenderTarget))
#define ID2D1HwndRenderTarget_CreateLayer(This, size, layer) \
    ((This)->lpVtbl->Base.CreateLayer((ID2D1RenderTarget *)This, size, layer))
#define ID2D1HwndRenderTarget_CreateMesh(This, mesh) \
    ((This)->lpVtbl->Base.CreateMesh((ID2D1RenderTarget *)This, mesh))
#define ID2D1HwndRenderTarget_DrawLine(This, point0, point1, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->Base.DrawLine((ID2D1RenderTarget *)This, point0, point1, brush, strokeWidth, strokeStyle))
#define ID2D1HwndRenderTarget_DrawRectangle(This, rect, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->Base.DrawRectangle((ID2D1RenderTarget *)This, rect, brush, strokeWidth, strokeStyle))
#define ID2D1HwndRenderTarget_FillRectangle(This, rect, brush) \
    ((This)->lpVtbl->Base.FillRectangle((ID2D1RenderTarget *)This, rect, brush))
#define ID2D1HwndRenderTarget_DrawRoundedRectangle(This, roundedRect, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->Base.DrawRoundedRectangle((ID2D1RenderTarget *)This, roundedRect, brush, strokeWidth, strokeStyle))
#define ID2D1HwndRenderTarget_FillRoundedRectangle(This, roundedRect, brush) \
    ((This)->lpVtbl->Base.FillRoundedRectangle((ID2D1RenderTarget *)This, roundedRect, brush))
#define ID2D1HwndRenderTarget_DrawEllipse(This, ellipse, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->Base.DrawEllipse((ID2D1RenderTarget *)This, ellipse, brush, strokeWidth, strokeStyle))
#define ID2D1HwndRenderTarget_FillEllipse(This, ellipse, brush) \
    ((This)->lpVtbl->Base.FillEllipse((ID2D1RenderTarget *)This, ellipse, brush))
#define ID2D1HwndRenderTarget_DrawGeometry(This, geometry, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->Base.DrawGeometry((ID2D1RenderTarget *)This, geometry, brush, strokeWidth, strokeStyle))
#define ID2D1HwndRenderTarget_FillGeometry(This, geometry, brush, opacityBrush) \
    ((This)->lpVtbl->Base.FillGeometry((ID2D1RenderTarget *)This, geometry, brush, opacityBrush))
#define ID2D1HwndRenderTarget_FillMesh(This, mesh, brush) \
    ((This)->lpVtbl->Base.FillMesh((ID2D1RenderTarget *)This, mesh, brush))
#define ID2D1HwndRenderTarget_FillOpacityMask(This, opacityMask, brush, content, destinationRectangle, sourceRectangle) \
    ((This)->lpVtbl->Base.FillOpacityMask((ID2D1RenderTarget *)This, opacityMask, brush, content, destinationRectangle, sourceRectangle))
#define ID2D1HwndRenderTarget_DrawBitmap(This, bitmap, destinationRectangle, opacity, interpolationMode, sourceRectangle) \
    ((This)->lpVtbl->Base.DrawBitmap((ID2D1RenderTarget *)This, bitmap, destinationRectangle, opacity, interpolationMode, sourceRectangle))
#define ID2D1HwndRenderTarget_DrawText(This, string, stringLength, textFormat, layoutRect, defaultForegroundBrush, options, measuringMode) \
    ((This)->lpVtbl->Base.DrawText((ID2D1RenderTarget *)This, string, stringLength, textFormat, layoutRect, defaultForegroundBrush, options, measuringMode))
#define ID2D1HwndRenderTarget_DrawTextLayout(This, origin, textLayout, defaultForegroundBrush, options) \
    ((This)->lpVtbl->Base.DrawTextLayout((ID2D1RenderTarget *)This, origin, textLayout, defaultForegroundBrush, options))
#define ID2D1HwndRenderTarget_DrawGlyphRun(This, baselineOrigin, glyphRun, foregroundBrush, measuringMode) \
    ((This)->lpVtbl->Base.DrawGlyphRun((ID2D1RenderTarget *)This, baselineOrigin, glyphRun, foregroundBrush, measuringMode))
#define ID2D1HwndRenderTarget_SetTransform(This, transform) \
    ((This)->lpVtbl->Base.SetTransform((ID2D1RenderTarget *)This, transform))
#define ID2D1HwndRenderTarget_GetTransform(This, transform) \
    ((This)->lpVtbl->Base.GetTransform((ID2D1RenderTarget *)This, transform))
#define ID2D1HwndRenderTarget_SetAntialiasMode(This, antialiasMode) \
    ((This)->lpVtbl->Base.SetAntialiasMode((ID2D1RenderTarget *)This, antialiasMode))
#define ID2D1HwndRenderTarget_GetAntialiasMode(This) \
    ((This)->lpVtbl->Base.GetAntialiasMode((ID2D1RenderTarget *)This))
#define ID2D1HwndRenderTarget_SetTextAntialiasMode(This, textAntialiasMode) \
    ((This)->lpVtbl->Base.SetTextAntialiasMode((ID2D1RenderTarget *)This, textAntialiasMode))
#define ID2D1HwndRenderTarget_GetTextAntialiasMode(This) \
    ((This)->lpVtbl->Base.GetTextAntialiasMode((ID2D1RenderTarget *)This))
#define ID2D1HwndRenderTarget_SetTextRenderingParams(This, textRenderingParams) \
    ((This)->lpVtbl->Base.SetTextRenderingParams((ID2D1RenderTarget *)This, textRenderingParams))
#define ID2D1HwndRenderTarget_GetTextRenderingParams(This, textRenderingParams) \
    ((This)->lpVtbl->Base.GetTextRenderingParams((ID2D1RenderTarget *)This, textRenderingParams))
#define ID2D1HwndRenderTarget_SetTags(This, tag1, tag2) \
    ((This)->lpVtbl->Base.SetTags((ID2D1RenderTarget *)This, tag1, tag2))
#define ID2D1HwndRenderTarget_GetTags(This, tag1, tag2) \
    ((This)->lpVtbl->Base.GetTags((ID2D1RenderTarget *)This, tag1, tag2))
#define ID2D1HwndRenderTarget_PushLayer(This, layerParameters, layer) \
    ((This)->lpVtbl->Base.PushLayer((ID2D1RenderTarget *)This, layerParameters, layer))
#define ID2D1HwndRenderTarget_PopLayer(This) \
    ((This)->lpVtbl->Base.PopLayer((ID2D1RenderTarget *)This))
#define ID2D1HwndRenderTarget_Flush(This, tag1, tag2) \
    ((This)->lpVtbl->Base.Flush((ID2D1RenderTarget *)This, tag1, tag2))
#define ID2D1HwndRenderTarget_SaveDrawingState(This, drawingStateBlock) \
    ((This)->lpVtbl->Base.SaveDrawingState((ID2D1RenderTarget *)This, drawingStateBlock))
#define ID2D1HwndRenderTarget_RestoreDrawingState(This, drawingStateBlock) \
    ((This)->lpVtbl->Base.RestoreDrawingState((ID2D1RenderTarget *)This, drawingStateBlock))
#define ID2D1HwndRenderTarget_PushAxisAlignedClip(This, clipRect, antialiasMode) \
    ((This)->lpVtbl->Base.PushAxisAlignedClip((ID2D1RenderTarget *)This, clipRect, antialiasMode))
#define ID2D1HwndRenderTarget_PopAxisAlignedClip(This) \
    ((This)->lpVtbl->Base.PopAxisAlignedClip((ID2D1RenderTarget *)This))
#define ID2D1HwndRenderTarget_Clear(This, clearColor) \
    ((This)->lpVtbl->Base.Clear((ID2D1RenderTarget *)This, clearColor))
#define ID2D1HwndRenderTarget_BeginDraw(This) \
    ((This)->lpVtbl->Base.BeginDraw((ID2D1RenderTarget *)This))
#define ID2D1HwndRenderTarget_EndDraw(This, tag1, tag2) \
    ((This)->lpVtbl->Base.EndDraw((ID2D1RenderTarget *)This, tag1, tag2))
#define ID2D1HwndRenderTarget_GetPixelFormat(This) \
    ((This)->lpVtbl->Base.GetPixelFormat((ID2D1RenderTarget *)This))
#define ID2D1HwndRenderTarget_SetDpi(This, dpiX, dpiY) \
    ((This)->lpVtbl->Base.SetDpi((ID2D1RenderTarget *)This, dpiX, dpiY))
#define ID2D1HwndRenderTarget_GetDpi(This, dpiX, dpiY) \
    ((This)->lpVtbl->Base.GetDpi((ID2D1RenderTarget *)This, dpiX, dpiY))
#define ID2D1HwndRenderTarget_GetSize(This) \
    ((This)->lpVtbl->Base.GetSize((ID2D1RenderTarget *)This))
#define ID2D1HwndRenderTarget_GetPixelSize(This) \
    ((This)->lpVtbl->Base.GetPixelSize((ID2D1RenderTarget *)This))
#define ID2D1HwndRenderTarget_GetMaximumBitmapSize(This) \
    ((This)->lpVtbl->Base.GetMaximumBitmapSize((ID2D1RenderTarget *)This))
#define ID2D1HwndRenderTarget_IsSupported(This, renderTargetProperties) \
    ((This)->lpVtbl->Base.IsSupported((ID2D1RenderTarget *)This, renderTargetProperties))
#define ID2D1HwndRenderTarget_CheckWindowState(This) \
    ((This)->lpVtbl->CheckWindowState(This))
#define ID2D1HwndRenderTarget_Resize(This, pixelSize) \
    ((This)->lpVtbl->Resize(This, pixelSize))
#define ID2D1HwndRenderTarget_GetHwnd(This) \
    ((This)->lpVtbl->GetHwnd(This))
typedef interface ID2D1GdiInteropRenderTarget ID2D1GdiInteropRenderTarget;
typedef struct ID2D1GdiInteropRenderTargetVtbl
{
	IUnknownVtbl Base;
	STDMETHOD(GetDC) (ID2D1GdiInteropRenderTarget * This, D2D1_DC_INITIALIZE_MODE mode, HDC * hdc);
	STDMETHOD(ReleaseDC) (ID2D1GdiInteropRenderTarget * This, CONST RECT * update);
} ID2D1GdiInteropRenderTargetVtbl;
interface ID2D1GdiInteropRenderTarget
{
	CONST struct ID2D1GdiInteropRenderTargetVtbl *lpVtbl;
};
#define ID2D1GdiInteropRenderTarget_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1GdiInteropRenderTarget_AddRef(This) \
    ((This)->lpVtbl->Base.AddRef((IUnknown *)This))
#define ID2D1GdiInteropRenderTarget_Release(This) \
    ((This)->lpVtbl->Base.Release((IUnknown *)This))
#define ID2D1GdiInteropRenderTarget_GetDC(This, mode, hdc) \
    ((This)->lpVtbl->GetDC(This, mode, hdc))
#define ID2D1GdiInteropRenderTarget_ReleaseDC(This, update) \
    ((This)->lpVtbl->ReleaseDC(This, update))
typedef interface ID2D1DCRenderTarget ID2D1DCRenderTarget;
typedef struct ID2D1DCRenderTargetVtbl
{
	ID2D1RenderTargetVtbl Base;
	STDMETHOD(BindDC) (ID2D1DCRenderTarget * This, CONST HDC hDC, CONST RECT * pSubRect);
} ID2D1DCRenderTargetVtbl;
interface ID2D1DCRenderTarget
{
	CONST struct ID2D1DCRenderTargetVtbl *lpVtbl;
};
#define ID2D1DCRenderTarget_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.Base.Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1DCRenderTarget_AddRef(This) \
    ((This)->lpVtbl->Base.Base.Base.AddRef((IUnknown *)This))
#define ID2D1DCRenderTarget_Release(This) \
    ((This)->lpVtbl->Base.Base.Base.Release((IUnknown *)This))
#define ID2D1DCRenderTarget_GetFactory(This, factory) \
    ((This)->lpVtbl->Base.Base.GetFactory((ID2D1Resource *)This, factory))
#define ID2D1DCRenderTarget_CreateBitmap(This, size, srcData, pitch, bitmapProperties, bitmap) \
    ((This)->lpVtbl->Base.CreateBitmap((ID2D1RenderTarget *)This, size, srcData, pitch, bitmapProperties, bitmap))
#define ID2D1DCRenderTarget_CreateBitmapFromWicBitmap(This, wicBitmapSource, bitmapProperties, bitmap) \
    ((This)->lpVtbl->Base.CreateBitmapFromWicBitmap((ID2D1RenderTarget *)This, wicBitmapSource, bitmapProperties, bitmap))
#define ID2D1DCRenderTarget_CreateSharedBitmap(This, riid, data, bitmapProperties, bitmap) \
    ((This)->lpVtbl->Base.CreateSharedBitmap((ID2D1RenderTarget *)This, riid, data, bitmapProperties, bitmap))
#define ID2D1DCRenderTarget_CreateBitmapBrush(This, bitmap, bitmapBrushProperties, brushProperties, bitmapBrush) \
    ((This)->lpVtbl->Base.CreateBitmapBrush((ID2D1RenderTarget *)This, bitmap, bitmapBrushProperties, brushProperties, bitmapBrush))
#define ID2D1DCRenderTarget_CreateSolidColorBrush(This, color, brushProperties, solidColorBrush) \
    ((This)->lpVtbl->Base.CreateSolidColorBrush((ID2D1RenderTarget *)This, color, brushProperties, solidColorBrush))
#define ID2D1DCRenderTarget_CreateGradientStopCollection(This, gradientStops, gradientStopsCount, colorInterpolationGamma, extendMode, gradientStopCollection) \
    ((This)->lpVtbl->Base.CreateGradientStopCollection((ID2D1RenderTarget *)This, gradientStops, gradientStopsCount, colorInterpolationGamma, extendMode, gradientStopCollection))
#define ID2D1DCRenderTarget_CreateLinearGradientBrush(This, linearGradientBrushProperties, brushProperties, gradientStopCollection, linearGradientBrush) \
    ((This)->lpVtbl->Base.CreateLinearGradientBrush((ID2D1RenderTarget *)This, linearGradientBrushProperties, brushProperties, gradientStopCollection, linearGradientBrush))
#define ID2D1DCRenderTarget_CreateRadialGradientBrush(This, radialGradientBrushProperties, brushProperties, gradientStopCollection, radialGradientBrush) \
    ((This)->lpVtbl->Base.CreateRadialGradientBrush((ID2D1RenderTarget *)This, radialGradientBrushProperties, brushProperties, gradientStopCollection, radialGradientBrush))
#define ID2D1DCRenderTarget_CreateCompatibleRenderTarget(This, desiredSize, desiredPixelSize, desiredFormat, options, bitmapRenderTarget) \
    ((This)->lpVtbl->Base.CreateCompatibleRenderTarget((ID2D1RenderTarget *)This, desiredSize, desiredPixelSize, desiredFormat, options, bitmapRenderTarget))
#define ID2D1DCRenderTarget_CreateLayer(This, size, layer) \
    ((This)->lpVtbl->Base.CreateLayer((ID2D1RenderTarget *)This, size, layer))
#define ID2D1DCRenderTarget_CreateMesh(This, mesh) \
    ((This)->lpVtbl->Base.CreateMesh((ID2D1RenderTarget *)This, mesh))
#define ID2D1DCRenderTarget_DrawLine(This, point0, point1, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->Base.DrawLine((ID2D1RenderTarget *)This, point0, point1, brush, strokeWidth, strokeStyle))
#define ID2D1DCRenderTarget_DrawRectangle(This, rect, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->Base.DrawRectangle((ID2D1RenderTarget *)This, rect, brush, strokeWidth, strokeStyle))
#define ID2D1DCRenderTarget_FillRectangle(This, rect, brush) \
    ((This)->lpVtbl->Base.FillRectangle((ID2D1RenderTarget *)This, rect, brush))
#define ID2D1DCRenderTarget_DrawRoundedRectangle(This, roundedRect, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->Base.DrawRoundedRectangle((ID2D1RenderTarget *)This, roundedRect, brush, strokeWidth, strokeStyle))
#define ID2D1DCRenderTarget_FillRoundedRectangle(This, roundedRect, brush) \
    ((This)->lpVtbl->Base.FillRoundedRectangle((ID2D1RenderTarget *)This, roundedRect, brush))
#define ID2D1DCRenderTarget_DrawEllipse(This, ellipse, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->Base.DrawEllipse((ID2D1RenderTarget *)This, ellipse, brush, strokeWidth, strokeStyle))
#define ID2D1DCRenderTarget_FillEllipse(This, ellipse, brush) \
    ((This)->lpVtbl->Base.FillEllipse((ID2D1RenderTarget *)This, ellipse, brush))
#define ID2D1DCRenderTarget_DrawGeometry(This, geometry, brush, strokeWidth, strokeStyle) \
    ((This)->lpVtbl->Base.DrawGeometry((ID2D1RenderTarget *)This, geometry, brush, strokeWidth, strokeStyle))
#define ID2D1DCRenderTarget_FillGeometry(This, geometry, brush, opacityBrush) \
    ((This)->lpVtbl->Base.FillGeometry((ID2D1RenderTarget *)This, geometry, brush, opacityBrush))
#define ID2D1DCRenderTarget_FillMesh(This, mesh, brush) \
    ((This)->lpVtbl->Base.FillMesh((ID2D1RenderTarget *)This, mesh, brush))
#define ID2D1DCRenderTarget_FillOpacityMask(This, opacityMask, brush, content, destinationRectangle, sourceRectangle) \
    ((This)->lpVtbl->Base.FillOpacityMask((ID2D1RenderTarget *)This, opacityMask, brush, content, destinationRectangle, sourceRectangle))
#define ID2D1DCRenderTarget_DrawBitmap(This, bitmap, destinationRectangle, opacity, interpolationMode, sourceRectangle) \
    ((This)->lpVtbl->Base.DrawBitmap((ID2D1RenderTarget *)This, bitmap, destinationRectangle, opacity, interpolationMode, sourceRectangle))
#define ID2D1DCRenderTarget_DrawText(This, string, stringLength, textFormat, layoutRect, defaultForegroundBrush, options, measuringMode) \
    ((This)->lpVtbl->Base.DrawText((ID2D1RenderTarget *)This, string, stringLength, textFormat, layoutRect, defaultForegroundBrush, options, measuringMode))
#define ID2D1DCRenderTarget_DrawTextLayout(This, origin, textLayout, defaultForegroundBrush, options) \
    ((This)->lpVtbl->Base.DrawTextLayout((ID2D1RenderTarget *)This, origin, textLayout, defaultForegroundBrush, options))
#define ID2D1DCRenderTarget_DrawGlyphRun(This, baselineOrigin, glyphRun, foregroundBrush, measuringMode) \
    ((This)->lpVtbl->Base.DrawGlyphRun((ID2D1RenderTarget *)This, baselineOrigin, glyphRun, foregroundBrush, measuringMode))
#define ID2D1DCRenderTarget_SetTransform(This, transform) \
    ((This)->lpVtbl->Base.SetTransform((ID2D1RenderTarget *)This, transform))
#define ID2D1DCRenderTarget_GetTransform(This, transform) \
    ((This)->lpVtbl->Base.GetTransform((ID2D1RenderTarget *)This, transform))
#define ID2D1DCRenderTarget_SetAntialiasMode(This, antialiasMode) \
    ((This)->lpVtbl->Base.SetAntialiasMode((ID2D1RenderTarget *)This, antialiasMode))
#define ID2D1DCRenderTarget_GetAntialiasMode(This) \
    ((This)->lpVtbl->Base.GetAntialiasMode((ID2D1RenderTarget *)This))
#define ID2D1DCRenderTarget_SetTextAntialiasMode(This, textAntialiasMode) \
    ((This)->lpVtbl->Base.SetTextAntialiasMode((ID2D1RenderTarget *)This, textAntialiasMode))
#define ID2D1DCRenderTarget_GetTextAntialiasMode(This) \
    ((This)->lpVtbl->Base.GetTextAntialiasMode((ID2D1RenderTarget *)This))
#define ID2D1DCRenderTarget_SetTextRenderingParams(This, textRenderingParams) \
    ((This)->lpVtbl->Base.SetTextRenderingParams((ID2D1RenderTarget *)This, textRenderingParams))
#define ID2D1DCRenderTarget_GetTextRenderingParams(This, textRenderingParams) \
    ((This)->lpVtbl->Base.GetTextRenderingParams((ID2D1RenderTarget *)This, textRenderingParams))
#define ID2D1DCRenderTarget_SetTags(This, tag1, tag2) \
    ((This)->lpVtbl->Base.SetTags((ID2D1RenderTarget *)This, tag1, tag2))
#define ID2D1DCRenderTarget_GetTags(This, tag1, tag2) \
    ((This)->lpVtbl->Base.GetTags((ID2D1RenderTarget *)This, tag1, tag2))
#define ID2D1DCRenderTarget_PushLayer(This, layerParameters, layer) \
    ((This)->lpVtbl->Base.PushLayer((ID2D1RenderTarget *)This, layerParameters, layer))
#define ID2D1DCRenderTarget_PopLayer(This) \
    ((This)->lpVtbl->Base.PopLayer((ID2D1RenderTarget *)This))
#define ID2D1DCRenderTarget_Flush(This, tag1, tag2) \
    ((This)->lpVtbl->Base.Flush((ID2D1RenderTarget *)This, tag1, tag2))
#define ID2D1DCRenderTarget_SaveDrawingState(This, drawingStateBlock) \
    ((This)->lpVtbl->Base.SaveDrawingState((ID2D1RenderTarget *)This, drawingStateBlock))
#define ID2D1DCRenderTarget_RestoreDrawingState(This, drawingStateBlock) \
    ((This)->lpVtbl->Base.RestoreDrawingState((ID2D1RenderTarget *)This, drawingStateBlock))
#define ID2D1DCRenderTarget_PushAxisAlignedClip(This, clipRect, antialiasMode) \
    ((This)->lpVtbl->Base.PushAxisAlignedClip((ID2D1RenderTarget *)This, clipRect, antialiasMode))
#define ID2D1DCRenderTarget_PopAxisAlignedClip(This) \
    ((This)->lpVtbl->Base.PopAxisAlignedClip((ID2D1RenderTarget *)This))
#define ID2D1DCRenderTarget_Clear(This, clearColor) \
    ((This)->lpVtbl->Base.Clear((ID2D1RenderTarget *)This, clearColor))
#define ID2D1DCRenderTarget_BeginDraw(This) \
    ((This)->lpVtbl->Base.BeginDraw((ID2D1RenderTarget *)This))
#define ID2D1DCRenderTarget_EndDraw(This, tag1, tag2) \
    ((This)->lpVtbl->Base.EndDraw((ID2D1RenderTarget *)This, tag1, tag2))
#define ID2D1DCRenderTarget_GetPixelFormat(This) \
    ((This)->lpVtbl->Base.GetPixelFormat((ID2D1RenderTarget *)This))
#define ID2D1DCRenderTarget_SetDpi(This, dpiX, dpiY) \
    ((This)->lpVtbl->Base.SetDpi((ID2D1RenderTarget *)This, dpiX, dpiY))
#define ID2D1DCRenderTarget_GetDpi(This, dpiX, dpiY) \
    ((This)->lpVtbl->Base.GetDpi((ID2D1RenderTarget *)This, dpiX, dpiY))
#define ID2D1DCRenderTarget_GetSize(This) \
    ((This)->lpVtbl->Base.GetSize((ID2D1RenderTarget *)This))
#define ID2D1DCRenderTarget_GetPixelSize(This) \
    ((This)->lpVtbl->Base.GetPixelSize((ID2D1RenderTarget *)This))
#define ID2D1DCRenderTarget_GetMaximumBitmapSize(This) \
    ((This)->lpVtbl->Base.GetMaximumBitmapSize((ID2D1RenderTarget *)This))
#define ID2D1DCRenderTarget_IsSupported(This, renderTargetProperties) \
    ((This)->lpVtbl->Base.IsSupported((ID2D1RenderTarget *)This, renderTargetProperties))
#define ID2D1DCRenderTarget_BindDC(This, hDC, pSubRect) \
    ((This)->lpVtbl->BindDC(This, hDC, pSubRect))
typedef interface ID2D1Factory ID2D1Factory;
typedef struct ID2D1FactoryVtbl
{
	IUnknownVtbl Base;
	STDMETHOD(ReloadSystemMetrics) (ID2D1Factory * This);
	STDMETHOD_(void, GetDesktopDpi) (ID2D1Factory * This, FLOAT * dpiX, FLOAT * dpiY);
	STDMETHOD(CreateRectangleGeometry) (ID2D1Factory * This, CONST D2D1_RECT_F * rectangle, ID2D1RectangleGeometry ** rectangleGeometry);
	STDMETHOD(CreateRoundedRectangleGeometry) (ID2D1Factory * This, CONST D2D1_ROUNDED_RECT * roundedRectangle, ID2D1RoundedRectangleGeometry ** roundedRectangleGeometry);
	STDMETHOD(CreateEllipseGeometry) (ID2D1Factory * This, CONST D2D1_ELLIPSE * ellipse, ID2D1EllipseGeometry ** ellipseGeometry);
	STDMETHOD(CreateGeometryGroup) (ID2D1Factory * This, D2D1_FILL_MODE fillMode, ID2D1Geometry ** geometries, UINT geometriesCount, ID2D1GeometryGroup ** geometryGroup);
	STDMETHOD(CreateTransformedGeometry) (ID2D1Factory * This, ID2D1Geometry * sourceGeometry, CONST D2D1_MATRIX_3X2_F * transform, ID2D1TransformedGeometry ** transformedGeometry);
	STDMETHOD(CreatePathGeometry) (ID2D1Factory * This, ID2D1PathGeometry ** pathGeometry);
	STDMETHOD(CreateStrokeStyle) (ID2D1Factory * This, CONST D2D1_STROKE_STYLE_PROPERTIES * strokeStyleProperties, CONST FLOAT * dashes, UINT dashesCount, ID2D1StrokeStyle ** strokeStyle);
	STDMETHOD(CreateDrawingStateBlock) (ID2D1Factory * This, CONST D2D1_DRAWING_STATE_DESCRIPTION * drawingStateDescription, IDWriteRenderingParams * textRenderingParams, ID2D1DrawingStateBlock ** drawingStateBlock);
	STDMETHOD(CreateWicBitmapRenderTarget) (ID2D1Factory * This, IWICBitmap * target, CONST D2D1_RENDER_TARGET_PROPERTIES * renderTargetProperties, ID2D1RenderTarget ** renderTarget);
	STDMETHOD(CreateHwndRenderTarget) (ID2D1Factory * This, CONST D2D1_RENDER_TARGET_PROPERTIES * renderTargetProperties, CONST D2D1_HWND_RENDER_TARGET_PROPERTIES * hwndRenderTargetProperties, ID2D1HwndRenderTarget ** hwndRenderTarget);
	STDMETHOD(CreateDxgiSurfaceRenderTarget) (ID2D1Factory * This, IDXGISurface * dxgiSurface, CONST D2D1_RENDER_TARGET_PROPERTIES * renderTargetProperties, ID2D1RenderTarget ** renderTarget);
	STDMETHOD(CreateDCRenderTarget) (ID2D1Factory * This, CONST D2D1_RENDER_TARGET_PROPERTIES * renderTargetProperties, ID2D1DCRenderTarget ** dcRenderTarget);
} ID2D1FactoryVtbl;
interface ID2D1Factory
{
	CONST struct ID2D1FactoryVtbl *lpVtbl;
};
#define ID2D1Factory_QueryInterface(This, riid, ppv) \
    ((This)->lpVtbl->Base.QueryInterface((IUnknown *)This, riid, ppv))
#define ID2D1Factory_AddRef(This) \
    ((This)->lpVtbl->Base.AddRef((IUnknown *)This))
#define ID2D1Factory_Release(This) \
    ((This)->lpVtbl->Base.Release((IUnknown *)This))
#define ID2D1Factory_ReloadSystemMetrics(This) \
    ((This)->lpVtbl->ReloadSystemMetrics(This))
#define ID2D1Factory_GetDesktopDpi(This, dpiX, dpiY) \
    ((This)->lpVtbl->GetDesktopDpi(This, dpiX, dpiY))
#define ID2D1Factory_CreateRectangleGeometry(This, rectangle, rectangleGeometry) \
    ((This)->lpVtbl->CreateRectangleGeometry(This, rectangle, rectangleGeometry))
#define ID2D1Factory_CreateRoundedRectangleGeometry(This, roundedRectangle, roundedRectangleGeometry) \
    ((This)->lpVtbl->CreateRoundedRectangleGeometry(This, roundedRectangle, roundedRectangleGeometry))
#define ID2D1Factory_CreateEllipseGeometry(This, ellipse, ellipseGeometry) \
    ((This)->lpVtbl->CreateEllipseGeometry(This, ellipse, ellipseGeometry))
#define ID2D1Factory_CreateGeometryGroup(This, fillMode, geometries, geometriesCount, geometryGroup) \
    ((This)->lpVtbl->CreateGeometryGroup(This, fillMode, geometries, geometriesCount, geometryGroup))
#define ID2D1Factory_CreateTransformedGeometry(This, sourceGeometry, transform, transformedGeometry) \
    ((This)->lpVtbl->CreateTransformedGeometry(This, sourceGeometry, transform, transformedGeometry))
#define ID2D1Factory_CreatePathGeometry(This, pathGeometry) \
    ((This)->lpVtbl->CreatePathGeometry(This, pathGeometry))
#define ID2D1Factory_CreateStrokeStyle(This, strokeStyleProperties, dashes, dashesCount, strokeStyle) \
    ((This)->lpVtbl->CreateStrokeStyle(This, strokeStyleProperties, dashes, dashesCount, strokeStyle))
#define ID2D1Factory_CreateDrawingStateBlock(This, drawingStateDescription, textRenderingParams, drawingStateBlock) \
    ((This)->lpVtbl->CreateDrawingStateBlock(This, drawingStateDescription, textRenderingParams, drawingStateBlock))
#define ID2D1Factory_CreateWicBitmapRenderTarget(This, target, renderTargetProperties, renderTarget) \
    ((This)->lpVtbl->CreateWicBitmapRenderTarget(This, target, renderTargetProperties, renderTarget))
#define ID2D1Factory_CreateHwndRenderTarget(This, renderTargetProperties, hwndRenderTargetProperties, hwndRenderTarget) \
    ((This)->lpVtbl->CreateHwndRenderTarget(This, renderTargetProperties, hwndRenderTargetProperties, hwndRenderTarget))
#define ID2D1Factory_CreateDxgiSurfaceRenderTarget(This, dxgiSurface, renderTargetProperties, renderTarget) \
    ((This)->lpVtbl->CreateDxgiSurfaceRenderTarget(This, dxgiSurface, renderTargetProperties, renderTarget))
#define ID2D1Factory_CreateDCRenderTarget(This, renderTargetProperties, dcRenderTarget) \
    ((This)->lpVtbl->CreateDCRenderTarget(This, renderTargetProperties, dcRenderTarget))
HRESULT WINAPI D2D1CreateFactory(D2D1_FACTORY_TYPE factoryType, REFIID riid, CONST D2D1_FACTORY_OPTIONS *pFactoryOptions, void **ppIFactory);
void WINAPI D2D1MakeRotateMatrix(FLOAT angle, D2D1_POINT_2F center, D2D1_MATRIX_3X2_F *matrix);
void WINAPI D2D1MakeSkewMatrix(FLOAT angleX, FLOAT angleY, D2D1_POINT_2F center, D2D1_MATRIX_3X2_F *matrix);
BOOL WINAPI D2D1IsMatrixInvertible(CONST D2D1_MATRIX_3X2_F *matrix);
BOOL WINAPI D2D1InvertMatrix(D2D1_MATRIX_3X2_F *matrix);
#ifndef D2D1FORCEINLINE
#define D2D1FORCEINLINE FORCEINLINE
#endif
#include <d2d1helper.h>
#endif
