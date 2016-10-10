/*+@@file@@----------------------------------------------------------------*//*!
 \file		UIAutomationClient.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 14:56:24 2016
 \date		Modified on Sat Sep 17 14:56:24 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __uiautomationclient_h__
#define __uiautomationclient_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IUIAutomationElement_FWD_DEFINED__
#define __IUIAutomationElement_FWD_DEFINED__
typedef interface IUIAutomationElement IUIAutomationElement;
#endif
#ifndef __IUIAutomationElementArray_FWD_DEFINED__
#define __IUIAutomationElementArray_FWD_DEFINED__
typedef interface IUIAutomationElementArray IUIAutomationElementArray;
#endif
#ifndef __IUIAutomationCondition_FWD_DEFINED__
#define __IUIAutomationCondition_FWD_DEFINED__
typedef interface IUIAutomationCondition IUIAutomationCondition;
#endif
#ifndef __IUIAutomationBoolCondition_FWD_DEFINED__
#define __IUIAutomationBoolCondition_FWD_DEFINED__
typedef interface IUIAutomationBoolCondition IUIAutomationBoolCondition;
#endif
#ifndef __IUIAutomationPropertyCondition_FWD_DEFINED__
#define __IUIAutomationPropertyCondition_FWD_DEFINED__
typedef interface IUIAutomationPropertyCondition IUIAutomationPropertyCondition;
#endif
#ifndef __IUIAutomationAndCondition_FWD_DEFINED__
#define __IUIAutomationAndCondition_FWD_DEFINED__
typedef interface IUIAutomationAndCondition IUIAutomationAndCondition;
#endif
#ifndef __IUIAutomationOrCondition_FWD_DEFINED__
#define __IUIAutomationOrCondition_FWD_DEFINED__
typedef interface IUIAutomationOrCondition IUIAutomationOrCondition;
#endif
#ifndef __IUIAutomationNotCondition_FWD_DEFINED__
#define __IUIAutomationNotCondition_FWD_DEFINED__
typedef interface IUIAutomationNotCondition IUIAutomationNotCondition;
#endif
#ifndef __IUIAutomationCacheRequest_FWD_DEFINED__
#define __IUIAutomationCacheRequest_FWD_DEFINED__
typedef interface IUIAutomationCacheRequest IUIAutomationCacheRequest;
#endif
#ifndef __IUIAutomationTreeWalker_FWD_DEFINED__
#define __IUIAutomationTreeWalker_FWD_DEFINED__
typedef interface IUIAutomationTreeWalker IUIAutomationTreeWalker;
#endif
#ifndef __IUIAutomationEventHandler_FWD_DEFINED__
#define __IUIAutomationEventHandler_FWD_DEFINED__
typedef interface IUIAutomationEventHandler IUIAutomationEventHandler;
#endif
#ifndef __IUIAutomationPropertyChangedEventHandler_FWD_DEFINED__
#define __IUIAutomationPropertyChangedEventHandler_FWD_DEFINED__
typedef interface IUIAutomationPropertyChangedEventHandler IUIAutomationPropertyChangedEventHandler;
#endif
#ifndef __IUIAutomationStructureChangedEventHandler_FWD_DEFINED__
#define __IUIAutomationStructureChangedEventHandler_FWD_DEFINED__
typedef interface IUIAutomationStructureChangedEventHandler IUIAutomationStructureChangedEventHandler;
#endif
#ifndef __IUIAutomationFocusChangedEventHandler_FWD_DEFINED__
#define __IUIAutomationFocusChangedEventHandler_FWD_DEFINED__
typedef interface IUIAutomationFocusChangedEventHandler IUIAutomationFocusChangedEventHandler;
#endif
#ifndef __IUIAutomationInvokePattern_FWD_DEFINED__
#define __IUIAutomationInvokePattern_FWD_DEFINED__
typedef interface IUIAutomationInvokePattern IUIAutomationInvokePattern;
#endif
#ifndef __IUIAutomationDockPattern_FWD_DEFINED__
#define __IUIAutomationDockPattern_FWD_DEFINED__
typedef interface IUIAutomationDockPattern IUIAutomationDockPattern;
#endif
#ifndef __IUIAutomationExpandCollapsePattern_FWD_DEFINED__
#define __IUIAutomationExpandCollapsePattern_FWD_DEFINED__
typedef interface IUIAutomationExpandCollapsePattern IUIAutomationExpandCollapsePattern;
#endif
#ifndef __IUIAutomationGridPattern_FWD_DEFINED__
#define __IUIAutomationGridPattern_FWD_DEFINED__
typedef interface IUIAutomationGridPattern IUIAutomationGridPattern;
#endif
#ifndef __IUIAutomationGridItemPattern_FWD_DEFINED__
#define __IUIAutomationGridItemPattern_FWD_DEFINED__
typedef interface IUIAutomationGridItemPattern IUIAutomationGridItemPattern;
#endif
#ifndef __IUIAutomationMultipleViewPattern_FWD_DEFINED__
#define __IUIAutomationMultipleViewPattern_FWD_DEFINED__
typedef interface IUIAutomationMultipleViewPattern IUIAutomationMultipleViewPattern;
#endif
#ifndef __IUIAutomationRangeValuePattern_FWD_DEFINED__
#define __IUIAutomationRangeValuePattern_FWD_DEFINED__
typedef interface IUIAutomationRangeValuePattern IUIAutomationRangeValuePattern;
#endif
#ifndef __IUIAutomationScrollPattern_FWD_DEFINED__
#define __IUIAutomationScrollPattern_FWD_DEFINED__
typedef interface IUIAutomationScrollPattern IUIAutomationScrollPattern;
#endif
#ifndef __IUIAutomationScrollItemPattern_FWD_DEFINED__
#define __IUIAutomationScrollItemPattern_FWD_DEFINED__
typedef interface IUIAutomationScrollItemPattern IUIAutomationScrollItemPattern;
#endif
#ifndef __IUIAutomationSelectionPattern_FWD_DEFINED__
#define __IUIAutomationSelectionPattern_FWD_DEFINED__
typedef interface IUIAutomationSelectionPattern IUIAutomationSelectionPattern;
#endif
#ifndef __IUIAutomationSelectionItemPattern_FWD_DEFINED__
#define __IUIAutomationSelectionItemPattern_FWD_DEFINED__
typedef interface IUIAutomationSelectionItemPattern IUIAutomationSelectionItemPattern;
#endif
#ifndef __IUIAutomationSynchronizedInputPattern_FWD_DEFINED__
#define __IUIAutomationSynchronizedInputPattern_FWD_DEFINED__
typedef interface IUIAutomationSynchronizedInputPattern IUIAutomationSynchronizedInputPattern;
#endif
#ifndef __IUIAutomationTablePattern_FWD_DEFINED__
#define __IUIAutomationTablePattern_FWD_DEFINED__
typedef interface IUIAutomationTablePattern IUIAutomationTablePattern;
#endif
#ifndef __IUIAutomationTableItemPattern_FWD_DEFINED__
#define __IUIAutomationTableItemPattern_FWD_DEFINED__
typedef interface IUIAutomationTableItemPattern IUIAutomationTableItemPattern;
#endif
#ifndef __IUIAutomationTogglePattern_FWD_DEFINED__
#define __IUIAutomationTogglePattern_FWD_DEFINED__
typedef interface IUIAutomationTogglePattern IUIAutomationTogglePattern;
#endif
#ifndef __IUIAutomationTransformPattern_FWD_DEFINED__
#define __IUIAutomationTransformPattern_FWD_DEFINED__
typedef interface IUIAutomationTransformPattern IUIAutomationTransformPattern;
#endif
#ifndef __IUIAutomationValuePattern_FWD_DEFINED__
#define __IUIAutomationValuePattern_FWD_DEFINED__
typedef interface IUIAutomationValuePattern IUIAutomationValuePattern;
#endif
#ifndef __IUIAutomationWindowPattern_FWD_DEFINED__
#define __IUIAutomationWindowPattern_FWD_DEFINED__
typedef interface IUIAutomationWindowPattern IUIAutomationWindowPattern;
#endif
#ifndef __IUIAutomationTextRange_FWD_DEFINED__
#define __IUIAutomationTextRange_FWD_DEFINED__
typedef interface IUIAutomationTextRange IUIAutomationTextRange;
#endif
#ifndef __IUIAutomationTextRangeArray_FWD_DEFINED__
#define __IUIAutomationTextRangeArray_FWD_DEFINED__
typedef interface IUIAutomationTextRangeArray IUIAutomationTextRangeArray;
#endif
#ifndef __IUIAutomationTextPattern_FWD_DEFINED__
#define __IUIAutomationTextPattern_FWD_DEFINED__
typedef interface IUIAutomationTextPattern IUIAutomationTextPattern;
#endif
#ifndef __IUIAutomationLegacyIAccessiblePattern_FWD_DEFINED__
#define __IUIAutomationLegacyIAccessiblePattern_FWD_DEFINED__
typedef interface IUIAutomationLegacyIAccessiblePattern IUIAutomationLegacyIAccessiblePattern;
#endif
#ifndef __IUIAutomationItemContainerPattern_FWD_DEFINED__
#define __IUIAutomationItemContainerPattern_FWD_DEFINED__
typedef interface IUIAutomationItemContainerPattern IUIAutomationItemContainerPattern;
#endif
#ifndef __IUIAutomationVirtualizedItemPattern_FWD_DEFINED__
#define __IUIAutomationVirtualizedItemPattern_FWD_DEFINED__
typedef interface IUIAutomationVirtualizedItemPattern IUIAutomationVirtualizedItemPattern;
#endif
#ifndef __IUIAutomationProxyFactory_FWD_DEFINED__
#define __IUIAutomationProxyFactory_FWD_DEFINED__
typedef interface IUIAutomationProxyFactory IUIAutomationProxyFactory;
#endif
#ifndef __IUIAutomationProxyFactoryEntry_FWD_DEFINED__
#define __IUIAutomationProxyFactoryEntry_FWD_DEFINED__
typedef interface IUIAutomationProxyFactoryEntry IUIAutomationProxyFactoryEntry;
#endif
#ifndef __IUIAutomationProxyFactoryMapping_FWD_DEFINED__
#define __IUIAutomationProxyFactoryMapping_FWD_DEFINED__
typedef interface IUIAutomationProxyFactoryMapping IUIAutomationProxyFactoryMapping;
#endif
#ifndef __IUIAutomation_FWD_DEFINED__
#define __IUIAutomation_FWD_DEFINED__
typedef interface IUIAutomation IUIAutomation;
#endif
#ifndef __CUIAutomation_FWD_DEFINED__
#define __CUIAutomation_FWD_DEFINED__
typedef struct CUIAutomation CUIAutomation;
#endif
#include "UIAutomationCore.h"
typedef enum TreeScope
{
	TreeScope_Element = 0x1,
	TreeScope_Children = 0x2,
	TreeScope_Descendants = 0x4,
	TreeScope_Parent = 0x8,
	TreeScope_Ancestors = 0x10,
	TreeScope_Subtree = ((TreeScope_Element | TreeScope_Children) | TreeScope_Descendants)
} TreeScope;
typedef enum PropertyConditionFlags
{
	PropertyConditionFlags_None = 0,
	PropertyConditionFlags_IgnoreCase = 0x1
} PropertyConditionFlags;
typedef enum AutomationElementMode
{
	AutomationElementMode_None = 0,
	AutomationElementMode_Full = (AutomationElementMode_None + 1)
} AutomationElementMode;
typedef void *UIA_HWND;
extern RPC_IF_HANDLE __MIDL_itf_uiautomationclient_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_uiautomationclient_0000_0000_v0_0_s_ifspec;
#ifndef __UIAutomationClient_LIBRARY_DEFINED__
#define __UIAutomationClient_LIBRARY_DEFINED__
extern const IID LIBID_UIAutomationClient;
#ifndef __UIA_PatternIds_MODULE_DEFINED__
#define __UIA_PatternIds_MODULE_DEFINED__
enum __UIA_PatternIds
{
	UIA_InvokePatternId = 10000,
	UIA_SelectionPatternId = 10001,
	UIA_ValuePatternId = 10002,
	UIA_RangeValuePatternId = 10003,
	UIA_ScrollPatternId = 10004,
	UIA_ExpandCollapsePatternId = 10005,
	UIA_GridPatternId = 10006,
	UIA_GridItemPatternId = 10007,
	UIA_MultipleViewPatternId = 10008,
	UIA_WindowPatternId = 10009,
	UIA_SelectionItemPatternId = 10010,
	UIA_DockPatternId = 10011,
	UIA_TablePatternId = 10012,
	UIA_TableItemPatternId = 10013,
	UIA_TextPatternId = 10014,
	UIA_TogglePatternId = 10015,
	UIA_TransformPatternId = 10016,
	UIA_ScrollItemPatternId = 10017,
	UIA_LegacyIAccessiblePatternId = 10018,
	UIA_ItemContainerPatternId = 10019,
	UIA_VirtualizedItemPatternId = 10020,
	UIA_SynchronizedInputPatternId = 10021,
#endif
#ifndef __UIA_EventIds_MODULE_DEFINED__
#define __UIA_EventIds_MODULE_DEFINED__
	UIA_ToolTipOpenedEventId = 20000,
	UIA_ToolTipClosedEventId = 20001,
	UIA_StructureChangedEventId = 20002,
	UIA_MenuOpenedEventId = 20003,
	UIA_AutomationPropertyChangedEventId = 20004,
	UIA_AutomationFocusChangedEventId = 20005,
	UIA_AsyncContentLoadedEventId = 20006,
	UIA_MenuClosedEventId = 20007,
	UIA_LayoutInvalidatedEventId = 20008,
	UIA_Invoke_InvokedEventId = 20009,
	UIA_SelectionItem_ElementAddedToSelectionEventId = 20010,
	UIA_SelectionItem_ElementRemovedFromSelectionEventId = 20011,
	UIA_SelectionItem_ElementSelectedEventId = 20012,
	UIA_Selection_InvalidatedEventId = 20013,
	UIA_Text_TextSelectionChangedEventId = 20014,
	UIA_Text_TextChangedEventId = 20015,
	UIA_Window_WindowOpenedEventId = 20016,
	UIA_Window_WindowClosedEventId = 20017,
	UIA_MenuModeStartEventId = 20018,
	UIA_MenuModeEndEventId = 20019,
	UIA_InputReachedTargetEventId = 20020,
	UIA_InputReachedOtherElementEventId = 20021,
	UIA_InputDiscardedEventId = 20022,
#endif
#ifndef __UIA_PropertyIds_MODULE_DEFINED__
#define __UIA_PropertyIds_MODULE_DEFINED__
	UIA_RuntimeIdPropertyId = 30000,
	UIA_BoundingRectanglePropertyId = 30001,
	UIA_ProcessIdPropertyId = 30002,
	UIA_ControlTypePropertyId = 30003,
	UIA_LocalizedControlTypePropertyId = 30004,
	UIA_NamePropertyId = 30005,
	UIA_AcceleratorKeyPropertyId = 30006,
	UIA_AccessKeyPropertyId = 30007,
	UIA_HasKeyboardFocusPropertyId = 30008,
	UIA_IsKeyboardFocusablePropertyId = 30009,
	UIA_IsEnabledPropertyId = 30010,
	UIA_AutomationIdPropertyId = 30011,
	UIA_ClassNamePropertyId = 30012,
	UIA_HelpTextPropertyId = 30013,
	UIA_ClickablePointPropertyId = 30014,
	UIA_CulturePropertyId = 30015,
	UIA_IsControlElementPropertyId = 30016,
	UIA_IsContentElementPropertyId = 30017,
	UIA_LabeledByPropertyId = 30018,
	UIA_IsPasswordPropertyId = 30019,
	UIA_NativeWindowHandlePropertyId = 30020,
	UIA_ItemTypePropertyId = 30021,
	UIA_IsOffscreenPropertyId = 30022,
	UIA_OrientationPropertyId = 30023,
	UIA_FrameworkIdPropertyId = 30024,
	UIA_IsRequiredForFormPropertyId = 30025,
	UIA_ItemStatusPropertyId = 30026,
	UIA_IsDockPatternAvailablePropertyId = 30027,
	UIA_IsExpandCollapsePatternAvailablePropertyId = 30028,
	UIA_IsGridItemPatternAvailablePropertyId = 30029,
	UIA_IsGridPatternAvailablePropertyId = 30030,
	UIA_IsInvokePatternAvailablePropertyId = 30031,
	UIA_IsMultipleViewPatternAvailablePropertyId = 30032,
	UIA_IsRangeValuePatternAvailablePropertyId = 30033,
	UIA_IsScrollPatternAvailablePropertyId = 30034,
	UIA_IsScrollItemPatternAvailablePropertyId = 30035,
	UIA_IsSelectionItemPatternAvailablePropertyId = 30036,
	UIA_IsSelectionPatternAvailablePropertyId = 30037,
	UIA_IsTablePatternAvailablePropertyId = 30038,
	UIA_IsTableItemPatternAvailablePropertyId = 30039,
	UIA_IsTextPatternAvailablePropertyId = 30040,
	UIA_IsTogglePatternAvailablePropertyId = 30041,
	UIA_IsTransformPatternAvailablePropertyId = 30042,
	UIA_IsValuePatternAvailablePropertyId = 30043,
	UIA_IsWindowPatternAvailablePropertyId = 30044,
	UIA_ValueValuePropertyId = 30045,
	UIA_ValueIsReadOnlyPropertyId = 30046,
	UIA_RangeValueValuePropertyId = 30047,
	UIA_RangeValueIsReadOnlyPropertyId = 30048,
	UIA_RangeValueMinimumPropertyId = 30049,
	UIA_RangeValueMaximumPropertyId = 30050,
	UIA_RangeValueLargeChangePropertyId = 30051,
	UIA_RangeValueSmallChangePropertyId = 30052,
	UIA_ScrollHorizontalScrollPercentPropertyId = 30053,
	UIA_ScrollHorizontalViewSizePropertyId = 30054,
	UIA_ScrollVerticalScrollPercentPropertyId = 30055,
	UIA_ScrollVerticalViewSizePropertyId = 30056,
	UIA_ScrollHorizontallyScrollablePropertyId = 30057,
	UIA_ScrollVerticallyScrollablePropertyId = 30058,
	UIA_SelectionSelectionPropertyId = 30059,
	UIA_SelectionCanSelectMultiplePropertyId = 30060,
	UIA_SelectionIsSelectionRequiredPropertyId = 30061,
	UIA_GridRowCountPropertyId = 30062,
	UIA_GridColumnCountPropertyId = 30063,
	UIA_GridItemRowPropertyId = 30064,
	UIA_GridItemColumnPropertyId = 30065,
	UIA_GridItemRowSpanPropertyId = 30066,
	UIA_GridItemColumnSpanPropertyId = 30067,
	UIA_GridItemContainingGridPropertyId = 30068,
	UIA_DockDockPositionPropertyId = 30069,
	UIA_ExpandCollapseExpandCollapseStatePropertyId = 30070,
	UIA_MultipleViewCurrentViewPropertyId = 30071,
	UIA_MultipleViewSupportedViewsPropertyId = 30072,
	UIA_WindowCanMaximizePropertyId = 30073,
	UIA_WindowCanMinimizePropertyId = 30074,
	UIA_WindowWindowVisualStatePropertyId = 30075,
	UIA_WindowWindowInteractionStatePropertyId = 30076,
	UIA_WindowIsModalPropertyId = 30077,
	UIA_WindowIsTopmostPropertyId = 30078,
	UIA_SelectionItemIsSelectedPropertyId = 30079,
	UIA_SelectionItemSelectionContainerPropertyId = 30080,
	UIA_TableRowHeadersPropertyId = 30081,
	UIA_TableColumnHeadersPropertyId = 30082,
	UIA_TableRowOrColumnMajorPropertyId = 30083,
	UIA_TableItemRowHeaderItemsPropertyId = 30084,
	UIA_TableItemColumnHeaderItemsPropertyId = 30085,
	UIA_ToggleToggleStatePropertyId = 30086,
	UIA_TransformCanMovePropertyId = 30087,
	UIA_TransformCanResizePropertyId = 30088,
	UIA_TransformCanRotatePropertyId = 30089,
	UIA_IsLegacyIAccessiblePatternAvailablePropertyId = 30090,
	UIA_LegacyIAccessibleChildIdPropertyId = 30091,
	UIA_LegacyIAccessibleNamePropertyId = 30092,
	UIA_LegacyIAccessibleValuePropertyId = 30093,
	UIA_LegacyIAccessibleDescriptionPropertyId = 30094,
	UIA_LegacyIAccessibleRolePropertyId = 30095,
	UIA_LegacyIAccessibleStatePropertyId = 30096,
	UIA_LegacyIAccessibleHelpPropertyId = 30097,
	UIA_LegacyIAccessibleKeyboardShortcutPropertyId = 30098,
	UIA_LegacyIAccessibleSelectionPropertyId = 30099,
	UIA_LegacyIAccessibleDefaultActionPropertyId = 30100,
	UIA_AriaRolePropertyId = 30101,
	UIA_AriaPropertiesPropertyId = 30102,
	UIA_IsDataValidForFormPropertyId = 30103,
	UIA_ControllerForPropertyId = 30104,
	UIA_DescribedByPropertyId = 30105,
	UIA_FlowsToPropertyId = 30106,
	UIA_ProviderDescriptionPropertyId = 30107,
	UIA_IsItemContainerPatternAvailablePropertyId = 30108,
	UIA_IsVirtualizedItemPatternAvailablePropertyId = 30109,
	UIA_IsSynchronizedInputPatternAvailablePropertyId = 30110,
#endif
#ifndef __UIA_TextAttributeIds_MODULE_DEFINED__
#define __UIA_TextAttributeIds_MODULE_DEFINED__
	UIA_AnimationStyleAttributeId = 40000,
	UIA_BackgroundColorAttributeId = 40001,
	UIA_BulletStyleAttributeId = 40002,
	UIA_CapStyleAttributeId = 40003,
	UIA_CultureAttributeId = 40004,
	UIA_FontNameAttributeId = 40005,
	UIA_FontSizeAttributeId = 40006,
	UIA_FontWeightAttributeId = 40007,
	UIA_ForegroundColorAttributeId = 40008,
	UIA_HorizontalTextAlignmentAttributeId = 40009,
	UIA_IndentationFirstLineAttributeId = 40010,
	UIA_IndentationLeadingAttributeId = 40011,
	UIA_IndentationTrailingAttributeId = 40012,
	UIA_IsHiddenAttributeId = 40013,
	UIA_IsItalicAttributeId = 40014,
	UIA_IsReadOnlyAttributeId = 40015,
	UIA_IsSubscriptAttributeId = 40016,
	UIA_IsSuperscriptAttributeId = 40017,
	UIA_MarginBottomAttributeId = 40018,
	UIA_MarginLeadingAttributeId = 40019,
	UIA_MarginTopAttributeId = 40020,
	UIA_MarginTrailingAttributeId = 40021,
	UIA_OutlineStylesAttributeId = 40022,
	UIA_OverlineColorAttributeId = 40023,
	UIA_OverlineStyleAttributeId = 40024,
	UIA_StrikethroughColorAttributeId = 40025,
	UIA_StrikethroughStyleAttributeId = 40026,
	UIA_TabsAttributeId = 40027,
	UIA_TextFlowDirectionsAttributeId = 40028,
	UIA_UnderlineColorAttributeId = 40029,
	UIA_UnderlineStyleAttributeId = 40030,
#endif
#ifndef __UIA_ControlTypeIds_MODULE_DEFINED__
#define __UIA_ControlTypeIds_MODULE_DEFINED__
	UIA_ButtonControlTypeId = 50000,
	UIA_CalendarControlTypeId = 50001,
	UIA_CheckBoxControlTypeId = 50002,
	UIA_ComboBoxControlTypeId = 50003,
	UIA_EditControlTypeId = 50004,
	UIA_HyperlinkControlTypeId = 50005,
	UIA_ImageControlTypeId = 50006,
	UIA_ListItemControlTypeId = 50007,
	UIA_ListControlTypeId = 50008,
	UIA_MenuControlTypeId = 50009,
	UIA_MenuBarControlTypeId = 50010,
	UIA_MenuItemControlTypeId = 50011,
	UIA_ProgressBarControlTypeId = 50012,
	UIA_RadioButtonControlTypeId = 50013,
	UIA_ScrollBarControlTypeId = 50014,
	UIA_SliderControlTypeId = 50015,
	UIA_SpinnerControlTypeId = 50016,
	UIA_StatusBarControlTypeId = 50017,
	UIA_TabControlTypeId = 50018,
	UIA_TabItemControlTypeId = 50019,
	UIA_TextControlTypeId = 50020,
	UIA_ToolBarControlTypeId = 50021,
	UIA_ToolTipControlTypeId = 50022,
	UIA_TreeControlTypeId = 50023,
	UIA_TreeItemControlTypeId = 50024,
	UIA_CustomControlTypeId = 50025,
	UIA_GroupControlTypeId = 50026,
	UIA_ThumbControlTypeId = 50027,
	UIA_DataGridControlTypeId = 50028,
	UIA_DataItemControlTypeId = 50029,
	UIA_DocumentControlTypeId = 50030,
	UIA_SplitButtonControlTypeId = 50031,
	UIA_WindowControlTypeId = 50032,
	UIA_PaneControlTypeId = 50033,
	UIA_HeaderControlTypeId = 50034,
	UIA_HeaderItemControlTypeId = 50035,
	UIA_TableControlTypeId = 50036,
	UIA_TitleBarControlTypeId = 50037,
	UIA_SeparatorControlTypeId = 50038,
#endif
};
#ifndef __IUIAutomationElement_INTERFACE_DEFINED__
#define __IUIAutomationElement_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationElement;
typedef struct IUIAutomationElementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationElement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationElement * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationElement * This);
	HRESULT(STDMETHODCALLTYPE * SetFocus) (IUIAutomationElement * This);
	HRESULT(STDMETHODCALLTYPE * GetRuntimeId) (IUIAutomationElement * This, SAFEARRAY * *runtimeId);
	HRESULT(STDMETHODCALLTYPE * FindFirst) (IUIAutomationElement * This, enum TreeScope scope, IUIAutomationCondition * condition, IUIAutomationElement ** found);
	HRESULT(STDMETHODCALLTYPE * FindAll) (IUIAutomationElement * This, enum TreeScope scope, IUIAutomationCondition * condition, IUIAutomationElementArray ** found);
	HRESULT(STDMETHODCALLTYPE * FindFirstBuildCache) (IUIAutomationElement * This, enum TreeScope scope, IUIAutomationCondition * condition, IUIAutomationCacheRequest * cacheRequest, IUIAutomationElement ** found);
	HRESULT(STDMETHODCALLTYPE * FindAllBuildCache) (IUIAutomationElement * This, enum TreeScope scope, IUIAutomationCondition * condition, IUIAutomationCacheRequest * cacheRequest, IUIAutomationElementArray ** found);
	HRESULT(STDMETHODCALLTYPE * BuildUpdatedCache) (IUIAutomationElement * This, IUIAutomationCacheRequest * cacheRequest, IUIAutomationElement ** updatedElement);
	HRESULT(STDMETHODCALLTYPE * GetCurrentPropertyValue) (IUIAutomationElement * This, PROPERTYID propertyId, VARIANT * retVal);
	HRESULT(STDMETHODCALLTYPE * GetCurrentPropertyValueEx) (IUIAutomationElement * This, PROPERTYID propertyId, BOOL ignoreDefaultValue, VARIANT * retVal);
	HRESULT(STDMETHODCALLTYPE * GetCachedPropertyValue) (IUIAutomationElement * This, PROPERTYID propertyId, VARIANT * retVal);
	HRESULT(STDMETHODCALLTYPE * GetCachedPropertyValueEx) (IUIAutomationElement * This, PROPERTYID propertyId, BOOL ignoreDefaultValue, VARIANT * retVal);
	HRESULT(STDMETHODCALLTYPE * GetCurrentPatternAs) (IUIAutomationElement * This, PATTERNID patternId, REFIID riid, void **patternObject);
	HRESULT(STDMETHODCALLTYPE * GetCachedPatternAs) (IUIAutomationElement * This, PATTERNID patternId, REFIID riid, void **patternObject);
	HRESULT(STDMETHODCALLTYPE * GetCurrentPattern) (IUIAutomationElement * This, PATTERNID patternId, IUnknown ** patternObject);
	HRESULT(STDMETHODCALLTYPE * GetCachedPattern) (IUIAutomationElement * This, PATTERNID patternId, IUnknown ** patternObject);
	HRESULT(STDMETHODCALLTYPE * GetCachedParent) (IUIAutomationElement * This, IUIAutomationElement ** parent);
	HRESULT(STDMETHODCALLTYPE * GetCachedChildren) (IUIAutomationElement * This, IUIAutomationElementArray ** children);
	HRESULT(STDMETHODCALLTYPE * get_CurrentProcessId) (IUIAutomationElement * This, int *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentControlType) (IUIAutomationElement * This, CONTROLTYPEID * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentLocalizedControlType) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentName) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentAcceleratorKey) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentAccessKey) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentHasKeyboardFocus) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentIsKeyboardFocusable) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentIsEnabled) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentAutomationId) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentClassName) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentHelpText) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentCulture) (IUIAutomationElement * This, int *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentIsControlElement) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentIsContentElement) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentIsPassword) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentNativeWindowHandle) (IUIAutomationElement * This, UIA_HWND * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentItemType) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentIsOffscreen) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentOrientation) (IUIAutomationElement * This, enum OrientationType * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentFrameworkId) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentIsRequiredForForm) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentItemStatus) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentBoundingRectangle) (IUIAutomationElement * This, RECT * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentLabeledBy) (IUIAutomationElement * This, IUIAutomationElement ** retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentAriaRole) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentAriaProperties) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentIsDataValidForForm) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentControllerFor) (IUIAutomationElement * This, IUIAutomationElementArray ** retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentDescribedBy) (IUIAutomationElement * This, IUIAutomationElementArray ** retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentFlowsTo) (IUIAutomationElement * This, IUIAutomationElementArray ** retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentProviderDescription) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedProcessId) (IUIAutomationElement * This, int *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedControlType) (IUIAutomationElement * This, CONTROLTYPEID * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedLocalizedControlType) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedName) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedAcceleratorKey) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedAccessKey) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedHasKeyboardFocus) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedIsKeyboardFocusable) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedIsEnabled) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedAutomationId) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedClassName) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedHelpText) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedCulture) (IUIAutomationElement * This, int *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedIsControlElement) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedIsContentElement) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedIsPassword) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedNativeWindowHandle) (IUIAutomationElement * This, UIA_HWND * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedItemType) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedIsOffscreen) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedOrientation) (IUIAutomationElement * This, enum OrientationType * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedFrameworkId) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedIsRequiredForForm) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedItemStatus) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedBoundingRectangle) (IUIAutomationElement * This, RECT * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedLabeledBy) (IUIAutomationElement * This, IUIAutomationElement ** retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedAriaRole) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedAriaProperties) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedIsDataValidForForm) (IUIAutomationElement * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedControllerFor) (IUIAutomationElement * This, IUIAutomationElementArray ** retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedDescribedBy) (IUIAutomationElement * This, IUIAutomationElementArray ** retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedFlowsTo) (IUIAutomationElement * This, IUIAutomationElementArray ** retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedProviderDescription) (IUIAutomationElement * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * GetClickablePoint) (IUIAutomationElement * This, POINT * clickable, BOOL * gotClickable);
	END_INTERFACE
}  IUIAutomationElementVtbl;
interface IUIAutomationElement
{
	CONST_VTBL struct IUIAutomationElementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationElement_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationElement_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationElement_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationElement_SetFocus(This) ( (This)->lpVtbl -> SetFocus(This) )
#define IUIAutomationElement_GetRuntimeId(This,runtimeId) ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) )
#define IUIAutomationElement_FindFirst(This,scope,condition,found) ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) )
#define IUIAutomationElement_FindAll(This,scope,condition,found) ( (This)->lpVtbl -> FindAll(This,scope,condition,found) )
#define IUIAutomationElement_FindFirstBuildCache(This,scope,condition,cacheRequest,found) ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) )
#define IUIAutomationElement_FindAllBuildCache(This,scope,condition,cacheRequest,found) ( (This)->lpVtbl -> FindAllBuildCache(This,scope,condition,cacheRequest,found) )
#define IUIAutomationElement_BuildUpdatedCache(This,cacheRequest,updatedElement) ( (This)->lpVtbl -> BuildUpdatedCache(This,cacheRequest,updatedElement) )
#define IUIAutomationElement_GetCurrentPropertyValue(This,propertyId,retVal) ( (This)->lpVtbl -> GetCurrentPropertyValue(This,propertyId,retVal) )
#define IUIAutomationElement_GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ( (This)->lpVtbl -> GetCurrentPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
#define IUIAutomationElement_GetCachedPropertyValue(This,propertyId,retVal) ( (This)->lpVtbl -> GetCachedPropertyValue(This,propertyId,retVal) )
#define IUIAutomationElement_GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) ( (This)->lpVtbl -> GetCachedPropertyValueEx(This,propertyId,ignoreDefaultValue,retVal) )
#define IUIAutomationElement_GetCurrentPatternAs(This,patternId,riid,patternObject) ( (This)->lpVtbl -> GetCurrentPatternAs(This,patternId,riid,patternObject) )
#define IUIAutomationElement_GetCachedPatternAs(This,patternId,riid,patternObject) ( (This)->lpVtbl -> GetCachedPatternAs(This,patternId,riid,patternObject) )
#define IUIAutomationElement_GetCurrentPattern(This,patternId,patternObject) ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) )
#define IUIAutomationElement_GetCachedPattern(This,patternId,patternObject) ( (This)->lpVtbl -> GetCachedPattern(This,patternId,patternObject) )
#define IUIAutomationElement_GetCachedParent(This,parent) ( (This)->lpVtbl -> GetCachedParent(This,parent) )
#define IUIAutomationElement_GetCachedChildren(This,children) ( (This)->lpVtbl -> GetCachedChildren(This,children) )
#define IUIAutomationElement_get_CurrentProcessId(This,retVal) ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) )
#define IUIAutomationElement_get_CurrentControlType(This,retVal) ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) )
#define IUIAutomationElement_get_CurrentLocalizedControlType(This,retVal) ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) )
#define IUIAutomationElement_get_CurrentName(This,retVal) ( (This)->lpVtbl -> get_CurrentName(This,retVal) )
#define IUIAutomationElement_get_CurrentAcceleratorKey(This,retVal) ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) )
#define IUIAutomationElement_get_CurrentAccessKey(This,retVal) ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) )
#define IUIAutomationElement_get_CurrentHasKeyboardFocus(This,retVal) ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) )
#define IUIAutomationElement_get_CurrentIsKeyboardFocusable(This,retVal) ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) )
#define IUIAutomationElement_get_CurrentIsEnabled(This,retVal) ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) )
#define IUIAutomationElement_get_CurrentAutomationId(This,retVal) ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) )
#define IUIAutomationElement_get_CurrentClassName(This,retVal) ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) )
#define IUIAutomationElement_get_CurrentHelpText(This,retVal) ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) )
#define IUIAutomationElement_get_CurrentCulture(This,retVal) ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) )
#define IUIAutomationElement_get_CurrentIsControlElement(This,retVal) ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) )
#define IUIAutomationElement_get_CurrentIsContentElement(This,retVal) ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) )
#define IUIAutomationElement_get_CurrentIsPassword(This,retVal) ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) )
#define IUIAutomationElement_get_CurrentNativeWindowHandle(This,retVal) ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) )
#define IUIAutomationElement_get_CurrentItemType(This,retVal) ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) )
#define IUIAutomationElement_get_CurrentIsOffscreen(This,retVal) ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) )
#define IUIAutomationElement_get_CurrentOrientation(This,retVal) ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) )
#define IUIAutomationElement_get_CurrentFrameworkId(This,retVal) ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) )
#define IUIAutomationElement_get_CurrentIsRequiredForForm(This,retVal) ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) )
#define IUIAutomationElement_get_CurrentItemStatus(This,retVal) ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) )
#define IUIAutomationElement_get_CurrentBoundingRectangle(This,retVal) ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,retVal) )
#define IUIAutomationElement_get_CurrentLabeledBy(This,retVal) ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) )
#define IUIAutomationElement_get_CurrentAriaRole(This,retVal) ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) )
#define IUIAutomationElement_get_CurrentAriaProperties(This,retVal) ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) )
#define IUIAutomationElement_get_CurrentIsDataValidForForm(This,retVal) ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) )
#define IUIAutomationElement_get_CurrentControllerFor(This,retVal) ( (This)->lpVtbl -> get_CurrentControllerFor(This,retVal) )
#define IUIAutomationElement_get_CurrentDescribedBy(This,retVal) ( (This)->lpVtbl -> get_CurrentDescribedBy(This,retVal) )
#define IUIAutomationElement_get_CurrentFlowsTo(This,retVal) ( (This)->lpVtbl -> get_CurrentFlowsTo(This,retVal) )
#define IUIAutomationElement_get_CurrentProviderDescription(This,retVal) ( (This)->lpVtbl -> get_CurrentProviderDescription(This,retVal) )
#define IUIAutomationElement_get_CachedProcessId(This,retVal) ( (This)->lpVtbl -> get_CachedProcessId(This,retVal) )
#define IUIAutomationElement_get_CachedControlType(This,retVal) ( (This)->lpVtbl -> get_CachedControlType(This,retVal) )
#define IUIAutomationElement_get_CachedLocalizedControlType(This,retVal) ( (This)->lpVtbl -> get_CachedLocalizedControlType(This,retVal) )
#define IUIAutomationElement_get_CachedName(This,retVal) ( (This)->lpVtbl -> get_CachedName(This,retVal) )
#define IUIAutomationElement_get_CachedAcceleratorKey(This,retVal) ( (This)->lpVtbl -> get_CachedAcceleratorKey(This,retVal) )
#define IUIAutomationElement_get_CachedAccessKey(This,retVal) ( (This)->lpVtbl -> get_CachedAccessKey(This,retVal) )
#define IUIAutomationElement_get_CachedHasKeyboardFocus(This,retVal) ( (This)->lpVtbl -> get_CachedHasKeyboardFocus(This,retVal) )
#define IUIAutomationElement_get_CachedIsKeyboardFocusable(This,retVal) ( (This)->lpVtbl -> get_CachedIsKeyboardFocusable(This,retVal) )
#define IUIAutomationElement_get_CachedIsEnabled(This,retVal) ( (This)->lpVtbl -> get_CachedIsEnabled(This,retVal) )
#define IUIAutomationElement_get_CachedAutomationId(This,retVal) ( (This)->lpVtbl -> get_CachedAutomationId(This,retVal) )
#define IUIAutomationElement_get_CachedClassName(This,retVal) ( (This)->lpVtbl -> get_CachedClassName(This,retVal) )
#define IUIAutomationElement_get_CachedHelpText(This,retVal) ( (This)->lpVtbl -> get_CachedHelpText(This,retVal) )
#define IUIAutomationElement_get_CachedCulture(This,retVal) ( (This)->lpVtbl -> get_CachedCulture(This,retVal) )
#define IUIAutomationElement_get_CachedIsControlElement(This,retVal) ( (This)->lpVtbl -> get_CachedIsControlElement(This,retVal) )
#define IUIAutomationElement_get_CachedIsContentElement(This,retVal) ( (This)->lpVtbl -> get_CachedIsContentElement(This,retVal) )
#define IUIAutomationElement_get_CachedIsPassword(This,retVal) ( (This)->lpVtbl -> get_CachedIsPassword(This,retVal) )
#define IUIAutomationElement_get_CachedNativeWindowHandle(This,retVal) ( (This)->lpVtbl -> get_CachedNativeWindowHandle(This,retVal) )
#define IUIAutomationElement_get_CachedItemType(This,retVal) ( (This)->lpVtbl -> get_CachedItemType(This,retVal) )
#define IUIAutomationElement_get_CachedIsOffscreen(This,retVal) ( (This)->lpVtbl -> get_CachedIsOffscreen(This,retVal) )
#define IUIAutomationElement_get_CachedOrientation(This,retVal) ( (This)->lpVtbl -> get_CachedOrientation(This,retVal) )
#define IUIAutomationElement_get_CachedFrameworkId(This,retVal) ( (This)->lpVtbl -> get_CachedFrameworkId(This,retVal) )
#define IUIAutomationElement_get_CachedIsRequiredForForm(This,retVal) ( (This)->lpVtbl -> get_CachedIsRequiredForForm(This,retVal) )
#define IUIAutomationElement_get_CachedItemStatus(This,retVal) ( (This)->lpVtbl -> get_CachedItemStatus(This,retVal) )
#define IUIAutomationElement_get_CachedBoundingRectangle(This,retVal) ( (This)->lpVtbl -> get_CachedBoundingRectangle(This,retVal) )
#define IUIAutomationElement_get_CachedLabeledBy(This,retVal) ( (This)->lpVtbl -> get_CachedLabeledBy(This,retVal) )
#define IUIAutomationElement_get_CachedAriaRole(This,retVal) ( (This)->lpVtbl -> get_CachedAriaRole(This,retVal) )
#define IUIAutomationElement_get_CachedAriaProperties(This,retVal) ( (This)->lpVtbl -> get_CachedAriaProperties(This,retVal) )
#define IUIAutomationElement_get_CachedIsDataValidForForm(This,retVal) ( (This)->lpVtbl -> get_CachedIsDataValidForForm(This,retVal) )
#define IUIAutomationElement_get_CachedControllerFor(This,retVal) ( (This)->lpVtbl -> get_CachedControllerFor(This,retVal) )
#define IUIAutomationElement_get_CachedDescribedBy(This,retVal) ( (This)->lpVtbl -> get_CachedDescribedBy(This,retVal) )
#define IUIAutomationElement_get_CachedFlowsTo(This,retVal) ( (This)->lpVtbl -> get_CachedFlowsTo(This,retVal) )
#define IUIAutomationElement_get_CachedProviderDescription(This,retVal) ( (This)->lpVtbl -> get_CachedProviderDescription(This,retVal) )
#define IUIAutomationElement_GetClickablePoint(This,clickable,gotClickable) ( (This)->lpVtbl -> GetClickablePoint(This,clickable,gotClickable) )
#endif
#endif
#ifndef __IUIAutomationElementArray_INTERFACE_DEFINED__
#define __IUIAutomationElementArray_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationElementArray;
typedef struct IUIAutomationElementArrayVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationElementArray * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationElementArray * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationElementArray * This);
	HRESULT(STDMETHODCALLTYPE * get_Length) (IUIAutomationElementArray * This, int *length);
	HRESULT(STDMETHODCALLTYPE * GetElement) (IUIAutomationElementArray * This, int index, IUIAutomationElement ** element);
	END_INTERFACE
}  IUIAutomationElementArrayVtbl;
interface IUIAutomationElementArray
{
	CONST_VTBL struct IUIAutomationElementArrayVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationElementArray_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationElementArray_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationElementArray_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationElementArray_get_Length(This,length) ( (This)->lpVtbl -> get_Length(This,length) )
#define IUIAutomationElementArray_GetElement(This,index,element) ( (This)->lpVtbl -> GetElement(This,index,element) )
#endif
#endif
#ifndef __IUIAutomationCondition_INTERFACE_DEFINED__
#define __IUIAutomationCondition_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationCondition;
typedef struct IUIAutomationConditionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationCondition * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationCondition * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationCondition * This);
	END_INTERFACE
}  IUIAutomationConditionVtbl;
interface IUIAutomationCondition
{
	CONST_VTBL struct IUIAutomationConditionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationCondition_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationCondition_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationCondition_Release(This) ( (This)->lpVtbl -> Release(This) )
#endif
#endif
#ifndef __IUIAutomationBoolCondition_INTERFACE_DEFINED__
#define __IUIAutomationBoolCondition_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationBoolCondition;
typedef struct IUIAutomationBoolConditionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationBoolCondition * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationBoolCondition * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationBoolCondition * This);
	HRESULT(STDMETHODCALLTYPE * get_BooleanValue) (IUIAutomationBoolCondition * This, BOOL * boolVal);
	END_INTERFACE
}  IUIAutomationBoolConditionVtbl;
interface IUIAutomationBoolCondition
{
	CONST_VTBL struct IUIAutomationBoolConditionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationBoolCondition_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationBoolCondition_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationBoolCondition_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationBoolCondition_get_BooleanValue(This,boolVal) ( (This)->lpVtbl -> get_BooleanValue(This,boolVal) )
#endif
#endif
#ifndef __IUIAutomationPropertyCondition_INTERFACE_DEFINED__
#define __IUIAutomationPropertyCondition_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationPropertyCondition;
typedef struct IUIAutomationPropertyConditionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationPropertyCondition * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationPropertyCondition * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationPropertyCondition * This);
	HRESULT(STDMETHODCALLTYPE * get_PropertyId) (IUIAutomationPropertyCondition * This, PROPERTYID * propertyId);
	HRESULT(STDMETHODCALLTYPE * get_PropertyValue) (IUIAutomationPropertyCondition * This, VARIANT * propertyValue);
	HRESULT(STDMETHODCALLTYPE * get_PropertyConditionFlags) (IUIAutomationPropertyCondition * This, enum PropertyConditionFlags * flags);
	END_INTERFACE
}  IUIAutomationPropertyConditionVtbl;
interface IUIAutomationPropertyCondition
{
	CONST_VTBL struct IUIAutomationPropertyConditionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationPropertyCondition_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationPropertyCondition_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationPropertyCondition_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationPropertyCondition_get_PropertyId(This,propertyId) ( (This)->lpVtbl -> get_PropertyId(This,propertyId) )
#define IUIAutomationPropertyCondition_get_PropertyValue(This,propertyValue) ( (This)->lpVtbl -> get_PropertyValue(This,propertyValue) )
#define IUIAutomationPropertyCondition_get_PropertyConditionFlags(This,flags) ( (This)->lpVtbl -> get_PropertyConditionFlags(This,flags) )
#endif
#endif
#ifndef __IUIAutomationAndCondition_INTERFACE_DEFINED__
#define __IUIAutomationAndCondition_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationAndCondition;
typedef struct IUIAutomationAndConditionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationAndCondition * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationAndCondition * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationAndCondition * This);
	HRESULT(STDMETHODCALLTYPE * get_ChildCount) (IUIAutomationAndCondition * This, int *childCount);
	HRESULT(STDMETHODCALLTYPE * GetChildrenAsNativeArray) (IUIAutomationAndCondition * This, IUIAutomationCondition *** childArray, int *childArrayCount);
	HRESULT(STDMETHODCALLTYPE * GetChildren) (IUIAutomationAndCondition * This, SAFEARRAY * *childArray);
	END_INTERFACE
}  IUIAutomationAndConditionVtbl;
interface IUIAutomationAndCondition
{
	CONST_VTBL struct IUIAutomationAndConditionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationAndCondition_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationAndCondition_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationAndCondition_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationAndCondition_get_ChildCount(This,childCount) ( (This)->lpVtbl -> get_ChildCount(This,childCount) )
#define IUIAutomationAndCondition_GetChildrenAsNativeArray(This,childArray,childArrayCount) ( (This)->lpVtbl -> GetChildrenAsNativeArray(This,childArray,childArrayCount) )
#define IUIAutomationAndCondition_GetChildren(This,childArray) ( (This)->lpVtbl -> GetChildren(This,childArray) )
#endif
#endif
#ifndef __IUIAutomationOrCondition_INTERFACE_DEFINED__
#define __IUIAutomationOrCondition_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationOrCondition;
typedef struct IUIAutomationOrConditionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationOrCondition * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationOrCondition * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationOrCondition * This);
	HRESULT(STDMETHODCALLTYPE * get_ChildCount) (IUIAutomationOrCondition * This, int *childCount);
	HRESULT(STDMETHODCALLTYPE * GetChildrenAsNativeArray) (IUIAutomationOrCondition * This, IUIAutomationCondition *** childArray, int *childArrayCount);
	HRESULT(STDMETHODCALLTYPE * GetChildren) (IUIAutomationOrCondition * This, SAFEARRAY * *childArray);
	END_INTERFACE
}  IUIAutomationOrConditionVtbl;
interface IUIAutomationOrCondition
{
	CONST_VTBL struct IUIAutomationOrConditionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationOrCondition_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationOrCondition_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationOrCondition_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationOrCondition_get_ChildCount(This,childCount) ( (This)->lpVtbl -> get_ChildCount(This,childCount) )
#define IUIAutomationOrCondition_GetChildrenAsNativeArray(This,childArray,childArrayCount) ( (This)->lpVtbl -> GetChildrenAsNativeArray(This,childArray,childArrayCount) )
#define IUIAutomationOrCondition_GetChildren(This,childArray) ( (This)->lpVtbl -> GetChildren(This,childArray) )
#endif
#endif
#ifndef __IUIAutomationNotCondition_INTERFACE_DEFINED__
#define __IUIAutomationNotCondition_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationNotCondition;
typedef struct IUIAutomationNotConditionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationNotCondition * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationNotCondition * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationNotCondition * This);
	HRESULT(STDMETHODCALLTYPE * GetChild) (IUIAutomationNotCondition * This, IUIAutomationCondition ** condition);
	END_INTERFACE
}  IUIAutomationNotConditionVtbl;
interface IUIAutomationNotCondition
{
	CONST_VTBL struct IUIAutomationNotConditionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationNotCondition_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationNotCondition_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationNotCondition_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationNotCondition_GetChild(This,condition) ( (This)->lpVtbl -> GetChild(This,condition) )
#endif
#endif
#ifndef __IUIAutomationCacheRequest_INTERFACE_DEFINED__
#define __IUIAutomationCacheRequest_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationCacheRequest;
typedef struct IUIAutomationCacheRequestVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationCacheRequest * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationCacheRequest * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationCacheRequest * This);
	HRESULT(STDMETHODCALLTYPE * AddProperty) (IUIAutomationCacheRequest * This, PROPERTYID propertyId);
	HRESULT(STDMETHODCALLTYPE * AddPattern) (IUIAutomationCacheRequest * This, PATTERNID patternId);
	HRESULT(STDMETHODCALLTYPE * Clone) (IUIAutomationCacheRequest * This, IUIAutomationCacheRequest ** clonedRequest);
	HRESULT(STDMETHODCALLTYPE * get_TreeScope) (IUIAutomationCacheRequest * This, enum TreeScope * scope);
	HRESULT(STDMETHODCALLTYPE * put_TreeScope) (IUIAutomationCacheRequest * This, enum TreeScope scope);
	HRESULT(STDMETHODCALLTYPE * get_TreeFilter) (IUIAutomationCacheRequest * This, IUIAutomationCondition ** filter);
	HRESULT(STDMETHODCALLTYPE * put_TreeFilter) (IUIAutomationCacheRequest * This, IUIAutomationCondition * filter);
	HRESULT(STDMETHODCALLTYPE * get_AutomationElementMode) (IUIAutomationCacheRequest * This, enum AutomationElementMode * mode);
	HRESULT(STDMETHODCALLTYPE * put_AutomationElementMode) (IUIAutomationCacheRequest * This, enum AutomationElementMode mode);
	END_INTERFACE
}  IUIAutomationCacheRequestVtbl;
interface IUIAutomationCacheRequest
{
	CONST_VTBL struct IUIAutomationCacheRequestVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationCacheRequest_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationCacheRequest_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationCacheRequest_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationCacheRequest_AddProperty(This,propertyId) ( (This)->lpVtbl -> AddProperty(This,propertyId) )
#define IUIAutomationCacheRequest_AddPattern(This,patternId) ( (This)->lpVtbl -> AddPattern(This,patternId) )
#define IUIAutomationCacheRequest_Clone(This,clonedRequest) ( (This)->lpVtbl -> Clone(This,clonedRequest) )
#define IUIAutomationCacheRequest_get_TreeScope(This,scope) ( (This)->lpVtbl -> get_TreeScope(This,scope) )
#define IUIAutomationCacheRequest_put_TreeScope(This,scope) ( (This)->lpVtbl -> put_TreeScope(This,scope) )
#define IUIAutomationCacheRequest_get_TreeFilter(This,filter) ( (This)->lpVtbl -> get_TreeFilter(This,filter) )
#define IUIAutomationCacheRequest_put_TreeFilter(This,filter) ( (This)->lpVtbl -> put_TreeFilter(This,filter) )
#define IUIAutomationCacheRequest_get_AutomationElementMode(This,mode) ( (This)->lpVtbl -> get_AutomationElementMode(This,mode) )
#define IUIAutomationCacheRequest_put_AutomationElementMode(This,mode) ( (This)->lpVtbl -> put_AutomationElementMode(This,mode) )
#endif
#endif
#ifndef __IUIAutomationTreeWalker_INTERFACE_DEFINED__
#define __IUIAutomationTreeWalker_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationTreeWalker;
typedef struct IUIAutomationTreeWalkerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationTreeWalker * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationTreeWalker * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationTreeWalker * This);
	HRESULT(STDMETHODCALLTYPE * GetParentElement) (IUIAutomationTreeWalker * This, IUIAutomationElement * element, IUIAutomationElement ** parent);
	HRESULT(STDMETHODCALLTYPE * GetFirstChildElement) (IUIAutomationTreeWalker * This, IUIAutomationElement * element, IUIAutomationElement ** first);
	HRESULT(STDMETHODCALLTYPE * GetLastChildElement) (IUIAutomationTreeWalker * This, IUIAutomationElement * element, IUIAutomationElement ** last);
	HRESULT(STDMETHODCALLTYPE * GetNextSiblingElement) (IUIAutomationTreeWalker * This, IUIAutomationElement * element, IUIAutomationElement ** next);
	HRESULT(STDMETHODCALLTYPE * GetPreviousSiblingElement) (IUIAutomationTreeWalker * This, IUIAutomationElement * element, IUIAutomationElement ** previous);
	HRESULT(STDMETHODCALLTYPE * NormalizeElement) (IUIAutomationTreeWalker * This, IUIAutomationElement * element, IUIAutomationElement ** normalized);
	HRESULT(STDMETHODCALLTYPE * GetParentElementBuildCache) (IUIAutomationTreeWalker * This, IUIAutomationElement * element, IUIAutomationCacheRequest * cacheRequest, IUIAutomationElement ** parent);
	HRESULT(STDMETHODCALLTYPE * GetFirstChildElementBuildCache) (IUIAutomationTreeWalker * This, IUIAutomationElement * element, IUIAutomationCacheRequest * cacheRequest, IUIAutomationElement ** first);
	HRESULT(STDMETHODCALLTYPE * GetLastChildElementBuildCache) (IUIAutomationTreeWalker * This, IUIAutomationElement * element, IUIAutomationCacheRequest * cacheRequest, IUIAutomationElement ** last);
	HRESULT(STDMETHODCALLTYPE * GetNextSiblingElementBuildCache) (IUIAutomationTreeWalker * This, IUIAutomationElement * element, IUIAutomationCacheRequest * cacheRequest, IUIAutomationElement ** next);
	HRESULT(STDMETHODCALLTYPE * GetPreviousSiblingElementBuildCache) (IUIAutomationTreeWalker * This, IUIAutomationElement * element, IUIAutomationCacheRequest * cacheRequest, IUIAutomationElement ** previous);
	HRESULT(STDMETHODCALLTYPE * NormalizeElementBuildCache) (IUIAutomationTreeWalker * This, IUIAutomationElement * element, IUIAutomationCacheRequest * cacheRequest, IUIAutomationElement ** normalized);
	HRESULT(STDMETHODCALLTYPE * get_Condition) (IUIAutomationTreeWalker * This, IUIAutomationCondition ** condition);
	END_INTERFACE
}  IUIAutomationTreeWalkerVtbl;
interface IUIAutomationTreeWalker
{
	CONST_VTBL struct IUIAutomationTreeWalkerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationTreeWalker_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationTreeWalker_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationTreeWalker_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationTreeWalker_GetParentElement(This,element,parent) ( (This)->lpVtbl -> GetParentElement(This,element,parent) )
#define IUIAutomationTreeWalker_GetFirstChildElement(This,element,first) ( (This)->lpVtbl -> GetFirstChildElement(This,element,first) )
#define IUIAutomationTreeWalker_GetLastChildElement(This,element,last) ( (This)->lpVtbl -> GetLastChildElement(This,element,last) )
#define IUIAutomationTreeWalker_GetNextSiblingElement(This,element,next) ( (This)->lpVtbl -> GetNextSiblingElement(This,element,next) )
#define IUIAutomationTreeWalker_GetPreviousSiblingElement(This,element,previous) ( (This)->lpVtbl -> GetPreviousSiblingElement(This,element,previous) )
#define IUIAutomationTreeWalker_NormalizeElement(This,element,normalized) ( (This)->lpVtbl -> NormalizeElement(This,element,normalized) )
#define IUIAutomationTreeWalker_GetParentElementBuildCache(This,element,cacheRequest,parent) ( (This)->lpVtbl -> GetParentElementBuildCache(This,element,cacheRequest,parent) )
#define IUIAutomationTreeWalker_GetFirstChildElementBuildCache(This,element,cacheRequest,first) ( (This)->lpVtbl -> GetFirstChildElementBuildCache(This,element,cacheRequest,first) )
#define IUIAutomationTreeWalker_GetLastChildElementBuildCache(This,element,cacheRequest,last) ( (This)->lpVtbl -> GetLastChildElementBuildCache(This,element,cacheRequest,last) )
#define IUIAutomationTreeWalker_GetNextSiblingElementBuildCache(This,element,cacheRequest,next) ( (This)->lpVtbl -> GetNextSiblingElementBuildCache(This,element,cacheRequest,next) )
#define IUIAutomationTreeWalker_GetPreviousSiblingElementBuildCache(This,element,cacheRequest,previous) ( (This)->lpVtbl -> GetPreviousSiblingElementBuildCache(This,element,cacheRequest,previous) )
#define IUIAutomationTreeWalker_NormalizeElementBuildCache(This,element,cacheRequest,normalized) ( (This)->lpVtbl -> NormalizeElementBuildCache(This,element,cacheRequest,normalized) )
#define IUIAutomationTreeWalker_get_Condition(This,condition) ( (This)->lpVtbl -> get_Condition(This,condition) )
#endif
#endif
#ifndef __IUIAutomationEventHandler_INTERFACE_DEFINED__
#define __IUIAutomationEventHandler_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationEventHandler;
typedef struct IUIAutomationEventHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationEventHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationEventHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationEventHandler * This);
	HRESULT(STDMETHODCALLTYPE * HandleAutomationEvent) (IUIAutomationEventHandler * This, IUIAutomationElement * sender, EVENTID eventId);
	END_INTERFACE
}  IUIAutomationEventHandlerVtbl;
interface IUIAutomationEventHandler
{
	CONST_VTBL struct IUIAutomationEventHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationEventHandler_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationEventHandler_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationEventHandler_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationEventHandler_HandleAutomationEvent(This,sender,eventId) ( (This)->lpVtbl -> HandleAutomationEvent(This,sender,eventId) )
#endif
#endif
#ifndef __IUIAutomationPropertyChangedEventHandler_INTERFACE_DEFINED__
#define __IUIAutomationPropertyChangedEventHandler_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationPropertyChangedEventHandler;
typedef struct IUIAutomationPropertyChangedEventHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationPropertyChangedEventHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationPropertyChangedEventHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationPropertyChangedEventHandler * This);
	HRESULT(STDMETHODCALLTYPE * HandlePropertyChangedEvent) (IUIAutomationPropertyChangedEventHandler * This, IUIAutomationElement * sender, PROPERTYID propertyId, VARIANT newValue);
	END_INTERFACE
}  IUIAutomationPropertyChangedEventHandlerVtbl;
interface IUIAutomationPropertyChangedEventHandler
{
	CONST_VTBL struct IUIAutomationPropertyChangedEventHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationPropertyChangedEventHandler_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationPropertyChangedEventHandler_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationPropertyChangedEventHandler_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationPropertyChangedEventHandler_HandlePropertyChangedEvent(This,sender,propertyId,newValue) ( (This)->lpVtbl -> HandlePropertyChangedEvent(This,sender,propertyId,newValue) )
#endif
#endif
#ifndef __IUIAutomationStructureChangedEventHandler_INTERFACE_DEFINED__
#define __IUIAutomationStructureChangedEventHandler_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationStructureChangedEventHandler;
typedef struct IUIAutomationStructureChangedEventHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationStructureChangedEventHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationStructureChangedEventHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationStructureChangedEventHandler * This);
	HRESULT(STDMETHODCALLTYPE * HandleStructureChangedEvent) (IUIAutomationStructureChangedEventHandler * This, IUIAutomationElement * sender, enum StructureChangeType changeType, SAFEARRAY * runtimeId);
	END_INTERFACE
}  IUIAutomationStructureChangedEventHandlerVtbl;
interface IUIAutomationStructureChangedEventHandler
{
	CONST_VTBL struct IUIAutomationStructureChangedEventHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationStructureChangedEventHandler_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationStructureChangedEventHandler_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationStructureChangedEventHandler_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationStructureChangedEventHandler_HandleStructureChangedEvent(This,sender,changeType,runtimeId) ( (This)->lpVtbl -> HandleStructureChangedEvent(This,sender,changeType,runtimeId) )
#endif
#endif
#ifndef __IUIAutomationFocusChangedEventHandler_INTERFACE_DEFINED__
#define __IUIAutomationFocusChangedEventHandler_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationFocusChangedEventHandler;
typedef struct IUIAutomationFocusChangedEventHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationFocusChangedEventHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationFocusChangedEventHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationFocusChangedEventHandler * This);
	HRESULT(STDMETHODCALLTYPE * HandleFocusChangedEvent) (IUIAutomationFocusChangedEventHandler * This, IUIAutomationElement * sender);
	END_INTERFACE
}  IUIAutomationFocusChangedEventHandlerVtbl;
interface IUIAutomationFocusChangedEventHandler
{
	CONST_VTBL struct IUIAutomationFocusChangedEventHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationFocusChangedEventHandler_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationFocusChangedEventHandler_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationFocusChangedEventHandler_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationFocusChangedEventHandler_HandleFocusChangedEvent(This,sender) ( (This)->lpVtbl -> HandleFocusChangedEvent(This,sender) )
#endif
#endif
#ifndef __IUIAutomationInvokePattern_INTERFACE_DEFINED__
#define __IUIAutomationInvokePattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationInvokePattern;
typedef struct IUIAutomationInvokePatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationInvokePattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationInvokePattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationInvokePattern * This);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IUIAutomationInvokePattern * This);
	END_INTERFACE
}  IUIAutomationInvokePatternVtbl;
interface IUIAutomationInvokePattern
{
	CONST_VTBL struct IUIAutomationInvokePatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationInvokePattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationInvokePattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationInvokePattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationInvokePattern_Invoke(This) ( (This)->lpVtbl -> Invoke(This) )
#endif
#endif
#ifndef __IUIAutomationDockPattern_INTERFACE_DEFINED__
#define __IUIAutomationDockPattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationDockPattern;
typedef struct IUIAutomationDockPatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationDockPattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationDockPattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationDockPattern * This);
	HRESULT(STDMETHODCALLTYPE * SetDockPosition) (IUIAutomationDockPattern * This, enum DockPosition dockPos);
	HRESULT(STDMETHODCALLTYPE * get_CurrentDockPosition) (IUIAutomationDockPattern * This, enum DockPosition * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedDockPosition) (IUIAutomationDockPattern * This, enum DockPosition * retVal);
	END_INTERFACE
}  IUIAutomationDockPatternVtbl;
interface IUIAutomationDockPattern
{
	CONST_VTBL struct IUIAutomationDockPatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationDockPattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationDockPattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationDockPattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationDockPattern_SetDockPosition(This,dockPos) ( (This)->lpVtbl -> SetDockPosition(This,dockPos) )
#define IUIAutomationDockPattern_get_CurrentDockPosition(This,retVal) ( (This)->lpVtbl -> get_CurrentDockPosition(This,retVal) )
#define IUIAutomationDockPattern_get_CachedDockPosition(This,retVal) ( (This)->lpVtbl -> get_CachedDockPosition(This,retVal) )
#endif
#endif
#ifndef __IUIAutomationExpandCollapsePattern_INTERFACE_DEFINED__
#define __IUIAutomationExpandCollapsePattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationExpandCollapsePattern;
typedef struct IUIAutomationExpandCollapsePatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationExpandCollapsePattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationExpandCollapsePattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationExpandCollapsePattern * This);
	HRESULT(STDMETHODCALLTYPE * Expand) (IUIAutomationExpandCollapsePattern * This);
	HRESULT(STDMETHODCALLTYPE * Collapse) (IUIAutomationExpandCollapsePattern * This);
	HRESULT(STDMETHODCALLTYPE * get_CurrentExpandCollapseState) (IUIAutomationExpandCollapsePattern * This, enum ExpandCollapseState * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedExpandCollapseState) (IUIAutomationExpandCollapsePattern * This, enum ExpandCollapseState * retVal);
	END_INTERFACE
}  IUIAutomationExpandCollapsePatternVtbl;
interface IUIAutomationExpandCollapsePattern
{
	CONST_VTBL struct IUIAutomationExpandCollapsePatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationExpandCollapsePattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationExpandCollapsePattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationExpandCollapsePattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationExpandCollapsePattern_Expand(This) ( (This)->lpVtbl -> Expand(This) )
#define IUIAutomationExpandCollapsePattern_Collapse(This) ( (This)->lpVtbl -> Collapse(This) )
#define IUIAutomationExpandCollapsePattern_get_CurrentExpandCollapseState(This,retVal) ( (This)->lpVtbl -> get_CurrentExpandCollapseState(This,retVal) )
#define IUIAutomationExpandCollapsePattern_get_CachedExpandCollapseState(This,retVal) ( (This)->lpVtbl -> get_CachedExpandCollapseState(This,retVal) )
#endif
#endif
#ifndef __IUIAutomationGridPattern_INTERFACE_DEFINED__
#define __IUIAutomationGridPattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationGridPattern;
typedef struct IUIAutomationGridPatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationGridPattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationGridPattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationGridPattern * This);
	HRESULT(STDMETHODCALLTYPE * GetItem) (IUIAutomationGridPattern * This, int row, int column, IUIAutomationElement ** element);
	HRESULT(STDMETHODCALLTYPE * get_CurrentRowCount) (IUIAutomationGridPattern * This, int *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentColumnCount) (IUIAutomationGridPattern * This, int *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedRowCount) (IUIAutomationGridPattern * This, int *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedColumnCount) (IUIAutomationGridPattern * This, int *retVal);
	END_INTERFACE
}  IUIAutomationGridPatternVtbl;
interface IUIAutomationGridPattern
{
	CONST_VTBL struct IUIAutomationGridPatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationGridPattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationGridPattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationGridPattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationGridPattern_GetItem(This,row,column,element) ( (This)->lpVtbl -> GetItem(This,row,column,element) )
#define IUIAutomationGridPattern_get_CurrentRowCount(This,retVal) ( (This)->lpVtbl -> get_CurrentRowCount(This,retVal) )
#define IUIAutomationGridPattern_get_CurrentColumnCount(This,retVal) ( (This)->lpVtbl -> get_CurrentColumnCount(This,retVal) )
#define IUIAutomationGridPattern_get_CachedRowCount(This,retVal) ( (This)->lpVtbl -> get_CachedRowCount(This,retVal) )
#define IUIAutomationGridPattern_get_CachedColumnCount(This,retVal) ( (This)->lpVtbl -> get_CachedColumnCount(This,retVal) )
#endif
#endif
#ifndef __IUIAutomationGridItemPattern_INTERFACE_DEFINED__
#define __IUIAutomationGridItemPattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationGridItemPattern;
typedef struct IUIAutomationGridItemPatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationGridItemPattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationGridItemPattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationGridItemPattern * This);
	HRESULT(STDMETHODCALLTYPE * get_CurrentContainingGrid) (IUIAutomationGridItemPattern * This, IUIAutomationElement ** retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentRow) (IUIAutomationGridItemPattern * This, int *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentColumn) (IUIAutomationGridItemPattern * This, int *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentRowSpan) (IUIAutomationGridItemPattern * This, int *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentColumnSpan) (IUIAutomationGridItemPattern * This, int *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedContainingGrid) (IUIAutomationGridItemPattern * This, IUIAutomationElement ** retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedRow) (IUIAutomationGridItemPattern * This, int *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedColumn) (IUIAutomationGridItemPattern * This, int *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedRowSpan) (IUIAutomationGridItemPattern * This, int *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedColumnSpan) (IUIAutomationGridItemPattern * This, int *retVal);
	END_INTERFACE
}  IUIAutomationGridItemPatternVtbl;
interface IUIAutomationGridItemPattern
{
	CONST_VTBL struct IUIAutomationGridItemPatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationGridItemPattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationGridItemPattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationGridItemPattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationGridItemPattern_get_CurrentContainingGrid(This,retVal) ( (This)->lpVtbl -> get_CurrentContainingGrid(This,retVal) )
#define IUIAutomationGridItemPattern_get_CurrentRow(This,retVal) ( (This)->lpVtbl -> get_CurrentRow(This,retVal) )
#define IUIAutomationGridItemPattern_get_CurrentColumn(This,retVal) ( (This)->lpVtbl -> get_CurrentColumn(This,retVal) )
#define IUIAutomationGridItemPattern_get_CurrentRowSpan(This,retVal) ( (This)->lpVtbl -> get_CurrentRowSpan(This,retVal) )
#define IUIAutomationGridItemPattern_get_CurrentColumnSpan(This,retVal) ( (This)->lpVtbl -> get_CurrentColumnSpan(This,retVal) )
#define IUIAutomationGridItemPattern_get_CachedContainingGrid(This,retVal) ( (This)->lpVtbl -> get_CachedContainingGrid(This,retVal) )
#define IUIAutomationGridItemPattern_get_CachedRow(This,retVal) ( (This)->lpVtbl -> get_CachedRow(This,retVal) )
#define IUIAutomationGridItemPattern_get_CachedColumn(This,retVal) ( (This)->lpVtbl -> get_CachedColumn(This,retVal) )
#define IUIAutomationGridItemPattern_get_CachedRowSpan(This,retVal) ( (This)->lpVtbl -> get_CachedRowSpan(This,retVal) )
#define IUIAutomationGridItemPattern_get_CachedColumnSpan(This,retVal) ( (This)->lpVtbl -> get_CachedColumnSpan(This,retVal) )
#endif
#endif
#ifndef __IUIAutomationMultipleViewPattern_INTERFACE_DEFINED__
#define __IUIAutomationMultipleViewPattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationMultipleViewPattern;
typedef struct IUIAutomationMultipleViewPatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationMultipleViewPattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationMultipleViewPattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationMultipleViewPattern * This);
	HRESULT(STDMETHODCALLTYPE * GetViewName) (IUIAutomationMultipleViewPattern * This, int view, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * SetCurrentView) (IUIAutomationMultipleViewPattern * This, int view);
	HRESULT(STDMETHODCALLTYPE * get_CurrentCurrentView) (IUIAutomationMultipleViewPattern * This, int *retVal);
	HRESULT(STDMETHODCALLTYPE * GetCurrentSupportedViews) (IUIAutomationMultipleViewPattern * This, SAFEARRAY * *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedCurrentView) (IUIAutomationMultipleViewPattern * This, int *retVal);
	HRESULT(STDMETHODCALLTYPE * GetCachedSupportedViews) (IUIAutomationMultipleViewPattern * This, SAFEARRAY * *retVal);
	END_INTERFACE
}  IUIAutomationMultipleViewPatternVtbl;
interface IUIAutomationMultipleViewPattern
{
	CONST_VTBL struct IUIAutomationMultipleViewPatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationMultipleViewPattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationMultipleViewPattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationMultipleViewPattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationMultipleViewPattern_GetViewName(This,view,name) ( (This)->lpVtbl -> GetViewName(This,view,name) )
#define IUIAutomationMultipleViewPattern_SetCurrentView(This,view) ( (This)->lpVtbl -> SetCurrentView(This,view) )
#define IUIAutomationMultipleViewPattern_get_CurrentCurrentView(This,retVal) ( (This)->lpVtbl -> get_CurrentCurrentView(This,retVal) )
#define IUIAutomationMultipleViewPattern_GetCurrentSupportedViews(This,retVal) ( (This)->lpVtbl -> GetCurrentSupportedViews(This,retVal) )
#define IUIAutomationMultipleViewPattern_get_CachedCurrentView(This,retVal) ( (This)->lpVtbl -> get_CachedCurrentView(This,retVal) )
#define IUIAutomationMultipleViewPattern_GetCachedSupportedViews(This,retVal) ( (This)->lpVtbl -> GetCachedSupportedViews(This,retVal) )
#endif
#endif
#ifndef __IUIAutomationRangeValuePattern_INTERFACE_DEFINED__
#define __IUIAutomationRangeValuePattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationRangeValuePattern;
typedef struct IUIAutomationRangeValuePatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationRangeValuePattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationRangeValuePattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationRangeValuePattern * This);
	HRESULT(STDMETHODCALLTYPE * SetValue) (IUIAutomationRangeValuePattern * This, double val);
	HRESULT(STDMETHODCALLTYPE * get_CurrentValue) (IUIAutomationRangeValuePattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentIsReadOnly) (IUIAutomationRangeValuePattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentMaximum) (IUIAutomationRangeValuePattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentMinimum) (IUIAutomationRangeValuePattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentLargeChange) (IUIAutomationRangeValuePattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentSmallChange) (IUIAutomationRangeValuePattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedValue) (IUIAutomationRangeValuePattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedIsReadOnly) (IUIAutomationRangeValuePattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedMaximum) (IUIAutomationRangeValuePattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedMinimum) (IUIAutomationRangeValuePattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedLargeChange) (IUIAutomationRangeValuePattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedSmallChange) (IUIAutomationRangeValuePattern * This, double *retVal);
	END_INTERFACE
}  IUIAutomationRangeValuePatternVtbl;
interface IUIAutomationRangeValuePattern
{
	CONST_VTBL struct IUIAutomationRangeValuePatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationRangeValuePattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationRangeValuePattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationRangeValuePattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationRangeValuePattern_SetValue(This,val) ( (This)->lpVtbl -> SetValue(This,val) )
#define IUIAutomationRangeValuePattern_get_CurrentValue(This,retVal) ( (This)->lpVtbl -> get_CurrentValue(This,retVal) )
#define IUIAutomationRangeValuePattern_get_CurrentIsReadOnly(This,retVal) ( (This)->lpVtbl -> get_CurrentIsReadOnly(This,retVal) )
#define IUIAutomationRangeValuePattern_get_CurrentMaximum(This,retVal) ( (This)->lpVtbl -> get_CurrentMaximum(This,retVal) )
#define IUIAutomationRangeValuePattern_get_CurrentMinimum(This,retVal) ( (This)->lpVtbl -> get_CurrentMinimum(This,retVal) )
#define IUIAutomationRangeValuePattern_get_CurrentLargeChange(This,retVal) ( (This)->lpVtbl -> get_CurrentLargeChange(This,retVal) )
#define IUIAutomationRangeValuePattern_get_CurrentSmallChange(This,retVal) ( (This)->lpVtbl -> get_CurrentSmallChange(This,retVal) )
#define IUIAutomationRangeValuePattern_get_CachedValue(This,retVal) ( (This)->lpVtbl -> get_CachedValue(This,retVal) )
#define IUIAutomationRangeValuePattern_get_CachedIsReadOnly(This,retVal) ( (This)->lpVtbl -> get_CachedIsReadOnly(This,retVal) )
#define IUIAutomationRangeValuePattern_get_CachedMaximum(This,retVal) ( (This)->lpVtbl -> get_CachedMaximum(This,retVal) )
#define IUIAutomationRangeValuePattern_get_CachedMinimum(This,retVal) ( (This)->lpVtbl -> get_CachedMinimum(This,retVal) )
#define IUIAutomationRangeValuePattern_get_CachedLargeChange(This,retVal) ( (This)->lpVtbl -> get_CachedLargeChange(This,retVal) )
#define IUIAutomationRangeValuePattern_get_CachedSmallChange(This,retVal) ( (This)->lpVtbl -> get_CachedSmallChange(This,retVal) )
#endif
#endif
#ifndef __IUIAutomationScrollPattern_INTERFACE_DEFINED__
#define __IUIAutomationScrollPattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationScrollPattern;
typedef struct IUIAutomationScrollPatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationScrollPattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationScrollPattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationScrollPattern * This);
	HRESULT(STDMETHODCALLTYPE * Scroll) (IUIAutomationScrollPattern * This, enum ScrollAmount horizontalAmount, enum ScrollAmount verticalAmount);
	HRESULT(STDMETHODCALLTYPE * SetScrollPercent) (IUIAutomationScrollPattern * This, double horizontalPercent, double verticalPercent);
	HRESULT(STDMETHODCALLTYPE * get_CurrentHorizontalScrollPercent) (IUIAutomationScrollPattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentVerticalScrollPercent) (IUIAutomationScrollPattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentHorizontalViewSize) (IUIAutomationScrollPattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentVerticalViewSize) (IUIAutomationScrollPattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentHorizontallyScrollable) (IUIAutomationScrollPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentVerticallyScrollable) (IUIAutomationScrollPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedHorizontalScrollPercent) (IUIAutomationScrollPattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedVerticalScrollPercent) (IUIAutomationScrollPattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedHorizontalViewSize) (IUIAutomationScrollPattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedVerticalViewSize) (IUIAutomationScrollPattern * This, double *retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedHorizontallyScrollable) (IUIAutomationScrollPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedVerticallyScrollable) (IUIAutomationScrollPattern * This, BOOL * retVal);
	END_INTERFACE
}  IUIAutomationScrollPatternVtbl;
interface IUIAutomationScrollPattern
{
	CONST_VTBL struct IUIAutomationScrollPatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationScrollPattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationScrollPattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationScrollPattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationScrollPattern_Scroll(This,horizontalAmount,verticalAmount) ( (This)->lpVtbl -> Scroll(This,horizontalAmount,verticalAmount) )
#define IUIAutomationScrollPattern_SetScrollPercent(This,horizontalPercent,verticalPercent) ( (This)->lpVtbl -> SetScrollPercent(This,horizontalPercent,verticalPercent) )
#define IUIAutomationScrollPattern_get_CurrentHorizontalScrollPercent(This,retVal) ( (This)->lpVtbl -> get_CurrentHorizontalScrollPercent(This,retVal) )
#define IUIAutomationScrollPattern_get_CurrentVerticalScrollPercent(This,retVal) ( (This)->lpVtbl -> get_CurrentVerticalScrollPercent(This,retVal) )
#define IUIAutomationScrollPattern_get_CurrentHorizontalViewSize(This,retVal) ( (This)->lpVtbl -> get_CurrentHorizontalViewSize(This,retVal) )
#define IUIAutomationScrollPattern_get_CurrentVerticalViewSize(This,retVal) ( (This)->lpVtbl -> get_CurrentVerticalViewSize(This,retVal) )
#define IUIAutomationScrollPattern_get_CurrentHorizontallyScrollable(This,retVal) ( (This)->lpVtbl -> get_CurrentHorizontallyScrollable(This,retVal) )
#define IUIAutomationScrollPattern_get_CurrentVerticallyScrollable(This,retVal) ( (This)->lpVtbl -> get_CurrentVerticallyScrollable(This,retVal) )
#define IUIAutomationScrollPattern_get_CachedHorizontalScrollPercent(This,retVal) ( (This)->lpVtbl -> get_CachedHorizontalScrollPercent(This,retVal) )
#define IUIAutomationScrollPattern_get_CachedVerticalScrollPercent(This,retVal) ( (This)->lpVtbl -> get_CachedVerticalScrollPercent(This,retVal) )
#define IUIAutomationScrollPattern_get_CachedHorizontalViewSize(This,retVal) ( (This)->lpVtbl -> get_CachedHorizontalViewSize(This,retVal) )
#define IUIAutomationScrollPattern_get_CachedVerticalViewSize(This,retVal) ( (This)->lpVtbl -> get_CachedVerticalViewSize(This,retVal) )
#define IUIAutomationScrollPattern_get_CachedHorizontallyScrollable(This,retVal) ( (This)->lpVtbl -> get_CachedHorizontallyScrollable(This,retVal) )
#define IUIAutomationScrollPattern_get_CachedVerticallyScrollable(This,retVal) ( (This)->lpVtbl -> get_CachedVerticallyScrollable(This,retVal) )
#endif
#endif
#ifndef __IUIAutomationScrollItemPattern_INTERFACE_DEFINED__
#define __IUIAutomationScrollItemPattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationScrollItemPattern;
typedef struct IUIAutomationScrollItemPatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationScrollItemPattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationScrollItemPattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationScrollItemPattern * This);
	HRESULT(STDMETHODCALLTYPE * ScrollIntoView) (IUIAutomationScrollItemPattern * This);
	END_INTERFACE
}  IUIAutomationScrollItemPatternVtbl;
interface IUIAutomationScrollItemPattern
{
	CONST_VTBL struct IUIAutomationScrollItemPatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationScrollItemPattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationScrollItemPattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationScrollItemPattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationScrollItemPattern_ScrollIntoView(This) ( (This)->lpVtbl -> ScrollIntoView(This) )
#endif
#endif
#ifndef __IUIAutomationSelectionPattern_INTERFACE_DEFINED__
#define __IUIAutomationSelectionPattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationSelectionPattern;
typedef struct IUIAutomationSelectionPatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationSelectionPattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationSelectionPattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationSelectionPattern * This);
	HRESULT(STDMETHODCALLTYPE * GetCurrentSelection) (IUIAutomationSelectionPattern * This, IUIAutomationElementArray ** retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentCanSelectMultiple) (IUIAutomationSelectionPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentIsSelectionRequired) (IUIAutomationSelectionPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * GetCachedSelection) (IUIAutomationSelectionPattern * This, IUIAutomationElementArray ** retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedCanSelectMultiple) (IUIAutomationSelectionPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedIsSelectionRequired) (IUIAutomationSelectionPattern * This, BOOL * retVal);
	END_INTERFACE
}  IUIAutomationSelectionPatternVtbl;
interface IUIAutomationSelectionPattern
{
	CONST_VTBL struct IUIAutomationSelectionPatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationSelectionPattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationSelectionPattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationSelectionPattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationSelectionPattern_GetCurrentSelection(This,retVal) ( (This)->lpVtbl -> GetCurrentSelection(This,retVal) )
#define IUIAutomationSelectionPattern_get_CurrentCanSelectMultiple(This,retVal) ( (This)->lpVtbl -> get_CurrentCanSelectMultiple(This,retVal) )
#define IUIAutomationSelectionPattern_get_CurrentIsSelectionRequired(This,retVal) ( (This)->lpVtbl -> get_CurrentIsSelectionRequired(This,retVal) )
#define IUIAutomationSelectionPattern_GetCachedSelection(This,retVal) ( (This)->lpVtbl -> GetCachedSelection(This,retVal) )
#define IUIAutomationSelectionPattern_get_CachedCanSelectMultiple(This,retVal) ( (This)->lpVtbl -> get_CachedCanSelectMultiple(This,retVal) )
#define IUIAutomationSelectionPattern_get_CachedIsSelectionRequired(This,retVal) ( (This)->lpVtbl -> get_CachedIsSelectionRequired(This,retVal) )
#endif
#endif
#ifndef __IUIAutomationSelectionItemPattern_INTERFACE_DEFINED__
#define __IUIAutomationSelectionItemPattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationSelectionItemPattern;
typedef struct IUIAutomationSelectionItemPatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationSelectionItemPattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationSelectionItemPattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationSelectionItemPattern * This);
	HRESULT(STDMETHODCALLTYPE * Select) (IUIAutomationSelectionItemPattern * This);
	HRESULT(STDMETHODCALLTYPE * AddToSelection) (IUIAutomationSelectionItemPattern * This);
	HRESULT(STDMETHODCALLTYPE * RemoveFromSelection) (IUIAutomationSelectionItemPattern * This);
	HRESULT(STDMETHODCALLTYPE * get_CurrentIsSelected) (IUIAutomationSelectionItemPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentSelectionContainer) (IUIAutomationSelectionItemPattern * This, IUIAutomationElement ** retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedIsSelected) (IUIAutomationSelectionItemPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedSelectionContainer) (IUIAutomationSelectionItemPattern * This, IUIAutomationElement ** retVal);
	END_INTERFACE
}  IUIAutomationSelectionItemPatternVtbl;
interface IUIAutomationSelectionItemPattern
{
	CONST_VTBL struct IUIAutomationSelectionItemPatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationSelectionItemPattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationSelectionItemPattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationSelectionItemPattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationSelectionItemPattern_Select(This) ( (This)->lpVtbl -> Select(This) )
#define IUIAutomationSelectionItemPattern_AddToSelection(This) ( (This)->lpVtbl -> AddToSelection(This) )
#define IUIAutomationSelectionItemPattern_RemoveFromSelection(This) ( (This)->lpVtbl -> RemoveFromSelection(This) )
#define IUIAutomationSelectionItemPattern_get_CurrentIsSelected(This,retVal) ( (This)->lpVtbl -> get_CurrentIsSelected(This,retVal) )
#define IUIAutomationSelectionItemPattern_get_CurrentSelectionContainer(This,retVal) ( (This)->lpVtbl -> get_CurrentSelectionContainer(This,retVal) )
#define IUIAutomationSelectionItemPattern_get_CachedIsSelected(This,retVal) ( (This)->lpVtbl -> get_CachedIsSelected(This,retVal) )
#define IUIAutomationSelectionItemPattern_get_CachedSelectionContainer(This,retVal) ( (This)->lpVtbl -> get_CachedSelectionContainer(This,retVal) )
#endif
#endif
#ifndef __IUIAutomationSynchronizedInputPattern_INTERFACE_DEFINED__
#define __IUIAutomationSynchronizedInputPattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationSynchronizedInputPattern;
typedef struct IUIAutomationSynchronizedInputPatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationSynchronizedInputPattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationSynchronizedInputPattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationSynchronizedInputPattern * This);
	HRESULT(STDMETHODCALLTYPE * StartListening) (IUIAutomationSynchronizedInputPattern * This, enum SynchronizedInputType inputType);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IUIAutomationSynchronizedInputPattern * This);
	END_INTERFACE
}  IUIAutomationSynchronizedInputPatternVtbl;
interface IUIAutomationSynchronizedInputPattern
{
	CONST_VTBL struct IUIAutomationSynchronizedInputPatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationSynchronizedInputPattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationSynchronizedInputPattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationSynchronizedInputPattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationSynchronizedInputPattern_StartListening(This,inputType) ( (This)->lpVtbl -> StartListening(This,inputType) )
#define IUIAutomationSynchronizedInputPattern_Cancel(This) ( (This)->lpVtbl -> Cancel(This) )
#endif
#endif
#ifndef __IUIAutomationTablePattern_INTERFACE_DEFINED__
#define __IUIAutomationTablePattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationTablePattern;
typedef struct IUIAutomationTablePatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationTablePattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationTablePattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationTablePattern * This);
	HRESULT(STDMETHODCALLTYPE * GetCurrentRowHeaders) (IUIAutomationTablePattern * This, IUIAutomationElementArray ** retVal);
	HRESULT(STDMETHODCALLTYPE * GetCurrentColumnHeaders) (IUIAutomationTablePattern * This, IUIAutomationElementArray ** retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentRowOrColumnMajor) (IUIAutomationTablePattern * This, enum RowOrColumnMajor * retVal);
	HRESULT(STDMETHODCALLTYPE * GetCachedRowHeaders) (IUIAutomationTablePattern * This, IUIAutomationElementArray ** retVal);
	HRESULT(STDMETHODCALLTYPE * GetCachedColumnHeaders) (IUIAutomationTablePattern * This, IUIAutomationElementArray ** retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedRowOrColumnMajor) (IUIAutomationTablePattern * This, enum RowOrColumnMajor * retVal);
	END_INTERFACE
}  IUIAutomationTablePatternVtbl;
interface IUIAutomationTablePattern
{
	CONST_VTBL struct IUIAutomationTablePatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationTablePattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationTablePattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationTablePattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationTablePattern_GetCurrentRowHeaders(This,retVal) ( (This)->lpVtbl -> GetCurrentRowHeaders(This,retVal) )
#define IUIAutomationTablePattern_GetCurrentColumnHeaders(This,retVal) ( (This)->lpVtbl -> GetCurrentColumnHeaders(This,retVal) )
#define IUIAutomationTablePattern_get_CurrentRowOrColumnMajor(This,retVal) ( (This)->lpVtbl -> get_CurrentRowOrColumnMajor(This,retVal) )
#define IUIAutomationTablePattern_GetCachedRowHeaders(This,retVal) ( (This)->lpVtbl -> GetCachedRowHeaders(This,retVal) )
#define IUIAutomationTablePattern_GetCachedColumnHeaders(This,retVal) ( (This)->lpVtbl -> GetCachedColumnHeaders(This,retVal) )
#define IUIAutomationTablePattern_get_CachedRowOrColumnMajor(This,retVal) ( (This)->lpVtbl -> get_CachedRowOrColumnMajor(This,retVal) )
#endif
#endif
#ifndef __IUIAutomationTableItemPattern_INTERFACE_DEFINED__
#define __IUIAutomationTableItemPattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationTableItemPattern;
typedef struct IUIAutomationTableItemPatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationTableItemPattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationTableItemPattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationTableItemPattern * This);
	HRESULT(STDMETHODCALLTYPE * GetCurrentRowHeaderItems) (IUIAutomationTableItemPattern * This, IUIAutomationElementArray ** retVal);
	HRESULT(STDMETHODCALLTYPE * GetCurrentColumnHeaderItems) (IUIAutomationTableItemPattern * This, IUIAutomationElementArray ** retVal);
	HRESULT(STDMETHODCALLTYPE * GetCachedRowHeaderItems) (IUIAutomationTableItemPattern * This, IUIAutomationElementArray ** retVal);
	HRESULT(STDMETHODCALLTYPE * GetCachedColumnHeaderItems) (IUIAutomationTableItemPattern * This, IUIAutomationElementArray ** retVal);
	END_INTERFACE
}  IUIAutomationTableItemPatternVtbl;
interface IUIAutomationTableItemPattern
{
	CONST_VTBL struct IUIAutomationTableItemPatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationTableItemPattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationTableItemPattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationTableItemPattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationTableItemPattern_GetCurrentRowHeaderItems(This,retVal) ( (This)->lpVtbl -> GetCurrentRowHeaderItems(This,retVal) )
#define IUIAutomationTableItemPattern_GetCurrentColumnHeaderItems(This,retVal) ( (This)->lpVtbl -> GetCurrentColumnHeaderItems(This,retVal) )
#define IUIAutomationTableItemPattern_GetCachedRowHeaderItems(This,retVal) ( (This)->lpVtbl -> GetCachedRowHeaderItems(This,retVal) )
#define IUIAutomationTableItemPattern_GetCachedColumnHeaderItems(This,retVal) ( (This)->lpVtbl -> GetCachedColumnHeaderItems(This,retVal) )
#endif
#endif
#ifndef __IUIAutomationTogglePattern_INTERFACE_DEFINED__
#define __IUIAutomationTogglePattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationTogglePattern;
typedef struct IUIAutomationTogglePatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationTogglePattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationTogglePattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationTogglePattern * This);
	HRESULT(STDMETHODCALLTYPE * Toggle) (IUIAutomationTogglePattern * This);
	HRESULT(STDMETHODCALLTYPE * get_CurrentToggleState) (IUIAutomationTogglePattern * This, enum ToggleState * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedToggleState) (IUIAutomationTogglePattern * This, enum ToggleState * retVal);
	END_INTERFACE
}  IUIAutomationTogglePatternVtbl;
interface IUIAutomationTogglePattern
{
	CONST_VTBL struct IUIAutomationTogglePatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationTogglePattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationTogglePattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationTogglePattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationTogglePattern_Toggle(This) ( (This)->lpVtbl -> Toggle(This) )
#define IUIAutomationTogglePattern_get_CurrentToggleState(This,retVal) ( (This)->lpVtbl -> get_CurrentToggleState(This,retVal) )
#define IUIAutomationTogglePattern_get_CachedToggleState(This,retVal) ( (This)->lpVtbl -> get_CachedToggleState(This,retVal) )
#endif
#endif
#ifndef __IUIAutomationTransformPattern_INTERFACE_DEFINED__
#define __IUIAutomationTransformPattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationTransformPattern;
typedef struct IUIAutomationTransformPatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationTransformPattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationTransformPattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationTransformPattern * This);
	HRESULT(STDMETHODCALLTYPE * Move) (IUIAutomationTransformPattern * This, double x, double y);
	HRESULT(STDMETHODCALLTYPE * Resize) (IUIAutomationTransformPattern * This, double width, double height);
	HRESULT(STDMETHODCALLTYPE * Rotate) (IUIAutomationTransformPattern * This, double degrees);
	HRESULT(STDMETHODCALLTYPE * get_CurrentCanMove) (IUIAutomationTransformPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentCanResize) (IUIAutomationTransformPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentCanRotate) (IUIAutomationTransformPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedCanMove) (IUIAutomationTransformPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedCanResize) (IUIAutomationTransformPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedCanRotate) (IUIAutomationTransformPattern * This, BOOL * retVal);
	END_INTERFACE
}  IUIAutomationTransformPatternVtbl;
interface IUIAutomationTransformPattern
{
	CONST_VTBL struct IUIAutomationTransformPatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationTransformPattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationTransformPattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationTransformPattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationTransformPattern_Move(This,x,y) ( (This)->lpVtbl -> Move(This,x,y) )
#define IUIAutomationTransformPattern_Resize(This,width,height) ( (This)->lpVtbl -> Resize(This,width,height) )
#define IUIAutomationTransformPattern_Rotate(This,degrees) ( (This)->lpVtbl -> Rotate(This,degrees) )
#define IUIAutomationTransformPattern_get_CurrentCanMove(This,retVal) ( (This)->lpVtbl -> get_CurrentCanMove(This,retVal) )
#define IUIAutomationTransformPattern_get_CurrentCanResize(This,retVal) ( (This)->lpVtbl -> get_CurrentCanResize(This,retVal) )
#define IUIAutomationTransformPattern_get_CurrentCanRotate(This,retVal) ( (This)->lpVtbl -> get_CurrentCanRotate(This,retVal) )
#define IUIAutomationTransformPattern_get_CachedCanMove(This,retVal) ( (This)->lpVtbl -> get_CachedCanMove(This,retVal) )
#define IUIAutomationTransformPattern_get_CachedCanResize(This,retVal) ( (This)->lpVtbl -> get_CachedCanResize(This,retVal) )
#define IUIAutomationTransformPattern_get_CachedCanRotate(This,retVal) ( (This)->lpVtbl -> get_CachedCanRotate(This,retVal) )
#endif
#endif
#ifndef __IUIAutomationValuePattern_INTERFACE_DEFINED__
#define __IUIAutomationValuePattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationValuePattern;
typedef struct IUIAutomationValuePatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationValuePattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationValuePattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationValuePattern * This);
	HRESULT(STDMETHODCALLTYPE * SetValue) (IUIAutomationValuePattern * This, BSTR val);
	HRESULT(STDMETHODCALLTYPE * get_CurrentValue) (IUIAutomationValuePattern * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentIsReadOnly) (IUIAutomationValuePattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedValue) (IUIAutomationValuePattern * This, BSTR * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedIsReadOnly) (IUIAutomationValuePattern * This, BOOL * retVal);
	END_INTERFACE
}  IUIAutomationValuePatternVtbl;
interface IUIAutomationValuePattern
{
	CONST_VTBL struct IUIAutomationValuePatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationValuePattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationValuePattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationValuePattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationValuePattern_SetValue(This,val) ( (This)->lpVtbl -> SetValue(This,val) )
#define IUIAutomationValuePattern_get_CurrentValue(This,retVal) ( (This)->lpVtbl -> get_CurrentValue(This,retVal) )
#define IUIAutomationValuePattern_get_CurrentIsReadOnly(This,retVal) ( (This)->lpVtbl -> get_CurrentIsReadOnly(This,retVal) )
#define IUIAutomationValuePattern_get_CachedValue(This,retVal) ( (This)->lpVtbl -> get_CachedValue(This,retVal) )
#define IUIAutomationValuePattern_get_CachedIsReadOnly(This,retVal) ( (This)->lpVtbl -> get_CachedIsReadOnly(This,retVal) )
#endif
#endif
#ifndef __IUIAutomationWindowPattern_INTERFACE_DEFINED__
#define __IUIAutomationWindowPattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationWindowPattern;
typedef struct IUIAutomationWindowPatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationWindowPattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationWindowPattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationWindowPattern * This);
	HRESULT(STDMETHODCALLTYPE * Close) (IUIAutomationWindowPattern * This);
	HRESULT(STDMETHODCALLTYPE * WaitForInputIdle) (IUIAutomationWindowPattern * This, int milliseconds, BOOL * success);
	HRESULT(STDMETHODCALLTYPE * SetWindowVisualState) (IUIAutomationWindowPattern * This, enum WindowVisualState state);
	HRESULT(STDMETHODCALLTYPE * get_CurrentCanMaximize) (IUIAutomationWindowPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentCanMinimize) (IUIAutomationWindowPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentIsModal) (IUIAutomationWindowPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentIsTopmost) (IUIAutomationWindowPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentWindowVisualState) (IUIAutomationWindowPattern * This, enum WindowVisualState * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentWindowInteractionState) (IUIAutomationWindowPattern * This, enum WindowInteractionState * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedCanMaximize) (IUIAutomationWindowPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedCanMinimize) (IUIAutomationWindowPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedIsModal) (IUIAutomationWindowPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedIsTopmost) (IUIAutomationWindowPattern * This, BOOL * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedWindowVisualState) (IUIAutomationWindowPattern * This, enum WindowVisualState * retVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedWindowInteractionState) (IUIAutomationWindowPattern * This, enum WindowInteractionState * retVal);
	END_INTERFACE
}  IUIAutomationWindowPatternVtbl;
interface IUIAutomationWindowPattern
{
	CONST_VTBL struct IUIAutomationWindowPatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationWindowPattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationWindowPattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationWindowPattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationWindowPattern_Close(This) ( (This)->lpVtbl -> Close(This) )
#define IUIAutomationWindowPattern_WaitForInputIdle(This,milliseconds,success) ( (This)->lpVtbl -> WaitForInputIdle(This,milliseconds,success) )
#define IUIAutomationWindowPattern_SetWindowVisualState(This,state) ( (This)->lpVtbl -> SetWindowVisualState(This,state) )
#define IUIAutomationWindowPattern_get_CurrentCanMaximize(This,retVal) ( (This)->lpVtbl -> get_CurrentCanMaximize(This,retVal) )
#define IUIAutomationWindowPattern_get_CurrentCanMinimize(This,retVal) ( (This)->lpVtbl -> get_CurrentCanMinimize(This,retVal) )
#define IUIAutomationWindowPattern_get_CurrentIsModal(This,retVal) ( (This)->lpVtbl -> get_CurrentIsModal(This,retVal) )
#define IUIAutomationWindowPattern_get_CurrentIsTopmost(This,retVal) ( (This)->lpVtbl -> get_CurrentIsTopmost(This,retVal) )
#define IUIAutomationWindowPattern_get_CurrentWindowVisualState(This,retVal) ( (This)->lpVtbl -> get_CurrentWindowVisualState(This,retVal) )
#define IUIAutomationWindowPattern_get_CurrentWindowInteractionState(This,retVal) ( (This)->lpVtbl -> get_CurrentWindowInteractionState(This,retVal) )
#define IUIAutomationWindowPattern_get_CachedCanMaximize(This,retVal) ( (This)->lpVtbl -> get_CachedCanMaximize(This,retVal) )
#define IUIAutomationWindowPattern_get_CachedCanMinimize(This,retVal) ( (This)->lpVtbl -> get_CachedCanMinimize(This,retVal) )
#define IUIAutomationWindowPattern_get_CachedIsModal(This,retVal) ( (This)->lpVtbl -> get_CachedIsModal(This,retVal) )
#define IUIAutomationWindowPattern_get_CachedIsTopmost(This,retVal) ( (This)->lpVtbl -> get_CachedIsTopmost(This,retVal) )
#define IUIAutomationWindowPattern_get_CachedWindowVisualState(This,retVal) ( (This)->lpVtbl -> get_CachedWindowVisualState(This,retVal) )
#define IUIAutomationWindowPattern_get_CachedWindowInteractionState(This,retVal) ( (This)->lpVtbl -> get_CachedWindowInteractionState(This,retVal) )
#endif
#endif
#ifndef __IUIAutomationTextRange_INTERFACE_DEFINED__
#define __IUIAutomationTextRange_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationTextRange;
typedef struct IUIAutomationTextRangeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationTextRange * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationTextRange * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationTextRange * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IUIAutomationTextRange * This, IUIAutomationTextRange ** clonedRange);
	HRESULT(STDMETHODCALLTYPE * Compare) (IUIAutomationTextRange * This, IUIAutomationTextRange * range, BOOL * areSame);
	HRESULT(STDMETHODCALLTYPE * CompareEndpoints) (IUIAutomationTextRange * This, enum TextPatternRangeEndpoint srcEndPoint, IUIAutomationTextRange * range, enum TextPatternRangeEndpoint targetEndPoint, int *compValue);
	HRESULT(STDMETHODCALLTYPE * ExpandToEnclosingUnit) (IUIAutomationTextRange * This, enum TextUnit textUnit);
	HRESULT(STDMETHODCALLTYPE * FindAttribute) (IUIAutomationTextRange * This, TEXTATTRIBUTEID attr, VARIANT val, BOOL backward, IUIAutomationTextRange ** found);
	HRESULT(STDMETHODCALLTYPE * FindText) (IUIAutomationTextRange * This, BSTR text, BOOL backward, BOOL ignoreCase, IUIAutomationTextRange ** found);
	HRESULT(STDMETHODCALLTYPE * GetAttributeValue) (IUIAutomationTextRange * This, TEXTATTRIBUTEID attr, VARIANT * value);
	HRESULT(STDMETHODCALLTYPE * GetBoundingRectangles) (IUIAutomationTextRange * This, SAFEARRAY * *boundingRects);
	HRESULT(STDMETHODCALLTYPE * GetEnclosingElement) (IUIAutomationTextRange * This, IUIAutomationElement ** enclosingElement);
	HRESULT(STDMETHODCALLTYPE * GetText) (IUIAutomationTextRange * This, int maxLength, BSTR * text);
	HRESULT(STDMETHODCALLTYPE * Move) (IUIAutomationTextRange * This, enum TextUnit unit, int count, int *moved);
	HRESULT(STDMETHODCALLTYPE * MoveEndpointByUnit) (IUIAutomationTextRange * This, enum TextPatternRangeEndpoint endpoint, enum TextUnit unit, int count, int *moved);
	HRESULT(STDMETHODCALLTYPE * MoveEndpointByRange) (IUIAutomationTextRange * This, enum TextPatternRangeEndpoint srcEndPoint, IUIAutomationTextRange * range, enum TextPatternRangeEndpoint targetEndPoint);
	HRESULT(STDMETHODCALLTYPE * Select) (IUIAutomationTextRange * This);
	HRESULT(STDMETHODCALLTYPE * AddToSelection) (IUIAutomationTextRange * This);
	HRESULT(STDMETHODCALLTYPE * RemoveFromSelection) (IUIAutomationTextRange * This);
	HRESULT(STDMETHODCALLTYPE * ScrollIntoView) (IUIAutomationTextRange * This, BOOL alignToTop);
	HRESULT(STDMETHODCALLTYPE * GetChildren) (IUIAutomationTextRange * This, IUIAutomationElementArray ** children);
	END_INTERFACE
}  IUIAutomationTextRangeVtbl;
interface IUIAutomationTextRange
{
	CONST_VTBL struct IUIAutomationTextRangeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationTextRange_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationTextRange_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationTextRange_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationTextRange_Clone(This,clonedRange) ( (This)->lpVtbl -> Clone(This,clonedRange) )
#define IUIAutomationTextRange_Compare(This,range,areSame) ( (This)->lpVtbl -> Compare(This,range,areSame) )
#define IUIAutomationTextRange_CompareEndpoints(This,srcEndPoint,range,targetEndPoint,compValue) ( (This)->lpVtbl -> CompareEndpoints(This,srcEndPoint,range,targetEndPoint,compValue) )
#define IUIAutomationTextRange_ExpandToEnclosingUnit(This,textUnit) ( (This)->lpVtbl -> ExpandToEnclosingUnit(This,textUnit) )
#define IUIAutomationTextRange_FindAttribute(This,attr,val,backward,found) ( (This)->lpVtbl -> FindAttribute(This,attr,val,backward,found) )
#define IUIAutomationTextRange_FindText(This,text,backward,ignoreCase,found) ( (This)->lpVtbl -> FindText(This,text,backward,ignoreCase,found) )
#define IUIAutomationTextRange_GetAttributeValue(This,attr,value) ( (This)->lpVtbl -> GetAttributeValue(This,attr,value) )
#define IUIAutomationTextRange_GetBoundingRectangles(This,boundingRects) ( (This)->lpVtbl -> GetBoundingRectangles(This,boundingRects) )
#define IUIAutomationTextRange_GetEnclosingElement(This,enclosingElement) ( (This)->lpVtbl -> GetEnclosingElement(This,enclosingElement) )
#define IUIAutomationTextRange_GetText(This,maxLength,text) ( (This)->lpVtbl -> GetText(This,maxLength,text) )
#define IUIAutomationTextRange_Move(This,unit,count,moved) ( (This)->lpVtbl -> Move(This,unit,count,moved) )
#define IUIAutomationTextRange_MoveEndpointByUnit(This,endpoint,unit,count,moved) ( (This)->lpVtbl -> MoveEndpointByUnit(This,endpoint,unit,count,moved) )
#define IUIAutomationTextRange_MoveEndpointByRange(This,srcEndPoint,range,targetEndPoint) ( (This)->lpVtbl -> MoveEndpointByRange(This,srcEndPoint,range,targetEndPoint) )
#define IUIAutomationTextRange_Select(This) ( (This)->lpVtbl -> Select(This) )
#define IUIAutomationTextRange_AddToSelection(This) ( (This)->lpVtbl -> AddToSelection(This) )
#define IUIAutomationTextRange_RemoveFromSelection(This) ( (This)->lpVtbl -> RemoveFromSelection(This) )
#define IUIAutomationTextRange_ScrollIntoView(This,alignToTop) ( (This)->lpVtbl -> ScrollIntoView(This,alignToTop) )
#define IUIAutomationTextRange_GetChildren(This,children) ( (This)->lpVtbl -> GetChildren(This,children) )
#endif
#endif
#ifndef __IUIAutomationTextRangeArray_INTERFACE_DEFINED__
#define __IUIAutomationTextRangeArray_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationTextRangeArray;
typedef struct IUIAutomationTextRangeArrayVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationTextRangeArray * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationTextRangeArray * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationTextRangeArray * This);
	HRESULT(STDMETHODCALLTYPE * get_Length) (IUIAutomationTextRangeArray * This, int *length);
	HRESULT(STDMETHODCALLTYPE * GetElement) (IUIAutomationTextRangeArray * This, int index, IUIAutomationTextRange ** element);
	END_INTERFACE
}  IUIAutomationTextRangeArrayVtbl;
interface IUIAutomationTextRangeArray
{
	CONST_VTBL struct IUIAutomationTextRangeArrayVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationTextRangeArray_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationTextRangeArray_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationTextRangeArray_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationTextRangeArray_get_Length(This,length) ( (This)->lpVtbl -> get_Length(This,length) )
#define IUIAutomationTextRangeArray_GetElement(This,index,element) ( (This)->lpVtbl -> GetElement(This,index,element) )
#endif
#endif
#ifndef __IUIAutomationTextPattern_INTERFACE_DEFINED__
#define __IUIAutomationTextPattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationTextPattern;
typedef struct IUIAutomationTextPatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationTextPattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationTextPattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationTextPattern * This);
	HRESULT(STDMETHODCALLTYPE * RangeFromPoint) (IUIAutomationTextPattern * This, POINT pt, IUIAutomationTextRange ** range);
	HRESULT(STDMETHODCALLTYPE * RangeFromChild) (IUIAutomationTextPattern * This, IUIAutomationElement * child, IUIAutomationTextRange ** range);
	HRESULT(STDMETHODCALLTYPE * GetSelection) (IUIAutomationTextPattern * This, IUIAutomationTextRangeArray ** ranges);
	HRESULT(STDMETHODCALLTYPE * GetVisibleRanges) (IUIAutomationTextPattern * This, IUIAutomationTextRangeArray ** ranges);
	HRESULT(STDMETHODCALLTYPE * get_DocumentRange) (IUIAutomationTextPattern * This, IUIAutomationTextRange ** range);
	HRESULT(STDMETHODCALLTYPE * get_SupportedTextSelection) (IUIAutomationTextPattern * This, enum SupportedTextSelection * supportedTextSelection);
	END_INTERFACE
}  IUIAutomationTextPatternVtbl;
interface IUIAutomationTextPattern
{
	CONST_VTBL struct IUIAutomationTextPatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationTextPattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationTextPattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationTextPattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationTextPattern_RangeFromPoint(This,pt,range) ( (This)->lpVtbl -> RangeFromPoint(This,pt,range) )
#define IUIAutomationTextPattern_RangeFromChild(This,child,range) ( (This)->lpVtbl -> RangeFromChild(This,child,range) )
#define IUIAutomationTextPattern_GetSelection(This,ranges) ( (This)->lpVtbl -> GetSelection(This,ranges) )
#define IUIAutomationTextPattern_GetVisibleRanges(This,ranges) ( (This)->lpVtbl -> GetVisibleRanges(This,ranges) )
#define IUIAutomationTextPattern_get_DocumentRange(This,range) ( (This)->lpVtbl -> get_DocumentRange(This,range) )
#define IUIAutomationTextPattern_get_SupportedTextSelection(This,supportedTextSelection) ( (This)->lpVtbl -> get_SupportedTextSelection(This,supportedTextSelection) )
#endif
#endif
#ifndef __IUIAutomationLegacyIAccessiblePattern_INTERFACE_DEFINED__
#define __IUIAutomationLegacyIAccessiblePattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationLegacyIAccessiblePattern;
typedef struct IUIAutomationLegacyIAccessiblePatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationLegacyIAccessiblePattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationLegacyIAccessiblePattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationLegacyIAccessiblePattern * This);
	HRESULT(STDMETHODCALLTYPE * Select) (IUIAutomationLegacyIAccessiblePattern * This, long flagsSelect);
	HRESULT(STDMETHODCALLTYPE * DoDefaultAction) (IUIAutomationLegacyIAccessiblePattern * This);
	HRESULT(STDMETHODCALLTYPE * SetValue) (IUIAutomationLegacyIAccessiblePattern * This, LPCWSTR szValue);
	HRESULT(STDMETHODCALLTYPE * get_CurrentChildId) (IUIAutomationLegacyIAccessiblePattern * This, int *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_CurrentName) (IUIAutomationLegacyIAccessiblePattern * This, BSTR * pszName);
	HRESULT(STDMETHODCALLTYPE * get_CurrentValue) (IUIAutomationLegacyIAccessiblePattern * This, BSTR * pszValue);
	HRESULT(STDMETHODCALLTYPE * get_CurrentDescription) (IUIAutomationLegacyIAccessiblePattern * This, BSTR * pszDescription);
	HRESULT(STDMETHODCALLTYPE * get_CurrentRole) (IUIAutomationLegacyIAccessiblePattern * This, DWORD * pdwRole);
	HRESULT(STDMETHODCALLTYPE * get_CurrentState) (IUIAutomationLegacyIAccessiblePattern * This, DWORD * pdwState);
	HRESULT(STDMETHODCALLTYPE * get_CurrentHelp) (IUIAutomationLegacyIAccessiblePattern * This, BSTR * pszHelp);
	HRESULT(STDMETHODCALLTYPE * get_CurrentKeyboardShortcut) (IUIAutomationLegacyIAccessiblePattern * This, BSTR * pszKeyboardShortcut);
	HRESULT(STDMETHODCALLTYPE * GetCurrentSelection) (IUIAutomationLegacyIAccessiblePattern * This, IUIAutomationElementArray ** pvarSelectedChildren);
	HRESULT(STDMETHODCALLTYPE * get_CurrentDefaultAction) (IUIAutomationLegacyIAccessiblePattern * This, BSTR * pszDefaultAction);
	HRESULT(STDMETHODCALLTYPE * get_CachedChildId) (IUIAutomationLegacyIAccessiblePattern * This, int *pRetVal);
	HRESULT(STDMETHODCALLTYPE * get_CachedName) (IUIAutomationLegacyIAccessiblePattern * This, BSTR * pszName);
	HRESULT(STDMETHODCALLTYPE * get_CachedValue) (IUIAutomationLegacyIAccessiblePattern * This, BSTR * pszValue);
	HRESULT(STDMETHODCALLTYPE * get_CachedDescription) (IUIAutomationLegacyIAccessiblePattern * This, BSTR * pszDescription);
	HRESULT(STDMETHODCALLTYPE * get_CachedRole) (IUIAutomationLegacyIAccessiblePattern * This, DWORD * pdwRole);
	HRESULT(STDMETHODCALLTYPE * get_CachedState) (IUIAutomationLegacyIAccessiblePattern * This, DWORD * pdwState);
	HRESULT(STDMETHODCALLTYPE * get_CachedHelp) (IUIAutomationLegacyIAccessiblePattern * This, BSTR * pszHelp);
	HRESULT(STDMETHODCALLTYPE * get_CachedKeyboardShortcut) (IUIAutomationLegacyIAccessiblePattern * This, BSTR * pszKeyboardShortcut);
	HRESULT(STDMETHODCALLTYPE * GetCachedSelection) (IUIAutomationLegacyIAccessiblePattern * This, IUIAutomationElementArray ** pvarSelectedChildren);
	HRESULT(STDMETHODCALLTYPE * get_CachedDefaultAction) (IUIAutomationLegacyIAccessiblePattern * This, BSTR * pszDefaultAction);
	HRESULT(STDMETHODCALLTYPE * GetIAccessible) (IUIAutomationLegacyIAccessiblePattern * This, IAccessible ** ppAccessible);
	END_INTERFACE
}  IUIAutomationLegacyIAccessiblePatternVtbl;
interface IUIAutomationLegacyIAccessiblePattern
{
	CONST_VTBL struct IUIAutomationLegacyIAccessiblePatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationLegacyIAccessiblePattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationLegacyIAccessiblePattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationLegacyIAccessiblePattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationLegacyIAccessiblePattern_Select(This,flagsSelect) ( (This)->lpVtbl -> Select(This,flagsSelect) )
#define IUIAutomationLegacyIAccessiblePattern_DoDefaultAction(This) ( (This)->lpVtbl -> DoDefaultAction(This) )
#define IUIAutomationLegacyIAccessiblePattern_SetValue(This,szValue) ( (This)->lpVtbl -> SetValue(This,szValue) )
#define IUIAutomationLegacyIAccessiblePattern_get_CurrentChildId(This,pRetVal) ( (This)->lpVtbl -> get_CurrentChildId(This,pRetVal) )
#define IUIAutomationLegacyIAccessiblePattern_get_CurrentName(This,pszName) ( (This)->lpVtbl -> get_CurrentName(This,pszName) )
#define IUIAutomationLegacyIAccessiblePattern_get_CurrentValue(This,pszValue) ( (This)->lpVtbl -> get_CurrentValue(This,pszValue) )
#define IUIAutomationLegacyIAccessiblePattern_get_CurrentDescription(This,pszDescription) ( (This)->lpVtbl -> get_CurrentDescription(This,pszDescription) )
#define IUIAutomationLegacyIAccessiblePattern_get_CurrentRole(This,pdwRole) ( (This)->lpVtbl -> get_CurrentRole(This,pdwRole) )
#define IUIAutomationLegacyIAccessiblePattern_get_CurrentState(This,pdwState) ( (This)->lpVtbl -> get_CurrentState(This,pdwState) )
#define IUIAutomationLegacyIAccessiblePattern_get_CurrentHelp(This,pszHelp) ( (This)->lpVtbl -> get_CurrentHelp(This,pszHelp) )
#define IUIAutomationLegacyIAccessiblePattern_get_CurrentKeyboardShortcut(This,pszKeyboardShortcut) ( (This)->lpVtbl -> get_CurrentKeyboardShortcut(This,pszKeyboardShortcut) )
#define IUIAutomationLegacyIAccessiblePattern_GetCurrentSelection(This,pvarSelectedChildren) ( (This)->lpVtbl -> GetCurrentSelection(This,pvarSelectedChildren) )
#define IUIAutomationLegacyIAccessiblePattern_get_CurrentDefaultAction(This,pszDefaultAction) ( (This)->lpVtbl -> get_CurrentDefaultAction(This,pszDefaultAction) )
#define IUIAutomationLegacyIAccessiblePattern_get_CachedChildId(This,pRetVal) ( (This)->lpVtbl -> get_CachedChildId(This,pRetVal) )
#define IUIAutomationLegacyIAccessiblePattern_get_CachedName(This,pszName) ( (This)->lpVtbl -> get_CachedName(This,pszName) )
#define IUIAutomationLegacyIAccessiblePattern_get_CachedValue(This,pszValue) ( (This)->lpVtbl -> get_CachedValue(This,pszValue) )
#define IUIAutomationLegacyIAccessiblePattern_get_CachedDescription(This,pszDescription) ( (This)->lpVtbl -> get_CachedDescription(This,pszDescription) )
#define IUIAutomationLegacyIAccessiblePattern_get_CachedRole(This,pdwRole) ( (This)->lpVtbl -> get_CachedRole(This,pdwRole) )
#define IUIAutomationLegacyIAccessiblePattern_get_CachedState(This,pdwState) ( (This)->lpVtbl -> get_CachedState(This,pdwState) )
#define IUIAutomationLegacyIAccessiblePattern_get_CachedHelp(This,pszHelp) ( (This)->lpVtbl -> get_CachedHelp(This,pszHelp) )
#define IUIAutomationLegacyIAccessiblePattern_get_CachedKeyboardShortcut(This,pszKeyboardShortcut) ( (This)->lpVtbl -> get_CachedKeyboardShortcut(This,pszKeyboardShortcut) )
#define IUIAutomationLegacyIAccessiblePattern_GetCachedSelection(This,pvarSelectedChildren) ( (This)->lpVtbl -> GetCachedSelection(This,pvarSelectedChildren) )
#define IUIAutomationLegacyIAccessiblePattern_get_CachedDefaultAction(This,pszDefaultAction) ( (This)->lpVtbl -> get_CachedDefaultAction(This,pszDefaultAction) )
#define IUIAutomationLegacyIAccessiblePattern_GetIAccessible(This,ppAccessible) ( (This)->lpVtbl -> GetIAccessible(This,ppAccessible) )
#endif
#endif
#ifndef __IUIAutomationItemContainerPattern_INTERFACE_DEFINED__
#define __IUIAutomationItemContainerPattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationItemContainerPattern;
typedef struct IUIAutomationItemContainerPatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationItemContainerPattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationItemContainerPattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationItemContainerPattern * This);
	HRESULT(STDMETHODCALLTYPE * FindItemByProperty) (IUIAutomationItemContainerPattern * This, IUIAutomationElement * pStartAfter, PROPERTYID propertyId, VARIANT value, IUIAutomationElement ** pFound);
	END_INTERFACE
}  IUIAutomationItemContainerPatternVtbl;
interface IUIAutomationItemContainerPattern
{
	CONST_VTBL struct IUIAutomationItemContainerPatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationItemContainerPattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationItemContainerPattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationItemContainerPattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationItemContainerPattern_FindItemByProperty(This,pStartAfter,propertyId,value,pFound) ( (This)->lpVtbl -> FindItemByProperty(This,pStartAfter,propertyId,value,pFound) )
#endif
#endif
#ifndef __IUIAutomationVirtualizedItemPattern_INTERFACE_DEFINED__
#define __IUIAutomationVirtualizedItemPattern_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationVirtualizedItemPattern;
typedef struct IUIAutomationVirtualizedItemPatternVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationVirtualizedItemPattern * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationVirtualizedItemPattern * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationVirtualizedItemPattern * This);
	HRESULT(STDMETHODCALLTYPE * Realize) (IUIAutomationVirtualizedItemPattern * This);
	END_INTERFACE
}  IUIAutomationVirtualizedItemPatternVtbl;
interface IUIAutomationVirtualizedItemPattern
{
	CONST_VTBL struct IUIAutomationVirtualizedItemPatternVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationVirtualizedItemPattern_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationVirtualizedItemPattern_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationVirtualizedItemPattern_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationVirtualizedItemPattern_Realize(This) ( (This)->lpVtbl -> Realize(This) )
#endif
#endif
#ifndef __IUIAutomationProxyFactory_INTERFACE_DEFINED__
#define __IUIAutomationProxyFactory_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationProxyFactory;
typedef struct IUIAutomationProxyFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationProxyFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationProxyFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationProxyFactory * This);
	HRESULT(STDMETHODCALLTYPE * CreateProvider) (IUIAutomationProxyFactory * This, UIA_HWND hwnd, LONG idObject, LONG idChild, IRawElementProviderSimple ** provider);
	HRESULT(STDMETHODCALLTYPE * get_ProxyFactoryId) (IUIAutomationProxyFactory * This, BSTR * factoryId);
	END_INTERFACE
}  IUIAutomationProxyFactoryVtbl;
interface IUIAutomationProxyFactory
{
	CONST_VTBL struct IUIAutomationProxyFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationProxyFactory_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationProxyFactory_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationProxyFactory_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationProxyFactory_CreateProvider(This,hwnd,idObject,idChild,provider) ( (This)->lpVtbl -> CreateProvider(This,hwnd,idObject,idChild,provider) )
#define IUIAutomationProxyFactory_get_ProxyFactoryId(This,factoryId) ( (This)->lpVtbl -> get_ProxyFactoryId(This,factoryId) )
#endif
#endif
#ifndef __IUIAutomationProxyFactoryEntry_INTERFACE_DEFINED__
#define __IUIAutomationProxyFactoryEntry_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationProxyFactoryEntry;
typedef struct IUIAutomationProxyFactoryEntryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationProxyFactoryEntry * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationProxyFactoryEntry * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationProxyFactoryEntry * This);
	HRESULT(STDMETHODCALLTYPE * get_ProxyFactory) (IUIAutomationProxyFactoryEntry * This, IUIAutomationProxyFactory ** factory);
	HRESULT(STDMETHODCALLTYPE * get_ClassName) (IUIAutomationProxyFactoryEntry * This, BSTR * className);
	HRESULT(STDMETHODCALLTYPE * get_ImageName) (IUIAutomationProxyFactoryEntry * This, BSTR * imageName);
	HRESULT(STDMETHODCALLTYPE * get_AllowSubstringMatch) (IUIAutomationProxyFactoryEntry * This, BOOL * allowSubstringMatch);
	HRESULT(STDMETHODCALLTYPE * get_CanCheckBaseClass) (IUIAutomationProxyFactoryEntry * This, BOOL * canCheckBaseClass);
	HRESULT(STDMETHODCALLTYPE * get_NeedsAdviseEvents) (IUIAutomationProxyFactoryEntry * This, BOOL * adviseEvents);
	HRESULT(STDMETHODCALLTYPE * put_ClassName) (IUIAutomationProxyFactoryEntry * This, LPCWSTR className);
	HRESULT(STDMETHODCALLTYPE * put_ImageName) (IUIAutomationProxyFactoryEntry * This, LPCWSTR imageName);
	HRESULT(STDMETHODCALLTYPE * put_AllowSubstringMatch) (IUIAutomationProxyFactoryEntry * This, BOOL allowSubstringMatch);
	HRESULT(STDMETHODCALLTYPE * put_CanCheckBaseClass) (IUIAutomationProxyFactoryEntry * This, BOOL canCheckBaseClass);
	HRESULT(STDMETHODCALLTYPE * put_NeedsAdviseEvents) (IUIAutomationProxyFactoryEntry * This, BOOL adviseEvents);
	HRESULT(STDMETHODCALLTYPE * SetWinEventsForAutomationEvent) (IUIAutomationProxyFactoryEntry * This, EVENTID eventId, PROPERTYID propertyId, SAFEARRAY * winEvents);
	HRESULT(STDMETHODCALLTYPE * GetWinEventsForAutomationEvent) (IUIAutomationProxyFactoryEntry * This, EVENTID eventId, PROPERTYID propertyId, SAFEARRAY * *winEvents);
	END_INTERFACE
}  IUIAutomationProxyFactoryEntryVtbl;
interface IUIAutomationProxyFactoryEntry
{
	CONST_VTBL struct IUIAutomationProxyFactoryEntryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationProxyFactoryEntry_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationProxyFactoryEntry_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationProxyFactoryEntry_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationProxyFactoryEntry_get_ProxyFactory(This,factory) ( (This)->lpVtbl -> get_ProxyFactory(This,factory) )
#define IUIAutomationProxyFactoryEntry_get_ClassName(This,className) ( (This)->lpVtbl -> get_ClassName(This,className) )
#define IUIAutomationProxyFactoryEntry_get_ImageName(This,imageName) ( (This)->lpVtbl -> get_ImageName(This,imageName) )
#define IUIAutomationProxyFactoryEntry_get_AllowSubstringMatch(This,allowSubstringMatch) ( (This)->lpVtbl -> get_AllowSubstringMatch(This,allowSubstringMatch) )
#define IUIAutomationProxyFactoryEntry_get_CanCheckBaseClass(This,canCheckBaseClass) ( (This)->lpVtbl -> get_CanCheckBaseClass(This,canCheckBaseClass) )
#define IUIAutomationProxyFactoryEntry_get_NeedsAdviseEvents(This,adviseEvents) ( (This)->lpVtbl -> get_NeedsAdviseEvents(This,adviseEvents) )
#define IUIAutomationProxyFactoryEntry_put_ClassName(This,className) ( (This)->lpVtbl -> put_ClassName(This,className) )
#define IUIAutomationProxyFactoryEntry_put_ImageName(This,imageName) ( (This)->lpVtbl -> put_ImageName(This,imageName) )
#define IUIAutomationProxyFactoryEntry_put_AllowSubstringMatch(This,allowSubstringMatch) ( (This)->lpVtbl -> put_AllowSubstringMatch(This,allowSubstringMatch) )
#define IUIAutomationProxyFactoryEntry_put_CanCheckBaseClass(This,canCheckBaseClass) ( (This)->lpVtbl -> put_CanCheckBaseClass(This,canCheckBaseClass) )
#define IUIAutomationProxyFactoryEntry_put_NeedsAdviseEvents(This,adviseEvents) ( (This)->lpVtbl -> put_NeedsAdviseEvents(This,adviseEvents) )
#define IUIAutomationProxyFactoryEntry_SetWinEventsForAutomationEvent(This,eventId,propertyId,winEvents) ( (This)->lpVtbl -> SetWinEventsForAutomationEvent(This,eventId,propertyId,winEvents) )
#define IUIAutomationProxyFactoryEntry_GetWinEventsForAutomationEvent(This,eventId,propertyId,winEvents) ( (This)->lpVtbl -> GetWinEventsForAutomationEvent(This,eventId,propertyId,winEvents) )
#endif
#endif
#ifndef __IUIAutomationProxyFactoryMapping_INTERFACE_DEFINED__
#define __IUIAutomationProxyFactoryMapping_INTERFACE_DEFINED__
extern const IID IID_IUIAutomationProxyFactoryMapping;
typedef struct IUIAutomationProxyFactoryMappingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomationProxyFactoryMapping * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomationProxyFactoryMapping * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomationProxyFactoryMapping * This);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IUIAutomationProxyFactoryMapping * This, UINT * count);
	HRESULT(STDMETHODCALLTYPE * GetTable) (IUIAutomationProxyFactoryMapping * This, SAFEARRAY * *table);
	HRESULT(STDMETHODCALLTYPE * GetEntry) (IUIAutomationProxyFactoryMapping * This, UINT index, IUIAutomationProxyFactoryEntry ** entry);
	HRESULT(STDMETHODCALLTYPE * SetTable) (IUIAutomationProxyFactoryMapping * This, SAFEARRAY * factoryList);
	HRESULT(STDMETHODCALLTYPE * InsertEntries) (IUIAutomationProxyFactoryMapping * This, UINT before, SAFEARRAY * factoryList);
	HRESULT(STDMETHODCALLTYPE * InsertEntry) (IUIAutomationProxyFactoryMapping * This, UINT before, IUIAutomationProxyFactoryEntry * factory);
	HRESULT(STDMETHODCALLTYPE * RemoveEntry) (IUIAutomationProxyFactoryMapping * This, UINT index);
	HRESULT(STDMETHODCALLTYPE * ClearTable) (IUIAutomationProxyFactoryMapping * This);
	HRESULT(STDMETHODCALLTYPE * RestoreDefaultTable) (IUIAutomationProxyFactoryMapping * This);
	END_INTERFACE
}  IUIAutomationProxyFactoryMappingVtbl;
interface IUIAutomationProxyFactoryMapping
{
	CONST_VTBL struct IUIAutomationProxyFactoryMappingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomationProxyFactoryMapping_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomationProxyFactoryMapping_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomationProxyFactoryMapping_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomationProxyFactoryMapping_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define IUIAutomationProxyFactoryMapping_GetTable(This,table) ( (This)->lpVtbl -> GetTable(This,table) )
#define IUIAutomationProxyFactoryMapping_GetEntry(This,index,entry) ( (This)->lpVtbl -> GetEntry(This,index,entry) )
#define IUIAutomationProxyFactoryMapping_SetTable(This,factoryList) ( (This)->lpVtbl -> SetTable(This,factoryList) )
#define IUIAutomationProxyFactoryMapping_InsertEntries(This,before,factoryList) ( (This)->lpVtbl -> InsertEntries(This,before,factoryList) )
#define IUIAutomationProxyFactoryMapping_InsertEntry(This,before,factory) ( (This)->lpVtbl -> InsertEntry(This,before,factory) )
#define IUIAutomationProxyFactoryMapping_RemoveEntry(This,index) ( (This)->lpVtbl -> RemoveEntry(This,index) )
#define IUIAutomationProxyFactoryMapping_ClearTable(This) ( (This)->lpVtbl -> ClearTable(This) )
#define IUIAutomationProxyFactoryMapping_RestoreDefaultTable(This) ( (This)->lpVtbl -> RestoreDefaultTable(This) )
#endif
#endif
#ifndef __IUIAutomation_INTERFACE_DEFINED__
#define __IUIAutomation_INTERFACE_DEFINED__
extern const IID IID_IUIAutomation;
typedef struct IUIAutomationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUIAutomation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUIAutomation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUIAutomation * This);
	HRESULT(STDMETHODCALLTYPE * CompareElements) (IUIAutomation * This, IUIAutomationElement * el1, IUIAutomationElement * el2, BOOL * areSame);
	HRESULT(STDMETHODCALLTYPE * CompareRuntimeIds) (IUIAutomation * This, SAFEARRAY * runtimeId1, SAFEARRAY * runtimeId2, BOOL * areSame);
	HRESULT(STDMETHODCALLTYPE * GetRootElement) (IUIAutomation * This, IUIAutomationElement ** root);
	HRESULT(STDMETHODCALLTYPE * ElementFromHandle) (IUIAutomation * This, UIA_HWND hwnd, IUIAutomationElement ** element);
	HRESULT(STDMETHODCALLTYPE * ElementFromPoint) (IUIAutomation * This, POINT pt, IUIAutomationElement ** element);
	HRESULT(STDMETHODCALLTYPE * GetFocusedElement) (IUIAutomation * This, IUIAutomationElement ** element);
	HRESULT(STDMETHODCALLTYPE * GetRootElementBuildCache) (IUIAutomation * This, IUIAutomationCacheRequest * cacheRequest, IUIAutomationElement ** root);
	HRESULT(STDMETHODCALLTYPE * ElementFromHandleBuildCache) (IUIAutomation * This, UIA_HWND hwnd, IUIAutomationCacheRequest * cacheRequest, IUIAutomationElement ** element);
	HRESULT(STDMETHODCALLTYPE * ElementFromPointBuildCache) (IUIAutomation * This, POINT pt, IUIAutomationCacheRequest * cacheRequest, IUIAutomationElement ** element);
	HRESULT(STDMETHODCALLTYPE * GetFocusedElementBuildCache) (IUIAutomation * This, IUIAutomationCacheRequest * cacheRequest, IUIAutomationElement ** element);
	HRESULT(STDMETHODCALLTYPE * CreateTreeWalker) (IUIAutomation * This, IUIAutomationCondition * pCondition, IUIAutomationTreeWalker ** walker);
	HRESULT(STDMETHODCALLTYPE * get_ControlViewWalker) (IUIAutomation * This, IUIAutomationTreeWalker ** walker);
	HRESULT(STDMETHODCALLTYPE * get_ContentViewWalker) (IUIAutomation * This, IUIAutomationTreeWalker ** walker);
	HRESULT(STDMETHODCALLTYPE * get_RawViewWalker) (IUIAutomation * This, IUIAutomationTreeWalker ** walker);
	HRESULT(STDMETHODCALLTYPE * get_RawViewCondition) (IUIAutomation * This, IUIAutomationCondition ** condition);
	HRESULT(STDMETHODCALLTYPE * get_ControlViewCondition) (IUIAutomation * This, IUIAutomationCondition ** condition);
	HRESULT(STDMETHODCALLTYPE * get_ContentViewCondition) (IUIAutomation * This, IUIAutomationCondition ** condition);
	HRESULT(STDMETHODCALLTYPE * CreateCacheRequest) (IUIAutomation * This, IUIAutomationCacheRequest ** cacheRequest);
	HRESULT(STDMETHODCALLTYPE * CreateTrueCondition) (IUIAutomation * This, IUIAutomationCondition ** newCondition);
	HRESULT(STDMETHODCALLTYPE * CreateFalseCondition) (IUIAutomation * This, IUIAutomationCondition ** newCondition);
	HRESULT(STDMETHODCALLTYPE * CreatePropertyCondition) (IUIAutomation * This, PROPERTYID propertyId, VARIANT value, IUIAutomationCondition ** newCondition);
	HRESULT(STDMETHODCALLTYPE * CreatePropertyConditionEx) (IUIAutomation * This, PROPERTYID propertyId, VARIANT value, enum PropertyConditionFlags flags, IUIAutomationCondition ** newCondition);
	HRESULT(STDMETHODCALLTYPE * CreateAndCondition) (IUIAutomation * This, IUIAutomationCondition * condition1, IUIAutomationCondition * condition2, IUIAutomationCondition ** newCondition);
	HRESULT(STDMETHODCALLTYPE * CreateAndConditionFromArray) (IUIAutomation * This, SAFEARRAY * conditions, IUIAutomationCondition ** newCondition);
	HRESULT(STDMETHODCALLTYPE * CreateAndConditionFromNativeArray) (IUIAutomation * This, IUIAutomationCondition ** conditions, int conditionCount, IUIAutomationCondition ** newCondition);
	HRESULT(STDMETHODCALLTYPE * CreateOrCondition) (IUIAutomation * This, IUIAutomationCondition * condition1, IUIAutomationCondition * condition2, IUIAutomationCondition ** newCondition);
	HRESULT(STDMETHODCALLTYPE * CreateOrConditionFromArray) (IUIAutomation * This, SAFEARRAY * conditions, IUIAutomationCondition ** newCondition);
	HRESULT(STDMETHODCALLTYPE * CreateOrConditionFromNativeArray) (IUIAutomation * This, IUIAutomationCondition ** conditions, int conditionCount, IUIAutomationCondition ** newCondition);
	HRESULT(STDMETHODCALLTYPE * CreateNotCondition) (IUIAutomation * This, IUIAutomationCondition * condition, IUIAutomationCondition ** newCondition);
	HRESULT(STDMETHODCALLTYPE * AddAutomationEventHandler) (IUIAutomation * This, EVENTID eventId, IUIAutomationElement * element, enum TreeScope scope, IUIAutomationCacheRequest * cacheRequest, IUIAutomationEventHandler * handler);
	HRESULT(STDMETHODCALLTYPE * RemoveAutomationEventHandler) (IUIAutomation * This, EVENTID eventId, IUIAutomationElement * element, IUIAutomationEventHandler * handler);
	HRESULT(STDMETHODCALLTYPE * AddPropertyChangedEventHandlerNativeArray) (IUIAutomation * This, IUIAutomationElement * element, enum TreeScope scope, IUIAutomationCacheRequest * cacheRequest, IUIAutomationPropertyChangedEventHandler * handler, PROPERTYID * propertyArray, int propertyCount);
	HRESULT(STDMETHODCALLTYPE * AddPropertyChangedEventHandler) (IUIAutomation * This, IUIAutomationElement * element, enum TreeScope scope, IUIAutomationCacheRequest * cacheRequest, IUIAutomationPropertyChangedEventHandler * handler, SAFEARRAY * propertyArray);
	HRESULT(STDMETHODCALLTYPE * RemovePropertyChangedEventHandler) (IUIAutomation * This, IUIAutomationElement * element, IUIAutomationPropertyChangedEventHandler * handler);
	HRESULT(STDMETHODCALLTYPE * AddStructureChangedEventHandler) (IUIAutomation * This, IUIAutomationElement * element, enum TreeScope scope, IUIAutomationCacheRequest * cacheRequest, IUIAutomationStructureChangedEventHandler * handler);
	HRESULT(STDMETHODCALLTYPE * RemoveStructureChangedEventHandler) (IUIAutomation * This, IUIAutomationElement * element, IUIAutomationStructureChangedEventHandler * handler);
	HRESULT(STDMETHODCALLTYPE * AddFocusChangedEventHandler) (IUIAutomation * This, IUIAutomationCacheRequest * cacheRequest, IUIAutomationFocusChangedEventHandler * handler);
	HRESULT(STDMETHODCALLTYPE * RemoveFocusChangedEventHandler) (IUIAutomation * This, IUIAutomationFocusChangedEventHandler * handler);
	HRESULT(STDMETHODCALLTYPE * RemoveAllEventHandlers) (IUIAutomation * This);
	HRESULT(STDMETHODCALLTYPE * IntNativeArrayToSafeArray) (IUIAutomation * This, int *array, int arrayCount, SAFEARRAY * *safeArray);
	HRESULT(STDMETHODCALLTYPE * IntSafeArrayToNativeArray) (IUIAutomation * This, SAFEARRAY * intArray, int **array, int *arrayCount);
	HRESULT(STDMETHODCALLTYPE * RectToVariant) (IUIAutomation * This, RECT rc, VARIANT * var);
	HRESULT(STDMETHODCALLTYPE * VariantToRect) (IUIAutomation * This, VARIANT var, RECT * rc);
	HRESULT(STDMETHODCALLTYPE * SafeArrayToRectNativeArray) (IUIAutomation * This, SAFEARRAY * rects, RECT ** rectArray, int *rectArrayCount);
	HRESULT(STDMETHODCALLTYPE * CreateProxyFactoryEntry) (IUIAutomation * This, IUIAutomationProxyFactory * factory, IUIAutomationProxyFactoryEntry ** factoryEntry);
	HRESULT(STDMETHODCALLTYPE * get_ProxyFactoryMapping) (IUIAutomation * This, IUIAutomationProxyFactoryMapping ** factoryMapping);
	HRESULT(STDMETHODCALLTYPE * GetPropertyProgrammaticName) (IUIAutomation * This, PROPERTYID property, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * GetPatternProgrammaticName) (IUIAutomation * This, PATTERNID pattern, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * PollForPotentialSupportedPatterns) (IUIAutomation * This, IUIAutomationElement * pElement, SAFEARRAY * *patternIds, SAFEARRAY * *patternNames);
	HRESULT(STDMETHODCALLTYPE * PollForPotentialSupportedProperties) (IUIAutomation * This, IUIAutomationElement * pElement, SAFEARRAY * *propertyIds, SAFEARRAY * *propertyNames);
	HRESULT(STDMETHODCALLTYPE * CheckNotSupported) (IUIAutomation * This, VARIANT value, BOOL * isNotSupported);
	HRESULT(STDMETHODCALLTYPE * get_ReservedNotSupportedValue) (IUIAutomation * This, IUnknown ** notSupportedValue);
	HRESULT(STDMETHODCALLTYPE * get_ReservedMixedAttributeValue) (IUIAutomation * This, IUnknown ** mixedAttributeValue);
	HRESULT(STDMETHODCALLTYPE * ElementFromIAccessible) (IUIAutomation * This, IAccessible * accessible, int childId, IUIAutomationElement ** element);
	HRESULT(STDMETHODCALLTYPE * ElementFromIAccessibleBuildCache) (IUIAutomation * This, IAccessible * accessible, int childId, IUIAutomationCacheRequest * cacheRequest, IUIAutomationElement ** element);
	END_INTERFACE
}  IUIAutomationVtbl;
interface IUIAutomation
{
	CONST_VTBL struct IUIAutomationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUIAutomation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUIAutomation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUIAutomation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUIAutomation_CompareElements(This,el1,el2,areSame) ( (This)->lpVtbl -> CompareElements(This,el1,el2,areSame) )
#define IUIAutomation_CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame) ( (This)->lpVtbl -> CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame) )
#define IUIAutomation_GetRootElement(This,root) ( (This)->lpVtbl -> GetRootElement(This,root) )
#define IUIAutomation_ElementFromHandle(This,hwnd,element) ( (This)->lpVtbl -> ElementFromHandle(This,hwnd,element) )
#define IUIAutomation_ElementFromPoint(This,pt,element) ( (This)->lpVtbl -> ElementFromPoint(This,pt,element) )
#define IUIAutomation_GetFocusedElement(This,element) ( (This)->lpVtbl -> GetFocusedElement(This,element) )
#define IUIAutomation_GetRootElementBuildCache(This,cacheRequest,root) ( (This)->lpVtbl -> GetRootElementBuildCache(This,cacheRequest,root) )
#define IUIAutomation_ElementFromHandleBuildCache(This,hwnd,cacheRequest,element) ( (This)->lpVtbl -> ElementFromHandleBuildCache(This,hwnd,cacheRequest,element) )
#define IUIAutomation_ElementFromPointBuildCache(This,pt,cacheRequest,element) ( (This)->lpVtbl -> ElementFromPointBuildCache(This,pt,cacheRequest,element) )
#define IUIAutomation_GetFocusedElementBuildCache(This,cacheRequest,element) ( (This)->lpVtbl -> GetFocusedElementBuildCache(This,cacheRequest,element) )
#define IUIAutomation_CreateTreeWalker(This,pCondition,walker) ( (This)->lpVtbl -> CreateTreeWalker(This,pCondition,walker) )
#define IUIAutomation_get_ControlViewWalker(This,walker) ( (This)->lpVtbl -> get_ControlViewWalker(This,walker) )
#define IUIAutomation_get_ContentViewWalker(This,walker) ( (This)->lpVtbl -> get_ContentViewWalker(This,walker) )
#define IUIAutomation_get_RawViewWalker(This,walker) ( (This)->lpVtbl -> get_RawViewWalker(This,walker) )
#define IUIAutomation_get_RawViewCondition(This,condition) ( (This)->lpVtbl -> get_RawViewCondition(This,condition) )
#define IUIAutomation_get_ControlViewCondition(This,condition) ( (This)->lpVtbl -> get_ControlViewCondition(This,condition) )
#define IUIAutomation_get_ContentViewCondition(This,condition) ( (This)->lpVtbl -> get_ContentViewCondition(This,condition) )
#define IUIAutomation_CreateCacheRequest(This,cacheRequest) ( (This)->lpVtbl -> CreateCacheRequest(This,cacheRequest) )
#define IUIAutomation_CreateTrueCondition(This,newCondition) ( (This)->lpVtbl -> CreateTrueCondition(This,newCondition) )
#define IUIAutomation_CreateFalseCondition(This,newCondition) ( (This)->lpVtbl -> CreateFalseCondition(This,newCondition) )
#define IUIAutomation_CreatePropertyCondition(This,propertyId,value,newCondition) ( (This)->lpVtbl -> CreatePropertyCondition(This,propertyId,value,newCondition) )
#define IUIAutomation_CreatePropertyConditionEx(This,propertyId,value,flags,newCondition) ( (This)->lpVtbl -> CreatePropertyConditionEx(This,propertyId,value,flags,newCondition) )
#define IUIAutomation_CreateAndCondition(This,condition1,condition2,newCondition) ( (This)->lpVtbl -> CreateAndCondition(This,condition1,condition2,newCondition) )
#define IUIAutomation_CreateAndConditionFromArray(This,conditions,newCondition) ( (This)->lpVtbl -> CreateAndConditionFromArray(This,conditions,newCondition) )
#define IUIAutomation_CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition) ( (This)->lpVtbl -> CreateAndConditionFromNativeArray(This,conditions,conditionCount,newCondition) )
#define IUIAutomation_CreateOrCondition(This,condition1,condition2,newCondition) ( (This)->lpVtbl -> CreateOrCondition(This,condition1,condition2,newCondition) )
#define IUIAutomation_CreateOrConditionFromArray(This,conditions,newCondition) ( (This)->lpVtbl -> CreateOrConditionFromArray(This,conditions,newCondition) )
#define IUIAutomation_CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition) ( (This)->lpVtbl -> CreateOrConditionFromNativeArray(This,conditions,conditionCount,newCondition) )
#define IUIAutomation_CreateNotCondition(This,condition,newCondition) ( (This)->lpVtbl -> CreateNotCondition(This,condition,newCondition) )
#define IUIAutomation_AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler) ( (This)->lpVtbl -> AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler) )
#define IUIAutomation_RemoveAutomationEventHandler(This,eventId,element,handler) ( (This)->lpVtbl -> RemoveAutomationEventHandler(This,eventId,element,handler) )
#define IUIAutomation_AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount) ( (This)->lpVtbl -> AddPropertyChangedEventHandlerNativeArray(This,element,scope,cacheRequest,handler,propertyArray,propertyCount) )
#define IUIAutomation_AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray) ( (This)->lpVtbl -> AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray) )
#define IUIAutomation_RemovePropertyChangedEventHandler(This,element,handler) ( (This)->lpVtbl -> RemovePropertyChangedEventHandler(This,element,handler) )
#define IUIAutomation_AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler) ( (This)->lpVtbl -> AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler) )
#define IUIAutomation_RemoveStructureChangedEventHandler(This,element,handler) ( (This)->lpVtbl -> RemoveStructureChangedEventHandler(This,element,handler) )
#define IUIAutomation_AddFocusChangedEventHandler(This,cacheRequest,handler) ( (This)->lpVtbl -> AddFocusChangedEventHandler(This,cacheRequest,handler) )
#define IUIAutomation_RemoveFocusChangedEventHandler(This,handler) ( (This)->lpVtbl -> RemoveFocusChangedEventHandler(This,handler) )
#define IUIAutomation_RemoveAllEventHandlers(This) ( (This)->lpVtbl -> RemoveAllEventHandlers(This) )
#define IUIAutomation_IntNativeArrayToSafeArray(This,array,arrayCount,safeArray) ( (This)->lpVtbl -> IntNativeArrayToSafeArray(This,array,arrayCount,safeArray) )
#define IUIAutomation_IntSafeArrayToNativeArray(This,intArray,array,arrayCount) ( (This)->lpVtbl -> IntSafeArrayToNativeArray(This,intArray,array,arrayCount) )
#define IUIAutomation_RectToVariant(This,rc,var) ( (This)->lpVtbl -> RectToVariant(This,rc,var) )
#define IUIAutomation_VariantToRect(This,var,rc) ( (This)->lpVtbl -> VariantToRect(This,var,rc) )
#define IUIAutomation_SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount) ( (This)->lpVtbl -> SafeArrayToRectNativeArray(This,rects,rectArray,rectArrayCount) )
#define IUIAutomation_CreateProxyFactoryEntry(This,factory,factoryEntry) ( (This)->lpVtbl -> CreateProxyFactoryEntry(This,factory,factoryEntry) )
#define IUIAutomation_get_ProxyFactoryMapping(This,factoryMapping) ( (This)->lpVtbl -> get_ProxyFactoryMapping(This,factoryMapping) )
#define IUIAutomation_GetPropertyProgrammaticName(This,property,name) ( (This)->lpVtbl -> GetPropertyProgrammaticName(This,property,name) )
#define IUIAutomation_GetPatternProgrammaticName(This,pattern,name) ( (This)->lpVtbl -> GetPatternProgrammaticName(This,pattern,name) )
#define IUIAutomation_PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames) ( (This)->lpVtbl -> PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames) )
#define IUIAutomation_PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames) ( (This)->lpVtbl -> PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames) )
#define IUIAutomation_CheckNotSupported(This,value,isNotSupported) ( (This)->lpVtbl -> CheckNotSupported(This,value,isNotSupported) )
#define IUIAutomation_get_ReservedNotSupportedValue(This,notSupportedValue) ( (This)->lpVtbl -> get_ReservedNotSupportedValue(This,notSupportedValue) )
#define IUIAutomation_get_ReservedMixedAttributeValue(This,mixedAttributeValue) ( (This)->lpVtbl -> get_ReservedMixedAttributeValue(This,mixedAttributeValue) )
#define IUIAutomation_ElementFromIAccessible(This,accessible,childId,element) ( (This)->lpVtbl -> ElementFromIAccessible(This,accessible,childId,element) )
#define IUIAutomation_ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element) ( (This)->lpVtbl -> ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element) )
#endif
#endif
extern const CLSID CLSID_CUIAutomation;
#endif
#endif
