/*+@@file@@----------------------------------------------------------------*//*!
 \file		effects.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  9 19:15:43 2016
 \date		Modified on Sat Jul  9 19:15:43 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __effectspri_h__
#define __effectspri_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMPEffects_FWD_DEFINED__
#define __IWMPEffects_FWD_DEFINED__
typedef interface IWMPEffects IWMPEffects;
#endif
#ifndef __IWMPEffects2_FWD_DEFINED__
#define __IWMPEffects2_FWD_DEFINED__
typedef interface IWMPEffects2 IWMPEffects2;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "wmp.h"
#define	EFFECT_CANGOFULLSCREEN	( 0x1 )
#define	EFFECT_HASPROPERTYPAGE	( 0x2 )
#define	EFFECT_VARIABLEFREQSTEP	( 0x4 )
#define	EFFECT_WINDOWEDONLY	( 0x8 )
#define	EFFECT2_FULLSCREENEXCLUSIVE	( 0x10 )
#define	SA_BUFFER_SIZE	( 1024 )
enum PlayerState
{
	stop_state = 0,
	pause_state = 1,
	play_state = 2
};
static const float kfltTimedLevelMaximumFrequency = 22050.0F;
static const float kfltTimedLevelMinimumFrequency = 20.0F;
#define FREQUENCY_INDEX(FREQ)(int)(((FREQ) - kfltTimedLevelMinimumFrequency) /(((kfltTimedLevelMaximumFrequency - kfltTimedLevelMinimumFrequency) / SA_BUFFER_SIZE)))
typedef struct tagTimedLevel
{
	unsigned char frequency[2][1024];
	unsigned char waveform[2][1024];
	int state;
	hyper timeStamp;
} TimedLevel;
extern RPC_IF_HANDLE __MIDL_itf_effectspri_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_effectspri_0000_0000_v0_0_s_ifspec;
#ifndef __IWMPEffects_INTERFACE_DEFINED__
#define __IWMPEffects_INTERFACE_DEFINED__
extern const IID IID_IWMPEffects;
typedef struct IWMPEffectsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPEffects * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPEffects * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPEffects * This);
	HRESULT(STDMETHODCALLTYPE * Render) (IWMPEffects * This, TimedLevel * pLevels, HDC hdc, RECT * prc);
	HRESULT(STDMETHODCALLTYPE * MediaInfo) (IWMPEffects * This, LONG lChannelCount, LONG lSampleRate, BSTR bstrTitle);
	HRESULT(STDMETHODCALLTYPE * GetCapabilities) (IWMPEffects * This, DWORD * pdwCapabilities);
	HRESULT(STDMETHODCALLTYPE * GetTitle) (IWMPEffects * This, BSTR * bstrTitle);
	HRESULT(STDMETHODCALLTYPE * GetPresetTitle) (IWMPEffects * This, LONG nPreset, BSTR * bstrPresetTitle);
	HRESULT(STDMETHODCALLTYPE * GetPresetCount) (IWMPEffects * This, LONG * pnPresetCount);
	HRESULT(STDMETHODCALLTYPE * SetCurrentPreset) (IWMPEffects * This, LONG nPreset);
	HRESULT(STDMETHODCALLTYPE * GetCurrentPreset) (IWMPEffects * This, LONG * pnPreset);
	HRESULT(STDMETHODCALLTYPE * DisplayPropertyPage) (IWMPEffects * This, HWND hwndOwner);
	HRESULT(STDMETHODCALLTYPE * GoFullscreen) (IWMPEffects * This, BOOL fFullScreen);
	HRESULT(STDMETHODCALLTYPE * RenderFullScreen) (IWMPEffects * This, TimedLevel * pLevels);
	END_INTERFACE
}  IWMPEffectsVtbl;
interface IWMPEffects
{
	CONST_VTBL struct IWMPEffectsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPEffects_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPEffects_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPEffects_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPEffects_Render(This,pLevels,hdc,prc)( (This)->lpVtbl -> Render(This,pLevels,hdc,prc) )
#define IWMPEffects_MediaInfo(This,lChannelCount,lSampleRate,bstrTitle)( (This)->lpVtbl -> MediaInfo(This,lChannelCount,lSampleRate,bstrTitle) )
#define IWMPEffects_GetCapabilities(This,pdwCapabilities)( (This)->lpVtbl -> GetCapabilities(This,pdwCapabilities) )
#define IWMPEffects_GetTitle(This,bstrTitle)( (This)->lpVtbl -> GetTitle(This,bstrTitle) )
#define IWMPEffects_GetPresetTitle(This,nPreset,bstrPresetTitle)( (This)->lpVtbl -> GetPresetTitle(This,nPreset,bstrPresetTitle) )
#define IWMPEffects_GetPresetCount(This,pnPresetCount)( (This)->lpVtbl -> GetPresetCount(This,pnPresetCount) )
#define IWMPEffects_SetCurrentPreset(This,nPreset)( (This)->lpVtbl -> SetCurrentPreset(This,nPreset) )
#define IWMPEffects_GetCurrentPreset(This,pnPreset)( (This)->lpVtbl -> GetCurrentPreset(This,pnPreset) )
#define IWMPEffects_DisplayPropertyPage(This,hwndOwner)( (This)->lpVtbl -> DisplayPropertyPage(This,hwndOwner) )
#define IWMPEffects_GoFullscreen(This,fFullScreen)( (This)->lpVtbl -> GoFullscreen(This,fFullScreen) )
#define IWMPEffects_RenderFullScreen(This,pLevels)( (This)->lpVtbl -> RenderFullScreen(This,pLevels) )
#endif
#endif
#ifndef __IWMPEffects2_INTERFACE_DEFINED__
#define __IWMPEffects2_INTERFACE_DEFINED__
extern const IID IID_IWMPEffects2;
typedef struct IWMPEffects2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMPEffects2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMPEffects2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMPEffects2 * This);
	HRESULT(STDMETHODCALLTYPE * Render) (IWMPEffects2 * This, TimedLevel * pLevels, HDC hdc, RECT * prc);
	HRESULT(STDMETHODCALLTYPE * MediaInfo) (IWMPEffects2 * This, LONG lChannelCount, LONG lSampleRate, BSTR bstrTitle);
	HRESULT(STDMETHODCALLTYPE * GetCapabilities) (IWMPEffects2 * This, DWORD * pdwCapabilities);
	HRESULT(STDMETHODCALLTYPE * GetTitle) (IWMPEffects2 * This, BSTR * bstrTitle);
	HRESULT(STDMETHODCALLTYPE * GetPresetTitle) (IWMPEffects2 * This, LONG nPreset, BSTR * bstrPresetTitle);
	HRESULT(STDMETHODCALLTYPE * GetPresetCount) (IWMPEffects2 * This, LONG * pnPresetCount);
	HRESULT(STDMETHODCALLTYPE * SetCurrentPreset) (IWMPEffects2 * This, LONG nPreset);
	HRESULT(STDMETHODCALLTYPE * GetCurrentPreset) (IWMPEffects2 * This, LONG * pnPreset);
	HRESULT(STDMETHODCALLTYPE * DisplayPropertyPage) (IWMPEffects2 * This, HWND hwndOwner);
	HRESULT(STDMETHODCALLTYPE * GoFullscreen) (IWMPEffects2 * This, BOOL fFullScreen);
	HRESULT(STDMETHODCALLTYPE * RenderFullScreen) (IWMPEffects2 * This, TimedLevel * pLevels);
	HRESULT(STDMETHODCALLTYPE * SetCore) (IWMPEffects2 * This, IWMPCore * pPlayer);
	HRESULT(STDMETHODCALLTYPE * Create) (IWMPEffects2 * This, HWND hwndParent);
	HRESULT(STDMETHODCALLTYPE * Destroy) (IWMPEffects2 * This);
	HRESULT(STDMETHODCALLTYPE * NotifyNewMedia) (IWMPEffects2 * This, IWMPMedia * pMedia);
	HRESULT(STDMETHODCALLTYPE * OnWindowMessage) (IWMPEffects2 * This, UINT msg, WPARAM WParam, LPARAM LParam, LRESULT * plResultParam);
	HRESULT(STDMETHODCALLTYPE * RenderWindowed) (IWMPEffects2 * This, TimedLevel * pData, BOOL fRequiredRender);
	END_INTERFACE
}  IWMPEffects2Vtbl;
interface IWMPEffects2
{
	CONST_VTBL struct IWMPEffects2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPEffects2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPEffects2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPEffects2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPEffects2_Render(This,pLevels,hdc,prc)( (This)->lpVtbl -> Render(This,pLevels,hdc,prc) )
#define IWMPEffects2_MediaInfo(This,lChannelCount,lSampleRate,bstrTitle)( (This)->lpVtbl -> MediaInfo(This,lChannelCount,lSampleRate,bstrTitle) )
#define IWMPEffects2_GetCapabilities(This,pdwCapabilities)( (This)->lpVtbl -> GetCapabilities(This,pdwCapabilities) )
#define IWMPEffects2_GetTitle(This,bstrTitle)( (This)->lpVtbl -> GetTitle(This,bstrTitle) )
#define IWMPEffects2_GetPresetTitle(This,nPreset,bstrPresetTitle)( (This)->lpVtbl -> GetPresetTitle(This,nPreset,bstrPresetTitle) )
#define IWMPEffects2_GetPresetCount(This,pnPresetCount)( (This)->lpVtbl -> GetPresetCount(This,pnPresetCount) )
#define IWMPEffects2_SetCurrentPreset(This,nPreset)( (This)->lpVtbl -> SetCurrentPreset(This,nPreset) )
#define IWMPEffects2_GetCurrentPreset(This,pnPreset)( (This)->lpVtbl -> GetCurrentPreset(This,pnPreset) )
#define IWMPEffects2_DisplayPropertyPage(This,hwndOwner)( (This)->lpVtbl -> DisplayPropertyPage(This,hwndOwner) )
#define IWMPEffects2_GoFullscreen(This,fFullScreen)( (This)->lpVtbl -> GoFullscreen(This,fFullScreen) )
#define IWMPEffects2_RenderFullScreen(This,pLevels)( (This)->lpVtbl -> RenderFullScreen(This,pLevels) )
#define IWMPEffects2_SetCore(This,pPlayer)( (This)->lpVtbl -> SetCore(This,pPlayer) )
#define IWMPEffects2_Create(This,hwndParent)( (This)->lpVtbl -> Create(This,hwndParent) )
#define IWMPEffects2_Destroy(This)( (This)->lpVtbl -> Destroy(This) )
#define IWMPEffects2_NotifyNewMedia(This,pMedia)( (This)->lpVtbl -> NotifyNewMedia(This,pMedia) )
#define IWMPEffects2_OnWindowMessage(This,msg,WParam,LParam,plResultParam)( (This)->lpVtbl -> OnWindowMessage(This,msg,WParam,LParam,plResultParam) )
#define IWMPEffects2_RenderWindowed(This,pData,fRequiredRender)( (This)->lpVtbl -> RenderWindowed(This,pData,fRequiredRender) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
#endif
