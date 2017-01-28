/*+@@file@@----------------------------------------------------------------*//*!
 \file		UIAutomationCore.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 13:26:12 2016
 \date		Modified on Sat Sep 17 13:26:12 2016
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
#ifndef __uiautomationcore_h__
#define __uiautomationcore_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IRawElementProviderSimple_FWD_DEFINED__
#define __IRawElementProviderSimple_FWD_DEFINED__
typedef interface IRawElementProviderSimple IRawElementProviderSimple;
#endif
#ifndef __IAccessibleEx_FWD_DEFINED__
#define __IAccessibleEx_FWD_DEFINED__
typedef interface IAccessibleEx IAccessibleEx;
#endif
#ifndef __IRawElementProviderFragmentRoot_FWD_DEFINED__
#define __IRawElementProviderFragmentRoot_FWD_DEFINED__
typedef interface IRawElementProviderFragmentRoot IRawElementProviderFragmentRoot;
#endif
#ifndef __IRawElementProviderFragment_FWD_DEFINED__
#define __IRawElementProviderFragment_FWD_DEFINED__
typedef interface IRawElementProviderFragment IRawElementProviderFragment;
#endif
#ifndef __IRawElementProviderAdviseEvents_FWD_DEFINED__
#define __IRawElementProviderAdviseEvents_FWD_DEFINED__
typedef interface IRawElementProviderAdviseEvents IRawElementProviderAdviseEvents;
#endif
#ifndef __IRawElementProviderHwndOverride_FWD_DEFINED__
#define __IRawElementProviderHwndOverride_FWD_DEFINED__
typedef interface IRawElementProviderHwndOverride IRawElementProviderHwndOverride;
#endif
#ifndef __IProxyProviderWinEventSink_FWD_DEFINED__
#define __IProxyProviderWinEventSink_FWD_DEFINED__
typedef interface IProxyProviderWinEventSink IProxyProviderWinEventSink;
#endif
#ifndef __IProxyProviderWinEventHandler_FWD_DEFINED__
#define __IProxyProviderWinEventHandler_FWD_DEFINED__
typedef interface IProxyProviderWinEventHandler IProxyProviderWinEventHandler;
#endif
#ifndef __IDockProvider_FWD_DEFINED__
#define __IDockProvider_FWD_DEFINED__
typedef interface IDockProvider IDockProvider;
#endif
#ifndef __IExpandCollapseProvider_FWD_DEFINED__
#define __IExpandCollapseProvider_FWD_DEFINED__
typedef interface IExpandCollapseProvider IExpandCollapseProvider;
#endif
#ifndef __IGridProvider_FWD_DEFINED__
#define __IGridProvider_FWD_DEFINED__
typedef interface IGridProvider IGridProvider;
#endif
#ifndef __IGridItemProvider_FWD_DEFINED__
#define __IGridItemProvider_FWD_DEFINED__
typedef interface IGridItemProvider IGridItemProvider;
#endif
#ifndef __IInvokeProvider_FWD_DEFINED__
#define __IInvokeProvider_FWD_DEFINED__
typedef interface IInvokeProvider IInvokeProvider;
#endif
#ifndef __IMultipleViewProvider_FWD_DEFINED__
#define __IMultipleViewProvider_FWD_DEFINED__
typedef interface IMultipleViewProvider IMultipleViewProvider;
#endif
#ifndef __IRangeValueProvider_FWD_DEFINED__
#define __IRangeValueProvider_FWD_DEFINED__
typedef interface IRangeValueProvider IRangeValueProvider;
#endif
#ifndef __IScrollItemProvider_FWD_DEFINED__
#define __IScrollItemProvider_FWD_DEFINED__
typedef interface IScrollItemProvider IScrollItemProvider;
#endif
#ifndef __ISelectionProvider_FWD_DEFINED__
#define __ISelectionProvider_FWD_DEFINED__
typedef interface ISelectionProvider ISelectionProvider;
#endif
#ifndef __IScrollProvider_FWD_DEFINED__
#define __IScrollProvider_FWD_DEFINED__
typedef interface IScrollProvider IScrollProvider;
#endif
#ifndef __ISelectionItemProvider_FWD_DEFINED__
#define __ISelectionItemProvider_FWD_DEFINED__
typedef interface ISelectionItemProvider ISelectionItemProvider;
#endif
#ifndef __ISynchronizedInputProvider_FWD_DEFINED__
#define __ISynchronizedInputProvider_FWD_DEFINED__
typedef interface ISynchronizedInputProvider ISynchronizedInputProvider;
#endif
#ifndef __ITableProvider_FWD_DEFINED__
#define __ITableProvider_FWD_DEFINED__
typedef interface ITableProvider ITableProvider;
#endif
#ifndef __ITableItemProvider_FWD_DEFINED__
#define __ITableItemProvider_FWD_DEFINED__
typedef interface ITableItemProvider ITableItemProvider;
#endif
#ifndef __IToggleProvider_FWD_DEFINED__
#define __IToggleProvider_FWD_DEFINED__
typedef interface IToggleProvider IToggleProvider;
#endif
#ifndef __ITransformProvider_FWD_DEFINED__
#define __ITransformProvider_FWD_DEFINED__
typedef interface ITransformProvider ITransformProvider;
#endif
#ifndef __IValueProvider_FWD_DEFINED__
#define __IValueProvider_FWD_DEFINED__
typedef interface IValueProvider IValueProvider;
#endif
#ifndef __IWindowProvider_FWD_DEFINED__
#define __IWindowProvider_FWD_DEFINED__
typedef interface IWindowProvider IWindowProvider;
#endif
#ifndef __ILegacyIAccessibleProvider_FWD_DEFINED__
#define __ILegacyIAccessibleProvider_FWD_DEFINED__
typedef interface ILegacyIAccessibleProvider ILegacyIAccessibleProvider;
#endif
#ifndef __IItemContainerProvider_FWD_DEFINED__
#define __IItemContainerProvider_FWD_DEFINED__
typedef interface IItemContainerProvider IItemContainerProvider;
#endif
#ifndef __IVirtualizedItemProvider_FWD_DEFINED__
#define __IVirtualizedItemProvider_FWD_DEFINED__
typedef interface IVirtualizedItemProvider IVirtualizedItemProvider;
#endif
#ifndef __ITextRangeProvider_FWD_DEFINED__
#define __ITextRangeProvider_FWD_DEFINED__
typedef interface ITextRangeProvider ITextRangeProvider;
#endif
#ifndef __ITextProvider_FWD_DEFINED__
#define __ITextProvider_FWD_DEFINED__
typedef interface ITextProvider ITextProvider;
#endif
#ifndef __IUIAutomationPatternInstance_FWD_DEFINED__
#define __IUIAutomationPatternInstance_FWD_DEFINED__
typedef interface IUIAutomationPatternInstance IUIAutomationPatternInstance;
#endif
#ifndef __IUIAutomationPatternHandler_FWD_DEFINED__
#define __IUIAutomationPatternHandler_FWD_DEFINED__
typedef interface IUIAutomationPatternHandler IUIAutomationPatternHandler;
#endif
#ifndef __IUIAutomationRegistrar_FWD_DEFINED__
#define __IUIAutomationRegistrar_FWD_DEFINED__
typedef interface IUIAutomationRegistrar IUIAutomationRegistrar;
#endif
#ifndef __CUIAutomationRegistrar_FWD_DEFINED__
#define __CUIAutomationRegistrar_FWD_DEFINED__
typedef struct CUIAutomationRegistrar CUIAutomationRegistrar;
#endif
#include <oaidl.h>
#include <oleacc.h>
typedef enum NavigateDirection
{
	NavigateDirection_Parent = 0,
	NavigateDirection_NextSibling = 1,
	NavigateDirection_PreviousSibling = 2,
	NavigateDirection_FirstChild = 3,
	NavigateDirection_LastChild = 4
} NavigateDirection;
typedef enum ProviderOptions
{
	ProviderOptions_ClientSideProvider = 0x1,
	ProviderOptions_ServerSideProvider = 0x2,
	ProviderOptions_NonClientAreaProvider = 0x4,
	ProviderOptions_OverrideProvider = 0x8,
	ProviderOptions_ProviderOwnsSetFocus = 0x10,
	ProviderOptions_UseComThreading = 0x20
} ProviderOptions;
DEFINE_ENUM_FLAG_OPERATORS(ProviderOptions)
typedef enum StructureChangeType
{
	StructureChangeType_ChildAdded = 0,
	StructureChangeType_ChildRemoved = (StructureChangeType_ChildAdded + 1),
	StructureChangeType_ChildrenInvalidated = (StructureChangeType_ChildRemoved + 1),
	StructureChangeType_ChildrenBulkAdded = (StructureChangeType_ChildrenInvalidated + 1),
	StructureChangeType_ChildrenBulkRemoved = (StructureChangeType_ChildrenBulkAdded + 1),
	StructureChangeType_ChildrenReordered = (StructureChangeType_ChildrenBulkRemoved + 1)
} StructureChangeType;
typedef enum OrientationType
{
	OrientationType_None = 0,
	OrientationType_Horizontal = 1,
	OrientationType_Vertical = 2
} OrientationType;
typedef enum DockPosition
{
	DockPosition_Top = 0,
	DockPosition_Left = 1,
	DockPosition_Bottom = 2,
	DockPosition_Right = 3,
	DockPosition_Fill = 4,
	DockPosition_None = 5
} DockPosition;
typedef enum ExpandCollapseState
{
	ExpandCollapseState_Collapsed = 0,
	ExpandCollapseState_Expanded = 1,
	ExpandCollapseState_PartiallyExpanded = 2,
	ExpandCollapseState_LeafNode = 3
} ExpandCollapseState;
typedef enum ScrollAmount
{
	ScrollAmount_LargeDecrement = 0,
	ScrollAmount_SmallDecrement = 1,
	ScrollAmount_NoAmount = 2,
	ScrollAmount_LargeIncrement = 3,
	ScrollAmount_SmallIncrement = 4
} ScrollAmount;
typedef enum RowOrColumnMajor
{
	RowOrColumnMajor_RowMajor = 0,
	RowOrColumnMajor_ColumnMajor = 1,
	RowOrColumnMajor_Indeterminate = 2
} RowOrColumnMajor;
typedef enum ToggleState
{
	ToggleState_Off = 0,
	ToggleState_On = 1,
	ToggleState_Indeterminate = 2
} ToggleState;
typedef enum WindowVisualState
{
	WindowVisualState_Normal = 0,
	WindowVisualState_Maximized = 1,
	WindowVisualState_Minimized = 2
} WindowVisualState;
typedef enum SynchronizedInputType
{
	SynchronizedInputType_KeyUp = 0x1,
	SynchronizedInputType_KeyDown = 0x2,
	SynchronizedInputType_LeftMouseUp = 0x4,
	SynchronizedInputType_LeftMouseDown = 0x8,
	SynchronizedInputType_RightMouseUp = 0x10,
	SynchronizedInputType_RightMouseDown = 0x20
} SynchronizedInputType;
DEFINE_ENUM_FLAG_OPERATORS(SynchronizedInputType)
typedef enum WindowInteractionState
{
	WindowInteractionState_Running = 0,
	WindowInteractionState_Closing = 1,
	WindowInteractionState_ReadyForUserInteraction = 2,
	WindowInteractionState_BlockedByModalWindow = 3,
	WindowInteractionState_NotResponding = 4
} WindowInteractionState;
typedef enum TextUnit
{
	TextUnit_Character = 0,
	TextUnit_Format = 1,
	TextUnit_Word = 2,
	TextUnit_Line = 3,
	TextUnit_Paragraph = 4,
	TextUnit_Page = 5,
	TextUnit_Document = 6
} TextUnit;
typedef enum TextPatternRangeEndpoint
{
	TextPatternRangeEndpoint_Start = 0,
	TextPatternRangeEndpoint_End = 1
} TextPatternRangeEndpoint;
typedef enum SupportedTextSelection
{
	SupportedTextSelection_None = 0,
	SupportedTextSelection_Single = 1,
	SupportedTextSelection_Multiple = 2
} SupportedTextSelection;
typedef enum AnimationStyle
{
	AnimationStyle_None = 0,
	AnimationStyle_LasVegasLights = 1,
	AnimationStyle_BlinkingBackground = 2,
	AnimationStyle_SparkleText = 3,
	AnimationStyle_MarchingBlackAnts = 4,
	AnimationStyle_MarchingRedAnts = 5,
	AnimationStyle_Shimmer = 6,
	AnimationStyle_Other = -1
} AnimationStyle;
typedef enum BulletStyle
{
	BulletStyle_None = 0,
	BulletStyle_HollowRoundBullet = 1,
	BulletStyle_FilledRoundBullet = 2,
	BulletStyle_HollowSquareBullet = 3,
	BulletStyle_FilledSquareBullet = 4,
	BulletStyle_DashBullet = 5,
	BulletStyle_Other = -1
} BulletStyle;
typedef enum CapStyle
{
	CapStyle_None = 0,
	CapStyle_SmallCap = 1,
	CapStyle_AllCap = 2,
	CapStyle_AllPetiteCaps = 3,
	CapStyle_PetiteCaps = 4,
	CapStyle_Unicase = 5,
	CapStyle_Titling = 6,
	CapStyle_Other = -1
} CapStyle;
typedef enum FlowDirections
{
	FlowDirections_Default = 0,
	FlowDirections_RightToLeft = 1,
	FlowDirections_BottomToTop = 2,
	FlowDirections_Vertical = 4
} FlowDirections;
typedef enum HorizontalTextAlignment
{
	HorizontalTextAlignment_Left = 0,
	HorizontalTextAlignment_Centered = 1,
	HorizontalTextAlignment_Right = 2,
	HorizontalTextAlignment_Justified = 3
} HorizontalTextAlignment;
typedef enum OutlineStyles
{
	OutlineStyles_None = 0,
	OutlineStyles_Outline = 1,
	OutlineStyles_Shadow = 2,
	OutlineStyles_Engraved = 4,
	OutlineStyles_Embossed = 8
} OutlineStyles;
typedef enum TextDecorationLineStyle
{
	TextDecorationLineStyle_None = 0,
	TextDecorationLineStyle_Single = 1,
	TextDecorationLineStyle_WordsOnly = 2,
	TextDecorationLineStyle_Double = 3,
	TextDecorationLineStyle_Dot = 4,
	TextDecorationLineStyle_Dash = 5,
	TextDecorationLineStyle_DashDot = 6,
	TextDecorationLineStyle_DashDotDot = 7,
	TextDecorationLineStyle_Wavy = 8,
	TextDecorationLineStyle_ThickSingle = 9,
	TextDecorationLineStyle_DoubleWavy = 11,
	TextDecorationLineStyle_ThickWavy = 12,
	TextDecorationLineStyle_LongDash = 13,
	TextDecorationLineStyle_ThickDash = 14,
	TextDecorationLineStyle_ThickDashDot = 15,
	TextDecorationLineStyle_ThickDashDotDot = 16,
	TextDecorationLineStyle_ThickDot = 17,
	TextDecorationLineStyle_ThickLongDash = 18,
	TextDecorationLineStyle_Other = -1
} TextDecorationLineStyle;
typedef int PROPERTYID;
typedef int PATTERNID;
typedef int EVENTID;
typedef int TEXTATTRIBUTEID;
typedef int CONTROLTYPEID;
typedef struct UiaRect
{
	double left;
	double top;
	double width;
	double height;
} UiaRect;
typedef struct UiaPoint
{
	double x;
	double y;
} UiaPoint;
extern RPC_IF_HANDLE __MIDL_itf_uiautomationcore_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_uiautomationcore_0000_0000_v0_0_s_ifspec;
#ifndef __UIA_LIBRARY_DEFINED__
#define __UIA_LIBRARY_DEFINED__
typedef enum UIAutomationType
{
	UIAutomationType_Int = 0x1,
	UIAutomationType_Bool = 0x2,
	UIAutomationType_String = 0x3,
	UIAutomationType_Double = 0x4,
	UIAutomationType_Point = 0x5,
	UIAutomationType_Rect = 0x6,
	UIAutomationType_Element = 0x7,
	UIAutomationType_Array = 0x10000,
	UIAutomationType_Out = 0x20000,
	UIAutomationType_IntArray = (UIAutomationType_Int | UIAutomationType_Array),
	UIAutomationType_BoolArray = (UIAutomationType_Bool | UIAutomationType_Array),
	UIAutomationType_StringArray = (UIAutomationType_String | UIAutomationType_Array),
	UIAutomationType_DoubleArray = (UIAutomationType_Double | UIAutomationType_Array),
	UIAutomationType_PointArray = (UIAutomationType_Point | UIAutomationType_Array),
	UIAutomationType_RectArray = (UIAutomationType_Rect | UIAutomationType_Array),
	UIAutomationType_ElementArray = (UIAutomationType_Element | UIAutomationType_Array),
	UIAutomationType_OutInt = (UIAutomationType_Int | UIAutomationType_Out),
	UIAutomationType_OutBool = (UIAutomationType_Bool | UIAutomationType_Out),
	UIAutomationType_OutString = (UIAutomationType_String | UIAutomationType_Out),
	UIAutomationType_OutDouble = (UIAutomationType_Double | UIAutomationType_Out),
	UIAutomationType_OutPoint = (UIAutomationType_Point | UIAutomationType_Out),
	UIAutomationType_OutRect = (UIAutomationType_Rect | UIAutomationType_Out),
	UIAutomationType_OutElement = (UIAutomationType_Element | UIAutomationType_Out),
	UIAutomationType_OutIntArray = ((UIAutomationType_Int | UIAutomationType_Array) | UIAutomationType_Out),
	UIAutomationType_OutBoolArray = ((UIAutomationType_Bool | UIAutomationType_Array) | UIAutomationType_Out),
	UIAutomationType_OutStringArray = ((UIAutomationType_String | UIAutomationType_Array) | UIAutomationType_Out),
	UIAutomationType_OutDoubleArray = ((UIAutomationType_Double | UIAutomationType_Array) | UIAutomationType_Out),
	UIAutomationType_OutPointArray = ((UIAutomationType_Point | UIAutomationType_Array) | UIAutomationType_Out),
	UIAutomationType_OutRectArray = ((UIAutomationType_Rect | UIAutomationType_Array) | UIAutomationType_Out),
	UIAutomationType_OutElementArray = ((UIAutomationType_Element | UIAutomationType_Array) | UIAutomationType_Out)
} UIAutomationType;
DEFINE_ENUM_FLAG_OPERATORS(UIAutomationType)
typedef struct UIAutomationParameter
{
	enum UIAutomationType type;
	void *pData;
} UIAutomationParameter;
typedef struct UIAutomationPropertyInfo
{
	GUID guid;
	LPCWSTR pProgrammaticName;
	enum UIAutomationType type;
} UIAutomationPropertyInfo;
typedef struct UIAutomationEventInfo
{
	GUID guid;
	LPCWSTR pProgrammaticName;
} UIAutomationEventInfo;
typedef struct UIAutomationMethodInfo
{
	LPCWSTR pProgrammaticName;
	BOOL doSetFocus;
	UINT cInParameters;
	UINT cOutParameters;
	enum UIAutomationType *pParameterTypes;
	LPCWSTR *pParameterNames;
} UIAutomationMethodInfo;
typedef struct UIAutomationPatternInfo
{
	GUID guid;
	LPCWSTR pProgrammaticName;
	GUID providerInterfaceId;
	GUID clientInterfaceId;
	UINT cProperties;
	struct UIAutomationPropertyInfo *pProperties;
	UINT cMethods;
	struct UIAutomationMethodInfo *pMethods;
	UINT cEvents;
	struct UIAutomationEventInfo *pEvents;
	IUIAutomationPatternHandler *pPatternHandler;
} UIAutomationPatternInfo;
extern const IID LIBID_UIA;
#ifndef __UIA_OtherConstants_MODULE_DEFINED__
#define __UIA_OtherConstants_MODULE_DEFINED__
const double UIA_ScrollPatternNoScroll = -1;
#endif
#ifndef __IRawElementProviderSimple_INTERFACE_DEFINED__
#define __IRawElementProviderSimple_INTERFACE_DEFINED__
extern const IID IID_IRawElementProviderSimple;
typedef struct IRawElementProviderSimpleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRawElementProviderSimple * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRawElementProviderSimple * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRawElementProviderSimple * This);
	HRESULT(STDMETHODCALLTYPE * get_ProviderOptions) (IRawElementProviderSimple * This, enum ProviderOptions * pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetPatternProvider) (IRawElementProviderSimple * This, PATTERNID patternId, IUnknown ** pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetPropertyValue) (IRawElementProviderSimple * This, PROPERTYID propertyId, VARIANT * pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_HostRawElementProvider) (IRawElementProviderSimple * This, IRawElementProviderSimple ** pRetVal);
	END_INTERFACE
}  IRawElementProviderSimpleVtbl;
interface IRawElementProviderSimple
{
	CONST_VTBL struct IRawElementProviderSimpleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRawElementProviderSimple_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRawElementProviderSimple_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRawElementProviderSimple_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRawElementProviderSimple_get_ProviderOptions(This,pRetVal) ( (This)->lpVtbl -> get_ProviderOptions(This,pRetVal) )
#define IRawElementProviderSimple_GetPatternProvider(This,patternId,pRetVal) ( (This)->lpVtbl -> GetPatternProvider(This,patternId,pRetVal) )
#define IRawElementProviderSimple_GetPropertyValue(This,propertyId,pRetVal) ( (This)->lpVtbl -> GetPropertyValue(This,propertyId,pRetVal) )
#define IRawElementProviderSimple_get_HostRawElementProvider(This,pRetVal) ( (This)->lpVtbl -> get_HostRawElementProvider(This,pRetVal) )
#endif
#endif
#ifndef __IAccessibleEx_INTERFACE_DEFINED__
#define __IAccessibleEx_INTERFACE_DEFINED__
extern const IID IID_IAccessibleEx;
typedef struct IAccessibleExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAccessibleEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAccessibleEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAccessibleEx * This);
	HRESULT(STDMETHODCALLTYPE * GetObjectForChild) (IAccessibleEx * This, long idChild, IAccessibleEx ** pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetIAccessiblePair) (IAccessibleEx * This, IAccessible ** ppAcc, long *pidChild);
	HRESULT(STDMETHODCALLTYPE * GetRuntimeId) (IAccessibleEx * This, SAFEARRAY * *pRetVal);
	HRESULT(STDMETHODCALLTYPE * ConvertReturnedElement) (IAccessibleEx * This, IRawElementProviderSimple * pIn, IAccessibleEx ** ppRetValOut);
	END_INTERFACE
}  IAccessibleExVtbl;
interface IAccessibleEx
{
	CONST_VTBL struct IAccessibleExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAccessibleEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAccessibleEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAccessibleEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAccessibleEx_GetObjectForChild(This,idChild,pRetVal) ( (This)->lpVtbl -> GetObjectForChild(This,idChild,pRetVal) )
#define IAccessibleEx_GetIAccessiblePair(This,ppAcc,pidChild) ( (This)->lpVtbl -> GetIAccessiblePair(This,ppAcc,pidChild) )
#define IAccessibleEx_GetRuntimeId(This,pRetVal) ( (This)->lpVtbl -> GetRuntimeId(This,pRetVal) )
#define IAccessibleEx_ConvertReturnedElement(This,pIn,ppRetValOut) ( (This)->lpVtbl -> ConvertReturnedElement(This,pIn,ppRetValOut) )
#endif
#endif
#ifndef __IRawElementProviderFragmentRoot_INTERFACE_DEFINED__
#define __IRawElementProviderFragmentRoot_INTERFACE_DEFINED__
extern const IID IID_IRawElementProviderFragmentRoot;
typedef struct IRawElementProviderFragmentRootVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRawElementProviderFragmentRoot *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRawElementProviderFragmentRoot * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRawElementProviderFragmentRoot * This);
	HRESULT(STDMETHODCALLTYPE * ElementProviderFromPoint) (IRawElementProviderFragmentRoot * This, double x, double y, IRawElementProviderFragment ** pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetFocus) (IRawElementProviderFragmentRoot * This, IRawElementProviderFragment ** pRetVal);
	END_INTERFACE
}  IRawElementProviderFragmentRootVtbl;
interface IRawElementProviderFragmentRoot
{
	CONST_VTBL struct IRawElementProviderFragmentRootVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRawElementProviderFragmentRoot_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRawElementProviderFragmentRoot_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRawElementProviderFragmentRoot_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRawElementProviderFragmentRoot_ElementProviderFromPoint(This,x,y,pRetVal) ( (This)->lpVtbl -> ElementProviderFromPoint(This,x,y,pRetVal) )
#define IRawElementProviderFragmentRoot_GetFocus(This,pRetVal) ( (This)->lpVtbl -> GetFocus(This,pRetVal) )
#endif
#endif
#ifndef __IRawElementProviderFragment_INTERFACE_DEFINED__
#define __IRawElementProviderFragment_INTERFACE_DEFINED__
extern const IID IID_IRawElementProviderFragment;
typedef struct IRawElementProviderFragmentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRawElementProviderFragment * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRawElementProviderFragment * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRawElementProviderFragment * This);
	HRESULT(STDMETHODCALLTYPE * Navigate) (IRawElementProviderFragment * This, enum NavigateDirection direction, IRawElementProviderFragment ** pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetRuntimeId) (IRawElementProviderFragment * This, SAFEARRAY * *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_BoundingRectangle) (IRawElementProviderFragment * This, struct UiaRect * pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetEmbeddedFragmentRoots) (IRawElementProviderFragment * This, SAFEARRAY * *pRetVal);
	HRESULT(STDMETHODCALLTYPE * SetFocus) (IRawElementProviderFragment * This);
	HRESULT(STDMETHODCALLTYPE * get_FragmentRoot) (IRawElementProviderFragment * This, IRawElementProviderFragmentRoot ** pRetVal);
	END_INTERFACE
}  IRawElementProviderFragmentVtbl;
interface IRawElementProviderFragment
{
	CONST_VTBL struct IRawElementProviderFragmentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRawElementProviderFragment_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRawElementProviderFragment_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRawElementProviderFragment_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRawElementProviderFragment_Navigate(This,direction,pRetVal) ( (This)->lpVtbl -> Navigate(This,direction,pRetVal) )
#define IRawElementProviderFragment_GetRuntimeId(This,pRetVal) ( (This)->lpVtbl -> GetRuntimeId(This,pRetVal) )
#define IRawElementProviderFragment_get_BoundingRectangle(This,pRetVal) ( (This)->lpVtbl -> get_BoundingRectangle(This,pRetVal) )
#define IRawElementProviderFragment_GetEmbeddedFragmentRoots(This,pRetVal) ( (This)->lpVtbl -> GetEmbeddedFragmentRoots(This,pRetVal) )
#define IRawElementProviderFragment_SetFocus(This) ( (This)->lpVtbl -> SetFocus(This) )
#define IRawElementProviderFragment_get_FragmentRoot(This,pRetVal) ( (This)->lpVtbl -> get_FragmentRoot(This,pRetVal) )
#endif
#endif
#ifndef __IRawElementProviderAdviseEvents_INTERFACE_DEFINED__
#define __IRawElementProviderAdviseEvents_INTERFACE_DEFINED__
extern const IID IID_IRawElementProviderAdviseEvents;
typedef struct IRawElementProviderAdviseEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRawElementProviderAdviseEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRawElementProviderAdviseEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRawElementProviderAdviseEvents * This);
	HRESULT(STDMETHODCALLTYPE * AdviseEventAdded) (IRawElementProviderAdviseEvents * This, EVENTID eventId, SAFEARRAY * propertyIDs);
	HRESULT(STDMETHODCALLTYPE * AdviseEventRemoved) (IRawElementProviderAdviseEvents * This, EVENTID eventId, SAFEARRAY * propertyIDs);
	END_INTERFACE
}  IRawElementProviderAdviseEventsVtbl;
interface IRawElementProviderAdviseEvents
{
	CONST_VTBL struct IRawElementProviderAdviseEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRawElementProviderAdviseEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRawElementProviderAdviseEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRawElementProviderAdviseEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRawElementProviderAdviseEvents_AdviseEventAdded(This,eventId,propertyIDs) ( (This)->lpVtbl -> AdviseEventAdded(This,eventId,propertyIDs) )
#define IRawElementProviderAdviseEvents_AdviseEventRemoved(This,eventId,propertyIDs) ( (This)->lpVtbl -> AdviseEventRemoved(This,eventId,propertyIDs) )
#endif
#endif
#ifndef __IRawElementProviderHwndOverride_INTERFACE_DEFINED__
#define __IRawElementProviderHwndOverride_INTERFACE_DEFINED__
extern const IID IID_IRawElementProviderHwndOverride;
typedef struct IRawElementProviderHwndOverrideVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRawElementProviderHwndOverride * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRawElementProviderHwndOverride * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRawElementProviderHwndOverride * This);
	HRESULT(STDMETHODCALLTYPE * GetOverrideProviderForHwnd) (IRawElementProviderHwndOverride * This, HWND hwnd, IRawElementProviderSimple ** pRetVal);
	END_INTERFACE
}  IRawElementProviderHwndOverrideVtbl;
interface IRawElementProviderHwndOverride
{
	CONST_VTBL struct IRawElementProviderHwndOverrideVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRawElementProviderHwndOverride_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRawElementProviderHwndOverride_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRawElementProviderHwndOverride_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRawElementProviderHwndOverride_GetOverrideProviderForHwnd(This,hwnd,pRetVal) ( (This)->lpVtbl -> GetOverrideProviderForHwnd(This,hwnd,pRetVal) )
#endif
#endif
#ifndef __IProxyProviderWinEventSink_INTERFACE_DEFINED__
#define __IProxyProviderWinEventSink_INTERFACE_DEFINED__
extern const IID IID_IProxyProviderWinEventSink;
typedef struct IProxyProviderWinEventSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProxyProviderWinEventSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProxyProviderWinEventSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProxyProviderWinEventSink * This);
	HRESULT(STDMETHODCALLTYPE * AddAutomationPropertyChangedEvent) (IProxyProviderWinEventSink * This, IRawElementProviderSimple * pProvider, PROPERTYID id, VARIANT newValue);
	HRESULT(STDMETHODCALLTYPE * AddAutomationEvent) (IProxyProviderWinEventSink * This, IRawElementProviderSimple * pProvider, EVENTID id);
	HRESULT(STDMETHODCALLTYPE * AddStructureChangedEvent) (IProxyProviderWinEventSink * This, IRawElementProviderSimple * pProvider, enum StructureChangeType structureChangeType, SAFEARRAY * runtimeId);
	END_INTERFACE
}  IProxyProviderWinEventSinkVtbl;
interface IProxyProviderWinEventSink
{
	CONST_VTBL struct IProxyProviderWinEventSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProxyProviderWinEventSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProxyProviderWinEventSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IProxyProviderWinEventSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IProxyProviderWinEventSink_AddAutomationPropertyChangedEvent(This,pProvider,id,newValue) ( (This)->lpVtbl -> AddAutomationPropertyChangedEvent(This,pProvider,id,newValue) )
#define IProxyProviderWinEventSink_AddAutomationEvent(This,pProvider,id) ( (This)->lpVtbl -> AddAutomationEvent(This,pProvider,id) )
#define IProxyProviderWinEventSink_AddStructureChangedEvent(This,pProvider,structureChangeType,runtimeId) ( (This)->lpVtbl -> AddStructureChangedEvent(This,pProvider,structureChangeType,runtimeId) )
#endif
#endif
#ifndef __IProxyProviderWinEventHandler_INTERFACE_DEFINED__
#define __IProxyProviderWinEventHandler_INTERFACE_DEFINED__
extern const IID IID_IProxyProviderWinEventHandler;
typedef struct IProxyProviderWinEventHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProxyProviderWinEventHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProxyProviderWinEventHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProxyProviderWinEventHandler * This);
	HRESULT(STDMETHODCALLTYPE * RespondToWinEvent) (IProxyProviderWinEventHandler * This, DWORD idWinEvent, HWND hwnd, LONG idObject, LONG idChild, IProxyProviderWinEventSink * pSink);
	END_INTERFACE
}  IProxyProviderWinEventHandlerVtbl;
interface IProxyProviderWinEventHandler
{
	CONST_VTBL struct IProxyProviderWinEventHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProxyProviderWinEventHandler_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProxyProviderWinEventHandler_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IProxyProviderWinEventHandler_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IProxyProviderWinEventHandler_RespondToWinEvent(This,idWinEvent,hwnd,idObject,idChild,pSink) ( (This)->lpVtbl -> RespondToWinEvent(This,idWinEvent,hwnd,idObject,idChild,pSink) )
#endif
#endif
#ifndef __IDockProvider_INTERFACE_DEFINED__
#define __IDockProvider_INTERFACE_DEFINED__
extern const IID IID_IDockProvider;
typedef struct IDockProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDockProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDockProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDockProvider * This);
	HRESULT(STDMETHODCALLTYPE * SetDockPosition) (IDockProvider * This, enum DockPosition dockPosition);
	HRESULT(STDMETHODCALLTYPE * get_DockPosition) (IDockProvider * This, enum DockPosition * pRetVal);
	END_INTERFACE
}  IDockProviderVtbl;
interface IDockProvider
{
	CONST_VTBL struct IDockProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDockProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDockProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDockProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDockProvider_SetDockPosition(This,dockPosition) ( (This)->lpVtbl -> SetDockPosition(This,dockPosition) )
#define IDockProvider_get_DockPosition(This,pRetVal) ( (This)->lpVtbl -> get_DockPosition(This,pRetVal) )
#endif
#endif
#ifndef __IExpandCollapseProvider_INTERFACE_DEFINED__
#define __IExpandCollapseProvider_INTERFACE_DEFINED__
extern const IID IID_IExpandCollapseProvider;
typedef struct IExpandCollapseProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IExpandCollapseProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IExpandCollapseProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IExpandCollapseProvider * This);
	HRESULT(STDMETHODCALLTYPE * Expand) (IExpandCollapseProvider * This);
	HRESULT(STDMETHODCALLTYPE * Collapse) (IExpandCollapseProvider * This);
	HRESULT(STDMETHODCALLTYPE * get_ExpandCollapseState) (IExpandCollapseProvider * This, enum ExpandCollapseState * pRetVal);
	END_INTERFACE
}  IExpandCollapseProviderVtbl;
interface IExpandCollapseProvider
{
	CONST_VTBL struct IExpandCollapseProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExpandCollapseProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExpandCollapseProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IExpandCollapseProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IExpandCollapseProvider_Expand(This) ( (This)->lpVtbl -> Expand(This) )
#define IExpandCollapseProvider_Collapse(This) ( (This)->lpVtbl -> Collapse(This) )
#define IExpandCollapseProvider_get_ExpandCollapseState(This,pRetVal) ( (This)->lpVtbl -> get_ExpandCollapseState(This,pRetVal) )
#endif
#endif
#ifndef __IGridProvider_INTERFACE_DEFINED__
#define __IGridProvider_INTERFACE_DEFINED__
extern const IID IID_IGridProvider;
typedef struct IGridProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGridProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGridProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGridProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetItem) (IGridProvider * This, int row, int column, IRawElementProviderSimple ** pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_RowCount) (IGridProvider * This, int *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_ColumnCount) (IGridProvider * This, int *pRetVal);
	END_INTERFACE
}  IGridProviderVtbl;
interface IGridProvider
{
	CONST_VTBL struct IGridProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGridProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGridProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IGridProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IGridProvider_GetItem(This,row,column,pRetVal) ( (This)->lpVtbl -> GetItem(This,row,column,pRetVal) )
#define IGridProvider_get_RowCount(This,pRetVal) ( (This)->lpVtbl -> get_RowCount(This,pRetVal) )
#define IGridProvider_get_ColumnCount(This,pRetVal) ( (This)->lpVtbl -> get_ColumnCount(This,pRetVal) )
#endif
#endif
#ifndef __IGridItemProvider_INTERFACE_DEFINED__
#define __IGridItemProvider_INTERFACE_DEFINED__
extern const IID IID_IGridItemProvider;
typedef struct IGridItemProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGridItemProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGridItemProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGridItemProvider * This);
	HRESULT(STDMETHODCALLTYPE * get_Row) (IGridItemProvider * This, int *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_Column) (IGridItemProvider * This, int *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_RowSpan) (IGridItemProvider * This, int *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_ColumnSpan) (IGridItemProvider * This, int *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_ContainingGrid) (IGridItemProvider * This, IRawElementProviderSimple ** pRetVal);
	END_INTERFACE
}  IGridItemProviderVtbl;
interface IGridItemProvider
{
	CONST_VTBL struct IGridItemProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGridItemProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGridItemProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IGridItemProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IGridItemProvider_get_Row(This,pRetVal) ( (This)->lpVtbl -> get_Row(This,pRetVal) )
#define IGridItemProvider_get_Column(This,pRetVal) ( (This)->lpVtbl -> get_Column(This,pRetVal) )
#define IGridItemProvider_get_RowSpan(This,pRetVal) ( (This)->lpVtbl -> get_RowSpan(This,pRetVal) )
#define IGridItemProvider_get_ColumnSpan(This,pRetVal) ( (This)->lpVtbl -> get_ColumnSpan(This,pRetVal) )
#define IGridItemProvider_get_ContainingGrid(This,pRetVal) ( (This)->lpVtbl -> get_ContainingGrid(This,pRetVal) )
#endif
#endif
#ifndef __IInvokeProvider_INTERFACE_DEFINED__
#define __IInvokeProvider_INTERFACE_DEFINED__
extern const IID IID_IInvokeProvider;
typedef struct IInvokeProviderVtbl
{
	BEGIN_INTERFACE
		HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInvokeProvider * This, REFIID riid, void **ppvObject);
		ULONG(STDMETHODCALLTYPE * AddRef) (IInvokeProvider * This);
		ULONG(STDMETHODCALLTYPE * Release) (IInvokeProvider * This);
		HRESULT(STDMETHODCALLTYPE * Invoke) (IInvokeProvider * This);
		END_INTERFACE
}  IInvokeProviderVtbl;
interface IInvokeProvider
{
	CONST_VTBL struct IInvokeProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInvokeProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInvokeProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInvokeProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInvokeProvider_Invoke(This) ( (This)->lpVtbl -> Invoke(This) )
#endif
#endif
#ifndef __IMultipleViewProvider_INTERFACE_DEFINED__
#define __IMultipleViewProvider_INTERFACE_DEFINED__
extern const IID IID_IMultipleViewProvider;
typedef struct IMultipleViewProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMultipleViewProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMultipleViewProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMultipleViewProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetViewName) (IMultipleViewProvider * This, int viewId, BSTR * pRetVal);
	HRESULT(STDMETHODCALLTYPE * SetCurrentView) (IMultipleViewProvider * This, int viewId);
	HRESULT(STDMETHODCALLTYPE * get_CurrentView) (IMultipleViewProvider * This, int *pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetSupportedViews) (IMultipleViewProvider * This, SAFEARRAY * *pRetVal);
	END_INTERFACE
}  IMultipleViewProviderVtbl;
interface IMultipleViewProvider
{
	CONST_VTBL struct IMultipleViewProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMultipleViewProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMultipleViewProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMultipleViewProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMultipleViewProvider_GetViewName(This,viewId,pRetVal) ( (This)->lpVtbl -> GetViewName(This,viewId,pRetVal) )
#define IMultipleViewProvider_SetCurrentView(This,viewId) ( (This)->lpVtbl -> SetCurrentView(This,viewId) )
#define IMultipleViewProvider_get_CurrentView(This,pRetVal) ( (This)->lpVtbl -> get_CurrentView(This,pRetVal) )
#define IMultipleViewProvider_GetSupportedViews(This,pRetVal) ( (This)->lpVtbl -> GetSupportedViews(This,pRetVal) )
#endif
#endif
#ifndef __IRangeValueProvider_INTERFACE_DEFINED__
#define __IRangeValueProvider_INTERFACE_DEFINED__
extern const IID IID_IRangeValueProvider;
typedef struct IRangeValueProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRangeValueProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRangeValueProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRangeValueProvider * This);
	HRESULT(STDMETHODCALLTYPE * SetValue) (IRangeValueProvider * This, double val);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IRangeValueProvider * This, double *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_IsReadOnly) (IRangeValueProvider * This, BOOL * pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_Maximum) (IRangeValueProvider * This, double *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_Minimum) (IRangeValueProvider * This, double *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_LargeChange) (IRangeValueProvider * This, double *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_SmallChange) (IRangeValueProvider * This, double *pRetVal);
	END_INTERFACE
}  IRangeValueProviderVtbl;
interface IRangeValueProvider
{
	CONST_VTBL struct IRangeValueProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRangeValueProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRangeValueProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRangeValueProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRangeValueProvider_SetValue(This,val) ( (This)->lpVtbl -> SetValue(This,val) )
#define IRangeValueProvider_get_Value(This,pRetVal) ( (This)->lpVtbl -> get_Value(This,pRetVal) )
#define IRangeValueProvider_get_IsReadOnly(This,pRetVal) ( (This)->lpVtbl -> get_IsReadOnly(This,pRetVal) )
#define IRangeValueProvider_get_Maximum(This,pRetVal) ( (This)->lpVtbl -> get_Maximum(This,pRetVal) )
#define IRangeValueProvider_get_Minimum(This,pRetVal) ( (This)->lpVtbl -> get_Minimum(This,pRetVal) )
#define IRangeValueProvider_get_LargeChange(This,pRetVal) ( (This)->lpVtbl -> get_LargeChange(This,pRetVal) )
#define IRangeValueProvider_get_SmallChange(This,pRetVal) ( (This)->lpVtbl -> get_SmallChange(This,pRetVal) )
#endif
#endif
#ifndef __IScrollItemProvider_INTERFACE_DEFINED__
#define __IScrollItemProvider_INTERFACE_DEFINED__
extern const IID IID_IScrollItemProvider;
typedef struct IScrollItemProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IScrollItemProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IScrollItemProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IScrollItemProvider * This);
	HRESULT(STDMETHODCALLTYPE * ScrollIntoView) (IScrollItemProvider * This);
	END_INTERFACE
}  IScrollItemProviderVtbl;
interface IScrollItemProvider
{
	CONST_VTBL struct IScrollItemProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IScrollItemProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IScrollItemProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IScrollItemProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IScrollItemProvider_ScrollIntoView(This) ( (This)->lpVtbl -> ScrollIntoView(This) )
#endif
#endif
#ifndef __ISelectionProvider_INTERFACE_DEFINED__
#define __ISelectionProvider_INTERFACE_DEFINED__
extern const IID IID_ISelectionProvider;
typedef struct ISelectionProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISelectionProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISelectionProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISelectionProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetSelection) (ISelectionProvider * This, SAFEARRAY * *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_CanSelectMultiple) (ISelectionProvider * This, BOOL * pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_IsSelectionRequired) (ISelectionProvider * This, BOOL * pRetVal);
	END_INTERFACE
}  ISelectionProviderVtbl;
interface ISelectionProvider
{
	CONST_VTBL struct ISelectionProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISelectionProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISelectionProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISelectionProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISelectionProvider_GetSelection(This,pRetVal) ( (This)->lpVtbl -> GetSelection(This,pRetVal) )
#define ISelectionProvider_get_CanSelectMultiple(This,pRetVal) ( (This)->lpVtbl -> get_CanSelectMultiple(This,pRetVal) )
#define ISelectionProvider_get_IsSelectionRequired(This,pRetVal) ( (This)->lpVtbl -> get_IsSelectionRequired(This,pRetVal) )
#endif
#endif
#ifndef __IScrollProvider_INTERFACE_DEFINED__
#define __IScrollProvider_INTERFACE_DEFINED__
extern const IID IID_IScrollProvider;
typedef struct IScrollProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IScrollProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IScrollProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IScrollProvider * This);
	HRESULT(STDMETHODCALLTYPE * Scroll) (IScrollProvider * This, enum ScrollAmount horizontalAmount, enum ScrollAmount verticalAmount);
	HRESULT(STDMETHODCALLTYPE * SetScrollPercent) (IScrollProvider * This, double horizontalPercent, double verticalPercent);
	HRESULT(STDMETHODCALLTYPE * get_HorizontalScrollPercent) (IScrollProvider * This, double *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_VerticalScrollPercent) (IScrollProvider * This, double *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_HorizontalViewSize) (IScrollProvider * This, double *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_VerticalViewSize) (IScrollProvider * This, double *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_HorizontallyScrollable) (IScrollProvider * This, BOOL * pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_VerticallyScrollable) (IScrollProvider * This, BOOL * pRetVal);
	END_INTERFACE
}  IScrollProviderVtbl;
interface IScrollProvider
{
	CONST_VTBL struct IScrollProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IScrollProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IScrollProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IScrollProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IScrollProvider_Scroll(This,horizontalAmount,verticalAmount) ( (This)->lpVtbl -> Scroll(This,horizontalAmount,verticalAmount) )
#define IScrollProvider_SetScrollPercent(This,horizontalPercent,verticalPercent) ( (This)->lpVtbl -> SetScrollPercent(This,horizontalPercent,verticalPercent) )
#define IScrollProvider_get_HorizontalScrollPercent(This,pRetVal) ( (This)->lpVtbl -> get_HorizontalScrollPercent(This,pRetVal) )
#define IScrollProvider_get_VerticalScrollPercent(This,pRetVal) ( (This)->lpVtbl -> get_VerticalScrollPercent(This,pRetVal) )
#define IScrollProvider_get_HorizontalViewSize(This,pRetVal) ( (This)->lpVtbl -> get_HorizontalViewSize(This,pRetVal) )
#define IScrollProvider_get_VerticalViewSize(This,pRetVal) ( (This)->lpVtbl -> get_VerticalViewSize(This,pRetVal) )
#define IScrollProvider_get_HorizontallyScrollable(This,pRetVal) ( (This)->lpVtbl -> get_HorizontallyScrollable(This,pRetVal) )
#define IScrollProvider_get_VerticallyScrollable(This,pRetVal) ( (This)->lpVtbl -> get_VerticallyScrollable(This,pRetVal) )
#endif
#endif
#ifndef __ISelectionItemProvider_INTERFACE_DEFINED__
#define __ISelectionItemProvider_INTERFACE_DEFINED__
extern const IID IID_ISelectionItemProvider;
typedef struct ISelectionItemProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISelectionItemProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISelectionItemProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISelectionItemProvider * This);
	HRESULT(STDMETHODCALLTYPE * Select) (ISelectionItemProvider * This);
	HRESULT(STDMETHODCALLTYPE * AddToSelection) (ISelectionItemProvider * This);
	HRESULT(STDMETHODCALLTYPE * RemoveFromSelection) (ISelectionItemProvider * This);
	HRESULT(STDMETHODCALLTYPE * get_IsSelected) (ISelectionItemProvider * This, BOOL * pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_SelectionContainer) (ISelectionItemProvider * This, IRawElementProviderSimple ** pRetVal);
	END_INTERFACE
}  ISelectionItemProviderVtbl;
interface ISelectionItemProvider
{
	CONST_VTBL struct ISelectionItemProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISelectionItemProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISelectionItemProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISelectionItemProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISelectionItemProvider_Select(This) ( (This)->lpVtbl -> Select(This) )
#define ISelectionItemProvider_AddToSelection(This) ( (This)->lpVtbl -> AddToSelection(This) )
#define ISelectionItemProvider_RemoveFromSelection(This) ( (This)->lpVtbl -> RemoveFromSelection(This) )
#define ISelectionItemProvider_get_IsSelected(This,pRetVal) ( (This)->lpVtbl -> get_IsSelected(This,pRetVal) )
#define ISelectionItemProvider_get_SelectionContainer(This,pRetVal) ( (This)->lpVtbl -> get_SelectionContainer(This,pRetVal) )
#endif
#endif
#ifndef __ISynchronizedInputProvider_INTERFACE_DEFINED__
#define __ISynchronizedInputProvider_INTERFACE_DEFINED__
extern const IID IID_ISynchronizedInputProvider;
typedef struct ISynchronizedInputProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISynchronizedInputProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISynchronizedInputProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISynchronizedInputProvider * This);
	HRESULT(STDMETHODCALLTYPE * StartListening) (ISynchronizedInputProvider * This, enum SynchronizedInputType inputType);
	HRESULT(STDMETHODCALLTYPE * Cancel) (ISynchronizedInputProvider * This);
	END_INTERFACE
}  ISynchronizedInputProviderVtbl;
interface ISynchronizedInputProvider
{
	CONST_VTBL struct ISynchronizedInputProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISynchronizedInputProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISynchronizedInputProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISynchronizedInputProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISynchronizedInputProvider_StartListening(This,inputType) ( (This)->lpVtbl -> StartListening(This,inputType) )
#define ISynchronizedInputProvider_Cancel(This) ( (This)->lpVtbl -> Cancel(This) )
#endif
#endif
#ifndef __ITableProvider_INTERFACE_DEFINED__
#define __ITableProvider_INTERFACE_DEFINED__
extern const IID IID_ITableProvider;
typedef struct ITableProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITableProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITableProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITableProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetRowHeaders) (ITableProvider * This, SAFEARRAY * *pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetColumnHeaders) (ITableProvider * This, SAFEARRAY * *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_RowOrColumnMajor) (ITableProvider * This, enum RowOrColumnMajor * pRetVal);
	END_INTERFACE
}  ITableProviderVtbl;
interface ITableProvider
{
	CONST_VTBL struct ITableProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITableProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITableProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITableProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITableProvider_GetRowHeaders(This,pRetVal) ( (This)->lpVtbl -> GetRowHeaders(This,pRetVal) )
#define ITableProvider_GetColumnHeaders(This,pRetVal) ( (This)->lpVtbl -> GetColumnHeaders(This,pRetVal) )
#define ITableProvider_get_RowOrColumnMajor(This,pRetVal) ( (This)->lpVtbl -> get_RowOrColumnMajor(This,pRetVal) )
#endif
#endif
#ifndef __ITableItemProvider_INTERFACE_DEFINED__
#define __ITableItemProvider_INTERFACE_DEFINED__
extern const IID IID_ITableItemProvider;
typedef struct ITableItemProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITableItemProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITableItemProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITableItemProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetRowHeaderItems) (ITableItemProvider * This, SAFEARRAY * *pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetColumnHeaderItems) (ITableItemProvider * This, SAFEARRAY * *pRetVal);
	END_INTERFACE
}  ITableItemProviderVtbl;
interface ITableItemProvider
{
	CONST_VTBL struct ITableItemProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITableItemProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITableItemProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITableItemProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITableItemProvider_GetRowHeaderItems(This,pRetVal) ( (This)->lpVtbl -> GetRowHeaderItems(This,pRetVal) )
#define ITableItemProvider_GetColumnHeaderItems(This,pRetVal) ( (This)->lpVtbl -> GetColumnHeaderItems(This,pRetVal) )
#endif
#endif
#ifndef __IToggleProvider_INTERFACE_DEFINED__
#define __IToggleProvider_INTERFACE_DEFINED__
extern const IID IID_IToggleProvider;
typedef struct IToggleProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IToggleProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IToggleProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IToggleProvider * This);
	HRESULT(STDMETHODCALLTYPE * Toggle) (IToggleProvider * This);
	HRESULT(STDMETHODCALLTYPE * get_ToggleState) (IToggleProvider * This, enum ToggleState * pRetVal);
	END_INTERFACE
}  IToggleProviderVtbl;
interface IToggleProvider
{
	CONST_VTBL struct IToggleProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IToggleProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IToggleProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IToggleProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IToggleProvider_Toggle(This) ( (This)->lpVtbl -> Toggle(This) )
#define IToggleProvider_get_ToggleState(This,pRetVal) ( (This)->lpVtbl -> get_ToggleState(This,pRetVal) )
#endif
#endif
#ifndef __ITransformProvider_INTERFACE_DEFINED__
#define __ITransformProvider_INTERFACE_DEFINED__
extern const IID IID_ITransformProvider;
typedef struct ITransformProviderVtbl
{
	BEGIN_INTERFACE
HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransformProvider * This, REFIID riid, void **ppvObject);
	                ULONG(STDMETHODCALLTYPE * AddRef) (ITransformProvider * This);
	                ULONG(STDMETHODCALLTYPE * Release) (ITransformProvider * This);
	                HRESULT(STDMETHODCALLTYPE * Move) (ITransformProvider * This, double x, double y);
	                HRESULT(STDMETHODCALLTYPE * Resize) (ITransformProvider * This, double width, double height);
	                HRESULT(STDMETHODCALLTYPE * Rotate) (ITransformProvider * This, double degrees);
	                HRESULT(STDMETHODCALLTYPE * get_CanMove) (ITransformProvider * This, BOOL * pRetVal);
	                HRESULT(STDMETHODCALLTYPE * get_CanResize) (ITransformProvider * This, BOOL * pRetVal);
	                HRESULT(STDMETHODCALLTYPE * get_CanRotate) (ITransformProvider * This, BOOL * pRetVal);
END_INTERFACE
}  ITransformProviderVtbl;
interface ITransformProvider
{
	CONST_VTBL struct ITransformProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransformProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransformProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITransformProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITransformProvider_Move(This,x,y) ( (This)->lpVtbl -> Move(This,x,y) )
#define ITransformProvider_Resize(This,width,height) ( (This)->lpVtbl -> Resize(This,width,height) )
#define ITransformProvider_Rotate(This,degrees) ( (This)->lpVtbl -> Rotate(This,degrees) )
#define ITransformProvider_get_CanMove(This,pRetVal) ( (This)->lpVtbl -> get_CanMove(This,pRetVal) )
#define ITransformProvider_get_CanResize(This,pRetVal) ( (This)->lpVtbl -> get_CanResize(This,pRetVal) )
#define ITransformProvider_get_CanRotate(This,pRetVal) ( (This)->lpVtbl -> get_CanRotate(This,pRetVal) )
#endif
#endif
#ifndef __IValueProvider_INTERFACE_DEFINED__
#define __IValueProvider_INTERFACE_DEFINED__
extern const IID IID_IValueProvider;
typedef struct IValueProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IValueProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IValueProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IValueProvider * This);
	HRESULT(STDMETHODCALLTYPE * SetValue) (IValueProvider * This, LPCWSTR val);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IValueProvider * This, BSTR * pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_IsReadOnly) (IValueProvider * This, BOOL * pRetVal);
	END_INTERFACE
}  IValueProviderVtbl;
interface IValueProvider
{
	CONST_VTBL struct IValueProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IValueProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IValueProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IValueProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IValueProvider_SetValue(This,val) ( (This)->lpVtbl -> SetValue(This,val) )
#define IValueProvider_get_Value(This,pRetVal) ( (This)->lpVtbl -> get_Value(This,pRetVal) )
#define IValueProvider_get_IsReadOnly(This,pRetVal) ( (This)->lpVtbl -> get_IsReadOnly(This,pRetVal) )
#endif
#endif
#ifndef __IWindowProvider_INTERFACE_DEFINED__
#define __IWindowProvider_INTERFACE_DEFINED__
extern const IID IID_IWindowProvider;
typedef struct IWindowProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWindowProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWindowProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWindowProvider * This);
	HRESULT(STDMETHODCALLTYPE * SetVisualState) (IWindowProvider * This, enum WindowVisualState state);
	HRESULT(STDMETHODCALLTYPE * Close) (IWindowProvider * This);
	HRESULT(STDMETHODCALLTYPE * WaitForInputIdle) (IWindowProvider * This, int milliseconds, BOOL * pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_CanMaximize) (IWindowProvider * This, BOOL * pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_CanMinimize) (IWindowProvider * This, BOOL * pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_IsModal) (IWindowProvider * This, BOOL * pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_WindowVisualState) (IWindowProvider * This, enum WindowVisualState * pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_WindowInteractionState) (IWindowProvider * This, enum WindowInteractionState * pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_IsTopmost) (IWindowProvider * This, BOOL * pRetVal);
	END_INTERFACE
}  IWindowProviderVtbl;
interface IWindowProvider
{
	CONST_VTBL struct IWindowProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWindowProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWindowProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWindowProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWindowProvider_SetVisualState(This,state) ( (This)->lpVtbl -> SetVisualState(This,state) )
#define IWindowProvider_Close(This) ( (This)->lpVtbl -> Close(This) )
#define IWindowProvider_WaitForInputIdle(This,milliseconds,pRetVal) ( (This)->lpVtbl -> WaitForInputIdle(This,milliseconds,pRetVal) )
#define IWindowProvider_get_CanMaximize(This,pRetVal) ( (This)->lpVtbl -> get_CanMaximize(This,pRetVal) )
#define IWindowProvider_get_CanMinimize(This,pRetVal) ( (This)->lpVtbl -> get_CanMinimize(This,pRetVal) )
#define IWindowProvider_get_IsModal(This,pRetVal) ( (This)->lpVtbl -> get_IsModal(This,pRetVal) )
#define IWindowProvider_get_WindowVisualState(This,pRetVal) ( (This)->lpVtbl -> get_WindowVisualState(This,pRetVal) )
#define IWindowProvider_get_WindowInteractionState(This,pRetVal) ( (This)->lpVtbl -> get_WindowInteractionState(This,pRetVal) )
#define IWindowProvider_get_IsTopmost(This,pRetVal) ( (This)->lpVtbl -> get_IsTopmost(This,pRetVal) )
#endif
#endif
#ifndef __ILegacyIAccessibleProvider_INTERFACE_DEFINED__
#define __ILegacyIAccessibleProvider_INTERFACE_DEFINED__
extern const IID IID_ILegacyIAccessibleProvider;
typedef struct ILegacyIAccessibleProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILegacyIAccessibleProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILegacyIAccessibleProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILegacyIAccessibleProvider * This);
	HRESULT(STDMETHODCALLTYPE * Select) (ILegacyIAccessibleProvider * This, long flagsSelect);
	HRESULT(STDMETHODCALLTYPE * DoDefaultAction) (ILegacyIAccessibleProvider * This);
	HRESULT(STDMETHODCALLTYPE * SetValue) (ILegacyIAccessibleProvider * This, LPCWSTR szValue);
	HRESULT(STDMETHODCALLTYPE * GetIAccessible) (ILegacyIAccessibleProvider * This, IAccessible ** ppAccessible);
	HRESULT(STDMETHODCALLTYPE * get_ChildId) (ILegacyIAccessibleProvider * This, int *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ILegacyIAccessibleProvider * This, BSTR * pszName);
	HRESULT(STDMETHODCALLTYPE * get_Value) (ILegacyIAccessibleProvider * This, BSTR * pszValue);
	HRESULT(STDMETHODCALLTYPE * get_Description) (ILegacyIAccessibleProvider * This, BSTR * pszDescription);
	HRESULT(STDMETHODCALLTYPE * get_Role) (ILegacyIAccessibleProvider * This, DWORD * pdwRole);
	HRESULT(STDMETHODCALLTYPE * get_State) (ILegacyIAccessibleProvider * This, DWORD * pdwState);
	HRESULT(STDMETHODCALLTYPE * get_Help) (ILegacyIAccessibleProvider * This, BSTR * pszHelp);
	HRESULT(STDMETHODCALLTYPE * get_KeyboardShortcut) (ILegacyIAccessibleProvider * This, BSTR * pszKeyboardShortcut);
	HRESULT(STDMETHODCALLTYPE * GetSelection) (ILegacyIAccessibleProvider * This, SAFEARRAY * *pvarSelectedChildren);
	HRESULT(STDMETHODCALLTYPE * get_DefaultAction) (ILegacyIAccessibleProvider * This, BSTR * pszDefaultAction);
	END_INTERFACE
}  ILegacyIAccessibleProviderVtbl;
interface ILegacyIAccessibleProvider
{
	CONST_VTBL struct ILegacyIAccessibleProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILegacyIAccessibleProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILegacyIAccessibleProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ILegacyIAccessibleProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ILegacyIAccessibleProvider_Select(This,flagsSelect) ( (This)->lpVtbl -> Select(This,flagsSelect) )
#define ILegacyIAccessibleProvider_DoDefaultAction(This) ( (This)->lpVtbl -> DoDefaultAction(This) )
#define ILegacyIAccessibleProvider_SetValue(This,szValue) ( (This)->lpVtbl -> SetValue(This,szValue) )
#define ILegacyIAccessibleProvider_GetIAccessible(This,ppAccessible) ( (This)->lpVtbl -> GetIAccessible(This,ppAccessible) )
#define ILegacyIAccessibleProvider_get_ChildId(This,pRetVal) ( (This)->lpVtbl -> get_ChildId(This,pRetVal) )
#define ILegacyIAccessibleProvider_get_Name(This,pszName) ( (This)->lpVtbl -> get_Name(This,pszName) )
#define ILegacyIAccessibleProvider_get_Value(This,pszValue) ( (This)->lpVtbl -> get_Value(This,pszValue) )
#define ILegacyIAccessibleProvider_get_Description(This,pszDescription) ( (This)->lpVtbl -> get_Description(This,pszDescription) )
#define ILegacyIAccessibleProvider_get_Role(This,pdwRole) ( (This)->lpVtbl -> get_Role(This,pdwRole) )
#define ILegacyIAccessibleProvider_get_State(This,pdwState) ( (This)->lpVtbl -> get_State(This,pdwState) )
#define ILegacyIAccessibleProvider_get_Help(This,pszHelp) ( (This)->lpVtbl -> get_Help(This,pszHelp) )
#define ILegacyIAccessibleProvider_get_KeyboardShortcut(This,pszKeyboardShortcut) ( (This)->lpVtbl -> get_KeyboardShortcut(This,pszKeyboardShortcut) )
#define ILegacyIAccessibleProvider_GetSelection(This,pvarSelectedChildren) ( (This)->lpVtbl -> GetSelection(This,pvarSelectedChildren) )
#define ILegacyIAccessibleProvider_get_DefaultAction(This,pszDefaultAction) ( (This)->lpVtbl -> get_DefaultAction(This,pszDefaultAction) )
#endif
#endif
#ifndef __IItemContainerProvider_INTERFACE_DEFINED__
#define __IItemContainerProvider_INTERFACE_DEFINED__
extern const IID IID_IItemContainerProvider;
typedef struct IItemContainerProviderVtbl
{
	BEGIN_INTERFACE
		HRESULT(STDMETHODCALLTYPE * QueryInterface) (IItemContainerProvider * This, REFIID riid, void **ppvObject);
		ULONG(STDMETHODCALLTYPE * AddRef) (IItemContainerProvider * This);
		ULONG(STDMETHODCALLTYPE * Release) (IItemContainerProvider * This);
		HRESULT(STDMETHODCALLTYPE * FindItemByProperty) (IItemContainerProvider * This, IRawElementProviderSimple * pStartAfter, PROPERTYID propertyId, VARIANT value, IRawElementProviderSimple ** pFound);
		END_INTERFACE
}  IItemContainerProviderVtbl;
interface IItemContainerProvider
{
	CONST_VTBL struct IItemContainerProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IItemContainerProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IItemContainerProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IItemContainerProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IItemContainerProvider_FindItemByProperty(This,pStartAfter,propertyId,value,pFound) ( (This)->lpVtbl -> FindItemByProperty(This,pStartAfter,propertyId,value,pFound) )
#endif
#endif
#ifndef __IVirtualizedItemProvider_INTERFACE_DEFINED__
#define __IVirtualizedItemProvider_INTERFACE_DEFINED__
extern const IID IID_IVirtualizedItemProvider;
typedef struct IVirtualizedItemProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVirtualizedItemProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVirtualizedItemProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVirtualizedItemProvider * This);
	HRESULT(STDMETHODCALLTYPE * Realize) (IVirtualizedItemProvider * This);
	END_INTERFACE
}  IVirtualizedItemProviderVtbl;
interface IVirtualizedItemProvider
{
	CONST_VTBL struct IVirtualizedItemProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVirtualizedItemProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVirtualizedItemProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVirtualizedItemProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVirtualizedItemProvider_Realize(This) ( (This)->lpVtbl -> Realize(This) )
#endif
#endif
#ifndef __ITextRangeProvider_INTERFACE_DEFINED__
#define __ITextRangeProvider_INTERFACE_DEFINED__
extern const IID IID_ITextRangeProvider;
typedef struct ITextRangeProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITextRangeProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITextRangeProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITextRangeProvider * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ITextRangeProvider * This, ITextRangeProvider ** pRetVal);
	HRESULT(STDMETHODCALLTYPE * Compare) (ITextRangeProvider * This, ITextRangeProvider * range, BOOL * pRetVal);
	HRESULT(STDMETHODCALLTYPE * CompareEndpoints) (ITextRangeProvider * This, enum TextPatternRangeEndpoint endpoint, ITextRangeProvider * targetRange, enum TextPatternRangeEndpoint targetEndpoint, int *pRetVal);
	HRESULT(STDMETHODCALLTYPE * ExpandToEnclosingUnit) (ITextRangeProvider * This, enum TextUnit unit);
	HRESULT(STDMETHODCALLTYPE * FindAttribute) (ITextRangeProvider * This, TEXTATTRIBUTEID attributeId, VARIANT val, BOOL backward, ITextRangeProvider ** pRetVal);
	HRESULT(STDMETHODCALLTYPE * FindText) (ITextRangeProvider * This, BSTR text, BOOL backward, BOOL ignoreCase, ITextRangeProvider ** pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetAttributeValue) (ITextRangeProvider * This, TEXTATTRIBUTEID attributeId, VARIANT * pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetBoundingRectangles) (ITextRangeProvider * This, SAFEARRAY * *pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetEnclosingElement) (ITextRangeProvider * This, IRawElementProviderSimple ** pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetText) (ITextRangeProvider * This, int maxLength, BSTR * pRetVal);
	HRESULT(STDMETHODCALLTYPE * Move) (ITextRangeProvider * This, enum TextUnit unit, int count, int *pRetVal);
	HRESULT(STDMETHODCALLTYPE * MoveEndpointByUnit) (ITextRangeProvider * This, enum TextPatternRangeEndpoint endpoint, enum TextUnit unit, int count, int *pRetVal);
	HRESULT(STDMETHODCALLTYPE * MoveEndpointByRange) (ITextRangeProvider * This, enum TextPatternRangeEndpoint endpoint, ITextRangeProvider * targetRange, enum TextPatternRangeEndpoint targetEndpoint);
	HRESULT(STDMETHODCALLTYPE * Select) (ITextRangeProvider * This);
	HRESULT(STDMETHODCALLTYPE * AddToSelection) (ITextRangeProvider * This);
	HRESULT(STDMETHODCALLTYPE * RemoveFromSelection) (ITextRangeProvider * This);
	HRESULT(STDMETHODCALLTYPE * ScrollIntoView) (ITextRangeProvider * This, BOOL alignToTop);
	HRESULT(STDMETHODCALLTYPE * GetChildren) (ITextRangeProvider * This, SAFEARRAY * *pRetVal);
	END_INTERFACE
}  ITextRangeProviderVtbl;
interface ITextRangeProvider
{
	CONST_VTBL struct ITextRangeProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITextRangeProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITextRangeProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITextRangeProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITextRangeProvider_Clone(This,pRetVal) ( (This)->lpVtbl -> Clone(This,pRetVal) )
#define ITextRangeProvider_Compare(This,range,pRetVal) ( (This)->lpVtbl -> Compare(This,range,pRetVal) )
#define ITextRangeProvider_CompareEndpoints(This,endpoint,targetRange,targetEndpoint,pRetVal) ( (This)->lpVtbl -> CompareEndpoints(This,endpoint,targetRange,targetEndpoint,pRetVal) )
#define ITextRangeProvider_ExpandToEnclosingUnit(This,unit) ( (This)->lpVtbl -> ExpandToEnclosingUnit(This,unit) )
#define ITextRangeProvider_FindAttribute(This,attributeId,val,backward,pRetVal) ( (This)->lpVtbl -> FindAttribute(This,attributeId,val,backward,pRetVal) )
#define ITextRangeProvider_FindText(This,text,backward,ignoreCase,pRetVal) ( (This)->lpVtbl -> FindText(This,text,backward,ignoreCase,pRetVal) )
#define ITextRangeProvider_GetAttributeValue(This,attributeId,pRetVal) ( (This)->lpVtbl -> GetAttributeValue(This,attributeId,pRetVal) )
#define ITextRangeProvider_GetBoundingRectangles(This,pRetVal) ( (This)->lpVtbl -> GetBoundingRectangles(This,pRetVal) )
#define ITextRangeProvider_GetEnclosingElement(This,pRetVal) ( (This)->lpVtbl -> GetEnclosingElement(This,pRetVal) )
#define ITextRangeProvider_GetText(This,maxLength,pRetVal) ( (This)->lpVtbl -> GetText(This,maxLength,pRetVal) )
#define ITextRangeProvider_Move(This,unit,count,pRetVal) ( (This)->lpVtbl -> Move(This,unit,count,pRetVal) )
#define ITextRangeProvider_MoveEndpointByUnit(This,endpoint,unit,count,pRetVal) ( (This)->lpVtbl -> MoveEndpointByUnit(This,endpoint,unit,count,pRetVal) )
#define ITextRangeProvider_MoveEndpointByRange(This,endpoint,targetRange,targetEndpoint) ( (This)->lpVtbl -> MoveEndpointByRange(This,endpoint,targetRange,targetEndpoint) )
#define ITextRangeProvider_Select(This) ( (This)->lpVtbl -> Select(This) )
#define ITextRangeProvider_AddToSelection(This) ( (This)->lpVtbl -> AddToSelection(This) )
#define ITextRangeProvider_RemoveFromSelection(This) ( (This)->lpVtbl -> RemoveFromSelection(This) )
#define ITextRangeProvider_ScrollIntoView(This,alignToTop) ( (This)->lpVtbl -> ScrollIntoView(This,alignToTop) )
#define ITextRangeProvider_GetChildren(This,pRetVal) ( (This)->lpVtbl -> GetChildren(This,pRetVal) )
#endif
#endif
#ifndef __ITextProvider_INTERFACE_DEFINED__
#define __ITextProvider_INTERFACE_DEFINED__
extern const IID IID_ITextProvider;
typedef struct ITextProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITextProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITextProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITextProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetSelection) (ITextProvider * This, SAFEARRAY * *pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetVisibleRanges) (ITextProvider * This, SAFEARRAY * *pRetVal);
	HRESULT(STDMETHODCALLTYPE * RangeFromChild) (ITextProvider * This, IRawElementProviderSimple * childElement, ITextRangeProvider ** pRetVal);
	HRESULT(STDMETHODCALLTYPE * RangeFromPoint) (ITextProvider * This, struct UiaPoint point, ITextRangeProvider ** pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_DocumentRange) (ITextProvider * This, ITextRangeProvider ** pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_SupportedTextSelection) (ITextProvider * This, enum SupportedTextSelection * pRetVal);
	END_INTERFACE
}  ITextProviderVtbl;
interface ITextProvider
{
	CONST_VTBL struct ITextProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITextProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITextProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITextProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITextProvider_GetSelection(This,pRetVal) ( (This)->lpVtbl -> GetSelection(This,pRetVal) )
#define ITextProvider_GetVisibleRanges(This,pRetVal) ( (This)->lpVtbl -> GetVisibleRanges(This,pRetVal) )
#define ITextProvider_RangeFromChild(This,childElement,pRetVal) ( (This)->lpVtbl -> RangeFromChild(This,childElement,pRetVal) )
#define ITextProvider_RangeFromPoint(This,point,pRetVal) ( (This)->lpVtbl -> RangeFromPoint(This,point,pRetVal) )
#define ITextProvider_get_DocumentRange(This,pRetVal) ( (This)->lpVtbl -> get_DocumentRange(This,pRetVal) )
#define ITextProvider_get_SupportedTextSelection(This,pRetVal) ( (This)->lpVtbl -> get_SupportedTextSelection(This,pRetVal) )
#endif
#endif
#ifndef __IUIAutomationPatternInstance_INTERFACE_DEFINED__
#define __IUIAutomationPatternInstance_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationPatternInstance;
typedef struct IUIAutomationPatternInstanceVtbl
{
	BEGIN_INTERFACE
		HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationPatternInstance * This, REFIID riid, void **ppvObject);
		ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationPatternInstance * This);
		ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationPatternInstance * This);
		HRESULT(STDMETHODCALLTYPE * GetProperty) (IUIAutomationPatternInstance * This, UINT index, BOOL cached, enum UIAutomationType type, void *pPtr);
		HRESULT(STDMETHODCALLTYPE * CallMethod) (IUIAutomationPatternInstance * This, UINT index, const struct UIAutomationParameter * pParams, UINT cParams);
		END_INTERFACE
}  IUIAutomationPatternInstanceVtbl;
interface IUIAutomationPatternInstance
{
	CONST_VTBL struct IUIAutomationPatternInstanceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationPatternInstance_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationPatternInstance_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationPatternInstance_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationPatternInstance_GetProperty(This,index,cached,type,pPtr) ( (This)->lpVtbl -> GetProperty(This,index,cached,type,pPtr) )
#define IUIAutomationPatternInstance_CallMethod(This,index,pParams,cParams) ( (This)->lpVtbl -> CallMethod(This,index,pParams,cParams) )
#endif
#endif
#ifndef __IUIAutomationPatternHandler_INTERFACE_DEFINED__
#define __IUIAutomationPatternHandler_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationPatternHandler;
typedef struct IUIAutomationPatternHandlerVtbl
{
	BEGIN_INTERFACE
		HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationPatternHandler * This, REFIID riid, void **ppvObject);
		ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationPatternHandler * This);
		ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationPatternHandler * This);
		HRESULT(STDMETHODCALLTYPE * CreateClientWrapper) (IUIAutomationPatternHandler * This, IUIAutomationPatternInstance * pPatternInstance, IUnknown ** pClientWrapper);
		HRESULT(STDMETHODCALLTYPE * Dispatch) (IUIAutomationPatternHandler * This, IUnknown * pTarget, UINT index, const struct UIAutomationParameter * pParams, UINT cParams);
		END_INTERFACE
}  IUIAutomationPatternHandlerVtbl;
interface IUIAutomationPatternHandler
{
	CONST_VTBL struct IUIAutomationPatternHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationPatternHandler_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationPatternHandler_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationPatternHandler_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationPatternHandler_CreateClientWrapper(This,pPatternInstance,pClientWrapper) ( (This)->lpVtbl -> CreateClientWrapper(This,pPatternInstance,pClientWrapper) )
#define IUIAutomationPatternHandler_Dispatch(This,pTarget,index,pParams,cParams) ( (This)->lpVtbl -> Dispatch(This,pTarget,index,pParams,cParams) )
#endif
#endif
#ifndef __IUIAutomationRegistrar_INTERFACE_DEFINED__
#define __IUIAutomationRegistrar_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationRegistrar;
typedef struct IUIAutomationRegistrarVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationRegistrar * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationRegistrar * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationRegistrar * This);
	HRESULT(STDMETHODCALLTYPE * RegisterProperty) (IUIAutomationRegistrar * This, const struct UIAutomationPropertyInfo * property, PROPERTYID * propertyId);
	HRESULT(STDMETHODCALLTYPE * RegisterEvent) (IUIAutomationRegistrar * This, const struct UIAutomationEventInfo * event, EVENTID * eventId);
	HRESULT(STDMETHODCALLTYPE * RegisterPattern) (IUIAutomationRegistrar * This, const struct UIAutomationPatternInfo * pattern, PATTERNID * pPatternId, PROPERTYID * pPatternAvailablePropertyId, UINT propertyIdCount, PROPERTYID * pPropertyIds, UINT eventIdCount, EVENTID * pEventIds);
	END_INTERFACE
}  IUIAutomationRegistrarVtbl;
interface IUIAutomationRegistrar
{
	CONST_VTBL struct IUIAutomationRegistrarVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationRegistrar_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationRegistrar_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationRegistrar_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationRegistrar_RegisterProperty(This,property,propertyId) ( (This)->lpVtbl -> RegisterProperty(This,property,propertyId) )
#define IUIAutomationRegistrar_RegisterEvent(This,event,eventId) ( (This)->lpVtbl -> RegisterEvent(This,event,eventId) )
#define IUIAutomationRegistrar_RegisterPattern(This,pattern,pPatternId,pPatternAvailablePropertyId,propertyIdCount,pPropertyIds,eventIdCount,pEventIds) ( (This)->lpVtbl -> RegisterPattern(This,pattern,pPatternId,pPatternAvailablePropertyId,propertyIdCount,pPropertyIds,eventIdCount,pEventIds) )
#endif
#endif
extern const CLSID CLSID_CUIAutomationRegistrar;
#endif
#endif
