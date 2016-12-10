/*+@@file@@----------------------------------------------------------------*//*!
 \file		MSAAText.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug  7 23:07:15 2016
 \date		Modified on Sun Aug  7 23:07:15 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif
#ifndef __msaatext_h__
#define __msaatext_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITfMSAAControl_FWD_DEFINED__
#define __ITfMSAAControl_FWD_DEFINED__
typedef interface ITfMSAAControl ITfMSAAControl;
#endif
#ifndef __IInternalDocWrap_FWD_DEFINED__
#define __IInternalDocWrap_FWD_DEFINED__
typedef interface IInternalDocWrap IInternalDocWrap;
#endif
#ifndef __ITextStoreACPEx_FWD_DEFINED__
#define __ITextStoreACPEx_FWD_DEFINED__
typedef interface ITextStoreACPEx ITextStoreACPEx;
#endif
#ifndef __ITextStoreAnchorEx_FWD_DEFINED__
#define __ITextStoreAnchorEx_FWD_DEFINED__
typedef interface ITextStoreAnchorEx ITextStoreAnchorEx;
#endif
#ifndef __ITextStoreACPSinkEx_FWD_DEFINED__
#define __ITextStoreACPSinkEx_FWD_DEFINED__
typedef interface ITextStoreACPSinkEx ITextStoreACPSinkEx;
#endif
#ifndef __ITextStoreSinkAnchorEx_FWD_DEFINED__
#define __ITextStoreSinkAnchorEx_FWD_DEFINED__
typedef interface ITextStoreSinkAnchorEx ITextStoreSinkAnchorEx;
#endif
#ifndef __IAccDictionary_FWD_DEFINED__
#define __IAccDictionary_FWD_DEFINED__
typedef interface IAccDictionary IAccDictionary;
#endif
#ifndef __IVersionInfo_FWD_DEFINED__
#define __IVersionInfo_FWD_DEFINED__
typedef interface IVersionInfo IVersionInfo;
#endif
#ifndef __ICoCreateLocally_FWD_DEFINED__
#define __ICoCreateLocally_FWD_DEFINED__
typedef interface ICoCreateLocally ICoCreateLocally;
#endif
#ifndef __ICoCreatedLocally_FWD_DEFINED__
#define __ICoCreatedLocally_FWD_DEFINED__
typedef interface ICoCreatedLocally ICoCreatedLocally;
#endif
#ifndef __IAccStore_FWD_DEFINED__
#define __IAccStore_FWD_DEFINED__
typedef interface IAccStore IAccStore;
#endif
#ifndef __IAccServerDocMgr_FWD_DEFINED__
#define __IAccServerDocMgr_FWD_DEFINED__
typedef interface IAccServerDocMgr IAccServerDocMgr;
#endif
#ifndef __IAccClientDocMgr_FWD_DEFINED__
#define __IAccClientDocMgr_FWD_DEFINED__
typedef interface IAccClientDocMgr IAccClientDocMgr;
#endif
#ifndef __IDocWrap_FWD_DEFINED__
#define __IDocWrap_FWD_DEFINED__
typedef interface IDocWrap IDocWrap;
#endif
#ifndef __IClonableWrapper_FWD_DEFINED__
#define __IClonableWrapper_FWD_DEFINED__
typedef interface IClonableWrapper IClonableWrapper;
#endif
#ifndef __MSAAControl_FWD_DEFINED__
#define __MSAAControl_FWD_DEFINED__
typedef struct MSAAControl MSAAControl;
#endif
#ifndef __AccStore_FWD_DEFINED__
#define __AccStore_FWD_DEFINED__
typedef struct AccStore AccStore;
#endif
#ifndef __AccDictionary_FWD_DEFINED__
#define __AccDictionary_FWD_DEFINED__
typedef struct AccDictionary AccDictionary;
#endif
#ifndef __AccServerDocMgr_FWD_DEFINED__
#define __AccServerDocMgr_FWD_DEFINED__
typedef struct AccServerDocMgr AccServerDocMgr;
#endif
#ifndef __AccClientDocMgr_FWD_DEFINED__
#define __AccClientDocMgr_FWD_DEFINED__
typedef struct AccClientDocMgr AccClientDocMgr;
#endif
#ifndef __DocWrap_FWD_DEFINED__
#define __DocWrap_FWD_DEFINED__
typedef struct DocWrap DocWrap;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <textstor.h>
DEFINE_GUID(IID_ITfMSAAControl, 0xb5f8fb3b, 0x393f, 0x4f7c, 0x84, 0xcb, 0x50, 0x49, 0x24, 0xc2, 0x70, 0x5a);
DEFINE_GUID(IID_IInternalDocWrap, 0xE1AA6466, 0x9DB4, 0x40ba, 0xBE, 0x03, 0x77, 0xC3, 0x8E, 0x8E, 0x60, 0xB2);
DEFINE_GUID(IID_ITextStoreACPEx, 0xA2DE3BC2, 0x3D8E, 0x11d3, 0x81, 0xA9, 0xF7, 0x53, 0xFB, 0xE6, 0x1A, 0x00);
DEFINE_GUID(IID_ITextStoreAnchorEx, 0xA2DE3BC1, 0x3D8E, 0x11d3, 0x81, 0xA9, 0xF7, 0x53, 0xFB, 0xE6, 0x1A, 0x00);
DEFINE_GUID(IID_ITextStoreACPSinkEx, 0x2bdf9464, 0x41e2, 0x43e3, 0x95, 0x0c, 0xa6, 0x86, 0x5b, 0xa2, 0x5c, 0xd4);
DEFINE_GUID(IID_ITextStoreSinkAnchorEx, 0x25642426, 0x028d, 0x4474, 0x97, 0x7b, 0x11, 0x1b, 0xb1, 0x14, 0xfe, 0x3e);
DEFINE_GUID(IID_IAccDictionary, 0x1DC4CB5F, 0xD737, 0x474d, 0xAD, 0xE9, 0x5C, 0xCF, 0xC9, 0xBC, 0x1C, 0xC9);
DEFINE_GUID(IID_IVersionInfo, 0x401518EC, 0xDB00, 0x4611, 0x9B, 0x29, 0x2A, 0x0E, 0x4B, 0x9A, 0xFA, 0x85);
DEFINE_GUID(IID_ICoCreateLocally, 0x03DE00AA, 0xF272, 0x41e3, 0x99, 0xCB, 0x03, 0xC5, 0xE8, 0x11, 0x4E, 0xA0);
DEFINE_GUID(IID_ICoCreatedLocally, 0x0A53EB6C, 0x1908, 0x4742, 0x8C, 0xFF, 0x2C, 0xEE, 0x2E, 0x93, 0xF9, 0x4C);
DEFINE_GUID(IID_IAccStore, 0xE2CD4A63, 0x2B72, 0x4D48, 0xB7, 0x39, 0x95, 0xE4, 0x76, 0x51, 0x95, 0xBA);
DEFINE_GUID(IID_IAccServerDocMgr, 0xAD7C73CF, 0x6DD5, 0x4855, 0xAB, 0xC2, 0xB0, 0x4B, 0xAD, 0x5B, 0x91, 0x53);
DEFINE_GUID(IID_IAccClientDocMgr, 0x4C896039, 0x7B6D, 0x49e6, 0xA8, 0xC1, 0x45, 0x11, 0x6A, 0x98, 0x29, 0x2B);
DEFINE_GUID(IID_IDocWrap, 0xDCD285FE, 0x0BE0, 0x43BD, 0x99, 0xC9, 0xAA, 0xAE, 0xC5, 0x13, 0xC5, 0x55);
DEFINE_GUID(IID_IClonableWrapper, 0xB33E75FF, 0xE84C, 0x4dca, 0xA2, 0x5C, 0x33, 0xB8, 0xDC, 0x00, 0x33, 0x74);
DEFINE_GUID(LIBID_MSAATEXTLib, 0x150E2D7A, 0xDAC1, 0x4582, 0x94, 0x7D, 0x2A, 0x8F, 0xD7, 0x8B, 0x82, 0xCD);
DEFINE_GUID(CLSID_MSAAControl, 0x08cd963f, 0x7a3e, 0x4f5c, 0x9b, 0xd8, 0xd6, 0x92, 0xbb, 0x04, 0x3c, 0x5b);
DEFINE_GUID(CLSID_AccStore, 0x5440837F, 0x4BFF, 0x4AE5, 0xA1, 0xB1, 0x77, 0x22, 0xEC, 0xC6, 0x33, 0x2A);
DEFINE_GUID(CLSID_AccDictionary, 0x6572EE16, 0x5FE5, 0x4331, 0xBB, 0x6D, 0x76, 0xA4, 0x9C, 0x56, 0xE4, 0x23);
DEFINE_GUID(CLSID_AccServerDocMgr, 0x6089A37E, 0xEB8A, 0x482D, 0xBD, 0x6F, 0xF9, 0xF4, 0x69, 0x04, 0xD1, 0x6D);
DEFINE_GUID(CLSID_AccClientDocMgr, 0xFC48CC30, 0x4F3E, 0x4fa1, 0x80, 0x3B, 0xAD, 0x0E, 0x19, 0x6A, 0x83, 0xB1);
DEFINE_GUID(CLSID_DocWrap, 0xBF426F7E, 0x7A5E, 0x44D6, 0x83, 0x0C, 0xA3, 0x90, 0xEA, 0x94, 0x62, 0xA3);
extern RPC_IF_HANDLE __MIDL_itf_msaatext_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msaatext_0000_0000_v0_0_s_ifspec;
#ifndef __ITfMSAAControl_INTERFACE_DEFINED__
#define __ITfMSAAControl_INTERFACE_DEFINED__
extern const IID IID_ITfMSAAControl;
typedef struct ITfMSAAControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITfMSAAControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITfMSAAControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITfMSAAControl * This);
	HRESULT(STDMETHODCALLTYPE * SystemEnableMSAA) (ITfMSAAControl * This);
	HRESULT(STDMETHODCALLTYPE * SystemDisableMSAA) (ITfMSAAControl * This);
	END_INTERFACE
}  ITfMSAAControlVtbl;
interface ITfMSAAControl
{
	CONST_VTBL struct ITfMSAAControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfMSAAControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfMSAAControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITfMSAAControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITfMSAAControl_SystemEnableMSAA(This) ( (This)->lpVtbl -> SystemEnableMSAA(This) )
#define ITfMSAAControl_SystemDisableMSAA(This) ( (This)->lpVtbl -> SystemDisableMSAA(This) )
#endif
#endif
#ifndef __IInternalDocWrap_INTERFACE_DEFINED__
#define __IInternalDocWrap_INTERFACE_DEFINED__
extern const IID IID_IInternalDocWrap;
typedef struct IInternalDocWrapVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInternalDocWrap * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInternalDocWrap * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInternalDocWrap * This);
	HRESULT(STDMETHODCALLTYPE * NotifyRevoke) (IInternalDocWrap * This);
	END_INTERFACE
}  IInternalDocWrapVtbl;
interface IInternalDocWrap
{
	CONST_VTBL struct IInternalDocWrapVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInternalDocWrap_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInternalDocWrap_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInternalDocWrap_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInternalDocWrap_NotifyRevoke(This) ( (This)->lpVtbl -> NotifyRevoke(This) )
#endif
#endif
#ifndef __ITextStoreACPEx_INTERFACE_DEFINED__
#define __ITextStoreACPEx_INTERFACE_DEFINED__
extern const IID IID_ITextStoreACPEx;
typedef struct ITextStoreACPExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITextStoreACPEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITextStoreACPEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITextStoreACPEx * This);
	HRESULT(STDMETHODCALLTYPE * ScrollToRect) (ITextStoreACPEx * This, LONG acpStart, LONG acpEnd, RECT rc, DWORD dwPosition);
	END_INTERFACE
}  ITextStoreACPExVtbl;
interface ITextStoreACPEx
{
	CONST_VTBL struct ITextStoreACPExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITextStoreACPEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITextStoreACPEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITextStoreACPEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITextStoreACPEx_ScrollToRect(This,acpStart,acpEnd,rc,dwPosition) ( (This)->lpVtbl -> ScrollToRect(This,acpStart,acpEnd,rc,dwPosition) )
#endif
#endif
#ifndef __ITextStoreAnchorEx_INTERFACE_DEFINED__
#define __ITextStoreAnchorEx_INTERFACE_DEFINED__
extern const IID IID_ITextStoreAnchorEx;
typedef struct ITextStoreAnchorExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITextStoreAnchorEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITextStoreAnchorEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITextStoreAnchorEx * This);
	HRESULT(STDMETHODCALLTYPE * ScrollToRect) (ITextStoreAnchorEx * This, IAnchor * pStart, IAnchor * pEnd, RECT rc, DWORD dwPosition);
	END_INTERFACE
}  ITextStoreAnchorExVtbl;
interface ITextStoreAnchorEx
{
	CONST_VTBL struct ITextStoreAnchorExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITextStoreAnchorEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITextStoreAnchorEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITextStoreAnchorEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITextStoreAnchorEx_ScrollToRect(This,pStart,pEnd,rc,dwPosition) ( (This)->lpVtbl -> ScrollToRect(This,pStart,pEnd,rc,dwPosition) )
#endif
#endif
#define	TS_STRF_START	( 0 )
#define	TS_STRF_MID	( 1 )
#define	TS_STRF_END	( 2 )
extern RPC_IF_HANDLE __MIDL_itf_msaatext_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msaatext_0000_0004_v0_0_s_ifspec;
#ifndef __ITextStoreACPSinkEx_INTERFACE_DEFINED__
#define __ITextStoreACPSinkEx_INTERFACE_DEFINED__
extern const IID IID_ITextStoreACPSinkEx;
typedef struct ITextStoreACPSinkExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITextStoreACPSinkEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITextStoreACPSinkEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITextStoreACPSinkEx * This);
	HRESULT(STDMETHODCALLTYPE * OnTextChange) (ITextStoreACPSinkEx * This, DWORD dwFlags, const TS_TEXTCHANGE * pChange);
	HRESULT(STDMETHODCALLTYPE * OnSelectionChange) (ITextStoreACPSinkEx * This);
	HRESULT(STDMETHODCALLTYPE * OnLayoutChange) (ITextStoreACPSinkEx * This, TsLayoutCode lcode, TsViewCookie vcView);
	HRESULT(STDMETHODCALLTYPE * OnStatusChange) (ITextStoreACPSinkEx * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * OnAttrsChange) (ITextStoreACPSinkEx * This, LONG acpStart, LONG acpEnd, ULONG cAttrs, const TS_ATTRID * paAttrs);
	HRESULT(STDMETHODCALLTYPE * OnLockGranted) (ITextStoreACPSinkEx * This, DWORD dwLockFlags);
	HRESULT(STDMETHODCALLTYPE * OnStartEditTransaction) (ITextStoreACPSinkEx * This);
	HRESULT(STDMETHODCALLTYPE * OnEndEditTransaction) (ITextStoreACPSinkEx * This);
	HRESULT(STDMETHODCALLTYPE * OnDisconnect) (ITextStoreACPSinkEx * This);
	END_INTERFACE
}  ITextStoreACPSinkExVtbl;
interface ITextStoreACPSinkEx
{
	CONST_VTBL struct ITextStoreACPSinkExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITextStoreACPSinkEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITextStoreACPSinkEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITextStoreACPSinkEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITextStoreACPSinkEx_OnTextChange(This,dwFlags,pChange) ( (This)->lpVtbl -> OnTextChange(This,dwFlags,pChange) )
#define ITextStoreACPSinkEx_OnSelectionChange(This) ( (This)->lpVtbl -> OnSelectionChange(This) )
#define ITextStoreACPSinkEx_OnLayoutChange(This,lcode,vcView) ( (This)->lpVtbl -> OnLayoutChange(This,lcode,vcView) )
#define ITextStoreACPSinkEx_OnStatusChange(This,dwFlags) ( (This)->lpVtbl -> OnStatusChange(This,dwFlags) )
#define ITextStoreACPSinkEx_OnAttrsChange(This,acpStart,acpEnd,cAttrs,paAttrs) ( (This)->lpVtbl -> OnAttrsChange(This,acpStart,acpEnd,cAttrs,paAttrs) )
#define ITextStoreACPSinkEx_OnLockGranted(This,dwLockFlags) ( (This)->lpVtbl -> OnLockGranted(This,dwLockFlags) )
#define ITextStoreACPSinkEx_OnStartEditTransaction(This) ( (This)->lpVtbl -> OnStartEditTransaction(This) )
#define ITextStoreACPSinkEx_OnEndEditTransaction(This) ( (This)->lpVtbl -> OnEndEditTransaction(This) )
#define ITextStoreACPSinkEx_OnDisconnect(This) ( (This)->lpVtbl -> OnDisconnect(This) )
#endif
#endif
#ifndef __ITextStoreSinkAnchorEx_INTERFACE_DEFINED__
#define __ITextStoreSinkAnchorEx_INTERFACE_DEFINED__
extern const IID IID_ITextStoreSinkAnchorEx;
typedef struct ITextStoreSinkAnchorExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITextStoreSinkAnchorEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITextStoreSinkAnchorEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITextStoreSinkAnchorEx * This);
	HRESULT(STDMETHODCALLTYPE * OnTextChange) (ITextStoreSinkAnchorEx * This, DWORD dwFlags, IAnchor * paStart, IAnchor * paEnd);
	HRESULT(STDMETHODCALLTYPE * OnSelectionChange) (ITextStoreSinkAnchorEx * This);
	HRESULT(STDMETHODCALLTYPE * OnLayoutChange) (ITextStoreSinkAnchorEx * This, TsLayoutCode lcode, TsViewCookie vcView);
	HRESULT(STDMETHODCALLTYPE * OnStatusChange) (ITextStoreSinkAnchorEx * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * OnAttrsChange) (ITextStoreSinkAnchorEx * This, IAnchor * paStart, IAnchor * paEnd, ULONG cAttrs, const TS_ATTRID * paAttrs);
	HRESULT(STDMETHODCALLTYPE * OnLockGranted) (ITextStoreSinkAnchorEx * This, DWORD dwLockFlags);
	HRESULT(STDMETHODCALLTYPE * OnStartEditTransaction) (ITextStoreSinkAnchorEx * This);
	HRESULT(STDMETHODCALLTYPE * OnEndEditTransaction) (ITextStoreSinkAnchorEx * This);
	HRESULT(STDMETHODCALLTYPE * OnDisconnect) (ITextStoreSinkAnchorEx * This);
	END_INTERFACE
}  ITextStoreSinkAnchorExVtbl;
interface ITextStoreSinkAnchorEx
{
	CONST_VTBL struct ITextStoreSinkAnchorExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITextStoreSinkAnchorEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITextStoreSinkAnchorEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITextStoreSinkAnchorEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITextStoreSinkAnchorEx_OnTextChange(This,dwFlags,paStart,paEnd) ( (This)->lpVtbl -> OnTextChange(This,dwFlags,paStart,paEnd) )
#define ITextStoreSinkAnchorEx_OnSelectionChange(This) ( (This)->lpVtbl -> OnSelectionChange(This) )
#define ITextStoreSinkAnchorEx_OnLayoutChange(This,lcode,vcView) ( (This)->lpVtbl -> OnLayoutChange(This,lcode,vcView) )
#define ITextStoreSinkAnchorEx_OnStatusChange(This,dwFlags) ( (This)->lpVtbl -> OnStatusChange(This,dwFlags) )
#define ITextStoreSinkAnchorEx_OnAttrsChange(This,paStart,paEnd,cAttrs,paAttrs) ( (This)->lpVtbl -> OnAttrsChange(This,paStart,paEnd,cAttrs,paAttrs) )
#define ITextStoreSinkAnchorEx_OnLockGranted(This,dwLockFlags) ( (This)->lpVtbl -> OnLockGranted(This,dwLockFlags) )
#define ITextStoreSinkAnchorEx_OnStartEditTransaction(This) ( (This)->lpVtbl -> OnStartEditTransaction(This) )
#define ITextStoreSinkAnchorEx_OnEndEditTransaction(This) ( (This)->lpVtbl -> OnEndEditTransaction(This) )
#define ITextStoreSinkAnchorEx_OnDisconnect(This) ( (This)->lpVtbl -> OnDisconnect(This) )
#endif
#endif
#ifndef __IAccDictionary_INTERFACE_DEFINED__
#define __IAccDictionary_INTERFACE_DEFINED__
extern const IID IID_IAccDictionary;
typedef struct IAccDictionaryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAccDictionary * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAccDictionary * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAccDictionary * This);
	HRESULT(STDMETHODCALLTYPE * GetLocalizedString) (IAccDictionary * This, REFGUID Term, LCID lcid, BSTR * pResult, LCID * plcid);
	HRESULT(STDMETHODCALLTYPE * GetParentTerm) (IAccDictionary * This, REFGUID Term, GUID * pParentTerm);
	HRESULT(STDMETHODCALLTYPE * GetMnemonicString) (IAccDictionary * This, REFGUID Term, BSTR * pResult);
	HRESULT(STDMETHODCALLTYPE * LookupMnemonicTerm) (IAccDictionary * This, BSTR bstrMnemonic, GUID * pTerm);
	HRESULT(STDMETHODCALLTYPE * ConvertValueToString) (IAccDictionary * This, REFGUID Term, LCID lcid, VARIANT varValue, BSTR * pbstrResult, LCID * plcid);
	END_INTERFACE
}  IAccDictionaryVtbl;
interface IAccDictionary
{
	CONST_VTBL struct IAccDictionaryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAccDictionary_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAccDictionary_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAccDictionary_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAccDictionary_GetLocalizedString(This,Term,lcid,pResult,plcid) ( (This)->lpVtbl -> GetLocalizedString(This,Term,lcid,pResult,plcid) )
#define IAccDictionary_GetParentTerm(This,Term,pParentTerm) ( (This)->lpVtbl -> GetParentTerm(This,Term,pParentTerm) )
#define IAccDictionary_GetMnemonicString(This,Term,pResult) ( (This)->lpVtbl -> GetMnemonicString(This,Term,pResult) )
#define IAccDictionary_LookupMnemonicTerm(This,bstrMnemonic,pTerm) ( (This)->lpVtbl -> LookupMnemonicTerm(This,bstrMnemonic,pTerm) )
#define IAccDictionary_ConvertValueToString(This,Term,lcid,varValue,pbstrResult,plcid) ( (This)->lpVtbl -> ConvertValueToString(This,Term,lcid,varValue,pbstrResult,plcid) )
#endif
#endif
#ifndef __IVersionInfo_INTERFACE_DEFINED__
#define __IVersionInfo_INTERFACE_DEFINED__
extern const IID IID_IVersionInfo;
typedef struct IVersionInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVersionInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVersionInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVersionInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetSubcomponentCount) (IVersionInfo * This, ULONG ulSub, ULONG * ulCount);
	HRESULT(STDMETHODCALLTYPE * GetImplementationID) (IVersionInfo * This, ULONG ulSub, GUID * implid);
	HRESULT(STDMETHODCALLTYPE * GetBuildVersion) (IVersionInfo * This, ULONG ulSub, DWORD * pdwMajor, DWORD * pdwMinor);
	HRESULT(STDMETHODCALLTYPE * GetComponentDescription) (IVersionInfo * This, ULONG ulSub, BSTR * pImplStr);
	HRESULT(STDMETHODCALLTYPE * GetInstanceDescription) (IVersionInfo * This, ULONG ulSub, BSTR * pImplStr);
	END_INTERFACE
}  IVersionInfoVtbl;
interface IVersionInfo
{
	CONST_VTBL struct IVersionInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVersionInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVersionInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVersionInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVersionInfo_GetSubcomponentCount(This,ulSub,ulCount) ( (This)->lpVtbl -> GetSubcomponentCount(This,ulSub,ulCount) )
#define IVersionInfo_GetImplementationID(This,ulSub,implid) ( (This)->lpVtbl -> GetImplementationID(This,ulSub,implid) )
#define IVersionInfo_GetBuildVersion(This,ulSub,pdwMajor,pdwMinor) ( (This)->lpVtbl -> GetBuildVersion(This,ulSub,pdwMajor,pdwMinor) )
#define IVersionInfo_GetComponentDescription(This,ulSub,pImplStr) ( (This)->lpVtbl -> GetComponentDescription(This,ulSub,pImplStr) )
#define IVersionInfo_GetInstanceDescription(This,ulSub,pImplStr) ( (This)->lpVtbl -> GetInstanceDescription(This,ulSub,pImplStr) )
#endif
#endif
#ifndef __ICoCreateLocally_INTERFACE_DEFINED__
#define __ICoCreateLocally_INTERFACE_DEFINED__
extern const IID IID_ICoCreateLocally;
typedef struct ICoCreateLocallyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICoCreateLocally * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICoCreateLocally * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICoCreateLocally * This);
	HRESULT(STDMETHODCALLTYPE * CoCreateLocally) (ICoCreateLocally * This, REFCLSID rclsid, DWORD dwClsContext, REFIID riid, IUnknown ** punk, REFIID riidParam, IUnknown * punkParam, VARIANT varParam);
	END_INTERFACE
}  ICoCreateLocallyVtbl;
interface ICoCreateLocally
{
	CONST_VTBL struct ICoCreateLocallyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICoCreateLocally_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICoCreateLocally_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICoCreateLocally_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICoCreateLocally_CoCreateLocally(This,rclsid,dwClsContext,riid,punk,riidParam,punkParam,varParam) ( (This)->lpVtbl -> CoCreateLocally(This,rclsid,dwClsContext,riid,punk,riidParam,punkParam,varParam) )
#endif
#endif
#ifndef __ICoCreatedLocally_INTERFACE_DEFINED__
#define __ICoCreatedLocally_INTERFACE_DEFINED__
extern const IID IID_ICoCreatedLocally;
typedef struct ICoCreatedLocallyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICoCreatedLocally * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICoCreatedLocally * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICoCreatedLocally * This);
	HRESULT(STDMETHODCALLTYPE * LocalInit) (ICoCreatedLocally * This, IUnknown * punkLocalObject, REFIID riidParam, IUnknown * punkParam, VARIANT varParam);
	END_INTERFACE
}  ICoCreatedLocallyVtbl;
interface ICoCreatedLocally
{
	CONST_VTBL struct ICoCreatedLocallyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICoCreatedLocally_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICoCreatedLocally_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICoCreatedLocally_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICoCreatedLocally_LocalInit(This,punkLocalObject,riidParam,punkParam,varParam) ( (This)->lpVtbl -> LocalInit(This,punkLocalObject,riidParam,punkParam,varParam) )
#endif
#endif
#ifndef __IAccStore_INTERFACE_DEFINED__
#define __IAccStore_INTERFACE_DEFINED__
extern const IID IID_IAccStore;
typedef struct IAccStoreVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAccStore * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAccStore * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAccStore * This);
	HRESULT(STDMETHODCALLTYPE * Register) (IAccStore * This, REFIID riid, IUnknown * punk);
	HRESULT(STDMETHODCALLTYPE * Unregister) (IAccStore * This, IUnknown * punk);
	HRESULT(STDMETHODCALLTYPE * GetDocuments) (IAccStore * This, IEnumUnknown ** enumUnknown);
	HRESULT(STDMETHODCALLTYPE * LookupByHWND) (IAccStore * This, HWND hWnd, REFIID riid, IUnknown ** ppunk);
	HRESULT(STDMETHODCALLTYPE * LookupByPoint) (IAccStore * This, POINT pt, REFIID riid, IUnknown ** ppunk);
	HRESULT(STDMETHODCALLTYPE * OnDocumentFocus) (IAccStore * This, IUnknown * punk);
	HRESULT(STDMETHODCALLTYPE * GetFocused) (IAccStore * This, REFIID riid, IUnknown ** ppunk);
	END_INTERFACE
}  IAccStoreVtbl;
interface IAccStore
{
	CONST_VTBL struct IAccStoreVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAccStore_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAccStore_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAccStore_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAccStore_Register(This,riid,punk) ( (This)->lpVtbl -> Register(This,riid,punk) )
#define IAccStore_Unregister(This,punk) ( (This)->lpVtbl -> Unregister(This,punk) )
#define IAccStore_GetDocuments(This,enumUnknown) ( (This)->lpVtbl -> GetDocuments(This,enumUnknown) )
#define IAccStore_LookupByHWND(This,hWnd,riid,ppunk) ( (This)->lpVtbl -> LookupByHWND(This,hWnd,riid,ppunk) )
#define IAccStore_LookupByPoint(This,pt,riid,ppunk) ( (This)->lpVtbl -> LookupByPoint(This,pt,riid,ppunk) )
#define IAccStore_OnDocumentFocus(This,punk) ( (This)->lpVtbl -> OnDocumentFocus(This,punk) )
#define IAccStore_GetFocused(This,riid,ppunk) ( (This)->lpVtbl -> GetFocused(This,riid,ppunk) )
#endif
#endif
#ifndef __IAccServerDocMgr_INTERFACE_DEFINED__
#define __IAccServerDocMgr_INTERFACE_DEFINED__
extern const IID IID_IAccServerDocMgr;
typedef struct IAccServerDocMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAccServerDocMgr * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAccServerDocMgr * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAccServerDocMgr * This);
	HRESULT(STDMETHODCALLTYPE * NewDocument) (IAccServerDocMgr * This, REFIID riid, IUnknown * punk);
	HRESULT(STDMETHODCALLTYPE * RevokeDocument) (IAccServerDocMgr * This, IUnknown * punk);
	HRESULT(STDMETHODCALLTYPE * OnDocumentFocus) (IAccServerDocMgr * This, IUnknown * punk);
	END_INTERFACE
}  IAccServerDocMgrVtbl;
interface IAccServerDocMgr
{
	CONST_VTBL struct IAccServerDocMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAccServerDocMgr_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAccServerDocMgr_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAccServerDocMgr_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAccServerDocMgr_NewDocument(This,riid,punk) ( (This)->lpVtbl -> NewDocument(This,riid,punk) )
#define IAccServerDocMgr_RevokeDocument(This,punk) ( (This)->lpVtbl -> RevokeDocument(This,punk) )
#define IAccServerDocMgr_OnDocumentFocus(This,punk) ( (This)->lpVtbl -> OnDocumentFocus(This,punk) )
#endif
#endif
#ifndef __IAccClientDocMgr_INTERFACE_DEFINED__
#define __IAccClientDocMgr_INTERFACE_DEFINED__
extern const IID IID_IAccClientDocMgr;
typedef struct IAccClientDocMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAccClientDocMgr * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAccClientDocMgr * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAccClientDocMgr * This);
	HRESULT(STDMETHODCALLTYPE * GetDocuments) (IAccClientDocMgr * This, IEnumUnknown ** enumUnknown);
	HRESULT(STDMETHODCALLTYPE * LookupByHWND) (IAccClientDocMgr * This, HWND hWnd, REFIID riid, IUnknown ** ppunk);
	HRESULT(STDMETHODCALLTYPE * LookupByPoint) (IAccClientDocMgr * This, POINT pt, REFIID riid, IUnknown ** ppunk);
	HRESULT(STDMETHODCALLTYPE * GetFocused) (IAccClientDocMgr * This, REFIID riid, IUnknown ** ppunk);
	END_INTERFACE
}  IAccClientDocMgrVtbl;
interface IAccClientDocMgr
{
	CONST_VTBL struct IAccClientDocMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAccClientDocMgr_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAccClientDocMgr_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAccClientDocMgr_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAccClientDocMgr_GetDocuments(This,enumUnknown) ( (This)->lpVtbl -> GetDocuments(This,enumUnknown) )
#define IAccClientDocMgr_LookupByHWND(This,hWnd,riid,ppunk) ( (This)->lpVtbl -> LookupByHWND(This,hWnd,riid,ppunk) )
#define IAccClientDocMgr_LookupByPoint(This,pt,riid,ppunk) ( (This)->lpVtbl -> LookupByPoint(This,pt,riid,ppunk) )
#define IAccClientDocMgr_GetFocused(This,riid,ppunk) ( (This)->lpVtbl -> GetFocused(This,riid,ppunk) )
#endif
#endif
#ifndef __IDocWrap_INTERFACE_DEFINED__
#define __IDocWrap_INTERFACE_DEFINED__
extern const IID IID_IDocWrap;
typedef struct IDocWrapVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDocWrap * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDocWrap * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDocWrap * This);
	HRESULT(STDMETHODCALLTYPE * SetDoc) (IDocWrap * This, REFIID riid, IUnknown * punk);
	HRESULT(STDMETHODCALLTYPE * GetWrappedDoc) (IDocWrap * This, REFIID riid, IUnknown ** ppunk);
	END_INTERFACE
}  IDocWrapVtbl;
interface IDocWrap
{
	CONST_VTBL struct IDocWrapVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDocWrap_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDocWrap_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDocWrap_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDocWrap_SetDoc(This,riid,punk) ( (This)->lpVtbl -> SetDoc(This,riid,punk) )
#define IDocWrap_GetWrappedDoc(This,riid,ppunk) ( (This)->lpVtbl -> GetWrappedDoc(This,riid,ppunk) )
#endif
#endif
#ifndef __IClonableWrapper_INTERFACE_DEFINED__
#define __IClonableWrapper_INTERFACE_DEFINED__
extern const IID IID_IClonableWrapper;
typedef struct IClonableWrapperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IClonableWrapper * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IClonableWrapper * This);
	ULONG(STDMETHODCALLTYPE * Release) (IClonableWrapper * This);
	HRESULT(STDMETHODCALLTYPE * CloneNewWrapper) (IClonableWrapper * This, REFIID riid, void **ppv);
	END_INTERFACE
}  IClonableWrapperVtbl;
interface IClonableWrapper
{
	CONST_VTBL struct IClonableWrapperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IClonableWrapper_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IClonableWrapper_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IClonableWrapper_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IClonableWrapper_CloneNewWrapper(This,riid,ppv) ( (This)->lpVtbl -> CloneNewWrapper(This,riid,ppv) )
#endif
#endif
#ifndef __MSAATEXTLib_LIBRARY_DEFINED__
#define __MSAATEXTLib_LIBRARY_DEFINED__
extern const IID LIBID_MSAATEXTLib;
extern const CLSID CLSID_MSAAControl;
extern const CLSID CLSID_AccStore;
extern const CLSID CLSID_AccDictionary;
extern const CLSID CLSID_AccServerDocMgr;
extern const CLSID CLSID_AccClientDocMgr;
extern const CLSID CLSID_DocWrap;
#endif
DEFINE_GUID(IID_ITextStoreACP, 0x28888fe3, 0xc2a0, 0x483a, 0xa3, 0xea, 0x8c, 0xb1, 0xce, 0x51, 0xff, 0x3d);
DEFINE_GUID(IID_ITextStoreAnchor, 0x9b2077b0, 0x5f18, 0x4dec, 0xbe, 0xe9, 0x3c, 0xc7, 0x22, 0xf5, 0xdf, 0xe0);
DEFINE_GUID(IID_IAnchor, 0x0feb7e34, 0x5a60, 0x4356, 0x8e, 0xf7, 0xab, 0xde, 0xc2, 0xff, 0x7c, 0xf8);
DEFINE_GUID(IID_ITextStoreAnchorSink, 0xaa80e905, 0x2021, 0x11d2, 0x93, 0xe0, 0x00, 0x60, 0xb0, 0x67, 0xb8, 0x6e);
DEFINE_GUID(IID_ITextStoreACPSink, 0x22d44c94, 0xa419, 0x4542, 0xa2, 0x72, 0xae, 0x26, 0x09, 0x3e, 0xce, 0xcf);
extern RPC_IF_HANDLE __MIDL_itf_msaatext_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msaatext_0000_0015_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
#endif
