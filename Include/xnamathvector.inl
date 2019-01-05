/*+@@file@@----------------------------------------------------------------*//*!
 \file		xnamathvector.inl
 \par Description 
            Extension and update of headers for PellesC compiler suite.
            01.01.2019 Fixed problems of conversion from C++
 \par  Status: 
            
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Nov 20 17:07:21 2016
 \date		Modified on Tue Jan  1 17:49:46 2019
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#ifndef __XNAMATHVECTOR_INL__
#define __XNAMATHVECTOR_INL__
#if defined(_XM_NO_INTRINSICS_)
#define XMISNAN(x)  ((*(UINT*)&(x) & 0x7F800000) == 0x7F800000 && (*(UINT*)&(x) & 0x7FFFFF) != 0)
#define XMISINF(x)  ((*(UINT*)&(x) & 0x7FFFFFFF) == 0x7F800000)
#endif
XMFINLINE XMVECTOR XMVectorZero(void)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult = { 0.0f, 0.0f, 0.0f, 0.0f };
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_setzero_ps();
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSet(FLOAT x, FLOAT y, FLOAT z, FLOAT w)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTORF32 vResult = { x, y, z, w };
	return vResult.v;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_set_ps(w, z, y, x);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetInt(UINT x, UINT y, UINT z, UINT w)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTORU32 vResult = { x, y, z, w };
	return vResult.v;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i V = _mm_set_epi32(w, z, y, x);
	return CAST_M128(V);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorReplicate(FLOAT Value)
{
#if defined(_XM_NO_INTRINSICS_) || defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
	XMVECTORF32 vResult = { Value, Value, Value, Value };
	return vResult.v;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_set_ps1(Value);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorReplicatePtr(CONST FLOAT *pValue)
{
#if defined(_XM_NO_INTRINSICS_) || defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
	FLOAT Value = pValue[0];
	XMVECTORF32 vResult = { Value, Value, Value, Value };
	return vResult.v;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_load_ps1(pValue);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorReplicateInt(UINT Value)
{
#if defined(_XM_NO_INTRINSICS_) || defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
	XMVECTORU32 vResult = { Value, Value, Value, Value };
	return vResult.v;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vTemp = _mm_set1_epi32(Value);
	return CAST_CONST_M128(vTemp);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorReplicateIntPtr(CONST UINT *pValue)
{
#if defined(_XM_NO_INTRINSICS_) || defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
	UINT Value = pValue[0];
	XMVECTORU32 vResult = { Value, Value, Value, Value };
	return vResult.v;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_load_ps1((const float *)(pValue));
#else
#endif
}
XMFINLINE XMVECTOR XMVectorTrueInt(void)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTORU32 vResult = { 0xFFFFFFFFU, 0xFFFFFFFFU, 0xFFFFFFFFU, 0xFFFFFFFFU };
	return vResult.v;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i V = _mm_set1_epi32(-1);
	return CAST_M128(V);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorFalseInt(void)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult = { 0.0f, 0.0f, 0.0f, 0.0f };
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_setzero_ps();
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSplatX(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult;
	vResult.vector4_f32[0] = vResult.vector4_f32[1] = vResult.vector4_f32[2] = vResult.vector4_f32[3] = V.vector4_f32[0];
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_shuffle_ps(V, V, _MM_SHUFFLE(0, 0, 0, 0));
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSplatY(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult;
	vResult.vector4_f32[0] = vResult.vector4_f32[1] = vResult.vector4_f32[2] = vResult.vector4_f32[3] = V.vector4_f32[1];
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_shuffle_ps(V, V, _MM_SHUFFLE(1, 1, 1, 1));
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSplatZ(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult;
	vResult.vector4_f32[0] = vResult.vector4_f32[1] = vResult.vector4_f32[2] = vResult.vector4_f32[3] = V.vector4_f32[2];
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 2, 2, 2));
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSplatW(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult;
	vResult.vector4_f32[0] = vResult.vector4_f32[1] = vResult.vector4_f32[2] = vResult.vector4_f32[3] = V.vector4_f32[3];
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_shuffle_ps(V, V, _MM_SHUFFLE(3, 3, 3, 3));
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSplatOne(void)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult;
	vResult.vector4_f32[0] = vResult.vector4_f32[1] = vResult.vector4_f32[2] = vResult.vector4_f32[3] = 1.0f;
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	return CAST_CONST_M128(g_XMOne);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSplatInfinity(void)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult;
	vResult.vector4_u32[0] = vResult.vector4_u32[1] = vResult.vector4_u32[2] = vResult.vector4_u32[3] = 0x7F800000;
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	return CAST_CONST_M128(g_XMInfinity);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSplatQNaN(void)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult;
	vResult.vector4_u32[0] = vResult.vector4_u32[1] = vResult.vector4_u32[2] = vResult.vector4_u32[3] = 0x7FC00000;
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	return CAST_CONST_M128(g_XMQNaN);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSplatEpsilon(void)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult;
	vResult.vector4_u32[0] = vResult.vector4_u32[1] = vResult.vector4_u32[2] = vResult.vector4_u32[3] = 0x34000000;
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	return CAST_CONST_M128(g_XMEpsilon);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSplatSignMask(void)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult;
	vResult.vector4_u32[0] = vResult.vector4_u32[1] = vResult.vector4_u32[2] = vResult.vector4_u32[3] = 0x80000000U;
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i V = _mm_set1_epi32(0x80000000);
	return CAST_M128(V);
#else
#endif
}
XMFINLINE FLOAT XMVectorGetByIndex(FXMVECTOR V, UINT i)
{
	XMASSERT(i <= 3);
#if defined(_XM_NO_INTRINSICS_)
	return V.vector4_f32[i];
#elif defined(_XM_SSE_INTRINSICS_)
	return V.m128_f32[i];
#else
#endif
}
XMFINLINE FLOAT XMVectorGetX(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return V.vector4_f32[0];
#elif defined(_XM_SSE_INTRINSICS_)
#if defined(_MSC_VER) && (_MSC_VER>=1500)
	return _mm_cvtss_f32(V);
#else
	return V.m128_f32[0];
#endif
#else
#endif
}
XMFINLINE FLOAT XMVectorGetY(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return V.vector4_f32[1];
#elif defined(_XM_SSE_INTRINSICS_)
#if defined(_MSC_VER) && (_MSC_VER>=1500)
	XMVECTOR vTemp = _mm_shuffle_ps(V, V, _MM_SHUFFLE(1, 1, 1, 1));
	return _mm_cvtss_f32(vTemp);
#else
	return V.m128_f32[1];
#endif
#else
#endif
}
XMFINLINE FLOAT XMVectorGetZ(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return V.vector4_f32[2];
#elif defined(_XM_SSE_INTRINSICS_)
#if defined(_MSC_VER) && (_MSC_VER>=1500)
	XMVECTOR vTemp = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 2, 2, 2));
	return _mm_cvtss_f32(vTemp);
#else
	return V.m128_f32[2];
#endif
#else
#endif
}
XMFINLINE FLOAT XMVectorGetW(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return V.vector4_f32[3];
#elif defined(_XM_SSE_INTRINSICS_)
#if defined(_MSC_VER) && (_MSC_VER>=1500)
	XMVECTOR vTemp = _mm_shuffle_ps(V, V, _MM_SHUFFLE(3, 3, 3, 3));
	return _mm_cvtss_f32(vTemp);
#else
	return V.m128_f32[3];
#endif
#else
#endif
}
XMFINLINE VOID XMVectorGetByIndexPtr(FLOAT *f, FXMVECTOR V, UINT i)
{
	XMASSERT(f != 0);
	XMASSERT(i < 4);
#if defined(_XM_NO_INTRINSICS_)
	*f = V.vector4_f32[i];
#elif defined(_XM_SSE_INTRINSICS_)
	*f = V.m128_f32[i];
#else
#endif
}
XMFINLINE VOID XMVectorGetXPtr(FLOAT *x, FXMVECTOR V)
{
	XMASSERT(x != 0);
#if defined(_XM_NO_INTRINSICS_)
	*x = V.vector4_f32[0];
#elif defined(_XM_SSE_INTRINSICS_)
	_mm_store_ss(x, V);
#else
#endif
}
XMFINLINE VOID XMVectorGetYPtr(FLOAT *y, FXMVECTOR V)
{
	XMASSERT(y != 0);
#if defined(_XM_NO_INTRINSICS_)
	*y = V.vector4_f32[1];
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(1, 1, 1, 1));
	_mm_store_ss(y, vResult);
#else
#endif
}
XMFINLINE VOID XMVectorGetZPtr(FLOAT *z, FXMVECTOR V)
{
	XMASSERT(z != 0);
#if defined(_XM_NO_INTRINSICS_)
	*z = V.vector4_f32[2];
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 2, 2, 2));
	_mm_store_ss(z, vResult);
#else
#endif
}
XMFINLINE VOID XMVectorGetWPtr(FLOAT *w, FXMVECTOR V)
{
	XMASSERT(w != 0);
#if defined(_XM_NO_INTRINSICS_)
	*w = V.vector4_f32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(3, 3, 3, 3));
	_mm_store_ss(w, vResult);
#else
#endif
}
XMFINLINE UINT XMVectorGetIntByIndex(FXMVECTOR V, UINT i)
{
	XMASSERT(i < 4);
#if defined(_XM_NO_INTRINSICS_)
	return V.vector4_u32[i];
#elif defined(_XM_SSE_INTRINSICS_)
#if defined(_MSC_VER) && (_MSC_VER<1400)
	XMVECTORU32 tmp;
	tmp.v = V;
	return tmp.u[i];
#else
	return V.m128_u32[i];
#endif
#else
#endif
}
XMFINLINE UINT XMVectorGetIntX(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return V.vector4_u32[0];
#elif defined(_XM_SSE_INTRINSICS_)
	return (UINT) (_mm_cvtsi128_si32(CAST_CONST_M128I(V)));
#else
#endif
}
XMFINLINE UINT XMVectorGetIntY(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return V.vector4_u32[1];
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vResulti = _mm_shuffle_epi32(CAST_CONST_M128I(V), _MM_SHUFFLE(1, 1, 1, 1));
	return (UINT) (_mm_cvtsi128_si32(vResulti));
#else
#endif
}
XMFINLINE UINT XMVectorGetIntZ(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return V.vector4_u32[2];
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vResulti = _mm_shuffle_epi32(CAST_CONST_M128I(V), _MM_SHUFFLE(2, 2, 2, 2));
	return (UINT) (_mm_cvtsi128_si32(vResulti));
#else
#endif
}
XMFINLINE UINT XMVectorGetIntW(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return V.vector4_u32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vResulti = _mm_shuffle_epi32(CAST_CONST_M128I(V), _MM_SHUFFLE(3, 3, 3, 3));
	return (UINT) (_mm_cvtsi128_si32(vResulti));
#else
#endif
}
XMFINLINE VOID XMVectorGetIntByIndexPtr(UINT *x, FXMVECTOR V, UINT i)
{
	XMASSERT(x != 0);
	XMASSERT(i < 4);
#if defined(_XM_NO_INTRINSICS_)
	*x = V.vector4_u32[i];
#elif defined(_XM_SSE_INTRINSICS_)
#if defined(_MSC_VER) && (_MSC_VER<1400)
	XMVECTORU32 tmp;
	tmp.v = V;
	*x = tmp.u[i];
#else
	*x = V.m128_u32[i];
#endif
#else
#endif
}
XMFINLINE VOID XMVectorGetIntXPtr(UINT *x, FXMVECTOR V)
{
	XMASSERT(x != 0);
#if defined(_XM_NO_INTRINSICS_)
	*x = V.vector4_u32[0];
#elif defined(_XM_SSE_INTRINSICS_)
	_mm_store_ss((float *)(x), V);
#else
#endif
}
XMFINLINE VOID XMVectorGetIntYPtr(UINT *y, FXMVECTOR V)
{
	XMASSERT(y != 0);
#if defined(_XM_NO_INTRINSICS_)
	*y = V.vector4_u32[1];
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(1, 1, 1, 1));
	_mm_store_ss((float *)(y), vResult);
#else
#endif
}
XMFINLINE VOID XMVectorGetIntZPtr(UINT *z, FXMVECTOR V)
{
	XMASSERT(z != 0);
#if defined(_XM_NO_INTRINSICS_)
	*z = V.vector4_u32[2];
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 2, 2, 2));
	_mm_store_ss((float *)(z), vResult);
#else
#endif
}
XMFINLINE VOID XMVectorGetIntWPtr(UINT *w, FXMVECTOR V)
{
	XMASSERT(w != 0);
#if defined(_XM_NO_INTRINSICS_)
	*w = V.vector4_u32[3];
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(3, 3, 3, 3));
	_mm_store_ss((float *)(w), vResult);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetByIndex(FXMVECTOR V, FLOAT f, UINT i)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	XMASSERT(i <= 3);
	U = V;
	U.vector4_f32[i] = f;
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(i <= 3);
	XMVECTOR U = V;
	U.m128_f32[i] = f;
	return U;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetX(FXMVECTOR V, FLOAT x)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	U.vector4_f32[0] = x;
	U.vector4_f32[1] = V.vector4_f32[1];
	U.vector4_f32[2] = V.vector4_f32[2];
	U.vector4_f32[3] = V.vector4_f32[3];
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
#if defined(_XM_ISVS2005_)
	XMVECTOR vResult = V;
	vResult.m128_f32[0] = x;
	return vResult;
#else
	XMVECTOR vResult = _mm_set_ss(x);
	vResult = _mm_move_ss(V, vResult);
	return vResult;
#endif
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetY(FXMVECTOR V, FLOAT y)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	U.vector4_f32[0] = V.vector4_f32[0];
	U.vector4_f32[1] = y;
	U.vector4_f32[2] = V.vector4_f32[2];
	U.vector4_f32[3] = V.vector4_f32[3];
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
#if defined(_XM_ISVS2005_)
	XMVECTOR vResult = V;
	vResult.m128_f32[1] = y;
	return vResult;
#else
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(3, 2, 0, 1));
	XMVECTOR vTemp = _mm_set_ss(y);
	vResult = _mm_move_ss(vResult, vTemp);
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(3, 2, 0, 1));
	return vResult;
#endif
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetZ(FXMVECTOR V, FLOAT z)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	U.vector4_f32[0] = V.vector4_f32[0];
	U.vector4_f32[1] = V.vector4_f32[1];
	U.vector4_f32[2] = z;
	U.vector4_f32[3] = V.vector4_f32[3];
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
#if defined(_XM_ISVS2005_)
	XMVECTOR vResult = V;
	vResult.m128_f32[2] = z;
	return vResult;
#else
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(3, 0, 1, 2));
	XMVECTOR vTemp = _mm_set_ss(z);
	vResult = _mm_move_ss(vResult, vTemp);
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(3, 0, 1, 2));
	return vResult;
#endif
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetW(FXMVECTOR V, FLOAT w)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	U.vector4_f32[0] = V.vector4_f32[0];
	U.vector4_f32[1] = V.vector4_f32[1];
	U.vector4_f32[2] = V.vector4_f32[2];
	U.vector4_f32[3] = w;
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
#if defined(_XM_ISVS2005_)
	XMVECTOR vResult = V;
	vResult.m128_f32[3] = w;
	return vResult;
#else
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(0, 2, 1, 3));
	XMVECTOR vTemp = _mm_set_ss(w);
	vResult = _mm_move_ss(vResult, vTemp);
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(0, 2, 1, 3));
	return vResult;
#endif
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetByIndexPtr(FXMVECTOR V, CONST FLOAT *f, UINT i)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	XMASSERT(f != 0);
	XMASSERT(i <= 3);
	U = V;
	U.vector4_f32[i] = *f;
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(f != 0);
	XMASSERT(i <= 3);
	XMVECTOR U = V;
	U.m128_f32[i] = *f;
	return U;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetXPtr(FXMVECTOR V, CONST FLOAT *x)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	XMASSERT(x != 0);
	U.vector4_f32[0] = *x;
	U.vector4_f32[1] = V.vector4_f32[1];
	U.vector4_f32[2] = V.vector4_f32[2];
	U.vector4_f32[3] = V.vector4_f32[3];
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(x != 0);
	XMVECTOR vResult = _mm_load_ss(x);
	vResult = _mm_move_ss(V, vResult);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetYPtr(FXMVECTOR V, CONST FLOAT *y)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	XMASSERT(y != 0);
	U.vector4_f32[0] = V.vector4_f32[0];
	U.vector4_f32[1] = *y;
	U.vector4_f32[2] = V.vector4_f32[2];
	U.vector4_f32[3] = V.vector4_f32[3];
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(y != 0);
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(3, 2, 0, 1));
	XMVECTOR vTemp = _mm_load_ss(y);
	vResult = _mm_move_ss(vResult, vTemp);
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(3, 2, 0, 1));
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetZPtr(FXMVECTOR V, CONST FLOAT *z)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	XMASSERT(z != 0);
	U.vector4_f32[0] = V.vector4_f32[0];
	U.vector4_f32[1] = V.vector4_f32[1];
	U.vector4_f32[2] = *z;
	U.vector4_f32[3] = V.vector4_f32[3];
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(z != 0);
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(3, 0, 1, 2));
	XMVECTOR vTemp = _mm_load_ss(z);
	vResult = _mm_move_ss(vResult, vTemp);
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(3, 0, 1, 2));
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetWPtr(FXMVECTOR V, CONST FLOAT *w)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	XMASSERT(w != 0);
	U.vector4_f32[0] = V.vector4_f32[0];
	U.vector4_f32[1] = V.vector4_f32[1];
	U.vector4_f32[2] = V.vector4_f32[2];
	U.vector4_f32[3] = *w;
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(w != 0);
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(0, 2, 1, 3));
	XMVECTOR vTemp = _mm_load_ss(w);
	vResult = _mm_move_ss(vResult, vTemp);
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(0, 2, 1, 3));
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetIntByIndex(FXMVECTOR V, UINT x, UINT i)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	XMASSERT(i <= 3);
	U = V;
	U.vector4_u32[i] = x;
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(i <= 3);
	XMVECTORU32 tmp;
	tmp.v = V;
	tmp.u[i] = x;
	return CAST_CONST_M128(tmp);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetIntX(FXMVECTOR V, UINT x)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	U.vector4_u32[0] = x;
	U.vector4_u32[1] = V.vector4_u32[1];
	U.vector4_u32[2] = V.vector4_u32[2];
	U.vector4_u32[3] = V.vector4_u32[3];
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
#if defined(_XM_ISVS2005_)
	XMVECTOR vResult = V;
	vResult.m128_i32[0] = x;
	return vResult;
#else
	__m128i vTemp = _mm_cvtsi32_si128(x);
	XMVECTOR vResult = _mm_move_ss(V, CAST_CONST_M128(vTemp));
	return vResult;
#endif
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetIntY(FXMVECTOR V, UINT y)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	U.vector4_u32[0] = V.vector4_u32[0];
	U.vector4_u32[1] = y;
	U.vector4_u32[2] = V.vector4_u32[2];
	U.vector4_u32[3] = V.vector4_u32[3];
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
#if defined(_XM_ISVS2005_)
	XMVECTOR vResult = V;
	vResult.m128_i32[1] = y;
	return vResult;
#else
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(3, 2, 0, 1));
	__m128i vTemp = _mm_cvtsi32_si128(y);
	vResult = _mm_move_ss(vResult, CAST_CONST_M128(vTemp));
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(3, 2, 0, 1));
	return vResult;
#endif
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetIntZ(FXMVECTOR V, UINT z)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	U.vector4_u32[0] = V.vector4_u32[0];
	U.vector4_u32[1] = V.vector4_u32[1];
	U.vector4_u32[2] = z;
	U.vector4_u32[3] = V.vector4_u32[3];
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
#if defined(_XM_ISVS2005_)
	XMVECTOR vResult = V;
	vResult.m128_i32[2] = z;
	return vResult;
#else
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(3, 0, 1, 2));
	__m128i vTemp = _mm_cvtsi32_si128(z);
	vResult = _mm_move_ss(vResult, CAST_CONST_M128(vTemp));
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(3, 0, 1, 2));
	return vResult;
#endif
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetIntW(FXMVECTOR V, UINT w)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	U.vector4_u32[0] = V.vector4_u32[0];
	U.vector4_u32[1] = V.vector4_u32[1];
	U.vector4_u32[2] = V.vector4_u32[2];
	U.vector4_u32[3] = w;
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
#if defined(_XM_ISVS2005_)
	XMVECTOR vResult = V;
	vResult.m128_i32[3] = w;
	return vResult;
#else
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(0, 2, 1, 3));
	__m128i vTemp = _mm_cvtsi32_si128(w);
	vResult = _mm_move_ss(vResult, CAST_CONST_M128(vTemp));
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(0, 2, 1, 3));
	return vResult;
#endif
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetIntByIndexPtr(FXMVECTOR V, CONST UINT *x, UINT i)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	XMASSERT(x != 0);
	XMASSERT(i <= 3);
	U = V;
	U.vector4_u32[i] = *x;
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(x != 0);
	XMASSERT(i <= 3);
	XMVECTORU32 tmp;
	tmp.v = V;
	tmp.u[i] = *x;
	return CAST_CONST_M128(tmp);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetIntXPtr(FXMVECTOR V, CONST UINT *x)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	XMASSERT(x != 0);
	U.vector4_u32[0] = *x;
	U.vector4_u32[1] = V.vector4_u32[1];
	U.vector4_u32[2] = V.vector4_u32[2];
	U.vector4_u32[3] = V.vector4_u32[3];
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(x != 0);
	XMVECTOR vTemp = _mm_load_ss((const float *)(x));
	XMVECTOR vResult = _mm_move_ss(V, vTemp);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetIntYPtr(FXMVECTOR V, CONST UINT *y)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	XMASSERT(y != 0);
	U.vector4_u32[0] = V.vector4_u32[0];
	U.vector4_u32[1] = *y;
	U.vector4_u32[2] = V.vector4_u32[2];
	U.vector4_u32[3] = V.vector4_u32[3];
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(y != 0);
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(3, 2, 0, 1));
	XMVECTOR vTemp = _mm_load_ss((const float *)(y));
	vResult = _mm_move_ss(vResult, vTemp);
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(3, 2, 0, 1));
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetIntZPtr(FXMVECTOR V, CONST UINT *z)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	XMASSERT(z != 0);
	U.vector4_u32[0] = V.vector4_u32[0];
	U.vector4_u32[1] = V.vector4_u32[1];
	U.vector4_u32[2] = *z;
	U.vector4_u32[3] = V.vector4_u32[3];
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(z != 0);
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(3, 0, 1, 2));
	XMVECTOR vTemp = _mm_load_ss((const float *)(z));
	vResult = _mm_move_ss(vResult, vTemp);
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(3, 0, 1, 2));
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSetIntWPtr(FXMVECTOR V, CONST UINT *w)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR U;
	XMASSERT(w != 0);
	U.vector4_u32[0] = V.vector4_u32[0];
	U.vector4_u32[1] = V.vector4_u32[1];
	U.vector4_u32[2] = V.vector4_u32[2];
	U.vector4_u32[3] = *w;
	return U;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(w != 0);
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(0, 2, 1, 3));
	XMVECTOR vTemp = _mm_load_ss((const float *)(w));
	vResult = _mm_move_ss(vResult, vTemp);
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(0, 2, 1, 3));
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorPermuteControl(UINT ElementIndex0, UINT ElementIndex1, UINT ElementIndex2, UINT ElementIndex3)
{
#if defined(_XM_SSE_INTRINSICS_) || defined(_XM_NO_INTRINSICS_)
	XMVECTORU32 vControl;
	static CONST UINT ControlElement[] = {
		XM_PERMUTE_0X,
		XM_PERMUTE_0Y,
		XM_PERMUTE_0Z,
		XM_PERMUTE_0W,
		XM_PERMUTE_1X,
		XM_PERMUTE_1Y,
		XM_PERMUTE_1Z,
		XM_PERMUTE_1W
	};
	XMASSERT(ElementIndex0 < 8);
	XMASSERT(ElementIndex1 < 8);
	XMASSERT(ElementIndex2 < 8);
	XMASSERT(ElementIndex3 < 8);
	vControl.u[0] = ControlElement[ElementIndex0];
	vControl.u[1] = ControlElement[ElementIndex1];
	vControl.u[2] = ControlElement[ElementIndex2];
	vControl.u[3] = ControlElement[ElementIndex3];
	return vControl.v;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorPermute(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Control)
{
#if defined(_XM_NO_INTRINSICS_)
	const BYTE *aByte[2];
	XMVECTOR Result;
	UINT i, uIndex, VectorIndex;
	const BYTE *pControl;
	BYTE *pWork;
	XMASSERT((Control.vector4_u32[0] & 0xE0E0E0E0) == 0);
	XMASSERT((Control.vector4_u32[1] & 0xE0E0E0E0) == 0);
	XMASSERT((Control.vector4_u32[2] & 0xE0E0E0E0) == 0);
	XMASSERT((Control.vector4_u32[3] & 0xE0E0E0E0) == 0);
	aByte[0] = (const BYTE *)(&V1);
	aByte[1] = (const BYTE *)(&V2);
	i = 16;
	pControl = (const BYTE *)(&Control);
	pWork = (BYTE *) (&Result);
	do
	{
		uIndex = pControl[0];
		++pControl;
		VectorIndex = (uIndex >> 4) & 1;
		uIndex &= 0x0F;
#if defined(_XM_LITTLEENDIAN_)
		uIndex ^= 3;
#endif
		pWork[0] = aByte[VectorIndex][uIndex];
		++pWork;
	} while (--i);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
#if defined(_PREFAST_) || defined(XMDEBUG)
	static const XMVECTORI32 PremuteTest = { 0xE0E0E0E0, 0xE0E0E0E0, 0xE0E0E0E0, 0xE0E0E0E0 };
	XMVECTOR vAssert = _mm_and_ps(Control, PremuteTest);
	__m128i vAsserti = _mm_cmpeq_epi32(CAST_CONST_M128I(vAssert), CAST_CONST_M128(g_XMZero));
	XMASSERT(_mm_movemask_ps(*((const __m128 *)(&vAsserti))) == 0xf);
#endif
	XMVECTOR Array[2];
	Array[0] = V1;
	Array[1] = V2;
	XMVECTORU8 vResult;
	const BYTE *pInput = (const BYTE *)(Array);
	XMVECTORU8 vControl;
	vControl.v = Control;
	UINT i = 0;
	do
	{
		UINT ComponentIndex = vControl.u[i] & 0x1FU;
		ComponentIndex ^= 3;
		vResult.u[i] = pInput[ComponentIndex];
	} while (++i < 16);
	return CAST_CONST_M128(vResult);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSelectControl(UINT VectorIndex0, UINT VectorIndex1, UINT VectorIndex2, UINT VectorIndex3)
{
#if defined(_XM_SSE_INTRINSICS_) && !defined(_XM_NO_INTRINSICS_)
	__m128i vTemp = _mm_set_epi32(VectorIndex3, VectorIndex2, VectorIndex1, VectorIndex0);
	vTemp = _mm_cmpgt_epi32(vTemp, CAST_CONST_M128I(g_XMZero));
	return CAST_M128(vTemp);
#else
	XMVECTOR ControlVector;
	CONST UINT ControlElement[] = {
		XM_SELECT_0,
		XM_SELECT_1
	};
	XMASSERT(VectorIndex0 < 2);
	XMASSERT(VectorIndex1 < 2);
	XMASSERT(VectorIndex2 < 2);
	XMASSERT(VectorIndex3 < 2);
	ControlVector.vector4_u32[0] = ControlElement[VectorIndex0];
	ControlVector.vector4_u32[1] = ControlElement[VectorIndex1];
	ControlVector.vector4_u32[2] = ControlElement[VectorIndex2];
	ControlVector.vector4_u32[3] = ControlElement[VectorIndex3];
	return ControlVector;
#endif
}
XMFINLINE XMVECTOR XMVectorSelect(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Control)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_u32[0] = (V1.vector4_u32[0] & ~Control.vector4_u32[0]) | (V2.vector4_u32[0] & Control.vector4_u32[0]);
	Result.vector4_u32[1] = (V1.vector4_u32[1] & ~Control.vector4_u32[1]) | (V2.vector4_u32[1] & Control.vector4_u32[1]);
	Result.vector4_u32[2] = (V1.vector4_u32[2] & ~Control.vector4_u32[2]) | (V2.vector4_u32[2] & Control.vector4_u32[2]);
	Result.vector4_u32[3] = (V1.vector4_u32[3] & ~Control.vector4_u32[3]) | (V2.vector4_u32[3] & Control.vector4_u32[3]);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp1 = _mm_andnot_ps(Control, V1);
	XMVECTOR vTemp2 = _mm_and_ps(V2, Control);
	return _mm_or_ps(vTemp1, vTemp2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorMergeXY(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_u32[0] = V1.vector4_u32[0];
	Result.vector4_u32[1] = V2.vector4_u32[0];
	Result.vector4_u32[2] = V1.vector4_u32[1];
	Result.vector4_u32[3] = V2.vector4_u32[1];
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_unpacklo_ps(V1, V2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorMergeZW(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_u32[0] = V1.vector4_u32[2];
	Result.vector4_u32[1] = V2.vector4_u32[2];
	Result.vector4_u32[2] = V1.vector4_u32[3];
	Result.vector4_u32[3] = V2.vector4_u32[3];
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_unpackhi_ps(V1, V2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorEqual(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Control;
	Control.vector4_u32[0] = (V1.vector4_f32[0] == V2.vector4_f32[0]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[1] = (V1.vector4_f32[1] == V2.vector4_f32[1]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[2] = (V1.vector4_f32[2] == V2.vector4_f32[2]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[3] = (V1.vector4_f32[3] == V2.vector4_f32[3]) ? 0xFFFFFFFF : 0;
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_cmpeq_ps(V1, V2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorEqualR(UINT *pCR, FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT ux, uy, uz, uw, CR;
	XMVECTOR Control;
	XMASSERT(pCR);
	ux = (V1.vector4_f32[0] == V2.vector4_f32[0]) ? 0xFFFFFFFFU : 0;
	uy = (V1.vector4_f32[1] == V2.vector4_f32[1]) ? 0xFFFFFFFFU : 0;
	uz = (V1.vector4_f32[2] == V2.vector4_f32[2]) ? 0xFFFFFFFFU : 0;
	uw = (V1.vector4_f32[3] == V2.vector4_f32[3]) ? 0xFFFFFFFFU : 0;
	CR = 0;
	if (ux & uy & uz & uw)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!(ux | uy | uz | uw))
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	*pCR = CR;
	Control.vector4_u32[0] = ux;
	Control.vector4_u32[1] = uy;
	Control.vector4_u32[2] = uz;
	Control.vector4_u32[3] = uw;
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pCR);
	XMVECTOR vTemp = _mm_cmpeq_ps(V1, V2);
	UINT CR = 0;
	int iTest = _mm_movemask_ps(vTemp);
	if (iTest == 0xf)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!iTest)
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	*pCR = CR;
	return vTemp;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorEqualInt(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Control;
	Control.vector4_u32[0] = (V1.vector4_u32[0] == V2.vector4_u32[0]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[1] = (V1.vector4_u32[1] == V2.vector4_u32[1]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[2] = (V1.vector4_u32[2] == V2.vector4_u32[2]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[3] = (V1.vector4_u32[3] == V2.vector4_u32[3]) ? 0xFFFFFFFF : 0;
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i V = _mm_cmpeq_epi32(CAST_CONST_M128I(V1), CAST_CONST_M128I(V2));
	return CAST_M128(V);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorEqualIntR(UINT *pCR, FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Control;
	XMASSERT(pCR);
	Control = XMVectorEqualInt(V1, V2);
	*pCR = 0;
	if (XMVector4EqualInt(Control, XMVectorTrueInt()))
	{
		*pCR |= XM_CRMASK_CR6TRUE;
	}
	else if (XMVector4EqualInt(Control, XMVectorFalseInt()))
	{
		*pCR |= XM_CRMASK_CR6FALSE;
	}
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pCR);
	__m128i V = _mm_cmpeq_epi32(CAST_CONST_M128I(V1), CAST_CONST_M128I(V2));
	int iTemp = _mm_movemask_ps(CAST_CONST_M128(V));
	UINT CR = 0;
	if (iTemp == 0x0F)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!iTemp)
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	*pCR = CR;
	return CAST_M128(V);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorNearEqual(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Epsilon)
{
#if defined(_XM_NO_INTRINSICS_)
	FLOAT fDeltax, fDeltay, fDeltaz, fDeltaw;
	XMVECTOR Control;
	fDeltax = V1.vector4_f32[0] - V2.vector4_f32[0];
	fDeltay = V1.vector4_f32[1] - V2.vector4_f32[1];
	fDeltaz = V1.vector4_f32[2] - V2.vector4_f32[2];
	fDeltaw = V1.vector4_f32[3] - V2.vector4_f32[3];
	fDeltax = fabsf(fDeltax);
	fDeltay = fabsf(fDeltay);
	fDeltaz = fabsf(fDeltaz);
	fDeltaw = fabsf(fDeltaw);
	Control.vector4_u32[0] = (fDeltax <= Epsilon.vector4_f32[0]) ? 0xFFFFFFFFU : 0;
	Control.vector4_u32[1] = (fDeltay <= Epsilon.vector4_f32[1]) ? 0xFFFFFFFFU : 0;
	Control.vector4_u32[2] = (fDeltaz <= Epsilon.vector4_f32[2]) ? 0xFFFFFFFFU : 0;
	Control.vector4_u32[3] = (fDeltaw <= Epsilon.vector4_f32[3]) ? 0xFFFFFFFFU : 0;
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vDelta = _mm_sub_ps(V1, V2);
	XMVECTOR vTemp = _mm_setzero_ps();
	vTemp = _mm_sub_ps(vTemp, vDelta);
	vTemp = _mm_max_ps(vTemp, vDelta);
	vTemp = _mm_cmple_ps(vTemp, Epsilon);
	return vTemp;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorNotEqual(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Control;
	Control.vector4_u32[0] = (V1.vector4_f32[0] != V2.vector4_f32[0]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[1] = (V1.vector4_f32[1] != V2.vector4_f32[1]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[2] = (V1.vector4_f32[2] != V2.vector4_f32[2]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[3] = (V1.vector4_f32[3] != V2.vector4_f32[3]) ? 0xFFFFFFFF : 0;
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_cmpneq_ps(V1, V2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorNotEqualInt(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Control;
	Control.vector4_u32[0] = (V1.vector4_u32[0] != V2.vector4_u32[0]) ? 0xFFFFFFFFU : 0;
	Control.vector4_u32[1] = (V1.vector4_u32[1] != V2.vector4_u32[1]) ? 0xFFFFFFFFU : 0;
	Control.vector4_u32[2] = (V1.vector4_u32[2] != V2.vector4_u32[2]) ? 0xFFFFFFFFU : 0;
	Control.vector4_u32[3] = (V1.vector4_u32[3] != V2.vector4_u32[3]) ? 0xFFFFFFFFU : 0;
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i V = _mm_cmpeq_epi32(CAST_CONST_M128I(V1), CAST_CONST_M128I(V2));
	return _mm_xor_ps(CAST_M128(V), CAST_CONST_M128(g_XMNegOneMask));
#else
#endif
}
XMFINLINE XMVECTOR XMVectorGreater(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Control;
	Control.vector4_u32[0] = (V1.vector4_f32[0] > V2.vector4_f32[0]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[1] = (V1.vector4_f32[1] > V2.vector4_f32[1]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[2] = (V1.vector4_f32[2] > V2.vector4_f32[2]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[3] = (V1.vector4_f32[3] > V2.vector4_f32[3]) ? 0xFFFFFFFF : 0;
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_cmpgt_ps(V1, V2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorGreaterR(UINT *pCR, FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT ux, uy, uz, uw, CR;
	XMVECTOR Control;
	XMASSERT(pCR);
	ux = (V1.vector4_f32[0] > V2.vector4_f32[0]) ? 0xFFFFFFFFU : 0;
	uy = (V1.vector4_f32[1] > V2.vector4_f32[1]) ? 0xFFFFFFFFU : 0;
	uz = (V1.vector4_f32[2] > V2.vector4_f32[2]) ? 0xFFFFFFFFU : 0;
	uw = (V1.vector4_f32[3] > V2.vector4_f32[3]) ? 0xFFFFFFFFU : 0;
	CR = 0;
	if (ux & uy & uz & uw)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!(ux | uy | uz | uw))
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	*pCR = CR;
	Control.vector4_u32[0] = ux;
	Control.vector4_u32[1] = uy;
	Control.vector4_u32[2] = uz;
	Control.vector4_u32[3] = uw;
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pCR);
	XMVECTOR vTemp = _mm_cmpgt_ps(V1, V2);
	UINT CR = 0;
	int iTest = _mm_movemask_ps(vTemp);
	if (iTest == 0xf)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!iTest)
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	*pCR = CR;
	return vTemp;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorGreaterOrEqual(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Control;
	Control.vector4_u32[0] = (V1.vector4_f32[0] >= V2.vector4_f32[0]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[1] = (V1.vector4_f32[1] >= V2.vector4_f32[1]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[2] = (V1.vector4_f32[2] >= V2.vector4_f32[2]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[3] = (V1.vector4_f32[3] >= V2.vector4_f32[3]) ? 0xFFFFFFFF : 0;
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_cmpge_ps(V1, V2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorGreaterOrEqualR(UINT *pCR, FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT ux, uy, uz, uw, CR;
	XMVECTOR Control;
	XMASSERT(pCR);
	ux = (V1.vector4_f32[0] >= V2.vector4_f32[0]) ? 0xFFFFFFFFU : 0;
	uy = (V1.vector4_f32[1] >= V2.vector4_f32[1]) ? 0xFFFFFFFFU : 0;
	uz = (V1.vector4_f32[2] >= V2.vector4_f32[2]) ? 0xFFFFFFFFU : 0;
	uw = (V1.vector4_f32[3] >= V2.vector4_f32[3]) ? 0xFFFFFFFFU : 0;
	CR = 0;
	if (ux & uy & uz & uw)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!(ux | uy | uz | uw))
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	*pCR = CR;
	Control.vector4_u32[0] = ux;
	Control.vector4_u32[1] = uy;
	Control.vector4_u32[2] = uz;
	Control.vector4_u32[3] = uw;
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pCR);
	XMVECTOR vTemp = _mm_cmpge_ps(V1, V2);
	UINT CR = 0;
	int iTest = _mm_movemask_ps(vTemp);
	if (iTest == 0xf)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!iTest)
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	*pCR = CR;
	return vTemp;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorLess(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Control;
	Control.vector4_u32[0] = (V1.vector4_f32[0] < V2.vector4_f32[0]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[1] = (V1.vector4_f32[1] < V2.vector4_f32[1]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[2] = (V1.vector4_f32[2] < V2.vector4_f32[2]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[3] = (V1.vector4_f32[3] < V2.vector4_f32[3]) ? 0xFFFFFFFF : 0;
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_cmplt_ps(V1, V2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorLessOrEqual(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Control;
	Control.vector4_u32[0] = (V1.vector4_f32[0] <= V2.vector4_f32[0]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[1] = (V1.vector4_f32[1] <= V2.vector4_f32[1]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[2] = (V1.vector4_f32[2] <= V2.vector4_f32[2]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[3] = (V1.vector4_f32[3] <= V2.vector4_f32[3]) ? 0xFFFFFFFF : 0;
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_cmple_ps(V1, V2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorInBounds(FXMVECTOR V, FXMVECTOR Bounds)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Control;
	Control.vector4_u32[0] = (V.vector4_f32[0] <= Bounds.vector4_f32[0] && V.vector4_f32[0] >= -Bounds.vector4_f32[0]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[1] = (V.vector4_f32[1] <= Bounds.vector4_f32[1] && V.vector4_f32[1] >= -Bounds.vector4_f32[1]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[2] = (V.vector4_f32[2] <= Bounds.vector4_f32[2] && V.vector4_f32[2] >= -Bounds.vector4_f32[2]) ? 0xFFFFFFFF : 0;
	Control.vector4_u32[3] = (V.vector4_f32[3] <= Bounds.vector4_f32[3] && V.vector4_f32[3] >= -Bounds.vector4_f32[3]) ? 0xFFFFFFFF : 0;
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp1 = _mm_cmple_ps(V, Bounds);
	XMVECTOR vTemp2 = _mm_mul_ps(Bounds, CAST_CONST_M128(g_XMNegativeOne));
	vTemp2 = _mm_cmple_ps(vTemp2, V);
	vTemp1 = _mm_and_ps(vTemp1, vTemp2);
	return vTemp1;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorInBoundsR(UINT *pCR, FXMVECTOR V, FXMVECTOR Bounds)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT ux, uy, uz, uw, CR;
	XMVECTOR Control;
	XMASSERT(pCR != 0);
	ux = (V.vector4_f32[0] <= Bounds.vector4_f32[0] && V.vector4_f32[0] >= -Bounds.vector4_f32[0]) ? 0xFFFFFFFFU : 0;
	uy = (V.vector4_f32[1] <= Bounds.vector4_f32[1] && V.vector4_f32[1] >= -Bounds.vector4_f32[1]) ? 0xFFFFFFFFU : 0;
	uz = (V.vector4_f32[2] <= Bounds.vector4_f32[2] && V.vector4_f32[2] >= -Bounds.vector4_f32[2]) ? 0xFFFFFFFFU : 0;
	uw = (V.vector4_f32[3] <= Bounds.vector4_f32[3] && V.vector4_f32[3] >= -Bounds.vector4_f32[3]) ? 0xFFFFFFFFU : 0;
	CR = 0;
	if (ux & uy & uz & uw)
	{
		CR = XM_CRMASK_CR6BOUNDS;
	}
	*pCR = CR;
	Control.vector4_u32[0] = ux;
	Control.vector4_u32[1] = uy;
	Control.vector4_u32[2] = uz;
	Control.vector4_u32[3] = uw;
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pCR != 0);
	XMVECTOR vTemp1 = _mm_cmple_ps(V, Bounds);
	XMVECTOR vTemp2 = _mm_mul_ps(Bounds, CAST_CONST_M128(g_XMNegativeOne));
	vTemp2 = _mm_cmple_ps(vTemp2, V);
	vTemp1 = _mm_and_ps(vTemp1, vTemp2);
	UINT CR = 0;
	if (_mm_movemask_ps(vTemp1) == 0xf)
	{
		CR = XM_CRMASK_CR6BOUNDS;
	}
	*pCR = CR;
	return vTemp1;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorIsNaN(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Control;
	Control.vector4_u32[0] = XMISNAN(V.vector4_f32[0]) ? 0xFFFFFFFFU : 0;
	Control.vector4_u32[1] = XMISNAN(V.vector4_f32[1]) ? 0xFFFFFFFFU : 0;
	Control.vector4_u32[2] = XMISNAN(V.vector4_f32[2]) ? 0xFFFFFFFFU : 0;
	Control.vector4_u32[3] = XMISNAN(V.vector4_f32[3]) ? 0xFFFFFFFFU : 0;
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vTempInf = _mm_and_si128(CAST_CONST_M128I(V), CAST_CONST_M128I(g_XMInfinity));
	__m128i vTempNan = _mm_and_si128(CAST_CONST_M128I(V), CAST_CONST_M128I(g_XMQNaNTest));
	vTempInf = _mm_cmpeq_epi32(vTempInf, CAST_CONST_M128I(g_XMInfinity));
	vTempNan = _mm_cmpeq_epi32(vTempNan, CAST_CONST_M128I(g_XMZero));
	vTempNan = _mm_andnot_si128(vTempNan, vTempInf);
	return ((const XMVECTOR *)(&vTempNan))[0];
#else
#endif
}
XMFINLINE XMVECTOR XMVectorIsInfinite(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Control;
	Control.vector4_u32[0] = XMISINF(V.vector4_f32[0]) ? 0xFFFFFFFFU : 0;
	Control.vector4_u32[1] = XMISINF(V.vector4_f32[1]) ? 0xFFFFFFFFU : 0;
	Control.vector4_u32[2] = XMISINF(V.vector4_f32[2]) ? 0xFFFFFFFFU : 0;
	Control.vector4_u32[3] = XMISINF(V.vector4_f32[3]) ? 0xFFFFFFFFU : 0;
	return Control;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128 vTemp = _mm_and_ps(V, CAST_CONST_M128(g_XMAbsMask));
	vTemp = _mm_cmpeq_ps(vTemp, CAST_CONST_M128(g_XMInfinity));
	return vTemp;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorMin(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_f32[0] = (V1.vector4_f32[0] < V2.vector4_f32[0]) ? V1.vector4_f32[0] : V2.vector4_f32[0];
	Result.vector4_f32[1] = (V1.vector4_f32[1] < V2.vector4_f32[1]) ? V1.vector4_f32[1] : V2.vector4_f32[1];
	Result.vector4_f32[2] = (V1.vector4_f32[2] < V2.vector4_f32[2]) ? V1.vector4_f32[2] : V2.vector4_f32[2];
	Result.vector4_f32[3] = (V1.vector4_f32[3] < V2.vector4_f32[3]) ? V1.vector4_f32[3] : V2.vector4_f32[3];
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_min_ps(V1, V2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorMax(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_f32[0] = (V1.vector4_f32[0] > V2.vector4_f32[0]) ? V1.vector4_f32[0] : V2.vector4_f32[0];
	Result.vector4_f32[1] = (V1.vector4_f32[1] > V2.vector4_f32[1]) ? V1.vector4_f32[1] : V2.vector4_f32[1];
	Result.vector4_f32[2] = (V1.vector4_f32[2] > V2.vector4_f32[2]) ? V1.vector4_f32[2] : V2.vector4_f32[2];
	Result.vector4_f32[3] = (V1.vector4_f32[3] > V2.vector4_f32[3]) ? V1.vector4_f32[3] : V2.vector4_f32[3];
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_max_ps(V1, V2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorRound(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	XMVECTOR Bias;
	CONST XMVECTOR Zero = XMVectorZero();
	CONST XMVECTOR BiasPos = XMVectorReplicate(0.5f);
	CONST XMVECTOR BiasNeg = XMVectorReplicate(-0.5f);
	Bias = XMVectorLess(V, Zero);
	Bias = XMVectorSelect(BiasPos, BiasNeg, Bias);
	Result = XMVectorAdd(V, Bias);
	Result = XMVectorTruncate(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vTest = _mm_and_si128(CAST_CONST_M128I(V), CAST_CONST_M128I(g_XMAbsMask));
	vTest = _mm_cmplt_epi32(vTest, CAST_CONST_M128I(g_XMNoFraction));
	__m128i vInt = _mm_cvtps_epi32(V);
	XMVECTOR vResult = _mm_cvtepi32_ps(vInt);
	vResult = _mm_and_ps(vResult, ((const XMVECTOR *)(&vTest))[0]);
	vTest = _mm_andnot_si128(vTest, CAST_CONST_M128I(V));
	vResult = _mm_or_ps(vResult, ((const XMVECTOR *)(&vTest))[0]);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorTruncate(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	UINT i;
	Result.vector4_f32[0] = 0.0f;
	for (i = 0; i < 4; i++)
	{
		if (XMISNAN(V.vector4_f32[i]))
		{
			Result.vector4_u32[i] = 0x7FC00000;
		}
		else if (fabsf(V.vector4_f32[i]) < 8388608.0f)
		{
			Result.vector4_f32[i] = (FLOAT) ((INT)V.vector4_f32[i]);
		}
		else
		{
			Result.vector4_f32[i] = V.vector4_f32[i];
		}
	}
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vTest = _mm_and_si128(CAST_CONST_M128I(V), CAST_CONST_M128I(g_XMAbsMask));
	vTest = _mm_cmplt_epi32(vTest, CAST_CONST_M128I(g_XMNoFraction));
	__m128i vInt = _mm_cvttps_epi32(V);
	XMVECTOR vResult = _mm_cvtepi32_ps(vInt);
	vResult = _mm_and_ps(vResult, ((XMVECTOR *) (&vTest))[0]);
	vTest = _mm_andnot_si128(vTest, CAST_CONST_M128I(V));
	vResult = _mm_or_ps(vResult, ((XMVECTOR *) (&vTest))[0]);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorFloor(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult = {
		floorf(V.vector4_f32[0]),
		floorf(V.vector4_f32[1]),
		floorf(V.vector4_f32[2]),
		floorf(V.vector4_f32[3])
	};
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_sub_ps(V, CAST_CONST_M128(g_XMOneHalfMinusEpsilon));
	__m128i vInt = _mm_cvtps_epi32(vResult);
	vResult = _mm_cvtepi32_ps(vInt);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorCeiling(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult = {
		ceilf(V.vector4_f32[0]),
		ceilf(V.vector4_f32[1]),
		ceilf(V.vector4_f32[2]),
		ceilf(V.vector4_f32[3])
	};
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_add_ps(V, CAST_CONST_M128(g_XMOneHalfMinusEpsilon));
	__m128i vInt = _mm_cvtps_epi32(vResult);
	vResult = _mm_cvtepi32_ps(vInt);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorClamp(FXMVECTOR V, FXMVECTOR Min, FXMVECTOR Max)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	XMASSERT(XMVector4LessOrEqual(Min, Max));
	Result = XMVectorMax(Min, V);
	Result = XMVectorMin(Max, Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult;
	XMASSERT(XMVector4LessOrEqual(Min, Max));
	vResult = _mm_max_ps(Min, V);
	vResult = _mm_min_ps(vResult, Max);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSaturate(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	CONST XMVECTOR Zero = XMVectorZero();
	return XMVectorClamp(V, Zero, g_XMOne.v);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_max_ps(V, CAST_CONST_M128(g_XMZero));
	return _mm_min_ps(vResult, CAST_CONST_M128(g_XMOne));
#else
#endif
}
XMFINLINE XMVECTOR XMVectorAndInt(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_u32[0] = V1.vector4_u32[0] & V2.vector4_u32[0];
	Result.vector4_u32[1] = V1.vector4_u32[1] & V2.vector4_u32[1];
	Result.vector4_u32[2] = V1.vector4_u32[2] & V2.vector4_u32[2];
	Result.vector4_u32[3] = V1.vector4_u32[3] & V2.vector4_u32[3];
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_and_ps(V1, V2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorAndCInt(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_u32[0] = V1.vector4_u32[0] & ~V2.vector4_u32[0];
	Result.vector4_u32[1] = V1.vector4_u32[1] & ~V2.vector4_u32[1];
	Result.vector4_u32[2] = V1.vector4_u32[2] & ~V2.vector4_u32[2];
	Result.vector4_u32[3] = V1.vector4_u32[3] & ~V2.vector4_u32[3];
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i V = _mm_andnot_si128(CAST_CONST_M128I(V2), CAST_CONST_M128I(V1));
	return CAST_M128(V);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorOrInt(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_u32[0] = V1.vector4_u32[0] | V2.vector4_u32[0];
	Result.vector4_u32[1] = V1.vector4_u32[1] | V2.vector4_u32[1];
	Result.vector4_u32[2] = V1.vector4_u32[2] | V2.vector4_u32[2];
	Result.vector4_u32[3] = V1.vector4_u32[3] | V2.vector4_u32[3];
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i V = _mm_or_si128(CAST_CONST_M128I(V1), CAST_CONST_M128I(V2));
	return CAST_M128(V);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorNorInt(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_u32[0] = ~(V1.vector4_u32[0] | V2.vector4_u32[0]);
	Result.vector4_u32[1] = ~(V1.vector4_u32[1] | V2.vector4_u32[1]);
	Result.vector4_u32[2] = ~(V1.vector4_u32[2] | V2.vector4_u32[2]);
	Result.vector4_u32[3] = ~(V1.vector4_u32[3] | V2.vector4_u32[3]);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i Result;
	Result = _mm_or_si128(CAST_CONST_M128I(V1), CAST_CONST_M128I(V2));
	Result = _mm_andnot_si128(Result, CAST_CONST_M128I(g_XMNegOneMask));
	return CAST_M128(Result);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorXorInt(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_u32[0] = V1.vector4_u32[0] ^ V2.vector4_u32[0];
	Result.vector4_u32[1] = V1.vector4_u32[1] ^ V2.vector4_u32[1];
	Result.vector4_u32[2] = V1.vector4_u32[2] ^ V2.vector4_u32[2];
	Result.vector4_u32[3] = V1.vector4_u32[3] ^ V2.vector4_u32[3];
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i V = _mm_xor_si128(CAST_CONST_M128I(V1), CAST_CONST_M128I(V2));
	return CAST_M128(V);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorNegate(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_f32[0] = -V.vector4_f32[0];
	Result.vector4_f32[1] = -V.vector4_f32[1];
	Result.vector4_f32[2] = -V.vector4_f32[2];
	Result.vector4_f32[3] = -V.vector4_f32[3];
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR Z;
	Z = _mm_setzero_ps();
	return _mm_sub_ps(Z, V);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorAdd(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_f32[0] = V1.vector4_f32[0] + V2.vector4_f32[0];
	Result.vector4_f32[1] = V1.vector4_f32[1] + V2.vector4_f32[1];
	Result.vector4_f32[2] = V1.vector4_f32[2] + V2.vector4_f32[2];
	Result.vector4_f32[3] = V1.vector4_f32[3] + V2.vector4_f32[3];
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_add_ps(V1, V2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorAddAngles(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Mask;
	XMVECTOR Offset;
	XMVECTOR Result;
	CONST XMVECTOR Zero = XMVectorZero();
	Result = XMVectorAdd(V1, V2);
	Mask = XMVectorLess(Result, g_XMNegativePi.v);
	Offset = XMVectorSelect(Zero, g_XMTwoPi.v, Mask);
	Mask = XMVectorGreaterOrEqual(Result, g_XMPi.v);
	Offset = XMVectorSelect(Offset, g_XMNegativeTwoPi.v, Mask);
	Result = XMVectorAdd(Result, Offset);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_add_ps(V1, V2);
	XMVECTOR vOffset = _mm_cmplt_ps(vResult, CAST_CONST_M128(g_XMNegativePi));
	vOffset = _mm_and_ps(vOffset, CAST_CONST_M128(g_XMTwoPi));
	vResult = _mm_add_ps(vResult, vOffset);
	vOffset = _mm_cmpge_ps(vResult, CAST_CONST_M128(g_XMPi));
	vOffset = _mm_and_ps(vOffset, CAST_CONST_M128(g_XMTwoPi));
	vResult = _mm_sub_ps(vResult, vOffset);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSubtract(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_f32[0] = V1.vector4_f32[0] - V2.vector4_f32[0];
	Result.vector4_f32[1] = V1.vector4_f32[1] - V2.vector4_f32[1];
	Result.vector4_f32[2] = V1.vector4_f32[2] - V2.vector4_f32[2];
	Result.vector4_f32[3] = V1.vector4_f32[3] - V2.vector4_f32[3];
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_sub_ps(V1, V2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSubtractAngles(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Mask;
	XMVECTOR Offset;
	XMVECTOR Result;
	CONST XMVECTOR Zero = XMVectorZero();
	Result = XMVectorSubtract(V1, V2);
	Mask = XMVectorLess(Result, g_XMNegativePi.v);
	Offset = XMVectorSelect(Zero, g_XMTwoPi.v, Mask);
	Mask = XMVectorGreaterOrEqual(Result, g_XMPi.v);
	Offset = XMVectorSelect(Offset, g_XMNegativeTwoPi.v, Mask);
	Result = XMVectorAdd(Result, Offset);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_sub_ps(V1, V2);
	XMVECTOR vOffset = _mm_cmplt_ps(vResult, CAST_CONST_M128(g_XMNegativePi));
	vOffset = _mm_and_ps(vOffset, CAST_CONST_M128(g_XMTwoPi));
	vResult = _mm_add_ps(vResult, vOffset);
	vOffset = _mm_cmpge_ps(vResult, CAST_CONST_M128(g_XMPi));
	vOffset = _mm_and_ps(vOffset, CAST_CONST_M128(g_XMTwoPi));
	vResult = _mm_sub_ps(vResult, vOffset);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorMultiply(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result = {
		V1.vector4_f32[0] * V2.vector4_f32[0],
		V1.vector4_f32[1] * V2.vector4_f32[1],
		V1.vector4_f32[2] * V2.vector4_f32[2],
		V1.vector4_f32[3] * V2.vector4_f32[3]
	};
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_mul_ps(V1, V2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorMultiplyAdd(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR V3)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult = {
		(V1.vector4_f32[0] * V2.vector4_f32[0]) + V3.vector4_f32[0],
		(V1.vector4_f32[1] * V2.vector4_f32[1]) + V3.vector4_f32[1],
		(V1.vector4_f32[2] * V2.vector4_f32[2]) + V3.vector4_f32[2],
		(V1.vector4_f32[3] * V2.vector4_f32[3]) + V3.vector4_f32[3]
	};
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_mul_ps(V1, V2);
	return _mm_add_ps(vResult, V3);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorDivide(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_f32[0] = V1.vector4_f32[0] / V2.vector4_f32[0];
	Result.vector4_f32[1] = V1.vector4_f32[1] / V2.vector4_f32[1];
	Result.vector4_f32[2] = V1.vector4_f32[2] / V2.vector4_f32[2];
	Result.vector4_f32[3] = V1.vector4_f32[3] / V2.vector4_f32[3];
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_div_ps(V1, V2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorNegativeMultiplySubtract(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR V3)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult = {
		V3.vector4_f32[0] - (V1.vector4_f32[0] * V2.vector4_f32[0]),
		V3.vector4_f32[1] - (V1.vector4_f32[1] * V2.vector4_f32[1]),
		V3.vector4_f32[2] - (V1.vector4_f32[2] * V2.vector4_f32[2]),
		V3.vector4_f32[3] - (V1.vector4_f32[3] * V2.vector4_f32[3])
	};
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR R = _mm_mul_ps(V1, V2);
	return _mm_sub_ps(V3, R);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorScale(FXMVECTOR V, FLOAT ScaleFactor)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult = {
		V.vector4_f32[0] * ScaleFactor,
		V.vector4_f32[1] * ScaleFactor,
		V.vector4_f32[2] * ScaleFactor,
		V.vector4_f32[3] * ScaleFactor
	};
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_set_ps1(ScaleFactor);
	return _mm_mul_ps(vResult, V);
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMVectorReciprocalEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	UINT i;
	Result.vector4_f32[0] = 0.0f;
	for (i = 0; i < 4; i++)
	{
		if (XMISNAN(V.vector4_f32[i]))
		{
			Result.vector4_u32[i] = 0x7FC00000;
		}
		else if (V.vector4_f32[i] == 0.0f || V.vector4_f32[i] == -0.0f)
		{
			Result.vector4_u32[i] = 0x7F800000 | (V.vector4_u32[i] & 0x80000000);
		}
		else
		{
			Result.vector4_f32[i] = 1.f / V.vector4_f32[i];
		}
	}
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_rcp_ps(V);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorReciprocal(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return XMVectorReciprocalEst(V);
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_div_ps(CAST_CONST_M128(g_XMOne), V);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSqrtEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Select;
	XMVECTOR Result = XMVectorReciprocalSqrtEst(V);
	XMVECTOR Zero = XMVectorZero();
	XMVECTOR VEqualsInfinity = XMVectorEqualInt(V, g_XMInfinity.v);
	XMVECTOR VEqualsZero = XMVectorEqual(V, Zero);
	Result = XMVectorMultiply(V, Result);
	Select = XMVectorEqualInt(VEqualsInfinity, VEqualsZero);
	Result = XMVectorSelect(V, Result, Select);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_sqrt_ps(V);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSqrt(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Zero;
	XMVECTOR VEqualsInfinity, VEqualsZero;
	XMVECTOR Select;
	XMVECTOR Result;
	Result = XMVectorReciprocalSqrt(V);
	Zero = XMVectorZero();
	VEqualsInfinity = XMVectorEqualInt(V, g_XMInfinity.v);
	VEqualsZero = XMVectorEqual(V, Zero);
	Result = XMVectorMultiply(V, Result);
	Select = XMVectorEqualInt(VEqualsInfinity, VEqualsZero);
	Result = XMVectorSelect(V, Result, Select);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_sqrt_ps(V);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorReciprocalSqrtEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	UINT i;
	Result.vector4_f32[0] = 0.0f;
	for (i = 0; i < 4; i++)
	{
		if (XMISNAN(V.vector4_f32[i]))
		{
			Result.vector4_u32[i] = 0x7FC00000;
		}
		else if (V.vector4_f32[i] == 0.0f || V.vector4_f32[i] == -0.0f)
		{
			Result.vector4_u32[i] = 0x7F800000 | (V.vector4_u32[i] & 0x80000000);
		}
		else if (V.vector4_f32[i] < 0.0f)
		{
			Result.vector4_u32[i] = 0x7FFFFFFF;
		}
		else if (XMISINF(V.vector4_f32[i]))
		{
			Result.vector4_f32[i] = 0.0f;
		}
		else
		{
			Result.vector4_f32[i] = 1.0f / sqrtf(V.vector4_f32[i]);
		}
	}
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	return _mm_rsqrt_ps(V);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorReciprocalSqrt(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return XMVectorReciprocalSqrtEst(V);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_sqrt_ps(V);
	vResult = _mm_div_ps(CAST_CONST_M128(g_XMOne), vResult);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorExpEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_f32[0] = powf(2.0f, V.vector4_f32[0]);
	Result.vector4_f32[1] = powf(2.0f, V.vector4_f32[1]);
	Result.vector4_f32[2] = powf(2.0f, V.vector4_f32[2]);
	Result.vector4_f32[3] = powf(2.0f, V.vector4_f32[3]);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_setr_ps(powf(2.0f, XMVectorGetX(V)),
		powf(2.0f, XMVectorGetY(V)),
		powf(2.0f, XMVectorGetZ(V)),
		powf(2.0f, XMVectorGetW(V)));
	return vResult;
#else
#endif
}
XMINLINE XMVECTOR XMVectorExp(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR E, S;
	XMVECTOR R, R2, R3, R4;
	XMVECTOR V0, V1;
	XMVECTOR C0X, C0Y, C0Z, C0W;
	XMVECTOR C1X, C1Y, C1Z, C1W;
	XMVECTOR Result;
	static CONST XMVECTOR C0 = { 1.0f, -6.93147182e-1f, 2.40226462e-1f, -5.55036440e-2f };
	static CONST XMVECTOR C1 = { 9.61597636e-3f, -1.32823968e-3f, 1.47491097e-4f, -1.08635004e-5f };
	R = XMVectorFloor(V);
	E = XMVectorExpEst(R);
	R = XMVectorSubtract(V, R);
	R2 = XMVectorMultiply(R, R);
	R3 = XMVectorMultiply(R, R2);
	R4 = XMVectorMultiply(R2, R2);
	C0X = XMVectorSplatX(C0);
	C0Y = XMVectorSplatY(C0);
	C0Z = XMVectorSplatZ(C0);
	C0W = XMVectorSplatW(C0);
	C1X = XMVectorSplatX(C1);
	C1Y = XMVectorSplatY(C1);
	C1Z = XMVectorSplatZ(C1);
	C1W = XMVectorSplatW(C1);
	V0 = XMVectorMultiplyAdd(R, C0Y, C0X);
	V0 = XMVectorMultiplyAdd(R2, C0Z, V0);
	V0 = XMVectorMultiplyAdd(R3, C0W, V0);
	V1 = XMVectorMultiplyAdd(R, C1Y, C1X);
	V1 = XMVectorMultiplyAdd(R2, C1Z, V1);
	V1 = XMVectorMultiplyAdd(R3, C1W, V1);
	S = XMVectorMultiplyAdd(R4, V1, V0);
	S = XMVectorReciprocal(S);
	Result = XMVectorMultiply(E, S);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	static CONST XMVECTORF32 C0 = { 1.0f, -6.93147182e-1f, 2.40226462e-1f, -5.55036440e-2f };
	static CONST XMVECTORF32 C1 = { 9.61597636e-3f, -1.32823968e-3f, 1.47491097e-4f, -1.08635004e-5f };
	XMVECTOR R = XMVectorFloor(V);
	XMVECTOR E = XMVectorExpEst(R);
	R = _mm_sub_ps(V, R);
	XMVECTOR R2 = _mm_mul_ps(R, R);
	XMVECTOR R3 = _mm_mul_ps(R, R2);
	XMVECTOR V0 = _mm_load_ps1(&C0.f[1]);
	V0 = _mm_mul_ps(V0, R);
	XMVECTOR vConstants = _mm_load_ps1(&C0.f[0]);
	V0 = _mm_add_ps(V0, vConstants);
	vConstants = _mm_load_ps1(&C0.f[2]);
	vConstants = _mm_mul_ps(vConstants, R2);
	V0 = _mm_add_ps(V0, vConstants);
	vConstants = _mm_load_ps1(&C0.f[3]);
	vConstants = _mm_mul_ps(vConstants, R3);
	V0 = _mm_add_ps(V0, vConstants);
	XMVECTOR V1 = _mm_load_ps1(&C1.f[1]);
	V1 = _mm_mul_ps(V1, R);
	vConstants = _mm_load_ps1(&C1.f[0]);
	V1 = _mm_add_ps(V1, vConstants);
	vConstants = _mm_load_ps1(&C1.f[2]);
	vConstants = _mm_mul_ps(vConstants, R2);
	V1 = _mm_add_ps(V1, vConstants);
	vConstants = _mm_load_ps1(&C1.f[3]);
	vConstants = _mm_mul_ps(vConstants, R3);
	V1 = _mm_add_ps(V1, vConstants);
	R2 = _mm_mul_ps(R2, R2);
	R2 = _mm_mul_ps(R2, V1);
	R2 = _mm_add_ps(R2, V0);
	E = _mm_div_ps(E, R2);
	return E;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorLogEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	FLOAT fScale = (1.0f / logf(2.0f));
	XMVECTOR Result;
	Result.vector4_f32[0] = logf(V.vector4_f32[0]) * fScale;
	Result.vector4_f32[1] = logf(V.vector4_f32[1]) * fScale;
	Result.vector4_f32[2] = logf(V.vector4_f32[2]) * fScale;
	Result.vector4_f32[3] = logf(V.vector4_f32[3]) * fScale;
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vScale = _mm_set_ps1(1.0f / logf(2.0f));
	XMVECTOR vResult = _mm_setr_ps(logf(XMVectorGetX(V)),
		logf(XMVectorGetY(V)),
		logf(XMVectorGetZ(V)),
		logf(XMVectorGetW(V)));
	vResult = _mm_mul_ps(vResult, vScale);
	return vResult;
#else
#endif
}
XMINLINE XMVECTOR XMVectorLog(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	FLOAT fScale = (1.0f / logf(2.0f));
	XMVECTOR Result;
	Result.vector4_f32[0] = logf(V.vector4_f32[0]) * fScale;
	Result.vector4_f32[1] = logf(V.vector4_f32[1]) * fScale;
	Result.vector4_f32[2] = logf(V.vector4_f32[2]) * fScale;
	Result.vector4_f32[3] = logf(V.vector4_f32[3]) * fScale;
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vScale = _mm_set_ps1(1.0f / logf(2.0f));
	XMVECTOR vResult = _mm_setr_ps(logf(XMVectorGetX(V)),
		logf(XMVectorGetY(V)),
		logf(XMVectorGetZ(V)),
		logf(XMVectorGetW(V)));
	vResult = _mm_mul_ps(vResult, vScale);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorPowEst(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_f32[0] = powf(V1.vector4_f32[0], V2.vector4_f32[0]);
	Result.vector4_f32[1] = powf(V1.vector4_f32[1], V2.vector4_f32[1]);
	Result.vector4_f32[2] = powf(V1.vector4_f32[2], V2.vector4_f32[2]);
	Result.vector4_f32[3] = powf(V1.vector4_f32[3], V2.vector4_f32[3]);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_setr_ps(powf(XMVectorGetX(V1), XMVectorGetX(V2)),
		powf(XMVectorGetY(V1), XMVectorGetY(V2)),
		powf(XMVectorGetZ(V1), XMVectorGetZ(V2)),
		powf(XMVectorGetW(V1), XMVectorGetW(V2)));
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorPow(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_) || defined(_XM_SSE_INTRINSICS_)
	return XMVectorPowEst(V1, V2);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorAbs(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult = {
		fabsf(V.vector4_f32[0]),
		fabsf(V.vector4_f32[1]),
		fabsf(V.vector4_f32[2]),
		fabsf(V.vector4_f32[3])
	};
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_setzero_ps();
	vResult = _mm_sub_ps(vResult, V);
	vResult = _mm_max_ps(vResult, V);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorMod(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Reciprocal;
	XMVECTOR Quotient;
	XMVECTOR Result;
	Reciprocal = XMVectorReciprocal(V2);
	Quotient = XMVectorMultiply(V1, Reciprocal);
	Quotient = XMVectorTruncate(Quotient);
	Result = XMVectorNegativeMultiplySubtract(V2, Quotient, V1);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_div_ps(V1, V2);
	vResult = XMVectorTruncate(vResult);
	vResult = _mm_mul_ps(vResult, V2);
	vResult = _mm_sub_ps(V1, vResult);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorModAngles(FXMVECTOR Angles)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMVECTOR Result;
	V = XMVectorMultiply(Angles, g_XMReciprocalTwoPi.v);
	V = XMVectorRound(V);
	Result = XMVectorNegativeMultiplySubtract(g_XMTwoPi.v, V, Angles);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_mul_ps(Angles, CAST_CONST_M128(g_XMReciprocalTwoPi));
	vResult = XMVectorRound(vResult);
	vResult = _mm_mul_ps(vResult, CAST_CONST_M128(g_XMTwoPi));
	vResult = _mm_sub_ps(Angles, vResult);
	return vResult;
#else
#endif
}
XMINLINE XMVECTOR XMVectorSin(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V1, V2, V3, V5, V7, V9, V11, V13, V15, V17, V19, V21, V23;
	XMVECTOR S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11;
	XMVECTOR Result;
	V1 = XMVectorModAngles(V);
	V2 = XMVectorMultiply(V1, V1);
	V3 = XMVectorMultiply(V2, V1);
	V5 = XMVectorMultiply(V3, V2);
	V7 = XMVectorMultiply(V5, V2);
	V9 = XMVectorMultiply(V7, V2);
	V11 = XMVectorMultiply(V9, V2);
	V13 = XMVectorMultiply(V11, V2);
	V15 = XMVectorMultiply(V13, V2);
	V17 = XMVectorMultiply(V15, V2);
	V19 = XMVectorMultiply(V17, V2);
	V21 = XMVectorMultiply(V19, V2);
	V23 = XMVectorMultiply(V21, V2);
	S1 = XMVectorSplatY(g_XMSinCoefficients0.v);
	S2 = XMVectorSplatZ(g_XMSinCoefficients0.v);
	S3 = XMVectorSplatW(g_XMSinCoefficients0.v);
	S4 = XMVectorSplatX(g_XMSinCoefficients1.v);
	S5 = XMVectorSplatY(g_XMSinCoefficients1.v);
	S6 = XMVectorSplatZ(g_XMSinCoefficients1.v);
	S7 = XMVectorSplatW(g_XMSinCoefficients1.v);
	S8 = XMVectorSplatX(g_XMSinCoefficients2.v);
	S9 = XMVectorSplatY(g_XMSinCoefficients2.v);
	S10 = XMVectorSplatZ(g_XMSinCoefficients2.v);
	S11 = XMVectorSplatW(g_XMSinCoefficients2.v);
	Result = XMVectorMultiplyAdd(S1, V3, V1);
	Result = XMVectorMultiplyAdd(S2, V5, Result);
	Result = XMVectorMultiplyAdd(S3, V7, Result);
	Result = XMVectorMultiplyAdd(S4, V9, Result);
	Result = XMVectorMultiplyAdd(S5, V11, Result);
	Result = XMVectorMultiplyAdd(S6, V13, Result);
	Result = XMVectorMultiplyAdd(S7, V15, Result);
	Result = XMVectorMultiplyAdd(S8, V17, Result);
	Result = XMVectorMultiplyAdd(S9, V19, Result);
	Result = XMVectorMultiplyAdd(S10, V21, Result);
	Result = XMVectorMultiplyAdd(S11, V23, Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = XMVectorModAngles(V);
	XMVECTOR V2 = _mm_mul_ps(vResult, vResult);
	XMVECTOR vPower = _mm_mul_ps(vResult, V2);
	XMVECTOR vConstants = _mm_load_ps1(&g_XMSinCoefficients0.f[1]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMSinCoefficients0.f[2]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMSinCoefficients0.f[3]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMSinCoefficients1.f[0]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMSinCoefficients1.f[1]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMSinCoefficients1.f[2]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMSinCoefficients1.f[3]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMSinCoefficients2.f[0]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMSinCoefficients2.f[1]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMSinCoefficients2.f[2]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMSinCoefficients2.f[3]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	return vResult;
#else
#endif
}
XMINLINE XMVECTOR XMVectorCos(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V1, V2, V4, V6, V8, V10, V12, V14, V16, V18, V20, V22;
	XMVECTOR C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11;
	XMVECTOR Result;
	V1 = XMVectorModAngles(V);
	V2 = XMVectorMultiply(V1, V1);
	V4 = XMVectorMultiply(V2, V2);
	V6 = XMVectorMultiply(V4, V2);
	V8 = XMVectorMultiply(V4, V4);
	V10 = XMVectorMultiply(V6, V4);
	V12 = XMVectorMultiply(V6, V6);
	V14 = XMVectorMultiply(V8, V6);
	V16 = XMVectorMultiply(V8, V8);
	V18 = XMVectorMultiply(V10, V8);
	V20 = XMVectorMultiply(V10, V10);
	V22 = XMVectorMultiply(V12, V10);
	C1 = XMVectorSplatY(g_XMCosCoefficients0.v);
	C2 = XMVectorSplatZ(g_XMCosCoefficients0.v);
	C3 = XMVectorSplatW(g_XMCosCoefficients0.v);
	C4 = XMVectorSplatX(g_XMCosCoefficients1.v);
	C5 = XMVectorSplatY(g_XMCosCoefficients1.v);
	C6 = XMVectorSplatZ(g_XMCosCoefficients1.v);
	C7 = XMVectorSplatW(g_XMCosCoefficients1.v);
	C8 = XMVectorSplatX(g_XMCosCoefficients2.v);
	C9 = XMVectorSplatY(g_XMCosCoefficients2.v);
	C10 = XMVectorSplatZ(g_XMCosCoefficients2.v);
	C11 = XMVectorSplatW(g_XMCosCoefficients2.v);
	Result = XMVectorMultiplyAdd(C1, V2, g_XMOne.v);
	Result = XMVectorMultiplyAdd(C2, V4, Result);
	Result = XMVectorMultiplyAdd(C3, V6, Result);
	Result = XMVectorMultiplyAdd(C4, V8, Result);
	Result = XMVectorMultiplyAdd(C5, V10, Result);
	Result = XMVectorMultiplyAdd(C6, V12, Result);
	Result = XMVectorMultiplyAdd(C7, V14, Result);
	Result = XMVectorMultiplyAdd(C8, V16, Result);
	Result = XMVectorMultiplyAdd(C9, V18, Result);
	Result = XMVectorMultiplyAdd(C10, V20, Result);
	Result = XMVectorMultiplyAdd(C11, V22, Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR V2 = XMVectorModAngles(V);
	V2 = _mm_mul_ps(V2, V2);
	XMVECTOR vConstants = _mm_load_ps1(&g_XMCosCoefficients0.f[1]);
	vConstants = _mm_mul_ps(vConstants, V2);
	XMVECTOR vResult = _mm_add_ps(vConstants, CAST_CONST_M128(g_XMOne));
	XMVECTOR vPower = _mm_mul_ps(V2, V2);
	vConstants = _mm_load_ps1(&g_XMCosCoefficients0.f[2]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMCosCoefficients0.f[3]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMCosCoefficients1.f[0]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMCosCoefficients1.f[1]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMCosCoefficients1.f[2]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMCosCoefficients1.f[3]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMCosCoefficients2.f[0]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMCosCoefficients2.f[1]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMCosCoefficients2.f[2]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	vPower = _mm_mul_ps(vPower, V2);
	vConstants = _mm_load_ps1(&g_XMCosCoefficients2.f[3]);
	vConstants = _mm_mul_ps(vConstants, vPower);
	vResult = _mm_add_ps(vResult, vConstants);
	return vResult;
#else
#endif
}
XMINLINE VOID XMVectorSinCos(XMVECTOR *pSin, XMVECTOR *pCos, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V1, V2, V3, V4, V5, V6, V7, V8, V9, V10, V11, V12, V13;
	XMVECTOR V14, V15, V16, V17, V18, V19, V20, V21, V22, V23;
	XMVECTOR S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11;
	XMVECTOR C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11;
	XMVECTOR Sin, Cos;
	XMASSERT(pSin);
	XMASSERT(pCos);
	V1 = XMVectorModAngles(V);
	V2 = XMVectorMultiply(V1, V1);
	V3 = XMVectorMultiply(V2, V1);
	V4 = XMVectorMultiply(V2, V2);
	V5 = XMVectorMultiply(V3, V2);
	V6 = XMVectorMultiply(V3, V3);
	V7 = XMVectorMultiply(V4, V3);
	V8 = XMVectorMultiply(V4, V4);
	V9 = XMVectorMultiply(V5, V4);
	V10 = XMVectorMultiply(V5, V5);
	V11 = XMVectorMultiply(V6, V5);
	V12 = XMVectorMultiply(V6, V6);
	V13 = XMVectorMultiply(V7, V6);
	V14 = XMVectorMultiply(V7, V7);
	V15 = XMVectorMultiply(V8, V7);
	V16 = XMVectorMultiply(V8, V8);
	V17 = XMVectorMultiply(V9, V8);
	V18 = XMVectorMultiply(V9, V9);
	V19 = XMVectorMultiply(V10, V9);
	V20 = XMVectorMultiply(V10, V10);
	V21 = XMVectorMultiply(V11, V10);
	V22 = XMVectorMultiply(V11, V11);
	V23 = XMVectorMultiply(V12, V11);
	S1 = XMVectorSplatY(g_XMSinCoefficients0.v);
	S2 = XMVectorSplatZ(g_XMSinCoefficients0.v);
	S3 = XMVectorSplatW(g_XMSinCoefficients0.v);
	S4 = XMVectorSplatX(g_XMSinCoefficients1.v);
	S5 = XMVectorSplatY(g_XMSinCoefficients1.v);
	S6 = XMVectorSplatZ(g_XMSinCoefficients1.v);
	S7 = XMVectorSplatW(g_XMSinCoefficients1.v);
	S8 = XMVectorSplatX(g_XMSinCoefficients2.v);
	S9 = XMVectorSplatY(g_XMSinCoefficients2.v);
	S10 = XMVectorSplatZ(g_XMSinCoefficients2.v);
	S11 = XMVectorSplatW(g_XMSinCoefficients2.v);
	C1 = XMVectorSplatY(g_XMCosCoefficients0.v);
	C2 = XMVectorSplatZ(g_XMCosCoefficients0.v);
	C3 = XMVectorSplatW(g_XMCosCoefficients0.v);
	C4 = XMVectorSplatX(g_XMCosCoefficients1.v);
	C5 = XMVectorSplatY(g_XMCosCoefficients1.v);
	C6 = XMVectorSplatZ(g_XMCosCoefficients1.v);
	C7 = XMVectorSplatW(g_XMCosCoefficients1.v);
	C8 = XMVectorSplatX(g_XMCosCoefficients2.v);
	C9 = XMVectorSplatY(g_XMCosCoefficients2.v);
	C10 = XMVectorSplatZ(g_XMCosCoefficients2.v);
	C11 = XMVectorSplatW(g_XMCosCoefficients2.v);
	Sin = XMVectorMultiplyAdd(S1, V3, V1);
	Sin = XMVectorMultiplyAdd(S2, V5, Sin);
	Sin = XMVectorMultiplyAdd(S3, V7, Sin);
	Sin = XMVectorMultiplyAdd(S4, V9, Sin);
	Sin = XMVectorMultiplyAdd(S5, V11, Sin);
	Sin = XMVectorMultiplyAdd(S6, V13, Sin);
	Sin = XMVectorMultiplyAdd(S7, V15, Sin);
	Sin = XMVectorMultiplyAdd(S8, V17, Sin);
	Sin = XMVectorMultiplyAdd(S9, V19, Sin);
	Sin = XMVectorMultiplyAdd(S10, V21, Sin);
	Sin = XMVectorMultiplyAdd(S11, V23, Sin);
	Cos = XMVectorMultiplyAdd(C1, V2, g_XMOne.v);
	Cos = XMVectorMultiplyAdd(C2, V4, Cos);
	Cos = XMVectorMultiplyAdd(C3, V6, Cos);
	Cos = XMVectorMultiplyAdd(C4, V8, Cos);
	Cos = XMVectorMultiplyAdd(C5, V10, Cos);
	Cos = XMVectorMultiplyAdd(C6, V12, Cos);
	Cos = XMVectorMultiplyAdd(C7, V14, Cos);
	Cos = XMVectorMultiplyAdd(C8, V16, Cos);
	Cos = XMVectorMultiplyAdd(C9, V18, Cos);
	Cos = XMVectorMultiplyAdd(C10, V20, Cos);
	Cos = XMVectorMultiplyAdd(C11, V22, Cos);
	*pSin = Sin;
	*pCos = Cos;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSin);
	XMASSERT(pCos);
	XMVECTOR V1, V2, V3, V4, V5, V6, V7, V8, V9, V10, V11, V12, V13;
	XMVECTOR V14, V15, V16, V17, V18, V19, V20, V21, V22, V23;
	XMVECTOR S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11;
	XMVECTOR C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11;
	XMVECTOR Sin, Cos;
	V1 = XMVectorModAngles(V);
	V2 = XMVectorMultiply(V1, V1);
	V3 = XMVectorMultiply(V2, V1);
	V4 = XMVectorMultiply(V2, V2);
	V5 = XMVectorMultiply(V3, V2);
	V6 = XMVectorMultiply(V3, V3);
	V7 = XMVectorMultiply(V4, V3);
	V8 = XMVectorMultiply(V4, V4);
	V9 = XMVectorMultiply(V5, V4);
	V10 = XMVectorMultiply(V5, V5);
	V11 = XMVectorMultiply(V6, V5);
	V12 = XMVectorMultiply(V6, V6);
	V13 = XMVectorMultiply(V7, V6);
	V14 = XMVectorMultiply(V7, V7);
	V15 = XMVectorMultiply(V8, V7);
	V16 = XMVectorMultiply(V8, V8);
	V17 = XMVectorMultiply(V9, V8);
	V18 = XMVectorMultiply(V9, V9);
	V19 = XMVectorMultiply(V10, V9);
	V20 = XMVectorMultiply(V10, V10);
	V21 = XMVectorMultiply(V11, V10);
	V22 = XMVectorMultiply(V11, V11);
	V23 = XMVectorMultiply(V12, V11);
	S1 = _mm_load_ps1(&g_XMSinCoefficients0.f[1]);
	S2 = _mm_load_ps1(&g_XMSinCoefficients0.f[2]);
	S3 = _mm_load_ps1(&g_XMSinCoefficients0.f[3]);
	S4 = _mm_load_ps1(&g_XMSinCoefficients1.f[0]);
	S5 = _mm_load_ps1(&g_XMSinCoefficients1.f[1]);
	S6 = _mm_load_ps1(&g_XMSinCoefficients1.f[2]);
	S7 = _mm_load_ps1(&g_XMSinCoefficients1.f[3]);
	S8 = _mm_load_ps1(&g_XMSinCoefficients2.f[0]);
	S9 = _mm_load_ps1(&g_XMSinCoefficients2.f[1]);
	S10 = _mm_load_ps1(&g_XMSinCoefficients2.f[2]);
	S11 = _mm_load_ps1(&g_XMSinCoefficients2.f[3]);
	C1 = _mm_load_ps1(&g_XMCosCoefficients0.f[1]);
	C2 = _mm_load_ps1(&g_XMCosCoefficients0.f[2]);
	C3 = _mm_load_ps1(&g_XMCosCoefficients0.f[3]);
	C4 = _mm_load_ps1(&g_XMCosCoefficients1.f[0]);
	C5 = _mm_load_ps1(&g_XMCosCoefficients1.f[1]);
	C6 = _mm_load_ps1(&g_XMCosCoefficients1.f[2]);
	C7 = _mm_load_ps1(&g_XMCosCoefficients1.f[3]);
	C8 = _mm_load_ps1(&g_XMCosCoefficients2.f[0]);
	C9 = _mm_load_ps1(&g_XMCosCoefficients2.f[1]);
	C10 = _mm_load_ps1(&g_XMCosCoefficients2.f[2]);
	C11 = _mm_load_ps1(&g_XMCosCoefficients2.f[3]);
	S1 = _mm_mul_ps(S1, V3);
	Sin = _mm_add_ps(S1, V1);
	Sin = XMVectorMultiplyAdd(S2, V5, Sin);
	Sin = XMVectorMultiplyAdd(S3, V7, Sin);
	Sin = XMVectorMultiplyAdd(S4, V9, Sin);
	Sin = XMVectorMultiplyAdd(S5, V11, Sin);
	Sin = XMVectorMultiplyAdd(S6, V13, Sin);
	Sin = XMVectorMultiplyAdd(S7, V15, Sin);
	Sin = XMVectorMultiplyAdd(S8, V17, Sin);
	Sin = XMVectorMultiplyAdd(S9, V19, Sin);
	Sin = XMVectorMultiplyAdd(S10, V21, Sin);
	Sin = XMVectorMultiplyAdd(S11, V23, Sin);
	Cos = _mm_mul_ps(C1, V2);
	Cos = _mm_add_ps(Cos, CAST_CONST_M128(g_XMOne));
	Cos = XMVectorMultiplyAdd(C2, V4, Cos);
	Cos = XMVectorMultiplyAdd(C3, V6, Cos);
	Cos = XMVectorMultiplyAdd(C4, V8, Cos);
	Cos = XMVectorMultiplyAdd(C5, V10, Cos);
	Cos = XMVectorMultiplyAdd(C6, V12, Cos);
	Cos = XMVectorMultiplyAdd(C7, V14, Cos);
	Cos = XMVectorMultiplyAdd(C8, V16, Cos);
	Cos = XMVectorMultiplyAdd(C9, V18, Cos);
	Cos = XMVectorMultiplyAdd(C10, V20, Cos);
	Cos = XMVectorMultiplyAdd(C11, V22, Cos);
	*pSin = Sin;
	*pCos = Cos;
#else
#endif
}
XMINLINE XMVECTOR XMVectorTan(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR VA, VB, VC, VC2;
	XMVECTOR T0, T1, T2, T3, T4, T5, T6, T7;
	XMVECTOR C0, C1, TwoDivPi, Epsilon;
	XMVECTOR N, D;
	XMVECTOR R0, R1;
	XMVECTOR VIsZero, VCNearZero, VBIsEven;
	XMVECTOR Zero;
	XMVECTOR Result;
	UINT i;
	static CONST XMVECTOR TanCoefficients0 = { 1.0f, -4.667168334e-1f, 2.566383229e-2f, -3.118153191e-4f };
	static CONST XMVECTOR TanCoefficients1 = { 4.981943399e-7f, -1.333835001e-1f, 3.424887824e-3f, -1.786170734e-5f };
	static CONST XMVECTOR TanConstants = { 1.570796371f, 6.077100628e-11f, 0.000244140625f, 2.0f / XM_PI };
	static CONST XMVECTORU32 Mask = { 0x1, 0x1, 0x1, 0x1 };
	TwoDivPi = XMVectorSplatW(TanConstants);
	Zero = XMVectorZero();
	C0 = XMVectorSplatX(TanConstants);
	C1 = XMVectorSplatY(TanConstants);
	Epsilon = XMVectorSplatZ(TanConstants);
	VA = XMVectorMultiply(V, TwoDivPi);
	VA = XMVectorRound(VA);
	VC = XMVectorNegativeMultiplySubtract(VA, C0, V);
	VB = XMVectorAbs(VA);
	VC = XMVectorNegativeMultiplySubtract(VA, C1, VC);
	for (i = 0; i < 4; i++)
	{
		VB.vector4_u32[i] = (UINT)VB.vector4_f32[i];
	}
	VC2 = XMVectorMultiply(VC, VC);
	T7 = XMVectorSplatW(CAST_CONST_M128(TanCoefficients1));
	T6 = XMVectorSplatZ(CAST_CONST_M128(TanCoefficients1));
	T4 = XMVectorSplatX(CAST_CONST_M128(TanCoefficients1));
	T3 = XMVectorSplatW(CAST_CONST_M128(TanCoefficients0));
	T5 = XMVectorSplatY(CAST_CONST_M128(TanCoefficients1));
	T2 = XMVectorSplatZ(CAST_CONST_M128(TanCoefficients0));
	T1 = XMVectorSplatY(CAST_CONST_M128(TanCoefficients0));
	T0 = XMVectorSplatX(CAST_CONST_M128(TanCoefficients0));
	VBIsEven = XMVectorAndInt(VB, Mask.v);
	VBIsEven = XMVectorEqualInt(VBIsEven, Zero);
	N = XMVectorMultiplyAdd(VC2, T7, T6);
	D = XMVectorMultiplyAdd(VC2, T4, T3);
	N = XMVectorMultiplyAdd(VC2, N, T5);
	D = XMVectorMultiplyAdd(VC2, D, T2);
	N = XMVectorMultiply(VC2, N);
	D = XMVectorMultiplyAdd(VC2, D, T1);
	N = XMVectorMultiplyAdd(VC, N, VC);
	VCNearZero = XMVectorInBounds(VC, Epsilon);
	D = XMVectorMultiplyAdd(VC2, D, T0);
	N = XMVectorSelect(N, VC, VCNearZero);
	D = XMVectorSelect(D, g_XMOne.v, VCNearZero);
	R0 = XMVectorNegate(N);
	R1 = XMVectorReciprocal(D);
	R0 = XMVectorReciprocal(R0);
	R1 = XMVectorMultiply(N, R1);
	R0 = XMVectorMultiply(D, R0);
	VIsZero = XMVectorEqual(V, Zero);
	Result = XMVectorSelect(R0, R1, VBIsEven);
	Result = XMVectorSelect(Result, Zero, VIsZero);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR VA, VB, VC, VC2;
	XMVECTOR T0, T1, T2, T3, T4, T5, T6, T7;
	XMVECTOR C0, C1, TwoDivPi, Epsilon;
	XMVECTOR N, D;
	XMVECTOR R0, R1;
	XMVECTOR VIsZero, VCNearZero, VBIsEven;
	XMVECTOR Zero;
	XMVECTOR Result;
	static CONST XMVECTORF32 TanCoefficients0 = { 1.0f, -4.667168334e-1f, 2.566383229e-2f, -3.118153191e-4f };
	static CONST XMVECTORF32 TanCoefficients1 = { 4.981943399e-7f, -1.333835001e-1f, 3.424887824e-3f, -1.786170734e-5f };
	static CONST XMVECTORF32 TanConstants = { 1.570796371f, 6.077100628e-11f, 0.000244140625f, 2.0f / XM_PI };
	static CONST XMVECTORI32 Mask = { 0x1, 0x1, 0x1, 0x1 };
	TwoDivPi = XMVectorSplatW(CAST_CONST_M128(TanConstants));
	Zero = XMVectorZero();
	C0 = XMVectorSplatX(CAST_CONST_M128(TanConstants));
	C1 = XMVectorSplatY(CAST_CONST_M128(TanConstants));
	Epsilon = XMVectorSplatZ(CAST_CONST_M128(TanConstants));
	VA = XMVectorMultiply(V, TwoDivPi);
	VA = XMVectorRound(VA);
	VC = XMVectorNegativeMultiplySubtract(VA, C0, V);
	VB = XMVectorAbs(VA);
	VC = XMVectorNegativeMultiplySubtract(VA, C1, VC);
	CAST_M128I(VB) = _mm_cvttps_epi32(VB);
	VC2 = XMVectorMultiply(VC, VC);
	T7 = XMVectorSplatW(CAST_CONST_M128(CAST_CONST_M128(TanCoefficients1)));
	T6 = XMVectorSplatZ(CAST_CONST_M128(TanCoefficients1));
	T4 = XMVectorSplatX(CAST_CONST_M128(TanCoefficients1));
	T3 = XMVectorSplatW(CAST_CONST_M128(TanCoefficients0));
	T5 = XMVectorSplatY(CAST_CONST_M128(TanCoefficients1));
	T2 = XMVectorSplatZ(CAST_CONST_M128(TanCoefficients0));
	T1 = XMVectorSplatY(CAST_CONST_M128(TanCoefficients0));
	T0 = XMVectorSplatX(CAST_CONST_M128(TanCoefficients0));
	VBIsEven = XMVectorAndInt(VB, CAST_CONST_M128(Mask));
	VBIsEven = XMVectorEqualInt(VBIsEven, Zero);
	N = XMVectorMultiplyAdd(VC2, T7, T6);
	D = XMVectorMultiplyAdd(VC2, T4, T3);
	N = XMVectorMultiplyAdd(VC2, N, T5);
	D = XMVectorMultiplyAdd(VC2, D, T2);
	N = XMVectorMultiply(VC2, N);
	D = XMVectorMultiplyAdd(VC2, D, T1);
	N = XMVectorMultiplyAdd(VC, N, VC);
	VCNearZero = XMVectorInBounds(VC, Epsilon);
	D = XMVectorMultiplyAdd(VC2, D, T0);
	N = XMVectorSelect(N, VC, VCNearZero);
	D = XMVectorSelect(D, CAST_CONST_M128(g_XMOne), VCNearZero);
	R0 = XMVectorNegate(N);
	R1 = _mm_div_ps(N, D);
	R0 = _mm_div_ps(D, R0);
	VIsZero = XMVectorEqual(V, Zero);
	Result = XMVectorSelect(R0, R1, VBIsEven);
	Result = XMVectorSelect(Result, Zero, VIsZero);
	return Result;
#else
#endif
}
XMINLINE XMVECTOR XMVectorSinH(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V1, V2;
	XMVECTOR E1, E2;
	XMVECTOR Result;
	static CONST XMVECTORF32 Scale = { 1.442695040888963f, 1.442695040888963f, 1.442695040888963f, 1.442695040888963f };
	V1 = XMVectorMultiplyAdd(V, Scale.v, g_XMNegativeOne.v);
	V2 = XMVectorNegativeMultiplySubtract(V, Scale.v, g_XMNegativeOne.v);
	E1 = XMVectorExp(V1);
	E2 = XMVectorExp(V2);
	Result = XMVectorSubtract(E1, E2);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR V1, V2;
	XMVECTOR E1, E2;
	XMVECTOR Result;
	static CONST XMVECTORF32 Scale = { 1.442695040888963f, 1.442695040888963f, 1.442695040888963f, 1.442695040888963f };
	V1 = _mm_mul_ps(V, CAST_M128(Scale));
	V1 = _mm_add_ps(V1, CAST_M128(g_XMNegativeOne));
	V2 = _mm_mul_ps(V, CAST_M128(Scale));
	V2 = _mm_sub_ps(CAST_M128(g_XMNegativeOne), V2);
	E1 = XMVectorExp(V1);
	E2 = XMVectorExp(V2);
	Result = _mm_sub_ps(E1, E2);
	return Result;
#else
#endif
}
XMINLINE XMVECTOR XMVectorCosH(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V1, V2;
	XMVECTOR E1, E2;
	XMVECTOR Result;
	static CONST XMVECTOR Scale = { 1.442695040888963f, 1.442695040888963f, 1.442695040888963f, 1.442695040888963f };
	V1 = XMVectorMultiplyAdd(V, Scale, g_XMNegativeOne.v);
	V2 = XMVectorNegativeMultiplySubtract(V, Scale, g_XMNegativeOne.v);
	E1 = XMVectorExp(V1);
	E2 = XMVectorExp(V2);
	Result = XMVectorAdd(E1, E2);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR V1, V2;
	XMVECTOR E1, E2;
	XMVECTOR Result;
	static CONST XMVECTORF32 Scale = { 1.442695040888963f, 1.442695040888963f, 1.442695040888963f, 1.442695040888963f };
	V1 = _mm_mul_ps(V, CAST_M128(Scale));
	V1 = _mm_add_ps(V1, CAST_M128(g_XMNegativeOne));
	V2 = _mm_mul_ps(V, CAST_M128(Scale));
	V2 = _mm_sub_ps(CAST_M128(g_XMNegativeOne), V2);
	E1 = XMVectorExp(V1);
	E2 = XMVectorExp(V2);
	Result = _mm_add_ps(E1, E2);
	return Result;
#else
#endif
}
XMINLINE XMVECTOR XMVectorTanH(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR E;
	XMVECTOR Result;
	static CONST XMVECTORF32 Scale = { 2.8853900817779268f, 2.8853900817779268f, 2.8853900817779268f, 2.8853900817779268f };
	E = XMVectorMultiply(V, Scale.v);
	E = XMVectorExp(E);
	E = XMVectorMultiplyAdd(E, g_XMOneHalf.v, g_XMOneHalf.v);
	E = XMVectorReciprocal(E);
	Result = XMVectorSubtract(g_XMOne.v, E);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	static CONST XMVECTORF32 Scale = { 2.8853900817779268f, 2.8853900817779268f, 2.8853900817779268f, 2.8853900817779268f };
	XMVECTOR E = _mm_mul_ps(V, CAST_M128(Scale));
	E = XMVectorExp(E);
	E = _mm_mul_ps(E, CAST_M128(g_XMOneHalf));
	E = _mm_add_ps(E, CAST_M128(g_XMOneHalf));
	E = XMVectorReciprocal(E);
	E = _mm_sub_ps(CAST_M128(g_XMOne), E);
	return E;
#else
#endif
}
XMINLINE XMVECTOR XMVectorASin(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V2, V3, AbsV;
	XMVECTOR C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11;
	XMVECTOR R0, R1, R2, R3, R4;
	XMVECTOR OneMinusAbsV;
	XMVECTOR Rsq;
	XMVECTOR Result;
	static CONST XMVECTOR OnePlusEpsilon = { 1.00000011921f, 1.00000011921f, 1.00000011921f, 1.00000011921f };
	AbsV = XMVectorAbs(V);
	V2 = XMVectorMultiply(V, V);
	V3 = XMVectorMultiply(V2, AbsV);
	R4 = XMVectorNegativeMultiplySubtract(AbsV, V, V);
	OneMinusAbsV = XMVectorSubtract(OnePlusEpsilon, AbsV);
	Rsq = XMVectorReciprocalSqrt(OneMinusAbsV);
	C0 = XMVectorSplatX(g_XMASinCoefficients0.v);
	C1 = XMVectorSplatY(g_XMASinCoefficients0.v);
	C2 = XMVectorSplatZ(g_XMASinCoefficients0.v);
	C3 = XMVectorSplatW(g_XMASinCoefficients0.v);
	C4 = XMVectorSplatX(g_XMASinCoefficients1.v);
	C5 = XMVectorSplatY(g_XMASinCoefficients1.v);
	C6 = XMVectorSplatZ(g_XMASinCoefficients1.v);
	C7 = XMVectorSplatW(g_XMASinCoefficients1.v);
	C8 = XMVectorSplatX(g_XMASinCoefficients2.v);
	C9 = XMVectorSplatY(g_XMASinCoefficients2.v);
	C10 = XMVectorSplatZ(g_XMASinCoefficients2.v);
	C11 = XMVectorSplatW(g_XMASinCoefficients2.v);
	R0 = XMVectorMultiplyAdd(C3, AbsV, C7);
	R1 = XMVectorMultiplyAdd(C1, AbsV, C5);
	R2 = XMVectorMultiplyAdd(C2, AbsV, C6);
	R3 = XMVectorMultiplyAdd(C0, AbsV, C4);
	R0 = XMVectorMultiplyAdd(R0, AbsV, C11);
	R1 = XMVectorMultiplyAdd(R1, AbsV, C9);
	R2 = XMVectorMultiplyAdd(R2, AbsV, C10);
	R3 = XMVectorMultiplyAdd(R3, AbsV, C8);
	R0 = XMVectorMultiplyAdd(R2, V3, R0);
	R1 = XMVectorMultiplyAdd(R3, V3, R1);
	R0 = XMVectorMultiply(V, R0);
	R1 = XMVectorMultiply(R4, R1);
	Result = XMVectorMultiplyAdd(R1, Rsq, R0);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	static CONST XMVECTORF32 OnePlusEpsilon = { 1.00000011921f, 1.00000011921f, 1.00000011921f, 1.00000011921f };
	XMVECTOR vAbsV = _mm_setzero_ps();
	vAbsV = _mm_sub_ps(vAbsV, V);
	vAbsV = _mm_max_ps(vAbsV, V);
	XMVECTOR R0 = vAbsV;
	XMVECTOR vConstants = _mm_load_ps1(&g_XMASinCoefficients0.f[3]);
	R0 = _mm_mul_ps(R0, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinCoefficients1.f[3]);
	R0 = _mm_add_ps(R0, vConstants);
	XMVECTOR R1 = vAbsV;
	vConstants = _mm_load_ps1(&g_XMASinCoefficients0.f[1]);
	R1 = _mm_mul_ps(R1, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinCoefficients1.f[1]);
	R1 = _mm_add_ps(R1, vConstants);
	XMVECTOR R2 = vAbsV;
	vConstants = _mm_load_ps1(&g_XMASinCoefficients0.f[2]);
	R2 = _mm_mul_ps(R2, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinCoefficients1.f[2]);
	R2 = _mm_add_ps(R2, vConstants);
	XMVECTOR R3 = vAbsV;
	vConstants = _mm_load_ps1(&g_XMASinCoefficients0.f[0]);
	R3 = _mm_mul_ps(R3, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinCoefficients1.f[0]);
	R3 = _mm_add_ps(R3, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinCoefficients2.f[3]);
	R0 = _mm_mul_ps(R0, vAbsV);
	R0 = _mm_add_ps(R0, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinCoefficients2.f[1]);
	R1 = _mm_mul_ps(R1, vAbsV);
	R1 = _mm_add_ps(R1, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinCoefficients2.f[2]);
	R2 = _mm_mul_ps(R2, vAbsV);
	R2 = _mm_add_ps(R2, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinCoefficients2.f[0]);
	R3 = _mm_mul_ps(R3, vAbsV);
	R3 = _mm_add_ps(R3, vConstants);
	vConstants = _mm_mul_ps(V, V);
	vConstants = _mm_mul_ps(vConstants, vAbsV);
	R2 = _mm_mul_ps(R2, vConstants);
	R3 = _mm_mul_ps(R3, vConstants);
	R0 = _mm_add_ps(R0, R2);
	R1 = _mm_add_ps(R1, R3);
	R0 = _mm_mul_ps(R0, V);
	vConstants = _mm_mul_ps(vAbsV, V);
	vConstants = _mm_sub_ps(V, vConstants);
	R1 = _mm_mul_ps(R1, vConstants);
	vConstants = _mm_sub_ps(CAST_M128(OnePlusEpsilon), vAbsV);
	vConstants = _mm_sqrt_ps(vConstants);
	R1 = _mm_div_ps(R1, vConstants);
	R0 = _mm_add_ps(R0, R1);
	return R0;
#else
#endif
}
XMINLINE XMVECTOR XMVectorACos(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V2, V3, AbsV;
	XMVECTOR C0, C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11;
	XMVECTOR R0, R1, R2, R3, R4;
	XMVECTOR OneMinusAbsV;
	XMVECTOR Rsq;
	XMVECTOR Result;
	static CONST XMVECTOR OnePlusEpsilon = { 1.00000011921f, 1.00000011921f, 1.00000011921f, 1.00000011921f };
	AbsV = XMVectorAbs(V);
	V2 = XMVectorMultiply(V, V);
	V3 = XMVectorMultiply(V2, AbsV);
	R4 = XMVectorNegativeMultiplySubtract(AbsV, V, V);
	OneMinusAbsV = XMVectorSubtract(OnePlusEpsilon, AbsV);
	Rsq = XMVectorReciprocalSqrt(OneMinusAbsV);
	C0 = XMVectorSplatX(g_XMASinCoefficients0.v);
	C1 = XMVectorSplatY(g_XMASinCoefficients0.v);
	C2 = XMVectorSplatZ(g_XMASinCoefficients0.v);
	C3 = XMVectorSplatW(g_XMASinCoefficients0.v);
	C4 = XMVectorSplatX(g_XMASinCoefficients1.v);
	C5 = XMVectorSplatY(g_XMASinCoefficients1.v);
	C6 = XMVectorSplatZ(g_XMASinCoefficients1.v);
	C7 = XMVectorSplatW(g_XMASinCoefficients1.v);
	C8 = XMVectorSplatX(g_XMASinCoefficients2.v);
	C9 = XMVectorSplatY(g_XMASinCoefficients2.v);
	C10 = XMVectorSplatZ(g_XMASinCoefficients2.v);
	C11 = XMVectorSplatW(g_XMASinCoefficients2.v);
	R0 = XMVectorMultiplyAdd(C3, AbsV, C7);
	R1 = XMVectorMultiplyAdd(C1, AbsV, C5);
	R2 = XMVectorMultiplyAdd(C2, AbsV, C6);
	R3 = XMVectorMultiplyAdd(C0, AbsV, C4);
	R0 = XMVectorMultiplyAdd(R0, AbsV, C11);
	R1 = XMVectorMultiplyAdd(R1, AbsV, C9);
	R2 = XMVectorMultiplyAdd(R2, AbsV, C10);
	R3 = XMVectorMultiplyAdd(R3, AbsV, C8);
	R0 = XMVectorMultiplyAdd(R2, V3, R0);
	R1 = XMVectorMultiplyAdd(R3, V3, R1);
	R0 = XMVectorMultiply(V, R0);
	R1 = XMVectorMultiply(R4, R1);
	Result = XMVectorMultiplyAdd(R1, Rsq, R0);
	Result = XMVectorSubtract(g_XMHalfPi.v, Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	static CONST XMVECTORF32 OnePlusEpsilon = { 1.00000011921f, 1.00000011921f, 1.00000011921f, 1.00000011921f };
	XMVECTOR vAbsV = _mm_setzero_ps();
	vAbsV = _mm_sub_ps(vAbsV, V);
	vAbsV = _mm_max_ps(vAbsV, V);
	XMVECTOR R0 = vAbsV;
	XMVECTOR vConstants = _mm_load_ps1(&g_XMASinCoefficients0.f[3]);
	R0 = _mm_mul_ps(R0, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinCoefficients1.f[3]);
	R0 = _mm_add_ps(R0, vConstants);
	R0 = _mm_mul_ps(R0, vAbsV);
	vConstants = _mm_load_ps1(&g_XMASinCoefficients2.f[3]);
	R0 = _mm_add_ps(R0, vConstants);
	XMVECTOR R1 = vAbsV;
	vConstants = _mm_load_ps1(&g_XMASinCoefficients0.f[1]);
	R1 = _mm_mul_ps(R1, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinCoefficients1.f[1]);
	R1 = _mm_add_ps(R1, vConstants);
	R1 = _mm_mul_ps(R1, vAbsV);
	vConstants = _mm_load_ps1(&g_XMASinCoefficients2.f[1]);
	R1 = _mm_add_ps(R1, vConstants);
	XMVECTOR R2 = vAbsV;
	vConstants = _mm_load_ps1(&g_XMASinCoefficients0.f[2]);
	R2 = _mm_mul_ps(R2, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinCoefficients1.f[2]);
	R2 = _mm_add_ps(R2, vConstants);
	R2 = _mm_mul_ps(R2, vAbsV);
	vConstants = _mm_load_ps1(&g_XMASinCoefficients2.f[2]);
	R2 = _mm_add_ps(R2, vConstants);
	XMVECTOR R3 = vAbsV;
	vConstants = _mm_load_ps1(&g_XMASinCoefficients0.f[0]);
	R3 = _mm_mul_ps(R3, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinCoefficients1.f[0]);
	R3 = _mm_add_ps(R3, vConstants);
	R3 = _mm_mul_ps(R3, vAbsV);
	vConstants = _mm_load_ps1(&g_XMASinCoefficients2.f[0]);
	R3 = _mm_add_ps(R3, vConstants);
	vConstants = _mm_mul_ps(V, V);
	vConstants = _mm_mul_ps(vConstants, vAbsV);
	R2 = _mm_mul_ps(R2, vConstants);
	R3 = _mm_mul_ps(R3, vConstants);
	R0 = _mm_add_ps(R0, R2);
	R1 = _mm_add_ps(R1, R3);
	R0 = _mm_mul_ps(R0, V);
	vConstants = _mm_mul_ps(V, vAbsV);
	vConstants = _mm_sub_ps(V, vConstants);
	R1 = _mm_mul_ps(R1, vConstants);
	vConstants = _mm_sub_ps(CAST_M128(OnePlusEpsilon), vAbsV);
	vConstants = _mm_sqrt_ps(vConstants);
	R1 = _mm_div_ps(R1, vConstants);
	R1 = _mm_add_ps(R1, R0);
	vConstants = _mm_sub_ps(CAST_M128(g_XMHalfPi), R1);
	return vConstants;
#else
#endif
}
XMINLINE XMVECTOR XMVectorATan(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR N, D;
	XMVECTOR VF, G, ReciprocalF, AbsF, FA, FB;
	XMVECTOR Sqrt3, Sqrt3MinusOne, TwoMinusSqrt3;
	XMVECTOR HalfPi, OneThirdPi, OneSixthPi, Epsilon, MinV, MaxV;
	XMVECTOR Zero;
	XMVECTOR NegativeHalfPi;
	XMVECTOR Angle1, Angle2;
	XMVECTOR F_GT_One, F_GT_TwoMinusSqrt3, AbsF_LT_Epsilon, V_LT_Zero, V_GT_MaxV, V_LT_MinV;
	XMVECTOR NegativeResult, Result;
	XMVECTOR P0, P1, P2, P3, Q0, Q1, Q2, Q3;
	static CONST XMVECTOR ATanConstants0 = { -1.3688768894e+1f, -2.0505855195e+1f, -8.4946240351f, -8.3758299368e-1f };
	static CONST XMVECTOR ATanConstants1 = { 4.1066306682e+1f, 8.6157349597e+1f, 5.9578436142e+1f, 1.5024001160e+1f };
	static CONST XMVECTOR ATanConstants2 = { 1.732050808f, 7.320508076e-1f, 2.679491924e-1f, 0.000244140625f };
	static CONST XMVECTOR ATanConstants3 = { XM_PIDIV2, XM_PI / 3.0f, XM_PI / 6.0f, 8.507059173e+37f };
	Zero = XMVectorZero();
	P0 = XMVectorSplatX(ATanConstants0);
	P1 = XMVectorSplatY(ATanConstants0);
	P2 = XMVectorSplatZ(ATanConstants0);
	P3 = XMVectorSplatW(ATanConstants0);
	Q0 = XMVectorSplatX(ATanConstants1);
	Q1 = XMVectorSplatY(ATanConstants1);
	Q2 = XMVectorSplatZ(ATanConstants1);
	Q3 = XMVectorSplatW(ATanConstants1);
	Sqrt3 = XMVectorSplatX(ATanConstants2);
	Sqrt3MinusOne = XMVectorSplatY(ATanConstants2);
	TwoMinusSqrt3 = XMVectorSplatZ(ATanConstants2);
	Epsilon = XMVectorSplatW(ATanConstants2);
	HalfPi = XMVectorSplatX(ATanConstants3);
	OneThirdPi = XMVectorSplatY(ATanConstants3);
	OneSixthPi = XMVectorSplatZ(ATanConstants3);
	MaxV = XMVectorSplatW(ATanConstants3);
	VF = XMVectorAbs(V);
	ReciprocalF = XMVectorReciprocal(VF);
	F_GT_One = XMVectorGreater(VF, g_XMOne.v);
	VF = XMVectorSelect(VF, ReciprocalF, F_GT_One);
	Angle1 = XMVectorSelect(Zero, HalfPi, F_GT_One);
	Angle2 = XMVectorSelect(OneSixthPi, OneThirdPi, F_GT_One);
	F_GT_TwoMinusSqrt3 = XMVectorGreater(VF, TwoMinusSqrt3);
	FA = XMVectorMultiplyAdd(Sqrt3MinusOne, VF, VF);
	FA = XMVectorAdd(FA, g_XMNegativeOne.v);
	FB = XMVectorAdd(VF, Sqrt3);
	FB = XMVectorReciprocal(FB);
	FA = XMVectorMultiply(FA, FB);
	VF = XMVectorSelect(VF, FA, F_GT_TwoMinusSqrt3);
	Angle1 = XMVectorSelect(Angle1, Angle2, F_GT_TwoMinusSqrt3);
	AbsF = XMVectorAbs(VF);
	AbsF_LT_Epsilon = XMVectorLess(AbsF, Epsilon);
	G = XMVectorMultiply(VF, VF);
	D = XMVectorAdd(G, Q3);
	D = XMVectorMultiplyAdd(D, G, Q2);
	D = XMVectorMultiplyAdd(D, G, Q1);
	D = XMVectorMultiplyAdd(D, G, Q0);
	D = XMVectorReciprocal(D);
	N = XMVectorMultiplyAdd(P3, G, P2);
	N = XMVectorMultiplyAdd(N, G, P1);
	N = XMVectorMultiplyAdd(N, G, P0);
	N = XMVectorMultiply(N, G);
	Result = XMVectorMultiply(N, D);
	Result = XMVectorMultiplyAdd(Result, VF, VF);
	Result = XMVectorSelect(Result, VF, AbsF_LT_Epsilon);
	NegativeResult = XMVectorNegate(Result);
	Result = XMVectorSelect(Result, NegativeResult, F_GT_One);
	Result = XMVectorAdd(Result, Angle1);
	V_LT_Zero = XMVectorLess(V, Zero);
	NegativeResult = XMVectorNegate(Result);
	Result = XMVectorSelect(Result, NegativeResult, V_LT_Zero);
	MinV = XMVectorNegate(MaxV);
	NegativeHalfPi = XMVectorNegate(HalfPi);
	V_GT_MaxV = XMVectorGreater(V, MaxV);
	V_LT_MinV = XMVectorLess(V, MinV);
	Result = XMVectorSelect(Result, g_XMHalfPi.v, V_GT_MaxV);
	Result = XMVectorSelect(Result, NegativeHalfPi, V_LT_MinV);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	static CONST XMVECTORF32 ATanConstants0 = { -1.3688768894e+1f, -2.0505855195e+1f, -8.4946240351f, -8.3758299368e-1f };
	static CONST XMVECTORF32 ATanConstants1 = { 4.1066306682e+1f, 8.6157349597e+1f, 5.9578436142e+1f, 1.5024001160e+1f };
	static CONST XMVECTORF32 ATanConstants2 = { 1.732050808f, 7.320508076e-1f, 2.679491924e-1f, 0.000244140625f };
	static CONST XMVECTORF32 ATanConstants3 = { XM_PIDIV2, XM_PI / 3.0f, XM_PI / 6.0f, 8.507059173e+37f };
	XMVECTOR VF = XMVectorAbs(V);
	XMVECTOR F_GT_One = _mm_cmpgt_ps(VF, CAST_M128(g_XMOne));
	XMVECTOR ReciprocalF = XMVectorReciprocal(VF);
	VF = XMVectorSelect(VF, ReciprocalF, F_GT_One);
	XMVECTOR Zero = XMVectorZero();
	XMVECTOR HalfPi = _mm_load_ps1(&ATanConstants3.f[0]);
	XMVECTOR Angle1 = XMVectorSelect(Zero, HalfPi, F_GT_One);
	XMVECTOR vConstants = _mm_load_ps1(&ATanConstants3.f[1]);
	XMVECTOR Angle2 = _mm_load_ps1(&ATanConstants3.f[2]);
	Angle2 = XMVectorSelect(Angle2, vConstants, F_GT_One);
	XMVECTOR FA = _mm_load_ps1(&ATanConstants2.f[1]);
	FA = _mm_mul_ps(FA, VF);
	FA = _mm_add_ps(FA, VF);
	FA = _mm_add_ps(FA, CAST_M128(g_XMNegativeOne));
	vConstants = _mm_load_ps1(&ATanConstants2.f[0]);
	vConstants = _mm_add_ps(vConstants, VF);
	FA = _mm_div_ps(FA, vConstants);
	vConstants = _mm_load_ps1(&ATanConstants2.f[2]);
	vConstants = _mm_cmpgt_ps(VF, vConstants);
	VF = XMVectorSelect(VF, FA, vConstants);
	Angle1 = XMVectorSelect(Angle1, Angle2, vConstants);
	XMVECTOR AbsF = XMVectorAbs(VF);
	XMVECTOR G = _mm_mul_ps(VF, VF);
	XMVECTOR D = _mm_load_ps1(&ATanConstants1.f[3]);
	D = _mm_add_ps(D, G);
	D = _mm_mul_ps(D, G);
	vConstants = _mm_load_ps1(&ATanConstants1.f[2]);
	D = _mm_add_ps(D, vConstants);
	D = _mm_mul_ps(D, G);
	vConstants = _mm_load_ps1(&ATanConstants1.f[1]);
	D = _mm_add_ps(D, vConstants);
	D = _mm_mul_ps(D, G);
	vConstants = _mm_load_ps1(&ATanConstants1.f[0]);
	D = _mm_add_ps(D, vConstants);
	XMVECTOR N = _mm_load_ps1(&ATanConstants0.f[3]);
	N = _mm_mul_ps(N, G);
	vConstants = _mm_load_ps1(&ATanConstants0.f[2]);
	N = _mm_add_ps(N, vConstants);
	N = _mm_mul_ps(N, G);
	vConstants = _mm_load_ps1(&ATanConstants0.f[1]);
	N = _mm_add_ps(N, vConstants);
	N = _mm_mul_ps(N, G);
	vConstants = _mm_load_ps1(&ATanConstants0.f[0]);
	N = _mm_add_ps(N, vConstants);
	N = _mm_mul_ps(N, G);
	XMVECTOR Result = _mm_div_ps(N, D);
	Result = _mm_mul_ps(Result, VF);
	Result = _mm_add_ps(Result, VF);
	vConstants = _mm_load_ps1(&ATanConstants2.f[3]);
	vConstants = _mm_cmpge_ps(vConstants, AbsF);
	Result = XMVectorSelect(Result, VF, vConstants);
	XMVECTOR NegativeResult = _mm_mul_ps(Result, CAST_M128(g_XMNegativeOne));
	Result = XMVectorSelect(Result, NegativeResult, F_GT_One);
	Result = _mm_add_ps(Result, Angle1);
	Zero = _mm_cmpge_ps(Zero, V);
	NegativeResult = _mm_mul_ps(Result, CAST_M128(g_XMNegativeOne));
	Result = XMVectorSelect(Result, NegativeResult, Zero);
	XMVECTOR MaxV = _mm_load_ps1(&ATanConstants3.f[3]);
	XMVECTOR MinV = _mm_mul_ps(MaxV, CAST_M128(g_XMNegativeOne));
	HalfPi = _mm_mul_ps(HalfPi, CAST_M128(g_XMNegativeOne));
	MaxV = _mm_cmple_ps(MaxV, V);
	MinV = _mm_cmpge_ps(MinV, V);
	Result = XMVectorSelect(Result, CAST_M128(g_XMHalfPi), MaxV);
	Result = XMVectorSelect(Result, HalfPi, MinV);
	return Result;
#else
#endif
}
XMINLINE XMVECTOR XMVectorATan2(FXMVECTOR Y, FXMVECTOR X)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Reciprocal;
	XMVECTOR V;
	XMVECTOR YSign;
	XMVECTOR Pi, PiOverTwo, PiOverFour, ThreePiOverFour;
	XMVECTOR YEqualsZero, XEqualsZero, XIsPositive, YEqualsInfinity, XEqualsInfinity;
	XMVECTOR ATanResultValid;
	XMVECTOR R0, R1, R2, R3, R4, R5;
	XMVECTOR Zero;
	XMVECTOR Result;
	static CONST XMVECTOR ATan2Constants = { XM_PI, XM_PIDIV2, XM_PIDIV4, XM_PI * 3.0f / 4.0f };
	Zero = XMVectorZero();
	ATanResultValid = XMVectorTrueInt();
	Pi = XMVectorSplatX(ATan2Constants);
	PiOverTwo = XMVectorSplatY(ATan2Constants);
	PiOverFour = XMVectorSplatZ(ATan2Constants);
	ThreePiOverFour = XMVectorSplatW(ATan2Constants);
	YEqualsZero = XMVectorEqual(Y, Zero);
	XEqualsZero = XMVectorEqual(X, Zero);
	XIsPositive = XMVectorAndInt(X, g_XMNegativeZero.v);
	XIsPositive = XMVectorEqualInt(XIsPositive, Zero);
	YEqualsInfinity = XMVectorIsInfinite(Y);
	XEqualsInfinity = XMVectorIsInfinite(X);
	YSign = XMVectorAndInt(Y, g_XMNegativeZero.v);
	Pi = XMVectorOrInt(Pi, YSign);
	PiOverTwo = XMVectorOrInt(PiOverTwo, YSign);
	PiOverFour = XMVectorOrInt(PiOverFour, YSign);
	ThreePiOverFour = XMVectorOrInt(ThreePiOverFour, YSign);
	R1 = XMVectorSelect(Pi, YSign, XIsPositive);
	R2 = XMVectorSelect(ATanResultValid, PiOverTwo, XEqualsZero);
	R3 = XMVectorSelect(R2, R1, YEqualsZero);
	R4 = XMVectorSelect(ThreePiOverFour, PiOverFour, XIsPositive);
	R5 = XMVectorSelect(PiOverTwo, R4, XEqualsInfinity);
	Result = XMVectorSelect(R3, R5, YEqualsInfinity);
	ATanResultValid = XMVectorEqualInt(Result, ATanResultValid);
	Reciprocal = XMVectorReciprocal(X);
	V = XMVectorMultiply(Y, Reciprocal);
	R0 = XMVectorATan(V);
	R1 = XMVectorSelect(Pi, Zero, XIsPositive);
	R2 = XMVectorAdd(R0, R1);
	Result = XMVectorSelect(Result, R2, ATanResultValid);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	static CONST XMVECTORF32 ATan2Constants = { XM_PI, XM_PIDIV2, XM_PIDIV4, XM_PI * 3.0f / 4.0f };
	XMVECTOR YEqualsInfinity = XMVectorIsInfinite(Y);
	XMVECTOR YSign = _mm_and_ps(Y, CAST_M128(g_XMNegativeZero));
	XMVECTOR XIsPositive = _mm_and_ps(X, CAST_M128(g_XMNegativeZero));
	XIsPositive = XMVectorEqualInt(XIsPositive, CAST_M128(g_XMZero));
	XMVECTOR Pi = _mm_load_ps1(&ATan2Constants.f[0]);
	Pi = _mm_or_ps(Pi, YSign);
	XMVECTOR R1 = XMVectorSelect(Pi, YSign, XIsPositive);
	XMVECTOR vConstants = _mm_cmpeq_ps(X, CAST_M128(g_XMZero));
	XMVECTOR PiOverTwo = _mm_load_ps1(&ATan2Constants.f[1]);
	PiOverTwo = _mm_or_ps(PiOverTwo, YSign);
	XMVECTOR R2 = XMVectorSelect(CAST_M128(g_XMNegOneMask), PiOverTwo, vConstants);
	vConstants = _mm_cmpeq_ps(Y, CAST_M128(g_XMZero));
	R2 = XMVectorSelect(R2, R1, vConstants);
	XMVECTOR PiOverFour = _mm_load_ps1(&ATan2Constants.f[2]);
	PiOverFour = _mm_or_ps(PiOverFour, YSign);
	XMVECTOR ThreePiOverFour = _mm_load_ps1(&ATan2Constants.f[3]);
	ThreePiOverFour = _mm_or_ps(ThreePiOverFour, YSign);
	vConstants = XMVectorSelect(ThreePiOverFour, PiOverFour, XIsPositive);
	XMVECTOR XEqualsInfinity = XMVectorIsInfinite(X);
	vConstants = XMVectorSelect(PiOverTwo, vConstants, XEqualsInfinity);
	XMVECTOR vResult = XMVectorSelect(R2, vConstants, YEqualsInfinity);
	vConstants = XMVectorSelect(R1, vResult, YEqualsInfinity);
	vResult = XMVectorSelect(vResult, vConstants, XEqualsInfinity);
	XMVECTOR ATanResultValid = XMVectorEqualInt(vResult, CAST_M128(g_XMNegOneMask));
	vConstants = _mm_div_ps(Y, X);
	vConstants = XMVectorATan(vConstants);
	XMVECTOR R3 = XMVectorSelect(Pi, CAST_M128(g_XMZero), XIsPositive);
	vConstants = _mm_add_ps(vConstants, R3);
	vResult = XMVectorSelect(vResult, vConstants, ATanResultValid);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSinEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V2, V3, V5, V7;
	XMVECTOR S1, S2, S3;
	XMVECTOR Result;
	V2 = XMVectorMultiply(V, V);
	V3 = XMVectorMultiply(V2, V);
	V5 = XMVectorMultiply(V3, V2);
	V7 = XMVectorMultiply(V5, V2);
	S1 = XMVectorSplatY(g_XMSinEstCoefficients.v);
	S2 = XMVectorSplatZ(g_XMSinEstCoefficients.v);
	S3 = XMVectorSplatW(g_XMSinEstCoefficients.v);
	Result = XMVectorMultiplyAdd(S1, V3, V);
	Result = XMVectorMultiplyAdd(S2, V5, Result);
	Result = XMVectorMultiplyAdd(S3, V7, Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR V2 = _mm_mul_ps(V, V);
	XMVECTOR V3 = _mm_mul_ps(V2, V);
	XMVECTOR vResult = _mm_load_ps1(&g_XMSinEstCoefficients.f[1]);
	vResult = _mm_mul_ps(vResult, V3);
	vResult = _mm_add_ps(vResult, V);
	XMVECTOR vConstants = _mm_load_ps1(&g_XMSinEstCoefficients.f[2]);
	V3 = _mm_mul_ps(V3, V2);
	vConstants = _mm_mul_ps(vConstants, V3);
	vResult = _mm_add_ps(vResult, vConstants);
	vConstants = _mm_load_ps1(&g_XMSinEstCoefficients.f[3]);
	V3 = _mm_mul_ps(V3, V2);
	vConstants = _mm_mul_ps(vConstants, V3);
	vResult = _mm_add_ps(vResult, vConstants);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorCosEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V2, V4, V6;
	XMVECTOR C0, C1, C2, C3;
	XMVECTOR Result;
	V2 = XMVectorMultiply(V, V);
	V4 = XMVectorMultiply(V2, V2);
	V6 = XMVectorMultiply(V4, V2);
	C0 = XMVectorSplatX(g_XMCosEstCoefficients.v);
	C1 = XMVectorSplatY(g_XMCosEstCoefficients.v);
	C2 = XMVectorSplatZ(g_XMCosEstCoefficients.v);
	C3 = XMVectorSplatW(g_XMCosEstCoefficients.v);
	Result = XMVectorMultiplyAdd(C1, V2, C0);
	Result = XMVectorMultiplyAdd(C2, V4, Result);
	Result = XMVectorMultiplyAdd(C3, V6, Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR V2 = _mm_mul_ps(V, V);
	XMVECTOR vResult = _mm_load_ps1(&g_XMCosEstCoefficients.f[1]);
	vResult = _mm_mul_ps(vResult, V2);
	XMVECTOR vConstants = _mm_load_ps1(&g_XMCosEstCoefficients.f[0]);
	vResult = _mm_add_ps(vResult, vConstants);
	vConstants = _mm_load_ps1(&g_XMCosEstCoefficients.f[2]);
	XMVECTOR V4 = _mm_mul_ps(V2, V2);
	vConstants = _mm_mul_ps(vConstants, V4);
	vResult = _mm_add_ps(vResult, vConstants);
	vConstants = _mm_load_ps1(&g_XMCosEstCoefficients.f[3]);
	V4 = _mm_mul_ps(V4, V2);
	vConstants = _mm_mul_ps(vConstants, V4);
	vResult = _mm_add_ps(vResult, vConstants);
	return vResult;
#else
#endif
}
XMFINLINE VOID XMVectorSinCosEst(XMVECTOR *pSin, XMVECTOR *pCos, FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V2, V3, V4, V5, V6, V7;
	XMVECTOR S1, S2, S3;
	XMVECTOR C0, C1, C2, C3;
	XMVECTOR Sin, Cos;
	XMASSERT(pSin);
	XMASSERT(pCos);
	V2 = XMVectorMultiply(V, V);
	V3 = XMVectorMultiply(V2, V);
	V4 = XMVectorMultiply(V2, V2);
	V5 = XMVectorMultiply(V3, V2);
	V6 = XMVectorMultiply(V3, V3);
	V7 = XMVectorMultiply(V4, V3);
	S1 = XMVectorSplatY(g_XMSinEstCoefficients.v);
	S2 = XMVectorSplatZ(g_XMSinEstCoefficients.v);
	S3 = XMVectorSplatW(g_XMSinEstCoefficients.v);
	C0 = XMVectorSplatX(g_XMCosEstCoefficients.v);
	C1 = XMVectorSplatY(g_XMCosEstCoefficients.v);
	C2 = XMVectorSplatZ(g_XMCosEstCoefficients.v);
	C3 = XMVectorSplatW(g_XMCosEstCoefficients.v);
	Sin = XMVectorMultiplyAdd(S1, V3, V);
	Sin = XMVectorMultiplyAdd(S2, V5, Sin);
	Sin = XMVectorMultiplyAdd(S3, V7, Sin);
	Cos = XMVectorMultiplyAdd(C1, V2, C0);
	Cos = XMVectorMultiplyAdd(C2, V4, Cos);
	Cos = XMVectorMultiplyAdd(C3, V6, Cos);
	*pSin = Sin;
	*pCos = Cos;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pSin);
	XMASSERT(pCos);
	XMVECTOR V2, V3, V4, V5, V6, V7;
	XMVECTOR S1, S2, S3;
	XMVECTOR C0, C1, C2, C3;
	XMVECTOR Sin, Cos;
	V2 = XMVectorMultiply(V, V);
	V3 = XMVectorMultiply(V2, V);
	V4 = XMVectorMultiply(V2, V2);
	V5 = XMVectorMultiply(V3, V2);
	V6 = XMVectorMultiply(V3, V3);
	V7 = XMVectorMultiply(V4, V3);
	S1 = _mm_load_ps1(&g_XMSinEstCoefficients.f[1]);
	S2 = _mm_load_ps1(&g_XMSinEstCoefficients.f[2]);
	S3 = _mm_load_ps1(&g_XMSinEstCoefficients.f[3]);
	C0 = _mm_load_ps1(&g_XMCosEstCoefficients.f[0]);
	C1 = _mm_load_ps1(&g_XMCosEstCoefficients.f[1]);
	C2 = _mm_load_ps1(&g_XMCosEstCoefficients.f[2]);
	C3 = _mm_load_ps1(&g_XMCosEstCoefficients.f[3]);
	Sin = XMVectorMultiplyAdd(S1, V3, V);
	Sin = XMVectorMultiplyAdd(S2, V5, Sin);
	Sin = XMVectorMultiplyAdd(S3, V7, Sin);
	Cos = XMVectorMultiplyAdd(C1, V2, C0);
	Cos = XMVectorMultiplyAdd(C2, V4, Cos);
	Cos = XMVectorMultiplyAdd(C3, V6, Cos);
	*pSin = Sin;
	*pCos = Cos;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorTanEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V1, V2, V1T0, V1T1, V2T2;
	XMVECTOR T0, T1, T2;
	XMVECTOR N, D;
	XMVECTOR OneOverPi;
	XMVECTOR Result;
	OneOverPi = XMVectorSplatW(g_XMTanEstCoefficients.v);
	V1 = XMVectorMultiply(V, OneOverPi);
	V1 = XMVectorRound(V1);
	V1 = XMVectorNegativeMultiplySubtract(g_XMPi.v, V1, V);
	T0 = XMVectorSplatX(g_XMTanEstCoefficients.v);
	T1 = XMVectorSplatY(g_XMTanEstCoefficients.v);
	T2 = XMVectorSplatZ(g_XMTanEstCoefficients.v);
	V2T2 = XMVectorNegativeMultiplySubtract(V1, V1, T2);
	V2 = XMVectorMultiply(V1, V1);
	V1T0 = XMVectorMultiply(V1, T0);
	V1T1 = XMVectorMultiply(V1, T1);
	D = XMVectorReciprocalEst(V2T2);
	N = XMVectorMultiplyAdd(V2, V1T1, V1T0);
	Result = XMVectorMultiply(N, D);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR V1, V2, V1T0, V1T1, V2T2;
	XMVECTOR T0, T1, T2;
	XMVECTOR N, D;
	XMVECTOR OneOverPi;
	XMVECTOR Result;
	OneOverPi = XMVectorSplatW(CAST_M128(g_XMTanEstCoefficients));
	V1 = XMVectorMultiply(V, OneOverPi);
	V1 = XMVectorRound(V1);
	V1 = XMVectorNegativeMultiplySubtract(CAST_M128(g_XMPi), V1, V);
	T0 = XMVectorSplatX(CAST_M128(g_XMTanEstCoefficients));
	T1 = XMVectorSplatY(CAST_M128(g_XMTanEstCoefficients));
	T2 = XMVectorSplatZ(CAST_M128(g_XMTanEstCoefficients));
	V2T2 = XMVectorNegativeMultiplySubtract(V1, V1, T2);
	V2 = XMVectorMultiply(V1, V1);
	V1T0 = XMVectorMultiply(V1, T0);
	V1T1 = XMVectorMultiply(V1, T1);
	D = XMVectorReciprocalEst(V2T2);
	N = XMVectorMultiplyAdd(V2, V1T1, V1T0);
	Result = XMVectorMultiply(N, D);
	return Result;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorSinHEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V1, V2;
	XMVECTOR E1, E2;
	XMVECTOR Result;
	static CONST XMVECTORF32 Scale = { 1.442695040888963f, 1.442695040888963f, 1.442695040888963f, 1.442695040888963f };
	V1 = XMVectorMultiplyAdd(V, Scale.v, g_XMNegativeOne.v);
	V2 = XMVectorNegativeMultiplySubtract(V, Scale.v, g_XMNegativeOne.v);
	E1 = XMVectorExpEst(V1);
	E2 = XMVectorExpEst(V2);
	Result = XMVectorSubtract(E1, E2);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR V1, V2;
	XMVECTOR E1, E2;
	XMVECTOR Result;
	static CONST XMVECTORF32 Scale = { 1.442695040888963f, 1.442695040888963f, 1.442695040888963f, 1.442695040888963f };
	V1 = _mm_mul_ps(V, CAST_M128(Scale));
	V1 = _mm_add_ps(V1, CAST_M128(g_XMNegativeOne));
	V2 = _mm_mul_ps(V, CAST_M128(Scale));
	V2 = _mm_sub_ps(CAST_M128(g_XMNegativeOne), V2);
	E1 = XMVectorExpEst(V1);
	E2 = XMVectorExpEst(V2);
	Result = _mm_sub_ps(E1, E2);
	return Result;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorCosHEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V1, V2;
	XMVECTOR E1, E2;
	XMVECTOR Result;
	static CONST XMVECTOR Scale = { 1.442695040888963f, 1.442695040888963f, 1.442695040888963f, 1.442695040888963f };
	V1 = XMVectorMultiplyAdd(V, Scale, g_XMNegativeOne.v);
	V2 = XMVectorNegativeMultiplySubtract(V, Scale, g_XMNegativeOne.v);
	E1 = XMVectorExpEst(V1);
	E2 = XMVectorExpEst(V2);
	Result = XMVectorAdd(E1, E2);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR V1, V2;
	XMVECTOR E1, E2;
	XMVECTOR Result;
	static CONST XMVECTORF32 Scale = { 1.442695040888963f, 1.442695040888963f, 1.442695040888963f, 1.442695040888963f };
	V1 = _mm_mul_ps(V, CAST_M128(Scale));
	V1 = _mm_add_ps(V1, CAST_M128(g_XMNegativeOne));
	V2 = _mm_mul_ps(V, CAST_M128(Scale));
	V2 = _mm_sub_ps(CAST_M128(g_XMNegativeOne), V2);
	E1 = XMVectorExpEst(V1);
	E2 = XMVectorExpEst(V2);
	Result = _mm_add_ps(E1, E2);
	return Result;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorTanHEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR E;
	XMVECTOR Result;
	static CONST XMVECTOR Scale = { 2.8853900817779268f, 2.8853900817779268f, 2.8853900817779268f, 2.8853900817779268f };
	E = XMVectorMultiply(V, Scale);
	E = XMVectorExpEst(E);
	E = XMVectorMultiplyAdd(E, g_XMOneHalf.v, g_XMOneHalf.v);
	E = XMVectorReciprocalEst(E);
	Result = XMVectorSubtract(g_XMOne.v, E);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	static CONST XMVECTORF32 Scale = { 2.8853900817779268f, 2.8853900817779268f, 2.8853900817779268f, 2.8853900817779268f };
	XMVECTOR E = _mm_mul_ps(V, CAST_M128(Scale));
	E = XMVectorExpEst(E);
	E = _mm_mul_ps(E, CAST_M128(g_XMOneHalf));
	E = _mm_add_ps(E, CAST_M128(g_XMOneHalf));
	E = XMVectorReciprocalEst(E);
	E = _mm_sub_ps(CAST_M128(g_XMOne), E);
	return E;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorASinEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR AbsV, V2, VD, VC0, V2C3;
	XMVECTOR C0, C1, C2, C3;
	XMVECTOR D, Rsq, SqrtD;
	XMVECTOR OnePlusEps;
	XMVECTOR Result;
	AbsV = XMVectorAbs(V);
	OnePlusEps = XMVectorSplatX(g_XMASinEstConstants.v);
	C0 = XMVectorSplatX(g_XMASinEstCoefficients.v);
	C1 = XMVectorSplatY(g_XMASinEstCoefficients.v);
	C2 = XMVectorSplatZ(g_XMASinEstCoefficients.v);
	C3 = XMVectorSplatW(g_XMASinEstCoefficients.v);
	D = XMVectorSubtract(OnePlusEps, AbsV);
	Rsq = XMVectorReciprocalSqrtEst(D);
	SqrtD = XMVectorMultiply(D, Rsq);
	V2 = XMVectorMultiply(V, AbsV);
	V2C3 = XMVectorMultiply(V2, C3);
	VD = XMVectorMultiply(D, AbsV);
	VC0 = XMVectorMultiply(V, C0);
	Result = XMVectorMultiply(V, C1);
	Result = XMVectorMultiplyAdd(V2, C2, Result);
	Result = XMVectorMultiplyAdd(V2C3, VD, Result);
	Result = XMVectorMultiplyAdd(VC0, SqrtD, Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vAbsV = _mm_setzero_ps();
	vAbsV = _mm_sub_ps(vAbsV, V);
	vAbsV = _mm_max_ps(vAbsV, V);
	XMVECTOR D = _mm_load_ps1(&g_XMASinEstConstants.f[0]);
	D = _mm_sub_ps(D, vAbsV);
	XMVECTOR vConstants = _mm_rsqrt_ps(D);
	XMVECTOR SqrtD = _mm_mul_ps(D, vConstants);
	XMVECTOR V2 = _mm_mul_ps(V, vAbsV);
	D = _mm_mul_ps(D, vAbsV);
	XMVECTOR vResult = _mm_load_ps1(&g_XMASinEstCoefficients.f[1]);
	vResult = _mm_mul_ps(vResult, V);
	vConstants = _mm_load_ps1(&g_XMASinEstCoefficients.f[2]);
	vConstants = _mm_mul_ps(vConstants, V2);
	vResult = _mm_add_ps(vResult, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinEstCoefficients.f[3]);
	vConstants = _mm_mul_ps(vConstants, V2);
	vConstants = _mm_mul_ps(vConstants, D);
	vResult = _mm_add_ps(vResult, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinEstCoefficients.f[0]);
	vConstants = _mm_mul_ps(vConstants, V);
	vConstants = _mm_mul_ps(vConstants, SqrtD);
	vResult = _mm_add_ps(vResult, vConstants);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorACosEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR AbsV, V2, VD, VC0, V2C3;
	XMVECTOR C0, C1, C2, C3;
	XMVECTOR D, Rsq, SqrtD;
	XMVECTOR OnePlusEps, HalfPi;
	XMVECTOR Result;
	AbsV = XMVectorAbs(V);
	OnePlusEps = XMVectorSplatX(g_XMASinEstConstants.v);
	HalfPi = XMVectorSplatY(g_XMASinEstConstants.v);
	C0 = XMVectorSplatX(g_XMASinEstCoefficients.v);
	C1 = XMVectorSplatY(g_XMASinEstCoefficients.v);
	C2 = XMVectorSplatZ(g_XMASinEstCoefficients.v);
	C3 = XMVectorSplatW(g_XMASinEstCoefficients.v);
	D = XMVectorSubtract(OnePlusEps, AbsV);
	Rsq = XMVectorReciprocalSqrtEst(D);
	SqrtD = XMVectorMultiply(D, Rsq);
	V2 = XMVectorMultiply(V, AbsV);
	V2C3 = XMVectorMultiply(V2, C3);
	VD = XMVectorMultiply(D, AbsV);
	VC0 = XMVectorMultiply(V, C0);
	Result = XMVectorMultiply(V, C1);
	Result = XMVectorMultiplyAdd(V2, C2, Result);
	Result = XMVectorMultiplyAdd(V2C3, VD, Result);
	Result = XMVectorMultiplyAdd(VC0, SqrtD, Result);
	Result = XMVectorSubtract(HalfPi, Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vAbsV = _mm_setzero_ps();
	vAbsV = _mm_sub_ps(vAbsV, V);
	vAbsV = _mm_max_ps(vAbsV, V);
	XMVECTOR D = _mm_load_ps1(&g_XMASinEstConstants.f[0]);
	D = _mm_sub_ps(D, vAbsV);
	XMVECTOR vConstants = _mm_rsqrt_ps(D);
	XMVECTOR SqrtD = _mm_mul_ps(D, vConstants);
	XMVECTOR V2 = _mm_mul_ps(V, vAbsV);
	D = _mm_mul_ps(D, vAbsV);
	XMVECTOR vResult = _mm_load_ps1(&g_XMASinEstCoefficients.f[1]);
	vResult = _mm_mul_ps(vResult, V);
	vConstants = _mm_load_ps1(&g_XMASinEstCoefficients.f[2]);
	vConstants = _mm_mul_ps(vConstants, V2);
	vResult = _mm_add_ps(vResult, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinEstCoefficients.f[3]);
	vConstants = _mm_mul_ps(vConstants, V2);
	vConstants = _mm_mul_ps(vConstants, D);
	vResult = _mm_add_ps(vResult, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinEstCoefficients.f[0]);
	vConstants = _mm_mul_ps(vConstants, V);
	vConstants = _mm_mul_ps(vConstants, SqrtD);
	vResult = _mm_add_ps(vResult, vConstants);
	vConstants = _mm_load_ps1(&g_XMASinEstConstants.f[1]);
	vResult = _mm_sub_ps(vConstants, vResult);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorATanEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR AbsV, V2S2, N, D;
	XMVECTOR S0, S1, S2;
	XMVECTOR HalfPi;
	XMVECTOR Result;
	S0 = XMVectorSplatX(g_XMATanEstCoefficients.v);
	S1 = XMVectorSplatY(g_XMATanEstCoefficients.v);
	S2 = XMVectorSplatZ(g_XMATanEstCoefficients.v);
	HalfPi = XMVectorSplatW(g_XMATanEstCoefficients.v);
	AbsV = XMVectorAbs(V);
	V2S2 = XMVectorMultiplyAdd(V, V, S2);
	N = XMVectorMultiplyAdd(AbsV, HalfPi, S0);
	D = XMVectorMultiplyAdd(AbsV, S1, V2S2);
	N = XMVectorMultiply(N, V);
	D = XMVectorReciprocalEst(D);
	Result = XMVectorMultiply(N, D);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vAbsV = _mm_setzero_ps();
	vAbsV = _mm_sub_ps(vAbsV, V);
	vAbsV = _mm_max_ps(vAbsV, V);
	XMVECTOR vResult = _mm_load_ps1(&g_XMATanEstCoefficients.f[3]);
	vResult = _mm_mul_ps(vResult, vAbsV);
	XMVECTOR vConstants = _mm_load_ps1(&g_XMATanEstCoefficients.f[0]);
	vResult = _mm_add_ps(vResult, vConstants);
	vResult = _mm_mul_ps(vResult, V);
	XMVECTOR D = _mm_mul_ps(V, V);
	vConstants = _mm_load_ps1(&g_XMATanEstCoefficients.f[2]);
	D = _mm_add_ps(D, vConstants);
	vConstants = _mm_load_ps1(&g_XMATanEstCoefficients.f[1]);
	vConstants = _mm_mul_ps(vConstants, vAbsV);
	D = _mm_add_ps(D, vConstants);
	vResult = _mm_div_ps(vResult, D);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorATan2Est(FXMVECTOR Y, FXMVECTOR X)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Reciprocal;
	XMVECTOR V;
	XMVECTOR YSign;
	XMVECTOR Pi, PiOverTwo, PiOverFour, ThreePiOverFour;
	XMVECTOR YEqualsZero, XEqualsZero, XIsPositive, YEqualsInfinity, XEqualsInfinity;
	XMVECTOR ATanResultValid;
	XMVECTOR R0, R1, R2, R3, R4, R5;
	XMVECTOR Zero;
	XMVECTOR Result;
	static CONST XMVECTOR ATan2Constants = { XM_PI, XM_PIDIV2, XM_PIDIV4, XM_PI * 3.0f / 4.0f };
	Zero = XMVectorZero();
	ATanResultValid = XMVectorTrueInt();
	Pi = XMVectorSplatX(ATan2Constants);
	PiOverTwo = XMVectorSplatY(ATan2Constants);
	PiOverFour = XMVectorSplatZ(ATan2Constants);
	ThreePiOverFour = XMVectorSplatW(ATan2Constants);
	YEqualsZero = XMVectorEqual(Y, Zero);
	XEqualsZero = XMVectorEqual(X, Zero);
	XIsPositive = XMVectorAndInt(X, g_XMNegativeZero.v);
	XIsPositive = XMVectorEqualInt(XIsPositive, Zero);
	YEqualsInfinity = XMVectorIsInfinite(Y);
	XEqualsInfinity = XMVectorIsInfinite(X);
	YSign = XMVectorAndInt(Y, g_XMNegativeZero.v);
	Pi = XMVectorOrInt(Pi, YSign);
	PiOverTwo = XMVectorOrInt(PiOverTwo, YSign);
	PiOverFour = XMVectorOrInt(PiOverFour, YSign);
	ThreePiOverFour = XMVectorOrInt(ThreePiOverFour, YSign);
	R1 = XMVectorSelect(Pi, YSign, XIsPositive);
	R2 = XMVectorSelect(ATanResultValid, PiOverTwo, XEqualsZero);
	R3 = XMVectorSelect(R2, R1, YEqualsZero);
	R4 = XMVectorSelect(ThreePiOverFour, PiOverFour, XIsPositive);
	R5 = XMVectorSelect(PiOverTwo, R4, XEqualsInfinity);
	Result = XMVectorSelect(R3, R5, YEqualsInfinity);
	ATanResultValid = XMVectorEqualInt(Result, ATanResultValid);
	Reciprocal = XMVectorReciprocalEst(X);
	V = XMVectorMultiply(Y, Reciprocal);
	R0 = XMVectorATanEst(V);
	R1 = XMVectorSelect(Pi, Zero, XIsPositive);
	R2 = XMVectorAdd(R0, R1);
	Result = XMVectorSelect(Result, R2, ATanResultValid);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	static CONST XMVECTORF32 ATan2Constants = { XM_PI, XM_PIDIV2, XM_PIDIV4, XM_PI * 3.0f / 4.0f };
	XMVECTOR YEqualsInfinity = XMVectorIsInfinite(Y);
	XMVECTOR YSign = _mm_and_ps(Y, CAST_M128(g_XMNegativeZero));
	XMVECTOR XIsPositive = _mm_and_ps(X, CAST_M128(g_XMNegativeZero));
	XIsPositive = XMVectorEqualInt(XIsPositive, CAST_M128(g_XMZero));
	XMVECTOR Pi = _mm_load_ps1(&ATan2Constants.f[0]);
	Pi = _mm_or_ps(Pi, YSign);
	XMVECTOR R1 = XMVectorSelect(Pi, YSign, XIsPositive);
	XMVECTOR vConstants = _mm_cmpeq_ps(X, CAST_M128(g_XMZero));
	XMVECTOR PiOverTwo = _mm_load_ps1(&ATan2Constants.f[1]);
	PiOverTwo = _mm_or_ps(PiOverTwo, YSign);
	XMVECTOR R2 = XMVectorSelect(CAST_M128(g_XMNegOneMask), PiOverTwo, vConstants);
	vConstants = _mm_cmpeq_ps(Y, CAST_M128(g_XMZero));
	R2 = XMVectorSelect(R2, R1, vConstants);
	XMVECTOR PiOverFour = _mm_load_ps1(&ATan2Constants.f[2]);
	PiOverFour = _mm_or_ps(PiOverFour, YSign);
	XMVECTOR ThreePiOverFour = _mm_load_ps1(&ATan2Constants.f[3]);
	ThreePiOverFour = _mm_or_ps(ThreePiOverFour, YSign);
	vConstants = XMVectorSelect(ThreePiOverFour, PiOverFour, XIsPositive);
	XMVECTOR XEqualsInfinity = XMVectorIsInfinite(X);
	vConstants = XMVectorSelect(PiOverTwo, vConstants, XEqualsInfinity);
	XMVECTOR vResult = XMVectorSelect(R2, vConstants, YEqualsInfinity);
	vConstants = XMVectorSelect(R1, vResult, YEqualsInfinity);
	vResult = XMVectorSelect(vResult, vConstants, XEqualsInfinity);
	XMVECTOR ATanResultValid = XMVectorEqualInt(vResult, CAST_M128(g_XMNegOneMask));
	XMVECTOR Reciprocal = _mm_rcp_ps(X);
	vConstants = _mm_mul_ps(Y, Reciprocal);
	vConstants = XMVectorATanEst(vConstants);
	XMVECTOR R3 = XMVectorSelect(Pi, CAST_M128(g_XMZero), CAST_M128(XIsPositive));
	vConstants = _mm_add_ps(vConstants, R3);
	vResult = XMVectorSelect(vResult, vConstants, ATanResultValid);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorLerp(FXMVECTOR V0, FXMVECTOR V1, FLOAT t)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Scale;
	XMVECTOR Length;
	XMVECTOR Result;
	Scale = XMVectorReplicate(t);
	Length = XMVectorSubtract(V1, V0);
	Result = XMVectorMultiplyAdd(Length, Scale, V0);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR L, S;
	XMVECTOR Result;
	L = _mm_sub_ps(V1, V0);
	S = _mm_set_ps1(t);
	Result = _mm_mul_ps(L, S);
	return _mm_add_ps(Result, V0);
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMVectorLerpV(FXMVECTOR V0, FXMVECTOR V1, FXMVECTOR T)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Length;
	XMVECTOR Result;
	Length = XMVectorSubtract(V1, V0);
	Result = XMVectorMultiplyAdd(Length, T, V0);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR Length;
	XMVECTOR Result;
	Length = _mm_sub_ps(V1, V0);
	Result = _mm_mul_ps(Length, T);
	return _mm_add_ps(Result, V0);
#else
#endif
}
XMFINLINE XMVECTOR XMVectorHermite(FXMVECTOR Position0, FXMVECTOR Tangent0, FXMVECTOR Position1, CXMVECTOR Tangent1, FLOAT t)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR P0;
	XMVECTOR T0;
	XMVECTOR P1;
	XMVECTOR T1;
	XMVECTOR Result;
	FLOAT t2;
	FLOAT t3;
	t2 = t * t;
	t3 = t * t2;
	P0 = XMVectorReplicate(2.0f * t3 - 3.0f * t2 + 1.0f);
	T0 = XMVectorReplicate(t3 - 2.0f * t2 + t);
	P1 = XMVectorReplicate(-2.0f * t3 + 3.0f * t2);
	T1 = XMVectorReplicate(t3 - t2);
	Result = XMVectorMultiply(P0, Position0);
	Result = XMVectorMultiplyAdd(T0, Tangent0, Result);
	Result = XMVectorMultiplyAdd(P1, Position1, Result);
	Result = XMVectorMultiplyAdd(T1, Tangent1, Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	FLOAT t2 = t * t;
	FLOAT t3 = t * t2;
	XMVECTOR P0 = _mm_set_ps1(2.0f * t3 - 3.0f * t2 + 1.0f);
	XMVECTOR T0 = _mm_set_ps1(t3 - 2.0f * t2 + t);
	XMVECTOR P1 = _mm_set_ps1(-2.0f * t3 + 3.0f * t2);
	XMVECTOR T1 = _mm_set_ps1(t3 - t2);
	XMVECTOR vResult = _mm_mul_ps(P0, Position0);
	XMVECTOR vTemp = _mm_mul_ps(T0, Tangent0);
	vResult = _mm_add_ps(vResult, vTemp);
	vTemp = _mm_mul_ps(P1, Position1);
	vResult = _mm_add_ps(vResult, vTemp);
	vTemp = _mm_mul_ps(T1, Tangent1);
	vResult = _mm_add_ps(vResult, vTemp);
	return vResult;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMVectorHermiteV(FXMVECTOR Position0, FXMVECTOR Tangent0, FXMVECTOR Position1, CXMVECTOR Tangent1, CXMVECTOR T)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR P0;
	XMVECTOR T0;
	XMVECTOR P1;
	XMVECTOR T1;
	XMVECTOR Result;
	XMVECTOR T2;
	XMVECTOR T3;
	T2 = XMVectorMultiply(T, T);
	T3 = XMVectorMultiply(T, T2);
	P0 = XMVectorReplicate(2.0f * T3.vector4_f32[0] - 3.0f * T2.vector4_f32[0] + 1.0f);
	T0 = XMVectorReplicate(T3.vector4_f32[1] - 2.0f * T2.vector4_f32[1] + T.vector4_f32[1]);
	P1 = XMVectorReplicate(-2.0f * T3.vector4_f32[2] + 3.0f * T2.vector4_f32[2]);
	T1 = XMVectorReplicate(T3.vector4_f32[3] - T2.vector4_f32[3]);
	Result = XMVectorMultiply(P0, Position0);
	Result = XMVectorMultiplyAdd(T0, Tangent0, Result);
	Result = XMVectorMultiplyAdd(P1, Position1, Result);
	Result = XMVectorMultiplyAdd(T1, Tangent1, Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	static const XMVECTORF32 CatMulT2 = { -3.0f, -2.0f, 3.0f, -1.0f };
	static const XMVECTORF32 CatMulT3 = { 2.0f, 1.0f, -2.0f, 1.0f };
	XMVECTOR T2 = _mm_mul_ps(T, T);
	XMVECTOR T3 = _mm_mul_ps(T, T2);
	T2 = _mm_mul_ps(T2, CAST_M128(CatMulT2));
	T3 = _mm_mul_ps(T3, CAST_M128(CatMulT3));
	T3 = _mm_add_ps(T3, T2);
	T2 = _mm_and_ps(T, CAST_M128(g_XMMaskY));
	T3 = _mm_add_ps(T3, T2);
	T3 = _mm_add_ps(T3, CAST_M128(g_XMIdentityR0));
	XMVECTOR vResult = _mm_shuffle_ps(T3, T3, _MM_SHUFFLE(0, 0, 0, 0));
	vResult = _mm_mul_ps(vResult, Position0);
	T2 = _mm_shuffle_ps(T3, T3, _MM_SHUFFLE(1, 1, 1, 1));
	T2 = _mm_mul_ps(T2, Tangent0);
	vResult = _mm_add_ps(vResult, T2);
	T2 = _mm_shuffle_ps(T3, T3, _MM_SHUFFLE(2, 2, 2, 2));
	T2 = _mm_mul_ps(T2, Position1);
	vResult = _mm_add_ps(vResult, T2);
	T3 = _mm_shuffle_ps(T3, T3, _MM_SHUFFLE(3, 3, 3, 3));
	T3 = _mm_mul_ps(T3, Tangent1);
	vResult = _mm_add_ps(vResult, T3);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorCatmullRom(FXMVECTOR Position0, FXMVECTOR Position1, FXMVECTOR Position2, CXMVECTOR Position3, FLOAT t)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR P0;
	XMVECTOR P1;
	XMVECTOR P2;
	XMVECTOR P3;
	XMVECTOR Result;
	FLOAT t2;
	FLOAT t3;
	t2 = t * t;
	t3 = t * t2;
	P0 = XMVectorReplicate((-t3 + 2.0f * t2 - t) * 0.5f);
	P1 = XMVectorReplicate((3.0f * t3 - 5.0f * t2 + 2.0f) * 0.5f);
	P2 = XMVectorReplicate((-3.0f * t3 + 4.0f * t2 + t) * 0.5f);
	P3 = XMVectorReplicate((t3 - t2) * 0.5f);
	Result = XMVectorMultiply(P0, Position0);
	Result = XMVectorMultiplyAdd(P1, Position1, Result);
	Result = XMVectorMultiplyAdd(P2, Position2, Result);
	Result = XMVectorMultiplyAdd(P3, Position3, Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	FLOAT t2 = t * t;
	FLOAT t3 = t * t2;
	XMVECTOR P0 = _mm_set_ps1((-t3 + 2.0f * t2 - t) * 0.5f);
	XMVECTOR P1 = _mm_set_ps1((3.0f * t3 - 5.0f * t2 + 2.0f) * 0.5f);
	XMVECTOR P2 = _mm_set_ps1((-3.0f * t3 + 4.0f * t2 + t) * 0.5f);
	XMVECTOR P3 = _mm_set_ps1((t3 - t2) * 0.5f);
	P0 = _mm_mul_ps(P0, Position0);
	P1 = _mm_mul_ps(P1, Position1);
	P2 = _mm_mul_ps(P2, Position2);
	P3 = _mm_mul_ps(P3, Position3);
	P0 = _mm_add_ps(P0, P1);
	P2 = _mm_add_ps(P2, P3);
	P0 = _mm_add_ps(P0, P2);
	return P0;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMVectorCatmullRomV(FXMVECTOR Position0, FXMVECTOR Position1, FXMVECTOR Position2, CXMVECTOR Position3, CXMVECTOR T)
{
#if defined(_XM_NO_INTRINSICS_)
	float fx = T.vector4_f32[0];
	float fy = T.vector4_f32[1];
	float fz = T.vector4_f32[2];
	float fw = T.vector4_f32[3];
	XMVECTOR vResult = {
		0.5f * ((-fx * fx * fx + 2 * fx * fx - fx) * Position0.vector4_f32[0] + (3 * fx * fx * fx - 5 * fx * fx + 2) * Position1.vector4_f32[0] + (-3 * fx * fx * fx + 4 * fx * fx + fx) * Position2.vector4_f32[0] + (fx * fx * fx - fx * fx) * Position3.vector4_f32[0]),
		0.5f * ((-fy * fy * fy + 2 * fy * fy - fy) * Position0.vector4_f32[1] + (3 * fy * fy * fy - 5 * fy * fy + 2) * Position1.vector4_f32[1] + (-3 * fy * fy * fy + 4 * fy * fy + fy) * Position2.vector4_f32[1] + (fy * fy * fy - fy * fy) * Position3.vector4_f32[1]),
		0.5f * ((-fz * fz * fz + 2 * fz * fz - fz) * Position0.vector4_f32[2] + (3 * fz * fz * fz - 5 * fz * fz + 2) * Position1.vector4_f32[2] + (-3 * fz * fz * fz + 4 * fz * fz + fz) * Position2.vector4_f32[2] + (fz * fz * fz - fz * fz) * Position3.vector4_f32[2]),
		0.5f * ((-fw * fw * fw + 2 * fw * fw - fw) * Position0.vector4_f32[3] + (3 * fw * fw * fw - 5 * fw * fw + 2) * Position1.vector4_f32[3] + (-3 * fw * fw * fw + 4 * fw * fw + fw) * Position2.vector4_f32[3] + (fw * fw * fw - fw * fw) * Position3.vector4_f32[3])
	};
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	static const XMVECTORF32 Catmul2 = { 2.0f, 2.0f, 2.0f, 2.0f };
	static const XMVECTORF32 Catmul3 = { 3.0f, 3.0f, 3.0f, 3.0f };
	static const XMVECTORF32 Catmul4 = { 4.0f, 4.0f, 4.0f, 4.0f };
	static const XMVECTORF32 Catmul5 = { 5.0f, 5.0f, 5.0f, 5.0f };
	XMVECTOR T2 = _mm_mul_ps(T, T);
	XMVECTOR T3 = _mm_mul_ps(T, T2);
	XMVECTOR vResult = _mm_add_ps(T2, T2);
	vResult = _mm_sub_ps(vResult, T);
	vResult = _mm_sub_ps(vResult, T3);
	vResult = _mm_mul_ps(vResult, Position0);
	XMVECTOR vTemp = _mm_mul_ps(T3, CAST_M128(Catmul3));
	XMVECTOR vTemp2 = _mm_mul_ps(T2, CAST_M128(Catmul5));
	vTemp = _mm_sub_ps(vTemp, vTemp2);
	vTemp = _mm_add_ps(vTemp, CAST_M128(Catmul2));
	vTemp = _mm_mul_ps(vTemp, Position1);
	vResult = _mm_add_ps(vResult, vTemp);
	vTemp = _mm_mul_ps(T2, CAST_M128(Catmul4));
	vTemp2 = _mm_mul_ps(T3, CAST_M128(Catmul3));
	vTemp = _mm_sub_ps(vTemp, vTemp2);
	vTemp = _mm_add_ps(vTemp, T);
	vTemp = _mm_mul_ps(vTemp, Position2);
	vResult = _mm_add_ps(vResult, vTemp);
	T3 = _mm_sub_ps(T3, T2);
	T3 = _mm_mul_ps(T3, Position3);
	vResult = _mm_add_ps(vResult, T3);
	vResult = _mm_mul_ps(vResult, CAST_M128(g_XMOneHalf));
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVectorBaryCentric(FXMVECTOR Position0, FXMVECTOR Position1, FXMVECTOR Position2, FLOAT f, FLOAT g)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR P10;
	XMVECTOR P20;
	XMVECTOR ScaleF;
	XMVECTOR ScaleG;
	XMVECTOR Result;
	P10 = XMVectorSubtract(Position1, Position0);
	ScaleF = XMVectorReplicate(f);
	P20 = XMVectorSubtract(Position2, Position0);
	ScaleG = XMVectorReplicate(g);
	Result = XMVectorMultiplyAdd(P10, ScaleF, Position0);
	Result = XMVectorMultiplyAdd(P20, ScaleG, Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR R1 = _mm_sub_ps(Position1, Position0);
	XMVECTOR SF = _mm_set_ps1(f);
	XMVECTOR R2 = _mm_sub_ps(Position2, Position0);
	XMVECTOR SG = _mm_set_ps1(g);
	R1 = _mm_mul_ps(R1, SF);
	R2 = _mm_mul_ps(R2, SG);
	R1 = _mm_add_ps(R1, Position0);
	R1 = _mm_add_ps(R1, R2);
	return R1;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMVectorBaryCentricV(FXMVECTOR Position0, FXMVECTOR Position1, FXMVECTOR Position2, CXMVECTOR F, CXMVECTOR G)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR P10;
	XMVECTOR P20;
	XMVECTOR Result;
	P10 = XMVectorSubtract(Position1, Position0);
	P20 = XMVectorSubtract(Position2, Position0);
	Result = XMVectorMultiplyAdd(P10, F, Position0);
	Result = XMVectorMultiplyAdd(P20, G, Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR R1 = _mm_sub_ps(Position1, Position0);
	XMVECTOR R2 = _mm_sub_ps(Position2, Position0);
	R1 = _mm_mul_ps(R1, F);
	R2 = _mm_mul_ps(R2, G);
	R1 = _mm_add_ps(R1, Position0);
	R1 = _mm_add_ps(R1, R2);
	return R1;
#else
#endif
}
XMFINLINE BOOL XMVector2Equal(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] == V2.vector4_f32[0]) && (V1.vector4_f32[1] == V2.vector4_f32[1])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpeq_ps(V1, V2);
	return (((_mm_movemask_ps(vTemp) & 3) == 3) != 0);
#else
	return XMComparisonAllTrue(XMVector2EqualR(V1, V2));
#endif
}
XMFINLINE UINT XMVector2EqualR(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT CR = 0;
	if ((V1.vector4_f32[0] == V2.vector4_f32[0]) && (V1.vector4_f32[1] == V2.vector4_f32[1]))
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if ((V1.vector4_f32[0] != V2.vector4_f32[0]) && (V1.vector4_f32[1] != V2.vector4_f32[1]))
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpeq_ps(V1, V2);
	int iTest = _mm_movemask_ps(vTemp) & 3;
	UINT CR = 0;
	if (iTest == 3)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!iTest)
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#else
#endif
}
XMFINLINE BOOL XMVector2EqualInt(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_u32[0] == V2.vector4_u32[0]) && (V1.vector4_u32[1] == V2.vector4_u32[1])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vTemp = _mm_cmpeq_epi32(CAST_CONST_M128I(V1), CAST_CONST_M128I(V2));
	return (((_mm_movemask_ps(CAST_CONST_M128(vTemp)) & 3) == 3) != 0);
#else
	return XMComparisonAllTrue(XMVector2EqualIntR(V1, V2));
#endif
}
XMFINLINE UINT XMVector2EqualIntR(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT CR = 0;
	if ((V1.vector4_u32[0] == V2.vector4_u32[0]) && (V1.vector4_u32[1] == V2.vector4_u32[1]))
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if ((V1.vector4_u32[0] != V2.vector4_u32[0]) && (V1.vector4_u32[1] != V2.vector4_u32[1]))
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vTemp = _mm_cmpeq_epi32(CAST_CONST_M128I(V1), CAST_CONST_M128I(V2));
	int iTest = _mm_movemask_ps(CAST_CONST_M128(vTemp)) & 3;
	UINT CR = 0;
	if (iTest == 3)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!iTest)
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#else
#endif
}
XMFINLINE BOOL XMVector2NearEqual(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Epsilon)
{
#if defined(_XM_NO_INTRINSICS_)
	FLOAT dx, dy;
	dx = fabsf(V1.vector4_f32[0] - V2.vector4_f32[0]);
	dy = fabsf(V1.vector4_f32[1] - V2.vector4_f32[1]);
	return ((dx <= Epsilon.vector4_f32[0]) && (dy <= Epsilon.vector4_f32[1]));
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vDelta = _mm_sub_ps(V1, V2);
	XMVECTOR vTemp = _mm_setzero_ps();
	vTemp = _mm_sub_ps(vTemp, vDelta);
	vTemp = _mm_max_ps(vTemp, vDelta);
	vTemp = _mm_cmple_ps(vTemp, Epsilon);
	return (((_mm_movemask_ps(vTemp) & 3) == 0x3) != 0);
#else
#endif
}
XMFINLINE BOOL XMVector2NotEqual(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] != V2.vector4_f32[0]) || (V1.vector4_f32[1] != V2.vector4_f32[1])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpeq_ps(V1, V2);
	return (((_mm_movemask_ps(vTemp) & 3) != 3) != 0);
#else
	return XMComparisonAnyFalse(XMVector2EqualR(V1, V2));
#endif
}
XMFINLINE BOOL XMVector2NotEqualInt(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_u32[0] != V2.vector4_u32[0]) || (V1.vector4_u32[1] != V2.vector4_u32[1])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vTemp = _mm_cmpeq_epi32(CAST_CONST_M128I(V1), CAST_CONST_M128I(V2));
	return (((_mm_movemask_ps(CAST_CONST_M128(vTemp)) & 3) != 3) != 0);
#else
	return XMComparisonAnyFalse(XMVector2EqualIntR(V1, V2));
#endif
}
XMFINLINE BOOL XMVector2Greater(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] > V2.vector4_f32[0]) && (V1.vector4_f32[1] > V2.vector4_f32[1])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpgt_ps(V1, V2);
	return (((_mm_movemask_ps(vTemp) & 3) == 3) != 0);
#else
	return XMComparisonAllTrue(XMVector2GreaterR(V1, V2));
#endif
}
XMFINLINE UINT XMVector2GreaterR(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT CR = 0;
	if ((V1.vector4_f32[0] > V2.vector4_f32[0]) && (V1.vector4_f32[1] > V2.vector4_f32[1]))
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if ((V1.vector4_f32[0] <= V2.vector4_f32[0]) && (V1.vector4_f32[1] <= V2.vector4_f32[1]))
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpgt_ps(V1, V2);
	int iTest = _mm_movemask_ps(vTemp) & 3;
	UINT CR = 0;
	if (iTest == 3)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!iTest)
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#else
#endif
}
XMFINLINE BOOL XMVector2GreaterOrEqual(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] >= V2.vector4_f32[0]) && (V1.vector4_f32[1] >= V2.vector4_f32[1])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpge_ps(V1, V2);
	return (((_mm_movemask_ps(vTemp) & 3) == 3) != 0);
#else
	return XMComparisonAllTrue(XMVector2GreaterOrEqualR(V1, V2));
#endif
}
XMFINLINE UINT XMVector2GreaterOrEqualR(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT CR = 0;
	if ((V1.vector4_f32[0] >= V2.vector4_f32[0]) && (V1.vector4_f32[1] >= V2.vector4_f32[1]))
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if ((V1.vector4_f32[0] < V2.vector4_f32[0]) && (V1.vector4_f32[1] < V2.vector4_f32[1]))
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpge_ps(V1, V2);
	int iTest = _mm_movemask_ps(vTemp) & 3;
	UINT CR = 0;
	if (iTest == 3)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!iTest)
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#else
#endif
}
XMFINLINE BOOL XMVector2Less(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] < V2.vector4_f32[0]) && (V1.vector4_f32[1] < V2.vector4_f32[1])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmplt_ps(V1, V2);
	return (((_mm_movemask_ps(vTemp) & 3) == 3) != 0);
#else
	return XMComparisonAllTrue(XMVector2GreaterR(V2, V1));
#endif
}
XMFINLINE BOOL XMVector2LessOrEqual(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] <= V2.vector4_f32[0]) && (V1.vector4_f32[1] <= V2.vector4_f32[1])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmple_ps(V1, V2);
	return (((_mm_movemask_ps(vTemp) & 3) == 3) != 0);
#else
	return XMComparisonAllTrue(XMVector2GreaterOrEqualR(V2, V1));
#endif
}
XMFINLINE BOOL XMVector2InBounds(FXMVECTOR V, FXMVECTOR Bounds)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V.vector4_f32[0] <= Bounds.vector4_f32[0] && V.vector4_f32[0] >= -Bounds.vector4_f32[0]) && (V.vector4_f32[1] <= Bounds.vector4_f32[1] && V.vector4_f32[1] >= -Bounds.vector4_f32[1])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp1 = _mm_cmple_ps(V, Bounds);
	XMVECTOR vTemp2 = _mm_mul_ps(Bounds, CAST_M128(g_XMNegativeOne));
	vTemp2 = _mm_cmple_ps(vTemp2, V);
	vTemp1 = _mm_and_ps(vTemp1, vTemp2);
	return (((_mm_movemask_ps(vTemp1) & 0x3) == 0x3) != 0);
#else
	return XMComparisonAllInBounds(XMVector2InBoundsR(V, Bounds));
#endif
}
XMFINLINE UINT XMVector2InBoundsR(FXMVECTOR V, FXMVECTOR Bounds)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT CR = 0;
	if ((V.vector4_f32[0] <= Bounds.vector4_f32[0] && V.vector4_f32[0] >= -Bounds.vector4_f32[0]) && (V.vector4_f32[1] <= Bounds.vector4_f32[1] && V.vector4_f32[1] >= -Bounds.vector4_f32[1]))
	{
		CR = XM_CRMASK_CR6BOUNDS;
	}
	return CR;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp1 = _mm_cmple_ps(V, Bounds);
	XMVECTOR vTemp2 = _mm_mul_ps(Bounds, CAST_M128(g_XMNegativeOne));
	vTemp2 = _mm_cmple_ps(vTemp2, V);
	vTemp1 = _mm_and_ps(vTemp1, vTemp2);
	return ((_mm_movemask_ps(vTemp1) & 0x3) == 0x3) ? XM_CRMASK_CR6BOUNDS : 0;
#else
#endif
}
XMFINLINE BOOL XMVector2IsNaN(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return (XMISNAN(V.vector4_f32[0]) || XMISNAN(V.vector4_f32[1]));
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vTempInf = _mm_and_si128(CAST_CONST_M128I(V), CAST_M128I(g_XMInfinity));
	__m128i vTempNan = _mm_and_si128(CAST_CONST_M128I(V), CAST_M128I(g_XMQNaNTest));
	vTempInf = _mm_cmpeq_epi32(vTempInf, CAST_M128I(g_XMInfinity));
	vTempNan = _mm_cmpeq_epi32(vTempNan, CAST_M128I(g_XMZero));
	vTempNan = _mm_andnot_si128(vTempNan, vTempInf);
	return ((_mm_movemask_ps(CAST_CONST_M128(vTempNan)) & 3) != 0);
#else
#endif
}
XMFINLINE BOOL XMVector2IsInfinite(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return (XMISINF(V.vector4_f32[0]) || XMISINF(V.vector4_f32[1]));
#elif defined(_XM_SSE_INTRINSICS_)
	__m128 vTemp = _mm_and_ps(V, CAST_M128(g_XMAbsMask));
	vTemp = _mm_cmpeq_ps(vTemp, CAST_M128(g_XMInfinity));
	return ((_mm_movemask_ps(vTemp) & 3) != 0);
#else
#endif
}
XMFINLINE XMVECTOR XMVector2Dot(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_f32[0] = Result.vector4_f32[1] = Result.vector4_f32[2] = Result.vector4_f32[3] = V1.vector4_f32[0] * V2.vector4_f32[0] + V1.vector4_f32[1] * V2.vector4_f32[1];
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V1, V2);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 1, 1, 1));
	vLengthSq = _mm_add_ss(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(0, 0, 0, 0));
	return vLengthSq;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2Cross(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	FLOAT fCross = (V1.vector4_f32[0] * V2.vector4_f32[1]) - (V1.vector4_f32[1] * V2.vector4_f32[0]);
	XMVECTOR vResult = {
		fCross,
		fCross,
		fCross,
		fCross
	};
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_shuffle_ps(V2, V2, _MM_SHUFFLE(0, 1, 0, 1));
	vResult = _mm_mul_ps(vResult, V1);
	XMVECTOR vTemp = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(1, 1, 1, 1));
	vResult = _mm_sub_ss(vResult, vTemp);
	vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(0, 0, 0, 0));
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2LengthSq(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return XMVector2Dot(V, V);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 1, 1, 1));
	vLengthSq = _mm_add_ss(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(0, 0, 0, 0));
	return vLengthSq;
#else
	return XMVector2Dot(V, V);
#endif
}
XMFINLINE XMVECTOR XMVector2ReciprocalLengthEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector2LengthSq(V);
	Result = XMVectorReciprocalSqrtEst(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 1, 1, 1));
	vLengthSq = _mm_add_ss(vLengthSq, vTemp);
	vLengthSq = _mm_rsqrt_ss(vLengthSq);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(0, 0, 0, 0));
	return vLengthSq;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2ReciprocalLength(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector2LengthSq(V);
	Result = XMVectorReciprocalSqrt(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 1, 1, 1));
	vLengthSq = _mm_add_ss(vLengthSq, vTemp);
	vLengthSq = _mm_sqrt_ss(vLengthSq);
	vLengthSq = _mm_div_ss(CAST_M128(g_XMOne), vLengthSq);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(0, 0, 0, 0));
	return vLengthSq;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2LengthEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector2LengthSq(V);
	Result = XMVectorSqrtEst(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 1, 1, 1));
	vLengthSq = _mm_add_ss(vLengthSq, vTemp);
	vLengthSq = _mm_sqrt_ss(vLengthSq);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(0, 0, 0, 0));
	return vLengthSq;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2Length(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector2LengthSq(V);
	Result = XMVectorSqrt(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 1, 1, 1));
	vLengthSq = _mm_add_ss(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(0, 0, 0, 0));
	vLengthSq = _mm_sqrt_ps(vLengthSq);
	return vLengthSq;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2NormalizeEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector2ReciprocalLength(V);
	Result = XMVectorMultiply(V, Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 1, 1, 1));
	vLengthSq = _mm_add_ss(vLengthSq, vTemp);
	vLengthSq = _mm_rsqrt_ss(vLengthSq);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(0, 0, 0, 0));
	vLengthSq = _mm_mul_ps(vLengthSq, V);
	return vLengthSq;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2Normalize(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	FLOAT fLength;
	XMVECTOR vResult;
	vResult = XMVector2Length(V);
	fLength = vResult.vector4_f32[0];
	if (fLength > 0)
	{
		fLength = 1.0f / fLength;
	}

	vResult.vector4_f32[0] = V.vector4_f32[0] * fLength;
	vResult.vector4_f32[1] = V.vector4_f32[1] * fLength;
	vResult.vector4_f32[2] = V.vector4_f32[2] * fLength;
	vResult.vector4_f32[3] = V.vector4_f32[3] * fLength;
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 1, 1, 1));
	vLengthSq = _mm_add_ss(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(0, 0, 0, 0));
	XMVECTOR vResult = _mm_sqrt_ps(vLengthSq);
	XMVECTOR vZeroMask = _mm_setzero_ps();
	vZeroMask = _mm_cmpneq_ps(vZeroMask, vResult);
	vLengthSq = _mm_cmpneq_ps(vLengthSq, CAST_M128(g_XMInfinity));
	vResult = _mm_div_ps(V, vResult);
	vResult = _mm_and_ps(vResult, vZeroMask);
	XMVECTOR vTemp1 = _mm_andnot_ps(vLengthSq, CAST_M128(g_XMQNaN));
	XMVECTOR vTemp2 = _mm_and_ps(vResult, vLengthSq);
	vResult = _mm_or_ps(vTemp1, vTemp2);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2ClampLength(FXMVECTOR V, FLOAT LengthMin, FLOAT LengthMax)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR ClampMax;
	XMVECTOR ClampMin;
	ClampMax = XMVectorReplicate(LengthMax);
	ClampMin = XMVectorReplicate(LengthMin);
	return XMVector2ClampLengthV(V, ClampMin, ClampMax);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR ClampMax = _mm_set_ps1(LengthMax);
	XMVECTOR ClampMin = _mm_set_ps1(LengthMin);
	return XMVector2ClampLengthV(V, ClampMin, ClampMax);
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMVector2ClampLengthV(FXMVECTOR V, FXMVECTOR LengthMin, FXMVECTOR LengthMax)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR ClampLength;
	XMVECTOR LengthSq;
	XMVECTOR RcpLength;
	XMVECTOR Length;
	XMVECTOR Normal;
	XMVECTOR Zero;
	XMVECTOR InfiniteLength;
	XMVECTOR ZeroLength;
	XMVECTOR Select;
	XMVECTOR ControlMax;
	XMVECTOR ControlMin;
	XMVECTOR Control;
	XMVECTOR Result;
	XMASSERT((LengthMin.vector4_f32[1] == LengthMin.vector4_f32[0]));
	XMASSERT((LengthMax.vector4_f32[1] == LengthMax.vector4_f32[0]));
	XMASSERT(XMVector2GreaterOrEqual(LengthMin, XMVectorZero()));
	XMASSERT(XMVector2GreaterOrEqual(LengthMax, XMVectorZero()));
	XMASSERT(XMVector2GreaterOrEqual(LengthMax, LengthMin));
	LengthSq = XMVector2LengthSq(V);
	Zero = XMVectorZero();
	RcpLength = XMVectorReciprocalSqrt(LengthSq);
	InfiniteLength = XMVectorEqualInt(LengthSq, g_XMInfinity.v);
	ZeroLength = XMVectorEqual(LengthSq, Zero);
	Length = XMVectorMultiply(LengthSq, RcpLength);
	Normal = XMVectorMultiply(V, RcpLength);
	Select = XMVectorEqualInt(InfiniteLength, ZeroLength);
	Length = XMVectorSelect(LengthSq, Length, Select);
	Normal = XMVectorSelect(LengthSq, Normal, Select);
	ControlMax = XMVectorGreater(Length, LengthMax);
	ControlMin = XMVectorLess(Length, LengthMin);
	ClampLength = XMVectorSelect(Length, LengthMax, ControlMax);
	ClampLength = XMVectorSelect(ClampLength, LengthMin, ControlMin);
	Result = XMVectorMultiply(Normal, ClampLength);
	Control = XMVectorEqualInt(ControlMax, ControlMin);
	Result = XMVectorSelect(Result, V, Control);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR ClampLength;
	XMVECTOR LengthSq;
	XMVECTOR RcpLength;
	XMVECTOR Length;
	XMVECTOR Normal;
	XMVECTOR InfiniteLength;
	XMVECTOR ZeroLength;
	XMVECTOR Select;
	XMVECTOR ControlMax;
	XMVECTOR ControlMin;
	XMVECTOR Control;
	XMVECTOR Result;
	XMASSERT((XMVectorGetY(LengthMin) == XMVectorGetX(LengthMin)));
	XMASSERT((XMVectorGetY(LengthMax) == XMVectorGetX(LengthMax)));
	XMASSERT(XMVector2GreaterOrEqual(LengthMin, g_XMZero));
	XMASSERT(XMVector2GreaterOrEqual(LengthMax, g_XMZero));
	XMASSERT(XMVector2GreaterOrEqual(LengthMax, LengthMin));
	LengthSq = XMVector2LengthSq(V);
	RcpLength = XMVectorReciprocalSqrt(LengthSq);
	InfiniteLength = XMVectorEqualInt(LengthSq, CAST_M128(g_XMInfinity));
	ZeroLength = XMVectorEqual(LengthSq, CAST_M128(g_XMZero));
	Length = _mm_mul_ps(LengthSq, RcpLength);
	Normal = _mm_mul_ps(V, RcpLength);
	Select = XMVectorEqualInt(InfiniteLength, ZeroLength);
	Length = XMVectorSelect(LengthSq, Length, Select);
	Normal = XMVectorSelect(LengthSq, Normal, Select);
	ControlMax = XMVectorGreater(Length, LengthMax);
	ControlMin = XMVectorLess(Length, LengthMin);
	ClampLength = XMVectorSelect(Length, LengthMax, ControlMax);
	ClampLength = XMVectorSelect(ClampLength, LengthMin, ControlMin);
	Result = _mm_mul_ps(Normal, ClampLength);
	Control = XMVectorEqualInt(ControlMax, ControlMin);
	Result = XMVectorSelect(Result, V, Control);
	return Result;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2Reflect(FXMVECTOR Incident, FXMVECTOR Normal)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector2Dot(Incident, Normal);
	Result = XMVectorAdd(Result, Result);
	Result = XMVectorNegativeMultiplySubtract(Result, Normal, Incident);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR Result = XMVector2Dot(Incident, Normal);
	Result = _mm_add_ps(Result, Result);
	Result = _mm_mul_ps(Result, Normal);
	Result = _mm_sub_ps(Incident, Result);
	return Result;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2Refract(FXMVECTOR Incident, FXMVECTOR Normal, FLOAT RefractionIndex)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Index;
	Index = XMVectorReplicate(RefractionIndex);
	return XMVector2RefractV(Incident, Normal, Index);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR Index = _mm_set_ps1(RefractionIndex);
	return XMVector2RefractV(Incident, Normal, Index);
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMVector2RefractV(FXMVECTOR Incident, FXMVECTOR Normal, FXMVECTOR RefractionIndex)
{
#if defined(_XM_NO_INTRINSICS_)
	float IDotN;
	float RX, RY;
	XMVECTOR vResult;
	IDotN = (Incident.vector4_f32[0] * Normal.vector4_f32[0]) + (Incident.vector4_f32[1] * Normal.vector4_f32[1]);
	RY = 1.0f - (IDotN * IDotN);
	RX = 1.0f - (RY * RefractionIndex.vector4_f32[0] * RefractionIndex.vector4_f32[0]);
	RY = 1.0f - (RY * RefractionIndex.vector4_f32[1] * RefractionIndex.vector4_f32[1]);
	if (RX >= 0.0f)
	{
		RX = (RefractionIndex.vector4_f32[0] * Incident.vector4_f32[0]) - (Normal.vector4_f32[0] * ((RefractionIndex.vector4_f32[0] * IDotN) + sqrtf(RX)));
	}
	else
	{
		RX = 0.0f;
	}
	if (RY >= 0.0f)
	{
		RY = (RefractionIndex.vector4_f32[1] * Incident.vector4_f32[1]) - (Normal.vector4_f32[1] * ((RefractionIndex.vector4_f32[1] * IDotN) + sqrtf(RY)));
	}
	else
	{
		RY = 0.0f;
	}
	vResult.vector4_f32[0] = RX;
	vResult.vector4_f32[1] = RY;
	vResult.vector4_f32[2] = 0.0f;
	vResult.vector4_f32[3] = 0.0f;
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR IDotN = _mm_mul_ps(Incident, Normal);
	XMVECTOR vTemp = _mm_shuffle_ps(IDotN, IDotN, _MM_SHUFFLE(1, 1, 1, 1));
	IDotN = _mm_add_ss(IDotN, vTemp);
	IDotN = _mm_shuffle_ps(IDotN, IDotN, _MM_SHUFFLE(0, 0, 0, 0));
	vTemp = _mm_mul_ps(IDotN, IDotN);
	vTemp = _mm_sub_ps(CAST_M128(g_XMOne), vTemp);
	vTemp = _mm_mul_ps(vTemp, RefractionIndex);
	vTemp = _mm_mul_ps(vTemp, RefractionIndex);
	vTemp = _mm_sub_ps(CAST_M128(g_XMOne), vTemp);
	XMVECTOR vMask = _mm_cmpgt_ps(vTemp, CAST_M128(g_XMZero));
	vTemp = _mm_sqrt_ps(vTemp);
	XMVECTOR vResult = _mm_mul_ps(RefractionIndex, IDotN);
	vTemp = _mm_add_ps(vTemp, vResult);
	vResult = _mm_mul_ps(RefractionIndex, Incident);
	vTemp = _mm_mul_ps(vTemp, Normal);
	vResult = _mm_sub_ps(vResult, vTemp);
	vResult = _mm_and_ps(vResult, vMask);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2Orthogonal(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_f32[0] = -V.vector4_f32[1];
	Result.vector4_f32[1] = V.vector4_f32[0];
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(3, 2, 0, 1));
	vResult = _mm_mul_ps(vResult, CAST_M128(g_XMNegateX));
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2AngleBetweenNormalsEst(FXMVECTOR N1, FXMVECTOR N2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR NegativeOne;
	XMVECTOR One;
	XMVECTOR Result;
	Result = XMVector2Dot(N1, N2);
	NegativeOne = XMVectorSplatConstant(-1, 0);
	One = XMVectorSplatOne();
	Result = XMVectorClamp(Result, NegativeOne, One);
	Result = XMVectorACosEst(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = XMVector2Dot(N1, N2);
	vResult = _mm_max_ps(vResult, CAST_M128(g_XMNegativeOne));
	vResult = _mm_min_ps(vResult, CAST_M128(g_XMOne));;
	vResult = XMVectorACosEst(vResult);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2AngleBetweenNormals(FXMVECTOR N1, FXMVECTOR N2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR NegativeOne;
	XMVECTOR One;
	XMVECTOR Result;
	Result = XMVector2Dot(N1, N2);
	NegativeOne = XMVectorSplatConstant(-1, 0);
	One = XMVectorSplatOne();
	Result = XMVectorClamp(Result, NegativeOne, One);
	Result = XMVectorACos(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = XMVector2Dot(N1, N2);
	vResult = _mm_max_ps(vResult, CAST_M128(g_XMNegativeOne));
	vResult = _mm_min_ps(vResult, CAST_M128(g_XMOne));;
	vResult = XMVectorACos(vResult);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2AngleBetweenVectors(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR L1;
	XMVECTOR L2;
	XMVECTOR Dot;
	XMVECTOR CosAngle;
	XMVECTOR NegativeOne;
	XMVECTOR One;
	XMVECTOR Result;
	L1 = XMVector2ReciprocalLength(V1);
	L2 = XMVector2ReciprocalLength(V2);
	Dot = XMVector2Dot(V1, V2);
	L1 = XMVectorMultiply(L1, L2);
	CosAngle = XMVectorMultiply(Dot, L1);
	NegativeOne = XMVectorSplatConstant(-1, 0);
	One = XMVectorSplatOne();
	CosAngle = XMVectorClamp(CosAngle, NegativeOne, One);
	Result = XMVectorACos(CosAngle);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR L1;
	XMVECTOR L2;
	XMVECTOR Dot;
	XMVECTOR CosAngle;
	XMVECTOR Result;
	L1 = XMVector2ReciprocalLength(V1);
	L2 = XMVector2ReciprocalLength(V2);
	Dot = XMVector2Dot(V1, V2);
	L1 = _mm_mul_ps(L1, L2);
	CosAngle = _mm_mul_ps(Dot, L1);
	CosAngle = XMVectorClamp(CosAngle, CAST_M128(g_XMNegativeOne), CAST_M128(g_XMOne));
	Result = XMVectorACos(CosAngle);
	return Result;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2LinePointDistance(FXMVECTOR LinePoint1, FXMVECTOR LinePoint2, FXMVECTOR Point)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR PointVector;
	XMVECTOR LineVector;
	XMVECTOR ReciprocalLengthSq;
	XMVECTOR PointProjectionScale;
	XMVECTOR DistanceVector;
	XMVECTOR Result;
	PointVector = XMVectorSubtract(Point, LinePoint1);
	LineVector = XMVectorSubtract(LinePoint2, LinePoint1);
	ReciprocalLengthSq = XMVector2LengthSq(LineVector);
	ReciprocalLengthSq = XMVectorReciprocal(ReciprocalLengthSq);
	PointProjectionScale = XMVector2Dot(PointVector, LineVector);
	PointProjectionScale = XMVectorMultiply(PointProjectionScale, ReciprocalLengthSq);
	DistanceVector = XMVectorMultiply(LineVector, PointProjectionScale);
	DistanceVector = XMVectorSubtract(PointVector, DistanceVector);
	Result = XMVector2Length(DistanceVector);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR PointVector = _mm_sub_ps(Point, LinePoint1);
	XMVECTOR LineVector = _mm_sub_ps(LinePoint2, LinePoint1);
	XMVECTOR ReciprocalLengthSq = XMVector2LengthSq(LineVector);
	XMVECTOR vResult = XMVector2Dot(PointVector, LineVector);
	vResult = _mm_div_ps(vResult, ReciprocalLengthSq);
	vResult = _mm_mul_ps(vResult, LineVector);
	vResult = _mm_sub_ps(PointVector, vResult);
	vResult = XMVector2Length(vResult);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2IntersectLine(FXMVECTOR Line1Point1, FXMVECTOR Line1Point2, FXMVECTOR Line2Point1, CXMVECTOR Line2Point2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V1;
	XMVECTOR V2;
	XMVECTOR V3;
	XMVECTOR C1;
	XMVECTOR C2;
	XMVECTOR Result;
	CONST XMVECTOR Zero = XMVectorZero();
	V1 = XMVectorSubtract(Line1Point2, Line1Point1);
	V2 = XMVectorSubtract(Line2Point2, Line2Point1);
	V3 = XMVectorSubtract(Line1Point1, Line2Point1);
	C1 = XMVector2Cross(V1, V2);
	C2 = XMVector2Cross(V2, V3);
	if (XMVector2NearEqual(C1, Zero, g_XMEpsilon.v))
	{
		if (XMVector2NearEqual(C2, Zero, g_XMEpsilon.v))
		{
			Result = g_XMInfinity.v;
		}
		else
		{
			Result = g_XMQNaN.v;
		}
	}
	else
	{
		XMVECTOR Scale;
		Scale = XMVectorReciprocal(C1);
		Scale = XMVectorMultiply(C2, Scale);
		Result = XMVectorMultiplyAdd(V1, Scale, Line1Point1);
	}
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR V1 = _mm_sub_ps(Line1Point2, Line1Point1);
	XMVECTOR V2 = _mm_sub_ps(Line2Point2, Line2Point1);
	XMVECTOR V3 = _mm_sub_ps(Line1Point1, Line2Point1);
	XMVECTOR C1 = XMVector2Cross(V1, V2);
	XMVECTOR C2 = XMVector2Cross(V2, V3);
	XMVECTOR vResultMask = _mm_setzero_ps();
	vResultMask = _mm_sub_ps(vResultMask, C1);
	vResultMask = _mm_max_ps(vResultMask, C1);
	vResultMask = _mm_cmpgt_ps(vResultMask, CAST_M128(g_XMEpsilon));
	XMVECTOR vFailMask = _mm_setzero_ps();
	vFailMask = _mm_sub_ps(vFailMask, C2);
	vFailMask = _mm_max_ps(vFailMask, C2);
	vFailMask = _mm_cmple_ps(vFailMask, CAST_M128(g_XMEpsilon));
	XMVECTOR vFail = _mm_and_ps(vFailMask, CAST_M128(g_XMInfinity));
	vFailMask = _mm_andnot_ps(vFailMask, CAST_M128(g_XMQNaN));
	vFail = _mm_or_ps(vFail, vFailMask);
	XMVECTOR vResult = _mm_div_ps(C2, C1);
	vResult = _mm_mul_ps(vResult, V1);
	vResult = _mm_add_ps(vResult, Line1Point1);
	vResult = _mm_and_ps(vResult, vResultMask);
	vResultMask = _mm_andnot_ps(vResultMask, vFail);
	vResult = _mm_or_ps(vResult, vResultMask);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector2Transform(FXMVECTOR V, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR X;
	XMVECTOR Y;
	XMVECTOR Result;
	Y = XMVectorSplatY(V);
	X = XMVectorSplatX(V);
	Result = XMVectorMultiplyAdd(Y, M.r[1], M.r[3]);
	Result = XMVectorMultiplyAdd(X, M.r[0], Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(0, 0, 0, 0));
	vResult = _mm_mul_ps(vResult, M.r[0]);
	XMVECTOR vTemp = _mm_shuffle_ps(V, V, _MM_SHUFFLE(1, 1, 1, 1));
	vTemp = _mm_mul_ps(vTemp, M.r[1]);
	vResult = _mm_add_ps(vResult, vTemp);
	vResult = _mm_add_ps(vResult, M.r[3]);
	return vResult;
#else
#endif
}
XMINLINE XMFLOAT4 *XMVector2TransformStream(XMFLOAT4 *pOutputStream, UINT OutputStride, CONST XMFLOAT2 *pInputStream, UINT InputStride, UINT VectorCount, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMVECTOR X;
	XMVECTOR Y;
	XMVECTOR Result;
	UINT i;
	BYTE *pInputVector = (BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	for (i = 0; i < VectorCount; i++)
	{
		V = XMLoadFloat2((XMFLOAT2 *)pInputVector);
		Y = XMVectorSplatY(V);
		X = XMVectorSplatX(V);
		Result = XMVectorMultiplyAdd(Y, M.r[1], M.r[3]);
		Result = XMVectorMultiplyAdd(X, M.r[0], Result);
		XMStoreFloat4((XMFLOAT4 *)pOutputVector, Result);
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	UINT i;
	const BYTE *pInputVector = (const BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	for (i = 0; i < VectorCount; i++)
	{
		XMVECTOR X = _mm_load_ps1(&((const XMFLOAT2 *)(pInputVector))->x);
		XMVECTOR vResult = _mm_load_ps1(&((const XMFLOAT2 *)(pInputVector))->y);
		vResult = _mm_mul_ps(vResult, M.r[1]);
		vResult = _mm_add_ps(vResult, M.r[3]);
		X = _mm_mul_ps(X, M.r[0]);
		vResult = _mm_add_ps(vResult, X);
		_mm_storeu_ps((float *)(pOutputVector), vResult);
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMINLINE XMFLOAT4 *XMVector2TransformStreamNC(XMFLOAT4 *pOutputStream, UINT OutputStride, CONST XMFLOAT2 *pInputStream, UINT InputStride, UINT VectorCount, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_) || defined(XM_NO_MISALIGNED_VECTOR_ACCESS) || defined(_XM_SSE_INTRINSICS_)
	return XMVector2TransformStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, M);
#else
#endif
}
XMFINLINE XMVECTOR XMVector2TransformCoord(FXMVECTOR V, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR X;
	XMVECTOR Y;
	XMVECTOR InverseW;
	XMVECTOR Result;
	Y = XMVectorSplatY(V);
	X = XMVectorSplatX(V);
	Result = XMVectorMultiplyAdd(Y, M.r[1], M.r[3]);
	Result = XMVectorMultiplyAdd(X, M.r[0], Result);
	InverseW = XMVectorSplatW(Result);
	InverseW = XMVectorReciprocal(InverseW);
	Result = XMVectorMultiply(Result, InverseW);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(0, 0, 0, 0));
	vResult = _mm_mul_ps(vResult, M.r[0]);
	XMVECTOR vTemp = _mm_shuffle_ps(V, V, _MM_SHUFFLE(1, 1, 1, 1));
	vTemp = _mm_mul_ps(vTemp, M.r[1]);
	vResult = _mm_add_ps(vResult, vTemp);
	vResult = _mm_add_ps(vResult, M.r[3]);
	vTemp = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(3, 3, 3, 3));
	vResult = _mm_div_ps(vResult, vTemp);
	return vResult;
#else
#endif
}
XMINLINE XMFLOAT2 *XMVector2TransformCoordStream(XMFLOAT2 *pOutputStream, UINT OutputStride, CONST XMFLOAT2 *pInputStream, UINT InputStride, UINT VectorCount, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMVECTOR X;
	XMVECTOR Y;
	XMVECTOR InverseW;
	XMVECTOR Result;
	UINT i;
	BYTE *pInputVector = (BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	for (i = 0; i < VectorCount; i++)
	{
		V = XMLoadFloat2((XMFLOAT2 *)pInputVector);
		Y = XMVectorSplatY(V);
		X = XMVectorSplatX(V);
		Result = XMVectorMultiplyAdd(Y, M.r[1], M.r[3]);
		Result = XMVectorMultiplyAdd(X, M.r[0], Result);
		InverseW = XMVectorSplatW(Result);
		InverseW = XMVectorReciprocal(InverseW);
		Result = XMVectorMultiply(Result, InverseW);
		XMStoreFloat2((XMFLOAT2 *)pOutputVector, Result);
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	UINT i;
	const BYTE *pInputVector = (BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	for (i = 0; i < VectorCount; i++)
	{
		XMVECTOR X = _mm_load_ps1(&((const XMFLOAT2 *)(pInputVector))->x);
		XMVECTOR vResult = _mm_load_ps1(&((const XMFLOAT2 *)(pInputVector))->y);
		vResult = _mm_mul_ps(vResult, M.r[1]);
		vResult = _mm_add_ps(vResult, M.r[3]);
		X = _mm_mul_ps(X, M.r[0]);
		vResult = _mm_add_ps(vResult, X);
		X = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(3, 3, 3, 3));
		vResult = _mm_div_ps(vResult, X);
		_mm_store_sd((double *)(pOutputVector), CAST_M128D(vResult));
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMVector2TransformNormal(FXMVECTOR V, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR X;
	XMVECTOR Y;
	XMVECTOR Result;
	Y = XMVectorSplatY(V);
	X = XMVectorSplatX(V);
	Result = XMVectorMultiply(Y, M.r[1]);
	Result = XMVectorMultiplyAdd(X, M.r[0], Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(0, 0, 0, 0));
	vResult = _mm_mul_ps(vResult, M.r[0]);
	XMVECTOR vTemp = _mm_shuffle_ps(V, V, _MM_SHUFFLE(1, 1, 1, 1));
	vTemp = _mm_mul_ps(vTemp, M.r[1]);
	vResult = _mm_add_ps(vResult, vTemp);
	return vResult;
#else
#endif
}
XMINLINE XMFLOAT2 *XMVector2TransformNormalStream(XMFLOAT2 *pOutputStream, UINT OutputStride, CONST XMFLOAT2 *pInputStream, UINT InputStride, UINT VectorCount, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMVECTOR X;
	XMVECTOR Y;
	XMVECTOR Result;
	UINT i;
	BYTE *pInputVector = (BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	for (i = 0; i < VectorCount; i++)
	{
		V = XMLoadFloat2((XMFLOAT2 *)pInputVector);
		Y = XMVectorSplatY(V);
		X = XMVectorSplatX(V);
		Result = XMVectorMultiply(Y, M.r[1]);
		Result = XMVectorMultiplyAdd(X, M.r[0], Result);
		XMStoreFloat2((XMFLOAT2 *)pOutputVector, Result);
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	UINT i;
	const BYTE *pInputVector = (const BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	for (i = 0; i < VectorCount; i++)
	{
		XMVECTOR X = _mm_load_ps1(&((const XMFLOAT2 *)(pInputVector))->x);
		XMVECTOR vResult = _mm_load_ps1(&((const XMFLOAT2 *)(pInputVector))->y);
		vResult = _mm_mul_ps(vResult, M.r[1]);
		X = _mm_mul_ps(X, M.r[0]);
		vResult = _mm_add_ps(vResult, X);
		_mm_store_sd((double *)(pOutputVector), CAST_CONST_M128D(vResult));
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE BOOL XMVector3Equal(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] == V2.vector4_f32[0]) && (V1.vector4_f32[1] == V2.vector4_f32[1]) && (V1.vector4_f32[2] == V2.vector4_f32[2])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpeq_ps(V1, V2);
	return (((_mm_movemask_ps(vTemp) & 7) == 7) != 0);
#else
	return XMComparisonAllTrue(XMVector3EqualR(V1, V2));
#endif
}
XMFINLINE UINT XMVector3EqualR(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT CR = 0;
	if ((V1.vector4_f32[0] == V2.vector4_f32[0]) && (V1.vector4_f32[1] == V2.vector4_f32[1]) && (V1.vector4_f32[2] == V2.vector4_f32[2]))
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if ((V1.vector4_f32[0] != V2.vector4_f32[0]) && (V1.vector4_f32[1] != V2.vector4_f32[1]) && (V1.vector4_f32[2] != V2.vector4_f32[2]))
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpeq_ps(V1, V2);
	int iTest = _mm_movemask_ps(vTemp) & 7;
	UINT CR = 0;
	if (iTest == 7)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!iTest)
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#else
#endif
}
XMFINLINE BOOL XMVector3EqualInt(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_u32[0] == V2.vector4_u32[0]) && (V1.vector4_u32[1] == V2.vector4_u32[1]) && (V1.vector4_u32[2] == V2.vector4_u32[2])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vTemp = _mm_cmpeq_epi32(CAST_CONST_M128I(V1), CAST_CONST_M128I(V2));
	return (((_mm_movemask_ps(CAST_CONST_M128(vTemp)) & 7) == 7) != 0);
#else
	return XMComparisonAllTrue(XMVector3EqualIntR(V1, V2));
#endif
}
XMFINLINE UINT XMVector3EqualIntR(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT CR = 0;
	if ((V1.vector4_u32[0] == V2.vector4_u32[0]) && (V1.vector4_u32[1] == V2.vector4_u32[1]) && (V1.vector4_u32[2] == V2.vector4_u32[2]))
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if ((V1.vector4_u32[0] != V2.vector4_u32[0]) && (V1.vector4_u32[1] != V2.vector4_u32[1]) && (V1.vector4_u32[2] != V2.vector4_u32[2]))
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vTemp = _mm_cmpeq_epi32(CAST_CONST_M128I(V1), CAST_CONST_M128I(V2));
	int iTemp = _mm_movemask_ps(CAST_CONST_M128(vTemp)) & 7;
	UINT CR = 0;
	if (iTemp == 7)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!iTemp)
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#else
#endif
}
XMFINLINE BOOL XMVector3NearEqual(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Epsilon)
{
#if defined(_XM_NO_INTRINSICS_)
	FLOAT dx, dy, dz;
	dx = fabsf(V1.vector4_f32[0] - V2.vector4_f32[0]);
	dy = fabsf(V1.vector4_f32[1] - V2.vector4_f32[1]);
	dz = fabsf(V1.vector4_f32[2] - V2.vector4_f32[2]);
	return (((dx <= Epsilon.vector4_f32[0]) && (dy <= Epsilon.vector4_f32[1]) && (dz <= Epsilon.vector4_f32[2])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vDelta = _mm_sub_ps(V1, V2);
	XMVECTOR vTemp = _mm_setzero_ps();
	vTemp = _mm_sub_ps(vTemp, vDelta);
	vTemp = _mm_max_ps(vTemp, vDelta);
	vTemp = _mm_cmple_ps(vTemp, Epsilon);
	return (((_mm_movemask_ps(vTemp) & 7) == 0x7) != 0);
#else
#endif
}
XMFINLINE BOOL XMVector3NotEqual(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] != V2.vector4_f32[0]) || (V1.vector4_f32[1] != V2.vector4_f32[1]) || (V1.vector4_f32[2] != V2.vector4_f32[2])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpeq_ps(V1, V2);
	return (((_mm_movemask_ps(vTemp) & 7) != 7) != 0);
#else
	return XMComparisonAnyFalse(XMVector3EqualR(V1, V2));
#endif
}
XMFINLINE BOOL XMVector3NotEqualInt(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_u32[0] != V2.vector4_u32[0]) || (V1.vector4_u32[1] != V2.vector4_u32[1]) || (V1.vector4_u32[2] != V2.vector4_u32[2])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vTemp = _mm_cmpeq_epi32(CAST_CONST_M128I(V1), CAST_CONST_M128I(V2));
	return (((_mm_movemask_ps(CAST_CONST_M128(vTemp)) & 7) != 7) != 0);
#else
	return XMComparisonAnyFalse(XMVector3EqualIntR(V1, V2));
#endif
}
XMFINLINE BOOL XMVector3Greater(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] > V2.vector4_f32[0]) && (V1.vector4_f32[1] > V2.vector4_f32[1]) && (V1.vector4_f32[2] > V2.vector4_f32[2])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpgt_ps(V1, V2);
	return (((_mm_movemask_ps(vTemp) & 7) == 7) != 0);
#else
	return XMComparisonAllTrue(XMVector3GreaterR(V1, V2));
#endif
}
XMFINLINE UINT XMVector3GreaterR(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT CR = 0;
	if ((V1.vector4_f32[0] > V2.vector4_f32[0]) && (V1.vector4_f32[1] > V2.vector4_f32[1]) && (V1.vector4_f32[2] > V2.vector4_f32[2]))
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if ((V1.vector4_f32[0] <= V2.vector4_f32[0]) && (V1.vector4_f32[1] <= V2.vector4_f32[1]) && (V1.vector4_f32[2] <= V2.vector4_f32[2]))
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpgt_ps(V1, V2);
	UINT CR = 0;
	int iTest = _mm_movemask_ps(vTemp) & 7;
	if (iTest == 7)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!iTest)
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#else
#endif
}
XMFINLINE BOOL XMVector3GreaterOrEqual(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] >= V2.vector4_f32[0]) && (V1.vector4_f32[1] >= V2.vector4_f32[1]) && (V1.vector4_f32[2] >= V2.vector4_f32[2])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpge_ps(V1, V2);
	return (((_mm_movemask_ps(vTemp) & 7) == 7) != 0);
#else
	return XMComparisonAllTrue(XMVector3GreaterOrEqualR(V1, V2));
#endif
}
XMFINLINE UINT XMVector3GreaterOrEqualR(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT CR = 0;
	if ((V1.vector4_f32[0] >= V2.vector4_f32[0]) && (V1.vector4_f32[1] >= V2.vector4_f32[1]) && (V1.vector4_f32[2] >= V2.vector4_f32[2]))
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if ((V1.vector4_f32[0] < V2.vector4_f32[0]) && (V1.vector4_f32[1] < V2.vector4_f32[1]) && (V1.vector4_f32[2] < V2.vector4_f32[2]))
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpge_ps(V1, V2);
	UINT CR = 0;
	int iTest = _mm_movemask_ps(vTemp) & 7;
	if (iTest == 7)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!iTest)
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#else
#endif
}
XMFINLINE BOOL XMVector3Less(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] < V2.vector4_f32[0]) && (V1.vector4_f32[1] < V2.vector4_f32[1]) && (V1.vector4_f32[2] < V2.vector4_f32[2])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmplt_ps(V1, V2);
	return (((_mm_movemask_ps(vTemp) & 7) == 7) != 0);
#else
	return XMComparisonAllTrue(XMVector3GreaterR(V2, V1));
#endif
}
XMFINLINE BOOL XMVector3LessOrEqual(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] <= V2.vector4_f32[0]) && (V1.vector4_f32[1] <= V2.vector4_f32[1]) && (V1.vector4_f32[2] <= V2.vector4_f32[2])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmple_ps(V1, V2);
	return (((_mm_movemask_ps(vTemp) & 7) == 7) != 0);
#else
	return XMComparisonAllTrue(XMVector3GreaterOrEqualR(V2, V1));
#endif
}
XMFINLINE BOOL XMVector3InBounds(FXMVECTOR V, FXMVECTOR Bounds)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V.vector4_f32[0] <= Bounds.vector4_f32[0] && V.vector4_f32[0] >= -Bounds.vector4_f32[0]) && (V.vector4_f32[1] <= Bounds.vector4_f32[1] && V.vector4_f32[1] >= -Bounds.vector4_f32[1]) && (V.vector4_f32[2] <= Bounds.vector4_f32[2] && V.vector4_f32[2] >= -Bounds.vector4_f32[2])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp1 = _mm_cmple_ps(V, Bounds);
	XMVECTOR vTemp2 = _mm_mul_ps(Bounds, CAST_M128(g_XMNegativeOne));
	vTemp2 = _mm_cmple_ps(vTemp2, V);
	vTemp1 = _mm_and_ps(vTemp1, vTemp2);
	return (((_mm_movemask_ps(vTemp1) & 0x7) == 0x7) != 0);
#else
	return XMComparisonAllInBounds(XMVector3InBoundsR(V, Bounds));
#endif
}
XMFINLINE UINT XMVector3InBoundsR(FXMVECTOR V, FXMVECTOR Bounds)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT CR = 0;
	if ((V.vector4_f32[0] <= Bounds.vector4_f32[0] && V.vector4_f32[0] >= -Bounds.vector4_f32[0]) && (V.vector4_f32[1] <= Bounds.vector4_f32[1] && V.vector4_f32[1] >= -Bounds.vector4_f32[1]) && (V.vector4_f32[2] <= Bounds.vector4_f32[2] && V.vector4_f32[2] >= -Bounds.vector4_f32[2]))
	{
		CR = XM_CRMASK_CR6BOUNDS;
	}
	return CR;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp1 = _mm_cmple_ps(V, Bounds);
	XMVECTOR vTemp2 = _mm_mul_ps(Bounds, CAST_M128(g_XMNegativeOne));
	vTemp2 = _mm_cmple_ps(vTemp2, V);
	vTemp1 = _mm_and_ps(vTemp1, vTemp2);
	return ((_mm_movemask_ps(vTemp1) & 0x7) == 0x7) ? XM_CRMASK_CR6BOUNDS : 0;
#else
#endif
}
XMFINLINE BOOL XMVector3IsNaN(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return (XMISNAN(V.vector4_f32[0]) || XMISNAN(V.vector4_f32[1]) || XMISNAN(V.vector4_f32[2]));
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vTempInf = _mm_and_si128(CAST_CONST_M128I(V), CAST_M128I(g_XMInfinity));
	__m128i vTempNan = _mm_and_si128(CAST_CONST_M128I(V), CAST_M128I(g_XMQNaNTest));
	vTempInf = _mm_cmpeq_epi32(vTempInf, CAST_M128I(g_XMInfinity));
	vTempNan = _mm_cmpeq_epi32(vTempNan, CAST_M128I(g_XMZero));
	vTempNan = _mm_andnot_si128(vTempNan, vTempInf);
	return ((_mm_movemask_ps(CAST_CONST_M128(vTempNan)) & 7) != 0);
#else
#endif
}
XMFINLINE BOOL XMVector3IsInfinite(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return (XMISINF(V.vector4_f32[0]) || XMISINF(V.vector4_f32[1]) || XMISINF(V.vector4_f32[2]));
#elif defined(_XM_SSE_INTRINSICS_)
	__m128 vTemp = _mm_and_ps(V, CAST_M128(g_XMAbsMask));
	vTemp = _mm_cmpeq_ps(vTemp, CAST_M128(g_XMInfinity));
	return ((_mm_movemask_ps(vTemp) & 7) != 0);
#else
#endif
}
XMFINLINE XMVECTOR XMVector3Dot(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	FLOAT fValue = V1.vector4_f32[0] * V2.vector4_f32[0] + V1.vector4_f32[1] * V2.vector4_f32[1] + V1.vector4_f32[2] * V2.vector4_f32[2];
	XMVECTOR vResult = {
		fValue,
		fValue,
		fValue,
		fValue
	};
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vDot = _mm_mul_ps(V1, V2);
	XMVECTOR vTemp = _mm_shuffle_ps(vDot, vDot, _MM_SHUFFLE(2, 1, 2, 1));
	vDot = _mm_add_ss(vDot, vTemp);
	vTemp = _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(1, 1, 1, 1));
	vDot = _mm_add_ss(vDot, vTemp);
	return _mm_shuffle_ps(vDot, vDot, _MM_SHUFFLE(0, 0, 0, 0));
#else
#endif
}
XMFINLINE XMVECTOR XMVector3Cross(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR vResult = {
		(V1.vector4_f32[1] * V2.vector4_f32[2]) - (V1.vector4_f32[2] * V2.vector4_f32[1]),
		(V1.vector4_f32[2] * V2.vector4_f32[0]) - (V1.vector4_f32[0] * V2.vector4_f32[2]),
		(V1.vector4_f32[0] * V2.vector4_f32[1]) - (V1.vector4_f32[1] * V2.vector4_f32[0]),
		0.0f
	};
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp1 = _mm_shuffle_ps(V1, V1, _MM_SHUFFLE(3, 0, 2, 1));
	XMVECTOR vTemp2 = _mm_shuffle_ps(V2, V2, _MM_SHUFFLE(3, 1, 0, 2));
	XMVECTOR vResult = _mm_mul_ps(vTemp1, vTemp2);
	vTemp1 = _mm_shuffle_ps(vTemp1, vTemp1, _MM_SHUFFLE(3, 0, 2, 1));
	vTemp2 = _mm_shuffle_ps(vTemp2, vTemp2, _MM_SHUFFLE(3, 1, 0, 2));
	vTemp1 = _mm_mul_ps(vTemp1, vTemp2);
	vResult = _mm_sub_ps(vResult, vTemp1);
	return _mm_and_ps(vResult, CAST_M128(g_XMMask3));
#else
#endif
}
XMFINLINE XMVECTOR XMVector3LengthSq(FXMVECTOR V)
{
	return XMVector3Dot(V, V);
}
XMFINLINE XMVECTOR XMVector3ReciprocalLengthEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector3LengthSq(V);
	Result = XMVectorReciprocalSqrtEst(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 2, 1, 2));
	vLengthSq = _mm_add_ss(vLengthSq, vTemp);
	vTemp = _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(1, 1, 1, 1));
	vLengthSq = _mm_add_ss(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(0, 0, 0, 0));
	vLengthSq = _mm_rsqrt_ps(vLengthSq);
	return vLengthSq;
#else
#endif
}
XMFINLINE XMVECTOR XMVector3ReciprocalLength(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector3LengthSq(V);
	Result = XMVectorReciprocalSqrt(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vDot = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vDot, vDot, _MM_SHUFFLE(2, 1, 2, 1));
	vDot = _mm_add_ss(vDot, vTemp);
	vTemp = _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(1, 1, 1, 1));
	vDot = _mm_add_ss(vDot, vTemp);
	vDot = _mm_shuffle_ps(vDot, vDot, _MM_SHUFFLE(0, 0, 0, 0));
	vDot = _mm_sqrt_ps(vDot);
	vDot = _mm_div_ps(CAST_M128(g_XMOne), vDot);
	return vDot;
#else
#endif
}
XMFINLINE XMVECTOR XMVector3LengthEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector3LengthSq(V);
	Result = XMVectorSqrtEst(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 2, 1, 2));
	vLengthSq = _mm_add_ss(vLengthSq, vTemp);
	vTemp = _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(1, 1, 1, 1));
	vLengthSq = _mm_add_ss(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(0, 0, 0, 0));
	vLengthSq = _mm_sqrt_ps(vLengthSq);
	return vLengthSq;
#else
#endif
}
XMFINLINE XMVECTOR XMVector3Length(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector3LengthSq(V);
	Result = XMVectorSqrt(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 2, 1, 2));
	vLengthSq = _mm_add_ss(vLengthSq, vTemp);
	vTemp = _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(1, 1, 1, 1));
	vLengthSq = _mm_add_ss(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(0, 0, 0, 0));
	vLengthSq = _mm_sqrt_ps(vLengthSq);
	return vLengthSq;
#else
#endif
}
XMFINLINE XMVECTOR XMVector3NormalizeEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector3ReciprocalLength(V);
	Result = XMVectorMultiply(V, Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vDot = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vDot, vDot, _MM_SHUFFLE(2, 1, 2, 1));
	vDot = _mm_add_ss(vDot, vTemp);
	vTemp = _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(1, 1, 1, 1));
	vDot = _mm_add_ss(vDot, vTemp);
	vDot = _mm_shuffle_ps(vDot, vDot, _MM_SHUFFLE(0, 0, 0, 0));
	vDot = _mm_rsqrt_ps(vDot);
	vDot = _mm_mul_ps(vDot, V);
	return vDot;
#else
#endif
}
XMFINLINE XMVECTOR XMVector3Normalize(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	FLOAT fLength;
	XMVECTOR vResult;
	vResult = XMVector3Length(V);
	fLength = vResult.vector4_f32[0];
	if (fLength > 0)
	{
		fLength = 1.0f / fLength;
	}

	vResult.vector4_f32[0] = V.vector4_f32[0] * fLength;
	vResult.vector4_f32[1] = V.vector4_f32[1] * fLength;
	vResult.vector4_f32[2] = V.vector4_f32[2] * fLength;
	vResult.vector4_f32[3] = V.vector4_f32[3] * fLength;
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(2, 1, 2, 1));
	vLengthSq = _mm_add_ss(vLengthSq, vTemp);
	vTemp = _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(1, 1, 1, 1));
	vLengthSq = _mm_add_ss(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(0, 0, 0, 0));
	XMVECTOR vResult = _mm_sqrt_ps(vLengthSq);
	XMVECTOR vZeroMask = _mm_setzero_ps();
	vZeroMask = _mm_cmpneq_ps(vZeroMask, vResult);
	vLengthSq = _mm_cmpneq_ps(vLengthSq, CAST_M128(g_XMInfinity));
	vResult = _mm_div_ps(V, vResult);
	vResult = _mm_and_ps(vResult, vZeroMask);
	XMVECTOR vTemp1 = _mm_andnot_ps(vLengthSq, CAST_M128(g_XMQNaN));
	XMVECTOR vTemp2 = _mm_and_ps(vResult, vLengthSq);
	vResult = _mm_or_ps(vTemp1, vTemp2);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector3ClampLength(FXMVECTOR V, FLOAT LengthMin, FLOAT LengthMax)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR ClampMax;
	XMVECTOR ClampMin;
	ClampMax = XMVectorReplicate(LengthMax);
	ClampMin = XMVectorReplicate(LengthMin);
	return XMVector3ClampLengthV(V, ClampMin, ClampMax);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR ClampMax = _mm_set_ps1(LengthMax);
	XMVECTOR ClampMin = _mm_set_ps1(LengthMin);
	return XMVector3ClampLengthV(V, ClampMin, ClampMax);
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMVector3ClampLengthV(FXMVECTOR V, FXMVECTOR LengthMin, FXMVECTOR LengthMax)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR ClampLength;
	XMVECTOR LengthSq;
	XMVECTOR RcpLength;
	XMVECTOR Length;
	XMVECTOR Normal;
	XMVECTOR Zero;
	XMVECTOR InfiniteLength;
	XMVECTOR ZeroLength;
	XMVECTOR Select;
	XMVECTOR ControlMax;
	XMVECTOR ControlMin;
	XMVECTOR Control;
	XMVECTOR Result;
	XMASSERT((LengthMin.vector4_f32[1] == LengthMin.vector4_f32[0]) && (LengthMin.vector4_f32[2] == LengthMin.vector4_f32[0]));
	XMASSERT((LengthMax.vector4_f32[1] == LengthMax.vector4_f32[0]) && (LengthMax.vector4_f32[2] == LengthMax.vector4_f32[0]));
	XMASSERT(XMVector3GreaterOrEqual(LengthMin, XMVectorZero()));
	XMASSERT(XMVector3GreaterOrEqual(LengthMax, XMVectorZero()));
	XMASSERT(XMVector3GreaterOrEqual(LengthMax, LengthMin));
	LengthSq = XMVector3LengthSq(V);
	Zero = XMVectorZero();
	RcpLength = XMVectorReciprocalSqrt(LengthSq);
	InfiniteLength = XMVectorEqualInt(LengthSq, g_XMInfinity.v);
	ZeroLength = XMVectorEqual(LengthSq, Zero);
	Normal = XMVectorMultiply(V, RcpLength);
	Length = XMVectorMultiply(LengthSq, RcpLength);
	Select = XMVectorEqualInt(InfiniteLength, ZeroLength);
	Length = XMVectorSelect(LengthSq, Length, Select);
	Normal = XMVectorSelect(LengthSq, Normal, Select);
	ControlMax = XMVectorGreater(Length, LengthMax);
	ControlMin = XMVectorLess(Length, LengthMin);
	ClampLength = XMVectorSelect(Length, LengthMax, ControlMax);
	ClampLength = XMVectorSelect(ClampLength, LengthMin, ControlMin);
	Result = XMVectorMultiply(Normal, ClampLength);
	Control = XMVectorEqualInt(ControlMax, ControlMin);
	Result = XMVectorSelect(Result, V, Control);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR ClampLength;
	XMVECTOR LengthSq;
	XMVECTOR RcpLength;
	XMVECTOR Length;
	XMVECTOR Normal;
	XMVECTOR InfiniteLength;
	XMVECTOR ZeroLength;
	XMVECTOR Select;
	XMVECTOR ControlMax;
	XMVECTOR ControlMin;
	XMVECTOR Control;
	XMVECTOR Result;
	XMASSERT((XMVectorGetY(LengthMin) == XMVectorGetX(LengthMin)) && (XMVectorGetZ(LengthMin) == XMVectorGetX(LengthMin)));
	XMASSERT((XMVectorGetY(LengthMax) == XMVectorGetX(LengthMax)) && (XMVectorGetZ(LengthMax) == XMVectorGetX(LengthMax)));
	XMASSERT(XMVector3GreaterOrEqual(LengthMin, g_XMZero));
	XMASSERT(XMVector3GreaterOrEqual(LengthMax, g_XMZero));
	XMASSERT(XMVector3GreaterOrEqual(LengthMax, LengthMin));
	LengthSq = XMVector3LengthSq(V);
	RcpLength = XMVectorReciprocalSqrt(LengthSq);
	InfiniteLength = XMVectorEqualInt(LengthSq, CAST_M128(g_XMInfinity));
	ZeroLength = XMVectorEqual(LengthSq, CAST_M128(g_XMZero));
	Normal = _mm_mul_ps(V, RcpLength);
	Length = _mm_mul_ps(LengthSq, RcpLength);
	Select = XMVectorEqualInt(InfiniteLength, ZeroLength);
	Length = XMVectorSelect(LengthSq, Length, Select);
	Normal = XMVectorSelect(LengthSq, Normal, Select);
	ControlMax = XMVectorGreater(Length, LengthMax);
	ControlMin = XMVectorLess(Length, LengthMin);
	ClampLength = XMVectorSelect(Length, LengthMax, ControlMax);
	ClampLength = XMVectorSelect(ClampLength, LengthMin, ControlMin);
	Result = _mm_mul_ps(Normal, ClampLength);
	Control = XMVectorEqualInt(ControlMax, ControlMin);
	Result = XMVectorSelect(Result, V, Control);
	return Result;
#else
#endif
}
XMFINLINE XMVECTOR XMVector3Reflect(FXMVECTOR Incident, FXMVECTOR Normal)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector3Dot(Incident, Normal);
	Result = XMVectorAdd(Result, Result);
	Result = XMVectorNegativeMultiplySubtract(Result, Normal, Incident);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR Result = XMVector3Dot(Incident, Normal);
	Result = _mm_add_ps(Result, Result);
	Result = _mm_mul_ps(Result, Normal);
	Result = _mm_sub_ps(Incident, Result);
	return Result;
#else
#endif
}
XMFINLINE XMVECTOR XMVector3Refract(FXMVECTOR Incident, FXMVECTOR Normal, FLOAT RefractionIndex)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Index;
	Index = XMVectorReplicate(RefractionIndex);
	return XMVector3RefractV(Incident, Normal, Index);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR Index = _mm_set_ps1(RefractionIndex);
	return XMVector3RefractV(Incident, Normal, Index);
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMVector3RefractV(FXMVECTOR Incident, FXMVECTOR Normal, FXMVECTOR RefractionIndex)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR IDotN;
	XMVECTOR R;
	CONST XMVECTOR Zero = XMVectorZero();
	IDotN = XMVector3Dot(Incident, Normal);
	R = XMVectorNegativeMultiplySubtract(IDotN, IDotN, g_XMOne.v);
	R = XMVectorMultiply(R, RefractionIndex);
	R = XMVectorNegativeMultiplySubtract(R, RefractionIndex, g_XMOne.v);
	if (XMVector4LessOrEqual(R, Zero))
	{
		return Zero;
	}
	else
	{
		XMVECTOR Result;
		R = XMVectorSqrt(R);
		R = XMVectorMultiplyAdd(RefractionIndex, IDotN, R);
		Result = XMVectorMultiply(RefractionIndex, Incident);
		Result = XMVectorNegativeMultiplySubtract(Normal, R, Result);
		return Result;
	}
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR IDotN = XMVector3Dot(Incident, Normal);
	XMVECTOR R = _mm_mul_ps(IDotN, IDotN);
	R = _mm_sub_ps(CAST_M128(g_XMOne), R);
	R = _mm_mul_ps(R, RefractionIndex);
	R = _mm_mul_ps(R, RefractionIndex);
	R = _mm_sub_ps(CAST_M128(g_XMOne), R);
	XMVECTOR vResult = _mm_cmple_ps(R, CAST_M128(g_XMZero));
	if (_mm_movemask_ps(vResult) == 0x0f)
	{
		vResult = CAST_M128(g_XMZero);
	}
	else
	{
		R = _mm_sqrt_ps(R);
		vResult = _mm_mul_ps(RefractionIndex, IDotN);
		R = _mm_add_ps(R, vResult);
		vResult = _mm_mul_ps(RefractionIndex, Incident);
		R = _mm_mul_ps(R, Normal);
		vResult = _mm_sub_ps(vResult, R);
	}
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector3Orthogonal(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR NegativeV;
	XMVECTOR Z, YZYY;
	XMVECTOR ZIsNegative, YZYYIsNegative;
	XMVECTOR S, D;
	XMVECTOR R0, R1;
	XMVECTOR Select;
	XMVECTOR Zero;
	XMVECTOR Result;
	static CONST XMVECTORU32 Permute1X0X0X0X = { XM_PERMUTE_1X, XM_PERMUTE_0X, XM_PERMUTE_0X, XM_PERMUTE_0X };
	static CONST XMVECTORU32 Permute0Y0Z0Y0Y = { XM_PERMUTE_0Y, XM_PERMUTE_0Z, XM_PERMUTE_0Y, XM_PERMUTE_0Y };
	Zero = XMVectorZero();
	Z = XMVectorSplatZ(V);
	YZYY = XMVectorPermute(V, V, Permute0Y0Z0Y0Y.v);
	NegativeV = XMVectorSubtract(Zero, V);
	ZIsNegative = XMVectorLess(Z, Zero);
	YZYYIsNegative = XMVectorLess(YZYY, Zero);
	S = XMVectorAdd(YZYY, Z);
	D = XMVectorSubtract(YZYY, Z);
	Select = XMVectorEqualInt(ZIsNegative, YZYYIsNegative);
	R0 = XMVectorPermute(NegativeV, S, Permute1X0X0X0X.v);
	R1 = XMVectorPermute(V, D, Permute1X0X0X0X.v);
	Result = XMVectorSelect(R1, R0, Select);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR NegativeV;
	XMVECTOR Z, YZYY;
	XMVECTOR ZIsNegative, YZYYIsNegative;
	XMVECTOR S, D;
	XMVECTOR R0, R1;
	XMVECTOR Select;
	XMVECTOR Zero;
	XMVECTOR Result;
	static CONST XMVECTORI32 Permute1X0X0X0X = { XM_PERMUTE_1X, XM_PERMUTE_0X, XM_PERMUTE_0X, XM_PERMUTE_0X };
	static CONST XMVECTORI32 Permute0Y0Z0Y0Y = { XM_PERMUTE_0Y, XM_PERMUTE_0Z, XM_PERMUTE_0Y, XM_PERMUTE_0Y };
	Zero = XMVectorZero();
	Z = XMVectorSplatZ(V);
	YZYY = XMVectorPermute(V, V, CAST_M128(Permute0Y0Z0Y0Y));
	NegativeV = _mm_sub_ps(Zero, V);
	ZIsNegative = XMVectorLess(Z, Zero);
	YZYYIsNegative = XMVectorLess(YZYY, Zero);
	S = _mm_add_ps(YZYY, Z);
	D = _mm_sub_ps(YZYY, Z);
	Select = XMVectorEqualInt(ZIsNegative, YZYYIsNegative);
	R0 = XMVectorPermute(NegativeV, S, CAST_M128(Permute1X0X0X0X));
	R1 = XMVectorPermute(V, D, CAST_M128(Permute1X0X0X0X));
	Result = XMVectorSelect(R1, R0, Select);
	return Result;
#else
#endif
}
XMFINLINE XMVECTOR XMVector3AngleBetweenNormalsEst(FXMVECTOR N1, FXMVECTOR N2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	XMVECTOR NegativeOne;
	XMVECTOR One;
	Result = XMVector3Dot(N1, N2);
	NegativeOne = XMVectorSplatConstant(-1, 0);
	One = XMVectorSplatOne();
	Result = XMVectorClamp(Result, NegativeOne, One);
	Result = XMVectorACosEst(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = XMVector3Dot(N1, N2);
	vResult = _mm_max_ps(vResult, CAST_M128(g_XMNegativeOne));
	vResult = _mm_min_ps(vResult, CAST_M128(g_XMOne));
	vResult = XMVectorACosEst(vResult);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector3AngleBetweenNormals(FXMVECTOR N1, FXMVECTOR N2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	XMVECTOR NegativeOne;
	XMVECTOR One;
	Result = XMVector3Dot(N1, N2);
	NegativeOne = XMVectorSplatConstant(-1, 0);
	One = XMVectorSplatOne();
	Result = XMVectorClamp(Result, NegativeOne, One);
	Result = XMVectorACos(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = XMVector3Dot(N1, N2);
	vResult = _mm_max_ps(vResult, CAST_M128(g_XMNegativeOne));
	vResult = _mm_min_ps(vResult, CAST_M128(g_XMOne));
	vResult = XMVectorACos(vResult);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector3AngleBetweenVectors(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR L1;
	XMVECTOR L2;
	XMVECTOR Dot;
	XMVECTOR CosAngle;
	XMVECTOR NegativeOne;
	XMVECTOR One;
	XMVECTOR Result;
	L1 = XMVector3ReciprocalLength(V1);
	L2 = XMVector3ReciprocalLength(V2);
	Dot = XMVector3Dot(V1, V2);
	L1 = XMVectorMultiply(L1, L2);
	NegativeOne = XMVectorSplatConstant(-1, 0);
	One = XMVectorSplatOne();
	CosAngle = XMVectorMultiply(Dot, L1);
	CosAngle = XMVectorClamp(CosAngle, NegativeOne, One);
	Result = XMVectorACos(CosAngle);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR L1;
	XMVECTOR L2;
	XMVECTOR Dot;
	XMVECTOR CosAngle;
	XMVECTOR Result;
	L1 = XMVector3ReciprocalLength(V1);
	L2 = XMVector3ReciprocalLength(V2);
	Dot = XMVector3Dot(V1, V2);
	L1 = _mm_mul_ps(L1, L2);
	CosAngle = _mm_mul_ps(Dot, L1);
	CosAngle = XMVectorClamp(CosAngle, CAST_M128(g_XMNegativeOne), CAST_M128(g_XMOne));
	Result = XMVectorACos(CosAngle);
	return Result;
#else
#endif
}
XMFINLINE XMVECTOR XMVector3LinePointDistance(FXMVECTOR LinePoint1, FXMVECTOR LinePoint2, FXMVECTOR Point)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR PointVector;
	XMVECTOR LineVector;
	XMVECTOR ReciprocalLengthSq;
	XMVECTOR PointProjectionScale;
	XMVECTOR DistanceVector;
	XMVECTOR Result;
	PointVector = XMVectorSubtract(Point, LinePoint1);
	LineVector = XMVectorSubtract(LinePoint2, LinePoint1);
	ReciprocalLengthSq = XMVector3LengthSq(LineVector);
	ReciprocalLengthSq = XMVectorReciprocal(ReciprocalLengthSq);
	PointProjectionScale = XMVector3Dot(PointVector, LineVector);
	PointProjectionScale = XMVectorMultiply(PointProjectionScale, ReciprocalLengthSq);
	DistanceVector = XMVectorMultiply(LineVector, PointProjectionScale);
	DistanceVector = XMVectorSubtract(PointVector, DistanceVector);
	Result = XMVector3Length(DistanceVector);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR PointVector = _mm_sub_ps(Point, LinePoint1);
	XMVECTOR LineVector = _mm_sub_ps(LinePoint2, LinePoint1);
	XMVECTOR ReciprocalLengthSq = XMVector3LengthSq(LineVector);
	XMVECTOR vResult = XMVector3Dot(PointVector, LineVector);
	vResult = _mm_div_ps(vResult, ReciprocalLengthSq);
	vResult = _mm_mul_ps(vResult, LineVector);
	vResult = _mm_sub_ps(PointVector, vResult);
	vResult = XMVector3Length(vResult);
	return vResult;
#else
#endif
}
XMFINLINE VOID XMVector3ComponentsFromNormal(XMVECTOR *pParallel, XMVECTOR *pPerpendicular, FXMVECTOR V, FXMVECTOR Normal)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Parallel;
	XMVECTOR Scale;
	XMASSERT(pParallel);
	XMASSERT(pPerpendicular);
	Scale = XMVector3Dot(V, Normal);
	Parallel = XMVectorMultiply(Normal, Scale);
	*pParallel = Parallel;
	*pPerpendicular = XMVectorSubtract(V, Parallel);
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pParallel);
	XMASSERT(pPerpendicular);
	XMVECTOR Scale = XMVector3Dot(V, Normal);
	XMVECTOR Parallel = _mm_mul_ps(Normal, Scale);
	*pParallel = Parallel;
	*pPerpendicular = _mm_sub_ps(V, Parallel);
#else
#endif
}
XMFINLINE XMVECTOR XMVector3Rotate(FXMVECTOR V, FXMVECTOR RotationQuaternion)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR A;
	XMVECTOR Q;
	XMVECTOR Result;
	A = XMVectorSelect(g_XMSelect1110.v, V, g_XMSelect1110.v);
	Q = XMQuaternionConjugate(RotationQuaternion);
	Result = XMQuaternionMultiply(Q, A);
	Result = XMQuaternionMultiply(Result, RotationQuaternion);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR A;
	XMVECTOR Q;
	XMVECTOR Result;
	A = _mm_and_ps(V, CAST_M128(g_XMMask3));
	Q = XMQuaternionConjugate(RotationQuaternion);
	Result = XMQuaternionMultiply(Q, A);
	Result = XMQuaternionMultiply(Result, RotationQuaternion);
	return Result;
#else
#endif
}
XMFINLINE XMVECTOR XMVector3InverseRotate(FXMVECTOR V, FXMVECTOR RotationQuaternion)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR A;
	XMVECTOR Q;
	XMVECTOR Result;
	A = XMVectorSelect(g_XMSelect1110.v, V, g_XMSelect1110.v);
	Result = XMQuaternionMultiply(RotationQuaternion, A);
	Q = XMQuaternionConjugate(RotationQuaternion);
	Result = XMQuaternionMultiply(Result, Q);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR A;
	XMVECTOR Q;
	XMVECTOR Result;
	A = _mm_and_ps(V, CAST_M128(g_XMMask3));
	Result = XMQuaternionMultiply(RotationQuaternion, A);
	Q = XMQuaternionConjugate(RotationQuaternion);
	Result = XMQuaternionMultiply(Result, Q);
	return Result;
#else
#endif
}
XMFINLINE XMVECTOR XMVector3Transform(FXMVECTOR V, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR X;
	XMVECTOR Y;
	XMVECTOR Z;
	XMVECTOR Result;
	Z = XMVectorSplatZ(V);
	Y = XMVectorSplatY(V);
	X = XMVectorSplatX(V);
	Result = XMVectorMultiplyAdd(Z, M.r[2], M.r[3]);
	Result = XMVectorMultiplyAdd(Y, M.r[1], Result);
	Result = XMVectorMultiplyAdd(X, M.r[0], Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(0, 0, 0, 0));
	vResult = _mm_mul_ps(vResult, M.r[0]);
	XMVECTOR vTemp = _mm_shuffle_ps(V, V, _MM_SHUFFLE(1, 1, 1, 1));
	vTemp = _mm_mul_ps(vTemp, M.r[1]);
	vResult = _mm_add_ps(vResult, vTemp);
	vTemp = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 2, 2, 2));
	vTemp = _mm_mul_ps(vTemp, M.r[2]);
	vResult = _mm_add_ps(vResult, vTemp);
	vResult = _mm_add_ps(vResult, M.r[3]);
	return vResult;
#else
#endif
}
XMINLINE XMFLOAT4 *XMVector3TransformStream(XMFLOAT4 *pOutputStream, UINT OutputStride, CONST XMFLOAT3 *pInputStream, UINT InputStride, UINT VectorCount, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMVECTOR X;
	XMVECTOR Y;
	XMVECTOR Z;
	XMVECTOR Result;
	UINT i;
	BYTE *pInputVector = (BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	for (i = 0; i < VectorCount; i++)
	{
		V = XMLoadFloat3((XMFLOAT3 *)pInputVector);
		Z = XMVectorSplatZ(V);
		Y = XMVectorSplatY(V);
		X = XMVectorSplatX(V);
		Result = XMVectorMultiplyAdd(Z, M.r[2], M.r[3]);
		Result = XMVectorMultiplyAdd(Y, M.r[1], Result);
		Result = XMVectorMultiplyAdd(X, M.r[0], Result);
		XMStoreFloat4((XMFLOAT4 *)pOutputVector, Result);
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	UINT i;
	const BYTE *pInputVector = (const BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	for (i = 0; i < VectorCount; i++)
	{
		XMVECTOR X = _mm_load_ps1(&((const XMFLOAT3 *)(pInputVector))->x);
		XMVECTOR Y = _mm_load_ps1(&((const XMFLOAT3 *)(pInputVector))->y);
		XMVECTOR vResult = _mm_load_ps1(&((const XMFLOAT3 *)(pInputVector))->z);
		vResult = _mm_mul_ps(vResult, M.r[2]);
		vResult = _mm_add_ps(vResult, M.r[3]);
		Y = _mm_mul_ps(Y, M.r[1]);
		vResult = _mm_add_ps(vResult, Y);
		X = _mm_mul_ps(X, M.r[0]);
		vResult = _mm_add_ps(vResult, X);
		_mm_storeu_ps((float *)(pOutputVector), vResult);
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMINLINE XMFLOAT4 *XMVector3TransformStreamNC(XMFLOAT4 *pOutputStream, UINT OutputStride, CONST XMFLOAT3 *pInputStream, UINT InputStride, UINT VectorCount, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_) || defined(XM_NO_MISALIGNED_VECTOR_ACCESS) || defined(_XM_SSE_INTRINSICS_)
	return XMVector3TransformStream(pOutputStream, OutputStride, pInputStream, InputStride, VectorCount, M);
#else
#endif
}
XMFINLINE XMVECTOR XMVector3TransformCoord(FXMVECTOR V, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR X;
	XMVECTOR Y;
	XMVECTOR Z;
	XMVECTOR InverseW;
	XMVECTOR Result;
	Z = XMVectorSplatZ(V);
	Y = XMVectorSplatY(V);
	X = XMVectorSplatX(V);
	Result = XMVectorMultiplyAdd(Z, M.r[2], M.r[3]);
	Result = XMVectorMultiplyAdd(Y, M.r[1], Result);
	Result = XMVectorMultiplyAdd(X, M.r[0], Result);
	InverseW = XMVectorSplatW(Result);
	InverseW = XMVectorReciprocal(InverseW);
	Result = XMVectorMultiply(Result, InverseW);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(0, 0, 0, 0));
	vResult = _mm_mul_ps(vResult, M.r[0]);
	XMVECTOR vTemp = _mm_shuffle_ps(V, V, _MM_SHUFFLE(1, 1, 1, 1));
	vTemp = _mm_mul_ps(vTemp, M.r[1]);
	vResult = _mm_add_ps(vResult, vTemp);
	vTemp = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 2, 2, 2));
	vTemp = _mm_mul_ps(vTemp, M.r[2]);
	vResult = _mm_add_ps(vResult, vTemp);
	vResult = _mm_add_ps(vResult, M.r[3]);
	vTemp = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(3, 3, 3, 3));
	vResult = _mm_div_ps(vResult, vTemp);
	return vResult;
#else
#endif
}
XMINLINE XMFLOAT3 *XMVector3TransformCoordStream(XMFLOAT3 *pOutputStream, UINT OutputStride, CONST XMFLOAT3 *pInputStream, UINT InputStride, UINT VectorCount, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMVECTOR X;
	XMVECTOR Y;
	XMVECTOR Z;
	XMVECTOR InverseW;
	XMVECTOR Result;
	UINT i;
	BYTE *pInputVector = (BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	for (i = 0; i < VectorCount; i++)
	{
		V = XMLoadFloat3((XMFLOAT3 *)pInputVector);
		Z = XMVectorSplatZ(V);
		Y = XMVectorSplatY(V);
		X = XMVectorSplatX(V);
		Result = XMVectorMultiplyAdd(Z, M.r[2], M.r[3]);
		Result = XMVectorMultiplyAdd(Y, M.r[1], Result);
		Result = XMVectorMultiplyAdd(X, M.r[0], Result);
		InverseW = XMVectorSplatW(Result);
		InverseW = XMVectorReciprocal(InverseW);
		Result = XMVectorMultiply(Result, InverseW);
		XMStoreFloat3((XMFLOAT3 *)pOutputVector, Result);
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	UINT i;
	const BYTE *pInputVector = (BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	for (i = 0; i < VectorCount; i++)
	{
		XMVECTOR X = _mm_load_ps1(&((const XMFLOAT3 *)(pInputVector))->x);
		XMVECTOR Y = _mm_load_ps1(&((const XMFLOAT3 *)(pInputVector))->y);
		XMVECTOR vResult = _mm_load_ps1(&((const XMFLOAT3 *)(pInputVector))->z);
		vResult = _mm_mul_ps(vResult, M.r[2]);
		vResult = _mm_add_ps(vResult, M.r[3]);
		Y = _mm_mul_ps(Y, M.r[1]);
		vResult = _mm_add_ps(vResult, Y);
		X = _mm_mul_ps(X, M.r[0]);
		vResult = _mm_add_ps(vResult, X);
		X = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(3, 3, 3, 3));
		vResult = _mm_div_ps(vResult, X);
		_mm_store_ss(&((XMFLOAT3 *) (pOutputVector))->x, vResult);
		vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(0, 3, 2, 1));
		_mm_store_ss(&((XMFLOAT3 *) (pOutputVector))->y, vResult);
		vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(0, 3, 2, 1));
		_mm_store_ss(&((XMFLOAT3 *) (pOutputVector))->z, vResult);
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMVector3TransformNormal(FXMVECTOR V, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR X;
	XMVECTOR Y;
	XMVECTOR Z;
	XMVECTOR Result;
	Z = XMVectorSplatZ(V);
	Y = XMVectorSplatY(V);
	X = XMVectorSplatX(V);
	Result = XMVectorMultiply(Z, M.r[2]);
	Result = XMVectorMultiplyAdd(Y, M.r[1], Result);
	Result = XMVectorMultiplyAdd(X, M.r[0], Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(0, 0, 0, 0));
	vResult = _mm_mul_ps(vResult, M.r[0]);
	XMVECTOR vTemp = _mm_shuffle_ps(V, V, _MM_SHUFFLE(1, 1, 1, 1));
	vTemp = _mm_mul_ps(vTemp, M.r[1]);
	vResult = _mm_add_ps(vResult, vTemp);
	vTemp = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 2, 2, 2));
	vTemp = _mm_mul_ps(vTemp, M.r[2]);
	vResult = _mm_add_ps(vResult, vTemp);
	return vResult;
#else
#endif
}
XMINLINE XMFLOAT3 *XMVector3TransformNormalStream(XMFLOAT3 *pOutputStream, UINT OutputStride, CONST XMFLOAT3 *pInputStream, UINT InputStride, UINT VectorCount, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMVECTOR X;
	XMVECTOR Y;
	XMVECTOR Z;
	XMVECTOR Result;
	UINT i;
	BYTE *pInputVector = (BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	for (i = 0; i < VectorCount; i++)
	{
		V = XMLoadFloat3((XMFLOAT3 *)pInputVector);
		Z = XMVectorSplatZ(V);
		Y = XMVectorSplatY(V);
		X = XMVectorSplatX(V);
		Result = XMVectorMultiply(Z, M.r[2]);
		Result = XMVectorMultiplyAdd(Y, M.r[1], Result);
		Result = XMVectorMultiplyAdd(X, M.r[0], Result);
		XMStoreFloat3((XMFLOAT3 *)pOutputVector, Result);
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	UINT i;
	const BYTE *pInputVector = (BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	for (i = 0; i < VectorCount; i++)
	{
		XMVECTOR X = _mm_load_ps1(&((const XMFLOAT3 *)(pInputVector))->x);
		XMVECTOR Y = _mm_load_ps1(&((const XMFLOAT3 *)(pInputVector))->y);
		XMVECTOR vResult = _mm_load_ps1(&((const XMFLOAT3 *)(pInputVector))->z);
		vResult = _mm_mul_ps(vResult, M.r[2]);
		Y = _mm_mul_ps(Y, M.r[1]);
		vResult = _mm_add_ps(vResult, Y);
		X = _mm_mul_ps(X, M.r[0]);
		vResult = _mm_add_ps(vResult, X);
		_mm_store_ss(&((XMFLOAT3 *) (pOutputVector))->x, vResult);
		vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(0, 3, 2, 1));
		_mm_store_ss(&((XMFLOAT3 *) (pOutputVector))->y, vResult);
		vResult = _mm_shuffle_ps(vResult, vResult, _MM_SHUFFLE(0, 3, 2, 1));
		_mm_store_ss(&((XMFLOAT3 *) (pOutputVector))->z, vResult);
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMINLINE XMVECTOR XMVector3Project(FXMVECTOR V, FLOAT ViewportX, FLOAT ViewportY, FLOAT ViewportWidth, FLOAT ViewportHeight, FLOAT ViewportMinZ, FLOAT ViewportMaxZ, CXMMATRIX Projection, CXMMATRIX View, CXMMATRIX World)
{
#if defined(_XM_NO_INTRINSICS_)
	XMMATRIX Transform;
	XMVECTOR Scale;
	XMVECTOR Offset;
	XMVECTOR Result;
	FLOAT HalfViewportWidth = ViewportWidth * 0.5f;
	FLOAT HalfViewportHeight = ViewportHeight * 0.5f;
	Scale = XMVectorSet(HalfViewportWidth, -HalfViewportHeight, ViewportMaxZ - ViewportMinZ, 0.0f);
	Offset = XMVectorSet(ViewportX + HalfViewportWidth, ViewportY + HalfViewportHeight, ViewportMinZ, 0.0f);
	Transform = XMMatrixMultiply(World, View);
	Transform = XMMatrixMultiply(Transform, Projection);
	Result = XMVector3TransformCoord(V, Transform);
	Result = XMVectorMultiplyAdd(Result, Scale, Offset);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMMATRIX Transform;
	XMVECTOR Scale;
	XMVECTOR Offset;
	XMVECTOR Result;
	FLOAT HalfViewportWidth = ViewportWidth * 0.5f;
	FLOAT HalfViewportHeight = ViewportHeight * 0.5f;
	Scale = XMVectorSet(HalfViewportWidth, -HalfViewportHeight, ViewportMaxZ - ViewportMinZ, 0.0f);
	Offset = XMVectorSet(ViewportX + HalfViewportWidth, ViewportY + HalfViewportHeight, ViewportMinZ, 0.0f);
	Transform = XMMatrixMultiply(World, View);
	Transform = XMMatrixMultiply(Transform, Projection);
	Result = XMVector3TransformCoord(V, Transform);
	Result = _mm_mul_ps(Result, Scale);
	Result = _mm_add_ps(Result, Offset);
	return Result;
#else
#endif
}
XMINLINE XMFLOAT3 *XMVector3ProjectStream(XMFLOAT3 *pOutputStream, UINT OutputStride, CONST XMFLOAT3 *pInputStream, UINT InputStride, UINT VectorCount, FLOAT ViewportX, FLOAT ViewportY, FLOAT ViewportWidth, FLOAT ViewportHeight, FLOAT ViewportMinZ, FLOAT ViewportMaxZ, CXMMATRIX Projection, CXMMATRIX View, CXMMATRIX World)
{
#if defined(_XM_NO_INTRINSICS_)
	XMMATRIX Transform;
	XMVECTOR V;
	XMVECTOR Scale;
	XMVECTOR Offset;
	XMVECTOR Result;
	UINT i;
	FLOAT HalfViewportWidth = ViewportWidth * 0.5f;
	FLOAT HalfViewportHeight = ViewportHeight * 0.5f;
	BYTE *pInputVector = (BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	Scale = XMVectorSet(HalfViewportWidth, -HalfViewportHeight, ViewportMaxZ - ViewportMinZ, 1.0f);
	Offset = XMVectorSet(ViewportX + HalfViewportWidth, ViewportY + HalfViewportHeight, ViewportMinZ, 0.0f);
	Transform = XMMatrixMultiply(World, View);
	Transform = XMMatrixMultiply(Transform, Projection);
	for (i = 0; i < VectorCount; i++)
	{
		V = XMLoadFloat3((XMFLOAT3 *)pInputVector);
		Result = XMVector3TransformCoord(V, Transform);
		Result = XMVectorMultiplyAdd(Result, Scale, Offset);
		XMStoreFloat3((XMFLOAT3 *)pOutputVector, Result);
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	XMMATRIX Transform;
	XMVECTOR V;
	XMVECTOR Scale;
	XMVECTOR Offset;
	XMVECTOR Result;
	UINT i;
	FLOAT HalfViewportWidth = ViewportWidth * 0.5f;
	FLOAT HalfViewportHeight = ViewportHeight * 0.5f;
	BYTE *pInputVector = (BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	Scale = XMVectorSet(HalfViewportWidth, -HalfViewportHeight, ViewportMaxZ - ViewportMinZ, 1.0f);
	Offset = XMVectorSet(ViewportX + HalfViewportWidth, ViewportY + HalfViewportHeight, ViewportMinZ, 0.0f);
	Transform = XMMatrixMultiply(World, View);
	Transform = XMMatrixMultiply(Transform, Projection);
	for (i = 0; i < VectorCount; i++)
	{
		V = XMLoadFloat3((XMFLOAT3 *)pInputVector);
		Result = XMVector3TransformCoord(V, Transform);
		Result = _mm_mul_ps(Result, Scale);
		Result = _mm_add_ps(Result, Offset);
		XMStoreFloat3((XMFLOAT3 *)pOutputVector, Result);
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMVector3Unproject(FXMVECTOR V, FLOAT ViewportX, FLOAT ViewportY, FLOAT ViewportWidth, FLOAT ViewportHeight, FLOAT ViewportMinZ, FLOAT ViewportMaxZ, CXMMATRIX Projection, CXMMATRIX View, CXMMATRIX World)
{
#if defined(_XM_NO_INTRINSICS_)
	XMMATRIX Transform;
	XMVECTOR Scale;
	XMVECTOR Offset;
	XMVECTOR Determinant;
	XMVECTOR Result;
	CONST XMVECTOR D = XMVectorSet(-1.0f, 1.0f, 0.0f, 0.0f);
	Scale = XMVectorSet(ViewportWidth * 0.5f, -ViewportHeight * 0.5f, ViewportMaxZ - ViewportMinZ, 1.0f);
	Scale = XMVectorReciprocal(Scale);
	Offset = XMVectorSet(-ViewportX, -ViewportY, -ViewportMinZ, 0.0f);
	Offset = XMVectorMultiplyAdd(Scale, Offset, D);
	Transform = XMMatrixMultiply(World, View);
	Transform = XMMatrixMultiply(Transform, Projection);
	Transform = XMMatrixInverse(&Determinant, Transform);
	Result = XMVectorMultiplyAdd(V, Scale, Offset);
	Result = XMVector3TransformCoord(Result, Transform);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMMATRIX Transform;
	XMVECTOR Scale;
	XMVECTOR Offset;
	XMVECTOR Determinant;
	XMVECTOR Result;
	CONST XMVECTORF32 D = { -1.0f, 1.0f, 0.0f, 0.0f };
	Scale = XMVectorSet(ViewportWidth * 0.5f, -ViewportHeight * 0.5f, ViewportMaxZ - ViewportMinZ, 1.0f);
	Scale = XMVectorReciprocal(Scale);
	Offset = XMVectorSet(-ViewportX, -ViewportY, -ViewportMinZ, 0.0f);
	Offset = _mm_mul_ps(Offset, Scale);
	Offset = _mm_add_ps(Offset, CAST_M128(D));
	Transform = XMMatrixMultiply(World, View);
	Transform = XMMatrixMultiply(Transform, Projection);
	Transform = XMMatrixInverse(&Determinant, Transform);
	Result = _mm_mul_ps(V, Scale);
	Result = _mm_add_ps(Result, Offset);
	Result = XMVector3TransformCoord(Result, Transform);
	return Result;
#else
#endif
}
XMINLINE XMFLOAT3 *XMVector3UnprojectStream(XMFLOAT3 *pOutputStream, UINT OutputStride, CONST XMFLOAT3 *pInputStream, UINT InputStride, UINT VectorCount, FLOAT ViewportX, FLOAT ViewportY, FLOAT ViewportWidth, FLOAT ViewportHeight, FLOAT ViewportMinZ, FLOAT ViewportMaxZ, CXMMATRIX Projection, CXMMATRIX View, CXMMATRIX World)
{
#if defined(_XM_NO_INTRINSICS_)
	XMMATRIX Transform;
	XMVECTOR Scale;
	XMVECTOR Offset;
	XMVECTOR V;
	XMVECTOR Determinant;
	XMVECTOR Result;
	UINT i;
	BYTE *pInputVector = (BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	CONST XMVECTOR D = XMVectorSet(-1.0f, 1.0f, 0.0f, 0.0f);
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	Scale = XMVectorSet(ViewportWidth * 0.5f, -ViewportHeight * 0.5f, ViewportMaxZ - ViewportMinZ, 1.0f);
	Scale = XMVectorReciprocal(Scale);
	Offset = XMVectorSet(-ViewportX, -ViewportY, -ViewportMinZ, 0.0f);
	Offset = XMVectorMultiplyAdd(Scale, Offset, D);
	Transform = XMMatrixMultiply(World, View);
	Transform = XMMatrixMultiply(Transform, Projection);
	Transform = XMMatrixInverse(&Determinant, Transform);
	for (i = 0; i < VectorCount; i++)
	{
		V = XMLoadFloat3((XMFLOAT3 *)pInputVector);
		Result = XMVectorMultiplyAdd(V, Scale, Offset);
		Result = XMVector3TransformCoord(Result, Transform);
		XMStoreFloat3((XMFLOAT3 *)pOutputVector, Result);
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(_XM_SSE_INTRINSICS_)
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	XMMATRIX Transform;
	XMVECTOR Scale;
	XMVECTOR Offset;
	XMVECTOR V;
	XMVECTOR Determinant;
	XMVECTOR Result;
	UINT i;
	BYTE *pInputVector = (BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	CONST XMVECTORF32 D = { -1.0f, 1.0f, 0.0f, 0.0f };
	Scale = XMVectorSet(ViewportWidth * 0.5f, -ViewportHeight * 0.5f, ViewportMaxZ - ViewportMinZ, 1.0f);
	Scale = XMVectorReciprocal(Scale);
	Offset = XMVectorSet(-ViewportX, -ViewportY, -ViewportMinZ, 0.0f);
	Offset = _mm_mul_ps(Offset, Scale);
	Offset = _mm_add_ps(Offset, CAST_M128(D));
	Transform = XMMatrixMultiply(World, View);
	Transform = XMMatrixMultiply(Transform, Projection);
	Transform = XMMatrixInverse(&Determinant, Transform);
	for (i = 0; i < VectorCount; i++)
	{
		V = XMLoadFloat3((XMFLOAT3 *)pInputVector);
		Result = XMVectorMultiplyAdd(V, Scale, Offset);
		Result = XMVector3TransformCoord(Result, Transform);
		XMStoreFloat3((XMFLOAT3 *)pOutputVector, Result);
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE BOOL XMVector4Equal(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] == V2.vector4_f32[0]) && (V1.vector4_f32[1] == V2.vector4_f32[1]) && (V1.vector4_f32[2] == V2.vector4_f32[2]) && (V1.vector4_f32[3] == V2.vector4_f32[3])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpeq_ps(V1, V2);
	return ((_mm_movemask_ps(vTemp) == 0x0f) != 0);
#else
	return XMComparisonAllTrue(XMVector4EqualR(V1, V2));
#endif
}
XMFINLINE UINT XMVector4EqualR(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT CR = 0;
	if ((V1.vector4_f32[0] == V2.vector4_f32[0]) && (V1.vector4_f32[1] == V2.vector4_f32[1]) && (V1.vector4_f32[2] == V2.vector4_f32[2]) && (V1.vector4_f32[3] == V2.vector4_f32[3]))
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if ((V1.vector4_f32[0] != V2.vector4_f32[0]) && (V1.vector4_f32[1] != V2.vector4_f32[1]) && (V1.vector4_f32[2] != V2.vector4_f32[2]) && (V1.vector4_f32[3] != V2.vector4_f32[3]))
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpeq_ps(V1, V2);
	int iTest = _mm_movemask_ps(vTemp);
	UINT CR = 0;
	if (iTest == 0xf)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (iTest == 0)
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#else
#endif
}
XMFINLINE BOOL XMVector4EqualInt(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_u32[0] == V2.vector4_u32[0]) && (V1.vector4_u32[1] == V2.vector4_u32[1]) && (V1.vector4_u32[2] == V2.vector4_u32[2]) && (V1.vector4_u32[3] == V2.vector4_u32[3])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vTemp = _mm_cmpeq_epi32(CAST_CONST_M128I(V1), CAST_CONST_M128I(V2));
	return ((_mm_movemask_ps(CAST_CONST_M128(vTemp)) == 0xf) != 0);
#else
	return XMComparisonAllTrue(XMVector4EqualIntR(V1, V2));
#endif
}
XMFINLINE UINT XMVector4EqualIntR(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT CR = 0;
	if (V1.vector4_u32[0] == V2.vector4_u32[0] && V1.vector4_u32[1] == V2.vector4_u32[1] && V1.vector4_u32[2] == V2.vector4_u32[2] && V1.vector4_u32[3] == V2.vector4_u32[3])
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (V1.vector4_u32[0] != V2.vector4_u32[0] && V1.vector4_u32[1] != V2.vector4_u32[1] && V1.vector4_u32[2] != V2.vector4_u32[2] && V1.vector4_u32[3] != V2.vector4_u32[3])
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vTemp = _mm_cmpeq_epi32(CAST_CONST_M128I(V1), CAST_CONST_M128I(V2));
	int iTest = _mm_movemask_ps(CAST_CONST_M128(vTemp));
	UINT CR = 0;
	if (iTest == 0xf)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (iTest == 0)
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#else
#endif
}
XMFINLINE BOOL XMVector4NearEqual(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Epsilon)
{
#if defined(_XM_NO_INTRINSICS_)
	FLOAT dx, dy, dz, dw;
	dx = fabsf(V1.vector4_f32[0] - V2.vector4_f32[0]);
	dy = fabsf(V1.vector4_f32[1] - V2.vector4_f32[1]);
	dz = fabsf(V1.vector4_f32[2] - V2.vector4_f32[2]);
	dw = fabsf(V1.vector4_f32[3] - V2.vector4_f32[3]);
	return (((dx <= Epsilon.vector4_f32[0]) && (dy <= Epsilon.vector4_f32[1]) && (dz <= Epsilon.vector4_f32[2]) && (dw <= Epsilon.vector4_f32[3])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vDelta = _mm_sub_ps(V1, V2);
	XMVECTOR vTemp = _mm_setzero_ps();
	vTemp = _mm_sub_ps(vTemp, vDelta);
	vTemp = _mm_max_ps(vTemp, vDelta);
	vTemp = _mm_cmple_ps(vTemp, Epsilon);
	return ((_mm_movemask_ps(vTemp) == 0xf) != 0);
#else
#endif
}
XMFINLINE BOOL XMVector4NotEqual(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] != V2.vector4_f32[0]) || (V1.vector4_f32[1] != V2.vector4_f32[1]) || (V1.vector4_f32[2] != V2.vector4_f32[2]) || (V1.vector4_f32[3] != V2.vector4_f32[3])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpneq_ps(V1, V2);
	return ((_mm_movemask_ps(vTemp)) != 0);
#else
	return XMComparisonAnyFalse(XMVector4EqualR(V1, V2));
#endif
}
XMFINLINE BOOL XMVector4NotEqualInt(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_u32[0] != V2.vector4_u32[0]) || (V1.vector4_u32[1] != V2.vector4_u32[1]) || (V1.vector4_u32[2] != V2.vector4_u32[2]) || (V1.vector4_u32[3] != V2.vector4_u32[3])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	__m128i vTemp = _mm_cmpeq_epi32(CAST_CONST_M128I(V1), CAST_CONST_M128I(V2));
	return ((_mm_movemask_ps(CAST_CONST_M128(vTemp)) != 0xF) != 0);
#else
	return XMComparisonAnyFalse(XMVector4EqualIntR(V1, V2));
#endif
}
XMFINLINE BOOL XMVector4Greater(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] > V2.vector4_f32[0]) && (V1.vector4_f32[1] > V2.vector4_f32[1]) && (V1.vector4_f32[2] > V2.vector4_f32[2]) && (V1.vector4_f32[3] > V2.vector4_f32[3])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpgt_ps(V1, V2);
	return ((_mm_movemask_ps(vTemp) == 0x0f) != 0);
#else
	return XMComparisonAllTrue(XMVector4GreaterR(V1, V2));
#endif
}
XMFINLINE UINT XMVector4GreaterR(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT CR = 0;
	if (V1.vector4_f32[0] > V2.vector4_f32[0] && V1.vector4_f32[1] > V2.vector4_f32[1] && V1.vector4_f32[2] > V2.vector4_f32[2] && V1.vector4_f32[3] > V2.vector4_f32[3])
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (V1.vector4_f32[0] <= V2.vector4_f32[0] && V1.vector4_f32[1] <= V2.vector4_f32[1] && V1.vector4_f32[2] <= V2.vector4_f32[2] && V1.vector4_f32[3] <= V2.vector4_f32[3])
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#elif defined(_XM_SSE_INTRINSICS_)
	UINT CR = 0;
	XMVECTOR vTemp = _mm_cmpgt_ps(V1, V2);
	int iTest = _mm_movemask_ps(vTemp);
	if (iTest == 0xf)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!iTest)
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#else
#endif
}
XMFINLINE BOOL XMVector4GreaterOrEqual(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] >= V2.vector4_f32[0]) && (V1.vector4_f32[1] >= V2.vector4_f32[1]) && (V1.vector4_f32[2] >= V2.vector4_f32[2]) && (V1.vector4_f32[3] >= V2.vector4_f32[3])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmpge_ps(V1, V2);
	return ((_mm_movemask_ps(vTemp) == 0x0f) != 0);
#else
	return XMComparisonAllTrue(XMVector4GreaterOrEqualR(V1, V2));
#endif
}
XMFINLINE UINT XMVector4GreaterOrEqualR(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT CR = 0;
	if ((V1.vector4_f32[0] >= V2.vector4_f32[0]) && (V1.vector4_f32[1] >= V2.vector4_f32[1]) && (V1.vector4_f32[2] >= V2.vector4_f32[2]) && (V1.vector4_f32[3] >= V2.vector4_f32[3]))
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if ((V1.vector4_f32[0] < V2.vector4_f32[0]) && (V1.vector4_f32[1] < V2.vector4_f32[1]) && (V1.vector4_f32[2] < V2.vector4_f32[2]) && (V1.vector4_f32[3] < V2.vector4_f32[3]))
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#elif defined(_XM_SSE_INTRINSICS_)
	UINT CR = 0;
	XMVECTOR vTemp = _mm_cmpge_ps(V1, V2);
	int iTest = _mm_movemask_ps(vTemp);
	if (iTest == 0x0f)
	{
		CR = XM_CRMASK_CR6TRUE;
	}
	else if (!iTest)
	{
		CR = XM_CRMASK_CR6FALSE;
	}
	return CR;
#else
#endif
}
XMFINLINE BOOL XMVector4Less(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] < V2.vector4_f32[0]) && (V1.vector4_f32[1] < V2.vector4_f32[1]) && (V1.vector4_f32[2] < V2.vector4_f32[2]) && (V1.vector4_f32[3] < V2.vector4_f32[3])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmplt_ps(V1, V2);
	return ((_mm_movemask_ps(vTemp) == 0x0f) != 0);
#else
	return XMComparisonAllTrue(XMVector4GreaterR(V2, V1));
#endif
}
XMFINLINE BOOL XMVector4LessOrEqual(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V1.vector4_f32[0] <= V2.vector4_f32[0]) && (V1.vector4_f32[1] <= V2.vector4_f32[1]) && (V1.vector4_f32[2] <= V2.vector4_f32[2]) && (V1.vector4_f32[3] <= V2.vector4_f32[3])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_cmple_ps(V1, V2);
	return ((_mm_movemask_ps(vTemp) == 0x0f) != 0);
#else
	return XMComparisonAllTrue(XMVector4GreaterOrEqualR(V2, V1));
#endif
}
XMFINLINE BOOL XMVector4InBounds(FXMVECTOR V, FXMVECTOR Bounds)
{
#if defined(_XM_NO_INTRINSICS_)
	return (((V.vector4_f32[0] <= Bounds.vector4_f32[0] && V.vector4_f32[0] >= -Bounds.vector4_f32[0]) && (V.vector4_f32[1] <= Bounds.vector4_f32[1] && V.vector4_f32[1] >= -Bounds.vector4_f32[1]) && (V.vector4_f32[2] <= Bounds.vector4_f32[2] && V.vector4_f32[2] >= -Bounds.vector4_f32[2]) && (V.vector4_f32[3] <= Bounds.vector4_f32[3] && V.vector4_f32[3] >= -Bounds.vector4_f32[3])) != 0);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp1 = _mm_cmple_ps(V, Bounds);
	XMVECTOR vTemp2 = _mm_mul_ps(Bounds, CAST_M128(g_XMNegativeOne));
	vTemp2 = _mm_cmple_ps(vTemp2, V);
	vTemp1 = _mm_and_ps(vTemp1, vTemp2);
	return ((_mm_movemask_ps(vTemp1) == 0x0f) != 0);
#else
	return XMComparisonAllInBounds(XMVector4InBoundsR(V, Bounds));
#endif
}
XMFINLINE UINT XMVector4InBoundsR(FXMVECTOR V, FXMVECTOR Bounds)
{
#if defined(_XM_NO_INTRINSICS_)
	UINT CR = 0;
	if ((V.vector4_f32[0] <= Bounds.vector4_f32[0] && V.vector4_f32[0] >= -Bounds.vector4_f32[0]) && (V.vector4_f32[1] <= Bounds.vector4_f32[1] && V.vector4_f32[1] >= -Bounds.vector4_f32[1]) && (V.vector4_f32[2] <= Bounds.vector4_f32[2] && V.vector4_f32[2] >= -Bounds.vector4_f32[2]) && (V.vector4_f32[3] <= Bounds.vector4_f32[3] && V.vector4_f32[3] >= -Bounds.vector4_f32[3]))
	{
		CR = XM_CRMASK_CR6BOUNDS;
	}
	return CR;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp1 = _mm_cmple_ps(V, Bounds);
	XMVECTOR vTemp2 = _mm_mul_ps(Bounds, CAST_M128(g_XMNegativeOne));
	vTemp2 = _mm_cmple_ps(vTemp2, V);
	vTemp1 = _mm_and_ps(vTemp1, vTemp2);
	return (_mm_movemask_ps(vTemp1) == 0x0f) ? XM_CRMASK_CR6BOUNDS : 0;
#else
#endif
}
XMFINLINE BOOL XMVector4IsNaN(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return (XMISNAN(V.vector4_f32[0]) || XMISNAN(V.vector4_f32[1]) || XMISNAN(V.vector4_f32[2]) || XMISNAN(V.vector4_f32[3]));
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTempNan = _mm_cmpneq_ps(V, V);
	return (_mm_movemask_ps(vTempNan) != 0);
#else
#endif
}
XMFINLINE BOOL XMVector4IsInfinite(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	return (XMISINF(V.vector4_f32[0]) || XMISINF(V.vector4_f32[1]) || XMISINF(V.vector4_f32[2]) || XMISINF(V.vector4_f32[3]));
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp = _mm_and_ps(V, CAST_M128(g_XMAbsMask));
	vTemp = _mm_cmpeq_ps(vTemp, CAST_M128(g_XMInfinity));
	return (_mm_movemask_ps(vTemp) != 0);
#else
#endif
}
XMFINLINE XMVECTOR XMVector4Dot(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_f32[0] = Result.vector4_f32[1] = Result.vector4_f32[2] = Result.vector4_f32[3] = V1.vector4_f32[0] * V2.vector4_f32[0] + V1.vector4_f32[1] * V2.vector4_f32[1] + V1.vector4_f32[2] * V2.vector4_f32[2] + V1.vector4_f32[3] * V2.vector4_f32[3];
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTemp2 = V2;
	XMVECTOR vTemp = _mm_mul_ps(V1, vTemp2);
	vTemp2 = _mm_shuffle_ps(vTemp2, vTemp, _MM_SHUFFLE(1, 0, 0, 0));
	vTemp2 = _mm_add_ps(vTemp2, vTemp);
	vTemp = _mm_shuffle_ps(vTemp, vTemp2, _MM_SHUFFLE(0, 3, 0, 0));
	vTemp = _mm_add_ps(vTemp, vTemp2);
	return _mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(2, 2, 2, 2));
#else
#endif
}
XMFINLINE XMVECTOR XMVector4Cross(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR V3)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_f32[0] = (((V2.vector4_f32[2] * V3.vector4_f32[3]) - (V2.vector4_f32[3] * V3.vector4_f32[2])) * V1.vector4_f32[1]) - (((V2.vector4_f32[1] * V3.vector4_f32[3]) - (V2.vector4_f32[3] * V3.vector4_f32[1])) * V1.vector4_f32[2]) + (((V2.vector4_f32[1] * V3.vector4_f32[2]) - (V2.vector4_f32[2] * V3.vector4_f32[1])) * V1.vector4_f32[3]);
	Result.vector4_f32[1] = (((V2.vector4_f32[3] * V3.vector4_f32[2]) - (V2.vector4_f32[2] * V3.vector4_f32[3])) * V1.vector4_f32[0]) - (((V2.vector4_f32[3] * V3.vector4_f32[0]) - (V2.vector4_f32[0] * V3.vector4_f32[3])) * V1.vector4_f32[2]) + (((V2.vector4_f32[2] * V3.vector4_f32[0]) - (V2.vector4_f32[0] * V3.vector4_f32[2])) * V1.vector4_f32[3]);
	Result.vector4_f32[2] = (((V2.vector4_f32[1] * V3.vector4_f32[3]) - (V2.vector4_f32[3] * V3.vector4_f32[1])) * V1.vector4_f32[0]) - (((V2.vector4_f32[0] * V3.vector4_f32[3]) - (V2.vector4_f32[3] * V3.vector4_f32[0])) * V1.vector4_f32[1]) + (((V2.vector4_f32[0] * V3.vector4_f32[1]) - (V2.vector4_f32[1] * V3.vector4_f32[0])) * V1.vector4_f32[3]);
	Result.vector4_f32[3] = (((V2.vector4_f32[2] * V3.vector4_f32[1]) - (V2.vector4_f32[1] * V3.vector4_f32[2])) * V1.vector4_f32[0]) - (((V2.vector4_f32[2] * V3.vector4_f32[0]) - (V2.vector4_f32[0] * V3.vector4_f32[2])) * V1.vector4_f32[1]) + (((V2.vector4_f32[1] * V3.vector4_f32[0]) - (V2.vector4_f32[0] * V3.vector4_f32[1])) * V1.vector4_f32[2]);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = _mm_shuffle_ps(V2, V2, _MM_SHUFFLE(2, 1, 3, 2));
	XMVECTOR vTemp3 = _mm_shuffle_ps(V3, V3, _MM_SHUFFLE(1, 3, 2, 3));
	vResult = _mm_mul_ps(vResult, vTemp3);
	XMVECTOR vTemp2 = _mm_shuffle_ps(V2, V2, _MM_SHUFFLE(1, 3, 2, 3));
	vTemp3 = _mm_shuffle_ps(vTemp3, vTemp3, _MM_SHUFFLE(1, 3, 0, 1));
	vTemp2 = _mm_mul_ps(vTemp2, vTemp3);
	vResult = _mm_sub_ps(vResult, vTemp2);
	XMVECTOR vTemp1 = _mm_shuffle_ps(V1, V1, _MM_SHUFFLE(0, 0, 0, 1));
	vResult = _mm_mul_ps(vResult, vTemp1);
	vTemp2 = _mm_shuffle_ps(V2, V2, _MM_SHUFFLE(2, 0, 3, 1));
	vTemp3 = _mm_shuffle_ps(V3, V3, _MM_SHUFFLE(0, 3, 0, 3));
	vTemp3 = _mm_mul_ps(vTemp3, vTemp2);
	vTemp2 = _mm_shuffle_ps(vTemp2, vTemp2, _MM_SHUFFLE(2, 1, 2, 1));
	vTemp1 = _mm_shuffle_ps(V3, V3, _MM_SHUFFLE(2, 0, 3, 1));
	vTemp2 = _mm_mul_ps(vTemp2, vTemp1);
	vTemp3 = _mm_sub_ps(vTemp3, vTemp2);
	vTemp1 = _mm_shuffle_ps(V1, V1, _MM_SHUFFLE(1, 1, 2, 2));
	vTemp1 = _mm_mul_ps(vTemp1, vTemp3);
	vResult = _mm_sub_ps(vResult, vTemp1);
	vTemp2 = _mm_shuffle_ps(V2, V2, _MM_SHUFFLE(1, 0, 2, 1));
	vTemp3 = _mm_shuffle_ps(V3, V3, _MM_SHUFFLE(0, 1, 0, 2));
	vTemp3 = _mm_mul_ps(vTemp3, vTemp2);
	vTemp2 = _mm_shuffle_ps(vTemp2, vTemp2, _MM_SHUFFLE(2, 0, 2, 1));
	vTemp1 = _mm_shuffle_ps(V3, V3, _MM_SHUFFLE(1, 0, 2, 1));
	vTemp1 = _mm_mul_ps(vTemp1, vTemp2);
	vTemp3 = _mm_sub_ps(vTemp3, vTemp1);
	vTemp1 = _mm_shuffle_ps(V1, V1, _MM_SHUFFLE(2, 3, 3, 3));
	vTemp3 = _mm_mul_ps(vTemp3, vTemp1);
	vResult = _mm_add_ps(vResult, vTemp3);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector4LengthSq(FXMVECTOR V)
{
	return XMVector4Dot(V, V);
}
XMFINLINE XMVECTOR XMVector4ReciprocalLengthEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector4LengthSq(V);
	Result = XMVectorReciprocalSqrtEst(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(3, 2, 3, 2));
	vLengthSq = _mm_add_ps(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 0, 0, 0));
	vTemp = _mm_shuffle_ps(vTemp, vLengthSq, _MM_SHUFFLE(3, 3, 0, 0));
	vLengthSq = _mm_add_ps(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(2, 2, 2, 2));
	vLengthSq = _mm_rsqrt_ps(vLengthSq);
	return vLengthSq;
#else
#endif
}
XMFINLINE XMVECTOR XMVector4ReciprocalLength(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector4LengthSq(V);
	Result = XMVectorReciprocalSqrt(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(3, 2, 3, 2));
	vLengthSq = _mm_add_ps(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 0, 0, 0));
	vTemp = _mm_shuffle_ps(vTemp, vLengthSq, _MM_SHUFFLE(3, 3, 0, 0));
	vLengthSq = _mm_add_ps(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(2, 2, 2, 2));
	vLengthSq = _mm_sqrt_ps(vLengthSq);
	vLengthSq = _mm_div_ps(CAST_M128(g_XMOne), vLengthSq);
	return vLengthSq;
#else
#endif
}
XMFINLINE XMVECTOR XMVector4LengthEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector4LengthSq(V);
	Result = XMVectorSqrtEst(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(3, 2, 3, 2));
	vLengthSq = _mm_add_ps(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 0, 0, 0));
	vTemp = _mm_shuffle_ps(vTemp, vLengthSq, _MM_SHUFFLE(3, 3, 0, 0));
	vLengthSq = _mm_add_ps(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(2, 2, 2, 2));
	vLengthSq = _mm_sqrt_ps(vLengthSq);
	return vLengthSq;
#else
#endif
}
XMFINLINE XMVECTOR XMVector4Length(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector4LengthSq(V);
	Result = XMVectorSqrt(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(3, 2, 3, 2));
	vLengthSq = _mm_add_ps(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 0, 0, 0));
	vTemp = _mm_shuffle_ps(vTemp, vLengthSq, _MM_SHUFFLE(3, 3, 0, 0));
	vLengthSq = _mm_add_ps(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(2, 2, 2, 2));
	vLengthSq = _mm_sqrt_ps(vLengthSq);
	return vLengthSq;
#else
#endif
}
XMFINLINE XMVECTOR XMVector4NormalizeEst(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector4ReciprocalLength(V);
	Result = XMVectorMultiply(V, Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(3, 2, 3, 2));
	vLengthSq = _mm_add_ps(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 0, 0, 0));
	vTemp = _mm_shuffle_ps(vTemp, vLengthSq, _MM_SHUFFLE(3, 3, 0, 0));
	vLengthSq = _mm_add_ps(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(2, 2, 2, 2));
	XMVECTOR vResult = _mm_rsqrt_ps(vLengthSq);
	vResult = _mm_mul_ps(vResult, V);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector4Normalize(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	FLOAT fLength;
	XMVECTOR vResult;
	vResult = XMVector4Length(V);
	fLength = vResult.vector4_f32[0];
	if (fLength > 0)
	{
		fLength = 1.0f / fLength;
	}

	vResult.vector4_f32[0] = V.vector4_f32[0] * fLength;
	vResult.vector4_f32[1] = V.vector4_f32[1] * fLength;
	vResult.vector4_f32[2] = V.vector4_f32[2] * fLength;
	vResult.vector4_f32[3] = V.vector4_f32[3] * fLength;
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vLengthSq = _mm_mul_ps(V, V);
	XMVECTOR vTemp = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(3, 2, 3, 2));
	vLengthSq = _mm_add_ps(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(1, 0, 0, 0));
	vTemp = _mm_shuffle_ps(vTemp, vLengthSq, _MM_SHUFFLE(3, 3, 0, 0));
	vLengthSq = _mm_add_ps(vLengthSq, vTemp);
	vLengthSq = _mm_shuffle_ps(vLengthSq, vLengthSq, _MM_SHUFFLE(2, 2, 2, 2));
	XMVECTOR vResult = _mm_sqrt_ps(vLengthSq);
	XMVECTOR vZeroMask = _mm_setzero_ps();
	vZeroMask = _mm_cmpneq_ps(vZeroMask, vResult);
	vLengthSq = _mm_cmpneq_ps(vLengthSq, CAST_M128(g_XMInfinity));
	vResult = _mm_div_ps(V, vResult);
	vResult = _mm_and_ps(vResult, vZeroMask);
	XMVECTOR vTemp1 = _mm_andnot_ps(vLengthSq, CAST_M128(g_XMQNaN));
	XMVECTOR vTemp2 = _mm_and_ps(vResult, vLengthSq);
	vResult = _mm_or_ps(vTemp1, vTemp2);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector4ClampLength(FXMVECTOR V, FLOAT LengthMin, FLOAT LengthMax)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR ClampMax;
	XMVECTOR ClampMin;
	ClampMax = XMVectorReplicate(LengthMax);
	ClampMin = XMVectorReplicate(LengthMin);
	return XMVector4ClampLengthV(V, ClampMin, ClampMax);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR ClampMax = _mm_set_ps1(LengthMax);
	XMVECTOR ClampMin = _mm_set_ps1(LengthMin);
	return XMVector4ClampLengthV(V, ClampMin, ClampMax);
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMVector4ClampLengthV(FXMVECTOR V, FXMVECTOR LengthMin, FXMVECTOR LengthMax)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR ClampLength;
	XMVECTOR LengthSq;
	XMVECTOR RcpLength;
	XMVECTOR Length;
	XMVECTOR Normal;
	XMVECTOR Zero;
	XMVECTOR InfiniteLength;
	XMVECTOR ZeroLength;
	XMVECTOR Select;
	XMVECTOR ControlMax;
	XMVECTOR ControlMin;
	XMVECTOR Control;
	XMVECTOR Result;
	XMASSERT((LengthMin.vector4_f32[1] == LengthMin.vector4_f32[0]) && (LengthMin.vector4_f32[2] == LengthMin.vector4_f32[0]) && (LengthMin.vector4_f32[3] == LengthMin.vector4_f32[0]));
	XMASSERT((LengthMax.vector4_f32[1] == LengthMax.vector4_f32[0]) && (LengthMax.vector4_f32[2] == LengthMax.vector4_f32[0]) && (LengthMax.vector4_f32[3] == LengthMax.vector4_f32[0]));
	XMASSERT(XMVector4GreaterOrEqual(LengthMin, XMVectorZero()));
	XMASSERT(XMVector4GreaterOrEqual(LengthMax, XMVectorZero()));
	XMASSERT(XMVector4GreaterOrEqual(LengthMax, LengthMin));
	LengthSq = XMVector4LengthSq(V);
	Zero = XMVectorZero();
	RcpLength = XMVectorReciprocalSqrt(LengthSq);
	InfiniteLength = XMVectorEqualInt(LengthSq, g_XMInfinity.v);
	ZeroLength = XMVectorEqual(LengthSq, Zero);
	Normal = XMVectorMultiply(V, RcpLength);
	Length = XMVectorMultiply(LengthSq, RcpLength);
	Select = XMVectorEqualInt(InfiniteLength, ZeroLength);
	Length = XMVectorSelect(LengthSq, Length, Select);
	Normal = XMVectorSelect(LengthSq, Normal, Select);
	ControlMax = XMVectorGreater(Length, LengthMax);
	ControlMin = XMVectorLess(Length, LengthMin);
	ClampLength = XMVectorSelect(Length, LengthMax, ControlMax);
	ClampLength = XMVectorSelect(ClampLength, LengthMin, ControlMin);
	Result = XMVectorMultiply(Normal, ClampLength);
	Control = XMVectorEqualInt(ControlMax, ControlMin);
	Result = XMVectorSelect(Result, V, Control);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR ClampLength;
	XMVECTOR LengthSq;
	XMVECTOR RcpLength;
	XMVECTOR Length;
	XMVECTOR Normal;
	XMVECTOR Zero;
	XMVECTOR InfiniteLength;
	XMVECTOR ZeroLength;
	XMVECTOR Select;
	XMVECTOR ControlMax;
	XMVECTOR ControlMin;
	XMVECTOR Control;
	XMVECTOR Result;
	XMASSERT((XMVectorGetY(LengthMin) == XMVectorGetX(LengthMin)) && (XMVectorGetZ(LengthMin) == XMVectorGetX(LengthMin)) && (XMVectorGetW(LengthMin) == XMVectorGetX(LengthMin)));
	XMASSERT((XMVectorGetY(LengthMax) == XMVectorGetX(LengthMax)) && (XMVectorGetZ(LengthMax) == XMVectorGetX(LengthMax)) && (XMVectorGetW(LengthMax) == XMVectorGetX(LengthMax)));
	XMASSERT(XMVector4GreaterOrEqual(LengthMin, g_XMZero));
	XMASSERT(XMVector4GreaterOrEqual(LengthMax, g_XMZero));
	XMASSERT(XMVector4GreaterOrEqual(LengthMax, LengthMin));
	LengthSq = XMVector4LengthSq(V);
	Zero = XMVectorZero();
	RcpLength = XMVectorReciprocalSqrt(LengthSq);
	InfiniteLength = XMVectorEqualInt(LengthSq, CAST_M128(g_XMInfinity));
	ZeroLength = XMVectorEqual(LengthSq, Zero);
	Normal = _mm_mul_ps(V, RcpLength);
	Length = _mm_mul_ps(LengthSq, RcpLength);
	Select = XMVectorEqualInt(InfiniteLength, ZeroLength);
	Length = XMVectorSelect(LengthSq, Length, Select);
	Normal = XMVectorSelect(LengthSq, Normal, Select);
	ControlMax = XMVectorGreater(Length, LengthMax);
	ControlMin = XMVectorLess(Length, LengthMin);
	ClampLength = XMVectorSelect(Length, LengthMax, ControlMax);
	ClampLength = XMVectorSelect(ClampLength, LengthMin, ControlMin);
	Result = _mm_mul_ps(Normal, ClampLength);
	Control = XMVectorEqualInt(ControlMax, ControlMin);
	Result = XMVectorSelect(Result, V, Control);
	return Result;
#else
#endif
}
XMFINLINE XMVECTOR XMVector4Reflect(FXMVECTOR Incident, FXMVECTOR Normal)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result = XMVector4Dot(Incident, Normal);
	Result = XMVectorAdd(Result, Result);
	Result = XMVectorNegativeMultiplySubtract(Result, Normal, Incident);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR Result = XMVector4Dot(Incident, Normal);
	Result = _mm_add_ps(Result, Result);
	Result = _mm_mul_ps(Result, Normal);
	Result = _mm_sub_ps(Incident, Result);
	return Result;
#else
#endif
}
XMFINLINE XMVECTOR XMVector4Refract(FXMVECTOR Incident, FXMVECTOR Normal, FLOAT RefractionIndex)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Index;
	Index = XMVectorReplicate(RefractionIndex);
	return XMVector4RefractV(Incident, Normal, Index);
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR Index = _mm_set_ps1(RefractionIndex);
	return XMVector4RefractV(Incident, Normal, Index);
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}
XMFINLINE XMVECTOR XMVector4RefractV(FXMVECTOR Incident, FXMVECTOR Normal, FXMVECTOR RefractionIndex)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR IDotN;
	XMVECTOR R;
	CONST XMVECTOR Zero = XMVectorZero();
	IDotN = XMVector4Dot(Incident, Normal);
	R = XMVectorNegativeMultiplySubtract(IDotN, IDotN, g_XMOne.v);
	R = XMVectorMultiply(R, RefractionIndex);
	R = XMVectorNegativeMultiplySubtract(R, RefractionIndex, g_XMOne.v);
	if (XMVector4LessOrEqual(R, Zero))
	{
		return Zero;
	}
	else
	{
		XMVECTOR Result;
		R = XMVectorSqrt(R);
		R = XMVectorMultiplyAdd(RefractionIndex, IDotN, R);
		Result = XMVectorMultiply(RefractionIndex, Incident);
		Result = XMVectorNegativeMultiplySubtract(Normal, R, Result);
		return Result;
	}
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR IDotN = XMVector4Dot(Incident, Normal);
	XMVECTOR R = _mm_mul_ps(IDotN, IDotN);
	R = _mm_sub_ps(CAST_M128(g_XMOne), R);
	R = _mm_mul_ps(R, RefractionIndex);
	R = _mm_mul_ps(R, RefractionIndex);
	R = _mm_sub_ps(CAST_M128(g_XMOne), R);
	XMVECTOR vResult = _mm_cmple_ps(R, CAST_M128(g_XMZero));
	if (_mm_movemask_ps(vResult) == 0x0f)
	{
		vResult = CAST_M128(g_XMZero);
	}
	else
	{
		R = _mm_sqrt_ps(R);
		vResult = _mm_mul_ps(RefractionIndex, IDotN);
		R = _mm_add_ps(R, vResult);
		vResult = _mm_mul_ps(RefractionIndex, Incident);
		R = _mm_mul_ps(R, Normal);
		vResult = _mm_sub_ps(vResult, R);
	}
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector4Orthogonal(FXMVECTOR V)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR Result;
	Result.vector4_f32[0] = V.vector4_f32[2];
	Result.vector4_f32[1] = V.vector4_f32[3];
	Result.vector4_f32[2] = -V.vector4_f32[0];
	Result.vector4_f32[3] = -V.vector4_f32[1];
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	static const XMVECTORF32 FlipZW = { 1.0f, 1.0f, -1.0f, -1.0f };
	XMVECTOR vResult = _mm_shuffle_ps(V, V, _MM_SHUFFLE(1, 0, 3, 2));
	vResult = _mm_mul_ps(vResult, CAST_M128(FlipZW));
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector4AngleBetweenNormalsEst(FXMVECTOR N1, FXMVECTOR N2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR NegativeOne;
	XMVECTOR One;
	XMVECTOR Result;
	Result = XMVector4Dot(N1, N2);
	NegativeOne = XMVectorSplatConstant(-1, 0);
	One = XMVectorSplatOne();
	Result = XMVectorClamp(Result, NegativeOne, One);
	Result = XMVectorACosEst(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = XMVector4Dot(N1, N2);
	vResult = _mm_max_ps(vResult, CAST_M128(g_XMNegativeOne));
	vResult = _mm_min_ps(vResult, CAST_M128(g_XMOne));;
	vResult = XMVectorACosEst(vResult);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector4AngleBetweenNormals(FXMVECTOR N1, FXMVECTOR N2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR NegativeOne;
	XMVECTOR One;
	XMVECTOR Result;
	Result = XMVector4Dot(N1, N2);
	NegativeOne = XMVectorSplatConstant(-1, 0);
	One = XMVectorSplatOne();
	Result = XMVectorClamp(Result, NegativeOne, One);
	Result = XMVectorACos(Result);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vResult = XMVector4Dot(N1, N2);
	vResult = _mm_max_ps(vResult, CAST_M128(g_XMNegativeOne));
	vResult = _mm_min_ps(vResult, CAST_M128(g_XMOne));;
	vResult = XMVectorACos(vResult);
	return vResult;
#else
#endif
}
XMFINLINE XMVECTOR XMVector4AngleBetweenVectors(FXMVECTOR V1, FXMVECTOR V2)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR L1;
	XMVECTOR L2;
	XMVECTOR Dot;
	XMVECTOR CosAngle;
	XMVECTOR NegativeOne;
	XMVECTOR One;
	XMVECTOR Result;
	L1 = XMVector4ReciprocalLength(V1);
	L2 = XMVector4ReciprocalLength(V2);
	Dot = XMVector4Dot(V1, V2);
	L1 = XMVectorMultiply(L1, L2);
	CosAngle = XMVectorMultiply(Dot, L1);
	NegativeOne = XMVectorSplatConstant(-1, 0);
	One = XMVectorSplatOne();
	CosAngle = XMVectorClamp(CosAngle, NegativeOne, One);
	Result = XMVectorACos(CosAngle);
	return Result;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR L1;
	XMVECTOR L2;
	XMVECTOR Dot;
	XMVECTOR CosAngle;
	XMVECTOR Result;
	L1 = XMVector4ReciprocalLength(V1);
	L2 = XMVector4ReciprocalLength(V2);
	Dot = XMVector4Dot(V1, V2);
	L1 = _mm_mul_ps(L1, L2);
	CosAngle = _mm_mul_ps(Dot, L1);
	CosAngle = XMVectorClamp(CosAngle, CAST_M128(g_XMNegativeOne), CAST_M128(g_XMOne));
	Result = XMVectorACos(CosAngle);
	return Result;
#else
#endif
}
XMFINLINE XMVECTOR XMVector4Transform(FXMVECTOR V, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	FLOAT fX = (M.m[0][0] * V.vector4_f32[0]) + (M.m[1][0] * V.vector4_f32[1]) + (M.m[2][0] * V.vector4_f32[2]) + (M.m[3][0] * V.vector4_f32[3]);
	FLOAT fY = (M.m[0][1] * V.vector4_f32[0]) + (M.m[1][1] * V.vector4_f32[1]) + (M.m[2][1] * V.vector4_f32[2]) + (M.m[3][1] * V.vector4_f32[3]);
	FLOAT fZ = (M.m[0][2] * V.vector4_f32[0]) + (M.m[1][2] * V.vector4_f32[1]) + (M.m[2][2] * V.vector4_f32[2]) + (M.m[3][2] * V.vector4_f32[3]);
	FLOAT fW = (M.m[0][3] * V.vector4_f32[0]) + (M.m[1][3] * V.vector4_f32[1]) + (M.m[2][3] * V.vector4_f32[2]) + (M.m[3][3] * V.vector4_f32[3]);
	XMVECTOR vResult = {
		fX,
		fY,
		fZ,
		fW
	};
	return vResult;
#elif defined(_XM_SSE_INTRINSICS_)
	XMVECTOR vTempX = _mm_shuffle_ps(V, V, _MM_SHUFFLE(0, 0, 0, 0));
	XMVECTOR vTempY = _mm_shuffle_ps(V, V, _MM_SHUFFLE(1, 1, 1, 1));
	XMVECTOR vTempZ = _mm_shuffle_ps(V, V, _MM_SHUFFLE(2, 2, 2, 2));
	XMVECTOR vTempW = _mm_shuffle_ps(V, V, _MM_SHUFFLE(3, 3, 3, 3));
	vTempX = _mm_mul_ps(vTempX, M.r[0]);
	vTempY = _mm_mul_ps(vTempY, M.r[1]);
	vTempZ = _mm_mul_ps(vTempZ, M.r[2]);
	vTempW = _mm_mul_ps(vTempW, M.r[3]);
	vTempX = _mm_add_ps(vTempX, vTempY);
	vTempZ = _mm_add_ps(vTempZ, vTempW);
	vTempX = _mm_add_ps(vTempX, vTempZ);
	return vTempX;
#else
#endif
}
XMINLINE XMFLOAT4 *XMVector4TransformStream(XMFLOAT4 *pOutputStream, UINT OutputStride, CONST XMFLOAT4 *pInputStream, UINT InputStride, UINT VectorCount, CXMMATRIX M)
{
#if defined(_XM_NO_INTRINSICS_)
	XMVECTOR V;
	XMVECTOR X;
	XMVECTOR Y;
	XMVECTOR Z;
	XMVECTOR W;
	XMVECTOR Result;
	UINT i;
	BYTE *pInputVector = (BYTE *)pInputStream;
	BYTE *pOutputVector = (BYTE *)pOutputStream;
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	for (i = 0; i < VectorCount; i++)
	{
		V = XMLoadFloat4((XMFLOAT4 *)pInputVector);
		W = XMVectorSplatW(V);
		Z = XMVectorSplatZ(V);
		Y = XMVectorSplatY(V);
		X = XMVectorSplatX(V);
		Result = XMVectorMultiply(W, M.r[3]);
		Result = XMVectorMultiplyAdd(Z, M.r[2], Result);
		Result = XMVectorMultiplyAdd(Y, M.r[1], Result);
		Result = XMVectorMultiplyAdd(X, M.r[0], Result);
		XMStoreFloat4((XMFLOAT4 *)pOutputVector, Result);
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(_XM_SSE_INTRINSICS_)
	UINT i;
	XMASSERT(pOutputStream);
	XMASSERT(pInputStream);
	const BYTE *pInputVector = (const BYTE *)(pInputStream);
	BYTE *pOutputVector = ((BYTE *) (pOutputStream));
	for (i = 0; i < VectorCount; i++)
	{
		XMVECTOR vTempx = _mm_loadu_ps((const float *)(pInputVector));
		XMVECTOR vTempy = _mm_shuffle_ps(vTempx, vTempx, _MM_SHUFFLE(1, 1, 1, 1));
		XMVECTOR vTempz = _mm_shuffle_ps(vTempx, vTempx, _MM_SHUFFLE(2, 2, 2, 2));
		XMVECTOR vTempw = _mm_shuffle_ps(vTempx, vTempx, _MM_SHUFFLE(3, 3, 3, 3));
		vTempx = _mm_shuffle_ps(vTempx, vTempx, _MM_SHUFFLE(0, 0, 0, 0));
		vTempx = _mm_mul_ps(vTempx, M.r[0]);
		vTempy = _mm_mul_ps(vTempy, M.r[1]);
		vTempz = _mm_mul_ps(vTempz, M.r[2]);
		vTempw = _mm_mul_ps(vTempw, M.r[3]);
		vTempx = _mm_add_ps(vTempx, vTempy);
		vTempw = _mm_add_ps(vTempw, vTempz);
		vTempw = _mm_add_ps(vTempw, vTempx);
		_mm_storeu_ps((float *)(pOutputVector), vTempw);
		pInputVector += InputStride;
		pOutputVector += OutputStride;
	}
	return pOutputStream;
#elif defined(XM_NO_MISALIGNED_VECTOR_ACCESS)
#endif
}

#if defined(_XM_NO_INTRINSICS_)
#undef XMISNAN
#undef XMISINF
#endif
#endif
