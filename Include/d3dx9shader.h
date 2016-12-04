/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx9shader.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Nov 11 16:37:13 2016
 \date		Modified on Fri Nov 11 16:37:13 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#include <d3dx9.h>
#ifndef __D3DX9SHADER_H__
#define __D3DX9SHADER_H__
#if __POCC__ >= 500
#pragma once
#endif
#define D3DXTX_VERSION(_Major,_Minor) (('T' << 24) | ('X' << 16) | ((_Major) << 8) | (_Minor))
#define D3DXSHADER_DEBUG                          (1 << 0)
#define D3DXSHADER_SKIPVALIDATION                 (1 << 1)
#define D3DXSHADER_SKIPOPTIMIZATION               (1 << 2)
#define D3DXSHADER_PACKMATRIX_ROWMAJOR            (1 << 3)
#define D3DXSHADER_PACKMATRIX_COLUMNMAJOR         (1 << 4)
#define D3DXSHADER_PARTIALPRECISION               (1 << 5)
#define D3DXSHADER_FORCE_VS_SOFTWARE_NOOPT        (1 << 6)
#define D3DXSHADER_FORCE_PS_SOFTWARE_NOOPT        (1 << 7)
#define D3DXSHADER_NO_PRESHADER                   (1 << 8)
#define D3DXSHADER_AVOID_FLOW_CONTROL             (1 << 9)
#define D3DXSHADER_PREFER_FLOW_CONTROL            (1 << 10)
#define D3DXSHADER_ENABLE_BACKWARDS_COMPATIBILITY (1 << 12)
#define D3DXSHADER_IEEE_STRICTNESS                (1 << 13)
#define D3DXSHADER_USE_LEGACY_D3DX9_31_DLL        (1 << 16)
#define D3DXSHADER_OPTIMIZATION_LEVEL0            (1 << 14)
#define D3DXSHADER_OPTIMIZATION_LEVEL1            0
#define D3DXSHADER_OPTIMIZATION_LEVEL2            ((1 << 14) | (1 << 15))
#define D3DXSHADER_OPTIMIZATION_LEVEL3            (1 << 15)
#define D3DXCONSTTABLE_LARGEADDRESSAWARE          (1 << 17)
#ifndef D3DXFX_LARGEADDRESS_HANDLE
typedef LPCSTR D3DXHANDLE;
#else
typedef UINT_PTR D3DXHANDLE;
#endif
typedef D3DXHANDLE *LPD3DXHANDLE;
typedef struct _D3DXMACRO
{
	LPCSTR Name;
	LPCSTR Definition;
} D3DXMACRO, *LPD3DXMACRO;
typedef struct _D3DXSEMANTIC
{
	UINT Usage;
	UINT UsageIndex;
} D3DXSEMANTIC, *LPD3DXSEMANTIC;
typedef enum _D3DXREGISTER_SET
{
	D3DXRS_BOOL,
	D3DXRS_INT4,
	D3DXRS_FLOAT4,
	D3DXRS_SAMPLER,
	D3DXRS_FORCE_DWORD = 0x7fffffff
} D3DXREGISTER_SET, *LPD3DXREGISTER_SET;
typedef enum _D3DXPARAMETER_CLASS
{
	D3DXPC_SCALAR,
	D3DXPC_VECTOR,
	D3DXPC_MATRIX_ROWS,
	D3DXPC_MATRIX_COLUMNS,
	D3DXPC_OBJECT,
	D3DXPC_STRUCT,
	D3DXPC_FORCE_DWORD = 0x7fffffff
} D3DXPARAMETER_CLASS, *LPD3DXPARAMETER_CLASS;
typedef enum _D3DXPARAMETER_TYPE
{
	D3DXPT_VOID,
	D3DXPT_BOOL,
	D3DXPT_INT,
	D3DXPT_FLOAT,
	D3DXPT_STRING,
	D3DXPT_TEXTURE,
	D3DXPT_TEXTURE1D,
	D3DXPT_TEXTURE2D,
	D3DXPT_TEXTURE3D,
	D3DXPT_TEXTURECUBE,
	D3DXPT_SAMPLER,
	D3DXPT_SAMPLER1D,
	D3DXPT_SAMPLER2D,
	D3DXPT_SAMPLER3D,
	D3DXPT_SAMPLERCUBE,
	D3DXPT_PIXELSHADER,
	D3DXPT_VERTEXSHADER,
	D3DXPT_PIXELFRAGMENT,
	D3DXPT_VERTEXFRAGMENT,
	D3DXPT_UNSUPPORTED,
	D3DXPT_FORCE_DWORD = 0x7fffffff
} D3DXPARAMETER_TYPE, *LPD3DXPARAMETER_TYPE;
typedef struct _D3DXCONSTANTTABLE_DESC
{
	LPCSTR Creator;
	DWORD Version;
	UINT Constants;
} D3DXCONSTANTTABLE_DESC, *LPD3DXCONSTANTTABLE_DESC;
typedef struct _D3DXCONSTANT_DESC
{
	LPCSTR Name;
	D3DXREGISTER_SET RegisterSet;
	UINT RegisterIndex;
	UINT RegisterCount;
	D3DXPARAMETER_CLASS Class;
	D3DXPARAMETER_TYPE Type;
	UINT Rows;
	UINT Columns;
	UINT Elements;
	UINT StructMembers;
	UINT Bytes;
	LPCVOID DefaultValue;
} D3DXCONSTANT_DESC, *LPD3DXCONSTANT_DESC;
typedef interface ID3DXConstantTable ID3DXConstantTable;
typedef interface ID3DXConstantTable *LPD3DXCONSTANTTABLE;
DEFINE_GUID(IID_ID3DXConstantTable, 0xab3c758f, 0x93e, 0x4356, 0xb7, 0x62, 0x4d, 0xb1, 0x8f, 0x1b, 0x3a, 0x1);
#undef INTERFACE
#define INTERFACE ID3DXConstantTable
DECLARE_INTERFACE_(ID3DXConstantTable, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD_(LPVOID, GetBufferPointer) (THIS);
	STDMETHOD_(DWORD, GetBufferSize) (THIS);
	STDMETHOD(GetDesc) (THIS_ D3DXCONSTANTTABLE_DESC * pDesc);
	STDMETHOD(GetConstantDesc) (THIS_ D3DXHANDLE hConstant, D3DXCONSTANT_DESC * pConstantDesc, UINT * pCount);
	STDMETHOD_(UINT, GetSamplerIndex) (THIS_ D3DXHANDLE hConstant);
	STDMETHOD_(D3DXHANDLE, GetConstant) (THIS_ D3DXHANDLE hConstant, UINT Index);
	STDMETHOD_(D3DXHANDLE, GetConstantByName) (THIS_ D3DXHANDLE hConstant, LPCSTR pName);
	STDMETHOD_(D3DXHANDLE, GetConstantElement) (THIS_ D3DXHANDLE hConstant, UINT Index);
	STDMETHOD(SetDefaults) (THIS_ LPDIRECT3DDEVICE9 pDevice);
	STDMETHOD(SetValue) (THIS_ LPDIRECT3DDEVICE9 pDevice, D3DXHANDLE hConstant, LPCVOID pData, UINT Bytes);
	STDMETHOD(SetBool) (THIS_ LPDIRECT3DDEVICE9 pDevice, D3DXHANDLE hConstant, BOOL b);
	STDMETHOD(SetBoolArray) (THIS_ LPDIRECT3DDEVICE9 pDevice, D3DXHANDLE hConstant, CONST BOOL * pb, UINT Count);
	STDMETHOD(SetInt) (THIS_ LPDIRECT3DDEVICE9 pDevice, D3DXHANDLE hConstant, INT n);
	STDMETHOD(SetIntArray) (THIS_ LPDIRECT3DDEVICE9 pDevice, D3DXHANDLE hConstant, CONST INT * pn, UINT Count);
	STDMETHOD(SetFloat) (THIS_ LPDIRECT3DDEVICE9 pDevice, D3DXHANDLE hConstant, FLOAT f);
	STDMETHOD(SetFloatArray) (THIS_ LPDIRECT3DDEVICE9 pDevice, D3DXHANDLE hConstant, CONST FLOAT * pf, UINT Count);
	STDMETHOD(SetVector) (THIS_ LPDIRECT3DDEVICE9 pDevice, D3DXHANDLE hConstant, CONST D3DXVECTOR4 * pVector);
	STDMETHOD(SetVectorArray) (THIS_ LPDIRECT3DDEVICE9 pDevice, D3DXHANDLE hConstant, CONST D3DXVECTOR4 * pVector, UINT Count);
	STDMETHOD(SetMatrix) (THIS_ LPDIRECT3DDEVICE9 pDevice, D3DXHANDLE hConstant, CONST D3DXMATRIX * pMatrix);
	STDMETHOD(SetMatrixArray) (THIS_ LPDIRECT3DDEVICE9 pDevice, D3DXHANDLE hConstant, CONST D3DXMATRIX * pMatrix, UINT Count);
	STDMETHOD(SetMatrixPointerArray) (THIS_ LPDIRECT3DDEVICE9 pDevice, D3DXHANDLE hConstant, CONST D3DXMATRIX ** ppMatrix, UINT Count);
	STDMETHOD(SetMatrixTranspose) (THIS_ LPDIRECT3DDEVICE9 pDevice, D3DXHANDLE hConstant, CONST D3DXMATRIX * pMatrix);
	STDMETHOD(SetMatrixTransposeArray) (THIS_ LPDIRECT3DDEVICE9 pDevice, D3DXHANDLE hConstant, CONST D3DXMATRIX * pMatrix, UINT Count);
	STDMETHOD(SetMatrixTransposePointerArray) (THIS_ LPDIRECT3DDEVICE9 pDevice, D3DXHANDLE hConstant, CONST D3DXMATRIX ** ppMatrix, UINT Count);
};
typedef interface ID3DXTextureShader ID3DXTextureShader;
typedef interface ID3DXTextureShader *LPD3DXTEXTURESHADER;
DEFINE_GUID(IID_ID3DXTextureShader, 0x3e3d67f8, 0xaa7a, 0x405d, 0xa8, 0x57, 0xba, 0x1, 0xd4, 0x75, 0x84, 0x26);
#undef INTERFACE
#define INTERFACE ID3DXTextureShader
DECLARE_INTERFACE_(ID3DXTextureShader, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetFunction) (THIS_ LPD3DXBUFFER * ppFunction);
	STDMETHOD(GetConstantBuffer) (THIS_ LPD3DXBUFFER * ppConstantBuffer);
	STDMETHOD(GetDesc) (THIS_ D3DXCONSTANTTABLE_DESC * pDesc);
	STDMETHOD(GetConstantDesc) (THIS_ D3DXHANDLE hConstant, D3DXCONSTANT_DESC * pConstantDesc, UINT * pCount);
	STDMETHOD_(D3DXHANDLE, GetConstant) (THIS_ D3DXHANDLE hConstant, UINT Index);
	STDMETHOD_(D3DXHANDLE, GetConstantByName) (THIS_ D3DXHANDLE hConstant, LPCSTR pName);
	STDMETHOD_(D3DXHANDLE, GetConstantElement) (THIS_ D3DXHANDLE hConstant, UINT Index);
	STDMETHOD(SetDefaults) (THIS);
	STDMETHOD(SetValue) (THIS_ D3DXHANDLE hConstant, LPCVOID pData, UINT Bytes);
	STDMETHOD(SetBool) (THIS_ D3DXHANDLE hConstant, BOOL b);
	STDMETHOD(SetBoolArray) (THIS_ D3DXHANDLE hConstant, CONST BOOL * pb, UINT Count);
	STDMETHOD(SetInt) (THIS_ D3DXHANDLE hConstant, INT n);
	STDMETHOD(SetIntArray) (THIS_ D3DXHANDLE hConstant, CONST INT * pn, UINT Count);
	STDMETHOD(SetFloat) (THIS_ D3DXHANDLE hConstant, FLOAT f);
	STDMETHOD(SetFloatArray) (THIS_ D3DXHANDLE hConstant, CONST FLOAT * pf, UINT Count);
	STDMETHOD(SetVector) (THIS_ D3DXHANDLE hConstant, CONST D3DXVECTOR4 * pVector);
	STDMETHOD(SetVectorArray) (THIS_ D3DXHANDLE hConstant, CONST D3DXVECTOR4 * pVector, UINT Count);
	STDMETHOD(SetMatrix) (THIS_ D3DXHANDLE hConstant, CONST D3DXMATRIX * pMatrix);
	STDMETHOD(SetMatrixArray) (THIS_ D3DXHANDLE hConstant, CONST D3DXMATRIX * pMatrix, UINT Count);
	STDMETHOD(SetMatrixPointerArray) (THIS_ D3DXHANDLE hConstant, CONST D3DXMATRIX ** ppMatrix, UINT Count);
	STDMETHOD(SetMatrixTranspose) (THIS_ D3DXHANDLE hConstant, CONST D3DXMATRIX * pMatrix);
	STDMETHOD(SetMatrixTransposeArray) (THIS_ D3DXHANDLE hConstant, CONST D3DXMATRIX * pMatrix, UINT Count);
	STDMETHOD(SetMatrixTransposePointerArray) (THIS_ D3DXHANDLE hConstant, CONST D3DXMATRIX ** ppMatrix, UINT Count);
};
typedef enum _D3DXINCLUDE_TYPE
{
	D3DXINC_LOCAL,
	D3DXINC_SYSTEM,
	D3DXINC_FORCE_DWORD = 0x7fffffff
} D3DXINCLUDE_TYPE, *LPD3DXINCLUDE_TYPE;
typedef interface ID3DXInclude ID3DXInclude;
typedef interface ID3DXInclude *LPD3DXINCLUDE;
#undef INTERFACE
#define INTERFACE ID3DXInclude
DECLARE_INTERFACE(ID3DXInclude)
{
	STDMETHOD(Open) (THIS_ D3DXINCLUDE_TYPE IncludeType, LPCSTR pFileName, LPCVOID pParentData, LPCVOID * ppData, UINT * pBytes);
	STDMETHOD(Close) (THIS_ LPCVOID pData);
};
HRESULT WINAPI D3DXAssembleShaderFromFileA(LPCSTR pSrcFile, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXBUFFER *ppShader, LPD3DXBUFFER *ppErrorMsgs);
HRESULT WINAPI D3DXAssembleShaderFromFileW(LPCWSTR pSrcFile, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXBUFFER *ppShader, LPD3DXBUFFER *ppErrorMsgs);
#ifdef UNICODE
#define D3DXAssembleShaderFromFile D3DXAssembleShaderFromFileW
#else
#define D3DXAssembleShaderFromFile D3DXAssembleShaderFromFileA
#endif
HRESULT WINAPI D3DXAssembleShaderFromResourceA(HMODULE hSrcModule, LPCSTR pSrcResource, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXBUFFER *ppShader, LPD3DXBUFFER *ppErrorMsgs);
HRESULT WINAPI D3DXAssembleShaderFromResourceW(HMODULE hSrcModule, LPCWSTR pSrcResource, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXBUFFER *ppShader, LPD3DXBUFFER *ppErrorMsgs);
#ifdef UNICODE
#define D3DXAssembleShaderFromResource D3DXAssembleShaderFromResourceW
#else
#define D3DXAssembleShaderFromResource D3DXAssembleShaderFromResourceA
#endif
HRESULT WINAPI D3DXAssembleShader(LPCSTR pSrcData, UINT SrcDataLen, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXBUFFER *ppShader, LPD3DXBUFFER *ppErrorMsgs);
HRESULT WINAPI D3DXCompileShaderFromFileA(LPCSTR pSrcFile, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, LPCSTR pFunctionName, LPCSTR pProfile, DWORD Flags, LPD3DXBUFFER *ppShader, LPD3DXBUFFER *ppErrorMsgs, LPD3DXCONSTANTTABLE *ppConstantTable);
HRESULT WINAPI D3DXCompileShaderFromFileW(LPCWSTR pSrcFile, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, LPCSTR pFunctionName, LPCSTR pProfile, DWORD Flags, LPD3DXBUFFER *ppShader, LPD3DXBUFFER *ppErrorMsgs, LPD3DXCONSTANTTABLE *ppConstantTable);
#ifdef UNICODE
#define D3DXCompileShaderFromFile D3DXCompileShaderFromFileW
#else
#define D3DXCompileShaderFromFile D3DXCompileShaderFromFileA
#endif
HRESULT WINAPI D3DXCompileShaderFromResourceA(HMODULE hSrcModule, LPCSTR pSrcResource, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, LPCSTR pFunctionName, LPCSTR pProfile, DWORD Flags, LPD3DXBUFFER *ppShader, LPD3DXBUFFER *ppErrorMsgs, LPD3DXCONSTANTTABLE *ppConstantTable);
HRESULT WINAPI D3DXCompileShaderFromResourceW(HMODULE hSrcModule, LPCWSTR pSrcResource, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, LPCSTR pFunctionName, LPCSTR pProfile, DWORD Flags, LPD3DXBUFFER *ppShader, LPD3DXBUFFER *ppErrorMsgs, LPD3DXCONSTANTTABLE *ppConstantTable);
#ifdef UNICODE
#define D3DXCompileShaderFromResource D3DXCompileShaderFromResourceW
#else
#define D3DXCompileShaderFromResource D3DXCompileShaderFromResourceA
#endif
HRESULT WINAPI D3DXCompileShader(LPCSTR pSrcData, UINT SrcDataLen, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, LPCSTR pFunctionName, LPCSTR pProfile, DWORD Flags, LPD3DXBUFFER *ppShader, LPD3DXBUFFER *ppErrorMsgs, LPD3DXCONSTANTTABLE *ppConstantTable);
HRESULT WINAPI D3DXDisassembleShader(CONST DWORD *pShader, BOOL EnableColorCode, LPCSTR pComments, LPD3DXBUFFER *ppDisassembly);
LPCSTR WINAPI D3DXGetPixelShaderProfile(LPDIRECT3DDEVICE9 pDevice);
LPCSTR WINAPI D3DXGetVertexShaderProfile(LPDIRECT3DDEVICE9 pDevice);
HRESULT WINAPI D3DXFindShaderComment(CONST DWORD *pFunction, DWORD FourCC, LPCVOID *ppData, UINT *pSizeInBytes);
UINT WINAPI D3DXGetShaderSize(CONST DWORD *pFunction);
DWORD WINAPI D3DXGetShaderVersion(CONST DWORD *pFunction);
HRESULT WINAPI D3DXGetShaderInputSemantics(CONST DWORD *pFunction, D3DXSEMANTIC *pSemantics, UINT *pCount);
HRESULT WINAPI D3DXGetShaderOutputSemantics(CONST DWORD *pFunction, D3DXSEMANTIC *pSemantics, UINT *pCount);
HRESULT WINAPI D3DXGetShaderSamplers(CONST DWORD *pFunction, LPCSTR *pSamplers, UINT *pCount);
HRESULT WINAPI D3DXGetShaderConstantTable(CONST DWORD *pFunction, LPD3DXCONSTANTTABLE *ppConstantTable);
HRESULT WINAPI D3DXGetShaderConstantTableEx(CONST DWORD *pFunction, DWORD Flags, LPD3DXCONSTANTTABLE *ppConstantTable);
HRESULT WINAPI D3DXCreateTextureShader(CONST DWORD *pFunction, LPD3DXTEXTURESHADER *ppTextureShader);
HRESULT WINAPI D3DXPreprocessShaderFromFileA(LPCSTR pSrcFile, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, LPD3DXBUFFER *ppShaderText, LPD3DXBUFFER *ppErrorMsgs);
HRESULT WINAPI D3DXPreprocessShaderFromFileW(LPCWSTR pSrcFile, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, LPD3DXBUFFER *ppShaderText, LPD3DXBUFFER *ppErrorMsgs);
#ifdef UNICODE
#define D3DXPreprocessShaderFromFile D3DXPreprocessShaderFromFileW
#else
#define D3DXPreprocessShaderFromFile D3DXPreprocessShaderFromFileA
#endif
HRESULT WINAPI D3DXPreprocessShaderFromResourceA(HMODULE hSrcModule, LPCSTR pSrcResource, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, LPD3DXBUFFER *ppShaderText, LPD3DXBUFFER *ppErrorMsgs);
HRESULT WINAPI D3DXPreprocessShaderFromResourceW(HMODULE hSrcModule, LPCWSTR pSrcResource, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, LPD3DXBUFFER *ppShaderText, LPD3DXBUFFER *ppErrorMsgs);
#ifdef UNICODE
#define D3DXPreprocessShaderFromResource D3DXPreprocessShaderFromResourceW
#else
#define D3DXPreprocessShaderFromResource D3DXPreprocessShaderFromResourceA
#endif
HRESULT WINAPI D3DXPreprocessShader(LPCSTR pSrcData, UINT SrcDataSize, CONST D3DXMACRO *pDefines, LPD3DXINCLUDE pInclude, LPD3DXBUFFER *ppShaderText, LPD3DXBUFFER *ppErrorMsgs);
typedef struct _D3DXSHADER_CONSTANTTABLE
{
	DWORD Size;
	DWORD Creator;
	DWORD Version;
	DWORD Constants;
	DWORD ConstantInfo;
	DWORD Flags;
	DWORD Target;
} D3DXSHADER_CONSTANTTABLE, *LPD3DXSHADER_CONSTANTTABLE;
typedef struct _D3DXSHADER_CONSTANTINFO
{
	DWORD Name;
	WORD RegisterSet;
	WORD RegisterIndex;
	WORD RegisterCount;
	WORD Reserved;
	DWORD TypeInfo;
	DWORD DefaultValue;
} D3DXSHADER_CONSTANTINFO, *LPD3DXSHADER_CONSTANTINFO;
typedef struct _D3DXSHADER_TYPEINFO
{
	WORD Class;
	WORD Type;
	WORD Rows;
	WORD Columns;
	WORD Elements;
	WORD StructMembers;
	DWORD StructMemberInfo;
} D3DXSHADER_TYPEINFO, *LPD3DXSHADER_TYPEINFO;
typedef struct _D3DXSHADER_STRUCTMEMBERINFO
{
	DWORD Name;
	DWORD TypeInfo;
} D3DXSHADER_STRUCTMEMBERINFO, *LPD3DXSHADER_STRUCTMEMBERINFO;
#endif
