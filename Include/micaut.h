/*+@@file@@----------------------------------------------------------------*//*!
 \file		micaut.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug  7 21:26:02 2016
 \date		Modified on Sun Aug  7 21:26:02 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
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
#ifndef __micaut_h__
#define __micaut_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IMathInputControl_FWD_DEFINED__
#define __IMathInputControl_FWD_DEFINED__
typedef interface IMathInputControl IMathInputControl;
#endif
#ifndef ___IMathInputControlEvents_FWD_DEFINED__
#define ___IMathInputControlEvents_FWD_DEFINED__
typedef interface _IMathInputControlEvents _IMathInputControlEvents;
#endif
#ifndef __MathInputControl_FWD_DEFINED__
#define __MathInputControl_FWD_DEFINED__
typedef struct MathInputControl MathInputControl;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <msinkaut.h>
typedef DECLSPEC_UUID("D7803AF6-B018-4a42-AE48-B2D2319BCB05")
enum __MIDL___MIDL_itf_micaut_0000_0000_0001
{
	MICUIELEMENT_BUTTON_WRITE = (1 << 0),
	MICUIELEMENT_BUTTON_ERASE = (1 << 1),
	MICUIELEMENT_BUTTON_CORRECT = (1 << 2),
	MICUIELEMENT_BUTTON_CLEAR = (1 << 3),
	MICUIELEMENT_BUTTON_UNDO = (1 << 4),
	MICUIELEMENT_BUTTON_REDO = (1 << 5),
	MICUIELEMENT_BUTTON_INSERT = (1 << 6),
	MICUIELEMENT_BUTTON_CANCEL = (1 << 7),
	MICUIELEMENT_INKPANEL_BACKGROUND = (1 << 8),
	MICUIELEMENT_RESULTPANEL_BACKGROUND = (1 << 9)
} MICUIELEMENT;
typedef DECLSPEC_UUID("117F1516-9539-4e26-9CCF-CD7511AE9BF1")
enum __MIDL___MIDL_itf_micaut_0000_0000_0002
{
	MICUIELEMENTSTATE_NORMAL = 1,
	MICUIELEMENTSTATE_HOT = (MICUIELEMENTSTATE_NORMAL + 1),
	MICUIELEMENTSTATE_PRESSED = (MICUIELEMENTSTATE_HOT + 1),
	MICUIELEMENTSTATE_DISABLED = (MICUIELEMENTSTATE_PRESSED + 1)
} MICUIELEMENTSTATE;
typedef enum DISPID_MathInputControlEvents
{
	DISPID_MICInsert = 0,
	DISPID_MICClose = (DISPID_MICInsert + 1),
	DISPID_MICPaint = (DISPID_MICClose + 1),
	DISPID_MICClear = (DISPID_MICPaint + 1)
} DISPID_MathInputControlEvents;
extern RPC_IF_HANDLE __MIDL_itf_micaut_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_micaut_0000_0000_v0_0_s_ifspec;
#ifndef __IMathInputControl_INTERFACE_DEFINED__
#define __IMathInputControl_INTERFACE_DEFINED__
extern const IID IID_IMathInputControl;
typedef struct IMathInputControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMathInputControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMathInputControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMathInputControl *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IMathInputControl *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IMathInputControl *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IMathInputControl *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IMathInputControl *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *Show) (IMathInputControl *This);
	HRESULT(STDMETHODCALLTYPE *Hide) (IMathInputControl *This);
	HRESULT(STDMETHODCALLTYPE *IsVisible) (IMathInputControl *This, VARIANT_BOOL *pvbShown);
	HRESULT(STDMETHODCALLTYPE *GetPosition) (IMathInputControl *This, LONG *Left, LONG *Top, LONG *Right, LONG *Bottom);
	HRESULT(STDMETHODCALLTYPE *SetPosition) (IMathInputControl *This, LONG Left, LONG Top, LONG Right, LONG Bottom);
	HRESULT(STDMETHODCALLTYPE *Clear) (IMathInputControl *This);
	HRESULT(STDMETHODCALLTYPE *SetCustomPaint) (IMathInputControl *This, LONG Element, VARIANT_BOOL Paint);
	HRESULT(STDMETHODCALLTYPE *SetCaptionText) (IMathInputControl *This, BSTR CaptionText);
	HRESULT(STDMETHODCALLTYPE *LoadInk) (IMathInputControl *This, IInkDisp *Ink);
	HRESULT(STDMETHODCALLTYPE *SetOwnerWindow) (IMathInputControl *This, LONG_PTR OwnerWindow);
	HRESULT(STDMETHODCALLTYPE *EnableExtendedButtons) (IMathInputControl *This, VARIANT_BOOL Extended);
	HRESULT(STDMETHODCALLTYPE *GetPreviewHeight) (IMathInputControl *This, LONG *Height);
	HRESULT(STDMETHODCALLTYPE *SetPreviewHeight) (IMathInputControl *This, LONG Height);
	HRESULT(STDMETHODCALLTYPE *EnableAutoGrow) (IMathInputControl *This, VARIANT_BOOL AutoGrow);
	HRESULT(STDMETHODCALLTYPE *AddFunctionName) (IMathInputControl *This, BSTR FunctionName);
	HRESULT(STDMETHODCALLTYPE *RemoveFunctionName) (IMathInputControl *This, BSTR FunctionName);
	HRESULT(STDMETHODCALLTYPE *GetHoverIcon) (IMathInputControl *This, IPictureDisp **HoverImage);
	END_INTERFACE
}  IMathInputControlVtbl;
interface IMathInputControl
{
	CONST_VTBL struct IMathInputControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMathInputControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMathInputControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMathInputControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMathInputControl_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMathInputControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMathInputControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMathInputControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMathInputControl_Show(This) ( (This)->lpVtbl -> Show(This) )
#define IMathInputControl_Hide(This) ( (This)->lpVtbl -> Hide(This) )
#define IMathInputControl_IsVisible(This,pvbShown) ( (This)->lpVtbl -> IsVisible(This,pvbShown) )
#define IMathInputControl_GetPosition(This,Left,Top,Right,Bottom) ( (This)->lpVtbl -> GetPosition(This,Left,Top,Right,Bottom) )
#define IMathInputControl_SetPosition(This,Left,Top,Right,Bottom) ( (This)->lpVtbl -> SetPosition(This,Left,Top,Right,Bottom) )
#define IMathInputControl_Clear(This) ( (This)->lpVtbl -> Clear(This) )
#define IMathInputControl_SetCustomPaint(This,Element,Paint) ( (This)->lpVtbl -> SetCustomPaint(This,Element,Paint) )
#define IMathInputControl_SetCaptionText(This,CaptionText) ( (This)->lpVtbl -> SetCaptionText(This,CaptionText) )
#define IMathInputControl_LoadInk(This,Ink) ( (This)->lpVtbl -> LoadInk(This,Ink) )
#define IMathInputControl_SetOwnerWindow(This,OwnerWindow) ( (This)->lpVtbl -> SetOwnerWindow(This,OwnerWindow) )
#define IMathInputControl_EnableExtendedButtons(This,Extended) ( (This)->lpVtbl -> EnableExtendedButtons(This,Extended) )
#define IMathInputControl_GetPreviewHeight(This,Height) ( (This)->lpVtbl -> GetPreviewHeight(This,Height) )
#define IMathInputControl_SetPreviewHeight(This,Height) ( (This)->lpVtbl -> SetPreviewHeight(This,Height) )
#define IMathInputControl_EnableAutoGrow(This,AutoGrow) ( (This)->lpVtbl -> EnableAutoGrow(This,AutoGrow) )
#define IMathInputControl_AddFunctionName(This,FunctionName) ( (This)->lpVtbl -> AddFunctionName(This,FunctionName) )
#define IMathInputControl_RemoveFunctionName(This,FunctionName) ( (This)->lpVtbl -> RemoveFunctionName(This,FunctionName) )
#define IMathInputControl_GetHoverIcon(This,HoverImage) ( (This)->lpVtbl -> GetHoverIcon(This,HoverImage) )
#endif
#endif
#ifndef __micautLib_LIBRARY_DEFINED__
#define __micautLib_LIBRARY_DEFINED__
extern const IID LIBID_micautLib;
#ifndef ___IMathInputControlEvents_DISPINTERFACE_DEFINED__
#define ___IMathInputControlEvents_DISPINTERFACE_DEFINED__
extern const IID DIID__IMathInputControlEvents;
typedef struct _IMathInputControlEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (_IMathInputControlEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (_IMathInputControlEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (_IMathInputControlEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (_IMathInputControlEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (_IMathInputControlEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (_IMathInputControlEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (_IMathInputControlEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	END_INTERFACE
}  _IMathInputControlEventsVtbl;
interface _IMathInputControlEvents
{
	CONST_VTBL struct _IMathInputControlEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _IMathInputControlEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _IMathInputControlEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define _IMathInputControlEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define _IMathInputControlEvents_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _IMathInputControlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _IMathInputControlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _IMathInputControlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_MathInputControl;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif
