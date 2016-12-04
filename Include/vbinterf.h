/*+@@file@@----------------------------------------------------------------*//*!
 \file		vbinterf.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 15:57:09 2016
 \date		Modified on Sat Sep 17 15:57:09 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef VBINTERF_H__
#define VBINTERF_H__
#if __POCC__ >= 500
#pragma once
#endif
#define GC_WCH_SIBLING          0x00000001L
#define GC_WCH_CONTAINER        0x00000002L
#define GC_WCH_CONTAINED        0x00000003L
#define GC_WCH_ALL              0x00000004L
#define GC_WCH_FREVERSEDIR      0x08000000L
#define GC_WCH_FONLYAFTER       0x10000000L
#define GC_WCH_FONLYBEFORE      0x20000000L
#define GC_WCH_FSELECTED        0x40000000L
DECLARE_INTERFACE_(IVBGetControl, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(EnumControls) (THIS_ DWORD dwOleContF, DWORD dwWhich, LPENUMUNKNOWN FAR * ppenumUnk);
};
DECLARE_INTERFACE_(IGetOleObject, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetOleObject) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
};
DECLARE_INTERFACE_(IVBFormat, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, void FAR * FAR * ppvObj);
	STDMETHOD_(unsigned long, AddRef) (THIS);
	STDMETHOD_(unsigned long, Release) (THIS);
	STDMETHOD(Format) (VARIANT FAR * vData, BSTR bstrFormat, LPVOID lpBuffer, USHORT cb, LONG lcid, SHORT sFirstDayOfWeek, USHORT sFirstWeekOfYear, USHORT * rcb);
};
DECLARE_INTERFACE_(IGetVBAObject, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, void FAR * FAR * ppvObj);
	STDMETHOD_(unsigned long, AddRef) (THIS);
	STDMETHOD_(unsigned long, Release) (THIS);
	STDMETHOD(GetObject) (THIS_ REFIID riid, void FAR * FAR * ppvObj, DWORD dwReserved);
};
#include <initguid.h>
DEFINE_GUID(IID_IVBGetControl, 0x40A050A0L, 0x3C31, 0x101B, 0xA8, 0x2E, 0x08, 0x00, 0x2B, 0x2B, 0x23, 0x37);
DEFINE_GUID(IID_IGetOleObject, 0x8A701DA0L, 0x4FEB, 0x101B, 0xA8, 0x2E, 0x08, 0x00, 0x2B, 0x2B, 0x23, 0x37);
DEFINE_GUID(IID_IGetVBAObject, 0x91733A60L, 0x3F4C, 0x101B, 0xA3, 0xF6, 0x00, 0xAA, 0x00, 0x34, 0xE4, 0xE9);
DEFINE_GUID(IID_IVBFormat, 0x9849FD60L, 0x3768, 0x101B, 0x8D, 0x72, 0xAE, 0x61, 0x64, 0xFF, 0xE3, 0xCF);
#endif
