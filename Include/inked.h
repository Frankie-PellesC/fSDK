/*+@@file@@----------------------------------------------------------------*//*!
 \file		inked.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 00:50:24 2016
 \date		Modified on Sun Jul 17 00:50:24 2016
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
#ifndef __inked_h__
#define __inked_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IInkEdit_FWD_DEFINED__
#define __IInkEdit_FWD_DEFINED__
typedef interface IInkEdit IInkEdit;
#endif
#ifndef ___IInkEditEvents_FWD_DEFINED__
#define ___IInkEditEvents_FWD_DEFINED__
typedef interface _IInkEditEvents _IInkEditEvents;
#endif
#ifndef __InkEdit_FWD_DEFINED__
#define __InkEdit_FWD_DEFINED__
typedef struct InkEdit InkEdit;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "msinkaut.h"
#define INKEDIT_CLASSW  L"INKEDIT"
#ifdef UNICODE
#define INKEDIT_CLASS   INKEDIT_CLASSW
#else
#define INKEDIT_CLASS   "INKEDIT"
#endif
struct IEC_STROKEINFO
{
	NMHDR nmhdr;
	IInkCursor *Cursor;
	IInkStrokeDisp *Stroke;
};
struct IEC_GESTUREINFO
{
	NMHDR nmhdr;
	IInkCursor *Cursor;
	IInkStrokes *Strokes;
	VARIANT Gestures;
};
struct IEC_RECOGNITIONRESULTINFO
{
	NMHDR nmhdr;
	IInkRecognitionResult *RecognitionResult;
};
#define IEC__BASE           (WM_USER + 0x0200)
#define EM_GETINKMODE       (IEC__BASE + 1)
#define EM_SETINKMODE       (IEC__BASE + 2)
#define EM_GETINKINSERTMODE (IEC__BASE + 3)
#define EM_SETINKINSERTMODE (IEC__BASE + 4)
#define EM_GETDRAWATTR      (IEC__BASE + 5)
#define EM_SETDRAWATTR      (IEC__BASE + 6)
#define EM_GETRECOTIMEOUT   (IEC__BASE + 7)
#define EM_SETRECOTIMEOUT   (IEC__BASE + 8)
#define EM_GETGESTURESTATUS (IEC__BASE + 9)
#define EM_SETGESTURESTATUS (IEC__BASE + 10)
#define EM_GETRECOGNIZER    (IEC__BASE + 11)
#define EM_SETRECOGNIZER    (IEC__BASE + 12)
#define EM_GETFACTOID       (IEC__BASE + 13)
#define EM_SETFACTOID       (IEC__BASE + 14)
#define EM_GETSELINK        (IEC__BASE + 15)
#define EM_SETSELINK        (IEC__BASE + 16)
#define EM_GETMOUSEICON     (IEC__BASE + 17)
#define EM_SETMOUSEICON     (IEC__BASE + 18)
#define EM_GETMOUSEPOINTER  (IEC__BASE + 19)
#define EM_SETMOUSEPOINTER  (IEC__BASE + 20)
#define EM_GETSTATUS        (IEC__BASE + 21)
#define EM_RECOGNIZE        (IEC__BASE + 22)
#define EM_GETUSEMOUSEFORINPUT   (IEC__BASE + 23)
#define EM_SETUSEMOUSEFORINPUT   (IEC__BASE + 24)
#define EM_SETSELINKDISPLAYMODE  (IEC__BASE + 25)
#define EM_GETSELINKDISPLAYMODE  (IEC__BASE + 26)
#define IECN__BASE             (0x0800)
#define IECN_STROKE            (IECN__BASE + 1)
#define IECN_GESTURE           (IECN__BASE + 2)
#define IECN_RECOGNITIONRESULT (IECN__BASE + 3)
extern RPC_IF_HANDLE __MIDL_itf_inked_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inked_0000_0000_v0_0_s_ifspec;
#ifndef __INKEDLib_LIBRARY_DEFINED__
#define __INKEDLib_LIBRARY_DEFINED__
typedef enum MouseButton
{
	NO_BUTTON = 0,
	LEFT_BUTTON = 0x1,
	RIGHT_BUTTON = 0x2,
	MIDDLE_BUTTON = 0x4
} MouseButton;
typedef enum SelAlignmentConstants
{
	rtfLeft = 0,
	rtfRight = 1,
	rtfCenter = 2
} SelAlignmentConstants;
typedef enum DISPID_InkEdit
{
	DISPID_Text = DISPID_VALUE,
	DISPID_TextRTF = (DISPID_Text + 1),
	DISPID_Hwnd = (DISPID_TextRTF + 1),
	DISPID_DisableNoScroll = (DISPID_Hwnd + 1),
	DISPID_Locked = (DISPID_DisableNoScroll + 1),
	DISPID_Enabled = (DISPID_Locked + 1),
	DISPID_MaxLength = (DISPID_Enabled + 1),
	DISPID_MultiLine = (DISPID_MaxLength + 1),
	DISPID_ScrollBars = (DISPID_MultiLine + 1),
	DISPID_RTSelStart = (DISPID_ScrollBars + 1),
	DISPID_RTSelLength = (DISPID_RTSelStart + 1),
	DISPID_RTSelText = (DISPID_RTSelLength + 1),
	DISPID_SelAlignment = (DISPID_RTSelText + 1),
	DISPID_SelBold = (DISPID_SelAlignment + 1),
	DISPID_SelCharOffset = (DISPID_SelBold + 1),
	DISPID_SelColor = (DISPID_SelCharOffset + 1),
	DISPID_SelFontName = (DISPID_SelColor + 1),
	DISPID_SelFontSize = (DISPID_SelFontName + 1),
	DISPID_SelItalic = (DISPID_SelFontSize + 1),
	DISPID_SelRTF = (DISPID_SelItalic + 1),
	DISPID_SelUnderline = (DISPID_SelRTF + 1),
	DISPID_DragIcon = (DISPID_SelUnderline + 1),
	DISPID_Status = (DISPID_DragIcon + 1),
	DISPID_UseMouseForInput = (DISPID_Status + 1),
	DISPID_InkMode = (DISPID_UseMouseForInput + 1),
	DISPID_InkInsertMode = (DISPID_InkMode + 1),
	DISPID_RecoTimeout = (DISPID_InkInsertMode + 1),
	DISPID_DrawAttr = (DISPID_RecoTimeout + 1),
	DISPID_Recognizer = (DISPID_DrawAttr + 1),
	DISPID_Factoid = (DISPID_Recognizer + 1),
	DISPID_SelInk = (DISPID_Factoid + 1),
	DISPID_SelInksDisplayMode = (DISPID_SelInk + 1),
	DISPID_Recognize = (DISPID_SelInksDisplayMode + 1),
	DISPID_GetGestStatus = (DISPID_Recognize + 1),
	DISPID_SetGestStatus = (DISPID_GetGestStatus + 1),
	DISPID_Refresh = (DISPID_SetGestStatus + 1)
} DISPID_InkEdit;
typedef enum DISPID_InkEditEvents
{
	DISPID_IeeChange = 1,
	DISPID_IeeSelChange = 2,
	DISPID_IeeKeyDown = 3,
	DISPID_IeeKeyUp = 4,
	DISPID_IeeMouseUp = 5,
	DISPID_IeeMouseDown = 6,
	DISPID_IeeKeyPress = 7,
	DISPID_IeeDblClick = 8,
	DISPID_IeeClick = 9,
	DISPID_IeeMouseMove = 10,
	DISPID_IeeCursorDown = 21,
	DISPID_IeeStroke = 22,
	DISPID_IeeGesture = 23,
	DISPID_IeeRecognitionResult = 24
} DISPID_InkEditEvents;
extern const IID LIBID_INKEDLib;
#ifndef __IInkEdit_INTERFACE_DEFINED__
#define __IInkEdit_INTERFACE_DEFINED__
typedef enum InkMode
{
	IEM_Disabled = 0,
	IEM_Ink = 1,
	IEM_InkAndGesture = 2
} InkMode;
typedef enum InkInsertMode
{
	IEM_InsertText = 0,
	IEM_InsertInk = 1
} InkInsertMode;
typedef enum InkEditStatus
{
	IES_Idle = 0,
	IES_Collecting = 1,
	IES_Recognizing = 2
} InkEditStatus;
typedef enum InkDisplayMode
{
	IDM_Ink = 0,
	IDM_Text = 1
} InkDisplayMode;
typedef enum AppearanceConstants
{
	rtfFlat = 0,
	rtfThreeD = 1
} AppearanceConstants;
typedef enum BorderStyleConstants
{
	rtfNoBorder = 0,
	rtfFixedSingle = 1
} BorderStyleConstants;
typedef enum ScrollBarsConstants
{
	rtfNone = 0,
	rtfHorizontal = 1,
	rtfVertical = 2,
	rtfBoth = 3
} ScrollBarsConstants;
extern const IID IID_IInkEdit;
typedef struct IInkEditVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInkEdit * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInkEdit * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInkEdit * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IInkEdit * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IInkEdit * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IInkEdit * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IInkEdit * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IInkEdit * This, InkEditStatus * pStatus);
	HRESULT(STDMETHODCALLTYPE * get_UseMouseForInput) (IInkEdit * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_UseMouseForInput) (IInkEdit * This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_InkMode) (IInkEdit * This, InkMode * pVal);
	HRESULT(STDMETHODCALLTYPE * put_InkMode) (IInkEdit * This, InkMode newVal);
	HRESULT(STDMETHODCALLTYPE * get_InkInsertMode) (IInkEdit * This, InkInsertMode * pVal);
	HRESULT(STDMETHODCALLTYPE * put_InkInsertMode) (IInkEdit * This, InkInsertMode newVal);
	HRESULT(STDMETHODCALLTYPE * get_DrawingAttributes) (IInkEdit * This, IInkDrawingAttributes ** pVal);
	HRESULT(STDMETHODCALLTYPE * putref_DrawingAttributes) (IInkEdit * This, IInkDrawingAttributes * newVal);
	HRESULT(STDMETHODCALLTYPE * get_RecognitionTimeout) (IInkEdit * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * put_RecognitionTimeout) (IInkEdit * This, long newVal);
	HRESULT(STDMETHODCALLTYPE * get_Recognizer) (IInkEdit * This, IInkRecognizer ** pVal);
	HRESULT(STDMETHODCALLTYPE * putref_Recognizer) (IInkEdit * This, IInkRecognizer * newVal);
	HRESULT(STDMETHODCALLTYPE * get_Factoid) (IInkEdit * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Factoid) (IInkEdit * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_SelInks) (IInkEdit * This, VARIANT * pSelInk);
	HRESULT(STDMETHODCALLTYPE * put_SelInks) (IInkEdit * This, VARIANT SelInk);
	HRESULT(STDMETHODCALLTYPE * get_SelInksDisplayMode) (IInkEdit * This, InkDisplayMode * pInkDisplayMode);
	HRESULT(STDMETHODCALLTYPE * put_SelInksDisplayMode) (IInkEdit * This, InkDisplayMode InkDisplayMode);
	HRESULT(STDMETHODCALLTYPE * Recognize) (IInkEdit * This);
	HRESULT(STDMETHODCALLTYPE * GetGestureStatus) (IInkEdit * This, InkApplicationGesture Gesture, VARIANT_BOOL * pListen);
	HRESULT(STDMETHODCALLTYPE * SetGestureStatus) (IInkEdit * This, InkApplicationGesture Gesture, VARIANT_BOOL Listen);
	HRESULT(STDMETHODCALLTYPE * put_BackColor) (IInkEdit * This, OLE_COLOR clr);
	HRESULT(STDMETHODCALLTYPE * get_BackColor) (IInkEdit * This, OLE_COLOR * pclr);
	HRESULT(STDMETHODCALLTYPE * get_Appearance) (IInkEdit * This, AppearanceConstants * pAppearance);
	HRESULT(STDMETHODCALLTYPE * put_Appearance) (IInkEdit * This, AppearanceConstants pAppearance);
	HRESULT(STDMETHODCALLTYPE * get_BorderStyle) (IInkEdit * This, BorderStyleConstants * pBorderStyle);
	HRESULT(STDMETHODCALLTYPE * put_BorderStyle) (IInkEdit * This, BorderStyleConstants pBorderStyle);
	HRESULT(STDMETHODCALLTYPE * get_Hwnd) (IInkEdit * This, OLE_HANDLE * pohHwnd);
	HRESULT(STDMETHODCALLTYPE * get_Font) (IInkEdit * This, IFontDisp ** ppFont);
	HRESULT(STDMETHODCALLTYPE * putref_Font) (IInkEdit * This, IFontDisp * ppFont);
	HRESULT(STDMETHODCALLTYPE * get_Text) (IInkEdit * This, BSTR * pbstrText);
	HRESULT(STDMETHODCALLTYPE * put_Text) (IInkEdit * This, BSTR pbstrText);
	HRESULT(STDMETHODCALLTYPE * get_MouseIcon) (IInkEdit * This, IPictureDisp ** MouseIcon);
	HRESULT(STDMETHODCALLTYPE * put_MouseIcon) (IInkEdit * This, IPictureDisp * MouseIcon);
	HRESULT(STDMETHODCALLTYPE * putref_MouseIcon) (IInkEdit * This, IPictureDisp * MouseIcon);
	HRESULT(STDMETHODCALLTYPE * get_MousePointer) (IInkEdit * This, InkMousePointer * MousePointer);
	HRESULT(STDMETHODCALLTYPE * put_MousePointer) (IInkEdit * This, InkMousePointer MousePointer);
	HRESULT(STDMETHODCALLTYPE * get_Locked) (IInkEdit * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Locked) (IInkEdit * This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IInkEdit * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (IInkEdit * This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_MaxLength) (IInkEdit * This, long *plMaxLength);
	HRESULT(STDMETHODCALLTYPE * put_MaxLength) (IInkEdit * This, long lMaxLength);
	HRESULT(STDMETHODCALLTYPE * get_MultiLine) (IInkEdit * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_MultiLine) (IInkEdit * This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_ScrollBars) (IInkEdit * This, ScrollBarsConstants * pVal);
	HRESULT(STDMETHODCALLTYPE * put_ScrollBars) (IInkEdit * This, ScrollBarsConstants newVal);
	HRESULT(STDMETHODCALLTYPE * get_DisableNoScroll) (IInkEdit * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_DisableNoScroll) (IInkEdit * This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_SelAlignment) (IInkEdit * This, VARIANT * pvarSelAlignment);
	HRESULT(STDMETHODCALLTYPE * put_SelAlignment) (IInkEdit * This, VARIANT pvarSelAlignment);
	HRESULT(STDMETHODCALLTYPE * get_SelBold) (IInkEdit * This, VARIANT * pvarSelBold);
	HRESULT(STDMETHODCALLTYPE * put_SelBold) (IInkEdit * This, VARIANT pvarSelBold);
	HRESULT(STDMETHODCALLTYPE * get_SelItalic) (IInkEdit * This, VARIANT * pvarSelItalic);
	HRESULT(STDMETHODCALLTYPE * put_SelItalic) (IInkEdit * This, VARIANT pvarSelItalic);
	HRESULT(STDMETHODCALLTYPE * get_SelUnderline) (IInkEdit * This, VARIANT * pvarSelUnderline);
	HRESULT(STDMETHODCALLTYPE * put_SelUnderline) (IInkEdit * This, VARIANT pvarSelUnderline);
	HRESULT(STDMETHODCALLTYPE * get_SelColor) (IInkEdit * This, VARIANT * pvarSelColor);
	HRESULT(STDMETHODCALLTYPE * put_SelColor) (IInkEdit * This, VARIANT pvarSelColor);
	HRESULT(STDMETHODCALLTYPE * get_SelFontName) (IInkEdit * This, VARIANT * pvarSelFontName);
	HRESULT(STDMETHODCALLTYPE * put_SelFontName) (IInkEdit * This, VARIANT pvarSelFontName);
	HRESULT(STDMETHODCALLTYPE * get_SelFontSize) (IInkEdit * This, VARIANT * pvarSelFontSize);
	HRESULT(STDMETHODCALLTYPE * put_SelFontSize) (IInkEdit * This, VARIANT pvarSelFontSize);
	HRESULT(STDMETHODCALLTYPE * get_SelCharOffset) (IInkEdit * This, VARIANT * pvarSelCharOffset);
	HRESULT(STDMETHODCALLTYPE * put_SelCharOffset) (IInkEdit * This, VARIANT pvarSelCharOffset);
	HRESULT(STDMETHODCALLTYPE * get_TextRTF) (IInkEdit * This, BSTR * pbstrTextRTF);
	HRESULT(STDMETHODCALLTYPE * put_TextRTF) (IInkEdit * This, BSTR pbstrTextRTF);
	HRESULT(STDMETHODCALLTYPE * get_SelStart) (IInkEdit * This, long *plSelStart);
	HRESULT(STDMETHODCALLTYPE * put_SelStart) (IInkEdit * This, long plSelStart);
	HRESULT(STDMETHODCALLTYPE * get_SelLength) (IInkEdit * This, long *plSelLength);
	HRESULT(STDMETHODCALLTYPE * put_SelLength) (IInkEdit * This, long plSelLength);
	HRESULT(STDMETHODCALLTYPE * get_SelText) (IInkEdit * This, BSTR * pbstrSelText);
	HRESULT(STDMETHODCALLTYPE * put_SelText) (IInkEdit * This, BSTR pbstrSelText);
	HRESULT(STDMETHODCALLTYPE * get_SelRTF) (IInkEdit * This, BSTR * pbstrSelRTF);
	HRESULT(STDMETHODCALLTYPE * put_SelRTF) (IInkEdit * This, BSTR pbstrSelRTF);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IInkEdit * This);
	END_INTERFACE
}  IInkEditVtbl;
interface IInkEdit
{
	CONST_VTBL struct IInkEditVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkEdit_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInkEdit_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInkEdit_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInkEdit_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IInkEdit_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IInkEdit_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IInkEdit_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IInkEdit_get_Status(This,pStatus)( (This)->lpVtbl -> get_Status(This,pStatus) )
#define IInkEdit_get_UseMouseForInput(This,pVal)( (This)->lpVtbl -> get_UseMouseForInput(This,pVal) )
#define IInkEdit_put_UseMouseForInput(This,newVal)( (This)->lpVtbl -> put_UseMouseForInput(This,newVal) )
#define IInkEdit_get_InkMode(This,pVal)( (This)->lpVtbl -> get_InkMode(This,pVal) )
#define IInkEdit_put_InkMode(This,newVal)( (This)->lpVtbl -> put_InkMode(This,newVal) )
#define IInkEdit_get_InkInsertMode(This,pVal)( (This)->lpVtbl -> get_InkInsertMode(This,pVal) )
#define IInkEdit_put_InkInsertMode(This,newVal)( (This)->lpVtbl -> put_InkInsertMode(This,newVal) )
#define IInkEdit_get_DrawingAttributes(This,pVal)( (This)->lpVtbl -> get_DrawingAttributes(This,pVal) )
#define IInkEdit_putref_DrawingAttributes(This,newVal)( (This)->lpVtbl -> putref_DrawingAttributes(This,newVal) )
#define IInkEdit_get_RecognitionTimeout(This,pVal)( (This)->lpVtbl -> get_RecognitionTimeout(This,pVal) )
#define IInkEdit_put_RecognitionTimeout(This,newVal)( (This)->lpVtbl -> put_RecognitionTimeout(This,newVal) )
#define IInkEdit_get_Recognizer(This,pVal)( (This)->lpVtbl -> get_Recognizer(This,pVal) )
#define IInkEdit_putref_Recognizer(This,newVal)( (This)->lpVtbl -> putref_Recognizer(This,newVal) )
#define IInkEdit_get_Factoid(This,pVal)( (This)->lpVtbl -> get_Factoid(This,pVal) )
#define IInkEdit_put_Factoid(This,newVal)( (This)->lpVtbl -> put_Factoid(This,newVal) )
#define IInkEdit_get_SelInks(This,pSelInk)( (This)->lpVtbl -> get_SelInks(This,pSelInk) )
#define IInkEdit_put_SelInks(This,SelInk)( (This)->lpVtbl -> put_SelInks(This,SelInk) )
#define IInkEdit_get_SelInksDisplayMode(This,pInkDisplayMode)( (This)->lpVtbl -> get_SelInksDisplayMode(This,pInkDisplayMode) )
#define IInkEdit_put_SelInksDisplayMode(This,InkDisplayMode)( (This)->lpVtbl -> put_SelInksDisplayMode(This,InkDisplayMode) )
#define IInkEdit_Recognize(This)( (This)->lpVtbl -> Recognize(This) )
#define IInkEdit_GetGestureStatus(This,Gesture,pListen)( (This)->lpVtbl -> GetGestureStatus(This,Gesture,pListen) )
#define IInkEdit_SetGestureStatus(This,Gesture,Listen)( (This)->lpVtbl -> SetGestureStatus(This,Gesture,Listen) )
#define IInkEdit_put_BackColor(This,clr)( (This)->lpVtbl -> put_BackColor(This,clr) )
#define IInkEdit_get_BackColor(This,pclr)( (This)->lpVtbl -> get_BackColor(This,pclr) )
#define IInkEdit_get_Appearance(This,pAppearance)( (This)->lpVtbl -> get_Appearance(This,pAppearance) )
#define IInkEdit_put_Appearance(This,pAppearance)( (This)->lpVtbl -> put_Appearance(This,pAppearance) )
#define IInkEdit_get_BorderStyle(This,pBorderStyle)( (This)->lpVtbl -> get_BorderStyle(This,pBorderStyle) )
#define IInkEdit_put_BorderStyle(This,pBorderStyle)( (This)->lpVtbl -> put_BorderStyle(This,pBorderStyle) )
#define IInkEdit_get_Hwnd(This,pohHwnd)( (This)->lpVtbl -> get_Hwnd(This,pohHwnd) )
#define IInkEdit_get_Font(This,ppFont)( (This)->lpVtbl -> get_Font(This,ppFont) )
#define IInkEdit_putref_Font(This,ppFont)( (This)->lpVtbl -> putref_Font(This,ppFont) )
#define IInkEdit_get_Text(This,pbstrText)( (This)->lpVtbl -> get_Text(This,pbstrText) )
#define IInkEdit_put_Text(This,pbstrText)( (This)->lpVtbl -> put_Text(This,pbstrText) )
#define IInkEdit_get_MouseIcon(This,MouseIcon)( (This)->lpVtbl -> get_MouseIcon(This,MouseIcon) )
#define IInkEdit_put_MouseIcon(This,MouseIcon)( (This)->lpVtbl -> put_MouseIcon(This,MouseIcon) )
#define IInkEdit_putref_MouseIcon(This,MouseIcon)( (This)->lpVtbl -> putref_MouseIcon(This,MouseIcon) )
#define IInkEdit_get_MousePointer(This,MousePointer)( (This)->lpVtbl -> get_MousePointer(This,MousePointer) )
#define IInkEdit_put_MousePointer(This,MousePointer)( (This)->lpVtbl -> put_MousePointer(This,MousePointer) )
#define IInkEdit_get_Locked(This,pVal)( (This)->lpVtbl -> get_Locked(This,pVal) )
#define IInkEdit_put_Locked(This,newVal)( (This)->lpVtbl -> put_Locked(This,newVal) )
#define IInkEdit_get_Enabled(This,pVal)( (This)->lpVtbl -> get_Enabled(This,pVal) )
#define IInkEdit_put_Enabled(This,newVal)( (This)->lpVtbl -> put_Enabled(This,newVal) )
#define IInkEdit_get_MaxLength(This,plMaxLength)( (This)->lpVtbl -> get_MaxLength(This,plMaxLength) )
#define IInkEdit_put_MaxLength(This,lMaxLength)( (This)->lpVtbl -> put_MaxLength(This,lMaxLength) )
#define IInkEdit_get_MultiLine(This,pVal)( (This)->lpVtbl -> get_MultiLine(This,pVal) )
#define IInkEdit_put_MultiLine(This,newVal)( (This)->lpVtbl -> put_MultiLine(This,newVal) )
#define IInkEdit_get_ScrollBars(This,pVal)( (This)->lpVtbl -> get_ScrollBars(This,pVal) )
#define IInkEdit_put_ScrollBars(This,newVal)( (This)->lpVtbl -> put_ScrollBars(This,newVal) )
#define IInkEdit_get_DisableNoScroll(This,pVal)( (This)->lpVtbl -> get_DisableNoScroll(This,pVal) )
#define IInkEdit_put_DisableNoScroll(This,newVal)( (This)->lpVtbl -> put_DisableNoScroll(This,newVal) )
#define IInkEdit_get_SelAlignment(This,pvarSelAlignment)( (This)->lpVtbl -> get_SelAlignment(This,pvarSelAlignment) )
#define IInkEdit_put_SelAlignment(This,pvarSelAlignment)( (This)->lpVtbl -> put_SelAlignment(This,pvarSelAlignment) )
#define IInkEdit_get_SelBold(This,pvarSelBold)( (This)->lpVtbl -> get_SelBold(This,pvarSelBold) )
#define IInkEdit_put_SelBold(This,pvarSelBold)( (This)->lpVtbl -> put_SelBold(This,pvarSelBold) )
#define IInkEdit_get_SelItalic(This,pvarSelItalic)( (This)->lpVtbl -> get_SelItalic(This,pvarSelItalic) )
#define IInkEdit_put_SelItalic(This,pvarSelItalic)( (This)->lpVtbl -> put_SelItalic(This,pvarSelItalic) )
#define IInkEdit_get_SelUnderline(This,pvarSelUnderline)( (This)->lpVtbl -> get_SelUnderline(This,pvarSelUnderline) )
#define IInkEdit_put_SelUnderline(This,pvarSelUnderline)( (This)->lpVtbl -> put_SelUnderline(This,pvarSelUnderline) )
#define IInkEdit_get_SelColor(This,pvarSelColor)( (This)->lpVtbl -> get_SelColor(This,pvarSelColor) )
#define IInkEdit_put_SelColor(This,pvarSelColor)( (This)->lpVtbl -> put_SelColor(This,pvarSelColor) )
#define IInkEdit_get_SelFontName(This,pvarSelFontName)( (This)->lpVtbl -> get_SelFontName(This,pvarSelFontName) )
#define IInkEdit_put_SelFontName(This,pvarSelFontName)( (This)->lpVtbl -> put_SelFontName(This,pvarSelFontName) )
#define IInkEdit_get_SelFontSize(This,pvarSelFontSize)( (This)->lpVtbl -> get_SelFontSize(This,pvarSelFontSize) )
#define IInkEdit_put_SelFontSize(This,pvarSelFontSize)( (This)->lpVtbl -> put_SelFontSize(This,pvarSelFontSize) )
#define IInkEdit_get_SelCharOffset(This,pvarSelCharOffset)( (This)->lpVtbl -> get_SelCharOffset(This,pvarSelCharOffset) )
#define IInkEdit_put_SelCharOffset(This,pvarSelCharOffset)( (This)->lpVtbl -> put_SelCharOffset(This,pvarSelCharOffset) )
#define IInkEdit_get_TextRTF(This,pbstrTextRTF)( (This)->lpVtbl -> get_TextRTF(This,pbstrTextRTF) )
#define IInkEdit_put_TextRTF(This,pbstrTextRTF)( (This)->lpVtbl -> put_TextRTF(This,pbstrTextRTF) )
#define IInkEdit_get_SelStart(This,plSelStart)( (This)->lpVtbl -> get_SelStart(This,plSelStart) )
#define IInkEdit_put_SelStart(This,plSelStart)( (This)->lpVtbl -> put_SelStart(This,plSelStart) )
#define IInkEdit_get_SelLength(This,plSelLength)( (This)->lpVtbl -> get_SelLength(This,plSelLength) )
#define IInkEdit_put_SelLength(This,plSelLength)( (This)->lpVtbl -> put_SelLength(This,plSelLength) )
#define IInkEdit_get_SelText(This,pbstrSelText)( (This)->lpVtbl -> get_SelText(This,pbstrSelText) )
#define IInkEdit_put_SelText(This,pbstrSelText)( (This)->lpVtbl -> put_SelText(This,pbstrSelText) )
#define IInkEdit_get_SelRTF(This,pbstrSelRTF)( (This)->lpVtbl -> get_SelRTF(This,pbstrSelRTF) )
#define IInkEdit_put_SelRTF(This,pbstrSelRTF)( (This)->lpVtbl -> put_SelRTF(This,pbstrSelRTF) )
#define IInkEdit_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#endif
#endif
#ifndef ___IInkEditEvents_DISPINTERFACE_DEFINED__
#define ___IInkEditEvents_DISPINTERFACE_DEFINED__
extern const IID DIID__IInkEditEvents;
typedef struct _IInkEditEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_IInkEditEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_IInkEditEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (_IInkEditEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_IInkEditEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_IInkEditEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_IInkEditEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_IInkEditEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  _IInkEditEventsVtbl;
interface _IInkEditEvents
{
	CONST_VTBL struct _IInkEditEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _IInkEditEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _IInkEditEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define _IInkEditEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define _IInkEditEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _IInkEditEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _IInkEditEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _IInkEditEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_InkEdit;
#endif
#endif
