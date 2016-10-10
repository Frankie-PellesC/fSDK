/*+@@file@@----------------------------------------------------------------*//*!
 \file		HostInfo.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul 15 12:34:39 2016
 \date		Modified on Fri Jul 15 12:34:39 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef HOST_INFO_H_INCLUDED
#define HOST_INFO_H_INCLUDED
#if __POCC__ >= 500
#pragma once
#endif
const GUID IID_IHostInfoUpdate = { 0x1d044690, 0x8923, 0x11d0, { 0xab, 0xd2, 0x0, 0xa0, 0xc9, 0x11, 0xe8, 0xb2 } };
typedef enum hostinfo
{
	hostinfoLocale = 0,
	hostinfoCodePage = 1,
	hostinfoErrorLocale = 2
} hostinfo;
#undef INTERFACE
#define INTERFACE   IHostInfoUpdate
DECLARE_INTERFACE_ (IHostInfoUpdate, IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID riid, void **ppvObj);
	STDMETHOD_(ULONG,AddRef)(THIS);
	STDMETHOD_(ULONG,Release)(THIS);
	STDMETHOD(UpdateInfo)(THIS_ hostinfo hostinfoNew);
};
const GUID IID_IHostInfoProvider = { 0xf8418ae0, 0x9a5d, 0x11d0, { 0xab, 0xd4, 0x0, 0xa0, 0xc9, 0x11, 0xe8, 0xb2 } };
#undef INTERFACE
#define INTERFACE   IHostInfoProvider
DECLARE_INTERFACE_ (IHostInfoProvider, public IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID riid, void **ppvObj);
	STDMETHOD_(ULONG,AddRef)(THIS);
	STDMETHOD_(ULONG,Release)(THIS);
	STDMETHOD(GetHostInfo)(THIS_ hostinfo hostinfoRequest, void * * ppvInfo);
};
#endif
