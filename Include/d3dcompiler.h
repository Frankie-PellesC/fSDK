/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dcompiler.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Nov 20 15:44:32 2016
 \date		Modified on Sun Nov 20 15:44:32 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __D3DCOMPILER_H__
#define __D3DCOMPILER_H__
#if __POCC__ >= 500
#pragma once
#endif
#define D3DCOMPILER_DLL_W L"d3dcompiler_43.dll"
#define D3DCOMPILER_DLL_A "d3dcompiler_43.dll"
#ifdef UNICODE
#define D3DCOMPILER_DLL D3DCOMPILER_DLL_W 
#else
#define D3DCOMPILER_DLL D3DCOMPILER_DLL_A
#endif
#include "d3d11shader.h"
#define D3DCOMPILE_DEBUG                          (1 << 0)
#define D3DCOMPILE_SKIP_VALIDATION                (1 << 1)
#define D3DCOMPILE_SKIP_OPTIMIZATION              (1 << 2)
#define D3DCOMPILE_PACK_MATRIX_ROW_MAJOR          (1 << 3)
#define D3DCOMPILE_PACK_MATRIX_COLUMN_MAJOR       (1 << 4)
#define D3DCOMPILE_PARTIAL_PRECISION              (1 << 5)
#define D3DCOMPILE_FORCE_VS_SOFTWARE_NO_OPT       (1 << 6)
#define D3DCOMPILE_FORCE_PS_SOFTWARE_NO_OPT       (1 << 7)
#define D3DCOMPILE_NO_PRESHADER                   (1 << 8)
#define D3DCOMPILE_AVOID_FLOW_CONTROL             (1 << 9)
#define D3DCOMPILE_PREFER_FLOW_CONTROL            (1 << 10)
#define D3DCOMPILE_ENABLE_STRICTNESS              (1 << 11)
#define D3DCOMPILE_ENABLE_BACKWARDS_COMPATIBILITY (1 << 12)
#define D3DCOMPILE_IEEE_STRICTNESS                (1 << 13)
#define D3DCOMPILE_OPTIMIZATION_LEVEL0            (1 << 14)
#define D3DCOMPILE_OPTIMIZATION_LEVEL1            0
#define D3DCOMPILE_OPTIMIZATION_LEVEL2            ((1 << 14) | (1 << 15))
#define D3DCOMPILE_OPTIMIZATION_LEVEL3            (1 << 15)
#define D3DCOMPILE_RESERVED16                     (1 << 16)
#define D3DCOMPILE_RESERVED17                     (1 << 17)
#define D3DCOMPILE_WARNINGS_ARE_ERRORS            (1 << 18)
#define D3DCOMPILE_EFFECT_CHILD_EFFECT              (1 << 0)
#define D3DCOMPILE_EFFECT_ALLOW_SLOW_OPS            (1 << 1)
HRESULT WINAPI D3DCompile(LPCVOID pSrcData, SIZE_T SrcDataSize, LPCSTR pSourceName, CONST D3D_SHADER_MACRO *pDefines, ID3DInclude *pInclude, LPCSTR pEntrypoint, LPCSTR pTarget, UINT Flags1, UINT Flags2, ID3DBlob **ppCode, ID3DBlob **ppErrorMsgs);
typedef HRESULT(WINAPI *pD3DCompile) (LPCVOID pSrcData, SIZE_T SrcDataSize, LPCSTR pFileName, CONST D3D_SHADER_MACRO *pDefines, ID3DInclude *pInclude, LPCSTR pEntrypoint, LPCSTR pTarget, UINT Flags1, UINT Flags2, ID3DBlob **ppCode, ID3DBlob **ppErrorMsgs);
HRESULT WINAPI D3DPreprocess(LPCVOID pSrcData, SIZE_T SrcDataSize, LPCSTR pSourceName, CONST D3D_SHADER_MACRO *pDefines, ID3DInclude *pInclude, ID3DBlob **ppCodeText, ID3DBlob **ppErrorMsgs);
typedef HRESULT(WINAPI *pD3DPreprocess) (LPCVOID pSrcData, SIZE_T SrcDataSize, LPCSTR pFileName, CONST D3D_SHADER_MACRO *pDefines, ID3DInclude *pInclude, ID3DBlob **ppCodeText, ID3DBlob **ppErrorMsgs);
HRESULT WINAPI D3DGetDebugInfo(LPCVOID pSrcData, SIZE_T SrcDataSize, ID3DBlob **ppDebugInfo);
HRESULT WINAPI D3DReflect(LPCVOID pSrcData, SIZE_T SrcDataSize, REFIID pInterface, void **ppReflector);
#define D3D_DISASM_ENABLE_COLOR_CODE            0x00000001
#define D3D_DISASM_ENABLE_DEFAULT_VALUE_PRINTS  0x00000002
#define D3D_DISASM_ENABLE_INSTRUCTION_NUMBERING 0x00000004
#define D3D_DISASM_ENABLE_INSTRUCTION_CYCLE     0x00000008
#define D3D_DISASM_DISABLE_DEBUG_INFO           0x00000010
HRESULT WINAPI D3DDisassemble(LPCVOID pSrcData, SIZE_T SrcDataSize, UINT Flags, LPCSTR szComments, ID3DBlob **ppDisassembly);
typedef HRESULT(WINAPI *pD3DDisassemble) (LPCVOID pSrcData, SIZE_T SrcDataSize, UINT Flags, LPCSTR szComments, ID3DBlob **ppDisassembly);
HRESULT WINAPI D3DDisassemble10Effect(interface ID3D10Effect *pEffect, UINT Flags, ID3DBlob **ppDisassembly);
HRESULT WINAPI D3DGetInputSignatureBlob(LPCVOID pSrcData, SIZE_T SrcDataSize, ID3DBlob **ppSignatureBlob);
HRESULT WINAPI D3DGetOutputSignatureBlob(LPCVOID pSrcData, SIZE_T SrcDataSize, ID3DBlob **ppSignatureBlob);
HRESULT WINAPI D3DGetInputAndOutputSignatureBlob(LPCVOID pSrcData, SIZE_T SrcDataSize, ID3DBlob **ppSignatureBlob);
typedef enum D3DCOMPILER_STRIP_FLAGS
{
    D3DCOMPILER_STRIP_REFLECTION_DATA = 1,
    D3DCOMPILER_STRIP_DEBUG_INFO      = 2,
    D3DCOMPILER_STRIP_TEST_BLOBS      = 4,
    D3DCOMPILER_STRIP_FORCE_DWORD     = 0x7fffffff,
} D3DCOMPILER_STRIP_FLAGS;
HRESULT WINAPI D3DStripShader(LPCVOID pShaderBytecode, SIZE_T BytecodeLength, UINT uStripFlags, ID3DBlob **ppStrippedBlob);
typedef enum D3D_BLOB_PART
{
    D3D_BLOB_INPUT_SIGNATURE_BLOB,
    D3D_BLOB_OUTPUT_SIGNATURE_BLOB,
    D3D_BLOB_INPUT_AND_OUTPUT_SIGNATURE_BLOB,
    D3D_BLOB_PATCH_CONSTANT_SIGNATURE_BLOB,
    D3D_BLOB_ALL_SIGNATURE_BLOB,
    D3D_BLOB_DEBUG_INFO,
    D3D_BLOB_LEGACY_SHADER,
    D3D_BLOB_XNA_PREPASS_SHADER,
    D3D_BLOB_XNA_SHADER,
    D3D_BLOB_TEST_ALTERNATE_SHADER = 0x8000,
    D3D_BLOB_TEST_COMPILE_DETAILS,
    D3D_BLOB_TEST_COMPILE_PERF,
} D3D_BLOB_PART;
HRESULT WINAPI 
	D3DGetBlobPart(LPCVOID pSrcData, SIZE_T SrcDataSize, D3D_BLOB_PART Part, UINT Flags, ID3DBlob ** ppPart);
typedef struct _D3D_SHADER_DATA
{
    LPCVOID pBytecode;
    SIZE_T BytecodeLength;
} D3D_SHADER_DATA;
#define D3D_COMPRESS_SHADER_KEEP_ALL_PARTS 0x00000001
HRESULT WINAPI D3DCompressShaders(UINT uNumShaders, D3D_SHADER_DATA *pShaderData, UINT uFlags, ID3DBlob **ppCompressedData);
HRESULT WINAPI D3DDecompressShaders(LPCVOID pSrcData, SIZE_T SrcDataSize, UINT uNumShaders, UINT uStartIndex, UINT *pIndices, UINT uFlags, ID3DBlob **ppShaders, UINT *pTotalShaders);
HRESULT WINAPI D3DCreateBlob(SIZE_T Size, ID3DBlob **ppBlob);   
#endif
