/*+@@file@@---------------------------------------------------------------- *//*!
   \file       d3dx9effect.h
   \par Description 
   Extension and update of headers for PellesC compiler suite.
   \par Project: 
   PellesC Headers extension
   \date       Created  on Fri Nov 11 16:33:01 2016
   \date       Modified on Fri Nov 11 16:33:01 2016
   \author frankie
   \ *//*-@@file@@---------------------------------------------------------------- */

#include <d3dx9.h>
#ifndef __D3DX9EFFECT_H__
#define __D3DX9EFFECT_H__
#if __POCC__ >= 500
#pragma once
#endif
#define D3DXFX_DONOTSAVESTATE         (1 << 0)
#define D3DXFX_DONOTSAVESHADERSTATE   (1 << 1)
#define D3DXFX_DONOTSAVESAMPLERSTATE  (1 << 2)
#define D3DXFX_NOT_CLONEABLE          (1 << 11)
#define D3DXFX_LARGEADDRESSAWARE      (1 << 17)
#define D3DX_PARAMETER_SHARED       (1 << 0)
#define D3DX_PARAMETER_LITERAL      (1 << 1)
#define D3DX_PARAMETER_ANNOTATION   (1 << 2)
typedef struct _D3DXEFFECT_DESC
{
	LPCSTR Creator;
	UINT Parameters;
	UINT Techniques;
	UINT Functions;
} D3DXEFFECT_DESC;
typedef struct _D3DXPARAMETER_DESC
{
	LPCSTR Name;
	LPCSTR Semantic;
	D3DXPARAMETER_CLASS Class;
	D3DXPARAMETER_TYPE Type;
	UINT Rows;
	UINT Columns;
	UINT Elements;
	UINT Annotations;
	UINT StructMembers;
	DWORD Flags;
	UINT Bytes;
} D3DXPARAMETER_DESC;
typedef struct _D3DXTECHNIQUE_DESC
{
	LPCSTR Name;
	UINT Passes;
	UINT Annotations;
} D3DXTECHNIQUE_DESC;
typedef struct _D3DXPASS_DESC
{
	LPCSTR Name;
	UINT Annotations;
	CONST DWORD *pVertexShaderFunction;
	CONST DWORD *pPixelShaderFunction;
} D3DXPASS_DESC;
typedef struct _D3DXFUNCTION_DESC
{
	LPCSTR Name;
	UINT Annotations;
} D3DXFUNCTION_DESC;
typedef interface ID3DXEffectPool ID3DXEffectPool;
typedef interface ID3DXEffectPool *LPD3DXEFFECTPOOL;
DEFINE_GUID(IID_ID3DXEffectPool, 0x9537ab04, 0x3250, 0x412e, 0x82, 0x13, 0xfc, 0xd2, 0xf8, 0x67, 0x79, 0x33);
#undef INTERFACE
#define INTERFACE ID3DXEffectPool
DECLARE_INTERFACE_(ID3DXEffectPool, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
};
typedef interface ID3DXBaseEffect ID3DXBaseEffect;
typedef interface ID3DXBaseEffect *LPD3DXBASEEFFECT;
DEFINE_GUID(IID_ID3DXBaseEffect, 0x17c18ac, 0x103f, 0x4417, 0x8c, 0x51, 0x6b, 0xf6, 0xef, 0x1e, 0x56, 0xbe);
#undef INTERFACE
#define INTERFACE ID3DXBaseEffect
DECLARE_INTERFACE_(ID3DXBaseEffect, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(GetDesc) (THIS_ D3DXEFFECT_DESC * pDesc)PURE;
	STDMETHOD(GetParameterDesc) (THIS_ D3DXHANDLE hParameter, D3DXPARAMETER_DESC * pDesc)PURE;
	STDMETHOD(GetTechniqueDesc) (THIS_ D3DXHANDLE hTechnique, D3DXTECHNIQUE_DESC * pDesc)PURE;
	STDMETHOD(GetPassDesc) (THIS_ D3DXHANDLE hPass, D3DXPASS_DESC * pDesc)PURE;
	STDMETHOD(GetFunctionDesc) (THIS_ D3DXHANDLE hShader, D3DXFUNCTION_DESC * pDesc)PURE;
	STDMETHOD_(D3DXHANDLE, GetParameter) (THIS_ D3DXHANDLE hParameter, UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetParameterByName) (THIS_ D3DXHANDLE hParameter, LPCSTR pName)PURE;
	STDMETHOD_(D3DXHANDLE, GetParameterBySemantic) (THIS_ D3DXHANDLE hParameter, LPCSTR pSemantic)PURE;
	STDMETHOD_(D3DXHANDLE, GetParameterElement) (THIS_ D3DXHANDLE hParameter, UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetTechnique) (THIS_ UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetTechniqueByName) (THIS_ LPCSTR pName)PURE;
	STDMETHOD_(D3DXHANDLE, GetPass) (THIS_ D3DXHANDLE hTechnique, UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetPassByName) (THIS_ D3DXHANDLE hTechnique, LPCSTR pName)PURE;
	STDMETHOD_(D3DXHANDLE, GetFunction) (THIS_ UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetFunctionByName) (THIS_ LPCSTR pName)PURE;
	STDMETHOD_(D3DXHANDLE, GetAnnotation) (THIS_ D3DXHANDLE hObject, UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetAnnotationByName) (THIS_ D3DXHANDLE hObject, LPCSTR pName)PURE;
	STDMETHOD(SetValue) (THIS_ D3DXHANDLE hParameter, LPCVOID pData, UINT Bytes)PURE;
	STDMETHOD(GetValue) (THIS_ D3DXHANDLE hParameter, LPVOID pData, UINT Bytes)PURE;
	STDMETHOD(SetBool) (THIS_ D3DXHANDLE hParameter, BOOL b)PURE;
	STDMETHOD(GetBool) (THIS_ D3DXHANDLE hParameter, BOOL * pb)PURE;
	STDMETHOD(SetBoolArray) (THIS_ D3DXHANDLE hParameter, CONST BOOL * pb, UINT Count)PURE;
	STDMETHOD(GetBoolArray) (THIS_ D3DXHANDLE hParameter, BOOL * pb, UINT Count)PURE;
	STDMETHOD(SetInt) (THIS_ D3DXHANDLE hParameter, INT n)PURE;
	STDMETHOD(GetInt) (THIS_ D3DXHANDLE hParameter, INT * pn)PURE;
	STDMETHOD(SetIntArray) (THIS_ D3DXHANDLE hParameter, CONST INT * pn, UINT Count)PURE;
	STDMETHOD(GetIntArray) (THIS_ D3DXHANDLE hParameter, INT * pn, UINT Count)PURE;
	STDMETHOD(SetFloat) (THIS_ D3DXHANDLE hParameter, FLOAT f)PURE;
	STDMETHOD(GetFloat) (THIS_ D3DXHANDLE hParameter, FLOAT * pf)PURE;
	STDMETHOD(SetFloatArray) (THIS_ D3DXHANDLE hParameter, CONST FLOAT * pf, UINT Count)PURE;
	STDMETHOD(GetFloatArray) (THIS_ D3DXHANDLE hParameter, FLOAT * pf, UINT Count)PURE;
	STDMETHOD(SetVector) (THIS_ D3DXHANDLE hParameter, CONST D3DXVECTOR4 * pVector)PURE;
	STDMETHOD(GetVector) (THIS_ D3DXHANDLE hParameter, D3DXVECTOR4 * pVector)PURE;
	STDMETHOD(SetVectorArray) (THIS_ D3DXHANDLE hParameter, CONST D3DXVECTOR4 * pVector, UINT Count)PURE;
	STDMETHOD(GetVectorArray) (THIS_ D3DXHANDLE hParameter, D3DXVECTOR4 * pVector, UINT Count)PURE;
	STDMETHOD(SetMatrix) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX * pMatrix)PURE;
	STDMETHOD(GetMatrix) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX * pMatrix)PURE;
	STDMETHOD(SetMatrixArray) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX * pMatrix, UINT Count)PURE;
	STDMETHOD(GetMatrixArray) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX * pMatrix, UINT Count)PURE;
	STDMETHOD(SetMatrixPointerArray) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX ** ppMatrix, UINT Count)PURE;
	STDMETHOD(GetMatrixPointerArray) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX ** ppMatrix, UINT Count)PURE;
	STDMETHOD(SetMatrixTranspose) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX * pMatrix)PURE;
	STDMETHOD(GetMatrixTranspose) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX * pMatrix)PURE;
	STDMETHOD(SetMatrixTransposeArray) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX * pMatrix, UINT Count)PURE;
	STDMETHOD(GetMatrixTransposeArray) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX * pMatrix, UINT Count)PURE;
	STDMETHOD(SetMatrixTransposePointerArray) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX ** ppMatrix, UINT Count)PURE;
	STDMETHOD(GetMatrixTransposePointerArray) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX ** ppMatrix, UINT Count)PURE;
	STDMETHOD(SetString) (THIS_ D3DXHANDLE hParameter, LPCSTR pString)PURE;
	STDMETHOD(GetString) (THIS_ D3DXHANDLE hParameter, LPCSTR * ppString)PURE;
	STDMETHOD(SetTexture) (THIS_ D3DXHANDLE hParameter, LPDIRECT3DBASETEXTURE9 pTexture)PURE;
	STDMETHOD(GetTexture) (THIS_ D3DXHANDLE hParameter, LPDIRECT3DBASETEXTURE9 * ppTexture)PURE;
	STDMETHOD(GetPixelShader) (THIS_ D3DXHANDLE hParameter, LPDIRECT3DPIXELSHADER9 * ppPShader)PURE;
	STDMETHOD(GetVertexShader) (THIS_ D3DXHANDLE hParameter, LPDIRECT3DVERTEXSHADER9 * ppVShader)PURE;
	STDMETHOD(SetArrayRange) (THIS_ D3DXHANDLE hParameter, UINT uStart, UINT uEnd)PURE;
};
typedef interface ID3DXEffectStateManager ID3DXEffectStateManager;
typedef interface ID3DXEffectStateManager *LPD3DXEFFECTSTATEMANAGER;
DEFINE_GUID(IID_ID3DXEffectStateManager, 0x79aab587, 0x6dbc, 0x4fa7, 0x82, 0xde, 0x37, 0xfa, 0x17, 0x81, 0xc5, 0xce);
#undef INTERFACE
#define INTERFACE ID3DXEffectStateManager
DECLARE_INTERFACE_(ID3DXEffectStateManager, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(SetTransform) (THIS_ D3DTRANSFORMSTATETYPE State, CONST D3DMATRIX * pMatrix)PURE;
	STDMETHOD(SetMaterial) (THIS_ CONST D3DMATERIAL9 * pMaterial)PURE;
	STDMETHOD(SetLight) (THIS_ DWORD Index, CONST D3DLIGHT9 * pLight)PURE;
	STDMETHOD(LightEnable) (THIS_ DWORD Index, BOOL Enable)PURE;
	STDMETHOD(SetRenderState) (THIS_ D3DRENDERSTATETYPE State, DWORD Value)PURE;
	STDMETHOD(SetTexture) (THIS_ DWORD Stage, LPDIRECT3DBASETEXTURE9 pTexture)PURE;
	STDMETHOD(SetTextureStageState) (THIS_ DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value)PURE;
	STDMETHOD(SetSamplerState) (THIS_ DWORD Sampler, D3DSAMPLERSTATETYPE Type, DWORD Value)PURE;
	STDMETHOD(SetNPatchMode) (THIS_ FLOAT NumSegments)PURE;
	STDMETHOD(SetFVF) (THIS_ DWORD FVF)PURE;
	STDMETHOD(SetVertexShader) (THIS_ LPDIRECT3DVERTEXSHADER9 pShader)PURE;
	STDMETHOD(SetVertexShaderConstantF) (THIS_ UINT RegisterIndex, CONST FLOAT * pConstantData, UINT RegisterCount)PURE;
	STDMETHOD(SetVertexShaderConstantI) (THIS_ UINT RegisterIndex, CONST INT * pConstantData, UINT RegisterCount)PURE;
	STDMETHOD(SetVertexShaderConstantB) (THIS_ UINT RegisterIndex, CONST BOOL * pConstantData, UINT RegisterCount)PURE;
	STDMETHOD(SetPixelShader) (THIS_ LPDIRECT3DPIXELSHADER9 pShader)PURE;
	STDMETHOD(SetPixelShaderConstantF) (THIS_ UINT RegisterIndex, CONST FLOAT * pConstantData, UINT RegisterCount)PURE;
	STDMETHOD(SetPixelShaderConstantI) (THIS_ UINT RegisterIndex, CONST INT * pConstantData, UINT RegisterCount)PURE;
	STDMETHOD(SetPixelShaderConstantB) (THIS_ UINT RegisterIndex, CONST BOOL * pConstantData, UINT RegisterCount)PURE;
};
typedef interface ID3DXEffect ID3DXEffect;
typedef interface ID3DXEffect *LPD3DXEFFECT;
DEFINE_GUID(IID_ID3DXEffect, 0xf6ceb4b3, 0x4e4c, 0x40dd, 0xb8, 0x83, 0x8d, 0x8d, 0xe5, 0xea, 0xc, 0xd5);
#undef INTERFACE
#define INTERFACE ID3DXEffect
DECLARE_INTERFACE_(ID3DXEffect, ID3DXBaseEffect)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(GetDesc) (THIS_ D3DXEFFECT_DESC * pDesc)PURE;
	STDMETHOD(GetParameterDesc) (THIS_ D3DXHANDLE hParameter, D3DXPARAMETER_DESC * pDesc)PURE;
	STDMETHOD(GetTechniqueDesc) (THIS_ D3DXHANDLE hTechnique, D3DXTECHNIQUE_DESC * pDesc)PURE;
	STDMETHOD(GetPassDesc) (THIS_ D3DXHANDLE hPass, D3DXPASS_DESC * pDesc)PURE;
	STDMETHOD(GetFunctionDesc) (THIS_ D3DXHANDLE hShader, D3DXFUNCTION_DESC * pDesc)PURE;
	STDMETHOD_(D3DXHANDLE, GetParameter) (THIS_ D3DXHANDLE hParameter, UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetParameterByName) (THIS_ D3DXHANDLE hParameter, LPCSTR pName)PURE;
	STDMETHOD_(D3DXHANDLE, GetParameterBySemantic) (THIS_ D3DXHANDLE hParameter, LPCSTR pSemantic)PURE;
	STDMETHOD_(D3DXHANDLE, GetParameterElement) (THIS_ D3DXHANDLE hParameter, UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetTechnique) (THIS_ UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetTechniqueByName) (THIS_ LPCSTR pName)PURE;
	STDMETHOD_(D3DXHANDLE, GetPass) (THIS_ D3DXHANDLE hTechnique, UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetPassByName) (THIS_ D3DXHANDLE hTechnique, LPCSTR pName)PURE;
	STDMETHOD_(D3DXHANDLE, GetFunction) (THIS_ UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetFunctionByName) (THIS_ LPCSTR pName)PURE;
	STDMETHOD_(D3DXHANDLE, GetAnnotation) (THIS_ D3DXHANDLE hObject, UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetAnnotationByName) (THIS_ D3DXHANDLE hObject, LPCSTR pName)PURE;
	STDMETHOD(SetValue) (THIS_ D3DXHANDLE hParameter, LPCVOID pData, UINT Bytes)PURE;
	STDMETHOD(GetValue) (THIS_ D3DXHANDLE hParameter, LPVOID pData, UINT Bytes)PURE;
	STDMETHOD(SetBool) (THIS_ D3DXHANDLE hParameter, BOOL b)PURE;
	STDMETHOD(GetBool) (THIS_ D3DXHANDLE hParameter, BOOL * pb)PURE;
	STDMETHOD(SetBoolArray) (THIS_ D3DXHANDLE hParameter, CONST BOOL * pb, UINT Count)PURE;
	STDMETHOD(GetBoolArray) (THIS_ D3DXHANDLE hParameter, BOOL * pb, UINT Count)PURE;
	STDMETHOD(SetInt) (THIS_ D3DXHANDLE hParameter, INT n)PURE;
	STDMETHOD(GetInt) (THIS_ D3DXHANDLE hParameter, INT * pn)PURE;
	STDMETHOD(SetIntArray) (THIS_ D3DXHANDLE hParameter, CONST INT * pn, UINT Count)PURE;
	STDMETHOD(GetIntArray) (THIS_ D3DXHANDLE hParameter, INT * pn, UINT Count)PURE;
	STDMETHOD(SetFloat) (THIS_ D3DXHANDLE hParameter, FLOAT f)PURE;
	STDMETHOD(GetFloat) (THIS_ D3DXHANDLE hParameter, FLOAT * pf)PURE;
	STDMETHOD(SetFloatArray) (THIS_ D3DXHANDLE hParameter, CONST FLOAT * pf, UINT Count)PURE;
	STDMETHOD(GetFloatArray) (THIS_ D3DXHANDLE hParameter, FLOAT * pf, UINT Count)PURE;
	STDMETHOD(SetVector) (THIS_ D3DXHANDLE hParameter, CONST D3DXVECTOR4 * pVector)PURE;
	STDMETHOD(GetVector) (THIS_ D3DXHANDLE hParameter, D3DXVECTOR4 * pVector)PURE;
	STDMETHOD(SetVectorArray) (THIS_ D3DXHANDLE hParameter, CONST D3DXVECTOR4 * pVector, UINT Count)PURE;
	STDMETHOD(GetVectorArray) (THIS_ D3DXHANDLE hParameter, D3DXVECTOR4 * pVector, UINT Count)PURE;
	STDMETHOD(SetMatrix) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX * pMatrix)PURE;
	STDMETHOD(GetMatrix) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX * pMatrix)PURE;
	STDMETHOD(SetMatrixArray) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX * pMatrix, UINT Count)PURE;
	STDMETHOD(GetMatrixArray) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX * pMatrix, UINT Count)PURE;
	STDMETHOD(SetMatrixPointerArray) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX ** ppMatrix, UINT Count)PURE;
	STDMETHOD(GetMatrixPointerArray) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX ** ppMatrix, UINT Count)PURE;
	STDMETHOD(SetMatrixTranspose) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX * pMatrix)PURE;
	STDMETHOD(GetMatrixTranspose) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX * pMatrix)PURE;
	STDMETHOD(SetMatrixTransposeArray) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX * pMatrix, UINT Count)PURE;
	STDMETHOD(GetMatrixTransposeArray) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX * pMatrix, UINT Count)PURE;
	STDMETHOD(SetMatrixTransposePointerArray) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX ** ppMatrix, UINT Count)PURE;
	STDMETHOD(GetMatrixTransposePointerArray) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX ** ppMatrix, UINT Count)PURE;
	STDMETHOD(SetString) (THIS_ D3DXHANDLE hParameter, LPCSTR pString)PURE;
	STDMETHOD(GetString) (THIS_ D3DXHANDLE hParameter, LPCSTR * ppString)PURE;
	STDMETHOD(SetTexture) (THIS_ D3DXHANDLE hParameter, LPDIRECT3DBASETEXTURE9 pTexture)PURE;
	STDMETHOD(GetTexture) (THIS_ D3DXHANDLE hParameter, LPDIRECT3DBASETEXTURE9 * ppTexture)PURE;
	STDMETHOD(GetPixelShader) (THIS_ D3DXHANDLE hParameter, LPDIRECT3DPIXELSHADER9 * ppPShader)PURE;
	STDMETHOD(GetVertexShader) (THIS_ D3DXHANDLE hParameter, LPDIRECT3DVERTEXSHADER9 * ppVShader)PURE;
	STDMETHOD(SetArrayRange) (THIS_ D3DXHANDLE hParameter, UINT uStart, UINT uEnd)PURE;
	STDMETHOD(GetPool) (THIS_ LPD3DXEFFECTPOOL * ppPool)PURE;
	STDMETHOD(SetTechnique) (THIS_ D3DXHANDLE hTechnique)PURE;
	STDMETHOD_(D3DXHANDLE, GetCurrentTechnique) (THIS)PURE;
	STDMETHOD(ValidateTechnique) (THIS_ D3DXHANDLE hTechnique)PURE;
	STDMETHOD(FindNextValidTechnique) (THIS_ D3DXHANDLE hTechnique, D3DXHANDLE * pTechnique)PURE;
	STDMETHOD_(BOOL, IsParameterUsed) (THIS_ D3DXHANDLE hParameter, D3DXHANDLE hTechnique)PURE;
	STDMETHOD(Begin) (THIS_ UINT * pPasses, DWORD Flags)PURE;
	STDMETHOD(BeginPass) (THIS_ UINT Pass)PURE;
	STDMETHOD(CommitChanges) (THIS)PURE;
	STDMETHOD(EndPass) (THIS)PURE;
	STDMETHOD(End) (THIS)PURE;
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE9 * ppDevice)PURE;
	STDMETHOD(OnLostDevice) (THIS)PURE;
	STDMETHOD(OnResetDevice) (THIS)PURE;
	STDMETHOD(SetStateManager) (THIS_ LPD3DXEFFECTSTATEMANAGER pManager)PURE;
	STDMETHOD(GetStateManager) (THIS_ LPD3DXEFFECTSTATEMANAGER * ppManager)PURE;
	STDMETHOD(BeginParameterBlock) (THIS)PURE;
	STDMETHOD_(D3DXHANDLE, EndParameterBlock) (THIS)PURE;
	STDMETHOD(ApplyParameterBlock) (THIS_ D3DXHANDLE hParameterBlock)PURE;
	STDMETHOD(DeleteParameterBlock) (THIS_ D3DXHANDLE hParameterBlock)PURE;
	STDMETHOD(CloneEffect) (THIS_ LPDIRECT3DDEVICE9 pDevice, LPD3DXEFFECT * ppEffect)PURE;
	STDMETHOD(SetRawValue) (THIS_ D3DXHANDLE hParameter, LPCVOID pData, UINT ByteOffset, UINT Bytes)PURE;
};
typedef interface ID3DXEffectCompiler ID3DXEffectCompiler;
typedef interface ID3DXEffectCompiler *LPD3DXEFFECTCOMPILER;
DEFINE_GUID(IID_ID3DXEffectCompiler, 0x51b8a949, 0x1a31, 0x47e6, 0xbe, 0xa0, 0x4b, 0x30, 0xdb, 0x53, 0xf1, 0xe0);
#undef INTERFACE
#define INTERFACE ID3DXEffectCompiler
DECLARE_INTERFACE_(ID3DXEffectCompiler, ID3DXBaseEffect)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(GetDesc) (THIS_ D3DXEFFECT_DESC * pDesc)PURE;
	STDMETHOD(GetParameterDesc) (THIS_ D3DXHANDLE hParameter, D3DXPARAMETER_DESC * pDesc)PURE;
	STDMETHOD(GetTechniqueDesc) (THIS_ D3DXHANDLE hTechnique, D3DXTECHNIQUE_DESC * pDesc)PURE;
	STDMETHOD(GetPassDesc) (THIS_ D3DXHANDLE hPass, D3DXPASS_DESC * pDesc)PURE;
	STDMETHOD(GetFunctionDesc) (THIS_ D3DXHANDLE hShader, D3DXFUNCTION_DESC * pDesc)PURE;
	STDMETHOD_(D3DXHANDLE, GetParameter) (THIS_ D3DXHANDLE hParameter, UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetParameterByName) (THIS_ D3DXHANDLE hParameter, LPCSTR pName)PURE;
	STDMETHOD_(D3DXHANDLE, GetParameterBySemantic) (THIS_ D3DXHANDLE hParameter, LPCSTR pSemantic)PURE;
	STDMETHOD_(D3DXHANDLE, GetParameterElement) (THIS_ D3DXHANDLE hParameter, UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetTechnique) (THIS_ UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetTechniqueByName) (THIS_ LPCSTR pName)PURE;
	STDMETHOD_(D3DXHANDLE, GetPass) (THIS_ D3DXHANDLE hTechnique, UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetPassByName) (THIS_ D3DXHANDLE hTechnique, LPCSTR pName)PURE;
	STDMETHOD_(D3DXHANDLE, GetFunction) (THIS_ UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetFunctionByName) (THIS_ LPCSTR pName)PURE;
	STDMETHOD_(D3DXHANDLE, GetAnnotation) (THIS_ D3DXHANDLE hObject, UINT Index)PURE;
	STDMETHOD_(D3DXHANDLE, GetAnnotationByName) (THIS_ D3DXHANDLE hObject, LPCSTR pName)PURE;
	STDMETHOD(SetValue) (THIS_ D3DXHANDLE hParameter, LPCVOID pData, UINT Bytes)PURE;
	STDMETHOD(GetValue) (THIS_ D3DXHANDLE hParameter, LPVOID pData, UINT Bytes)PURE;
	STDMETHOD(SetBool) (THIS_ D3DXHANDLE hParameter, BOOL b)PURE;
	STDMETHOD(GetBool) (THIS_ D3DXHANDLE hParameter, BOOL * pb)PURE;
	STDMETHOD(SetBoolArray) (THIS_ D3DXHANDLE hParameter, CONST BOOL * pb, UINT Count)PURE;
	STDMETHOD(GetBoolArray) (THIS_ D3DXHANDLE hParameter, BOOL * pb, UINT Count)PURE;
	STDMETHOD(SetInt) (THIS_ D3DXHANDLE hParameter, INT n)PURE;
	STDMETHOD(GetInt) (THIS_ D3DXHANDLE hParameter, INT * pn)PURE;
	STDMETHOD(SetIntArray) (THIS_ D3DXHANDLE hParameter, CONST INT * pn, UINT Count)PURE;
	STDMETHOD(GetIntArray) (THIS_ D3DXHANDLE hParameter, INT * pn, UINT Count)PURE;
	STDMETHOD(SetFloat) (THIS_ D3DXHANDLE hParameter, FLOAT f)PURE;
	STDMETHOD(GetFloat) (THIS_ D3DXHANDLE hParameter, FLOAT * pf)PURE;
	STDMETHOD(SetFloatArray) (THIS_ D3DXHANDLE hParameter, CONST FLOAT * pf, UINT Count)PURE;
	STDMETHOD(GetFloatArray) (THIS_ D3DXHANDLE hParameter, FLOAT * pf, UINT Count)PURE;
	STDMETHOD(SetVector) (THIS_ D3DXHANDLE hParameter, CONST D3DXVECTOR4 * pVector)PURE;
	STDMETHOD(GetVector) (THIS_ D3DXHANDLE hParameter, D3DXVECTOR4 * pVector)PURE;
	STDMETHOD(SetVectorArray) (THIS_ D3DXHANDLE hParameter, CONST D3DXVECTOR4 * pVector, UINT Count)PURE;
	STDMETHOD(GetVectorArray) (THIS_ D3DXHANDLE hParameter, D3DXVECTOR4 * pVector, UINT Count)PURE;
	STDMETHOD(SetMatrix) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX * pMatrix)PURE;
	STDMETHOD(GetMatrix) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX * pMatrix)PURE;
	STDMETHOD(SetMatrixArray) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX * pMatrix, UINT Count)PURE;
	STDMETHOD(GetMatrixArray) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX * pMatrix, UINT Count)PURE;
	STDMETHOD(SetMatrixPointerArray) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX ** ppMatrix, UINT Count)PURE;
	STDMETHOD(GetMatrixPointerArray) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX ** ppMatrix, UINT Count)PURE;
	STDMETHOD(SetMatrixTranspose) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX * pMatrix)PURE;
	STDMETHOD(GetMatrixTranspose) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX * pMatrix)PURE;
	STDMETHOD(SetMatrixTransposeArray) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX * pMatrix, UINT Count)PURE;
	STDMETHOD(GetMatrixTransposeArray) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX * pMatrix, UINT Count)PURE;
	STDMETHOD(SetMatrixTransposePointerArray) (THIS_ D3DXHANDLE hParameter, CONST D3DXMATRIX ** ppMatrix, UINT Count)PURE;
	STDMETHOD(GetMatrixTransposePointerArray) (THIS_ D3DXHANDLE hParameter, D3DXMATRIX ** ppMatrix, UINT Count)PURE;
	STDMETHOD(SetString) (THIS_ D3DXHANDLE hParameter, LPCSTR pString)PURE;
	STDMETHOD(GetString) (THIS_ D3DXHANDLE hParameter, LPCSTR * ppString)PURE;
	STDMETHOD(SetTexture) (THIS_ D3DXHANDLE hParameter, LPDIRECT3DBASETEXTURE9 pTexture)PURE;
	STDMETHOD(GetTexture) (THIS_ D3DXHANDLE hParameter, LPDIRECT3DBASETEXTURE9 * ppTexture)PURE;
	STDMETHOD(GetPixelShader) (THIS_ D3DXHANDLE hParameter, LPDIRECT3DPIXELSHADER9 * ppPShader)PURE;
	STDMETHOD(GetVertexShader) (THIS_ D3DXHANDLE hParameter, LPDIRECT3DVERTEXSHADER9 * ppVShader)PURE;
	STDMETHOD(SetArrayRange) (THIS_ D3DXHANDLE hParameter, UINT uStart, UINT uEnd)PURE;
	STDMETHOD(SetLiteral) (THIS_ D3DXHANDLE hParameter, BOOL Literal)PURE;
	STDMETHOD(GetLiteral) (THIS_ D3DXHANDLE hParameter, BOOL * pLiteral)PURE;
	STDMETHOD(CompileEffect) (THIS_ DWORD Flags, LPD3DXBUFFER * ppEffect, LPD3DXBUFFER * ppErrorMsgs)PURE;
	STDMETHOD(CompileShader) (THIS_ D3DXHANDLE hFunction, LPCSTR pTarget, DWORD Flags, LPD3DXBUFFER * ppShader, LPD3DXBUFFER * ppErrorMsgs, LPD3DXCONSTANTTABLE * ppConstantTable)PURE;
};
HRESULT WINAPI D3DXCreateEffectPool(LPD3DXEFFECTPOOL *ppPool);
HRESULT WINAPI D3DXCreateEffectFromFileA(LPDIRECT3DDEVICE9 pDevice, LPCSTR pSrcFile, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXEFFECTPOOL pPool, LPD3DXEFFECT *ppEffect, LPD3DXBUFFER *ppCompilationErrors);
HRESULT WINAPI D3DXCreateEffectFromFileW(LPDIRECT3DDEVICE9 pDevice, LPCWSTR pSrcFile, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXEFFECTPOOL pPool, LPD3DXEFFECT *ppEffect, LPD3DXBUFFER *ppCompilationErrors);
#ifdef UNICODE
#define D3DXCreateEffectFromFile D3DXCreateEffectFromFileW
#else
#define D3DXCreateEffectFromFile D3DXCreateEffectFromFileA
#endif
HRESULT WINAPI D3DXCreateEffectFromResourceA(LPDIRECT3DDEVICE9 pDevice, HMODULE hSrcModule, LPCSTR pSrcResource, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXEFFECTPOOL pPool, LPD3DXEFFECT *ppEffect, LPD3DXBUFFER *ppCompilationErrors);
HRESULT WINAPI D3DXCreateEffectFromResourceW(LPDIRECT3DDEVICE9 pDevice, HMODULE hSrcModule, LPCWSTR pSrcResource, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXEFFECTPOOL pPool, LPD3DXEFFECT *ppEffect, LPD3DXBUFFER *ppCompilationErrors);
#ifdef UNICODE
#define D3DXCreateEffectFromResource D3DXCreateEffectFromResourceW
#else
#define D3DXCreateEffectFromResource D3DXCreateEffectFromResourceA
#endif
HRESULT WINAPI D3DXCreateEffect(LPDIRECT3DDEVICE9 pDevice, LPCVOID pSrcData, UINT SrcDataLen, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXEFFECTPOOL pPool, LPD3DXEFFECT *ppEffect, LPD3DXBUFFER *ppCompilationErrors);
HRESULT WINAPI D3DXCreateEffectFromFileExA(LPDIRECT3DDEVICE9 pDevice, LPCSTR pSrcFile, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, LPCSTR pSkipConstants, DWORD Flags, LPD3DXEFFECTPOOL pPool, LPD3DXEFFECT *ppEffect, LPD3DXBUFFER *ppCompilationErrors);
HRESULT WINAPI D3DXCreateEffectFromFileExW(LPDIRECT3DDEVICE9 pDevice, LPCWSTR pSrcFile, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, LPCSTR pSkipConstants, DWORD Flags, LPD3DXEFFECTPOOL pPool, LPD3DXEFFECT *ppEffect, LPD3DXBUFFER *ppCompilationErrors);
#ifdef UNICODE
#define D3DXCreateEffectFromFileEx D3DXCreateEffectFromFileExW
#else
#define D3DXCreateEffectFromFileEx D3DXCreateEffectFromFileExA
#endif
HRESULT WINAPI D3DXCreateEffectFromResourceExA(LPDIRECT3DDEVICE9 pDevice, HMODULE hSrcModule, LPCSTR pSrcResource, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, LPCSTR pSkipConstants, DWORD Flags, LPD3DXEFFECTPOOL pPool, LPD3DXEFFECT *ppEffect, LPD3DXBUFFER *ppCompilationErrors);
HRESULT WINAPI D3DXCreateEffectFromResourceExW(LPDIRECT3DDEVICE9 pDevice, HMODULE hSrcModule, LPCWSTR pSrcResource, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, LPCSTR pSkipConstants, DWORD Flags, LPD3DXEFFECTPOOL pPool, LPD3DXEFFECT *ppEffect, LPD3DXBUFFER *ppCompilationErrors);
#ifdef UNICODE
#define D3DXCreateEffectFromResourceEx D3DXCreateEffectFromResourceExW
#else
#define D3DXCreateEffectFromResourceEx D3DXCreateEffectFromResourceExA
#endif
HRESULT WINAPI D3DXCreateEffectEx(LPDIRECT3DDEVICE9 pDevice, LPCVOID pSrcData, UINT SrcDataLen, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, LPCSTR pSkipConstants, DWORD Flags, LPD3DXEFFECTPOOL pPool, LPD3DXEFFECT *ppEffect, LPD3DXBUFFER *ppCompilationErrors);
HRESULT WINAPI D3DXCreateEffectCompilerFromFileA(LPCSTR pSrcFile, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXEFFECTCOMPILER *ppCompiler, LPD3DXBUFFER *ppParseErrors);
HRESULT WINAPI D3DXCreateEffectCompilerFromFileW(LPCWSTR pSrcFile, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXEFFECTCOMPILER *ppCompiler, LPD3DXBUFFER *ppParseErrors);
#ifdef UNICODE
#define D3DXCreateEffectCompilerFromFile D3DXCreateEffectCompilerFromFileW
#else
#define D3DXCreateEffectCompilerFromFile D3DXCreateEffectCompilerFromFileA
#endif
HRESULT WINAPI D3DXCreateEffectCompilerFromResourceA(HMODULE hSrcModule, LPCSTR pSrcResource, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXEFFECTCOMPILER *ppCompiler, LPD3DXBUFFER *ppParseErrors);
HRESULT WINAPI D3DXCreateEffectCompilerFromResourceW(HMODULE hSrcModule, LPCWSTR pSrcResource, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXEFFECTCOMPILER *ppCompiler, LPD3DXBUFFER *ppParseErrors);
#ifdef UNICODE
#define D3DXCreateEffectCompilerFromResource D3DXCreateEffectCompilerFromResourceW
#else
#define D3DXCreateEffectCompilerFromResource D3DXCreateEffectCompilerFromResourceA
#endif
HRESULT WINAPI D3DXCreateEffectCompiler(LPCSTR pSrcData, UINT SrcDataLen, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXEFFECTCOMPILER *ppCompiler, LPD3DXBUFFER *ppParseErrors);
HRESULT WINAPI D3DXDisassembleEffect(LPD3DXEFFECT pEffect, BOOL EnableColorCode, LPD3DXBUFFER *ppDisassembly);
#endif
