/*+@@file@@----------------------------------------------------------------*//*!
 \file		D3D11_1.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Oct 16 20:27:36 2016
 \date		Modified on Sun Oct 16 20:27:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif
#ifndef __d3d11_1_h__
#define __d3d11_1_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ID3D11BlendState1_FWD_DEFINED__
#define __ID3D11BlendState1_FWD_DEFINED__
typedef interface ID3D11BlendState1 ID3D11BlendState1;
#endif
#ifndef __ID3D11RasterizerState1_FWD_DEFINED__
#define __ID3D11RasterizerState1_FWD_DEFINED__
typedef interface ID3D11RasterizerState1 ID3D11RasterizerState1;
#endif
#ifndef __ID3DDeviceContextState_FWD_DEFINED__
#define __ID3DDeviceContextState_FWD_DEFINED__
typedef interface ID3DDeviceContextState ID3DDeviceContextState;
#endif
#ifndef __ID3D11DeviceContext1_FWD_DEFINED__
#define __ID3D11DeviceContext1_FWD_DEFINED__
typedef interface ID3D11DeviceContext1 ID3D11DeviceContext1;
#endif
#ifndef __ID3D11Device1_FWD_DEFINED__
#define __ID3D11Device1_FWD_DEFINED__
typedef interface ID3D11Device1 ID3D11Device1;
#endif
#ifndef __ID3DUserDefinedAnnotation_FWD_DEFINED__
#define __ID3DUserDefinedAnnotation_FWD_DEFINED__
typedef interface ID3DUserDefinedAnnotation ID3DUserDefinedAnnotation;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <dxgi1_2.h>
#include <d3dcommon.h>
#include <d3d11.h>
typedef enum D3D11_COPY_FLAGS
{
	D3D11_COPY_NO_OVERWRITE = 0x1,
	D3D11_COPY_DISCARD = 0x2
} D3D11_COPY_FLAGS;
typedef enum D3D11_LOGIC_OP
{
	D3D11_LOGIC_OP_CLEAR = 0,
	D3D11_LOGIC_OP_SET = (D3D11_LOGIC_OP_CLEAR + 1),
	D3D11_LOGIC_OP_COPY = (D3D11_LOGIC_OP_SET + 1),
	D3D11_LOGIC_OP_COPY_INVERTED = (D3D11_LOGIC_OP_COPY + 1),
	D3D11_LOGIC_OP_NOOP = (D3D11_LOGIC_OP_COPY_INVERTED + 1),
	D3D11_LOGIC_OP_INVERT = (D3D11_LOGIC_OP_NOOP + 1),
	D3D11_LOGIC_OP_AND = (D3D11_LOGIC_OP_INVERT + 1),
	D3D11_LOGIC_OP_NAND = (D3D11_LOGIC_OP_AND + 1),
	D3D11_LOGIC_OP_OR = (D3D11_LOGIC_OP_NAND + 1),
	D3D11_LOGIC_OP_NOR = (D3D11_LOGIC_OP_OR + 1),
	D3D11_LOGIC_OP_XOR = (D3D11_LOGIC_OP_NOR + 1),
	D3D11_LOGIC_OP_EQUIV = (D3D11_LOGIC_OP_XOR + 1),
	D3D11_LOGIC_OP_AND_REVERSE = (D3D11_LOGIC_OP_EQUIV + 1),
	D3D11_LOGIC_OP_AND_INVERTED = (D3D11_LOGIC_OP_AND_REVERSE + 1),
	D3D11_LOGIC_OP_OR_REVERSE = (D3D11_LOGIC_OP_AND_INVERTED + 1),
	D3D11_LOGIC_OP_OR_INVERTED = (D3D11_LOGIC_OP_OR_REVERSE + 1)
} D3D11_LOGIC_OP;
typedef struct D3D11_RENDER_TARGET_BLEND_DESC1
{
	BOOL BlendEnable;
	BOOL LogicOpEnable;
	D3D11_BLEND SrcBlend;
	D3D11_BLEND DestBlend;
	D3D11_BLEND_OP BlendOp;
	D3D11_BLEND SrcBlendAlpha;
	D3D11_BLEND DestBlendAlpha;
	D3D11_BLEND_OP BlendOpAlpha;
	D3D11_LOGIC_OP LogicOp;
	UINT8 RenderTargetWriteMask;
} D3D11_RENDER_TARGET_BLEND_DESC1;
typedef struct D3D11_BLEND_DESC1
{
	BOOL AlphaToCoverageEnable;
	BOOL IndependentBlendEnable;
	D3D11_RENDER_TARGET_BLEND_DESC1 RenderTarget[8];
} D3D11_BLEND_DESC1;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0000_v0_0_s_ifspec;
#ifndef __ID3D11BlendState1_INTERFACE_DEFINED__
#define __ID3D11BlendState1_INTERFACE_DEFINED__
extern const IID IID_ID3D11BlendState1;
typedef struct ID3D11BlendState1Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3D11BlendState1 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ID3D11BlendState1 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ID3D11BlendState1 * This);
	void (STDMETHODCALLTYPE * GetDevice) (ID3D11BlendState1 * This, ID3D11Device ** ppDevice);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (ID3D11BlendState1 * This, REFGUID guid, UINT * pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateData) (ID3D11BlendState1 * This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateDataInterface) (ID3D11BlendState1 * This, REFGUID guid, const IUnknown * pData);
	void (STDMETHODCALLTYPE * GetDesc) (ID3D11BlendState1 * This, D3D11_BLEND_DESC * pDesc);
	void (STDMETHODCALLTYPE * GetDesc1) (ID3D11BlendState1 * This, D3D11_BLEND_DESC1 * pDesc);
	END_INTERFACE
}  ID3D11BlendState1Vtbl;
interface ID3D11BlendState1
{
	CONST_VTBL struct ID3D11BlendState1Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D11BlendState1_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D11BlendState1_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ID3D11BlendState1_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ID3D11BlendState1_GetDevice(This,ppDevice) ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D11BlendState1_GetPrivateData(This,guid,pDataSize,pData) ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D11BlendState1_SetPrivateData(This,guid,DataSize,pData) ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D11BlendState1_SetPrivateDataInterface(This,guid,pData) ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D11BlendState1_GetDesc(This,pDesc) ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#define ID3D11BlendState1_GetDesc1(This,pDesc) ( (This)->lpVtbl -> GetDesc1(This,pDesc) )
#endif
#endif
typedef struct D3D11_RASTERIZER_DESC1
{
	D3D11_FILL_MODE FillMode;
	D3D11_CULL_MODE CullMode;
	BOOL FrontCounterClockwise;
	INT DepthBias;
	FLOAT DepthBiasClamp;
	FLOAT SlopeScaledDepthBias;
	BOOL DepthClipEnable;
	BOOL ScissorEnable;
	BOOL MultisampleEnable;
	BOOL AntialiasedLineEnable;
	UINT ForcedSampleCount;
} D3D11_RASTERIZER_DESC1;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0001_v0_0_s_ifspec;
#ifndef __ID3D11RasterizerState1_INTERFACE_DEFINED__
#define __ID3D11RasterizerState1_INTERFACE_DEFINED__
extern const IID IID_ID3D11RasterizerState1;
typedef struct ID3D11RasterizerState1Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3D11RasterizerState1 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ID3D11RasterizerState1 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ID3D11RasterizerState1 * This);
	void (STDMETHODCALLTYPE * GetDevice) (ID3D11RasterizerState1 * This, ID3D11Device ** ppDevice);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (ID3D11RasterizerState1 * This, REFGUID guid, UINT * pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateData) (ID3D11RasterizerState1 * This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateDataInterface) (ID3D11RasterizerState1 * This, REFGUID guid, const IUnknown * pData);
	void (STDMETHODCALLTYPE * GetDesc) (ID3D11RasterizerState1 * This, D3D11_RASTERIZER_DESC * pDesc);
	void (STDMETHODCALLTYPE * GetDesc1) (ID3D11RasterizerState1 * This, D3D11_RASTERIZER_DESC1 * pDesc);
	END_INTERFACE
}  ID3D11RasterizerState1Vtbl;
interface ID3D11RasterizerState1
{
	CONST_VTBL struct ID3D11RasterizerState1Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D11RasterizerState1_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D11RasterizerState1_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ID3D11RasterizerState1_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ID3D11RasterizerState1_GetDevice(This,ppDevice) ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D11RasterizerState1_GetPrivateData(This,guid,pDataSize,pData) ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D11RasterizerState1_SetPrivateData(This,guid,DataSize,pData) ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D11RasterizerState1_SetPrivateDataInterface(This,guid,pData) ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D11RasterizerState1_GetDesc(This,pDesc) ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#define ID3D11RasterizerState1_GetDesc1(This,pDesc) ( (This)->lpVtbl -> GetDesc1(This,pDesc) )
#endif
#endif
typedef enum D3D11_1_CREATE_DEVICE_CONTEXT_STATE_FLAG
{
	D3D11_1_CREATE_DEVICE_CONTEXT_STATE_SINGLETHREADED = 0x1
} D3D11_1_CREATE_DEVICE_CONTEXT_STATE_FLAG;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0002_v0_0_s_ifspec;
#ifndef __ID3DDeviceContextState_INTERFACE_DEFINED__
#define __ID3DDeviceContextState_INTERFACE_DEFINED__
extern const IID IID_ID3DDeviceContextState;
typedef struct ID3DDeviceContextStateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3DDeviceContextState * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ID3DDeviceContextState * This);
	ULONG(STDMETHODCALLTYPE * Release) (ID3DDeviceContextState * This);
	void (STDMETHODCALLTYPE * GetDevice) (ID3DDeviceContextState * This, ID3D11Device ** ppDevice);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (ID3DDeviceContextState * This, REFGUID guid, UINT * pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateData) (ID3DDeviceContextState * This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateDataInterface) (ID3DDeviceContextState * This, REFGUID guid, const IUnknown * pData);
	END_INTERFACE
}  ID3DDeviceContextStateVtbl;
interface ID3DDeviceContextState
{
	CONST_VTBL struct ID3DDeviceContextStateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3DDeviceContextState_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3DDeviceContextState_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ID3DDeviceContextState_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ID3DDeviceContextState_GetDevice(This,ppDevice) ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3DDeviceContextState_GetPrivateData(This,guid,pDataSize,pData) ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3DDeviceContextState_SetPrivateData(This,guid,DataSize,pData) ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3DDeviceContextState_SetPrivateDataInterface(This,guid,pData) ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#endif
#endif
#ifndef __ID3D11DeviceContext1_INTERFACE_DEFINED__
#define __ID3D11DeviceContext1_INTERFACE_DEFINED__
extern const IID IID_ID3D11DeviceContext1;
typedef struct ID3D11DeviceContext1Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3D11DeviceContext1 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ID3D11DeviceContext1 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ID3D11DeviceContext1 * This);
	void (STDMETHODCALLTYPE * GetDevice) (ID3D11DeviceContext1 * This, ID3D11Device ** ppDevice);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (ID3D11DeviceContext1 * This, REFGUID guid, UINT * pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateData) (ID3D11DeviceContext1 * This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateDataInterface) (ID3D11DeviceContext1 * This, REFGUID guid, const IUnknown * pData);
	void (STDMETHODCALLTYPE * VSSetConstantBuffers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const *ppConstantBuffers);
	void (STDMETHODCALLTYPE * PSSetShaderResources) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView * const *ppShaderResourceViews);
	void (STDMETHODCALLTYPE * PSSetShader) (ID3D11DeviceContext1 * This, ID3D11PixelShader * pPixelShader, ID3D11ClassInstance * const *ppClassInstances, UINT NumClassInstances);
	void (STDMETHODCALLTYPE * PSSetSamplers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState * const *ppSamplers);
	void (STDMETHODCALLTYPE * VSSetShader) (ID3D11DeviceContext1 * This, ID3D11VertexShader * pVertexShader, ID3D11ClassInstance * const *ppClassInstances, UINT NumClassInstances);
	void (STDMETHODCALLTYPE * DrawIndexed) (ID3D11DeviceContext1 * This, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation);
	void (STDMETHODCALLTYPE * Draw) (ID3D11DeviceContext1 * This, UINT VertexCount, UINT StartVertexLocation);
	HRESULT(STDMETHODCALLTYPE * Map) (ID3D11DeviceContext1 * This, ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource);
	void (STDMETHODCALLTYPE * Unmap) (ID3D11DeviceContext1 * This, ID3D11Resource * pResource, UINT Subresource);
	void (STDMETHODCALLTYPE * PSSetConstantBuffers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const *ppConstantBuffers);
	void (STDMETHODCALLTYPE * IASetInputLayout) (ID3D11DeviceContext1 * This, ID3D11InputLayout * pInputLayout);
	void (STDMETHODCALLTYPE * IASetVertexBuffers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const *ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets);
	void (STDMETHODCALLTYPE * IASetIndexBuffer) (ID3D11DeviceContext1 * This, ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset);
	void (STDMETHODCALLTYPE * DrawIndexedInstanced) (ID3D11DeviceContext1 * This, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
	void (STDMETHODCALLTYPE * DrawInstanced) (ID3D11DeviceContext1 * This, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
	void (STDMETHODCALLTYPE * GSSetConstantBuffers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const *ppConstantBuffers);
	void (STDMETHODCALLTYPE * GSSetShader) (ID3D11DeviceContext1 * This, ID3D11GeometryShader * pShader, ID3D11ClassInstance * const *ppClassInstances, UINT NumClassInstances);
	void (STDMETHODCALLTYPE * IASetPrimitiveTopology) (ID3D11DeviceContext1 * This, D3D11_PRIMITIVE_TOPOLOGY Topology);
	void (STDMETHODCALLTYPE * VSSetShaderResources) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView * const *ppShaderResourceViews);
	void (STDMETHODCALLTYPE * VSSetSamplers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState * const *ppSamplers);
	void (STDMETHODCALLTYPE * Begin) (ID3D11DeviceContext1 * This, ID3D11Asynchronous * pAsync);
	void (STDMETHODCALLTYPE * End) (ID3D11DeviceContext1 * This, ID3D11Asynchronous * pAsync);
	HRESULT(STDMETHODCALLTYPE * GetData) (ID3D11DeviceContext1 * This, ID3D11Asynchronous * pAsync, void *pData, UINT DataSize, UINT GetDataFlags);
	void (STDMETHODCALLTYPE * SetPredication) (ID3D11DeviceContext1 * This, ID3D11Predicate * pPredicate, BOOL PredicateValue);
	void (STDMETHODCALLTYPE * GSSetShaderResources) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView * const *ppShaderResourceViews);
	void (STDMETHODCALLTYPE * GSSetSamplers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState * const *ppSamplers);
	void (STDMETHODCALLTYPE * OMSetRenderTargets) (ID3D11DeviceContext1 * This, UINT NumViews, ID3D11RenderTargetView * const *ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView);
	void (STDMETHODCALLTYPE * OMSetRenderTargetsAndUnorderedAccessViews) (ID3D11DeviceContext1 * This, UINT NumRTVs, ID3D11RenderTargetView * const *ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView * const *ppUnorderedAccessViews, const UINT * pUAVInitialCounts);
	void (STDMETHODCALLTYPE * OMSetBlendState) (ID3D11DeviceContext1 * This, ID3D11BlendState * pBlendState, const FLOAT BlendFactor[4], UINT SampleMask);
	void (STDMETHODCALLTYPE * OMSetDepthStencilState) (ID3D11DeviceContext1 * This, ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef);
	void (STDMETHODCALLTYPE * SOSetTargets) (ID3D11DeviceContext1 * This, UINT NumBuffers, ID3D11Buffer * const *ppSOTargets, const UINT * pOffsets);
	void (STDMETHODCALLTYPE * DrawAuto) (ID3D11DeviceContext1 * This);
	void (STDMETHODCALLTYPE * DrawIndexedInstancedIndirect) (ID3D11DeviceContext1 * This, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
	void (STDMETHODCALLTYPE * DrawInstancedIndirect) (ID3D11DeviceContext1 * This, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
	void (STDMETHODCALLTYPE * Dispatch) (ID3D11DeviceContext1 * This, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ);
	void (STDMETHODCALLTYPE * DispatchIndirect) (ID3D11DeviceContext1 * This, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
	void (STDMETHODCALLTYPE * RSSetState) (ID3D11DeviceContext1 * This, ID3D11RasterizerState * pRasterizerState);
	void (STDMETHODCALLTYPE * RSSetViewports) (ID3D11DeviceContext1 * This, UINT NumViewports, const D3D11_VIEWPORT * pViewports);
	void (STDMETHODCALLTYPE * RSSetScissorRects) (ID3D11DeviceContext1 * This, UINT NumRects, const D3D11_RECT * pRects);
	void (STDMETHODCALLTYPE * CopySubresourceRegion) (ID3D11DeviceContext1 * This, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox);
	void (STDMETHODCALLTYPE * CopyResource) (ID3D11DeviceContext1 * This, ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource);
	void (STDMETHODCALLTYPE * UpdateSubresource) (ID3D11DeviceContext1 * This, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void *pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);
	void (STDMETHODCALLTYPE * CopyStructureCount) (ID3D11DeviceContext1 * This, ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView);
	void (STDMETHODCALLTYPE * ClearRenderTargetView) (ID3D11DeviceContext1 * This, ID3D11RenderTargetView * pRenderTargetView, const FLOAT ColorRGBA[4]);
	void (STDMETHODCALLTYPE * ClearUnorderedAccessViewUint) (ID3D11DeviceContext1 * This, ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT Values[4]);
	void (STDMETHODCALLTYPE * ClearUnorderedAccessViewFloat) (ID3D11DeviceContext1 * This, ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT Values[4]);
	void (STDMETHODCALLTYPE * ClearDepthStencilView) (ID3D11DeviceContext1 * This, ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil);
	void (STDMETHODCALLTYPE * GenerateMips) (ID3D11DeviceContext1 * This, ID3D11ShaderResourceView * pShaderResourceView);
	void (STDMETHODCALLTYPE * SetResourceMinLOD) (ID3D11DeviceContext1 * This, ID3D11Resource * pResource, FLOAT MinLOD);
	FLOAT(STDMETHODCALLTYPE * GetResourceMinLOD) (ID3D11DeviceContext1 * This, ID3D11Resource * pResource);
	void (STDMETHODCALLTYPE * ResolveSubresource) (ID3D11DeviceContext1 * This, ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format);
	void (STDMETHODCALLTYPE * ExecuteCommandList) (ID3D11DeviceContext1 * This, ID3D11CommandList * pCommandList, BOOL RestoreContextState);
	void (STDMETHODCALLTYPE * HSSetShaderResources) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView * const *ppShaderResourceViews);
	void (STDMETHODCALLTYPE * HSSetShader) (ID3D11DeviceContext1 * This, ID3D11HullShader * pHullShader, ID3D11ClassInstance * const *ppClassInstances, UINT NumClassInstances);
	void (STDMETHODCALLTYPE * HSSetSamplers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState * const *ppSamplers);
	void (STDMETHODCALLTYPE * HSSetConstantBuffers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const *ppConstantBuffers);
	void (STDMETHODCALLTYPE * DSSetShaderResources) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView * const *ppShaderResourceViews);
	void (STDMETHODCALLTYPE * DSSetShader) (ID3D11DeviceContext1 * This, ID3D11DomainShader * pDomainShader, ID3D11ClassInstance * const *ppClassInstances, UINT NumClassInstances);
	void (STDMETHODCALLTYPE * DSSetSamplers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState * const *ppSamplers);
	void (STDMETHODCALLTYPE * DSSetConstantBuffers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const *ppConstantBuffers);
	void (STDMETHODCALLTYPE * CSSetShaderResources) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView * const *ppShaderResourceViews);
	void (STDMETHODCALLTYPE * CSSetUnorderedAccessViews) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView * const *ppUnorderedAccessViews, const UINT * pUAVInitialCounts);
	void (STDMETHODCALLTYPE * CSSetShader) (ID3D11DeviceContext1 * This, ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance * const *ppClassInstances, UINT NumClassInstances);
	void (STDMETHODCALLTYPE * CSSetSamplers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState * const *ppSamplers);
	void (STDMETHODCALLTYPE * CSSetConstantBuffers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const *ppConstantBuffers);
	void (STDMETHODCALLTYPE * VSGetConstantBuffers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
	void (STDMETHODCALLTYPE * PSGetShaderResources) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
	void (STDMETHODCALLTYPE * PSGetShader) (ID3D11DeviceContext1 * This, ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
	void (STDMETHODCALLTYPE * PSGetSamplers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
	void (STDMETHODCALLTYPE * VSGetShader) (ID3D11DeviceContext1 * This, ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
	void (STDMETHODCALLTYPE * PSGetConstantBuffers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
	void (STDMETHODCALLTYPE * IAGetInputLayout) (ID3D11DeviceContext1 * This, ID3D11InputLayout ** ppInputLayout);
	void (STDMETHODCALLTYPE * IAGetVertexBuffers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets);
	void (STDMETHODCALLTYPE * IAGetIndexBuffer) (ID3D11DeviceContext1 * This, ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset);
	void (STDMETHODCALLTYPE * GSGetConstantBuffers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
	void (STDMETHODCALLTYPE * GSGetShader) (ID3D11DeviceContext1 * This, ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
	void (STDMETHODCALLTYPE * IAGetPrimitiveTopology) (ID3D11DeviceContext1 * This, D3D11_PRIMITIVE_TOPOLOGY * pTopology);
	void (STDMETHODCALLTYPE * VSGetShaderResources) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
	void (STDMETHODCALLTYPE * VSGetSamplers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
	void (STDMETHODCALLTYPE * GetPredication) (ID3D11DeviceContext1 * This, ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue);
	void (STDMETHODCALLTYPE * GSGetShaderResources) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
	void (STDMETHODCALLTYPE * GSGetSamplers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
	void (STDMETHODCALLTYPE * OMGetRenderTargets) (ID3D11DeviceContext1 * This, UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView);
	void (STDMETHODCALLTYPE * OMGetRenderTargetsAndUnorderedAccessViews) (ID3D11DeviceContext1 * This, UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews);
	void (STDMETHODCALLTYPE * OMGetBlendState) (ID3D11DeviceContext1 * This, ID3D11BlendState ** ppBlendState, FLOAT BlendFactor[4], UINT * pSampleMask);
	void (STDMETHODCALLTYPE * OMGetDepthStencilState) (ID3D11DeviceContext1 * This, ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef);
	void (STDMETHODCALLTYPE * SOGetTargets) (ID3D11DeviceContext1 * This, UINT NumBuffers, ID3D11Buffer ** ppSOTargets);
	void (STDMETHODCALLTYPE * RSGetState) (ID3D11DeviceContext1 * This, ID3D11RasterizerState ** ppRasterizerState);
	void (STDMETHODCALLTYPE * RSGetViewports) (ID3D11DeviceContext1 * This, UINT * pNumViewports, D3D11_VIEWPORT * pViewports);
	void (STDMETHODCALLTYPE * RSGetScissorRects) (ID3D11DeviceContext1 * This, UINT * pNumRects, D3D11_RECT * pRects);
	void (STDMETHODCALLTYPE * HSGetShaderResources) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
	void (STDMETHODCALLTYPE * HSGetShader) (ID3D11DeviceContext1 * This, ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
	void (STDMETHODCALLTYPE * HSGetSamplers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
	void (STDMETHODCALLTYPE * HSGetConstantBuffers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
	void (STDMETHODCALLTYPE * DSGetShaderResources) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
	void (STDMETHODCALLTYPE * DSGetShader) (ID3D11DeviceContext1 * This, ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
	void (STDMETHODCALLTYPE * DSGetSamplers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
	void (STDMETHODCALLTYPE * DSGetConstantBuffers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
	void (STDMETHODCALLTYPE * CSGetShaderResources) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
	void (STDMETHODCALLTYPE * CSGetUnorderedAccessViews) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews);
	void (STDMETHODCALLTYPE * CSGetShader) (ID3D11DeviceContext1 * This, ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
	void (STDMETHODCALLTYPE * CSGetSamplers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
	void (STDMETHODCALLTYPE * CSGetConstantBuffers) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
	void (STDMETHODCALLTYPE * ClearState) (ID3D11DeviceContext1 * This);
	void (STDMETHODCALLTYPE * Flush) (ID3D11DeviceContext1 * This);
	D3D11_DEVICE_CONTEXT_TYPE(STDMETHODCALLTYPE * GetType) (ID3D11DeviceContext1 * This);
	UINT(STDMETHODCALLTYPE * GetContextFlags) (ID3D11DeviceContext1 * This);
	HRESULT(STDMETHODCALLTYPE * FinishCommandList) (ID3D11DeviceContext1 * This, BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList);
	void (STDMETHODCALLTYPE * CopySubresourceRegion1) (ID3D11DeviceContext1 * This, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, UINT CopyFlags);
	void (STDMETHODCALLTYPE * UpdateSubresource1) (ID3D11DeviceContext1 * This, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void *pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, UINT CopyFlags);
	void (STDMETHODCALLTYPE * DiscardResource) (ID3D11DeviceContext1 * This, ID3D11Resource * pResource);
	void (STDMETHODCALLTYPE * DiscardView) (ID3D11DeviceContext1 * This, ID3D11View * pResourceView);
	void (STDMETHODCALLTYPE * VSSetConstantBuffers1) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const *ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
	void (STDMETHODCALLTYPE * HSSetConstantBuffers1) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const *ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
	void (STDMETHODCALLTYPE * DSSetConstantBuffers1) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const *ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
	void (STDMETHODCALLTYPE * GSSetConstantBuffers1) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const *ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
	void (STDMETHODCALLTYPE * PSSetConstantBuffers1) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const *ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
	void (STDMETHODCALLTYPE * CSSetConstantBuffers1) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer * const *ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
	void (STDMETHODCALLTYPE * VSGetConstantBuffers1) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
	void (STDMETHODCALLTYPE * HSGetConstantBuffers1) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
	void (STDMETHODCALLTYPE * DSGetConstantBuffers1) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
	void (STDMETHODCALLTYPE * GSGetConstantBuffers1) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
	void (STDMETHODCALLTYPE * PSGetConstantBuffers1) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
	void (STDMETHODCALLTYPE * CSGetConstantBuffers1) (ID3D11DeviceContext1 * This, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
	void (STDMETHODCALLTYPE * SwapDeviceContextState) (ID3D11DeviceContext1 * This, ID3DDeviceContextState * pState, ID3DDeviceContextState ** ppPreviousState);
	void (STDMETHODCALLTYPE * ClearView) (ID3D11DeviceContext1 * This, ID3D11View * pView, const FLOAT Color[4], const D3D11_RECT * pRect, UINT NumRects);
	void (STDMETHODCALLTYPE * DiscardView1) (ID3D11DeviceContext1 * This, ID3D11View * pResourceView, const D3D11_RECT * pRects, UINT NumRects);
	END_INTERFACE
}  ID3D11DeviceContext1Vtbl;
interface ID3D11DeviceContext1
{
	CONST_VTBL struct ID3D11DeviceContext1Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D11DeviceContext1_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D11DeviceContext1_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ID3D11DeviceContext1_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ID3D11DeviceContext1_GetDevice(This,ppDevice) ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D11DeviceContext1_GetPrivateData(This,guid,pDataSize,pData) ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D11DeviceContext1_SetPrivateData(This,guid,DataSize,pData) ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D11DeviceContext1_SetPrivateDataInterface(This,guid,pData) ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D11DeviceContext1_VSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ( (This)->lpVtbl -> VSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D11DeviceContext1_PSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ( (This)->lpVtbl -> PSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D11DeviceContext1_PSSetShader(This,pPixelShader,ppClassInstances,NumClassInstances) ( (This)->lpVtbl -> PSSetShader(This,pPixelShader,ppClassInstances,NumClassInstances) )
#define ID3D11DeviceContext1_PSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ( (This)->lpVtbl -> PSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D11DeviceContext1_VSSetShader(This,pVertexShader,ppClassInstances,NumClassInstances) ( (This)->lpVtbl -> VSSetShader(This,pVertexShader,ppClassInstances,NumClassInstances) )
#define ID3D11DeviceContext1_DrawIndexed(This,IndexCount,StartIndexLocation,BaseVertexLocation) ( (This)->lpVtbl -> DrawIndexed(This,IndexCount,StartIndexLocation,BaseVertexLocation) )
#define ID3D11DeviceContext1_Draw(This,VertexCount,StartVertexLocation) ( (This)->lpVtbl -> Draw(This,VertexCount,StartVertexLocation) )
#define ID3D11DeviceContext1_Map(This,pResource,Subresource,MapType,MapFlags,pMappedResource) ( (This)->lpVtbl -> Map(This,pResource,Subresource,MapType,MapFlags,pMappedResource) )
#define ID3D11DeviceContext1_Unmap(This,pResource,Subresource) ( (This)->lpVtbl -> Unmap(This,pResource,Subresource) )
#define ID3D11DeviceContext1_PSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ( (This)->lpVtbl -> PSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D11DeviceContext1_IASetInputLayout(This,pInputLayout) ( (This)->lpVtbl -> IASetInputLayout(This,pInputLayout) )
#define ID3D11DeviceContext1_IASetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) ( (This)->lpVtbl -> IASetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) )
#define ID3D11DeviceContext1_IASetIndexBuffer(This,pIndexBuffer,Format,Offset) ( (This)->lpVtbl -> IASetIndexBuffer(This,pIndexBuffer,Format,Offset) )
#define ID3D11DeviceContext1_DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation) ( (This)->lpVtbl -> DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation) )
#define ID3D11DeviceContext1_DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation) ( (This)->lpVtbl -> DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation) )
#define ID3D11DeviceContext1_GSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ( (This)->lpVtbl -> GSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D11DeviceContext1_GSSetShader(This,pShader,ppClassInstances,NumClassInstances) ( (This)->lpVtbl -> GSSetShader(This,pShader,ppClassInstances,NumClassInstances) )
#define ID3D11DeviceContext1_IASetPrimitiveTopology(This,Topology) ( (This)->lpVtbl -> IASetPrimitiveTopology(This,Topology) )
#define ID3D11DeviceContext1_VSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ( (This)->lpVtbl -> VSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D11DeviceContext1_VSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ( (This)->lpVtbl -> VSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D11DeviceContext1_Begin(This,pAsync) ( (This)->lpVtbl -> Begin(This,pAsync) )
#define ID3D11DeviceContext1_End(This,pAsync) ( (This)->lpVtbl -> End(This,pAsync) )
#define ID3D11DeviceContext1_GetData(This,pAsync,pData,DataSize,GetDataFlags) ( (This)->lpVtbl -> GetData(This,pAsync,pData,DataSize,GetDataFlags) )
#define ID3D11DeviceContext1_SetPredication(This,pPredicate,PredicateValue) ( (This)->lpVtbl -> SetPredication(This,pPredicate,PredicateValue) )
#define ID3D11DeviceContext1_GSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ( (This)->lpVtbl -> GSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D11DeviceContext1_GSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ( (This)->lpVtbl -> GSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D11DeviceContext1_OMSetRenderTargets(This,NumViews,ppRenderTargetViews,pDepthStencilView) ( (This)->lpVtbl -> OMSetRenderTargets(This,NumViews,ppRenderTargetViews,pDepthStencilView) )
#define ID3D11DeviceContext1_OMSetRenderTargetsAndUnorderedAccessViews(This,NumRTVs,ppRenderTargetViews,pDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts) ( (This)->lpVtbl -> OMSetRenderTargetsAndUnorderedAccessViews(This,NumRTVs,ppRenderTargetViews,pDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts) )
#define ID3D11DeviceContext1_OMSetBlendState(This,pBlendState,BlendFactor,SampleMask) ( (This)->lpVtbl -> OMSetBlendState(This,pBlendState,BlendFactor,SampleMask) )
#define ID3D11DeviceContext1_OMSetDepthStencilState(This,pDepthStencilState,StencilRef) ( (This)->lpVtbl -> OMSetDepthStencilState(This,pDepthStencilState,StencilRef) )
#define ID3D11DeviceContext1_SOSetTargets(This,NumBuffers,ppSOTargets,pOffsets) ( (This)->lpVtbl -> SOSetTargets(This,NumBuffers,ppSOTargets,pOffsets) )
#define ID3D11DeviceContext1_DrawAuto(This) ( (This)->lpVtbl -> DrawAuto(This) )
#define ID3D11DeviceContext1_DrawIndexedInstancedIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) ( (This)->lpVtbl -> DrawIndexedInstancedIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) )
#define ID3D11DeviceContext1_DrawInstancedIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) ( (This)->lpVtbl -> DrawInstancedIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) )
#define ID3D11DeviceContext1_Dispatch(This,ThreadGroupCountX,ThreadGroupCountY,ThreadGroupCountZ) ( (This)->lpVtbl -> Dispatch(This,ThreadGroupCountX,ThreadGroupCountY,ThreadGroupCountZ) )
#define ID3D11DeviceContext1_DispatchIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) ( (This)->lpVtbl -> DispatchIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) )
#define ID3D11DeviceContext1_RSSetState(This,pRasterizerState) ( (This)->lpVtbl -> RSSetState(This,pRasterizerState) )
#define ID3D11DeviceContext1_RSSetViewports(This,NumViewports,pViewports) ( (This)->lpVtbl -> RSSetViewports(This,NumViewports,pViewports) )
#define ID3D11DeviceContext1_RSSetScissorRects(This,NumRects,pRects) ( (This)->lpVtbl -> RSSetScissorRects(This,NumRects,pRects) )
#define ID3D11DeviceContext1_CopySubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox) ( (This)->lpVtbl -> CopySubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox) )
#define ID3D11DeviceContext1_CopyResource(This,pDstResource,pSrcResource) ( (This)->lpVtbl -> CopyResource(This,pDstResource,pSrcResource) )
#define ID3D11DeviceContext1_UpdateSubresource(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch) ( (This)->lpVtbl -> UpdateSubresource(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch) )
#define ID3D11DeviceContext1_CopyStructureCount(This,pDstBuffer,DstAlignedByteOffset,pSrcView) ( (This)->lpVtbl -> CopyStructureCount(This,pDstBuffer,DstAlignedByteOffset,pSrcView) )
#define ID3D11DeviceContext1_ClearRenderTargetView(This,pRenderTargetView,ColorRGBA) ( (This)->lpVtbl -> ClearRenderTargetView(This,pRenderTargetView,ColorRGBA) )
#define ID3D11DeviceContext1_ClearUnorderedAccessViewUint(This,pUnorderedAccessView,Values) ( (This)->lpVtbl -> ClearUnorderedAccessViewUint(This,pUnorderedAccessView,Values) )
#define ID3D11DeviceContext1_ClearUnorderedAccessViewFloat(This,pUnorderedAccessView,Values) ( (This)->lpVtbl -> ClearUnorderedAccessViewFloat(This,pUnorderedAccessView,Values) )
#define ID3D11DeviceContext1_ClearDepthStencilView(This,pDepthStencilView,ClearFlags,Depth,Stencil) ( (This)->lpVtbl -> ClearDepthStencilView(This,pDepthStencilView,ClearFlags,Depth,Stencil) )
#define ID3D11DeviceContext1_GenerateMips(This,pShaderResourceView) ( (This)->lpVtbl -> GenerateMips(This,pShaderResourceView) )
#define ID3D11DeviceContext1_SetResourceMinLOD(This,pResource,MinLOD) ( (This)->lpVtbl -> SetResourceMinLOD(This,pResource,MinLOD) )
#define ID3D11DeviceContext1_GetResourceMinLOD(This,pResource) ( (This)->lpVtbl -> GetResourceMinLOD(This,pResource) )
#define ID3D11DeviceContext1_ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) ( (This)->lpVtbl -> ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) )
#define ID3D11DeviceContext1_ExecuteCommandList(This,pCommandList,RestoreContextState) ( (This)->lpVtbl -> ExecuteCommandList(This,pCommandList,RestoreContextState) )
#define ID3D11DeviceContext1_HSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ( (This)->lpVtbl -> HSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D11DeviceContext1_HSSetShader(This,pHullShader,ppClassInstances,NumClassInstances) ( (This)->lpVtbl -> HSSetShader(This,pHullShader,ppClassInstances,NumClassInstances) )
#define ID3D11DeviceContext1_HSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ( (This)->lpVtbl -> HSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D11DeviceContext1_HSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ( (This)->lpVtbl -> HSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D11DeviceContext1_DSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ( (This)->lpVtbl -> DSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D11DeviceContext1_DSSetShader(This,pDomainShader,ppClassInstances,NumClassInstances) ( (This)->lpVtbl -> DSSetShader(This,pDomainShader,ppClassInstances,NumClassInstances) )
#define ID3D11DeviceContext1_DSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ( (This)->lpVtbl -> DSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D11DeviceContext1_DSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ( (This)->lpVtbl -> DSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D11DeviceContext1_CSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ( (This)->lpVtbl -> CSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D11DeviceContext1_CSSetUnorderedAccessViews(This,StartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts) ( (This)->lpVtbl -> CSSetUnorderedAccessViews(This,StartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts) )
#define ID3D11DeviceContext1_CSSetShader(This,pComputeShader,ppClassInstances,NumClassInstances) ( (This)->lpVtbl -> CSSetShader(This,pComputeShader,ppClassInstances,NumClassInstances) )
#define ID3D11DeviceContext1_CSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ( (This)->lpVtbl -> CSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D11DeviceContext1_CSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ( (This)->lpVtbl -> CSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D11DeviceContext1_VSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ( (This)->lpVtbl -> VSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D11DeviceContext1_PSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ( (This)->lpVtbl -> PSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D11DeviceContext1_PSGetShader(This,ppPixelShader,ppClassInstances,pNumClassInstances) ( (This)->lpVtbl -> PSGetShader(This,ppPixelShader,ppClassInstances,pNumClassInstances) )
#define ID3D11DeviceContext1_PSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ( (This)->lpVtbl -> PSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D11DeviceContext1_VSGetShader(This,ppVertexShader,ppClassInstances,pNumClassInstances) ( (This)->lpVtbl -> VSGetShader(This,ppVertexShader,ppClassInstances,pNumClassInstances) )
#define ID3D11DeviceContext1_PSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ( (This)->lpVtbl -> PSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D11DeviceContext1_IAGetInputLayout(This,ppInputLayout) ( (This)->lpVtbl -> IAGetInputLayout(This,ppInputLayout) )
#define ID3D11DeviceContext1_IAGetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) ( (This)->lpVtbl -> IAGetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) )
#define ID3D11DeviceContext1_IAGetIndexBuffer(This,pIndexBuffer,Format,Offset) ( (This)->lpVtbl -> IAGetIndexBuffer(This,pIndexBuffer,Format,Offset) )
#define ID3D11DeviceContext1_GSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ( (This)->lpVtbl -> GSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D11DeviceContext1_GSGetShader(This,ppGeometryShader,ppClassInstances,pNumClassInstances) ( (This)->lpVtbl -> GSGetShader(This,ppGeometryShader,ppClassInstances,pNumClassInstances) )
#define ID3D11DeviceContext1_IAGetPrimitiveTopology(This,pTopology) ( (This)->lpVtbl -> IAGetPrimitiveTopology(This,pTopology) )
#define ID3D11DeviceContext1_VSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ( (This)->lpVtbl -> VSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D11DeviceContext1_VSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ( (This)->lpVtbl -> VSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D11DeviceContext1_GetPredication(This,ppPredicate,pPredicateValue) ( (This)->lpVtbl -> GetPredication(This,ppPredicate,pPredicateValue) )
#define ID3D11DeviceContext1_GSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ( (This)->lpVtbl -> GSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D11DeviceContext1_GSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ( (This)->lpVtbl -> GSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D11DeviceContext1_OMGetRenderTargets(This,NumViews,ppRenderTargetViews,ppDepthStencilView) ( (This)->lpVtbl -> OMGetRenderTargets(This,NumViews,ppRenderTargetViews,ppDepthStencilView) )
#define ID3D11DeviceContext1_OMGetRenderTargetsAndUnorderedAccessViews(This,NumRTVs,ppRenderTargetViews,ppDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews) ( (This)->lpVtbl -> OMGetRenderTargetsAndUnorderedAccessViews(This,NumRTVs,ppRenderTargetViews,ppDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews) )
#define ID3D11DeviceContext1_OMGetBlendState(This,ppBlendState,BlendFactor,pSampleMask) ( (This)->lpVtbl -> OMGetBlendState(This,ppBlendState,BlendFactor,pSampleMask) )
#define ID3D11DeviceContext1_OMGetDepthStencilState(This,ppDepthStencilState,pStencilRef) ( (This)->lpVtbl -> OMGetDepthStencilState(This,ppDepthStencilState,pStencilRef) )
#define ID3D11DeviceContext1_SOGetTargets(This,NumBuffers,ppSOTargets) ( (This)->lpVtbl -> SOGetTargets(This,NumBuffers,ppSOTargets) )
#define ID3D11DeviceContext1_RSGetState(This,ppRasterizerState) ( (This)->lpVtbl -> RSGetState(This,ppRasterizerState) )
#define ID3D11DeviceContext1_RSGetViewports(This,pNumViewports,pViewports) ( (This)->lpVtbl -> RSGetViewports(This,pNumViewports,pViewports) )
#define ID3D11DeviceContext1_RSGetScissorRects(This,pNumRects,pRects) ( (This)->lpVtbl -> RSGetScissorRects(This,pNumRects,pRects) )
#define ID3D11DeviceContext1_HSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ( (This)->lpVtbl -> HSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D11DeviceContext1_HSGetShader(This,ppHullShader,ppClassInstances,pNumClassInstances) ( (This)->lpVtbl -> HSGetShader(This,ppHullShader,ppClassInstances,pNumClassInstances) )
#define ID3D11DeviceContext1_HSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ( (This)->lpVtbl -> HSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D11DeviceContext1_HSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ( (This)->lpVtbl -> HSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D11DeviceContext1_DSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ( (This)->lpVtbl -> DSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D11DeviceContext1_DSGetShader(This,ppDomainShader,ppClassInstances,pNumClassInstances) ( (This)->lpVtbl -> DSGetShader(This,ppDomainShader,ppClassInstances,pNumClassInstances) )
#define ID3D11DeviceContext1_DSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ( (This)->lpVtbl -> DSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D11DeviceContext1_DSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ( (This)->lpVtbl -> DSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D11DeviceContext1_CSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ( (This)->lpVtbl -> CSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D11DeviceContext1_CSGetUnorderedAccessViews(This,StartSlot,NumUAVs,ppUnorderedAccessViews) ( (This)->lpVtbl -> CSGetUnorderedAccessViews(This,StartSlot,NumUAVs,ppUnorderedAccessViews) )
#define ID3D11DeviceContext1_CSGetShader(This,ppComputeShader,ppClassInstances,pNumClassInstances) ( (This)->lpVtbl -> CSGetShader(This,ppComputeShader,ppClassInstances,pNumClassInstances) )
#define ID3D11DeviceContext1_CSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ( (This)->lpVtbl -> CSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D11DeviceContext1_CSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ( (This)->lpVtbl -> CSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D11DeviceContext1_ClearState(This) ( (This)->lpVtbl -> ClearState(This) )
#define ID3D11DeviceContext1_Flush(This) ( (This)->lpVtbl -> Flush(This) )
#define ID3D11DeviceContext1_GetType(This) ( (This)->lpVtbl -> GetType(This) )
#define ID3D11DeviceContext1_GetContextFlags(This) ( (This)->lpVtbl -> GetContextFlags(This) )
#define ID3D11DeviceContext1_FinishCommandList(This,RestoreDeferredContextState,ppCommandList) ( (This)->lpVtbl -> FinishCommandList(This,RestoreDeferredContextState,ppCommandList) )
#define ID3D11DeviceContext1_CopySubresourceRegion1(This,pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox,CopyFlags) ( (This)->lpVtbl -> CopySubresourceRegion1(This,pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox,CopyFlags) )
#define ID3D11DeviceContext1_UpdateSubresource1(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch,CopyFlags) ( (This)->lpVtbl -> UpdateSubresource1(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch,CopyFlags) )
#define ID3D11DeviceContext1_DiscardResource(This,pResource) ( (This)->lpVtbl -> DiscardResource(This,pResource) )
#define ID3D11DeviceContext1_DiscardView(This,pResourceView) ( (This)->lpVtbl -> DiscardView(This,pResourceView) )
#define ID3D11DeviceContext1_VSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) ( (This)->lpVtbl -> VSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
#define ID3D11DeviceContext1_HSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) ( (This)->lpVtbl -> HSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
#define ID3D11DeviceContext1_DSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) ( (This)->lpVtbl -> DSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
#define ID3D11DeviceContext1_GSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) ( (This)->lpVtbl -> GSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
#define ID3D11DeviceContext1_PSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) ( (This)->lpVtbl -> PSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
#define ID3D11DeviceContext1_CSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) ( (This)->lpVtbl -> CSSetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
#define ID3D11DeviceContext1_VSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) ( (This)->lpVtbl -> VSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
#define ID3D11DeviceContext1_HSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) ( (This)->lpVtbl -> HSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
#define ID3D11DeviceContext1_DSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) ( (This)->lpVtbl -> DSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
#define ID3D11DeviceContext1_GSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) ( (This)->lpVtbl -> GSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
#define ID3D11DeviceContext1_PSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) ( (This)->lpVtbl -> PSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
#define ID3D11DeviceContext1_CSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) ( (This)->lpVtbl -> CSGetConstantBuffers1(This,StartSlot,NumBuffers,ppConstantBuffers,pFirstConstant,pNumConstants) )
#define ID3D11DeviceContext1_SwapDeviceContextState(This,pState,ppPreviousState) ( (This)->lpVtbl -> SwapDeviceContextState(This,pState,ppPreviousState) )
#define ID3D11DeviceContext1_ClearView(This,pView,Color,pRect,NumRects) ( (This)->lpVtbl -> ClearView(This,pView,Color,pRect,NumRects) )
#define ID3D11DeviceContext1_DiscardView1(This,pResourceView,pRects,NumRects) ( (This)->lpVtbl -> DiscardView1(This,pResourceView,pRects,NumRects) )
#endif
#endif
#ifndef __ID3D11Device1_INTERFACE_DEFINED__
#define __ID3D11Device1_INTERFACE_DEFINED__
extern const IID IID_ID3D11Device1;
typedef struct ID3D11Device1Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3D11Device1 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ID3D11Device1 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ID3D11Device1 * This);
	HRESULT(STDMETHODCALLTYPE * CreateBuffer) (ID3D11Device1 * This, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer);
	HRESULT(STDMETHODCALLTYPE * CreateTexture1D) (ID3D11Device1 * This, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA *pInitialData, ID3D11Texture1D ** ppTexture1D);
	HRESULT(STDMETHODCALLTYPE * CreateTexture2D) (ID3D11Device1 * This, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA *pInitialData, ID3D11Texture2D ** ppTexture2D);
	HRESULT(STDMETHODCALLTYPE * CreateTexture3D) (ID3D11Device1 * This, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA *pInitialData, ID3D11Texture3D ** ppTexture3D);
	HRESULT(STDMETHODCALLTYPE * CreateShaderResourceView) (ID3D11Device1 * This, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView);
	HRESULT(STDMETHODCALLTYPE * CreateUnorderedAccessView) (ID3D11Device1 * This, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView);
	HRESULT(STDMETHODCALLTYPE * CreateRenderTargetView) (ID3D11Device1 * This, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView);
	HRESULT(STDMETHODCALLTYPE * CreateDepthStencilView) (ID3D11Device1 * This, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView);
	HRESULT(STDMETHODCALLTYPE * CreateInputLayout) (ID3D11Device1 * This, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void *pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout);
	HRESULT(STDMETHODCALLTYPE * CreateVertexShader) (ID3D11Device1 * This, const void *pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader);
	HRESULT(STDMETHODCALLTYPE * CreateGeometryShader) (ID3D11Device1 * This, const void *pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader);
	HRESULT(STDMETHODCALLTYPE * CreateGeometryShaderWithStreamOutput) (ID3D11Device1 * This, const void *pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader);
	HRESULT(STDMETHODCALLTYPE * CreatePixelShader) (ID3D11Device1 * This, const void *pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader);
	HRESULT(STDMETHODCALLTYPE * CreateHullShader) (ID3D11Device1 * This, const void *pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader);
	HRESULT(STDMETHODCALLTYPE * CreateDomainShader) (ID3D11Device1 * This, const void *pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader);
	HRESULT(STDMETHODCALLTYPE * CreateComputeShader) (ID3D11Device1 * This, const void *pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader);
	HRESULT(STDMETHODCALLTYPE * CreateClassLinkage) (ID3D11Device1 * This, ID3D11ClassLinkage ** ppLinkage);
	HRESULT(STDMETHODCALLTYPE * CreateBlendState) (ID3D11Device1 * This, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState);
	HRESULT(STDMETHODCALLTYPE * CreateDepthStencilState) (ID3D11Device1 * This, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState);
	HRESULT(STDMETHODCALLTYPE * CreateRasterizerState) (ID3D11Device1 * This, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState);
	HRESULT(STDMETHODCALLTYPE * CreateSamplerState) (ID3D11Device1 * This, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState);
	HRESULT(STDMETHODCALLTYPE * CreateQuery) (ID3D11Device1 * This, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery);
	HRESULT(STDMETHODCALLTYPE * CreatePredicate) (ID3D11Device1 * This, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate);
	HRESULT(STDMETHODCALLTYPE * CreateCounter) (ID3D11Device1 * This, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter);
	HRESULT(STDMETHODCALLTYPE * CreateDeferredContext) (ID3D11Device1 * This, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext);
	HRESULT(STDMETHODCALLTYPE * OpenSharedResource) (ID3D11Device1 * This, HANDLE hResource, REFIID ReturnedInterface, void **ppResource);
	HRESULT(STDMETHODCALLTYPE * CheckFormatSupport) (ID3D11Device1 * This, DXGI_FORMAT Format, UINT * pFormatSupport);
	HRESULT(STDMETHODCALLTYPE * CheckMultisampleQualityLevels) (ID3D11Device1 * This, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels);
	void (STDMETHODCALLTYPE * CheckCounterInfo) (ID3D11Device1 * This, D3D11_COUNTER_INFO * pCounterInfo);
	HRESULT(STDMETHODCALLTYPE * CheckCounter) (ID3D11Device1 * This, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength);
	HRESULT(STDMETHODCALLTYPE * CheckFeatureSupport) (ID3D11Device1 * This, D3D11_FEATURE Feature, void *pFeatureSupportData, UINT FeatureSupportDataSize);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (ID3D11Device1 * This, REFGUID guid, UINT * pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateData) (ID3D11Device1 * This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateDataInterface) (ID3D11Device1 * This, REFGUID guid, const IUnknown * pData);
	D3D_FEATURE_LEVEL(STDMETHODCALLTYPE * GetFeatureLevel) (ID3D11Device1 * This);
	UINT(STDMETHODCALLTYPE * GetCreationFlags) (ID3D11Device1 * This);
	HRESULT(STDMETHODCALLTYPE * GetDeviceRemovedReason) (ID3D11Device1 * This);
	void (STDMETHODCALLTYPE * GetImmediateContext) (ID3D11Device1 * This, ID3D11DeviceContext ** ppImmediateContext);
	HRESULT(STDMETHODCALLTYPE * SetExceptionMode) (ID3D11Device1 * This, UINT RaiseFlags);
	UINT(STDMETHODCALLTYPE * GetExceptionMode) (ID3D11Device1 * This);
	void (STDMETHODCALLTYPE * GetImmediateContext1) (ID3D11Device1 * This, ID3D11DeviceContext1 ** ppImmediateContext);
	HRESULT(STDMETHODCALLTYPE * CreateDeferredContext1) (ID3D11Device1 * This, UINT ContextFlags, ID3D11DeviceContext1 ** ppDeferredContext);
	HRESULT(STDMETHODCALLTYPE * CreateBlendState1) (ID3D11Device1 * This, const D3D11_BLEND_DESC1 * pBlendStateDesc, ID3D11BlendState1 ** ppBlendState);
	HRESULT(STDMETHODCALLTYPE * CreateRasterizerState1) (ID3D11Device1 * This, const D3D11_RASTERIZER_DESC1 * pRasterizerDesc, ID3D11RasterizerState1 ** ppRasterizerState);
	HRESULT(STDMETHODCALLTYPE * CreateDeviceContextState) (ID3D11Device1 * This, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, REFIID EmulatedInterface, D3D_FEATURE_LEVEL * pChosenFeatureLevel, ID3DDeviceContextState ** ppContextState);
	HRESULT(STDMETHODCALLTYPE * OpenSharedResource1) (ID3D11Device1 * This, HANDLE hResource, REFIID returnedInterface, void **ppResource);
	HRESULT(STDMETHODCALLTYPE * OpenSharedResourceByName) (ID3D11Device1 * This, LPCWSTR lpName, DWORD dwDesiredAccess, REFIID returnedInterface, void **ppResource);
	END_INTERFACE
}  ID3D11Device1Vtbl;
interface ID3D11Device1
{
	CONST_VTBL struct ID3D11Device1Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D11Device1_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D11Device1_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ID3D11Device1_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ID3D11Device1_CreateBuffer(This,pDesc,pInitialData,ppBuffer) ( (This)->lpVtbl -> CreateBuffer(This,pDesc,pInitialData,ppBuffer) )
#define ID3D11Device1_CreateTexture1D(This,pDesc,pInitialData,ppTexture1D) ( (This)->lpVtbl -> CreateTexture1D(This,pDesc,pInitialData,ppTexture1D) )
#define ID3D11Device1_CreateTexture2D(This,pDesc,pInitialData,ppTexture2D) ( (This)->lpVtbl -> CreateTexture2D(This,pDesc,pInitialData,ppTexture2D) )
#define ID3D11Device1_CreateTexture3D(This,pDesc,pInitialData,ppTexture3D) ( (This)->lpVtbl -> CreateTexture3D(This,pDesc,pInitialData,ppTexture3D) )
#define ID3D11Device1_CreateShaderResourceView(This,pResource,pDesc,ppSRView) ( (This)->lpVtbl -> CreateShaderResourceView(This,pResource,pDesc,ppSRView) )
#define ID3D11Device1_CreateUnorderedAccessView(This,pResource,pDesc,ppUAView) ( (This)->lpVtbl -> CreateUnorderedAccessView(This,pResource,pDesc,ppUAView) )
#define ID3D11Device1_CreateRenderTargetView(This,pResource,pDesc,ppRTView) ( (This)->lpVtbl -> CreateRenderTargetView(This,pResource,pDesc,ppRTView) )
#define ID3D11Device1_CreateDepthStencilView(This,pResource,pDesc,ppDepthStencilView) ( (This)->lpVtbl -> CreateDepthStencilView(This,pResource,pDesc,ppDepthStencilView) )
#define ID3D11Device1_CreateInputLayout(This,pInputElementDescs,NumElements,pShaderBytecodeWithInputSignature,BytecodeLength,ppInputLayout) ( (This)->lpVtbl -> CreateInputLayout(This,pInputElementDescs,NumElements,pShaderBytecodeWithInputSignature,BytecodeLength,ppInputLayout) )
#define ID3D11Device1_CreateVertexShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppVertexShader) ( (This)->lpVtbl -> CreateVertexShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppVertexShader) )
#define ID3D11Device1_CreateGeometryShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppGeometryShader) ( (This)->lpVtbl -> CreateGeometryShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppGeometryShader) )
#define ID3D11Device1_CreateGeometryShaderWithStreamOutput(This,pShaderBytecode,BytecodeLength,pSODeclaration,NumEntries,pBufferStrides,NumStrides,RasterizedStream,pClassLinkage,ppGeometryShader) ( (This)->lpVtbl -> CreateGeometryShaderWithStreamOutput(This,pShaderBytecode,BytecodeLength,pSODeclaration,NumEntries,pBufferStrides,NumStrides,RasterizedStream,pClassLinkage,ppGeometryShader) )
#define ID3D11Device1_CreatePixelShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppPixelShader) ( (This)->lpVtbl -> CreatePixelShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppPixelShader) )
#define ID3D11Device1_CreateHullShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppHullShader) ( (This)->lpVtbl -> CreateHullShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppHullShader) )
#define ID3D11Device1_CreateDomainShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppDomainShader) ( (This)->lpVtbl -> CreateDomainShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppDomainShader) )
#define ID3D11Device1_CreateComputeShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppComputeShader) ( (This)->lpVtbl -> CreateComputeShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppComputeShader) )
#define ID3D11Device1_CreateClassLinkage(This,ppLinkage) ( (This)->lpVtbl -> CreateClassLinkage(This,ppLinkage) )
#define ID3D11Device1_CreateBlendState(This,pBlendStateDesc,ppBlendState) ( (This)->lpVtbl -> CreateBlendState(This,pBlendStateDesc,ppBlendState) )
#define ID3D11Device1_CreateDepthStencilState(This,pDepthStencilDesc,ppDepthStencilState) ( (This)->lpVtbl -> CreateDepthStencilState(This,pDepthStencilDesc,ppDepthStencilState) )
#define ID3D11Device1_CreateRasterizerState(This,pRasterizerDesc,ppRasterizerState) ( (This)->lpVtbl -> CreateRasterizerState(This,pRasterizerDesc,ppRasterizerState) )
#define ID3D11Device1_CreateSamplerState(This,pSamplerDesc,ppSamplerState) ( (This)->lpVtbl -> CreateSamplerState(This,pSamplerDesc,ppSamplerState) )
#define ID3D11Device1_CreateQuery(This,pQueryDesc,ppQuery) ( (This)->lpVtbl -> CreateQuery(This,pQueryDesc,ppQuery) )
#define ID3D11Device1_CreatePredicate(This,pPredicateDesc,ppPredicate) ( (This)->lpVtbl -> CreatePredicate(This,pPredicateDesc,ppPredicate) )
#define ID3D11Device1_CreateCounter(This,pCounterDesc,ppCounter) ( (This)->lpVtbl -> CreateCounter(This,pCounterDesc,ppCounter) )
#define ID3D11Device1_CreateDeferredContext(This,ContextFlags,ppDeferredContext) ( (This)->lpVtbl -> CreateDeferredContext(This,ContextFlags,ppDeferredContext) )
#define ID3D11Device1_OpenSharedResource(This,hResource,ReturnedInterface,ppResource) ( (This)->lpVtbl -> OpenSharedResource(This,hResource,ReturnedInterface,ppResource) )
#define ID3D11Device1_CheckFormatSupport(This,Format,pFormatSupport) ( (This)->lpVtbl -> CheckFormatSupport(This,Format,pFormatSupport) )
#define ID3D11Device1_CheckMultisampleQualityLevels(This,Format,SampleCount,pNumQualityLevels) ( (This)->lpVtbl -> CheckMultisampleQualityLevels(This,Format,SampleCount,pNumQualityLevels) )
#define ID3D11Device1_CheckCounterInfo(This,pCounterInfo) ( (This)->lpVtbl -> CheckCounterInfo(This,pCounterInfo) )
#define ID3D11Device1_CheckCounter(This,pDesc,pType,pActiveCounters,szName,pNameLength,szUnits,pUnitsLength,szDescription,pDescriptionLength) ( (This)->lpVtbl -> CheckCounter(This,pDesc,pType,pActiveCounters,szName,pNameLength,szUnits,pUnitsLength,szDescription,pDescriptionLength) )
#define ID3D11Device1_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) ( (This)->lpVtbl -> CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) )
#define ID3D11Device1_GetPrivateData(This,guid,pDataSize,pData) ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D11Device1_SetPrivateData(This,guid,DataSize,pData) ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D11Device1_SetPrivateDataInterface(This,guid,pData) ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D11Device1_GetFeatureLevel(This) ( (This)->lpVtbl -> GetFeatureLevel(This) )
#define ID3D11Device1_GetCreationFlags(This) ( (This)->lpVtbl -> GetCreationFlags(This) )
#define ID3D11Device1_GetDeviceRemovedReason(This) ( (This)->lpVtbl -> GetDeviceRemovedReason(This) )
#define ID3D11Device1_GetImmediateContext(This,ppImmediateContext) ( (This)->lpVtbl -> GetImmediateContext(This,ppImmediateContext) )
#define ID3D11Device1_SetExceptionMode(This,RaiseFlags) ( (This)->lpVtbl -> SetExceptionMode(This,RaiseFlags) )
#define ID3D11Device1_GetExceptionMode(This) ( (This)->lpVtbl -> GetExceptionMode(This) )
#define ID3D11Device1_GetImmediateContext1(This,ppImmediateContext) ( (This)->lpVtbl -> GetImmediateContext1(This,ppImmediateContext) )
#define ID3D11Device1_CreateDeferredContext1(This,ContextFlags,ppDeferredContext) ( (This)->lpVtbl -> CreateDeferredContext1(This,ContextFlags,ppDeferredContext) )
#define ID3D11Device1_CreateBlendState1(This,pBlendStateDesc,ppBlendState) ( (This)->lpVtbl -> CreateBlendState1(This,pBlendStateDesc,ppBlendState) )
#define ID3D11Device1_CreateRasterizerState1(This,pRasterizerDesc,ppRasterizerState) ( (This)->lpVtbl -> CreateRasterizerState1(This,pRasterizerDesc,ppRasterizerState) )
#define ID3D11Device1_CreateDeviceContextState(This,Flags,pFeatureLevels,FeatureLevels,SDKVersion,EmulatedInterface,pChosenFeatureLevel,ppContextState) ( (This)->lpVtbl -> CreateDeviceContextState(This,Flags,pFeatureLevels,FeatureLevels,SDKVersion,EmulatedInterface,pChosenFeatureLevel,ppContextState) )
#define ID3D11Device1_OpenSharedResource1(This,hResource,returnedInterface,ppResource) ( (This)->lpVtbl -> OpenSharedResource1(This,hResource,returnedInterface,ppResource) )
#define ID3D11Device1_OpenSharedResourceByName(This,lpName,dwDesiredAccess,returnedInterface,ppResource) ( (This)->lpVtbl -> OpenSharedResourceByName(This,lpName,dwDesiredAccess,returnedInterface,ppResource) )
#endif
#endif
#ifndef __ID3DUserDefinedAnnotation_INTERFACE_DEFINED__
#define __ID3DUserDefinedAnnotation_INTERFACE_DEFINED__
extern const IID IID_ID3DUserDefinedAnnotation;
typedef struct ID3DUserDefinedAnnotationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3DUserDefinedAnnotation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ID3DUserDefinedAnnotation * This);
	ULONG(STDMETHODCALLTYPE * Release) (ID3DUserDefinedAnnotation * This);
	INT(STDMETHODCALLTYPE * BeginEvent) (ID3DUserDefinedAnnotation * This, LPCWSTR Name);
	INT(STDMETHODCALLTYPE * EndEvent) (ID3DUserDefinedAnnotation * This);
	void (STDMETHODCALLTYPE * SetMarker) (ID3DUserDefinedAnnotation * This, LPCWSTR Name);
	BOOL(STDMETHODCALLTYPE * GetStatus) (ID3DUserDefinedAnnotation * This);
	END_INTERFACE
}  ID3DUserDefinedAnnotationVtbl;
interface ID3DUserDefinedAnnotation
{
	CONST_VTBL struct ID3DUserDefinedAnnotationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3DUserDefinedAnnotation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3DUserDefinedAnnotation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ID3DUserDefinedAnnotation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ID3DUserDefinedAnnotation_BeginEvent(This,Name) ( (This)->lpVtbl -> BeginEvent(This,Name) )
#define ID3DUserDefinedAnnotation_EndEvent(This) ( (This)->lpVtbl -> EndEvent(This) )
#define ID3DUserDefinedAnnotation_SetMarker(This,Name) ( (This)->lpVtbl -> SetMarker(This,Name) )
#define ID3DUserDefinedAnnotation_GetStatus(This) ( (This)->lpVtbl -> GetStatus(This) )
#endif
#endif
DEFINE_GUID(IID_ID3D11BlendState1, 0xcc86fabe, 0xda55, 0x401d, 0x85, 0xe7, 0xe3, 0xc9, 0xde, 0x28, 0x77, 0xe9);
DEFINE_GUID(IID_ID3D11RasterizerState1, 0x1217d7a6, 0x5039, 0x418c, 0xb0, 0x42, 0x9c, 0xbe, 0x25, 0x6a, 0xfd, 0x6e);
DEFINE_GUID(IID_ID3DDeviceContextState, 0x5c1e0d8a, 0x7c23, 0x48f9, 0x8c, 0x59, 0xa9, 0x29, 0x58, 0xce, 0xff, 0x11);
DEFINE_GUID(IID_ID3D11DeviceContext1, 0xbb2c6faa, 0xb5fb, 0x4082, 0x8e, 0x6b, 0x38, 0x8b, 0x8c, 0xfa, 0x90, 0xe1);
DEFINE_GUID(IID_ID3D11Device1, 0xa04bfb29, 0x08ef, 0x43d6, 0xa4, 0x9c, 0xa9, 0xbd, 0xbd, 0xcb, 0xe6, 0x86);
DEFINE_GUID(IID_ID3DUserDefinedAnnotation, 0xb2daad8b, 0x03d4, 0x4dbf, 0x95, 0xeb, 0x32, 0xab, 0x4b, 0x63, 0xd0, 0xab);
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d11_1_0000_0006_v0_0_s_ifspec;
#endif
