/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3d10.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jun  3 17:37:23 2016
 \date		Modified on Fri Jun  3 17:37:23 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef __d3d10_h__
#define __d3d10_h__
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
#endif // __RPCNDR_H_VERSION__
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __ID3D10DeviceChild_FWD_DEFINED__
#define __ID3D10DeviceChild_FWD_DEFINED__
typedef interface ID3D10DeviceChild ID3D10DeviceChild;
#endif
#ifndef __ID3D10DepthStencilState_FWD_DEFINED__
#define __ID3D10DepthStencilState_FWD_DEFINED__
typedef interface ID3D10DepthStencilState ID3D10DepthStencilState;
#endif
#ifndef __ID3D10BlendState_FWD_DEFINED__
#define __ID3D10BlendState_FWD_DEFINED__
typedef interface ID3D10BlendState ID3D10BlendState;
#endif
#ifndef __ID3D10RasterizerState_FWD_DEFINED__
#define __ID3D10RasterizerState_FWD_DEFINED__
typedef interface ID3D10RasterizerState ID3D10RasterizerState;
#endif
#ifndef __ID3D10Resource_FWD_DEFINED__
#define __ID3D10Resource_FWD_DEFINED__
typedef interface ID3D10Resource ID3D10Resource;
#endif
#ifndef __ID3D10Buffer_FWD_DEFINED__
#define __ID3D10Buffer_FWD_DEFINED__
typedef interface ID3D10Buffer ID3D10Buffer;
#endif
#ifndef __ID3D10Texture1D_FWD_DEFINED__
#define __ID3D10Texture1D_FWD_DEFINED__
typedef interface ID3D10Texture1D ID3D10Texture1D;
#endif
#ifndef __ID3D10Texture2D_FWD_DEFINED__
#define __ID3D10Texture2D_FWD_DEFINED__
typedef interface ID3D10Texture2D ID3D10Texture2D;
#endif
#ifndef __ID3D10Texture3D_FWD_DEFINED__
#define __ID3D10Texture3D_FWD_DEFINED__
typedef interface ID3D10Texture3D ID3D10Texture3D;
#endif
#ifndef __ID3D10View_FWD_DEFINED__
#define __ID3D10View_FWD_DEFINED__
typedef interface ID3D10View ID3D10View;
#endif
#ifndef __ID3D10ShaderResourceView_FWD_DEFINED__
#define __ID3D10ShaderResourceView_FWD_DEFINED__
typedef interface ID3D10ShaderResourceView ID3D10ShaderResourceView;
#endif
#ifndef __ID3D10RenderTargetView_FWD_DEFINED__
#define __ID3D10RenderTargetView_FWD_DEFINED__
typedef interface ID3D10RenderTargetView ID3D10RenderTargetView;
#endif
#ifndef __ID3D10DepthStencilView_FWD_DEFINED__
#define __ID3D10DepthStencilView_FWD_DEFINED__
typedef interface ID3D10DepthStencilView ID3D10DepthStencilView;
#endif
#ifndef __ID3D10VertexShader_FWD_DEFINED__
#define __ID3D10VertexShader_FWD_DEFINED__
typedef interface ID3D10VertexShader ID3D10VertexShader;
#endif
#ifndef __ID3D10GeometryShader_FWD_DEFINED__
#define __ID3D10GeometryShader_FWD_DEFINED__
typedef interface ID3D10GeometryShader ID3D10GeometryShader;
#endif
#ifndef __ID3D10PixelShader_FWD_DEFINED__
#define __ID3D10PixelShader_FWD_DEFINED__
typedef interface ID3D10PixelShader ID3D10PixelShader;
#endif
#ifndef __ID3D10InputLayout_FWD_DEFINED__
#define __ID3D10InputLayout_FWD_DEFINED__
typedef interface ID3D10InputLayout ID3D10InputLayout;
#endif
#ifndef __ID3D10SamplerState_FWD_DEFINED__
#define __ID3D10SamplerState_FWD_DEFINED__
typedef interface ID3D10SamplerState ID3D10SamplerState;
#endif
#ifndef __ID3D10Asynchronous_FWD_DEFINED__
#define __ID3D10Asynchronous_FWD_DEFINED__
typedef interface ID3D10Asynchronous ID3D10Asynchronous;
#endif
#ifndef __ID3D10Query_FWD_DEFINED__
#define __ID3D10Query_FWD_DEFINED__
typedef interface ID3D10Query ID3D10Query;
#endif
#ifndef __ID3D10Predicate_FWD_DEFINED__
#define __ID3D10Predicate_FWD_DEFINED__
typedef interface ID3D10Predicate ID3D10Predicate;
#endif
#ifndef __ID3D10Counter_FWD_DEFINED__
#define __ID3D10Counter_FWD_DEFINED__
typedef interface ID3D10Counter ID3D10Counter;
#endif
#ifndef __ID3D10Device_FWD_DEFINED__
#define __ID3D10Device_FWD_DEFINED__
typedef interface ID3D10Device ID3D10Device;
#endif
#ifndef __ID3D10Multithread_FWD_DEFINED__
#define __ID3D10Multithread_FWD_DEFINED__
typedef interface ID3D10Multithread ID3D10Multithread;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "dxgi.h"
#ifndef _D3D10_CONSTANTS
#define _D3D10_CONSTANTS
#define	D3D10_16BIT_INDEX_STRIP_CUT_VALUE	( 0xffff )
#define	D3D10_32BIT_INDEX_STRIP_CUT_VALUE	( 0xffffffff )
#define	D3D10_8BIT_INDEX_STRIP_CUT_VALUE	( 0xff )
#define	D3D10_ARRAY_AXIS_ADDRESS_RANGE_BIT_COUNT	( 9 )
#define	D3D10_CLIP_OR_CULL_DISTANCE_COUNT	( 8 )
#define	D3D10_CLIP_OR_CULL_DISTANCE_ELEMENT_COUNT	( 2 )
#define	D3D10_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT	( 14 )
#define	D3D10_COMMONSHADER_CONSTANT_BUFFER_COMPONENTS	( 4 )
#define	D3D10_COMMONSHADER_CONSTANT_BUFFER_COMPONENT_BIT_COUNT	( 32 )
#define	D3D10_COMMONSHADER_CONSTANT_BUFFER_HW_SLOT_COUNT	( 15 )
#define	D3D10_COMMONSHADER_CONSTANT_BUFFER_REGISTER_COMPONENTS	( 4 )
#define	D3D10_COMMONSHADER_CONSTANT_BUFFER_REGISTER_COUNT	( 15 )
#define	D3D10_COMMONSHADER_CONSTANT_BUFFER_REGISTER_READS_PER_INST	( 1 )
#define	D3D10_COMMONSHADER_CONSTANT_BUFFER_REGISTER_READ_PORTS	( 1 )
#define	D3D10_COMMONSHADER_FLOWCONTROL_NESTING_LIMIT	( 64 )
#define	D3D10_COMMONSHADER_IMMEDIATE_CONSTANT_BUFFER_REGISTER_COMPONENTS	( 4 )
#define	D3D10_COMMONSHADER_IMMEDIATE_CONSTANT_BUFFER_REGISTER_COUNT	( 1 )
#define	D3D10_COMMONSHADER_IMMEDIATE_CONSTANT_BUFFER_REGISTER_READS_PER_INST	( 1 )
#define	D3D10_COMMONSHADER_IMMEDIATE_CONSTANT_BUFFER_REGISTER_READ_PORTS	( 1 )
#define	D3D10_COMMONSHADER_IMMEDIATE_VALUE_COMPONENT_BIT_COUNT	( 32 )
#define	D3D10_COMMONSHADER_INPUT_RESOURCE_REGISTER_COMPONENTS	( 1 )
#define	D3D10_COMMONSHADER_INPUT_RESOURCE_REGISTER_COUNT	( 128 )
#define	D3D10_COMMONSHADER_INPUT_RESOURCE_REGISTER_READS_PER_INST	( 1 )
#define	D3D10_COMMONSHADER_INPUT_RESOURCE_REGISTER_READ_PORTS	( 1 )
#define	D3D10_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT	( 128 )
#define	D3D10_COMMONSHADER_SAMPLER_REGISTER_COMPONENTS	( 1 )
#define	D3D10_COMMONSHADER_SAMPLER_REGISTER_COUNT	( 16 )
#define	D3D10_COMMONSHADER_SAMPLER_REGISTER_READS_PER_INST	( 1 )
#define	D3D10_COMMONSHADER_SAMPLER_REGISTER_READ_PORTS	( 1 )
#define	D3D10_COMMONSHADER_SAMPLER_SLOT_COUNT	( 16 )
#define	D3D10_COMMONSHADER_SUBROUTINE_NESTING_LIMIT	( 32 )
#define	D3D10_COMMONSHADER_TEMP_REGISTER_COMPONENTS	( 4 )
#define	D3D10_COMMONSHADER_TEMP_REGISTER_COMPONENT_BIT_COUNT	( 32 )
#define	D3D10_COMMONSHADER_TEMP_REGISTER_COUNT	( 4096 )
#define	D3D10_COMMONSHADER_TEMP_REGISTER_READS_PER_INST	( 3 )
#define	D3D10_COMMONSHADER_TEMP_REGISTER_READ_PORTS	( 3 )
#define	D3D10_COMMONSHADER_TEXCOORD_RANGE_REDUCTION_MAX	( 10 )
#define	D3D10_COMMONSHADER_TEXCOORD_RANGE_REDUCTION_MIN	( -10 )
#define	D3D10_COMMONSHADER_TEXEL_OFFSET_MAX_NEGATIVE	( -8 )
#define	D3D10_COMMONSHADER_TEXEL_OFFSET_MAX_POSITIVE	( 7 )
#define D3D10_DEFAULT_BLEND_FACTOR_ALPHA	( 1.0f )
#define D3D10_DEFAULT_BLEND_FACTOR_BLUE	( 1.0f )
#define D3D10_DEFAULT_BLEND_FACTOR_GREEN	( 1.0f )
#define D3D10_DEFAULT_BLEND_FACTOR_RED	( 1.0f )
#define D3D10_DEFAULT_BORDER_COLOR_COMPONENT	( 0.0f )
#define	D3D10_DEFAULT_DEPTH_BIAS	( 0 )
#define D3D10_DEFAULT_DEPTH_BIAS_CLAMP	( 0.0f )
#define D3D10_DEFAULT_MAX_ANISOTROPY	( 16.0f )
#define D3D10_DEFAULT_MIP_LOD_BIAS	( 0.0f )
#define	D3D10_DEFAULT_RENDER_TARGET_ARRAY_INDEX	( 0 )
#define	D3D10_DEFAULT_SAMPLE_MASK	( 0xffffffff )
#define	D3D10_DEFAULT_SCISSOR_ENDX	( 0 )
#define	D3D10_DEFAULT_SCISSOR_ENDY	( 0 )
#define	D3D10_DEFAULT_SCISSOR_STARTX	( 0 )
#define	D3D10_DEFAULT_SCISSOR_STARTY	( 0 )
#define D3D10_DEFAULT_SLOPE_SCALED_DEPTH_BIAS	( 0.0f )
#define	D3D10_DEFAULT_STENCIL_READ_MASK	( 0xff )
#define	D3D10_DEFAULT_STENCIL_REFERENCE	( 0 )
#define	D3D10_DEFAULT_STENCIL_WRITE_MASK	( 0xff )
#define	D3D10_DEFAULT_VIEWPORT_AND_SCISSORRECT_INDEX	( 0 )
#define	D3D10_DEFAULT_VIEWPORT_HEIGHT	( 0 )
#define D3D10_DEFAULT_VIEWPORT_MAX_DEPTH	( 0.0f )
#define D3D10_DEFAULT_VIEWPORT_MIN_DEPTH	( 0.0f )
#define	D3D10_DEFAULT_VIEWPORT_TOPLEFTX	( 0 )
#define	D3D10_DEFAULT_VIEWPORT_TOPLEFTY	( 0 )
#define	D3D10_DEFAULT_VIEWPORT_WIDTH	( 0 )
#define D3D10_FLOAT16_FUSED_TOLERANCE_IN_ULP	( 0.6 )
#define D3D10_FLOAT32_MAX	( 3.402823466e+38f )
#define D3D10_FLOAT32_TO_INTEGER_TOLERANCE_IN_ULP	( 0.6f )
#define D3D10_FLOAT_TO_SRGB_EXPONENT_DENOMINATOR	( 2.4f )
#define D3D10_FLOAT_TO_SRGB_EXPONENT_NUMERATOR	( 1.0f )
#define D3D10_FLOAT_TO_SRGB_OFFSET	( 0.055f )
#define D3D10_FLOAT_TO_SRGB_SCALE_1	( 12.92f )
#define D3D10_FLOAT_TO_SRGB_SCALE_2	( 1.055f )
#define D3D10_FLOAT_TO_SRGB_THRESHOLD	( 0.0031308f )
#define D3D10_FTOI_INSTRUCTION_MAX_INPUT	( 2147483647.999f )
#define D3D10_FTOI_INSTRUCTION_MIN_INPUT	( -2147483648.999f )
#define D3D10_FTOU_INSTRUCTION_MAX_INPUT	( 4294967295.999f )
#define D3D10_FTOU_INSTRUCTION_MIN_INPUT	( 0.0f )
#define	D3D10_GS_INPUT_PRIM_CONST_REGISTER_COMPONENTS	( 1 )
#define	D3D10_GS_INPUT_PRIM_CONST_REGISTER_COMPONENT_BIT_COUNT	( 32 )
#define	D3D10_GS_INPUT_PRIM_CONST_REGISTER_COUNT	( 1 )
#define	D3D10_GS_INPUT_PRIM_CONST_REGISTER_READS_PER_INST	( 2 )
#define	D3D10_GS_INPUT_PRIM_CONST_REGISTER_READ_PORTS	( 1 )
#define	D3D10_GS_INPUT_REGISTER_COMPONENTS	( 4 )
#define	D3D10_GS_INPUT_REGISTER_COMPONENT_BIT_COUNT	( 32 )
#define	D3D10_GS_INPUT_REGISTER_COUNT	( 16 )
#define	D3D10_GS_INPUT_REGISTER_READS_PER_INST	( 2 )
#define	D3D10_GS_INPUT_REGISTER_READ_PORTS	( 1 )
#define	D3D10_GS_INPUT_REGISTER_VERTICES	( 6 )
#define	D3D10_GS_OUTPUT_ELEMENTS	( 32 )
#define	D3D10_GS_OUTPUT_REGISTER_COMPONENTS	( 4 )
#define	D3D10_GS_OUTPUT_REGISTER_COMPONENT_BIT_COUNT	( 32 )
#define	D3D10_GS_OUTPUT_REGISTER_COUNT	( 32 )
#define	D3D10_IA_DEFAULT_INDEX_BUFFER_OFFSET_IN_BYTES	( 0 )
#define	D3D10_IA_DEFAULT_PRIMITIVE_TOPOLOGY	( 0 )
#define	D3D10_IA_DEFAULT_VERTEX_BUFFER_OFFSET_IN_BYTES	( 0 )
#define	D3D10_IA_INDEX_INPUT_RESOURCE_SLOT_COUNT	( 1 )
#define	D3D10_IA_INSTANCE_ID_BIT_COUNT	( 32 )
#define	D3D10_IA_INTEGER_ARITHMETIC_BIT_COUNT	( 32 )
#define	D3D10_IA_PRIMITIVE_ID_BIT_COUNT	( 32 )
#define	D3D10_IA_VERTEX_ID_BIT_COUNT	( 32 )
#define	D3D10_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT	( 16 )
#define	D3D10_IA_VERTEX_INPUT_STRUCTURE_ELEMENTS_COMPONENTS	( 64 )
#define	D3D10_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT	( 16 )
#define	D3D10_INTEGER_DIVIDE_BY_ZERO_QUOTIENT	( 0xffffffff )
#define	D3D10_INTEGER_DIVIDE_BY_ZERO_REMAINDER	( 0xffffffff )
#define D3D10_LINEAR_GAMMA	( 1.0f )
#define D3D10_MAX_BORDER_COLOR_COMPONENT	( 1.0f )
#define D3D10_MAX_DEPTH	( 1.0f )
#define	D3D10_MAX_MAXANISOTROPY	( 16 )
#define	D3D10_MAX_MULTISAMPLE_SAMPLE_COUNT	( 32 )
#define D3D10_MAX_POSITION_VALUE	( 3.402823466e+34f )
#define	D3D10_MAX_TEXTURE_DIMENSION_2_TO_EXP	( 17 )
#define D3D10_MIN_BORDER_COLOR_COMPONENT	( 0.0f )
#define D3D10_MIN_DEPTH	( 0.0f )
#define	D3D10_MIN_MAXANISOTROPY	( 0 )
#define D3D10_MIP_LOD_BIAS_MAX	( 15.99f )
#define D3D10_MIP_LOD_BIAS_MIN	( -16.0f )
#define	D3D10_MIP_LOD_FRACTIONAL_BIT_COUNT	( 6 )
#define	D3D10_MIP_LOD_RANGE_BIT_COUNT	( 8 )
#define D3D10_MULTISAMPLE_ANTIALIAS_LINE_WIDTH	( 1.4f )
#define	D3D10_NONSAMPLE_FETCH_OUT_OF_RANGE_ACCESS_RESULT	( 0 )
#define	D3D10_PIXEL_ADDRESS_RANGE_BIT_COUNT	( 13 )
#define	D3D10_PRE_SCISSOR_PIXEL_ADDRESS_RANGE_BIT_COUNT	( 15 )
#define	D3D10_PS_FRONTFACING_DEFAULT_VALUE	( 0xffffffff )
#define	D3D10_PS_FRONTFACING_FALSE_VALUE	( 0 )
#define	D3D10_PS_FRONTFACING_TRUE_VALUE	( 0xffffffff )
#define	D3D10_PS_INPUT_REGISTER_COMPONENTS	( 4 )
#define	D3D10_PS_INPUT_REGISTER_COMPONENT_BIT_COUNT	( 32 )
#define	D3D10_PS_INPUT_REGISTER_COUNT	( 32 )
#define	D3D10_PS_INPUT_REGISTER_READS_PER_INST	( 2 )
#define	D3D10_PS_INPUT_REGISTER_READ_PORTS	( 1 )
#define D3D10_PS_LEGACY_PIXEL_CENTER_FRACTIONAL_COMPONENT	( 0.0f )
#define	D3D10_PS_OUTPUT_DEPTH_REGISTER_COMPONENTS	( 1 )
#define	D3D10_PS_OUTPUT_DEPTH_REGISTER_COMPONENT_BIT_COUNT	( 32 )
#define	D3D10_PS_OUTPUT_DEPTH_REGISTER_COUNT	( 1 )
#define	D3D10_PS_OUTPUT_REGISTER_COMPONENTS	( 4 )
#define	D3D10_PS_OUTPUT_REGISTER_COMPONENT_BIT_COUNT	( 32 )
#define	D3D10_PS_OUTPUT_REGISTER_COUNT	( 8 )
#define D3D10_PS_PIXEL_CENTER_FRACTIONAL_COMPONENT	( 0.5f )
#define	D3D10_REQ_BLEND_OBJECT_COUNT_PER_CONTEXT	( 4096 )
#define	D3D10_REQ_BUFFER_RESOURCE_TEXEL_COUNT_2_TO_EXP	( 27 )
#define	D3D10_REQ_CONSTANT_BUFFER_ELEMENT_COUNT	( 4096 )
#define	D3D10_REQ_DEPTH_STENCIL_OBJECT_COUNT_PER_CONTEXT	( 4096 )
#define	D3D10_REQ_DRAWINDEXED_INDEX_COUNT_2_TO_EXP	( 32 )
#define	D3D10_REQ_DRAW_VERTEX_COUNT_2_TO_EXP	( 32 )
#define	D3D10_REQ_FILTERING_HW_ADDRESSABLE_RESOURCE_DIMENSION	( 8192 )
#define	D3D10_REQ_GS_INVOCATION_32BIT_OUTPUT_COMPONENT_LIMIT	( 1024 )
#define	D3D10_REQ_IMMEDIATE_CONSTANT_BUFFER_ELEMENT_COUNT	( 4096 )
#define	D3D10_REQ_MAXANISOTROPY	( 16 )
#define	D3D10_REQ_MIP_LEVELS	( 14 )
#define	D3D10_REQ_MULTI_ELEMENT_STRUCTURE_SIZE_IN_BYTES	( 2048 )
#define	D3D10_REQ_RASTERIZER_OBJECT_COUNT_PER_CONTEXT	( 4096 )
#define	D3D10_REQ_RENDER_TO_BUFFER_WINDOW_WIDTH	( 8192 )
#define	D3D10_REQ_RESOURCE_SIZE_IN_MEGABYTES	( 128 )
#define	D3D10_REQ_RESOURCE_VIEW_COUNT_PER_CONTEXT_2_TO_EXP	( 20 )
#define	D3D10_REQ_SAMPLER_OBJECT_COUNT_PER_CONTEXT	( 4096 )
#define	D3D10_REQ_TEXTURE1D_ARRAY_AXIS_DIMENSION	( 512 )
#define	D3D10_REQ_TEXTURE1D_U_DIMENSION	( 8192 )
#define	D3D10_REQ_TEXTURE2D_ARRAY_AXIS_DIMENSION	( 512 )
#define	D3D10_REQ_TEXTURE2D_U_OR_V_DIMENSION	( 8192 )
#define	D3D10_REQ_TEXTURE3D_U_V_OR_W_DIMENSION	( 2048 )
#define	D3D10_REQ_TEXTURECUBE_DIMENSION	( 8192 )
#define	D3D10_RESINFO_INSTRUCTION_MISSING_COMPONENT_RETVAL	( 0 )
#define	D3D10_SHADER_MAJOR_VERSION	( 4 )
#define	D3D10_SHADER_MINOR_VERSION	( 0 )
#define	D3D10_SHIFT_INSTRUCTION_PAD_VALUE	( 0 )
#define	D3D10_SHIFT_INSTRUCTION_SHIFT_VALUE_BIT_COUNT	( 5 )
#define	D3D10_SIMULTANEOUS_RENDER_TARGET_COUNT	( 8 )
#define	D3D10_SO_BUFFER_MAX_STRIDE_IN_BYTES	( 2048 )
#define	D3D10_SO_BUFFER_MAX_WRITE_WINDOW_IN_BYTES	( 256 )
#define	D3D10_SO_BUFFER_SLOT_COUNT	( 4 )
#define	D3D10_SO_DDI_REGISTER_INDEX_DENOTING_GAP	( 0xffffffff )
#define	D3D10_SO_MULTIPLE_BUFFER_ELEMENTS_PER_BUFFER	( 1 )
#define	D3D10_SO_SINGLE_BUFFER_COMPONENT_LIMIT	( 64 )
#define D3D10_SRGB_GAMMA	( 2.2f )
#define D3D10_SRGB_TO_FLOAT_DENOMINATOR_1	( 12.92f )
#define D3D10_SRGB_TO_FLOAT_DENOMINATOR_2	( 1.055f )
#define D3D10_SRGB_TO_FLOAT_EXPONENT	( 2.4f )
#define D3D10_SRGB_TO_FLOAT_OFFSET	( 0.055f )
#define D3D10_SRGB_TO_FLOAT_THRESHOLD	( 0.04045f )
#define D3D10_SRGB_TO_FLOAT_TOLERANCE_IN_ULP	( 0.5f )
#define	D3D10_STANDARD_COMPONENT_BIT_COUNT	( 32 )
#define	D3D10_STANDARD_COMPONENT_BIT_COUNT_DOUBLED	( 64 )
#define	D3D10_STANDARD_MAXIMUM_ELEMENT_ALIGNMENT_BYTE_MULTIPLE	( 4 )
#define	D3D10_STANDARD_PIXEL_COMPONENT_COUNT	( 128 )
#define	D3D10_STANDARD_PIXEL_ELEMENT_COUNT	( 32 )
#define	D3D10_STANDARD_VECTOR_SIZE	( 4 )
#define	D3D10_STANDARD_VERTEX_ELEMENT_COUNT	( 16 )
#define	D3D10_STANDARD_VERTEX_TOTAL_COMPONENT_COUNT	( 64 )
#define	D3D10_SUBPIXEL_FRACTIONAL_BIT_COUNT	( 8 )
#define	D3D10_SUBTEXEL_FRACTIONAL_BIT_COUNT	( 6 )
#define	D3D10_TEXEL_ADDRESS_RANGE_BIT_COUNT	( 18 )
#define	D3D10_UNBOUND_MEMORY_ACCESS_RESULT	( 0 )
#define	D3D10_VIEWPORT_AND_SCISSORRECT_MAX_INDEX	( 15 )
#define	D3D10_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE	( 16 )
#define	D3D10_VIEWPORT_BOUNDS_MAX	( 16383 )
#define	D3D10_VIEWPORT_BOUNDS_MIN	( -16384 )
#define	D3D10_VS_INPUT_REGISTER_COMPONENTS	( 4 )
#define	D3D10_VS_INPUT_REGISTER_COMPONENT_BIT_COUNT	( 32 )
#define	D3D10_VS_INPUT_REGISTER_COUNT	( 16 )
#define	D3D10_VS_INPUT_REGISTER_READS_PER_INST	( 2 )
#define	D3D10_VS_INPUT_REGISTER_READ_PORTS	( 1 )
#define	D3D10_VS_OUTPUT_REGISTER_COMPONENTS	( 4 )
#define	D3D10_VS_OUTPUT_REGISTER_COMPONENT_BIT_COUNT	( 32 )
#define	D3D10_VS_OUTPUT_REGISTER_COUNT	( 16 )
#define	D3D10_WHQL_CONTEXT_COUNT_FOR_RESOURCE_LIMIT	( 10 )
#define	D3D10_WHQL_DRAWINDEXED_INDEX_COUNT_2_TO_EXP	( 25 )
#define	D3D10_WHQL_DRAW_VERTEX_COUNT_2_TO_EXP	( 25 )
#define	D3D_MAJOR_VERSION	( 10 )
#define	D3D_MINOR_VERSION	( 0 )
#define	D3D_SPEC_DATE_DAY	( 8 )
#define	D3D_SPEC_DATE_MONTH	( 8 )
#define	D3D_SPEC_DATE_YEAR	( 2006 )
#define D3D_SPEC_VERSION	( 1.050005 )
#endif
#if !defined( __d3d10_1_h__ ) && !(D3D10_HEADER_MINOR_VERSION >= 1)
#define D3D10_1_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT D3D10_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT
#define D3D10_1_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT D3D10_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT
#endif
#define	_FACD3D10	( 0x879 )
#define	_FACD3D10DEBUG	( ( _FACD3D10 + 1 )  )
#define MAKE_D3D10_HRESULT( code )  MAKE_HRESULT( 1, _FACD3D10, code )
#define MAKE_D3D10_STATUS( code )    MAKE_HRESULT( 0, _FACD3D10, code )
#define D3D10_ERROR_TOO_MANY_UNIQUE_STATE_OBJECTS  MAKE_D3D10_HRESULT(1)
#define D3D10_ERROR_FILE_NOT_FOUND  MAKE_D3D10_HRESULT(2)
typedef enum D3D10_INPUT_CLASSIFICATION
{ D3D10_INPUT_PER_VERTEX_DATA = 0,
	D3D10_INPUT_PER_INSTANCE_DATA = 1
} D3D10_INPUT_CLASSIFICATION;
#define	D3D10_APPEND_ALIGNED_ELEMENT	( 0xffffffff )
typedef struct D3D10_INPUT_ELEMENT_DESC
{
	LPCSTR SemanticName;
	UINT SemanticIndex;
	DXGI_FORMAT Format;
	UINT InputSlot;
	UINT AlignedByteOffset;
	D3D10_INPUT_CLASSIFICATION InputSlotClass;
	UINT InstanceDataStepRate;
} D3D10_INPUT_ELEMENT_DESC;
typedef enum D3D10_FILL_MODE
{ D3D10_FILL_WIREFRAME = 2,
	D3D10_FILL_SOLID = 3
} D3D10_FILL_MODE;
typedef enum D3D10_PRIMITIVE_TOPOLOGY
{ D3D10_PRIMITIVE_TOPOLOGY_UNDEFINED = 0,
	D3D10_PRIMITIVE_TOPOLOGY_POINTLIST = 1,
	D3D10_PRIMITIVE_TOPOLOGY_LINELIST = 2,
	D3D10_PRIMITIVE_TOPOLOGY_LINESTRIP = 3,
	D3D10_PRIMITIVE_TOPOLOGY_TRIANGLELIST = 4,
	D3D10_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP = 5,
	D3D10_PRIMITIVE_TOPOLOGY_LINELIST_ADJ = 10,
	D3D10_PRIMITIVE_TOPOLOGY_LINESTRIP_ADJ = 11,
	D3D10_PRIMITIVE_TOPOLOGY_TRIANGLELIST_ADJ = 12,
	D3D10_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP_ADJ = 13
} D3D10_PRIMITIVE_TOPOLOGY;
typedef enum D3D10_PRIMITIVE
{ D3D10_PRIMITIVE_UNDEFINED = 0,
	D3D10_PRIMITIVE_POINT = 1,
	D3D10_PRIMITIVE_LINE = 2,
	D3D10_PRIMITIVE_TRIANGLE = 3,
	D3D10_PRIMITIVE_LINE_ADJ = 6,
	D3D10_PRIMITIVE_TRIANGLE_ADJ = 7
} D3D10_PRIMITIVE;
typedef enum D3D10_CULL_MODE
{ D3D10_CULL_NONE = 1,
	D3D10_CULL_FRONT = 2,
	D3D10_CULL_BACK = 3
} D3D10_CULL_MODE;
typedef struct D3D10_SO_DECLARATION_ENTRY
{
	LPCSTR SemanticName;
	UINT SemanticIndex;
	BYTE StartComponent;
	BYTE ComponentCount;
	BYTE OutputSlot;
} D3D10_SO_DECLARATION_ENTRY;
typedef struct D3D10_VIEWPORT
{
	INT TopLeftX;
	INT TopLeftY;
	UINT Width;
	UINT Height;
	FLOAT MinDepth;
	FLOAT MaxDepth;
} D3D10_VIEWPORT;
typedef enum D3D10_RESOURCE_DIMENSION
{ D3D10_RESOURCE_DIMENSION_UNKNOWN = 0,
	D3D10_RESOURCE_DIMENSION_BUFFER = 1,
	D3D10_RESOURCE_DIMENSION_TEXTURE1D = 2,
	D3D10_RESOURCE_DIMENSION_TEXTURE2D = 3,
	D3D10_RESOURCE_DIMENSION_TEXTURE3D = 4
} D3D10_RESOURCE_DIMENSION;
typedef enum D3D10_SRV_DIMENSION
{ D3D10_SRV_DIMENSION_UNKNOWN = 0,
	D3D10_SRV_DIMENSION_BUFFER = 1,
	D3D10_SRV_DIMENSION_TEXTURE1D = 2,
	D3D10_SRV_DIMENSION_TEXTURE1DARRAY = 3,
	D3D10_SRV_DIMENSION_TEXTURE2D = 4,
	D3D10_SRV_DIMENSION_TEXTURE2DARRAY = 5,
	D3D10_SRV_DIMENSION_TEXTURE2DMS = 6,
	D3D10_SRV_DIMENSION_TEXTURE2DMSARRAY = 7,
	D3D10_SRV_DIMENSION_TEXTURE3D = 8,
	D3D10_SRV_DIMENSION_TEXTURECUBE = 9
} D3D10_SRV_DIMENSION;
typedef enum D3D10_DSV_DIMENSION
{ D3D10_DSV_DIMENSION_UNKNOWN = 0,
	D3D10_DSV_DIMENSION_TEXTURE1D = 1,
	D3D10_DSV_DIMENSION_TEXTURE1DARRAY = 2,
	D3D10_DSV_DIMENSION_TEXTURE2D = 3,
	D3D10_DSV_DIMENSION_TEXTURE2DARRAY = 4,
	D3D10_DSV_DIMENSION_TEXTURE2DMS = 5,
	D3D10_DSV_DIMENSION_TEXTURE2DMSARRAY = 6
} D3D10_DSV_DIMENSION;
typedef enum D3D10_RTV_DIMENSION
{ D3D10_RTV_DIMENSION_UNKNOWN = 0,
	D3D10_RTV_DIMENSION_BUFFER = 1,
	D3D10_RTV_DIMENSION_TEXTURE1D = 2,
	D3D10_RTV_DIMENSION_TEXTURE1DARRAY = 3,
	D3D10_RTV_DIMENSION_TEXTURE2D = 4,
	D3D10_RTV_DIMENSION_TEXTURE2DARRAY = 5,
	D3D10_RTV_DIMENSION_TEXTURE2DMS = 6,
	D3D10_RTV_DIMENSION_TEXTURE2DMSARRAY = 7,
	D3D10_RTV_DIMENSION_TEXTURE3D = 8
} D3D10_RTV_DIMENSION;
typedef enum D3D10_USAGE
{ D3D10_USAGE_DEFAULT = 0,
	D3D10_USAGE_IMMUTABLE = 1,
	D3D10_USAGE_DYNAMIC = 2,
	D3D10_USAGE_STAGING = 3
} D3D10_USAGE;
typedef enum D3D10_BIND_FLAG
{ D3D10_BIND_VERTEX_BUFFER = 0x1L,
	D3D10_BIND_INDEX_BUFFER = 0x2L,
	D3D10_BIND_CONSTANT_BUFFER = 0x4L,
	D3D10_BIND_SHADER_RESOURCE = 0x8L,
	D3D10_BIND_STREAM_OUTPUT = 0x10L,
	D3D10_BIND_RENDER_TARGET = 0x20L,
	D3D10_BIND_DEPTH_STENCIL = 0x40L
} D3D10_BIND_FLAG;
typedef enum D3D10_CPU_ACCESS_FLAG
{ D3D10_CPU_ACCESS_WRITE = 0x10000L,
	D3D10_CPU_ACCESS_READ = 0x20000L
} D3D10_CPU_ACCESS_FLAG;
typedef enum D3D10_RESOURCE_MISC_FLAG
{ D3D10_RESOURCE_MISC_GENERATE_MIPS = 0x1L,
	D3D10_RESOURCE_MISC_SHARED = 0x2L,
	D3D10_RESOURCE_MISC_TEXTURECUBE = 0x4L,
	D3D10_RESOURCE_MISC_SHARED_KEYEDMUTEX = 0x10L,
	D3D10_RESOURCE_MISC_GDI_COMPATIBLE = 0x20L
} D3D10_RESOURCE_MISC_FLAG;
typedef enum D3D10_MAP
{ D3D10_MAP_READ = 1,
	D3D10_MAP_WRITE = 2,
	D3D10_MAP_READ_WRITE = 3,
	D3D10_MAP_WRITE_DISCARD = 4,
	D3D10_MAP_WRITE_NO_OVERWRITE = 5
} D3D10_MAP;
typedef enum D3D10_MAP_FLAG
{ D3D10_MAP_FLAG_DO_NOT_WAIT = 0x100000L
} D3D10_MAP_FLAG;
typedef enum D3D10_RAISE_FLAG
{ D3D10_RAISE_FLAG_DRIVER_INTERNAL_ERROR = 0x1L
} D3D10_RAISE_FLAG;
typedef enum D3D10_CLEAR_FLAG
{ D3D10_CLEAR_DEPTH = 0x1L,
	D3D10_CLEAR_STENCIL = 0x2L
} D3D10_CLEAR_FLAG;
typedef RECT D3D10_RECT;
typedef struct D3D10_BOX
{
	UINT left;
	UINT top;
	UINT front;
	UINT right;
	UINT bottom;
	UINT back;
} D3D10_BOX;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0000_v0_0_s_ifspec;
#ifndef __ID3D10DeviceChild_INTERFACE_DEFINED__
#define __ID3D10DeviceChild_INTERFACE_DEFINED__
extern const IID IID_ID3D10DeviceChild;
typedef struct ID3D10DeviceChildVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3D10DeviceChild * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ID3D10DeviceChild * This);
	ULONG(STDMETHODCALLTYPE * Release) (ID3D10DeviceChild * This);
	void (STDMETHODCALLTYPE * GetDevice) (ID3D10DeviceChild * This, ID3D10Device ** ppDevice);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (ID3D10DeviceChild * This, REFGUID guid, UINT * pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateData) (ID3D10DeviceChild * This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateDataInterface) (ID3D10DeviceChild * This, REFGUID guid, const IUnknown * pData);
	END_INTERFACE
} ID3D10DeviceChildVtbl;
interface ID3D10DeviceChild
{
	CONST_VTBL struct ID3D10DeviceChildVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10DeviceChild_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10DeviceChild_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10DeviceChild_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10DeviceChild_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10DeviceChild_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10DeviceChild_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10DeviceChild_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#endif
#endif
typedef enum D3D10_COMPARISON_FUNC
{ D3D10_COMPARISON_NEVER = 1,
	D3D10_COMPARISON_LESS = 2,
	D3D10_COMPARISON_EQUAL = 3,
	D3D10_COMPARISON_LESS_EQUAL = 4,
	D3D10_COMPARISON_GREATER = 5,
	D3D10_COMPARISON_NOT_EQUAL = 6,
	D3D10_COMPARISON_GREATER_EQUAL = 7,
	D3D10_COMPARISON_ALWAYS = 8
} D3D10_COMPARISON_FUNC;
typedef enum D3D10_DEPTH_WRITE_MASK
{ D3D10_DEPTH_WRITE_MASK_ZERO = 0,
	D3D10_DEPTH_WRITE_MASK_ALL = 1
} D3D10_DEPTH_WRITE_MASK;
typedef enum D3D10_STENCIL_OP
{ D3D10_STENCIL_OP_KEEP = 1,
	D3D10_STENCIL_OP_ZERO = 2,
	D3D10_STENCIL_OP_REPLACE = 3,
	D3D10_STENCIL_OP_INCR_SAT = 4,
	D3D10_STENCIL_OP_DECR_SAT = 5,
	D3D10_STENCIL_OP_INVERT = 6,
	D3D10_STENCIL_OP_INCR = 7,
	D3D10_STENCIL_OP_DECR = 8
} D3D10_STENCIL_OP;
typedef struct D3D10_DEPTH_STENCILOP_DESC
{
	D3D10_STENCIL_OP StencilFailOp;
	D3D10_STENCIL_OP StencilDepthFailOp;
	D3D10_STENCIL_OP StencilPassOp;
	D3D10_COMPARISON_FUNC StencilFunc;
} D3D10_DEPTH_STENCILOP_DESC;
typedef struct D3D10_DEPTH_STENCIL_DESC
{
	BOOL DepthEnable;
	D3D10_DEPTH_WRITE_MASK DepthWriteMask;
	D3D10_COMPARISON_FUNC DepthFunc;
	BOOL StencilEnable;
	UINT8 StencilReadMask;
	UINT8 StencilWriteMask;
	D3D10_DEPTH_STENCILOP_DESC FrontFace;
	D3D10_DEPTH_STENCILOP_DESC BackFace;
} D3D10_DEPTH_STENCIL_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0001_v0_0_s_ifspec;
#ifndef __ID3D10DepthStencilState_INTERFACE_DEFINED__
#define __ID3D10DepthStencilState_INTERFACE_DEFINED__
extern const IID IID_ID3D10DepthStencilState;
typedef struct ID3D10DepthStencilStateVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3D10DepthStencilState * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ID3D10DepthStencilState * This);
	ULONG(STDMETHODCALLTYPE * Release) (ID3D10DepthStencilState * This);
	void (STDMETHODCALLTYPE * GetDevice) (ID3D10DepthStencilState * This, ID3D10Device ** ppDevice);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (ID3D10DepthStencilState * This, REFGUID guid, UINT * pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateData) (ID3D10DepthStencilState * This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateDataInterface) (ID3D10DepthStencilState * This, REFGUID guid, const IUnknown * pData);
	void (STDMETHODCALLTYPE * GetDesc) (ID3D10DepthStencilState * This, D3D10_DEPTH_STENCIL_DESC * pDesc);
	END_INTERFACE
} ID3D10DepthStencilStateVtbl;
interface ID3D10DepthStencilState
{
	CONST_VTBL struct ID3D10DepthStencilStateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10DepthStencilState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10DepthStencilState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10DepthStencilState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10DepthStencilState_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10DepthStencilState_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10DepthStencilState_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10DepthStencilState_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10DepthStencilState_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#endif
#endif
typedef enum D3D10_BLEND
{ D3D10_BLEND_ZERO = 1,
	D3D10_BLEND_ONE = 2,
	D3D10_BLEND_SRC_COLOR = 3,
	D3D10_BLEND_INV_SRC_COLOR = 4,
	D3D10_BLEND_SRC_ALPHA = 5,
	D3D10_BLEND_INV_SRC_ALPHA = 6,
	D3D10_BLEND_DEST_ALPHA = 7,
	D3D10_BLEND_INV_DEST_ALPHA = 8,
	D3D10_BLEND_DEST_COLOR = 9,
	D3D10_BLEND_INV_DEST_COLOR = 10,
	D3D10_BLEND_SRC_ALPHA_SAT = 11,
	D3D10_BLEND_BLEND_FACTOR = 14,
	D3D10_BLEND_INV_BLEND_FACTOR = 15,
	D3D10_BLEND_SRC1_COLOR = 16,
	D3D10_BLEND_INV_SRC1_COLOR = 17,
	D3D10_BLEND_SRC1_ALPHA = 18,
	D3D10_BLEND_INV_SRC1_ALPHA = 19
} D3D10_BLEND;
typedef enum D3D10_BLEND_OP
{ D3D10_BLEND_OP_ADD = 1,
	D3D10_BLEND_OP_SUBTRACT = 2,
	D3D10_BLEND_OP_REV_SUBTRACT = 3,
	D3D10_BLEND_OP_MIN = 4,
	D3D10_BLEND_OP_MAX = 5
} D3D10_BLEND_OP;
typedef enum D3D10_COLOR_WRITE_ENABLE
{ D3D10_COLOR_WRITE_ENABLE_RED = 1,
	D3D10_COLOR_WRITE_ENABLE_GREEN = 2,
	D3D10_COLOR_WRITE_ENABLE_BLUE = 4,
	D3D10_COLOR_WRITE_ENABLE_ALPHA = 8,
	D3D10_COLOR_WRITE_ENABLE_ALL = (((D3D10_COLOR_WRITE_ENABLE_RED | D3D10_COLOR_WRITE_ENABLE_GREEN) | D3D10_COLOR_WRITE_ENABLE_BLUE) | D3D10_COLOR_WRITE_ENABLE_ALPHA)
} D3D10_COLOR_WRITE_ENABLE;
typedef struct D3D10_BLEND_DESC
{
	BOOL AlphaToCoverageEnable;
	BOOL BlendEnable[8];
	D3D10_BLEND SrcBlend;
	D3D10_BLEND DestBlend;
	D3D10_BLEND_OP BlendOp;
	D3D10_BLEND SrcBlendAlpha;
	D3D10_BLEND DestBlendAlpha;
	D3D10_BLEND_OP BlendOpAlpha;
	UINT8 RenderTargetWriteMask[8];
} D3D10_BLEND_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0002_v0_0_s_ifspec;
#ifndef __ID3D10BlendState_INTERFACE_DEFINED__
#define __ID3D10BlendState_INTERFACE_DEFINED__
extern const IID IID_ID3D10BlendState;
typedef struct ID3D10BlendStateVtbl
{
BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3D10BlendState * This, REFIID riid, void **ppvObject);
ULONG(STDMETHODCALLTYPE * AddRef) (ID3D10BlendState * This);
ULONG(STDMETHODCALLTYPE * Release) (ID3D10BlendState * This);
void (STDMETHODCALLTYPE * GetDevice) (ID3D10BlendState * This, ID3D10Device ** ppDevice);
HRESULT(STDMETHODCALLTYPE * GetPrivateData) (ID3D10BlendState * This, REFGUID guid, UINT * pDataSize, void *pData);
HRESULT(STDMETHODCALLTYPE * SetPrivateData) (ID3D10BlendState * This, REFGUID guid, UINT DataSize, const void *pData);
HRESULT(STDMETHODCALLTYPE * SetPrivateDataInterface) (ID3D10BlendState * This, REFGUID guid, const IUnknown * pData);
void (STDMETHODCALLTYPE * GetDesc) (ID3D10BlendState * This, D3D10_BLEND_DESC * pDesc);
END_INTERFACE
} ID3D10BlendStateVtbl;
interface ID3D10BlendState
{
	CONST_VTBL struct ID3D10BlendStateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10BlendState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10BlendState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10BlendState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10BlendState_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10BlendState_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10BlendState_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10BlendState_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10BlendState_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#endif
#endif
typedef struct D3D10_RASTERIZER_DESC
{
	D3D10_FILL_MODE FillMode;
	D3D10_CULL_MODE CullMode;
	BOOL FrontCounterClockwise;
	INT DepthBias;
	FLOAT DepthBiasClamp;
	FLOAT SlopeScaledDepthBias;
	BOOL DepthClipEnable;
	BOOL ScissorEnable;
	BOOL MultisampleEnable;
	BOOL AntialiasedLineEnable;
} D3D10_RASTERIZER_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0003_v0_0_s_ifspec;
#ifndef __ID3D10RasterizerState_INTERFACE_DEFINED__
#define __ID3D10RasterizerState_INTERFACE_DEFINED__
extern const IID IID_ID3D10RasterizerState;
typedef struct ID3D10RasterizerStateVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE * QueryInterface) (ID3D10RasterizerState * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ID3D10RasterizerState * This);
	ULONG(STDMETHODCALLTYPE * Release) (ID3D10RasterizerState * This);
	void (STDMETHODCALLTYPE * GetDevice) (ID3D10RasterizerState * This, ID3D10Device ** ppDevice);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (ID3D10RasterizerState * This, REFGUID guid, UINT * pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateData) (ID3D10RasterizerState * This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE * SetPrivateDataInterface) (ID3D10RasterizerState * This, REFGUID guid, const IUnknown * pData);
	void (STDMETHODCALLTYPE * GetDesc) (ID3D10RasterizerState * This, D3D10_RASTERIZER_DESC * pDesc);
	END_INTERFACE
} ID3D10RasterizerStateVtbl;
interface ID3D10RasterizerState
{
	CONST_VTBL struct ID3D10RasterizerStateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10RasterizerState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10RasterizerState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10RasterizerState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10RasterizerState_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10RasterizerState_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10RasterizerState_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10RasterizerState_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10RasterizerState_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#endif
#endif
#if !defined( D3D10_NO_HELPERS ) && defined( __cplusplus )
inline UINT D3D10CalcSubresource(UINT MipSlice, UINT ArraySlice, UINT MipLevels)
{
	return MipSlice + ArraySlice * MipLevels;
}
#endif
typedef struct D3D10_SUBRESOURCE_DATA
{
	const void *pSysMem;
	UINT SysMemPitch;
	UINT SysMemSlicePitch;
} D3D10_SUBRESOURCE_DATA;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0004_v0_0_s_ifspec;
#ifndef __ID3D10Resource_INTERFACE_DEFINED__
#define __ID3D10Resource_INTERFACE_DEFINED__
extern const IID IID_ID3D10Resource;
typedef struct ID3D10ResourceVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10Resource *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10Resource *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10Resource *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10Resource *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10Resource *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10Resource *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10Resource *This, REFGUID guid, const IUnknown *pData);
	void (STDMETHODCALLTYPE *GetType) (ID3D10Resource *This, D3D10_RESOURCE_DIMENSION *rType);
	void (STDMETHODCALLTYPE *SetEvictionPriority) (ID3D10Resource *This, UINT EvictionPriority);
	UINT(STDMETHODCALLTYPE *GetEvictionPriority) (ID3D10Resource *This);
	END_INTERFACE
} ID3D10ResourceVtbl;
interface ID3D10Resource
{
	CONST_VTBL struct ID3D10ResourceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10Resource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10Resource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10Resource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10Resource_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10Resource_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10Resource_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10Resource_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10Resource_GetType(This,rType)	\
    ( (This)->lpVtbl -> GetType(This,rType) )
#define ID3D10Resource_SetEvictionPriority(This,EvictionPriority)	\
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
#define ID3D10Resource_GetEvictionPriority(This)	\
    ( (This)->lpVtbl -> GetEvictionPriority(This) )
#endif
#endif
typedef struct D3D10_BUFFER_DESC
{
	UINT ByteWidth;
	D3D10_USAGE Usage;
	UINT BindFlags;
	UINT CPUAccessFlags;
	UINT MiscFlags;
} D3D10_BUFFER_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0005_v0_0_s_ifspec;
#ifndef __ID3D10Buffer_INTERFACE_DEFINED__
#define __ID3D10Buffer_INTERFACE_DEFINED__
extern const IID IID_ID3D10Buffer;
typedef struct ID3D10BufferVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10Buffer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10Buffer *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10Buffer *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10Buffer *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10Buffer *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10Buffer *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10Buffer *This, REFGUID guid, const IUnknown *pData);
	void (STDMETHODCALLTYPE *GetType) (ID3D10Buffer *This, D3D10_RESOURCE_DIMENSION *rType);
	void (STDMETHODCALLTYPE *SetEvictionPriority) (ID3D10Buffer *This, UINT EvictionPriority);
	UINT(STDMETHODCALLTYPE *GetEvictionPriority) (ID3D10Buffer *This);
	HRESULT(STDMETHODCALLTYPE *Map) (ID3D10Buffer *This, D3D10_MAP MapType, UINT MapFlags, void **ppData);
	void (STDMETHODCALLTYPE *Unmap) (ID3D10Buffer *This);
	void (STDMETHODCALLTYPE *GetDesc) (ID3D10Buffer *This, D3D10_BUFFER_DESC *pDesc);
	END_INTERFACE
} ID3D10BufferVtbl;
interface ID3D10Buffer
{
	CONST_VTBL struct ID3D10BufferVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10Buffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10Buffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10Buffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10Buffer_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10Buffer_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10Buffer_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10Buffer_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10Buffer_GetType(This,rType)	\
    ( (This)->lpVtbl -> GetType(This,rType) )
#define ID3D10Buffer_SetEvictionPriority(This,EvictionPriority)	\
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
#define ID3D10Buffer_GetEvictionPriority(This)	\
    ( (This)->lpVtbl -> GetEvictionPriority(This) )
#define ID3D10Buffer_Map(This,MapType,MapFlags,ppData)	\
    ( (This)->lpVtbl -> Map(This,MapType,MapFlags,ppData) )
#define ID3D10Buffer_Unmap(This)	\
    ( (This)->lpVtbl -> Unmap(This) )
#define ID3D10Buffer_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#endif
#endif
typedef struct D3D10_TEXTURE1D_DESC
{
	UINT Width;
	UINT MipLevels;
	UINT ArraySize;
	DXGI_FORMAT Format;
	D3D10_USAGE Usage;
	UINT BindFlags;
	UINT CPUAccessFlags;
	UINT MiscFlags;
} D3D10_TEXTURE1D_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0006_v0_0_s_ifspec;
#ifndef __ID3D10Texture1D_INTERFACE_DEFINED__
#define __ID3D10Texture1D_INTERFACE_DEFINED__
extern const IID IID_ID3D10Texture1D;
typedef struct ID3D10Texture1DVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10Texture1D *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10Texture1D *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10Texture1D *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10Texture1D *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10Texture1D *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10Texture1D *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10Texture1D *This, REFGUID guid, const IUnknown *pData);
	void (STDMETHODCALLTYPE *GetType) (ID3D10Texture1D *This, D3D10_RESOURCE_DIMENSION *rType);
	void (STDMETHODCALLTYPE *SetEvictionPriority) (ID3D10Texture1D *This, UINT EvictionPriority);
	UINT(STDMETHODCALLTYPE *GetEvictionPriority) (ID3D10Texture1D *This);
	HRESULT(STDMETHODCALLTYPE *Map) (ID3D10Texture1D *This, UINT Subresource, D3D10_MAP MapType, UINT MapFlags, void **ppData);
	void (STDMETHODCALLTYPE *Unmap) (ID3D10Texture1D *This, UINT Subresource);
	void (STDMETHODCALLTYPE *GetDesc) (ID3D10Texture1D *This, D3D10_TEXTURE1D_DESC *pDesc);
	END_INTERFACE
} ID3D10Texture1DVtbl;
interface ID3D10Texture1D
{
	CONST_VTBL struct ID3D10Texture1DVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10Texture1D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10Texture1D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10Texture1D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10Texture1D_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10Texture1D_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10Texture1D_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10Texture1D_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10Texture1D_GetType(This,rType)	\
    ( (This)->lpVtbl -> GetType(This,rType) )
#define ID3D10Texture1D_SetEvictionPriority(This,EvictionPriority)	\
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
#define ID3D10Texture1D_GetEvictionPriority(This)	\
    ( (This)->lpVtbl -> GetEvictionPriority(This) )
#define ID3D10Texture1D_Map(This,Subresource,MapType,MapFlags,ppData)	\
    ( (This)->lpVtbl -> Map(This,Subresource,MapType,MapFlags,ppData) )
#define ID3D10Texture1D_Unmap(This,Subresource)	\
    ( (This)->lpVtbl -> Unmap(This,Subresource) )
#define ID3D10Texture1D_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#endif
#endif
typedef struct D3D10_TEXTURE2D_DESC
{
	UINT Width;
	UINT Height;
	UINT MipLevels;
	UINT ArraySize;
	DXGI_FORMAT Format;
	DXGI_SAMPLE_DESC SampleDesc;
	D3D10_USAGE Usage;
	UINT BindFlags;
	UINT CPUAccessFlags;
	UINT MiscFlags;
} D3D10_TEXTURE2D_DESC;
typedef struct D3D10_MAPPED_TEXTURE2D
{
	void *pData;
	UINT RowPitch;
} D3D10_MAPPED_TEXTURE2D;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0007_v0_0_s_ifspec;
#ifndef __ID3D10Texture2D_INTERFACE_DEFINED__
#define __ID3D10Texture2D_INTERFACE_DEFINED__
extern const IID IID_ID3D10Texture2D;
typedef struct ID3D10Texture2DVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10Texture2D *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10Texture2D *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10Texture2D *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10Texture2D *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10Texture2D *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10Texture2D *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10Texture2D *This, REFGUID guid, const IUnknown *pData);
	void (STDMETHODCALLTYPE *GetType) (ID3D10Texture2D *This, D3D10_RESOURCE_DIMENSION *rType);
	void (STDMETHODCALLTYPE *SetEvictionPriority) (ID3D10Texture2D *This, UINT EvictionPriority);
	UINT(STDMETHODCALLTYPE *GetEvictionPriority) (ID3D10Texture2D *This);
	HRESULT(STDMETHODCALLTYPE *Map) (ID3D10Texture2D *This, UINT Subresource, D3D10_MAP MapType, UINT MapFlags, D3D10_MAPPED_TEXTURE2D *pMappedTex2D);
	void (STDMETHODCALLTYPE *Unmap) (ID3D10Texture2D *This, UINT Subresource);
	void (STDMETHODCALLTYPE *GetDesc) (ID3D10Texture2D *This, D3D10_TEXTURE2D_DESC *pDesc);
	END_INTERFACE
} ID3D10Texture2DVtbl;
interface ID3D10Texture2D
{
	CONST_VTBL struct ID3D10Texture2DVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10Texture2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10Texture2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10Texture2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10Texture2D_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10Texture2D_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10Texture2D_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10Texture2D_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10Texture2D_GetType(This,rType)	\
    ( (This)->lpVtbl -> GetType(This,rType) )
#define ID3D10Texture2D_SetEvictionPriority(This,EvictionPriority)	\
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
#define ID3D10Texture2D_GetEvictionPriority(This)	\
    ( (This)->lpVtbl -> GetEvictionPriority(This) )
#define ID3D10Texture2D_Map(This,Subresource,MapType,MapFlags,pMappedTex2D)	\
    ( (This)->lpVtbl -> Map(This,Subresource,MapType,MapFlags,pMappedTex2D) )
#define ID3D10Texture2D_Unmap(This,Subresource)	\
    ( (This)->lpVtbl -> Unmap(This,Subresource) )
#define ID3D10Texture2D_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#endif
#endif
typedef struct D3D10_TEXTURE3D_DESC
{
	UINT Width;
	UINT Height;
	UINT Depth;
	UINT MipLevels;
	DXGI_FORMAT Format;
	D3D10_USAGE Usage;
	UINT BindFlags;
	UINT CPUAccessFlags;
	UINT MiscFlags;
} D3D10_TEXTURE3D_DESC;
typedef struct D3D10_MAPPED_TEXTURE3D
{
	void *pData;
	UINT RowPitch;
	UINT DepthPitch;
} D3D10_MAPPED_TEXTURE3D;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0008_v0_0_s_ifspec;
#ifndef __ID3D10Texture3D_INTERFACE_DEFINED__
#define __ID3D10Texture3D_INTERFACE_DEFINED__
extern const IID IID_ID3D10Texture3D;
typedef struct ID3D10Texture3DVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10Texture3D *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10Texture3D *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10Texture3D *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10Texture3D *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10Texture3D *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10Texture3D *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10Texture3D *This, REFGUID guid, const IUnknown *pData);
	void (STDMETHODCALLTYPE *GetType) (ID3D10Texture3D *This, D3D10_RESOURCE_DIMENSION *rType);
	void (STDMETHODCALLTYPE *SetEvictionPriority) (ID3D10Texture3D *This, UINT EvictionPriority);
	UINT(STDMETHODCALLTYPE *GetEvictionPriority) (ID3D10Texture3D *This);
	HRESULT(STDMETHODCALLTYPE *Map) (ID3D10Texture3D *This, UINT Subresource, D3D10_MAP MapType, UINT MapFlags, D3D10_MAPPED_TEXTURE3D *pMappedTex3D);
	void (STDMETHODCALLTYPE *Unmap) (ID3D10Texture3D *This, UINT Subresource);
	void (STDMETHODCALLTYPE *GetDesc) (ID3D10Texture3D *This, D3D10_TEXTURE3D_DESC *pDesc);
	END_INTERFACE
} ID3D10Texture3DVtbl;
interface ID3D10Texture3D
{
	CONST_VTBL struct ID3D10Texture3DVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10Texture3D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10Texture3D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10Texture3D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10Texture3D_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10Texture3D_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10Texture3D_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10Texture3D_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10Texture3D_GetType(This,rType)	\
    ( (This)->lpVtbl -> GetType(This,rType) )
#define ID3D10Texture3D_SetEvictionPriority(This,EvictionPriority)	\
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
#define ID3D10Texture3D_GetEvictionPriority(This)	\
    ( (This)->lpVtbl -> GetEvictionPriority(This) )
#define ID3D10Texture3D_Map(This,Subresource,MapType,MapFlags,pMappedTex3D)	\
    ( (This)->lpVtbl -> Map(This,Subresource,MapType,MapFlags,pMappedTex3D) )
#define ID3D10Texture3D_Unmap(This,Subresource)	\
    ( (This)->lpVtbl -> Unmap(This,Subresource) )
#define ID3D10Texture3D_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#endif
#endif
typedef enum D3D10_TEXTURECUBE_FACE
{ D3D10_TEXTURECUBE_FACE_POSITIVE_X = 0,
	D3D10_TEXTURECUBE_FACE_NEGATIVE_X = 1,
	D3D10_TEXTURECUBE_FACE_POSITIVE_Y = 2,
	D3D10_TEXTURECUBE_FACE_NEGATIVE_Y = 3,
	D3D10_TEXTURECUBE_FACE_POSITIVE_Z = 4,
	D3D10_TEXTURECUBE_FACE_NEGATIVE_Z = 5
} D3D10_TEXTURECUBE_FACE;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0009_v0_0_s_ifspec;
#ifndef __ID3D10View_INTERFACE_DEFINED__
#define __ID3D10View_INTERFACE_DEFINED__
extern const IID IID_ID3D10View;
typedef struct ID3D10ViewVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10View *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10View *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10View *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10View *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10View *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10View *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10View *This, REFGUID guid, const IUnknown *pData);
	void (STDMETHODCALLTYPE *GetResource) (ID3D10View *This, ID3D10Resource **ppResource);
	END_INTERFACE
} ID3D10ViewVtbl;
interface ID3D10View
{
	CONST_VTBL struct ID3D10ViewVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10View_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10View_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10View_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10View_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10View_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10View_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10View_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10View_GetResource(This,ppResource)	\
    ( (This)->lpVtbl -> GetResource(This,ppResource) )
#endif
#endif
typedef struct D3D10_BUFFER_SRV
{
	union
	{
		UINT FirstElement;
		UINT ElementOffset;
	};
	union
	{
		UINT NumElements;
		UINT ElementWidth;
	};
} D3D10_BUFFER_SRV;
typedef struct D3D10_TEX1D_SRV
{
	UINT MostDetailedMip;
	UINT MipLevels;
} D3D10_TEX1D_SRV;
typedef struct D3D10_TEX1D_ARRAY_SRV
{
	UINT MostDetailedMip;
	UINT MipLevels;
	UINT FirstArraySlice;
	UINT ArraySize;
} D3D10_TEX1D_ARRAY_SRV;
typedef struct D3D10_TEX2D_SRV
{
	UINT MostDetailedMip;
	UINT MipLevels;
} D3D10_TEX2D_SRV;
typedef struct D3D10_TEX2D_ARRAY_SRV
{
	UINT MostDetailedMip;
	UINT MipLevels;
	UINT FirstArraySlice;
	UINT ArraySize;
} D3D10_TEX2D_ARRAY_SRV;
typedef struct D3D10_TEX3D_SRV
{
	UINT MostDetailedMip;
	UINT MipLevels;
} D3D10_TEX3D_SRV;
typedef struct D3D10_TEXCUBE_SRV
{
	UINT MostDetailedMip;
	UINT MipLevels;
} D3D10_TEXCUBE_SRV;
typedef struct D3D10_TEX2DMS_SRV
{
	UINT UnusedField_NothingToDefine;
} D3D10_TEX2DMS_SRV;
typedef struct D3D10_TEX2DMS_ARRAY_SRV
{
	UINT FirstArraySlice;
	UINT ArraySize;
} D3D10_TEX2DMS_ARRAY_SRV;
typedef struct D3D10_SHADER_RESOURCE_VIEW_DESC
{
	DXGI_FORMAT Format;
	D3D10_SRV_DIMENSION ViewDimension;
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
	};
} D3D10_SHADER_RESOURCE_VIEW_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0010_v0_0_s_ifspec;
#ifndef __ID3D10ShaderResourceView_INTERFACE_DEFINED__
#define __ID3D10ShaderResourceView_INTERFACE_DEFINED__
extern const IID IID_ID3D10ShaderResourceView;
typedef struct ID3D10ShaderResourceViewVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10ShaderResourceView *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10ShaderResourceView *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10ShaderResourceView *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10ShaderResourceView *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10ShaderResourceView *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10ShaderResourceView *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10ShaderResourceView *This, REFGUID guid, const IUnknown *pData);
	void (STDMETHODCALLTYPE *GetResource) (ID3D10ShaderResourceView *This, ID3D10Resource **ppResource);
	void (STDMETHODCALLTYPE *GetDesc) (ID3D10ShaderResourceView *This, D3D10_SHADER_RESOURCE_VIEW_DESC *pDesc);
	END_INTERFACE
} ID3D10ShaderResourceViewVtbl;
interface ID3D10ShaderResourceView
{
	CONST_VTBL struct ID3D10ShaderResourceViewVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10ShaderResourceView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10ShaderResourceView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10ShaderResourceView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10ShaderResourceView_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10ShaderResourceView_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10ShaderResourceView_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10ShaderResourceView_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10ShaderResourceView_GetResource(This,ppResource)	\
    ( (This)->lpVtbl -> GetResource(This,ppResource) )
#define ID3D10ShaderResourceView_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#endif
#endif
typedef struct D3D10_BUFFER_RTV
{
	union
{
		UINT FirstElement;
		UINT ElementOffset;
	};
	union
{
		UINT NumElements;
		UINT ElementWidth;
	};
} D3D10_BUFFER_RTV;
typedef struct D3D10_TEX1D_RTV
{
	UINT MipSlice;
} D3D10_TEX1D_RTV;
typedef struct D3D10_TEX1D_ARRAY_RTV
{
	UINT MipSlice;
	UINT FirstArraySlice;
	UINT ArraySize;
} D3D10_TEX1D_ARRAY_RTV;
typedef struct D3D10_TEX2D_RTV
{
	UINT MipSlice;
} D3D10_TEX2D_RTV;
typedef struct D3D10_TEX2DMS_RTV
{
	UINT UnusedField_NothingToDefine;
} D3D10_TEX2DMS_RTV;
typedef struct D3D10_TEX2D_ARRAY_RTV
{
	UINT MipSlice;
	UINT FirstArraySlice;
	UINT ArraySize;
} D3D10_TEX2D_ARRAY_RTV;
typedef struct D3D10_TEX2DMS_ARRAY_RTV
{
	UINT FirstArraySlice;
	UINT ArraySize;
} D3D10_TEX2DMS_ARRAY_RTV;
typedef struct D3D10_TEX3D_RTV
{
	UINT MipSlice;
	UINT FirstWSlice;
	UINT WSize;
} D3D10_TEX3D_RTV;
typedef struct D3D10_RENDER_TARGET_VIEW_DESC
{
	DXGI_FORMAT Format;
	D3D10_RTV_DIMENSION ViewDimension;
	union
{
		D3D10_BUFFER_RTV Buffer;
		D3D10_TEX1D_RTV Texture1D;
		D3D10_TEX1D_ARRAY_RTV Texture1DArray;
		D3D10_TEX2D_RTV Texture2D;
		D3D10_TEX2D_ARRAY_RTV Texture2DArray;
		D3D10_TEX2DMS_RTV Texture2DMS;
		D3D10_TEX2DMS_ARRAY_RTV Texture2DMSArray;
		D3D10_TEX3D_RTV Texture3D;
	};
} D3D10_RENDER_TARGET_VIEW_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0011_v0_0_s_ifspec;
#ifndef __ID3D10RenderTargetView_INTERFACE_DEFINED__
#define __ID3D10RenderTargetView_INTERFACE_DEFINED__
extern const IID IID_ID3D10RenderTargetView;
typedef struct ID3D10RenderTargetViewVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10RenderTargetView *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10RenderTargetView *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10RenderTargetView *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10RenderTargetView *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10RenderTargetView *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10RenderTargetView *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10RenderTargetView *This, REFGUID guid, const IUnknown *pData);
	void (STDMETHODCALLTYPE *GetResource) (ID3D10RenderTargetView *This, ID3D10Resource **ppResource);
	void (STDMETHODCALLTYPE *GetDesc) (ID3D10RenderTargetView *This, D3D10_RENDER_TARGET_VIEW_DESC *pDesc);
	END_INTERFACE
} ID3D10RenderTargetViewVtbl;
interface ID3D10RenderTargetView
{
	CONST_VTBL struct ID3D10RenderTargetViewVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10RenderTargetView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10RenderTargetView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10RenderTargetView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10RenderTargetView_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10RenderTargetView_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10RenderTargetView_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10RenderTargetView_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10RenderTargetView_GetResource(This,ppResource)	\
    ( (This)->lpVtbl -> GetResource(This,ppResource) )
#define ID3D10RenderTargetView_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#endif
#endif
typedef struct D3D10_TEX1D_DSV
{
	UINT MipSlice;
} D3D10_TEX1D_DSV;
typedef struct D3D10_TEX1D_ARRAY_DSV
{
	UINT MipSlice;
	UINT FirstArraySlice;
	UINT ArraySize;
} D3D10_TEX1D_ARRAY_DSV;
typedef struct D3D10_TEX2D_DSV
{
	UINT MipSlice;
} D3D10_TEX2D_DSV;
typedef struct D3D10_TEX2D_ARRAY_DSV
{
	UINT MipSlice;
	UINT FirstArraySlice;
	UINT ArraySize;
} D3D10_TEX2D_ARRAY_DSV;
typedef struct D3D10_TEX2DMS_DSV
{
	UINT UnusedField_NothingToDefine;
} D3D10_TEX2DMS_DSV;
typedef struct D3D10_TEX2DMS_ARRAY_DSV
{
	UINT FirstArraySlice;
	UINT ArraySize;
} D3D10_TEX2DMS_ARRAY_DSV;
typedef struct D3D10_DEPTH_STENCIL_VIEW_DESC
{
	DXGI_FORMAT Format;
	D3D10_DSV_DIMENSION ViewDimension;
	union
{
		D3D10_TEX1D_DSV Texture1D;
		D3D10_TEX1D_ARRAY_DSV Texture1DArray;
		D3D10_TEX2D_DSV Texture2D;
		D3D10_TEX2D_ARRAY_DSV Texture2DArray;
		D3D10_TEX2DMS_DSV Texture2DMS;
		D3D10_TEX2DMS_ARRAY_DSV Texture2DMSArray;
	};
} D3D10_DEPTH_STENCIL_VIEW_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0012_v0_0_s_ifspec;
#ifndef __ID3D10DepthStencilView_INTERFACE_DEFINED__
#define __ID3D10DepthStencilView_INTERFACE_DEFINED__
extern const IID IID_ID3D10DepthStencilView;
typedef struct ID3D10DepthStencilViewVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10DepthStencilView *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10DepthStencilView *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10DepthStencilView *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10DepthStencilView *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10DepthStencilView *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10DepthStencilView *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10DepthStencilView *This, REFGUID guid, const IUnknown *pData);
	void (STDMETHODCALLTYPE *GetResource) (ID3D10DepthStencilView *This, ID3D10Resource **ppResource);
	void (STDMETHODCALLTYPE *GetDesc) (ID3D10DepthStencilView *This, D3D10_DEPTH_STENCIL_VIEW_DESC *pDesc);
	END_INTERFACE
} ID3D10DepthStencilViewVtbl;
interface ID3D10DepthStencilView
{
	CONST_VTBL struct ID3D10DepthStencilViewVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10DepthStencilView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10DepthStencilView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10DepthStencilView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10DepthStencilView_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10DepthStencilView_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10DepthStencilView_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10DepthStencilView_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10DepthStencilView_GetResource(This,ppResource)	\
    ( (This)->lpVtbl -> GetResource(This,ppResource) )
#define ID3D10DepthStencilView_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#endif
#endif
#ifndef __ID3D10VertexShader_INTERFACE_DEFINED__
#define __ID3D10VertexShader_INTERFACE_DEFINED__
extern const IID IID_ID3D10VertexShader;
typedef struct ID3D10VertexShaderVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10VertexShader *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10VertexShader *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10VertexShader *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10VertexShader *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10VertexShader *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10VertexShader *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10VertexShader *This, REFGUID guid, const IUnknown *pData);
	END_INTERFACE
} ID3D10VertexShaderVtbl;
interface ID3D10VertexShader
{
	CONST_VTBL struct ID3D10VertexShaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10VertexShader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10VertexShader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10VertexShader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10VertexShader_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10VertexShader_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10VertexShader_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10VertexShader_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#endif
#endif
#ifndef __ID3D10GeometryShader_INTERFACE_DEFINED__
#define __ID3D10GeometryShader_INTERFACE_DEFINED__
extern const IID IID_ID3D10GeometryShader;
typedef struct ID3D10GeometryShaderVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10GeometryShader *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10GeometryShader *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10GeometryShader *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10GeometryShader *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10GeometryShader *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10GeometryShader *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10GeometryShader *This, REFGUID guid, const IUnknown *pData);
	END_INTERFACE
} ID3D10GeometryShaderVtbl;
interface ID3D10GeometryShader
{
	CONST_VTBL struct ID3D10GeometryShaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10GeometryShader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10GeometryShader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10GeometryShader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10GeometryShader_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10GeometryShader_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10GeometryShader_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10GeometryShader_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#endif
#endif
#ifndef __ID3D10PixelShader_INTERFACE_DEFINED__
#define __ID3D10PixelShader_INTERFACE_DEFINED__
extern const IID IID_ID3D10PixelShader;
typedef struct ID3D10PixelShaderVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10PixelShader *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10PixelShader *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10PixelShader *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10PixelShader *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10PixelShader *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10PixelShader *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10PixelShader *This, REFGUID guid, const IUnknown *pData);
	END_INTERFACE
} ID3D10PixelShaderVtbl;
interface ID3D10PixelShader
{
	CONST_VTBL struct ID3D10PixelShaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10PixelShader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10PixelShader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10PixelShader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10PixelShader_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10PixelShader_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10PixelShader_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10PixelShader_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#endif
#endif
#ifndef __ID3D10InputLayout_INTERFACE_DEFINED__
#define __ID3D10InputLayout_INTERFACE_DEFINED__
extern const IID IID_ID3D10InputLayout;
typedef struct ID3D10InputLayoutVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10InputLayout *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10InputLayout *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10InputLayout *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10InputLayout *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10InputLayout *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10InputLayout *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10InputLayout *This, REFGUID guid, const IUnknown *pData);
	END_INTERFACE
} ID3D10InputLayoutVtbl;
interface ID3D10InputLayout
{
	CONST_VTBL struct ID3D10InputLayoutVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10InputLayout_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10InputLayout_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10InputLayout_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10InputLayout_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10InputLayout_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10InputLayout_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10InputLayout_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#endif
#endif
typedef enum D3D10_FILTER
{ D3D10_FILTER_MIN_MAG_MIP_POINT = 0,
	D3D10_FILTER_MIN_MAG_POINT_MIP_LINEAR = 0x1,
	D3D10_FILTER_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x4,
	D3D10_FILTER_MIN_POINT_MAG_MIP_LINEAR = 0x5,
	D3D10_FILTER_MIN_LINEAR_MAG_MIP_POINT = 0x10,
	D3D10_FILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x11,
	D3D10_FILTER_MIN_MAG_LINEAR_MIP_POINT = 0x14,
	D3D10_FILTER_MIN_MAG_MIP_LINEAR = 0x15,
	D3D10_FILTER_ANISOTROPIC = 0x55,
	D3D10_FILTER_COMPARISON_MIN_MAG_MIP_POINT = 0x80,
	D3D10_FILTER_COMPARISON_MIN_MAG_POINT_MIP_LINEAR = 0x81,
	D3D10_FILTER_COMPARISON_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x84,
	D3D10_FILTER_COMPARISON_MIN_POINT_MAG_MIP_LINEAR = 0x85,
	D3D10_FILTER_COMPARISON_MIN_LINEAR_MAG_MIP_POINT = 0x90,
	D3D10_FILTER_COMPARISON_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x91,
	D3D10_FILTER_COMPARISON_MIN_MAG_LINEAR_MIP_POINT = 0x94,
	D3D10_FILTER_COMPARISON_MIN_MAG_MIP_LINEAR = 0x95,
	D3D10_FILTER_COMPARISON_ANISOTROPIC = 0xd5,
	D3D10_FILTER_TEXT_1BIT = 0x80000000
} D3D10_FILTER;
typedef enum D3D10_FILTER_TYPE
{ D3D10_FILTER_TYPE_POINT = 0,
	D3D10_FILTER_TYPE_LINEAR = 1
} D3D10_FILTER_TYPE;
#define	D3D10_FILTER_TYPE_MASK	( 0x3 )
#define	D3D10_MIN_FILTER_SHIFT	( 4 )
#define	D3D10_MAG_FILTER_SHIFT	( 2 )
#define	D3D10_MIP_FILTER_SHIFT	( 0 )
#define	D3D10_COMPARISON_FILTERING_BIT	( 0x80 )
#define	D3D10_ANISOTROPIC_FILTERING_BIT	( 0x40 )
#define	D3D10_TEXT_1BIT_BIT	( 0x80000000 )
#define D3D10_ENCODE_BASIC_FILTER( min, mag, mip, bComparison )                                           \
                                   ( ( D3D10_FILTER ) (                                                   \
                                   ( ( bComparison ) ? D3D10_COMPARISON_FILTERING_BIT : 0 ) |             \
                                   ( ( ( min ) & D3D10_FILTER_TYPE_MASK ) << D3D10_MIN_FILTER_SHIFT ) |   \
                                   ( ( ( mag ) & D3D10_FILTER_TYPE_MASK ) << D3D10_MAG_FILTER_SHIFT ) |   \
                                   ( ( ( mip ) & D3D10_FILTER_TYPE_MASK ) << D3D10_MIP_FILTER_SHIFT ) ) )
#define D3D10_ENCODE_ANISOTROPIC_FILTER( bComparison )                                                \
                                         ( ( D3D10_FILTER ) (                                         \
                                         D3D10_ANISOTROPIC_FILTERING_BIT |                            \
                                         D3D10_ENCODE_BASIC_FILTER( D3D10_FILTER_TYPE_LINEAR,         \
                                                                    D3D10_FILTER_TYPE_LINEAR,         \
                                                                    D3D10_FILTER_TYPE_LINEAR,         \
                                                                    bComparison ) ) )
#define D3D10_DECODE_MIN_FILTER( d3d10Filter )                                                              \
                                 ( ( D3D10_FILTER_TYPE )                                                    \
                                 ( ( ( d3d10Filter ) >> D3D10_MIN_FILTER_SHIFT ) & D3D10_FILTER_TYPE_MASK ) )
#define D3D10_DECODE_MAG_FILTER( d3d10Filter )                                                              \
                                 ( ( D3D10_FILTER_TYPE )                                                    \
                                 ( ( ( d3d10Filter ) >> D3D10_MAG_FILTER_SHIFT ) & D3D10_FILTER_TYPE_MASK ) )
#define D3D10_DECODE_MIP_FILTER( d3d10Filter )                                                              \
                                 ( ( D3D10_FILTER_TYPE )                                                    \
                                 ( ( ( d3d10Filter ) >> D3D10_MIP_FILTER_SHIFT ) & D3D10_FILTER_TYPE_MASK ) )
#define D3D10_DECODE_IS_COMPARISON_FILTER( d3d10Filter )                                                    \
                                 ( ( d3d10Filter ) & D3D10_COMPARISON_FILTERING_BIT )
#define D3D10_DECODE_IS_ANISOTROPIC_FILTER( d3d10Filter )                                               \
                            ( ( ( d3d10Filter ) & D3D10_ANISOTROPIC_FILTERING_BIT ) &&                  \
                            ( D3D10_FILTER_TYPE_LINEAR == D3D10_DECODE_MIN_FILTER( d3d10Filter ) ) &&   \
                            ( D3D10_FILTER_TYPE_LINEAR == D3D10_DECODE_MAG_FILTER( d3d10Filter ) ) &&   \
                            ( D3D10_FILTER_TYPE_LINEAR == D3D10_DECODE_MIP_FILTER( d3d10Filter ) ) )
#define D3D10_DECODE_IS_TEXT_1BIT_FILTER( d3d10Filter )                                             \
                                 ( ( d3d10Filter ) == D3D10_TEXT_1BIT_BIT )
typedef enum D3D10_TEXTURE_ADDRESS_MODE
{ D3D10_TEXTURE_ADDRESS_WRAP = 1,
	D3D10_TEXTURE_ADDRESS_MIRROR = 2,
	D3D10_TEXTURE_ADDRESS_CLAMP = 3,
	D3D10_TEXTURE_ADDRESS_BORDER = 4,
	D3D10_TEXTURE_ADDRESS_MIRROR_ONCE = 5
} D3D10_TEXTURE_ADDRESS_MODE;
typedef struct D3D10_SAMPLER_DESC
{
	D3D10_FILTER Filter;
	D3D10_TEXTURE_ADDRESS_MODE AddressU;
	D3D10_TEXTURE_ADDRESS_MODE AddressV;
	D3D10_TEXTURE_ADDRESS_MODE AddressW;
	FLOAT MipLODBias;
	UINT MaxAnisotropy;
	D3D10_COMPARISON_FUNC ComparisonFunc;
	FLOAT BorderColor[4];
	FLOAT MinLOD;
	FLOAT MaxLOD;
} D3D10_SAMPLER_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0017_v0_0_s_ifspec;
#ifndef __ID3D10SamplerState_INTERFACE_DEFINED__
#define __ID3D10SamplerState_INTERFACE_DEFINED__
extern const IID IID_ID3D10SamplerState;
typedef struct ID3D10SamplerStateVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10SamplerState *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10SamplerState *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10SamplerState *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10SamplerState *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10SamplerState *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10SamplerState *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10SamplerState *This, REFGUID guid, const IUnknown *pData);
	void (STDMETHODCALLTYPE *GetDesc) (ID3D10SamplerState *This, D3D10_SAMPLER_DESC *pDesc);
	END_INTERFACE
} ID3D10SamplerStateVtbl;
interface ID3D10SamplerState
{
	CONST_VTBL struct ID3D10SamplerStateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10SamplerState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10SamplerState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10SamplerState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10SamplerState_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10SamplerState_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10SamplerState_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10SamplerState_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10SamplerState_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#endif
#endif
typedef enum D3D10_FORMAT_SUPPORT
{ D3D10_FORMAT_SUPPORT_BUFFER = 0x1,
	D3D10_FORMAT_SUPPORT_IA_VERTEX_BUFFER = 0x2,
	D3D10_FORMAT_SUPPORT_IA_INDEX_BUFFER = 0x4,
	D3D10_FORMAT_SUPPORT_SO_BUFFER = 0x8,
	D3D10_FORMAT_SUPPORT_TEXTURE1D = 0x10,
	D3D10_FORMAT_SUPPORT_TEXTURE2D = 0x20,
	D3D10_FORMAT_SUPPORT_TEXTURE3D = 0x40,
	D3D10_FORMAT_SUPPORT_TEXTURECUBE = 0x80,
	D3D10_FORMAT_SUPPORT_SHADER_LOAD = 0x100,
	D3D10_FORMAT_SUPPORT_SHADER_SAMPLE = 0x200,
	D3D10_FORMAT_SUPPORT_SHADER_SAMPLE_COMPARISON = 0x400,
	D3D10_FORMAT_SUPPORT_SHADER_SAMPLE_MONO_TEXT = 0x800,
	D3D10_FORMAT_SUPPORT_MIP = 0x1000,
	D3D10_FORMAT_SUPPORT_MIP_AUTOGEN = 0x2000,
	D3D10_FORMAT_SUPPORT_RENDER_TARGET = 0x4000,
	D3D10_FORMAT_SUPPORT_BLENDABLE = 0x8000,
	D3D10_FORMAT_SUPPORT_DEPTH_STENCIL = 0x10000,
	D3D10_FORMAT_SUPPORT_CPU_LOCKABLE = 0x20000,
	D3D10_FORMAT_SUPPORT_MULTISAMPLE_RESOLVE = 0x40000,
	D3D10_FORMAT_SUPPORT_DISPLAY = 0x80000,
	D3D10_FORMAT_SUPPORT_CAST_WITHIN_BIT_LAYOUT = 0x100000,
	D3D10_FORMAT_SUPPORT_MULTISAMPLE_RENDERTARGET = 0x200000,
	D3D10_FORMAT_SUPPORT_MULTISAMPLE_LOAD = 0x400000,
	D3D10_FORMAT_SUPPORT_SHADER_GATHER = 0x800000,
	D3D10_FORMAT_SUPPORT_BACK_BUFFER_CAST = 0x1000000
} D3D10_FORMAT_SUPPORT;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0018_v0_0_s_ifspec;
#ifndef __ID3D10Asynchronous_INTERFACE_DEFINED__
#define __ID3D10Asynchronous_INTERFACE_DEFINED__
extern const IID IID_ID3D10Asynchronous;
typedef struct ID3D10AsynchronousVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10Asynchronous *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10Asynchronous *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10Asynchronous *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10Asynchronous *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10Asynchronous *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10Asynchronous *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10Asynchronous *This, REFGUID guid, const IUnknown *pData);
	void (STDMETHODCALLTYPE *Begin) (ID3D10Asynchronous *This);
	void (STDMETHODCALLTYPE *End) (ID3D10Asynchronous *This);
	HRESULT(STDMETHODCALLTYPE *GetData) (ID3D10Asynchronous *This, void *pData, UINT DataSize, UINT GetDataFlags);
	UINT(STDMETHODCALLTYPE *GetDataSize) (ID3D10Asynchronous *This);
	END_INTERFACE
} ID3D10AsynchronousVtbl;
interface ID3D10Asynchronous
{
	CONST_VTBL struct ID3D10AsynchronousVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10Asynchronous_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10Asynchronous_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10Asynchronous_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10Asynchronous_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10Asynchronous_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10Asynchronous_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10Asynchronous_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10Asynchronous_Begin(This)	\
    ( (This)->lpVtbl -> Begin(This) )
#define ID3D10Asynchronous_End(This)	\
    ( (This)->lpVtbl -> End(This) )
#define ID3D10Asynchronous_GetData(This,pData,DataSize,GetDataFlags)	\
    ( (This)->lpVtbl -> GetData(This,pData,DataSize,GetDataFlags) )
#define ID3D10Asynchronous_GetDataSize(This)	\
    ( (This)->lpVtbl -> GetDataSize(This) )
#endif
#endif
typedef enum D3D10_ASYNC_GETDATA_FLAG
{ D3D10_ASYNC_GETDATA_DONOTFLUSH = 0x1
} D3D10_ASYNC_GETDATA_FLAG;
typedef enum D3D10_QUERY
{ D3D10_QUERY_EVENT = 0,
	D3D10_QUERY_OCCLUSION = (D3D10_QUERY_EVENT + 1),
	D3D10_QUERY_TIMESTAMP = (D3D10_QUERY_OCCLUSION + 1),
	D3D10_QUERY_TIMESTAMP_DISJOINT = (D3D10_QUERY_TIMESTAMP + 1),
	D3D10_QUERY_PIPELINE_STATISTICS = (D3D10_QUERY_TIMESTAMP_DISJOINT + 1),
	D3D10_QUERY_OCCLUSION_PREDICATE = (D3D10_QUERY_PIPELINE_STATISTICS + 1),
	D3D10_QUERY_SO_STATISTICS = (D3D10_QUERY_OCCLUSION_PREDICATE + 1),
	D3D10_QUERY_SO_OVERFLOW_PREDICATE = (D3D10_QUERY_SO_STATISTICS + 1)
} D3D10_QUERY;
typedef enum D3D10_QUERY_MISC_FLAG
{ D3D10_QUERY_MISC_PREDICATEHINT = 0x1
} D3D10_QUERY_MISC_FLAG;
typedef struct D3D10_QUERY_DESC
{
	D3D10_QUERY Query;
	UINT MiscFlags;
} D3D10_QUERY_DESC;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0019_v0_0_s_ifspec;
#ifndef __ID3D10Query_INTERFACE_DEFINED__
#define __ID3D10Query_INTERFACE_DEFINED__
extern const IID IID_ID3D10Query;
typedef struct ID3D10QueryVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10Query *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10Query *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10Query *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10Query *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10Query *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10Query *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10Query *This, REFGUID guid, const IUnknown *pData);
	void (STDMETHODCALLTYPE *Begin) (ID3D10Query *This);
	void (STDMETHODCALLTYPE *End) (ID3D10Query *This);
	HRESULT(STDMETHODCALLTYPE *GetData) (ID3D10Query *This, void *pData, UINT DataSize, UINT GetDataFlags);
	UINT(STDMETHODCALLTYPE *GetDataSize) (ID3D10Query *This);
	void (STDMETHODCALLTYPE *GetDesc) (ID3D10Query *This, D3D10_QUERY_DESC *pDesc);
	END_INTERFACE
} ID3D10QueryVtbl;
interface ID3D10Query
{
	CONST_VTBL struct ID3D10QueryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10Query_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10Query_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10Query_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10Query_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10Query_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10Query_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10Query_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10Query_Begin(This)	\
    ( (This)->lpVtbl -> Begin(This) )
#define ID3D10Query_End(This)	\
    ( (This)->lpVtbl -> End(This) )
#define ID3D10Query_GetData(This,pData,DataSize,GetDataFlags)	\
    ( (This)->lpVtbl -> GetData(This,pData,DataSize,GetDataFlags) )
#define ID3D10Query_GetDataSize(This)	\
    ( (This)->lpVtbl -> GetDataSize(This) )
#define ID3D10Query_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#endif
#endif
#ifndef __ID3D10Predicate_INTERFACE_DEFINED__
#define __ID3D10Predicate_INTERFACE_DEFINED__
extern const IID IID_ID3D10Predicate;
typedef struct ID3D10PredicateVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10Predicate *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10Predicate *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10Predicate *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10Predicate *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10Predicate *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10Predicate *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10Predicate *This, REFGUID guid, const IUnknown *pData);
	void (STDMETHODCALLTYPE *Begin) (ID3D10Predicate *This);
	void (STDMETHODCALLTYPE *End) (ID3D10Predicate *This);
	HRESULT(STDMETHODCALLTYPE *GetData) (ID3D10Predicate *This, void *pData, UINT DataSize, UINT GetDataFlags);
	UINT(STDMETHODCALLTYPE *GetDataSize) (ID3D10Predicate *This);
	void (STDMETHODCALLTYPE *GetDesc) (ID3D10Predicate *This, D3D10_QUERY_DESC *pDesc);
	END_INTERFACE
} ID3D10PredicateVtbl;
interface ID3D10Predicate
{
	CONST_VTBL struct ID3D10PredicateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10Predicate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10Predicate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10Predicate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10Predicate_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10Predicate_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10Predicate_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10Predicate_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10Predicate_Begin(This)	\
    ( (This)->lpVtbl -> Begin(This) )
#define ID3D10Predicate_End(This)	\
    ( (This)->lpVtbl -> End(This) )
#define ID3D10Predicate_GetData(This,pData,DataSize,GetDataFlags)	\
    ( (This)->lpVtbl -> GetData(This,pData,DataSize,GetDataFlags) )
#define ID3D10Predicate_GetDataSize(This)	\
    ( (This)->lpVtbl -> GetDataSize(This) )
#define ID3D10Predicate_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#endif
#endif
typedef struct D3D10_QUERY_DATA_TIMESTAMP_DISJOINT
{
	UINT64 Frequency;
	BOOL Disjoint;
} D3D10_QUERY_DATA_TIMESTAMP_DISJOINT;
typedef struct D3D10_QUERY_DATA_PIPELINE_STATISTICS
{
	UINT64 IAVertices;
	UINT64 IAPrimitives;
	UINT64 VSInvocations;
	UINT64 GSInvocations;
	UINT64 GSPrimitives;
	UINT64 CInvocations;
	UINT64 CPrimitives;
	UINT64 PSInvocations;
} D3D10_QUERY_DATA_PIPELINE_STATISTICS;
typedef struct D3D10_QUERY_DATA_SO_STATISTICS
{
	UINT64 NumPrimitivesWritten;
	UINT64 PrimitivesStorageNeeded;
} D3D10_QUERY_DATA_SO_STATISTICS;
typedef enum D3D10_COUNTER
{ D3D10_COUNTER_GPU_IDLE = 0,
	D3D10_COUNTER_VERTEX_PROCESSING = (D3D10_COUNTER_GPU_IDLE + 1),
	D3D10_COUNTER_GEOMETRY_PROCESSING = (D3D10_COUNTER_VERTEX_PROCESSING + 1),
	D3D10_COUNTER_PIXEL_PROCESSING = (D3D10_COUNTER_GEOMETRY_PROCESSING + 1),
	D3D10_COUNTER_OTHER_GPU_PROCESSING = (D3D10_COUNTER_PIXEL_PROCESSING + 1),
	D3D10_COUNTER_HOST_ADAPTER_BANDWIDTH_UTILIZATION = (D3D10_COUNTER_OTHER_GPU_PROCESSING + 1),
	D3D10_COUNTER_LOCAL_VIDMEM_BANDWIDTH_UTILIZATION = (D3D10_COUNTER_HOST_ADAPTER_BANDWIDTH_UTILIZATION + 1),
	D3D10_COUNTER_VERTEX_THROUGHPUT_UTILIZATION = (D3D10_COUNTER_LOCAL_VIDMEM_BANDWIDTH_UTILIZATION + 1),
	D3D10_COUNTER_TRIANGLE_SETUP_THROUGHPUT_UTILIZATION = (D3D10_COUNTER_VERTEX_THROUGHPUT_UTILIZATION + 1),
	D3D10_COUNTER_FILLRATE_THROUGHPUT_UTILIZATION = (D3D10_COUNTER_TRIANGLE_SETUP_THROUGHPUT_UTILIZATION + 1),
	D3D10_COUNTER_VS_MEMORY_LIMITED = (D3D10_COUNTER_FILLRATE_THROUGHPUT_UTILIZATION + 1),
	D3D10_COUNTER_VS_COMPUTATION_LIMITED = (D3D10_COUNTER_VS_MEMORY_LIMITED + 1),
	D3D10_COUNTER_GS_MEMORY_LIMITED = (D3D10_COUNTER_VS_COMPUTATION_LIMITED + 1),
	D3D10_COUNTER_GS_COMPUTATION_LIMITED = (D3D10_COUNTER_GS_MEMORY_LIMITED + 1),
	D3D10_COUNTER_PS_MEMORY_LIMITED = (D3D10_COUNTER_GS_COMPUTATION_LIMITED + 1),
	D3D10_COUNTER_PS_COMPUTATION_LIMITED = (D3D10_COUNTER_PS_MEMORY_LIMITED + 1),
	D3D10_COUNTER_POST_TRANSFORM_CACHE_HIT_RATE = (D3D10_COUNTER_PS_COMPUTATION_LIMITED + 1),
	D3D10_COUNTER_TEXTURE_CACHE_HIT_RATE = (D3D10_COUNTER_POST_TRANSFORM_CACHE_HIT_RATE + 1),
	D3D10_COUNTER_DEVICE_DEPENDENT_0 = 0x40000000
} D3D10_COUNTER;
typedef enum D3D10_COUNTER_TYPE
{ D3D10_COUNTER_TYPE_FLOAT32 = 0,
	D3D10_COUNTER_TYPE_UINT16 = (D3D10_COUNTER_TYPE_FLOAT32 + 1),
	D3D10_COUNTER_TYPE_UINT32 = (D3D10_COUNTER_TYPE_UINT16 + 1),
	D3D10_COUNTER_TYPE_UINT64 = (D3D10_COUNTER_TYPE_UINT32 + 1)
} D3D10_COUNTER_TYPE;
typedef struct D3D10_COUNTER_DESC
{
	D3D10_COUNTER Counter;
	UINT MiscFlags;
} D3D10_COUNTER_DESC;
typedef struct D3D10_COUNTER_INFO
{
	D3D10_COUNTER LastDeviceDependentCounter;
	UINT NumSimultaneousCounters;
	UINT8 NumDetectableParallelUnits;
} D3D10_COUNTER_INFO;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0021_v0_0_s_ifspec;
#ifndef __ID3D10Counter_INTERFACE_DEFINED__
#define __ID3D10Counter_INTERFACE_DEFINED__
extern const IID IID_ID3D10Counter;
typedef struct ID3D10CounterVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10Counter *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10Counter *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10Counter *This);
	void (STDMETHODCALLTYPE *GetDevice) (ID3D10Counter *This, ID3D10Device **ppDevice);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10Counter *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10Counter *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10Counter *This, REFGUID guid, const IUnknown *pData);
	void (STDMETHODCALLTYPE *Begin) (ID3D10Counter *This);
	void (STDMETHODCALLTYPE *End) (ID3D10Counter *This);
	HRESULT(STDMETHODCALLTYPE *GetData) (ID3D10Counter *This, void *pData, UINT DataSize, UINT GetDataFlags);
	UINT(STDMETHODCALLTYPE *GetDataSize) (ID3D10Counter *This);
	void (STDMETHODCALLTYPE *GetDesc) (ID3D10Counter *This, D3D10_COUNTER_DESC *pDesc);
	END_INTERFACE
} ID3D10CounterVtbl;
interface ID3D10Counter
{
	CONST_VTBL struct ID3D10CounterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10Counter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10Counter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10Counter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10Counter_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) )
#define ID3D10Counter_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10Counter_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10Counter_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10Counter_Begin(This)	\
    ( (This)->lpVtbl -> Begin(This) )
#define ID3D10Counter_End(This)	\
    ( (This)->lpVtbl -> End(This) )
#define ID3D10Counter_GetData(This,pData,DataSize,GetDataFlags)	\
    ( (This)->lpVtbl -> GetData(This,pData,DataSize,GetDataFlags) )
#define ID3D10Counter_GetDataSize(This)	\
    ( (This)->lpVtbl -> GetDataSize(This) )
#define ID3D10Counter_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
#endif
#endif
#ifndef __ID3D10Device_INTERFACE_DEFINED__
#define __ID3D10Device_INTERFACE_DEFINED__
extern const IID IID_ID3D10Device;
typedef struct ID3D10DeviceVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10Device *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10Device *This);
	ULONG(STDMETHODCALLTYPE *Release) (ID3D10Device *This);
	void (STDMETHODCALLTYPE *VSSetConstantBuffers) (ID3D10Device *This, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const *ppConstantBuffers);
	void (STDMETHODCALLTYPE *PSSetShaderResources) (ID3D10Device *This, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const *ppShaderResourceViews);
	void (STDMETHODCALLTYPE *PSSetShader) (ID3D10Device *This, ID3D10PixelShader *pPixelShader);
	void (STDMETHODCALLTYPE *PSSetSamplers) (ID3D10Device *This, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const *ppSamplers);
	void (STDMETHODCALLTYPE *VSSetShader) (ID3D10Device *This, ID3D10VertexShader *pVertexShader);
	void (STDMETHODCALLTYPE *DrawIndexed) (ID3D10Device *This, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation);
	void (STDMETHODCALLTYPE *Draw) (ID3D10Device *This, UINT VertexCount, UINT StartVertexLocation);
	void (STDMETHODCALLTYPE *PSSetConstantBuffers) (ID3D10Device *This, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const *ppConstantBuffers);
	void (STDMETHODCALLTYPE *IASetInputLayout) (ID3D10Device *This, ID3D10InputLayout *pInputLayout);
	void (STDMETHODCALLTYPE *IASetVertexBuffers) (ID3D10Device *This, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const *ppVertexBuffers, const UINT *pStrides, const UINT *pOffsets);
	void (STDMETHODCALLTYPE *IASetIndexBuffer) (ID3D10Device *This, ID3D10Buffer *pIndexBuffer, DXGI_FORMAT Format, UINT Offset);
	void (STDMETHODCALLTYPE *DrawIndexedInstanced) (ID3D10Device *This, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
	void (STDMETHODCALLTYPE *DrawInstanced) (ID3D10Device *This, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
	void (STDMETHODCALLTYPE *GSSetConstantBuffers) (ID3D10Device *This, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const *ppConstantBuffers);
	void (STDMETHODCALLTYPE *GSSetShader) (ID3D10Device *This, ID3D10GeometryShader *pShader);
	void (STDMETHODCALLTYPE *IASetPrimitiveTopology) (ID3D10Device *This, D3D10_PRIMITIVE_TOPOLOGY Topology);
	void (STDMETHODCALLTYPE *VSSetShaderResources) (ID3D10Device *This, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const *ppShaderResourceViews);
	void (STDMETHODCALLTYPE *VSSetSamplers) (ID3D10Device *This, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const *ppSamplers);
	void (STDMETHODCALLTYPE *SetPredication) (ID3D10Device *This, ID3D10Predicate *pPredicate, BOOL PredicateValue);
	void (STDMETHODCALLTYPE *GSSetShaderResources) (ID3D10Device *This, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const *ppShaderResourceViews);
	void (STDMETHODCALLTYPE *GSSetSamplers) (ID3D10Device *This, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const *ppSamplers);
	void (STDMETHODCALLTYPE *OMSetRenderTargets) (ID3D10Device *This, UINT NumViews, ID3D10RenderTargetView *const *ppRenderTargetViews, ID3D10DepthStencilView *pDepthStencilView);
	void (STDMETHODCALLTYPE *OMSetBlendState) (ID3D10Device *This, ID3D10BlendState *pBlendState, const FLOAT BlendFactor[4], UINT SampleMask);
	void (STDMETHODCALLTYPE *OMSetDepthStencilState) (ID3D10Device *This, ID3D10DepthStencilState *pDepthStencilState, UINT StencilRef);
	void (STDMETHODCALLTYPE *SOSetTargets) (ID3D10Device *This, UINT NumBuffers, ID3D10Buffer *const *ppSOTargets, const UINT *pOffsets);
	void (STDMETHODCALLTYPE *DrawAuto) (ID3D10Device *This);
	void (STDMETHODCALLTYPE *RSSetState) (ID3D10Device *This, ID3D10RasterizerState *pRasterizerState);
	void (STDMETHODCALLTYPE *RSSetViewports) (ID3D10Device *This, UINT NumViewports, const D3D10_VIEWPORT *pViewports);
	void (STDMETHODCALLTYPE *RSSetScissorRects) (ID3D10Device *This, UINT NumRects, const D3D10_RECT *pRects);
	void (STDMETHODCALLTYPE *CopySubresourceRegion) (ID3D10Device *This, ID3D10Resource *pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D10Resource *pSrcResource, UINT SrcSubresource, const D3D10_BOX *pSrcBox);
	void (STDMETHODCALLTYPE *CopyResource) (ID3D10Device *This, ID3D10Resource *pDstResource, ID3D10Resource *pSrcResource);
	void (STDMETHODCALLTYPE *UpdateSubresource) (ID3D10Device *This, ID3D10Resource *pDstResource, UINT DstSubresource, const D3D10_BOX *pDstBox, const void *pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);
	void (STDMETHODCALLTYPE *ClearRenderTargetView) (ID3D10Device *This, ID3D10RenderTargetView *pRenderTargetView, const FLOAT ColorRGBA[4]);
	void (STDMETHODCALLTYPE *ClearDepthStencilView) (ID3D10Device *This, ID3D10DepthStencilView *pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil);
	void (STDMETHODCALLTYPE *GenerateMips) (ID3D10Device *This, ID3D10ShaderResourceView *pShaderResourceView);
	void (STDMETHODCALLTYPE *ResolveSubresource) (ID3D10Device *This, ID3D10Resource *pDstResource, UINT DstSubresource, ID3D10Resource *pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format);
	void (STDMETHODCALLTYPE *VSGetConstantBuffers) (ID3D10Device *This, UINT StartSlot, UINT NumBuffers, ID3D10Buffer **ppConstantBuffers);
	void (STDMETHODCALLTYPE *PSGetShaderResources) (ID3D10Device *This, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView **ppShaderResourceViews);
	void (STDMETHODCALLTYPE *PSGetShader) (ID3D10Device *This, ID3D10PixelShader **ppPixelShader);
	void (STDMETHODCALLTYPE *PSGetSamplers) (ID3D10Device *This, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState **ppSamplers);
	void (STDMETHODCALLTYPE *VSGetShader) (ID3D10Device *This, ID3D10VertexShader **ppVertexShader);
	void (STDMETHODCALLTYPE *PSGetConstantBuffers) (ID3D10Device *This, UINT StartSlot, UINT NumBuffers, ID3D10Buffer **ppConstantBuffers);
	void (STDMETHODCALLTYPE *IAGetInputLayout) (ID3D10Device *This, ID3D10InputLayout **ppInputLayout);
	void (STDMETHODCALLTYPE *IAGetVertexBuffers) (ID3D10Device *This, UINT StartSlot, UINT NumBuffers, ID3D10Buffer **ppVertexBuffers, UINT *pStrides, UINT *pOffsets);
	void (STDMETHODCALLTYPE *IAGetIndexBuffer) (ID3D10Device *This, ID3D10Buffer **pIndexBuffer, DXGI_FORMAT *Format, UINT *Offset);
	void (STDMETHODCALLTYPE *GSGetConstantBuffers) (ID3D10Device *This, UINT StartSlot, UINT NumBuffers, ID3D10Buffer **ppConstantBuffers);
	void (STDMETHODCALLTYPE *GSGetShader) (ID3D10Device *This, ID3D10GeometryShader **ppGeometryShader);
	void (STDMETHODCALLTYPE *IAGetPrimitiveTopology) (ID3D10Device *This, D3D10_PRIMITIVE_TOPOLOGY *pTopology);
	void (STDMETHODCALLTYPE *VSGetShaderResources) (ID3D10Device *This, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView **ppShaderResourceViews);
	void (STDMETHODCALLTYPE *VSGetSamplers) (ID3D10Device *This, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState **ppSamplers);
	void (STDMETHODCALLTYPE *GetPredication) (ID3D10Device *This, ID3D10Predicate **ppPredicate, BOOL *pPredicateValue);
	void (STDMETHODCALLTYPE *GSGetShaderResources) (ID3D10Device *This, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView **ppShaderResourceViews);
	void (STDMETHODCALLTYPE *GSGetSamplers) (ID3D10Device *This, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState **ppSamplers);
	void (STDMETHODCALLTYPE *OMGetRenderTargets) (ID3D10Device *This, UINT NumViews, ID3D10RenderTargetView **ppRenderTargetViews, ID3D10DepthStencilView **ppDepthStencilView);
	void (STDMETHODCALLTYPE *OMGetBlendState) (ID3D10Device *This, ID3D10BlendState **ppBlendState, FLOAT BlendFactor[4], UINT *pSampleMask);
	void (STDMETHODCALLTYPE *OMGetDepthStencilState) (ID3D10Device *This, ID3D10DepthStencilState **ppDepthStencilState, UINT *pStencilRef);
	void (STDMETHODCALLTYPE *SOGetTargets) (ID3D10Device *This, UINT NumBuffers, ID3D10Buffer **ppSOTargets, UINT *pOffsets);
	void (STDMETHODCALLTYPE *RSGetState) (ID3D10Device *This, ID3D10RasterizerState **ppRasterizerState);
	void (STDMETHODCALLTYPE *RSGetViewports) (ID3D10Device *This, UINT *NumViewports, D3D10_VIEWPORT *pViewports);
	void (STDMETHODCALLTYPE *RSGetScissorRects) (ID3D10Device *This, UINT *NumRects, D3D10_RECT *pRects);
	HRESULT(STDMETHODCALLTYPE *GetDeviceRemovedReason) (ID3D10Device *This);
	HRESULT(STDMETHODCALLTYPE *SetExceptionMode) (ID3D10Device *This, UINT RaiseFlags);
	UINT(STDMETHODCALLTYPE *GetExceptionMode) (ID3D10Device *This);
	HRESULT(STDMETHODCALLTYPE *GetPrivateData) (ID3D10Device *This, REFGUID guid, UINT *pDataSize, void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateData) (ID3D10Device *This, REFGUID guid, UINT DataSize, const void *pData);
	HRESULT(STDMETHODCALLTYPE *SetPrivateDataInterface) (ID3D10Device *This, REFGUID guid, const IUnknown *pData);
	void (STDMETHODCALLTYPE *ClearState) (ID3D10Device *This);
	void (STDMETHODCALLTYPE *Flush) (ID3D10Device *This);
	HRESULT(STDMETHODCALLTYPE *CreateBuffer) (ID3D10Device *This, const D3D10_BUFFER_DESC *pDesc, const D3D10_SUBRESOURCE_DATA *pInitialData, ID3D10Buffer **ppBuffer);
	HRESULT(STDMETHODCALLTYPE *CreateTexture1D) (ID3D10Device *This, const D3D10_TEXTURE1D_DESC *pDesc, const D3D10_SUBRESOURCE_DATA *pInitialData, ID3D10Texture1D **ppTexture1D);
	HRESULT(STDMETHODCALLTYPE *CreateTexture2D) (ID3D10Device *This, const D3D10_TEXTURE2D_DESC *pDesc, const D3D10_SUBRESOURCE_DATA *pInitialData, ID3D10Texture2D **ppTexture2D);
	HRESULT(STDMETHODCALLTYPE *CreateTexture3D) (ID3D10Device *This, const D3D10_TEXTURE3D_DESC *pDesc, const D3D10_SUBRESOURCE_DATA *pInitialData, ID3D10Texture3D **ppTexture3D);
	HRESULT(STDMETHODCALLTYPE *CreateShaderResourceView) (ID3D10Device *This, ID3D10Resource *pResource, const D3D10_SHADER_RESOURCE_VIEW_DESC *pDesc, ID3D10ShaderResourceView **ppSRView);
	HRESULT(STDMETHODCALLTYPE *CreateRenderTargetView) (ID3D10Device *This, ID3D10Resource *pResource, const D3D10_RENDER_TARGET_VIEW_DESC *pDesc, ID3D10RenderTargetView **ppRTView);
	HRESULT(STDMETHODCALLTYPE *CreateDepthStencilView) (ID3D10Device *This, ID3D10Resource *pResource, const D3D10_DEPTH_STENCIL_VIEW_DESC *pDesc, ID3D10DepthStencilView **ppDepthStencilView);
	HRESULT(STDMETHODCALLTYPE *CreateInputLayout) (ID3D10Device *This, const D3D10_INPUT_ELEMENT_DESC *pInputElementDescs, UINT NumElements, const void *pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D10InputLayout **ppInputLayout);
	HRESULT(STDMETHODCALLTYPE *CreateVertexShader) (ID3D10Device *This, const void *pShaderBytecode, SIZE_T BytecodeLength, ID3D10VertexShader **ppVertexShader);
	HRESULT(STDMETHODCALLTYPE *CreateGeometryShader) (ID3D10Device *This, const void *pShaderBytecode, SIZE_T BytecodeLength, ID3D10GeometryShader **ppGeometryShader);
	HRESULT(STDMETHODCALLTYPE *CreateGeometryShaderWithStreamOutput) (ID3D10Device *This, const void *pShaderBytecode, SIZE_T BytecodeLength, const D3D10_SO_DECLARATION_ENTRY *pSODeclaration, UINT NumEntries, UINT OutputStreamStride, ID3D10GeometryShader **ppGeometryShader);
	HRESULT(STDMETHODCALLTYPE *CreatePixelShader) (ID3D10Device *This, const void *pShaderBytecode, SIZE_T BytecodeLength, ID3D10PixelShader **ppPixelShader);
	HRESULT(STDMETHODCALLTYPE *CreateBlendState) (ID3D10Device *This, const D3D10_BLEND_DESC *pBlendStateDesc, ID3D10BlendState **ppBlendState);
	HRESULT(STDMETHODCALLTYPE *CreateDepthStencilState) (ID3D10Device *This, const D3D10_DEPTH_STENCIL_DESC *pDepthStencilDesc, ID3D10DepthStencilState **ppDepthStencilState);
	HRESULT(STDMETHODCALLTYPE *CreateRasterizerState) (ID3D10Device *This, const D3D10_RASTERIZER_DESC *pRasterizerDesc, ID3D10RasterizerState **ppRasterizerState);
	HRESULT(STDMETHODCALLTYPE *CreateSamplerState) (ID3D10Device *This, const D3D10_SAMPLER_DESC *pSamplerDesc, ID3D10SamplerState **ppSamplerState);
	HRESULT(STDMETHODCALLTYPE *CreateQuery) (ID3D10Device *This, const D3D10_QUERY_DESC *pQueryDesc, ID3D10Query **ppQuery);
	HRESULT(STDMETHODCALLTYPE *CreatePredicate) (ID3D10Device *This, const D3D10_QUERY_DESC *pPredicateDesc, ID3D10Predicate **ppPredicate);
	HRESULT(STDMETHODCALLTYPE *CreateCounter) (ID3D10Device *This, const D3D10_COUNTER_DESC *pCounterDesc, ID3D10Counter **ppCounter);
	HRESULT(STDMETHODCALLTYPE *CheckFormatSupport) (ID3D10Device *This, DXGI_FORMAT Format, UINT *pFormatSupport);
	HRESULT(STDMETHODCALLTYPE *CheckMultisampleQualityLevels) (ID3D10Device *This, DXGI_FORMAT Format, UINT SampleCount, UINT *pNumQualityLevels);
	void (STDMETHODCALLTYPE *CheckCounterInfo) (ID3D10Device *This, D3D10_COUNTER_INFO *pCounterInfo);
	HRESULT(STDMETHODCALLTYPE *CheckCounter) (ID3D10Device *This, const D3D10_COUNTER_DESC *pDesc, D3D10_COUNTER_TYPE *pType, UINT *pActiveCounters, LPSTR szName, UINT *pNameLength, LPSTR szUnits, UINT *pUnitsLength, LPSTR szDescription, UINT *pDescriptionLength);
	UINT(STDMETHODCALLTYPE *GetCreationFlags) (ID3D10Device *This);
	HRESULT(STDMETHODCALLTYPE *OpenSharedResource) (ID3D10Device *This, HANDLE hResource, REFIID ReturnedInterface, void **ppResource);
	void (STDMETHODCALLTYPE *SetTextFilterSize) (ID3D10Device *This, UINT Width, UINT Height);
	void (STDMETHODCALLTYPE *GetTextFilterSize) (ID3D10Device *This, UINT *pWidth, UINT *pHeight);
	END_INTERFACE
} ID3D10DeviceVtbl;
interface ID3D10Device
{
	CONST_VTBL struct ID3D10DeviceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10Device_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10Device_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10Device_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10Device_VSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> VSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D10Device_PSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> PSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D10Device_PSSetShader(This,pPixelShader)	\
    ( (This)->lpVtbl -> PSSetShader(This,pPixelShader) )
#define ID3D10Device_PSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> PSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D10Device_VSSetShader(This,pVertexShader)	\
    ( (This)->lpVtbl -> VSSetShader(This,pVertexShader) )
#define ID3D10Device_DrawIndexed(This,IndexCount,StartIndexLocation,BaseVertexLocation)	\
    ( (This)->lpVtbl -> DrawIndexed(This,IndexCount,StartIndexLocation,BaseVertexLocation) )
#define ID3D10Device_Draw(This,VertexCount,StartVertexLocation)	\
    ( (This)->lpVtbl -> Draw(This,VertexCount,StartVertexLocation) )
#define ID3D10Device_PSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> PSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D10Device_IASetInputLayout(This,pInputLayout)	\
    ( (This)->lpVtbl -> IASetInputLayout(This,pInputLayout) )
#define ID3D10Device_IASetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets)	\
    ( (This)->lpVtbl -> IASetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) )
#define ID3D10Device_IASetIndexBuffer(This,pIndexBuffer,Format,Offset)	\
    ( (This)->lpVtbl -> IASetIndexBuffer(This,pIndexBuffer,Format,Offset) )
#define ID3D10Device_DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation)	\
    ( (This)->lpVtbl -> DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation) )
#define ID3D10Device_DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation)	\
    ( (This)->lpVtbl -> DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation) )
#define ID3D10Device_GSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> GSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D10Device_GSSetShader(This,pShader)	\
    ( (This)->lpVtbl -> GSSetShader(This,pShader) )
#define ID3D10Device_IASetPrimitiveTopology(This,Topology)	\
    ( (This)->lpVtbl -> IASetPrimitiveTopology(This,Topology) )
#define ID3D10Device_VSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> VSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D10Device_VSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> VSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D10Device_SetPredication(This,pPredicate,PredicateValue)	\
    ( (This)->lpVtbl -> SetPredication(This,pPredicate,PredicateValue) )
#define ID3D10Device_GSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> GSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D10Device_GSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> GSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D10Device_OMSetRenderTargets(This,NumViews,ppRenderTargetViews,pDepthStencilView)	\
    ( (This)->lpVtbl -> OMSetRenderTargets(This,NumViews,ppRenderTargetViews,pDepthStencilView) )
#define ID3D10Device_OMSetBlendState(This,pBlendState,BlendFactor,SampleMask)	\
    ( (This)->lpVtbl -> OMSetBlendState(This,pBlendState,BlendFactor,SampleMask) )
#define ID3D10Device_OMSetDepthStencilState(This,pDepthStencilState,StencilRef)	\
    ( (This)->lpVtbl -> OMSetDepthStencilState(This,pDepthStencilState,StencilRef) )
#define ID3D10Device_SOSetTargets(This,NumBuffers,ppSOTargets,pOffsets)	\
    ( (This)->lpVtbl -> SOSetTargets(This,NumBuffers,ppSOTargets,pOffsets) )
#define ID3D10Device_DrawAuto(This)	\
    ( (This)->lpVtbl -> DrawAuto(This) )
#define ID3D10Device_RSSetState(This,pRasterizerState)	\
    ( (This)->lpVtbl -> RSSetState(This,pRasterizerState) )
#define ID3D10Device_RSSetViewports(This,NumViewports,pViewports)	\
    ( (This)->lpVtbl -> RSSetViewports(This,NumViewports,pViewports) )
#define ID3D10Device_RSSetScissorRects(This,NumRects,pRects)	\
    ( (This)->lpVtbl -> RSSetScissorRects(This,NumRects,pRects) )
#define ID3D10Device_CopySubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox)	\
    ( (This)->lpVtbl -> CopySubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox) )
#define ID3D10Device_CopyResource(This,pDstResource,pSrcResource)	\
    ( (This)->lpVtbl -> CopyResource(This,pDstResource,pSrcResource) )
#define ID3D10Device_UpdateSubresource(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch)	\
    ( (This)->lpVtbl -> UpdateSubresource(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch) )
#define ID3D10Device_ClearRenderTargetView(This,pRenderTargetView,ColorRGBA)	\
    ( (This)->lpVtbl -> ClearRenderTargetView(This,pRenderTargetView,ColorRGBA) )
#define ID3D10Device_ClearDepthStencilView(This,pDepthStencilView,ClearFlags,Depth,Stencil)	\
    ( (This)->lpVtbl -> ClearDepthStencilView(This,pDepthStencilView,ClearFlags,Depth,Stencil) )
#define ID3D10Device_GenerateMips(This,pShaderResourceView)	\
    ( (This)->lpVtbl -> GenerateMips(This,pShaderResourceView) )
#define ID3D10Device_ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format)	\
    ( (This)->lpVtbl -> ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) )
#define ID3D10Device_VSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> VSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D10Device_PSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> PSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D10Device_PSGetShader(This,ppPixelShader)	\
    ( (This)->lpVtbl -> PSGetShader(This,ppPixelShader) )
#define ID3D10Device_PSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> PSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D10Device_VSGetShader(This,ppVertexShader)	\
    ( (This)->lpVtbl -> VSGetShader(This,ppVertexShader) )
#define ID3D10Device_PSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> PSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D10Device_IAGetInputLayout(This,ppInputLayout)	\
    ( (This)->lpVtbl -> IAGetInputLayout(This,ppInputLayout) )
#define ID3D10Device_IAGetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets)	\
    ( (This)->lpVtbl -> IAGetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) )
#define ID3D10Device_IAGetIndexBuffer(This,pIndexBuffer,Format,Offset)	\
    ( (This)->lpVtbl -> IAGetIndexBuffer(This,pIndexBuffer,Format,Offset) )
#define ID3D10Device_GSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> GSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) )
#define ID3D10Device_GSGetShader(This,ppGeometryShader)	\
    ( (This)->lpVtbl -> GSGetShader(This,ppGeometryShader) )
#define ID3D10Device_IAGetPrimitiveTopology(This,pTopology)	\
    ( (This)->lpVtbl -> IAGetPrimitiveTopology(This,pTopology) )
#define ID3D10Device_VSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> VSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D10Device_VSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> VSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D10Device_GetPredication(This,ppPredicate,pPredicateValue)	\
    ( (This)->lpVtbl -> GetPredication(This,ppPredicate,pPredicateValue) )
#define ID3D10Device_GSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> GSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) )
#define ID3D10Device_GSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> GSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) )
#define ID3D10Device_OMGetRenderTargets(This,NumViews,ppRenderTargetViews,ppDepthStencilView)	\
    ( (This)->lpVtbl -> OMGetRenderTargets(This,NumViews,ppRenderTargetViews,ppDepthStencilView) )
#define ID3D10Device_OMGetBlendState(This,ppBlendState,BlendFactor,pSampleMask)	\
    ( (This)->lpVtbl -> OMGetBlendState(This,ppBlendState,BlendFactor,pSampleMask) )
#define ID3D10Device_OMGetDepthStencilState(This,ppDepthStencilState,pStencilRef)	\
    ( (This)->lpVtbl -> OMGetDepthStencilState(This,ppDepthStencilState,pStencilRef) )
#define ID3D10Device_SOGetTargets(This,NumBuffers,ppSOTargets,pOffsets)	\
    ( (This)->lpVtbl -> SOGetTargets(This,NumBuffers,ppSOTargets,pOffsets) )
#define ID3D10Device_RSGetState(This,ppRasterizerState)	\
    ( (This)->lpVtbl -> RSGetState(This,ppRasterizerState) )
#define ID3D10Device_RSGetViewports(This,NumViewports,pViewports)	\
    ( (This)->lpVtbl -> RSGetViewports(This,NumViewports,pViewports) )
#define ID3D10Device_RSGetScissorRects(This,NumRects,pRects)	\
    ( (This)->lpVtbl -> RSGetScissorRects(This,NumRects,pRects) )
#define ID3D10Device_GetDeviceRemovedReason(This)	\
    ( (This)->lpVtbl -> GetDeviceRemovedReason(This) )
#define ID3D10Device_SetExceptionMode(This,RaiseFlags)	\
    ( (This)->lpVtbl -> SetExceptionMode(This,RaiseFlags) )
#define ID3D10Device_GetExceptionMode(This)	\
    ( (This)->lpVtbl -> GetExceptionMode(This) )
#define ID3D10Device_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) )
#define ID3D10Device_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) )
#define ID3D10Device_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) )
#define ID3D10Device_ClearState(This)	\
    ( (This)->lpVtbl -> ClearState(This) )
#define ID3D10Device_Flush(This)	\
    ( (This)->lpVtbl -> Flush(This) )
#define ID3D10Device_CreateBuffer(This,pDesc,pInitialData,ppBuffer)	\
    ( (This)->lpVtbl -> CreateBuffer(This,pDesc,pInitialData,ppBuffer) )
#define ID3D10Device_CreateTexture1D(This,pDesc,pInitialData,ppTexture1D)	\
    ( (This)->lpVtbl -> CreateTexture1D(This,pDesc,pInitialData,ppTexture1D) )
#define ID3D10Device_CreateTexture2D(This,pDesc,pInitialData,ppTexture2D)	\
    ( (This)->lpVtbl -> CreateTexture2D(This,pDesc,pInitialData,ppTexture2D) )
#define ID3D10Device_CreateTexture3D(This,pDesc,pInitialData,ppTexture3D)	\
    ( (This)->lpVtbl -> CreateTexture3D(This,pDesc,pInitialData,ppTexture3D) )
#define ID3D10Device_CreateShaderResourceView(This,pResource,pDesc,ppSRView)	\
    ( (This)->lpVtbl -> CreateShaderResourceView(This,pResource,pDesc,ppSRView) )
#define ID3D10Device_CreateRenderTargetView(This,pResource,pDesc,ppRTView)	\
    ( (This)->lpVtbl -> CreateRenderTargetView(This,pResource,pDesc,ppRTView) )
#define ID3D10Device_CreateDepthStencilView(This,pResource,pDesc,ppDepthStencilView)	\
    ( (This)->lpVtbl -> CreateDepthStencilView(This,pResource,pDesc,ppDepthStencilView) )
#define ID3D10Device_CreateInputLayout(This,pInputElementDescs,NumElements,pShaderBytecodeWithInputSignature,BytecodeLength,ppInputLayout)	\
    ( (This)->lpVtbl -> CreateInputLayout(This,pInputElementDescs,NumElements,pShaderBytecodeWithInputSignature,BytecodeLength,ppInputLayout) )
#define ID3D10Device_CreateVertexShader(This,pShaderBytecode,BytecodeLength,ppVertexShader)	\
    ( (This)->lpVtbl -> CreateVertexShader(This,pShaderBytecode,BytecodeLength,ppVertexShader) )
#define ID3D10Device_CreateGeometryShader(This,pShaderBytecode,BytecodeLength,ppGeometryShader)	\
    ( (This)->lpVtbl -> CreateGeometryShader(This,pShaderBytecode,BytecodeLength,ppGeometryShader) )
#define ID3D10Device_CreateGeometryShaderWithStreamOutput(This,pShaderBytecode,BytecodeLength,pSODeclaration,NumEntries,OutputStreamStride,ppGeometryShader)	\
    ( (This)->lpVtbl -> CreateGeometryShaderWithStreamOutput(This,pShaderBytecode,BytecodeLength,pSODeclaration,NumEntries,OutputStreamStride,ppGeometryShader) )
#define ID3D10Device_CreatePixelShader(This,pShaderBytecode,BytecodeLength,ppPixelShader)	\
    ( (This)->lpVtbl -> CreatePixelShader(This,pShaderBytecode,BytecodeLength,ppPixelShader) )
#define ID3D10Device_CreateBlendState(This,pBlendStateDesc,ppBlendState)	\
    ( (This)->lpVtbl -> CreateBlendState(This,pBlendStateDesc,ppBlendState) )
#define ID3D10Device_CreateDepthStencilState(This,pDepthStencilDesc,ppDepthStencilState)	\
    ( (This)->lpVtbl -> CreateDepthStencilState(This,pDepthStencilDesc,ppDepthStencilState) )
#define ID3D10Device_CreateRasterizerState(This,pRasterizerDesc,ppRasterizerState)	\
    ( (This)->lpVtbl -> CreateRasterizerState(This,pRasterizerDesc,ppRasterizerState) )
#define ID3D10Device_CreateSamplerState(This,pSamplerDesc,ppSamplerState)	\
    ( (This)->lpVtbl -> CreateSamplerState(This,pSamplerDesc,ppSamplerState) )
#define ID3D10Device_CreateQuery(This,pQueryDesc,ppQuery)	\
    ( (This)->lpVtbl -> CreateQuery(This,pQueryDesc,ppQuery) )
#define ID3D10Device_CreatePredicate(This,pPredicateDesc,ppPredicate)	\
    ( (This)->lpVtbl -> CreatePredicate(This,pPredicateDesc,ppPredicate) )
#define ID3D10Device_CreateCounter(This,pCounterDesc,ppCounter)	\
    ( (This)->lpVtbl -> CreateCounter(This,pCounterDesc,ppCounter) )
#define ID3D10Device_CheckFormatSupport(This,Format,pFormatSupport)	\
    ( (This)->lpVtbl -> CheckFormatSupport(This,Format,pFormatSupport) )
#define ID3D10Device_CheckMultisampleQualityLevels(This,Format,SampleCount,pNumQualityLevels)	\
    ( (This)->lpVtbl -> CheckMultisampleQualityLevels(This,Format,SampleCount,pNumQualityLevels) )
#define ID3D10Device_CheckCounterInfo(This,pCounterInfo)	\
    ( (This)->lpVtbl -> CheckCounterInfo(This,pCounterInfo) )
#define ID3D10Device_CheckCounter(This,pDesc,pType,pActiveCounters,szName,pNameLength,szUnits,pUnitsLength,szDescription,pDescriptionLength)	\
    ( (This)->lpVtbl -> CheckCounter(This,pDesc,pType,pActiveCounters,szName,pNameLength,szUnits,pUnitsLength,szDescription,pDescriptionLength) )
#define ID3D10Device_GetCreationFlags(This)	\
    ( (This)->lpVtbl -> GetCreationFlags(This) )
#define ID3D10Device_OpenSharedResource(This,hResource,ReturnedInterface,ppResource)	\
    ( (This)->lpVtbl -> OpenSharedResource(This,hResource,ReturnedInterface,ppResource) )
#define ID3D10Device_SetTextFilterSize(This,Width,Height)	\
    ( (This)->lpVtbl -> SetTextFilterSize(This,Width,Height) )
#define ID3D10Device_GetTextFilterSize(This,pWidth,pHeight)	\
    ( (This)->lpVtbl -> GetTextFilterSize(This,pWidth,pHeight) )
#endif
#endif
#ifndef __ID3D10Multithread_INTERFACE_DEFINED__
#define __ID3D10Multithread_INTERFACE_DEFINED__
extern const IID IID_ID3D10Multithread;
typedef struct ID3D10MultithreadVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (ID3D10Multithread *This, REFIID riid, void **ppvObject);
	       ULONG(STDMETHODCALLTYPE *AddRef) (ID3D10Multithread *This);
	                  ULONG(STDMETHODCALLTYPE *Release) (ID3D10Multithread *This);
	void (STDMETHODCALLTYPE *Enter) (ID3D10Multithread *This);
	void (STDMETHODCALLTYPE *Leave) (ID3D10Multithread *This);
	                  BOOL(STDMETHODCALLTYPE *SetMultithreadProtected) (ID3D10Multithread *This, BOOL bMTProtect);
	     BOOL(STDMETHODCALLTYPE *GetMultithreadProtected) (ID3D10Multithread *This);
                  END_INTERFACE
} ID3D10MultithreadVtbl;
interface ID3D10Multithread
{
	CONST_VTBL struct ID3D10MultithreadVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ID3D10Multithread_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ID3D10Multithread_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) )
#define ID3D10Multithread_Release(This)	\
    ( (This)->lpVtbl -> Release(This) )
#define ID3D10Multithread_Enter(This)	\
    ( (This)->lpVtbl -> Enter(This) )
#define ID3D10Multithread_Leave(This)	\
    ( (This)->lpVtbl -> Leave(This) )
#define ID3D10Multithread_SetMultithreadProtected(This,bMTProtect)	\
    ( (This)->lpVtbl -> SetMultithreadProtected(This,bMTProtect) )
#define ID3D10Multithread_GetMultithreadProtected(This)	\
    ( (This)->lpVtbl -> GetMultithreadProtected(This) )
#endif
#endif
typedef enum D3D10_CREATE_DEVICE_FLAG
{ D3D10_CREATE_DEVICE_SINGLETHREADED = 0x1,
	D3D10_CREATE_DEVICE_DEBUG = 0x2,
	D3D10_CREATE_DEVICE_SWITCH_TO_REF = 0x4,
	D3D10_CREATE_DEVICE_PREVENT_INTERNAL_THREADING_OPTIMIZATIONS = 0x8,
	D3D10_CREATE_DEVICE_ALLOW_NULL_FROM_MAP = 0x10,
	D3D10_CREATE_DEVICE_BGRA_SUPPORT = 0x20,
	D3D10_CREATE_DEVICE_STRICT_VALIDATION = 0x200
} D3D10_CREATE_DEVICE_FLAG;
#define	D3D10_SDK_VERSION	( 29 )
#if !defined( D3D10_IGNORE_SDK_LAYERS )
#include "d3d10sdklayers.h"
#endif
#include "d3d10misc.h"
#include "d3d10shader.h"
#include "d3d10effect.h"
DEFINE_GUID(IID_ID3D10DeviceChild, 0x9B7E4C00, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10DepthStencilState, 0x2B4B1CC8, 0xA4AD, 0x41f8, 0x83, 0x22, 0xCA, 0x86, 0xFC, 0x3E, 0xC6, 0x75);
DEFINE_GUID(IID_ID3D10BlendState, 0xEDAD8D19, 0x8A35, 0x4d6d, 0x85, 0x66, 0x2E, 0xA2, 0x76, 0xCD, 0xE1, 0x61);
DEFINE_GUID(IID_ID3D10RasterizerState, 0xA2A07292, 0x89AF, 0x4345, 0xBE, 0x2E, 0xC5, 0x3D, 0x9F, 0xBB, 0x6E, 0x9F);
DEFINE_GUID(IID_ID3D10Resource, 0x9B7E4C01, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10Buffer, 0x9B7E4C02, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10Texture1D, 0x9B7E4C03, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10Texture2D, 0x9B7E4C04, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10Texture3D, 0x9B7E4C05, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10View, 0xC902B03F, 0x60A7, 0x49BA, 0x99, 0x36, 0x2A, 0x3A, 0xB3, 0x7A, 0x7E, 0x33);
DEFINE_GUID(IID_ID3D10ShaderResourceView, 0x9B7E4C07, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10RenderTargetView, 0x9B7E4C08, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10DepthStencilView, 0x9B7E4C09, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10VertexShader, 0x9B7E4C0A, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10GeometryShader, 0x6316BE88, 0x54CD, 0x4040, 0xAB, 0x44, 0x20, 0x46, 0x1B, 0xC8, 0x1F, 0x68);
DEFINE_GUID(IID_ID3D10PixelShader, 0x4968B601, 0x9D00, 0x4cde, 0x83, 0x46, 0x8E, 0x7F, 0x67, 0x58, 0x19, 0xB6);
DEFINE_GUID(IID_ID3D10InputLayout, 0x9B7E4C0B, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10SamplerState, 0x9B7E4C0C, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10Asynchronous, 0x9B7E4C0D, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10Query, 0x9B7E4C0E, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10Predicate, 0x9B7E4C10, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10Counter, 0x9B7E4C11, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10Device, 0x9B7E4C0F, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
DEFINE_GUID(IID_ID3D10Multithread, 0x9B7E4E00, 0x342C, 0x4106, 0xA1, 0x9F, 0x4F, 0x27, 0x04, 0xF6, 0x89, 0xF0);
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3d10_0000_0024_v0_0_s_ifspec;
#endif