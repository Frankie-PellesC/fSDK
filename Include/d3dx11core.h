/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx11core.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Nov 20 15:34:15 2016
 \date		Modified on Sun Nov 20 15:34:15 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#include <d3dx11.h>
#ifndef __D3DX11CORE_H__
#define __D3DX11CORE_H__
#if __POCC__ >= 500
#pragma once
#endif
#define D3DX11_DLL_W L"d3dx11_43.dll"
#define D3DX11_DLL_A "d3dx11_43.dll"
#ifdef UNICODE
#define D3DX11_DLL D3DX11_DLL_W
#else
#define D3DX11_DLL D3DX11_DLL_A
#endif
#define D3DX11_SDK_VERSION 43
#ifdef D3D_DIAG_DLL
BOOL WINAPI D3DX11DebugMute(BOOL Mute);
#endif
HRESULT WINAPI D3DX11CheckVersion(UINT D3DSdkVersion, UINT D3DX11SdkVersion);
#undef INTERFACE
#define INTERFACE ID3DX11DataLoader
DECLARE_INTERFACE(ID3DX11DataLoader)
{
	STDMETHOD(Load) (THIS)PURE;
	STDMETHOD(Decompress) (THIS_ void **ppData, SIZE_T * pcBytes)PURE;
	STDMETHOD(Destroy) (THIS)PURE;
};
#undef INTERFACE
#define INTERFACE ID3DX11DataProcessor
DECLARE_INTERFACE(ID3DX11DataProcessor)
{
	STDMETHOD(Process) (THIS_ void *pData, SIZE_T cBytes)PURE;
	STDMETHOD(CreateDeviceObject) (THIS_ void **ppDataObject)PURE;
	STDMETHOD(Destroy) (THIS)PURE;
};
DEFINE_GUID(IID_ID3DX11ThreadPump, 0xc93fecfa, 0x6967, 0x478a, 0xab, 0xbc, 0x40, 0x2d, 0x90, 0x62, 0x1f, 0xcb);
#undef INTERFACE
#define INTERFACE ID3DX11ThreadPump
DECLARE_INTERFACE_(ID3DX11ThreadPump, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(AddWorkItem) (THIS_ ID3DX11DataLoader * pDataLoader, ID3DX11DataProcessor * pDataProcessor, HRESULT * pHResult, void **ppDeviceObject)PURE;
	STDMETHOD_(UINT, GetWorkItemCount) (THIS)PURE;
	STDMETHOD(WaitForAllItems) (THIS)PURE;
	STDMETHOD(ProcessDeviceWorkItems) (THIS_ UINT iWorkItemCount);
	STDMETHOD(PurgeAllItems) (THIS)PURE;
	STDMETHOD(GetQueueStatus) (THIS_ UINT * pIoQueue, UINT * pProcessQueue, UINT * pDeviceQueue)PURE;
};
HRESULT WINAPI D3DX11CreateThreadPump(UINT cIoThreads, UINT cProcThreads, ID3DX11ThreadPump **ppThreadPump);
HRESULT WINAPI D3DX11UnsetAllDeviceObjects(ID3D11DeviceContext *pContext);
#define _FACD3D  0x876
#define MAKE_D3DHRESULT( code )		MAKE_HRESULT( 1, _FACD3D, code )
#define MAKE_D3DSTATUS( code )		MAKE_HRESULT( 0, _FACD3D, code )
#define D3DERR_INVALIDCALL			MAKE_D3DHRESULT(2156)
#define D3DERR_WASSTILLDRAWING		MAKE_D3DHRESULT(540)
#endif
