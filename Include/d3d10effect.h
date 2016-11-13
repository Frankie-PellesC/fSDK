/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3d10effect.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jun  3 17:37:23 2016
 \date		Modified on Fri Jun  3 17:37:23 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef __D3D10EFFECT_H__
#define __D3D10EFFECT_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <d3d10.h>
typedef enum _D3D10_DEVICE_STATE_TYPES
{
    D3D10_DST_SO_BUFFERS=1,
	D3D10_DST_OM_RENDER_TARGETS,
	D3D10_DST_OM_DEPTH_STENCIL_STATE,
	D3D10_DST_OM_BLEND_STATE,
    D3D10_DST_VS,
	D3D10_DST_VS_SAMPLERS,
	D3D10_DST_VS_SHADER_RESOURCES,
	D3D10_DST_VS_CONSTANT_BUFFERS,
    D3D10_DST_GS,
	D3D10_DST_GS_SAMPLERS,
	D3D10_DST_GS_SHADER_RESOURCES,
	D3D10_DST_GS_CONSTANT_BUFFERS,
    D3D10_DST_PS,
	D3D10_DST_PS_SAMPLERS,
	D3D10_DST_PS_SHADER_RESOURCES,
	D3D10_DST_PS_CONSTANT_BUFFERS,    
    D3D10_DST_IA_VERTEX_BUFFERS,
	D3D10_DST_IA_INDEX_BUFFER,
	D3D10_DST_IA_INPUT_LAYOUT,D3D10_DST_IA_PRIMITIVE_TOPOLOGY,
    D3D10_DST_RS_VIEWPORTS,
	D3D10_DST_RS_SCISSOR_RECTS,
	D3D10_DST_RS_RASTERIZER_STATE,
    D3D10_DST_PREDICATION,
} D3D10_DEVICE_STATE_TYPES;
#ifndef D3D10_BYTES_FROM_BITS
#define D3D10_BYTES_FROM_BITS(x) (((x) + 7) / 8)
#endif
typedef struct _D3D10_STATE_BLOCK_MASK
{
    BYTE VS;
    BYTE VSSamplers[D3D10_BYTES_FROM_BITS(D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT)];
    BYTE VSShaderResources[D3D10_BYTES_FROM_BITS(D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT)];
    BYTE VSConstantBuffers[D3D10_BYTES_FROM_BITS(D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT)];
    BYTE GS;
    BYTE GSSamplers[D3D10_BYTES_FROM_BITS(D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT)];
    BYTE GSShaderResources[D3D10_BYTES_FROM_BITS(D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT)];
    BYTE GSConstantBuffers[D3D10_BYTES_FROM_BITS(D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT)];
    BYTE PS;
    BYTE PSSamplers[D3D10_BYTES_FROM_BITS(D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT)];
    BYTE PSShaderResources[D3D10_BYTES_FROM_BITS(D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT)];
    BYTE PSConstantBuffers[D3D10_BYTES_FROM_BITS(D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT)];
    BYTE IAVertexBuffers[D3D10_BYTES_FROM_BITS(D3D10_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT)];
    BYTE IAIndexBuffer;
    BYTE IAInputLayout;
    BYTE IAPrimitiveTopology;
    BYTE OMRenderTargets;
    BYTE OMDepthStencilState;
    BYTE OMBlendState;
    BYTE RSViewports;
    BYTE RSScissorRects;
    BYTE RSRasterizerState;
    BYTE SOBuffers;
    BYTE Predication;
} D3D10_STATE_BLOCK_MASK;
typedef interface ID3D10StateBlock ID3D10StateBlock;
typedef interface ID3D10StateBlock *LPD3D10STATEBLOCK;
DEFINE_GUID(IID_ID3D10StateBlock, 0x803425a, 0x57f5, 0x4dd6, 0x94, 0x65, 0xa8, 0x75, 0x70, 0x83, 0x4a, 0x8);
#undef INTERFACE
#define INTERFACE ID3D10StateBlock
DECLARE_INTERFACE_(ID3D10StateBlock, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(THIS);
    STDMETHOD(Capture)(THIS);
    STDMETHOD(Apply)(THIS);
    STDMETHOD(ReleaseAllDeviceObjects)(THIS);
    STDMETHOD(GetDevice)(THIS_ ID3D10Device **ppDevice);
};

HRESULT WINAPI D3D10StateBlockMaskUnion(D3D10_STATE_BLOCK_MASK *pA, D3D10_STATE_BLOCK_MASK *pB, D3D10_STATE_BLOCK_MASK *pResult);
HRESULT WINAPI D3D10StateBlockMaskIntersect(D3D10_STATE_BLOCK_MASK *pA, D3D10_STATE_BLOCK_MASK *pB, D3D10_STATE_BLOCK_MASK *pResult);
HRESULT WINAPI D3D10StateBlockMaskDifference(D3D10_STATE_BLOCK_MASK *pA, D3D10_STATE_BLOCK_MASK *pB, D3D10_STATE_BLOCK_MASK *pResult);
HRESULT WINAPI D3D10StateBlockMaskEnableCapture(D3D10_STATE_BLOCK_MASK *pMask, D3D10_DEVICE_STATE_TYPES StateType, UINT RangeStart, UINT RangeLength);
HRESULT WINAPI D3D10StateBlockMaskDisableCapture(D3D10_STATE_BLOCK_MASK *pMask, D3D10_DEVICE_STATE_TYPES StateType, UINT RangeStart, UINT RangeLength);
HRESULT WINAPI D3D10StateBlockMaskEnableAll(D3D10_STATE_BLOCK_MASK *pMask);
HRESULT WINAPI D3D10StateBlockMaskDisableAll(D3D10_STATE_BLOCK_MASK *pMask);
BOOL    WINAPI D3D10StateBlockMaskGetSetting(D3D10_STATE_BLOCK_MASK *pMask, D3D10_DEVICE_STATE_TYPES StateType, UINT Entry);
HRESULT WINAPI D3D10CreateStateBlock(ID3D10Device *pDevice, D3D10_STATE_BLOCK_MASK *pStateBlockMask, ID3D10StateBlock **ppStateBlock);

#define D3D10_EFFECT_COMPILE_CHILD_EFFECT              (1 << 0)
#define D3D10_EFFECT_COMPILE_ALLOW_SLOW_OPS            (1 << 1)
#define D3D10_EFFECT_SINGLE_THREADED                   (1 << 3)
#define D3D10_EFFECT_VARIABLE_POOLED                  (1 << 0)
#define D3D10_EFFECT_VARIABLE_ANNOTATION              (1 << 1)
#define D3D10_EFFECT_VARIABLE_EXPLICIT_BIND_POINT     (1 << 2)
typedef struct _D3D10_EFFECT_TYPE_DESC
{
    LPCSTR  TypeName;
    D3D10_SHADER_VARIABLE_CLASS    Class;    D3D10_SHADER_VARIABLE_TYPE     Type;    
    UINT    Elements;    UINT    Members;    UINT    Rows;    UINT    Columns;    
    UINT    PackedSize;    UINT    UnpackedSize;    UINT    Stride;} D3D10_EFFECT_TYPE_DESC;
typedef interface ID3D10EffectType ID3D10EffectType;
typedef interface ID3D10EffectType *LPD3D10EFFECTTYPE;
DEFINE_GUID(IID_ID3D10EffectType, 0x4e9e1ddc, 0xcd9d, 0x4772, 0xa8, 0x37, 0x0, 0x18, 0xb, 0x9b, 0x88, 0xfd);
#undef INTERFACE
#define INTERFACE ID3D10EffectType
DECLARE_INTERFACE(ID3D10EffectType)
{
    STDMETHOD_(BOOL, IsValid)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_EFFECT_TYPE_DESC *pDesc);
    STDMETHOD_(ID3D10EffectType*, GetMemberTypeByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectType*, GetMemberTypeByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectType*, GetMemberTypeBySemantic)(THIS_ LPCSTR Semantic);
    STDMETHOD_(LPCSTR, GetMemberName)(THIS_ UINT Index);
    STDMETHOD_(LPCSTR, GetMemberSemantic)(THIS_ UINT Index);
};
typedef struct _D3D10_EFFECT_VARIABLE_DESC
{
	LPCSTR Name;
	LPCSTR Semantic;
	UINT Flags;
	UINT Annotations;
	UINT BufferOffset;
	UINT ExplicitBindPoint;
}
D3D10_EFFECT_VARIABLE_DESC;
typedef interface ID3D10EffectVariable ID3D10EffectVariable;
typedef interface ID3D10EffectVariable *LPD3D10EFFECTVARIABLE;
DEFINE_GUID(IID_ID3D10EffectVariable, 0xae897105, 0xe6, 0x45bf, 0xbb, 0x8e, 0x28, 0x1d, 0xd6, 0xdb, 0x8e, 0x1b);
#undef INTERFACE
#define INTERFACE ID3D10EffectVariable
typedef interface ID3D10EffectScalarVariable ID3D10EffectScalarVariable;
typedef interface ID3D10EffectVectorVariable ID3D10EffectVectorVariable;
typedef interface ID3D10EffectMatrixVariable ID3D10EffectMatrixVariable;
typedef interface ID3D10EffectStringVariable ID3D10EffectStringVariable;
typedef interface ID3D10EffectShaderResourceVariable ID3D10EffectShaderResourceVariable;
typedef interface ID3D10EffectRenderTargetViewVariable ID3D10EffectRenderTargetViewVariable;
typedef interface ID3D10EffectDepthStencilViewVariable ID3D10EffectDepthStencilViewVariable;
typedef interface ID3D10EffectConstantBuffer ID3D10EffectConstantBuffer;
typedef interface ID3D10EffectShaderVariable ID3D10EffectShaderVariable;
typedef interface ID3D10EffectBlendVariable ID3D10EffectBlendVariable;
typedef interface ID3D10EffectDepthStencilVariable ID3D10EffectDepthStencilVariable;
typedef interface ID3D10EffectRasterizerVariable ID3D10EffectRasterizerVariable;
typedef interface ID3D10EffectSamplerVariable ID3D10EffectSamplerVariable;
DECLARE_INTERFACE(ID3D10EffectVariable)
{
    STDMETHOD_(BOOL, IsValid)(THIS);
    STDMETHOD_(ID3D10EffectType*, GetType)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_EFFECT_VARIABLE_DESC *pDesc);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberBySemantic)(THIS_ LPCSTR Semantic);
    STDMETHOD_(ID3D10EffectVariable*, GetElement)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectConstantBuffer*, GetParentConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectScalarVariable*, AsScalar)(THIS);
    STDMETHOD_(ID3D10EffectVectorVariable*, AsVector)(THIS);
    STDMETHOD_(ID3D10EffectMatrixVariable*, AsMatrix)(THIS);
    STDMETHOD_(ID3D10EffectStringVariable*, AsString)(THIS);
    STDMETHOD_(ID3D10EffectShaderResourceVariable*, AsShaderResource)(THIS);
    STDMETHOD_(ID3D10EffectRenderTargetViewVariable*, AsRenderTargetView)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilViewVariable*, AsDepthStencilView)(THIS);
    STDMETHOD_(ID3D10EffectConstantBuffer*, AsConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectShaderVariable*, AsShader)(THIS);
    STDMETHOD_(ID3D10EffectBlendVariable*, AsBlend)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilVariable*, AsDepthStencil)(THIS);
    STDMETHOD_(ID3D10EffectRasterizerVariable*, AsRasterizer)(THIS);
    STDMETHOD_(ID3D10EffectSamplerVariable*, AsSampler)(THIS);
    STDMETHOD(SetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
};
typedef interface ID3D10EffectScalarVariable ID3D10EffectScalarVariable;
typedef interface ID3D10EffectScalarVariable *LPD3D10EFFECTSCALARVARIABLE;
DEFINE_GUID(IID_ID3D10EffectScalarVariable, 0xe48f7b, 0xd2c8, 0x49e8, 0xa8, 0x6c, 0x2, 0x2d, 0xee, 0x53, 0x43, 0x1f);
#undef INTERFACE
#define INTERFACE ID3D10EffectScalarVariable
DECLARE_INTERFACE_(ID3D10EffectScalarVariable, ID3D10EffectVariable)
{
    STDMETHOD_(BOOL, IsValid)(THIS);
    STDMETHOD_(ID3D10EffectType*, GetType)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_EFFECT_VARIABLE_DESC *pDesc);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberBySemantic)(THIS_ LPCSTR Semantic);
    STDMETHOD_(ID3D10EffectVariable*, GetElement)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectConstantBuffer*, GetParentConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectScalarVariable*, AsScalar)(THIS);
    STDMETHOD_(ID3D10EffectVectorVariable*, AsVector)(THIS);
    STDMETHOD_(ID3D10EffectMatrixVariable*, AsMatrix)(THIS);
    STDMETHOD_(ID3D10EffectStringVariable*, AsString)(THIS);
    STDMETHOD_(ID3D10EffectShaderResourceVariable*, AsShaderResource)(THIS);
    STDMETHOD_(ID3D10EffectRenderTargetViewVariable*, AsRenderTargetView)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilViewVariable*, AsDepthStencilView)(THIS);
    STDMETHOD_(ID3D10EffectConstantBuffer*, AsConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectShaderVariable*, AsShader)(THIS);
    STDMETHOD_(ID3D10EffectBlendVariable*, AsBlend)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilVariable*, AsDepthStencil)(THIS);
    STDMETHOD_(ID3D10EffectRasterizerVariable*, AsRasterizer)(THIS);
    STDMETHOD_(ID3D10EffectSamplerVariable*, AsSampler)(THIS);
    STDMETHOD(SetRawValue)(THIS_ void *pData, UINT ByteOffset, UINT ByteCount);
    STDMETHOD(GetRawValue)(THIS_ void *pData, UINT ByteOffset, UINT ByteCount);
    STDMETHOD(SetFloat)(THIS_ float Value);
    STDMETHOD(GetFloat)(THIS_ float *pValue);    
    STDMETHOD(SetFloatArray)(THIS_ float *pData, UINT Offset, UINT Count);
    STDMETHOD(GetFloatArray)(THIS_ float *pData, UINT Offset, UINT Count);
    STDMETHOD(SetInt)(THIS_ int Value);
    STDMETHOD(GetInt)(THIS_ int *pValue);
    STDMETHOD(SetIntArray)(THIS_ int *pData, UINT Offset, UINT Count);
    STDMETHOD(GetIntArray)(THIS_ int *pData, UINT Offset, UINT Count);
    STDMETHOD(SetBool)(THIS_ BOOL Value);
    STDMETHOD(GetBool)(THIS_ BOOL *pValue);
    STDMETHOD(SetBoolArray)(THIS_ BOOL *pData, UINT Offset, UINT Count);
    STDMETHOD(GetBoolArray)(THIS_ BOOL *pData, UINT Offset, UINT Count);
};
typedef interface ID3D10EffectVectorVariable ID3D10EffectVectorVariable;
typedef interface ID3D10EffectVectorVariable *LPD3D10EFFECTVECTORVARIABLE;
DEFINE_GUID(IID_ID3D10EffectVectorVariable, 0x62b98c44, 0x1f82, 0x4c67, 0xbc, 0xd0, 0x72, 0xcf, 0x8f, 0x21, 0x7e, 0x81);
#undef INTERFACE
#define INTERFACE ID3D10EffectVectorVariable
DECLARE_INTERFACE_(ID3D10EffectVectorVariable, ID3D10EffectVariable)
{
    STDMETHOD_(BOOL, IsValid)(THIS);
    STDMETHOD_(ID3D10EffectType*, GetType)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_EFFECT_VARIABLE_DESC *pDesc);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberBySemantic)(THIS_ LPCSTR Semantic);
    STDMETHOD_(ID3D10EffectVariable*, GetElement)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectConstantBuffer*, GetParentConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectScalarVariable*, AsScalar)(THIS);
    STDMETHOD_(ID3D10EffectVectorVariable*, AsVector)(THIS);
    STDMETHOD_(ID3D10EffectMatrixVariable*, AsMatrix)(THIS);
    STDMETHOD_(ID3D10EffectStringVariable*, AsString)(THIS); 
    STDMETHOD_(ID3D10EffectShaderResourceVariable*, AsShaderResource)(THIS);
    STDMETHOD_(ID3D10EffectRenderTargetViewVariable*, AsRenderTargetView)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilViewVariable*, AsDepthStencilView)(THIS);
    STDMETHOD_(ID3D10EffectConstantBuffer*, AsConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectShaderVariable*, AsShader)(THIS);
    STDMETHOD_(ID3D10EffectBlendVariable*, AsBlend)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilVariable*, AsDepthStencil)(THIS);
    STDMETHOD_(ID3D10EffectRasterizerVariable*, AsRasterizer)(THIS);
    STDMETHOD_(ID3D10EffectSamplerVariable*, AsSampler)(THIS);
    STDMETHOD(SetRawValue)(THIS_ void *pData, UINT ByteOffset, UINT ByteCount);
    STDMETHOD(GetRawValue)(THIS_ void *pData, UINT ByteOffset, UINT ByteCount);
    STDMETHOD(SetBoolVector) (THIS_ BOOL *pData);
    STDMETHOD(SetIntVector)  (THIS_ int *pData);
    STDMETHOD(SetFloatVector)(THIS_ float *pData);
    STDMETHOD(GetBoolVector) (THIS_ BOOL *pData);
    STDMETHOD(GetIntVector)  (THIS_ int *pData);
    STDMETHOD(GetFloatVector)(THIS_ float *pData);
    STDMETHOD(SetBoolVectorArray) (THIS_ BOOL *pData, UINT Offset, UINT Count);
    STDMETHOD(SetIntVectorArray)  (THIS_ int *pData, UINT Offset, UINT Count);
    STDMETHOD(SetFloatVectorArray)(THIS_ float *pData, UINT Offset, UINT Count);
    STDMETHOD(GetBoolVectorArray) (THIS_ BOOL *pData, UINT Offset, UINT Count);
    STDMETHOD(GetIntVectorArray)  (THIS_ int *pData, UINT Offset, UINT Count);
    STDMETHOD(GetFloatVectorArray)(THIS_ float *pData, UINT Offset, UINT Count);
};
typedef interface ID3D10EffectMatrixVariable ID3D10EffectMatrixVariable;
typedef interface ID3D10EffectMatrixVariable *LPD3D10EFFECTMATRIXVARIABLE;
DEFINE_GUID(IID_ID3D10EffectMatrixVariable, 0x50666c24, 0xb82f, 0x4eed, 0xa1, 0x72, 0x5b, 0x6e, 0x7e, 0x85, 0x22, 0xe0);
#undef INTERFACE
#define INTERFACE ID3D10EffectMatrixVariable
DECLARE_INTERFACE_(ID3D10EffectMatrixVariable, ID3D10EffectVariable)
{
    STDMETHOD_(BOOL, IsValid)(THIS);
    STDMETHOD_(ID3D10EffectType*, GetType)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_EFFECT_VARIABLE_DESC *pDesc);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberBySemantic)(THIS_ LPCSTR Semantic);
    STDMETHOD_(ID3D10EffectVariable*, GetElement)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectConstantBuffer*, GetParentConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectScalarVariable*, AsScalar)(THIS);
    STDMETHOD_(ID3D10EffectVectorVariable*, AsVector)(THIS);
    STDMETHOD_(ID3D10EffectMatrixVariable*, AsMatrix)(THIS);
    STDMETHOD_(ID3D10EffectStringVariable*, AsString)(THIS);
    STDMETHOD_(ID3D10EffectShaderResourceVariable*, AsShaderResource)(THIS);
    STDMETHOD_(ID3D10EffectRenderTargetViewVariable*, AsRenderTargetView)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilViewVariable*, AsDepthStencilView)(THIS);
    STDMETHOD_(ID3D10EffectConstantBuffer*, AsConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectShaderVariable*, AsShader)(THIS);
    STDMETHOD_(ID3D10EffectBlendVariable*, AsBlend)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilVariable*, AsDepthStencil)(THIS);
    STDMETHOD_(ID3D10EffectRasterizerVariable*, AsRasterizer)(THIS);
    STDMETHOD_(ID3D10EffectSamplerVariable*, AsSampler)(THIS);
    STDMETHOD(SetRawValue)(THIS_ void *pData, UINT ByteOffset, UINT ByteCount);
    STDMETHOD(GetRawValue)(THIS_ void *pData, UINT ByteOffset, UINT ByteCount);
    STDMETHOD(SetMatrix)(THIS_ float *pData);
    STDMETHOD(GetMatrix)(THIS_ float *pData);
    STDMETHOD(SetMatrixArray)(THIS_ float *pData, UINT Offset, UINT Count);
    STDMETHOD(GetMatrixArray)(THIS_ float *pData, UINT Offset, UINT Count);
    STDMETHOD(SetMatrixTranspose)(THIS_ float *pData);
    STDMETHOD(GetMatrixTranspose)(THIS_ float *pData);
    STDMETHOD(SetMatrixTransposeArray)(THIS_ float *pData, UINT Offset, UINT Count);
    STDMETHOD(GetMatrixTransposeArray)(THIS_ float *pData, UINT Offset, UINT Count);
};
typedef interface ID3D10EffectStringVariable ID3D10EffectStringVariable;
typedef interface ID3D10EffectStringVariable *LPD3D10EFFECTSTRINGVARIABLE;
DEFINE_GUID(IID_ID3D10EffectStringVariable, 0x71417501, 0x8df9, 0x4e0a, 0xa7, 0x8a, 0x25, 0x5f, 0x97, 0x56, 0xba, 0xff);
#undef INTERFACE
#define INTERFACE ID3D10EffectStringVariable
DECLARE_INTERFACE_(ID3D10EffectStringVariable, ID3D10EffectVariable)
{
    STDMETHOD_(BOOL, IsValid)(THIS);
    STDMETHOD_(ID3D10EffectType*, GetType)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_EFFECT_VARIABLE_DESC *pDesc);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberBySemantic)(THIS_ LPCSTR Semantic);
    STDMETHOD_(ID3D10EffectVariable*, GetElement)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectConstantBuffer*, GetParentConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectScalarVariable*, AsScalar)(THIS);
    STDMETHOD_(ID3D10EffectVectorVariable*, AsVector)(THIS);
    STDMETHOD_(ID3D10EffectMatrixVariable*, AsMatrix)(THIS);
    STDMETHOD_(ID3D10EffectStringVariable*, AsString)(THIS);
    STDMETHOD_(ID3D10EffectShaderResourceVariable*, AsShaderResource)(THIS);
    STDMETHOD_(ID3D10EffectRenderTargetViewVariable*, AsRenderTargetView)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilViewVariable*, AsDepthStencilView)(THIS);
    STDMETHOD_(ID3D10EffectConstantBuffer*, AsConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectShaderVariable*, AsShader)(THIS);
    STDMETHOD_(ID3D10EffectBlendVariable*, AsBlend)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilVariable*, AsDepthStencil)(THIS);
    STDMETHOD_(ID3D10EffectRasterizerVariable*, AsRasterizer)(THIS);
    STDMETHOD_(ID3D10EffectSamplerVariable*, AsSampler)(THIS);
    STDMETHOD(SetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetString)(THIS_ LPCSTR *ppString);
    STDMETHOD(GetStringArray)(THIS_ LPCSTR *ppStrings, UINT Offset, UINT Count);
};
typedef interface ID3D10EffectShaderResourceVariable ID3D10EffectShaderResourceVariable;
typedef interface ID3D10EffectShaderResourceVariable *LPD3D10EFFECTSHADERRESOURCEVARIABLE;
DEFINE_GUID(IID_ID3D10EffectShaderResourceVariable, 0xc0a7157b, 0xd872, 0x4b1d, 0x80, 0x73, 0xef, 0xc2, 0xac, 0xd4, 0xb1, 0xfc);
#undef INTERFACE
#define INTERFACE ID3D10EffectShaderResourceVariable
DECLARE_INTERFACE_(ID3D10EffectShaderResourceVariable, ID3D10EffectVariable)
{
    STDMETHOD_(BOOL, IsValid)(THIS);
    STDMETHOD_(ID3D10EffectType*, GetType)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_EFFECT_VARIABLE_DESC *pDesc);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberBySemantic)(THIS_ LPCSTR Semantic);
    STDMETHOD_(ID3D10EffectVariable*, GetElement)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectConstantBuffer*, GetParentConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectScalarVariable*, AsScalar)(THIS);
    STDMETHOD_(ID3D10EffectVectorVariable*, AsVector)(THIS);
    STDMETHOD_(ID3D10EffectMatrixVariable*, AsMatrix)(THIS);
    STDMETHOD_(ID3D10EffectStringVariable*, AsString)(THIS);
    STDMETHOD_(ID3D10EffectShaderResourceVariable*, AsShaderResource)(THIS);
    STDMETHOD_(ID3D10EffectRenderTargetViewVariable*, AsRenderTargetView)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilViewVariable*, AsDepthStencilView)(THIS);
    STDMETHOD_(ID3D10EffectConstantBuffer*, AsConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectShaderVariable*, AsShader)(THIS);
    STDMETHOD_(ID3D10EffectBlendVariable*, AsBlend)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilVariable*, AsDepthStencil)(THIS);
    STDMETHOD_(ID3D10EffectRasterizerVariable*, AsRasterizer)(THIS);
    STDMETHOD_(ID3D10EffectSamplerVariable*, AsSampler)(THIS);
    STDMETHOD(SetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(SetResource)(THIS_ ID3D10ShaderResourceView *pResource);
    STDMETHOD(GetResource)(THIS_ ID3D10ShaderResourceView **ppResource);
    STDMETHOD(SetResourceArray)(THIS_ ID3D10ShaderResourceView **ppResources, UINT Offset, UINT Count);
    STDMETHOD(GetResourceArray)(THIS_ ID3D10ShaderResourceView **ppResources, UINT Offset, UINT Count);
};
typedef interface ID3D10EffectRenderTargetViewVariable ID3D10EffectRenderTargetViewVariable;
typedef interface ID3D10EffectRenderTargetViewVariable *LPD3D10EFFECTRENDERTARGETVIEWVARIABLE;
DEFINE_GUID(IID_ID3D10EffectRenderTargetViewVariable, 0x28ca0cc3, 0xc2c9, 0x40bb, 0xb5, 0x7f, 0x67, 0xb7, 0x37, 0x12, 0x2b, 0x17);
#undef INTERFACE
#define INTERFACE ID3D10EffectRenderTargetViewVariable
DECLARE_INTERFACE_(ID3D10EffectRenderTargetViewVariable, ID3D10EffectVariable)
{
    STDMETHOD_(BOOL, IsValid)(THIS);
    STDMETHOD_(ID3D10EffectType*, GetType)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_EFFECT_VARIABLE_DESC *pDesc);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberBySemantic)(THIS_ LPCSTR Semantic);
    STDMETHOD_(ID3D10EffectVariable*, GetElement)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectConstantBuffer*, GetParentConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectScalarVariable*, AsScalar)(THIS);
    STDMETHOD_(ID3D10EffectVectorVariable*, AsVector)(THIS);
    STDMETHOD_(ID3D10EffectMatrixVariable*, AsMatrix)(THIS);
    STDMETHOD_(ID3D10EffectStringVariable*, AsString)(THIS);
    STDMETHOD_(ID3D10EffectShaderResourceVariable*, AsShaderResource)(THIS);
    STDMETHOD_(ID3D10EffectRenderTargetViewVariable*, AsRenderTargetView)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilViewVariable*, AsDepthStencilView)(THIS);
    STDMETHOD_(ID3D10EffectConstantBuffer*, AsConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectShaderVariable*, AsShader)(THIS);
    STDMETHOD_(ID3D10EffectBlendVariable*, AsBlend)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilVariable*, AsDepthStencil)(THIS);
    STDMETHOD_(ID3D10EffectRasterizerVariable*, AsRasterizer)(THIS);
    STDMETHOD_(ID3D10EffectSamplerVariable*, AsSampler)(THIS);
    STDMETHOD(SetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(SetRenderTarget)(THIS_ ID3D10RenderTargetView *pResource);
    STDMETHOD(GetRenderTarget)(THIS_ ID3D10RenderTargetView **ppResource);
    STDMETHOD(SetRenderTargetArray)(THIS_ ID3D10RenderTargetView **ppResources, UINT Offset, UINT Count);
    STDMETHOD(GetRenderTargetArray)(THIS_ ID3D10RenderTargetView **ppResources, UINT Offset, UINT Count);
};
typedef interface ID3D10EffectDepthStencilViewVariable ID3D10EffectDepthStencilViewVariable;
typedef interface ID3D10EffectDepthStencilViewVariable *LPD3D10EFFECTDEPTHSTENCILVIEWVARIABLE;
DEFINE_GUID(IID_ID3D10EffectDepthStencilViewVariable, 0x3e02c918, 0xcc79, 0x4985, 0xb6, 0x22, 0x2d, 0x92, 0xad, 0x70, 0x16, 0x23);
#undef INTERFACE
#define INTERFACE ID3D10EffectDepthStencilViewVariable
DECLARE_INTERFACE_(ID3D10EffectDepthStencilViewVariable, ID3D10EffectVariable)
{
    STDMETHOD_(BOOL, IsValid)(THIS);
    STDMETHOD_(ID3D10EffectType*, GetType)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_EFFECT_VARIABLE_DESC *pDesc);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberBySemantic)(THIS_ LPCSTR Semantic);
    STDMETHOD_(ID3D10EffectVariable*, GetElement)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectConstantBuffer*, GetParentConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectScalarVariable*, AsScalar)(THIS);
    STDMETHOD_(ID3D10EffectVectorVariable*, AsVector)(THIS);
    STDMETHOD_(ID3D10EffectMatrixVariable*, AsMatrix)(THIS);
    STDMETHOD_(ID3D10EffectStringVariable*, AsString)(THIS);
    STDMETHOD_(ID3D10EffectShaderResourceVariable*, AsShaderResource)(THIS);
    STDMETHOD_(ID3D10EffectRenderTargetViewVariable*, AsRenderTargetView)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilViewVariable*, AsDepthStencilView)(THIS);
    STDMETHOD_(ID3D10EffectConstantBuffer*, AsConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectShaderVariable*, AsShader)(THIS);
    STDMETHOD_(ID3D10EffectBlendVariable*, AsBlend)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilVariable*, AsDepthStencil)(THIS);
    STDMETHOD_(ID3D10EffectRasterizerVariable*, AsRasterizer)(THIS);
    STDMETHOD_(ID3D10EffectSamplerVariable*, AsSampler)(THIS);
    STDMETHOD(SetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(SetDepthStencil)(THIS_ ID3D10DepthStencilView *pResource);
    STDMETHOD(GetDepthStencil)(THIS_ ID3D10DepthStencilView **ppResource);
    STDMETHOD(SetDepthStencilArray)(THIS_ ID3D10DepthStencilView **ppResources, UINT Offset, UINT Count);
    STDMETHOD(GetDepthStencilArray)(THIS_ ID3D10DepthStencilView **ppResources, UINT Offset, UINT Count);
};
typedef interface ID3D10EffectConstantBuffer ID3D10EffectConstantBuffer;
typedef interface ID3D10EffectConstantBuffer *LPD3D10EFFECTCONSTANTBUFFER;
DEFINE_GUID(IID_ID3D10EffectConstantBuffer, 0x56648f4d, 0xcc8b, 0x4444, 0xa5, 0xad, 0xb5, 0xa3, 0xd7, 0x6e, 0x91, 0xb3);
#undef INTERFACE
#define INTERFACE ID3D10EffectConstantBuffer
DECLARE_INTERFACE_(ID3D10EffectConstantBuffer, ID3D10EffectVariable)
{
    STDMETHOD_(ID3D10EffectType*, GetType)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_EFFECT_VARIABLE_DESC *pDesc);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberBySemantic)(THIS_ LPCSTR Semantic);
    STDMETHOD_(ID3D10EffectVariable*, GetElement)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectConstantBuffer*, GetParentConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectScalarVariable*, AsScalar)(THIS);
    STDMETHOD_(ID3D10EffectVectorVariable*, AsVector)(THIS);
    STDMETHOD_(ID3D10EffectMatrixVariable*, AsMatrix)(THIS);
    STDMETHOD_(ID3D10EffectStringVariable*, AsString)(THIS);
    STDMETHOD_(ID3D10EffectShaderResourceVariable*, AsShaderResource)(THIS);
    STDMETHOD_(ID3D10EffectRenderTargetViewVariable*, AsRenderTargetView)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilViewVariable*, AsDepthStencilView)(THIS);
    STDMETHOD_(ID3D10EffectConstantBuffer*, AsConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectShaderVariable*, AsShader)(THIS);
    STDMETHOD_(ID3D10EffectBlendVariable*, AsBlend)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilVariable*, AsDepthStencil)(THIS);
    STDMETHOD_(ID3D10EffectRasterizerVariable*, AsRasterizer)(THIS);
    STDMETHOD_(ID3D10EffectSamplerVariable*, AsSampler)(THIS);
    STDMETHOD(SetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(SetConstantBuffer)(THIS_ ID3D10Buffer *pConstantBuffer);
    STDMETHOD(GetConstantBuffer)(THIS_ ID3D10Buffer **ppConstantBuffer);
    STDMETHOD(SetTextureBuffer)(THIS_ ID3D10ShaderResourceView *pTextureBuffer);
    STDMETHOD(GetTextureBuffer)(THIS_ ID3D10ShaderResourceView **ppTextureBuffer);
};
typedef struct _D3D10_EFFECT_SHADER_DESC
{
    CONST BYTE *pInputSignature;    
    BOOL IsInline;    
    CONST BYTE *pBytecode;    UINT BytecodeLength;
    LPCSTR SODecl;    
    UINT NumInputSignatureEntries;    UINT NumOutputSignatureEntries;} D3D10_EFFECT_SHADER_DESC;
typedef interface ID3D10EffectShaderVariable ID3D10EffectShaderVariable;
typedef interface ID3D10EffectShaderVariable *LPD3D10EFFECTSHADERVARIABLE;
DEFINE_GUID(IID_ID3D10EffectShaderVariable, 0x80849279, 0xc799, 0x4797, 0x8c, 0x33, 0x4, 0x7, 0xa0, 0x7d, 0x9e, 0x6);
#undef INTERFACE
#define INTERFACE ID3D10EffectShaderVariable
DECLARE_INTERFACE_(ID3D10EffectShaderVariable, ID3D10EffectVariable)
{
    STDMETHOD_(ID3D10EffectType*, GetType)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_EFFECT_VARIABLE_DESC *pDesc);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberBySemantic)(THIS_ LPCSTR Semantic);
    STDMETHOD_(ID3D10EffectVariable*, GetElement)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectConstantBuffer*, GetParentConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectScalarVariable*, AsScalar)(THIS);
    STDMETHOD_(ID3D10EffectVectorVariable*, AsVector)(THIS);
    STDMETHOD_(ID3D10EffectMatrixVariable*, AsMatrix)(THIS);
    STDMETHOD_(ID3D10EffectStringVariable*, AsString)(THIS);
    STDMETHOD_(ID3D10EffectShaderResourceVariable*, AsShaderResource)(THIS);
    STDMETHOD_(ID3D10EffectRenderTargetViewVariable*, AsRenderTargetView)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilViewVariable*, AsDepthStencilView)(THIS);
    STDMETHOD_(ID3D10EffectConstantBuffer*, AsConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectShaderVariable*, AsShader)(THIS);
    STDMETHOD_(ID3D10EffectBlendVariable*, AsBlend)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilVariable*, AsDepthStencil)(THIS);
    STDMETHOD_(ID3D10EffectRasterizerVariable*, AsRasterizer)(THIS);
    STDMETHOD_(ID3D10EffectSamplerVariable*, AsSampler)(THIS);
    STDMETHOD(SetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetShaderDesc)(THIS_ UINT ShaderIndex, D3D10_EFFECT_SHADER_DESC *pDesc);
    STDMETHOD(GetVertexShader)(THIS_ UINT ShaderIndex, ID3D10VertexShader **ppVS);
    STDMETHOD(GetGeometryShader)(THIS_ UINT ShaderIndex, ID3D10GeometryShader **ppGS);
    STDMETHOD(GetPixelShader)(THIS_ UINT ShaderIndex, ID3D10PixelShader **ppPS);
    STDMETHOD(GetInputSignatureElementDesc)(THIS_ UINT ShaderIndex, UINT Element, D3D10_SIGNATURE_PARAMETER_DESC *pDesc);
    STDMETHOD(GetOutputSignatureElementDesc)(THIS_ UINT ShaderIndex, UINT Element, D3D10_SIGNATURE_PARAMETER_DESC *pDesc);
};
typedef interface ID3D10EffectBlendVariable ID3D10EffectBlendVariable;
typedef interface ID3D10EffectBlendVariable *LPD3D10EFFECTBLENDVARIABLE;
DEFINE_GUID(IID_ID3D10EffectBlendVariable, 0x1fcd2294, 0xdf6d, 0x4eae, 0x86, 0xb3, 0xe, 0x91, 0x60, 0xcf, 0xb0, 0x7b);
#undef INTERFACE
#define INTERFACE ID3D10EffectBlendVariable
DECLARE_INTERFACE_(ID3D10EffectBlendVariable, ID3D10EffectVariable)
{
    STDMETHOD_(ID3D10EffectType*, GetType)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_EFFECT_VARIABLE_DESC *pDesc);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberBySemantic)(THIS_ LPCSTR Semantic);
    STDMETHOD_(ID3D10EffectVariable*, GetElement)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectConstantBuffer*, GetParentConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectScalarVariable*, AsScalar)(THIS);
    STDMETHOD_(ID3D10EffectVectorVariable*, AsVector)(THIS);
    STDMETHOD_(ID3D10EffectMatrixVariable*, AsMatrix)(THIS);
    STDMETHOD_(ID3D10EffectStringVariable*, AsString)(THIS);
    STDMETHOD_(ID3D10EffectShaderResourceVariable*, AsShaderResource)(THIS);
    STDMETHOD_(ID3D10EffectRenderTargetViewVariable*, AsRenderTargetView)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilViewVariable*, AsDepthStencilView)(THIS);
    STDMETHOD_(ID3D10EffectConstantBuffer*, AsConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectShaderVariable*, AsShader)(THIS);
    STDMETHOD_(ID3D10EffectBlendVariable*, AsBlend)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilVariable*, AsDepthStencil)(THIS);
    STDMETHOD_(ID3D10EffectRasterizerVariable*, AsRasterizer)(THIS);
    STDMETHOD_(ID3D10EffectSamplerVariable*, AsSampler)(THIS);
    STDMETHOD(SetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetBlendState)(THIS_ UINT Index, ID3D10BlendState **ppBlendState);
    STDMETHOD(GetBackingStore)(THIS_ UINT Index, D3D10_BLEND_DESC *pBlendDesc);
};
typedef interface ID3D10EffectDepthStencilVariable ID3D10EffectDepthStencilVariable;
typedef interface ID3D10EffectDepthStencilVariable *LPD3D10EFFECTDEPTHSTENCILVARIABLE;
DEFINE_GUID(IID_ID3D10EffectDepthStencilVariable, 0xaf482368, 0x330a, 0x46a5, 0x9a, 0x5c, 0x1, 0xc7, 0x1a, 0xf2, 0x4c, 0x8d);
#undef INTERFACE
#define INTERFACE ID3D10EffectDepthStencilVariable
DECLARE_INTERFACE_(ID3D10EffectDepthStencilVariable, ID3D10EffectVariable)
{
    STDMETHOD_(ID3D10EffectType*, GetType)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_EFFECT_VARIABLE_DESC *pDesc);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberBySemantic)(THIS_ LPCSTR Semantic);
    STDMETHOD_(ID3D10EffectVariable*, GetElement)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectConstantBuffer*, GetParentConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectScalarVariable*, AsScalar)(THIS);
    STDMETHOD_(ID3D10EffectVectorVariable*, AsVector)(THIS);
    STDMETHOD_(ID3D10EffectMatrixVariable*, AsMatrix)(THIS);
    STDMETHOD_(ID3D10EffectStringVariable*, AsString)(THIS);
    STDMETHOD_(ID3D10EffectShaderResourceVariable*, AsShaderResource)(THIS);
    STDMETHOD_(ID3D10EffectRenderTargetViewVariable*, AsRenderTargetView)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilViewVariable*, AsDepthStencilView)(THIS);
    STDMETHOD_(ID3D10EffectConstantBuffer*, AsConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectShaderVariable*, AsShader)(THIS);
    STDMETHOD_(ID3D10EffectBlendVariable*, AsBlend)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilVariable*, AsDepthStencil)(THIS);
    STDMETHOD_(ID3D10EffectRasterizerVariable*, AsRasterizer)(THIS);
    STDMETHOD_(ID3D10EffectSamplerVariable*, AsSampler)(THIS);
    STDMETHOD(SetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetDepthStencilState)(THIS_ UINT Index, ID3D10DepthStencilState **ppDepthStencilState);
    STDMETHOD(GetBackingStore)(THIS_ UINT Index, D3D10_DEPTH_STENCIL_DESC *pDepthStencilDesc);
};
typedef interface ID3D10EffectRasterizerVariable ID3D10EffectRasterizerVariable;
typedef interface ID3D10EffectRasterizerVariable *LPD3D10EFFECTRASTERIZERVARIABLE;
DEFINE_GUID(IID_ID3D10EffectRasterizerVariable, 0x21af9f0e, 0x4d94, 0x4ea9, 0x97, 0x85, 0x2c, 0xb7, 0x6b, 0x8c, 0xb, 0x34);
#undef INTERFACE
#define INTERFACE ID3D10EffectRasterizerVariable
DECLARE_INTERFACE_(ID3D10EffectRasterizerVariable, ID3D10EffectVariable)
{
    STDMETHOD_(ID3D10EffectType*, GetType)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_EFFECT_VARIABLE_DESC *pDesc);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberBySemantic)(THIS_ LPCSTR Semantic);
    STDMETHOD_(ID3D10EffectVariable*, GetElement)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectConstantBuffer*, GetParentConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectScalarVariable*, AsScalar)(THIS);
    STDMETHOD_(ID3D10EffectVectorVariable*, AsVector)(THIS);
    STDMETHOD_(ID3D10EffectMatrixVariable*, AsMatrix)(THIS);
    STDMETHOD_(ID3D10EffectStringVariable*, AsString)(THIS);
    STDMETHOD_(ID3D10EffectShaderResourceVariable*, AsShaderResource)(THIS);
    STDMETHOD_(ID3D10EffectRenderTargetViewVariable*, AsRenderTargetView)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilViewVariable*, AsDepthStencilView)(THIS);
    STDMETHOD_(ID3D10EffectConstantBuffer*, AsConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectShaderVariable*, AsShader)(THIS);
    STDMETHOD_(ID3D10EffectBlendVariable*, AsBlend)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilVariable*, AsDepthStencil)(THIS);
    STDMETHOD_(ID3D10EffectRasterizerVariable*, AsRasterizer)(THIS);
    STDMETHOD_(ID3D10EffectSamplerVariable*, AsSampler)(THIS);
    STDMETHOD(SetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetRasterizerState)(THIS_ UINT Index, ID3D10RasterizerState **ppRasterizerState);
    STDMETHOD(GetBackingStore)(THIS_ UINT Index, D3D10_RASTERIZER_DESC *pRasterizerDesc);
};
typedef interface ID3D10EffectSamplerVariable ID3D10EffectSamplerVariable;
typedef interface ID3D10EffectSamplerVariable *LPD3D10EFFECTSAMPLERVARIABLE;
DEFINE_GUID(IID_ID3D10EffectSamplerVariable, 0x6530d5c7, 0x7e9, 0x4271, 0xa4, 0x18, 0xe7, 0xce, 0x4b, 0xd1, 0xe4, 0x80);
#undef INTERFACE
#define INTERFACE ID3D10EffectSamplerVariable
DECLARE_INTERFACE_(ID3D10EffectSamplerVariable, ID3D10EffectVariable)
{
    STDMETHOD_(ID3D10EffectType*, GetType)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_EFFECT_VARIABLE_DESC *pDesc);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetMemberBySemantic)(THIS_ LPCSTR Semantic);
    STDMETHOD_(ID3D10EffectVariable*, GetElement)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectConstantBuffer*, GetParentConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectScalarVariable*, AsScalar)(THIS);
    STDMETHOD_(ID3D10EffectVectorVariable*, AsVector)(THIS);
    STDMETHOD_(ID3D10EffectMatrixVariable*, AsMatrix)(THIS);
    STDMETHOD_(ID3D10EffectStringVariable*, AsString)(THIS);
    STDMETHOD_(ID3D10EffectShaderResourceVariable*, AsShaderResource)(THIS);
    STDMETHOD_(ID3D10EffectRenderTargetViewVariable*, AsRenderTargetView)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilViewVariable*, AsDepthStencilView)(THIS);
    STDMETHOD_(ID3D10EffectConstantBuffer*, AsConstantBuffer)(THIS);
    STDMETHOD_(ID3D10EffectShaderVariable*, AsShader)(THIS);
    STDMETHOD_(ID3D10EffectBlendVariable*, AsBlend)(THIS);
    STDMETHOD_(ID3D10EffectDepthStencilVariable*, AsDepthStencil)(THIS);
    STDMETHOD_(ID3D10EffectRasterizerVariable*, AsRasterizer)(THIS);
    STDMETHOD_(ID3D10EffectSamplerVariable*, AsSampler)(THIS);
    STDMETHOD(SetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetRawValue)(THIS_ void *pData, UINT Offset, UINT Count);
    STDMETHOD(GetSampler)(THIS_ UINT Index, ID3D10SamplerState **ppSampler);
    STDMETHOD(GetBackingStore)(THIS_ UINT Index, D3D10_SAMPLER_DESC *pSamplerDesc);
};

typedef struct _D3D10_PASS_DESC
{
	LPCSTR Name;
	UINT Annotations;
	BYTE *pIAInputSignature;
	SIZE_T IAInputSignatureSize;
	UINT StencilRef;
	UINT SampleMask;
	FLOAT BlendFactor[4];
} D3D10_PASS_DESC;

typedef struct _D3D10_PASS_SHADER_DESC
{
	ID3D10EffectShaderVariable *pShaderVariable;
	UINT ShaderIndex;
} D3D10_PASS_SHADER_DESC;

typedef interface ID3D10EffectPass ID3D10EffectPass;
typedef interface ID3D10EffectPass *LPD3D10EFFECTPASS;
DEFINE_GUID(IID_ID3D10EffectPass, 0x5cfbeb89, 0x1a06, 0x46e0, 0xb2, 0x82, 0xe3, 0xf9, 0xbf, 0xa3, 0x6a, 0x54);
#undef INTERFACE
#define INTERFACE ID3D10EffectPass
DECLARE_INTERFACE(ID3D10EffectPass)
{
    STDMETHOD_(BOOL, IsValid)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_PASS_DESC *pDesc);
    STDMETHOD(GetVertexShaderDesc)(THIS_ D3D10_PASS_SHADER_DESC *pDesc);
    STDMETHOD(GetGeometryShaderDesc)(THIS_ D3D10_PASS_SHADER_DESC *pDesc);
    STDMETHOD(GetPixelShaderDesc)(THIS_ D3D10_PASS_SHADER_DESC *pDesc);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByName)(THIS_ LPCSTR Name);
    STDMETHOD(Apply)(THIS_ UINT Flags);
    STDMETHOD(ComputeStateBlockMask)(THIS_ D3D10_STATE_BLOCK_MASK *pStateBlockMask);
};
typedef struct _D3D10_TECHNIQUE_DESC
{
	LPCSTR Name;
	UINT Passes;
	UINT Annotations;
} D3D10_TECHNIQUE_DESC;
typedef interface ID3D10EffectTechnique ID3D10EffectTechnique;
typedef interface ID3D10EffectTechnique *LPD3D10EFFECTTECHNIQUE;
DEFINE_GUID(IID_ID3D10EffectTechnique, 0xdb122ce8, 0xd1c9, 0x4292, 0xb2, 0x37, 0x24, 0xed, 0x3d, 0xe8, 0xb1, 0x75);
#undef INTERFACE
#define INTERFACE ID3D10EffectTechnique
DECLARE_INTERFACE(ID3D10EffectTechnique)
{
    STDMETHOD_(BOOL, IsValid)(THIS);
    STDMETHOD(GetDesc)(THIS_ D3D10_TECHNIQUE_DESC *pDesc);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetAnnotationByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectPass*, GetPassByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectPass*, GetPassByName)(THIS_ LPCSTR Name);
    STDMETHOD(ComputeStateBlockMask)(THIS_ D3D10_STATE_BLOCK_MASK *pStateBlockMask);
};
typedef struct _D3D10_EFFECT_DESC
{
	BOOL IsChildEffect;
	UINT ConstantBuffers;
	UINT SharedConstantBuffers;
	UINT GlobalVariables;
	UINT SharedGlobalVariables;
	UINT Techniques;
} D3D10_EFFECT_DESC;
typedef interface ID3D10Effect ID3D10Effect;
typedef interface ID3D10Effect *LPD3D10EFFECT;
DEFINE_GUID(IID_ID3D10Effect, 0x51b0ca8b, 0xec0b, 0x4519, 0x87, 0xd, 0x8e, 0xe1, 0xcb, 0x50, 0x17, 0xc7);
#undef INTERFACE
#define INTERFACE ID3D10Effect
DECLARE_INTERFACE_(ID3D10Effect, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(THIS);
    STDMETHOD_(BOOL, IsValid)(THIS);
    STDMETHOD_(BOOL, IsPool)(THIS);
    STDMETHOD(GetDevice)(THIS_ ID3D10Device** ppDevice);
    STDMETHOD(GetDesc)(THIS_ D3D10_EFFECT_DESC *pDesc);
    STDMETHOD_(ID3D10EffectConstantBuffer*, GetConstantBufferByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectConstantBuffer*, GetConstantBufferByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetVariableByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectVariable*, GetVariableByName)(THIS_ LPCSTR Name);
    STDMETHOD_(ID3D10EffectVariable*, GetVariableBySemantic)(THIS_ LPCSTR Semantic);
    STDMETHOD_(ID3D10EffectTechnique*, GetTechniqueByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D10EffectTechnique*, GetTechniqueByName)(THIS_ LPCSTR Name);
    STDMETHOD(Optimize)(THIS);
    STDMETHOD_(BOOL, IsOptimized)(THIS);
};
typedef interface ID3D10EffectPool ID3D10EffectPool;
typedef interface ID3D10EffectPool *LPD3D10EFFECTPOOL;
DEFINE_GUID(IID_ID3D10EffectPool, 0x9537ab04, 0x3250, 0x412e, 0x82, 0x13, 0xfc, 0xd2, 0xf8, 0x67, 0x79, 0x33);
#undef INTERFACE
#define INTERFACE ID3D10EffectPool
DECLARE_INTERFACE_(ID3D10EffectPool, IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID iid, LPVOID *ppv);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(THIS);
    STDMETHOD_(ID3D10Effect*, AsEffect)(THIS);
};

HRESULT WINAPI D3D10CompileEffectFromMemory(void *pData, SIZE_T DataLength, LPCSTR pSrcFileName, CONST D3D10_SHADER_MACRO *pDefines, ID3D10Include *pInclude, UINT HLSLFlags, UINT FXFlags, ID3D10Blob **ppCompiledEffect, ID3D10Blob **ppErrors);
HRESULT WINAPI D3D10CreateEffectFromMemory(void *pData, SIZE_T DataLength, UINT FXFlags, ID3D10Device *pDevice, ID3D10EffectPool *pEffectPool, ID3D10Effect **ppEffect);
HRESULT WINAPI D3D10CreateEffectPoolFromMemory(void *pData, SIZE_T DataLength, UINT FXFlags, ID3D10Device *pDevice, ID3D10EffectPool **ppEffectPool);
HRESULT WINAPI D3D10DisassembleEffect(ID3D10Effect *pEffect, BOOL EnableColorCode, ID3D10Blob **ppDisassembly);

#endif
