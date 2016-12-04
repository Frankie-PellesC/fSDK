/*+@@file@@----------------------------------------------------------------*//*!
 \file		WiaDevD.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 02:08:26 2016
 \date		Modified on Mon Sep 19 02:08:26 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if (_WIN32_WINNT >= 0x0501)
#ifndef _WIADEVD_H_INCLUDED
#define _WIADEVD_H_INCLUDED
#if __POCC__ >= 500
#pragma once
#endif
#include "wia.h"
#include <pshpack8.h>
#if (_WIN32_WINNT >= 0x0600)
#undef  INTERFACE
#define INTERFACE IWiaUIExtension2
typedef struct tagDEVICEDIALOGDATA2
{
    DWORD           cbSize;
    IWiaItem2       *pIWiaItemRoot;
    DWORD           dwFlags;
    HWND            hwndParent;
    BSTR            bstrFolderName;
    BSTR            bstrFilename;
    LONG            lNumFiles;
    BSTR            *pbstrFilePaths;
    IWiaItem2       *pWiaItem;
} DEVICEDIALOGDATA2, *LPDEVICEDIALOGDATA2, *PDEVICEDIALOGDATA2;
DECLARE_INTERFACE_IID_(IWiaUIExtension2, IUnknown, "305600d7-5088-46d7-9a15-b77b09cdba7a")
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR* ppvObj));
    STDMETHOD_(ULONG,AddRef) (THIS));
    STDMETHOD_(ULONG,Release) (THIS));
    STDMETHOD(DeviceDialog)(THIS_ PDEVICEDIALOGDATA2 pDeviceDialogData ));
    STDMETHOD(GetDeviceIcon)(THIS_ BSTR bstrDeviceId, HICON *phIcon, ULONG nSize));
};
DEFINE_GUID(IID_IWiaUIExtension2, 0x305600D7, 0x5088, 0x46D7, 0x9A, 0x15, 0xB7, 0x7B, 0x09, 0xCD, 0xBA, 0x7A);
#endif
typedef struct tagDEVICEDIALOGDATA
{
    DWORD            cbSize;
    HWND             hwndParent;
    IWiaItem         *pIWiaItemRoot;
    DWORD            dwFlags;
    LONG             lIntent;
    LONG             lItemCount;
    IWiaItem         **ppWiaItems;
} DEVICEDIALOGDATA, *LPDEVICEDIALOGDATA, *PDEVICEDIALOGDATA;
HRESULT WINAPI DeviceDialog(PDEVICEDIALOGDATA pDeviceDialogData);
#undef  INTERFACE
#define INTERFACE IWiaUIExtension
DECLARE_INTERFACE_IID_(IWiaUIExtension, IUnknown, "da319113-50ee-4c80-b460-57d005d44a2c")
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR* ppvObj));
    STDMETHOD_(ULONG,AddRef) (THIS));
    STDMETHOD_(ULONG,Release) (THIS));
    STDMETHOD(DeviceDialog)(THIS_ PDEVICEDIALOGDATA pDeviceDialogData));
    STDMETHOD(GetDeviceIcon)(THIS_ BSTR bstrDeviceId, HICON *phIcon, ULONG nSize));
    STDMETHOD(GetDeviceBitmapLogo)(THIS_ BSTR bstrDeviceId, HBITMAP *phBitmap, ULONG nMaxWidth, ULONG nMaxHeight));
};
DEFINE_GUID(IID_IWiaUIExtension, 0xDA319113, 0x50EE, 0x4C80, 0xB4, 0x60, 0x57, 0xD0, 0x05, 0xD4, 0x4A, 0x2C);
typedef HRESULT (WINAPI *DeviceDialogFunction)(PDEVICEDIALOGDATA);
#define SHELLEX_WIAUIEXTENSION_NAME TEXT("WiaDialogExtensionHandlers")
#define CFSTR_WIAITEMNAMES TEXT("WIAItemNames")
#define CFSTR_WIAITEMPTR   TEXT("WIAItemPointer")
#include <poppack.h>
#endif
#endif
