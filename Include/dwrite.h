/*+@@file@@----------------------------------------------------------------*//*!
 \file		dwrite.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 20 13:47:45 2016
 \date		Modified on Mon Jun 20 13:47:45 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef DWRITE_H_INCLUDED
#define DWRITE_H_INCLUDED
#if (__POCC__ >= 500)
#pragma once
#endif
#ifndef DWRITE_NO_WINDOWS_H
#include <unknwn.h>
#endif
#include <dcommon.h>
#ifndef DWRITE_DECLARE_INTERFACE
#define DWRITE_DECLARE_INTERFACE(iid) DECLSPEC_UUID(iid) DECLSPEC_NOVTABLE
#endif
#ifndef DWRITE_EXPORT
#define DWRITE_EXPORT __declspec(dllimport) WINAPI
#endif
typedef enum
{
    DWRITE_FONT_FILE_TYPE_UNKNOWN,
    DWRITE_FONT_FILE_TYPE_CFF,
    DWRITE_FONT_FILE_TYPE_TRUETYPE,
    DWRITE_FONT_FILE_TYPE_TRUETYPE_COLLECTION,
    DWRITE_FONT_FILE_TYPE_TYPE1_PFM,
    DWRITE_FONT_FILE_TYPE_TYPE1_PFB,
    DWRITE_FONT_FILE_TYPE_VECTOR,
    DWRITE_FONT_FILE_TYPE_BITMAP
} DWRITE_FONT_FILE_TYPE;
typedef enum
{
    DWRITE_FONT_FACE_TYPE_CFF,
    DWRITE_FONT_FACE_TYPE_TRUETYPE,
    DWRITE_FONT_FACE_TYPE_TRUETYPE_COLLECTION,
    DWRITE_FONT_FACE_TYPE_TYPE1,
    DWRITE_FONT_FACE_TYPE_VECTOR,
    DWRITE_FONT_FACE_TYPE_BITMAP,
    DWRITE_FONT_FACE_TYPE_UNKNOWN
} DWRITE_FONT_FACE_TYPE;
typedef enum
{
    DWRITE_FONT_SIMULATIONS_NONE    = 0x0000,
    DWRITE_FONT_SIMULATIONS_BOLD    = 0x0001,
    DWRITE_FONT_SIMULATIONS_OBLIQUE = 0x0002
} DWRITE_FONT_SIMULATIONS;
#ifdef DEFINE_ENUM_FLAG_OPERATORS
DEFINE_ENUM_FLAG_OPERATORS(DWRITE_FONT_SIMULATIONS);
#endif
typedef enum
{
    DWRITE_FONT_WEIGHT_THIN = 100,
    DWRITE_FONT_WEIGHT_EXTRA_LIGHT = 200,
    DWRITE_FONT_WEIGHT_ULTRA_LIGHT = 200,
    DWRITE_FONT_WEIGHT_LIGHT = 300,
    DWRITE_FONT_WEIGHT_NORMAL = 400,
    DWRITE_FONT_WEIGHT_REGULAR = 400,
    DWRITE_FONT_WEIGHT_MEDIUM = 500,
    DWRITE_FONT_WEIGHT_DEMI_BOLD = 600,
    DWRITE_FONT_WEIGHT_SEMI_BOLD = 600,
    DWRITE_FONT_WEIGHT_BOLD = 700,
    DWRITE_FONT_WEIGHT_EXTRA_BOLD = 800,
    DWRITE_FONT_WEIGHT_ULTRA_BOLD = 800,
    DWRITE_FONT_WEIGHT_BLACK = 900,
    DWRITE_FONT_WEIGHT_HEAVY = 900,
    DWRITE_FONT_WEIGHT_EXTRA_BLACK = 950,
    DWRITE_FONT_WEIGHT_ULTRA_BLACK = 950
} DWRITE_FONT_WEIGHT;
typedef enum
{
    DWRITE_FONT_STRETCH_UNDEFINED = 0,
    DWRITE_FONT_STRETCH_ULTRA_CONDENSED = 1,
    DWRITE_FONT_STRETCH_EXTRA_CONDENSED = 2,
    DWRITE_FONT_STRETCH_CONDENSED = 3,
    DWRITE_FONT_STRETCH_SEMI_CONDENSED = 4,
    DWRITE_FONT_STRETCH_NORMAL = 5,
    DWRITE_FONT_STRETCH_MEDIUM = 5,
    DWRITE_FONT_STRETCH_SEMI_EXPANDED = 6,
    DWRITE_FONT_STRETCH_EXPANDED = 7,
    DWRITE_FONT_STRETCH_EXTRA_EXPANDED = 8,
    DWRITE_FONT_STRETCH_ULTRA_EXPANDED = 9
} DWRITE_FONT_STRETCH;
typedef enum
{
    DWRITE_FONT_STYLE_NORMAL,
    DWRITE_FONT_STYLE_OBLIQUE,
    DWRITE_FONT_STYLE_ITALIC
} DWRITE_FONT_STYLE;
typedef enum
{
    DWRITE_INFORMATIONAL_STRING_NONE,
    DWRITE_INFORMATIONAL_STRING_COPYRIGHT_NOTICE,
    DWRITE_INFORMATIONAL_STRING_VERSION_STRINGS,
    DWRITE_INFORMATIONAL_STRING_TRADEMARK,
    DWRITE_INFORMATIONAL_STRING_MANUFACTURER,
    DWRITE_INFORMATIONAL_STRING_DESIGNER,
    DWRITE_INFORMATIONAL_STRING_DESIGNER_URL,
    DWRITE_INFORMATIONAL_STRING_DESCRIPTION,
    DWRITE_INFORMATIONAL_STRING_FONT_VENDOR_URL,
    DWRITE_INFORMATIONAL_STRING_LICENSE_DESCRIPTION,
    DWRITE_INFORMATIONAL_STRING_LICENSE_INFO_URL,
    DWRITE_INFORMATIONAL_STRING_WIN32_FAMILY_NAMES,
    DWRITE_INFORMATIONAL_STRING_WIN32_SUBFAMILY_NAMES,
    DWRITE_INFORMATIONAL_STRING_PREFERRED_FAMILY_NAMES,
    DWRITE_INFORMATIONAL_STRING_PREFERRED_SUBFAMILY_NAMES,
    DWRITE_INFORMATIONAL_STRING_SAMPLE_TEXT
} DWRITE_INFORMATIONAL_STRING_ID;
typedef struct
{
    UINT16 designUnitsPerEm;
    UINT16 ascent;
    UINT16 descent;
    INT16 lineGap;
    UINT16 capHeight;
    UINT16 xHeight;
    INT16 underlinePosition;
    UINT16 underlineThickness;
    INT16 strikethroughPosition;
    UINT16 strikethroughThickness;
} DWRITE_FONT_METRICS;
typedef struct
{
    INT32 leftSideBearing;
    UINT32 advanceWidth;
    INT32 rightSideBearing;
    INT32 topSideBearing;
    UINT32 advanceHeight;
    INT32 bottomSideBearing;
    INT32 verticalOriginY;
} DWRITE_GLYPH_METRICS;
typedef struct
{
    FLOAT advanceOffset;
    FLOAT ascenderOffset;
} DWRITE_GLYPH_OFFSET;
typedef enum
{
    DWRITE_FACTORY_TYPE_SHARED,
    DWRITE_FACTORY_TYPE_ISOLATED
} DWRITE_FACTORY_TYPE;
#define DWRITE_MAKE_OPENTYPE_TAG(a,b,c,d) ( \
    (static_cast<UINT32>(static_cast<UINT8>(d)) << 24) | \
    (static_cast<UINT32>(static_cast<UINT8>(c)) << 16) | \
    (static_cast<UINT32>(static_cast<UINT8>(b)) << 8)  | \
     static_cast<UINT32>(static_cast<UINT8>(a)))
#ifndef __IWMWriter_INTERFACE_FWD_DEFINED__
#define __IWMWriter_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteFontFileStream IDWriteFontFileStream;
#endif
#ifndef __IDWriteFontFileLoader_INTERFACE_FWD_DEFINED__
#define __IDWriteFontFileLoader_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteFontFileLoader IDWriteFontFileLoader;
#endif
#ifndef __IDWriteLocalFontFileLoader_INTERFACE_FWD_DEFINED__
#define __IDWriteLocalFontFileLoader_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteLocalFontFileLoader IDWriteLocalFontFileLoader;
#endif
#ifndef __IDWriteFontFile_INTERFACE_FWD_DEFINED__
#define __IDWriteFontFile_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteFontFile IDWriteFontFile;
#endif
#ifndef __IDWriteRenderingParams_INTERFACE_FWD_DEFINED__
#define __IDWriteRenderingParams_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteRenderingParams IDWriteRenderingParams;
#endif
#ifndef __ID2D1SimplifiedGeometrySink_INTERFACE_FWD_DEFINED__
#define __ID2D1SimplifiedGeometrySink_INTERFACE_FWD_DEFINED__ 
typedef interface ID2D1SimplifiedGeometrySink ID2D1SimplifiedGeometrySink;
#endif
#ifndef __IDWriteFontFace_INTERFACE_FWD_DEFINED__
#define __IDWriteFontFace_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteFontFace IDWriteFontFace;
#endif
#ifndef __IDWriteFactory_INTERFACE_FWD_DEFINED__
#define __IDWriteFactory_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteFactory IDWriteFactory;
#endif
#ifndef __IDWriteFontFileEnumerator_INTERFACE_FWD_DEFINED__
#define __IDWriteFontFileEnumerator_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteFontFileEnumerator IDWriteFontFileEnumerator;
#endif
#ifndef __IDWriteGeometrySink_INTERFACE_FWD_DEFINED__
#define __IDWriteGeometrySink_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteGeometrySink IDWriteGeometrySink;
#endif
#ifndef __IDWriteFontCollectionLoader_INTERFACE_FWD_DEFINED__
#define __IDWriteFontCollectionLoader_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteFontCollectionLoader IDWriteFontCollectionLoader;
#endif
#ifndef __IDWriteLocalizedStrings_INTERFACE_FWD_DEFINED__
#define __IDWriteLocalizedStrings_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteLocalizedStrings IDWriteLocalizedStrings;
#endif
#ifndef __IDWriteFontCollection_INTERFACE_FWD_DEFINED__
#define __IDWriteFontCollection_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteFontCollection IDWriteFontCollection;
#endif
#ifndef __IDWriteFontFamily_INTERFACE_FWD_DEFINED__
#define __IDWriteFontFamily_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteFontFamily IDWriteFontFamily;
#endif
#ifndef __IDWriteFont_INTERFACE_FWD_DEFINED__
#define __IDWriteFont_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteFont IDWriteFont;
#endif
#ifndef __IDWriteFontList_INTERFACE_FWD_DEFINED__
#define __IDWriteFontList_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteFontList IDWriteFontList;
#endif
#ifndef __IDWriteTextFormat_INTERFACE_FWD_DEFINED__
#define __IDWriteTextFormat_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteTextFormat IDWriteTextFormat;
#endif
#ifndef __IDWriteTypography_INTERFACE_FWD_DEFINED__
#define __IDWriteTypography_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteTypography IDWriteTypography;
#endif
#ifndef __IDWriteInlineObject_INTERFACE_FWD_DEFINED__
#define __IDWriteInlineObject_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteInlineObject IDWriteInlineObject;
#endif
#ifndef __IDWriteNumberSubstitution_INTERFACE_FWD_DEFINED__
#define __IDWriteNumberSubstitution_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteNumberSubstitution IDWriteNumberSubstitution;
#endif
#ifndef __IDWriteTextAnalysisSource_INTERFACE_FWD_DEFINED__
#define __IDWriteTextAnalysisSource_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteTextAnalysisSource IDWriteTextAnalysisSource;
#endif
#ifndef __IDWriteTextAnalysisSink_INTERFACE_FWD_DEFINED__
#define __IDWriteTextAnalysisSink_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteTextAnalysisSink IDWriteTextAnalysisSink;
#endif
#ifndef __IDWriteTextAnalyzer_INTERFACE_FWD_DEFINED__
#define __IDWriteTextAnalyzer_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteTextAnalyzer IDWriteTextAnalyzer;
#endif
#ifndef __IDWriteTextRenderer_INTERFACE_FWD_DEFINED__
#define __IDWriteTextRenderer_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteTextRenderer IDWriteTextRenderer;
#endif
#ifndef __IDWritePixelSnapping_INTERFACE_FWD_DEFINED__
#define __IDWritePixelSnapping_INTERFACE_FWD_DEFINED__ 
typedef interface IDWritePixelSnapping IDWritePixelSnapping;
#endif
#ifndef __IDWriteTextLayout_INTERFACE_FWD_DEFINED__
#define __IDWriteTextLayout_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteTextLayout IDWriteTextLayout;
#endif
#ifndef __IDWriteBitmapRenderTarget_INTERFACE_FWD_DEFINED__
#define __IDWriteBitmapRenderTarget_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteBitmapRenderTarget IDWriteBitmapRenderTarget;
#endif
#ifndef __IDWriteGdiInterop_INTERFACE_FWD_DEFINED__
#define __IDWriteGdiInterop_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteGdiInterop IDWriteGdiInterop;
#endif
#ifndef __IDWriteGlyphRunAnalysis_INTERFACE_FWD_DEFINED__
#define __IDWriteGlyphRunAnalysis_INTERFACE_FWD_DEFINED__ 
typedef interface IDWriteGlyphRunAnalysis IDWriteGlyphRunAnalysis;
#endif

#ifndef __IDWriteFontFileLoader_INTERFACE_DEFINED__
#define __IDWriteFontFileLoader_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteFontFileLoader;
typedef struct IDWriteFontFileLoaderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteFontFileLoader * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteFontFileLoader * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteFontFileLoader * This);
	STDMETHOD(CreateStreamFromKey) (IDWriteFontFileLoader * This, void const *fontFileReferenceKey, UINT32 fontFileReferenceKeySize, IDWriteFontFileStream ** fontFileStream);
	END_INTERFACE
} IDWriteFontFileLoaderVtbl;
interface IDWriteFontFileLoader
{
    CONST_VTBL struct IDWriteFontFileLoaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDWriteFontFileLoader_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
#define IDWriteFontFileLoader_AddRef(This)    ( (This)->lpVtbl->AddRef(This) ) 
#define IDWriteFontFileLoader_Release(This)   ( (This)->lpVtbl->Release(This) ) 
#define IDWriteFontFileLoader_CreateStreamFromKey(This, a, b, c) ( (This)->lpVtbl->CreateStreamFromKey(This, a, b, c) ) 
#endif
#endif
#ifndef __IDWriteLocalFontFileLoader_INTERFACE_DEFINED__
#define __IDWriteLocalFontFileLoader_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteLocalFontFileLoader;
typedef struct IDWriteLocalFontFileLoaderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteLocalFontFileLoader * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteLocalFontFileLoader * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteLocalFontFileLoader * This);
	STDMETHOD(CreateStreamFromKey) (IDWriteLocalFontFileLoader * This, void const *fontFileReferenceKey, UINT32 fontFileReferenceKeySize, IDWriteFontFileStream ** fontFileStream);
	STDMETHOD(GetFilePathLengthFromKey) (IDWriteLocalFontFileLoader * This, void const *fontFileReferenceKey, UINT32 fontFileReferenceKeySize, UINT32 * filePathLength);
	STDMETHOD(GetFilePathFromKey) (IDWriteLocalFontFileLoader * This, void const *fontFileReferenceKey, UINT32 fontFileReferenceKeySize, WCHAR * filePath, UINT32 filePathSize);
	STDMETHOD(GetLastWriteTimeFromKey) (IDWriteLocalFontFileLoader * This, void const *fontFileReferenceKey, UINT32 fontFileReferenceKeySize, FILETIME * lastWriteTime);
	END_INTERFACE
} IDWriteLocalFontFileLoaderVtbl;
interface IDWriteLocalFontFileLoader
{
    CONST_VTBL struct IDWriteLocalFontFileLoaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDWriteLocalFontFileLoader_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl ->QueryInterface(This,riid,ppvObject) )
#define IDWriteLocalFontFileLoader_AddRef(This)    ( (This)->lpVtbl->AddRef(This) ) 
#define IDWriteLocalFontFileLoader_Release(This)   ( (This)->lpVtbl->Release(This) ) 
#define IDWriteLocalFontFileLoader_CreateStreamFromKey(This, a, b, c) ( (This)->lpVtbl->CreateStreamFromKey(This, a, b, c) )
#define IDWriteLocalFontFileLoader_GetFilePathLengthFromKey(This, a, b, c) ( (This)->lpVtbl->GetFilePathLengthFromKey(This, a, b, c) )
#define IDWriteLocalFontFileLoader_GetFilePathFromKey(This, a, b, c) ( (This)->lpVtbl->GetFilePathFromKey(This, a, b, c) )
#define IDWriteLocalFontFileLoader_GetLastWriteTimeFromKey(This, a, b, c) ( (This)->lpVtbl->GetLastWriteTimeFromKey(This, a, b, c) )
#endif
#endif
#ifndef __IDWriteFontFileStream_INTERFACE_DEFINED__
#define __IDWriteFontFileStream_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteFontFileStream;
typedef struct IDWriteFontFileStreamVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteFontFileStream * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteFontFileStream * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteFontFileStream * This);
	STDMETHOD(ReadFileFragment) (IDWriteFontFileStream * This, void const **fragmentStart, UINT64 fileOffset, UINT64 fragmentSize, void **fragmentContext);
	STDMETHOD_(void, ReleaseFileFragment) (IDWriteFontFileStream * This, void *fragmentContext);
	STDMETHOD(GetFileSize) (IDWriteFontFileStream * This, UINT64 * fileSize);
	STDMETHOD(GetLastWriteTime) (IDWriteFontFileStream * This, UINT64 * lastWriteTime);
	END_INTERFACE
} IDWriteFontFileStreamVtbl;
interface IDWriteFontFileStream
{
    CONST_VTBL struct IDWriteFontFileStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDWriteFontFileStream_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
#define IDWriteFontFileStream_AddRef(This)    ( (This)->lpVtbl->AddRef(This) ) 
#define IDWriteFontFileStream_Release(This)   ( (This)->lpVtbl->Release(This) ) 
#define IDWriteFontFileStream_ReadFileFragment(This, a, b, c, d) ( (This)->lpVtbl->ReadFileFragment(This, a) ) 
#define IDWriteFontFileStream_ReleaseFileFragment(This, a) ( (This)->lpVtbl->ReadFileFragment(This, a, b, c, d) ) 
#define IDWriteFontFileStream_GetFileSize(This, a) ( (This)->lpVtbl->GetFileSize(This, a) ) 
#define IDWriteFontFileStream_GetLastWriteTime(This, a) ( (This)->lpVtbl->GetLastWriteTime(This, a) ) 
#endif
#endif
#ifndef __IDWriteFontFile_INTERFACE_DEFINED__
#define __IDWriteFontFile_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteFontFile;
typedef struct IDWriteFontFileVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteFontFile * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteFontFile * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteFontFile * This);
	STDMETHOD(GetReferenceKey) (IDWriteFontFile * This, void const **fontFileReferenceKey, UINT32 * fontFileReferenceKeySize);
	STDMETHOD(GetLoader) (IDWriteFontFile * This, IDWriteFontFileLoader ** fontFileLoader);
	STDMETHOD(Analyze) (IDWriteFontFile * This, BOOL * isSupportedFontType, DWRITE_FONT_FILE_TYPE * fontFileType, DWRITE_FONT_FACE_TYPE * fontFaceType, UINT32 * numberOfFaces);
	END_INTERFACE
} IDWriteFontFileVtbl;
interface IDWriteFontFile
{
    CONST_VTBL struct IDWriteFontFileVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDWriteFontFile_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
#define IDWriteFontFile_AddRef(This)    ( (This)->lpVtbl->AddRef(This) ) 
#define IDWriteFontFile_Release(This)   ( (This)->lpVtbl->Release(This) ) 
#define IDWriteFontFile_GetReferenceKey(This, a, b)   ( (This)->lpVtbl->GetReferenceKey(This, a, b) ) 
#define IDWriteFontFile_GetLoader(This, a)   ( (This)->lpVtbl->GetLoader(This, a) ) 
#define IDWriteFontFile_Analyze(This, a, b, c, d)   ( (This)->lpVtbl->Analyze(This, a, b, c, d) ) 
#endif
#endif
#ifndef DWRITE_PIXEL_GEOMETRY_DEFINED
typedef enum
{
    DWRITE_PIXEL_GEOMETRY_FLAT,
    DWRITE_PIXEL_GEOMETRY_RGB,
    DWRITE_PIXEL_GEOMETRY_BGR
} DWRITE_PIXEL_GEOMETRY;
#define DWRITE_PIXEL_GEOMETRY_DEFINED
#endif
typedef enum
{
    DWRITE_RENDERING_MODE_DEFAULT,
    DWRITE_RENDERING_MODE_ALIASED,
    DWRITE_RENDERING_MODE_CLEARTYPE_GDI_CLASSIC,
    DWRITE_RENDERING_MODE_CLEARTYPE_GDI_NATURAL,
    DWRITE_RENDERING_MODE_CLEARTYPE_NATURAL,
    DWRITE_RENDERING_MODE_CLEARTYPE_NATURAL_SYMMETRIC,
    DWRITE_RENDERING_MODE_OUTLINE
} DWRITE_RENDERING_MODE;
typedef struct
{
    FLOAT m11;
    FLOAT m12;
    FLOAT m21;
    FLOAT m22;
    FLOAT dx;
    FLOAT dy;
} DWRITE_MATRIX;
#ifndef __IDWriteRenderingParams_INTERFACE_DEFINED__
#define __IDWriteRenderingParams_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteRenderingParams;
typedef struct IDWriteRenderingParamsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteRenderingParams * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteRenderingParams * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteRenderingParams * This);
	STDMETHOD_(FLOAT, GetGamma) (IDWriteRenderingParams * This);
	STDMETHOD_(FLOAT, GetEnhancedContrast) (IDWriteRenderingParams * This);
	STDMETHOD_(FLOAT, GetClearTypeLevel) (IDWriteRenderingParams * This);
	STDMETHOD_(DWRITE_PIXEL_GEOMETRY, GetPixelGeometry) (IDWriteRenderingParams * This);
	STDMETHOD_(DWRITE_RENDERING_MODE, GetRenderingMode) (IDWriteRenderingParams * This);
	END_INTERFACE
} IDWriteRenderingParamsVtbl;
interface IDWriteRenderingParams
{
    CONST_VTBL struct IDWriteRenderingParamsVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteRenderingParams_QueryInterface(This, riid, ppvObject) ( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) );
	#define IDWriteRenderingParams_AddRef(This) ( ((This)->lpVtbl->AddRef)(This) );
	#define IDWriteRenderingParams_Release(This) ( ((This)->lpVtbl->Release)(This) );
	#define IDWriteRenderingParams_GetGamma(This) ( ((This)->lpVtbl->GetGamma)(This) );
	#define IDWriteRenderingParams_GetEnhancedContrast(This) ( ((This)->lpVtbl->GetEnhancedContrast)(This) );
	#define IDWriteRenderingParams_GetClearTypeLevel(This) ( ((This)->lpVtbl->GetClearTypeLevel)(This) );
	#define IDWriteRenderingParams_GetPixelGeometry(This) ( ((This)->lpVtbl->GetPixelGeometry)(This) );
	#define IDWriteRenderingParams_GetRenderingMode(This) ( ((This)->lpVtbl->GetRenderingMode)(This) );
#endif
#endif
#ifndef __IDWriteFontFace_INTERFACE_DEFINED__
#define __IDWriteFontFace_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteFontFace;
typedef struct IDWriteFontFaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteFontFace * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteFontFace * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteFontFace * This);
	STDMETHOD_(DWRITE_FONT_FACE_TYPE, GetType) (IDWriteFontFace * This);
	STDMETHOD(GetFiles) (IDWriteFontFace * This, UINT32 * numberOfFiles, IDWriteFontFile ** fontFiles);
	STDMETHOD_(UINT32, GetIndex) (IDWriteFontFace * This);
	STDMETHOD_(DWRITE_FONT_SIMULATIONS, GetSimulations) (IDWriteFontFace * This);
	STDMETHOD_(BOOL, IsSymbolFont) (IDWriteFontFace * This);
	STDMETHOD_(void, GetMetrics) (IDWriteFontFace * This, DWRITE_FONT_METRICS *fontFaceMetrics);
	STDMETHOD_(UINT16, GetGlyphCount) (IDWriteFontFace * This);
	STDMETHOD(GetDesignGlyphMetrics) (IDWriteFontFace * This, UINT16 const *glyphIndices, UINT32 glyphCount, DWRITE_GLYPH_METRICS * glyphMetrics, BOOL isSideways);
	STDMETHOD(GetGlyphIndices) (IDWriteFontFace * This, UINT32 const *codePoints, UINT32 codePointCount, UINT16 * glyphIndices);
	STDMETHOD(TryGetFontTable) (IDWriteFontFace * This, UINT32 openTypeTableTag, const void **tableData, UINT32 * tableSize, void **tableContext, BOOL * exists);
	STDMETHOD_(void, ReleaseFontTable) (IDWriteFontFace * This, void *tableContext);
	STDMETHOD(GetGlyphRunOutline) (IDWriteFontFace * This, FLOAT emSize, UINT16 const *glyphIndices, FLOAT const *glyphAdvances, DWRITE_GLYPH_OFFSET const *glyphOffsets, UINT32 glyphCount, BOOL isSideways, BOOL isRightToLeft, IDWriteGeometrySink * geometrySink);
	STDMETHOD(GetRecommendedRenderingMode) (IDWriteFontFace * This, FLOAT emSize, FLOAT pixelsPerDip, DWRITE_MEASURING_MODE measuringMode, IDWriteRenderingParams * renderingParams, DWRITE_RENDERING_MODE * renderingMode);
	STDMETHOD(GetGdiCompatibleMetrics) (IDWriteFontFace * This, FLOAT emSize, FLOAT pixelsPerDip, DWRITE_MATRIX const *transform, DWRITE_FONT_METRICS * fontFaceMetrics);
	STDMETHOD(GetGdiCompatibleGlyphMetrics) (IDWriteFontFace * This, FLOAT emSize, FLOAT pixelsPerDip, DWRITE_MATRIX const *transform, BOOL useGdiNatural, UINT16 const *glyphIndices, UINT32 glyphCount, DWRITE_GLYPH_METRICS * glyphMetrics, BOOL isSideways);
	END_INTERFACE
} IDWriteFontFaceVtbl;
interface IDWriteFontFace
{
    CONST_VTBL struct IDWriteFontFaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteFontFace_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteFontFace_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteFontFace_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteFontFace_GetType(This)	( ((This)->lpVtbl->GetType)(This) )
	#define IDWriteFontFace_GetFiles(This, numberOfFiles, fontFiles)	( ((This)->lpVtbl->GetFiles)(This, numberOfFiles, fontFiles) )
	#define IDWriteFontFace_GetIndex(This)	( ((This)->lpVtbl->GetIndex)(This) )
	#define IDWriteFontFace_GetSimulations(This)	( ((This)->lpVtbl->GetSimulations)(This) )
	#define IDWriteFontFace_IsSymbolFont(This)	( ((This)->lpVtbl->IsSymbolFont)(This) )
	#define IDWriteFontFace_GetMetrics(This, fontFaceMetrics)	( ((This)->lpVtbl->GetMetrics)(This, fontFaceMetrics) )
	#define IDWriteFontFace_GetGlyphCount(This)	( ((This)->lpVtbl->GetGlyphCount)(This) )
	#define IDWriteFontFace_GetDesignGlyphMetrics(This, glyphIndices, glyphCount, glyphMetrics, isSideways)	( ((This)->lpVtbl->GetDesignGlyphMetrics)(This, glyphIndices, glyphCount, glyphMetrics, isSideways) )
	#define IDWriteFontFace_GetGlyphIndices(This, codePoints, codePointCount, glyphIndices)	( ((This)->lpVtbl->GetGlyphIndices)(This, codePoints, codePointCount, glyphIndices) )
	#define IDWriteFontFace_TryGetFontTable(This, openTypeTableTag, tableData, tableSize, tableContext, exists)	( ((This)->lpVtbl->TryGetFontTable)(This, openTypeTableTag, tableData, tableSize, tableContext, exists) )
	#define IDWriteFontFace_ReleaseFontTable(This, tableContext)	( ((This)->lpVtbl->ReleaseFontTable)(This, tableContext) )
	#define IDWriteFontFace_GetGlyphRunOutline(This, emSize, glyphIndices, glyphAdvances, glyphOffsets, glyphCount, isSideways, isRightToLeft, geometrySink)	( ((This)->lpVtbl->GetGlyphRunOutline)(This, emSize, glyphIndices, glyphAdvances, glyphOffsets, glyphCount, isSideways, isRightToLeft, geometrySink) )
	#define IDWriteFontFace_GetRecommendedRenderingMode(This, emSize, pixelsPerDip, measuringMode, renderingParams, renderingMode)	( ((This)->lpVtbl->GetRecommendedRenderingMode)(This, emSize, pixelsPerDip, measuringMode, renderingParams, renderingMode) )
	#define IDWriteFontFace_GetGdiCompatibleMetrics(This, emSize, pixelsPerDip, transform, fontFaceMetrics)	( ((This)->lpVtbl->GetGdiCompatibleMetrics)(This, emSize, pixelsPerDip, transform, fontFaceMetrics) )
	#define IDWriteFontFace_GetGdiCompatibleGlyphMetrics(This, emSize, pixelsPerDip, transform, useGdiNatural, glyphIndices, glyphCount, glyphMetrics, isSideways)	( ((This)->lpVtbl->GetGdiCompatibleGlyphMetrics)(This, emSize, pixelsPerDip, transform, useGdiNatural, glyphIndices, glyphCount, glyphMetrics, isSideways) )
#endif
#endif
#ifndef __IDWriteFontCollectionLoader_INTERFACE_DEFINED__
#define __IDWriteFontCollectionLoader_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteFontCollectionLoader;
typedef struct IDWriteFontCollectionLoaderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteFontCollectionLoader * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteFontCollectionLoader * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteFontCollectionLoader * This);
	STDMETHOD(CreateEnumeratorFromKey) (IDWriteFontCollectionLoader * This, IDWriteFactory * factory, void const *collectionKey, UINT32 collectionKeySize, IDWriteFontFileEnumerator ** fontFileEnumerator);
	END_INTERFACE
} IDWriteFontCollectionLoaderVtbl;
interface IDWriteFontCollectionLoader
{
    CONST_VTBL struct IDWriteFontCollectionLoaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteFontCollectionLoader_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteFontCollectionLoader_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteFontCollectionLoader_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteFontCollectionLoader_CreateEnumeratorFromKey(This, factory, collectionKey, collectionKeySize, fontFileEnumerator)	( ((This)->lpVtbl->CreateEnumeratorFromKey)(This, factory, collectionKey, collectionKeySize, fontFileEnumerator) )
#endif
#endif
#ifndef __IDWriteFontCollectionLoader_INTERFACE_DEFINED__
#define __IDWriteFontCollectionLoader_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteFontFileEnumerator;
typedef struct IDWriteFontFileEnumeratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteFontFileEnumerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteFontFileEnumerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteFontFileEnumerator * This);
	STDMETHOD(MoveNext) (IDWriteFontFileEnumerator * This, BOOL * hasCurrentFile);
	STDMETHOD(GetCurrentFontFile) (IDWriteFontFileEnumerator * This, IDWriteFontFile ** fontFile);
	END_INTERFACE
} IDWriteFontFileEnumeratorVtbl;
interface IDWriteFontFileEnumerator
{
    CONST_VTBL struct IDWriteFontFileEnumeratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteFontFileEnumerator_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)( This, riid, ppvObject) )
	#define IDWriteFontFileEnumerator_AddRef(This)	( ((This)->lpVtbl->AddRef)( This) )
	#define IDWriteFontFileEnumerator_Release(This)	( ((This)->lpVtbl->Release)( This) )
	#define IDWriteFontFileEnumerator_MoveNext(This, hasCurrentFile)	( ((This)->lpVtbl->MoveNext)( This, hasCurrentFile) )
	#define IDWriteFontFileEnumerator_GetCurrentFontFile(This, fontFile)	( ((This)->lpVtbl->GetCurrentFontFile)( This, fontFile) )
#endif
#endif
#ifndef __IDWriteLocalizedStrings_INTERFACE_DEFINED__
#define __IDWriteLocalizedStrings_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteLocalizedStrings;
typedef struct IDWriteLocalizedStringsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteLocalizedStrings * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteLocalizedStrings * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteLocalizedStrings * This);
	STDMETHOD_(UINT32, GetCount) (IDWriteLocalizedStrings * This);
	STDMETHOD(FindLocaleName) (IDWriteLocalizedStrings * This,  WCHAR const *localeName, UINT32 * index, BOOL * exists);
	STDMETHOD(GetLocaleNameLength) (IDWriteLocalizedStrings * This, UINT32 index, UINT32 * length);
	STDMETHOD(GetLocaleName) (IDWriteLocalizedStrings * This, UINT32 index, WCHAR * localeName, UINT32 size);
	STDMETHOD(GetStringLength) (IDWriteLocalizedStrings * This, UINT32 index, UINT32 * length);
	STDMETHOD(GetString) (IDWriteLocalizedStrings * This, UINT32 index, WCHAR * stringBuffer, UINT32 size);
	END_INTERFACE
} IDWriteLocalizedStringsVtbl;
interface IDWriteLocalizedStrings
{
    CONST_VTBL struct IDWriteLocalizedStringsVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteLocalizedStrings_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteLocalizedStrings_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteLocalizedStrings_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteLocalizedStrings_GetCount(This)	( ((This)->lpVtbl->GetCount)(This) )
	#define IDWriteLocalizedStrings_FindLocaleName(This,  localeName, index, exists)	( ((This)->lpVtbl->FindLocaleName)(This,  localeName, index, exists) )
	#define IDWriteLocalizedStrings_GetLocaleNameLength(This, index, length)	( ((This)->lpVtbl->GetLocaleNameLength)(This, index, length) )
	#define IDWriteLocalizedStrings_GetLocaleName(This, index, localeName, size)	( ((This)->lpVtbl->GetLocaleName)(This, index, localeName, size) )
	#define IDWriteLocalizedStrings_GetStringLength(This, index, length)	( ((This)->lpVtbl->GetStringLength)(This, index, length) )
	#define IDWriteLocalizedStrings_GetString(This, index, stringBuffer, size)	( ((This)->lpVtbl->GetString)(This, index, stringBuffer, size) )
#endif
#endif
#ifndef __IDWriteFontCollection_INTERFACE_DEFINED__
#define __IDWriteFontCollection_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteFontCollection;
typedef struct IDWriteFontCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteFontCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteFontCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteFontCollection * This);
	STDMETHOD_(UINT32, GetFontFamilyCount) (IDWriteFontCollection * This);
	STDMETHOD(GetFontFamily) (IDWriteFontCollection * This, UINT32 index, IDWriteFontFamily ** fontFamily);
	STDMETHOD(FindFamilyName) (IDWriteFontCollection * This, WCHAR const *familyName, UINT32 * index, BOOL * exists);
	STDMETHOD(GetFontFromFontFace) (IDWriteFontCollection * This, IDWriteFontFace * fontFace, IDWriteFont ** font);
	END_INTERFACE
} IDWriteFontCollectionVtbl;
interface IDWriteFontCollection
{
    CONST_VTBL struct IDWriteFontCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteFontCollection_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteFontCollection_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteFontCollection_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteFontCollection_GetFontFamilyCount(This)	( ((This)->lpVtbl->GetFontFamilyCount)(This) )
	#define IDWriteFontCollection_GetFontFamily(This, index, fontFamily)	( ((This)->lpVtbl->GetFontFamily)(This, index, fontFamily) )
	#define IDWriteFontCollection_FindFamilyName(This, familyName, index, exists)	( ((This)->lpVtbl->FindFamilyName)(This, familyName, index, exists) )
	#define IDWriteFontCollection_GetFontFromFontFace(This, fontFace, font)	( ((This)->lpVtbl->GetFontFromFontFace)(This, fontFace, font) )
#endif
#endif
#ifndef __IDWriteFontList_INTERFACE_DEFINED__
#define __IDWriteFontList_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteFontList;
typedef struct IDWriteFontListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteFontList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteFontList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteFontList * This);
	STDMETHOD(GetFontCollection) (IDWriteFontList * This, IDWriteFontCollection ** fontCollection);
	STDMETHOD_(UINT32, GetFontCount) (IDWriteFontList * This);
	STDMETHOD(GetFont) (IDWriteFontList * This, UINT32 index, IDWriteFont ** font);
	END_INTERFACE
} IDWriteFontListVtbl;
interface IDWriteFontList
{
    CONST_VTBL struct IDWriteFontListVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteFontList_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteFontList_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteFontList_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteFontList_GetFontCollection(This, fontCollection)	( ((This)->lpVtbl->GetFontCollection)(This, fontCollection) )
	#define IDWriteFontList_GetFontCount(This)	( ((This)->lpVtbl->GetFontCount)(This) )
	#define IDWriteFontList_GetFont(This, index, font)	( ((This)->lpVtbl->GetFont)(This, index, font) )
#endif
#endif
#ifndef __IDWriteFontFamily_INTERFACE_DEFINED__
#define __IDWriteFontFamily_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteFontFamily;
typedef struct IDWriteFontFamilyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteFontFamily * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteFontFamily * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteFontFamily * This);
	STDMETHOD(GetFontCollection) (IDWriteFontFamily * This, IDWriteFontCollection ** fontCollection);
	STDMETHOD_(UINT32, GetFontCount) (IDWriteFontFamily * This);
	STDMETHOD(GetFont) (IDWriteFontFamily * This, UINT32 index, IDWriteFont ** font);
	STDMETHOD(GetFamilyNames) (IDWriteFontFamily * This, IDWriteLocalizedStrings ** names);
	STDMETHOD(GetFirstMatchingFont) (IDWriteFontFamily * This, DWRITE_FONT_WEIGHT weight, DWRITE_FONT_STRETCH stretch, DWRITE_FONT_STYLE style, IDWriteFont ** matchingFont);
	STDMETHOD(GetMatchingFonts) (IDWriteFontFamily * This, DWRITE_FONT_WEIGHT weight, DWRITE_FONT_STRETCH stretch, DWRITE_FONT_STYLE style, IDWriteFontList ** matchingFonts);
	END_INTERFACE
} IDWriteFontFamilyVtbl;
interface IDWriteFontFamily
{
    CONST_VTBL struct IDWriteFontFamilyVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteFontFamily_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteFontFamily_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteFontFamily_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteFontFamily_GetFontCollection(This, fontCollection)	( ((This)->lpVtbl->GetFontCollection)(This, fontCollection) )
	#define IDWriteFontFamily_GetFontCount(This)	( ((This)->lpVtbl->GetFontCount)(This) )
	#define IDWriteFontFamily_GetFont(This, index, font)	( ((This)->lpVtbl->GetFont)(This, index, font) )
	#define IDWriteFontFamily_GetFamilyNames(This, names)	( ((This)->lpVtbl->GetFamilyNames)(This, names) )
	#define IDWriteFontFamily_GetFirstMatchingFont(This, weight, stretch, style, matchingFont)	( ((This)->lpVtbl->GetFirstMatchingFont)(This, weight, stretch, style, matchingFont) )
	#define IDWriteFontFamily_GetMatchingFonts(This, weight, stretch, style, matchingFonts)	( ((This)->lpVtbl->GetMatchingFonts)(This, weight, stretch, style, matchingFonts) )
#endif
#endif
#ifndef __IDWriteFont_INTERFACE_DEFINED__
#define __IDWriteFont_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteFont;
typedef struct IDWriteFontVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteFont * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteFont * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteFont * This);
	STDMETHOD(GetFontFamily) (IDWriteFont * This, IDWriteFontFamily ** fontFamily);
	STDMETHOD_(DWRITE_FONT_WEIGHT, GetWeight) (IDWriteFont * This);
	STDMETHOD_(DWRITE_FONT_STRETCH, GetStretch) (IDWriteFont * This);
	STDMETHOD_(DWRITE_FONT_STYLE, GetStyle) (IDWriteFont * This);
	STDMETHOD_(BOOL, IsSymbolFont) (IDWriteFont * This);
	STDMETHOD(GetFaceNames) (IDWriteFont * This, IDWriteLocalizedStrings ** names);
	STDMETHOD(GetInformationalStrings) (IDWriteFont * This, DWRITE_INFORMATIONAL_STRING_ID informationalStringID, IDWriteLocalizedStrings ** informationalStrings, BOOL * exists);
	STDMETHOD_(DWRITE_FONT_SIMULATIONS, GetSimulations) (IDWriteFont * This);
	STDMETHOD_(void, GetMetrics) (IDWriteFont * This, DWRITE_FONT_METRICS *fontMetrics);
	STDMETHOD(HasCharacter) (IDWriteFont * This, UINT32 unicodeValue, BOOL * exists);
	STDMETHOD(CreateFontFace) (IDWriteFont * This, IDWriteFontFace ** fontFace);
	END_INTERFACE
} IDWriteFontVtbl;
interface IDWriteFont
{
    CONST_VTBL struct IDWriteFontVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteFont_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteFont_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteFont_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteFont_GetFontFamily(This, fontFamily)	( ((This)->lpVtbl->GetFontFamily)(This, fontFamily) )
	#define IDWriteFont_GetWeight(This)	( ((This)->lpVtbl->GetWeight)(This) )
	#define IDWriteFont_GetStretch(This)	( ((This)->lpVtbl->GetStretch)(This) )
	#define IDWriteFont_GetStyle(This)	( ((This)->lpVtbl->GetStyle)(This) )
	#define IDWriteFont_IsSymbolFont(This)	( ((This)->lpVtbl->IsSymbolFont)(This) )
	#define IDWriteFont_GetFaceNames(This, names)	( ((This)->lpVtbl->GetFaceNames)(This, names) )
	#define IDWriteFont_GetInformationalStrings(This, informationalStringID, informationalStrings, exists)	( ((This)->lpVtbl->GetInformationalStrings)(This, informationalStringID, informationalStrings, exists) )
	#define IDWriteFont_GetSimulations(This)	( ((This)->lpVtbl->GetSimulations)(This) )
	#define IDWriteFont_GetMetrics(This, fontMetrics)	( ((This)->lpVtbl->GetMetrics)(This, fontMetrics) )
	#define IDWriteFont_HasCharacter(This, unicodeValue, exists)	( ((This)->lpVtbl->HasCharacter)(This, unicodeValue, exists) )
	#define IDWriteFont_CreateFontFace(This, fontFace)	( ((This)->lpVtbl->CreateFontFace)(This, fontFace) )
#endif
#endif
typedef enum
{
    DWRITE_READING_DIRECTION_LEFT_TO_RIGHT,
    DWRITE_READING_DIRECTION_RIGHT_TO_LEFT
} DWRITE_READING_DIRECTION;
typedef enum
{
    DWRITE_FLOW_DIRECTION_TOP_TO_BOTTOM
} DWRITE_FLOW_DIRECTION;
typedef enum
{
    DWRITE_TEXT_ALIGNMENT_LEADING,
    DWRITE_TEXT_ALIGNMENT_TRAILING,
    DWRITE_TEXT_ALIGNMENT_CENTER
} DWRITE_TEXT_ALIGNMENT;
typedef enum
{
    DWRITE_PARAGRAPH_ALIGNMENT_NEAR,
    DWRITE_PARAGRAPH_ALIGNMENT_FAR,
    DWRITE_PARAGRAPH_ALIGNMENT_CENTER
} DWRITE_PARAGRAPH_ALIGNMENT;
typedef enum
{
    DWRITE_WORD_WRAPPING_WRAP,
    DWRITE_WORD_WRAPPING_NO_WRAP
} DWRITE_WORD_WRAPPING;
typedef enum
{
    DWRITE_LINE_SPACING_METHOD_DEFAULT,
    DWRITE_LINE_SPACING_METHOD_UNIFORM
} DWRITE_LINE_SPACING_METHOD;
typedef enum
{
    DWRITE_TRIMMING_GRANULARITY_NONE,
    DWRITE_TRIMMING_GRANULARITY_CHARACTER,
    DWRITE_TRIMMING_GRANULARITY_WORD	
} DWRITE_TRIMMING_GRANULARITY;
typedef enum
{
    DWRITE_FONT_FEATURE_TAG_ALTERNATIVE_FRACTIONS               = 0x63726661,
    DWRITE_FONT_FEATURE_TAG_PETITE_CAPITALS_FROM_CAPITALS       = 0x63703263,
    DWRITE_FONT_FEATURE_TAG_SMALL_CAPITALS_FROM_CAPITALS        = 0x63733263,
    DWRITE_FONT_FEATURE_TAG_CONTEXTUAL_ALTERNATES               = 0x746c6163,
    DWRITE_FONT_FEATURE_TAG_CASE_SENSITIVE_FORMS                = 0x65736163,
    DWRITE_FONT_FEATURE_TAG_GLYPH_COMPOSITION_DECOMPOSITION     = 0x706d6363,
    DWRITE_FONT_FEATURE_TAG_CONTEXTUAL_LIGATURES                = 0x67696c63,
    DWRITE_FONT_FEATURE_TAG_CAPITAL_SPACING                     = 0x70737063,
    DWRITE_FONT_FEATURE_TAG_CONTEXTUAL_SWASH                    = 0x68777363,
    DWRITE_FONT_FEATURE_TAG_CURSIVE_POSITIONING                 = 0x73727563,
    DWRITE_FONT_FEATURE_TAG_DEFAULT                             = 0x746c6664,
    DWRITE_FONT_FEATURE_TAG_DISCRETIONARY_LIGATURES             = 0x67696c64,
    DWRITE_FONT_FEATURE_TAG_EXPERT_FORMS                        = 0x74707865,
    DWRITE_FONT_FEATURE_TAG_FRACTIONS                           = 0x63617266,
    DWRITE_FONT_FEATURE_TAG_FULL_WIDTH                          = 0x64697766,
    DWRITE_FONT_FEATURE_TAG_HALF_FORMS                          = 0x666c6168,
    DWRITE_FONT_FEATURE_TAG_HALANT_FORMS                        = 0x6e6c6168,
    DWRITE_FONT_FEATURE_TAG_ALTERNATE_HALF_WIDTH                = 0x746c6168,
    DWRITE_FONT_FEATURE_TAG_HISTORICAL_FORMS                    = 0x74736968,
    DWRITE_FONT_FEATURE_TAG_HORIZONTAL_KANA_ALTERNATES          = 0x616e6b68,
    DWRITE_FONT_FEATURE_TAG_HISTORICAL_LIGATURES                = 0x67696c68,
    DWRITE_FONT_FEATURE_TAG_HALF_WIDTH                          = 0x64697768,
    DWRITE_FONT_FEATURE_TAG_HOJO_KANJI_FORMS                    = 0x6f6a6f68,
    DWRITE_FONT_FEATURE_TAG_JIS04_FORMS                         = 0x3430706a,
    DWRITE_FONT_FEATURE_TAG_JIS78_FORMS                         = 0x3837706a,
    DWRITE_FONT_FEATURE_TAG_JIS83_FORMS                         = 0x3338706a,
    DWRITE_FONT_FEATURE_TAG_JIS90_FORMS                         = 0x3039706a,
    DWRITE_FONT_FEATURE_TAG_KERNING                             = 0x6e72656b,
    DWRITE_FONT_FEATURE_TAG_STANDARD_LIGATURES                  = 0x6167696c,
    DWRITE_FONT_FEATURE_TAG_LINING_FIGURES                      = 0x6d756e6c,
    DWRITE_FONT_FEATURE_TAG_LOCALIZED_FORMS                     = 0x6c636f6c,
    DWRITE_FONT_FEATURE_TAG_MARK_POSITIONING                    = 0x6b72616d,
    DWRITE_FONT_FEATURE_TAG_MATHEMATICAL_GREEK                  = 0x6b72676d,
    DWRITE_FONT_FEATURE_TAG_MARK_TO_MARK_POSITIONING            = 0x6b6d6b6d,
    DWRITE_FONT_FEATURE_TAG_ALTERNATE_ANNOTATION_FORMS          = 0x746c616e,
    DWRITE_FONT_FEATURE_TAG_NLC_KANJI_FORMS                     = 0x6b636c6e,
    DWRITE_FONT_FEATURE_TAG_OLD_STYLE_FIGURES                   = 0x6d756e6f,
    DWRITE_FONT_FEATURE_TAG_ORDINALS                            = 0x6e64726f,
    DWRITE_FONT_FEATURE_TAG_PROPORTIONAL_ALTERNATE_WIDTH        = 0x746c6170,
    DWRITE_FONT_FEATURE_TAG_PETITE_CAPITALS                     = 0x70616370,
    DWRITE_FONT_FEATURE_TAG_PROPORTIONAL_FIGURES                = 0x6d756e70,
    DWRITE_FONT_FEATURE_TAG_PROPORTIONAL_WIDTHS                 = 0x64697770,
    DWRITE_FONT_FEATURE_TAG_QUARTER_WIDTHS                      = 0x64697771,
    DWRITE_FONT_FEATURE_TAG_REQUIRED_LIGATURES                  = 0x67696c72,
    DWRITE_FONT_FEATURE_TAG_RUBY_NOTATION_FORMS                 = 0x79627572,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_ALTERNATES                = 0x746c6173,
    DWRITE_FONT_FEATURE_TAG_SCIENTIFIC_INFERIORS                = 0x666e6973,
    DWRITE_FONT_FEATURE_TAG_SMALL_CAPITALS                      = 0x70636d73,
    DWRITE_FONT_FEATURE_TAG_SIMPLIFIED_FORMS                    = 0x6c706d73,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_1                     = 0x31307373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_2                     = 0x32307373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_3                     = 0x33307373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_4                     = 0x34307373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_5                     = 0x35307373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_6                     = 0x36307373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_7                     = 0x37307373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_8                     = 0x38307373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_9                     = 0x39307373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_10                    = 0x30317373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_11                    = 0x31317373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_12                    = 0x32317373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_13                    = 0x33317373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_14                    = 0x34317373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_15                    = 0x35317373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_16                    = 0x36317373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_17                    = 0x37317373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_18                    = 0x38317373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_19                    = 0x39317373,
    DWRITE_FONT_FEATURE_TAG_STYLISTIC_SET_20                    = 0x30327373,
    DWRITE_FONT_FEATURE_TAG_SUBSCRIPT                           = 0x73627573,
    DWRITE_FONT_FEATURE_TAG_SUPERSCRIPT                         = 0x73707573,
    DWRITE_FONT_FEATURE_TAG_SWASH                               = 0x68737773,
    DWRITE_FONT_FEATURE_TAG_TITLING                             = 0x6c746974,
    DWRITE_FONT_FEATURE_TAG_TRADITIONAL_NAME_FORMS              = 0x6d616e74,
    DWRITE_FONT_FEATURE_TAG_TABULAR_FIGURES                     = 0x6d756e74,
    DWRITE_FONT_FEATURE_TAG_TRADITIONAL_FORMS                   = 0x64617274,
    DWRITE_FONT_FEATURE_TAG_THIRD_WIDTHS                        = 0x64697774,
    DWRITE_FONT_FEATURE_TAG_UNICASE                             = 0x63696e75,
    DWRITE_FONT_FEATURE_TAG_SLASHED_ZERO                        = 0x6f72657a,
} DWRITE_FONT_FEATURE_TAG;
typedef struct
{
    UINT32 startPosition;
    UINT32 length;
} DWRITE_TEXT_RANGE;
typedef struct
{
    DWRITE_FONT_FEATURE_TAG nameTag;
    UINT32 parameter;

} DWRITE_FONT_FEATURE;
typedef struct
{
     DWRITE_FONT_FEATURE* features;
    UINT32 featureCount;

} DWRITE_TYPOGRAPHIC_FEATURES;
typedef struct
{
    DWRITE_TRIMMING_GRANULARITY granularity;
    UINT32 delimiter;
    UINT32 delimiterCount;

} DWRITE_TRIMMING;
#ifndef __IDWriteTextFormat_INTERFACE_DEFINED__
#define __IDWriteTextFormat_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteTextFormat;
typedef struct IDWriteTextFormatVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteTextFormat * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteTextFormat * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteTextFormat * This);
	STDMETHOD(SetTextAlignment) (IDWriteTextFormat * This, DWRITE_TEXT_ALIGNMENT textAlignment);
	STDMETHOD(SetParagraphAlignment) (IDWriteTextFormat * This, DWRITE_PARAGRAPH_ALIGNMENT paragraphAlignment);
	STDMETHOD(SetWordWrapping) (IDWriteTextFormat * This, DWRITE_WORD_WRAPPING wordWrapping);
	STDMETHOD(SetReadingDirection) (IDWriteTextFormat * This, DWRITE_READING_DIRECTION readingDirection);
	STDMETHOD(SetFlowDirection) (IDWriteTextFormat * This, DWRITE_FLOW_DIRECTION flowDirection);
	STDMETHOD(SetIncrementalTabStop) (IDWriteTextFormat * This, FLOAT incrementalTabStop);
	STDMETHOD(SetTrimming) (IDWriteTextFormat * This, DWRITE_TRIMMING const *trimmingOptions, IDWriteInlineObject * trimmingSign);
	STDMETHOD(SetLineSpacing) (IDWriteTextFormat * This, DWRITE_LINE_SPACING_METHOD lineSpacingMethod, FLOAT lineSpacing, FLOAT baseline);
	STDMETHOD_(DWRITE_TEXT_ALIGNMENT, GetTextAlignment) (IDWriteTextFormat * This);
	STDMETHOD_(DWRITE_PARAGRAPH_ALIGNMENT, GetParagraphAlignment) (IDWriteTextFormat * This);
	STDMETHOD_(DWRITE_WORD_WRAPPING, GetWordWrapping) (IDWriteTextFormat * This);
	STDMETHOD_(DWRITE_READING_DIRECTION, GetReadingDirection) (IDWriteTextFormat * This);
	STDMETHOD_(DWRITE_FLOW_DIRECTION, GetFlowDirection) (IDWriteTextFormat * This);
	STDMETHOD_(FLOAT, GetIncrementalTabStop) (IDWriteTextFormat * This);
	STDMETHOD(GetTrimming) (IDWriteTextFormat * This, DWRITE_TRIMMING * trimmingOptions, IDWriteInlineObject ** trimmingSign);
	STDMETHOD(GetLineSpacing) (IDWriteTextFormat * This, DWRITE_LINE_SPACING_METHOD * lineSpacingMethod, FLOAT * lineSpacing, FLOAT * baseline);
	STDMETHOD(GetFontCollection) (IDWriteTextFormat * This, IDWriteFontCollection ** fontCollection);
	STDMETHOD_(UINT32, GetFontFamilyNameLength) (IDWriteTextFormat * This);
	STDMETHOD(GetFontFamilyName) (IDWriteTextFormat * This, WCHAR * fontFamilyName, UINT32 nameSize);
	STDMETHOD_(DWRITE_FONT_WEIGHT, GetFontWeight) (IDWriteTextFormat * This);
	STDMETHOD_(DWRITE_FONT_STYLE, GetFontStyle) (IDWriteTextFormat * This);
	STDMETHOD_(DWRITE_FONT_STRETCH, GetFontStretch) (IDWriteTextFormat * This);
	STDMETHOD_(FLOAT, GetFontSize) (IDWriteTextFormat * This);
	STDMETHOD_(UINT32, GetLocaleNameLength) (IDWriteTextFormat * This);
	STDMETHOD(GetLocaleName) (IDWriteTextFormat * This, WCHAR * localeName, UINT32 nameSize);
	END_INTERFACE
} IDWriteTextFormatVtbl;
interface IDWriteTextFormat
{
    CONST_VTBL struct IDWriteTextFormatVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteTextFormat_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteTextFormat_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteTextFormat_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteTextFormat_SetTextAlignment(This, textAlignment)	( ((This)->lpVtbl->SetTextAlignment)(This, textAlignment) )
	#define IDWriteTextFormat_SetParagraphAlignment(This, paragraphAlignment)	( ((This)->lpVtbl->SetParagraphAlignment)(This, paragraphAlignment) )
	#define IDWriteTextFormat_SetWordWrapping(This, wordWrapping)	( ((This)->lpVtbl->SetWordWrapping)(This, wordWrapping) )
	#define IDWriteTextFormat_SetReadingDirection(This, readingDirection)	( ((This)->lpVtbl->SetReadingDirection)(This, readingDirection) )
	#define IDWriteTextFormat_SetFlowDirection(This, flowDirection)	( ((This)->lpVtbl->SetFlowDirection)(This, flowDirection) )
	#define IDWriteTextFormat_SetIncrementalTabStop(This, incrementalTabStop)	( ((This)->lpVtbl->SetIncrementalTabStop)(This, incrementalTabStop) )
	#define IDWriteTextFormat_SetTrimming(This, trimmingOptions, trimmingSign)	( ((This)->lpVtbl->SetTrimming)(This, trimmingOptions, trimmingSign) )
	#define IDWriteTextFormat_SetLineSpacing(This, lineSpacingMethod, lineSpacing, baseline)	( ((This)->lpVtbl->SetLineSpacing)(This, lineSpacingMethod, lineSpacing, baseline) )
	#define IDWriteTextFormat_GetTextAlignment(This)	( ((This)->lpVtbl->GetTextAlignment)(This) )
	#define IDWriteTextFormat_GetParagraphAlignment(This)	( ((This)->lpVtbl->GetParagraphAlignment)(This) )
	#define IDWriteTextFormat_GetWordWrapping(This)	( ((This)->lpVtbl->GetWordWrapping)(This) )
	#define IDWriteTextFormat_GetReadingDirection(This)	( ((This)->lpVtbl->GetReadingDirection)(This) )
	#define IDWriteTextFormat_GetFlowDirection(This)	( ((This)->lpVtbl->GetFlowDirection)(This) )
	#define IDWriteTextFormat_GetIncrementalTabStop(This)	( ((This)->lpVtbl->GetIncrementalTabStop)(This) )
	#define IDWriteTextFormat_GetTrimming(This, trimmingOptions, trimmingSign)	( ((This)->lpVtbl->GetTrimming)(This, trimmingOptions, trimmingSign) )
	#define IDWriteTextFormat_GetLineSpacing(This, lineSpacingMethod, lineSpacing, baseline)	( ((This)->lpVtbl->GetLineSpacing)(This, lineSpacingMethod, lineSpacing, baseline) )
	#define IDWriteTextFormat_GetFontCollection(This, fontCollection)	( ((This)->lpVtbl->GetFontCollection)(This, fontCollection) )
	#define IDWriteTextFormat_GetFontFamilyNameLength(This)	( ((This)->lpVtbl->GetFontFamilyNameLength)(This) )
	#define IDWriteTextFormat_GetFontFamilyName(This, fontFamilyName, nameSize)	( ((This)->lpVtbl->GetFontFamilyName)(This, fontFamilyName, nameSize) )
	#define IDWriteTextFormat_GetFontWeight(This)	( ((This)->lpVtbl->GetFontWeight)(This) )
	#define IDWriteTextFormat_GetFontStyle(This)	( ((This)->lpVtbl->GetFontStyle)(This) )
	#define IDWriteTextFormat_GetFontStretch(This)	( ((This)->lpVtbl->GetFontStretch)(This) )
	#define IDWriteTextFormat_GetFontSize(This)	( ((This)->lpVtbl->GetFontSize)(This) )
	#define IDWriteTextFormat_GetLocaleNameLength(This)	( ((This)->lpVtbl->GetLocaleNameLength)(This) )
	#define IDWriteTextFormat_GetLocaleName(This, localeName, nameSize)	( (extFormat->lpVtbl->GetLocaleName)(This, localeName, nameSize) )
#endif
#endif
#ifndef __IDWriteTypography_INTERFACE_DEFINED__
#define __IDWriteTypography_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteTypography;
typedef struct IDWriteTypographyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteTypography * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteTypography * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteTypography * This);
	STDMETHOD(AddFontFeature) (IDWriteTypography * This, DWRITE_FONT_FEATURE fontFeature);
	STDMETHOD_(UINT32, GetFontFeatureCount) (IDWriteTypography * This);
	STDMETHOD(GetFontFeature) (IDWriteTypography * This, UINT32 fontFeatureIndex, DWRITE_FONT_FEATURE * fontFeature);
	END_INTERFACE
} IDWriteTypographyVtbl;
interface IDWriteTypography
{
    CONST_VTBL struct IDWriteTypographyVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteTypography_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteTypography_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteTypography_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteTypography_AddFontFeature(This, fontFeature)	( ((This)->lpVtbl->AddFontFeature)(This, fontFeature) )
	#define IDWriteTypography_GetFontFeatureCount(This)	( ((This)->lpVtbl->GetFontFeatureCount)(This) )
	#define IDWriteTypography_GetFontFeature(This, fontFeatureIndex, fontFeature)	( (hy->lpVtbl->GetFontFeature)(This, fontFeatureIndex, fontFeature) )
#endif
#endif
typedef enum
{
    DWRITE_SCRIPT_SHAPES_DEFAULT = 0,
    DWRITE_SCRIPT_SHAPES_NO_VISUAL = 1

} DWRITE_SCRIPT_SHAPES;
#ifdef DEFINE_ENUM_FLAG_OPERATORS
DEFINE_ENUM_FLAG_OPERATORS(DWRITE_SCRIPT_SHAPES);
#endif
typedef struct
{
    UINT16 script;
    DWRITE_SCRIPT_SHAPES shapes;

} DWRITE_SCRIPT_ANALYSIS;
typedef enum
{
    DWRITE_BREAK_CONDITION_NEUTRAL,
    DWRITE_BREAK_CONDITION_CAN_BREAK,
    DWRITE_BREAK_CONDITION_MAY_NOT_BREAK,
    DWRITE_BREAK_CONDITION_MUST_BREAK

} DWRITE_BREAK_CONDITION;
typedef struct
{
    UINT8 breakConditionBefore  : 2;
    UINT8 breakConditionAfter   : 2;
    UINT8 isWhitespace          : 1;
    UINT8 isSoftHyphen          : 1;
    UINT8 padding               : 2;

} DWRITE_LINE_BREAKPOINT;
typedef enum
{
    DWRITE_NUMBER_SUBSTITUTION_METHOD_FROM_CULTURE,
    DWRITE_NUMBER_SUBSTITUTION_METHOD_CONTEXTUAL,
    DWRITE_NUMBER_SUBSTITUTION_METHOD_NONE,
    DWRITE_NUMBER_SUBSTITUTION_METHOD_NATIONAL,
    DWRITE_NUMBER_SUBSTITUTION_METHOD_TRADITIONAL

} DWRITE_NUMBER_SUBSTITUTION_METHOD;
#ifndef __IDWriteNumberSubstitution_INTERFACE_DEFINED__
#define __IDWriteNumberSubstitution_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteNumberSubstitution;
typedef struct IDWriteNumberSubstitutionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteNumberSubstitution * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteNumberSubstitution * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteNumberSubstitution * This);
	END_INTERFACE
} IDWriteNumberSubstitutionVtbl;
interface IDWriteNumberSubstitution
{
    CONST_VTBL struct IDWriteNumberSubstitutionVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteNumberSubstitution_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteNumberSubstitution_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteNumberSubstitution_Release(This)	( ((This)->lpVtbl->Release)(This) )
#endif
#endif
typedef struct
{
    UINT16  isShapedAlone       : 1;
    UINT16  reserved            : 15;

} DWRITE_SHAPING_TEXT_PROPERTIES;
typedef struct
{
    UINT16  justification       : 4;
    UINT16  isClusterStart      : 1;
    UINT16  isDiacritic         : 1;
    UINT16  isZeroWidthSpace    : 1;
    UINT16  reserved            : 9;

} DWRITE_SHAPING_GLYPH_PROPERTIES;
#ifndef __IDWriteTextAnalysisSource_INTERFACE_DEFINED__
#define __IDWriteTextAnalysisSource_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteTextAnalysisSource;
typedef struct IDWriteTextAnalysisSourceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteTextAnalysisSource * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteTextAnalysisSource * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteTextAnalysisSource * This);
	STDMETHOD(GetTextAtPosition) (IDWriteTextAnalysisSource * This, UINT32 textPosition, WCHAR const **textString, UINT32 * textLength);
	STDMETHOD(GetTextBeforePosition) (IDWriteTextAnalysisSource * This, UINT32 textPosition, WCHAR const **textString, UINT32 * textLength);
	STDMETHOD_(DWRITE_READING_DIRECTION, GetParagraphReadingDirection) (IDWriteTextAnalysisSource * This);
	STDMETHOD(GetLocaleName) (IDWriteTextAnalysisSource * This, UINT32 textPosition, UINT32 * textLength, WCHAR const **localeName);
	STDMETHOD(GetNumberSubstitution) (IDWriteTextAnalysisSource * This, UINT32 textPosition, UINT32 * textLength, IDWriteNumberSubstitution ** numberSubstitution);
	END_INTERFACE
} IDWriteTextAnalysisSourceVtbl;
interface IDWriteTextAnalysisSource
{
    CONST_VTBL struct IDWriteTextAnalysisSourceVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteTextAnalysisSource_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteTextAnalysisSource_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteTextAnalysisSource_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteTextAnalysisSource_GetTextAtPosition(This, textPosition, textString, textLength)	( ((This)->lpVtbl->GetTextAtPosition)(This, textPosition, textString, textLength) )
	#define IDWriteTextAnalysisSource_GetTextBeforePosition(This, textPosition, textString, textLength)	( ((This)->lpVtbl->GetTextBeforePosition)(This, textPosition, textString, textLength) )
	#define IDWriteTextAnalysisSource_GetParagraphReadingDirection(This)	( ((This)->lpVtbl->GetParagraphReadingDirection)(This) )
	#define IDWriteTextAnalysisSource_GetLocaleName(This, textPosition, textLength, localeName)	( ((This)->lpVtbl->GetLocaleName)(This, textPosition, textLength, localeName) )
	#define IDWriteTextAnalysisSource_GetNumberSubstitution(This, textPosition, textLength, numberSubstitution)	( ((This)->lpVtbl->GetNumberSubstitution)(This, textPosition, textLength, numberSubstitution) )
#endif
#endif
#ifndef __IDWriteTextAnalysisSink_INTERFACE_DEFINED__
#define __IDWriteTextAnalysisSink_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteTextAnalysisSink;
typedef struct IDWriteTextAnalysisSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteTextAnalysisSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteTextAnalysisSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteTextAnalysisSink * This);
	STDMETHOD(SetScriptAnalysis) (IDWriteTextAnalysisSink * This, UINT32 textPosition, UINT32 textLength, DWRITE_SCRIPT_ANALYSIS const *scriptAnalysis);
	STDMETHOD(SetLineBreakpoints) (IDWriteTextAnalysisSink * This, UINT32 textPosition, UINT32 textLength, DWRITE_LINE_BREAKPOINT const *lineBreakpoints);
	STDMETHOD(SetBidiLevel) (IDWriteTextAnalysisSink * This, UINT32 textPosition, UINT32 textLength, UINT8 explicitLevel, UINT8 resolvedLevel);
	STDMETHOD(SetNumberSubstitution) (IDWriteTextAnalysisSink * This, UINT32 textPosition, UINT32 textLength, IDWriteNumberSubstitution * numberSubstitution);
	END_INTERFACE
} IDWriteTextAnalysisSinkVtbl;
interface IDWriteTextAnalysisSink
{
    CONST_VTBL struct IDWriteTextAnalysisSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteTextAnalysisSink_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteTextAnalysisSink_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteTextAnalysisSink_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteTextAnalysisSink_SetScriptAnalysis(This, textPosition, textLength, scriptAnalysis)	( ((This)->lpVtbl->SetScriptAnalysis)(This, textPosition, textLength, scriptAnalysis) )
	#define IDWriteTextAnalysisSink_SetLineBreakpoints(This, textPosition, textLength, lineBreakpoints)	( ((This)->lpVtbl->SetLineBreakpoints)(This, textPosition, textLength, lineBreakpoints) )
	#define IDWriteTextAnalysisSink_SetBidiLevel(This, textPosition, textLength, explicitLevel, resolvedLevel)	( ((This)->lpVtbl->SetBidiLevel)(This, textPosition, textLength, explicitLevel, resolvedLevel) )
	#define IDWriteTextAnalysisSink_SetNumberSubstitution(This, textPosition, textLength, numberSubstitution)	( ((This)->lpVtbl->SetNumberSubstitution)(This, textPosition, textLength, numberSubstitution) )
#endif
#endif
#ifndef __IDWriteTextAnalyzer_INTERFACE_DEFINED__
#define __IDWriteTextAnalyzer_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteTextAnalyzer;
typedef struct IDWriteTextAnalyzerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteTextAnalyzer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteTextAnalyzer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteTextAnalyzer * This);
	STDMETHOD(AnalyzeScript) (IDWriteTextAnalyzer * This, IDWriteTextAnalysisSource * analysisSource, UINT32 textPosition, UINT32 textLength, IDWriteTextAnalysisSink * analysisSink);
	STDMETHOD(AnalyzeBidi) (IDWriteTextAnalyzer * This, IDWriteTextAnalysisSource * analysisSource, UINT32 textPosition, UINT32 textLength, IDWriteTextAnalysisSink * analysisSink);
	STDMETHOD(AnalyzeNumberSubstitution) (IDWriteTextAnalyzer * This, IDWriteTextAnalysisSource * analysisSource, UINT32 textPosition, UINT32 textLength, IDWriteTextAnalysisSink * analysisSink);
	STDMETHOD(AnalyzeLineBreakpoints) (IDWriteTextAnalyzer * This, IDWriteTextAnalysisSource * analysisSource, UINT32 textPosition, UINT32 textLength, IDWriteTextAnalysisSink * analysisSink);
	STDMETHOD(GetGlyphs) (IDWriteTextAnalyzer * This, WCHAR const *textString, UINT32 textLength, IDWriteFontFace * fontFace, BOOL isSideways, BOOL isRightToLeft, DWRITE_SCRIPT_ANALYSIS const *scriptAnalysis,  WCHAR const *localeName, IDWriteNumberSubstitution * numberSubstitution, DWRITE_TYPOGRAPHIC_FEATURES const **features, UINT32 const *featureRangeLengths, UINT32 featureRanges, UINT32 maxGlyphCount, UINT16 * clusterMap, DWRITE_SHAPING_TEXT_PROPERTIES * textProps, UINT16 * glyphIndices, DWRITE_SHAPING_GLYPH_PROPERTIES * glyphProps, UINT32 * actualGlyphCount);
	STDMETHOD(GetGlyphPlacements) (IDWriteTextAnalyzer * This, WCHAR const *textString, UINT16 const *clusterMap, DWRITE_SHAPING_TEXT_PROPERTIES * textProps, UINT32 textLength, UINT16 const *glyphIndices, DWRITE_SHAPING_GLYPH_PROPERTIES const *glyphProps, UINT32 glyphCount, IDWriteFontFace * fontFace, FLOAT fontEmSize, BOOL isSideways, BOOL isRightToLeft, DWRITE_SCRIPT_ANALYSIS const *scriptAnalysis, WCHAR const *localeName, DWRITE_TYPOGRAPHIC_FEATURES const **features, UINT32 const *featureRangeLengths, UINT32 featureRanges, FLOAT * glyphAdvances, DWRITE_GLYPH_OFFSET * glyphOffsets);
	STDMETHOD(GetGdiCompatibleGlyphPlacements) (IDWriteTextAnalyzer * This, WCHAR const *textString, UINT16 const *clusterMap, DWRITE_SHAPING_TEXT_PROPERTIES * textProps, UINT32 textLength, UINT16 const *glyphIndices, DWRITE_SHAPING_GLYPH_PROPERTIES const *glyphProps, UINT32 glyphCount, IDWriteFontFace * fontFace, FLOAT fontEmSize, FLOAT pixelsPerDip, DWRITE_MATRIX const *transform, BOOL useGdiNatural, BOOL isSideways, BOOL isRightToLeft, DWRITE_SCRIPT_ANALYSIS const *scriptAnalysis, WCHAR const *localeName, DWRITE_TYPOGRAPHIC_FEATURES const **features, UINT32 const *featureRangeLengths, UINT32 featureRanges, FLOAT * glyphAdvances, DWRITE_GLYPH_OFFSET * glyphOffsets);
	END_INTERFACE
} IDWriteTextAnalyzerVtbl;
interface IDWriteTextAnalyzer
{
    CONST_VTBL struct IDWriteTextAnalyzerVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteTextAnalyzer_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteTextAnalyzer_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteTextAnalyzer_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteTextAnalyzer_AnalyzeScript(This, analysisSource, textPosition, textLength, analysisSink)	( ((This)->lpVtbl->AnalyzeScript)(This, analysisSource, textPosition, textLength, analysisSink) )
	#define IDWriteTextAnalyzer_AnalyzeBidi(This, analysisSource, textPosition, textLength, analysisSink)	( ((This)->lpVtbl->AnalyzeBidi)(This, analysisSource, textPosition, textLength, analysisSink) )
	#define IDWriteTextAnalyzer_AnalyzeNumberSubstitution(This, analysisSource, textPosition, textLength, analysisSink)	( ((This)->lpVtbl->AnalyzeNumberSubstitution)(This, analysisSource, textPosition, textLength, analysisSink) )
	#define IDWriteTextAnalyzer_AnalyzeLineBreakpoints(This, analysisSource, textPosition, textLength, analysisSink)	( ((This)->lpVtbl->AnalyzeLineBreakpoints)(This, analysisSource, textPosition, textLength, analysisSink) )
	#define IDWriteTextAnalyzer_GetGlyphs(This, textString, textLength, fontFace, isSideways, isRightToLeft, scriptAnalysis,  localeName, numberSubstitution, features, featureRangeLengths, featureRanges, maxGlyphCount, clusterMap, textProps, glyphIndices, glyphProps, actualGlyphCount)	( ((This)->lpVtbl->GetGlyphs)(This, textString, textLength, fontFace, isSideways, isRightToLeft, scriptAnalysis,  localeName, numberSubstitution, features, featureRangeLengths, featureRanges, maxGlyphCount, clusterMap, textProps, glyphIndices, glyphProps, actualGlyphCount) )
	#define IDWriteTextAnalyzer_GetGlyphPlacements(This,  textString, clusterMap, textProps, textLength, glyphIndices, glyphProps, glyphCount, fontFace, fontEmSize, isSideways, isRightToLeft, scriptAnalysis, localeName, features, featureRangeLengths, featureRanges, glyphAdvances, glyphOffsets)	( ((This)->lpVtbl->GetGlyphPlacements)(This,  textString, clusterMap, textProps, textLength, glyphIndices, glyphProps, glyphCount, fontFace, fontEmSize, isSideways, isRightToLeft, scriptAnalysis, localeName, features, featureRangeLengths, featureRanges, glyphAdvances, glyphOffsets) )
	#define IDWriteTextAnalyzer_GetGdiCompatibleGlyphPlacements(This, textString, clusterMap, textProps, textLength, glyphIndices, glyphProps, glyphCount, fontFace, fontEmSize, pixelsPerDip, transform, useGdiNatural, isSideways, isRightToLeft, scriptAnalysis, localeName, eatures, featureRangeLengths, featureRanges, glyphAdvances, glyphOffsets)	( ((This)->lpVtbl->GetGdiCompatibleGlyphPlacements)(This, textString, clusterMap, textProps, textLength, glyphIndices, glyphProps, glyphCount, fontFace, fontEmSize, pixelsPerDip, transform, useGdiNatural, isSideways, isRightToLeft, scriptAnalysis, localeName, eatures, featureRangeLengths, featureRanges, glyphAdvances, glyphOffsets) )
#endif
#endif
typedef struct DWRITE_GLYPH_RUN
{
    IDWriteFontFace* fontFace;
    FLOAT fontEmSize;
    UINT32 glyphCount;
     UINT16 const* glyphIndices;
     FLOAT const* glyphAdvances;
     DWRITE_GLYPH_OFFSET const* glyphOffsets;
    BOOL isSideways;
    UINT32 bidiLevel;

} DWRITE_GLYPH_RUN;
typedef struct
{
    WCHAR const* localeName;
     WCHAR const* string;
    UINT32 stringLength;
     UINT16 const* clusterMap;
    UINT32 textPosition;

} DWRITE_GLYPH_RUN_DESCRIPTION;
typedef struct
{
    FLOAT width;
    FLOAT thickness;
    FLOAT offset;
    FLOAT runHeight;
    DWRITE_READING_DIRECTION readingDirection;
    DWRITE_FLOW_DIRECTION flowDirection;
    WCHAR const* localeName;
    DWRITE_MEASURING_MODE measuringMode;

} DWRITE_UNDERLINE;
typedef struct
{
    FLOAT width;
    FLOAT thickness;
    FLOAT offset;
    DWRITE_READING_DIRECTION readingDirection;
    DWRITE_FLOW_DIRECTION flowDirection;
    WCHAR const* localeName;
    DWRITE_MEASURING_MODE measuringMode;

} DWRITE_STRIKETHROUGH;
typedef struct
{
    UINT32 length;
    UINT32 trailingWhitespaceLength;
    UINT32 newlineLength;
    FLOAT height;
    FLOAT baseline;
    BOOL isTrimmed;

} DWRITE_LINE_METRICS;
typedef struct
{
    FLOAT width;
    UINT16 length;
    UINT16 canWrapLineAfter : 1;
    UINT16 isWhitespace : 1;
    UINT16 isNewline : 1;
    UINT16 isSoftHyphen : 1;
    UINT16 isRightToLeft : 1;
    UINT16 padding : 11;

} DWRITE_CLUSTER_METRICS;
typedef struct
{
    FLOAT left;
    FLOAT top;
    FLOAT width;
    FLOAT widthIncludingTrailingWhitespace;
    FLOAT height;
    FLOAT layoutWidth;
    FLOAT layoutHeight;
    UINT32 maxBidiReorderingDepth;
    UINT32 lineCount;

} DWRITE_TEXT_METRICS;
typedef struct
{
    FLOAT width;
    FLOAT height;
    FLOAT baseline;
    BOOL  supportsSideways;

} DWRITE_INLINE_OBJECT_METRICS;
typedef struct
{
    FLOAT left;
    FLOAT top;
    FLOAT right;
    FLOAT bottom;

} DWRITE_OVERHANG_METRICS;
typedef struct
{
    UINT32 textPosition;
    UINT32 length;
    FLOAT left;
    FLOAT top;
    FLOAT width;
    FLOAT height;
    UINT32 bidiLevel;
    BOOL isText;
    BOOL isTrimmed;

} DWRITE_HIT_TEST_METRICS;
interface IDWriteTextRenderer;
#ifndef __IDWriteInlineObject_INTERFACE_DEFINED__
#define __IDWriteInlineObject_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteInlineObject;
typedef struct IDWriteInlineObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteInlineObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteInlineObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteInlineObject * This);
	STDMETHOD(Draw) (IDWriteInlineObject * This, void *clientDrawingContext, IDWriteTextRenderer * renderer, FLOAT originX, FLOAT originY, BOOL isSideways, BOOL isRightToLeft, IUnknown * clientDrawingEffect);
	STDMETHOD(GetMetrics) (IDWriteInlineObject * This, DWRITE_INLINE_OBJECT_METRICS * metrics);
	STDMETHOD(GetOverhangMetrics) (IDWriteInlineObject * This, DWRITE_OVERHANG_METRICS * overhangs);
	STDMETHOD(GetBreakConditions) (IDWriteInlineObject * This, DWRITE_BREAK_CONDITION * breakConditionBefore, DWRITE_BREAK_CONDITION * breakConditionAfter);
	END_INTERFACE
} IDWriteInlineObjectVtbl;
interface IDWriteInlineObject
{
    CONST_VTBL struct IDWriteInlineObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteInlineObject_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteInlineObject_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteInlineObject_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteInlineObject_Draw(This, clientDrawingContext, renderer, originX, originY, isSideways, isRightToLeft, clientDrawingEffect)	( ((This)->lpVtbl->Draw)(This, clientDrawingContext, renderer, originX, originY, isSideways, isRightToLeft, clientDrawingEffect) )
	#define IDWriteInlineObject_GetMetrics(This, metrics)	( ((This)->lpVtbl->GetMetrics)(This, metrics) )
	#define IDWriteInlineObject_GetOverhangMetrics(This, overhangs)	( ((This)->lpVtbl->GetOverhangMetrics)(This, overhangs) )
	#define IDWriteInlineObject_GetBreakConditions(This, breakConditionBefore, breakConditionAfter)	( (Object->lpVtbl->GetBreakConditions)(This, breakConditionBefore, breakConditionAfter) )
#endif
#endif
#ifndef __IDWritePixelSnapping_INTERFACE_DEFINED__
#define __IDWritePixelSnapping_INTERFACE_DEFINED__ 
extern const IID IID_IDWritePixelSnapping;
typedef struct IDWritePixelSnappingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWritePixelSnapping * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWritePixelSnapping * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWritePixelSnapping * This);
	STDMETHOD(IsPixelSnappingDisabled) (IDWritePixelSnapping * This, void *clientDrawingContext, BOOL * isDisabled);
	STDMETHOD(GetCurrentTransform) (IDWritePixelSnapping * This, void *clientDrawingContext, DWRITE_MATRIX * transform);
	STDMETHOD(GetPixelsPerDip) (IDWritePixelSnapping * This, void *clientDrawingContext, FLOAT * pixelsPerDip);
	END_INTERFACE
} IDWritePixelSnappingVtbl;
interface IDWritePixelSnapping
{
    CONST_VTBL struct IDWritePixelSnappingVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWritePixelSnapping_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWritePixelSnapping_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWritePixelSnapping_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWritePixelSnapping_IsPixelSnappingDisabled(This, clientDrawingContext, isDisabled)	( ((This)->lpVtbl->IsPixelSnappingDisabled)(This, clientDrawingContext, isDisabled) )
	#define IDWritePixelSnapping_GetCurrentTransform(This, clientDrawingContext, transform)	( ((This)->lpVtbl->GetCurrentTransform)(This, clientDrawingContext, transform) )
	#define IDWritePixelSnapping_GetPixelsPerDip(This, clientDrawingContext, pixelsPerDip)	( ((This)->lpVtbl->GetPixelsPerDip)(This, clientDrawingContext, pixelsPerDip) )
#endif
#endif
#ifndef __IDWriteTextRenderer_INTERFACE_DEFINED__
#define __IDWriteTextRenderer_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteTextRenderer;
typedef struct IDWriteTextRendererVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteTextRenderer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteTextRenderer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteTextRenderer * This);
	STDMETHOD(IsPixelSnappingDisabled) (IDWriteTextRenderer * This, void *clientDrawingContext, BOOL * isDisabled);
	STDMETHOD(GetCurrentTransform) (IDWriteTextRenderer * This, void *clientDrawingContext, DWRITE_MATRIX * transform);
	STDMETHOD(GetPixelsPerDip) (IDWriteTextRenderer * This, void *clientDrawingContext, FLOAT * pixelsPerDip);
	STDMETHOD(DrawGlyphRun) (IDWriteTextRenderer * This, void *clientDrawingContext, FLOAT baselineOriginX, FLOAT baselineOriginY, DWRITE_MEASURING_MODE measuringMode, DWRITE_GLYPH_RUN const *glyphRun, DWRITE_GLYPH_RUN_DESCRIPTION const *glyphRunDescription, IUnknown * clientDrawingEffect);
	STDMETHOD(DrawUnderline) (IDWriteTextRenderer * This, void *clientDrawingContext, FLOAT baselineOriginX, FLOAT baselineOriginY, DWRITE_UNDERLINE const *underline, IUnknown * clientDrawingEffect);
	STDMETHOD(DrawStrikethrough) (IDWriteTextRenderer * This, void *clientDrawingContext, FLOAT baselineOriginX, FLOAT baselineOriginY, DWRITE_STRIKETHROUGH const *strikethrough, IUnknown * clientDrawingEffect);
	STDMETHOD(DrawInlineObject) (IDWriteTextRenderer * This, void *clientDrawingContext, FLOAT originX, FLOAT originY, IDWriteInlineObject * inlineObject, BOOL isSideways, BOOL isRightToLeft, IUnknown * clientDrawingEffect);
	END_INTERFACE
} IDWriteTextRendererVtbl;
interface IDWriteTextRenderer
{
    CONST_VTBL struct IDWriteTextRendererVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteTextRenderer_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteTextRenderer_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteTextRenderer_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteTextRenderer_IsPixelSnappingDisabled(This, clientDrawingContext, isDisabled)	( ((This)->lpVtbl->IsPixelSnappingDisabled)(This, clientDrawingContext, isDisabled) )
	#define IDWriteTextRenderer_GetCurrentTransform(This, clientDrawingContext, transform)	( ((This)->lpVtbl->GetCurrentTransform)(This, clientDrawingContext, transform) )
	#define IDWriteTextRenderer_GetPixelsPerDip(This, clientDrawingContext, pixelsPerDip)	( ((This)->lpVtbl->GetPixelsPerDip)(This, clientDrawingContext, pixelsPerDip) )
	#define IDWriteTextRenderer_DrawGlyphRun(This, clientDrawingContext, baselineOriginX, baselineOriginY, measuringMode, glyphRun, glyphRunDescription, clientDrawingEffect)	( ((This)->lpVtbl->DrawGlyphRun)(This, clientDrawingContext, baselineOriginX, baselineOriginY, measuringMode, glyphRun, glyphRunDescription, clientDrawingEffect) )
	#define IDWriteTextRenderer_DrawUnderline(This, clientDrawingContext, baselineOriginX, baselineOriginY, underline, clientDrawingEffect)	( ((This)->lpVtbl->DrawUnderline)(This, clientDrawingContext, baselineOriginX, baselineOriginY, underline, clientDrawingEffect) )
	#define IDWriteTextRenderer_DrawStrikethrough(This, clientDrawingContext, baselineOriginX, baselineOriginY, strikethrough, clientDrawingEffect)	( ((This)->lpVtbl->DrawStrikethrough)(This, clientDrawingContext, baselineOriginX, baselineOriginY, strikethrough, clientDrawingEffect) )
	#define IDWriteTextRenderer_DrawInlineObject(This, clientDrawingContext, originX,  originY, inlineObject, isSideways, isRightToLeft, clientDrawingEffect)	( ((This)->lpVtbl->DrawInlineObject)(This, clientDrawingContext, originX,  originY, inlineObject, isSideways, isRightToLeft, clientDrawingEffect) )
#endif
#endif
#ifndef __IDWriteTextLayout_INTERFACE_DEFINED__
#define __IDWriteTextLayout_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteTextLayout;
typedef struct IDWriteTextLayoutVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteTextLayout * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteTextLayout * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteTextLayout * This);
	STDMETHOD(SetTextAlignment) (IDWriteTextLayout * This, DWRITE_TEXT_ALIGNMENT textAlignment);
	STDMETHOD(SetParagraphAlignment) (IDWriteTextLayout * This, DWRITE_PARAGRAPH_ALIGNMENT paragraphAlignment);
	STDMETHOD(SetWordWrapping) (IDWriteTextLayout * This, DWRITE_WORD_WRAPPING wordWrapping);
	STDMETHOD(SetReadingDirection) (IDWriteTextLayout * This, DWRITE_READING_DIRECTION readingDirection);
	STDMETHOD(SetFlowDirection) (IDWriteTextLayout * This, DWRITE_FLOW_DIRECTION flowDirection);
	STDMETHOD(SetIncrementalTabStop) (IDWriteTextLayout * This, FLOAT incrementalTabStop);
	STDMETHOD(SetTrimming) (IDWriteTextLayout * This, DWRITE_TRIMMING const *trimmingOptions, IDWriteInlineObject * trimmingSign);
	STDMETHOD(SetLineSpacing) (IDWriteTextLayout * This, DWRITE_LINE_SPACING_METHOD lineSpacingMethod, FLOAT lineSpacing, FLOAT baseline);
	STDMETHOD_(DWRITE_TEXT_ALIGNMENT, GetTextAlignment) (IDWriteTextLayout * This);
	STDMETHOD_(DWRITE_PARAGRAPH_ALIGNMENT, GetParagraphAlignment) (IDWriteTextLayout * This);
	STDMETHOD_(DWRITE_WORD_WRAPPING, GetWordWrapping) (IDWriteTextLayout * This);
	STDMETHOD_(DWRITE_READING_DIRECTION, GetReadingDirection) (IDWriteTextLayout * This);
	STDMETHOD_(DWRITE_FLOW_DIRECTION, GetFlowDirection) (IDWriteTextLayout * This);
	STDMETHOD_(FLOAT, GetIncrementalTabStop) (IDWriteTextLayout * This);
	STDMETHOD(GetTrimming) (IDWriteTextLayout * This, DWRITE_TRIMMING * trimmingOptions, IDWriteInlineObject ** trimmingSign);
	STDMETHOD(GetLineSpacing) (IDWriteTextLayout * This, DWRITE_LINE_SPACING_METHOD * lineSpacingMethod, FLOAT * lineSpacing, FLOAT * baseline);
	STDMETHOD(GetFontCollection) (IDWriteTextLayout * This, IDWriteFontCollection ** fontCollection);
	STDMETHOD_(UINT32, GetFontFamilyNameLength) (IDWriteTextLayout * This);
	STDMETHOD(GetFontFamilyName) (IDWriteTextLayout * This, WCHAR * fontFamilyName, UINT32 nameSize);
	STDMETHOD_(DWRITE_FONT_WEIGHT, GetFontWeight) (IDWriteTextLayout * This);
	STDMETHOD_(DWRITE_FONT_STYLE, GetFontStyle) (IDWriteTextLayout * This);
	STDMETHOD_(DWRITE_FONT_STRETCH, GetFontStretch) (IDWriteTextLayout * This);
	STDMETHOD_(FLOAT, GetFontSize) (IDWriteTextLayout * This);
	STDMETHOD_(UINT32, GetLocaleNameLength) (IDWriteTextLayout * This);
	STDMETHOD(GetLocaleName) (IDWriteTextLayout * This, WCHAR * localeName, UINT32 nameSize);
	STDMETHOD(SetMaxWidth) (IDWriteTextLayout * This, FLOAT maxWidth);
	STDMETHOD(SetMaxHeight) (IDWriteTextLayout * This, FLOAT maxHeight);
	STDMETHOD(SetFontCollection) (IDWriteTextLayout * This, IDWriteFontCollection * fontCollection, DWRITE_TEXT_RANGE textRange);
	STDMETHOD(SetFontFamilyName) (IDWriteTextLayout * This, WCHAR const *fontFamilyName, DWRITE_TEXT_RANGE textRange);
	STDMETHOD(SetFontWeight) (IDWriteTextLayout * This, DWRITE_FONT_WEIGHT fontWeight, DWRITE_TEXT_RANGE textRange);
	STDMETHOD(SetFontStyle) (IDWriteTextLayout * This, DWRITE_FONT_STYLE fontStyle, DWRITE_TEXT_RANGE textRange);
	STDMETHOD(SetFontStretch) (IDWriteTextLayout * This, DWRITE_FONT_STRETCH fontStretch, DWRITE_TEXT_RANGE textRange);
	STDMETHOD(SetFontSize) (IDWriteTextLayout * This, FLOAT fontSize, DWRITE_TEXT_RANGE textRange);
	STDMETHOD(SetUnderline) (IDWriteTextLayout * This, BOOL hasUnderline, DWRITE_TEXT_RANGE textRange);
	STDMETHOD(SetStrikethrough) (IDWriteTextLayout * This, BOOL hasStrikethrough, DWRITE_TEXT_RANGE textRange);
	STDMETHOD(SetDrawingEffect) (IDWriteTextLayout * This, IUnknown * drawingEffect, DWRITE_TEXT_RANGE textRange);
	STDMETHOD(SetInlineObject) (IDWriteTextLayout * This, IDWriteInlineObject * inlineObject, DWRITE_TEXT_RANGE textRange);
	STDMETHOD(SetTypography) (IDWriteTextLayout * This, IDWriteTypography * typography, DWRITE_TEXT_RANGE textRange);
	STDMETHOD(SetLocaleName) (IDWriteTextLayout * This, WCHAR const *localeName, DWRITE_TEXT_RANGE textRange);
	STDMETHOD_(FLOAT, GetMaxWidth) (IDWriteTextLayout * This);
	STDMETHOD_(FLOAT, GetMaxHeight) (IDWriteTextLayout * This);
	STDMETHOD(GetFontCollection2) (IDWriteTextLayout * This, UINT32 currentPosition, IDWriteFontCollection ** fontCollection, DWRITE_TEXT_RANGE * textRange);
	STDMETHOD(GetFontFamilyNameLength2) (IDWriteTextLayout * This, UINT32 currentPosition, UINT32 * nameLength, DWRITE_TEXT_RANGE * textRange);
	STDMETHOD(GetFontFamilyName2) (IDWriteTextLayout * This, UINT32 currentPosition, WCHAR * fontFamilyName, UINT32 nameSize, DWRITE_TEXT_RANGE * textRange);
	STDMETHOD(GetFontWeight2) (IDWriteTextLayout * This, UINT32 currentPosition, DWRITE_FONT_WEIGHT * fontWeight, DWRITE_TEXT_RANGE * textRange);
	STDMETHOD(GetFontStyle2) (IDWriteTextLayout * This, UINT32 currentPosition, DWRITE_FONT_STYLE * fontStyle, DWRITE_TEXT_RANGE * textRange);
	STDMETHOD(GetFontStretch2) (IDWriteTextLayout * This, UINT32 currentPosition, DWRITE_FONT_STRETCH * fontStretch, DWRITE_TEXT_RANGE * textRange);
	STDMETHOD(GetFontSize2) (IDWriteTextLayout * This, UINT32 currentPosition, FLOAT * fontSize, DWRITE_TEXT_RANGE * textRange);
	STDMETHOD(GetUnderline) (IDWriteTextLayout * This, UINT32 currentPosition, BOOL * hasUnderline, DWRITE_TEXT_RANGE * textRange);
	STDMETHOD(GetStrikethrough) (IDWriteTextLayout * This, UINT32 currentPosition, BOOL * hasStrikethrough, DWRITE_TEXT_RANGE * textRange);
	STDMETHOD(GetDrawingEffect) (IDWriteTextLayout * This, UINT32 currentPosition, IUnknown ** drawingEffect, DWRITE_TEXT_RANGE * textRange);
	STDMETHOD(GetInlineObject) (IDWriteTextLayout * This, UINT32 currentPosition, IDWriteInlineObject ** inlineObject, DWRITE_TEXT_RANGE * textRange);
	STDMETHOD(GetTypography) (IDWriteTextLayout * This, UINT32 currentPosition, IDWriteTypography ** typography, DWRITE_TEXT_RANGE * textRange);
	STDMETHOD(GetLocaleNameLength2) (IDWriteTextLayout * This, UINT32 currentPosition, UINT32 * nameLength, DWRITE_TEXT_RANGE * textRange);
	STDMETHOD(GetLocaleName2) (IDWriteTextLayout * This, UINT32 currentPosition, WCHAR * localeName, UINT32 nameSize, DWRITE_TEXT_RANGE * textRange);
	STDMETHOD(Draw) (IDWriteTextLayout * This, void *clientDrawingContext, IDWriteTextRenderer * renderer, FLOAT originX, FLOAT originY);
	STDMETHOD(GetLineMetrics) (IDWriteTextLayout * This, DWRITE_LINE_METRICS * lineMetrics, UINT32 maxLineCount, UINT32 * actualLineCount);
	STDMETHOD(GetMetrics) (IDWriteTextLayout * This, DWRITE_TEXT_METRICS * textMetrics);
	STDMETHOD(GetOverhangMetrics) (IDWriteTextLayout * This, DWRITE_OVERHANG_METRICS * overhangs);
	STDMETHOD(GetClusterMetrics) (IDWriteTextLayout * This, DWRITE_CLUSTER_METRICS * clusterMetrics, UINT32 maxClusterCount, UINT32 * actualClusterCount);
	STDMETHOD(DetermineMinWidth) (IDWriteTextLayout * This, FLOAT * minWidth);
	STDMETHOD(HitTestPoint) (IDWriteTextLayout * This, FLOAT pointX, FLOAT pointY, BOOL * isTrailingHit, BOOL * isInside, DWRITE_HIT_TEST_METRICS * hitTestMetrics);
	STDMETHOD(HitTestTextPosition) (IDWriteTextLayout * This, UINT32 textPosition, BOOL isTrailingHit, FLOAT * pointX, FLOAT * pointY, DWRITE_HIT_TEST_METRICS * hitTestMetrics);
	STDMETHOD(HitTestTextRange) (IDWriteTextLayout * This, UINT32 textPosition, UINT32 textLength, FLOAT originX, FLOAT originY, DWRITE_HIT_TEST_METRICS * hitTestMetrics, UINT32 maxHitTestMetricsCount, UINT32 * actualHitTestMetricsCount);
	END_INTERFACE
} IDWriteTextLayoutVtbl;
interface IDWriteTextLayout
{
    CONST_VTBL struct IDWriteTextLayoutVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteTextLayout_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteTextLayout_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteTextLayout_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteTextLayout_SetTextAlignment(This, textAlignment)	( ((This)->lpVtbl->SetTextAlignment)(This, textAlignment) )
	#define IDWriteTextLayout_SetParagraphAlignment(This, paragraphAlignment)	( ((This)->lpVtbl->SetParagraphAlignment)(This, paragraphAlignment) )
	#define IDWriteTextLayout_SetWordWrapping(This, wordWrapping)	( ((This)->lpVtbl->SetWordWrapping)(This, wordWrapping) )
	#define IDWriteTextLayout_SetReadingDirection(This, readingDirection)	( ((This)->lpVtbl->SetReadingDirection)(This, readingDirection) )
	#define IDWriteTextLayout_SetFlowDirection(This, flowDirection)	( ((This)->lpVtbl->SetFlowDirection)(This, flowDirection) )
	#define IDWriteTextLayout_SetIncrementalTabStop(This, incrementalTabStop)	( ((This)->lpVtbl->SetIncrementalTabStop)(This, incrementalTabStop) )
	#define IDWriteTextLayout_SetTrimming(This, trimmingOptions, trimmingSign)	( ((This)->lpVtbl->SetTrimming)(This, trimmingOptions, trimmingSign) )
	#define IDWriteTextLayout_SetLineSpacing(This, lineSpacingMethod, lineSpacing, baseline)	( ((This)->lpVtbl->SetLineSpacing)(This, lineSpacingMethod, lineSpacing, baseline) )
	#define IDWriteTextLayout_GetTextAlignment(This)	( ((This)->lpVtbl->GetTextAlignment)(This) )
	#define IDWriteTextLayout_GetParagraphAlignment(This)	( ((This)->lpVtbl->GetParagraphAlignment)(This) )
	#define IDWriteTextLayout_GetWordWrapping(This)	( ((This)->lpVtbl->GetWordWrapping)(This) )
	#define IDWriteTextLayout_GetReadingDirection(This)	( ((This)->lpVtbl->GetReadingDirection)(This) )
	#define IDWriteTextLayout_GetFlowDirection(This)	( ((This)->lpVtbl->GetFlowDirection)(This) )
	#define IDWriteTextLayout_GetIncrementalTabStop(This)	( ((This)->lpVtbl->GetIncrementalTabStop)(This) )
	#define IDWriteTextLayout_GetTrimming(This, trimmingOptions, trimmingSign)	( ((This)->lpVtbl->GetTrimming)(This, trimmingOptions, trimmingSign) )
	#define IDWriteTextLayout_GetLineSpacing(This, lineSpacingMethod, lineSpacing, baseline)	( ((This)->lpVtbl->GetLineSpacing)(This, lineSpacingMethod, lineSpacing, baseline) )
	#define IDWriteTextLayout_GetFontCollection(This, fontCollection)	( ((This)->lpVtbl->GetFontCollection)(This, fontCollection) )
	#define IDWriteTextLayout_GetFontFamilyNameLength(This)	( ((This)->lpVtbl->GetFontFamilyNameLength)(This) )
	#define IDWriteTextLayout_GetFontFamilyName(This, fontFamilyName, nameSize)	( ((This)->lpVtbl->GetFontFamilyName)(This, fontFamilyName, nameSize) )
	#define IDWriteTextLayout_GetFontWeight(This)	( ((This)->lpVtbl->GetFontWeight)(This) )
	#define IDWriteTextLayout_GetFontStyle(This)	( ((This)->lpVtbl->GetFontStyle)(This) )
	#define IDWriteTextLayout_GetFontStretch(This)	( ((This)->lpVtbl->GetFontStretch)(This) )
	#define IDWriteTextLayout_GetFontSize(This)	( ((This)->lpVtbl->GetFontSize)(This) )
	#define IDWriteTextLayout_GetLocaleNameLength(This)	( ((This)->lpVtbl->GetLocaleNameLength)(This) )
	#define IDWriteTextLayout_GetLocaleName(This, localeName, nameSize)	( ((This)->lpVtbl->GetLocaleName)(This, localeName, nameSize) )
	#define IDWriteTextLayout_SetMaxWidth(This, maxWidth)	( ((This)->lpVtbl->SetMaxWidth)(This, maxWidth) )
	#define IDWriteTextLayout_SetMaxHeight(This, maxHeight)	( ((This)->lpVtbl->SetMaxHeight)(This, maxHeight) )
	#define IDWriteTextLayout_SetFontCollection(This, fontCollection, textRange)	( ((This)->lpVtbl->SetFontCollection)(This, fontCollection, textRange) )
	#define IDWriteTextLayout_SetFontFamilyName(This, fontFamilyName, textRange)	( ((This)->lpVtbl->SetFontFamilyName)(This, fontFamilyName, textRange) )
	#define IDWriteTextLayout_SetFontWeight(This,  fontWeight, textRange)	( ((This)->lpVtbl->SetFontWeight)(This,  fontWeight, textRange) )
	#define IDWriteTextLayout_SetFontStyle(This, fontStyle, textRange)	( ((This)->lpVtbl->SetFontStyle)(This, fontStyle, textRange) )
	#define IDWriteTextLayout_SetFontStretch(This, fontStretch, textRange)	( ((This)->lpVtbl->SetFontStretch)(This, fontStretch, textRange) )
	#define IDWriteTextLayout_SetFontSize(This, fontSize, textRange)	( ((This)->lpVtbl->SetFontSize)(This, fontSize, textRange) )
	#define IDWriteTextLayout_SetUnderline(This, hasUnderline, textRange)	( ((This)->lpVtbl->SetUnderline)(This, hasUnderline, textRange) )
	#define IDWriteTextLayout_SetStrikethrough(This, hasStrikethrough, textRange)	( ((This)->lpVtbl->SetStrikethrough)(This, hasStrikethrough, textRange) )
	#define IDWriteTextLayout_SetDrawingEffect(This, drawingEffect, textRange)	( ((This)->lpVtbl->SetDrawingEffect)(This, drawingEffect, textRange) )
	#define IDWriteTextLayout_SetInlineObject(This, inlineObject, textRange)	( ((This)->lpVtbl->SetInlineObject)(This, inlineObject, textRange) )
	#define IDWriteTextLayout_SetTypography(This, typography, textRange)	( ((This)->lpVtbl->SetTypography)(This, typography, textRange) )
	#define IDWriteTextLayout_SetLocaleName(This, localeName, textRange)	( ((This)->lpVtbl->SetLocaleName)(This, localeName, textRange) )
	#define IDWriteTextLayout_GetMaxWidth(This)	( ((This)->lpVtbl->GetMaxWidth)(This) )
	#define IDWriteTextLayout_GetMaxHeight(This)	( ((This)->lpVtbl->GetMaxHeight)(This) )
	#define IDWriteTextLayout_GetFontCollection2(This, currentPosition, fontCollection, textRange)	( ((This)->lpVtbl->GetFontCollection2)(This, currentPosition, fontCollection, textRange) )
	#define IDWriteTextLayout_GetFontFamilyNameLength2(This, currentPosition, nameLength, textRange)	( ((This)->lpVtbl->GetFontFamilyNameLength2)(This, currentPosition, nameLength, textRange) )
	#define IDWriteTextLayout_GetFontFamilyName2(This, currentPosition, fontFamilyName, nameSize, textRange)	( ((This)->lpVtbl->GetFontFamilyName2)(This, currentPosition, fontFamilyName, nameSize, textRange) )
	#define IDWriteTextLayout_GetFontWeight2(This, currentPosition, fontWeight, textRange)	( ((This)->lpVtbl->GetFontWeight2)(This, currentPosition, fontWeight, textRange) )
	#define IDWriteTextLayout_GetFontStyle2(This, currentPosition, fontStyle, textRange)	( ((This)->lpVtbl->GetFontStyle2)(This, currentPosition, fontStyle, textRange) )
	#define IDWriteTextLayout_GetFontStretch2(This, currentPosition, fontStretch, textRange)	( ((This)->lpVtbl->GetFontStretch2)(This, currentPosition, fontStretch, textRange) )
	#define IDWriteTextLayout_GetFontSize2(This, currentPosition, fontSize, textRange)	( ((This)->lpVtbl->GetFontSize2)(This, currentPosition, fontSize, textRange) )
	#define IDWriteTextLayout_GetUnderline(This, currentPosition, hasUnderline, textRange)	( ((This)->lpVtbl->GetUnderline)(This, currentPosition, hasUnderline, textRange) )
	#define IDWriteTextLayout_GetStrikethrough(This, currentPosition, hasStrikethrough, textRange)	( ((This)->lpVtbl->GetStrikethrough)(This, currentPosition, hasStrikethrough, textRange) )
	#define IDWriteTextLayout_GetDrawingEffect(This, currentPosition, drawingEffect, textRange)	( ((This)->lpVtbl->GetDrawingEffect)(This, currentPosition, drawingEffect, textRange) )
	#define IDWriteTextLayout_GetInlineObject(This, currentPosition, inlineObject, textRange)	( ((This)->lpVtbl->GetInlineObject)(This, currentPosition, inlineObject, textRange) )
	#define IDWriteTextLayout_GetTypography(This, currentPosition, typography, textRange)	( ((This)->lpVtbl->GetTypography)(This, currentPosition, typography, textRange) )
	#define IDWriteTextLayout_GetLocaleNameLength2(This, currentPosition, nameLength, textRange)	( ((This)->lpVtbl->GetLocaleNameLength2)(This, currentPosition, nameLength, textRange) )
	#define IDWriteTextLayout_GetLocaleName2(This, currentPosition, localeName, nameSize, textRange)	( ((This)->lpVtbl->GetLocaleName2)(This, currentPosition, localeName, nameSize, textRange) )
	#define IDWriteTextLayout_Draw(This, clientDrawingContext, renderer, originX, originY)	( ((This)->lpVtbl->Draw)(This, clientDrawingContext, renderer, originX, originY) )
	#define IDWriteTextLayout_GetLineMetrics(This, lineMetrics, maxLineCount, actualLineCount)	( ((This)->lpVtbl->GetLineMetrics)(This, lineMetrics, maxLineCount, actualLineCount) )
	#define IDWriteTextLayout_GetMetrics(This, textMetrics)	( ((This)->lpVtbl->GetMetrics)(This, textMetrics) )
	#define IDWriteTextLayout_GetOverhangMetrics(This, overhangs)	( ((This)->lpVtbl->GetOverhangMetrics)(This, overhangs) )
	#define IDWriteTextLayout_GetClusterMetrics(This, clusterMetrics, maxClusterCount, actualClusterCount)	( ((This)->lpVtbl->GetClusterMetrics)(This, clusterMetrics, maxClusterCount, actualClusterCount) )
	#define IDWriteTextLayout_DetermineMinWidth(This, minWidth)	( ((This)->lpVtbl->DetermineMinWidth)(This, minWidth) )
	#define IDWriteTextLayout_HitTestPoint(This, pointX, pointY, isTrailingHit, isInside, hitTestMetrics)	( ((This)->lpVtbl->HitTestPoint)(This, pointX, pointY, isTrailingHit, isInside, hitTestMetrics) )
	#define IDWriteTextLayout_HitTestTextPosition(This, textPosition, isTrailingHit, pointX, pointY, hitTestMetrics)	( ((This)->lpVtbl->HitTestTextPosition)(This, textPosition, isTrailingHit, pointX, pointY, hitTestMetrics) )
	#define IDWriteTextLayout_HitTestTextRange(This, textPosition, textLength, originX, originY, hitTestMetrics, maxHitTestMetricsCount, actualHitTestMetricsCount)
#endif
#endif
#ifndef __IDWriteBitmapRenderTarget_INTERFACE_DEFINED__
#define __IDWriteBitmapRenderTarget_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteBitmapRenderTarget;
typedef struct IDWriteBitmapRenderTargetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteBitmapRenderTarget * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteBitmapRenderTarget * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteBitmapRenderTarget * This);
	STDMETHOD(DrawGlyphRun) (IDWriteBitmapRenderTarget * This, FLOAT baselineOriginX, FLOAT baselineOriginY, DWRITE_MEASURING_MODE measuringMode, DWRITE_GLYPH_RUN const *glyphRun, IDWriteRenderingParams * renderingParams, COLORREF textColor, RECT * blackBoxRect);
	STDMETHOD_(HDC, GetMemoryDC) (IDWriteBitmapRenderTarget * This);
	STDMETHOD_(FLOAT, GetPixelsPerDip) (IDWriteBitmapRenderTarget * This);
	STDMETHOD(SetPixelsPerDip) (IDWriteBitmapRenderTarget * This, FLOAT pixelsPerDip);
	STDMETHOD(GetCurrentTransform) (IDWriteBitmapRenderTarget * This, DWRITE_MATRIX * transform);
	STDMETHOD(SetCurrentTransform) (IDWriteBitmapRenderTarget * This, DWRITE_MATRIX const *transform);
	STDMETHOD(GetSize) (IDWriteBitmapRenderTarget * This, SIZE * size);
	STDMETHOD(Resize) (IDWriteBitmapRenderTarget * This, UINT32 width, UINT32 height);
	END_INTERFACE
} IDWriteBitmapRenderTargetVtbl;
interface IDWriteBitmapRenderTarget
{
    CONST_VTBL struct IDWriteBitmapRenderTargetVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteBitmapRenderTarget_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteBitmapRenderTarget_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteBitmapRenderTarget_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteBitmapRenderTarget_DrawGlyphRun(This, baselineOriginX, baselineOriginY, measuringMode, glyphRun, renderingParams, textColor, blackBoxRect)	( ((This)->lpVtbl->DrawGlyphRun)(This, baselineOriginX, baselineOriginY, measuringMode, glyphRun, renderingParams, textColor, blackBoxRect) )
	#define IDWriteBitmapRenderTarget_GetMemoryDC(This)	( ((This)->lpVtbl->GetMemoryDC)(This) )
	#define IDWriteBitmapRenderTarget_GetPixelsPerDip(This)	( ((This)->lpVtbl->GetPixelsPerDip)(This) )
	#define IDWriteBitmapRenderTarget_SetPixelsPerDip(This, pixelsPerDip)	( ((This)->lpVtbl->SetPixelsPerDip)(This, pixelsPerDip) )
	#define IDWriteBitmapRenderTarget_GetCurrentTransform(This, transform)	( ((This)->lpVtbl->GetCurrentTransform)(This, transform) )
	#define IDWriteBitmapRenderTarget_SetCurrentTransform(This, transform)	( ((This)->lpVtbl->SetCurrentTransform)(This, transform) )
	#define IDWriteBitmapRenderTarget_GetSize(This, size)	( ((This)->lpVtbl->GetSize)(This, size) )
	#define IDWriteBitmapRenderTarget_Resize(This, width, height)	( (WriteBitmapRenderTarget->lpVtbl->Resize)(This, width, height) )
#endif
#endif
#ifndef __IDWriteGdiInterop_INTERFACE_DEFINED__
#define __IDWriteGdiInterop_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteGdiInterop;
typedef struct IDWriteGdiInteropVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteGdiInterop * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteGdiInterop * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteGdiInterop * This);
	STDMETHOD(CreateFontFromLOGFONT) (IDWriteGdiInterop * This, LOGFONTW const *logFont, IDWriteFont ** font);
	STDMETHOD(ConvertFontToLOGFONT) (IDWriteGdiInterop * This, IDWriteFont * font, LOGFONTW * logFont, BOOL * isSystemFont);
	STDMETHOD(ConvertFontFaceToLOGFONT) (IDWriteGdiInterop * This, IDWriteFontFace * font, LOGFONTW * logFont);
	STDMETHOD(CreateFontFaceFromHdc) (IDWriteGdiInterop * This, HDC hdc, IDWriteFontFace ** fontFace);
	STDMETHOD(CreateBitmapRenderTarget) (IDWriteGdiInterop * This, HDC hdc, UINT32 width, UINT32 height, IDWriteBitmapRenderTarget ** renderTarget);
	END_INTERFACE
} IDWriteGdiInteropVtbl;
interface IDWriteGdiInterop
{
    CONST_VTBL struct IDWriteGdiInteropVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteGdiInterop_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteGdiInterop_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteGdiInterop_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteGdiInterop_CreateFontFromLOGFONT(This, logFont, font)	( ((This)->lpVtbl->CreateFontFromLOGFONT)(This, logFont, font) )
	#define IDWriteGdiInterop_ConvertFontToLOGFONT(This, font, logFont, isSystemFont)	( ((This)->lpVtbl->ConvertFontToLOGFONT)(This, font, logFont, isSystemFont) )
	#define IDWriteGdiInterop_ConvertFontFaceToLOGFONT(This, font, logFont)	( ((This)->lpVtbl->ConvertFontFaceToLOGFONT)(This, font, logFont) )
	#define IDWriteGdiInterop_CreateFontFaceFromHdc(This, hdc, fontFace)	( ((This)->lpVtbl->CreateFontFaceFromHdc)(This, hdc, fontFace) )
	#define IDWriteGdiInterop_CreateBitmapRenderTarget(This, hdc, width, height, renderTarget)	( (Interop->lpVtbl->CreateBitmapRenderTarget)(This, hdc, width, height, renderTarget) )
#endif
#endif
typedef enum
{
    DWRITE_TEXTURE_ALIASED_1x1,
    DWRITE_TEXTURE_CLEARTYPE_3x1

} DWRITE_TEXTURE_TYPE;
#define DWRITE_ALPHA_MAX 255
#ifndef __IDWriteGlyphRunAnalysis_INTERFACE_DEFINED__
#define __IDWriteGlyphRunAnalysis_INTERFACE_DEFINED__ 
extern const IID IID_IDWriteGlyphRunAnalysis;
typedef struct IDWriteGlyphRunAnalysisVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteGlyphRunAnalysis * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteGlyphRunAnalysis * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteGlyphRunAnalysis * This);
	STDMETHOD(GetAlphaTextureBounds) (IDWriteGlyphRunAnalysis * This, DWRITE_TEXTURE_TYPE textureType, RECT * textureBounds);
	STDMETHOD(CreateAlphaTexture) (IDWriteGlyphRunAnalysis * This, DWRITE_TEXTURE_TYPE textureType, RECT const *textureBounds, BYTE * alphaValues, UINT32 bufferSize);
	STDMETHOD(GetAlphaBlendParams) (IDWriteGlyphRunAnalysis * This, IDWriteRenderingParams * renderingParams, FLOAT * blendGamma, FLOAT * blendEnhancedContrast, FLOAT * blendClearTypeLevel);
	END_INTERFACE
} IDWriteGlyphRunAnalysisVtbl;
interface IDWriteGlyphRunAnalysis
{
    CONST_VTBL struct IDWriteGlyphRunAnalysisVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteGlyphRunAnalysis_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteGlyphRunAnalysis_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteGlyphRunAnalysis_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteGlyphRunAnalysis_GetAlphaTextureBounds(This, textureType, textureBounds)	( ((This)->lpVtbl->GetAlphaTextureBounds)(This, textureType, textureBounds) )
	#define IDWriteGlyphRunAnalysis_CreateAlphaTexture(This, textureType, textureBounds, alphaValues, bufferSize)	( ((This)->lpVtbl->CreateAlphaTexture)(This, textureType, textureBounds, alphaValues, bufferSize) )
	#define IDWriteGlyphRunAnalysis_GetAlphaBlendParams(This, renderingParams, blendGamma, blendEnhancedContrast, blendClearTypeLevel)	( (WriteGlyphRunAnalysis->lpVtbl->GetAlphaBlendParams)(This, renderingParams, blendGamma, blendEnhancedContrast, blendClearTypeLevel) )
#endif
#endif
#ifndef __IDWriteFactory_INTERFACE_DEFINED__
#define __IDWriteFactory_INTERFACE_DEFINED__ 
//extern const IID IID_IDWriteFactory;
DEFINE_GUID(IID_IDWriteFactory, 0xb859ee5a, 0xd838, 0x4b5b, 0xa2, 0xe8, 0x1a, 0xdc, 0x7d, 0x93, 0xdb, 0x48);
typedef struct IDWriteFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDWriteFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDWriteFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDWriteFactory * This);
	STDMETHOD(GetSystemFontCollection) (IDWriteFactory * This, IDWriteFontCollection ** fontCollection, BOOL checkForUpdates);
	STDMETHOD(CreateCustomFontCollection) (IDWriteFactory * This, IDWriteFontCollectionLoader * collectionLoader, void const *collectionKey, UINT32 collectionKeySize, IDWriteFontCollection ** fontCollection);
	STDMETHOD(RegisterFontCollectionLoader) (IDWriteFactory * This, IDWriteFontCollectionLoader * fontCollectionLoader);
	STDMETHOD(UnregisterFontCollectionLoader) (IDWriteFactory * This, IDWriteFontCollectionLoader * fontCollectionLoader);
	STDMETHOD(CreateFontFileReference) (IDWriteFactory * This, WCHAR const *filePath, FILETIME const *lastWriteTime, IDWriteFontFile ** fontFile);
	STDMETHOD(CreateCustomFontFileReference) (IDWriteFactory * This, void const *fontFileReferenceKey, UINT32 fontFileReferenceKeySize, IDWriteFontFileLoader * fontFileLoader, IDWriteFontFile ** fontFile);
	STDMETHOD(CreateFontFace) (IDWriteFactory * This, DWRITE_FONT_FACE_TYPE fontFaceType, UINT32 numberOfFiles, IDWriteFontFile * const *fontFiles, UINT32 faceIndex, DWRITE_FONT_SIMULATIONS fontFaceSimulationFlags, IDWriteFontFace ** fontFace);
	STDMETHOD(CreateRenderingParams) (IDWriteFactory * This, IDWriteRenderingParams ** renderingParams);
	STDMETHOD(CreateMonitorRenderingParams) (IDWriteFactory * This, HMONITOR monitor, IDWriteRenderingParams ** renderingParams);
	STDMETHOD(CreateCustomRenderingParams) (IDWriteFactory * This, FLOAT gamma, FLOAT enhancedContrast, FLOAT clearTypeLevel, DWRITE_PIXEL_GEOMETRY pixelGeometry, DWRITE_RENDERING_MODE renderingMode, IDWriteRenderingParams ** renderingParams);
	STDMETHOD(RegisterFontFileLoader) (IDWriteFactory * This, IDWriteFontFileLoader * fontFileLoader);
	STDMETHOD(UnregisterFontFileLoader) (IDWriteFactory * This, IDWriteFontFileLoader * fontFileLoader);
	STDMETHOD(CreateTextFormat) (IDWriteFactory * This, WCHAR const *fontFamilyName, IDWriteFontCollection * fontCollection, DWRITE_FONT_WEIGHT fontWeight, DWRITE_FONT_STYLE fontStyle, DWRITE_FONT_STRETCH fontStretch, FLOAT fontSize, WCHAR const *localeName, IDWriteTextFormat ** textFormat);
	STDMETHOD(CreateTypography) (IDWriteFactory * This, IDWriteTypography ** typography);
	STDMETHOD(GetGdiInterop) (IDWriteFactory * This, IDWriteGdiInterop ** gdiInterop);
	STDMETHOD(CreateTextLayout) (IDWriteFactory * This, WCHAR const *string, UINT32 stringLength, IDWriteTextFormat * textFormat, FLOAT maxWidth, FLOAT maxHeight, IDWriteTextLayout ** textLayout);
	STDMETHOD(CreateGdiCompatibleTextLayout) (IDWriteFactory * This, WCHAR const *string, UINT32 stringLength, IDWriteTextFormat * textFormat, FLOAT layoutWidth, FLOAT layoutHeight, FLOAT pixelsPerDip, DWRITE_MATRIX const *transform, BOOL useGdiNatural, IDWriteTextLayout ** textLayout);
	STDMETHOD(CreateEllipsisTrimmingSign) (IDWriteFactory * This, IDWriteTextFormat * textFormat, IDWriteInlineObject ** trimmingSign);
	STDMETHOD(CreateTextAnalyzer) (IDWriteFactory * This, IDWriteTextAnalyzer ** textAnalyzer);
	STDMETHOD(CreateNumberSubstitution) (IDWriteFactory * This, DWRITE_NUMBER_SUBSTITUTION_METHOD substitutionMethod, WCHAR const *localeName, BOOL ignoreUserOverride, IDWriteNumberSubstitution ** numberSubstitution);
	STDMETHOD(CreateGlyphRunAnalysis) (IDWriteFactory * This, DWRITE_GLYPH_RUN const *glyphRun, FLOAT pixelsPerDip, DWRITE_MATRIX const *transform, DWRITE_RENDERING_MODE renderingMode, DWRITE_MEASURING_MODE measuringMode, FLOAT baselineOriginX, FLOAT baselineOriginY, IDWriteGlyphRunAnalysis ** glyphRunAnalysis);
	END_INTERFACE
} IDWriteFactoryVtbl;
interface IDWriteFactory
{
    CONST_VTBL struct IDWriteFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
	#define IDWriteFactory_QueryInterface(This, riid, ppvObject)	( ((This)->lpVtbl->QueryInterface)(This, riid, ppvObject) )
	#define IDWriteFactory_AddRef(This)	( ((This)->lpVtbl->AddRef)(This) )
	#define IDWriteFactory_Release(This)	( ((This)->lpVtbl->Release)(This) )
	#define IDWriteFactory_GetSystemFontCollection(This, fontCollection, checkForUpdates)	( ((This)->lpVtbl->GetSystemFontCollection)(This, fontCollection, checkForUpdates) )
	#define IDWriteFactory_CreateCustomFontCollection(This, collectionLoader, collectionKey, collectionKeySize, fontCollection)	( ((This)->lpVtbl->CreateCustomFontCollection)(This, collectionLoader, collectionKey, collectionKeySize, fontCollection) )
	#define IDWriteFactory_RegisterFontCollectionLoader(This, fontCollectionLoader)	( ((This)->lpVtbl->RegisterFontCollectionLoader)(This, fontCollectionLoader) )
	#define IDWriteFactory_UnregisterFontCollectionLoader(This, fontCollectionLoader)	( ((This)->lpVtbl->UnregisterFontCollectionLoader)(This, fontCollectionLoader) )
	#define IDWriteFactory_CreateFontFileReference(This, filePath, lastWriteTime, fontFile)	( ((This)->lpVtbl->CreateFontFileReference)(This, filePath, lastWriteTime, fontFile) )
	#define IDWriteFactory_CreateCustomFontFileReference(This, fontFileReferenceKey, fontFileReferenceKeySize, fontFileLoader, fontFile)	( ((This)->lpVtbl->CreateCustomFontFileReference)(This, fontFileReferenceKey, fontFileReferenceKeySize, fontFileLoader, fontFile) )
	#define IDWriteFactory_CreateFontFace(This, fontFaceType, numberOfFiles, fontFiles, faceIndex, fontFaceSimulationFlags, fontFace)	( ((This)->lpVtbl->CreateFontFace)(This, fontFaceType, numberOfFiles, fontFiles, faceIndex, fontFaceSimulationFlags, fontFace) )
	#define IDWriteFactory_CreateRenderingParams(This, renderingParams)	( ((This)->lpVtbl->CreateRenderingParams)(This, renderingParams) )
	#define IDWriteFactory_CreateMonitorRenderingParams(This, monitor, renderingParams)	( ((This)->lpVtbl->CreateMonitorRenderingParams)(This, monitor, renderingParams) )
	#define IDWriteFactory_CreateCustomRenderingParams(This, gamma, enhancedContrast, clearTypeLevel, pixelGeometry, renderingMode, renderingParams)	( ((This)->lpVtbl->CreateCustomRenderingParams)(This, gamma, enhancedContrast, clearTypeLevel, pixelGeometry, renderingMode, renderingParams) )
	#define IDWriteFactory_RegisterFontFileLoader(This, fontFileLoader)	( ((This)->lpVtbl->RegisterFontFileLoader)(This, fontFileLoader) )
	#define IDWriteFactory_UnregisterFontFileLoader(This, fontFileLoader)	( ((This)->lpVtbl->UnregisterFontFileLoader)(This, fontFileLoader) )
	#define IDWriteFactory_CreateTextFormat(This, fontFamilyName, fontCollection, fontWeight, fontStyle, fontStretch, fontSize, localeName, textFormat)	( ((This)->lpVtbl->CreateTextFormat)(This, fontFamilyName, fontCollection, fontWeight, fontStyle, fontStretch, fontSize, localeName, textFormat) )
	#define IDWriteFactory_CreateTypography(This, typography)	( ((This)->lpVtbl->CreateTypography)(This, typography) )
	#define IDWriteFactory_GetGdiInterop(This, gdiInterop)	( ((This)->lpVtbl->GetGdiInterop)(This, gdiInterop) )
	#define IDWriteFactory_CreateTextLayout(This, string, stringLength, textFormat, maxWidth, maxHeight, textLayout)	( ((This)->lpVtbl->CreateTextLayout)(This, string, stringLength, textFormat, maxWidth, maxHeight, textLayout) )
	#define IDWriteFactory_CreateGdiCompatibleTextLayout(This, string, stringLength, textFormat, layoutWidth, layoutHeight, pixelsPerDip, transform, useGdiNatural, textLayout)	( ((This)->lpVtbl->CreateGdiCompatibleTextLayout)(This, string, stringLength, textFormat, layoutWidth, layoutHeight, pixelsPerDip, transform, useGdiNatural, textLayout) )
	#define IDWriteFactory_CreateEllipsisTrimmingSign(This, textFormat, trimmingSign)	( ((This)->lpVtbl->CreateEllipsisTrimmingSign)(This, textFormat, trimmingSign) )
	#define IDWriteFactory_CreateTextAnalyzer(This, textAnalyzer)	( ((This)->lpVtbl->CreateTextAnalyzer)(This, textAnalyzer) )
	#define IDWriteFactory_CreateNumberSubstitution(This, substitutionMethod, localeName, ignoreUserOverride, numberSubstitution)	( ((This)->lpVtbl->CreateNumberSubstitution)(This, substitutionMethod, localeName, ignoreUserOverride, numberSubstitution) )
	#define IDWriteFactory_CreateGlyphRunAnalysis(This, glyphRun, pixelsPerDip, transform, renderingMode, measuringMode, baselineOriginX, baselineOriginY, glyphRunAnalysis)
#endif
#endif
extern HRESULT DWRITE_EXPORT DWriteCreateFactory(DWRITE_FACTORY_TYPE factoryType, REFIID iid, IUnknown **factory);
#define FACILITY_DWRITE 0x898
#define DWRITE_ERR_BASE 0x5000
#define MAKE_DWRITE_HR(severity, code) MAKE_HRESULT(severity, FACILITY_DWRITE, (DWRITE_ERR_BASE + code))
#define MAKE_DWRITE_HR_ERR(code) MAKE_DWRITE_HR(SEVERITY_ERROR, code)
#define DWRITE_E_FILEFORMAT             MAKE_DWRITE_HR_ERR(0x000)
#define DWRITE_E_UNEXPECTED             MAKE_DWRITE_HR_ERR(0x001)
#define DWRITE_E_NOFONT                 MAKE_DWRITE_HR_ERR(0x002)
#define DWRITE_E_FILENOTFOUND           MAKE_DWRITE_HR_ERR(0x003)
#define DWRITE_E_FILEACCESS             MAKE_DWRITE_HR_ERR(0x004)
#define DWRITE_E_FONTCOLLECTIONOBSOLETE MAKE_DWRITE_HR_ERR(0x005)
#define DWRITE_E_ALREADYREGISTERED      MAKE_DWRITE_HR_ERR(0x006)
#endif


