/*+@@file@@----------------------------------------------------------------*//*!
 \file		xnamathconvert.inl
 \par Description 
            Extension and update of headers for PellesC compiler suite.
            01.01.2019 Fixed problems of conversion from C++
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Nov 20 17:04:27 2016
 \date		Modified on Tue Jan  1 17:49:46 2019
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#ifndef __XNAMATHCONVERT_INL__
#define __XNAMATHCONVERT_INL__
#define XM_PACK_FACTOR                  (FLOAT)(1 << 22)
#define XM_UNPACK_FACTOR_UNSIGNED       (FLOAT)(1 << 23)
#define XM_UNPACK_FACTOR_SIGNED         XM_PACK_FACTOR
#define XM_UNPACK_UNSIGNEDN_OFFSET(BitsX, BitsY, BitsZ, BitsW) \
                                        {-XM_UNPACK_FACTOR_UNSIGNED / (FLOAT)((1 << (BitsX)) - 1), \
                                         -XM_UNPACK_FACTOR_UNSIGNED / (FLOAT)((1 << (BitsY)) - 1), \
                                         -XM_UNPACK_FACTOR_UNSIGNED / (FLOAT)((1 << (BitsZ)) - 1), \
                                         -XM_UNPACK_FACTOR_UNSIGNED / (FLOAT)((1 << (BitsW)) - 1)}
#define XM_UNPACK_UNSIGNEDN_SCALE(BitsX, BitsY, BitsZ, BitsW) \
                                        {XM_UNPACK_FACTOR_UNSIGNED / (FLOAT)((1 << (BitsX)) - 1), \
                                         XM_UNPACK_FACTOR_UNSIGNED / (FLOAT)((1 << (BitsY)) - 1), \
                                         XM_UNPACK_FACTOR_UNSIGNED / (FLOAT)((1 << (BitsZ)) - 1), \
                                         XM_UNPACK_FACTOR_UNSIGNED / (FLOAT)((1 << (BitsW)) - 1)}
#define XM_UNPACK_SIGNEDN_SCALE(BitsX, BitsY, BitsZ, BitsW) \
                                        {-XM_UNPACK_FACTOR_SIGNED / (FLOAT)((1 << ((BitsX) - 1)) - 1), \
                                         -XM_UNPACK_FACTOR_SIGNED / (FLOAT)((1 << ((BitsY) - 1)) - 1), \
                                         -XM_UNPACK_FACTOR_SIGNED / (FLOAT)((1 << ((BitsZ) - 1)) - 1), \
                                         -XM_UNPACK_FACTOR_SIGNED / (FLOAT)((1 << ((BitsW) - 1)) - 1)}
#define XM_PACK_UNSIGNEDN_SCALE(BitsX, BitsY, BitsZ, BitsW) \
                                        {-(FLOAT)((1 << (BitsX)) - 1) / XM_PACK_FACTOR, \
                                         -(FLOAT)((1 << (BitsY)) - 1) / XM_PACK_FACTOR, \
                                         -(FLOAT)((1 << (BitsZ)) - 1) / XM_PACK_FACTOR, \
                                         -(FLOAT)((1 << (BitsW)) - 1) / XM_PACK_FACTOR}
#define XM_PACK_SIGNEDN_SCALE(BitsX, BitsY, BitsZ, BitsW) \
                                        {-(FLOAT)((1 << ((BitsX) - 1)) - 1) / XM_PACK_FACTOR, \
                                         -(FLOAT)((1 << ((BitsY) - 1)) - 1) / XM_PACK_FACTOR, \
                                         -(FLOAT)((1 << ((BitsZ) - 1)) - 1) / XM_PACK_FACTOR, \
                                         -(FLOAT)((1 << ((BitsW) - 1)) - 1) / XM_PACK_FACTOR}
#define XM_PACK_OFFSET                  XMVectorSplatConstant(3, 0)
XMFINLINE FLOAT XMConvertHalfToFloat(HALF Value)
{
#if defined(_XM_NO_INTRINSICS_) || defined(_XM_SSE_INTRINSICS_)
	UINT Mantissa;
	UINT Exponent;
	UINT Result;
	Mantissa = (UINT) (Value & 0x03FF);
	if ((Value & 0x7C00) != 0)
	{
		Exponent = (UINT) ((Value >> 10) & 0x1F);
	}
	else if (Mantissa != 0)
	{
		Exponent = 1;
		do
		{
			Exponent--;
			Mantissa <<= 1;
		} while ((Mantissa & 0x0400) == 0);
		Mantissa &= 0x03FF;
	}
	else
	{
		Exponent = (UINT) - 112;
	}
	Result = ((Value & 0x8000) << 16) | ((Exponent + 112) << 23) | (Mantissa << 13);
	return *(FLOAT *) & Result;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMINLINE FLOAT *XMConvertHalfToFloatStream(FLOAT * pOutputStream, UINT OutputStride, CONST HALF * pInputStream, UINT InputStride, UINT HalfCount)
{
#if defined(_XM_NO_INTRINSICS_) || defined(_XM_SSE_INTRINSICS_)
	UINT i;
	BYTE *pHalf = (BYTE *)pInputStream;
	BYTE *pFloat = (BYTE *)pOutputStream;
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	for (i = 0; i < HalfCount; i++)
	{
		*(FLOAT *)pFloat = XMConvertHalfToFloat(*(HALF *)pHalf);
		pHalf += InputStride;
		pFloat += OutputStride;
	}
	return pOutputStream;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE HALF XMConvertFloatToHalf(FLOAT Value)
{
#if defined(_XM_NO_INTRINSICS_) || defined(_XM_SSE_INTRINSICS_)
	UINT Result;
	UINT IValue = ((UINT *) (&Value))[0];
	UINT Sign = (IValue & 0x80000000U) >> 16U;
	IValue = IValue & 0x7FFFFFFFU;
	if (IValue > 0x47FFEFFFU)
	{
		Result = 0x7FFFU;
	}
	else
	{
		if (IValue < 0x38800000U)
		{
			UINT Shift = 113U - (IValue >> 23U);
			IValue = (0x800000U | (IValue & 0x7FFFFFU)) >> Shift;
		}
		else
		{
			IValue += 0xC8000000U;
		}
		Result = ((IValue + 0x0FFFU + ((IValue >> 13U) & 1U)) >> 13U) & 0x7FFFU;
	}
	return (HALF) (Result | Sign);
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMINLINE HALF *XMConvertFloatToHalfStream(HALF * pOutputStream, UINT OutputStride, CONST FLOAT * pInputStream, UINT InputStride, UINT FloatCount)
{
#if defined(_XM_NO_INTRINSICS_) || defined(_XM_SSE_INTRINSICS_)
	UINT i;
	BYTE *pFloat = (BYTE *)pInputStream;
	BYTE *pHalf = (BYTE *)pOutputStream;
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	for (i = 0; i < FloatCount; i++)
	{
		*(HALF *)pHalf = XMConvertFloatToHalf(*(FLOAT *)pFloat);
		pFloat += InputStride;
		pHalf += OutputStride;
	}
	return pOutputStream;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
#if defined(_XM_NO_INTRINSICS_) || defined(_XM_SSE_INTRINSICS_)
#pragma warning(push)
#pragma warning(disable:4701)
XMINLINE XMVECTOR XMConvertVectorIntToFloat(FXMVECTOR VInt, UINT DivExponent)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT ElementIndex;
	FLOAT fScale;
	XMVECTOR Result;
	XMASSERT(DivExponent < 32);
	fScale = 1.0f / (FLOAT) (1U << DivExponent);
	ElementIndex = 0;
	do
	{
		INT iTemp = (INT)VInt.vector4_u32[ElementIndex];
		Result.vector4_f32[ElementIndex] = ((FLOAT)iTemp) * fScale;
	} while (++ElementIndex < 4);
	return Result;
#else
	XMASSERT(DivExponent < 32);
	XMVECTOR vResult = _mm_cvtepi32_ps(CAST_CONST_M128I(VInt));
	UINT uScale = 0x3F800000U - (DivExponent << 23);
	__m128i vScale = _mm_set1_epi32(uScale);
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(vScale));
	return vResult;
#endif
}
XMINLINE XMVECTOR XMConvertVectorFloatToInt(FXMVECTOR VFloat, UINT MulExponent)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT ElementIndex;
	XMVECTOR Result;
	FLOAT fScale;
	XMASSERT(MulExponent < 32);
	fScale = (FLOAT) (1U << MulExponent);
	ElementIndex = 0;
	do
	{
		INT iResult;
		FLOAT fTemp = VFloat.vector4_f32[ElementIndex] * fScale;
		if (fTemp <= -(65536.0f * 32768.0f))
		{
			iResult = (-0x7FFFFFFF) - 1;
		}
		else if (fTemp > (65536.0f * 32768.0f) - 128.0f)
		{
			iResult = 0x7FFFFFFF;
		}
		else
		{
			iResult = (INT)fTemp;
		}
		Result.vector4_u32[ElementIndex] = (UINT)iResult;
	} while (++ElementIndex < 4);
	return Result;
#else
	XMASSERT(MulExponent < 32);
	static const XMVECTORF32 MaxInt = { 65536.0f * 32768.0f - 128.0f, 65536.0f * 32768.0f - 128.0f, 65536.0f * 32768.0f - 128.0f, 65536.0f * 32768.0f - 128.0f };
	XMVECTOR vResult = _mm_set_ps1((FLOAT) (1U << MulExponent));
	vResult = _mm_mul_ps(vResult, VFloat);
	XMVECTOR vOverflow = _mm_cmpgt_ps(vResult, CAST_M128(MaxInt));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResult = _mm_and_ps(vOverflow, CAST_CONST_M128(g_XMAbsMask));
	vOverflow = _mm_andnot_ps(vOverflow, CAST_CONST_M128(vResulti));
	vOverflow = _mm_or_ps(vOverflow, vResult);
	return vOverflow;
#endif
}
XMINLINE XMVECTOR XMConvertVectorUIntToFloat(FXMVECTOR VUInt, UINT DivExponent)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT ElementIndex;
	FLOAT fScale;
	XMVECTOR Result;
	XMASSERT(DivExponent < 32);
	fScale = 1.0f / (FLOAT) (1U << DivExponent);
	ElementIndex = 0;
	do
	{
		Result.vector4_f32[ElementIndex] = (FLOAT)VUInt.vector4_u32[ElementIndex] * fScale;
	} while (++ElementIndex < 4);
	return Result;
#else
	XMASSERT(DivExponent < 32);
	static const XMVECTORF32 FixUnsigned = { 32768.0f * 65536.0f, 32768.0f * 65536.0f, 32768.0f * 65536.0f, 32768.0f * 65536.0f };
	XMVECTOR vMask = _mm_and_ps(VUInt, CAST_CONST_M128(g_XMNegativeZero));
	XMVECTOR vResult = _mm_xor_ps(VUInt, vMask);
	vResult = _mm_cvtepi32_ps(CAST_CONST_M128I(vResult));
	__m128i iMask = _mm_srai_epi32(CAST_CONST_M128I(vMask), 31);
	vMask = _mm_and_ps(CAST_CONST_M128(iMask), CAST_CONST_M128(FixUnsigned));
	vResult = _mm_add_ps(vResult, vMask);
	UINT uScale = 0x3F800000U - (DivExponent << 23);
	iMask = _mm_set1_epi32(uScale);
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(iMask));
	return vResult;
#endif
}
XMINLINE XMVECTOR XMConvertVectorFloatToUInt(FXMVECTOR VFloat, UINT MulExponent)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT ElementIndex;
	XMVECTOR Result;
	FLOAT fScale;
	XMASSERT(MulExponent < 32);
	fScale = (FLOAT) (1U << MulExponent);
	ElementIndex = 0;
	do
	{
		UINT uResult;
		FLOAT fTemp = VFloat.vector4_f32[ElementIndex] * fScale;
		if (fTemp <= 0.0f)
		{
			uResult = 0;
		}
		else if (fTemp >= (65536.0f * 65536.0f))
		{
			uResult = 0xFFFFFFFFU;
		}
		else
		{
			uResult = (UINT)fTemp;
		}
		Result.vector4_u32[ElementIndex] = uResult;
	} while (++ElementIndex < 4);
	return Result;
#else
	XMASSERT(MulExponent < 32);
	static const XMVECTORF32 MaxUInt = { 65536.0f * 65536.0f - 256.0f, 65536.0f * 65536.0f - 256.0f, 65536.0f * 65536.0f - 256.0f, 65536.0f * 65536.0f - 256.0f };
	static const XMVECTORF32 UnsignedFix = { 32768.0f * 65536.0f, 32768.0f * 65536.0f, 32768.0f * 65536.0f, 32768.0f * 65536.0f };
	XMVECTOR vResult = _mm_set_ps1((FLOAT)(1U << MulExponent));
	vResult = _mm_mul_ps(vResult, VFloat);
	vResult = _mm_max_ps(vResult, CAST_CONST_M128(g_XMZero));
	XMVECTOR vOverflow = _mm_cmpgt_ps(vResult, CAST_M128(MaxUInt));
	XMVECTOR vValue = CAST_M128(UnsignedFix);
	XMVECTOR vMask = _mm_cmpge_ps(vResult, vValue);
	vValue = _mm_and_ps(vValue, vMask);
	vResult = _mm_sub_ps(vResult, vValue);
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vMask = _mm_and_ps(vMask, CAST_CONST_M128(g_XMNegativeZero));
	vResult = _mm_xor_ps(CAST_CONST_M128(vResulti), vMask);
	vResult = _mm_or_ps(vResult, vOverflow);
	return vResult;
#endif
}
#pragma warning(pop)
#endif
XMFINLINE XMVECTOR XMLoadInt(CONST UINT *pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 3) == 0);
	V.vector4_u32[0] = *pSource;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 3) == 0);
	return _mm_load_ss((const float *)pSource);
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadFloat(CONST FLOAT *pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 3) == 0);
	V.vector4_f32[0] = *pSource;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 3) == 0);
	return _mm_load_ss(pSource);
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadInt2(CONST UINT *pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	V.vector4_u32[0] = pSource[0];
	V.vector4_u32[1] = pSource[1];
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	__m128 x = _mm_load_ss((const float *)pSource);
	__m128 y = _mm_load_ss((const float *)(pSource + 1));
	return _mm_unpacklo_ps(x, y);
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadInt2A(CONST UINT *pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 0xF) == 0);
	V.vector4_u32[0] = pSource[0];
	V.vector4_u32[1] = pSource[1];
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 0xF) == 0);
	__m128i V = _mm_loadl_epi64((const __m128i *)pSource);
	return CAST_M128(V);
#else
#endif
}
XMFINLINE XMVECTOR XMLoadFloat2(CONST XMFLOAT2 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	((UINT *) (&V.vector4_f32[0]))[0] = ((const UINT *)(&pSource->x))[0];
	((UINT *) (&V.vector4_f32[1]))[0] = ((const UINT *)(&pSource->y))[0];
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	__m128 x = _mm_load_ss(&pSource->x);
	__m128 y = _mm_load_ss(&pSource->y);
	return _mm_unpacklo_ps(x, y);
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadFloat2A(CONST XMFLOAT2A * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 0xF) == 0);
	V.vector4_f32[0] = pSource->x;
	V.vector4_f32[1] = pSource->y;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 0xF) == 0);
	__m128i V = _mm_loadl_epi64((const __m128i *)pSource);
	return CAST_M128(V);
#else
#endif
}
XMFINLINE XMVECTOR XMLoadHalf2(CONST XMHALF2 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pSource);
	{
		XMVECTOR vResult = {
			XMConvertHalfToFloat(pSource->x),
			XMConvertHalfToFloat(pSource->y),
			0.0f,
			0.0f
		};
		return vResult;
	}
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMVECTOR vResult = {
		XMConvertHalfToFloat(pSource->x),
		XMConvertHalfToFloat(pSource->y),
		0.0f,
		0.0f
	};
	return vResult;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadShortN2(CONST XMSHORTN2 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pSource);
	XMASSERT(pSource->x != -32768);
	XMASSERT(pSource->y != -32768);
	{
		XMVECTOR vResult = {
			(FLOAT)pSource->x * (1.0f / 32767.0f),
			(FLOAT)pSource->y * (1.0f / 32767.0f),
			0.0f,
			0.0f
		};
		return vResult;
	}
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMASSERT(pSource->x != -32768);
	XMASSERT(pSource->y != -32768);
	__m128 vTemp = _mm_load_ps1((const float *)(&pSource->x));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskX16Y16));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMFlipX16Y16));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMFixX16Y16));
	return _mm_mul_ps(vTemp, CAST_CONST_M128(g_XMNormalizeX16Y16));
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadShort2(CONST XMSHORT2 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	XMASSERT(pSource->x != -32768);
	XMASSERT(pSource->y != -32768);
	V.vector4_f32[0] = (FLOAT)pSource->x;
	V.vector4_f32[1] = (FLOAT)pSource->y;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMASSERT(pSource->x != -32768);
	XMASSERT(pSource->y != -32768);
	__m128 vTemp = _mm_load_ps1((const float *)(&pSource->x));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskX16Y16));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMFlipX16Y16));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMFixX16Y16));
	return _mm_mul_ps(vTemp, CAST_CONST_M128(g_XMFixupY16));
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadUShortN2(CONST XMUSHORTN2 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	V.vector4_f32[0] = (FLOAT)pSource->x / 65535.0f;
	V.vector4_f32[1] = (FLOAT)pSource->y / 65535.0f;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	static const XMVECTORF32 FixupY16 = { 1.0f / 65535.0f, 1.0f / (65535.0f * 65536.0f), 0.0f, 0.0f };
	static const XMVECTORF32 FixaddY16 = { 0, 32768.0f * 65536.0f, 0, 0 };
	XMASSERT(pSource);
	__m128 vTemp = _mm_load_ps1((const float *)(&pSource->x));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskX16Y16));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMFlipY));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(FixaddY16));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(FixupY16));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadUShort2(CONST XMUSHORT2 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	V.vector4_f32[0] = (FLOAT)pSource->x;
	V.vector4_f32[1] = (FLOAT)pSource->y;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	static const XMVECTORF32 FixaddY16 = { 0, 32768.0f, 0, 0 };
	XMASSERT(pSource);
	__m128 vTemp = _mm_load_ps1((const float *)(&pSource->x));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskX16Y16));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMFlipY));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(g_XMFixupY16));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(FixaddY16));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadInt3(CONST UINT * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	V.vector4_u32[0] = pSource[0];
	V.vector4_u32[1] = pSource[1];
	V.vector4_u32[2] = pSource[2];
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
#ifdef _XM_ISVS2005_
	__m128i V = _mm_set_epi32(0, *(pSource + 2), *(pSource + 1), *pSource);
	return CAST_M128(V);
#else
	__m128 x = _mm_load_ss((const float *)pSource);
	__m128 y = _mm_load_ss((const float *)(pSource + 1));
	__m128 z = _mm_load_ss((const float *)(pSource + 2));
	__m128 xy = _mm_unpacklo_ps(x, y);
	return _mm_movelh_ps(xy, z);
#endif
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadInt3A(CONST UINT * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 0xF) == 0);
	V.vector4_u32[0] = pSource[0];
	V.vector4_u32[1] = pSource[1];
	V.vector4_u32[2] = pSource[2];
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	__m128i V = _mm_load_si128((const __m128i *)pSource);
	return CAST_M128(V);
#else
#endif
}
XMFINLINE XMVECTOR XMLoadFloat3(CONST XMFLOAT3 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	((UINT *) (&V.vector4_f32[0]))[0] = ((const UINT *)(&pSource->x))[0];
	((UINT *) (&V.vector4_f32[1]))[0] = ((const UINT *)(&pSource->y))[0];
	((UINT *) (&V.vector4_f32[2]))[0] = ((const UINT *)(&pSource->z))[0];
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
#ifdef _XM_ISVS2005_
	return _mm_loadu_ps(&pSource->x);
#else
	__m128 x = _mm_load_ss(&pSource->x);
	__m128 y = _mm_load_ss(&pSource->y);
	__m128 z = _mm_load_ss(&pSource->z);
	__m128 xy = _mm_unpacklo_ps(x, y);
	return _mm_movelh_ps(xy, z);
#endif
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadFloat3A(CONST XMFLOAT3A * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 0xF) == 0);
	V.vector4_f32[0] = pSource->x;
	V.vector4_f32[1] = pSource->y;
	V.vector4_f32[2] = pSource->z;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 0xF) == 0);
	return _mm_load_ps(&pSource->x);
#else
#endif
}
XMFINLINE XMVECTOR XMLoadUHenDN3(CONST XMUHENDN3 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	XMASSERT(pSource);
	Element = pSource->v & 0x7FF;
	V.vector4_f32[0] = (FLOAT)Element / 2047.0f;
	Element = (pSource->v >> 11) & 0x7FF;
	V.vector4_f32[1] = (FLOAT)Element / 2047.0f;
	Element = (pSource->v >> 22) & 0x3FF;
	V.vector4_f32[2] = (FLOAT)Element / 1023.0f;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	static const XMVECTORF32 UHenDN3Mul = { 1.0f / 2047.0f, 1.0f / (2047.0f * 2048.0f), 1.0f / (1023.0f * 2048.0f * 2048.0f), 0 };
	XMASSERT(pSource);
	XMVECTOR vResult = _mm_load_ps1((const float *)(&pSource->v));
	vResult = _mm_and_ps(vResult, CAST_CONST_M128(g_XMMaskHenD3));
	vResult = _mm_xor_ps(vResult, CAST_CONST_M128(g_XMFlipZ));
	vResult = _mm_cvtepi32_ps(CAST_CONST_M128I(vResult));
	vResult = _mm_add_ps(vResult, CAST_CONST_M128(g_XMAddUHenD3));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(UHenDN3Mul));
	return vResult;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadUHenD3(CONST XMUHEND3 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	XMASSERT(pSource);
	Element = pSource->v & 0x7FF;
	V.vector4_f32[0] = (FLOAT)Element;
	Element = (pSource->v >> 11) & 0x7FF;
	V.vector4_f32[1] = (FLOAT)Element;
	Element = (pSource->v >> 22) & 0x3FF;
	V.vector4_f32[2] = (FLOAT)Element;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMVECTOR vResult = _mm_load_ps1((const float *)(&pSource->v));
	vResult = _mm_and_ps(vResult, CAST_CONST_M128(g_XMMaskHenD3));
	vResult = _mm_xor_ps(vResult, CAST_CONST_M128(g_XMFlipZ));
	vResult = _mm_cvtepi32_ps(CAST_CONST_M128I(vResult));
	vResult = _mm_add_ps(vResult, CAST_CONST_M128(g_XMAddUHenD3));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(g_XMMulHenD3));
	return vResult;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadHenDN3(CONST XMHENDN3 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	static CONST UINT SignExtendXY[] = { 0x00000000, 0xFFFFF800 };
	static CONST UINT SignExtendZ[] = { 0x00000000, 0xFFFFFC00 };
	XMASSERT(pSource);
	XMASSERT((pSource->v & 0x7FF) != 0x400);
	XMASSERT(((pSource->v >> 11) & 0x7FF) != 0x400);
	XMASSERT(((pSource->v >> 22) & 0x3FF) != 0x200);
	Element = pSource->v & 0x7FF;
	V.vector4_f32[0] = (FLOAT) (SHORT) (Element | SignExtendXY[Element >> 10]) / 1023.0f;
	Element = (pSource->v >> 11) & 0x7FF;
	V.vector4_f32[1] = (FLOAT) (SHORT) (Element | SignExtendXY[Element >> 10]) / 1023.0f;
	Element = (pSource->v >> 22) & 0x3FF;
	V.vector4_f32[2] = (FLOAT) (SHORT) (Element | SignExtendZ[Element >> 9]) / 511.0f;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	static const XMVECTORF32 HenDN3Mul = { 1.0f / 1023.0f, 1.0f / (1023.0f * 2048.0f), 1.0f / (511.0f * 2048.0f * 2048.0f), 0 };
	XMASSERT(pSource);
	XMASSERT((pSource->v & 0x7FF) != 0x400);
	XMASSERT(((pSource->v >> 11) & 0x7FF) != 0x400);
	XMASSERT(((pSource->v >> 22) & 0x3FF) != 0x200);
	XMVECTOR vResult = _mm_load_ps1((const float *)(&pSource->v));
	vResult = _mm_and_ps(vResult, CAST_CONST_M128(g_XMMaskHenD3));
	vResult = _mm_xor_ps(vResult, CAST_CONST_M128(g_XMXorHenD3));
	vResult = _mm_cvtepi32_ps(CAST_CONST_M128I(vResult));
	vResult = _mm_add_ps(vResult, CAST_CONST_M128(g_XMAddHenD3));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(HenDN3Mul));
	return vResult;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadHenD3(CONST XMHEND3 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	static CONST UINT SignExtendXY[] = { 0x00000000, 0xFFFFF800 };
	static CONST UINT SignExtendZ[] = { 0x00000000, 0xFFFFFC00 };
	XMASSERT(pSource);
	XMASSERT((pSource->v & 0x7FF) != 0x400);
	XMASSERT(((pSource->v >> 11) & 0x7FF) != 0x400);
	XMASSERT(((pSource->v >> 22) & 0x3FF) != 0x200);
	Element = pSource->v & 0x7FF;
	V.vector4_f32[0] = (FLOAT) (SHORT) (Element | SignExtendXY[Element >> 10]);
	Element = (pSource->v >> 11) & 0x7FF;
	V.vector4_f32[1] = (FLOAT) (SHORT) (Element | SignExtendXY[Element >> 10]);
	Element = (pSource->v >> 22) & 0x3FF;
	V.vector4_f32[2] = (FLOAT) (SHORT) (Element | SignExtendZ[Element >> 9]);
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMASSERT((pSource->v & 0x7FF) != 0x400);
	XMASSERT(((pSource->v >> 11) & 0x7FF) != 0x400);
	XMASSERT(((pSource->v >> 22) & 0x3FF) != 0x200);
	XMVECTOR vResult = _mm_load_ps1((const float *)(&pSource->v));
	vResult = _mm_and_ps(vResult, CAST_CONST_M128(g_XMMaskHenD3));
	vResult = _mm_xor_ps(vResult, CAST_CONST_M128(g_XMXorHenD3));
	vResult = _mm_cvtepi32_ps(CAST_CONST_M128I(vResult));
	vResult = _mm_add_ps(vResult, CAST_CONST_M128(g_XMAddHenD3));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(g_XMMulHenD3));
	return vResult;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadUDHenN3(CONST XMUDHENN3 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	XMASSERT(pSource);
	Element = pSource->v & 0x3FF;
	V.vector4_f32[0] = (FLOAT)Element / 1023.0f;
	Element = (pSource->v >> 10) & 0x7FF;
	V.vector4_f32[1] = (FLOAT)Element / 2047.0f;
	Element = (pSource->v >> 21) & 0x7FF;
	V.vector4_f32[2] = (FLOAT)Element / 2047.0f;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	static const XMVECTORF32 UDHenN3Mul = { 1.0f / 1023.0f, 1.0f / (2047.0f * 1024.0f), 1.0f / (2047.0f * 1024.0f * 2048.0f), 0 };
	XMASSERT(pSource);
	XMVECTOR vResult = _mm_load_ps1((const float *)(&pSource->v));
	vResult = _mm_and_ps(vResult, CAST_CONST_M128(g_XMMaskDHen3));
	vResult = _mm_xor_ps(vResult, CAST_CONST_M128(g_XMFlipZ));
	vResult = _mm_cvtepi32_ps(CAST_CONST_M128I(vResult));
	vResult = _mm_add_ps(vResult, CAST_CONST_M128(g_XMAddUHenD3));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(UDHenN3Mul));
	return vResult;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadUDHen3(CONST XMUDHEN3 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	XMASSERT(pSource);
	Element = pSource->v & 0x3FF;
	V.vector4_f32[0] = (FLOAT)Element;
	Element = (pSource->v >> 10) & 0x7FF;
	V.vector4_f32[1] = (FLOAT)Element;
	Element = (pSource->v >> 21) & 0x7FF;
	V.vector4_f32[2] = (FLOAT)Element;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMVECTOR vResult = _mm_load_ps1((const float *)(&pSource->v));
	vResult = _mm_and_ps(vResult, CAST_CONST_M128(g_XMMaskDHen3));
	vResult = _mm_xor_ps(vResult, CAST_CONST_M128(g_XMFlipZ));
	vResult = _mm_cvtepi32_ps(CAST_CONST_M128I(vResult));
	vResult = _mm_add_ps(vResult, CAST_CONST_M128(g_XMAddUHenD3));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(g_XMMulDHen3));
	return vResult;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadDHenN3(CONST XMDHENN3 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	static CONST UINT SignExtendX[] = { 0x00000000, 0xFFFFFC00 };
	static CONST UINT SignExtendYZ[] = { 0x00000000, 0xFFFFF800 };
	XMASSERT(pSource);
	XMASSERT((pSource->v & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 10) & 0x7FF) != 0x400);
	XMASSERT(((pSource->v >> 21) & 0x7FF) != 0x400);
	Element = pSource->v & 0x3FF;
	V.vector4_f32[0] = (FLOAT) (SHORT) (Element | SignExtendX[Element >> 9]) / 511.0f;
	Element = (pSource->v >> 10) & 0x7FF;
	V.vector4_f32[1] = (FLOAT) (SHORT) (Element | SignExtendYZ[Element >> 10]) / 1023.0f;
	Element = (pSource->v >> 21) & 0x7FF;
	V.vector4_f32[2] = (FLOAT) (SHORT) (Element | SignExtendYZ[Element >> 10]) / 1023.0f;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	static const XMVECTORF32 DHenN3Mul = { 1.0f / 511.0f, 1.0f / (1023.0f * 1024.0f), 1.0f / (1023.0f * 1024.0f * 2048.0f), 0 };
	XMASSERT(pSource);
	XMASSERT((pSource->v & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 10) & 0x7FF) != 0x400);
	XMASSERT(((pSource->v >> 21) & 0x7FF) != 0x400);
	XMVECTOR vResult = _mm_load_ps1((const float *)(&pSource->v));
	vResult = _mm_and_ps(vResult, CAST_CONST_M128(g_XMMaskDHen3));
	vResult = _mm_xor_ps(vResult, CAST_CONST_M128(g_XMXorDHen3));
	vResult = _mm_cvtepi32_ps(CAST_CONST_M128I(vResult));
	vResult = _mm_add_ps(vResult, CAST_CONST_M128(g_XMAddDHen3));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(DHenN3Mul));
	return vResult;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadDHen3(CONST XMDHEN3 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	static CONST UINT SignExtendX[] = { 0x00000000, 0xFFFFFC00 };
	static CONST UINT SignExtendYZ[] = { 0x00000000, 0xFFFFF800 };
	XMASSERT(pSource);
	XMASSERT((pSource->v & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 10) & 0x7FF) != 0x400);
	XMASSERT(((pSource->v >> 21) & 0x7FF) != 0x400);
	Element = pSource->v & 0x3FF;
	V.vector4_f32[0] = (FLOAT) (SHORT) (Element | SignExtendX[Element >> 9]);
	Element = (pSource->v >> 10) & 0x7FF;
	V.vector4_f32[1] = (FLOAT) (SHORT) (Element | SignExtendYZ[Element >> 10]);
	Element = (pSource->v >> 21) & 0x7FF;
	V.vector4_f32[2] = (FLOAT) (SHORT) (Element | SignExtendYZ[Element >> 10]);
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMASSERT((pSource->v & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 10) & 0x7FF) != 0x400);
	XMASSERT(((pSource->v >> 21) & 0x7FF) != 0x400);
	XMVECTOR vResult = _mm_load_ps1((const float *)(&pSource->v));
	vResult = _mm_and_ps(vResult, CAST_CONST_M128(g_XMMaskDHen3));
	vResult = _mm_xor_ps(vResult, CAST_CONST_M128(g_XMXorDHen3));
	vResult = _mm_cvtepi32_ps(CAST_CONST_M128I(vResult));
	vResult = _mm_add_ps(vResult, CAST_CONST_M128(g_XMAddDHen3));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(g_XMMulDHen3));
	return vResult;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadU565(CONST XMU565 * pSource)
{
#if defined(_XM_SSE_INTRINSICS_) && !defined(_XM_NO_INTRINSICS_)
	static const XMVECTORI32 U565And = { 0x1F, 0x3F << 5, 0x1F << 11, 0 };
	static const XMVECTORF32 U565Mul = { 1.0f, 1.0f / 32.0f, 1.0f / 2048.f, 0 };
	XMASSERT(pSource);
	XMVECTOR vResult = _mm_load_ps1((const float *)(&pSource->v));
	vResult = _mm_and_ps(vResult, CAST_CONST_M128(U565And));
	vResult = _mm_cvtepi32_ps(CAST_CONST_M128I(vResult));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(U565Mul));
	return vResult;
#else
	XMVECTOR V;
	UINT Element;
	XMASSERT(pSource);
	Element = pSource->v & 0x1F;
	V.vector4_f32[0] = (FLOAT)Element;
	Element = (pSource->v >> 5) & 0x3F;
	V.vector4_f32[1] = (FLOAT)Element;
	Element = (pSource->v >> 11) & 0x1F;
	V.vector4_f32[2] = (FLOAT)Element;
	return V;
#endif
}
XMFINLINE XMVECTOR XMLoadFloat3PK(CONST XMFLOAT3PK * pSource)
{
	_DECLSPEC_ALIGN_16_ UINT Result[4];
	UINT Mantissa;
	UINT Exponent;
	XMASSERT(pSource);
	Mantissa = pSource->xm;
	if (pSource->xe == 0x1f)
	{
		Result[0] = 0x7f800000 | (pSource->xm << 17);
	}
	else
	{
		if (pSource->xe != 0)
		{
			Exponent = pSource->xe;
		}
		else if (Mantissa != 0)
		{
			Exponent = 1;

			do
			{
				Exponent--;
				Mantissa <<= 1;
			} while ((Mantissa & 0x40) == 0);

			Mantissa &= 0x3F;
		}
		else
		{
			Exponent = (UINT) - 112;
		}

		Result[0] = ((Exponent + 112) << 23) | (Mantissa << 17);
	}
	Mantissa = pSource->ym;
	if (pSource->ye == 0x1f)
	{
		Result[1] = 0x7f800000 | (pSource->ym << 17);
	}
	else
	{
		if (pSource->ye != 0)
		{
			Exponent = pSource->ye;
		}
		else if (Mantissa != 0)
		{
			Exponent = 1;

			do
			{
				Exponent--;
				Mantissa <<= 1;
			} while ((Mantissa & 0x40) == 0);

			Mantissa &= 0x3F;
		}
		else
		{
			Exponent = (UINT) - 112;
		}

		Result[1] = ((Exponent + 112) << 23) | (Mantissa << 17);
	}
	Mantissa = pSource->zm;
	if (pSource->ze == 0x1f)
	{
		Result[2] = 0x7f800000 | (pSource->zm << 17);
	}
	else
	{
		if (pSource->ze != 0)
		{
			Exponent = pSource->ze;
		}
		else if (Mantissa != 0)
		{
			Exponent = 1;

			do
			{
				Exponent--;
				Mantissa <<= 1;
			} while ((Mantissa & 0x20) == 0);

			Mantissa &= 0x1F;
		}
		else
		{
			Exponent = (UINT) - 112;
		}
		Result[2] = ((Exponent + 112) << 23) | (Mantissa << 18);
	}
	return XMLoadFloat3A((XMFLOAT3A *) & Result);
}
XMFINLINE XMVECTOR XMLoadFloat3SE(CONST XMFLOAT3SE * pSource)
{
	_DECLSPEC_ALIGN_16_ UINT Result[4];
	UINT Mantissa;
	UINT Exponent, ExpBits;
	XMASSERT(pSource);
	if (pSource->e == 0x1f)
	{
		Result[0] = 0x7f800000 | (pSource->xm << 14);
		Result[1] = 0x7f800000 | (pSource->ym << 14);
		Result[2] = 0x7f800000 | (pSource->zm << 14);
	}
	else if (pSource->e != 0)
	{
		Exponent = pSource->e;
		ExpBits = (Exponent + 112) << 23;
		Mantissa = pSource->xm;
		Result[0] = ExpBits | (Mantissa << 14);
		Mantissa = pSource->ym;
		Result[1] = ExpBits | (Mantissa << 14);
		Mantissa = pSource->zm;
		Result[2] = ExpBits | (Mantissa << 14);
	}
	else
	{
		Mantissa = pSource->xm;
		if (Mantissa != 0)
		{
			Exponent = 1;
			do
			{
				Exponent--;
				Mantissa <<= 1;
			} while ((Mantissa & 0x200) == 0);
			Mantissa &= 0x1FF;
		}
		else
		{
			Exponent = (UINT) - 112;
		}
		Result[0] = ((Exponent + 112) << 23) | (Mantissa << 14);
		Mantissa = pSource->ym;
		if (Mantissa != 0)
		{
			Exponent = 1;
			do
			{
				Exponent--;
				Mantissa <<= 1;
			} while ((Mantissa & 0x200) == 0);
			Mantissa &= 0x1FF;
		}
		else
		{
			Exponent = (UINT) - 112;
		}
		Result[1] = ((Exponent + 112) << 23) | (Mantissa << 14);
		Mantissa = pSource->zm;
		if (Mantissa != 0)
		{
			Exponent = 1;
			do
			{
				Exponent--;
				Mantissa <<= 1;
			} while ((Mantissa & 0x200) == 0);
			Mantissa &= 0x1FF;
		}
		else
		{
			Exponent = (UINT) - 112;
		}
		Result[2] = ((Exponent + 112) << 23) | (Mantissa << 14);
	}
	return XMLoadFloat3A((XMFLOAT3A *) & Result);
}
XMFINLINE XMVECTOR XMLoadInt4(CONST UINT * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	V.vector4_u32[0] = pSource[0];
	V.vector4_u32[1] = pSource[1];
	V.vector4_u32[2] = pSource[2];
	V.vector4_u32[3] = pSource[3];
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	__m128i V = _mm_loadu_si128((const __m128i *)pSource);
	return CAST_M128(V);
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadInt4A(CONST UINT * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 0xF) == 0);
	V.vector4_u32[0] = pSource[0];
	V.vector4_u32[1] = pSource[1];
	V.vector4_u32[2] = pSource[2];
	V.vector4_u32[3] = pSource[3];
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 0xF) == 0);
	__m128i V = _mm_load_si128((const __m128i *)pSource);
	return CAST_M128(V);
#else
#endif
}
XMFINLINE XMVECTOR XMLoadFloat4(CONST XMFLOAT4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	((UINT *) (&V.vector4_f32[0]))[0] = ((const UINT *)(&pSource->x))[0];
	((UINT *) (&V.vector4_f32[1]))[0] = ((const UINT *)(&pSource->y))[0];
	((UINT *) (&V.vector4_f32[2]))[0] = ((const UINT *)(&pSource->z))[0];
	((UINT *) (&V.vector4_f32[3]))[0] = ((const UINT *)(&pSource->w))[0];
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	return _mm_loadu_ps(&pSource->x);
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadFloat4A(CONST XMFLOAT4A * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 0xF) == 0);
	V.vector4_f32[0] = pSource->x;
	V.vector4_f32[1] = pSource->y;
	V.vector4_f32[2] = pSource->z;
	V.vector4_f32[3] = pSource->w;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 0xF) == 0);
	return _mm_load_ps(&pSource->x);
#else
#endif
}
XMFINLINE XMVECTOR XMLoadHalf4(CONST XMHALF4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pSource);
	{
		XMVECTOR vResult = {
			XMConvertHalfToFloat(pSource->x),
			XMConvertHalfToFloat(pSource->y),
			XMConvertHalfToFloat(pSource->z),
			XMConvertHalfToFloat(pSource->w)
		};
		return vResult;
	}
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMVECTOR vResult = {
		XMConvertHalfToFloat(pSource->x),
		XMConvertHalfToFloat(pSource->y),
		XMConvertHalfToFloat(pSource->z),
		XMConvertHalfToFloat(pSource->w)
	};
	return vResult;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadShortN4(CONST XMSHORTN4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pSource);
	XMASSERT(pSource->x != -32768);
	XMASSERT(pSource->y != -32768);
	XMASSERT(pSource->z != -32768);
	XMASSERT(pSource->w != -32768);
	{
		XMVECTOR vResult = {
			(FLOAT)pSource->x * (1.0f / 32767.0f),
			(FLOAT)pSource->y * (1.0f / 32767.0f),
			(FLOAT)pSource->z * (1.0f / 32767.0f),
			(FLOAT)pSource->w * (1.0f / 32767.0f)
		};
		return vResult;
	}
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMASSERT(pSource->x != -32768);
	XMASSERT(pSource->y != -32768);
	XMASSERT(pSource->z != -32768);
	XMASSERT(pSource->w != -32768);
	__m128d vIntd = _mm_load1_pd((const double *)(&pSource->x));
	__m128 vTemp = _mm_and_ps(CAST_CONST_M128(vIntd), CAST_CONST_M128(g_XMMaskX16Y16Z16W16));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMFlipX16Y16Z16W16));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMFixX16Y16Z16W16));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(g_XMNormalizeX16Y16Z16W16));
	vTemp = _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(3, 1, 2, 0));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadShort4(CONST XMSHORT4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	XMASSERT(pSource->x != -32768);
	XMASSERT(pSource->y != -32768);
	XMASSERT(pSource->z != -32768);
	XMASSERT(pSource->w != -32768);
	V.vector4_f32[0] = (FLOAT)pSource->x;
	V.vector4_f32[1] = (FLOAT)pSource->y;
	V.vector4_f32[2] = (FLOAT)pSource->z;
	V.vector4_f32[3] = (FLOAT)pSource->w;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMASSERT(pSource->x != -32768);
	XMASSERT(pSource->y != -32768);
	XMASSERT(pSource->z != -32768);
	XMASSERT(pSource->w != -32768);
	__m128d vIntd = _mm_load1_pd((const double *)(&pSource->x));
	__m128 vTemp = _mm_and_ps(CAST_CONST_M128(vIntd), CAST_CONST_M128(g_XMMaskX16Y16Z16W16));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMFlipX16Y16Z16W16));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMFixX16Y16Z16W16));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(g_XMFixupY16W16));
	return _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(3, 1, 2, 0));
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadUShortN4(CONST XMUSHORTN4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	V.vector4_f32[0] = (FLOAT)pSource->x / 65535.0f;
	V.vector4_f32[1] = (FLOAT)pSource->y / 65535.0f;
	V.vector4_f32[2] = (FLOAT)pSource->z / 65535.0f;
	V.vector4_f32[3] = (FLOAT)pSource->w / 65535.0f;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	static const XMVECTORF32 FixupY16W16 = { 1.0f / 65535.0f, 1.0f / 65535.0f, 1.0f / (65535.0f * 65536.0f), 1.0f / (65535.0f * 65536.0f) };
	static const XMVECTORF32 FixaddY16W16 = { 0, 0, 32768.0f * 65536.0f, 32768.0f * 65536.0f };
	XMASSERT(pSource);
	__m128d vIntd = _mm_load1_pd((const double *)(&pSource->x));
	__m128 vTemp = _mm_and_ps(CAST_CONST_M128(vIntd), CAST_CONST_M128(g_XMMaskX16Y16Z16W16));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMFlipZW));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(FixaddY16W16));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(FixupY16W16));
	return _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(3, 1, 2, 0));
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadUShort4(CONST XMUSHORT4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	V.vector4_f32[0] = (FLOAT)pSource->x;
	V.vector4_f32[1] = (FLOAT)pSource->y;
	V.vector4_f32[2] = (FLOAT)pSource->z;
	V.vector4_f32[3] = (FLOAT)pSource->w;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	static const XMVECTORF32 FixaddY16W16 = { 0, 0, 32768.0f, 32768.0f };
	XMASSERT(pSource);
	__m128d vIntd = _mm_load1_pd((const double *)(&pSource->x));
	__m128 vTemp = _mm_and_ps(CAST_CONST_M128(vIntd), CAST_CONST_M128(g_XMMaskX16Y16Z16W16));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMFlipZW));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(g_XMFixupY16W16));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(FixaddY16W16));
	return _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(3, 1, 2, 0));
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadXIcoN4(CONST XMXICON4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	static CONST UINT SignExtend[] = { 0x00000000, 0xFFF00000 };
	XMASSERT(pSource);
	XMASSERT((pSource->v & 0xFFFFFull) != 0x80000ull);
	XMASSERT(((pSource->v >> 20) & 0xFFFFFull) != 0x80000ull);
	XMASSERT(((pSource->v >> 40) & 0xFFFFFull) != 0x80000ull);
	Element = (UINT) (pSource->v & 0xFFFFF);
	V.vector4_f32[0] = (FLOAT) (INT) (Element | SignExtend[Element >> 19]) / 524287.0f;
	Element = (UINT) ((pSource->v >> 20) & 0xFFFFF);
	V.vector4_f32[1] = (FLOAT) (INT) (Element | SignExtend[Element >> 19]) / 524287.0f;
	Element = (UINT) ((pSource->v >> 40) & 0xFFFFF);
	V.vector4_f32[2] = (FLOAT) (INT) (Element | SignExtend[Element >> 19]) / 524287.0f;
	V.vector4_f32[3] = (FLOAT) (pSource->v >> 60) / 15.0f;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT((pSource->v & 0xFFFFFull) != 0x80000ull);
	XMASSERT(((pSource->v >> 20) & 0xFFFFFull) != 0x80000ull);
	XMASSERT(((pSource->v >> 40) & 0xFFFFFull) != 0x80000ull);
	static const XMVECTORF32 LoadXIcoN4Mul = { 1.0f / 524287.0f, 1.0f / (524287.0f * 4096.0f), 1.0f / 524287.0f, 1.0f / (15.0f * 4096.0f * 65536.0f) };
	XMASSERT(pSource);
	__m128d vResultd = _mm_load_sd((const double *)(&pSource->v));
	__m128i vResulti = _mm_srli_si128(CAST_CONST_M128I(vResultd), 8 / 8);
	XMVECTOR vTemp = _mm_shuffle_ps(CAST_CONST_M128(vResultd), CAST_CONST_M128(vResulti), _MM_SHUFFLE(1, 0, 1, 0));
	vTemp = _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(1, 3, 2, 0));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskIco4));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMXorXIco4));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMAddXIco4));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(CAST_CONST_M128(LoadXIcoN4Mul)));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadXIco4(CONST XMXICO4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	static CONST UINT SignExtend[] = { 0x00000000, 0xFFF00000 };
	XMASSERT(pSource);
	XMASSERT((pSource->v & 0xFFFFFull) != 0x80000ull);
	XMASSERT(((pSource->v >> 20) & 0xFFFFFull) != 0x80000ull);
	XMASSERT(((pSource->v >> 40) & 0xFFFFFull) != 0x80000ull);
	Element = (UINT) (pSource->v & 0xFFFFF);
	V.vector4_f32[0] = (FLOAT) (INT) (Element | SignExtend[Element >> 19]);
	Element = (UINT) ((pSource->v >> 20) & 0xFFFFF);
	V.vector4_f32[1] = (FLOAT) (INT) (Element | SignExtend[Element >> 19]);
	Element = (UINT) ((pSource->v >> 40) & 0xFFFFF);
	V.vector4_f32[2] = (FLOAT) (INT) (Element | SignExtend[Element >> 19]);
	V.vector4_f32[3] = (FLOAT) (pSource->v >> 60);
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT((pSource->v & 0xFFFFFull) != 0x80000ull);
	XMASSERT(((pSource->v >> 20) & 0xFFFFFull) != 0x80000ull);
	XMASSERT(((pSource->v >> 40) & 0xFFFFFull) != 0x80000ull);
	XMASSERT(pSource);
	__m128d vResultd = _mm_load_sd((const double *)(&pSource->v));
	__m128i vResulti = _mm_srli_si128(CAST_CONST_M128I(vResultd), 8 / 8);
	XMVECTOR vTemp = _mm_shuffle_ps(CAST_CONST_M128(vResultd), CAST_CONST_M128(vResulti), _MM_SHUFFLE(1, 0, 1, 0));
	vTemp = _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(1, 3, 2, 0));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskIco4));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMXorXIco4));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMAddXIco4));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(g_XMMulIco4));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadUIcoN4(CONST XMUICON4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	V.vector4_f32[0] = (FLOAT) (pSource->v & 0xFFFFF) / 1048575.0f;
	V.vector4_f32[1] = (FLOAT) ((pSource->v >> 20) & 0xFFFFF) / 1048575.0f;
	V.vector4_f32[2] = (FLOAT) ((pSource->v >> 40) & 0xFFFFF) / 1048575.0f;
	V.vector4_f32[3] = (FLOAT) (pSource->v >> 60) / 15.0f;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	static const XMVECTORF32 LoadUIcoN4Mul = { 1.0f / 1048575.0f, 1.0f / (1048575.0f * 4096.0f), 1.0f / 1048575.0f, 1.0f / (15.0f * 4096.0f * 65536.0f) };
	XMASSERT(pSource);
	__m128d vResultd = _mm_load_sd((const double *)(&pSource->v));
	__m128i vResulti = _mm_srli_si128(CAST_CONST_M128I(vResultd), 8 / 8);
	XMVECTOR vTemp = _mm_shuffle_ps(CAST_CONST_M128(vResultd), CAST_CONST_M128(vResulti), _MM_SHUFFLE(1, 0, 1, 0));
	vTemp = _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(1, 3, 2, 0));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskIco4));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMFlipYW));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMAddUIco4));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(CAST_CONST_M128(LoadUIcoN4Mul)));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadUIco4(CONST XMUICO4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	V.vector4_f32[0] = (FLOAT) (pSource->v & 0xFFFFF);
	V.vector4_f32[1] = (FLOAT) ((pSource->v >> 20) & 0xFFFFF);
	V.vector4_f32[2] = (FLOAT) ((pSource->v >> 40) & 0xFFFFF);
	V.vector4_f32[3] = (FLOAT) (pSource->v >> 60);
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	__m128d vResultd = _mm_load_sd((const double *)(&pSource->v));
	__m128i vResulti = _mm_srli_si128(CAST_CONST_M128I(vResultd), 8 / 8);
	XMVECTOR vTemp = _mm_shuffle_ps(CAST_CONST_M128(vResultd), CAST_CONST_M128(vResulti), _MM_SHUFFLE(1, 0, 1, 0));
	vTemp = _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(1, 3, 2, 0));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskIco4));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMFlipYW));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMAddUIco4));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(g_XMMulIco4));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadIcoN4(CONST XMICON4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	static CONST UINT SignExtend[] = { 0x00000000, 0xFFF00000 };
	static CONST UINT SignExtendW[] = { 0x00000000, 0xFFFFFFF0 };
	XMASSERT(pSource);
	Element = (UINT) (pSource->v & 0xFFFFF);
	V.vector4_f32[0] = (FLOAT) (INT) (Element | SignExtend[Element >> 19]) / 524287.0f;
	Element = (UINT) ((pSource->v >> 20) & 0xFFFFF);
	V.vector4_f32[1] = (FLOAT) (INT) (Element | SignExtend[Element >> 19]) / 524287.0f;
	Element = (UINT) ((pSource->v >> 40) & 0xFFFFF);
	V.vector4_f32[2] = (FLOAT) (INT) (Element | SignExtend[Element >> 19]) / 524287.0f;
	Element = (UINT) (pSource->v >> 60);
	V.vector4_f32[3] = (FLOAT) (INT) (Element | SignExtendW[Element >> 3]) / 7.0f;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	static const XMVECTORF32 LoadIcoN4Mul = { 1.0f / 524287.0f, 1.0f / (524287.0f * 4096.0f), 1.0f / 524287.0f, 1.0f / (7.0f * 4096.0f * 65536.0f) };
	XMASSERT(pSource);
	__m128d vResultd = _mm_load_sd((const double *)(&pSource->v));
	__m128i vResulti = _mm_srli_si128(CAST_CONST_M128I(vResultd), 8 / 8);
	XMVECTOR vTemp = _mm_shuffle_ps(CAST_CONST_M128(vResultd), CAST_CONST_M128(vResulti), _MM_SHUFFLE(1, 0, 1, 0));
	vTemp = _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(1, 3, 2, 0));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskIco4));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMXorIco4));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMAddIco4));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(CAST_CONST_M128(LoadIcoN4Mul)));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadIco4(CONST XMICO4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	static CONST UINT SignExtend[] = { 0x00000000, 0xFFF00000 };
	static CONST UINT SignExtendW[] = { 0x00000000, 0xFFFFFFF0 };
	XMASSERT(pSource);
	Element = (UINT) (pSource->v & 0xFFFFF);
	V.vector4_f32[0] = (FLOAT) (INT) (Element | SignExtend[Element >> 19]);
	Element = (UINT) ((pSource->v >> 20) & 0xFFFFF);
	V.vector4_f32[1] = (FLOAT) (INT) (Element | SignExtend[Element >> 19]);
	Element = (UINT) ((pSource->v >> 40) & 0xFFFFF);
	V.vector4_f32[2] = (FLOAT) (INT) (Element | SignExtend[Element >> 19]);
	Element = (UINT) (pSource->v >> 60);
	V.vector4_f32[3] = (FLOAT) (INT) (Element | SignExtendW[Element >> 3]);
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	__m128d vResultd = _mm_load_sd((const double *)(&pSource->v));
	__m128i vResulti = _mm_srli_si128(CAST_CONST_M128I(vResultd), 8 / 8);
	XMVECTOR vTemp = _mm_shuffle_ps(CAST_CONST_M128(vResultd), CAST_CONST_M128(vResulti), _MM_SHUFFLE(1, 0, 1, 0));
	vTemp = _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(1, 3, 2, 0));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskIco4));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMXorIco4));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMAddIco4));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(g_XMMulIco4));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadXDecN4(CONST XMXDECN4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	static CONST UINT SignExtend[] = { 0x00000000, 0xFFFFFC00 };
	XMASSERT(pSource);
	XMASSERT((pSource->v & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 10) & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 20) & 0x3FF) != 0x200);
	Element = pSource->v & 0x3FF;
	V.vector4_f32[0] = (FLOAT) (SHORT) (Element | SignExtend[Element >> 9]) / 511.0f;
	Element = (pSource->v >> 10) & 0x3FF;
	V.vector4_f32[1] = (FLOAT) (SHORT) (Element | SignExtend[Element >> 9]) / 511.0f;
	Element = (pSource->v >> 20) & 0x3FF;
	V.vector4_f32[2] = (FLOAT) (SHORT) (Element | SignExtend[Element >> 9]) / 511.0f;
	V.vector4_f32[3] = (FLOAT) (pSource->v >> 30) / 3.0f;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	__m128 vTemp = _mm_load_ps1((const float *)(&pSource->v));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskA2B10G10R10));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMFlipA2B10G10R10));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMFixAA2B10G10R10));
	return _mm_mul_ps(vTemp, CAST_CONST_M128(g_XMNormalizeA2B10G10R10));
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadXDec4(CONST XMXDEC4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	static CONST UINT SignExtend[] = { 0x00000000, 0xFFFFFC00 };
	XMASSERT(pSource);
	XMASSERT((pSource->v & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 10) & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 20) & 0x3FF) != 0x200);
	Element = pSource->v & 0x3FF;
	V.vector4_f32[0] = (FLOAT) (SHORT) (Element | SignExtend[Element >> 9]);
	Element = (pSource->v >> 10) & 0x3FF;
	V.vector4_f32[1] = (FLOAT) (SHORT) (Element | SignExtend[Element >> 9]);
	Element = (pSource->v >> 20) & 0x3FF;
	V.vector4_f32[2] = (FLOAT) (SHORT) (Element | SignExtend[Element >> 9]);
	V.vector4_f32[3] = (FLOAT) (pSource->v >> 30);
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT((pSource->v & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 10) & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 20) & 0x3FF) != 0x200);
	static const XMVECTORI32 XDec4Xor = { 0x200, 0x200 << 10, 0x200 << 20, 0x80000000 };
	static const XMVECTORF32 XDec4Add = { -512.0f, -512.0f * 1024.0f, -512.0f * 1024.0f * 1024.0f, 32768 * 65536.0f };
	XMASSERT(pSource);
	XMVECTOR vTemp = _mm_load_ps1((const float *)(&pSource->v));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskDec4));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(XDec4Xor));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(XDec4Add));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(g_XMMulDec4));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadUDecN4(CONST XMUDECN4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	XMASSERT(pSource);
	Element = pSource->v & 0x3FF;
	V.vector4_f32[0] = (FLOAT)Element / 1023.0f;
	Element = (pSource->v >> 10) & 0x3FF;
	V.vector4_f32[1] = (FLOAT)Element / 1023.0f;
	Element = (pSource->v >> 20) & 0x3FF;
	V.vector4_f32[2] = (FLOAT)Element / 1023.0f;
	V.vector4_f32[3] = (FLOAT) (pSource->v >> 30) / 3.0f;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	static const XMVECTORF32 UDecN4Mul = { 1.0f / 1023.0f, 1.0f / (1023.0f * 1024.0f), 1.0f / (1023.0f * 1024.0f * 1024.0f), 1.0f / (3.0f * 1024.0f * 1024.0f * 1024.0f) };
	XMVECTOR vTemp = _mm_load_ps1((const float *)(&pSource->v));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskDec4));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMFlipW));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMAddUDec4));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(UDecN4Mul));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadUDec4(CONST XMUDEC4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	XMASSERT(pSource);
	Element = pSource->v & 0x3FF;
	V.vector4_f32[0] = (FLOAT)Element;
	Element = (pSource->v >> 10) & 0x3FF;
	V.vector4_f32[1] = (FLOAT)Element;
	Element = (pSource->v >> 20) & 0x3FF;
	V.vector4_f32[2] = (FLOAT)Element;
	V.vector4_f32[3] = (FLOAT) (pSource->v >> 30);
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMVECTOR vTemp = _mm_load_ps1((const float *)(&pSource->v));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskDec4));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMFlipW));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMAddUDec4));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(g_XMMulDec4));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadDecN4(CONST XMDECN4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	static CONST UINT SignExtend[] = { 0x00000000, 0xFFFFFC00 };
	static CONST UINT SignExtendW[] = { 0x00000000, 0xFFFFFFFC };
	XMASSERT(pSource);
	XMASSERT((pSource->v & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 10) & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 20) & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 30) & 0x3) != 0x2);
	Element = pSource->v & 0x3FF;
	V.vector4_f32[0] = (FLOAT) (SHORT) (Element | SignExtend[Element >> 9]) / 511.0f;
	Element = (pSource->v >> 10) & 0x3FF;
	V.vector4_f32[1] = (FLOAT) (SHORT) (Element | SignExtend[Element >> 9]) / 511.0f;
	Element = (pSource->v >> 20) & 0x3FF;
	V.vector4_f32[2] = (FLOAT) (SHORT) (Element | SignExtend[Element >> 9]) / 511.0f;
	Element = pSource->v >> 30;
	V.vector4_f32[3] = (FLOAT) (SHORT) (Element | SignExtendW[Element >> 1]);
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMASSERT((pSource->v & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 10) & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 20) & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 30) & 0x3) != 0x2);
	static const XMVECTORF32 DecN4Mul = { 1.0f / 511.0f, 1.0f / (511.0f * 1024.0f), 1.0f / (511.0f * 1024.0f * 1024.0f), 1.0f / (1024.0f * 1024.0f * 1024.0f) };
	XMVECTOR vTemp = _mm_load_ps1((const float *)(&pSource->v));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskDec4));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMXorDec4));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMAddDec4));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(DecN4Mul));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadDec4(CONST XMDEC4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	UINT Element;
	static CONST UINT SignExtend[] = { 0x00000000, 0xFFFFFC00 };
	static CONST UINT SignExtendW[] = { 0x00000000, 0xFFFFFFFC };
	XMASSERT(pSource);
	XMASSERT((pSource->v & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 10) & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 20) & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 30) & 0x3) != 0x2);
	Element = pSource->v & 0x3FF;
	V.vector4_f32[0] = (FLOAT) (SHORT) (Element | SignExtend[Element >> 9]);
	Element = (pSource->v >> 10) & 0x3FF;
	V.vector4_f32[1] = (FLOAT) (SHORT) (Element | SignExtend[Element >> 9]);
	Element = (pSource->v >> 20) & 0x3FF;
	V.vector4_f32[2] = (FLOAT) (SHORT) (Element | SignExtend[Element >> 9]);
	Element = pSource->v >> 30;
	V.vector4_f32[3] = (FLOAT) (SHORT) (Element | SignExtendW[Element >> 1]);
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT((pSource->v & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 10) & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 20) & 0x3FF) != 0x200);
	XMASSERT(((pSource->v >> 30) & 0x3) != 0x2);
	XMASSERT(pSource);
	XMVECTOR vTemp = _mm_load_ps1((const float *)(&pSource->v));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskDec4));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMXorDec4));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMAddDec4));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(g_XMMulDec4));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadUByteN4(CONST XMUBYTEN4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	V.vector4_f32[0] = (FLOAT)pSource->x / 255.0f;
	V.vector4_f32[1] = (FLOAT)pSource->y / 255.0f;
	V.vector4_f32[2] = (FLOAT)pSource->z / 255.0f;
	V.vector4_f32[3] = (FLOAT)pSource->w / 255.0f;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	static const XMVECTORF32 LoadUByteN4Mul = { 1.0f / 255.0f, 1.0f / (255.0f * 256.0f), 1.0f / (255.0f * 65536.0f), 1.0f / (255.0f * 65536.0f * 256.0f) };
	XMASSERT(pSource);
	XMVECTOR vTemp = _mm_load1_ps((const float *)(&pSource->x));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskByte4));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMFlipW));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMAddUDec4));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(CAST_CONST_M128(LoadUByteN4Mul)));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadUByte4(CONST XMUBYTE4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	V.vector4_f32[0] = (FLOAT)pSource->x;
	V.vector4_f32[1] = (FLOAT)pSource->y;
	V.vector4_f32[2] = (FLOAT)pSource->z;
	V.vector4_f32[3] = (FLOAT)pSource->w;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	static const XMVECTORF32 LoadUByte4Mul = { 1.0f, 1.0f / 256.0f, 1.0f / 65536.0f, 1.0f / (65536.0f * 256.0f) };
	XMASSERT(pSource);
	XMVECTOR vTemp = _mm_load1_ps((const float *)(&pSource->x));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskByte4));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMFlipW));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMAddUDec4));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(CAST_CONST_M128(LoadUByte4Mul)));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadByteN4(CONST XMBYTEN4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	XMASSERT(pSource->x != -128);
	XMASSERT(pSource->y != -128);
	XMASSERT(pSource->z != -128);
	XMASSERT(pSource->w != -128);
	V.vector4_f32[0] = (FLOAT)pSource->x / 127.0f;
	V.vector4_f32[1] = (FLOAT)pSource->y / 127.0f;
	V.vector4_f32[2] = (FLOAT)pSource->z / 127.0f;
	V.vector4_f32[3] = (FLOAT)pSource->w / 127.0f;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	static const XMVECTORF32 LoadByteN4Mul = { 1.0f / 127.0f, 1.0f / (127.0f * 256.0f), 1.0f / (127.0f * 65536.0f), 1.0f / (127.0f * 65536.0f * 256.0f) };
	XMASSERT(pSource);
	XMASSERT(pSource->x != -128);
	XMASSERT(pSource->y != -128);
	XMASSERT(pSource->z != -128);
	XMASSERT(pSource->w != -128);
	XMVECTOR vTemp = _mm_load1_ps((const float *)(&pSource->x));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskByte4));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMXorByte4));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMAddByte4));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(CAST_CONST_M128(LoadByteN4Mul)));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadByte4(CONST XMBYTE4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMASSERT(pSource);
	XMASSERT(pSource->x != -128);
	XMASSERT(pSource->y != -128);
	XMASSERT(pSource->z != -128);
	XMASSERT(pSource->w != -128);
	V.vector4_f32[0] = (FLOAT)pSource->x;
	V.vector4_f32[1] = (FLOAT)pSource->y;
	V.vector4_f32[2] = (FLOAT)pSource->z;
	V.vector4_f32[3] = (FLOAT)pSource->w;
	return V;
#elif defined(_XM_SSE_INTRINSICS_)
	static const XMVECTORF32 LoadByte4Mul = { 1.0f, 1.0f / 256.0f, 1.0f / 65536.0f, 1.0f / (65536.0f * 256.0f) };
	XMASSERT(pSource);
	XMASSERT(pSource->x != -128);
	XMASSERT(pSource->y != -128);
	XMASSERT(pSource->z != -128);
	XMASSERT(pSource->w != -128);
	XMVECTOR vTemp = _mm_load1_ps((const float *)(&pSource->x));
	vTemp = _mm_and_ps(vTemp, CAST_CONST_M128(g_XMMaskByte4));
	vTemp = _mm_xor_ps(vTemp, CAST_CONST_M128(g_XMXorByte4));
	vTemp = _mm_cvtepi32_ps(CAST_CONST_M128I(vTemp));
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMAddByte4));
	vTemp = _mm_mul_ps(vTemp, CAST_CONST_M128(LoadByte4Mul));
	return vTemp;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMLoadUNibble4(CONST XMUNIBBLE4 * pSource)
{
#if defined(_XM_SSE_INTRINSICS_) && !defined(_XM_NO_INTRINSICS_)
	static const XMVECTORI32 UNibble4And = { 0xF, 0xF0, 0xF00, 0xF000 };
	static const XMVECTORF32 UNibble4Mul = { 1.0f, 1.0f / 16.f, 1.0f / 256.f, 1.0f / 4096.f };
	XMASSERT(pSource);
	XMVECTOR vResult = _mm_load_ps1((const float *)(&pSource->v));
	vResult = _mm_and_ps(vResult, CAST_CONST_M128(UNibble4And));
	vResult = _mm_cvtepi32_ps(CAST_CONST_M128I(vResult));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(UNibble4Mul));
	return vResult;
#else
	XMVECTOR V;
	UINT Element;
	XMASSERT(pSource);
	Element = pSource->v & 0xF;
	V.vector4_f32[0] = (FLOAT)Element;
	Element = (pSource->v >> 4) & 0xF;
	V.vector4_f32[1] = (FLOAT)Element;
	Element = (pSource->v >> 8) & 0xF;
	V.vector4_f32[2] = (FLOAT)Element;
	Element = (pSource->v >> 12) & 0xF;
	V.vector4_f32[3] = (FLOAT)Element;
	return V;
#endif
}
XMFINLINE XMVECTOR XMLoadU555(CONST XMU555 * pSource)
{
#if defined(_XM_SSE_INTRINSICS_) && !defined(_XM_NO_INTRINSICS_)
	static const XMVECTORI32 U555And = { 0x1F, 0x1F << 5, 0x1F << 10, 0x8000 };
	static const XMVECTORF32 U555Mul = { 1.0f, 1.0f / 32.f, 1.0f / 1024.f, 1.0f / 32768.f };
	XMASSERT(pSource);
	XMVECTOR vResult = _mm_load_ps1((const float *)(&pSource->v));
	vResult = _mm_and_ps(vResult, CAST_CONST_M128(U555And));
	vResult = _mm_cvtepi32_ps(CAST_CONST_M128I(vResult));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(U555Mul));
	return vResult;
#else
	XMVECTOR V;
	UINT Element;
	XMASSERT(pSource);
	Element = pSource->v & 0x1F;
	V.vector4_f32[0] = (FLOAT)Element;
	Element = (pSource->v >> 5) & 0x1F;
	V.vector4_f32[1] = (FLOAT)Element;
	Element = (pSource->v >> 10) & 0x1F;
	V.vector4_f32[2] = (FLOAT)Element;
	Element = (pSource->v >> 15) & 0x1;
	V.vector4_f32[3] = (FLOAT)Element;
	return V;
#endif
}
XMFINLINE XMVECTOR XMLoadColor(CONST XMCOLOR * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pSource);
	{
		INT iColor = (INT) (pSource->c);
		XMVECTOR vColor = {
			(FLOAT) ((iColor >> 16) & 0xFF) * (1.0f / 255.0f),
			(FLOAT) ((iColor >> 8) & 0xFF) * (1.0f / 255.0f),
			(FLOAT) (iColor & 0xFF) * (1.0f / 255.0f),
			(FLOAT) ((iColor >> 24) & 0xFF) * (1.0f / 255.0f)
		};
		return vColor;
	}
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	__m128i vInt = _mm_set1_epi32(pSource->c);
	vInt = _mm_and_si128(vInt, CAST_CONST_M128I(g_XMMaskA8R8G8B8));
	vInt = _mm_xor_si128(vInt, CAST_CONST_M128I(g_XMFlipA8R8G8B8));
	XMVECTOR vTemp = _mm_cvtepi32_ps(vInt);
	vTemp = _mm_add_ps(vTemp, CAST_CONST_M128(g_XMFixAA8R8G8B8));
	return _mm_mul_ps(vTemp, CAST_CONST_M128(g_XMNormalizeA8R8G8B8));
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMMATRIX XMLoadFloat3x3(CONST XMFLOAT3X3 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMMATRIX M;
	XMASSERT(pSource);
	M.r[0].vector4_f32[0] = pSource->m[0][0];
	M.r[0].vector4_f32[1] = pSource->m[0][1];
	M.r[0].vector4_f32[2] = pSource->m[0][2];
	M.r[0].vector4_f32[3] = 0.0f;
	M.r[1].vector4_f32[0] = pSource->m[1][0];
	M.r[1].vector4_f32[1] = pSource->m[1][1];
	M.r[1].vector4_f32[2] = pSource->m[1][2];
	M.r[1].vector4_f32[3] = 0.0f;
	M.r[2].vector4_f32[0] = pSource->m[2][0];
	M.r[2].vector4_f32[1] = pSource->m[2][1];
	M.r[2].vector4_f32[2] = pSource->m[2][2];
	M.r[2].vector4_f32[3] = 0.0f;
	M.r[3].vector4_f32[0] = 0.0f;
	M.r[3].vector4_f32[1] = 0.0f;
	M.r[3].vector4_f32[2] = 0.0f;
	M.r[3].vector4_f32[3] = 1.0f;
	return M;
#elif defined(_XM_SSE_INTRINSICS_)
	XMMATRIX M;
	XMVECTOR V1, V2, V3, Z, T1, T2, T3, T4, T5;
	Z = _mm_setzero_ps();
	XMASSERT(pSource);
	V1 = _mm_loadu_ps(&pSource->m[0][0]);
	V2 = _mm_loadu_ps(&pSource->m[1][1]);
	V3 = _mm_load_ss(&pSource->m[2][2]);
	T1 = _mm_unpackhi_ps(V1, Z);
	T2 = _mm_unpacklo_ps(V2, Z);
	T3 = _mm_shuffle_ps(V3, T2, _MM_SHUFFLE(0, 1, 0, 0));
	T4 = _mm_movehl_ps(T2, T3);
	T5 = _mm_movehl_ps(Z, T1);
	M.r[0] = _mm_movelh_ps(V1, T1);
	M.r[1] = _mm_add_ps(T4, T5);
	M.r[2] = _mm_shuffle_ps(V2, V3, _MM_SHUFFLE(1, 0, 3, 2));
	M.r[3] = CAST_CONST_M128(g_XMIdentityR3);
	return M;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS))
#endif
}
XMFINLINE XMMATRIX XMLoadFloat4x3(CONST XMFLOAT4X3 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMMATRIX M;
	XMASSERT(pSource);
	((UINT *) (&M.r[0].vector4_f32[0]))[0] = ((const UINT *)(&pSource->m[0][0]))[0];
	((UINT *) (&M.r[0].vector4_f32[1]))[0] = ((const UINT *)(&pSource->m[0][1]))[0];
	((UINT *) (&M.r[0].vector4_f32[2]))[0] = ((const UINT *)(&pSource->m[0][2]))[0];
	M.r[0].vector4_f32[3] = 0.0f;
	((UINT *) (&M.r[1].vector4_f32[0]))[0] = ((const UINT *)(&pSource->m[1][0]))[0];
	((UINT *) (&M.r[1].vector4_f32[1]))[0] = ((const UINT *)(&pSource->m[1][1]))[0];
	((UINT *) (&M.r[1].vector4_f32[2]))[0] = ((const UINT *)(&pSource->m[1][2]))[0];
	M.r[1].vector4_f32[3] = 0.0f;
	((UINT *) (&M.r[2].vector4_f32[0]))[0] = ((const UINT *)(&pSource->m[2][0]))[0];
	((UINT *) (&M.r[2].vector4_f32[1]))[0] = ((const UINT *)(&pSource->m[2][1]))[0];
	((UINT *) (&M.r[2].vector4_f32[2]))[0] = ((const UINT *)(&pSource->m[2][2]))[0];
	M.r[2].vector4_f32[3] = 0.0f;
	((UINT *) (&M.r[3].vector4_f32[0]))[0] = ((const UINT *)(&pSource->m[3][0]))[0];
	((UINT *) (&M.r[3].vector4_f32[1]))[0] = ((const UINT *)(&pSource->m[3][1]))[0];
	((UINT *) (&M.r[3].vector4_f32[2]))[0] = ((const UINT *)(&pSource->m[3][2]))[0];
	M.r[3].vector4_f32[3] = 1.0f;
	return M;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMVECTOR vTemp1 = _mm_loadu_ps(&pSource->m[0][0]);
	XMVECTOR vTemp2 = _mm_loadu_ps(&pSource->m[1][1]);
	XMVECTOR vTemp4 = _mm_loadu_ps(&pSource->m[2][2]);
	XMVECTOR vTemp3 = _mm_shuffle_ps(vTemp2, vTemp4, _MM_SHUFFLE(0, 0, 3, 2));
	vTemp2 = _mm_shuffle_ps(vTemp2, vTemp1, _MM_SHUFFLE(3, 3, 1, 0));
	vTemp2 = _mm_shuffle_ps(vTemp2, vTemp2, _MM_SHUFFLE(1, 1, 0, 2));
	vTemp1 = _mm_and_ps(vTemp1, CAST_CONST_M128(g_XMMask3));
	vTemp2 = _mm_and_ps(vTemp2, CAST_CONST_M128(g_XMMask3));
	vTemp3 = _mm_and_ps(vTemp3, CAST_CONST_M128(g_XMMask3));
	__m128i vTemp4i = _mm_srli_si128(CAST_CONST_M128I(vTemp4), 32 / 8);
	vTemp4i = _mm_or_si128(vTemp4i, CAST_CONST_M128I(g_XMIdentityR3));
	XMMATRIX_AND_INIT_FROM_4_FLOAT_ARRAY_OF_4(M, vTemp1.m128_f32, vTemp2.m128_f32, vTemp3.m128_f32, CAST_CONST_M128(vTemp4i).m128_f32);
	return M;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMMATRIX XMLoadFloat4x3A(CONST XMFLOAT4X3A * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMMATRIX M;
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 0xF) == 0);
	M.r[0].vector4_f32[0] = pSource->m[0][0];
	M.r[0].vector4_f32[1] = pSource->m[0][1];
	M.r[0].vector4_f32[2] = pSource->m[0][2];
	M.r[0].vector4_f32[3] = 0.0f;
	M.r[1].vector4_f32[0] = pSource->m[1][0];
	M.r[1].vector4_f32[1] = pSource->m[1][1];
	M.r[1].vector4_f32[2] = pSource->m[1][2];
	M.r[1].vector4_f32[3] = 0.0f;
	M.r[2].vector4_f32[0] = pSource->m[2][0];
	M.r[2].vector4_f32[1] = pSource->m[2][1];
	M.r[2].vector4_f32[2] = pSource->m[2][2];
	M.r[2].vector4_f32[3] = 0.0f;
	M.r[3].vector4_f32[0] = pSource->m[3][0];
	M.r[3].vector4_f32[1] = pSource->m[3][1];
	M.r[3].vector4_f32[2] = pSource->m[3][2];
	M.r[3].vector4_f32[3] = 1.0f;
	return M;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMVECTOR vTemp1 = _mm_load_ps(&pSource->m[0][0]);
	XMVECTOR vTemp2 = _mm_load_ps(&pSource->m[1][1]);
	XMVECTOR vTemp4 = _mm_load_ps(&pSource->m[2][2]);
	XMVECTOR vTemp3 = _mm_shuffle_ps(vTemp2, vTemp4, _MM_SHUFFLE(0, 0, 3, 2));
	vTemp2 = _mm_shuffle_ps(vTemp2, vTemp1, _MM_SHUFFLE(3, 3, 1, 0));
	vTemp2 = _mm_shuffle_ps(vTemp2, vTemp2, _MM_SHUFFLE(1, 1, 0, 2));
	vTemp1 = _mm_and_ps(vTemp1, CAST_CONST_M128(g_XMMask3));
	vTemp2 = _mm_and_ps(vTemp2, CAST_CONST_M128(g_XMMask3));
	vTemp3 = _mm_and_ps(vTemp3, CAST_CONST_M128(g_XMMask3));
	__m128i vTemp4i = _mm_srli_si128(CAST_CONST_M128I(vTemp4), 32 / 8);
	vTemp4i = _mm_or_si128(vTemp4i, CAST_CONST_M128I(g_XMIdentityR3));
	//XMMATRIX M(vTemp1, vTemp2, vTemp3, CAST_CONST_M128(vTemp4i));
	XMMATRIX_AND_INIT_FROM_4_FLOAT_ARRAY_OF_4(M, vTemp1.m128_f32, vTemp2.m128_f32, vTemp3.m128_f32, CAST_CONST_M128(vTemp4i).m128_f32);
	return M;
#else
#endif
}
XMFINLINE XMMATRIX XMLoadFloat4x4(CONST XMFLOAT4X4 * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMMATRIX M;
	XMASSERT(pSource);
	((UINT *) (&M.r[0].vector4_f32[0]))[0] = ((const UINT *)(&pSource->m[0][0]))[0];
	((UINT *) (&M.r[0].vector4_f32[1]))[0] = ((const UINT *)(&pSource->m[0][1]))[0];
	((UINT *) (&M.r[0].vector4_f32[2]))[0] = ((const UINT *)(&pSource->m[0][2]))[0];
	((UINT *) (&M.r[0].vector4_f32[3]))[0] = ((const UINT *)(&pSource->m[0][3]))[0];
	((UINT *) (&M.r[1].vector4_f32[0]))[0] = ((const UINT *)(&pSource->m[1][0]))[0];
	((UINT *) (&M.r[1].vector4_f32[1]))[0] = ((const UINT *)(&pSource->m[1][1]))[0];
	((UINT *) (&M.r[1].vector4_f32[2]))[0] = ((const UINT *)(&pSource->m[1][2]))[0];
	((UINT *) (&M.r[1].vector4_f32[3]))[0] = ((const UINT *)(&pSource->m[1][3]))[0];
	((UINT *) (&M.r[2].vector4_f32[0]))[0] = ((const UINT *)(&pSource->m[2][0]))[0];
	((UINT *) (&M.r[2].vector4_f32[1]))[0] = ((const UINT *)(&pSource->m[2][1]))[0];
	((UINT *) (&M.r[2].vector4_f32[2]))[0] = ((const UINT *)(&pSource->m[2][2]))[0];
	((UINT *) (&M.r[2].vector4_f32[3]))[0] = ((const UINT *)(&pSource->m[2][3]))[0];
	((UINT *) (&M.r[3].vector4_f32[0]))[0] = ((const UINT *)(&pSource->m[3][0]))[0];
	((UINT *) (&M.r[3].vector4_f32[1]))[0] = ((const UINT *)(&pSource->m[3][1]))[0];
	((UINT *) (&M.r[3].vector4_f32[2]))[0] = ((const UINT *)(&pSource->m[3][2]))[0];
	((UINT *) (&M.r[3].vector4_f32[3]))[0] = ((const UINT *)(&pSource->m[3][3]))[0];
	return M;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSource);
	XMMATRIX M;
	M.r[0] = _mm_loadu_ps(&pSource->_11);
	M.r[1] = _mm_loadu_ps(&pSource->_21);
	M.r[2] = _mm_loadu_ps(&pSource->_31);
	M.r[3] = _mm_loadu_ps(&pSource->_41);
	return M;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMMATRIX XMLoadFloat4x4A(CONST XMFLOAT4X4A * pSource)
{
#if defined(_XM_NO_INTRINSICS_)
	XMMATRIX M;
	XMASSERT(pSource);
	XMASSERT(((UINT_PTR)pSource & 0xF) == 0);
	M.r[0].vector4_f32[0] = pSource->m[0][0];
	M.r[0].vector4_f32[1] = pSource->m[0][1];
	M.r[0].vector4_f32[2] = pSource->m[0][2];
	M.r[0].vector4_f32[3] = pSource->m[0][3];
	M.r[1].vector4_f32[0] = pSource->m[1][0];
	M.r[1].vector4_f32[1] = pSource->m[1][1];
	M.r[1].vector4_f32[2] = pSource->m[1][2];
	M.r[1].vector4_f32[3] = pSource->m[1][3];
	M.r[2].vector4_f32[0] = pSource->m[2][0];
	M.r[2].vector4_f32[1] = pSource->m[2][1];
	M.r[2].vector4_f32[2] = pSource->m[2][2];
	M.r[2].vector4_f32[3] = pSource->m[2][3];
	M.r[3].vector4_f32[0] = pSource->m[3][0];
	M.r[3].vector4_f32[1] = pSource->m[3][1];
	M.r[3].vector4_f32[2] = pSource->m[3][2];
	M.r[3].vector4_f32[3] = pSource->m[3][3];
	return M;
#elif defined(_XM_SSE_INTRINSICS_)
	XMMATRIX M;
	XMASSERT(pSource);
	M.r[0] = _mm_load_ps(&pSource->_11);
	M.r[1] = _mm_load_ps(&pSource->_21);
	M.r[2] = _mm_load_ps(&pSource->_31);
	M.r[3] = _mm_load_ps(&pSource->_41);
	return M;
#else
#endif
}
XMFINLINE VOID XMStoreInt(UINT * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 3) == 0);
	*pDestination = XMVectorGetIntX(V);
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 3) == 0);
	_mm_store_ss((float *)pDestination, V);
#else
#endif
}
XMFINLINE VOID XMStoreFloat(FLOAT * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 3) == 0);
	*pDestination = XMVectorGetX(V);
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 3) == 0);
	_mm_store_ss(pDestination, V);
#else
#endif
}
XMFINLINE VOID XMStoreInt2(UINT * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 3) == 0);
	pDestination[0] = V.vector4_u32[0];
	pDestination[1] = V.vector4_u32[1];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 3) == 0);
	XMVECTOR T = _mm_shuffle_ps(V, V, _MM_SHUFFLE(1, 1, 1, 1));
	_mm_store_ss((float *)&pDestination[0], V);
	_mm_store_ss((float *)&pDestination[1], T);
#else
#endif
}
XMFINLINE VOID XMStoreInt2A(UINT * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 0xF) == 0);
	pDestination[0] = V.vector4_u32[0];
	pDestination[1] = V.vector4_u32[1];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 0xF) == 0);
	_mm_storel_epi64((__m128i *)pDestination, CAST_CONST_M128I(V));
#else
#endif
}
XMFINLINE VOID XMStoreFloat2(XMFLOAT2 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 3) == 0);
	pDestination->x = V.vector4_f32[0];
	pDestination->y = V.vector4_f32[1];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 3) == 0);
	XMVECTOR T = _mm_shuffle_ps(V, V, _MM_SHUFFLE(1, 1, 1, 1));
	_mm_store_ss(&pDestination->x, V);
	_mm_store_ss(&pDestination->y, T);
#else
#endif
}
XMFINLINE VOID XMStoreFloat2A(XMFLOAT2A * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 0xF) == 0);
	pDestination->x = V.vector4_f32[0];
	pDestination->y = V.vector4_f32[1];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 0xF) == 0);
	_mm_storel_epi64((__m128i *)pDestination, CAST_CONST_M128I(V));
#else
#endif
}
XMFINLINE VOID XMStoreHalf2(XMHALF2 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	pDestination->x = XMConvertFloatToHalf(V.vector4_f32[0]);
	pDestination->y = XMConvertFloatToHalf(V.vector4_f32[1]);
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	pDestination->x = XMConvertFloatToHalf(XMVectorGetX(V));
	pDestination->y = XMConvertFloatToHalf(XMVectorGetY(V));
#else
#endif
}
XMFINLINE VOID XMStoreShortN2(XMSHORTN2 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Scale = { 32767.0f, 32767.0f, 32767.0f, 32767.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, CAST_CONST_M128(g_XMNegativeOne.v, g_XMOne.v));
	N = XMVectorMultiply(N, Scale.v);
	N = XMVectorRound(N);
	pDestination->x = (SHORT)N.vector4_f32[0];
	pDestination->y = (SHORT)N.vector4_f32[1];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static CONST XMVECTORF32 Scale = { 32767.0f, 32767.0f, 32767.0f, 32767.0f };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMNegativeOne));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(Scale));
	__m128i vResulti = _mm_cvtps_epi32(vResult);
	vResulti = _mm_packs_epi32(vResulti, vResulti);
	_mm_store_ss((float *)(&pDestination->x), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreShort2(XMSHORT2 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTOR Min = { -32767.0f, -32767.0f, -32767.0f, -32767.0f };
	static CONST XMVECTOR Max = { 32767.0f, 32767.0f, 32767.0f, 32767.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, Min, Max);
	N = XMVectorRound(N);
	pDestination->x = (SHORT)N.vector4_f32[0];
	pDestination->y = (SHORT)N.vector4_f32[1];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static CONST XMVECTORF32 Min = { -32767.0f, -32767.0f, -32767.0f, -32767.0f };
	static CONST XMVECTORF32 Max = { 32767.0f, 32767.0f, 32767.0f, 32767.0f };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(Min));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(Max));
	__m128i vInt = _mm_cvtps_epi32(vResult);
	vInt = _mm_packs_epi32(vInt, vInt);
	_mm_store_ss((float *)(&pDestination->x), CAST_CONST_M128(vInt));
#else
#endif
}
XMFINLINE VOID XMStoreUShortN2(XMUSHORTN2 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Scale = { 65535.0f, 65535.0f, 65535.0f, 65535.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, XMVectorZero(), CAST_CONST_M128(g_XMOne.v));
	N = XMVectorMultiplyAdd(N, Scale.v, CAST_CONST_M128(g_XMOneHalf.v));
	N = XMVectorTruncate(N);
	pDestination->x = (SHORT)N.vector4_f32[0];
	pDestination->y = (SHORT)N.vector4_f32[1];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static CONST XMVECTORF32 Scale = { 65535.0f, 65535.0f, 65535.0f, 65535.0f };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(Scale));
	__m128i vInt = _mm_cvtps_epi32(vResult);
	pDestination->x = (SHORT)(_mm_extract_epi16(vInt, 0));
	pDestination->y = (SHORT)(_mm_extract_epi16(vInt, 2));
#else
#endif
}
XMFINLINE VOID XMStoreUShort2(XMUSHORT2 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTOR Max = { 65535.0f, 65535.0f, 65535.0f, 65535.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, XMVectorZero(), Max);
	N = XMVectorRound(N);
	pDestination->x = (SHORT)N.vector4_f32[0];
	pDestination->y = (SHORT)N.vector4_f32[1];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static CONST XMVECTORF32 Max = { 65535.0f, 65535.0f, 65535.0f, 65535.0f };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(Max));
	__m128i vInt = _mm_cvtps_epi32(vResult);
	pDestination->x = (SHORT)(_mm_extract_epi16(vInt, 0));
	pDestination->y = (SHORT)(_mm_extract_epi16(vInt, 2));
#else
#endif
}
XMFINLINE VOID XMStoreInt3(UINT * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 3) == 0);
	pDestination[0] = V.vector4_u32[0];
	pDestination[1] = V.vector4_u32[1];
	pDestination[2] = V.vector4_u32[2];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 3) == 0);
	XMVECTOR T1 = _mm_shuffle_ps(V, V, _MM_SHUFFLE(1, 1, 1, 1));
	XMVECTOR T2 = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 2, 2, 2));
	_mm_store_ss((float *)pDestination, V);
	_mm_store_ss((float *)&pDestination[1], T1);
	_mm_store_ss((float *)&pDestination[2], T2);
#else
#endif
}
XMFINLINE VOID XMStoreInt3A(UINT * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 0xF) == 0);
	pDestination[0] = V.vector4_u32[0];
	pDestination[1] = V.vector4_u32[1];
	pDestination[2] = V.vector4_u32[2];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 0xF) == 0);
	XMVECTOR T = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 2, 2, 2));
	_mm_storel_epi64((__m128i *)pDestination, CAST_CONST_M128I(V));
	_mm_store_ss((float *)&pDestination[2], T);
#else
#endif
}
XMFINLINE VOID XMStoreFloat3(XMFLOAT3 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 3) == 0);
	pDestination->x = V.vector4_f32[0];
	pDestination->y = V.vector4_f32[1];
	pDestination->z = V.vector4_f32[2];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 3) == 0);
	XMVECTOR T1 = _mm_shuffle_ps(V, V, _MM_SHUFFLE(1, 1, 1, 1));
	XMVECTOR T2 = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 2, 2, 2));
	_mm_store_ss(&pDestination->x, V);
	_mm_store_ss(&pDestination->y, T1);
	_mm_store_ss(&pDestination->z, T2);
#else
#endif
}
XMFINLINE VOID XMStoreFloat3A(XMFLOAT3A * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 0xF) == 0);
	pDestination->x = V.vector4_f32[0];
	pDestination->y = V.vector4_f32[1];
	pDestination->z = V.vector4_f32[2];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 0xF) == 0);
	XMVECTOR T = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 2, 2, 2));
	_mm_storel_epi64((__m128i *)pDestination, CAST_CONST_M128I(V));
	_mm_store_ss(&pDestination->z, T);
#else
#endif
}
XMFINLINE VOID XMStoreUHenDN3(XMUHENDN3 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Scale = { 2047.0f, 2047.0f, 1023.0f, 0.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, XMVectorZero(), CAST_CONST_M128(g_XMOne.v));
	N = XMVectorMultiply(N, Scale.v);
	pDestination->v = (((UINT)N.vector4_f32[2] & 0x3FF) << 22) | (((UINT)N.vector4_f32[1] & 0x7FF) << 11) | (((UINT)N.vector4_f32[0] & 0x7FF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 ScaleUHenDN3 = { 2047.0f, 2047.0f * 2048.0f, 1023.0f * (2048.0f * 2048.0f) / 2.0f, 1.0f };
	static const XMVECTORI32 MaskUHenDN3 = { 0x7FF, 0x7FF << 11, 0x3FF << (22 - 1), 0 };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleUHenDN3));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskUHenDN3));
	__m128i vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(0, 3, 2, 1));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	vResulti2 = _mm_shuffle_epi32(vResulti2, _MM_SHUFFLE(0, 3, 2, 1));
	vResulti2 = _mm_add_epi32(vResulti2, vResulti2);
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreUHenD3(XMUHEND3 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTOR Max = { 2047.0f, 2047.0f, 1023.0f, 0.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, XMVectorZero(), Max);
	pDestination->v = (((UINT)N.vector4_f32[2] & 0x3FF) << 22) | (((UINT)N.vector4_f32[1] & 0x7FF) << 11) | (((UINT)N.vector4_f32[0] & 0x7FF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 MaxUHenD3 = { 2047.0f, 2047.0f, 1023.0f, 1.0f };
	static const XMVECTORF32 ScaleUHenD3 = { 1.0f, 2048.0f, (2048.0f * 2048.0f) / 2.0f, 1.0f };
	static const XMVECTORI32 MaskUHenD3 = { 0x7FF, 0x7FF << 11, 0x3FF << (22 - 1), 0 };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(MaxUHenD3));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleUHenD3));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskUHenD3));
	__m128i vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(0, 3, 2, 1));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	vResulti2 = _mm_shuffle_epi32(vResulti2, _MM_SHUFFLE(0, 3, 2, 1));
	vResulti2 = _mm_add_epi32(vResulti2, vResulti2);
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreHenDN3(XMHENDN3 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Scale = { 1023.0f, 1023.0f, 511.0f, 1.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, CAST_CONST_M128(g_XMNegativeOne.v, g_XMOne.v));
	N = XMVectorMultiply(N, Scale.v);
	pDestination->v = (((INT)N.vector4_f32[2] & 0x3FF) << 22) | (((INT)N.vector4_f32[1] & 0x7FF) << 11) | (((INT)N.vector4_f32[0] & 0x7FF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 ScaleHenDN3 = { 1023.0f, 1023.0f * 2048.0f, 511.0f * (2048.0f * 2048.0f), 1.0f };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMNegativeOne));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleHenDN3));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(g_XMMaskHenD3));
	vResult = _mm_shuffle_ps(CAST_CONST_M128(vResulti), CAST_CONST_M128(vResulti), _MM_SHUFFLE(0, 3, 2, 1));
	vResulti = _mm_or_si128(vResulti, CAST_CONST_M128I(vResult));
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(0, 3, 2, 1));
	vResulti = _mm_or_si128(vResulti, CAST_CONST_M128I(vResult));
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreHenD3(XMHEND3 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTOR Min = { -1023.0f, -1023.0f, -511.0f, -1.0f };
	static CONST XMVECTOR Max = { 1023.0f, 1023.0f, 511.0f, 1.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, Min, Max);
	pDestination->v = (((INT)N.vector4_f32[2] & 0x3FF) << 22) | (((INT)N.vector4_f32[1] & 0x7FF) << 11) | (((INT)N.vector4_f32[0] & 0x7FF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 MinHenD3 = { -1023.0f, -1023.0f, -511.0f, -1.0f };
	static const XMVECTORF32 MaxHenD3 = { 1023.0f, 1023.0f, 511.0f, 1.0f };
	static const XMVECTORF32 ScaleHenD3 = { 1.0f, 2048.0f, (2048.0f * 2048.0f), 1.0f };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(MinHenD3));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(MaxHenD3));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleHenD3));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(g_XMMaskHenD3));
	vResult = _mm_shuffle_ps(CAST_CONST_M128(vResulti), CAST_CONST_M128(vResulti), _MM_SHUFFLE(0, 3, 2, 1));
	vResulti = _mm_or_si128(vResulti, CAST_CONST_M128I(vResult));
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(0, 3, 2, 1));
	vResulti = _mm_or_si128(vResulti, CAST_CONST_M128I(vResult));
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreUDHenN3(XMUDHENN3 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Scale = { 1023.0f, 2047.0f, 2047.0f, 0.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, XMVectorZero(), CAST_CONST_M128(g_XMOne.v));
	N = XMVectorMultiply(N, Scale.v);
	pDestination->v = (((UINT)N.vector4_f32[2] & 0x7FF) << 21) | (((UINT)N.vector4_f32[1] & 0x7FF) << 10) | (((UINT)N.vector4_f32[0] & 0x3FF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 ScaleUDHenN3 = { 1023.0f, 2047.0f * 1024.0f, 2047.0f * (1024.0f * 2048.0f) / 2.0f, 1.0f };
	static const XMVECTORI32 MaskUDHenN3 = { 0x3FF, 0x7FF << 10, 0x7FF << (21 - 1), 0 };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleUDHenN3));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskUDHenN3));
	__m128i vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(0, 3, 2, 1));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	vResulti2 = _mm_shuffle_epi32(vResulti2, _MM_SHUFFLE(0, 3, 2, 1));
	vResulti2 = _mm_add_epi32(vResulti2, vResulti2);
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreUDHen3(XMUDHEN3 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTOR Max = { 1023.0f, 2047.0f, 2047.0f, 0.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, XMVectorZero(), Max);
	pDestination->v = (((UINT)N.vector4_f32[2] & 0x7FF) << 21) | (((UINT)N.vector4_f32[1] & 0x7FF) << 10) | (((UINT)N.vector4_f32[0] & 0x3FF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 MaxUDHen3 = { 1023.0f, 2047.0f, 2047.0f, 1.0f };
	static const XMVECTORF32 ScaleUDHen3 = { 1.0f, 1024.0f, (1024.0f * 2048.0f) / 2.0f, 1.0f };
	static const XMVECTORI32 MaskUDHen3 = { 0x3FF, 0x7FF << 10, 0x7FF << (21 - 1), 0 };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(MaxUDHen3));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleUDHen3));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskUDHen3));
	__m128i vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(0, 3, 2, 1));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	vResulti2 = _mm_shuffle_epi32(vResulti2, _MM_SHUFFLE(0, 3, 2, 1));
	vResulti2 = _mm_add_epi32(vResulti2, vResulti2);
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreDHenN3(XMDHENN3 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Scale = { 511.0f, 1023.0f, 1023.0f, 1.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, CAST_CONST_M128(g_XMNegativeOne.v, g_XMOne.v));
	N = XMVectorMultiply(N, Scale.v);
	pDestination->v = (((INT)N.vector4_f32[2] & 0x7FF) << 21) | (((INT)N.vector4_f32[1] & 0x7FF) << 10) | (((INT)N.vector4_f32[0] & 0x3FF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 ScaleDHenN3 = { 511.0f, 1023.0f * 1024.0f, 1023.0f * (1024.0f * 2048.0f), 1.0f };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMNegativeOne));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleDHenN3));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(g_XMMaskDHen3));
	vResult = _mm_shuffle_ps(CAST_CONST_M128(vResulti), CAST_CONST_M128(vResulti), _MM_SHUFFLE(0, 3, 2, 1));
	vResulti = _mm_or_si128(vResulti, CAST_CONST_M128I(vResult));
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(0, 3, 2, 1));
	vResulti = _mm_or_si128(vResulti, CAST_CONST_M128I(vResult));
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreDHen3(XMDHEN3 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTOR Min = { -511.0f, -1023.0f, -1023.0f, -1.0f };
	static CONST XMVECTOR Max = { 511.0f, 1023.0f, 1023.0f, 1.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, Min, Max);
	pDestination->v = (((INT)N.vector4_f32[2] & 0x7FF) << 21) | (((INT)N.vector4_f32[1] & 0x7FF) << 10) | (((INT)N.vector4_f32[0] & 0x3FF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 MinDHen3 = { -511.0f, -1023.0f, -1023.0f, -1.0f };
	static const XMVECTORF32 MaxDHen3 = { 511.0f, 1023.0f, 1023.0f, 1.0f };
	static const XMVECTORF32 ScaleDHen3 = { 1.0f, 1024.0f, (1024.0f * 2048.0f), 1.0f };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(MinDHen3));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(MaxDHen3));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleDHen3));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(g_XMMaskDHen3));
	vResult = _mm_shuffle_ps(CAST_CONST_M128(vResulti), CAST_CONST_M128(vResulti), _MM_SHUFFLE(0, 3, 2, 1));
	vResulti = _mm_or_si128(vResulti, CAST_CONST_M128I(vResult));
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(0, 3, 2, 1));
	vResulti = _mm_or_si128(vResulti, CAST_CONST_M128I(vResult));
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreU565(XMU565 * pDestination, FXMVECTOR V)
{
#if defined(_XM_SSE_INTRINSICS_) && !defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	static CONST XMVECTORF32 Max = { 31.0f, 63.0f, 31.0f, 0.0f };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(Max));
	__m128i vInt = _mm_cvtps_epi32(vResult);
	USHORT x = (USHORT)(_mm_extract_epi16(vInt, 0));
	USHORT y = (USHORT)(_mm_extract_epi16(vInt, 2));
	USHORT z = (USHORT)(_mm_extract_epi16(vInt, 4));
	pDestination->v = ((z & 0x1F) << 11) | ((y & 0x3F) << 5) | ((x & 0x1F));
#else
	XMVECTOR N;
	static CONST XMVECTORF32 Max = { 31.0f, 63.0f, 31.0f, 0.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, XMVectorZero(), Max.v);
	N = XMVectorRound(N);
	pDestination->v = (((USHORT)N.vector4_f32[2] & 0x1F) << 11) | (((USHORT)N.vector4_f32[1] & 0x3F) << 5) | (((USHORT)N.vector4_f32[0] & 0x1F));
#endif
}
XMFINLINE VOID XMStoreFloat3PK(XMFLOAT3PK * pDestination, FXMVECTOR V)
{
	_DECLSPEC_ALIGN_16_ UINT IValue[4];
	UINT I, Sign, j;
	UINT Result[3];
	XMASSERT(pDestination);
	XMStoreFloat3A((XMFLOAT3A *) & IValue, V);
	for (j = 0; j < 2; ++j)
	{
		Sign = IValue[j] & 0x80000000;
		I = IValue[j] & 0x7FFFFFFF;
		if ((I & 0x7F800000) == 0x7F800000)
		{
			Result[j] = 0x7c0;
			if ((I & 0x7FFFFF) != 0)
			{
				Result[j] = 0x7c0 | (((I >> 17) | (I > 11) | (I >> 6) | (I)) & 0x3f);
			}
			else if (Sign)
			{
				Result[j] = 0;
			}
		}
		else if (Sign)
		{
			Result[j] = 0;
		}
		else if (I > 0x477E0000U)
		{
			Result[j] = 0x7BF;
		}
		else
		{
			if (I < 0x38800000U)
			{
				UINT Shift = 113U - (I >> 23U);
				I = (0x800000U | (I & 0x7FFFFFU)) >> Shift;
			}
			else
			{
				I += 0xC8000000U;
			}

			Result[j] = ((I + 0xFFFFU + ((I >> 17U) & 1U)) >> 17U) & 0x7ffU;
		}
	}
	Sign = IValue[2] & 0x80000000;
	I = IValue[2] & 0x7FFFFFFF;
	if ((I & 0x7F800000) == 0x7F800000)
	{
		Result[2] = 0x3e0;
		if (I & 0x7FFFFF)
		{
			Result[2] = 0x3e0 | (((I >> 18) | (I > 13) | (I >> 3) | (I)) & 0x1f);
		}
		else if (Sign)
		{
			Result[2] = 0;
		}
	}
	else if (Sign)
	{
		Result[2] = 0;
	}
	else if (I > 0x477C0000U)
	{
		Result[2] = 0x3df;
	}
	else
	{
		if (I < 0x38800000U)
		{
			UINT Shift = 113U - (I >> 23U);
			I = (0x800000U | (I & 0x7FFFFFU)) >> Shift;
		}
		else
		{
			I += 0xC8000000U;
		}

		Result[2] = ((I + 0x1FFFFU + ((I >> 18U) & 1U)) >> 18U) & 0x3ffU;
	}
	pDestination->v = (Result[0] & 0x7ff) | ((Result[1] & 0x7ff) << 11) | ((Result[2] & 0x3ff) << 22);
}
XMFINLINE VOID XMStoreFloat3SE(XMFLOAT3SE * pDestination, FXMVECTOR V)
{
	_DECLSPEC_ALIGN_16_ UINT IValue[4];
	UINT I, Sign, j, T;
	UINT Frac[3];
	UINT Exp[3];

	XMASSERT(pDestination);
	XMStoreFloat3A((XMFLOAT3A *) & IValue, V);
	for (j = 0; j < 3; ++j)
	{
		Sign = IValue[j] & 0x80000000;
		I = IValue[j] & 0x7FFFFFFF;
		if ((I & 0x7F800000) == 0x7F800000)
		{
			Exp[j] = 0x1f;
			if ((I & 0x7FFFFF) != 0)
			{
				Frac[j] = ((I >> 14) | (I > 5) | (I)) & 0x1ff;
			}
			else if (Sign)
			{
				Exp[j] = Frac[j] = 0;
			}
		}
		else if (Sign)
		{
			Exp[j] = Frac[j] = 0;
		}
		else if (I > 0x477FC000U)
		{
			Exp[j] = 0x1e;
			Frac[j] = 0x1ff;
		}
		else
		{
			if (I < 0x38800000U)
			{
				UINT Shift = 113U - (I >> 23U);
				I = (0x800000U | (I & 0x7FFFFFU)) >> Shift;
			}
			else
			{
				I += 0xC8000000U;
			}

			T = ((I + 0x1FFFU + ((I >> 14U) & 1U)) >> 14U) & 0x3fffU;
			Exp[j] = (T & 0x3E00) >> 9;
			Frac[j] = T & 0x1ff;
		}
	}
	T = XMMax(Exp[0], XMMax(Exp[1], Exp[2]));
	Frac[0] = Frac[0] >> (T - Exp[0]);
	Frac[1] = Frac[1] >> (T - Exp[1]);
	Frac[2] = Frac[2] >> (T - Exp[2]);
	pDestination->xm = Frac[0];
	pDestination->ym = Frac[1];
	pDestination->zm = Frac[2];
	pDestination->e = T;
}
XMFINLINE VOID XMStoreInt4(UINT * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	pDestination[0] = V.vector4_u32[0];
	pDestination[1] = V.vector4_u32[1];
	pDestination[2] = V.vector4_u32[2];
	pDestination[3] = V.vector4_u32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);

	_mm_storeu_si128((__m128i *)pDestination, CAST_CONST_M128I(V));
#else
#endif
}
XMFINLINE VOID XMStoreInt4A(UINT * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 0xF) == 0);
	pDestination[0] = V.vector4_u32[0];
	pDestination[1] = V.vector4_u32[1];
	pDestination[2] = V.vector4_u32[2];
	pDestination[3] = V.vector4_u32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 0xF) == 0);
	_mm_store_si128((__m128i *)pDestination, CAST_CONST_M128I(V));
#else
#endif
}
XMFINLINE VOID XMStoreInt4NC(UINT * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 3) == 0);

	pDestination[0] = V.vector4_u32[0];
	pDestination[1] = V.vector4_u32[1];
	pDestination[2] = V.vector4_u32[2];
	pDestination[3] = V.vector4_u32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 3) == 0);

	_mm_storeu_si128((__m128i *)pDestination, CAST_CONST_M128I(V));
#else
#endif
}
XMFINLINE VOID XMStoreFloat4(XMFLOAT4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);

	pDestination->x = V.vector4_f32[0];
	pDestination->y = V.vector4_f32[1];
	pDestination->z = V.vector4_f32[2];
	pDestination->w = V.vector4_f32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);

	_mm_storeu_ps(&pDestination->x, V);
#else
#endif
}
XMFINLINE VOID XMStoreFloat4A(XMFLOAT4A * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 0xF) == 0);
	pDestination->x = V.vector4_f32[0];
	pDestination->y = V.vector4_f32[1];
	pDestination->z = V.vector4_f32[2];
	pDestination->w = V.vector4_f32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 0xF) == 0);
	_mm_store_ps(&pDestination->x, V);
#else
#endif
}
XMFINLINE VOID XMStoreFloat4NC(XMFLOAT4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 3) == 0);

	pDestination->x = V.vector4_f32[0];
	pDestination->y = V.vector4_f32[1];
	pDestination->z = V.vector4_f32[2];
	pDestination->w = V.vector4_f32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 3) == 0);

	_mm_storeu_ps(&pDestination->x, V);
#else
#endif
}
XMFINLINE VOID XMStoreHalf4(XMHALF4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	pDestination->x = XMConvertFloatToHalf(V.vector4_f32[0]);
	pDestination->y = XMConvertFloatToHalf(V.vector4_f32[1]);
	pDestination->z = XMConvertFloatToHalf(V.vector4_f32[2]);
	pDestination->w = XMConvertFloatToHalf(V.vector4_f32[3]);
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	pDestination->x = XMConvertFloatToHalf(XMVectorGetX(V));
	pDestination->y = XMConvertFloatToHalf(XMVectorGetY(V));
	pDestination->z = XMConvertFloatToHalf(XMVectorGetZ(V));
	pDestination->w = XMConvertFloatToHalf(XMVectorGetW(V));
#else
#endif
}
XMFINLINE VOID XMStoreShortN4(XMSHORTN4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Scale = { 32767.0f, 32767.0f, 32767.0f, 32767.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, CAST_CONST_M128(g_XMNegativeOne.v, g_XMOne.v));
	N = XMVectorMultiply(N, Scale.v);
	N = XMVectorRound(N);
	pDestination->x = (SHORT)N.vector4_f32[0];
	pDestination->y = (SHORT)N.vector4_f32[1];
	pDestination->z = (SHORT)N.vector4_f32[2];
	pDestination->w = (SHORT)N.vector4_f32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static CONST XMVECTORF32 Scale = { 32767.0f, 32767.0f, 32767.0f, 32767.0f };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMNegativeOne));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(Scale));
	__m128i vResulti = _mm_cvtps_epi32(vResult);
	vResulti = _mm_packs_epi32(vResulti, vResulti);
	_mm_store_sd((double *)(&pDestination->x), CAST_CONST_M128D(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreShort4(XMSHORT4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTOR Min = { -32767.0f, -32767.0f, -32767.0f, -32767.0f };
	static CONST XMVECTOR Max = { 32767.0f, 32767.0f, 32767.0f, 32767.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, Min, Max);
	N = XMVectorRound(N);
	pDestination->x = (SHORT)N.vector4_f32[0];
	pDestination->y = (SHORT)N.vector4_f32[1];
	pDestination->z = (SHORT)N.vector4_f32[2];
	pDestination->w = (SHORT)N.vector4_f32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static CONST XMVECTORF32 Min = { -32767.0f, -32767.0f, -32767.0f, -32767.0f };
	static CONST XMVECTORF32 Max = { 32767.0f, 32767.0f, 32767.0f, 32767.0f };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(Min));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(Max));
	__m128i vInt = _mm_cvtps_epi32(vResult);
	vInt = _mm_packs_epi32(vInt, vInt);
	_mm_store_sd((double *)(&pDestination->x), CAST_CONST_M128D(vInt));
#else
#endif
}
XMFINLINE VOID XMStoreUShortN4(XMUSHORTN4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Scale = { 65535.0f, 65535.0f, 65535.0f, 65535.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, XMVectorZero(), CAST_CONST_M128(g_XMOne.v));
	N = XMVectorMultiplyAdd(N, Scale.v, CAST_CONST_M128(g_XMOneHalf.v));
	N = XMVectorTruncate(N);
	pDestination->x = (SHORT)N.vector4_f32[0];
	pDestination->y = (SHORT)N.vector4_f32[1];
	pDestination->z = (SHORT)N.vector4_f32[2];
	pDestination->w = (SHORT)N.vector4_f32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static CONST XMVECTORF32 Scale = { 65535.0f, 65535.0f, 65535.0f, 65535.0f };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(Scale));
	__m128i vInt = _mm_cvtps_epi32(vResult);
	pDestination->x = (SHORT)(_mm_extract_epi16(vInt, 0));
	pDestination->y = (SHORT)(_mm_extract_epi16(vInt, 2));
	pDestination->z = (SHORT)(_mm_extract_epi16(vInt, 4));
	pDestination->w = (SHORT)(_mm_extract_epi16(vInt, 6));
#else
#endif
}
XMFINLINE VOID XMStoreUShort4(XMUSHORT4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTOR Max = { 65535.0f, 65535.0f, 65535.0f, 65535.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, XMVectorZero(), Max);
	N = XMVectorRound(N);
	pDestination->x = (SHORT)N.vector4_f32[0];
	pDestination->y = (SHORT)N.vector4_f32[1];
	pDestination->z = (SHORT)N.vector4_f32[2];
	pDestination->w = (SHORT)N.vector4_f32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static CONST XMVECTORF32 Max = { 65535.0f, 65535.0f, 65535.0f, 65535.0f };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(Max));
	__m128i vInt = _mm_cvtps_epi32(vResult);
	pDestination->x = (SHORT)(_mm_extract_epi16(vInt, 0));
	pDestination->y = (SHORT)(_mm_extract_epi16(vInt, 2));
	pDestination->z = (SHORT)(_mm_extract_epi16(vInt, 4));
	pDestination->w = (SHORT)(_mm_extract_epi16(vInt, 6));
#else
#endif
}
XMFINLINE VOID XMStoreXIcoN4(XMXICON4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Min = { -1.0f, -1.0f, -1.0f, 0.0f };
	static CONST XMVECTORF32 Scale = { 524287.0f, 524287.0f, 524287.0f, 15.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, Min.v, CAST_CONST_M128(g_XMOne.v));
	N = XMVectorMultiply(N, Scale.v);
	N = XMVectorRound(N);
	pDestination->v = ((UINT64)N.vector4_f32[3] << 60) | (((INT64)N.vector4_f32[2] & 0xFFFFF) << 40) | (((INT64)N.vector4_f32[1] & 0xFFFFF) << 20) | (((INT64)N.vector4_f32[0] & 0xFFFFF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 MinXIcoN4 = { -1.0f, 0.0f, -1.0f, -1.0f };
	static const XMVECTORF32 ScaleXIcoN4 = { 524287.0f, 15.0f * 4096.0f * 65536.0f * 0.5f, 524287.0f * 4096.0f, 524287.0f };
	static const XMVECTORI32 MaskXIcoN4 = { 0xFFFFF, 0xF << ((60 - 32) - 1), 0xFFFFF000, 0xFFFFF };
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 1, 3, 0));
	vResult = _mm_max_ps(vResult, CAST_CONST_M128(MinXIcoN4));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleXIcoN4));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskXIcoN4));
	__m128i vResulti2 = _mm_and_si128(vResulti, CAST_CONST_M128I(g_XMMaskY));
	vResulti = _mm_add_epi32(vResulti, vResulti2);
	vResulti2 = _mm_srli_si128(vResulti, (64 + 12) / 8);
	vResulti2 = _mm_slli_si128(vResulti2, 20 / 8);
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_sd((double *)(&pDestination->v), CAST_CONST_M128D(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreXIco4(XMXICO4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Min = { -524287.0f, -524287.0f, -524287.0f, 0.0f };
	static CONST XMVECTORF32 Max = { 524287.0f, 524287.0f, 524287.0f, 15.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, Min.v, Max.v);
	pDestination->v = ((UINT64)N.vector4_f32[3] << 60) | (((INT64)N.vector4_f32[2] & 0xFFFFF) << 40) | (((INT64)N.vector4_f32[1] & 0xFFFFF) << 20) | (((INT64)N.vector4_f32[0] & 0xFFFFF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 MinXIco4 = { -524287.0f, 0.0f, -524287.0f, -524287.0f };
	static const XMVECTORF32 MaxXIco4 = { 524287.0f, 15.0f, 524287.0f, 524287.0f };
	static const XMVECTORF32 ScaleXIco4 = { 1.0f, 4096.0f * 65536.0f * 0.5f, 4096.0f, 1.0f };
	static const XMVECTORI32 MaskXIco4 = { 0xFFFFF, 0xF << ((60 - 1) - 32), 0xFFFFF000, 0xFFFFF };
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 1, 3, 0));
	vResult = _mm_max_ps(vResult, CAST_CONST_M128(MinXIco4));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(MaxXIco4));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleXIco4));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskXIco4));
	__m128i vResulti2 = _mm_and_si128(vResulti, CAST_CONST_M128I(g_XMMaskY));
	vResulti = _mm_add_epi32(vResulti, vResulti2);
	vResulti2 = _mm_srli_si128(vResulti, (64 + 12) / 8);
	vResulti2 = _mm_slli_si128(vResulti2, 20 / 8);
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_sd((double *)(&pDestination->v), CAST_CONST_M128D(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreUIcoN4(XMUICON4 * pDestination, FXMVECTOR V)
{
#define XM_URange       ((FLOAT)(1 << 20))
#define XM_URangeDiv2   ((FLOAT)(1 << 19))
#define XM_UMaxXYZ      ((FLOAT)((1 << 20) - 1))
#define XM_UMaxW        ((FLOAT)((1 << 4) - 1))
#define XM_ScaleXYZ     (-(FLOAT)((1 << 20) - 1) / XM_PACK_FACTOR)
#define XM_ScaleW       (-(FLOAT)((1 << 4) - 1) / XM_PACK_FACTOR)
#define XM_Scale        (-1.0f / XM_PACK_FACTOR)
#define XM_Offset       (3.0f)
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Scale = { 1048575.0f, 1048575.0f, 1048575.0f, 15.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, XMVectorZero(), CAST_CONST_M128(g_XMOne.v));
	N = XMVectorMultiplyAdd(N, Scale.v, CAST_CONST_M128(g_XMOneHalf.v));
	pDestination->v = ((UINT64)N.vector4_f32[3] << 60) | (((UINT64)N.vector4_f32[2] & 0xFFFFF) << 40) | (((UINT64)N.vector4_f32[1] & 0xFFFFF) << 20) | (((UINT64)N.vector4_f32[0] & 0xFFFFF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 ScaleUIcoN4 = { 1048575.0f, 15.0f * 4096.0f * 65536.0f, 1048575.0f * 4096.0f, 1048575.0f };
	static const XMVECTORI32 MaskUIcoN4 = { 0xFFFFF, 0xF << (60 - 32), 0xFFFFF000, 0xFFFFF };
	static const XMVECTORF32 AddUIcoN4 = { 0.0f, -32768.0f * 65536.0f, -32768.0f * 65536.0f, 0.0f };
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 1, 3, 0));
	vResult = _mm_max_ps(vResult, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleUIcoN4));
	vResult = _mm_add_ps(vResult, CAST_CONST_M128(AddUIcoN4));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_xor_si128(vResulti, CAST_CONST_M128I(g_XMFlipYZ));
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskUIcoN4));
	__m128i vResulti2 = _mm_srli_si128(vResulti, (64 + 12) / 8);
	vResulti2 = _mm_slli_si128(vResulti2, 20 / 8);
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_sd((double *)(&pDestination->v), CAST_CONST_M128D(vResulti));
#else
#endif
#undef XM_URange
#undef XM_URangeDiv2
#undef XM_UMaxXYZ
#undef XM_UMaxW
#undef XM_ScaleXYZ
#undef XM_ScaleW
#undef XM_Scale
#undef XM_Offset
}
XMFINLINE VOID XMStoreUIco4(XMUICO4 * pDestination, FXMVECTOR V)
{
#define XM_Scale        (-1.0f / XM_PACK_FACTOR)
#define XM_URange       ((FLOAT)(1 << 20))
#define XM_URangeDiv2   ((FLOAT)(1 << 19))
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTOR Max = { 1048575.0f, 1048575.0f, 1048575.0f, 15.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, XMVectorZero(), Max);
	N = XMVectorRound(N);
	pDestination->v = ((UINT64)N.vector4_f32[3] << 60) | (((UINT64)N.vector4_f32[2] & 0xFFFFF) << 40) | (((UINT64)N.vector4_f32[1] & 0xFFFFF) << 20) | (((UINT64)N.vector4_f32[0] & 0xFFFFF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 MaxUIco4 = { 1048575.0f, 15.0f, 1048575.0f, 1048575.0f };
	static const XMVECTORF32 ScaleUIco4 = { 1.0f, 4096.0f * 65536.0f, 4096.0f, 1.0f };
	static const XMVECTORI32 MaskUIco4 = { 0xFFFFF, 0xF << (60 - 32), 0xFFFFF000, 0xFFFFF };
	static const XMVECTORF32 AddUIco4 = { 0.0f, -32768.0f * 65536.0f, -32768.0f * 65536.0f, 0.0f };
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 1, 3, 0));
	vResult = _mm_max_ps(vResult, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(MaxUIco4));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleUIco4));
	vResult = _mm_add_ps(vResult, CAST_CONST_M128(AddUIco4));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_xor_si128(vResulti, CAST_CONST_M128I(g_XMFlipYZ));
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskUIco4));
	__m128i vResulti2 = _mm_srli_si128(vResulti, (64 + 12) / 8);
	vResulti2 = _mm_slli_si128(vResulti2, 20 / 8);
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_sd((double *)(&pDestination->v), CAST_CONST_M128D(vResulti));
#else
#endif
#undef XM_Scale
#undef XM_URange
#undef XM_URangeDiv2
}
XMFINLINE VOID XMStoreIcoN4(XMICON4 * pDestination, FXMVECTOR V)
{
#define XM_Scale    (-1.0f / XM_PACK_FACTOR)
#define XM_URange   ((FLOAT)(1 << 4))
#define XM_Offset   (3.0f)
#define XM_UMaxXYZ  ((FLOAT)((1 << (20 - 1)) - 1))
#define XM_UMaxW    ((FLOAT)((1 << (4 - 1)) - 1))
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Scale = { 524287.0f, 524287.0f, 524287.0f, 7.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, CAST_CONST_M128(g_XMNegativeOne.v, g_XMOne.v));
	N = XMVectorMultiplyAdd(N, Scale.v, CAST_CONST_M128(g_XMNegativeZero.v));
	N = XMVectorRound(N);
	pDestination->v = ((UINT64)N.vector4_f32[3] << 60) | (((UINT64)N.vector4_f32[2] & 0xFFFFF) << 40) | (((UINT64)N.vector4_f32[1] & 0xFFFFF) << 20) | (((UINT64)N.vector4_f32[0] & 0xFFFFF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 ScaleIcoN4 = { 524287.0f, 7.0f * 4096.0f * 65536.0f, 524287.0f * 4096.0f, 524287.0f };
	static const XMVECTORI32 MaskIcoN4 = { 0xFFFFF, 0xF << (60 - 32), 0xFFFFF000, 0xFFFFF };
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 1, 3, 0));
	vResult = _mm_max_ps(vResult, CAST_CONST_M128(g_XMNegativeOne));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleIcoN4));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskIcoN4));
	__m128i vResulti2 = _mm_srli_si128(vResulti, (64 + 12) / 8);
	vResulti2 = _mm_slli_si128(vResulti2, 20 / 8);
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_sd((double *)(&pDestination->v), CAST_CONST_M128D(vResulti));
#else
#endif
#undef XM_Scale
#undef XM_URange
#undef XM_Offset
#undef XM_UMaxXYZ
#undef XM_UMaxW
}
XMFINLINE VOID XMStoreIco4(XMICO4 * pDestination, FXMVECTOR V)
{
#define XM_Scale    (-1.0f / XM_PACK_FACTOR)
#define XM_URange   ((FLOAT)(1 << 4))
#define XM_Offset   (3.0f)
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTOR Min = { -524287.0f, -524287.0f, -524287.0f, -7.0f };
	static CONST XMVECTOR Max = { 524287.0f, 524287.0f, 524287.0f, 7.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, Min, Max);
	N = XMVectorRound(N);
	pDestination->v = ((INT64)N.vector4_f32[3] << 60) | (((INT64)N.vector4_f32[2] & 0xFFFFF) << 40) | (((INT64)N.vector4_f32[1] & 0xFFFFF) << 20) | (((INT64)N.vector4_f32[0] & 0xFFFFF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 MinIco4 = { -524287.0f, -7.0f, -524287.0f, -524287.0f };
	static const XMVECTORF32 MaxIco4 = { 524287.0f, 7.0f, 524287.0f, 524287.0f };
	static const XMVECTORF32 ScaleIco4 = { 1.0f, 4096.0f * 65536.0f, 4096.0f, 1.0f };
	static const XMVECTORI32 MaskIco4 = { 0xFFFFF, 0xF << (60 - 32), 0xFFFFF000, 0xFFFFF };
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 1, 3, 0));
	vResult = _mm_max_ps(vResult, CAST_CONST_M128(MinIco4));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(MaxIco4));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleIco4));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskIco4));
	__m128i vResulti2 = _mm_srli_si128(vResulti, (64 + 12) / 8);
	vResulti2 = _mm_slli_si128(vResulti2, 20 / 8);
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_sd((double *)(&pDestination->v), CAST_CONST_M128D(vResulti));
#else
#endif
#undef XM_Scale
#undef XM_URange
#undef XM_Offset
}
XMFINLINE VOID XMStoreXDecN4(XMXDECN4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Min = { -1.0f, -1.0f, -1.0f, 0.0f };
	static CONST XMVECTORF32 Scale = { 511.0f, 511.0f, 511.0f, 3.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, Min.v, CAST_CONST_M128(g_XMOne.v));
	N = XMVectorMultiply(N, Scale.v);
	N = XMVectorRound(N);
	pDestination->v = ((UINT)N.vector4_f32[3] << 30) | (((INT)N.vector4_f32[2] & 0x3FF) << 20) | (((INT)N.vector4_f32[1] & 0x3FF) << 10) | (((INT)N.vector4_f32[0] & 0x3FF));
#elif defined(_XM_SSE_INTRINSICS_)
	static const XMVECTORF32 Min = { -1.0f, -1.0f, -1.0f, 0.0f };
	static const XMVECTORF32 Scale = { 511.0f, 511.0f * 1024.0f, 511.0f * 1048576.0f, 3.0f * 536870912.0f };
	static const XMVECTORI32 ScaleMask = { 0x3FF, 0x3FF << 10, 0x3FF << 20, 0x3 << 29 };
	XMASSERT(pDestination);
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(Min));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(Scale));
	__m128i vResulti = _mm_cvtps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(ScaleMask));
	__m128i vResultw = _mm_and_si128(vResulti, CAST_CONST_M128I(g_XMMaskW));
	vResulti = _mm_add_epi32(vResulti, vResultw);
	vResult = _mm_shuffle_ps(CAST_CONST_M128(vResulti), CAST_CONST_M128(vResulti), _MM_SHUFFLE(0, 3, 2, 1));
	vResulti = _mm_or_si128(vResulti, CAST_CONST_M128I(vResult));
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(0, 3, 2, 1));
	vResulti = _mm_or_si128(vResulti, CAST_CONST_M128I(vResult));
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(0, 3, 2, 1));
	vResulti = _mm_or_si128(vResulti, CAST_CONST_M128I(vResult));
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreXDec4(XMXDEC4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTOR Min = { -511.0f, -511.0f, -511.0f, 0.0f };
	static CONST XMVECTOR Max = { 511.0f, 511.0f, 511.0f, 3.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, Min, Max);
	pDestination->v = ((UINT)N.vector4_f32[3] << 30) | (((INT)N.vector4_f32[2] & 0x3FF) << 20) | (((INT)N.vector4_f32[1] & 0x3FF) << 10) | (((INT)N.vector4_f32[0] & 0x3FF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 MinXDec4 = { -511.0f, -511.0f, -511.0f, 0.0f };
	static const XMVECTORF32 MaxXDec4 = { 511.0f, 511.0f, 511.0f, 3.0f };
	static const XMVECTORF32 ScaleXDec4 = { 1.0f, 1024.0f / 2.0f, 1024.0f * 1024.0f, 1024.0f * 1024.0f * 1024.0f / 2.0f };
	static const XMVECTORI32 MaskXDec4 = { 0x3FF, 0x3FF << (10 - 1), 0x3FF << 20, 0x3 << (30 - 1) };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(MinXDec4));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(MaxXDec4));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleXDec4));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskXDec4));
	__m128i vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(3, 2, 3, 2));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(1, 1, 1, 1));
	vResulti2 = _mm_add_epi32(vResulti2, vResulti2);
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreUDecN4(XMUDECN4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Scale = { 1023.0f, 1023.0f, 1023.0f, 3.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, XMVectorZero(), CAST_CONST_M128(g_XMOne.v));
	N = XMVectorMultiply(N, Scale.v);
	pDestination->v = ((UINT)N.vector4_f32[3] << 30) | (((UINT)N.vector4_f32[2] & 0x3FF) << 20) | (((UINT)N.vector4_f32[1] & 0x3FF) << 10) | (((UINT)N.vector4_f32[0] & 0x3FF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 ScaleUDecN4 = { 1023.0f, 1023.0f * 1024.0f * 0.5f, 1023.0f * 1024.0f * 1024.0f, 3.0f * 1024.0f * 1024.0f * 1024.0f * 0.5f };
	static const XMVECTORI32 MaskUDecN4 = { 0x3FF, 0x3FF << (10 - 1), 0x3FF << 20, 0x3 << (30 - 1) };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleUDecN4));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskUDecN4));
	__m128i vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(3, 2, 3, 2));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(1, 1, 1, 1));
	vResulti2 = _mm_add_epi32(vResulti2, vResulti2);
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreUDec4(XMUDEC4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTOR Max = { 1023.0f, 1023.0f, 1023.0f, 3.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, XMVectorZero(), Max);
	pDestination->v = ((UINT)N.vector4_f32[3] << 30) | (((UINT)N.vector4_f32[2] & 0x3FF) << 20) | (((UINT)N.vector4_f32[1] & 0x3FF) << 10) | (((UINT)N.vector4_f32[0] & 0x3FF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 MaxUDec4 = { 1023.0f, 1023.0f, 1023.0f, 3.0f };
	static const XMVECTORF32 ScaleUDec4 = { 1.0f, 1024.0f / 2.0f, 1024.0f * 1024.0f, 1024.0f * 1024.0f * 1024.0f / 2.0f };
	static const XMVECTORI32 MaskUDec4 = { 0x3FF, 0x3FF << (10 - 1), 0x3FF << 20, 0x3 << (30 - 1) };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(MaxUDec4));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleUDec4));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskUDec4));
	__m128i vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(3, 2, 3, 2));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(1, 1, 1, 1));
	vResulti2 = _mm_add_epi32(vResulti2, vResulti2);
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreDecN4(XMDECN4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Scale = { 511.0f, 511.0f, 511.0f, 1.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, CAST_CONST_M128(g_XMNegativeOne.v, g_XMOne.v));
	N = XMVectorMultiply(N, Scale.v);
	pDestination->v = ((INT)N.vector4_f32[3] << 30) | (((INT)N.vector4_f32[2] & 0x3FF) << 20) | (((INT)N.vector4_f32[1] & 0x3FF) << 10) | (((INT)N.vector4_f32[0] & 0x3FF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 ScaleDecN4 = { 511.0f, 511.0f * 1024.0f, 511.0f * 1024.0f * 1024.0f, 1.0f * 1024.0f * 1024.0f * 1024.0f };
	static const XMVECTORI32 MaskDecN4 = { 0x3FF, 0x3FF << 10, 0x3FF << 20, 0x3 << 30 };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMNegativeOne));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleDecN4));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskDecN4));
	__m128i vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(3, 2, 3, 2));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(1, 1, 1, 1));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreDec4(XMDEC4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTOR Min = { -511.0f, -511.0f, -511.0f, -1.0f };
	static CONST XMVECTOR Max = { 511.0f, 511.0f, 511.0f, 1.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, Min, Max);
	pDestination->v = ((INT)N.vector4_f32[3] << 30) | (((INT)N.vector4_f32[2] & 0x3FF) << 20) | (((INT)N.vector4_f32[1] & 0x3FF) << 10) | (((INT)N.vector4_f32[0] & 0x3FF));
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 MinDec4 = { -511.0f, -511.0f, -511.0f, -1.0f };
	static const XMVECTORF32 MaxDec4 = { 511.0f, 511.0f, 511.0f, 1.0f };
	static const XMVECTORF32 ScaleDec4 = { 1.0f, 1024.0f, 1024.0f * 1024.0f, 1024.0f * 1024.0f * 1024.0f };
	static const XMVECTORI32 MaskDec4 = { 0x3FF, 0x3FF << 10, 0x3FF << 20, 0x3 << 30 };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(MinDec4));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(MaxDec4));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleDec4));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskDec4));
	__m128i vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(3, 2, 3, 2));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(1, 1, 1, 1));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreUByteN4(XMUBYTEN4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Scale = { 255.0f, 255.0f, 255.0f, 255.0f };
	XMASSERT(pDestination);
	N = XMVectorSaturate(V);
	N = XMVectorMultiply(N, Scale.v);
	N = XMVectorRound(N);
	pDestination->x = (BYTE)N.vector4_f32[0];
	pDestination->y = (BYTE)N.vector4_f32[1];
	pDestination->z = (BYTE)N.vector4_f32[2];
	pDestination->w = (BYTE)N.vector4_f32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 ScaleUByteN4 = { 255.0f, 255.0f * 256.0f * 0.5f, 255.0f * 256.0f * 256.0f, 255.0f * 256.0f * 256.0f * 256.0f * 0.5f };
	static const XMVECTORI32 MaskUByteN4 = { 0xFF, 0xFF << (8 - 1), 0xFF << 16, 0xFF << (24 - 1) };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleUByteN4));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskUByteN4));
	__m128i vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(3, 2, 3, 2));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(1, 1, 1, 1));
	vResulti2 = _mm_add_epi32(vResulti2, vResulti2);
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreUByte4(XMUBYTE4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTOR Max = { 255.0f, 255.0f, 255.0f, 255.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, XMVectorZero(), Max);
	N = XMVectorRound(N);
	pDestination->x = (BYTE)N.vector4_f32[0];
	pDestination->y = (BYTE)N.vector4_f32[1];
	pDestination->z = (BYTE)N.vector4_f32[2];
	pDestination->w = (BYTE)N.vector4_f32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 MaxUByte4 = { 255.0f, 255.0f, 255.0f, 255.0f };
	static const XMVECTORF32 ScaleUByte4 = { 1.0f, 256.0f * 0.5f, 256.0f * 256.0f, 256.0f * 256.0f * 256.0f * 0.5f };
	static const XMVECTORI32 MaskUByte4 = { 0xFF, 0xFF << (8 - 1), 0xFF << 16, 0xFF << (24 - 1) };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(MaxUByte4));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleUByte4));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskUByte4));
	__m128i vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(3, 2, 3, 2));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(1, 1, 1, 1));
	vResulti2 = _mm_add_epi32(vResulti2, vResulti2);
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreByteN4(XMBYTEN4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Scale = { 127.0f, 127.0f, 127.0f, 127.0f };
	XMASSERT(pDestination);
	N = XMVectorMultiply(V, Scale.v);
	N = XMVectorRound(N);
	pDestination->x = (CHAR)N.vector4_f32[0];
	pDestination->y = (CHAR)N.vector4_f32[1];
	pDestination->z = (CHAR)N.vector4_f32[2];
	pDestination->w = (CHAR)N.vector4_f32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 ScaleByteN4 = { 127.0f, 127.0f * 256.0f, 127.0f * 256.0f * 256.0f, 127.0f * 256.0f * 256.0f * 256.0f };
	static const XMVECTORI32 MaskByteN4 = { 0xFF, 0xFF << 8, 0xFF << 16, 0xFF << 24 };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMNegativeOne));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleByteN4));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskByteN4));
	__m128i vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(3, 2, 3, 2));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(1, 1, 1, 1));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreByte4(XMBYTE4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTOR Min = { -127.0f, -127.0f, -127.0f, -127.0f };
	static CONST XMVECTOR Max = { 127.0f, 127.0f, 127.0f, 127.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, Min, Max);
	N = XMVectorRound(N);
	pDestination->x = (CHAR)N.vector4_f32[0];
	pDestination->y = (CHAR)N.vector4_f32[1];
	pDestination->z = (CHAR)N.vector4_f32[2];
	pDestination->w = (CHAR)N.vector4_f32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static const XMVECTORF32 MinByte4 = { -127.0f, -127.0f, -127.0f, -127.0f };
	static const XMVECTORF32 MaxByte4 = { 127.0f, 127.0f, 127.0f, 127.0f };
	static const XMVECTORF32 ScaleByte4 = { 1.0f, 256.0f, 256.0f * 256.0f, 256.0f * 256.0f * 256.0f };
	static const XMVECTORI32 MaskByte4 = { 0xFF, 0xFF << 8, 0xFF << 16, 0xFF << 24 };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(MinByte4));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(MaxByte4));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(ScaleByte4));
	__m128i vResulti = _mm_cvttps_epi32(vResult);
	vResulti = _mm_and_si128(vResulti, CAST_CONST_M128I(MaskByte4));
	__m128i vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(3, 2, 3, 2));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	vResulti2 = _mm_shuffle_epi32(vResulti, _MM_SHUFFLE(1, 1, 1, 1));
	vResulti = _mm_or_si128(vResulti, vResulti2);
	_mm_store_ss((float *)(&pDestination->v), CAST_CONST_M128(vResulti));
#else
#endif
}
XMFINLINE VOID XMStoreUNibble4(XMUNIBBLE4 * pDestination, FXMVECTOR V)
{
#if defined(_XM_SSE_INTRINSICS_) && !defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	static CONST XMVECTORF32 Max = { 15.0f, 15.0f, 15.0f, 15.0f };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(Max));
	__m128i vInt = _mm_cvtps_epi32(vResult);
	USHORT x = (USHORT)(_mm_extract_epi16(vInt, 0));
	USHORT y = (USHORT)(_mm_extract_epi16(vInt, 2));
	USHORT z = (USHORT)(_mm_extract_epi16(vInt, 4));
	USHORT w = (USHORT)(_mm_extract_epi16(vInt, 6));
	pDestination->v = ((w & 0xF) << 12) | ((z & 0xF) << 8) | ((y & 0xF) << 4) | ((x & 0xF));
#else
	XMVECTOR N;
	static CONST XMVECTORF32 Max = { 15.0f, 15.0f, 15.0f, 15.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, XMVectorZero(), Max.v);
	N = XMVectorRound(N);
	pDestination->v = (((USHORT)N.vector4_f32[3] & 0xF) << 12) | (((USHORT)N.vector4_f32[2] & 0xF) << 8) | (((USHORT)N.vector4_f32[1] & 0xF) << 4) | (((USHORT)N.vector4_f32[0] & 0xF));
#endif
}
XMFINLINE VOID XMStoreU555(XMU555 *pDestination, FXMVECTOR V)
{
#if defined(_XM_SSE_INTRINSICS_) && !defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	static CONST XMVECTORF32 Max = { 31.0f, 31.0f, 31.0f, 1.0f };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(Max));
	__m128i vInt = _mm_cvtps_epi32(vResult);
	USHORT x = (USHORT)(_mm_extract_epi16(vInt, 0));
	USHORT y = (USHORT)(_mm_extract_epi16(vInt, 2));
	USHORT z = (USHORT)(_mm_extract_epi16(vInt, 4));
	USHORT w = (USHORT)(_mm_extract_epi16(vInt, 6));
	pDestination->v = ((w) ? 0x8000 : 0) | ((z & 0x1F) << 10) | ((y & 0x1F) << 5) | ((x & 0x1F));
#else
	XMVECTOR N;
	static CONST XMVECTORF32 Max = { 31.0f, 31.0f, 31.0f, 1.0f };
	XMASSERT(pDestination);
	N = XMVectorClamp(V, XMVectorZero(), Max.v);
	N = XMVectorRound(N);
	pDestination->v = ((N.vector4_f32[3] > 0.f) ? 0x8000 : 0) | (((USHORT)N.vector4_f32[2] & 0x1F) << 10) | (((USHORT)N.vector4_f32[1] & 0x1F) << 5) | (((USHORT)N.vector4_f32[0] & 0x1F));
#endif
}
XMFINLINE VOID XMStoreColor(XMCOLOR *pDestination, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N;
	static CONST XMVECTORF32 Scale = { 255.0f, 255.0f, 255.0f, 255.0f };
	XMASSERT(pDestination);
	N = XMVectorSaturate(V);
	N = XMVectorMultiply(N, Scale.v);
	N = XMVectorRound(N);
	pDestination->c = ((UINT)N.vector4_f32[3] << 24) | ((UINT)N.vector4_f32[0] << 16) | ((UINT)N.vector4_f32[1] << 8) | ((UINT)N.vector4_f32[2]);
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	static CONST XMVECTORF32 Scale = { 255.0f, 255.0f, 255.0f, 255.0f };
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	vResult = _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(Scale));
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(3, 0, 1, 2));
	__m128i vInt = _mm_cvtps_epi32(vResult);
	vInt = _mm_packs_epi32(vInt, vInt);
	vInt = _mm_packus_epi16(vInt, vInt);
	_mm_store_ss((float *)(&pDestination->c), CAST_M128(vInt));
#else
#endif
}
XMFINLINE VOID XMStoreFloat3x3(XMFLOAT3X3 *pDestination, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_) || defined(XM_NO_MISALIGNED_VECTOR_ACCESS) || defined(_XM_SSE_INTRINSICS_)
	XMStoreFloat3x3NC(pDestination, M);
#else
#endif
}
XMFINLINE VOID XMStoreFloat3x3NC(XMFLOAT3X3 *pDestination, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	pDestination->m[0][0] = M.r[0].vector4_f32[0];
	pDestination->m[0][1] = M.r[0].vector4_f32[1];
	pDestination->m[0][2] = M.r[0].vector4_f32[2];
	pDestination->m[1][0] = M.r[1].vector4_f32[0];
	pDestination->m[1][1] = M.r[1].vector4_f32[1];
	pDestination->m[1][2] = M.r[1].vector4_f32[2];
	pDestination->m[2][0] = M.r[2].vector4_f32[0];
	pDestination->m[2][1] = M.r[2].vector4_f32[1];
	pDestination->m[2][2] = M.r[2].vector4_f32[2];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMVECTOR vTemp1 = M.r[0];
	XMVECTOR vTemp2 = M.r[1];
	XMVECTOR vTemp3 = M.r[2];
	XMVECTOR vWork = _mm_shuffle_ps(vTemp1, vTemp2, _MM_SHUFFLE(0, 0, 2, 2));
	vTemp1 = _mm_shuffle_ps(vTemp1, vWork, _MM_SHUFFLE(2, 0, 1, 0));
	_mm_storeu_ps(&pDestination->m[0][0], vTemp1);
	vTemp2 = _mm_shuffle_ps(vTemp2, vTemp3, _MM_SHUFFLE(1, 0, 2, 1));
	_mm_storeu_ps(&pDestination->m[1][1], vTemp2);
	vTemp3 = _mm_shuffle_ps(vTemp3, vTemp3, _MM_SHUFFLE(2, 2, 2, 2));
	_mm_store_ss(&pDestination->m[2][2], vTemp3);
#else
#endif
}
XMFINLINE VOID XMStoreFloat4x3(XMFLOAT4X3 *pDestination, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_) || defined(XM_NO_MISALIGNED_VECTOR_ACCESS) || defined(_XM_SSE_INTRINSICS_)
	XMStoreFloat4x3NC(pDestination, M);
#else
#endif
}
XMFINLINE VOID XMStoreFloat4x3A(XMFLOAT4X3A *pDestination, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 0xF) == 0);
	pDestination->m[0][0] = M.r[0].vector4_f32[0];
	pDestination->m[0][1] = M.r[0].vector4_f32[1];
	pDestination->m[0][2] = M.r[0].vector4_f32[2];
	pDestination->m[1][0] = M.r[1].vector4_f32[0];
	pDestination->m[1][1] = M.r[1].vector4_f32[1];
	pDestination->m[1][2] = M.r[1].vector4_f32[2];
	pDestination->m[2][0] = M.r[2].vector4_f32[0];
	pDestination->m[2][1] = M.r[2].vector4_f32[1];
	pDestination->m[2][2] = M.r[2].vector4_f32[2];
	pDestination->m[3][0] = M.r[3].vector4_f32[0];
	pDestination->m[3][1] = M.r[3].vector4_f32[1];
	pDestination->m[3][2] = M.r[3].vector4_f32[2];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 0xF) == 0);
	XMVECTOR vTemp1 = M.r[0];
	XMVECTOR vTemp2 = M.r[1];
	XMVECTOR vTemp3 = M.r[2];
	XMVECTOR vTemp4 = M.r[3];
	XMVECTOR vTemp = _mm_shuffle_ps(vTemp1, vTemp2, _MM_SHUFFLE(1, 0, 2, 2));
	vTemp2 = _mm_shuffle_ps(vTemp2, vTemp3, _MM_SHUFFLE(1, 0, 2, 1));
	vTemp1 = _mm_shuffle_ps(vTemp1, vTemp, _MM_SHUFFLE(2, 0, 1, 0));
	vTemp3 = _mm_shuffle_ps(vTemp3, vTemp4, _MM_SHUFFLE(0, 0, 2, 2));
	vTemp3 = _mm_shuffle_ps(vTemp3, vTemp4, _MM_SHUFFLE(2, 1, 2, 0));
	_mm_store_ps(&pDestination->m[0][0], vTemp1);
	_mm_store_ps(&pDestination->m[1][1], vTemp2);
	_mm_store_ps(&pDestination->m[2][2], vTemp3);
#else
#endif
}
XMFINLINE VOID XMStoreFloat4x3NC(XMFLOAT4X3 *pDestination, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	pDestination->m[0][0] = M.r[0].vector4_f32[0];
	pDestination->m[0][1] = M.r[0].vector4_f32[1];
	pDestination->m[0][2] = M.r[0].vector4_f32[2];
	pDestination->m[1][0] = M.r[1].vector4_f32[0];
	pDestination->m[1][1] = M.r[1].vector4_f32[1];
	pDestination->m[1][2] = M.r[1].vector4_f32[2];
	pDestination->m[2][0] = M.r[2].vector4_f32[0];
	pDestination->m[2][1] = M.r[2].vector4_f32[1];
	pDestination->m[2][2] = M.r[2].vector4_f32[2];
	pDestination->m[3][0] = M.r[3].vector4_f32[0];
	pDestination->m[3][1] = M.r[3].vector4_f32[1];
	pDestination->m[3][2] = M.r[3].vector4_f32[2];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	XMVECTOR vTemp1 = M.r[0];
	XMVECTOR vTemp2 = M.r[1];
	XMVECTOR vTemp3 = M.r[2];
	XMVECTOR vTemp4 = M.r[3];
	XMVECTOR vTemp2x = _mm_shuffle_ps(vTemp2, vTemp3, _MM_SHUFFLE(1, 0, 2, 1));
	vTemp2 = _mm_shuffle_ps(vTemp2, vTemp1, _MM_SHUFFLE(2, 2, 0, 0));
	vTemp1 = _mm_shuffle_ps(vTemp1, vTemp2, _MM_SHUFFLE(0, 2, 1, 0));
	vTemp3 = _mm_shuffle_ps(vTemp3, vTemp4, _MM_SHUFFLE(0, 0, 2, 2));
	vTemp3 = _mm_shuffle_ps(vTemp3, vTemp4, _MM_SHUFFLE(2, 1, 2, 0));
	_mm_storeu_ps(&pDestination->m[0][0], vTemp1);
	_mm_storeu_ps(&pDestination->m[1][1], vTemp2x);
	_mm_storeu_ps(&pDestination->m[2][2], vTemp3);
#else
#endif
}
XMFINLINE VOID XMStoreFloat4x4(XMFLOAT4X4 *pDestination, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_) || defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
	XMStoreFloat4x4NC(pDestination, M);
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	_mm_storeu_ps(&pDestination->_11, M.r[0]);
	_mm_storeu_ps(&pDestination->_21, M.r[1]);
	_mm_storeu_ps(&pDestination->_31, M.r[2]);
	_mm_storeu_ps(&pDestination->_41, M.r[3]);
#else
#endif
}
XMFINLINE VOID XMStoreFloat4x4A(XMFLOAT4X4A *pDestination, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	XMASSERT(((UINT_PTR)pDestination & 0xF) == 0);
	pDestination->m[0][0] = M.r[0].vector4_f32[0];
	pDestination->m[0][1] = M.r[0].vector4_f32[1];
	pDestination->m[0][2] = M.r[0].vector4_f32[2];
	pDestination->m[0][3] = M.r[0].vector4_f32[3];
	pDestination->m[1][0] = M.r[1].vector4_f32[0];
	pDestination->m[1][1] = M.r[1].vector4_f32[1];
	pDestination->m[1][2] = M.r[1].vector4_f32[2];
	pDestination->m[1][3] = M.r[1].vector4_f32[3];
	pDestination->m[2][0] = M.r[2].vector4_f32[0];
	pDestination->m[2][1] = M.r[2].vector4_f32[1];
	pDestination->m[2][2] = M.r[2].vector4_f32[2];
	pDestination->m[2][3] = M.r[2].vector4_f32[3];
	pDestination->m[3][0] = M.r[3].vector4_f32[0];
	pDestination->m[3][1] = M.r[3].vector4_f32[1];
	pDestination->m[3][2] = M.r[3].vector4_f32[2];
	pDestination->m[3][3] = M.r[3].vector4_f32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	_mm_store_ps(&pDestination->_11, M.r[0]);
	_mm_store_ps(&pDestination->_21, M.r[1]);
	_mm_store_ps(&pDestination->_31, M.r[2]);
	_mm_store_ps(&pDestination->_41, M.r[3]);
#else
#endif
}
XMFINLINE VOID XMStoreFloat4x4NC(XMFLOAT4X4 *pDestination, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMASSERT(pDestination);
	pDestination->m[0][0] = M.r[0].vector4_f32[0];
	pDestination->m[0][1] = M.r[0].vector4_f32[1];
	pDestination->m[0][2] = M.r[0].vector4_f32[2];
	pDestination->m[0][3] = M.r[0].vector4_f32[3];
	pDestination->m[1][0] = M.r[1].vector4_f32[0];
	pDestination->m[1][1] = M.r[1].vector4_f32[1];
	pDestination->m[1][2] = M.r[1].vector4_f32[2];
	pDestination->m[1][3] = M.r[1].vector4_f32[3];
	pDestination->m[2][0] = M.r[2].vector4_f32[0];
	pDestination->m[2][1] = M.r[2].vector4_f32[1];
	pDestination->m[2][2] = M.r[2].vector4_f32[2];
	pDestination->m[2][3] = M.r[2].vector4_f32[3];
	pDestination->m[3][0] = M.r[3].vector4_f32[0];
	pDestination->m[3][1] = M.r[3].vector4_f32[1];
	pDestination->m[3][2] = M.r[3].vector4_f32[2];
	pDestination->m[3][3] = M.r[3].vector4_f32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pDestination);
	_mm_storeu_ps(&pDestination->m[0][0], M.r[0]);
	_mm_storeu_ps(&pDestination->m[1][0], M.r[1]);
	_mm_storeu_ps(&pDestination->m[2][0], M.r[2]);
	_mm_storeu_ps(&pDestination->m[3][0], M.r[3]);
#else
#endif
}
#endif
