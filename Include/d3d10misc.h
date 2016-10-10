/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3d10misc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jun  3 17:37:23 2016
 \date		Modified on Fri Jun  3 17:37:23 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef __D3D10MISC_H__
#define __D3D10MISC_H__
#if __POCC__ >= 500
#pragma once
#endif
#include "d3d10.h"
typedef interface ID3D10Blob ID3D10Blob;
typedef interface ID3D10Blob *LPD3D10BLOB;
DEFINE_GUID(IID_ID3D10Blob, 0x8ba5fb08, 0x5195, 0x40e2, 0xac, 0x58, 0xd, 0x98, 0x9c, 0x3a, 0x1, 0x2);
#undef INTERFACE
#define INTERFACE ID3D10Blob
DECLARE_INTERFACE_(ID3D10Blob, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD_(LPVOID, GetBufferPointer) (THIS);
	STDMETHOD_(SIZE_T, GetBufferSize) (THIS);
};

typedef enum D3D10_DRIVER_TYPE
{
	D3D10_DRIVER_TYPE_HARDWARE  = 0,
	D3D10_DRIVER_TYPE_REFERENCE = 1,
	D3D10_DRIVER_TYPE_NULL      = 2,
	D3D10_DRIVER_TYPE_SOFTWARE  = 3,
	D3D10_DRIVER_TYPE_WARP      = 5,
} D3D10_DRIVER_TYPE;

DEFINE_GUID(GUID_DeviceType, 0xd722fb4d, 0x7a68, 0x437a, 0xb2, 0x0c, 0x58, 0x04, 0xee, 0x24, 0x94, 0xa6);
HRESULT WINAPI D3D10CreateDevice(IDXGIAdapter *pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, UINT SDKVersion, ID3D10Device **ppDevice);
HRESULT WINAPI D3D10CreateDeviceAndSwapChain(IDXGIAdapter *pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, UINT SDKVersion, DXGI_SWAP_CHAIN_DESC *pSwapChainDesc, IDXGISwapChain **ppSwapChain, ID3D10Device **ppDevice);
HRESULT WINAPI D3D10CreateBlob(SIZE_T NumBytes, LPD3D10BLOB *ppBuffer);

#endif
