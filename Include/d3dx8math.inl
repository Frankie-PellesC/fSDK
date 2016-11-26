/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx8math.inl
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Nov 25 21:50:34 2016
 \date		Modified on Fri Nov 25 21:50:34 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __D3DX8MATH_INL__
#define __D3DX8MATH_INL__
#if __POCC__ >= 500
#pragma once
#endif
D3DXINLINE FLOAT D3DXVec2Length(CONST D3DXVECTOR2 *pV)
{
#ifdef D3DX_DEBUG
	if (!pV)
		return 0.0f;
#endif
	return (FLOAT)sqrt(pV->x * pV->x + pV->y * pV->y);
}
D3DXINLINE FLOAT D3DXVec2LengthSq(CONST D3DXVECTOR2 *pV)
{
#ifdef D3DX_DEBUG
	if (!pV)
		return 0.0f;
#endif
	return pV->x * pV->x + pV->y * pV->y;
}
D3DXINLINE FLOAT D3DXVec2Dot(CONST D3DXVECTOR2 *pV1, CONST D3DXVECTOR2 *pV2)
{
#ifdef D3DX_DEBUG
	if (!pV1 || !pV2)
		return 0.0f;
#endif
	return pV1->x * pV2->x + pV1->y * pV2->y;
}
D3DXINLINE FLOAT D3DXVec2CCW(CONST D3DXVECTOR2 *pV1, CONST D3DXVECTOR2 *pV2)
{
#ifdef D3DX_DEBUG
	if (!pV1 || !pV2)
		return 0.0f;
#endif
	return pV1->x * pV2->y - pV1->y * pV2->x;
}
D3DXINLINE D3DXVECTOR2 *D3DXVec2Add(D3DXVECTOR2 *pOut, CONST D3DXVECTOR2 *pV1, CONST D3DXVECTOR2 *pV2)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV1 || !pV2)
		return NULL;
#endif
	pOut->x = pV1->x + pV2->x;
	pOut->y = pV1->y + pV2->y;
	return pOut;
}
D3DXINLINE D3DXVECTOR2 *D3DXVec2Subtract(D3DXVECTOR2 *pOut, CONST D3DXVECTOR2 *pV1, CONST D3DXVECTOR2 *pV2)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV1 || !pV2)
		return NULL;
#endif
	pOut->x = pV1->x - pV2->x;
	pOut->y = pV1->y - pV2->y;
	return pOut;
}
D3DXINLINE D3DXVECTOR2 *D3DXVec2Minimize(D3DXVECTOR2 *pOut, CONST D3DXVECTOR2 *pV1, CONST D3DXVECTOR2 *pV2)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV1 || !pV2)
		return NULL;
#endif
	pOut->x = pV1->x < pV2->x ? pV1->x : pV2->x;
	pOut->y = pV1->y < pV2->y ? pV1->y : pV2->y;
	return pOut;
}
D3DXINLINE D3DXVECTOR2 *D3DXVec2Maximize(D3DXVECTOR2 *pOut, CONST D3DXVECTOR2 *pV1, CONST D3DXVECTOR2 *pV2)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV1 || !pV2)
		return NULL;
#endif
	pOut->x = pV1->x > pV2->x ? pV1->x : pV2->x;
	pOut->y = pV1->y > pV2->y ? pV1->y : pV2->y;
	return pOut;
}
D3DXINLINE D3DXVECTOR2 *D3DXVec2Scale(D3DXVECTOR2 *pOut, CONST D3DXVECTOR2 *pV, FLOAT s)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV)
		return NULL;
#endif
	pOut->x = pV->x * s;
	pOut->y = pV->y * s;
	return pOut;
}
D3DXINLINE D3DXVECTOR2 *D3DXVec2Lerp(D3DXVECTOR2 *pOut, CONST D3DXVECTOR2 *pV1, CONST D3DXVECTOR2 *pV2, FLOAT s)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV1 || !pV2)
		return NULL;
#endif
	pOut->x = pV1->x + s * (pV2->x - pV1->x);
	pOut->y = pV1->y + s * (pV2->y - pV1->y);
	return pOut;
}
D3DXINLINE FLOAT D3DXVec3Length(CONST D3DXVECTOR3 *pV)
{
#ifdef D3DX_DEBUG
	if (!pV)
		return 0.0f;
#endif

	return (FLOAT)sqrt(pV->x * pV->x + pV->y * pV->y + pV->z * pV->z);

}
D3DXINLINE FLOAT D3DXVec3LengthSq(CONST D3DXVECTOR3 *pV)
{
#ifdef D3DX_DEBUG
	if (!pV)
		return 0.0f;
#endif
	return pV->x * pV->x + pV->y * pV->y + pV->z * pV->z;
}
D3DXINLINE FLOAT D3DXVec3Dot(CONST D3DXVECTOR3 *pV1, CONST D3DXVECTOR3 *pV2)
{
#ifdef D3DX_DEBUG
	if (!pV1 || !pV2)
		return 0.0f;
#endif
	return pV1->x * pV2->x + pV1->y * pV2->y + pV1->z * pV2->z;
}
D3DXINLINE D3DXVECTOR3 *D3DXVec3Cross(D3DXVECTOR3 *pOut, CONST D3DXVECTOR3 *pV1, CONST D3DXVECTOR3 *pV2)
{
	D3DXVECTOR3 v;
#ifdef D3DX_DEBUG
	if (!pOut || !pV1 || !pV2)
		return NULL;
#endif
	v.x = pV1->y * pV2->z - pV1->z * pV2->y;
	v.y = pV1->z * pV2->x - pV1->x * pV2->z;
	v.z = pV1->x * pV2->y - pV1->y * pV2->x;
	*pOut = v;
	return pOut;
}
D3DXINLINE D3DXVECTOR3 *D3DXVec3Add(D3DXVECTOR3 *pOut, CONST D3DXVECTOR3 *pV1, CONST D3DXVECTOR3 *pV2)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV1 || !pV2)
		return NULL;
#endif
	pOut->x = pV1->x + pV2->x;
	pOut->y = pV1->y + pV2->y;
	pOut->z = pV1->z + pV2->z;
	return pOut;
}
D3DXINLINE D3DXVECTOR3 *D3DXVec3Subtract(D3DXVECTOR3 *pOut, CONST D3DXVECTOR3 *pV1, CONST D3DXVECTOR3 *pV2)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV1 || !pV2)
		return NULL;
#endif
	pOut->x = pV1->x - pV2->x;
	pOut->y = pV1->y - pV2->y;
	pOut->z = pV1->z - pV2->z;
	return pOut;
}
D3DXINLINE D3DXVECTOR3 *D3DXVec3Minimize(D3DXVECTOR3 *pOut, CONST D3DXVECTOR3 *pV1, CONST D3DXVECTOR3 *pV2)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV1 || !pV2)
		return NULL;
#endif
	pOut->x = pV1->x < pV2->x ? pV1->x : pV2->x;
	pOut->y = pV1->y < pV2->y ? pV1->y : pV2->y;
	pOut->z = pV1->z < pV2->z ? pV1->z : pV2->z;
	return pOut;
}
D3DXINLINE D3DXVECTOR3 *D3DXVec3Maximize(D3DXVECTOR3 *pOut, CONST D3DXVECTOR3 *pV1, CONST D3DXVECTOR3 *pV2)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV1 || !pV2)
		return NULL;
#endif
	pOut->x = pV1->x > pV2->x ? pV1->x : pV2->x;
	pOut->y = pV1->y > pV2->y ? pV1->y : pV2->y;
	pOut->z = pV1->z > pV2->z ? pV1->z : pV2->z;
	return pOut;
}
D3DXINLINE D3DXVECTOR3 *D3DXVec3Scale(D3DXVECTOR3 *pOut, CONST D3DXVECTOR3 *pV, FLOAT s)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV)
		return NULL;
#endif
	pOut->x = pV->x * s;
	pOut->y = pV->y * s;
	pOut->z = pV->z * s;
	return pOut;
}
D3DXINLINE D3DXVECTOR3 *D3DXVec3Lerp(D3DXVECTOR3 *pOut, CONST D3DXVECTOR3 *pV1, CONST D3DXVECTOR3 *pV2, FLOAT s)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV1 || !pV2)
		return NULL;
#endif
	pOut->x = pV1->x + s * (pV2->x - pV1->x);
	pOut->y = pV1->y + s * (pV2->y - pV1->y);
	pOut->z = pV1->z + s * (pV2->z - pV1->z);
	return pOut;
}
D3DXINLINE FLOAT D3DXVec4Length(CONST D3DXVECTOR4 *pV)
{
#ifdef D3DX_DEBUG
	if (!pV)
		return 0.0f;
#endif

	return (FLOAT)sqrt(pV->x * pV->x + pV->y * pV->y + pV->z * pV->z + pV->w * pV->w);

}
D3DXINLINE FLOAT D3DXVec4LengthSq(CONST D3DXVECTOR4 *pV)
{
#ifdef D3DX_DEBUG
	if (!pV)
		return 0.0f;
#endif
	return pV->x * pV->x + pV->y * pV->y + pV->z * pV->z + pV->w * pV->w;
}
D3DXINLINE FLOAT D3DXVec4Dot(CONST D3DXVECTOR4 *pV1, CONST D3DXVECTOR4 *pV2)
{
#ifdef D3DX_DEBUG
	if (!pV1 || !pV2)
		return 0.0f;
#endif
	return pV1->x * pV2->x + pV1->y * pV2->y + pV1->z * pV2->z + pV1->w * pV2->w;
}
D3DXINLINE D3DXVECTOR4 *D3DXVec4Add(D3DXVECTOR4 *pOut, CONST D3DXVECTOR4 *pV1, CONST D3DXVECTOR4 *pV2)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV1 || !pV2)
		return NULL;
#endif
	pOut->x = pV1->x + pV2->x;
	pOut->y = pV1->y + pV2->y;
	pOut->z = pV1->z + pV2->z;
	pOut->w = pV1->w + pV2->w;
	return pOut;
}
D3DXINLINE D3DXVECTOR4 *D3DXVec4Subtract(D3DXVECTOR4 *pOut, CONST D3DXVECTOR4 *pV1, CONST D3DXVECTOR4 *pV2)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV1 || !pV2)
		return NULL;
#endif
	pOut->x = pV1->x - pV2->x;
	pOut->y = pV1->y - pV2->y;
	pOut->z = pV1->z - pV2->z;
	pOut->w = pV1->w - pV2->w;
	return pOut;
}
D3DXINLINE D3DXVECTOR4 *D3DXVec4Minimize(D3DXVECTOR4 *pOut, CONST D3DXVECTOR4 *pV1, CONST D3DXVECTOR4 *pV2)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV1 || !pV2)
		return NULL;
#endif
	pOut->x = pV1->x < pV2->x ? pV1->x : pV2->x;
	pOut->y = pV1->y < pV2->y ? pV1->y : pV2->y;
	pOut->z = pV1->z < pV2->z ? pV1->z : pV2->z;
	pOut->w = pV1->w < pV2->w ? pV1->w : pV2->w;
	return pOut;
}
D3DXINLINE D3DXVECTOR4 *D3DXVec4Maximize(D3DXVECTOR4 *pOut, CONST D3DXVECTOR4 *pV1, CONST D3DXVECTOR4 *pV2)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV1 || !pV2)
		return NULL;
#endif
	pOut->x = pV1->x > pV2->x ? pV1->x : pV2->x;
	pOut->y = pV1->y > pV2->y ? pV1->y : pV2->y;
	pOut->z = pV1->z > pV2->z ? pV1->z : pV2->z;
	pOut->w = pV1->w > pV2->w ? pV1->w : pV2->w;
	return pOut;
}
D3DXINLINE D3DXVECTOR4 *D3DXVec4Scale(D3DXVECTOR4 *pOut, CONST D3DXVECTOR4 *pV, FLOAT s)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV)
		return NULL;
#endif
	pOut->x = pV->x * s;
	pOut->y = pV->y * s;
	pOut->z = pV->z * s;
	pOut->w = pV->w * s;
	return pOut;
}
D3DXINLINE D3DXVECTOR4 *D3DXVec4Lerp(D3DXVECTOR4 *pOut, CONST D3DXVECTOR4 *pV1, CONST D3DXVECTOR4 *pV2, FLOAT s)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pV1 || !pV2)
		return NULL;
#endif
	pOut->x = pV1->x + s * (pV2->x - pV1->x);
	pOut->y = pV1->y + s * (pV2->y - pV1->y);
	pOut->z = pV1->z + s * (pV2->z - pV1->z);
	pOut->w = pV1->w + s * (pV2->w - pV1->w);
	return pOut;
}
D3DXINLINE D3DXMATRIX *D3DXMatrixIdentity(D3DXMATRIX *pOut)
{
#ifdef D3DX_DEBUG
	if (!pOut)
		return NULL;
#endif
	pOut->m[0][1] = pOut->m[0][2] = pOut->m[0][3] = pOut->m[1][0] = pOut->m[1][2] = pOut->m[1][3] = pOut->m[2][0] = pOut->m[2][1] = pOut->m[2][3] = pOut->m[3][0] = pOut->m[3][1] = pOut->m[3][2] = 0.0f;
	pOut->m[0][0] = pOut->m[1][1] = pOut->m[2][2] = pOut->m[3][3] = 1.0f;
	return pOut;
}
D3DXINLINE BOOL D3DXMatrixIsIdentity(CONST D3DXMATRIX *pM)
{
#ifdef D3DX_DEBUG
	if (!pM)
		return FALSE;
#endif
	return pM->m[0][0] == 1.0f && pM->m[0][1] == 0.0f && pM->m[0][2] == 0.0f && pM->m[0][3] == 0.0f && pM->m[1][0] == 0.0f && pM->m[1][1] == 1.0f && pM->m[1][2] == 0.0f && pM->m[1][3] == 0.0f && pM->m[2][0] == 0.0f && pM->m[2][1] == 0.0f && pM->m[2][2] == 1.0f && pM->m[2][3] == 0.0f && pM->m[3][0] == 0.0f && pM->m[3][1] == 0.0f && pM->m[3][2] == 0.0f && pM->m[3][3] == 1.0f;
}
D3DXINLINE FLOAT D3DXQuaternionLength(CONST D3DXQUATERNION *pQ)
{
#ifdef D3DX_DEBUG
	if (!pQ)
		return 0.0f;
#endif

	return (FLOAT)sqrt(pQ->x * pQ->x + pQ->y * pQ->y + pQ->z * pQ->z + pQ->w * pQ->w);

}
D3DXINLINE FLOAT D3DXQuaternionLengthSq(CONST D3DXQUATERNION *pQ)
{
#ifdef D3DX_DEBUG
	if (!pQ)
		return 0.0f;
#endif
	return pQ->x * pQ->x + pQ->y * pQ->y + pQ->z * pQ->z + pQ->w * pQ->w;
}
D3DXINLINE FLOAT D3DXQuaternionDot(CONST D3DXQUATERNION *pQ1, CONST D3DXQUATERNION *pQ2)
{
#ifdef D3DX_DEBUG
	if (!pQ1 || !pQ2)
		return 0.0f;
#endif
	return pQ1->x * pQ2->x + pQ1->y * pQ2->y + pQ1->z * pQ2->z + pQ1->w * pQ2->w;
}
D3DXINLINE D3DXQUATERNION *D3DXQuaternionIdentity(D3DXQUATERNION *pOut)
{
#ifdef D3DX_DEBUG
	if (!pOut)
		return NULL;
#endif
	pOut->x = pOut->y = pOut->z = 0.0f;
	pOut->w = 1.0f;
	return pOut;
}
D3DXINLINE BOOL D3DXQuaternionIsIdentity(CONST D3DXQUATERNION *pQ)
{
#ifdef D3DX_DEBUG
	if (!pQ)
		return FALSE;
#endif
	return pQ->x == 0.0f && pQ->y == 0.0f && pQ->z == 0.0f && pQ->w == 1.0f;
}
D3DXINLINE D3DXQUATERNION *D3DXQuaternionConjugate(D3DXQUATERNION *pOut, CONST D3DXQUATERNION *pQ)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pQ)
		return NULL;
#endif
	pOut->x = -pQ->x;
	pOut->y = -pQ->y;
	pOut->z = -pQ->z;
	pOut->w = pQ->w;
	return pOut;
}
D3DXINLINE FLOAT D3DXPlaneDot(CONST D3DXPLANE *pP, CONST D3DXVECTOR4 *pV)
{
#ifdef D3DX_DEBUG
	if (!pP || !pV)
		return 0.0f;
#endif
	return pP->a * pV->x + pP->b * pV->y + pP->c * pV->z + pP->d * pV->w;
}
D3DXINLINE FLOAT D3DXPlaneDotCoord(CONST D3DXPLANE *pP, CONST D3DXVECTOR3 *pV)
{
#ifdef D3DX_DEBUG
	if (!pP || !pV)
		return 0.0f;
#endif
	return pP->a * pV->x + pP->b * pV->y + pP->c * pV->z + pP->d;
}
D3DXINLINE FLOAT D3DXPlaneDotNormal(CONST D3DXPLANE *pP, CONST D3DXVECTOR3 *pV)
{
#ifdef D3DX_DEBUG
	if (!pP || !pV)
		return 0.0f;
#endif
	return pP->a * pV->x + pP->b * pV->y + pP->c * pV->z;
}
D3DXINLINE D3DXCOLOR *D3DXColorNegative(D3DXCOLOR *pOut, CONST D3DXCOLOR *pC)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pC)
		return NULL;
#endif
	pOut->r = 1.0f - pC->r;
	pOut->g = 1.0f - pC->g;
	pOut->b = 1.0f - pC->b;
	pOut->a = pC->a;
	return pOut;
}
D3DXINLINE D3DXCOLOR *D3DXColorAdd(D3DXCOLOR *pOut, CONST D3DXCOLOR *pC1, CONST D3DXCOLOR *pC2)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pC1 || !pC2)
		return NULL;
#endif
	pOut->r = pC1->r + pC2->r;
	pOut->g = pC1->g + pC2->g;
	pOut->b = pC1->b + pC2->b;
	pOut->a = pC1->a + pC2->a;
	return pOut;
}
D3DXINLINE D3DXCOLOR *D3DXColorSubtract(D3DXCOLOR *pOut, CONST D3DXCOLOR *pC1, CONST D3DXCOLOR *pC2)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pC1 || !pC2)
		return NULL;
#endif
	pOut->r = pC1->r - pC2->r;
	pOut->g = pC1->g - pC2->g;
	pOut->b = pC1->b - pC2->b;
	pOut->a = pC1->a - pC2->a;
	return pOut;
}
D3DXINLINE D3DXCOLOR *D3DXColorScale(D3DXCOLOR *pOut, CONST D3DXCOLOR *pC, FLOAT s)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pC)
		return NULL;
#endif
	pOut->r = pC->r * s;
	pOut->g = pC->g * s;
	pOut->b = pC->b * s;
	pOut->a = pC->a * s;
	return pOut;
}
D3DXINLINE D3DXCOLOR *D3DXColorModulate(D3DXCOLOR *pOut, CONST D3DXCOLOR *pC1, CONST D3DXCOLOR *pC2)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pC1 || !pC2)
		return NULL;
#endif
	pOut->r = pC1->r * pC2->r;
	pOut->g = pC1->g * pC2->g;
	pOut->b = pC1->b * pC2->b;
	pOut->a = pC1->a * pC2->a;
	return pOut;
}
D3DXINLINE D3DXCOLOR *D3DXColorLerp(D3DXCOLOR *pOut, CONST D3DXCOLOR *pC1, CONST D3DXCOLOR *pC2, FLOAT s)
{
#ifdef D3DX_DEBUG
	if (!pOut || !pC1 || !pC2)
		return NULL;
#endif
	pOut->r = pC1->r + s * (pC2->r - pC1->r);
	pOut->g = pC1->g + s * (pC2->g - pC1->g);
	pOut->b = pC1->b + s * (pC2->b - pC1->b);
	pOut->a = pC1->a + s * (pC2->a - pC1->a);
	return pOut;
}
#endif
