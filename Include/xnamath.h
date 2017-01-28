/*+@@file@@----------------------------------------------------------------*//*!
 \file		xnamath.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Nov 20 16:39:15 2016
 \date		Modified on Sun Nov 20 16:39:15 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#ifndef __XNAMATH_H__
#define __XNAMATH_H__
#ifdef __XBOXMATH_H__
#error XNAMATH and XBOXMATH are incompatible in the same compilation module. Use one or the other.
#endif
#define XNAMATH_VERSION 203
#if !defined(_XM_X64_) && !defined(_XM_X86_)
#if defined(_M_AMD64) || defined(_AMD64_)
#define _XM_X64_
#elif defined(_M_IX86) || defined(_X86_)
#define _XM_X86_
#endif
#endif
#if !defined(_XM_BIGENDIAN_) && !defined(_XM_LITTLEENDIAN_)
#if defined(_XM_X64_) || defined(_XM_X86_)
#define _XM_LITTLEENDIAN_
#elif defined(_XBOX_VER)
#define _XM_BIGENDIAN_
#else
#error xnamath.h only supports x86, x64, or XBox 360 targets
#endif
#endif
#if defined(_XM_X86_) || defined(_XM_X64_)
#define _XM_SSE_INTRINSICS_
#elif defined(_XBOX_VER)
#if !defined(__VMX128_SUPPORTED) && !defined(_XM_NO_INTRINSICS_)
#error xnamath.h requires VMX128 compiler support for XBOX 360
#endif
#define _XM_VMX128_INTRINSICS_
#else
#error xnamath.h only supports x86, x64, or XBox 360 targets
#endif
#if defined(_XM_SSE_INTRINSICS_)
#ifndef _XM_NO_INTRINSICS_
#include <xmmintrin.h>
#include <emmintrin.h>
#endif
#elif defined(_XM_VMX128_INTRINSICS_)
#error This version of xnamath.h is for Windows use only
#endif
#include <math.h>
#if !defined(XMINLINE)
#if !defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#define XMINLINE __inline
#else
#define XMINLINE __forceinline
#endif
#endif
#if !defined(XMFINLINE)
#define XMFINLINE __forceinline
#endif
#if !defined(XMDEBUG)
#if defined(_DEBUG)
#define XMDEBUG
#endif
#endif
#if !defined(XMASSERT)
#if defined(_PREFAST_)
#define XMASSERT(Expression) #elif defined(XMDEBUG)
#define XMASSERT(Expression) ((VOID)((Expression) || (XMAssert(#Expression, __FILE__, __LINE__), 0)))
#else
#define XMASSERT(Expression) ((VOID)0)
#endif
#endif
#if !defined(XM_NO_ALIGNMENT)
#define _DECLSPEC_ALIGN_16_   __declspec(align(16))
#else
#define _DECLSPEC_ALIGN_16_
#endif
#if defined(_MSC_VER) && (_MSC_VER<1500) && (_MSC_VER>=1400)
#define _XM_ISVS2005_
#endif
#define XM_PI               3.141592654f
#define XM_2PI              6.283185307f
#define XM_1DIVPI           0.318309886f
#define XM_1DIV2PI          0.159154943f
#define XM_PIDIV2           1.570796327f
#define XM_PIDIV4           0.785398163f
#define XM_SELECT_0         0x00000000
#define XM_SELECT_1         0xFFFFFFFF
#define XM_PERMUTE_0X       0x00010203
#define XM_PERMUTE_0Y       0x04050607
#define XM_PERMUTE_0Z       0x08090A0B
#define XM_PERMUTE_0W       0x0C0D0E0F
#define XM_PERMUTE_1X       0x10111213
#define XM_PERMUTE_1Y       0x14151617
#define XM_PERMUTE_1Z       0x18191A1B
#define XM_PERMUTE_1W       0x1C1D1E1F
#define XM_CRMASK_CR6       0x000000F0
#define XM_CRMASK_CR6TRUE   0x00000080
#define XM_CRMASK_CR6FALSE  0x00000020
#define XM_CRMASK_CR6BOUNDS XM_CRMASK_CR6FALSE
#define XM_CACHE_LINE_SIZE  64
XMFINLINE FLOAT XMConvertToRadians(FLOAT fDegrees) { return fDegrees * (XM_PI / 180.0f); }
XMFINLINE FLOAT XMConvertToDegrees(FLOAT fRadians) { return fRadians * (180.0f / XM_PI); }
#define XMComparisonAllTrue(CR)            (((CR) & XM_CRMASK_CR6TRUE) == XM_CRMASK_CR6TRUE)
#define XMComparisonAnyTrue(CR)            (((CR) & XM_CRMASK_CR6FALSE) != XM_CRMASK_CR6FALSE)
#define XMComparisonAllFalse(CR)           (((CR) & XM_CRMASK_CR6FALSE) == XM_CRMASK_CR6FALSE)
#define XMComparisonAnyFalse(CR)           (((CR) & XM_CRMASK_CR6TRUE) != XM_CRMASK_CR6TRUE)
#define XMComparisonMixed(CR)              (((CR) & XM_CRMASK_CR6) == 0)
#define XMComparisonAllInBounds(CR)        (((CR) & XM_CRMASK_CR6BOUNDS) == XM_CRMASK_CR6BOUNDS)
#define XMComparisonAnyOutOfBounds(CR)     (((CR) & XM_CRMASK_CR6BOUNDS) != XM_CRMASK_CR6BOUNDS)
#define XMMin(a, b) (((a) < (b)) ? (a) : (b))
#define XMMax(a, b) (((a) > (b)) ? (a) : (b))
#if !defined (_XM_X86_) && !defined(_XM_X64_)
#pragma bitfield_order(push)
#pragma bitfield_order(lsb_to_msb)
#endif
#if defined(_XM_NO_INTRINSICS_) && !defined(_XBOX_VER)
typedef struct __vector4
{
    union
    {
        float        vector4_f32[4];
        unsigned int vector4_u32[4];
#ifndef XM_STRICT_VECTOR4
        struct
        {
            FLOAT x;
            FLOAT y;
            FLOAT z;
            FLOAT w;
        };
        FLOAT v[4];
        UINT  u[4];
#endif
    };
} __vector4;
#endif
#if (defined (_XM_X86_) || defined(_XM_X64_)) && defined(_XM_NO_INTRINSICS_)
typedef UINT __vector4i[4];
#else
typedef __declspec(align(16)) UINT __vector4i[4];
#endif
#if defined(_XM_SSE_INTRINSICS_) && !defined(_XM_NO_INTRINSICS_)
typedef __m128 XMVECTOR;
#else
typedef __vector4 XMVECTOR;
#endif
typedef  struct XMVECTORF32 {
    union {
        float f[4];
        XMVECTOR v;
    };

} XMVECTORF32;
typedef struct XMVECTORI32 {
    union {
        INT i[4];
        XMVECTOR v;
    };

} XMVECTORI32;
typedef  struct XMVECTORU8 {
    union {
        BYTE u[16];
        XMVECTOR v;
    };

} XMVECTORU8;
typedef  struct XMVECTORU32 {
    union {
        UINT u[4];
        XMVECTOR v;
    };

} XMVECTORU32;
#if defined(_XM_VMX128_INTRINSICS_) && !defined(_XM_NO_INTRINSICS_)
typedef const XMVECTOR FXMVECTOR;
#elif defined(_XM_X86_) && !defined(_XM_NO_INTRINSICS_)
typedef const XMVECTOR FXMVECTOR;
#elif defined(__cplusplus)
typedef const XMVECTOR& FXMVECTOR;
#else
typedef const XMVECTOR FXMVECTOR;
#endif
#if defined(_XM_VMX128_INTRINSICS_) && !defined(_XM_NO_INTRINSICS_)
typedef const XMVECTOR CXMVECTOR;
#elif defined(__cplusplus)
typedef const XMVECTOR& CXMVECTOR;
#else
typedef const XMVECTOR CXMVECTOR;
#endif
#if defined(__cplusplus) && !defined(XM_NO_OPERATOR_OVERLOADS)
XMVECTOR    operator+ (FXMVECTOR V);
XMVECTOR    operator- (FXMVECTOR V);
XMVECTOR&   operator+= (XMVECTOR& V1, FXMVECTOR V2);
XMVECTOR&   operator-= (XMVECTOR& V1, FXMVECTOR V2);
XMVECTOR&   operator*= (XMVECTOR& V1, FXMVECTOR V2);
XMVECTOR&   operator/= (XMVECTOR& V1, FXMVECTOR V2);
XMVECTOR&   operator*= (XMVECTOR& V, FLOAT S);
XMVECTOR&   operator/= (XMVECTOR& V, FLOAT S);
XMVECTOR    operator+ (FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR    operator- (FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR    operator* (FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR    operator/ (FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR    operator* (FXMVECTOR V, FLOAT S);
XMVECTOR    operator* (FLOAT S, FXMVECTOR V);
XMVECTOR    operator/ (FXMVECTOR V, FLOAT S);
#endif
#if (defined(_XM_X86_) || defined(_XM_X64_)) && defined(_XM_NO_INTRINSICS_)
typedef struct _XMMATRIX
#else
typedef _DECLSPEC_ALIGN_16_ struct _XMMATRIX
#endif
{
    union
    {
        XMVECTOR r[4];
        struct
        {
            FLOAT _11, _12, _13, _14;
            FLOAT _21, _22, _23, _24;
            FLOAT _31, _32, _33, _34;
            FLOAT _41, _42, _43, _44;
        };
        FLOAT m[4][4];
    };

} XMMATRIX;
#if defined(_XM_VMX128_INTRINSICS_)
typedef const XMMATRIX CXMMATRIX;
#elif defined(__cplusplus)
typedef const XMMATRIX& CXMMATRIX;
#else
typedef const XMMATRIX CXMMATRIX;
#endif
typedef USHORT HALF;
typedef struct _XMFLOAT2
{
    FLOAT x;
    FLOAT y;

} XMFLOAT2;

typedef XMFLOAT2 XMFLOAT2A;

typedef struct _XMHALF2
{
    HALF x;
    HALF y;

} XMHALF2;
typedef struct _XMSHORTN2
{
    SHORT x;
    SHORT y;

} XMSHORTN2;
typedef struct _XMSHORT2
{
    SHORT x;
    SHORT y;

} XMSHORT2;
typedef struct _XMUSHORTN2
{
    USHORT x;
    USHORT y;

} XMUSHORTN2;
typedef struct _XMUSHORT2
{
    USHORT x;
    USHORT y;

} XMUSHORT2;
typedef struct _XMFLOAT3
{
    FLOAT x;
    FLOAT y;
    FLOAT z;

} XMFLOAT3;

typedef XMFLOAT3 XMFLOAT3A; 

typedef struct _XMHENDN3
{
    union
    {
        struct
        {
            INT  x   : 11;
            INT  y   : 11;
            INT  z   : 10;
        };
        UINT v;
    };

} XMHENDN3;
typedef struct _XMHEND3
{
    union
    {
        struct
        {
            INT  x   : 11;
            INT  y   : 11;
            INT  z   : 10;
        };
        UINT v;
    };

} XMHEND3;
typedef struct _XMUHENDN3
{
    union
    {
        struct
        {
            UINT  x  : 11;
            UINT  y  : 11;
            UINT  z  : 10;
        };
        UINT v;
    };

} XMUHENDN3;
typedef struct _XMUHEND3
{
    union
    {
        struct
        {
            UINT  x  : 11;
            UINT  y  : 11;
            UINT  z  : 10;
        };
        UINT v;
    };

} XMUHEND3;
typedef struct _XMDHENN3
{
    union
    {
        struct
        {
            INT  x   : 10;
            INT  y   : 11;
            INT  z   : 11;
        };
        UINT v;
    };

} XMDHENN3;
typedef struct _XMDHEN3
{
    union
    {
        struct
        {
            INT  x   : 10;
            INT  y   : 11;
            INT  z   : 11;
        };
        UINT v;
    };

} XMDHEN3;
typedef struct _XMUDHENN3
{
    union
    {
        struct
        {
            UINT  x  : 10;
            UINT  y  : 11;
            UINT  z  : 11;
        };
        UINT v;
    };

} XMUDHENN3;
typedef struct _XMUDHEN3
{
    union
    {
        struct
        {
            UINT  x  : 10;
            UINT  y  : 11;
            UINT  z  : 11;
        };
        UINT v;
    };

} XMUDHEN3;
typedef struct _XMU565
{
    union
    {
        struct
        {
            USHORT x  : 5;
            USHORT y  : 6;
            USHORT z  : 5;
        };
        USHORT v;
    };

} XMU565;
typedef struct _XMFLOAT3PK
{
    union
    {
        struct
        {
            UINT xm : 6;
            UINT xe : 5;
            UINT ym : 6;
            UINT ye : 5;
            UINT zm : 5;
            UINT ze : 5;
        };
        UINT v;
    };

} XMFLOAT3PK;
typedef struct _XMFLOAT3SE
{
    union
    {
        struct
        {
            UINT xm : 9;
            UINT ym : 9;
            UINT zm : 9;
            UINT e  : 5;
        };
        UINT v;
    };

} XMFLOAT3SE;
typedef struct _XMFLOAT4
{
    FLOAT x;
    FLOAT y;
    FLOAT z;
    FLOAT w;

} XMFLOAT4;

typedef XMFLOAT4 XMFLOAT4A;

typedef struct _XMHALF4
{
    HALF x;
    HALF y;
    HALF z;
    HALF w;

} XMHALF4;
typedef struct _XMSHORTN4
{
    SHORT x;
    SHORT y;
    SHORT z;
    SHORT w;

} XMSHORTN4;
typedef struct _XMSHORT4
{
    SHORT x;
    SHORT y;
    SHORT z;
    SHORT w;

} XMSHORT4;
typedef struct _XMUSHORTN4
{
    USHORT x;
    USHORT y;
    USHORT z;
    USHORT w;

} XMUSHORTN4;
typedef struct _XMUSHORT4
{
    USHORT x;
    USHORT y;
    USHORT z;
    USHORT w;

} XMUSHORT4;
typedef struct _XMXDECN4
{
    union
    {
        struct
        {
            INT  x   : 10;
            INT  y   : 10;
            INT  z   : 10;
            UINT w   : 2;
        };
        UINT v;
    };

} XMXDECN4;
typedef struct _XMXDEC4
{
    union
    {
        struct
        {
            INT  x   : 10;
            INT  y   : 10;
            INT  z   : 10;
            UINT w   : 2;
        };
        UINT v;
    };

} XMXDEC4;
typedef struct _XMDECN4
{
    union
    {
        struct
        {
            INT  x   : 10;
            INT  y   : 10;
            INT  z   : 10;
            INT  w   : 2;
        };
        UINT v;
    };

} XMDECN4;
typedef struct _XMDEC4
{
    union
    {
        struct
        {
            INT  x   : 10;
            INT  y   : 10;
            INT  z   : 10;
            INT  w   : 2;
        };
        UINT v;
    };

} XMDEC4;
typedef struct _XMUDECN4
{
    union
    {
        struct
        {
            UINT  x  : 10;
            UINT  y  : 10;
            UINT  z  : 10;
            UINT  w  : 2;
        };
        UINT v;
    };

} XMUDECN4;
typedef struct _XMUDEC4
{
    union
    {
        struct
        {
            UINT  x  : 10;
            UINT  y  : 10;
            UINT  z  : 10;
            UINT  w  : 2;
        };
        UINT v;
    };

} XMUDEC4;
typedef struct _XMXICON4
{
    union
    {
        struct
        {
            INT64  x   : 20;
            INT64  y   : 20;
            INT64  z   : 20;
            UINT64 w   : 4;
        };
        UINT64 v;
    };

} XMXICON4;
typedef struct _XMXICO4
{
    union
    {
        struct
        {
            INT64  x   : 20;
            INT64  y   : 20;
            INT64  z   : 20;
            UINT64 w   : 4;
        };
        UINT64 v;
    };

} XMXICO4;
typedef struct _XMICON4
{
    union
    {
        struct
        {
            INT64  x   : 20;
            INT64  y   : 20;
            INT64  z   : 20;
            INT64  w   : 4;
        };
        UINT64 v;
    };

} XMICON4;
typedef struct _XMICO4
{
    union
    {
        struct
        {
            INT64  x   : 20;
            INT64  y   : 20;
            INT64  z   : 20;
            INT64  w   : 4;
        };
        UINT64 v;
    };

} XMICO4;
typedef struct _XMUICON4
{
    union
    {
        struct
        {
            UINT64  x  : 20;
            UINT64  y  : 20;
            UINT64  z  : 20;
            UINT64  w  : 4;
        };
        UINT64 v;
    };

} XMUICON4;
typedef struct _XMUICO4
{
    union
    {
        struct
        {
            UINT64  x  : 20;
            UINT64  y  : 20;
            UINT64  z  : 20;
            UINT64  w  : 4;
        };
        UINT64 v;
    };

} XMUICO4;
typedef struct _XMCOLOR
{
    union
    {
        struct
        {
            UINT b    : 8;
            UINT g    : 8;
            UINT r    : 8;
            UINT a    : 8;
        };
        UINT c;
    };

} XMCOLOR;
typedef struct _XMBYTEN4
{
    union
    {
        struct
        {
            CHAR x;
            CHAR y;
            CHAR z;
            CHAR w;
        };
        UINT v;
    };

} XMBYTEN4;
typedef struct _XMBYTE4
{
    union
    {
        struct
        {
            CHAR x;
            CHAR y;
            CHAR z;
            CHAR w;
        };
        UINT v;
    };

} XMBYTE4;
typedef struct _XMUBYTEN4
{
    union
    {
        struct
        {
            BYTE x;
            BYTE y;
            BYTE z;
            BYTE w;
        };
        UINT v;
    };

} XMUBYTEN4;
typedef struct _XMUBYTE4
{
    union
    {
        struct
        {
            BYTE x;
            BYTE y;
            BYTE z;
            BYTE w;
        };
        UINT v;
    };

} XMUBYTE4;
typedef struct _XMUNIBBLE4
{
    union
    {
        struct
        {
            USHORT x  : 4;
            USHORT y  : 4;
            USHORT z  : 4;
            USHORT w  : 4;
        };
        USHORT v;
    };

} XMUNIBBLE4;
typedef struct _XMU555
{
    union
    {
        struct
        {
            USHORT x  : 5;
            USHORT y  : 5;
            USHORT z  : 5;
            USHORT w  : 1;
        };
        USHORT v;
    };

} XMU555;
typedef struct _XMFLOAT3X3
{
    union
    {
        struct
        {
            FLOAT _11, _12, _13;
            FLOAT _21, _22, _23;
            FLOAT _31, _32, _33;
        };
        FLOAT m[3][3];
    };

} XMFLOAT3X3;
typedef struct _XMFLOAT4X3
{
    union
    {
        struct
        {
            FLOAT _11, _12, _13;
            FLOAT _21, _22, _23;
            FLOAT _31, _32, _33;
            FLOAT _41, _42, _43;
        };
        FLOAT m[4][3];
    };

} XMFLOAT4X3;

typedef XMFLOAT4X3 XMFLOAT4X3A;

typedef struct _XMFLOAT4X4
{
    union
    {
        struct
        {
            FLOAT _11, _12, _13, _14;
            FLOAT _21, _22, _23, _24;
            FLOAT _31, _32, _33, _34;
            FLOAT _41, _42, _43, _44;
        };
        FLOAT m[4][4];
    };

} XMFLOAT4X4;

typedef XMFLOAT4X4 XMFLOAT4X4A;

#if !defined(_XM_X86_) && !defined(_XM_X64_)
#pragma bitfield_order(pop)
#endif
#if !defined(_XM_NO_INTRINSICS_) && defined(_XM_VMX128_INTRINSICS_)
#else
XMVECTOR        XMConvertVectorIntToFloat(FXMVECTOR VInt, UINT DivExponent);
XMVECTOR        XMConvertVectorFloatToInt(FXMVECTOR VFloat, UINT MulExponent);
XMVECTOR        XMConvertVectorUIntToFloat(FXMVECTOR VUInt, UINT DivExponent);
XMVECTOR        XMConvertVectorFloatToUInt(FXMVECTOR VFloat, UINT MulExponent);
#endif
FLOAT XMConvertHalfToFloat(HALF Value);
FLOAT *XMConvertHalfToFloatStream(FLOAT *pOutputStream, UINT OutputStride, CONST HALF *pInputStream, UINT InputStride, UINT HalfCount);
HALF XMConvertFloatToHalf(FLOAT Value);
HALF *XMConvertFloatToHalfStream(HALF *pOutputStream, UINT OutputStride, CONST FLOAT *pInputStream, UINT InputStride, UINT FloatCount);
#if !defined(_XM_NO_INTRINSICS_) && defined(_XM_VMX128_INTRINSICS_)
#else
XMVECTOR XMVectorSetBinaryConstant(UINT C0, UINT C1, UINT C2, UINT C3);
XMVECTOR XMVectorSplatConstant(INT IntConstant, UINT DivExponent);
XMVECTOR XMVectorSplatConstantInt(INT IntConstant);
#endif
XMVECTOR        XMLoadInt( CONST UINT* pSource);
XMVECTOR        XMLoadFloat( CONST FLOAT* pSource);
XMVECTOR        XMLoadInt2(CONST UINT* pSource);
XMVECTOR        XMLoadInt2A(CONST UINT* PSource);
XMVECTOR        XMLoadFloat2( CONST XMFLOAT2* pSource);
XMVECTOR        XMLoadFloat2A( CONST XMFLOAT2A* pSource);
XMVECTOR        XMLoadHalf2( CONST XMHALF2* pSource);
XMVECTOR        XMLoadShortN2( CONST XMSHORTN2* pSource);
XMVECTOR        XMLoadShort2( CONST XMSHORT2* pSource);
XMVECTOR        XMLoadUShortN2( CONST XMUSHORTN2* pSource);
XMVECTOR        XMLoadUShort2( CONST XMUSHORT2* pSource);
XMVECTOR        XMLoadInt3(CONST UINT* pSource);
XMVECTOR        XMLoadInt3A(CONST UINT* pSource);
XMVECTOR        XMLoadFloat3( CONST XMFLOAT3* pSource);
XMVECTOR        XMLoadFloat3A( CONST XMFLOAT3A* pSource);
XMVECTOR        XMLoadHenDN3( CONST XMHENDN3* pSource);
XMVECTOR        XMLoadHenD3( CONST XMHEND3* pSource);
XMVECTOR        XMLoadUHenDN3( CONST XMUHENDN3* pSource);
XMVECTOR        XMLoadUHenD3( CONST XMUHEND3* pSource);
XMVECTOR        XMLoadDHenN3( CONST XMDHENN3* pSource);
XMVECTOR        XMLoadDHen3( CONST XMDHEN3* pSource);
XMVECTOR        XMLoadUDHenN3( CONST XMUDHENN3* pSource);
XMVECTOR        XMLoadUDHen3( CONST XMUDHEN3* pSource);
XMVECTOR        XMLoadU565( CONST XMU565* pSource);
XMVECTOR        XMLoadFloat3PK( CONST XMFLOAT3PK* pSource);
XMVECTOR        XMLoadFloat3SE( CONST XMFLOAT3SE* pSource);
XMVECTOR        XMLoadInt4(CONST UINT* pSource);
XMVECTOR        XMLoadInt4A(CONST UINT* pSource);
XMVECTOR        XMLoadFloat4( CONST XMFLOAT4* pSource);
XMVECTOR        XMLoadFloat4A( CONST XMFLOAT4A* pSource);
XMVECTOR        XMLoadHalf4( CONST XMHALF4* pSource);
XMVECTOR        XMLoadShortN4( CONST XMSHORTN4* pSource);
XMVECTOR        XMLoadShort4( CONST XMSHORT4* pSource);
XMVECTOR        XMLoadUShortN4( CONST XMUSHORTN4* pSource);
XMVECTOR        XMLoadUShort4( CONST XMUSHORT4* pSource);
XMVECTOR        XMLoadXIcoN4( CONST XMXICON4* pSource);
XMVECTOR        XMLoadXIco4( CONST XMXICO4* pSource);
XMVECTOR        XMLoadIcoN4( CONST XMICON4* pSource);
XMVECTOR        XMLoadIco4( CONST XMICO4* pSource);
XMVECTOR        XMLoadUIcoN4( CONST XMUICON4* pSource);
XMVECTOR        XMLoadUIco4( CONST XMUICO4* pSource);
XMVECTOR        XMLoadXDecN4( CONST XMXDECN4* pSource);
XMVECTOR        XMLoadXDec4( CONST XMXDEC4* pSource);
XMVECTOR        XMLoadDecN4( CONST XMDECN4* pSource);
XMVECTOR        XMLoadDec4( CONST XMDEC4* pSource);
XMVECTOR        XMLoadUDecN4( CONST XMUDECN4* pSource);
XMVECTOR        XMLoadUDec4( CONST XMUDEC4* pSource);
XMVECTOR        XMLoadByteN4( CONST XMBYTEN4* pSource);
XMVECTOR        XMLoadByte4( CONST XMBYTE4* pSource);
XMVECTOR        XMLoadUByteN4( CONST XMUBYTEN4* pSource);
XMVECTOR        XMLoadUByte4( CONST XMUBYTE4* pSource);
XMVECTOR        XMLoadUNibble4( CONST XMUNIBBLE4* pSource);
XMVECTOR        XMLoadU555( CONST XMU555* pSource);
XMVECTOR        XMLoadColor( CONST XMCOLOR* pSource);
XMMATRIX        XMLoadFloat3x3( CONST XMFLOAT3X3* pSource);
XMMATRIX        XMLoadFloat4x3( CONST XMFLOAT4X3* pSource);
XMMATRIX        XMLoadFloat4x3A( CONST XMFLOAT4X3A* pSource);
XMMATRIX        XMLoadFloat4x4( CONST XMFLOAT4X4* pSource);
XMMATRIX        XMLoadFloat4x4A( CONST XMFLOAT4X4A* pSource);
VOID            XMStoreInt( UINT* pDestination, FXMVECTOR V);
VOID            XMStoreFloat( FLOAT* pDestination, FXMVECTOR V);
VOID            XMStoreInt2(UINT* pDestination, FXMVECTOR V);
VOID            XMStoreInt2A(UINT* pDestination, FXMVECTOR V);
VOID            XMStoreFloat2( XMFLOAT2* pDestination, FXMVECTOR V);
VOID            XMStoreFloat2A( XMFLOAT2A* pDestination, FXMVECTOR V);
VOID            XMStoreHalf2( XMHALF2* pDestination, FXMVECTOR V);
VOID            XMStoreShortN2( XMSHORTN2* pDestination, FXMVECTOR V);
VOID            XMStoreShort2( XMSHORT2* pDestination, FXMVECTOR V);
VOID            XMStoreUShortN2( XMUSHORTN2* pDestination, FXMVECTOR V);
VOID            XMStoreUShort2( XMUSHORT2* pDestination, FXMVECTOR V);
VOID            XMStoreInt3(UINT* pDestination, FXMVECTOR V);
VOID            XMStoreInt3A(UINT* pDestination, FXMVECTOR V);
VOID            XMStoreFloat3( XMFLOAT3* pDestination, FXMVECTOR V);
VOID            XMStoreFloat3A( XMFLOAT3A* pDestination, FXMVECTOR V);
VOID            XMStoreHenDN3( XMHENDN3* pDestination, FXMVECTOR V);
VOID            XMStoreHenD3( XMHEND3* pDestination, FXMVECTOR V);
VOID            XMStoreUHenDN3( XMUHENDN3* pDestination, FXMVECTOR V);
VOID            XMStoreUHenD3( XMUHEND3* pDestination, FXMVECTOR V);
VOID            XMStoreDHenN3( XMDHENN3* pDestination, FXMVECTOR V);
VOID            XMStoreDHen3( XMDHEN3* pDestination, FXMVECTOR V);
VOID            XMStoreUDHenN3( XMUDHENN3* pDestination, FXMVECTOR V);
VOID            XMStoreUDHen3( XMUDHEN3* pDestination, FXMVECTOR V);
VOID            XMStoreU565( XMU565* pDestination, FXMVECTOR V);
VOID            XMStoreFloat3PK( XMFLOAT3PK* pDestination, FXMVECTOR V);
VOID            XMStoreFloat3SE( XMFLOAT3SE* pDestination, FXMVECTOR V);
VOID            XMStoreInt4(UINT* pDestination, FXMVECTOR V);
VOID            XMStoreInt4A(UINT* pDestination, FXMVECTOR V);
VOID            XMStoreInt4NC( UINT* pDestination, FXMVECTOR V);
VOID            XMStoreFloat4( XMFLOAT4* pDestination, FXMVECTOR V);
VOID            XMStoreFloat4A( XMFLOAT4A* pDestination, FXMVECTOR V);
VOID            XMStoreFloat4NC( XMFLOAT4* pDestination, FXMVECTOR V);
VOID            XMStoreHalf4( XMHALF4* pDestination, FXMVECTOR V);
VOID            XMStoreShortN4( XMSHORTN4* pDestination, FXMVECTOR V);
VOID            XMStoreShort4( XMSHORT4* pDestination, FXMVECTOR V);
VOID            XMStoreUShortN4( XMUSHORTN4* pDestination, FXMVECTOR V);
VOID            XMStoreUShort4( XMUSHORT4* pDestination, FXMVECTOR V);
VOID            XMStoreXIcoN4( XMXICON4* pDestination, FXMVECTOR V);
VOID            XMStoreXIco4( XMXICO4* pDestination, FXMVECTOR V);
VOID            XMStoreIcoN4( XMICON4* pDestination, FXMVECTOR V);
VOID            XMStoreIco4( XMICO4* pDestination, FXMVECTOR V);
VOID            XMStoreUIcoN4( XMUICON4* pDestination, FXMVECTOR V);
VOID            XMStoreUIco4( XMUICO4* pDestination, FXMVECTOR V);
VOID            XMStoreXDecN4( XMXDECN4* pDestination, FXMVECTOR V);
VOID            XMStoreXDec4( XMXDEC4* pDestination, FXMVECTOR V);
VOID            XMStoreDecN4( XMDECN4* pDestination, FXMVECTOR V);
VOID            XMStoreDec4( XMDEC4* pDestination, FXMVECTOR V);
VOID            XMStoreUDecN4( XMUDECN4* pDestination, FXMVECTOR V);
VOID            XMStoreUDec4( XMUDEC4* pDestination, FXMVECTOR V);
VOID            XMStoreByteN4( XMBYTEN4* pDestination, FXMVECTOR V);
VOID            XMStoreByte4( XMBYTE4* pDestination, FXMVECTOR V);
VOID            XMStoreUByteN4( XMUBYTEN4* pDestination, FXMVECTOR V);
VOID            XMStoreUByte4( XMUBYTE4* pDestination, FXMVECTOR V);
VOID            XMStoreUNibble4( XMUNIBBLE4* pDestination, FXMVECTOR V);
VOID            XMStoreU555( XMU555* pDestination, FXMVECTOR V);
VOID            XMStoreColor( XMCOLOR* pDestination, FXMVECTOR V);
VOID            XMStoreFloat3x3( XMFLOAT3X3* pDestination, CXMMATRIX M);
VOID            XMStoreFloat3x3NC( XMFLOAT3X3* pDestination, CXMMATRIX M);
VOID            XMStoreFloat4x3( XMFLOAT4X3* pDestination, CXMMATRIX M);
VOID            XMStoreFloat4x3A( XMFLOAT4X3A* pDestination, CXMMATRIX M);
VOID            XMStoreFloat4x3NC( XMFLOAT4X3* pDestination, CXMMATRIX M);
VOID            XMStoreFloat4x4( XMFLOAT4X4* pDestination, CXMMATRIX M);
VOID            XMStoreFloat4x4A( XMFLOAT4X4A* pDestination, CXMMATRIX M);
VOID            XMStoreFloat4x4NC( XMFLOAT4X4* pDestination, CXMMATRIX M);
XMVECTOR        XMVectorZero(void);
XMVECTOR        XMVectorSet(FLOAT x, FLOAT y, FLOAT z, FLOAT w);
XMVECTOR        XMVectorSetInt(UINT x, UINT y, UINT z, UINT w);
XMVECTOR        XMVectorReplicate(FLOAT Value);
XMVECTOR        XMVectorReplicatePtr( CONST FLOAT *pValue);
XMVECTOR        XMVectorReplicateInt(UINT Value);
XMVECTOR        XMVectorReplicateIntPtr( CONST UINT *pValue);
XMVECTOR        XMVectorTrueInt(void);
XMVECTOR        XMVectorFalseInt(void);
XMVECTOR        XMVectorSplatX(FXMVECTOR V);
XMVECTOR        XMVectorSplatY(FXMVECTOR V);
XMVECTOR        XMVectorSplatZ(FXMVECTOR V);
XMVECTOR        XMVectorSplatW(FXMVECTOR V);
XMVECTOR        XMVectorSplatOne(void);
XMVECTOR        XMVectorSplatInfinity(void);
XMVECTOR        XMVectorSplatQNaN(void);
XMVECTOR        XMVectorSplatEpsilon(void);
XMVECTOR        XMVectorSplatSignMask(void);
FLOAT           XMVectorGetByIndex(FXMVECTOR V,UINT i);
FLOAT           XMVectorGetX(FXMVECTOR V);
FLOAT           XMVectorGetY(FXMVECTOR V);
FLOAT           XMVectorGetZ(FXMVECTOR V);
FLOAT           XMVectorGetW(FXMVECTOR V);
VOID            XMVectorGetByIndexPtr( FLOAT *f, FXMVECTOR V, UINT i);
VOID            XMVectorGetXPtr( FLOAT *x, FXMVECTOR V);
VOID            XMVectorGetYPtr( FLOAT *y, FXMVECTOR V);
VOID            XMVectorGetZPtr( FLOAT *z, FXMVECTOR V);
VOID            XMVectorGetWPtr( FLOAT *w, FXMVECTOR V);
UINT            XMVectorGetIntByIndex(FXMVECTOR V,UINT i);
UINT            XMVectorGetIntX(FXMVECTOR V);
UINT            XMVectorGetIntY(FXMVECTOR V);
UINT            XMVectorGetIntZ(FXMVECTOR V);
UINT            XMVectorGetIntW(FXMVECTOR V);
VOID            XMVectorGetIntByIndexPtr( UINT *x,FXMVECTOR V, UINT i);
VOID            XMVectorGetIntXPtr( UINT *x, FXMVECTOR V);
VOID            XMVectorGetIntYPtr( UINT *y, FXMVECTOR V);
VOID            XMVectorGetIntZPtr( UINT *z, FXMVECTOR V);
VOID            XMVectorGetIntWPtr( UINT *w, FXMVECTOR V);
XMVECTOR        XMVectorSetByIndex(FXMVECTOR V,FLOAT f,UINT i);
XMVECTOR        XMVectorSetX(FXMVECTOR V, FLOAT x);
XMVECTOR        XMVectorSetY(FXMVECTOR V, FLOAT y);
XMVECTOR        XMVectorSetZ(FXMVECTOR V, FLOAT z);
XMVECTOR        XMVectorSetW(FXMVECTOR V, FLOAT w);
XMVECTOR        XMVectorSetByIndexPtr(FXMVECTOR V,  CONST FLOAT *f, UINT i);
XMVECTOR        XMVectorSetXPtr(FXMVECTOR V,  CONST FLOAT *x);
XMVECTOR        XMVectorSetYPtr(FXMVECTOR V,  CONST FLOAT *y);
XMVECTOR        XMVectorSetZPtr(FXMVECTOR V,  CONST FLOAT *z);
XMVECTOR        XMVectorSetWPtr(FXMVECTOR V,  CONST FLOAT *w);
XMVECTOR        XMVectorSetIntByIndex(FXMVECTOR V, UINT x,UINT i);
XMVECTOR        XMVectorSetIntX(FXMVECTOR V, UINT x);
XMVECTOR        XMVectorSetIntY(FXMVECTOR V, UINT y);
XMVECTOR        XMVectorSetIntZ(FXMVECTOR V, UINT z);
XMVECTOR        XMVectorSetIntW(FXMVECTOR V, UINT w);
XMVECTOR        XMVectorSetIntByIndexPtr(FXMVECTOR V,  CONST UINT *x, UINT i);
XMVECTOR        XMVectorSetIntXPtr(FXMVECTOR V,  CONST UINT *x);
XMVECTOR        XMVectorSetIntYPtr(FXMVECTOR V,  CONST UINT *y);
XMVECTOR        XMVectorSetIntZPtr(FXMVECTOR V,  CONST UINT *z);
XMVECTOR        XMVectorSetIntWPtr(FXMVECTOR V,  CONST UINT *w);
XMVECTOR        XMVectorPermuteControl(UINT ElementIndex0, UINT ElementIndex1, UINT ElementIndex2, UINT ElementIndex3);
XMVECTOR        XMVectorPermute(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Control);
XMVECTOR        XMVectorSelectControl(UINT VectorIndex0, UINT VectorIndex1, UINT VectorIndex2, UINT VectorIndex3);
XMVECTOR        XMVectorSelect(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Control);
XMVECTOR        XMVectorMergeXY(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorMergeZW(FXMVECTOR V1, FXMVECTOR V2);
#if !defined(_XM_NO_INTRINSICS_) && defined(_XM_VMX128_INTRINSICS_)
#else
XMVECTOR XMVectorShiftLeft(FXMVECTOR V1, FXMVECTOR V2, UINT Elements);
XMVECTOR XMVectorRotateLeft(FXMVECTOR V, UINT Elements);
XMVECTOR XMVectorRotateRight(FXMVECTOR V, UINT Elements);
XMVECTOR XMVectorSwizzle(FXMVECTOR V, UINT E0, UINT E1, UINT E2, UINT E3);
XMVECTOR XMVectorInsert(FXMVECTOR VD, FXMVECTOR VS, UINT VSLeftRotateElements,
                        UINT Select0, UINT Select1, UINT Select2, UINT Select3);
#endif
XMVECTOR        XMVectorEqual(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorEqualR( UINT* pCR, FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorEqualInt(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorEqualIntR( UINT* pCR, FXMVECTOR V, FXMVECTOR V2);
XMVECTOR        XMVectorNearEqual(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Epsilon);
XMVECTOR        XMVectorNotEqual(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorNotEqualInt(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorGreater(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorGreaterR( UINT* pCR, FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorGreaterOrEqual(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorGreaterOrEqualR( UINT* pCR, FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorLess(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorLessOrEqual(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorInBounds(FXMVECTOR V, FXMVECTOR Bounds);
XMVECTOR        XMVectorInBoundsR( UINT* pCR, FXMVECTOR V, FXMVECTOR Bounds);
XMVECTOR        XMVectorIsNaN(FXMVECTOR V);
XMVECTOR        XMVectorIsInfinite(FXMVECTOR V);
XMVECTOR        XMVectorMin(FXMVECTOR V1,FXMVECTOR V2);
XMVECTOR        XMVectorMax(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorRound(FXMVECTOR V);
XMVECTOR        XMVectorTruncate(FXMVECTOR V);
XMVECTOR        XMVectorFloor(FXMVECTOR V);
XMVECTOR        XMVectorCeiling(FXMVECTOR V);
XMVECTOR        XMVectorClamp(FXMVECTOR V, FXMVECTOR Min, FXMVECTOR Max);
XMVECTOR        XMVectorSaturate(FXMVECTOR V);
XMVECTOR        XMVectorAndInt(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorAndCInt(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorOrInt(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorNorInt(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorXorInt(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorNegate(FXMVECTOR V);
XMVECTOR        XMVectorAdd(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorAddAngles(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorSubtract(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorSubtractAngles(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorMultiply(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorMultiplyAdd(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR V3);
XMVECTOR        XMVectorDivide(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorNegativeMultiplySubtract(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR V3);
XMVECTOR        XMVectorScale(FXMVECTOR V, FLOAT ScaleFactor);
XMVECTOR        XMVectorReciprocalEst(FXMVECTOR V);
XMVECTOR        XMVectorReciprocal(FXMVECTOR V);
XMVECTOR        XMVectorSqrtEst(FXMVECTOR V);
XMVECTOR        XMVectorSqrt(FXMVECTOR V);
XMVECTOR        XMVectorReciprocalSqrtEst(FXMVECTOR V);
XMVECTOR        XMVectorReciprocalSqrt(FXMVECTOR V);
XMVECTOR        XMVectorExpEst(FXMVECTOR V);
XMVECTOR        XMVectorExp(FXMVECTOR V);
XMVECTOR        XMVectorLogEst(FXMVECTOR V);
XMVECTOR        XMVectorLog(FXMVECTOR V);
XMVECTOR        XMVectorPowEst(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorPow(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorAbs(FXMVECTOR V);
XMVECTOR        XMVectorMod(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVectorModAngles(FXMVECTOR Angles);
XMVECTOR        XMVectorSin(FXMVECTOR V);
XMVECTOR        XMVectorSinEst(FXMVECTOR V);
XMVECTOR        XMVectorCos(FXMVECTOR V);
XMVECTOR        XMVectorCosEst(FXMVECTOR V);
VOID            XMVectorSinCos( XMVECTOR* pSin,  XMVECTOR* pCos, FXMVECTOR V);
VOID            XMVectorSinCosEst( XMVECTOR* pSin,  XMVECTOR* pCos, FXMVECTOR V);
XMVECTOR        XMVectorTan(FXMVECTOR V);
XMVECTOR        XMVectorTanEst(FXMVECTOR V);
XMVECTOR        XMVectorSinH(FXMVECTOR V);
XMVECTOR        XMVectorSinHEst(FXMVECTOR V);
XMVECTOR        XMVectorCosH(FXMVECTOR V);
XMVECTOR        XMVectorCosHEst(FXMVECTOR V);
XMVECTOR        XMVectorTanH(FXMVECTOR V);
XMVECTOR        XMVectorTanHEst(FXMVECTOR V);
XMVECTOR        XMVectorASin(FXMVECTOR V);
XMVECTOR        XMVectorASinEst(FXMVECTOR V);
XMVECTOR        XMVectorACos(FXMVECTOR V);
XMVECTOR        XMVectorACosEst(FXMVECTOR V);
XMVECTOR        XMVectorATan(FXMVECTOR V);
XMVECTOR        XMVectorATanEst(FXMVECTOR V);
XMVECTOR        XMVectorATan2(FXMVECTOR Y, FXMVECTOR X);
XMVECTOR        XMVectorATan2Est(FXMVECTOR Y, FXMVECTOR X);
XMVECTOR        XMVectorLerp(FXMVECTOR V0, FXMVECTOR V1, FLOAT t);
XMVECTOR        XMVectorLerpV(FXMVECTOR V0, FXMVECTOR V1, FXMVECTOR T);
XMVECTOR        XMVectorHermite(FXMVECTOR Position0, FXMVECTOR Tangent0, FXMVECTOR Position1, CXMVECTOR Tangent1, FLOAT t);
XMVECTOR        XMVectorHermiteV(FXMVECTOR Position0, FXMVECTOR Tangent0, FXMVECTOR Position1, CXMVECTOR Tangent1, CXMVECTOR T);
XMVECTOR        XMVectorCatmullRom(FXMVECTOR Position0, FXMVECTOR Position1, FXMVECTOR Position2, CXMVECTOR Position3, FLOAT t);
XMVECTOR        XMVectorCatmullRomV(FXMVECTOR Position0, FXMVECTOR Position1, FXMVECTOR Position2, CXMVECTOR Position3, CXMVECTOR T);
XMVECTOR        XMVectorBaryCentric(FXMVECTOR Position0, FXMVECTOR Position1, FXMVECTOR Position2, FLOAT f, FLOAT g);
XMVECTOR        XMVectorBaryCentricV(FXMVECTOR Position0, FXMVECTOR Position1, FXMVECTOR Position2, CXMVECTOR F, CXMVECTOR G);
BOOL            XMVector2Equal(FXMVECTOR V1, FXMVECTOR V2);
UINT            XMVector2EqualR(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector2EqualInt(FXMVECTOR V1, FXMVECTOR V2);
UINT            XMVector2EqualIntR(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector2NearEqual(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Epsilon);
BOOL            XMVector2NotEqual(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector2NotEqualInt(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector2Greater(FXMVECTOR V1, FXMVECTOR V2);
UINT            XMVector2GreaterR(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector2GreaterOrEqual(FXMVECTOR V1, FXMVECTOR V2);
UINT            XMVector2GreaterOrEqualR(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector2Less(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector2LessOrEqual(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector2InBounds(FXMVECTOR V, FXMVECTOR Bounds);
UINT            XMVector2InBoundsR(FXMVECTOR V, FXMVECTOR Bounds);
BOOL            XMVector2IsNaN(FXMVECTOR V);
BOOL            XMVector2IsInfinite(FXMVECTOR V);
XMVECTOR        XMVector2Dot(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVector2Cross(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVector2LengthSq(FXMVECTOR V);
XMVECTOR        XMVector2ReciprocalLengthEst(FXMVECTOR V);
XMVECTOR        XMVector2ReciprocalLength(FXMVECTOR V);
XMVECTOR        XMVector2LengthEst(FXMVECTOR V);
XMVECTOR        XMVector2Length(FXMVECTOR V);
XMVECTOR        XMVector2NormalizeEst(FXMVECTOR V);
XMVECTOR        XMVector2Normalize(FXMVECTOR V);
XMVECTOR        XMVector2ClampLength(FXMVECTOR V, FLOAT LengthMin, FLOAT LengthMax);
XMVECTOR        XMVector2ClampLengthV(FXMVECTOR V, FXMVECTOR LengthMin, FXMVECTOR LengthMax);
XMVECTOR        XMVector2Reflect(FXMVECTOR Incident, FXMVECTOR Normal);
XMVECTOR        XMVector2Refract(FXMVECTOR Incident, FXMVECTOR Normal, FLOAT RefractionIndex);
XMVECTOR        XMVector2RefractV(FXMVECTOR Incident, FXMVECTOR Normal, FXMVECTOR RefractionIndex);
XMVECTOR        XMVector2Orthogonal(FXMVECTOR V);
XMVECTOR        XMVector2AngleBetweenNormalsEst(FXMVECTOR N1, FXMVECTOR N2);
XMVECTOR        XMVector2AngleBetweenNormals(FXMVECTOR N1, FXMVECTOR N2);
XMVECTOR        XMVector2AngleBetweenVectors(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVector2LinePointDistance(FXMVECTOR LinePoint1, FXMVECTOR LinePoint2, FXMVECTOR Point);
XMVECTOR        XMVector2IntersectLine(FXMVECTOR Line1Point1, FXMVECTOR Line1Point2, FXMVECTOR Line2Point1, CXMVECTOR Line2Point2);
XMVECTOR        XMVector2Transform(FXMVECTOR V, CXMMATRIX M);
XMFLOAT4*       XMVector2TransformStream(XMFLOAT4* pOutputStream,
                                          UINT OutputStride,
                                         CONST XMFLOAT2* pInputStream,
                                          UINT InputStride,  UINT VectorCount, CXMMATRIX M);
XMFLOAT4*       XMVector2TransformStreamNC(XMFLOAT4* pOutputStream,
                                            UINT OutputStride,
                                           CONST XMFLOAT2* pInputStream,
                                            UINT InputStride,  UINT VectorCount, CXMMATRIX M);
XMVECTOR        XMVector2TransformCoord(FXMVECTOR V, CXMMATRIX M);
XMFLOAT2*       XMVector2TransformCoordStream( XMFLOAT2* pOutputStream,
                                               UINT OutputStride,
                                               CONST XMFLOAT2* pInputStream,
                                               UINT InputStride,  UINT VectorCount, CXMMATRIX M);
XMVECTOR        XMVector2TransformNormal(FXMVECTOR V, CXMMATRIX M);
XMFLOAT2*       XMVector2TransformNormalStream(XMFLOAT2* pOutputStream,
                                                UINT OutputStride,
                                                CONST XMFLOAT2* pInputStream,
                                                UINT InputStride,  UINT VectorCount, CXMMATRIX M);
BOOL            XMVector3Equal(FXMVECTOR V1, FXMVECTOR V2);
UINT            XMVector3EqualR(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector3EqualInt(FXMVECTOR V1, FXMVECTOR V2);
UINT            XMVector3EqualIntR(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector3NearEqual(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Epsilon);
BOOL            XMVector3NotEqual(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector3NotEqualInt(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector3Greater(FXMVECTOR V1, FXMVECTOR V2);
UINT            XMVector3GreaterR(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector3GreaterOrEqual(FXMVECTOR V1, FXMVECTOR V2);
UINT            XMVector3GreaterOrEqualR(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector3Less(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector3LessOrEqual(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector3InBounds(FXMVECTOR V, FXMVECTOR Bounds);
UINT            XMVector3InBoundsR(FXMVECTOR V, FXMVECTOR Bounds);
BOOL            XMVector3IsNaN(FXMVECTOR V);
BOOL            XMVector3IsInfinite(FXMVECTOR V);
XMVECTOR        XMVector3Dot(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVector3Cross(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVector3LengthSq(FXMVECTOR V);
XMVECTOR        XMVector3ReciprocalLengthEst(FXMVECTOR V);
XMVECTOR        XMVector3ReciprocalLength(FXMVECTOR V);
XMVECTOR        XMVector3LengthEst(FXMVECTOR V);
XMVECTOR        XMVector3Length(FXMVECTOR V);
XMVECTOR        XMVector3NormalizeEst(FXMVECTOR V);
XMVECTOR        XMVector3Normalize(FXMVECTOR V);
XMVECTOR        XMVector3ClampLength(FXMVECTOR V, FLOAT LengthMin, FLOAT LengthMax);
XMVECTOR        XMVector3ClampLengthV(FXMVECTOR V, FXMVECTOR LengthMin, FXMVECTOR LengthMax);
XMVECTOR        XMVector3Reflect(FXMVECTOR Incident, FXMVECTOR Normal);
XMVECTOR        XMVector3Refract(FXMVECTOR Incident, FXMVECTOR Normal, FLOAT RefractionIndex);
XMVECTOR        XMVector3RefractV(FXMVECTOR Incident, FXMVECTOR Normal, FXMVECTOR RefractionIndex);
XMVECTOR        XMVector3Orthogonal(FXMVECTOR V);
XMVECTOR        XMVector3AngleBetweenNormalsEst(FXMVECTOR N1, FXMVECTOR N2);
XMVECTOR        XMVector3AngleBetweenNormals(FXMVECTOR N1, FXMVECTOR N2);
XMVECTOR        XMVector3AngleBetweenVectors(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVector3LinePointDistance(FXMVECTOR LinePoint1, FXMVECTOR LinePoint2, FXMVECTOR Point);
VOID            XMVector3ComponentsFromNormal( XMVECTOR* pParallel,  XMVECTOR* pPerpendicular, FXMVECTOR V, FXMVECTOR Normal);
XMVECTOR        XMVector3Rotate(FXMVECTOR V, FXMVECTOR RotationQuaternion);
XMVECTOR        XMVector3InverseRotate(FXMVECTOR V, FXMVECTOR RotationQuaternion);
XMVECTOR        XMVector3Transform(FXMVECTOR V, CXMMATRIX M);
XMFLOAT4*       XMVector3TransformStream( XMFLOAT4* pOutputStream,
                                          UINT OutputStride,
                                          CONST XMFLOAT3* pInputStream,
                                          UINT InputStride,  UINT VectorCount, CXMMATRIX M);
XMFLOAT4*       XMVector3TransformStreamNC( XMFLOAT4* pOutputStream,
                                            UINT OutputStride,
                                           CONST XMFLOAT3* pInputStream,
                                            UINT InputStride,  UINT VectorCount, CXMMATRIX M);
XMVECTOR        XMVector3TransformCoord(FXMVECTOR V, CXMMATRIX M);
XMFLOAT3*       XMVector3TransformCoordStream( XMFLOAT3* pOutputStream,
                                               UINT OutputStride,
                                               CONST XMFLOAT3* pInputStream,
                                               UINT InputStride,  UINT VectorCount, CXMMATRIX M);
XMVECTOR        XMVector3TransformNormal(FXMVECTOR V, CXMMATRIX M);
XMFLOAT3*       XMVector3TransformNormalStream( XMFLOAT3* pOutputStream,
                                                UINT OutputStride,
                                               CONST XMFLOAT3* pInputStream,
                                                UINT InputStride,  UINT VectorCount, CXMMATRIX M);
XMVECTOR        XMVector3Project(FXMVECTOR V, FLOAT ViewportX, FLOAT ViewportY, FLOAT ViewportWidth, FLOAT ViewportHeight, FLOAT ViewportMinZ, FLOAT ViewportMaxZ, 
                    CXMMATRIX Projection, CXMMATRIX View, CXMMATRIX World);
XMFLOAT3*       XMVector3ProjectStream( XMFLOAT3* pOutputStream,
                                        UINT OutputStride,
                                        CONST XMFLOAT3* pInputStream,
                                        UINT InputStride,  UINT VectorCount, 
                    FLOAT ViewportX, FLOAT ViewportY, FLOAT ViewportWidth, FLOAT ViewportHeight, FLOAT ViewportMinZ, FLOAT ViewportMaxZ, 
                    CXMMATRIX Projection, CXMMATRIX View, CXMMATRIX World);
XMVECTOR        XMVector3Unproject(FXMVECTOR V, FLOAT ViewportX, FLOAT ViewportY, FLOAT ViewportWidth, FLOAT ViewportHeight, FLOAT ViewportMinZ, FLOAT ViewportMaxZ, 
                    CXMMATRIX Projection, CXMMATRIX View, CXMMATRIX World);
XMFLOAT3*       XMVector3UnprojectStream( XMFLOAT3* pOutputStream,
                                          UINT OutputStride,
                                          CONST XMFLOAT3* pInputStream,
                                          UINT InputStride,  UINT VectorCount, 
                    FLOAT ViewportX, FLOAT ViewportY, FLOAT ViewportWidth, FLOAT ViewportHeight, FLOAT ViewportMinZ, FLOAT ViewportMaxZ, 
                    CXMMATRIX Projection, CXMMATRIX View, CXMMATRIX World);
BOOL            XMVector4Equal(FXMVECTOR V1, FXMVECTOR V2);
UINT            XMVector4EqualR(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector4EqualInt(FXMVECTOR V1, FXMVECTOR V2);
UINT            XMVector4EqualIntR(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector4NearEqual(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Epsilon);
BOOL            XMVector4NotEqual(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector4NotEqualInt(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector4Greater(FXMVECTOR V1, FXMVECTOR V2);
UINT            XMVector4GreaterR(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector4GreaterOrEqual(FXMVECTOR V1, FXMVECTOR V2);
UINT            XMVector4GreaterOrEqualR(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector4Less(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector4LessOrEqual(FXMVECTOR V1, FXMVECTOR V2);
BOOL            XMVector4InBounds(FXMVECTOR V, FXMVECTOR Bounds);
UINT            XMVector4InBoundsR(FXMVECTOR V, FXMVECTOR Bounds);
BOOL            XMVector4IsNaN(FXMVECTOR V);
BOOL            XMVector4IsInfinite(FXMVECTOR V);
XMVECTOR        XMVector4Dot(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVector4Cross(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR V3);
XMVECTOR        XMVector4LengthSq(FXMVECTOR V);
XMVECTOR        XMVector4ReciprocalLengthEst(FXMVECTOR V);
XMVECTOR        XMVector4ReciprocalLength(FXMVECTOR V);
XMVECTOR        XMVector4LengthEst(FXMVECTOR V);
XMVECTOR        XMVector4Length(FXMVECTOR V);
XMVECTOR        XMVector4NormalizeEst(FXMVECTOR V);
XMVECTOR        XMVector4Normalize(FXMVECTOR V);
XMVECTOR        XMVector4ClampLength(FXMVECTOR V, FLOAT LengthMin, FLOAT LengthMax);
XMVECTOR        XMVector4ClampLengthV(FXMVECTOR V, FXMVECTOR LengthMin, FXMVECTOR LengthMax);
XMVECTOR        XMVector4Reflect(FXMVECTOR Incident, FXMVECTOR Normal);
XMVECTOR        XMVector4Refract(FXMVECTOR Incident, FXMVECTOR Normal, FLOAT RefractionIndex);
XMVECTOR        XMVector4RefractV(FXMVECTOR Incident, FXMVECTOR Normal, FXMVECTOR RefractionIndex);
XMVECTOR        XMVector4Orthogonal(FXMVECTOR V);
XMVECTOR        XMVector4AngleBetweenNormalsEst(FXMVECTOR N1, FXMVECTOR N2);
XMVECTOR        XMVector4AngleBetweenNormals(FXMVECTOR N1, FXMVECTOR N2);
XMVECTOR        XMVector4AngleBetweenVectors(FXMVECTOR V1, FXMVECTOR V2);
XMVECTOR        XMVector4Transform(FXMVECTOR V, CXMMATRIX M);
XMFLOAT4*       XMVector4TransformStream( XMFLOAT4* pOutputStream,
                                          UINT OutputStride,
                                          CONST XMFLOAT4* pInputStream,
                                          UINT InputStride,  UINT VectorCount, CXMMATRIX M);
BOOL            XMMatrixIsNaN(CXMMATRIX M);
BOOL            XMMatrixIsInfinite(CXMMATRIX M);
BOOL            XMMatrixIsIdentity(CXMMATRIX M);
XMMATRIX        XMMatrixMultiply(CXMMATRIX M1, CXMMATRIX M2);
XMMATRIX        XMMatrixMultiplyTranspose(CXMMATRIX M1, CXMMATRIX M2);
XMMATRIX        XMMatrixTranspose(CXMMATRIX M);
XMMATRIX        XMMatrixInverse( XMVECTOR* pDeterminant, CXMMATRIX M);
XMVECTOR        XMMatrixDeterminant(CXMMATRIX M);
BOOL            XMMatrixDecompose( XMVECTOR *outScale,  XMVECTOR *outRotQuat,  XMVECTOR *outTrans, CXMMATRIX M);
XMMATRIX        XMMatrixIdentity(void);
XMMATRIX        XMMatrixSet(FLOAT m00, FLOAT m01, FLOAT m02, FLOAT m03,
                         FLOAT m10, FLOAT m11, FLOAT m12, FLOAT m13,
                         FLOAT m20, FLOAT m21, FLOAT m22, FLOAT m23,
                         FLOAT m30, FLOAT m31, FLOAT m32, FLOAT m33);
XMMATRIX        XMMatrixTranslation(FLOAT OffsetX, FLOAT OffsetY, FLOAT OffsetZ);
XMMATRIX        XMMatrixTranslationFromVector(FXMVECTOR Offset);
XMMATRIX        XMMatrixScaling(FLOAT ScaleX, FLOAT ScaleY, FLOAT ScaleZ);
XMMATRIX        XMMatrixScalingFromVector(FXMVECTOR Scale);
XMMATRIX        XMMatrixRotationX(FLOAT Angle);
XMMATRIX        XMMatrixRotationY(FLOAT Angle);
XMMATRIX        XMMatrixRotationZ(FLOAT Angle);
XMMATRIX        XMMatrixRotationRollPitchYaw(FLOAT Pitch, FLOAT Yaw, FLOAT Roll);
XMMATRIX        XMMatrixRotationRollPitchYawFromVector(FXMVECTOR Angles);
XMMATRIX        XMMatrixRotationNormal(FXMVECTOR NormalAxis, FLOAT Angle);
XMMATRIX        XMMatrixRotationAxis(FXMVECTOR Axis, FLOAT Angle);
XMMATRIX        XMMatrixRotationQuaternion(FXMVECTOR Quaternion);
XMMATRIX        XMMatrixTransformation2D(FXMVECTOR ScalingOrigin, FLOAT ScalingOrientation, FXMVECTOR Scaling, 
                    FXMVECTOR RotationOrigin, FLOAT Rotation, CXMVECTOR Translation);
XMMATRIX        XMMatrixTransformation(FXMVECTOR ScalingOrigin, FXMVECTOR ScalingOrientationQuaternion, FXMVECTOR Scaling, 
                    CXMVECTOR RotationOrigin, CXMVECTOR RotationQuaternion, CXMVECTOR Translation);
XMMATRIX        XMMatrixAffineTransformation2D(FXMVECTOR Scaling, FXMVECTOR RotationOrigin, FLOAT Rotation, FXMVECTOR Translation);
XMMATRIX        XMMatrixAffineTransformation(FXMVECTOR Scaling, FXMVECTOR RotationOrigin, FXMVECTOR RotationQuaternion, CXMVECTOR Translation);
XMMATRIX        XMMatrixReflect(FXMVECTOR ReflectionPlane);
XMMATRIX        XMMatrixShadow(FXMVECTOR ShadowPlane, FXMVECTOR LightPosition);
XMMATRIX        XMMatrixLookAtLH(FXMVECTOR EyePosition, FXMVECTOR FocusPosition, FXMVECTOR UpDirection);
XMMATRIX        XMMatrixLookAtRH(FXMVECTOR EyePosition, FXMVECTOR FocusPosition, FXMVECTOR UpDirection);
XMMATRIX        XMMatrixLookToLH(FXMVECTOR EyePosition, FXMVECTOR EyeDirection, FXMVECTOR UpDirection);
XMMATRIX        XMMatrixLookToRH(FXMVECTOR EyePosition, FXMVECTOR EyeDirection, FXMVECTOR UpDirection);
XMMATRIX        XMMatrixPerspectiveLH(FLOAT ViewWidth, FLOAT ViewHeight, FLOAT NearZ, FLOAT FarZ);
XMMATRIX        XMMatrixPerspectiveRH(FLOAT ViewWidth, FLOAT ViewHeight, FLOAT NearZ, FLOAT FarZ);
XMMATRIX        XMMatrixPerspectiveFovLH(FLOAT FovAngleY, FLOAT AspectHByW, FLOAT NearZ, FLOAT FarZ);
XMMATRIX        XMMatrixPerspectiveFovRH(FLOAT FovAngleY, FLOAT AspectHByW, FLOAT NearZ, FLOAT FarZ);
XMMATRIX        XMMatrixPerspectiveOffCenterLH(FLOAT ViewLeft, FLOAT ViewRight, FLOAT ViewBottom, FLOAT ViewTop, FLOAT NearZ, FLOAT FarZ);
XMMATRIX        XMMatrixPerspectiveOffCenterRH(FLOAT ViewLeft, FLOAT ViewRight, FLOAT ViewBottom, FLOAT ViewTop, FLOAT NearZ, FLOAT FarZ);
XMMATRIX        XMMatrixOrthographicLH(FLOAT ViewWidth, FLOAT ViewHeight, FLOAT NearZ, FLOAT FarZ);
XMMATRIX        XMMatrixOrthographicRH(FLOAT ViewWidth, FLOAT ViewHeight, FLOAT NearZ, FLOAT FarZ);
XMMATRIX        XMMatrixOrthographicOffCenterLH(FLOAT ViewLeft, FLOAT ViewRight, FLOAT ViewBottom, FLOAT ViewTop, FLOAT NearZ, FLOAT FarZ);
XMMATRIX        XMMatrixOrthographicOffCenterRH(FLOAT ViewLeft, FLOAT ViewRight, FLOAT ViewBottom, FLOAT ViewTop, FLOAT NearZ, FLOAT FarZ);
BOOL            XMQuaternionEqual(FXMVECTOR Q1, FXMVECTOR Q2);
BOOL            XMQuaternionNotEqual(FXMVECTOR Q1, FXMVECTOR Q2);
BOOL            XMQuaternionIsNaN(FXMVECTOR Q);
BOOL            XMQuaternionIsInfinite(FXMVECTOR Q);
BOOL            XMQuaternionIsIdentity(FXMVECTOR Q);
XMVECTOR        XMQuaternionDot(FXMVECTOR Q1, FXMVECTOR Q2);
XMVECTOR        XMQuaternionMultiply(FXMVECTOR Q1, FXMVECTOR Q2);
XMVECTOR        XMQuaternionLengthSq(FXMVECTOR Q);
XMVECTOR        XMQuaternionReciprocalLength(FXMVECTOR Q);
XMVECTOR        XMQuaternionLength(FXMVECTOR Q);
XMVECTOR        XMQuaternionNormalizeEst(FXMVECTOR Q);
XMVECTOR        XMQuaternionNormalize(FXMVECTOR Q);
XMVECTOR        XMQuaternionConjugate(FXMVECTOR Q);
XMVECTOR        XMQuaternionInverse(FXMVECTOR Q);
XMVECTOR        XMQuaternionLn(FXMVECTOR Q);
XMVECTOR        XMQuaternionExp(FXMVECTOR Q);
XMVECTOR        XMQuaternionSlerp(FXMVECTOR Q0, FXMVECTOR Q1, FLOAT t);
XMVECTOR        XMQuaternionSlerpV(FXMVECTOR Q0, FXMVECTOR Q1, FXMVECTOR T);
XMVECTOR        XMQuaternionSquad(FXMVECTOR Q0, FXMVECTOR Q1, FXMVECTOR Q2, CXMVECTOR Q3, FLOAT t);
XMVECTOR        XMQuaternionSquadV(FXMVECTOR Q0, FXMVECTOR Q1, FXMVECTOR Q2, CXMVECTOR Q3, CXMVECTOR T);
VOID            XMQuaternionSquadSetup( XMVECTOR* pA,  XMVECTOR* pB,  XMVECTOR* pC, FXMVECTOR Q0, FXMVECTOR Q1, FXMVECTOR Q2, CXMVECTOR Q3);
XMVECTOR        XMQuaternionBaryCentric(FXMVECTOR Q0, FXMVECTOR Q1, FXMVECTOR Q2, FLOAT f, FLOAT g);
XMVECTOR        XMQuaternionBaryCentricV(FXMVECTOR Q0, FXMVECTOR Q1, FXMVECTOR Q2, CXMVECTOR F, CXMVECTOR G);
XMVECTOR        XMQuaternionIdentity(void);
XMVECTOR        XMQuaternionRotationRollPitchYaw(FLOAT Pitch, FLOAT Yaw, FLOAT Roll);
XMVECTOR        XMQuaternionRotationRollPitchYawFromVector(FXMVECTOR Angles);
XMVECTOR        XMQuaternionRotationNormal(FXMVECTOR NormalAxis, FLOAT Angle);
XMVECTOR        XMQuaternionRotationAxis(FXMVECTOR Axis, FLOAT Angle);
XMVECTOR        XMQuaternionRotationMatrix(CXMMATRIX M);
VOID            XMQuaternionToAxisAngle( XMVECTOR* pAxis,  FLOAT* pAngle, FXMVECTOR Q);
BOOL            XMPlaneEqual(FXMVECTOR P1, FXMVECTOR P2);
BOOL            XMPlaneNearEqual(FXMVECTOR P1, FXMVECTOR P2, FXMVECTOR Epsilon);
BOOL            XMPlaneNotEqual(FXMVECTOR P1, FXMVECTOR P2);
BOOL            XMPlaneIsNaN(FXMVECTOR P);
BOOL            XMPlaneIsInfinite(FXMVECTOR P);
XMVECTOR        XMPlaneDot(FXMVECTOR P, FXMVECTOR V);
XMVECTOR        XMPlaneDotCoord(FXMVECTOR P, FXMVECTOR V);
XMVECTOR        XMPlaneDotNormal(FXMVECTOR P, FXMVECTOR V);
XMVECTOR        XMPlaneNormalizeEst(FXMVECTOR P);
XMVECTOR        XMPlaneNormalize(FXMVECTOR P);
XMVECTOR        XMPlaneIntersectLine(FXMVECTOR P, FXMVECTOR LinePoint1, FXMVECTOR LinePoint2);
VOID            XMPlaneIntersectPlane( XMVECTOR* pLinePoint1,  XMVECTOR* pLinePoint2, FXMVECTOR P1, FXMVECTOR P2);
XMVECTOR        XMPlaneTransform(FXMVECTOR P, CXMMATRIX M);
XMFLOAT4*       XMPlaneTransformStream( XMFLOAT4* pOutputStream,
                                        UINT OutputStride,
                                        CONST XMFLOAT4* pInputStream,
                                        UINT InputStride,  UINT PlaneCount, CXMMATRIX M);
XMVECTOR        XMPlaneFromPointNormal(FXMVECTOR Point, FXMVECTOR Normal);
XMVECTOR        XMPlaneFromPoints(FXMVECTOR Point1, FXMVECTOR Point2, FXMVECTOR Point3);
BOOL            XMColorEqual(FXMVECTOR C1, FXMVECTOR C2);
BOOL            XMColorNotEqual(FXMVECTOR C1, FXMVECTOR C2);
BOOL            XMColorGreater(FXMVECTOR C1, FXMVECTOR C2);
BOOL            XMColorGreaterOrEqual(FXMVECTOR C1, FXMVECTOR C2);
BOOL            XMColorLess(FXMVECTOR C1, FXMVECTOR C2);
BOOL            XMColorLessOrEqual(FXMVECTOR C1, FXMVECTOR C2);
BOOL            XMColorIsNaN(FXMVECTOR C);
BOOL            XMColorIsInfinite(FXMVECTOR C);
XMVECTOR        XMColorNegative(FXMVECTOR C);
XMVECTOR        XMColorModulate(FXMVECTOR C1, FXMVECTOR C2);
XMVECTOR        XMColorAdjustSaturation(FXMVECTOR C, FLOAT Saturation);
XMVECTOR        XMColorAdjustContrast(FXMVECTOR C, FLOAT Contrast);
BOOL            XMVerifyCPUSupport(void);
VOID            XMAssert(CONST CHAR* pExpression,  CONST CHAR* pFileName, UINT LineNumber);
XMVECTOR        XMFresnelTerm(FXMVECTOR CosIncidentAngle, FXMVECTOR RefractionIndex);
BOOL            XMScalarNearEqual(FLOAT S1, FLOAT S2, FLOAT Epsilon);
FLOAT           XMScalarModAngle(FLOAT Value);
FLOAT           XMScalarSin(FLOAT Value);
FLOAT           XMScalarCos(FLOAT Value);
VOID            XMScalarSinCos( FLOAT* pSin,  FLOAT* pCos, FLOAT Value);
FLOAT           XMScalarASin(FLOAT Value);
FLOAT           XMScalarACos(FLOAT Value);
FLOAT           XMScalarSinEst(FLOAT Value);
FLOAT           XMScalarCosEst(FLOAT Value);
VOID            XMScalarSinCosEst( FLOAT* pSin,  FLOAT* pCos, FLOAT Value);
FLOAT           XMScalarASinEst(FLOAT Value);
FLOAT           XMScalarACosEst(FLOAT Value);
#define XMGLOBALCONST extern CONST
#ifdef INITXMVECTORF32
XMGLOBALCONST XMVECTORF32 g_XMSinCoefficients0    = {1.0f, -0.166666667f, 8.333333333e-3f, -1.984126984e-4f};
XMGLOBALCONST XMVECTORF32 g_XMSinCoefficients1    = {2.755731922e-6f, -2.505210839e-8f, 1.605904384e-10f, -7.647163732e-13f};
XMGLOBALCONST XMVECTORF32 g_XMSinCoefficients2    = {2.811457254e-15f, -8.220635247e-18f, 1.957294106e-20f, -3.868170171e-23f};
XMGLOBALCONST XMVECTORF32 g_XMCosCoefficients0    = {1.0f, -0.5f, 4.166666667e-2f, -1.388888889e-3f};
XMGLOBALCONST XMVECTORF32 g_XMCosCoefficients1    = {2.480158730e-5f, -2.755731922e-7f, 2.087675699e-9f, -1.147074560e-11f};
XMGLOBALCONST XMVECTORF32 g_XMCosCoefficients2    = {4.779477332e-14f, -1.561920697e-16f, 4.110317623e-19f, -8.896791392e-22f};
XMGLOBALCONST XMVECTORF32 g_XMTanCoefficients0    = {1.0f, 0.333333333f, 0.133333333f, 5.396825397e-2f};
XMGLOBALCONST XMVECTORF32 g_XMTanCoefficients1    = {2.186948854e-2f, 8.863235530e-3f, 3.592128167e-3f, 1.455834485e-3f};
XMGLOBALCONST XMVECTORF32 g_XMTanCoefficients2    = {5.900274264e-4f, 2.391290764e-4f, 9.691537707e-5f, 3.927832950e-5f};
XMGLOBALCONST XMVECTORF32 g_XMASinCoefficients0   = {-0.05806367563904f, -0.41861972469416f, 0.22480114791621f, 2.17337241360606f};
XMGLOBALCONST XMVECTORF32 g_XMASinCoefficients1   = {0.61657275907170f, 4.29696498283455f, -1.18942822255452f, -6.53784832094831f};
XMGLOBALCONST XMVECTORF32 g_XMASinCoefficients2   = {-1.36926553863413f, -4.48179294237210f, 1.41810672941833f, 5.48179257935713f};
XMGLOBALCONST XMVECTORF32 g_XMATanCoefficients0   = {1.0f, 0.333333334f, 0.2f, 0.142857143f};
XMGLOBALCONST XMVECTORF32 g_XMATanCoefficients1   = {1.111111111e-1f, 9.090909091e-2f, 7.692307692e-2f, 6.666666667e-2f};
XMGLOBALCONST XMVECTORF32 g_XMATanCoefficients2   = {5.882352941e-2f, 5.263157895e-2f, 4.761904762e-2f, 4.347826087e-2f};
XMGLOBALCONST XMVECTORF32 g_XMSinEstCoefficients  = {1.0f, -1.66521856991541e-1f, 8.199913018755e-3f, -1.61475937228e-4f};
XMGLOBALCONST XMVECTORF32 g_XMCosEstCoefficients  = {1.0f, -4.95348008918096e-1f, 3.878259962881e-2f, -9.24587976263e-4f};
XMGLOBALCONST XMVECTORF32 g_XMTanEstCoefficients  = {2.484f, -1.954923183e-1f, 2.467401101f, XM_1DIVPI};
XMGLOBALCONST XMVECTORF32 g_XMATanEstCoefficients = {7.689891418951e-1f, 1.104742493348f, 8.661844266006e-1f, XM_PIDIV2};
XMGLOBALCONST XMVECTORF32 g_XMASinEstCoefficients = {-1.36178272886711f, 2.37949493464538f, -8.08228565650486e-1f, 2.78440142746736e-1f};
XMGLOBALCONST XMVECTORF32 g_XMASinEstConstants    = {1.00000011921f, XM_PIDIV2, 0.0f, 0.0f};
XMGLOBALCONST XMVECTORF32 g_XMPiConstants0        = {XM_PI, XM_2PI, XM_1DIVPI, XM_1DIV2PI};
XMGLOBALCONST XMVECTORF32 g_XMIdentityR0          = {1.0f, 0.0f, 0.0f, 0.0f};
XMGLOBALCONST XMVECTORF32 g_XMIdentityR1          = {0.0f, 1.0f, 0.0f, 0.0f};
XMGLOBALCONST XMVECTORF32 g_XMIdentityR2          = {0.0f, 0.0f, 1.0f, 0.0f};
XMGLOBALCONST XMVECTORF32 g_XMIdentityR3          = {0.0f, 0.0f, 0.0f, 1.0f};
XMGLOBALCONST XMVECTORF32 g_XMNegIdentityR0       = {-1.0f,0.0f, 0.0f, 0.0f};
XMGLOBALCONST XMVECTORF32 g_XMNegIdentityR1       = {0.0f,-1.0f, 0.0f, 0.0f};
XMGLOBALCONST XMVECTORF32 g_XMNegIdentityR2       = {0.0f, 0.0f,-1.0f, 0.0f};
XMGLOBALCONST XMVECTORF32 g_XMNegIdentityR3       = {0.0f, 0.0f, 0.0f,-1.0f};
XMGLOBALCONST XMVECTORI32 g_XMNegativeZero      = {0x80000000, 0x80000000, 0x80000000, 0x80000000};
XMGLOBALCONST XMVECTORI32 g_XMNegate3           = {0x80000000, 0x80000000, 0x80000000, 0x00000000};
XMGLOBALCONST XMVECTORI32 g_XMMask3             = {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000};
XMGLOBALCONST XMVECTORI32 g_XMMaskX             = {0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000};
XMGLOBALCONST XMVECTORI32 g_XMMaskY             = {0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000};
XMGLOBALCONST XMVECTORI32 g_XMMaskZ             = {0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000};
XMGLOBALCONST XMVECTORI32 g_XMMaskW             = {0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF};
XMGLOBALCONST XMVECTORF32 g_XMOne               = { 1.0f, 1.0f, 1.0f, 1.0f};
XMGLOBALCONST XMVECTORF32 g_XMOne3              = { 1.0f, 1.0f, 1.0f, 0.0f};
XMGLOBALCONST XMVECTORF32 g_XMZero              = { 0.0f, 0.0f, 0.0f, 0.0f};
XMGLOBALCONST XMVECTORF32 g_XMNegativeOne       = {-1.0f,-1.0f,-1.0f,-1.0f};
XMGLOBALCONST XMVECTORF32 g_XMOneHalf           = { 0.5f, 0.5f, 0.5f, 0.5f};
XMGLOBALCONST XMVECTORF32 g_XMNegativeOneHalf   = {-0.5f,-0.5f,-0.5f,-0.5f};
XMGLOBALCONST XMVECTORF32 g_XMNegativeTwoPi     = {-XM_2PI, -XM_2PI, -XM_2PI, -XM_2PI};
XMGLOBALCONST XMVECTORF32 g_XMNegativePi        = {-XM_PI, -XM_PI, -XM_PI, -XM_PI};
XMGLOBALCONST XMVECTORF32 g_XMHalfPi            = {XM_PIDIV2, XM_PIDIV2, XM_PIDIV2, XM_PIDIV2};
XMGLOBALCONST XMVECTORF32 g_XMPi                = {XM_PI, XM_PI, XM_PI, XM_PI};
XMGLOBALCONST XMVECTORF32 g_XMReciprocalPi      = {XM_1DIVPI, XM_1DIVPI, XM_1DIVPI, XM_1DIVPI};
XMGLOBALCONST XMVECTORF32 g_XMTwoPi             = {XM_2PI, XM_2PI, XM_2PI, XM_2PI};
XMGLOBALCONST XMVECTORF32 g_XMReciprocalTwoPi   = {XM_1DIV2PI, XM_1DIV2PI, XM_1DIV2PI, XM_1DIV2PI};
XMGLOBALCONST XMVECTORF32 g_XMEpsilon           = {1.192092896e-7f, 1.192092896e-7f, 1.192092896e-7f, 1.192092896e-7f};
XMGLOBALCONST XMVECTORI32 g_XMInfinity          = {0x7F800000, 0x7F800000, 0x7F800000, 0x7F800000};
XMGLOBALCONST XMVECTORI32 g_XMQNaN              = {0x7FC00000, 0x7FC00000, 0x7FC00000, 0x7FC00000};
XMGLOBALCONST XMVECTORI32 g_XMQNaNTest          = {0x007FFFFF, 0x007FFFFF, 0x007FFFFF, 0x007FFFFF};
XMGLOBALCONST XMVECTORI32 g_XMAbsMask           = {0x7FFFFFFF, 0x7FFFFFFF, 0x7FFFFFFF, 0x7FFFFFFF};
XMGLOBALCONST XMVECTORI32 g_XMFltMin            = {0x00800000, 0x00800000, 0x00800000, 0x00800000};
XMGLOBALCONST XMVECTORI32 g_XMFltMax            = {0x7F7FFFFF, 0x7F7FFFFF, 0x7F7FFFFF, 0x7F7FFFFF};
XMGLOBALCONST XMVECTORI32 g_XMNegOneMask		= {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF};
XMGLOBALCONST XMVECTORI32 g_XMMaskA8R8G8B8      = {0x00FF0000, 0x0000FF00, 0x000000FF, 0xFF000000};
XMGLOBALCONST XMVECTORI32 g_XMFlipA8R8G8B8      = {0x00000000, 0x00000000, 0x00000000, 0x80000000};
XMGLOBALCONST XMVECTORF32 g_XMFixAA8R8G8B8      = {0.0f,0.0f,0.0f,(float)(0x80000000U)};
XMGLOBALCONST XMVECTORF32 g_XMNormalizeA8R8G8B8 = {1.0f/(255.0f*(float)(0x10000)),1.0f/(255.0f*(float)(0x100)),1.0f/255.0f,1.0f/(255.0f*(float)(0x1000000))};
XMGLOBALCONST XMVECTORI32 g_XMMaskA2B10G10R10   = {0x000003FF, 0x000FFC00, 0x3FF00000, 0xC0000000};
XMGLOBALCONST XMVECTORI32 g_XMFlipA2B10G10R10   = {0x00000200, 0x00080000, 0x20000000, 0x80000000};
XMGLOBALCONST XMVECTORF32 g_XMFixAA2B10G10R10   = {-512.0f,-512.0f*(float)(0x400),-512.0f*(float)(0x100000),(float)(0x80000000U)};
XMGLOBALCONST XMVECTORF32 g_XMNormalizeA2B10G10R10 = {1.0f/511.0f,1.0f/(511.0f*(float)(0x400)),1.0f/(511.0f*(float)(0x100000)),1.0f/(3.0f*(float)(0x40000000))};
XMGLOBALCONST XMVECTORI32 g_XMMaskX16Y16        = {0x0000FFFF, 0xFFFF0000, 0x00000000, 0x00000000};
XMGLOBALCONST XMVECTORI32 g_XMFlipX16Y16        = {0x00008000, 0x00000000, 0x00000000, 0x00000000};
XMGLOBALCONST XMVECTORF32 g_XMFixX16Y16         = {-32768.0f,0.0f,0.0f,0.0f};
XMGLOBALCONST XMVECTORF32 g_XMNormalizeX16Y16   = {1.0f/32767.0f,1.0f/(32767.0f*65536.0f),0.0f,0.0f};
XMGLOBALCONST XMVECTORI32 g_XMMaskX16Y16Z16W16  = {0x0000FFFF, 0x0000FFFF, 0xFFFF0000, 0xFFFF0000};
XMGLOBALCONST XMVECTORI32 g_XMFlipX16Y16Z16W16  = {0x00008000, 0x00008000, 0x00000000, 0x00000000};
XMGLOBALCONST XMVECTORF32 g_XMFixX16Y16Z16W16   = {-32768.0f,-32768.0f,0.0f,0.0f};
XMGLOBALCONST XMVECTORF32 g_XMNormalizeX16Y16Z16W16 = {1.0f/32767.0f,1.0f/32767.0f,1.0f/(32767.0f*65536.0f),1.0f/(32767.0f*65536.0f)};
XMGLOBALCONST XMVECTORF32 g_XMNoFraction        = {8388608.0f,8388608.0f,8388608.0f,8388608.0f};
XMGLOBALCONST XMVECTORI32 g_XMMaskByte          = {0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF};
XMGLOBALCONST XMVECTORF32 g_XMNegateX           = {-1.0f, 1.0f, 1.0f, 1.0f};
XMGLOBALCONST XMVECTORF32 g_XMNegateY           = { 1.0f,-1.0f, 1.0f, 1.0f};
XMGLOBALCONST XMVECTORF32 g_XMNegateZ           = { 1.0f, 1.0f,-1.0f, 1.0f};
XMGLOBALCONST XMVECTORF32 g_XMNegateW           = { 1.0f, 1.0f, 1.0f,-1.0f};
XMGLOBALCONST XMVECTORI32 g_XMSelect0101        = {XM_SELECT_0, XM_SELECT_1, XM_SELECT_0, XM_SELECT_1};
XMGLOBALCONST XMVECTORI32 g_XMSelect1010        = {XM_SELECT_1, XM_SELECT_0, XM_SELECT_1, XM_SELECT_0};
XMGLOBALCONST XMVECTORI32 g_XMOneHalfMinusEpsilon = { 0x3EFFFFFD, 0x3EFFFFFD, 0x3EFFFFFD, 0x3EFFFFFD};
XMGLOBALCONST XMVECTORI32 g_XMSelect1000        = {XM_SELECT_1, XM_SELECT_0, XM_SELECT_0, XM_SELECT_0};
XMGLOBALCONST XMVECTORI32 g_XMSelect1100        = {XM_SELECT_1, XM_SELECT_1, XM_SELECT_0, XM_SELECT_0};
XMGLOBALCONST XMVECTORI32 g_XMSelect1110        = {XM_SELECT_1, XM_SELECT_1, XM_SELECT_1, XM_SELECT_0};
XMGLOBALCONST XMVECTORI32 g_XMSwizzleXYXY       = {XM_PERMUTE_0X, XM_PERMUTE_0Y, XM_PERMUTE_0X, XM_PERMUTE_0Y};
XMGLOBALCONST XMVECTORI32 g_XMSwizzleXYZX       = {XM_PERMUTE_0X, XM_PERMUTE_0Y, XM_PERMUTE_0Z, XM_PERMUTE_0X};
XMGLOBALCONST XMVECTORI32 g_XMSwizzleYXZW       = {XM_PERMUTE_0Y, XM_PERMUTE_0X, XM_PERMUTE_0Z, XM_PERMUTE_0W};
XMGLOBALCONST XMVECTORI32 g_XMSwizzleYZXW       = {XM_PERMUTE_0Y, XM_PERMUTE_0Z, XM_PERMUTE_0X, XM_PERMUTE_0W};
XMGLOBALCONST XMVECTORI32 g_XMSwizzleZXYW       = {XM_PERMUTE_0Z, XM_PERMUTE_0X, XM_PERMUTE_0Y, XM_PERMUTE_0W};
XMGLOBALCONST XMVECTORI32 g_XMPermute0X0Y1X1Y   = {XM_PERMUTE_0X, XM_PERMUTE_0Y, XM_PERMUTE_1X, XM_PERMUTE_1Y};
XMGLOBALCONST XMVECTORI32 g_XMPermute0Z0W1Z1W   = {XM_PERMUTE_0Z, XM_PERMUTE_0W, XM_PERMUTE_1Z, XM_PERMUTE_1W};
XMGLOBALCONST XMVECTORF32 g_XMFixupY16          = {1.0f,1.0f/65536.0f,0.0f,0.0f};
XMGLOBALCONST XMVECTORF32 g_XMFixupY16W16       = {1.0f,1.0f,1.0f/65536.0f,1.0f/65536.0f};
XMGLOBALCONST XMVECTORI32 g_XMFlipY             = {0,0x80000000,0,0};
XMGLOBALCONST XMVECTORI32 g_XMFlipZ             = {0,0,0x80000000,0};
XMGLOBALCONST XMVECTORI32 g_XMFlipW             = {0,0,0,0x80000000};
XMGLOBALCONST XMVECTORI32 g_XMFlipYZ            = {0,0x80000000,0x80000000,0};
XMGLOBALCONST XMVECTORI32 g_XMFlipZW            = {0,0,0x80000000,0x80000000};
XMGLOBALCONST XMVECTORI32 g_XMFlipYW            = {0,0x80000000,0,0x80000000};
XMGLOBALCONST XMVECTORI32 g_XMMaskHenD3         = {0x7FF,0x7ff<<11,0x3FF<<22,0};
XMGLOBALCONST XMVECTORI32 g_XMMaskDHen3         = {0x3FF,0x7ff<<10,0x7FF<<21,0};
XMGLOBALCONST XMVECTORF32 g_XMAddUHenD3         = {0,0,32768.0f*65536.0f,0};
XMGLOBALCONST XMVECTORF32 g_XMAddHenD3          = {-1024.0f,-1024.0f*2048.0f,0,0};
XMGLOBALCONST XMVECTORF32 g_XMAddDHen3          = {-512.0f,-1024.0f*1024.0f,0,0};
XMGLOBALCONST XMVECTORF32 g_XMMulHenD3          = {1.0f,1.0f/2048.0f,1.0f/(2048.0f*2048.0f),0};
XMGLOBALCONST XMVECTORF32 g_XMMulDHen3          = {1.0f,1.0f/1024.0f,1.0f/(1024.0f*2048.0f),0};
XMGLOBALCONST XMVECTORI32 g_XMXorHenD3          = {0x400,0x400<<11,0,0};
XMGLOBALCONST XMVECTORI32 g_XMXorDHen3          = {0x200,0x400<<10,0,0};
XMGLOBALCONST XMVECTORI32 g_XMMaskIco4          = {0xFFFFF,0xFFFFF000,0xFFFFF,0xF0000000};
XMGLOBALCONST XMVECTORI32 g_XMXorXIco4          = {0x80000,0,0x80000,0x80000000};
XMGLOBALCONST XMVECTORI32 g_XMXorIco4           = {0x80000,0,0x80000,0};
XMGLOBALCONST XMVECTORF32 g_XMAddXIco4          = {-8.0f*65536.0f,0,-8.0f*65536.0f,32768.0f*65536.0f};
XMGLOBALCONST XMVECTORF32 g_XMAddUIco4          = {0,32768.0f*65536.0f,0,32768.0f*65536.0f};
XMGLOBALCONST XMVECTORF32 g_XMAddIco4           = {-8.0f*65536.0f,0,-8.0f*65536.0f,0};
XMGLOBALCONST XMVECTORF32 g_XMMulIco4           = {1.0f,1.0f/4096.0f,1.0f,1.0f/(4096.0f*65536.0f)};
XMGLOBALCONST XMVECTORI32 g_XMMaskDec4          = {0x3FF,0x3FF<<10,0x3FF<<20,0x3<<30};
XMGLOBALCONST XMVECTORI32 g_XMXorDec4           = {0x200,0x200<<10,0x200<<20,0};
XMGLOBALCONST XMVECTORF32 g_XMAddUDec4          = {0,0,0,32768.0f*65536.0f};
XMGLOBALCONST XMVECTORF32 g_XMAddDec4           = {-512.0f,-512.0f*1024.0f,-512.0f*1024.0f*1024.0f,0};
XMGLOBALCONST XMVECTORF32 g_XMMulDec4           = {1.0f,1.0f/1024.0f,1.0f/(1024.0f*1024.0f),1.0f/(1024.0f*1024.0f*1024.0f)};
XMGLOBALCONST XMVECTORI32 g_XMMaskByte4         = {0xFF,0xFF00,0xFF0000,0xFF000000};
XMGLOBALCONST XMVECTORI32 g_XMXorByte4          = {0x80,0x8000,0x800000,0x00000000};
XMGLOBALCONST XMVECTORF32 g_XMAddByte4          = {-128.0f,-128.0f*256.0f,-128.0f*65536.0f,0};
#else
XMGLOBALCONST XMVECTORF32 g_XMSinCoefficients0;
XMGLOBALCONST XMVECTORF32 g_XMSinCoefficients1;
XMGLOBALCONST XMVECTORF32 g_XMSinCoefficients2;
XMGLOBALCONST XMVECTORF32 g_XMCosCoefficients0;
XMGLOBALCONST XMVECTORF32 g_XMCosCoefficients1;
XMGLOBALCONST XMVECTORF32 g_XMCosCoefficients2;
XMGLOBALCONST XMVECTORF32 g_XMTanCoefficients0;
XMGLOBALCONST XMVECTORF32 g_XMTanCoefficients1;
XMGLOBALCONST XMVECTORF32 g_XMTanCoefficients2;
XMGLOBALCONST XMVECTORF32 g_XMASinCoefficients0;
XMGLOBALCONST XMVECTORF32 g_XMASinCoefficients1;
XMGLOBALCONST XMVECTORF32 g_XMASinCoefficients2;
XMGLOBALCONST XMVECTORF32 g_XMATanCoefficients0;
XMGLOBALCONST XMVECTORF32 g_XMATanCoefficients1;
XMGLOBALCONST XMVECTORF32 g_XMATanCoefficients2;
XMGLOBALCONST XMVECTORF32 g_XMSinEstCoefficients;
XMGLOBALCONST XMVECTORF32 g_XMCosEstCoefficients;
XMGLOBALCONST XMVECTORF32 g_XMTanEstCoefficients;
XMGLOBALCONST XMVECTORF32 g_XMATanEstCoefficients;
XMGLOBALCONST XMVECTORF32 g_XMASinEstCoefficients;
XMGLOBALCONST XMVECTORF32 g_XMASinEstConstants;
XMGLOBALCONST XMVECTORF32 g_XMPiConstants0;
XMGLOBALCONST XMVECTORF32 g_XMIdentityR0;
XMGLOBALCONST XMVECTORF32 g_XMIdentityR1;
XMGLOBALCONST XMVECTORF32 g_XMIdentityR2;
XMGLOBALCONST XMVECTORF32 g_XMIdentityR3;
XMGLOBALCONST XMVECTORF32 g_XMNegIdentityR0;
XMGLOBALCONST XMVECTORF32 g_XMNegIdentityR1;
XMGLOBALCONST XMVECTORF32 g_XMNegIdentityR2;
XMGLOBALCONST XMVECTORF32 g_XMNegIdentityR3;
XMGLOBALCONST XMVECTORI32 g_XMNegativeZero;
XMGLOBALCONST XMVECTORI32 g_XMNegate3;
XMGLOBALCONST XMVECTORI32 g_XMMask3;
XMGLOBALCONST XMVECTORI32 g_XMMaskX;
XMGLOBALCONST XMVECTORI32 g_XMMaskY;
XMGLOBALCONST XMVECTORI32 g_XMMaskZ;
XMGLOBALCONST XMVECTORI32 g_XMMaskW;
XMGLOBALCONST XMVECTORF32 g_XMOne;
XMGLOBALCONST XMVECTORF32 g_XMOne3;
XMGLOBALCONST XMVECTORF32 g_XMZero;
XMGLOBALCONST XMVECTORF32 g_XMNegativeOne;
XMGLOBALCONST XMVECTORF32 g_XMOneHalf;
XMGLOBALCONST XMVECTORF32 g_XMNegativeOneHalf;
XMGLOBALCONST XMVECTORF32 g_XMNegativeTwoPi;
XMGLOBALCONST XMVECTORF32 g_XMNegativePi;
XMGLOBALCONST XMVECTORF32 g_XMHalfPi;
XMGLOBALCONST XMVECTORF32 g_XMPi;
XMGLOBALCONST XMVECTORF32 g_XMReciprocalPi;
XMGLOBALCONST XMVECTORF32 g_XMTwoPi;
XMGLOBALCONST XMVECTORF32 g_XMReciprocalTwoPi;
XMGLOBALCONST XMVECTORF32 g_XMEpsilon;
XMGLOBALCONST XMVECTORI32 g_XMInfinity;
XMGLOBALCONST XMVECTORI32 g_XMQNaN;
XMGLOBALCONST XMVECTORI32 g_XMQNaNTest;
XMGLOBALCONST XMVECTORI32 g_XMAbsMask;
XMGLOBALCONST XMVECTORI32 g_XMFltMin;
XMGLOBALCONST XMVECTORI32 g_XMFltMax;
XMGLOBALCONST XMVECTORI32 g_XMNegOneMask;
XMGLOBALCONST XMVECTORI32 g_XMMaskA8R8G8B8;
XMGLOBALCONST XMVECTORI32 g_XMFlipA8R8G8B8;
XMGLOBALCONST XMVECTORF32 g_XMFixAA8R8G8B8;
XMGLOBALCONST XMVECTORF32 g_XMNormalizeA8R8G8B8;
XMGLOBALCONST XMVECTORI32 g_XMMaskA2B10G10R10;
XMGLOBALCONST XMVECTORI32 g_XMFlipA2B10G10R10;
XMGLOBALCONST XMVECTORF32 g_XMFixAA2B10G10R10;
XMGLOBALCONST XMVECTORF32 g_XMNormalizeA2B10G10R10;
XMGLOBALCONST XMVECTORI32 g_XMMaskX16Y16;
XMGLOBALCONST XMVECTORI32 g_XMFlipX16Y16;
XMGLOBALCONST XMVECTORF32 g_XMFixX16Y16;
XMGLOBALCONST XMVECTORF32 g_XMNormalizeX16Y16;
XMGLOBALCONST XMVECTORI32 g_XMMaskX16Y16Z16W16;
XMGLOBALCONST XMVECTORI32 g_XMFlipX16Y16Z16W16;
XMGLOBALCONST XMVECTORF32 g_XMFixX16Y16Z16W16;
XMGLOBALCONST XMVECTORF32 g_XMNormalizeX16Y16Z16W16;
XMGLOBALCONST XMVECTORF32 g_XMNoFraction;
XMGLOBALCONST XMVECTORI32 g_XMMaskByte;
XMGLOBALCONST XMVECTORF32 g_XMNegateX;
XMGLOBALCONST XMVECTORF32 g_XMNegateY;
XMGLOBALCONST XMVECTORF32 g_XMNegateZ;
XMGLOBALCONST XMVECTORF32 g_XMNegateW;
XMGLOBALCONST XMVECTORI32 g_XMSelect0101;
XMGLOBALCONST XMVECTORI32 g_XMSelect1010;
XMGLOBALCONST XMVECTORI32 g_XMOneHalfMinusEpsilon;
XMGLOBALCONST XMVECTORI32 g_XMSelect1000;
XMGLOBALCONST XMVECTORI32 g_XMSelect1100;
XMGLOBALCONST XMVECTORI32 g_XMSelect1110;
XMGLOBALCONST XMVECTORI32 g_XMSwizzleXYXY;
XMGLOBALCONST XMVECTORI32 g_XMSwizzleXYZX;
XMGLOBALCONST XMVECTORI32 g_XMSwizzleYXZW;
XMGLOBALCONST XMVECTORI32 g_XMSwizzleYZXW;
XMGLOBALCONST XMVECTORI32 g_XMSwizzleZXYW;
XMGLOBALCONST XMVECTORI32 g_XMPermute0X0Y1X1Y;
XMGLOBALCONST XMVECTORI32 g_XMPermute0Z0W1Z1W;
XMGLOBALCONST XMVECTORF32 g_XMFixupY16;
XMGLOBALCONST XMVECTORF32 g_XMFixupY16W16;
XMGLOBALCONST XMVECTORI32 g_XMFlipY;
XMGLOBALCONST XMVECTORI32 g_XMFlipZ;
XMGLOBALCONST XMVECTORI32 g_XMFlipW;
XMGLOBALCONST XMVECTORI32 g_XMFlipYZ;
XMGLOBALCONST XMVECTORI32 g_XMFlipZW;
XMGLOBALCONST XMVECTORI32 g_XMFlipYW;
XMGLOBALCONST XMVECTORI32 g_XMMaskHenD3;
XMGLOBALCONST XMVECTORI32 g_XMMaskDHen3;
XMGLOBALCONST XMVECTORF32 g_XMAddUHenD3;
XMGLOBALCONST XMVECTORF32 g_XMAddHenD3;
XMGLOBALCONST XMVECTORF32 g_XMAddDHen3;
XMGLOBALCONST XMVECTORF32 g_XMMulHenD3;
XMGLOBALCONST XMVECTORF32 g_XMMulDHen3;
XMGLOBALCONST XMVECTORI32 g_XMXorHenD3;
XMGLOBALCONST XMVECTORI32 g_XMXorDHen3;
XMGLOBALCONST XMVECTORI32 g_XMMaskIco4;
XMGLOBALCONST XMVECTORI32 g_XMXorXIco4;
XMGLOBALCONST XMVECTORI32 g_XMXorIco4;
XMGLOBALCONST XMVECTORF32 g_XMAddXIco4;
XMGLOBALCONST XMVECTORF32 g_XMAddUIco4;
XMGLOBALCONST XMVECTORF32 g_XMAddIco4;
XMGLOBALCONST XMVECTORF32 g_XMMulIco4;
XMGLOBALCONST XMVECTORI32 g_XMMaskDec4;
XMGLOBALCONST XMVECTORI32 g_XMXorDec4;
XMGLOBALCONST XMVECTORF32 g_XMAddUDec4;
XMGLOBALCONST XMVECTORF32 g_XMAddDec4;
XMGLOBALCONST XMVECTORF32 g_XMMulDec4;
XMGLOBALCONST XMVECTORI32 g_XMMaskByte4;
XMGLOBALCONST XMVECTORI32 g_XMXorByte4;
XMGLOBALCONST XMVECTORF32 g_XMAddByte4;
#endif
#if defined(_XM_NO_INTRINSICS_) || defined(_XM_SSE_INTRINSICS_)
XMFINLINE XMVECTOR XMVectorSetBinaryConstant(UINT C0, UINT C1, UINT C2, UINT C3)
{
#if defined(_XM_NO_INTRINSICS_)
    XMVECTORU32 vResult;
    vResult.u[0] = (0-(C0&1)) & 0x3F800000;
    vResult.u[1] = (0-(C1&1)) & 0x3F800000;
    vResult.u[2] = (0-(C2&1)) & 0x3F800000;
    vResult.u[3] = (0-(C3&1)) & 0x3F800000;
    return vResult.v;
#else
    static const XMVECTORU32 g_vMask1 = {1,1,1,1};
    __m128i vTemp = _mm_set_epi32(C3,C2,C1,C0);
    vTemp = _mm_and_si128(vTemp,g_vMask1);
    vTemp = _mm_cmpeq_epi32(vTemp,g_vMask1);
    vTemp = _mm_and_si128(vTemp,g_XMOne);
    return reinterpret_cast<const __m128 *>(&vTemp)[0];
#endif
}
XMFINLINE XMVECTOR XMVectorSplatConstant(INT IntConstant, UINT DivExponent)
{
#if defined(_XM_NO_INTRINSICS_)
    XMASSERT( IntConstant >= -16 && IntConstant <= 15 );
    XMASSERT(DivExponent<32);
    {
    XMVECTORI32 V = { IntConstant, IntConstant, IntConstant, IntConstant };
    return XMConvertVectorIntToFloat( V.v, DivExponent);
    }
#else
    XMASSERT( IntConstant >= -16 && IntConstant <= 15 );
    XMASSERT(DivExponent<32);
    __m128i vScale = _mm_set1_epi32(IntConstant);
    XMVECTOR vResult = _mm_cvtepi32_ps(vScale);
    UINT uScale = 0x3F800000U - (DivExponent << 23);
    vScale = _mm_set1_epi32(uScale);
    vResult = _mm_mul_ps(vResult,(const __m128 *)(&vScale)[0]);
    return vResult;
#endif
}
XMFINLINE XMVECTOR XMVectorSplatConstantInt(INT IntConstant)
{
#if defined(_XM_NO_INTRINSICS_)
    XMASSERT( IntConstant >= -16 && IntConstant <= 15 );
    {
    XMVECTORI32 V = { IntConstant, IntConstant, IntConstant, IntConstant };
    return V.v;
    }
#else
    XMASSERT( IntConstant >= -16 && IntConstant <= 15 );
    __m128i V = _mm_set1_epi32( IntConstant );
    return (__m128 *)(&V)[0];
#endif
}
XMFINLINE XMVECTOR XMVectorShiftLeft(FXMVECTOR V1, FXMVECTOR V2, UINT Elements)
{
    return XMVectorPermute(V1, V2, XMVectorPermuteControl((Elements), ((Elements) + 1), ((Elements) + 2), ((Elements) + 3)));
}
XMFINLINE XMVECTOR XMVectorRotateLeft(FXMVECTOR V, UINT Elements)
{
#if defined(_XM_NO_INTRINSICS_)
    XMASSERT( Elements < 4 );
    {
    XMVECTORF32 vResult = { V.vector4_f32[Elements & 3], V.vector4_f32[(Elements + 1) & 3],
                            V.vector4_f32[(Elements + 2) & 3], V.vector4_f32[(Elements + 3) & 3] };
    return vResult.v;
    }
#else
    FLOAT fx = XMVectorGetByIndex(V,(Elements) & 3);
    FLOAT fy = XMVectorGetByIndex(V,((Elements) + 1) & 3);
    FLOAT fz = XMVectorGetByIndex(V,((Elements) + 2) & 3);
    FLOAT fw = XMVectorGetByIndex(V,((Elements) + 3) & 3);
    return _mm_set_ps( fw, fz, fy, fx );
#endif
}
XMFINLINE XMVECTOR XMVectorRotateRight(FXMVECTOR V, UINT Elements)
{
#if defined(_XM_NO_INTRINSICS_)
    XMASSERT( Elements < 4 );
    {
    XMVECTORF32 vResult = { V.vector4_f32[(4 - (Elements)) & 3], V.vector4_f32[(5 - (Elements)) & 3],
                            V.vector4_f32[(6 - (Elements)) & 3], V.vector4_f32[(7 - (Elements)) & 3] };
    return vResult.v;
    }
#else
    FLOAT fx = XMVectorGetByIndex(V,(4 - (Elements)) & 3);
    FLOAT fy = XMVectorGetByIndex(V,(5 - (Elements)) & 3);
    FLOAT fz = XMVectorGetByIndex(V,(6 - (Elements)) & 3);
    FLOAT fw = XMVectorGetByIndex(V,(7 - (Elements)) & 3);
    return _mm_set_ps( fw, fz, fy, fx );
#endif
}
XMFINLINE XMVECTOR XMVectorSwizzle(FXMVECTOR V, UINT E0, UINT E1, UINT E2, UINT E3)
{
#if defined(_XM_NO_INTRINSICS_)
    XMASSERT( (E0 < 4) && (E1 < 4) && (E2 < 4) && (E3 < 4) );
    {
    XMVECTORF32 vResult = { V.vector4_f32[E0], V.vector4_f32[E1], V.vector4_f32[E2], V.vector4_f32[E3] };
    return vResult.v;
    }
#else
    FLOAT fx = XMVectorGetByIndex(V,E0);
    FLOAT fy = XMVectorGetByIndex(V,E1);
    FLOAT fz = XMVectorGetByIndex(V,E2);
    FLOAT fw = XMVectorGetByIndex(V,E3);
    return _mm_set_ps( fw, fz, fy, fx );
#endif
}
XMFINLINE XMVECTOR XMVectorInsert(FXMVECTOR VD, FXMVECTOR VS, UINT VSLeftRotateElements,
                                  UINT Select0, UINT Select1, UINT Select2, UINT Select3)
{
    XMVECTOR Control = XMVectorSelectControl(Select0&1, Select1&1, Select2&1, Select3&1);
    return XMVectorSelect( VD, XMVectorRotateLeft(VS, VSLeftRotateElements), Control );
}
#endif
#include <xnamathconvert.inl>
#include <xnamathvector.inl>
#include <xnamathmatrix.inl>
#include <xnamathmisc.inl>
#endif
