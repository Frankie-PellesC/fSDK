/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3d10_1.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jun  3 17:37:23 2016
 \date		Modified on Fri Jun  3 17:37:23 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef __d3d10_1_h__
#define __d3d10_1_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __ID3D10BlendState1_FWD_DEFINED__
#define __ID3D10BlendState1_FWD_DEFINED__
typedef interface ID3D10BlendState1 ID3D10BlendState1;
#endif
#ifndef __ID3D10ShaderResourceView1_FWD_DEFINED__
#define __ID3D10ShaderResourceView1_FWD_DEFINED__
typedef interface ID3D10ShaderResourceView1 ID3D10ShaderResourceView1;
#endif
#ifndef __ID3D10Device1_FWD_DEFINED__
#define __ID3D10Device1_FWD_DEFINED__
typedef interface ID3D10Device1 ID3D10Device1;
#endif
#include "oaidl.h"
#include "ocidl.h"
#ifndef _D3D10_1_CONSTANTS
#define _D3D10_1_CONSTANTS
#define	D3D10_1_DEFAULT_SAMPLE_MASK	( 0xffffffff )
#define D3D10_1_FLOAT16_FUSED_TOLERANCE_IN_ULP	( 0.6 )
#define D3D10_1_FLOAT32_TO_INTEGER_TOLERANCE_IN_ULP	( 0.6f )
#define	D3D10_1_GS_INPUT_REGISTER_COUNT	( 32 )
#define	D3D10_1_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT	( 32 )
#define	D3D10_1_IA_VERTEX_INPUT_STRUCTURE_ELEMENTS_COMPONENTS	( 128 )
#define	D3D10_1_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT	( 32 )
#define	D3D10_1_PS_OUTPUT_MASK_REGISTER_COMPONENTS	( 1 )
#define	D3D10_1_PS_OUTPUT_MASK_REGISTER_COMPONENT_BIT_COUNT	( 32 )
#define	D3D10_1_PS_OUTPUT_MASK_REGISTER_COUNT	( 1 )
#define	D3D10_1_SHADER_MAJOR_VERSION	( 4 )
#define	D3D10_1_SHADER_MINOR_VERSION	( 1 )
#define	D3D10_1_SO_BUFFER_MAX_STRIDE_IN_BYTES	( 2048 )
#define	D3D10_1_SO_BUFFER_MAX_WRITE_WINDOW_IN_BYTES	( 256 )
#define	D3D10_1_SO_BUFFER_SLOT_COUNT	( 4 )
#define	D3D10_1_SO_MULTIPLE_BUFFER_ELEMENTS_PER_BUFFER	( 1 )
#define	D3D10_1_SO_SINGLE_BUFFER_COMPONENT_LIMIT	( 64 )
#define	D3D10_1_STANDARD_VERTEX_ELEMENT_COUNT	( 32 )
#define	D3D10_1_SUBPIXEL_FRACTIONAL_BIT_COUNT	( 8 )
#define	D3D10_1_VS_INPUT_REGISTER_COUNT	( 32 )
#define	D3D10_1_VS_OUTPUT_REGISTER_COUNT	( 32 )
#endif
#include "d3d10.h"
typedef enum D3D10_FEATURE_LEVEL1
{
	D3D10_FEATURE_LEVEL_10_0 = 0xa000,
	D3D10_FEATURE_LEVEL_10_1 = 0xa100,
	D3D10_FEATURE_LEVEL_9_1 = 0x9100,
	D3D10_FEATURE_LEVEL_9_2 = 0x9200,
	D3D10_FEATURE_LEVEL_9_3 = 0x9300
} D3D10_FEATURE_LEVEL1;
typedef struct D3D10_RENDER_TARGET_BLEND_DESC1
{
	BOOL BlendEnable;
	D3D10_BLEND SrcBlend;
	D3D10_BLEND DestBlend;
	D3D10_BLEND_OP BlendOp;
	D3D10_BLEND SrcBlendAlpha;
	D3D10_BLEND DestBlendAlpha;
	D3D10_BLEND_OP BlendOpAlpha;
	UINT8 RenderTargetWriteMask;
} D3D10_RENDER_TARGET_BLEND_DESC1;
typedef struct D3D10_BLEND_DESC1
{
	BOOL AlphaToCoverageEnable;
	BOOL IndependentBlendEnable;
	D3D10_RENDER_TARGET_BLEND_DESC1 RenderTarget[8];
} D3D10_BLEND_DESC1;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_1_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_1_0000_0000_v0_0_s_ifspec;
#ifndef __ID3D10BlendState1_INTERFACE_DEFINED__
#define __ID3D10BlendState1_INTERFACE_DEFINED__
extern const IID IID_ID3D10BlendState1;
typedef struct ID3D10BlendState1Vtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3D10BlendState1 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ID3D10BlendState1 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ID3D10BlendState1 * This);
	void (STDMETHODCALLTYPE * GetDevice) (ID3D10BlendState1 * This, ID3D10Device ** ppDevice);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (ID3D10BlendState1 * This, REFGUID guid, UINT * pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateData) (ID3D10BlendState1 * This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateDataInterface) (ID3D10BlendState1 * This, REFGUID guid, const IUnknown * pData);
	void (STDMETHODCALLTYPE * GetDesc) (ID3D10BlendState1 * This, D3D10_BLEND_DESC * pDesc);
	void (STDMETHODCALLTYPE * GetDesc1) (ID3D10BlendState1 * This, D3D10_BLEND_DESC1 * pDesc);
	END_INTERFACE
} ID3D10BlendState1Vtbl;
interface ID3D10BlendState1
{
	CONST_VTBL struct ID3D10BlendState1Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10BlendState1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10BlendState1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10BlendState1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10BlendState1_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10BlendState1_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10BlendState1_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10BlendState1_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10BlendState1_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#define ID3D10BlendState1_GetDesc1(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc1(This,pDesc) )
#endif
#endif
typedef struct D3D10_TEXCUBE_ARRAY_SRV1
{
	UINT MostDetailedMip;
	UINT MipLevels;
	UINT First2DArrayFace;
	UINT NumCubes;
} D3D10_TEXCUBE_ARRAY_SRV1;
typedef enum D3D10_SRV_DIMENSION1
{ D3D10_1_SRV_DIMENSION_UNKNOWN = 0,
	D3D10_1_SRV_DIMENSION_BUFFER = 1,
	D3D10_1_SRV_DIMENSION_TEXTURE1D = 2,
	D3D10_1_SRV_DIMENSION_TEXTURE1DARRAY = 3,
	D3D10_1_SRV_DIMENSION_TEXTURE2D = 4,
	D3D10_1_SRV_DIMENSION_TEXTURE2DARRAY = 5,
	D3D10_1_SRV_DIMENSION_TEXTURE2DMS = 6,
	D3D10_1_SRV_DIMENSION_TEXTURE2DMSARRAY = 7,
	D3D10_1_SRV_DIMENSION_TEXTURE3D = 8,
	D3D10_1_SRV_DIMENSION_TEXTURECUBE = 9,
	D3D10_1_SRV_DIMENSION_TEXTURECUBEARRAY = 10
} D3D10_SRV_DIMENSION1;
typedef struct D3D10_SHADER_RESOURCE_VIEW_DESC1
{
	DXGI_FORMAT Format;
	D3D10_SRV_DIMENSION1 ViewDimension;
	union
	{
		D3D10_BUFFER_SRV Buffer;
		D3D10_TEX1D_SRV Texture1D;
		D3D10_TEX1D_ARRAY_SRV Texture1DArray;
		D3D10_TEX2D_SRV Texture2D;
		D3D10_TEX2D_ARRAY_SRV Texture2DArray;
		D3D10_TEX2DMS_SRV Texture2DMS;
		D3D10_TEX2DMS_ARRAY_SRV Texture2DMSArray;
		D3D10_TEX3D_SRV Texture3D;
		D3D10_TEXCUBE_SRV TextureCube;
		D3D10_TEXCUBE_ARRAY_SRV1 TextureCubeArray;
	};
} D3D10_SHADER_RESOURCE_VIEW_DESC1;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_1_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_1_0000_0001_v0_0_s_ifspec;
#ifndef __ID3D10ShaderResourceView1_INTERFACE_DEFINED__
#define __ID3D10ShaderResourceView1_INTERFACE_DEFINED__
extern const IID IID_ID3D10ShaderResourceView1;
typedef struct ID3D10ShaderResourceView1Vtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3D10ShaderResourceView1 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ID3D10ShaderResourceView1 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ID3D10ShaderResourceView1 * This);
	void (STDMETHODCALLTYPE * GetDevice) (ID3D10ShaderResourceView1 * This, ID3D10Device ** ppDevice);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (ID3D10ShaderResourceView1 * This, REFGUID guid, UINT * pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateData) (ID3D10ShaderResourceView1 * This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateDataInterface) (ID3D10ShaderResourceView1 * This, REFGUID guid, const IUnknown * pData);
	void (STDMETHODCALLTYPE * GetResource) (ID3D10ShaderResourceView1 * This, ID3D10Resource ** ppResource);
	void (STDMETHODCALLTYPE * GetDesc) (ID3D10ShaderResourceView1 * This, D3D10_SHADER_RESOURCE_VIEW_DESC * pDesc);
	void (STDMETHODCALLTYPE * GetDesc1) (ID3D10ShaderResourceView1 * This, D3D10_SHADER_RESOURCE_VIEW_DESC1 * pDesc);
	END_INTERFACE
} ID3D10ShaderResourceView1Vtbl;
interface ID3D10ShaderResourceView1
{
	CONST_VTBL struct ID3D10ShaderResourceView1Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10ShaderResourceView1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10ShaderResourceView1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10ShaderResourceView1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10ShaderResourceView1_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10ShaderResourceView1_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10ShaderResourceView1_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10ShaderResourceView1_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10ShaderResourceView1_GetResource(This,ppResource)	\
    ( (This)->lpVtbl -> GetResource(This,ppResource) )
#define ID3D10ShaderResourceView1_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#define ID3D10ShaderResourceView1_GetDesc1(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc1(This,pDesc) )
#endif
#endif
typedef enum D3D10_STANDARD_MULTISAMPLE_QUALITY_LEVELS
{ D3D10_STANDARD_MULTISAMPLE_PATTERN = 0xffffffff,
	D3D10_CENTER_MULTISAMPLE_PATTERN = 0xfffffffe
} D3D10_STANDARD_MULTISAMPLE_QUALITY_LEVELS;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_1_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_1_0000_0002_v0_0_s_ifspec;
#ifndef __ID3D10Device1_INTERFACE_DEFINED__
#define __ID3D10Device1_INTERFACE_DEFINED__
extern const IID IID_ID3D10Device1;
typedef struct ID3D10Device1Vtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3D10Device1 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ID3D10Device1 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ID3D10Device1 * This);
	void (STDMETHODCALLTYPE * VSSetConstantBuffers) (ID3D10Device1 * This, UINT StartSlot, UINT NumBuffers, ID3D10Buffer * const *ppConstantBuffers);
	void (STDMETHODCALLTYPE * PSSetShaderResources) (ID3D10Device1 * This, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView * const *ppShaderResourceViews);
	void (STDMETHODCALLTYPE * PSSetShader) (ID3D10Device1 * This, ID3D10PixelShader * pPixelShader);
	void (STDMETHODCALLTYPE * PSSetSamplers) (ID3D10Device1 * This, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState * const *ppSamplers);
	void (STDMETHODCALLTYPE * VSSetShader) (ID3D10Device1 * This, ID3D10VertexShader * pVertexShader);
	void (STDMETHODCALLTYPE * DrawIndexed) (ID3D10Device1 * This, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation);
	void (STDMETHODCALLTYPE * Draw) (ID3D10Device1 * This, UINT VertexCount, UINT StartVertexLocation);
	void (STDMETHODCALLTYPE * PSSetConstantBuffers) (ID3D10Device1 * This, UINT StartSlot, UINT NumBuffers, ID3D10Buffer * const *ppConstantBuffers);
	void (STDMETHODCALLTYPE * IASetInputLayout) (ID3D10Device1 * This, ID3D10InputLayout * pInputLayout);
	void (STDMETHODCALLTYPE * IASetVertexBuffers) (ID3D10Device1 * This, UINT StartSlot, UINT NumBuffers, ID3D10Buffer * const *ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets);
	void (STDMETHODCALLTYPE * IASetIndexBuffer) (ID3D10Device1 * This, ID3D10Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset);
	void (STDMETHODCALLTYPE * DrawIndexedInstanced) (ID3D10Device1 * This, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
	void (STDMETHODCALLTYPE * DrawInstanced) (ID3D10Device1 * This, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
	void (STDMETHODCALLTYPE * GSSetConstantBuffers) (ID3D10Device1 * This, UINT StartSlot, UINT NumBuffers, ID3D10Buffer * const *ppConstantBuffers);
	void (STDMETHODCALLTYPE * GSSetShader) (ID3D10Device1 * This, ID3D10GeometryShader * pShader);
	void (STDMETHODCALLTYPE * IASetPrimitiveTopology) (ID3D10Device1 * This, D3D10_PRIMITIVE_TOPOLOGY Topology);
	void (STDMETHODCALLTYPE * VSSetShaderResources) (ID3D10Device1 * This, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView * const *ppShaderResourceViews);
	void (STDMETHODCALLTYPE * VSSetSamplers) (ID3D10Device1 * This, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState * const *ppSamplers);
	void (STDMETHODCALLTYPE * SetPredication) (ID3D10Device1 * This, ID3D10Predicate * pPredicate, BOOL PredicateValue);
	void (STDMETHODCALLTYPE * GSSetShaderResources) (ID3D10Device1 * This, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView * const *ppShaderResourceViews);
	void (STDMETHODCALLTYPE * GSSetSamplers) (ID3D10Device1 * This, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState * const *ppSamplers);
	void (STDMETHODCALLTYPE * OMSetRenderTargets) (ID3D10Device1 * This, UINT NumViews, ID3D10RenderTargetView * const *ppRenderTargetViews, ID3D10DepthStencilView * pDepthStencilView);
	void (STDMETHODCALLTYPE * OMSetBlendState) (ID3D10Device1 * This, ID3D10BlendState * pBlendState, const FLOAT BlendFactor[4], UINT SampleMask);
	void (STDMETHODCALLTYPE * OMSetDepthStencilState) (ID3D10Device1 * This, ID3D10DepthStencilState * pDepthStencilState, UINT StencilRef);
	void (STDMETHODCALLTYPE * SOSetTargets) (ID3D10Device1 * This, UINT NumBuffers, ID3D10Buffer * const *ppSOTargets, const UINT * pOffsets);
	void (STDMETHODCALLTYPE * DrawAuto) (ID3D10Device1 * This);
	void (STDMETHODCALLTYPE * RSSetState) (ID3D10Device1 * This, ID3D10RasterizerState * pRasterizerState);
	void (STDMETHODCALLTYPE * RSSetViewports) (ID3D10Device1 * This, UINT NumViewports, const D3D10_VIEWPORT * pViewports);
	void (STDMETHODCALLTYPE * RSSetScissorRects) (ID3D10Device1 * This, UINT NumRects, const D3D10_RECT * pRects);
	void (STDMETHODCALLTYPE * CopySubresourceRegion) (ID3D10Device1 * This, ID3D10Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D10Resource * pSrcResource, UINT SrcSubresource, const D3D10_BOX * pSrcBox);
	void (STDMETHODCALLTYPE * CopyResource) (ID3D10Device1 * This, ID3D10Resource * pDstResource, ID3D10Resource * pSrcResource);
	void (STDMETHODCALLTYPE * UpdateSubresource) (ID3D10Device1 * This, ID3D10Resource * pDstResource, UINT DstSubresource, const D3D10_BOX * pDstBox, const void *pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);
	void (STDMETHODCALLTYPE * ClearRenderTargetView) (ID3D10Device1 * This, ID3D10RenderTargetView * pRenderTargetView, const FLOAT ColorRGBA[4]);
	void (STDMETHODCALLTYPE * ClearDepthStencilView) (ID3D10Device1 * This, ID3D10DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil);
	void (STDMETHODCALLTYPE * GenerateMips) (ID3D10Device1 * This, ID3D10ShaderResourceView * pShaderResourceView);
	void (STDMETHODCALLTYPE * ResolveSubresource) (ID3D10Device1 * This, ID3D10Resource * pDstResource, UINT DstSubresource, ID3D10Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format);
	void (STDMETHODCALLTYPE * VSGetConstantBuffers) (ID3D10Device1 * This, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers);
	void (STDMETHODCALLTYPE * PSGetShaderResources) (ID3D10Device1 * This, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews);
	void (STDMETHODCALLTYPE * PSGetShader) (ID3D10Device1 * This, ID3D10PixelShader ** ppPixelShader);
	void (STDMETHODCALLTYPE * PSGetSamplers) (ID3D10Device1 * This, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers);
	void (STDMETHODCALLTYPE * VSGetShader) (ID3D10Device1 * This, ID3D10VertexShader ** ppVertexShader);
	void (STDMETHODCALLTYPE * PSGetConstantBuffers) (ID3D10Device1 * This, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers);
	void (STDMETHODCALLTYPE * IAGetInputLayout) (ID3D10Device1 * This, ID3D10InputLayout ** ppInputLayout);
	void (STDMETHODCALLTYPE * IAGetVertexBuffers) (ID3D10Device1 * This, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets);
	void (STDMETHODCALLTYPE * IAGetIndexBuffer) (ID3D10Device1 * This, ID3D10Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset);
	void (STDMETHODCALLTYPE * GSGetConstantBuffers) (ID3D10Device1 * This, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers);
	void (STDMETHODCALLTYPE * GSGetShader) (ID3D10Device1 * This, ID3D10GeometryShader ** ppGeometryShader);
	void (STDMETHODCALLTYPE * IAGetPrimitiveTopology) (ID3D10Device1 * This, D3D10_PRIMITIVE_TOPOLOGY * pTopology);
	void (STDMETHODCALLTYPE * VSGetShaderResources) (ID3D10Device1 * This, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews);
	void (STDMETHODCALLTYPE * VSGetSamplers) (ID3D10Device1 * This, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers);
	void (STDMETHODCALLTYPE * GetPredication) (ID3D10Device1 * This, ID3D10Predicate ** ppPredicate, BOOL * pPredicateValue);
	void (STDMETHODCALLTYPE * GSGetShaderResources) (ID3D10Device1 * This, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews);
	void (STDMETHODCALLTYPE * GSGetSamplers) (ID3D10Device1 * This, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers);
	void (STDMETHODCALLTYPE * OMGetRenderTargets) (ID3D10Device1 * This, UINT NumViews, ID3D10RenderTargetView ** ppRenderTargetViews, ID3D10DepthStencilView ** ppDepthStencilView);
	void (STDMETHODCALLTYPE * OMGetBlendState) (ID3D10Device1 * This, ID3D10BlendState ** ppBlendState, FLOAT BlendFactor[4], UINT * pSampleMask);
	void (STDMETHODCALLTYPE * OMGetDepthStencilState) (ID3D10Device1 * This, ID3D10DepthStencilState ** ppDepthStencilState, UINT * pStencilRef);
	void (STDMETHODCALLTYPE * SOGetTargets) (ID3D10Device1 * This, UINT NumBuffers, ID3D10Buffer ** ppSOTargets, UINT * pOffsets);
	void (STDMETHODCALLTYPE * RSGetState) (ID3D10Device1 * This, ID3D10RasterizerState ** ppRasterizerState);
	void (STDMETHODCALLTYPE * RSGetViewports) (ID3D10Device1 * This, UINT * NumViewports, D3D10_VIEWPORT * pViewports);
	void (STDMETHODCALLTYPE * RSGetScissorRects) (ID3D10Device1 * This, UINT * NumRects, D3D10_RECT * pRects);
	HRESULT(STDMETHODCALLTYPE * GetDeviceRemovedReason) (ID3D10Device1 * This);
	HRESULT(STDMETHODCALLTYPE * SetExceptionMode) (ID3D10Device1 * This, UINT RaiseFlags);
	UINT(STDMETHODCALLTYPE * GetExceptionMode) (ID3D10Device1 * This);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (ID3D10Device1 * This, REFGUID guid, UINT * pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateData) (ID3D10Device1 * This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateDataInterface) (ID3D10Device1 * This, REFGUID guid, const IUnknown * pData);
	void (STDMETHODCALLTYPE * ClearState) (ID3D10Device1 * This);
	void (STDMETHODCALLTYPE * Flush) (ID3D10Device1 * This);
	HRESULT(STDMETHODCALLTYPE * CreateBuffer) (ID3D10Device1 * This, const D3D10_BUFFER_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Buffer ** ppBuffer);
	HRESULT(STDMETHODCALLTYPE * CreateTexture1D) (ID3D10Device1 * This, const D3D10_TEXTURE1D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture1D ** ppTexture1D);
	HRESULT(STDMETHODCALLTYPE * CreateTexture2D) (ID3D10Device1 * This, const D3D10_TEXTURE2D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture2D ** ppTexture2D);
	HRESULT(STDMETHODCALLTYPE * CreateTexture3D) (ID3D10Device1 * This, const D3D10_TEXTURE3D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture3D ** ppTexture3D);
	HRESULT(STDMETHODCALLTYPE * CreateShaderResourceView) (ID3D10Device1 * This, ID3D10Resource * pResource, const D3D10_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D10ShaderResourceView ** ppSRView);
	HRESULT(STDMETHODCALLTYPE * CreateRenderTargetView) (ID3D10Device1 * This, ID3D10Resource * pResource, const D3D10_RENDER_TARGET_VIEW_DESC * pDesc, ID3D10RenderTargetView ** ppRTView);
	HRESULT(STDMETHODCALLTYPE * CreateDepthStencilView) (ID3D10Device1 * This, ID3D10Resource * pResource, const D3D10_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D10DepthStencilView ** ppDepthStencilView);
	HRESULT(STDMETHODCALLTYPE * CreateInputLayout) (ID3D10Device1 * This, const D3D10_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void *pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D10InputLayout ** ppInputLayout);
	HRESULT(STDMETHODCALLTYPE * CreateVertexShader) (ID3D10Device1 * This, const void *pShaderBytecode, SIZE_T BytecodeLength, ID3D10VertexShader ** ppVertexShader);
	HRESULT(STDMETHODCALLTYPE * CreateGeometryShader) (ID3D10Device1 * This, const void *pShaderBytecode, SIZE_T BytecodeLength, ID3D10GeometryShader ** ppGeometryShader);
	HRESULT(STDMETHODCALLTYPE * CreateGeometryShaderWithStreamOutput) (ID3D10Device1 * This, const void *pShaderBytecode, SIZE_T BytecodeLength, const D3D10_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, UINT OutputStreamStride, ID3D10GeometryShader ** ppGeometryShader);
	HRESULT(STDMETHODCALLTYPE * CreatePixelShader) (ID3D10Device1 * This, const void *pShaderBytecode, SIZE_T BytecodeLength, ID3D10PixelShader ** ppPixelShader);
	HRESULT(STDMETHODCALLTYPE * CreateBlendState) (ID3D10Device1 * This, const D3D10_BLEND_DESC * pBlendStateDesc, ID3D10BlendState ** ppBlendState);
	HRESULT(STDMETHODCALLTYPE * CreateDepthStencilState) (ID3D10Device1 * This, const D3D10_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D10DepthStencilState ** ppDepthStencilState);
	HRESULT(STDMETHODCALLTYPE * CreateRasterizerState) (ID3D10Device1 * This, const D3D10_RASTERIZER_DESC * pRasterizerDesc, ID3D10RasterizerState ** ppRasterizerState);
	HRESULT(STDMETHODCALLTYPE * CreateSamplerState) (ID3D10Device1 * This, const D3D10_SAMPLER_DESC * pSamplerDesc, ID3D10SamplerState ** ppSamplerState);
	HRESULT(STDMETHODCALLTYPE * CreateQuery) (ID3D10Device1 * This, const D3D10_QUERY_DESC * pQueryDesc, ID3D10Query ** ppQuery);
	HRESULT(STDMETHODCALLTYPE * CreatePredicate) (ID3D10Device1 * This, const D3D10_QUERY_DESC * pPredicateDesc, ID3D10Predicate ** ppPredicate);
	HRESULT(STDMETHODCALLTYPE * CreateCounter) (ID3D10Device1 * This, const D3D10_COUNTER_DESC * pCounterDesc, ID3D10Counter ** ppCounter);
	HRESULT(STDMETHODCALLTYPE * CheckFormatSupport) (ID3D10Device1 * This, DXGI_FORMAT Format, UINT * pFormatSupport);
	HRESULT(STDMETHODCALLTYPE * CheckMultisampleQualityLevels) (ID3D10Device1 * This, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels);
	void (STDMETHODCALLTYPE * CheckCounterInfo) (ID3D10Device1 * This, D3D10_COUNTER_INFO * pCounterInfo);
	HRESULT(STDMETHODCALLTYPE * CheckCounter) (ID3D10Device1 * This, const D3D10_COUNTER_DESC * pDesc, D3D10_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength);
	UINT(STDMETHODCALLTYPE * GetCreationFlags) (ID3D10Device1 * This);
	HRESULT(STDMETHODCALLTYPE * OpenSharedResource) (ID3D10Device1 * This, HANDLE hResource, REFIID ReturnedInterface, void **ppResource);
	void (STDMETHODCALLTYPE * SetTextFilterSize) (ID3D10Device1 * This, UINT Width, UINT Height);
	void (STDMETHODCALLTYPE * GetTextFilterSize) (ID3D10Device1 * This, UINT * pWidth, UINT * pHeight);
	HRESULT(STDMETHODCALLTYPE * CreateShaderResourceView1) (ID3D10Device1 * This, ID3D10Resource * pResource, const D3D10_SHADER_RESOURCE_VIEW_DESC1 * pDesc, ID3D10ShaderResourceView1 ** ppSRView);
	HRESULT(STDMETHODCALLTYPE * CreateBlendState1) (ID3D10Device1 * This, const D3D10_BLEND_DESC1 * pBlendStateDesc, ID3D10BlendState1 ** ppBlendState);
	D3D10_FEATURE_LEVEL1(STDMETHODCALLTYPE * GetFeatureLevel) (ID3D10Device1 * This);
	END_INTERFACE
} ID3D10Device1Vtbl;
interface ID3D10Device1
{
	CONST_VTBL struct ID3D10Device1Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10Device1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10Device1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10Device1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10Device1_VSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> VSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D10Device1_PSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> PSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D10Device1_PSSetShader(This,pPixelShader)	\
    ( (This)->lpVtbl -> PSSetShader(This,pPixelShader) )
#define ID3D10Device1_PSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> PSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D10Device1_VSSetShader(This,pVertexShader)	\
    ( (This)->lpVtbl -> VSSetShader(This,pVertexShader) )
#define ID3D10Device1_DrawIndexed(This,IndexCount,StartIndexLocation,BaseVertexLocation)	\
    ( (This)->lpVtbl -> DrawIndexed(This,IndexCount,StartIndexLocation,BaseVertexLocation) )
#define ID3D10Device1_Draw(This,VertexCount,StartVertexLocation)	\
    ( (This)->lpVtbl -> Draw(This,VertexCount,StartVertexLocation) )
#define ID3D10Device1_PSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> PSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D10Device1_IASetInputLayout(This,pInputLayout)	\
    ( (This)->lpVtbl -> IASetInputLayout(This,pInputLayout) )
#define ID3D10Device1_IASetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets)	\
    ( (This)->lpVtbl -> IASetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) )
#define ID3D10Device1_IASetIndexBuffer(This,pIndexBuffer,Format,Offset)	\
    ( (This)->lpVtbl -> IASetIndexBuffer(This,pIndexBuffer,Format,Offset) )
#define ID3D10Device1_DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation)	\
    ( (This)->lpVtbl -> DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation) )
#define ID3D10Device1_DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation)	\
    ( (This)->lpVtbl -> DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation) )
#define ID3D10Device1_GSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> GSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D10Device1_GSSetShader(This,pShader)	\
    ( (This)->lpVtbl -> GSSetShader(This,pShader) )
#define ID3D10Device1_IASetPrimitiveTopology(This,Topology)	\
    ( (This)->lpVtbl -> IASetPrimitiveTopology(This,Topology) )
#define ID3D10Device1_VSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> VSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D10Device1_VSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> VSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D10Device1_SetPredication(This,pPredicate,PredicateValue)	\
    ( (This)->lpVtbl -> SetPredication(This,pPredicate,PredicateValue) )
#define ID3D10Device1_GSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> GSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D10Device1_GSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> GSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D10Device1_OMSetRenderTargets(This,NumViews,ppRenderTargetViews,pDepthStencilView)	\
    ( (This)->lpVtbl -> OMSetRenderTargets(This,NumViews,ppRenderTargetViews,pDepthStencilView) )
#define ID3D10Device1_OMSetBlendState(This,pBlendState,BlendFactor,SampleMask)	\
    ( (This)->lpVtbl -> OMSetBlendState(This,pBlendState,BlendFactor,SampleMask) )
#define ID3D10Device1_OMSetDepthStencilState(This,pDepthStencilState,StencilRef)	\
    ( (This)->lpVtbl -> OMSetDepthStencilState(This,pDepthStencilState,StencilRef) )
#define ID3D10Device1_SOSetTargets(This,NumBuffers,ppSOTargets,pOffsets)	\
    ( (This)->lpVtbl -> SOSetTargets(This,NumBuffers,ppSOTargets,pOffsets) )
#define ID3D10Device1_DrawAuto(This)	\
    ( (This)->lpVtbl -> DrawAuto(This) )
#define ID3D10Device1_RSSetState(This,pRasterizerState)	\
    ( (This)->lpVtbl -> RSSetState(This,pRasterizerState) )
#define ID3D10Device1_RSSetViewports(This,NumViewports,pViewports)	\
    ( (This)->lpVtbl -> RSSetViewports(This,NumViewports,pViewports) )
#define ID3D10Device1_RSSetScissorRects(This,NumRects,pRects)	\
    ( (This)->lpVtbl -> RSSetScissorRects(This,NumRects,pRects) )
#define ID3D10Device1_CopySubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox)	\
    ( (This)->lpVtbl -> CopySubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox) )
#define ID3D10Device1_CopyResource(This,pDstResource,pSrcResource)	\
    ( (This)->lpVtbl -> CopyResource(This,pDstResource,pSrcResource) )
#define ID3D10Device1_UpdateSubresource(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch)	\
    ( (This)->lpVtbl -> UpdateSubresource(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch) )
#define ID3D10Device1_ClearRenderTargetView(This,pRenderTargetView,ColorRGBA)	\
    ( (This)->lpVtbl -> ClearRenderTargetView(This,pRenderTargetView,ColorRGBA) )
#define ID3D10Device1_ClearDepthStencilView(This,pDepthStencilView,ClearFlags,Depth,Stencil)	\
    ( (This)->lpVtbl -> ClearDepthStencilView(This,pDepthStencilView,ClearFlags,Depth,Stencil) )
#define ID3D10Device1_GenerateMips(This,pShaderResourceView)	\
    ( (This)->lpVtbl -> GenerateMips(This,pShaderResourceView) )
#define ID3D10Device1_ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format)	\
    ( (This)->lpVtbl -> ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) )
#define ID3D10Device1_VSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> VSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D10Device1_PSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> PSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D10Device1_PSGetShader(This,ppPixelShader)	\
    ( (This)->lpVtbl -> PSGetShader(This,ppPixelShader) )
#define ID3D10Device1_PSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> PSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D10Device1_VSGetShader(This,ppVertexShader)	\
    ( (This)->lpVtbl -> VSGetShader(This,ppVertexShader) )
#define ID3D10Device1_PSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> PSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D10Device1_IAGetInputLayout(This,ppInputLayout)	\
    ( (This)->lpVtbl -> IAGetInputLayout(This,ppInputLayout) )
#define ID3D10Device1_IAGetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets)	\
    ( (This)->lpVtbl -> IAGetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) )
#define ID3D10Device1_IAGetIndexBuffer(This,pIndexBuffer,Format,Offset)	\
    ( (This)->lpVtbl -> IAGetIndexBuffer(This,pIndexBuffer,Format,Offset) )
#define ID3D10Device1_GSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> GSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D10Device1_GSGetShader(This,ppGeometryShader)	\
    ( (This)->lpVtbl -> GSGetShader(This,ppGeometryShader) )
#define ID3D10Device1_IAGetPrimitiveTopology(This,pTopology)	\
    ( (This)->lpVtbl -> IAGetPrimitiveTopology(This,pTopology) )
#define ID3D10Device1_VSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> VSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D10Device1_VSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> VSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D10Device1_GetPredication(This,ppPredicate,pPredicateValue)	\
    ( (This)->lpVtbl -> GetPredication(This,ppPredicate,pPredicateValue) )
#define ID3D10Device1_GSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> GSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D10Device1_GSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> GSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D10Device1_OMGetRenderTargets(This,NumViews,ppRenderTargetViews,ppDepthStencilView)	\
    ( (This)->lpVtbl -> OMGetRenderTargets(This,NumViews,ppRenderTargetViews,ppDepthStencilView) )
#define ID3D10Device1_OMGetBlendState(This,ppBlendState,BlendFactor,pSampleMask)	\
    ( (This)->lpVtbl -> OMGetBlendState(This,ppBlendState,BlendFactor,pSampleMask) )
#define ID3D10Device1_OMGetDepthStencilState(This,ppDepthStencilState,pStencilRef)	\
    ( (This)->lpVtbl -> OMGetDepthStencilState(This,ppDepthStencilState,pStencilRef) )
#define ID3D10Device1_SOGetTargets(This,NumBuffers,ppSOTargets,pOffsets)	\
    ( (This)->lpVtbl -> SOGetTargets(This,NumBuffers,ppSOTargets,pOffsets) )
#define ID3D10Device1_RSGetState(This,ppRasterizerState)	\
    ( (This)->lpVtbl -> RSGetState(This,ppRasterizerState) )
#define ID3D10Device1_RSGetViewports(This,NumViewports,pViewports)	\
    ( (This)->lpVtbl -> RSGetViewports(This,NumViewports,pViewports) )
#define ID3D10Device1_RSGetScissorRects(This,NumRects,pRects)	\
    ( (This)->lpVtbl -> RSGetScissorRects(This,NumRects,pRects) )
#define ID3D10Device1_GetDeviceRemovedReason(This)	\
    ( (This)->lpVtbl -> GetDeviceRemovedReason(This) )
#define ID3D10Device1_SetExceptionMode(This,RaiseFlags)	\
    ( (This)->lpVtbl -> SetExceptionMode(This,RaiseFlags) )
#define ID3D10Device1_GetExceptionMode(This)	\
    ( (This)->lpVtbl -> GetExceptionMode(This) )
#define ID3D10Device1_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10Device1_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10Device1_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10Device1_ClearState(This)	\
    ( (This)->lpVtbl -> ClearState(This) )
#define ID3D10Device1_Flush(This)	\
    ( (This)->lpVtbl -> Flush(This) )
#define ID3D10Device1_CreateBuffer(This,pDesc,pInitialData,ppBuffer)	\
    ( (This)->lpVtbl -> CreateBuffer(This,pDesc,pInitialData,ppBuffer) )
#define ID3D10Device1_CreateTexture1D(This,pDesc,pInitialData,ppTexture1D)	\
    ( (This)->lpVtbl -> CreateTexture1D(This,pDesc,pInitialData,ppTexture1D) )
#define ID3D10Device1_CreateTexture2D(This,pDesc,pInitialData,ppTexture2D)	\
    ( (This)->lpVtbl -> CreateTexture2D(This,pDesc,pInitialData,ppTexture2D) )
#define ID3D10Device1_CreateTexture3D(This,pDesc,pInitialData,ppTexture3D)	\
    ( (This)->lpVtbl -> CreateTexture3D(This,pDesc,pInitialData,ppTexture3D) )
#define ID3D10Device1_CreateShaderResourceView(This,pResource,pDesc,ppSRView)	\
    ( (This)->lpVtbl -> CreateShaderResourceView(This,pResource,pDesc,ppSRView) )
#define ID3D10Device1_CreateRenderTargetView(This,pResource,pDesc,ppRTView)	\
    ( (This)->lpVtbl -> CreateRenderTargetView(This,pResource,pDesc,ppRTView) )
#define ID3D10Device1_CreateDepthStencilView(This,pResource,pDesc,ppDepthStencilView)	\
    ( (This)->lpVtbl -> CreateDepthStencilView(This,pResource,pDesc,ppDepthStencilView) )
#define ID3D10Device1_CreateInputLayout(This,pInputElementDescs,NumElements,pShaderBytecodeWithInputSignature,BytecodeLength,ppInputLayout)	\
    ( (This)->lpVtbl -> CreateInputLayout(This,pInputElementDescs,NumElements,pShaderBytecodeWithInputSignature,BytecodeLength,ppInputLayout) )
#define ID3D10Device1_CreateVertexShader(This,pShaderBytecode,BytecodeLength,ppVertexShader)	\
    ( (This)->lpVtbl -> CreateVertexShader(This,pShaderBytecode,BytecodeLength,ppVertexShader) )
#define ID3D10Device1_CreateGeometryShader(This,pShaderBytecode,BytecodeLength,ppGeometryShader)	\
    ( (This)->lpVtbl -> CreateGeometryShader(This,pShaderBytecode,BytecodeLength,ppGeometryShader) )
#define ID3D10Device1_CreateGeometryShaderWithStreamOutput(This,pShaderBytecode,BytecodeLength,pSODeclaration,NumEntries,OutputStreamStride,ppGeometryShader)	\
    ( (This)->lpVtbl -> CreateGeometryShaderWithStreamOutput(This,pShaderBytecode,BytecodeLength,pSODeclaration,NumEntries,OutputStreamStride,ppGeometryShader) )
#define ID3D10Device1_CreatePixelShader(This,pShaderBytecode,BytecodeLength,ppPixelShader)	\
    ( (This)->lpVtbl -> CreatePixelShader(This,pShaderBytecode,BytecodeLength,ppPixelShader) )
#define ID3D10Device1_CreateBlendState(This,pBlendStateDesc,ppBlendState)	\
    ( (This)->lpVtbl -> CreateBlendState(This,pBlendStateDesc,ppBlendState) )
#define ID3D10Device1_CreateDepthStencilState(This,pDepthStencilDesc,ppDepthStencilState)	\
    ( (This)->lpVtbl -> CreateDepthStencilState(This,pDepthStencilDesc,ppDepthStencilState) )
#define ID3D10Device1_CreateRasterizerState(This,pRasterizerDesc,ppRasterizerState)	\
    ( (This)->lpVtbl -> CreateRasterizerState(This,pRasterizerDesc,ppRasterizerState) )
#define ID3D10Device1_CreateSamplerState(This,pSamplerDesc,ppSamplerState)	\
    ( (This)->lpVtbl -> CreateSamplerState(This,pSamplerDesc,ppSamplerState) )
#define ID3D10Device1_CreateQuery(This,pQueryDesc,ppQuery)	\
    ( (This)->lpVtbl -> CreateQuery(This,pQueryDesc,ppQuery) )
#define ID3D10Device1_CreatePredicate(This,pPredicateDesc,ppPredicate)	\
    ( (This)->lpVtbl -> CreatePredicate(This,pPredicateDesc,ppPredicate) )
#define ID3D10Device1_CreateCounter(This,pCounterDesc,ppCounter)	\
    ( (This)->lpVtbl -> CreateCounter(This,pCounterDesc,ppCounter) )
#define ID3D10Device1_CheckFormatSupport(This,Format,pFormatSupport)	\
    ( (This)->lpVtbl -> CheckFormatSupport(This,Format,pFormatSupport) )
#define ID3D10Device1_CheckMultisampleQualityLevels(This,Format,SampleCount,pNumQualityLevels)	\
    ( (This)->lpVtbl -> CheckMultisampleQualityLevels(This,Format,SampleCount,pNumQualityLevels) )
#define ID3D10Device1_CheckCounterInfo(This,pCounterInfo)	\
    ( (This)->lpVtbl -> CheckCounterInfo(This,pCounterInfo) )
#define ID3D10Device1_CheckCounter(This,pDesc,pType,pActiveCounters,szName,pNameLength,szUnits,pUnitsLength,szDescription,pDescriptionLength)	\
    ( (This)->lpVtbl -> CheckCounter(This,pDesc,pType,pActiveCounters,szName,pNameLength,szUnits,pUnitsLength,szDescription,pDescriptionLength) )
#define ID3D10Device1_GetCreationFlags(This)	\
    ( (This)->lpVtbl -> GetCreationFlags(This) )
#define ID3D10Device1_OpenSharedResource(This,hResource,ReturnedInterface,ppResource)	\
    ( (This)->lpVtbl -> OpenSharedResource(This,hResource,ReturnedInterface,ppResource) )
#define ID3D10Device1_SetTextFilterSize(This,Width,Height)	\
    ( (This)->lpVtbl -> SetTextFilterSize(This,Width,Height) )
#define ID3D10Device1_GetTextFilterSize(This,pWidth,pHeight)	\
    ( (This)->lpVtbl -> GetTextFilterSize(This,pWidth,pHeight) )
#define ID3D10Device1_CreateShaderResourceView1(This,pResource,pDesc,ppSRView)	\
    ( (This)->lpVtbl -> CreateShaderResourceView1(This,pResource,pDesc,ppSRView) )
#define ID3D10Device1_CreateBlendState1(This,pBlendStateDesc,ppBlendState)	\
    ( (This)->lpVtbl -> CreateBlendState1(This,pBlendStateDesc,ppBlendState) )
#define ID3D10Device1_GetFeatureLevel(This)	\
    ( (This)->lpVtbl -> GetFeatureLevel(This) )
#endif
#endif
#define	D3D10_1_SDK_VERSION	( ( 0 + 0x20 )  )
#include "d3d10_1shader.h"
typedef HRESULT(WINAPI *PFN_D3D10_CREATE_DEVICE1) (IDXGIAdapter *, D3D10_DRIVER_TYPE, HMODULE, UINT, D3D10_FEATURE_LEVEL1, UINT, ID3D10Device1 **);
HRESULT WINAPI D3D10CreateDevice1(IDXGIAdapter *pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, D3D10_FEATURE_LEVEL1 HardwareLevel, UINT SDKVersion, ID3D10Device1 **ppDevice);
typedef HRESULT(WINAPI *PFN_D3D10_CREATE_DEVICE_AND_SWAP_CHAIN1) (IDXGIAdapter *, D3D10_DRIVER_TYPE, HMODULE, UINT, D3D10_FEATURE_LEVEL1, UINT, DXGI_SWAP_CHAIN_DESC *, IDXGISwapChain **, ID3D10Device1 **);
HRESULT WINAPI D3D10CreateDeviceAndSwapChain1(IDXGIAdapter *pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, D3D10_FEATURE_LEVEL1 HardwareLevel, UINT SDKVersion, DXGI_SWAP_CHAIN_DESC *pSwapChainDesc, IDXGISwapChain **ppSwapChain, ID3D10Device1 **ppDevice);
DEFINE_GUID(IID_ID3D10BlendState1, 0xEDAD8D99, 0x8A35, 0x4d6d, 0x85, 0x66, 0x2E, 0xA2, 0x76, 0xCD, 0xE1, 0x61);
DEFINE_GUID(IID_ID3D10ShaderResourceView1, 0x9B7E4C87, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10Device1, 0x9B7E4C8F, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
extern RPC_IF_HANDLE __MIDL_itf_d3d10_1_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_1_0000_0003_v0_0_s_ifspec;
#endif
