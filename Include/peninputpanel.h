/*+@@file@@----------------------------------------------------------------*//*!
 \file		peninputpanel.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 12 00:09:56 2016
 \date		Modified on Mon Sep 12 00:09:56 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __peninputpanel_h__
#define __peninputpanel_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IPenInputPanel_FWD_DEFINED__
#define __IPenInputPanel_FWD_DEFINED__
typedef interface IPenInputPanel IPenInputPanel;
#endif
#ifndef ___IPenInputPanelEvents_FWD_DEFINED__
#define ___IPenInputPanelEvents_FWD_DEFINED__
typedef interface _IPenInputPanelEvents _IPenInputPanelEvents;
#endif
#ifndef __IHandwrittenTextInsertion_FWD_DEFINED__
#define __IHandwrittenTextInsertion_FWD_DEFINED__
typedef interface IHandwrittenTextInsertion IHandwrittenTextInsertion;
#endif
#ifndef __HandwrittenTextInsertion_FWD_DEFINED__
#define __HandwrittenTextInsertion_FWD_DEFINED__
typedef struct HandwrittenTextInsertion HandwrittenTextInsertion;
#endif
#ifndef __PenInputPanel_FWD_DEFINED__
#define __PenInputPanel_FWD_DEFINED__
typedef struct PenInputPanel PenInputPanel;
#endif
#ifndef __ITextInputPanelEventSink_FWD_DEFINED__
#define __ITextInputPanelEventSink_FWD_DEFINED__
typedef interface ITextInputPanelEventSink ITextInputPanelEventSink;
#endif
#ifndef __ITextInputPanel_FWD_DEFINED__
#define __ITextInputPanel_FWD_DEFINED__
typedef interface ITextInputPanel ITextInputPanel;
#endif
#ifndef __IInputPanelWindowHandle_FWD_DEFINED__
#define __IInputPanelWindowHandle_FWD_DEFINED__
typedef interface IInputPanelWindowHandle IInputPanelWindowHandle;
#endif
#ifndef __ITextInputPanelRunInfo_FWD_DEFINED__
#define __ITextInputPanelRunInfo_FWD_DEFINED__
typedef interface ITextInputPanelRunInfo ITextInputPanelRunInfo;
#endif
#ifndef __TextInputPanel_FWD_DEFINED__
#define __TextInputPanel_FWD_DEFINED__
typedef struct TextInputPanel TextInputPanel;
#endif
#ifndef __PenInputPanel_Internal_FWD_DEFINED__
#define __PenInputPanel_Internal_FWD_DEFINED__
typedef struct PenInputPanel_Internal PenInputPanel_Internal;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "msinkaut.h"
#ifndef __PenInputPanelLib_LIBRARY_DEFINED__
#define __PenInputPanelLib_LIBRARY_DEFINED__
#define MICROSOFT_PENINPUT_PANEL_PROPERTY_T	L"Microsoft PenInputPanel 1.5"
typedef enum DISPID_PenInputPanel
{
	DISPID_PIPAttachedEditWindow = DISPID_VALUE,
	DISPID_PIPFactoid = (DISPID_PIPAttachedEditWindow + 1),
	DISPID_PIPCurrentPanel = (DISPID_PIPFactoid + 1),
	DISPID_PIPDefaultPanel = (DISPID_PIPCurrentPanel + 1),
	DISPID_PIPVisible = (DISPID_PIPDefaultPanel + 1),
	DISPID_PIPTop = (DISPID_PIPVisible + 1),
	DISPID_PIPLeft = (DISPID_PIPTop + 1),
	DISPID_PIPWidth = (DISPID_PIPLeft + 1),
	DISPID_PIPHeight = (DISPID_PIPWidth + 1),
	DISPID_PIPMoveTo = (DISPID_PIPHeight + 1),
	DISPID_PIPCommitPendingInput = (DISPID_PIPMoveTo + 1),
	DISPID_PIPRefresh = (DISPID_PIPCommitPendingInput + 1),
	DISPID_PIPBusy = (DISPID_PIPRefresh + 1),
	DISPID_PIPVerticalOffset = (DISPID_PIPBusy + 1),
	DISPID_PIPHorizontalOffset = (DISPID_PIPVerticalOffset + 1),
	DISPID_PIPEnableTsf = (DISPID_PIPHorizontalOffset + 1),
	DISPID_PIPAutoShow = (DISPID_PIPEnableTsf + 1)
} DISPID_PenInputPanel;
typedef enum DISPID_PenInputPanelEvents
{
	DISPID_PIPEVisibleChanged = 0,
	DISPID_PIPEPanelChanged = (DISPID_PIPEVisibleChanged + 1),
	DISPID_PIPEInputFailed = (DISPID_PIPEPanelChanged + 1),
	DISPID_PIPEPanelMoving = (DISPID_PIPEInputFailed + 1)
} DISPID_PenInputPanelEvents;
typedef DECLSPEC_UUID("7fd1134a-b2ba-4673-8d64-e28be4168e5d")
enum VisualState
{
	InPlace = 0,
	Floating = 1,
	DockedTop = 2,
	DockedBottom = 3,
	Closed = 4
} VisualState;
typedef DECLSPEC_UUID("500f9c5a-6739-449b-9cfa-5fc2f2e9ddce")
enum __MIDL___MIDL_itf_peninputpanel_0000_0000_0001
{
	InteractionMode_InPlace = 0,
	InteractionMode_Floating = 1,
	InteractionMode_DockedTop = 2,
	InteractionMode_DockedBottom = 3
} InteractionMode;
typedef DECLSPEC_UUID("aa9bda6b-fc6a-49a3-9d7c-26b233690583")
enum __MIDL___MIDL_itf_peninputpanel_0000_0000_0002
{
	InPlaceState_Auto = 0,
	InPlaceState_HoverTarget = 1,
	InPlaceState_Expanded = 2
} InPlaceState;
typedef DECLSPEC_UUID("8b4f78bf-4253-4467-a006-670419caa993")
enum __MIDL___MIDL_itf_peninputpanel_0000_0000_0003
{
	PanelInputArea_Auto = 0,
	PanelInputArea_Keyboard = 1,
	PanelInputArea_WritingPad = 2,
	PanelInputArea_CharacterPad = 3
} PanelInputArea;
typedef DECLSPEC_UUID("d708f745-981e-4e9b-afa0-98082aadb421")
enum __MIDL___MIDL_itf_peninputpanel_0000_0000_0004
{
	CorrectionMode_NotVisible = 0,
	CorrectionMode_PreInsertion = 1,
	CorrectionMode_PostInsertionCollapsed = 2,
	CorrectionMode_PostInsertionExpanded = 3
} CorrectionMode;
typedef DECLSPEC_UUID("84ccefd0-9212-44e4-94e6-91562a94016e")
enum __MIDL___MIDL_itf_peninputpanel_0000_0000_0005
{
	CorrectionPosition_Auto = 0,
	CorrectionPosition_Bottom = 1,
	CorrectionPosition_Top = 2
} CorrectionPosition;
typedef DECLSPEC_UUID("619eab37-412f-44ca-996f-0f415fb8bc12")
enum __MIDL___MIDL_itf_peninputpanel_0000_0000_0006
{
	InPlaceDirection_Auto = 0,
	InPlaceDirection_Bottom = 1,
	InPlaceDirection_Top = 2
} InPlaceDirection;
typedef DECLSPEC_UUID("1ad3e1f7-4dd0-48c3-a89b-dfccba13d6f7")
enum __MIDL___MIDL_itf_peninputpanel_0000_0000_0007
{
EventMask_InPlaceStateChanging = 1,
	EventMask_InPlaceStateChanged = 2,
	EventMask_InPlaceSizeChanging = 4,
	EventMask_InPlaceSizeChanged = 8,
	EventMask_InputAreaChanging = 16,
	EventMask_InputAreaChanged = 32,
	EventMask_CorrectionModeChanging = 64,
	EventMask_CorrectionModeChanged = 128,
	EventMask_InPlaceVisibilityChanging = 256,
	EventMask_InPlaceVisibilityChanged = 512,
	EventMask_TextInserting = 1024,
	EventMask_TextInserted = 2048,
	EventMask_All = (((((((((((EventMask_InPlaceStateChanging + EventMask_InPlaceStateChanged) + EventMask_InPlaceSizeChanging) + EventMask_InPlaceSizeChanged) + EventMask_InputAreaChanging) + EventMask_InputAreaChanged) + EventMask_CorrectionModeChanging) + EventMask_CorrectionModeChanged) + EventMask_InPlaceVisibilityChanging) + EventMask_InPlaceVisibilityChanged) + EventMask_TextInserting) + EventMask_TextInserted)
} EventMask;
const WCHAR MICROSOFT_URL_EXPERIENCE_PROPERTY[] = L"Microsoft TIP URL Experience";
const WCHAR MICROSOFT_TIP_NO_INSERT_BUTTON_PROPERTY[] = L"Microsoft TIP No Insert Option";
const WCHAR MICROSOFT_TIP_COMBOBOXLIST_PROPERTY[] = L"Microsoft TIP ComboBox List Window Identifier";
const WCHAR MICROSOFT_TIP_OPENING_MSG[] = L"TabletInputPanelOpening";
extern const IID LIBID_PenInputPanelLib;
#ifndef __IPenInputPanel_INTERFACE_DEFINED__
#define __IPenInputPanel_INTERFACE_DEFINED__
typedef enum PanelType
{
	PT_Default = 0,
	PT_Inactive = (PT_Default + 1),
	PT_Handwriting = (PT_Inactive + 1),
	PT_Keyboard = (PT_Handwriting + 1)
} PanelType;
extern const IID IID_IPenInputPanel;
typedef struct IPenInputPanelVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPenInputPanel *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPenInputPanel *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPenInputPanel *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IPenInputPanel *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IPenInputPanel *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IPenInputPanel *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IPenInputPanel *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Busy) (IPenInputPanel *This, VARIANT_BOOL *Busy);
	HRESULT(STDMETHODCALLTYPE *get_Factoid) (IPenInputPanel *This, BSTR *Factoid);
	HRESULT(STDMETHODCALLTYPE *put_Factoid) (IPenInputPanel *This, BSTR Factoid);
	HRESULT(STDMETHODCALLTYPE *get_AttachedEditWindow) (IPenInputPanel *This, LONG32 *AttachedEditWindow);
	HRESULT(STDMETHODCALLTYPE *put_AttachedEditWindow) (IPenInputPanel *This, LONG32 AttachedEditWindow);
	HRESULT(STDMETHODCALLTYPE *get_CurrentPanel) (IPenInputPanel *This, PanelType *CurrentPanel);
	HRESULT(STDMETHODCALLTYPE *put_CurrentPanel) (IPenInputPanel *This, PanelType CurrentPanel);
	HRESULT(STDMETHODCALLTYPE *get_DefaultPanel) (IPenInputPanel *This, PanelType *pDefaultPanel);
	HRESULT(STDMETHODCALLTYPE *put_DefaultPanel) (IPenInputPanel *This, PanelType DefaultPanel);
	HRESULT(STDMETHODCALLTYPE *get_Visible) (IPenInputPanel *This, VARIANT_BOOL *Visible);
	HRESULT(STDMETHODCALLTYPE *put_Visible) (IPenInputPanel *This, VARIANT_BOOL Visible);
	HRESULT(STDMETHODCALLTYPE *get_Top) (IPenInputPanel *This, long *Top);
	HRESULT(STDMETHODCALLTYPE *get_Left) (IPenInputPanel *This, long *Left);
	HRESULT(STDMETHODCALLTYPE *get_Width) (IPenInputPanel *This, long *Width);
	HRESULT(STDMETHODCALLTYPE *get_Height) (IPenInputPanel *This, long *Height);
	HRESULT(STDMETHODCALLTYPE *get_VerticalOffset) (IPenInputPanel *This, long *VerticalOffset);
	HRESULT(STDMETHODCALLTYPE *put_VerticalOffset) (IPenInputPanel *This, long VerticalOffset);
	HRESULT(STDMETHODCALLTYPE *get_HorizontalOffset) (IPenInputPanel *This, long *HorizontalOffset);
	HRESULT(STDMETHODCALLTYPE *put_HorizontalOffset) (IPenInputPanel *This, long HorizontalOffset);
	HRESULT(STDMETHODCALLTYPE *get_AutoShow) (IPenInputPanel *This, VARIANT_BOOL *pAutoShow);
	HRESULT(STDMETHODCALLTYPE *put_AutoShow) (IPenInputPanel *This, VARIANT_BOOL AutoShow);
	HRESULT(STDMETHODCALLTYPE *MoveTo) (IPenInputPanel *This, long Left, long Top);
	HRESULT(STDMETHODCALLTYPE *CommitPendingInput) (IPenInputPanel *This);
	HRESULT(STDMETHODCALLTYPE *Refresh) (IPenInputPanel *This);
	HRESULT(STDMETHODCALLTYPE *EnableTsf) (IPenInputPanel *This, VARIANT_BOOL Enable);
	END_INTERFACE
}  IPenInputPanelVtbl;
interface IPenInputPanel
{
	CONST_VTBL struct IPenInputPanelVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPenInputPanel_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPenInputPanel_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPenInputPanel_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPenInputPanel_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IPenInputPanel_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IPenInputPanel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IPenInputPanel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IPenInputPanel_get_Busy(This,Busy) ( (This)->lpVtbl -> get_Busy(This,Busy) )
#define IPenInputPanel_get_Factoid(This,Factoid) ( (This)->lpVtbl -> get_Factoid(This,Factoid) )
#define IPenInputPanel_put_Factoid(This,Factoid) ( (This)->lpVtbl -> put_Factoid(This,Factoid) )
#define IPenInputPanel_get_AttachedEditWindow(This,AttachedEditWindow) ( (This)->lpVtbl -> get_AttachedEditWindow(This,AttachedEditWindow) )
#define IPenInputPanel_put_AttachedEditWindow(This,AttachedEditWindow) ( (This)->lpVtbl -> put_AttachedEditWindow(This,AttachedEditWindow) )
#define IPenInputPanel_get_CurrentPanel(This,CurrentPanel) ( (This)->lpVtbl -> get_CurrentPanel(This,CurrentPanel) )
#define IPenInputPanel_put_CurrentPanel(This,CurrentPanel) ( (This)->lpVtbl -> put_CurrentPanel(This,CurrentPanel) )
#define IPenInputPanel_get_DefaultPanel(This,pDefaultPanel) ( (This)->lpVtbl -> get_DefaultPanel(This,pDefaultPanel) )
#define IPenInputPanel_put_DefaultPanel(This,DefaultPanel) ( (This)->lpVtbl -> put_DefaultPanel(This,DefaultPanel) )
#define IPenInputPanel_get_Visible(This,Visible) ( (This)->lpVtbl -> get_Visible(This,Visible) )
#define IPenInputPanel_put_Visible(This,Visible) ( (This)->lpVtbl -> put_Visible(This,Visible) )
#define IPenInputPanel_get_Top(This,Top) ( (This)->lpVtbl -> get_Top(This,Top) )
#define IPenInputPanel_get_Left(This,Left) ( (This)->lpVtbl -> get_Left(This,Left) )
#define IPenInputPanel_get_Width(This,Width) ( (This)->lpVtbl -> get_Width(This,Width) )
#define IPenInputPanel_get_Height(This,Height) ( (This)->lpVtbl -> get_Height(This,Height) )
#define IPenInputPanel_get_VerticalOffset(This,VerticalOffset) ( (This)->lpVtbl -> get_VerticalOffset(This,VerticalOffset) )
#define IPenInputPanel_put_VerticalOffset(This,VerticalOffset) ( (This)->lpVtbl -> put_VerticalOffset(This,VerticalOffset) )
#define IPenInputPanel_get_HorizontalOffset(This,HorizontalOffset) ( (This)->lpVtbl -> get_HorizontalOffset(This,HorizontalOffset) )
#define IPenInputPanel_put_HorizontalOffset(This,HorizontalOffset) ( (This)->lpVtbl -> put_HorizontalOffset(This,HorizontalOffset) )
#define IPenInputPanel_get_AutoShow(This,pAutoShow) ( (This)->lpVtbl -> get_AutoShow(This,pAutoShow) )
#define IPenInputPanel_put_AutoShow(This,AutoShow) ( (This)->lpVtbl -> put_AutoShow(This,AutoShow) )
#define IPenInputPanel_MoveTo(This,Left,Top) ( (This)->lpVtbl -> MoveTo(This,Left,Top) )
#define IPenInputPanel_CommitPendingInput(This) ( (This)->lpVtbl -> CommitPendingInput(This) )
#define IPenInputPanel_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IPenInputPanel_EnableTsf(This,Enable) ( (This)->lpVtbl -> EnableTsf(This,Enable) )
#endif
#endif
#ifndef ___IPenInputPanelEvents_DISPINTERFACE_DEFINED__
#define ___IPenInputPanelEvents_DISPINTERFACE_DEFINED__
extern const IID DIID__IPenInputPanelEvents;
typedef struct _IPenInputPanelEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (_IPenInputPanelEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (_IPenInputPanelEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (_IPenInputPanelEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (_IPenInputPanelEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (_IPenInputPanelEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (_IPenInputPanelEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (_IPenInputPanelEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	END_INTERFACE
}  _IPenInputPanelEventsVtbl;
interface _IPenInputPanelEvents
{
	CONST_VTBL struct _IPenInputPanelEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _IPenInputPanelEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _IPenInputPanelEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define _IPenInputPanelEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define _IPenInputPanelEvents_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _IPenInputPanelEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _IPenInputPanelEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _IPenInputPanelEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IHandwrittenTextInsertion_INTERFACE_DEFINED__
#define __IHandwrittenTextInsertion_INTERFACE_DEFINED__
extern const IID IID_IHandwrittenTextInsertion;
typedef struct IHandwrittenTextInsertionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IHandwrittenTextInsertion *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IHandwrittenTextInsertion *This);
	ULONG(STDMETHODCALLTYPE *Release) (IHandwrittenTextInsertion *This);
	HRESULT(STDMETHODCALLTYPE *InsertRecognitionResultsArray) (IHandwrittenTextInsertion *This, SAFEARRAY *psaAlternates, LCID locale, BOOL fAlternateContainsAutoSpacingInformation);
	HRESULT(STDMETHODCALLTYPE *InsertInkRecognitionResult) (IHandwrittenTextInsertion *This, IInkRecognitionResult *pIInkRecoResult, LCID locale, BOOL fAlternateContainsAutoSpacingInformation);
	END_INTERFACE
}  IHandwrittenTextInsertionVtbl;
interface IHandwrittenTextInsertion
{
	CONST_VTBL struct IHandwrittenTextInsertionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHandwrittenTextInsertion_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHandwrittenTextInsertion_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IHandwrittenTextInsertion_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IHandwrittenTextInsertion_InsertRecognitionResultsArray(This,psaAlternates,locale,fAlternateContainsAutoSpacingInformation) ( (This)->lpVtbl -> InsertRecognitionResultsArray(This,psaAlternates,locale,fAlternateContainsAutoSpacingInformation) )
#define IHandwrittenTextInsertion_InsertInkRecognitionResult(This,pIInkRecoResult,locale,fAlternateContainsAutoSpacingInformation) ( (This)->lpVtbl -> InsertInkRecognitionResult(This,pIInkRecoResult,locale,fAlternateContainsAutoSpacingInformation) )
#endif
#endif
extern const CLSID CLSID_HandwrittenTextInsertion;
extern const CLSID CLSID_PenInputPanel;
#ifndef __ITextInputPanelEventSink_INTERFACE_DEFINED__
#define __ITextInputPanelEventSink_INTERFACE_DEFINED__
extern const IID IID_ITextInputPanelEventSink;
typedef struct ITextInputPanelEventSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITextInputPanelEventSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITextInputPanelEventSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITextInputPanelEventSink *This);
	HRESULT(STDMETHODCALLTYPE *InPlaceStateChanging) (ITextInputPanelEventSink *This, InPlaceState oldInPlaceState, InPlaceState newInPlaceState);
	HRESULT(STDMETHODCALLTYPE *InPlaceStateChanged) (ITextInputPanelEventSink *This, InPlaceState oldInPlaceState, InPlaceState newInPlaceState);
	HRESULT(STDMETHODCALLTYPE *InPlaceSizeChanging) (ITextInputPanelEventSink *This, RECT oldBoundingRectangle, RECT newBoundingRectangle);
	HRESULT(STDMETHODCALLTYPE *InPlaceSizeChanged) (ITextInputPanelEventSink *This, RECT oldBoundingRectangle, RECT newBoundingRectangle);
	HRESULT(STDMETHODCALLTYPE *InputAreaChanging) (ITextInputPanelEventSink *This, PanelInputArea oldInputArea, PanelInputArea newInputArea);
	HRESULT(STDMETHODCALLTYPE *InputAreaChanged) (ITextInputPanelEventSink *This, PanelInputArea oldInputArea, PanelInputArea newInputArea);
	HRESULT(STDMETHODCALLTYPE *CorrectionModeChanging) (ITextInputPanelEventSink *This, CorrectionMode oldCorrectionMode, CorrectionMode newCorrectionMode);
	HRESULT(STDMETHODCALLTYPE *CorrectionModeChanged) (ITextInputPanelEventSink *This, CorrectionMode oldCorrectionMode, CorrectionMode newCorrectionMode);
	HRESULT(STDMETHODCALLTYPE *InPlaceVisibilityChanging) (ITextInputPanelEventSink *This, BOOL oldVisible, BOOL newVisible);
	HRESULT(STDMETHODCALLTYPE *InPlaceVisibilityChanged) (ITextInputPanelEventSink *This, BOOL oldVisible, BOOL newVisible);
	HRESULT(STDMETHODCALLTYPE *TextInserting) (ITextInputPanelEventSink *This, SAFEARRAY *Ink);
	HRESULT(STDMETHODCALLTYPE *TextInserted) (ITextInputPanelEventSink *This, SAFEARRAY *Ink);
	END_INTERFACE
}  ITextInputPanelEventSinkVtbl;
interface ITextInputPanelEventSink
{
	CONST_VTBL struct ITextInputPanelEventSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITextInputPanelEventSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITextInputPanelEventSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITextInputPanelEventSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITextInputPanelEventSink_InPlaceStateChanging(This,oldInPlaceState,newInPlaceState) ( (This)->lpVtbl -> InPlaceStateChanging(This,oldInPlaceState,newInPlaceState) )
#define ITextInputPanelEventSink_InPlaceStateChanged(This,oldInPlaceState,newInPlaceState) ( (This)->lpVtbl -> InPlaceStateChanged(This,oldInPlaceState,newInPlaceState) )
#define ITextInputPanelEventSink_InPlaceSizeChanging(This,oldBoundingRectangle,newBoundingRectangle) ( (This)->lpVtbl -> InPlaceSizeChanging(This,oldBoundingRectangle,newBoundingRectangle) )
#define ITextInputPanelEventSink_InPlaceSizeChanged(This,oldBoundingRectangle,newBoundingRectangle) ( (This)->lpVtbl -> InPlaceSizeChanged(This,oldBoundingRectangle,newBoundingRectangle) )
#define ITextInputPanelEventSink_InputAreaChanging(This,oldInputArea,newInputArea) ( (This)->lpVtbl -> InputAreaChanging(This,oldInputArea,newInputArea) )
#define ITextInputPanelEventSink_InputAreaChanged(This,oldInputArea,newInputArea) ( (This)->lpVtbl -> InputAreaChanged(This,oldInputArea,newInputArea) )
#define ITextInputPanelEventSink_CorrectionModeChanging(This,oldCorrectionMode,newCorrectionMode) ( (This)->lpVtbl -> CorrectionModeChanging(This,oldCorrectionMode,newCorrectionMode) )
#define ITextInputPanelEventSink_CorrectionModeChanged(This,oldCorrectionMode,newCorrectionMode) ( (This)->lpVtbl -> CorrectionModeChanged(This,oldCorrectionMode,newCorrectionMode) )
#define ITextInputPanelEventSink_InPlaceVisibilityChanging(This,oldVisible,newVisible) ( (This)->lpVtbl -> InPlaceVisibilityChanging(This,oldVisible,newVisible) )
#define ITextInputPanelEventSink_InPlaceVisibilityChanged(This,oldVisible,newVisible) ( (This)->lpVtbl -> InPlaceVisibilityChanged(This,oldVisible,newVisible) )
#define ITextInputPanelEventSink_TextInserting(This,Ink) ( (This)->lpVtbl -> TextInserting(This,Ink) )
#define ITextInputPanelEventSink_TextInserted(This,Ink) ( (This)->lpVtbl -> TextInserted(This,Ink) )
#endif
#endif
#ifndef __ITextInputPanel_INTERFACE_DEFINED__
#define __ITextInputPanel_INTERFACE_DEFINED__
extern const IID IID_ITextInputPanel;
typedef struct ITextInputPanelVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITextInputPanel *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITextInputPanel *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITextInputPanel *This);
	HRESULT(STDMETHODCALLTYPE *get_AttachedEditWindow) (ITextInputPanel *This, HWND *AttachedEditWindow);
	HRESULT(STDMETHODCALLTYPE *put_AttachedEditWindow) (ITextInputPanel *This, HWND AttachedEditWindow);
	HRESULT(STDMETHODCALLTYPE *get_CurrentInteractionMode) (ITextInputPanel *This, InteractionMode *CurrentInteractionMode);
	HRESULT(STDMETHODCALLTYPE *get_DefaultInPlaceState) (ITextInputPanel *This, InPlaceState *State);
	HRESULT(STDMETHODCALLTYPE *put_DefaultInPlaceState) (ITextInputPanel *This, InPlaceState State);
	HRESULT(STDMETHODCALLTYPE *get_CurrentInPlaceState) (ITextInputPanel *This, InPlaceState *State);
	HRESULT(STDMETHODCALLTYPE *get_DefaultInputArea) (ITextInputPanel *This, PanelInputArea *Area);
	HRESULT(STDMETHODCALLTYPE *put_DefaultInputArea) (ITextInputPanel *This, PanelInputArea Area);
	HRESULT(STDMETHODCALLTYPE *get_CurrentInputArea) (ITextInputPanel *This, PanelInputArea *Area);
	HRESULT(STDMETHODCALLTYPE *get_CurrentCorrectionMode) (ITextInputPanel *This, CorrectionMode *Mode);
	HRESULT(STDMETHODCALLTYPE *get_PreferredInPlaceDirection) (ITextInputPanel *This, InPlaceDirection *Direction);
	HRESULT(STDMETHODCALLTYPE *put_PreferredInPlaceDirection) (ITextInputPanel *This, InPlaceDirection Direction);
	HRESULT(STDMETHODCALLTYPE *get_ExpandPostInsertionCorrection) (ITextInputPanel *This, BOOL *Expand);
	HRESULT(STDMETHODCALLTYPE *put_ExpandPostInsertionCorrection) (ITextInputPanel *This, BOOL Expand);
	HRESULT(STDMETHODCALLTYPE *get_InPlaceVisibleOnFocus) (ITextInputPanel *This, BOOL *Visible);
	HRESULT(STDMETHODCALLTYPE *put_InPlaceVisibleOnFocus) (ITextInputPanel *This, BOOL Visible);
	HRESULT(STDMETHODCALLTYPE *get_InPlaceBoundingRectangle) (ITextInputPanel *This, RECT *BoundingRectangle);
	HRESULT(STDMETHODCALLTYPE *get_PopUpCorrectionHeight) (ITextInputPanel *This, int *Height);
	HRESULT(STDMETHODCALLTYPE *get_PopDownCorrectionHeight) (ITextInputPanel *This, int *Height);
	HRESULT(STDMETHODCALLTYPE *CommitPendingInput) (ITextInputPanel *This);
	HRESULT(STDMETHODCALLTYPE *SetInPlaceVisibility) (ITextInputPanel *This, BOOL Visible);
	HRESULT(STDMETHODCALLTYPE *SetInPlacePosition) (ITextInputPanel *This, int xPosition, int yPosition, CorrectionPosition position);
	HRESULT(STDMETHODCALLTYPE *SetInPlaceHoverTargetPosition) (ITextInputPanel *This, int xPosition, int yPosition);
	HRESULT(STDMETHODCALLTYPE *Advise) (ITextInputPanel *This, ITextInputPanelEventSink *EventSink, DWORD EventMask);
	HRESULT(STDMETHODCALLTYPE *Unadvise) (ITextInputPanel *This, ITextInputPanelEventSink *EventSink);
	END_INTERFACE
}  ITextInputPanelVtbl;
interface ITextInputPanel
{
	CONST_VTBL struct ITextInputPanelVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITextInputPanel_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITextInputPanel_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITextInputPanel_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITextInputPanel_get_AttachedEditWindow(This,AttachedEditWindow) ( (This)->lpVtbl -> get_AttachedEditWindow(This,AttachedEditWindow) )
#define ITextInputPanel_put_AttachedEditWindow(This,AttachedEditWindow) ( (This)->lpVtbl -> put_AttachedEditWindow(This,AttachedEditWindow) )
#define ITextInputPanel_get_CurrentInteractionMode(This,CurrentInteractionMode) ( (This)->lpVtbl -> get_CurrentInteractionMode(This,CurrentInteractionMode) )
#define ITextInputPanel_get_DefaultInPlaceState(This,State) ( (This)->lpVtbl -> get_DefaultInPlaceState(This,State) )
#define ITextInputPanel_put_DefaultInPlaceState(This,State) ( (This)->lpVtbl -> put_DefaultInPlaceState(This,State) )
#define ITextInputPanel_get_CurrentInPlaceState(This,State) ( (This)->lpVtbl -> get_CurrentInPlaceState(This,State) )
#define ITextInputPanel_get_DefaultInputArea(This,Area) ( (This)->lpVtbl -> get_DefaultInputArea(This,Area) )
#define ITextInputPanel_put_DefaultInputArea(This,Area) ( (This)->lpVtbl -> put_DefaultInputArea(This,Area) )
#define ITextInputPanel_get_CurrentInputArea(This,Area) ( (This)->lpVtbl -> get_CurrentInputArea(This,Area) )
#define ITextInputPanel_get_CurrentCorrectionMode(This,Mode) ( (This)->lpVtbl -> get_CurrentCorrectionMode(This,Mode) )
#define ITextInputPanel_get_PreferredInPlaceDirection(This,Direction) ( (This)->lpVtbl -> get_PreferredInPlaceDirection(This,Direction) )
#define ITextInputPanel_put_PreferredInPlaceDirection(This,Direction) ( (This)->lpVtbl -> put_PreferredInPlaceDirection(This,Direction) )
#define ITextInputPanel_get_ExpandPostInsertionCorrection(This,Expand) ( (This)->lpVtbl -> get_ExpandPostInsertionCorrection(This,Expand) )
#define ITextInputPanel_put_ExpandPostInsertionCorrection(This,Expand) ( (This)->lpVtbl -> put_ExpandPostInsertionCorrection(This,Expand) )
#define ITextInputPanel_get_InPlaceVisibleOnFocus(This,Visible) ( (This)->lpVtbl -> get_InPlaceVisibleOnFocus(This,Visible) )
#define ITextInputPanel_put_InPlaceVisibleOnFocus(This,Visible) ( (This)->lpVtbl -> put_InPlaceVisibleOnFocus(This,Visible) )
#define ITextInputPanel_get_InPlaceBoundingRectangle(This,BoundingRectangle) ( (This)->lpVtbl -> get_InPlaceBoundingRectangle(This,BoundingRectangle) )
#define ITextInputPanel_get_PopUpCorrectionHeight(This,Height) ( (This)->lpVtbl -> get_PopUpCorrectionHeight(This,Height) )
#define ITextInputPanel_get_PopDownCorrectionHeight(This,Height) ( (This)->lpVtbl -> get_PopDownCorrectionHeight(This,Height) )
#define ITextInputPanel_CommitPendingInput(This) ( (This)->lpVtbl -> CommitPendingInput(This) )
#define ITextInputPanel_SetInPlaceVisibility(This,Visible) ( (This)->lpVtbl -> SetInPlaceVisibility(This,Visible) )
#define ITextInputPanel_SetInPlacePosition(This,xPosition,yPosition,position) ( (This)->lpVtbl -> SetInPlacePosition(This,xPosition,yPosition,position) )
#define ITextInputPanel_SetInPlaceHoverTargetPosition(This,xPosition,yPosition) ( (This)->lpVtbl -> SetInPlaceHoverTargetPosition(This,xPosition,yPosition) )
#define ITextInputPanel_Advise(This,EventSink,EventMask) ( (This)->lpVtbl -> Advise(This,EventSink,EventMask) )
#define ITextInputPanel_Unadvise(This,EventSink) ( (This)->lpVtbl -> Unadvise(This,EventSink) )
#endif
#endif
#ifndef __IInputPanelWindowHandle_INTERFACE_DEFINED__
#define __IInputPanelWindowHandle_INTERFACE_DEFINED__
extern const IID IID_IInputPanelWindowHandle;
typedef struct IInputPanelWindowHandleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IInputPanelWindowHandle *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IInputPanelWindowHandle *This);
	ULONG(STDMETHODCALLTYPE *Release) (IInputPanelWindowHandle *This);
	HRESULT(STDMETHODCALLTYPE *get_AttachedEditWindow32) (IInputPanelWindowHandle *This, LONG32 *AttachedEditWindow);
	HRESULT(STDMETHODCALLTYPE *put_AttachedEditWindow32) (IInputPanelWindowHandle *This, LONG32 AttachedEditWindow);
	HRESULT(STDMETHODCALLTYPE *get_AttachedEditWindow64) (IInputPanelWindowHandle *This, LONG64 *AttachedEditWindow);
	HRESULT(STDMETHODCALLTYPE *put_AttachedEditWindow64) (IInputPanelWindowHandle *This, LONG64 AttachedEditWindow);
	END_INTERFACE
}  IInputPanelWindowHandleVtbl;
interface IInputPanelWindowHandle
{
	CONST_VTBL struct IInputPanelWindowHandleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInputPanelWindowHandle_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInputPanelWindowHandle_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInputPanelWindowHandle_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInputPanelWindowHandle_get_AttachedEditWindow32(This,AttachedEditWindow) ( (This)->lpVtbl -> get_AttachedEditWindow32(This,AttachedEditWindow) )
#define IInputPanelWindowHandle_put_AttachedEditWindow32(This,AttachedEditWindow) ( (This)->lpVtbl -> put_AttachedEditWindow32(This,AttachedEditWindow) )
#define IInputPanelWindowHandle_get_AttachedEditWindow64(This,AttachedEditWindow) ( (This)->lpVtbl -> get_AttachedEditWindow64(This,AttachedEditWindow) )
#define IInputPanelWindowHandle_put_AttachedEditWindow64(This,AttachedEditWindow) ( (This)->lpVtbl -> put_AttachedEditWindow64(This,AttachedEditWindow) )
#endif
#endif
#ifndef __ITextInputPanelRunInfo_INTERFACE_DEFINED__
#define __ITextInputPanelRunInfo_INTERFACE_DEFINED__
extern const IID IID_ITextInputPanelRunInfo;
typedef struct ITextInputPanelRunInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITextInputPanelRunInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITextInputPanelRunInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITextInputPanelRunInfo *This);
	HRESULT(STDMETHODCALLTYPE *IsTipRunning) (ITextInputPanelRunInfo *This, BOOL *pfRunning);
	END_INTERFACE
}  ITextInputPanelRunInfoVtbl;
interface ITextInputPanelRunInfo
{
	CONST_VTBL struct ITextInputPanelRunInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITextInputPanelRunInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITextInputPanelRunInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITextInputPanelRunInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITextInputPanelRunInfo_IsTipRunning(This,pfRunning) ( (This)->lpVtbl -> IsTipRunning(This,pfRunning) )
#endif
#endif
extern const CLSID CLSID_TextInputPanel;
extern const CLSID CLSID_PenInputPanel_Internal;
#endif
#endif
