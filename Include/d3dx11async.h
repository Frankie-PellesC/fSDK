/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx11async.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Nov 20 15:42:20 2016
 \date		Modified on Sun Nov 20 15:42:20 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __D3DX11ASYNC_H__
#define __D3DX11ASYNC_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <d3dx11.h>
HRESULT WINAPI D3DX11CompileFromFileA(LPCSTR pSrcFile, CONST D3D10_SHADER_MACRO *pDefines, LPD3D10INCLUDE pInclude, LPCSTR pFunctionName, LPCSTR pProfile, UINT Flags1, UINT Flags2, ID3DX11ThreadPump *pPump, ID3D10Blob **ppShader, ID3D10Blob **ppErrorMsgs, HRESULT *pHResult);
HRESULT WINAPI D3DX11CompileFromFileW(LPCWSTR pSrcFile, CONST D3D10_SHADER_MACRO *pDefines, LPD3D10INCLUDE pInclude, LPCSTR pFunctionName, LPCSTR pProfile, UINT Flags1, UINT Flags2, ID3DX11ThreadPump *pPump, ID3D10Blob **ppShader, ID3D10Blob **ppErrorMsgs, HRESULT *pHResult);
#ifdef UNICODE
#define D3DX11CompileFromFile D3DX11CompileFromFileW
#else
#define D3DX11CompileFromFile D3DX11CompileFromFileA
#endif
HRESULT WINAPI D3DX11CompileFromResourceA(HMODULE hSrcModule, LPCSTR pSrcResource, LPCSTR pSrcFileName, CONST D3D10_SHADER_MACRO *pDefines, LPD3D10INCLUDE pInclude, LPCSTR pFunctionName, LPCSTR pProfile, UINT Flags1, UINT Flags2, ID3DX11ThreadPump *pPump, ID3D10Blob **ppShader, ID3D10Blob **ppErrorMsgs, HRESULT *pHResult);
HRESULT WINAPI D3DX11CompileFromResourceW(HMODULE hSrcModule, LPCWSTR pSrcResource, LPCWSTR pSrcFileName, CONST D3D10_SHADER_MACRO *pDefines, LPD3D10INCLUDE pInclude, LPCSTR pFunctionName, LPCSTR pProfile, UINT Flags1, UINT Flags2, ID3DX11ThreadPump *pPump, ID3D10Blob **ppShader, ID3D10Blob **ppErrorMsgs, HRESULT *pHResult);
#ifdef UNICODE
#define D3DX11CompileFromResource D3DX11CompileFromResourceW
#else
#define D3DX11CompileFromResource D3DX11CompileFromResourceA
#endif
HRESULT WINAPI D3DX11CompileFromMemory(LPCSTR pSrcData, SIZE_T SrcDataLen, LPCSTR pFileName, CONST D3D10_SHADER_MACRO *pDefines, LPD3D10INCLUDE pInclude, LPCSTR pFunctionName, LPCSTR pProfile, UINT Flags1, UINT Flags2, ID3DX11ThreadPump *pPump, ID3D10Blob **ppShader, ID3D10Blob **ppErrorMsgs, HRESULT *pHResult);
HRESULT WINAPI D3DX11PreprocessShaderFromFileA(LPCSTR pFileName, CONST D3D10_SHADER_MACRO *pDefines, LPD3D10INCLUDE pInclude, ID3DX11ThreadPump *pPump, ID3D10Blob **ppShaderText, ID3D10Blob **ppErrorMsgs, HRESULT *pHResult);
HRESULT WINAPI D3DX11PreprocessShaderFromFileW(LPCWSTR pFileName, CONST D3D10_SHADER_MACRO *pDefines, LPD3D10INCLUDE pInclude, ID3DX11ThreadPump *pPump, ID3D10Blob **ppShaderText, ID3D10Blob **ppErrorMsgs, HRESULT *pHResult);
HRESULT WINAPI D3DX11PreprocessShaderFromMemory(LPCSTR pSrcData, SIZE_T SrcDataSize, LPCSTR pFileName, CONST D3D10_SHADER_MACRO *pDefines, LPD3D10INCLUDE pInclude, ID3DX11ThreadPump *pPump, ID3D10Blob **ppShaderText, ID3D10Blob **ppErrorMsgs, HRESULT *pHResult);
HRESULT WINAPI D3DX11PreprocessShaderFromResourceA(HMODULE hModule, LPCSTR pResourceName, LPCSTR pSrcFileName, CONST D3D10_SHADER_MACRO *pDefines, LPD3D10INCLUDE pInclude, ID3DX11ThreadPump *pPump, ID3D10Blob **ppShaderText, ID3D10Blob **ppErrorMsgs, HRESULT *pHResult);
HRESULT WINAPI D3DX11PreprocessShaderFromResourceW(HMODULE hModule, LPCWSTR pResourceName, LPCWSTR pSrcFileName, CONST D3D10_SHADER_MACRO *pDefines, LPD3D10INCLUDE pInclude, ID3DX11ThreadPump *pPump, ID3D10Blob **ppShaderText, ID3D10Blob **ppErrorMsgs, HRESULT *pHResult);
#ifdef UNICODE
#define D3DX11PreprocessShaderFromFile      D3DX11PreprocessShaderFromFileW
#define D3DX11PreprocessShaderFromResource  D3DX11PreprocessShaderFromResourceW
#else
#define D3DX11PreprocessShaderFromFile      D3DX11PreprocessShaderFromFileA
#define D3DX11PreprocessShaderFromResource  D3DX11PreprocessShaderFromResourceA
#endif
HRESULT WINAPI D3DX11CreateAsyncCompilerProcessor(LPCSTR pFileName, CONST D3D10_SHADER_MACRO *pDefines, LPD3D10INCLUDE pInclude, LPCSTR pFunctionName, LPCSTR pProfile, UINT Flags1, UINT Flags2, ID3D10Blob **ppCompiledShader, ID3D10Blob **ppErrorBuffer, ID3DX11DataProcessor **ppProcessor);
HRESULT WINAPI D3DX11CreateAsyncShaderPreprocessProcessor(LPCSTR pFileName, CONST D3D10_SHADER_MACRO *pDefines, LPD3D10INCLUDE pInclude, ID3D10Blob **ppShaderText, ID3D10Blob **ppErrorBuffer, ID3DX11DataProcessor **ppProcessor);
HRESULT WINAPI D3DX11CreateAsyncFileLoaderW(LPCWSTR pFileName, ID3DX11DataLoader **ppDataLoader);
HRESULT WINAPI D3DX11CreateAsyncFileLoaderA(LPCSTR pFileName, ID3DX11DataLoader **ppDataLoader);
HRESULT WINAPI D3DX11CreateAsyncMemoryLoader(LPCVOID pData, SIZE_T cbData, ID3DX11DataLoader **ppDataLoader);
HRESULT WINAPI D3DX11CreateAsyncResourceLoaderW(HMODULE hSrcModule, LPCWSTR pSrcResource, ID3DX11DataLoader **ppDataLoader);
HRESULT WINAPI D3DX11CreateAsyncResourceLoaderA(HMODULE hSrcModule, LPCSTR pSrcResource, ID3DX11DataLoader **ppDataLoader);
#ifdef UNICODE
#define D3DX11CreateAsyncFileLoader D3DX11CreateAsyncFileLoaderW
#define D3DX11CreateAsyncResourceLoader D3DX11CreateAsyncResourceLoaderW
#else
#define D3DX11CreateAsyncFileLoader D3DX11CreateAsyncFileLoaderA
#define D3DX11CreateAsyncResourceLoader D3DX11CreateAsyncResourceLoaderA
#endif
HRESULT WINAPI D3DX11CreateAsyncTextureProcessor(ID3D11Device *pDevice, D3DX11_IMAGE_LOAD_INFO *pLoadInfo, ID3DX11DataProcessor **ppDataProcessor);
HRESULT WINAPI D3DX11CreateAsyncTextureInfoProcessor(D3DX11_IMAGE_INFO *pImageInfo, ID3DX11DataProcessor **ppDataProcessor);
HRESULT WINAPI D3DX11CreateAsyncShaderResourceViewProcessor(ID3D11Device *pDevice, D3DX11_IMAGE_LOAD_INFO *pLoadInfo, ID3DX11DataProcessor **ppDataProcessor);
#endif
